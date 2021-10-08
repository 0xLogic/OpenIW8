/*
==============
bdClansFailedMembershipProposal::bdClansFailedMembershipProposal
==============
*/

void __fastcall bdClansFailedMembershipProposal::bdClansFailedMembershipProposal(bdClansFailedMembershipProposal *this)
{
  ??0bdClansFailedMembershipProposal@@QEAA@XZ(this);
}

/*
==============
bdClansFailedMembershipProposal::getReason
==============
*/

unsigned int __fastcall bdClansFailedMembershipProposal::getReason(bdClansFailedMembershipProposal *this)
{
  return ?getReason@bdClansFailedMembershipProposal@@QEBAIXZ(this);
}

/*
==============
bdClansFailedMembershipProposal::getUserDetails
==============
*/

bdUserDetails *__fastcall bdClansFailedMembershipProposal::getUserDetails(bdClansFailedMembershipProposal *this, bdUserDetails *result)
{
  return ?getUserDetails@bdClansFailedMembershipProposal@@QEBA?AVbdUserDetails@@XZ(this, result);
}

/*
==============
bdClansFailedMembershipProposal::deserialize
==============
*/

bool __fastcall bdClansFailedMembershipProposal::deserialize(bdClansFailedMembershipProposal *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansFailedMembershipProposal@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansFailedMembershipProposal::getGroup
==============
*/

bdClansGroupIdentifier *__fastcall bdClansFailedMembershipProposal::getGroup(bdClansFailedMembershipProposal *this, bdClansGroupIdentifier *result)
{
  return ?getGroup@bdClansFailedMembershipProposal@@QEBA?AVbdClansGroupIdentifier@@XZ(this, result);
}

/*
==============
bdClansFailedMembershipProposal::getUser
==============
*/

bdUserAccountID *__fastcall bdClansFailedMembershipProposal::getUser(bdClansFailedMembershipProposal *this, bdUserAccountID *result)
{
  return ?getUser@bdClansFailedMembershipProposal@@QEBA?AVbdUserAccountID@@XZ(this, result);
}

/*
==============
bdClansFailedMembershipProposal::serialize
==============
*/

bool __fastcall bdClansFailedMembershipProposal::serialize(bdClansFailedMembershipProposal *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdClansFailedMembershipProposal@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdClansFailedMembershipProposal::bdClansFailedMembershipProposal
==============
*/
void bdClansFailedMembershipProposal::bdClansFailedMembershipProposal(bdClansFailedMembershipProposal *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansFailedMembershipProposal::`vbtable';
    *(_QWORD *)&this->gapF4[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapF4[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansFailedMembershipProposal_vtbl *)&bdClansFailedMembershipProposal::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansFailedMembershipProposal_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansFailedMembershipProposal_vtbl *)&bdClansFailedMembershipProposal::`vftable'{for `bdReferencable'};
  bdStructUserDetails::bdStructUserDetails((bdStructUserDetails *)(&this->__vftable + 2));
  bdClansGroupIdentifier::bdClansGroupIdentifier(&this->m_group);
  this->m_reason = 0;
}

/*
==============
bdClansFailedMembershipProposal::deserialize
==============
*/
bool bdClansFailedMembershipProposal::deserialize(bdClansFailedMembershipProposal *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)&this->m_user[112]) && bdStructBufferDeserializer::readObject(deserializer, 2u, &this->m_group) && bdStructBufferDeserializer::readUInt32(deserializer, 3u, &this->m_reason);
}

/*
==============
bdClansFailedMembershipProposal::getGroup
==============
*/
bdClansGroupIdentifier *bdClansFailedMembershipProposal::getGroup(bdClansFailedMembershipProposal *this, bdClansGroupIdentifier *result)
{
  bdClansGroupIdentifier *p_m_group; 

  p_m_group = &this->m_group;
  *((_QWORD *)&result->__vftable + 1) = &bdClansGroupIdentifier::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)(&result->m_rootID + 1), (const bdReferencable *)((char *)&this->m_group.__vftable + *(int *)(*((_QWORD *)&this->m_group.__vftable + 1) + 4i64) + 8));
  bdStructBufferSerializable::bdStructBufferSerializable(result, p_m_group);
  result->__vftable = (bdClansGroupIdentifier_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupIdentifier_vtbl **)((char *)&result->__vftable + *(int *)(*((_QWORD *)&result->__vftable + 1) + 4i64) + 8) = (bdClansGroupIdentifier_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *((_WORD *)&result->__vftable + 8) = *((_WORD *)&p_m_group->__vftable + 8);
  *((_QWORD *)&result->__vftable + 3) = *((_QWORD *)&p_m_group->__vftable + 3);
  result->m_rootKind = p_m_group->m_rootKind;
  result->m_rootID = p_m_group->m_rootID;
  return result;
}

/*
==============
bdClansFailedMembershipProposal::getReason
==============
*/
__int64 bdClansFailedMembershipProposal::getReason(bdClansFailedMembershipProposal *this)
{
  return this->m_reason;
}

/*
==============
bdClansFailedMembershipProposal::getUser
==============
*/
bdUserAccountID *bdClansFailedMembershipProposal::getUser(bdClansFailedMembershipProposal *this, bdUserAccountID *result)
{
  bdUserDetails *v2; 
  const char *AccountType; 
  unsigned __int64 userID; 

  userID = (unsigned __int64)result;
  v2 = (bdUserDetails *)(&this->__vftable + 2);
  AccountType = bdUserDetails::getAccountType((bdUserDetails *)(&this->__vftable + 2));
  userID = bdUserDetails::getUserID(v2);
  bdUserAccountID::bdUserAccountID(result, &userID, AccountType);
  return result;
}

/*
==============
bdClansFailedMembershipProposal::getUserDetails
==============
*/
bdUserDetails *bdClansFailedMembershipProposal::getUserDetails(bdClansFailedMembershipProposal *this, bdUserDetails *result)
{
  bdUserDetails::bdUserDetails(result, (const bdUserDetails *)(&this->__vftable + 2));
  return result;
}

/*
==============
bdClansFailedMembershipProposal::serialize
==============
*/
bool bdClansFailedMembershipProposal::serialize(bdClansFailedMembershipProposal *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansfailedmembershipproposal.cpp", "bdClansFailedMembershipProposal::serialize", 0x28u, "NOT IMPLEMENTED");
  return 0;
}

