/*
==============
bdAuthenticateCrossPlatformUserResponse::handleReplyError
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdAuthenticateCrossPlatformUserResponse::handleReplyError(bdAuthenticateCrossPlatformUserResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplyError@bdAuthenticateCrossPlatformUserResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdAuthenticateCrossPlatformUserResponse::bdAuthenticateCrossPlatformUserResponse
==============
*/

void __fastcall bdAuthenticateCrossPlatformUserResponse::bdAuthenticateCrossPlatformUserResponse(bdAuthenticateCrossPlatformUserResponse *this)
{
  ??0bdAuthenticateCrossPlatformUserResponse@@QEAA@XZ(this);
}

/*
==============
bdAuthenticateCrossPlatformUserResponse::getRereshToken
==============
*/

const char *__fastcall bdAuthenticateCrossPlatformUserResponse::getRereshToken(bdAuthenticateCrossPlatformUserResponse *this)
{
  return ?getRereshToken@bdAuthenticateCrossPlatformUserResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdAuthenticateCrossPlatformUserResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdAuthenticateCrossPlatformUserResponse::handleReplySuccess(bdAuthenticateCrossPlatformUserResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdAuthenticateCrossPlatformUserResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdAuthenticateCrossPlatformUserResponse::getIDToken
==============
*/

const char *__fastcall bdAuthenticateCrossPlatformUserResponse::getIDToken(bdAuthenticateCrossPlatformUserResponse *this)
{
  return ?getIDToken@bdAuthenticateCrossPlatformUserResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdAuthenticateCrossPlatformUserResponse::getAccessToken
==============
*/

const char *__fastcall bdAuthenticateCrossPlatformUserResponse::getAccessToken(bdAuthenticateCrossPlatformUserResponse *this)
{
  return ?getAccessToken@bdAuthenticateCrossPlatformUserResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdAuthenticateCrossPlatformUserResponse::getUnoID
==============
*/

unsigned __int64 __fastcall bdAuthenticateCrossPlatformUserResponse::getUnoID(bdAuthenticateCrossPlatformUserResponse *this)
{
  return ?getUnoID@bdAuthenticateCrossPlatformUserResponse@@QEAA_KXZ(this);
}

/*
==============
bdAuthenticateCrossPlatformUserResponse::getErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdAuthenticateCrossPlatformUserResponse::getErrorCode(bdAuthenticateCrossPlatformUserResponse *this)
{
  return ?getErrorCode@bdAuthenticateCrossPlatformUserResponse@@QEBA?AW4bdLobbyErrorCode@@XZ(this);
}

/*
==============
bdAuthenticateCrossPlatformUserResponse::bdAuthenticateCrossPlatformUserResponse
==============
*/
void bdAuthenticateCrossPlatformUserResponse::bdAuthenticateCrossPlatformUserResponse(bdAuthenticateCrossPlatformUserResponse *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdAuthenticateCrossPlatformUserResponse_vtbl *)&bdAuthenticateCrossPlatformUserResponse::`vftable';
  this->m_unoID = 0i64;
  this->m_errorCode = BD_NO_ERROR;
  memset_0(this->m_unoIDToken, 0, 0x2400ui64);
}

/*
==============
bdAuthenticateCrossPlatformUserResponse::getAccessToken
==============
*/
char *bdAuthenticateCrossPlatformUserResponse::getAccessToken(bdAuthenticateCrossPlatformUserResponse *this)
{
  return this->m_accessToken;
}

/*
==============
bdAuthenticateCrossPlatformUserResponse::getErrorCode
==============
*/
__int64 bdAuthenticateCrossPlatformUserResponse::getErrorCode(bdAuthenticateCrossPlatformUserResponse *this)
{
  return (unsigned int)this->m_errorCode;
}

/*
==============
bdAuthenticateCrossPlatformUserResponse::getIDToken
==============
*/
char *bdAuthenticateCrossPlatformUserResponse::getIDToken(bdAuthenticateCrossPlatformUserResponse *this)
{
  return this->m_unoIDToken;
}

/*
==============
bdAuthenticateCrossPlatformUserResponse::getRereshToken
==============
*/
char *bdAuthenticateCrossPlatformUserResponse::getRereshToken(bdAuthenticateCrossPlatformUserResponse *this)
{
  return this->m_refreshToken;
}

/*
==============
bdAuthenticateCrossPlatformUserResponse::getUnoID
==============
*/
unsigned __int64 bdAuthenticateCrossPlatformUserResponse::getUnoID(bdAuthenticateCrossPlatformUserResponse *this)
{
  return this->m_unoID;
}

/*
==============
bdAuthenticateCrossPlatformUserResponse::handleReplyError
==============
*/
__int64 bdAuthenticateCrossPlatformUserResponse::handleReplyError(bdAuthenticateCrossPlatformUserResponse *this, const bdRESTResponseMessage *reply)
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
bdAuthenticateCrossPlatformUserResponse::handleReplySuccess
==============
*/
__int64 bdAuthenticateCrossPlatformUserResponse::handleReplySuccess(bdAuthenticateCrossPlatformUserResponse *this, const bdRESTResponseMessage *reply)
{
  char v4; 
  unsigned int v5; 
  bdJSONDeserializer value; 
  bdJSONDeserializer deserializer; 

  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  if ( bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer) && bdJSONDeserializer::hasKey(&deserializer, "unoID") && bdJSONDeserializer::getUInt64(&deserializer, "unoID", &this->m_unoID) && (!bdJSONDeserializer::hasKey(&deserializer, "tokens") || ((bdJSONDeserializer::bdJSONDeserializer(&value), !bdJSONDeserializer::getObject(&deserializer, "tokens", &value)) || !bdJSONDeserializer::hasKey(&value, "IDToken") || !bdJSONDeserializer::getString(&value, "IDToken", this->m_unoIDToken, 0x400u) || !bdJSONDeserializer::hasKey(&value, "accessToken") || !bdJSONDeserializer::getString(&value, "accessToken", this->m_accessToken, 0x1000u) || !bdJSONDeserializer::hasKey(&value, "refreshToken") || !bdJSONDeserializer::getString(&value, "refreshToken", this->m_refreshToken, 0x1000u) ? (v4 = 0) : (v4 = 1), bdJSONDeserializer::~bdJSONDeserializer(&value), v4)) )
  {
    this->m_errorCode = BD_NO_ERROR;
    v5 = 1;
  }
  else
  {
    this->m_errorCode = BD_UNO_DESERIALIZATION_FAILURE;
    v5 = 0;
  }
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v5;
}

