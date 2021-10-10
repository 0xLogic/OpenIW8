/*
==============
bdHTTPClient::recvResponseHeader
==============
*/

bool __fastcall bdHTTPClient::recvResponseHeader(bdHTTPClient *this, bdStreamSocket *sock, unsigned int *bytesDownloaded)
{
  return ?recvResponseHeader@bdHTTPClient@@IEAA_NAEAVbdStreamSocket@@AEAI@Z(this, sock, bytesDownloaded);
}

/*
==============
bdHTTPClient::readUntilStr
==============
*/

bdSocketStatusCode __fastcall bdHTTPClient::readUntilStr(bdHTTPClient *this, bdStreamSocket *sock, const char *searchStr, char *dest, unsigned int destSize, unsigned int *totalBytesRead, int *matchOffset)
{
  return ?readUntilStr@bdHTTPClient@@IEAA?AW4bdSocketStatusCode@@AEAVbdStreamSocket@@PEBDPEADIAEAIAEAH@Z(this, sock, searchStr, dest, destSize, totalBytesRead, matchOffset);
}

/*
==============
bdHTTPClient::sendPayload
==============
*/

bool __fastcall bdHTTPClient::sendPayload(bdHTTPClient *this, bdStreamSocket *sock, bdStopwatch *httpTime)
{
  return ?sendPayload@bdHTTPClient@@IEAA_NAEAVbdStreamSocket@@AEAVbdStopwatch@@@Z(this, sock, httpTime);
}

/*
==============
bdHTTPClient::performOperation
==============
*/

void __fastcall bdHTTPClient::performOperation(bdHTTPClient *this)
{
  ?performOperation@bdHTTPClient@@QEAAXXZ(this);
}

/*
==============
bdHTTPClient::initHttpOperation
==============
*/

bool __fastcall bdHTTPClient::initHttpOperation(bdHTTPClient *this, const char *serverName, unsigned int port)
{
  return ?initHttpOperation@bdHTTPClient@@IEAA_NPEBDI@Z(this, serverName, port);
}

/*
==============
bdHTTPClient::bdHTTPClient
==============
*/

void __fastcall bdHTTPClient::bdHTTPClient(bdHTTPClient *this)
{
  ??0bdHTTPClient@@IEAA@XZ(this);
}

/*
==============
bdHTTPClient::httpPut
==============
*/

bool __fastcall bdHTTPClient::httpPut(bdHTTPClient *this, const char *serverName, const char *requestPath, const void *content, int contentLength, bdUploadInterceptor *uploadHandler, unsigned int port, unsigned __int64 transactionID, char *checksum)
{
  return ?httpPut@bdHTTPClient@@QEAA_NPEBD0PEBXHPEAVbdUploadInterceptor@@I_KPEAD@Z(this, serverName, requestPath, content, contentLength, uploadHandler, port, transactionID, checksum);
}

/*
==============
bdHTTPClient::parseIncomingHttpResponse
==============
*/

bool __fastcall bdHTTPClient::parseIncomingHttpResponse(bdHTTPClient *this, const char *header, unsigned int headerSize)
{
  return ?parseIncomingHttpResponse@bdHTTPClient@@IEAA_NPEBDI@Z(this, header, headerSize);
}

/*
==============
bdHTTPClient::validateRequestInput
==============
*/

bool __fastcall bdHTTPClient::validateRequestInput(bdHTTPClient *this, const char *serverName, const char *requestPath, const void *content, __int64 contentLength, bool hasHandler)
{
  return ?validateRequestInput@bdHTTPClient@@IEAA_NPEBD0PEBX_J_N@Z(this, serverName, requestPath, content, contentLength, hasHandler);
}

/*
==============
bdHTTPClient::writePayloadData
==============
*/

int __fastcall bdHTTPClient::writePayloadData(bdHTTPClient *this, bdStreamSocket *sock, unsigned int *totalSent)
{
  return ?writePayloadData@bdHTTPClient@@IEAAHAEAVbdStreamSocket@@AEAI@Z(this, sock, totalSent);
}

/*
==============
bdHTTPClient::performOperation
==============
*/

bool __fastcall bdHTTPClient::performOperation(bdHTTPClient *this, bdStreamSocket *sock)
{
  return ?performOperation@bdHTTPClient@@IEAA_NAEAVbdStreamSocket@@@Z(this, sock);
}

/*
==============
bdHTTPClient::resolveHostIP
==============
*/

bool __fastcall bdHTTPClient::resolveHostIP(bdHTTPClient *this, bdAddr *addr)
{
  return ?resolveHostIP@bdHTTPClient@@IEAA_NAEAVbdAddr@@@Z(this, addr);
}

/*
==============
bdHTTPClient::~bdHTTPClient
==============
*/

void __fastcall bdHTTPClient::~bdHTTPClient(bdHTTPClient *this)
{
  ??1bdHTTPClient@@IEAA@XZ(this);
}

/*
==============
bdHTTPClient::parseStatusLine
==============
*/

bool __fastcall bdHTTPClient::parseStatusLine(bdHTTPClient *this, const char *header, unsigned int headerSize)
{
  return ?parseStatusLine@bdHTTPClient@@IEAA_NPEBDI@Z(this, header, headerSize);
}

/*
==============
bdHTTPClient::clearHttpOperation
==============
*/

void __fastcall bdHTTPClient::clearHttpOperation(bdHTTPClient *this)
{
  ?clearHttpOperation@bdHTTPClient@@IEAAXXZ(this);
}

/*
==============
bdHTTPClient::bdHTTPClient
==============
*/
void bdHTTPClient::bdHTTPClient(bdHTTPClient *this)
{
  this->m_port = 80;
  this->m_uploadHandler = NULL;
  this->m_status = BD_HTTP_STATUS_READY;
  this->m_progressMeter = 0;
  this->m_httpResponseCode = 0;
  this->m_socketErrorCode = 0i64;
  this->m_dataRate = 0.0;
  this->m_bytesTransfered = 0i64;
  this->m_abort = 0;
  this->m_serverName[0] = 0;
}

/*
==============
bdHTTPClient::~bdHTTPClient
==============
*/
void bdHTTPClient::~bdHTTPClient(bdHTTPClient *this)
{
  if ( this->m_status == BD_HTTP_STATUS_BUSY )
    this->m_abort = 1;
}

/*
==============
bdHTTPClient::clearHttpOperation
==============
*/
void bdHTTPClient::clearHttpOperation(bdHTTPClient *this)
{
  this->m_serverName[0] = 0;
  this->m_port = 0;
  this->m_uploadHandler = NULL;
  this->m_status = BD_HTTP_STATUS_READY;
  this->m_buffer.m_httpCommonBufferSize = 0;
  this->m_buffer.m_contentSendBuffer = NULL;
  this->m_buffer.m_contentSendBufferSize = 0;
  this->m_buffer.m_responseStatusBufferSize = 0;
  this->m_httpResponseCode = 0;
  this->m_socketErrorCode = 0i64;
  this->m_dataRate = 0.0;
  this->m_bytesTransfered = 0i64;
  this->m_abort = 0;
}

/*
==============
bdHTTPClient::httpPut
==============
*/
char bdHTTPClient::httpPut(bdHTTPClient *this, const char *serverName, const char *requestPath, const void *content, int contentLength, bdUploadInterceptor *uploadHandler, unsigned int port, unsigned __int64 transactionID)
{
  char v12; 
  unsigned int v13; 
  __int64 line; 

  if ( this->m_status == BD_HTTP_STATUS_BUSY )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::validateRequestInput", 0x139u, "Only one http operation may be processed at a time.");
  }
  else
  {
    if ( serverName && requestPath && (contentLength <= 0 || content || uploadHandler) )
    {
      if ( bdStrlen(serverName) - 1 > 0x7E )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::validateRequestInput", 0x148u, "HTTP server '%s' is invalid (perhaps too long?)", serverName);
        goto LABEL_20;
      }
      v12 = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::validateRequestInput", 0x13Fu, "HTTP input parameters invalid");
      v12 = 0;
    }
    if ( v12 )
    {
      this->m_serverName[0] = 0;
      v13 = 0;
      this->m_port = 0;
      this->m_uploadHandler = NULL;
      this->m_status = BD_HTTP_STATUS_READY;
      this->m_buffer.m_httpCommonBufferSize = 0;
      this->m_buffer.m_responseStatusBufferSize = 0;
      this->m_httpResponseCode = 0;
      this->m_socketErrorCode = 0i64;
      this->m_dataRate = 0.0;
      this->m_bytesTransfered = 0i64;
      this->m_abort = 0;
      this->m_buffer.m_contentSendBuffer = content;
      this->m_buffer.m_contentSendBufferSize = contentLength;
      this->m_buffer.m_contentReceiveBuffer = this->m_internalBuffer;
      this->m_buffer.m_contentReceiveBufferSize = 1024;
      if ( !contentLength )
      {
        LODWORD(line) = port;
        v13 = bdSnprintf(this->m_buffer.m_httpCommonBuffer, 0x400ui64, "PUT %s HTTP/1.1\r\nHost: %s:%d\r\nAccept: */*\r\nTransfer-Encoding: chunked\r\nX-TransactionID: %I64u\r\n\r\n", requestPath, serverName, line, transactionID);
      }
      this->m_buffer.m_httpCommonBufferSize = v13;
      if ( v13 - 1 > 0x3FD )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::httpPut", 0xD1u, "Error writing http PUT request string. Bytes written: %d.", v13);
      }
      else
      {
        this->m_uploadHandler = uploadHandler;
        this->m_status = BD_HTTP_STATUS_BUSY;
        if ( bdSnprintf(this->m_serverName, 0x80ui64, serverName) > 0 )
        {
          this->m_port = port;
          return 1;
        }
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::initHttpOperation", 0x127u, "Error writing http server name '%s'", serverName);
      }
    }
  }
LABEL_20:
  this->m_status = BD_HTTP_STATUS_ERROR;
  return 0;
}

/*
==============
bdHTTPClient::initHttpOperation
==============
*/
bool bdHTTPClient::initHttpOperation(bdHTTPClient *this, const char *serverName, unsigned int port)
{
  unsigned __int16 v3; 
  bool result; 

  v3 = port;
  this->m_status = BD_HTTP_STATUS_BUSY;
  if ( bdSnprintf(this->m_serverName, 0x80ui64, serverName) > 0 )
  {
    result = 1;
    this->m_port = v3;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::initHttpOperation", 0x127u, "Error writing http server name '%s'", serverName);
    result = 0;
    this->m_status = BD_HTTP_STATUS_ERROR;
  }
  return result;
}

/*
==============
bdHTTPClient::parseIncomingHttpResponse
==============
*/

bool __fastcall bdHTTPClient::parseIncomingHttpResponse(bdHTTPClient *this, const char *header, unsigned int headerSize)
{
  return bdHTTPClient::parseStatusLine(this, header, headerSize);
}

/*
==============
bdHTTPClient::parseStatusLine
==============
*/
char bdHTTPClient::parseStatusLine(bdHTTPClient *this, const char *header, unsigned int headerSize)
{
  unsigned int v3; 
  const char *v4; 
  int v7; 
  int v8; 
  int v9; 

  v3 = headerSize;
  v4 = header;
  if ( headerSize < 0xC )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::parseStatusLine", 0xF8u, "Error parsing HTTP response: server response too short to be valid");
    return 0;
  }
  if ( *(_DWORD *)"HTTP" != *(_DWORD *)header )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::parseStatusLine", 0xFFu, "Error parsing HTTP response: HTTP protocol string not found.");
    return 0;
  }
  if ( !isspace(*header) )
  {
    while ( v3 )
    {
      v7 = *++v4;
      --v3;
      if ( isspace(v7) )
        goto LABEL_9;
    }
    goto LABEL_10;
  }
LABEL_9:
  if ( !v3 )
  {
LABEL_10:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::parseStatusLine", 0x10Cu, "Error parsing HTTP response: No space character found after HTTP protocol string.");
    return 0;
  }
  v8 = atoi(v4);
  this->m_httpResponseCode = v8;
  if ( (unsigned int)(v8 - 200) <= 0x63 )
    return 1;
  v9 = v8;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::parseStatusLine", 0x116u, "Error reading HTTP response: error code is not in range 200 to 299. Error: %d", v9);
  return 0;
}

/*
==============
bdHTTPClient::performOperation
==============
*/
bool bdHTTPClient::performOperation(bdHTTPClient *this, bdStreamSocket *sock)
{
  unsigned int m_httpCommonBufferSize; 
  int v5; 
  int v7; 
  unsigned int bytesDownloaded; 
  bdStopwatch httpTime; 

  bdStopwatch::bdStopwatch(&httpTime);
  bdStopwatch::start(&httpTime);
  m_httpCommonBufferSize = this->m_buffer.m_httpCommonBufferSize;
  this->m_dataRate = 0.0;
  this->m_bytesTransfered = 0i64;
  v5 = bdStreamSocket::send(sock, this->m_buffer.m_httpCommonBuffer, m_httpCommonBufferSize);
  if ( v5 < 0 )
  {
    v7 = v5;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::performOperation", 0x8Fu, "Failed to send HTTP request with status code %d", v7);
    return 0;
  }
  return (!this->m_buffer.m_contentSendBufferSize && !this->m_uploadHandler || bdHTTPClient::sendPayload(this, sock, &httpTime)) && bdHTTPClient::recvResponseHeader(this, sock, &bytesDownloaded);
}

/*
==============
bdHTTPClient::performOperation
==============
*/
void bdHTTPClient::performOperation(bdHTTPClient *this)
{
  bdGetHostByName::bdStatus i; 
  const bdAddr *v3; 
  float v4; 
  bool isWritable; 
  int v6; 
  __int64 v7; 
  bdGetHostByNameConfig v8; 
  bdStreamSocket sock; 
  unsigned int bytesDownloaded[2]; 
  __int64 v11; 
  bdSockAddr address; 
  bdAddr result; 
  bdAddr other; 
  bdGetHostByName v15; 
  bdStopwatch str[2]; 

  v11 = -2i64;
  bdLogMessage(BD_LOG_INFO, "info/", "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::performOperation", 0x3Fu, "Starting HTTP operation");
  if ( this->m_abort )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::performOperation", 0x43u, "Not executing HTTP operation");
    this->m_status = BD_HTTP_STATUS_ERROR;
    return;
  }
  this->m_socketErrorCode = 1i64;
  this->m_status = BD_HTTP_STATUS_BUSY;
  bdAddr::bdAddr(&other);
  bdStreamSocket::bdStreamSocket(&sock);
  bdSockAddr::bdSockAddr(&address);
  bdSockAddr::set(&address, this->m_serverName);
  if ( !bdSockAddr::isValid(&address) || bdSockAddr::toUInt32(&address) == -1 )
  {
    bdGetHostByName::bdGetHostByName(&v15, 0);
    bdGetHostByNameConfig::bdGetHostByNameConfig(&v8);
    v8.m_timeout = FLOAT_5_0;
    bdGetHostByName::start(&v15, this->m_serverName, LODWORD(FLOAT_5_0));
    bdGetHostByName::pump(&v15);
    for ( i = bdGetHostByName::getStatus(&v15); i == BD_LOOKUP_PENDING; i = bdGetHostByName::getStatus(&v15) )
    {
      bdPlatformTiming::sleep(0x32u);
      bdGetHostByName::pump(&v15);
    }
    if ( i == BD_LOOKUP_SUCCEEDED && bdGetHostByName::getNumAddresses(&v15) )
    {
      bdGetHostByName::getAddressAt(&v15, &result.m_address, 0);
      bdSockAddr::set(&address, &result.m_address);
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::resolveHostIP", 0x173u, "DNS failed to resolve for '%s' with resolve error %d", this->m_serverName, i);
    }
    bdGetHostByName::~bdGetHostByName(&v15);
  }
  if ( !bdSockAddr::isValid(&address) || bdSockAddr::toUInt32(&address) == -1 || (bdSockAddr::toString(&address, (char *const)str, 0x10ui64), bdLogMessage(BD_LOG_INFO, "info/", "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::resolveHostIP", 0x17Au, "Resolved HTTP server to IP %s", (const char *)str), bdAddr::set(&other, &address, this->m_port), this->m_abort) || !bdStreamSocket::create(&sock, 0) )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::performOperation", 0x77u, "Unable to resolve the host ('%s') or HTTP operation was aborted", this->m_serverName);
    goto LABEL_34;
  }
  bdAddr::bdAddr(&result, &other);
  v4 = COERCE_FLOAT(bdStreamSocket::connect(&sock, v3));
  v8.m_timeout = v4;
  if ( LODWORD(v4) != 1 && v4 != NAN )
    goto LABEL_31;
  isWritable = bdStreamSocket::isWritable(&sock, (bdSocketStatusCode *)&v8);
  if ( this->m_abort )
  {
LABEL_22:
    if ( !isWritable )
    {
LABEL_31:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::performOperation", 0x6Eu, "Failed to connect to host");
      this->m_socketErrorCode = (int)v8.m_timeout;
      goto LABEL_32;
    }
  }
  else
  {
    while ( !isWritable )
    {
      if ( LODWORD(v8.m_timeout) != 1 )
        goto LABEL_31;
      bdPlatformTiming::sleep(0x32u);
      isWritable = bdStreamSocket::isWritable(&sock, (bdSocketStatusCode *)&v8);
      if ( this->m_abort )
        goto LABEL_22;
    }
  }
  if ( LODWORD(v8.m_timeout) != 1 )
    goto LABEL_31;
  bdStopwatch::bdStopwatch(str);
  bdStopwatch::start(str);
  this->m_dataRate = 0.0;
  this->m_bytesTransfered = 0i64;
  v6 = bdStreamSocket::send(&sock, this->m_buffer.m_httpCommonBuffer, this->m_buffer.m_httpCommonBufferSize);
  if ( v6 >= 0 )
  {
    if ( (!this->m_buffer.m_contentSendBufferSize && !this->m_uploadHandler || bdHTTPClient::sendPayload(this, &sock, str)) && bdHTTPClient::recvResponseHeader(this, &sock, bytesDownloaded) )
    {
      this->m_socketErrorCode = 0i64;
      this->m_status = BD_HTTP_STATUS_DONE;
      bdStreamSocket::close(&sock);
      goto LABEL_34;
    }
LABEL_32:
    bdStreamSocket::close(&sock);
    goto LABEL_34;
  }
  LODWORD(v7) = v6;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::performOperation", 0x8Fu, "Failed to send HTTP request with status code %d", v7);
  bdStreamSocket::close(&sock);
LABEL_34:
  if ( this->m_status != BD_HTTP_STATUS_DONE )
    this->m_status = BD_HTTP_STATUS_ERROR;
  bdStreamSocket::~bdStreamSocket(&sock);
}

/*
==============
bdHTTPClient::readUntilStr
==============
*/
__int64 bdHTTPClient::readUntilStr(bdHTTPClient *this, bdStreamSocket *sock, const char *searchStr, char *dest, unsigned int destSize, unsigned int *totalBytesRead, int *matchOffset)
{
  unsigned int v10; 
  __int64 v11; 
  unsigned int v12; 
  char *v13; 
  char *v14; 
  int v15; 
  char *v16; 
  int v18; 

  v10 = 1;
  v11 = *totalBytesRead;
  v12 = destSize - v11 - 1;
  *matchOffset = -1;
  v13 = &dest[v11];
  if ( destSize <= (unsigned int)v11 )
    v12 = 0;
  if ( !*totalBytesRead )
    goto LABEL_7;
  if ( !v12 )
  {
LABEL_14:
    bdHandleAssert(destSize >= *totalBytesRead, "destSize >= totalBytesRead", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::readUntilStr", 0x2BBu, "Potential overflow of socket read");
    return v10;
  }
  *v13 = 0;
  v14 = strstr_0(dest, searchStr);
  if ( !v14 )
  {
LABEL_7:
    if ( v12 )
    {
      while ( 1 )
      {
        v15 = bdStreamSocket::recv(sock, v13, v12);
        if ( this->m_abort )
          break;
        if ( v15 == -2 )
        {
          bdPlatformTiming::sleep(0x32u);
        }
        else
        {
          if ( v15 <= 0 )
            break;
          *totalBytesRead += v15;
          v12 -= v15;
          v13 += v15;
          *v13 = 0;
          v16 = strstr_0(dest, searchStr);
          if ( v16 )
          {
            *matchOffset = (_DWORD)v16 - (_DWORD)dest;
            goto LABEL_14;
          }
        }
        if ( !v12 )
          goto LABEL_14;
      }
      v18 = 1;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::readUntilStr", 0x2A6u, "Failed to receive data from host %d", v18);
      v10 = -1;
    }
    goto LABEL_14;
  }
  *matchOffset = (_DWORD)v14 - (_DWORD)dest;
  return v10;
}

/*
==============
bdHTTPClient::recvResponseHeader
==============
*/
char bdHTTPClient::recvResponseHeader(bdHTTPClient *this, bdStreamSocket *sock, unsigned int *bytesDownloaded)
{
  __int64 v3; 
  char *m_httpCommonBuffer; 
  unsigned int m_responseStatusBufferSize; 
  void *v6; 
  bdSocketStatusCode v10; 
  int v11; 
  unsigned int v12; 
  __int64 v13; 
  char v14; 
  char *v15; 
  unsigned int v16; 
  unsigned int totalBytesRead; 
  int matchOffset; 

  v3 = -1i64;
  totalBytesRead = 0;
  matchOffset = -1;
  m_httpCommonBuffer = this->m_buffer.m_httpCommonBuffer;
  m_responseStatusBufferSize = this->m_buffer.m_responseStatusBufferSize;
  v6 = NULL;
  if ( m_responseStatusBufferSize )
  {
    bdHandleAssert(m_responseStatusBufferSize <= 0x80, "(m_buffer.m_responseStatusBufferSize <= BD_HTTP_RESPONSE_STATUS_LENGTH && m_buffer.m_responseStatusBufferSize <= bufferSize)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::recvResponseHeader", 0x239u, "Buffer sync error parsing response");
    memcpy_0(m_httpCommonBuffer, this->m_buffer.m_responseStatusBuffer, this->m_buffer.m_responseStatusBufferSize);
    totalBytesRead = this->m_buffer.m_responseStatusBufferSize;
    this->m_buffer.m_responseStatusBufferSize = 0;
  }
  v10 = bdHTTPClient::readUntilStr(this, sock, headerEndStr, m_httpCommonBuffer, 0x400u, &totalBytesRead, &matchOffset);
  v11 = matchOffset;
  if ( matchOffset < 0 && v10 == BD_NET_SUCCESS )
  {
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::recvResponseHeader", 0x244u, "Unable to read entire HTTP response header: allocated buffer too small");
    v6 = bdMemory::allocate(0x1000ui64);
    memcpy_0(v6, m_httpCommonBuffer, totalBytesRead);
    m_httpCommonBuffer = (char *)v6;
    v10 = bdHTTPClient::readUntilStr(this, sock, headerEndStr, (char *)v6, 0x1000u, &totalBytesRead, &matchOffset);
    v11 = matchOffset;
  }
  v12 = totalBytesRead;
  *bytesDownloaded = 0;
  if ( v12 && v10 == BD_NET_SUCCESS && v11 >= 0 && bdHTTPClient::parseStatusLine(this, m_httpCommonBuffer, v12) )
  {
    do
      ++v3;
    while ( headerEndStr[v3] );
    v13 = v11 + (int)v3;
    v14 = 1;
    v15 = &m_httpCommonBuffer[v13];
    v16 = v12 + (_DWORD)m_httpCommonBuffer - (_DWORD)v15;
    if ( v16 <= this->m_buffer.m_contentReceiveBufferSize )
    {
      if ( v16 )
      {
        memmove_0(this->m_buffer.m_contentReceiveBuffer, v15, v16);
        *bytesDownloaded = v16;
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::recvResponseHeader", 0x26Eu, "Error occured when reading data from socket: insufficent space to write %d bytes", v16);
      v14 = 0;
    }
    if ( v6 )
      bdMemory::deallocate(v6);
    return v14;
  }
  else
  {
    if ( v6 )
      bdMemory::deallocate(v6);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::recvResponseHeader", 0x25Eu, "Error occured when reading response from server.");
    return 0;
  }
}

/*
==============
bdHTTPClient::resolveHostIP
==============
*/
char bdHTTPClient::resolveHostIP(bdHTTPClient *this, bdAddr *addr)
{
  bdGetHostByName::bdStatus i; 
  bdGetHostByNameConfig v6[2]; 
  __int64 v7; 
  bdSockAddr address; 
  bdSockAddr result; 
  bdGetHostByName v10; 
  char str[16]; 

  v7 = -2i64;
  bdSockAddr::bdSockAddr(&address);
  bdSockAddr::set(&address, this->m_serverName);
  if ( !bdSockAddr::isValid(&address) || bdSockAddr::toUInt32(&address) == -1 )
  {
    bdGetHostByName::bdGetHostByName(&v10, 0);
    bdGetHostByNameConfig::bdGetHostByNameConfig(v6);
    v6[0].m_timeout = FLOAT_5_0;
    bdGetHostByName::start(&v10, this->m_serverName, LODWORD(FLOAT_5_0));
    bdGetHostByName::pump(&v10);
    for ( i = bdGetHostByName::getStatus(&v10); i == BD_LOOKUP_PENDING; i = bdGetHostByName::getStatus(&v10) )
    {
      bdPlatformTiming::sleep(0x32u);
      bdGetHostByName::pump(&v10);
    }
    if ( i == BD_LOOKUP_SUCCEEDED && bdGetHostByName::getNumAddresses(&v10) )
    {
      bdGetHostByName::getAddressAt(&v10, &result, 0);
      bdSockAddr::set(&address, &result);
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::resolveHostIP", 0x173u, "DNS failed to resolve for '%s' with resolve error %d", this->m_serverName, i);
    }
    bdGetHostByName::~bdGetHostByName(&v10);
  }
  if ( !bdSockAddr::isValid(&address) || bdSockAddr::toUInt32(&address) == -1 )
    return 0;
  bdSockAddr::toString(&address, str, 0x10ui64);
  bdLogMessage(BD_LOG_INFO, "info/", "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::resolveHostIP", 0x17Au, "Resolved HTTP server to IP %s", str);
  bdAddr::set(addr, &address, this->m_port);
  return 1;
}

/*
==============
bdHTTPClient::sendPayload
==============
*/
char bdHTTPClient::sendPayload(bdHTTPClient *this, bdStreamSocket *sock, bdStopwatch *httpTime)
{
  int v6; 
  char v7; 
  __int64 v8; 
  double ElapsedTimeInSeconds; 
  bool v10; 
  float v11; 
  int v12; 
  int v13; 
  unsigned int m_responseStatusBufferSize; 
  __int64 v16; 
  unsigned int totalSent; 

  bdLogMessage(BD_LOG_INFO, "info/", "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::sendPayload", 0x185u, "sending payload");
  v6 = 0;
  totalSent = 0;
  v7 = 1;
  while ( !this->m_abort )
  {
    v6 = bdHTTPClient::writePayloadData(this, sock, &totalSent);
    if ( v6 > 0 )
    {
      v8 = totalSent;
      this->m_bytesTransfered = totalSent;
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(httpTime);
      if ( *(float *)&ElapsedTimeInSeconds > 0.0 )
      {
        v10 = !this->m_progressMeter;
        v11 = (float)v8;
        this->m_dataRate = v11 / *(float *)&ElapsedTimeInSeconds;
        if ( !v10 )
        {
          LODWORD(v16) = v8;
          bdLogMessage(BD_LOG_INFO, "info/", "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::sendPayload", 0x1A3u, "Bytes sent %d @ %.2f bytes/sec", v16, (float)(v11 / *(float *)&ElapsedTimeInSeconds));
        }
      }
    }
    if ( !this->m_httpResponseCode )
    {
      v12 = bdStreamSocket::recv(sock, &this->m_buffer.m_responseStatusBuffer[this->m_buffer.m_responseStatusBufferSize], 128 - this->m_buffer.m_responseStatusBufferSize);
      v13 = v12;
      if ( v12 <= 0 )
      {
        if ( v12 != -2 )
        {
          LODWORD(v16) = v12;
          bdLogMessage(BD_LOG_WARNING, "warn/", "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::sendPayload", 0x1BEu, "Socket error reading HTTP status line (%d)", v16);
          v6 = v13;
        }
      }
      else
      {
        this->m_buffer.m_responseStatusBufferSize += v12;
        m_responseStatusBufferSize = this->m_buffer.m_responseStatusBufferSize;
        if ( m_responseStatusBufferSize >= 0xC )
        {
          if ( !bdHTTPClient::parseStatusLine(this, this->m_buffer.m_responseStatusBuffer, m_responseStatusBufferSize) )
            goto LABEL_17;
          bdHandleAssert(this->m_httpResponseCode != 0, "m_httpResponseCode > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::sendPayload", 0x1B9u, "Error reading HTTP status line");
        }
      }
    }
    if ( v6 <= 0 )
      goto LABEL_18;
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::sendPayload", 0x191u, "Aborting HTTP operation with incomplete payload sent");
LABEL_17:
  v7 = 0;
LABEL_18:
  if ( v6 >= 0 )
    return v7;
  this->m_socketErrorCode = v6;
  return 0;
}

/*
==============
bdHTTPClient::validateRequestInput
==============
*/
char bdHTTPClient::validateRequestInput(bdHTTPClient *this, const char *serverName, const char *requestPath, const void *content, __int64 contentLength, bool hasHandler)
{
  if ( this->m_status == BD_HTTP_STATUS_BUSY )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::validateRequestInput", 0x139u, "Only one http operation may be processed at a time.");
    return 0;
  }
  if ( !serverName || !requestPath || contentLength > 0 && !content && !hasHandler )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::validateRequestInput", 0x13Fu, "HTTP input parameters invalid");
    return 0;
  }
  if ( bdStrlen(serverName) - 1 <= 0x7E )
    return 1;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "http", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::validateRequestInput", 0x148u, "HTTP server '%s' is invalid (perhaps too long?)", serverName);
  return 0;
}

/*
==============
bdHTTPClient::writePayloadData
==============
*/
__int64 bdHTTPClient::writePayloadData(bdHTTPClient *this, bdStreamSocket *sock, unsigned int *totalSent)
{
  unsigned int v4; 
  bdUploadInterceptor *m_uploadHandler; 
  unsigned int v8; 
  char *m_httpCommonBuffer; 
  unsigned int v10; 
  unsigned int v12; 
  int v13; 
  int i; 

  v4 = 0;
  m_uploadHandler = this->m_uploadHandler;
  if ( m_uploadHandler )
  {
    v4 = 12;
    v10 = m_uploadHandler->handleUpload(m_uploadHandler, &this->m_buffer.m_httpCommonBuffer[10], 1012u, *totalSent);
    bdHandleAssert(v10 <= 0x3F4, "writeAmount <= writeAvail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpclient-xboxone.cpp", "bdHTTPClient::writePayloadData", 0x1E8u, "bdUploadInterceptore::handleUpload must only send <= writeAvail (%s) bytes", 1012);
    if ( v10 > 0x3F4 )
      return 0xFFFFFFFFi64;
    m_httpCommonBuffer = this->m_buffer.m_httpCommonBuffer;
    v12 = bdSnprintf(this->m_buffer.m_httpCommonBuffer, 0xAui64, "%x", v10);
    *(_WORD *)&this->m_buffer.m_httpCommonBuffer[8] = 2573;
    if ( v12 < 8 )
      memset(&this->m_buffer.m_httpCommonBuffer[v12], 32, 8 - v12);
    this->m_buffer.m_httpCommonBuffer[v10 + 10] = 13;
    this->m_buffer.m_httpCommonBuffer[v10 + 11] = 10;
    v8 = v10 + 12;
  }
  else
  {
    v8 = 1024;
    m_httpCommonBuffer = (char *)this->m_buffer.m_contentSendBuffer + *totalSent;
    if ( this->m_buffer.m_contentSendBufferSize - *totalSent < 0x400 )
      v8 = this->m_buffer.m_contentSendBufferSize - *totalSent;
  }
  v13 = 0;
  do
  {
    for ( i = bdStreamSocket::send(sock, m_httpCommonBuffer, v8); i == -2; i = bdStreamSocket::send(sock, m_httpCommonBuffer, v8) )
    {
      if ( this->m_abort )
        break;
      bdPlatformTiming::sleep(0x32u);
    }
    if ( i <= 0 )
    {
      v13 = i;
    }
    else
    {
      v13 += i;
      v8 -= i;
      m_httpCommonBuffer += i;
    }
  }
  while ( v8 && i > 0 );
  if ( v13 > 0 )
  {
    if ( v4 )
    {
      if ( v13 <= v4 )
        v13 = 0;
      else
        v13 -= v4;
    }
    *totalSent += v13;
  }
  return (unsigned int)v13;
}

