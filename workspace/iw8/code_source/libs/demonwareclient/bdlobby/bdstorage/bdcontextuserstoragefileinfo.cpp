/*
==============
bdContextUserStorageFileInfo::bdContextUserStorageFileInfo
==============
*/

void __fastcall bdContextUserStorageFileInfo::bdContextUserStorageFileInfo(bdContextUserStorageFileInfo *this)
{
  ??0bdContextUserStorageFileInfo@@QEAA@XZ(this);
}

/*
==============
bdContextUserStorageFileInfo::~bdContextUserStorageFileInfo
==============
*/

void __fastcall bdContextUserStorageFileInfo::~bdContextUserStorageFileInfo(bdContextUserStorageFileInfo *this)
{
  ??1bdContextUserStorageFileInfo@@UEAA@XZ(this);
}

/*
==============
bdContextUserStorageFileInfo::deserialize
==============
*/

bool __fastcall bdContextUserStorageFileInfo::deserialize(bdContextUserStorageFileInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdContextUserStorageFileInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdContextUserStorageFileInfo::sizeOf
==============
*/

unsigned int __fastcall bdContextUserStorageFileInfo::sizeOf(bdContextUserStorageFileInfo *this)
{
  return ?sizeOf@bdContextUserStorageFileInfo@@UEAAIXZ(this);
}

/*
==============
bdContextUserStorageFileInfo::bdContextUserStorageFileInfo
==============
*/
void bdContextUserStorageFileInfo::bdContextUserStorageFileInfo(bdContextUserStorageFileInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdContextUserStorageFileInfo::`vbtable';
    *((_QWORD *)&this->m_fileSize + 1) = &bdReferencable::`vftable';
    *(&this->m_fileSize + 4) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdContextUserStorageFileInfo_vtbl *)&bdContextUserStorageFileInfo::`vftable'{for `bdTaskResult'};
  *(bdContextUserStorageFileInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdContextUserStorageFileInfo_vtbl *)&bdContextUserStorageFileInfo::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_DWORD *)&this->__vftable + 6) = 2;
  bdUserAccountID::bdUserAccountID(&this->m_ownerID);
  this->m_fileSize = 0;
  memset_0(this->m_fileName, 0, sizeof(this->m_fileName));
}

/*
==============
bdContextUserStorageFileInfo::~bdContextUserStorageFileInfo
==============
*/
void bdContextUserStorageFileInfo::~bdContextUserStorageFileInfo(bdContextUserStorageFileInfo *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdContextUserStorageFileInfo::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 232) = &bdContextUserStorageFileInfo::`vftable'{for `bdReferencable'};
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)this[-1].m_fileName);
  bdReferencable::~bdReferencable((bdReferencable *)this[-1].m_fileName);
  bdTaskResult::~bdTaskResult((bdContextUserStorageFileInfo *)((char *)this - 224));
}

/*
==============
bdContextUserStorageFileInfo::deserialize
==============
*/
__int64 bdContextUserStorageFileInfo::deserialize(bdContextUserStorageFileInfo *this, bdReference<bdByteBuffer> buffer)
{
  char v4; 
  bdByteBuffer *v5; 
  unsigned __int8 v6; 
  bool b; 
  bdReference<bdByteBuffer> buffera; 

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
    goto LABEL_14;
  v5 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  if ( ContextSerialization::readUserID((bdReference<bdByteBuffer>)&buffera, &this->m_ownerID) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_fileName, 0x80ui64) )
    v6 = 1;
  else
LABEL_14:
    v6 = 0;
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
bdContextUserStorageFileInfo::sizeOf
==============
*/
__int64 bdContextUserStorageFileInfo::sizeOf(bdContextUserStorageFileInfo *this)
{
  return 256i64;
}

