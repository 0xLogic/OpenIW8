/*
==============
bdTeamApplicationWithTeamID::~bdTeamApplicationWithTeamID
==============
*/

void __fastcall bdTeamApplicationWithTeamID::~bdTeamApplicationWithTeamID(bdTeamApplicationWithTeamID *this)
{
  ??1bdTeamApplicationWithTeamID@@UEAA@XZ(this);
}

/*
==============
bdTeamApplicationWithTeamID::bdTeamApplicationWithTeamID
==============
*/

void __fastcall bdTeamApplicationWithTeamID::bdTeamApplicationWithTeamID(bdTeamApplicationWithTeamID *this)
{
  ??0bdTeamApplicationWithTeamID@@QEAA@XZ(this);
}

/*
==============
bdTeamApplicationWithTeamID::deserialize
==============
*/

bool __fastcall bdTeamApplicationWithTeamID::deserialize(bdTeamApplicationWithTeamID *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdTeamApplicationWithTeamID@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdTeamApplicationWithTeamID::sizeOf
==============
*/

unsigned int __fastcall bdTeamApplicationWithTeamID::sizeOf(bdTeamApplicationWithTeamID *this)
{
  return ?sizeOf@bdTeamApplicationWithTeamID@@UEAAIXZ(this);
}

/*
==============
bdTeamApplicationWithTeamID::bdTeamApplicationWithTeamID
==============
*/
void bdTeamApplicationWithTeamID::bdTeamApplicationWithTeamID(bdTeamApplicationWithTeamID *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTeamApplicationWithTeamID::`vbtable';
    *((_QWORD *)&this->m_attachmentSize + 1) = &bdReferencable::`vftable';
    *(&this->m_attachmentSize + 4) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdTeamApplicationWithTeamID_vtbl *)&bdTeamApplicationWithTeamID::`vftable'{for `bdTaskResult'};
  *(bdTeamApplicationWithTeamID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTeamApplicationWithTeamID_vtbl *)&bdTeamApplicationWithTeamID::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)(&this->__vftable + 3));
}

/*
==============
bdTeamApplicationWithTeamID::~bdTeamApplicationWithTeamID
==============
*/
void bdTeamApplicationWithTeamID::~bdTeamApplicationWithTeamID(bdTeamApplicationWithTeamID *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdTeamApplicationWithTeamID::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 264) = &bdTeamApplicationWithTeamID::`vftable'{for `bdReferencable'};
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&this[-1].m_updatedOn);
  bdReferencable::~bdReferencable((bdReferencable *)&this[-1].m_updatedOn);
  bdTaskResult::~bdTaskResult((bdTeamApplicationWithTeamID *)((char *)this - 256));
}

/*
==============
bdTeamApplicationWithTeamID::deserialize
==============
*/
_BOOL8 bdTeamApplicationWithTeamID::deserialize(bdTeamApplicationWithTeamID *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  bool v5; 
  bool v6; 
  unsigned __int8 v7; 
  char v8; 
  bool v9; 
  unsigned __int8 b; 
  bdByteBuffer *m_ptr; 
  bdReference<bdByteBuffer> buffera; 

  m_ptr = buffer.m_ptr;
  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  v5 = ContextSerialization::readUserID((bdReference<bdByteBuffer>)&buffera, (bdUserAccountID *)(&this->__vftable + 3)) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_userName, 0x40ui64) && bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->__vftable + 2);
  this->m_attachmentSize = 32;
  if ( !v5 || !bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_attachment, &this->m_attachmentSize) )
  {
    v7 = 0;
    b = 0;
    goto LABEL_13;
  }
  b = 0;
  v6 = !bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &b);
  v7 = b;
  if ( v6 )
  {
LABEL_13:
    v8 = 0;
    goto LABEL_14;
  }
  v8 = 1;
LABEL_14:
  v9 = 0;
  if ( v7 <= 2u )
  {
    this->m_state = v7;
    if ( v8 )
    {
      if ( bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_updatedOn) )
        v9 = 1;
    }
  }
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v9;
}

/*
==============
bdTeamApplicationWithTeamID::sizeOf
==============
*/
__int64 bdTeamApplicationWithTeamID::sizeOf(bdTeamApplicationWithTeamID *this)
{
  return 288i64;
}

