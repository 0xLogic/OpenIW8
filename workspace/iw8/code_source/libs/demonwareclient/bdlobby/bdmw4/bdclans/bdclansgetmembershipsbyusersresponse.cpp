/*
==============
bdClansGetMembershipsByUsersResponse::getMemberships
==============
*/

bdArray<bdClansGroupMemberInfo> *__fastcall bdClansGetMembershipsByUsersResponse::getMemberships(bdClansGetMembershipsByUsersResponse *this, bdArray<bdClansGroupMemberInfo> *result)
{
  return ?getMemberships@bdClansGetMembershipsByUsersResponse@@QEBA?AV?$bdArray@VbdClansGroupMemberInfo@@@@XZ(this, result);
}

/*
==============
bdClansGetMembershipsByUsersResponse::deserialize
==============
*/

bool __fastcall bdClansGetMembershipsByUsersResponse::deserialize(bdClansGetMembershipsByUsersResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansGetMembershipsByUsersResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansGetMembershipsByUsersResponse::bdClansGetMembershipsByUsersResponse
==============
*/

void __fastcall bdClansGetMembershipsByUsersResponse::bdClansGetMembershipsByUsersResponse(bdClansGetMembershipsByUsersResponse *this)
{
  ??0bdClansGetMembershipsByUsersResponse@@QEAA@XZ(this);
}

/*
==============
bdClansGetMembershipsByUsersResponse::serialize
==============
*/

bool __fastcall bdClansGetMembershipsByUsersResponse::serialize(bdClansGetMembershipsByUsersResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdClansGetMembershipsByUsersResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdClansGetMembershipsByUsersResponse::bdClansGetMembershipsByUsersResponse
==============
*/
void bdClansGetMembershipsByUsersResponse::bdClansGetMembershipsByUsersResponse(bdClansGetMembershipsByUsersResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGetMembershipsByUsersResponse::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGetMembershipsByUsersResponse_vtbl *)&bdClansGetMembershipsByUsersResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetMembershipsByUsersResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGetMembershipsByUsersResponse_vtbl *)&bdClansGetMembershipsByUsersResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
}

/*
==============
bdClansGetMembershipsByUsersResponse::deserialize
==============
*/
bool bdClansGetMembershipsByUsersResponse::deserialize(bdClansGetMembershipsByUsersResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObjectArray<bdClansGroupMemberInfo>(deserializer, 1u, (bdArray<bdClansGroupMemberInfo> *)&this->__vftable + 1);
}

/*
==============
bdClansGetMembershipsByUsersResponse::getMemberships
==============
*/
bdArray<bdClansGroupMemberInfo> *bdClansGetMembershipsByUsersResponse::getMemberships(bdClansGetMembershipsByUsersResponse *this, bdArray<bdClansGroupMemberInfo> *result)
{
  __int64 v4; 
  bdClansGroupMemberInfo *v5; 
  bdArray<bdClansGroupMemberInfo> *v6; 

  result->m_capacity = *((_DWORD *)&this->__vftable + 6);
  result->m_size = *((_DWORD *)&this->__vftable + 7);
  v4 = *((unsigned int *)&this->__vftable + 6);
  if ( (_DWORD)v4 )
  {
    v5 = (bdClansGroupMemberInfo *)bdMemory::allocate(216 * v4);
    bdArray<bdClansGroupMemberInfo>::copyConstructArrayArray(result, v5, *((const bdClansGroupMemberInfo **)&this->__vftable + 2), *((_DWORD *)&this->__vftable + 7));
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
bdClansGetMembershipsByUsersResponse::serialize
==============
*/
bool bdClansGetMembershipsByUsersResponse::serialize(bdClansGetMembershipsByUsersResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansgetmembershipsbyusersresponse.cpp", "bdClansGetMembershipsByUsersResponse::serialize", 0x17u, "NOT IMPLEMENTED");
  return 0;
}

