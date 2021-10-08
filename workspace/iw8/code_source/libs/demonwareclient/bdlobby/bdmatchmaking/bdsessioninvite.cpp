/*
==============
bdSessionInvite::deserialize
==============
*/

bool __fastcall bdSessionInvite::deserialize(bdSessionInvite *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdSessionInvite@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdSessionInvite::~bdSessionInvite
==============
*/

void __fastcall bdSessionInvite::~bdSessionInvite(bdSessionInvite *this)
{
  ??1bdSessionInvite@@UEAA@XZ(this);
}

/*
==============
bdSessionInvite::bdSessionInvite
==============
*/

void __fastcall bdSessionInvite::bdSessionInvite(bdSessionInvite *this)
{
  ??0bdSessionInvite@@QEAA@XZ(this);
}

/*
==============
bdSessionInvite::sizeOf
==============
*/

unsigned int __fastcall bdSessionInvite::sizeOf(bdSessionInvite *this)
{
  return ?sizeOf@bdSessionInvite@@UEAAIXZ(this);
}

/*
==============
bdSessionInvite::bdSessionInvite
==============
*/
void bdSessionInvite::bdSessionInvite(bdSessionInvite *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdSessionInvite::`vbtable';
    *(_QWORD *)&this->gap494[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap494[12] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdSessionInvite_vtbl *)&bdSessionInvite::`vftable'{for `bdTaskResult'};
  *(bdSessionInvite_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdSessionInvite_vtbl *)&bdSessionInvite::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  bdSessionID::bdSessionID(&this->m_sessionID);
  this->m_attachmentSize = 0;
}

/*
==============
bdSessionInvite::~bdSessionInvite
==============
*/
void bdSessionInvite::~bdSessionInvite(bdSessionInvite *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdSessionInvite::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 1168) = &bdSessionInvite::`vftable'{for `bdReferencable'};
  bdSecurityID::~bdSecurityID((bdSecurityID *)this[-1].m_sessionID.gap30);
  bdSerializable::~bdSerializable((bdSerializable *)this[-1].m_sessionID.gap30);
  bdTaskResult::~bdTaskResult((bdSessionInvite *)((char *)this - 1072));
  bdReferencable::~bdReferencable((bdReferencable *)this[-1].m_attachment);
  bdTaskResult::~bdTaskResult((bdSessionInvite *)((char *)this - 1160));
}

/*
==============
bdSessionInvite::deserialize
==============
*/
__int64 bdSessionInvite::deserialize(bdSessionInvite *this, bdReference<bdByteBuffer> buffer)
{
  char v4; 
  unsigned __int8 v5; 
  unsigned int length; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  if ( !bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->__vftable + 2) || !bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, (char *const)&this->__vftable + 24, 0x40ui64) )
  {
    length = 8;
    goto LABEL_6;
  }
  length = 8;
  if ( !bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_sessionID._bytes_20, &length) )
  {
LABEL_6:
    v4 = 0;
    goto LABEL_7;
  }
  v4 = 1;
LABEL_7:
  this->m_attachmentSize = 1024;
  if ( v4 && bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_attachment, &this->m_attachmentSize) )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "session invite", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdsessioninvite.cpp", "bdSessionInvite::deserialize", 0x27u, "Deserialization failed");
  }
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
bdSessionInvite::sizeOf
==============
*/
__int64 bdSessionInvite::sizeOf(bdSessionInvite *this)
{
  return 1192i64;
}

