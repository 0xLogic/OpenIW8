/*
==============
DLog_RecordErrorEvent
==============
*/

void __fastcall DLog_RecordErrorEvent(DLogErrorCode code, const char *message, const char *stackTrace)
{
  ?DLog_RecordErrorEvent@@YAXW4DLogErrorCode@@PEBD1@Z(code, message, stackTrace);
}

/*
==============
DLog_ErrorCode
==============
*/

DLogErrorCode __fastcall DLog_ErrorCode(errorParm_t errorParam)
{
  return ?DLog_ErrorCode@@YA?AW4DLogErrorCode@@W4errorParm_t@@@Z(errorParam);
}

/*
==============
DLog_ErrorCode
==============
*/
__int64 DLog_ErrorCode(errorParm_t errorParam)
{
  __int64 v1; 
  __int64 v3; 

  v1 = errorParam;
  LODWORD(v3) = 84083201;
  WORD2(v3) = 1798;
  BYTE6(v3) = 4;
  if ( (unsigned int)errorParam >= ERR_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_events.cpp", 34, ASSERT_TYPE_ASSERT, "(errorParam < ( sizeof( *array_counter( errorCodeLookup ) ) + 0 ))", (const char *)&queryFormat, "errorParam < ARRAY_COUNT( errorCodeLookup )", v3) )
    __debugbreak();
  return *((unsigned __int8 *)&v3 + v1);
}

/*
==============
DLog_RecordErrorEvent
==============
*/
void DLog_RecordErrorEvent(DLogErrorCode code, const char *message, const char *stackTrace)
{
  unsigned int v3; 
  unsigned __int64 UserId; 
  int DemonwareActiveController; 
  unsigned int v9; 
  int v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  int v14; 
  __int64 v15; 
  int CompassBuildId; 

  v3 = 0;
  UserId = 0i64;
  if ( BB_GetDemonwareActiveController() >= 0 )
  {
    DemonwareActiveController = BB_GetDemonwareActiveController();
    UserId = DLog_GetUserId(DemonwareActiveController);
  }
  v9 = DLog_HashString(message);
  v10 = -1;
  v11 = 0x7FFFFFFF;
  v12 = 0i64;
  while ( v9 != *(_DWORD *)((char *)&unk_148DD09A0 + v12 * 4) )
  {
    v13 = dword_148DD0C10[v12];
    v14 = v3;
    if ( v13 >= v11 )
      v14 = v10;
    ++v3;
    ++v12;
    v10 = v14;
    if ( v13 >= v11 )
      v13 = v11;
    v11 = v13;
    if ( v3 >= 0x80 )
    {
      if ( v14 >= 0 )
      {
        v15 = v14;
        *(_DWORD *)((char *)&unk_148DD09A0 + v15 * 4) = v9;
        dword_148DD0C10[v15] = DLog_Milliseconds();
      }
      goto LABEL_13;
    }
  }
  dword_148DD0C10[v3] = DLog_Milliseconds();
  if ( code != DLOG_ERROR_CODE_SYS_ERROR )
    return;
LABEL_13:
  CompassBuildId = DS_GetCompassBuildId();
  if ( !stackTrace )
    stackTrace = (char *)&queryFormat.fmt + 3;
  if ( !message )
    message = (char *)&queryFormat.fmt + 3;
  DLog_RecordEvent<8192,char const *,int,char const *,char const *,char const *,char const *,char const *,int>(UserId, "dlog_error_event", "code", (unsigned __int8)code, "message", message, "stack_trace", stackTrace, "compass_build_id", CompassBuildId);
}

