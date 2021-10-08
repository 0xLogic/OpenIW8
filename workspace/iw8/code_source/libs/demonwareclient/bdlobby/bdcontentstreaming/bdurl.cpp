/*
==============
bdURL::sizeOf
==============
*/

unsigned int __fastcall bdURL::sizeOf(bdURL *this)
{
  return ?sizeOf@bdURL@@UEAAIXZ(this);
}

/*
==============
bdURL::deserialize
==============
*/

bool __fastcall bdURL::deserialize(bdURL *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdURL@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdURL::checkStringLen
==============
*/

bool __fastcall bdURL::checkStringLen(bdURL *this)
{
  return ?checkStringLen@bdURL@@AEAA_NXZ(this);
}

/*
==============
bdURL::bdURL
==============
*/

void __fastcall bdURL::bdURL(bdURL *this)
{
  ??0bdURL@@QEAA@XZ(this);
}

/*
==============
bdURL::~bdURL
==============
*/

void __fastcall bdURL::~bdURL(bdURL *this)
{
  ??1bdURL@@UEAA@XZ(this);
}

/*
==============
bdURL::bdURL
==============
*/
void bdURL::bdURL(bdURL *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdURL::`vbtable';
    *(_QWORD *)this->gap4A0 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap4A0[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdURL_vtbl *)&bdURL::`vftable'{for `bdTaskResult'};
  *(bdURL_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdURL_vtbl *)&bdURL::`vftable'{for `bdReferencable'};
  this->m_serverType = 0;
  this->m_fileID = 0i64;
  *((_BYTE *)&this->__vftable + 16) = 0;
  this->m_serverIndex[0] = 0;
}

/*
==============
bdURL::~bdURL
==============
*/
void bdURL::~bdURL(bdURL *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdURL::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 1176) = &bdURL::`vftable'{for `bdReferencable'};
  bdTaskResult::~bdTaskResult((bdURL *)((char *)this - 1168));
}

/*
==============
bdURL::checkStringLen
==============
*/
char bdURL::checkStringLen(bdURL *this)
{
  bdURL_vtbl **v1; 
  unsigned __int64 v2; 

  v1 = &this->__vftable + 2;
  bdHandleAssert(&this->__vftable + 2 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v2 = -1i64;
  do
    ++v2;
  while ( *((_BYTE *)v1 + v2) );
  if ( v2 < 0x3FF )
    return 1;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdContentStreaming/bdURL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdurl.cpp", "bdURL::checkStringLen", 0x2Au, "m_url was truncated, buffer is too small");
  return 0;
}

/*
==============
bdURL::deserialize
==============
*/
__int64 bdURL::deserialize(bdURL *this, bdReference<bdByteBuffer> buffer)
{
  bdURL_vtbl **v4; 
  unsigned __int64 v5; 
  unsigned __int8 v6; 

  v4 = &this->__vftable + 2;
  if ( bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, (char *const)&this->__vftable + 16, 0x400ui64) && bdByteBuffer::readUInt16((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_serverType) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_serverIndex, 0x80ui64) && bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_fileID) )
  {
    bdHandleAssert(v4 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v5 = -1i64;
    do
      ++v5;
    while ( *((_BYTE *)v4 + v5) );
    if ( v5 < 0x3FF )
    {
      v6 = 1;
      goto LABEL_10;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdContentStreaming/bdURL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdurl.cpp", "bdURL::checkStringLen", 0x2Au, "m_url was truncated, buffer is too small");
  }
  v6 = 0;
LABEL_10:
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
bdURL::sizeOf
==============
*/
__int64 bdURL::sizeOf(bdURL *this)
{
  return 1200i64;
}

