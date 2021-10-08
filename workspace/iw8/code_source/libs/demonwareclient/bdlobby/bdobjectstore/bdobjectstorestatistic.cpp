/*
==============
bdObjectStoreStatistic::getStatisticTypeString
==============
*/

const char *__fastcall bdObjectStoreStatistic::getStatisticTypeString(const bdObjectStoreStatistic::bdObjectStoreStatisticType statisticType)
{
  return ?getStatisticTypeString@bdObjectStoreStatistic@@SAPEBDW4bdObjectStoreStatisticType@1@@Z(statisticType);
}

/*
==============
bdObjectStoreStatistic::isUninitialized
==============
*/

bool __fastcall bdObjectStoreStatistic::isUninitialized(bdObjectStoreStatistic *this)
{
  return ?isUninitialized@bdObjectStoreStatistic@@QEBA_NXZ(this);
}

/*
==============
bdObjectStoreStatistic::getStatisticTypeFromString
==============
*/

bool __fastcall bdObjectStoreStatistic::getStatisticTypeFromString(const char *statisticName, bdObjectStoreStatistic::bdObjectStoreStatisticType *statisticType)
{
  return ?getStatisticTypeFromString@bdObjectStoreStatistic@@SA_NPEBDAEAW4bdObjectStoreStatisticType@1@@Z(statisticName, statisticType);
}

/*
==============
bdObjectStoreStatistic::setStatisticValue
==============
*/

bool __fastcall bdObjectStoreStatistic::setStatisticValue(bdObjectStoreStatistic *this, int statisticValue)
{
  return ?setStatisticValue@bdObjectStoreStatistic@@QEAA_NH@Z(this, statisticValue);
}

/*
==============
bdObjectStoreStatistic::getStatisticValue
==============
*/

int __fastcall bdObjectStoreStatistic::getStatisticValue(bdObjectStoreStatistic *this)
{
  return ?getStatisticValue@bdObjectStoreStatistic@@QEBAHXZ(this);
}

/*
==============
bdObjectStoreStatistic::deserializeFromJSON
==============
*/

bool __fastcall bdObjectStoreStatistic::deserializeFromJSON(bdObjectStoreStatistic *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdObjectStoreStatistic@@QEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdObjectStoreStatistic::bdObjectStoreStatistic
==============
*/

void __fastcall bdObjectStoreStatistic::bdObjectStoreStatistic(bdObjectStoreStatistic *this, bdObjectStoreStatistic::bdObjectStoreStatisticType statistic)
{
  ??0bdObjectStoreStatistic@@QEAA@W4bdObjectStoreStatisticType@0@@Z(this, statistic);
}

/*
==============
bdObjectStoreStatistic::getStatisticType
==============
*/

bdObjectStoreStatistic::bdObjectStoreStatisticType __fastcall bdObjectStoreStatistic::getStatisticType(bdObjectStoreStatistic *this)
{
  return ?getStatisticType@bdObjectStoreStatistic@@QEBA?AW4bdObjectStoreStatisticType@1@XZ(this);
}

/*
==============
bdObjectStoreStatistic::bdObjectStoreStatistic
==============
*/

void __fastcall bdObjectStoreStatistic::bdObjectStoreStatistic(bdObjectStoreStatistic *this)
{
  ??0bdObjectStoreStatistic@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreStatistic::getStatisticTypeString
==============
*/

const char *__fastcall bdObjectStoreStatistic::getStatisticTypeString(bdObjectStoreStatistic *this)
{
  return ?getStatisticTypeString@bdObjectStoreStatistic@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreStatistic::reset
==============
*/

void __fastcall bdObjectStoreStatistic::reset(bdObjectStoreStatistic *this)
{
  ?reset@bdObjectStoreStatistic@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreStatistic::bdObjectStoreStatistic
==============
*/
void bdObjectStoreStatistic::bdObjectStoreStatistic(bdObjectStoreStatistic *this, bdObjectStoreStatistic::bdObjectStoreStatisticType statistic)
{
  this->m_statisticType = statistic;
  this->m_statisticValue = 0;
}

/*
==============
bdObjectStoreStatistic::bdObjectStoreStatistic
==============
*/
void bdObjectStoreStatistic::bdObjectStoreStatistic(bdObjectStoreStatistic *this)
{
  this->m_statisticType = BD_OBJECTSTORE_STATISTIC_UNINITIALIZED;
  this->m_statisticValue = 0;
}

/*
==============
bdObjectStoreStatistic::deserializeFromJSON
==============
*/
char bdObjectStoreStatistic::deserializeFromJSON(bdObjectStoreStatistic *this, bdJSONDeserializer *json)
{
  bdObjectStoreStatistic::bdObjectStoreStatisticType v4; 
  const char **v5; 
  const char *v6; 
  int v7; 
  int v8; 
  char value[40]; 

  bdHandleAssert(json != NULL, "json != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestatistic.cpp", "bdObjectStoreStatistic::deserializeFromJSON", 0x4Eu, "bdJSONDeserializer is NULL.");
  if ( json->m_type == BD_JSON_OBJECT && bdJSONDeserializer::getString(json, (const char *const)&stru_143C9A1A4, value, 0x21u) && bdJSONDeserializer::getInt32(json, (const char *const)&stru_143CE7590, &this->m_statisticValue) )
  {
    v4 = BD_OBJECTSTORE_STATISTIC_DOWNLOADS;
    v5 = bdObjectStoreStatistic::bdObjectStoreStatisticTypeStrings;
    while ( 1 )
    {
      v6 = *v5;
      do
      {
        v7 = (unsigned __int8)v6[value - *v5];
        v8 = *(unsigned __int8 *)v6 - v7;
        if ( v8 )
          break;
        ++v6;
      }
      while ( v7 );
      if ( !v8 )
        break;
      ++v4;
      ++v5;
      if ( (unsigned int)v4 >= 4 )
        goto LABEL_10;
    }
    this->m_statisticType = v4;
    return 1;
  }
  else
  {
LABEL_10:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreStatistic", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestatistic.cpp", "bdObjectStoreStatistic::deserializeFromJSON", 0x59u, "Unable to parse JSON response for bdObjectStoreStatistic");
    return 0;
  }
}

/*
==============
bdObjectStoreStatistic::getStatisticType
==============
*/
__int64 bdObjectStoreStatistic::getStatisticType(bdObjectStoreStatistic *this)
{
  return (unsigned int)this->m_statisticType;
}

/*
==============
bdObjectStoreStatistic::getStatisticTypeFromString
==============
*/
char bdObjectStoreStatistic::getStatisticTypeFromString(const char *statisticName, bdObjectStoreStatistic::bdObjectStoreStatisticType *statisticType)
{
  const char **v3; 
  bdObjectStoreStatistic::bdObjectStoreStatisticType v5; 
  const char *v6; 
  int v7; 
  int v8; 

  v3 = bdObjectStoreStatistic::bdObjectStoreStatisticTypeStrings;
  v5 = BD_OBJECTSTORE_STATISTIC_DOWNLOADS;
  while ( 1 )
  {
    v6 = *v3;
    do
    {
      v7 = (unsigned __int8)v6[statisticName - *v3];
      v8 = *(unsigned __int8 *)v6 - v7;
      if ( v8 )
        break;
      ++v6;
    }
    while ( v7 );
    if ( !v8 )
      break;
    ++v5;
    ++v3;
    if ( (unsigned int)v5 >= 4 )
      return 0;
  }
  *statisticType = v5;
  return 1;
}

/*
==============
bdObjectStoreStatistic::getStatisticTypeString
==============
*/
const char *bdObjectStoreStatistic::getStatisticTypeString(bdObjectStoreStatistic *this)
{
  return bdObjectStoreStatistic::bdObjectStoreStatisticTypeStrings[this->m_statisticType];
}

/*
==============
bdObjectStoreStatistic::getStatisticTypeString
==============
*/
const char *bdObjectStoreStatistic::getStatisticTypeString(const bdObjectStoreStatistic::bdObjectStoreStatisticType statisticType)
{
  return bdObjectStoreStatistic::bdObjectStoreStatisticTypeStrings[statisticType];
}

/*
==============
bdObjectStoreStatistic::getStatisticValue
==============
*/
__int64 bdObjectStoreStatistic::getStatisticValue(bdObjectStoreStatistic *this)
{
  return (unsigned int)this->m_statisticValue;
}

/*
==============
bdObjectStoreStatistic::isUninitialized
==============
*/
bool bdObjectStoreStatistic::isUninitialized(bdObjectStoreStatistic *this)
{
  return this->m_statisticType == BD_OBJECTSTORE_STATISTIC_UNINITIALIZED;
}

/*
==============
bdObjectStoreStatistic::reset
==============
*/
void bdObjectStoreStatistic::reset(bdObjectStoreStatistic *this)
{
  this->m_statisticType = BD_OBJECTSTORE_STATISTIC_UNINITIALIZED;
  this->m_statisticValue = 0;
}

/*
==============
bdObjectStoreStatistic::setStatisticValue
==============
*/
char bdObjectStoreStatistic::setStatisticValue(bdObjectStoreStatistic *this, int statisticValue)
{
  this->m_statisticValue = statisticValue;
  return 1;
}

