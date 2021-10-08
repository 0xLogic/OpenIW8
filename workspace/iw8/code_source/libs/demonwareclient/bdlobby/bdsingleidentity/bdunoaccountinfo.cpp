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
  __int64 v15; 
  __int64 v24; 
  __int64 v26; 
  __int64 v37; 
  __int64 v61; 
  __int64 v74; 
  char v84; 
  __int64 v87; 
  __int64 v120; 
  __int64 v121; 

  _R8 = this;
  this->__vftable = (bdUnoAccountInfo_vtbl *)&bdUnoAccountInfo::`vftable';
  v3 = 2i64;
  _R9 = __that;
  this->m_userID = __that->m_userID;
  this->m_accountType = __that->m_accountType;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx+14h]
    vmovups ymmword ptr [rcx+14h], ymm0
    vmovups ymm1, ymmword ptr [rdx+34h]
    vmovups ymmword ptr [rcx+34h], ymm1
    vmovups ymm0, ymmword ptr [rdx+54h]
    vmovups ymmword ptr [rcx+54h], ymm0
    vmovups ymm1, ymmword ptr [rdx+74h]
    vmovups ymmword ptr [rcx+74h], ymm1
    vmovups xmm0, xmmword ptr [rdx+94h]
    vmovups xmmword ptr [rcx+94h], xmm0
  }
  *(_DWORD *)&this->m_username[144] = *(_DWORD *)&__that->m_username[144];
  *(_WORD *)&this->m_username[148] = *(_WORD *)&__that->m_username[148];
  this->m_username[150] = __that->m_username[150];
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx+0ABh]
    vmovups ymmword ptr [rcx+0ABh], ymm0
    vmovups ymm1, ymmword ptr [rdx+0CBh]
    vmovups ymmword ptr [rcx+0CBh], ymm1
    vmovups ymm0, ymmword ptr [rdx+0EBh]
    vmovups ymmword ptr [rcx+0EBh], ymm0
  }
  *(_DWORD *)&this->m_password[96] = *(_DWORD *)&__that->m_password[96];
  this->m_password[100] = __that->m_password[100];
  _RAX = this->m_email;
  _RCX = __that->m_email;
  v15 = 2i64;
  do
  {
    _RAX += 128;
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    _RCX += 128;
    __asm
    {
      vmovups xmmword ptr [rax-80h], xmm0
      vmovups xmm1, xmmword ptr [rcx-70h]
      vmovups xmmword ptr [rax-70h], xmm1
      vmovups xmm0, xmmword ptr [rcx-60h]
      vmovups xmmword ptr [rax-60h], xmm0
      vmovups xmm1, xmmword ptr [rcx-50h]
      vmovups xmmword ptr [rax-50h], xmm1
      vmovups xmm0, xmmword ptr [rcx-40h]
      vmovups xmmword ptr [rax-40h], xmm0
      vmovups xmm1, xmmword ptr [rcx-30h]
      vmovups xmmword ptr [rax-30h], xmm1
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmm1, xmmword ptr [rcx-10h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v15;
  }
  while ( v15 );
  v24 = 3i64;
  _RCX = _R8->m_firstName;
  v26 = 3i64;
  _RAX = _R9->m_firstName;
  do
  {
    _RCX += 128;
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX += 128;
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v26;
  }
  while ( v26 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
  }
  v37 = 3i64;
  _RCX[16] = _RAX[16];
  _RCX = _R8->m_lastName;
  _RAX = _R9->m_lastName;
  do
  {
    _RCX += 128;
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX += 128;
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v37;
  }
  while ( v37 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
  }
  _RCX[16] = _RAX[16];
  _RCX = _R9->m_parentEmail;
  __asm
  {
    vmovsd  xmm0, qword ptr [r9+532h]
    vmovsd  qword ptr [r8+532h], xmm0
  }
  *(_DWORD *)&_R8->m_dateOfBirth[8] = *(_DWORD *)&_R9->m_dateOfBirth[8];
  _R8->m_dateOfBirth[12] = _R9->m_dateOfBirth[12];
  _R8->m_over18 = _R9->m_over18;
  _R8->m_isChild = _R9->m_isChild;
  _RAX = _R8->m_parentEmail;
  do
  {
    _RAX += 128;
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    _RCX += 128;
    __asm
    {
      vmovups xmmword ptr [rax-80h], xmm0
      vmovups xmm1, xmmword ptr [rcx-70h]
      vmovups xmmword ptr [rax-70h], xmm1
      vmovups xmm0, xmmword ptr [rcx-60h]
      vmovups xmmword ptr [rax-60h], xmm0
      vmovups xmm1, xmmword ptr [rcx-50h]
      vmovups xmmword ptr [rax-50h], xmm1
      vmovups xmm0, xmmword ptr [rcx-40h]
      vmovups xmmword ptr [rax-40h], xmm0
      vmovups xmm1, xmmword ptr [rcx-30h]
      vmovups xmmword ptr [rax-30h], xmm1
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmm1, xmmword ptr [rcx-10h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v3;
  }
  while ( v3 );
  _RCX = _R8->m_address1;
  _R8->m_gender = _R9->m_gender;
  v61 = 3i64;
  _R8->m_emailVerified = _R9->m_emailVerified;
  _R8->m_parentEmailVerified = _R9->m_parentEmailVerified;
  _R8->m_dateOfBirthValidated = _R9->m_dateOfBirthValidated;
  _RAX = _R9->m_address1;
  do
  {
    _RCX += 128;
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX += 128;
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v61;
  }
  while ( v61 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
  }
  _RDX = _R8->m_address2;
  _RCX[16] = _RAX[16];
  _RAX = _R9->m_address2;
  v74 = 3i64;
  do
  {
    _RDX += 128;
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX += 128;
    __asm
    {
      vmovups xmmword ptr [rdx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rdx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rdx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rdx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rdx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rdx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rdx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rdx-10h], xmm1
    }
    --v74;
  }
  while ( v74 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rdx], xmm0
  }
  v84 = _RAX[16];
  _RAX = _R9->m_state;
  _RDX[16] = v84;
  _RCX = _R8->m_state;
  v87 = 3i64;
  do
  {
    _RCX += 128;
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX += 128;
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v87;
  }
  while ( v87 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
  }
  _RCX[16] = _RAX[16];
  _RCX = _R8->m_city;
  __asm
  {
    vmovups xmm0, xmmword ptr [r9+0AFEh]
    vmovups xmmword ptr [r8+0AFEh], xmm0
    vmovups xmm1, xmmword ptr [r9+0B0Eh]
    vmovups xmmword ptr [r8+0B0Eh], xmm1
    vmovups xmm0, xmmword ptr [r9+0B1Eh]
    vmovups xmmword ptr [r8+0B1Eh], xmm0
    vmovups xmm1, xmmword ptr [r9+0B2Eh]
    vmovups xmmword ptr [r8+0B2Eh], xmm1
    vmovups xmm0, xmmword ptr [r9+0B3Eh]
    vmovups xmmword ptr [r8+0B3Eh], xmm0
    vmovups xmm1, xmmword ptr [r9+0B4Eh]
    vmovups xmmword ptr [r8+0B4Eh], xmm1
    vmovups xmm0, xmmword ptr [r9+0B5Eh]
    vmovups xmmword ptr [r8+0B5Eh], xmm0
    vmovups xmm1, xmmword ptr [r9+0B6Eh]
    vmovups xmmword ptr [r8+0B6Eh], xmm1
    vmovups xmm0, xmmword ptr [r9+0B7Eh]
    vmovups xmmword ptr [r8+0B7Eh], xmm0
    vmovups xmm1, xmmword ptr [r9+0B8Eh]
    vmovups xmmword ptr [r8+0B8Eh], xmm1
    vmovups xmm0, xmmword ptr [r9+0B9Eh]
    vmovups xmmword ptr [r8+0B9Eh], xmm0
    vmovups xmm1, xmmword ptr [r9+0BAEh]
    vmovups xmmword ptr [r8+0BAEh], xmm1
  }
  *(_QWORD *)&_R8->m_zipCode[192] = *(_QWORD *)&_R9->m_zipCode[192];
  _R8->m_zipCode[200] = _R9->m_zipCode[200];
  _RAX = _R9->m_city;
  do
  {
    _RCX += 128;
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX += 128;
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v24;
  }
  while ( v24 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
  }
  v120 = 8i64;
  _RCX[16] = _RAX[16];
  v121 = 8i64;
  _RCX = _R9->m_tokens.m_accessToken;
  *(_WORD *)_R8->m_country = *(_WORD *)_R9->m_country;
  _R8->m_country[2] = _R9->m_country[2];
  __asm
  {
    vmovups ymm0, ymmword ptr [r9+0D5Bh]
    vmovups ymmword ptr [r8+0D5Bh], ymm0
    vmovups xmm1, xmmword ptr [r9+0D7Bh]
    vmovups xmmword ptr [r8+0D7Bh], xmm1
  }
  *(_WORD *)&_R8->m_mobile[48] = *(_WORD *)&_R9->m_mobile[48];
  _R8->m_mobile[50] = _R9->m_mobile[50];
  __asm
  {
    vmovups ymm0, ymmword ptr [r9+0D8Eh]
    vmovups ymmword ptr [r8+0D8Eh], ymm0
    vmovups xmm1, xmmword ptr [r9+0DAEh]
    vmovups xmmword ptr [r8+0DAEh], xmm1
  }
  *(_WORD *)&_R8->m_phone[48] = *(_WORD *)&_R9->m_phone[48];
  _R8->m_phone[50] = _R9->m_phone[50];
  __asm
  {
    vmovups xmm0, xmmword ptr [r9+0DC1h]
    vmovups xmmword ptr [r8+0DC1h], xmm0
  }
  *(_DWORD *)&_R8->m_createdTime[16] = *(_DWORD *)&_R9->m_createdTime[16];
  _R8->m_createdTime[20] = _R9->m_createdTime[20];
  __asm
  {
    vmovups xmm0, xmmword ptr [r9+0DD6h]
    vmovups xmmword ptr [r8+0DD6h], xmm0
  }
  *(_DWORD *)&_R8->m_updatedTime[16] = *(_DWORD *)&_R9->m_updatedTime[16];
  _R8->m_updatedTime[20] = _R9->m_updatedTime[20];
  _R8->m_tokens.__vftable = (bdUnoTokens_vtbl *)&bdUnoTokens::`vftable';
  _RAX = _R8->m_tokens.m_accessToken;
  do
  {
    _RAX += 128;
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    _RCX += 128;
    __asm
    {
      vmovups xmmword ptr [rax-80h], xmm0
      vmovups xmm1, xmmword ptr [rcx-70h]
      vmovups xmmword ptr [rax-70h], xmm1
      vmovups xmm0, xmmword ptr [rcx-60h]
      vmovups xmmword ptr [rax-60h], xmm0
      vmovups xmm1, xmmword ptr [rcx-50h]
      vmovups xmmword ptr [rax-50h], xmm1
      vmovups xmm0, xmmword ptr [rcx-40h]
      vmovups xmmword ptr [rax-40h], xmm0
      vmovups xmm1, xmmword ptr [rcx-30h]
      vmovups xmmword ptr [rax-30h], xmm1
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmm1, xmmword ptr [rcx-10h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v121;
  }
  while ( v121 );
  _RCX = _R9->m_tokens.m_refreshToken;
  _R8->m_tokens.m_accessTokenExpiry = _R9->m_tokens.m_accessTokenExpiry;
  _RAX = _R8->m_tokens.m_refreshToken;
  do
  {
    _RAX += 128;
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    _RCX += 128;
    __asm
    {
      vmovups xmmword ptr [rax-80h], xmm0
      vmovups xmm1, xmmword ptr [rcx-70h]
      vmovups xmmword ptr [rax-70h], xmm1
      vmovups xmm0, xmmword ptr [rcx-60h]
      vmovups xmmword ptr [rax-60h], xmm0
      vmovups xmm1, xmmword ptr [rcx-50h]
      vmovups xmmword ptr [rax-50h], xmm1
      vmovups xmm0, xmmword ptr [rcx-40h]
      vmovups xmmword ptr [rax-40h], xmm0
      vmovups xmm1, xmmword ptr [rcx-30h]
      vmovups xmmword ptr [rax-30h], xmm1
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmm1, xmmword ptr [rcx-10h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v120;
  }
  while ( v120 );
  _R8->m_tokens.m_refreshTokenExpiry = _R9->m_tokens.m_refreshTokenExpiry;
  _R8->m_subscriptionOptIn = _R9->m_subscriptionOptIn;
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

