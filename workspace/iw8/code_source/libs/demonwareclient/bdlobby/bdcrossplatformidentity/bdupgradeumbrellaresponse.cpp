/*
==============
bdUpgradeUmbrellaResponse::handleReplyError
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdUpgradeUmbrellaResponse::handleReplyError(bdUpgradeUmbrellaResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplyError@bdUpgradeUmbrellaResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdUpgradeUmbrellaResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdUpgradeUmbrellaResponse::handleReplySuccess(bdUpgradeUmbrellaResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdUpgradeUmbrellaResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdUpgradeUmbrellaResponse::bdUpgradeUmbrellaResponse
==============
*/

void __fastcall bdUpgradeUmbrellaResponse::bdUpgradeUmbrellaResponse(bdUpgradeUmbrellaResponse *this)
{
  ??0bdUpgradeUmbrellaResponse@@QEAA@XZ(this);
}

/*
==============
bdUpgradeUmbrellaResponse::getErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdUpgradeUmbrellaResponse::getErrorCode(bdUpgradeUmbrellaResponse *this)
{
  return ?getErrorCode@bdUpgradeUmbrellaResponse@@QEBA?AW4bdLobbyErrorCode@@XZ(this);
}

/*
==============
bdUpgradeUmbrellaResponse::bdUpgradeUmbrellaResponse
==============
*/
void bdUpgradeUmbrellaResponse::bdUpgradeUmbrellaResponse(bdUpgradeUmbrellaResponse *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->m_errorCode = BD_NO_ERROR;
  this->__vftable = (bdUpgradeUmbrellaResponse_vtbl *)&bdUpgradeUmbrellaResponse::`vftable';
}

/*
==============
bdUpgradeUmbrellaResponse::getErrorCode
==============
*/
__int64 bdUpgradeUmbrellaResponse::getErrorCode(bdUpgradeUmbrellaResponse *this)
{
  return (unsigned int)this->m_errorCode;
}

/*
==============
bdUpgradeUmbrellaResponse::handleReplyError
==============
*/
__int64 bdUpgradeUmbrellaResponse::handleReplyError(bdUpgradeUmbrellaResponse *this, const bdRESTResponseMessage *reply)
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
bdUpgradeUmbrellaResponse::handleReplySuccess
==============
*/
__int64 bdUpgradeUmbrellaResponse::handleReplySuccess(bdUpgradeUmbrellaResponse *this, const bdRESTResponseMessage *reply)
{
  bool v4; 
  unsigned int v5; 
  bdJSONDeserializer deserializer; 
  bdJSONDeserializer value; 

  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  v4 = bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer) && bdJSONDeserializer::isObject(&deserializer);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  if ( v4 && bdJSONDeserializer::getFieldByKey(&deserializer, "umbrellaID", &value, 1) )
  {
    this->m_errorCode = BD_NO_ERROR;
    v5 = 1;
  }
  else
  {
    this->m_errorCode = BD_UMBRELLA_DESERIALIZATION_FAILURE;
    v5 = 0;
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v5;
}

