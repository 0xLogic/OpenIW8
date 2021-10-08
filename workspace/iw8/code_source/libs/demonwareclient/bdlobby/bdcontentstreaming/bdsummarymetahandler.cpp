/*
==============
bdSummaryMetaHandler::bdSummaryMetaHandler
==============
*/

void __fastcall bdSummaryMetaHandler::bdSummaryMetaHandler(bdSummaryMetaHandler *this)
{
  ??0bdSummaryMetaHandler@@QEAA@XZ(this);
}

/*
==============
bdSummaryMetaHandler::deserialize
==============
*/

bool __fastcall bdSummaryMetaHandler::deserialize(bdSummaryMetaHandler *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdSummaryMetaHandler@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdSummaryMetaHandler::~bdSummaryMetaHandler
==============
*/

void __fastcall bdSummaryMetaHandler::~bdSummaryMetaHandler(bdSummaryMetaHandler *this)
{
  ??1bdSummaryMetaHandler@@UEAA@XZ(this);
}

/*
==============
bdSummaryMetaHandler::sizeOf
==============
*/

unsigned int __fastcall bdSummaryMetaHandler::sizeOf(bdSummaryMetaHandler *this)
{
  return ?sizeOf@bdSummaryMetaHandler@@UEAAIXZ(this);
}

/*
==============
bdSummaryMetaHandler::bdSummaryMetaHandler
==============
*/
void bdSummaryMetaHandler::bdSummaryMetaHandler(bdSummaryMetaHandler *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdSummaryMetaHandler::`vbtable';
    *(&this->m_originID + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_originID + 4) = 0;
  }
  bdFileMetaData::bdFileMetaData(this);
  this->__vftable = (bdSummaryMetaHandler_vtbl *)&bdSummaryMetaHandler::`vftable'{for `bdTaskResult'};
  *(bdSummaryMetaHandler_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdSummaryMetaHandler_vtbl *)&bdSummaryMetaHandler::`vftable'{for `bdReferencable'};
}

/*
==============
bdSummaryMetaHandler::~bdSummaryMetaHandler
==============
*/
void bdSummaryMetaHandler::~bdSummaryMetaHandler(bdSummaryMetaHandler *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdSummaryMetaHandler::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 19720) = &bdSummaryMetaHandler::`vftable'{for `bdReferencable'};
  bdFileMetaData::~bdFileMetaData(this);
}

/*
==============
bdSummaryMetaHandler::deserialize
==============
*/
_BOOL8 bdSummaryMetaHandler::deserialize(bdSummaryMetaHandler *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  v4 = bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_url, 0x400ui64) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_fileSize);
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
bdSummaryMetaHandler::sizeOf
==============
*/
__int64 bdSummaryMetaHandler::sizeOf(bdSummaryMetaHandler *this)
{
  return 1028i64;
}

