/*
==============
bdGetAchievementDefinitionsRequest::addAchievementId
==============
*/

bdGetAchievementDefinitionsRequest *__fastcall bdGetAchievementDefinitionsRequest::addAchievementId(bdGetAchievementDefinitionsRequest *this, unsigned __int64 achievementId)
{
  return ?addAchievementId@bdGetAchievementDefinitionsRequest@@QEAAAEAV1@_K@Z(this, achievementId);
}

/*
==============
bdGetAchievementDefinitionsRequest::deserialize
==============
*/

bool __fastcall bdGetAchievementDefinitionsRequest::deserialize(bdGetAchievementDefinitionsRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdGetAchievementDefinitionsRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdGetAchievementDefinitionsRequest::bdGetAchievementDefinitionsRequest
==============
*/

void __fastcall bdGetAchievementDefinitionsRequest::bdGetAchievementDefinitionsRequest(bdGetAchievementDefinitionsRequest *this, const char *context, unsigned __int16 kind, unsigned __int16 limit, const char *pageToken)
{
  ??0bdGetAchievementDefinitionsRequest@@QEAA@PEBDGG0@Z(this, context, kind, limit, pageToken);
}

/*
==============
bdGetAchievementDefinitionsRequest::addKind
==============
*/

bdGetAchievementDefinitionsRequest *__fastcall bdGetAchievementDefinitionsRequest::addKind(bdGetAchievementDefinitionsRequest *this, unsigned __int16 kind)
{
  return ?addKind@bdGetAchievementDefinitionsRequest@@QEAAAEAV1@G@Z(this, kind);
}

/*
==============
bdGetAchievementDefinitionsRequest::serialize
==============
*/

bool __fastcall bdGetAchievementDefinitionsRequest::serialize(bdGetAchievementDefinitionsRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdGetAchievementDefinitionsRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdGetAchievementDefinitionsRequest::bdGetAchievementDefinitionsRequest
==============
*/

void __fastcall bdGetAchievementDefinitionsRequest::bdGetAchievementDefinitionsRequest(bdGetAchievementDefinitionsRequest *this, const char *context, unsigned __int16 limit, const char *pageToken)
{
  ??0bdGetAchievementDefinitionsRequest@@QEAA@PEBDG0@Z(this, context, limit, pageToken);
}

/*
==============
bdGetAchievementDefinitionsRequest::bdGetAchievementDefinitionsRequest
==============
*/
void bdGetAchievementDefinitionsRequest::bdGetAchievementDefinitionsRequest(bdGetAchievementDefinitionsRequest *this, const char *context, unsigned __int16 limit, const char *pageToken, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetAchievementDefinitionsRequest::`vbtable';
    *(_QWORD *)&this->gap783[5] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap783[13] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetAchievementDefinitionsRequest_vtbl *)&bdGetAchievementDefinitionsRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetAchievementDefinitionsRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetAchievementDefinitionsRequest_vtbl *)&bdGetAchievementDefinitionsRequest::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<20>::bdStructFixedSizeString<20>((bdStructFixedSizeString<20> *)(&this->__vftable + 2), context);
  this->m_kinds.m_size = 0;
  this->m_achievementIds.m_size = 0;
  this->m_limit = limit;
  bdStructFixedSizeString<1024>::bdStructFixedSizeString<1024>(&this->m_pageToken, pageToken);
}

/*
==============
bdGetAchievementDefinitionsRequest::bdGetAchievementDefinitionsRequest
==============
*/
void bdGetAchievementDefinitionsRequest::bdGetAchievementDefinitionsRequest(bdGetAchievementDefinitionsRequest *this, const char *context, unsigned __int16 kind, unsigned __int16 limit, const char *pageToken, int a6)
{
  __int64 m_size; 

  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetAchievementDefinitionsRequest::`vbtable';
    *(_QWORD *)&this->gap783[5] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap783[13] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetAchievementDefinitionsRequest_vtbl *)&bdGetAchievementDefinitionsRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetAchievementDefinitionsRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetAchievementDefinitionsRequest_vtbl *)&bdGetAchievementDefinitionsRequest::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<20>::bdStructFixedSizeString<20>((bdStructFixedSizeString<20> *)(&this->__vftable + 2), context);
  this->m_kinds.m_size = 0;
  this->m_achievementIds.m_size = 0;
  this->m_limit = limit;
  bdStructFixedSizeString<1024>::bdStructFixedSizeString<1024>(&this->m_pageToken, pageToken);
  bdHandleAssert(this->m_kinds.m_size < 0x14, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned short,20>::pushBack", 0x40u, "No more capacity for pushBack", -2i64);
  m_size = this->m_kinds.m_size;
  if ( (unsigned int)m_size < 0x14 )
  {
    this->m_kinds.m_elements[m_size] = kind;
    ++this->m_kinds.m_size;
  }
}

/*
==============
bdGetAchievementDefinitionsRequest::addAchievementId
==============
*/
bdGetAchievementDefinitionsRequest *bdGetAchievementDefinitionsRequest::addAchievementId(bdGetAchievementDefinitionsRequest *this, unsigned __int64 achievementId)
{
  __int64 m_size; 

  bdHandleAssert(this->m_achievementIds.m_size < 0x64, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned __int64,100>::pushBack", 0x40u, "No more capacity for pushBack");
  m_size = this->m_achievementIds.m_size;
  if ( (unsigned int)m_size < 0x64 )
  {
    this->m_achievementIds.m_elements[m_size] = achievementId;
    ++this->m_achievementIds.m_size;
  }
  return this;
}

/*
==============
bdGetAchievementDefinitionsRequest::addKind
==============
*/
bdGetAchievementDefinitionsRequest *bdGetAchievementDefinitionsRequest::addKind(bdGetAchievementDefinitionsRequest *this, unsigned __int16 kind)
{
  __int64 m_size; 

  bdHandleAssert(this->m_kinds.m_size < 0x14, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned short,20>::pushBack", 0x40u, "No more capacity for pushBack");
  m_size = this->m_kinds.m_size;
  if ( (unsigned int)m_size < 0x14 )
  {
    this->m_kinds.m_elements[m_size] = kind;
    ++this->m_kinds.m_size;
  }
  return this;
}

/*
==============
bdGetAchievementDefinitionsRequest::deserialize
==============
*/
bool bdGetAchievementDefinitionsRequest::deserialize(bdGetAchievementDefinitionsRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdgetachievementdefinitionsrequest.cpp", "bdGetAchievementDefinitionsRequest::deserialize", 0x39u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdGetAchievementDefinitionsRequest::serialize
==============
*/
bool bdGetAchievementDefinitionsRequest::serialize(bdGetAchievementDefinitionsRequest *this, bdStructBufferSerializer *serializer)
{
  const char *v2; 
  unsigned int v5; 
  void *v6; 
  unsigned int m_size; 
  __int64 v8; 
  bool v9; 
  unsigned int v10; 
  unsigned int v11; 
  void *v12; 
  unsigned int v13; 
  bool v14; 

  v2 = (const char *)(&this->__vftable + 2);
  v5 = 20;
  v6 = memchr_0(&this->__vftable + 2, 0, 0x14ui64);
  if ( v6 )
    v5 = (_DWORD)v6 - (_DWORD)v2;
  if ( !bdStructBufferSerializer::writeString(serializer, 1u, v2, v5) )
    return 0;
  m_size = this->m_kinds.m_size;
  v8 = 0i64;
  v9 = 1;
  v10 = 0;
  if ( m_size )
  {
    do
    {
      v9 = v9 && (bdHandleAssert(v10 < m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned short,20>::operator []", 0x54u, "i is out of range"), bdStructBufferSerializer::writeUInt16(serializer, 2u, this->m_kinds.m_elements[v10]));
      m_size = this->m_kinds.m_size;
      ++v10;
    }
    while ( v10 < m_size );
    if ( !v9 )
      return 0;
  }
  if ( !bdStructBufferSerializer::writeUInt16(serializer, 3u, this->m_limit) )
    return 0;
  v11 = 1024;
  v12 = memchr_0(&this->m_pageToken, 0, 0x400ui64);
  if ( v12 )
    v11 = (_DWORD)v12 - ((_DWORD)this + 898);
  if ( !bdStructBufferSerializer::writeString(serializer, 4u, this->m_pageToken.m_buffer, v11) )
    return 0;
  v13 = this->m_achievementIds.m_size;
  v14 = 1;
  if ( !v13 )
    return 1;
  do
  {
    v14 = v14 && (bdHandleAssert((unsigned int)v8 < v13, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned __int64,100>::operator []", 0x54u, "i is out of range"), bdStructBufferSerializer::writeUInt64(serializer, 5u, this->m_achievementIds.m_elements[v8]));
    v13 = this->m_achievementIds.m_size;
    v8 = (unsigned int)(v8 + 1);
  }
  while ( (unsigned int)v8 < v13 );
  return v14;
}

