/*
==============
bdUnoTermsOfService::deserializeFromJSON
==============
*/

bool __fastcall bdUnoTermsOfService::deserializeFromJSON(bdUnoTermsOfService *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdUnoTermsOfService@@UEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdUnoTermsOfService::bdUnoTermsOfService
==============
*/

void __fastcall bdUnoTermsOfService::bdUnoTermsOfService(bdUnoTermsOfService *this, const char *client)
{
  ??0bdUnoTermsOfService@@QEAA@PEBD@Z(this, client);
}

/*
==============
bdUnoTermsOfService::serializeToJSON
==============
*/

bool __fastcall bdUnoTermsOfService::serializeToJSON(bdUnoTermsOfService *this, bdJSONSerializer *json)
{
  return ?serializeToJSON@bdUnoTermsOfService@@QEBA_NPEAVbdJSONSerializer@@@Z(this, json);
}

/*
==============
bdUnoTermsOfService::~bdUnoTermsOfService
==============
*/

void __fastcall bdUnoTermsOfService::~bdUnoTermsOfService(bdUnoTermsOfService *this)
{
  ??1bdUnoTermsOfService@@UEAA@XZ(this);
}

/*
==============
bdUnoTermsOfService::bdUnoTermsOfService
==============
*/
void bdUnoTermsOfService::bdUnoTermsOfService(bdUnoTermsOfService *this, const char *client)
{
  this->__vftable = (bdUnoTermsOfService_vtbl *)&bdUnoTermsOfService::`vftable';
  this->m_version = 0;
  this->m_type = BD_TOS_TYPE_PLAIN;
  memset_0(this->m_dateAccepted, 0, 0x19045ui64);
  *(_QWORD *)this->m_client = 0i64;
  *(_QWORD *)&this->m_client[8] = 0i64;
  *(_QWORD *)&this->m_client[16] = 0i64;
  *(_QWORD *)&this->m_client[24] = 0i64;
  *(_QWORD *)&this->m_client[32] = 0i64;
  *(_QWORD *)&this->m_client[40] = 0i64;
  *(_QWORD *)&this->m_client[48] = 0i64;
  *(_QWORD *)&this->m_client[56] = 0i64;
  bdStrlcpy(this->m_client, client, 0x40ui64);
}

/*
==============
bdUnoTermsOfService::~bdUnoTermsOfService
==============
*/
void bdUnoTermsOfService::~bdUnoTermsOfService(bdUnoTermsOfService *this)
{
  this->__vftable = (bdUnoTermsOfService_vtbl *)&bdSingleIdentityJSONDeserializable::`vftable';
}

/*
==============
bdUnoTermsOfService::deserializeFromJSON
==============
*/
char bdUnoTermsOfService::deserializeFromJSON(bdUnoTermsOfService *this, bdJSONDeserializer *json)
{
  bool UInt32; 
  bool hasKey; 
  bdJSONDeserializer *v6; 
  char *m_client; 

  UInt32 = json->m_type == BD_JSON_OBJECT;
  if ( json->m_type != BD_JSON_OBJECT )
    goto LABEL_32;
  hasKey = bdJSONDeserializer::hasKey(json, this->m_client);
  v6 = json;
  if ( hasKey )
  {
    m_client = this->m_client;
  }
  else
  {
    if ( !bdJSONDeserializer::hasKey(json, "version") )
      goto LABEL_7;
    m_client = "version";
    v6 = json;
  }
  UInt32 = bdJSONDeserializer::getUInt32(v6, m_client, &this->m_version);
LABEL_7:
  if ( bdJSONDeserializer::hasKey(json, "dateAccepted") )
    UInt32 = UInt32 && bdJSONDeserializer::getString(json, "dateAccepted", this->m_dateAccepted, 0x15u);
  if ( bdJSONDeserializer::hasKey(json, "locale") )
    UInt32 = UInt32 && bdJSONDeserializer::getString(json, "locale", this->m_locale, 6u);
  if ( bdJSONDeserializer::hasKey(json, "created") )
    UInt32 = UInt32 && bdJSONDeserializer::getString(json, "created", this->m_created, 0x15u);
  if ( bdJSONDeserializer::hasKey(json, "updated") )
    UInt32 = UInt32 && bdJSONDeserializer::getString(json, "updated", this->m_updated, 0x15u);
  if ( bdJSONDeserializer::hasKey(json, "content") )
  {
    if ( UInt32 && bdJSONDeserializer::getString(json, "content", this->m_content, 0x19000u) )
      return 1;
    UInt32 = 0;
    goto LABEL_33;
  }
LABEL_32:
  if ( !UInt32 )
LABEL_33:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUnoTermsOfService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdunotermsofservice.cpp", "bdUnoTermsOfService::deserializeFromJSON", 0x5Du, "Unable to parse JSON response for bdUnoTermsOfService");
  return UInt32;
}

/*
==============
bdUnoTermsOfService::serializeToJSON
==============
*/
bool bdUnoTermsOfService::serializeToJSON(bdUnoTermsOfService *this, bdJSONSerializer *json)
{
  return json && bdJSONSerializer::writeBeginObject(json, this->m_client) && bdJSONSerializer::writeUInt32(json, "version", this->m_version, 0) && bdJSONSerializer::writeEndObject(json);
}

