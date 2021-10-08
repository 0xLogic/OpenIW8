/*
==============
bdUmbrellaCrossplayAccessInfo::deserializeFromJSON
==============
*/

bool __fastcall bdUmbrellaCrossplayAccessInfo::deserializeFromJSON(bdUmbrellaCrossplayAccessInfo *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdUmbrellaCrossplayAccessInfo@@UEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdUmbrellaCrossplayAccessInfo::operator==
==============
*/

bool __fastcall bdUmbrellaCrossplayAccessInfo::operator==(bdUmbrellaCrossplayAccessInfo *this, const bdUmbrellaCrossplayAccessInfo *other)
{
  return ??8bdUmbrellaCrossplayAccessInfo@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdUmbrellaCrossplayAccessInfo::bdUmbrellaCrossplayAccessInfo
==============
*/

void __fastcall bdUmbrellaCrossplayAccessInfo::bdUmbrellaCrossplayAccessInfo(bdUmbrellaCrossplayAccessInfo *this)
{
  ??0bdUmbrellaCrossplayAccessInfo@@QEAA@XZ(this);
}

/*
==============
bdUmbrellaCrossplayAccessInfo::~bdUmbrellaCrossplayAccessInfo
==============
*/

void __fastcall bdUmbrellaCrossplayAccessInfo::~bdUmbrellaCrossplayAccessInfo(bdUmbrellaCrossplayAccessInfo *this)
{
  ??1bdUmbrellaCrossplayAccessInfo@@UEAA@XZ(this);
}

/*
==============
bdUmbrellaCrossplayAccessInfo::bdUmbrellaCrossplayAccessInfo
==============
*/
void bdUmbrellaCrossplayAccessInfo::bdUmbrellaCrossplayAccessInfo(bdUmbrellaCrossplayAccessInfo *this)
{
  this->__vftable = (bdUmbrellaCrossplayAccessInfo_vtbl *)&bdUmbrellaCrossplayAccessInfo::`vftable';
  this->m_tokenExpiry = 0i64;
  this->m_tokenIssuedAt = 0i64;
  memset_0(this->m_accessToken, 0, sizeof(this->m_accessToken));
}

/*
==============
bdUmbrellaCrossplayAccessInfo::~bdUmbrellaCrossplayAccessInfo
==============
*/
void bdUmbrellaCrossplayAccessInfo::~bdUmbrellaCrossplayAccessInfo(bdUmbrellaCrossplayAccessInfo *this)
{
  this->__vftable = (bdUmbrellaCrossplayAccessInfo_vtbl *)&bdSingleIdentityJSONDeserializable::`vftable';
}

/*
==============
bdUmbrellaCrossplayAccessInfo::operator==
==============
*/
bool bdUmbrellaCrossplayAccessInfo::operator==(bdUmbrellaCrossplayAccessInfo *this, const bdUmbrellaCrossplayAccessInfo *other)
{
  char *m_accessToken; 
  signed __int64 v4; 
  int v5; 
  int v6; 

  if ( this->m_tokenExpiry != other->m_tokenExpiry )
    return 0;
  m_accessToken = this->m_accessToken;
  v4 = (char *)other - (char *)this;
  do
  {
    v5 = (unsigned __int8)m_accessToken[v4];
    v6 = (unsigned __int8)*m_accessToken - v5;
    if ( v6 )
      break;
    ++m_accessToken;
  }
  while ( v5 );
  return !v6 && this->m_tokenIssuedAt == other->m_tokenIssuedAt;
}

/*
==============
bdUmbrellaCrossplayAccessInfo::deserializeFromJSON
==============
*/
char bdUmbrellaCrossplayAccessInfo::deserializeFromJSON(bdUmbrellaCrossplayAccessInfo *this, bdJSONDeserializer *json)
{
  bool v4; 

  v4 = json->m_type == BD_JSON_OBJECT;
  if ( json->m_type == BD_JSON_OBJECT )
  {
    if ( bdJSONDeserializer::getString(json, "accessToken", this->m_accessToken, 0x1000u) && bdJSONDeserializer::getUInt64(json, "expires", &this->m_tokenExpiry) && bdJSONDeserializer::getUInt64(json, "accessIssuedAt", &this->m_tokenIssuedAt) )
      return 1;
    v4 = 0;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUmbrellaCrossplayAccessInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrellacrossplayaccessinfo.cpp", "bdUmbrellaCrossplayAccessInfo::deserializeFromJSON", 0x2Fu, "Unable to parse JSON response for bdUmbrellaCrossplayAccessInfo");
  return v4;
}

