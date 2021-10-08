/*
==============
bdTeamMember::sizeOf
==============
*/

unsigned int __fastcall bdTeamMember::sizeOf(bdTeamMember *this)
{
  return ?sizeOf@bdTeamMember@@UEAAIXZ(this);
}

/*
==============
bdTeamMember::bdTeamMember
==============
*/

void __fastcall bdTeamMember::bdTeamMember(bdTeamMember *this)
{
  ??0bdTeamMember@@QEAA@XZ(this);
}

/*
==============
bdTeamMember::~bdTeamMember
==============
*/

void __fastcall bdTeamMember::~bdTeamMember(bdTeamMember *this)
{
  ??1bdTeamMember@@UEAA@XZ(this);
}

/*
==============
bdTeamMember::deserialize
==============
*/

bool __fastcall bdTeamMember::deserialize(bdTeamMember *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdTeamMember@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdTeamMember::bdTeamMember
==============
*/
void bdTeamMember::bdTeamMember(bdTeamMember *this, int a2)
{
  unsigned __int64 userID; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTeamMember::`vbtable';
    *(_QWORD *)&this->gapA2[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA2[14] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdTeamMember_vtbl *)&bdTeamMember::`vftable'{for `bdTaskResult'};
  *(bdTeamMember_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTeamMember_vtbl *)&bdTeamMember::`vftable'{for `bdReferencable'};
  userID = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)(&this->__vftable + 3), &userID);
  *(_WORD *)&this->m_isOnline = 0;
}

/*
==============
bdTeamMember::~bdTeamMember
==============
*/
void bdTeamMember::~bdTeamMember(bdTeamMember *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdTeamMember::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 160) = &bdTeamMember::`vftable'{for `bdReferencable'};
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)this[-1].m_userName);
  bdReferencable::~bdReferencable((bdReferencable *)this[-1].m_userName);
  bdTaskResult::~bdTaskResult((bdTeamMember *)((char *)this - 152));
}

/*
==============
bdTeamMember::deserialize
==============
*/
__int64 bdTeamMember::deserialize(bdTeamMember *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  unsigned __int8 v5; 
  bdReference<bdByteBuffer> buffera; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  if ( !bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->__vftable + 2) )
    goto LABEL_9;
  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  if ( ContextSerialization::readUserID((bdReference<bdByteBuffer>)&buffera, (bdUserAccountID *)(&this->__vftable + 3)) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_userName, 0x40ui64) && bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_isOnline) && bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_status) )
    v5 = 1;
  else
LABEL_9:
    v5 = 0;
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
bdTeamMember::sizeOf
==============
*/
__int64 bdTeamMember::sizeOf(bdTeamMember *this)
{
  return 184i64;
}

