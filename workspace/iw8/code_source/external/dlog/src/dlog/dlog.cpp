/*
==============
DLog_OnResume
==============
*/

void DLog_OnResume(void)
{
  ?DLog_OnResume@@YAXXZ();
}

/*
==============
DLog_RecordBinary
==============
*/

bool __fastcall DLog_RecordBinary(unsigned __int64 userId, const char *name, void *bytes, int byteCount, DLogSerializationFormat serializationFormat)
{
  return ?DLog_RecordBinary@@YA_N_KPEBDPEAXHW4DLogSerializationFormat@@@Z(userId, name, bytes, byteCount, serializationFormat);
}

/*
==============
DLog_SetHooks
==============
*/

void __fastcall DLog_SetHooks(const DLogHooks *hooks)
{
  ?DLog_SetHooks@@YAXPEBUDLogHooks@@@Z(hooks);
}

/*
==============
DLog_GetHooks
==============
*/

const DLogHooks *__fastcall DLog_GetHooks()
{
  return ?DLog_GetHooks@@YAPEBUDLogHooks@@XZ();
}

/*
==============
DLog_FreeChannelBuffer
==============
*/

void __fastcall DLog_FreeChannelBuffer(DLogChannelBuffer *channelBuffer)
{
  ?DLog_FreeChannelBuffer@@YAXPEAUDLogChannelBuffer@@@Z(channelBuffer);
}

/*
==============
DLog_IsSending
==============
*/

bool __fastcall DLog_IsSending()
{
  return ?DLog_IsSending@@YA_NXZ();
}

/*
==============
DLog_GetGluttonInfo
==============
*/

const DLogGluttonInfo *__fastcall DLog_GetGluttonInfo()
{
  return ?DLog_GetGluttonInfo@@YAPEBUDLogGluttonInfo@@XZ();
}

/*
==============
DLog_IsInitialized
==============
*/

bool __fastcall DLog_IsInitialized()
{
  return ?DLog_IsInitialized@@YA_NXZ();
}

/*
==============
DLog_RegisterAutoFill
==============
*/

void __fastcall DLog_RegisterAutoFill(const char *name, void (__fastcall *autoFill)(DLogContext *, const DLogEvent *))
{
  ?DLog_RegisterAutoFill@@YAXPEBDP6AXPEAUDLogContext@@PEBUDLogEvent@@@Z@Z(name, autoFill);
}

/*
==============
DLog_Shutdown
==============
*/

void DLog_Shutdown(void)
{
  ?DLog_Shutdown@@YAXXZ();
}

/*
==============
DLog_RegisterSerializer
==============
*/

void __fastcall DLog_RegisterSerializer(const char *name, int (__fastcall *serializer)(DLogReadContext *, DLogEventInfo *, void *, int), bool requireSchema)
{
  ?DLog_RegisterSerializer@@YAXPEBDP6AHPEAUDLogReadContext@@PEAUDLogEventInfo@@PEAXH@Z_N@Z(name, serializer, requireSchema);
}

/*
==============
DLog_GetSchema
==============
*/

const DLogSchema *__fastcall DLog_GetSchema()
{
  return ?DLog_GetSchema@@YAPEBUDLogSchema@@XZ();
}

/*
==============
DLog_GetEndpoints
==============
*/

int __fastcall DLog_GetEndpoints(const DLogEndpoint **endpoints)
{
  return ?DLog_GetEndpoints@@YAHPEAPEBUDLogEndpoint@@@Z(endpoints);
}

/*
==============
DLog_GetAutoFills
==============
*/

int __fastcall DLog_GetAutoFills(const DLogAutoFill **autoFills)
{
  return ?DLog_GetAutoFills@@YAHPEAPEBUDLogAutoFill@@@Z(autoFills);
}

/*
==============
DLog_Send
==============
*/

void __fastcall DLog_Send(bool flush)
{
  ?DLog_Send@@YAX_N@Z(flush);
}

/*
==============
DLog_GetSchemaVar
==============
*/

const char *__fastcall DLog_GetSchemaVar(const DLogSchema *schema, const char *name)
{
  return ?DLog_GetSchemaVar@@YAPEBDPEBUDLogSchema@@PEBD@Z(schema, name);
}

/*
==============
DLog_PrintChannelBuffers
==============
*/

void DLog_PrintChannelBuffers(void)
{
  ?DLog_PrintChannelBuffers@@YAXXZ();
}

/*
==============
DLog_RecordContext
==============
*/

bool __fastcall DLog_RecordContext(DLogContext *context)
{
  return ?DLog_RecordContext@@YA_NPEAUDLogContext@@@Z(context);
}

/*
==============
DLog_Init
==============
*/

void DLog_Init(void)
{
  ?DLog_Init@@YAXXZ();
}

/*
==============
DLog_SetGluttonInfo
==============
*/

void __fastcall DLog_SetGluttonInfo(const DLogGluttonInfo *info)
{
  ?DLog_SetGluttonInfo@@YAXPEBUDLogGluttonInfo@@@Z(info);
}

/*
==============
DLog_GetSessionId
==============
*/

unsigned __int64 __fastcall DLog_GetSessionId(unsigned __int64 userId)
{
  return ?DLog_GetSessionId@@YA_K_K@Z(userId);
}

/*
==============
DLog_RegisterEndpoint
==============
*/

void __fastcall DLog_RegisterEndpoint(const char *name, bool (__fastcall *endpoint)(unsigned __int64, const void *, int, DLogEventInfo *), bool requireSchema)
{
  ?DLog_RegisterEndpoint@@YAXPEBDP6A_N_KPEBXHPEAUDLogEventInfo@@@Z_N@Z(name, endpoint, requireSchema);
}

/*
==============
DLog_Frame
==============
*/

void DLog_Frame(void)
{
  ?DLog_Frame@@YAXXZ();
}

/*
==============
DLog_GetSerializers
==============
*/

int __fastcall DLog_GetSerializers(const DLogSerializer **serializers)
{
  return ?DLog_GetSerializers@@YAHPEAPEBUDLogSerializer@@@Z(serializers);
}

/*
==============
DLog_UpdateSession
==============
*/

bool __fastcall DLog_UpdateSession(unsigned __int64 userId, int timeout)
{
  return ?DLog_UpdateSession@@YA_N_KH@Z(userId, timeout);
}

/*
==============
DLog_AllocateChannelBuffer
==============
*/
DLogChannelBuffer *DLog_AllocateChannelBuffer(const char *name, const DLogChannel *channel)
{
  unsigned int v4; 
  DLog *v5; 
  unsigned int v6; 
  DLog *v7; 
  int v9; 
  DLogChannelBuffer *v10; 
  DLogChannelBuffer *v11; 
  int v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int i; 
  DLogChannelBuffer *v17; 
  const char *v18; 
  __int64 line; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  DLog_EnterCriticalSection(DLOG_CRITSECT_MEMORY);
  v4 = 0;
  v5 = &s_dlog;
  v6 = 0;
  v7 = &s_dlog;
  while ( v7->channelBuffers[0] )
  {
    ++v6;
    v7 = (DLog *)((char *)v7 + 8);
    if ( v6 >= 0x60 )
      goto LABEL_4;
  }
  v9 = DLog_Milliseconds();
  v10 = (DLogChannelBuffer *)DLog_Alloc(channel->bufferSize + 440i64);
  v11 = v10;
  if ( !v10 )
  {
    v12 = DLog_Milliseconds();
    DLog_Error(NULL, NULL, "out of memory", "Unable to allocate %llu bytes for the channelbuffer for channel %s (allocDuration %d, timeSinceLastSend %d).\n", channel->bufferSize + 440i64, channel->name, v12 - v9, v12 - s_dbg_lastSendCall);
    if ( DLog_Milliseconds() - lastReportMilliseconds > 30000 )
    {
      v13 = 0;
      v14 = 0;
      v15 = 0;
      DLog_PrintInfo("Channel Buffer Report\n");
      for ( i = 0; i < 0x60; ++i )
      {
        v17 = v5->channelBuffers[0];
        if ( v5->channelBuffers[0] )
        {
          DLog_Assert(v17->channel != NULL, "channelBuffer->channel != nullptr", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_PrintChannelBuffers", 185);
          DLog_Assert(v17->eventInfo.event != NULL, "channelBuffer->eventInfo.event != nullptr", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_PrintChannelBuffers", 186);
          v18 = "false";
          if ( v17->inUse )
            v18 = "true";
          LODWORD(v22) = v17->context.bufferSize;
          LODWORD(v21) = v17->context.position;
          LODWORD(v20) = v17->eventCount;
          DLog_PrintInfo("\t%d: event=%s category=%s channel=%s events=%d bytes=%d/%d sending=%s\n", i, v17->eventInfo.event->name, v17->eventInfo.categoryName, v17->channel->name, v20, v21, v22, v18);
          v13 += v17->eventCount;
          ++v4;
          v14 += v17->context.position;
          v15 += v17->context.bufferSize;
        }
        v5 = (DLog *)((char *)v5 + 8);
      }
      LODWORD(line) = v15;
      DLog_PrintInfo("buffers=%d events=%d bytes=%d reserved=%d\n", v4, v13, v14, line);
      lastReportMilliseconds = DLog_Milliseconds();
    }
LABEL_4:
    DLog_LeaveCriticalSection(DLOG_CRITSECT_MEMORY);
    return 0i64;
  }
  memset_0(v10, 0, channel->bufferSize + 440i64);
  v11->name = name;
  v11->channel = channel;
  DLog_CreateContext(&v11->context, 0i64, &v11[1], channel->bufferSize);
  s_dlog.channelBuffers[v6] = v11;
  DLog_LeaveCriticalSection(DLOG_CRITSECT_MEMORY);
  return v11;
}

/*
==============
DLog_Frame
==============
*/
void DLog_Frame(void)
{
  if ( DLog_IsActive() )
  {
    Http_Frame();
    ++s_dlog.frameIndex;
  }
}

/*
==============
DLog_FreeChannelBuffer
==============
*/
void DLog_FreeChannelBuffer(DLogChannelBuffer *channelBuffer)
{
  DLogChannelBuffer **v2; 
  unsigned int i; 

  DLog_EnterCriticalSection(DLOG_CRITSECT_MEMORY);
  v2 = &s_dlog.channelBuffers[2];
  for ( i = 0; i < 0x60; i += 48 )
  {
    if ( *(v2 - 2) == channelBuffer )
      *(v2 - 2) = NULL;
    if ( *(v2 - 1) == channelBuffer )
      *(v2 - 1) = NULL;
    if ( *v2 == channelBuffer )
      *v2 = NULL;
    if ( v2[1] == channelBuffer )
      v2[1] = NULL;
    if ( v2[2] == channelBuffer )
      v2[2] = NULL;
    if ( v2[3] == channelBuffer )
      v2[3] = NULL;
    if ( v2[4] == channelBuffer )
      v2[4] = NULL;
    if ( v2[5] == channelBuffer )
      v2[5] = NULL;
    if ( v2[6] == channelBuffer )
      v2[6] = NULL;
    if ( v2[7] == channelBuffer )
      v2[7] = NULL;
    if ( v2[8] == channelBuffer )
      v2[8] = NULL;
    if ( v2[9] == channelBuffer )
      v2[9] = NULL;
    if ( v2[10] == channelBuffer )
      v2[10] = NULL;
    if ( v2[11] == channelBuffer )
      v2[11] = NULL;
    if ( v2[12] == channelBuffer )
      v2[12] = NULL;
    if ( v2[13] == channelBuffer )
      v2[13] = NULL;
    if ( v2[14] == channelBuffer )
      v2[14] = NULL;
    if ( v2[15] == channelBuffer )
      v2[15] = NULL;
    if ( v2[16] == channelBuffer )
      v2[16] = NULL;
    if ( v2[17] == channelBuffer )
      v2[17] = NULL;
    if ( v2[18] == channelBuffer )
      v2[18] = NULL;
    if ( v2[19] == channelBuffer )
      v2[19] = NULL;
    if ( v2[20] == channelBuffer )
      v2[20] = NULL;
    if ( v2[21] == channelBuffer )
      v2[21] = NULL;
    if ( v2[22] == channelBuffer )
      v2[22] = NULL;
    if ( v2[23] == channelBuffer )
      v2[23] = NULL;
    if ( v2[24] == channelBuffer )
      v2[24] = NULL;
    if ( v2[25] == channelBuffer )
      v2[25] = NULL;
    if ( v2[26] == channelBuffer )
      v2[26] = NULL;
    if ( v2[27] == channelBuffer )
      v2[27] = NULL;
    if ( v2[28] == channelBuffer )
      v2[28] = NULL;
    if ( v2[29] == channelBuffer )
      v2[29] = NULL;
    if ( v2[30] == channelBuffer )
      v2[30] = NULL;
    if ( v2[31] == channelBuffer )
      v2[31] = NULL;
    if ( v2[32] == channelBuffer )
      v2[32] = NULL;
    if ( v2[33] == channelBuffer )
      v2[33] = NULL;
    if ( v2[34] == channelBuffer )
      v2[34] = NULL;
    if ( v2[35] == channelBuffer )
      v2[35] = NULL;
    if ( v2[36] == channelBuffer )
      v2[36] = NULL;
    if ( v2[37] == channelBuffer )
      v2[37] = NULL;
    if ( v2[38] == channelBuffer )
      v2[38] = NULL;
    if ( v2[39] == channelBuffer )
      v2[39] = NULL;
    if ( v2[40] == channelBuffer )
      v2[40] = NULL;
    if ( v2[41] == channelBuffer )
      v2[41] = NULL;
    if ( v2[42] == channelBuffer )
      v2[42] = NULL;
    if ( v2[43] == channelBuffer )
      v2[43] = NULL;
    if ( v2[44] == channelBuffer )
      v2[44] = NULL;
    if ( v2[45] == channelBuffer )
      v2[45] = NULL;
    v2 += 48;
  }
  DLog_Free(channelBuffer);
  DLog_LeaveCriticalSection(DLOG_CRITSECT_MEMORY);
}

/*
==============
DLog_GetAutoFills
==============
*/
__int64 DLog_GetAutoFills(const DLogAutoFill **autoFills)
{
  *autoFills = (const DLogAutoFill *)&s_dlogRegistry;
  return (unsigned int)s_dlogRegistry.autoFillCount;
}

/*
==============
DLog_GetEndpoints
==============
*/
__int64 DLog_GetEndpoints(const DLogEndpoint **endpoints)
{
  *endpoints = s_dlogRegistry.endpoints;
  return (unsigned int)s_dlogRegistry.endpointCount;
}

/*
==============
DLog_GetGluttonInfo
==============
*/
DLogGluttonInfo *DLog_GetGluttonInfo()
{
  if ( s_haveGluttonInfo )
    return &s_gluttonInfo;
  else
    return 0i64;
}

/*
==============
DLog_GetHooks
==============
*/
const DLogHooks *DLog_GetHooks()
{
  return s_dlogHooks;
}

/*
==============
DLog_GetSchema
==============
*/
const DLogSchema *DLog_GetSchema()
{
  return s_dlogHooks->GetSchema(s_dlogHooks);
}

/*
==============
DLog_GetSchemaVar
==============
*/
const char *DLog_GetSchemaVar(const DLogSchema *schema, const char *name)
{
  int v3; 
  DLogVar *vars; 
  __int64 varCount; 
  DLogVar *v6; 
  __int64 v7; 
  const char *v8; 
  int v9; 
  int v10; 

  if ( !schema )
    return 0i64;
  v3 = 0;
  if ( schema->varCount <= 0 )
    return 0i64;
  vars = schema->vars;
  varCount = schema->varCount;
  v6 = vars;
  v7 = 0i64;
  while ( 1 )
  {
    v8 = v6->name;
    do
    {
      v9 = (unsigned __int8)v8[name - v6->name];
      v10 = *(unsigned __int8 *)v8 - v9;
      if ( v10 )
        break;
      ++v8;
    }
    while ( v9 );
    if ( !v10 )
      break;
    ++v3;
    ++v7;
    ++v6;
    if ( v7 >= varCount )
      return 0i64;
  }
  return vars[v3].value;
}

/*
==============
DLog_GetSerializers
==============
*/
__int64 DLog_GetSerializers(const DLogSerializer **serializers)
{
  *serializers = s_dlogRegistry.serializers;
  return (unsigned int)s_dlogRegistry.serializerCount;
}

/*
==============
DLog_GetSessionId
==============
*/
unsigned __int64 DLog_GetSessionId(unsigned __int64 userId)
{
  int v1; 
  unsigned __int64 *i; 

  v1 = 0;
  for ( i = &s_dlog.sessions[0].userId; *i != userId; i += 4 )
  {
    if ( (unsigned int)++v1 >= 8 )
      return 0i64;
  }
  return s_dlog.sessions[v1].sessionId;
}

/*
==============
DLog_Init
==============
*/
void DLog_Init(void)
{
  memset_0(&s_dlog, 0, sizeof(s_dlog));
  DLog_SetMainThread();
  s_dlogInitialized = 1;
  DLog_InitTrulyRandom();
  Http_Init();
  Http_SetPrintFunction(Http_Print);
}

/*
==============
DLog_IsInitialized
==============
*/
_BOOL8 DLog_IsInitialized()
{
  return s_dlogInitialized;
}

/*
==============
DLog_IsSending
==============
*/
bool DLog_IsSending()
{
  return Http_GetRequestCount() > 0;
}

/*
==============
DLog_OnResume
==============
*/
void DLog_OnResume(void)
{
  char v0; 

  v0 = s_gluttonInfo.accessToken[0];
  if ( s_haveGluttonInfo )
    v0 = 0;
  s_gluttonInfo.accessToken[0] = v0;
}

/*
==============
DLog_PrintChannelBuffers
==============
*/
void DLog_PrintChannelBuffers(void)
{
  unsigned int v0; 
  unsigned int v1; 
  unsigned int v2; 
  int v3; 
  unsigned int v4; 
  DLog *v5; 
  DLogChannelBuffer *v6; 
  const char *v7; 
  __int64 line; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  v0 = 0;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  DLog_PrintInfo("Channel Buffer Report\n");
  v4 = 0;
  v5 = &s_dlog;
  do
  {
    v6 = v5->channelBuffers[0];
    if ( v5->channelBuffers[0] )
    {
      DLog_Assert(v6->channel != NULL, "channelBuffer->channel != nullptr", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_PrintChannelBuffers", 185);
      DLog_Assert(v6->eventInfo.event != NULL, "channelBuffer->eventInfo.event != nullptr", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_PrintChannelBuffers", 186);
      v7 = "false";
      if ( v6->inUse )
        v7 = "true";
      LODWORD(v11) = v6->context.bufferSize;
      LODWORD(v10) = v6->context.position;
      LODWORD(v9) = v6->eventCount;
      DLog_PrintInfo("\t%d: event=%s category=%s channel=%s events=%d bytes=%d/%d sending=%s\n", v4, v6->eventInfo.event->name, v6->eventInfo.categoryName, v6->channel->name, v9, v10, v11, v7);
      v1 += v6->eventCount;
      ++v0;
      v2 += v6->context.position;
      v3 += v6->context.bufferSize;
    }
    ++v4;
    v5 = (DLog *)((char *)v5 + 8);
  }
  while ( v4 < 0x60 );
  LODWORD(line) = v3;
  DLog_PrintInfo("buffers=%d events=%d bytes=%d reserved=%d\n", v0, v1, v2, line);
}

/*
==============
DLog_Record
==============
*/
char DLog_Record(unsigned __int64 userId, const char *eventName, void *bytes, int byteCount, DLogSerializationFormat serializationFormat, bool sampled)
{
  unsigned int v6; 
  const DLogSchema *v10; 
  const DLogEvent *Event; 
  SOCKET v13; 
  int v14; 
  SOCKET v15; 
  SOCKET DebugSocket; 
  SOCKET v17; 
  int v18; 
  __int64 v19; 
  const DLogChannelRef *v20; 
  const DLogChannel *channel; 
  DLogEnv Env; 
  const DLogChannel *v23; 
  unsigned int v24; 
  unsigned int envs; 
  DLogEnv v26; 
  DLogSample EventChannelSample; 
  const char *categoryName; 
  const char *name; 
  unsigned __int64 v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  char buf[4]; 
  DLogSerializationFormat v34; 
  __int64 v35; 
  DLogEventInfo eventInfo; 
  DLogContext context; 
  DLogContext source; 
  char dest[256]; 
  char buffer[1024]; 

  v6 = serializationFormat;
  *(_DWORD *)buf = byteCount;
  v34 = serializationFormat;
  v10 = s_dlogHooks->GetSchema(s_dlogHooks);
  if ( !v10 )
  {
    DLog_PrintError("Failed to record event '%s' schema is null\n", eventName);
    return 0;
  }
  Event = DLog_FindEvent(v10, eventName);
  if ( !Event )
  {
    DLog_PrintError("Failed to record event '%s' not found\n", eventName);
    return 0;
  }
  if ( !DLog_IsEventActive(eventName, 1) )
    return 0;
  DLog_EnterCriticalSection(DLOG_CRITSECT_BLACKBOX);
  DLog_EnterCriticalSection(DLOG_CRITSECT_RECORD);
  if ( DLog_GetDebugSocket() )
  {
    if ( serializationFormat )
    {
      DLog_CreateContext(&context, 0i64, buffer, 1024);
      DLog_sprintf<256>((char (*)[256])dest, "%s [binary]", eventName);
      DLog_BeginEvent(&context, dest);
      DLog_String(&context, "format", s_serializationFormatNames[serializationFormat], 0);
      DLog_UInt64(&context, "byte_count", *(int *)buf);
      DLog_EndEvent(&context);
      DLog_Assert(context.error == DLOG_ERROR_NONE, "context.error == DLOG_ERROR_NONE", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_Record", 822);
      if ( context.error == DLOG_ERROR_NONE )
      {
        DebugSocket = DLog_GetDebugSocket();
        send(DebugSocket, (const char *)&context, 4, 0);
        v17 = DLog_GetDebugSocket();
        send(v17, (const char *)context.buffer, context.position, 0);
        DLog_Assert(context.buffer[context.position - 1] == 5, "( (uint8_t *)context.buffer )[context.position - 1] == DLOG_CMD_EVENT_END", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_Record", 827);
      }
    }
    else
    {
      v13 = DLog_GetDebugSocket();
      send(v13, buf, 4, 0);
      v14 = *(_DWORD *)buf;
      v15 = DLog_GetDebugSocket();
      send(v15, (const char *)bytes, v14, 0);
      DLog_Assert(*((_BYTE *)bytes + *(_DWORD *)buf - 1) == 5, "( (uint8_t *)bytes )[byteCount - 1] == DLOG_CMD_EVENT_END", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_Record", 806);
    }
  }
  DLog_CreateContext(&source, userId, bytes, *(int *)buf);
  DLog_strcpy(source.eventName, 0x40ui64, eventName);
  v18 = 0;
  source.position = source.bufferSize;
  if ( Event->channelRefCount > 0 )
  {
    v19 = 0i64;
    v35 = 0i64;
    do
    {
      v20 = (DLogChannelRef *)((char *)Event->channelRefs + v19);
      DLog_Assert(v20->channel != NULL, "channelRef->channel", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_Record", 839);
      channel = v20->channel;
      DLog_Assert(v20->channel != NULL, "channel", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_IsChannelPlatformActive", 119);
      if ( (channel->platforms & 4) != 0 )
      {
        Env = DLog_GetEnv();
        v23 = v20->channel;
        v24 = Env;
        DLog_Assert(v20->channel != NULL, "channel", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_IsChannelEnvActive", 126);
        envs = v23->envs;
        if ( _bittest((const int *)&envs, v24) )
        {
          v26 = DLog_GetEnv();
          EventChannelSample = DLog_GetEventChannelSample(eventName, v20->channel->name, v26, v20->sample[v26]);
          if ( EventChannelSample == DLOG_SAMPLE_ALL || EventChannelSample == DLOG_SAMPLE_GROUP && sampled )
          {
            categoryName = v20->categoryName;
            name = Event->name;
            if ( categoryName && *categoryName )
              name = v20->categoryName;
            if ( DLog_IsChannelActive(v20->channel->name, 1) && DLog_IsEndpointActive(v20->channel->endpoint->name, 1) )
            {
              eventInfo.event = Event;
              eventInfo.guid = 0i64;
              eventInfo.channelBuffer = NULL;
              *(_QWORD *)&eventInfo.eventCount = 0i64;
              eventInfo.channelRef = v20;
              eventInfo.categoryName = name;
              eventInfo.compressionType = 1;
              eventInfo.serializationFormat = v6;
              v30 = DLog_Microseconds();
              v31 = DLog_Serialize(v20->channel->serializers, v20->channel->serializerCount, &eventInfo, &source, NULL, v20->channel);
              v32 = DLog_Microseconds() - v30;
              if ( (v31 & 0x80000000) == 0i64 && DLog_IsMetricsActive() )
              {
                DLog_sprintf<256>((char (*)[256])dest, "serialize: %s -> %s", Event->name, v20->channel->name);
                DLog_AddMetric(dest, 1ui64, v31, v32);
              }
              v6 = v34;
            }
          }
        }
      }
      ++v18;
      v19 = v35 + 24;
      v35 += 24i64;
    }
    while ( v18 < Event->channelRefCount );
  }
  DLog_LeaveCriticalSection(DLOG_CRITSECT_RECORD);
  DLog_LeaveCriticalSection(DLOG_CRITSECT_BLACKBOX);
  DLog_IsMainThread();
  return 1;
}

/*
==============
DLog_RecordBinary
==============
*/
char DLog_RecordBinary(unsigned __int64 userId, const char *name, void *bytes, int byteCount, DLogSerializationFormat serializationFormat)
{
  const DLogSchema *v9; 
  const DLogEvent *Event; 
  bool sampled; 

  if ( !DLog_IsActive() )
    return 0;
  v9 = s_dlogHooks->GetSchema(s_dlogHooks);
  if ( !v9 )
  {
    DLog_PrintError("Failed to record event '%s' schema is null\n", name);
    return 0;
  }
  Event = DLog_FindEvent(v9, name);
  if ( Event )
  {
    sampled = DLog_IsEventSampled(userId, Event);
    return DLog_Record(userId, name, bytes, byteCount, serializationFormat, sampled);
  }
  else
  {
    DLog_PrintError("Failed to record event '%s' not found\n", name);
    return 0;
  }
}

/*
==============
DLog_RecordContext
==============
*/
bool DLog_RecordContext(DLogContext *context)
{
  char v2; 
  bool sampled; 
  char *eventName; 
  DLogContext eventContext; 
  DLogReadContext contexta; 

  if ( !DLog_IsActive() || !DLog_FinalizeContext(context) || context->error )
    return 0;
  DLog_CreateReadContext(&contexta, context->userId, context->buffer, context->position);
  v2 = 0;
  sampled = 0;
  while ( DLog_GetNextEvent(&contexta, &eventContext, &sampled) )
  {
    eventName = NULL;
    if ( DLog_PeekEventName(&eventContext, (const char **)&eventName) )
    {
      DLog_Assert(eventName != NULL, "eventName", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_RecordContext", 765);
      v2 |= DLog_Record(eventContext.userId, eventName, eventContext.buffer, eventContext.position, DLOG_SERIALIZATION_FORMAT_UNKNOWN, sampled);
    }
  }
  return v2;
}

/*
==============
DLog_RegisterAutoFill
==============
*/
void DLog_RegisterAutoFill(const char *name, void (*autoFill)(DLogContext *, const DLogEvent *))
{
  int v4; 
  DLogRegistry *v5; 
  const char *v6; 
  int v7; 
  int v8; 

  if ( name && autoFill )
  {
    v4 = 0;
    if ( s_dlogRegistry.autoFillCount <= 0 )
    {
LABEL_10:
      DLog_Assert((unsigned __int64)s_dlogRegistry.autoFillCount < 8, "s_dlogRegistry.autoFillCount < ARRAY_COUNT( s_dlogRegistry.autoFills )", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_RegisterAutoFill", 644);
      if ( (unsigned __int64)s_dlogRegistry.autoFillCount < 8 )
      {
        s_dlogRegistry.autoFills[s_dlogRegistry.autoFillCount].name = name;
        s_dlogRegistry.autoFills[s_dlogRegistry.autoFillCount++].autoFill = autoFill;
      }
    }
    else
    {
      v5 = &s_dlogRegistry;
      while ( 1 )
      {
        v6 = v5->autoFills[0].name;
        do
        {
          v7 = (unsigned __int8)v6[name - v5->autoFills[0].name];
          v8 = *(unsigned __int8 *)v6 - v7;
          if ( v8 )
            break;
          ++v6;
        }
        while ( v7 );
        if ( !v8 )
          break;
        ++v4;
        v5 = (DLogRegistry *)((char *)v5 + 16);
        if ( v4 >= s_dlogRegistry.autoFillCount )
          goto LABEL_10;
      }
      s_dlogRegistry.autoFills[v4].autoFill = autoFill;
    }
  }
}

/*
==============
DLog_RegisterEndpoint
==============
*/
void DLog_RegisterEndpoint(const char *name, bool (*endpoint)(unsigned __int64, const void *, int, DLogEventInfo *), bool requireSchema)
{
  int v6; 
  const char **p_name; 
  const char *v8; 
  int v9; 
  int v10; 

  if ( name && endpoint )
  {
    v6 = 0;
    if ( s_dlogRegistry.endpointCount <= 0 )
    {
LABEL_10:
      DLog_Assert((unsigned __int64)s_dlogRegistry.endpointCount < 0x10, "s_dlogRegistry.endpointCount < ARRAY_COUNT( s_dlogRegistry.endpoints )", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_RegisterEndpoint", 697);
      if ( (unsigned __int64)s_dlogRegistry.endpointCount < 0x10 )
      {
        s_dlogRegistry.endpoints[s_dlogRegistry.endpointCount].name = name;
        s_dlogRegistry.endpoints[s_dlogRegistry.endpointCount].endpoint = endpoint;
        s_dlogRegistry.endpoints[s_dlogRegistry.endpointCount++].requireSchema = requireSchema;
      }
    }
    else
    {
      p_name = &s_dlogRegistry.endpoints[0].name;
      while ( 1 )
      {
        v8 = *p_name;
        do
        {
          v9 = (unsigned __int8)v8[name - *p_name];
          v10 = *(unsigned __int8 *)v8 - v9;
          if ( v10 )
            break;
          ++v8;
        }
        while ( v9 );
        if ( !v10 )
          break;
        ++v6;
        p_name += 3;
        if ( v6 >= s_dlogRegistry.endpointCount )
          goto LABEL_10;
      }
      s_dlogRegistry.endpoints[v6].endpoint = endpoint;
    }
  }
}

/*
==============
DLog_RegisterSerializer
==============
*/
void DLog_RegisterSerializer(const char *name, int (*serializer)(DLogReadContext *, DLogEventInfo *, void *, int), bool requireSchema)
{
  int v6; 
  const char **p_name; 
  const char *v8; 
  int v9; 
  int v10; 

  if ( name && serializer )
  {
    v6 = 0;
    if ( s_dlogRegistry.serializerCount <= 0 )
    {
LABEL_10:
      DLog_Assert((unsigned __int64)s_dlogRegistry.serializerCount < 0x10, "s_dlogRegistry.serializerCount < ARRAY_COUNT( s_dlogRegistry.serializers )", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_RegisterSerializer", 670);
      if ( (unsigned __int64)s_dlogRegistry.serializerCount < 0x10 )
      {
        s_dlogRegistry.serializers[s_dlogRegistry.serializerCount].name = name;
        s_dlogRegistry.serializers[s_dlogRegistry.serializerCount].serialize = serializer;
        s_dlogRegistry.serializers[s_dlogRegistry.serializerCount++].requireSchema = requireSchema;
      }
    }
    else
    {
      p_name = &s_dlogRegistry.serializers[0].name;
      while ( 1 )
      {
        v8 = *p_name;
        do
        {
          v9 = (unsigned __int8)v8[name - *p_name];
          v10 = *(unsigned __int8 *)v8 - v9;
          if ( v10 )
            break;
          ++v8;
        }
        while ( v9 );
        if ( !v10 )
          break;
        ++v6;
        p_name += 3;
        if ( v6 >= s_dlogRegistry.serializerCount )
          goto LABEL_10;
      }
      s_dlogRegistry.serializers[v6].serialize = serializer;
    }
  }
}

/*
==============
DLog_Send
==============
*/
void DLog_Send(bool flush)
{
  bool v1; 
  DLog *v2; 
  unsigned int i; 
  DLogChannelBuffer *v4; 
  const DLogChannel *channel; 
  const DLogEndpoint *endpoint; 
  unsigned __int64 v7; 
  const char ***p_eventInfo; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v12; 
  __int64 v14; 
  const char **p_name; 
  const char **v22; 
  int ContextSize; 
  unsigned __int64 v26; 
  bool (__fastcall *v27)(unsigned __int64, const void *, int, DLogEventInfo *); 
  unsigned __int64 v28; 
  unsigned int v29; 
  bool v30; 
  unsigned __int64 v31; 
  int v32; 
  const DLogEndpoint *v34; 
  DLogContext context; 
  char v36[256]; 

  v1 = flush;
  if ( DLog_IsActive() && !s_dlog.processingSend )
  {
    s_dlog.processingSend = 1;
    DLog_EnterCriticalSection(DLOG_CRITSECT_RECORD);
    DLog_EnterCriticalSection(DLOG_CRITSECT_MEMORY);
    v2 = &s_dlog;
    for ( i = 0; i < 0x60; ++i )
    {
      v4 = v2->channelBuffers[0];
      if ( v2->channelBuffers[0] && !v4->inUse )
      {
        if ( !DLog_GetContextSize(&v4->context) )
          goto LABEL_19;
        if ( (v1 || v4->sendTimeMilliseconds <= 0 || DLog_Milliseconds() >= v4->sendTimeMilliseconds) && DLog_IsChannelReady(v4->channel) )
        {
          channel = v4->channel;
          endpoint = channel->endpoint;
          v34 = endpoint;
          if ( endpoint )
          {
            if ( channel->postSerializerCount <= 0 )
            {
              p_eventInfo = (const char ***)&v4->eventInfo;
            }
            else
            {
              DLog_CreateContext(&context, v4->context.userId, v4->context.buffer, v4->context.bufferSize);
              v7 = DLog_Microseconds();
              p_eventInfo = (const char ***)&v4->eventInfo;
              v4->eventInfo.eventCount = v4->eventCount;
              v9 = v7;
              DLog_Serialize(v4->channel->postSerializers, v4->channel->postSerializerCount, &v4->eventInfo, &v4->context, &context, NULL);
              v10 = DLog_Microseconds();
              _RCX = &v4->context;
              v12 = v10 - v9;
              _RAX = &context;
              v14 = 2i64;
              do
              {
                _RCX = (DLogContext *)((char *)_RCX + 128);
                __asm
                {
                  vmovups ymm0, ymmword ptr [rax]
                  vmovups xmm1, xmmword ptr [rax+70h]
                }
                _RAX = (DLogContext *)((char *)_RAX + 128);
                __asm
                {
                  vmovups ymmword ptr [rcx-80h], ymm0
                  vmovups ymm0, ymmword ptr [rax-60h]
                  vmovups ymmword ptr [rcx-60h], ymm0
                  vmovups ymm0, ymmword ptr [rax-40h]
                  vmovups ymmword ptr [rcx-40h], ymm0
                  vmovups xmm0, xmmword ptr [rax-20h]
                  vmovups xmmword ptr [rcx-20h], xmm0
                  vmovups xmmword ptr [rcx-10h], xmm1
                }
                --v14;
              }
              while ( v14 );
              __asm { vmovups ymm0, ymmword ptr [rax] }
              p_name = &v4->channel->name;
              v22 = *p_eventInfo;
              __asm
              {
                vmovups ymmword ptr [rcx], ymm0
                vmovups ymm0, ymmword ptr [rax+20h]
                vmovups ymmword ptr [rcx+20h], ymm0
                vmovups ymm0, ymmword ptr [rax+40h]
                vmovups ymmword ptr [rcx+40h], ymm0
              }
              DLog_sprintf<256>((char (*)[256])v36, "post-serialize: %s -> %s", *v22, *p_name);
              ContextSize = DLog_GetContextSize(&v4->context);
              DLog_AddMetric(v36, v4->eventCount, ContextSize, v12);
              endpoint = v34;
            }
            if ( !DLog_GetContextSize(&v4->context) )
              goto LABEL_19;
            v4->inUse = 1;
            v4->eventInfo.channelBuffer = v4;
            v26 = DLog_Microseconds();
            v27 = endpoint->endpoint;
            v28 = v26;
            v29 = DLog_GetContextSize(&v4->context);
            v30 = v27(0i64, v4->context.buffer, v29, (DLogEventInfo *)p_eventInfo);
            v31 = DLog_Microseconds() - v28;
            DLog_sprintf<256>((char (*)[256])v36, "endpoint: %s -> %s", **p_eventInfo, v34->name);
            v32 = DLog_GetContextSize(&v4->context);
            DLog_AddMetric(v36, v4->eventCount, v32, v31);
            if ( v30 )
LABEL_19:
              DLog_FreeChannelBuffer(v4);
          }
        }
      }
      v1 = flush;
      v2 = (DLog *)((char *)v2 + 8);
    }
    s_dbg_lastSendCall = DLog_Milliseconds();
    DLog_LeaveCriticalSection(DLOG_CRITSECT_MEMORY);
    DLog_LeaveCriticalSection(DLOG_CRITSECT_RECORD);
    s_dlog.processingSend = 0;
  }
}

/*
==============
DLog_SendThread
==============
*/
void __noreturn DLog_SendThread(void *__formal)
{
  unsigned int v1; 
  DLog *v2; 
  DLogChannelBuffer *v3; 
  const DLogChannel *channel; 
  const DLogEndpoint *endpoint; 
  unsigned __int64 v6; 
  const char ***p_eventInfo; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v11; 
  __int64 v13; 
  const char **p_name; 
  const char **v21; 
  int ContextSize; 
  unsigned __int64 v25; 
  bool (__fastcall *v26)(unsigned __int64, const void *, int, DLogEventInfo *); 
  unsigned __int64 v27; 
  unsigned int v28; 
  bool v29; 
  unsigned __int64 v30; 
  int v31; 
  const DLogEndpoint *v32; 
  DLogContext context; 
  char v34[256]; 

  while ( 1 )
  {
    do
    {
      do
        Sleep(0x64u);
      while ( !DLog_IsActive() );
    }
    while ( s_dlog.processingSend );
    s_dlog.processingSend = 1;
    DLog_EnterCriticalSection(DLOG_CRITSECT_RECORD);
    DLog_EnterCriticalSection(DLOG_CRITSECT_MEMORY);
    v1 = 0;
    v2 = &s_dlog;
    do
    {
      v3 = v2->channelBuffers[0];
      if ( v2->channelBuffers[0] && !v3->inUse )
      {
        if ( !DLog_GetContextSize(&v3->context) )
          goto LABEL_18;
        if ( (v3->sendTimeMilliseconds <= 0 || DLog_Milliseconds() >= v3->sendTimeMilliseconds) && DLog_IsChannelReady(v3->channel) )
        {
          channel = v3->channel;
          endpoint = channel->endpoint;
          v32 = endpoint;
          if ( endpoint )
          {
            if ( channel->postSerializerCount <= 0 )
            {
              p_eventInfo = (const char ***)&v3->eventInfo;
            }
            else
            {
              DLog_CreateContext(&context, v3->context.userId, v3->context.buffer, v3->context.bufferSize);
              v6 = DLog_Microseconds();
              p_eventInfo = (const char ***)&v3->eventInfo;
              v3->eventInfo.eventCount = v3->eventCount;
              v8 = v6;
              DLog_Serialize(v3->channel->postSerializers, v3->channel->postSerializerCount, &v3->eventInfo, &v3->context, &context, NULL);
              v9 = DLog_Microseconds();
              _RCX = &v3->context;
              v11 = v9 - v8;
              _RAX = &context;
              v13 = 2i64;
              do
              {
                _RCX = (DLogContext *)((char *)_RCX + 128);
                __asm
                {
                  vmovups ymm0, ymmword ptr [rax]
                  vmovups xmm1, xmmword ptr [rax+70h]
                }
                _RAX = (DLogContext *)((char *)_RAX + 128);
                __asm
                {
                  vmovups ymmword ptr [rcx-80h], ymm0
                  vmovups ymm0, ymmword ptr [rax-60h]
                  vmovups ymmword ptr [rcx-60h], ymm0
                  vmovups ymm0, ymmword ptr [rax-40h]
                  vmovups ymmword ptr [rcx-40h], ymm0
                  vmovups xmm0, xmmword ptr [rax-20h]
                  vmovups xmmword ptr [rcx-20h], xmm0
                  vmovups xmmword ptr [rcx-10h], xmm1
                }
                --v13;
              }
              while ( v13 );
              __asm { vmovups ymm0, ymmword ptr [rax] }
              p_name = &v3->channel->name;
              v21 = *p_eventInfo;
              __asm
              {
                vmovups ymmword ptr [rcx], ymm0
                vmovups ymm0, ymmword ptr [rax+20h]
                vmovups ymmword ptr [rcx+20h], ymm0
                vmovups ymm0, ymmword ptr [rax+40h]
                vmovups ymmword ptr [rcx+40h], ymm0
              }
              DLog_sprintf<256>((char (*)[256])v34, "post-serialize: %s -> %s", *v21, *p_name);
              ContextSize = DLog_GetContextSize(&v3->context);
              DLog_AddMetric(v34, v3->eventCount, ContextSize, v11);
              endpoint = v32;
            }
            if ( !DLog_GetContextSize(&v3->context) )
              goto LABEL_18;
            v3->inUse = 1;
            v3->eventInfo.channelBuffer = v3;
            v25 = DLog_Microseconds();
            v26 = endpoint->endpoint;
            v27 = v25;
            v28 = DLog_GetContextSize(&v3->context);
            v29 = v26(0i64, v3->context.buffer, v28, (DLogEventInfo *)p_eventInfo);
            v30 = DLog_Microseconds() - v27;
            DLog_sprintf<256>((char (*)[256])v34, "endpoint: %s -> %s", **p_eventInfo, v32->name);
            v31 = DLog_GetContextSize(&v3->context);
            DLog_AddMetric(v34, v3->eventCount, v31, v30);
            if ( v29 )
LABEL_18:
              DLog_FreeChannelBuffer(v3);
          }
        }
      }
      ++v1;
      v2 = (DLog *)((char *)v2 + 8);
    }
    while ( v1 < 0x60 );
    s_dbg_lastSendCall = DLog_Milliseconds();
    DLog_LeaveCriticalSection(DLOG_CRITSECT_MEMORY);
    DLog_LeaveCriticalSection(DLOG_CRITSECT_RECORD);
    s_dlog.processingSend = 0;
  }
}

/*
==============
DLog_Serialize
==============
*/
__int64 DLog_Serialize(const DLogSerializer **serializers, int serializerCount, DLogEventInfo *eventInfo, DLogContext *source, DLogContext *dest, const DLogChannel *channel)
{
  const DLogChannel *v6; 
  int v7; 
  DLogContext *v8; 
  unsigned __int8 *buffer; 
  int position; 
  __int64 v12; 
  __int64 v13; 
  const DLogSerializer *v14; 
  int v15; 
  const char *categoryName; 
  unsigned int v19; 
  DLog *v20; 
  const DLogChannel *v22; 
  const char *name; 
  signed __int64 v24; 
  int v25; 
  int v26; 
  const char *v27; 
  int v28; 
  int v29; 
  size_t v30; 
  int v31; 
  bool v32; 
  int ChannelBufferTimeMilliseconds; 
  DLogReadContext context; 

  v6 = channel;
  v7 = 0;
  v8 = source;
  buffer = source->buffer;
  position = source->position;
  v12 = serializerCount;
  if ( serializerCount <= 0 )
  {
LABEL_9:
    if ( dest )
    {
      if ( DLog_GetContextRemainingSize(dest) < position )
      {
        DLog_ErrorContextOutOfMemory(dest, position);
        return 0xFFFFFFFFi64;
      }
      memcpy_0(&dest->buffer[dest->position], buffer, position);
      dest->position += position;
    }
    else
    {
      _R12 = eventInfo;
      categoryName = eventInfo->categoryName;
      DLog_EnterCriticalSection(DLOG_CRITSECT_MEMORY);
      v19 = 0;
      v20 = &s_dlog;
      while ( 1 )
      {
        _RDI = v20->channelBuffers[0];
        if ( v20->channelBuffers[0] && !_RDI->inUse )
        {
          v22 = _RDI->channel;
          name = v22->name;
          v24 = v6->name - v22->name;
          do
          {
            v25 = (unsigned __int8)name[v24];
            v26 = *(unsigned __int8 *)name - v25;
            if ( v26 )
              break;
            ++name;
          }
          while ( v25 );
          if ( !v26 )
          {
            v27 = _RDI->name;
            do
            {
              v28 = (unsigned __int8)v27[categoryName - _RDI->name];
              v29 = *(unsigned __int8 *)v27 - v28;
              if ( v29 )
                break;
              ++v27;
            }
            while ( v28 );
            if ( !v29 )
            {
              v30 = position;
              if ( position + (__int64)DLog_GetContextSize(&_RDI->context) < (unsigned __int64)_RDI->channel->bufferFlushSize )
                goto LABEL_32;
              v31 = DLog_Milliseconds();
              v32 = !_RDI->fullWarningDisplayed;
              _RDI->sendTimeMilliseconds = v31;
              if ( v32 )
                _RDI->fullWarningDisplayed = 1;
            }
          }
        }
        ++v19;
        v20 = (DLog *)((char *)v20 + 8);
        if ( v19 >= 0x60 )
          break;
        v6 = channel;
      }
      _RDI = NULL;
      v30 = position;
LABEL_32:
      DLog_LeaveCriticalSection(DLOG_CRITSECT_MEMORY);
      if ( !_RDI )
      {
        _RDI = DLog_AllocateChannelBuffer(eventInfo->categoryName, channel);
        if ( !_RDI )
        {
          DLog_ErrorOutOfMemory(source);
          return 0xFFFFFFFFi64;
        }
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [r12]
        vmovups ymmword ptr [rdi+178h], ymm0
        vmovups xmm1, xmmword ptr [r12+20h]
        vmovups xmmword ptr [rdi+198h], xmm1
        vmovsd  xmm0, qword ptr [r12+30h]
      }
      ++_RDI->eventCount;
      v32 = _RDI->sendTimeMilliseconds == 0;
      __asm { vmovsd  qword ptr [rdi+1A8h], xmm0 }
      if ( v32 )
      {
        ChannelBufferTimeMilliseconds = DLog_GetChannelBufferTimeMilliseconds(channel->name, channel->bufferTimeMilliseconds);
        _RDI->sendTimeMilliseconds = ChannelBufferTimeMilliseconds + DLog_Milliseconds();
      }
      memcpy_0(&_RDI->context.buffer[_RDI->context.position], buffer, v30);
      _RDI->context.position += position;
    }
    return (unsigned int)position;
  }
  else
  {
    v13 = 0i64;
    while ( 1 )
    {
      v14 = serializers[v13];
      if ( !v14->serialize )
        break;
      DLog_CreateReadContext(&context, v8->userId, buffer, position);
      v15 = v14->serialize(&context, eventInfo, s_workBuffer[(__int64)v7], 0x40000);
      if ( !v15 )
        return 0xFFFFFFFFi64;
      if ( v15 != -1 )
      {
        position = v15;
        buffer = s_workBuffer[(__int64)v7];
        v7 = (v7 + 1) % 2;
      }
      v8 = source;
      if ( ++v13 >= v12 )
      {
        v6 = channel;
        goto LABEL_9;
      }
    }
    DLog_Error(v8, NULL, "Tried to serialize using unresolved serializer", "%s\n", v14->name);
    DLog_Assert(v14->serialize != NULL, "serializer->serialize", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_Serialize", 287);
    return 0xFFFFFFFFi64;
  }
}

/*
==============
DLog_SetGluttonInfo
==============
*/
void DLog_SetGluttonInfo(const DLogGluttonInfo *info)
{
  if ( info )
  {
    memcpy_0(&s_gluttonInfo, info, sizeof(s_gluttonInfo));
    s_haveGluttonInfo = 1;
  }
  else
  {
    s_haveGluttonInfo = 0;
  }
}

/*
==============
DLog_SetHooks
==============
*/
void DLog_SetHooks(const DLogHooks *hooks)
{
  s_dlogHooks = hooks;
  Json_SetAssertHandler(DLog_AssertMsg);
}

/*
==============
DLog_Shutdown
==============
*/
void DLog_Shutdown(void)
{
  if ( s_dlogInitialized )
  {
    DLog_Send(1);
    DLog_ShutdownTrulyRandom();
    s_dlogInitialized = 0;
  }
}

/*
==============
DLog_UpdateSession
==============
*/
char DLog_UpdateSession(unsigned __int64 userId, int timeout)
{
  DLogSession *v2; 
  unsigned __int64 *p_lastUpdateFrame; 
  unsigned int v6; 
  unsigned __int64 v7; 

  v2 = NULL;
  p_lastUpdateFrame = &s_dlog.sessions[0].lastUpdateFrame;
  v6 = 0;
  v7 = -1i64;
  while ( *(p_lastUpdateFrame - 2) != userId )
  {
    if ( *p_lastUpdateFrame < v7 )
    {
      v7 = *p_lastUpdateFrame;
      v2 = &s_dlog.sessions[v6];
    }
    ++v6;
    p_lastUpdateFrame += 4;
    if ( v6 >= 8 )
      goto LABEL_8;
  }
  v2 = &s_dlog.sessions[v6];
LABEL_8:
  DLog_Assert(v2 != NULL, "session != nullptr", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog.cpp", "DLog_UpdateSession", 433);
  if ( !v2 )
    return 0;
  v2->lastUpdateFrame = s_dlog.frameIndex;
  if ( v2->userId == userId && (timeout <= 0 || (int)(v2->timestamp - DLog_GetUTC()) <= timeout) )
    return 0;
  v2->userId = userId;
  v2->timestamp = DLog_GetUTC();
  DLog_GetTrulyRandom(&v2->sessionId, 8ui64);
  DLog_PrintInfo("Session %zx created for userId %zx\n", v2->sessionId, v2->userId);
  return 1;
}

