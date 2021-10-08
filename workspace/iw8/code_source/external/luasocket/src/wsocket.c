/*
==============
socket_accept
==============
*/
int socket_accept(unsigned __int64 *ps, unsigned __int64 *pa, sockaddr *addr, int *len, t_timeout_ *tm)
{
  unsigned __int64 v8; 
  int result; 
  unsigned __int64 v11; 

  _RDI = tm;
  v8 = *ps;
  if ( v8 == -1i64 )
    return -2;
  __asm
  {
    vmovaps [rsp+2B8h+var_48], xmm6
    vmovaps [rsp+2B8h+var_58], xmm7
  }
  v11 = accept(v8, addr, len);
  *pa = v11;
  if ( v11 == -1i64 )
  {
    __asm
    {
      vmovsd  xmm7, cs:__real@412e848000000000
      vxorpd  xmm6, xmm6, xmm6
    }
    result = WSAGetLastError();
    if ( result == 10035 || result == 10053 )
    {
      __asm { vucomisd xmm6, qword ptr [rdi] }
      result = -1;
    }
  }
  else
  {
    result = 0;
  }
  __asm
  {
    vmovaps xmm6, [rsp+2B8h+var_48]
    vmovaps xmm7, [rsp+2B8h+var_58]
  }
  return result;
}

/*
==============
socket_bind
==============
*/
__int64 socket_bind(unsigned __int64 *ps, sockaddr *addr, int len)
{
  unsigned __int64 v6; 
  unsigned int Error; 
  unsigned __int64 v8; 
  u_long argp; 

  v6 = *ps;
  Error = 0;
  argp = 0;
  ioctlsocket(v6, -2147195266, &argp);
  if ( bind(*ps, addr, len) < 0 )
    Error = WSAGetLastError();
  v8 = *ps;
  argp = 1;
  ioctlsocket(v8, -2147195266, &argp);
  return Error;
}

/*
==============
socket_close
==============
*/
__int64 socket_close()
{
  WSACleanup();
  return 1i64;
}

/*
==============
socket_connect
==============
*/
int socket_connect(unsigned __int64 *ps, sockaddr *addr, int len, t_timeout_ *tm)
{
  unsigned __int64 v7; 
  int result; 
  int optlen[6]; 
  int optval; 

  _RBX = tm;
  v7 = *ps;
  if ( v7 == -1i64 )
    return -2;
  result = connect(v7, addr, len);
  if ( result )
  {
    result = WSAGetLastError();
    optval = result;
    if ( (unsigned int)(result - 10035) <= 1 )
    {
      __asm
      {
        vxorpd  xmm0, xmm0, xmm0
        vucomisd xmm0, qword ptr [rbx]
      }
      if ( result == 10036 )
      {
        return -1;
      }
      else
      {
        result = j_socket_waitfd(ps, 6, _RBX);
        optval = result;
        if ( result == -2 )
        {
          optlen[0] = 4;
          Sleep(0xAu);
          getsockopt(*ps, 0xFFFF, 4103, (char *)&optval, optlen);
          result = -3;
          if ( optval > 0 )
            return optval;
        }
      }
    }
  }
  return result;
}

/*
==============
socket_create
==============
*/
int socket_create(unsigned __int64 *ps, int domain, int type, int protocol)
{
  unsigned __int64 v5; 

  v5 = socket(domain, type, protocol);
  *ps = v5;
  if ( v5 == -1i64 )
    return WSAGetLastError();
  else
    return 0;
}

/*
==============
socket_destroy
==============
*/
void socket_destroy(unsigned __int64 *ps)
{
  unsigned __int64 v2; 
  u_long argp; 

  v2 = *ps;
  if ( v2 != -1i64 )
  {
    argp = 0;
    ioctlsocket(v2, -2147195266, &argp);
    closesocket(*ps);
    *ps = -1i64;
  }
}

/*
==============
socket_gaistrerror
==============
*/
const char *socket_gaistrerror(int err)
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 

  if ( !err )
    return 0i64;
  if ( err <= 10109 )
  {
    if ( err == 10109 )
      return "service not supported for socket type";
    v2 = err - 8;
    if ( !v2 )
      return "memory allocation failure";
    v3 = v2 - 10014;
    if ( !v3 )
      return "invalid value for ai_flags";
    v4 = v3 - 22;
    if ( !v4 )
      return "ai_socktype not supported";
    if ( v4 == 3 )
      return "ai_family not supported";
    return "socket error";
  }
  v5 = err - 11001;
  if ( !v5 )
    return "host or service not provided, or not known";
  v6 = v5 - 1;
  if ( !v6 )
    return "temporary failure in name resolution";
  if ( v6 != 1 )
    return "socket error";
  return "non-recoverable failure in name resolution";
}

/*
==============
socket_gethostbyaddr
==============
*/
int socket_gethostbyaddr(const char *addr, int len, hostent **hp)
{
  hostent *v4; 

  v4 = gethostbyaddr(addr, len, 2);
  *hp = v4;
  if ( v4 )
    return 0;
  else
    return WSAGetLastError();
}

/*
==============
socket_gethostbyname
==============
*/
int socket_gethostbyname(const char *addr, hostent **hp)
{
  hostent *v3; 

  v3 = gethostbyname(addr);
  *hp = v3;
  if ( v3 )
    return 0;
  else
    return WSAGetLastError();
}

/*
==============
socket_hoststrerror
==============
*/
const char *socket_hoststrerror(int err)
{
  if ( err <= 0 )
    return j_io_strerror(err);
  if ( err == 11001 )
    return "host not found";
  return wstrerror(err);
}

/*
==============
socket_ioerror
==============
*/
const char *socket_ioerror(unsigned __int64 *ps, int err)
{
  const char *result; 

  if ( err <= 0 )
    return j_io_strerror(err);
  switch ( err )
  {
    case 10013:
      result = "permission denied";
      break;
    case 10048:
      result = "address already in use";
      break;
    case 10053:
    case 10054:
      result = "closed";
      break;
    case 10056:
      result = "already connected";
      break;
    case 10060:
      result = "timeout";
      break;
    case 10061:
      result = "connection refused";
      break;
    default:
      result = wstrerror(err);
      break;
  }
  return result;
}

/*
==============
socket_listen
==============
*/
__int64 socket_listen(unsigned __int64 *ps, int backlog)
{
  unsigned int Error; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  u_long argp; 

  Error = 0;
  v5 = *ps;
  argp = 0;
  ioctlsocket(v5, -2147195266, &argp);
  if ( listen(*ps, backlog) < 0 )
    Error = WSAGetLastError();
  v6 = *ps;
  argp = 1;
  ioctlsocket(v6, -2147195266, &argp);
  return Error;
}

/*
==============
socket_open
==============
*/
__int64 socket_open()
{
  WSAData WSAData; 

  if ( WSAStartup(2u, &WSAData) )
    return 0i64;
  if ( LOBYTE(WSAData.wVersion) == 2 )
  {
    if ( HIBYTE(WSAData.wVersion) )
    {
LABEL_4:
      WSACleanup();
      return 0i64;
    }
  }
  else if ( WSAData.wVersion != 257 )
  {
    goto LABEL_4;
  }
  return 1i64;
}

/*
==============
socket_recv
==============
*/
int socket_recv(unsigned __int64 *ps, char *data, unsigned __int64 count, unsigned __int64 *got, t_timeout_ *tm)
{
  int v5; 
  unsigned __int64 v8; 
  int v9; 
  int v11; 
  bool v12; 
  int result; 

  v5 = 0;
  *got = 0i64;
  v8 = *ps;
  v9 = count;
  if ( v8 != -1i64 )
  {
    v11 = recv(v8, data, count, 0);
    v12 = v11 == 0;
    if ( v11 > 0 )
    {
LABEL_10:
      *got = v11;
      return 0;
    }
    while ( !v12 )
    {
      result = WSAGetLastError();
      if ( result != 10035 )
      {
        if ( result != 10054 || v5 == 10054 )
          return result;
        v5 = 10054;
      }
      result = j_socket_waitfd(ps, 1, tm);
      if ( result )
        return result;
      v11 = recv(*ps, data, v9, 0);
      v12 = v11 == 0;
      if ( v11 > 0 )
        goto LABEL_10;
    }
  }
  return -2;
}

/*
==============
socket_recvfrom
==============
*/
int socket_recvfrom(unsigned __int64 *ps, char *data, unsigned __int64 count, unsigned __int64 *got, sockaddr *addr, int *len, t_timeout_ *tm)
{
  int v7; 
  unsigned __int64 v10; 
  int v11; 
  int v13; 
  bool v14; 
  int result; 

  v7 = 0;
  *got = 0i64;
  v10 = *ps;
  v11 = count;
  if ( v10 != -1i64 )
  {
    v13 = recvfrom(v10, data, count, 0, addr, len);
    v14 = v13 == 0;
    if ( v13 > 0 )
    {
LABEL_10:
      *got = v13;
      return 0;
    }
    while ( !v14 )
    {
      result = WSAGetLastError();
      if ( result != 10035 )
      {
        if ( result != 10054 || v7 == 10054 )
          return result;
        v7 = 10054;
      }
      result = j_socket_waitfd(ps, 1, tm);
      if ( result )
        return result;
      v13 = recvfrom(*ps, data, v11, 0, addr, len);
      v14 = v13 == 0;
      if ( v13 > 0 )
        goto LABEL_10;
    }
  }
  return -2;
}

/*
==============
socket_select
==============
*/
int socket_select(unsigned __int64 n, fd_set *rfds, fd_set *wfds, fd_set *efds, t_timeout_ *tm)
{
  struct timeval timeout; 

  *(double *)&_XMM0 = j_timeout_get(tm);
  __asm { vcvttsd2si eax, xmm0 }
  timeout.tv_sec = _EAX;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, eax
    vsubsd  xmm2, xmm0, xmm1
    vmulsd  xmm3, xmm2, cs:__real@412e848000000000
    vcvttsd2si eax, xmm3
  }
  timeout.tv_usec = _EAX;
  __asm { vmovaps xmm4, xmm0 }
  if ( n )
  {
    __asm
    {
      vxorpd  xmm0, xmm0, xmm0
      vcomisd xmm4, xmm0
    }
    return select(0, rfds, wfds, efds, &timeout);
  }
  else
  {
    __asm
    {
      vmulsd  xmm0, xmm0, cs:__real@408f400000000000
      vcvttsd2si rcx, xmm0; dwMilliseconds
    }
    Sleep(_RCX);
    return 0;
  }
}

/*
==============
socket_send
==============
*/
int socket_send(unsigned __int64 *ps, const char *data, unsigned __int64 count, unsigned __int64 *sent, t_timeout_ *tm)
{
  unsigned __int64 v9; 
  int result; 
  int v11; 

  _RDI = tm;
  *sent = 0i64;
  v9 = *ps;
  if ( v9 == -1i64 )
    return -2;
  __asm
  {
    vmovaps [rsp+4C8h+var_48], xmm6
    vmovaps [rsp+4C8h+var_58], xmm7
  }
  v11 = send(v9, data, count, 0);
  if ( v11 > 0 )
  {
    *sent = v11;
    result = 0;
  }
  else
  {
    __asm
    {
      vmovsd  xmm7, cs:__real@412e848000000000
      vxorpd  xmm6, xmm6, xmm6
    }
    result = WSAGetLastError();
    if ( result == 10035 )
    {
      __asm { vucomisd xmm6, qword ptr [rdi] }
      result = -1;
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+4C8h+var_48]
    vmovaps xmm7, [rsp+4C8h+var_58]
  }
  return result;
}

/*
==============
socket_sendto
==============
*/
int socket_sendto(unsigned __int64 *ps, const char *data, unsigned __int64 count, unsigned __int64 *sent, sockaddr *addr, int len, t_timeout_ *tm)
{
  unsigned __int64 v11; 
  int result; 
  int v13; 

  _RDI = tm;
  *sent = 0i64;
  v11 = *ps;
  if ( v11 == -1i64 )
    return -2;
  __asm
  {
    vmovaps [rsp+4D8h+var_58], xmm6
    vmovaps [rsp+4D8h+var_68], xmm7
  }
  v13 = sendto(v11, data, count, 0, addr, len);
  if ( v13 > 0 )
  {
    *sent = v13;
    result = 0;
  }
  else
  {
    __asm
    {
      vmovsd  xmm7, cs:__real@412e848000000000
      vxorpd  xmm6, xmm6, xmm6
    }
    result = WSAGetLastError();
    if ( result == 10035 )
    {
      __asm { vucomisd xmm6, qword ptr [rdi] }
      result = -1;
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+4D8h+var_58]
    vmovaps xmm7, [rsp+4D8h+var_68]
  }
  return result;
}

/*
==============
socket_setblocking
==============
*/
void socket_setblocking(unsigned __int64 *ps)
{
  unsigned __int64 v1; 
  u_long argp; 

  v1 = *ps;
  argp = 0;
  ioctlsocket(v1, -2147195266, &argp);
}

/*
==============
socket_setnonblocking
==============
*/
void socket_setnonblocking(unsigned __int64 *ps)
{
  unsigned __int64 v1; 
  u_long argp; 

  v1 = *ps;
  argp = 1;
  ioctlsocket(v1, -2147195266, &argp);
}

/*
==============
socket_shutdown
==============
*/
void socket_shutdown(unsigned __int64 *ps, int how)
{
  unsigned __int64 v4; 
  u_long argp; 

  argp = 0;
  ioctlsocket(*ps, -2147195266, &argp);
  shutdown(*ps, how);
  v4 = *ps;
  argp = 1;
  ioctlsocket(v4, -2147195266, &argp);
}

/*
==============
socket_strerror
==============
*/
const char *socket_strerror(int err)
{
  const char *result; 

  if ( err <= 0 )
    return j_io_strerror(err);
  switch ( err )
  {
    case 10013:
      result = "permission denied";
      break;
    case 10048:
      result = "address already in use";
      break;
    case 10053:
    case 10054:
      result = "closed";
      break;
    case 10056:
      result = "already connected";
      break;
    case 10060:
      result = "timeout";
      break;
    case 10061:
      result = "connection refused";
      break;
    default:
      result = wstrerror(err);
      break;
  }
  return result;
}

/*
==============
socket_waitfd
==============
*/
__int64 socket_waitfd(unsigned __int64 *ps, int sw, t_timeout_ *tm)
{
  __int64 result; 

  __asm
  {
    vmovaps [rsp+6B8h+var_38], xmm6
    vxorpd  xmm6, xmm6, xmm6
    vucomisd xmm6, qword ptr [r8]
  }
  result = 0xFFFFFFFFi64;
  __asm { vmovaps xmm6, [rsp+6B8h+var_38] }
  return result;
}

/*
==============
wstrerror
==============
*/
const char *wstrerror(int err)
{
  const char *result; 
  int v2; 
  int v3; 

  if ( err > 11001 )
  {
    v2 = err - 11002;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 == 1 )
          return "Valid name, no data record of requested type";
        else
          return "Unknown error";
      }
      else
      {
        return "non-recoverable failure in name resolution";
      }
    }
    else
    {
      return "Nonauthoritative host not found";
    }
  }
  else if ( err == 11001 )
  {
    return "host not found";
  }
  else
  {
    switch ( err )
    {
      case 10004:
        result = "Interrupted function call";
        break;
      case 10013:
        result = "permission denied";
        break;
      case 10014:
        result = "Bad address";
        break;
      case 10022:
        result = "Invalid argument";
        break;
      case 10024:
        result = "Too many open files";
        break;
      case 10035:
        result = "Resource temporarily unavailable";
        break;
      case 10036:
        result = "Operation now in progress";
        break;
      case 10037:
        result = "Operation already in progress";
        break;
      case 10038:
        result = "Socket operation on nonsocket";
        break;
      case 10039:
        result = "Destination address required";
        break;
      case 10040:
        result = "Message too long";
        break;
      case 10041:
        result = "Protocol wrong type for socket";
        break;
      case 10042:
        result = "Bad protocol option";
        break;
      case 10043:
        result = "Protocol not supported";
        break;
      case 10044:
        result = "ai_socktype not supported";
        break;
      case 10045:
        result = "Operation not supported";
        break;
      case 10046:
        result = "Protocol family not supported";
        break;
      case 10047:
        result = "ai_family not supported";
        break;
      case 10048:
        result = "address already in use";
        break;
      case 10049:
        result = "Cannot assign requested address";
        break;
      case 10050:
        result = "Network is down";
        break;
      case 10051:
        result = "Network is unreachable";
        break;
      case 10052:
        result = "Network dropped connection on reset";
        break;
      case 10053:
        result = "Software caused connection abort";
        break;
      case 10054:
        result = "closed";
        break;
      case 10055:
        result = "No buffer space available";
        break;
      case 10056:
        result = "already connected";
        break;
      case 10057:
        result = "Socket is not connected";
        break;
      case 10058:
        result = "Cannot send after socket shutdown";
        break;
      case 10060:
        result = "timeout";
        break;
      case 10061:
        result = "connection refused";
        break;
      case 10064:
        result = "Host is down";
        break;
      case 10065:
        result = "No route to host";
        break;
      case 10067:
        result = "Too many processes";
        break;
      case 10091:
        result = "Network subsystem is unavailable";
        break;
      case 10092:
        result = "Winsock.dll version out of range";
        break;
      case 10093:
        result = "Successful WSAStartup not yet performed";
        break;
      case 10101:
        result = "Graceful shutdown in progress";
        break;
      default:
        return "Unknown error";
    }
  }
  return result;
}

