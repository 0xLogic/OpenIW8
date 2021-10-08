/*
==============
bdGetUserStateRequest::serialize
==============
*/

bool __fastcall bdGetUserStateRequest::serialize(bdGetUserStateRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdGetUserStateRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdGetUserStateRequest::deserialize
==============
*/

bool __fastcall bdGetUserStateRequest::deserialize(bdGetUserStateRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdGetUserStateRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdGetUserStateRequest::bdGetUserStateRequest
==============
*/

void __fastcall bdGetUserStateRequest::bdGetUserStateRequest(bdGetUserStateRequest *this, const char *context)
{
  ??0bdGetUserStateRequest@@QEAA@PEBD@Z(this, context);
}

/*
==============
bdGetUserStateRequest::bdGetUserStateRequest
==============
*/
void bdGetUserStateRequest::bdGetUserStateRequest(bdGetUserStateRequest *this, const char *context, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetUserStateRequest::`vbtable';
    *(_QWORD *)&this->gap25[3] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap25[11] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetUserStateRequest_vtbl *)&bdGetUserStateRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetUserStateRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetUserStateRequest_vtbl *)&bdGetUserStateRequest::`vftable'{for `bdReferencable'};
  if ( bdStrlcpy((char *const)&this->__vftable + 16, context, 0x15ui64) > 0x14 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<20>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<20>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
}

/*
==============
bdGetUserStateRequest::deserialize
==============
*/
bool bdGetUserStateRequest::deserialize(bdGetUserStateRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdgetuserstaterequest.cpp", "bdGetUserStateRequest::deserialize", 0x19u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdGetUserStateRequest::serialize
==============
*/
bool bdGetUserStateRequest::serialize(bdGetUserStateRequest *this, bdStructBufferSerializer *serializer)
{
  const char *v2; 
  unsigned int v4; 
  void *v5; 

  v2 = (const char *)(&this->__vftable + 2);
  v4 = 20;
  v5 = memchr_0(&this->__vftable + 2, 0, 0x14ui64);
  if ( v5 )
    v4 = (_DWORD)v5 - (_DWORD)v2;
  return bdStructBufferSerializer::writeString(serializer, 1u, v2, v4);
}

