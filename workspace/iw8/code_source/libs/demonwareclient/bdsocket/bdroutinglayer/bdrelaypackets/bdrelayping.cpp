/*
==============
bdRelayPing::getInitiator
==============
*/

bdRelayPing::bdRelayPingInitiator __fastcall bdRelayPing::getInitiator(bdRelayPing *this)
{
  return ?getInitiator@bdRelayPing@@QEBA?AW4bdRelayPingInitiator@1@XZ(this);
}

/*
==============
bdRelayPing::serialize
==============
*/

bool __fastcall bdRelayPing::serialize(bdRelayPing *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int8 *hmacKey)
{
  return ?serialize@bdRelayPing@@UEBA_NPEAXIIAEAIQEBE@Z(this, data, dataSize, offset, newOffset, hmacKey);
}

/*
==============
bdRelayPing::bdRelayPing
==============
*/

void __fastcall bdRelayPing::bdRelayPing(bdRelayPing *this, unsigned __int64 time, bdRelayPing::bdRelayPingInitiator initiator, unsigned int counter, unsigned int routingID)
{
  ??0bdRelayPing@@QEAA@_KW4bdRelayPingInitiator@0@II@Z(this, time, initiator, counter, routingID);
}

/*
==============
bdRelayPing::getTime
==============
*/

unsigned __int64 __fastcall bdRelayPing::getTime(bdRelayPing *this)
{
  return ?getTime@bdRelayPing@@QEBA_KXZ(this);
}

/*
==============
bdRelayPing::deserialize
==============
*/

bool __fastcall bdRelayPing::deserialize(bdRelayPing *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdRelayPing@@UEAA_NPEBXIIAEAI@Z(this, data, dataSize, offset, newOffset);
}

/*
==============
bdRelayPing::bdRelayPing
==============
*/
void bdRelayPing::bdRelayPing(bdRelayPing *this, unsigned __int64 time, bdRelayPing::bdRelayPingInitiator initiator, unsigned int counter, unsigned int routingID)
{
  unsigned __int8 v5; 

  v5 = initiator;
  bdRelayBasePacket::bdRelayBasePacket(this, BD_RELAY_PACKET_PING, counter, routingID, 0x10u);
  this->m_time = time;
  this->__vftable = (bdRelayPing_vtbl *)&bdRelayPing::`vftable';
  this->m_initiator = v5;
}

/*
==============
bdRelayPing::deserialize
==============
*/
bool bdRelayPing::deserialize(bdRelayPing *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int v5; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned int v12; 
  bool result; 
  unsigned int v14; 

  v14 = offset;
  v5 = offset;
  if ( !bdRelayBasePacket::deserialize(this, data, dataSize, offset, &v14) )
    goto LABEL_15;
  v9 = v14;
  v10 = v14 + 8;
  v14 += 8;
  if ( data )
  {
    if ( v10 > dataSize )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 8i64);
    else
      this->m_time = *(_QWORD *)((char *)data + v9);
  }
  if ( v10 > dataSize && data )
    goto LABEL_15;
  v11 = v14;
  v12 = ++v14;
  if ( data )
  {
    if ( v12 > dataSize )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      this->m_initiator = *((_BYTE *)data + v11);
  }
  if ( v12 > dataSize && data )
LABEL_15:
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
bdRelayPing::getInitiator
==============
*/
__int64 bdRelayPing::getInitiator(bdRelayPing *this)
{
  return this->m_initiator;
}

/*
==============
bdRelayPing::getTime
==============
*/
unsigned __int64 bdRelayPing::getTime(bdRelayPing *this)
{
  return this->m_time;
}

/*
==============
bdRelayPing::serialize
==============
*/
bool bdRelayPing::serialize(bdRelayPing *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int8 *hmacKey)
{
  unsigned int v6; 
  __int64 v10; 
  unsigned int v11; 
  bool v12; 
  __int64 v13; 
  unsigned int v14; 
  bool v15; 
  bool result; 
  unsigned int newPayloadOffset; 

  newPayloadOffset = offset;
  v6 = offset;
  if ( !bdRelayBasePacket::serializeHeader(this, data, dataSize, offset, &newPayloadOffset) )
    goto LABEL_22;
  v10 = newPayloadOffset;
  v11 = newPayloadOffset + 8;
  newPayloadOffset = v11;
  v12 = v11 <= dataSize || !data;
  bdHandleAssert(v12, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 8i64);
  if ( !data )
  {
LABEL_9:
    if ( v11 <= dataSize )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( v11 <= dataSize )
  {
    *(double *)((char *)data + v10) = *(double *)&this->m_time;
    goto LABEL_9;
  }
LABEL_10:
  if ( data )
    goto LABEL_22;
LABEL_11:
  v13 = newPayloadOffset;
  v14 = newPayloadOffset + 1;
  newPayloadOffset = v14;
  v15 = v14 <= dataSize || !data;
  bdHandleAssert(v15, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( data )
  {
    if ( v14 > dataSize )
      goto LABEL_19;
    *((_BYTE *)data + v13) = this->m_initiator;
  }
  if ( v14 > dataSize )
  {
LABEL_19:
    if ( data )
      goto LABEL_22;
  }
  if ( bdRelayBasePacket::sign(this, data, dataSize, newPayloadOffset - v6, v6, &newPayloadOffset, hmacKey) )
  {
    result = 1;
    goto LABEL_23;
  }
LABEL_22:
  result = 0;
LABEL_23:
  if ( result )
    v6 = newPayloadOffset;
  *newOffset = v6;
  return result;
}

