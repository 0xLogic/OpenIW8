/*
==============
bdChunk::getType
==============
*/

bdChunkTypes __fastcall bdChunk::getType(const unsigned __int8 *const data, const unsigned int size)
{
  return ?getType@bdChunk@@SA?AW4bdChunkTypes@@QEBEI@Z(data, size);
}

/*
==============
bdChunk::deserialize
==============
*/

bool __fastcall bdChunk::deserialize(bdChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  return ?deserialize@bdChunk@@UEAA_NQEBEIAEAI@Z(this, data, size, offset);
}

/*
==============
bdChunk::~bdChunk
==============
*/

void __fastcall bdChunk::~bdChunk(bdChunk *this)
{
  ??1bdChunk@@UEAA@XZ(this);
}

/*
==============
bdChunk::bdChunk
==============
*/

void __fastcall bdChunk::bdChunk(bdChunk *this, const bdChunkTypes type)
{
  ??0bdChunk@@QEAA@W4bdChunkTypes@@@Z(this, type);
}

/*
==============
bdChunk::getSerializedSize
==============
*/

unsigned int __fastcall bdChunk::getSerializedSize(bdChunk *this)
{
  return ?getSerializedSize@bdChunk@@UEBAIXZ(this);
}

/*
==============
bdChunk::getType
==============
*/

bdChunkTypes __fastcall bdChunk::getType(bdChunk *this)
{
  return ?getType@bdChunk@@UEBA?AW4bdChunkTypes@@XZ(this);
}

/*
==============
bdChunk::isControl
==============
*/

bool __fastcall bdChunk::isControl(bdChunk *this)
{
  return ?isControl@bdChunk@@QEBA_NXZ(this);
}

/*
==============
bdChunk::serialize
==============
*/

unsigned int __fastcall bdChunk::serialize(bdChunk *this, unsigned __int8 *data, const unsigned int size)
{
  return ?serialize@bdChunk@@UEBAIPEAEI@Z(this, data, size);
}

/*
==============
bdChunk::bdChunk
==============
*/
void bdChunk::bdChunk(bdChunk *this, const bdChunkTypes type)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdChunk_vtbl *)&bdChunk::`vftable';
  this->m_type = type;
}

/*
==============
bdChunk::~bdChunk
==============
*/
void bdChunk::~bdChunk(bdChunk *this)
{
  this->__vftable = (bdChunk_vtbl *)&bdChunk::`vftable';
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdChunk::deserialize
==============
*/
bool bdChunk::deserialize(bdChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  bool result; 
  unsigned __int8 var; 

  var = 0;
  if ( size - *offset < 4 || !bdBytePacker::removeBasicType<unsigned char>(data, size, *offset, offset, &var) )
    return 0;
  result = 1;
  this->m_type = var;
  return result;
}

/*
==============
bdChunk::getSerializedSize
==============
*/
__int64 bdChunk::getSerializedSize(bdChunk *this)
{
  return ((__int64 (__fastcall *)(bdChunk *, _QWORD, _QWORD))this->serialize)(this, 0i64, 0i64);
}

/*
==============
bdChunk::getType
==============
*/
__int64 bdChunk::getType(const unsigned __int8 *const data, const unsigned int size)
{
  unsigned __int8 v2; 
  bool v5; 
  __int64 result; 

  v2 = 0;
  if ( data )
  {
    if ( size )
      v2 = *data;
    else
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
  }
  v5 = size || !data;
  result = v2;
  if ( !v5 )
    return 0i64;
  return result;
}

/*
==============
bdChunk::getType
==============
*/
__int64 bdChunk::getType(bdChunk *this)
{
  return (unsigned int)this->m_type;
}

/*
==============
bdChunk::isControl
==============
*/
bool bdChunk::isControl(bdChunk *this)
{
  return this->m_type != BD_CT_DATA;
}

/*
==============
bdChunk::serialize
==============
*/
__int64 bdChunk::serialize(bdChunk *this, unsigned __int8 *data, const unsigned int size)
{
  unsigned __int8 m_type; 
  bool v6; 
  __int64 result; 

  m_type = this->m_type;
  v6 = size || !data;
  bdHandleAssert(v6, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  result = 1i64;
  if ( data )
  {
    if ( size )
      *data = m_type;
  }
  return result;
}

