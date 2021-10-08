/*
==============
bdPreCopyResult::reset
==============
*/

void __fastcall bdPreCopyResult::reset(bdPreCopyResult *this)
{
  ?reset@bdPreCopyResult@@IEAAXXZ(this);
}

/*
==============
bdPreCopyResult::sizeOf
==============
*/

unsigned int __fastcall bdPreCopyResult::sizeOf(bdPreCopyResult *this)
{
  return ?sizeOf@bdPreCopyResult@@UEAAIXZ(this);
}

/*
==============
bdPreCopyResult::deserialize
==============
*/

bool __fastcall bdPreCopyResult::deserialize(bdPreCopyResult *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdPreCopyResult@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdPreCopyResult::bdPreCopyResult
==============
*/

void __fastcall bdPreCopyResult::bdPreCopyResult(bdPreCopyResult *this)
{
  ??0bdPreCopyResult@@QEAA@XZ(this);
}

/*
==============
bdPreCopyResult::~bdPreCopyResult
==============
*/

void __fastcall bdPreCopyResult::~bdPreCopyResult(bdPreCopyResult *this)
{
  ??1bdPreCopyResult@@UEAA@XZ(this);
}

/*
==============
bdPreCopyResult::bdPreCopyResult
==============
*/
void bdPreCopyResult::bdPreCopyResult(bdPreCopyResult *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdPreCopyResult::`vbtable';
    *(_QWORD *)&this->gap8C4[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap8C4[12] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdPreCopyResult_vtbl *)&bdPreCopyResult::`vftable'{for `bdTaskResult'};
  *(bdPreCopyResult_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdPreCopyResult_vtbl *)&bdPreCopyResult::`vftable'{for `bdReferencable'};
  bdURL::bdURL((bdURL *)(&this->__vftable + 2));
  this->m_destination[0] = 0;
  this->m_fileSize = 0;
}

/*
==============
bdPreCopyResult::~bdPreCopyResult
==============
*/
void bdPreCopyResult::~bdPreCopyResult(bdPreCopyResult *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdPreCopyResult::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 2240) = &bdPreCopyResult::`vftable'{for `bdReferencable'};
  bdURL::~bdURL((bdURL *)this[-1].m_destination);
  bdReferencable::~bdReferencable((bdReferencable *)this[-1].m_destination);
  bdTaskResult::~bdTaskResult((bdPreCopyResult *)((char *)this - 2232));
}

/*
==============
bdPreCopyResult::deserialize
==============
*/
_BOOL8 bdPreCopyResult::deserialize(bdPreCopyResult *this, bdReference<bdByteBuffer> buffer)
{
  char *m_destination; 
  unsigned int *p_m_fileSize; 
  bdPreCopyResult_vtbl **v5; 
  bool (__fastcall *deserialize)(bdTaskResult *, bdReference<bdByteBuffer>); 
  bdByteBuffer_vtbl *v7; 
  bool v8; 
  bdByteBuffer_vtbl *v10; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  m_destination = this->m_destination;
  this->m_destination[0] = 0;
  p_m_fileSize = &this->m_fileSize;
  this->m_fileSize = 0;
  v5 = &this->__vftable + 2;
  deserialize = (*v5)->deserialize;
  v7 = buffer.m_ptr->__vftable;
  v10 = v7;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->allocateBuffer, 1u);
  v8 = ((unsigned __int8 (__fastcall *)(bdPreCopyResult_vtbl **, bdByteBuffer_vtbl **))deserialize)(v5, &v10) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, m_destination, 0x400ui64) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, p_m_fileSize);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v8;
}

/*
==============
bdPreCopyResult::reset
==============
*/
void bdPreCopyResult::reset(bdPreCopyResult *this)
{
  this->m_destination[0] = 0;
  this->m_fileSize = 0;
}

/*
==============
bdPreCopyResult::sizeOf
==============
*/
__int64 bdPreCopyResult::sizeOf(bdPreCopyResult *this)
{
  return 2264i64;
}

