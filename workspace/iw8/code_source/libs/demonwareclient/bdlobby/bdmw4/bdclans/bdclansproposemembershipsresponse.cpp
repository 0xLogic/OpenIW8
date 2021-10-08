/*
==============
bdClansProposeMembershipsResponse::deserialize
==============
*/

bool __fastcall bdClansProposeMembershipsResponse::deserialize(bdClansProposeMembershipsResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansProposeMembershipsResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansProposeMembershipsResponse::getProposals
==============
*/

bdArray<bdClansGroupMembershipProposal> *__fastcall bdClansProposeMembershipsResponse::getProposals(bdClansProposeMembershipsResponse *this, bdArray<bdClansGroupMembershipProposal> *result)
{
  return ?getProposals@bdClansProposeMembershipsResponse@@QEBA?AV?$bdArray@VbdClansGroupMembershipProposal@@@@XZ(this, result);
}

/*
==============
bdClansProposeMembershipsResponse::bdClansProposeMembershipsResponse
==============
*/

void __fastcall bdClansProposeMembershipsResponse::bdClansProposeMembershipsResponse(bdClansProposeMembershipsResponse *this)
{
  ??0bdClansProposeMembershipsResponse@@QEAA@XZ(this);
}

/*
==============
bdClansProposeMembershipsResponse::serialize
==============
*/

bool __fastcall bdClansProposeMembershipsResponse::serialize(bdClansProposeMembershipsResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdClansProposeMembershipsResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdClansProposeMembershipsResponse::getNewMembers
==============
*/

bdArray<bdClansUserMembershipProposal> *__fastcall bdClansProposeMembershipsResponse::getNewMembers(bdClansProposeMembershipsResponse *this, bdArray<bdClansUserMembershipProposal> *result)
{
  return ?getNewMembers@bdClansProposeMembershipsResponse@@QEBA?AV?$bdArray@VbdClansUserMembershipProposal@@@@XZ(this, result);
}

/*
==============
bdClansProposeMembershipsResponse::getFailedProposals
==============
*/

bdArray<bdClansFailedMembershipProposal> *__fastcall bdClansProposeMembershipsResponse::getFailedProposals(bdClansProposeMembershipsResponse *this, bdArray<bdClansFailedMembershipProposal> *result)
{
  return ?getFailedProposals@bdClansProposeMembershipsResponse@@QEBA?AV?$bdArray@VbdClansFailedMembershipProposal@@@@XZ(this, result);
}

/*
==============
bdClansProposeMembershipsResponse::bdClansProposeMembershipsResponse
==============
*/
void bdClansProposeMembershipsResponse::bdClansProposeMembershipsResponse(bdClansProposeMembershipsResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansProposeMembershipsResponse::`vbtable';
    *(_QWORD *)this->gap40 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap40[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansProposeMembershipsResponse_vtbl *)&bdClansProposeMembershipsResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansProposeMembershipsResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansProposeMembershipsResponse_vtbl *)&bdClansProposeMembershipsResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_failedProposals.m_data = NULL;
  *(_QWORD *)&this->m_failedProposals.m_capacity = 0i64;
  this->m_newMembers.m_data = NULL;
  *(_QWORD *)&this->m_newMembers.m_capacity = 0i64;
}

/*
==============
bdClansProposeMembershipsResponse::deserialize
==============
*/
bool bdClansProposeMembershipsResponse::deserialize(bdClansProposeMembershipsResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObjectArray<bdClansGroupMembershipProposal>(deserializer, 1u, (bdArray<bdClansGroupMembershipProposal> *)&this->__vftable + 1) && bdStructBufferDeserializer::readObjectArray<bdClansFailedMembershipProposal>(deserializer, 2u, &this->m_failedProposals) && bdStructBufferDeserializer::readObjectArray<bdClansUserMembershipProposal>(deserializer, 3u, &this->m_newMembers);
}

/*
==============
bdClansProposeMembershipsResponse::getFailedProposals
==============
*/
bdArray<bdClansFailedMembershipProposal> *bdClansProposeMembershipsResponse::getFailedProposals(bdClansProposeMembershipsResponse *this, bdArray<bdClansFailedMembershipProposal> *result)
{
  __int64 m_capacity; 
  bdClansFailedMembershipProposal *v5; 
  bdArray<bdClansFailedMembershipProposal> *v6; 

  result->m_capacity = this->m_failedProposals.m_capacity;
  result->m_size = this->m_failedProposals.m_size;
  m_capacity = this->m_failedProposals.m_capacity;
  if ( (_DWORD)m_capacity )
  {
    v5 = (bdClansFailedMembershipProposal *)bdMemory::allocate(264 * m_capacity);
    bdArray<bdClansFailedMembershipProposal>::copyConstructArrayArray(result, v5, this->m_failedProposals.m_data, this->m_failedProposals.m_size);
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
bdClansProposeMembershipsResponse::getNewMembers
==============
*/
bdArray<bdClansUserMembershipProposal> *bdClansProposeMembershipsResponse::getNewMembers(bdClansProposeMembershipsResponse *this, bdArray<bdClansUserMembershipProposal> *result)
{
  __int64 m_capacity; 
  bdClansUserMembershipProposal *v5; 
  bdArray<bdClansUserMembershipProposal> *v6; 

  result->m_capacity = this->m_newMembers.m_capacity;
  result->m_size = this->m_newMembers.m_size;
  m_capacity = this->m_newMembers.m_capacity;
  if ( (_DWORD)m_capacity )
  {
    v5 = (bdClansUserMembershipProposal *)bdMemory::allocate(1224 * m_capacity);
    bdArray<bdClansUserMembershipProposal>::copyConstructArrayArray(result, v5, this->m_newMembers.m_data, this->m_newMembers.m_size);
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
bdClansProposeMembershipsResponse::getProposals
==============
*/
bdArray<bdClansGroupMembershipProposal> *bdClansProposeMembershipsResponse::getProposals(bdClansProposeMembershipsResponse *this, bdArray<bdClansGroupMembershipProposal> *result)
{
  __int64 v4; 
  bdClansGroupMembershipProposal *v5; 
  bdArray<bdClansGroupMembershipProposal> *v6; 

  result->m_capacity = *((_DWORD *)&this->__vftable + 6);
  result->m_size = *((_DWORD *)&this->__vftable + 7);
  v4 = *((unsigned int *)&this->__vftable + 6);
  if ( (_DWORD)v4 )
  {
    v5 = (bdClansGroupMembershipProposal *)bdMemory::allocate(1472 * v4);
    bdArray<bdClansGroupMembershipProposal>::copyConstructArrayArray(result, v5, *((const bdClansGroupMembershipProposal **)&this->__vftable + 2), *((_DWORD *)&this->__vftable + 7));
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
bdClansProposeMembershipsResponse::serialize
==============
*/
bool bdClansProposeMembershipsResponse::serialize(bdClansProposeMembershipsResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansproposemembershipsresponse.cpp", "bdClansProposeMembershipsResponse::serialize", 0x14u, "NOT IMPLEMENTED");
  return 0;
}

