/*
==============
bdRegulation::reset
==============
*/

void __fastcall bdRegulation::reset(bdRegulation *this)
{
  ?reset@bdRegulation@@QEAAXXZ(this);
}

/*
==============
bdRegulation::bdRegulation
==============
*/

void __fastcall bdRegulation::bdRegulation(bdRegulation *this)
{
  ??0bdRegulation@@QEAA@XZ(this);
}

/*
==============
bdRegulation::serializeToJSON
==============
*/

bool __fastcall bdRegulation::serializeToJSON(bdRegulation *this, bdJSONSerializer *json)
{
  return ?serializeToJSON@bdRegulation@@QEBA_NPEAVbdJSONSerializer@@@Z(this, json);
}

/*
==============
bdRegulation::deserializeFromJSON
==============
*/

bool __fastcall bdRegulation::deserializeFromJSON(bdRegulation *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdRegulation@@QEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdRegulation::~bdRegulation
==============
*/

void __fastcall bdRegulation::~bdRegulation(bdRegulation *this)
{
  ??1bdRegulation@@QEAA@XZ(this);
}

/*
==============
bdRegulation::bdRegulation
==============
*/
void bdRegulation::bdRegulation(bdRegulation *this)
{
  this->m_version = 0i64;
  *(_QWORD *)this->m_name = 0i64;
  *(_WORD *)&this->m_name[8] = 0;
}

/*
==============
bdRegulation::~bdRegulation
==============
*/
void bdRegulation::~bdRegulation(bdRegulation *this)
{
  ;
}

/*
==============
bdRegulation::deserializeFromJSON
==============
*/
bool bdRegulation::deserializeFromJSON(bdRegulation *this, bdJSONDeserializer *json)
{
  if ( json->m_type != BD_JSON_OBJECT )
    return json->m_type == BD_JSON_OBJECT;
  return bdJSONDeserializer::getString(json, (const char *const)&stru_143C9A1A4, this->m_name, 0xAu) && bdJSONDeserializer::getUInt64(json, "version", &this->m_version);
}

/*
==============
bdRegulation::reset
==============
*/
void bdRegulation::reset(bdRegulation *this)
{
  this->m_version = 0i64;
  *(_QWORD *)this->m_name = 0i64;
  *(_WORD *)&this->m_name[8] = 0;
}

/*
==============
bdRegulation::serializeToJSON
==============
*/
bool bdRegulation::serializeToJSON(bdRegulation *this, bdJSONSerializer *json)
{
  return bdJSONSerializer::writeBeginObject(json) && bdJSONSerializer::writeString(json, (const char *)&stru_143C9A1A4, this->m_name) && bdJSONSerializer::writeUInt64(json, "version", this->m_version, 0) && bdJSONSerializer::writeEndObject(json);
}

