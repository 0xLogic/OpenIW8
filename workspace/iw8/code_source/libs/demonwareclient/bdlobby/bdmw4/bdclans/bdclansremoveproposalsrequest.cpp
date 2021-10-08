/*
==============
bdClansRemoveProposalsRequest::deserialize
==============
*/

bool __fastcall bdClansRemoveProposalsRequest::deserialize(bdClansRemoveProposalsRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdClansRemoveProposalsRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdClansRemoveProposalsRequest::serialize
==============
*/

bool __fastcall bdClansRemoveProposalsRequest::serialize(bdClansRemoveProposalsRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansRemoveProposalsRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansRemoveProposalsRequest::bdClansRemoveProposalsRequest
==============
*/

void __fastcall bdClansRemoveProposalsRequest::bdClansRemoveProposalsRequest(bdClansRemoveProposalsRequest *this, const bdArray<bdClansRemovedMembershipProposal> *proposals)
{
  ??0bdClansRemoveProposalsRequest@@QEAA@AEBV?$bdArray@VbdClansRemovedMembershipProposal@@@@@Z(this, proposals);
}

/*
==============
bdClansRemoveProposalsRequest::setProposals
==============
*/

void __fastcall bdClansRemoveProposalsRequest::setProposals(bdClansRemoveProposalsRequest *this, const bdArray<bdClansRemovedMembershipProposal> *proposals)
{
  ?setProposals@bdClansRemoveProposalsRequest@@QEAAXAEBV?$bdArray@VbdClansRemovedMembershipProposal@@@@@Z(this, proposals);
}

/*
==============
bdClansRemoveProposalsRequest::bdClansRemoveProposalsRequest
==============
*/
void bdClansRemoveProposalsRequest::bdClansRemoveProposalsRequest(bdClansRemoveProposalsRequest *this, const bdArray<bdClansRemovedMembershipProposal> *proposals, int a3)
{
  bdClansRemovedMembershipProposal *v5; 
  __int64 m_capacity; 

  v5 = NULL;
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansRemoveProposalsRequest::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansRemoveProposalsRequest_vtbl *)&bdClansRemoveProposalsRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansRemoveProposalsRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansRemoveProposalsRequest_vtbl *)&bdClansRemoveProposalsRequest::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 6) = proposals->m_capacity;
  *((_DWORD *)&this->__vftable + 7) = proposals->m_size;
  m_capacity = proposals->m_capacity;
  if ( (_DWORD)m_capacity )
  {
    v5 = (bdClansRemovedMembershipProposal *)bdMemory::allocate(272 * m_capacity);
    bdArray<bdClansRemovedMembershipProposal>::copyConstructArrayArray((bdArray<bdClansRemovedMembershipProposal> *)&this->__vftable + 1, v5, proposals->m_data, proposals->m_size);
  }
  *((_QWORD *)&this->__vftable + 2) = v5;
}

/*
==============
bdClansRemoveProposalsRequest::deserialize
==============
*/
bool bdClansRemoveProposalsRequest::deserialize(bdClansRemoveProposalsRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansremoveproposalsrequest.cpp", "bdClansRemoveProposalsRequest::deserialize", 0x1Du, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdClansRemoveProposalsRequest::serialize
==============
*/
bool bdClansRemoveProposalsRequest::serialize(bdClansRemoveProposalsRequest *this, bdStructBufferSerializer *serializer)
{
  unsigned int v2; 
  unsigned int v3; 
  bool result; 

  v2 = *((_DWORD *)&this->__vftable + 7);
  v3 = 0;
  for ( result = 1; v3 < v2; ++v3 )
    result = result && (bdHandleAssert(v3 < *((_DWORD *)&this->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdClansRemovedMembershipProposal>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed"), bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)(*((_QWORD *)&this->__vftable + 2) + 272i64 * v3)));
  return result;
}

/*
==============
bdClansRemoveProposalsRequest::setProposals
==============
*/
void bdClansRemoveProposalsRequest::setProposals(bdClansRemoveProposalsRequest *this, const bdArray<bdClansRemovedMembershipProposal> *proposals)
{
  bdArray<bdClansRemovedMembershipProposal>::operator=((bdArray<bdClansRemovedMembershipProposal> *)&this->__vftable + 1, proposals);
}

