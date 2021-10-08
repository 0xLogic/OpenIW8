/*
==============
bdFileInfo::deserialize
==============
*/

bool __fastcall bdFileInfo::deserialize(bdFileInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdFileInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdFileInfo::sizeOf
==============
*/

unsigned int __fastcall bdFileInfo::sizeOf(bdFileInfo *this)
{
  return ?sizeOf@bdFileInfo@@UEAAIXZ(this);
}

/*
==============
bdFileInfo::reset
==============
*/

void __fastcall bdFileInfo::reset(bdFileInfo *this)
{
  ?reset@bdFileInfo@@QEAAXXZ(this);
}

/*
==============
bdFileInfo::bdFileInfo
==============
*/

void __fastcall bdFileInfo::bdFileInfo(bdFileInfo *this)
{
  ??0bdFileInfo@@QEAA@XZ(this);
}

/*
==============
bdFileInfo::~bdFileInfo
==============
*/

void __fastcall bdFileInfo::~bdFileInfo(bdFileInfo *this)
{
  ??1bdFileInfo@@UEAA@XZ(this);
}

/*
==============
bdFileInfo::bdFileInfo
==============
*/
void bdFileInfo::bdFileInfo(bdFileInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdFileInfo::`vbtable';
    *(_QWORD *)&this->gapE6[2] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapE6[10] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdFileInfo_vtbl *)&bdFileInfo::`vftable'{for `bdTaskResult'};
  *(bdFileInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdFileInfo_vtbl *)&bdFileInfo::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_visibility = BD_MAX_VISIBILITY_TYPE;
  this->m_ownerID = 0i64;
  this->m_fileSize = 0;
  memset_0(this->m_fileName, 0, sizeof(this->m_fileName));
  *(_QWORD *)this->m_fileChecksum = 0i64;
  *(_QWORD *)&this->m_fileChecksum[8] = 0i64;
  *(_QWORD *)&this->m_fileChecksum[16] = 0i64;
  *(_QWORD *)&this->m_fileChecksum[24] = 0i64;
  *(_QWORD *)&this->m_fileChecksum[32] = 0i64;
  *(_QWORD *)&this->m_fileChecksum[40] = 0i64;
  *(_WORD *)&this->m_fileChecksum[48] = 0;
}

/*
==============
bdFileInfo::~bdFileInfo
==============
*/
void bdFileInfo::~bdFileInfo(bdFileInfo *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdFileInfo::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 224) = &bdFileInfo::`vftable'{for `bdReferencable'};
  bdTaskResult::~bdTaskResult((bdFileInfo *)((char *)this - 216));
}

/*
==============
bdFileInfo::deserialize
==============
*/
_BOOL8 bdFileInfo::deserialize(bdFileInfo *this, bdReference<bdByteBuffer> buffer)
{
  char v4; 
  bool v5; 
  bool b; 

  if ( !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_fileSize) || !bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->__vftable + 2) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 6) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 7) )
  {
    b = 0;
    goto LABEL_8;
  }
  b = 0;
  if ( !bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, &b) )
  {
LABEL_8:
    v4 = 0;
    goto LABEL_9;
  }
  v4 = 1;
LABEL_9:
  this->m_visibility = b;
  v5 = v4 && bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_ownerID) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_fileName, 0x80ui64) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_fileChecksum, 0x32ui64);
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
bdFileInfo::reset
==============
*/
void bdFileInfo::reset(bdFileInfo *this)
{
  this->m_visibility = BD_MAX_VISIBILITY_TYPE;
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_ownerID = 0i64;
  this->m_fileSize = 0;
  memset_0(this->m_fileName, 0, sizeof(this->m_fileName));
  *(_QWORD *)this->m_fileChecksum = 0i64;
  *(_QWORD *)&this->m_fileChecksum[8] = 0i64;
  *(_QWORD *)&this->m_fileChecksum[16] = 0i64;
  *(_QWORD *)&this->m_fileChecksum[24] = 0i64;
  *(_QWORD *)&this->m_fileChecksum[32] = 0i64;
  *(_QWORD *)&this->m_fileChecksum[40] = 0i64;
  *(_WORD *)&this->m_fileChecksum[48] = 0;
}

/*
==============
bdFileInfo::sizeOf
==============
*/
__int64 bdFileInfo::sizeOf(bdFileInfo *this)
{
  return 248i64;
}

