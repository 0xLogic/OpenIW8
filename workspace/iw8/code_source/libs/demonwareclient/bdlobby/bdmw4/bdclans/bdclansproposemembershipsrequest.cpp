/*
==============
bdClansProposeMembershipsRequest::serialize
==============
*/

bool __fastcall bdClansProposeMembershipsRequest::serialize(bdClansProposeMembershipsRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansProposeMembershipsRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansProposeMembershipsRequest::deserialize
==============
*/

bool __fastcall bdClansProposeMembershipsRequest::deserialize(bdClansProposeMembershipsRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdClansProposeMembershipsRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdClansProposeMembershipsRequest::setProposals
==============
*/

void __fastcall bdClansProposeMembershipsRequest::setProposals(bdClansProposeMembershipsRequest *this, const bdArray<bdClansUserMembershipProposal> *proposals)
{
  ?setProposals@bdClansProposeMembershipsRequest@@QEAAXAEBV?$bdArray@VbdClansUserMembershipProposal@@@@@Z(this, proposals);
}

/*
==============
bdClansProposeMembershipsRequest::bdClansProposeMembershipsRequest
==============
*/

void __fastcall bdClansProposeMembershipsRequest::bdClansProposeMembershipsRequest(bdClansProposeMembershipsRequest *this, const bdClansGroupIdentifier *group, const bdArray<bdClansUserMembershipProposal> *proposals)
{
  ??0bdClansProposeMembershipsRequest@@QEAA@VbdClansGroupIdentifier@@AEBV?$bdArray@VbdClansUserMembershipProposal@@@@@Z(this, group, proposals);
}

/*
==============
bdClansProposeMembershipsRequest::setGroup
==============
*/

void __fastcall bdClansProposeMembershipsRequest::setGroup(bdClansProposeMembershipsRequest *this, const bdClansGroupIdentifier *group)
{
  ?setGroup@bdClansProposeMembershipsRequest@@QEAAXVbdClansGroupIdentifier@@@Z(this, group);
}

/*
==============
bdClansProposeMembershipsRequest::bdClansProposeMembershipsRequest
==============
*/
void bdClansProposeMembershipsRequest::bdClansProposeMembershipsRequest(bdClansProposeMembershipsRequest *this, const bdClansGroupIdentifier *group, const bdArray<bdClansUserMembershipProposal> *proposals, int a4)
{
  bdClansUserMembershipProposal *v7; 
  __int64 m_capacity; 

  v7 = NULL;
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansProposeMembershipsRequest::`vbtable';
    *(_QWORD *)this->gap60 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap60[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansProposeMembershipsRequest_vtbl *)&bdClansProposeMembershipsRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansProposeMembershipsRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansProposeMembershipsRequest_vtbl *)&bdClansProposeMembershipsRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 3) = &bdClansGroupIdentifier::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&this->m_group[32], (const bdReferencable *)((char *)&group->__vftable + *(int *)(*((_QWORD *)&group->__vftable + 1) + 4i64) + 8));
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 2), group);
  *((_QWORD *)&this->__vftable + 2) = &bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansProposeMembershipsRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24) = (bdClansProposeMembershipsRequest_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *(_WORD *)this->m_group = *((_WORD *)&group->__vftable + 8);
  *(_QWORD *)&this->m_group[8] = *((_QWORD *)&group->__vftable + 3);
  *(_WORD *)&this->m_group[16] = group->m_rootKind;
  *(_QWORD *)&this->m_group[24] = group->m_rootID;
  this->m_proposals.m_capacity = proposals->m_capacity;
  this->m_proposals.m_size = proposals->m_size;
  m_capacity = proposals->m_capacity;
  if ( (_DWORD)m_capacity )
  {
    v7 = (bdClansUserMembershipProposal *)bdMemory::allocate(1224 * m_capacity);
    bdArray<bdClansUserMembershipProposal>::copyConstructArrayArray(&this->m_proposals, v7, proposals->m_data, proposals->m_size);
  }
  this->m_proposals.m_data = v7;
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&group->m_rootID + 1));
}

/*
==============
bdClansProposeMembershipsRequest::deserialize
==============
*/
bool bdClansProposeMembershipsRequest::deserialize(bdClansProposeMembershipsRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansproposemembershipsrequest.cpp", "bdClansProposeMembershipsRequest::deserialize", 0x26u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdClansProposeMembershipsRequest::serialize
==============
*/
bool bdClansProposeMembershipsRequest::serialize(bdClansProposeMembershipsRequest *this, bdStructBufferSerializer *serializer)
{
  unsigned int m_size; 
  unsigned int v5; 
  bool v6; 

  if ( !bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)(&this->__vftable + 2)) )
    return 0;
  m_size = this->m_proposals.m_size;
  v5 = 0;
  v6 = 1;
  if ( !m_size )
    return 1;
  do
  {
    v6 = v6 && (bdHandleAssert(v5 < this->m_proposals.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdClansUserMembershipProposal>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed"), bdStructBufferSerializer::writeObject(serializer, 2u, &this->m_proposals.m_data[v5]));
    ++v5;
  }
  while ( v5 < m_size );
  return v6;
}

/*
==============
bdClansProposeMembershipsRequest::setGroup
==============
*/
void bdClansProposeMembershipsRequest::setGroup(bdClansProposeMembershipsRequest *this, const bdClansGroupIdentifier *group)
{
  bdClansProposeMembershipsRequest_vtbl **v3; 

  v3 = &this->__vftable + 2;
  bdReferencable::operator=((bdReferencable *)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24), (const bdReferencable *)((char *)&group->__vftable + *(int *)(*((_QWORD *)&group->__vftable + 1) + 4i64) + 8));
  *((_WORD *)v3 + 8) = *((_WORD *)&group->__vftable + 8);
  v3[3] = (bdClansProposeMembershipsRequest_vtbl *)*((_QWORD *)&group->__vftable + 3);
  *((_WORD *)v3 + 16) = group->m_rootKind;
  v3[5] = (bdClansProposeMembershipsRequest_vtbl *)group->m_rootID;
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&group->m_rootID + 1));
}

/*
==============
bdClansProposeMembershipsRequest::setProposals
==============
*/
void bdClansProposeMembershipsRequest::setProposals(bdClansProposeMembershipsRequest *this, const bdArray<bdClansUserMembershipProposal> *proposals)
{
  bdArray<bdClansUserMembershipProposal>::operator=(&this->m_proposals, proposals);
}

