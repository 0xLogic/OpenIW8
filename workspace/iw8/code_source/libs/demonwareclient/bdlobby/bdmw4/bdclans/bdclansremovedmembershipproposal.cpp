/*
==============
bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal
==============
*/

void __fastcall bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal(bdClansRemovedMembershipProposal *this, const bdClansGroupIdentifier *group)
{
  ??0bdClansRemovedMembershipProposal@@QEAA@VbdClansGroupIdentifier@@@Z(this, group);
}

/*
==============
bdClansRemovedMembershipProposal::setTargetUser
==============
*/

void __fastcall bdClansRemovedMembershipProposal::setTargetUser(bdClansRemovedMembershipProposal *this, const bdUserAccountID *targetUser)
{
  ?setTargetUser@bdClansRemovedMembershipProposal@@QEAAXVbdUserAccountID@@@Z(this, targetUser);
}

/*
==============
bdClansRemovedMembershipProposal::getTargetUser
==============
*/

bdUserAccountID *__fastcall bdClansRemovedMembershipProposal::getTargetUser(bdClansRemovedMembershipProposal *this, bdUserAccountID *result)
{
  return ?getTargetUser@bdClansRemovedMembershipProposal@@QEBA?AVbdUserAccountID@@XZ(this, result);
}

/*
==============
bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal
==============
*/

void __fastcall bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal(bdClansRemovedMembershipProposal *this)
{
  ??0bdClansRemovedMembershipProposal@@QEAA@XZ(this);
}

/*
==============
bdClansRemovedMembershipProposal::hasTargetUser
==============
*/

bool __fastcall bdClansRemovedMembershipProposal::hasTargetUser(bdClansRemovedMembershipProposal *this)
{
  return ?hasTargetUser@bdClansRemovedMembershipProposal@@QEAA_NXZ(this);
}

/*
==============
bdClansRemovedMembershipProposal::getTargetUserDetails
==============
*/

bdUserDetails *__fastcall bdClansRemovedMembershipProposal::getTargetUserDetails(bdClansRemovedMembershipProposal *this, bdUserDetails *result)
{
  return ?getTargetUserDetails@bdClansRemovedMembershipProposal@@QEBA?AVbdUserDetails@@XZ(this, result);
}

/*
==============
bdClansRemovedMembershipProposal::deserialize
==============
*/

bool __fastcall bdClansRemovedMembershipProposal::deserialize(bdClansRemovedMembershipProposal *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansRemovedMembershipProposal@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansRemovedMembershipProposal::setCooldown
==============
*/

void __fastcall bdClansRemovedMembershipProposal::setCooldown(bdClansRemovedMembershipProposal *this, const unsigned int cooldown)
{
  ?setCooldown@bdClansRemovedMembershipProposal@@QEAAXI@Z(this, cooldown);
}

/*
==============
bdClansRemovedMembershipProposal::getGroup
==============
*/

bdClansGroupIdentifier *__fastcall bdClansRemovedMembershipProposal::getGroup(bdClansRemovedMembershipProposal *this, bdClansGroupIdentifier *result)
{
  return ?getGroup@bdClansRemovedMembershipProposal@@QEBA?AVbdClansGroupIdentifier@@XZ(this, result);
}

/*
==============
bdClansRemovedMembershipProposal::setGroup
==============
*/

void __fastcall bdClansRemovedMembershipProposal::setGroup(bdClansRemovedMembershipProposal *this, const bdClansGroupIdentifier *group)
{
  ?setGroup@bdClansRemovedMembershipProposal@@QEAAXVbdClansGroupIdentifier@@@Z(this, group);
}

/*
==============
bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal
==============
*/

void __fastcall bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal(bdClansRemovedMembershipProposal *this, const bdClansRemovedMembershipProposal *__that)
{
  ??0bdClansRemovedMembershipProposal@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdClansRemovedMembershipProposal::serialize
==============
*/

bool __fastcall bdClansRemovedMembershipProposal::serialize(bdClansRemovedMembershipProposal *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansRemovedMembershipProposal@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansRemovedMembershipProposal::getCooldown
==============
*/

unsigned int __fastcall bdClansRemovedMembershipProposal::getCooldown(bdClansRemovedMembershipProposal *this)
{
  return ?getCooldown@bdClansRemovedMembershipProposal@@QEBAIXZ(this);
}

/*
==============
bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal
==============
*/
void bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal(bdClansRemovedMembershipProposal *this, const bdClansRemovedMembershipProposal *__that, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansRemovedMembershipProposal::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)&this->gapFC[4], (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this, __that);
  this->__vftable = (bdClansRemovedMembershipProposal_vtbl *)&bdClansRemovedMembershipProposal::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansRemovedMembershipProposal_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansRemovedMembershipProposal_vtbl *)&bdClansRemovedMembershipProposal::`vftable'{for `bdReferencable'};
  *((_BYTE *)&this->__vftable + 16) = *((_BYTE *)&__that->__vftable + 16);
  bdStructUserDetails::bdStructUserDetails((bdStructUserDetails *)(&this->__vftable + 3), (const bdStructUserDetails *)(&__that->__vftable + 3));
  bdClansGroupIdentifier::bdClansGroupIdentifier(&this->m_group, &__that->m_group);
  this->m_cooldown = __that->m_cooldown;
}

/*
==============
bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal
==============
*/
void bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal(bdClansRemovedMembershipProposal *this, const bdClansGroupIdentifier *group, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansRemovedMembershipProposal::`vbtable';
    *(_QWORD *)&this->gapFC[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapFC[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansRemovedMembershipProposal_vtbl *)&bdClansRemovedMembershipProposal::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansRemovedMembershipProposal_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansRemovedMembershipProposal_vtbl *)&bdClansRemovedMembershipProposal::`vftable'{for `bdReferencable'};
  *((_BYTE *)&this->__vftable + 16) = 0;
  bdStructUserDetails::bdStructUserDetails((bdStructUserDetails *)(&this->__vftable + 3));
  bdClansGroupIdentifier::bdClansGroupIdentifier(&this->m_group, group);
  this->m_cooldown = 0;
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&group->m_rootID + 1));
}

/*
==============
bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal
==============
*/
void bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal(bdClansRemovedMembershipProposal *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansRemovedMembershipProposal::`vbtable';
    *(_QWORD *)&this->gapFC[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapFC[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansRemovedMembershipProposal_vtbl *)&bdClansRemovedMembershipProposal::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansRemovedMembershipProposal_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansRemovedMembershipProposal_vtbl *)&bdClansRemovedMembershipProposal::`vftable'{for `bdReferencable'};
  *((_BYTE *)&this->__vftable + 16) = 0;
  bdStructUserDetails::bdStructUserDetails((bdStructUserDetails *)(&this->__vftable + 3));
  bdClansGroupIdentifier::bdClansGroupIdentifier(&this->m_group);
  this->m_cooldown = 0;
}

/*
==============
bdClansRemovedMembershipProposal::deserialize
==============
*/
bool bdClansRemovedMembershipProposal::deserialize(bdClansRemovedMembershipProposal *this, bdStructBufferDeserializer *deserializer)
{
  char v4; 
  bdStructUserDetails v6; 

  *((_BYTE *)&this->__vftable + 16) = 0;
  bdStructUserDetails::bdStructUserDetails(&v6);
  if ( bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)&v6.gap79[7]) )
  {
    v4 = 1;
    if ( bdStructBufferDeserializer::getLastReadResult(deserializer) != BD_READ_SUCCESS_TAG_NOT_FOUND )
    {
      *((_BYTE *)&this->__vftable + 16) = 1;
      bdUserDetails::operator=((bdUserDetails *)(&this->__vftable + 3), &v6);
      bdReferencable::operator=((bdReferencable *)&this->m_targetUser[*(int *)(*(_QWORD *)&this->m_targetUser[128] + 4i64) + 128], (const bdReferencable *)&v6.gap79[*(int *)(*(_QWORD *)&v6.gap79[15] + 4i64) + 15]);
    }
  }
  else
  {
    v4 = 0;
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v6._bytes_90);
  bdUserDetails::~bdUserDetails((bdUserDetails *)&v6.gap79[7]);
  bdReferencable::~bdReferencable((bdReferencable *)v6._bytes_90);
  return v4 && bdStructBufferDeserializer::readObject(deserializer, 2u, &this->m_group) && bdStructBufferDeserializer::readUInt32(deserializer, 3u, &this->m_cooldown);
}

/*
==============
bdClansRemovedMembershipProposal::getCooldown
==============
*/
__int64 bdClansRemovedMembershipProposal::getCooldown(bdClansRemovedMembershipProposal *this)
{
  return this->m_cooldown;
}

/*
==============
bdClansRemovedMembershipProposal::getGroup
==============
*/
bdClansGroupIdentifier *bdClansRemovedMembershipProposal::getGroup(bdClansRemovedMembershipProposal *this, bdClansGroupIdentifier *result)
{
  bdClansGroupIdentifier::bdClansGroupIdentifier(result, &this->m_group);
  return result;
}

/*
==============
bdClansRemovedMembershipProposal::getTargetUser
==============
*/
bdUserAccountID *bdClansRemovedMembershipProposal::getTargetUser(bdClansRemovedMembershipProposal *this, bdUserAccountID *result)
{
  const char *AccountType; 
  unsigned __int64 userID; 

  userID = (unsigned __int64)result;
  bdHandleAssert(*((_BYTE *)&this->__vftable + 16), "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdStructUserDetails>::getValue", 0x3Cu, "Has no value");
  AccountType = bdUserDetails::getAccountType((bdUserDetails *)(&this->__vftable + 3));
  bdHandleAssert(*((_BYTE *)&this->__vftable + 16), "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdStructUserDetails>::getValue", 0x3Cu, "Has no value");
  userID = bdUserDetails::getUserID((bdUserDetails *)(&this->__vftable + 3));
  bdUserAccountID::bdUserAccountID(result, &userID, AccountType);
  return result;
}

/*
==============
bdClansRemovedMembershipProposal::getTargetUserDetails
==============
*/
bdUserDetails *bdClansRemovedMembershipProposal::getTargetUserDetails(bdClansRemovedMembershipProposal *this, bdUserDetails *result)
{
  bdHandleAssert(*((_BYTE *)&this->__vftable + 16), "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdStructUserDetails>::getValue", 0x3Cu, "Has no value");
  bdUserDetails::bdUserDetails(result, (const bdUserDetails *)(&this->__vftable + 3));
  return result;
}

/*
==============
bdClansRemovedMembershipProposal::hasTargetUser
==============
*/
__int64 bdClansRemovedMembershipProposal::hasTargetUser(bdClansRemovedMembershipProposal *this)
{
  return *((unsigned __int8 *)&this->__vftable + 16);
}

/*
==============
bdClansRemovedMembershipProposal::serialize
==============
*/
bool bdClansRemovedMembershipProposal::serialize(bdClansRemovedMembershipProposal *this, bdStructBufferSerializer *serializer)
{
  char v2; 
  bool result; 

  v2 = *((_BYTE *)&this->__vftable + 16);
  result = (!v2 || (bdHandleAssert(v2, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdStructUserDetails>::getValue", 0x3Cu, "Has no value"), bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)&this->m_targetUser[120]))) && bdStructBufferSerializer::writeObject(serializer, 2u, &this->m_group) && bdStructBufferSerializer::writeUInt32(serializer, 3u, this->m_cooldown);
  return result;
}

/*
==============
bdClansRemovedMembershipProposal::setCooldown
==============
*/
void bdClansRemovedMembershipProposal::setCooldown(bdClansRemovedMembershipProposal *this, const unsigned int cooldown)
{
  this->m_cooldown = cooldown;
}

/*
==============
bdClansRemovedMembershipProposal::setGroup
==============
*/
void bdClansRemovedMembershipProposal::setGroup(bdClansRemovedMembershipProposal *this, const bdClansGroupIdentifier *group)
{
  bdClansGroupIdentifier *p_m_group; 

  p_m_group = &this->m_group;
  bdReferencable::operator=((bdReferencable *)((char *)&this->m_group.__vftable + *(int *)(*((_QWORD *)&this->m_group.__vftable + 1) + 4i64) + 8), (const bdReferencable *)((char *)&group->__vftable + *(int *)(*((_QWORD *)&group->__vftable + 1) + 4i64) + 8));
  *((_WORD *)&p_m_group->__vftable + 8) = *((_WORD *)&group->__vftable + 8);
  *((_QWORD *)&p_m_group->__vftable + 3) = *((_QWORD *)&group->__vftable + 3);
  p_m_group->m_rootKind = group->m_rootKind;
  p_m_group->m_rootID = group->m_rootID;
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&group->m_rootID + 1));
}

/*
==============
bdClansRemovedMembershipProposal::setTargetUser
==============
*/
void bdClansRemovedMembershipProposal::setTargetUser(bdClansRemovedMembershipProposal *this, const bdUserAccountID *targetUser)
{
  const char *AccountType; 
  unsigned __int64 other[4]; 
  char v6; 
  bdStructUserDetails v7; 
  bdStructUserDetails v8; 

  other[1] = -2i64;
  other[2] = (unsigned __int64)targetUser;
  AccountType = bdUserAccountID::getAccountType((bdUserAccountID *)targetUser);
  other[0] = bdUserAccountID::getUserID((bdUserAccountID *)targetUser);
  bdStructUserDetails::bdStructUserDetails(&v8, other, AccountType);
  v6 = 1;
  bdStructUserDetails::bdStructUserDetails(&v7, &v8);
  if ( &this->__vftable + 2 != (bdClansRemovedMembershipProposal_vtbl **)&v6 )
  {
    *((_BYTE *)&this->__vftable + 16) = v6;
    bdUserDetails::operator=((bdUserDetails *)(&this->__vftable + 3), &v7);
    bdReferencable::operator=((bdReferencable *)&this->m_targetUser[*(int *)(*(_QWORD *)&this->m_targetUser[128] + 4i64) + 128], (const bdReferencable *)&v7.gap79[*(int *)(*(_QWORD *)&v7.gap79[15] + 4i64) + 15]);
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v7._bytes_90);
  bdUserDetails::~bdUserDetails((bdUserDetails *)&v7.gap79[7]);
  bdReferencable::~bdReferencable((bdReferencable *)v7._bytes_90);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v8._bytes_90);
  bdUserDetails::~bdUserDetails((bdUserDetails *)&v8.gap79[7]);
  bdReferencable::~bdReferencable((bdReferencable *)v8._bytes_90);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)targetUser->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)targetUser->gap38);
}

