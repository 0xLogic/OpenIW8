/*
==============
bdGetCrossPlatformUsernamesRequest::restSerializeRequest
==============
*/

bool __fastcall bdGetCrossPlatformUsernamesRequest::restSerializeRequest(bdGetCrossPlatformUsernamesRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdGetCrossPlatformUsernamesRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdGetCrossPlatformUsernamesRequest::bdGetCrossPlatformUsernamesRequest
==============
*/

void __fastcall bdGetCrossPlatformUsernamesRequest::bdGetCrossPlatformUsernamesRequest(bdGetCrossPlatformUsernamesRequest *this, const unsigned int numUsers, const bdUserAccountID *users)
{
  ??0bdGetCrossPlatformUsernamesRequest@@QEAA@IPEBVbdUserAccountID@@@Z(this, numUsers, users);
}

/*
==============
bdGetCrossPlatformUsernamesRequest::setUsers
==============
*/

void __fastcall bdGetCrossPlatformUsernamesRequest::setUsers(bdGetCrossPlatformUsernamesRequest *this, const unsigned int numUsers, const bdUserAccountID *users)
{
  ?setUsers@bdGetCrossPlatformUsernamesRequest@@QEAAXIPEBVbdUserAccountID@@@Z(this, numUsers, users);
}

/*
==============
bdGetCrossPlatformUsernamesRequest::bdGetCrossPlatformUsernamesRequest
==============
*/
void bdGetCrossPlatformUsernamesRequest::bdGetCrossPlatformUsernamesRequest(bdGetCrossPlatformUsernamesRequest *this, const unsigned int numUsers, const bdUserAccountID *users)
{
  __int64 v4; 
  bdUserAccountID *m_users; 
  char *v7; 

  v4 = numUsers;
  this->__vftable = (bdGetCrossPlatformUsernamesRequest_vtbl *)&bdGetCrossPlatformUsernamesRequest::`vftable';
  m_users = this->m_users;
  `eh vector vbase constructor iterator'(this->m_users, 0x48ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserAccountID::bdUserAccountID, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  bdHandleAssert((unsigned int)v4 <= 0xC8, "numUsers <= BD_CROSS_PLATFORM_IDENTITY_MAX_NUM_USERS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdgetcrossplatformusernamesrequest.cpp", "bdGetCrossPlatformUsernamesRequest::setUsers", 0x12u, "Number of users in the request exceeded the max limit.", -2i64);
  this->m_numUsers = v4;
  if ( (_DWORD)v4 )
  {
    v7 = (char *)((char *)users - (char *)m_users);
    do
    {
      bdUserAccountID::operator=(m_users, (const bdUserAccountID *)((char *)m_users + (_QWORD)v7));
      ++m_users;
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
bdGetCrossPlatformUsernamesRequest::restSerializeRequest
==============
*/
char bdGetCrossPlatformUsernamesRequest::restSerializeRequest(bdGetCrossPlatformUsernamesRequest *this, bdRESTRequestBuilder *builder)
{
  __int64 v4; 
  bdRESTURI *v5; 
  bdRESTHeaders *v6; 
  char v7; 
  bdLobbyService *v8; 
  bdAuthInfo *AuthInfo; 
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
  bdRESTURI::bdDummyArg v23; 
  bdRESTURI::bdDummyArg v24; 
  char dst[4096]; 

  v4 = 0i64;
  if ( !bdRESTRequestBuilder::setServiceName(builder, "social-service") || !bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)4670804) )
    goto LABEL_9;
  v5 = bdRESTRequestBuilder::uri(builder);
  in = "/{api_version}/users/";
  v5->m_path[0] = 0;
  v5->m_pathLength = 0;
  bdRESTURI::appendNextBlock(v5, (const char **)&in);
  bdRESTURI::operator<<(v5, BD_CROSS_PLATFORM_SOCIAL_SERVICES_API_VERSION_2);
  bdRESTURI::appendNextBlock(v5, (const char **)&in);
  bdRESTURI::operator<<(v5, &v21);
  bdRESTURI::appendNextBlock(v5, (const char **)&in);
  bdRESTURI::operator<<(v5, &v22);
  bdRESTURI::appendNextBlock(v5, (const char **)&in);
  bdRESTURI::operator<<(v5, &v23);
  bdRESTURI::appendNextBlock(v5, (const char **)&in);
  bdRESTURI::operator<<(v5, &v24);
  bdRESTURI::appendNextBlock(v5, (const char **)&in);
  if ( !bdRESTURI::isOK(v5) )
  {
    v19 = 1024;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.inl", "bdRESTURI::formatPath", 0x38u, "Formatted URI would have been too long. Max is %d", v19);
    v5->m_path[0] = 0;
    v5->m_pathLength = 0;
  }
  if ( bdRESTURI::isOK(v5) && bdRESTRequestBuilder::setResourceName(builder, "Users", "get_usernames") && (v6 = bdRESTRequestBuilder::headers(builder), bdRESTHeaders::setFieldAccept(v6, BD_MIME_JSON)) )
    v7 = 1;
  else
LABEL_9:
    v7 = 0;
  v8 = bdRESTRequestBuilder::lobbyService(builder);
  AuthInfo = bdLobbyService::getAuthInfo(v8);
  if ( v7 )
  {
    v10 = bdRESTRequestBuilder::uri(builder);
    if ( bdRESTURI::addQueryParam(v10, "context", AuthInfo->m_titleID) )
    {
      v11 = bdRESTRequestBuilder::uri(builder);
      if ( bdRESTURI::addQueryParam(v11, "client", AuthInfo->m_clientID) )
      {
        v12 = bdRESTRequestBuilder::uri(builder);
        if ( bdRESTURI::addQueryParam(v12, "titleID", AuthInfo->m_titleID) )
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
                if ( bdRESTURI::encodeArrayElement(v15, &this->m_users[v4], dst, (unsigned int *)&in, 0x1000u) && (v17 = (_DWORD)in + 1, (unsigned int)((_DWORD)in + 1) < 0x1000) )
                {
                  v16 = 1;
                  if ( (int)v4 + 1 < m_numUsers )
                  {
                    dst[(unsigned int)in] = 44;
                    LODWORD(in) = v17;
                  }
                }
                else
                {
                  v16 = 0;
                }
                v4 = (unsigned int)(v4 + 1);
                if ( (unsigned int)v4 >= m_numUsers )
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
  return 0;
}

/*
==============
bdGetCrossPlatformUsernamesRequest::setUsers
==============
*/
void bdGetCrossPlatformUsernamesRequest::setUsers(bdGetCrossPlatformUsernamesRequest *this, const unsigned int numUsers, const bdUserAccountID *users)
{
  __int64 v3; 
  bdUserAccountID *m_users; 
  char *v7; 

  v3 = numUsers;
  bdHandleAssert(numUsers <= 0xC8, "numUsers <= BD_CROSS_PLATFORM_IDENTITY_MAX_NUM_USERS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdgetcrossplatformusernamesrequest.cpp", "bdGetCrossPlatformUsernamesRequest::setUsers", 0x12u, "Number of users in the request exceeded the max limit.");
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

