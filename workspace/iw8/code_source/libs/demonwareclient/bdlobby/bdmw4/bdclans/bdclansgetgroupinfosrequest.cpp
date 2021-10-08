/*
==============
bdClansGetGroupInfosRequest::bdClansGetGroupInfosRequest
==============
*/

void __fastcall bdClansGetGroupInfosRequest::bdClansGetGroupInfosRequest(bdClansGetGroupInfosRequest *this, const bdArray<bdClansGroupIdentifier> *groups)
{
  ??0bdClansGetGroupInfosRequest@@QEAA@V?$bdArray@VbdClansGroupIdentifier@@@@@Z(this, groups);
}

/*
==============
bdClansGetGroupInfosRequest::serialize
==============
*/

bool __fastcall bdClansGetGroupInfosRequest::serialize(bdClansGetGroupInfosRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansGetGroupInfosRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansGetGroupInfosRequest::deserialize
==============
*/

bool __fastcall bdClansGetGroupInfosRequest::deserialize(bdClansGetGroupInfosRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdClansGetGroupInfosRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdClansGetGroupInfosRequest::setGroups
==============
*/

void __fastcall bdClansGetGroupInfosRequest::setGroups(bdClansGetGroupInfosRequest *this, const bdArray<bdClansGroupIdentifier> *groups)
{
  ?setGroups@bdClansGetGroupInfosRequest@@QEAAXV?$bdArray@VbdClansGroupIdentifier@@@@@Z(this, groups);
}

/*
==============
bdClansGetGroupInfosRequest::bdClansGetGroupInfosRequest
==============
*/
void bdClansGetGroupInfosRequest::bdClansGetGroupInfosRequest(bdClansGetGroupInfosRequest *this, const bdArray<bdClansGroupIdentifier> *groups, int a3)
{
  bdClansGroupIdentifier *v5; 
  unsigned int m_capacity; 

  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGetGroupInfosRequest::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGetGroupInfosRequest_vtbl *)&bdClansGetGroupInfosRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetGroupInfosRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGetGroupInfosRequest_vtbl *)&bdClansGetGroupInfosRequest::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 6) = groups->m_capacity;
  *((_DWORD *)&this->__vftable + 7) = groups->m_size;
  v5 = NULL;
  m_capacity = groups->m_capacity;
  if ( m_capacity )
  {
    v5 = (bdClansGroupIdentifier *)bdMemory::allocate((unsigned __int64)m_capacity << 6);
    bdArray<bdClansGroupIdentifier>::copyConstructArrayArray((bdArray<bdClansGroupIdentifier> *)&this->__vftable + 1, v5, groups->m_data, groups->m_size);
  }
  *((_QWORD *)&this->__vftable + 2) = v5;
  bdArray<bdClansGroupIdentifier>::destruct((bdArray<bdClansGroupIdentifier> *)groups, groups->m_data, groups->m_size);
  bdMemory::deallocate(groups->m_data);
  groups->m_data = NULL;
  *(_QWORD *)&groups->m_capacity = 0i64;
}

/*
==============
bdClansGetGroupInfosRequest::deserialize
==============
*/
bool bdClansGetGroupInfosRequest::deserialize(bdClansGetGroupInfosRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansgetgroupinfosrequest.cpp", "bdClansGetGroupInfosRequest::deserialize", 0x1Du, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdClansGetGroupInfosRequest::serialize
==============
*/
bool bdClansGetGroupInfosRequest::serialize(bdClansGetGroupInfosRequest *this, bdStructBufferSerializer *serializer)
{
  unsigned int v2; 
  unsigned int v3; 
  bool result; 

  v2 = *((_DWORD *)&this->__vftable + 7);
  v3 = 0;
  for ( result = 1; v3 < v2; ++v3 )
    result = result && (bdHandleAssert(v3 < *((_DWORD *)&this->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdClansGroupIdentifier>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed"), bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)(*((_QWORD *)&this->__vftable + 2) + ((unsigned __int64)v3 << 6))));
  return result;
}

/*
==============
bdClansGetGroupInfosRequest::setGroups
==============
*/
void bdClansGetGroupInfosRequest::setGroups(bdClansGetGroupInfosRequest *this, const bdArray<bdClansGroupIdentifier> *groups)
{
  bdArray<bdClansGroupIdentifier>::operator=((bdArray<bdClansGroupIdentifier> *)&this->__vftable + 1, groups);
  bdArray<bdClansGroupIdentifier>::destruct((bdArray<bdClansGroupIdentifier> *)groups, groups->m_data, groups->m_size);
  bdMemory::deallocate(groups->m_data);
  groups->m_data = NULL;
  *(_QWORD *)&groups->m_capacity = 0i64;
}

