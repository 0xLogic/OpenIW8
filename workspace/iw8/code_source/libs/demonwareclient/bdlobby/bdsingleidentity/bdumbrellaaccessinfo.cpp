/*
==============
bdUmbrellaAccessInfo::deserializeFromJSON
==============
*/

bool __fastcall bdUmbrellaAccessInfo::deserializeFromJSON(bdUmbrellaAccessInfo *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdUmbrellaAccessInfo@@UEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdUmbrellaAccessInfo::bdUmbrellaAccessInfo
==============
*/

void __fastcall bdUmbrellaAccessInfo::bdUmbrellaAccessInfo(bdUmbrellaAccessInfo *this)
{
  ??0bdUmbrellaAccessInfo@@QEAA@XZ(this);
}

/*
==============
bdUmbrellaAccessInfo::~bdUmbrellaAccessInfo
==============
*/

void __fastcall bdUmbrellaAccessInfo::~bdUmbrellaAccessInfo(bdUmbrellaAccessInfo *this)
{
  ??1bdUmbrellaAccessInfo@@UEAA@XZ(this);
}

/*
==============
bdUmbrellaAccessInfo::operator==
==============
*/

bool __fastcall bdUmbrellaAccessInfo::operator==(bdUmbrellaAccessInfo *this, const bdUmbrellaAccessInfo *other)
{
  return ??8bdUmbrellaAccessInfo@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdUmbrellaAccessInfo::bdUmbrellaAccessInfo
==============
*/
void bdUmbrellaAccessInfo::bdUmbrellaAccessInfo(bdUmbrellaAccessInfo *this)
{
  this->__vftable = (bdUmbrellaAccessInfo_vtbl *)&bdUmbrellaAccessInfo::`vftable';
  this->m_umbrellaID = 0i64;
  this->m_tokenExpiry = 0i64;
  memset_0(this->m_accessToken, 0, sizeof(this->m_accessToken));
}

/*
==============
bdUmbrellaAccessInfo::~bdUmbrellaAccessInfo
==============
*/
void bdUmbrellaAccessInfo::~bdUmbrellaAccessInfo(bdUmbrellaAccessInfo *this)
{
  this->__vftable = (bdUmbrellaAccessInfo_vtbl *)&bdSingleIdentityJSONDeserializable::`vftable';
}

/*
==============
bdUmbrellaAccessInfo::operator==
==============
*/
bool bdUmbrellaAccessInfo::operator==(bdUmbrellaAccessInfo *this, const bdUmbrellaAccessInfo *other)
{
  char *m_accessToken; 
  signed __int64 v3; 
  int v4; 
  int v5; 

  if ( this->m_umbrellaID != other->m_umbrellaID || this->m_tokenExpiry != other->m_tokenExpiry )
    return 0;
  m_accessToken = this->m_accessToken;
  v3 = (char *)other - (char *)this;
  do
  {
    v4 = (unsigned __int8)m_accessToken[v3];
    v5 = (unsigned __int8)*m_accessToken - v4;
    if ( v5 )
      break;
    ++m_accessToken;
  }
  while ( v4 );
  return !v5;
}

/*
==============
bdUmbrellaAccessInfo::deserializeFromJSON
==============
*/
char bdUmbrellaAccessInfo::deserializeFromJSON(bdUmbrellaAccessInfo *this, bdJSONDeserializer *json)
{
  bool v4; 

  v4 = json->m_type == BD_JSON_OBJECT;
  if ( json->m_type == BD_JSON_OBJECT )
  {
    if ( bdJSONDeserializer::getString(json, "accessToken", this->m_accessToken, 0x1000u) && bdJSONDeserializer::getUInt64(json, "expires", &this->m_tokenExpiry) && bdJSONDeserializer::getUInt64(json, "umbrellaID", &this->m_umbrellaID) )
      return 1;
    v4 = 0;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUmbrellaAccessInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrellaaccessinfo.cpp", "bdUmbrellaAccessInfo::deserializeFromJSON", 0x2Fu, "Unable to parse JSON response for bdUmbrellaAccessInfo");
  return v4;
}

