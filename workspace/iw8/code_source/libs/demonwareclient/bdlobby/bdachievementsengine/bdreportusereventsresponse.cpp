/*
==============
bdReportUserEventsResponse::getErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdReportUserEventsResponse::getErrorCode(bdReportUserEventsResponse *this, unsigned int index)
{
  return ?getErrorCode@bdReportUserEventsResponse@@QEBA?AW4bdLobbyErrorCode@@I@Z(this, index);
}

/*
==============
bdReportUserEventsResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdReportUserEventsResponse::handleReplySuccess(bdReportUserEventsResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdReportUserEventsResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdReportUserEventsResponse::bdReportUserEventsResponse
==============
*/

void __fastcall bdReportUserEventsResponse::bdReportUserEventsResponse(bdReportUserEventsResponse *this)
{
  ??0bdReportUserEventsResponse@@QEAA@XZ(this);
}

/*
==============
bdReportUserEventsResponse::numResults
==============
*/

unsigned int __fastcall bdReportUserEventsResponse::numResults(bdReportUserEventsResponse *this)
{
  return ?numResults@bdReportUserEventsResponse@@QEBAIXZ(this);
}

/*
==============
bdReportUserEventsResponse::reset
==============
*/

void __fastcall bdReportUserEventsResponse::reset(bdReportUserEventsResponse *this)
{
  ?reset@bdReportUserEventsResponse@@QEAAXXZ(this);
}

/*
==============
bdReportUserEventsResponse::allSucceeded
==============
*/

bool __fastcall bdReportUserEventsResponse::allSucceeded(bdReportUserEventsResponse *this)
{
  return ?allSucceeded@bdReportUserEventsResponse@@QEBA_NXZ(this);
}

/*
==============
bdReportUserEventsResponse::bdReportUserEventsResponse
==============
*/
void bdReportUserEventsResponse::bdReportUserEventsResponse(bdReportUserEventsResponse *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdReportUserEventsResponse_vtbl *)&bdReportUserEventsResponse::`vftable';
  this->m_results.m_size = 0;
  this->m_allSucceeded = 0;
}

/*
==============
bdReportUserEventsResponse::allSucceeded
==============
*/
_BOOL8 bdReportUserEventsResponse::allSucceeded(bdReportUserEventsResponse *this)
{
  return this->m_allSucceeded;
}

/*
==============
bdReportUserEventsResponse::getErrorCode
==============
*/
__int64 bdReportUserEventsResponse::getErrorCode(bdReportUserEventsResponse *this, unsigned int index)
{
  bdStructFixedSizeArray<enum bdLobbyErrorCode,64> *p_m_results; 
  __int64 v3; 

  p_m_results = &this->m_results;
  v3 = index;
  bdHandleAssert(index < this->m_results.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<enum bdLobbyErrorCode,64>::operator []", 0x54u, "i is out of range");
  return (unsigned int)p_m_results->m_elements[v3];
}

/*
==============
bdReportUserEventsResponse::handleReplySuccess
==============
*/
__int64 bdReportUserEventsResponse::handleReplySuccess(bdReportUserEventsResponse *this, const bdRESTResponseMessage *reply)
{
  bool isObject; 
  bool v5; 
  unsigned int v6; 
  char v7; 
  unsigned int i; 
  bool v9; 
  const bdRESTErrorMap *DefaultErrorMap; 
  unsigned int v11; 
  __int64 v12; 
  _BYTE *v13; 
  unsigned __int64 v14; 
  __int64 m_size; 
  unsigned int code; 
  bdJSONDeserializer v18; 
  bdJSONDeserializer value; 
  bdJSONDeserializer deserializer; 
  __int64 v21; 
  bdJSONDeserializer v22; 
  char errName[144]; 

  v21 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  LOBYTE(reply) = bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer);
  isObject = bdJSONDeserializer::isObject(&deserializer);
  bdHandleAssert(isObject, "deserializer.isObject()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdreportusereventsresponse.cpp", "bdReportUserEventsResponse::handleReplySuccess", 0x1Fu, "Response body is not a JSON object.");
  v5 = (_BYTE)reply && bdJSONDeserializer::getBoolean(&deserializer, "allSucceeded", &this->m_allSucceeded);
  this->m_results.m_size = 0;
  v6 = 1;
  if ( !this->m_allSucceeded )
  {
    bdJSONDeserializer::bdJSONDeserializer(&value);
    v5 = v5 && bdJSONDeserializer::getArray(&deserializer, "results", &value);
    v7 = 0;
    for ( i = 0; i < value.m_count; ++i )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v18);
      v5 = v5 && bdJSONDeserializer::getElementByIndex(&value, i, &v18);
      if ( !bdJSONDeserializer::hasKey(&v18, "error") )
      {
        if ( bdJSONDeserializer::hasKey(&v18, "status") )
        {
          bdHandleAssert(this->m_results.m_size < 0x40, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<enum bdLobbyErrorCode,64>::pushBack", 0x40u, "No more capacity for pushBack");
          m_size = this->m_results.m_size;
          if ( (unsigned int)m_size < 0x40 )
          {
            this->m_results.m_elements[m_size] = BD_NO_ERROR;
            ++this->m_results.m_size;
          }
        }
        else
        {
          v5 = 0;
        }
        goto LABEL_39;
      }
      bdJSONDeserializer::bdJSONDeserializer(&v22);
      v9 = v5 && bdJSONDeserializer::getObject(&v18, "error", &v22);
      DefaultErrorMap = bdAchievementsEngineService::getDefaultErrorMap();
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      errName[0] = 0;
      v5 = v9 && bdJSONDeserializer::getString(&v22, (const char *const)&stru_143C9A1A4, errName, 0x81u);
      code = 0;
      if ( bdRESTErrorMap::errorNameToCode(DefaultErrorMap, 1u, errName, &code) )
      {
        v11 = code;
        if ( !code || code == 12506 )
          goto LABEL_29;
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdReportUserEventsResponse", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdreportusereventsresponse.cpp", "bdReportUserEventsResponse::handleReplySuccess", 0x3Du, "Unknown error '%s'", errName);
        v11 = 12502;
        code = 12502;
      }
      v7 = 1;
LABEL_29:
      bdHandleAssert(this->m_results.m_size < 0x40, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<enum bdLobbyErrorCode,64>::pushBack", 0x40u, "No more capacity for pushBack");
      v12 = this->m_results.m_size;
      if ( (unsigned int)v12 < 0x40 )
      {
        this->m_results.m_elements[v12] = v11;
        ++this->m_results.m_size;
      }
      v13 = memchr_0(errName, 0, 0x81ui64);
      if ( v13 )
        v14 = v13 - errName;
      else
        v14 = 129i64;
      bdHandleAssert(v14 < 0x81, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<128>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
      bdJSONDeserializer::~bdJSONDeserializer(&v22);
LABEL_39:
      bdJSONDeserializer::~bdJSONDeserializer(&v18);
    }
    this->m_allSucceeded = v7 == 0;
    bdRESTResponse::setTaskErrorCode(this, v7 != 0 ? BD_ACHIEVEMENTS_ENGINE_MULTI_STATUS : BD_NO_ERROR);
    bdJSONDeserializer::~bdJSONDeserializer(&value);
  }
  if ( !v5 || !this->m_allSucceeded )
    v6 = 0;
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v6;
}

/*
==============
bdReportUserEventsResponse::numResults
==============
*/
__int64 bdReportUserEventsResponse::numResults(bdReportUserEventsResponse *this)
{
  return this->m_results.m_size;
}

/*
==============
bdReportUserEventsResponse::reset
==============
*/
void bdReportUserEventsResponse::reset(bdReportUserEventsResponse *this)
{
  this->m_results.m_size = 0;
  this->m_allSucceeded = 0;
}

