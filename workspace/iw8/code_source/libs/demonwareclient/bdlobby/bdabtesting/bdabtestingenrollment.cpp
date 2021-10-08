/*
==============
bdABTestingEnrollment::bdABTestingEnrollment
==============
*/

void __fastcall bdABTestingEnrollment::bdABTestingEnrollment(bdABTestingEnrollment *this)
{
  ??0bdABTestingEnrollment@@QEAA@XZ(this);
}

/*
==============
bdABTestingEnrollment::init
==============
*/

void __fastcall bdABTestingEnrollment::init(bdABTestingEnrollment *this, bdABTestingClientTreatment *clientTreatments, unsigned int maxClientTreatments)
{
  ?init@bdABTestingEnrollment@@QEAAXPEAVbdABTestingClientTreatment@@I@Z(this, clientTreatments, maxClientTreatments);
}

/*
==============
bdABTestingEnrollment::deserializeFromJSON
==============
*/

bool __fastcall bdABTestingEnrollment::deserializeFromJSON(bdABTestingEnrollment *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdABTestingEnrollment@@QEAA_NAEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdABTestingEnrollment::bdABTestingEnrollment
==============
*/

void __fastcall bdABTestingEnrollment::bdABTestingEnrollment(bdABTestingEnrollment *this, bdABTestingClientTreatment *clientTreatments, unsigned int maxClientTreatments)
{
  ??0bdABTestingEnrollment@@QEAA@PEAVbdABTestingClientTreatment@@I@Z(this, clientTreatments, maxClientTreatments);
}

/*
==============
bdABTestingEnrollment::reset
==============
*/

void __fastcall bdABTestingEnrollment::reset(bdABTestingEnrollment *this)
{
  ?reset@bdABTestingEnrollment@@QEAAXXZ(this);
}

/*
==============
bdABTestingEnrollment::bdABTestingEnrollment
==============
*/
void bdABTestingEnrollment::bdABTestingEnrollment(bdABTestingEnrollment *this, bdABTestingClientTreatment *clientTreatments, unsigned int maxClientTreatments)
{
  this->m_clientTreatments = clientTreatments;
  this->m_testID = 0i64;
  this->m_numClientTreatments = 0;
  this->m_cohortID = 0i64;
  this->m_maxClientTreatments = maxClientTreatments;
}

/*
==============
bdABTestingEnrollment::bdABTestingEnrollment
==============
*/
void bdABTestingEnrollment::bdABTestingEnrollment(bdABTestingEnrollment *this)
{
  this->m_clientTreatments = NULL;
  *(_QWORD *)&this->m_numClientTreatments = 0i64;
  this->m_testID = 0i64;
  this->m_cohortID = 0i64;
}

/*
==============
bdABTestingEnrollment::deserializeFromJSON
==============
*/
_BOOL8 bdABTestingEnrollment::deserializeFromJSON(bdABTestingEnrollment *this, bdJSONDeserializer *json)
{
  bool v4; 
  bool v5; 
  unsigned int m_count; 
  __int64 v7; 
  unsigned int v9; 
  unsigned int m_maxClientTreatments; 
  bdJSONDeserializer value; 
  bdJSONDeserializer jsona; 

  v4 = bdJSONDeserializer::getUInt64(json, "testID", &this->m_testID) && bdJSONDeserializer::getUInt64(json, "cohortID", &this->m_cohortID);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  v5 = v4 && bdJSONDeserializer::getArray(json, "clientTreatments", &value);
  m_count = value.m_count;
  if ( value.m_count <= this->m_maxClientTreatments )
  {
    if ( v5 )
    {
      this->m_numClientTreatments = value.m_count;
      v7 = 0i64;
      if ( m_count )
      {
        do
        {
          bdJSONDeserializer::bdJSONDeserializer(&jsona);
          v5 = v5 && bdJSONDeserializer::getObject(&value, v7, &jsona) && bdABTestingClientTreatment::deserializeFromJSON(&this->m_clientTreatments[v7], &jsona);
          bdJSONDeserializer::~bdJSONDeserializer(&jsona);
          v7 = (unsigned int)(v7 + 1);
        }
        while ( (unsigned int)v7 < this->m_numClientTreatments );
      }
    }
  }
  else
  {
    m_maxClientTreatments = this->m_maxClientTreatments;
    v9 = value.m_count;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdABTestingEnrollment", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdabtesting\\bdabtestingenrollment.cpp", "bdABTestingEnrollment::deserializeFromJSON", 0x3Du, "Too many treatments to deserialize. Got %d, can hold %d", v9, m_maxClientTreatments);
    v5 = 0;
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return v5;
}

/*
==============
bdABTestingEnrollment::init
==============
*/
void bdABTestingEnrollment::init(bdABTestingEnrollment *this, bdABTestingClientTreatment *clientTreatments, unsigned int maxClientTreatments)
{
  this->m_clientTreatments = clientTreatments;
  this->m_testID = 0i64;
  this->m_numClientTreatments = 0;
  this->m_cohortID = 0i64;
  this->m_maxClientTreatments = maxClientTreatments;
}

/*
==============
bdABTestingEnrollment::reset
==============
*/
void bdABTestingEnrollment::reset(bdABTestingEnrollment *this)
{
  unsigned __int16 v1; 

  v1 = 0;
  this->m_testID = 0i64;
  this->m_numClientTreatments = 0;
  for ( this->m_cohortID = 0i64; v1 < this->m_maxClientTreatments; ++v1 )
    bdABTestingClientTreatment::reset(&this->m_clientTreatments[v1]);
}

