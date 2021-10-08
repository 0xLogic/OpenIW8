/*
==============
bdPlatformStreamSocket::setSendBufferSize
==============
*/

int __fastcall bdPlatformStreamSocket::setSendBufferSize(const int handle, const int sendBufferSize)
{
  return ?setSendBufferSize@bdPlatformStreamSocket@@SAHHH@Z(handle, sendBufferSize);
}

/*
==============
bdPlatformStreamSocket::connect
==============
*/

bdSocketStatusCode __fastcall bdPlatformStreamSocket::connect(const int handle, const bdSockAddr *addr)
{
  return ?connect@bdPlatformStreamSocket@@SA?AW4bdSocketStatusCode@@HVbdSockAddr@@@Z(handle, addr);
}

/*
==============
bdPlatformStreamSocket::connect
==============
*/

bdSocketStatusCode __fastcall bdPlatformStreamSocket::connect(const int handle, const bdSockAddr *addr, const unsigned __int16 port)
{
  return ?connect@bdPlatformStreamSocket@@SA?AW4bdSocketStatusCode@@HVbdSockAddr@@G@Z(handle, addr, port);
}

/*
==============
bdPlatformStreamSocket::unregisterThread
==============
*/

void bdPlatformStreamSocket::unregisterThread(void)
{
  ?unregisterThread@bdPlatformStreamSocket@@SAXXZ();
}

/*
==============
bdPlatformStreamSocket::create
==============
*/

int __fastcall bdPlatformStreamSocket::create(const bool blocking)
{
  return ?create@bdPlatformStreamSocket@@SAH_N@Z(blocking);
}

/*
==============
bdPlatformStreamSocket::create
==============
*/

int __fastcall bdPlatformStreamSocket::create(const unsigned __int16 family, const bool blocking)
{
  return ?create@bdPlatformStreamSocket@@SAHG_N@Z(family, blocking);
}

/*
==============
bdPlatformStreamSocket::isWritable
==============
*/

bool __fastcall bdPlatformStreamSocket::isWritable(const int handle, bdSocketStatusCode *error)
{
  return ?isWritable@bdPlatformStreamSocket@@SA_NHAEAW4bdSocketStatusCode@@@Z(handle, error);
}

/*
==============
bdPlatformStreamSocket::accept
==============
*/

bool __fastcall bdPlatformStreamSocket::accept(const int handle, int *newHandle, bdSockAddr *addr)
{
  return ?accept@bdPlatformStreamSocket@@SA_NHAEAHAEAVbdSockAddr@@@Z(handle, newHandle, addr);
}

/*
==============
bdPlatformStreamSocket::setRecvBufferSize
==============
*/

int __fastcall bdPlatformStreamSocket::setRecvBufferSize(const int handle, const int recvBufferSize)
{
  return ?setRecvBufferSize@bdPlatformStreamSocket@@SAHHH@Z(handle, recvBufferSize);
}

/*
==============
bdPlatformStreamSocket::send
==============
*/

int __fastcall bdPlatformStreamSocket::send(const int handle, const void *const data, const unsigned int length)
{
  return ?send@bdPlatformStreamSocket@@SAHHQEBXI@Z(handle, data, length);
}

/*
==============
bdPlatformStreamSocket::accept
==============
*/

bool __fastcall bdPlatformStreamSocket::accept(const int handle, int *newHandle, bdSockAddr *addr, unsigned __int16 *port)
{
  return ?accept@bdPlatformStreamSocket@@SA_NHAEAHAEAVbdSockAddr@@AEAG@Z(handle, newHandle, addr, port);
}

/*
==============
bdPlatformStreamSocket::close
==============
*/

bool __fastcall bdPlatformStreamSocket::close(const int handle)
{
  return ?close@bdPlatformStreamSocket@@SA_NH@Z(handle);
}

/*
==============
bdPlatformStreamSocket::isWritable
==============
*/

bool __fastcall bdPlatformStreamSocket::isWritable(const int handle)
{
  return ?isWritable@bdPlatformStreamSocket@@SA_NH@Z(handle);
}

/*
==============
bdPlatformStreamSocketHelper::setSocketOption
==============
*/

int __fastcall bdPlatformStreamSocketHelper::setSocketOption(const int handle, const int option, const void *optionValue, const unsigned int optionLen)
{
  return ?setSocketOption@bdPlatformStreamSocketHelper@@SAHHHPEBXI@Z(handle, option, optionValue, optionLen);
}

/*
==============
bdPlatformStreamSocket::bind
==============
*/

bdSocketStatusCode __fastcall bdPlatformStreamSocket::bind(const int handle, const bdSockAddr *addr)
{
  return ?bind@bdPlatformStreamSocket@@SA?AW4bdSocketStatusCode@@HVbdSockAddr@@@Z(handle, addr);
}

/*
==============
bdPlatformStreamSocket::receive
==============
*/

int __fastcall bdPlatformStreamSocket::receive(const int handle, void *const data, const unsigned int size)
{
  return ?receive@bdPlatformStreamSocket@@SAHHQEAXI@Z(handle, data, size);
}

/*
==============
bdPlatformStreamSocket::bind
==============
*/

bdSocketStatusCode __fastcall bdPlatformStreamSocket::bind(const int handle, const bdSockAddr *addr, const unsigned __int16 port)
{
  return ?bind@bdPlatformStreamSocket@@SA?AW4bdSocketStatusCode@@HVbdSockAddr@@G@Z(handle, addr, port);
}

/*
==============
bdPlatformStreamSocket::checkSocketException
==============
*/

bool __fastcall bdPlatformStreamSocket::checkSocketException(const int handle)
{
  return ?checkSocketException@bdPlatformStreamSocket@@SA_NH@Z(handle);
}

/*
==============
bdPlatformStreamSocket::accept
==============
*/
__int64 bdPlatformStreamSocket::accept(const int handle, int *newHandle, bdSockAddr *addr)
{
  SOCKET v4; 
  unsigned __int8 v5; 
  struct sockaddr *SockaddrStorage; 
  int v7; 
  int addrlen[6]; 

  v4 = handle;
  v5 = 0;
  addrlen[0] = 128;
  SockaddrStorage = (struct sockaddr *)bdSockAddr::getSockaddrStorage(addr);
  v7 = accept(v4, SockaddrStorage, addrlen);
  addrlen[1] = v7;
  if ( v7 != -1 )
  {
    *newHandle = v7;
    return 1;
  }
  return v5;
}

/*
==============
bdPlatformStreamSocket::accept
==============
*/
__int64 bdPlatformStreamSocket::accept(const int handle, int *newHandle, bdSockAddr *addr, unsigned __int16 *port)
{
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformStreamSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformstreamsocket-xboxone.cpp", "bdPlatformStreamSocket::accept", 0xCBu, "DEPRECATED: bdSockAddr now contains a port, please use the version below without a port parameter.");
  LOBYTE(newHandle) = bdPlatformStreamSocket::accept(handle, newHandle, addr);
  *port = bdSockAddr::getPort(addr);
  return (unsigned __int8)newHandle;
}

/*
==============
bdPlatformStreamSocket::bind
==============
*/
__int64 bdPlatformStreamSocket::bind(const int handle, const bdSockAddr *addr)
{
  SOCKET v2; 
  const struct sockaddr *SockaddrStorage; 
  int Error; 
  int v6; 

  v2 = handle;
  if ( handle == -1 )
    return 4294967286i64;
  SockaddrStorage = (const struct sockaddr *)bdSockAddr::getSockaddrStorage((bdSockAddr *)addr);
  if ( bind(v2, SockaddrStorage, 128) != -1 )
  {
    listen((int)v2, 0x7FFFFFFF);
    return 1i64;
  }
  Error = WSAGetLastError();
  v6 = Error;
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformStreamSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformstreamsocket-xboxone.cpp", "bdPlatformStreamSocket::bind", 0x61u, "Call to bind() failed, WSAGetLastError [%d]", v6);
  if ( Error == 6 )
    return 4294967286i64;
  if ( Error == 10013 || (unsigned int)(Error - 10048) <= 1 )
    return 4294967292i64;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
bdPlatformStreamSocket::bind
==============
*/
bdSocketStatusCode bdPlatformStreamSocket::bind(const int handle, const bdSockAddr *addr, const unsigned __int16 port)
{
  const bdSockAddr *v6; 
  bdSockAddr v8; 
  bdSockAddr other; 

  bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformStreamSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformstreamsocket-xboxone.cpp", "bdPlatformStreamSocket::bind", 0x3Fu, "DEPRECATED: bdSockAddr now contains a port, please use the version below without a port parameter.");
  bdSockAddr::bdSockAddr(&other, addr);
  bdSockAddr::setPort(&other, port);
  bdSockAddr::bdSockAddr(&v8, &other);
  return bdPlatformStreamSocket::bind(handle, v6);
}

/*
==============
bdPlatformStreamSocket::checkSocketException
==============
*/
bool bdPlatformStreamSocket::checkSocketException(const int handle)
{
  SOCKET v1; 
  int v2; 
  struct timeval timeout; 
  fd_set exceptfds; 

  v1 = handle;
  timeout = 0i64;
  exceptfds.fd_array[0] = handle;
  exceptfds.fd_count = 1;
  if ( select(0, NULL, NULL, &exceptfds, &timeout) == -1 || (v2 = _WSAFDIsSet_0(v1, &exceptfds)) != 0 )
    LOBYTE(v2) = 1;
  return v2;
}

/*
==============
bdPlatformStreamSocket::close
==============
*/
bool bdPlatformStreamSocket::close(const int handle)
{
  bool result; 
  int v2; 
  int Error; 

  result = 1;
  if ( handle != -1 )
  {
    v2 = closesocket(handle);
    if ( v2 )
    {
      if ( v2 == -1 )
      {
        Error = WSAGetLastError();
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformStreamSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformstreamsocket-xboxone.cpp", "bdPlatformStreamSocket::close", 0x1A4u, "Failed to close socket Error %i.", Error);
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformStreamSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformstreamsocket-xboxone.cpp", "bdPlatformStreamSocket::close", 0x1A9u, "Failed to close socket. Unknown Error Code %i.", v2);
      }
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

/*
==============
bdPlatformStreamSocket::connect
==============
*/
__int64 bdPlatformStreamSocket::connect(const int handle, const bdSockAddr *addr)
{
  SOCKET v2; 
  const struct sockaddr *SockaddrStorage; 
  int Error; 
  int v5; 
  int v6; 
  int v7; 
  __int64 result; 

  v2 = handle;
  SockaddrStorage = (const struct sockaddr *)bdSockAddr::getSockaddrStorage((bdSockAddr *)addr);
  if ( connect(v2, SockaddrStorage, 128) >= 0 )
    return 1i64;
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
        result = 4294967291i64;
        break;
      default:
        return 0xFFFFFFFFi64;
    }
  }
  else if ( Error == 10040 )
  {
    return 4294967290i64;
  }
  else
  {
    v5 = Error - 6;
    if ( v5 )
    {
      v6 = v5 - 9998;
      if ( v6 )
      {
        v7 = v6 - 18;
        if ( v7 )
        {
          if ( v7 == 13 )
            return 4294967294i64;
          else
            return 0xFFFFFFFFi64;
        }
        else
        {
          return 4294967287i64;
        }
      }
      else
      {
        return 4294967288i64;
      }
    }
    else
    {
      return 4294967286i64;
    }
  }
  return result;
}

/*
==============
bdPlatformStreamSocket::connect
==============
*/
bdSocketStatusCode bdPlatformStreamSocket::connect(const int handle, const bdSockAddr *addr, const unsigned __int16 port)
{
  const bdSockAddr *v6; 
  bdSockAddr v8; 
  bdSockAddr other; 

  bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformStreamSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdplatformstreamsocket-xboxone.cpp", "bdPlatformStreamSocket::connect", 0x7Fu, "DEPRECATED: bdSockAddr now contains a port, please use the version below without a port parameter.");
  bdSockAddr::bdSockAddr(&other, addr);
  bdSockAddr::setPort(&other, port);
  bdSockAddr::bdSockAddr(&v8, &other);
  return bdPlatformStreamSocket::connect(handle, v6);
}

/*
==============
bdPlatformStreamSocket::create
==============
*/
__int64 bdPlatformStreamSocket::create(const unsigned __int16 family, const bool blocking)
{
  int v3; 
  unsigned int v4; 
  u_long argp; 
  int v7; 

  v3 = socket(family, 1, 6);
  v4 = v3;
  v7 = v3;
  if ( v3 != -1 )
  {
    argp = !blocking;
    if ( ioctlsocket(v3, -2147195266, &argp) )
      return (unsigned int)-1;
  }
  return v4;
}

/*
==============
bdPlatformStreamSocket::create
==============
*/
int bdPlatformStreamSocket::create(const bool blocking)
{
  return bdPlatformStreamSocket::create(2u, blocking);
}

/*
==============
bdPlatformStreamSocket::isWritable
==============
*/
_BOOL8 bdPlatformStreamSocket::isWritable(const int handle)
{
  SOCKET v1; 
  int v2; 
  bool v3; 
  struct timeval timeout; 
  fd_set writefds; 
  fd_set exceptfds; 

  v1 = handle;
  writefds.fd_array[0] = handle;
  timeout = 0i64;
  writefds.fd_count = 1;
  exceptfds.fd_array[0] = handle;
  exceptfds.fd_count = 1;
  v2 = select(0, NULL, &writefds, &exceptfds, &timeout);
  v3 = _WSAFDIsSet_0(v1, &writefds) && v2 != -1;
  if ( _WSAFDIsSet_0(v1, &exceptfds) )
    WSAGetLastError();
  return v3;
}

/*
==============
bdPlatformStreamSocket::isWritable
==============
*/
_BOOL8 bdPlatformStreamSocket::isWritable(const int handle, bdSocketStatusCode *error)
{
  SOCKET v2; 
  int v4; 
  bool v5; 
  struct timeval timeout; 
  fd_set writefds; 
  fd_set exceptfds; 

  v2 = handle;
  *error = BD_NET_SUCCESS;
  timeout = 0i64;
  writefds.fd_array[0] = handle;
  writefds.fd_count = 1;
  exceptfds.fd_array[0] = handle;
  exceptfds.fd_count = 1;
  v4 = select(0, NULL, &writefds, &exceptfds, &timeout);
  v5 = _WSAFDIsSet_0(v2, &writefds) && v4 != -1;
  if ( _WSAFDIsSet_0(v2, &exceptfds) )
  {
    switch ( WSAGetLastError() )
    {
      case 10004:
        *error = BD_NET_BLOCKING_CALL_CANCELED;
        break;
      case 10022:
        *error = BD_NET_INVALID_HANDLE;
        break;
      case 10050:
      case 10053:
      case 10054:
      case 10060:
        *error = BD_NET_CONNECTION_RESET;
        break;
      case 10051:
      case 10065:
        *error = BD_NET_HOST_UNREACH;
        break;
      case 10057:
        *error = BD_NET_NOT_CONNECTED;
        break;
      default:
        *error = BD_NET_ERROR;
        break;
    }
  }
  return v5;
}

/*
==============
bdPlatformStreamSocket::receive
==============
*/
__int64 bdPlatformStreamSocket::receive(const int handle, void *const data, const unsigned int size)
{
  int v5; 
  int Error; 

  if ( handle == -1 )
    return 4294967286i64;
  v5 = recv(handle, (char *)data, size, 0);
  if ( v5 < 0 )
  {
    Error = WSAGetLastError();
    if ( Error > 10051 )
    {
      if ( Error < 10053 )
        return 0xFFFFFFFFi64;
      if ( Error > 10054 )
      {
        if ( Error == 10057 )
        {
          bdPlatformStreamSocket::checkSocketException(handle);
          return 4294967290i64;
        }
        if ( Error != 10060 && Error != 10065 )
          return 0xFFFFFFFFi64;
      }
    }
    else if ( Error < 10050 )
    {
      switch ( Error )
      {
        case 6:
          return 4294967286i64;
        case 10004:
          return 4294967288i64;
        case 10022:
          return 4294967287i64;
        case 10035:
          return 4294967294i64;
      }
      if ( Error != 10040 )
        return 0xFFFFFFFFi64;
      return 4294967290i64;
    }
    return 4294967291i64;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)&bdPlatformStreamSocket::m_totalBytesRecvd, v5);
  return (unsigned int)v5;
}

/*
==============
bdPlatformStreamSocket::send
==============
*/
__int64 bdPlatformStreamSocket::send(const int handle, const void *const data, const unsigned int length)
{
  int v4; 
  int Error; 
  __int64 result; 
  bool v7; 
  unsigned int v8; 

  if ( handle == -1 )
    return 4294967286i64;
  v4 = send(handle, (const char *)data, length, 0);
  if ( v4 >= 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&bdPlatformStreamSocket::m_totalBytesSent, v4);
    return (unsigned int)v4;
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
        case 10061:
        case 10065:
          result = 4294967291i64;
          break;
        case 10057:
          v7 = bdPlatformStreamSocket::checkSocketException(handle);
          v8 = -11;
          if ( v7 )
            v8 = -5;
          result = v8;
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
bdPlatformStreamSocket::setRecvBufferSize
==============
*/
int bdPlatformStreamSocket::setRecvBufferSize(const int handle, const int recvBufferSize)
{
  int optionValue; 

  optionValue = recvBufferSize;
  return bdPlatformStreamSocketHelper::setSocketOption(handle, 4098, &optionValue, 4u);
}

/*
==============
bdPlatformStreamSocket::setSendBufferSize
==============
*/
int bdPlatformStreamSocket::setSendBufferSize(const int handle, const int sendBufferSize)
{
  int optionValue; 

  optionValue = sendBufferSize;
  return bdPlatformStreamSocketHelper::setSocketOption(handle, 4097, &optionValue, 4u);
}

/*
==============
bdPlatformStreamSocketHelper::setSocketOption
==============
*/
int bdPlatformStreamSocketHelper::setSocketOption(const int handle, const int option, const void *optionValue, const unsigned int optionLen)
{
  if ( handle == -1 )
    return -10;
  else
    return setsockopt(handle, 0xFFFF, option, (const char *)optionValue, optionLen);
}

/*
==============
bdPlatformStreamSocket::unregisterThread
==============
*/
void bdPlatformStreamSocket::unregisterThread(void)
{
  ;
}

