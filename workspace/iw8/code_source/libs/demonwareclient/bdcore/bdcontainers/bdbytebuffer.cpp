/*
==============
bdByteBuffer::read
==============
*/

bool __fastcall bdByteBuffer::read(bdByteBuffer *this, void *data, unsigned int size)
{
  return ?read@bdByteBuffer@@QEAA_NPEAXI@Z(this, data, size);
}

/*
==============
bdByteBuffer::writeByte8
==============
*/

bool __fastcall bdByteBuffer::writeByte8(bdByteBuffer *this, const char b)
{
  return ?writeByte8@bdByteBuffer@@QEAA_NC@Z(this, b);
}

/*
==============
bdByteBuffer::writeString
==============
*/

bool __fastcall bdByteBuffer::writeString(bdByteBuffer *this, const char *const s, const unsigned __int64 maxLen)
{
  return ?writeString@bdByteBuffer@@QEAA_NQEBD_K@Z(this, s, maxLen);
}

/*
==============
bdByteBuffer::writeStructEnd
==============
*/

bool __fastcall bdByteBuffer::writeStructEnd(bdByteBuffer *this)
{
  return ?writeStructEnd@bdByteBuffer@@QEAA_NXZ(this);
}

/*
==============
bdByteBuffer::expand
==============
*/

bool __fastcall bdByteBuffer::expand(bdByteBuffer *this, unsigned int increaseSize)
{
  return ?expand@bdByteBuffer@@UEAA_NI@Z(this, increaseSize);
}

/*
==============
bdByteBuffer::writeInt16
==============
*/

bool __fastcall bdByteBuffer::writeInt16(bdByteBuffer *this, const __int16 i)
{
  return ?writeInt16@bdByteBuffer@@QEAA_NF@Z(this, i);
}

/*
==============
bdByteBuffer::readStructEnd
==============
*/

bool __fastcall bdByteBuffer::readStructEnd(bdByteBuffer *this)
{
  return ?readStructEnd@bdByteBuffer@@QEAA_NXZ(this);
}

/*
==============
bdByteBuffer::writeInt32
==============
*/

bool __fastcall bdByteBuffer::writeInt32(bdByteBuffer *this, const int i)
{
  return ?writeInt32@bdByteBuffer@@QEAA_NH@Z(this, i);
}

/*
==============
bdByteBuffer::inspectDataType
==============
*/

bdBitBufferDataType __fastcall bdByteBuffer::inspectDataType(bdByteBuffer *this)
{
  return ?inspectDataType@bdByteBuffer@@QEBA?AW4bdBitBufferDataType@@XZ(this);
}

/*
==============
bdByteBuffer::writeString
==============
*/

bool __fastcall bdByteBuffer::writeString(bdByteBuffer *this, const bdString *s)
{
  return ?writeString@bdByteBuffer@@QEAA_NAEBVbdString@@@Z(this, s);
}

/*
==============
bdByteBuffer::readBlobPointer
==============
*/

bool __fastcall bdByteBuffer::readBlobPointer(bdByteBuffer *this, const unsigned __int8 **blob, unsigned int *length)
{
  return ?readBlobPointer@bdByteBuffer@@QEAA_NAEAPEBEAEAI@Z(this, blob, length);
}

/*
==============
bdByteBuffer::readNChar8
==============
*/

bool __fastcall bdByteBuffer::readNChar8(bdByteBuffer *this, char *c)
{
  return ?readNChar8@bdByteBuffer@@QEAA_NAEAD@Z(this, c);
}

/*
==============
bdByteBuffer::readByte8
==============
*/

bool __fastcall bdByteBuffer::readByte8(bdByteBuffer *this, char *b)
{
  return ?readByte8@bdByteBuffer@@QEAA_NAEAC@Z(this, b);
}

/*
==============
bdByteBuffer::readAndAllocateCompressedMsg
==============
*/

bool __fastcall bdByteBuffer::readAndAllocateCompressedMsg(bdByteBuffer *this, unsigned __int8 **msg, unsigned int *length, unsigned int *compressedLength)
{
  return ?readAndAllocateCompressedMsg@bdByteBuffer@@IEAA_NAEAPEAEAEAI1@Z(this, msg, length, compressedLength);
}

/*
==============
bdByteBuffer::writeDataType
==============
*/

bool __fastcall bdByteBuffer::writeDataType(bdByteBuffer *this, const bdBitBufferDataType dataType)
{
  return ?writeDataType@bdByteBuffer@@IEAA_NW4bdBitBufferDataType@@@Z(this, dataType);
}

/*
==============
bdByteBuffer::writeUInt16
==============
*/

bool __fastcall bdByteBuffer::writeUInt16(bdByteBuffer *this, const unsigned __int16 u)
{
  return ?writeUInt16@bdByteBuffer@@QEAA_NG@Z(this, u);
}

/*
==============
bdByteBuffer::readUInt64
==============
*/

bool __fastcall bdByteBuffer::readUInt64(bdByteBuffer *this, unsigned __int64 *u)
{
  return ?readUInt64@bdByteBuffer@@QEAA_NAEA_K@Z(this, u);
}

/*
==============
bdByteBuffer::writeNChar8
==============
*/

bool __fastcall bdByteBuffer::writeNChar8(bdByteBuffer *this, const char c)
{
  return ?writeNChar8@bdByteBuffer@@QEAA_ND@Z(this, c);
}

/*
==============
bdByteBuffer::readAndAllocateBlob
==============
*/

bool __fastcall bdByteBuffer::readAndAllocateBlob(bdByteBuffer *this, unsigned __int8 **blob, unsigned int *length)
{
  return ?readAndAllocateBlob@bdByteBuffer@@QEAA_NAEAPEAEAEAI@Z(this, blob, length);
}

/*
==============
bdByteBuffer::getDataSize
==============
*/

unsigned int __fastcall bdByteBuffer::getDataSize(bdByteBuffer *this)
{
  return ?getDataSize@bdByteBuffer@@QEBAIXZ(this);
}

/*
==============
bdByteBuffer::writeArrayStart
==============
*/

bool __fastcall bdByteBuffer::writeArrayStart(bdByteBuffer *this, unsigned __int8 type, unsigned int numElements, unsigned int elementSize)
{
  return ?writeArrayStart@bdByteBuffer@@QEAA_NEII@Z(this, type, numElements, elementSize);
}

/*
==============
bdByteBuffer::writeUInt64
==============
*/

bool __fastcall bdByteBuffer::writeUInt64(bdByteBuffer *this, const unsigned __int64 u)
{
  return ?writeUInt64@bdByteBuffer@@QEAA_N_K@Z(this, u);
}

/*
==============
bdByteBuffer::readDataType
==============
*/

bool __fastcall bdByteBuffer::readDataType(bdByteBuffer *this, const bdBitBufferDataType expectedDataType)
{
  return ?readDataType@bdByteBuffer@@IEAA_NW4bdBitBufferDataType@@@Z(this, expectedDataType);
}

/*
==============
bdByteBuffer::readUInt32
==============
*/

bool __fastcall bdByteBuffer::readUInt32(bdByteBuffer *this, unsigned int *u)
{
  return ?readUInt32@bdByteBuffer@@QEAA_NAEAI@Z(this, u);
}

/*
==============
bdByteBuffer::readUByte8
==============
*/

bool __fastcall bdByteBuffer::readUByte8(bdByteBuffer *this, unsigned __int8 *b)
{
  return ?readUByte8@bdByteBuffer@@QEAA_NAEAE@Z(this, b);
}

/*
==============
bdByteBuffer::getStringLength
==============
*/

bool __fastcall bdByteBuffer::getStringLength(bdByteBuffer *this, unsigned int *length)
{
  return ?getStringLength@bdByteBuffer@@QEAA_NAEAI@Z(this, length);
}

/*
==============
bdByteBuffer::writeArrayEnd
==============
*/

void __fastcall bdByteBuffer::writeArrayEnd(bdByteBuffer *this)
{
  ?writeArrayEnd@bdByteBuffer@@QEAAXXZ(this);
}

/*
==============
bdByteBuffer::readStructStart
==============
*/

bool __fastcall bdByteBuffer::readStructStart(bdByteBuffer *this, unsigned int *dataLen)
{
  return ?readStructStart@bdByteBuffer@@QEAA_NAEAI@Z(this, dataLen);
}

/*
==============
bdByteBuffer::resizeToFit
==============
*/

void __fastcall bdByteBuffer::resizeToFit(bdByteBuffer *this, unsigned int newDataSize)
{
  ?resizeToFit@bdByteBuffer@@UEAAXI@Z(this, newDataSize);
}

/*
==============
bdByteBuffer::writeFloat32
==============
*/

bool __fastcall bdByteBuffer::writeFloat32(bdByteBuffer *this, const float f)
{
  return ?writeFloat32@bdByteBuffer@@QEAA_NM@Z(this, f);
}

/*
==============
bdByteBuffer::readDataType
==============
*/

bdBitBufferDataType __fastcall bdByteBuffer::readDataType(bdByteBuffer *this)
{
  return ?readDataType@bdByteBuffer@@QEAA?AW4bdBitBufferDataType@@XZ(this);
}

/*
==============
bdByteBuffer::allocateBuffer
==============
*/

void __fastcall bdByteBuffer::allocateBuffer(bdByteBuffer *this)
{
  ?allocateBuffer@bdByteBuffer@@UEAAXXZ(this);
}

/*
==============
bdByteBuffer::writeNoType
==============
*/

bool __fastcall bdByteBuffer::writeNoType(bdByteBuffer *this)
{
  return ?writeNoType@bdByteBuffer@@QEAA_NXZ(this);
}

/*
==============
bdByteBuffer::writeBlob
==============
*/

bool __fastcall bdByteBuffer::writeBlob(bdByteBuffer *this, const void *const blob, const unsigned int length)
{
  return ?writeBlob@bdByteBuffer@@QEAA_NQEBXI@Z(this, blob, length);
}

/*
==============
bdByteBuffer::readInt16
==============
*/

bool __fastcall bdByteBuffer::readInt16(bdByteBuffer *this, __int16 *i)
{
  return ?readInt16@bdByteBuffer@@QEAA_NAEAF@Z(this, i);
}

/*
==============
bdByteBuffer::writeFloat64
==============
*/

bool __fastcall bdByteBuffer::writeFloat64(bdByteBuffer *this, const long double f)
{
  return ?writeFloat64@bdByteBuffer@@QEAA_NN@Z(this, f);
}

/*
==============
bdByteBuffer::readNAN
==============
*/

bool __fastcall bdByteBuffer::readNAN(bdByteBuffer *this)
{
  return ?readNAN@bdByteBuffer@@QEAA_NXZ(this);
}

/*
==============
bdByteBuffer::readString
==============
*/

bool __fastcall bdByteBuffer::readString(bdByteBuffer *this, bdString *s)
{
  return ?readString@bdByteBuffer@@QEAA_NAEAVbdString@@@Z(this, s);
}

/*
==============
bdByteBuffer::write
==============
*/

bool __fastcall bdByteBuffer::write(bdByteBuffer *this, const void *data, const unsigned int size)
{
  return ?write@bdByteBuffer@@QEAA_NPEBXI@Z(this, data, size);
}

/*
==============
bdByteBuffer::readFloat32
==============
*/

bool __fastcall bdByteBuffer::readFloat32(bdByteBuffer *this, float *f)
{
  return ?readFloat32@bdByteBuffer@@QEAA_NAEAM@Z(this, f);
}

/*
==============
bdByteBuffer::readFloat64
==============
*/

bool __fastcall bdByteBuffer::readFloat64(bdByteBuffer *this, long double *f)
{
  return ?readFloat64@bdByteBuffer@@QEAA_NAEAN@Z(this, f);
}

/*
==============
bdByteBuffer::~bdByteBuffer
==============
*/

void __fastcall bdByteBuffer::~bdByteBuffer(bdByteBuffer *this)
{
  ??1bdByteBuffer@@UEAA@XZ(this);
}

/*
==============
bdByteBuffer::setTypeCheck
==============
*/

void __fastcall bdByteBuffer::setTypeCheck(bdByteBuffer *this, const bool flag)
{
  ?setTypeCheck@bdByteBuffer@@QEAAX_N@Z(this, flag);
}

/*
==============
bdByteBuffer::readInt32
==============
*/

bool __fastcall bdByteBuffer::readInt32(bdByteBuffer *this, int *i)
{
  return ?readInt32@bdByteBuffer@@QEAA_NAEAH@Z(this, i);
}

/*
==============
bdByteBuffer::readBool
==============
*/

bool __fastcall bdByteBuffer::readBool(bdByteBuffer *this, bool *b)
{
  return ?readBool@bdByteBuffer@@QEAA_NAEA_N@Z(this, b);
}

/*
==============
bdByteBuffer::writeInt64
==============
*/

bool __fastcall bdByteBuffer::writeInt64(bdByteBuffer *this, const __int64 i)
{
  return ?writeInt64@bdByteBuffer@@QEAA_N_J@Z(this, i);
}

/*
==============
bdByteBuffer::writeBool
==============
*/

bool __fastcall bdByteBuffer::writeBool(bdByteBuffer *this, const bool b)
{
  return ?writeBool@bdByteBuffer@@QEAA_N_N@Z(this, b);
}

/*
==============
bdByteBuffer::readString
==============
*/

bool __fastcall bdByteBuffer::readString(bdByteBuffer *this, char *const s, const unsigned __int64 maxLen)
{
  return ?readString@bdByteBuffer@@QEAA_NQEAD_K@Z(this, s, maxLen);
}

/*
==============
bdByteBuffer::readBlob
==============
*/

bool __fastcall bdByteBuffer::readBlob(bdByteBuffer *this, unsigned __int8 *const blob, unsigned int *length)
{
  return ?readBlob@bdByteBuffer@@QEAA_NQEAEAEAI@Z(this, blob, length);
}

/*
==============
bdByteBuffer::writeUInt32
==============
*/

bool __fastcall bdByteBuffer::writeUInt32(bdByteBuffer *this, const unsigned int u)
{
  return ?writeUInt32@bdByteBuffer@@QEAA_NI@Z(this, u);
}

/*
==============
bdByteBuffer::readArrayEnd
==============
*/

void __fastcall bdByteBuffer::readArrayEnd(bdByteBuffer *this)
{
  ?readArrayEnd@bdByteBuffer@@QEAAXXZ(this);
}

/*
==============
bdByteBuffer::readArrayStart
==============
*/

bool __fastcall bdByteBuffer::readArrayStart(bdByteBuffer *this, unsigned __int8 expectedType, unsigned int *numElements)
{
  return ?readArrayStart@bdByteBuffer@@QEAA_NEAEAI@Z(this, expectedType, numElements);
}

/*
==============
bdByteBuffer::writeStructStart
==============
*/

bool __fastcall bdByteBuffer::writeStructStart(bdByteBuffer *this, const unsigned int dataLen)
{
  return ?writeStructStart@bdByteBuffer@@QEAA_NI@Z(this, dataLen);
}

/*
==============
bdByteBuffer::writeNAN
==============
*/

bool __fastcall bdByteBuffer::writeNAN(bdByteBuffer *this)
{
  return ?writeNAN@bdByteBuffer@@QEAA_NXZ(this);
}

/*
==============
bdByteBuffer::readUInt16
==============
*/

bool __fastcall bdByteBuffer::readUInt16(bdByteBuffer *this, unsigned __int16 *u)
{
  return ?readUInt16@bdByteBuffer@@QEAA_NAEAG@Z(this, u);
}

/*
==============
bdByteBuffer::readInt64
==============
*/

bool __fastcall bdByteBuffer::readInt64(bdByteBuffer *this, __int64 *i)
{
  return ?readInt64@bdByteBuffer@@QEAA_NAEA_J@Z(this, i);
}

/*
==============
bdByteBuffer::writeUByte8
==============
*/

bool __fastcall bdByteBuffer::writeUByte8(bdByteBuffer *this, const unsigned __int8 b)
{
  return ?writeUByte8@bdByteBuffer@@QEAA_NE@Z(this, b);
}

/*
==============
bdByteBuffer::~bdByteBuffer
==============
*/
void bdByteBuffer::~bdByteBuffer(bdByteBuffer *this)
{
  bool v2; 
  unsigned __int8 *m_data; 

  this->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
  v2 = !this->m_data || this->m_allocatedData;
  bdHandleAssert(v2, "m_data == BD_NULL || m_allocatedData", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::~bdByteBuffer", 0x10u, "Potential deallocation error with derived class", -2i64);
  m_data = this->m_data;
  if ( m_data && this->m_allocatedData )
    bdMemory::deallocate(m_data);
  this->m_data = NULL;
  this->m_readPtr = NULL;
  this->m_writePtr = NULL;
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdByteBuffer::allocateBuffer
==============
*/
void bdByteBuffer::allocateBuffer(bdByteBuffer *this)
{
  unsigned __int8 *v2; 

  if ( this->m_data )
  {
    bdHandleAssert(0, "m_data == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::allocateBuffer", 0x24u, "Buffer already allocated.");
    bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::allocateBuffer", 0x25u, "Buffer already allocated.");
  }
  else
  {
    v2 = (unsigned __int8 *)bdMemory::allocate(this->m_size);
    this->m_data = v2;
    this->m_writePtr = v2;
    this->m_readPtr = v2;
    this->m_allocatedData = 1;
  }
}

/*
==============
bdByteBuffer::expand
==============
*/
char bdByteBuffer::expand(bdByteBuffer *this, unsigned int increaseSize)
{
  unsigned __int8 *m_data; 
  unsigned __int8 *m_readPtr; 
  size_t m_size; 
  unsigned __int8 *m_writePtr; 
  bdByteBuffer_vtbl *v8; 
  int v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *v12; 
  bdByteBuffer_vtbl *v13; 
  __int64 v14; 

  m_data = this->m_data;
  if ( m_data )
  {
    m_readPtr = this->m_readPtr;
    m_size = this->m_size;
    if ( m_readPtr < m_data || (m_writePtr = this->m_writePtr, m_writePtr < m_data) )
    {
      bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::expand", 0x3D6u, "bdByteBuffer underflow; beginning of data is after read/write pointer positions.");
    }
    else
    {
      v8 = this->__vftable;
      v9 = m_size + increaseSize;
      this->m_size = m_size + increaseSize;
      this->m_data = NULL;
      this->m_allocatedData = 0;
      ((void (*)(void))v8->allocateBuffer)();
      v10 = this->m_data;
      if ( v10 )
      {
        memcpy_0(v10, m_data, m_size);
        v12 = (unsigned __int8 *)(this->m_data - m_data);
        this->m_readPtr = &m_readPtr[(_QWORD)v12];
        this->m_writePtr = &m_writePtr[(_QWORD)v12];
        bdMemory::deallocate(m_data);
        return 1;
      }
      this->m_data = m_data;
      this->m_size = m_size;
      this->m_readPtr = m_readPtr;
      this->m_writePtr = m_writePtr;
      this->m_allocatedData = 1;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::expand", 0x3F2u, "Could not allocate new buffer for expansion. Requested size = %u Bytes.", v9);
    }
    return 0;
  }
  else
  {
    bdLogMessage(BD_LOG_INFO, "info/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::expand", 0x407u, "Expanding unallocated buffer; allocating with %u Bytes.", increaseSize);
    v13 = this->__vftable;
    this->m_size = increaseSize;
    v13->allocateBuffer(this);
    if ( this->m_data )
    {
      return 1;
    }
    else
    {
      bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::expand", 0x412u, "Failed to allocate new buffer.");
      LODWORD(v14) = this->m_size;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::expand", 0x413u, "Could not allocate buffer of size = %u Bytes.", v14);
      return 0;
    }
  }
}

/*
==============
bdByteBuffer::getDataSize
==============
*/
__int64 bdByteBuffer::getDataSize(bdByteBuffer *this)
{
  return (unsigned int)(LODWORD(this->m_writePtr) - LODWORD(this->m_data));
}

/*
==============
bdByteBuffer::getStringLength
==============
*/
bool bdByteBuffer::getStringLength(bdByteBuffer *this, unsigned int *length)
{
  unsigned __int8 *m_readPtr; 
  bool result; 
  unsigned int i; 
  bool v7; 
  char dest; 
  unsigned int newOffset; 

  m_readPtr = this->m_readPtr;
  result = bdByteBuffer::readDataType(this, BD_BB_SIGNED_CHAR8_STRING_TYPE);
  for ( i = 0; ; ++i )
  {
    dest = 0;
    if ( !result )
      break;
    if ( this->m_size + LODWORD(this->m_data) == LODWORD(this->m_readPtr) )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
      break;
    }
    v7 = bdBytePacker::removeBuffer(this->m_readPtr, this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr), 0, &newOffset, &dest, 1u);
    ++this->m_readPtr;
    if ( !v7 )
      break;
    result = 1;
    if ( !dest )
      goto LABEL_9;
  }
  result = 0;
LABEL_9:
  this->m_readPtr = m_readPtr;
  if ( result )
    *length = i;
  return result;
}

/*
==============
bdByteBuffer::inspectDataType
==============
*/
__int64 bdByteBuffer::inspectDataType(bdByteBuffer *this)
{
  unsigned int m_size; 
  unsigned __int8 *m_readPtr; 
  unsigned int v3; 
  unsigned __int8 v4; 

  if ( !this->m_typeChecked )
    return 0i64;
  m_size = this->m_size;
  m_readPtr = this->m_readPtr;
  v3 = m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
  if ( m_readPtr < this->m_data || v3 > m_size )
    return 0i64;
  v4 = 0;
  if ( m_readPtr )
  {
    if ( v3 )
      v4 = *m_readPtr;
    else
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
  }
  if ( v3 || !m_readPtr )
    return v4;
  else
    return 0i64;
}

/*
==============
bdByteBuffer::read
==============
*/
bool bdByteBuffer::read(bdByteBuffer *this, void *data, unsigned int size)
{
  unsigned int v6; 
  bool result; 
  unsigned int newOffset; 

  v6 = this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
  if ( size > v6 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
    return 0;
  }
  else
  {
    result = bdBytePacker::removeBuffer(this->m_readPtr, v6, 0, &newOffset, data, size);
    this->m_readPtr += size;
  }
  return result;
}

/*
==============
bdByteBuffer::readAndAllocateBlob
==============
*/
_BOOL8 bdByteBuffer::readAndAllocateBlob(bdByteBuffer *this, unsigned __int8 **blob, unsigned int *length)
{
  unsigned __int8 *v3; 
  bool DataType; 
  unsigned int v8; 
  unsigned __int8 *v9; 
  unsigned int u; 

  v3 = NULL;
  u = 0;
  DataType = bdByteBuffer::readDataType(this, BD_BB_BLOB_TYPE);
  if ( !DataType )
    goto LABEL_7;
  DataType = bdByteBuffer::readUInt32(this, &u);
  if ( !DataType )
    goto LABEL_7;
  v8 = u;
  v9 = (unsigned __int8 *)bdMemory::allocate(u);
  v3 = v9;
  if ( v9 )
    DataType = bdByteBuffer::read(this, v9, v8);
  if ( DataType )
  {
    *blob = v3;
    *length = v8;
  }
  else
  {
LABEL_7:
    bdMemory::deallocate(v3);
  }
  return DataType;
}

/*
==============
bdByteBuffer::readAndAllocateCompressedMsg
==============
*/
_BOOL8 bdByteBuffer::readAndAllocateCompressedMsg(bdByteBuffer *this, unsigned __int8 **msg, unsigned int *length, unsigned int *compressedLength)
{
  void *v4; 
  void *v5; 
  bool v9; 
  unsigned int v10; 
  void *v11; 
  unsigned int v12; 
  unsigned int size; 
  unsigned int v15; 
  unsigned int u; 

  v4 = NULL;
  v15 = 0;
  v5 = NULL;
  size = 0;
  u = 0;
  v9 = bdByteBuffer::readUInt32(this, &u);
  if ( v9 )
  {
    v9 = bdByteBuffer::readUInt32(this, &v15);
    if ( v9 )
    {
      v9 = bdByteBuffer::readUInt32(this, &size);
      if ( v9 )
      {
        v10 = size;
        v11 = bdMemory::allocate(size);
        v12 = v15;
        v4 = v11;
        v5 = bdMemory::allocate(v15);
        if ( v4 )
          v9 = bdByteBuffer::read(this, v4, v10);
        if ( v9 )
        {
          if ( !v5 )
          {
            *msg = NULL;
            *length = v12;
            *compressedLength = v10;
            goto LABEL_12;
          }
          if ( u == 50 )
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::readAndAllocateCompressedMsg", 0x2E8u, "Zlib compression is not supported by this platform.");
          else
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::readAndAllocateCompressedMsg", 0x2EFu, "Unsupported compression type.");
          v9 = 0;
        }
      }
    }
  }
  bdMemory::deallocate(v5);
LABEL_12:
  bdMemory::deallocate(v4);
  return v9;
}

/*
==============
bdByteBuffer::readArrayEnd
==============
*/
void bdByteBuffer::readArrayEnd(bdByteBuffer *this)
{
  this->m_typeChecked = this->m_typeCheckedCopy;
}

/*
==============
bdByteBuffer::readArrayStart
==============
*/
bool bdByteBuffer::readArrayStart(bdByteBuffer *this, unsigned __int8 expectedType, unsigned int *numElements)
{
  __int64 v7; 
  int v8; 
  int v9; 
  unsigned int b; 

  this->m_typeCheckedCopy = this->m_typeChecked;
  LOBYTE(b) = 0;
  this->m_typeChecked = 0;
  if ( !bdByteBuffer::readUByte8(this, (unsigned __int8 *)&b) )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "warn", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::readArrayStart", 0x6Eu, "readArrayStart: No array %d\n", v7);
    *numElements = 0;
    return 0;
  }
  if ( (unsigned __int8)b - 100 == expectedType )
  {
    this->m_typeChecked = 0;
    return bdByteBuffer::readUByte8(this, (unsigned __int8 *)&b) && bdByteBuffer::readUInt32(this, &b) && bdByteBuffer::readUInt32(this, numElements);
  }
  else
  {
    v9 = (unsigned __int8)b;
    v8 = expectedType;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "err", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::readArrayStart", 0x75u, "readArrayStart: Expected type %d but read type %d\n", v8, v9);
    return 0;
  }
}

/*
==============
bdByteBuffer::readBlob
==============
*/
bool bdByteBuffer::readBlob(bdByteBuffer *this, unsigned __int8 *const blob, unsigned int *length)
{
  bool result; 
  bool v7; 
  unsigned int v8; 
  bool v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int u; 

  result = bdByteBuffer::readDataType(this, BD_BB_BLOB_TYPE);
  if ( result )
  {
    u = 0;
    v7 = bdByteBuffer::readUInt32(this, &u);
    v8 = u;
    v9 = v7;
    if ( v7 && blob )
    {
      v10 = u;
      if ( *length < u )
        v10 = *length;
      v9 = bdByteBuffer::read(this, blob, v10);
      if ( v8 > *length )
      {
        v12 = *length;
        v11 = v8;
        bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::readBlob", 0x263u, "Reading BLOB (%u bytes) buffer too small (%u bytes).", v11, v12);
      }
    }
    *length = v8;
    return v9;
  }
  return result;
}

/*
==============
bdByteBuffer::readBlobPointer
==============
*/
bool bdByteBuffer::readBlobPointer(bdByteBuffer *this, const unsigned __int8 **blob, unsigned int *length)
{
  bool result; 

  result = bdByteBuffer::readDataType(this, BD_BB_BLOB_TYPE) && bdByteBuffer::readUInt32(this, length) && *length <= this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
  *blob = this->m_readPtr;
  if ( result )
  {
    this->m_readPtr += *length;
  }
  else
  {
    *length = 0;
    *blob = NULL;
  }
  return result;
}

/*
==============
bdByteBuffer::readBool
==============
*/
bool bdByteBuffer::readBool(bdByteBuffer *this, bool *b)
{
  bool result; 
  unsigned int v5; 
  bool v6; 
  bool v7; 
  char dest; 
  unsigned int newOffset; 

  result = bdByteBuffer::readDataType(this, BD_BB_BOOL_TYPE);
  if ( result )
  {
    v5 = this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
    v6 = 0;
    dest = 0;
    if ( v5 )
    {
      v7 = bdBytePacker::removeBuffer(this->m_readPtr, v5, 0, &newOffset, &dest, 1u);
      ++this->m_readPtr;
      v6 = v7;
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
    }
    result = v6;
    if ( v6 )
      *b = dest != 0;
  }
  return result;
}

/*
==============
bdByteBuffer::readByte8
==============
*/
char bdByteBuffer::readByte8(bdByteBuffer *this, char *b)
{
  bool v4; 
  char dest; 
  unsigned int newOffset; 

  if ( bdByteBuffer::readDataType(this, BD_BB_SIGNED_CHAR8_TYPE) )
  {
    if ( this->m_size + LODWORD(this->m_data) == LODWORD(this->m_readPtr) )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
    }
    else
    {
      v4 = bdBytePacker::removeBuffer(this->m_readPtr, this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr), 0, &newOffset, &dest, 1u);
      ++this->m_readPtr;
      if ( v4 )
      {
        *b = dest;
        return 1;
      }
    }
  }
  return 0;
}

/*
==============
bdByteBuffer::readDataType
==============
*/
bool bdByteBuffer::readDataType(bdByteBuffer *this, const bdBitBufferDataType expectedDataType)
{
  bool v4; 
  unsigned __int8 *m_readPtr; 
  int v6; 
  unsigned int v7; 
  bool v8; 
  bdBitBufferDataType v9; 
  void *v10; 
  void *v11; 
  int v12; 
  bool UInt32; 
  unsigned int m_size; 
  unsigned int v15; 
  char *v16; 
  __int64 v17; 
  __int64 v18; 
  char dest[4]; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int newOffset; 
  int v24; 
  unsigned int u[2]; 
  char v26[40]; 
  char strBuffer[40]; 

  v4 = 1;
  if ( !this->m_typeChecked )
    return v4;
  m_readPtr = this->m_readPtr;
  v4 = 0;
  v6 = LODWORD(this->m_data) - (_DWORD)m_readPtr;
  dest[0] = 0;
  v7 = this->m_size + v6;
  if ( v7 )
  {
    v8 = bdBytePacker::removeBuffer(m_readPtr, v7, 0, &newOffset, dest, 1u);
    ++this->m_readPtr;
    v4 = v8;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
  }
  if ( !v4 )
    return v4;
  v9 = (unsigned __int8)dest[0];
  if ( dest[0] != 22 )
  {
    v4 = (unsigned __int8)dest[0] == expectedDataType;
    if ( (unsigned __int8)dest[0] != expectedDataType )
    {
      bdBitBuffer::typeToString(expectedDataType, strBuffer, 0x28ui64);
      bdBitBuffer::typeToString(v9, v26, 0x28ui64);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::readDataType", 0x3B1u, "Expected: %s, read: %s ", strBuffer, v26);
      bdHandleAssert(0, "ok == true", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::readDataType", 0x3B2u, "Expected: %s, read: %s ", strBuffer, v26);
    }
    return v4;
  }
  newOffset = 0;
  v10 = NULL;
  v24 = 0;
  v11 = NULL;
  v22 = 0;
  v12 = 0;
  v21 = 0;
  u[0] = 0;
  UInt32 = bdByteBuffer::readUInt32(this, u);
  if ( UInt32 )
  {
    UInt32 = bdByteBuffer::readUInt32(this, &v22);
    if ( UInt32 )
    {
      UInt32 = bdByteBuffer::readUInt32(this, &v21);
      v12 = v21;
      if ( UInt32 )
      {
        v10 = bdMemory::allocate(v21);
        v11 = bdMemory::allocate(v22);
      }
    }
  }
  if ( UInt32 )
  {
    if ( v10 )
      UInt32 = bdByteBuffer::read(this, v10, v12);
    if ( UInt32 )
    {
      if ( !v11 )
      {
        newOffset = v22;
        v24 = v12;
        goto LABEL_20;
      }
      if ( u[0] == 50 )
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::readAndAllocateCompressedMsg", 0x2E8u, "Zlib compression is not supported by this platform.");
      else
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::readAndAllocateCompressedMsg", 0x2EFu, "Unsupported compression type.");
      UInt32 = 0;
    }
  }
  bdMemory::deallocate(v11);
LABEL_20:
  if ( !UInt32 )
    v11 = NULL;
  bdMemory::deallocate(v10);
  bdHandleAssert(UInt32, "hasReadCompressedMsg", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::readDataType", 0x388u, "Unabled to read compressed message.");
  m_size = this->m_size;
  *(_QWORD *)u = (unsigned int)((_DWORD)m_readPtr - LODWORD(this->m_data));
  v15 = LODWORD(this->m_readPtr) - LODWORD(this->m_data);
  v16 = (char *)bdMemory::allocate(m_size);
  memcpy_0(v16, this->m_data, this->m_size);
  v17 = newOffset;
  this->resizeToFit(this, newOffset + this->m_size - v24);
  v18 = u[0];
  memcpy_0(this->m_data, v16, u[0]);
  memcpy_0(&this->m_data[v18], v11, (unsigned int)v17);
  memcpy_0(&this->m_data[v17 + v18], &v16[v15], m_size - v15);
  bdMemory::deallocate(v16);
  bdMemory::deallocate(v11);
  this->m_readPtr = &this->m_data[v18];
  return bdByteBuffer::readDataType(this, expectedDataType);
}

/*
==============
bdByteBuffer::readDataType
==============
*/
__int64 bdByteBuffer::readDataType(bdByteBuffer *this)
{
  unsigned int v2; 
  bool v3; 
  unsigned __int8 dest; 
  unsigned int newOffset; 

  bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::readDataType", 0x341u, "bdByteBuffer::readDataType with no parameters is unsafe and deprecated. Use bdByteBuffer::inspectDataType instead.");
  v2 = this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
  dest = 0;
  if ( v2 )
  {
    v3 = bdBytePacker::removeBuffer(this->m_readPtr, v2, 0, &newOffset, &dest, 1u);
    ++this->m_readPtr;
    if ( v3 )
      return dest;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
  }
  return 0i64;
}

/*
==============
bdByteBuffer::readFloat32
==============
*/
char bdByteBuffer::readFloat32(bdByteBuffer *this, float *f)
{
  unsigned int v4; 
  bool v5; 
  float dest; 
  unsigned int newOffset; 

  if ( bdByteBuffer::readDataType(this, BD_BB_FLOAT32_TYPE) )
  {
    v4 = this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
    if ( v4 < 4 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
    }
    else
    {
      v5 = bdBytePacker::removeBuffer(this->m_readPtr, v4, 0, &newOffset, &dest, 4u);
      this->m_readPtr += 4;
      if ( v5 )
      {
        *f = dest;
        return 1;
      }
    }
  }
  return 0;
}

/*
==============
bdByteBuffer::readFloat64
==============
*/
char bdByteBuffer::readFloat64(bdByteBuffer *this, long double *f)
{
  unsigned int v4; 
  bool v5; 
  unsigned int newOffset; 
  double dest; 

  if ( bdByteBuffer::readDataType(this, BD_BB_FLOAT64_TYPE) )
  {
    v4 = this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
    if ( v4 < 8 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
    }
    else
    {
      v5 = bdBytePacker::removeBuffer(this->m_readPtr, v4, 0, &newOffset, &dest, 8u);
      this->m_readPtr += 8;
      if ( v5 )
      {
        *f = dest;
        return 1;
      }
    }
  }
  return 0;
}

/*
==============
bdByteBuffer::readInt16
==============
*/
char bdByteBuffer::readInt16(bdByteBuffer *this, __int16 *i)
{
  unsigned int v4; 
  bool v5; 
  __int16 dest; 
  unsigned int newOffset; 

  if ( bdByteBuffer::readDataType(this, BD_BB_SIGNED_INTEGER16_TYPE) )
  {
    v4 = this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
    if ( v4 < 2 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
    }
    else
    {
      v5 = bdBytePacker::removeBuffer(this->m_readPtr, v4, 0, &newOffset, &dest, 2u);
      this->m_readPtr += 2;
      if ( v5 )
      {
        *i = dest;
        return 1;
      }
    }
  }
  return 0;
}

/*
==============
bdByteBuffer::readInt32
==============
*/
char bdByteBuffer::readInt32(bdByteBuffer *this, int *i)
{
  unsigned int v4; 
  bool v5; 
  int dest; 
  unsigned int newOffset; 

  if ( bdByteBuffer::readDataType(this, BD_BB_SIGNED_INTEGER32_TYPE) )
  {
    v4 = this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
    if ( v4 < 4 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
    }
    else
    {
      v5 = bdBytePacker::removeBuffer(this->m_readPtr, v4, 0, &newOffset, &dest, 4u);
      this->m_readPtr += 4;
      if ( v5 )
      {
        *i = dest;
        return 1;
      }
    }
  }
  return 0;
}

/*
==============
bdByteBuffer::readInt64
==============
*/
char bdByteBuffer::readInt64(bdByteBuffer *this, __int64 *i)
{
  unsigned int v4; 
  bool v5; 
  unsigned int newOffset; 
  __int64 dest; 

  if ( bdByteBuffer::readDataType(this, BD_BB_SIGNED_INTEGER64_TYPE) )
  {
    v4 = this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
    if ( v4 < 8 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
    }
    else
    {
      v5 = bdBytePacker::removeBuffer(this->m_readPtr, v4, 0, &newOffset, &dest, 8u);
      this->m_readPtr += 8;
      if ( v5 )
      {
        *i = dest;
        return 1;
      }
    }
  }
  return 0;
}

/*
==============
bdByteBuffer::readNAN
==============
*/
bool bdByteBuffer::readNAN(bdByteBuffer *this)
{
  if ( this->m_typeChecked )
    return bdByteBuffer::readDataType(this, BD_BB_NAN_TYPE);
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::readNAN", 0x334u, "NaN types cannot be used on not type checked byte buffers");
  return 0;
}

/*
==============
bdByteBuffer::readNChar8
==============
*/
char bdByteBuffer::readNChar8(bdByteBuffer *this, char *c)
{
  bool v4; 
  char dest; 
  unsigned int newOffset; 

  if ( bdByteBuffer::readDataType(this, BD_BB_SIGNED_CHAR8_TYPE) )
  {
    if ( this->m_size + LODWORD(this->m_data) == LODWORD(this->m_readPtr) )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
    }
    else
    {
      v4 = bdBytePacker::removeBuffer(this->m_readPtr, this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr), 0, &newOffset, &dest, 1u);
      ++this->m_readPtr;
      if ( v4 )
      {
        *c = dest;
        return 1;
      }
    }
  }
  return 0;
}

/*
==============
bdByteBuffer::readString
==============
*/
bool bdByteBuffer::readString(bdByteBuffer *this, bdString *s)
{
  bool DataType; 
  size_t v5; 
  _BYTE *v6; 
  const bdString *v7; 
  __int64 v8; 
  unsigned int v9; 
  bdString v11; 

  DataType = bdByteBuffer::readDataType(this, BD_BB_SIGNED_CHAR8_STRING_TYPE);
  if ( !DataType )
    return DataType;
  v5 = this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
  v6 = memchr_0(this->m_readPtr, 0, v5);
  if ( v6 )
    v5 = v6 - this->m_readPtr;
  bdString::bdString(&v11, (const char *const)this->m_readPtr, v5);
  bdString::operator=(s, v7);
  bdString::~bdString(&v11);
  v8 = (unsigned int)bdString::getLength(s) + 1;
  v9 = this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
  if ( (unsigned int)v8 <= v9 )
  {
    this->m_readPtr += v8;
    return DataType;
  }
  this->m_readPtr += v9;
  return 0;
}

/*
==============
bdByteBuffer::readString
==============
*/
bool bdByteBuffer::readString(bdByteBuffer *this, char *const s, const unsigned __int64 maxLen)
{
  bool result; 
  __int64 i; 
  bool v8; 
  unsigned int v9; 
  bool v10; 
  char v11; 
  unsigned int newOffset[4]; 
  char dest; 

  result = bdByteBuffer::readDataType(this, BD_BB_SIGNED_CHAR8_STRING_TYPE);
  if ( result && s )
  {
    for ( i = 0i64; ; i = (unsigned int)(i + 1) )
    {
      v8 = 0;
      v9 = this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
      dest = 0;
      if ( v9 )
      {
        v10 = bdBytePacker::removeBuffer(this->m_readPtr, v9, 0, newOffset, &dest, 1u);
        ++this->m_readPtr;
        v8 = v10;
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
      }
      v11 = dest;
      if ( (unsigned int)i < maxLen )
        s[i] = dest;
      if ( !v8 || !v11 )
        break;
    }
    result = v8;
    if ( maxLen )
      s[maxLen - 1] = 0;
  }
  return result;
}

/*
==============
bdByteBuffer::readStructEnd
==============
*/
char bdByteBuffer::readStructEnd(bdByteBuffer *this)
{
  return 1;
}

/*
==============
bdByteBuffer::readStructStart
==============
*/
bool bdByteBuffer::readStructStart(bdByteBuffer *this, unsigned int *dataLen)
{
  bool result; 
  unsigned int u; 

  result = bdByteBuffer::readDataType(this, BD_BB_STRUCTURED_DATA_TYPE);
  if ( result )
  {
    u = 0;
    result = bdByteBuffer::readUInt32(this, &u);
    if ( result )
      *dataLen = u;
  }
  return result;
}

/*
==============
bdByteBuffer::readUByte8
==============
*/
char bdByteBuffer::readUByte8(bdByteBuffer *this, unsigned __int8 *b)
{
  bool v4; 
  unsigned __int8 dest; 
  unsigned int newOffset; 

  if ( bdByteBuffer::readDataType(this, BD_BB_UNSIGNED_CHAR8_TYPE) )
  {
    if ( this->m_size + LODWORD(this->m_data) == LODWORD(this->m_readPtr) )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
    }
    else
    {
      v4 = bdBytePacker::removeBuffer(this->m_readPtr, this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr), 0, &newOffset, &dest, 1u);
      ++this->m_readPtr;
      if ( v4 )
      {
        *b = dest;
        return 1;
      }
    }
  }
  return 0;
}

/*
==============
bdByteBuffer::readUInt16
==============
*/
char bdByteBuffer::readUInt16(bdByteBuffer *this, unsigned __int16 *u)
{
  unsigned int v4; 
  bool v5; 
  unsigned __int16 dest; 
  unsigned int newOffset; 

  if ( bdByteBuffer::readDataType(this, BD_BB_UNSIGNED_INTEGER16_TYPE) )
  {
    v4 = this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
    if ( v4 < 2 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
    }
    else
    {
      v5 = bdBytePacker::removeBuffer(this->m_readPtr, v4, 0, &newOffset, &dest, 2u);
      this->m_readPtr += 2;
      if ( v5 )
      {
        *u = dest;
        return 1;
      }
    }
  }
  return 0;
}

/*
==============
bdByteBuffer::readUInt32
==============
*/
char bdByteBuffer::readUInt32(bdByteBuffer *this, unsigned int *u)
{
  unsigned int v4; 
  bool v5; 
  unsigned int dest; 
  unsigned int newOffset; 

  if ( bdByteBuffer::readDataType(this, BD_BB_UNSIGNED_INTEGER32_TYPE) )
  {
    v4 = this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
    if ( v4 < 4 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
    }
    else
    {
      v5 = bdBytePacker::removeBuffer(this->m_readPtr, v4, 0, &newOffset, &dest, 4u);
      this->m_readPtr += 4;
      if ( v5 )
      {
        *u = dest;
        return 1;
      }
    }
  }
  return 0;
}

/*
==============
bdByteBuffer::readUInt64
==============
*/
char bdByteBuffer::readUInt64(bdByteBuffer *this, unsigned __int64 *u)
{
  unsigned int v4; 
  bool v5; 
  unsigned int newOffset; 
  unsigned __int64 dest; 

  if ( bdByteBuffer::readDataType(this, BD_BB_UNSIGNED_INTEGER64_TYPE) )
  {
    v4 = this->m_size + LODWORD(this->m_data) - LODWORD(this->m_readPtr);
    if ( v4 < 8 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::read", 0x185u, "Could not read data from buffer. Insufficient data available.\n");
    }
    else
    {
      v5 = bdBytePacker::removeBuffer(this->m_readPtr, v4, 0, &newOffset, &dest, 8u);
      this->m_readPtr += 8;
      if ( v5 )
      {
        *u = dest;
        return 1;
      }
    }
  }
  return 0;
}

/*
==============
bdByteBuffer::resizeToFit
==============
*/
void bdByteBuffer::resizeToFit(bdByteBuffer *this, unsigned int newDataSize)
{
  unsigned __int8 *v4; 

  bdMemory::deallocate(this->m_data);
  v4 = (unsigned __int8 *)bdMemory::allocate(newDataSize);
  this->m_data = v4;
  this->m_readPtr = v4;
  this->m_writePtr = v4;
  this->m_size = newDataSize;
}

/*
==============
bdByteBuffer::setTypeCheck
==============
*/
void bdByteBuffer::setTypeCheck(bdByteBuffer *this, const bool flag)
{
  this->m_typeChecked = flag;
}

/*
==============
bdByteBuffer::write
==============
*/
bool bdByteBuffer::write(bdByteBuffer *this, const void *data, const unsigned int size)
{
  unsigned __int8 *m_data; 
  bool v4; 
  unsigned int m_size; 
  bool result; 
  unsigned int v8; 
  unsigned int newOffset; 

  m_data = this->m_data;
  v4 = 0;
  m_size = this->m_size;
  if ( !m_data )
  {
    this->m_size = m_size + size;
    return 1;
  }
  v8 = m_size + (_DWORD)m_data - LODWORD(this->m_writePtr);
  if ( size > v8 )
  {
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::write", 0x44u, "Could not write data to buffer. Insufficient space.\n");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::write", 0x47u, "Could not write data to buffer. Insufficient space.");
  }
  else
  {
    result = bdBytePacker::appendBuffer(this->m_writePtr, v8, 0, &newOffset, data, size);
    v4 = result;
    if ( result )
    {
      this->m_writePtr += newOffset;
      return result;
    }
  }
  return v4;
}

/*
==============
bdByteBuffer::writeArrayEnd
==============
*/
void bdByteBuffer::writeArrayEnd(bdByteBuffer *this)
{
  this->m_typeChecked = this->m_typeCheckedCopy;
}

/*
==============
bdByteBuffer::writeArrayStart
==============
*/
bool bdByteBuffer::writeArrayStart(bdByteBuffer *this, unsigned __int8 type, unsigned int numElements, unsigned int elementSize)
{
  bool m_typeChecked; 
  bool v8; 
  bool v9; 
  char data; 

  m_typeChecked = this->m_typeChecked;
  data = type + 100;
  this->m_typeCheckedCopy = m_typeChecked;
  this->m_typeChecked = 0;
  v8 = bdByteBuffer::write(this, &data, 1u);
  this->m_typeChecked = 1;
  v9 = v8 && bdByteBuffer::writeUInt32(this, elementSize * numElements);
  this->m_typeChecked = 0;
  return v9 && bdByteBuffer::writeUInt32(this, numElements);
}

/*
==============
bdByteBuffer::writeBlob
==============
*/
bool bdByteBuffer::writeBlob(bdByteBuffer *this, const void *const blob, const unsigned int length)
{
  bool v3; 
  char data; 

  v3 = !this->m_typeChecked;
  data = 19;
  return (v3 || bdByteBuffer::write(this, &data, 1u)) && bdByteBuffer::writeUInt32(this, length) && bdByteBuffer::write(this, blob, length);
}

/*
==============
bdByteBuffer::writeBool
==============
*/
bool bdByteBuffer::writeBool(bdByteBuffer *this, const bool b)
{
  bool v2; 
  bool result; 
  bool data; 

  v2 = !this->m_typeChecked;
  data = 1;
  result = 0;
  if ( v2 || bdByteBuffer::write(this, &data, 1u) )
  {
    data = b;
    if ( bdByteBuffer::write(this, &data, 1u) )
      return 1;
  }
  return result;
}

/*
==============
bdByteBuffer::writeByte8
==============
*/
bool bdByteBuffer::writeByte8(bdByteBuffer *this, const char b)
{
  bool v2; 
  bool result; 
  char data; 

  v2 = !this->m_typeChecked;
  data = 2;
  result = 0;
  if ( v2 || bdByteBuffer::write(this, &data, 1u) )
  {
    data = b;
    if ( bdByteBuffer::write(this, &data, 1u) )
      return 1;
  }
  return result;
}

/*
==============
bdByteBuffer::writeDataType
==============
*/
bool bdByteBuffer::writeDataType(bdByteBuffer *this, const bdBitBufferDataType dataType)
{
  bool v2; 
  char data; 

  v2 = !this->m_typeChecked;
  data = dataType;
  return v2 || bdByteBuffer::write(this, &data, 1u);
}

/*
==============
bdByteBuffer::writeFloat32
==============
*/
bool bdByteBuffer::writeFloat32(bdByteBuffer *this, const float f)
{
  bool result; 
  bool v4; 
  float data; 

  if ( f == 2147483600.0 )
    return bdByteBuffer::writeNAN(this);
  v4 = !this->m_typeChecked;
  LOBYTE(data) = 13;
  result = 0;
  if ( v4 || bdByteBuffer::write(this, &data, 1u) )
  {
    data = f;
    if ( bdByteBuffer::write(this, &data, 4u) )
      return 1;
  }
  return result;
}

/*
==============
bdByteBuffer::writeFloat64
==============
*/
bool bdByteBuffer::writeFloat64(bdByteBuffer *this, const long double f)
{
  bool result; 
  bool v4; 
  double data; 

  if ( f == 9.223372036854776e18 )
    return bdByteBuffer::writeNAN(this);
  v4 = !this->m_typeChecked;
  LOBYTE(data) = 14;
  result = 0;
  if ( v4 || bdByteBuffer::write(this, &data, 1u) )
  {
    data = f;
    if ( bdByteBuffer::write(this, &data, 8u) )
      return 1;
  }
  return result;
}

/*
==============
bdByteBuffer::writeInt16
==============
*/
bool bdByteBuffer::writeInt16(bdByteBuffer *this, const __int16 i)
{
  bool v2; 
  bool result; 
  __int16 data; 

  v2 = !this->m_typeChecked;
  LOBYTE(data) = 5;
  result = 0;
  if ( v2 || bdByteBuffer::write(this, &data, 1u) )
  {
    data = i;
    if ( bdByteBuffer::write(this, &data, 2u) )
      return 1;
  }
  return result;
}

/*
==============
bdByteBuffer::writeInt32
==============
*/
bool bdByteBuffer::writeInt32(bdByteBuffer *this, const int i)
{
  bool result; 
  bool v5; 
  int data; 

  if ( i == 0x7FFFFFFF )
    return bdByteBuffer::writeNAN(this);
  v5 = !this->m_typeChecked;
  LOBYTE(data) = 7;
  result = 0;
  if ( v5 || bdByteBuffer::write(this, &data, 1u) )
  {
    data = i;
    if ( bdByteBuffer::write(this, &data, 4u) )
      return 1;
  }
  return result;
}

/*
==============
bdByteBuffer::writeInt64
==============
*/
bool bdByteBuffer::writeInt64(bdByteBuffer *this, const __int64 i)
{
  bool result; 
  bool v5; 
  __int64 data; 

  if ( i == 0x7FFFFFFFFFFFFFFFi64 )
    return bdByteBuffer::writeNAN(this);
  v5 = !this->m_typeChecked;
  LOBYTE(data) = 9;
  result = 0;
  if ( v5 || bdByteBuffer::write(this, &data, 1u) )
  {
    data = i;
    if ( bdByteBuffer::write(this, &data, 8u) )
      return 1;
  }
  return result;
}

/*
==============
bdByteBuffer::writeNAN
==============
*/
bool bdByteBuffer::writeNAN(bdByteBuffer *this)
{
  char data; 

  if ( this->m_typeChecked )
  {
    data = 20;
    return bdByteBuffer::write(this, &data, 1u);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::writeNAN", 0xE1u, "NaN types cannot be used on not type checked byte buffers");
    return 0;
  }
}

/*
==============
bdByteBuffer::writeNChar8
==============
*/
bool bdByteBuffer::writeNChar8(bdByteBuffer *this, const char c)
{
  bool v2; 
  bool result; 
  char data; 

  v2 = !this->m_typeChecked;
  data = 2;
  result = 0;
  if ( v2 || bdByteBuffer::write(this, &data, 1u) )
  {
    data = c;
    if ( bdByteBuffer::write(this, &data, 1u) )
      return 1;
  }
  return result;
}

/*
==============
bdByteBuffer::writeNoType
==============
*/
bool bdByteBuffer::writeNoType(bdByteBuffer *this)
{
  char data; 

  if ( this->m_typeChecked )
  {
    data = 0;
    return bdByteBuffer::write(this, &data, 1u);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::writeNoType", 0xEFu, "No type cannot be written to not type checked byte buffers");
    return 0;
  }
}

/*
==============
bdByteBuffer::writeString
==============
*/
bool bdByteBuffer::writeString(bdByteBuffer *this, const bdString *s)
{
  size_t v4; 
  const char *Buffer; 
  bool result; 
  bool v7; 
  bool v8; 
  _BYTE *v9; 
  size_t v10; 
  unsigned int v11; 
  char v12; 
  char data; 
  char v14; 

  v4 = bdString::getLength((bdString *)s) + 1;
  Buffer = bdString::getBuffer((bdString *)s);
  if ( !Buffer )
    return bdByteBuffer::writeNAN(this);
  v7 = !this->m_typeChecked;
  v8 = 1;
  data = 16;
  if ( !v7 )
    v8 = bdByteBuffer::write(this, &data, 1u);
  v9 = memchr_0(Buffer, 0, v4);
  if ( v9 && (v10 = v9 - Buffer, v10 < v4) )
  {
    v11 = v10 + 1;
    v12 = 0;
  }
  else
  {
    v11 = v4 - 1;
    v12 = 1;
    bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::writeString", 0x14Fu, "String was not null terminated. Data will be truncated.");
  }
  result = v8 && bdByteBuffer::write(this, Buffer, v11);
  if ( v12 )
    result = result && (v14 = 0, bdByteBuffer::write(this, &v14, 1u));
  return result;
}

/*
==============
bdByteBuffer::writeString
==============
*/
bool bdByteBuffer::writeString(bdByteBuffer *this, const char *const s, const unsigned __int64 maxLen)
{
  bool result; 
  bool v7; 
  bool v8; 
  _BYTE *v9; 
  unsigned __int64 v10; 
  unsigned int v11; 
  char v12; 
  char data; 

  if ( !s )
    return bdByteBuffer::writeNAN(this);
  v7 = !this->m_typeChecked;
  v8 = 1;
  data = 16;
  if ( !v7 )
    v8 = bdByteBuffer::write(this, &data, 1u);
  v9 = memchr_0(s, 0, maxLen);
  if ( v9 && (v10 = v9 - s, v10 < maxLen) )
  {
    v11 = v10 + 1;
    v12 = 0;
  }
  else
  {
    v11 = maxLen - 1;
    v12 = 1;
    bdLogMessage(BD_LOG_WARNING, "warn/", "core/bytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.cpp", "bdByteBuffer::writeString", 0x14Fu, "String was not null terminated. Data will be truncated.");
  }
  result = v8 && bdByteBuffer::write(this, s, v11);
  if ( v12 )
    result = result && (data = 0, bdByteBuffer::write(this, &data, 1u));
  return result;
}

/*
==============
bdByteBuffer::writeStructEnd
==============
*/
char bdByteBuffer::writeStructEnd(bdByteBuffer *this)
{
  return 1;
}

/*
==============
bdByteBuffer::writeStructStart
==============
*/
bool bdByteBuffer::writeStructStart(bdByteBuffer *this, const unsigned int dataLen)
{
  bool v2; 
  char data; 

  v2 = !this->m_typeChecked;
  data = 23;
  return (v2 || bdByteBuffer::write(this, &data, 1u)) && bdByteBuffer::writeUInt32(this, dataLen);
}

/*
==============
bdByteBuffer::writeUByte8
==============
*/
bool bdByteBuffer::writeUByte8(bdByteBuffer *this, const unsigned __int8 b)
{
  bool v2; 
  bool result; 
  unsigned __int8 data; 

  v2 = !this->m_typeChecked;
  data = 3;
  result = 0;
  if ( v2 || bdByteBuffer::write(this, &data, 1u) )
  {
    data = b;
    if ( bdByteBuffer::write(this, &data, 1u) )
      return 1;
  }
  return result;
}

/*
==============
bdByteBuffer::writeUInt16
==============
*/
bool bdByteBuffer::writeUInt16(bdByteBuffer *this, const unsigned __int16 u)
{
  bool v2; 
  bool result; 
  unsigned __int16 data; 

  v2 = !this->m_typeChecked;
  LOBYTE(data) = 6;
  result = 0;
  if ( v2 || bdByteBuffer::write(this, &data, 1u) )
  {
    data = u;
    if ( bdByteBuffer::write(this, &data, 2u) )
      return 1;
  }
  return result;
}

/*
==============
bdByteBuffer::writeUInt32
==============
*/
bool bdByteBuffer::writeUInt32(bdByteBuffer *this, const unsigned int u)
{
  bool result; 
  bool v5; 
  unsigned int data; 

  if ( u == -1 )
    return bdByteBuffer::writeNAN(this);
  v5 = !this->m_typeChecked;
  LOBYTE(data) = 8;
  result = 0;
  if ( v5 || bdByteBuffer::write(this, &data, 1u) )
  {
    data = u;
    if ( bdByteBuffer::write(this, &data, 4u) )
      return 1;
  }
  return result;
}

/*
==============
bdByteBuffer::writeUInt64
==============
*/
bool bdByteBuffer::writeUInt64(bdByteBuffer *this, const unsigned __int64 u)
{
  bool result; 
  bool v5; 
  unsigned __int64 data; 

  if ( u == -1i64 )
    return bdByteBuffer::writeNAN(this);
  v5 = !this->m_typeChecked;
  LOBYTE(data) = 10;
  result = 0;
  if ( v5 || bdByteBuffer::write(this, &data, 1u) )
  {
    data = u;
    if ( bdByteBuffer::write(this, &data, 8u) )
      return 1;
  }
  return result;
}

