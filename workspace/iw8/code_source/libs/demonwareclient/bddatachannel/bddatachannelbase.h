/*
==============
bdDataChannelBase::bdDataChannelPacket::operator delete
==============
*/

void __fastcall bdDataChannelBase::bdDataChannelPacket::operator delete(void *p)
{
  ??3bdDataChannelPacket@bdDataChannelBase@@SAXPEAX@Z(p);
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::~bdDataChannelPacket
==============
*/

void __fastcall bdDataChannelBase::bdDataChannelPacket::~bdDataChannelPacket(bdDataChannelBase::bdDataChannelPacket *this)
{
  ??1bdDataChannelPacket@bdDataChannelBase@@UEAA@XZ(this);
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::bdDataChannelPacket
==============
*/

void __fastcall bdDataChannelBase::bdDataChannelPacket::bdDataChannelPacket(bdDataChannelBase::bdDataChannelPacket *this, bdReference<bdDataChannelTask> taskRef, const unsigned __int8 *bufferData, unsigned int bufferSize)
{
  ??0bdDataChannelPacket@bdDataChannelBase@@QEAA@V?$bdReference@VbdDataChannelTask@@@@PEBEI@Z(this, taskRef, bufferData, bufferSize);
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::~bdDataChannelPacket
==============
*/
void bdDataChannelBase::bdDataChannelPacket::~bdDataChannelPacket(bdDataChannelBase::bdDataChannelPacket *this)
{
  bdDataChannelTask *m_ptr; 
  bdDataChannelTask *v3; 

  this->__vftable = (bdDataChannelBase::bdDataChannelPacket_vtbl *)&bdDataChannelBase::bdDataChannelPacket::`vftable';
  bdByteBuffer::~bdByteBuffer(&this->m_data);
  m_ptr = this->m_task.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_task.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdDataChannelTask *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_task.m_ptr = NULL;
  }
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::bdDataChannelPacket
==============
*/
void bdDataChannelBase::bdDataChannelPacket::bdDataChannelPacket(bdDataChannelBase::bdDataChannelPacket *this, bdReference<bdDataChannelTask> taskRef, const unsigned __int8 *bufferData, unsigned int bufferSize)
{
  size_t v4; 
  bdDataChannelTask_vtbl *v8; 

  v4 = bufferSize;
  this->__vftable = (bdDataChannelBase::bdDataChannelPacket_vtbl *)&bdDataChannelBase::bdDataChannelPacket::`vftable';
  v8 = taskRef.m_ptr->__vftable;
  this->m_task.m_ptr = (bdDataChannelTask *)taskRef.m_ptr->__vftable;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->getStatus, 1u);
  this->m_data.m_refCount.m_value._My_val = 0;
  this->m_data.__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
  this->m_data.m_size = bufferSize;
  this->m_data.m_data = NULL;
  *(_WORD *)&this->m_data.m_typeChecked = 0;
  this->m_data.m_allocatedData = 0;
  if ( bufferData )
  {
    bdByteBuffer::init(&this->m_data, bufferSize);
    memcpy_0(this->m_data.m_data, bufferData, v4);
  }
  else
  {
    bdHandleAssert(0, "bytesToCopy != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x41u, "Buffer bytestToCopy should not be null", -2i64);
  }
  this->m_retries = 0;
  this->m_nextRetryTime = 0i64;
  if ( taskRef.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&taskRef.m_ptr->getStatus, 0xFFFFFFFF) == 1 )
  {
    if ( taskRef.m_ptr->__vftable )
      (*(void (__fastcall **)(bdDataChannelTask_vtbl *, __int64))taskRef.m_ptr->~bdReferencable)(taskRef.m_ptr->__vftable, 1i64);
    taskRef.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::operator delete
==============
*/
void bdDataChannelBase::bdDataChannelPacket::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

