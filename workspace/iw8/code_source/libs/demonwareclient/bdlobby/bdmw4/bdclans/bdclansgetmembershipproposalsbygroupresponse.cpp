/*
==============
bdClansGetMembershipProposalsByGroupResponse::getNextPageToken
==============
*/

const char *__fastcall bdClansGetMembershipProposalsByGroupResponse::getNextPageToken(bdClansGetMembershipProposalsByGroupResponse *this)
{
  return ?getNextPageToken@bdClansGetMembershipProposalsByGroupResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdClansGetMembershipProposalsByGroupResponse::reset
==============
*/

void __fastcall bdClansGetMembershipProposalsByGroupResponse::reset(bdClansGetMembershipProposalsByGroupResponse *this)
{
  ?reset@bdClansGetMembershipProposalsByGroupResponse@@QEAAXXZ(this);
}

/*
==============
bdClansGetMembershipProposalsByGroupResponse::getProposals
==============
*/

bdArray<bdClansGroupMembershipProposal> *__fastcall bdClansGetMembershipProposalsByGroupResponse::getProposals(bdClansGetMembershipProposalsByGroupResponse *this, bdArray<bdClansGroupMembershipProposal> *result)
{
  return ?getProposals@bdClansGetMembershipProposalsByGroupResponse@@QEBA?AV?$bdArray@VbdClansGroupMembershipProposal@@@@XZ(this, result);
}

/*
==============
bdClansGetMembershipProposalsByGroupResponse::bdClansGetMembershipProposalsByGroupResponse
==============
*/

void __fastcall bdClansGetMembershipProposalsByGroupResponse::bdClansGetMembershipProposalsByGroupResponse(bdClansGetMembershipProposalsByGroupResponse *this)
{
  ??0bdClansGetMembershipProposalsByGroupResponse@@QEAA@XZ(this);
}

/*
==============
bdClansGetMembershipProposalsByGroupResponse::deserialize
==============
*/

bool __fastcall bdClansGetMembershipProposalsByGroupResponse::deserialize(bdClansGetMembershipProposalsByGroupResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansGetMembershipProposalsByGroupResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansGetMembershipProposalsByGroupResponse::serialize
==============
*/

bool __fastcall bdClansGetMembershipProposalsByGroupResponse::serialize(bdClansGetMembershipProposalsByGroupResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdClansGetMembershipProposalsByGroupResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdClansGetMembershipProposalsByGroupResponse::bdClansGetMembershipProposalsByGroupResponse
==============
*/
void bdClansGetMembershipProposalsByGroupResponse::bdClansGetMembershipProposalsByGroupResponse(bdClansGetMembershipProposalsByGroupResponse *this, int a2)
{
  unsigned __int64 v3; 
  size_t v4; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGetMembershipProposalsByGroupResponse::`vbtable';
    *(_QWORD *)this->gapA0 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA0[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGetMembershipProposalsByGroupResponse_vtbl *)&bdClansGetMembershipProposalsByGroupResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetMembershipProposalsByGroupResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGetMembershipProposalsByGroupResponse_vtbl *)&bdClansGetMembershipProposalsByGroupResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdClansGetMembershipProposalsByGroupResponse *)-32i64 )
  {
    v4 = 127i64;
    if ( v3 < 0x7F )
      v4 = v3;
    memcpy_0(&this->m_nextPageToken, (char *)&queryFormat.fmt + 3, v4);
    this->m_nextPageToken.m_buffer[v4] = 0;
  }
}

/*
==============
bdClansGetMembershipProposalsByGroupResponse::deserialize
==============
*/
bool bdClansGetMembershipProposalsByGroupResponse::deserialize(bdClansGetMembershipProposalsByGroupResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObjectArray<bdClansGroupMembershipProposal>(deserializer, 1u, (bdArray<bdClansGroupMembershipProposal> *)&this->__vftable + 1) && bdStructBufferDeserializer::readString(deserializer, 2u, this->m_nextPageToken.m_buffer, 0x80u);
}

/*
==============
bdClansGetMembershipProposalsByGroupResponse::getNextPageToken
==============
*/
bdStructFixedSizeString<127> *bdClansGetMembershipProposalsByGroupResponse::getNextPageToken(bdClansGetMembershipProposalsByGroupResponse *this)
{
  return &this->m_nextPageToken;
}

/*
==============
bdClansGetMembershipProposalsByGroupResponse::getProposals
==============
*/
bdArray<bdClansGroupMembershipProposal> *bdClansGetMembershipProposalsByGroupResponse::getProposals(bdClansGetMembershipProposalsByGroupResponse *this, bdArray<bdClansGroupMembershipProposal> *result)
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
bdClansGetMembershipProposalsByGroupResponse::reset
==============
*/
void bdClansGetMembershipProposalsByGroupResponse::reset(bdClansGetMembershipProposalsByGroupResponse *this)
{
  bdStructFixedSizeString<127> *p_m_nextPageToken; 
  unsigned __int64 v3; 
  size_t v4; 

  bdArray<bdClansGroupMembershipProposal>::destruct((bdArray<bdClansGroupMembershipProposal> *)&this->__vftable + 1, *((bdClansGroupMembershipProposal **)&this->__vftable + 2), *((_DWORD *)&this->__vftable + 7));
  bdMemory::deallocate(*((void **)&this->__vftable + 2));
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  p_m_nextPageToken = &this->m_nextPageToken;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdClansGetMembershipProposalsByGroupResponse *)-32i64 )
  {
    v4 = 127i64;
    if ( v3 < 0x7F )
      v4 = v3;
    memcpy_0(p_m_nextPageToken, (char *)&queryFormat.fmt + 3, v4);
    p_m_nextPageToken->m_buffer[v4] = 0;
  }
  if ( v3 > 0x7F )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<127>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<127>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
}

/*
==============
bdClansGetMembershipProposalsByGroupResponse::serialize
==============
*/
bool bdClansGetMembershipProposalsByGroupResponse::serialize(bdClansGetMembershipProposalsByGroupResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansgetmembershipproposalsbygroupresponse.cpp", "bdClansGetMembershipProposalsByGroupResponse::serialize", 0x23u, "NOT IMPLEMENTED");
  return 0;
}

