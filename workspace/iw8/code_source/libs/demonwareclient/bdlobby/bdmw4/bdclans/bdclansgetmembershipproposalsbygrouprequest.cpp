/*
==============
bdClansGetMembershipProposalsByGroupRequest::setGroup
==============
*/

void __fastcall bdClansGetMembershipProposalsByGroupRequest::setGroup(bdClansGetMembershipProposalsByGroupRequest *this, const bdClansGroupIdentifier *group)
{
  ?setGroup@bdClansGetMembershipProposalsByGroupRequest@@QEAAXVbdClansGroupIdentifier@@@Z(this, group);
}

/*
==============
bdClansGetMembershipProposalsByGroupRequest::setPageToken
==============
*/

void __fastcall bdClansGetMembershipProposalsByGroupRequest::setPageToken(bdClansGetMembershipProposalsByGroupRequest *this, const char *pageToken)
{
  ?setPageToken@bdClansGetMembershipProposalsByGroupRequest@@QEAAXPEBD@Z(this, pageToken);
}

/*
==============
bdClansGetMembershipProposalsByGroupRequest::bdClansGetMembershipProposalsByGroupRequest
==============
*/

void __fastcall bdClansGetMembershipProposalsByGroupRequest::bdClansGetMembershipProposalsByGroupRequest(bdClansGetMembershipProposalsByGroupRequest *this, const bdClansGroupIdentifier *group)
{
  ??0bdClansGetMembershipProposalsByGroupRequest@@QEAA@VbdClansGroupIdentifier@@@Z(this, group);
}

/*
==============
bdClansGetMembershipProposalsByGroupRequest::setLimit
==============
*/

void __fastcall bdClansGetMembershipProposalsByGroupRequest::setLimit(bdClansGetMembershipProposalsByGroupRequest *this, const unsigned __int16 limit)
{
  ?setLimit@bdClansGetMembershipProposalsByGroupRequest@@QEAAXG@Z(this, limit);
}

/*
==============
bdClansGetMembershipProposalsByGroupRequest::serialize
==============
*/

bool __fastcall bdClansGetMembershipProposalsByGroupRequest::serialize(bdClansGetMembershipProposalsByGroupRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansGetMembershipProposalsByGroupRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansGetMembershipProposalsByGroupRequest::deserialize
==============
*/

bool __fastcall bdClansGetMembershipProposalsByGroupRequest::deserialize(bdClansGetMembershipProposalsByGroupRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdClansGetMembershipProposalsByGroupRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdClansGetMembershipProposalsByGroupRequest::bdClansGetMembershipProposalsByGroupRequest
==============
*/

void __fastcall bdClansGetMembershipProposalsByGroupRequest::bdClansGetMembershipProposalsByGroupRequest(bdClansGetMembershipProposalsByGroupRequest *this, const bdClansGroupIdentifier *group, const unsigned __int16 limit, const char *pageToken)
{
  ??0bdClansGetMembershipProposalsByGroupRequest@@QEAA@VbdClansGroupIdentifier@@GPEBD@Z(this, group, limit, pageToken);
}

/*
==============
bdClansGetMembershipProposalsByGroupRequest::bdClansGetMembershipProposalsByGroupRequest
==============
*/
void bdClansGetMembershipProposalsByGroupRequest::bdClansGetMembershipProposalsByGroupRequest(bdClansGetMembershipProposalsByGroupRequest *this, const bdClansGroupIdentifier *group, int a3)
{
  unsigned __int64 v5; 
  size_t v6; 

  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGetMembershipProposalsByGroupRequest::`vbtable';
    *(_QWORD *)&this->gapD2[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapD2[14] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGetMembershipProposalsByGroupRequest_vtbl *)&bdClansGetMembershipProposalsByGroupRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetMembershipProposalsByGroupRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGetMembershipProposalsByGroupRequest_vtbl *)&bdClansGetMembershipProposalsByGroupRequest::`vftable'{for `bdReferencable'};
  bdClansGroupIdentifier::bdClansGroupIdentifier((bdClansGroupIdentifier *)(&this->__vftable + 2), group);
  this->m_limit = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v5 = -1i64;
  do
    ++v5;
  while ( *((_BYTE *)&queryFormat.fmt + v5 + 3) );
  if ( this != (bdClansGetMembershipProposalsByGroupRequest *)-82i64 )
  {
    v6 = 127i64;
    if ( v5 < 0x7F )
      v6 = v5;
    memcpy_0(&this->m_pageToken, (char *)&queryFormat.fmt + 3, v6);
    this->m_pageToken.m_buffer[v6] = 0;
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&group->m_rootID + 1));
}

/*
==============
bdClansGetMembershipProposalsByGroupRequest::bdClansGetMembershipProposalsByGroupRequest
==============
*/
void bdClansGetMembershipProposalsByGroupRequest::bdClansGetMembershipProposalsByGroupRequest(bdClansGetMembershipProposalsByGroupRequest *this, const bdClansGroupIdentifier *group, const unsigned __int16 limit, const char *pageToken, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGetMembershipProposalsByGroupRequest::`vbtable';
    *(_QWORD *)&this->gapD2[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapD2[14] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGetMembershipProposalsByGroupRequest_vtbl *)&bdClansGetMembershipProposalsByGroupRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetMembershipProposalsByGroupRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGetMembershipProposalsByGroupRequest_vtbl *)&bdClansGetMembershipProposalsByGroupRequest::`vftable'{for `bdReferencable'};
  bdClansGroupIdentifier::bdClansGroupIdentifier((bdClansGroupIdentifier *)(&this->__vftable + 2), group);
  this->m_limit = limit;
  bdStructFixedSizeString<127>::copy(&this->m_pageToken, pageToken);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&group->m_rootID + 1));
}

/*
==============
bdClansGetMembershipProposalsByGroupRequest::deserialize
==============
*/
bool bdClansGetMembershipProposalsByGroupRequest::deserialize(bdClansGetMembershipProposalsByGroupRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansgetmembershipproposalsbygrouprequest.cpp", "bdClansGetMembershipProposalsByGroupRequest::deserialize", 0x36u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdClansGetMembershipProposalsByGroupRequest::serialize
==============
*/
bool bdClansGetMembershipProposalsByGroupRequest::serialize(bdClansGetMembershipProposalsByGroupRequest *this, bdStructBufferSerializer *serializer)
{
  bdStructFixedSizeString<127> *p_m_pageToken; 
  unsigned int v5; 
  void *v6; 

  if ( !bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)(&this->__vftable + 2)) || !bdStructBufferSerializer::writeUInt16(serializer, 2u, this->m_limit) )
    return 0;
  p_m_pageToken = &this->m_pageToken;
  v5 = 127;
  v6 = memchr_0(p_m_pageToken, 0, 0x7Fui64);
  if ( v6 )
    v5 = (_DWORD)v6 - (_DWORD)p_m_pageToken;
  return bdStructBufferSerializer::writeString(serializer, 3u, p_m_pageToken->m_buffer, v5);
}

/*
==============
bdClansGetMembershipProposalsByGroupRequest::setGroup
==============
*/
void bdClansGetMembershipProposalsByGroupRequest::setGroup(bdClansGetMembershipProposalsByGroupRequest *this, const bdClansGroupIdentifier *group)
{
  bdClansGetMembershipProposalsByGroupRequest_vtbl **v3; 

  v3 = &this->__vftable + 2;
  bdReferencable::operator=((bdReferencable *)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24), (const bdReferencable *)((char *)&group->__vftable + *(int *)(*((_QWORD *)&group->__vftable + 1) + 4i64) + 8));
  *((_WORD *)v3 + 8) = *((_WORD *)&group->__vftable + 8);
  v3[3] = (bdClansGetMembershipProposalsByGroupRequest_vtbl *)*((_QWORD *)&group->__vftable + 3);
  *((_WORD *)v3 + 16) = group->m_rootKind;
  v3[5] = (bdClansGetMembershipProposalsByGroupRequest_vtbl *)group->m_rootID;
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&group->m_rootID + 1));
}

/*
==============
bdClansGetMembershipProposalsByGroupRequest::setLimit
==============
*/
void bdClansGetMembershipProposalsByGroupRequest::setLimit(bdClansGetMembershipProposalsByGroupRequest *this, const unsigned __int16 limit)
{
  this->m_limit = limit;
}

/*
==============
bdClansGetMembershipProposalsByGroupRequest::setPageToken
==============
*/
void bdClansGetMembershipProposalsByGroupRequest::setPageToken(bdClansGetMembershipProposalsByGroupRequest *this, const char *pageToken)
{
  bdStructFixedSizeString<127>::copy(&this->m_pageToken, pageToken);
}

