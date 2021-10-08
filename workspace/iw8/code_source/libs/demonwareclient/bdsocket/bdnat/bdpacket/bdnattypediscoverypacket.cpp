/*
==============
bdNATTypeDiscoveryPacket::getRequest
==============
*/

bdNATTypeDiscoveryPacket::bdNATTypeDiscoveryPacketRequest __fastcall bdNATTypeDiscoveryPacket::getRequest(bdNATTypeDiscoveryPacket *this)
{
  return ?getRequest@bdNATTypeDiscoveryPacket@@QEBA?AW4bdNATTypeDiscoveryPacketRequest@1@XZ(this);
}

/*
==============
bdNATTypeDiscoveryPacket::getType
==============
*/

unsigned __int8 __fastcall bdNATTypeDiscoveryPacket::getType(bdNATTypeDiscoveryPacket *this)
{
  return ?getType@bdNATTypeDiscoveryPacket@@QEBAEXZ(this);
}

/*
==============
bdNATTypeDiscoveryPacket::serialize
==============
*/

bool __fastcall bdNATTypeDiscoveryPacket::serialize(bdNATTypeDiscoveryPacket *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdNATTypeDiscoveryPacket@@QEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdNATTypeDiscoveryPacket::bdNATTypeDiscoveryPacket
==============
*/

void __fastcall bdNATTypeDiscoveryPacket::bdNATTypeDiscoveryPacket(bdNATTypeDiscoveryPacket *this, bdNATTypeDiscoveryPacket::bdNATTypeDiscoveryPacketRequest request)
{
  ??0bdNATTypeDiscoveryPacket@@QEAA@W4bdNATTypeDiscoveryPacketRequest@0@@Z(this, request);
}

/*
==============
bdNATTypeDiscoveryPacket::deserialize
==============
*/

bool __fastcall bdNATTypeDiscoveryPacket::deserialize(bdNATTypeDiscoveryPacket *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdNATTypeDiscoveryPacket@@QEAA_NPEBXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdNATTypeDiscoveryPacket::getProtocolVersion
==============
*/

unsigned __int16 __fastcall bdNATTypeDiscoveryPacket::getProtocolVersion(bdNATTypeDiscoveryPacket *this)
{
  return ?getProtocolVersion@bdNATTypeDiscoveryPacket@@QEBAGXZ(this);
}

/*
==============
bdNATTypeDiscoveryPacket::bdNATTypeDiscoveryPacket
==============
*/
void bdNATTypeDiscoveryPacket::bdNATTypeDiscoveryPacket(bdNATTypeDiscoveryPacket *this, bdNATTypeDiscoveryPacket::bdNATTypeDiscoveryPacketRequest request)
{
  this->m_type = 20;
  this->m_protocolVersion = 2;
  this->m_request = request;
}

/*
==============
bdNATTypeDiscoveryPacket::deserialize
==============
*/
char bdNATTypeDiscoveryPacket::deserialize(bdNATTypeDiscoveryPacket *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int *v5; 
  bool v10; 
  unsigned __int16 *p_m_protocolVersion; 
  __int64 v13; 
  bool v14; 
  char v15; 
  unsigned int v16; 
  char v17; 
  bool v18; 
  unsigned __int8 var; 

  v5 = newOffset;
  *newOffset = offset;
  v10 = bdBytePacker::removeBasicType<unsigned char>(data, size, offset, v5, (unsigned __int8 *)this) && bdBytePacker::removeBasicType<unsigned short>(data, size, *v5, v5, &this->m_protocolVersion);
  p_m_protocolVersion = &this->m_protocolVersion;
  if ( this->m_protocolVersion != 2 )
  {
    v10 = v10 && bdBytePacker::rewindBytes(data, size, *v5, v5, 2u) && bdBytePacker::skipBytes(data, size, *v5, v5, 1u) && bdBytePacker::removeBasicType<unsigned short>(data, size, *v5, v5, &this->m_protocolVersion);
    if ( *p_m_protocolVersion != 1 )
    {
      *v5 = offset;
      return 0;
    }
  }
  v13 = *v5;
  v14 = 0;
  v15 = 4;
  if ( (unsigned int)v13 < size )
    v14 = v10;
  if ( !v14 )
    goto LABEL_24;
  v16 = v13 + 1;
  *v5 = v13 + 1;
  if ( data )
  {
    if ( v16 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      v15 = *((_BYTE *)data + v13);
  }
  if ( v16 > size && data )
LABEL_24:
    v17 = 0;
  else
    v17 = 1;
  v18 = *p_m_protocolVersion == 1;
  this->m_request = v15;
  if ( !v18 )
  {
    if ( v17 )
      return v17;
LABEL_33:
    *v5 = offset;
    return v17;
  }
  if ( !v17 || !bdBytePacker::removeBasicType<unsigned char>(data, size, *v5, v5, &var) || !bdBytePacker::removeBasicType<unsigned char>(data, size, *v5, v5, &var) || !bdBytePacker::removeBasicType<unsigned char>(data, size, *v5, v5, &var) )
  {
    v17 = 0;
    goto LABEL_33;
  }
  return 1;
}

/*
==============
bdNATTypeDiscoveryPacket::getProtocolVersion
==============
*/
__int64 bdNATTypeDiscoveryPacket::getProtocolVersion(bdNATTypeDiscoveryPacket *this)
{
  return this->m_protocolVersion;
}

/*
==============
bdNATTypeDiscoveryPacket::getRequest
==============
*/
__int64 bdNATTypeDiscoveryPacket::getRequest(bdNATTypeDiscoveryPacket *this)
{
  return (unsigned int)this->m_request;
}

/*
==============
bdNATTypeDiscoveryPacket::getType
==============
*/
__int64 bdNATTypeDiscoveryPacket::getType(bdNATTypeDiscoveryPacket *this)
{
  return this->m_type;
}

/*
==============
bdNATTypeDiscoveryPacket::serialize
==============
*/
char bdNATTypeDiscoveryPacket::serialize(bdNATTypeDiscoveryPacket *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  __int64 v6; 
  unsigned int v9; 
  bool v10; 
  __int64 v11; 
  unsigned int v12; 
  bool v13; 
  __int64 v14; 
  char m_request; 
  unsigned int v16; 
  bool v17; 

  v6 = offset;
  v9 = offset + 1;
  *newOffset = offset + 1;
  v10 = offset + 1 <= size || !data;
  bdHandleAssert(v10, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !data )
  {
LABEL_8:
    if ( v9 <= size )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v9 <= size )
  {
    *((_BYTE *)data + v6) = this->m_type;
    goto LABEL_8;
  }
LABEL_9:
  if ( data )
    goto LABEL_28;
LABEL_10:
  v11 = *newOffset;
  v12 = v11 + 2;
  *newOffset = v11 + 2;
  v13 = (int)v11 + 2 <= size || !data;
  bdHandleAssert(v13, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  if ( data )
  {
    if ( v12 > size )
      goto LABEL_18;
    *(_WORD *)((char *)data + v11) = this->m_protocolVersion;
  }
  if ( v12 > size )
  {
LABEL_18:
    if ( !data )
      goto LABEL_19;
LABEL_28:
    *newOffset = v6;
    return 0;
  }
LABEL_19:
  v14 = *newOffset;
  m_request = this->m_request;
  v16 = v14 + 1;
  *newOffset = v14 + 1;
  v17 = (int)v14 + 1 <= size || !data;
  bdHandleAssert(v17, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !data )
  {
LABEL_26:
    if ( v16 <= size )
      return 1;
    goto LABEL_27;
  }
  if ( v16 <= size )
  {
    *((_BYTE *)data + v14) = m_request;
    goto LABEL_26;
  }
LABEL_27:
  if ( data )
    goto LABEL_28;
  return 1;
}

