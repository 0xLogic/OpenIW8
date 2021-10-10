/*
==============
bdRelayInitAck::getServerRandom
==============
*/

unsigned __int8 *__fastcall bdRelayInitAck::getServerRandom(bdRelayInitAck *this)
{
  return ?getServerRandom@bdRelayInitAck@@QEAAPEAEXZ(this);
}

/*
==============
bdRelayInitAck::deserialize
==============
*/

bool __fastcall bdRelayInitAck::deserialize(bdRelayInitAck *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdRelayInitAck@@UEAA_NPEBXIIAEAI@Z(this, data, dataSize, offset, newOffset);
}

/*
==============
bdRelayInitAck::serialize
==============
*/

bool __fastcall bdRelayInitAck::serialize(bdRelayInitAck *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int8 *hmacKey)
{
  return ?serialize@bdRelayInitAck@@UEBA_NPEAXIIAEAIQEBE@Z(this, data, dataSize, offset, newOffset, hmacKey);
}

/*
==============
bdRelayInitAck::verifyHmac
==============
*/

bool __fastcall bdRelayInitAck::verifyHmac(bdRelayInitAck *this, const void *data, const unsigned int dataSize, const unsigned int payloadSize, const unsigned __int8 *hmacKey)
{
  return ?verifyHmac@bdRelayInitAck@@QEAA_NPEBXIIQEBE@Z(this, data, dataSize, payloadSize, hmacKey);
}

/*
==============
bdRelayInitAck::getClientRandom
==============
*/

unsigned __int8 *__fastcall bdRelayInitAck::getClientRandom(bdRelayInitAck *this)
{
  return ?getClientRandom@bdRelayInitAck@@QEAAPEAEXZ(this);
}

/*
==============
bdRelayInitAck::bdRelayInitAck
==============
*/

void __fastcall bdRelayInitAck::bdRelayInitAck(bdRelayInitAck *this, bdRelayJoinData *relayJoinData, const unsigned __int8 *clientRandom, const unsigned __int8 *serverRandom)
{
  ??0bdRelayInitAck@@QEAA@AEAVbdRelayJoinData@@QEBE1@Z(this, relayJoinData, clientRandom, serverRandom);
}

/*
==============
bdRelayInitAck::bdRelayInitAck
==============
*/
void bdRelayInitAck::bdRelayInitAck(bdRelayInitAck *this, bdRelayJoinData *relayJoinData, const unsigned __int8 *clientRandom, const unsigned __int8 *serverRandom)
{
  bdRelayBasePacket::bdRelayBasePacket(this, BD_RELAY_PACKET_INIT_ACK, 0x10u);
  this->m_joinData = relayJoinData;
  this->__vftable = (bdRelayInitAck_vtbl *)&bdRelayInitAck::`vftable';
  if ( clientRandom )
    *(_OWORD *)this->m_clientRandom = *(_OWORD *)clientRandom;
  if ( serverRandom )
    *(_OWORD *)this->m_serverRandom = *(_OWORD *)serverRandom;
}

/*
==============
bdRelayInitAck::deserialize
==============
*/
bool bdRelayInitAck::deserialize(bdRelayInitAck *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int v5; 
  bool result; 
  unsigned int offseta; 

  v5 = offset;
  offseta = offset;
  result = bdRelayBasePacket::deserialize(this, data, dataSize, offset, &offseta) && bdBytePacker::removeBuffer(data, dataSize, offseta, &offseta, this->m_clientRandom, 0x10u) && bdBytePacker::removeBuffer(data, dataSize, offseta, &offseta, this->m_serverRandom, 0x10u) && bdRelayJoinData::deserializeEncrypted(this->m_joinData, data, dataSize, offseta, &offseta);
  if ( result )
    v5 = offseta;
  *newOffset = v5;
  return result;
}

/*
==============
bdRelayInitAck::getClientRandom
==============
*/
unsigned __int8 *bdRelayInitAck::getClientRandom(bdRelayInitAck *this)
{
  return this->m_clientRandom;
}

/*
==============
bdRelayInitAck::getServerRandom
==============
*/
unsigned __int8 *bdRelayInitAck::getServerRandom(bdRelayInitAck *this)
{
  return this->m_serverRandom;
}

/*
==============
bdRelayInitAck::serialize
==============
*/
bool bdRelayInitAck::serialize(bdRelayInitAck *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int8 *hmacKey)
{
  unsigned int v6; 
  bool result; 
  unsigned int offseta; 

  v6 = offset;
  offseta = offset;
  result = bdRelayBasePacket::serializeHeader(this, data, dataSize, offset, &offseta) && bdBytePacker::appendBuffer(data, dataSize, offseta, &offseta, this->m_clientRandom, 0x10u) && bdBytePacker::appendBuffer(data, dataSize, offseta, &offseta, this->m_serverRandom, 0x10u) && bdRelayJoinData::serializeEncrypted(this->m_joinData, data, dataSize, offseta, &offseta) && bdRelayBasePacket::sign(this, data, dataSize, offseta - v6, v6, &offseta, hmacKey);
  if ( result )
    v6 = offseta;
  *newOffset = v6;
  return result;
}

/*
==============
bdRelayInitAck::verifyHmac
==============
*/
bool bdRelayInitAck::verifyHmac(bdRelayInitAck *this, const void *data, const unsigned int dataSize, const unsigned int payloadSize, const unsigned __int8 *hmacKey)
{
  this->m_seqNumVerified = 1;
  return bdRelayBasePacket::verifyHmac(this, data, dataSize, payloadSize, hmacKey);
}

