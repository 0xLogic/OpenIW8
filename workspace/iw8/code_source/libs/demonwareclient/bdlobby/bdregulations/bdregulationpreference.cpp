/*
==============
bdRegulationPreference::deserializeFromJSON
==============
*/

bool __fastcall bdRegulationPreference::deserializeFromJSON(bdRegulationPreference *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdRegulationPreference@@QEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdRegulationPreference::bdRegulationPreference
==============
*/

void __fastcall bdRegulationPreference::bdRegulationPreference(bdRegulationPreference *this, bdRegulation *regulation, unsigned __int64 clientMessageVersion, bool value)
{
  ??0bdRegulationPreference@@QEAA@AEAVbdRegulation@@_K_N@Z(this, regulation, clientMessageVersion, value);
}

/*
==============
bdRegulationPreference::~bdRegulationPreference
==============
*/

void __fastcall bdRegulationPreference::~bdRegulationPreference(bdRegulationPreference *this)
{
  ??1bdRegulationPreference@@QEAA@XZ(this);
}

/*
==============
bdRegulationPreference::bdRegulationPreference
==============
*/

void __fastcall bdRegulationPreference::bdRegulationPreference(bdRegulationPreference *this)
{
  ??0bdRegulationPreference@@QEAA@XZ(this);
}

/*
==============
bdRegulationPreference::bdRegulationPreference
==============
*/
void bdRegulationPreference::bdRegulationPreference(bdRegulationPreference *this, bdRegulation *regulation, unsigned __int64 clientMessageVersion, bool value)
{
  this->m_regulation = *regulation;
  this->m_clientMessageVersion = clientMessageVersion;
  this->m_value = value;
}

/*
==============
bdRegulationPreference::bdRegulationPreference
==============
*/
void bdRegulationPreference::bdRegulationPreference(bdRegulationPreference *this)
{
  bdRegulation::bdRegulation(&this->m_regulation);
  this->m_clientMessageVersion = 0i64;
  this->m_value = 0;
  this->m_updatedTimestamp = 0i64;
  *(_QWORD *)this->m_updatedTime = 0i64;
  *(_QWORD *)&this->m_updatedTime[8] = 0i64;
  *(_DWORD *)&this->m_updatedTime[16] = 0;
  this->m_updatedTime[20] = 0;
}

/*
==============
bdRegulationPreference::~bdRegulationPreference
==============
*/

void __fastcall bdRegulationPreference::~bdRegulationPreference(bdRegulationPreference *this)
{
  bdRegulation::~bdRegulation(&this->m_regulation);
}

/*
==============
bdRegulationPreference::deserializeFromJSON
==============
*/
_BOOL8 bdRegulationPreference::deserializeFromJSON(bdRegulationPreference *this, bdJSONDeserializer *json)
{
  bool v4; 
  bool v5; 
  bool v6; 
  char v7; 
  bdJSONDeserializer value; 

  v4 = json->m_type == BD_JSON_OBJECT;
  if ( json->m_type != BD_JSON_OBJECT )
    goto LABEL_21;
  v5 = bdJSONDeserializer::getUInt64(json, "clientMessageVersion", &this->m_clientMessageVersion) && bdJSONDeserializer::getBoolean(json, (const char *const)&stru_143CE7590, &this->m_value) && bdJSONDeserializer::getString(json, "updated", this->m_updatedTime, 0x15u);
  if ( bdJSONDeserializer::hasKey(json, "updatedTimestamp") )
  {
    if ( !v5 )
      goto LABEL_14;
    v6 = !bdJSONDeserializer::getUInt64(json, "updatedTimestamp", &this->m_updatedTimestamp);
  }
  else
  {
    v6 = !v5;
  }
  if ( !v6 && bdJSONDeserializer::hasKey(json, "regulation") )
  {
    v7 = 1;
    goto LABEL_15;
  }
LABEL_14:
  v7 = 0;
LABEL_15:
  bdJSONDeserializer::bdJSONDeserializer(&value);
  v4 = v7 && bdJSONDeserializer::getObject(json, "regulation", &value) && bdRegulation::deserializeFromJSON(&this->m_regulation, &value);
  bdJSONDeserializer::~bdJSONDeserializer(&value);
LABEL_21:
  if ( !v4 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRegulations/bdRegulationPreference", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdregulations\\bdregulationpreference.cpp", "bdRegulationPreference::deserializeFromJSON", 0x38u, "Unable to parse JSON response for bdOptouts");
  return v4;
}

