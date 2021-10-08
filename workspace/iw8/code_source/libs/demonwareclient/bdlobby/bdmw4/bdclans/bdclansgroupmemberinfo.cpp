/*
==============
bdClansGroupMemberInfo::getUserDetails
==============
*/

bdUserDetails *__fastcall bdClansGroupMemberInfo::getUserDetails(bdClansGroupMemberInfo *this, bdUserDetails *result)
{
  return ?getUserDetails@bdClansGroupMemberInfo@@QEBA?AVbdUserDetails@@XZ(this, result);
}

/*
==============
bdClansGroupMemberInfo::serialize
==============
*/

bool __fastcall bdClansGroupMemberInfo::serialize(bdClansGroupMemberInfo *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdClansGroupMemberInfo@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdClansGroupMemberInfo::getMemberships
==============
*/

bdArray<bdClansGroupMembershipInfo> *__fastcall bdClansGroupMemberInfo::getMemberships(bdClansGroupMemberInfo *this, bdArray<bdClansGroupMembershipInfo> *result)
{
  return ?getMemberships@bdClansGroupMemberInfo@@QEBA?AV?$bdArray@VbdClansGroupMembershipInfo@@@@XZ(this, result);
}

/*
==============
bdClansGroupMemberInfo::bdClansGroupMemberInfo
==============
*/

void __fastcall bdClansGroupMemberInfo::bdClansGroupMemberInfo(bdClansGroupMemberInfo *this)
{
  ??0bdClansGroupMemberInfo@@QEAA@XZ(this);
}

/*
==============
bdClansGroupMemberInfo::deserialize
==============
*/

bool __fastcall bdClansGroupMemberInfo::deserialize(bdClansGroupMemberInfo *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansGroupMemberInfo@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansGroupMemberInfo::getUser
==============
*/

bdUserAccountID *__fastcall bdClansGroupMemberInfo::getUser(bdClansGroupMemberInfo *this, bdUserAccountID *result)
{
  return ?getUser@bdClansGroupMemberInfo@@QEBA?AVbdUserAccountID@@XZ(this, result);
}

/*
==============
bdClansGroupMemberInfo::getOnlineStatus
==============
*/

unsigned __int8 __fastcall bdClansGroupMemberInfo::getOnlineStatus(bdClansGroupMemberInfo *this)
{
  return ?getOnlineStatus@bdClansGroupMemberInfo@@QEBAEXZ(this);
}

/*
==============
bdClansGroupMemberInfo::bdClansGroupMemberInfo
==============
*/
void bdClansGroupMemberInfo::bdClansGroupMemberInfo(bdClansGroupMemberInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupMemberInfo::`vbtable';
    *(_QWORD *)&this->gapC1[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapC1[15] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGroupMemberInfo_vtbl *)&bdClansGroupMemberInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupMemberInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupMemberInfo_vtbl *)&bdClansGroupMemberInfo::`vftable'{for `bdReferencable'};
  bdStructUserDetails::bdStructUserDetails((bdStructUserDetails *)(&this->__vftable + 2));
  this->m_memberships.m_data = NULL;
  *(_QWORD *)&this->m_memberships.m_capacity = 0i64;
  this->m_onlineStatus = 0;
}

/*
==============
bdClansGroupMemberInfo::deserialize
==============
*/
bool bdClansGroupMemberInfo::deserialize(bdClansGroupMemberInfo *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)&this->m_user[112]) && bdStructBufferDeserializer::readObjectArray<bdClansGroupMembershipInfo>(deserializer, 2u, &this->m_memberships) && bdStructBufferDeserializer::readUByte8(deserializer, 3u, &this->m_onlineStatus);
}

/*
==============
bdClansGroupMemberInfo::getMemberships
==============
*/
bdArray<bdClansGroupMembershipInfo> *bdClansGroupMemberInfo::getMemberships(bdClansGroupMemberInfo *this, bdArray<bdClansGroupMembershipInfo> *result)
{
  __int64 m_capacity; 
  bdClansGroupMembershipInfo *v5; 
  bdArray<bdClansGroupMembershipInfo> *v6; 

  result->m_capacity = this->m_memberships.m_capacity;
  result->m_size = this->m_memberships.m_size;
  m_capacity = this->m_memberships.m_capacity;
  if ( (_DWORD)m_capacity )
  {
    v5 = (bdClansGroupMembershipInfo *)bdMemory::allocate(112 * m_capacity);
    bdArray<bdClansGroupMembershipInfo>::copyConstructArrayArray(result, v5, this->m_memberships.m_data, this->m_memberships.m_size);
    result->m_data = v5;
    return result;
  }
  else
  {
    v6 = result;
    result->m_data = NULL;
  }
  return v6;
}

/*
==============
bdClansGroupMemberInfo::getOnlineStatus
==============
*/
__int64 bdClansGroupMemberInfo::getOnlineStatus(bdClansGroupMemberInfo *this)
{
  return this->m_onlineStatus;
}

/*
==============
bdClansGroupMemberInfo::getUser
==============
*/
bdUserAccountID *bdClansGroupMemberInfo::getUser(bdClansGroupMemberInfo *this, bdUserAccountID *result)
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
bdClansGroupMemberInfo::getUserDetails
==============
*/
bdUserDetails *bdClansGroupMemberInfo::getUserDetails(bdClansGroupMemberInfo *this, bdUserDetails *result)
{
  bdUserDetails::bdUserDetails(result, (const bdUserDetails *)(&this->__vftable + 2));
  return result;
}

/*
==============
bdClansGroupMemberInfo::serialize
==============
*/
bool bdClansGroupMemberInfo::serialize(bdClansGroupMemberInfo *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansgroupmemberinfo.cpp", "bdClansGroupMemberInfo::serialize", 0x28u, "NOT IMPLEMENTED");
  return 0;
}

