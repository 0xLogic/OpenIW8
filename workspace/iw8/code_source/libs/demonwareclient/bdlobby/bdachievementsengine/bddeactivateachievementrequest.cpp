/*
==============
bdDeactivateAchievementRequest::deserialize
==============
*/

bool __fastcall bdDeactivateAchievementRequest::deserialize(bdDeactivateAchievementRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdDeactivateAchievementRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdDeactivateAchievementRequest::bdDeactivateAchievementRequest
==============
*/

void __fastcall bdDeactivateAchievementRequest::bdDeactivateAchievementRequest(bdDeactivateAchievementRequest *this, const char *context, const char *name)
{
  ??0bdDeactivateAchievementRequest@@QEAA@PEBD0@Z(this, context, name);
}

/*
==============
bdDeactivateAchievementRequest::bdDeactivateAchievementRequest
==============
*/

void __fastcall bdDeactivateAchievementRequest::bdDeactivateAchievementRequest(bdDeactivateAchievementRequest *this, const char *context, unsigned __int64 id)
{
  ??0bdDeactivateAchievementRequest@@QEAA@PEBD_K@Z(this, context, id);
}

/*
==============
bdDeactivateAchievementRequest::serialize
==============
*/

bool __fastcall bdDeactivateAchievementRequest::serialize(bdDeactivateAchievementRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdDeactivateAchievementRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdDeactivateAchievementRequest::bdDeactivateAchievementRequest
==============
*/
void bdDeactivateAchievementRequest::bdDeactivateAchievementRequest(bdDeactivateAchievementRequest *this, const char *context, const char *name, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdDeactivateAchievementRequest::`vbtable';
    *(_QWORD *)&this->gap95[3] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap95[11] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdDeactivateAchievementRequest_vtbl *)&bdDeactivateAchievementRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdDeactivateAchievementRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDeactivateAchievementRequest_vtbl *)&bdDeactivateAchievementRequest::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<20>::bdStructFixedSizeString<20>((bdStructFixedSizeString<20> *)(&this->__vftable + 2), context);
  this->m_id = 0i64;
  if ( bdStrlcpy(this->m_name.m_buffer, name, 0x65ui64) > 0x64 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<100>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<100>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
}

/*
==============
bdDeactivateAchievementRequest::bdDeactivateAchievementRequest
==============
*/
void bdDeactivateAchievementRequest::bdDeactivateAchievementRequest(bdDeactivateAchievementRequest *this, const char *context, unsigned __int64 id, int a4)
{
  unsigned __int64 v7; 
  size_t v8; 

  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdDeactivateAchievementRequest::`vbtable';
    *(_QWORD *)&this->gap95[3] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap95[11] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdDeactivateAchievementRequest_vtbl *)&bdDeactivateAchievementRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdDeactivateAchievementRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDeactivateAchievementRequest_vtbl *)&bdDeactivateAchievementRequest::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<20>::bdStructFixedSizeString<20>((bdStructFixedSizeString<20> *)(&this->__vftable + 2), context);
  this->m_id = id;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v7 = -1i64;
  do
    ++v7;
  while ( *((_BYTE *)&queryFormat.fmt + v7 + 3) );
  if ( this != (bdDeactivateAchievementRequest *)-48i64 )
  {
    v8 = 100i64;
    if ( v7 < 0x64 )
      v8 = v7;
    memcpy_0(&this->m_name, (char *)&queryFormat.fmt + 3, v8);
    this->m_name.m_buffer[v8] = 0;
  }
}

/*
==============
bdDeactivateAchievementRequest::deserialize
==============
*/
bool bdDeactivateAchievementRequest::deserialize(bdDeactivateAchievementRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bddeactivateachievementrequest.cpp", "bdDeactivateAchievementRequest::deserialize", 0x24u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdDeactivateAchievementRequest::serialize
==============
*/
bool bdDeactivateAchievementRequest::serialize(bdDeactivateAchievementRequest *this, bdStructBufferSerializer *serializer)
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
  return bdStructBufferSerializer::writeString(serializer, 2u, this->m_name.m_buffer, v7) && bdStructBufferSerializer::writeUInt64(serializer, 3u, this->m_id);
}

