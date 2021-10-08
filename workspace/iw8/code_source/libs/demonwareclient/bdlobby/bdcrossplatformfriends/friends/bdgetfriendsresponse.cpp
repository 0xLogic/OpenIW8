/*
==============
bdGetFriendsResponse::clearBuffer
==============
*/

void __fastcall bdGetFriendsResponse::clearBuffer(bdGetFriendsResponse *this)
{
  ?clearBuffer@bdGetFriendsResponse@@QEAAXXZ(this);
}

/*
==============
bdGetFriendsResponse::getErrorMap
==============
*/

bdRESTErrorMap *__fastcall bdGetFriendsResponse::getErrorMap(bdGetFriendsResponse *this, bdRESTErrorMap *result)
{
  return ?getErrorMap@bdGetFriendsResponse@@UEBA?AVbdRESTErrorMap@@XZ(this, result);
}

/*
==============
bdGetFriendsResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdGetFriendsResponse::handleReplySuccess(bdGetFriendsResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdGetFriendsResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdGetFriendsResponse::~bdGetFriendsResponse
==============
*/

void __fastcall bdGetFriendsResponse::~bdGetFriendsResponse(bdGetFriendsResponse *this)
{
  ??1bdGetFriendsResponse@@UEAA@XZ(this);
}

/*
==============
bdGetFriendsResponse::getNumFriends
==============
*/

unsigned int __fastcall bdGetFriendsResponse::getNumFriends(bdGetFriendsResponse *this)
{
  return ?getNumFriends@bdGetFriendsResponse@@QEBAIXZ(this);
}

/*
==============
bdGetFriendsResponse::getNumUsers
==============
*/

unsigned int __fastcall bdGetFriendsResponse::getNumUsers(bdGetFriendsResponse *this)
{
  return ?getNumUsers@bdGetFriendsResponse@@QEBAIXZ(this);
}

/*
==============
bdGetFriendsResponse::reset
==============
*/

void __fastcall bdGetFriendsResponse::reset(bdGetFriendsResponse *this)
{
  ?reset@bdGetFriendsResponse@@QEAAXXZ(this);
}

/*
==============
bdGetFriendsResponse::getFriend
==============
*/

bdCrossPlatformFriend *__fastcall bdGetFriendsResponse::getFriend(bdGetFriendsResponse *this, unsigned int index)
{
  return ?getFriend@bdGetFriendsResponse@@QEAAAEAVbdCrossPlatformFriend@@I@Z(this, index);
}

/*
==============
bdGetFriendsResponse::getUser
==============
*/

bdUserAccountID *__fastcall bdGetFriendsResponse::getUser(bdGetFriendsResponse *this, unsigned int index)
{
  return ?getUser@bdGetFriendsResponse@@QEAAAEAVbdUserAccountID@@I@Z(this, index);
}

/*
==============
bdGetFriendsResponse::getPageToken
==============
*/

const char *__fastcall bdGetFriendsResponse::getPageToken(bdGetFriendsResponse *this)
{
  return ?getPageToken@bdGetFriendsResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdGetFriendsResponse::bdGetFriendsResponse
==============
*/

void __fastcall bdGetFriendsResponse::bdGetFriendsResponse(bdGetFriendsResponse *this)
{
  ??0bdGetFriendsResponse@@QEAA@XZ(this);
}

/*
==============
bdGetFriendsResponse::bdGetFriendsResponse
==============
*/
void bdGetFriendsResponse::bdGetFriendsResponse(bdGetFriendsResponse *this)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  size_t v4; 
  size_t v5; 

  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdGetFriendsResponse_vtbl *)&bdGetFriendsResponse::`vftable';
  `eh vector vbase constructor iterator'(&this->m_users, 0x58ui64, 0x64ui64, (void (__fastcall *)(void *))bdStructUserAccountID::bdStructUserAccountID, (void (__fastcall *)(void *))bdStructUserAccountID::`vbase destructor);
  this->m_users.m_size = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v2 = -1i64;
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdGetFriendsResponse *)-8848i64 )
  {
    v4 = 16i64;
    if ( v3 < 0x10 )
      v4 = v3;
    memcpy_0(&this->m_context, (char *)&queryFormat.fmt + 3, v4);
    this->m_context.m_buffer[v4] = 0;
  }
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v2;
  while ( *((_BYTE *)&queryFormat.fmt + v2 + 3) );
  if ( this != (bdGetFriendsResponse *)-8865i64 )
  {
    v5 = 1024i64;
    if ( v2 < 0x400 )
      v5 = v2;
    memcpy_0(&this->m_pageToken, (char *)&queryFormat.fmt + 3, v5);
    this->m_pageToken.m_buffer[v5] = 0;
  }
  `eh vector constructor iterator'(&this->m_friends, 0xD8ui64, 0x64ui64, (void (__fastcall *)(void *))bdCrossPlatformFriend::bdCrossPlatformFriend, (void (__fastcall *)(void *))bdCrossPlatformFriend::~bdCrossPlatformFriend);
  this->m_friends.m_size = 0;
}

/*
==============
bdGetFriendsResponse::~bdGetFriendsResponse
==============
*/
void bdGetFriendsResponse::~bdGetFriendsResponse(bdGetFriendsResponse *this)
{
  this->__vftable = (bdGetFriendsResponse_vtbl *)&bdGetFriendsResponse::`vftable';
  `eh vector destructor iterator'(&this->m_friends, 0xD8ui64, 0x64ui64, (void (__fastcall *)(void *))bdCrossPlatformFriend::~bdCrossPlatformFriend);
  bdStructFixedSizeString<1024>::~bdStructFixedSizeString<1024>(&this->m_pageToken);
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&this->m_context);
  `eh vector destructor iterator'(&this->m_users, 0x58ui64, 0x64ui64, (void (__fastcall *)(void *))bdStructUserAccountID::`vbase destructor);
  bdRESTResponse::~bdRESTResponse(this);
}

/*
==============
bdGetFriendsResponse::clearBuffer
==============
*/
void bdGetFriendsResponse::clearBuffer(bdGetFriendsResponse *this)
{
  this->m_users.m_size = 0;
  this->m_friends.m_size = 0;
}

/*
==============
bdGetFriendsResponse::getErrorMap
==============
*/
bdRESTErrorMap *bdGetFriendsResponse::getErrorMap(bdGetFriendsResponse *this, bdRESTErrorMap *result)
{
  bdRESTErrorMap::bdRESTErrorMap(result, BD_REST_CROSS_PLATFORM_FRIENDS_ERROR_MAP_2, 0xBu);
  return result;
}

/*
==============
bdGetFriendsResponse::getFriend
==============
*/
bdCrossPlatformFriend *bdGetFriendsResponse::getFriend(bdGetFriendsResponse *this, unsigned int index)
{
  bdStructFixedSizeArray<bdCrossPlatformFriend,100> *p_m_friends; 
  __int64 v3; 

  p_m_friends = &this->m_friends;
  v3 = index;
  bdHandleAssert(index < this->m_friends.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdCrossPlatformFriend,100>::operator []", 0x4Du, "i is out of range");
  return (bdCrossPlatformFriend *)((char *)p_m_friends + 216 * v3);
}

/*
==============
bdGetFriendsResponse::getNumFriends
==============
*/
__int64 bdGetFriendsResponse::getNumFriends(bdGetFriendsResponse *this)
{
  return this->m_friends.m_size;
}

/*
==============
bdGetFriendsResponse::getNumUsers
==============
*/
__int64 bdGetFriendsResponse::getNumUsers(bdGetFriendsResponse *this)
{
  return this->m_users.m_size;
}

/*
==============
bdGetFriendsResponse::getPageToken
==============
*/
bdStructFixedSizeString<1024> *bdGetFriendsResponse::getPageToken(bdGetFriendsResponse *this)
{
  return &this->m_pageToken;
}

/*
==============
bdGetFriendsResponse::getUser
==============
*/
bdUserAccountID *bdGetFriendsResponse::getUser(bdGetFriendsResponse *this, unsigned int index)
{
  bdStructFixedSizeArray<bdStructUserAccountID,100> *p_m_users; 
  __int64 v3; 

  p_m_users = &this->m_users;
  v3 = index;
  bdHandleAssert(index < this->m_users.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructUserAccountID,100>::operator []", 0x4Du, "i is out of range");
  return (bdUserAccountID *)((char *)p_m_users + 88 * v3);
}

/*
==============
bdGetFriendsResponse::handleReplySuccess
==============
*/
__int64 bdGetFriendsResponse::handleReplySuccess(bdGetFriendsResponse *this, const bdRESTResponseMessage *reply)
{
  bool v4; 
  unsigned int m_count; 
  unsigned int v6; 
  bool String; 
  unsigned int v8; 
  unsigned int v9; 
  bool v10; 
  __int64 m_size; 
  bdCrossPlatformFriend *v12; 
  __int64 v13; 
  bdStructUserAccountID *v14; 
  unsigned __int64 userID; 
  bdJSONDeserializer v17; 
  bdJSONDeserializer value; 
  bdJSONDeserializer deserializer; 
  __int64 v20; 
  bdStructUserAccountID v21; 
  bdUserPresenceInfo presence; 
  bdUserDetails userDetails; 
  bdCrossPlatformFriend v24; 
  char accountType[8]; 
  __int16 v26; 
  char usernameWithHash[112]; 

  v20 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer);
  v4 = bdJSONDeserializer::getString(&deserializer, "context", this->m_context.m_buffer, 0x10u) && bdJSONDeserializer::getString(&deserializer, "page", this->m_pageToken.m_buffer, 0x400u);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  if ( v4 && bdJSONDeserializer::getArray(&deserializer, "users", &value) )
  {
    m_count = value.m_count;
    v6 = value.m_count;
    if ( value.m_count + this->m_friends.m_size <= 0x64 && value.m_count + this->m_users.m_size <= 0x64 )
    {
      String = 1;
      goto LABEL_12;
    }
  }
  else
  {
    m_count = value.m_count;
    v6 = value.m_count;
  }
  String = 0;
LABEL_12:
  v8 = 0;
  v9 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v10 = !String;
      if ( !String )
        break;
      bdJSONDeserializer::bdJSONDeserializer(&v17);
      userID = 0i64;
      *(_QWORD *)accountType = 0i64;
      v26 = 0;
      memset_0(usernameWithHash, 0, 0x61ui64);
      if ( bdJSONDeserializer::getObject(&value, v9, &v17) && bdJSONDeserializer::getUInt64(&v17, "userID", &userID) && bdJSONDeserializer::getString(&v17, "accountType", accountType, 0xAu) )
      {
        String = 1;
        if ( bdJSONDeserializer::hasKey(&v17, "username") )
          String = bdJSONDeserializer::getString(&v17, "username", usernameWithHash, 0x61u);
      }
      else
      {
        String = 0;
      }
      bdUserPresenceInfo::bdUserPresenceInfo(&presence);
      if ( String )
      {
        if ( bdJSONDeserializer::hasKey(&v17, "presence") )
          String = bdUserPresenceInfo::deserialize(&presence, "presence", &v17);
        if ( String )
        {
          bdUserDetails::bdUserDetails(&userDetails, &userID, accountType);
          bdUserDetails::setUsernameWithHash(&userDetails, usernameWithHash);
          bdCrossPlatformFriend::bdCrossPlatformFriend(&v24, &userDetails, &presence);
          bdHandleAssert(this->m_friends.m_size < 0x64, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdCrossPlatformFriend,100>::pushBack", 0x40u, "No more capacity for pushBack");
          m_size = this->m_friends.m_size;
          if ( (unsigned int)m_size < 0x64 )
          {
            v12 = &this->m_friends.m_elements[m_size];
            this->m_friends.m_size = m_size + 1;
            bdUserDetails::operator=(&v12->m_userDetails, &v24.m_userDetails);
            bdUserPresenceInfo::operator=(&v12->m_presence, &v24.m_presence);
          }
          bdStructUserAccountID::bdStructUserAccountID(&v21, &userID, accountType);
          bdHandleAssert(this->m_users.m_size < 0x64, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructUserAccountID,100>::pushBack", 0x40u, "No more capacity for pushBack");
          v13 = this->m_users.m_size;
          if ( (unsigned int)v13 < 0x64 )
          {
            v14 = &this->m_users.m_elements[v13];
            this->m_users.m_size = v13 + 1;
            bdUserAccountID::operator=(v14, &v21);
            bdReferencable::operator=((bdReferencable *)&v14->gap38[*(int *)(*(_QWORD *)&v14->gap38[8] + 4i64) + 8], (const bdReferencable *)&v21.gap38[*(int *)(*(_QWORD *)&v21.gap38[8] + 4i64) + 8]);
          }
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v21._bytes_48);
          bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v21.gap38);
          bdReferencable::~bdReferencable((bdReferencable *)v21._bytes_48);
          bdUserPresenceInfo::~bdUserPresenceInfo(&v24.m_presence);
          bdUserDetails::~bdUserDetails((bdUserDetails *)&v24.m_userDetails.gap79[7]);
          bdReferencable::~bdReferencable((bdReferencable *)&v24.m_userDetails.gap79[7]);
          bdUserDetails::~bdUserDetails((bdUserDetails *)&userDetails.gap79[7]);
          bdReferencable::~bdReferencable((bdReferencable *)&userDetails.gap79[7]);
        }
      }
      bdUserPresenceInfo::~bdUserPresenceInfo(&presence);
      bdJSONDeserializer::~bdJSONDeserializer(&v17);
      if ( ++v9 >= m_count )
        goto LABEL_30;
    }
  }
  else
  {
LABEL_30:
    v10 = !String;
  }
  LOBYTE(v8) = !v10;
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v8;
}

/*
==============
bdGetFriendsResponse::reset
==============
*/
void bdGetFriendsResponse::reset(bdGetFriendsResponse *this)
{
  bdStructFixedSizeString<16> *p_m_context; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  size_t v5; 
  size_t v6; 

  p_m_context = &this->m_context;
  this->m_users.m_size = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v3 = -1i64;
  v4 = -1i64;
  do
    ++v4;
  while ( *((_BYTE *)&queryFormat.fmt + v4 + 3) );
  if ( p_m_context )
  {
    v5 = 16i64;
    if ( v4 < 0x10 )
      v5 = v4;
    memcpy_0(p_m_context, (char *)&queryFormat.fmt + 3, v5);
    p_m_context->m_buffer[v5] = 0;
  }
  if ( v4 > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdGetFriendsResponse *)-8865i64 )
  {
    v6 = 1024i64;
    if ( v3 < 0x400 )
      v6 = v3;
    memcpy_0(&this->m_pageToken, (char *)&queryFormat.fmt + 3, v6);
    this->m_pageToken.m_buffer[v6] = 0;
  }
  if ( v3 > 0x400 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<1024>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<1024>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  this->m_friends.m_size = 0;
}

