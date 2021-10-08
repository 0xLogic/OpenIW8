/*
==============
bdDTLSCookieEcho::deserialize
==============
*/

bool __fastcall bdDTLSCookieEcho::deserialize(bdDTLSCookieEcho *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset, const unsigned __int16 expectedCypherSuite)
{
  return ?deserialize@bdDTLSCookieEcho@@UEAA_NPEBXIIAEAIG@Z(this, data, size, offset, newOffset, expectedCypherSuite);
}

/*
==============
bdDTLSCookieEcho::bdDTLSCookieEcho
==============
*/

void __fastcall bdDTLSCookieEcho::bdDTLSCookieEcho(bdDTLSCookieEcho *this)
{
  ??0bdDTLSCookieEcho@@QEAA@XZ(this);
}

/*
==============
bdDTLSCookieEcho::getCookie
==============
*/

const bdDTLSInitAck *__fastcall bdDTLSCookieEcho::getCookie(bdDTLSCookieEcho *this)
{
  return ?getCookie@bdDTLSCookieEcho@@QEBAAEBVbdDTLSInitAck@@XZ(this);
}

/*
==============
bdDTLSCookieEcho::serialize
==============
*/

bool __fastcall bdDTLSCookieEcho::serialize(bdDTLSCookieEcho *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdDTLSCookieEcho@@UEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdDTLSCookieEcho::getSecID
==============
*/

const unsigned __int8 *__fastcall bdDTLSCookieEcho::getSecID(bdDTLSCookieEcho *this)
{
  return ?getSecID@bdDTLSCookieEcho@@QEBAPEBEXZ(this);
}

/*
==============
bdDTLSCookieEcho::getECCKey
==============
*/

const unsigned __int8 *__fastcall bdDTLSCookieEcho::getECCKey(bdDTLSCookieEcho *this)
{
  return ?getECCKey@bdDTLSCookieEcho@@QEBAPEBEXZ(this);
}

/*
==============
bdDTLSCookieEcho::~bdDTLSCookieEcho
==============
*/

void __fastcall bdDTLSCookieEcho::~bdDTLSCookieEcho(bdDTLSCookieEcho *this)
{
  ??1bdDTLSCookieEcho@@UEAA@XZ(this);
}

/*
==============
bdDTLSCookieEcho::bdDTLSCookieEcho
==============
*/

void __fastcall bdDTLSCookieEcho::bdDTLSCookieEcho(bdDTLSCookieEcho *this, unsigned __int16 vtag, const bdDTLSInitAck *cookie, bdReference<bdCommonAddr> localCommonAddr, bdECCKey *const ECCKey)
{
  ??0bdDTLSCookieEcho@@QEAA@GAEBVbdDTLSInitAck@@V?$bdReference@VbdCommonAddr@@@@QEAVbdECCKey@@@Z(this, vtag, cookie, localCommonAddr, ECCKey);
}

/*
==============
bdDTLSCookieEcho::getCa
==============
*/

const unsigned __int8 *__fastcall bdDTLSCookieEcho::getCa(bdDTLSCookieEcho *this)
{
  return ?getCa@bdDTLSCookieEcho@@QEBAPEBEXZ(this);
}

/*
==============
bdDTLSCookieEcho::bdDTLSCookieEcho
==============
*/
void bdDTLSCookieEcho::bdDTLSCookieEcho(bdDTLSCookieEcho *this, unsigned __int16 vtag, const bdDTLSInitAck *cookie, bdReference<bdCommonAddr> localCommonAddr, bdECCKey *const ECCKey)
{
  unsigned int keylen; 
  __int64 v20; 
  bdDTLSCookieEcho *v21; 
  bdCommonAddr *m_ptr; 
  bdDTLSInitAck *p_m_cookie; 
  bdSecurityID secID; 
  unsigned __int8 buffer[32]; 
  int v28; 
  unsigned __int8 pubKey[32]; 
  int v32; 

  v20 = -2i64;
  _RSI = (bdDTLSInitAck *)cookie;
  _R14 = this;
  v21 = this;
  m_ptr = localCommonAddr.m_ptr;
  bdDTLSHeader::bdDTLSHeader(this, BD_DTLS_COOKIE_ECHO, vtag, 0);
  _R14->__vftable = (bdDTLSCookieEcho_vtbl *)&bdDTLSCookieEcho::`vftable';
  _RBX = &_R14->m_cookie;
  p_m_cookie = &_R14->m_cookie;
  _R14->m_cookie.__vftable = (bdDTLSInitAck_vtbl *)&bdDTLSHeader::`vftable';
  _R14->m_cookie.m_type = _RSI->m_type;
  _R14->m_cookie.m_version = _RSI->m_version;
  _R14->m_cookie.m_vtag = _RSI->m_vtag;
  _R14->m_cookie.m_counter = _RSI->m_counter;
  _R14->m_cookie.__vftable = (bdDTLSInitAck_vtbl *)&bdDTLSInitAck::`vftable';
  _R14->m_cookie.m_cypherSuite = _RSI->m_cypherSuite;
  _R14->m_cookie.m_timestamp = _RSI->m_timestamp;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi+18h]
    vmovups xmmword ptr [rbx+18h], xmm0
  }
  _R14->m_cookie.m_initTag = _RSI->m_initTag;
  _R14->m_cookie.m_localTag = _RSI->m_localTag;
  _R14->m_cookie.m_peerTag = _RSI->m_peerTag;
  _R14->m_cookie.m_localTieTag = _RSI->m_localTieTag;
  _R14->m_cookie.m_peerTieTag = _RSI->m_peerTieTag;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+32h]
    vmovups ymmword ptr [rbx+32h], ymm0
  }
  _R14->m_cookie.m_localRandom.m_initialized = 1;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+53h]
    vmovups ymmword ptr [rbx+53h], ymm0
  }
  _R14->m_cookie.m_peerRandom.m_initialized = 1;
  bdAddr::bdAddr(&_R14->m_cookie.m_peerAddr, &_RSI->m_peerAddr);
  bdSecurityID::bdSecurityID(&_R14->m_cookie.m_secID, &_RSI->m_secID);
  bdSecurityID::bdSecurityID(&secID);
  bdDTLSInitAck::getSecID(_RSI, &secID);
  bdCommonAddr::serialize((bdCommonAddr *)localCommonAddr.m_ptr->__vftable, buffer);
  keylen = 100;
  if ( !bdECCKey::exportKey(ECCKey, pubKey, &keylen) || keylen != 100 )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdDTLSCookieEcho", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlscookieecho.cpp", "bdDTLSCookieEcho::bdDTLSCookieEcho", 0x29u, "Problem with key");
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+178h+buffer]
    vmovups ymmword ptr [r14+128h], ymm0
    vmovups ymm1, [rsp+178h+var_E8]
    vmovups ymmword ptr [r14+148h], ymm1
    vmovups xmm0, [rsp+178h+var_C8]
    vmovups xmmword ptr [r14+168h], xmm0
  }
  *(_DWORD *)&_R14->m_ca[80] = v28;
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+178h+secID.ab]
    vmovsd  qword ptr [r14+17Ch], xmm0
    vmovups ymm1, ymmword ptr [rsp+178h+pubKey]
    vmovups ymmword ptr [r14+184h], ymm1
    vmovups ymm0, [rsp+178h+var_88]
    vmovups ymmword ptr [r14+1A4h], ymm0
    vmovups ymm1, [rsp+178h+var_68]
    vmovups ymmword ptr [r14+1C4h], ymm1
  }
  *(_DWORD *)&_R14->m_ECCKey[96] = v32;
  bdSecurityID::~bdSecurityID(&secID);
  if ( localCommonAddr.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&localCommonAddr.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( localCommonAddr.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))localCommonAddr.m_ptr->~bdReferencable)(localCommonAddr.m_ptr->__vftable, 1i64);
    localCommonAddr.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdDTLSCookieEcho::bdDTLSCookieEcho
==============
*/
void bdDTLSCookieEcho::bdDTLSCookieEcho(bdDTLSCookieEcho *this)
{
  bdDTLSHeader::bdDTLSHeader(this);
  this->__vftable = (bdDTLSCookieEcho_vtbl *)&bdDTLSCookieEcho::`vftable';
  bdDTLSInitAck::bdDTLSInitAck(&this->m_cookie);
  memset_0(this->m_ca, 0, 0xC0ui64);
}

/*
==============
bdDTLSCookieEcho::~bdDTLSCookieEcho
==============
*/
void bdDTLSCookieEcho::~bdDTLSCookieEcho(bdDTLSCookieEcho *this)
{
  this->__vftable = (bdDTLSCookieEcho_vtbl *)&bdDTLSCookieEcho::`vftable';
  bdCryptoUtils::zeroBuffer(this->m_ca, 0x54ui64);
  bdCryptoUtils::zeroBuffer(this->m_secID, 8ui64);
  bdCryptoUtils::zeroBuffer(this->m_ECCKey, 0x64ui64);
  bdDTLSInitAck::~bdDTLSInitAck(&this->m_cookie);
  bdDTLSHeader::~bdDTLSHeader(this);
}

/*
==============
bdDTLSCookieEcho::deserialize
==============
*/
char bdDTLSCookieEcho::deserialize(bdDTLSCookieEcho *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset, const unsigned __int16 expectedCypherSuite)
{
  *newOffset = offset;
  if ( bdDTLSHeader::deserialize(this, data, size, offset, newOffset) && this->m_cookie.deserialize(&this->m_cookie, data, size, *newOffset, newOffset, expectedCypherSuite) && bdBytePacker::removeBuffer(data, size, *newOffset, newOffset, this->m_ca, 0x54u) && bdBytePacker::removeBuffer(data, size, *newOffset, newOffset, this->m_secID, 8u) && bdBytePacker::removeBuffer(data, size, *newOffset, newOffset, this->m_ECCKey, 0x64u) )
    return 1;
  *newOffset = offset;
  return 0;
}

/*
==============
bdDTLSCookieEcho::getCa
==============
*/
unsigned __int8 *bdDTLSCookieEcho::getCa(bdDTLSCookieEcho *this)
{
  return this->m_ca;
}

/*
==============
bdDTLSCookieEcho::getCookie
==============
*/
bdDTLSInitAck *bdDTLSCookieEcho::getCookie(bdDTLSCookieEcho *this)
{
  return &this->m_cookie;
}

/*
==============
bdDTLSCookieEcho::getECCKey
==============
*/
unsigned __int8 *bdDTLSCookieEcho::getECCKey(bdDTLSCookieEcho *this)
{
  return this->m_ECCKey;
}

/*
==============
bdDTLSCookieEcho::getSecID
==============
*/
unsigned __int8 *bdDTLSCookieEcho::getSecID(bdDTLSCookieEcho *this)
{
  return this->m_secID;
}

/*
==============
bdDTLSCookieEcho::serialize
==============
*/
char bdDTLSCookieEcho::serialize(bdDTLSCookieEcho *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  *newOffset = offset;
  if ( bdDTLSHeader::serialize(this, data, size, offset, newOffset) && this->m_cookie.serialize(&this->m_cookie, data, size, *newOffset, newOffset) && bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, this->m_ca, 0x54u) && bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, this->m_secID, 8u) && bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, this->m_ECCKey, 0x64u) )
    return 1;
  *newOffset = offset;
  return 0;
}

