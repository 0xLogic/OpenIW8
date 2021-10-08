/*
==============
bdFetchRegulationsResponse::getErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdFetchRegulationsResponse::getErrorCode(bdFetchRegulationsResponse *this)
{
  return ?getErrorCode@bdFetchRegulationsResponse@@QEBA?AW4bdLobbyErrorCode@@XZ(this);
}

/*
==============
bdFetchRegulationsResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdFetchRegulationsResponse::handleReplySuccess(bdFetchRegulationsResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdFetchRegulationsResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdFetchRegulationsResponse::handleReplyError
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdFetchRegulationsResponse::handleReplyError(bdFetchRegulationsResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplyError@bdFetchRegulationsResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdFetchRegulationsResponse::bdFetchRegulationsResponse
==============
*/

void __fastcall bdFetchRegulationsResponse::bdFetchRegulationsResponse(bdFetchRegulationsResponse *this)
{
  ??0bdFetchRegulationsResponse@@QEAA@XZ(this);
}

/*
==============
bdFetchRegulationsResponse::getNumRegulations
==============
*/

unsigned __int16 __fastcall bdFetchRegulationsResponse::getNumRegulations(bdFetchRegulationsResponse *this)
{
  return ?getNumRegulations@bdFetchRegulationsResponse@@QEBAGXZ(this);
}

/*
==============
bdFetchRegulationsResponse::getRegulations
==============
*/

const bdRegulation *__fastcall bdFetchRegulationsResponse::getRegulations(bdFetchRegulationsResponse *this)
{
  return ?getRegulations@bdFetchRegulationsResponse@@QEBAPEBVbdRegulation@@XZ(this);
}

/*
==============
bdFetchRegulationsResponse::bdFetchRegulationsResponse
==============
*/
void bdFetchRegulationsResponse::bdFetchRegulationsResponse(bdFetchRegulationsResponse *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdFetchRegulationsResponse_vtbl *)&bdFetchRegulationsResponse::`vftable';
  this->m_errorCode = BD_NO_ERROR;
  this->m_numRegulations = 0;
  `eh vector constructor iterator'(this->m_regulations, 0x18ui64, 0xFui64, (void (__fastcall *)(void *))bdRegulation::bdRegulation, (void (__fastcall *)(void *))bdRegulation::~bdRegulation);
}

/*
==============
bdFetchRegulationsResponse::getErrorCode
==============
*/
__int64 bdFetchRegulationsResponse::getErrorCode(bdFetchRegulationsResponse *this)
{
  return (unsigned int)this->m_errorCode;
}

/*
==============
bdFetchRegulationsResponse::getNumRegulations
==============
*/
__int64 bdFetchRegulationsResponse::getNumRegulations(bdFetchRegulationsResponse *this)
{
  return this->m_numRegulations;
}

/*
==============
bdFetchRegulationsResponse::getRegulations
==============
*/
bdRegulation *bdFetchRegulationsResponse::getRegulations(bdFetchRegulationsResponse *this)
{
  return this->m_regulations;
}

/*
==============
bdFetchRegulationsResponse::handleReplyError
==============
*/
__int64 bdFetchRegulationsResponse::handleReplyError(bdFetchRegulationsResponse *this, const bdRESTResponseMessage *reply)
{
  unsigned int v4; 
  bool Object; 
  unsigned int m_count; 
  unsigned int i; 
  bdLobbyErrorCode v8; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v11; 
  bdJSONDeserializer json; 
  bdJSONDeserializer deserializer; 
  __int64 v14; 

  v14 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  if ( !bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer) || !bdJSONDeserializer::isObject(&deserializer) )
    goto LABEL_19;
  v4 = 0;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  Object = bdJSONDeserializer::getObject(&deserializer, "error", &value);
  bdHandleAssert(1, "errCode != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::parseErrorJSON", 0x1DFu, "No errcode provided to parseErrorJson");
  if ( Object && value.m_type == BD_JSON_OBJECT )
  {
    v4 = bdLoginUtils::parseSingleError(&value);
    if ( bdJSONDeserializer::hasKey(&value, "context") )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v11);
      bdJSONDeserializer::getArray(&value, "context", &v11);
      if ( bdJSONDeserializer::isArray(&v11) )
      {
        m_count = v11.m_count;
        for ( i = 0; i < m_count; ++i )
        {
          bdJSONDeserializer::bdJSONDeserializer(&json);
          bdJSONDeserializer::getObject(&v11, i, &json);
          if ( json.m_type == BD_JSON_OBJECT )
            v4 = bdLoginUtils::parseSingleError(&json);
          bdJSONDeserializer::~bdJSONDeserializer(&json);
        }
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v11);
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  if ( !v4 )
    goto LABEL_19;
  if ( v4 > 0x35B60 )
  {
    if ( v4 != 222000 )
    {
      switch ( v4 )
      {
        case 0x36394u:
          v8 = BD_UMBRELLA_EXPIRED_TOKEN;
          goto LABEL_20;
        case 0x38E28u:
          v8 = BD_UMBRELLA_ACCOUNT_NOT_FOUND;
          goto LABEL_20;
        case 0x3AD68u:
          v8 = BD_UMBRELLA_MERGE_CONFLICT;
          goto LABEL_20;
        case 0x3E418u:
          v8 = BD_UMBRELLA_PLAYER_BAN;
          goto LABEL_20;
      }
      goto LABEL_31;
    }
LABEL_37:
    v8 = BD_UMBRELLA_UNAUTHORIZED_ACCESS;
    goto LABEL_20;
  }
  if ( v4 == 220000 )
    goto LABEL_37;
  if ( v4 > 0x34008 )
  {
    if ( v4 == 214000 )
    {
      v8 = BD_UMBRELLA_FIELD_INVALID;
      goto LABEL_20;
    }
    if ( v4 == 214100 )
    {
      v8 = BD_UMBRELLA_MISSING_FIELD;
      goto LABEL_20;
    }
    goto LABEL_31;
  }
  if ( v4 == 213000 )
  {
    v8 = BD_UMBRELLA_INVALID_DATA;
    goto LABEL_20;
  }
  if ( v4 == 1 )
  {
LABEL_32:
    v8 = BD_LOGIN_UNKOWN_ERROR;
    goto LABEL_20;
  }
  if ( v4 != 200000 )
  {
LABEL_31:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::convertUmbrellaErrorCode", 0x14Cu, "Got unexpected code: [%u] during mapping of login error code to lobbyErrorCode in bdLoginUtils.", v4);
    goto LABEL_32;
  }
LABEL_19:
  v8 = BD_UMBRELLA_ERROR;
LABEL_20:
  this->m_errorCode = v8;
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return 0i64;
}

/*
==============
bdFetchRegulationsResponse::handleReplySuccess
==============
*/
__int64 bdFetchRegulationsResponse::handleReplySuccess(bdFetchRegulationsResponse *this, const bdRESTResponseMessage *reply)
{
  unsigned int v4; 
  bool v5; 
  bool Array; 
  bool isArray; 
  unsigned __int16 m_count; 
  unsigned __int16 i; 
  bdJSONDeserializer value; 
  bdJSONDeserializer deserializer; 
  bdJSONDeserializer json; 

  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  v4 = 0;
  if ( !bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer) || !bdJSONDeserializer::isObject(&deserializer) )
    goto LABEL_18;
  v5 = 1;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  Array = bdJSONDeserializer::getArray(&deserializer, "regulations", &value);
  isArray = bdJSONDeserializer::isArray(&value);
  if ( Array )
  {
    if ( isArray )
    {
      m_count = value.m_count;
      if ( LOWORD(value.m_count) >= 0xFu )
        m_count = 15;
      this->m_numRegulations = m_count;
      for ( i = 0; i < this->m_numRegulations; ++i )
      {
        bdJSONDeserializer::bdJSONDeserializer(&json);
        if ( bdJSONDeserializer::getObject(&value, i, &json) )
          v5 = v5 && bdRegulation::deserializeFromJSON(&this->m_regulations[i], &json);
        bdJSONDeserializer::~bdJSONDeserializer(&json);
      }
    }
    else
    {
      v5 = 0;
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  if ( v5 )
  {
    this->m_errorCode = BD_NO_ERROR;
    v4 = 1;
  }
  else
  {
LABEL_18:
    this->m_errorCode = BD_UMBRELLA_DESERIALIZATION_FAILURE;
  }
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v4;
}

