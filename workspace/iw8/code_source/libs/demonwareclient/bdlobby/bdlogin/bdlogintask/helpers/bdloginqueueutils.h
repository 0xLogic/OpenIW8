/*
==============
bdLoginQueueUtils::parseErrorCodeFromResponse
==============
*/

bdLobbyErrorCode __fastcall bdLoginQueueUtils::parseErrorCodeFromResponse(const bdLobbyErrorCode defaultError, const char *response)
{
  return ?parseErrorCodeFromResponse@bdLoginQueueUtils@@SA?AW4bdLobbyErrorCode@@W42@PEBD@Z(defaultError, response);
}

/*
==============
bdLoginQueueUtils::mapHTTPWrapperInternalErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdLoginQueueUtils::mapHTTPWrapperInternalErrorCode(const bdLobbyErrorCode defaultError, const unsigned int internalErrorCode)
{
  return ?mapHTTPWrapperInternalErrorCode@bdLoginQueueUtils@@SA?AW4bdLobbyErrorCode@@W42@I@Z(defaultError, internalErrorCode);
}

/*
==============
bdLoginQueueUtils::mapHTTPWrapperInternalErrorCode
==============
*/
__int64 bdLoginQueueUtils::mapHTTPWrapperInternalErrorCode(const bdLobbyErrorCode defaultError, const unsigned int internalErrorCode)
{
  if ( !internalErrorCode )
    return (unsigned int)defaultError;
  if ( internalErrorCode == 1 )
    return 8905i64;
  if ( internalErrorCode != 2 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginqueueutils.h", "bdLoginQueueUtils::mapHTTPWrapperInternalErrorCode", 0x55u, "Unknown internalErrorCode[%d] received, ignoring", internalErrorCode);
    return (unsigned int)defaultError;
  }
  return 8906i64;
}

/*
==============
bdLoginQueueUtils::parseErrorCodeFromResponse
==============
*/
__int64 bdLoginQueueUtils::parseErrorCodeFromResponse(const bdLobbyErrorCode defaultError, const char *response)
{
  bdJSONDeserializer v5; 
  unsigned __int64 value; 

  if ( response )
  {
    bdJSONDeserializer::bdJSONDeserializer(&v5);
    if ( bdJSONDeserializer::parse(&v5, response) && bdJSONDeserializer::hasKey(&v5, "code") )
    {
      value = 0i64;
      bdJSONDeserializer::getUInt64(&v5, "code", &value);
      if ( value )
        defaultError = (int)value;
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v5);
  }
  return (unsigned int)defaultError;
}

