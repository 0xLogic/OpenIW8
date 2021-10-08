/*
==============
bdIPDiscoveryPacketReply::serialize
==============
*/

bool __fastcall bdIPDiscoveryPacketReply::serialize(bdIPDiscoveryPacketReply *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdIPDiscoveryPacketReply@@QEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdIPDiscoveryPacketReply::bdIPDiscoveryPacketReply
==============
*/

void __fastcall bdIPDiscoveryPacketReply::bdIPDiscoveryPacketReply(bdIPDiscoveryPacketReply *this)
{
  ??0bdIPDiscoveryPacketReply@@QEAA@XZ(this);
}

/*
==============
bdIPDiscoveryPacketReply::bdIPDiscoveryPacketReply
==============
*/

void __fastcall bdIPDiscoveryPacketReply::bdIPDiscoveryPacketReply(bdIPDiscoveryPacketReply *this, const bdAddr *addr, unsigned __int16 protocolVersion)
{
  ??0bdIPDiscoveryPacketReply@@QEAA@AEBVbdAddr@@G@Z(this, addr, protocolVersion);
}

/*
==============
bdIPDiscoveryPacketReply::getProtectedAddr
==============
*/

const bdAddr *__fastcall bdIPDiscoveryPacketReply::getProtectedAddr(bdIPDiscoveryPacketReply *this)
{
  return ?getProtectedAddr@bdIPDiscoveryPacketReply@@QEBAAEBVbdAddr@@XZ(this);
}

/*
==============
bdIPDiscoveryPacketReply::getProtocolVersion
==============
*/

unsigned __int16 __fastcall bdIPDiscoveryPacketReply::getProtocolVersion(bdIPDiscoveryPacketReply *this)
{
  return ?getProtocolVersion@bdIPDiscoveryPacketReply@@QEBAGXZ(this);
}

/*
==============
bdIPDiscoveryPacketReply::getAddr
==============
*/

const bdAddr *__fastcall bdIPDiscoveryPacketReply::getAddr(bdIPDiscoveryPacketReply *this)
{
  return ?getAddr@bdIPDiscoveryPacketReply@@QEBAAEBVbdAddr@@XZ(this);
}

/*
==============
bdIPDiscoveryPacketReply::getType
==============
*/

unsigned __int8 __fastcall bdIPDiscoveryPacketReply::getType(bdIPDiscoveryPacketReply *this)
{
  return ?getType@bdIPDiscoveryPacketReply@@QEBAEXZ(this);
}

/*
==============
bdIPDiscoveryPacketReply::applyXorToAddr
==============
*/

void __fastcall bdIPDiscoveryPacketReply::applyXorToAddr(bdIPDiscoveryPacketReply *this, bdAddr *addr)
{
  ?applyXorToAddr@bdIPDiscoveryPacketReply@@QEBAXAEAVbdAddr@@@Z(this, addr);
}

/*
==============
bdIPDiscoveryPacketReply::deserialize
==============
*/

bool __fastcall bdIPDiscoveryPacketReply::deserialize(bdIPDiscoveryPacketReply *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdIPDiscoveryPacketReply@@QEAA_NPEBXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdIPDiscoveryPacketReply::bdIPDiscoveryPacketReply
==============
*/
void bdIPDiscoveryPacketReply::bdIPDiscoveryPacketReply(bdIPDiscoveryPacketReply *this, const bdAddr *addr, unsigned __int16 protocolVersion)
{
  this->m_type = 31;
  this->m_protocolVersion = protocolVersion;
  bdAddr::bdAddr(&this->m_addr, addr);
  bdAddr::bdAddr(&this->m_protectedAddr, addr);
}

/*
==============
bdIPDiscoveryPacketReply::bdIPDiscoveryPacketReply
==============
*/
void bdIPDiscoveryPacketReply::bdIPDiscoveryPacketReply(bdIPDiscoveryPacketReply *this)
{
  this->m_type = 0;
  this->m_protocolVersion = 0;
  bdAddr::bdAddr(&this->m_addr);
  bdAddr::bdAddr(&this->m_protectedAddr);
}

/*
==============
bdIPDiscoveryPacketReply::applyXorToAddr
==============
*/
void bdIPDiscoveryPacketReply::applyXorToAddr(bdIPDiscoveryPacketReply *this, bdAddr *addr)
{
  unsigned int v3; 
  unsigned __int16 Port; 
  bdSockAddr address; 

  bdAddr::getHash(addr);
  bdSockAddr::bdSockAddr(&address, &addr->m_address);
  v3 = bdSockAddr::toUInt32(&address);
  bdSockAddr::set(&address, v3 ^ 0x2112A442);
  Port = bdSockAddr::getPort(&addr->m_address);
  bdAddr::set(addr, &address, Port ^ 0x2112);
}

/*
==============
bdIPDiscoveryPacketReply::deserialize
==============
*/
char bdIPDiscoveryPacketReply::deserialize(bdIPDiscoveryPacketReply *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int v9; 
  bool v10; 
  bool v11; 
  unsigned __int16 *p_m_protocolVersion; 
  bool v14; 

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
  if ( (unsigned __int8)(this->m_type - 30) > 9u )
    goto LABEL_39;
  v11 = v10 && bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_protocolVersion);
  p_m_protocolVersion = &this->m_protocolVersion;
  if ( (unsigned __int16)(this->m_protocolVersion - 2) > 1u )
  {
    v11 = v11 && bdBytePacker::rewindBytes(data, size, *newOffset, newOffset, 2u) && bdBytePacker::skipBytes(data, size, *newOffset, newOffset, 1u) && bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_protocolVersion);
    if ( *p_m_protocolVersion != 1 )
    {
      *newOffset = offset;
      return 0;
    }
  }
  v14 = v11 && bdAddr::deserialize(&this->m_addr, data, size, *newOffset, newOffset);
  if ( *p_m_protocolVersion >= 3u )
  {
    v14 = v14 && bdAddr::deserialize(&this->m_protectedAddr, data, size, *newOffset, newOffset);
    bdIPDiscoveryPacketReply::applyXorToAddr(this, &this->m_protectedAddr);
  }
  if ( *p_m_protocolVersion != 1 )
  {
    if ( v14 )
      return v14;
LABEL_40:
    *newOffset = offset;
    return v14;
  }
  if ( !v14 || !bdBytePacker::skipBytes(data, size, *newOffset, newOffset, 2u) )
  {
LABEL_39:
    v14 = 0;
    goto LABEL_40;
  }
  return 1;
}

/*
==============
bdIPDiscoveryPacketReply::getAddr
==============
*/
bdAddr *bdIPDiscoveryPacketReply::getAddr(bdIPDiscoveryPacketReply *this)
{
  return &this->m_addr;
}

/*
==============
bdIPDiscoveryPacketReply::getProtectedAddr
==============
*/
bdAddr *bdIPDiscoveryPacketReply::getProtectedAddr(bdIPDiscoveryPacketReply *this)
{
  return &this->m_protectedAddr;
}

/*
==============
bdIPDiscoveryPacketReply::getProtocolVersion
==============
*/
__int64 bdIPDiscoveryPacketReply::getProtocolVersion(bdIPDiscoveryPacketReply *this)
{
  return this->m_protocolVersion;
}

/*
==============
bdIPDiscoveryPacketReply::getType
==============
*/
__int64 bdIPDiscoveryPacketReply::getType(bdIPDiscoveryPacketReply *this)
{
  return this->m_type;
}

/*
==============
bdIPDiscoveryPacketReply::serialize
==============
*/
char bdIPDiscoveryPacketReply::serialize(bdIPDiscoveryPacketReply *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  __int64 v6; 
  unsigned int v9; 
  bool v10; 
  char v11; 
  __int64 v12; 
  unsigned int v13; 
  bool v14; 
  bool v15; 
  unsigned __int16 m_protocolVersion; 
  unsigned int v17; 
  unsigned __int16 Port; 
  bdAddr v20; 
  bdSockAddr address; 

  v6 = offset;
  v9 = offset + 1;
  *newOffset = offset + 1;
  v10 = offset + 1 <= size || !data;
  bdHandleAssert(v10, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( data )
  {
    if ( v9 > size )
      goto LABEL_9;
    *((_BYTE *)data + v6) = this->m_type;
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
  if ( bdAddr::serialize(&this->m_addr, data, size, *newOffset, newOffset) )
  {
    v15 = 1;
    goto LABEL_27;
  }
LABEL_26:
  v15 = 0;
LABEL_27:
  m_protocolVersion = this->m_protocolVersion;
  if ( m_protocolVersion >= 3u )
  {
    bdAddr::bdAddr(&v20, &this->m_protectedAddr);
    bdAddr::getHash(&v20);
    bdSockAddr::bdSockAddr(&address, &v20.m_address);
    v17 = bdSockAddr::toUInt32(&address);
    bdSockAddr::set(&address, v17 ^ 0x2112A442);
    Port = bdSockAddr::getPort(&v20.m_address);
    bdAddr::set(&v20, &address, Port ^ 0x2112);
    v15 = v15 && bdAddr::serialize(&v20, data, size, *newOffset, newOffset);
    m_protocolVersion = this->m_protocolVersion;
  }
  if ( m_protocolVersion == 1 )
  {
    if ( v15 && bdBytePacker::skipBytes(data, size, *newOffset, newOffset, 2u) )
      return 1;
    v15 = 0;
    goto LABEL_39;
  }
  if ( !v15 )
LABEL_39:
    *newOffset = v6;
  return v15;
}

