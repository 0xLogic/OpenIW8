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
  __int64 v9; 
  bdDTLSCookieEcho *v10; 
  bdCommonAddr *m_ptr; 
  bdDTLSInitAck *p_m_cookie; 
  bdSecurityID secID; 
  unsigned __int8 buffer[32]; 
  __m256i v15; 
  __int128 v16; 
  int v17; 
  unsigned __int8 pubKey[32]; 
  __m256i v19; 
  __m256i v20; 
  int v21; 

  v9 = -2i64;
  v10 = this;
  m_ptr = localCommonAddr.m_ptr;
  bdDTLSHeader::bdDTLSHeader(this, BD_DTLS_COOKIE_ECHO, vtag, 0);
  this->__vftable = (bdDTLSCookieEcho_vtbl *)&bdDTLSCookieEcho::`vftable';
  p_m_cookie = &this->m_cookie;
  this->m_cookie.__vftable = (bdDTLSInitAck_vtbl *)&bdDTLSHeader::`vftable';
  this->m_cookie.m_type = cookie->m_type;
  this->m_cookie.m_version = cookie->m_version;
  this->m_cookie.m_vtag = cookie->m_vtag;
  this->m_cookie.m_counter = cookie->m_counter;
  this->m_cookie.__vftable = (bdDTLSInitAck_vtbl *)&bdDTLSInitAck::`vftable';
  this->m_cookie.m_cypherSuite = cookie->m_cypherSuite;
  this->m_cookie.m_timestamp = cookie->m_timestamp;
  *(_OWORD *)this->m_cookie.m_signature = *(_OWORD *)cookie->m_signature;
  this->m_cookie.m_initTag = cookie->m_initTag;
  this->m_cookie.m_localTag = cookie->m_localTag;
  this->m_cookie.m_peerTag = cookie->m_peerTag;
  this->m_cookie.m_localTieTag = cookie->m_localTieTag;
  this->m_cookie.m_peerTieTag = cookie->m_peerTieTag;
  *(__m256i *)this->m_cookie.m_localRandom.m_dtlsRandom = *(__m256i *)cookie->m_localRandom.m_dtlsRandom;
  this->m_cookie.m_localRandom.m_initialized = 1;
  *(__m256i *)this->m_cookie.m_peerRandom.m_dtlsRandom = *(__m256i *)cookie->m_peerRandom.m_dtlsRandom;
  this->m_cookie.m_peerRandom.m_initialized = 1;
  bdAddr::bdAddr(&this->m_cookie.m_peerAddr, &cookie->m_peerAddr);
  bdSecurityID::bdSecurityID(&this->m_cookie.m_secID, &cookie->m_secID);
  bdSecurityID::bdSecurityID(&secID);
  bdDTLSInitAck::getSecID((bdDTLSInitAck *)cookie, &secID);
  bdCommonAddr::serialize((bdCommonAddr *)localCommonAddr.m_ptr->__vftable, buffer);
  keylen = 100;
  if ( !bdECCKey::exportKey(ECCKey, pubKey, &keylen) || keylen != 100 )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdDTLSCookieEcho", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlscookieecho.cpp", "bdDTLSCookieEcho::bdDTLSCookieEcho", 0x29u, "Problem with key");
  *(__m256i *)this->m_ca = *(__m256i *)buffer;
  *(__m256i *)&this->m_ca[32] = v15;
  *(_OWORD *)&this->m_ca[64] = v16;
  *(_DWORD *)&this->m_ca[80] = v17;
  *(double *)this->m_secID = *(double *)&secID;
  *(__m256i *)this->m_ECCKey = *(__m256i *)pubKey;
  *(__m256i *)&this->m_ECCKey[32] = v19;
  *(__m256i *)&this->m_ECCKey[64] = v20;
  *(_DWORD *)&this->m_ECCKey[96] = v21;
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

