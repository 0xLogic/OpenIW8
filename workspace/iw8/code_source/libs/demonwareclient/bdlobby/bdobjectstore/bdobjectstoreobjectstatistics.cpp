/*
==============
bdObjectStoreObjectStatistics::bdObjectStoreObjectStatistics
==============
*/

void __fastcall bdObjectStoreObjectStatistics::bdObjectStoreObjectStatistics(bdObjectStoreObjectStatistics *this)
{
  ??0bdObjectStoreObjectStatistics@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreObjectStatistics::getStatistic
==============
*/

const bdObjectStoreStatistic *__fastcall bdObjectStoreObjectStatistics::getStatistic(bdObjectStoreObjectStatistics *this, const bdObjectStoreStatistic *result, bdObjectStoreStatistic::bdObjectStoreStatisticType statisticType)
{
  return ?getStatistic@bdObjectStoreObjectStatistics@@QEBA?BVbdObjectStoreStatistic@@W4bdObjectStoreStatisticType@2@@Z(this, result, statisticType);
}

/*
==============
bdObjectStoreObjectStatistics::resetStatistics
==============
*/

void __fastcall bdObjectStoreObjectStatistics::resetStatistics(bdObjectStoreObjectStatistics *this)
{
  ?resetStatistics@bdObjectStoreObjectStatistics@@IEAAXXZ(this);
}

/*
==============
bdObjectStoreObjectStatistics::setStatistic
==============
*/

bool __fastcall bdObjectStoreObjectStatistics::setStatistic(bdObjectStoreObjectStatistics *this, bdObjectStoreStatistic statistic)
{
  return ?setStatistic@bdObjectStoreObjectStatistics@@QEAA_NVbdObjectStoreStatistic@@@Z(this, statistic);
}

/*
==============
bdObjectStoreObjectStatistics::reset
==============
*/

void __fastcall bdObjectStoreObjectStatistics::reset(bdObjectStoreObjectStatistics *this)
{
  ?reset@bdObjectStoreObjectStatistics@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreObjectStatistics::deserializeStatisticsFromJSON
==============
*/

bool __fastcall bdObjectStoreObjectStatistics::deserializeStatisticsFromJSON(bdObjectStoreObjectStatistics *this, bdJSONDeserializer *json)
{
  return ?deserializeStatisticsFromJSON@bdObjectStoreObjectStatistics@@QEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdObjectStoreObjectStatistics::bdObjectStoreObjectStatistics
==============
*/
void bdObjectStoreObjectStatistics::bdObjectStoreObjectStatistics(bdObjectStoreObjectStatistics *this)
{
  __int64 v1; 
  __int64 v3; 
  bdObjectStoreObjectStatistics *v4; 
  bdObjectStoreObjectStatistics *v5; 
  bdObjectStoreStatistic *v6; 
  bdObjectStoreStatistic v7; 

  v1 = 4i64;
  v3 = 4i64;
  v4 = this;
  do
  {
    bdObjectStoreStatistic::bdObjectStoreStatistic(v4->m_statistics);
    v4 = (bdObjectStoreObjectStatistics *)((char *)v4 + 8);
    --v3;
  }
  while ( v3 );
  v5 = this;
  do
  {
    bdObjectStoreStatistic::bdObjectStoreStatistic(&v7);
    v5 = (bdObjectStoreObjectStatistics *)((char *)v5 + 8);
    v5[-1].m_statistics[3] = *v6;
    --v1;
  }
  while ( v1 );
}

/*
==============
bdObjectStoreObjectStatistics::deserializeStatisticsFromJSON
==============
*/
_BOOL8 bdObjectStoreObjectStatistics::deserializeStatisticsFromJSON(bdObjectStoreObjectStatistics *this, bdJSONDeserializer *json)
{
  bdJSONType m_type; 
  bool v5; 
  unsigned int v6; 
  bool v7; 
  bdObjectStoreStatistic v8; 
  bdJSONDeserializer value; 
  bdObjectStoreStatistic v11; 
  bdObjectStoreStatistic v12; 

  bdHandleAssert(json != NULL, "json != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectstatistics.cpp", "bdObjectStoreObjectStatistics::deserializeStatisticsFromJSON", 0x32u, "bdJSONDeserializer is NULL.");
  m_type = json->m_type;
  v5 = json->m_type == BD_JSON_ARRAY;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  v6 = 0;
  if ( m_type == BD_JSON_ARRAY )
  {
    while ( v6 < json->m_count )
    {
      v7 = v5 && bdJSONDeserializer::getObject(json, v6, &value);
      bdObjectStoreStatistic::bdObjectStoreStatistic(&v12);
      v5 = v7 && bdObjectStoreStatistic::deserializeFromJSON(&v12, &value);
      v11 = v12;
      if ( !bdObjectStoreStatistic::isUninitialized(&v11) )
      {
        v8 = v11;
        this->m_statistics[bdObjectStoreStatistic::getStatisticType(&v11)] = v8;
      }
      ++v6;
      if ( !v5 )
        goto LABEL_16;
    }
  }
  if ( !v5 )
LABEL_16:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectStatistics", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectstatistics.cpp", "bdObjectStoreObjectStatistics::deserializeStatisticsFromJSON", 0x3Fu, "Unable to deserialize statistics from JSON.");
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return v5;
}

/*
==============
bdObjectStoreObjectStatistics::getStatistic
==============
*/
const bdObjectStoreStatistic *bdObjectStoreObjectStatistics::getStatistic(bdObjectStoreObjectStatistics *this, const bdObjectStoreStatistic *result, bdObjectStoreStatistic::bdObjectStoreStatisticType statisticType)
{
  __int64 v3; 
  const bdObjectStoreStatistic *v6; 

  v3 = statisticType;
  bdHandleAssert(statisticType != BD_OBJECTSTORE_STATISTIC_UNINITIALIZED, "statisticType != bdObjectStoreStatistic::BD_OBJECTSTORE_STATISTIC_UNINITIALIZED", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectstatistics.cpp", "bdObjectStoreObjectStatistics::getStatistic", 0x2Bu, "Attempt to retrieve uninitialised statistic");
  v6 = result;
  *result = this->m_statistics[v3];
  return v6;
}

/*
==============
bdObjectStoreObjectStatistics::reset
==============
*/
void bdObjectStoreObjectStatistics::reset(bdObjectStoreObjectStatistics *this)
{
  __int64 v2; 
  bdObjectStoreStatistic *v3; 
  bdObjectStoreStatistic v4; 

  v2 = 4i64;
  do
  {
    bdObjectStoreStatistic::bdObjectStoreStatistic(&v4);
    this = (bdObjectStoreObjectStatistics *)((char *)this + 8);
    this[-1].m_statistics[3] = *v3;
    --v2;
  }
  while ( v2 );
}

/*
==============
bdObjectStoreObjectStatistics::resetStatistics
==============
*/
void bdObjectStoreObjectStatistics::resetStatistics(bdObjectStoreObjectStatistics *this)
{
  __int64 v2; 
  bdObjectStoreStatistic *v3; 
  bdObjectStoreStatistic v4; 

  v2 = 4i64;
  do
  {
    bdObjectStoreStatistic::bdObjectStoreStatistic(&v4);
    this = (bdObjectStoreObjectStatistics *)((char *)this + 8);
    this[-1].m_statistics[3] = *v3;
    --v2;
  }
  while ( v2 );
}

/*
==============
bdObjectStoreObjectStatistics::setStatistic
==============
*/
bool bdObjectStoreObjectStatistics::setStatistic(bdObjectStoreObjectStatistics *this, bdObjectStoreStatistic statistic)
{
  bdObjectStoreStatistic v3; 
  __int64 StatisticType; 
  bool result; 
  bdObjectStoreStatistic v6; 

  v6 = statistic;
  if ( bdObjectStoreStatistic::isUninitialized(&v6) )
    return 0;
  v3 = v6;
  StatisticType = bdObjectStoreStatistic::getStatisticType(&v6);
  result = 1;
  this->m_statistics[StatisticType] = v3;
  return result;
}

