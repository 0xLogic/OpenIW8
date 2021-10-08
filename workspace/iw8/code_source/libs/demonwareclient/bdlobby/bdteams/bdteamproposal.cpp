/*
==============
bdTeamProposal::bdTeamProposal
==============
*/

void __fastcall bdTeamProposal::bdTeamProposal(bdTeamProposal *this)
{
  ??0bdTeamProposal@@QEAA@XZ(this);
}

/*
==============
bdTeamProposal::deserialize
==============
*/

bool __fastcall bdTeamProposal::deserialize(bdTeamProposal *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdTeamProposal@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdTeamProposal::~bdTeamProposal
==============
*/

void __fastcall bdTeamProposal::~bdTeamProposal(bdTeamProposal *this)
{
  ??1bdTeamProposal@@UEAA@XZ(this);
}

/*
==============
bdTeamProposal::sizeOf
==============
*/

unsigned int __fastcall bdTeamProposal::sizeOf(bdTeamProposal *this)
{
  return ?sizeOf@bdTeamProposal@@UEAAIXZ(this);
}

/*
==============
bdTeamProposal::bdTeamProposal
==============
*/
void bdTeamProposal::bdTeamProposal(bdTeamProposal *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTeamProposal::`vbtable';
    *(_QWORD *)&this->gap104[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap104[12] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdTeamProposal_vtbl *)&bdTeamProposal::`vftable'{for `bdTaskResult'};
  *(bdTeamProposal_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTeamProposal_vtbl *)&bdTeamProposal::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)(&this->__vftable + 2));
}

/*
==============
bdTeamProposal::~bdTeamProposal
==============
*/
void bdTeamProposal::~bdTeamProposal(bdTeamProposal *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdTeamProposal::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 256) = &bdTeamProposal::`vftable'{for `bdReferencable'};
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&this[-1].m_teamID);
  bdReferencable::~bdReferencable((bdReferencable *)&this[-1].m_teamID);
  bdTaskResult::~bdTaskResult((bdTeamProposal *)((char *)this - 248));
}

/*
==============
bdTeamProposal::deserialize
==============
*/
__int64 bdTeamProposal::deserialize(bdTeamProposal *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  unsigned __int8 v5; 
  unsigned int length; 
  bdByteBuffer *m_ptr; 
  bdReference<bdByteBuffer> buffera; 

  m_ptr = buffer.m_ptr;
  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  if ( !ContextSerialization::readUserID((bdReference<bdByteBuffer>)&buffera, (bdUserAccountID *)(&this->__vftable + 2)) || !bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_teamID) || !bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_userName, 0x40ui64) || !bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_teamName, 0x40ui64) )
  {
    length = 32;
    goto LABEL_10;
  }
  length = 32;
  if ( !bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_attachment, &length) )
  {
LABEL_10:
    v5 = 0;
    goto LABEL_11;
  }
  v5 = 1;
LABEL_11:
  this->m_attachmentSize = length;
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
bdTeamProposal::sizeOf
==============
*/
__int64 bdTeamProposal::sizeOf(bdTeamProposal *this)
{
  return 280i64;
}

