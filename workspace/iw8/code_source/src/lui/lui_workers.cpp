/*
==============
LUI_Workers_AddRenderWorker
==============
*/

void __fastcall LUI_Workers_AddRenderWorker(const GfxViewInfo *viewInfo, const GfxAsync2DRenderResources *resources, const bool receivePPFX)
{
  ?LUI_Workers_AddRenderWorker@@YAXPEBUGfxViewInfo@@AEBUGfxAsync2DRenderResources@@_N@Z(viewInfo, resources, receivePPFX);
}

/*
==============
LUI_Workers_QueueDvar_SetFloat
==============
*/

void __fastcall LUI_Workers_QueueDvar_SetFloat(const dvar_t *dvar, const float value, bool setExternal)
{
  ?LUI_Workers_QueueDvar_SetFloat@@YAXPEBUdvar_t@@M_N@Z(dvar, value, setExternal);
}

/*
==============
LUI_Workers_QueueDvar_SetInt
==============
*/

void __fastcall LUI_Workers_QueueDvar_SetInt(const dvar_t *dvar, const int value, bool setExternal)
{
  ?LUI_Workers_QueueDvar_SetInt@@YAXPEBUdvar_t@@H_N@Z(dvar, value, setExternal);
}

/*
==============
LUI_Workers_QueueDvar_SetString
==============
*/

void __fastcall LUI_Workers_QueueDvar_SetString(const dvar_t *dvar, const char *const value, bool setExternal)
{
  ?LUI_Workers_QueueDvar_SetString@@YAXPEBUdvar_t@@QEBD_N@Z(dvar, value, setExternal);
}

/*
==============
LUI_Workers_IsRunningCmd
==============
*/

bool __fastcall LUI_Workers_IsRunningCmd()
{
  return ?LUI_Workers_IsRunningCmd@@YA_NXZ();
}

/*
==============
LUI_Workers_PreUpdate
==============
*/

void __fastcall LUI_Workers_PreUpdate(const LocalClientNum_t localClientNum)
{
  ?LUI_Workers_PreUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Workers_Active
==============
*/

bool __fastcall LUI_Workers_Active()
{
  return ?LUI_Workers_Active@@YA_NXZ();
}

/*
==============
LUI_Workers_GetLongJmp
==============
*/

_SETJMP_FLOAT128 (*__fastcall LUI_Workers_GetLongJmp())[16]
{
  return ?LUI_Workers_GetLongJmp@@YAAEAY0BA@U_SETJMP_FLOAT128@@XZ();
}

/*
==============
LUI_Workers_QueuePlaySound
==============
*/

void __fastcall LUI_Workers_QueuePlaySound(LocalClientNum_t localClientNum, const char *aliasname)
{
  ?LUI_Workers_QueuePlaySound@@YAXW4LocalClientNum_t@@PEBD@Z(localClientNum, aliasname);
}

/*
==============
LUI_Workers_QueueDvar_SetBool
==============
*/

void __fastcall LUI_Workers_QueueDvar_SetBool(const dvar_t *dvar, const bool value, bool setExternal)
{
  ?LUI_Workers_QueueDvar_SetBool@@YAXPEBUdvar_t@@_N_N@Z(dvar, value, setExternal);
}

/*
==============
LUI_Workers_QueueDvar_GetString
==============
*/

bool __fastcall LUI_Workers_QueueDvar_GetString(const dvar_t *dvar, const char **outValue)
{
  return ?LUI_Workers_QueueDvar_GetString@@YA_NPEBUdvar_t@@AEAPEBD@Z(dvar, outValue);
}

/*
==============
LUI_Workers_QueueDvar_GetFloat
==============
*/

bool __fastcall LUI_Workers_QueueDvar_GetFloat(const dvar_t *dvar, float *outValue)
{
  return ?LUI_Workers_QueueDvar_GetFloat@@YA_NPEBUdvar_t@@PEAM@Z(dvar, outValue);
}

/*
==============
LUI_Workers_Render_Enabled
==============
*/

bool __fastcall LUI_Workers_Render_Enabled()
{
  return ?LUI_Workers_Render_Enabled@@YA_NXZ();
}

/*
==============
LUI_Workers_GetPendingComError
==============
*/

int __fastcall LUI_Workers_GetPendingComError()
{
  return ?LUI_Workers_GetPendingComError@@YAHXZ();
}

/*
==============
LUI_Workers_PostUpdate
==============
*/

void __fastcall LUI_Workers_PostUpdate(const LocalClientNum_t localClientNum)
{
  ?LUI_Workers_PostUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Workers_QueueDvar_SetColor
==============
*/

void __fastcall LUI_Workers_QueueDvar_SetColor(const dvar_t *dvar, const float red, const float blue, const float green, const float alpha, bool setExternal)
{
  ?LUI_Workers_QueueDvar_SetColor@@YAXPEBUdvar_t@@MMMM_N@Z(dvar, red, blue, green, alpha, setExternal);
}

/*
==============
LUI_Workers_RenderCmd
==============
*/

void __fastcall LUI_Workers_RenderCmd(const void *const data)
{
  ?LUI_Workers_RenderCmd@@YAXQEBX@Z(data);
}

/*
==============
LUI_Workers_SetPendingComError
==============
*/

void __fastcall LUI_Workers_SetPendingComError(const int error)
{
  ?LUI_Workers_SetPendingComError@@YAXH@Z(error);
}

/*
==============
LUI_Workers_UpdateCmd
==============
*/

void __fastcall LUI_Workers_UpdateCmd(const void *const data)
{
  ?LUI_Workers_UpdateCmd@@YAXQEBX@Z(data);
}

/*
==============
LUI_Workers_QueueStopAllSounds
==============
*/

void LUI_Workers_QueueStopAllSounds(void)
{
  ?LUI_Workers_QueueStopAllSounds@@YAXXZ();
}

/*
==============
LUI_Workers_ClearComErrors
==============
*/

void LUI_Workers_ClearComErrors(void)
{
  ?LUI_Workers_ClearComErrors@@YAXXZ();
}

/*
==============
LUI_Workers_QueueDvar_GetBool
==============
*/

bool __fastcall LUI_Workers_QueueDvar_GetBool(const dvar_t *dvar, bool *outValue)
{
  return ?LUI_Workers_QueueDvar_GetBool@@YA_NPEBUdvar_t@@PEA_N@Z(dvar, outValue);
}

/*
==============
LUI_Workers_SuspendRender
==============
*/

void LUI_Workers_SuspendRender(void)
{
  ?LUI_Workers_SuspendRender@@YAXXZ();
}

/*
==============
LUI_Workers_QueueDvar_GetInt
==============
*/

bool __fastcall LUI_Workers_QueueDvar_GetInt(const dvar_t *dvar, int *outValue)
{
  return ?LUI_Workers_QueueDvar_GetInt@@YA_NPEBUdvar_t@@PEAH@Z(dvar, outValue);
}

/*
==============
LUI_Workers_Active
==============
*/
bool LUI_Workers_Active()
{
  return Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_lui_worker_cmds, "lui_worker_cmds") && !LUI_CoD_InFrontend();
}

/*
==============
LUI_Workers_AddRenderWorker
==============
*/
void LUI_Workers_AddRenderWorker(const GfxViewInfo *viewInfo, const GfxAsync2DRenderResources *resources, const bool receivePPFX)
{
  __m256i sceneColor; 
  __m256i sceneDepth; 
  __m256i packedStencil; 
  __int128 v9; 
  const GfxWrappedBuffer *exposureBuffer; 
  __int64 data[2]; 
  _BYTE v12[128]; 
  __int128 v13; 
  __int64 v14; 
  bool v15; 

  if ( (!Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_lui_render_worker, "lui_render_worker") || LUI_CoD_InFrontend() || R_Cinematic_IsStarted() || frontEndDataOut->async2D.renderSuspended) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_workers.cpp", 216, ASSERT_TYPE_ASSERT, "(LUI_Workers_Render_Enabled())", (const char *)&queryFormat, "LUI_Workers_Render_Enabled()") )
    __debugbreak();
  memset_0(v12, 0, sizeof(v12));
  sceneColor = (__m256i)resources->sceneColor;
  *(R_RT_ColorHandle *)v12 = resources->displayColor;
  sceneDepth = (__m256i)resources->sceneDepth;
  *(__m256i *)&v12[32] = sceneColor;
  packedStencil = (__m256i)resources->packedStencil;
  *(__m256i *)&v12[64] = sceneDepth;
  v9 = *(_OWORD *)&resources->universalClut;
  *(__m256i *)&v12[96] = packedStencil;
  exposureBuffer = resources->exposureBuffer;
  data[0] = (__int64)viewInfo;
  data[1] = (__int64)frontEndDataOut;
  v13 = v9;
  v14 = (__int64)exposureBuffer;
  v15 = receivePPFX;
  Sys_AddWorkerCmd((WorkerCmdType)(!receivePPFX + 108), data);
}

/*
==============
LUI_Workers_ClearComErrors
==============
*/
void LUI_Workers_ClearComErrors(void)
{
  s_pending_clear_com_error = 1;
}

/*
==============
LUI_Workers_EndLock
==============
*/
void LUI_Workers_EndLock()
{
  bool v0; 

  v0 = s_pending_com_error == 0;
  *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1733i64) = 0;
  if ( v0 )
  {
    Profile_Unguard(2);
    LUI_LeaveCriticalSection();
  }
  else
  {
    Profile_Recover(2);
    if ( !Sys_IsMainThread() && g_lui_lock_level )
    {
      do
        LUI_LeaveCriticalSection();
      while ( g_lui_lock_level );
    }
  }
}

/*
==============
LUI_Workers_GetLongJmp
==============
*/
_SETJMP_FLOAT128 (*LUI_Workers_GetLongJmp())[16]
{
  return (_SETJMP_FLOAT128 (*)[16])s_worker_jmp;
}

/*
==============
LUI_Workers_GetPendingComError
==============
*/
__int64 LUI_Workers_GetPendingComError()
{
  return (unsigned int)s_pending_com_error;
}

/*
==============
LUI_Workers_IsRunningCmd
==============
*/
__int64 LUI_Workers_IsRunningCmd()
{
  return *(unsigned __int8 *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1733i64);
}

/*
==============
LUI_Workers_PostUpdate
==============
*/
void LUI_Workers_PostUpdate(const LocalClientNum_t localClientNum)
{
  unsigned int i; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_workers.cpp", 480, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_pending_clear_com_error )
  {
    s_pending_clear_com_error = 0;
    Com_ClearErrors();
  }
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_workers.cpp", 280, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  for ( i = 0; i < s_lui_num_queued_sounds; ++i )
    UI_PlayLocalSoundAliasByName(s_lui_queued_playsounds[i].clientNum, s_lui_queued_playsounds[i].soundAlias);
  s_lui_num_queued_sounds = 0;
  if ( s_queuedStopAllSound )
  {
    s_queuedStopAllSound = 0;
    SND_StopSounds(SND_STOP_ALL);
  }
  LUI_Workers_ProcessQueuedDvarEvents();
}

/*
==============
LUI_Workers_PreUpdate
==============
*/
void LUI_Workers_PreUpdate(const LocalClientNum_t localClientNum)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_workers.cpp", 164, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  LUI_Model_SetUseImmediateNotifications(1);
  LUI_CoD_UpdateStickInput(localClientNum);
  LUI_Model_SetUseImmediateNotifications(0);
}

/*
==============
LUI_Workers_ProcessQueuedDvarEvents
==============
*/
void LUI_Workers_ProcessQueuedDvarEvents()
{
  unsigned int v0; 
  __int64 v1; 
  const dvar_t *v2; 
  LUI_QueuedDvarSet *v3; 
  const dvar_t *dvar; 
  unsigned int flags; 
  const char *UnobfuscatedName; 
  BOOL setExternal; 
  __int64 source; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_workers.cpp", 299, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = 0;
  if ( s_lui_num_queued_dvar_events )
  {
    v1 = tls_index;
    do
    {
      v2 = DCONST_DVARBOOL_lua_enableDvarModifiedFlagCheck;
      v3 = &s_lui_queued_dvar_events[v0];
      dvar = v3->dvar;
      if ( !DCONST_DVARBOOL_lua_enableDvarModifiedFlagCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lua_enableDvarModifiedFlagCheck") )
        __debugbreak();
      if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
      {
        flags = v2->flags;
        if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v2->name) )
          __debugbreak();
      }
      if ( v2->current.enabled && (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 1052i64) & dvar->flags) != 0 )
      {
        UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_workers.cpp", 310, ASSERT_TYPE_ASSERT, "(!( dvar->flags & ~dvar_allowedModifiedFlags ))", "%s\n\tLUI Not allowed to set dvar '%s' at this time. This will cause performance issues and could deadlock. Assign to Code - UI", "!( dvar->flags & ~dvar_allowedModifiedFlags )", UnobfuscatedName) )
          __debugbreak();
      }
      setExternal = v3->setExternal;
      switch ( dvar->type )
      {
        case 0u:
          Dvar_SetBoolFromSource(dvar, v3->sValue[0], (DvarSetSource)setExternal);
          break;
        case 1u:
          Dvar_SetFloatFromSource(dvar, v3->fValue, (DvarSetSource)setExternal);
          break;
        case 5u:
          Dvar_SetIntFromSource(dvar, v3->iValue, (DvarSetSource)setExternal);
          break;
        case 8u:
        case 9u:
          Dvar_SetStringFromSource(dvar, v3->sValue, (DvarSetSource)setExternal);
          break;
        case 0xAu:
          Dvar_SetColorFromSource(dvar, v3->fValue, v3->cValue[1], v3->cValue[2], v3->cValue[3], (DvarSetSource)v3->setExternal);
          break;
        default:
          LODWORD(source) = dvar->type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_workers.cpp", 334, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "LUI: We don't handle setting this type of dvar from Lua! dvar type: %u\n", source) )
            __debugbreak();
          break;
      }
      ++v0;
    }
    while ( v0 < s_lui_num_queued_dvar_events );
    s_lui_num_queued_dvar_events = 0;
  }
  else
  {
    s_lui_num_queued_dvar_events = 0;
  }
}

/*
==============
LUI_Workers_QueueDvar_GetBool
==============
*/
char LUI_Workers_QueueDvar_GetBool(const dvar_t *dvar, bool *outValue)
{
  unsigned int v2; 
  __int64 v3; 
  LUI_QueuedDvarSet *i; 

  v2 = s_lui_num_queued_dvar_events - 1;
  v3 = (int)(s_lui_num_queued_dvar_events - 1);
  if ( (int)(s_lui_num_queued_dvar_events - 1) < 0 )
    return 0;
  for ( i = &s_lui_queued_dvar_events[v2]; i->dvar != dvar; --i )
  {
    --v2;
    if ( --v3 < 0 )
      return 0;
  }
  *outValue = s_lui_queued_dvar_events[v2].sValue[0];
  return 1;
}

/*
==============
LUI_Workers_QueueDvar_GetFloat
==============
*/
char LUI_Workers_QueueDvar_GetFloat(const dvar_t *dvar, float *outValue)
{
  unsigned int v2; 
  __int64 v3; 
  LUI_QueuedDvarSet *i; 

  v2 = s_lui_num_queued_dvar_events - 1;
  v3 = (int)(s_lui_num_queued_dvar_events - 1);
  if ( (int)(s_lui_num_queued_dvar_events - 1) < 0 )
    return 0;
  for ( i = &s_lui_queued_dvar_events[v2]; i->dvar != dvar; --i )
  {
    --v2;
    if ( --v3 < 0 )
      return 0;
  }
  *outValue = s_lui_queued_dvar_events[v2].fValue;
  return 1;
}

/*
==============
LUI_Workers_QueueDvar_GetInt
==============
*/
char LUI_Workers_QueueDvar_GetInt(const dvar_t *dvar, int *outValue)
{
  unsigned int v2; 
  __int64 v3; 
  LUI_QueuedDvarSet *i; 

  v2 = s_lui_num_queued_dvar_events - 1;
  v3 = (int)(s_lui_num_queued_dvar_events - 1);
  if ( (int)(s_lui_num_queued_dvar_events - 1) < 0 )
    return 0;
  for ( i = &s_lui_queued_dvar_events[v2]; i->dvar != dvar; --i )
  {
    --v2;
    if ( --v3 < 0 )
      return 0;
  }
  *outValue = s_lui_queued_dvar_events[v2].iValue;
  return 1;
}

/*
==============
LUI_Workers_QueueDvar_GetString
==============
*/
bool LUI_Workers_QueueDvar_GetString(const dvar_t *dvar, const char **outValue)
{
  unsigned int v2; 
  __int64 v3; 
  LUI_QueuedDvarSet *i; 
  bool result; 

  v2 = s_lui_num_queued_dvar_events - 1;
  v3 = (int)(s_lui_num_queued_dvar_events - 1);
  if ( (int)(s_lui_num_queued_dvar_events - 1) < 0 )
    return 0;
  for ( i = &s_lui_queued_dvar_events[v2]; i->dvar != dvar; --i )
  {
    --v2;
    if ( --v3 < 0 )
      return 0;
  }
  result = 1;
  *outValue = s_lui_queued_dvar_events[v2].sValue;
  return result;
}

/*
==============
LUI_Workers_QueueDvar_SetBool
==============
*/
void LUI_Workers_QueueDvar_SetBool(const dvar_t *dvar, const bool value, bool setExternal)
{
  unsigned int v3; 
  __int64 v7; 

  v3 = s_lui_num_queued_dvar_events;
  if ( s_lui_num_queued_dvar_events < 0xA )
    goto LABEL_5;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_workers.cpp", 359, ASSERT_TYPE_ASSERT, "(s_lui_num_queued_dvar_events < LUI_NUM_QUEUED_DVAR_EVENTS)", (const char *)&queryFormat, "s_lui_num_queued_dvar_events < LUI_NUM_QUEUED_DVAR_EVENTS") )
    __debugbreak();
  v3 = s_lui_num_queued_dvar_events;
  if ( s_lui_num_queued_dvar_events < 0xA )
  {
LABEL_5:
    v7 = v3;
    s_lui_num_queued_dvar_events = v3 + 1;
    s_lui_queued_dvar_events[v7].dvar = dvar;
    s_lui_queued_dvar_events[v7].sValue[0] = value;
    s_lui_queued_dvar_events[v7].setExternal = setExternal;
  }
}

/*
==============
LUI_Workers_QueueDvar_SetColor
==============
*/
void LUI_Workers_QueueDvar_SetColor(const dvar_t *dvar, const float red, const float blue, const float green, const float alpha, bool setExternal)
{
  unsigned int v6; 
  __int64 v8; 

  v6 = s_lui_num_queued_dvar_events;
  if ( s_lui_num_queued_dvar_events < 0xA )
    goto LABEL_5;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_workers.cpp", 406, ASSERT_TYPE_ASSERT, "(s_lui_num_queued_dvar_events < LUI_NUM_QUEUED_DVAR_EVENTS)", (const char *)&queryFormat, "s_lui_num_queued_dvar_events < LUI_NUM_QUEUED_DVAR_EVENTS") )
    __debugbreak();
  v6 = s_lui_num_queued_dvar_events;
  if ( s_lui_num_queued_dvar_events < 0xA )
  {
LABEL_5:
    v8 = v6;
    s_lui_num_queued_dvar_events = v6 + 1;
    s_lui_queued_dvar_events[v8].dvar = dvar;
    s_lui_queued_dvar_events[v8].fValue = red;
    s_lui_queued_dvar_events[v8].cValue[1] = blue;
    s_lui_queued_dvar_events[v8].cValue[2] = green;
    s_lui_queued_dvar_events[v8].cValue[3] = alpha;
    s_lui_queued_dvar_events[v8].setExternal = setExternal;
  }
}

/*
==============
LUI_Workers_QueueDvar_SetFloat
==============
*/
void LUI_Workers_QueueDvar_SetFloat(const dvar_t *dvar, const float value, bool setExternal)
{
  unsigned int v3; 
  __int64 v6; 

  v3 = s_lui_num_queued_dvar_events;
  if ( s_lui_num_queued_dvar_events < 0xA )
    goto LABEL_5;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_workers.cpp", 344, ASSERT_TYPE_ASSERT, "(s_lui_num_queued_dvar_events < LUI_NUM_QUEUED_DVAR_EVENTS)", (const char *)&queryFormat, "s_lui_num_queued_dvar_events < LUI_NUM_QUEUED_DVAR_EVENTS") )
    __debugbreak();
  v3 = s_lui_num_queued_dvar_events;
  if ( s_lui_num_queued_dvar_events < 0xA )
  {
LABEL_5:
    v6 = v3;
    s_lui_num_queued_dvar_events = v3 + 1;
    s_lui_queued_dvar_events[v6].dvar = dvar;
    s_lui_queued_dvar_events[v6].fValue = value;
    s_lui_queued_dvar_events[v6].setExternal = setExternal;
  }
}

/*
==============
LUI_Workers_QueueDvar_SetInt
==============
*/
void LUI_Workers_QueueDvar_SetInt(const dvar_t *dvar, const int value, bool setExternal)
{
  unsigned int v3; 
  __int64 v7; 

  v3 = s_lui_num_queued_dvar_events;
  if ( s_lui_num_queued_dvar_events < 0xA )
    goto LABEL_5;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_workers.cpp", 374, ASSERT_TYPE_ASSERT, "(s_lui_num_queued_dvar_events < LUI_NUM_QUEUED_DVAR_EVENTS)", (const char *)&queryFormat, "s_lui_num_queued_dvar_events < LUI_NUM_QUEUED_DVAR_EVENTS") )
    __debugbreak();
  v3 = s_lui_num_queued_dvar_events;
  if ( s_lui_num_queued_dvar_events < 0xA )
  {
LABEL_5:
    v7 = v3;
    s_lui_num_queued_dvar_events = v3 + 1;
    s_lui_queued_dvar_events[v7].dvar = dvar;
    s_lui_queued_dvar_events[v7].iValue = value;
    s_lui_queued_dvar_events[v7].setExternal = setExternal;
  }
}

/*
==============
LUI_Workers_QueueDvar_SetString
==============
*/
void LUI_Workers_QueueDvar_SetString(const dvar_t *dvar, const char *const value, bool setExternal)
{
  __int64 v3; 
  __int64 v7; 

  v3 = s_lui_num_queued_dvar_events;
  if ( s_lui_num_queued_dvar_events < 0xA )
    goto LABEL_5;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_workers.cpp", 389, ASSERT_TYPE_ASSERT, "(s_lui_num_queued_dvar_events < LUI_NUM_QUEUED_DVAR_EVENTS)", (const char *)&queryFormat, "s_lui_num_queued_dvar_events < LUI_NUM_QUEUED_DVAR_EVENTS") )
    __debugbreak();
  v3 = s_lui_num_queued_dvar_events;
  if ( s_lui_num_queued_dvar_events < 0xA )
  {
LABEL_5:
    s_lui_queued_dvar_events[v3].dvar = dvar;
    Core_strcpy(s_lui_queued_dvar_events[v3].sValue, 0x800ui64, value);
    v7 = s_lui_num_queued_dvar_events++;
    s_lui_queued_dvar_events[v7].setExternal = setExternal;
  }
}

/*
==============
LUI_Workers_QueuePlaySound
==============
*/
void LUI_Workers_QueuePlaySound(LocalClientNum_t localClientNum, const char *aliasname)
{
  unsigned int v2; 
  __int64 v3; 
  LUI_QueuedPlaySound *v4; 
  char v5; 
  LUI_QueuedPlaySound *v6; 
  const char *v7; 

  v2 = s_lui_num_queued_sounds;
  if ( s_lui_num_queued_sounds >= 0x14 )
  {
    Com_PrintWarning(13, "WARNING: Trying to queue up more than %d sounds. Sound '%s' will be dropped.\n", 20i64, aliasname);
  }
  else
  {
    v3 = s_lui_num_queued_sounds;
    s_lui_queued_playsounds[v3].clientNum = localClientNum;
    v4 = &s_lui_queued_playsounds[v3];
    v5 = *aliasname;
    v6 = &s_lui_queued_playsounds[v3];
    if ( *aliasname )
    {
      v7 = (const char *)(aliasname - (const char *)v4);
      do
      {
        v6->soundAlias[0] = v5;
        v6 = (LUI_QueuedPlaySound *)((char *)v6 + 1);
        v5 = v6->soundAlias[(_QWORD)v7];
      }
      while ( v5 );
    }
    if ( v6 >= (LUI_QueuedPlaySound *)&v4->clientNum )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\string_util.h", 695, ASSERT_TYPE_ASSERT, "(outTextEnd < outText + outTextSize)", (const char *)&queryFormat, "outTextEnd < outText + outTextSize") )
        __debugbreak();
      v2 = s_lui_num_queued_sounds;
    }
    v6->soundAlias[0] = 0;
    s_lui_num_queued_sounds = v2 + 1;
  }
}

/*
==============
LUI_Workers_QueueStopAllSounds
==============
*/
void LUI_Workers_QueueStopAllSounds(void)
{
  s_queuedStopAllSound = 1;
}

/*
==============
LUI_Workers_RenderCmd
==============
*/
void LUI_Workers_RenderCmd(const void *const data)
{
  GfxCmdBufContext v2; 
  __int64 v3; 
  GfxCmdBufStateLocal v4; 
  GfxCmdBufSourceStateLocal v5; 

  v3 = -2i64;
  GfxCmdBufStateLocal::GfxCmdBufStateLocal(&v4);
  GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal(&v5);
  v2.source = &v5;
  v2.state = &v4;
  R_Async2D_Render(&v2, *(const GfxViewInfo **)data, *((GfxBackEndData **)data + 1), (const GfxAsync2DRenderResources *)((char *)data + 16), *((_BYTE *)data + 168));
  GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal(&v5);
  GfxCmdBufStateLocal::~GfxCmdBufStateLocal(&v4);
}

/*
==============
LUI_Workers_Render_Enabled
==============
*/
bool LUI_Workers_Render_Enabled()
{
  return Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_lui_render_worker, "lui_render_worker") && !LUI_CoD_InFrontend() && !R_Cinematic_IsStarted() && !frontEndDataOut->async2D.renderSuspended;
}

/*
==============
LUI_Workers_SetPendingComError
==============
*/
void LUI_Workers_SetPendingComError(const int error)
{
  s_pending_com_error = error;
}

/*
==============
LUI_Workers_SuspendRender
==============
*/
void LUI_Workers_SuspendRender(void)
{
  frontEndDataOut->async2D.renderSuspended = 1;
}

/*
==============
LUI_Workers_UpdateCmd
==============
*/
void LUI_Workers_UpdateCmd(const void *const data)
{
  int *Value; 
  __int64 v2; 
  int v3; 
  int v4; 
  LocalClientNum_t v5; 
  __int64 v6; 
  int v7; 

  if ( !s_pending_com_error )
  {
    LUI_EnterCriticalSection((const char *)&queryFormat.fmt + 3);
    *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1733i64) = 1;
    Value = (int *)Sys_GetValue(0);
    v2 = Value[8914];
    if ( (_DWORD)v2 && *(_QWORD *)&Value[4 * v2 + 8784] > *((_QWORD *)Value + 261) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 189, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack)", (const char *)&queryFormat, "prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack") )
      __debugbreak();
    if ( (unsigned int)Value[8914] >= 0x20 )
    {
      v7 = 32;
      LODWORD(v6) = Value[8914];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 190, ASSERT_TYPE_ASSERT, "(unsigned)( prof_stack->prof_guardpos ) < (unsigned)( ( sizeof( *array_counter( prof_stack->prof_guardstack ) ) + 0 ) )", "prof_stack->prof_guardpos doesn't index ARRAY_COUNT( prof_stack->prof_guardstack )\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    v3 = 0;
    if ( Value[8914] > 0 )
    {
      v4 = 0;
      do
      {
        if ( Value[4 * v4 + 8786] == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 195, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardstack[i].id != id)", (const char *)&queryFormat, "prof_stack->prof_guardstack[i].id != id") )
          __debugbreak();
        v4 = ++v3;
      }
      while ( v3 < Value[8914] );
    }
    if ( *((_QWORD *)Value + 261) < (unsigned __int64)(Value + 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 199, ASSERT_TYPE_ASSERT, "(prof_stack->prof_ppStack >= prof_stack->prof_pStack)", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    Value[4 * Value[8914] + 8786] = 2;
    *(_QWORD *)&Value[4 * Value[8914]++ + 8788] = *((_QWORD *)Value + 261);
    if ( setjmp(s_worker_jmp) )
    {
      LUI_Model_SetUseImmediateNotifications(0);
    }
    else
    {
      LUI_CoD_UpdateActiveState(*(const LocalClientNum_t *)data);
      LUIBinding::FrameUpdate(*(LocalClientNum_t *)data);
      v5 = *(_DWORD *)data;
      if ( !*(_DWORD *)data )
      {
        LUI_Model_NotifyPendingSubscriptions();
        v5 = *(_DWORD *)data;
      }
      LUITraceRunner::Frame(v5);
      LUI_Model_SetUseImmediateNotifications(1);
      LUI_CoD_ProcessEvents(*(LocalClientNum_t *)data);
      LUI_Model_SetUseImmediateNotifications(0);
      LUI_CoD_Layout(*(const LocalClientNum_t *)data);
      LUI_CoD_BuildDrawList(*(const LocalClientNum_t *)data);
    }
    LUI_Workers_EndLock();
  }
}

