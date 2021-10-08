/*
==============
bdClansMemberInfo::getUser
==============
*/

bdUserAccountID *__fastcall bdClansMemberInfo::getUser(bdClansMemberInfo *this, bdUserAccountID *result)
{
  return ?getUser@bdClansMemberInfo@@QEBA?AVbdUserAccountID@@XZ(this, result);
}

/*
==============
bdClansMemberInfo::serialize
==============
*/

bool __fastcall bdClansMemberInfo::serialize(bdClansMemberInfo *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdClansMemberInfo@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdClansMemberInfo::bdClansMemberInfo
==============
*/

void __fastcall bdClansMemberInfo::bdClansMemberInfo(bdClansMemberInfo *this)
{
  ??0bdClansMemberInfo@@QEAA@XZ(this);
}

/*
==============
bdClansMemberInfo::getUserDetails
==============
*/

bdUserDetails *__fastcall bdClansMemberInfo::getUserDetails(bdClansMemberInfo *this, bdUserDetails *result)
{
  return ?getUserDetails@bdClansMemberInfo@@QEBA?AVbdUserDetails@@XZ(this, result);
}

/*
==============
bdClansMemberInfo::getRole
==============
*/

unsigned __int16 __fastcall bdClansMemberInfo::getRole(bdClansMemberInfo *this)
{
  return ?getRole@bdClansMemberInfo@@QEBAGXZ(this);
}

/*
==============
bdClansMemberInfo::deserialize
==============
*/

bool __fastcall bdClansMemberInfo::deserialize(bdClansMemberInfo *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansMemberInfo@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansMemberInfo::getGroup
==============
*/

bdClansGroupIdentifier *__fastcall bdClansMemberInfo::getGroup(bdClansMemberInfo *this, bdClansGroupIdentifier *result)
{
  return ?getGroup@bdClansMemberInfo@@QEBA?AVbdClansGroupIdentifier@@XZ(this, result);
}

/*
==============
bdClansMemberInfo::bdClansMemberInfo
==============
*/
void bdClansMemberInfo::bdClansMemberInfo(bdClansMemberInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansMemberInfo::`vbtable';
    *(_QWORD *)&this->gapF2[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapF2[14] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansMemberInfo_vtbl *)&bdClansMemberInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansMemberInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansMemberInfo_vtbl *)&bdClansMemberInfo::`vftable'{for `bdReferencable'};
  bdStructUserDetails::bdStructUserDetails((bdStructUserDetails *)(&this->__vftable + 2));
  bdClansGroupIdentifier::bdClansGroupIdentifier(&this->m_group);
  this->m_role = 0;
}

/*
==============
bdClansMemberInfo::deserialize
==============
*/
bool bdClansMemberInfo::deserialize(bdClansMemberInfo *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObject(deserializer, 1u, &this->m_group) && bdStructBufferDeserializer::readObject(deserializer, 2u, (bdStructBufferSerializable *)&this->m_user[112]) && bdStructBufferDeserializer::readUInt16(deserializer, 3u, &this->m_role);
}

/*
==============
bdClansMemberInfo::getGroup
==============
*/
bdClansGroupIdentifier *bdClansMemberInfo::getGroup(bdClansMemberInfo *this, bdClansGroupIdentifier *result)
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
bdClansMemberInfo::getRole
==============
*/
__int64 bdClansMemberInfo::getRole(bdClansMemberInfo *this)
{
  return this->m_role;
}

/*
==============
bdClansMemberInfo::getUser
==============
*/
bdUserAccountID *bdClansMemberInfo::getUser(bdClansMemberInfo *this, bdUserAccountID *result)
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
bdClansMemberInfo::getUserDetails
==============
*/
bdUserDetails *bdClansMemberInfo::getUserDetails(bdClansMemberInfo *this, bdUserDetails *result)
{
  bdUserDetails::bdUserDetails(result, (const bdUserDetails *)(&this->__vftable + 2));
  return result;
}

/*
==============
bdClansMemberInfo::serialize
==============
*/
bool bdClansMemberInfo::serialize(bdClansMemberInfo *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansmemberinfo.cpp", "bdClansMemberInfo::serialize", 0x27u, "NOT IMPLEMENTED");
  return 0;
}

