/*
==============
bdUserDetails::bdUserDetails
==============
*/

void __fastcall bdUserDetails::bdUserDetails(bdUserDetails *this, const bdUserDetails *other)
{
  ??0bdUserDetails@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdUserDetails::setAccountType
==============
*/

void __fastcall bdUserDetails::setAccountType(bdUserDetails *this, const char *accountType)
{
  ?setAccountType@bdUserDetails@@QEAAXPEBD@Z(this, accountType);
}

/*
==============
bdStructUserDetails::bdStructUserDetails
==============
*/

void __fastcall bdStructUserDetails::bdStructUserDetails(bdStructUserDetails *this, const unsigned __int64 *other, const char *const accountType)
{
  ??0bdStructUserDetails@@QEAA@AEB_KQEBD@Z(this, other, accountType);
}

/*
==============
bdStructUserDetails::bdStructUserDetails
==============
*/

void __fastcall bdStructUserDetails::bdStructUserDetails(bdStructUserDetails *this, const unsigned __int64 *other, const char *const accountType, const char *const username, const unsigned int usernameHash)
{
  ??0bdStructUserDetails@@QEAA@AEB_KQEBD1I@Z(this, other, accountType, username, usernameHash);
}

/*
==============
bdUserDetails::getUserID
==============
*/

unsigned __int64 __fastcall bdUserDetails::getUserID(bdUserDetails *this)
{
  return ?getUserID@bdUserDetails@@QEBA_KXZ(this);
}

/*
==============
bdUserDetails::sizeOf
==============
*/

unsigned int __fastcall bdUserDetails::sizeOf(bdUserDetails *this)
{
  return ?sizeOf@bdUserDetails@@UEAAIXZ(this);
}

/*
==============
bdUserDetails::getUsernameWithHash
==============
*/

bool __fastcall bdUserDetails::getUsernameWithHash(bdUserDetails *this, char *usernameWithHash)
{
  return ?getUsernameWithHash@bdUserDetails@@QEAA_NPEAD@Z(this, usernameWithHash);
}

/*
==============
bdStructUserDetails::deserialize
==============
*/

bool __fastcall bdStructUserDetails::deserialize(bdStructUserDetails *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdStructUserDetails@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdUserDetails::setUsername
==============
*/

void __fastcall bdUserDetails::setUsername(bdUserDetails *this, const char *username)
{
  ?setUsername@bdUserDetails@@QEAAXPEBD@Z(this, username);
}

/*
==============
bdUserDetails::operator==
==============
*/

bool __fastcall bdUserDetails::operator==(bdUserDetails *this, const bdUserDetails *other)
{
  return ??8bdUserDetails@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdStructUserDetails::bdStructUserDetails
==============
*/

void __fastcall bdStructUserDetails::bdStructUserDetails(bdStructUserDetails *this, const bdStructUserDetails *other)
{
  ??0bdStructUserDetails@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdUserDetails::deserialize
==============
*/

bool __fastcall bdUserDetails::deserialize(bdUserDetails *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdUserDetails@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdUserDetails::bdUserDetails
==============
*/

void __fastcall bdUserDetails::bdUserDetails(bdUserDetails *this, const unsigned __int64 *userID)
{
  ??0bdUserDetails@@QEAA@AEB_K@Z(this, userID);
}

/*
==============
bdUserDetails::~bdUserDetails
==============
*/

void __fastcall bdUserDetails::~bdUserDetails(bdUserDetails *this)
{
  ??1bdUserDetails@@UEAA@XZ(this);
}

/*
==============
bdUserDetails::hasUsername
==============
*/

bool __fastcall bdUserDetails::hasUsername(bdUserDetails *this)
{
  return ?hasUsername@bdUserDetails@@QEBA_NXZ(this);
}

/*
==============
bdUserDetails::getUsername
==============
*/

const char *__fastcall bdUserDetails::getUsername(bdUserDetails *this)
{
  return ?getUsername@bdUserDetails@@QEBAPEBDXZ(this);
}

/*
==============
bdUserDetails::setUsernameWithOptionalHash
==============
*/

bool __fastcall bdUserDetails::setUsernameWithOptionalHash(bdUserDetails *this, const char *const usernameWithHash)
{
  return ?setUsernameWithOptionalHash@bdUserDetails@@QEAA_NQEBD@Z(this, usernameWithHash);
}

/*
==============
bdUserDetails::bdUserDetails
==============
*/

void __fastcall bdUserDetails::bdUserDetails(bdUserDetails *this, const unsigned __int64 *userID, const char *const accountType, const char *const username, const unsigned int usernameHash)
{
  ??0bdUserDetails@@QEAA@AEB_KQEBD1I@Z(this, userID, accountType, username, usernameHash);
}

/*
==============
bdStructUserDetails::bdStructUserDetails
==============
*/

void __fastcall bdStructUserDetails::bdStructUserDetails(bdStructUserDetails *this)
{
  ??0bdStructUserDetails@@QEAA@XZ(this);
}

/*
==============
bdUserDetails::getAccountType
==============
*/

const char *__fastcall bdUserDetails::getAccountType(bdUserDetails *this)
{
  return ?getAccountType@bdUserDetails@@QEBAPEBDXZ(this);
}

/*
==============
bdUserDetails::setUsernameHash
==============
*/

void __fastcall bdUserDetails::setUsernameHash(bdUserDetails *this, unsigned int usernameHash)
{
  ?setUsernameHash@bdUserDetails@@QEAAXI@Z(this, usernameHash);
}

/*
==============
bdUserDetails::serialize
==============
*/

bool __fastcall bdUserDetails::serialize(bdUserDetails *this, bdByteBuffer *buffer)
{
  return ?serialize@bdUserDetails@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdUserDetails::operator=
==============
*/

bdUserDetails *__fastcall bdUserDetails::operator=(bdUserDetails *this, const bdUserDetails *other)
{
  return ??4bdUserDetails@@QEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
bdUserDetails::bdUserDetails
==============
*/

void __fastcall bdUserDetails::bdUserDetails(bdUserDetails *this, const unsigned __int64 *userID, const char *const accountType, const char *const username)
{
  ??0bdUserDetails@@QEAA@AEB_KQEBD1@Z(this, userID, accountType, username);
}

/*
==============
bdUserDetails::operator!=
==============
*/

bool __fastcall bdUserDetails::operator!=(bdUserDetails *this, const bdUserDetails *other)
{
  return ??9bdUserDetails@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdUserDetails::bdUserDetails
==============
*/

void __fastcall bdUserDetails::bdUserDetails(bdUserDetails *this, const unsigned __int64 *userID, const char *const accountType)
{
  ??0bdUserDetails@@QEAA@AEB_KQEBD@Z(this, userID, accountType);
}

/*
==============
bdUserDetails::setUserID
==============
*/

void __fastcall bdUserDetails::setUserID(bdUserDetails *this, unsigned __int64 userID)
{
  ?setUserID@bdUserDetails@@QEAAX_K@Z(this, userID);
}

/*
==============
bdStructUserDetails::bdStructUserDetails
==============
*/

void __fastcall bdStructUserDetails::bdStructUserDetails(bdStructUserDetails *this, const unsigned __int64 *other)
{
  ??0bdStructUserDetails@@QEAA@AEB_K@Z(this, other);
}

/*
==============
bdUserDetails::unpackUsernameAndHash
==============
*/

bool __fastcall bdUserDetails::unpackUsernameAndHash(bdUserDetails *this, const char *usernameWithHash, char *const username, unsigned int *usernameHash, bool hashOptional)
{
  return ?unpackUsernameAndHash@bdUserDetails@@IEAA_NPEBDQEADAEAI_N@Z(this, usernameWithHash, username, usernameHash, hashOptional);
}

/*
==============
bdStructUserDetails::bdStructUserDetails
==============
*/

void __fastcall bdStructUserDetails::bdStructUserDetails(bdStructUserDetails *this, const bdUserDetails *other)
{
  ??0bdStructUserDetails@@QEAA@AEBVbdUserDetails@@@Z(this, other);
}

/*
==============
bdStructUserDetails::serialize
==============
*/

bool __fastcall bdStructUserDetails::serialize(bdStructUserDetails *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdStructUserDetails@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdUserDetails::bdUserDetails
==============
*/

void __fastcall bdUserDetails::bdUserDetails(bdUserDetails *this, const bdUserAccountID *userID)
{
  ??0bdUserDetails@@QEAA@AEBVbdUserAccountID@@@Z(this, userID);
}

/*
==============
bdUserDetails::reset
==============
*/

void __fastcall bdUserDetails::reset(bdUserDetails *this)
{
  ?reset@bdUserDetails@@QEAAXXZ(this);
}

/*
==============
bdUserDetails::bdUserDetails
==============
*/

void __fastcall bdUserDetails::bdUserDetails(bdUserDetails *this)
{
  ??0bdUserDetails@@QEAA@XZ(this);
}

/*
==============
bdUserDetails::packUsernameAndHash
==============
*/

bool __fastcall bdUserDetails::packUsernameAndHash(bdUserDetails *this, char *usernameWithHash, const char *username, const unsigned int usernameHash)
{
  return ?packUsernameAndHash@bdUserDetails@@IEBA_NPEADPEBDI@Z(this, usernameWithHash, username, usernameHash);
}

/*
==============
bdStructUserDetails::bdStructUserDetails
==============
*/

void __fastcall bdStructUserDetails::bdStructUserDetails(bdStructUserDetails *this, const unsigned __int64 *other, const char *const accountType, const char *const username)
{
  ??0bdStructUserDetails@@QEAA@AEB_KQEBD1@Z(this, other, accountType, username);
}

/*
==============
bdUserDetails::setUsernameWithHash
==============
*/

void __fastcall bdUserDetails::setUsernameWithHash(bdUserDetails *this, char *usernameWithHash)
{
  ?setUsernameWithHash@bdUserDetails@@QEAAXPEAD@Z(this, usernameWithHash);
}

/*
==============
bdUserDetails::getUsernameHash
==============
*/

unsigned int __fastcall bdUserDetails::getUsernameHash(bdUserDetails *this)
{
  return ?getUsernameHash@bdUserDetails@@QEBAIXZ(this);
}

/*
==============
bdStructUserDetails::bdStructUserDetails
==============
*/
void bdStructUserDetails::bdStructUserDetails(bdStructUserDetails *this, const bdStructUserDetails *other, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStructUserDetails::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStructUserDetails::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap79[15] = &bdStructUserDetails::`vbtable';
    *(_QWORD *)this->_bytes_90 = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_90[8] = 0;
  }
  bdUserDetails::bdUserDetails(this);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)&this->gap79[7]);
  this->__vftable = (bdStructUserDetails_vtbl *)&bdStructUserDetails::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStructUserDetails::`vftable'{for `bdSerializable'};
  *(_QWORD *)&this->gap79[7] = &bdStructUserDetails::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructUserDetails_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserDetails_vtbl *)&bdStructUserDetails::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = *(_QWORD *)other->_bytes_20;
  bdStrlcpy(&this->_bytes_20[8], &other->_bytes_20[8], 0xAui64);
  bdStrlcpy(this->m_username, other->m_username, 0x40ui64);
  this->m_usernameHash = other->m_usernameHash;
  this->m_hasUsername = other->m_hasUsername;
}

/*
==============
bdStructUserDetails::bdStructUserDetails
==============
*/
void bdStructUserDetails::bdStructUserDetails(bdStructUserDetails *this, const bdUserDetails *other, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStructUserDetails::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStructUserDetails::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap79[15] = &bdStructUserDetails::`vbtable';
    *(_QWORD *)this->_bytes_90 = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_90[8] = 0;
  }
  bdUserDetails::bdUserDetails(this);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)&this->gap79[7]);
  this->__vftable = (bdStructUserDetails_vtbl *)&bdStructUserDetails::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStructUserDetails::`vftable'{for `bdSerializable'};
  *(_QWORD *)&this->gap79[7] = &bdStructUserDetails::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructUserDetails_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserDetails_vtbl *)&bdStructUserDetails::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = *(_QWORD *)other->_bytes_20;
  bdStrlcpy(&this->_bytes_20[8], &other->_bytes_20[8], 0xAui64);
  bdStrlcpy(this->m_username, other->m_username, 0x40ui64);
  this->m_usernameHash = other->m_usernameHash;
  this->m_hasUsername = other->m_hasUsername;
}

/*
==============
bdStructUserDetails::bdStructUserDetails
==============
*/
void bdStructUserDetails::bdStructUserDetails(bdStructUserDetails *this, const unsigned __int64 *other, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStructUserDetails::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStructUserDetails::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap79[15] = &bdStructUserDetails::`vbtable';
    *(_QWORD *)this->_bytes_90 = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_90[8] = 0;
  }
  bdUserDetails::bdUserDetails(this);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)&this->gap79[7]);
  this->__vftable = (bdStructUserDetails_vtbl *)&bdStructUserDetails::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStructUserDetails::`vftable'{for `bdSerializable'};
  *(_QWORD *)&this->gap79[7] = &bdStructUserDetails::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructUserDetails_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserDetails_vtbl *)&bdStructUserDetails::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = *other;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
  *(_QWORD *)this->m_accountType = 0i64;
  *(_QWORD *)&this->m_username[6] = 0i64;
  *(_QWORD *)&this->m_username[14] = 0i64;
  *(_QWORD *)&this->m_username[22] = 0i64;
  *(_QWORD *)&this->m_username[30] = 0i64;
  *(_QWORD *)&this->m_username[38] = 0i64;
  *(_QWORD *)&this->m_username[46] = 0i64;
  *(_QWORD *)&this->m_username[54] = 0i64;
  *(_WORD *)&this->m_username[62] = 0;
  this->m_usernameHash = -1;
  this->m_hasUsername = 0;
}

/*
==============
bdStructUserDetails::bdStructUserDetails
==============
*/
void bdStructUserDetails::bdStructUserDetails(bdStructUserDetails *this, const unsigned __int64 *other, const char *const accountType, const char *const username, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStructUserDetails::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStructUserDetails::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap79[15] = &bdStructUserDetails::`vbtable';
    *(_QWORD *)this->_bytes_90 = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_90[8] = 0;
  }
  bdUserDetails::bdUserDetails(this);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)&this->gap79[7]);
  this->__vftable = (bdStructUserDetails_vtbl *)&bdStructUserDetails::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStructUserDetails::`vftable'{for `bdSerializable'};
  *(_QWORD *)&this->gap79[7] = &bdStructUserDetails::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructUserDetails_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserDetails_vtbl *)&bdStructUserDetails::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = *other;
  bdStrlcpy(&this->_bytes_20[8], accountType, 0xAui64);
  this->m_hasUsername = bdStrlcpy(this->m_username, username, 0x40ui64) != 0;
  this->m_usernameHash = -1;
}

/*
==============
bdStructUserDetails::bdStructUserDetails
==============
*/
void bdStructUserDetails::bdStructUserDetails(bdStructUserDetails *this, const unsigned __int64 *other, const char *const accountType, const char *const username, const unsigned int usernameHash, int a6)
{
  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStructUserDetails::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStructUserDetails::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap79[15] = &bdStructUserDetails::`vbtable';
    *(_QWORD *)this->_bytes_90 = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_90[8] = 0;
  }
  bdUserDetails::bdUserDetails(this);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)&this->gap79[7]);
  this->__vftable = (bdStructUserDetails_vtbl *)&bdStructUserDetails::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStructUserDetails::`vftable'{for `bdSerializable'};
  *(_QWORD *)&this->gap79[7] = &bdStructUserDetails::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructUserDetails_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserDetails_vtbl *)&bdStructUserDetails::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = *other;
  bdStrlcpy(&this->_bytes_20[8], accountType, 0xAui64);
  this->m_hasUsername = bdStrlcpy(this->m_username, username, 0x40ui64) != 0;
  this->m_usernameHash = usernameHash;
}

/*
==============
bdStructUserDetails::bdStructUserDetails
==============
*/
void bdStructUserDetails::bdStructUserDetails(bdStructUserDetails *this, const unsigned __int64 *other, const char *const accountType, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStructUserDetails::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStructUserDetails::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap79[15] = &bdStructUserDetails::`vbtable';
    *(_QWORD *)this->_bytes_90 = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_90[8] = 0;
  }
  bdUserDetails::bdUserDetails(this);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)&this->gap79[7]);
  this->__vftable = (bdStructUserDetails_vtbl *)&bdStructUserDetails::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStructUserDetails::`vftable'{for `bdSerializable'};
  *(_QWORD *)&this->gap79[7] = &bdStructUserDetails::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructUserDetails_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserDetails_vtbl *)&bdStructUserDetails::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = *other;
  bdStrlcpy(&this->_bytes_20[8], accountType, 0xAui64);
  *(_QWORD *)this->m_username = 0i64;
  *(_QWORD *)&this->m_username[8] = 0i64;
  *(_QWORD *)&this->m_username[16] = 0i64;
  *(_QWORD *)&this->m_username[24] = 0i64;
  *(_QWORD *)&this->m_username[32] = 0i64;
  *(_QWORD *)&this->m_username[40] = 0i64;
  *(_QWORD *)&this->m_username[48] = 0i64;
  *(_QWORD *)&this->m_username[56] = 0i64;
  this->m_usernameHash = -1;
  this->m_hasUsername = 0;
}

/*
==============
bdStructUserDetails::bdStructUserDetails
==============
*/
void bdStructUserDetails::bdStructUserDetails(bdStructUserDetails *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStructUserDetails::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStructUserDetails::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap79[15] = &bdStructUserDetails::`vbtable';
    *(_QWORD *)this->_bytes_90 = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_90[8] = 0;
  }
  bdUserDetails::bdUserDetails(this);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)&this->gap79[7]);
  this->__vftable = (bdStructUserDetails_vtbl *)&bdStructUserDetails::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStructUserDetails::`vftable'{for `bdSerializable'};
  *(_QWORD *)&this->gap79[7] = &bdStructUserDetails::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructUserDetails_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserDetails_vtbl *)&bdStructUserDetails::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
  *(_QWORD *)this->m_accountType = 0i64;
  *(_QWORD *)&this->m_username[6] = 0i64;
  *(_QWORD *)&this->m_username[14] = 0i64;
  *(_QWORD *)&this->m_username[22] = 0i64;
  *(_QWORD *)&this->m_username[30] = 0i64;
  *(_QWORD *)&this->m_username[38] = 0i64;
  *(_QWORD *)&this->m_username[46] = 0i64;
  *(_QWORD *)&this->m_username[54] = 0i64;
  *(_WORD *)&this->m_username[62] = 0;
  this->m_usernameHash = -1;
  this->m_hasUsername = 0;
}

/*
==============
bdUserDetails::bdUserDetails
==============
*/
void bdUserDetails::bdUserDetails(bdUserDetails *this, const bdUserDetails *other, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserDetails::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdUserDetails::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap79[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap79[15] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdUserDetails_vtbl *)&bdUserDetails::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserDetails::`vftable'{for `bdSerializable'};
  *(bdUserDetails_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserDetails_vtbl *)&bdUserDetails::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = *(_QWORD *)other->_bytes_20;
  this->m_usernameHash = other->m_usernameHash;
  this->m_hasUsername = other->m_hasUsername;
  bdStrlcpy(&this->_bytes_20[8], &other->_bytes_20[8], 0xAui64);
  bdStrlcpy(this->m_username, other->m_username, 0x40ui64);
}

/*
==============
bdUserDetails::bdUserDetails
==============
*/
void bdUserDetails::bdUserDetails(bdUserDetails *this, const bdUserAccountID *userID, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserDetails::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdUserDetails::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap79[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap79[15] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdUserDetails_vtbl *)&bdUserDetails::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserDetails::`vftable'{for `bdSerializable'};
  *(bdUserDetails_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserDetails_vtbl *)&bdUserDetails::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = userID->m_userID;
  this->m_usernameHash = -1;
  this->m_hasUsername = 0;
  bdStrlcpy(&this->_bytes_20[8], userID->_bytes_20, 0xAui64);
  *(_QWORD *)this->m_username = 0i64;
  *(_QWORD *)&this->m_username[8] = 0i64;
  *(_QWORD *)&this->m_username[16] = 0i64;
  *(_QWORD *)&this->m_username[24] = 0i64;
  *(_QWORD *)&this->m_username[32] = 0i64;
  *(_QWORD *)&this->m_username[40] = 0i64;
  *(_QWORD *)&this->m_username[48] = 0i64;
  *(_QWORD *)&this->m_username[56] = 0i64;
}

/*
==============
bdUserDetails::bdUserDetails
==============
*/
void bdUserDetails::bdUserDetails(bdUserDetails *this, const unsigned __int64 *userID, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserDetails::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdUserDetails::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap79[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap79[15] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdUserDetails_vtbl *)&bdUserDetails::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserDetails::`vftable'{for `bdSerializable'};
  *(bdUserDetails_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserDetails_vtbl *)&bdUserDetails::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = *userID;
  this->m_usernameHash = -1;
  this->m_hasUsername = 0;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
  *(_QWORD *)this->m_accountType = 0i64;
  *(_QWORD *)&this->m_username[6] = 0i64;
  *(_QWORD *)&this->m_username[14] = 0i64;
  *(_QWORD *)&this->m_username[22] = 0i64;
  *(_QWORD *)&this->m_username[30] = 0i64;
  *(_QWORD *)&this->m_username[38] = 0i64;
  *(_QWORD *)&this->m_username[46] = 0i64;
  *(_QWORD *)&this->m_username[54] = 0i64;
  *(_WORD *)&this->m_username[62] = 0;
}

/*
==============
bdUserDetails::bdUserDetails
==============
*/
void bdUserDetails::bdUserDetails(bdUserDetails *this, const unsigned __int64 *userID, const char *const accountType, const char *const username, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserDetails::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdUserDetails::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap79[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap79[15] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdUserDetails_vtbl *)&bdUserDetails::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserDetails::`vftable'{for `bdSerializable'};
  *(bdUserDetails_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserDetails_vtbl *)&bdUserDetails::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = *userID;
  this->m_usernameHash = -1;
  bdStrlcpy(&this->_bytes_20[8], accountType, 0xAui64);
  this->m_hasUsername = bdStrlcpy(this->m_username, username, 0x40ui64) != 0;
}

/*
==============
bdUserDetails::bdUserDetails
==============
*/
void bdUserDetails::bdUserDetails(bdUserDetails *this, const unsigned __int64 *userID, const char *const accountType, const char *const username, const unsigned int usernameHash, int a6)
{
  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserDetails::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdUserDetails::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap79[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap79[15] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdUserDetails_vtbl *)&bdUserDetails::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserDetails::`vftable'{for `bdSerializable'};
  *(bdUserDetails_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserDetails_vtbl *)&bdUserDetails::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = *userID;
  this->m_usernameHash = usernameHash;
  bdStrlcpy(&this->_bytes_20[8], accountType, 0xAui64);
  this->m_hasUsername = bdStrlcpy(this->m_username, username, 0x40ui64) != 0;
}

/*
==============
bdUserDetails::bdUserDetails
==============
*/
void bdUserDetails::bdUserDetails(bdUserDetails *this, const unsigned __int64 *userID, const char *const accountType, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserDetails::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdUserDetails::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap79[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap79[15] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdUserDetails_vtbl *)&bdUserDetails::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserDetails::`vftable'{for `bdSerializable'};
  *(bdUserDetails_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserDetails_vtbl *)&bdUserDetails::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = *userID;
  this->m_usernameHash = -1;
  this->m_hasUsername = 0;
  bdStrlcpy(&this->_bytes_20[8], accountType, 0xAui64);
  *(_QWORD *)this->m_username = 0i64;
  *(_QWORD *)&this->m_username[8] = 0i64;
  *(_QWORD *)&this->m_username[16] = 0i64;
  *(_QWORD *)&this->m_username[24] = 0i64;
  *(_QWORD *)&this->m_username[32] = 0i64;
  *(_QWORD *)&this->m_username[40] = 0i64;
  *(_QWORD *)&this->m_username[48] = 0i64;
  *(_QWORD *)&this->m_username[56] = 0i64;
}

/*
==============
bdUserDetails::bdUserDetails
==============
*/
void bdUserDetails::bdUserDetails(bdUserDetails *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserDetails::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdUserDetails::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap79[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap79[15] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdUserDetails_vtbl *)&bdUserDetails::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserDetails::`vftable'{for `bdSerializable'};
  *(bdUserDetails_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserDetails_vtbl *)&bdUserDetails::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
  *(_QWORD *)this->m_accountType = 0i64;
  *(_QWORD *)&this->m_username[6] = 0i64;
  *(_QWORD *)&this->m_username[14] = 0i64;
  *(_QWORD *)&this->m_username[22] = 0i64;
  *(_QWORD *)&this->m_username[30] = 0i64;
  *(_QWORD *)&this->m_username[38] = 0i64;
  *(_QWORD *)&this->m_username[46] = 0i64;
  *(_QWORD *)&this->m_username[54] = 0i64;
  *(_WORD *)&this->m_username[62] = 0;
  this->m_usernameHash = -1;
  this->m_hasUsername = 0;
}

/*
==============
bdUserDetails::~bdUserDetails
==============
*/
void bdUserDetails::~bdUserDetails(bdUserDetails *this)
{
  bdTaskResult *v1; 

  v1 = (bdUserDetails *)((char *)this - 112);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdUserDetails::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdUserDetails::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 120) = &bdUserDetails::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)this[-1].m_accountType);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdUserDetails::operator=
==============
*/
bdUserDetails *bdUserDetails::operator=(bdUserDetails *this, const bdUserDetails *other)
{
  *(_QWORD *)this->_bytes_20 = *(_QWORD *)other->_bytes_20;
  bdStrlcpy(&this->_bytes_20[8], &other->_bytes_20[8], 0xAui64);
  bdStrlcpy(this->m_username, other->m_username, 0x40ui64);
  this->m_usernameHash = other->m_usernameHash;
  this->m_hasUsername = other->m_hasUsername;
  return this;
}

/*
==============
bdUserDetails::operator==
==============
*/
bool bdUserDetails::operator==(bdUserDetails *this, const bdUserDetails *other)
{
  return !strncmp(&this->_bytes_20[8], &other->_bytes_20[8], 0xAui64) && *(_QWORD *)this->_bytes_20 == *(_QWORD *)other->_bytes_20;
}

/*
==============
bdUserDetails::operator!=
==============
*/
bool bdUserDetails::operator!=(bdUserDetails *this, const bdUserDetails *other)
{
  return strncmp(&this->_bytes_20[8], &other->_bytes_20[8], 0xAui64) || *(_QWORD *)this->_bytes_20 != *(_QWORD *)other->_bytes_20;
}

/*
==============
bdStructUserDetails::deserialize
==============
*/
char bdStructUserDetails::deserialize(bdStructUserDetails *this, bdStructBufferDeserializer *deserializer)
{
  bool v4; 
  char v5; 
  char value[112]; 

  v4 = bdStructBufferDeserializer::readUInt64(deserializer, 1u, (unsigned __int64 *)&this[-1].m_username[14]) && bdStructBufferDeserializer::readString(deserializer, 2u, &this[-1].m_username[22], 0xAu);
  memset_0(value, 0, 0x61ui64);
  if ( v4 && bdStructBufferDeserializer::readString(deserializer, 3u, value, 0x61u) )
  {
    v5 = value[0];
    this[-1]._bytes_90[8] = value[0] != 0;
    if ( !v5 || bdUserDetails::unpackUsernameAndHash((bdStructUserDetails *)((char *)this - 128), value, &this[-1].m_username[32], (unsigned int *)&this[-1]._bytes_90[4], 1) )
      return 1;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdStructUserDetails", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bduserdetails.cpp", "bdStructUserDetails::deserialize", 0x17Fu, "Failed to unpack usernameWithHash for user %s-%lu", &this[-1].m_username[22], *(_QWORD *)&this[-1].m_username[14]);
  }
  return 0;
}

/*
==============
bdUserDetails::deserialize
==============
*/
__int64 bdUserDetails::deserialize(bdUserDetails *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 
  unsigned __int8 v5; 
  char v6; 
  char s[112]; 

  v4 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)this->_bytes_20) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, &this->_bytes_20[8], 0xAui64);
  memset_0(s, 0, 0x61ui64);
  if ( v4 && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, s, 0x61ui64) )
  {
    v5 = 1;
    v6 = s[0];
    this->m_hasUsername = s[0] != 0;
    if ( v6 && !bdUserDetails::unpackUsernameAndHash(this, s, this->m_username, &this->m_usernameHash, 1) )
    {
      v5 = 0;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdStructUserDetails", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bduserdetails.cpp", "bdUserDetails::deserialize", 0x11Du, "Failed to unpack usernameWithHash for user %s-%lu", &this->_bytes_20[8], *(_QWORD *)this->_bytes_20);
    }
  }
  else
  {
    v5 = 0;
  }
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v5;
}

/*
==============
bdUserDetails::getAccountType
==============
*/
const char *bdUserDetails::getAccountType(bdUserDetails *this)
{
  return &this->_bytes_20[8];
}

/*
==============
bdUserDetails::getUserID
==============
*/
unsigned __int64 bdUserDetails::getUserID(bdUserDetails *this)
{
  return *(_QWORD *)this->_bytes_20;
}

/*
==============
bdUserDetails::getUsername
==============
*/
char *bdUserDetails::getUsername(bdUserDetails *this)
{
  return this->m_username;
}

/*
==============
bdUserDetails::getUsernameHash
==============
*/
__int64 bdUserDetails::getUsernameHash(bdUserDetails *this)
{
  return this->m_usernameHash;
}

/*
==============
bdUserDetails::getUsernameWithHash
==============
*/
bool bdUserDetails::getUsernameWithHash(bdUserDetails *this, char *usernameWithHash)
{
  unsigned int m_usernameHash; 
  __int16 v4; 

  m_usernameHash = this->m_usernameHash;
  v4 = 35;
  return (unsigned int)(bdSnprintf(usernameWithHash, 0x61ui64, "%s%s%u", this->m_username, (const char *)&v4, m_usernameHash) - 1) <= 0x5F;
}

/*
==============
bdUserDetails::hasUsername
==============
*/
_BOOL8 bdUserDetails::hasUsername(bdUserDetails *this)
{
  return this->m_hasUsername;
}

/*
==============
bdUserDetails::packUsernameAndHash
==============
*/
bool bdUserDetails::packUsernameAndHash(bdUserDetails *this, char *usernameWithHash, const char *username, const unsigned int usernameHash)
{
  __int16 v6[12]; 

  v6[0] = 35;
  return (unsigned int)(bdSnprintf(usernameWithHash, 0x61ui64, "%s%s%u", username, (const char *)v6, usernameHash) - 1) <= 0x5F;
}

/*
==============
bdUserDetails::reset
==============
*/
void bdUserDetails::reset(bdUserDetails *this)
{
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
  *(_QWORD *)this->m_accountType = 0i64;
  *(_QWORD *)&this->m_username[6] = 0i64;
  *(_QWORD *)&this->m_username[14] = 0i64;
  *(_QWORD *)&this->m_username[22] = 0i64;
  *(_QWORD *)&this->m_username[30] = 0i64;
  *(_QWORD *)&this->m_username[38] = 0i64;
  *(_QWORD *)&this->m_username[46] = 0i64;
  *(_QWORD *)&this->m_username[54] = 0i64;
  *(_WORD *)&this->m_username[62] = 0;
  this->m_usernameHash = -1;
  this->m_hasUsername = 0;
}

/*
==============
bdStructUserDetails::serialize
==============
*/
bool bdStructUserDetails::serialize(bdStructUserDetails *this, bdStructBufferSerializer *serializer)
{
  bool result; 
  int v5; 
  __int16 v6[8]; 
  char buf[112]; 

  memset_0(buf, 0, 0x61ui64);
  result = 0;
  if ( bdStructBufferSerializer::writeUInt64(serializer, 1u, *(_QWORD *)&this[-1].m_username[14]) && bdStructBufferSerializer::writeString(serializer, 2u, &this[-1].m_username[22], 0xAu) )
  {
    v5 = *(_DWORD *)&this[-1]._bytes_90[4];
    v6[0] = 35;
    if ( (unsigned int)(bdSnprintf(buf, 0x61ui64, "%s%s%u", &this[-1].m_username[32], (const char *)v6, v5) - 1) <= 0x5F )
      return 1;
  }
  return result;
}

/*
==============
bdUserDetails::serialize
==============
*/
bool bdUserDetails::serialize(bdUserDetails *this, bdByteBuffer *buffer)
{
  bool result; 
  int v5; 
  __int16 v6[8]; 
  char buf[112]; 

  memset_0(buf, 0, 0x61ui64);
  result = 0;
  if ( bdByteBuffer::writeUInt64(buffer, *((_QWORD *)&this->__vftable + 2)) && bdByteBuffer::writeString(buffer, (const char *const)&this->__vftable + 24, 0xAui64) )
  {
    v5 = *(_DWORD *)&this->m_username[50];
    v6[0] = 35;
    if ( (unsigned int)(bdSnprintf(buf, 0x61ui64, "%s%s%u", &this->_bytes_20[2], (const char *)v6, v5) - 1) <= 0x5F && bdByteBuffer::writeString(buffer, buf, 0x61ui64) )
      return 1;
  }
  return result;
}

/*
==============
bdUserDetails::setAccountType
==============
*/
void bdUserDetails::setAccountType(bdUserDetails *this, const char *accountType)
{
  bdStrlcpy(&this->_bytes_20[8], accountType, 0xAui64);
}

/*
==============
bdUserDetails::setUserID
==============
*/
void bdUserDetails::setUserID(bdUserDetails *this, unsigned __int64 userID)
{
  *(_QWORD *)this->_bytes_20 = userID;
}

/*
==============
bdUserDetails::setUsername
==============
*/
void bdUserDetails::setUsername(bdUserDetails *this, const char *username)
{
  this->m_hasUsername = bdStrlcpy(this->m_username, username, 0x40ui64) != 0;
}

/*
==============
bdUserDetails::setUsernameHash
==============
*/
void bdUserDetails::setUsernameHash(bdUserDetails *this, unsigned int usernameHash)
{
  this->m_usernameHash = usernameHash;
}

/*
==============
bdUserDetails::setUsernameWithHash
==============
*/
void bdUserDetails::setUsernameWithHash(bdUserDetails *this, char *usernameWithHash)
{
  this->m_hasUsername = bdUserDetails::unpackUsernameAndHash(this, usernameWithHash, this->m_username, &this->m_usernameHash, 0);
}

/*
==============
bdUserDetails::setUsernameWithOptionalHash
==============
*/
bool bdUserDetails::setUsernameWithOptionalHash(bdUserDetails *this, const char *const usernameWithHash)
{
  bool result; 

  result = bdUserDetails::unpackUsernameAndHash(this, usernameWithHash, this->m_username, &this->m_usernameHash, 1);
  this->m_hasUsername = result;
  return result;
}

/*
==============
bdUserDetails::sizeOf
==============
*/
__int64 bdUserDetails::sizeOf(bdUserDetails *this)
{
  return 144i64;
}

/*
==============
bdUserDetails::unpackUsernameAndHash
==============
*/
char bdUserDetails::unpackUsernameAndHash(bdUserDetails *this, const char *usernameWithHash, char *const username, unsigned int *usernameHash, bool hashOptional)
{
  unsigned __int64 Token; 
  bool v7; 
  const char *v8; 
  unsigned __int64 v9; 
  size_t v10; 
  unsigned int v11; 
  bool v12; 
  __int16 v14; 
  const char *v15; 
  char *EndPtr; 
  char v17[8]; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  v14 = 35;
  *(_QWORD *)v17 = 0i64;
  v18 = 0i64;
  v19 = 0i64;
  v20 = 0i64;
  v15 = NULL;
  Token = bdStrnGetToken(usernameWithHash, 0x61ui64, (const char *const)&v14, 2ui64, username, 0x40u, &v15);
  v7 = Token != 0;
  if ( !Token || !*v15 )
  {
    if ( !Token )
      return 0;
    return hashOptional;
  }
  v8 = v15 + 1;
  bdHandleAssert(v15 + 1 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v9 = -1i64;
  do
    ++v9;
  while ( v8[v9] );
  v10 = 31i64;
  if ( v9 < 0x1F )
    v10 = v9;
  memcpy_0(v17, v8, v10);
  v17[v10] = 0;
  if ( !v7 || v9 >= 0x20 )
    return 0;
  if ( v9 )
  {
    EndPtr = NULL;
    v11 = strtoul(v17, &EndPtr, 0);
    if ( v11 )
    {
      if ( v11 != -1 )
        goto LABEL_15;
      v12 = *_errno() == 34;
    }
    else
    {
      v12 = EndPtr == v17;
    }
    if ( !v12 )
    {
LABEL_15:
      *usernameHash = v11;
      if ( v11 )
        return 1;
    }
  }
  return hashOptional;
}

