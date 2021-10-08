/*
==============
bdClansAddOrUpdateGroupMemberResponse::getProposal
==============
*/

bdClansGroupMembershipProposal *__fastcall bdClansAddOrUpdateGroupMemberResponse::getProposal(bdClansAddOrUpdateGroupMemberResponse *this, bdClansGroupMembershipProposal *result)
{
  return ?getProposal@bdClansAddOrUpdateGroupMemberResponse@@QEBA?AVbdClansGroupMembershipProposal@@XZ(this, result);
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::serialize
==============
*/

bool __fastcall bdClansAddOrUpdateGroupMemberResponse::serialize(bdClansAddOrUpdateGroupMemberResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdClansAddOrUpdateGroupMemberResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::getUser
==============
*/

bdUserAccountID *__fastcall bdClansAddOrUpdateGroupMemberResponse::getUser(bdClansAddOrUpdateGroupMemberResponse *this, bdUserAccountID *result)
{
  return ?getUser@bdClansAddOrUpdateGroupMemberResponse@@QEBA?AVbdUserAccountID@@XZ(this, result);
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::getUserDetails
==============
*/

bdUserDetails *__fastcall bdClansAddOrUpdateGroupMemberResponse::getUserDetails(bdClansAddOrUpdateGroupMemberResponse *this, bdUserDetails *result)
{
  return ?getUserDetails@bdClansAddOrUpdateGroupMemberResponse@@QEBA?AVbdUserDetails@@XZ(this, result);
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::getGroup
==============
*/

bdClansGroupIdentifier *__fastcall bdClansAddOrUpdateGroupMemberResponse::getGroup(bdClansAddOrUpdateGroupMemberResponse *this, bdClansGroupIdentifier *result)
{
  return ?getGroup@bdClansAddOrUpdateGroupMemberResponse@@QEBA?AVbdClansGroupIdentifier@@XZ(this, result);
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::bdClansAddOrUpdateGroupMemberResponse
==============
*/

void __fastcall bdClansAddOrUpdateGroupMemberResponse::bdClansAddOrUpdateGroupMemberResponse(bdClansAddOrUpdateGroupMemberResponse *this)
{
  ??0bdClansAddOrUpdateGroupMemberResponse@@QEAA@XZ(this);
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::hasProposal
==============
*/

bool __fastcall bdClansAddOrUpdateGroupMemberResponse::hasProposal(bdClansAddOrUpdateGroupMemberResponse *this)
{
  return ?hasProposal@bdClansAddOrUpdateGroupMemberResponse@@QEBA_NXZ(this);
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::deserialize
==============
*/

bool __fastcall bdClansAddOrUpdateGroupMemberResponse::deserialize(bdClansAddOrUpdateGroupMemberResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansAddOrUpdateGroupMemberResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::getRole
==============
*/

unsigned __int16 __fastcall bdClansAddOrUpdateGroupMemberResponse::getRole(bdClansAddOrUpdateGroupMemberResponse *this)
{
  return ?getRole@bdClansAddOrUpdateGroupMemberResponse@@QEBAGXZ(this);
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::bdClansAddOrUpdateGroupMemberResponse
==============
*/
void bdClansAddOrUpdateGroupMemberResponse::bdClansAddOrUpdateGroupMemberResponse(bdClansAddOrUpdateGroupMemberResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansAddOrUpdateGroupMemberResponse::`vbtable';
    *(_QWORD *)this->gap6C0 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap6C0[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansAddOrUpdateGroupMemberResponse_vtbl *)&bdClansAddOrUpdateGroupMemberResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansAddOrUpdateGroupMemberResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansAddOrUpdateGroupMemberResponse_vtbl *)&bdClansAddOrUpdateGroupMemberResponse::`vftable'{for `bdReferencable'};
  bdStructUserDetails::bdStructUserDetails((bdStructUserDetails *)(&this->__vftable + 2));
  bdClansGroupIdentifier::bdClansGroupIdentifier(&this->m_group);
  this->m_role = 0;
  this->m_proposal.m_hasValue = 0;
  bdClansGroupMembershipProposal::bdClansGroupMembershipProposal(&this->m_proposal.m_value);
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::deserialize
==============
*/
bool bdClansAddOrUpdateGroupMemberResponse::deserialize(bdClansAddOrUpdateGroupMemberResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)&this->m_user[112]) && bdStructBufferDeserializer::readObject(deserializer, 2u, &this->m_group) && bdStructBufferDeserializer::readUInt16(deserializer, 3u, &this->m_role) && bdStructBufferDeserializer::readOptionalObject<bdClansGroupMembershipProposal>(deserializer, 4u, &this->m_proposal);
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::getGroup
==============
*/
bdClansGroupIdentifier *bdClansAddOrUpdateGroupMemberResponse::getGroup(bdClansAddOrUpdateGroupMemberResponse *this, bdClansGroupIdentifier *result)
{
  bdClansGroupIdentifier::bdClansGroupIdentifier(result, &this->m_group);
  return result;
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::getProposal
==============
*/
bdClansGroupMembershipProposal *bdClansAddOrUpdateGroupMemberResponse::getProposal(bdClansAddOrUpdateGroupMemberResponse *this, bdClansGroupMembershipProposal *result)
{
  __int64 v6; 

  bdHandleAssert(this->m_proposal.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdClansGroupMembershipProposal>::getValue", 0x3Cu, "Has no value", 0, -2i64);
  *((_QWORD *)&result->__vftable + 1) = &bdClansGroupMembershipProposal::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)(&result->m_updatedTimestamp + 1), (const bdReferencable *)((char *)&this->m_proposal.m_value.__vftable + *(int *)(*((_QWORD *)&this->m_proposal.m_value.__vftable + 1) + 4i64) + 8));
  bdStructBufferSerializable::bdStructBufferSerializable(result, &this->m_proposal.m_value);
  result->__vftable = (bdClansGroupMembershipProposal_vtbl *)&bdClansGroupMembershipProposal::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupMembershipProposal_vtbl **)((char *)&result->__vftable + *(int *)(*((_QWORD *)&result->__vftable + 1) + 4i64) + 8) = (bdClansGroupMembershipProposal_vtbl *)&bdClansGroupMembershipProposal::`vftable'{for `bdReferencable'};
  bdStructUserDetails::bdStructUserDetails((bdStructUserDetails *)(&result->__vftable + 2), (const bdStructUserDetails *)(&this->m_proposal.m_value.__vftable + 2));
  bdStructUserDetails::bdStructUserDetails(&result->m_targetUser, &this->m_proposal.m_value.m_targetUser);
  result->m_role = this->m_proposal.m_value.m_role;
  bdClansGroupIdentifier::bdClansGroupIdentifier(&result->m_group, &this->m_proposal.m_value.m_group);
  result->m_replacesGroupID = this->m_proposal.m_value.m_replacesGroupID;
  result->m_attachmentSize = this->m_proposal.m_value.m_attachmentSize;
  _RCX = result->m_attachment;
  _RAX = this->m_proposal.m_value.m_attachment;
  v6 = 8i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX += 128;
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX += 128;
    --v6;
  }
  while ( v6 );
  result->m_updatedTimestamp = this->m_proposal.m_value.m_updatedTimestamp;
  return result;
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::getRole
==============
*/
__int64 bdClansAddOrUpdateGroupMemberResponse::getRole(bdClansAddOrUpdateGroupMemberResponse *this)
{
  return this->m_role;
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::getUser
==============
*/
bdUserAccountID *bdClansAddOrUpdateGroupMemberResponse::getUser(bdClansAddOrUpdateGroupMemberResponse *this, bdUserAccountID *result)
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
bdClansAddOrUpdateGroupMemberResponse::getUserDetails
==============
*/
bdUserDetails *bdClansAddOrUpdateGroupMemberResponse::getUserDetails(bdClansAddOrUpdateGroupMemberResponse *this, bdUserDetails *result)
{
  bdUserDetails::bdUserDetails(result, (const bdUserDetails *)(&this->__vftable + 2));
  return result;
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::hasProposal
==============
*/
_BOOL8 bdClansAddOrUpdateGroupMemberResponse::hasProposal(bdClansAddOrUpdateGroupMemberResponse *this)
{
  return this->m_proposal.m_hasValue;
}

/*
==============
bdClansAddOrUpdateGroupMemberResponse::serialize
==============
*/
bool bdClansAddOrUpdateGroupMemberResponse::serialize(bdClansAddOrUpdateGroupMemberResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansaddorupdategroupmemberresponse.cpp", "bdClansAddOrUpdateGroupMemberResponse::serialize", 0x15u, "NOT IMPLEMENTED");
  return 0;
}

