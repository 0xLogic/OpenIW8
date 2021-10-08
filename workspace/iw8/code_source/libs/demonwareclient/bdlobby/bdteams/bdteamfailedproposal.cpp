/*
==============
bdTeamFailedProposal::sizeOf
==============
*/

unsigned int __fastcall bdTeamFailedProposal::sizeOf(bdTeamFailedProposal *this)
{
  return ?sizeOf@bdTeamFailedProposal@@UEAAIXZ(this);
}

/*
==============
bdTeamFailedProposal::~bdTeamFailedProposal
==============
*/

void __fastcall bdTeamFailedProposal::~bdTeamFailedProposal(bdTeamFailedProposal *this)
{
  ??1bdTeamFailedProposal@@UEAA@XZ(this);
}

/*
==============
bdTeamFailedProposal::bdTeamFailedProposal
==============
*/

void __fastcall bdTeamFailedProposal::bdTeamFailedProposal(bdTeamFailedProposal *this)
{
  ??0bdTeamFailedProposal@@QEAA@XZ(this);
}

/*
==============
bdTeamFailedProposal::deserialize
==============
*/

bool __fastcall bdTeamFailedProposal::deserialize(bdTeamFailedProposal *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdTeamFailedProposal@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdTeamFailedProposal::bdTeamFailedProposal
==============
*/
void bdTeamFailedProposal::bdTeamFailedProposal(bdTeamFailedProposal *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTeamFailedProposal::`vbtable';
    *(_QWORD *)&this->gap99[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap99[15] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdTeamFailedProposal_vtbl *)&bdTeamFailedProposal::`vftable'{for `bdTaskResult'};
  *(bdTeamFailedProposal_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTeamFailedProposal_vtbl *)&bdTeamFailedProposal::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)(&this->__vftable + 2));
}

/*
==============
bdTeamFailedProposal::~bdTeamFailedProposal
==============
*/
void bdTeamFailedProposal::~bdTeamFailedProposal(bdTeamFailedProposal *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdTeamFailedProposal::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 152) = &bdTeamFailedProposal::`vftable'{for `bdReferencable'};
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)this[-1].m_userName);
  bdReferencable::~bdReferencable((bdReferencable *)this[-1].m_userName);
  bdTaskResult::~bdTaskResult((bdTeamFailedProposal *)((char *)this - 144));
}

/*
==============
bdTeamFailedProposal::deserialize
==============
*/
_BOOL8 bdTeamFailedProposal::deserialize(bdTeamFailedProposal *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  bool v5; 
  bdReference<bdByteBuffer> buffera; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  v5 = ContextSerialization::readUserID((bdReference<bdByteBuffer>)&buffera, (bdUserAccountID *)(&this->__vftable + 2)) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_userName, 0x40ui64) && bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_failureReason);
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
bdTeamFailedProposal::sizeOf
==============
*/
__int64 bdTeamFailedProposal::sizeOf(bdTeamFailedProposal *this)
{
  return 176i64;
}

