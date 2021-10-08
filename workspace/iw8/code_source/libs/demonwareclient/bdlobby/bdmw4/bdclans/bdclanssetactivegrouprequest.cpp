/*
==============
bdClansSetActiveGroupRequest::~bdClansSetActiveGroupRequest
==============
*/

void __fastcall bdClansSetActiveGroupRequest::~bdClansSetActiveGroupRequest(bdClansSetActiveGroupRequest *this)
{
  ??1bdClansSetActiveGroupRequest@@UEAA@XZ(this);
}

/*
==============
bdClansSetActiveGroupRequest::setGroup
==============
*/

void __fastcall bdClansSetActiveGroupRequest::setGroup(bdClansSetActiveGroupRequest *this, const bdClansGroupIdentifier *group)
{
  ?setGroup@bdClansSetActiveGroupRequest@@QEAAXAEBVbdClansGroupIdentifier@@@Z(this, group);
}

/*
==============
bdClansSetActiveGroupRequest::bdClansSetActiveGroupRequest
==============
*/

void __fastcall bdClansSetActiveGroupRequest::bdClansSetActiveGroupRequest(bdClansSetActiveGroupRequest *this, const bdClansGroupIdentifier *group)
{
  ??0bdClansSetActiveGroupRequest@@QEAA@AEBVbdClansGroupIdentifier@@@Z(this, group);
}

/*
==============
bdClansSetActiveGroupRequest::serialize
==============
*/

bool __fastcall bdClansSetActiveGroupRequest::serialize(bdClansSetActiveGroupRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansSetActiveGroupRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansSetActiveGroupRequest::deserialize
==============
*/

bool __fastcall bdClansSetActiveGroupRequest::deserialize(bdClansSetActiveGroupRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdClansSetActiveGroupRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdClansSetActiveGroupRequest::bdClansSetActiveGroupRequest
==============
*/
void bdClansSetActiveGroupRequest::bdClansSetActiveGroupRequest(bdClansSetActiveGroupRequest *this, const bdClansGroupIdentifier *group, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansSetActiveGroupRequest::`vbtable';
    *(_QWORD *)&this->m_group[48] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_group[56] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansSetActiveGroupRequest_vtbl *)&bdClansSetActiveGroupRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansSetActiveGroupRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansSetActiveGroupRequest_vtbl *)&bdClansSetActiveGroupRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 3) = &bdClansGroupIdentifier::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&this->m_group[32], (const bdReferencable *)((char *)&group->__vftable + *(int *)(*((_QWORD *)&group->__vftable + 1) + 4i64) + 8));
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 2), group);
  *((_QWORD *)&this->__vftable + 2) = &bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansSetActiveGroupRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24) = (bdClansSetActiveGroupRequest_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *(_WORD *)this->m_group = *((_WORD *)&group->__vftable + 8);
  *(_QWORD *)&this->m_group[8] = *((_QWORD *)&group->__vftable + 3);
  *(_WORD *)&this->m_group[16] = group->m_rootKind;
  *(_QWORD *)&this->m_group[24] = group->m_rootID;
}

/*
==============
bdClansSetActiveGroupRequest::~bdClansSetActiveGroupRequest
==============
*/
void bdClansSetActiveGroupRequest::~bdClansSetActiveGroupRequest(bdClansSetActiveGroupRequest *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdClansSetActiveGroupRequest::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 72) = &bdClansSetActiveGroupRequest::`vftable'{for `bdReferencable'};
  bdStructBufferSerializable::~bdStructBufferSerializable((bdClansSetActiveGroupRequest *)((char *)this - 48));
  bdReferencable::~bdReferencable((bdReferencable *)&this[-1].m_group[48]);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdClansSetActiveGroupRequest *)((char *)this - 64));
}

/*
==============
bdClansSetActiveGroupRequest::deserialize
==============
*/
bool bdClansSetActiveGroupRequest::deserialize(bdClansSetActiveGroupRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclanssetactivegrouprequest.cpp", "bdClansSetActiveGroupRequest::deserialize", 0x20u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdClansSetActiveGroupRequest::serialize
==============
*/
bool bdClansSetActiveGroupRequest::serialize(bdClansSetActiveGroupRequest *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)(&this->__vftable + 2));
}

/*
==============
bdClansSetActiveGroupRequest::setGroup
==============
*/
void bdClansSetActiveGroupRequest::setGroup(bdClansSetActiveGroupRequest *this, const bdClansGroupIdentifier *group)
{
  bdClansSetActiveGroupRequest_vtbl **v2; 

  v2 = &this->__vftable + 2;
  bdReferencable::operator=((bdReferencable *)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24), (const bdReferencable *)((char *)&group->__vftable + *(int *)(*((_QWORD *)&group->__vftable + 1) + 4i64) + 8));
  *((_WORD *)v2 + 8) = *((_WORD *)&group->__vftable + 8);
  v2[3] = (bdClansSetActiveGroupRequest_vtbl *)*((_QWORD *)&group->__vftable + 3);
  *((_WORD *)v2 + 16) = group->m_rootKind;
  v2[5] = (bdClansSetActiveGroupRequest_vtbl *)group->m_rootID;
}

