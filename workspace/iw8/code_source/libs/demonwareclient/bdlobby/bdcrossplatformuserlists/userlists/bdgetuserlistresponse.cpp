/*
==============
bdGetUserListResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdGetUserListResponse::handleReplySuccess(bdGetUserListResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdGetUserListResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdGetUserListResponse::getNumUsers
==============
*/

unsigned int __fastcall bdGetUserListResponse::getNumUsers(bdGetUserListResponse *this)
{
  return ?getNumUsers@bdGetUserListResponse@@QEBAIXZ(this);
}

/*
==============
bdGetUserListResponse::getPageToken
==============
*/

const char *__fastcall bdGetUserListResponse::getPageToken(bdGetUserListResponse *this)
{
  return ?getPageToken@bdGetUserListResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdGetUserListResponse::bdGetUserListResponse
==============
*/

void __fastcall bdGetUserListResponse::bdGetUserListResponse(bdGetUserListResponse *this)
{
  ??0bdGetUserListResponse@@QEAA@XZ(this);
}

/*
==============
bdGetUserListResponse::reset
==============
*/

void __fastcall bdGetUserListResponse::reset(bdGetUserListResponse *this)
{
  ?reset@bdGetUserListResponse@@QEAAXXZ(this);
}

/*
==============
bdGetUserListResponse::getUser
==============
*/

bdUserListEntity *__fastcall bdGetUserListResponse::getUser(bdGetUserListResponse *this, unsigned int index)
{
  return ?getUser@bdGetUserListResponse@@QEAAAEAVbdUserListEntity@@I@Z(this, index);
}

/*
==============
bdGetUserListResponse::getErrorMap
==============
*/

bdRESTErrorMap *__fastcall bdGetUserListResponse::getErrorMap(bdGetUserListResponse *this, bdRESTErrorMap *result)
{
  return ?getErrorMap@bdGetUserListResponse@@UEBA?AVbdRESTErrorMap@@XZ(this, result);
}

/*
==============
bdGetUserListResponse::bdGetUserListResponse
==============
*/
void bdGetUserListResponse::bdGetUserListResponse(bdGetUserListResponse *this)
{
  unsigned __int64 v2; 
  size_t v3; 

  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdGetUserListResponse_vtbl *)&bdGetUserListResponse::`vftable';
  `eh vector constructor iterator'(&this->m_userList, 0xF8ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserListEntity::bdUserListEntity, (void (__fastcall *)(void *))bdUserListEntity::~bdUserListEntity);
  this->m_userList.m_size = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v2 = -1i64;
  do
    ++v2;
  while ( *((_BYTE *)&queryFormat.fmt + v2 + 3) );
  if ( this != (bdGetUserListResponse *)-49648i64 )
  {
    v3 = 1024i64;
    if ( v2 < 0x400 )
      v3 = v2;
    memcpy_0(&this->m_pageToken, (char *)&queryFormat.fmt + 3, v3);
    this->m_pageToken.m_buffer[v3] = 0;
  }
}

/*
==============
bdGetUserListResponse::getErrorMap
==============
*/
bdRESTErrorMap *bdGetUserListResponse::getErrorMap(bdGetUserListResponse *this, bdRESTErrorMap *result)
{
  bdRESTErrorMap::bdRESTErrorMap(result, BD_REST_CROSS_PLATFORM_USERLISTS_ERROR_MAP_17, 4u);
  return result;
}

/*
==============
bdGetUserListResponse::getNumUsers
==============
*/
__int64 bdGetUserListResponse::getNumUsers(bdGetUserListResponse *this)
{
  return this->m_userList.m_size;
}

/*
==============
bdGetUserListResponse::getPageToken
==============
*/
bdStructFixedSizeString<1024> *bdGetUserListResponse::getPageToken(bdGetUserListResponse *this)
{
  return &this->m_pageToken;
}

/*
==============
bdGetUserListResponse::getUser
==============
*/
bdUserListEntity *bdGetUserListResponse::getUser(bdGetUserListResponse *this, unsigned int index)
{
  bdGetUserListResponse *v2; 
  __int64 v3; 

  v2 = this;
  v3 = index;
  bdHandleAssert(index < this->m_userList.m_size, "index < m_userList.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformuserlists\\userlists\\bdgetuserlistresponse.cpp", "bdGetUserListResponse::getUser", 0x1Bu, "getUser index out of range");
  v2 = (bdGetUserListResponse *)((char *)v2 + 40);
  bdHandleAssert((unsigned int)v3 < LODWORD(v2->m_userList.m_elements[199].m_presence.m_data.m_value.__vftable), "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserListEntity,200>::operator []", 0x4Du, "i is out of range");
  return (bdUserListEntity *)((char *)v2 + 248 * v3);
}

/*
==============
bdGetUserListResponse::handleReplySuccess
==============
*/
__int64 bdGetUserListResponse::handleReplySuccess(bdGetUserListResponse *this, const bdRESTResponseMessage *reply)
{
  char v4; 
  unsigned __int64 v5; 
  size_t v6; 
  unsigned int v7; 
  bool String; 
  unsigned int m_count; 
  unsigned int i; 
  __int64 m_size; 
  bdUserListEntity *v12; 
  unsigned __int64 userID; 
  unsigned __int64 score; 
  bdJSONDeserializer v16; 
  bdUserListEntityData userData; 
  bdJSONDeserializer v18; 
  bdJSONDeserializer deserializer; 
  __int64 v20; 
  bdUserPresenceInfo presence; 
  bdUserDetails userDetails; 
  bdUserListEntity v23; 
  char accountType[8]; 
  __int16 v25; 
  char usernameWithHash[112]; 
  char value[1024]; 

  v20 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer);
  if ( bdJSONDeserializer::getString(&deserializer, "pageToken", value, 0x400u) )
  {
    v4 = 1;
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v5 = -1i64;
    do
      ++v5;
    while ( value[v5] );
    if ( this != (bdGetUserListResponse *)-49648i64 )
    {
      v6 = 1024i64;
      if ( v5 < 0x400 )
        v6 = v5;
      memcpy_0(&this->m_pageToken, value, v6);
      this->m_pageToken.m_buffer[v6] = 0;
    }
    if ( v5 > 0x400 )
    {
      bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<1024>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<1024>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    }
  }
  else
  {
    v4 = 0;
  }
  bdJSONDeserializer::bdJSONDeserializer(&v18);
  v7 = 0;
  if ( v4 && bdJSONDeserializer::getArray(&deserializer, "userList", &v18) )
  {
    String = 1;
    m_count = v18.m_count;
    for ( i = 0; i < m_count; ++i )
    {
      if ( i >= 0xC8 )
        break;
      bdJSONDeserializer::bdJSONDeserializer(&v16);
      userID = 0i64;
      *(_QWORD *)accountType = 0i64;
      v25 = 0;
      memset_0(usernameWithHash, 0, 0x61ui64);
      score = 0i64;
      if ( String && bdJSONDeserializer::getObject(&v18, i, &v16) && bdJSONDeserializer::getUInt64(&v16, "userID", &userID) && bdJSONDeserializer::getString(&v16, "accountType", accountType, 0xAu) && bdJSONDeserializer::getUInt64(&v16, "score", &score) )
      {
        String = 1;
        if ( bdJSONDeserializer::hasKey(&v16, "username") )
          String = bdJSONDeserializer::getString(&v16, "username", usernameWithHash, 0x61u);
      }
      else
      {
        String = 0;
      }
      bdUserPresenceInfo::bdUserPresenceInfo(&presence);
      if ( String && bdJSONDeserializer::hasKey(&v16, "presence") )
        String = bdUserPresenceInfo::deserialize(&presence, "presence", &v16);
      bdUserListEntityData::bdUserListEntityData(&userData);
      if ( String )
      {
        if ( bdJSONDeserializer::hasKey(&v16, "metadata") )
          String = userData.deserialize(&userData, "metadata", &v16);
        if ( String )
        {
          bdUserDetails::bdUserDetails(&userDetails, &userID, accountType);
          bdUserDetails::setUsernameWithHash(&userDetails, usernameWithHash);
          bdUserListEntity::bdUserListEntity(&v23, &userDetails, score, &userData, &presence);
          if ( this->m_userList.m_size >= 0xC8 )
          {
            String = 0;
          }
          else
          {
            bdHandleAssert(this->m_userList.m_size < 0xC8, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserListEntity,200>::pushBack", 0x40u, "No more capacity for pushBack");
            m_size = this->m_userList.m_size;
            if ( (unsigned int)m_size < 0xC8 )
            {
              v12 = &this->m_userList.m_elements[m_size];
              this->m_userList.m_size = m_size + 1;
              v12->m_score = v23.m_score;
              bdCrossPlatformUserMetadata::operator=(&v12->m_userData, &v23.m_userData);
              bdUserDetails::operator=(&v12->m_userDetails, &v23.m_userDetails);
              bdUserPresenceInfo::operator=(&v12->m_presence, &v23.m_presence);
            }
          }
          bdUserListEntity::~bdUserListEntity(&v23);
          bdUserDetails::~bdUserDetails((bdUserDetails *)&userDetails.gap79[7]);
          bdReferencable::~bdReferencable((bdReferencable *)&userDetails.gap79[7]);
        }
      }
      bdUserListEntityData::~bdUserListEntityData(&userData);
      bdUserPresenceInfo::~bdUserPresenceInfo(&presence);
      bdJSONDeserializer::~bdJSONDeserializer(&v16);
    }
  }
  else
  {
    String = 0;
  }
  LOBYTE(v7) = String;
  bdJSONDeserializer::~bdJSONDeserializer(&v18);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v7;
}

/*
==============
bdGetUserListResponse::reset
==============
*/
void bdGetUserListResponse::reset(bdGetUserListResponse *this)
{
  this->m_userList.m_size = 0;
}

