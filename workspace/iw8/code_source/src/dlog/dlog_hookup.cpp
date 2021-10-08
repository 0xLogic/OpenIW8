/*
==============
DLogHookup::Print
==============
*/

void __fastcall DLogHookup::Print(DLogHookup *this, DLogPrintType type, const char *fmt, char *vargs)
{
  ?Print@DLogHookup@@UEBAXW4DLogPrintType@@PEBDPEAD@Z(this, type, fmt, vargs);
}

/*
==============
DLogHookup::GetEnv
==============
*/

DLogEnv __fastcall DLogHookup::GetEnv(DLogHookup *this)
{
  return ?GetEnv@DLogHookup@@UEBA?AW4DLogEnv@@XZ(this);
}

/*
==============
DLog_UpdateSessions
==============
*/

void DLog_UpdateSessions(void)
{
  ?DLog_UpdateSessions@@YAXXZ();
}

/*
==============
DLog_GetUserId
==============
*/

unsigned __int64 __fastcall DLog_GetUserId(int controllerIndex)
{
  return ?DLog_GetUserId@@YA_KH@Z(controllerIndex);
}

/*
==============
DLogHookup::IsChannelReady
==============
*/

bool __fastcall DLogHookup::IsChannelReady(DLogHookup *this, const DLogChannel *channel)
{
  return ?IsChannelReady@DLogHookup@@UEBA_NPEBUDLogChannel@@@Z(this, channel);
}

/*
==============
DLogHookup::Assert
==============
*/

void __fastcall DLogHookup::Assert(DLogHookup *this, bool expr, const char *exprString, const char *file, const char *function, int line, const char *msg)
{
  ?Assert@DLogHookup@@UEBAX_NPEBD11H1@Z(this, expr, exprString, file, function, line, msg);
}

/*
==============
DLogHookup::GetUTC
==============
*/

unsigned int __fastcall DLogHookup::GetUTC(DLogHookup *this)
{
  return ?GetUTC@DLogHookup@@UEBAIXZ(this);
}

/*
==============
DLogHookup::ErrorFatal
==============
*/

void __fastcall DLogHookup::ErrorFatal(DLogHookup *this, const char *msg)
{
  ?ErrorFatal@DLogHookup@@UEBAXPEBD@Z(this, msg);
}

/*
==============
DLogHookup::AddMetric
==============
*/

void __fastcall DLogHookup::AddMetric(DLogHookup *this, const char *name, unsigned __int64 count, unsigned __int64 bytes, unsigned __int64 timeMicroseconds)
{
  ?AddMetric@DLogHookup@@UEBAXPEBD_K11@Z(this, name, count, bytes, timeMicroseconds);
}

/*
==============
DLogHookup::GetEventThrottleCount
==============
*/

int __fastcall DLogHookup::GetEventThrottleCount(DLogHookup *this, const char *name, int throttleCount)
{
  return ?GetEventThrottleCount@DLogHookup@@UEBAHPEBDH@Z(this, name, throttleCount);
}

/*
==============
DLogHookup::IsEventActive
==============
*/

bool __fastcall DLogHookup::IsEventActive(DLogHookup *this, const char *name, bool active)
{
  return ?IsEventActive@DLogHookup@@UEBA_NPEBD_N@Z(this, name, active);
}

/*
==============
DLogHookup::GetEventSampleType
==============
*/

DLogSampleType __fastcall DLogHookup::GetEventSampleType(DLogHookup *this, const char *name, DLogSampleType sampleType)
{
  return ?GetEventSampleType@DLogHookup@@UEBA?AW4DLogSampleType@@PEBDW42@@Z(this, name, sampleType);
}

/*
==============
DLogHookup::GetEventChannelSample
==============
*/

DLogSample __fastcall DLogHookup::GetEventChannelSample(DLogHookup *this, const char *name, const char *channel, DLogEnv env, DLogSample sample)
{
  return ?GetEventChannelSample@DLogHookup@@UEBA?AW4DLogSample@@PEBD0W4DLogEnv@@W42@@Z(this, name, channel, env, sample);
}

/*
==============
DLogHookup::RecordErrorEvent
==============
*/

void __fastcall DLogHookup::RecordErrorEvent(DLogHookup *this, int code, const char *message, const char *stackTrace)
{
  ?RecordErrorEvent@DLogHookup@@UEBAXHPEBD0@Z(this, code, message, stackTrace);
}

/*
==============
DLog_RegisterCallbackForSessionIdUpdate
==============
*/

void __fastcall DLog_RegisterCallbackForSessionIdUpdate(void (__fastcall *callback)())
{
  ?DLog_RegisterCallbackForSessionIdUpdate@@YAXP6AXXZ@Z(callback);
}

/*
==============
DLog_InitHookup
==============
*/

void DLog_InitHookup(void)
{
  ?DLog_InitHookup@@YAXXZ();
}

/*
==============
DLogHookup::IsMetricsActive
==============
*/

bool __fastcall DLogHookup::IsMetricsActive(DLogHookup *this)
{
  return ?IsMetricsActive@DLogHookup@@UEBA_NXZ(this);
}

/*
==============
DLogHookup::Free
==============
*/

void __fastcall DLogHookup::Free(DLogHookup *this, void *memory)
{
  ?Free@DLogHookup@@UEBAXPEAX@Z(this, memory);
}

/*
==============
DLog_ErrorCleanup
==============
*/

void DLog_ErrorCleanup(void)
{
  ?DLog_ErrorCleanup@@YAXXZ();
}

/*
==============
DLogHookup::GetEventThrottleTimeMilliseconds
==============
*/

int __fastcall DLogHookup::GetEventThrottleTimeMilliseconds(DLogHookup *this, const char *name, int throttleTimeMilliseconds)
{
  return ?GetEventThrottleTimeMilliseconds@DLogHookup@@UEBAHPEBDH@Z(this, name, throttleTimeMilliseconds);
}

/*
==============
DLogHookup::DLogHookup
==============
*/

void __fastcall DLogHookup::DLogHookup(DLogHookup *this)
{
  ??0DLogHookup@@QEAA@XZ(this);
}

/*
==============
DLogHookup::TempAlloc
==============
*/

void *__fastcall DLogHookup::TempAlloc(DLogHookup *this, unsigned __int64 size)
{
  return ?TempAlloc@DLogHookup@@UEBAPEAX_K@Z(this, size);
}

/*
==============
DLogHookup::Alloc
==============
*/

void *__fastcall DLogHookup::Alloc(DLogHookup *this, unsigned __int64 size)
{
  return ?Alloc@DLogHookup@@UEBAPEAX_K@Z(this, size);
}

/*
==============
DLogHookup::GetUnoIdFromUserId
==============
*/

unsigned __int64 __fastcall DLogHookup::GetUnoIdFromUserId(DLogHookup *this, unsigned __int64 userId)
{
  return ?GetUnoIdFromUserId@DLogHookup@@UEBA_K_K@Z(this, userId);
}

/*
==============
DLogHookup::GetChannelBufferTimeMilliseconds
==============
*/

int __fastcall DLogHookup::GetChannelBufferTimeMilliseconds(DLogHookup *this, const char *name, int bufferTimeMilliseconds)
{
  return ?GetChannelBufferTimeMilliseconds@DLogHookup@@UEBAHPEBDH@Z(this, name, bufferTimeMilliseconds);
}

/*
==============
DLogHookup::GetSamplingModulus
==============
*/

int __fastcall DLogHookup::GetSamplingModulus(DLogHookup *this)
{
  return ?GetSamplingModulus@DLogHookup@@UEBAHXZ(this);
}

/*
==============
DLog_SetUserId
==============
*/

void __fastcall DLog_SetUserId(int controllerIndex, unsigned __int64 userId)
{
  ?DLog_SetUserId@@YAXH_K@Z(controllerIndex, userId);
}

/*
==============
DLogHookup::GetSchema
==============
*/

const DLogSchema *__fastcall DLogHookup::GetSchema(DLogHookup *this)
{
  return ?GetSchema@DLogHookup@@UEBAPEBUDLogSchema@@XZ(this);
}

/*
==============
DLogHookup::IsChannelActive
==============
*/

bool __fastcall DLogHookup::IsChannelActive(DLogHookup *this, const char *name, bool active)
{
  return ?IsChannelActive@DLogHookup@@UEBA_NPEBD_N@Z(this, name, active);
}

/*
==============
DLogHookup::IsActive
==============
*/

bool __fastcall DLogHookup::IsActive(DLogHookup *this)
{
  return ?IsActive@DLogHookup@@UEBA_NXZ(this);
}

/*
==============
DLog_RegisterCallbackForSessionUpdate
==============
*/

void __fastcall DLog_RegisterCallbackForSessionUpdate(void (__fastcall *callback)())
{
  ?DLog_RegisterCallbackForSessionUpdate@@YAXP6AXXZ@Z(callback);
}

/*
==============
DLogHookup::GetFirstPartyUserIdFromUserId
==============
*/

unsigned __int64 __fastcall DLogHookup::GetFirstPartyUserIdFromUserId(DLogHookup *this, unsigned __int64 userId)
{
  return ?GetFirstPartyUserIdFromUserId@DLogHookup@@UEBA_K_K@Z(this, userId);
}

/*
==============
DLogHookup::IsUserInGroup
==============
*/

bool __fastcall DLogHookup::IsUserInGroup(DLogHookup *this, unsigned __int64 userId, const char *name)
{
  return ?IsUserInGroup@DLogHookup@@UEBA_N_KPEBD@Z(this, userId, name);
}

/*
==============
DLogHookup::LeaveCriticalSection
==============
*/

void __fastcall DLogHookup::LeaveCriticalSection(DLogHookup *this, DLogCriticalSection id)
{
  ?LeaveCriticalSection@DLogHookup@@UEBAXW4DLogCriticalSection@@@Z(this, id);
}

/*
==============
DLogHookup::IsEndpointActive
==============
*/

bool __fastcall DLogHookup::IsEndpointActive(DLogHookup *this, const char *name, bool active)
{
  return ?IsEndpointActive@DLogHookup@@UEBA_NPEBD_N@Z(this, name, active);
}

/*
==============
DLogHookup::TempFree
==============
*/

void __fastcall DLogHookup::TempFree(DLogHookup *this, void *memory)
{
  ?TempFree@DLogHookup@@UEBAXPEAX@Z(this, memory);
}

/*
==============
DLogHookup::GetSamplingMatchId
==============
*/

unsigned __int64 __fastcall DLogHookup::GetSamplingMatchId(DLogHookup *this)
{
  return ?GetSamplingMatchId@DLogHookup@@UEBA_KXZ(this);
}

/*
==============
DLogHookup::GetSamplingSeed
==============
*/

int __fastcall DLogHookup::GetSamplingSeed(DLogHookup *this)
{
  return ?GetSamplingSeed@DLogHookup@@UEBAHXZ(this);
}

/*
==============
DLogHookup::EnterCriticalSection
==============
*/

void __fastcall DLogHookup::EnterCriticalSection(DLogHookup *this, DLogCriticalSection id)
{
  ?EnterCriticalSection@DLogHookup@@UEBAXW4DLogCriticalSection@@@Z(this, id);
}

/*
==============
DLogHookup::GetEventSampleRate
==============
*/

double __fastcall DLogHookup::GetEventSampleRate(DLogHookup *this, const char *name, float sampleRate)
{
  double result; 

  *(float *)&result = ?GetEventSampleRate@DLogHookup@@UEBAMPEBDM@Z(this, name, sampleRate);
  return result;
}

/*
==============
DLogHookup::DLogHookup
==============
*/
void DLogHookup::DLogHookup(DLogHookup *this)
{
  this->__vftable = (DLogHookup_vtbl *)&DLogHookup::`vftable';
  DLog_SetHooks(this);
  DLog_RegisterBuiltinSerializers();
  DLog_RegisterBuiltinEndpoints();
  DLog_RegisterAutoFills();
  DLog_RegisterSerializers();
  DLog_RegisterEndpoints();
}

/*
==============
DLogHookup::AddMetric
==============
*/
void DLogHookup::AddMetric(DLogHookup *this, const char *name, unsigned __int64 count, unsigned __int64 bytes, unsigned __int64 timeMicroseconds)
{
  if ( this->IsMetricsActive(this) )
    DLog_PrintInfo("%s count=%zu bytes=%zu time=%zuus\n", name, count, bytes, timeMicroseconds);
}

/*
==============
DLogHookup::Alloc
==============
*/
void *DLogHookup::Alloc(DLogHookup *this, unsigned __int64 size)
{
  void *v3; 
  unsigned __int64 m_used_mem; 
  void *v5; 

  DLog_EnterCriticalSection(DLOG_CRITSECT_MEMORY);
  v3 = ntl::nxheap::allocate(&s_dlogHeap.m_heap, size, 8ui64, 0);
  m_used_mem = s_dlogHeapMaxSize;
  v5 = v3;
  if ( s_dlogHeap.m_heap.m_used_mem > s_dlogHeapMaxSize )
    m_used_mem = s_dlogHeap.m_heap.m_used_mem;
  s_dlogHeapMaxSize = m_used_mem;
  DLog_LeaveCriticalSection(DLOG_CRITSECT_MEMORY);
  return v5;
}

/*
==============
DLogHookup::Assert
==============
*/
void DLogHookup::Assert(DLogHookup *this, bool expr, const char *exprString, const char *file, const char *function, int line, const char *msg)
{
  if ( !expr && CoreAssert_Handler(file, line, ASSERT_TYPE_SANITY, exprString, (const char *)&queryFormat, msg) )
    __debugbreak();
}

/*
==============
DLog_ErrorCleanup
==============
*/
void DLog_ErrorCleanup(void)
{
  if ( s_dlogErrorDrop )
  {
    s_dlogErrorDrop = 0;
    if ( Sys_InCriticalSection(CRITSECT_DLOG_RECORD) )
      DLog_LeaveCriticalSection(DLOG_CRITSECT_RECORD);
  }
}

/*
==============
DLog_GetEventDvar
==============
*/
const dvar_t *DLog_GetEventDvar(const char *name, const char *value)
{
  const char *v3; 
  char dest[128]; 

  v3 = "dlog_event_";
  if ( !strncmp(name, "dlog_event_", 0xBui64) )
    v3 = (char *)&queryFormat.fmt + 3;
  DLog_sprintf<128>((char (*)[128])dest, "%s%s_%s", v3, name, value);
  return Dvar_FindVarByName(dest);
}

/*
==============
DLog_GetUserId
==============
*/
unsigned __int64 DLog_GetUserId(int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_hookup.cpp", 162, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return s_dlogUserIds[v1];
}

/*
==============
DLog_InitHookup
==============
*/
void DLog_InitHookup(void)
{
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  DWServicesAccess *v2; 
  DLogGluttonInfo info; 

  Dvar_BeginPermanentRegistration();
  DVARBOOL_dlog_enabled = Dvar_RegisterBool("NKLQKPPOMR", 1, 0, "Used to turn off/on the DLog system");
  DVARSTR_dlog_proxy_host = Dvar_RegisterString("LQNPSOKKQT", (const char *)&queryFormat.fmt + 3, 0, "Specify a DLog Proxy host");
  DVARINT_dlog_session_timeout = Dvar_RegisterInt("MOPMOKNOQS", 0, 0, 0x7FFFFFFF, 0, "The amount of time (in ms) before we reset the sessionid of a user. 0 indicates that this is turned off.");
  DVARINT_dlog_sampling_seed = Dvar_RegisterInt("MQMRKTQPKL", 41931, 0, 0x7FFFFFFF, 0, "Seed used for the sampling logic in DLog");
  DVARINT_dlog_sampling_modulus = Dvar_RegisterInt("LQQMNNQPON", 1000, 0, 0x7FFFFFFF, 0, "Modulus used for the sampling logic in DLog");
  DVARINT_dlog_env = Dvar_RegisterInt("NQLOTSRTQR", -1, -1, 3, 0, "dlog env override (-1 = disabled, 0 = dev, 1 = cert, 2 = prod)");
  DVARBOOL_dlog_metrics = Dvar_RegisterBool("OLQTKKONKT", 0, 0, "Print dlog metrics");
  DVARBOOL_dlog_perf_output = Dvar_RegisterBool("TRMQNQQNT", 1, 0, "Collect performance data for analysis.");
  DVARINT_dlog_perf_frequency = Dvar_RegisterInt("NTKKRRKRNQ", 10000, 10, 30000, 0, "Frequency on which we collect performance data, in milliseconds.");
  DVARINT_dlog_perf_min_time_in_level = Dvar_RegisterInt("MLOQKKOMLR", 2000, 0, 0x7FFFFFFF, 0, "The minimum amount of time to spend in a level before we begin to collect performance data, in milliseconds.");
  Dvar_EndPermanentRegistration();
  Instance = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(Instance);
  bdTelemetryDLogSink::init(&s_bdTelemetryDLogSink, TitleID, 0i64, s_bdTelemetryBufferPtrs, s_bdTelemetryBufferSizes);
  bdTelemetry::setSink(&s_bdTelemetryDLogSink);
  Cmd_AddCommandInternal("dlog_recordPerf", DLog_RecordPerf_f, &DLog_RecordPerf_f_VAR);
  memset_0(&info, 0, sizeof(info));
  v2 = DWServicesAccess::GetInstance();
  info.titleId = DWServicesAccess::GetTitleID(v2);
  DLog_strcpy(info.accountType, 0x20ui64, "xbl");
  info.platform = DLOG_GLUTTON_PLATFORM_XBOX_ONE;
  info.firstPartyAccountType = DLOG_FIRST_PARTY_ACCOUNT_TYPE_XBL;
  DLog_SetGluttonInfo(&info);
}

/*
==============
DLog_RegisterCallbackForSessionIdUpdate
==============
*/
void DLog_RegisterCallbackForSessionIdUpdate(void (*callback)())
{
  if ( s_sessionIdUpdateCallback && s_sessionIdUpdateCallback != callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_hookup.cpp", 277, ASSERT_TYPE_ASSERT, "(s_sessionIdUpdateCallback == nullptr || s_sessionIdUpdateCallback == callback)", (const char *)&queryFormat, "s_sessionIdUpdateCallback == nullptr || s_sessionIdUpdateCallback == callback") )
    __debugbreak();
  s_sessionIdUpdateCallback = callback;
}

/*
==============
DLog_RegisterCallbackForSessionUpdate
==============
*/
void DLog_RegisterCallbackForSessionUpdate(void (*callback)())
{
  if ( s_sessionCallback && s_sessionCallback != callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_hookup.cpp", 271, ASSERT_TYPE_ASSERT, "(s_sessionCallback == nullptr || s_sessionCallback == callback)", (const char *)&queryFormat, "s_sessionCallback == nullptr || s_sessionCallback == callback") )
    __debugbreak();
  s_sessionCallback = callback;
}

/*
==============
DLog_SetUserId
==============
*/
void DLog_SetUserId(int controllerIndex, unsigned __int64 userId)
{
  __int64 v2; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_hookup.cpp", 181, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  s_dlogUserIds[v2] = userId;
  bdTelemetryDLogSink::setContextUserId(&s_bdTelemetryDLogSink, userId);
}

/*
==============
DLog_UpdateSessions
==============
*/
void DLog_UpdateSessions(void)
{
  unsigned __int64 *v0; 
  char v1; 
  int i; 
  const dvar_t *v3; 
  unsigned __int64 v4; 

  v0 = s_dlogUserIds;
  v1 = 0;
  for ( i = 0; i < 8; ++i )
  {
    if ( Live_IsUserSignedInToDemonware(i) )
    {
      if ( (unsigned int)i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_hookup.cpp", 162, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      v3 = DVARINT_dlog_session_timeout;
      v4 = *v0;
      if ( !DVARINT_dlog_session_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dlog_session_timeout") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      if ( DLog_UpdateSession(v4, v3->current.integer) )
        v1 = 1;
    }
    ++v0;
  }
  if ( v1 && s_sessionIdUpdateCallback )
  {
    s_sessionIdUpdateCallback();
    s_sessionIdUpdateCallback = NULL;
  }
  if ( s_sessionCallback )
  {
    s_sessionCallback();
    s_sessionCallback = NULL;
  }
}

/*
==============
DLogHookup::EnterCriticalSection
==============
*/
void DLogHookup::EnterCriticalSection(DLogHookup *this, DLogCriticalSection id)
{
  Sys_EnterCriticalSection(s_criticalSections[(unsigned __int8)id]);
}

/*
==============
DLogHookup::ErrorFatal
==============
*/
void DLogHookup::ErrorFatal(DLogHookup *this, const char *msg)
{
  s_dlogErrorDrop = 1;
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&queryFormat, msg);
}

/*
==============
DLogHookup::Free
==============
*/
void DLogHookup::Free(DLogHookup *this, void *memory)
{
  DLog_EnterCriticalSection(DLOG_CRITSECT_MEMORY);
  ntl::nxheap::free(&s_dlogHeap.m_heap, memory);
  DLog_LeaveCriticalSection(DLOG_CRITSECT_MEMORY);
}

/*
==============
DLogHookup::GetChannelBufferTimeMilliseconds
==============
*/
int DLogHookup::GetChannelBufferTimeMilliseconds(DLogHookup *this, const char *name, int bufferTimeMilliseconds)
{
  const dvar_t *VarByName; 
  char dest[128]; 

  DLog_sprintf<128>((char (*)[128])dest, "dlog_channel_%s_buffer_time_ms", name);
  VarByName = Dvar_FindVarByName(dest);
  if ( VarByName )
    return atoi(VarByName->current.string);
  else
    return bufferTimeMilliseconds;
}

/*
==============
DLogHookup::GetEnv
==============
*/
__int64 DLogHookup::GetEnv(DLogHookup *this)
{
  const dvar_t *v1; 
  __int64 result; 
  DWServicesAccess *Instance; 
  bdEnvironment environment; 

  v1 = DVARINT_dlog_env;
  if ( !DVARINT_dlog_env && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dlog_env") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  result = v1->current.unsignedInt;
  if ( (int)result < 0 )
  {
    environment = BD_ENVIRONMENT_PROD;
    Instance = DWServicesAccess::GetInstance();
    DWServicesAccess::GetEnvironment(Instance, &environment);
    if ( environment )
    {
      if ( environment == BD_ENVIRONMENT_CERT )
        return 1i64;
      else
        return 2i64;
    }
    else
    {
      return 0i64;
    }
  }
  return result;
}

/*
==============
DLogHookup::GetEventChannelSample
==============
*/
int DLogHookup::GetEventChannelSample(DLogHookup *this, const char *name, const char *channel, DLogEnv env, DLogSample sample)
{
  const char *v5; 
  const dvar_t *VarByName; 
  char dest[128]; 
  char v9[128]; 

  DLog_sprintf<128>((char (*)[128])dest, "%s_%s", name, channel);
  v5 = "dlog_event_";
  if ( !strncmp(dest, "dlog_event_", 0xBui64) )
    v5 = (char *)&queryFormat.fmt + 3;
  DLog_sprintf<128>((char (*)[128])v9, "%s%s_%s", v5, dest, "sample");
  VarByName = Dvar_FindVarByName(v9);
  if ( VarByName )
    return atoi(VarByName->current.string);
  else
    return (unsigned __int8)sample;
}

/*
==============
DLogHookup::GetEventSampleRate
==============
*/

float __fastcall DLogHookup::GetEventSampleRate(DLogHookup *this, const char *name, double sampleRate)
{
  const dvar_t *EventDvar; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  EventDvar = DLog_GetEventDvar(name, "sample_rate");
  if ( EventDvar )
  {
    *(double *)&_XMM0 = atof(EventDvar->current.string);
    __asm
    {
      vcvtsd2ss xmm0, xmm0, xmm0
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  else
  {
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
DLogHookup::GetEventSampleType
==============
*/
int DLogHookup::GetEventSampleType(DLogHookup *this, const char *name, DLogSampleType sampleType)
{
  const dvar_t *EventDvar; 

  EventDvar = DLog_GetEventDvar(name, "sample_type");
  if ( EventDvar )
    return atoi(EventDvar->current.string);
  else
    return (unsigned __int8)sampleType;
}

/*
==============
DLogHookup::GetEventThrottleCount
==============
*/
int DLogHookup::GetEventThrottleCount(DLogHookup *this, const char *name, int throttleCount)
{
  const dvar_t *EventDvar; 

  EventDvar = DLog_GetEventDvar(name, "throttle_count");
  if ( EventDvar )
    return atoi(EventDvar->current.string);
  else
    return throttleCount;
}

/*
==============
DLogHookup::GetEventThrottleTimeMilliseconds
==============
*/
int DLogHookup::GetEventThrottleTimeMilliseconds(DLogHookup *this, const char *name, int throttleTimeMilliseconds)
{
  const dvar_t *EventDvar; 

  EventDvar = DLog_GetEventDvar(name, "throttle_time_ms");
  if ( EventDvar )
    return atoi(EventDvar->current.string);
  else
    return throttleTimeMilliseconds;
}

/*
==============
DLogHookup::GetFirstPartyUserIdFromUserId
==============
*/
unsigned __int64 DLogHookup::GetFirstPartyUserIdFromUserId(DLogHookup *this, unsigned __int64 userId)
{
  int v3; 
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  DWServicesAccess *v6; 
  bdLoginResult *LoginResult; 

  v3 = 0;
  while ( 1 )
  {
    Instance = DWServicesAccess::GetInstance();
    Login = DWServicesAccess::GetLogin(Instance, v3);
    if ( DWLogin::hasStarted(Login) && !DWLogin::isPending(Login) && DWLogin::succeeded(Login) )
    {
      v6 = DWServicesAccess::GetInstance();
      LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(v6, v3);
      if ( bdLoginResult::getFirstPartyUserID(LoginResult) == userId || bdLoginResult::getUnoID(LoginResult) == userId )
        break;
    }
    if ( ++v3 >= 8 )
      return 0i64;
  }
  return bdLoginResult::getFirstPartyUserID(LoginResult);
}

/*
==============
DLogHookup::GetSamplingMatchId
==============
*/

unsigned __int64 __fastcall DLogHookup::GetSamplingMatchId(DLogHookup *this)
{
  return OnlineMatchId::GetMatchId();
}

/*
==============
DLogHookup::GetSamplingModulus
==============
*/
__int64 DLogHookup::GetSamplingModulus(DLogHookup *this)
{
  const dvar_t *v1; 

  v1 = DVARINT_dlog_sampling_modulus;
  if ( !DVARINT_dlog_sampling_modulus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dlog_sampling_modulus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.unsignedInt;
}

/*
==============
DLogHookup::GetSamplingSeed
==============
*/
__int64 DLogHookup::GetSamplingSeed(DLogHookup *this)
{
  const dvar_t *v1; 

  v1 = DVARINT_dlog_sampling_seed;
  if ( !DVARINT_dlog_sampling_seed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dlog_sampling_seed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.unsignedInt;
}

/*
==============
DLogHookup::GetSchema
==============
*/
DLogSchema *DLogHookup::GetSchema(DLogHookup *this)
{
  DLogSchema *result; 

  result = s_schema;
  if ( !s_schema )
  {
    if ( Sys_IsMainThread() )
    {
      result = DB_FindXAssetHeader(ASSET_TYPE_DLOG_SCHEMA, "dlog/dlog_routes.dlog", 0).dlogSchema;
      s_schema = result;
    }
    else
    {
      return 0i64;
    }
  }
  return result;
}

/*
==============
DLogHookup::GetUTC
==============
*/
unsigned int DLogHookup::GetUTC(DLogHookup *this)
{
  if ( LiveStorage_IsTimeSynced() )
    return LiveStorage_GetUTC();
  else
    return Sys_GetTimeAsSeconds();
}

/*
==============
DLogHookup::GetUnoIdFromUserId
==============
*/
unsigned __int64 DLogHookup::GetUnoIdFromUserId(DLogHookup *this, unsigned __int64 userId)
{
  int v3; 
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  DWServicesAccess *v6; 
  bdLoginResult *LoginResult; 

  v3 = 0;
  while ( 1 )
  {
    Instance = DWServicesAccess::GetInstance();
    Login = DWServicesAccess::GetLogin(Instance, v3);
    if ( DWLogin::hasStarted(Login) && !DWLogin::isPending(Login) && DWLogin::succeeded(Login) )
    {
      v6 = DWServicesAccess::GetInstance();
      LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(v6, v3);
      if ( bdLoginResult::getFirstPartyUserID(LoginResult) == userId || bdLoginResult::getUnoID(LoginResult) == userId )
        break;
    }
    if ( ++v3 >= 8 )
      return 0i64;
  }
  return bdLoginResult::getUnoID(LoginResult);
}

/*
==============
DLogHookup::IsActive
==============
*/
__int64 DLogHookup::IsActive(DLogHookup *this)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_dlog_enabled;
  if ( !DVARBOOL_dlog_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dlog_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.color[0];
}

/*
==============
DLogHookup::IsChannelActive
==============
*/
bool DLogHookup::IsChannelActive(DLogHookup *this, const char *name, bool active)
{
  const dvar_t *VarByName; 
  char dest[128]; 

  DLog_sprintf<128>((char (*)[128])dest, "dlog_channel_%s_active", name);
  VarByName = Dvar_FindVarByName(dest);
  if ( VarByName )
    return atoi(VarByName->current.string) != 0;
  else
    return active;
}

/*
==============
DLogHookup::IsChannelReady
==============
*/
bool DLogHookup::IsChannelReady(DLogHookup *this, const DLogChannel *channel)
{
  const DLogGluttonInfo *GluttonInfo; 
  bool result; 

  result = 1;
  if ( !strcmp_0(channel->endpoint->name, "data_channel_standard") )
  {
    GluttonInfo = DLog_GetGluttonInfo();
    if ( !GluttonInfo || !GluttonInfo->accessToken[0] || !Http_IsInitialized() )
      return 0;
  }
  return result;
}

/*
==============
DLogHookup::IsEndpointActive
==============
*/
int DLogHookup::IsEndpointActive(DLogHookup *this, const char *name, bool active)
{
  int result; 
  const dvar_t *VarByName; 
  char dest[128]; 

  result = strcmp_0(name, "direct_telemetry");
  if ( result )
  {
    DLog_sprintf<128>((char (*)[128])dest, "dlog_endpoint_%s_active", name);
    VarByName = Dvar_FindVarByName(dest);
    if ( VarByName )
      return atoi(VarByName->current.string) != 0;
    return active;
  }
  return result;
}

/*
==============
DLogHookup::IsEventActive
==============
*/
bool DLogHookup::IsEventActive(DLogHookup *this, const char *name, bool active)
{
  const dvar_t *EventDvar; 

  EventDvar = DLog_GetEventDvar(name, "active");
  if ( EventDvar )
    return atoi(EventDvar->current.string) != 0;
  else
    return active;
}

/*
==============
DLogHookup::IsMetricsActive
==============
*/
__int64 DLogHookup::IsMetricsActive(DLogHookup *this)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_dlog_metrics;
  if ( !DVARBOOL_dlog_metrics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dlog_metrics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.color[0];
}

/*
==============
DLogHookup::IsUserInGroup
==============
*/
bool DLogHookup::IsUserInGroup(DLogHookup *this, unsigned __int64 userId, const char *name)
{
  const dvar_t *VarByName; 

  VarByName = Dvar_FindVarByName(name);
  return VarByName && VarByName->current.enabled;
}

/*
==============
DLogHookup::LeaveCriticalSection
==============
*/
void DLogHookup::LeaveCriticalSection(DLogHookup *this, DLogCriticalSection id)
{
  Sys_LeaveCriticalSection(s_criticalSections[(unsigned __int8)id]);
}

/*
==============
DLogHookup::Print
==============
*/
void DLogHookup::Print(DLogHookup *this, DLogPrintType type, const char *fmt, char *vargs)
{
  __int32 v5; 
  char dest[4096]; 

  Com_vsprintf_truncate(dest, 0x1000ui64, 0x1000ui64, fmt, vargs);
  if ( type )
  {
    v5 = type - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        Core_PrintError_Unchecked("%s %s", "[DLOG]", dest);
    }
    else
    {
      Core_PrintWarning_Unchecked("%s %s", "[DLOG]", dest);
    }
  }
  else
  {
    Com_Printf(0x20000, "%s %s", "[DLOG]", dest);
  }
}

/*
==============
DLogHookup::RecordErrorEvent
==============
*/
void DLogHookup::RecordErrorEvent(DLogHookup *this, int code, const char *message, const char *stackTrace)
{
  DLog_RecordErrorEvent(DLOG_ERROR_CODE_DLOG, message, stackTrace);
}

/*
==============
DLogHookup::TempAlloc
==============
*/
void *DLogHookup::TempAlloc(DLogHookup *this, unsigned __int64 size)
{
  return this->Alloc(this, size);
}

/*
==============
DLogHookup::TempFree
==============
*/
void DLogHookup::TempFree(DLogHookup *this, void *memory)
{
  this->Free(this, memory);
}

