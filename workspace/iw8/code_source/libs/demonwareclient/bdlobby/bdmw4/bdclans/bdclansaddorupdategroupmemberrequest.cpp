/*
==============
bdClansAddOrUpdateGroupMemberRequest::deserialize
==============
*/

bool __fastcall bdClansAddOrUpdateGroupMemberRequest::deserialize(bdClansAddOrUpdateGroupMemberRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdClansAddOrUpdateGroupMemberRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdClansAddOrUpdateGroupMemberRequest::serialize
==============
*/

bool __fastcall bdClansAddOrUpdateGroupMemberRequest::serialize(bdClansAddOrUpdateGroupMemberRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansAddOrUpdateGroupMemberRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansAddOrUpdateGroupMemberRequest::setAttachment
==============
*/

bool __fastcall bdClansAddOrUpdateGroupMemberRequest::setAttachment(bdClansAddOrUpdateGroupMemberRequest *this, unsigned __int8 *const attachment, unsigned int attachmentSize)
{
  return ?setAttachment@bdClansAddOrUpdateGroupMemberRequest@@QEAA_NQEAEI@Z(this, attachment, attachmentSize);
}

/*
==============
bdClansAddOrUpdateGroupMemberRequest::setGroup
==============
*/

void __fastcall bdClansAddOrUpdateGroupMemberRequest::setGroup(bdClansAddOrUpdateGroupMemberRequest *this, const bdClansGroupIdentifier *group)
{
  ?setGroup@bdClansAddOrUpdateGroupMemberRequest@@QEAAXVbdClansGroupIdentifier@@@Z(this, group);
}

/*
==============
bdClansAddOrUpdateGroupMemberRequest::setRole
==============
*/

void __fastcall bdClansAddOrUpdateGroupMemberRequest::setRole(bdClansAddOrUpdateGroupMemberRequest *this, unsigned __int16 role)
{
  ?setRole@bdClansAddOrUpdateGroupMemberRequest@@QEAAXG@Z(this, role);
}

/*
==============
bdClansAddOrUpdateGroupMemberRequest::setUser
==============
*/

void __fastcall bdClansAddOrUpdateGroupMemberRequest::setUser(bdClansAddOrUpdateGroupMemberRequest *this, const bdUserAccountID *user)
{
  ?setUser@bdClansAddOrUpdateGroupMemberRequest@@QEAAXVbdUserAccountID@@@Z(this, user);
}

/*
==============
bdClansAddOrUpdateGroupMemberRequest::bdClansAddOrUpdateGroupMemberRequest
==============
*/

void __fastcall bdClansAddOrUpdateGroupMemberRequest::bdClansAddOrUpdateGroupMemberRequest(bdClansAddOrUpdateGroupMemberRequest *this, const bdClansGroupIdentifier *group)
{
  ??0bdClansAddOrUpdateGroupMemberRequest@@QEAA@VbdClansGroupIdentifier@@@Z(this, group);
}

/*
==============
bdClansAddOrUpdateGroupMemberRequest::setReplaceGroupID
==============
*/

void __fastcall bdClansAddOrUpdateGroupMemberRequest::setReplaceGroupID(bdClansAddOrUpdateGroupMemberRequest *this, unsigned __int64 replaceGroupID)
{
  ?setReplaceGroupID@bdClansAddOrUpdateGroupMemberRequest@@QEAAX_K@Z(this, replaceGroupID);
}

/*
==============
bdClansAddOrUpdateGroupMemberRequest::bdClansAddOrUpdateGroupMemberRequest
==============
*/
void bdClansAddOrUpdateGroupMemberRequest::bdClansAddOrUpdateGroupMemberRequest(bdClansAddOrUpdateGroupMemberRequest *this, const bdClansGroupIdentifier *group, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansAddOrUpdateGroupMemberRequest::`vbtable';
    *(_QWORD *)&this->gap4C4[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap4C4[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansAddOrUpdateGroupMemberRequest_vtbl *)&bdClansAddOrUpdateGroupMemberRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansAddOrUpdateGroupMemberRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansAddOrUpdateGroupMemberRequest_vtbl *)&bdClansAddOrUpdateGroupMemberRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 3) = &bdClansGroupIdentifier::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&this->m_group[32], (const bdReferencable *)((char *)&group->__vftable + *(int *)(*((_QWORD *)&group->__vftable + 1) + 4i64) + 8));
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 2), group);
  *((_QWORD *)&this->__vftable + 2) = &bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansAddOrUpdateGroupMemberRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24) = (bdClansAddOrUpdateGroupMemberRequest_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *(_WORD *)this->m_group = *((_WORD *)&group->__vftable + 8);
  *(_QWORD *)&this->m_group[8] = *((_QWORD *)&group->__vftable + 3);
  *(_WORD *)&this->m_group[16] = group->m_rootKind;
  *(_QWORD *)&this->m_group[24] = group->m_rootID;
  this->m_role = 0;
  this->m_user.m_hasValue = 0;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_user.m_value);
  this->m_replaceGroupID = 0i64;
  this->m_attachmentSize = 0;
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&group->m_rootID + 1));
}

/*
==============
bdClansAddOrUpdateGroupMemberRequest::deserialize
==============
*/
bool bdClansAddOrUpdateGroupMemberRequest::deserialize(bdClansAddOrUpdateGroupMemberRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansaddorupdategroupmemberrequest.cpp", "bdClansAddOrUpdateGroupMemberRequest::deserialize", 0x46u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdClansAddOrUpdateGroupMemberRequest::serialize
==============
*/
bool bdClansAddOrUpdateGroupMemberRequest::serialize(bdClansAddOrUpdateGroupMemberRequest *this, bdStructBufferSerializer *serializer)
{
  bool m_hasValue; 
  bool result; 
  unsigned int m_attachmentSize; 

  result = bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)(&this->__vftable + 2)) && bdStructBufferSerializer::writeUInt16(serializer, 2u, this->m_role) && (!(m_hasValue = this->m_user.m_hasValue) || (bdHandleAssert(m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdStructUserAccountID>::getValue", 0x3Cu, "Has no value"), bdStructBufferSerializer::writeObject(serializer, 3u, (const bdStructBufferSerializable *)this->m_user.m_value.gap38))) && bdStructBufferSerializer::writeUInt64(serializer, 4u, this->m_replaceGroupID);
  m_attachmentSize = this->m_attachmentSize;
  if ( m_attachmentSize )
    return result && bdStructBufferSerializer::writeBlob(serializer, 5u, this->m_attachment, m_attachmentSize);
  return result;
}

/*
==============
bdClansAddOrUpdateGroupMemberRequest::setAttachment
==============
*/
bool bdClansAddOrUpdateGroupMemberRequest::setAttachment(bdClansAddOrUpdateGroupMemberRequest *this, unsigned __int8 *const attachment, unsigned int attachmentSize)
{
  bool result; 

  if ( attachmentSize > 0x400 )
    return 0;
  memcpy_0(this->m_attachment, attachment, attachmentSize);
  result = 1;
  this->m_attachmentSize = attachmentSize;
  return result;
}

/*
==============
bdClansAddOrUpdateGroupMemberRequest::setGroup
==============
*/
void bdClansAddOrUpdateGroupMemberRequest::setGroup(bdClansAddOrUpdateGroupMemberRequest *this, const bdClansGroupIdentifier *group)
{
  bdClansAddOrUpdateGroupMemberRequest_vtbl **v3; 

  v3 = &this->__vftable + 2;
  bdReferencable::operator=((bdReferencable *)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24), (const bdReferencable *)((char *)&group->__vftable + *(int *)(*((_QWORD *)&group->__vftable + 1) + 4i64) + 8));
  *((_WORD *)v3 + 8) = *((_WORD *)&group->__vftable + 8);
  v3[3] = (bdClansAddOrUpdateGroupMemberRequest_vtbl *)*((_QWORD *)&group->__vftable + 3);
  *((_WORD *)v3 + 16) = group->m_rootKind;
  v3[5] = (bdClansAddOrUpdateGroupMemberRequest_vtbl *)group->m_rootID;
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&group->m_rootID + 1));
}

/*
==============
bdClansAddOrUpdateGroupMemberRequest::setReplaceGroupID
==============
*/
void bdClansAddOrUpdateGroupMemberRequest::setReplaceGroupID(bdClansAddOrUpdateGroupMemberRequest *this, unsigned __int64 replaceGroupID)
{
  this->m_replaceGroupID = replaceGroupID;
}

/*
==============
bdClansAddOrUpdateGroupMemberRequest::setRole
==============
*/
void bdClansAddOrUpdateGroupMemberRequest::setRole(bdClansAddOrUpdateGroupMemberRequest *this, unsigned __int16 role)
{
  this->m_role = role;
}

/*
==============
bdClansAddOrUpdateGroupMemberRequest::setUser
==============
*/
void bdClansAddOrUpdateGroupMemberRequest::setUser(bdClansAddOrUpdateGroupMemberRequest *this, const bdUserAccountID *user)
{
  const bdStructUserAccountID *v4; 
  bdStructOptionalObject<bdStructUserAccountID> *p_m_user; 
  bool v6; 
  bdStructUserAccountID v7; 
  __int64 v8; 
  _BYTE v9[64]; 

  bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)&v8, user);
  v6 = 1;
  bdStructUserAccountID::bdStructUserAccountID(&v7, v4);
  p_m_user = &this->m_user;
  if ( p_m_user != (bdStructOptionalObject<bdStructUserAccountID> *)&v6 )
  {
    p_m_user->m_hasValue = v6;
    bdUserAccountID::operator=(&p_m_user->m_value, &v7);
    bdReferencable::operator=((bdReferencable *)&p_m_user->m_value.gap38[*(int *)(*(_QWORD *)&p_m_user->m_value.gap38[8] + 4i64) + 8], (const bdReferencable *)&v7.gap38[*(int *)(*(_QWORD *)&v7.gap38[8] + 4i64) + 8]);
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v7._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v7.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v7._bytes_48);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v9[16]);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v9);
  bdReferencable::~bdReferencable((bdReferencable *)&v9[16]);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)user->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)user->gap38);
}

