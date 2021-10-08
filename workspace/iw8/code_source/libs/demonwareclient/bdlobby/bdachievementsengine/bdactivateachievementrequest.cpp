/*
==============
bdActivateAchievementRequest::bdActivateAchievementRequest
==============
*/

void __fastcall bdActivateAchievementRequest::bdActivateAchievementRequest(bdActivateAchievementRequest *this, const char *context, unsigned __int64 id, unsigned __int64 timestamp)
{
  ??0bdActivateAchievementRequest@@QEAA@PEBD_K1@Z(this, context, id, timestamp);
}

/*
==============
bdActivateAchievementRequest::deserialize
==============
*/

bool __fastcall bdActivateAchievementRequest::deserialize(bdActivateAchievementRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdActivateAchievementRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdActivateAchievementRequest::bdActivateAchievementRequest
==============
*/

void __fastcall bdActivateAchievementRequest::bdActivateAchievementRequest(bdActivateAchievementRequest *this, const char *context, const char *name, unsigned __int64 timestamp)
{
  ??0bdActivateAchievementRequest@@QEAA@PEBD0_K@Z(this, context, name, timestamp);
}

/*
==============
bdActivateAchievementRequest::serialize
==============
*/

bool __fastcall bdActivateAchievementRequest::serialize(bdActivateAchievementRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdActivateAchievementRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdActivateAchievementRequest::bdActivateAchievementRequest
==============
*/
void bdActivateAchievementRequest::bdActivateAchievementRequest(bdActivateAchievementRequest *this, const char *context, const char *name, unsigned __int64 timestamp, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdActivateAchievementRequest::`vbtable';
    *(_QWORD *)this->gapA0 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA0[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdActivateAchievementRequest_vtbl *)&bdActivateAchievementRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdActivateAchievementRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdActivateAchievementRequest_vtbl *)&bdActivateAchievementRequest::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<20>::bdStructFixedSizeString<20>((bdStructFixedSizeString<20> *)(&this->__vftable + 2), context);
  this->m_id = 0i64;
  if ( bdStrlcpy(this->m_name.m_buffer, name, 0x65ui64) > 0x64 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<100>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<100>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  this->m_timestamp = timestamp;
}

/*
==============
bdActivateAchievementRequest::bdActivateAchievementRequest
==============
*/
void bdActivateAchievementRequest::bdActivateAchievementRequest(bdActivateAchievementRequest *this, const char *context, unsigned __int64 id, unsigned __int64 timestamp, int a5)
{
  unsigned __int64 v9; 
  size_t v10; 

  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdActivateAchievementRequest::`vbtable';
    *(_QWORD *)this->gapA0 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA0[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdActivateAchievementRequest_vtbl *)&bdActivateAchievementRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdActivateAchievementRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdActivateAchievementRequest_vtbl *)&bdActivateAchievementRequest::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<20>::bdStructFixedSizeString<20>((bdStructFixedSizeString<20> *)(&this->__vftable + 2), context);
  this->m_id = id;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v9 = -1i64;
  do
    ++v9;
  while ( *((_BYTE *)&queryFormat.fmt + v9 + 3) );
  if ( this != (bdActivateAchievementRequest *)-48i64 )
  {
    v10 = 100i64;
    if ( v9 < 0x64 )
      v10 = v9;
    memcpy_0(&this->m_name, (char *)&queryFormat.fmt + 3, v10);
    this->m_name.m_buffer[v10] = 0;
  }
  this->m_timestamp = timestamp;
}

/*
==============
bdActivateAchievementRequest::deserialize
==============
*/
bool bdActivateAchievementRequest::deserialize(bdActivateAchievementRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdactivateachievementrequest.cpp", "bdActivateAchievementRequest::deserialize", 0x27u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdActivateAchievementRequest::serialize
==============
*/
bool bdActivateAchievementRequest::serialize(bdActivateAchievementRequest *this, bdStructBufferSerializer *serializer)
{
  const char *v2; 
  unsigned int v5; 
  void *v6; 
  unsigned int v7; 
  void *v8; 

  v2 = (const char *)(&this->__vftable + 2);
  v5 = 20;
  v6 = memchr_0(&this->__vftable + 2, 0, 0x14ui64);
  if ( v6 )
    v5 = (_DWORD)v6 - (_DWORD)v2;
  if ( !bdStructBufferSerializer::writeString(serializer, 1u, v2, v5) )
    return 0;
  v7 = 100;
  v8 = memchr_0(&this->m_name, 0, 0x64ui64);
  if ( v8 )
    v7 = (_DWORD)v8 - ((_DWORD)this + 48);
  return bdStructBufferSerializer::writeString(serializer, 2u, this->m_name.m_buffer, v7) && bdStructBufferSerializer::writeUInt64(serializer, 3u, this->m_timestamp) && bdStructBufferSerializer::writeUInt64(serializer, 4u, this->m_id);
}

