/*
==============
bdSubscribeToUsersPresenceRequestV3::bdSubscribeToUsersPresenceRequestV3
==============
*/

void __fastcall bdSubscribeToUsersPresenceRequestV3::bdSubscribeToUsersPresenceRequestV3(bdSubscribeToUsersPresenceRequestV3 *this)
{
  ??0bdSubscribeToUsersPresenceRequestV3@@QEAA@XZ(this);
}

/*
==============
bdSubscribeToUsersPresenceRequestV3::setUsers
==============
*/

void __fastcall bdSubscribeToUsersPresenceRequestV3::setUsers(bdSubscribeToUsersPresenceRequestV3 *this, const unsigned int numUsers, const bdUserAccountID *users)
{
  ?setUsers@bdSubscribeToUsersPresenceRequestV3@@QEAAXIPEBVbdUserAccountID@@@Z(this, numUsers, users);
}

/*
==============
bdSubscribeToUsersPresenceRequestV3::bdSubscribeToUsersPresenceRequestV3
==============
*/

void __fastcall bdSubscribeToUsersPresenceRequestV3::bdSubscribeToUsersPresenceRequestV3(bdSubscribeToUsersPresenceRequestV3 *this, const char *const context, const unsigned int numUsers, const bdUserAccountID *users)
{
  ??0bdSubscribeToUsersPresenceRequestV3@@QEAA@QEBDIPEBVbdUserAccountID@@@Z(this, context, numUsers, users);
}

/*
==============
bdSubscribeToUsersPresenceRequestV3::restSerializeRequest
==============
*/

bool __fastcall bdSubscribeToUsersPresenceRequestV3::restSerializeRequest(bdSubscribeToUsersPresenceRequestV3 *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdSubscribeToUsersPresenceRequestV3@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdSubscribeToUsersPresenceRequestV3::setContext
==============
*/

void __fastcall bdSubscribeToUsersPresenceRequestV3::setContext(bdSubscribeToUsersPresenceRequestV3 *this, const char *const context)
{
  ?setContext@bdSubscribeToUsersPresenceRequestV3@@QEAAXQEBD@Z(this, context);
}

/*
==============
bdSubscribeToUsersPresenceRequestV3::bdSubscribeToUsersPresenceRequestV3
==============
*/
void bdSubscribeToUsersPresenceRequestV3::bdSubscribeToUsersPresenceRequestV3(bdSubscribeToUsersPresenceRequestV3 *this, const char *const context, const unsigned int numUsers, const bdUserAccountID *users)
{
  __int64 v7; 
  __int64 m_size; 

  this->__vftable = (bdSubscribeToUsersPresenceRequestV3_vtbl *)&bdSubscribeToUsersPresenceRequestV3::`vftable';
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  `eh vector vbase constructor iterator'(&this->m_users, 0x48ui64, 0x19ui64, (void (__fastcall *)(void *))bdUserAccountID::bdUserAccountID, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  v7 = 0i64;
  this->m_users.m_size = 0;
  bdHandleAssert(numUsers <= 0x64, "numUsers <= BD_CROSS_PLATFORM_PRESENCE_MAX_NUM_USERS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdsubscribetouserspresencerequestv3.cpp", "bdSubscribeToUsersPresenceRequestV3::setUsers", 0x22u, "Number of users in the request exceeded the max limit.", -2i64, &this->m_users);
  this->m_users.m_size = 0;
  if ( numUsers )
  {
    do
    {
      bdHandleAssert(this->m_users.m_size < 0x19, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserAccountID,25>::pushBack", 0x40u, "No more capacity for pushBack");
      m_size = this->m_users.m_size;
      if ( (unsigned int)m_size < 0x19 )
      {
        this->m_users.m_size = m_size + 1;
        bdUserAccountID::operator=(&this->m_users.m_elements[m_size], &users[v7]);
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < numUsers );
  }
}

/*
==============
bdSubscribeToUsersPresenceRequestV3::bdSubscribeToUsersPresenceRequestV3
==============
*/
void bdSubscribeToUsersPresenceRequestV3::bdSubscribeToUsersPresenceRequestV3(bdSubscribeToUsersPresenceRequestV3 *this)
{
  bdStructFixedSizeString<16> *p_m_context; 
  unsigned __int64 v3; 
  size_t v4; 

  this->__vftable = (bdSubscribeToUsersPresenceRequestV3_vtbl *)&bdSubscribeToUsersPresenceRequestV3::`vftable';
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
  `eh vector vbase constructor iterator'(&this->m_users, 0x48ui64, 0x19ui64, (void (__fastcall *)(void *))bdUserAccountID::bdUserAccountID, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  this->m_users.m_size = 0;
}

/*
==============
bdSubscribeToUsersPresenceRequestV3::restSerializeRequest
==============
*/
char bdSubscribeToUsersPresenceRequestV3::restSerializeRequest(bdSubscribeToUsersPresenceRequestV3 *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bool v5; 
  bdLobbyService *v6; 
  bdAuthInfo *AuthInfo; 
  bdRESTURI *v8; 
  unsigned int v9; 
  bdRESTURI *v10; 
  bdRESTURI *v11; 
  bdRESTURI *v12; 
  bool v13; 
  int v15; 
  bdRESTURI::bdDummyArg v16; 
  char *in[4]; 
  bdJSONSerializer *serializer; 
  bdRESTURI::bdDummyArg v19; 

  v5 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "presence") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)1347375956) && bdRESTRequestBuilder::setResourceName(builder, "UsersPresence", "subscribe_to_users_v3") )
  {
    v4 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldAccept(v4, BD_MIME_JSON) )
      v5 = 1;
  }
  v6 = bdRESTRequestBuilder::lobbyService(builder);
  AuthInfo = bdLobbyService::getAuthInfo(v6);
  if ( v5 )
  {
    v8 = bdRESTRequestBuilder::uri(builder);
    v9 = 0;
    in[0] = "/v3/users/{account_type}-{user_id}/subscriptions/presence/";
    v8->m_path[0] = 0;
    v8->m_pathLength = 0;
    bdRESTURI::appendNextBlock(v8, (const char **)in);
    bdRESTURI::operator<<(v8, AuthInfo->m_accountType);
    bdRESTURI::appendNextBlock(v8, (const char **)in);
    bdRESTURI::operator<<(v8, AuthInfo->m_userID);
    bdRESTURI::appendNextBlock(v8, (const char **)in);
    bdRESTURI::operator<<(v8, (const bdRESTURI::bdDummyArg *)&serializer);
    bdRESTURI::appendNextBlock(v8, (const char **)in);
    bdRESTURI::operator<<(v8, &v19);
    bdRESTURI::appendNextBlock(v8, (const char **)in);
    bdRESTURI::operator<<(v8, &v16);
    bdRESTURI::appendNextBlock(v8, (const char **)in);
    if ( !bdRESTURI::isOK(v8) )
    {
      v15 = 1024;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.inl", "bdRESTURI::formatPath", 0x38u, "Formatted URI would have been too long. Max is %d", v15);
      v8->m_path[0] = 0;
      v8->m_pathLength = 0;
    }
    if ( bdRESTURI::isOK(v8) )
    {
      v10 = bdRESTRequestBuilder::uri(builder);
      if ( bdRESTURI::addQueryParam(v10, "client", AuthInfo->m_clientID) )
      {
        v11 = bdRESTRequestBuilder::uri(builder);
        if ( bdRESTURI::addQueryParam(v11, "titleID", AuthInfo->m_titleID) )
        {
          v12 = bdRESTRequestBuilder::uri(builder);
          if ( bdRESTURI::addQueryParam(v12, "context", this->m_context.m_buffer) )
          {
            serializer = NULL;
            v13 = bdRESTRequestBuilder::getBodyJSONSerializer(builder, &serializer) && bdJSONSerializer::writeBeginObject(serializer) && bdJSONSerializer::writeBeginArray(serializer, "users");
            if ( this->m_users.m_size )
            {
              while ( v13 )
              {
                v13 = 0;
                if ( bdJSONSerializer::writeBeginObject(serializer) )
                {
                  bdHandleAssert(v9 < this->m_users.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserAccountID,25>::operator []", 0x54u, "i is out of range");
                  if ( bdJSONSerializer::writeString(serializer, "accountType", this->m_users.m_elements[v9]._bytes_20) )
                  {
                    bdHandleAssert(v9 < this->m_users.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserAccountID,25>::operator []", 0x54u, "i is out of range");
                    if ( bdJSONSerializer::writeUInt64(serializer, "userID", this->m_users.m_elements[v9].m_userID, 0) && bdJSONSerializer::writeEndObject(serializer) )
                      v13 = 1;
                  }
                }
                if ( ++v9 >= this->m_users.m_size )
                  goto LABEL_28;
              }
            }
            else
            {
LABEL_28:
              if ( v13 && bdJSONSerializer::writeEndArray(serializer) && bdJSONSerializer::writeEndObject(serializer) )
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
bdSubscribeToUsersPresenceRequestV3::setContext
==============
*/
void bdSubscribeToUsersPresenceRequestV3::setContext(bdSubscribeToUsersPresenceRequestV3 *this, const char *const context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
}

/*
==============
bdSubscribeToUsersPresenceRequestV3::setUsers
==============
*/
void bdSubscribeToUsersPresenceRequestV3::setUsers(bdSubscribeToUsersPresenceRequestV3 *this, const unsigned int numUsers, const bdUserAccountID *users)
{
  __int64 v6; 
  __int64 m_size; 

  bdHandleAssert(numUsers <= 0x64, "numUsers <= BD_CROSS_PLATFORM_PRESENCE_MAX_NUM_USERS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdsubscribetouserspresencerequestv3.cpp", "bdSubscribeToUsersPresenceRequestV3::setUsers", 0x22u, "Number of users in the request exceeded the max limit.");
  v6 = 0i64;
  for ( this->m_users.m_size = 0; (unsigned int)v6 < numUsers; v6 = (unsigned int)(v6 + 1) )
  {
    bdHandleAssert(this->m_users.m_size < 0x19, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserAccountID,25>::pushBack", 0x40u, "No more capacity for pushBack");
    m_size = this->m_users.m_size;
    if ( (unsigned int)m_size < 0x19 )
    {
      this->m_users.m_size = m_size + 1;
      bdUserAccountID::operator=(&this->m_users.m_elements[m_size], &users[v6]);
    }
  }
}

