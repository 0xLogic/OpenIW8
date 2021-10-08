/*
==============
bdRelayBasePacket::verifyHmac
==============
*/

bool __fastcall bdRelayBasePacket::verifyHmac(bdRelayBasePacket *this, const void *data, const unsigned int dataSize, const unsigned int payloadSize, const unsigned __int8 *hmacKey)
{
  return ?verifyHmac@bdRelayBasePacket@@UEBA_NPEBXIIQEBE@Z(this, data, dataSize, payloadSize, hmacKey);
}

/*
==============
bdRelayBasePacket::getRoutingID
==============
*/

unsigned int __fastcall bdRelayBasePacket::getRoutingID(bdRelayBasePacket *this)
{
  return ?getRoutingID@bdRelayBasePacket@@QEBAIXZ(this);
}

/*
==============
bdRelayBasePacket::sign
==============
*/

bool __fastcall bdRelayBasePacket::sign(bdRelayBasePacket *this, void *data, const unsigned int dataSize, const unsigned int payloadSize, const unsigned int payloadOffset, unsigned int *newPayloadOffset, const unsigned __int8 *hmacKey)
{
  return ?sign@bdRelayBasePacket@@MEBA_NPEAXIIIAEAIQEBE@Z(this, data, dataSize, payloadSize, payloadOffset, newPayloadOffset, hmacKey);
}

/*
==============
bdRelayBasePacket::serialize
==============
*/

bool __fastcall bdRelayBasePacket::serialize(bdRelayBasePacket *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int8 *hmacKey)
{
  return ?serialize@bdRelayBasePacket@@UEBA_NPEAXIIAEAIQEBE@Z(this, data, dataSize, offset, newOffset, hmacKey);
}

/*
==============
bdRelayBasePacket::~bdRelayBasePacket
==============
*/

void __fastcall bdRelayBasePacket::~bdRelayBasePacket(bdRelayBasePacket *this)
{
  ??1bdRelayBasePacket@@UEAA@XZ(this);
}

/*
==============
bdRelayBasePacket::bdRelayBasePacket
==============
*/

void __fastcall bdRelayBasePacket::bdRelayBasePacket(bdRelayBasePacket *this, bdRelayPacketType packetType, unsigned int counter, unsigned int routingID, unsigned int hmacLength)
{
  ??0bdRelayBasePacket@@QEAA@W4bdRelayPacketType@@III@Z(this, packetType, counter, routingID, hmacLength);
}

/*
==============
bdRelayBasePacket::rewrite
==============
*/

bool __fastcall bdRelayBasePacket::rewrite(bdRelayBasePacket *this, void *data, unsigned int dataSize, unsigned int counter, const unsigned __int8 *hmacKey)
{
  return ?rewrite@bdRelayBasePacket@@UEAA_NPEAXIIQEBE@Z(this, data, dataSize, counter, hmacKey);
}

/*
==============
bdRelayBasePacket::verifySeqNum
==============
*/

bool __fastcall bdRelayBasePacket::verifySeqNum(bdRelayBasePacket *this, bdSequenceNumberStore *seqNumStore)
{
  return ?verifySeqNum@bdRelayBasePacket@@UEAA_NAEAVbdSequenceNumberStore@@@Z(this, seqNumStore);
}

/*
==============
bdRelayBasePacket::serializeHeader
==============
*/

bool __fastcall bdRelayBasePacket::serializeHeader(bdRelayBasePacket *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  return ?serializeHeader@bdRelayBasePacket@@MEBA_NPEAXIIAEAI@Z(this, data, dataSize, offset, newOffset);
}

/*
==============
bdRelayBasePacket::deserialize
==============
*/

bool __fastcall bdRelayBasePacket::deserialize(bdRelayBasePacket *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdRelayBasePacket@@UEAA_NPEBXIIAEAI@Z(this, data, dataSize, offset, newOffset);
}

/*
==============
bdRelayBasePacket::bdRelayBasePacket
==============
*/

void __fastcall bdRelayBasePacket::bdRelayBasePacket(bdRelayBasePacket *this, bdRelayPacketType packetType, unsigned int hmacLength)
{
  ??0bdRelayBasePacket@@QEAA@W4bdRelayPacketType@@I@Z(this, packetType, hmacLength);
}

/*
==============
bdRelayBasePacket::bdRelayBasePacket
==============
*/
void bdRelayBasePacket::bdRelayBasePacket(bdRelayBasePacket *this, bdRelayPacketType packetType, unsigned int hmacLength)
{
  this->m_packetType = packetType;
  this->__vftable = (bdRelayBasePacket_vtbl *)&bdRelayBasePacket::`vftable';
  this->m_hmacLength = hmacLength;
  *(_QWORD *)&this->m_routingID = 0i64;
  bdHandleAssert(hmacLength <= 0x10, "hmacLength <= bdRelayConfig::HMAC_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelaypackets\\bdrelaybasepacket.cpp", "bdRelayBasePacket::bdRelayBasePacket", 0x17u, "hmacLength cannot be greater than bdRelayConfig::HMAC_SIZE");
  this->m_seqNumVerified = 0;
}

/*
==============
bdRelayBasePacket::bdRelayBasePacket
==============
*/
void bdRelayBasePacket::bdRelayBasePacket(bdRelayBasePacket *this, bdRelayPacketType packetType, unsigned int counter, unsigned int routingID, unsigned int hmacLength)
{
  this->m_packetType = packetType;
  this->__vftable = (bdRelayBasePacket_vtbl *)&bdRelayBasePacket::`vftable';
  this->m_routingID = routingID;
  this->m_counter = counter;
  this->m_hmacLength = hmacLength;
  bdHandleAssert(hmacLength <= 0x10, "hmacLength <= bdRelayConfig::HMAC_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelaypackets\\bdrelaybasepacket.cpp", "bdRelayBasePacket::bdRelayBasePacket", 0x27u, "hmacLength cannot be greater than bdRelayConfig::HMAC_SIZE");
  this->m_seqNumVerified = 0;
}

/*
==============
bdRelayBasePacket::~bdRelayBasePacket
==============
*/
void bdRelayBasePacket::~bdRelayBasePacket(bdRelayBasePacket *this)
{
  this->__vftable = (bdRelayBasePacket_vtbl *)&bdRelayBasePacket::`vftable';
}

/*
==============
bdRelayBasePacket::deserialize
==============
*/
bool bdRelayBasePacket::deserialize(bdRelayBasePacket *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int v5; 
  unsigned __int8 v6; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int16 v13; 
  bool result; 

  v5 = offset;
  v6 = 0;
  v10 = offset + 1;
  if ( data )
  {
    if ( v10 > dataSize )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      v6 = *((_BYTE *)data + offset);
  }
  if ( v10 > dataSize && data || v6 != this->m_packetType )
    goto LABEL_21;
  v11 = v10;
  v10 += 4;
  if ( data )
  {
    if ( v10 > dataSize )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
    else
      this->m_routingID = *(_DWORD *)((char *)data + v11);
  }
  if ( v10 > dataSize && data )
  {
LABEL_21:
    v13 = 0;
  }
  else
  {
    v12 = v10;
    v13 = 0;
    v10 += 2;
    if ( data )
    {
      if ( v10 > dataSize )
        bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 2i64);
      else
        v13 = *(_WORD *)((char *)data + v12);
    }
    if ( v10 <= dataSize || !data )
    {
      result = 1;
      goto LABEL_23;
    }
  }
  result = 0;
LABEL_23:
  this->m_counter = v13;
  if ( result )
    v5 = v10;
  *newOffset = v5;
  return result;
}

/*
==============
bdRelayBasePacket::getRoutingID
==============
*/
__int64 bdRelayBasePacket::getRoutingID(bdRelayBasePacket *this)
{
  return this->m_routingID;
}

/*
==============
bdRelayBasePacket::rewrite
==============
*/
bool bdRelayBasePacket::rewrite(bdRelayBasePacket *this, void *data, unsigned int dataSize, unsigned int counter, const unsigned __int8 *hmacKey)
{
  unsigned int newOffset; 

  this->m_counter = counter;
  return bdRelayBasePacket::serializeHeader(this, data, dataSize, 0, &newOffset) && bdRelayBasePacket::sign(this, data, dataSize, dataSize - this->m_hmacLength, 0, &newOffset, hmacKey);
}

/*
==============
bdRelayBasePacket::serialize
==============
*/
bool bdRelayBasePacket::serialize(bdRelayBasePacket *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int8 *hmacKey)
{
  bdRelayBasePacket_vtbl *v6; 
  unsigned int v8; 
  bool result; 
  unsigned int *v12; 
  unsigned int v13; 

  v6 = this->__vftable;
  v8 = offset;
  v12 = &v13;
  v13 = offset;
  result = 0;
  if ( ((unsigned __int8 (__fastcall *)(bdRelayBasePacket *))v6->serializeHeader)(this) )
  {
    LODWORD(v12) = v8;
    if ( this->sign(this, data, dataSize, v13 - v8, (const unsigned int)v12, &v13, hmacKey) )
      result = 1;
  }
  if ( result )
    v8 = v13;
  *newOffset = v8;
  return result;
}

/*
==============
bdRelayBasePacket::serializeHeader
==============
*/
bool bdRelayBasePacket::serializeHeader(bdRelayBasePacket *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  char m_packetType; 
  __int64 v7; 
  unsigned int v10; 
  bool v11; 
  __int64 v12; 
  bool v13; 
  __int16 m_counter; 
  __int64 v15; 
  bool v16; 
  bool result; 

  m_packetType = this->m_packetType;
  v7 = offset;
  v10 = offset + 1;
  v11 = offset + 1 <= dataSize || !data;
  bdHandleAssert(v11, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !data )
  {
LABEL_8:
    if ( v10 <= dataSize )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v10 <= dataSize )
  {
    *((_BYTE *)data + v7) = m_packetType;
    goto LABEL_8;
  }
LABEL_9:
  if ( data )
    goto LABEL_28;
LABEL_10:
  v12 = v10;
  v10 += 4;
  v13 = v10 <= dataSize || !data;
  bdHandleAssert(v13, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( data )
  {
    if ( v10 > dataSize )
      goto LABEL_18;
    *(_DWORD *)((char *)data + v12) = this->m_routingID;
  }
  if ( v10 > dataSize )
  {
LABEL_18:
    if ( !data )
      goto LABEL_19;
LABEL_28:
    result = 0;
    goto LABEL_30;
  }
LABEL_19:
  m_counter = this->m_counter;
  v15 = v10;
  v10 += 2;
  v16 = v10 <= dataSize || !data;
  bdHandleAssert(v16, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  if ( !data )
  {
LABEL_26:
    if ( v10 <= dataSize )
      goto LABEL_29;
    goto LABEL_27;
  }
  if ( v10 <= dataSize )
  {
    *(_WORD *)((char *)data + v15) = m_counter;
    goto LABEL_26;
  }
LABEL_27:
  if ( data )
    goto LABEL_28;
LABEL_29:
  result = 1;
LABEL_30:
  if ( result )
    LODWORD(v7) = v10;
  *newOffset = v7;
  return result;
}

/*
==============
bdRelayBasePacket::sign
==============
*/
__int64 bdRelayBasePacket::sign(bdRelayBasePacket *this, void *data, const unsigned int dataSize, const unsigned int payloadSize, const unsigned int payloadOffset, unsigned int *newPayloadOffset, const unsigned __int8 *hmacKey)
{
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  bool v14; 
  char v15; 
  unsigned int m_hmacLength; 
  unsigned __int8 v17; 
  bdHMacSHA256 v19; 
  unsigned int length; 

  bdHandleAssert(dataSize > payloadSize, "dataSize > payloadSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelaypackets\\bdrelaybasepacket.cpp", "bdRelayBasePacket::sign", 0x5Fu, "Payload is bigger than available data size.");
  v11 = payloadOffset;
  v12 = payloadSize + payloadOffset;
  v13 = v12 + 4;
  v14 = (int)v12 + 4 <= dataSize || !data;
  bdHandleAssert(v14, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( data )
  {
    if ( v13 > dataSize )
      goto LABEL_9;
    *(_DWORD *)((char *)data + v12) = this->m_counter;
  }
  if ( v13 <= dataSize )
  {
LABEL_11:
    v15 = 1;
    goto LABEL_12;
  }
LABEL_9:
  if ( !data )
    goto LABEL_11;
  v15 = 0;
LABEL_12:
  bdHMacSHA256::bdHMacSHA256(&v19, hmacKey, 0x10u);
  if ( !v15 || !bdHMacSHA256::process(&v19, (const unsigned __int8 *const)data + v11, payloadSize + 4) )
  {
    m_hmacLength = this->m_hmacLength;
    goto LABEL_18;
  }
  m_hmacLength = this->m_hmacLength;
  if ( dataSize - (unsigned int)v12 < m_hmacLength )
  {
LABEL_18:
    length = m_hmacLength;
    goto LABEL_19;
  }
  length = this->m_hmacLength;
  if ( !bdHMacSHA256::getData(&v19, (unsigned __int8 *)data + (unsigned int)v12, &length) )
  {
LABEL_19:
    v17 = 0;
    goto LABEL_20;
  }
  v17 = 1;
  LODWORD(v11) = v12 + this->m_hmacLength;
LABEL_20:
  *newPayloadOffset = v11;
  bdHMacSHA256::~bdHMacSHA256(&v19);
  return v17;
}

/*
==============
bdRelayBasePacket::verifyHmac
==============
*/
_BOOL8 bdRelayBasePacket::verifyHmac(bdRelayBasePacket *this, const void *data, const unsigned int dataSize, const unsigned int payloadSize, const unsigned __int8 *hmacKey)
{
  __int64 v5; 
  unsigned int m_hmacLength; 
  bool v10; 
  bool v11; 
  unsigned int v12; 
  bool v13; 
  unsigned int length; 
  unsigned __int8 dataa[4]; 
  bdHMacSHA256 v17; 
  __int64 v18; 
  unsigned __int8 digest[16]; 

  v18 = -2i64;
  v5 = payloadSize;
  bdHandleAssert(this->m_seqNumVerified, "m_seqNumVerified", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelaypackets\\bdrelaybasepacket.cpp", "bdRelayBasePacket::verifyHmac", 0xB6u, "Missed seqnum verification before verifying hmac.");
  bdHandleAssert(dataSize > (unsigned int)v5, "dataSize > payloadSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelaypackets\\bdrelaybasepacket.cpp", "bdRelayBasePacket::verifyHmac", 0xB8u, "Payload is bigger than available data size.");
  m_hmacLength = this->m_hmacLength;
  bdHMacSHA256::bdHMacSHA256(&v17, hmacKey, 0x10u);
  v10 = dataSize - (unsigned int)v5 >= m_hmacLength && bdHMacSHA256::process(&v17, (const unsigned __int8 *const)data, v5);
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  *(_DWORD *)dataa = this->m_counter;
  v11 = v10 && bdHMacSHA256::process(&v17, dataa, 4u);
  length = this->m_hmacLength;
  v13 = 0;
  if ( v11 && bdHMacSHA256::getData(&v17, digest, &length) )
  {
    v12 = this->m_hmacLength;
    if ( length == v12 && bdCryptoUtils::constTimeCompare(digest, (const volatile unsigned __int8 *volatile)data + v5, v12) )
      v13 = 1;
  }
  bdHMacSHA256::~bdHMacSHA256(&v17);
  return v13;
}

/*
==============
bdRelayBasePacket::verifySeqNum
==============
*/
bool bdRelayBasePacket::verifySeqNum(bdRelayBasePacket *this, bdSequenceNumberStore *seqNumStore)
{
  bdSequenceNumber *LastSequenceNumber; 
  bdSequenceNumberStore::bdSequenceStatus v5; 
  bool result; 
  int v7; 
  int v8; 
  int v9; 
  int Value; 
  bdSequenceNumber thisSeq; 

  LastSequenceNumber = (bdSequenceNumber *)bdSequenceNumberStore::getLastSequenceNumber(seqNumStore);
  bdSequenceNumber::bdSequenceNumber(&thisSeq, LastSequenceNumber, this->m_counter, 0x10u);
  v5 = bdSequenceNumberStore::check(seqNumStore, &thisSeq);
  if ( v5 == BD_SN_INVALID_SMALLER )
  {
    Value = bdSequenceNumber::getValue(LastSequenceNumber);
    v8 = bdSequenceNumber::getValue(&thisSeq);
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdRelayBasePacket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelaypackets\\bdrelaybasepacket.cpp", "bdRelayBasePacket::verifySeqNum", 0xA1u, "Invalid seq num (%u) is smaller than last (%u).", v8, Value);
  }
  else
  {
    if ( v5 == BD_SN_VALID_SMALLER || (unsigned int)(v5 - 1) <= 1 )
    {
      this->m_counter = bdSequenceNumber::getValue(&thisSeq);
      result = 1;
      this->m_seqNumVerified = 1;
      return result;
    }
    v9 = bdSequenceNumber::getValue(LastSequenceNumber);
    v7 = bdSequenceNumber::getValue(&thisSeq);
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdRelayBasePacket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelaypackets\\bdrelaybasepacket.cpp", "bdRelayBasePacket::verifySeqNum", 0xA7u, "Invalid seq num (%u) is a duplicate of the last (%u).", v7, v9);
  }
  return 0;
}

