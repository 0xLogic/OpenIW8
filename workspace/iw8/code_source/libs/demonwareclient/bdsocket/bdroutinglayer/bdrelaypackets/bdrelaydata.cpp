/*
==============
bdRelayData::deserialize
==============
*/

bool __fastcall bdRelayData::deserialize(bdRelayData *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdRelayData@@UEAA_NPEBXIIAEAI@Z(this, data, dataSize, offset, newOffset);
}

/*
==============
bdRelayData::getDataSize
==============
*/

unsigned int __fastcall bdRelayData::getDataSize(bdRelayData *this)
{
  return ?getDataSize@bdRelayData@@QEBAIXZ(this);
}

/*
==============
bdRelayData::bdRelayData
==============
*/

void __fastcall bdRelayData::bdRelayData(bdRelayData *this, unsigned int counter, unsigned int srcID, unsigned int dstID, const unsigned __int8 *payload, const unsigned int payloadSize)
{
  ??0bdRelayData@@QEAA@IIIPEBEI@Z(this, counter, srcID, dstID, payload, payloadSize);
}

/*
==============
bdRelayData::getDestinationRoutingID
==============
*/

unsigned int __fastcall bdRelayData::getDestinationRoutingID(bdRelayData *this)
{
  return ?getDestinationRoutingID@bdRelayData@@QEBAIXZ(this);
}

/*
==============
bdRelayData::getData
==============
*/

const unsigned __int8 *__fastcall bdRelayData::getData(bdRelayData *this)
{
  return ?getData@bdRelayData@@QEBAPEBEXZ(this);
}

/*
==============
bdRelayData::getWrapperSize
==============
*/

unsigned int __fastcall bdRelayData::getWrapperSize()
{
  return ?getWrapperSize@bdRelayData@@SAIXZ();
}

/*
==============
bdRelayData::serialize
==============
*/

bool __fastcall bdRelayData::serialize(bdRelayData *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int8 *hmacKey)
{
  return ?serialize@bdRelayData@@UEBA_NPEAXIIAEAIQEBE@Z(this, data, dataSize, offset, newOffset, hmacKey);
}

/*
==============
bdRelayData::bdRelayData
==============
*/
void bdRelayData::bdRelayData(bdRelayData *this, unsigned int counter, unsigned int srcID, unsigned int dstID, const unsigned __int8 *payload, const unsigned int payloadSize)
{
  bdRelayBasePacket::bdRelayBasePacket(this, BD_RELAY_PACKET_DATA, counter, srcID, 5u);
  this->m_dstID = dstID;
  this->__vftable = (bdRelayData_vtbl *)&bdRelayData::`vftable';
  this->m_data = payload;
  this->m_dataSize = payloadSize;
}

/*
==============
bdRelayData::deserialize
==============
*/
bool bdRelayData::deserialize(bdRelayData *this, const void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int v5; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  char v12; 
  unsigned int m_hmacLength; 
  bool result; 
  unsigned int v15; 
  unsigned int v16; 

  v5 = offset;
  v16 = offset;
  if ( !bdRelayBasePacket::deserialize(this, data, dataSize, offset, &v16) )
  {
    v11 = v16;
LABEL_10:
    v12 = 0;
    goto LABEL_11;
  }
  v9 = v16;
  v10 = v16 + 4;
  v11 = v16 + 4;
  v16 += 4;
  if ( data )
  {
    if ( v10 > dataSize )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
      v11 = v16;
    }
    else
    {
      this->m_dstID = *(_DWORD *)((char *)data + v9);
    }
  }
  if ( v10 > dataSize && data )
    goto LABEL_10;
  v12 = 1;
LABEL_11:
  m_hmacLength = this->m_hmacLength;
  this->m_data = (const unsigned __int8 *)data + v11;
  result = v12 && m_hmacLength + v11 <= dataSize;
  v15 = dataSize - m_hmacLength - v11;
  this->m_dataSize = v15;
  if ( result )
    v5 = v15 + v11;
  *newOffset = v5;
  return result;
}

/*
==============
bdRelayData::getData
==============
*/
const unsigned __int8 *bdRelayData::getData(bdRelayData *this)
{
  return this->m_data;
}

/*
==============
bdRelayData::getDataSize
==============
*/
__int64 bdRelayData::getDataSize(bdRelayData *this)
{
  return this->m_dataSize;
}

/*
==============
bdRelayData::getDestinationRoutingID
==============
*/
__int64 bdRelayData::getDestinationRoutingID(bdRelayData *this)
{
  return this->m_dstID;
}

/*
==============
bdRelayData::getWrapperSize
==============
*/
__int64 bdRelayData::getWrapperSize()
{
  return 16i64;
}

/*
==============
bdRelayData::serialize
==============
*/
bool bdRelayData::serialize(bdRelayData *this, void *data, const unsigned int dataSize, const unsigned int offset, unsigned int *newOffset, const unsigned __int8 *hmacKey)
{
  unsigned int v6; 
  __int64 v10; 
  unsigned int v11; 
  bool v12; 
  bool result; 
  unsigned int offseta; 

  offseta = offset;
  v6 = offset;
  if ( !bdRelayBasePacket::serializeHeader(this, data, dataSize, offset, &offseta) )
    goto LABEL_14;
  v10 = offseta;
  v11 = offseta + 4;
  offseta = v11;
  v12 = v11 <= dataSize || !data;
  bdHandleAssert(v12, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( data )
  {
    if ( v11 > dataSize )
      goto LABEL_10;
    *(_DWORD *)((char *)data + v10) = this->m_dstID;
  }
  if ( v11 > dataSize )
  {
LABEL_10:
    if ( data )
      goto LABEL_14;
  }
  if ( bdBytePacker::appendBuffer(data, dataSize, offseta, &offseta, this->m_data, this->m_dataSize) && bdRelayBasePacket::sign(this, data, dataSize, offseta - v6, v6, &offseta, hmacKey) )
  {
    result = 1;
    goto LABEL_15;
  }
LABEL_14:
  result = 0;
LABEL_15:
  if ( result )
    v6 = offseta;
  *newOffset = v6;
  return result;
}

