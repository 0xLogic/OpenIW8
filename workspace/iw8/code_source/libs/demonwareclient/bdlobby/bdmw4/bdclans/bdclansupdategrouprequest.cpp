/*
==============
bdClansUpdateGroupRequest::serialize
==============
*/

bool __fastcall bdClansUpdateGroupRequest::serialize(bdClansUpdateGroupRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansUpdateGroupRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansUpdateGroupRequest::deserialize
==============
*/

bool __fastcall bdClansUpdateGroupRequest::deserialize(bdClansUpdateGroupRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdClansUpdateGroupRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdClansUpdateGroupRequest::bdClansUpdateGroupRequest
==============
*/

void __fastcall bdClansUpdateGroupRequest::bdClansUpdateGroupRequest(bdClansUpdateGroupRequest *this, const unsigned __int16 kind, const unsigned __int64 id, const unsigned __int16 rootKind, const unsigned __int64 rootID)
{
  ??0bdClansUpdateGroupRequest@@QEAA@G_KG0@Z(this, kind, id, rootKind, rootID);
}

/*
==============
bdClansUpdateGroupRequest::bdClansUpdateGroupRequest
==============
*/
void bdClansUpdateGroupRequest::bdClansUpdateGroupRequest(bdClansUpdateGroupRequest *this, const unsigned __int16 kind, const unsigned __int64 id, const unsigned __int16 rootKind, const unsigned __int64 rootID, int a6)
{
  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansUpdateGroupRequest::`vbtable';
    *(_QWORD *)this->gap2A8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap2A8[8] = 0;
  }
  bdClansGroupInfo::bdClansGroupInfo(this, kind, id, rootKind, rootID);
  this->__vftable = (bdClansUpdateGroupRequest_vtbl *)&bdClansUpdateGroupRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansUpdateGroupRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansUpdateGroupRequest_vtbl *)&bdClansUpdateGroupRequest::`vftable'{for `bdReferencable'};
}

/*
==============
bdClansUpdateGroupRequest::deserialize
==============
*/
bool bdClansUpdateGroupRequest::deserialize(bdClansUpdateGroupRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansupdategrouprequest.cpp", "bdClansUpdateGroupRequest::deserialize", 0x1Au, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdClansUpdateGroupRequest::serialize
==============
*/

bool __fastcall bdClansUpdateGroupRequest::serialize(bdClansUpdateGroupRequest *this, bdStructBufferSerializer *serializer)
{
  return bdClansGroupInfo::serialize(this, serializer);
}

