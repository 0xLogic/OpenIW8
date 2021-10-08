/*
==============
bdTaskByteBuffer::adjustPayload
==============
*/

void __fastcall bdTaskByteBuffer::adjustPayload(bdTaskByteBuffer *this, void *payloadStart, unsigned int payloadSize)
{
  ?adjustPayload@bdTaskByteBuffer@@QEAAXPEAXI@Z(this, payloadStart, payloadSize);
}

/*
==============
bdTaskByteBuffer::getPaddingSize
==============
*/

unsigned int __fastcall bdTaskByteBuffer::getPaddingSize(bdTaskByteBuffer *this)
{
  return ?getPaddingSize@bdTaskByteBuffer@@QEBAIXZ(this);
}

/*
==============
bdTaskByteBuffer::allocateBuffer
==============
*/

void __fastcall bdTaskByteBuffer::allocateBuffer(bdTaskByteBuffer *this)
{
  ?allocateBuffer@bdTaskByteBuffer@@UEAAXXZ(this);
}

/*
==============
bdTaskByteBuffer::setupTaskData
==============
*/

void __fastcall bdTaskByteBuffer::setupTaskData(bdTaskByteBuffer *this, unsigned int size)
{
  ?setupTaskData@bdTaskByteBuffer@@IEAAXI@Z(this, size);
}

/*
==============
bdTaskByteBuffer::setHeaderSize
==============
*/

void __fastcall bdTaskByteBuffer::setHeaderSize(bdTaskByteBuffer *this, unsigned int size)
{
  ?setHeaderSize@bdTaskByteBuffer@@QEAAXI@Z(this, size);
}

/*
==============
bdTaskByteBuffer::bdTaskByteBuffer
==============
*/

void __fastcall bdTaskByteBuffer::bdTaskByteBuffer(bdTaskByteBuffer *this, const void *bytes, const unsigned int size, bool isTypeChecked)
{
  ??0bdTaskByteBuffer@@QEAA@PEBXI_N@Z(this, bytes, size, isTypeChecked);
}

/*
==============
bdTaskByteBuffer::getHeaderSize
==============
*/

unsigned int __fastcall bdTaskByteBuffer::getHeaderSize(bdTaskByteBuffer *this)
{
  return ?getHeaderSize@bdTaskByteBuffer@@QEBAIXZ(this);
}

/*
==============
bdTaskByteBuffer::~bdTaskByteBuffer
==============
*/

void __fastcall bdTaskByteBuffer::~bdTaskByteBuffer(bdTaskByteBuffer *this)
{
  ??1bdTaskByteBuffer@@UEAA@XZ(this);
}

/*
==============
bdTaskByteBuffer::resizeToFit
==============
*/

void __fastcall bdTaskByteBuffer::resizeToFit(bdTaskByteBuffer *this, unsigned int newDataSize)
{
  ?resizeToFit@bdTaskByteBuffer@@UEAAXI@Z(this, newDataSize);
}

/*
==============
bdTaskByteBuffer::deepCopy
==============
*/

bool __fastcall bdTaskByteBuffer::deepCopy(bdTaskByteBuffer *dst, const bdTaskByteBuffer *src)
{
  return ?deepCopy@bdTaskByteBuffer@@SA_NAEAV1@AEBV1@@Z(dst, src);
}

/*
==============
bdTaskByteBuffer::getHeaderStart
==============
*/

unsigned __int8 *__fastcall bdTaskByteBuffer::getHeaderStart(bdTaskByteBuffer *this)
{
  return ?getHeaderStart@bdTaskByteBuffer@@QEBAPEAEXZ(this);
}

/*
==============
bdTaskByteBuffer::getPaddingStart
==============
*/

unsigned __int8 *__fastcall bdTaskByteBuffer::getPaddingStart(bdTaskByteBuffer *this)
{
  return ?getPaddingStart@bdTaskByteBuffer@@QEBAPEAEXZ(this);
}

/*
==============
bdTaskByteBuffer::bdTaskByteBuffer
==============
*/

void __fastcall bdTaskByteBuffer::bdTaskByteBuffer(bdTaskByteBuffer *this, const unsigned int size, bool isTypeChecked)
{
  ??0bdTaskByteBuffer@@QEAA@I_N@Z(this, size, isTypeChecked);
}

/*
==============
bdTaskByteBuffer::expand
==============
*/

bool __fastcall bdTaskByteBuffer::expand(bdTaskByteBuffer *this, unsigned int increaseSize)
{
  return ?expand@bdTaskByteBuffer@@UEAA_NI@Z(this, increaseSize);
}

/*
==============
bdTaskByteBuffer::bdTaskByteBuffer
==============
*/
void bdTaskByteBuffer::bdTaskByteBuffer(bdTaskByteBuffer *this, const unsigned int size, bool isTypeChecked)
{
  unsigned __int8 *m_data; 
  unsigned __int8 *v6; 

  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdTaskByteBuffer_vtbl *)&bdByteBuffer::`vftable';
  this->m_size = 0;
  this->m_data = NULL;
  this->m_typeChecked = isTypeChecked;
  this->m_typeCheckedCopy = isTypeChecked;
  this->m_allocatedData = 0;
  bdHandleAssert(1, "m_data == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x31u, "Buffer already allocated. init() called twice?", -2i64);
  this->m_size = 0;
  m_data = this->m_data;
  this->m_writePtr = m_data;
  this->m_readPtr = m_data;
  this->__vftable = (bdTaskByteBuffer_vtbl *)&bdTaskByteBuffer::`vftable';
  *(_WORD *)&this->m_serviceId = 0;
  this->m_taskData = NULL;
  *(_QWORD *)&this->m_taskDataSize = 0i64;
  this->m_paddingSize = 0;
  if ( size )
  {
    this->m_paddingSize = 24;
    this->m_taskDataSize = size + 55;
    v6 = (unsigned __int8 *)bdMemory::allocate(size + 55);
    this->m_taskData = v6;
    m_data = v6 + 31;
    this->m_data = m_data;
    this->m_validHeaderSize = 31;
    this->m_size = size;
  }
  this->m_writePtr = m_data;
  this->m_readPtr = m_data;
}

/*
==============
bdTaskByteBuffer::bdTaskByteBuffer
==============
*/
void bdTaskByteBuffer::bdTaskByteBuffer(bdTaskByteBuffer *this, const void *bytes, const unsigned int size, bool isTypeChecked)
{
  unsigned __int8 *m_data; 

  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdTaskByteBuffer_vtbl *)&bdByteBuffer::`vftable';
  this->m_size = 0;
  this->m_data = NULL;
  this->m_typeChecked = isTypeChecked;
  this->m_typeCheckedCopy = isTypeChecked;
  this->m_allocatedData = 0;
  bdHandleAssert(1, "m_data == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x31u, "Buffer already allocated. init() called twice?", -2i64);
  this->m_size = 0;
  m_data = this->m_data;
  this->m_writePtr = m_data;
  this->m_readPtr = m_data;
  this->__vftable = (bdTaskByteBuffer_vtbl *)&bdTaskByteBuffer::`vftable';
  *(_WORD *)&this->m_serviceId = 0;
  this->m_taskData = NULL;
  *(_QWORD *)&this->m_taskDataSize = 0i64;
  this->m_paddingSize = 0;
  if ( bytes )
  {
    bdTaskByteBuffer::setupTaskData(this, size);
    memcpy_0(this->m_data, bytes, size);
  }
}

/*
==============
bdTaskByteBuffer::~bdTaskByteBuffer
==============
*/
void bdTaskByteBuffer::~bdTaskByteBuffer(bdTaskByteBuffer *this)
{
  unsigned __int8 *m_taskData; 

  this->__vftable = (bdTaskByteBuffer_vtbl *)&bdTaskByteBuffer::`vftable';
  m_taskData = this->m_taskData;
  if ( m_taskData )
    bdMemory::deallocate(m_taskData);
  this->m_taskData = NULL;
  this->m_data = NULL;
  this->m_readPtr = NULL;
  this->m_writePtr = NULL;
  bdByteBuffer::~bdByteBuffer(this);
}

/*
==============
bdTaskByteBuffer::adjustPayload
==============
*/
void bdTaskByteBuffer::adjustPayload(bdTaskByteBuffer *this, void *payloadStart, unsigned int payloadSize)
{
  unsigned __int8 *m_taskData; 
  __int64 v5; 
  unsigned __int8 *v7; 
  bool v8; 
  unsigned __int8 *v9; 
  bool v10; 

  m_taskData = this->m_taskData;
  v5 = payloadSize;
  bdHandleAssert(m_taskData != NULL, "hasPayload", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdtaskbytebuffer.cpp", "bdTaskByteBuffer::adjustPayload", 0xA2u, "Adjusting on an instance with no payload.");
  v7 = this->m_taskData;
  v8 = payloadStart > v7 && payloadStart < &v7[this->m_taskDataSize];
  bdHandleAssert(v8, "payloadStartInBounds", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdtaskbytebuffer.cpp", "bdTaskByteBuffer::adjustPayload", 0xA5u, "Payload start not in bounds.");
  v9 = this->m_taskData;
  v10 = (char *)payloadStart + v5 > (char *)v9 && (char *)payloadStart + v5 <= (char *)&v9[this->m_taskDataSize];
  bdHandleAssert(v10, "payloadEndInBounds", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdtaskbytebuffer.cpp", "bdTaskByteBuffer::adjustPayload", 0xA9u, "Payload size puts it outside bounds.");
  if ( m_taskData && v8 && v10 )
  {
    this->m_data = (unsigned __int8 *)payloadStart;
    this->m_size = v5;
    this->m_writePtr = (unsigned __int8 *)payloadStart;
    this->m_readPtr = (unsigned __int8 *)payloadStart;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "core/taskbytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdtaskbytebuffer.cpp", "bdTaskByteBuffer::adjustPayload", 0xB4u, "Payload start and end out of bounds.");
  }
}

/*
==============
bdTaskByteBuffer::allocateBuffer
==============
*/
void bdTaskByteBuffer::allocateBuffer(bdTaskByteBuffer *this)
{
  if ( this->m_taskData )
    bdLogMessage(BD_LOG_WARNING, "warn/", "core/taskbytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdtaskbytebuffer.cpp", "bdTaskByteBuffer::allocateBuffer", 0x7Cu, "Buffer already allocated.");
  else
    bdTaskByteBuffer::setupTaskData(this, this->m_size);
}

/*
==============
bdTaskByteBuffer::deepCopy
==============
*/
_BOOL8 bdTaskByteBuffer::deepCopy(bdTaskByteBuffer *dst, const bdTaskByteBuffer *src)
{
  unsigned __int8 *v4; 
  unsigned int m_taskDataSize; 
  unsigned __int8 *m_taskData; 

  v4 = (unsigned __int8 *)bdMemory::allocate(src->m_taskDataSize);
  if ( v4 )
  {
    bdMemory::deallocate(dst->m_taskData);
    dst->m_size = src->m_size;
    dst->m_typeChecked = src->m_typeChecked;
    dst->m_typeCheckedCopy = src->m_typeCheckedCopy;
    m_taskDataSize = src->m_taskDataSize;
    dst->m_taskDataSize = m_taskDataSize;
    dst->m_validHeaderSize = src->m_validHeaderSize;
    dst->m_paddingSize = src->m_paddingSize;
    dst->m_taskData = v4;
    memcpy_0(v4, src->m_taskData, m_taskDataSize);
    m_taskData = dst->m_taskData;
    dst->m_data = &m_taskData[(unsigned __int64)(src->m_data - src->m_taskData)];
    dst->m_readPtr = &m_taskData[(unsigned __int64)(src->m_readPtr - src->m_taskData)];
    dst->m_writePtr = &m_taskData[(unsigned __int64)(src->m_writePtr - src->m_taskData)];
    dst->m_serviceId = src->m_serviceId;
    dst->m_taskId = src->m_taskId;
  }
  return v4 != NULL;
}

/*
==============
bdTaskByteBuffer::expand
==============
*/
char bdTaskByteBuffer::expand(bdTaskByteBuffer *this, unsigned int increaseSize)
{
  unsigned __int8 *m_taskData; 
  unsigned __int8 *m_data; 
  unsigned __int8 *m_readPtr; 
  unsigned __int8 *m_writePtr; 
  size_t m_taskDataSize; 
  unsigned int m_size; 
  unsigned __int8 *v10; 
  __int64 v12; 
  unsigned int m_paddingSize; 
  unsigned int m_validHeaderSize; 

  m_taskData = this->m_taskData;
  if ( m_taskData )
  {
    m_data = this->m_data;
    m_readPtr = this->m_readPtr;
    if ( m_readPtr < m_data || (m_writePtr = this->m_writePtr, m_writePtr < m_data) )
    {
      bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdtaskbytebuffer.cpp", "bdTaskByteBuffer::expand", 0xF0u, "bdTaskByteBuffer underflow; beginning of data is after read/write pointer positions.");
      return 0;
    }
    else
    {
      m_taskDataSize = this->m_taskDataSize;
      m_size = this->m_size;
      m_paddingSize = this->m_paddingSize;
      m_validHeaderSize = this->m_validHeaderSize;
      this->m_taskData = NULL;
      this->m_size = m_size + increaseSize;
      this->allocateBuffer(this);
      v10 = this->m_taskData;
      if ( v10 )
      {
        memcpy_0(v10, m_taskData, m_taskDataSize);
        this->m_readPtr += m_readPtr - m_data;
        this->m_writePtr += m_writePtr - m_data;
        bdMemory::deallocate(m_taskData);
        return 1;
      }
      else
      {
        this->m_paddingSize = m_paddingSize;
        this->m_validHeaderSize = m_validHeaderSize;
        this->m_data = m_data;
        this->m_taskDataSize = m_taskDataSize;
        this->m_taskData = m_taskData;
        this->m_size = m_size;
        this->m_readPtr = m_readPtr;
        this->m_writePtr = m_writePtr;
        bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdtaskbytebuffer.cpp", "bdTaskByteBuffer::expand", 0x125u, "Failed to allocate expanded task buffer.");
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "core/taskbytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdtaskbytebuffer.cpp", "bdTaskByteBuffer::expand", 0x128u, "Could not allocate new task buffer for expansion. Requested size = %u Bytes.", increaseSize + this->m_size);
        return 0;
      }
    }
  }
  else
  {
    bdLogMessage(BD_LOG_INFO, "info/", "core/taskbytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdtaskbytebuffer.cpp", "bdTaskByteBuffer::expand", 0x13Du, "Expanding unallocated buffer; allocating with %d Bytes.", increaseSize);
    this->m_size = increaseSize;
    bdTaskByteBuffer::setupTaskData(this, increaseSize);
    if ( this->m_taskData )
    {
      return 1;
    }
    else
    {
      bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdtaskbytebuffer.cpp", "bdTaskByteBuffer::expand", 0x147u, "Failed to allocate new task buffer.");
      LODWORD(v12) = this->m_size;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "core/taskbytebuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdtaskbytebuffer.cpp", "bdTaskByteBuffer::expand", 0x148u, "Could not allocate task buffer of size = %u Bytes.", v12);
      return 0;
    }
  }
}

/*
==============
bdTaskByteBuffer::getHeaderSize
==============
*/
__int64 bdTaskByteBuffer::getHeaderSize(bdTaskByteBuffer *this)
{
  return this->m_validHeaderSize;
}

/*
==============
bdTaskByteBuffer::getHeaderStart
==============
*/
unsigned __int8 *bdTaskByteBuffer::getHeaderStart(bdTaskByteBuffer *this)
{
  unsigned __int8 *m_taskData; 

  m_taskData = this->m_taskData;
  if ( m_taskData )
    return &m_taskData[31 - this->m_validHeaderSize];
  else
    return 0i64;
}

/*
==============
bdTaskByteBuffer::getPaddingSize
==============
*/
__int64 bdTaskByteBuffer::getPaddingSize(bdTaskByteBuffer *this)
{
  return this->m_paddingSize;
}

/*
==============
bdTaskByteBuffer::getPaddingStart
==============
*/
unsigned __int8 *bdTaskByteBuffer::getPaddingStart(bdTaskByteBuffer *this)
{
  if ( this->m_data )
    return &this->m_data[bdByteBuffer::getDataSize(this)];
  else
    return 0i64;
}

/*
==============
bdTaskByteBuffer::resizeToFit
==============
*/
void bdTaskByteBuffer::resizeToFit(bdTaskByteBuffer *this, unsigned int newDataSize)
{
  unsigned int m_size; 
  unsigned int m_taskDataSize; 
  __int64 v5; 
  unsigned int v6; 
  unsigned __int8 *m_taskData; 
  __int64 v8; 
  int v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *v11; 

  m_size = this->m_size;
  m_taskDataSize = this->m_taskDataSize;
  v5 = (unsigned int)(LODWORD(this->m_data) - LODWORD(this->m_taskData));
  v6 = newDataSize + m_taskDataSize - m_size;
  m_taskData = this->m_taskData;
  v8 = newDataSize;
  v9 = m_size + v5;
  v10 = (unsigned __int8 *)bdMemory::allocate(v6);
  this->m_taskDataSize = v6;
  this->m_taskData = v10;
  memcpy_0(v10, m_taskData, (unsigned int)v5);
  memcpy_0(&this->m_taskData[v5 + v8], &m_taskData[v9], m_taskDataSize - v9);
  v11 = &this->m_taskData[(unsigned int)v5];
  this->m_size = v8;
  this->m_data = v11;
  this->m_readPtr = v11;
  this->m_writePtr = v11;
  bdMemory::deallocate(m_taskData);
}

/*
==============
bdTaskByteBuffer::setHeaderSize
==============
*/
void bdTaskByteBuffer::setHeaderSize(bdTaskByteBuffer *this, unsigned int size)
{
  unsigned int v4; 

  bdHandleAssert(size <= 0x1F, "size <= maxHeaderSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdtaskbytebuffer.cpp", "bdTaskByteBuffer::setHeaderSize", 0x8Bu, "Invalid header size");
  v4 = 31;
  if ( size < 0x1F )
    v4 = size;
  this->m_validHeaderSize = v4;
}

/*
==============
bdTaskByteBuffer::setupTaskData
==============
*/
void bdTaskByteBuffer::setupTaskData(bdTaskByteBuffer *this, unsigned int size)
{
  unsigned __int8 *v4; 
  unsigned __int8 *m_data; 

  if ( size )
  {
    this->m_paddingSize = 24;
    this->m_taskDataSize = size + 55;
    v4 = (unsigned __int8 *)bdMemory::allocate(size + 55);
    this->m_taskData = v4;
    v4 += 31;
    this->m_data = v4;
    this->m_writePtr = v4;
    this->m_readPtr = v4;
    this->m_validHeaderSize = 31;
    this->m_size = size;
  }
  else
  {
    m_data = this->m_data;
    this->m_writePtr = m_data;
    this->m_readPtr = m_data;
  }
}

