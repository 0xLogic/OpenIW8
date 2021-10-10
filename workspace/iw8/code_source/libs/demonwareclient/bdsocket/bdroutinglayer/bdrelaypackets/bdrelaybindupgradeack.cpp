/*
==============
bdRelayBindUpgradeAck::bdRelayBindUpgradeAck
==============
*/

void __fastcall bdRelayBindUpgradeAck::bdRelayBindUpgradeAck(bdRelayBindUpgradeAck *this, unsigned int counter, unsigned int routingID, unsigned __int64 joinID)
{
  ??0bdRelayBindUpgradeAck@@QEAA@II_K@Z(this, counter, routingID, joinID);
}

/*
==============
bdRelayBindUpgradeAck::deserialize
==============
*/

bool __fastcall bdRelayBindUpgradeAck::deserialize(bdRelayBindUpgradeAck *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdRelayBindUpgradeAck@@UEAA_NPEBXIIAEAI@Z(this, data, dataSize, offset, newOffset);
}

/*
==============
bdRelayBindUpgradeAck::getJoinID
==============
*/

unsigned __int64 __fastcall bdRelayBindUpgradeAck::getJoinID(bdRelayBindUpgradeAck *this)
{
  return ?getJoinID@bdRelayBindUpgradeAck@@QEBA_KXZ(this);
}

/*
==============
bdRelayBindUpgradeAck::serialize
==============
*/

bool __fastcall bdRelayBindUpgradeAck::serialize(bdRelayBindUpgradeAck *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int8 *hmacKey)
{
  return ?serialize@bdRelayBindUpgradeAck@@UEBA_NPEAXIIAEAIQEBE@Z(this, data, dataSize, offset, newOffset, hmacKey);
}

/*
==============
bdRelayBindUpgradeAck::bdRelayBindUpgradeAck
==============
*/
void bdRelayBindUpgradeAck::bdRelayBindUpgradeAck(bdRelayBindUpgradeAck *this, unsigned int counter, unsigned int routingID, unsigned __int64 joinID)
{
  bdRelayBasePacket::bdRelayBasePacket(this, BD_RELAY_PACKET_BIND_UPGRADE_ACK, counter, routingID, 0x10u);
  this->m_joinID = joinID;
  this->__vftable = (bdRelayBindUpgradeAck_vtbl *)&bdRelayBindUpgradeAck::`vftable';
}

/*
==============
bdRelayBindUpgradeAck::deserialize
==============
*/
bool bdRelayBindUpgradeAck::deserialize(bdRelayBindUpgradeAck *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int v5; 
  __int64 v9; 
  unsigned int v10; 
  bool result; 
  unsigned int v12; 

  v12 = offset;
  v5 = offset;
  if ( !bdRelayBasePacket::deserialize(this, data, dataSize, offset, &v12) )
    goto LABEL_9;
  v9 = v12;
  v10 = v12 + 8;
  v12 += 8;
  if ( data )
  {
    if ( v10 > dataSize )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 8i64);
    else
      this->m_joinID = *(_QWORD *)((char *)data + v9);
  }
  if ( v10 > dataSize && data )
LABEL_9:
    result = 0;
  else
    result = 1;
  if ( result )
    v5 = v12;
  *newOffset = v5;
  return result;
}

/*
==============
bdRelayBindUpgradeAck::getJoinID
==============
*/
unsigned __int64 bdRelayBindUpgradeAck::getJoinID(bdRelayBindUpgradeAck *this)
{
  return this->m_joinID;
}

/*
==============
bdRelayBindUpgradeAck::serialize
==============
*/
bool bdRelayBindUpgradeAck::serialize(bdRelayBindUpgradeAck *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int8 *hmacKey)
{
  unsigned int v6; 
  __int64 v10; 
  unsigned int v11; 
  bool v12; 
  bool result; 
  unsigned int newPayloadOffset; 

  newPayloadOffset = offset;
  v6 = offset;
  if ( !bdRelayBasePacket::serializeHeader(this, data, dataSize, offset, &newPayloadOffset) )
    goto LABEL_13;
  v10 = newPayloadOffset;
  v11 = newPayloadOffset + 8;
  newPayloadOffset = v11;
  v12 = v11 <= dataSize || !data;
  bdHandleAssert(v12, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 8i64);
  if ( data )
  {
    if ( v11 > dataSize )
      goto LABEL_10;
    *(double *)((char *)data + v10) = *(double *)&this->m_joinID;
  }
  if ( v11 > dataSize )
  {
LABEL_10:
    if ( data )
      goto LABEL_13;
  }
  if ( bdRelayBasePacket::sign(this, data, dataSize, newPayloadOffset - v6, v6, &newPayloadOffset, hmacKey) )
  {
    result = 1;
    goto LABEL_14;
  }
LABEL_13:
  result = 0;
LABEL_14:
  if ( result )
    v6 = newPayloadOffset;
  *newOffset = v6;
  return result;
}

