/*
==============
bdRelayBindUpgrade::bdRelayBindUpgrade
==============
*/

void __fastcall bdRelayBindUpgrade::bdRelayBindUpgrade(bdRelayBindUpgrade *this, bdRelayAuthToken *token, unsigned int counter, unsigned int routingID)
{
  ??0bdRelayBindUpgrade@@QEAA@AEAVbdRelayAuthToken@@II@Z(this, token, counter, routingID);
}

/*
==============
bdRelayBindUpgrade::deserialize
==============
*/

bool __fastcall bdRelayBindUpgrade::deserialize(bdRelayBindUpgrade *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdRelayBindUpgrade@@UEAA_NPEBXIIAEAI@Z(this, data, dataSize, offset, newOffset);
}

/*
==============
bdRelayBindUpgrade::getRelayAuthToken
==============
*/

const bdRelayAuthToken *__fastcall bdRelayBindUpgrade::getRelayAuthToken(bdRelayBindUpgrade *this)
{
  return ?getRelayAuthToken@bdRelayBindUpgrade@@QEBAAEBVbdRelayAuthToken@@XZ(this);
}

/*
==============
bdRelayBindUpgrade::serialize
==============
*/

bool __fastcall bdRelayBindUpgrade::serialize(bdRelayBindUpgrade *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int8 *hmacKey)
{
  return ?serialize@bdRelayBindUpgrade@@UEBA_NPEAXIIAEAIQEBE@Z(this, data, dataSize, offset, newOffset, hmacKey);
}

/*
==============
bdRelayBindUpgrade::bdRelayBindUpgrade
==============
*/
void bdRelayBindUpgrade::bdRelayBindUpgrade(bdRelayBindUpgrade *this, bdRelayAuthToken *token, unsigned int counter, unsigned int routingID)
{
  bdRelayBasePacket::bdRelayBasePacket(this, BD_RELAY_PACKET_BIND_UPGRADE, counter, routingID, 0x10u);
  this->m_authToken = token;
  this->__vftable = (bdRelayBindUpgrade_vtbl *)&bdRelayBindUpgrade::`vftable';
}

/*
==============
bdRelayBindUpgrade::deserialize
==============
*/
bool bdRelayBindUpgrade::deserialize(bdRelayBindUpgrade *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int v5; 
  bool result; 
  unsigned int v10; 

  v5 = offset;
  v10 = offset;
  result = bdRelayBasePacket::deserialize(this, data, dataSize, offset, &v10) && this->m_authToken->deserializeInit(this->m_authToken, data, dataSize, v10, &v10);
  if ( result )
    v5 = v10;
  *newOffset = v5;
  return result;
}

/*
==============
bdRelayBindUpgrade::getRelayAuthToken
==============
*/
bdRelayAuthToken *bdRelayBindUpgrade::getRelayAuthToken(bdRelayBindUpgrade *this)
{
  return this->m_authToken;
}

/*
==============
bdRelayBindUpgrade::serialize
==============
*/
bool bdRelayBindUpgrade::serialize(bdRelayBindUpgrade *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int8 *hmacKey)
{
  unsigned int v6; 
  bool result; 
  unsigned int newPayloadOffset; 

  v6 = offset;
  newPayloadOffset = offset;
  result = bdRelayBasePacket::serializeHeader(this, data, dataSize, offset, &newPayloadOffset) && this->m_authToken->serializeInit(this->m_authToken, data, dataSize, newPayloadOffset, &newPayloadOffset) && bdRelayBasePacket::sign(this, data, dataSize, newPayloadOffset - v6, v6, &newPayloadOffset, hmacKey);
  if ( result )
    v6 = newPayloadOffset;
  *newOffset = v6;
  return result;
}

