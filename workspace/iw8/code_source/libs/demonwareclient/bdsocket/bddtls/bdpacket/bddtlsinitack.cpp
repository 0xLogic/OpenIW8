/*
==============
bdDTLSInitAck::getSecID
==============
*/

void __fastcall bdDTLSInitAck::getSecID(bdDTLSInitAck *this, bdSecurityID *secID)
{
  ?getSecID@bdDTLSInitAck@@QEBAXAEAVbdSecurityID@@@Z(this, secID);
}

/*
==============
bdDTLSInitAck::~bdDTLSInitAck
==============
*/

void __fastcall bdDTLSInitAck::~bdDTLSInitAck(bdDTLSInitAck *this)
{
  ??1bdDTLSInitAck@@UEAA@XZ(this);
}

/*
==============
bdDTLSInitAck::getPeerTag
==============
*/

unsigned __int16 __fastcall bdDTLSInitAck::getPeerTag(bdDTLSInitAck *this)
{
  return ?getPeerTag@bdDTLSInitAck@@QEBAGXZ(this);
}

/*
==============
bdDTLSInitAck::serialize
==============
*/

bool __fastcall bdDTLSInitAck::serialize(bdDTLSInitAck *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdDTLSInitAck@@UEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdDTLSInitAck::verify
==============
*/

bool __fastcall bdDTLSInitAck::verify(bdDTLSInitAck *this, bdHMac *hmac)
{
  return ?verify@bdDTLSInitAck@@QEBA_NAEAVbdHMac@@@Z(this, hmac);
}

/*
==============
bdDTLSInitAck::getTimestamp
==============
*/

unsigned int __fastcall bdDTLSInitAck::getTimestamp(bdDTLSInitAck *this)
{
  return ?getTimestamp@bdDTLSInitAck@@QEBAIXZ(this);
}

/*
==============
bdDTLSInitAck::getPeerTieTag
==============
*/

unsigned __int16 __fastcall bdDTLSInitAck::getPeerTieTag(bdDTLSInitAck *this)
{
  return ?getPeerTieTag@bdDTLSInitAck@@QEBAGXZ(this);
}

/*
==============
bdDTLSInitAck::bdDTLSInitAck
==============
*/

void __fastcall bdDTLSInitAck::bdDTLSInitAck(bdDTLSInitAck *this, unsigned __int16 vtag, unsigned __int16 initTag, unsigned __int16 localTag, unsigned __int16 peerTag, unsigned __int16 localTieTag, unsigned __int16 peerTieTag, const unsigned __int16 cypherSuite, const bdDTLSRandom *localRandom, const bdDTLSRandom *peerRandom, unsigned int timestamp, const bdAddr *peerAddr, bdSecurityID secID)
{
  ??0bdDTLSInitAck@@QEAA@GGGGGGGAEBVbdDTLSRandom@@0IAEBVbdAddr@@VbdSecurityID@@@Z(this, vtag, initTag, localTag, peerTag, localTieTag, peerTieTag, cypherSuite, localRandom, peerRandom, timestamp, peerAddr, secID);
}

/*
==============
bdDTLSInitAck::getPeerRandom
==============
*/

const bdDTLSRandom *__fastcall bdDTLSInitAck::getPeerRandom(bdDTLSInitAck *this)
{
  return ?getPeerRandom@bdDTLSInitAck@@QEBAAEBVbdDTLSRandom@@XZ(this);
}

/*
==============
bdDTLSInitAck::sign
==============
*/

bool __fastcall bdDTLSInitAck::sign(bdDTLSInitAck *this, bdHMac *hmac)
{
  return ?sign@bdDTLSInitAck@@QEAA_NAEAVbdHMac@@@Z(this, hmac);
}

/*
==============
bdDTLSInitAck::getPeerAddr
==============
*/

const bdAddr *__fastcall bdDTLSInitAck::getPeerAddr(bdDTLSInitAck *this)
{
  return ?getPeerAddr@bdDTLSInitAck@@QEBAAEBVbdAddr@@XZ(this);
}

/*
==============
bdDTLSInitAck::getLocalTieTag
==============
*/

unsigned __int16 __fastcall bdDTLSInitAck::getLocalTieTag(bdDTLSInitAck *this)
{
  return ?getLocalTieTag@bdDTLSInitAck@@QEBAGXZ(this);
}

/*
==============
bdDTLSInitAck::bdDTLSInitAck
==============
*/

void __fastcall bdDTLSInitAck::bdDTLSInitAck(bdDTLSInitAck *this)
{
  ??0bdDTLSInitAck@@QEAA@XZ(this);
}

/*
==============
bdDTLSInitAck::deserialize
==============
*/

bool __fastcall bdDTLSInitAck::deserialize(bdDTLSInitAck *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset, const unsigned __int16 expectedCypherSuite)
{
  return ?deserialize@bdDTLSInitAck@@UEAA_NPEBXIIAEAIG@Z(this, data, size, offset, newOffset, expectedCypherSuite);
}

/*
==============
bdDTLSInitAck::getInitTag
==============
*/

unsigned __int16 __fastcall bdDTLSInitAck::getInitTag(bdDTLSInitAck *this)
{
  return ?getInitTag@bdDTLSInitAck@@QEBAGXZ(this);
}

/*
==============
bdDTLSInitAck::getLocalTag
==============
*/

unsigned __int16 __fastcall bdDTLSInitAck::getLocalTag(bdDTLSInitAck *this)
{
  return ?getLocalTag@bdDTLSInitAck@@QEBAGXZ(this);
}

/*
==============
bdDTLSInitAck::getLocalRandom
==============
*/

const bdDTLSRandom *__fastcall bdDTLSInitAck::getLocalRandom(bdDTLSInitAck *this)
{
  return ?getLocalRandom@bdDTLSInitAck@@QEBAAEBVbdDTLSRandom@@XZ(this);
}

/*
==============
bdDTLSInitAck::bdDTLSInitAck
==============
*/
void bdDTLSInitAck::bdDTLSInitAck(bdDTLSInitAck *this, unsigned __int16 vtag, unsigned __int16 initTag, unsigned __int16 localTag, unsigned __int16 peerTag, unsigned __int16 localTieTag, unsigned __int16 peerTieTag, const unsigned __int16 cypherSuite, const bdDTLSRandom *localRandom, const bdDTLSRandom *peerRandom, unsigned int timestamp, const bdAddr *peerAddr, bdSecurityID secID)
{
  bdDTLSHeader::bdDTLSHeader(this, BD_DTLS_INIT_ACK, vtag, 0);
  this->__vftable = (bdDTLSInitAck_vtbl *)&bdDTLSInitAck::`vftable';
  this->m_cypherSuite = cypherSuite;
  this->m_timestamp = timestamp;
  this->m_initTag = initTag;
  this->m_localTag = localTag;
  this->m_peerTag = peerTag;
  this->m_localTieTag = localTieTag;
  this->m_peerTieTag = peerTieTag;
  *(__m256i *)this->m_localRandom.m_dtlsRandom = *(__m256i *)localRandom->m_dtlsRandom;
  this->m_localRandom.m_initialized = 1;
  *(__m256i *)this->m_peerRandom.m_dtlsRandom = *(__m256i *)peerRandom->m_dtlsRandom;
  this->m_peerRandom.m_initialized = 1;
  bdAddr::bdAddr(&this->m_peerAddr, peerAddr);
  bdSecurityID::bdSecurityID(&this->m_secID, *(const bdSecurityID **)&secID);
  bdCryptoUtils::zeroBuffer(this->m_signature, 0x10ui64);
  bdSecurityID::~bdSecurityID(*(bdSecurityID **)&secID);
}

/*
==============
bdDTLSInitAck::bdDTLSInitAck
==============
*/
void bdDTLSInitAck::bdDTLSInitAck(bdDTLSInitAck *this)
{
  bdDTLSHeader::bdDTLSHeader(this);
  this->__vftable = (bdDTLSInitAck_vtbl *)&bdDTLSInitAck::`vftable';
  this->m_cypherSuite = 0;
  this->m_timestamp = 0;
  *(_QWORD *)&this->m_initTag = 0i64;
  this->m_peerTieTag = 0;
  this->m_localRandom.m_initialized = 0;
  *(_QWORD *)this->m_localRandom.m_dtlsRandom = 0i64;
  *(_QWORD *)&this->m_localRandom.m_dtlsRandom[8] = 0i64;
  *(_QWORD *)&this->m_localRandom.m_dtlsRandom[16] = 0i64;
  *(_QWORD *)&this->m_localRandom.m_dtlsRandom[24] = 0i64;
  this->m_peerRandom.m_initialized = 0;
  *(_QWORD *)this->m_peerRandom.m_dtlsRandom = 0i64;
  *(_QWORD *)&this->m_peerRandom.m_dtlsRandom[8] = 0i64;
  *(_QWORD *)&this->m_peerRandom.m_dtlsRandom[16] = 0i64;
  *(_QWORD *)&this->m_peerRandom.m_dtlsRandom[24] = 0i64;
  bdAddr::bdAddr(&this->m_peerAddr);
  bdSecurityID::bdSecurityID(&this->m_secID);
  *(_QWORD *)this->m_signature = 0i64;
  *(_QWORD *)&this->m_signature[8] = 0i64;
}

/*
==============
bdDTLSInitAck::~bdDTLSInitAck
==============
*/
void bdDTLSInitAck::~bdDTLSInitAck(bdDTLSInitAck *this)
{
  this->__vftable = (bdDTLSInitAck_vtbl *)&bdDTLSInitAck::`vftable';
  *(_QWORD *)&this->m_initTag = 0i64;
  this->m_peerTieTag = 0;
  bdCryptoUtils::zeroBuffer(this->m_signature, 0x10ui64);
  bdSecurityID::~bdSecurityID(&this->m_secID);
  bdCryptoUtils::zeroBuffer(&this->m_peerRandom, 0x20ui64);
  bdCryptoUtils::zeroBuffer(&this->m_localRandom, 0x20ui64);
  bdDTLSHeader::~bdDTLSHeader(this);
}

/*
==============
bdDTLSInitAck::deserialize
==============
*/
bool bdDTLSInitAck::deserialize(bdDTLSInitAck *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset, const unsigned __int16 expectedCypherSuite)
{
  __int64 v10; 
  unsigned int v11; 
  bool result; 
  __m256i v13; 
  __m256i dest; 
  __m256i v15; 

  *newOffset = offset;
  if ( !bdDTLSHeader::deserialize(this, data, size, offset, newOffset) )
    goto LABEL_17;
  v10 = *newOffset;
  v11 = v10 + 4;
  *newOffset = v10 + 4;
  if ( data )
  {
    if ( v11 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
    else
      this->m_timestamp = *(_DWORD *)((char *)data + v10);
  }
  if ( (v11 <= size || !data) && bdBytePacker::removeBuffer(data, size, *newOffset, newOffset, this->m_signature, 0x10u) && bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_initTag) && bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_localTag) && bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_peerTag) && bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_localTieTag) && bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_peerTieTag) && bdAddr::deserialize(&this->m_peerAddr, data, size, *newOffset, newOffset) && bdBytePacker::removeBuffer(data, size, *newOffset, newOffset, &this->m_secID, 8u) )
    result = 1;
  else
LABEL_17:
    result = 0;
  if ( BD_DTLS_VERSION < 3u )
  {
    if ( result )
      return result;
  }
  else
  {
    if ( result && bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_cypherSuite) )
    {
      if ( expectedCypherSuite == this->m_cypherSuite )
      {
        if ( bdBytePacker::removeBuffer(data, size, *newOffset, newOffset, &dest, 0x20u) && bdBytePacker::removeBuffer(data, size, *newOffset, newOffset, &v15, 0x20u) )
        {
          *(__m256i *)this->m_localRandom.m_dtlsRandom = dest;
          v13 = v15;
          this->m_localRandom.m_initialized = 1;
          result = 1;
          *(__m256i *)this->m_peerRandom.m_dtlsRandom = v13;
          this->m_peerRandom.m_initialized = 1;
          return result;
        }
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdDTLS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsinitack.cpp", "bdDTLSInitAck::deserialize", 0xC4u, "bdDTLSInitAck: Cypher Suite Mismatch");
      }
    }
    result = 0;
  }
  *newOffset = offset;
  return result;
}

/*
==============
bdDTLSInitAck::getInitTag
==============
*/
__int64 bdDTLSInitAck::getInitTag(bdDTLSInitAck *this)
{
  return this->m_initTag;
}

/*
==============
bdDTLSInitAck::getLocalRandom
==============
*/
bdDTLSRandom *bdDTLSInitAck::getLocalRandom(bdDTLSInitAck *this)
{
  return &this->m_localRandom;
}

/*
==============
bdDTLSInitAck::getLocalTag
==============
*/
__int64 bdDTLSInitAck::getLocalTag(bdDTLSInitAck *this)
{
  return this->m_localTag;
}

/*
==============
bdDTLSInitAck::getLocalTieTag
==============
*/
__int64 bdDTLSInitAck::getLocalTieTag(bdDTLSInitAck *this)
{
  return this->m_localTieTag;
}

/*
==============
bdDTLSInitAck::getPeerAddr
==============
*/
bdAddr *bdDTLSInitAck::getPeerAddr(bdDTLSInitAck *this)
{
  return &this->m_peerAddr;
}

/*
==============
bdDTLSInitAck::getPeerRandom
==============
*/
bdDTLSRandom *bdDTLSInitAck::getPeerRandom(bdDTLSInitAck *this)
{
  return &this->m_peerRandom;
}

/*
==============
bdDTLSInitAck::getPeerTag
==============
*/
__int64 bdDTLSInitAck::getPeerTag(bdDTLSInitAck *this)
{
  return this->m_peerTag;
}

/*
==============
bdDTLSInitAck::getPeerTieTag
==============
*/
__int64 bdDTLSInitAck::getPeerTieTag(bdDTLSInitAck *this)
{
  return this->m_peerTieTag;
}

/*
==============
bdDTLSInitAck::getSecID
==============
*/
void bdDTLSInitAck::getSecID(bdDTLSInitAck *this, bdSecurityID *secID)
{
  *secID = this->m_secID;
}

/*
==============
bdDTLSInitAck::getTimestamp
==============
*/
__int64 bdDTLSInitAck::getTimestamp(bdDTLSInitAck *this)
{
  return this->m_timestamp;
}

/*
==============
bdDTLSInitAck::serialize
==============
*/
bool bdDTLSInitAck::serialize(bdDTLSInitAck *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  __int64 v9; 
  unsigned int v10; 
  bool v11; 
  bool result; 

  *newOffset = offset;
  if ( !bdDTLSHeader::serialize(this, data, size, offset, newOffset) )
    goto LABEL_20;
  v9 = *newOffset;
  v10 = v9 + 4;
  *newOffset = v9 + 4;
  v11 = (int)v9 + 4 <= size || !data;
  bdHandleAssert(v11, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( data )
  {
    if ( v10 > size )
      goto LABEL_10;
    *(_DWORD *)((char *)data + v9) = this->m_timestamp;
  }
  if ( v10 > size )
  {
LABEL_10:
    if ( data )
      goto LABEL_20;
  }
  if ( bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, this->m_signature, 0x10u) && bdBytePacker::appendBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_initTag) && bdBytePacker::appendBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_localTag) && bdBytePacker::appendBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_peerTag) && bdBytePacker::appendBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_localTieTag) && bdBytePacker::appendBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_peerTieTag) && bdAddr::serialize(&this->m_peerAddr, data, size, *newOffset, newOffset) && bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, &this->m_secID, 8u) )
  {
    result = 1;
    goto LABEL_21;
  }
LABEL_20:
  result = 0;
LABEL_21:
  if ( BD_DTLS_VERSION < 3u )
  {
    if ( result )
      return result;
  }
  else
  {
    if ( result && bdBytePacker::appendBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_cypherSuite) )
    {
      bdHandleAssert(this->m_localRandom.m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsrandom.h", "bdDTLSRandom::getData", 0x41u, "bdDTLSRandom not initialized before access");
      if ( bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, &this->m_localRandom, 0x20u) )
      {
        bdHandleAssert(this->m_peerRandom.m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsrandom.h", "bdDTLSRandom::getData", 0x41u, "bdDTLSRandom not initialized before access");
        if ( bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, &this->m_peerRandom, 0x20u) )
          return 1;
      }
    }
    result = 0;
  }
  *newOffset = offset;
  return result;
}

/*
==============
bdDTLSInitAck::sign
==============
*/
bool bdDTLSInitAck::sign(bdDTLSInitAck *this, bdHMac *hmac)
{
  bdHMac_vtbl *v3; 
  bool v5; 
  bool (__fastcall *process)(bdHMac *, const unsigned __int8 *const, const unsigned int); 
  bool (__fastcall *v7)(bdHMac *, const unsigned __int8 *const, const unsigned int); 
  char v8; 
  unsigned int newOffset; 
  unsigned int v11[3]; 
  char data[160]; 

  *(_QWORD *)this->m_signature = 0i64;
  *(_QWORD *)&this->m_signature[8] = 0i64;
  v3 = hmac->__vftable;
  v11[0] = 16;
  v5 = v3->process(hmac, (const unsigned __int8 *const)&this->m_timestamp, 4u) && hmac->process(hmac, (const unsigned __int8 *const)&this->m_initTag, 2u) && hmac->process(hmac, (const unsigned __int8 *const)&this->m_localTag, 2u) && hmac->process(hmac, (const unsigned __int8 *const)&this->m_peerTag, 2u) && hmac->process(hmac, (const unsigned __int8 *const)&this->m_localTieTag, 2u) && hmac->process(hmac, (const unsigned __int8 *const)&this->m_peerTieTag, 2u);
  if ( BD_DTLS_VERSION >= 3u )
  {
    if ( v5 && hmac->process(hmac, (const unsigned __int8 *const)&this->m_secID, 8u) && hmac->process(hmac, (const unsigned __int8 *const)&this->m_cypherSuite, 2u) )
    {
      process = hmac->process;
      bdHandleAssert(this->m_localRandom.m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsrandom.h", "bdDTLSRandom::getData", 0x41u, "bdDTLSRandom not initialized before access");
      if ( process(hmac, this->m_localRandom.m_dtlsRandom, 32u) )
      {
        v7 = hmac->process;
        bdHandleAssert(this->m_peerRandom.m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsrandom.h", "bdDTLSRandom::getData", 0x41u, "bdDTLSRandom not initialized before access");
        if ( v7(hmac, this->m_peerRandom.m_dtlsRandom, 32u) )
        {
          newOffset = 0;
          goto LABEL_18;
        }
      }
    }
    v5 = 0;
  }
  newOffset = 0;
  if ( !v5 )
  {
LABEL_22:
    v8 = 0;
    goto LABEL_23;
  }
LABEL_18:
  if ( !bdAddr::serialize(&this->m_peerAddr, data, 0x98u, 0, &newOffset) || !hmac->process(hmac, (const unsigned __int8 *const)data, newOffset) || !hmac->getData(hmac, this->m_signature, v11) )
    goto LABEL_22;
  v8 = 1;
LABEL_23:
  bdHandleAssert(v11[0] >= 0x10, "sigsize >= BD_DTLS_INIT_ACK_SIGNATURE_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsinitack.cpp", "bdDTLSInitAck::sign", 0x5Eu, "bdDTLSInitAck HMAC signature size < BD_DTLS_INIT_ACK_SIGNATURE_SIZE");
  return v8 && v11[0] >= 0x10;
}

/*
==============
bdDTLSInitAck::verify
==============
*/
bool bdDTLSInitAck::verify(bdDTLSInitAck *this, bdHMac *hmac)
{
  bdHMac_vtbl *v3; 
  bool v5; 
  bool v6; 
  bool v7; 
  bool v8; 
  bool v9; 
  bool v10; 
  bool v11; 
  bool v12; 
  bool (__fastcall *process)(bdHMac *, const unsigned __int8 *const, const unsigned int); 
  bool v14; 
  bool (__fastcall *v15)(bdHMac *, const unsigned __int8 *const, const unsigned int); 
  bool v16; 
  bool v17; 
  bool v18; 
  unsigned int newOffset; 
  int v21; 
  unsigned __int8 buffer2[8]; 
  __int64 v23; 
  char data[160]; 

  *(_QWORD *)buffer2 = 0i64;
  v23 = 0i64;
  v3 = hmac->__vftable;
  v21 = 16;
  v5 = v3->process(hmac, (const unsigned __int8 *const)&this->m_timestamp, 4u);
  v6 = hmac->process(hmac, (const unsigned __int8 *const)&this->m_initTag, 2u) && v5;
  v7 = hmac->process(hmac, (const unsigned __int8 *const)&this->m_localTag, 2u) && v6;
  v8 = hmac->process(hmac, (const unsigned __int8 *const)&this->m_peerTag, 2u) && v7;
  v9 = hmac->process(hmac, (const unsigned __int8 *const)&this->m_localTieTag, 2u) && v8;
  v10 = hmac->process(hmac, (const unsigned __int8 *const)&this->m_peerTieTag, 2u) && v9;
  if ( BD_DTLS_VERSION >= 3u )
  {
    v11 = hmac->process(hmac, (const unsigned __int8 *const)&this->m_secID, 8u) && v10;
    v12 = hmac->process(hmac, (const unsigned __int8 *const)&this->m_cypherSuite, 2u) && v11;
    process = hmac->process;
    bdHandleAssert(this->m_localRandom.m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsrandom.h", "bdDTLSRandom::getData", 0x41u, "bdDTLSRandom not initialized before access");
    v14 = process(hmac, this->m_localRandom.m_dtlsRandom, 32u) && v12;
    v15 = hmac->process;
    bdHandleAssert(this->m_peerRandom.m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsrandom.h", "bdDTLSRandom::getData", 0x41u, "bdDTLSRandom not initialized before access");
    v10 = v15(hmac, this->m_peerRandom.m_dtlsRandom, 32u) && v14;
  }
  newOffset = 0;
  v16 = bdAddr::serialize(&this->m_peerAddr, data, 0x98u, 0, &newOffset) && v10;
  v17 = hmac->process(hmac, (const unsigned __int8 *const)data, newOffset) && v16;
  v18 = hmac->getData(hmac, buffer2, (unsigned int *)&v21) && v17;
  return bdCryptoUtils::constTimeCompare(this->m_signature, buffer2, 0x10ui64) && v18;
}

