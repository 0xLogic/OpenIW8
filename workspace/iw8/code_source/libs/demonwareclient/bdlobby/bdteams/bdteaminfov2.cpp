/*
==============
bdTeamInfoV2::sizeOf
==============
*/

unsigned int __fastcall bdTeamInfoV2::sizeOf(bdTeamInfoV2 *this)
{
  return ?sizeOf@bdTeamInfoV2@@UEAAIXZ(this);
}

/*
==============
bdTeamInfoV2::~bdTeamInfoV2
==============
*/

void __fastcall bdTeamInfoV2::~bdTeamInfoV2(bdTeamInfoV2 *this)
{
  ??1bdTeamInfoV2@@UEAA@XZ(this);
}

/*
==============
bdTeamInfoV2::bdTeamInfoV2
==============
*/

void __fastcall bdTeamInfoV2::bdTeamInfoV2(bdTeamInfoV2 *this)
{
  ??0bdTeamInfoV2@@QEAA@XZ(this);
}

/*
==============
bdTeamInfoV2::deserialize
==============
*/

bool __fastcall bdTeamInfoV2::deserialize(bdTeamInfoV2 *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdTeamInfoV2@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdTeamInfoV2::bdTeamInfoV2
==============
*/
void bdTeamInfoV2::bdTeamInfoV2(bdTeamInfoV2 *this, int a2)
{
  unsigned __int64 userID; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTeamInfoV2::`vbtable';
    *(_QWORD *)&this->gapBC[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapBC[12] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdTeamInfoV2_vtbl *)&bdTeamInfoV2::`vftable'{for `bdTaskResult'};
  *(bdTeamInfoV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTeamInfoV2_vtbl *)&bdTeamInfoV2::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  userID = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)(&this->__vftable + 3), &userID);
}

/*
==============
bdTeamInfoV2::~bdTeamInfoV2
==============
*/
void bdTeamInfoV2::~bdTeamInfoV2(bdTeamInfoV2 *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdTeamInfoV2::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 184) = &bdTeamInfoV2::`vftable'{for `bdReferencable'};
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)this[-1].m_teamName);
  bdReferencable::~bdReferencable((bdReferencable *)this[-1].m_teamName);
  bdTaskResult::~bdTaskResult((bdTeamInfoV2 *)((char *)this - 176));
}

/*
==============
bdTeamInfoV2::deserialize
==============
*/
__int64 bdTeamInfoV2::deserialize(bdTeamInfoV2 *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  unsigned __int8 v5; 
  bdReference<bdByteBuffer> buffera; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  if ( !bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->__vftable + 2) || !bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_teamName, 0x40ui64) )
    goto LABEL_15;
  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  if ( ContextSerialization::readUserID((bdReference<bdByteBuffer>)&buffera, (bdUserAccountID *)(&this->__vftable + 3)) && bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_memberStatus) && bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_haveCounts) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_numTeamMembers) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_numPendingApplications) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_numPendingInvitations) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_numMembersOnline) && bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_teamType) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_memberPrivileges) )
  {
    v5 = 1;
  }
  else
  {
LABEL_15:
    v5 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teamInfoV2", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteaminfov2.cpp", "bdTeamInfoV2::deserialize", 0x28u, "Deserialization failed");
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
bdTeamInfoV2::sizeOf
==============
*/
__int64 bdTeamInfoV2::sizeOf(bdTeamInfoV2 *this)
{
  return 208i64;
}

