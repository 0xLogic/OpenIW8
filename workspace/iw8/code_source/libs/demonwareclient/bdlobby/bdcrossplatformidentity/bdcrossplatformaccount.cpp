/*
==============
bdCrossPlatformAccount::setCreated
==============
*/

void __fastcall bdCrossPlatformAccount::setCreated(bdCrossPlatformAccount *this, const char *created)
{
  ?setCreated@bdCrossPlatformAccount@@QEAAXPEBD@Z(this, created);
}

/*
==============
bdCrossPlatformAccount::getUpdated
==============
*/

const char *__fastcall bdCrossPlatformAccount::getUpdated(bdCrossPlatformAccount *this)
{
  return ?getUpdated@bdCrossPlatformAccount@@QEBAPEBDXZ(this);
}

/*
==============
bdCrossPlatformAccount::getAccountID
==============
*/

unsigned __int64 __fastcall bdCrossPlatformAccount::getAccountID(bdCrossPlatformAccount *this)
{
  return ?getAccountID@bdCrossPlatformAccount@@QEBA_KXZ(this);
}

/*
==============
bdCrossPlatformAccount::setAccountType
==============
*/

void __fastcall bdCrossPlatformAccount::setAccountType(bdCrossPlatformAccount *this, const char *accountType)
{
  ?setAccountType@bdCrossPlatformAccount@@QEAAXPEBD@Z(this, accountType);
}

/*
==============
bdCrossPlatformAccount::getAccountType
==============
*/

const char *__fastcall bdCrossPlatformAccount::getAccountType(bdCrossPlatformAccount *this)
{
  return ?getAccountType@bdCrossPlatformAccount@@QEBAPEBDXZ(this);
}

/*
==============
bdCrossPlatformAccount::bdCrossPlatformAccount
==============
*/

void __fastcall bdCrossPlatformAccount::bdCrossPlatformAccount(bdCrossPlatformAccount *this)
{
  ??0bdCrossPlatformAccount@@QEAA@XZ(this);
}

/*
==============
bdCrossPlatformAccount::getCreated
==============
*/

const char *__fastcall bdCrossPlatformAccount::getCreated(bdCrossPlatformAccount *this)
{
  return ?getCreated@bdCrossPlatformAccount@@QEBAPEBDXZ(this);
}

/*
==============
bdCrossPlatformAccount::hasUserName
==============
*/

bool __fastcall bdCrossPlatformAccount::hasUserName(bdCrossPlatformAccount *this)
{
  return ?hasUserName@bdCrossPlatformAccount@@QEBA_NXZ(this);
}

/*
==============
bdCrossPlatformAccount::setUserName
==============
*/

void __fastcall bdCrossPlatformAccount::setUserName(bdCrossPlatformAccount *this, const char *username)
{
  ?setUserName@bdCrossPlatformAccount@@QEAAXPEBD@Z(this, username);
}

/*
==============
bdCrossPlatformAccount::setAccountID
==============
*/

void __fastcall bdCrossPlatformAccount::setAccountID(bdCrossPlatformAccount *this, const unsigned __int64 accountID)
{
  ?setAccountID@bdCrossPlatformAccount@@QEAAX_K@Z(this, accountID);
}

/*
==============
bdCrossPlatformAccount::getUserName
==============
*/

const char *__fastcall bdCrossPlatformAccount::getUserName(bdCrossPlatformAccount *this)
{
  return ?getUserName@bdCrossPlatformAccount@@QEBAPEBDXZ(this);
}

/*
==============
bdCrossPlatformAccount::setUpdated
==============
*/

void __fastcall bdCrossPlatformAccount::setUpdated(bdCrossPlatformAccount *this, const char *updated)
{
  ?setUpdated@bdCrossPlatformAccount@@QEAAXPEBD@Z(this, updated);
}

/*
==============
bdCrossPlatformAccount::deserializeFromJSON
==============
*/

bool __fastcall bdCrossPlatformAccount::deserializeFromJSON(bdCrossPlatformAccount *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdCrossPlatformAccount@@QEAA_NAEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdCrossPlatformAccount::bdCrossPlatformAccount
==============
*/
void bdCrossPlatformAccount::bdCrossPlatformAccount(bdCrossPlatformAccount *this)
{
  this->m_accountID = 0i64;
  *(_QWORD *)this->m_accountType = 0i64;
  *(_WORD *)&this->m_accountType[8] = 0;
  this->m_accountType[10] = 0;
  memset_0(this->m_userName, 0, sizeof(this->m_userName));
  *(_QWORD *)this->m_created = 0i64;
  *(_QWORD *)&this->m_created[8] = 0i64;
  *(_QWORD *)&this->m_created[16] = 0i64;
  *(_QWORD *)&this->m_updated[3] = 0i64;
  *(_QWORD *)&this->m_updated[11] = 0i64;
  *(_WORD *)&this->m_updated[19] = 0;
}

/*
==============
bdCrossPlatformAccount::deserializeFromJSON
==============
*/
char bdCrossPlatformAccount::deserializeFromJSON(bdCrossPlatformAccount *this, bdJSONDeserializer *json)
{
  int v4; 
  const char *v5; 
  bool UInt64; 

  if ( !bdJSONDeserializer::getString(json, "provider", this->m_accountType, 0xAu) )
    return 0;
  v4 = strncmp(this->m_accountType, "psn", 0xAui64);
  v5 = "secondaryAccountID";
  if ( v4 )
    v5 = "accountID";
  UInt64 = bdJSONDeserializer::getUInt64(json, v5, &this->m_accountID);
  if ( UInt64 && (!bdJSONDeserializer::hasKey(json, "username") || bdJSONDeserializer::getNull(json, "username") ? (this->m_userName[0] = 0) : (UInt64 = bdJSONDeserializer::getString(json, "username", this->m_userName, 0x100u)), UInt64 && bdJSONDeserializer::getString(json, "created", this->m_created, 0x15u) && bdJSONDeserializer::getString(json, "updated", this->m_updated, 0x15u)) )
    return 1;
  else
    return 0;
}

/*
==============
bdCrossPlatformAccount::getAccountID
==============
*/
unsigned __int64 bdCrossPlatformAccount::getAccountID(bdCrossPlatformAccount *this)
{
  return this->m_accountID;
}

/*
==============
bdCrossPlatformAccount::getAccountType
==============
*/
bdCrossPlatformAccount *bdCrossPlatformAccount::getAccountType(bdCrossPlatformAccount *this)
{
  return this;
}

/*
==============
bdCrossPlatformAccount::getCreated
==============
*/
char *bdCrossPlatformAccount::getCreated(bdCrossPlatformAccount *this)
{
  return this->m_created;
}

/*
==============
bdCrossPlatformAccount::getUpdated
==============
*/
char *bdCrossPlatformAccount::getUpdated(bdCrossPlatformAccount *this)
{
  return this->m_updated;
}

/*
==============
bdCrossPlatformAccount::getUserName
==============
*/
char *bdCrossPlatformAccount::getUserName(bdCrossPlatformAccount *this)
{
  return this->m_userName;
}

/*
==============
bdCrossPlatformAccount::hasUserName
==============
*/
bool bdCrossPlatformAccount::hasUserName(bdCrossPlatformAccount *this)
{
  char *m_userName; 
  __int64 v2; 
  _BYTE *v3; 

  m_userName = this->m_userName;
  v2 = 1i64;
  v3 = memchr_0(this->m_userName, 0, 1ui64);
  if ( v3 )
    v2 = v3 - m_userName;
  return v2 != 0;
}

/*
==============
bdCrossPlatformAccount::setAccountID
==============
*/
void bdCrossPlatformAccount::setAccountID(bdCrossPlatformAccount *this, const unsigned __int64 accountID)
{
  this->m_accountID = accountID;
}

/*
==============
bdCrossPlatformAccount::setAccountType
==============
*/
void bdCrossPlatformAccount::setAccountType(bdCrossPlatformAccount *this, const char *accountType)
{
  bdStrlcpy(this->m_accountType, accountType, 0xBui64);
}

/*
==============
bdCrossPlatformAccount::setCreated
==============
*/
void bdCrossPlatformAccount::setCreated(bdCrossPlatformAccount *this, const char *created)
{
  bdStrlcpy(this->m_created, created, 0x15ui64);
}

/*
==============
bdCrossPlatformAccount::setUpdated
==============
*/
void bdCrossPlatformAccount::setUpdated(bdCrossPlatformAccount *this, const char *updated)
{
  bdStrlcpy(this->m_updated, updated, 0x15ui64);
}

/*
==============
bdCrossPlatformAccount::setUserName
==============
*/
void bdCrossPlatformAccount::setUserName(bdCrossPlatformAccount *this, const char *username)
{
  bdStrlcpy(this->m_userName, username, 0x100ui64);
}

