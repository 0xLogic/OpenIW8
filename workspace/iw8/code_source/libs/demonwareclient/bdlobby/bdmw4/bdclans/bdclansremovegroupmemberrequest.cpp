/*
==============
bdClansRemoveGroupMemberRequest::setOwner
==============
*/

void __fastcall bdClansRemoveGroupMemberRequest::setOwner(bdClansRemoveGroupMemberRequest *this, const bdUserAccountID *owner)
{
  ?setOwner@bdClansRemoveGroupMemberRequest@@QEAAXVbdUserAccountID@@@Z(this, owner);
}

/*
==============
bdClansRemoveGroupMemberRequest::setGroup
==============
*/

void __fastcall bdClansRemoveGroupMemberRequest::setGroup(bdClansRemoveGroupMemberRequest *this, const bdClansGroupIdentifier *group)
{
  ?setGroup@bdClansRemoveGroupMemberRequest@@QEAAXVbdClansGroupIdentifier@@@Z(this, group);
}

/*
==============
bdClansRemoveGroupMemberRequest::deserialize
==============
*/

bool __fastcall bdClansRemoveGroupMemberRequest::deserialize(bdClansRemoveGroupMemberRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdClansRemoveGroupMemberRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdClansRemoveGroupMemberRequest::bdClansRemoveGroupMemberRequest
==============
*/

void __fastcall bdClansRemoveGroupMemberRequest::bdClansRemoveGroupMemberRequest(bdClansRemoveGroupMemberRequest *this, const bdClansGroupIdentifier *group)
{
  ??0bdClansRemoveGroupMemberRequest@@QEAA@VbdClansGroupIdentifier@@@Z(this, group);
}

/*
==============
bdClansRemoveGroupMemberRequest::serialize
==============
*/

bool __fastcall bdClansRemoveGroupMemberRequest::serialize(bdClansRemoveGroupMemberRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansRemoveGroupMemberRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansRemoveGroupMemberRequest::setUser
==============
*/

void __fastcall bdClansRemoveGroupMemberRequest::setUser(bdClansRemoveGroupMemberRequest *this, const bdUserAccountID *user)
{
  ?setUser@bdClansRemoveGroupMemberRequest@@QEAAXVbdUserAccountID@@@Z(this, user);
}

/*
==============
bdClansRemoveGroupMemberRequest::bdClansRemoveGroupMemberRequest
==============
*/
void bdClansRemoveGroupMemberRequest::bdClansRemoveGroupMemberRequest(bdClansRemoveGroupMemberRequest *this, const bdClansGroupIdentifier *group, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansRemoveGroupMemberRequest::`vbtable';
    *((_QWORD *)&this->m_owner + 12) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_owner + 26) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansRemoveGroupMemberRequest_vtbl *)&bdClansRemoveGroupMemberRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansRemoveGroupMemberRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansRemoveGroupMemberRequest_vtbl *)&bdClansRemoveGroupMemberRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 3) = &bdClansGroupIdentifier::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&this->m_group[32], (const bdReferencable *)((char *)&group->__vftable + *(int *)(*((_QWORD *)&group->__vftable + 1) + 4i64) + 8));
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 2), group);
  *((_QWORD *)&this->__vftable + 2) = &bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansRemoveGroupMemberRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24) = (bdClansRemoveGroupMemberRequest_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *(_WORD *)this->m_group = *((_WORD *)&group->__vftable + 8);
  *(_QWORD *)&this->m_group[8] = *((_QWORD *)&group->__vftable + 3);
  *(_WORD *)&this->m_group[16] = group->m_rootKind;
  *(_QWORD *)&this->m_group[24] = group->m_rootID;
  this->m_user.m_hasValue = 0;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_user.m_value);
  this->m_owner.m_hasValue = 0;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_owner.m_value);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&group->m_rootID + 1));
}

/*
==============
bdClansRemoveGroupMemberRequest::deserialize
==============
*/
bool bdClansRemoveGroupMemberRequest::deserialize(bdClansRemoveGroupMemberRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansremovegroupmemberrequest.cpp", "bdClansRemoveGroupMemberRequest::deserialize", 0x2Cu, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdClansRemoveGroupMemberRequest::serialize
==============
*/
bool bdClansRemoveGroupMemberRequest::serialize(bdClansRemoveGroupMemberRequest *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)(&this->__vftable + 2)) && bdStructBufferSerializer::writeOptionalObject<bdStructUserAccountID>(serializer, 2u, &this->m_user) && bdStructBufferSerializer::writeOptionalObject<bdStructUserAccountID>(serializer, 3u, &this->m_owner);
}

/*
==============
bdClansRemoveGroupMemberRequest::setGroup
==============
*/
void bdClansRemoveGroupMemberRequest::setGroup(bdClansRemoveGroupMemberRequest *this, const bdClansGroupIdentifier *group)
{
  bdClansRemoveGroupMemberRequest_vtbl **v3; 

  v3 = &this->__vftable + 2;
  bdReferencable::operator=((bdReferencable *)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24), (const bdReferencable *)((char *)&group->__vftable + *(int *)(*((_QWORD *)&group->__vftable + 1) + 4i64) + 8));
  *((_WORD *)v3 + 8) = *((_WORD *)&group->__vftable + 8);
  v3[3] = (bdClansRemoveGroupMemberRequest_vtbl *)*((_QWORD *)&group->__vftable + 3);
  *((_WORD *)v3 + 16) = group->m_rootKind;
  v3[5] = (bdClansRemoveGroupMemberRequest_vtbl *)group->m_rootID;
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&group->m_rootID + 1));
}

/*
==============
bdClansRemoveGroupMemberRequest::setOwner
==============
*/
void bdClansRemoveGroupMemberRequest::setOwner(bdClansRemoveGroupMemberRequest *this, const bdUserAccountID *owner)
{
  const bdStructUserAccountID *v4; 
  bdStructOptionalObject<bdStructUserAccountID> *p_m_owner; 
  bool v6; 
  bdStructUserAccountID v7; 
  __int64 v8; 
  _BYTE v9[64]; 

  bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)&v8, owner);
  v6 = 1;
  bdStructUserAccountID::bdStructUserAccountID(&v7, v4);
  p_m_owner = &this->m_owner;
  if ( p_m_owner != (bdStructOptionalObject<bdStructUserAccountID> *)&v6 )
  {
    p_m_owner->m_hasValue = v6;
    bdUserAccountID::operator=(&p_m_owner->m_value, &v7);
    bdReferencable::operator=((bdReferencable *)&p_m_owner->m_value.gap38[*(int *)(*(_QWORD *)&p_m_owner->m_value.gap38[8] + 4i64) + 8], (const bdReferencable *)&v7.gap38[*(int *)(*(_QWORD *)&v7.gap38[8] + 4i64) + 8]);
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v7._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v7.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v7._bytes_48);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v9[16]);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v9);
  bdReferencable::~bdReferencable((bdReferencable *)&v9[16]);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)owner->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)owner->gap38);
}

/*
==============
bdClansRemoveGroupMemberRequest::setUser
==============
*/
void bdClansRemoveGroupMemberRequest::setUser(bdClansRemoveGroupMemberRequest *this, const bdUserAccountID *user)
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

