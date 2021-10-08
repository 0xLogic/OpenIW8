/*
==============
bdGetPendingFriendsResponse::clearBuffer
==============
*/

void __fastcall bdGetPendingFriendsResponse::clearBuffer(bdGetPendingFriendsResponse *this)
{
  ?clearBuffer@bdGetPendingFriendsResponse@@QEAAXXZ(this);
}

/*
==============
bdGetPendingFriendsResponse::getUser
==============
*/

bdUserAccountID *__fastcall bdGetPendingFriendsResponse::getUser(bdGetPendingFriendsResponse *this, unsigned int index)
{
  return ?getUser@bdGetPendingFriendsResponse@@QEAAAEAVbdUserAccountID@@I@Z(this, index);
}

/*
==============
bdGetPendingFriendsResponse::getNumFriends
==============
*/

unsigned int __fastcall bdGetPendingFriendsResponse::getNumFriends(bdGetPendingFriendsResponse *this)
{
  return ?getNumFriends@bdGetPendingFriendsResponse@@QEBAIXZ(this);
}

/*
==============
bdGetPendingFriendsResponse::~bdGetPendingFriendsResponse
==============
*/

void __fastcall bdGetPendingFriendsResponse::~bdGetPendingFriendsResponse(bdGetPendingFriendsResponse *this)
{
  ??1bdGetPendingFriendsResponse@@UEAA@XZ(this);
}

/*
==============
bdGetPendingFriendsResponse::getMessage
==============
*/

const char *__fastcall bdGetPendingFriendsResponse::getMessage(bdGetPendingFriendsResponse *this, unsigned int index)
{
  return ?getMessage@bdGetPendingFriendsResponse@@QEBAPEBDI@Z(this, index);
}

/*
==============
bdGetPendingFriendsResponse::reset
==============
*/

void __fastcall bdGetPendingFriendsResponse::reset(bdGetPendingFriendsResponse *this)
{
  ?reset@bdGetPendingFriendsResponse@@QEAAXXZ(this);
}

/*
==============
bdGetPendingFriendsResponse::getPageToken
==============
*/

const char *__fastcall bdGetPendingFriendsResponse::getPageToken(bdGetPendingFriendsResponse *this)
{
  return ?getPageToken@bdGetPendingFriendsResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdGetPendingFriendsResponse::getFriend
==============
*/

bdCrossPlatformFriend *__fastcall bdGetPendingFriendsResponse::getFriend(bdGetPendingFriendsResponse *this, unsigned int index)
{
  return ?getFriend@bdGetPendingFriendsResponse@@QEAAAEAVbdCrossPlatformFriend@@I@Z(this, index);
}

/*
==============
bdGetPendingFriendsResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdGetPendingFriendsResponse::handleReplySuccess(bdGetPendingFriendsResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdGetPendingFriendsResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdGetPendingFriendsResponse::getErrorMap
==============
*/

bdRESTErrorMap *__fastcall bdGetPendingFriendsResponse::getErrorMap(bdGetPendingFriendsResponse *this, bdRESTErrorMap *result)
{
  return ?getErrorMap@bdGetPendingFriendsResponse@@UEBA?AVbdRESTErrorMap@@XZ(this, result);
}

/*
==============
bdGetPendingFriendsResponse::bdGetPendingFriendsResponse
==============
*/

void __fastcall bdGetPendingFriendsResponse::bdGetPendingFriendsResponse(bdGetPendingFriendsResponse *this)
{
  ??0bdGetPendingFriendsResponse@@QEAA@XZ(this);
}

/*
==============
bdGetPendingFriendsResponse::getNumUsers
==============
*/

unsigned int __fastcall bdGetPendingFriendsResponse::getNumUsers(bdGetPendingFriendsResponse *this)
{
  return ?getNumUsers@bdGetPendingFriendsResponse@@QEBAIXZ(this);
}

/*
==============
bdGetPendingFriendsResponse::bdGetPendingFriendsResponse
==============
*/
void bdGetPendingFriendsResponse::bdGetPendingFriendsResponse(bdGetPendingFriendsResponse *this)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  size_t v4; 
  size_t v5; 

  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdGetPendingFriendsResponse_vtbl *)&bdGetPendingFriendsResponse::`vftable';
  `eh vector vbase constructor iterator'(&this->m_users, 0x58ui64, 0x64ui64, (void (__fastcall *)(void *))bdStructUserAccountID::bdStructUserAccountID, (void (__fastcall *)(void *))bdStructUserAccountID::`vbase destructor);
  this->m_users.m_size = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v2 = -1i64;
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdGetPendingFriendsResponse *)-8848i64 )
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
  if ( this != (bdGetPendingFriendsResponse *)-8865i64 )
  {
    v5 = 1024i64;
    if ( v2 < 0x400 )
      v5 = v2;
    memcpy_0(&this->m_pageToken, (char *)&queryFormat.fmt + 3, v5);
    this->m_pageToken.m_buffer[v5] = 0;
  }
  `eh vector constructor iterator'(&this->m_friends, 0xD8ui64, 0x64ui64, (void (__fastcall *)(void *))bdCrossPlatformFriend::bdCrossPlatformFriend, (void (__fastcall *)(void *))bdCrossPlatformFriend::~bdCrossPlatformFriend);
  this->m_friends.m_size = 0;
  `eh vector constructor iterator'(&this->m_messages, 0x3FDui64, 0x64ui64, (void (__fastcall *)(void *))bdStructFixedSizeString<1020>::bdStructFixedSizeString<1020>, (void (__fastcall *)(void *))bdStructFixedSizeString<1020>::~bdStructFixedSizeString<1020>);
  this->m_messages.m_size = 0;
}

/*
==============
bdGetPendingFriendsResponse::~bdGetPendingFriendsResponse
==============
*/
void bdGetPendingFriendsResponse::~bdGetPendingFriendsResponse(bdGetPendingFriendsResponse *this)
{
  this->__vftable = (bdGetPendingFriendsResponse_vtbl *)&bdGetPendingFriendsResponse::`vftable';
  `eh vector destructor iterator'(&this->m_messages, 0x3FDui64, 0x64ui64, (void (__fastcall *)(void *))bdStructFixedSizeString<1020>::~bdStructFixedSizeString<1020>);
  `eh vector destructor iterator'(&this->m_friends, 0xD8ui64, 0x64ui64, (void (__fastcall *)(void *))bdCrossPlatformFriend::~bdCrossPlatformFriend);
  bdStructFixedSizeString<1024>::~bdStructFixedSizeString<1024>(&this->m_pageToken);
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&this->m_context);
  `eh vector destructor iterator'(&this->m_users, 0x58ui64, 0x64ui64, (void (__fastcall *)(void *))bdStructUserAccountID::`vbase destructor);
  bdRESTResponse::~bdRESTResponse(this);
}

/*
==============
bdGetPendingFriendsResponse::clearBuffer
==============
*/
void bdGetPendingFriendsResponse::clearBuffer(bdGetPendingFriendsResponse *this)
{
  this->m_users.m_size = 0;
  this->m_friends.m_size = 0;
}

/*
==============
bdGetPendingFriendsResponse::getErrorMap
==============
*/
bdRESTErrorMap *bdGetPendingFriendsResponse::getErrorMap(bdGetPendingFriendsResponse *this, bdRESTErrorMap *result)
{
  bdRESTErrorMap::bdRESTErrorMap(result, BD_REST_CROSS_PLATFORM_FRIENDS_ERROR_MAP_3, 0xBu);
  return result;
}

/*
==============
bdGetPendingFriendsResponse::getFriend
==============
*/
bdCrossPlatformFriend *bdGetPendingFriendsResponse::getFriend(bdGetPendingFriendsResponse *this, unsigned int index)
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
bdGetPendingFriendsResponse::getMessage
==============
*/
const char *bdGetPendingFriendsResponse::getMessage(bdGetPendingFriendsResponse *this, unsigned int index)
{
  bdStructFixedSizeArray<bdStructFixedSizeString<1020>,100> *p_m_messages; 
  __int64 v3; 

  p_m_messages = &this->m_messages;
  v3 = index;
  bdHandleAssert(index < this->m_messages.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructFixedSizeString<1020>,100>::operator []", 0x54u, "i is out of range");
  return (char *)p_m_messages + 1021 * v3;
}

/*
==============
bdGetPendingFriendsResponse::getNumFriends
==============
*/
__int64 bdGetPendingFriendsResponse::getNumFriends(bdGetPendingFriendsResponse *this)
{
  return this->m_friends.m_size;
}

/*
==============
bdGetPendingFriendsResponse::getNumUsers
==============
*/
__int64 bdGetPendingFriendsResponse::getNumUsers(bdGetPendingFriendsResponse *this)
{
  return this->m_users.m_size;
}

/*
==============
bdGetPendingFriendsResponse::getPageToken
==============
*/
bdStructFixedSizeString<1024> *bdGetPendingFriendsResponse::getPageToken(bdGetPendingFriendsResponse *this)
{
  return &this->m_pageToken;
}

/*
==============
bdGetPendingFriendsResponse::getUser
==============
*/
bdUserAccountID *bdGetPendingFriendsResponse::getUser(bdGetPendingFriendsResponse *this, unsigned int index)
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
bdGetPendingFriendsResponse::handleReplySuccess
==============
*/
_BOOL8 bdGetPendingFriendsResponse::handleReplySuccess(bdGetPendingFriendsResponse *this, const bdRESTResponseMessage *reply)
{
  bool v4; 
  unsigned int m_count; 
  bool String; 
  unsigned int i; 
  __int64 m_size; 
  bdStructUserAccountID *v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  bdCrossPlatformFriend *v13; 
  unsigned __int64 v14; 
  size_t v15; 
  __int64 v16; 
  __int64 v19; 
  _BYTE *v29; 
  unsigned __int64 v30; 
  unsigned __int64 other; 
  bdJSONDeserializer v33; 
  bdJSONDeserializer deserializer; 
  bdJSONDeserializer value; 
  __int64 v36; 
  bdStructUserAccountID v37; 
  bdStructUserDetails v38; 
  bdCrossPlatformFriend Buf; 
  char accountType[8]; 
  __int16 v41; 
  char usernameWithHash[112]; 
  char Src[1024]; 

  v36 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer);
  v4 = bdJSONDeserializer::getString(&deserializer, "context", this->m_context.m_buffer, 0x10u) && bdJSONDeserializer::getString(&deserializer, "page", this->m_pageToken.m_buffer, 0x400u);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  if ( v4 && bdJSONDeserializer::getArray(&deserializer, "users", &value) )
  {
    m_count = value.m_count;
    String = value.m_count + this->m_friends.m_size <= 0x64 && value.m_count + this->m_users.m_size <= 0x64;
    for ( i = 0; i < m_count; ++i )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v33);
      other = 0i64;
      *(_QWORD *)accountType = 0i64;
      v41 = 0;
      memset_0(usernameWithHash, 0, 0x61ui64);
      memset_0(Src, 0, 0x3FDui64);
      if ( String && bdJSONDeserializer::getObject(&value, i, &v33) && bdJSONDeserializer::getUInt64(&v33, "userID", &other) && bdJSONDeserializer::getString(&v33, "accountType", accountType, 0xAu) && (!bdJSONDeserializer::hasKey(&v33, "username") || bdJSONDeserializer::getString(&v33, "username", usernameWithHash, 0x61u)) )
      {
        String = 1;
        if ( bdJSONDeserializer::hasKey(&v33, "message") )
          String = bdJSONDeserializer::getString(&v33, "message", Src, 0x3FDu);
      }
      else
      {
        String = 0;
      }
      if ( String )
      {
        bdStructUserAccountID::bdStructUserAccountID(&v37, &other, accountType);
        bdStructUserDetails::bdStructUserDetails(&v38, &other, accountType);
        bdUserDetails::setUsernameWithHash(&v38, usernameWithHash);
        bdHandleAssert(this->m_users.m_size < 0x64, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructUserAccountID,100>::pushBack", 0x40u, "No more capacity for pushBack");
        m_size = this->m_users.m_size;
        if ( (unsigned int)m_size < 0x64 )
        {
          v9 = &this->m_users.m_elements[m_size];
          this->m_users.m_size = m_size + 1;
          bdUserAccountID::operator=(v9, &v37);
          bdReferencable::operator=((bdReferencable *)&v9->gap38[*(int *)(*(_QWORD *)&v9->gap38[8] + 4i64) + 8], (const bdReferencable *)&v37.gap38[*(int *)(*(_QWORD *)&v37.gap38[8] + 4i64) + 8]);
        }
        bdCrossPlatformFriend::bdCrossPlatformFriend(&Buf, &v38);
        v11 = v10;
        bdHandleAssert(this->m_friends.m_size < 0x64, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdCrossPlatformFriend,100>::pushBack", 0x40u, "No more capacity for pushBack");
        v12 = this->m_friends.m_size;
        if ( (unsigned int)v12 < 0x64 )
        {
          v13 = &this->m_friends.m_elements[v12];
          this->m_friends.m_size = v12 + 1;
          bdUserDetails::operator=(&v13->m_userDetails, (const bdUserDetails *)v11);
          bdUserPresenceInfo::operator=(&v13->m_presence, (const bdUserPresenceInfo *)(v11 + 144));
        }
        bdUserPresenceInfo::~bdUserPresenceInfo(&Buf.m_presence);
        bdUserDetails::~bdUserDetails((bdUserDetails *)&Buf.m_userDetails.gap79[7]);
        bdReferencable::~bdReferencable((bdReferencable *)&Buf.m_userDetails.gap79[7]);
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        v14 = -1i64;
        do
          ++v14;
        while ( Src[v14] );
        v15 = 1020i64;
        if ( v14 < 0x3FC )
          v15 = v14;
        memcpy_0(&Buf, Src, v15);
        *((_BYTE *)&Buf.m_userDetails.__vftable + v15) = 0;
        if ( v14 > 0x3FC )
        {
          bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<1020>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
          bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<1020>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
        }
        bdHandleAssert(this->m_messages.m_size < 0x64, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructFixedSizeString<1020>,100>::pushBack", 0x40u, "No more capacity for pushBack");
        v16 = this->m_messages.m_size;
        if ( (unsigned int)v16 < 0x64 )
        {
          _RDX = &this->m_messages.m_elements[v16];
          _RAX = &Buf;
          v19 = 7i64;
          do
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [rax]
              vmovups ymmword ptr [rdx], ymm0
              vmovups ymm0, ymmword ptr [rax+20h]
              vmovups ymmword ptr [rdx+20h], ymm0
              vmovups ymm0, ymmword ptr [rax+40h]
              vmovups ymmword ptr [rdx+40h], ymm0
              vmovups xmm0, xmmword ptr [rax+60h]
              vmovups xmmword ptr [rdx+60h], xmm0
            }
            _RDX = (bdStructFixedSizeString<1020> *)((char *)_RDX + 128);
            __asm
            {
              vmovups xmm1, xmmword ptr [rax+70h]
              vmovups xmmword ptr [rdx-10h], xmm1
            }
            _RAX = (bdCrossPlatformFriend *)((char *)_RAX + 128);
            --v19;
          }
          while ( v19 );
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rdx], ymm0
            vmovups ymm0, ymmword ptr [rax+20h]
            vmovups ymmword ptr [rdx+20h], ymm0
            vmovups ymm0, ymmword ptr [rax+40h]
            vmovups ymmword ptr [rdx+40h], ymm0
            vmovups xmm0, xmmword ptr [rax+60h]
            vmovups xmmword ptr [rdx+60h], xmm0
          }
          *(_QWORD *)&_RDX->m_buffer[112] = *(_QWORD *)&_RAX->m_userDetails.m_username[62];
          *(_DWORD *)&_RDX->m_buffer[120] = *(_DWORD *)&_RAX->m_userDetails.m_hasUsername;
          _RDX->m_buffer[124] = _RAX->m_userDetails.gap79[3];
          ++this->m_messages.m_size;
        }
        v29 = memchr_0(&Buf, 0, 0x3FDui64);
        if ( v29 )
          v30 = v29 - (_BYTE *)&Buf;
        else
          v30 = 1021i64;
        bdHandleAssert(v30 < 0x3FD, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<1020>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v38._bytes_90);
        bdUserDetails::~bdUserDetails((bdUserDetails *)&v38.gap79[7]);
        bdReferencable::~bdReferencable((bdReferencable *)v38._bytes_90);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v37._bytes_48);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v37.gap38);
        bdReferencable::~bdReferencable((bdReferencable *)v37._bytes_48);
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v33);
    }
  }
  else
  {
    String = 0;
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return String;
}

/*
==============
bdGetPendingFriendsResponse::reset
==============
*/
void bdGetPendingFriendsResponse::reset(bdGetPendingFriendsResponse *this)
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
  if ( this != (bdGetPendingFriendsResponse *)-8865i64 )
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

