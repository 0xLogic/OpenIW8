/*
==============
bdUmbrellaProviderAccount::deserializeFromJSON
==============
*/

bool __fastcall bdUmbrellaProviderAccount::deserializeFromJSON(bdUmbrellaProviderAccount *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdUmbrellaProviderAccount@@UEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdUmbrellaProviderAccount::bdUmbrellaProviderAccount
==============
*/

void __fastcall bdUmbrellaProviderAccount::bdUmbrellaProviderAccount(bdUmbrellaProviderAccount *this, const bdUmbrellaProviderAccount *__that)
{
  ??0bdUmbrellaProviderAccount@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdUmbrellaProviderAccount::~bdUmbrellaProviderAccount
==============
*/

void __fastcall bdUmbrellaProviderAccount::~bdUmbrellaProviderAccount(bdUmbrellaProviderAccount *this)
{
  ??1bdUmbrellaProviderAccount@@UEAA@XZ(this);
}

/*
==============
bdUmbrellaProviderAccount::bdUmbrellaProviderAccount
==============
*/

void __fastcall bdUmbrellaProviderAccount::bdUmbrellaProviderAccount(bdUmbrellaProviderAccount *this)
{
  ??0bdUmbrellaProviderAccount@@QEAA@XZ(this);
}

/*
==============
bdUmbrellaProviderAccount::operator==
==============
*/

bool __fastcall bdUmbrellaProviderAccount::operator==(bdUmbrellaProviderAccount *this, const bdUmbrellaProviderAccount *other)
{
  return ??8bdUmbrellaProviderAccount@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdUmbrellaProviderAccount::bdUmbrellaProviderAccount
==============
*/
void bdUmbrellaProviderAccount::bdUmbrellaProviderAccount(bdUmbrellaProviderAccount *this, const bdUmbrellaProviderAccount *__that)
{
  __int64 v3; 
  char v4; 
  char *m_username; 
  char *v6; 
  __int128 v7; 

  this->__vftable = (bdUmbrellaProviderAccount_vtbl *)&bdUmbrellaProviderAccount::`vftable';
  v3 = 2i64;
  this->m_linkedAccountID = __that->m_linkedAccountID;
  *(double *)this->m_provider = *(double *)__that->m_provider;
  *(_WORD *)&this->m_provider[8] = *(_WORD *)&__that->m_provider[8];
  v4 = __that->m_provider[10];
  m_username = this->m_username;
  this->m_provider[10] = v4;
  v6 = __that->m_username;
  do
  {
    m_username += 128;
    v7 = *(_OWORD *)v6;
    v6 += 128;
    *((_OWORD *)m_username - 8) = v7;
    *((_OWORD *)m_username - 7) = *((_OWORD *)v6 - 7);
    *((_OWORD *)m_username - 6) = *((_OWORD *)v6 - 6);
    *((_OWORD *)m_username - 5) = *((_OWORD *)v6 - 5);
    *((_OWORD *)m_username - 4) = *((_OWORD *)v6 - 4);
    *((_OWORD *)m_username - 3) = *((_OWORD *)v6 - 3);
    *((_OWORD *)m_username - 2) = *((_OWORD *)v6 - 2);
    *((_OWORD *)m_username - 1) = *((_OWORD *)v6 - 1);
    --v3;
  }
  while ( v3 );
  this->m_authorized = __that->m_authorized;
}

/*
==============
bdUmbrellaProviderAccount::bdUmbrellaProviderAccount
==============
*/
void bdUmbrellaProviderAccount::bdUmbrellaProviderAccount(bdUmbrellaProviderAccount *this)
{
  this->m_linkedAccountID = 0i64;
  this->__vftable = (bdUmbrellaProviderAccount_vtbl *)&bdUmbrellaProviderAccount::`vftable';
  this->m_authorized = 0;
  memset_0(this->m_provider, 0, 0x10Bui64);
}

/*
==============
bdUmbrellaProviderAccount::~bdUmbrellaProviderAccount
==============
*/
void bdUmbrellaProviderAccount::~bdUmbrellaProviderAccount(bdUmbrellaProviderAccount *this)
{
  this->__vftable = (bdUmbrellaProviderAccount_vtbl *)&bdSingleIdentityJSONDeserializable::`vftable';
}

/*
==============
bdUmbrellaProviderAccount::operator==
==============
*/
bool bdUmbrellaProviderAccount::operator==(bdUmbrellaProviderAccount *this, const bdUmbrellaProviderAccount *other)
{
  char *m_provider; 
  signed __int64 v5; 
  int v6; 
  int v7; 
  char *m_username; 
  int v9; 
  int v10; 

  if ( this->m_linkedAccountID != other->m_linkedAccountID || this->m_authorized != other->m_authorized )
    return 0;
  m_provider = this->m_provider;
  v5 = (char *)other - (char *)this;
  do
  {
    v6 = (unsigned __int8)m_provider[v5];
    v7 = (unsigned __int8)*m_provider - v6;
    if ( v7 )
      break;
    ++m_provider;
  }
  while ( v6 );
  if ( v7 )
    return 0;
  m_username = this->m_username;
  do
  {
    v9 = (unsigned __int8)m_username[(char *)other - (char *)this];
    v10 = (unsigned __int8)*m_username - v9;
    if ( v10 )
      break;
    ++m_username;
  }
  while ( v9 );
  return !v10;
}

/*
==============
bdUmbrellaProviderAccount::deserializeFromJSON
==============
*/
char bdUmbrellaProviderAccount::deserializeFromJSON(bdUmbrellaProviderAccount *this, bdJSONDeserializer *json)
{
  bool v4; 

  v4 = json->m_type == BD_JSON_OBJECT;
  if ( json->m_type == BD_JSON_OBJECT )
  {
    if ( bdJSONDeserializer::getString(json, "provider", this->m_provider, 0xBu) && bdJSONDeserializer::getString(json, "username", this->m_username, 0x100u) && bdJSONDeserializer::getUInt64(json, "accountID", &this->m_linkedAccountID) && bdJSONDeserializer::getBoolean(json, "authorized", &this->m_authorized) )
      return 1;
    v4 = 0;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUmbrellaProviderAccount", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrellaprovideraccount.cpp", "bdUmbrellaProviderAccount::deserializeFromJSON", 0x30u, "Unable to parse JSON response for bdUmbrellaAccessInfo");
  return v4;
}

