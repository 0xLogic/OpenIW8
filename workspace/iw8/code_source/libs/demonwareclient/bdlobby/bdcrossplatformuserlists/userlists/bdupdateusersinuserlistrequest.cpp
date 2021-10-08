/*
==============
bdUpdateUsersInUserListRequest::bdUpdateUsersInUserListRequest
==============
*/

void __fastcall bdUpdateUsersInUserListRequest::bdUpdateUsersInUserListRequest(bdUpdateUsersInUserListRequest *this, const char *context, const char *listName, const unsigned int numUsers, const bdUserListEntity *users)
{
  ??0bdUpdateUsersInUserListRequest@@QEAA@PEBD0IPEBVbdUserListEntity@@@Z(this, context, listName, numUsers, users);
}

/*
==============
bdUpdateUsersInUserListRequest::bdUpdateUsersInUserListRequest
==============
*/

void __fastcall bdUpdateUsersInUserListRequest::bdUpdateUsersInUserListRequest(bdUpdateUsersInUserListRequest *this)
{
  ??0bdUpdateUsersInUserListRequest@@QEAA@XZ(this);
}

/*
==============
bdUpdateUsersInUserListRequest::setContext
==============
*/

void __fastcall bdUpdateUsersInUserListRequest::setContext(bdUpdateUsersInUserListRequest *this, const char *context)
{
  ?setContext@bdUpdateUsersInUserListRequest@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdUpdateUsersInUserListRequest::restSerializeRequest
==============
*/

bool __fastcall bdUpdateUsersInUserListRequest::restSerializeRequest(bdUpdateUsersInUserListRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdUpdateUsersInUserListRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdUpdateUsersInUserListRequest::trimOrderToString
==============
*/

const char *__fastcall bdUpdateUsersInUserListRequest::trimOrderToString(bdUpdateUsersInUserListRequest *this, const bdUpdateUsersInUserListRequest::TrimOrder *trimOrder)
{
  return ?trimOrderToString@bdUpdateUsersInUserListRequest@@IEBAPEBDAEBW4TrimOrder@1@@Z(this, trimOrder);
}

/*
==============
bdUpdateUsersInUserListRequest::bdUpdateUsersInUserListRequest
==============
*/

void __fastcall bdUpdateUsersInUserListRequest::bdUpdateUsersInUserListRequest(bdUpdateUsersInUserListRequest *this, const char *context, const char *listName, const unsigned int trimLength, const bdUpdateUsersInUserListRequest::TrimOrder trimOrder, const unsigned int numUsers, const bdUserListEntity *users)
{
  ??0bdUpdateUsersInUserListRequest@@QEAA@PEBD0IW4TrimOrder@0@IPEBVbdUserListEntity@@@Z(this, context, listName, trimLength, trimOrder, numUsers, users);
}

/*
==============
bdUpdateUsersInUserListRequest::setListName
==============
*/

void __fastcall bdUpdateUsersInUserListRequest::setListName(bdUpdateUsersInUserListRequest *this, const char *listName)
{
  ?setListName@bdUpdateUsersInUserListRequest@@QEAAXPEBD@Z(this, listName);
}

/*
==============
bdUpdateUsersInUserListRequest::setTrimOrder
==============
*/

void __fastcall bdUpdateUsersInUserListRequest::setTrimOrder(bdUpdateUsersInUserListRequest *this, const bdUpdateUsersInUserListRequest::TrimOrder trimOrder)
{
  ?setTrimOrder@bdUpdateUsersInUserListRequest@@QEAAXW4TrimOrder@1@@Z(this, trimOrder);
}

/*
==============
bdUpdateUsersInUserListRequest::setTrimLength
==============
*/

void __fastcall bdUpdateUsersInUserListRequest::setTrimLength(bdUpdateUsersInUserListRequest *this, const unsigned int trimLength)
{
  ?setTrimLength@bdUpdateUsersInUserListRequest@@QEAAXI@Z(this, trimLength);
}

/*
==============
bdUpdateUsersInUserListRequest::setUsers
==============
*/

void __fastcall bdUpdateUsersInUserListRequest::setUsers(bdUpdateUsersInUserListRequest *this, const unsigned int numUsers, const bdUserListEntity *users)
{
  ?setUsers@bdUpdateUsersInUserListRequest@@QEAAXIPEBVbdUserListEntity@@@Z(this, numUsers, users);
}

/*
==============
bdUpdateUsersInUserListRequest::bdUpdateUsersInUserListRequest
==============
*/
void bdUpdateUsersInUserListRequest::bdUpdateUsersInUserListRequest(bdUpdateUsersInUserListRequest *this, const char *context, const char *listName, const unsigned int numUsers, const bdUserListEntity *users)
{
  bdUserDetails *p_m_userDetails; 
  __int64 v9; 
  __int64 m_size; 
  bdUserListEntity *v11; 

  this->__vftable = (bdUpdateUsersInUserListRequest_vtbl *)&bdUpdateUsersInUserListRequest::`vftable';
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  bdStructFixedSizeString<100>::copy(&this->m_listName, listName);
  *(_QWORD *)&this->m_trimLength = 0i64;
  `eh vector constructor iterator'(&this->m_users, 0xF8ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserListEntity::bdUserListEntity, (void (__fastcall *)(void *))bdUserListEntity::~bdUserListEntity);
  this->m_users.m_size = 0;
  bdHandleAssert(numUsers <= 0xC8, "numUsers <= BD_USERLISTS_MAX_USERS_IN_TASK", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformuserlists\\userlists\\bdupdateusersinuserlistrequest.cpp", "bdUpdateUsersInUserListRequest::bdUpdateUsersInUserListRequest", 0x1Fu, "Number of users in the request exceeded the max limit.", -2i64, &this->m_users);
  if ( numUsers )
  {
    p_m_userDetails = &users->m_userDetails;
    v9 = numUsers;
    do
    {
      bdHandleAssert(this->m_users.m_size < 0xC8, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserListEntity,200>::pushBack", 0x40u, "No more capacity for pushBack");
      m_size = this->m_users.m_size;
      if ( (unsigned int)m_size < 0xC8 )
      {
        v11 = &this->m_users.m_elements[m_size];
        this->m_users.m_size = m_size + 1;
        v11->m_score = *(_QWORD *)&p_m_userDetails[-1].m_username[62];
        bdCrossPlatformUserMetadata::operator=(&v11->m_userData, (const bdCrossPlatformUserMetadata *)&p_m_userDetails[-1].m_hasUsername);
        bdUserDetails::operator=(&v11->m_userDetails, p_m_userDetails);
        bdUserPresenceInfo::operator=(&v11->m_presence, (const bdUserPresenceInfo *)&p_m_userDetails[1]);
      }
      p_m_userDetails = (bdUserDetails *)((char *)p_m_userDetails + 248);
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
bdUpdateUsersInUserListRequest::bdUpdateUsersInUserListRequest
==============
*/
void bdUpdateUsersInUserListRequest::bdUpdateUsersInUserListRequest(bdUpdateUsersInUserListRequest *this, const char *context, const char *listName, const unsigned int trimLength, const bdUpdateUsersInUserListRequest::TrimOrder trimOrder, const unsigned int numUsers, const bdUserListEntity *users)
{
  bdUserDetails *p_m_userDetails; 
  __int64 v11; 
  __int64 m_size; 
  bdUserListEntity *v13; 

  this->__vftable = (bdUpdateUsersInUserListRequest_vtbl *)&bdUpdateUsersInUserListRequest::`vftable';
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  bdStructFixedSizeString<100>::copy(&this->m_listName, listName);
  this->m_trimLength = trimLength;
  this->m_trimOrder = trimOrder;
  `eh vector constructor iterator'(&this->m_users, 0xF8ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserListEntity::bdUserListEntity, (void (__fastcall *)(void *))bdUserListEntity::~bdUserListEntity);
  this->m_users.m_size = 0;
  bdHandleAssert(numUsers <= 0xC8, "numUsers <= BD_USERLISTS_MAX_USERS_IN_TASK", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformuserlists\\userlists\\bdupdateusersinuserlistrequest.cpp", "bdUpdateUsersInUserListRequest::bdUpdateUsersInUserListRequest", 0x32u, "Number of users in the request exceeded the max limit.", -2i64, &this->m_users);
  if ( numUsers )
  {
    p_m_userDetails = &users->m_userDetails;
    v11 = numUsers;
    do
    {
      bdHandleAssert(this->m_users.m_size < 0xC8, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserListEntity,200>::pushBack", 0x40u, "No more capacity for pushBack");
      m_size = this->m_users.m_size;
      if ( (unsigned int)m_size < 0xC8 )
      {
        v13 = &this->m_users.m_elements[m_size];
        this->m_users.m_size = m_size + 1;
        v13->m_score = *(_QWORD *)&p_m_userDetails[-1].m_username[62];
        bdCrossPlatformUserMetadata::operator=(&v13->m_userData, (const bdCrossPlatformUserMetadata *)&p_m_userDetails[-1].m_hasUsername);
        bdUserDetails::operator=(&v13->m_userDetails, p_m_userDetails);
        bdUserPresenceInfo::operator=(&v13->m_presence, (const bdUserPresenceInfo *)&p_m_userDetails[1]);
      }
      p_m_userDetails = (bdUserDetails *)((char *)p_m_userDetails + 248);
      --v11;
    }
    while ( v11 );
  }
}

/*
==============
bdUpdateUsersInUserListRequest::bdUpdateUsersInUserListRequest
==============
*/
void bdUpdateUsersInUserListRequest::bdUpdateUsersInUserListRequest(bdUpdateUsersInUserListRequest *this)
{
  bdStructFixedSizeString<16> *p_m_context; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  size_t v5; 
  size_t v6; 

  this->__vftable = (bdUpdateUsersInUserListRequest_vtbl *)&bdUpdateUsersInUserListRequest::`vftable';
  p_m_context = &this->m_context;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
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
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdUpdateUsersInUserListRequest *)-25i64 )
  {
    v6 = 100i64;
    if ( v3 < 0x64 )
      v6 = v3;
    memcpy_0(&this->m_listName, (char *)&queryFormat.fmt + 3, v6);
    this->m_listName.m_buffer[v6] = 0;
  }
  *(_QWORD *)&this->m_trimLength = 0i64;
  `eh vector constructor iterator'(&this->m_users, 0xF8ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserListEntity::bdUserListEntity, (void (__fastcall *)(void *))bdUserListEntity::~bdUserListEntity);
  this->m_users.m_size = 0;
}

/*
==============
bdUpdateUsersInUserListRequest::restSerializeRequest
==============
*/
bool bdUpdateUsersInUserListRequest::restSerializeRequest(bdUpdateUsersInUserListRequest *this, bdRESTRequestBuilder *builder)
{
  int v4; 
  bdRESTHeaders *v5; 
  bdRESTHeaders *v6; 
  bool v7; 
  bdLobbyService *v8; 
  bdAuthInfo *AuthInfo; 
  bdRESTURI *v10; 
  bdRESTURI *v11; 
  bdRESTURI *v12; 
  bdRESTURI *v13; 
  bdUpdateUsersInUserListRequest::TrimOrder m_trimOrder; 
  const char *v15; 
  bdRESTURI *v16; 
  bdRESTURI *v17; 
  bool v18; 
  unsigned int i; 
  bdUserListEntity *v20; 
  unsigned __int64 Score; 
  bool v22; 
  bdUserListEntity *v23; 
  bdUserListEntityData *UserData; 
  bool v25; 
  int v27; 
  char *in; 
  bdRESTURI::bdDummyArg v29; 
  bdRESTURI::bdDummyArg v30; 
  int v31; 
  __int64 v32; 
  bdUserListEntityData v33; 
  bdUserAccountID result; 

  v32 = -2i64;
  v4 = 0;
  v31 = 0;
  v7 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "userlists") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)5264724) && bdRESTRequestBuilder::setResourceName(builder, "UserLists", "add_or_update_users_in_user_list") )
  {
    v5 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldContentType(v5, BD_MIME_JSON) )
    {
      v6 = bdRESTRequestBuilder::headers(builder);
      if ( bdRESTHeaders::setFieldAccept(v6, BD_MIME_JSON) )
        v7 = 1;
    }
  }
  v8 = bdRESTRequestBuilder::lobbyService(builder);
  AuthInfo = bdLobbyService::getAuthInfo(v8);
  if ( !v7 )
    return 0;
  v10 = bdRESTRequestBuilder::uri(builder);
  in = "/v3/user/{account_type}-{user_id}/list/{list_name}/add/";
  v10->m_path[0] = 0;
  v10->m_pathLength = 0;
  bdRESTURI::appendNextBlock(v10, (const char **)&in);
  bdRESTURI::operator<<(v10, AuthInfo->m_accountType);
  bdRESTURI::appendNextBlock(v10, (const char **)&in);
  bdRESTURI::operator<<(v10, AuthInfo->m_userID);
  bdRESTURI::appendNextBlock(v10, (const char **)&in);
  bdRESTURI::operator<<(v10, this->m_listName.m_buffer);
  bdRESTURI::appendNextBlock(v10, (const char **)&in);
  bdRESTURI::operator<<(v10, &v29);
  bdRESTURI::appendNextBlock(v10, (const char **)&in);
  bdRESTURI::operator<<(v10, &v30);
  bdRESTURI::appendNextBlock(v10, (const char **)&in);
  if ( !bdRESTURI::isOK(v10) )
  {
    v27 = 1024;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.inl", "bdRESTURI::formatPath", 0x38u, "Formatted URI would have been too long. Max is %d", v27);
    v10->m_path[0] = 0;
    v10->m_pathLength = 0;
  }
  if ( !bdRESTURI::isOK(v10) )
    return 0;
  v11 = bdRESTRequestBuilder::uri(builder);
  if ( !bdRESTURI::addQueryParam(v11, "context", this->m_context.m_buffer) )
    return 0;
  v12 = bdRESTRequestBuilder::uri(builder);
  if ( !bdRESTURI::addQueryParam(v12, "trimLength", this->m_trimLength) )
    return 0;
  v13 = bdRESTRequestBuilder::uri(builder);
  m_trimOrder = this->m_trimOrder;
  if ( m_trimOrder == ASCENDING || (v15 = "DESCENDING", m_trimOrder != DESCENDING) )
    v15 = "ASCENDING";
  if ( !bdRESTURI::addQueryParam(v13, "trimOrder", v15) )
    return 0;
  v16 = bdRESTRequestBuilder::uri(builder);
  if ( !bdRESTURI::addQueryParam(v16, "client", AuthInfo->m_clientID) )
    return 0;
  v17 = bdRESTRequestBuilder::uri(builder);
  if ( !bdRESTURI::addQueryParam(v17, "titleID", AuthInfo->m_titleID) )
    return 0;
  in = NULL;
  v18 = bdRESTRequestBuilder::getBodyJSONSerializer(builder, (bdJSONSerializer **)&in) && bdJSONSerializer::writeBeginObject((bdJSONSerializer *)in) && bdJSONSerializer::writeBeginArray((bdJSONSerializer *)in, "userList");
  for ( i = 0; i < this->m_users.m_size; ++i )
  {
    if ( i >= 0xC8 )
      break;
    if ( !v18 )
      return 0;
    bdHandleAssert(i < this->m_users.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserListEntity,200>::operator []", 0x54u, "i is out of range");
    bdUserListEntity::getUser(&this->m_users.m_elements[i], &result);
    v22 = 0;
    if ( bdJSONSerializer::writeBeginObject((bdJSONSerializer *)in) && bdJSONSerializer::writeUInt64((bdJSONSerializer *)in, "userID", result.m_userID, 0) && bdJSONSerializer::writeString((bdJSONSerializer *)in, "accountType", result._bytes_20) )
    {
      v20 = (bdUserListEntity *)bdStructFixedSizeArray<bdUserListEntity,200>::operator[](&this->m_users, i);
      Score = bdUserListEntity::getScore(v20);
      if ( bdJSONSerializer::writeUInt64((bdJSONSerializer *)in, "score", Score, 0) )
        v22 = 1;
    }
    v25 = 0;
    if ( v22 )
    {
      v23 = (bdUserListEntity *)bdStructFixedSizeArray<bdUserListEntity,200>::operator[](&this->m_users, i);
      UserData = bdUserListEntity::getUserData(v23, &v33);
      v4 |= 1u;
      v31 = v4;
      if ( UserData->serialize(UserData, "metadata", (bdJSONSerializer *)in) )
        v25 = 1;
    }
    if ( (v4 & 1) != 0 )
    {
      v4 &= ~1u;
      bdUserListEntityData::~bdUserListEntityData(&v33);
    }
    v18 = v25 && bdJSONSerializer::writeEndObject((bdJSONSerializer *)in);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
  }
  return v18 && bdJSONSerializer::writeEndArray((bdJSONSerializer *)in) && bdJSONSerializer::writeEndObject((bdJSONSerializer *)in);
}

/*
==============
bdUpdateUsersInUserListRequest::setContext
==============
*/
void bdUpdateUsersInUserListRequest::setContext(bdUpdateUsersInUserListRequest *this, const char *context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
}

/*
==============
bdUpdateUsersInUserListRequest::setListName
==============
*/
void bdUpdateUsersInUserListRequest::setListName(bdUpdateUsersInUserListRequest *this, const char *listName)
{
  bdStructFixedSizeString<100>::copy(&this->m_listName, listName);
}

/*
==============
bdUpdateUsersInUserListRequest::setTrimLength
==============
*/
void bdUpdateUsersInUserListRequest::setTrimLength(bdUpdateUsersInUserListRequest *this, const unsigned int trimLength)
{
  this->m_trimLength = trimLength;
}

/*
==============
bdUpdateUsersInUserListRequest::setTrimOrder
==============
*/
void bdUpdateUsersInUserListRequest::setTrimOrder(bdUpdateUsersInUserListRequest *this, const bdUpdateUsersInUserListRequest::TrimOrder trimOrder)
{
  this->m_trimOrder = trimOrder;
}

/*
==============
bdUpdateUsersInUserListRequest::setUsers
==============
*/
void bdUpdateUsersInUserListRequest::setUsers(bdUpdateUsersInUserListRequest *this, const unsigned int numUsers, const bdUserListEntity *users)
{
  bdStructFixedSizeArray<bdUserListEntity,200> *p_m_users; 
  bdUserDetails *p_m_userDetails; 
  __int64 v8; 
  __int64 m_size; 
  bdUserListEntity *v10; 

  bdHandleAssert(numUsers <= 0xC8, "numUsers <= BD_USERLISTS_MAX_USERS_IN_TASK", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformuserlists\\userlists\\bdupdateusersinuserlistrequest.cpp", "bdUpdateUsersInUserListRequest::setUsers", 0x4Fu, "Number of users in the request exceeded the max limit.");
  this->m_users.m_size = 0;
  if ( numUsers )
  {
    p_m_users = &this->m_users;
    p_m_userDetails = &users->m_userDetails;
    v8 = numUsers;
    do
    {
      bdHandleAssert(p_m_users->m_size < 0xC8, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserListEntity,200>::pushBack", 0x40u, "No more capacity for pushBack");
      m_size = p_m_users->m_size;
      if ( (unsigned int)m_size < 0xC8 )
      {
        p_m_users->m_size = m_size + 1;
        v10 = &p_m_users->m_elements[m_size];
        v10->m_score = *(_QWORD *)&p_m_userDetails[-1].m_username[62];
        bdCrossPlatformUserMetadata::operator=(&v10->m_userData, (const bdCrossPlatformUserMetadata *)&p_m_userDetails[-1].m_hasUsername);
        bdUserDetails::operator=(&v10->m_userDetails, p_m_userDetails);
        bdUserPresenceInfo::operator=(&v10->m_presence, (const bdUserPresenceInfo *)&p_m_userDetails[1]);
      }
      p_m_userDetails = (bdUserDetails *)((char *)p_m_userDetails + 248);
      --v8;
    }
    while ( v8 );
  }
}

/*
==============
bdUpdateUsersInUserListRequest::trimOrderToString
==============
*/
const char *bdUpdateUsersInUserListRequest::trimOrderToString(bdUpdateUsersInUserListRequest *this, const bdUpdateUsersInUserListRequest::TrimOrder *trimOrder)
{
  const char *result; 

  if ( *trimOrder == ASCENDING )
    return "ASCENDING";
  result = "DESCENDING";
  if ( *trimOrder != DESCENDING )
    return "ASCENDING";
  return result;
}

