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
  unsigned int v10; 
  bool result; 
  unsigned __int64 v13; 
  unsigned int v14; 

  v14 = offset;
  v5 = offset;
  _RSI = data;
  if ( !bdRelayBasePacket::deserialize(this, data, dataSize, offset, &v14) )
    goto LABEL_9;
  _RAX = v14;
  v10 = v14 + 8;
  v14 += 8;
  if ( _RSI )
  {
    if ( v10 > dataSize )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 8i64);
    }
    else
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rax+rsi]
        vmovsd  [rsp+68h+var_28], xmm0
      }
      this->m_joinID = v13;
    }
  }
  if ( v10 > dataSize && _RSI )
LABEL_9:
    result = 0;
  else
    result = 1;
  if ( result )
    v5 = v14;
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
  unsigned __int64 m_joinID; 
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
    m_joinID = this->m_joinID;
    _RAX = (char *)data + v10;
    __asm
    {
      vmovsd  xmm0, [rsp+68h+var_28]
      vmovsd  qword ptr [rax], xmm0
    }
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

