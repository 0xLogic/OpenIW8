/*
==============
bdUnsubscribeFromUsersPresenceRequest::bdUnsubscribeFromUsersPresenceRequest
==============
*/

void __fastcall bdUnsubscribeFromUsersPresenceRequest::bdUnsubscribeFromUsersPresenceRequest(bdUnsubscribeFromUsersPresenceRequest *this)
{
  ??0bdUnsubscribeFromUsersPresenceRequest@@QEAA@XZ(this);
}

/*
==============
bdUnsubscribeFromUsersPresenceRequest::setUsers
==============
*/

void __fastcall bdUnsubscribeFromUsersPresenceRequest::setUsers(bdUnsubscribeFromUsersPresenceRequest *this, const unsigned int numUsers, const bdUserAccountID *users)
{
  ?setUsers@bdUnsubscribeFromUsersPresenceRequest@@QEAAXIPEBVbdUserAccountID@@@Z(this, numUsers, users);
}

/*
==============
bdUnsubscribeFromUsersPresenceRequest::bdUnsubscribeFromUsersPresenceRequest
==============
*/

void __fastcall bdUnsubscribeFromUsersPresenceRequest::bdUnsubscribeFromUsersPresenceRequest(bdUnsubscribeFromUsersPresenceRequest *this, const char *const context, const unsigned int numUsers, const bdUserAccountID *users)
{
  ??0bdUnsubscribeFromUsersPresenceRequest@@QEAA@QEBDIPEBVbdUserAccountID@@@Z(this, context, numUsers, users);
}

/*
==============
bdUnsubscribeFromUsersPresenceRequest::~bdUnsubscribeFromUsersPresenceRequest
==============
*/

void __fastcall bdUnsubscribeFromUsersPresenceRequest::~bdUnsubscribeFromUsersPresenceRequest(bdUnsubscribeFromUsersPresenceRequest *this)
{
  ??1bdUnsubscribeFromUsersPresenceRequest@@UEAA@XZ(this);
}

/*
==============
bdUnsubscribeFromUsersPresenceRequest::setContext
==============
*/

void __fastcall bdUnsubscribeFromUsersPresenceRequest::setContext(bdUnsubscribeFromUsersPresenceRequest *this, const char *const context)
{
  ?setContext@bdUnsubscribeFromUsersPresenceRequest@@QEAAXQEBD@Z(this, context);
}

/*
==============
bdUnsubscribeFromUsersPresenceRequest::restSerializeRequest
==============
*/

bool __fastcall bdUnsubscribeFromUsersPresenceRequest::restSerializeRequest(bdUnsubscribeFromUsersPresenceRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdUnsubscribeFromUsersPresenceRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdUnsubscribeFromUsersPresenceRequest::bdUnsubscribeFromUsersPresenceRequest
==============
*/
void bdUnsubscribeFromUsersPresenceRequest::bdUnsubscribeFromUsersPresenceRequest(bdUnsubscribeFromUsersPresenceRequest *this, const char *const context, const unsigned int numUsers, const bdUserAccountID *users)
{
  __int64 v5; 
  bdUserAccountID *m_users; 
  char *v8; 

  v5 = numUsers;
  this->__vftable = (bdUnsubscribeFromUsersPresenceRequest_vtbl *)&bdUnsubscribeFromUsersPresenceRequest::`vftable';
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  m_users = this->m_users;
  `eh vector vbase constructor iterator'(this->m_users, 0x48ui64, 0x64ui64, (void (__fastcall *)(void *))bdUserAccountID::bdUserAccountID, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  this->m_numUsers = v5;
  bdHandleAssert((unsigned int)v5 <= 0x64, "numUsers <= BD_CROSS_PLATFORM_PRESENCE_MAX_NUM_USERS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdunsubscribefromuserspresencerequest.cpp", "bdUnsubscribeFromUsersPresenceRequest::setUsers", 0x28u, "Number of users in the request exceeded the max limit.", -2i64);
  this->m_numUsers = v5;
  if ( (_DWORD)v5 )
  {
    v8 = (char *)((char *)users - (char *)m_users);
    do
    {
      bdUserAccountID::operator=(m_users, (const bdUserAccountID *)((char *)m_users + (_QWORD)v8));
      ++m_users;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
bdUnsubscribeFromUsersPresenceRequest::bdUnsubscribeFromUsersPresenceRequest
==============
*/
void bdUnsubscribeFromUsersPresenceRequest::bdUnsubscribeFromUsersPresenceRequest(bdUnsubscribeFromUsersPresenceRequest *this)
{
  bdStructFixedSizeString<16> *p_m_context; 
  unsigned __int64 v3; 
  size_t v4; 

  this->__vftable = (bdUnsubscribeFromUsersPresenceRequest_vtbl *)&bdUnsubscribeFromUsersPresenceRequest::`vftable';
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
  `eh vector vbase constructor iterator'(this->m_users, 0x48ui64, 0x64ui64, (void (__fastcall *)(void *))bdUserAccountID::bdUserAccountID, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  this->m_numUsers = 0;
}

/*
==============
bdUnsubscribeFromUsersPresenceRequest::~bdUnsubscribeFromUsersPresenceRequest
==============
*/
void bdUnsubscribeFromUsersPresenceRequest::~bdUnsubscribeFromUsersPresenceRequest(bdUnsubscribeFromUsersPresenceRequest *this)
{
  this->__vftable = (bdUnsubscribeFromUsersPresenceRequest_vtbl *)&bdUnsubscribeFromUsersPresenceRequest::`vftable';
  `eh vector destructor iterator'(this->m_users, 0x48ui64, 0x64ui64, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&this->m_context);
  bdRESTRequest::~bdRESTRequest(this);
}

/*
==============
bdUnsubscribeFromUsersPresenceRequest::restSerializeRequest
==============
*/
char bdUnsubscribeFromUsersPresenceRequest::restSerializeRequest(bdUnsubscribeFromUsersPresenceRequest *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bool v5; 
  bdLobbyService *v6; 
  bdAuthInfo *AuthInfo; 
  bdRESTURI *v8; 
  __int64 v9; 
  bdRESTURI *v10; 
  bdRESTURI *v11; 
  bdRESTURI *v12; 
  bdRESTURI *v13; 
  unsigned int m_numUsers; 
  bdRESTURI *v15; 
  char v16; 
  int v17; 
  int v19; 
  char *in; 
  bdRESTURI::bdDummyArg v21; 
  bdRESTURI::bdDummyArg v22; 
  char dst[4096]; 

  v5 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "presence") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)1145392197) && bdRESTRequestBuilder::setResourceName(builder, "UsersPresence", "unsubscribe_from_users") )
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
    v9 = 0i64;
    in = "/{api_version}/users/{account_type}-{user_id}/subscriptions/presence/";
    v8->m_path[0] = 0;
    v8->m_pathLength = 0;
    bdRESTURI::appendNextBlock(v8, (const char **)&in);
    bdRESTURI::operator<<(v8, "v2");
    bdRESTURI::appendNextBlock(v8, (const char **)&in);
    bdRESTURI::operator<<(v8, AuthInfo->m_accountType);
    bdRESTURI::appendNextBlock(v8, (const char **)&in);
    bdRESTURI::operator<<(v8, AuthInfo->m_userID);
    bdRESTURI::appendNextBlock(v8, (const char **)&in);
    bdRESTURI::operator<<(v8, &v21);
    bdRESTURI::appendNextBlock(v8, (const char **)&in);
    bdRESTURI::operator<<(v8, &v22);
    bdRESTURI::appendNextBlock(v8, (const char **)&in);
    if ( !bdRESTURI::isOK(v8) )
    {
      v19 = 1024;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.inl", "bdRESTURI::formatPath", 0x38u, "Formatted URI would have been too long. Max is %d", v19);
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
            if ( this->m_numUsers )
            {
              v13 = bdRESTRequestBuilder::uri(builder);
              m_numUsers = this->m_numUsers;
              LODWORD(in) = 0;
              v15 = v13;
              v16 = 1;
              memset_0(dst, 0, sizeof(dst));
              if ( m_numUsers )
              {
                while ( v16 )
                {
                  if ( bdRESTURI::encodeArrayElement(v15, &this->m_users[v9], dst, (unsigned int *)&in, 0x1000u) && (v17 = (_DWORD)in + 1, (unsigned int)((_DWORD)in + 1) < 0x1000) )
                  {
                    v16 = 1;
                    if ( (int)v9 + 1 < m_numUsers )
                    {
                      dst[(unsigned int)in] = 44;
                      LODWORD(in) = v17;
                    }
                  }
                  else
                  {
                    v16 = 0;
                  }
                  v9 = (unsigned int)(v9 + 1);
                  if ( (unsigned int)v9 >= m_numUsers )
                  {
                    if ( !v16 )
                      return 0;
                    goto LABEL_24;
                  }
                }
              }
              else
              {
LABEL_24:
                if ( bdRESTURI::addQueryParam(v15, "users", dst, BD_DONT_ENCODE) )
                  return 1;
              }
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
bdUnsubscribeFromUsersPresenceRequest::setContext
==============
*/
void bdUnsubscribeFromUsersPresenceRequest::setContext(bdUnsubscribeFromUsersPresenceRequest *this, const char *const context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
}

/*
==============
bdUnsubscribeFromUsersPresenceRequest::setUsers
==============
*/
void bdUnsubscribeFromUsersPresenceRequest::setUsers(bdUnsubscribeFromUsersPresenceRequest *this, const unsigned int numUsers, const bdUserAccountID *users)
{
  __int64 v3; 
  bdUserAccountID *m_users; 
  char *v7; 

  v3 = numUsers;
  bdHandleAssert(numUsers <= 0x64, "numUsers <= BD_CROSS_PLATFORM_PRESENCE_MAX_NUM_USERS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdunsubscribefromuserspresencerequest.cpp", "bdUnsubscribeFromUsersPresenceRequest::setUsers", 0x28u, "Number of users in the request exceeded the max limit.");
  this->m_numUsers = v3;
  if ( (_DWORD)v3 )
  {
    m_users = this->m_users;
    v7 = (char *)((char *)users - (char *)m_users);
    do
    {
      bdUserAccountID::operator=(m_users, (const bdUserAccountID *)((char *)m_users + (_QWORD)v7));
      ++m_users;
      --v3;
    }
    while ( v3 );
  }
}

