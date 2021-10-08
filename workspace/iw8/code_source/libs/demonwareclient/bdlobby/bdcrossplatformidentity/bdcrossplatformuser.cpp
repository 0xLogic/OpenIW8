/*
==============
bdCrossPlatformUser::bdCrossPlatformUser
==============
*/

void __fastcall bdCrossPlatformUser::bdCrossPlatformUser(bdCrossPlatformUser *this)
{
  ??0bdCrossPlatformUser@@QEAA@XZ(this);
}

/*
==============
bdCrossPlatformUser::getNumberOfAccounts
==============
*/

unsigned int __fastcall bdCrossPlatformUser::getNumberOfAccounts(bdCrossPlatformUser *this)
{
  return ?getNumberOfAccounts@bdCrossPlatformUser@@QEBAIXZ(this);
}

/*
==============
bdCrossPlatformUser::deserializeFromJSON
==============
*/

bool __fastcall bdCrossPlatformUser::deserializeFromJSON(bdCrossPlatformUser *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdCrossPlatformUser@@QEAA_NAEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdCrossPlatformUser::getAccounts
==============
*/

const bdCrossPlatformAccount *__fastcall bdCrossPlatformUser::getAccounts(bdCrossPlatformUser *this)
{
  return ?getAccounts@bdCrossPlatformUser@@QEBAPEBVbdCrossPlatformAccount@@XZ(this);
}

/*
==============
bdCrossPlatformUser::bdCrossPlatformUser
==============
*/
void bdCrossPlatformUser::bdCrossPlatformUser(bdCrossPlatformUser *this)
{
  bdCrossPlatformAccount *m_linkedAccounts; 
  __int64 v2; 

  this->m_numAccounts = 0;
  m_linkedAccounts = this->m_linkedAccounts;
  v2 = 16i64;
  do
  {
    bdCrossPlatformAccount::bdCrossPlatformAccount(m_linkedAccounts++);
    --v2;
  }
  while ( v2 );
}

/*
==============
bdCrossPlatformUser::deserializeFromJSON
==============
*/
_BOOL8 bdCrossPlatformUser::deserializeFromJSON(bdCrossPlatformUser *this, bdJSONDeserializer *json)
{
  bool Array; 
  bool isArray; 
  unsigned int m_count_low; 
  unsigned int i; 
  bdJSONDeserializer value; 
  bdJSONDeserializer jsona; 

  bdJSONDeserializer::bdJSONDeserializer(&value);
  Array = bdJSONDeserializer::getArray(json, "accounts", &value);
  isArray = bdJSONDeserializer::isArray(&value);
  if ( Array )
  {
    if ( isArray )
    {
      m_count_low = LOWORD(value.m_count);
      if ( LOWORD(value.m_count) >= 0x10u )
        m_count_low = 16;
      this->m_numAccounts = m_count_low;
      for ( i = 0; i < this->m_numAccounts; ++i )
      {
        bdJSONDeserializer::bdJSONDeserializer(&jsona);
        Array = Array && bdJSONDeserializer::getObject(&value, i, &jsona) && bdCrossPlatformAccount::deserializeFromJSON(&this->m_linkedAccounts[i], &jsona);
        bdJSONDeserializer::~bdJSONDeserializer(&jsona);
      }
    }
    else
    {
      Array = 0;
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return Array;
}

/*
==============
bdCrossPlatformUser::getAccounts
==============
*/
bdCrossPlatformAccount *bdCrossPlatformUser::getAccounts(bdCrossPlatformUser *this)
{
  return this->m_linkedAccounts;
}

/*
==============
bdCrossPlatformUser::getNumberOfAccounts
==============
*/
__int64 bdCrossPlatformUser::getNumberOfAccounts(bdCrossPlatformUser *this)
{
  return this->m_numAccounts;
}

