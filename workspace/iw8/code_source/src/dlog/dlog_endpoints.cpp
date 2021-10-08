/*
==============
DLog_Endpoint_DirectTelemetry
==============
*/

bool __fastcall DLog_Endpoint_DirectTelemetry(unsigned __int64 userId, const void *buffer, int bufferSize, DLogEventInfo *eventInfo)
{
  return ?DLog_Endpoint_DirectTelemetry@@YA_N_KPEBXHPEAUDLogEventInfo@@@Z(userId, buffer, bufferSize, eventInfo);
}

/*
==============
DLog_RegisterEndpoints
==============
*/

void DLog_RegisterEndpoints(void)
{
  ?DLog_RegisterEndpoints@@YAXXZ();
}

/*
==============
DLog_Endpoint_EventLog
==============
*/
char DLog_Endpoint_EventLog(unsigned __int64 userId, const void *buffer, int bufferSize, DLogEventInfo *eventInfo)
{
  int v6; 

  v6 = atoi(eventInfo->categoryName);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_endpoints.cpp", 34, ASSERT_TYPE_ASSERT, "(categoryId != 0 && \"EventLog category must be an integer!\")", (const char *)&queryFormat, "categoryId != 0 && \"EventLog category must be an integer!\"") )
    __debugbreak();
  dwRecordEventFF((unsigned __int8 *)buffer, bufferSize, (DWRecordEventType)v6);
  return 1;
}

/*
==============
DLog_Endpoint_DirectTelemetry
==============
*/
char DLog_Endpoint_DirectTelemetry(unsigned __int64 userId, const void *buffer, int bufferSize, DLogEventInfo *eventInfo)
{
  return 1;
}

/*
==============
DLog_RegisterEndpoints
==============
*/
void DLog_RegisterEndpoints(void)
{
  unsigned int v0; 
  bool (__fastcall **p_endpoint)(unsigned __int64, const void *, int, DLogEventInfo *); 

  v0 = 0;
  p_endpoint = &s_endpoints[0].endpoint;
  do
  {
    DLog_RegisterEndpoint((const char *)*(p_endpoint - 1), *p_endpoint, *((_BYTE *)p_endpoint - 16));
    ++v0;
    p_endpoint += 3;
  }
  while ( v0 < 3 );
}

