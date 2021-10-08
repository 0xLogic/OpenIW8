/*
==============
bdByteBuffer::bdByteBuffer
==============
*/

void __fastcall bdByteBuffer::bdByteBuffer(bdByteBuffer *this, const unsigned int size, bool isTypeChecked)
{
  ??0bdByteBuffer@@QEAA@I_N@Z(this, size, isTypeChecked);
}

/*
==============
bdByteBuffer::init
==============
*/

void __fastcall bdByteBuffer::init(bdByteBuffer *this, const unsigned int size)
{
  ?init@bdByteBuffer@@QEAAXI@Z(this, size);
}

/*
==============
bdByteBuffer::init
==============
*/
void bdByteBuffer::init(bdByteBuffer *this, const unsigned int size)
{
  unsigned __int8 *m_data; 

  bdHandleAssert(this->m_data == NULL, "m_data == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x31u, "Buffer already allocated. init() called twice?");
  this->m_size = size;
  if ( size )
    this->allocateBuffer(this);
  m_data = this->m_data;
  this->m_writePtr = m_data;
  this->m_readPtr = m_data;
}

/*
==============
bdByteBuffer::bdByteBuffer
==============
*/
void bdByteBuffer::bdByteBuffer(bdByteBuffer *this, const unsigned int size, bool isTypeChecked)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
  this->m_size = size;
  this->m_data = NULL;
  this->m_typeChecked = isTypeChecked;
  this->m_typeCheckedCopy = isTypeChecked;
  this->m_allocatedData = 0;
  bdByteBuffer::init(this, size);
}

