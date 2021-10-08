/*
==============
DLog_RegisterBuiltinSerializers
==============
*/

void DLog_RegisterBuiltinSerializers(void)
{
  ?DLog_RegisterBuiltinSerializers@@YAXXZ();
}

/*
==============
DLog_Serialize_CmdStream
==============
*/

int __fastcall DLog_Serialize_CmdStream(DLogReadContext *context, DLogEventInfo *eventInfo, void *buffer, int bufferSize)
{
  return ?DLog_Serialize_CmdStream@@YAHPEAUDLogReadContext@@PEAUDLogEventInfo@@PEAXH@Z(context, eventInfo, buffer, bufferSize);
}

/*
==============
DLog_InfluxDBResetDictionaries
==============
*/

void DLog_InfluxDBResetDictionaries(void)
{
  ?DLog_InfluxDBResetDictionaries@@YAXXZ();
}

/*
==============
DLog_Serialize_ZLib
==============
*/
__int64 DLog_Serialize_ZLib(DLogReadContext *context, DLogEventInfo *eventInfo, void *buffer, int bufferSize)
{
  unsigned int total_out; 
  z_stream_s stream; 

  total_out = 0;
  memset_0(&stream, 0, sizeof(stream));
  j_Zip_InitThreadMemory(&stream, s_dlog_zip_buffer, 393216);
  if ( !j_deflateInit_(&stream, -1, "1.2.8", 88) )
  {
    stream.next_in = context->buffer;
    stream.avail_in = context->bufferSize;
    stream.data_type = 1;
    stream.next_out = (unsigned __int8 *)buffer;
    stream.avail_out = bufferSize;
    if ( j_deflate(&stream, 4) == 1 )
      total_out = stream.total_out;
  }
  j_deflateEnd(&stream);
  j_Zip_ShutdownThreadMemory(&stream);
  eventInfo->compressionType = 2;
  return total_out;
}

/*
==============
DLog_Serialize_Json
==============
*/
__int64 DLog_Serialize_Json(DLogReadContext *context, DLogEventInfo *eventInfo, void *buffer, int bufferSize)
{
  JsonSerializer s; 

  JsonSerializer::JsonSerializer(&s, NULL, (char *)buffer, bufferSize);
  JsonSerializer::BeginObject(&s);
  DLog_Serialize_JsonValue(context, &s);
  JsonSerializer::EndObject(&s);
  *((_BYTE *)buffer + JsonSerializer::Size(&s)) = 10;
  *((_BYTE *)buffer + JsonSerializer::Size(&s) + 1) = 0;
  return (unsigned int)JsonSerializer::Size(&s) + 1;
}

/*
==============
DLog_Serialize_Protobuf
==============
*/
unsigned __int64 DLog_Serialize_Protobuf(DLogReadContext *context, DLogEventInfo *eventInfo, void *buffer, int bufferSize)
{
  DLogEventInfo *v4; 
  DLogReadContext *v5; 
  const DLogSchema *Schema; 
  int rowCount; 
  int v8; 
  int arrayCount; 
  DLogType type; 
  int v11; 
  __int64 v16; 
  unsigned __int64 protoGuid; 
  DLogCmd v20; 
  DLogCmd cmd; 
  ProtobufSerializer s; 

  v4 = eventInfo;
  v5 = context;
  ProtobufSerializer::ProtobufSerializer(&s, buffer, bufferSize);
  DLog_GetNextCmd(v5, &cmd);
  DLog_Assert(cmd.type == DLOG_CMD_EVENT, "cmd.type == DLOG_CMD_EVENT", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_Protobuf", 278);
  if ( cmd.type != DLOG_CMD_EVENT )
    return 0i64;
  Schema = DLog_GetSchema();
  if ( !Schema )
    return 0i64;
  rowCount = Schema->events[cmd.event.index].rowCount;
  if ( !DLog_GetNextCmdType(v5, DLOG_CMD_EVENT_END) )
  {
    do
    {
      DLog_GetNextCmd(v5, &v20);
      switch ( v20.type )
      {
        case DLOG_CMD_ROW_ARRAY:
          while ( !DLog_GetNextCmdType(v5, DLOG_CMD_ROW_ARRAY_END) )
            DLog_Serialize_ProtobufValue(v5, &s, 0);
          break;
        case DLOG_CMD_ROW:
          ProtobufSerializer::BeginMessage(&s, v20.event.index + 1);
          while ( !DLog_GetNextCmdType(v5, DLOG_CMD_ROW_END) )
            DLog_Serialize_ProtobufValue(v5, &s, 0);
          ProtobufSerializer::EndMessage(&s);
          break;
        case DLOG_CMD_COLUMN:
          v8 = 1;
          arrayCount = v20.column.arrayCount;
          type = v20.column.type;
          v11 = v20.event.index + rowCount + 1;
          if ( v20.column.arrayCount >= 0 )
          {
            v8 = v20.column.arrayCount;
            if ( (unsigned __int8)(v20.column.type - 15) > 1u )
            {
              ProtobufSerializer::BeginPacked(&s, v11);
              arrayCount = v20.column.arrayCount;
            }
          }
          _RBX = 0i64;
          if ( v8 > 0 )
          {
            _R8 = v20.column.u8;
            while ( 2 )
            {
              switch ( type )
              {
                case DLOG_TYPE_NULL:
                  goto LABEL_36;
                case DLOG_TYPE_BOOL:
                  ProtobufSerializer::Bool(&s, v11, _R8[_RBX] != 0);
                  goto LABEL_35;
                case DLOG_TYPE_FLOAT32:
                  __asm { vmovss  xmm2, dword ptr [r8+rbx*4]; jumptable 000000014377B9BD case 2 }
                  ProtobufSerializer::Float32(&s, v11, *(float *)&_XMM2);
                  goto LABEL_35;
                case DLOG_TYPE_FLOAT64:
                  __asm { vmovsd  xmm2, qword ptr [r8+rbx*8]; jumptable 000000014377B9BD case 3 }
                  ProtobufSerializer::Float64(&s, v11, *(long double *)&_XMM2);
                  goto LABEL_35;
                case DLOG_TYPE_INT8:
                  ProtobufSerializer::Int32(&s, v11, (char)_R8[_RBX]);
                  goto LABEL_35;
                case DLOG_TYPE_INT16:
                  ProtobufSerializer::Int32(&s, v11, *(__int16 *)&_R8[2 * _RBX]);
                  goto LABEL_35;
                case DLOG_TYPE_INT32:
                  ProtobufSerializer::Int32(&s, v11, *(_DWORD *)&_R8[4 * _RBX]);
                  goto LABEL_35;
                case DLOG_TYPE_INT64:
                  ProtobufSerializer::Int64(&s, v11, *(_QWORD *)&_R8[8 * _RBX]);
                  goto LABEL_35;
                case DLOG_TYPE_UINT8:
                  ProtobufSerializer::UInt32(&s, v11, _R8[_RBX]);
                  goto LABEL_35;
                case DLOG_TYPE_UINT16:
                  ProtobufSerializer::UInt32(&s, v11, *(unsigned __int16 *)&_R8[2 * _RBX]);
                  goto LABEL_35;
                case DLOG_TYPE_UINT32:
                  ProtobufSerializer::UInt32(&s, v11, *(_DWORD *)&_R8[4 * _RBX]);
                  goto LABEL_35;
                case DLOG_TYPE_UINT64:
                  ProtobufSerializer::UInt64(&s, v11, *(_QWORD *)&_R8[8 * _RBX]);
                  goto LABEL_35;
                case DLOG_TYPE_STRING:
                  ProtobufSerializer::String(&s, v11, (const char *)_R8);
                  v16 = -1i64;
                  while ( v20.column.u8[++v16] != 0 )
                    ;
                  _R8 = &v20.column.u8[v16 + 1];
                  v20.column.u8 = _R8;
                  goto LABEL_36;
                case DLOG_TYPE_BYTES:
                  ProtobufSerializer::Bytes(&s, v11, _R8 + 4, *(unsigned int *)_R8);
                  goto LABEL_35;
                default:
                  DLog_Assert(0, "false", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_ProtobufValue", 252);
LABEL_35:
                  _R8 = v20.column.u8;
LABEL_36:
                  if ( ++_RBX < v8 )
                    continue;
                  arrayCount = v20.column.arrayCount;
                  v5 = context;
                  break;
              }
              break;
            }
          }
          if ( arrayCount >= 0 && (unsigned __int8)(v20.column.type - 15) > 1u )
            ProtobufSerializer::EndPacked(&s);
          break;
      }
      ProtobufSerializer::Size(&s);
    }
    while ( !DLog_GetNextCmdType(v5, DLOG_CMD_EVENT_END) );
    v4 = eventInfo;
  }
  protoGuid = v4->event->protoGuid;
  v4->guid = protoGuid;
  DLog_Assert(protoGuid != 0, "eventInfo->guid != 0", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_Protobuf", 297);
  v4->serializationFormat = 2;
  return ProtobufSerializer::Size(&s);
}

/*
==============
DLog_Serialize_MsgPack
==============
*/
unsigned __int64 DLog_Serialize_MsgPack(DLogReadContext *context, DLogEventInfo *eventInfo, void *buffer, int bufferSize)
{
  MsgPackSerializer s; 

  MsgPackSerializer::MsgPackSerializer(&s, buffer, bufferSize);
  MsgPackSerializer::BeginMap(&s);
  DLog_Serialize_MsgPackValue(context, &s);
  MsgPackSerializer::EndMap(&s);
  eventInfo->serializationFormat = 4;
  return MsgPackSerializer::Size(&s);
}

/*
==============
DLog_Serialize_Size
==============
*/
__int64 DLog_Serialize_Size(DLogReadContext *context, DLogEventInfo *eventInfo, void *buffer, int bufferSize)
{
  __int64 v5; 

  v5 = context->bufferSize;
  if ( bufferSize < (unsigned __int64)(v5 + 4) )
    return 0i64;
  *(_DWORD *)buffer = v5;
  memcpy_0((char *)buffer + 4, context->buffer, context->bufferSize);
  return (unsigned int)(context->bufferSize + 4);
}

/*
==============
DLog_Serialize_MessageEnvelope
==============
*/
unsigned __int64 DLog_Serialize_MessageEnvelope(DLogReadContext *context, DLogEventInfo *eventInfo, void *buffer, int bufferSize)
{
  unsigned __int64 userId; 
  unsigned __int64 v9; 
  const DLogGluttonInfo *GluttonInfo; 
  const DLogGluttonInfo *v11; 
  unsigned __int64 UnoIdFromUserId; 
  unsigned __int64 FirstPartyUserIdFromUserId; 
  __int64 ticks_0; 
  __int64 perf_frequency_0; 
  __int64 perf_counter_0; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  bool v24; 
  __int64 firstPartyAccountType; 
  int v26; 
  unsigned __int64 v28; 
  char v29; 
  DLogEnv Env; 
  DLogSample EventChannelSample; 
  DLogSampleType v32; 
  DLogSampleType EventSampleType; 
  unsigned __int64 result; 
  unsigned __int64 v41; 
  ProtobufSerializer v44; 
  __m256i v45; 
  int v46; 
  int v47; 
  __int64 value; 
  __int16 v49; 
  int v50; 
  __int16 v51; 
  char dest[33]; 

  DLog_sprintf<33>((char (*)[33])dest, "%016llx", eventInfo->guid);
  userId = context->userId;
  v9 = userId;
  if ( !userId )
  {
    GluttonInfo = DLog_GetGluttonInfo();
    v9 = 0i64;
    if ( GluttonInfo )
    {
      userId = GluttonInfo->userId;
      v9 = userId;
    }
  }
  __asm { vmovaps [rsp+240h+var_50], xmm6 }
  if ( !v9 )
    goto LABEL_50;
  v11 = DLog_GetGluttonInfo();
  if ( !v11 )
    goto LABEL_50;
  UnoIdFromUserId = DLog_GetUnoIdFromUserId(userId);
  if ( !UnoIdFromUserId )
    UnoIdFromUserId = v11->unoId;
  FirstPartyUserIdFromUserId = DLog_GetFirstPartyUserIdFromUserId(userId);
  if ( !FirstPartyUserIdFromUserId )
    FirstPartyUserIdFromUserId = v11->firstPartyUserId;
  ticks_0 = Xtime_get_ticks_0();
  perf_frequency_0 = Query_perf_frequency_0();
  perf_counter_0 = Query_perf_counter_0();
  v17 = (1000000000 * (perf_counter_0 % perf_frequency_0) / perf_frequency_0 + 1000000000 * (perf_counter_0 / perf_frequency_0)) / 1000;
  v18 = qword_1565EFF98;
  v19 = v17 + 1000000 * (ticks_0 / 10000000 - v17 / 1000000);
  v41 = v19;
  if ( !qword_1565EFF98 )
  {
    v20 = Xtime_get_ticks_0();
    v21 = Query_perf_frequency_0();
    v22 = Query_perf_counter_0();
    v23 = (1000000000 * (v22 % v21) / v21 + 1000000000 * (v22 / v21)) / 1000;
    qword_1565EFF98 = v23 + 1000000 * (v20 / 10000000 - v23 / 1000000);
    DLog_GetTrulyRandom(&dword_1565EFFA8, 8ui64);
    v18 = qword_1565EFF98;
    v19 = v41;
  }
  value = v18 + 1;
  qword_1565EFF98 = v18 + 1;
  v50 = dword_1565EFFA8;
  v51 = word_1565EFFAC;
  LOBYTE(userId) = userId | 7;
  HIBYTE(value) = ((unsigned __int64)(v18 + 1) >> 56) & 0xF0 | 1;
  v49 = userId;
  ProtobufSerializer::ProtobufSerializer(&v44, buffer, bufferSize);
  v24 = ProtobufSerializer::BeginMessage(&v44, 1ui64) && ProtobufSerializer::Bytes(&v44, 2ui64, &value, 0x10ui64) && ProtobufSerializer::UInt64(&v44, 3ui64, v19) && ProtobufSerializer::UInt64(&v44, 8ui64, v11->titleId) && ProtobufSerializer::BeginMessage(&v44, 0xBui64);
  firstPartyAccountType = v11->firstPartyAccountType;
  v26 = 0;
  if ( (unsigned int)firstPartyAccountType <= 9 )
  {
    __asm
    {
      vmovdqu ymm0, cs:__ymm@00000000000000090000001c000000120000001d000000060000001300000000
      vmovdqu [rbp+140h+var_C0], ymm0
    }
    v46 = 25;
    v47 = 4;
    v26 = v45.m256i_i32[firstPartyAccountType];
  }
  if ( !v24 )
    goto LABEL_37;
  if ( !ProtobufSerializer::UInt64(&v44, 3ui64, (unsigned __int8)v11->platform) )
    goto LABEL_37;
  if ( !ProtobufSerializer::UInt64(&v44, 4ui64, v26) )
    goto LABEL_37;
  if ( !ProtobufSerializer::UInt64(&v44, 5ui64, FirstPartyUserIdFromUserId) )
    goto LABEL_37;
  if ( !ProtobufSerializer::UInt64(&v44, 6ui64, UnoIdFromUserId) )
    goto LABEL_37;
  if ( !ProtobufSerializer::EndMessage(&v44) )
    goto LABEL_37;
  if ( !ProtobufSerializer::BeginMessage(&v44, 0xCui64) )
    goto LABEL_37;
  v28 = -1i64;
  do
    ++v28;
  while ( dest[v28] );
  if ( ProtobufSerializer::Bytes(&v44, 1ui64, dest, v28) && ProtobufSerializer::EndMessage(&v44) && ProtobufSerializer::String(&v44, 0xDui64, eventInfo->categoryName) && ProtobufSerializer::UInt64(&v44, 0xEui64, eventInfo->serializationFormat) && ProtobufSerializer::UInt64(&v44, 0xFui64, eventInfo->compressionType) && ProtobufSerializer::BeginMessage(&v44, 0x10ui64) )
    v29 = 1;
  else
LABEL_37:
    v29 = 0;
  DLog_Assert(eventInfo->event != NULL, "eventInfo->event", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_MessageEnvelope", 665);
  DLog_Assert(eventInfo->channelRef != NULL, "eventInfo->channelRef", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_MessageEnvelope", 666);
  Env = DLog_GetEnv();
  EventChannelSample = DLog_GetEventChannelSample(eventInfo->event->name, eventInfo->channelRef->channel->name, Env, eventInfo->channelRef->sample[Env]);
  if ( EventChannelSample == DLOG_SAMPLE_GROUP )
  {
    EventSampleType = DLog_GetEventSampleType(eventInfo->event->name, eventInfo->event->sampleGroup.type);
    _RCX = eventInfo->event;
    v32 = EventSampleType;
    __asm { vmovss  xmm1, dword ptr [rcx+5Ch]; sampleRate }
    *(double *)&_XMM0 = DLog_GetEventSampleRate(eventInfo->event->name, *(float *)&_XMM1);
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    v32 = DLOG_SAMPLE_TYPE_NONE;
    if ( EventChannelSample == DLOG_SAMPLE_ALL )
      __asm { vmovss  xmm6, cs:__real@3f800000 }
    else
      __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  if ( !v29 )
    goto LABEL_50;
  if ( !ProtobufSerializer::UInt64(&v44, 1ui64, (unsigned __int8)v32) )
    goto LABEL_50;
  __asm { vmovaps xmm2, xmm6; value }
  if ( !ProtobufSerializer::Float32(&v44, 2ui64, *(float *)&_XMM2) )
    goto LABEL_50;
  if ( ProtobufSerializer::EndMessage(&v44) && ProtobufSerializer::Bytes(&v44, 0x64ui64, context->buffer, context->bufferSize) && ProtobufSerializer::EndMessage(&v44) )
    result = ProtobufSerializer::Size(&v44);
  else
LABEL_50:
    result = 0i64;
  __asm { vmovaps xmm6, [rsp+240h+var_50] }
  return result;
}

/*
==============
DLog_Serialize_CmdStream
==============
*/
int DLog_Serialize_CmdStream(DLogReadContext *context, DLogEventInfo *eventInfo, void *buffer, int bufferSize)
{
  return DLog_Serialize_CmdStreamValue(context, 0, (char *)buffer, (const char *)buffer + bufferSize);
}

/*
==============
DLog_Serialize_InfluxDBPacked
==============
*/
unsigned __int64 DLog_Serialize_InfluxDBPacked(DLogReadContext *context, DLogEventInfo *info, void *buffer, int bufferSize)
{
  unsigned __int64 v4; 
  unsigned __int64 result; 
  unsigned __int64 timestamp; 
  int v9; 
  char v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  unsigned int v18; 
  DLogCmd cmd; 
  MsgPackSerializer v20; 
  char v21[2][8]; 
  char dest[385]; 

  v4 = bufferSize;
  DLog_GetNextCmd(context, &cmd);
  if ( cmd.type != DLOG_CMD_EVENT )
  {
    DLog_ErrorFatal("DLOG_CMD_INFLUXDB_EVENT expected\n");
    return 0i64;
  }
  timestamp = cmd.event.timestamp;
  MsgPackSerializer::MsgPackSerializer(&v20, buffer, v4);
  MsgPackSerializer::BeginArray(&v20);
  v9 = DLogDictionary_Add(&s_influxDictionary, cmd.event.name);
  MsgPackSerializer::Int(&v20, v9);
  MsgPackSerializer::BeginMap(&v20);
  v10 = 0;
  if ( DLog_GetNextCmdType(context, DLOG_CMD_EVENT_END) )
  {
LABEL_32:
    MsgPackSerializer::EndMap(&v20);
    MsgPackSerializer::UInt(&v20, timestamp);
    MsgPackSerializer::EndArray(&v20);
    return MsgPackSerializer::Size(&v20);
  }
  while ( 1 )
  {
    DLog_GetNextCmd(context, &cmd);
    if ( cmd.type == DLOG_CMD_COLUMN )
      break;
    if ( cmd.type != DLOG_CMD_BREAK )
    {
      DLog_Assert(0, "0 && \"Unsupported cmd type\"", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_InfluxDBPacked", 1057);
      return 0i64;
    }
    if ( !v10 )
    {
      v10 = 1;
      MsgPackSerializer::EndMap(&v20);
      MsgPackSerializer::BeginMap(&v20);
    }
LABEL_31:
    if ( DLog_GetNextCmdType(context, DLOG_CMD_EVENT_END) )
      goto LABEL_32;
  }
  if ( !v10 )
  {
    switch ( cmd.column.type )
    {
      case DLOG_TYPE_INT8:
        v11 = (unsigned int)(char)*cmd.column.u8;
        goto LABEL_11;
      case DLOG_TYPE_INT16:
        v11 = (unsigned int)(__int16)*cmd.column.u16;
        goto LABEL_11;
      case DLOG_TYPE_INT32:
        v11 = *cmd.column.u32;
LABEL_11:
        DLog_sprintf<385>((char (*)[385])dest, "%d", v11);
        break;
      case DLOG_TYPE_INT64:
        DLog_sprintf<385>((char (*)[385])dest, "%zi", *cmd.column.u64);
        break;
      case DLOG_TYPE_UINT8:
        DLog_sprintf<385>((char (*)[385])dest, "%u", *cmd.column.u8);
        break;
      case DLOG_TYPE_UINT16:
        DLog_sprintf<385>((char (*)[385])dest, "%u", *cmd.column.u16);
        break;
      case DLOG_TYPE_UINT32:
        DLog_sprintf<385>((char (*)[385])dest, "%u", *cmd.column.u32);
        break;
      case DLOG_TYPE_UINT64:
        DLog_sprintf<385>((char (*)[385])dest, "%zu", *cmd.column.u64);
        break;
      case DLOG_TYPE_STRING:
        DLog_strcpy(dest, 0x181ui64, cmd.column.i8);
        break;
      default:
        DLog_ErrorFatal("tag %s cmd.column->type %d could not be coerced to a string\n", cmd.event.name, (unsigned __int8)cmd.column.type);
        break;
    }
    v12 = DLogDictionary_Add(&s_influxDictionary, cmd.event.name);
    v13 = DLogDictionary_Add(&s_influxDictionary, dest);
    MsgPackSerializer::Int(&v20, v12, v13);
    goto LABEL_31;
  }
  v14 = DLogDictionary_Add(&s_influxDictionary, cmd.event.name);
  v15 = v14;
  switch ( cmd.column.type )
  {
    case DLOG_TYPE_BOOL:
      MsgPackSerializer::Bool(&v20, v14, *cmd.column.u8);
      goto LABEL_31;
    case DLOG_TYPE_FLOAT32:
      _RAX = cmd.column.u8;
      __asm { vmovss  xmm2, dword ptr [rax]; value }
      MsgPackSerializer::Float32(&v20, v15, *(float *)&_XMM2);
      goto LABEL_31;
    case DLOG_TYPE_INT32:
      MsgPackSerializer::Int(&v20, v14, (int)*cmd.column.u32);
      goto LABEL_31;
    case DLOG_TYPE_UINT8:
      MsgPackSerializer::UInt(&v20, v14, *cmd.column.u8);
      goto LABEL_31;
    case DLOG_TYPE_UINT16:
      MsgPackSerializer::UInt(&v20, v14, *cmd.column.u16);
      goto LABEL_31;
    case DLOG_TYPE_UINT32:
      MsgPackSerializer::UInt(&v20, v14, *cmd.column.u32);
      goto LABEL_31;
    case DLOG_TYPE_UINT64:
      MsgPackSerializer::UInt(&v20, v14, *cmd.column.u64);
      goto LABEL_31;
    case DLOG_TYPE_STRING:
      v18 = DLogDictionary_Add(&s_influxDictionary, cmd.column.i8);
      DLog_sprintf<8>(v21, "%d", v18);
      MsgPackSerializer::String(&v20, v15, v21[0]);
      goto LABEL_31;
    default:
      DLog_Assert(0, "0 && \"Unsupported field type\"", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_InfluxDBPacked", 1051);
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
DLog_Serialize_InfluxDBPackedPost
==============
*/
__int64 DLog_Serialize_InfluxDBPackedPost(DLogReadContext *context, DLogEventInfo *info, void *buffer, int bufferSize)
{
  __int64 v4; 
  char *v8; 
  __int64 i; 
  char *v10; 
  int eventCount; 
  _BYTE *v12; 
  signed __int64 v13; 
  int v15; 
  MsgPackSerializer v16; 

  v4 = bufferSize;
  DLog_Assert(context != NULL, "context != nullptr", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_InfluxDBPackedPost", 1086);
  DLog_Assert(info != NULL, "info != nullptr", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_InfluxDBPackedPost", 1087);
  DLog_Assert(buffer != NULL, "buffer != nullptr", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_InfluxDBPackedPost", 1088);
  DLog_Assert((int)v4 > 0, "bufferSize > 0", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_InfluxDBPackedPost", 1089);
  *(_BYTE *)buffer = -110;
  v8 = (char *)buffer + v4;
  MsgPackSerializer::MsgPackSerializer(&v16, (char *)buffer + 1, v4 - 1);
  MsgPackSerializer::BeginMap(&v16);
  for ( i = 0i64; i < s_influxDictionary.stringCount; ++i )
    MsgPackSerializer::String(&v16, i, s_influxDictionary.strings[i]);
  MsgPackSerializer::EndMap(&v16);
  v10 = (char *)buffer + MsgPackSerializer::Size(&v16) + 1;
  eventCount = info->eventCount;
  v12 = v10 + 1;
  if ( eventCount >= 16 )
  {
    if ( eventCount >= 0x10000 )
    {
      *v10 = -35;
      *v12 = HIBYTE(info->eventCount);
      v10[2] = BYTE2(info->eventCount);
      v10[3] = BYTE1(info->eventCount);
      v10[4] = info->eventCount;
      v12 = v10 + 5;
    }
    else
    {
      *v10 = -36;
      *v12 = BYTE1(info->eventCount);
      v10[2] = info->eventCount;
      v12 = v10 + 3;
    }
  }
  else
  {
    *v10 = eventCount | 0x90;
  }
  v13 = context->bufferSize;
  if ( v13 < v8 - v12 )
  {
    memcpy_0(v12, context->buffer, v13);
    v15 = (_DWORD)v12 + context->bufferSize;
    info->serializationFormat = 6;
    return (unsigned int)(v15 - (_DWORD)buffer);
  }
  else
  {
    DLog_Assert(0, "0 && \"insufficient space to store influx payload\"", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_InfluxDBPackedPost", 1128);
    return 0i64;
  }
}

/*
==============
DLogDictionary_Add
==============
*/
__int64 DLogDictionary_Add(DLogDictionary *dict, const char *const str)
{
  __int16 v4; 
  const char *i; 
  __int64 v6; 
  int v7; 
  bool v8; 
  const char *v9; 
  const char *v10; 
  int v11; 
  int v12; 
  __int64 v14; 
  int v15; 
  __int64 memorySize; 

  v4 = 5381;
  for ( i = str; i; v4 = *i++ + 33 * v4 )
  {
    if ( !*i )
      break;
  }
  v6 = v4 & 0xFFF;
  DLog_EnterCriticalSection(DLOG_CRITSECT_INFLUXDB);
  v7 = dict->hashIndices[(unsigned int)v6];
  if ( v7 == -1 )
  {
LABEL_14:
    DLog_Assert(dict->stringCount < 0x554u, "dict->stringCount < ARRAY_COUNT( dict->strings )", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLogDictionary_Add", 901);
    if ( dict->stringCount < 0x554u )
    {
      v14 = -1i64;
      do
        ++v14;
      while ( str[v14] );
      v15 = v14 + 1;
      DLog_Assert(v15 < (unsigned __int64)(0x20000i64 - dict->memorySize), "length < sizeof( dict->memory ) - dict->memorySize", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLogDictionary_Add", 911);
      memorySize = dict->memorySize;
      if ( v15 < (unsigned __int64)(0x20000 - memorySize) )
      {
        for ( ; dict->hashIndices[v6] != -1; v6 = ((_WORD)v6 + 1) & 0xFFF )
          ;
        if ( (unsigned int)(memorySize + v15) < 0x20000 )
        {
          dict->hashIndices[v6] = dict->stringCount;
          memcpy_0(&dict->memory[dict->memorySize], str, v15);
          dict->strings[dict->stringCount] = &dict->memory[dict->memorySize];
          dict->memorySize += v15;
          ++dict->stringCount;
          DLog_LeaveCriticalSection(DLOG_CRITSECT_INFLUXDB);
          return (unsigned int)dict->hashIndices[v6];
        }
        else
        {
          DLog_Assert(0, "0 && \"insufficient memory to store string\"", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLogDictionary_Add", 927);
          return 0xFFFFFFFFi64;
        }
      }
      else
      {
        DLog_LeaveCriticalSection(DLOG_CRITSECT_INFLUXDB);
        return 0xFFFFFFFFi64;
      }
    }
    else
    {
      DLog_Assert(0, "0 && \"Reached the max number of entries\\n\"", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLogDictionary_Add", 904);
      DLog_LeaveCriticalSection(DLOG_CRITSECT_INFLUXDB);
      return 0xFFFFFFFFi64;
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = v7 >= 0 && (unsigned int)v7 < 0x554;
      DLog_Assert(v8, "0 <= index && index < ARRAY_COUNT( dict->strings )", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLogDictionary_Add", 888);
      v9 = dict->strings[v7];
      v10 = (const char *)(str - v9);
      do
      {
        v11 = (unsigned __int8)v10[(_QWORD)v9];
        v12 = *(unsigned __int8 *)v9 - v11;
        if ( v12 )
          break;
        ++v9;
      }
      while ( v11 );
      if ( !v12 )
        break;
      v6 = ((_WORD)v6 + 1) & 0xFFF;
      v7 = dict->hashIndices[v6];
      if ( v7 == -1 )
        goto LABEL_14;
    }
    DLog_LeaveCriticalSection(DLOG_CRITSECT_INFLUXDB);
    return (unsigned int)v7;
  }
}

/*
==============
DLog_InfluxDBResetDictionaries
==============
*/
void DLog_InfluxDBResetDictionaries(void)
{
  DLog_Send(1);
  DLog_EnterCriticalSection(DLOG_CRITSECT_INFLUXDB);
  memset_0(s_influxDictionary.strings, 0, 0x22AA8ui64);
  memset_0(&s_influxDictionary, -1, 0x4000ui64);
  DLog_LeaveCriticalSection(DLOG_CRITSECT_INFLUXDB);
}

/*
==============
DLog_RegisterBuiltinSerializers
==============
*/
void DLog_RegisterBuiltinSerializers(void)
{
  unsigned int v0; 
  int (__fastcall **p_serialize)(DLogReadContext *, DLogEventInfo *, void *, int); 

  v0 = 0;
  p_serialize = &s_serializers_0[0].serialize;
  do
  {
    DLog_RegisterSerializer((const char *)*(p_serialize - 1), *p_serialize, *((_BYTE *)p_serialize - 16));
    ++v0;
    p_serialize += 3;
  }
  while ( v0 < 9 );
}

/*
==============
DLog_Serialize_CmdStreamValue
==============
*/
__int64 DLog_Serialize_CmdStreamValue(DLogReadContext *context, int indent, char *output, const char *end)
{
  char *v10; 
  char *i; 
  char *v12; 
  char *j; 
  char *v15; 
  char *k; 
  char *v17; 
  char *v18; 
  DLogType type; 
  int arrayCount; 
  char *v21; 
  __int64 v22; 
  const char *v24; 
  __int64 v32; 
  unsigned __int64 v33; 
  __int64 v34; 
  char *v36; 
  DLogCmd cmd; 
  char *v38; 
  __int64 v39[18]; 
  _BYTE v40[64]; 
  char v41; 

  __asm
  {
    vmovups ymm0, ymmword ptr cs:asc_14471DD60; "                                       "...
    vmovups ymm1, ymmword ptr cs:asc_14471DD60+20h; "                                "
  }
  v41 = asc_14471DD60[64];
  __asm
  {
    vmovups [rbp+0A0h+var_A0], ymm0
    vmovups [rbp+0A0h+var_80], ymm1
  }
  v38 = output;
  v10 = output;
  DLog_GetNextCmd(context, &cmd);
  switch ( cmd.type )
  {
    case DLOG_CMD_EVENT:
      for ( i = &output[DLog_sprintf(v10, end - v10, "%*.sEVENT %s\n", indent, v40, cmd.event.name)]; !DLog_GetNextCmdType(context, DLOG_CMD_EVENT_END); i += DLog_Serialize_CmdStreamValue(context, indent + 4, i, end) )
        ;
      v12 = &i[DLog_sprintf(i, end - i, "%*.sEVENT_END\n", indent, v40)];
      *v12 = 0;
      return (unsigned int)((_DWORD)v12 - (_DWORD)v10);
    case DLOG_CMD_ROW_ARRAY:
      for ( j = &output[DLog_sprintf(output, end - output, "%*.sARRAY %s\n", indent, v40, cmd.event.name)]; !DLog_GetNextCmdType(context, DLOG_CMD_ROW_ARRAY_END); j += DLog_Serialize_CmdStreamValue(context, indent + 4, j, end) )
        ;
      v15 = &j[DLog_sprintf(j, end - j, "%*.sArrayEnd\n", indent, v40)];
      *v15 = 0;
      return (unsigned int)((_DWORD)v15 - (_DWORD)v10);
    case DLOG_CMD_ROW:
      for ( k = &output[DLog_sprintf(output, end - output, "%*.sROW %s\n", indent, v40, cmd.event.name)]; !DLog_GetNextCmdType(context, DLOG_CMD_ROW_END); k += DLog_Serialize_CmdStreamValue(context, indent + 4, k, end) )
        ;
      v17 = &k[DLog_sprintf(k, end - k, "%*.sROW_END\n", indent, v40)];
      *v17 = 0;
      return (unsigned int)((_DWORD)v17 - (_DWORD)v10);
    case DLOG_CMD_BREAK:
      v18 = &output[DLog_sprintf(output, end - output, "%*.sBREAK\n", indent, v40)];
      *v18 = 0;
      return (unsigned int)((_DWORD)v18 - (_DWORD)v10);
    case DLOG_CMD_COLUMN:
      type = cmd.column.type;
      arrayCount = 1;
      if ( cmd.column.arrayCount >= 0 )
        arrayCount = cmd.column.arrayCount;
      v39[0] = (__int64)"INVALID";
      v39[1] = (__int64)"OBJECT";
      v39[2] = (__int64)"ARRAY";
      v39[3] = (__int64)"NULL";
      v39[4] = (__int64)"BOOL";
      v39[5] = (__int64)"FLOAT32";
      v39[6] = (__int64)"FLOAT64";
      v39[7] = (__int64)"INT8";
      v39[8] = (__int64)"INT16";
      v39[9] = (__int64)"INT32";
      v39[10] = (__int64)"INT64";
      v39[11] = (__int64)"UINT8";
      v39[12] = (__int64)"UINT16";
      v39[13] = (__int64)"UINT32";
      v39[14] = (__int64)"UINT64";
      v39[15] = (__int64)"STRING";
      v39[16] = (__int64)"BYTES";
      v21 = &output[DLog_sprintf(output, end - output, "%*.s%s %s ", (unsigned int)indent, v40, v39[(unsigned __int8)cmd.column.type], cmd.event.name)];
      v22 = arrayCount;
      if ( arrayCount > 0 )
      {
        _RBX = 0i64;
        do
        {
          switch ( type )
          {
            case DLOG_TYPE_NULL:
              v21 += DLog_sprintf(v21, end - v21, "NULL ");
              break;
            case DLOG_TYPE_BOOL:
              v24 = "false";
              if ( cmd.column.u8[_RBX] )
                v24 = "true";
              v21 += DLog_sprintf(v21, end - v21, "%s ", v24);
              break;
            case DLOG_TYPE_FLOAT32:
              _RAX = cmd.column.u8;
              __asm
              {
                vmovss  xmm3, dword ptr [rax+rbx*4]
                vcvtss2sd xmm3, xmm3, xmm3
                vmovq   r9, xmm3
              }
              v21 += DLog_sprintf(v21, end - v21, "%f ", *(double *)&_XMM3);
              break;
            case DLOG_TYPE_FLOAT64:
              _RAX = cmd.column.u8;
              __asm
              {
                vmovsd  xmm3, qword ptr [rax+rbx*8]
                vmovq   r9, xmm3
              }
              v21 += DLog_sprintf(v21, end - v21, "%f ", *(double *)&_XMM3);
              break;
            case DLOG_TYPE_INT8:
              v32 = (unsigned int)(char)cmd.column.u8[_RBX];
              goto LABEL_28;
            case DLOG_TYPE_INT16:
              v32 = (unsigned int)*(__int16 *)&cmd.column.u8[2 * _RBX];
              goto LABEL_28;
            case DLOG_TYPE_INT32:
              v32 = *(unsigned int *)&cmd.column.u8[4 * _RBX];
LABEL_28:
              v33 = DLog_sprintf(v21, end - v21, "%d ", v32);
              goto LABEL_29;
            case DLOG_TYPE_INT64:
              v21 += DLog_sprintf(v21, end - v21, "%lli ", *(_QWORD *)&cmd.column.u8[8 * _RBX]);
              break;
            case DLOG_TYPE_UINT8:
              v33 = DLog_sprintf(v21, end - v21, "%u ", cmd.column.u8[_RBX]);
              goto LABEL_29;
            case DLOG_TYPE_UINT16:
              v33 = DLog_sprintf(v21, end - v21, "%u ", *(unsigned __int16 *)&cmd.column.u8[2 * _RBX]);
              goto LABEL_29;
            case DLOG_TYPE_UINT32:
              v33 = DLog_sprintf(v21, end - v21, "%u ", *(unsigned int *)&cmd.column.u8[4 * _RBX]);
              goto LABEL_29;
            case DLOG_TYPE_UINT64:
              v21 += DLog_sprintf(v21, end - v21, "%llu ", *(_QWORD *)&cmd.column.u8[8 * _RBX]);
              break;
            case DLOG_TYPE_STRING:
              v21 += DLog_sprintf(v21, end - v21, "%s ", cmd.column.i8);
              v34 = -1i64;
              while ( cmd.column.u8[++v34] != 0 )
                ;
              cmd.column.u8 += v34 + 1;
              break;
            case DLOG_TYPE_BYTES:
              v33 = DLog_sprintf(v21, end - v21, "[%u] ", *cmd.column.u32);
LABEL_29:
              v21 += v33;
              break;
            default:
              DLog_Assert(0, "false", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_CmdStreamValue", 831);
              break;
          }
          ++_RBX;
        }
        while ( _RBX < v22 );
        LODWORD(v10) = (_DWORD)v38;
      }
      v36 = &v21[DLog_sprintf(v21, end - v21, "\n")];
      *v36 = 0;
      return (unsigned int)((_DWORD)v36 - (_DWORD)v10);
    default:
      DLog_Assert(1, "\"Unhandled cmd.type\"", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_CmdStreamValue", 840);
      return 0i64;
  }
}

/*
==============
DLog_Serialize_JsonValue
==============
*/
char DLog_Serialize_JsonValue(DLogReadContext *context, JsonSerializer *s)
{
  int arrayCount; 
  int v7; 
  const char *name; 
  DLogType type; 
  __int64 v10; 
  int v11; 
  __int64 v17; 
  DLogCmd cmd; 

  DLog_GetNextCmd(context, &cmd);
  switch ( cmd.type )
  {
    case DLOG_CMD_EVENT:
      JsonSerializer::BeginObject(s, cmd.event.name);
      while ( !DLog_GetNextCmdType(context, DLOG_CMD_EVENT_END) )
        DLog_Serialize_JsonValue(context, s);
LABEL_15:
      JsonSerializer::EndObject(s);
      return 1;
    case DLOG_CMD_ROW_ARRAY:
      JsonSerializer::BeginArray(s, cmd.event.name);
      while ( !DLog_GetNextCmdType(context, DLOG_CMD_ROW_ARRAY_END) )
        DLog_Serialize_JsonValue(context, s);
      goto LABEL_8;
    case DLOG_CMD_ROW:
      if ( cmd.row.arrayIndex < 0 )
        JsonSerializer::BeginObject(s, cmd.event.name);
      else
        JsonSerializer::BeginObject(s);
      while ( !DLog_GetNextCmdType(context, DLOG_CMD_ROW_END) )
        DLog_Serialize_JsonValue(context, s);
      goto LABEL_15;
    case DLOG_CMD_BREAK:
      return 1;
    case DLOG_CMD_COLUMN:
      arrayCount = cmd.column.arrayCount;
      _RBX = 0i64;
      v7 = 1;
      name = cmd.event.name;
      type = cmd.column.type;
      if ( cmd.column.arrayCount >= 0 )
      {
        JsonSerializer::BeginArray(s, cmd.event.name);
        arrayCount = cmd.column.arrayCount;
        name = NULL;
        v7 = cmd.column.arrayCount;
      }
      v10 = v7;
      if ( v7 > 0 )
      {
        v11 = (unsigned __int8)type - 3;
        do
        {
          switch ( v11 )
          {
            case 0:
              JsonSerializer::Null(s, name);
              break;
            case 1:
              JsonSerializer::Bool(s, name, cmd.column.u8[_RBX] != 0);
              break;
            case 2:
              _RAX = cmd.column.u8;
              __asm
              {
                vmovss  xmm2, dword ptr [rax+rbx*4]
                vcvtss2sd xmm2, xmm2, xmm2; value
              }
              JsonSerializer::Float(s, name, *(long double *)&_XMM2);
              break;
            case 3:
              _RAX = cmd.column.u8;
              __asm { vmovsd  xmm2, qword ptr [rax+rbx*8]; value }
              JsonSerializer::Float(s, name, *(long double *)&_XMM2);
              break;
            case 4:
              JsonSerializer::Int(s, name, (char)cmd.column.u8[_RBX]);
              break;
            case 5:
              JsonSerializer::Int(s, name, *(__int16 *)&cmd.column.u8[2 * _RBX]);
              break;
            case 6:
              JsonSerializer::Int(s, name, *(int *)&cmd.column.u8[4 * _RBX]);
              break;
            case 7:
              JsonSerializer::Int(s, name, *(_QWORD *)&cmd.column.u8[8 * _RBX]);
              break;
            case 8:
              JsonSerializer::UInt(s, name, cmd.column.u8[_RBX]);
              break;
            case 9:
              JsonSerializer::UInt(s, name, *(unsigned __int16 *)&cmd.column.u8[2 * _RBX]);
              break;
            case 10:
              JsonSerializer::UInt(s, name, *(unsigned int *)&cmd.column.u8[4 * _RBX]);
              break;
            case 11:
              JsonSerializer::UInt(s, name, *(_QWORD *)&cmd.column.u8[8 * _RBX]);
              break;
            case 12:
              JsonSerializer::String(s, name, cmd.column.i8);
              v17 = -1i64;
              while ( cmd.column.u8[++v17] != 0 )
                ;
              cmd.column.u8 += v17 + 1;
              break;
            case 13:
              JsonSerializer::Bytes(s, name, cmd.column.u8 + 4, *cmd.column.u32);
              break;
            default:
              DLog_Assert(0, "false", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_JsonValue", 129);
              break;
          }
          ++_RBX;
        }
        while ( _RBX < v10 );
        arrayCount = cmd.column.arrayCount;
      }
      if ( arrayCount < 0 )
        return 1;
LABEL_8:
      JsonSerializer::EndArray(s);
      return 1;
  }
  DLog_Assert(0, "0 && \"Unhandled cmd.type\"", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_JsonValue", 141);
  return 0;
}

/*
==============
DLog_Serialize_MsgPackValue
==============
*/
char DLog_Serialize_MsgPackValue(DLogReadContext *context, MsgPackSerializer *s)
{
  int arrayCount; 
  int v7; 
  const char *name; 
  DLogType type; 
  __int64 v10; 
  int v11; 
  __int64 v16; 
  DLogCmd cmd; 

  DLog_GetNextCmd(context, &cmd);
  switch ( cmd.type )
  {
    case DLOG_CMD_EVENT:
      MsgPackSerializer::BeginMap(s, cmd.event.name);
      while ( !DLog_GetNextCmdType(context, DLOG_CMD_EVENT_END) )
        DLog_Serialize_MsgPackValue(context, s);
LABEL_15:
      MsgPackSerializer::EndMap(s);
      return 1;
    case DLOG_CMD_ROW_ARRAY:
      MsgPackSerializer::BeginArray(s, cmd.event.name);
      while ( !DLog_GetNextCmdType(context, DLOG_CMD_ROW_ARRAY_END) )
        DLog_Serialize_MsgPackValue(context, s);
      goto LABEL_8;
    case DLOG_CMD_ROW:
      if ( cmd.row.arrayIndex < 0 )
        MsgPackSerializer::BeginMap(s, cmd.event.name);
      else
        MsgPackSerializer::BeginMap(s);
      while ( !DLog_GetNextCmdType(context, DLOG_CMD_ROW_END) )
        DLog_Serialize_MsgPackValue(context, s);
      goto LABEL_15;
    case DLOG_CMD_BREAK:
      return 1;
    case DLOG_CMD_COLUMN:
      arrayCount = cmd.column.arrayCount;
      _RBX = 0i64;
      v7 = 1;
      name = cmd.event.name;
      type = cmd.column.type;
      if ( cmd.column.arrayCount >= 0 )
      {
        MsgPackSerializer::BeginArray(s, cmd.event.name);
        arrayCount = cmd.column.arrayCount;
        name = NULL;
        v7 = cmd.column.arrayCount;
      }
      v10 = v7;
      if ( v7 > 0 )
      {
        v11 = (unsigned __int8)type - 3;
        do
        {
          switch ( v11 )
          {
            case 0:
              MsgPackSerializer::Null(s, name);
              break;
            case 1:
              MsgPackSerializer::Bool(s, name, cmd.column.u8[_RBX] != 0);
              break;
            case 2:
              _RAX = cmd.column.u8;
              __asm { vmovss  xmm2, dword ptr [rax+rbx*4]; value }
              MsgPackSerializer::Float32(s, name, *(float *)&_XMM2);
              break;
            case 3:
              _RAX = cmd.column.u8;
              __asm { vmovsd  xmm2, qword ptr [rax+rbx*8]; value }
              MsgPackSerializer::Float64(s, name, *(long double *)&_XMM2);
              break;
            case 4:
              MsgPackSerializer::Int(s, name, (char)cmd.column.u8[_RBX]);
              break;
            case 5:
              MsgPackSerializer::Int(s, name, *(__int16 *)&cmd.column.u8[2 * _RBX]);
              break;
            case 6:
              MsgPackSerializer::Int(s, name, *(int *)&cmd.column.u8[4 * _RBX]);
              break;
            case 7:
              MsgPackSerializer::Int(s, name, *(_QWORD *)&cmd.column.u8[8 * _RBX]);
              break;
            case 8:
              MsgPackSerializer::UInt(s, name, cmd.column.u8[_RBX]);
              break;
            case 9:
              MsgPackSerializer::UInt(s, name, *(unsigned __int16 *)&cmd.column.u8[2 * _RBX]);
              break;
            case 10:
              MsgPackSerializer::UInt(s, name, *(unsigned int *)&cmd.column.u8[4 * _RBX]);
              break;
            case 11:
              MsgPackSerializer::UInt(s, name, *(_QWORD *)&cmd.column.u8[8 * _RBX]);
              break;
            case 12:
              MsgPackSerializer::String(s, name, cmd.column.i8);
              v16 = -1i64;
              while ( cmd.column.u8[++v16] != 0 )
                ;
              cmd.column.u8 += v16 + 1;
              break;
            case 13:
              MsgPackSerializer::Bytes(s, name, cmd.column.u8 + 4, *cmd.column.u32);
              break;
            default:
              DLog_Assert(0, "false", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_MsgPackValue", 408);
              break;
          }
          ++_RBX;
        }
        while ( _RBX < v10 );
        arrayCount = cmd.column.arrayCount;
      }
      if ( arrayCount < 0 )
        return 1;
LABEL_8:
      MsgPackSerializer::EndArray(s);
      return 1;
  }
  DLog_Assert(0, "0 && \"Unhandled cmd.type\"", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_MsgPackValue", 420);
  return 0;
}

/*
==============
DLog_Serialize_ProtobufValue
==============
*/
unsigned __int64 DLog_Serialize_ProtobufValue(DLogReadContext *context, ProtobufSerializer *s, int columnIndexOffset)
{
  int v6; 
  int arrayCount; 
  DLogType type; 
  int v9; 
  __int64 v10; 
  int v13; 
  __int64 v16; 
  DLogCmd cmd; 

  DLog_GetNextCmd(context, &cmd);
  switch ( cmd.type )
  {
    case DLOG_CMD_ROW_ARRAY:
      while ( !DLog_GetNextCmdType(context, DLOG_CMD_ROW_ARRAY_END) )
        DLog_Serialize_ProtobufValue(context, s, 0);
      break;
    case DLOG_CMD_ROW:
      ProtobufSerializer::BeginMessage(s, cmd.event.index + 1);
      while ( !DLog_GetNextCmdType(context, DLOG_CMD_ROW_END) )
        DLog_Serialize_ProtobufValue(context, s, 0);
      ProtobufSerializer::EndMessage(s);
      break;
    case DLOG_CMD_COLUMN:
      v6 = 1;
      arrayCount = cmd.column.arrayCount;
      type = cmd.column.type;
      v9 = cmd.event.index + columnIndexOffset + 1;
      if ( cmd.column.arrayCount >= 0 )
      {
        v6 = cmd.column.arrayCount;
        if ( (unsigned __int8)(cmd.column.type - 15) > 1u )
        {
          ProtobufSerializer::BeginPacked(s, v9);
          arrayCount = cmd.column.arrayCount;
        }
      }
      v10 = v6;
      if ( v6 > 0 )
      {
        _R8 = cmd.column.u8;
        _RBX = 0i64;
        v13 = (unsigned __int8)type - 3;
        while ( 2 )
        {
          switch ( v13 )
          {
            case 0:
              goto $LN6_293;
            case 1:
              ProtobufSerializer::Bool(s, v9, _R8[_RBX] != 0);
              goto LABEL_32;
            case 2:
              __asm { vmovss  xmm2, dword ptr [r8+rbx*4]; jumptable 000000014377EACF case 2 }
              ProtobufSerializer::Float32(s, v9, *(float *)&_XMM2);
              goto LABEL_32;
            case 3:
              __asm { vmovsd  xmm2, qword ptr [r8+rbx*8]; jumptable 000000014377EACF case 3 }
              ProtobufSerializer::Float64(s, v9, *(long double *)&_XMM2);
              goto LABEL_32;
            case 4:
              ProtobufSerializer::Int32(s, v9, (char)_R8[_RBX]);
              goto LABEL_32;
            case 5:
              ProtobufSerializer::Int32(s, v9, *(__int16 *)&_R8[2 * _RBX]);
              goto LABEL_32;
            case 6:
              ProtobufSerializer::Int32(s, v9, *(_DWORD *)&_R8[4 * _RBX]);
              goto LABEL_32;
            case 7:
              ProtobufSerializer::Int64(s, v9, *(_QWORD *)&_R8[8 * _RBX]);
              goto LABEL_32;
            case 8:
              ProtobufSerializer::UInt32(s, v9, _R8[_RBX]);
              goto LABEL_32;
            case 9:
              ProtobufSerializer::UInt32(s, v9, *(unsigned __int16 *)&_R8[2 * _RBX]);
              goto LABEL_32;
            case 10:
              ProtobufSerializer::UInt32(s, v9, *(_DWORD *)&_R8[4 * _RBX]);
              goto LABEL_32;
            case 11:
              ProtobufSerializer::UInt64(s, v9, *(_QWORD *)&_R8[8 * _RBX]);
              goto LABEL_32;
            case 12:
              ProtobufSerializer::String(s, v9, (const char *)_R8);
              v16 = -1i64;
              while ( cmd.column.u8[++v16] != 0 )
                ;
              _R8 = &cmd.column.u8[v16 + 1];
              cmd.column.u8 = _R8;
              goto $LN6_293;
            case 13:
              ProtobufSerializer::Bytes(s, v9, _R8 + 4, *(unsigned int *)_R8);
              goto LABEL_32;
            default:
              DLog_Assert(0, "false", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_serializers.cpp", "DLog_Serialize_ProtobufValue", 252);
LABEL_32:
              _R8 = cmd.column.u8;
$LN6_293:
              if ( ++_RBX < v10 )
                continue;
              arrayCount = cmd.column.arrayCount;
              break;
          }
          break;
        }
      }
      if ( arrayCount >= 0 && (unsigned __int8)(cmd.column.type - 15) > 1u )
        ProtobufSerializer::EndPacked(s);
      break;
  }
  return ProtobufSerializer::Size(s);
}

/*
==============
tdefl_output_stream
==============
*/
__int64 tdefl_output_stream(const void *buffer, int bufferSize, void *userdata)
{
  __int64 v4; 
  void *v5; 

  v4 = bufferSize;
  v5 = (void *)*((_QWORD *)userdata + 1);
  if ( (unsigned __int64)v5 + bufferSize >= *((_QWORD *)userdata + 2) )
    return 0i64;
  memcpy_0(v5, buffer, bufferSize);
  *((_QWORD *)userdata + 1) += v4;
  return 1i64;
}

