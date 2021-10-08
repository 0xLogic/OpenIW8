/*
==============
bdAddrString::bdAddrString
==============
*/

void __fastcall bdAddrString::bdAddrString(bdAddrString *this, const bdAddr *addr)
{
  ??0bdAddrString@@QEAA@AEBVbdAddr@@@Z(this, addr);
}

/*
==============
bdAddr::isValid
==============
*/

bool __fastcall bdAddr::isValid(bdAddr *this)
{
  return ?isValid@bdAddr@@QEBA_NXZ(this);
}

/*
==============
bdAddr::bdAddr
==============
*/

void __fastcall bdAddr::bdAddr(bdAddr *this, const bdSockAddr *address)
{
  ??0bdAddr@@QEAA@AEBVbdSockAddr@@@Z(this, address);
}

/*
==============
bdAddr::serialize
==============
*/

bool __fastcall bdAddr::serialize(bdAddr *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdAddr@@QEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdAddr::set
==============
*/

void __fastcall bdAddr::set(bdAddr *this, const bdSockAddr *address, const unsigned __int16 port)
{
  ?set@bdAddr@@QEAAXAEBVbdSockAddr@@G@Z(this, address, port);
}

/*
==============
bdAddr::set
==============
*/

void __fastcall bdAddr::set(bdAddr *this, const char *socketAddress)
{
  ?set@bdAddr@@QEAAXPEBD@Z(this, socketAddress);
}

/*
==============
bdAddr::bdAddr
==============
*/

void __fastcall bdAddr::bdAddr(bdAddr *this, const bdRelayRoute *relayRoute)
{
  ??0bdAddr@@QEAA@AEBVbdRelayRoute@@@Z(this, relayRoute);
}

/*
==============
bdAddr::deserialize
==============
*/

bool __fastcall bdAddr::deserialize(bdAddr *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdAddr@@QEAA_NPEBXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdAddr::getHash
==============
*/

unsigned int __fastcall bdAddr::getHash(bdAddr *this)
{
  return ?getHash@bdAddr@@QEBAIXZ(this);
}

/*
==============
bdAddr::setRelayRoute
==============
*/

void __fastcall bdAddr::setRelayRoute(bdAddr *this, const bdRelayRoute *relayRoute)
{
  ?setRelayRoute@bdAddr@@QEAAXAEBVbdRelayRoute@@@Z(this, relayRoute);
}

/*
==============
bdAddr::bdAddr
==============
*/

void __fastcall bdAddr::bdAddr(bdAddr *this, const char *socketAddress)
{
  ??0bdAddr@@QEAA@PEBD@Z(this, socketAddress);
}

/*
==============
bdAddr::getSerializedSize
==============
*/

unsigned int __fastcall bdAddr::getSerializedSize(bdAddr *this)
{
  return ?getSerializedSize@bdAddr@@QEBAIXZ(this);
}

/*
==============
bdAddr::bdAddr
==============
*/

void __fastcall bdAddr::bdAddr(bdAddr *this, const bdAddr *other)
{
  ??0bdAddr@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdAddr::toString
==============
*/

unsigned __int64 __fastcall bdAddr::toString(bdAddr *this, char *const str, const unsigned __int64 size)
{
  return ?toString@bdAddr@@QEBA_KQEAD_K@Z(this, str, size);
}

/*
==============
bdAddrString::getString
==============
*/

const char *__fastcall bdAddrString::getString(bdAddrString *this)
{
  return ?getString@bdAddrString@@QEBAPEBDXZ(this);
}

/*
==============
bdAddr::bdAddr
==============
*/

void __fastcall bdAddr::bdAddr(bdAddr *this)
{
  ??0bdAddr@@QEAA@XZ(this);
}

/*
==============
bdAddr::set
==============
*/

void __fastcall bdAddr::set(bdAddr *this, const bdSockAddr *address)
{
  ?set@bdAddr@@QEAAXAEBVbdSockAddr@@@Z(this, address);
}

/*
==============
bdAddr::bdAddr
==============
*/

void __fastcall bdAddr::bdAddr(bdAddr *this, const bdSockAddr *address, const unsigned __int16 port)
{
  ??0bdAddr@@QEAA@AEBVbdSockAddr@@G@Z(this, address, port);
}

/*
==============
bdAddr::bdAddr
==============
*/
void bdAddr::bdAddr(bdAddr *this, const bdAddr *other)
{
  _RBX = other;
  _RDI = this;
  bdSockAddr::bdSockAddr(&this->m_address, &other->m_address);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+80h]
    vmovups xmmword ptr [rdi+80h], xmm0
  }
  _RDI->m_type = _RBX->m_type;
}

/*
==============
bdAddr::bdAddr
==============
*/
void bdAddr::bdAddr(bdAddr *this, const bdRelayRoute *relayRoute)
{
  _RBX = relayRoute;
  _RDI = this;
  bdSockAddr::bdSockAddr(&this->m_address);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rdi+80h], xmm0
  }
  _RDI->m_type = BD_ADDR_RELAYED;
}

/*
==============
bdAddr::bdAddr
==============
*/
void bdAddr::bdAddr(bdAddr *this, const bdSockAddr *address)
{
  bdSockAddr::bdSockAddr(&this->m_address, address);
  bdRelayRoute::bdRelayRoute(&this->m_relayRoute, 0i64, 0);
  this->m_type = BD_ADDR_DIRECT;
}

/*
==============
bdAddr::bdAddr
==============
*/
void bdAddr::bdAddr(bdAddr *this, const bdSockAddr *address, const unsigned __int16 port)
{
  bdSockAddr::bdSockAddr(&this->m_address, address);
  bdRelayRoute::bdRelayRoute(&this->m_relayRoute, 0i64, 0);
  this->m_type = BD_ADDR_DIRECT;
  bdSockAddr::setPort(&this->m_address, port);
}

/*
==============
bdAddr::bdAddr
==============
*/
void bdAddr::bdAddr(bdAddr *this, const char *socketAddress)
{
  int v4; 
  bdSockAddr other; 
  char addr[8]; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  char v14; 

  bdSockAddr::bdSockAddr(&this->m_address);
  bdRelayRoute::bdRelayRoute(&this->m_relayRoute, 0i64, 0);
  this->m_type = BD_ADDR_DIRECT;
  bdHandleAssert(socketAddress != NULL, "(socketAddress != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdaddr.cpp", "bdAddr::set", 0x40u, "Invalid socket address \n ");
  *(_QWORD *)addr = 0i64;
  v7 = 0i64;
  v8 = 0i64;
  v9 = 0i64;
  v10 = 0i64;
  v11 = 0i64;
  v12 = 0i64;
  v13 = 0i64;
  v14 = 0;
  v4 = 0;
  bdSockAddr::bdSockAddr(&other);
  if ( *socketAddress == 91 )
  {
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdaddr.cpp", "bdAddr::set", 0x5Fu, "IPv6 address string cannot be used as BD_IPV6_ENABLED is not set");
LABEL_3:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdAddr", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdaddr.cpp", "bdAddr::set", 0x78u, "Invalid address format: %s\nExpected formats: \n   - IPv4: a.b.c.d:port\n   - IPv6: [a:b::c:d]:port.\nValid port values between 0 and 65535\n", socketAddress);
    return;
  }
  if ( j_sscanf(socketAddress, "%15[^:]:%5u", addr, &v4) != 2 || (unsigned int)(v4 - 1) > 0xFFFE || !bdSockAddr::set(&other, 2u, addr, v4) )
    goto LABEL_3;
  bdSockAddr::set(&this->m_address, &other);
}

/*
==============
bdAddr::bdAddr
==============
*/
void bdAddr::bdAddr(bdAddr *this)
{
  bdSockAddr::bdSockAddr(&this->m_address);
  bdRelayRoute::bdRelayRoute(&this->m_relayRoute, 0i64, 0);
  this->m_type = BD_ADDR_DIRECT;
}

/*
==============
bdAddrString::bdAddrString
==============
*/
void bdAddrString::bdAddrString(bdAddrString *this, const bdAddr *addr)
{
  unsigned __int16 ss_family; 
  const char *v5; 
  int Port; 
  char v7[64]; 
  int v8; 
  __int16 v9; 
  char v10; 

  memset(v7, 0, sizeof(v7));
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( bdSockAddr::toString(&addr->m_address, v7, 0x16ui64) )
  {
    ss_family = addr->m_address.inUn.m_sockaddrStorage.ss_family;
    Port = bdSockAddr::getPort(&addr->m_address);
    v5 = "%s:%u";
    if ( ss_family != 2 )
      v5 = "[%s]:%u";
    bdSnprintf(this->m_str, 0x16ui64, v5, v7, Port);
  }
}

/*
==============
bdAddr::deserialize
==============
*/
bool bdAddr::deserialize(bdAddr *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  bool result; 

  *newOffset = offset;
  result = bdSockAddr::deserialize(&this->m_address, data, size, offset, newOffset);
  if ( !result )
    *newOffset = offset;
  return result;
}

/*
==============
bdAddr::getHash
==============
*/
__int64 bdAddr::getHash(bdAddr *this)
{
  unsigned int v1; 
  char *v2; 
  __int64 v3; 
  int v4; 
  unsigned int newOffset[4]; 
  char data[1296]; 

  v1 = 0;
  newOffset[0] = 0;
  if ( bdSockAddr::serialize(&this->m_address, data, 0x508u, 0, newOffset) && newOffset[0] )
  {
    v2 = data;
    v3 = newOffset[0];
    do
    {
      v4 = *v2++;
      v1 = v4 ^ (16777619 * v1);
      --v3;
    }
    while ( v3 );
  }
  return v1;
}

/*
==============
bdAddr::getSerializedSize
==============
*/
__int64 bdAddr::getSerializedSize(bdAddr *this)
{
  __int64 result; 
  bool v2; 
  unsigned int v3; 

  result = bdAddr::serializedSize;
  if ( !bdAddr::serializedSize )
  {
    bdAddr::serializedSize = 0;
    v2 = bdSockAddr::serialize(&this->m_address, NULL, 0xFFFFu, 0, &bdAddr::serializedSize);
    v3 = bdAddr::serializedSize;
    if ( !v2 )
      v3 = 0;
    bdAddr::serializedSize = v3;
    return v3;
  }
  return result;
}

/*
==============
bdAddrString::getString
==============
*/
bdAddrString *bdAddrString::getString(bdAddrString *this)
{
  return this;
}

/*
==============
bdAddr::isValid
==============
*/

bool __fastcall bdAddr::isValid(bdAddr *this)
{
  return bdSockAddr::isValid(&this->m_address);
}

/*
==============
bdAddr::serialize
==============
*/
bool bdAddr::serialize(bdAddr *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  bool result; 

  *newOffset = offset;
  result = bdSockAddr::serialize(&this->m_address, data, size, offset, newOffset);
  if ( !result )
    *newOffset = offset;
  return result;
}

/*
==============
bdAddr::set
==============
*/

void __fastcall bdAddr::set(bdAddr *this, const bdSockAddr *address)
{
  bdSockAddr::set(&this->m_address, address);
}

/*
==============
bdAddr::set
==============
*/
void bdAddr::set(bdAddr *this, const bdSockAddr *address, const unsigned __int16 port)
{
  bdSockAddr::set(&this->m_address, address);
  bdSockAddr::setPort(&this->m_address, port);
}

/*
==============
bdAddr::set
==============
*/
void bdAddr::set(bdAddr *this, const char *socketAddress)
{
  int v4; 
  bdSockAddr other; 
  char addr[8]; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  char v14; 

  bdHandleAssert(socketAddress != NULL, "(socketAddress != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdaddr.cpp", "bdAddr::set", 0x40u, "Invalid socket address \n ");
  *(_QWORD *)addr = 0i64;
  v7 = 0i64;
  v8 = 0i64;
  v9 = 0i64;
  v10 = 0i64;
  v11 = 0i64;
  v12 = 0i64;
  v13 = 0i64;
  v14 = 0;
  v4 = 0;
  bdSockAddr::bdSockAddr(&other);
  if ( *socketAddress == 91 )
  {
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdaddr.cpp", "bdAddr::set", 0x5Fu, "IPv6 address string cannot be used as BD_IPV6_ENABLED is not set");
LABEL_3:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdAddr", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdaddr.cpp", "bdAddr::set", 0x78u, "Invalid address format: %s\nExpected formats: \n   - IPv4: a.b.c.d:port\n   - IPv6: [a:b::c:d]:port.\nValid port values between 0 and 65535\n", socketAddress);
    return;
  }
  if ( j_sscanf(socketAddress, "%15[^:]:%5u", addr, &v4) != 2 || (unsigned int)(v4 - 1) > 0xFFFE || !bdSockAddr::set(&other, 2u, addr, v4) )
    goto LABEL_3;
  bdSockAddr::set(&this->m_address, &other);
}

/*
==============
bdAddr::setRelayRoute
==============
*/
void bdAddr::setRelayRoute(bdAddr *this, const bdRelayRoute *relayRoute)
{
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rcx+80h], xmm0
  }
  this->m_type = BD_ADDR_RELAYED;
}

/*
==============
bdAddr::toString
==============
*/
unsigned __int64 bdAddr::toString(bdAddr *this, char *const str, const unsigned __int64 size)
{
  unsigned __int64 result; 
  unsigned __int16 ss_family; 
  int Port; 
  char v9[64]; 
  int v10; 
  __int16 v11; 
  char v12; 

  memset(v9, 0, sizeof(v9));
  v10 = 0;
  v11 = 0;
  v12 = 0;
  result = bdSockAddr::toString(&this->m_address, v9, size);
  if ( result )
  {
    ss_family = this->m_address.inUn.m_sockaddrStorage.ss_family;
    Port = bdSockAddr::getPort(&this->m_address);
    if ( ss_family == 2 )
      return bdSnprintf(str, size, "%s:%u", v9, Port);
    else
      return bdSnprintf(str, size, "[%s]:%u", v9, Port);
  }
  return result;
}

