/*
==============
bdRelayVerify::getVerification
==============
*/

const unsigned __int8 *__fastcall bdRelayVerify::getVerification(bdRelayVerify *this)
{
  return ?getVerification@bdRelayVerify@@QEBAPEBEXZ(this);
}

/*
==============
bdRelayVerify::serialize
==============
*/

bool __fastcall bdRelayVerify::serialize(bdRelayVerify *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int8 *hmacKey)
{
  return ?serialize@bdRelayVerify@@UEBA_NPEAXIIAEAIQEBE@Z(this, data, dataSize, offset, newOffset, hmacKey);
}

/*
==============
bdRelayVerify::bdRelayVerify
==============
*/

void __fastcall bdRelayVerify::bdRelayVerify(bdRelayVerify *this, unsigned int counter, unsigned int routingID, const unsigned __int8 *verification)
{
  ??0bdRelayVerify@@QEAA@IIQEBE@Z(this, counter, routingID, verification);
}

/*
==============
bdRelayVerify::deserialize
==============
*/

bool __fastcall bdRelayVerify::deserialize(bdRelayVerify *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdRelayVerify@@UEAA_NPEBXIIAEAI@Z(this, data, dataSize, offset, newOffset);
}

/*
==============
bdRelayVerify::bdRelayVerify
==============
*/
void bdRelayVerify::bdRelayVerify(bdRelayVerify *this, unsigned int counter, unsigned int routingID, const unsigned __int8 *verification)
{
  _RDI = verification;
  _RBX = this;
  bdRelayBasePacket::bdRelayBasePacket(this, BD_RELAY_PACKET_VERIFY, counter, routingID, 0x10u);
  _RBX->__vftable = (bdRelayVerify_vtbl *)&bdRelayVerify::`vftable';
  if ( _RDI )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rbx+20h], xmm0
    }
  }
}

/*
==============
bdRelayVerify::deserialize
==============
*/
bool bdRelayVerify::deserialize(bdRelayVerify *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int v5; 
  bool result; 
  unsigned int offseta; 

  v5 = offset;
  offseta = offset;
  result = bdRelayBasePacket::deserialize(this, data, dataSize, offset, &offseta) && bdBytePacker::removeBuffer(data, dataSize, offseta, &offseta, this->m_verification, 0x10u);
  if ( result )
    v5 = offseta;
  *newOffset = v5;
  return result;
}

/*
==============
bdRelayVerify::getVerification
==============
*/
unsigned __int8 *bdRelayVerify::getVerification(bdRelayVerify *this)
{
  return this->m_verification;
}

/*
==============
bdRelayVerify::serialize
==============
*/
bool bdRelayVerify::serialize(bdRelayVerify *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int8 *hmacKey)
{
  unsigned int v6; 
  bool result; 
  unsigned int offseta; 

  v6 = offset;
  offseta = offset;
  result = bdRelayBasePacket::serializeHeader(this, data, dataSize, offset, &offseta) && bdBytePacker::appendBuffer(data, dataSize, offseta, &offseta, this->m_verification, 0x10u) && bdRelayBasePacket::sign(this, data, dataSize, offseta - v6, v6, &offseta, hmacKey);
  if ( result )
    v6 = offseta;
  *newOffset = v6;
  return result;
}

