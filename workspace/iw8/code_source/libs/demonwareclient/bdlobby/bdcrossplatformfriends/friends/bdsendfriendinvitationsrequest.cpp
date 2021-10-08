/*
==============
bdSendFriendInvitationsRequest::restSerializeRequest
==============
*/

bool __fastcall bdSendFriendInvitationsRequest::restSerializeRequest(bdSendFriendInvitationsRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdSendFriendInvitationsRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdSendFriendInvitationsRequest::setContext
==============
*/

void __fastcall bdSendFriendInvitationsRequest::setContext(bdSendFriendInvitationsRequest *this, const char *context)
{
  ?setContext@bdSendFriendInvitationsRequest@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdSendFriendInvitationsRequest::bdSendFriendInvitationsRequest
==============
*/

void __fastcall bdSendFriendInvitationsRequest::bdSendFriendInvitationsRequest(bdSendFriendInvitationsRequest *this)
{
  ??0bdSendFriendInvitationsRequest@@QEAA@XZ(this);
}

/*
==============
bdSendFriendInvitationsRequest::~bdSendFriendInvitationsRequest
==============
*/

void __fastcall bdSendFriendInvitationsRequest::~bdSendFriendInvitationsRequest(bdSendFriendInvitationsRequest *this)
{
  ??1bdSendFriendInvitationsRequest@@UEAA@XZ(this);
}

/*
==============
bdSendFriendInvitationsRequest::setUsers
==============
*/

void __fastcall bdSendFriendInvitationsRequest::setUsers(bdSendFriendInvitationsRequest *this, const unsigned int numUsers, const bdUserAccountID *users)
{
  ?setUsers@bdSendFriendInvitationsRequest@@QEAAXIPEBVbdUserAccountID@@@Z(this, numUsers, users);
}

/*
==============
bdSendFriendInvitationsRequest::bdSendFriendInvitationsRequest
==============
*/

void __fastcall bdSendFriendInvitationsRequest::bdSendFriendInvitationsRequest(bdSendFriendInvitationsRequest *this, const char *const context, const unsigned int numUsers, const bdUserAccountID *users)
{
  ??0bdSendFriendInvitationsRequest@@QEAA@QEBDIPEBVbdUserAccountID@@@Z(this, context, numUsers, users);
}

/*
==============
bdSendFriendInvitationsRequest::bdSendFriendInvitationsRequest
==============
*/
void bdSendFriendInvitationsRequest::bdSendFriendInvitationsRequest(bdSendFriendInvitationsRequest *this, const char *const context, const unsigned int numUsers, const bdUserAccountID *users)
{
  __int64 v7; 
  __int64 m_size; 
  bdStructUserAccountID *v9; 
  bdStructUserAccountID v11; 

  this->__vftable = (bdSendFriendInvitationsRequest_vtbl *)&bdSendFriendInvitationsRequest::`vftable';
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  `eh vector vbase constructor iterator'(&this->m_users, 0x58ui64, 0x64ui64, (void (__fastcall *)(void *))bdStructUserAccountID::bdStructUserAccountID, (void (__fastcall *)(void *))bdStructUserAccountID::`vbase destructor);
  this->m_users.m_size = 0;
  bdHandleAssert(numUsers <= 0x64, "numUsers <= BD_CROSS_PLATFORM_FRIENDS_MAX_FRIENDS_PAGE_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformfriends\\friends\\bdsendfriendinvitationsrequest.cpp", "bdSendFriendInvitationsRequest::bdSendFriendInvitationsRequest", 0x1Au, "Number of users in the request exceeded the max limit.", -2i64, this, &this->m_users);
  if ( numUsers )
  {
    v7 = numUsers;
    do
    {
      bdStructUserAccountID::bdStructUserAccountID(&v11, users);
      bdHandleAssert(this->m_users.m_size < 0x64, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructUserAccountID,100>::pushBack", 0x40u, "No more capacity for pushBack");
      m_size = this->m_users.m_size;
      if ( (unsigned int)m_size < 0x64 )
      {
        v9 = &this->m_users.m_elements[m_size];
        this->m_users.m_size = m_size + 1;
        bdUserAccountID::operator=(v9, &v11);
        bdReferencable::operator=((bdReferencable *)&v9->gap38[*(int *)(*(_QWORD *)&v9->gap38[8] + 4i64) + 8], (const bdReferencable *)&v11.gap38[*(int *)(*(_QWORD *)&v11.gap38[8] + 4i64) + 8]);
      }
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v11._bytes_48);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v11.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v11._bytes_48);
      ++users;
      --v7;
    }
    while ( v7 );
  }
}

/*
==============
bdSendFriendInvitationsRequest::bdSendFriendInvitationsRequest
==============
*/
void bdSendFriendInvitationsRequest::bdSendFriendInvitationsRequest(bdSendFriendInvitationsRequest *this)
{
  bdStructFixedSizeString<16> *p_m_context; 
  unsigned __int64 v3; 
  size_t v4; 

  this->__vftable = (bdSendFriendInvitationsRequest_vtbl *)&bdSendFriendInvitationsRequest::`vftable';
  p_m_context = &this->m_context;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
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
  `eh vector vbase constructor iterator'(&this->m_users, 0x58ui64, 0x64ui64, (void (__fastcall *)(void *))bdStructUserAccountID::bdStructUserAccountID, (void (__fastcall *)(void *))bdStructUserAccountID::`vbase destructor);
  this->m_users.m_size = 0;
}

/*
==============
bdSendFriendInvitationsRequest::~bdSendFriendInvitationsRequest
==============
*/
void bdSendFriendInvitationsRequest::~bdSendFriendInvitationsRequest(bdSendFriendInvitationsRequest *this)
{
  this->__vftable = (bdSendFriendInvitationsRequest_vtbl *)&bdSendFriendInvitationsRequest::`vftable';
  `eh vector destructor iterator'(&this->m_users, 0x58ui64, 0x64ui64, (void (__fastcall *)(void *))bdStructUserAccountID::`vbase destructor);
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&this->m_context);
  bdRESTRequest::~bdRESTRequest(this);
}

/*
==============
bdSendFriendInvitationsRequest::restSerializeRequest
==============
*/
char bdSendFriendInvitationsRequest::restSerializeRequest(bdSendFriendInvitationsRequest *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bdRESTHeaders *v5; 
  bool v6; 
  bdLobbyService *v7; 
  bdAuthInfo *AuthInfo; 
  bdRESTURI *v9; 
  unsigned int v10; 
  bdRESTURI *v11; 
  bdRESTURI *v12; 
  bdRESTURI *v13; 
  bool v14; 
  int v16; 
  bdRESTURI::bdDummyArg v17; 
  char *in[4]; 
  bdJSONSerializer *serializer; 
  bdRESTURI::bdDummyArg v20; 

  v6 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "friends") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)1347375956) && bdRESTRequestBuilder::setResourceName(builder, "Friends", "invite_friend") )
  {
    v4 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldContentType(v4, BD_MIME_JSON) )
    {
      v5 = bdRESTRequestBuilder::headers(builder);
      if ( bdRESTHeaders::setFieldAccept(v5, BD_MIME_JSON) )
        v6 = 1;
    }
  }
  v7 = bdRESTRequestBuilder::lobbyService(builder);
  AuthInfo = bdLobbyService::getAuthInfo(v7);
  if ( v6 )
  {
    v9 = bdRESTRequestBuilder::uri(builder);
    v10 = 0;
    in[0] = "/v1/friends/{account_type}-{user_id}/invitation/";
    v9->m_path[0] = 0;
    v9->m_pathLength = 0;
    bdRESTURI::appendNextBlock(v9, (const char **)in);
    bdRESTURI::operator<<(v9, AuthInfo->m_accountType);
    bdRESTURI::appendNextBlock(v9, (const char **)in);
    bdRESTURI::operator<<(v9, AuthInfo->m_userID);
    bdRESTURI::appendNextBlock(v9, (const char **)in);
    bdRESTURI::operator<<(v9, (const bdRESTURI::bdDummyArg *)&serializer);
    bdRESTURI::appendNextBlock(v9, (const char **)in);
    bdRESTURI::operator<<(v9, &v20);
    bdRESTURI::appendNextBlock(v9, (const char **)in);
    bdRESTURI::operator<<(v9, &v17);
    bdRESTURI::appendNextBlock(v9, (const char **)in);
    if ( !bdRESTURI::isOK(v9) )
    {
      v16 = 1024;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.inl", "bdRESTURI::formatPath", 0x38u, "Formatted URI would have been too long. Max is %d", v16);
      v9->m_path[0] = 0;
      v9->m_pathLength = 0;
    }
    if ( bdRESTURI::isOK(v9) )
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
            serializer = NULL;
            v14 = bdRESTRequestBuilder::getBodyJSONSerializer(builder, &serializer) && bdJSONSerializer::writeBeginObject(serializer) && bdJSONSerializer::writeBeginArray(serializer, "users");
            if ( this->m_users.m_size )
            {
              while ( v14 )
              {
                v14 = 0;
                if ( bdJSONSerializer::writeBeginObject(serializer) )
                {
                  bdHandleAssert(v10 < this->m_users.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructUserAccountID,100>::operator []", 0x54u, "i is out of range");
                  if ( bdJSONSerializer::writeString(serializer, "accountType", this->m_users.m_elements[v10]._bytes_20) )
                  {
                    bdHandleAssert(v10 < this->m_users.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructUserAccountID,100>::operator []", 0x54u, "i is out of range");
                    if ( bdJSONSerializer::writeUInt64(serializer, "userID", this->m_users.m_elements[v10].m_userID, 0) && bdJSONSerializer::writeEndObject(serializer) )
                      v14 = 1;
                  }
                }
                if ( ++v10 >= this->m_users.m_size )
                  goto LABEL_29;
              }
            }
            else
            {
LABEL_29:
              if ( v14 && bdJSONSerializer::writeEndArray(serializer) && bdJSONSerializer::writeEndObject(serializer) )
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
bdSendFriendInvitationsRequest::setContext
==============
*/
void bdSendFriendInvitationsRequest::setContext(bdSendFriendInvitationsRequest *this, const char *context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
}

/*
==============
bdSendFriendInvitationsRequest::setUsers
==============
*/
void bdSendFriendInvitationsRequest::setUsers(bdSendFriendInvitationsRequest *this, const unsigned int numUsers, const bdUserAccountID *users)
{
  bdStructFixedSizeArray<bdStructUserAccountID,100> *p_m_users; 
  __int64 v7; 
  __int64 m_size; 
  bdStructUserAccountID *v9; 
  bdStructUserAccountID v10; 

  bdHandleAssert(numUsers <= 0x64, "numUsers <= BD_CROSS_PLATFORM_FRIENDS_MAX_FRIENDS_PAGE_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformfriends\\friends\\bdsendfriendinvitationsrequest.cpp", "bdSendFriendInvitationsRequest::setUsers", 0x2Cu, "Number of users in the request exceeded the max limit.", -2i64);
  this->m_users.m_size = 0;
  if ( numUsers )
  {
    p_m_users = &this->m_users;
    v7 = numUsers;
    do
    {
      bdStructUserAccountID::bdStructUserAccountID(&v10, users);
      bdHandleAssert(p_m_users->m_size < 0x64, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructUserAccountID,100>::pushBack", 0x40u, "No more capacity for pushBack");
      m_size = p_m_users->m_size;
      if ( (unsigned int)m_size < 0x64 )
      {
        v9 = &p_m_users->m_elements[m_size];
        p_m_users->m_size = m_size + 1;
        bdUserAccountID::operator=(v9, &v10);
        bdReferencable::operator=((bdReferencable *)&v9->gap38[*(int *)(*(_QWORD *)&v9->gap38[8] + 4i64) + 8], (const bdReferencable *)&v10.gap38[*(int *)(*(_QWORD *)&v10.gap38[8] + 4i64) + 8]);
      }
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v10._bytes_48);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v10.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v10._bytes_48);
      ++users;
      --v7;
    }
    while ( v7 );
  }
}

