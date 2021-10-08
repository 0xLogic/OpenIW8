/*
==============
bdPlatformSocketHelper::setSocketOption
==============
*/

int __fastcall bdPlatformSocketHelper::setSocketOption(const int handle, const int option, const void *optionValue, const unsigned int optionLen)
{
  return ?setSocketOption@bdPlatformSocketHelper@@SAHHHPEBXI@Z(handle, option, optionValue, optionLen);
}

/*
==============
bdPlatformSocket::setSendBufferSize
==============
*/

int __fastcall bdPlatformSocket::setSendBufferSize(const int handle, const int sendBufferSize)
{
  return ?setSendBufferSize@bdPlatformSocket@@SAHHH@Z(handle, sendBufferSize);
}

/*
==============
bdPlatformSocket::sendTo
==============
*/

int __fastcall bdPlatformSocket::sendTo(const int handle, const bdSockAddr *addr, const void *data, const unsigned int length)
{
  return ?sendTo@bdPlatformSocket@@SAHHAEBVbdSockAddr@@PEBXI@Z(handle, addr, data, length);
}

/*
==============
bdPlatformSocket::bind
==============
*/

bdSocketStatusCode __fastcall bdPlatformSocket::bind(int *handle, const bdSockAddr *addr, const unsigned __int16 port)
{
  return ?bind@bdPlatformSocket@@SA?AW4bdSocketStatusCode@@AEAHVbdSockAddr@@G@Z(handle, addr, port);
}

/*
==============
bdPlatformSocket::abortGetHostByName
==============
*/

void __fastcall bdPlatformSocket::abortGetHostByName(int __formal)
{
  ?abortGetHostByName@bdPlatformSocket@@SAXH@Z(__formal);
}

/*
==============
bdPlatformSocket::sendTo
==============
*/

int __fastcall bdPlatformSocket::sendTo(const int handle, const bdSockAddr *addr, const unsigned __int16 port, const void *data, const unsigned int length)
{
  return ?sendTo@bdPlatformSocket@@SAHHAEBVbdSockAddr@@GPEBXI@Z(handle, addr, port, data, length);
}

/*
==============
bdPlatformSocket::unregisterThread
==============
*/

void bdPlatformSocket::unregisterThread(void)
{
  ?unregisterThread@bdPlatformSocket@@SAXXZ();
}

/*
==============
bdPlatformSocket::create
==============
*/

int __fastcall bdPlatformSocket::create(const bool blocking, const bool broadcast)
{
  return ?create@bdPlatformSocket@@SAH_N0@Z(blocking, broadcast);
}

/*
==============
bdPlatformSocket::sendMsg
==============
*/

int __fastcall bdPlatformSocket::sendMsg(const int handle, const bdSockMsgHdr *msg)
{
  return ?sendMsg@bdPlatformSocket@@SAHHAEBVbdSockMsgHdr@@@Z(handle, msg);
}

/*
==============
bdPlatformSocket::setRecvBufferSize
==============
*/

int __fastcall bdPlatformSocket::setRecvBufferSize(const int handle, const int recvBufferSize)
{
  return ?setRecvBufferSize@bdPlatformSocket@@SAHHH@Z(handle, recvBufferSize);
}

/*
==============
bdPlatformSocket::bind
==============
*/

bdSocketStatusCode __fastcall bdPlatformSocket::bind(int *handle, const bdSockAddr *addr)
{
  return ?bind@bdPlatformSocket@@SA?AW4bdSocketStatusCode@@AEAHVbdSockAddr@@@Z(handle, addr);
}

/*
==============
bdPlatformSocket::receiveFrom
==============
*/

int __fastcall bdPlatformSocket::receiveFrom(const int handle, bdSockAddr *addr, unsigned __int16 *port, void *data, const unsigned int size)
{
  return ?receiveFrom@bdPlatformSocket@@SAHHAEAVbdSockAddr@@AEAGPEAXI@Z(handle, addr, port, data, size);
}

/*
==============
bdPlatformSocket::close
==============
*/

bool __fastcall bdPlatformSocket::close(int *handle)
{
  return ?close@bdPlatformSocket@@SA_NAEAH@Z(handle);
}

/*
==============
bdPlatformSocket::receiveFrom
==============
*/

int __fastcall bdPlatformSocket::receiveFrom(const int handle, bdSockAddr *addr, void *data, const unsigned int size)
{
  return ?receiveFrom@bdPlatformSocket@@SAHHAEAVbdSockAddr@@PEAXI@Z(handle, addr, data, size);
}

/*
==============
bdPlatformSocket::create
==============
*/

int __fastcall bdPlatformSocket::create(const unsigned __int16 family, const bool blocking, const bool broadcast)
{
  return ?create@bdPlatformSocket@@SAHG_N0@Z(family, blocking, broadcast);
}

/*
==============
bdPlatformSocket::getHostByName
==============
*/

unsigned int __fastcall bdPlatformSocket::getHostByName(const char *const name, bdSockAddr *addresses, unsigned int numAddresses, const int __formal)
{
  return ?getHostByName@bdPlatformSocket@@SAIQEBDPEAVbdSockAddr@@IH@Z(name, addresses, numAddresses, __formal);
}

/*
==============
bdPlatformSocket::sendMMsg
==============
*/

int __fastcall bdPlatformSocket::sendMMsg(const int handle, const bdSockMsgHdr *msgVec, const unsigned int msgVecLen, unsigned int *numSent)
{
  return ?sendMMsg@bdPlatformSocket@@SAHHQEBVbdSockMsgHdr@@IAEAI@Z(handle, msgVec, msgVecLen, numSent);
}

/*
==============
bdPlatformSocket::abortGetHostByName
==============
*/
void bdPlatformSocket::abortGetHostByName(int __formal)
{
  ;
}

/*
==============
bdPlatformSocket::bind
==============
*/
__int64 bdPlatformSocket::bind(int *handle, const bdSockAddr *addr)
{
  const struct sockaddr *SockaddrStorage; 
  int Error; 
  int v6; 

  if ( *handle == -1 )
    return 4294967286i64;
  SockaddrStorage = (const struct sockaddr *)bdSockAddr::getSockaddrStorage((bdSockAddr *)addr);
  if ( !bind(*handle, SockaddrStorage, 128) )
    return 1i64;
  Error = WSAGetLastError();
  v6 = Error;
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformsocket-xboxone.cpp", "bdPlatformSocket::bind", 0xB9u, "Call to bind() failed, WSAGetLastError [%d]", v6);
  if ( Error == 6 )
    return 4294967286i64;
  if ( Error == 10013 || (unsigned int)(Error - 10048) <= 1 )
    return 4294967292i64;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
bdPlatformSocket::bind
==============
*/
bdSocketStatusCode bdPlatformSocket::bind(int *handle, const bdSockAddr *addr, const unsigned __int16 port)
{
  const bdSockAddr *v6; 
  bdSockAddr v8; 
  bdSockAddr other; 

  bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformsocket-xboxone.cpp", "bdPlatformSocket::bind", 0x90u, "DEPRECATED: bdSockAddr now contains a port, please use the version below without a port parameter.");
  bdSockAddr::bdSockAddr(&other, addr);
  bdSockAddr::setPort(&other, port);
  bdSockAddr::bdSockAddr(&v8, &other);
  return bdPlatformSocket::bind(handle, v6);
}

/*
==============
bdPlatformSocket::close
==============
*/
_BOOL8 bdPlatformSocket::close(int *handle)
{
  SOCKET v2; 
  bool v3; 

  v2 = *handle;
  v3 = (_DWORD)v2 == -1;
  if ( (_DWORD)v2 != -1 )
  {
    v3 = closesocket(v2) == 0;
    *handle = -1;
  }
  return v3;
}

/*
==============
bdPlatformSocket::create
==============
*/
__int64 bdPlatformSocket::create(const unsigned __int16 family, const bool blocking, const bool broadcast)
{
  int v5; 
  SOCKET v6; 
  int v7; 
  char *format; 
  __int64 v10; 
  int Error; 
  BOOL optval; 

  v5 = family;
  v6 = WSASocketA(family, 2, 17, NULL, 0, 1u);
  v7 = v6;
  if ( v6 == -1i64 )
  {
    Error = WSAGetLastError();
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdPlatformSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformsocket-xboxone.cpp", "bdPlatformSocket::create", 0x26u, "Call to WSASocket() failed, WSAGetLastError [%d]", Error);
  }
  if ( family != 2 )
  {
    if ( family == 23 )
    {
      optval = 0;
      if ( setsockopt(v7, 41, 27, (const char *)&optval, 4) )
      {
        LODWORD(v10) = WSAGetLastError();
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformsocket-xboxone.cpp", "bdPlatformSocket::create", 0x64u, "Call to setsockopt() failed, WSAGetLastError [%d]", v10);
        v7 = -1;
      }
      if ( broadcast )
      {
        if ( v7 == -1 )
          return (unsigned int)v7;
        bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformsocket-xboxone.cpp", "bdPlatformSocket::create", 0x6Au, "BROADCAST / MULTICAST NOT IMPLEMENTED!");
      }
    }
    else
    {
      LODWORD(format) = v5;
      bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformsocket-xboxone.cpp", "bdPlatformSocket::create", 0x71u, "Unknown Socket Family[%u] in create", format);
    }
LABEL_15:
    if ( v7 != -1 )
    {
      optval = !blocking;
      if ( ioctlsocket(v7, -2147195266, (u_long *)&optval) )
        return (unsigned int)-1;
    }
    return (unsigned int)v7;
  }
  if ( !broadcast )
    goto LABEL_15;
  if ( v7 != -1 )
  {
    optval = 1;
    if ( setsockopt(v7, 0xFFFF, 32, (const char *)&optval, 4) )
      return 0xFFFFFFFFi64;
    goto LABEL_15;
  }
  return (unsigned int)v7;
}

/*
==============
bdPlatformSocket::create
==============
*/
int bdPlatformSocket::create(const bool blocking, const bool broadcast)
{
  return bdPlatformSocket::create(2u, blocking, broadcast);
}

/*
==============
bdPlatformSocket::getHostByName
==============
*/
__int64 bdPlatformSocket::getHostByName(const char *const name, bdSockAddr *addresses, unsigned int numAddresses, const int __formal)
{
  int v5; 
  unsigned int v6; 
  PADDRINFOA v9; 
  size_t ai_addrlen; 
  sockaddr *ai_addr; 
  int Error; 
  PADDRINFOA ppResult; 
  ADDRINFOA pHints; 
  unsigned int addr[2]; 

  v5 = *name;
  v6 = 0;
  pHints.ai_flags = 0;
  memset(&pHints.ai_protocol, 0, 36);
  pHints.ai_family = 2;
  pHints.ai_socktype = 2;
  ppResult = NULL;
  if ( !isalpha(v5) )
    pHints.ai_flags |= 4u;
  if ( getaddrinfo(name, NULL, &pHints, &ppResult) || (v9 = ppResult) == NULL )
  {
    Error = WSAGetLastError();
    if ( Error == 11001 )
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformsocket-xboxone.cpp", "bdPlatformSocket::getHostByName", 0x27Du, "Host Not Found [%s]", name);
    else
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformsocket-xboxone.cpp", "bdPlatformSocket::getHostByName", 0x281u, "getHostByName: Error [%d]", Error);
  }
  else
  {
    if ( numAddresses )
    {
      do
      {
        if ( !v9 )
          break;
        ai_addrlen = v9->ai_addrlen;
        ai_addr = v9->ai_addr;
        *(_QWORD *)addr = 0i64;
        memcpy_0(addr, ai_addr, ai_addrlen);
        bdSockAddr::set(&addresses[(unsigned __int64)v6], addr[1]);
        v9 = v9->ai_next;
        ++v6;
      }
      while ( v6 < numAddresses );
      v9 = ppResult;
    }
    freeaddrinfo(v9);
  }
  return v6;
}

/*
==============
bdPlatformSocket::receiveFrom
==============
*/
int bdPlatformSocket::receiveFrom(const int handle, bdSockAddr *addr, unsigned __int16 *port, void *data, const unsigned int size)
{
  int result; 
  int v10; 

  bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformsocket-xboxone.cpp", "bdPlatformSocket::receiveFrom", 0x1C8u, "DEPRECATED: bdSockAddr now contains a port, please use the version below without a port parameter.");
  result = bdPlatformSocket::receiveFrom(handle, addr, data, size);
  v10 = result;
  if ( result )
  {
    *port = bdSockAddr::getPort(addr);
    return v10;
  }
  return result;
}

/*
==============
bdPlatformSocket::receiveFrom
==============
*/
__int64 bdPlatformSocket::receiveFrom(const int handle, bdSockAddr *addr, void *data, const unsigned int size)
{
  SOCKET v4; 
  __int64 result; 
  struct sockaddr *lpFrom; 
  int Error; 
  LPWSAOVERLAPPED lpOverlapped; 
  int Fromlen; 
  unsigned int Flags; 
  int v11; 
  _WSABUF Buffers; 
  unsigned int NumberOfBytesRecvd; 

  v4 = handle;
  if ( handle == -1 )
    return 4294967286i64;
  Buffers.len = size;
  Buffers.buf = (char *)data;
  NumberOfBytesRecvd = 0;
  Flags = 0;
  Fromlen = 128;
  lpFrom = (struct sockaddr *)bdSockAddr::getSockaddrStorage(addr);
  v11 = WSARecvFrom(v4, &Buffers, 1u, &NumberOfBytesRecvd, &Flags, lpFrom, &Fromlen, NULL, NULL);
  if ( v11 == -1 )
  {
    Error = WSAGetLastError();
    if ( Error > 10040 )
    {
      switch ( Error )
      {
        case 10050:
        case 10051:
        case 10053:
        case 10054:
        case 10060:
        case 10065:
          LODWORD(lpOverlapped) = Error;
          bdLogMessage(BD_LOG_INFO, "info/", "bdPlatformSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformsocket-xboxone.cpp", "bdPlatformSocket::receiveFrom", 0x20Fu, "recv: Received connection reset: error[%d]", lpOverlapped);
          result = 4294967291i64;
          break;
        default:
          return 0xFFFFFFFFi64;
      }
    }
    else
    {
      switch ( Error )
      {
        case 10040:
          return 4294967290i64;
        case 6:
          return 4294967286i64;
        case 10004:
          return 4294967288i64;
        case 10022:
          return 4294967287i64;
        case 10035:
          return 4294967294i64;
        default:
          return 0xFFFFFFFFi64;
      }
    }
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&bdPlatformSocket::s_totalBytesRecvd, NumberOfBytesRecvd + 48i64);
    _InterlockedExchangeAdd64((volatile signed __int64 *)&bdPlatformSocket::s_totalPacketsRecvd, 1ui64);
    return NumberOfBytesRecvd;
  }
  return result;
}

/*
==============
bdPlatformSocket::sendMMsg
==============
*/
int bdPlatformSocket::sendMMsg(const int handle, const bdSockMsgHdr *msgVec, const unsigned int msgVecLen, unsigned int *numSent)
{
  __int64 v8; 
  int result; 

  *numSent = 0;
  bdHandleAssert(msgVecLen != 0, "(msgVecLen > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformsocket-xboxone.cpp", "bdPlatformSocket::sendMMsg", 0x1ACu, "sendMMsg(): msgVecLen cannot be zero");
  if ( !msgVecLen )
    return -1;
  v8 = 0i64;
  *numSent = msgVecLen;
  while ( 1 )
  {
    result = bdPlatformSocket::sendMsg(handle, &msgVec[v8]);
    if ( result < 0 )
      break;
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= msgVecLen )
      return 0;
  }
  *numSent = v8;
  return result;
}

/*
==============
bdPlatformSocket::sendMsg
==============
*/
__int64 bdPlatformSocket::sendMsg(const int handle, const bdSockMsgHdr *msg)
{
  SOCKET v4; 
  __int64 result; 
  int Error; 
  unsigned int m_dataLen; 
  const void *m_data; 
  _WSAMSG Msg; 
  unsigned int NumberOfBytesSent; 

  v4 = handle;
  if ( handle == -1 )
    return (unsigned int)(handle - 9);
  if ( !msg->m_data && msg->m_dataLen )
    return 0xFFFFFFFFi64;
  m_data = msg->m_data;
  m_dataLen = msg->m_dataLen;
  *(&Msg.namelen + 1) = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+98h+Msg+1Ch], xmm0
  }
  HIDWORD(Msg.Control.buf) = 0;
  *(&Msg.dwFlags + 1) = 0;
  Msg.name = (sockaddr *)bdSockAddr::getSockaddrStorage((bdSockAddr *)msg->m_addr);
  Msg.namelen = bdSockAddr::getSockaddrLen((bdSockAddr *)msg->m_addr);
  Msg.lpBuffers = (_WSABUF *)&m_dataLen;
  Msg.dwBufferCount = 1;
  Msg.dwFlags = 0;
  NumberOfBytesSent = 0;
  if ( WSASendMsg(v4, &Msg, 0, &NumberOfBytesSent, NULL, NULL) != -1 )
  {
LABEL_9:
    _InterlockedExchangeAdd64((volatile signed __int64 *)&bdPlatformSocket::s_totalBytesSent, NumberOfBytesSent + 48i64);
    _InterlockedExchangeAdd64((volatile signed __int64 *)&bdPlatformSocket::s_totalPacketsSent, 1ui64);
    return NumberOfBytesSent;
  }
  Error = WSAGetLastError();
  if ( Error <= 10004 )
  {
    if ( Error == 10004 )
      return 4294967288i64;
    if ( Error == 997 )
      goto LABEL_9;
    return 0xFFFFFFFFi64;
  }
  switch ( Error )
  {
    case 10014:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdPlatformSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformsocket-xboxone.cpp", "bdPlatformSocket::sendMsg", 0x193u, "sendMsg(): Invalid parameter");
      return 0xFFFFFFFFi64;
    case 10022:
    case 10039:
    case 10047:
    case 10049:
      result = 4294967289i64;
      break;
    case 10035:
      result = 4294967294i64;
      break;
    case 10040:
      result = 4294967290i64;
      break;
    case 10050:
    case 10051:
    case 10053:
    case 10054:
    case 10060:
    case 10065:
      bdLogMessage(BD_LOG_INFO, "info/", "bdPlatformSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformsocket-xboxone.cpp", "bdPlatformSocket::sendMsg", 0x18Du, "sendMsg(): Received connection reset : %i", Error);
      result = 4294967291i64;
      break;
    default:
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
bdPlatformSocket::sendTo
==============
*/
int bdPlatformSocket::sendTo(const int handle, const bdSockAddr *addr, const unsigned __int16 port, const void *data, const unsigned int length)
{
  bdSockAddr addra; 

  bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformsocket-xboxone.cpp", "bdPlatformSocket::sendTo", 0xD8u, "DEPRECATED: bdSockAddr now contains a port, please use the version below without a port parameter.");
  bdSockAddr::bdSockAddr(&addra, addr);
  bdSockAddr::setPort(&addra, port);
  return bdPlatformSocket::sendTo(handle, &addra, data, length);
}

/*
==============
bdPlatformSocket::sendTo
==============
*/
__int64 bdPlatformSocket::sendTo(const int handle, const bdSockAddr *addr, const void *data, const unsigned int length)
{
  SOCKET v4; 
  const struct sockaddr *lpTo; 
  int Error; 
  __int64 result; 
  LPWSAOVERLAPPED lpOverlapped; 
  _WSABUF Buffers; 
  unsigned int NumberOfBytesSent; 

  v4 = handle;
  if ( handle == -1 )
    return 4294967286i64;
  NumberOfBytesSent = 0;
  Buffers.len = length;
  Buffers.buf = (char *)data;
  lpTo = (const struct sockaddr *)bdSockAddr::getSockaddrStorage((bdSockAddr *)addr);
  if ( WSASendTo(v4, &Buffers, 1u, &NumberOfBytesSent, 0, lpTo, 128, NULL, NULL) >= 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&bdPlatformSocket::s_totalBytesSent, NumberOfBytesSent + 48i64);
    _InterlockedExchangeAdd64((volatile signed __int64 *)&bdPlatformSocket::s_totalPacketsSent, 1ui64);
    return NumberOfBytesSent;
  }
  else
  {
    Error = WSAGetLastError();
    if ( Error > 10004 )
    {
      switch ( Error )
      {
        case 10022:
        case 10039:
        case 10047:
        case 10049:
          result = 4294967289i64;
          break;
        case 10035:
          result = 4294967294i64;
          break;
        case 10040:
          result = 4294967290i64;
          break;
        case 10050:
        case 10051:
        case 10053:
        case 10054:
        case 10060:
        case 10065:
          LODWORD(lpOverlapped) = Error;
          bdLogMessage(BD_LOG_INFO, "info/", "bdPlatformSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformsocket-xboxone.cpp", "bdPlatformSocket::sendTo", 0x128u, "Send: Received connection reset: error[%d]", lpOverlapped);
          result = 4294967291i64;
          break;
        default:
          return 0xFFFFFFFFi64;
      }
    }
    else if ( Error == 10004 )
    {
      return 4294967288i64;
    }
    else
    {
      if ( Error == 6 )
        return 4294967286i64;
      return 0xFFFFFFFFi64;
    }
  }
  return result;
}

/*
==============
bdPlatformSocket::setRecvBufferSize
==============
*/
int bdPlatformSocket::setRecvBufferSize(const int handle, const int recvBufferSize)
{
  int optionValue; 

  optionValue = recvBufferSize;
  return bdPlatformSocketHelper::setSocketOption(handle, 4098, &optionValue, 4u);
}

/*
==============
bdPlatformSocket::setSendBufferSize
==============
*/
int bdPlatformSocket::setSendBufferSize(const int handle, const int sendBufferSize)
{
  int optionValue; 

  optionValue = sendBufferSize;
  return bdPlatformSocketHelper::setSocketOption(handle, 4097, &optionValue, 4u);
}

/*
==============
bdPlatformSocketHelper::setSocketOption
==============
*/
int bdPlatformSocketHelper::setSocketOption(const int handle, const int option, const void *optionValue, const unsigned int optionLen)
{
  if ( handle == -1 )
    return -10;
  else
    return setsockopt(handle, 0xFFFF, option, (const char *)optionValue, optionLen);
}

/*
==============
bdPlatformSocket::unregisterThread
==============
*/
void bdPlatformSocket::unregisterThread(void)
{
  ;
}

