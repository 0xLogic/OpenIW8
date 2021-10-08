/*
==============
bdClansRemoveGroupMemberResponse::bdClansRemoveGroupMemberResponse
==============
*/

void __fastcall bdClansRemoveGroupMemberResponse::bdClansRemoveGroupMemberResponse(bdClansRemoveGroupMemberResponse *this)
{
  ??0bdClansRemoveGroupMemberResponse@@QEAA@XZ(this);
}

/*
==============
bdClansRemoveGroupMemberResponse::deserialize
==============
*/

bool __fastcall bdClansRemoveGroupMemberResponse::deserialize(bdClansRemoveGroupMemberResponse *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdClansRemoveGroupMemberResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdClansRemoveGroupMemberResponse::serialize
==============
*/

bool __fastcall bdClansRemoveGroupMemberResponse::serialize(bdClansRemoveGroupMemberResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdClansRemoveGroupMemberResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdClansRemoveGroupMemberResponse::bdClansRemoveGroupMemberResponse
==============
*/
void bdClansRemoveGroupMemberResponse::bdClansRemoveGroupMemberResponse(bdClansRemoveGroupMemberResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansRemoveGroupMemberResponse::`vbtable';
    *((_QWORD *)&this->__vftable + 2) = &bdReferencable::`vftable';
    *((_DWORD *)&this->__vftable + 6) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansRemoveGroupMemberResponse_vtbl *)&bdClansRemoveGroupMemberResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansRemoveGroupMemberResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansRemoveGroupMemberResponse_vtbl *)&bdClansRemoveGroupMemberResponse::`vftable'{for `bdReferencable'};
}

/*
==============
bdClansRemoveGroupMemberResponse::deserialize
==============
*/
char bdClansRemoveGroupMemberResponse::deserialize(bdClansRemoveGroupMemberResponse *this, bdStructBufferDeserializer *__formal)
{
  return 1;
}

/*
==============
bdClansRemoveGroupMemberResponse::serialize
==============
*/
bool bdClansRemoveGroupMemberResponse::serialize(bdClansRemoveGroupMemberResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansremovegroupmemberresponse.cpp", "bdClansRemoveGroupMemberResponse::serialize", 0x10u, "NOT IMPLEMENTED");
  return 0;
}

