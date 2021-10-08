/*
==============
bdValidatedContextUserStorageFileInfo::sizeOf
==============
*/

unsigned int __fastcall bdValidatedContextUserStorageFileInfo::sizeOf(bdValidatedContextUserStorageFileInfo *this)
{
  return ?sizeOf@bdValidatedContextUserStorageFileInfo@@UEAAIXZ(this);
}

/*
==============
bdValidatedContextUserStorageFileInfo::getValidationTokenSize
==============
*/

unsigned int __fastcall bdValidatedContextUserStorageFileInfo::getValidationTokenSize(bdValidatedContextUserStorageFileInfo *this)
{
  return ?getValidationTokenSize@bdValidatedContextUserStorageFileInfo@@QEBAIXZ(this);
}

/*
==============
bdValidatedContextUserStorageFileInfo::getValidationTokenResult
==============
*/

bdValidationTokenResult *__fastcall bdValidatedContextUserStorageFileInfo::getValidationTokenResult(bdValidatedContextUserStorageFileInfo *this, bdValidationTokenResult *result)
{
  return ?getValidationTokenResult@bdValidatedContextUserStorageFileInfo@@QEBA?AVbdValidationTokenResult@@XZ(this, result);
}

/*
==============
bdValidatedContextUserStorageFileInfo::getValidationToken
==============
*/

const unsigned __int8 *__fastcall bdValidatedContextUserStorageFileInfo::getValidationToken(bdValidatedContextUserStorageFileInfo *this)
{
  return ?getValidationToken@bdValidatedContextUserStorageFileInfo@@QEBAPEBEXZ(this);
}

/*
==============
bdValidatedContextUserStorageFileInfo::deserialize
==============
*/

bool __fastcall bdValidatedContextUserStorageFileInfo::deserialize(bdValidatedContextUserStorageFileInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdValidatedContextUserStorageFileInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdValidatedContextUserStorageFileInfo::~bdValidatedContextUserStorageFileInfo
==============
*/

void __fastcall bdValidatedContextUserStorageFileInfo::~bdValidatedContextUserStorageFileInfo(bdValidatedContextUserStorageFileInfo *this)
{
  ??1bdValidatedContextUserStorageFileInfo@@UEAA@XZ(this);
}

/*
==============
bdValidatedContextUserStorageFileInfo::bdValidatedContextUserStorageFileInfo
==============
*/

void __fastcall bdValidatedContextUserStorageFileInfo::bdValidatedContextUserStorageFileInfo(bdValidatedContextUserStorageFileInfo *this)
{
  ??0bdValidatedContextUserStorageFileInfo@@QEAA@XZ(this);
}

/*
==============
bdValidatedContextUserStorageFileInfo::bdValidatedContextUserStorageFileInfo
==============
*/
void bdValidatedContextUserStorageFileInfo::bdValidatedContextUserStorageFileInfo(bdValidatedContextUserStorageFileInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdValidatedContextUserStorageFileInfo::`vbtable';
    *(_QWORD *)(&this->m_validationTokenSize + 1) = &bdReferencable::`vftable';
    *(&this->m_validationTokenSize + 3) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdValidatedContextUserStorageFileInfo_vtbl *)&bdValidatedContextUserStorageFileInfo::`vftable'{for `bdTaskResult'};
  *(bdValidatedContextUserStorageFileInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdValidatedContextUserStorageFileInfo_vtbl *)&bdValidatedContextUserStorageFileInfo::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_DWORD *)&this->__vftable + 6) = 2;
  bdUserAccountID::bdUserAccountID(&this->m_ownerID);
  this->m_fileSize = 0;
  this->m_validationTokenSize = 0;
  memset_0(this->m_fileName, 0, sizeof(this->m_fileName));
  memset_0(this->m_validationToken, 0, sizeof(this->m_validationToken));
}

/*
==============
bdValidatedContextUserStorageFileInfo::~bdValidatedContextUserStorageFileInfo
==============
*/
void bdValidatedContextUserStorageFileInfo::~bdValidatedContextUserStorageFileInfo(bdValidatedContextUserStorageFileInfo *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdValidatedContextUserStorageFileInfo::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 10472) = &bdValidatedContextUserStorageFileInfo::`vftable'{for `bdReferencable'};
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)this[-1].m_fileName);
  bdReferencable::~bdReferencable((bdReferencable *)this[-1].m_fileName);
  bdTaskResult::~bdTaskResult((bdValidatedContextUserStorageFileInfo *)((char *)this - 10464));
}

/*
==============
bdValidatedContextUserStorageFileInfo::deserialize
==============
*/
__int64 bdValidatedContextUserStorageFileInfo::deserialize(bdValidatedContextUserStorageFileInfo *this, bdReference<bdByteBuffer> buffer)
{
  char v4; 
  bdByteBuffer *v5; 
  unsigned __int8 v6; 
  bdReference<bdByteBuffer> buffera; 
  __int64 v9; 
  bool b; 
  unsigned int length; 

  v9 = -2i64;
  if ( !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_fileSize) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 4) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 5) )
  {
    b = 0;
    goto LABEL_7;
  }
  b = 0;
  if ( !bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, &b) )
  {
LABEL_7:
    v4 = 0;
    goto LABEL_8;
  }
  v4 = 1;
LABEL_8:
  *((_DWORD *)&this->__vftable + 6) = b;
  if ( !v4 )
    goto LABEL_15;
  v5 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  if ( !ContextSerialization::readUserID((bdReference<bdByteBuffer>)&buffera, &this->m_ownerID) || !bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_fileName, 0x80ui64) )
  {
LABEL_15:
    length = 10240;
    goto LABEL_16;
  }
  length = 10240;
  if ( !bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_validationToken, &length) )
  {
LABEL_16:
    v6 = 0;
    goto LABEL_17;
  }
  v6 = 1;
  this->m_validationTokenSize = length;
LABEL_17:
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v6;
}

/*
==============
bdValidatedContextUserStorageFileInfo::getValidationToken
==============
*/
unsigned __int8 *bdValidatedContextUserStorageFileInfo::getValidationToken(bdValidatedContextUserStorageFileInfo *this)
{
  return this->m_validationToken;
}

/*
==============
bdValidatedContextUserStorageFileInfo::getValidationTokenResult
==============
*/
bdValidationTokenResult *bdValidatedContextUserStorageFileInfo::getValidationTokenResult(bdValidatedContextUserStorageFileInfo *this, bdValidationTokenResult *result)
{
  unsigned int m_validationTokenSize; 
  bdValidationTokenResult Src; 

  bdValidationTokenResult::bdValidationTokenResult(&Src);
  m_validationTokenSize = 10240;
  if ( this->m_validationTokenSize < 0x2800 )
    m_validationTokenSize = this->m_validationTokenSize;
  Src.m_validationTokenSize = m_validationTokenSize;
  memcpy_0(Src.m_validationToken, this->m_validationToken, m_validationTokenSize);
  *((_QWORD *)&result->__vftable + 1) = &bdValidationTokenResult::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&result->gap2824[4], (const bdReferencable *)&Src.m_validationToken[*(int *)(*((_QWORD *)&Src.__vftable + 1) + 4i64) - 24]);
  bdTaskResult::bdTaskResult(result, &Src);
  result->__vftable = (bdValidationTokenResult_vtbl *)&bdValidationTokenResult::`vftable'{for `bdTaskResult'};
  *(bdValidationTokenResult_vtbl **)((char *)&result->__vftable + *(int *)(*((_QWORD *)&result->__vftable + 1) + 4i64) + 8) = (bdValidationTokenResult_vtbl *)&bdValidationTokenResult::`vftable'{for `bdReferencable'};
  *((_QWORD *)&result->__vftable + 2) = *((_QWORD *)&Src.__vftable + 2);
  *((_QWORD *)&result->__vftable + 3) = *((_QWORD *)&Src.__vftable + 3);
  memcpy_0(result->m_validationToken, Src.m_validationToken, sizeof(result->m_validationToken));
  result->m_validationTokenSize = Src.m_validationTokenSize;
  bdValidationTokenResult::~bdValidationTokenResult((bdValidationTokenResult *)&Src.gap2824[4]);
  bdReferencable::~bdReferencable((bdReferencable *)&Src.gap2824[4]);
  return result;
}

/*
==============
bdValidatedContextUserStorageFileInfo::getValidationTokenSize
==============
*/
__int64 bdValidatedContextUserStorageFileInfo::getValidationTokenSize(bdValidatedContextUserStorageFileInfo *this)
{
  return this->m_validationTokenSize;
}

/*
==============
bdValidatedContextUserStorageFileInfo::sizeOf
==============
*/
__int64 bdValidatedContextUserStorageFileInfo::sizeOf(bdValidatedContextUserStorageFileInfo *this)
{
  return 10496i64;
}

