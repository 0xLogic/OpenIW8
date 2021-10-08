/*
==============
bdDataChannelUserInfoV1::bdDataChannelUserInfoV1
==============
*/

void __fastcall bdDataChannelUserInfoV1::bdDataChannelUserInfoV1(bdDataChannelUserInfoV1 *this, unsigned __int64 userId, const char *const userAcctType)
{
  ??0bdDataChannelUserInfoV1@@QEAA@_KQEBD@Z(this, userId, userAcctType);
}

/*
==============
bdDataChannelUserInfoV1::serialize
==============
*/

bool __fastcall bdDataChannelUserInfoV1::serialize(bdDataChannelUserInfoV1 *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdDataChannelUserInfoV1@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdDataChannelUserInfoV2::acctTypeEnumToString
==============
*/

const char *__fastcall bdDataChannelUserInfoV2::acctTypeEnumToString(bdDataChannelUserInfoV2 *this)
{
  return ?acctTypeEnumToString@bdDataChannelUserInfoV2@@QEBAPEBDXZ(this);
}

/*
==============
bdDataChannelUserInfoV2::getUserId
==============
*/

unsigned __int64 __fastcall bdDataChannelUserInfoV2::getUserId(bdDataChannelUserInfoV2 *this)
{
  return ?getUserId@bdDataChannelUserInfoV2@@QEBA_KXZ(this);
}

/*
==============
bdDataChannelUserInfoV2::clone
==============
*/

bdDataChannelUserInfo *__fastcall bdDataChannelUserInfoV2::clone(bdDataChannelUserInfoV2 *this)
{
  return ?clone@bdDataChannelUserInfoV2@@UEBAPEAVbdDataChannelUserInfo@@XZ(this);
}

/*
==============
bdDataChannelUserInfoV2::operator==
==============
*/

bool __fastcall bdDataChannelUserInfoV2::operator==(bdDataChannelUserInfoV2 *this, const bdDataChannelUserInfo *rhs)
{
  return ??8bdDataChannelUserInfoV2@@UEBA_NAEBVbdDataChannelUserInfo@@@Z(this, rhs);
}

/*
==============
bdDataChannelUserInfoV2::deserialize
==============
*/

bool __fastcall bdDataChannelUserInfoV2::deserialize(bdDataChannelUserInfoV2 *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdDataChannelUserInfoV2@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdDataChannelUserInfoV1::operator==
==============
*/

bool __fastcall bdDataChannelUserInfoV1::operator==(bdDataChannelUserInfoV1 *this, const bdDataChannelUserInfo *rhs)
{
  return ??8bdDataChannelUserInfoV1@@UEBA_NAEBVbdDataChannelUserInfo@@@Z(this, rhs);
}

/*
==============
bdDataChannelUserInfoV2::bdDataChannelUserInfoV2
==============
*/

void __fastcall bdDataChannelUserInfoV2::bdDataChannelUserInfoV2(bdDataChannelUserInfoV2 *this, bdDataChannelUserInfoV2::bdUserPlatformType platform, bdDataChannelUserInfoV2::bdUserAccountType acctType, unsigned __int64 userId, unsigned __int64 unoId)
{
  ??0bdDataChannelUserInfoV2@@QEAA@W4bdUserPlatformType@0@W4bdUserAccountType@0@_K2@Z(this, platform, acctType, userId, unoId);
}

/*
==============
bdDataChannelUserInfoV1::bdDataChannelUserInfoV1
==============
*/

void __fastcall bdDataChannelUserInfoV1::bdDataChannelUserInfoV1(bdDataChannelUserInfoV1 *this, const bdDataChannelUserInfoV1 *userInfo)
{
  ??0bdDataChannelUserInfoV1@@QEAA@AEBV0@@Z(this, userInfo);
}

/*
==============
bdDataChannelUserInfoV1::clone
==============
*/

bdDataChannelUserInfo *__fastcall bdDataChannelUserInfoV1::clone(bdDataChannelUserInfoV1 *this)
{
  return ?clone@bdDataChannelUserInfoV1@@UEBAPEAVbdDataChannelUserInfo@@XZ(this);
}

/*
==============
bdDataChannelUserInfoV1::bdDataChannelUserInfoV1
==============
*/

void __fastcall bdDataChannelUserInfoV1::bdDataChannelUserInfoV1(bdDataChannelUserInfoV1 *this)
{
  ??0bdDataChannelUserInfoV1@@QEAA@XZ(this);
}

/*
==============
bdDataChannelUserInfoV2::getVersion
==============
*/

unsigned int __fastcall bdDataChannelUserInfoV2::getVersion(bdDataChannelUserInfoV2 *this)
{
  return ?getVersion@bdDataChannelUserInfoV2@@UEBAIXZ(this);
}

/*
==============
bdDataChannelUserInfoV1::getVersion
==============
*/

unsigned int __fastcall bdDataChannelUserInfoV1::getVersion(bdDataChannelUserInfoV1 *this)
{
  return ?getVersion@bdDataChannelUserInfoV1@@UEBAIXZ(this);
}

/*
==============
bdDataChannelUserInfoV2::bdDataChannelUserInfoV2
==============
*/

void __fastcall bdDataChannelUserInfoV2::bdDataChannelUserInfoV2(bdDataChannelUserInfoV2 *this)
{
  ??0bdDataChannelUserInfoV2@@QEAA@XZ(this);
}

/*
==============
bdDataChannelUserInfoV2::serialize
==============
*/

bool __fastcall bdDataChannelUserInfoV2::serialize(bdDataChannelUserInfoV2 *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdDataChannelUserInfoV2@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdDataChannelUserInfoV2::toString
==============
*/

bdString *__fastcall bdDataChannelUserInfoV2::toString(bdDataChannelUserInfoV2 *this, bdString *result)
{
  return ?toString@bdDataChannelUserInfoV2@@UEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdDataChannelUserInfoV1::toString
==============
*/

bdString *__fastcall bdDataChannelUserInfoV1::toString(bdDataChannelUserInfoV1 *this, bdString *result)
{
  return ?toString@bdDataChannelUserInfoV1@@UEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdDataChannelUserInfoV2::bdDataChannelUserInfoV2
==============
*/

void __fastcall bdDataChannelUserInfoV2::bdDataChannelUserInfoV2(bdDataChannelUserInfoV2 *this, const bdDataChannelUserInfoV2 *userInfo)
{
  ??0bdDataChannelUserInfoV2@@QEAA@AEBV0@@Z(this, userInfo);
}

/*
==============
bdDataChannelUserInfoV1::deserialize
==============
*/

bool __fastcall bdDataChannelUserInfoV1::deserialize(bdDataChannelUserInfoV1 *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdDataChannelUserInfoV1@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdDataChannelUserInfoV1::bdDataChannelUserInfoV1
==============
*/
void bdDataChannelUserInfoV1::bdDataChannelUserInfoV1(bdDataChannelUserInfoV1 *this, const bdDataChannelUserInfoV1 *userInfo, int a3)
{
  bool v5; 
  char *m_userAcctType; 
  bool v7; 
  unsigned __int64 v8; 

  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdDataChannelUserInfoV1::`vbtable';
    *(_QWORD *)this->gap40 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap40[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdDataChannelUserInfoV1_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdDataChannelUserInfoV1_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDataChannelUserInfoV1_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdReferencable'};
  this->__vftable = (bdDataChannelUserInfoV1_vtbl *)&bdDataChannelUserInfoV1::`vftable'{for `bdStructBufferSerializable'};
  *(bdDataChannelUserInfoV1_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDataChannelUserInfoV1_vtbl *)&bdDataChannelUserInfoV1::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = *((_DWORD *)&userInfo->__vftable + 4);
  *((_QWORD *)&this->__vftable + 3) = *((_QWORD *)&userInfo->__vftable + 3);
  *((_QWORD *)&this->__vftable + 3) = *((_QWORD *)&userInfo->__vftable + 3);
  v5 = userInfo->m_userAcctType == NULL;
  m_userAcctType = userInfo->m_userAcctType;
  v7 = !v5;
  bdHandleAssert(!v5, "userInfo.m_userAcctType != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneluserinfo.cpp", "bdDataChannelUserInfoV1::bdDataChannelUserInfoV1", 0x28u, "The 'userAcctType' must not be null.", -2i64);
  bdHandleAssert(v7, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v8 = -1i64;
  do
    ++v8;
  while ( m_userAcctType[v8] );
  bdHandleAssert(v8 < 0x20, "bdStrlen(userInfo.m_userAcctType) < BD_DATACHANNEL_MAX_USER_ACCOUNT_TYPE_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneluserinfo.cpp", "bdDataChannelUserInfoV1::bdDataChannelUserInfoV1", 0x2Au, "The 'userAcctType' must not be longer than 32 in length.");
  *(_QWORD *)this->m_userAcctType = 0i64;
  *(_QWORD *)&this->m_userAcctType[8] = 0i64;
  *(_QWORD *)&this->m_userAcctType[16] = 0i64;
  *(_QWORD *)&this->m_userAcctType[24] = 0i64;
  bdStrlcpy(this->m_userAcctType, m_userAcctType, 0x20ui64);
}

/*
==============
bdDataChannelUserInfoV1::bdDataChannelUserInfoV1
==============
*/
void bdDataChannelUserInfoV1::bdDataChannelUserInfoV1(bdDataChannelUserInfoV1 *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdDataChannelUserInfoV1::`vbtable';
    *(_QWORD *)this->gap40 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap40[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdDataChannelUserInfoV1_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdDataChannelUserInfoV1_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDataChannelUserInfoV1_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdReferencable'};
  this->__vftable = (bdDataChannelUserInfoV1_vtbl *)&bdDataChannelUserInfoV1::`vftable'{for `bdStructBufferSerializable'};
  *(bdDataChannelUserInfoV1_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDataChannelUserInfoV1_vtbl *)&bdDataChannelUserInfoV1::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = 1;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_userAcctType = 0i64;
  *(_QWORD *)&this->m_userAcctType[8] = 0i64;
  *(_QWORD *)&this->m_userAcctType[16] = 0i64;
  *(_QWORD *)&this->m_userAcctType[24] = 0i64;
}

/*
==============
bdDataChannelUserInfoV1::bdDataChannelUserInfoV1
==============
*/
void bdDataChannelUserInfoV1::bdDataChannelUserInfoV1(bdDataChannelUserInfoV1 *this, unsigned __int64 userId, const char *const userAcctType, int a4)
{
  unsigned __int64 v7; 

  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdDataChannelUserInfoV1::`vbtable';
    *(_QWORD *)this->gap40 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap40[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdDataChannelUserInfoV1_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdDataChannelUserInfoV1_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDataChannelUserInfoV1_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdReferencable'};
  this->__vftable = (bdDataChannelUserInfoV1_vtbl *)&bdDataChannelUserInfoV1::`vftable'{for `bdStructBufferSerializable'};
  *(bdDataChannelUserInfoV1_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDataChannelUserInfoV1_vtbl *)&bdDataChannelUserInfoV1::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = 1;
  *((_QWORD *)&this->__vftable + 3) = userId;
  bdHandleAssert(userAcctType != NULL, "userAcctType != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneluserinfo.cpp", "bdDataChannelUserInfoV1::bdDataChannelUserInfoV1", 0x1Bu, "The 'userAcctType' must not be null.", -2i64);
  bdHandleAssert(userAcctType != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v7 = -1i64;
  do
    ++v7;
  while ( userAcctType[v7] );
  bdHandleAssert(v7 < 0x20, "bdStrlen(userAcctType) < BD_DATACHANNEL_MAX_USER_ACCOUNT_TYPE_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneluserinfo.cpp", "bdDataChannelUserInfoV1::bdDataChannelUserInfoV1", 0x1Du, "The 'userAcctType' must not be longer than 32 in length.");
  *(_QWORD *)this->m_userAcctType = 0i64;
  *(_QWORD *)&this->m_userAcctType[8] = 0i64;
  *(_QWORD *)&this->m_userAcctType[16] = 0i64;
  *(_QWORD *)&this->m_userAcctType[24] = 0i64;
  bdStrlcpy(this->m_userAcctType, userAcctType, 0x20ui64);
}

/*
==============
bdDataChannelUserInfoV2::bdDataChannelUserInfoV2
==============
*/
void bdDataChannelUserInfoV2::bdDataChannelUserInfoV2(bdDataChannelUserInfoV2 *this, const bdDataChannelUserInfoV2 *userInfo, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdDataChannelUserInfoV2::`vbtable';
    *(&this->m_unoId + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_unoId + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdDataChannelUserInfoV2_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdDataChannelUserInfoV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDataChannelUserInfoV2_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdReferencable'};
  this->__vftable = (bdDataChannelUserInfoV2_vtbl *)&bdDataChannelUserInfoV2::`vftable'{for `bdStructBufferSerializable'};
  *(bdDataChannelUserInfoV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDataChannelUserInfoV2_vtbl *)&bdDataChannelUserInfoV2::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = *((_DWORD *)&userInfo->__vftable + 4);
  *((_DWORD *)&this->__vftable + 5) = *((_DWORD *)&userInfo->__vftable + 5);
  *((_DWORD *)&this->__vftable + 6) = *((_DWORD *)&userInfo->__vftable + 6);
  this->m_userId = userInfo->m_userId;
  this->m_unoId = userInfo->m_unoId;
}

/*
==============
bdDataChannelUserInfoV2::bdDataChannelUserInfoV2
==============
*/
void bdDataChannelUserInfoV2::bdDataChannelUserInfoV2(bdDataChannelUserInfoV2 *this, bdDataChannelUserInfoV2::bdUserPlatformType platform, bdDataChannelUserInfoV2::bdUserAccountType acctType, unsigned __int64 userId, unsigned __int64 unoId, int a6)
{
  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdDataChannelUserInfoV2::`vbtable';
    *(&this->m_unoId + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_unoId + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdDataChannelUserInfoV2_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdDataChannelUserInfoV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDataChannelUserInfoV2_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdReferencable'};
  this->__vftable = (bdDataChannelUserInfoV2_vtbl *)&bdDataChannelUserInfoV2::`vftable'{for `bdStructBufferSerializable'};
  *(bdDataChannelUserInfoV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDataChannelUserInfoV2_vtbl *)&bdDataChannelUserInfoV2::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = 2;
  *((_DWORD *)&this->__vftable + 5) = platform;
  *((_DWORD *)&this->__vftable + 6) = acctType;
  this->m_userId = userId;
  this->m_unoId = unoId;
}

/*
==============
bdDataChannelUserInfoV2::bdDataChannelUserInfoV2
==============
*/
void bdDataChannelUserInfoV2::bdDataChannelUserInfoV2(bdDataChannelUserInfoV2 *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdDataChannelUserInfoV2::`vbtable';
    *(&this->m_unoId + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_unoId + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdDataChannelUserInfoV2_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdDataChannelUserInfoV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDataChannelUserInfoV2_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdReferencable'};
  this->__vftable = (bdDataChannelUserInfoV2_vtbl *)&bdDataChannelUserInfoV2::`vftable'{for `bdStructBufferSerializable'};
  *(bdDataChannelUserInfoV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDataChannelUserInfoV2_vtbl *)&bdDataChannelUserInfoV2::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 2i64;
  *((_DWORD *)&this->__vftable + 6) = 0;
  this->m_userId = 0i64;
  this->m_unoId = 0i64;
}

/*
==============
bdDataChannelUserInfoV1::operator==
==============
*/
bool bdDataChannelUserInfoV1::operator==(bdDataChannelUserInfoV1 *this, const bdDataChannelUserInfo *rhs)
{
  char *m_userAcctType; 
  signed __int64 v3; 
  int v4; 
  int v5; 

  if ( !rhs && MEMORY[0x10] != 1 )
    return 0;
  if ( *((_DWORD *)&this->__vftable + 4) != *((_DWORD *)&rhs->__vftable + 4) || *((_QWORD *)&this->__vftable + 3) != *((_QWORD *)&rhs->__vftable + 3) )
    return 0;
  m_userAcctType = this->m_userAcctType;
  v3 = (char *)rhs - (char *)this;
  do
  {
    v4 = (unsigned __int8)m_userAcctType[v3];
    v5 = (unsigned __int8)*m_userAcctType - v4;
    if ( v5 )
      break;
    ++m_userAcctType;
  }
  while ( v4 );
  return !v5;
}

/*
==============
bdDataChannelUserInfoV2::operator==
==============
*/
bool bdDataChannelUserInfoV2::operator==(bdDataChannelUserInfoV2 *this, const bdDataChannelUserInfo *rhs)
{
  return (rhs || MEMORY[0x10] == 2) && *((_DWORD *)&this->__vftable + 5) == *((_DWORD *)&rhs->__vftable + 5) && *((_DWORD *)&this->__vftable + 6) == *((_DWORD *)&rhs->__vftable + 6) && (bdDataChannelUserInfo_vtbl *)this->m_userId == rhs[1].__vftable && this->m_unoId == *((_QWORD *)&rhs[1].__vftable + 1);
}

/*
==============
bdDataChannelUserInfoV2::acctTypeEnumToString
==============
*/
const char *bdDataChannelUserInfoV2::acctTypeEnumToString(bdDataChannelUserInfoV2 *this)
{
  const char *result; 

  switch ( *((_DWORD *)&this->__vftable + 6) )
  {
    case 1:
      result = "ab";
      break;
    case 2:
      result = "afh";
      break;
    case 3:
      result = "amazon";
      break;
    case 4:
      result = "atvi";
      break;
    case 5:
      result = "atviad";
      break;
    case 6:
      result = "bnet";
      break;
    case 7:
      result = "codo";
      break;
    case 8:
      result = "ded";
      break;
    case 9:
      result = "dedr";
      break;
    case 0xA:
      result = "dwldap";
      break;
    case 0xB:
      result = "facebook";
      break;
    case 0xC:
      result = "gamecenter";
      break;
    case 0xD:
      result = "googleplay";
      break;
    case 0xE:
      result = "googleplus";
      break;
    case 0xF:
      result = "hl";
      break;
    case 0x10:
      result = "nin";
      break;
    case 0x11:
      result = "nintendo";
      break;
    case 0x12:
      result = "psn";
      break;
    case 0x13:
      result = "steam";
      break;
    case 0x14:
      result = "thun";
      break;
    case 0x15:
      result = "twitch";
      break;
    case 0x16:
      result = "twitter";
      break;
    case 0x17:
      result = "umb";
      break;
    case 0x18:
      result = "uno";
      break;
    case 0x19:
      result = "ul";
      break;
    case 0x1A:
      result = "we";
      break;
    case 0x1B:
      result = "wex";
      break;
    case 0x1C:
      result = "wecn";
      break;
    case 0x1D:
      result = "xbl";
      break;
    case 0x1E:
      result = "youtube";
      break;
    default:
      result = "unknown";
      break;
  }
  return result;
}

/*
==============
bdDataChannelUserInfoV1::clone
==============
*/
bdStructBufferSerializable *bdDataChannelUserInfoV1::clone(bdDataChannelUserInfoV1 *this)
{
  bdStructBufferSerializable *v2; 
  bdStructBufferSerializable *v3; 
  bool v4; 
  char *m_userAcctType; 
  bool v6; 
  unsigned __int64 v7; 

  v2 = (bdStructBufferSerializable *)bdMemory::allocate(0x50ui64);
  v3 = v2;
  if ( !v2 )
    return 0i64;
  *((_QWORD *)&v2->__vftable + 1) = &bdDataChannelUserInfoV1::`vbtable';
  v2[2].__vftable = (bdStructBufferSerializable_vtbl *)&bdReferencable::`vftable';
  *((_DWORD *)&v2[2].__vftable + 2) = 0;
  bdStructBufferSerializable::bdStructBufferSerializable(v2);
  v3->__vftable = (bdStructBufferSerializable_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&v3->__vftable + *(int *)(*((_QWORD *)&v3->__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdReferencable'};
  v3->__vftable = (bdStructBufferSerializable_vtbl *)&bdDataChannelUserInfoV1::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&v3->__vftable + *(int *)(*((_QWORD *)&v3->__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdDataChannelUserInfoV1::`vftable'{for `bdReferencable'};
  *((_DWORD *)&v3->__vftable + 4) = *((_DWORD *)&this->__vftable + 4);
  *((_QWORD *)&v3->__vftable + 3) = *((_QWORD *)&this->__vftable + 3);
  *((_QWORD *)&v3->__vftable + 3) = *((_QWORD *)&this->__vftable + 3);
  v4 = this->m_userAcctType == NULL;
  m_userAcctType = this->m_userAcctType;
  v6 = !v4;
  bdHandleAssert(!v4, "userInfo.m_userAcctType != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneluserinfo.cpp", "bdDataChannelUserInfoV1::bdDataChannelUserInfoV1", 0x28u, "The 'userAcctType' must not be null.", -2i64);
  bdHandleAssert(v6, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v7 = -1i64;
  do
    ++v7;
  while ( m_userAcctType[v7] );
  bdHandleAssert(v7 < 0x20, "bdStrlen(userInfo.m_userAcctType) < BD_DATACHANNEL_MAX_USER_ACCOUNT_TYPE_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneluserinfo.cpp", "bdDataChannelUserInfoV1::bdDataChannelUserInfoV1", 0x2Au, "The 'userAcctType' must not be longer than 32 in length.");
  v3[1].__vftable = NULL;
  *((_QWORD *)&v3[1].__vftable + 1) = 0i64;
  *((_QWORD *)&v3[1].__vftable + 2) = 0i64;
  *((_QWORD *)&v3[1].__vftable + 3) = 0i64;
  bdStrlcpy((char *const)&v3[1], m_userAcctType, 0x20ui64);
  return v3;
}

/*
==============
bdDataChannelUserInfoV2::clone
==============
*/
bdStructBufferSerializable *bdDataChannelUserInfoV2::clone(bdDataChannelUserInfoV2 *this)
{
  bdStructBufferSerializable *v2; 
  bdStructBufferSerializable *v3; 

  v2 = (bdStructBufferSerializable *)bdMemory::allocate(0x40ui64);
  v3 = v2;
  if ( !v2 )
    return 0i64;
  *((_QWORD *)&v2->__vftable + 1) = &bdDataChannelUserInfoV2::`vbtable';
  *((_QWORD *)&v2[1].__vftable + 2) = &bdReferencable::`vftable';
  *((_DWORD *)&v2[1].__vftable + 6) = 0;
  bdStructBufferSerializable::bdStructBufferSerializable(v2);
  v3->__vftable = (bdStructBufferSerializable_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&v3->__vftable + *(int *)(*((_QWORD *)&v3->__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdDataChannelUserInfo::`vftable'{for `bdReferencable'};
  v3->__vftable = (bdStructBufferSerializable_vtbl *)&bdDataChannelUserInfoV2::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&v3->__vftable + *(int *)(*((_QWORD *)&v3->__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdDataChannelUserInfoV2::`vftable'{for `bdReferencable'};
  *((_DWORD *)&v3->__vftable + 4) = *((_DWORD *)&this->__vftable + 4);
  *((_DWORD *)&v3->__vftable + 5) = *((_DWORD *)&this->__vftable + 5);
  *((_DWORD *)&v3->__vftable + 6) = *((_DWORD *)&this->__vftable + 6);
  v3[1].__vftable = (bdStructBufferSerializable_vtbl *)this->m_userId;
  *((_QWORD *)&v3[1].__vftable + 1) = this->m_unoId;
  return v3;
}

/*
==============
bdDataChannelUserInfoV1::deserialize
==============
*/
bool bdDataChannelUserInfoV1::deserialize(bdDataChannelUserInfoV1 *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readString(deserializer, 1u, this->m_userAcctType, 0x20u) && bdStructBufferDeserializer::readUInt64(deserializer, 2u, (unsigned __int64 *)&this->__vftable + 3);
}

/*
==============
bdDataChannelUserInfoV2::deserialize
==============
*/
bool bdDataChannelUserInfoV2::deserialize(bdDataChannelUserInfoV2 *this, bdStructBufferDeserializer *deserializer)
{
  char v4; 
  bool result; 
  unsigned __int64 value; 
  unsigned __int64 v7; 

  value = 0i64;
  if ( bdStructBufferDeserializer::readUInt64(deserializer, 3u, &value) )
  {
    v4 = 1;
    *((_DWORD *)&this->__vftable + 5) = value;
  }
  else
  {
    v4 = 0;
  }
  v7 = 0i64;
  result = 0;
  if ( v4 )
  {
    if ( bdStructBufferDeserializer::readUInt64(deserializer, 4u, &v7) )
    {
      *((_DWORD *)&this->__vftable + 6) = v7;
      if ( bdStructBufferDeserializer::readUInt64(deserializer, 5u, &this->m_userId) && bdStructBufferDeserializer::readUInt64(deserializer, 6u, &this->m_unoId) )
        return 1;
    }
  }
  return result;
}

/*
==============
bdDataChannelUserInfoV2::getUserId
==============
*/
unsigned __int64 bdDataChannelUserInfoV2::getUserId(bdDataChannelUserInfoV2 *this)
{
  return this->m_userId;
}

/*
==============
bdDataChannelUserInfoV1::getVersion
==============
*/
__int64 bdDataChannelUserInfoV1::getVersion(bdDataChannelUserInfoV1 *this)
{
  return *((unsigned int *)&this->__vftable + 4);
}

/*
==============
bdDataChannelUserInfoV2::getVersion
==============
*/
__int64 bdDataChannelUserInfoV2::getVersion(bdDataChannelUserInfoV2 *this)
{
  return *((unsigned int *)&this->__vftable + 4);
}

/*
==============
bdDataChannelUserInfoV1::serialize
==============
*/
bool bdDataChannelUserInfoV1::serialize(bdDataChannelUserInfoV1 *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeString(serializer, 1u, this->m_userAcctType, 0x20u) && bdStructBufferSerializer::writeUInt64(serializer, 2u, *((_QWORD *)&this->__vftable + 3));
}

/*
==============
bdDataChannelUserInfoV2::serialize
==============
*/
bool bdDataChannelUserInfoV2::serialize(bdDataChannelUserInfoV2 *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeUInt64(serializer, 3u, *((int *)&this->__vftable + 5)) && bdStructBufferSerializer::writeUInt64(serializer, 4u, *((int *)&this->__vftable + 6)) && bdStructBufferSerializer::writeUInt64(serializer, 5u, this->m_userId) && bdStructBufferSerializer::writeUInt64(serializer, 6u, this->m_unoId);
}

/*
==============
bdDataChannelUserInfoV1::toString
==============
*/
bdString *bdDataChannelUserInfoV1::toString(bdDataChannelUserInfoV1 *this, bdString *result)
{
  makeFormattedString(result, "{ userId: %llu , userAcctType: %s }", *((_QWORD *)&this->__vftable + 3), this->m_userAcctType);
  return result;
}

/*
==============
bdDataChannelUserInfoV2::toString
==============
*/
bdString *bdDataChannelUserInfoV2::toString(bdDataChannelUserInfoV2 *this, bdString *result)
{
  makeFormattedString(result, "{ platform: %d, userAcctType: %d, userId: %llu , unoId: %llu }", *((unsigned int *)&this->__vftable + 5), *((unsigned int *)&this->__vftable + 6), this->m_userId, this->m_unoId);
  return result;
}

