/*
==============
bdReportEventsResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdReportEventsResponse::handleReplySuccess(bdReportEventsResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdReportEventsResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdReportEventsResponse::bdReportEventsResponse
==============
*/

void __fastcall bdReportEventsResponse::bdReportEventsResponse(bdReportEventsResponse *this)
{
  ??0bdReportEventsResponse@@QEAA@XZ(this);
}

/*
==============
bdReportEventsResponse::bdReportEventsResponse
==============
*/
void bdReportEventsResponse::bdReportEventsResponse(bdReportEventsResponse *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdReportEventsResponse_vtbl *)&bdReportEventsResponse::`vftable';
}

/*
==============
bdReportEventsResponse::handleReplySuccess
==============
*/
__int64 bdReportEventsResponse::handleReplySuccess(bdReportEventsResponse *this, const bdRESTResponseMessage *reply)
{
  bool isObject; 
  bool v5; 
  unsigned int v6; 
  bool v7; 
  bool v8; 
  bool v9; 
  const bdRESTErrorMap *DefaultErrorMap; 
  unsigned __int64 v11; 
  size_t v12; 
  signed int v13; 
  _BYTE *v14; 
  unsigned __int64 v15; 
  bool value; 
  unsigned int code; 
  bdJSONDeserializer deserializer; 
  bdJSONDeserializer v20; 
  __int64 v21; 
  bdJSONDeserializer v22; 
  bdJSONDeserializer v23; 
  char errName[144]; 

  v21 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  LOBYTE(reply) = bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer);
  isObject = bdJSONDeserializer::isObject(&deserializer);
  bdHandleAssert(isObject, "deserializer.isObject()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdreporteventsresponse.cpp", "bdReportEventsResponse::handleReplySuccess", 0x17u, "Response body is not a JSON object.");
  value = 0;
  v5 = (_BYTE)reply && bdJSONDeserializer::getBoolean(&deserializer, "allSucceeded", &value);
  v6 = 1;
  if ( !value )
  {
    bdJSONDeserializer::bdJSONDeserializer(&v20);
    v7 = v5 && bdJSONDeserializer::getArray(&deserializer, "results", &v20);
    bdHandleAssert(v20.m_count == 1, "results.getCount() == 1", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdreporteventsresponse.cpp", "bdReportEventsResponse::handleReplySuccess", 0x22u, "Unexpected number of results.");
    bdJSONDeserializer::bdJSONDeserializer(&v23);
    v8 = v7 && bdJSONDeserializer::getElementByIndex(&v20, 0, &v23);
    bdJSONDeserializer::bdJSONDeserializer(&v22);
    v9 = v8 && bdJSONDeserializer::getObject(&v23, "error", &v22);
    DefaultErrorMap = bdAchievementsEngineService::getDefaultErrorMap();
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v11 = -1i64;
    do
      ++v11;
    while ( *((_BYTE *)&queryFormat.fmt + v11 + 3) );
    v12 = 128i64;
    if ( v11 < 0x80 )
      v12 = v11;
    memcpy_0(errName, (char *)&queryFormat.fmt + 3, v12);
    errName[v12] = 0;
    v5 = v9 && bdJSONDeserializer::getString(&v22, (const char *const)&stru_143C9A1A4, errName, 0x81u);
    code = 0;
    if ( bdRESTErrorMap::errorNameToCode(DefaultErrorMap, 1u, errName, &code) )
    {
      v13 = code;
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdReportUserEventsResponse", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdreporteventsresponse.cpp", "bdReportEventsResponse::handleReplySuccess", 0x32u, "Unknown error '%s'", errName);
      v13 = 12502;
      code = 12502;
    }
    bdRESTResponse::setTaskErrorCode(this, (bdLobbyErrorCode)v13);
    v14 = memchr_0(errName, 0, 0x81ui64);
    if ( v14 )
      v15 = v14 - errName;
    else
      v15 = 129i64;
    bdHandleAssert(v15 < 0x81, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<128>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
    bdJSONDeserializer::~bdJSONDeserializer(&v22);
    bdJSONDeserializer::~bdJSONDeserializer(&v23);
    bdJSONDeserializer::~bdJSONDeserializer(&v20);
  }
  if ( !v5 || !value )
    v6 = 0;
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v6;
}

