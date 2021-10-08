/*
==============
bdDTLSHeader::bdDTLSHeader
==============
*/

void __fastcall bdDTLSHeader::bdDTLSHeader(bdDTLSHeader *this, bdDTLSPacketTypes type, unsigned __int16 vtag, unsigned __int16 counter)
{
  ??0bdDTLSHeader@@QEAA@W4bdDTLSPacketTypes@@GG@Z(this, type, vtag, counter);
}

/*
==============
bdDTLSHeader::bdDTLSHeader
==============
*/

void __fastcall bdDTLSHeader::bdDTLSHeader(bdDTLSHeader *this)
{
  ??0bdDTLSHeader@@QEAA@XZ(this);
}

/*
==============
bdDTLSHeader::serialize
==============
*/

bool __fastcall bdDTLSHeader::serialize(bdDTLSHeader *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdDTLSHeader@@UEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdDTLSHeader::getSerializedSize
==============
*/

unsigned int __fastcall bdDTLSHeader::getSerializedSize(bdDTLSHeader *this)
{
  return ?getSerializedSize@bdDTLSHeader@@QEBAIXZ(this);
}

/*
==============
bdDTLSHeader::~bdDTLSHeader
==============
*/

void __fastcall bdDTLSHeader::~bdDTLSHeader(bdDTLSHeader *this)
{
  ??1bdDTLSHeader@@UEAA@XZ(this);
}

/*
==============
bdDTLSHeader::deserialize
==============
*/

bool __fastcall bdDTLSHeader::deserialize(bdDTLSHeader *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdDTLSHeader@@UEAA_NPEBXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdDTLSHeader::bdDTLSHeader
==============
*/
void bdDTLSHeader::bdDTLSHeader(bdDTLSHeader *this, bdDTLSPacketTypes type, unsigned __int16 vtag, unsigned __int16 counter)
{
  this->m_type = type;
  this->__vftable = (bdDTLSHeader_vtbl *)&bdDTLSHeader::`vftable';
  this->m_version = BD_DTLS_VERSION;
  this->m_vtag = vtag;
  this->m_counter = counter;
}

/*
==============
bdDTLSHeader::bdDTLSHeader
==============
*/
void bdDTLSHeader::bdDTLSHeader(bdDTLSHeader *this)
{
  *(_DWORD *)&this->m_type = 0;
  this->__vftable = (bdDTLSHeader_vtbl *)&bdDTLSHeader::`vftable';
  this->m_counter = 0;
}

/*
==============
bdDTLSHeader::~bdDTLSHeader
==============
*/
void bdDTLSHeader::~bdDTLSHeader(bdDTLSHeader *this)
{
  this->__vftable = (bdDTLSHeader_vtbl *)&bdDTLSHeader::`vftable';
}

/*
==============
bdDTLSHeader::deserialize
==============
*/
char bdDTLSHeader::deserialize(bdDTLSHeader *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  unsigned __int8 v8; 

  *newOffset = offset;
  if ( !bdBytePacker::removeBasicType<unsigned char>(data, size, offset, newOffset, &this->m_type) || !bdBytePacker::removeBasicType<unsigned char>(data, size, *newOffset, newOffset, &this->m_version) )
  {
LABEL_7:
    v8 = BD_DTLS_VERSION;
    goto LABEL_8;
  }
  v8 = BD_DTLS_VERSION;
  if ( this->m_version == BD_DTLS_VERSION )
  {
    if ( bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_vtag) && bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_counter) )
      return 1;
    goto LABEL_7;
  }
LABEL_8:
  if ( this->m_version != v8 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDTLSHeader", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsheader.cpp", "bdDTLSHeader::deserialize", 0x4Bu, "Client DTLS version mismatch");
  *newOffset = 0;
  return 0;
}

/*
==============
bdDTLSHeader::getSerializedSize
==============
*/
__int64 bdDTLSHeader::getSerializedSize(bdDTLSHeader *this)
{
  __int64 result; 

  result = bdDTLSHeader::s_serializedSize;
  if ( !bdDTLSHeader::s_serializedSize )
  {
    bdDTLSHeader::s_serializedSize = 1;
    bdHandleAssert(result + 1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
    ++bdDTLSHeader::s_serializedSize;
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
    bdDTLSHeader::s_serializedSize += 2;
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
    bdDTLSHeader::s_serializedSize += 2;
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
    return bdDTLSHeader::s_serializedSize;
  }
  return result;
}

/*
==============
bdDTLSHeader::serialize
==============
*/
char bdDTLSHeader::serialize(bdDTLSHeader *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  *newOffset = offset;
  if ( bdBytePacker::appendBasicType<unsigned char>(data, size, offset, newOffset, &this->m_type) && bdBytePacker::appendBasicType<unsigned char>(data, size, *newOffset, newOffset, &this->m_version) && bdBytePacker::appendBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_vtag) && bdBytePacker::appendBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_counter) )
    return 1;
  *newOffset = offset;
  return 0;
}

