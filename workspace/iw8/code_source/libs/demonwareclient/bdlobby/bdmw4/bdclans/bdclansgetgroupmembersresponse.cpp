/*
==============
bdClansGetGroupMembersResponse::getMembers
==============
*/

bdArray<bdClansGroupMemberInfo> *__fastcall bdClansGetGroupMembersResponse::getMembers(bdClansGetGroupMembersResponse *this, bdArray<bdClansGroupMemberInfo> *result)
{
  return ?getMembers@bdClansGetGroupMembersResponse@@QEBA?AV?$bdArray@VbdClansGroupMemberInfo@@@@XZ(this, result);
}

/*
==============
bdClansGetGroupMembersResponse::bdClansGetGroupMembersResponse
==============
*/

void __fastcall bdClansGetGroupMembersResponse::bdClansGetGroupMembersResponse(bdClansGetGroupMembersResponse *this)
{
  ??0bdClansGetGroupMembersResponse@@QEAA@XZ(this);
}

/*
==============
bdClansGetGroupMembersResponse::serialize
==============
*/

bool __fastcall bdClansGetGroupMembersResponse::serialize(bdClansGetGroupMembersResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdClansGetGroupMembersResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdClansGetGroupMembersResponse::deserialize
==============
*/

bool __fastcall bdClansGetGroupMembersResponse::deserialize(bdClansGetGroupMembersResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansGetGroupMembersResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansGetGroupMembersResponse::bdClansGetGroupMembersResponse
==============
*/
void bdClansGetGroupMembersResponse::bdClansGetGroupMembersResponse(bdClansGetGroupMembersResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGetGroupMembersResponse::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGetGroupMembersResponse_vtbl *)&bdClansGetGroupMembersResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetGroupMembersResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGetGroupMembersResponse_vtbl *)&bdClansGetGroupMembersResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
}

/*
==============
bdClansGetGroupMembersResponse::deserialize
==============
*/
bool bdClansGetGroupMembersResponse::deserialize(bdClansGetGroupMembersResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObjectArray<bdClansGroupMemberInfo>(deserializer, 1u, (bdArray<bdClansGroupMemberInfo> *)&this->__vftable + 1);
}

/*
==============
bdClansGetGroupMembersResponse::getMembers
==============
*/
bdArray<bdClansGroupMemberInfo> *bdClansGetGroupMembersResponse::getMembers(bdClansGetGroupMembersResponse *this, bdArray<bdClansGroupMemberInfo> *result)
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
bdClansGetGroupMembersResponse::serialize
==============
*/
bool bdClansGetGroupMembersResponse::serialize(bdClansGetGroupMembersResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansgetgroupmembersresponse.cpp", "bdClansGetGroupMembersResponse::serialize", 0x17u, "NOT IMPLEMENTED");
  return 0;
}

