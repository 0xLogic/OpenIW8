/*
==============
bdIPDiscoveryPacket::bdIPDiscoveryPacket
==============
*/

void __fastcall bdIPDiscoveryPacket::bdIPDiscoveryPacket(bdIPDiscoveryPacket *this, const unsigned __int16 version)
{
  ??0bdIPDiscoveryPacket@@QEAA@G@Z(this, version);
}

/*
==============
bdIPDiscoveryPacket::deserialize
==============
*/

bool __fastcall bdIPDiscoveryPacket::deserialize(bdIPDiscoveryPacket *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdIPDiscoveryPacket@@QEAA_NPEBXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdIPDiscoveryPacket::getType
==============
*/

unsigned __int8 __fastcall bdIPDiscoveryPacket::getType(bdIPDiscoveryPacket *this)
{
  return ?getType@bdIPDiscoveryPacket@@QEBAEXZ(this);
}

/*
==============
bdIPDiscoveryPacket::getProtocolVersion
==============
*/

unsigned __int16 __fastcall bdIPDiscoveryPacket::getProtocolVersion(bdIPDiscoveryPacket *this)
{
  return ?getProtocolVersion@bdIPDiscoveryPacket@@QEBAGXZ(this);
}

/*
==============
bdIPDiscoveryPacket::bdIPDiscoveryPacket
==============
*/

void __fastcall bdIPDiscoveryPacket::bdIPDiscoveryPacket(bdIPDiscoveryPacket *this)
{
  ??0bdIPDiscoveryPacket@@QEAA@XZ(this);
}

/*
==============
bdIPDiscoveryPacket::serialize
==============
*/

bool __fastcall bdIPDiscoveryPacket::serialize(bdIPDiscoveryPacket *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdIPDiscoveryPacket@@QEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdIPDiscoveryPacket::bdIPDiscoveryPacket
==============
*/
void bdIPDiscoveryPacket::bdIPDiscoveryPacket(bdIPDiscoveryPacket *this, const unsigned __int16 version)
{
  this->m_type = 30;
  this->m_protocolVersion = version;
}

/*
==============
bdIPDiscoveryPacket::bdIPDiscoveryPacket
==============
*/
void bdIPDiscoveryPacket::bdIPDiscoveryPacket(bdIPDiscoveryPacket *this)
{
  this->m_type = 30;
  this->m_protocolVersion = 2;
}

/*
==============
bdIPDiscoveryPacket::deserialize
==============
*/
bool bdIPDiscoveryPacket::deserialize(bdIPDiscoveryPacket *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int v9; 
  bool v10; 

  v9 = offset + 1;
  *newOffset = offset + 1;
  if ( data )
  {
    if ( v9 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      this->m_type = *((_BYTE *)data + offset);
  }
  v10 = (v9 <= size || !data) && bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_protocolVersion);
  if ( (unsigned __int16)(this->m_protocolVersion - 2) <= 1u || (!v10 || !bdBytePacker::rewindBytes(data, size, *newOffset, newOffset, 2u) || !bdBytePacker::skipBytes(data, size, *newOffset, newOffset, 1u) || !bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_protocolVersion) ? (v10 = 0) : (v10 = 1), this->m_protocolVersion == 1) )
  {
    if ( !v10 )
      *newOffset = offset;
    return v10;
  }
  else
  {
    *newOffset = offset;
    return 0;
  }
}

/*
==============
bdIPDiscoveryPacket::getProtocolVersion
==============
*/
__int64 bdIPDiscoveryPacket::getProtocolVersion(bdIPDiscoveryPacket *this)
{
  return this->m_protocolVersion;
}

/*
==============
bdIPDiscoveryPacket::getType
==============
*/
__int64 bdIPDiscoveryPacket::getType(bdIPDiscoveryPacket *this)
{
  return this->m_type;
}

/*
==============
bdIPDiscoveryPacket::serialize
==============
*/
char bdIPDiscoveryPacket::serialize(bdIPDiscoveryPacket *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  __int64 v6; 
  unsigned int v9; 
  bool v10; 
  __int64 v11; 
  unsigned int v12; 
  bool v13; 

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
  {
LABEL_19:
    *newOffset = v6;
    return 0;
  }
LABEL_10:
  v11 = *newOffset;
  v12 = v11 + 2;
  *newOffset = v11 + 2;
  v13 = (int)v11 + 2 <= size || !data;
  bdHandleAssert(v13, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  if ( !data )
  {
LABEL_17:
    if ( v12 <= size )
      return 1;
    goto LABEL_18;
  }
  if ( v12 <= size )
  {
    *(_WORD *)((char *)data + v11) = this->m_protocolVersion;
    goto LABEL_17;
  }
LABEL_18:
  if ( data )
    goto LABEL_19;
  return 1;
}

