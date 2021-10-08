/*
==============
bdFileQueryResult::deserialize
==============
*/

bool __fastcall bdFileQueryResult::deserialize(bdFileQueryResult *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdFileQueryResult@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdFileQueryResult::bdFileQueryResult
==============
*/

void __fastcall bdFileQueryResult::bdFileQueryResult(bdFileQueryResult *this, void *fileData, unsigned int fileSize)
{
  ??0bdFileQueryResult@@QEAA@PEAXI@Z(this, fileData, fileSize);
}

/*
==============
bdFileQueryResult::~bdFileQueryResult
==============
*/

void __fastcall bdFileQueryResult::~bdFileQueryResult(bdFileQueryResult *this)
{
  ??1bdFileQueryResult@@UEAA@XZ(this);
}

/*
==============
bdFileQueryResult::bdFileQueryResult
==============
*/

void __fastcall bdFileQueryResult::bdFileQueryResult(bdFileQueryResult *this)
{
  ??0bdFileQueryResult@@QEAA@XZ(this);
}

/*
==============
bdFileQueryResult::sizeOf
==============
*/

unsigned int __fastcall bdFileQueryResult::sizeOf(bdFileQueryResult *this)
{
  return ?sizeOf@bdFileQueryResult@@UEAAIXZ(this);
}

/*
==============
bdFileQueryResult::bdFileQueryResult
==============
*/
void bdFileQueryResult::bdFileQueryResult(bdFileQueryResult *this, void *fileData, unsigned int fileSize, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdFileQueryResult::`vbtable';
    *(_QWORD *)this->gapE8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapE8[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdFileQueryResult_vtbl *)&bdFileQueryResult::`vftable'{for `bdTaskResult'};
  *(bdFileQueryResult_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdFileQueryResult_vtbl *)&bdFileQueryResult::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)(&this->__vftable + 2));
  this->m_fileData = fileData;
  this->m_fileSize = fileSize;
  this->m_errorCode = 0;
  memset_0(this->m_fileName, 0, sizeof(this->m_fileName));
}

/*
==============
bdFileQueryResult::bdFileQueryResult
==============
*/
void bdFileQueryResult::bdFileQueryResult(bdFileQueryResult *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdFileQueryResult::`vbtable';
    *(_QWORD *)this->gapE8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapE8[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdFileQueryResult_vtbl *)&bdFileQueryResult::`vftable'{for `bdTaskResult'};
  *(bdFileQueryResult_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdFileQueryResult_vtbl *)&bdFileQueryResult::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)(&this->__vftable + 2));
  this->m_fileData = NULL;
  *(_QWORD *)&this->m_fileSize = 0i64;
  memset_0(this->m_fileName, 0, sizeof(this->m_fileName));
}

/*
==============
bdFileQueryResult::~bdFileQueryResult
==============
*/
void bdFileQueryResult::~bdFileQueryResult(bdFileQueryResult *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdFileQueryResult::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 224) = &bdFileQueryResult::`vftable'{for `bdReferencable'};
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)this[-1].m_fileName);
  bdReferencable::~bdReferencable((bdReferencable *)this[-1].m_fileName);
  bdTaskResult::~bdTaskResult((bdFileQueryResult *)((char *)this - 216));
}

/*
==============
bdFileQueryResult::deserialize
==============
*/
_BOOL8 bdFileQueryResult::deserialize(bdFileQueryResult *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  bool v5; 
  bdReference<bdByteBuffer> buffera; 

  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  v5 = ContextSerialization::readUserID((bdReference<bdByteBuffer>)&buffera, (bdUserAccountID *)(&this->__vftable + 2)) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_fileName, 0x80ui64) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_errorCode) && bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int8 *const)this->m_fileData, &this->m_fileSize);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v5;
}

/*
==============
bdFileQueryResult::sizeOf
==============
*/
__int64 bdFileQueryResult::sizeOf(bdFileQueryResult *this)
{
  return 248i64;
}

