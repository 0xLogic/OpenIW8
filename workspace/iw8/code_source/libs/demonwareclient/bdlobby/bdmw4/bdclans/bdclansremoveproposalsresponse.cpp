/*
==============
bdClansRemoveProposalsResponse::deserialize
==============
*/

bool __fastcall bdClansRemoveProposalsResponse::deserialize(bdClansRemoveProposalsResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansRemoveProposalsResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansRemoveProposalsResponse::getFailedProposals
==============
*/

bdArray<bdClansFailedMembershipProposal> *__fastcall bdClansRemoveProposalsResponse::getFailedProposals(bdClansRemoveProposalsResponse *this, bdArray<bdClansFailedMembershipProposal> *result)
{
  return ?getFailedProposals@bdClansRemoveProposalsResponse@@QEBA?AV?$bdArray@VbdClansFailedMembershipProposal@@@@XZ(this, result);
}

/*
==============
bdClansRemoveProposalsResponse::getProposals
==============
*/

bdArray<bdClansRemovedMembershipProposal> *__fastcall bdClansRemoveProposalsResponse::getProposals(bdClansRemoveProposalsResponse *this, bdArray<bdClansRemovedMembershipProposal> *result)
{
  return ?getProposals@bdClansRemoveProposalsResponse@@QEBA?AV?$bdArray@VbdClansRemovedMembershipProposal@@@@XZ(this, result);
}

/*
==============
bdClansRemoveProposalsResponse::serialize
==============
*/

bool __fastcall bdClansRemoveProposalsResponse::serialize(bdClansRemoveProposalsResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdClansRemoveProposalsResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdClansRemoveProposalsResponse::bdClansRemoveProposalsResponse
==============
*/

void __fastcall bdClansRemoveProposalsResponse::bdClansRemoveProposalsResponse(bdClansRemoveProposalsResponse *this)
{
  ??0bdClansRemoveProposalsResponse@@QEAA@XZ(this);
}

/*
==============
bdClansRemoveProposalsResponse::bdClansRemoveProposalsResponse
==============
*/
void bdClansRemoveProposalsResponse::bdClansRemoveProposalsResponse(bdClansRemoveProposalsResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansRemoveProposalsResponse::`vbtable';
    *((_QWORD *)&this->m_failedProposals + 2) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_failedProposals + 6) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansRemoveProposalsResponse_vtbl *)&bdClansRemoveProposalsResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansRemoveProposalsResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansRemoveProposalsResponse_vtbl *)&bdClansRemoveProposalsResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_failedProposals.m_data = NULL;
  *(_QWORD *)&this->m_failedProposals.m_capacity = 0i64;
}

/*
==============
bdClansRemoveProposalsResponse::deserialize
==============
*/
bool bdClansRemoveProposalsResponse::deserialize(bdClansRemoveProposalsResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObjectArray<bdClansRemovedMembershipProposal>(deserializer, 1u, (bdArray<bdClansRemovedMembershipProposal> *)&this->__vftable + 1) && bdStructBufferDeserializer::readObjectArray<bdClansFailedMembershipProposal>(deserializer, 2u, &this->m_failedProposals);
}

/*
==============
bdClansRemoveProposalsResponse::getFailedProposals
==============
*/
bdArray<bdClansFailedMembershipProposal> *bdClansRemoveProposalsResponse::getFailedProposals(bdClansRemoveProposalsResponse *this, bdArray<bdClansFailedMembershipProposal> *result)
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
bdClansRemoveProposalsResponse::getProposals
==============
*/
bdArray<bdClansRemovedMembershipProposal> *bdClansRemoveProposalsResponse::getProposals(bdClansRemoveProposalsResponse *this, bdArray<bdClansRemovedMembershipProposal> *result)
{
  __int64 v4; 
  bdClansRemovedMembershipProposal *v5; 
  bdArray<bdClansRemovedMembershipProposal> *v6; 

  result->m_capacity = *((_DWORD *)&this->__vftable + 6);
  result->m_size = *((_DWORD *)&this->__vftable + 7);
  v4 = *((unsigned int *)&this->__vftable + 6);
  if ( (_DWORD)v4 )
  {
    v5 = (bdClansRemovedMembershipProposal *)bdMemory::allocate(272 * v4);
    bdArray<bdClansRemovedMembershipProposal>::copyConstructArrayArray(result, v5, *((const bdClansRemovedMembershipProposal **)&this->__vftable + 2), *((_DWORD *)&this->__vftable + 7));
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
bdClansRemoveProposalsResponse::serialize
==============
*/
bool bdClansRemoveProposalsResponse::serialize(bdClansRemoveProposalsResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansremoveproposalsresponse.cpp", "bdClansRemoveProposalsResponse::serialize", 0x14u, "NOT IMPLEMENTED");
  return 0;
}

