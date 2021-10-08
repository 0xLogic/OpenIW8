/*
==============
bdTeamInfo::deserialize
==============
*/

bool __fastcall bdTeamInfo::deserialize(bdTeamInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdTeamInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdTeamInfo::sizeOf
==============
*/

unsigned int __fastcall bdTeamInfo::sizeOf(bdTeamInfo *this)
{
  return ?sizeOf@bdTeamInfo@@UEAAIXZ(this);
}

/*
==============
bdTeamInfo::bdTeamInfo
==============
*/

void __fastcall bdTeamInfo::bdTeamInfo(bdTeamInfo *this)
{
  ??0bdTeamInfo@@QEAA@XZ(this);
}

/*
==============
bdTeamInfo::~bdTeamInfo
==============
*/

void __fastcall bdTeamInfo::~bdTeamInfo(bdTeamInfo *this)
{
  ??1bdTeamInfo@@UEAA@XZ(this);
}

/*
==============
bdTeamInfo::bdTeamInfo
==============
*/
void bdTeamInfo::bdTeamInfo(bdTeamInfo *this, int a2)
{
  unsigned __int64 userID; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTeamInfo::`vbtable';
    *(_QWORD *)&this->gapA1[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA1[15] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdTeamInfo_vtbl *)&bdTeamInfo::`vftable'{for `bdTaskResult'};
  *(bdTeamInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTeamInfo_vtbl *)&bdTeamInfo::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  userID = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)(&this->__vftable + 3), &userID);
}

/*
==============
bdTeamInfo::~bdTeamInfo
==============
*/
void bdTeamInfo::~bdTeamInfo(bdTeamInfo *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdTeamInfo::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 160) = &bdTeamInfo::`vftable'{for `bdReferencable'};
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)this[-1].m_teamName);
  bdReferencable::~bdReferencable((bdReferencable *)this[-1].m_teamName);
  bdTaskResult::~bdTaskResult((bdTeamInfo *)((char *)this - 152));
}

/*
==============
bdTeamInfo::deserialize
==============
*/
__int64 bdTeamInfo::deserialize(bdTeamInfo *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  unsigned __int8 v5; 
  bdReference<bdByteBuffer> buffera; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  if ( !bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->__vftable + 2) || !bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_teamName, 0x40ui64) )
    goto LABEL_8;
  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  if ( ContextSerialization::readUserID((bdReference<bdByteBuffer>)&buffera, (bdUserAccountID *)(&this->__vftable + 3)) && bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_status) )
  {
    v5 = 1;
  }
  else
  {
LABEL_8:
    v5 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teamInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteaminfo.cpp", "bdTeamInfo::deserialize", 0x21u, "Deserialization failed");
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
bdTeamInfo::sizeOf
==============
*/
__int64 bdTeamInfo::sizeOf(bdTeamInfo *this)
{
  return 184i64;
}

