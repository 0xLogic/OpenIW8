/*
==============
bdABTestingClientTreatment::bdABTestingClientTreatment
==============
*/

void __fastcall bdABTestingClientTreatment::bdABTestingClientTreatment(bdABTestingClientTreatment *this, char *modifiers, unsigned int maxModifiersSize)
{
  ??0bdABTestingClientTreatment@@QEAA@PEADI@Z(this, modifiers, maxModifiersSize);
}

/*
==============
bdABTestingClientTreatment::bdABTestingClientTreatment
==============
*/

void __fastcall bdABTestingClientTreatment::bdABTestingClientTreatment(bdABTestingClientTreatment *this)
{
  ??0bdABTestingClientTreatment@@QEAA@XZ(this);
}

/*
==============
bdABTestingClientTreatment::deserializeFromJSON
==============
*/

bool __fastcall bdABTestingClientTreatment::deserializeFromJSON(bdABTestingClientTreatment *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdABTestingClientTreatment@@QEAA_NAEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdABTestingClientTreatment::init
==============
*/

void __fastcall bdABTestingClientTreatment::init(bdABTestingClientTreatment *this, char *modifiers, unsigned int maxModifiersSize)
{
  ?init@bdABTestingClientTreatment@@QEAAXPEADI@Z(this, modifiers, maxModifiersSize);
}

/*
==============
bdABTestingClientTreatment::reset
==============
*/

void __fastcall bdABTestingClientTreatment::reset(bdABTestingClientTreatment *this)
{
  ?reset@bdABTestingClientTreatment@@QEAAXXZ(this);
}

/*
==============
bdABTestingClientTreatment::bdABTestingClientTreatment
==============
*/
void bdABTestingClientTreatment::bdABTestingClientTreatment(bdABTestingClientTreatment *this, char *modifiers, unsigned int maxModifiersSize)
{
  this->m_modifiers = modifiers;
  *(_QWORD *)&this->m_startsInSeconds = 0i64;
  this->m_maxModifiersSize = maxModifiersSize;
}

/*
==============
bdABTestingClientTreatment::bdABTestingClientTreatment
==============
*/
void bdABTestingClientTreatment::bdABTestingClientTreatment(bdABTestingClientTreatment *this)
{
  this->m_modifiers = NULL;
  *(_QWORD *)&this->m_endsInSeconds = 0i64;
  this->m_startsInSeconds = 0;
}

/*
==============
bdABTestingClientTreatment::deserializeFromJSON
==============
*/
bool bdABTestingClientTreatment::deserializeFromJSON(bdABTestingClientTreatment *this, bdJSONDeserializer *json)
{
  return bdJSONDeserializer::getUInt32(json, "startsIn", &this->m_startsInSeconds) && bdJSONDeserializer::getUInt32(json, "endsIn", &this->m_endsInSeconds) && bdJSONDeserializer::getString(json, "modifiers", this->m_modifiers, this->m_maxModifiersSize);
}

/*
==============
bdABTestingClientTreatment::init
==============
*/
void bdABTestingClientTreatment::init(bdABTestingClientTreatment *this, char *modifiers, unsigned int maxModifiersSize)
{
  this->m_modifiers = modifiers;
  *(_QWORD *)&this->m_startsInSeconds = 0i64;
  this->m_maxModifiersSize = maxModifiersSize;
}

/*
==============
bdABTestingClientTreatment::reset
==============
*/
void bdABTestingClientTreatment::reset(bdABTestingClientTreatment *this)
{
  *(_QWORD *)&this->m_startsInSeconds = 0i64;
}

