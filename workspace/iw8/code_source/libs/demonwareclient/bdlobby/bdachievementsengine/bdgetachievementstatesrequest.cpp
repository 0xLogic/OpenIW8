/*
==============
bdGetAchievementStatesRequest::setIncludeUninitialized
==============
*/

bdGetAchievementStatesRequest *__fastcall bdGetAchievementStatesRequest::setIncludeUninitialized(bdGetAchievementStatesRequest *this, bool includeUninitialized)
{
  return ?setIncludeUninitialized@bdGetAchievementStatesRequest@@QEAAAEAV1@_N@Z(this, includeUninitialized);
}

/*
==============
bdGetAchievementStatesRequest::bdGetAchievementStatesRequest
==============
*/

void __fastcall bdGetAchievementStatesRequest::bdGetAchievementStatesRequest(bdGetAchievementStatesRequest *this, const char *context, unsigned __int16 limit, const char *pageToken)
{
  ??0bdGetAchievementStatesRequest@@QEAA@PEBDG0@Z(this, context, limit, pageToken);
}

/*
==============
bdGetAchievementStatesRequest::bdGetAchievementStatesRequest
==============
*/

void __fastcall bdGetAchievementStatesRequest::bdGetAchievementStatesRequest(bdGetAchievementStatesRequest *this, const bdGetAchievementStatesRequest *__that)
{
  ??0bdGetAchievementStatesRequest@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdGetAchievementStatesRequest::serialize
==============
*/

bool __fastcall bdGetAchievementStatesRequest::serialize(bdGetAchievementStatesRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdGetAchievementStatesRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdGetAchievementStatesRequest::addAchievementName
==============
*/

bdGetAchievementStatesRequest *__fastcall bdGetAchievementStatesRequest::addAchievementName(bdGetAchievementStatesRequest *this, const char *achievementName)
{
  return ?addAchievementName@bdGetAchievementStatesRequest@@QEAAAEAV1@PEBD@Z(this, achievementName);
}

/*
==============
bdGetAchievementStatesRequest::addAchievementId
==============
*/

bdGetAchievementStatesRequest *__fastcall bdGetAchievementStatesRequest::addAchievementId(bdGetAchievementStatesRequest *this, unsigned __int64 achievementId)
{
  return ?addAchievementId@bdGetAchievementStatesRequest@@QEAAAEAV1@_K@Z(this, achievementId);
}

/*
==============
bdGetAchievementStatesRequest::deserialize
==============
*/

bool __fastcall bdGetAchievementStatesRequest::deserialize(bdGetAchievementStatesRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdGetAchievementStatesRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdGetAchievementStatesRequest::setUser
==============
*/

bdGetAchievementStatesRequest *__fastcall bdGetAchievementStatesRequest::setUser(bdGetAchievementStatesRequest *this, const bdUserAccountID *user, const bdUserAccountID *firstPartyUser, bdPlatformID platform)
{
  return ?setUser@bdGetAchievementStatesRequest@@QEAAAEAV1@AEBVbdUserAccountID@@0W4bdPlatformID@@@Z(this, user, firstPartyUser, platform);
}

/*
==============
bdGetAchievementStatesRequest::addKind
==============
*/

bdGetAchievementStatesRequest *__fastcall bdGetAchievementStatesRequest::addKind(bdGetAchievementStatesRequest *this, unsigned __int16 kind)
{
  return ?addKind@bdGetAchievementStatesRequest@@QEAAAEAV1@G@Z(this, kind);
}

/*
==============
bdGetAchievementStatesRequest::bdGetAchievementStatesRequest
==============
*/

void __fastcall bdGetAchievementStatesRequest::bdGetAchievementStatesRequest(bdGetAchievementStatesRequest *this, const char *context, unsigned __int16 kind, unsigned __int16 limit, const char *pageToken)
{
  ??0bdGetAchievementStatesRequest@@QEAA@PEBDGG0@Z(this, context, kind, limit, pageToken);
}

/*
==============
bdGetAchievementStatesRequest::addStatus
==============
*/

bdGetAchievementStatesRequest *__fastcall bdGetAchievementStatesRequest::addStatus(bdGetAchievementStatesRequest *this, bdAchievementStatus::Enum status)
{
  return ?addStatus@bdGetAchievementStatesRequest@@QEAAAEAV1@W4Enum@bdAchievementStatus@@@Z(this, status);
}

/*
==============
bdGetAchievementStatesRequest::bdGetAchievementStatesRequest
==============
*/
void bdGetAchievementStatesRequest::bdGetAchievementStatesRequest(bdGetAchievementStatesRequest *this, const char *context, unsigned __int16 limit, const char *pageToken, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetAchievementStatesRequest::`vbtable';
    *((_QWORD *)&this->m_platform + 1) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_platform + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetAchievementStatesRequest_vtbl *)&bdGetAchievementStatesRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetAchievementStatesRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetAchievementStatesRequest_vtbl *)&bdGetAchievementStatesRequest::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<20>::bdStructFixedSizeString<20>((bdStructFixedSizeString<20> *)(&this->__vftable + 2), context);
  this->m_kinds.m_size = 0;
  this->m_limit = limit;
  this->m_includeUninitialized = 0;
  bdStructFixedSizeString<1024>::bdStructFixedSizeString<1024>(&this->m_pageToken, pageToken);
  this->m_statuses.m_size = 0;
  `eh vector constructor iterator'(&this->m_achievementNames, 0x65ui64, 3ui64, (void (__fastcall *)(void *))bdStructFixedSizeString<100>::bdStructFixedSizeString<100>, (void (__fastcall *)(void *))bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>);
  this->m_achievementNames.m_size = 0;
  this->m_achievementIds.m_size = 0;
  this->m_user.m_hasValue = 0;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_user.m_value);
  this->m_firstPartyUser.m_hasValue = 0;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_firstPartyUser.m_value);
  this->m_platform.m_hasValue = 1;
  this->m_platform.m_value = BD_PLATFORM_ID_INVALID;
}

/*
==============
bdGetAchievementStatesRequest::bdGetAchievementStatesRequest
==============
*/
void bdGetAchievementStatesRequest::bdGetAchievementStatesRequest(bdGetAchievementStatesRequest *this, const char *context, unsigned __int16 kind, unsigned __int16 limit, const char *pageToken, int a6)
{
  __int64 m_size; 

  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetAchievementStatesRequest::`vbtable';
    *((_QWORD *)&this->m_platform + 1) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_platform + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetAchievementStatesRequest_vtbl *)&bdGetAchievementStatesRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetAchievementStatesRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetAchievementStatesRequest_vtbl *)&bdGetAchievementStatesRequest::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<20>::bdStructFixedSizeString<20>((bdStructFixedSizeString<20> *)(&this->__vftable + 2), context);
  this->m_kinds.m_size = 0;
  this->m_limit = limit;
  this->m_includeUninitialized = 0;
  bdStructFixedSizeString<1024>::bdStructFixedSizeString<1024>(&this->m_pageToken, pageToken);
  this->m_statuses.m_size = 0;
  `eh vector constructor iterator'(&this->m_achievementNames, 0x65ui64, 3ui64, (void (__fastcall *)(void *))bdStructFixedSizeString<100>::bdStructFixedSizeString<100>, (void (__fastcall *)(void *))bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>);
  this->m_achievementNames.m_size = 0;
  this->m_achievementIds.m_size = 0;
  this->m_user.m_hasValue = 0;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_user.m_value);
  this->m_firstPartyUser.m_hasValue = 0;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_firstPartyUser.m_value);
  this->m_platform.m_hasValue = 1;
  this->m_platform.m_value = BD_PLATFORM_ID_INVALID;
  bdHandleAssert(this->m_kinds.m_size < 0x14, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned short,20>::pushBack", 0x40u, "No more capacity for pushBack", -2i64, &this->m_firstPartyUser);
  m_size = this->m_kinds.m_size;
  if ( (unsigned int)m_size < 0x14 )
  {
    this->m_kinds.m_elements[m_size] = kind;
    ++this->m_kinds.m_size;
  }
}

/*
==============
bdGetAchievementStatesRequest::addAchievementId
==============
*/
bdGetAchievementStatesRequest *bdGetAchievementStatesRequest::addAchievementId(bdGetAchievementStatesRequest *this, unsigned __int64 achievementId)
{
  __int64 m_size; 

  bdHandleAssert(this->m_achievementIds.m_size < 3, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned __int64,3>::pushBack", 0x40u, "No more capacity for pushBack");
  m_size = this->m_achievementIds.m_size;
  if ( (unsigned int)m_size < 3 )
  {
    this->m_achievementIds.m_elements[m_size] = achievementId;
    ++this->m_achievementIds.m_size;
  }
  return this;
}

/*
==============
bdGetAchievementStatesRequest::addAchievementName
==============
*/
bdGetAchievementStatesRequest *bdGetAchievementStatesRequest::addAchievementName(bdGetAchievementStatesRequest *this, const char *achievementName)
{
  __int64 m_size; 
  __int64 v4; 
  _BYTE *v5; 
  unsigned __int64 v6; 
  char dst[32]; 
  __m256i v9; 
  __m256i v10; 
  int v11; 
  char v12; 

  if ( bdStrlcpy(dst, achievementName, 0x65ui64) > 0x64 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<100>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<100>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  bdHandleAssert(this->m_achievementNames.m_size < 3, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructFixedSizeString<100>,3>::pushBack", 0x40u, "No more capacity for pushBack");
  m_size = this->m_achievementNames.m_size;
  if ( (unsigned int)m_size < 3 )
  {
    v4 = m_size;
    *(__m256i *)this->m_achievementNames.m_elements[v4].m_buffer = *(__m256i *)dst;
    *(__m256i *)&this->m_achievementNames.m_elements[v4].m_buffer[32] = v9;
    *(__m256i *)&this->m_achievementNames.m_elements[v4].m_buffer[64] = v10;
    *(_DWORD *)&this->m_achievementNames.m_elements[v4].m_buffer[96] = v11;
    this->m_achievementNames.m_elements[v4].m_buffer[100] = v12;
    ++this->m_achievementNames.m_size;
  }
  v5 = memchr_0(dst, 0, 0x65ui64);
  if ( v5 )
    v6 = v5 - dst;
  else
    v6 = 101i64;
  bdHandleAssert(v6 < 0x65, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<100>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
  return this;
}

/*
==============
bdGetAchievementStatesRequest::addKind
==============
*/
bdGetAchievementStatesRequest *bdGetAchievementStatesRequest::addKind(bdGetAchievementStatesRequest *this, unsigned __int16 kind)
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
bdGetAchievementStatesRequest::addStatus
==============
*/
bdGetAchievementStatesRequest *bdGetAchievementStatesRequest::addStatus(bdGetAchievementStatesRequest *this, bdAchievementStatus::Enum status)
{
  __int64 m_size; 

  bdHandleAssert(this->m_statuses.m_size < 5, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<enum bdAchievementStatus::Enum,5>::pushBack", 0x40u, "No more capacity for pushBack");
  m_size = this->m_statuses.m_size;
  if ( (unsigned int)m_size < 5 )
  {
    this->m_statuses.m_elements[m_size] = status;
    ++this->m_statuses.m_size;
  }
  return this;
}

/*
==============
bdGetAchievementStatesRequest::deserialize
==============
*/
bool bdGetAchievementStatesRequest::deserialize(bdGetAchievementStatesRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdgetachievementstatesrequest.cpp", "bdGetAchievementStatesRequest::deserialize", 0x7Fu, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdGetAchievementStatesRequest::serialize
==============
*/
bool bdGetAchievementStatesRequest::serialize(bdGetAchievementStatesRequest *this, bdStructBufferSerializer *serializer)
{
  const char *v2; 
  unsigned int v5; 
  void *v6; 
  __int64 v7; 
  unsigned int m_size; 
  bool v9; 
  unsigned int v10; 
  unsigned int v11; 
  void *v12; 
  bool v13; 
  unsigned int i; 
  unsigned int j; 
  bdStructFixedSizeString<100> *v16; 
  void *v17; 
  unsigned int v18; 
  bool result; 
  bool m_hasValue; 
  bool v21; 
  bool v22; 

  v2 = (const char *)(&this->__vftable + 2);
  v5 = 20;
  v6 = memchr_0(&this->__vftable + 2, 0, 0x14ui64);
  if ( v6 )
    v5 = (_DWORD)v6 - (_DWORD)v2;
  v7 = 0i64;
  if ( !bdStructBufferSerializer::writeString(serializer, 1u, v2, v5) )
    goto LABEL_16;
  m_size = this->m_kinds.m_size;
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
      goto LABEL_16;
  }
  if ( !bdStructBufferSerializer::writeUInt16(serializer, 3u, this->m_limit) )
    goto LABEL_16;
  v11 = 1024;
  v12 = memchr_0(&this->m_pageToken, 0, 0x400ui64);
  if ( v12 )
    v11 = (_DWORD)v12 - ((_DWORD)this + 87);
  if ( bdStructBufferSerializer::writeString(serializer, 4u, this->m_pageToken.m_buffer, v11) )
    v13 = 1;
  else
LABEL_16:
    v13 = 0;
  for ( i = 0; i < this->m_statuses.m_size; ++i )
    v13 = v13 && (bdHandleAssert(i < this->m_statuses.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<enum bdAchievementStatus::Enum,5>::operator []", 0x54u, "i is out of range"), bdStructBufferSerializer::writeUInt16(serializer, 5u, this->m_statuses.m_elements[i]));
  for ( j = 0; j < this->m_achievementNames.m_size; ++j )
  {
    if ( !v13 )
      goto LABEL_29;
    bdHandleAssert(j < this->m_achievementNames.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructFixedSizeString<100>,3>::operator []", 0x54u, "i is out of range");
    v16 = &this->m_achievementNames.m_elements[j];
    v17 = memchr_0(v16, 0, 0x64ui64);
    v18 = 100;
    if ( v17 )
      v18 = (_DWORD)v17 - (_DWORD)v16;
    if ( bdStructBufferSerializer::writeString(serializer, 6u, this->m_achievementNames.m_elements[j].m_buffer, v18) )
      v13 = 1;
    else
LABEL_29:
      v13 = 0;
  }
  if ( this->m_achievementIds.m_size )
  {
    do
    {
      v13 = v13 && (bdHandleAssert((unsigned int)v7 < this->m_achievementIds.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned __int64,3>::operator []", 0x54u, "i is out of range"), bdStructBufferSerializer::writeUInt64(serializer, 7u, this->m_achievementIds.m_elements[v7]));
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < this->m_achievementIds.m_size );
  }
  result = v13 && bdStructBufferSerializer::writeBool(serializer, 8u, this->m_includeUninitialized);
  m_hasValue = this->m_user.m_hasValue;
  if ( m_hasValue )
    result = result && (bdHandleAssert(m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdStructUserAccountID>::getValue", 0x3Cu, "Has no value"), bdStructBufferSerializer::writeObject(serializer, 9u, (const bdStructBufferSerializable *)this->m_user.m_value.gap38));
  v21 = this->m_firstPartyUser.m_hasValue;
  if ( v21 )
    result = result && (bdHandleAssert(v21, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdStructUserAccountID>::getValue", 0x3Cu, "Has no value"), bdStructBufferSerializer::writeObject(serializer, 0xAu, (const bdStructBufferSerializable *)this->m_firstPartyUser.m_value.gap38));
  v22 = this->m_platform.m_hasValue;
  if ( v22 )
    result = result && (bdHandleAssert(v22, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<enum bdPlatformID>::getValue", 0x3Cu, "Has no value"), bdStructBufferSerializer::writeUByte8(serializer, 0xBu, this->m_platform.m_value));
  return result;
}

/*
==============
bdGetAchievementStatesRequest::setIncludeUninitialized
==============
*/
bdGetAchievementStatesRequest *bdGetAchievementStatesRequest::setIncludeUninitialized(bdGetAchievementStatesRequest *this, bool includeUninitialized)
{
  this->m_includeUninitialized = includeUninitialized;
  return this;
}

/*
==============
bdGetAchievementStatesRequest::setUser
==============
*/
bdGetAchievementStatesRequest *bdGetAchievementStatesRequest::setUser(bdGetAchievementStatesRequest *this, const bdUserAccountID *user, const bdUserAccountID *firstPartyUser, bdPlatformID platform)
{
  bdGetAchievementStatesRequest *result; 
  char v8; 
  bool v9; 
  bdStructUserAccountID v10; 
  bdStructUserAccountID other; 

  bdStructUserAccountID::bdStructUserAccountID(&other, user);
  v9 = 1;
  bdStructUserAccountID::bdStructUserAccountID(&v10, &other);
  if ( &this->m_user != (bdStructOptionalObject<bdStructUserAccountID> *)&v9 )
  {
    this->m_user.m_hasValue = v9;
    bdUserAccountID::operator=(&this->m_user.m_value, &v10);
    bdReferencable::operator=((bdReferencable *)&this->m_user.m_value.gap38[*(int *)(*(_QWORD *)&this->m_user.m_value.gap38[8] + 4i64) + 8], (const bdReferencable *)&v10.gap38[*(int *)(*(_QWORD *)&v10.gap38[8] + 4i64) + 8]);
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v10._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v10.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v10._bytes_48);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)other._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other._bytes_48);
  bdStructUserAccountID::bdStructUserAccountID(&other, firstPartyUser);
  v9 = 1;
  bdStructUserAccountID::bdStructUserAccountID(&v10, &other);
  if ( &this->m_firstPartyUser != (bdStructOptionalObject<bdStructUserAccountID> *)&v9 )
  {
    this->m_firstPartyUser.m_hasValue = v9;
    bdUserAccountID::operator=(&this->m_firstPartyUser.m_value, &v10);
    bdReferencable::operator=((bdReferencable *)&this->m_firstPartyUser.m_value.gap38[*(int *)(*(_QWORD *)&this->m_firstPartyUser.m_value.gap38[8] + 4i64) + 8], (const bdReferencable *)&v10.gap38[*(int *)(*(_QWORD *)&v10.gap38[8] + 4i64) + 8]);
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v10._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v10.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v10._bytes_48);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)other._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other._bytes_48);
  result = this;
  if ( &this->m_platform != (bdStructOptionalObject<enum bdPlatformID> *)&v8 )
  {
    this->m_platform.m_hasValue = 1;
    this->m_platform.m_value = platform;
  }
  return result;
}

/*
==============
bdGetAchievementStatesRequest::bdGetAchievementStatesRequest
==============
*/
void bdGetAchievementStatesRequest::bdGetAchievementStatesRequest(bdGetAchievementStatesRequest *this, const bdGetAchievementStatesRequest *__that, int a3)
{
  __int64 v5; 
  unsigned int m_size; 
  unsigned int i; 
  bdStructFixedSizeString<1024> *p_m_pageToken; 
  bdStructFixedSizeString<1024> *v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int j; 
  unsigned int v13; 
  unsigned int k; 
  __int64 v15; 
  unsigned int v16; 

  v5 = 0i64;
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetAchievementStatesRequest::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)(&this->m_platform + 1), (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this, __that);
  this->__vftable = (bdGetAchievementStatesRequest_vtbl *)&bdGetAchievementStatesRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetAchievementStatesRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetAchievementStatesRequest_vtbl *)&bdGetAchievementStatesRequest::`vftable'{for `bdReferencable'};
  *((_OWORD *)&this->__vftable + 1) = *((_OWORD *)&__that->__vftable + 1);
  *(_DWORD *)this->m_context = *(_DWORD *)__that->m_context;
  this->m_context[4] = __that->m_context[4];
  this->m_kinds.m_size = 0;
  m_size = __that->m_kinds.m_size;
  this->m_kinds.m_size = m_size;
  for ( i = 0; i < this->m_kinds.m_size; ++i )
    this->m_kinds.m_elements[i] = __that->m_kinds.m_elements[i];
  this->m_limit = __that->m_limit;
  this->m_includeUninitialized = __that->m_includeUninitialized;
  p_m_pageToken = &this->m_pageToken;
  v9 = &__that->m_pageToken;
  v10 = 8i64;
  do
  {
    *(_OWORD *)p_m_pageToken->m_buffer = *(_OWORD *)v9->m_buffer;
    *(_OWORD *)&p_m_pageToken->m_buffer[16] = *(_OWORD *)&v9->m_buffer[16];
    *(_OWORD *)&p_m_pageToken->m_buffer[32] = *(_OWORD *)&v9->m_buffer[32];
    *(_OWORD *)&p_m_pageToken->m_buffer[48] = *(_OWORD *)&v9->m_buffer[48];
    *(_OWORD *)&p_m_pageToken->m_buffer[64] = *(_OWORD *)&v9->m_buffer[64];
    *(_OWORD *)&p_m_pageToken->m_buffer[80] = *(_OWORD *)&v9->m_buffer[80];
    *(_OWORD *)&p_m_pageToken->m_buffer[96] = *(_OWORD *)&v9->m_buffer[96];
    p_m_pageToken = (bdStructFixedSizeString<1024> *)((char *)p_m_pageToken + 128);
    *(_OWORD *)&p_m_pageToken[-1].m_buffer[1009] = *(_OWORD *)&v9->m_buffer[112];
    v9 = (bdStructFixedSizeString<1024> *)((char *)v9 + 128);
    --v10;
  }
  while ( v10 );
  p_m_pageToken->m_buffer[0] = v9->m_buffer[0];
  this->m_statuses.m_size = 0;
  v11 = __that->m_statuses.m_size;
  this->m_statuses.m_size = v11;
  for ( j = 0; j < this->m_statuses.m_size; ++j )
    this->m_statuses.m_elements[j] = __that->m_statuses.m_elements[j];
  `eh vector constructor iterator'(&this->m_achievementNames, 0x65ui64, 3ui64, (void (__fastcall *)(void *))bdStructFixedSizeString<100>::bdStructFixedSizeString<100>, (void (__fastcall *)(void *))bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>);
  this->m_achievementNames.m_size = 0;
  v13 = __that->m_achievementNames.m_size;
  this->m_achievementNames.m_size = v13;
  for ( k = 0; k < this->m_achievementNames.m_size; ++k )
  {
    v15 = k;
    *(__m256i *)this->m_achievementNames.m_elements[v15].m_buffer = *(__m256i *)__that->m_achievementNames.m_elements[v15].m_buffer;
    *(__m256i *)&this->m_achievementNames.m_elements[v15].m_buffer[32] = *(__m256i *)&__that->m_achievementNames.m_elements[v15].m_buffer[32];
    *(__m256i *)&this->m_achievementNames.m_elements[v15].m_buffer[64] = *(__m256i *)&__that->m_achievementNames.m_elements[v15].m_buffer[64];
    *(_DWORD *)&this->m_achievementNames.m_elements[v15].m_buffer[96] = *(_DWORD *)&__that->m_achievementNames.m_elements[v15].m_buffer[96];
    this->m_achievementNames.m_elements[v15].m_buffer[100] = __that->m_achievementNames.m_elements[v15].m_buffer[100];
  }
  this->m_achievementIds.m_size = 0;
  v16 = __that->m_achievementIds.m_size;
  this->m_achievementIds.m_size = v16;
  if ( v16 )
  {
    do
    {
      this->m_achievementIds.m_elements[v5] = __that->m_achievementIds.m_elements[v5];
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < this->m_achievementIds.m_size );
  }
  this->m_user.m_hasValue = __that->m_user.m_hasValue;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_user.m_value, &__that->m_user.m_value);
  this->m_firstPartyUser.m_hasValue = __that->m_firstPartyUser.m_hasValue;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_firstPartyUser.m_value, &__that->m_firstPartyUser.m_value);
  this->m_platform.m_hasValue = __that->m_platform.m_hasValue;
  this->m_platform.m_value = __that->m_platform.m_value;
}

