/*
==============
bdRenameCrossPlatformUserResponse::getErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdRenameCrossPlatformUserResponse::getErrorCode(bdRenameCrossPlatformUserResponse *this)
{
  return ?getErrorCode@bdRenameCrossPlatformUserResponse@@QEBA?AW4bdLobbyErrorCode@@XZ(this);
}

/*
==============
bdRenameCrossPlatformUserResponse::bdRenameCrossPlatformUserResponse
==============
*/

void __fastcall bdRenameCrossPlatformUserResponse::bdRenameCrossPlatformUserResponse(bdRenameCrossPlatformUserResponse *this)
{
  ??0bdRenameCrossPlatformUserResponse@@QEAA@XZ(this);
}

/*
==============
bdRenameCrossPlatformUserResponse::handleReplyError
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdRenameCrossPlatformUserResponse::handleReplyError(bdRenameCrossPlatformUserResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplyError@bdRenameCrossPlatformUserResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdRenameCrossPlatformUserResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdRenameCrossPlatformUserResponse::handleReplySuccess(bdRenameCrossPlatformUserResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdRenameCrossPlatformUserResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdRenameCrossPlatformUserResponse::bdRenameCrossPlatformUserResponse
==============
*/
void bdRenameCrossPlatformUserResponse::bdRenameCrossPlatformUserResponse(bdRenameCrossPlatformUserResponse *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->m_errorCode = BD_NO_ERROR;
  this->__vftable = (bdRenameCrossPlatformUserResponse_vtbl *)&bdRenameCrossPlatformUserResponse::`vftable';
}

/*
==============
bdRenameCrossPlatformUserResponse::getErrorCode
==============
*/
__int64 bdRenameCrossPlatformUserResponse::getErrorCode(bdRenameCrossPlatformUserResponse *this)
{
  return (unsigned int)this->m_errorCode;
}

/*
==============
bdRenameCrossPlatformUserResponse::handleReplyError
==============
*/
__int64 bdRenameCrossPlatformUserResponse::handleReplyError(bdRenameCrossPlatformUserResponse *this, const bdRESTResponseMessage *reply)
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
    goto LABEL_20;
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
    goto LABEL_20;
  if ( v4 > 0x346AC )
  {
    if ( v4 > 0x38E8C )
    {
      switch ( v4 )
      {
        case 0x3AD68u:
          v8 = BD_UNO_TOS_ALREADY_ACCEPTED;
          goto LABEL_21;
        case 0x3B920u:
          v8 = BD_UNO_EMAIL_ALREADY_EXISTS;
          goto LABEL_21;
        case 0x3D860u:
          v8 = BD_UNO_NO_RENAME_TOKENS;
          goto LABEL_21;
      }
    }
    else
    {
      switch ( v4 )
      {
        case 0x38E8Cu:
          v8 = BD_UNO_TOS_CONTENT_NOT_FOUND;
          goto LABEL_21;
        case 0x35B60u:
          v8 = BD_UNO_UNAUTHORIZED_ACCESS;
          goto LABEL_21;
        case 0x36330u:
          v8 = BD_UNO_INVALID_TOKEN;
          goto LABEL_21;
        case 0x36394u:
          v8 = BD_UMBRELLA_EXPIRED_TOKEN;
          goto LABEL_21;
        case 0x38E28u:
          v8 = BD_UNO_TOS_VERSION_NOT_FOUND;
          goto LABEL_21;
      }
    }
    goto LABEL_47;
  }
  if ( v4 == 214700 )
  {
    v8 = BD_UNO_INVALID_DATE_OF_BIRTH;
    goto LABEL_21;
  }
  if ( v4 > 0x34008 )
  {
    switch ( v4 )
    {
      case 0x343F0u:
        v8 = BD_UNO_FIELD_INVALID;
        goto LABEL_21;
      case 0x34454u:
        v8 = BD_UNO_MISSING_FIELD;
        goto LABEL_21;
      case 0x345E4u:
        v8 = BD_UNO_INVALID_USERNAME;
        goto LABEL_21;
      case 0x34648u:
        v8 = BD_UNO_INVALID_PASSWORD;
        goto LABEL_21;
    }
    goto LABEL_47;
  }
  switch ( v4 )
  {
    case 0x34008u:
      v8 = BD_UNO_INVALID_DATA;
      goto LABEL_21;
    case 1u:
LABEL_48:
      v8 = BD_LOGIN_UNKOWN_ERROR;
      goto LABEL_21;
    case 0x21340u:
      v8 = BD_UNO_MARKETPLACE_ERROR;
      goto LABEL_21;
  }
  if ( v4 != 200000 )
  {
LABEL_47:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::convertUnoErrorCode", 0x1BAu, "Got unexpected code: [%u] during mapping of login error code to lobbyErrorCode in bdLoginUtils.", v4);
    goto LABEL_48;
  }
LABEL_20:
  v8 = BD_UNO_ERROR;
LABEL_21:
  this->m_errorCode = v8;
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return 0i64;
}

/*
==============
bdRenameCrossPlatformUserResponse::handleReplySuccess
==============
*/
__int64 bdRenameCrossPlatformUserResponse::handleReplySuccess(bdRenameCrossPlatformUserResponse *this, const bdRESTResponseMessage *reply)
{
  bool v4; 
  unsigned int v5; 
  bdJSONDeserializer deserializer; 
  bdJSONDeserializer value; 

  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  v4 = bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer) && bdJSONDeserializer::isObject(&deserializer);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  if ( v4 && bdJSONDeserializer::getFieldByKey(&deserializer, "success", &value, 1) )
  {
    this->m_errorCode = BD_NO_ERROR;
    v5 = 1;
  }
  else
  {
    this->m_errorCode = BD_UNO_DESERIALIZATION_FAILURE;
    v5 = 0;
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v5;
}

