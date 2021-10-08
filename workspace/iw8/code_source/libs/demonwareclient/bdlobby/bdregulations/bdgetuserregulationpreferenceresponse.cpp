/*
==============
bdGetUserRegulationPreferenceResponse::getNumRegulationPreferences
==============
*/

unsigned __int16 __fastcall bdGetUserRegulationPreferenceResponse::getNumRegulationPreferences(bdGetUserRegulationPreferenceResponse *this)
{
  return ?getNumRegulationPreferences@bdGetUserRegulationPreferenceResponse@@QEBAGXZ(this);
}

/*
==============
bdGetUserRegulationPreferenceResponse::getRegulationPreferences
==============
*/

const bdRegulationPreference *__fastcall bdGetUserRegulationPreferenceResponse::getRegulationPreferences(bdGetUserRegulationPreferenceResponse *this)
{
  return ?getRegulationPreferences@bdGetUserRegulationPreferenceResponse@@QEBAPEBVbdRegulationPreference@@XZ(this);
}

/*
==============
bdGetUserRegulationPreferenceResponse::getErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdGetUserRegulationPreferenceResponse::getErrorCode(bdGetUserRegulationPreferenceResponse *this)
{
  return ?getErrorCode@bdGetUserRegulationPreferenceResponse@@QEBA?AW4bdLobbyErrorCode@@XZ(this);
}

/*
==============
bdGetUserRegulationPreferenceResponse::handleReplyError
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdGetUserRegulationPreferenceResponse::handleReplyError(bdGetUserRegulationPreferenceResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplyError@bdGetUserRegulationPreferenceResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdGetUserRegulationPreferenceResponse::bdGetUserRegulationPreferenceResponse
==============
*/

void __fastcall bdGetUserRegulationPreferenceResponse::bdGetUserRegulationPreferenceResponse(bdGetUserRegulationPreferenceResponse *this)
{
  ??0bdGetUserRegulationPreferenceResponse@@QEAA@XZ(this);
}

/*
==============
bdGetUserRegulationPreferenceResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdGetUserRegulationPreferenceResponse::handleReplySuccess(bdGetUserRegulationPreferenceResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdGetUserRegulationPreferenceResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdGetUserRegulationPreferenceResponse::bdGetUserRegulationPreferenceResponse
==============
*/
void bdGetUserRegulationPreferenceResponse::bdGetUserRegulationPreferenceResponse(bdGetUserRegulationPreferenceResponse *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdGetUserRegulationPreferenceResponse_vtbl *)&bdGetUserRegulationPreferenceResponse::`vftable';
  this->m_errorCode = BD_NO_ERROR;
  this->m_numRegulationPreferences = 0;
  `eh vector constructor iterator'(this->m_regulationPreferences, 0x40ui64, 0xFui64, (void (__fastcall *)(void *))bdRegulationPreference::bdRegulationPreference, (void (__fastcall *)(void *))bdRegulationPreference::~bdRegulationPreference);
}

/*
==============
bdGetUserRegulationPreferenceResponse::getErrorCode
==============
*/
__int64 bdGetUserRegulationPreferenceResponse::getErrorCode(bdGetUserRegulationPreferenceResponse *this)
{
  return (unsigned int)this->m_errorCode;
}

/*
==============
bdGetUserRegulationPreferenceResponse::getNumRegulationPreferences
==============
*/
__int64 bdGetUserRegulationPreferenceResponse::getNumRegulationPreferences(bdGetUserRegulationPreferenceResponse *this)
{
  return this->m_numRegulationPreferences;
}

/*
==============
bdGetUserRegulationPreferenceResponse::getRegulationPreferences
==============
*/
bdRegulationPreference *bdGetUserRegulationPreferenceResponse::getRegulationPreferences(bdGetUserRegulationPreferenceResponse *this)
{
  return this->m_regulationPreferences;
}

/*
==============
bdGetUserRegulationPreferenceResponse::handleReplyError
==============
*/
__int64 bdGetUserRegulationPreferenceResponse::handleReplyError(bdGetUserRegulationPreferenceResponse *this, const bdRESTResponseMessage *reply)
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
bdGetUserRegulationPreferenceResponse::handleReplySuccess
==============
*/
__int64 bdGetUserRegulationPreferenceResponse::handleReplySuccess(bdGetUserRegulationPreferenceResponse *this, const bdRESTResponseMessage *reply)
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
  Array = bdJSONDeserializer::getArray(&deserializer, "optouts", &value);
  isArray = bdJSONDeserializer::isArray(&value);
  if ( Array )
  {
    if ( isArray )
    {
      m_count = value.m_count;
      if ( LOWORD(value.m_count) >= 0xFu )
        m_count = 15;
      this->m_numRegulationPreferences = m_count;
      for ( i = 0; i < this->m_numRegulationPreferences; ++i )
      {
        bdJSONDeserializer::bdJSONDeserializer(&json);
        if ( bdJSONDeserializer::getObject(&value, i, &json) )
          v5 = v5 && bdRegulationPreference::deserializeFromJSON(&this->m_regulationPreferences[(unsigned __int64)i], &json);
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

