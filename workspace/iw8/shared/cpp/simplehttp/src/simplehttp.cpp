/*
==============
simplehttp_request_do
==============
*/

int __fastcall simplehttp_request_do(SimpleHttpConnection *connection, SimpleHttpRequest *request, SimpleHttpResponse *response)
{
  return ?simplehttp_request_do@@YAHPEAUSimpleHttpConnection@@PEAUSimpleHttpRequest@@PEAUSimpleHttpResponse@@@Z(connection, request, response);
}

/*
==============
simplehttp_batch_term
==============
*/

void __fastcall simplehttp_batch_term(int handle)
{
  ?simplehttp_batch_term@@YAXH@Z(handle);
}

/*
==============
simplehttp_init
==============
*/

int __fastcall simplehttp_init()
{
  return ?simplehttp_init@@YAHXZ();
}

/*
==============
simplehttp_open_connection
==============
*/

int __fastcall simplehttp_open_connection(SimpleHttpConnection *connection, const char *host, int port)
{
  return ?simplehttp_open_connection@@YAHPEAUSimpleHttpConnection@@PEBDH@Z(connection, host, port);
}

/*
==============
simplehttp_batch_send_request
==============
*/

int __fastcall simplehttp_batch_send_request(SimpleHttpConnection *connection, SimpleHttpRequest *request)
{
  return ?simplehttp_batch_send_request@@YAHPEAUSimpleHttpConnection@@PEAUSimpleHttpRequest@@@Z(connection, request);
}

/*
==============
simplehttp_batch_run
==============
*/

int __fastcall simplehttp_batch_run(int batchHandle, unsigned __int64 count, SimpleHttpConnection **connections_, SimpleHttpResponse **responses, SimpleHttpBatchScratchPad *scratchPads, SimpleHttpConnectionState *connectionStates)
{
  return ?simplehttp_batch_run@@YAHH_KPEAPEAUSimpleHttpConnection@@PEAPEAUSimpleHttpResponse@@PEAUSimpleHttpBatchScratchPad@@PEAW4SimpleHttpConnectionState@@@Z(batchHandle, count, connections_, responses, scratchPads, connectionStates);
}

/*
==============
simplehttp_parse_url
==============
*/

void __fastcall simplehttp_parse_url(char *name, SimpleHttpUrlParts *parts)
{
  ?simplehttp_parse_url@@YAXPEADPEAUSimpleHttpUrlParts@@@Z(name, parts);
}

/*
==============
simplehttp_batch_init
==============
*/

void __fastcall simplehttp_batch_init(unsigned __int64 count, int *handle)
{
  ?simplehttp_batch_init@@YAX_KPEAH@Z(count, handle);
}

/*
==============
simplehttp_term
==============
*/

int __stdcall simplehttp_term()
{
  return ?simplehttp_term@@YAXXZ();
}

/*
==============
simplehttp_close_connection
==============
*/

int __fastcall simplehttp_close_connection(SimpleHttpConnection *connection)
{
  return ?simplehttp_close_connection@@YAHPEAUSimpleHttpConnection@@@Z(connection);
}

/*
==============
simplehttp_batch_add_connection
==============
*/

int __fastcall simplehttp_batch_add_connection(int handle, SimpleHttpConnection *connection)
{
  return ?simplehttp_batch_add_connection@@YAHHPEAUSimpleHttpConnection@@@Z(handle, connection);
}

/*
==============
simplehttp_batch_remove_connection
==============
*/

int __fastcall simplehttp_batch_remove_connection(int handle, SimpleHttpConnection *connection)
{
  return ?simplehttp_batch_remove_connection@@YAHHPEAUSimpleHttpConnection@@@Z(handle, connection);
}

/*
==============
simplehttp_batch_add_connection
==============
*/
__int64 simplehttp_batch_add_connection(int handle, SimpleHttpConnection *connection)
{
  return 0i64;
}

/*
==============
simplehttp_batch_init
==============
*/
void simplehttp_batch_init(unsigned __int64 count, int *handle)
{
  *handle = -1;
}

/*
==============
simplehttp_batch_remove_connection
==============
*/
__int64 simplehttp_batch_remove_connection(int handle, SimpleHttpConnection *connection)
{
  return 0i64;
}

/*
==============
simplehttp_batch_run
==============
*/
__int64 simplehttp_batch_run(int batchHandle, unsigned __int64 count, SimpleHttpConnection **connections_, SimpleHttpResponse **responses, SimpleHttpBatchScratchPad *scratchPads, SimpleHttpConnectionState *connectionStates)
{
  SimpleHttpConnectionState *v6; 
  SimpleHttpResponse **v7; 
  SimpleHttpConnection **v8; 
  SimpleHttpConnectionState *v10; 
  unsigned __int64 i; 
  char v12; 
  SimpleHttpConnection **v13; 
  signed __int64 v14; 
  unsigned __int64 v15; 
  SimpleHttpResponse *v16; 
  SimpleHttpConnection *v17; 
  int first_response_line; 
  char v19; 
  int v20; 
  unsigned __int64 v21; 
  char *v22; 
  SimpleHttpConnection *v23; 
  SimpleHttpConnectionState *v24; 
  char *v25; 
  int v26; 
  unsigned int Error; 

  v6 = connectionStates;
  v7 = responses;
  v8 = connections_;
  if ( count )
  {
    v10 = connectionStates;
    for ( i = count; i; --i )
      *v10++ = Requested;
    v7 = responses;
  }
  while ( 1 )
  {
    v12 = 0;
    if ( count )
    {
      v13 = v8;
      v14 = (char *)v7 - (char *)v8;
      v15 = count;
LABEL_8:
      v16 = *(SimpleHttpResponse **)((char *)v13 + v14);
      v17 = *v13;
      while ( 2 )
      {
        switch ( *(_DWORD *)&v17->impl[9232] )
        {
          case 0:
            simplehttp_log_message(Canceled, "Connection is in an invalid response stage: %d", 0i64);
            goto LABEL_21;
          case 1:
          case 2:
            first_response_line = simplehttp_read_first_response_line((SimpleHttpConnectionImpl *)v17, v16);
            goto LABEL_14;
          case 3:
            first_response_line = simplehttp_read_headers((SimpleHttpConnectionImpl *)v17, v16);
            goto LABEL_14;
          case 4:
            first_response_line = simplehttp_read_to_end((SimpleHttpConnectionImpl *)v17, v16);
            goto LABEL_14;
          case 5:
          case 6:
            first_response_line = simplehttp_discard_body((SimpleHttpConnectionImpl *)v17);
LABEL_14:
            if ( !first_response_line )
              continue;
            if ( first_response_line == -65929471 )
            {
              *v6 = Dispatched_Wait;
              v19 = 0;
            }
            else
            {
              if ( first_response_line == -15597823 )
                *v6 = 5;
              else
LABEL_21:
                *v6 = 6;
              v19 = 1;
            }
LABEL_23:
            if ( v12 || v19 )
              v12 = 1;
            ++v6;
            ++v13;
            if ( --v15 )
              goto LABEL_8;
            if ( v12 )
              return 0i64;
            v8 = connections_;
            v6 = connectionStates;
            break;
          case 7:
            v16->contentLength = *(_QWORD *)&v17->impl[9240];
            v19 = 1;
            *v6 = Dispatched;
            goto LABEL_23;
          default:
            continue;
        }
        break;
      }
    }
    v20 = 0;
    v21 = 0i64;
    if ( count )
    {
      v22 = &scratchPads->impl[10];
      do
      {
        v23 = v8[v21];
        v22 += 16;
        ++v21;
        *(_QWORD *)(v22 - 26) = *(_QWORD *)v23->impl;
        *(_DWORD *)(v22 - 18) = 768;
      }
      while ( v21 < count );
    }
    if ( WSAPoll((LPWSAPOLLFD)scratchPads, count, -1) < 0 )
      break;
    v7 = responses;
    if ( !count )
      continue;
    v24 = v6;
    v25 = &scratchPads->impl[10];
    do
    {
      if ( (*(_WORD *)v25 & 0x300) == 0 )
      {
        if ( (*(_WORD *)v25 & 1) == 0 )
          goto LABEL_46;
        simplehttp_log_message(Canceled, "Socket error occured while polling for fd: %d", *(_QWORD *)(*v8)->impl);
        goto LABEL_44;
      }
      v26 = simplehttp_receive_more_bytes((SimpleHttpConnectionImpl *)*v8);
      if ( v26 == -32375039 )
      {
        *v24 = Finished;
      }
      else
      {
        if ( v26 != -49152255 )
        {
          if ( v26 >= 0 )
            goto LABEL_46;
LABEL_44:
          *v24 = 6;
          goto LABEL_45;
        }
        *v24 = 4;
      }
LABEL_45:
      v12 = 1;
LABEL_46:
      ++v20;
      v25 += 16;
      ++v8;
      ++v24;
    }
    while ( v20 < count );
    v8 = connections_;
    v7 = responses;
    if ( v12 )
      return 0i64;
  }
  Error = WSAGetLastError();
  simplehttp_log_message(Canceled, "poll failed - Err: %d", Error);
  return 0xFFFFFFFFi64;
}

/*
==============
simplehttp_batch_send_request
==============
*/

int __fastcall simplehttp_batch_send_request(SimpleHttpConnection *connection, SimpleHttpRequest *request)
{
  return simplehttp_send_request((SimpleHttpConnectionImpl *)connection, request);
}

/*
==============
simplehttp_batch_term
==============
*/
void simplehttp_batch_term(int handle)
{
  ;
}

/*
==============
simplehttp_close_connection
==============
*/
__int64 simplehttp_close_connection(SimpleHttpConnection *connection)
{
  unsigned int Error; 

  if ( !closesocket(*(_QWORD *)connection->impl) )
    return 0i64;
  Error = WSAGetLastError();
  simplehttp_log_message(Canceled, "Failed to close socket - Err: %d", Error);
  return 0xFFFFFFFFi64;
}

/*
==============
simplehttp_discard_body
==============
*/
__int64 simplehttp_discard_body(SimpleHttpConnectionImpl *connection)
{
  __int64 stage; 
  __int64 result; 
  unsigned __int64 contentLength; 
  unsigned __int64 internalBufferCurrenLen; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 consumedBytes; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  SimpleHttpResponseStage v11; 

  stage = (unsigned int)connection->responseState.stage;
  if ( (unsigned int)(stage - 5) <= 1 )
  {
    if ( connection->responseState.skipBody )
    {
      connection->responseState.stage = 7;
      return 0i64;
    }
    else if ( connection->responseState.chunkedTransfer )
    {
      simplehttp_log_message(Canceled, "Failed to read body - Chunked transfer encoding is unimplemented");
      return 0xFFFFFFFFi64;
    }
    else
    {
      contentLength = connection->responseState.contentLength;
      if ( contentLength == -1i64 )
      {
        simplehttp_log_message(Canceled, "Failed to read body - Response didn't include a Content-Length header");
        return 0xFFFFFFFFi64;
      }
      else
      {
        internalBufferCurrenLen = connection->internalBufferCurrenLen;
        v6 = contentLength - connection->responseState.consumedBytes;
        v7 = internalBufferCurrenLen;
        if ( internalBufferCurrenLen >= v6 )
          v7 = v6;
        memmove_0(connection->internalBuffer, &connection->internalBuffer[v7], internalBufferCurrenLen - v7);
        connection->responseState.consumedBytes += v7;
        consumedBytes = connection->responseState.consumedBytes;
        v9 = connection->internalBufferCurrenLen - v7;
        v10 = connection->responseState.contentLength;
        connection->internalBufferCurrenLen = v9;
        if ( consumedBytes == v10 )
        {
          v11 = connection->responseState.stage;
          result = 0i64;
          connection->responseState.stage = 7;
          if ( v11 == 6 )
            return 4279369473i64;
        }
        else if ( v9 )
        {
          simplehttp_log_message(Canceled, "Got to invalid code path in simplehttp_discard_body() - InternalBufferLen: %zu  ResponseConsumedBytes: %zu  ResponseContentLength: %zu", v9, consumedBytes, v10);
          return 0xFFFFFFFFi64;
        }
        else
        {
          return 4229037825i64;
        }
      }
    }
  }
  else
  {
    simplehttp_log_message(Canceled, "Failed to read body - Request isn't in BodyDiscard state. Current stage: %d", stage);
    return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
simplehttp_init
==============
*/
__int64 simplehttp_init()
{
  unsigned int Error; 
  WSAData WSAData; 

  if ( !WSAStartup(0x202u, &WSAData) )
    return 0i64;
  Error = WSAGetLastError();
  simplehttp_log_message(Canceled, "WSAStartup failed - Err: %d", Error);
  return 0xFFFFFFFFi64;
}

/*
==============
simplehttp_open_connection
==============
*/
__int64 simplehttp_open_connection(SimpleHttpConnection *connection, const char *host, int port)
{
  __m256i v4; 
  unsigned int Error; 
  __int64 result; 
  __int64 ai_family; 
  sockaddr *ai_addr; 
  u_short v13; 
  int v14; 
  unsigned int v15; 
  SOCKET v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned __int64 v19; 
  __int64 optlen; 
  ADDRINFOA pHints; 
  int optval; 
  PADDRINFOA ppResult; 

  pHints.ai_flags = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_QWORD *)connection->impl = socket(2, 1, 6);
  pHints.ai_family = 2;
  pHints.ai_socktype = 1;
  *(__m256i *)&pHints.ai_addrlen = v4;
  pHints.ai_protocol = 6;
  if ( getaddrinfo(host, NULL, &pHints, &ppResult) )
  {
    Error = WSAGetLastError();
    simplehttp_log_message(Canceled, "Failed to resolve domain name to ip address - Err: %d", Error);
    return 0xFFFFFFFFi64;
  }
  ai_family = (unsigned int)ppResult->ai_family;
  if ( (_DWORD)ai_family == 2 )
  {
    ai_addr = ppResult->ai_addr;
    v13 = htons(port);
    v14 = 16;
  }
  else
  {
    if ( (_DWORD)ai_family != 23 )
    {
      simplehttp_log_message(Canceled, "Address isn't IP4 or IP6 - %d", ai_family);
      return 0xFFFFFFFFi64;
    }
    ai_addr = ppResult->ai_addr;
    v13 = htons(port);
    v14 = 28;
  }
  *(_WORD *)ai_addr->sa_data = v13;
  if ( connect(*(_QWORD *)connection->impl, ai_addr, v14) )
  {
    v15 = WSAGetLastError();
    simplehttp_log_message(Canceled, "Failed to connect - Err: %d", v15);
    return 0xFFFFFFFFi64;
  }
  else
  {
    v16 = *(_QWORD *)connection->impl;
    optval = 30000;
    if ( setsockopt(v16, 0xFFFF, 4102, (const char *)&optval, 4) )
    {
      v17 = WSAGetLastError();
      simplehttp_log_message(Canceled, "Failed to set socket recieve timeout - Err: %d", v17);
      return 0xFFFFFFFFi64;
    }
    else if ( setsockopt(*(_QWORD *)connection->impl, 0xFFFF, 4101, (const char *)&optval, 4) )
    {
      v18 = WSAGetLastError();
      simplehttp_log_message(Canceled, "Failed to set socket send timeout - Err: %d", v18);
      return 0xFFFFFFFFi64;
    }
    else
    {
      LODWORD(optlen) = port;
      v19 = j_snprintf(&connection->impl[8], 0x400ui64, "%s:%d", host, optlen);
      if ( v19 <= 0x3FF )
      {
        result = 0i64;
        *(_QWORD *)&connection->impl[9224] = 0i64;
      }
      else
      {
        simplehttp_log_message(Canceled, "Failed to store the host Url - Too long. We have space for %zu chars. Given %zu", 0x3FFui64, v19);
        return 0xFFFFFFFFi64;
      }
    }
  }
  return result;
}

/*
==============
simplehttp_parse_url
==============
*/
void simplehttp_parse_url(char *name, SimpleHttpUrlParts *parts)
{
  char *v3; 
  char *v4; 
  char *v5; 
  char v6; 
  char *v7; 
  char *v8; 
  unsigned __int64 v9; 
  char *v10; 
  char *v11; 
  char v12; 
  char v13; 
  __int64 v14; 
  char v15; 
  char *v16; 
  char *v17; 

  parts->scheme = NULL;
  parts->host = NULL;
  v3 = name;
  parts->absolute = NULL;
  parts->relative = NULL;
  parts->fragment = NULL;
  v4 = strchr_0(name, 35);
  if ( v4 )
  {
    *v4 = 0;
    parts->fragment = v4 + 1;
  }
  v5 = strchr_0(v3, 32);
  if ( v5 )
    *v5 = 0;
  v6 = *v3;
  v7 = NULL;
  v8 = v3;
  if ( *v3 )
  {
    v9 = 0x8000800800000000ui64;
    do
    {
      v10 = v3;
      if ( isspace(v6) )
      {
        v11 = v8;
        do
        {
          v12 = v11[1];
          *v11++ = v12;
        }
        while ( v12 );
        --v8;
      }
      v13 = *v8;
      if ( (unsigned __int8)*v8 <= 0x3Fu )
      {
        if ( _bittest64((const __int64 *)&v9, v13) )
          break;
      }
      if ( v13 == 58 )
      {
        *v8 = 0;
        v14 = 0i64;
        parts->scheme = v3;
        v3 = v8 + 1;
        while ( 1 )
        {
          v15 = aUrl[v14++];
          if ( v15 != v10[v14 - 1] )
            goto LABEL_19;
          if ( v14 == 4 )
          {
            parts->scheme = NULL;
            break;
          }
        }
      }
      v6 = *++v8;
    }
    while ( v6 );
  }
LABEL_19:
  if ( *v3 == 47 )
  {
    v16 = v3 + 1;
    if ( v3[1] == 47 )
    {
      parts->host = v3 + 2;
      *v3 = 0;
      v17 = strchr_0(parts->host, 47);
      if ( !v17 )
        return;
      *v17 = 0;
      v16 = v17 + 1;
    }
    parts->absolute = v16;
  }
  else
  {
    if ( *v3 )
      v7 = v3;
    parts->relative = v7;
  }
}

/*
==============
simplehttp_read_first_response_line
==============
*/
__int64 simplehttp_read_first_response_line(SimpleHttpConnectionImpl *connection, SimpleHttpResponse *response)
{
  SimpleHttpResponseState *p_responseState; 
  SimpleHttpResponseStage stage; 
  unsigned __int64 v7; 
  __int64 v8; 
  unsigned __int64 *p_internalBufferCurrenLen; 
  unsigned __int64 internalBufferCurrenLen; 
  char *internalBuffer; 

  p_responseState = &connection->responseState;
  stage = connection->responseState.stage;
  if ( stage == 1 )
  {
    if ( response->headers )
    {
      v7 = 0i64;
      if ( response->headersLen )
      {
        v8 = 0i64;
        do
        {
          ++v8;
          ++v7;
          response->headers[v8 - 1].valueLen = 0i64;
        }
        while ( v7 < response->headersLen );
      }
    }
    p_responseState->stage = 2;
  }
  else if ( stage != 2 )
  {
    simplehttp_log_message(Canceled, "Failed to parse first response line - Request isn't in FirstLine state. Possibly called simplehttp_read_first_response_line() twice?", response);
    return 0xFFFFFFFFi64;
  }
  p_internalBufferCurrenLen = &connection->internalBufferCurrenLen;
  internalBufferCurrenLen = connection->internalBufferCurrenLen;
  if ( internalBufferCurrenLen && internalBufferCurrenLen != 1 )
  {
    internalBuffer = connection->internalBuffer;
    while ( *internalBuffer != 13 || internalBuffer[1] != 10 )
    {
      if ( ++internalBuffer - connection->internalBuffer >= internalBufferCurrenLen - 1 )
        goto LABEL_15;
    }
    if ( internalBuffer )
    {
      *internalBuffer = 0;
      if ( j_sscanf(connection->internalBuffer, "HTTP/%*d.%*d %d %*s", &response->statusCode) == 1 )
      {
        memmove_0(connection->internalBuffer, internalBuffer + 2, (char *)connection - internalBuffer + *p_internalBufferCurrenLen + 1030);
        p_responseState->stage = 3;
        *p_internalBufferCurrenLen += (char *)connection - internalBuffer + 1030;
        return 0i64;
      }
      return 0xFFFFFFFFi64;
    }
  }
LABEL_15:
  if ( internalBufferCurrenLen == 0x2000 )
  {
    simplehttp_log_message(Canceled, "Failed to parse first response line - Failed to find a newline. Response is malformed or kSimpleHttpConnectionBufferSize is too small", response);
    return 0xFFFFFFFFi64;
  }
  return 4229037825i64;
}

/*
==============
simplehttp_read_headers
==============
*/
__int64 simplehttp_read_headers(SimpleHttpConnectionImpl *connection, SimpleHttpResponse *response)
{
  __int64 result; 
  unsigned __int64 i; 
  unsigned __int64 v6; 
  char *internalBuffer; 
  char *v8; 
  char *v9; 
  char *v10; 
  const char *v11; 
  const char *v12; 
  int *v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  SimpleHttpResponseHeader *headers; 
  unsigned __int64 v18; 
  size_t valueSize; 
  char *EndPtr; 
  __int64 v21; 

  if ( connection->responseState.stage == 3 )
  {
    for ( i = connection->internalBufferCurrenLen; i; i = connection->internalBufferCurrenLen )
    {
      v6 = i - 1;
      if ( !v6 )
        break;
      internalBuffer = connection->internalBuffer;
      while ( *internalBuffer != 13 || internalBuffer[1] != 10 )
      {
        if ( ++internalBuffer - connection->internalBuffer >= v6 )
          goto LABEL_10;
      }
      if ( !internalBuffer )
        break;
      *internalBuffer = 0;
      v8 = connection->internalBuffer;
      v21 = internalBuffer - (char *)connection - 1032;
      if ( internalBuffer - (char *)connection == 1032 )
      {
        memmove_0(v8, &connection->internalBuffer[2], connection->internalBufferCurrenLen - 2);
        connection->internalBufferCurrenLen -= 2i64;
        result = 0i64;
        connection->responseState.stage = Menu;
        return result;
      }
      v9 = strchr_0(v8, 58);
      v10 = v9;
      if ( !v9 )
      {
        simplehttp_log_message(Canceled, "Malformed header `%s`. Expecting a colon", connection->internalBuffer);
        return 0xFFFFFFFFi64;
      }
      *v9 = 0;
      v11 = trim_whitespace(connection->internalBuffer);
      v12 = trim_whitespace(v10 + 1);
      if ( _strcmpi(v11, "content-length") )
      {
        if ( !_strcmpi(v11, "transfer-encoding") && !_strcmpi(v12, "chunked") )
          connection->responseState.chunkedTransfer = 1;
      }
      else
      {
        if ( !*v12 )
        {
          simplehttp_log_message(Canceled, "Invalid content-length value - `%s`", v12);
          return 0xFFFFFFFFi64;
        }
        EndPtr = NULL;
        *_errno() = 0;
        connection->responseState.contentLength = strtoull(v12, &EndPtr, 10);
        if ( EndPtr == v12 )
        {
          simplehttp_log_message(Canceled, "Failed to parse content-length value `%s` - No digits found", v12);
          return 0xFFFFFFFFi64;
        }
        if ( *_errno() == 34 && connection->responseState.contentLength == -1i64 )
        {
          simplehttp_log_message(Canceled, "Failed to parse content-length value `%s` - Integer overflow", v12);
          return 0xFFFFFFFFi64;
        }
        if ( *_errno() && !connection->responseState.contentLength )
        {
          v13 = _errno();
          simplehttp_log_message(Canceled, "Failed to parse content-length value `%s` - Unspecified error: %d", v12, (unsigned int)*v13);
          return 0xFFFFFFFFi64;
        }
      }
      if ( response->headers )
      {
        v14 = 0i64;
        if ( response->headersLen )
        {
          v15 = 0i64;
          while ( _strcmpi(v11, response->headers[v15].key) )
          {
            ++v14;
            ++v15;
            if ( v14 >= response->headersLen )
              goto LABEL_37;
          }
          v16 = -1i64;
          do
            ++v16;
          while ( v12[v16] );
          headers = response->headers;
          v18 = v14;
          valueSize = headers[v18].valueSize;
          if ( valueSize >= v16 )
            valueSize = v16;
          memcpy_0(headers[v18].value, v12, valueSize);
          response->headers[v18].valueLen = v16;
        }
      }
LABEL_37:
      memmove_0(connection->internalBuffer, internalBuffer + 2, connection->internalBufferCurrenLen - v21 - 2);
      connection->internalBufferCurrenLen += (char *)connection - internalBuffer + 1030;
    }
LABEL_10:
    if ( connection->internalBufferCurrenLen == 0x2000 )
    {
      simplehttp_log_message(Canceled, "Failed to parse first response line - Failed to find a newline. Response is malformed or kSimpleHttpConnectionBufferSize is too small");
      return 0xFFFFFFFFi64;
    }
    else
    {
      return 4229037825i64;
    }
  }
  else
  {
    simplehttp_log_message(Canceled, "Failed to parse headers - Request isn't in Headers state. Possibly called simplehttp_read_first_response_line() twice?");
    return 0xFFFFFFFFi64;
  }
}

/*
==============
simplehttp_read_to_end
==============
*/
__int64 simplehttp_read_to_end(SimpleHttpConnectionImpl *connection, SimpleHttpResponse *response)
{
  __int64 stage; 
  unsigned __int64 contentLength; 
  char *destBuffer; 
  unsigned __int64 destSize; 
  unsigned __int64 consumedBytes; 
  signed __int64 v10; 
  unsigned __int64 internalBufferCurrenLen; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  int (__fastcall *callback)(void *, unsigned __int64, int, void *); 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 

  stage = (unsigned int)connection->responseState.stage;
  if ( (_DWORD)stage != 4 )
  {
    simplehttp_log_message(Canceled, "Failed to read body - Request isn't in Body stage. Current stage: %d", stage);
    return 0xFFFFFFFFi64;
  }
  if ( connection->responseState.skipBody )
    goto LABEL_34;
  if ( connection->responseState.chunkedTransfer )
  {
    simplehttp_log_message(Canceled, "Failed to read body - Chunked transfer encoding is unimplemented");
    return 0xFFFFFFFFi64;
  }
  contentLength = connection->responseState.contentLength;
  if ( contentLength == -1i64 )
  {
    simplehttp_log_message(Canceled, "Failed to read body - Response didn't include a Content-Length header");
    return 0xFFFFFFFFi64;
  }
  destBuffer = (char *)response->destBuffer;
  if ( (!destBuffer || !response->destSize) && !response->callback )
    goto LABEL_33;
  if ( destBuffer )
  {
    destSize = response->destSize;
    if ( destSize )
    {
      consumedBytes = connection->responseState.consumedBytes;
      v10 = destSize - consumedBytes;
      if ( v10 > 0 )
      {
        internalBufferCurrenLen = connection->internalBufferCurrenLen;
        v12 = contentLength - consumedBytes;
        if ( internalBufferCurrenLen >= v12 )
          internalBufferCurrenLen = v12;
        if ( internalBufferCurrenLen < v10 )
          v10 = internalBufferCurrenLen;
        memcpy_0(&destBuffer[consumedBytes], connection->internalBuffer, v10);
        memmove_0(connection->internalBuffer, &connection->internalBuffer[v10], connection->internalBufferCurrenLen - v10);
        v13 = connection->internalBufferCurrenLen;
        connection->responseState.consumedBytes += v10;
        v14 = v13 - v10;
        v15 = connection->responseState.consumedBytes;
        v16 = connection->responseState.contentLength;
        connection->internalBufferCurrenLen = v14;
        if ( v15 != v16 )
        {
          if ( v14 )
          {
            if ( (__int64)(response->destSize - v15) > 0 )
            {
              simplehttp_log_message(Canceled, "Got to invalid code path in simplehttp_read_to_end() - InternalBufferLen: %zu  ResponseConsumedBytes: %zu  ResponseContentLength: %zu", v14, v15, v16);
              return 0xFFFFFFFFi64;
            }
            goto LABEL_33;
          }
          return 4229037825i64;
        }
        goto LABEL_34;
      }
LABEL_33:
      connection->responseState.stage = 5;
      return 0i64;
    }
  }
  callback = response->callback;
  if ( !callback )
  {
    simplehttp_log_message(Canceled, "Got to invalid code path in simplehttp_read_to_end() - No response dest buffer or callback was set");
    return 0xFFFFFFFFi64;
  }
  v18 = contentLength - connection->responseState.consumedBytes;
  v19 = connection->internalBufferCurrenLen;
  if ( v19 >= v18 )
    v19 = v18;
  if ( !callback(connection->internalBuffer, v19, response->statusCode, response->callbackUserData) )
  {
    memmove_0(connection->internalBuffer, &connection->internalBuffer[v19], connection->internalBufferCurrenLen - v19);
    v20 = connection->internalBufferCurrenLen;
    connection->responseState.consumedBytes += v19;
    v21 = v20 - v19;
    v22 = connection->responseState.consumedBytes;
    v23 = connection->responseState.contentLength;
    connection->internalBufferCurrenLen = v21;
    if ( v22 != v23 )
    {
      if ( v21 )
      {
        simplehttp_log_message(Canceled, "Got to invalid code path in simplehttp_read_to_end() - InternalBufferLen: %zu  ResponseConsumedBytes: %zu  ResponseContentLength: %zu", v21, v22, v23);
        return 0xFFFFFFFFi64;
      }
      return 4229037825i64;
    }
LABEL_34:
    connection->responseState.stage = 7;
    return 0i64;
  }
  connection->responseState.stage = 6;
  return 0i64;
}

/*
==============
simplehttp_receive_more_bytes
==============
*/
__int64 simplehttp_receive_more_bytes(SimpleHttpConnectionImpl *connection)
{
  __int64 result; 
  unsigned int v3; 
  unsigned int Error; 

  LODWORD(result) = recv(connection->sock, &connection->internalBuffer[connection->internalBufferCurrenLen], 0x2000 - LODWORD(connection->internalBufferCurrenLen), 0);
  v3 = result;
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)result )
    {
      connection->internalBufferCurrenLen += (int)result;
      return (unsigned int)result;
    }
    else
    {
      result = 4245815041i64;
      if ( connection->responseState.stage == 1 )
        return 4262592257i64;
    }
  }
  else
  {
    Error = WSAGetLastError();
    simplehttp_log_message(Canceled, "Failed to receive data from server - Return value: %d Net errno: %d", v3, Error);
    return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
simplehttp_request_do
==============
*/
__int64 simplehttp_request_do(SimpleHttpConnection *connection, SimpleHttpRequest *request, SimpleHttpResponse *response)
{
  __int64 result; 

  if ( !simplehttp_send_request((SimpleHttpConnectionImpl *)connection, request) )
  {
    while ( 1 )
    {
      switch ( *(_DWORD *)&connection->impl[9232] )
      {
        case 0:
          simplehttp_log_message(Canceled, "Connection is in an invalid response stage: %d", 0i64);
          return 0xFFFFFFFFi64;
        case 1:
        case 2:
          result = simplehttp_read_first_response_line((SimpleHttpConnectionImpl *)connection, response);
          goto LABEL_8;
        case 3:
          result = simplehttp_read_headers((SimpleHttpConnectionImpl *)connection, response);
          goto LABEL_8;
        case 4:
          result = simplehttp_read_to_end((SimpleHttpConnectionImpl *)connection, response);
          goto LABEL_8;
        case 5:
        case 6:
          result = simplehttp_discard_body((SimpleHttpConnectionImpl *)connection);
LABEL_8:
          if ( (_DWORD)result == -65929471 )
          {
            result = simplehttp_receive_more_bytes((SimpleHttpConnectionImpl *)connection);
            if ( (int)result < 0 )
              return result;
          }
          else if ( (_DWORD)result )
          {
            return result;
          }
          break;
        case 7:
          response->contentLength = *(_QWORD *)&connection->impl[9240];
          return 0i64;
        default:
          continue;
      }
    }
  }
  return 0xFFFFFFFFi64;
}

/*
==============
simplehttp_send_request
==============
*/
__int64 simplehttp_send_request(SimpleHttpConnectionImpl *connection, SimpleHttpRequest *request)
{
  int v4; 
  unsigned __int64 v5; 
  unsigned __int64 bodySize; 
  int v7; 
  __int64 v8; 
  unsigned __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 sock; 
  const char *body; 
  unsigned __int64 v16; 
  char _Buffer[2]; 

  v4 = j_snprintf(_Buffer, 0x2000ui64, "%s %s HTTP/1.1\r\nHost: %s\r\nUser-Agent: IndyFs/1.0.0\r\n", request->verb, request->path, connection->hostUrl);
  v5 = v4;
  if ( (unsigned __int64)v4 > 0x1FFF || (!request->body || (bodySize = request->bodySize) == 0 ? (v7 = j_snprintf(&_Buffer[v4], 0x2000i64 - v4, "Content-Length: 0\r\n")) : (v7 = j_snprintf(&_Buffer[v4], 0x2000i64 - v4, "Content-Length: %zu\r\n", bodySize)), v8 = v7, v5 += v7, v5 > 0x1FFF) )
  {
    simplehttp_log_message(Canceled, "Failed to send - Message too long for buffer. We have space for %zu chars. Given %zu. Truncated message:\n%s", 0x1FFFui64, v5, _Buffer);
    return 0xFFFFFFFFi64;
  }
  if ( request->headers )
  {
    v10 = 0i64;
    if ( request->headersLen )
    {
      v11 = 0i64;
      while ( 1 )
      {
        v8 = j_snprintf(&_Buffer[v5], 0x2000 - v5, "%s: %s\r\n", request->headers[v11].key, request->headers[v11].value);
        v5 += v8;
        if ( v5 > 0x1FFF )
          break;
        ++v10;
        ++v11;
        if ( v10 >= request->headersLen )
          goto LABEL_13;
      }
      v13 = v5;
      goto LABEL_15;
    }
  }
LABEL_13:
  v12 = v5 + 2;
  if ( v5 + 2 > 0x1FFF )
  {
    v13 = v5 + 2;
LABEL_15:
    simplehttp_log_message(Canceled, "Failed to send - Message too long for buffer. We have space for %zu chars. Given %zu. Truncated message:\n%s", 0x1FFFui64, v13, _Buffer);
    return 0xFFFFFFFFi64;
  }
  *(_WORD *)&_Buffer[v5] = 2573;
  if ( v12 >= 0x2000 )
  {
    j___report_rangecheckfailure(v8);
    JUMPOUT(0x143A95CBBi64);
  }
  sock = connection->sock;
  _Buffer[v12] = 0;
  if ( !simplehttp_socket_send_all(sock, _Buffer, v12) )
  {
    body = (const char *)request->body;
    if ( !body || (v16 = request->bodySize) == 0 || !simplehttp_socket_send_all(connection->sock, body, v16) )
    {
      connection->responseState.stage = 1;
      connection->responseState.contentLength = -1i64;
      connection->responseState.chunkedTransfer = 0;
      connection->responseState.consumedBytes = 0i64;
      connection->responseState.skipBody = _strcmpi(request->verb, "HEAD") == 0;
      return 0i64;
    }
  }
  return 0xFFFFFFFFi64;
}

/*
==============
simplehttp_socket_send_all
==============
*/
__int64 simplehttp_socket_send_all(unsigned __int64 sock, const char *data, unsigned __int64 dataLen)
{
  unsigned __int64 v3; 
  int v7; 
  int v8; 
  unsigned int Error; 

  v3 = 0i64;
  if ( !dataLen )
    return 0i64;
  while ( 1 )
  {
    v7 = dataLen - v3;
    if ( dataLen - v3 > 0x7FFFFFFF )
      v7 = 0x7FFFFFFF;
    v8 = send(sock, &data[v3], v7, 0);
    if ( v8 < 0 )
      break;
    v3 += v8;
    if ( v3 >= dataLen )
      return 0i64;
  }
  Error = WSAGetLastError();
  simplehttp_log_message(Canceled, "Failed to send - Err: %d", Error);
  return 0xFFFFFFFFi64;
}

/*
==============
simplehttp_term
==============
*/

int __stdcall simplehttp_term()
{
  return WSACleanup();
}

/*
==============
trim_whitespace
==============
*/
char *trim_whitespace(char *str)
{
  char *v1; 
  int v2; 
  __int64 v3; 
  unsigned __int8 *i; 

  v1 = str;
  if ( isspace((unsigned __int8)*str) )
  {
    do
      v2 = (unsigned __int8)*++v1;
    while ( isspace(v2) );
  }
  if ( *v1 )
  {
    v3 = -1i64;
    while ( v1[++v3] != 0 )
      ;
    for ( i = (unsigned __int8 *)&v1[v3 - 1]; i > (unsigned __int8 *)v1; --i )
    {
      if ( !isspace(*i) )
        break;
    }
    i[1] = 0;
  }
  return v1;
}

