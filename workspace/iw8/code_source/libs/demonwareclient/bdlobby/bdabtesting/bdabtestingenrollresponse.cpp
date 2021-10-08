/*
==============
bdABTestingEnrollResponse::bdABTestingEnrollResponse
==============
*/

void __fastcall bdABTestingEnrollResponse::bdABTestingEnrollResponse(bdABTestingEnrollResponse *this, bdABTestingEnrollment *enrollments, unsigned int maxEnrollments)
{
  ??0bdABTestingEnrollResponse@@QEAA@PEAVbdABTestingEnrollment@@I@Z(this, enrollments, maxEnrollments);
}

/*
==============
bdABTestingEnrollResponse::bdABTestingEnrollResponse
==============
*/

void __fastcall bdABTestingEnrollResponse::bdABTestingEnrollResponse(bdABTestingEnrollResponse *this)
{
  ??0bdABTestingEnrollResponse@@QEAA@XZ(this);
}

/*
==============
bdABTestingEnrollResponse::reset
==============
*/

void __fastcall bdABTestingEnrollResponse::reset(bdABTestingEnrollResponse *this)
{
  ?reset@bdABTestingEnrollResponse@@QEAAXXZ(this);
}

/*
==============
bdABTestingEnrollResponse::deserializeWithLobbyService
==============
*/

bool __fastcall bdABTestingEnrollResponse::deserializeWithLobbyService(bdABTestingEnrollResponse *this, bdStructBufferDeserializer *deserializer, bdLobbyService *lobbyService)
{
  return ?deserializeWithLobbyService@bdABTestingEnrollResponse@@UEAA_NAEAVbdStructBufferDeserializer@@PEAVbdLobbyService@@@Z(this, deserializer, lobbyService);
}

/*
==============
bdABTestingEnrollResponse::serialize
==============
*/

bool __fastcall bdABTestingEnrollResponse::serialize(bdABTestingEnrollResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdABTestingEnrollResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdABTestingEnrollResponse::init
==============
*/

void __fastcall bdABTestingEnrollResponse::init(bdABTestingEnrollResponse *this, bdABTestingEnrollment *enrollments, unsigned int maxEnrollments)
{
  ?init@bdABTestingEnrollResponse@@QEAAXPEAVbdABTestingEnrollment@@I@Z(this, enrollments, maxEnrollments);
}

/*
==============
bdABTestingEnrollResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdABTestingEnrollResponse::handleReplySuccess(bdABTestingEnrollResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdABTestingEnrollResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdABTestingEnrollResponse::bdABTestingEnrollResponse
==============
*/
void bdABTestingEnrollResponse::bdABTestingEnrollResponse(bdABTestingEnrollResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdABTestingEnrollResponse::`vbtable';
    *(_QWORD *)this->gap48 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap48[8] = 0;
  }
  bdHTTPProxyResponse::bdHTTPProxyResponse(this);
  bdRESTResponse::bdRESTResponse((bdRESTResponse *)(&this->__vftable + 2));
  this->__vftable = (bdABTestingEnrollResponse_vtbl *)&bdABTestingEnrollResponse::`vftable'{for `bdStructBufferSerializable'};
  *((_QWORD *)&this->__vftable + 2) = &bdABTestingEnrollResponse::`vftable';
  *(bdABTestingEnrollResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdABTestingEnrollResponse_vtbl *)&bdABTestingEnrollResponse::`vftable'{for `bdReferencable'};
  *(_QWORD *)&this->m_numEnrollments = 0i64;
}

/*
==============
bdABTestingEnrollResponse::bdABTestingEnrollResponse
==============
*/
void bdABTestingEnrollResponse::bdABTestingEnrollResponse(bdABTestingEnrollResponse *this, bdABTestingEnrollment *enrollments, unsigned int maxEnrollments, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdABTestingEnrollResponse::`vbtable';
    *(_QWORD *)this->gap48 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap48[8] = 0;
  }
  bdHTTPProxyResponse::bdHTTPProxyResponse(this);
  bdRESTResponse::bdRESTResponse((bdRESTResponse *)(&this->__vftable + 2));
  this->__vftable = (bdABTestingEnrollResponse_vtbl *)&bdABTestingEnrollResponse::`vftable'{for `bdStructBufferSerializable'};
  *((_QWORD *)&this->__vftable + 2) = &bdABTestingEnrollResponse::`vftable';
  *(bdABTestingEnrollResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdABTestingEnrollResponse_vtbl *)&bdABTestingEnrollResponse::`vftable'{for `bdReferencable'};
  this->m_enrollments = enrollments;
  this->m_numEnrollments = 0;
  this->m_maxEnrollments = maxEnrollments;
}

/*
==============
bdABTestingEnrollResponse::deserializeWithLobbyService
==============
*/
_BOOL8 bdABTestingEnrollResponse::deserializeWithLobbyService(bdABTestingEnrollResponse *this, bdStructBufferDeserializer *deserializer, bdLobbyService *lobbyService)
{
  unsigned int v6; 
  bool v7; 
  char v8; 
  bool v9; 
  bdAchievementsEngineService *AchievementsEngineService; 
  bool v11; 
  unsigned int m_count; 
  unsigned int v14; 
  unsigned int m_maxEnrollments; 
  unsigned int status_code; 
  unsigned __int64 value; 
  bdJSONDeserializer v18; 
  bdJSONDeserializer v19; 
  __int64 v20; 
  bdJSONDeserializer json; 
  char abTestingToken[4096]; 
  char body[8096]; 

  v20 = -2i64;
  v6 = 0;
  status_code = 0;
  v7 = bdHTTPProxyResponse::deserializeStatusCode(this, deserializer, &status_code) && bdHTTPProxyResponse::deserializeBody(this, deserializer, body, 0x1FA0u);
  bdJSONDeserializer::bdJSONDeserializer(&v18);
  if ( !v7 || !bdJSONDeserializer::parse(&v18, body) || !bdJSONDeserializer::isObject(&v18) )
  {
    value = 0i64;
    goto LABEL_11;
  }
  value = 0i64;
  if ( !bdJSONDeserializer::getUInt64(&v18, "expiresIn", &value) )
  {
LABEL_11:
    v8 = 0;
    goto LABEL_12;
  }
  v8 = 1;
LABEL_12:
  memset_0(abTestingToken, 0, sizeof(abTestingToken));
  v9 = v8 && bdJSONDeserializer::getString(&v18, "ABToken", abTestingToken, 0x1000u) && lobbyService && bdLobbyService::setABTestingTokenAndExpiry(lobbyService, abTestingToken, value);
  AchievementsEngineService = bdLobbyService::getAchievementsEngineService(lobbyService);
  bdAchievementsEngineService::setABTestingToken(AchievementsEngineService, abTestingToken);
  bdJSONDeserializer::bdJSONDeserializer(&v19);
  v11 = v9 && bdJSONDeserializer::getArray(&v18, "enrollments", &v19);
  m_count = v19.m_count;
  if ( v19.m_count <= this->m_maxEnrollments )
  {
    if ( v11 )
    {
      this->m_numEnrollments = v19.m_count;
      if ( m_count )
      {
        do
        {
          bdJSONDeserializer::bdJSONDeserializer(&json);
          v11 = v11 && bdJSONDeserializer::getObject(&v19, v6, &json) && bdABTestingEnrollment::deserializeFromJSON(&this->m_enrollments[v6], &json);
          bdJSONDeserializer::~bdJSONDeserializer(&json);
          ++v6;
        }
        while ( v6 < this->m_numEnrollments );
      }
    }
  }
  else
  {
    m_maxEnrollments = this->m_maxEnrollments;
    v14 = v19.m_count;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdABTestingEnrollResponse", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdabtesting\\bdabtestingenrollresponse.cpp", "bdABTestingEnrollResponse::deserializeWithLobbyService", 0x57u, "Too many enrollments to deserialize. Got %d, can hold %d", v14, m_maxEnrollments);
    v11 = 0;
  }
  bdJSONDeserializer::~bdJSONDeserializer(&v19);
  bdJSONDeserializer::~bdJSONDeserializer(&v18);
  return v11;
}

/*
==============
bdABTestingEnrollResponse::handleReplySuccess
==============
*/
__int64 bdABTestingEnrollResponse::handleReplySuccess(bdABTestingEnrollResponse *this, const bdRESTResponseMessage *reply)
{
  unsigned int v4; 
  char v5; 
  bdLobbyService *LobbyService; 
  bool v7; 
  bool v8; 
  unsigned int m_count; 
  bool v10; 
  unsigned int v11; 
  unsigned int v13; 
  int v14; 
  unsigned __int64 value; 
  bdJSONDeserializer deserializer; 
  bdJSONDeserializer v17; 
  __int64 v18; 
  bdJSONDeserializer json; 
  char abTestingToken[4096]; 

  v18 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  if ( !bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer) || !bdJSONDeserializer::isObject(&deserializer) )
  {
    v4 = 0;
    value = 0i64;
    goto LABEL_6;
  }
  v4 = 0;
  value = 0i64;
  if ( !bdJSONDeserializer::getUInt64(&deserializer, "expiresIn", &value) )
  {
LABEL_6:
    v5 = 0;
    goto LABEL_7;
  }
  v5 = 1;
LABEL_7:
  memset_0(abTestingToken, 0, sizeof(abTestingToken));
  v7 = 0;
  if ( v5 )
  {
    if ( bdJSONDeserializer::getString(&deserializer, "ABToken", abTestingToken, 0x1000u) )
    {
      if ( bdRESTResponseMessage::getLobbyService((bdRESTResponseMessage *)reply) )
      {
        LobbyService = bdRESTResponseMessage::getLobbyService((bdRESTResponseMessage *)reply);
        if ( bdLobbyService::setABTestingTokenAndExpiry(LobbyService, abTestingToken, value) )
          v7 = 1;
      }
    }
  }
  bdJSONDeserializer::bdJSONDeserializer(&v17);
  v8 = v7 && bdJSONDeserializer::getArray(&deserializer, "enrollments", &v17);
  m_count = v17.m_count;
  if ( v17.m_count > *(_DWORD *)&this->_bytes_20[20] )
  {
    v14 = *(_DWORD *)&this->_bytes_20[20];
    v13 = v17.m_count;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdABTestingEnrollResponse", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdabtesting\\bdabtestingenrollresponse.cpp", "bdABTestingEnrollResponse::handleReplySuccess", 0x8Au, "Too many enrollments to deserialize. Got %d, can hold %d", v13, v14);
    v8 = 0;
LABEL_27:
    v10 = !v8;
    goto LABEL_28;
  }
  v10 = !v8;
  if ( v8 )
  {
    *(_DWORD *)&this->_bytes_20[16] = v17.m_count;
    v11 = 0;
    if ( m_count )
    {
      do
      {
        bdJSONDeserializer::bdJSONDeserializer(&json);
        v8 = v8 && bdJSONDeserializer::getObject(&v17, v11, &json) && bdABTestingEnrollment::deserializeFromJSON((bdABTestingEnrollment *)(*(_QWORD *)&this->_bytes_20[8] + 32i64 * v11), &json);
        bdJSONDeserializer::~bdJSONDeserializer(&json);
        ++v11;
      }
      while ( v11 < *(_DWORD *)&this->_bytes_20[16] );
    }
    goto LABEL_27;
  }
LABEL_28:
  LOBYTE(v4) = !v10;
  bdJSONDeserializer::~bdJSONDeserializer(&v17);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v4;
}

/*
==============
bdABTestingEnrollResponse::init
==============
*/
void bdABTestingEnrollResponse::init(bdABTestingEnrollResponse *this, bdABTestingEnrollment *enrollments, unsigned int maxEnrollments)
{
  this->m_enrollments = enrollments;
  this->m_numEnrollments = 0;
  this->m_maxEnrollments = maxEnrollments;
}

/*
==============
bdABTestingEnrollResponse::reset
==============
*/
void bdABTestingEnrollResponse::reset(bdABTestingEnrollResponse *this)
{
  unsigned int v1; 

  v1 = 0;
  for ( this->m_numEnrollments = 0; v1 < this->m_maxEnrollments; ++v1 )
    bdABTestingEnrollment::reset(&this->m_enrollments[v1]);
}

/*
==============
bdABTestingEnrollResponse::serialize
==============
*/
bool bdABTestingEnrollResponse::serialize(bdABTestingEnrollResponse *this, bdStructBufferSerializer *serializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdabtesting\\bdabtestingenrollresponse.cpp", "bdABTestingEnrollResponse::serialize", 0xA1u, "Cannot call bdABTestingEnrollResponse::serialize");
  return 0;
}

