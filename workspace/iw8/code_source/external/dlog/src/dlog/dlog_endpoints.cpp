/*
==============
DLog_RegisterBuiltinEndpoints
==============
*/

void DLog_RegisterBuiltinEndpoints(void)
{
  ?DLog_RegisterBuiltinEndpoints@@YAXXZ();
}

/*
==============
DLog_Endpoint_Print
==============
*/
char DLog_Endpoint_Print(unsigned __int64 userId, const void *buffer, int bufferSize, DLogEventInfo *eventInfo)
{
  _BYTE *v4; 
  char *i; 

  v4 = buffer;
  for ( i = strchr_0((const char *)buffer, 10); i; i = strchr_0(i + 1, 10) )
  {
    DLog_PrintInfo("%.*s\n", (unsigned int)((_DWORD)i - (_DWORD)v4), v4);
    v4 = i + 1;
  }
  if ( *v4 )
    DLog_PrintInfo("%.*s\n", (unsigned int)((_DWORD)i - (_DWORD)v4), v4);
  return 1;
}

/*
==============
DLog_EndpointPrintBase64
==============
*/
char DLog_EndpointPrintBase64(unsigned __int64 userId, const void *buffer, int bufferSize, DLogEventInfo *eventInfo)
{
  char *v4; 
  char *i; 
  char base64[2048]; 

  Base64_Encode(buffer, bufferSize, base64, 0x800ui64);
  v4 = base64;
  for ( i = strchr_0(base64, 10); i; i = strchr_0(i + 1, 10) )
  {
    DLog_PrintInfo("%.*s\n", (unsigned int)((_DWORD)i - (_DWORD)v4), v4);
    v4 = i + 1;
  }
  if ( *v4 )
    DLog_PrintInfo("%.*s\n", (unsigned int)((_DWORD)i - (_DWORD)v4), v4);
  return 1;
}

/*
==============
DLog_Endpoint_DataChannelStandard
==============
*/
char DLog_Endpoint_DataChannelStandard(unsigned __int64 userId, const void *buffer, int bufferSize, DLogEventInfo *eventInfo)
{
  unsigned __int64 v5; 
  const DLogGluttonInfo *GluttonInfo; 
  const DLogGluttonInfo *v9; 
  int userdata; 
  char url[1024]; 
  char dest[4300]; 

  v5 = bufferSize;
  DLog_Assert(eventInfo->categoryName != NULL, "eventInfo->categoryName", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_endpoints.cpp", "DLog_Endpoint_DataChannelStandard", 79);
  if ( !eventInfo->categoryName )
    return 1;
  if ( !Http_IsInitialized() )
    return 1;
  GluttonInfo = DLog_GetGluttonInfo();
  v9 = GluttonInfo;
  if ( !GluttonInfo )
    return 1;
  DLog_sprintf<4300>((char (*)[4300])dest, "Authorization: Bearer %s\nContent-Type: application/octet-stream", GluttonInfo->accessToken);
  if ( !userId )
    userId = v9->userId;
  userdata = v9->titleId;
  DLog_sprintf(url, 0x400ui64, "%s/messages/published_messages/v5/?client=%s&user=%zu&accountType=%s&messageName=%s&title=%d", v9->endpoint, v9->client, userId, v9->accountType, eventInfo->categoryName, userdata);
  Http_RequestAsync("POST", url, dest, buffer, v5, NULL, 0i64, Http_Callback, eventInfo->channelBuffer);
  return 0;
}

/*
==============
DLog_RegisterBuiltinEndpoints
==============
*/
void DLog_RegisterBuiltinEndpoints(void)
{
  unsigned int v0; 
  bool (__fastcall **p_endpoint)(unsigned __int64, const void *, int, DLogEventInfo *); 

  v0 = 0;
  p_endpoint = &s_endpoints_0[0].endpoint;
  do
  {
    DLog_RegisterEndpoint((const char *)*(p_endpoint - 1), *p_endpoint, *((_BYTE *)p_endpoint - 16));
    ++v0;
    p_endpoint += 3;
  }
  while ( v0 < 3 );
}

/*
==============
Http_Callback
==============
*/
void Http_Callback(int statusCode, void *userdata)
{
  DLog_FreeChannelBuffer((DLogChannelBuffer *)userdata);
}

