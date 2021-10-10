/*
==============
LUIUserDataPool<LUITween,0,1200>::Allocate
==============
*/

LUITween *__fastcall LUIUserDataPool<LUITween,0,1200>::Allocate(LUIUserDataPool<LUITween,0,1200> *this, int maxAttempts, const char *poolName, lua_State *luaVM)
{
  return ?Allocate@?$LUIUserDataPool@ULUITween@@$0A@$0ELA@@@QEAAPEAULUITween@@HPEBDPEAUlua_State@@@Z(this, maxAttempts, poolName, luaVM);
}

/*
==============
LUIPool<LUITraceRequest,200,1>::Free
==============
*/

bool __fastcall LUIPool<LUITraceRequest,200,1>::Free(LUIPool<LUITraceRequest,200,1> *this, LUITraceRequest *data)
{
  return ?Free@?$LUIPool@ULUITraceRequest@@$0MI@$00@@QEAA_NPEAULUITraceRequest@@@Z(this, data);
}

/*
==============
LUIUserDataPool<LUIElement,0,4500>::Allocate
==============
*/

LUIElement *__fastcall LUIUserDataPool<LUIElement,0,4500>::Allocate(LUIUserDataPool<LUIElement,0,4500> *this, int maxAttempts, const char *poolName, lua_State *luaVM)
{
  return ?Allocate@?$LUIUserDataPool@ULUIElement@@$0A@$0BBJE@@@QEAAPEAULUIElement@@HPEBDPEAUlua_State@@@Z(this, maxAttempts, poolName, luaVM);
}

/*
==============
LUIPool<LUITraceQueryResource,8,0>::Free
==============
*/

bool __fastcall LUIPool<LUITraceQueryResource,8,0>::Free(LUIPool<LUITraceQueryResource,8,0> *this, LUITraceQueryResource *data)
{
  return ?Free@?$LUIPool@ULUITraceQueryResource@@$07$0A@@@QEAA_NPEAULUITraceQueryResource@@@Z(this, data);
}

/*
==============
LUIUserDataPool<LUISubscriptionsHolder,0,3000>::Allocate
==============
*/

LUISubscriptionsHolder *__fastcall LUIUserDataPool<LUISubscriptionsHolder,0,3000>::Allocate(LUIUserDataPool<LUISubscriptionsHolder,0,3000> *this, int maxAttempts, const char *poolName, lua_State *luaVM)
{
  return ?Allocate@?$LUIUserDataPool@ULUISubscriptionsHolder@@$0A@$0LLI@@@QEAAPEAULUISubscriptionsHolder@@HPEBDPEAUlua_State@@@Z(this, maxAttempts, poolName, luaVM);
}

/*
==============
LUIPool<LUISubscriptionHeld,3000,1>::Free
==============
*/

bool __fastcall LUIPool<LUISubscriptionHeld,3000,1>::Free(LUIPool<LUISubscriptionHeld,3000,1> *this, LUISubscriptionHeld *data)
{
  return ?Free@?$LUIPool@ULUISubscriptionHeld@@$0LLI@$00@@QEAA_NPEAULUISubscriptionHeld@@@Z(this, data);
}

/*
==============
LUIUserDataPool<LUIElement,0,4500>::Allocate
==============
*/
LUIElement *LUIUserDataPool<LUIElement,0,4500>::Allocate(LUIUserDataPool<LUIElement,0,4500> *this, int maxAttempts, const char *poolName, lua_State *luaVM)
{
  const char *v5; 
  int v8; 
  unsigned __int16 m_firstFree; 
  unsigned __int16 *v10; 
  unsigned __int16 v11; 
  const dvar_t *v12; 
  unsigned int v13; 
  int v14; 
  const char *v17; 
  bool (__fastcall *m_allocationErrorCallback)(const LUIUserDataPool<LUIElement,0,4500> *); 
  char *fmt; 
  __int64 v21; 

  v5 = poolName;
  if ( maxAttempts <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 184, ASSERT_TYPE_ASSERT, "(maxAttempts > 0)", (const char *)&queryFormat, "maxAttempts > 0") )
    __debugbreak();
  v8 = 0;
  if ( maxAttempts <= 0 )
    goto LABEL_38;
  while ( 1 )
  {
    m_firstFree = this->m_firstFree;
    if ( m_firstFree < 0x1194u )
      break;
LABEL_11:
    if ( v8 >= maxAttempts - 1 )
    {
      Com_PrintError(13, "LUI ERROR: Failed to allocate from %s pool. Restarting the Lua VM.\n", v5);
      v17 = "unknown pool";
      if ( v5 )
        v17 = v5;
      LUI_ReportErrorWithInfo("Failed to allocate from LUI pool ", v17, luaVM);
      m_allocationErrorCallback = this->m_allocationErrorCallback;
      if ( !m_allocationErrorCallback || !m_allocationErrorCallback(this) )
      {
        if ( LUI_MemErrorsFatal->current.enabled )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144462E70, 521i64);
        else
          LUI_CoD_Error(4);
      }
      goto LABEL_37;
    }
    v12 = DVARBOOL_lui_pool_incremental_gc_enabled;
    if ( !DVARBOOL_lui_pool_incremental_gc_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_pool_incremental_gc_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( !v12->current.enabled )
    {
      LODWORD(fmt) = maxAttempts;
      LUI_EmergencyFullGC(luaVM, "LUI: Could not allocate from %s pool, attempt %d/%d", v5, (unsigned int)(v8 + 1), fmt);
      goto LABEL_37;
    }
    __rdtsc();
    Sys_ProfBeginNamedEvent(0xFF0000FF, "LUI_EmergencyGCUntilResourceAvailable");
    v13 = 0;
    v14 = 0;
    while ( j_lua_gc(luaVM, 5, 0) )
    {
      ++v13;
      v14 = 0;
LABEL_26:
      if ( v13 >= 4 || this->m_firstFree < 0x1194u )
        goto LABEL_22;
    }
    if ( (unsigned int)++v14 < 0x249F0 )
      goto LABEL_26;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.h", 828, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "LUI_EmergencyGCUntilResourceAvailable: possible infinite loop detected.") )
      __debugbreak();
    Com_PrintError(13, "LUI_EmergencyGCUntilResourceAvailable: possible infinite loop detected. Terminating early.\n");
LABEL_22:
    if ( v13 > 1 )
      LUI_CoD_ClearFullGCCycleFlag();
    Sys_ProfEndNamedEvent();
    __rdtsc();
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    LODWORD(v21) = v13;
    LODWORD(fmt) = maxAttempts;
    v5 = poolName;
    Com_PrintWarning(13, "LUI: Could not allocate from %s pool, attempt %d/%d. Did emergency inc gc (%u full cycles) over %4.3f ms\n", poolName, (unsigned int)(v8 + 1), fmt, v21, (double)(*(double *)&_XMM0 * msecPerRawTimerTick));
LABEL_37:
    if ( ++v8 >= maxAttempts )
LABEL_38:
      j_luaL_error(luaVM, (const char *)&queryFormat, "object != NULL");
  }
  this->m_firstFree = this->m_poolData[m_firstFree];
  this->m_poolData[m_firstFree] = this->m_iteration;
  v10 = (unsigned __int16 *)j_lua_newuserdata(luaVM, 4ui64);
  *v10 = m_firstFree;
  v10[1] = this->m_iteration;
  v11 = this->m_iteration + 1;
  if ( v11 >= 0x1195u )
    this->m_iteration = v11;
  else
    this->m_iteration = 4501;
  this->m_lastAllocated = m_firstFree;
  if ( !&this->m_pool[m_firstFree] )
  {
    v5 = poolName;
    goto LABEL_11;
  }
  LUI_Interface_CheckLowMemory(luaVM);
  return (LUIElement *)((char *)this + 320 * m_firstFree);
}

/*
==============
LUIUserDataPool<LUISubscriptionsHolder,0,3000>::Allocate
==============
*/
LUISubscriptionsHolder *LUIUserDataPool<LUISubscriptionsHolder,0,3000>::Allocate(LUIUserDataPool<LUISubscriptionsHolder,0,3000> *this, int maxAttempts, const char *poolName, lua_State *luaVM)
{
  const char *v5; 
  int v8; 
  unsigned __int16 m_firstFree; 
  unsigned __int16 *v10; 
  unsigned __int16 v11; 
  const dvar_t *v12; 
  unsigned int flags; 
  unsigned int v14; 
  int v15; 
  const char *v18; 
  bool (__fastcall *m_allocationErrorCallback)(const LUIUserDataPool<LUISubscriptionsHolder,0,3000> *); 
  char *fmt; 
  __int64 v22; 

  v5 = poolName;
  if ( maxAttempts <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 184, ASSERT_TYPE_ASSERT, "(maxAttempts > 0)", (const char *)&queryFormat, "maxAttempts > 0") )
    __debugbreak();
  v8 = 0;
  if ( maxAttempts <= 0 )
    goto LABEL_42;
  while ( 1 )
  {
    m_firstFree = this->m_firstFree;
    if ( m_firstFree < 0xBB8u )
      break;
LABEL_11:
    if ( v8 >= maxAttempts - 1 )
    {
      Com_PrintError(13, "LUI ERROR: Failed to allocate from %s pool. Restarting the Lua VM.\n", v5);
      v18 = "unknown pool";
      if ( v5 )
        v18 = v5;
      LUI_ReportErrorWithInfo("Failed to allocate from LUI pool ", v18, luaVM);
      m_allocationErrorCallback = this->m_allocationErrorCallback;
      if ( !m_allocationErrorCallback || !m_allocationErrorCallback(this) )
        LUI_HandleLuaError(4);
      goto LABEL_41;
    }
    v12 = DVARBOOL_lui_pool_incremental_gc_enabled;
    if ( !DVARBOOL_lui_pool_incremental_gc_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_pool_incremental_gc_enabled") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v12->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v12->name) )
        __debugbreak();
    }
    if ( !v12->current.enabled )
    {
      LODWORD(fmt) = maxAttempts;
      LUI_EmergencyFullGC(luaVM, "LUI: Could not allocate from %s pool, attempt %d/%d", v5, (unsigned int)(v8 + 1), fmt);
      goto LABEL_41;
    }
    __rdtsc();
    Sys_ProfBeginNamedEvent(0xFF0000FF, "LUI_EmergencyGCUntilResourceAvailable");
    v14 = 0;
    v15 = 0;
    while ( j_lua_gc(luaVM, 5, 0) )
    {
      ++v14;
      v15 = 0;
LABEL_32:
      if ( v14 >= 4 || this->m_firstFree < 0xBB8u )
        goto LABEL_28;
    }
    if ( (unsigned int)++v15 < 0x249F0 )
      goto LABEL_32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.h", 828, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "LUI_EmergencyGCUntilResourceAvailable: possible infinite loop detected.") )
      __debugbreak();
    Com_PrintError(13, "LUI_EmergencyGCUntilResourceAvailable: possible infinite loop detected. Terminating early.\n");
LABEL_28:
    LUI_PostGC();
    if ( v14 > 1 )
      LUI_CoD_ClearFullGCCycleFlag();
    Sys_ProfEndNamedEvent();
    __rdtsc();
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    LODWORD(v22) = v14;
    LODWORD(fmt) = maxAttempts;
    v5 = poolName;
    Com_PrintWarning(13, "LUI: Could not allocate from %s pool, attempt %d/%d. Did emergency inc gc (%u full cycles) over %4.3f ms\n", poolName, (unsigned int)(v8 + 1), fmt, v22, (double)(*(double *)&_XMM0 * msecPerRawTimerTick));
LABEL_41:
    if ( ++v8 >= maxAttempts )
LABEL_42:
      j_luaL_error(luaVM, (const char *)&queryFormat, "object != NULL");
  }
  this->m_firstFree = this->m_poolData[m_firstFree];
  this->m_poolData[m_firstFree] = this->m_iteration;
  v10 = (unsigned __int16 *)j_lua_newuserdata(luaVM, 4ui64);
  *v10 = m_firstFree;
  v10[1] = this->m_iteration;
  v11 = this->m_iteration + 1;
  if ( v11 >= 0xBB9u )
    this->m_iteration = v11;
  else
    this->m_iteration = 3001;
  this->m_lastAllocated = m_firstFree;
  if ( !&this->m_pool[m_firstFree] )
  {
    v5 = poolName;
    goto LABEL_11;
  }
  LUI_Interface_CheckLowMemory(luaVM);
  return (LUISubscriptionsHolder *)((char *)this + 8 * m_firstFree);
}

/*
==============
LUIPool<LUISubscriptionHeld,3000,1>::Free
==============
*/
bool LUIPool<LUISubscriptionHeld,3000,1>::Free(LUIPool<LUISubscriptionHeld,3000,1> *this, LUISubscriptionHeld *data)
{
  unsigned __int64 v4; 
  __int64 v5; 
  bool result; 

  v4 = ((char *)data - (char *)this) >> 4;
  if ( v4 > 0xBB7 )
    return 0;
  v5 = (unsigned __int16)v4;
  if ( (unsigned __int16)v4 >= 0xBB8ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 93, ASSERT_TYPE_ASSERT, "(poolIndex < PoolSize)", (const char *)&queryFormat, "poolIndex < PoolSize") )
    __debugbreak();
  if ( this->m_poolData[v5] <= 0xBB8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 94, ASSERT_TYPE_ASSERT, "(m_poolData[poolIndex] > PoolSize)", (const char *)&queryFormat, "m_poolData[poolIndex] > PoolSize") )
    __debugbreak();
  this->m_poolData[v5] = this->m_firstFree;
  result = 1;
  this->m_firstFree = v5;
  *(_QWORD *)&data->subscription = 0i64;
  data->next = NULL;
  return result;
}

/*
==============
LUIPool<LUITraceQueryResource,8,0>::Free
==============
*/
bool LUIPool<LUITraceQueryResource,8,0>::Free(LUIPool<LUITraceQueryResource,8,0> *this, LUITraceQueryResource *data)
{
  unsigned __int64 v3; 
  __int64 v4; 
  bool result; 

  v3 = ((char *)data - (char *)this) >> 5;
  if ( v3 > 7 )
    return 0;
  v4 = (unsigned __int16)v3;
  if ( (unsigned __int16)v3 >= 8ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 93, ASSERT_TYPE_ASSERT, "(poolIndex < PoolSize)", (const char *)&queryFormat, "poolIndex < PoolSize") )
    __debugbreak();
  if ( this->m_poolData[v4] <= 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 94, ASSERT_TYPE_ASSERT, "(m_poolData[poolIndex] > PoolSize)", (const char *)&queryFormat, "m_poolData[poolIndex] > PoolSize") )
    __debugbreak();
  this->m_poolData[v4] = this->m_firstFree;
  result = 1;
  this->m_firstFree = v4;
  return result;
}

/*
==============
LUIPool<LUITraceRequest,200,1>::Free
==============
*/
char LUIPool<LUITraceRequest,200,1>::Free(LUIPool<LUITraceRequest,200,1> *this, LUITraceRequest *data)
{
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  __int64 v6; 

  v4 = (__int64)((unsigned __int128)(((char *)data - (char *)this) * (__int128)0x7878787878787879i64) >> 64) >> 6;
  v5 = (v4 >> 63) + v4;
  if ( v5 > 0xC7 )
    return 0;
  v6 = (unsigned __int16)v5;
  if ( (unsigned __int16)v5 >= 0xC8ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 93, ASSERT_TYPE_ASSERT, "(poolIndex < PoolSize)", (const char *)&queryFormat, "poolIndex < PoolSize") )
    __debugbreak();
  if ( this->m_poolData[v6] <= 0xC8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 94, ASSERT_TYPE_ASSERT, "(m_poolData[poolIndex] > PoolSize)", (const char *)&queryFormat, "m_poolData[poolIndex] > PoolSize") )
    __debugbreak();
  this->m_poolData[v6] = this->m_firstFree;
  this->m_firstFree = v6;
  memset_0(data, 0, sizeof(LUITraceRequest));
  return 1;
}

/*
==============
LUIUserDataPool<LUITween,0,1200>::Allocate
==============
*/
LUITween *LUIUserDataPool<LUITween,0,1200>::Allocate(LUIUserDataPool<LUITween,0,1200> *this, int maxAttempts, const char *poolName, lua_State *luaVM)
{
  const char *v5; 
  int v8; 
  unsigned __int16 m_firstFree; 
  unsigned __int16 *v10; 
  unsigned __int16 v11; 
  const dvar_t *v12; 
  unsigned int flags; 
  unsigned int v14; 
  int v15; 
  const char *v18; 
  bool (__fastcall *m_allocationErrorCallback)(const LUIUserDataPool<LUITween,0,1200> *); 
  char *fmt; 
  __int64 v22; 

  v5 = poolName;
  if ( maxAttempts <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 184, ASSERT_TYPE_ASSERT, "(maxAttempts > 0)", (const char *)&queryFormat, "maxAttempts > 0") )
    __debugbreak();
  v8 = 0;
  if ( maxAttempts <= 0 )
    goto LABEL_42;
  while ( 1 )
  {
    m_firstFree = this->m_firstFree;
    if ( m_firstFree < 0x4B0u )
      break;
LABEL_11:
    if ( v8 >= maxAttempts - 1 )
    {
      Com_PrintError(13, "LUI ERROR: Failed to allocate from %s pool. Restarting the Lua VM.\n", v5);
      v18 = "unknown pool";
      if ( v5 )
        v18 = v5;
      LUI_ReportErrorWithInfo("Failed to allocate from LUI pool ", v18, luaVM);
      m_allocationErrorCallback = this->m_allocationErrorCallback;
      if ( !m_allocationErrorCallback || !m_allocationErrorCallback(this) )
        LUI_HandleLuaError(4);
      goto LABEL_41;
    }
    v12 = DVARBOOL_lui_pool_incremental_gc_enabled;
    if ( !DVARBOOL_lui_pool_incremental_gc_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_pool_incremental_gc_enabled") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v12->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v12->name) )
        __debugbreak();
    }
    if ( !v12->current.enabled )
    {
      LODWORD(fmt) = maxAttempts;
      LUI_EmergencyFullGC(luaVM, "LUI: Could not allocate from %s pool, attempt %d/%d", v5, (unsigned int)(v8 + 1), fmt);
      goto LABEL_41;
    }
    __rdtsc();
    Sys_ProfBeginNamedEvent(0xFF0000FF, "LUI_EmergencyGCUntilResourceAvailable");
    v14 = 0;
    v15 = 0;
    while ( j_lua_gc(luaVM, 5, 0) )
    {
      ++v14;
      v15 = 0;
LABEL_32:
      if ( v14 >= 4 || this->m_firstFree < 0x4B0u )
        goto LABEL_28;
    }
    if ( (unsigned int)++v15 < 0x249F0 )
      goto LABEL_32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.h", 828, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "LUI_EmergencyGCUntilResourceAvailable: possible infinite loop detected.") )
      __debugbreak();
    Com_PrintError(13, "LUI_EmergencyGCUntilResourceAvailable: possible infinite loop detected. Terminating early.\n");
LABEL_28:
    LUI_PostGC();
    if ( v14 > 1 )
      LUI_CoD_ClearFullGCCycleFlag();
    Sys_ProfEndNamedEvent();
    __rdtsc();
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    LODWORD(v22) = v14;
    LODWORD(fmt) = maxAttempts;
    v5 = poolName;
    Com_PrintWarning(13, "LUI: Could not allocate from %s pool, attempt %d/%d. Did emergency inc gc (%u full cycles) over %4.3f ms\n", poolName, (unsigned int)(v8 + 1), fmt, v22, (double)(*(double *)&_XMM0 * msecPerRawTimerTick));
LABEL_41:
    if ( ++v8 >= maxAttempts )
LABEL_42:
      j_luaL_error(luaVM, (const char *)&queryFormat, "object != NULL");
  }
  this->m_firstFree = this->m_poolData[m_firstFree];
  this->m_poolData[m_firstFree] = this->m_iteration;
  v10 = (unsigned __int16 *)j_lua_newuserdata(luaVM, 4ui64);
  *v10 = m_firstFree;
  v10[1] = this->m_iteration;
  v11 = this->m_iteration + 1;
  if ( v11 >= 0x4B1u )
    this->m_iteration = v11;
  else
    this->m_iteration = 1201;
  this->m_lastAllocated = m_firstFree;
  if ( !&this->m_pool[m_firstFree] )
  {
    v5 = poolName;
    goto LABEL_11;
  }
  LUI_Interface_CheckLowMemory(luaVM);
  return (LUITween *)((char *)this + 1104 * m_firstFree);
}

