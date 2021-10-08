/*
==============
bdUmbrellaUserAccount::bdUmbrellaUserAccount
==============
*/

void __fastcall bdUmbrellaUserAccount::bdUmbrellaUserAccount(bdUmbrellaUserAccount *this)
{
  ??0bdUmbrellaUserAccount@@QEAA@XZ(this);
}

/*
==============
bdUmbrellaUserAccount::~bdUmbrellaUserAccount
==============
*/

void __fastcall bdUmbrellaUserAccount::~bdUmbrellaUserAccount(bdUmbrellaUserAccount *this)
{
  ??1bdUmbrellaUserAccount@@UEAA@XZ(this);
}

/*
==============
bdUmbrellaUserAccount::deserializeFromJSON
==============
*/

bool __fastcall bdUmbrellaUserAccount::deserializeFromJSON(bdUmbrellaUserAccount *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdUmbrellaUserAccount@@UEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdUmbrellaUserAccount::bdUmbrellaUserAccount
==============
*/
void bdUmbrellaUserAccount::bdUmbrellaUserAccount(bdUmbrellaUserAccount *this)
{
  this->__vftable = (bdUmbrellaUserAccount_vtbl *)&bdUmbrellaUserAccount::`vftable';
  bdUmbrellaAccessInfo::bdUmbrellaAccessInfo(&this->m_accessInfo);
  this->m_numLinkedAccounts = 0;
  `eh vector constructor iterator'(this->m_linkedAccounts, 0x120ui64, 0x10ui64, (void (__fastcall *)(void *))bdUmbrellaProviderAccount::bdUmbrellaProviderAccount, (void (__fastcall *)(void *))bdUmbrellaProviderAccount::~bdUmbrellaProviderAccount);
}

/*
==============
bdUmbrellaUserAccount::~bdUmbrellaUserAccount
==============
*/
void bdUmbrellaUserAccount::~bdUmbrellaUserAccount(bdUmbrellaUserAccount *this)
{
  this->__vftable = (bdUmbrellaUserAccount_vtbl *)&bdUmbrellaUserAccount::`vftable';
  `eh vector destructor iterator'(this->m_linkedAccounts, 0x120ui64, 0x10ui64, (void (__fastcall *)(void *))bdUmbrellaProviderAccount::~bdUmbrellaProviderAccount);
  bdUmbrellaAccessInfo::~bdUmbrellaAccessInfo(&this->m_accessInfo);
  this->__vftable = (bdUmbrellaUserAccount_vtbl *)&bdSingleIdentityJSONDeserializable::`vftable';
}

/*
==============
bdUmbrellaUserAccount::deserializeFromJSON
==============
*/
_BOOL8 bdUmbrellaUserAccount::deserializeFromJSON(bdUmbrellaUserAccount *this, bdJSONDeserializer *json)
{
  bool UInt64; 
  unsigned __int16 v5; 
  bool v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  size_t v9; 
  bool Array; 
  bool isArray; 
  unsigned __int16 m_count; 
  unsigned __int64 value; 
  unsigned __int64 v15; 
  bdJSONDeserializer v16; 
  __int64 v17; 
  bdJSONDeserializer v18; 
  char Src[4096]; 

  v17 = -2i64;
  UInt64 = json->m_type == BD_JSON_OBJECT;
  if ( json->m_type == BD_JSON_OBJECT )
  {
    v5 = 0;
    value = 0i64;
    UInt64 = bdJSONDeserializer::getUInt64(json, "umbrellaID", &value);
    this->m_accessInfo.m_umbrellaID = value;
    if ( bdJSONDeserializer::hasKey(json, "accessToken") && bdJSONDeserializer::hasKey(json, "expires") )
    {
      v6 = UInt64 && bdJSONDeserializer::getString(json, "accessToken", Src, 0x1000u);
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v7 = -1i64;
      v8 = -1i64;
      do
        ++v8;
      while ( Src[v8] );
      if ( v8 <= 0x1000 )
      {
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        do
          ++v7;
        while ( Src[v7] );
        if ( this != (bdUmbrellaUserAccount *)-24i64 )
        {
          v9 = 4095i64;
          if ( v7 < 0xFFF )
            v9 = v7;
          memcpy_0(this->m_accessInfo.m_accessToken, Src, v9);
          this->m_accessInfo.m_accessToken[v9] = 0;
        }
      }
      v15 = 0i64;
      UInt64 = v6 && bdJSONDeserializer::getUInt64(json, "expires", &v15);
      this->m_accessInfo.m_tokenExpiry = v15;
    }
    bdJSONDeserializer::bdJSONDeserializer(&v16);
    Array = bdJSONDeserializer::getArray(json, "accounts", &v16);
    isArray = bdJSONDeserializer::isArray(&v16);
    if ( Array )
    {
      if ( isArray )
      {
        m_count = v16.m_count;
        if ( LOWORD(v16.m_count) >= 0x10u )
          m_count = 16;
        this->m_numLinkedAccounts = m_count;
        if ( m_count )
        {
          do
          {
            bdJSONDeserializer::bdJSONDeserializer(&v18);
            if ( bdJSONDeserializer::getObject(&v16, v5, &v18) )
              UInt64 = UInt64 && this->m_linkedAccounts[v5].deserializeFromJSON(&this->m_linkedAccounts[v5], &v18);
            bdJSONDeserializer::~bdJSONDeserializer(&v18);
            ++v5;
          }
          while ( v5 < this->m_numLinkedAccounts );
        }
      }
      else
      {
        UInt64 = 0;
      }
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v16);
  }
  if ( !UInt64 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUmbrellaUserAccount", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrellauseraccount.cpp", "bdUmbrellaUserAccount::deserializeFromJSON", 0x48u, "Unable to parse JSON response for bdUmbrellaUserAccount");
  return UInt64;
}

