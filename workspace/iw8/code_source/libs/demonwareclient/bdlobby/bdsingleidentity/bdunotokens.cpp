/*
==============
bdUnoTokens::bdUnoTokens
==============
*/

void __fastcall bdUnoTokens::bdUnoTokens(bdUnoTokens *this)
{
  ??0bdUnoTokens@@QEAA@XZ(this);
}

/*
==============
bdUnoTokens::deserializeFromJSON
==============
*/

bool __fastcall bdUnoTokens::deserializeFromJSON(bdUnoTokens *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdUnoTokens@@UEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdUnoTokens::~bdUnoTokens
==============
*/

void __fastcall bdUnoTokens::~bdUnoTokens(bdUnoTokens *this)
{
  ??1bdUnoTokens@@UEAA@XZ(this);
}

/*
==============
bdUnoTokens::bdUnoTokens
==============
*/
void bdUnoTokens::bdUnoTokens(bdUnoTokens *this)
{
  this->__vftable = (bdUnoTokens_vtbl *)&bdUnoTokens::`vftable';
  this->m_accessTokenExpiry = 0i64;
  this->m_refreshTokenExpiry = 0i64;
  memset_0(this->m_accessToken, 0, sizeof(this->m_accessToken));
  memset_0(this->m_refreshToken, 0, sizeof(this->m_refreshToken));
}

/*
==============
bdUnoTokens::~bdUnoTokens
==============
*/
void bdUnoTokens::~bdUnoTokens(bdUnoTokens *this)
{
  this->__vftable = (bdUnoTokens_vtbl *)&bdSingleIdentityJSONDeserializable::`vftable';
}

/*
==============
bdUnoTokens::deserializeFromJSON
==============
*/
char bdUnoTokens::deserializeFromJSON(bdUnoTokens *this, bdJSONDeserializer *json)
{
  bool v4; 

  v4 = json->m_type == BD_JSON_OBJECT;
  if ( json->m_type == BD_JSON_OBJECT )
  {
    v4 = bdJSONDeserializer::getString(json, "accessToken", this->m_accessToken, 0x400u) && bdJSONDeserializer::getUInt64(json, "expires", &this->m_accessTokenExpiry);
    if ( bdJSONDeserializer::hasKey(json, "refreshToken") )
    {
      if ( v4 && bdJSONDeserializer::getString(json, "refreshToken", this->m_refreshToken, 0x400u) && bdJSONDeserializer::getUInt64(json, "refreshTokenExpires", &this->m_refreshTokenExpiry) )
        return 1;
      v4 = 0;
      goto LABEL_13;
    }
  }
  if ( !v4 )
LABEL_13:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUnoTokens", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdunotokens.cpp", "bdUnoTokens::deserializeFromJSON", 0x2Bu, "Unable to parse JSON response for bdUnoTokens");
  return v4;
}

