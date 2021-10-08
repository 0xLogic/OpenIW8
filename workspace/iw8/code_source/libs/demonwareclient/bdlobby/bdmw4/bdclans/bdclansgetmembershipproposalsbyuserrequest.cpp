/*
==============
bdClansGetMembershipProposalsByUserRequest::serialize
==============
*/

bool __fastcall bdClansGetMembershipProposalsByUserRequest::serialize(bdClansGetMembershipProposalsByUserRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansGetMembershipProposalsByUserRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::setProposingUser
==============
*/

void __fastcall bdClansGetMembershipProposalsByUserRequest::setProposingUser(bdClansGetMembershipProposalsByUserRequest *this, const bdUserAccountID *proposingUser)
{
  ?setProposingUser@bdClansGetMembershipProposalsByUserRequest@@QEAAXVbdUserAccountID@@@Z(this, proposingUser);
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::setPageToken
==============
*/

void __fastcall bdClansGetMembershipProposalsByUserRequest::setPageToken(bdClansGetMembershipProposalsByUserRequest *this, const char *pageToken)
{
  ?setPageToken@bdClansGetMembershipProposalsByUserRequest@@QEAAXPEBD@Z(this, pageToken);
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::deserialize
==============
*/

bool __fastcall bdClansGetMembershipProposalsByUserRequest::deserialize(bdClansGetMembershipProposalsByUserRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdClansGetMembershipProposalsByUserRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::bdClansGetMembershipProposalsByUserRequest
==============
*/

void __fastcall bdClansGetMembershipProposalsByUserRequest::bdClansGetMembershipProposalsByUserRequest(bdClansGetMembershipProposalsByUserRequest *this, const bdUserAccountID *proposingUser, const bdUserAccountID *targetUser, const unsigned __int16 limit, const char *pageToken)
{
  ??0bdClansGetMembershipProposalsByUserRequest@@QEAA@VbdUserAccountID@@0GPEBD@Z(this, proposingUser, targetUser, limit, pageToken);
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::bdClansGetMembershipProposalsByUserRequest
==============
*/

void __fastcall bdClansGetMembershipProposalsByUserRequest::bdClansGetMembershipProposalsByUserRequest(bdClansGetMembershipProposalsByUserRequest *this)
{
  ??0bdClansGetMembershipProposalsByUserRequest@@QEAA@XZ(this);
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::setLimit
==============
*/

void __fastcall bdClansGetMembershipProposalsByUserRequest::setLimit(bdClansGetMembershipProposalsByUserRequest *this, const unsigned __int16 limit)
{
  ?setLimit@bdClansGetMembershipProposalsByUserRequest@@QEAAXG@Z(this, limit);
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::bdClansGetMembershipProposalsByUserRequest
==============
*/

void __fastcall bdClansGetMembershipProposalsByUserRequest::bdClansGetMembershipProposalsByUserRequest(bdClansGetMembershipProposalsByUserRequest *this, const bdUserAccountID *proposingUser, const bdUserAccountID *targetUser)
{
  ??0bdClansGetMembershipProposalsByUserRequest@@QEAA@VbdUserAccountID@@0@Z(this, proposingUser, targetUser);
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::setTargetUser
==============
*/

void __fastcall bdClansGetMembershipProposalsByUserRequest::setTargetUser(bdClansGetMembershipProposalsByUserRequest *this, const bdUserAccountID *targetUser)
{
  ?setTargetUser@bdClansGetMembershipProposalsByUserRequest@@QEAAXVbdUserAccountID@@@Z(this, targetUser);
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::bdClansGetMembershipProposalsByUserRequest
==============
*/
void bdClansGetMembershipProposalsByUserRequest::bdClansGetMembershipProposalsByUserRequest(bdClansGetMembershipProposalsByUserRequest *this, const bdUserAccountID *proposingUser, const bdUserAccountID *targetUser, int a4)
{
  const bdStructUserAccountID *v7; 
  const bdStructUserAccountID *v8; 
  bdStructUserAccountID v9; 
  bdStructUserAccountID v10; 

  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGetMembershipProposalsByUserRequest::`vbtable';
    *(_QWORD *)&this->gap152[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap152[14] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGetMembershipProposalsByUserRequest_vtbl *)&bdClansGetMembershipProposalsByUserRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetMembershipProposalsByUserRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGetMembershipProposalsByUserRequest_vtbl *)&bdClansGetMembershipProposalsByUserRequest::`vftable'{for `bdReferencable'};
  bdStructUserAccountID::bdStructUserAccountID(&v9, proposingUser);
  *((_BYTE *)&this->__vftable + 16) = 1;
  bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)(&this->__vftable + 3), v7);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v9._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v9.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v9._bytes_48);
  bdStructUserAccountID::bdStructUserAccountID(&v10, targetUser);
  this->m_targetUser.m_hasValue = 1;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_targetUser.m_value, v8);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v10._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v10.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v10._bytes_48);
  this->m_limit = 0;
  bdStructFixedSizeString<127>::bdStructFixedSizeString<127>(&this->m_pageToken);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)proposingUser->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)proposingUser->gap38);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)targetUser->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)targetUser->gap38);
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::bdClansGetMembershipProposalsByUserRequest
==============
*/
void bdClansGetMembershipProposalsByUserRequest::bdClansGetMembershipProposalsByUserRequest(bdClansGetMembershipProposalsByUserRequest *this, const bdUserAccountID *proposingUser, const bdUserAccountID *targetUser, const unsigned __int16 limit, const char *pageToken, int a6)
{
  const bdStructUserAccountID *v10; 
  const bdStructUserAccountID *v11; 
  bdStructUserAccountID v12; 
  bdStructUserAccountID v13; 

  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGetMembershipProposalsByUserRequest::`vbtable';
    *(_QWORD *)&this->gap152[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap152[14] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGetMembershipProposalsByUserRequest_vtbl *)&bdClansGetMembershipProposalsByUserRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetMembershipProposalsByUserRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGetMembershipProposalsByUserRequest_vtbl *)&bdClansGetMembershipProposalsByUserRequest::`vftable'{for `bdReferencable'};
  bdStructUserAccountID::bdStructUserAccountID(&v12, proposingUser);
  *((_BYTE *)&this->__vftable + 16) = 1;
  bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)(&this->__vftable + 3), v10);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v12._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v12.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v12._bytes_48);
  bdStructUserAccountID::bdStructUserAccountID(&v13, targetUser);
  this->m_targetUser.m_hasValue = 1;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_targetUser.m_value, v11);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v13._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v13.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v13._bytes_48);
  this->m_limit = limit;
  bdStructFixedSizeString<127>::copy(&this->m_pageToken, pageToken);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)proposingUser->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)proposingUser->gap38);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)targetUser->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)targetUser->gap38);
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::bdClansGetMembershipProposalsByUserRequest
==============
*/
void bdClansGetMembershipProposalsByUserRequest::bdClansGetMembershipProposalsByUserRequest(bdClansGetMembershipProposalsByUserRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGetMembershipProposalsByUserRequest::`vbtable';
    *(_QWORD *)&this->gap152[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap152[14] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGetMembershipProposalsByUserRequest_vtbl *)&bdClansGetMembershipProposalsByUserRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetMembershipProposalsByUserRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGetMembershipProposalsByUserRequest_vtbl *)&bdClansGetMembershipProposalsByUserRequest::`vftable'{for `bdReferencable'};
  *((_BYTE *)&this->__vftable + 16) = 0;
  bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)(&this->__vftable + 3));
  this->m_targetUser.m_hasValue = 0;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_targetUser.m_value);
  this->m_limit = 0;
  bdStructFixedSizeString<127>::bdStructFixedSizeString<127>(&this->m_pageToken);
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::deserialize
==============
*/
bool bdClansGetMembershipProposalsByUserRequest::deserialize(bdClansGetMembershipProposalsByUserRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansgetmembershipproposalsbyuserrequest.cpp", "bdClansGetMembershipProposalsByUserRequest::deserialize", 0x48u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::serialize
==============
*/
bool bdClansGetMembershipProposalsByUserRequest::serialize(bdClansGetMembershipProposalsByUserRequest *this, bdStructBufferSerializer *serializer)
{
  bdStructFixedSizeString<127> *p_m_pageToken; 
  unsigned int v5; 
  void *v6; 

  if ( !bdStructBufferSerializer::writeOptionalObject<bdStructUserAccountID>(serializer, 1u, (const bdStructOptionalObject<bdStructUserAccountID> *)(&this->__vftable + 2)) || !bdStructBufferSerializer::writeOptionalObject<bdStructUserAccountID>(serializer, 2u, &this->m_targetUser) || !bdStructBufferSerializer::writeUInt16(serializer, 3u, this->m_limit) )
    return 0;
  p_m_pageToken = &this->m_pageToken;
  v5 = 127;
  v6 = memchr_0(p_m_pageToken, 0, 0x7Fui64);
  if ( v6 )
    v5 = (_DWORD)v6 - (_DWORD)p_m_pageToken;
  return bdStructBufferSerializer::writeString(serializer, 4u, p_m_pageToken->m_buffer, v5);
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::setLimit
==============
*/
void bdClansGetMembershipProposalsByUserRequest::setLimit(bdClansGetMembershipProposalsByUserRequest *this, const unsigned __int16 limit)
{
  this->m_limit = limit;
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::setPageToken
==============
*/
void bdClansGetMembershipProposalsByUserRequest::setPageToken(bdClansGetMembershipProposalsByUserRequest *this, const char *pageToken)
{
  bdStructFixedSizeString<127>::copy(&this->m_pageToken, pageToken);
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::setProposingUser
==============
*/
void bdClansGetMembershipProposalsByUserRequest::setProposingUser(bdClansGetMembershipProposalsByUserRequest *this, const bdUserAccountID *proposingUser)
{
  const bdStructUserAccountID *v4; 
  bdClansGetMembershipProposalsByUserRequest_vtbl **v5; 
  char v6; 
  bdStructUserAccountID v7; 
  __int64 v8; 
  _BYTE v9[64]; 

  bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)&v8, proposingUser);
  v6 = 1;
  bdStructUserAccountID::bdStructUserAccountID(&v7, v4);
  v5 = &this->__vftable + 2;
  if ( v5 != (bdClansGetMembershipProposalsByUserRequest_vtbl **)&v6 )
  {
    *(_BYTE *)v5 = v6;
    bdUserAccountID::operator=((bdUserAccountID *)(v5 + 1), &v7);
    bdReferencable::operator=((bdReferencable *)((char *)v5 + SHIDWORD(v5[9]->serialize) + 72), (const bdReferencable *)&v7.gap38[*(int *)(*(_QWORD *)&v7.gap38[8] + 4i64) + 8]);
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v7._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v7.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v7._bytes_48);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v9[16]);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v9);
  bdReferencable::~bdReferencable((bdReferencable *)&v9[16]);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)proposingUser->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)proposingUser->gap38);
}

/*
==============
bdClansGetMembershipProposalsByUserRequest::setTargetUser
==============
*/
void bdClansGetMembershipProposalsByUserRequest::setTargetUser(bdClansGetMembershipProposalsByUserRequest *this, const bdUserAccountID *targetUser)
{
  const bdStructUserAccountID *v4; 
  bdStructOptionalObject<bdStructUserAccountID> *p_m_targetUser; 
  bool v6; 
  bdStructUserAccountID v7; 
  __int64 v8; 
  _BYTE v9[64]; 

  bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)&v8, targetUser);
  v6 = 1;
  bdStructUserAccountID::bdStructUserAccountID(&v7, v4);
  p_m_targetUser = &this->m_targetUser;
  if ( p_m_targetUser != (bdStructOptionalObject<bdStructUserAccountID> *)&v6 )
  {
    p_m_targetUser->m_hasValue = v6;
    bdUserAccountID::operator=(&p_m_targetUser->m_value, &v7);
    bdReferencable::operator=((bdReferencable *)&p_m_targetUser->m_value.gap38[*(int *)(*(_QWORD *)&p_m_targetUser->m_value.gap38[8] + 4i64) + 8], (const bdReferencable *)&v7.gap38[*(int *)(*(_QWORD *)&v7.gap38[8] + 4i64) + 8]);
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v7._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v7.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v7._bytes_48);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v9[16]);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v9);
  bdReferencable::~bdReferencable((bdReferencable *)&v9[16]);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)targetUser->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)targetUser->gap38);
}

