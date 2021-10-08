/*
==============
bdGetUsersPresenceRequestV3::bdGetUsersPresenceRequestV3
==============
*/

void __fastcall bdGetUsersPresenceRequestV3::bdGetUsersPresenceRequestV3(bdGetUsersPresenceRequestV3 *this)
{
  ??0bdGetUsersPresenceRequestV3@@QEAA@XZ(this);
}

/*
==============
bdGetUsersPresenceRequestV3::restSerializeRequest
==============
*/

bool __fastcall bdGetUsersPresenceRequestV3::restSerializeRequest(bdGetUsersPresenceRequestV3 *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdGetUsersPresenceRequestV3@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdGetUsersPresenceRequestV3::setUsers
==============
*/

void __fastcall bdGetUsersPresenceRequestV3::setUsers(bdGetUsersPresenceRequestV3 *this, const unsigned int numUsers, const bdUserAccountID *users)
{
  ?setUsers@bdGetUsersPresenceRequestV3@@QEAAXIPEBVbdUserAccountID@@@Z(this, numUsers, users);
}

/*
==============
bdGetUsersPresenceRequestV3::setContext
==============
*/

void __fastcall bdGetUsersPresenceRequestV3::setContext(bdGetUsersPresenceRequestV3 *this, const char *context)
{
  ?setContext@bdGetUsersPresenceRequestV3@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdGetUsersPresenceRequestV3::bdGetUsersPresenceRequestV3
==============
*/

void __fastcall bdGetUsersPresenceRequestV3::bdGetUsersPresenceRequestV3(bdGetUsersPresenceRequestV3 *this, const char *context, const unsigned int numUsers, const bdUserAccountID *users)
{
  ??0bdGetUsersPresenceRequestV3@@QEAA@PEBDIPEBVbdUserAccountID@@@Z(this, context, numUsers, users);
}

/*
==============
bdGetUsersPresenceRequestV3::bdGetUsersPresenceRequestV3
==============
*/
void bdGetUsersPresenceRequestV3::bdGetUsersPresenceRequestV3(bdGetUsersPresenceRequestV3 *this, const char *context, const unsigned int numUsers, const bdUserAccountID *users)
{
  __int64 v5; 
  bdUserAccountID *m_users; 
  char *v8; 

  v5 = numUsers;
  this->__vftable = (bdGetUsersPresenceRequestV3_vtbl *)&bdGetUsersPresenceRequestV3::`vftable';
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  m_users = this->m_users;
  `eh vector vbase constructor iterator'(this->m_users, 0x48ui64, 0x19ui64, (void (__fastcall *)(void *))bdUserAccountID::bdUserAccountID, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  this->m_numUsers = v5;
  bdHandleAssert((unsigned int)v5 <= 0x64, "numUsers <= BD_CROSS_PLATFORM_PRESENCE_MAX_NUM_USERS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdgetuserspresencerequestv3.cpp", "bdGetUsersPresenceRequestV3::setUsers", 0x24u, "Number of users in the request exceeded the max limit.", -2i64);
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
bdGetUsersPresenceRequestV3::bdGetUsersPresenceRequestV3
==============
*/
void bdGetUsersPresenceRequestV3::bdGetUsersPresenceRequestV3(bdGetUsersPresenceRequestV3 *this)
{
  bdStructFixedSizeString<16> *p_m_context; 
  unsigned __int64 v3; 
  size_t v4; 

  this->__vftable = (bdGetUsersPresenceRequestV3_vtbl *)&bdGetUsersPresenceRequestV3::`vftable';
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
  `eh vector vbase constructor iterator'(this->m_users, 0x48ui64, 0x19ui64, (void (__fastcall *)(void *))bdUserAccountID::bdUserAccountID, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  this->m_numUsers = 0;
}

/*
==============
bdGetUsersPresenceRequestV3::restSerializeRequest
==============
*/
char bdGetUsersPresenceRequestV3::restSerializeRequest(bdGetUsersPresenceRequestV3 *this, bdRESTRequestBuilder *builder)
{
  bdRESTURI *v4; 
  bdRESTHeaders *v5; 
  bdRESTURI *v6; 
  bool v7; 
  bdLobbyService *v8; 
  bdAuthInfo *AuthInfo; 
  bdRESTURI *v10; 
  bdRESTURI *v11; 
  bdRESTURI *v12; 
  unsigned int m_numUsers; 
  __int64 v14; 
  bdRESTURI *v15; 
  char v16; 
  unsigned int v17; 
  unsigned int dstLength[4]; 
  char dst[4096]; 

  v7 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "social-service") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)4670804) )
  {
    v4 = bdRESTRequestBuilder::uri(builder);
    if ( bdRESTURI::formatPath(v4, "/v2/users/presence/") && bdRESTRequestBuilder::setResourceName(builder, "UsersPresence", "get_users_presence_v2") )
    {
      v5 = bdRESTRequestBuilder::headers(builder);
      if ( bdRESTHeaders::setFieldAccept(v5, BD_MIME_JSON) )
      {
        v6 = bdRESTRequestBuilder::uri(builder);
        if ( bdRESTURI::addQueryParam(v6, "context", this->m_context.m_buffer) )
          v7 = 1;
      }
    }
  }
  v8 = bdRESTRequestBuilder::lobbyService(builder);
  AuthInfo = bdLobbyService::getAuthInfo(v8);
  if ( v7 )
  {
    v10 = bdRESTRequestBuilder::uri(builder);
    if ( bdRESTURI::addQueryParam(v10, "client", AuthInfo->m_clientID) )
    {
      v11 = bdRESTRequestBuilder::uri(builder);
      if ( bdRESTURI::addQueryParam(v11, "titleID", AuthInfo->m_titleID) )
      {
        if ( this->m_numUsers )
        {
          v12 = bdRESTRequestBuilder::uri(builder);
          m_numUsers = this->m_numUsers;
          v14 = 0i64;
          dstLength[0] = 0;
          v15 = v12;
          v16 = 1;
          memset_0(dst, 0, sizeof(dst));
          if ( m_numUsers )
          {
            while ( v16 )
            {
              if ( bdRESTURI::encodeArrayElement(v15, &this->m_users[v14], dst, dstLength, 0x1000u) && (v17 = dstLength[0] + 1, dstLength[0] + 1 < 0x1000) )
              {
                v16 = 1;
                if ( (int)v14 + 1 < m_numUsers )
                {
                  dst[dstLength[0]] = 44;
                  dstLength[0] = v17;
                }
              }
              else
              {
                v16 = 0;
              }
              v14 = (unsigned int)(v14 + 1);
              if ( (unsigned int)v14 >= m_numUsers )
              {
                if ( !v16 )
                  return 0;
                goto LABEL_22;
              }
            }
          }
          else
          {
LABEL_22:
            if ( bdRESTURI::addQueryParam(v15, "users", dst, BD_DONT_ENCODE) )
              return 1;
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
bdGetUsersPresenceRequestV3::setContext
==============
*/
void bdGetUsersPresenceRequestV3::setContext(bdGetUsersPresenceRequestV3 *this, const char *context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
}

/*
==============
bdGetUsersPresenceRequestV3::setUsers
==============
*/
void bdGetUsersPresenceRequestV3::setUsers(bdGetUsersPresenceRequestV3 *this, const unsigned int numUsers, const bdUserAccountID *users)
{
  __int64 v3; 
  bdUserAccountID *m_users; 
  char *v7; 

  v3 = numUsers;
  bdHandleAssert(numUsers <= 0x64, "numUsers <= BD_CROSS_PLATFORM_PRESENCE_MAX_NUM_USERS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdgetuserspresencerequestv3.cpp", "bdGetUsersPresenceRequestV3::setUsers", 0x24u, "Number of users in the request exceeded the max limit.");
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

