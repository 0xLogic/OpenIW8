/*
==============
bdNATTraversalPacket::getHMAC
==============
*/

const unsigned __int8 *__fastcall bdNATTraversalPacket::getHMAC(bdNATTraversalPacket *this)
{
  return ?getHMAC@bdNATTraversalPacket@@QEBAPEBEXZ(this);
}

/*
==============
bdNATTraversalPacket::getIdentifier
==============
*/

unsigned int __fastcall bdNATTraversalPacket::getIdentifier(bdNATTraversalPacket *this)
{
  return ?getIdentifier@bdNATTraversalPacket@@QEBAIXZ(this);
}

/*
==============
bdNATTraversalPacket::getSize
==============
*/

unsigned int __fastcall bdNATTraversalPacket::getSize(bdNATTraversalPacket *this)
{
  return ?getSize@bdNATTraversalPacket@@QEBAIXZ(this);
}

/*
==============
bdNATTraversalPacket::bdNATTraversalPacket
==============
*/

void __fastcall bdNATTraversalPacket::bdNATTraversalPacket(bdNATTraversalPacket *this)
{
  ??0bdNATTraversalPacket@@QEAA@XZ(this);
}

/*
==============
bdNATTraversalPacket::serialize
==============
*/

bool __fastcall bdNATTraversalPacket::serialize(bdNATTraversalPacket *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdNATTraversalPacket@@QEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdNATTraversalPacket::setHMAC
==============
*/

void __fastcall bdNATTraversalPacket::setHMAC(bdNATTraversalPacket *this, const unsigned __int8 *hmac, const unsigned int size)
{
  ?setHMAC@bdNATTraversalPacket@@QEAAXPEBEI@Z(this, hmac, size);
}

/*
==============
bdNATTraversalPacket::getType
==============
*/

unsigned __int8 __fastcall bdNATTraversalPacket::getType(bdNATTraversalPacket *this)
{
  return ?getType@bdNATTraversalPacket@@QEBAEXZ(this);
}

/*
==============
bdNATTraversalPacket::getAddrDest
==============
*/

const bdAddr *__fastcall bdNATTraversalPacket::getAddrDest(bdNATTraversalPacket *this)
{
  return ?getAddrDest@bdNATTraversalPacket@@QEBAAEBVbdAddr@@XZ(this);
}

/*
==============
bdNATTraversalPacket::getProtocolVersion
==============
*/

unsigned __int16 __fastcall bdNATTraversalPacket::getProtocolVersion(bdNATTraversalPacket *this)
{
  return ?getProtocolVersion@bdNATTraversalPacket@@QEBAGXZ(this);
}

/*
==============
bdNATTraversalPacket::bdNATTraversalPacket
==============
*/

void __fastcall bdNATTraversalPacket::bdNATTraversalPacket(bdNATTraversalPacket *this, const unsigned __int8 *type, const unsigned int ident, const bdAddr *addrSrc, const bdAddr *addrDest)
{
  ??0bdNATTraversalPacket@@QEAA@AEBEIAEBVbdAddr@@1@Z(this, type, ident, addrSrc, addrDest);
}

/*
==============
bdNATTraversalPacket::setType
==============
*/

void __fastcall bdNATTraversalPacket::setType(bdNATTraversalPacket *this, unsigned __int8 type)
{
  ?setType@bdNATTraversalPacket@@QEAAXE@Z(this, type);
}

/*
==============
bdNATTraversalPacket::getAddrSrc
==============
*/

const bdAddr *__fastcall bdNATTraversalPacket::getAddrSrc(bdNATTraversalPacket *this)
{
  return ?getAddrSrc@bdNATTraversalPacket@@QEBAAEBVbdAddr@@XZ(this);
}

/*
==============
bdNATTraversalPacket::deserialize
==============
*/

bool __fastcall bdNATTraversalPacket::deserialize(bdNATTraversalPacket *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdNATTraversalPacket@@QEAA_NPEBXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdNATTraversalPacket::bdNATTraversalPacket
==============
*/
void bdNATTraversalPacket::bdNATTraversalPacket(bdNATTraversalPacket *this, const unsigned __int8 *type, const unsigned int ident, const bdAddr *addrSrc, const bdAddr *addrDest)
{
  this->m_type = *type;
  this->m_ident = ident;
  this->m_protocolVersion = 2;
  bdAddr::bdAddr(&this->m_addrSrc, addrSrc);
  bdAddr::bdAddr(&this->m_addrDest, addrDest);
}

/*
==============
bdNATTraversalPacket::bdNATTraversalPacket
==============
*/
void bdNATTraversalPacket::bdNATTraversalPacket(bdNATTraversalPacket *this)
{
  this->m_type = 0;
  this->m_protocolVersion = 0;
  this->m_ident = 0;
  bdAddr::bdAddr(&this->m_addrSrc);
  bdAddr::bdAddr(&this->m_addrDest);
}

/*
==============
bdNATTraversalPacket::deserialize
==============
*/
char bdNATTraversalPacket::deserialize(bdNATTraversalPacket *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  char v12; 
  __int64 v13; 
  unsigned int v14; 

  v9 = offset + 1;
  *newOffset = offset + 1;
  if ( data )
  {
    if ( v9 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      this->m_type = *((_BYTE *)data + offset);
  }
  if ( v9 > size && data )
    goto LABEL_13;
  v10 = *newOffset;
  v11 = v10 + 2;
  *newOffset = v10 + 2;
  if ( data )
  {
    if ( v11 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 2i64);
    else
      this->m_protocolVersion = *(_WORD *)((char *)data + v10);
  }
  if ( v11 > size && data )
LABEL_13:
    v12 = 0;
  else
    v12 = 1;
  if ( this->m_protocolVersion >= 2u && v12 && bdBytePacker::removeBuffer(data, size, *newOffset, newOffset, this->m_hmac, 0xAu) )
  {
    v13 = *newOffset;
    v14 = v13 + 4;
    *newOffset = v13 + 4;
    if ( data )
    {
      if ( v14 > size )
        bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
      else
        this->m_ident = *(_DWORD *)((char *)data + v13);
    }
    if ( (v14 <= size || !data) && bdAddr::deserialize(&this->m_addrSrc, data, size, *newOffset, newOffset) && bdAddr::deserialize(&this->m_addrDest, data, size, *newOffset, newOffset) )
      return 1;
  }
  *newOffset = offset;
  return 0;
}

/*
==============
bdNATTraversalPacket::getAddrDest
==============
*/
bdAddr *bdNATTraversalPacket::getAddrDest(bdNATTraversalPacket *this)
{
  return &this->m_addrDest;
}

/*
==============
bdNATTraversalPacket::getAddrSrc
==============
*/
bdAddr *bdNATTraversalPacket::getAddrSrc(bdNATTraversalPacket *this)
{
  return &this->m_addrSrc;
}

/*
==============
bdNATTraversalPacket::getHMAC
==============
*/
unsigned __int8 *bdNATTraversalPacket::getHMAC(bdNATTraversalPacket *this)
{
  return this->m_hmac;
}

/*
==============
bdNATTraversalPacket::getIdentifier
==============
*/
__int64 bdNATTraversalPacket::getIdentifier(bdNATTraversalPacket *this)
{
  return this->m_ident;
}

/*
==============
bdNATTraversalPacket::getProtocolVersion
==============
*/
__int64 bdNATTraversalPacket::getProtocolVersion(bdNATTraversalPacket *this)
{
  return this->m_protocolVersion;
}

/*
==============
bdNATTraversalPacket::getSize
==============
*/
__int64 bdNATTraversalPacket::getSize(bdNATTraversalPacket *this)
{
  __int64 result; 
  char v3; 

  result = bdNATTraversalPacket::serializedSize;
  if ( !bdNATTraversalPacket::serializedSize )
  {
    v3 = bdNATTraversalPacket::serializedSize + 1;
    bdNATTraversalPacket::serializedSize = 1;
    bdHandleAssert(v3, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
    bdNATTraversalPacket::serializedSize += 2;
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
    if ( bdBytePacker::appendBuffer(NULL, 0xFFFFu, bdNATTraversalPacket::serializedSize, &bdNATTraversalPacket::serializedSize, this->m_hmac, 0xAu) && (bdNATTraversalPacket::serializedSize += 4, bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64), bdAddr::serialize(&this->m_addrSrc, NULL, 0xFFFFu, bdNATTraversalPacket::serializedSize, &bdNATTraversalPacket::serializedSize)) && bdAddr::serialize(&this->m_addrDest, NULL, 0xFFFFu, bdNATTraversalPacket::serializedSize, &bdNATTraversalPacket::serializedSize) )
    {
      return bdNATTraversalPacket::serializedSize;
    }
    else
    {
      result = 0i64;
      bdNATTraversalPacket::serializedSize = 0;
    }
  }
  return result;
}

/*
==============
bdNATTraversalPacket::getType
==============
*/
__int64 bdNATTraversalPacket::getType(bdNATTraversalPacket *this)
{
  return this->m_type;
}

/*
==============
bdNATTraversalPacket::serialize
==============
*/
char bdNATTraversalPacket::serialize(bdNATTraversalPacket *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  __int64 v6; 
  unsigned int v9; 
  bool v10; 
  __int64 v11; 
  unsigned int v12; 
  bool v13; 
  __int64 v14; 
  unsigned int v15; 
  bool v16; 

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
    goto LABEL_32;
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
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( v12 <= size )
  {
    *(_WORD *)((char *)data + v11) = this->m_protocolVersion;
    goto LABEL_17;
  }
LABEL_18:
  if ( data )
    goto LABEL_32;
LABEL_19:
  if ( !bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, this->m_hmac, 0xAu) )
    goto LABEL_32;
  v14 = *newOffset;
  v15 = v14 + 4;
  *newOffset = v14 + 4;
  v16 = (int)v14 + 4 <= size || !data;
  bdHandleAssert(v16, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( data )
  {
    if ( v15 > size )
      goto LABEL_28;
    *(_DWORD *)((char *)data + v14) = this->m_ident;
  }
  if ( v15 > size )
  {
LABEL_28:
    if ( data )
      goto LABEL_32;
  }
  if ( bdAddr::serialize(&this->m_addrSrc, data, size, *newOffset, newOffset) && bdAddr::serialize(&this->m_addrDest, data, size, *newOffset, newOffset) )
    return 1;
LABEL_32:
  *newOffset = v6;
  return 0;
}

/*
==============
bdNATTraversalPacket::setHMAC
==============
*/
void bdNATTraversalPacket::setHMAC(bdNATTraversalPacket *this, const unsigned __int8 *hmac, const unsigned int size)
{
  _RDI = this;
  _RBX = hmac;
  bdHandleAssert(size == 10, "size == BD_NAT_TRAV_HMAC_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdpacket\\bdnattraversalpacket.cpp", "bdNATTraversalPacket::setHMAC", 0x87u, "Trying to set HMAC of invalid length.");
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx]
    vmovsd  qword ptr [rdi+4], xmm0
  }
  *(_WORD *)&_RDI->m_hmac[8] = *((_WORD *)_RBX + 4);
}

/*
==============
bdNATTraversalPacket::setType
==============
*/
void bdNATTraversalPacket::setType(bdNATTraversalPacket *this, unsigned __int8 type)
{
  this->m_type = type;
}

