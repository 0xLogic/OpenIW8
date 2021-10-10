/*
==============
bdBitBuffer::setTypeCheck
==============
*/

void __fastcall bdBitBuffer::setTypeCheck(bdBitBuffer *this, const bool flag)
{
  ?setTypeCheck@bdBitBuffer@@QEAAX_N@Z(this, flag);
}

/*
==============
bdBitBuffer::getTypeCheck
==============
*/

bool __fastcall bdBitBuffer::getTypeCheck(bdBitBuffer *this)
{
  return ?getTypeCheck@bdBitBuffer@@QEBA_NXZ(this);
}

/*
==============
bdBitBuffer::bdBitBuffer
==============
*/

void __fastcall bdBitBuffer::bdBitBuffer(bdBitBuffer *this, const unsigned __int8 *bits, const unsigned int numBits, const bool dataHasTypeCheckedBit)
{
  ??0bdBitBuffer@@QEAA@PEBEI_N@Z(this, bits, numBits, dataHasTypeCheckedBit);
}

/*
==============
bdBitBuffer::writeDataType
==============
*/

void __fastcall bdBitBuffer::writeDataType(bdBitBuffer *this, const bdBitBufferDataType dataType)
{
  ?writeDataType@bdBitBuffer@@IEAAXW4bdBitBufferDataType@@@Z(this, dataType);
}

/*
==============
bdBitBuffer::typeToString
==============
*/

void __fastcall bdBitBuffer::typeToString(const bdBitBufferDataType type, char *const strBuffer, const unsigned __int64 strLength)
{
  ?typeToString@bdBitBuffer@@SAXW4bdBitBufferDataType@@QEAD_K@Z(type, strBuffer, strLength);
}

/*
==============
bdBitBuffer::writeRangedUInt32
==============
*/

void __fastcall bdBitBuffer::writeRangedUInt32(bdBitBuffer *this, const unsigned int u, const unsigned int begin, const unsigned int end, const bool typeChecked)
{
  ?writeRangedUInt32@bdBitBuffer@@QEAAXIII_N@Z(this, u, begin, end, typeChecked);
}

/*
==============
bdBitBuffer::readDataType
==============
*/

bool __fastcall bdBitBuffer::readDataType(bdBitBuffer *this, const bdBitBufferDataType expectedDataType)
{
  return ?readDataType@bdBitBuffer@@IEAA_NW4bdBitBufferDataType@@@Z(this, expectedDataType);
}

/*
==============
bdBitBuffer::readRangedUInt32
==============
*/

bool __fastcall bdBitBuffer::readRangedUInt32(bdBitBuffer *this, unsigned int *u, const unsigned int begin, const unsigned int end, const bool typeChecked)
{
  return ?readRangedUInt32@bdBitBuffer@@QEAA_NAEAIII_N@Z(this, u, begin, end, typeChecked);
}

/*
==============
bdBitBuffer::readRangedFloat32
==============
*/

bool __fastcall bdBitBuffer::readRangedFloat32(bdBitBuffer *this, float *f, const float begin, const float end, const float precision)
{
  return ?readRangedFloat32@bdBitBuffer@@QEAA_NAEAMMMM@Z(this, f, begin, end, precision);
}

/*
==============
bdBitBuffer::writeRangedInt32
==============
*/

void __fastcall bdBitBuffer::writeRangedInt32(bdBitBuffer *this, const int i, const int begin, const int end)
{
  ?writeRangedInt32@bdBitBuffer@@QEAAXHHH@Z(this, i, begin, end);
}

/*
==============
bdBitBuffer::readRangedInt32
==============
*/

bool __fastcall bdBitBuffer::readRangedInt32(bdBitBuffer *this, int *i, const int begin, const int end)
{
  return ?readRangedInt32@bdBitBuffer@@QEAA_NAEAHHH@Z(this, i, begin, end);
}

/*
==============
bdBitBuffer::writeBits
==============
*/

void __fastcall bdBitBuffer::writeBits(bdBitBuffer *this, const void *bits, const unsigned int numBits)
{
  ?writeBits@bdBitBuffer@@QEAAXPEBXI@Z(this, bits, numBits);
}

/*
==============
bdBitBuffer::readBits
==============
*/

bool __fastcall bdBitBuffer::readBits(bdBitBuffer *this, void *bits, unsigned int numBits)
{
  return ?readBits@bdBitBuffer@@QEAA_NPEAXI@Z(this, bits, numBits);
}

/*
==============
bdBitBuffer::bdBitBuffer
==============
*/

void __fastcall bdBitBuffer::bdBitBuffer(bdBitBuffer *this, const unsigned int capacityBits, const bool typeChecked)
{
  ??0bdBitBuffer@@QEAA@I_N@Z(this, capacityBits, typeChecked);
}

/*
==============
bdBitBuffer::writeRangedFloat32
==============
*/

void __fastcall bdBitBuffer::writeRangedFloat32(bdBitBuffer *this, const float f, const float begin, const float end, const float precision)
{
  ?writeRangedFloat32@bdBitBuffer@@QEAAXMMMM@Z(this, f, begin, end, precision);
}

/*
==============
bdBitBuffer::readDataType
==============
*/

bdBitBufferDataType __fastcall bdBitBuffer::readDataType(bdBitBuffer *this)
{
  return ?readDataType@bdBitBuffer@@QEAA?AW4bdBitBufferDataType@@XZ(this);
}

/*
==============
bdBitBuffer::~bdBitBuffer
==============
*/

void __fastcall bdBitBuffer::~bdBitBuffer(bdBitBuffer *this)
{
  ??1bdBitBuffer@@UEAA@XZ(this);
}

/*
==============
bdBitBuffer::append
==============
*/

bool __fastcall bdBitBuffer::append(bdBitBuffer *this, bdBitBuffer *other)
{
  return ?append@bdBitBuffer@@QEAA_NAEAV1@@Z(this, other);
}

/*
==============
bdBitBuffer::bdBitBuffer
==============
*/
void bdBitBuffer::bdBitBuffer(bdBitBuffer *this, const unsigned int capacityBits, const bool typeChecked)
{
  unsigned __int64 v5; 
  char bits; 

  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdBitBuffer_vtbl *)&bdBitBuffer::`vftable';
  this->m_data.m_data = NULL;
  v5 = ((capacityBits & 7) != 0) + (capacityBits >> 3);
  *(_QWORD *)&this->m_data.m_capacity = (unsigned int)v5;
  if ( (_DWORD)v5 )
    this->m_data.m_data = (unsigned __int8 *)bdMemory::allocate(v5);
  *(_QWORD *)&this->m_writePosition = 0i64;
  this->m_readPosition = 0;
  this->m_failedRead = 0;
  this->m_typeChecked = typeChecked;
  bits = -1;
  if ( !typeChecked )
    bits = 0;
  bdBitBuffer::writeBits(this, &bits, 1u);
  bdHandleAssert(this->m_writePosition == 1, "BD_BB_NUM_HEADER_BITS == m_writePosition", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::bdBitBuffer", 0x24u, "BD_BB_NUM_HEADER_BITS and written header don't match.", -2i64);
  this->m_readPosition = 1;
}

/*
==============
bdBitBuffer::bdBitBuffer
==============
*/
void bdBitBuffer::bdBitBuffer(bdBitBuffer *this, const unsigned __int8 *bits, const unsigned int numBits, const bool dataHasTypeCheckedBit)
{
  int v7; 
  unsigned int v8; 
  unsigned int m_size; 
  char bitsa; 

  v7 = 0;
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdBitBuffer_vtbl *)&bdBitBuffer::`vftable';
  this->m_data.m_data = NULL;
  *(_QWORD *)&this->m_data.m_capacity = 0i64;
  *(_QWORD *)&this->m_writePosition = 0i64;
  this->m_readPosition = 0;
  *(_WORD *)&this->m_failedRead = 0;
  if ( dataHasTypeCheckedBit && numBits )
  {
    LOBYTE(v7) = (numBits & 7) != 0;
    v8 = (numBits >> 3) + v7;
    bdFastArray<unsigned char>::ensureCapacity(&this->m_data, v8 + this->m_data.m_size);
    m_size = this->m_data.m_size;
    if ( v8 )
    {
      memcpy_0(&this->m_data.m_data[this->m_data.m_size], bits, v8);
      m_size = this->m_data.m_size;
    }
    this->m_data.m_size = v8 + m_size;
    this->m_writePosition = numBits;
    this->m_maxWritePosition = numBits;
    bdBitBuffer::readBits(this, &this->m_typeChecked, 1u);
  }
  else
  {
    bitsa = 0;
    bdBitBuffer::writeBits(this, &bitsa, 1u);
    bdBitBuffer::writeBits(this, bits, numBits);
    this->m_readPosition = 1;
  }
}

/*
==============
bdBitBuffer::~bdBitBuffer
==============
*/
void bdBitBuffer::~bdBitBuffer(bdBitBuffer *this)
{
  this->__vftable = (bdBitBuffer_vtbl *)&bdBitBuffer::`vftable';
  bdMemory::deallocate(this->m_data.m_data);
  this->m_data.m_data = NULL;
  *(_QWORD *)&this->m_data.m_capacity = 0i64;
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdBitBuffer::append
==============
*/
__int64 bdBitBuffer::append(bdBitBuffer *this, bdBitBuffer *other)
{
  char m_typeChecked; 
  char v4; 
  bool v6; 
  unsigned __int64 m_size; 
  unsigned int v8; 
  unsigned int m_readPosition; 
  void *v10; 
  unsigned int m_maxWritePosition; 
  unsigned int v12; 
  unsigned __int8 v13; 
  __int64 result; 
  const char *v15; 
  const char *v16; 

  m_typeChecked = this->m_typeChecked;
  v4 = other->m_typeChecked;
  v6 = m_typeChecked == v4;
  if ( m_typeChecked == v4 )
  {
    m_size = other->m_data.m_size;
    v8 = 1;
    m_readPosition = other->m_readPosition;
    other->m_readPosition = 1;
    v10 = bdMemory::allocate(m_size);
    m_maxWritePosition = other->m_maxWritePosition;
    v12 = m_maxWritePosition - 1;
    if ( !m_maxWritePosition )
      v12 = 0;
    if ( v10 && bdBitBuffer::readBits(other, v10, v12) )
    {
      v13 = 1;
      bdBitBuffer::writeBits(this, v10, v12);
    }
    else
    {
      v13 = 0;
    }
    bdMemory::deallocate(v10);
    result = v13;
    if ( m_readPosition > 1 )
      v8 = m_readPosition;
    other->m_readPosition = v8;
  }
  else
  {
    v15 = "is type checked";
    v16 = "is type checked";
    if ( v4 )
      v16 = "is not type checked";
    if ( m_typeChecked )
      v15 = "is not type checked";
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdCore/bitBuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::append", 0x23Fu, "Attempt made to append a bdBitBuffer that %s to a bdBitBuffer that %s.", v15, v16);
    return v6;
  }
  return result;
}

/*
==============
bdBitBuffer::getTypeCheck
==============
*/
_BOOL8 bdBitBuffer::getTypeCheck(bdBitBuffer *this)
{
  return this->m_typeChecked;
}

/*
==============
bdBitBuffer::readBits
==============
*/
char bdBitBuffer::readBits(bdBitBuffer *this, void *bits, unsigned int numBits)
{
  unsigned int v3; 
  unsigned int m_readPosition; 
  __int64 v7; 
  int v8; 
  unsigned int v9; 
  unsigned __int8 v10; 
  char v11; 

  v3 = numBits;
  if ( !numBits )
    return 1;
  m_readPosition = this->m_readPosition;
  if ( m_readPosition + numBits <= this->m_maxWritePosition )
  {
    v7 = m_readPosition >> 3;
    while ( (unsigned int)v7 < this->m_data.m_size )
    {
      v8 = 8;
      if ( v3 < 8 )
        v8 = v3;
      bdHandleAssert((unsigned int)v7 < this->m_data.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<unsigned char>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
      v9 = this->m_readPosition & 7;
      v10 = this->m_data.m_data[v7];
      v7 = (unsigned int)(v7 + 1);
      if ( v9 + v8 <= 8 )
      {
        v11 = (v10 >> v9) & (255 >> (8 - v8));
      }
      else
      {
        if ( (unsigned int)v7 >= this->m_data.m_size )
          break;
        bdHandleAssert((unsigned int)v7 < this->m_data.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<unsigned char>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
        v11 = (255 >> (8 - v8)) & ((v10 >> v9) | (this->m_data.m_data[v7] << (8 - v9)));
      }
      *(_BYTE *)bits = v11;
      this->m_readPosition += v8;
      bits = (char *)bits + 1;
      v3 -= v8;
      if ( !v3 )
        return 1;
    }
  }
  this->m_failedRead = 1;
  return 0;
}

/*
==============
bdBitBuffer::readDataType
==============
*/
bool bdBitBuffer::readDataType(bdBitBuffer *this, const bdBitBufferDataType expectedDataType)
{
  bool result; 
  bool v4; 
  unsigned int u; 
  char v6[40]; 
  char strBuffer[40]; 

  if ( !this->m_typeChecked )
    return 1;
  u = 0;
  result = bdBitBuffer::readRangedUInt32(this, &u, 0, 0x1Fu, 0);
  if ( result )
  {
    v4 = u == expectedDataType;
    if ( u != expectedDataType )
    {
      bdBitBuffer::typeToString(expectedDataType, strBuffer, 0x28ui64);
      bdBitBuffer::typeToString((const bdBitBufferDataType)u, v6, 0x28ui64);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCore/bitBuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::readDataType", 0x20Fu, "Expected: %s, read: %s ", strBuffer, v6);
    }
    return v4;
  }
  return result;
}

/*
==============
bdBitBuffer::readDataType
==============
*/
__int64 bdBitBuffer::readDataType(bdBitBuffer *this)
{
  unsigned int v1; 
  unsigned int u; 

  v1 = 0;
  u = 0;
  if ( bdBitBuffer::readRangedUInt32(this, &u, 0, 0x1Fu, 0) )
    return u;
  return v1;
}

/*
==============
bdBitBuffer::readRangedFloat32
==============
*/
bool bdBitBuffer::readRangedFloat32(bdBitBuffer *this, float *f, const float begin, const float end, const float precision)
{
  float v8; 
  bool result; 
  float v10; 
  float v11; 
  bool Float32; 
  unsigned int v13; 
  float v14; 
  bool v15; 
  float v17; 
  float bits; 

  *(float *)&_XMM6 = end;
  bdHandleAssert(end >= begin, "end >= begin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::readRangedFloat32", 0x172u, "bdBitBuffer::writeRangedFloat32, end of range is less then the begining.");
  v8 = precision;
  bdHandleAssert(precision > 0.0, "precision > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::readRangedFloat32", 0x173u, "bdBitBuffer::writeRangedFloat32, precision must be positive.");
  result = bdBitBuffer::readDataType(this, BD_BB_RANGED_FLOAT32_TYPE);
  if ( this->m_typeChecked )
  {
    if ( !result || !bdBitBuffer::readDataType(this, BD_BB_FLOAT32_TYPE) || !bdBitBuffer::readBits(this, &bits, 0x20u) || !bdBitBuffer::readDataType(this, BD_BB_FLOAT32_TYPE) || !bdBitBuffer::readBits(this, (void *)&precision, 0x20u) || !bdBitBuffer::readDataType(this, BD_BB_FLOAT32_TYPE) || !bdBitBuffer::readBits(this, &v17, 0x20u) )
      return 0;
    if ( begin != bits || end != precision || v8 != v17 )
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCore/bitBuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::readRangedFloat32", 0x183u, "Range error. Expected: (%f,%f,%f), read: (%f,%f,%f)", begin, end, v8, bits, precision, v17);
  }
  else if ( !result )
  {
    return result;
  }
  LODWORD(v10) = LODWORD(v8) & _xmm;
  v11 = (float)(end - begin) / v10;
  if ( v11 <= 4294967300.0 )
  {
    v13 = 0;
    if ( (int)v11 )
      v13 = bdBitOperations::highBitNumber((int)v11) + 1;
    precision = 0.0;
    Float32 = bdBitBuffer::readBits(this, (void *)&precision, v13);
    if ( !Float32 )
      return Float32;
    v14 = (float)LODWORD(precision);
    *f = (float)(v14 * v10) + begin;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdCore/bitBuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::readRangedFloat32", 0x18Eu, "The numerical space defined by range/precision combination is too large. No compression performed.");
    Float32 = bdBitBuffer::readFloat32(this, f);
  }
  if ( Float32 )
  {
    v15 = *f >= begin && *f <= end;
    bdHandleAssert(v15, "f >= begin && f <= end", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::readRangedFloat32", 0x1A7u, "bdBitBuffer::readRangedFloat32, read error f is out of range.");
    _XMM0 = *(unsigned int *)f;
    if ( *(float *)&_XMM0 <= end )
      __asm { vmaxss  xmm6, xmm0, xmm7 }
    *f = *(float *)&_XMM6;
  }
  return Float32;
}

/*
==============
bdBitBuffer::readRangedInt32
==============
*/
bool bdBitBuffer::readRangedInt32(bdBitBuffer *this, int *i, const int begin, const int end)
{
  int v5; 
  bool result; 
  unsigned int v9; 
  int v10; 
  bool v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int bits; 

  v5 = end;
  bdHandleAssert(end >= begin, "end >= begin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::readRangedInt32", 0x142u, "bdBitBuffer::writeRangedInt32, end of range is less than the begining");
  result = bdBitBuffer::readDataType(this, BD_BB_RANGED_SIGNED_INTEGER32_TYPE);
  if ( this->m_typeChecked )
  {
    if ( !result || !bdBitBuffer::readDataType(this, BD_BB_SIGNED_INTEGER32_TYPE) || !bdBitBuffer::readBits(this, &bits, 0x20u) || !bdBitBuffer::readDataType(this, BD_BB_SIGNED_INTEGER32_TYPE) || !bdBitBuffer::readBits(this, &v17, 0x20u) )
      return 0;
    if ( begin != bits || v5 != v17 )
    {
      v16 = v17;
      v15 = bits;
      v14 = v5;
      v13 = begin;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCore/bitBuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::readRangedInt32", 0x150u, "Range error. Expected: (%i,%i), read: (%i,%i)", v13, v14, v15, v16);
    }
  }
  else if ( !result )
  {
    return result;
  }
  v9 = 0;
  if ( v5 != begin )
    v9 = bdBitOperations::highBitNumber(v5 - begin) + 1;
  v17 = 0;
  if ( !bdBitBuffer::readBits(this, &v17, v9) )
    return 0;
  v10 = v17 + begin;
  *i = v17 + begin;
  v11 = v10 >= begin && v10 <= v5;
  bdHandleAssert(v11, "i >= begin && i <= end", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::readRangedInt32", 0x164u, "bdBitBuffer::readRangedInt32, read error i is out of range.");
  v12 = *i;
  if ( *i <= v5 )
  {
    if ( v12 < begin )
      v12 = begin;
    v5 = v12;
  }
  *i = v5;
  return 1;
}

/*
==============
bdBitBuffer::readRangedUInt32
==============
*/
bool bdBitBuffer::readRangedUInt32(bdBitBuffer *this, unsigned int *u, const unsigned int begin, const unsigned int end, int typeChecked)
{
  unsigned int v6; 
  bool result; 
  unsigned int v10; 
  unsigned int v11; 
  bool v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  int v17; 
  int bits; 

  v6 = end;
  bdHandleAssert(end >= begin, "end >= begin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::readRangedUInt32", 0x10Eu, "bdBitBuffer::writeRangedUInt, end of range is less than the begining");
  if ( (_BYTE)typeChecked )
  {
    result = bdBitBuffer::readDataType(this, BD_BB_RANGED_UNSIGNED_INTEGER32_TYPE);
    if ( this->m_typeChecked )
    {
      if ( !result || !bdBitBuffer::readDataType(this, BD_BB_UNSIGNED_INTEGER32_TYPE) || !bdBitBuffer::readBits(this, &bits, 0x20u) || !bdBitBuffer::readDataType(this, BD_BB_UNSIGNED_INTEGER32_TYPE) || !bdBitBuffer::readBits(this, &typeChecked, 0x20u) )
        return 0;
      if ( begin != bits || v6 != typeChecked )
      {
        v17 = typeChecked;
        v16 = bits;
        v15 = v6;
        v14 = begin;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCore/bitBuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::readRangedUInt32", 0x121u, "Range error. Expected: (%u,%u), read: (%u,%u)", v14, v15, v16, v17);
      }
    }
    else if ( !result )
    {
      return result;
    }
  }
  v10 = 0;
  if ( v6 != begin )
    v10 = bdBitOperations::highBitNumber(v6 - begin) + 1;
  typeChecked = 0;
  if ( !bdBitBuffer::readBits(this, &typeChecked, v10) )
    return 0;
  v11 = typeChecked + begin;
  *u = typeChecked + begin;
  v12 = v11 >= begin && v11 <= v6;
  bdHandleAssert(v12, "u >= begin && u <= end", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::readRangedUInt32", 0x135u, "bdBitBuffer::readRangedUInt32, read error u is out of range.");
  v13 = *u;
  if ( *u <= v6 )
  {
    if ( v13 < begin )
      v13 = begin;
    v6 = v13;
  }
  *u = v6;
  return 1;
}

/*
==============
bdBitBuffer::setTypeCheck
==============
*/
void bdBitBuffer::setTypeCheck(bdBitBuffer *this, const bool flag)
{
  this->m_typeChecked = flag;
}

/*
==============
bdBitBuffer::typeToString
==============
*/
void bdBitBuffer::typeToString(const bdBitBufferDataType type, char *const strBuffer, const unsigned __int64 strLength)
{
  char *src[26]; 

  src[19] = "Blob";
  src[0] = "NoType";
  src[1] = "Bool";
  src[2] = "Char8";
  src[3] = "UChar8";
  src[4] = "WChar16";
  src[5] = "Int16";
  src[6] = "UInt16";
  src[7] = "Int32";
  src[8] = "UInt32";
  src[9] = "Int64";
  src[10] = "UInt64";
  src[11] = "RangedInt32";
  src[12] = "RangeUInt32";
  src[13] = "Float32";
  src[14] = "Float64";
  src[15] = "RangeFloat32";
  src[16] = "String";
  src[17] = "String";
  src[18] = "MultiByteString";
  src[20] = "NaN";
  src[21] = "FullType";
  src[23] = "StructData";
  src[24] = "Unknown Type";
  src[22] = "Blob";
  if ( type <= (BD_BB_SIGNED_CHAR8_STRING_TYPE|BD_BB_UNSIGNED_INTEGER32_TYPE) )
  {
    if ( type < BD_BB_NO_TYPE )
      type = BD_BB_NO_TYPE;
  }
  else
  {
    type = BD_BB_SIGNED_CHAR8_STRING_TYPE|BD_BB_UNSIGNED_INTEGER32_TYPE;
  }
  bdStrlcpy(strBuffer, src[type], strLength);
}

/*
==============
bdBitBuffer::writeBits
==============
*/
void bdBitBuffer::writeBits(bdBitBuffer *this, const void *bits, const unsigned int numBits)
{
  __int64 v6; 
  unsigned __int8 *m_data; 
  unsigned int v8; 
  unsigned int m_writePosition; 
  int v10; 
  unsigned int v11; 
  __int64 v12; 
  char v13; 
  char v14; 
  __int64 v15; 
  unsigned __int8 v16; 
  unsigned int m_maxWritePosition; 
  char v18; 
  unsigned int v19; 
  char v20; 

  v6 = (numBits + this->m_writePosition - 1) >> 3;
  if ( (unsigned int)v6 >= this->m_data.m_size )
  {
    bdFastArray<unsigned char>::ensureCapacity(&this->m_data, v6 + 1);
    m_data = this->m_data.m_data;
    this->m_data.m_size = v6 + 1;
    m_data[v6] = 0;
  }
  v8 = numBits;
  if ( numBits )
  {
    m_writePosition = this->m_writePosition;
    do
    {
      v10 = m_writePosition & 7;
      v18 = m_writePosition & 7;
      v11 = 8 - v10;
      if ( v8 < 8 - v10 )
        v11 = v8;
      v12 = m_writePosition >> 3;
      v19 = v11;
      v13 = (255 >> (8 - v10)) | (-1 << (v11 + v10));
      bdHandleAssert((unsigned int)v12 < this->m_data.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<unsigned char>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
      v14 = 0;
      v20 = v13 & this->m_data.m_data[v12];
      v15 = (numBits - v8) >> 3;
      v16 = *((_BYTE *)bits + v15);
      if ( (numBits - 1) >> 3 > (unsigned int)v15 )
        v14 = *((_BYTE *)bits + (unsigned int)(v15 + 1));
      bdHandleAssert((unsigned int)v12 < this->m_data.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<unsigned char>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
      this->m_data.m_data[v12] = v20 | ~v13 & (((unsigned __int8)(v14 << (8 - ((numBits - v8) & 7))) | (unsigned __int8)(v16 >> ((numBits - v8) & 7))) << v18);
      m_maxWritePosition = this->m_maxWritePosition;
      m_writePosition = v19 + this->m_writePosition;
      this->m_writePosition = m_writePosition;
      if ( m_maxWritePosition <= m_writePosition )
        m_maxWritePosition = m_writePosition;
      this->m_maxWritePosition = m_maxWritePosition;
      v8 -= v19;
    }
    while ( v8 );
  }
}

/*
==============
bdBitBuffer::writeDataType
==============
*/
void bdBitBuffer::writeDataType(bdBitBuffer *this, const bdBitBufferDataType dataType)
{
  bdBitBufferDataType v4; 
  unsigned int v5; 
  bdBitBufferDataType bits; 

  if ( this->m_typeChecked )
  {
    bdHandleAssert(1, "end >= begin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::writeRangedUInt32", 0x52u, "bdBitBuffer::writeRangedUInt, end of range is less than the begining");
    v4 = BD_BB_STRUCTURED_DATA_TYPE|BD_BB_UNSIGNED_INTEGER32_TYPE;
    v5 = bdBitOperations::highBitNumber(0x1Fu);
    if ( (unsigned int)dataType <= (BD_BB_STRUCTURED_DATA_TYPE|BD_BB_UNSIGNED_INTEGER32_TYPE) )
      v4 = dataType;
    bits = v4;
    bdBitBuffer::writeBits(this, &bits, v5 + 1);
  }
}

/*
==============
bdBitBuffer::writeRangedFloat32
==============
*/

void __fastcall bdBitBuffer::writeRangedFloat32(bdBitBuffer *this, double f, const float begin, double end, const float precision)
{
  float v8; 
  unsigned int v9; 
  float v10; 
  float v11; 
  unsigned int v12; 
  __int128 v13; 

  _XMM6 = *(_OWORD *)&end;
  _XMM9 = *(_OWORD *)&f;
  bdHandleAssert(*(float *)&end >= begin, "end >= begin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::writeRangedFloat32", 0x95u, "bdBitBuffer::writeRangedFloat32, end of range is less then the begining.");
  v8 = precision;
  bdHandleAssert(precision > 0.0, "precision > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::writeRangedFloat32", 0x96u, "bdBitBuffer::writeRangedFloat32, precision must be positive.");
  if ( this->m_typeChecked )
  {
    bdHandleAssert(1, "end >= begin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::writeRangedUInt32", 0x52u, "bdBitBuffer::writeRangedUInt, end of range is less than the begining");
    v9 = bdBitOperations::highBitNumber(0x1Fu);
    LODWORD(precision) = 15;
    bdBitBuffer::writeBits(this, &precision, v9 + 1);
    if ( this->m_typeChecked )
    {
      bdBitBuffer::writeFloat32(this, begin);
      bdBitBuffer::writeFloat32(this, *(const float *)&end);
      bdBitBuffer::writeFloat32(this, v8);
    }
  }
  v10 = 1.0 / COERCE_FLOAT(LODWORD(v8) & _xmm);
  v11 = (float)(*(float *)&end - begin) * v10;
  if ( v11 <= 4294967300.0 )
  {
    v12 = 0;
    if ( (int)v11 )
      v12 = bdBitOperations::highBitNumber((int)v11) + 1;
    if ( *(float *)&f <= *(float *)&end )
      __asm { vmaxss  xmm6, xmm9, xmm7 }
    v13 = _XMM6;
    *(float *)&v13 = (float)((float)(*(float *)&_XMM6 - begin) * v10) + 0.5;
    _XMM2 = v13;
    __asm { vminss  xmm3, xmm2, xmm8 }
    LODWORD(precision) = (int)*(float *)&_XMM3;
    bdBitBuffer::writeBits(this, &precision, v12);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdCore/bitBuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::writeRangedFloat32", 0xA7u, "The numerical space defined by range/precision combination is too large. No compression performed.");
    bdBitBuffer::writeFloat32(this, *(const float *)&f);
  }
}

/*
==============
bdBitBuffer::writeRangedInt32
==============
*/
void bdBitBuffer::writeRangedInt32(bdBitBuffer *this, const int i, const int begin, const int end)
{
  int v5; 
  unsigned int v8; 
  unsigned int v9; 
  int bits; 

  v5 = end;
  bdHandleAssert(end >= begin, "end >= begin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::writeRangedInt32", 0x74u, "bdBitBuffer::writeRangedInt32, end of range is less than the begining");
  if ( this->m_typeChecked )
  {
    bdHandleAssert(1, "end >= begin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::writeRangedUInt32", 0x52u, "bdBitBuffer::writeRangedUInt, end of range is less than the begining");
    v8 = bdBitOperations::highBitNumber(0x1Fu);
    bits = 11;
    bdBitBuffer::writeBits(this, &bits, v8 + 1);
    if ( this->m_typeChecked )
    {
      bdBitBuffer::writeInt32(this, begin);
      bdBitBuffer::writeInt32(this, v5);
    }
  }
  v9 = 0;
  if ( v5 != begin )
    v9 = bdBitOperations::highBitNumber(v5 - begin) + 1;
  if ( i <= v5 )
  {
    v5 = i;
    if ( i < begin )
      v5 = begin;
  }
  bits = v5 - begin;
  bdBitBuffer::writeBits(this, &bits, v9);
}

/*
==============
bdBitBuffer::writeRangedUInt32
==============
*/
void bdBitBuffer::writeRangedUInt32(bdBitBuffer *this, const unsigned int u, const unsigned int begin, const unsigned int end, unsigned int typeChecked)
{
  unsigned int v6; 
  unsigned int v9; 

  v6 = end;
  bdHandleAssert(end >= begin, "end >= begin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::writeRangedUInt32", 0x52u, "bdBitBuffer::writeRangedUInt, end of range is less than the begining");
  if ( (_BYTE)typeChecked )
  {
    if ( this->m_typeChecked )
    {
      bdBitBuffer::writeRangedUInt32(this, 0xCu, 0, 0x1Fu, 0);
      if ( this->m_typeChecked )
      {
        bdBitBuffer::writeRangedUInt32(this, 8u, 0, 0x1Fu, 0);
        typeChecked = begin;
        bdBitBuffer::writeBits(this, &typeChecked, 0x20u);
        if ( this->m_typeChecked )
          bdBitBuffer::writeRangedUInt32(this, 8u, 0, 0x1Fu, 0);
        typeChecked = v6;
        bdBitBuffer::writeBits(this, &typeChecked, 0x20u);
      }
    }
  }
  v9 = 0;
  if ( v6 != begin )
    v9 = bdBitOperations::highBitNumber(v6 - begin) + 1;
  if ( u <= v6 )
  {
    v6 = u;
    if ( u < begin )
      v6 = begin;
  }
  typeChecked = v6 - begin;
  bdBitBuffer::writeBits(this, &typeChecked, v9);
}

