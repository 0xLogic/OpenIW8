/*
==============
bdUnoAccountInfo::~bdUnoAccountInfo
==============
*/

void __fastcall bdUnoAccountInfo::~bdUnoAccountInfo(bdUnoAccountInfo *this)
{
  ??1bdUnoAccountInfo@@UEAA@XZ(this);
}

/*
==============
bdUnoAccountInfo::bdUnoAccountInfo
==============
*/

void __fastcall bdUnoAccountInfo::bdUnoAccountInfo(bdUnoAccountInfo *this, const bdUnoAccountInfo *__that)
{
  ??0bdUnoAccountInfo@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdUnoAccountInfo::serializeSecuredFieldsToJSON
==============
*/

bool __fastcall bdUnoAccountInfo::serializeSecuredFieldsToJSON(bdUnoAccountInfo *this, bdJSONSerializer *json, bool updatePassword)
{
  return ?serializeSecuredFieldsToJSON@bdUnoAccountInfo@@QEBA_NPEAVbdJSONSerializer@@_N@Z(this, json, updatePassword);
}

/*
==============
bdUnoAccountInfo::deserializeFromJSON
==============
*/

bool __fastcall bdUnoAccountInfo::deserializeFromJSON(bdUnoAccountInfo *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdUnoAccountInfo@@UEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdUnoAccountInfo::bdUnoAccountInfo
==============
*/

void __fastcall bdUnoAccountInfo::bdUnoAccountInfo(bdUnoAccountInfo *this)
{
  ??0bdUnoAccountInfo@@QEAA@XZ(this);
}

/*
==============
bdUnoAccountInfo::serializeUnsecuredFieldsToJSON
==============
*/

bool __fastcall bdUnoAccountInfo::serializeUnsecuredFieldsToJSON(bdUnoAccountInfo *this, bdJSONSerializer *json, bool creatingAccount)
{
  return ?serializeUnsecuredFieldsToJSON@bdUnoAccountInfo@@QEBA_NPEAVbdJSONSerializer@@_N@Z(this, json, creatingAccount);
}

/*
==============
bdUnoAccountInfo::bdUnoAccountInfo
==============
*/
void bdUnoAccountInfo::bdUnoAccountInfo(bdUnoAccountInfo *this, const bdUnoAccountInfo *__that)
{
  __int64 v3; 
  char *m_email; 
  char *v6; 
  __int64 v7; 
  __int128 v8; 
  __int64 v9; 
  char *m_firstName; 
  __int64 v11; 
  char *v12; 
  __int128 v13; 
  __int64 v14; 
  char *m_lastName; 
  char *v16; 
  __int128 v17; 
  char *m_parentEmail; 
  char *v19; 
  __int128 v20; 
  char *m_address1; 
  __int64 v22; 
  char *v23; 
  __int128 v24; 
  char *m_address2; 
  char *v26; 
  __int64 v27; 
  __int128 v28; 
  char v29; 
  char *m_state; 
  char *v31; 
  __int64 v32; 
  __int128 v33; 
  char *m_city; 
  char *v35; 
  __int128 v36; 
  __int64 v37; 
  __int64 v38; 
  char *m_accessToken; 
  char *v40; 
  __int128 v41; 
  char *m_refreshToken; 
  char *v43; 
  __int128 v44; 

  this->__vftable = (bdUnoAccountInfo_vtbl *)&bdUnoAccountInfo::`vftable';
  v3 = 2i64;
  this->m_userID = __that->m_userID;
  this->m_accountType = __that->m_accountType;
  *(__m256i *)this->m_username = *(__m256i *)__that->m_username;
  *(__m256i *)&this->m_username[32] = *(__m256i *)&__that->m_username[32];
  *(__m256i *)&this->m_username[64] = *(__m256i *)&__that->m_username[64];
  *(__m256i *)&this->m_username[96] = *(__m256i *)&__that->m_username[96];
  *(_OWORD *)&this->m_username[128] = *(_OWORD *)&__that->m_username[128];
  *(_DWORD *)&this->m_username[144] = *(_DWORD *)&__that->m_username[144];
  *(_WORD *)&this->m_username[148] = *(_WORD *)&__that->m_username[148];
  this->m_username[150] = __that->m_username[150];
  *(__m256i *)this->m_password = *(__m256i *)__that->m_password;
  *(__m256i *)&this->m_password[32] = *(__m256i *)&__that->m_password[32];
  *(__m256i *)&this->m_password[64] = *(__m256i *)&__that->m_password[64];
  *(_DWORD *)&this->m_password[96] = *(_DWORD *)&__that->m_password[96];
  this->m_password[100] = __that->m_password[100];
  m_email = this->m_email;
  v6 = __that->m_email;
  v7 = 2i64;
  do
  {
    m_email += 128;
    v8 = *(_OWORD *)v6;
    v6 += 128;
    *((_OWORD *)m_email - 8) = v8;
    *((_OWORD *)m_email - 7) = *((_OWORD *)v6 - 7);
    *((_OWORD *)m_email - 6) = *((_OWORD *)v6 - 6);
    *((_OWORD *)m_email - 5) = *((_OWORD *)v6 - 5);
    *((_OWORD *)m_email - 4) = *((_OWORD *)v6 - 4);
    *((_OWORD *)m_email - 3) = *((_OWORD *)v6 - 3);
    *((_OWORD *)m_email - 2) = *((_OWORD *)v6 - 2);
    *((_OWORD *)m_email - 1) = *((_OWORD *)v6 - 1);
    --v7;
  }
  while ( v7 );
  v9 = 3i64;
  m_firstName = this->m_firstName;
  v11 = 3i64;
  v12 = __that->m_firstName;
  do
  {
    m_firstName += 128;
    v13 = *(_OWORD *)v12;
    v12 += 128;
    *((_OWORD *)m_firstName - 8) = v13;
    *((_OWORD *)m_firstName - 7) = *((_OWORD *)v12 - 7);
    *((_OWORD *)m_firstName - 6) = *((_OWORD *)v12 - 6);
    *((_OWORD *)m_firstName - 5) = *((_OWORD *)v12 - 5);
    *((_OWORD *)m_firstName - 4) = *((_OWORD *)v12 - 4);
    *((_OWORD *)m_firstName - 3) = *((_OWORD *)v12 - 3);
    *((_OWORD *)m_firstName - 2) = *((_OWORD *)v12 - 2);
    *((_OWORD *)m_firstName - 1) = *((_OWORD *)v12 - 1);
    --v11;
  }
  while ( v11 );
  *(_OWORD *)m_firstName = *(_OWORD *)v12;
  v14 = 3i64;
  m_firstName[16] = v12[16];
  m_lastName = this->m_lastName;
  v16 = __that->m_lastName;
  do
  {
    m_lastName += 128;
    v17 = *(_OWORD *)v16;
    v16 += 128;
    *((_OWORD *)m_lastName - 8) = v17;
    *((_OWORD *)m_lastName - 7) = *((_OWORD *)v16 - 7);
    *((_OWORD *)m_lastName - 6) = *((_OWORD *)v16 - 6);
    *((_OWORD *)m_lastName - 5) = *((_OWORD *)v16 - 5);
    *((_OWORD *)m_lastName - 4) = *((_OWORD *)v16 - 4);
    *((_OWORD *)m_lastName - 3) = *((_OWORD *)v16 - 3);
    *((_OWORD *)m_lastName - 2) = *((_OWORD *)v16 - 2);
    *((_OWORD *)m_lastName - 1) = *((_OWORD *)v16 - 1);
    --v14;
  }
  while ( v14 );
  *(_OWORD *)m_lastName = *(_OWORD *)v16;
  m_lastName[16] = v16[16];
  m_parentEmail = __that->m_parentEmail;
  *(double *)this->m_dateOfBirth = *(double *)__that->m_dateOfBirth;
  *(_DWORD *)&this->m_dateOfBirth[8] = *(_DWORD *)&__that->m_dateOfBirth[8];
  this->m_dateOfBirth[12] = __that->m_dateOfBirth[12];
  this->m_over18 = __that->m_over18;
  this->m_isChild = __that->m_isChild;
  v19 = this->m_parentEmail;
  do
  {
    v19 += 128;
    v20 = *(_OWORD *)m_parentEmail;
    m_parentEmail += 128;
    *((_OWORD *)v19 - 8) = v20;
    *((_OWORD *)v19 - 7) = *((_OWORD *)m_parentEmail - 7);
    *((_OWORD *)v19 - 6) = *((_OWORD *)m_parentEmail - 6);
    *((_OWORD *)v19 - 5) = *((_OWORD *)m_parentEmail - 5);
    *((_OWORD *)v19 - 4) = *((_OWORD *)m_parentEmail - 4);
    *((_OWORD *)v19 - 3) = *((_OWORD *)m_parentEmail - 3);
    *((_OWORD *)v19 - 2) = *((_OWORD *)m_parentEmail - 2);
    *((_OWORD *)v19 - 1) = *((_OWORD *)m_parentEmail - 1);
    --v3;
  }
  while ( v3 );
  m_address1 = this->m_address1;
  this->m_gender = __that->m_gender;
  v22 = 3i64;
  this->m_emailVerified = __that->m_emailVerified;
  this->m_parentEmailVerified = __that->m_parentEmailVerified;
  this->m_dateOfBirthValidated = __that->m_dateOfBirthValidated;
  v23 = __that->m_address1;
  do
  {
    m_address1 += 128;
    v24 = *(_OWORD *)v23;
    v23 += 128;
    *((_OWORD *)m_address1 - 8) = v24;
    *((_OWORD *)m_address1 - 7) = *((_OWORD *)v23 - 7);
    *((_OWORD *)m_address1 - 6) = *((_OWORD *)v23 - 6);
    *((_OWORD *)m_address1 - 5) = *((_OWORD *)v23 - 5);
    *((_OWORD *)m_address1 - 4) = *((_OWORD *)v23 - 4);
    *((_OWORD *)m_address1 - 3) = *((_OWORD *)v23 - 3);
    *((_OWORD *)m_address1 - 2) = *((_OWORD *)v23 - 2);
    *((_OWORD *)m_address1 - 1) = *((_OWORD *)v23 - 1);
    --v22;
  }
  while ( v22 );
  *(_OWORD *)m_address1 = *(_OWORD *)v23;
  m_address2 = this->m_address2;
  m_address1[16] = v23[16];
  v26 = __that->m_address2;
  v27 = 3i64;
  do
  {
    m_address2 += 128;
    v28 = *(_OWORD *)v26;
    v26 += 128;
    *((_OWORD *)m_address2 - 8) = v28;
    *((_OWORD *)m_address2 - 7) = *((_OWORD *)v26 - 7);
    *((_OWORD *)m_address2 - 6) = *((_OWORD *)v26 - 6);
    *((_OWORD *)m_address2 - 5) = *((_OWORD *)v26 - 5);
    *((_OWORD *)m_address2 - 4) = *((_OWORD *)v26 - 4);
    *((_OWORD *)m_address2 - 3) = *((_OWORD *)v26 - 3);
    *((_OWORD *)m_address2 - 2) = *((_OWORD *)v26 - 2);
    *((_OWORD *)m_address2 - 1) = *((_OWORD *)v26 - 1);
    --v27;
  }
  while ( v27 );
  *(_OWORD *)m_address2 = *(_OWORD *)v26;
  v29 = v26[16];
  m_state = __that->m_state;
  m_address2[16] = v29;
  v31 = this->m_state;
  v32 = 3i64;
  do
  {
    v31 += 128;
    v33 = *(_OWORD *)m_state;
    m_state += 128;
    *((_OWORD *)v31 - 8) = v33;
    *((_OWORD *)v31 - 7) = *((_OWORD *)m_state - 7);
    *((_OWORD *)v31 - 6) = *((_OWORD *)m_state - 6);
    *((_OWORD *)v31 - 5) = *((_OWORD *)m_state - 5);
    *((_OWORD *)v31 - 4) = *((_OWORD *)m_state - 4);
    *((_OWORD *)v31 - 3) = *((_OWORD *)m_state - 3);
    *((_OWORD *)v31 - 2) = *((_OWORD *)m_state - 2);
    *((_OWORD *)v31 - 1) = *((_OWORD *)m_state - 1);
    --v32;
  }
  while ( v32 );
  *(_OWORD *)v31 = *(_OWORD *)m_state;
  v31[16] = m_state[16];
  m_city = this->m_city;
  *(_OWORD *)this->m_zipCode = *(_OWORD *)__that->m_zipCode;
  *(_OWORD *)&this->m_zipCode[16] = *(_OWORD *)&__that->m_zipCode[16];
  *(_OWORD *)&this->m_zipCode[32] = *(_OWORD *)&__that->m_zipCode[32];
  *(_OWORD *)&this->m_zipCode[48] = *(_OWORD *)&__that->m_zipCode[48];
  *(_OWORD *)&this->m_zipCode[64] = *(_OWORD *)&__that->m_zipCode[64];
  *(_OWORD *)&this->m_zipCode[80] = *(_OWORD *)&__that->m_zipCode[80];
  *(_OWORD *)&this->m_zipCode[96] = *(_OWORD *)&__that->m_zipCode[96];
  *(_OWORD *)&this->m_zipCode[112] = *(_OWORD *)&__that->m_zipCode[112];
  *(_OWORD *)&this->m_zipCode[128] = *(_OWORD *)&__that->m_zipCode[128];
  *(_OWORD *)&this->m_zipCode[144] = *(_OWORD *)&__that->m_zipCode[144];
  *(_OWORD *)&this->m_zipCode[160] = *(_OWORD *)&__that->m_zipCode[160];
  *(_OWORD *)&this->m_zipCode[176] = *(_OWORD *)&__that->m_zipCode[176];
  *(_QWORD *)&this->m_zipCode[192] = *(_QWORD *)&__that->m_zipCode[192];
  this->m_zipCode[200] = __that->m_zipCode[200];
  v35 = __that->m_city;
  do
  {
    m_city += 128;
    v36 = *(_OWORD *)v35;
    v35 += 128;
    *((_OWORD *)m_city - 8) = v36;
    *((_OWORD *)m_city - 7) = *((_OWORD *)v35 - 7);
    *((_OWORD *)m_city - 6) = *((_OWORD *)v35 - 6);
    *((_OWORD *)m_city - 5) = *((_OWORD *)v35 - 5);
    *((_OWORD *)m_city - 4) = *((_OWORD *)v35 - 4);
    *((_OWORD *)m_city - 3) = *((_OWORD *)v35 - 3);
    *((_OWORD *)m_city - 2) = *((_OWORD *)v35 - 2);
    *((_OWORD *)m_city - 1) = *((_OWORD *)v35 - 1);
    --v9;
  }
  while ( v9 );
  *(_OWORD *)m_city = *(_OWORD *)v35;
  v37 = 8i64;
  m_city[16] = v35[16];
  v38 = 8i64;
  m_accessToken = __that->m_tokens.m_accessToken;
  *(_WORD *)this->m_country = *(_WORD *)__that->m_country;
  this->m_country[2] = __that->m_country[2];
  *(__m256i *)this->m_mobile = *(__m256i *)__that->m_mobile;
  *(_OWORD *)&this->m_mobile[32] = *(_OWORD *)&__that->m_mobile[32];
  *(_WORD *)&this->m_mobile[48] = *(_WORD *)&__that->m_mobile[48];
  this->m_mobile[50] = __that->m_mobile[50];
  *(__m256i *)this->m_phone = *(__m256i *)__that->m_phone;
  *(_OWORD *)&this->m_phone[32] = *(_OWORD *)&__that->m_phone[32];
  *(_WORD *)&this->m_phone[48] = *(_WORD *)&__that->m_phone[48];
  this->m_phone[50] = __that->m_phone[50];
  *(_OWORD *)this->m_createdTime = *(_OWORD *)__that->m_createdTime;
  *(_DWORD *)&this->m_createdTime[16] = *(_DWORD *)&__that->m_createdTime[16];
  this->m_createdTime[20] = __that->m_createdTime[20];
  *(_OWORD *)this->m_updatedTime = *(_OWORD *)__that->m_updatedTime;
  *(_DWORD *)&this->m_updatedTime[16] = *(_DWORD *)&__that->m_updatedTime[16];
  this->m_updatedTime[20] = __that->m_updatedTime[20];
  this->m_tokens.__vftable = (bdUnoTokens_vtbl *)&bdUnoTokens::`vftable';
  v40 = this->m_tokens.m_accessToken;
  do
  {
    v40 += 128;
    v41 = *(_OWORD *)m_accessToken;
    m_accessToken += 128;
    *((_OWORD *)v40 - 8) = v41;
    *((_OWORD *)v40 - 7) = *((_OWORD *)m_accessToken - 7);
    *((_OWORD *)v40 - 6) = *((_OWORD *)m_accessToken - 6);
    *((_OWORD *)v40 - 5) = *((_OWORD *)m_accessToken - 5);
    *((_OWORD *)v40 - 4) = *((_OWORD *)m_accessToken - 4);
    *((_OWORD *)v40 - 3) = *((_OWORD *)m_accessToken - 3);
    *((_OWORD *)v40 - 2) = *((_OWORD *)m_accessToken - 2);
    *((_OWORD *)v40 - 1) = *((_OWORD *)m_accessToken - 1);
    --v38;
  }
  while ( v38 );
  m_refreshToken = __that->m_tokens.m_refreshToken;
  this->m_tokens.m_accessTokenExpiry = __that->m_tokens.m_accessTokenExpiry;
  v43 = this->m_tokens.m_refreshToken;
  do
  {
    v43 += 128;
    v44 = *(_OWORD *)m_refreshToken;
    m_refreshToken += 128;
    *((_OWORD *)v43 - 8) = v44;
    *((_OWORD *)v43 - 7) = *((_OWORD *)m_refreshToken - 7);
    *((_OWORD *)v43 - 6) = *((_OWORD *)m_refreshToken - 6);
    *((_OWORD *)v43 - 5) = *((_OWORD *)m_refreshToken - 5);
    *((_OWORD *)v43 - 4) = *((_OWORD *)m_refreshToken - 4);
    *((_OWORD *)v43 - 3) = *((_OWORD *)m_refreshToken - 3);
    *((_OWORD *)v43 - 2) = *((_OWORD *)m_refreshToken - 2);
    *((_OWORD *)v43 - 1) = *((_OWORD *)m_refreshToken - 1);
    --v37;
  }
  while ( v37 );
  this->m_tokens.m_refreshTokenExpiry = __that->m_tokens.m_refreshTokenExpiry;
  this->m_subscriptionOptIn = __that->m_subscriptionOptIn;
}

/*
==============
bdUnoAccountInfo::bdUnoAccountInfo
==============
*/
void bdUnoAccountInfo::bdUnoAccountInfo(bdUnoAccountInfo *this)
{
  this->__vftable = (bdUnoAccountInfo_vtbl *)&bdUnoAccountInfo::`vftable';
  this->m_userID = 0i64;
  this->m_accountType = BD_UNO_ACCOUNT_FULL;
  *(_WORD *)&this->m_over18 = 0;
  this->m_gender = BD_UNO_GENDER_UNDEFINED;
  *(_WORD *)&this->m_emailVerified = 0;
  this->m_dateOfBirthValidated = 0;
  bdUnoTokens::bdUnoTokens(&this->m_tokens);
  this->m_subscriptionOptIn = 0;
  memset_0(this->m_username, 0, 0x52Bui64);
  memset_0(this->m_parentEmail, 0, sizeof(this->m_parentEmail));
  memset_0(this->m_address1, 0, 0x7A0ui64);
}

/*
==============
bdUnoAccountInfo::~bdUnoAccountInfo
==============
*/
void bdUnoAccountInfo::~bdUnoAccountInfo(bdUnoAccountInfo *this)
{
  this->__vftable = (bdUnoAccountInfo_vtbl *)&bdUnoAccountInfo::`vftable';
  bdUnoTokens::~bdUnoTokens(&this->m_tokens);
  this->__vftable = (bdUnoAccountInfo_vtbl *)&bdSingleIdentityJSONDeserializable::`vftable';
}

/*
==============
bdUnoAccountInfo::deserializeFromJSON
==============
*/
char bdUnoAccountInfo::deserializeFromJSON(bdUnoAccountInfo *this, bdJSONDeserializer *json)
{
  bool v4; 
  bool String; 
  char v6; 
  unsigned __int16 v7; 
  unsigned __int16 v8; 
  const char *v9; 
  char *v10; 
  int v11; 
  int v12; 
  char v13; 
  const char *v14; 
  char *v15; 
  int v16; 
  int v17; 
  bdJSONDeserializer v19; 
  char value[8]; 
  char v21[16]; 

  v4 = json->m_type == BD_JSON_OBJECT;
  if ( json->m_type == BD_JSON_OBJECT )
  {
    String = bdJSONDeserializer::getString(json, "accountType", v21, 0xBu);
    v6 = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      if ( v8 >= 3u )
        break;
      v9 = bdUnoAccountInfo::bdUnoAccountTypeStrings[v8];
      v10 = (char *)(v21 - v9);
      do
      {
        v11 = (unsigned __int8)v10[(_QWORD)v9];
        v12 = *(unsigned __int8 *)v9 - v11;
        if ( v12 )
          break;
        ++v9;
      }
      while ( v11 );
      if ( !v12 )
      {
        this->m_accountType = v8;
        v6 = 1;
      }
      ++v8;
    }
    while ( !v6 );
    v4 = String && bdJSONDeserializer::getUInt64(json, "unoID", &this->m_userID) && bdJSONDeserializer::getString(json, "userName", this->m_username, 0x97u);
    if ( bdJSONDeserializer::hasKey(json, "address1") )
      v4 = v4 && bdJSONDeserializer::getString(json, "address1", this->m_address1, 0x191u);
    if ( bdJSONDeserializer::hasKey(json, "address2") )
      v4 = v4 && bdJSONDeserializer::getString(json, "address2", this->m_address2, 0x191u);
    if ( bdJSONDeserializer::hasKey(json, "parentEmailVerified") )
      v4 = v4 && bdJSONDeserializer::getBoolean(json, "parentEmailVerified", &this->m_parentEmailVerified);
    if ( bdJSONDeserializer::hasKey(json, "dateOfBirthValidated") )
      v4 = v4 && bdJSONDeserializer::getBoolean(json, "dateOfBirthValidated", &this->m_dateOfBirthValidated);
    if ( bdJSONDeserializer::hasKey(json, "phone") )
      v4 = v4 && bdJSONDeserializer::getString(json, "phone", this->m_phone, 0x33u);
    if ( bdJSONDeserializer::hasKey(json, "parentEmail") )
      v4 = v4 && bdJSONDeserializer::getString(json, "parentEmail", this->m_parentEmail, 0x100u);
    if ( bdJSONDeserializer::hasKey(json, "isChild") )
      v4 = v4 && bdJSONDeserializer::getBoolean(json, "isChild", &this->m_isChild);
    if ( bdJSONDeserializer::hasKey(json, "city") )
      v4 = v4 && bdJSONDeserializer::getString(json, "city", this->m_city, 0x191u);
    if ( bdJSONDeserializer::hasKey(json, "zip") )
      v4 = v4 && bdJSONDeserializer::getString(json, "zip", this->m_zipCode, 0xC9u);
    if ( bdJSONDeserializer::hasKey(json, "firstName") )
      v4 = v4 && bdJSONDeserializer::getString(json, "firstName", this->m_firstName, 0x191u);
    if ( bdJSONDeserializer::hasKey(json, "lastName") )
      v4 = v4 && bdJSONDeserializer::getString(json, "lastName", this->m_lastName, 0x191u);
    if ( bdJSONDeserializer::hasKey(json, "mobile") )
      v4 = v4 && bdJSONDeserializer::getString(json, "mobile", this->m_mobile, 0x33u);
    if ( bdJSONDeserializer::hasKey(json, "dateOfBirth") )
      v4 = v4 && bdJSONDeserializer::getString(json, "dateOfBirth", this->m_dateOfBirth, 0xDu);
    if ( bdJSONDeserializer::hasKey(json, "state") )
      v4 = v4 && bdJSONDeserializer::getString(json, "state", this->m_state, 0x191u);
    if ( bdJSONDeserializer::hasKey(json, "country") )
      v4 = v4 && bdJSONDeserializer::getString(json, "country", this->m_country, 3u);
    if ( bdJSONDeserializer::hasKey(json, "email") )
      v4 = v4 && bdJSONDeserializer::getString(json, "email", this->m_email, 0x100u);
    if ( bdJSONDeserializer::hasKey(json, "emailVerified") )
      v4 = v4 && bdJSONDeserializer::getBoolean(json, "emailVerified", &this->m_emailVerified);
    if ( bdJSONDeserializer::hasKey(json, "created") )
      v4 = v4 && bdJSONDeserializer::getString(json, "created", this->m_createdTime, 0x15u);
    if ( bdJSONDeserializer::hasKey(json, "updated") )
      v4 = v4 && bdJSONDeserializer::getString(json, "updated", this->m_updatedTime, 0x15u);
    if ( bdJSONDeserializer::hasKey(json, "gender") )
    {
      bdJSONDeserializer::getString(json, "gender", value, 7u);
      v13 = 0;
      do
      {
        if ( v7 >= 4u )
          break;
        v14 = bdUnoAccountInfo::bdUnoGenderStrings[v7];
        v15 = (char *)(value - v14);
        do
        {
          v16 = (unsigned __int8)v15[(_QWORD)v14];
          v17 = *(unsigned __int8 *)v14 - v16;
          if ( v17 )
            break;
          ++v14;
        }
        while ( v16 );
        if ( !v17 )
        {
          this->m_gender = v7;
          v13 = 1;
        }
        ++v7;
      }
      while ( !v13 );
    }
    if ( bdJSONDeserializer::hasKey(json, "tokens") )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v19);
      v4 = v4 && bdJSONDeserializer::getObject(json, "tokens", &v19) && this->m_tokens.deserializeFromJSON(&this->m_tokens, &v19);
      bdJSONDeserializer::~bdJSONDeserializer(&v19);
    }
    if ( bdJSONDeserializer::hasKey(json, "over18") )
    {
      if ( v4 && bdJSONDeserializer::getBoolean(json, "over18", &this->m_over18) )
        return 1;
      v4 = 0;
      goto LABEL_132;
    }
  }
  if ( !v4 )
LABEL_132:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUnoAccountInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdunoaccountinfo.cpp", "bdUnoAccountInfo::deserializeFromJSON", 0xC0u, "Unable to parse JSON response for bdUnoAccountInfo");
  return v4;
}

/*
==============
bdUnoAccountInfo::serializeSecuredFieldsToJSON
==============
*/
char bdUnoAccountInfo::serializeSecuredFieldsToJSON(bdUnoAccountInfo *this, bdJSONSerializer *json, bool updatePassword)
{
  bool v6; 
  char *m_username; 
  __int64 v8; 
  __int64 v9; 
  bool v10; 

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
  if ( updatePassword )
  {
    if ( bdStrlen(this->m_password) )
    {
      if ( !v6 )
        goto LABEL_14;
      v10 = bdJSONSerializer::writeString(json, "password", this->m_password);
    }
    else
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUnoAccountInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdunoaccountinfo.cpp", "bdUnoAccountInfo::serializeSecuredFieldsToJSON", 0xD8u, "Creating passwordless Uno account.");
      if ( !v6 )
        goto LABEL_14;
      v10 = bdJSONSerializer::writeNull(json, "password");
    }
    if ( v10 )
    {
      v6 = 1;
      goto LABEL_15;
    }
LABEL_14:
    v6 = 0;
  }
LABEL_15:
  bdHandleAssert(this->m_email != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v8;
  while ( this->m_email[v8] );
  if ( v8 )
    return v6 && bdJSONSerializer::writeString(json, "email", this->m_email);
  else
    return v6;
}

/*
==============
bdUnoAccountInfo::serializeUnsecuredFieldsToJSON
==============
*/
char bdUnoAccountInfo::serializeUnsecuredFieldsToJSON(bdUnoAccountInfo *this, bdJSONSerializer *json, bool creatingAccount)
{
  bool v6; 
  char *m_firstName; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  const char *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
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
  v13 = bdUnoAccountInfo::bdUnoGenderStrings[this->m_gender];
  bdHandleAssert(v13 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v14 = -1i64;
  do
    ++v14;
  while ( v13[v14] );
  if ( v14 )
    v6 = v6 && bdJSONSerializer::writeString(json, "gender", bdUnoAccountInfo::bdUnoGenderStrings[this->m_gender]);
  bdHandleAssert(this->m_address1 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v15 = -1i64;
  do
    ++v15;
  while ( this->m_address1[v15] );
  if ( v15 )
    v6 = v6 && bdJSONSerializer::writeString(json, "address1", this->m_address1);
  bdHandleAssert(this->m_address2 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v16 = -1i64;
  do
    ++v16;
  while ( this->m_address2[v16] );
  if ( v16 )
    v6 = v6 && bdJSONSerializer::writeString(json, "address2", this->m_address2);
  bdHandleAssert(this->m_city != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v17 = -1i64;
  do
    ++v17;
  while ( this->m_city[v17] );
  if ( v17 )
    v6 = v6 && bdJSONSerializer::writeString(json, "city", this->m_city);
  bdHandleAssert(this->m_state != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v18 = -1i64;
  do
    ++v18;
  while ( this->m_state[v18] );
  if ( v18 )
    v6 = v6 && bdJSONSerializer::writeString(json, "state", this->m_state);
  bdHandleAssert(this->m_zipCode != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v19 = -1i64;
  do
    ++v19;
  while ( this->m_zipCode[v19] );
  if ( v19 )
    v6 = v6 && bdJSONSerializer::writeString(json, "zip", this->m_zipCode);
  bdHandleAssert(this->m_country != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v20 = -1i64;
  do
    ++v20;
  while ( this->m_country[v20] );
  if ( v20 )
    v6 = v6 && bdJSONSerializer::writeString(json, "country", this->m_country);
  bdHandleAssert(this->m_mobile != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v21 = -1i64;
  do
    ++v21;
  while ( this->m_mobile[v21] );
  if ( v21 )
    v6 = v6 && bdJSONSerializer::writeString(json, "mobile", this->m_mobile);
  bdHandleAssert(this->m_phone != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v8;
  while ( this->m_phone[v8] );
  if ( v8 )
    v6 = v6 && bdJSONSerializer::writeString(json, "phone", this->m_phone);
  if ( !creatingAccount )
    return v6;
  v6 = v6 && bdJSONSerializer::writeString(json, "accountType", bdUnoAccountInfo::bdUnoAccountTypeStrings[this->m_accountType]);
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

