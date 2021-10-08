/*
==============
readJSONUsers
==============
*/

bool __fastcall readJSONUsers(bdJSONDeserializer *rootObjectDeserializer, const char *key, bdStructFixedSizeArray<bdStructUserAccountID,100> *users)
{
  return ?readJSONUsers@@YA_NAEAVbdJSONDeserializer@@PEBDAEAV?$bdStructFixedSizeArray@VbdStructUserAccountID@@$0GE@@@@Z(rootObjectDeserializer, key, users);
}

/*
==============
bdSendFriendInvitationsResponse::getFriended
==============
*/

bdUserAccountID *__fastcall bdSendFriendInvitationsResponse::getFriended(bdSendFriendInvitationsResponse *this, unsigned int index)
{
  return ?getFriended@bdSendFriendInvitationsResponse@@QEAAAEAVbdUserAccountID@@I@Z(this, index);
}

/*
==============
readJSONErrorUsers
==============
*/

bool __fastcall readJSONErrorUsers(bdJSONDeserializer *rootObjectDeserializer, const char *key, bdStructFixedSizeArray<bdCrossPlatformFriendsErrorUser,100> *errorUsers)
{
  return ?readJSONErrorUsers@@YA_NAEAVbdJSONDeserializer@@PEBDAEAV?$bdStructFixedSizeArray@VbdCrossPlatformFriendsErrorUser@@$0GE@@@@Z(rootObjectDeserializer, key, errorUsers);
}

/*
==============
bdSendFriendInvitationsResponse::~bdSendFriendInvitationsResponse
==============
*/

void __fastcall bdSendFriendInvitationsResponse::~bdSendFriendInvitationsResponse(bdSendFriendInvitationsResponse *this)
{
  ??1bdSendFriendInvitationsResponse@@UEAA@XZ(this);
}

/*
==============
bdSendFriendInvitationsResponse::getErrorMap
==============
*/

bdRESTErrorMap *__fastcall bdSendFriendInvitationsResponse::getErrorMap(bdSendFriendInvitationsResponse *this, bdRESTErrorMap *result)
{
  return ?getErrorMap@bdSendFriendInvitationsResponse@@UEBA?AVbdRESTErrorMap@@XZ(this, result);
}

/*
==============
bdSendFriendInvitationsResponse::getError
==============
*/

bdCrossPlatformFriendsErrorUser *__fastcall bdSendFriendInvitationsResponse::getError(bdSendFriendInvitationsResponse *this, unsigned int index)
{
  return ?getError@bdSendFriendInvitationsResponse@@QEAAAEAVbdCrossPlatformFriendsErrorUser@@I@Z(this, index);
}

/*
==============
bdSendFriendInvitationsResponse::reset
==============
*/

void __fastcall bdSendFriendInvitationsResponse::reset(bdSendFriendInvitationsResponse *this)
{
  ?reset@bdSendFriendInvitationsResponse@@QEAAXXZ(this);
}

/*
==============
bdSendFriendInvitationsResponse::getNumErrors
==============
*/

unsigned int __fastcall bdSendFriendInvitationsResponse::getNumErrors(bdSendFriendInvitationsResponse *this)
{
  return ?getNumErrors@bdSendFriendInvitationsResponse@@QEBAIXZ(this);
}

/*
==============
bdSendFriendInvitationsResponse::getPending
==============
*/

bdUserAccountID *__fastcall bdSendFriendInvitationsResponse::getPending(bdSendFriendInvitationsResponse *this, unsigned int index)
{
  return ?getPending@bdSendFriendInvitationsResponse@@QEAAAEAVbdUserAccountID@@I@Z(this, index);
}

/*
==============
bdSendFriendInvitationsResponse::getNumPending
==============
*/

unsigned int __fastcall bdSendFriendInvitationsResponse::getNumPending(bdSendFriendInvitationsResponse *this)
{
  return ?getNumPending@bdSendFriendInvitationsResponse@@QEBAIXZ(this);
}

/*
==============
bdSendFriendInvitationsResponse::getNumFriended
==============
*/

unsigned int __fastcall bdSendFriendInvitationsResponse::getNumFriended(bdSendFriendInvitationsResponse *this)
{
  return ?getNumFriended@bdSendFriendInvitationsResponse@@QEBAIXZ(this);
}

/*
==============
bdSendFriendInvitationsResponse::getContext
==============
*/

const char *__fastcall bdSendFriendInvitationsResponse::getContext(bdSendFriendInvitationsResponse *this)
{
  return ?getContext@bdSendFriendInvitationsResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdSendFriendInvitationsResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdSendFriendInvitationsResponse::handleReplySuccess(bdSendFriendInvitationsResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdSendFriendInvitationsResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdSendFriendInvitationsResponse::bdSendFriendInvitationsResponse
==============
*/

void __fastcall bdSendFriendInvitationsResponse::bdSendFriendInvitationsResponse(bdSendFriendInvitationsResponse *this)
{
  ??0bdSendFriendInvitationsResponse@@QEAA@XZ(this);
}

/*
==============
bdSendFriendInvitationsResponse::bdSendFriendInvitationsResponse
==============
*/
void bdSendFriendInvitationsResponse::bdSendFriendInvitationsResponse(bdSendFriendInvitationsResponse *this)
{
  unsigned __int64 v2; 
  size_t v3; 

  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdSendFriendInvitationsResponse_vtbl *)&bdSendFriendInvitationsResponse::`vftable';
  `eh vector vbase constructor iterator'(&this->m_pending, 0x58ui64, 0x64ui64, (void (__fastcall *)(void *))bdStructUserAccountID::bdStructUserAccountID, (void (__fastcall *)(void *))bdStructUserAccountID::`vbase destructor);
  this->m_pending.m_size = 0;
  `eh vector vbase constructor iterator'(&this->m_friended, 0x58ui64, 0x64ui64, (void (__fastcall *)(void *))bdStructUserAccountID::bdStructUserAccountID, (void (__fastcall *)(void *))bdStructUserAccountID::`vbase destructor);
  this->m_friended.m_size = 0;
  `eh vector constructor iterator'(&this->m_errors, 0x60ui64, 0x64ui64, (void (__fastcall *)(void *))bdCrossPlatformFriendsErrorUser::bdCrossPlatformFriendsErrorUser, (void (__fastcall *)(void *))bdCrossPlatformFriendsErrorUser::~bdCrossPlatformFriendsErrorUser);
  this->m_errors.m_size = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v2 = -1i64;
  do
    ++v2;
  while ( *((_BYTE *)&queryFormat.fmt + v2 + 3) );
  if ( this != (bdSendFriendInvitationsResponse *)-27264i64 )
  {
    v3 = 16i64;
    if ( v2 < 0x10 )
      v3 = v2;
    memcpy_0(&this->m_context, (char *)&queryFormat.fmt + 3, v3);
    this->m_context.m_buffer[v3] = 0;
  }
}

/*
==============
bdSendFriendInvitationsResponse::~bdSendFriendInvitationsResponse
==============
*/
void bdSendFriendInvitationsResponse::~bdSendFriendInvitationsResponse(bdSendFriendInvitationsResponse *this)
{
  this->__vftable = (bdSendFriendInvitationsResponse_vtbl *)&bdSendFriendInvitationsResponse::`vftable';
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&this->m_context);
  `eh vector destructor iterator'(&this->m_errors, 0x60ui64, 0x64ui64, (void (__fastcall *)(void *))bdCrossPlatformFriendsErrorUser::~bdCrossPlatformFriendsErrorUser);
  `eh vector destructor iterator'(&this->m_friended, 0x58ui64, 0x64ui64, (void (__fastcall *)(void *))bdStructUserAccountID::`vbase destructor);
  `eh vector destructor iterator'(&this->m_pending, 0x58ui64, 0x64ui64, (void (__fastcall *)(void *))bdStructUserAccountID::`vbase destructor);
  bdRESTResponse::~bdRESTResponse(this);
}

/*
==============
bdSendFriendInvitationsResponse::getContext
==============
*/
bdStructFixedSizeString<16> *bdSendFriendInvitationsResponse::getContext(bdSendFriendInvitationsResponse *this)
{
  return &this->m_context;
}

/*
==============
bdSendFriendInvitationsResponse::getError
==============
*/
bdCrossPlatformFriendsErrorUser *bdSendFriendInvitationsResponse::getError(bdSendFriendInvitationsResponse *this, unsigned int index)
{
  bdSendFriendInvitationsResponse *v2; 
  __int64 v3; 

  v2 = this;
  v3 = index;
  bdHandleAssert(index < this->m_errors.m_size, "index < m_errors.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformfriends\\friends\\bdsendfriendinvitationsresponse.cpp", "bdSendFriendInvitationsResponse::getError", 0x38u, "getError index out of range");
  v2 = (bdSendFriendInvitationsResponse *)((char *)v2 + 17656);
  bdHandleAssert((unsigned int)v3 < LODWORD(v2->m_friended.m_elements[8].m_userID), "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdCrossPlatformFriendsErrorUser,100>::operator []", 0x4Du, "i is out of range");
  return (bdCrossPlatformFriendsErrorUser *)((char *)v2 + 96 * v3);
}

/*
==============
bdSendFriendInvitationsResponse::getErrorMap
==============
*/
bdRESTErrorMap *bdSendFriendInvitationsResponse::getErrorMap(bdSendFriendInvitationsResponse *this, bdRESTErrorMap *result)
{
  bdRESTErrorMap::bdRESTErrorMap(result, BD_REST_CROSS_PLATFORM_FRIENDS_ERROR_MAP_4, 0xBu);
  return result;
}

/*
==============
bdSendFriendInvitationsResponse::getFriended
==============
*/
bdUserAccountID *bdSendFriendInvitationsResponse::getFriended(bdSendFriendInvitationsResponse *this, unsigned int index)
{
  bdSendFriendInvitationsResponse *v2; 
  __int64 v3; 

  v2 = this;
  v3 = index;
  bdHandleAssert(index < this->m_friended.m_size, "index < m_friended.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformfriends\\friends\\bdsendfriendinvitationsresponse.cpp", "bdSendFriendInvitationsResponse::getFriended", 0x33u, "getFriended index out of range");
  v2 = (bdSendFriendInvitationsResponse *)((char *)v2 + 8848);
  bdHandleAssert((unsigned int)v3 < LODWORD(v2->m_pending.m_elements[99].m_userID), "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructUserAccountID,100>::operator []", 0x4Du, "i is out of range");
  return (bdUserAccountID *)((char *)v2 + 88 * v3);
}

/*
==============
bdSendFriendInvitationsResponse::getNumErrors
==============
*/
__int64 bdSendFriendInvitationsResponse::getNumErrors(bdSendFriendInvitationsResponse *this)
{
  return this->m_errors.m_size;
}

/*
==============
bdSendFriendInvitationsResponse::getNumFriended
==============
*/
__int64 bdSendFriendInvitationsResponse::getNumFriended(bdSendFriendInvitationsResponse *this)
{
  return this->m_friended.m_size;
}

/*
==============
bdSendFriendInvitationsResponse::getNumPending
==============
*/
__int64 bdSendFriendInvitationsResponse::getNumPending(bdSendFriendInvitationsResponse *this)
{
  return this->m_pending.m_size;
}

/*
==============
bdSendFriendInvitationsResponse::getPending
==============
*/
bdUserAccountID *bdSendFriendInvitationsResponse::getPending(bdSendFriendInvitationsResponse *this, unsigned int index)
{
  bdSendFriendInvitationsResponse *v2; 
  __int64 v3; 

  v2 = this;
  v3 = index;
  bdHandleAssert(index < this->m_pending.m_size, "index < m_pending.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformfriends\\friends\\bdsendfriendinvitationsresponse.cpp", "bdSendFriendInvitationsResponse::getPending", 0x2Eu, "getPending index out of range");
  v2 = (bdSendFriendInvitationsResponse *)((char *)v2 + 40);
  bdHandleAssert((unsigned int)v3 < LODWORD(v2->m_pending.m_elements[99].m_userID), "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructUserAccountID,100>::operator []", 0x4Du, "i is out of range");
  return (bdUserAccountID *)((char *)v2 + 88 * v3);
}

/*
==============
bdSendFriendInvitationsResponse::handleReplySuccess
==============
*/
_BOOL8 bdSendFriendInvitationsResponse::handleReplySuccess(bdSendFriendInvitationsResponse *this, const bdRESTResponseMessage *reply)
{
  BOOL v4; 
  bdJSONDeserializer deserializer; 

  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer);
  v4 = bdJSONDeserializer::getString(&deserializer, "context", this->m_context.m_buffer, 0x10u) && readJSONUsers(&deserializer, "pending", &this->m_pending) && readJSONUsers(&deserializer, "friended", &this->m_friended) && readJSONErrorUsers(&deserializer, "errors", &this->m_errors);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v4;
}

/*
==============
readJSONErrorUsers
==============
*/
_BOOL8 readJSONErrorUsers(bdJSONDeserializer *rootObjectDeserializer, const char *key, bdStructFixedSizeArray<bdCrossPlatformFriendsErrorUser,100> *errorUsers)
{
  bool Array; 
  unsigned int m_count; 
  unsigned int i; 
  __int64 m_size; 
  bdCrossPlatformFriendsErrorUser *v10; 
  unsigned int errorCode; 
  unsigned __int64 userID; 
  bdJSONDeserializer v14; 
  bdJSONDeserializer value; 
  __int64 v16; 
  bdCrossPlatformFriendsErrorUser v17; 
  bdUserAccountID v18; 
  char accountType[8]; 
  __int16 v20; 

  v16 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  Array = bdJSONDeserializer::getArray(rootObjectDeserializer, key, &value);
  if ( Array )
  {
    m_count = value.m_count;
    for ( i = 0; i < m_count; ++i )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v14);
      userID = 0i64;
      *(_QWORD *)accountType = 0i64;
      v20 = 0;
      errorCode = 0;
      Array = Array && bdJSONDeserializer::getObject(&value, i, &v14) && bdJSONDeserializer::getUInt64(&v14, "userID", &userID) && bdJSONDeserializer::getString(&v14, "accountType", accountType, 0xAu) && bdJSONDeserializer::getUInt32(&v14, "errorCode", &errorCode);
      if ( Array )
      {
        bdUserAccountID::bdUserAccountID(&v18, &userID, accountType);
        bdCrossPlatformFriendsErrorUser::bdCrossPlatformFriendsErrorUser(&v17, &v18, errorCode);
        bdHandleAssert(errorUsers->m_size < 0x64, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdCrossPlatformFriendsErrorUser,100>::pushBack", 0x40u, "No more capacity for pushBack");
        m_size = errorUsers->m_size;
        if ( (unsigned int)m_size < 0x64 )
        {
          v10 = &errorUsers->m_elements[m_size];
          errorUsers->m_size = m_size + 1;
          bdUserAccountID::operator=(&v10->m_user, &v17.m_user);
          bdReferencable::operator=((bdReferencable *)&v10->m_user.gap38[*(int *)(*(_QWORD *)&v10->m_user.gap38[8] + 4i64) + 8], (const bdReferencable *)&v17.m_user.gap38[*(int *)(*(_QWORD *)&v17.m_user.gap38[8] + 4i64) + 8]);
          v10->m_errorCode = v17.m_errorCode;
        }
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v17.m_user._bytes_48);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v17.m_user.gap38);
        bdReferencable::~bdReferencable((bdReferencable *)v17.m_user._bytes_48);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v18.gap38);
        bdReferencable::~bdReferencable((bdReferencable *)v18.gap38);
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v14);
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return Array;
}

/*
==============
readJSONUsers
==============
*/
_BOOL8 readJSONUsers(bdJSONDeserializer *rootObjectDeserializer, const char *key, bdStructFixedSizeArray<bdStructUserAccountID,100> *users)
{
  bool Array; 
  unsigned int m_count; 
  unsigned int i; 
  __int64 m_size; 
  bdStructUserAccountID *v10; 
  unsigned __int64 other; 
  bdJSONDeserializer v13; 
  bdJSONDeserializer value; 
  __int64 v15; 
  bdStructUserAccountID v16; 
  char accountType[8]; 
  __int16 v18; 

  v15 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  Array = bdJSONDeserializer::getArray(rootObjectDeserializer, key, &value);
  if ( Array )
  {
    m_count = value.m_count;
    for ( i = 0; i < m_count; ++i )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v13);
      other = 0i64;
      *(_QWORD *)accountType = 0i64;
      v18 = 0;
      Array = Array && bdJSONDeserializer::getObject(&value, i, &v13) && bdJSONDeserializer::getUInt64(&v13, "userID", &other) && bdJSONDeserializer::getString(&v13, "accountType", accountType, 0xAu);
      if ( Array )
      {
        bdStructUserAccountID::bdStructUserAccountID(&v16, &other, accountType);
        bdHandleAssert(users->m_size < 0x64, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructUserAccountID,100>::pushBack", 0x40u, "No more capacity for pushBack", other);
        m_size = users->m_size;
        if ( (unsigned int)m_size < 0x64 )
        {
          v10 = &users->m_elements[m_size];
          users->m_size = m_size + 1;
          bdUserAccountID::operator=(v10, &v16);
          bdReferencable::operator=((bdReferencable *)&v10->gap38[*(int *)(*(_QWORD *)&v10->gap38[8] + 4i64) + 8], (const bdReferencable *)&v16.gap38[*(int *)(*(_QWORD *)&v16.gap38[8] + 4i64) + 8]);
        }
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v16._bytes_48);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v16.gap38);
        bdReferencable::~bdReferencable((bdReferencable *)v16._bytes_48);
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v13);
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return Array;
}

/*
==============
bdSendFriendInvitationsResponse::reset
==============
*/
void bdSendFriendInvitationsResponse::reset(bdSendFriendInvitationsResponse *this)
{
  bdStructFixedSizeString<16> *p_m_context; 
  unsigned __int64 v3; 
  size_t v4; 

  p_m_context = &this->m_context;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( p_m_context )
  {
    v4 = 16i64;
    if ( v3 < 0x10 )
      v4 = v3;
    memcpy_0(p_m_context, (char *)&queryFormat.fmt + 3, v4);
    p_m_context->m_buffer[v4] = 0;
  }
  if ( v3 > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  this->m_pending.m_size = 0;
  this->m_friended.m_size = 0;
  this->m_errors.m_size = 0;
}

