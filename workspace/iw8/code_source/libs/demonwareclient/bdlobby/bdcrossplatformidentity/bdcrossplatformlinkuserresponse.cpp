/*
==============
bdCrossPlatformLinkUserResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdCrossPlatformLinkUserResponse::handleReplySuccess(bdCrossPlatformLinkUserResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdCrossPlatformLinkUserResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdCrossPlatformLinkUserResponse::handleReplyError
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdCrossPlatformLinkUserResponse::handleReplyError(bdCrossPlatformLinkUserResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplyError@bdCrossPlatformLinkUserResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdCrossPlatformLinkUserResponse::bdCrossPlatformLinkUserResponse
==============
*/

void __fastcall bdCrossPlatformLinkUserResponse::bdCrossPlatformLinkUserResponse(bdCrossPlatformLinkUserResponse *this)
{
  ??0bdCrossPlatformLinkUserResponse@@QEAA@XZ(this);
}

/*
==============
bdCrossPlatformLinkUserResponse::getUmbrellaID
==============
*/

unsigned __int64 __fastcall bdCrossPlatformLinkUserResponse::getUmbrellaID(bdCrossPlatformLinkUserResponse *this)
{
  return ?getUmbrellaID@bdCrossPlatformLinkUserResponse@@QEAA_KXZ(this);
}

/*
==============
bdCrossPlatformLinkUserResponse::getErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdCrossPlatformLinkUserResponse::getErrorCode(bdCrossPlatformLinkUserResponse *this)
{
  return ?getErrorCode@bdCrossPlatformLinkUserResponse@@QEBA?AW4bdLobbyErrorCode@@XZ(this);
}

/*
==============
bdCrossPlatformLinkUserResponse::bdCrossPlatformLinkUserResponse
==============
*/
void bdCrossPlatformLinkUserResponse::bdCrossPlatformLinkUserResponse(bdCrossPlatformLinkUserResponse *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdCrossPlatformLinkUserResponse_vtbl *)&bdCrossPlatformLinkUserResponse::`vftable';
  this->m_umbrellaID = 0i64;
  this->m_errorCode = BD_NO_ERROR;
}

/*
==============
bdCrossPlatformLinkUserResponse::getErrorCode
==============
*/
__int64 bdCrossPlatformLinkUserResponse::getErrorCode(bdCrossPlatformLinkUserResponse *this)
{
  return (unsigned int)this->m_errorCode;
}

/*
==============
bdCrossPlatformLinkUserResponse::getUmbrellaID
==============
*/
unsigned __int64 bdCrossPlatformLinkUserResponse::getUmbrellaID(bdCrossPlatformLinkUserResponse *this)
{
  return this->m_umbrellaID;
}

/*
==============
bdCrossPlatformLinkUserResponse::handleReplyError
==============
*/
__int64 bdCrossPlatformLinkUserResponse::handleReplyError(bdCrossPlatformLinkUserResponse *this, const bdRESTResponseMessage *reply)
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
bdCrossPlatformLinkUserResponse::handleReplySuccess
==============
*/
__int64 bdCrossPlatformLinkUserResponse::handleReplySuccess(bdCrossPlatformLinkUserResponse *this, const bdRESTResponseMessage *reply)
{
  unsigned int v4; 
  bdJSONDeserializer deserializer; 

  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  if ( bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer) && bdJSONDeserializer::getUInt64(&deserializer, "umbrellaID", &this->m_umbrellaID) )
  {
    this->m_errorCode = BD_NO_ERROR;
    v4 = 1;
  }
  else
  {
    this->m_errorCode = BD_UMBRELLA_DESERIALIZATION_FAILURE;
    v4 = 0;
  }
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v4;
}

