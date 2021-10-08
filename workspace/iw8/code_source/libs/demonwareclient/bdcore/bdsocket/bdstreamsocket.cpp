/*
==============
bdStreamSocket::bind
==============
*/

bdSocketStatusCode __fastcall bdStreamSocket::bind(bdStreamSocket *this, const unsigned __int16 family, const unsigned __int16 port)
{
  return ?bind@bdStreamSocket@@QEBA?AW4bdSocketStatusCode@@GG@Z(this, family, port);
}

/*
==============
bdStreamSocket::recv
==============
*/

int __fastcall bdStreamSocket::recv(bdStreamSocket *this, void *data, const unsigned int size)
{
  return ?recv@bdStreamSocket@@QEBAHPEAXI@Z(this, data, size);
}

/*
==============
bdStreamSocket::bdStreamSocket
==============
*/

void __fastcall bdStreamSocket::bdStreamSocket(bdStreamSocket *this)
{
  ??0bdStreamSocket@@QEAA@XZ(this);
}

/*
==============
bdStreamSocket::setRecvBufferSize
==============
*/

int __fastcall bdStreamSocket::setRecvBufferSize(bdStreamSocket *this, const int recvBufferSize)
{
  return ?setRecvBufferSize@bdStreamSocket@@UEAAHH@Z(this, recvBufferSize);
}

/*
==============
bdStreamSocket::create
==============
*/

bool __fastcall bdStreamSocket::create(bdStreamSocket *this, const unsigned __int16 family, const bool blocking)
{
  return ?create@bdStreamSocket@@QEAA_NG_N@Z(this, family, blocking);
}

/*
==============
bdStreamSocket::getHandle
==============
*/

int __fastcall bdStreamSocket::getHandle(bdStreamSocket *this)
{
  return ?getHandle@bdStreamSocket@@QEAAHXZ(this);
}

/*
==============
bdStreamSocket::create
==============
*/

bool __fastcall bdStreamSocket::create(bdStreamSocket *this, const bool blocking)
{
  return ?create@bdStreamSocket@@QEAA_N_N@Z(this, blocking);
}

/*
==============
bdStreamSocket::setSendBufferSize
==============
*/

int __fastcall bdStreamSocket::setSendBufferSize(bdStreamSocket *this, const int sendBufferSize)
{
  return ?setSendBufferSize@bdStreamSocket@@UEAAHH@Z(this, sendBufferSize);
}

/*
==============
bdStreamSocket::bind
==============
*/

bdSocketStatusCode __fastcall bdStreamSocket::bind(bdStreamSocket *this, const unsigned __int16 port)
{
  return ?bind@bdStreamSocket@@QEBA?AW4bdSocketStatusCode@@G@Z(this, port);
}

/*
==============
bdStreamSocket::bind
==============
*/

bdSocketStatusCode __fastcall bdStreamSocket::bind(bdStreamSocket *this, const bdAddr *addr)
{
  return ?bind@bdStreamSocket@@QEBA?AW4bdSocketStatusCode@@VbdAddr@@@Z(this, addr);
}

/*
==============
bdStreamSocket::accept
==============
*/

bool __fastcall bdStreamSocket::accept(bdStreamSocket *this, bdStreamSocket *remoteSocket, bdAddr *remoteAddr)
{
  return ?accept@bdStreamSocket@@QEAA_NAEAV1@AEAVbdAddr@@@Z(this, remoteSocket, remoteAddr);
}

/*
==============
bdStreamSocket::isConnected
==============
*/

bool __fastcall bdStreamSocket::isConnected(bdStreamSocket *this)
{
  return ?isConnected@bdStreamSocket@@QEBA_NXZ(this);
}

/*
==============
bdStreamSocket::~bdStreamSocket
==============
*/

void __fastcall bdStreamSocket::~bdStreamSocket(bdStreamSocket *this)
{
  ??1bdStreamSocket@@UEAA@XZ(this);
}

/*
==============
bdStreamSocket::connect
==============
*/

bdSocketStatusCode __fastcall bdStreamSocket::connect(bdStreamSocket *this, const bdAddr *addr)
{
  return ?connect@bdStreamSocket@@QEBA?AW4bdSocketStatusCode@@VbdAddr@@@Z(this, addr);
}

/*
==============
bdStreamSocket::send
==============
*/

int __fastcall bdStreamSocket::send(bdStreamSocket *this, const void *data, const unsigned int length)
{
  return ?send@bdStreamSocket@@QEBAHPEBXI@Z(this, data, length);
}

/*
==============
bdStreamSocket::close
==============
*/

bool __fastcall bdStreamSocket::close(bdStreamSocket *this)
{
  return ?close@bdStreamSocket@@UEAA_NXZ(this);
}

/*
==============
bdStreamSocket::isWritable
==============
*/

bool __fastcall bdStreamSocket::isWritable(bdStreamSocket *this, bdSocketStatusCode *error)
{
  return ?isWritable@bdStreamSocket@@QEBA_NAEAW4bdSocketStatusCode@@@Z(this, error);
}

/*
==============
bdStreamSocket::bdStreamSocket
==============
*/
void bdStreamSocket::bdStreamSocket(bdStreamSocket *this)
{
  this->m_handle = -1;
  this->__vftable = (bdStreamSocket_vtbl *)&bdStreamSocket::`vftable';
}

/*
==============
bdStreamSocket::~bdStreamSocket
==============
*/
void bdStreamSocket::~bdStreamSocket(bdStreamSocket *this)
{
  this->__vftable = (bdStreamSocket_vtbl *)&bdStreamSocket::`vftable';
}

/*
==============
bdStreamSocket::accept
==============
*/
_BOOL8 bdStreamSocket::accept(bdStreamSocket *this, bdStreamSocket *remoteSocket, bdAddr *remoteAddr)
{
  bool v6; 
  int newHandle[4]; 
  bdSockAddr addr; 

  bdSockAddr::bdSockAddr(&addr);
  v6 = bdPlatformStreamSocket::accept(this->m_handle, newHandle, &addr);
  if ( v6 )
  {
    bdAddr::set(remoteAddr, &addr);
    remoteSocket->m_handle = newHandle[0];
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdstreamsocket.cpp", "bdStreamSocket::accept", 0x89u, "Failed to accept incoming connection.");
  }
  return v6;
}

/*
==============
bdStreamSocket::bind
==============
*/
bdSocketStatusCode bdStreamSocket::bind(bdStreamSocket *this, const unsigned __int16 port)
{
  const bdSockAddr *v3; 
  const bdSockAddr *v4; 
  const bdSockAddr *v5; 
  bdSockAddr v7; 
  bdAddr v8; 
  bdAddr other; 
  bdSockAddr result; 

  v3 = bdSockAddr::Any(&result, 2u, port);
  bdAddr::bdAddr(&other, v3);
  bdAddr::bdAddr(&v8, &other);
  bdSockAddr::bdSockAddr(&v7, v4);
  return bdPlatformStreamSocket::bind(this->m_handle, v5);
}

/*
==============
bdStreamSocket::bind
==============
*/
bdSocketStatusCode bdStreamSocket::bind(bdStreamSocket *this, const unsigned __int16 family, const unsigned __int16 port)
{
  const bdSockAddr *v4; 
  const bdSockAddr *v5; 
  const bdSockAddr *v6; 
  bdAddr v8; 
  bdSockAddr result; 
  bdAddr other; 

  v4 = bdSockAddr::Any(&result, family, port);
  bdAddr::bdAddr(&other, v4);
  bdAddr::bdAddr(&v8, &other);
  bdSockAddr::bdSockAddr(&result, v5);
  return bdPlatformStreamSocket::bind(this->m_handle, v6);
}

/*
==============
bdStreamSocket::bind
==============
*/
bdSocketStatusCode bdStreamSocket::bind(bdStreamSocket *this, const bdAddr *addr)
{
  const bdSockAddr *v3; 
  bdSockAddr v5; 

  bdSockAddr::bdSockAddr(&v5, &addr->m_address);
  return bdPlatformStreamSocket::bind(this->m_handle, v3);
}

/*
==============
bdStreamSocket::close
==============
*/
_BOOL8 bdStreamSocket::close(bdStreamSocket *this)
{
  bool v2; 
  bool v3; 

  v2 = bdPlatformStreamSocket::close(this->m_handle);
  this->m_handle = -1;
  v3 = v2;
  if ( !v2 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdstreamsocket.cpp", "bdStreamSocket::close", 0x69u, "Failed to close stream socket, system resources may be leaked.");
  return v3;
}

/*
==============
bdStreamSocket::connect
==============
*/
bdSocketStatusCode bdStreamSocket::connect(bdStreamSocket *this, const bdAddr *addr)
{
  const bdSockAddr *v3; 
  bdSockAddr v5; 

  bdSockAddr::bdSockAddr(&v5, &addr->m_address);
  return bdPlatformStreamSocket::connect(this->m_handle, v3);
}

/*
==============
bdStreamSocket::create
==============
*/
bool bdStreamSocket::create(bdStreamSocket *this, const unsigned __int16 family, const bool blocking)
{
  int v6; 

  bdHandleAssert(this->m_handle == -1, "m_handle == BD_INVALID_SOCKET_HANDLE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdstreamsocket.cpp", "bdStreamSocket::create", 0x20u, "bdStreamSocket::create(), already created.");
  if ( family != 2 )
  {
    bdHandleAssert(0, "\"family == BD_AF_INET\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdstreamsocket.cpp", "bdStreamSocket::create", 0x25u, "IPv6 address used in bdStreamSocket::create() but BD_IPV6_ENABLED is not set");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdstreamsocket.cpp", "bdStreamSocket::create", 0x25u, "IPv6 address used in bdStreamSocket::create() but BD_IPV6_ENABLED is not set");
  }
  v6 = bdPlatformStreamSocket::create(family, blocking);
  this->m_handle = v6;
  return v6 != -1;
}

/*
==============
bdStreamSocket::create
==============
*/
bool bdStreamSocket::create(bdStreamSocket *this, const bool blocking)
{
  int v4; 

  bdHandleAssert(this->m_handle == -1, "m_handle == BD_INVALID_SOCKET_HANDLE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdstreamsocket.cpp", "bdStreamSocket::create", 0x20u, "bdStreamSocket::create(), already created.");
  v4 = bdPlatformStreamSocket::create(2u, blocking);
  this->m_handle = v4;
  return v4 != -1;
}

/*
==============
bdStreamSocket::getHandle
==============
*/
__int64 bdStreamSocket::getHandle(bdStreamSocket *this)
{
  return (unsigned int)this->m_handle;
}

/*
==============
bdStreamSocket::isConnected
==============
*/
bool bdStreamSocket::isConnected(bdStreamSocket *this)
{
  return bdPlatformStreamSocket::isWritable(this->m_handle);
}

/*
==============
bdStreamSocket::isWritable
==============
*/
bool bdStreamSocket::isWritable(bdStreamSocket *this, bdSocketStatusCode *error)
{
  *error = BD_NET_SUCCESS;
  return bdPlatformStreamSocket::isWritable(this->m_handle, error);
}

/*
==============
bdStreamSocket::recv
==============
*/
int bdStreamSocket::recv(bdStreamSocket *this, void *data, const unsigned int size)
{
  return bdPlatformStreamSocket::receive(this->m_handle, data, size);
}

/*
==============
bdStreamSocket::send
==============
*/
int bdStreamSocket::send(bdStreamSocket *this, const void *data, const unsigned int length)
{
  return bdPlatformStreamSocket::send(this->m_handle, data, length);
}

/*
==============
bdStreamSocket::setRecvBufferSize
==============
*/
int bdStreamSocket::setRecvBufferSize(bdStreamSocket *this, const int recvBufferSize)
{
  return bdPlatformStreamSocket::setRecvBufferSize(this->m_handle, recvBufferSize);
}

/*
==============
bdStreamSocket::setSendBufferSize
==============
*/
int bdStreamSocket::setSendBufferSize(bdStreamSocket *this, const int sendBufferSize)
{
  return bdPlatformStreamSocket::setSendBufferSize(this->m_handle, sendBufferSize);
}

