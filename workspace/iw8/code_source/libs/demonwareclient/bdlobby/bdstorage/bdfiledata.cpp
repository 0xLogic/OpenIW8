/*
==============
bdFileData::~bdFileData
==============
*/

void __fastcall bdFileData::~bdFileData(bdFileData *this)
{
  ??1bdFileData@@UEAA@XZ(this);
}

/*
==============
bdFileData::deserialize
==============
*/

bool __fastcall bdFileData::deserialize(bdFileData *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdFileData@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdFileData::bdFileData
==============
*/

void __fastcall bdFileData::bdFileData(bdFileData *this)
{
  ??0bdFileData@@QEAA@XZ(this);
}

/*
==============
bdFileData::sizeOf
==============
*/

unsigned int __fastcall bdFileData::sizeOf(bdFileData *this)
{
  return ?sizeOf@bdFileData@@UEAAIXZ(this);
}

/*
==============
bdFileData::bdFileData
==============
*/

void __fastcall bdFileData::bdFileData(bdFileData *this, void *fileData, unsigned int fileSize)
{
  ??0bdFileData@@QEAA@PEAXI@Z(this, fileData, fileSize);
}

/*
==============
bdFileData::bdFileData
==============
*/
void bdFileData::bdFileData(bdFileData *this, void *fileData, unsigned int fileSize, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdFileData::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdFileData_vtbl *)&bdFileData::`vftable'{for `bdTaskResult'};
  *(bdFileData_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdFileData_vtbl *)&bdFileData::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = fileData;
  *((_DWORD *)&this->__vftable + 6) = fileSize;
}

/*
==============
bdFileData::bdFileData
==============
*/
void bdFileData::bdFileData(bdFileData *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdFileData::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdFileData_vtbl *)&bdFileData::`vftable'{for `bdTaskResult'};
  *(bdFileData_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdFileData_vtbl *)&bdFileData::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_DWORD *)&this->__vftable + 6) = 0;
}

/*
==============
bdFileData::~bdFileData
==============
*/
void bdFileData::~bdFileData(bdFileData *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdFileData::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 24) = &bdFileData::`vftable'{for `bdReferencable'};
  bdTaskResult::~bdTaskResult((bdFileData *)((char *)this - 16));
}

/*
==============
bdFileData::deserialize
==============
*/
_BOOL8 bdFileData::deserialize(bdFileData *this, bdReference<bdByteBuffer> buffer)
{
  bool Blob; 

  Blob = bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, *((unsigned __int8 *const *)&this->__vftable + 2), (unsigned int *)&this->__vftable + 6);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return Blob;
}

/*
==============
bdFileData::sizeOf
==============
*/
__int64 bdFileData::sizeOf(bdFileData *this)
{
  return 48i64;
}

