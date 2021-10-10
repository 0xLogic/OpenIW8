/*
==============
DLog_Bytes
==============
*/

bool __fastcall DLog_Bytes(DLogContext *context, const char *name, const void *value, int size)
{
  return ?DLog_Bytes@@YA_NPEAUDLogContext@@PEBDPEBXH@Z(context, name, value, size);
}

/*
==============
DLog_Int64
==============
*/

bool __fastcall DLog_Int64(DLogContext *context, const char *name, __int64 value)
{
  return ?DLog_Int64@@YA_NPEAUDLogContext@@PEBD_J@Z(context, name, value);
}

/*
==============
DLog_UInt16
==============
*/

bool __fastcall DLog_UInt16(DLogContext *context, const char *name, unsigned __int16 value)
{
  return ?DLog_UInt16@@YA_NPEAUDLogContext@@PEBDG@Z(context, name, value);
}

/*
==============
DLog_Int8
==============
*/

bool __fastcall DLog_Int8(DLogContext *context, const char *name, char value)
{
  return ?DLog_Int8@@YA_NPEAUDLogContext@@PEBDC@Z(context, name, value);
}

/*
==============
DLog_Float
==============
*/

bool __fastcall DLog_Float(DLogContext *context, const char *name, long double value)
{
  return ?DLog_Float@@YA_NPEAUDLogContext@@PEBDN@Z(context, name, value);
}

/*
==============
DLog_UInt64
==============
*/

bool __fastcall DLog_UInt64(DLogContext *context, const char *name, unsigned __int64 value)
{
  return ?DLog_UInt64@@YA_NPEAUDLogContext@@PEBD_K@Z(context, name, value);
}

/*
==============
DLog_Break
==============
*/

bool __fastcall DLog_Break(DLogContext *context)
{
  return ?DLog_Break@@YA_NPEAUDLogContext@@@Z(context);
}

/*
==============
DLog_UInt8
==============
*/

bool __fastcall DLog_UInt8(DLogContext *context, const char *name, unsigned __int8 value)
{
  return ?DLog_UInt8@@YA_NPEAUDLogContext@@PEBDE@Z(context, name, value);
}

/*
==============
DLog_EndArray
==============
*/

bool __fastcall DLog_EndArray(DLogContext *context)
{
  return ?DLog_EndArray@@YA_NPEAUDLogContext@@@Z(context);
}

/*
==============
DLog_String
==============
*/

bool __fastcall DLog_String(DLogContext *context, const char *name, const char *value, bool coerce)
{
  return ?DLog_String@@YA_NPEAUDLogContext@@PEBD1_N@Z(context, name, value, coerce);
}

/*
==============
DLog_BeginArray
==============
*/

bool __fastcall DLog_BeginArray(DLogContext *context, const char *name)
{
  return ?DLog_BeginArray@@YA_NPEAUDLogContext@@PEBD@Z(context, name);
}

/*
==============
DLog_Int32
==============
*/

bool __fastcall DLog_Int32(DLogContext *context, const char *name, int value)
{
  return ?DLog_Int32@@YA_NPEAUDLogContext@@PEBDH@Z(context, name, value);
}

/*
==============
DLog_UInt32
==============
*/

bool __fastcall DLog_UInt32(DLogContext *context, const char *name, unsigned int value)
{
  return ?DLog_UInt32@@YA_NPEAUDLogContext@@PEBDI@Z(context, name, value);
}

/*
==============
DLog_BeginEvent
==============
*/

bool __fastcall DLog_BeginEvent(DLogContext *context, const char *name)
{
  return ?DLog_BeginEvent@@YA_NPEAUDLogContext@@PEBD@Z(context, name);
}

/*
==============
DLog_Bool
==============
*/

bool __fastcall DLog_Bool(DLogContext *context, const char *name, bool value)
{
  return ?DLog_Bool@@YA_NPEAUDLogContext@@PEBD_N@Z(context, name, value);
}

/*
==============
DLog_EndEvent
==============
*/

bool __fastcall DLog_EndEvent(DLogContext *context)
{
  return ?DLog_EndEvent@@YA_NPEAUDLogContext@@@Z(context);
}

/*
==============
DLog_Float32Array
==============
*/

bool __fastcall DLog_Float32Array(DLogContext *context, const char *name, const float *values, int valueCount)
{
  return ?DLog_Float32Array@@YA_NPEAUDLogContext@@PEBDPEBMH@Z(context, name, values, valueCount);
}

/*
==============
DLog_UInt32Array
==============
*/

bool __fastcall DLog_UInt32Array(DLogContext *context, const char *name, const unsigned int *values, int valueCount)
{
  return ?DLog_UInt32Array@@YA_NPEAUDLogContext@@PEBDPEBIH@Z(context, name, values, valueCount);
}

/*
==============
DLog_GetNextCmd
==============
*/

bool __fastcall DLog_GetNextCmd(DLogReadContext *context, DLogCmd *cmd)
{
  return ?DLog_GetNextCmd@@YA_NPEAUDLogReadContext@@PEAUDLogCmd@@@Z(context, cmd);
}

/*
==============
DLog_Int16
==============
*/

bool __fastcall DLog_Int16(DLogContext *context, const char *name, __int16 value)
{
  return ?DLog_Int16@@YA_NPEAUDLogContext@@PEBDF@Z(context, name, value);
}

/*
==============
DLog_EndRowArray
==============
*/

bool __fastcall DLog_EndRowArray(DLogContext *context)
{
  return ?DLog_EndRowArray@@YA_NPEAUDLogContext@@@Z(context);
}

/*
==============
DLog_GetNextCmdType
==============
*/

bool __fastcall DLog_GetNextCmdType(DLogReadContext *context, DLogCmdType type)
{
  return ?DLog_GetNextCmdType@@YA_NPEAUDLogReadContext@@W4DLogCmdType@@@Z(context, type);
}

/*
==============
DLog_CreateReadContext
==============
*/

void __fastcall DLog_CreateReadContext(DLogReadContext *context, unsigned __int64 userId, const void *buffer, int bufferSize)
{
  ?DLog_CreateReadContext@@YAXPEAUDLogReadContext@@_KPEBXH@Z(context, userId, buffer, bufferSize);
}

/*
==============
DLog_GetContextRemainingSize
==============
*/

int __fastcall DLog_GetContextRemainingSize(DLogContext *context)
{
  return ?DLog_GetContextRemainingSize@@YAHPEAUDLogContext@@@Z(context);
}

/*
==============
DLog_Float64
==============
*/

bool __fastcall DLog_Float64(DLogContext *context, const char *name, long double value)
{
  return ?DLog_Float64@@YA_NPEAUDLogContext@@PEBDN@Z(context, name, value);
}

/*
==============
DLog_UInt64Array
==============
*/

bool __fastcall DLog_UInt64Array(DLogContext *context, const char *name, const unsigned __int64 *values, int valueCount)
{
  return ?DLog_UInt64Array@@YA_NPEAUDLogContext@@PEBDPEB_KH@Z(context, name, values, valueCount);
}

/*
==============
DLog_GetNextEvent
==============
*/

bool __fastcall DLog_GetNextEvent(DLogReadContext *context, DLogContext *eventContext, bool *sampled)
{
  return ?DLog_GetNextEvent@@YA_NPEAUDLogReadContext@@PEAUDLogContext@@PEA_N@Z(context, eventContext, sampled);
}

/*
==============
DLog_BeginRow
==============
*/

bool __fastcall DLog_BeginRow(DLogContext *context, const char *name)
{
  return ?DLog_BeginRow@@YA_NPEAUDLogContext@@PEBD@Z(context, name);
}

/*
==============
DLog_GetContextPath
==============
*/

void __fastcall DLog_GetContextPath(DLogContext *context, const char *member, char *path, int pathSize)
{
  ?DLog_GetContextPath@@YAXPEAUDLogContext@@PEBDPEADH@Z(context, member, path, pathSize);
}

/*
==============
DLog_PeekEventName
==============
*/

bool __fastcall DLog_PeekEventName(const DLogContext *context, const char **eventName)
{
  return ?DLog_PeekEventName@@YA_NPEBUDLogContext@@PEAPEBD@Z(context, eventName);
}

/*
==============
DLog_Float64Array
==============
*/

bool __fastcall DLog_Float64Array(DLogContext *context, const char *name, const long double *values, int valueCount)
{
  return ?DLog_Float64Array@@YA_NPEAUDLogContext@@PEBDPEBNH@Z(context, name, values, valueCount);
}

/*
==============
DLog_Null
==============
*/

bool __fastcall DLog_Null(DLogContext *context, const char *name)
{
  return ?DLog_Null@@YA_NPEAUDLogContext@@PEBD@Z(context, name);
}

/*
==============
DLog_Int64Array
==============
*/

bool __fastcall DLog_Int64Array(DLogContext *context, const char *name, const __int64 *values, int valueCount)
{
  return ?DLog_Int64Array@@YA_NPEAUDLogContext@@PEBDPEB_JH@Z(context, name, values, valueCount);
}

/*
==============
DLog_Int32Array
==============
*/

bool __fastcall DLog_Int32Array(DLogContext *context, const char *name, const int *values, int valueCount)
{
  return ?DLog_Int32Array@@YA_NPEAUDLogContext@@PEBDPEBHH@Z(context, name, values, valueCount);
}

/*
==============
DLog_Int8Array
==============
*/

bool __fastcall DLog_Int8Array(DLogContext *context, const char *name, const char *values, int valueCount)
{
  return ?DLog_Int8Array@@YA_NPEAUDLogContext@@PEBDPEBCH@Z(context, name, values, valueCount);
}

/*
==============
DLog_StringArray
==============
*/

bool __fastcall DLog_StringArray(DLogContext *context, const char *name, const char **values, int valueCount)
{
  return ?DLog_StringArray@@YA_NPEAUDLogContext@@PEBDPEAPEBDH@Z(context, name, values, valueCount);
}

/*
==============
DLog_CreateContext
==============
*/

bool __fastcall DLog_CreateContext(DLogContext *context, unsigned __int64 userId, void *buffer, int bufferSize)
{
  return ?DLog_CreateContext@@YA_NPEAUDLogContext@@_KPEAXH@Z(context, userId, buffer, bufferSize);
}

/*
==============
DLog_BoolArray
==============
*/

bool __fastcall DLog_BoolArray(DLogContext *context, const char *name, const bool *values, int valueCount)
{
  return ?DLog_BoolArray@@YA_NPEAUDLogContext@@PEBDPEB_NH@Z(context, name, values, valueCount);
}

/*
==============
DLog_UInt16Array
==============
*/

bool __fastcall DLog_UInt16Array(DLogContext *context, const char *name, const unsigned __int16 *values, int valueCount)
{
  return ?DLog_UInt16Array@@YA_NPEAUDLogContext@@PEBDPEBGH@Z(context, name, values, valueCount);
}

/*
==============
DLog_FinalizeContext
==============
*/

bool __fastcall DLog_FinalizeContext(DLogContext *context)
{
  return ?DLog_FinalizeContext@@YA_NPEAUDLogContext@@@Z(context);
}

/*
==============
DLog_GetReadContextRemainingSize
==============
*/

int __fastcall DLog_GetReadContextRemainingSize(DLogReadContext *context)
{
  return ?DLog_GetReadContextRemainingSize@@YAHPEAUDLogReadContext@@@Z(context);
}

/*
==============
DLog_Int16Array
==============
*/

bool __fastcall DLog_Int16Array(DLogContext *context, const char *name, const __int16 *values, int valueCount)
{
  return ?DLog_Int16Array@@YA_NPEAUDLogContext@@PEBDPEBFH@Z(context, name, values, valueCount);
}

/*
==============
DLog_UInt8Array
==============
*/

bool __fastcall DLog_UInt8Array(DLogContext *context, const char *name, const unsigned __int8 *values, int valueCount)
{
  return ?DLog_UInt8Array@@YA_NPEAUDLogContext@@PEBDPEBEH@Z(context, name, values, valueCount);
}

/*
==============
DLog_Int
==============
*/

bool __fastcall DLog_Int(DLogContext *context, const char *name, __int64 value)
{
  return ?DLog_Int@@YA_NPEAUDLogContext@@PEBD_J@Z(context, name, value);
}

/*
==============
DLog_EndRow
==============
*/

bool __fastcall DLog_EndRow(DLogContext *context)
{
  return ?DLog_EndRow@@YA_NPEAUDLogContext@@@Z(context);
}

/*
==============
DLog_Float32
==============
*/

bool __fastcall DLog_Float32(DLogContext *context, const char *name, float value)
{
  return ?DLog_Float32@@YA_NPEAUDLogContext@@PEBDM@Z(context, name, value);
}

/*
==============
DLog_GetContextSize
==============
*/

int __fastcall DLog_GetContextSize(const DLogContext *context)
{
  return ?DLog_GetContextSize@@YAHPEBUDLogContext@@@Z(context);
}

/*
==============
DLog_BeginRowArray
==============
*/

bool __fastcall DLog_BeginRowArray(DLogContext *context, const char *name)
{
  return ?DLog_BeginRowArray@@YA_NPEAUDLogContext@@PEBD@Z(context, name);
}

/*
==============
DLog_Array
==============
*/
bool DLog_Array(DLogContext *context, const char *name, DLogType type, const void *elements, int elementSize, int elementCount)
{
  const DLogColumn *arrayColumn; 
  const char *v11; 
  const char *v12; 
  char *v13; 
  const char *v14; 
  const char *v15; 
  __int64 position; 
  int v18; 
  const DLogColumn *v19; 
  int arrayCount; 
  const char *v21; 
  const char *v22; 
  char dest[32]; 

  if ( context->error || !DLog_BeginArray(context, name) )
    return 0;
  arrayColumn = context->arrayColumn;
  if ( arrayColumn && arrayColumn->type != (unsigned __int8)type )
  {
    v11 = DLog_TypeToString(type);
    v12 = DLog_TypeToString((DLogType)LOBYTE(context->arrayColumn->type));
    v13 = (char *)v11;
    v14 = v12;
    v15 = name;
LABEL_6:
    DLog_ErrorTypeMismatch(context, v15, v14, v13);
    return 0;
  }
  *context->arrayType = type | 0x80;
  position = context->position;
  v18 = elementCount * elementSize;
  if ( context->bufferSize - (int)position < elementCount * elementSize )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  v19 = context->arrayColumn;
  if ( v19 )
  {
    arrayCount = v19->arrayCount;
    if ( arrayCount <= 0 && elementCount >= 0 )
    {
      v21 = DLog_TypeToString((DLogType)LOBYTE(v19->type));
      DLog_sprintf<32>((char (*)[32])dest, "%s[%d]", v21, (unsigned int)elementCount);
      v22 = DLog_TypeToString((DLogType)LOBYTE(v19->type));
      v15 = v19->name;
      v13 = dest;
      v14 = v22;
      goto LABEL_6;
    }
    if ( elementCount > arrayCount )
    {
      DLog_ErrorTruncatedArray(context, v19->name, arrayCount, elementCount);
      return 0;
    }
  }
  memcpy_0(&context->buffer[position], elements, v18);
  context->position += v18;
  context->arrayIndex += elementCount;
  return DLog_EndArray(context);
}

/*
==============
DLog_BeginArray
==============
*/
char DLog_BeginArray(DLogContext *context, const char *name)
{
  const DLogColumn *column; 
  __int64 position; 
  unsigned __int8 *buffer; 
  const DLogColumn *arrayColumn; 
  DLogType *v8; 
  int v9; 
  int *v10; 

  if ( context->error )
    return 0;
  column = context->column;
  context->arrayColumn = column;
  if ( !column )
    context->arrayColumn = DLog_FindColumn(context, name);
  if ( !DLog_WriteColumn(context, name, DLOG_TYPE_ARRAY) )
    return 0;
  position = context->position;
  buffer = context->buffer;
  arrayColumn = context->arrayColumn;
  v8 = (DLogType *)&buffer[position - 1];
  context->arrayType = v8;
  if ( arrayColumn )
  {
    *v8 = LOBYTE(arrayColumn->type) | 0x80;
    LODWORD(position) = context->position;
    buffer = context->buffer;
  }
  v9 = context->bufferSize - position;
  v10 = (int *)&buffer[(int)position];
  context->arraySize = v10;
  if ( v9 < 4 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  *v10 = 0;
  context->position += 4;
  DLog_strcpy(context->arrayName, 0x40ui64, name);
  context->arrayIndex = 0;
  return 1;
}

/*
==============
DLog_BeginEvent
==============
*/
bool DLog_BeginEvent(DLogContext *context, const char *name)
{
  bool result; 
  const char *v5; 
  int v6; 
  const DLogSchema *Schema; 
  const DLogEvent *Event; 
  const DLogSchema *v9; 
  const DLogEvent *v10; 
  const DLogEvent *v11; 
  bool IsEventSampled; 
  int v13; 
  __int64 i; 
  DLogEnv Env; 
  const DLogEvent *v16; 
  __int64 position; 
  unsigned __int8 v18; 
  __int64 v19; 
  double v21; 
  __int64 v22; 
  const DLogEvent *v23; 
  __int64 v24; 
  void (__fastcall *autoFill)(DLogContext *, const DLogEvent *); 
  const DLogEvent *v26; 

  result = DLog_IsActive();
  if ( !result )
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
    return result;
  }
  if ( context->error )
    return 0;
  if ( context->autoEndEvent )
    DLog_EndEvent(context);
  context->autoEndEvent = 0;
  if ( context->rowName[0] )
  {
    v5 = "Unexpected BeginEvent while context is inside a row";
LABEL_8:
    DLog_ErrorUnexpected(context, name, v5);
    return 0;
  }
  if ( context->eventName[0] )
  {
    v5 = "Unexpected BeginEvent while context is inside an event";
    goto LABEL_8;
  }
  v6 = 0;
  context->event = NULL;
  Schema = DLog_GetSchema();
  if ( !Schema )
  {
    context->error = DLOG_ERROR_SCHEMA_NOT_AVAILABLE;
    return 0;
  }
  Event = DLog_FindEvent(Schema, name);
  context->event = Event;
  if ( !Event )
  {
    v9 = DLog_GetSchema();
    v10 = DLog_FindEvent(v9, name);
    if ( v10 )
    {
      if ( v10->requireSchema )
      {
        DLog_ErrorEventRequiresSchema(context, name);
        return 0;
      }
    }
  }
  v11 = context->event;
  IsEventSampled = 1;
  if ( v11 )
  {
    IsEventSampled = DLog_IsEventSampled(context->userId, v11);
    if ( !IsEventSampled )
    {
      v13 = 0;
      if ( context->event->channelRefCount <= 0 )
        return 0;
      for ( i = 0i64; ; i += 24i64 )
      {
        Env = DLog_GetEnv();
        v16 = context->event;
        if ( v16->channelRefs->sample[(int)Env + i] == DLOG_SAMPLE_ALL )
          break;
        if ( ++v13 >= v16->channelRefCount )
          return 0;
      }
    }
  }
  position = context->position;
  v18 = 1;
  if ( IsEventSampled )
    v18 = -127;
  if ( context->bufferSize - (int)position < 1 )
    goto LABEL_33;
  context->buffer[position] = v18;
  v19 = -1i64;
  ++context->position;
  while ( name[++v19] != 0 )
    ;
  if ( !DLog_Write(context, name, v19 + 1) )
    return 0;
  v21 = COERCE_DOUBLE(DLog_EpochTime());
  v22 = context->position;
  if ( context->bufferSize - (int)v22 < 8 )
  {
LABEL_33:
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  *(double *)&context->buffer[v22] = v21;
  context->position += 8;
  DLog_strcpy(context->eventName, 0x40ui64, name);
  v23 = context->event;
  if ( v23 && v23->rowCount > 0 )
  {
    v24 = 0i64;
    do
    {
      autoFill = v23->rows[v24].autoFill;
      v26 = v23;
      if ( autoFill )
      {
        ((void (__fastcall *)(DLogContext *))autoFill)(context);
        v26 = context->event;
      }
      ++v6;
      ++v24;
      v23 = v26;
    }
    while ( v6 < v26->rowCount );
  }
  return 1;
}

/*
==============
DLog_BeginRow
==============
*/
char DLog_BeginRow(DLogContext *context, const char *name)
{
  const char *v4; 
  const DLogEvent *event; 
  const DLogRow *Row; 
  __int64 v8; 
  char *rowArrayName; 
  char *v10; 
  int v11; 
  int v12; 
  const char *v13; 
  __int64 position; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  const char *v18; 
  int v19; 
  int v20; 
  __int64 v21; 

  if ( context->error )
    return 0;
  if ( context->rowName[0] )
  {
    v4 = "Unexpected BeginRow while context is inside a row";
LABEL_4:
    DLog_ErrorUnexpected(context, name, v4);
    return 0;
  }
  if ( !context->eventName[0] )
  {
    v4 = "Unexpected BeginRow while context is not inside an event";
    goto LABEL_4;
  }
  event = context->event;
  Row = NULL;
  v8 = -1i64;
  if ( event && (event->columnCount || event->rowCount) )
  {
    Row = DLog_FindRow(event, name);
    if ( !Row )
    {
      DLog_ErrorNotAMember(context, name);
      return 0;
    }
    rowArrayName = context->rowArrayName;
    if ( !context->rowArrayName[0] )
      goto LABEL_20;
    v10 = context->rowArrayName;
    do
    {
      v11 = (unsigned __int8)v10[(unsigned __int64)(Row->name - (const char *)rowArrayName)];
      v12 = (unsigned __int8)*v10 - v11;
      if ( v12 )
        break;
      ++v10;
    }
    while ( v11 );
    if ( v12 && !DLog_EndRowArray(context) )
      return 0;
    if ( !*rowArrayName )
    {
LABEL_20:
      if ( Row->arrayCount > 0 )
      {
        v13 = Row->name;
        if ( context->error )
          return 0;
        position = context->position;
        if ( context->bufferSize - (int)position < 1 )
          goto LABEL_26;
        v15 = -1i64;
        context->buffer[position] = 2;
        v16 = ++context->position;
        do
          ++v15;
        while ( v13[v15] );
        v17 = v15 + 1;
        if ( context->bufferSize - (int)v16 < v17 )
        {
LABEL_26:
          DLog_ErrorOutOfMemory(context);
          return 0;
        }
        memcpy_0(&context->buffer[v16], v13, v17);
        context->position += v17;
        if ( !v17 )
          return 0;
        DLog_strcpy(context->rowArrayName, 0x40ui64, v13);
        context->rowArrayIndex = 0;
      }
    }
    v18 = (const char *)(name - rowArrayName);
    do
    {
      v19 = (unsigned __int8)v18[(_QWORD)rowArrayName];
      v20 = (unsigned __int8)*rowArrayName - v19;
      if ( v20 )
        break;
      ++rowArrayName;
    }
    while ( v19 );
    if ( !v20 )
      ++context->rowArrayIndex;
  }
  v21 = context->position;
  if ( context->bufferSize - (int)v21 < 1 )
    goto LABEL_26;
  context->buffer[v21] = 3;
  ++context->position;
  if ( !context->rowArrayName[0] )
  {
    while ( name[++v8] != 0 )
      ;
    if ( !DLog_Write(context, name, v8 + 1) )
      return 0;
  }
  context->row = Row;
  DLog_strcpy(context->rowName, 0x40ui64, name);
  return 1;
}

/*
==============
DLog_BeginRowArray
==============
*/
bool DLog_BeginRowArray(DLogContext *context, const char *name)
{
  __int64 position; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  bool result; 

  if ( context->error )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 1 )
    goto LABEL_6;
  v5 = -1i64;
  context->buffer[position] = 2;
  v6 = ++context->position;
  do
    ++v5;
  while ( name[v5] );
  v7 = v5 + 1;
  if ( context->bufferSize - (int)v6 < v7 )
  {
LABEL_6:
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  memcpy_0(&context->buffer[v6], name, v7);
  context->position += v7;
  if ( !v7 )
    return 0;
  DLog_strcpy(context->rowArrayName, 0x40ui64, name);
  result = 1;
  context->rowArrayIndex = 0;
  return result;
}

/*
==============
DLog_Bool
==============
*/
bool DLog_Bool(DLogContext *context, const char *name, bool value)
{
  __int64 position; 
  bool result; 

  if ( context->error || !DLog_WriteColumn(context, name, DLOG_TYPE_BOOL) )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 1 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  context->buffer[position] = value;
  result = 1;
  ++context->position;
  return result;
}

/*
==============
DLog_BoolArray
==============
*/
bool DLog_BoolArray(DLogContext *context, const char *name, const bool *values, int valueCount)
{
  return DLog_Array(context, name, DLOG_TYPE_BOOL, values, 1, valueCount);
}

/*
==============
DLog_Break
==============
*/
bool DLog_Break(DLogContext *context)
{
  __int64 position; 
  bool result; 

  if ( context->error )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 1 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  context->buffer[position] = 8;
  result = 1;
  ++context->position;
  return result;
}

/*
==============
DLog_Bytes
==============
*/
bool DLog_Bytes(DLogContext *context, const char *name, const void *value, int size)
{
  __int64 position; 

  if ( context->error || !DLog_WriteColumn(context, name, DLOG_TYPE_BYTES) )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 4 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  *(_DWORD *)&context->buffer[position] = size;
  context->position += 4;
  return DLog_Write(context, value, size) != 0;
}

/*
==============
DLog_CreateContext
==============
*/
bool DLog_CreateContext(DLogContext *context, unsigned __int64 userId, void *buffer, int bufferSize)
{
  bool result; 

  memset_0(context, 0, sizeof(DLogContext));
  context->buffer = (unsigned __int8 *)buffer;
  result = 1;
  context->bufferSize = bufferSize;
  context->userId = userId;
  return result;
}

/*
==============
DLog_CreateReadContext
==============
*/
void DLog_CreateReadContext(DLogReadContext *context, unsigned __int64 userId, const void *buffer, int bufferSize)
{
  memset_0(context, 0, sizeof(DLogReadContext));
  context->buffer = (unsigned __int8 *)buffer;
  context->bufferSize = bufferSize;
  context->userId = userId;
}

/*
==============
DLog_EndArray
==============
*/
bool DLog_EndArray(DLogContext *context)
{
  bool result; 
  int arrayIndex; 

  if ( context->error )
    return 0;
  context->arrayColumn = NULL;
  context->arrayName[0] = 0;
  arrayIndex = context->arrayIndex;
  context->arrayType = NULL;
  *context->arraySize = arrayIndex;
  result = 1;
  context->arraySize = NULL;
  context->arrayIndex = 0;
  return result;
}

/*
==============
DLog_EndEvent
==============
*/
bool DLog_EndEvent(DLogContext *context)
{
  bool result; 
  __int64 position; 

  if ( context->error )
    return 0;
  if ( context->rowName[0] )
  {
    DLog_ErrorUnexpected(context, NULL, "Unexpected EndEvent while context is inside a row");
    return 0;
  }
  if ( context->eventName[0] )
  {
    if ( context->rowArrayName[0] && !DLog_EndRowArray(context) )
      return 0;
    position = context->position;
    if ( context->bufferSize - (int)position >= 1 )
    {
      context->buffer[position] = 5;
      result = 1;
      ++context->position;
      context->event = NULL;
      context->eventName[0] = 0;
      context->autoEndEvent = 0;
    }
    else
    {
      DLog_ErrorOutOfMemory(context);
      return 0;
    }
  }
  else
  {
    DLog_ErrorUnexpected(context, NULL, "Unexpected EndEvent while context is not inside an event");
    return 0;
  }
  return result;
}

/*
==============
DLog_EndRow
==============
*/
bool DLog_EndRow(DLogContext *context)
{
  bool result; 
  __int64 position; 

  if ( context->error )
    return 0;
  if ( !context->rowName[0] )
  {
    DLog_ErrorUnexpected(context, NULL, "Unexpected EndRow while context is not inside a row");
    return 0;
  }
  if ( context->eventName[0] )
  {
    position = context->position;
    if ( context->bufferSize - (int)position >= 1 )
    {
      context->buffer[position] = 7;
      ++context->position;
      result = 1;
      context->row = NULL;
      context->rowName[0] = 0;
      context->column = NULL;
    }
    else
    {
      DLog_ErrorOutOfMemory(context);
      return 0;
    }
  }
  else
  {
    DLog_ErrorUnexpected(context, NULL, "Unexpected EndRow while context is not inside an event");
    return 0;
  }
  return result;
}

/*
==============
DLog_EndRowArray
==============
*/
bool DLog_EndRowArray(DLogContext *context)
{
  __int64 position; 
  bool result; 

  if ( context->error )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 1 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  context->buffer[position] = 6;
  ++context->position;
  result = 1;
  *(_QWORD *)context->rowArrayName = 0i64;
  *(_QWORD *)&context->rowArrayName[8] = 0i64;
  *(_QWORD *)&context->rowArrayName[16] = 0i64;
  *(_QWORD *)&context->rowArrayName[24] = 0i64;
  *(_QWORD *)&context->rowArrayName[32] = 0i64;
  *(_QWORD *)&context->rowArrayName[40] = 0i64;
  *(_QWORD *)&context->rowArrayName[48] = 0i64;
  *(_QWORD *)&context->rowArrayName[56] = 0i64;
  return result;
}

/*
==============
DLog_FinalizeContext
==============
*/
char DLog_FinalizeContext(DLogContext *context)
{
  if ( context->error )
    return 0;
  if ( context->rowName[0] )
  {
    DLog_ErrorUnexpected(context, NULL, "Unexpected FinalizeContext while context is inside a row");
    return 0;
  }
  if ( context->autoEndEvent )
    DLog_EndEvent(context);
  if ( !context->eventName[0] )
    return 1;
  DLog_ErrorUnexpected(context, NULL, "Unexpected FinalizeContext while context is inside an event");
  return 0;
}

/*
==============
DLog_Float32
==============
*/
bool DLog_Float32(DLogContext *context, const char *name, float value)
{
  __int64 position; 
  bool result; 

  if ( context->error || !DLog_WriteColumn(context, name, DLOG_TYPE_FLOAT32) )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 4 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  *(float *)&context->buffer[position] = value;
  result = 1;
  context->position += 4;
  return result;
}

/*
==============
DLog_Float32Array
==============
*/
bool DLog_Float32Array(DLogContext *context, const char *name, const float *values, int valueCount)
{
  return DLog_Array(context, name, DLOG_TYPE_FLOAT32, values, 4, valueCount);
}

/*
==============
DLog_Float64
==============
*/
char DLog_Float64(DLogContext *context, const char *name, long double value)
{
  __int64 position; 

  if ( context->error || !DLog_WriteColumn(context, name, DLOG_TYPE_FLOAT64) )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 8 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  *(long double *)&context->buffer[position] = value;
  context->position += 8;
  return 1;
}

/*
==============
DLog_Float64Array
==============
*/
bool DLog_Float64Array(DLogContext *context, const char *name, const long double *values, int valueCount)
{
  return DLog_Array(context, name, DLOG_TYPE_FLOAT64, values, 8, valueCount);
}

/*
==============
DLog_Float
==============
*/

bool __fastcall DLog_Float(DLogContext *context, const char *name, double value)
{
  const DLogColumn *Column; 
  bool result; 
  DLogType type; 
  const char *v11; 
  const char *v12; 
  __int64 position; 
  __int64 v15; 

  _XMM6 = *(_OWORD *)&value;
  if ( context->error )
    return 0;
  Column = DLog_FindColumn(context, name);
  if ( !Column )
  {
    DLog_ErrorNotAMember(context, name);
    return 0;
  }
  type = Column->type;
  if ( DLog_IsDLogTypeInt(type) )
  {
    *((double *)&_XMM0 + 1) = *(&value + 1);
    *(double *)&_XMM0 = rint(value);
    if ( *(double *)&_XMM0 == value )
    {
      __asm { vcvttsd2si r8, xmm0; value }
      return DLog_Int(context, name, _R8);
    }
  }
  if ( (unsigned __int8)(type - 5) > 1u )
  {
    v11 = DLog_TypeToString(DLOG_TYPE_FLOAT64);
    v12 = DLog_TypeToString(type);
    DLog_ErrorTypeMismatch(context, name, v12, v11);
    return 0;
  }
  if ( !DLog_WriteColumn(context, name, type) )
    return 0;
  if ( type == DLOG_TYPE_FLOAT32 )
  {
    position = context->position;
    __asm { vcvtsd2ss xmm0, xmm6, xmm6 }
    if ( context->bufferSize - (int)position >= 4 )
    {
      *(_DWORD *)&context->buffer[position] = _XMM0;
      result = 1;
      context->position += 4;
      return result;
    }
    goto LABEL_16;
  }
  if ( type == DLOG_TYPE_FLOAT64 )
  {
    v15 = context->position;
    if ( context->bufferSize - (int)v15 < 8 )
    {
LABEL_16:
      DLog_ErrorOutOfMemory(context);
      return 0;
    }
    *(double *)&context->buffer[v15] = value;
    context->position += 8;
  }
  return 1;
}

/*
==============
DLog_GetContextPath
==============
*/
void DLog_GetContextPath(DLogContext *context, const char *member, char *path, int pathSize)
{
  char *v5; 
  char *v7; 

  v5 = path;
  v7 = &path[pathSize];
  if ( context )
  {
    if ( context->eventName[0] )
      v5 = &path[DLog_sprintf(path, pathSize, (const char *const)&queryFormat)];
    if ( context->rowName[0] )
      v5 += DLog_sprintf(v5, v7 - v5, ".%s", context->rowName);
  }
  if ( member )
    v5[DLog_sprintf(v5, v7 - v5, ".%s", member)] = 0;
  else
    *v5 = 0;
}

/*
==============
DLog_GetContextRemainingSize
==============
*/
__int64 DLog_GetContextRemainingSize(DLogContext *context)
{
  if ( context->error )
    return 0i64;
  else
    return (unsigned int)(context->bufferSize - context->position);
}

/*
==============
DLog_GetContextSize
==============
*/
__int64 DLog_GetContextSize(const DLogContext *context)
{
  if ( context->error )
    return 0i64;
  else
    return (unsigned int)context->position;
}

/*
==============
DLog_GetNextCmd
==============
*/
bool DLog_GetNextCmd(DLogReadContext *context, DLogCmd *cmd)
{
  unsigned __int8 v4; 
  DLogCmdType CmdType; 
  const DLogSchema *Schema; 
  DLogCmdType type; 
  const DLogSchema *v8; 
  __int64 v9; 
  const char *v10; 
  int v11; 
  const char *name; 
  bool result; 
  __int64 v14; 
  const char *v15; 
  int rowArrayIndex; 
  __int64 v17; 
  const char *v18; 
  __int64 v19; 
  const char *v20; 
  int v21; 
  char v22; 
  const DLogRow *row; 
  DLogHashTable *p_columnHashTable; 
  int arrayCount; 
  __int64 position; 
  unsigned __int8 *buffer; 
  int v28; 
  __int64 v29; 
  __int64 v30; 

  if ( context->position >= context->bufferSize )
    return 0;
  *(_QWORD *)&cmd->type = 0i64;
  *(_OWORD *)&cmd->event.index = 0ui64;
  *(_OWORD *)&cmd->column.type = 0ui64;
  cmd->row.arrayIndex = -1;
  v4 = context->buffer[context->position] & 0xF0;
  CmdType = DLog_PeekNextCmdType(context);
  cmd->type = CmdType;
  if ( CmdType == DLOG_CMD_INVALID )
    return 0;
  ++context->position;
  Schema = DLog_GetSchema();
  type = cmd->type;
  v8 = Schema;
  if ( cmd->type == DLOG_CMD_EVENT )
  {
    v9 = -1i64;
    v10 = (const char *)&context->buffer[context->position];
    cmd->event.name = v10;
    do
      ++v9;
    while ( v10[v9] );
    v11 = context->position + v9;
    context->position = v11 + 1;
    cmd->event.timestamp = *(_QWORD *)&context->buffer[v11 + 1];
    context->position += 8;
    cmd->event.sampled = v4 >> 7;
    if ( Schema )
    {
      name = cmd->event.name;
      cmd->event.index = -1;
      if ( DLog_HashTableFind(&Schema->eventHashTable, name, &cmd->event.index) )
      {
        result = 1;
        context->event = &v8->events[cmd->event.index];
        return result;
      }
    }
    return 1;
  }
  switch ( type )
  {
    case DLOG_CMD_EVENT_END:
      context->event = NULL;
      return 1;
    case DLOG_CMD_ROW_ARRAY:
      v14 = -1i64;
      v15 = (const char *)&context->buffer[context->position];
      cmd->event.name = v15;
      do
        ++v14;
      while ( v15[v14] );
      context->position += v14 + 1;
      DLog_strcpy(context->rowArrayName, 0x40ui64, cmd->event.name);
      goto LABEL_23;
    case DLOG_CMD_ROW_ARRAY_END:
      result = 1;
      *(_QWORD *)context->rowArrayName = 0i64;
      *(_QWORD *)&context->rowArrayName[8] = 0i64;
      *(_QWORD *)&context->rowArrayName[16] = 0i64;
      *(_QWORD *)&context->rowArrayName[24] = 0i64;
      *(_QWORD *)&context->rowArrayName[32] = 0i64;
      *(_QWORD *)&context->rowArrayName[40] = 0i64;
      *(_QWORD *)&context->rowArrayName[48] = 0i64;
      *(_QWORD *)&context->rowArrayName[56] = 0i64;
      return result;
    case DLOG_CMD_ROW:
      if ( context->rowArrayName[0] )
      {
        cmd->event.name = context->rowArrayName;
        rowArrayIndex = context->rowArrayIndex;
        context->rowArrayIndex = rowArrayIndex + 1;
        cmd->row.arrayIndex = rowArrayIndex;
      }
      else
      {
        v17 = -1i64;
        v18 = (const char *)&context->buffer[context->position];
        cmd->event.name = v18;
        do
          ++v17;
        while ( v18[v17] );
        context->position += v17 + 1;
      }
LABEL_23:
      if ( v8 )
      {
        cmd->event.index = -1;
        if ( context->event )
        {
          if ( DLog_HashTableFind(&context->event->rowHashTable, cmd->event.name, &cmd->event.index) )
          {
            result = 1;
            context->row = &context->event->rows[cmd->event.index];
            return result;
          }
        }
      }
      return 1;
    case DLOG_CMD_ROW_END:
      context->row = NULL;
      return 1;
  }
  if ( type != DLOG_CMD_COLUMN )
  {
    if ( type == DLOG_CMD_BREAK )
      return 1;
    DLog_Assert(1, "\"Unhandled DLogType!\"", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_context.cpp", "DLog_GetNextCmd", 397);
    return 0;
  }
  v19 = -1i64;
  v20 = (const char *)&context->buffer[context->position];
  cmd->event.name = v20;
  do
    ++v19;
  while ( v20[v19] );
  v21 = context->position + v19;
  context->position = v21 + 1;
  v22 = context->buffer[v21 + 1];
  cmd->column.type = v22 & 0x7F;
  ++context->position;
  DLog_Assert((unsigned __int8)(cmd->column.type - 1) <= 0xFu, "cmd->column.type > DLOG_TYPE_INVALID && cmd->column.type < DLOG_TYPE_COUNT", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_context.cpp", "DLog_GetNextCmd", 308);
  if ( (unsigned __int8)(cmd->column.type - 1) > 0xFu )
    return 0;
  if ( v8 )
  {
    cmd->event.index = -1;
    row = context->row;
    if ( row )
    {
      p_columnHashTable = &row->columnHashTable;
LABEL_38:
      DLog_HashTableFind(p_columnHashTable, cmd->event.name, &cmd->event.index);
      goto LABEL_39;
    }
    if ( context->event )
    {
      p_columnHashTable = &context->event->columnHashTable;
      goto LABEL_38;
    }
  }
LABEL_39:
  cmd->column.arrayCount = -1;
  arrayCount = 1;
  position = context->position;
  if ( v22 < 0 )
  {
    cmd->column.arrayCount = *(_DWORD *)&context->buffer[position];
    context->position += 4;
    LODWORD(position) = context->position;
    arrayCount = cmd->column.arrayCount;
  }
  cmd->column.u8 = &context->buffer[(int)position];
  switch ( cmd->column.type )
  {
    case DLOG_TYPE_NULL:
      return 1;
    case DLOG_TYPE_BOOL:
    case DLOG_TYPE_INT8:
    case DLOG_TYPE_UINT8:
      context->position += arrayCount;
      result = 1;
      break;
    case DLOG_TYPE_FLOAT32:
    case DLOG_TYPE_INT32:
    case DLOG_TYPE_UINT32:
      context->position += 4 * arrayCount;
      result = 1;
      break;
    case DLOG_TYPE_FLOAT64:
    case DLOG_TYPE_INT64:
    case DLOG_TYPE_UINT64:
      context->position += 8 * arrayCount;
      result = 1;
      break;
    case DLOG_TYPE_INT16:
    case DLOG_TYPE_UINT16:
      context->position += 2 * arrayCount;
      result = 1;
      break;
    case DLOG_TYPE_STRING:
      if ( arrayCount <= 0 )
        return 1;
      buffer = context->buffer;
      v28 = context->position;
      v29 = (unsigned int)arrayCount;
      do
      {
        v30 = -1i64;
        do
          ++v30;
        while ( buffer[v28 + v30] );
        v28 += v30 + 1;
        context->position = v28;
        --v29;
      }
      while ( v29 );
      result = 1;
      break;
    case DLOG_TYPE_BYTES:
      context->position += *(_DWORD *)&context->buffer[context->position] + 4;
      result = 1;
      break;
    default:
      DLog_Assert(0, "false", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_context.cpp", "DLog_GetNextCmd", 387);
      return 0;
  }
  return result;
}

/*
==============
DLog_GetNextCmdType
==============
*/
bool DLog_GetNextCmdType(DLogReadContext *context, DLogCmdType type)
{
  DLogCmdType CmdType; 
  bool result; 

  CmdType = DLog_PeekNextCmdType(context);
  if ( CmdType != type )
    return 0;
  switch ( CmdType )
  {
    case DLOG_CMD_EVENT_END:
      ++context->position;
      result = 1;
      context->event = NULL;
      return result;
    case DLOG_CMD_ROW_END:
      if ( !context->rowArrayName[0] )
      {
        ++context->position;
        result = 1;
        context->row = NULL;
        return result;
      }
      break;
    case DLOG_CMD_ROW_ARRAY_END:
      if ( context->rowArrayName[0] )
      {
        *(_QWORD *)context->rowArrayName = 0i64;
        *(_QWORD *)&context->rowArrayName[8] = 0i64;
        *(_QWORD *)&context->rowArrayName[16] = 0i64;
        *(_QWORD *)&context->rowArrayName[24] = 0i64;
        *(_QWORD *)&context->rowArrayName[32] = 0i64;
        *(_QWORD *)&context->rowArrayName[40] = 0i64;
        *(_QWORD *)&context->rowArrayName[48] = 0i64;
        *(_QWORD *)&context->rowArrayName[56] = 0i64;
        context->row = NULL;
      }
      break;
  }
  ++context->position;
  return 1;
}

/*
==============
DLog_GetNextEvent
==============
*/
char DLog_GetNextEvent(DLogReadContext *context, DLogContext *eventContext, bool *sampled)
{
  __int64 position; 
  DLogCmd cmd; 

  DLog_Assert(context != NULL, "context", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_context.cpp", "DLog_GetNextEvent", 446);
  DLog_Assert(eventContext != NULL, "eventContext", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_context.cpp", "DLog_GetNextEvent", 447);
  DLog_Assert(sampled != NULL, "sampled", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_context.cpp", "DLog_GetNextEvent", 448);
  memset_0(eventContext, 0, sizeof(DLogContext));
  eventContext->userId = context->userId;
  position = context->position;
  if ( (int)position >= context->bufferSize )
    return 0;
  eventContext->buffer = &context->buffer[position];
  DLog_GetNextCmd(context, &cmd);
  DLog_Assert(cmd.type == DLOG_CMD_EVENT, "cmd.type == DLOG_CMD_EVENT", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_context.cpp", "DLog_GetNextEvent", 462);
  if ( cmd.type != DLOG_CMD_EVENT || (*sampled = cmd.event.sampled, DLog_GetNextCmdType(context, DLOG_CMD_EVENT_END)) )
  {
LABEL_18:
    if ( DLog_PeekNextCmdType(context) && DLog_PeekNextCmdType(context) != DLOG_CMD_EVENT )
      return 0;
    eventContext->position = LODWORD(context->buffer) + context->position - LODWORD(eventContext->buffer);
    return 1;
  }
  while ( 1 )
  {
    DLog_GetNextCmd(context, &cmd);
    if ( cmd.type == DLOG_CMD_COLUMN )
      goto LABEL_17;
    if ( cmd.type == DLOG_CMD_ROW )
    {
      while ( !DLog_GetNextCmdType(context, DLOG_CMD_ROW_END) )
        DLog_GetNextCmd(context, &cmd);
      goto LABEL_17;
    }
    if ( cmd.type == DLOG_CMD_ROW_ARRAY )
      break;
    if ( cmd.type != DLOG_CMD_BREAK )
    {
      DLog_PrintError("Unrecognized cmd.type %d in DLog_SkipEvent\n", (unsigned __int8)cmd.type);
      return 0;
    }
LABEL_17:
    if ( DLog_GetNextCmdType(context, DLOG_CMD_EVENT_END) )
      goto LABEL_18;
  }
  if ( DLog_GetNextCmdType(context, DLOG_CMD_ROW_ARRAY_END) )
    goto LABEL_17;
  while ( 1 )
  {
    DLog_GetNextCmd(context, &cmd);
    DLog_Assert(cmd.type == DLOG_CMD_ROW, "cmd.type == DLOG_CMD_ROW", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_context.cpp", "DLog_GetNextEvent", 486);
    if ( cmd.type != DLOG_CMD_ROW )
      return 0;
    while ( !DLog_GetNextCmdType(context, DLOG_CMD_ROW_END) )
      DLog_GetNextCmd(context, &cmd);
    if ( DLog_GetNextCmdType(context, DLOG_CMD_ROW_ARRAY_END) )
      goto LABEL_17;
  }
}

/*
==============
DLog_GetReadContextRemainingSize
==============
*/
__int64 DLog_GetReadContextRemainingSize(DLogReadContext *context)
{
  if ( context->error )
    return 0i64;
  else
    return (unsigned int)(context->bufferSize - context->position);
}

/*
==============
DLog_Int16
==============
*/
bool DLog_Int16(DLogContext *context, const char *name, __int16 value)
{
  __int64 position; 
  bool result; 

  if ( context->error || !DLog_WriteColumn(context, name, DLOG_TYPE_INT16) )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 2 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  *(_WORD *)&context->buffer[position] = value;
  result = 1;
  context->position += 2;
  return result;
}

/*
==============
DLog_Int16Array
==============
*/
bool DLog_Int16Array(DLogContext *context, const char *name, const __int16 *values, int valueCount)
{
  return DLog_Array(context, name, DLOG_TYPE_INT16, values, 2, valueCount);
}

/*
==============
DLog_Int32
==============
*/
bool DLog_Int32(DLogContext *context, const char *name, int value)
{
  __int64 position; 
  bool result; 

  if ( context->error || !DLog_WriteColumn(context, name, DLOG_TYPE_INT32) )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 4 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  *(_DWORD *)&context->buffer[position] = value;
  result = 1;
  context->position += 4;
  return result;
}

/*
==============
DLog_Int32Array
==============
*/
bool DLog_Int32Array(DLogContext *context, const char *name, const int *values, int valueCount)
{
  return DLog_Array(context, name, DLOG_TYPE_INT32, values, 4, valueCount);
}

/*
==============
DLog_Int64
==============
*/
char DLog_Int64(DLogContext *context, const char *name, __int64 value)
{
  __int64 position; 

  if ( context->error || !DLog_WriteColumn(context, name, DLOG_TYPE_INT64) )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 8 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  *(double *)&context->buffer[position] = *(double *)&value;
  context->position += 8;
  return 1;
}

/*
==============
DLog_Int64Array
==============
*/
bool DLog_Int64Array(DLogContext *context, const char *name, const __int64 *values, int valueCount)
{
  return DLog_Array(context, name, DLOG_TYPE_INT64, values, 8, valueCount);
}

/*
==============
DLog_Int8
==============
*/
bool DLog_Int8(DLogContext *context, const char *name, char value)
{
  __int64 position; 
  bool result; 

  if ( context->error || !DLog_WriteColumn(context, name, DLOG_TYPE_INT8) )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 1 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  context->buffer[position] = value;
  result = 1;
  ++context->position;
  return result;
}

/*
==============
DLog_Int8Array
==============
*/
bool DLog_Int8Array(DLogContext *context, const char *name, const char *values, int valueCount)
{
  return DLog_Array(context, name, DLOG_TYPE_INT8, values, 1, valueCount);
}

/*
==============
DLog_Int
==============
*/
bool DLog_Int(DLogContext *context, const char *name, __int64 value)
{
  const DLogColumn *Column; 
  DLogType type; 
  const char *v8; 
  const char *v9; 
  __int64 v10; 
  bool result; 
  __int64 v12; 
  __int64 position; 
  __int64 v14; 
  __int64 v15; 
  double v16; 

  if ( context->error )
    return 0;
  Column = DLog_FindColumn(context, name);
  if ( !Column )
  {
    DLog_ErrorNotAMember(context, name);
    return 0;
  }
  type = Column->type;
  if ( !DLog_IsDLogTypeInt(type) )
  {
    v8 = DLog_TypeToString(DLOG_TYPE_INT64);
    v9 = DLog_TypeToString(type);
    DLog_ErrorTypeMismatch(context, name, v9, v8);
    return 0;
  }
  if ( !DLog_WriteColumn(context, name, type) )
    return 0;
  switch ( type )
  {
    case DLOG_TYPE_INT8:
      if ( (unsigned __int64)(value + 128) > 0xFF )
      {
        DLog_ErrorIntRange(context, name, value, DLOG_TYPE_INT8);
        return 0;
      }
      goto LABEL_9;
    case DLOG_TYPE_INT16:
      if ( (unsigned __int64)(value + 0x8000) > 0xFFFF )
      {
        DLog_ErrorIntRange(context, name, value, DLOG_TYPE_INT16);
        return 0;
      }
      goto LABEL_14;
    case DLOG_TYPE_INT32:
      if ( (unsigned __int64)(value + 0x80000000i64) > 0xFFFFFFFF )
      {
        DLog_ErrorIntRange(context, name, value, DLOG_TYPE_INT32);
        return 0;
      }
      position = context->position;
      if ( context->bufferSize - (int)position >= 4 )
      {
LABEL_20:
        *(_DWORD *)&context->buffer[position] = value;
        result = 1;
        context->position += 4;
        return result;
      }
LABEL_29:
      DLog_ErrorOutOfMemory(context);
      return 0;
    case DLOG_TYPE_INT64:
      v14 = context->position;
      v16 = *(double *)&value;
      if ( context->bufferSize - (int)v14 < 8 )
        goto LABEL_29;
LABEL_24:
      *(double *)&context->buffer[v14] = v16;
      context->position += 8;
      return 1;
    case DLOG_TYPE_UINT8:
LABEL_9:
      v10 = context->position;
      if ( context->bufferSize - (int)v10 >= 1 )
      {
        context->buffer[v10] = value;
        result = 1;
        ++context->position;
        return result;
      }
      goto LABEL_29;
    case DLOG_TYPE_UINT16:
LABEL_14:
      v12 = context->position;
      if ( context->bufferSize - (int)v12 >= 2 )
      {
        *(_WORD *)&context->buffer[v12] = value;
        result = 1;
        context->position += 2;
        return result;
      }
      goto LABEL_29;
    case DLOG_TYPE_UINT32:
      position = context->position;
      if ( context->bufferSize - (int)position >= 4 )
        goto LABEL_20;
      goto LABEL_29;
    case DLOG_TYPE_UINT64:
      v14 = context->position;
      v16 = *(double *)&value;
      if ( context->bufferSize - (int)v14 < 8 )
        goto LABEL_29;
      goto LABEL_24;
    case DLOG_TYPE_BOOL:
      v15 = context->position;
      if ( context->bufferSize - (int)v15 < 1 )
        goto LABEL_29;
      context->buffer[v15] = value != 0;
      ++context->position;
      break;
  }
  return 1;
}

/*
==============
DLog_Null
==============
*/
bool DLog_Null(DLogContext *context, const char *name)
{
  return context->error == DLOG_ERROR_NONE && DLog_WriteColumn(context, name, DLOG_TYPE_NULL);
}

/*
==============
DLog_PeekEventName
==============
*/
char DLog_PeekEventName(const DLogContext *context, const char **eventName)
{
  unsigned __int8 *buffer; 

  buffer = context->buffer;
  if ( (*buffer & 0xF) != 1 )
    return 0;
  *eventName = (const char *)(buffer + 1);
  return 1;
}

/*
==============
DLog_PeekNextCmdType
==============
*/
DLogCmdType DLog_PeekNextCmdType(DLogReadContext *context)
{
  __int64 position; 
  char v2; 

  position = context->position;
  v2 = 0;
  if ( (int)position >= context->bufferSize )
    return v2;
  v2 = context->buffer[position] & 0xF;
  DLog_Assert((unsigned __int8)(v2 - 1) <= 7u, "cmdType > DLOG_CMD_INVALID && cmdType < DLOG_CMD_COUNT", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_context.cpp", "DLog_PeekNextCmdType", 201);
  if ( (unsigned __int8)(v2 - 1) <= 7u )
    return v2;
  else
    return 0;
}

/*
==============
DLog_String
==============
*/
bool DLog_String(DLogContext *context, const char *name, const char *value, bool coerce)
{
  const DLogEvent *event; 
  const DLogColumn *Column; 
  const DLogColumn *v10; 
  __int64 v12; 
  DLogEnum *enumRef; 
  __int64 v14; 
  int index; 

  if ( context->error )
    return 0;
  event = context->event;
  if ( (!event || !event->columnCount && !event->rowCount) && !context->row )
    goto LABEL_23;
  Column = DLog_FindColumn(context, name);
  v10 = Column;
  if ( !Column )
  {
    DLog_ErrorNotAMember(context, name);
    return 0;
  }
  if ( coerce && Column->type == 14 )
  {
    v12 = strtoull(value, NULL, 16);
    return DLog_Int(context, name, v12);
  }
  enumRef = Column->enumRef;
  if ( enumRef )
  {
    index = 0;
    if ( !DLog_HashTableFind(&enumRef->values, value, &index) )
    {
      DLog_Error(context, name, "Invalid enum name", "'%s' is not valid for enum '%s'\n", value, v10->enumRef->name);
      return 0;
    }
    return DLog_Int(context, name, index);
  }
  else
  {
LABEL_23:
    if ( !DLog_WriteColumn(context, name, DLOG_TYPE_STRING) )
      return 0;
    v14 = -1i64;
    while ( value[++v14] != 0 )
      ;
    return DLog_Write(context, value, v14 + 1) != 0;
  }
}

/*
==============
DLog_StringArray
==============
*/
bool DLog_StringArray(DLogContext *context, const char *name, const char **values, int valueCount)
{
  const DLogEvent *event; 
  bool result; 
  int v10; 
  int position; 
  const char *v12; 
  __int64 v13; 
  int v14; 
  int arrayIndex; 
  int *arraySize; 

  if ( context->error || !DLog_BeginArray(context, name) )
    return 0;
  *context->arrayType = DLOG_TYPE_STRING|0x80;
  event = context->event;
  if ( (event && event->columnCount && event->rowCount || context->row) && !DLog_FindColumn(context, name) )
  {
    DLog_ErrorNotAMember(context, name);
    return 0;
  }
  v10 = 0;
  if ( valueCount > 0 )
  {
    position = context->position;
    while ( 1 )
    {
      v12 = *values;
      v13 = -1i64;
      do
        ++v13;
      while ( v12[v13] );
      v14 = v13 + 1;
      if ( context->bufferSize - position < v14 )
        break;
      memcpy_0(&context->buffer[position], v12, v14);
      position = context->position + v14;
      context->position = position;
      if ( !v14 )
        return 0;
      ++context->arrayIndex;
      ++v10;
      ++values;
      if ( v10 >= valueCount )
        goto LABEL_17;
    }
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
LABEL_17:
  if ( context->error )
    return 0;
  context->arrayColumn = NULL;
  context->arrayName[0] = 0;
  arrayIndex = context->arrayIndex;
  arraySize = context->arraySize;
  context->arrayType = NULL;
  *arraySize = arrayIndex;
  result = 1;
  context->arraySize = NULL;
  context->arrayIndex = 0;
  return result;
}

/*
==============
DLog_UInt16
==============
*/
bool DLog_UInt16(DLogContext *context, const char *name, unsigned __int16 value)
{
  __int64 position; 
  bool result; 

  if ( context->error || !DLog_WriteColumn(context, name, DLOG_TYPE_UINT16) )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 2 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  *(_WORD *)&context->buffer[position] = value;
  result = 1;
  context->position += 2;
  return result;
}

/*
==============
DLog_UInt16Array
==============
*/
bool DLog_UInt16Array(DLogContext *context, const char *name, const unsigned __int16 *values, int valueCount)
{
  return DLog_Array(context, name, DLOG_TYPE_UINT16, values, 2, valueCount);
}

/*
==============
DLog_UInt32
==============
*/
bool DLog_UInt32(DLogContext *context, const char *name, unsigned int value)
{
  __int64 position; 
  bool result; 

  if ( context->error || !DLog_WriteColumn(context, name, DLOG_TYPE_UINT32) )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 4 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  *(_DWORD *)&context->buffer[position] = value;
  result = 1;
  context->position += 4;
  return result;
}

/*
==============
DLog_UInt32Array
==============
*/
bool DLog_UInt32Array(DLogContext *context, const char *name, const unsigned int *values, int valueCount)
{
  return DLog_Array(context, name, DLOG_TYPE_UINT32, values, 4, valueCount);
}

/*
==============
DLog_UInt64
==============
*/
char DLog_UInt64(DLogContext *context, const char *name, unsigned __int64 value)
{
  __int64 position; 

  if ( context->error || !DLog_WriteColumn(context, name, DLOG_TYPE_UINT64) )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 8 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  *(double *)&context->buffer[position] = *(double *)&value;
  context->position += 8;
  return 1;
}

/*
==============
DLog_UInt64Array
==============
*/
bool DLog_UInt64Array(DLogContext *context, const char *name, const unsigned __int64 *values, int valueCount)
{
  return DLog_Array(context, name, DLOG_TYPE_UINT64, values, 8, valueCount);
}

/*
==============
DLog_UInt8
==============
*/
bool DLog_UInt8(DLogContext *context, const char *name, unsigned __int8 value)
{
  __int64 position; 
  bool result; 

  if ( context->error || !DLog_WriteColumn(context, name, DLOG_TYPE_UINT8) )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 1 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  context->buffer[position] = value;
  result = 1;
  ++context->position;
  return result;
}

/*
==============
DLog_UInt8Array
==============
*/
bool DLog_UInt8Array(DLogContext *context, const char *name, const unsigned __int8 *values, int valueCount)
{
  const DLogColumn *column; 
  __int64 position; 

  column = context->column;
  if ( !column )
  {
    column = DLog_FindColumn(context, name);
    if ( !column )
      return DLog_Array(context, name, DLOG_TYPE_UINT8, values, 1, valueCount);
  }
  if ( column->type != 16 )
    return DLog_Array(context, name, DLOG_TYPE_UINT8, values, 1, valueCount);
  if ( context->error || !DLog_WriteColumn(context, name, DLOG_TYPE_BYTES) )
    return 0;
  position = context->position;
  if ( context->bufferSize - (int)position < 4 )
  {
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  *(_DWORD *)&context->buffer[position] = valueCount;
  context->position += 4;
  return DLog_Write(context, values, valueCount) != 0;
}

/*
==============
DLog_Write
==============
*/
__int64 DLog_Write(DLogContext *context, const void *data, int dataSize)
{
  __int64 position; 

  position = context->position;
  if ( context->bufferSize - (int)position >= dataSize )
  {
    memcpy_0(&context->buffer[position], data, dataSize);
    context->position += dataSize;
    return (unsigned int)dataSize;
  }
  else
  {
    DLog_ErrorOutOfMemory(context);
    return 0i64;
  }
}

/*
==============
DLog_WriteColumn
==============
*/
char DLog_WriteColumn(DLogContext *context, const char *name, DLogType type)
{
  const DLogEvent *event; 
  const DLogColumn *column; 
  const char *v9; 
  int v10; 
  int v11; 
  __int64 position; 
  __int64 v13; 
  __int64 v15; 
  const char *v16; 
  DLogType v17; 
  int arrayIndex; 
  DLogType *arrayType; 
  const DLogColumn *v20; 
  const DLogRow *row; 
  const DLogColumn *v22; 
  const char *v23; 
  const char *v24; 
  const DLogEvent *v25; 

  if ( !context->eventName[0] )
  {
    DLog_ErrorUnexpected(context, name, "Unexpected Column while context is not inside an event");
    return 0;
  }
  if ( !context->row && context->rowArrayName[0] && !DLog_EndRowArray(context) )
    return 0;
  event = context->event;
  if ( event && (event->columnCount || event->rowCount) || context->row )
  {
    column = context->column;
    if ( !column )
    {
      column = DLog_FindColumn(context, name);
      context->column = column;
    }
    if ( context->arrayColumn )
      column = context->arrayColumn;
    if ( !column )
    {
      DLog_ErrorNotAMember(context, name);
      return 0;
    }
    v9 = column->name;
    do
    {
      v10 = (unsigned __int8)v9[name - column->name];
      v11 = *(unsigned __int8 *)v9 - v10;
      if ( v11 )
        break;
      ++v9;
    }
    while ( v10 );
    if ( v11 )
    {
      DLog_ErrorUnexpectedMember(context, column->name, name);
      return 0;
    }
    if ( type == DLOG_TYPE_ARRAY )
    {
      if ( column->arrayCount > 0 )
        goto LABEL_23;
    }
    else if ( column->type == (unsigned __int8)type )
    {
      goto LABEL_23;
    }
    v16 = DLog_TypeToString(type);
    v17 = column->type;
LABEL_44:
    v23 = v16;
    v24 = DLog_TypeToString(v17);
    DLog_ErrorTypeMismatch(context, name, v24, v23);
    return 0;
  }
LABEL_23:
  if ( context->arrayName[0] )
    goto LABEL_33;
  position = context->position;
  if ( context->bufferSize - (int)position < 1 )
  {
LABEL_29:
    DLog_ErrorOutOfMemory(context);
    return 0;
  }
  context->buffer[position] = 4;
  v13 = -1i64;
  ++context->position;
  while ( name[++v13] != 0 )
    ;
  if ( !(unsigned int)DLog_Write(context, name, (int)v13 + 1) )
    return 0;
  v15 = context->position;
  if ( context->bufferSize - (int)v15 < 1 )
    goto LABEL_29;
  context->buffer[v15] = type;
  ++context->position;
  if ( context->arrayName[0] )
  {
LABEL_33:
    arrayIndex = context->arrayIndex;
    arrayType = context->arrayType;
    if ( !arrayIndex )
    {
      *arrayType = type | 0x80;
      arrayIndex = context->arrayIndex;
LABEL_35:
      context->arrayIndex = arrayIndex + 1;
      goto LABEL_36;
    }
    if ( type == (*arrayType & 0x7F) )
      goto LABEL_35;
    v16 = DLog_TypeToString(type);
    v17 = *context->arrayType & 0x7F;
    goto LABEL_44;
  }
LABEL_36:
  v20 = context->column;
  if ( !v20 || context->arrayColumn && context->arrayIndex )
    return 1;
  row = context->row;
  v22 = v20 + 1;
  context->column = v22;
  if ( row )
  {
    if ( v22 - row->columns < row->columnCount )
      return 1;
  }
  else
  {
    v25 = context->event;
    if ( !v25 || v22 - v25->columns < v25->columnCount )
      return 1;
  }
  context->column = NULL;
  return 1;
}

