/*
==============
bdClansGetGroupInfosResponse::bdClansGetGroupInfosResponse
==============
*/

void __fastcall bdClansGetGroupInfosResponse::bdClansGetGroupInfosResponse(bdClansGetGroupInfosResponse *this)
{
  ??0bdClansGetGroupInfosResponse@@QEAA@XZ(this);
}

/*
==============
bdClansGetGroupInfosResponse::serialize
==============
*/

bool __fastcall bdClansGetGroupInfosResponse::serialize(bdClansGetGroupInfosResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdClansGetGroupInfosResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdClansGetGroupInfosResponse::getGroupInfos
==============
*/

bdArray<bdClansGroupInfo> *__fastcall bdClansGetGroupInfosResponse::getGroupInfos(bdClansGetGroupInfosResponse *this, bdArray<bdClansGroupInfo> *result)
{
  return ?getGroupInfos@bdClansGetGroupInfosResponse@@QEBA?AV?$bdArray@VbdClansGroupInfo@@@@XZ(this, result);
}

/*
==============
bdClansGetGroupInfosResponse::deserialize
==============
*/

bool __fastcall bdClansGetGroupInfosResponse::deserialize(bdClansGetGroupInfosResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansGetGroupInfosResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansGetGroupInfosResponse::bdClansGetGroupInfosResponse
==============
*/
void bdClansGetGroupInfosResponse::bdClansGetGroupInfosResponse(bdClansGetGroupInfosResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGetGroupInfosResponse::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGetGroupInfosResponse_vtbl *)&bdClansGetGroupInfosResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetGroupInfosResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGetGroupInfosResponse_vtbl *)&bdClansGetGroupInfosResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
}

/*
==============
bdClansGetGroupInfosResponse::deserialize
==============
*/
bool bdClansGetGroupInfosResponse::deserialize(bdClansGetGroupInfosResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObjectArray<bdClansGroupInfo>(deserializer, 1u, (bdArray<bdClansGroupInfo> *)&this->__vftable + 1);
}

/*
==============
bdClansGetGroupInfosResponse::getGroupInfos
==============
*/
bdArray<bdClansGroupInfo> *bdClansGetGroupInfosResponse::getGroupInfos(bdClansGetGroupInfosResponse *this, bdArray<bdClansGroupInfo> *result)
{
  __int64 v4; 
  bdClansGroupInfo *v5; 
  bdArray<bdClansGroupInfo> *v6; 

  result->m_capacity = *((_DWORD *)&this->__vftable + 6);
  result->m_size = *((_DWORD *)&this->__vftable + 7);
  v4 = *((unsigned int *)&this->__vftable + 6);
  if ( (_DWORD)v4 )
  {
    v5 = (bdClansGroupInfo *)bdMemory::allocate(696 * v4);
    bdArray<bdClansGroupInfo>::copyConstructArrayArray(result, v5, *((const bdClansGroupInfo **)&this->__vftable + 2), *((_DWORD *)&this->__vftable + 7));
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
bdClansGetGroupInfosResponse::serialize
==============
*/
bool bdClansGetGroupInfosResponse::serialize(bdClansGetGroupInfosResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansgetgroupinfosresponse.cpp", "bdClansGetGroupInfosResponse::serialize", 0x17u, "NOT IMPLEMENTED");
  return 0;
}

