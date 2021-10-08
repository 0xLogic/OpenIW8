/*
==============
bdSocket::sendMsg
==============
*/

int __fastcall bdSocket::sendMsg(bdSocket *this, const bdMsgHdr *msg)
{
  return ?sendMsg@bdSocket@@UEAAHAEBVbdMsgHdr@@@Z(this, msg);
}

/*
==============
bdSocket::bind
==============
*/

bdSocketStatusCode __fastcall bdSocket::bind(bdSocket *this, const unsigned __int16 family, const unsigned __int16 port)
{
  return ?bind@bdSocket@@UEAA?AW4bdSocketStatusCode@@GG@Z(this, family, port);
}

/*
==============
bdSocket::~bdSocket
==============
*/

void __fastcall bdSocket::~bdSocket(bdSocket *this)
{
  ??1bdSocket@@UEAA@XZ(this);
}

/*
==============
bdSocket::bind
==============
*/

bdSocketStatusCode __fastcall bdSocket::bind(bdSocket *this, const bdAddr *addr)
{
  return ?bind@bdSocket@@UEAA?AW4bdSocketStatusCode@@AEBVbdAddr@@@Z(this, addr);
}

/*
==============
bdSocket::create
==============
*/

bool __fastcall bdSocket::create(bdSocket *this, const bdSocketOptions *options)
{
  return ?create@bdSocket@@UEAA_NAEBUbdSocketOptions@@@Z(this, options);
}

/*
==============
bdSocket::setSendBufferSize
==============
*/

int __fastcall bdSocket::setSendBufferSize(bdSocket *this, const int sendBufferSize)
{
  return ?setSendBufferSize@bdSocket@@UEAAHH@Z(this, sendBufferSize);
}

/*
==============
bdSocket::sendMMsg
==============
*/

int __fastcall bdSocket::sendMMsg(bdSocket *this, const bdMsgHdr *msgVec, const unsigned int msgVecLen, unsigned int *numSent)
{
  return ?sendMMsg@bdSocket@@UEAAHQEBVbdMsgHdr@@IAEAI@Z(this, msgVec, msgVecLen, numSent);
}

/*
==============
bdSocket::create
==============
*/

bool __fastcall bdSocket::create(bdSocket *this, const bool blocking, const bool broadcast, const bool useUDP)
{
  return ?create@bdSocket@@UEAA_N_N00@Z(this, blocking, broadcast, useUDP);
}

/*
==============
bdSocket::close
==============
*/

bool __fastcall bdSocket::close(bdSocket *this)
{
  return ?close@bdSocket@@UEAA_NXZ(this);
}

/*
==============
bdSocket::getHandle
==============
*/

int __fastcall bdSocket::getHandle(bdSocket *this)
{
  return ?getHandle@bdSocket@@QEBAHXZ(this);
}

/*
==============
bdSocket::sendTo
==============
*/

int __fastcall bdSocket::sendTo(bdSocket *this, const bdAddr *addr, const void *data, const unsigned int length)
{
  return ?sendTo@bdSocket@@UEAAHAEBVbdAddr@@PEBXI@Z(this, addr, data, length);
}

/*
==============
bdSocket::create
==============
*/

bool __fastcall bdSocket::create(bdSocket *this, const unsigned __int16 family, const bool blocking, const bool broadcast, const bool useUDP)
{
  return ?create@bdSocket@@UEAA_NG_N00@Z(this, family, blocking, broadcast, useUDP);
}

/*
==============
bdSocket::setRecvBufferSize
==============
*/

int __fastcall bdSocket::setRecvBufferSize(bdSocket *this, const int recvBufferSize)
{
  return ?setRecvBufferSize@bdSocket@@UEAAHH@Z(this, recvBufferSize);
}

/*
==============
bdSocket::bdSocket
==============
*/

void __fastcall bdSocket::bdSocket(bdSocket *this)
{
  ??0bdSocket@@QEAA@XZ(this);
}

/*
==============
bdSocket::receiveFrom
==============
*/

int __fastcall bdSocket::receiveFrom(bdSocket *this, bdAddr *addr, void *data, const unsigned int size)
{
  return ?receiveFrom@bdSocket@@UEAAHAEAVbdAddr@@PEAXI@Z(this, addr, data, size);
}

/*
==============
bdSocket::setExclusiveAccess
==============
*/

void __fastcall bdSocket::setExclusiveAccess(bdSocket *this)
{
  ?setExclusiveAccess@bdSocket@@QEAAXXZ(this);
}

/*
==============
bdSocket::bind
==============
*/

bdSocketStatusCode __fastcall bdSocket::bind(bdSocket *this, const unsigned __int16 port)
{
  return ?bind@bdSocket@@UEAA?AW4bdSocketStatusCode@@G@Z(this, port);
}

/*
==============
bdSocket::bdSocket
==============
*/
void bdSocket::bdSocket(bdSocket *this)
{
  this->m_handle = -1;
  this->__vftable = (bdSocket_vtbl *)&bdSocket::`vftable';
}

/*
==============
bdSocket::~bdSocket
==============
*/
void bdSocket::~bdSocket(bdSocket *this)
{
  this->__vftable = (bdSocket_vtbl *)&bdSocket::`vftable';
  bdPlatformSocket::close(&this->m_handle);
}

/*
==============
bdSocket::bind
==============
*/
bdSocketStatusCode bdSocket::bind(bdSocket *this, const bdAddr *addr)
{
  const bdSockAddr *v3; 
  bdSockAddr v5; 

  bdSockAddr::bdSockAddr(&v5, &addr->m_address);
  return bdPlatformSocket::bind(&this->m_handle, v3);
}

/*
==============
bdSocket::bind
==============
*/
__int64 bdSocket::bind(bdSocket *this, const unsigned __int16 port)
{
  return ((__int64 (__fastcall *)(bdSocket *, __int64, _QWORD))this->bind)(this, 2i64, port);
}

/*
==============
bdSocket::bind
==============
*/
bdSocketStatusCode bdSocket::bind(bdSocket *this, const unsigned __int16 family, const unsigned __int16 port)
{
  const bdSockAddr *v4; 
  const bdSockAddr *v5; 
  bdSockAddr result; 
  bdAddr v8; 

  v4 = bdSockAddr::Any(&result, family, port);
  bdAddr::bdAddr(&v8, v4);
  bdSockAddr::bdSockAddr(&result, &v8.m_address);
  return bdPlatformSocket::bind(&this->m_handle, v5);
}

/*
==============
bdSocket::close
==============
*/
bool bdSocket::close(bdSocket *this)
{
  return bdPlatformSocket::close(&this->m_handle);
}

/*
==============
bdSocket::create
==============
*/
bool bdSocket::create(bdSocket *this, const bdSocketOptions *options)
{
  int v3; 

  if ( this->m_handle == -1 )
  {
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdsocket.cpp", "bdSocket::create", 0x54u, "bdSocket::create(bdSocketOptions&) not implemented yet");
    v3 = -1;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "socket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdsocket.cpp", "bdSocket::create", 0x59u, "Failed to create socket. Err: %i", v3);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "socket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdsocket.cpp", "bdSocket::create", 0x63u, "bdSocket::create(), already created.");
  }
  return 0;
}

/*
==============
bdSocket::create
==============
*/
char bdSocket::create(bdSocket *this, const unsigned __int16 family, const bool blocking, const bool broadcast)
{
  int v5; 
  int v7; 

  if ( this->m_handle == -1 )
  {
    v5 = bdPlatformSocket::create(blocking, broadcast);
    if ( v5 >= 0 )
    {
      this->m_handle = v5;
      return 1;
    }
    else
    {
      v7 = v5;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "socket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdsocket.cpp", "bdSocket::create", 0x3Bu, "Failed to create socket. Err: %i", v7);
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "socket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdsocket.cpp", "bdSocket::create", 0x45u, "bdSocket::create(), already created.");
    return 0;
  }
}

/*
==============
bdSocket::create
==============
*/
__int64 bdSocket::create(bdSocket *this, const bool blocking, const bool broadcast, const bool useUDP)
{
  char v5; 

  v5 = 0;
  return ((__int64 (__fastcall *)(bdSocket *, __int64, const bool, const bool, char))this->create)(this, 2i64, blocking, broadcast, v5);
}

/*
==============
bdSocket::getHandle
==============
*/
__int64 bdSocket::getHandle(bdSocket *this)
{
  __int64 result; 

  result = (unsigned int)this->m_handle;
  if ( (_DWORD)result == -1 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "socket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdsocket.cpp", "bdSocket::getHandle", 0xB5u, "Socket not yet created.");
    return (unsigned int)this->m_handle;
  }
  return result;
}

/*
==============
bdSocket::receiveFrom
==============
*/
__int64 bdSocket::receiveFrom(bdSocket *this, bdAddr *addr, void *data, const unsigned int size)
{
  unsigned int v8; 
  bdSockAddr addra; 

  bdSockAddr::bdSockAddr(&addra);
  v8 = bdPlatformSocket::receiveFrom(this->m_handle, &addra, data, size);
  if ( (int)(v8 + 0x80000000) < 0 || v8 == -5 )
    bdAddr::set(addr, &addra);
  return v8;
}

/*
==============
bdSocket::sendMMsg
==============
*/
int bdSocket::sendMMsg(bdSocket *this, const bdMsgHdr *msgVec, const unsigned int msgVecLen, unsigned int *numSent)
{
  __int64 v5; 
  unsigned int v7; 
  bdSockMsgHdr *p_msgVeca; 
  __int64 v10; 
  signed __int64 v11; 
  const void **p_m_data; 
  bdSockMsgHdr msgVeca; 

  v5 = 128i64;
  v7 = msgVecLen;
  bdHandleAssert(msgVecLen <= 0x80, "(msgVecLen <= BD_SOCKET_SENDMMSG_MAX)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdsocket.cpp", "bdSocket::sendMMsg", 0x8Fu, "bdSocket::sendMMsg() BD_SOCKET_SENDMMSG_MAX is [%u]", 128);
  p_msgVeca = &msgVeca;
  if ( v7 > 0x80 )
    v7 = 128;
  do
  {
    bdSockMsgHdr::`default constructor closure'(p_msgVeca++);
    --v5;
  }
  while ( v5 );
  if ( v7 )
  {
    v10 = v7;
    v11 = (char *)msgVec - (char *)&msgVeca.m_data;
    p_m_data = &msgVeca.m_data;
    do
    {
      *(p_m_data - 1) = *(const void **)((char *)p_m_data + v11);
      *p_m_data = *(const void **)((char *)p_m_data + v11 + 8);
      *((_DWORD *)p_m_data + 2) = *(_DWORD *)((char *)p_m_data + v11 + 16);
      p_m_data += 3;
      --v10;
    }
    while ( v10 );
  }
  return bdPlatformSocket::sendMMsg(this->m_handle, &msgVeca, v7, numSent);
}

/*
==============
bdSocket::sendMsg
==============
*/
int bdSocket::sendMsg(bdSocket *this, const bdMsgHdr *msg)
{
  int m_handle; 
  bdSockMsgHdr msga; 

  m_handle = this->m_handle;
  msga.m_addr = &msg->m_addr->m_address;
  msga.m_data = msg->m_data;
  msga.m_dataLen = msg->m_dataLen;
  msga.m_reserved = 0;
  return bdPlatformSocket::sendMsg(m_handle, &msga);
}

/*
==============
bdSocket::sendTo
==============
*/
int bdSocket::sendTo(bdSocket *this, const bdAddr *addr, const void *data, const unsigned int length)
{
  return bdPlatformSocket::sendTo(this->m_handle, &addr->m_address, data, length);
}

/*
==============
bdSocket::setExclusiveAccess
==============
*/
void bdSocket::setExclusiveAccess(bdSocket *this)
{
  ;
}

/*
==============
bdSocket::setRecvBufferSize
==============
*/
int bdSocket::setRecvBufferSize(bdSocket *this, const int recvBufferSize)
{
  return bdPlatformSocket::setRecvBufferSize(this->m_handle, recvBufferSize);
}

/*
==============
bdSocket::setSendBufferSize
==============
*/
int bdSocket::setSendBufferSize(bdSocket *this, const int sendBufferSize)
{
  return bdPlatformSocket::setSendBufferSize(this->m_handle, sendBufferSize);
}

