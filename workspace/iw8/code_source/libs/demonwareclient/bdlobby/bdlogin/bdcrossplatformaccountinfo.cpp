/*
==============
bdCrossPlatformAccountInfo::serializeUnsecuredFieldsToJSON
==============
*/

bool __fastcall bdCrossPlatformAccountInfo::serializeUnsecuredFieldsToJSON(bdCrossPlatformAccountInfo *this, bdJSONSerializer *json, bool creatingAccount)
{
  return ?serializeUnsecuredFieldsToJSON@bdCrossPlatformAccountInfo@@QEBA_NPEAVbdJSONSerializer@@_N@Z(this, json, creatingAccount);
}

/*
==============
bdCrossPlatformAccountInfo::~bdCrossPlatformAccountInfo
==============
*/

void __fastcall bdCrossPlatformAccountInfo::~bdCrossPlatformAccountInfo(bdCrossPlatformAccountInfo *this)
{
  ??1bdCrossPlatformAccountInfo@@QEAA@XZ(this);
}

/*
==============
bdCrossPlatformAccountInfo::serializeSecuredFieldsToJSON
==============
*/

bool __fastcall bdCrossPlatformAccountInfo::serializeSecuredFieldsToJSON(bdCrossPlatformAccountInfo *this, bdJSONSerializer *json, bool updatePassword)
{
  return ?serializeSecuredFieldsToJSON@bdCrossPlatformAccountInfo@@QEBA_NPEAVbdJSONSerializer@@_N@Z(this, json, updatePassword);
}

/*
==============
bdCrossPlatformAccountInfo::bdCrossPlatformAccountInfo
==============
*/

void __fastcall bdCrossPlatformAccountInfo::bdCrossPlatformAccountInfo(bdCrossPlatformAccountInfo *this)
{
  ??0bdCrossPlatformAccountInfo@@QEAA@XZ(this);
}

/*
==============
bdCrossPlatformAccountInfo::deserializeFromJSON
==============
*/

bool __fastcall bdCrossPlatformAccountInfo::deserializeFromJSON(bdCrossPlatformAccountInfo *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdCrossPlatformAccountInfo@@QEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdCrossPlatformAccountInfo::bdCrossPlatformAccountInfo
==============
*/
void bdCrossPlatformAccountInfo::bdCrossPlatformAccountInfo(bdCrossPlatformAccountInfo *this)
{
  this->m_userID = 0i64;
  this->m_accountType = BD_LOGIN_ACCOUNT_FULL;
  *(_WORD *)&this->m_over18 = 0;
  this->m_gender = BD_LOGIN_GENDER_UNDEFINED;
  *(_WORD *)&this->m_emailVerified = 0;
  this->m_dateOfBirthValidated = 0;
  memset_0(this->m_username, 0, 0x4D5ui64);
  memset_0(this->m_parentEmail, 0, sizeof(this->m_parentEmail));
  memset_0(this->m_address1, 0, 0x7A0ui64);
}

/*
==============
bdCrossPlatformAccountInfo::~bdCrossPlatformAccountInfo
==============
*/
void bdCrossPlatformAccountInfo::~bdCrossPlatformAccountInfo(bdCrossPlatformAccountInfo *this)
{
  ;
}

/*
==============
bdCrossPlatformAccountInfo::deserializeFromJSON
==============
*/
char bdCrossPlatformAccountInfo::deserializeFromJSON(bdCrossPlatformAccountInfo *this, bdJSONDeserializer *json)
{
  unsigned __int16 v4; 
  char v5; 
  unsigned __int16 v6; 
  const char *v7; 
  char *v8; 
  int v9; 
  int v10; 
  char v11; 
  char v12; 
  const char *v13; 
  char *v14; 
  int v15; 
  int v16; 
  const char *v18; 
  char value[8]; 
  char v20[16]; 

  if ( json->m_type != BD_JSON_OBJECT )
    return json->m_type == BD_JSON_OBJECT;
  v4 = 0;
  if ( bdJSONDeserializer::getString(json, "accountType", v20, 0xBu) )
  {
    v5 = 0;
    v6 = 0;
    while ( v6 < 3u )
    {
      v7 = bdCrossPlatformAccountInfo::AccountTypeStrings[v6];
      v8 = (char *)(v20 - v7);
      do
      {
        v9 = (unsigned __int8)v8[(_QWORD)v7];
        v10 = *(unsigned __int8 *)v7 - v9;
        if ( v10 )
          break;
        ++v7;
      }
      while ( v9 );
      if ( !v10 )
      {
        v5 = 1;
        this->m_accountType = v6;
      }
      ++v6;
      if ( v5 )
      {
        if ( bdJSONDeserializer::getUInt64(json, "unoID", &this->m_userID) && bdJSONDeserializer::getString(json, "userName", this->m_username, 0x41u) )
        {
          v11 = 1;
          goto LABEL_17;
        }
        break;
      }
    }
  }
  v11 = 0;
LABEL_17:
  if ( bdJSONDeserializer::hasKey(json, "email") && !bdJSONDeserializer::getString(json, "email", this->m_email, 0x100u) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0x4Cu, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "email");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "address1") && !bdJSONDeserializer::getString(json, "address1", this->m_address1, 0x191u) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0x55u, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "address1");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "address2") && !bdJSONDeserializer::getString(json, "address2", this->m_address2, 0x191u) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0x5Eu, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "address2");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "parentEmailVerified") && !bdJSONDeserializer::getBoolean(json, "parentEmailVerified", &this->m_parentEmailVerified) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0x67u, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "parentEmailVerified");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "dateOfBirthValidated") && !bdJSONDeserializer::getBoolean(json, "dateOfBirthValidated", &this->m_dateOfBirthValidated) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0x70u, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "dateOfBirthValidated");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "phone") && !bdJSONDeserializer::getString(json, "phone", this->m_phone, 0x33u) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0x79u, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "phone");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "parentEmail") && !bdJSONDeserializer::getString(json, "parentEmail", this->m_parentEmail, 0x100u) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0x82u, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "parentEmail");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "isChild") && !bdJSONDeserializer::getBoolean(json, "isChild", &this->m_isChild) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0x8Bu, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "isChild");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "city") && !bdJSONDeserializer::getString(json, "city", this->m_city, 0x191u) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0x94u, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "city");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "zip") && !bdJSONDeserializer::getString(json, "zip", this->m_zipCode, 0xC9u) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0x9Du, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "zip");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "firstName") && !bdJSONDeserializer::getString(json, "firstName", this->m_firstName, 0x191u) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0xA6u, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "firstName");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "lastName") && !bdJSONDeserializer::getString(json, "lastName", this->m_lastName, 0x191u) )
  {
    LODWORD(v18) = 401;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0xAFu, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", v18);
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "mobile") && !bdJSONDeserializer::getString(json, "mobile", this->m_mobile, 0x33u) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0xB8u, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "mobile");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "dateOfBirth") && !bdJSONDeserializer::getString(json, "dateOfBirth", this->m_dateOfBirth, 0xDu) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0xC1u, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "dateOfBirth");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "state") && !bdJSONDeserializer::getString(json, "state", this->m_state, 0x191u) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0xCAu, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "state");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "country") && !bdJSONDeserializer::getString(json, "country", this->m_country, 3u) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0xD3u, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "country");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "emailVerified") && !bdJSONDeserializer::getBoolean(json, "emailVerified", &this->m_emailVerified) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0xDCu, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "emailVerified");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "created") && !bdJSONDeserializer::getString(json, "created", this->m_createdTime, 0x15u) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0xE5u, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "created");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "updated") && !bdJSONDeserializer::getString(json, "updated", this->m_updatedTime, 0x15u) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0xEEu, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "updated");
    v11 = 0;
  }
  if ( bdJSONDeserializer::hasKey(json, "gender") )
  {
    if ( bdJSONDeserializer::getString(json, "gender", value, 7u) )
    {
      v12 = 0;
      while ( v4 < 4u )
      {
        v13 = bdCrossPlatformAccountInfo::GenderStrings[v4];
        v14 = (char *)(value - v13);
        do
        {
          v15 = (unsigned __int8)v14[(_QWORD)v13];
          v16 = *(unsigned __int8 *)v13 - v15;
          if ( v16 )
            break;
          ++v13;
        }
        while ( v15 );
        if ( !v16 )
        {
          v12 = 1;
          this->m_gender = v4;
        }
        ++v4;
        if ( v12 )
          goto LABEL_86;
      }
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0xF8u, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "gender");
    v11 = 0;
  }
LABEL_86:
  if ( !bdJSONDeserializer::hasKey(json, "over18") || bdJSONDeserializer::getBoolean(json, "over18", &this->m_over18) )
    return v11;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdcrossplatformaccountinfo.cpp", "bdCrossPlatformAccountInfo::deserializeFromJSON", 0x108u, "Unable to parse JSON response key [%s] for bdCrossPlatformAccountInfo", "over18");
  return 0;
}

/*
==============
bdCrossPlatformAccountInfo::serializeSecuredFieldsToJSON
==============
*/
char bdCrossPlatformAccountInfo::serializeSecuredFieldsToJSON(bdCrossPlatformAccountInfo *this, bdJSONSerializer *json, bool updatePassword)
{
  bool v6; 
  char *m_username; 
  __int64 v8; 
  __int64 v9; 

  v6 = 1;
  if ( !json )
    return 1;
  m_username = this->m_username;
  bdHandleAssert(this->m_username != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v8 = -1i64;
  v9 = -1i64;
  do
    ++v9;
  while ( m_username[v9] );
  if ( v9 )
    v6 = bdJSONSerializer::writeString(json, "userName", m_username);
  if ( updatePassword && bdStrlen(this->m_password) )
    v6 = v6 && bdJSONSerializer::writeString(json, "password", this->m_password);
  bdHandleAssert(this->m_email != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v8;
  while ( this->m_email[v8] );
  if ( !v8 )
    return v6;
  return v6 && bdJSONSerializer::writeString(json, "email", this->m_email);
}

/*
==============
bdCrossPlatformAccountInfo::serializeUnsecuredFieldsToJSON
==============
*/
char bdCrossPlatformAccountInfo::serializeUnsecuredFieldsToJSON(bdCrossPlatformAccountInfo *this, bdJSONSerializer *json, bool creatingAccount)
{
  bool v6; 
  char *m_firstName; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 m_gender; 
  const char *v14; 
  const char *v15; 
  __int64 v16; 
  __int64 v17; 
  const char *v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 m_accountType; 
  bool m_isChild; 
  bool m_over18; 

  v6 = 1;
  if ( !json )
    return 1;
  m_firstName = this->m_firstName;
  bdHandleAssert(this->m_firstName != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v8 = -1i64;
  v9 = -1i64;
  do
    ++v9;
  while ( m_firstName[v9] );
  if ( v9 )
    v6 = bdJSONSerializer::writeString(json, "firstName", m_firstName);
  bdHandleAssert(this->m_lastName != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v10 = -1i64;
  do
    ++v10;
  while ( this->m_lastName[v10] );
  if ( v10 )
    v6 = v6 && bdJSONSerializer::writeString(json, "lastName", this->m_lastName);
  bdHandleAssert(this->m_dateOfBirth != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v11 = -1i64;
  do
    ++v11;
  while ( this->m_dateOfBirth[v11] );
  if ( v11 )
    v6 = v6 && bdJSONSerializer::writeString(json, "dateOfBirth", this->m_dateOfBirth);
  bdHandleAssert(this->m_parentEmail != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v12 = -1i64;
  do
    ++v12;
  while ( this->m_parentEmail[v12] );
  if ( v12 )
    v6 = v6 && bdJSONSerializer::writeString(json, "parentEmail", this->m_parentEmail);
  m_gender = this->m_gender;
  v14 = (char *)&queryFormat.fmt + 3;
  if ( (int)m_gender >= 4 )
    v15 = (char *)&queryFormat.fmt + 3;
  else
    v15 = bdCrossPlatformAccountInfo::GenderStrings[m_gender];
  bdHandleAssert(v15 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v16 = -1i64;
  do
    ++v16;
  while ( v15[v16] );
  if ( v16 )
    v6 = v6 && ((v17 = this->m_gender, (int)v17 >= 4) ? (v18 = (char *)&queryFormat.fmt + 3) : (v18 = bdCrossPlatformAccountInfo::GenderStrings[v17]), bdJSONSerializer::writeString(json, "gender", v18));
  bdHandleAssert(this->m_address1 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v19 = -1i64;
  do
    ++v19;
  while ( this->m_address1[v19] );
  if ( v19 )
    v6 = v6 && bdJSONSerializer::writeString(json, "address1", this->m_address1);
  bdHandleAssert(this->m_address2 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v20 = -1i64;
  do
    ++v20;
  while ( this->m_address2[v20] );
  if ( v20 )
    v6 = v6 && bdJSONSerializer::writeString(json, "address2", this->m_address2);
  bdHandleAssert(this->m_city != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v21 = -1i64;
  do
    ++v21;
  while ( this->m_city[v21] );
  if ( v21 )
    v6 = v6 && bdJSONSerializer::writeString(json, "city", this->m_city);
  bdHandleAssert(this->m_state != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v22 = -1i64;
  do
    ++v22;
  while ( this->m_state[v22] );
  if ( v22 )
    v6 = v6 && bdJSONSerializer::writeString(json, "state", this->m_state);
  bdHandleAssert(this->m_zipCode != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v23 = -1i64;
  do
    ++v23;
  while ( this->m_zipCode[v23] );
  if ( v23 )
    v6 = v6 && bdJSONSerializer::writeString(json, "zip", this->m_zipCode);
  bdHandleAssert(this->m_country != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v24 = -1i64;
  do
    ++v24;
  while ( this->m_country[v24] );
  if ( v24 )
    v6 = v6 && bdJSONSerializer::writeString(json, "country", this->m_country);
  bdHandleAssert(this->m_mobile != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v25 = -1i64;
  do
    ++v25;
  while ( this->m_mobile[v25] );
  if ( v25 )
    v6 = v6 && bdJSONSerializer::writeString(json, "mobile", this->m_mobile);
  bdHandleAssert(this->m_phone != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v8;
  while ( this->m_phone[v8] );
  if ( v8 )
    v6 = v6 && bdJSONSerializer::writeString(json, "phone", this->m_phone);
  if ( !creatingAccount )
    return v6;
  if ( !v6 )
    goto LABEL_102;
  m_accountType = this->m_accountType;
  if ( (int)m_accountType < 3 )
    v14 = bdCrossPlatformAccountInfo::AccountTypeStrings[m_accountType];
  if ( bdJSONSerializer::writeString(json, "accountType", v14) )
    v6 = 1;
  else
LABEL_102:
    v6 = 0;
  m_isChild = this->m_isChild;
  if ( m_isChild )
    v6 = v6 && bdJSONSerializer::writeBoolean(json, "isChild", m_isChild);
  if ( bdStrlen(this->m_dateOfBirth) )
    return v6;
  m_over18 = this->m_over18;
  if ( !m_over18 )
    return v6;
  return v6 && bdJSONSerializer::writeBoolean(json, "over18", m_over18);
}

