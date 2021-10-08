/*
==============
bdMailBody::sizeOf
==============
*/

unsigned int __fastcall bdMailBody::sizeOf(bdMailBody *this)
{
  return ?sizeOf@bdMailBody@@UEAAIXZ(this);
}

/*
==============
bdMailBody::~bdMailBody
==============
*/

void __fastcall bdMailBody::~bdMailBody(bdMailBody *this)
{
  ??1bdMailBody@@UEAA@XZ(this);
}

/*
==============
bdMailBody::bdMailBody
==============
*/

void __fastcall bdMailBody::bdMailBody(bdMailBody *this, void *mailBody, const unsigned int size)
{
  ??0bdMailBody@@QEAA@PEAXI@Z(this, mailBody, size);
}

/*
==============
bdMailBody::bdMailBody
==============
*/

void __fastcall bdMailBody::bdMailBody(bdMailBody *this)
{
  ??0bdMailBody@@QEAA@XZ(this);
}

/*
==============
bdMailBody::deserialize
==============
*/

bool __fastcall bdMailBody::deserialize(bdMailBody *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMailBody@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMailBody::bdMailBody
==============
*/
void bdMailBody::bdMailBody(bdMailBody *this, void *mailBody, const unsigned int size, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMailBody::`vbtable';
    *(_QWORD *)this->gap28 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap28[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdMailBody_vtbl *)&bdMailBody::`vftable'{for `bdTaskResult'};
  *(bdMailBody_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMailBody_vtbl *)&bdMailBody::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = mailBody;
  *((_DWORD *)&this->__vftable + 6) = size;
  this->m_mailID = 0i64;
}

/*
==============
bdMailBody::bdMailBody
==============
*/
void bdMailBody::bdMailBody(bdMailBody *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMailBody::`vbtable';
    *(_QWORD *)this->gap28 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap28[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdMailBody_vtbl *)&bdMailBody::`vftable'{for `bdTaskResult'};
  *(bdMailBody_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMailBody_vtbl *)&bdMailBody::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_DWORD *)&this->__vftable + 6) = 0;
  this->m_mailID = 0i64;
}

/*
==============
bdMailBody::~bdMailBody
==============
*/
void bdMailBody::~bdMailBody(bdMailBody *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdMailBody::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 32) = &bdMailBody::`vftable'{for `bdReferencable'};
  bdTaskResult::~bdTaskResult((bdMailBody *)((char *)this - 24));
}

/*
==============
bdMailBody::deserialize
==============
*/
_BOOL8 bdMailBody::deserialize(bdMailBody *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  v4 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_mailID) && bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, *((unsigned __int8 *const *)&this->__vftable + 2), (unsigned int *)&this->__vftable + 6);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v4;
}

/*
==============
bdMailBody::sizeOf
==============
*/
__int64 bdMailBody::sizeOf(bdMailBody *this)
{
  return 56i64;
}

