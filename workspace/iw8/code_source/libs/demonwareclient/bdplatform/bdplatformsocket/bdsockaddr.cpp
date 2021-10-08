/*
==============
bdSockAddr::bdSockAddr
==============
*/

void __fastcall bdSockAddr::bdSockAddr(bdSockAddr *this, const char *addr)
{
  ??0bdSockAddr@@QEAA@PEBD@Z(this, addr);
}

/*
==============
bdSockAddr::toUInt32HBO
==============
*/

unsigned int __fastcall bdSockAddr::toUInt32HBO(bdSockAddr *this)
{
  return ?toUInt32HBO@bdSockAddr@@QEBAIXZ(this);
}

/*
==============
bdSockAddr::compare
==============
*/

bool __fastcall bdSockAddr::compare(bdSockAddr *this, const bdSockAddr *other, const bool comparePorts)
{
  return ?compare@bdSockAddr@@QEBA_NAEBV1@_N@Z(this, other, comparePorts);
}

/*
==============
bdSockAddr::Loopback
==============
*/

bdSockAddr *__fastcall bdSockAddr::Loopback(bdSockAddr *result, unsigned __int16 family, unsigned __int16 port)
{
  return ?Loopback@bdSockAddr@@SA?AV1@GG@Z(result, family, port);
}

/*
==============
bdSockAddr::isValid
==============
*/

bool __fastcall bdSockAddr::isValid(bdSockAddr *this)
{
  return ?isValid@bdSockAddr@@QEBA_NXZ(this);
}

/*
==============
bdSockAddr::getSockaddr
==============
*/

sockaddr *__fastcall bdSockAddr::getSockaddr(bdSockAddr *this)
{
  return ?getSockaddr@bdSockAddr@@QEAAAEAUsockaddr@@XZ(this);
}

/*
==============
bdSockAddr::getPort
==============
*/

unsigned __int16 __fastcall bdSockAddr::getPort(bdSockAddr *this)
{
  return ?getPort@bdSockAddr@@QEBAGXZ(this);
}

/*
==============
bdSockAddr::set
==============
*/

unsigned int __fastcall bdSockAddr::set(bdSockAddr *this, unsigned __int16 family, const char *addr)
{
  return ?set@bdSockAddr@@QEAAIGPEBD@Z(this, family, addr);
}

/*
==============
bdSockAddr::getSockaddrIn6
==============
*/

sockaddr_in6 *__fastcall bdSockAddr::getSockaddrIn6(bdSockAddr *this)
{
  return ?getSockaddrIn6@bdSockAddr@@QEAAAEAUsockaddr_in6@@XZ(this);
}

/*
==============
bdSockAddr::getSockaddrStorage
==============
*/

sockaddr_storage *__fastcall bdSockAddr::getSockaddrStorage(bdSockAddr *this)
{
  return ?getSockaddrStorage@bdSockAddr@@QEAAAEAUsockaddr_storage@@XZ(this);
}

/*
==============
bdSockAddr::getSockaddrIn
==============
*/

sockaddr_in *__fastcall bdSockAddr::getSockaddrIn(bdSockAddr *this)
{
  return ?getSockaddrIn@bdSockAddr@@QEAAAEAUsockaddr_in@@XZ(this);
}

/*
==============
bdSockAddr::toUInt32NBO
==============
*/

unsigned int __fastcall bdSockAddr::toUInt32NBO(bdSockAddr *this)
{
  return ?toUInt32NBO@bdSockAddr@@QEBAIXZ(this);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/

void __fastcall bdSockAddr::bdSockAddr(bdSockAddr *this)
{
  ??0bdSockAddr@@QEAA@XZ(this);
}

/*
==============
bdSockAddr::getSockaddrIn
==============
*/

const sockaddr_in *__fastcall bdSockAddr::getSockaddrIn(bdSockAddr *this)
{
  return ?getSockaddrIn@bdSockAddr@@QEBAAEBUsockaddr_in@@XZ(this);
}

/*
==============
bdSockAddr::getIn4Addr
==============
*/

const in_addr *__fastcall bdSockAddr::getIn4Addr(bdSockAddr *this)
{
  return ?getIn4Addr@bdSockAddr@@QEBAAEBUin_addr@@XZ(this);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/

void __fastcall bdSockAddr::bdSockAddr(bdSockAddr *this, const char *addr, unsigned __int16 port)
{
  ??0bdSockAddr@@QEAA@PEBDG@Z(this, addr, port);
}

/*
==============
bdSockAddr::serialize
==============
*/

bool __fastcall bdSockAddr::serialize(bdSockAddr *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdSockAddr@@QEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/

void __fastcall bdSockAddr::bdSockAddr(bdSockAddr *this, const sockaddr_in *addrPtr)
{
  ??0bdSockAddr@@QEAA@PEBUsockaddr_in@@@Z(this, addrPtr);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/

void __fastcall bdSockAddr::bdSockAddr(bdSockAddr *this, const sockaddr_in6 *addr)
{
  ??0bdSockAddr@@QEAA@AEBUsockaddr_in6@@@Z(this, addr);
}

/*
==============
bdSockAddr::getIn4Addr
==============
*/

in_addr *__fastcall bdSockAddr::getIn4Addr(bdSockAddr *this)
{
  return ?getIn4Addr@bdSockAddr@@QEAAAEAUin_addr@@XZ(this);
}

/*
==============
bdSockAddr::operator<
==============
*/

bool __fastcall bdSockAddr::operator<(bdSockAddr *this, const bdSockAddr *other)
{
  return ??MbdSockAddr@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/

void __fastcall bdSockAddr::bdSockAddr(bdSockAddr *this, unsigned int addr, unsigned __int16 port)
{
  ??0bdSockAddr@@QEAA@IG@Z(this, addr, port);
}

/*
==============
bdSockAddr::set
==============
*/

void __fastcall bdSockAddr::set(bdSockAddr *this, unsigned __int8 a, unsigned __int8 b, unsigned __int8 c, unsigned __int8 d)
{
  ?set@bdSockAddr@@QEAAXEEEE@Z(this, a, b, c, d);
}

/*
==============
bdSockAddr::set
==============
*/

void __fastcall bdSockAddr::set(bdSockAddr *this, unsigned int addr)
{
  ?set@bdSockAddr@@QEAAXI@Z(this, addr);
}

/*
==============
bdSockAddr::setPort
==============
*/

bool __fastcall bdSockAddr::setPort(bdSockAddr *this, unsigned __int16 port)
{
  return ?setPort@bdSockAddr@@QEAA_NG@Z(this, port);
}

/*
==============
bdSockAddr::getSockaddrIn6
==============
*/

const sockaddr_in6 *__fastcall bdSockAddr::getSockaddrIn6(bdSockAddr *this)
{
  return ?getSockaddrIn6@bdSockAddr@@QEBAAEBUsockaddr_in6@@XZ(this);
}

/*
==============
bdSockAddr::set
==============
*/

void __fastcall bdSockAddr::set(bdSockAddr *this, unsigned __int8 a, unsigned __int8 b, unsigned __int8 c, unsigned __int8 d, unsigned __int16 port)
{
  ?set@bdSockAddr@@QEAAXEEEEG@Z(this, a, b, c, d, port);
}

/*
==============
bdSockAddr::getIn4AddrByte
==============
*/

unsigned __int8 __fastcall bdSockAddr::getIn4AddrByte(bdSockAddr *this, int i)
{
  return ?getIn4AddrByte@bdSockAddr@@QEBAEH@Z(this, i);
}

/*
==============
bdSockAddr::resetAddress
==============
*/

void __fastcall bdSockAddr::resetAddress(bdSockAddr *this)
{
  ?resetAddress@bdSockAddr@@QEAAXXZ(this);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/

void __fastcall bdSockAddr::bdSockAddr(bdSockAddr *this, unsigned int addr)
{
  ??0bdSockAddr@@QEAA@I@Z(this, addr);
}

/*
==============
bdSockAddr::set
==============
*/

unsigned int __fastcall bdSockAddr::set(bdSockAddr *this, const char *addr)
{
  return ?set@bdSockAddr@@QEAAIPEBD@Z(this, addr);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/

void __fastcall bdSockAddr::bdSockAddr(bdSockAddr *this, const bdSockAddr *other)
{
  ??0bdSockAddr@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdSockAddr::getSockaddrLen
==============
*/

unsigned int __fastcall bdSockAddr::getSockaddrLen(bdSockAddr *this)
{
  return ?getSockaddrLen@bdSockAddr@@QEBAIXZ(this);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/

void __fastcall bdSockAddr::bdSockAddr(bdSockAddr *this, unsigned __int8 a, unsigned __int8 b, unsigned __int8 c, unsigned __int8 d)
{
  ??0bdSockAddr@@QEAA@EEEE@Z(this, a, b, c, d);
}

/*
==============
bdSockAddr::set
==============
*/

void __fastcall bdSockAddr::set(bdSockAddr *this, unsigned int addr, unsigned __int16 port)
{
  ?set@bdSockAddr@@QEAAXIG@Z(this, addr, port);
}

/*
==============
bdSockAddr::setFamily
==============
*/

bool __fastcall bdSockAddr::setFamily(bdSockAddr *this, unsigned __int16 family)
{
  return ?setFamily@bdSockAddr@@QEAA_NG@Z(this, family);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/

void __fastcall bdSockAddr::bdSockAddr(bdSockAddr *this, const sockaddr_in6 *addrPtr)
{
  ??0bdSockAddr@@QEAA@PEBUsockaddr_in6@@@Z(this, addrPtr);
}

/*
==============
bdSockAddr::getSockaddr
==============
*/

const sockaddr *__fastcall bdSockAddr::getSockaddr(bdSockAddr *this)
{
  return ?getSockaddr@bdSockAddr@@QEBAAEBUsockaddr@@XZ(this);
}

/*
==============
bdSockAddr::getIn6Addr
==============
*/

in6_addr *__fastcall bdSockAddr::getIn6Addr(bdSockAddr *this)
{
  return ?getIn6Addr@bdSockAddr@@QEAAAEAUin6_addr@@XZ(this);
}

/*
==============
bdSockAddr::set
==============
*/

void __fastcall bdSockAddr::set(bdSockAddr *this, const bdSockAddr *other)
{
  ?set@bdSockAddr@@QEAAXAEBV1@@Z(this, other);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/

void __fastcall bdSockAddr::bdSockAddr(bdSockAddr *this, unsigned __int8 a, unsigned __int8 b, unsigned __int8 c, unsigned __int8 d, unsigned __int16 port)
{
  ??0bdSockAddr@@QEAA@EEEEG@Z(this, a, b, c, d, port);
}

/*
==============
bdSockAddr::set
==============
*/

unsigned int __fastcall bdSockAddr::set(bdSockAddr *this, unsigned __int16 family, const char *addr, const unsigned __int16 port)
{
  return ?set@bdSockAddr@@QEAAIGPEBDG@Z(this, family, addr, port);
}

/*
==============
bdSockAddr::Any
==============
*/

bdSockAddr *__fastcall bdSockAddr::Any(bdSockAddr *result, unsigned __int16 family, unsigned __int16 port)
{
  return ?Any@bdSockAddr@@SA?AV1@GG@Z(result, family, port);
}

/*
==============
bdSockAddr::toUInt32
==============
*/

unsigned int __fastcall bdSockAddr::toUInt32(bdSockAddr *this)
{
  return ?toUInt32@bdSockAddr@@QEBAIXZ(this);
}

/*
==============
bdSockAddr::toString
==============
*/

unsigned __int64 __fastcall bdSockAddr::toString(bdSockAddr *this, char *const str, const unsigned __int64 size)
{
  return ?toString@bdSockAddr@@QEBA_KQEAD_K@Z(this, str, size);
}

/*
==============
bdSockAddr::getIn6Addr
==============
*/

const in6_addr *__fastcall bdSockAddr::getIn6Addr(bdSockAddr *this)
{
  return ?getIn6Addr@bdSockAddr@@QEBAAEBUin6_addr@@XZ(this);
}

/*
==============
bdSockAddr::deserialize
==============
*/

bool __fastcall bdSockAddr::deserialize(bdSockAddr *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdSockAddr@@QEAA_NPEBXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/

void __fastcall bdSockAddr::bdSockAddr(bdSockAddr *this, const sockaddr_in *addr)
{
  ??0bdSockAddr@@QEAA@AEBUsockaddr_in@@@Z(this, addr);
}

/*
==============
bdSockAddr::Broadcast
==============
*/

bdSockAddr *__fastcall bdSockAddr::Broadcast(bdSockAddr *result, unsigned __int16 family, unsigned __int16 port)
{
  return ?Broadcast@bdSockAddr@@SA?AV1@GG@Z(result, family, port);
}

/*
==============
bdSockAddr::getSockaddrStorage
==============
*/

const sockaddr_storage *__fastcall bdSockAddr::getSockaddrStorage(bdSockAddr *this)
{
  return ?getSockaddrStorage@bdSockAddr@@QEBAAEBUsockaddr_storage@@XZ(this);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/
void bdSockAddr::bdSockAddr(bdSockAddr *this, const sockaddr_in6 *addr)
{
  _RBX = addr;
  _RDI = this;
  memset_0(this, 0, sizeof(bdSockAddr));
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rdi], xmm0
    vmovsd  xmm1, qword ptr [rbx+10h]
    vmovsd  qword ptr [rdi+10h], xmm1
  }
  _RDI->inUn.m_ipv6Sockaddr.sin6_scope_id = _RBX->sin6_scope_id;
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/
void bdSockAddr::bdSockAddr(bdSockAddr *this, const sockaddr_in *addr)
{
  _RBX = addr;
  _RDI = this;
  memset_0(this, 0, sizeof(bdSockAddr));
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rdi], xmm0
  }
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/
void bdSockAddr::bdSockAddr(bdSockAddr *this, const bdSockAddr *other)
{
  _RBX = other;
  _RDI = this;
  memset_0(this, 0, sizeof(bdSockAddr));
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rdi], ymm0
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rdi+20h], ymm1
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups ymmword ptr [rdi+40h], ymm0
    vmovups ymm1, ymmword ptr [rbx+60h]
    vmovups ymmword ptr [rdi+60h], ymm1
  }
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/
void bdSockAddr::bdSockAddr(bdSockAddr *this, unsigned __int8 a, unsigned __int8 b, unsigned __int8 c, unsigned __int8 d)
{
  memset_0(this, 0, sizeof(bdSockAddr));
  this->inUn.m_sockaddrStorage.ss_family = 2;
  this->inUn.m_sockaddrStorage.__ss_pad1[5] = d;
  this->inUn.m_sockaddrStorage.__ss_pad1[2] = a;
  this->inUn.m_sockaddrStorage.__ss_pad1[3] = b;
  this->inUn.m_sockaddrStorage.__ss_pad1[4] = c;
  bdSockAddr::setPort(this, 0);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/
void bdSockAddr::bdSockAddr(bdSockAddr *this, unsigned __int8 a, unsigned __int8 b, unsigned __int8 c, unsigned __int8 d, unsigned __int16 port)
{
  memset_0(this, 0, sizeof(bdSockAddr));
  this->inUn.m_sockaddrStorage.ss_family = 2;
  this->inUn.m_sockaddrStorage.__ss_pad1[5] = d;
  this->inUn.m_sockaddrStorage.__ss_pad1[2] = a;
  this->inUn.m_sockaddrStorage.__ss_pad1[3] = b;
  this->inUn.m_sockaddrStorage.__ss_pad1[4] = c;
  bdSockAddr::setPort(this, 0);
  bdSockAddr::setPort(this, port);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/
void bdSockAddr::bdSockAddr(bdSockAddr *this, unsigned int addr)
{
  memset_0(this, 0, sizeof(bdSockAddr));
  this->inUn.m_sockaddrStorage.ss_family = 2;
  this->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr = addr;
  this->inUn.m_ipv4Sockaddr.sin_port = htons(0);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/
void bdSockAddr::bdSockAddr(bdSockAddr *this, unsigned int addr, unsigned __int16 port)
{
  memset_0(this, 0, sizeof(bdSockAddr));
  this->inUn.m_sockaddrStorage.ss_family = 2;
  this->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr = addr;
  this->inUn.m_ipv4Sockaddr.sin_port = htons(0);
  if ( this->inUn.m_sockaddrStorage.ss_family == 23 || this->inUn.m_sockaddrStorage.ss_family == 2 )
  {
    this->inUn.m_ipv4Sockaddr.sin_port = htons(port);
  }
  else
  {
    bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdsockaddr.cpp", "bdSockAddr::setPort", 0xE5u, "Invalid AF_family. Only IPv4 and IPv6 supported.");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdsockaddr.cpp", "bdSockAddr::setPort", 0xE5u, "Invalid AF_family. Only IPv4 and IPv6 supported.");
  }
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/
void bdSockAddr::bdSockAddr(bdSockAddr *this, const char *addr)
{
  memset_0(&this->inUn.m_ipv4Sockaddr.sin_port, 0, 0x7Eui64);
  this->inUn.m_sockaddrStorage.ss_family = 2;
  this->inUn.m_ipv4Sockaddr.sin_port = htons(0);
  inet_pton(2, addr, &this->inUn.m_ipv6Sockaddr.sin6_flowinfo);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/
void bdSockAddr::bdSockAddr(bdSockAddr *this, const char *addr, unsigned __int16 port)
{
  memset_0(&this->inUn.m_ipv4Sockaddr.sin_port, 0, 0x7Eui64);
  this->inUn.m_sockaddrStorage.ss_family = 2;
  this->inUn.m_ipv4Sockaddr.sin_port = htons(port);
  inet_pton(2, addr, &this->inUn.m_ipv6Sockaddr.sin6_flowinfo);
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/
void bdSockAddr::bdSockAddr(bdSockAddr *this, const sockaddr_in6 *addrPtr)
{
  _RBX = addrPtr;
  _RDI = this;
  memset_0(this, 0, sizeof(bdSockAddr));
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rdi], xmm0
    vmovsd  xmm1, qword ptr [rbx+10h]
    vmovsd  qword ptr [rdi+10h], xmm1
  }
  _RDI->inUn.m_ipv6Sockaddr.sin6_scope_id = _RBX->sin6_scope_id;
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/
void bdSockAddr::bdSockAddr(bdSockAddr *this, const sockaddr_in *addrPtr)
{
  _RBX = addrPtr;
  _RDI = this;
  memset_0(this, 0, sizeof(bdSockAddr));
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rdi], xmm0
  }
}

/*
==============
bdSockAddr::bdSockAddr
==============
*/
void bdSockAddr::bdSockAddr(bdSockAddr *this)
{
  memset_0(this, 0, sizeof(bdSockAddr));
  this->inUn.m_sockaddrStorage.ss_family = 2;
  this->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr = -16711936;
  this->inUn.m_ipv4Sockaddr.sin_port = htons(0);
}

/*
==============
bdSockAddr::operator<
==============
*/
bool bdSockAddr::operator<(bdSockAddr *this, const bdSockAddr *other)
{
  unsigned int v3; 

  v3 = bdSockAddr::toUInt32NBO(this);
  return v3 < bdSockAddr::toUInt32NBO((bdSockAddr *)other);
}

/*
==============
bdSockAddr::Any
==============
*/
bdSockAddr *bdSockAddr::Any(bdSockAddr *result, unsigned __int16 family, unsigned __int16 port)
{
  memset_0(result, 0, sizeof(bdSockAddr));
  result->inUn.m_sockaddrStorage.ss_family = 2;
  result->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr = -16711936;
  htons(0);
  if ( family == 23 )
  {
    memset_0(&result->inUn.m_ipv4Sockaddr.sin_port, 0, 0x7Eui64);
    result->inUn.m_sockaddrStorage.ss_family = 23;
    result->inUn.m_ipv4Sockaddr.sin_port = htons(port);
    inet_pton(2, "::", &result->inUn.m_ipv6Sockaddr.sin6_flowinfo);
  }
  else
  {
    memset_0(result, 0, sizeof(bdSockAddr));
    result->inUn.m_sockaddrStorage.ss_family = 2;
    result->inUn.m_ipv4Sockaddr.sin_port = htons(port);
  }
  return result;
}

/*
==============
bdSockAddr::Broadcast
==============
*/
bdSockAddr *bdSockAddr::Broadcast(bdSockAddr *result, unsigned __int16 family, unsigned __int16 port)
{
  memset_0(result, 0, sizeof(bdSockAddr));
  result->inUn.m_sockaddrStorage.ss_family = 2;
  result->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr = -16711936;
  htons(0);
  if ( family == 23 )
  {
    memset_0(&result->inUn.m_ipv4Sockaddr.sin_port, 0, 0x7Eui64);
    result->inUn.m_sockaddrStorage.ss_family = 23;
    result->inUn.m_ipv4Sockaddr.sin_port = htons(port);
    inet_pton(2, "ff02::", &result->inUn.m_ipv6Sockaddr.sin6_flowinfo);
  }
  else
  {
    memset_0(result, 0, sizeof(bdSockAddr));
    result->inUn.m_sockaddrStorage.ss_family = 2;
    result->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr = -1;
    result->inUn.m_ipv4Sockaddr.sin_port = htons(port);
  }
  return result;
}

/*
==============
bdSockAddr::Loopback
==============
*/
bdSockAddr *bdSockAddr::Loopback(bdSockAddr *result, unsigned __int16 family, unsigned __int16 port)
{
  memset_0(result, 0, sizeof(bdSockAddr));
  result->inUn.m_sockaddrStorage.ss_family = 2;
  result->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr = -16711936;
  htons(0);
  if ( family == 23 )
  {
    memset_0(&result->inUn.m_ipv4Sockaddr.sin_port, 0, 0x7Eui64);
    result->inUn.m_sockaddrStorage.ss_family = 23;
    result->inUn.m_ipv4Sockaddr.sin_port = htons(port);
    inet_pton(2, "::1", &result->inUn.m_ipv6Sockaddr.sin6_flowinfo);
  }
  else
  {
    memset_0(result, 0, sizeof(bdSockAddr));
    result->inUn.m_sockaddrStorage.ss_family = 2;
    result->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr = 16777343;
    result->inUn.m_ipv4Sockaddr.sin_port = htons(port);
  }
  return result;
}

/*
==============
bdSockAddr::compare
==============
*/
char bdSockAddr::compare(bdSockAddr *this, const bdSockAddr *other, const bool comparePorts)
{
  bool v3; 
  unsigned __int16 Port; 

  v3 = 0;
  if ( this->inUn.m_sockaddrStorage.ss_family == other->inUn.m_sockaddrStorage.ss_family )
    v3 = this->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr == other->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr;
  if ( !comparePorts )
    return v3;
  if ( v3 )
  {
    Port = bdSockAddr::getPort((bdSockAddr *)other);
    if ( bdSockAddr::getPort(this) == Port )
      return 1;
  }
  return 0;
}

/*
==============
bdSockAddr::deserialize
==============
*/
__int64 bdSockAddr::deserialize(bdSockAddr *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  bool v5; 
  unsigned __int16 v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned __int8 v12; 

  v5 = 0;
  if ( this->inUn.m_sockaddrStorage.ss_family != 23 )
    v5 = bdBytePacker::removeBuffer(data, size, offset, newOffset, &this->inUn.m_ipv6Sockaddr.sin6_flowinfo, 4u);
  v9 = 0;
  if ( !v5 )
    goto LABEL_11;
  v10 = *newOffset;
  v11 = v10 + 2;
  *newOffset = v10 + 2;
  if ( data )
  {
    if ( v11 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 2i64);
    else
      v9 = *(_WORD *)((char *)data + v10);
  }
  if ( v11 > size && data )
LABEL_11:
    v12 = 0;
  else
    v12 = 1;
  bdSockAddr::setPort(this, v9);
  return v12;
}

/*
==============
bdSockAddr::getIn4Addr
==============
*/
in_addr *bdSockAddr::getIn4Addr(bdSockAddr *this)
{
  return &this->inUn.m_ipv4Sockaddr.sin_addr;
}

/*
==============
bdSockAddr::getIn4Addr
==============
*/
in_addr *bdSockAddr::getIn4Addr(bdSockAddr *this)
{
  return &this->inUn.m_ipv4Sockaddr.sin_addr;
}

/*
==============
bdSockAddr::getIn4AddrByte
==============
*/
unsigned __int8 bdSockAddr::getIn4AddrByte(bdSockAddr *this, int i)
{
  if ( (unsigned int)i <= 3 )
    return *(&this->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_un_b.s_b1 + i);
  bdHandleAssert(0, "\"0\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdsockaddr.cpp", "bdSockAddr::getIn4AddrByte", 0x243u, "Index out of range");
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdsockaddr.cpp", "bdSockAddr::getIn4AddrByte", 0x243u, "Index out of range");
  return 0;
}

/*
==============
bdSockAddr::getIn6Addr
==============
*/
in6_addr *bdSockAddr::getIn6Addr(bdSockAddr *this)
{
  return &this->inUn.m_ipv6Sockaddr.sin6_addr;
}

/*
==============
bdSockAddr::getIn6Addr
==============
*/
in6_addr *bdSockAddr::getIn6Addr(bdSockAddr *this)
{
  return &this->inUn.m_ipv6Sockaddr.sin6_addr;
}

/*
==============
bdSockAddr::getPort
==============
*/
u_short bdSockAddr::getPort(bdSockAddr *this)
{
  if ( this->inUn.m_sockaddrStorage.ss_family == 23 || this->inUn.m_sockaddrStorage.ss_family == 2 )
    return ntohs(this->inUn.m_ipv4Sockaddr.sin_port);
  bdHandleAssert(0, "\"false\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdsockaddr.cpp", "bdSockAddr::getPort", 0xF9u, "Invalid AF_family. Only IPv4 and IPv6 supported.");
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdsockaddr.cpp", "bdSockAddr::getPort", 0xF9u, "Invalid AF_family. Only IPv4 and IPv6 supported.");
  return 0;
}

/*
==============
bdSockAddr::getSockaddr
==============
*/
bdSockAddr *bdSockAddr::getSockaddr(bdSockAddr *this)
{
  return this;
}

/*
==============
bdSockAddr::getSockaddr
==============
*/
bdSockAddr *bdSockAddr::getSockaddr(bdSockAddr *this)
{
  return this;
}

/*
==============
bdSockAddr::getSockaddrIn6
==============
*/
bdSockAddr *bdSockAddr::getSockaddrIn6(bdSockAddr *this)
{
  return this;
}

/*
==============
bdSockAddr::getSockaddrIn6
==============
*/
bdSockAddr *bdSockAddr::getSockaddrIn6(bdSockAddr *this)
{
  return this;
}

/*
==============
bdSockAddr::getSockaddrIn
==============
*/
bdSockAddr *bdSockAddr::getSockaddrIn(bdSockAddr *this)
{
  return this;
}

/*
==============
bdSockAddr::getSockaddrIn
==============
*/
bdSockAddr *bdSockAddr::getSockaddrIn(bdSockAddr *this)
{
  return this;
}

/*
==============
bdSockAddr::getSockaddrLen
==============
*/
__int64 bdSockAddr::getSockaddrLen(bdSockAddr *this)
{
  __int64 result; 

  result = 0i64;
  if ( this->inUn.m_sockaddrStorage.ss_family == 23 )
    return 28i64;
  if ( this->inUn.m_sockaddrStorage.ss_family == 2 )
    return 16i64;
  return result;
}

/*
==============
bdSockAddr::getSockaddrStorage
==============
*/
bdSockAddr *bdSockAddr::getSockaddrStorage(bdSockAddr *this)
{
  return this;
}

/*
==============
bdSockAddr::getSockaddrStorage
==============
*/
bdSockAddr *bdSockAddr::getSockaddrStorage(bdSockAddr *this)
{
  return this;
}

/*
==============
bdSockAddr::isValid
==============
*/
bool bdSockAddr::isValid(bdSockAddr *this)
{
  return this->inUn.m_sockaddrStorage.ss_family != BD_INVALID_SOCK_ADDR.inUn.m_sockaddrStorage.ss_family || this->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr != BD_INVALID_SOCK_ADDR.inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr;
}

/*
==============
bdSockAddr::resetAddress
==============
*/
void bdSockAddr::resetAddress(bdSockAddr *this)
{
  memset_0(this, 0, sizeof(bdSockAddr));
}

/*
==============
bdSockAddr::serialize
==============
*/
char bdSockAddr::serialize(bdSockAddr *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  unsigned __int16 Port; 
  __int64 v10; 
  unsigned __int16 v11; 
  unsigned int v12; 
  bool v13; 

  if ( this->inUn.m_sockaddrStorage.ss_family == 23 )
  {
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdsockaddr.cpp", "bdSockAddr::serialize", 0x306u, "BD_IPV6_ENABLED is not defined, but tried to serialize an IPv6 address");
    return 0;
  }
  if ( !bdBytePacker::appendBuffer(data, size, offset, newOffset, &this->inUn.m_ipv6Sockaddr.sin6_flowinfo, 4u) )
    return 0;
  Port = bdSockAddr::getPort(this);
  v10 = *newOffset;
  v11 = Port;
  v12 = v10 + 2;
  *newOffset = v10 + 2;
  v13 = (int)v10 + 2 <= size || !data;
  bdHandleAssert(v13, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  if ( !data )
  {
LABEL_12:
    if ( v12 <= size )
      return 1;
    return !data;
  }
  if ( v12 <= size )
  {
    *(_WORD *)((char *)data + v10) = v11;
    goto LABEL_12;
  }
  return !data;
}

/*
==============
bdSockAddr::set
==============
*/
INT bdSockAddr::set(bdSockAddr *this, unsigned __int16 family, const char *addr)
{
  memset_0(this, 0, sizeof(bdSockAddr));
  bdSockAddr::setFamily(this, family);
  this->inUn.m_ipv4Sockaddr.sin_port = htons(0);
  return inet_pton(2, addr, &this->inUn.m_ipv6Sockaddr.sin6_flowinfo);
}

/*
==============
bdSockAddr::set
==============
*/
INT bdSockAddr::set(bdSockAddr *this, unsigned __int16 family, const char *addr, const unsigned __int16 port)
{
  memset_0(this, 0, sizeof(bdSockAddr));
  bdSockAddr::setFamily(this, family);
  this->inUn.m_ipv4Sockaddr.sin_port = htons(port);
  return inet_pton(2, addr, &this->inUn.m_ipv6Sockaddr.sin6_flowinfo);
}

/*
==============
bdSockAddr::set
==============
*/
INT bdSockAddr::set(bdSockAddr *this, const char *addr)
{
  memset_0(&this->inUn.m_ipv4Sockaddr.sin_port, 0, 0x7Eui64);
  this->inUn.m_sockaddrStorage.ss_family = 2;
  this->inUn.m_ipv4Sockaddr.sin_port = htons(0);
  return inet_pton(2, addr, &this->inUn.m_ipv6Sockaddr.sin6_flowinfo);
}

/*
==============
bdSockAddr::set
==============
*/
void bdSockAddr::set(bdSockAddr *this, const bdSockAddr *other)
{
  _RBX = other;
  _RDI = this;
  memset_0(this, 0, sizeof(bdSockAddr));
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rdi], ymm0
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rdi+20h], ymm1
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups ymmword ptr [rdi+40h], ymm0
    vmovups ymm1, ymmword ptr [rbx+60h]
    vmovups ymmword ptr [rdi+60h], ymm1
  }
}

/*
==============
bdSockAddr::set
==============
*/
void bdSockAddr::set(bdSockAddr *this, unsigned __int8 a, unsigned __int8 b, unsigned __int8 c, unsigned __int8 d)
{
  memset_0(this, 0, sizeof(bdSockAddr));
  this->inUn.m_sockaddrStorage.ss_family = 2;
  this->inUn.m_sockaddrStorage.__ss_pad1[5] = d;
  this->inUn.m_sockaddrStorage.__ss_pad1[2] = a;
  this->inUn.m_sockaddrStorage.__ss_pad1[3] = b;
  this->inUn.m_sockaddrStorage.__ss_pad1[4] = c;
  bdSockAddr::setPort(this, 0);
}

/*
==============
bdSockAddr::set
==============
*/
void bdSockAddr::set(bdSockAddr *this, unsigned __int8 a, unsigned __int8 b, unsigned __int8 c, unsigned __int8 d, unsigned __int16 port)
{
  memset_0(this, 0, sizeof(bdSockAddr));
  this->inUn.m_sockaddrStorage.ss_family = 2;
  this->inUn.m_sockaddrStorage.__ss_pad1[5] = d;
  this->inUn.m_sockaddrStorage.__ss_pad1[2] = a;
  this->inUn.m_sockaddrStorage.__ss_pad1[3] = b;
  this->inUn.m_sockaddrStorage.__ss_pad1[4] = c;
  bdSockAddr::setPort(this, port);
}

/*
==============
bdSockAddr::set
==============
*/
void bdSockAddr::set(bdSockAddr *this, unsigned int addr)
{
  memset_0(this, 0, sizeof(bdSockAddr));
  this->inUn.m_sockaddrStorage.ss_family = 2;
  this->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr = addr;
  this->inUn.m_ipv4Sockaddr.sin_port = htons(0);
}

/*
==============
bdSockAddr::set
==============
*/
void bdSockAddr::set(bdSockAddr *this, unsigned int addr, unsigned __int16 port)
{
  memset_0(this, 0, sizeof(bdSockAddr));
  this->inUn.m_sockaddrStorage.ss_family = 2;
  this->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr = addr;
  this->inUn.m_ipv4Sockaddr.sin_port = htons(port);
}

/*
==============
bdSockAddr::setFamily
==============
*/
bool bdSockAddr::setFamily(bdSockAddr *this, unsigned __int16 family)
{
  bool result; 

  if ( family == 2 )
  {
    result = 1;
    this->inUn.m_sockaddrStorage.ss_family = 2;
  }
  else if ( family == 23 )
  {
    result = 1;
    this->inUn.m_sockaddrStorage.ss_family = 23;
  }
  else
  {
    bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdsockaddr.cpp", "bdSockAddr::setFamily", 0x111u, "Invalid AF_family. Only IPv4 and IPv6 supported.");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdsockaddr.cpp", "bdSockAddr::setFamily", 0x111u, "Invalid AF_family. Only IPv4 and IPv6 supported.");
    return 0;
  }
  return result;
}

/*
==============
bdSockAddr::setPort
==============
*/
char bdSockAddr::setPort(bdSockAddr *this, unsigned __int16 port)
{
  unsigned __int16 ss_family; 

  ss_family = this->inUn.m_sockaddrStorage.ss_family;
  if ( ss_family == 23 || ss_family == 2 )
  {
    this->inUn.m_ipv4Sockaddr.sin_port = htons(port);
    return 1;
  }
  else
  {
    bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdsockaddr.cpp", "bdSockAddr::setPort", 0xE5u, "Invalid AF_family. Only IPv4 and IPv6 supported.");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdsockaddr.cpp", "bdSockAddr::setPort", 0xE5u, "Invalid AF_family. Only IPv4 and IPv6 supported.");
    return 0;
  }
}

/*
==============
bdSockAddr::toString
==============
*/
unsigned __int64 bdSockAddr::toString(bdSockAddr *this, char *const str, const unsigned __int64 size)
{
  size_t v5; 
  __int64 v7; 
  char *v8; 

  if ( this->inUn.m_sockaddrStorage.ss_family == BD_INVALID_SOCK_ADDR.inUn.m_sockaddrStorage.ss_family && this->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr == BD_INVALID_SOCK_ADDR.inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSockAddr", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdsockaddr.cpp", "bdSockAddr::toString", 0x1B3u, "bdSockAddr invalid, cannot convert to string");
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    if ( size && str )
    {
      v5 = 7i64;
      if ( size - 1 <= 7 )
        v5 = size - 1;
      memcpy_0(str, "UNKNOWN", v5);
      str[v5] = 0;
    }
    return 8i64;
  }
  else
  {
    v7 = 0i64;
    v8 = inet_ntoa(this->inUn.m_ipv4Sockaddr.sin_addr);
    if ( v8 )
    {
      bdStrlcpy(str, v8, size);
      return bdStrlen(str);
    }
    return v7;
  }
}

/*
==============
bdSockAddr::toUInt32
==============
*/

unsigned int __fastcall bdSockAddr::toUInt32(bdSockAddr *this)
{
  return bdSockAddr::toUInt32NBO(this);
}

/*
==============
bdSockAddr::toUInt32HBO
==============
*/
u_long bdSockAddr::toUInt32HBO(bdSockAddr *this)
{
  u_long v1; 

  v1 = bdSockAddr::toUInt32NBO(this);
  return ntohl(v1);
}

/*
==============
bdSockAddr::toUInt32NBO
==============
*/
__int64 bdSockAddr::toUInt32NBO(bdSockAddr *this)
{
  if ( this->inUn.m_sockaddrStorage.ss_family == 2 )
    return this->inUn.m_ipv4Sockaddr.sin_addr.S_un.S_addr;
  bdHandleAssert(0, "\"false\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdsockaddr.cpp", "bdSockAddr::toUInt32NBO", 0x157u, "Only IPv4 address will fit in a 32bit int");
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformsocket\\bdsockaddr.cpp", "bdSockAddr::toUInt32NBO", 0x157u, "Only IPv4 address will fit in a 32bit int");
  return 0i64;
}

