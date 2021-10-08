/*
==============
bdRelayInitJoin::getClientRandom
==============
*/

unsigned __int8 *__fastcall bdRelayInitJoin::getClientRandom(bdRelayInitJoin *this)
{
  return ?getClientRandom@bdRelayInitJoin@@QEAAPEAEXZ(this);
}

/*
==============
bdRelayInitJoin::deserialize
==============
*/

bool __fastcall bdRelayInitJoin::deserialize(bdRelayInitJoin *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdRelayInitJoin@@UEAA_NPEBXIIAEAI@Z(this, data, dataSize, offset, newOffset);
}

/*
==============
bdRelayInitJoin::getPlatformID
==============
*/

bdPlatformID __fastcall bdRelayInitJoin::getPlatformID(bdRelayInitJoin *this)
{
  return ?getPlatformID@bdRelayInitJoin@@QEBA?AW4bdPlatformID@@XZ(this);
}

/*
==============
bdRelayInitJoin::bdRelayInitJoin
==============
*/

void __fastcall bdRelayInitJoin::bdRelayInitJoin(bdRelayInitJoin *this, bdRelayJoinData *joinData, bdClientAuthToken *clientAuthToken, const unsigned __int8 *clientRandom)
{
  ??0bdRelayInitJoin@@QEAA@AEAVbdRelayJoinData@@AEAVbdClientAuthToken@@QEBE@Z(this, joinData, clientAuthToken, clientRandom);
}

/*
==============
bdRelayInitJoin::verifyHmac
==============
*/

bool __fastcall bdRelayInitJoin::verifyHmac(bdRelayInitJoin *this, const void *data, const unsigned int dataSize, const unsigned int payloadSize, const unsigned __int8 *joinSecret)
{
  return ?verifyHmac@bdRelayInitJoin@@UEAA_NPEBXIIQEBE@Z(this, data, dataSize, payloadSize, joinSecret);
}

/*
==============
bdRelayInitJoin::serialize
==============
*/

bool __fastcall bdRelayInitJoin::serialize(bdRelayInitJoin *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdRelayInitJoin@@UEBA_NPEAXIIAEAI@Z(this, data, dataSize, offset, newOffset);
}

/*
==============
bdRelayInitJoin::bdRelayInitJoin
==============
*/
void bdRelayInitJoin::bdRelayInitJoin(bdRelayInitJoin *this, bdRelayJoinData *joinData, bdClientAuthToken *clientAuthToken, const unsigned __int8 *clientRandom)
{
  _RBP = clientRandom;
  _RSI = this;
  bdRelayBasePacket::bdRelayBasePacket(this, BD_RELAY_PACKET_INIT_JOIN, 0x10u);
  _RSI->m_joinData = joinData;
  _RSI->__vftable = (bdRelayInitJoin_vtbl *)&bdRelayInitJoin::`vftable';
  _RSI->m_clientAuthToken = clientAuthToken;
  if ( _RBP )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovups xmmword ptr [rsi+30h], xmm0
    }
  }
}

/*
==============
bdRelayInitJoin::deserialize
==============
*/
bool bdRelayInitJoin::deserialize(bdRelayInitJoin *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int v5; 
  __int64 v9; 
  char v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  bool result; 
  unsigned int offseta; 

  offseta = offset;
  v5 = offset;
  if ( !bdRelayBasePacket::deserialize(this, data, dataSize, offset, &offseta) )
    goto LABEL_20;
  v9 = offseta;
  v10 = 0;
  v11 = ++offseta;
  if ( data )
  {
    if ( v11 > dataSize )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      v10 = *((_BYTE *)data + v9);
  }
  if ( v11 > dataSize && data || v10 != 2 || !this->m_clientAuthToken->deserializeInit(this->m_clientAuthToken, data, dataSize, offseta, &offseta) || !bdRelayJoinData::deserializeInitJoin(this->m_joinData, data, dataSize, offseta, &offseta) || !bdBytePacker::removeBuffer(data, dataSize, offseta, &offseta, this->m_clientRandom, 0x10u) )
    goto LABEL_20;
  v12 = offseta;
  v13 = offseta + 4;
  offseta += 4;
  if ( data )
  {
    if ( v13 > dataSize )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
    else
      this->m_platformID = *(_DWORD *)((char *)data + v12);
  }
  if ( (v13 <= dataSize || !data) && bdBytePacker::skipBytes(data, dataSize, offseta, &offseta, 0x64u) )
    result = 1;
  else
LABEL_20:
    result = 0;
  if ( result )
    v5 = offseta;
  *newOffset = v5;
  return result;
}

/*
==============
bdRelayInitJoin::getClientRandom
==============
*/
unsigned __int8 *bdRelayInitJoin::getClientRandom(bdRelayInitJoin *this)
{
  return this->m_clientRandom;
}

/*
==============
bdRelayInitJoin::getPlatformID
==============
*/
__int64 bdRelayInitJoin::getPlatformID(bdRelayInitJoin *this)
{
  return (unsigned int)this->m_platformID;
}

/*
==============
bdRelayInitJoin::serialize
==============
*/
bool bdRelayInitJoin::serialize(bdRelayInitJoin *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int v5; 
  __int64 v9; 
  unsigned int v10; 
  bool v11; 
  __int64 v12; 
  unsigned int v13; 
  bool v14; 
  char *v15; 
  char v16; 
  const unsigned __int8 *Secret; 
  const unsigned __int8 *v18; 
  bool v19; 
  unsigned int offseta; 
  unsigned __int8 result[16]; 

  v5 = offset;
  offseta = offset;
  if ( !bdRelayBasePacket::serializeHeader(this, data, dataSize, offset, &offseta) )
    goto LABEL_26;
  v9 = offseta;
  v10 = offseta + 1;
  offseta = v10;
  v11 = v10 <= dataSize || !data;
  bdHandleAssert(v11, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !data )
  {
LABEL_9:
    if ( v10 <= dataSize )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( v10 <= dataSize )
  {
    *((_BYTE *)data + v9) = 2;
    goto LABEL_9;
  }
LABEL_10:
  if ( data )
    goto LABEL_26;
LABEL_11:
  if ( !this->m_clientAuthToken->serializeInit(this->m_clientAuthToken, data, dataSize, offseta, &offseta) || !bdRelayJoinData::serializeInitJoin(this->m_joinData, data, dataSize, offseta, &offseta) || !bdBytePacker::appendBuffer(data, dataSize, offseta, &offseta, this->m_clientRandom, 0x10u) )
    goto LABEL_26;
  v12 = offseta;
  v13 = offseta + 4;
  offseta = v13;
  v14 = v13 <= dataSize || !data;
  bdHandleAssert(v14, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( data )
  {
    if ( v13 > dataSize )
      goto LABEL_22;
    *(_DWORD *)((char *)data + v12) = 107;
  }
  if ( v13 > dataSize )
  {
LABEL_22:
    if ( !data )
      goto LABEL_23;
LABEL_26:
    v16 = 0;
    goto LABEL_27;
  }
LABEL_23:
  if ( !bdBytePacker::skipBytes(data, dataSize, offseta, &offseta, 0x64u) )
    goto LABEL_26;
  v15 = (char *)data + offseta - 100;
  memset_0(v15, 0, 0x64ui64);
  if ( !v15 )
    goto LABEL_26;
  v16 = 1;
LABEL_27:
  Secret = bdRelayJoinData::getSecret(this->m_joinData);
  v18 = bdClientAuthToken::getSecret(this->m_clientAuthToken);
  bdRelayFunctions::generateInitPacketKey_0(v18, Secret, this->m_clientRandom, result);
  v19 = v16 && bdRelayBasePacket::sign(this, data, dataSize, offseta - v5, v5, &offseta, result);
  if ( v19 )
    v5 = offseta;
  *newOffset = v5;
  return v19;
}

/*
==============
bdRelayInitJoin::verifyHmac
==============
*/
bool bdRelayInitJoin::verifyHmac(bdRelayInitJoin *this, const void *data, const unsigned int dataSize, const unsigned int payloadSize, const unsigned __int8 *joinSecret)
{
  const unsigned __int8 *Secret; 
  unsigned __int8 result[16]; 

  this->m_seqNumVerified = 1;
  Secret = bdClientAuthToken::getSecret(this->m_clientAuthToken);
  bdRelayFunctions::generateInitPacketKey_0(Secret, joinSecret, this->m_clientRandom, result);
  return bdRelayBasePacket::verifyHmac(this, data, dataSize, payloadSize, result);
}

