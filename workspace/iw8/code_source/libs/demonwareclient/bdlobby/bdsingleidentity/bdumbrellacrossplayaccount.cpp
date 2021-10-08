/*
==============
bdUmbrellaCrossplayAccount::deserializeFromJSON
==============
*/

bool __fastcall bdUmbrellaCrossplayAccount::deserializeFromJSON(bdUmbrellaCrossplayAccount *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdUmbrellaCrossplayAccount@@UEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdUmbrellaCrossplayAccount::bdUmbrellaCrossplayAccount
==============
*/

void __fastcall bdUmbrellaCrossplayAccount::bdUmbrellaCrossplayAccount(bdUmbrellaCrossplayAccount *this)
{
  ??0bdUmbrellaCrossplayAccount@@QEAA@XZ(this);
}

/*
==============
bdUmbrellaCrossplayAccount::~bdUmbrellaCrossplayAccount
==============
*/

void __fastcall bdUmbrellaCrossplayAccount::~bdUmbrellaCrossplayAccount(bdUmbrellaCrossplayAccount *this)
{
  ??1bdUmbrellaCrossplayAccount@@UEAA@XZ(this);
}

/*
==============
bdUmbrellaCrossplayAccount::bdUmbrellaCrossplayAccount
==============
*/
void bdUmbrellaCrossplayAccount::bdUmbrellaCrossplayAccount(bdUmbrellaCrossplayAccount *this)
{
  this->__vftable = (bdUmbrellaCrossplayAccount_vtbl *)&bdUmbrellaCrossplayAccount::`vftable';
  bdUmbrellaCrossplayInfo::bdUmbrellaCrossplayInfo(&this->m_crossplayInfo);
  this->m_numLinkedAccounts = 0;
  `eh vector constructor iterator'(this->m_linkedAccounts, 0x120ui64, 0x10ui64, (void (__fastcall *)(void *))bdUmbrellaProviderAccount::bdUmbrellaProviderAccount, (void (__fastcall *)(void *))bdUmbrellaProviderAccount::~bdUmbrellaProviderAccount);
}

/*
==============
bdUmbrellaCrossplayAccount::~bdUmbrellaCrossplayAccount
==============
*/
void bdUmbrellaCrossplayAccount::~bdUmbrellaCrossplayAccount(bdUmbrellaCrossplayAccount *this)
{
  this->__vftable = (bdUmbrellaCrossplayAccount_vtbl *)&bdUmbrellaCrossplayAccount::`vftable';
  `eh vector destructor iterator'(this->m_linkedAccounts, 0x120ui64, 0x10ui64, (void (__fastcall *)(void *))bdUmbrellaProviderAccount::~bdUmbrellaProviderAccount);
  bdUmbrellaCrossplayInfo::~bdUmbrellaCrossplayInfo(&this->m_crossplayInfo);
  this->__vftable = (bdUmbrellaCrossplayAccount_vtbl *)&bdSingleIdentityJSONDeserializable::`vftable';
}

/*
==============
bdUmbrellaCrossplayAccount::deserializeFromJSON
==============
*/
_BOOL8 bdUmbrellaCrossplayAccount::deserializeFromJSON(bdUmbrellaCrossplayAccount *this, bdJSONDeserializer *json)
{
  bool v4; 
  bool Array; 
  bool isArray; 
  unsigned __int16 m_count; 
  unsigned __int16 i; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v11; 

  v4 = json->m_type == BD_JSON_OBJECT;
  if ( json->m_type == BD_JSON_OBJECT )
  {
    v4 = ((unsigned __int8 (__fastcall *)(bdUmbrellaCrossplayInfo *))this->m_crossplayInfo.deserializeFromJSON)(&this->m_crossplayInfo) != 0;
    bdJSONDeserializer::bdJSONDeserializer(&value);
    Array = bdJSONDeserializer::getArray(json, "accounts", &value);
    isArray = bdJSONDeserializer::isArray(&value);
    if ( Array )
    {
      if ( isArray )
      {
        m_count = value.m_count;
        if ( LOWORD(value.m_count) >= 0x10u )
          m_count = 16;
        this->m_numLinkedAccounts = m_count;
        for ( i = 0; i < this->m_numLinkedAccounts; ++i )
        {
          bdJSONDeserializer::bdJSONDeserializer(&v11);
          if ( bdJSONDeserializer::getObject(&value, i, &v11) )
            v4 = v4 && this->m_linkedAccounts[i].deserializeFromJSON(&this->m_linkedAccounts[i], &v11);
          bdJSONDeserializer::~bdJSONDeserializer(&v11);
        }
      }
      else
      {
        v4 = 0;
      }
    }
    bdJSONDeserializer::~bdJSONDeserializer(&value);
  }
  if ( !v4 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUmbrellaUserAccount", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrellacrossplayaccount.cpp", "bdUmbrellaCrossplayAccount::deserializeFromJSON", 0x3Bu, "Unable to parse JSON response for bdUmbrellaCrossplayAccount");
  return v4;
}

