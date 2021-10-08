/*
==============
bdClansCreateGroupRequest::bdClansCreateGroupRequest
==============
*/

void __fastcall bdClansCreateGroupRequest::bdClansCreateGroupRequest(bdClansCreateGroupRequest *this, const unsigned __int16 kind, const char *name, const char *uniqueTag, const unsigned __int16 rootKind, const unsigned __int64 rootID, const unsigned __int16 privacyLevel)
{
  ??0bdClansCreateGroupRequest@@QEAA@GPEBD0G_KG@Z(this, kind, name, uniqueTag, rootKind, rootID, privacyLevel);
}

/*
==============
bdClansCreateGroupRequest::serialize
==============
*/

bool __fastcall bdClansCreateGroupRequest::serialize(bdClansCreateGroupRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansCreateGroupRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansCreateGroupRequest::deserialize
==============
*/

bool __fastcall bdClansCreateGroupRequest::deserialize(bdClansCreateGroupRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdClansCreateGroupRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdClansCreateGroupRequest::bdClansCreateGroupRequest
==============
*/
void bdClansCreateGroupRequest::bdClansCreateGroupRequest(bdClansCreateGroupRequest *this, const unsigned __int16 kind, const char *name, const char *uniqueTag, const unsigned __int16 rootKind, const unsigned __int64 rootID, const unsigned __int16 privacyLevel, int a8)
{
  if ( a8 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansCreateGroupRequest::`vbtable';
    *(_QWORD *)this->gap2A8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap2A8[8] = 0;
  }
  bdClansGroupInfo::bdClansGroupInfo(this, kind, 0i64, name, uniqueTag, privacyLevel, rootKind, rootID);
  this->__vftable = (bdClansCreateGroupRequest_vtbl *)&bdClansCreateGroupRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansCreateGroupRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansCreateGroupRequest_vtbl *)&bdClansCreateGroupRequest::`vftable'{for `bdReferencable'};
}

/*
==============
bdClansCreateGroupRequest::deserialize
==============
*/
bool bdClansCreateGroupRequest::deserialize(bdClansCreateGroupRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclanscreategrouprequest.cpp", "bdClansCreateGroupRequest::deserialize", 0x23u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdClansCreateGroupRequest::serialize
==============
*/
bool bdClansCreateGroupRequest::serialize(bdClansCreateGroupRequest *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeUInt16(serializer, 1u, *((_WORD *)&this->__vftable + 8)) && bdStructBufferSerializer::writeUInt16(serializer, 3u, this->m_rootKind) && bdStructBufferSerializer::writeUInt64(serializer, 4u, this->m_rootID) && bdStructBufferSerializer::writeString(serializer, 5u, (const char *)&this->m_rootID + 8, 0xFFu) && bdStructBufferSerializer::writeUInt16(serializer, 7u, this->m_privacyLevel) && bdStructBufferSerializer::writeString(serializer, 0xCu, this->m_uniqueTag.m_buffer, 0xFFu);
}

