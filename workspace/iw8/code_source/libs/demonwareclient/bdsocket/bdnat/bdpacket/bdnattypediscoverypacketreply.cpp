/*
==============
bdNATTypeDiscoveryPacketReply::bdNATTypeDiscoveryPacketReply
==============
*/

void __fastcall bdNATTypeDiscoveryPacketReply::bdNATTypeDiscoveryPacketReply(bdNATTypeDiscoveryPacketReply *this)
{
  ??0bdNATTypeDiscoveryPacketReply@@QEAA@XZ(this);
}

/*
==============
bdNATTypeDiscoveryPacketReply::serialize
==============
*/

bool __fastcall bdNATTypeDiscoveryPacketReply::serialize(bdNATTypeDiscoveryPacketReply *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdNATTypeDiscoveryPacketReply@@QEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdNATTypeDiscoveryPacketReply::getMappedAddr
==============
*/

const bdAddr *__fastcall bdNATTypeDiscoveryPacketReply::getMappedAddr(bdNATTypeDiscoveryPacketReply *this)
{
  return ?getMappedAddr@bdNATTypeDiscoveryPacketReply@@QEBAAEBVbdAddr@@XZ(this);
}

/*
==============
bdNATTypeDiscoveryPacketReply::deserialize
==============
*/

bool __fastcall bdNATTypeDiscoveryPacketReply::deserialize(bdNATTypeDiscoveryPacketReply *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdNATTypeDiscoveryPacketReply@@QEAA_NPEBXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdNATTypeDiscoveryPacketReply::getType
==============
*/

unsigned __int8 __fastcall bdNATTypeDiscoveryPacketReply::getType(bdNATTypeDiscoveryPacketReply *this)
{
  return ?getType@bdNATTypeDiscoveryPacketReply@@QEBAEXZ(this);
}

/*
==============
bdNATTypeDiscoveryPacketReply::getSecAddr
==============
*/

const bdAddr *__fastcall bdNATTypeDiscoveryPacketReply::getSecAddr(bdNATTypeDiscoveryPacketReply *this)
{
  return ?getSecAddr@bdNATTypeDiscoveryPacketReply@@QEBAAEBVbdAddr@@XZ(this);
}

/*
==============
bdNATTypeDiscoveryPacketReply::bdNATTypeDiscoveryPacketReply
==============
*/

void __fastcall bdNATTypeDiscoveryPacketReply::bdNATTypeDiscoveryPacketReply(bdNATTypeDiscoveryPacketReply *this, const bdAddr *mappedAddr, const bdAddr *secAddr, const unsigned __int16 protocolVersion)
{
  ??0bdNATTypeDiscoveryPacketReply@@QEAA@AEBVbdAddr@@0G@Z(this, mappedAddr, secAddr, protocolVersion);
}

/*
==============
bdNATTypeDiscoveryPacketReply::bdNATTypeDiscoveryPacketReply
==============
*/
void bdNATTypeDiscoveryPacketReply::bdNATTypeDiscoveryPacketReply(bdNATTypeDiscoveryPacketReply *this, const bdAddr *mappedAddr, const bdAddr *secAddr, const unsigned __int16 protocolVersion)
{
  this->m_type = 21;
  this->m_protocolVersion = protocolVersion;
  bdAddr::bdAddr(&this->m_mappedAddr, mappedAddr);
  bdAddr::bdAddr(&this->m_secAddr, secAddr);
}

/*
==============
bdNATTypeDiscoveryPacketReply::bdNATTypeDiscoveryPacketReply
==============
*/
void bdNATTypeDiscoveryPacketReply::bdNATTypeDiscoveryPacketReply(bdNATTypeDiscoveryPacketReply *this)
{
  this->m_type = 0;
  this->m_protocolVersion = 0;
  bdAddr::bdAddr(&this->m_mappedAddr);
  bdAddr::bdAddr(&this->m_secAddr);
}

/*
==============
bdNATTypeDiscoveryPacketReply::deserialize
==============
*/
char bdNATTypeDiscoveryPacketReply::deserialize(bdNATTypeDiscoveryPacketReply *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int v9; 
  bool v10; 
  bool v11; 
  unsigned __int16 *p_m_protocolVersion; 
  bool v13; 
  char result; 

  v9 = offset + 1;
  *newOffset = offset + 1;
  if ( data )
  {
    if ( v9 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      this->m_type = *((_BYTE *)data + offset);
  }
  v10 = v9 <= size || !data;
  if ( (unsigned __int8)(this->m_type - 20) <= 9u )
  {
    v11 = v10 && bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_protocolVersion);
    p_m_protocolVersion = &this->m_protocolVersion;
    if ( this->m_protocolVersion == 2 || (!v11 || !bdBytePacker::rewindBytes(data, size, *newOffset, newOffset, 2u) || !bdBytePacker::skipBytes(data, size, *newOffset, newOffset, 1u) || !bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_protocolVersion) ? (v11 = 0) : (v11 = 1), *p_m_protocolVersion == 1) )
    {
      v13 = v11 && bdAddr::deserialize(&this->m_mappedAddr, data, size, *newOffset, newOffset);
      if ( v13 && (*p_m_protocolVersion != 1 || bdBytePacker::skipBytes(data, size, *newOffset, newOffset, 2u)) && bdAddr::deserialize(&this->m_secAddr, data, size, *newOffset, newOffset) )
        return 1;
    }
  }
  result = 0;
  *newOffset = offset;
  return result;
}

/*
==============
bdNATTypeDiscoveryPacketReply::getMappedAddr
==============
*/
bdAddr *bdNATTypeDiscoveryPacketReply::getMappedAddr(bdNATTypeDiscoveryPacketReply *this)
{
  return &this->m_mappedAddr;
}

/*
==============
bdNATTypeDiscoveryPacketReply::getSecAddr
==============
*/
bdAddr *bdNATTypeDiscoveryPacketReply::getSecAddr(bdNATTypeDiscoveryPacketReply *this)
{
  return &this->m_secAddr;
}

/*
==============
bdNATTypeDiscoveryPacketReply::getType
==============
*/
__int64 bdNATTypeDiscoveryPacketReply::getType(bdNATTypeDiscoveryPacketReply *this)
{
  return this->m_type;
}

/*
==============
bdNATTypeDiscoveryPacketReply::serialize
==============
*/
bool bdNATTypeDiscoveryPacketReply::serialize(bdNATTypeDiscoveryPacketReply *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  __int64 v7; 
  unsigned int v9; 
  bool v10; 
  char v11; 
  __int64 v12; 
  unsigned int v13; 
  bool v14; 
  char v15; 
  bool result; 

  v7 = offset;
  v9 = offset + 1;
  *newOffset = offset + 1;
  v10 = offset + 1 <= size || !data;
  bdHandleAssert(v10, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( data )
  {
    if ( v9 > size )
      goto LABEL_9;
    *((_BYTE *)data + v7) = this->m_type;
  }
  if ( v9 <= size )
  {
LABEL_11:
    v11 = 1;
    goto LABEL_12;
  }
LABEL_9:
  if ( !data )
    goto LABEL_11;
  v11 = 0;
LABEL_12:
  if ( !v11 || this->m_protocolVersion == 1 && !bdBytePacker::skipBytes(data, size, *newOffset, newOffset, 1u) )
    goto LABEL_26;
  v12 = *newOffset;
  v13 = v12 + 2;
  *newOffset = v12 + 2;
  v14 = (int)v12 + 2 <= size || !data;
  bdHandleAssert(v14, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  if ( data )
  {
    if ( v13 > size )
      goto LABEL_23;
    *(_WORD *)((char *)data + v12) = this->m_protocolVersion;
  }
  if ( v13 > size )
  {
LABEL_23:
    if ( data )
      goto LABEL_26;
  }
  if ( bdAddr::serialize(&this->m_mappedAddr, data, size, *newOffset, newOffset) )
  {
    v15 = 1;
    goto LABEL_27;
  }
LABEL_26:
  v15 = 0;
LABEL_27:
  result = v15 && (this->m_protocolVersion != 1 || bdBytePacker::skipBytes(data, size, *newOffset, newOffset, 2u)) && bdAddr::serialize(&this->m_secAddr, data, size, *newOffset, newOffset);
  if ( this->m_protocolVersion == 1 )
  {
    if ( result && bdBytePacker::skipBytes(data, size, *newOffset, newOffset, 2u) )
    {
      return 1;
    }
    else
    {
      result = 0;
      *newOffset = v7;
    }
  }
  else if ( !result )
  {
    *newOffset = v7;
  }
  return result;
}

