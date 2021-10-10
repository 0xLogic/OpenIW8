/*
==============
DLog_GetEventThrottleTimeMilliseconds
==============
*/

int __fastcall DLog_GetEventThrottleTimeMilliseconds(const char *name, int throttleTime)
{
  return ?DLog_GetEventThrottleTimeMilliseconds@@YAHPEBDH@Z(name, throttleTime);
}

/*
==============
DLog_ErrorFatal
==============
*/

void DLog_ErrorFatal(const char *fmt, ...)
{
  ?DLog_ErrorFatal@@YAXPEBDZZ(fmt);
}

/*
==============
DLog_Free
==============
*/

void __fastcall DLog_Free(void *p)
{
  ?DLog_Free@@YAXPEAX@Z(p);
}

/*
==============
DLog_GetEventSampleRate
==============
*/

double __fastcall DLog_GetEventSampleRate(const char *name, float sampleRate)
{
  double result; 

  *(float *)&result = ?DLog_GetEventSampleRate@@YAMPEBDM@Z(name, sampleRate);
  return result;
}

/*
==============
DLog_IsUserInGroup
==============
*/

bool __fastcall DLog_IsUserInGroup(unsigned __int64 userId, const char *name)
{
  return ?DLog_IsUserInGroup@@YA_N_KPEBD@Z(userId, name);
}

/*
==============
DLog_IsEventSampled
==============
*/

bool __fastcall DLog_IsEventSampled(unsigned __int64 userId, const DLogEvent *event)
{
  return ?DLog_IsEventSampled@@YA_N_KPEBUDLogEvent@@@Z(userId, event);
}

/*
==============
DLog_TempAlloc
==============
*/

void *__fastcall DLog_TempAlloc(unsigned __int64 size)
{
  return ?DLog_TempAlloc@@YAPEAX_K@Z(size);
}

/*
==============
DLog_ErrorUnexpectedEnd
==============
*/

void __fastcall DLog_ErrorUnexpectedEnd(DLogContext *context)
{
  ?DLog_ErrorUnexpectedEnd@@YAXPEAUDLogContext@@@Z(context);
}

/*
==============
DLog_FindColumn
==============
*/

const DLogColumn *__fastcall DLog_FindColumn(const DLogContext *context, const char *name)
{
  return ?DLog_FindColumn@@YAPEBUDLogColumn@@PEBUDLogContext@@PEBD@Z(context, name);
}

/*
==============
DLog_HashTableAdd
==============
*/

bool __fastcall DLog_HashTableAdd(DLogHashTable *table, const char *name, int index)
{
  return ?DLog_HashTableAdd@@YA_NPEAUDLogHashTable@@PEBDH@Z(table, name, index);
}

/*
==============
DLog_Microseconds
==============
*/

unsigned __int64 __fastcall DLog_Microseconds()
{
  return ?DLog_Microseconds@@YA_KXZ();
}

/*
==============
DLog_LeaveCriticalSection
==============
*/

void __fastcall DLog_LeaveCriticalSection(DLogCriticalSection id)
{
  ?DLog_LeaveCriticalSection@@YAXW4DLogCriticalSection@@@Z(id);
}

/*
==============
DLog_SetMainThread
==============
*/

void DLog_SetMainThread(void)
{
  ?DLog_SetMainThread@@YAXXZ();
}

/*
==============
DLog_IsDLogTypeInt
==============
*/

bool __fastcall DLog_IsDLogTypeInt(const DLogType type)
{
  return ?DLog_IsDLogTypeInt@@YA_NW4DLogType@@@Z(type);
}

/*
==============
DLog_IsChannelReady
==============
*/

bool __fastcall DLog_IsChannelReady(const DLogChannel *channel)
{
  return ?DLog_IsChannelReady@@YA_NPEBUDLogChannel@@@Z(channel);
}

/*
==============
DLog_Error
==============
*/

void DLog_Error(DLogContext *context, const char *member, const char *message, const char *fmt, ...)
{
  ?DLog_Error@@YAXPEAUDLogContext@@PEBD11ZZ(context, member, message, fmt);
}

/*
==============
DLog_ErrorIncompleteEvent
==============
*/

void __fastcall DLog_ErrorIncompleteEvent(DLogContext *context)
{
  ?DLog_ErrorIncompleteEvent@@YAXPEAUDLogContext@@@Z(context);
}

/*
==============
DLog_HashTableSort
==============
*/

void __fastcall DLog_HashTableSort(DLogHashTable *table)
{
  ?DLog_HashTableSort@@YAXPEAUDLogHashTable@@@Z(table);
}

/*
==============
DLog_HashTableCreate
==============
*/

void __fastcall DLog_HashTableCreate(DLogHashTable *table, DLogHash *list, int listSize)
{
  ?DLog_HashTableCreate@@YAXPEAUDLogHashTable@@PEAUDLogHash@@H@Z(table, list, listSize);
}

/*
==============
DLog_GetEventSampleType
==============
*/

DLogSampleType __fastcall DLog_GetEventSampleType(const char *name, DLogSampleType sampleType)
{
  return ?DLog_GetEventSampleType@@YA?AW4DLogSampleType@@PEBDW41@@Z(name, sampleType);
}

/*
==============
DLog_IsChannelActive
==============
*/

bool __fastcall DLog_IsChannelActive(const char *name, bool active)
{
  return ?DLog_IsChannelActive@@YA_NPEBD_N@Z(name, active);
}

/*
==============
DLog_ErrorTypeMismatch
==============
*/

void __fastcall DLog_ErrorTypeMismatch(DLogContext *context, const char *member, const char *expected, const char *found)
{
  ?DLog_ErrorTypeMismatch@@YAXPEAUDLogContext@@PEBD11@Z(context, member, expected, found);
}

/*
==============
DLog_GetEventThrottleCount
==============
*/

int __fastcall DLog_GetEventThrottleCount(const char *name, int throttleCount)
{
  return ?DLog_GetEventThrottleCount@@YAHPEBDH@Z(name, throttleCount);
}

/*
==============
DLog_ErrorTruncatedArray
==============
*/

void __fastcall DLog_ErrorTruncatedArray(DLogContext *context, const char *member, int expected, int found)
{
  ?DLog_ErrorTruncatedArray@@YAXPEAUDLogContext@@PEBDHH@Z(context, member, expected, found);
}

/*
==============
DLog_GetEventChannelSample
==============
*/

DLogSample __fastcall DLog_GetEventChannelSample(const char *name, const char *channel, DLogEnv env, DLogSample sample)
{
  return ?DLog_GetEventChannelSample@@YA?AW4DLogSample@@PEBD0W4DLogEnv@@W41@@Z(name, channel, env, sample);
}

/*
==============
DLog_GetFirstPartyAccountTypeFromString
==============
*/

DLogFirstPartyAccountType __fastcall DLog_GetFirstPartyAccountTypeFromString(const char *accountTypeString)
{
  return ?DLog_GetFirstPartyAccountTypeFromString@@YA?AW4DLogFirstPartyAccountType@@PEBD@Z(accountTypeString);
}

/*
==============
DLog_AssertMsg
==============
*/

void __fastcall DLog_AssertMsg(bool expr, const char *exprString, const char *file, const char *function, int line, const char *msg)
{
  ?DLog_AssertMsg@@YAX_NPEBD11H1@Z(expr, exprString, file, function, line, msg);
}

/*
==============
DLog_ErrorNotAMember
==============
*/

void __fastcall DLog_ErrorNotAMember(DLogContext *context, const char *member)
{
  ?DLog_ErrorNotAMember@@YAXPEAUDLogContext@@PEBD@Z(context, member);
}

/*
==============
DLog_Milliseconds
==============
*/

int __fastcall DLog_Milliseconds()
{
  return ?DLog_Milliseconds@@YAHXZ();
}

/*
==============
DLog_TempFree
==============
*/

void __fastcall DLog_TempFree(void *p)
{
  ?DLog_TempFree@@YAXPEAX@Z(p);
}

/*
==============
DLog_TypeToString
==============
*/

const char *__fastcall DLog_TypeToString(DLogType type)
{
  return ?DLog_TypeToString@@YAPEBDW4DLogType@@@Z(type);
}

/*
==============
DLog_GetChannelBufferTimeMilliseconds
==============
*/

int __fastcall DLog_GetChannelBufferTimeMilliseconds(const char *name, int bufferTime)
{
  return ?DLog_GetChannelBufferTimeMilliseconds@@YAHPEBDH@Z(name, bufferTime);
}

/*
==============
DLog_IsMetricsActive
==============
*/

bool __fastcall DLog_IsMetricsActive()
{
  return ?DLog_IsMetricsActive@@YA_NXZ();
}

/*
==============
DLog_GetTrulyRandom
==============
*/

bool __fastcall DLog_GetTrulyRandom(void *bytes, unsigned __int64 byteCount)
{
  return ?DLog_GetTrulyRandom@@YA_NPEAX_K@Z(bytes, byteCount);
}

/*
==============
DLog_ErrorIncompleteRow
==============
*/

void __fastcall DLog_ErrorIncompleteRow(DLogContext *context)
{
  ?DLog_ErrorIncompleteRow@@YAXPEAUDLogContext@@@Z(context);
}

/*
==============
DLog_FindRow
==============
*/

const DLogRow *__fastcall DLog_FindRow(const DLogEvent *event, const char *name)
{
  return ?DLog_FindRow@@YAPEBUDLogRow@@PEBUDLogEvent@@PEBD@Z(event, name);
}

/*
==============
DLog_ShutdownTrulyRandom
==============
*/

bool __fastcall DLog_ShutdownTrulyRandom()
{
  return ?DLog_ShutdownTrulyRandom@@YA_NXZ();
}

/*
==============
DLog_ErrorUnexpectedMember
==============
*/

void __fastcall DLog_ErrorUnexpectedMember(DLogContext *context, const char *expected, const char *found)
{
  ?DLog_ErrorUnexpectedMember@@YAXPEAUDLogContext@@PEBD1@Z(context, expected, found);
}

/*
==============
DLog_HashTableFind
==============
*/

bool __fastcall DLog_HashTableFind(const DLogHashTable *table, const char *name, int *index)
{
  return ?DLog_HashTableFind@@YA_NPEBUDLogHashTable@@PEBDPEAH@Z(table, name, index);
}

/*
==============
DLog_GetUnoIdFromUserId
==============
*/

unsigned __int64 __fastcall DLog_GetUnoIdFromUserId(unsigned __int64 userId)
{
  return ?DLog_GetUnoIdFromUserId@@YA_K_K@Z(userId);
}

/*
==============
DLog_TypeFromString
==============
*/

DLogType __fastcall DLog_TypeFromString(const char *type)
{
  return ?DLog_TypeFromString@@YA?AW4DLogType@@PEBD@Z(type);
}

/*
==============
DLog_ErrorContextOutOfMemory
==============
*/

void __fastcall DLog_ErrorContextOutOfMemory(DLogContext *context, int size)
{
  ?DLog_ErrorContextOutOfMemory@@YAXPEAUDLogContext@@H@Z(context, size);
}

/*
==============
DLog_PrintWarning
==============
*/

void DLog_PrintWarning(const char *fmt, ...)
{
  ?DLog_PrintWarning@@YAXPEBDZZ(fmt);
}

/*
==============
DLog_strcpy
==============
*/

void __fastcall DLog_strcpy(char *dest, const unsigned __int64 destSize, const char *src)
{
  ?DLog_strcpy@@YAXPEAD_KPEBD@Z(dest, destSize, src);
}

/*
==============
DLog_sprintf
==============
*/

unsigned __int64 DLog_sprintf(char *dest, unsigned __int64 destSize, const char *const fmt, ...)
{
  return ?DLog_sprintf@@YA_KPEAD_KQEBDZZ(dest, destSize, fmt);
}

/*
==============
DLog_IsActive
==============
*/

bool __fastcall DLog_IsActive()
{
  return ?DLog_IsActive@@YA_NXZ();
}

/*
==============
DLog_EnterCriticalSection
==============
*/

void __fastcall DLog_EnterCriticalSection(DLogCriticalSection id)
{
  ?DLog_EnterCriticalSection@@YAXW4DLogCriticalSection@@@Z(id);
}

/*
==============
DLog_FindEvent
==============
*/

const DLogEvent *__fastcall DLog_FindEvent(const DLogSchema *schema, const char *name)
{
  return ?DLog_FindEvent@@YAPEBUDLogEvent@@PEBUDLogSchema@@PEBD@Z(schema, name);
}

/*
==============
DLog_GetEnv
==============
*/

DLogEnv __fastcall DLog_GetEnv()
{
  return ?DLog_GetEnv@@YA?AW4DLogEnv@@XZ();
}

/*
==============
DLog_Print
==============
*/

void __fastcall DLog_Print(DLogPrintType type, const char *fmt, char *args)
{
  ?DLog_Print@@YAXW4DLogPrintType@@PEBDPEAD@Z(type, fmt, args);
}

/*
==============
DLog_GetUTC
==============
*/

unsigned int __fastcall DLog_GetUTC()
{
  return ?DLog_GetUTC@@YAIXZ();
}

/*
==============
DLog_ErrorUnexpected
==============
*/

void __fastcall DLog_ErrorUnexpected(DLogContext *context, const char *member, const char *msg)
{
  ?DLog_ErrorUnexpected@@YAXPEAUDLogContext@@PEBD1@Z(context, member, msg);
}

/*
==============
DLog_GetFirstPartyUserIdFromUserId
==============
*/

unsigned __int64 __fastcall DLog_GetFirstPartyUserIdFromUserId(unsigned __int64 userId)
{
  return ?DLog_GetFirstPartyUserIdFromUserId@@YA_K_K@Z(userId);
}

/*
==============
DLog_ErrorIntRange
==============
*/

void __fastcall DLog_ErrorIntRange(DLogContext *context, const char *member, __int64 value, DLogType type)
{
  ?DLog_ErrorIntRange@@YAXPEAUDLogContext@@PEBD_JW4DLogType@@@Z(context, member, value, type);
}

/*
==============
DLog_atoi64hex
==============
*/

__int64 __fastcall DLog_atoi64hex(const char *str)
{
  return ?DLog_atoi64hex@@YA_JPEBD@Z(str);
}

/*
==============
DLog_strncpy
==============
*/

void __fastcall DLog_strncpy(char *dest, const unsigned __int64 destSize, const char *src, const unsigned __int64 srcSize)
{
  ?DLog_strncpy@@YAXPEAD_KPEBD1@Z(dest, destSize, src, srcSize);
}

/*
==============
DLog_Assert
==============
*/

void __fastcall DLog_Assert(bool expr, const char *exprString, const char *file, const char *function, int line)
{
  ?DLog_Assert@@YAX_NPEBD11H@Z(expr, exprString, file, function, line);
}

/*
==============
DLog_Assert
==============
*/

void DLog_Assert(bool expr, const char *exprString, const char *file, const char *function, int line, const char *fmt, ...)
{
  ?DLog_Assert@@YAX_NPEBD11H1ZZ(expr, exprString, file, function, line, fmt);
}

/*
==============
DLog_AddMetric
==============
*/

void __fastcall DLog_AddMetric(const char *name, unsigned __int64 count, unsigned __int64 bytes, unsigned __int64 timeMicroseconds)
{
  ?DLog_AddMetric@@YAXPEBD_K11@Z(name, count, bytes, timeMicroseconds);
}

/*
==============
DLog_HashString
==============
*/

unsigned int __fastcall DLog_HashString(const char *str)
{
  return ?DLog_HashString@@YAIPEBD@Z(str);
}

/*
==============
DLog_IsEventActive
==============
*/

bool __fastcall DLog_IsEventActive(const char *name, bool active)
{
  return ?DLog_IsEventActive@@YA_NPEBD_N@Z(name, active);
}

/*
==============
DLog_ErrorEventRequiresSchema
==============
*/

void __fastcall DLog_ErrorEventRequiresSchema(DLogContext *context, const char *name)
{
  ?DLog_ErrorEventRequiresSchema@@YAXPEAUDLogContext@@PEBD@Z(context, name);
}

/*
==============
DLog_ErrorOutOfMemory
==============
*/

void __fastcall DLog_ErrorOutOfMemory(DLogContext *context)
{
  ?DLog_ErrorOutOfMemory@@YAXPEAUDLogContext@@@Z(context);
}

/*
==============
DLog_IsMainThread
==============
*/

bool __fastcall DLog_IsMainThread()
{
  return ?DLog_IsMainThread@@YA_NXZ();
}

/*
==============
DLog_EpochTime
==============
*/

unsigned __int64 __fastcall DLog_EpochTime()
{
  return ?DLog_EpochTime@@YA_KXZ();
}

/*
==============
DLog_IsEndpointActive
==============
*/

bool __fastcall DLog_IsEndpointActive(const char *name, bool active)
{
  return ?DLog_IsEndpointActive@@YA_NPEBD_N@Z(name, active);
}

/*
==============
DLog_Alloc
==============
*/

void *__fastcall DLog_Alloc(unsigned __int64 size)
{
  return ?DLog_Alloc@@YAPEAX_K@Z(size);
}

/*
==============
DLog_PrintInfo
==============
*/

void DLog_PrintInfo(const char *fmt, ...)
{
  ?DLog_PrintInfo@@YAXPEBDZZ(fmt);
}

/*
==============
DLog_PrintError
==============
*/

void DLog_PrintError(const char *fmt, ...)
{
  ?DLog_PrintError@@YAXPEBDZZ(fmt);
}

/*
==============
DLog_vsprintf
==============
*/

unsigned __int64 __fastcall DLog_vsprintf(char *dest, unsigned __int64 destSize, const char *const fmt, char *vargs)
{
  return ?DLog_vsprintf@@YA_KPEAD_KQEBD0@Z(dest, destSize, fmt, vargs);
}

/*
==============
DLog_InitTrulyRandom
==============
*/

bool __fastcall DLog_InitTrulyRandom()
{
  return ?DLog_InitTrulyRandom@@YA_NXZ();
}

/*
==============
DLog_AddMetric
==============
*/
void DLog_AddMetric(const char *name, unsigned __int64 count, unsigned __int64 bytes, unsigned __int64 timeMicroseconds)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  Hooks->AddMetric((DLogHooks *)Hooks, name, count, bytes, timeMicroseconds);
}

/*
==============
DLog_Alloc
==============
*/
__int64 DLog_Alloc(unsigned __int64 size)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  return (__int64)Hooks->Alloc(Hooks, size);
}

/*
==============
DLog_Assert
==============
*/
void DLog_Assert(bool expr, const char *exprString, const char *file, const char *function, int line, const char *fmt, ...)
{
  unsigned __int64 *v9; 
  const DLogHooks *Hooks; 
  char Buffer[1024]; 
  va_list va; 

  va_start(va, fmt);
  if ( !expr )
  {
    v9 = j___local_stdio_printf_options();
    __stdio_common_vsprintf(*v9 | 2, Buffer, 0x400ui64, fmt, NULL, va);
    Hooks = DLog_GetHooks();
    Hooks->Assert((DLogHooks *)Hooks, 0, exprString, file, function, line, Buffer);
  }
}

/*
==============
DLog_Assert
==============
*/
void DLog_Assert(bool expr, const char *exprString, const char *file, const char *function, int line)
{
  DLog_Assert(expr, exprString, file, function, line, (const char *)&queryFormat.fmt + 3);
}

/*
==============
DLog_AssertMsg
==============
*/
void DLog_AssertMsg(bool expr, const char *exprString, const char *file, const char *function, int line, const char *msg)
{
  DLog_Assert(expr, exprString, file, function, line, msg);
}

/*
==============
DLog_CompareHash
==============
*/
__int64 DLog_CompareHash(const void *elem1, const void *elem2)
{
  __int64 result; 

  if ( (unsigned int)*(_QWORD *)elem1 == (unsigned int)*(_QWORD *)elem2 )
    return 0i64;
  result = 1i64;
  if ( (unsigned int)*(_QWORD *)elem1 < (unsigned int)*(_QWORD *)elem2 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
DLog_EnterCriticalSection
==============
*/
void DLog_EnterCriticalSection(DLogCriticalSection id)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  Hooks->EnterCriticalSection((DLogHooks *)Hooks, id);
}

/*
==============
DLog_EpochTime
==============
*/
__int64 DLog_EpochTime()
{
  return Xtime_get_ticks_0() / 10;
}

/*
==============
DLog_Error
==============
*/
void DLog_Error(DLogContext *context, const char *member, const char *message, const char *fmt, ...)
{
  va_list va; 

  va_start(va, fmt);
  DLog_ErrorVA(context, member, message, fmt, va);
}

/*
==============
DLog_ErrorContextOutOfMemory
==============
*/
void DLog_ErrorContextOutOfMemory(DLogContext *context, int size)
{
  int v4; 
  int bufferSize; 

  bufferSize = context->bufferSize;
  v4 = bufferSize - context->position;
  context->rowName[0] = 0;
  DLog_Error(context, NULL, "context out of memory", "failed to write %d bytes to context with %d / %d bytes free\n", size, v4, bufferSize);
  context->error = DLOG_ERROR_OUT_OF_MEMORY;
}

/*
==============
DLog_ErrorEventRequiresSchema
==============
*/
void DLog_ErrorEventRequiresSchema(DLogContext *context, const char *name)
{
  DLogContext *v3; 
  const DLogSchema *Schema; 
  __int64 v5; 
  int v6; 
  int v7; 
  __int64 v8; 
  const char **p_name; 
  char *v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  const char **v15; 
  __int64 v16; 
  __int64 v17; 
  const char *v18; 
  int index; 

  context->error = DLOG_ERROR_SCHEMA_NOT_FOUND;
  v3 = context;
  Schema = DLog_GetSchema();
  if ( DLog_HashTableFind(&Schema->eventHashTable, name, &index) )
  {
    v5 = (__int64)&Schema->events[index];
  }
  else
  {
    v5 = 0i64;
    v6 = 0;
    v7 = -1;
    if ( Schema->eventCount > 0 )
    {
      v8 = 0i64;
      do
      {
        p_name = &Schema->events[v8].name;
        v10 = strchr_0(*p_name, 42);
        if ( v10 )
        {
          v11 = (_DWORD)v10 - *(_DWORD *)p_name;
          if ( v11 > v7 && !strncmp(name, *p_name, v11) )
          {
            v7 = v11;
            v5 = (__int64)p_name;
          }
        }
        ++v6;
        ++v8;
      }
      while ( v6 < Schema->eventCount );
    }
    v3 = context;
  }
  if ( v5 )
  {
    v12 = 0;
    if ( *(int *)(v5 + 80) > 0 )
    {
      v13 = 0i64;
      do
      {
        v14 = 0;
        v15 = *(const char ***)(v13 + *(_QWORD *)(v5 + 72));
        if ( *((int *)v15 + 4) > 0 )
        {
          v16 = 0i64;
          do
          {
            v17 = *(_QWORD *)&v15[1][v16];
            if ( *(_BYTE *)v17 )
              DLog_Error(v3, name, "schema required", "Missing schema definition for event '%s' using channel '%s' using serializer '%s' which requires a schema definition\n", name, *v15, *(const char **)(v17 + 8));
            ++v14;
            v16 += 8i64;
          }
          while ( v14 < *((_DWORD *)v15 + 4) );
        }
        v18 = v15[5];
        if ( *v18 )
          DLog_Error(v3, name, "schema required", "Missing schema definition for event '%s' using channel '%s' using endpoint '%s' which requires a schema definition\n", name, *v15, *((const char **)v18 + 1));
        ++v12;
        v13 += 24i64;
      }
      while ( v12 < *(_DWORD *)(v5 + 80) );
    }
  }
  else
  {
    DLog_Error(v3, name, "requires schema", "Event not found %s!\n", name);
  }
}

/*
==============
DLog_ErrorFatal
==============
*/
void DLog_ErrorFatal(const char *fmt, ...)
{
  unsigned __int64 *v1; 
  const DLogHooks *Hooks; 
  char Buffer[1024]; 
  char dest[1024]; 
  va_list va; 

  va_start(va, fmt);
  DLog_ErrorVA(NULL, NULL, "fatal error", fmt, va);
  v1 = j___local_stdio_printf_options();
  __stdio_common_vsprintf(*v1 | 2, Buffer, 0x400ui64, fmt, NULL, va);
  DLog_sprintf<1024>((char (*)[1024])dest, "DLog %s\n", Buffer);
  Hooks = DLog_GetHooks();
  Hooks->ErrorFatal((DLogHooks *)Hooks, dest);
}

/*
==============
DLog_ErrorIncompleteEvent
==============
*/
void DLog_ErrorIncompleteEvent(DLogContext *context)
{
  DLog_Error(context, NULL, "event not ended", "\n");
  context->error = DLOG_ERROR_UNFINISHED_EVENT;
}

/*
==============
DLog_ErrorIncompleteRow
==============
*/
void DLog_ErrorIncompleteRow(DLogContext *context)
{
  DLog_Error(context, NULL, "row not ended", "\n");
  context->error = DLOG_ERROR_UNFINISHED_ROW;
}

/*
==============
DLog_ErrorIntRange
==============
*/
void DLog_ErrorIntRange(DLogContext *context, const char *member, __int64 value, DLogType type)
{
  DLog_Error(context, member, "value out of range", "value %lld outside range of type %s\n", value, s_dlogTypeNames[(unsigned __int8)type]);
  context->error = DLOG_ERROR_TYPE_MISMATCH;
}

/*
==============
DLog_ErrorNotAMember
==============
*/
void DLog_ErrorNotAMember(DLogContext *context, const char *member)
{
  DLog_Error(context, member, "not a member", "\n");
  context->error = DLOG_ERROR_MEMBER_NOT_FOUND;
}

/*
==============
DLog_ErrorOutOfMemory
==============
*/
void DLog_ErrorOutOfMemory(DLogContext *context)
{
  int bufferSize; 

  bufferSize = context->bufferSize;
  context->rowName[0] = 0;
  DLog_Error(context, NULL, "out of memory", "failed to allocate %d bytes\n", bufferSize);
  context->error = DLOG_ERROR_OUT_OF_MEMORY;
}

/*
==============
DLog_ErrorTruncatedArray
==============
*/
void DLog_ErrorTruncatedArray(DLogContext *context, const char *member, int expected, int found)
{
  DLog_Error(context, member, "array value truncated", "array size %d exceeds maximum of %d\n", found, expected);
  context->error = DLOG_ERROR_ARRAY_TRUNCATED;
}

/*
==============
DLog_ErrorTypeMismatch
==============
*/
void DLog_ErrorTypeMismatch(DLogContext *context, const char *member, const char *expected, const char *found)
{
  DLog_Error(context, member, "type mismatch", "expected type %s but found type %s\n", expected, found);
  context->error = DLOG_ERROR_TYPE_MISMATCH;
}

/*
==============
DLog_ErrorUnexpected
==============
*/
void DLog_ErrorUnexpected(DLogContext *context, const char *member, const char *msg)
{
  DLog_Error(context, member, "unexpected field", "%s\n", msg);
  context->error = DLOG_ERROR_UNEXPECTED;
}

/*
==============
DLog_ErrorUnexpectedEnd
==============
*/
void DLog_ErrorUnexpectedEnd(DLogContext *context)
{
  DLog_Error(context, NULL, "unexpected end", "\n");
  context->error = DLOG_ERROR_UNEXPECTED_END;
}

/*
==============
DLog_ErrorUnexpectedMember
==============
*/
void DLog_ErrorUnexpectedMember(DLogContext *context, const char *expected, const char *found)
{
  DLog_Error(context, found, "unexpected member", "was expecting %s\n", expected);
  context->error = DLOG_ERROR_UNEXPECTED_FIELD_NAME;
}

/*
==============
DLog_ErrorVA
==============
*/
void DLog_ErrorVA(DLogContext *context, const char *member, const char *message, const char *fmt, char *args)
{
  unsigned __int64 *v8; 
  DLogError error; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  __int64 *v14; 
  const DLogHooks *Hooks; 
  char Buffer[1024]; 
  char dest[1024]; 
  char path[1024]; 

  DLog_GetContextPath(context, member, path, 1024);
  DLog_sprintf<1024>((char (*)[1024])dest, "%s %s", path, message);
  v8 = j___local_stdio_printf_options();
  error = DLOG_ERROR_NONE;
  __stdio_common_vsprintf(*v8 | 2, Buffer, 0x400ui64, fmt, NULL, args);
  v10 = -1i64;
  v11 = -1i64;
  do
    ++v11;
  while ( Buffer[v11] );
  v12 = XXHash_Hash64(Buffer, v11, 0i64);
  do
    ++v10;
  while ( dest[v10] );
  v13 = XXHash_Hash64(dest, v10, 0i64) + v12;
  v14 = &qword_1564C8790;
  while ( *v14 != v13 )
  {
    if ( (__int64)++v14 >= (__int64)&unk_1564C87B0 )
    {
      qword_1564C87A8 = qword_1564C87A0;
      qword_1564C87A0 = qword_1564C8798;
      qword_1564C8798 = qword_1564C8790;
      qword_1564C8790 = v13;
      DLog_PrintError("%s: %s", dest, Buffer);
      if ( !s_recordingErrorEvent )
      {
        s_recordingErrorEvent = 1;
        Hooks = DLog_GetHooks();
        if ( context )
          error = context->error;
        Hooks->RecordErrorEvent((DLogHooks *)Hooks, error, dest, Buffer);
        s_recordingErrorEvent = 0;
      }
      return;
    }
  }
}

/*
==============
DLog_FindColumn
==============
*/
DLogColumn *DLog_FindColumn(const DLogContext *context, const char *name)
{
  const DLogRow *row; 
  const DLogEvent *event; 
  int index; 

  row = context->row;
  if ( row )
  {
    if ( DLog_HashTableFind(&row->columnHashTable, name, &index) )
      return &context->row->columns[index];
  }
  else
  {
    event = context->event;
    if ( event && DLog_HashTableFind(&event->columnHashTable, name, &index) )
      return &context->event->columns[index];
  }
  return 0i64;
}

/*
==============
DLog_FindEvent
==============
*/
DLogEvent *DLog_FindEvent(const DLogSchema *schema, const char *name)
{
  int v5; 
  DLogEvent *v6; 
  int v7; 
  __int64 v8; 
  DLogEvent *v9; 
  char *v10; 
  int v11; 
  int index; 

  if ( DLog_HashTableFind(&schema->eventHashTable, name, &index) )
    return &schema->events[index];
  v5 = -1;
  v6 = NULL;
  v7 = 0;
  if ( schema->eventCount > 0 )
  {
    v8 = 0i64;
    do
    {
      v9 = &schema->events[v8];
      v10 = strchr_0(v9->name, 42);
      if ( v10 )
      {
        v11 = (_DWORD)v10 - LODWORD(v9->name);
        if ( v11 > v5 && !strncmp(name, v9->name, v11) )
        {
          v5 = v11;
          v6 = v9;
        }
      }
      ++v7;
      ++v8;
    }
    while ( v7 < schema->eventCount );
  }
  return v6;
}

/*
==============
DLog_FindRow
==============
*/
DLogRow *DLog_FindRow(const DLogEvent *event, const char *name)
{
  int index; 

  if ( DLog_HashTableFind(&event->rowHashTable, name, &index) )
    return &event->rows[index];
  else
    return 0i64;
}

/*
==============
DLog_Free
==============
*/
void DLog_Free(void *p)
{
  const DLogHooks *Hooks; 

  if ( p )
  {
    Hooks = DLog_GetHooks();
    Hooks->Free((DLogHooks *)Hooks, p);
  }
}

/*
==============
DLog_GetChannelBufferTimeMilliseconds
==============
*/
__int64 DLog_GetChannelBufferTimeMilliseconds(const char *name, int bufferTime)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  return ((__int64 (__fastcall *)(const DLogHooks *, const char *, _QWORD))Hooks->GetChannelBufferTimeMilliseconds)(Hooks, name, (unsigned int)bufferTime);
}

/*
==============
DLog_GetEnv
==============
*/
__int64 DLog_GetEnv()
{
  const DLogHooks *Hooks; 
  unsigned int v1; 

  Hooks = DLog_GetHooks();
  v1 = Hooks->GetEnv((DLogHooks *)Hooks);
  DLog_Assert(v1 <= 2, "env >= DLOG_ENV_DEV && env < DLOG_ENV_COUNT", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_utils.cpp", "DLog_GetEnv", 465, (const char *)&queryFormat.fmt + 3);
  return v1;
}

/*
==============
DLog_GetEventChannelSample
==============
*/
__int64 DLog_GetEventChannelSample(const char *name, const char *channel, DLogEnv env, DLogSample sample)
{
  const DLogHooks *Hooks; 
  DLogSample v10; 

  Hooks = DLog_GetHooks();
  v10 = sample;
  return ((__int64 (__fastcall *)(const DLogHooks *, const char *, const char *, _QWORD, DLogSample))Hooks->GetEventChannelSample)(Hooks, name, channel, (unsigned int)env, v10);
}

/*
==============
DLog_GetEventSampleRate
==============
*/
void DLog_GetEventSampleRate(const char *name, float sampleRate)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  ((void (__fastcall *)(const DLogHooks *, const char *))Hooks->GetEventSampleRate)(Hooks, name);
}

/*
==============
DLog_GetEventSampleType
==============
*/
__int64 DLog_GetEventSampleType(const char *name, DLogSampleType sampleType)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  return ((__int64 (__fastcall *)(const DLogHooks *, const char *, _QWORD))Hooks->GetEventSampleType)(Hooks, name, (unsigned __int8)sampleType);
}

/*
==============
DLog_GetEventThrottleCount
==============
*/
__int64 DLog_GetEventThrottleCount(const char *name, int throttleCount)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  return ((__int64 (__fastcall *)(const DLogHooks *, const char *, _QWORD))Hooks->GetEventThrottleCount)(Hooks, name, (unsigned int)throttleCount);
}

/*
==============
DLog_GetEventThrottleTimeMilliseconds
==============
*/
__int64 DLog_GetEventThrottleTimeMilliseconds(const char *name, int throttleTime)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  return ((__int64 (__fastcall *)(const DLogHooks *, const char *, _QWORD))Hooks->GetEventThrottleTimeMilliseconds)(Hooks, name, (unsigned int)throttleTime);
}

/*
==============
DLog_GetFirstPartyAccountTypeFromString
==============
*/
__int64 DLog_GetFirstPartyAccountTypeFromString(const char *accountTypeString)
{
  _QWORD *v2; 
  unsigned int v3; 
  const char *v4; 
  int v5; 
  int v6; 
  _QWORD v8[10]; 

  v8[0] = "unknown";
  v2 = v8;
  v3 = 0;
  v8[1] = "steam";
  v8[2] = "bnet";
  v8[3] = "xbl";
  v8[4] = "psn";
  v8[5] = "wecn";
  v8[6] = "dedr";
  v8[7] = "bot";
  v8[8] = "ul";
  v8[9] = "atvi";
  while ( 1 )
  {
    v4 = accountTypeString;
    do
    {
      v5 = (unsigned __int8)v4[*v2 - (_QWORD)accountTypeString];
      v6 = *(unsigned __int8 *)v4 - v5;
      if ( v6 )
        break;
      ++v4;
    }
    while ( v5 );
    if ( !v6 )
      break;
    ++v3;
    ++v2;
    if ( v3 >= 0xA )
    {
      DLog_PrintError("DLog_GetFirstPartyAccountTypeFromString: unhandled string value '%s'", accountTypeString);
      return 0i64;
    }
  }
  return v3;
}

/*
==============
DLog_GetFirstPartyUserIdFromUserId
==============
*/
__int64 DLog_GetFirstPartyUserIdFromUserId(unsigned __int64 userId)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  return Hooks->GetFirstPartyUserIdFromUserId((DLogHooks *)Hooks, userId);
}

/*
==============
DLog_GetTrulyRandom
==============
*/
char DLog_GetTrulyRandom(void *bytes, unsigned __int64 byteCount)
{
  unsigned int v2; 

  v2 = BCryptGenRandom_0(s_bcryptProvider, (PUCHAR)bytes, byteCount, 0);
  if ( !v2 )
    return 1;
  DLog_PrintError("DLog_GetTrulyRandom failed: %d\n", v2);
  DLog_Assert(0, "false && \"DLog_GetTrulyRandom failed\"", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_utils.cpp", "DLog_GetTrulyRandom", 1064, (const char *)&queryFormat.fmt + 3);
  return 0;
}

/*
==============
DLog_GetUTC
==============
*/
__int64 DLog_GetUTC()
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  return ((__int64 (__fastcall *)(const DLogHooks *))Hooks->GetUTC)(Hooks);
}

/*
==============
DLog_GetUnoIdFromUserId
==============
*/
__int64 DLog_GetUnoIdFromUserId(unsigned __int64 userId)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  return Hooks->GetUnoIdFromUserId((DLogHooks *)Hooks, userId);
}

/*
==============
DLog_HashString
==============
*/
__int64 DLog_HashString(const char *str)
{
  const char *v1; 
  char v2; 
  __int64 result; 

  v1 = str;
  DLog_Assert(str != NULL, "str != nullptr", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_utils.cpp", "DLog_HashString", 959, (const char *)&queryFormat.fmt + 3);
  v2 = *v1;
  for ( result = 0i64; *v1; v2 = *v1 )
  {
    ++v1;
    result = (unsigned int)(v2 + 31 * result);
  }
  return result;
}

/*
==============
DLog_HashTableAdd
==============
*/
bool DLog_HashTableAdd(DLogHashTable *table, const char *name, int index)
{
  __int64 count; 
  bool result; 
  int v8; 
  unsigned int v9; 
  __int64 v10; 
  signed __int64 v11; 
  const char *v12; 
  int v13; 
  DLogHash *list; 

  count = table->count;
  if ( (int)count < table->max )
  {
    v8 = 0;
    v9 = 0;
    if ( name && *name )
    {
      v10 = -1i64;
      do
        ++v10;
      while ( name[v10] );
      v11 = (int)v10;
      v12 = name;
      do
      {
        if ( v11 && v12 - name >= v11 )
          break;
        v13 = *v12++;
        v9 = v13 + 31 * v9;
      }
      while ( *v12 );
    }
    if ( (int)count <= 0 )
    {
LABEL_16:
      table->list[count].hash = v9;
      table->list[table->count].index = index;
      result = 1;
      ++table->count;
    }
    else
    {
      list = table->list;
      while ( list->hash != v9 && list->index != index )
      {
        ++v8;
        ++list;
        if ( v8 >= (int)count )
          goto LABEL_16;
      }
      DLog_PrintError("Hash collision for '%s'\n", name);
      return 0;
    }
  }
  else
  {
    DLog_PrintError("Tried to add a new hash for '%s' in a hash table that is full.\n", name);
    return 0;
  }
  return result;
}

/*
==============
DLog_HashTableCreate
==============
*/
void DLog_HashTableCreate(DLogHashTable *table, DLogHash *list, int listSize)
{
  table->count = 0;
  table->list = list;
  table->max = listSize;
}

/*
==============
DLog_HashTableFind
==============
*/
char DLog_HashTableFind(const DLogHashTable *table, const char *name, int *index)
{
  int v3; 
  int v4; 
  unsigned int v7; 
  __int64 v8; 
  signed __int64 v9; 
  const char *v10; 
  int v11; 
  DLogHash *list; 
  int v13; 

  v3 = 0;
  v4 = table->count - 1;
  v7 = 0;
  if ( name && *name )
  {
    v8 = -1i64;
    do
      ++v8;
    while ( name[v8] );
    v9 = (int)v8;
    v10 = name;
    do
    {
      if ( v9 && v10 - name >= v9 )
        break;
      v11 = *v10++;
      v7 = v11 + 31 * v7;
    }
    while ( *v10 );
  }
  if ( v4 < 0 )
    return 0;
  list = table->list;
  while ( 1 )
  {
    v13 = (v4 + v3) / 2;
    if ( v7 <= list[v13].hash )
      break;
    v3 = v13 + 1;
LABEL_15:
    if ( v3 > v4 )
      return 0;
  }
  if ( v7 < list[v13].hash )
  {
    v4 = v13 - 1;
    goto LABEL_15;
  }
  *index = list[v13].index;
  return 1;
}

/*
==============
DLog_HashTableSort
==============
*/
void DLog_HashTableSort(DLogHashTable *table)
{
  qsort(table->list, table->count, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)DLog_CompareHash);
}

/*
==============
DLog_InitTrulyRandom
==============
*/
char DLog_InitTrulyRandom()
{
  unsigned int v0; 

  v0 = BCryptOpenAlgorithmProvider_0(&s_bcryptProvider, L"RNG", NULL, 0);
  if ( !v0 )
    return 1;
  DLog_PrintError("DLog_InitTrulyRandom failed: %d\n", v0);
  DLog_Assert(0, "false && \"DLog_InitTrulyRandom failed\"", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_utils.cpp", "DLog_InitTrulyRandom", 995, (const char *)&queryFormat.fmt + 3);
  return 0;
}

/*
==============
DLog_IsActive
==============
*/
bool DLog_IsActive()
{
  bool result; 
  const DLogHooks *Hooks; 

  result = DLog_IsInitialized();
  if ( result )
  {
    Hooks = DLog_GetHooks();
    return Hooks->IsActive((DLogHooks *)Hooks);
  }
  return result;
}

/*
==============
DLog_IsChannelActive
==============
*/
__int64 DLog_IsChannelActive(const char *name, bool active)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  return ((__int64 (__fastcall *)(const DLogHooks *, const char *, bool))Hooks->IsChannelActive)(Hooks, name, active);
}

/*
==============
DLog_IsChannelReady
==============
*/
__int64 DLog_IsChannelReady(const DLogChannel *channel)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  return ((__int64 (__fastcall *)(const DLogHooks *, const DLogChannel *))Hooks->IsChannelReady)(Hooks, channel);
}

/*
==============
DLog_IsDLogTypeInt
==============
*/
bool DLog_IsDLogTypeInt(const DLogType type)
{
  return (unsigned __int8)(type - 7) <= 7u || type == DLOG_TYPE_BOOL;
}

/*
==============
DLog_IsEndpointActive
==============
*/
__int64 DLog_IsEndpointActive(const char *name, bool active)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  return ((__int64 (__fastcall *)(const DLogHooks *, const char *, bool))Hooks->IsEndpointActive)(Hooks, name, active);
}

/*
==============
DLog_IsEventActive
==============
*/
__int64 DLog_IsEventActive(const char *name, bool active)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  return ((__int64 (__fastcall *)(const DLogHooks *, const char *, bool))Hooks->IsEventActive)(Hooks, name, active);
}

/*
==============
DLog_IsEventSampled
==============
*/
char DLog_IsEventSampled(unsigned __int64 userId, const DLogEvent *event)
{
  DLogSampleType type; 
  const char *name; 
  const DLogHooks *Hooks; 
  DLogSampleType v7; 
  const char *v8; 
  int v9; 
  const DLogHooks *v10; 
  const char *v12; 
  const DLogHooks *v13; 
  const DLogHooks *v14; 
  unsigned __int64 v15; 
  const DLogHooks *v16; 
  int v17; 
  const DLogHooks *v18; 
  unsigned __int64 v19; 
  const DLogHooks *v20; 
  const DLogHooks *v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  const DLogHooks *v28; 
  int v29; 
  int v30; 
  __int64 v31; 
  int v32; 
  char v33; 
  int v34; 
  const DLogHooks *v35; 
  int v36; 
  const DLogHooks *v37; 
  const DLogHooks *v39; 
  char dest[32]; 

  type = event->sampleGroup.type;
  name = event->name;
  Hooks = DLog_GetHooks();
  v7 = Hooks->GetEventSampleType((DLogHooks *)Hooks, name, type);
  v8 = event->name;
  v9 = (unsigned __int8)v7;
  v10 = DLog_GetHooks();
  ((void (__fastcall *)(const DLogHooks *, const char *))v10->GetEventSampleRate)(v10, v8);
  if ( !(_BYTE)v9 )
    return 1;
  switch ( v9 )
  {
    case 1:
      v36 = rand();
      v37 = DLog_GetHooks();
      ((__int64 (__fastcall *)(const DLogHooks *))v37->GetSamplingModulus)(v37);
      _XMM6 = 0i64;
      __asm { vroundss xmm6, xmm6, xmm1, 1 }
      v39 = DLog_GetHooks();
      v24 = v39->GetSamplingModulus((DLogHooks *)v39);
      v25 = v36 % v24;
      v26 = 1;
      return v26 % v24 * v25 % v24 < (int)*(float *)&_XMM6;
    case 2:
      if ( !userId )
        return 0;
      v27 = DLog_sprintf<32>((char (*)[32])dest, "%s%llu", "xb3", userId);
      v28 = DLog_GetHooks();
      v29 = v28->GetSamplingSeed((DLogHooks *)v28);
      v30 = 0;
      v17 = v29;
      if ( v27 > 0 )
      {
        v31 = 0i64;
        v32 = 119;
        do
        {
          v33 = dest[v31];
          if ( !v33 )
            break;
          ++v31;
          v34 = v32 * v33;
          ++v32;
          v30 += v34;
        }
        while ( v31 < v27 );
      }
      LODWORD(v19) = v30 ^ ((v30 ^ (v30 >> 10)) >> 10);
      v35 = DLog_GetHooks();
      v35->GetSamplingModulus((DLogHooks *)v35);
LABEL_11:
      _XMM6 = 0i64;
      __asm { vroundss xmm6, xmm6, xmm1, 1 }
      v23 = DLog_GetHooks();
      v24 = v23->GetSamplingModulus((DLogHooks *)v23);
      v25 = (int)v19 % v24;
      v26 = v17;
      return v26 % v24 * v25 % v24 < (int)*(float *)&_XMM6;
    case 3:
      v14 = DLog_GetHooks();
      v15 = v14->GetSamplingMatchId((DLogHooks *)v14);
      if ( !v15 )
        return 0;
      v16 = DLog_GetHooks();
      v17 = v16->GetSamplingSeed((DLogHooks *)v16);
      v18 = DLog_GetHooks();
      v19 = v15 % v18->GetSamplingModulus((DLogHooks *)v18);
      v20 = DLog_GetHooks();
      v20->GetSamplingModulus((DLogHooks *)v20);
      goto LABEL_11;
  }
  if ( v9 != 4 )
  {
    DLog_Assert(0, "0 && \"Unhandled DLogSampleType: %d\"", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_utils.cpp", "DLog_IsEventSampled", 904, (const char *)&queryFormat.fmt + 3);
    return 0;
  }
  v12 = event->sampleGroup.name;
  v13 = DLog_GetHooks();
  return v13->IsUserInGroup((DLogHooks *)v13, userId, v12);
}

/*
==============
DLog_IsMainThread
==============
*/
bool DLog_IsMainThread()
{
  return s_mainThreadId == GetCurrentThreadId();
}

/*
==============
DLog_IsMetricsActive
==============
*/
__int64 DLog_IsMetricsActive()
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  return ((__int64 (__fastcall *)(const DLogHooks *))Hooks->IsMetricsActive)(Hooks);
}

/*
==============
DLog_IsUserInGroup
==============
*/
__int64 DLog_IsUserInGroup(unsigned __int64 userId, const char *name)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  return ((__int64 (__fastcall *)(const DLogHooks *, unsigned __int64, const char *))Hooks->IsUserInGroup)(Hooks, userId, name);
}

/*
==============
DLog_LeaveCriticalSection
==============
*/
void DLog_LeaveCriticalSection(DLogCriticalSection id)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  Hooks->LeaveCriticalSection((DLogHooks *)Hooks, id);
}

/*
==============
DLog_Microseconds
==============
*/
__int64 DLog_Microseconds()
{
  __int64 perf_frequency_0; 
  __int64 perf_counter_0; 

  perf_frequency_0 = Query_perf_frequency_0();
  perf_counter_0 = Query_perf_counter_0();
  return (1000000000 * (perf_counter_0 % perf_frequency_0) / perf_frequency_0 + 1000000000 * (perf_counter_0 / perf_frequency_0) - s_start_0._MyDur._MyRep) / 1000;
}

/*
==============
DLog_Milliseconds
==============
*/
__int64 DLog_Milliseconds()
{
  __int64 perf_frequency_0; 
  __int64 perf_counter_0; 

  perf_frequency_0 = Query_perf_frequency_0();
  perf_counter_0 = Query_perf_counter_0();
  return (1000000000 * (perf_counter_0 % perf_frequency_0) / perf_frequency_0 + 1000000000 * (perf_counter_0 / perf_frequency_0) - s_start_0._MyDur._MyRep) / 1000000;
}

/*
==============
DLog_Print
==============
*/
void DLog_Print(DLogPrintType type, const char *fmt, char *args)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  Hooks->Print((DLogHooks *)Hooks, type, fmt, args);
}

/*
==============
DLog_PrintError
==============
*/
void DLog_PrintError(const char *fmt, ...)
{
  const DLogHooks *Hooks; 
  va_list va; 

  va_start(va, fmt);
  Hooks = DLog_GetHooks();
  Hooks->Print((DLogHooks *)Hooks, DLOG_PRINT_TYPE_ERROR, fmt, va);
}

/*
==============
DLog_PrintInfo
==============
*/
void DLog_PrintInfo(const char *fmt, ...)
{
  const DLogHooks *Hooks; 
  va_list va; 

  va_start(va, fmt);
  Hooks = DLog_GetHooks();
  Hooks->Print((DLogHooks *)Hooks, DLOG_PRINT_TYPE_INFO, fmt, va);
}

/*
==============
DLog_PrintWarning
==============
*/
void DLog_PrintWarning(const char *fmt, ...)
{
  const DLogHooks *Hooks; 
  va_list va; 

  va_start(va, fmt);
  Hooks = DLog_GetHooks();
  Hooks->Print((DLogHooks *)Hooks, DLOG_PRINT_TYPE_WARNING, fmt, va);
}

/*
==============
DLog_SetMainThread
==============
*/
void DLog_SetMainThread(void)
{
  s_mainThreadId = GetCurrentThreadId();
}

/*
==============
DLog_ShutdownTrulyRandom
==============
*/
char DLog_ShutdownTrulyRandom()
{
  unsigned int v0; 

  v0 = BCryptCloseAlgorithmProvider_0(s_bcryptProvider, 0);
  if ( !v0 )
    return 1;
  DLog_PrintError("DLog_ShutdownTrulyRandom failed: %d\n", v0);
  DLog_Assert(0, "false && \"DLog_ShutdownTrulyRandom failed\"", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_utils.cpp", "DLog_ShutdownTrulyRandom", 1027, (const char *)&queryFormat.fmt + 3);
  return 0;
}

/*
==============
DLog_TempAlloc
==============
*/
__int64 DLog_TempAlloc(unsigned __int64 size)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  return (__int64)Hooks->TempAlloc(Hooks, size);
}

/*
==============
DLog_TempFree
==============
*/
void DLog_TempFree(void *p)
{
  const DLogHooks *Hooks; 

  Hooks = DLog_GetHooks();
  Hooks->TempFree((DLogHooks *)Hooks, p);
}

/*
==============
DLog_TypeFromString
==============
*/
DLogType DLog_TypeFromString(const char *type)
{
  int v2; 
  const char *v3; 
  const char *v4; 
  int v5; 
  int v6; 

  v2 = 0;
  while ( 1 )
  {
    v3 = s_dlogTypeNames[v2];
    if ( v3 )
    {
      v4 = (const char *)(type - v3);
      do
      {
        v5 = (unsigned __int8)v4[(_QWORD)v3];
        v6 = *(unsigned __int8 *)v3 - v5;
        if ( v6 )
          break;
        ++v3;
      }
      while ( v5 );
      if ( !v6 )
        break;
    }
    if ( (unsigned int)++v2 >= 0x11 )
      return 0;
  }
  return (char)v2;
}

/*
==============
DLog_TypeToString
==============
*/
const char *DLog_TypeToString(DLogType type)
{
  return s_dlogTypeNames[(unsigned __int8)type];
}

/*
==============
DLog_atoi64hex
==============
*/
__int64 DLog_atoi64hex(const char *str)
{
  int v1; 
  __int64 v2; 
  __int64 v4; 

  v4 = 0i64;
  v1 = j_sscanf_s(str, "%lld", &v4);
  v2 = v4;
  if ( !v1 )
    return 0i64;
  return v2;
}

/*
==============
DLog_sprintf
==============
*/
unsigned __int64 DLog_sprintf(char *dest, unsigned __int64 destSize, const char *const fmt, ...)
{
  va_list vargs; 

  va_start(vargs, fmt);
  return DLog_vsprintf(dest, destSize, fmt, vargs);
}

/*
==============
DLog_strcpy
==============
*/
void DLog_strcpy(char *dest, const unsigned __int64 destSize, const char *src)
{
  signed __int64 v3; 
  char v4; 

  if ( destSize >= destSize - 1 )
    --destSize;
  if ( destSize )
  {
    v3 = src - dest;
    do
    {
      v4 = dest[v3];
      if ( !v4 )
        break;
      *dest++ = v4;
      --destSize;
    }
    while ( destSize );
  }
  *dest = 0;
}

/*
==============
DLog_strncpy
==============
*/
void DLog_strncpy(char *dest, const unsigned __int64 destSize, const char *src, const unsigned __int64 srcSize)
{
  unsigned __int64 v4; 
  signed __int64 v5; 
  char v6; 

  v4 = destSize - 1;
  if ( srcSize < v4 )
    v4 = srcSize;
  if ( v4 )
  {
    v5 = src - dest;
    do
    {
      v6 = dest[v5];
      if ( !v6 )
        break;
      *dest++ = v6;
      --v4;
    }
    while ( v4 );
  }
  *dest = 0;
}

/*
==============
DLog_vsprintf
==============
*/
unsigned __int64 DLog_vsprintf(char *dest, unsigned __int64 destSize, const char *const fmt, char *vargs)
{
  unsigned __int64 *v8; 
  unsigned __int64 result; 

  v8 = j___local_stdio_printf_options();
  LODWORD(result) = __stdio_common_vsprintf(*v8 | 2, dest, destSize, fmt, NULL, vargs);
  if ( (result & 0x80000000) != 0i64 )
    LODWORD(result) = -1;
  if ( (result & 0x80000000) != 0i64 )
    return 0i64;
  result = (int)result;
  if ( (int)result > destSize - 1 )
    return destSize - 1;
  return result;
}

