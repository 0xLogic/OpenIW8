/*
==============
bdRemoveUsersFromUserListRequest::setContext
==============
*/

void __fastcall bdRemoveUsersFromUserListRequest::setContext(bdRemoveUsersFromUserListRequest *this, const char *context)
{
  ?setContext@bdRemoveUsersFromUserListRequest@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdRemoveUsersFromUserListRequest::bdRemoveUsersFromUserListRequest
==============
*/

void __fastcall bdRemoveUsersFromUserListRequest::bdRemoveUsersFromUserListRequest(bdRemoveUsersFromUserListRequest *this)
{
  ??0bdRemoveUsersFromUserListRequest@@QEAA@XZ(this);
}

/*
==============
bdRemoveUsersFromUserListRequest::setUsers
==============
*/

void __fastcall bdRemoveUsersFromUserListRequest::setUsers(bdRemoveUsersFromUserListRequest *this, const unsigned int numUsers, const bdUserListEntity *users)
{
  ?setUsers@bdRemoveUsersFromUserListRequest@@QEAAXIPEBVbdUserListEntity@@@Z(this, numUsers, users);
}

/*
==============
bdRemoveUsersFromUserListRequest::restSerializeRequest
==============
*/

bool __fastcall bdRemoveUsersFromUserListRequest::restSerializeRequest(bdRemoveUsersFromUserListRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdRemoveUsersFromUserListRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdRemoveUsersFromUserListRequest::bdRemoveUsersFromUserListRequest
==============
*/

void __fastcall bdRemoveUsersFromUserListRequest::bdRemoveUsersFromUserListRequest(bdRemoveUsersFromUserListRequest *this, const char *context, const char *listName, const unsigned int numUsers, const bdUserListEntity *users)
{
  ??0bdRemoveUsersFromUserListRequest@@QEAA@PEBD0IPEBVbdUserListEntity@@@Z(this, context, listName, numUsers, users);
}

/*
==============
bdRemoveUsersFromUserListRequest::setListName
==============
*/

void __fastcall bdRemoveUsersFromUserListRequest::setListName(bdRemoveUsersFromUserListRequest *this, const char *listName)
{
  ?setListName@bdRemoveUsersFromUserListRequest@@QEAAXPEBD@Z(this, listName);
}

/*
==============
bdRemoveUsersFromUserListRequest::bdRemoveUsersFromUserListRequest
==============
*/
void bdRemoveUsersFromUserListRequest::bdRemoveUsersFromUserListRequest(bdRemoveUsersFromUserListRequest *this, const char *context, const char *listName, const unsigned int numUsers, const bdUserListEntity *users)
{
  bdUserDetails *p_m_userDetails; 
  __int64 v9; 
  __int64 m_size; 
  bdUserListEntity *v11; 

  this->__vftable = (bdRemoveUsersFromUserListRequest_vtbl *)&bdRemoveUsersFromUserListRequest::`vftable';
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  bdStructFixedSizeString<100>::copy(&this->m_listName, listName);
  `eh vector constructor iterator'(&this->m_users, 0xF8ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserListEntity::bdUserListEntity, (void (__fastcall *)(void *))bdUserListEntity::~bdUserListEntity);
  this->m_users.m_size = 0;
  bdHandleAssert(numUsers <= 0xC8, "numUsers <= BD_USERLISTS_MAX_USERS_IN_TASK", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformuserlists\\userlists\\bdremoveusersfromuserlistrequest.cpp", "bdRemoveUsersFromUserListRequest::bdRemoveUsersFromUserListRequest", 0x1Bu, "Number of users in the request exceeded the max limit.", -2i64, &this->m_users);
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
bdRemoveUsersFromUserListRequest::bdRemoveUsersFromUserListRequest
==============
*/
void bdRemoveUsersFromUserListRequest::bdRemoveUsersFromUserListRequest(bdRemoveUsersFromUserListRequest *this)
{
  bdStructFixedSizeString<16> *p_m_context; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  size_t v5; 
  size_t v6; 

  this->__vftable = (bdRemoveUsersFromUserListRequest_vtbl *)&bdRemoveUsersFromUserListRequest::`vftable';
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
  if ( this != (bdRemoveUsersFromUserListRequest *)-25i64 )
  {
    v6 = 100i64;
    if ( v3 < 0x64 )
      v6 = v3;
    memcpy_0(&this->m_listName, (char *)&queryFormat.fmt + 3, v6);
    this->m_listName.m_buffer[v6] = 0;
  }
  `eh vector constructor iterator'(&this->m_users, 0xF8ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserListEntity::bdUserListEntity, (void (__fastcall *)(void *))bdUserListEntity::~bdUserListEntity);
  this->m_users.m_size = 0;
}

/*
==============
bdRemoveUsersFromUserListRequest::restSerializeRequest
==============
*/
char bdRemoveUsersFromUserListRequest::restSerializeRequest(bdRemoveUsersFromUserListRequest *this, bdRESTRequestBuilder *builder)
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
  bool v14; 
  unsigned int v15; 
  unsigned __int64 Score; 
  bool v17; 
  bdUserListEntityData *UserData; 
  bool v19; 
  int v21; 
  char *in; 
  bdRESTURI::bdDummyArg v23; 
  bdRESTURI::bdDummyArg v24; 
  int v25; 
  __int64 v26; 
  bdUserListEntityData v27; 
  bdUserAccountID result; 

  v26 = -2i64;
  v4 = 0;
  v25 = 0;
  v7 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "userlists") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)1347375956) && bdRESTRequestBuilder::setResourceName(builder, "UserLists", "remove_users_from_user_list") )
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
  if ( v7 )
  {
    v10 = bdRESTRequestBuilder::uri(builder);
    in = "/v3/user/{account_type}-{user_id}/list/{list_name}/remove/";
    v10->m_path[0] = 0;
    v10->m_pathLength = 0;
    bdRESTURI::appendNextBlock(v10, (const char **)&in);
    bdRESTURI::operator<<(v10, AuthInfo->m_accountType);
    bdRESTURI::appendNextBlock(v10, (const char **)&in);
    bdRESTURI::operator<<(v10, AuthInfo->m_userID);
    bdRESTURI::appendNextBlock(v10, (const char **)&in);
    bdRESTURI::operator<<(v10, this->m_listName.m_buffer);
    bdRESTURI::appendNextBlock(v10, (const char **)&in);
    bdRESTURI::operator<<(v10, &v23);
    bdRESTURI::appendNextBlock(v10, (const char **)&in);
    bdRESTURI::operator<<(v10, &v24);
    bdRESTURI::appendNextBlock(v10, (const char **)&in);
    if ( !bdRESTURI::isOK(v10) )
    {
      v21 = 1024;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.inl", "bdRESTURI::formatPath", 0x38u, "Formatted URI would have been too long. Max is %d", v21);
      v10->m_path[0] = 0;
      v10->m_pathLength = 0;
    }
    if ( bdRESTURI::isOK(v10) )
    {
      v11 = bdRESTRequestBuilder::uri(builder);
      if ( bdRESTURI::addQueryParam(v11, "context", this->m_context.m_buffer) )
      {
        v12 = bdRESTRequestBuilder::uri(builder);
        if ( bdRESTURI::addQueryParam(v12, "client", AuthInfo->m_clientID) )
        {
          v13 = bdRESTRequestBuilder::uri(builder);
          if ( bdRESTURI::addQueryParam(v13, "titleID", AuthInfo->m_titleID) )
          {
            in = NULL;
            v14 = bdRESTRequestBuilder::getBodyJSONSerializer(builder, (bdJSONSerializer **)&in) && bdJSONSerializer::writeBeginObject((bdJSONSerializer *)in) && bdJSONSerializer::writeBeginArray((bdJSONSerializer *)in, "userList");
            v15 = 0;
            if ( this->m_users.m_size )
            {
              while ( v14 )
              {
                bdHandleAssert(v15 < this->m_users.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserListEntity,200>::operator []", 0x54u, "i is out of range");
                bdUserListEntity::getUser(&this->m_users.m_elements[v15], &result);
                v17 = 0;
                if ( bdJSONSerializer::writeBeginObject((bdJSONSerializer *)in) && bdJSONSerializer::writeUInt64((bdJSONSerializer *)in, "userID", result.m_userID, 0) && bdJSONSerializer::writeString((bdJSONSerializer *)in, "accountType", result._bytes_20) )
                {
                  bdHandleAssert(v15 < this->m_users.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserListEntity,200>::operator []", 0x54u, "i is out of range");
                  Score = bdUserListEntity::getScore(&this->m_users.m_elements[v15]);
                  if ( bdJSONSerializer::writeUInt64((bdJSONSerializer *)in, "score", Score, 0) )
                    v17 = 1;
                }
                v19 = 0;
                if ( v17 )
                {
                  bdHandleAssert(v15 < this->m_users.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserListEntity,200>::operator []", 0x54u, "i is out of range");
                  UserData = bdUserListEntity::getUserData(&this->m_users.m_elements[v15], &v27);
                  v4 |= 1u;
                  v25 = v4;
                  if ( UserData->serialize(UserData, "metadata", (bdJSONSerializer *)in) )
                    v19 = 1;
                }
                if ( (v4 & 1) != 0 )
                {
                  v4 &= ~1u;
                  bdUserListEntityData::~bdUserListEntityData(&v27);
                }
                v14 = v19 && bdJSONSerializer::writeEndObject((bdJSONSerializer *)in);
                bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
                bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
                if ( ++v15 >= this->m_users.m_size )
                  goto LABEL_39;
              }
            }
            else
            {
LABEL_39:
              if ( v14 && bdJSONSerializer::writeEndArray((bdJSONSerializer *)in) && bdJSONSerializer::writeEndObject((bdJSONSerializer *)in) )
                return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
bdRemoveUsersFromUserListRequest::setContext
==============
*/
void bdRemoveUsersFromUserListRequest::setContext(bdRemoveUsersFromUserListRequest *this, const char *context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
}

/*
==============
bdRemoveUsersFromUserListRequest::setListName
==============
*/
void bdRemoveUsersFromUserListRequest::setListName(bdRemoveUsersFromUserListRequest *this, const char *listName)
{
  bdStructFixedSizeString<100>::copy(&this->m_listName, listName);
}

/*
==============
bdRemoveUsersFromUserListRequest::setUsers
==============
*/
void bdRemoveUsersFromUserListRequest::setUsers(bdRemoveUsersFromUserListRequest *this, const unsigned int numUsers, const bdUserListEntity *users)
{
  bdStructFixedSizeArray<bdUserListEntity,200> *p_m_users; 
  bdUserDetails *p_m_userDetails; 
  __int64 v8; 
  __int64 m_size; 
  bdUserListEntity *v10; 

  bdHandleAssert(numUsers <= 0xC8, "numUsers <= BD_USERLISTS_MAX_USERS_IN_TASK", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformuserlists\\userlists\\bdremoveusersfromuserlistrequest.cpp", "bdRemoveUsersFromUserListRequest::setUsers", 0x2Eu, "Number of users in the request exceeded the max limit.");
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

