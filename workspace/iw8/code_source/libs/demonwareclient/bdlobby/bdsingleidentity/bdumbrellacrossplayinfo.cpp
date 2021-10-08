/*
==============
bdUmbrellaCrossplayInfo::resetRefreshTimer
==============
*/

void __fastcall bdUmbrellaCrossplayInfo::resetRefreshTimer(bdUmbrellaCrossplayInfo *this, const bdUmbrellaCrossplayAccessInfo *accessInfo)
{
  ?resetRefreshTimer@bdUmbrellaCrossplayInfo@@QEAAXAEBVbdUmbrellaCrossplayAccessInfo@@@Z(this, accessInfo);
}

/*
==============
bdUmbrellaCrossplayInfo::~bdUmbrellaCrossplayInfo
==============
*/

void __fastcall bdUmbrellaCrossplayInfo::~bdUmbrellaCrossplayInfo(bdUmbrellaCrossplayInfo *this)
{
  ??1bdUmbrellaCrossplayInfo@@UEAA@XZ(this);
}

/*
==============
bdUmbrellaCrossplayInfo::bdUmbrellaCrossplayInfo
==============
*/

void __fastcall bdUmbrellaCrossplayInfo::bdUmbrellaCrossplayInfo(bdUmbrellaCrossplayInfo *this)
{
  ??0bdUmbrellaCrossplayInfo@@QEAA@XZ(this);
}

/*
==============
bdUmbrellaCrossplayInfo::operator==
==============
*/

bool __fastcall bdUmbrellaCrossplayInfo::operator==(bdUmbrellaCrossplayInfo *this, const bdUmbrellaCrossplayInfo *other)
{
  return ??8bdUmbrellaCrossplayInfo@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdUmbrellaCrossplayInfo::deserializeFromJSON
==============
*/

bool __fastcall bdUmbrellaCrossplayInfo::deserializeFromJSON(bdUmbrellaCrossplayInfo *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdUmbrellaCrossplayInfo@@UEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdUmbrellaCrossplayInfo::bdUmbrellaCrossplayInfo
==============
*/
void bdUmbrellaCrossplayInfo::bdUmbrellaCrossplayInfo(bdUmbrellaCrossplayInfo *this)
{
  this->__vftable = (bdUmbrellaCrossplayInfo_vtbl *)&bdUmbrellaCrossplayInfo::`vftable';
  bdUserAccountID::bdUserAccountID(&this->m_userInfo);
  bdUmbrellaCrossplayAccessInfo::bdUmbrellaCrossplayAccessInfo(&this->m_accessInfo);
  this->m_refreshTokenExpiry = 0i64;
  bdStopwatch::bdStopwatch(&this->m_tokenAgeTimer);
  this->m_umbrellaID = 0i64;
  memset_0(this->m_username, 0, sizeof(this->m_username));
  *(_QWORD *)this->m_IVSeedB64Str = 0i64;
  *(_QWORD *)&this->m_IVSeedB64Str[8] = 0i64;
  *(_QWORD *)&this->m_IVSeedB64Str[16] = 0i64;
  *(_QWORD *)&this->m_IVSeedB64Str[24] = 0i64;
  memset_0(this->m_refreshToken, 0, sizeof(this->m_refreshToken));
}

/*
==============
bdUmbrellaCrossplayInfo::~bdUmbrellaCrossplayInfo
==============
*/
void bdUmbrellaCrossplayInfo::~bdUmbrellaCrossplayInfo(bdUmbrellaCrossplayInfo *this)
{
  this->__vftable = (bdUmbrellaCrossplayInfo_vtbl *)&bdUmbrellaCrossplayInfo::`vftable';
  bdUmbrellaCrossplayAccessInfo::~bdUmbrellaCrossplayAccessInfo(&this->m_accessInfo);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)this->m_userInfo.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)this->m_userInfo.gap38);
  this->__vftable = (bdUmbrellaCrossplayInfo_vtbl *)&bdSingleIdentityJSONDeserializable::`vftable';
}

/*
==============
bdUmbrellaCrossplayInfo::operator==
==============
*/
bool bdUmbrellaCrossplayInfo::operator==(bdUmbrellaCrossplayInfo *this, const bdUmbrellaCrossplayInfo *other)
{
  char *m_IVSeedB64Str; 
  signed __int64 v5; 
  int v6; 
  int v7; 
  char *m_username; 
  signed __int64 v9; 
  int v10; 
  int v11; 
  _BYTE *bytes_20; 
  int v13; 
  int v14; 
  char *m_accessToken; 
  int v16; 
  int v17; 
  char *m_refreshToken; 
  int v19; 
  int v20; 

  if ( this->m_userInfo.m_userID != other->m_userInfo.m_userID )
    return 0;
  m_IVSeedB64Str = this->m_IVSeedB64Str;
  v5 = (char *)other - (char *)this;
  do
  {
    v6 = (unsigned __int8)m_IVSeedB64Str[v5];
    v7 = (unsigned __int8)*m_IVSeedB64Str - v6;
    if ( v7 )
      break;
    ++m_IVSeedB64Str;
  }
  while ( v6 );
  if ( v7 || this->m_accessInfo.m_tokenExpiry != other->m_accessInfo.m_tokenExpiry )
    return 0;
  m_username = this->m_username;
  v9 = (char *)other - (char *)this;
  do
  {
    v10 = (unsigned __int8)m_username[v9];
    v11 = (unsigned __int8)*m_username - v10;
    if ( v11 )
      break;
    ++m_username;
  }
  while ( v10 );
  if ( v11 )
    return 0;
  bytes_20 = this->m_userInfo._bytes_20;
  do
  {
    v13 = (unsigned __int8)bytes_20[(char *)other - (char *)this];
    v14 = (unsigned __int8)*bytes_20 - v13;
    if ( v14 )
      break;
    ++bytes_20;
  }
  while ( v13 );
  if ( v14 )
    return 0;
  m_accessToken = this->m_accessInfo.m_accessToken;
  do
  {
    v16 = (unsigned __int8)m_accessToken[(char *)other - (char *)this];
    v17 = (unsigned __int8)*m_accessToken - v16;
    if ( v17 )
      break;
    ++m_accessToken;
  }
  while ( v16 );
  if ( v17 )
    return 0;
  m_refreshToken = this->m_refreshToken;
  do
  {
    v19 = (unsigned __int8)m_refreshToken[(char *)other - (char *)this];
    v20 = (unsigned __int8)*m_refreshToken - v19;
    if ( v20 )
      break;
    ++m_refreshToken;
  }
  while ( v19 );
  return !v20 && this->m_refreshTokenExpiry == other->m_refreshTokenExpiry && this->m_umbrellaID == other->m_umbrellaID;
}

/*
==============
bdUmbrellaCrossplayInfo::deserializeFromJSON
==============
*/
char bdUmbrellaCrossplayInfo::deserializeFromJSON(bdUmbrellaCrossplayInfo *this, bdJSONDeserializer *json)
{
  bool v4; 
  unsigned int v6; 

  v4 = json->m_type == BD_JSON_OBJECT;
  if ( json->m_type == BD_JSON_OBJECT )
  {
    if ( ((unsigned __int8 (__fastcall *)(bdUmbrellaCrossplayAccessInfo *))this->m_accessInfo.deserializeFromJSON)(&this->m_accessInfo) && ContextSerialization::readUserID(json, &this->m_userInfo, "userID", "accountType") && bdJSONDeserializer::getString(json, "username", this->m_username, 0x97u) && bdJSONDeserializer::getString(json, "initialVectorSeed", this->m_IVSeedB64Str, 0x20u) && bdJSONDeserializer::getString(json, "ticket", this->m_authTicketB64, 0xADu) && bdJSONDeserializer::getString(json, "refreshToken", this->m_refreshToken, 0x1000u) && bdJSONDeserializer::getUInt64(json, "refreshTokenExpires", &this->m_refreshTokenExpiry) && bdJSONDeserializer::getUInt64(json, "umbrellaID", &this->m_umbrellaID) )
    {
      bdStopwatch::start(&this->m_tokenAgeTimer);
      v6 = LODWORD(this->m_accessInfo.m_tokenExpiry) - LODWORD(this->m_accessInfo.m_tokenIssuedAt);
      this->m_accessTokenValidilitySeconds = v6;
      bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUmbrellaAccessInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrellacrossplayinfo.cpp", "bdUmbrellaCrossplayInfo::resetRefreshTimer", 0x50u, "Umbrella access token issue time = %llu , validity period = %llu , duration = %d", this->m_accessInfo.m_tokenIssuedAt, this->m_refreshTokenExpiry, v6);
      return 1;
    }
    v4 = 0;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUmbrellaAccessInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrellacrossplayinfo.cpp", "bdUmbrellaCrossplayInfo::deserializeFromJSON", 0x3Du, "Unable to parse JSON response for bdUmbrellaCrossplayInfo");
  return v4;
}

/*
==============
bdUmbrellaCrossplayInfo::resetRefreshTimer
==============
*/
void bdUmbrellaCrossplayInfo::resetRefreshTimer(bdUmbrellaCrossplayInfo *this, const bdUmbrellaCrossplayAccessInfo *accessInfo)
{
  unsigned int v4; 

  bdStopwatch::start(&this->m_tokenAgeTimer);
  v4 = LODWORD(accessInfo->m_tokenExpiry) - LODWORD(accessInfo->m_tokenIssuedAt);
  this->m_accessTokenValidilitySeconds = v4;
  bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUmbrellaAccessInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrellacrossplayinfo.cpp", "bdUmbrellaCrossplayInfo::resetRefreshTimer", 0x50u, "Umbrella access token issue time = %llu , validity period = %llu , duration = %d", accessInfo->m_tokenIssuedAt, this->m_refreshTokenExpiry, v4);
}

