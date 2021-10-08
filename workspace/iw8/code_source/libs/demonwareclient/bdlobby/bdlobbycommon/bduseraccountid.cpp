/*
==============
bdStructUserAccountID::deserialize
==============
*/

bool __fastcall bdStructUserAccountID::deserialize(bdStructUserAccountID *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdStructUserAccountID@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdStructUserAccountID::bdStructUserAccountID
==============
*/

void __fastcall bdStructUserAccountID::bdStructUserAccountID(bdStructUserAccountID *this, const unsigned __int64 *other)
{
  ??0bdStructUserAccountID@@QEAA@AEB_K@Z(this, other);
}

/*
==============
ContextSerialization::readUserID
==============
*/

bool __fastcall ContextSerialization::readUserID(bdReference<bdByteBuffer> buffer, bdUserAccountID *userID)
{
  return ?readUserID@ContextSerialization@@SA_NV?$bdReference@VbdByteBuffer@@@@AEAVbdUserAccountID@@@Z(buffer, userID);
}

/*
==============
bdUserAccountID::getUserID
==============
*/

unsigned __int64 __fastcall bdUserAccountID::getUserID(bdUserAccountID *this)
{
  return ?getUserID@bdUserAccountID@@QEBA_KXZ(this);
}

/*
==============
ContextSerialization::getContextSize
==============
*/

unsigned int __fastcall ContextSerialization::getContextSize(const char *context)
{
  return ?getContextSize@ContextSerialization@@SAIPEBD@Z(context);
}

/*
==============
ContextSerialization::writeContext
==============
*/

bool __fastcall ContextSerialization::writeContext(bdReference<bdByteBuffer> buffer, const char *context)
{
  return ?writeContext@ContextSerialization@@SA_NV?$bdReference@VbdByteBuffer@@@@PEBD@Z(buffer, context);
}

/*
==============
bdStructUserAccountID::bdStructUserAccountID
==============
*/

void __fastcall bdStructUserAccountID::bdStructUserAccountID(bdStructUserAccountID *this)
{
  ??0bdStructUserAccountID@@QEAA@XZ(this);
}

/*
==============
bdUserAccountID::bdUserAccountID
==============
*/

void __fastcall bdUserAccountID::bdUserAccountID(bdUserAccountID *this, const unsigned __int64 *userID)
{
  ??0bdUserAccountID@@QEAA@AEB_K@Z(this, userID);
}

/*
==============
bdUserAccountID::bdUserAccountID
==============
*/

void __fastcall bdUserAccountID::bdUserAccountID(bdUserAccountID *this)
{
  ??0bdUserAccountID@@QEAA@XZ(this);
}

/*
==============
ContextSerialization::writeUserID
==============
*/

bool __fastcall ContextSerialization::writeUserID(bdReference<bdByteBuffer> buffer, const bdUserAccountID *userID)
{
  return ?writeUserID@ContextSerialization@@SA_NV?$bdReference@VbdByteBuffer@@@@AEBVbdUserAccountID@@@Z(buffer, userID);
}

/*
==============
bdStructUserAccountID::serialize
==============
*/

bool __fastcall bdStructUserAccountID::serialize(bdStructUserAccountID *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdStructUserAccountID@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdUserAccountID::serialize
==============
*/

bool __fastcall bdUserAccountID::serialize(bdUserAccountID *this, bdByteBuffer *buffer)
{
  return ?serialize@bdUserAccountID@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
ContextSerialization::readUserID
==============
*/

bool __fastcall ContextSerialization::readUserID(bdReference<bdByteBuffer> buffer, unsigned __int64 *userID)
{
  return ?readUserID@ContextSerialization@@SA_NV?$bdReference@VbdByteBuffer@@@@AEA_K@Z(buffer, userID);
}

/*
==============
bdUserAccountID::sizeOf
==============
*/

unsigned int __fastcall bdUserAccountID::sizeOf(bdUserAccountID *this)
{
  return ?sizeOf@bdUserAccountID@@UEAAIXZ(this);
}

/*
==============
bdUserAccountID::setAccountType
==============
*/

void __fastcall bdUserAccountID::setAccountType(bdUserAccountID *this, const char *accountType)
{
  ?setAccountType@bdUserAccountID@@QEAAXPEBD@Z(this, accountType);
}

/*
==============
bdUserAccountID::bdUserAccountID
==============
*/

void __fastcall bdUserAccountID::bdUserAccountID(bdUserAccountID *this, const bdUserAccountID *other)
{
  ??0bdUserAccountID@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
ContextSerialization::readContext
==============
*/

bool __fastcall ContextSerialization::readContext(bdReference<bdByteBuffer> buffer, char *context, const unsigned int contextBufferSize)
{
  return ?readContext@ContextSerialization@@SA_NV?$bdReference@VbdByteBuffer@@@@PEADI@Z(buffer, context, contextBufferSize);
}

/*
==============
ContextSerialization::getUserIDSize
==============
*/

unsigned int __fastcall ContextSerialization::getUserIDSize(const unsigned __int64 *__formal)
{
  return ?getUserIDSize@ContextSerialization@@SAIAEB_K@Z(__formal);
}

/*
==============
ContextSerialization::readUserID
==============
*/

bool __fastcall ContextSerialization::readUserID(bdJSONDeserializer *jsonObject, unsigned __int64 *userID, const char *const userkey, const char *const contextkey)
{
  return ?readUserID@ContextSerialization@@SA_NAEAVbdJSONDeserializer@@AEA_KQEBD2@Z(jsonObject, userID, userkey, contextkey);
}

/*
==============
bdUserAccountID::setUserID
==============
*/

void __fastcall bdUserAccountID::setUserID(bdUserAccountID *this, unsigned __int64 userID)
{
  ?setUserID@bdUserAccountID@@QEAAX_K@Z(this, userID);
}

/*
==============
bdUserAccountID::toString
==============
*/

bdString *__fastcall bdUserAccountID::toString(bdUserAccountID *this, bdString *result)
{
  return ?toString@bdUserAccountID@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdUserAccountID::~bdUserAccountID
==============
*/

void __fastcall bdUserAccountID::~bdUserAccountID(bdUserAccountID *this)
{
  ??1bdUserAccountID@@UEAA@XZ(this);
}

/*
==============
ContextSerialization::writeUserID
==============
*/

bool __fastcall ContextSerialization::writeUserID(bdReference<bdByteBuffer> buffer, const unsigned __int64 *userID)
{
  return ?writeUserID@ContextSerialization@@SA_NV?$bdReference@VbdByteBuffer@@@@AEB_K@Z(buffer, userID);
}

/*
==============
bdStructUserAccountID::bdStructUserAccountID
==============
*/

void __fastcall bdStructUserAccountID::bdStructUserAccountID(bdStructUserAccountID *this, const unsigned __int64 *other, const char *const accountType)
{
  ??0bdStructUserAccountID@@QEAA@AEB_KQEBD@Z(this, other, accountType);
}

/*
==============
bdUserAccountID::bdUserAccountID
==============
*/

void __fastcall bdUserAccountID::bdUserAccountID(bdUserAccountID *this, const unsigned __int64 *userID, const char *const accountType)
{
  ??0bdUserAccountID@@QEAA@AEB_KQEBD@Z(this, userID, accountType);
}

/*
==============
bdUserAccountID::operator!=
==============
*/

bool __fastcall bdUserAccountID::operator!=(bdUserAccountID *this, const bdUserAccountID *other)
{
  return ??9bdUserAccountID@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdUserAccountID::reset
==============
*/

void __fastcall bdUserAccountID::reset(bdUserAccountID *this)
{
  ?reset@bdUserAccountID@@QEAAXXZ(this);
}

/*
==============
ContextSerialization::readUserID
==============
*/

bool __fastcall ContextSerialization::readUserID(bdJSONDeserializer *jsonObject, bdUserAccountID *userID, const char *const userkey, const char *const contextkey)
{
  return ?readUserID@ContextSerialization@@SA_NAEAVbdJSONDeserializer@@AEAVbdUserAccountID@@QEBD2@Z(jsonObject, userID, userkey, contextkey);
}

/*
==============
bdStructUserAccountID::bdStructUserAccountID
==============
*/

void __fastcall bdStructUserAccountID::bdStructUserAccountID(bdStructUserAccountID *this, const bdUserAccountID *other)
{
  ??0bdStructUserAccountID@@QEAA@AEBVbdUserAccountID@@@Z(this, other);
}

/*
==============
bdStructUserAccountID::bdStructUserAccountID
==============
*/

void __fastcall bdStructUserAccountID::bdStructUserAccountID(bdStructUserAccountID *this, const bdStructUserAccountID *other)
{
  ??0bdStructUserAccountID@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdUserAccountID::getAccountType
==============
*/

const char *__fastcall bdUserAccountID::getAccountType(bdUserAccountID *this)
{
  return ?getAccountType@bdUserAccountID@@QEBAPEBDXZ(this);
}

/*
==============
ContextSerialization::getUserIDSize
==============
*/

unsigned int __fastcall ContextSerialization::getUserIDSize(const bdUserAccountID *userID)
{
  return ?getUserIDSize@ContextSerialization@@SAIAEBVbdUserAccountID@@@Z(userID);
}

/*
==============
bdUserAccountID::deserialize
==============
*/

bool __fastcall bdUserAccountID::deserialize(bdUserAccountID *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdUserAccountID@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdUserAccountID::operator=
==============
*/

bdUserAccountID *__fastcall bdUserAccountID::operator=(bdUserAccountID *this, const bdUserAccountID *other)
{
  return ??4bdUserAccountID@@QEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
bdUserAccountID::operator==
==============
*/

bool __fastcall bdUserAccountID::operator==(bdUserAccountID *this, const bdUserAccountID *other)
{
  return ??8bdUserAccountID@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdStructUserAccountID::bdStructUserAccountID
==============
*/
void bdStructUserAccountID::bdStructUserAccountID(bdStructUserAccountID *this, const bdStructUserAccountID *other, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStructUserAccountID::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStructUserAccountID::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap38[8] = &bdStructUserAccountID::`vbtable';
    *(_QWORD *)this->_bytes_48 = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_48[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdStructUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserAccountID::`vftable'{for `bdSerializable'};
  *(bdStructUserAccountID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdReferencable'};
  this->m_userID = 0i64;
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_WORD *)&this->_bytes_20[8] = 0;
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)this->gap38);
  this->__vftable = (bdStructUserAccountID_vtbl *)&bdStructUserAccountID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStructUserAccountID::`vftable'{for `bdSerializable'};
  *(_QWORD *)this->gap38 = &bdStructUserAccountID::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructUserAccountID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserAccountID_vtbl *)&bdStructUserAccountID::`vftable'{for `bdReferencable'};
  this->m_userID = other->m_userID;
  bdStrlcpy(this->_bytes_20, other->_bytes_20, 0xAui64);
}

/*
==============
bdStructUserAccountID::bdStructUserAccountID
==============
*/
void bdStructUserAccountID::bdStructUserAccountID(bdStructUserAccountID *this, const bdUserAccountID *other, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStructUserAccountID::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStructUserAccountID::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap38[8] = &bdStructUserAccountID::`vbtable';
    *(_QWORD *)this->_bytes_48 = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_48[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdStructUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserAccountID::`vftable'{for `bdSerializable'};
  *(bdStructUserAccountID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdReferencable'};
  this->m_userID = 0i64;
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_WORD *)&this->_bytes_20[8] = 0;
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)this->gap38);
  this->__vftable = (bdStructUserAccountID_vtbl *)&bdStructUserAccountID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStructUserAccountID::`vftable'{for `bdSerializable'};
  *(_QWORD *)this->gap38 = &bdStructUserAccountID::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructUserAccountID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserAccountID_vtbl *)&bdStructUserAccountID::`vftable'{for `bdReferencable'};
  this->m_userID = other->m_userID;
  bdStrlcpy(this->_bytes_20, other->_bytes_20, 0xAui64);
}

/*
==============
bdStructUserAccountID::bdStructUserAccountID
==============
*/
void bdStructUserAccountID::bdStructUserAccountID(bdStructUserAccountID *this, const unsigned __int64 *other, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStructUserAccountID::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStructUserAccountID::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap38[8] = &bdStructUserAccountID::`vbtable';
    *(_QWORD *)this->_bytes_48 = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_48[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdStructUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserAccountID::`vftable'{for `bdSerializable'};
  *(bdStructUserAccountID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdReferencable'};
  this->m_userID = 0i64;
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_WORD *)&this->_bytes_20[8] = 0;
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)this->gap38);
  this->__vftable = (bdStructUserAccountID_vtbl *)&bdStructUserAccountID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStructUserAccountID::`vftable'{for `bdSerializable'};
  *(_QWORD *)this->gap38 = &bdStructUserAccountID::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructUserAccountID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserAccountID_vtbl *)&bdStructUserAccountID::`vftable'{for `bdReferencable'};
  this->m_userID = *other;
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_WORD *)&this->_bytes_20[8] = 0;
}

/*
==============
bdStructUserAccountID::bdStructUserAccountID
==============
*/
void bdStructUserAccountID::bdStructUserAccountID(bdStructUserAccountID *this, const unsigned __int64 *other, const char *const accountType, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStructUserAccountID::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStructUserAccountID::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap38[8] = &bdStructUserAccountID::`vbtable';
    *(_QWORD *)this->_bytes_48 = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_48[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdStructUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserAccountID::`vftable'{for `bdSerializable'};
  *(bdStructUserAccountID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdReferencable'};
  this->m_userID = 0i64;
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_WORD *)&this->_bytes_20[8] = 0;
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)this->gap38);
  this->__vftable = (bdStructUserAccountID_vtbl *)&bdStructUserAccountID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStructUserAccountID::`vftable'{for `bdSerializable'};
  *(_QWORD *)this->gap38 = &bdStructUserAccountID::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructUserAccountID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserAccountID_vtbl *)&bdStructUserAccountID::`vftable'{for `bdReferencable'};
  this->m_userID = *other;
  bdStrlcpy(this->_bytes_20, accountType, 0xAui64);
}

/*
==============
bdStructUserAccountID::bdStructUserAccountID
==============
*/
void bdStructUserAccountID::bdStructUserAccountID(bdStructUserAccountID *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStructUserAccountID::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStructUserAccountID::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap38[8] = &bdStructUserAccountID::`vbtable';
    *(_QWORD *)this->_bytes_48 = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_48[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdStructUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserAccountID::`vftable'{for `bdSerializable'};
  *(bdStructUserAccountID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdReferencable'};
  this->m_userID = 0i64;
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_WORD *)&this->_bytes_20[8] = 0;
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)this->gap38);
  this->__vftable = (bdStructUserAccountID_vtbl *)&bdStructUserAccountID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStructUserAccountID::`vftable'{for `bdSerializable'};
  *(_QWORD *)this->gap38 = &bdStructUserAccountID::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructUserAccountID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructUserAccountID_vtbl *)&bdStructUserAccountID::`vftable'{for `bdReferencable'};
  this->m_userID = 0i64;
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_WORD *)&this->_bytes_20[8] = 0;
}

/*
==============
bdUserAccountID::bdUserAccountID
==============
*/
void bdUserAccountID::bdUserAccountID(bdUserAccountID *this, const bdUserAccountID *other, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserAccountID::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdUserAccountID::`vbtable'{for `bdSerializable'};
    *(_QWORD *)this->gap38 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap38[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserAccountID::`vftable'{for `bdSerializable'};
  *(bdUserAccountID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdReferencable'};
  this->m_userID = other->m_userID;
  bdStrlcpy(this->_bytes_20, other->_bytes_20, 0xAui64);
}

/*
==============
bdUserAccountID::bdUserAccountID
==============
*/
void bdUserAccountID::bdUserAccountID(bdUserAccountID *this, const unsigned __int64 *userID, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserAccountID::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdUserAccountID::`vbtable'{for `bdSerializable'};
    *(_QWORD *)this->gap38 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap38[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserAccountID::`vftable'{for `bdSerializable'};
  *(bdUserAccountID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdReferencable'};
  this->m_userID = *userID;
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_WORD *)&this->_bytes_20[8] = 0;
}

/*
==============
bdUserAccountID::bdUserAccountID
==============
*/
void bdUserAccountID::bdUserAccountID(bdUserAccountID *this, const unsigned __int64 *userID, const char *const accountType, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserAccountID::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdUserAccountID::`vbtable'{for `bdSerializable'};
    *(_QWORD *)this->gap38 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap38[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserAccountID::`vftable'{for `bdSerializable'};
  *(bdUserAccountID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdReferencable'};
  this->m_userID = *userID;
  bdStrlcpy(this->_bytes_20, accountType, 0xAui64);
}

/*
==============
bdUserAccountID::bdUserAccountID
==============
*/
void bdUserAccountID::bdUserAccountID(bdUserAccountID *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserAccountID::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdUserAccountID::`vbtable'{for `bdSerializable'};
    *(_QWORD *)this->gap38 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap38[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdUserAccountID::`vftable'{for `bdSerializable'};
  *(bdUserAccountID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserAccountID_vtbl *)&bdUserAccountID::`vftable'{for `bdReferencable'};
  this->m_userID = 0i64;
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_WORD *)&this->_bytes_20[8] = 0;
}

/*
==============
bdUserAccountID::~bdUserAccountID
==============
*/
void bdUserAccountID::~bdUserAccountID(bdUserAccountID *this)
{
  bdTaskResult *v1; 

  v1 = (bdUserAccountID *)((char *)this - 40);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdUserAccountID::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdUserAccountID::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 48) = &bdUserAccountID::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)&this[-1].m_userID);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdUserAccountID::operator=
==============
*/
bdUserAccountID *bdUserAccountID::operator=(bdUserAccountID *this, const bdUserAccountID *other)
{
  bdStrlcpy(this->_bytes_20, other->_bytes_20, 0xAui64);
  this->m_userID = other->m_userID;
  return this;
}

/*
==============
bdUserAccountID::operator==
==============
*/
bool bdUserAccountID::operator==(bdUserAccountID *this, const bdUserAccountID *other)
{
  return !strncmp(this->_bytes_20, other->_bytes_20, 0xAui64) && this->m_userID == other->m_userID;
}

/*
==============
bdUserAccountID::operator!=
==============
*/
bool bdUserAccountID::operator!=(bdUserAccountID *this, const bdUserAccountID *other)
{
  return strncmp(this->_bytes_20, other->_bytes_20, 0xAui64) || this->m_userID != other->m_userID;
}

/*
==============
bdStructUserAccountID::deserialize
==============
*/
bool bdStructUserAccountID::deserialize(bdStructUserAccountID *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUInt64(deserializer, 1u, (unsigned __int64 *)&this[-1]._bytes_48[8]) && bdStructBufferDeserializer::readString(deserializer, 2u, &this[-1].gap38[8], 0xAu);
}

/*
==============
bdUserAccountID::deserialize
==============
*/
_BOOL8 bdUserAccountID::deserialize(bdUserAccountID *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  v4 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_userID) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->_bytes_20, 0xAui64);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v4;
}

/*
==============
bdUserAccountID::getAccountType
==============
*/
const char *bdUserAccountID::getAccountType(bdUserAccountID *this)
{
  return this->_bytes_20;
}

/*
==============
ContextSerialization::getContextSize
==============
*/
__int64 ContextSerialization::getContextSize(const char *context)
{
  __int64 v3; 
  _BYTE *v4; 

  if ( !context )
    return 0i64;
  v3 = 16i64;
  v4 = memchr_0(context, 0, 0x10ui64);
  if ( v4 )
    v3 = v4 - context;
  return v3 + 2;
}

/*
==============
bdUserAccountID::getUserID
==============
*/
unsigned __int64 bdUserAccountID::getUserID(bdUserAccountID *this)
{
  return this->m_userID;
}

/*
==============
ContextSerialization::getUserIDSize
==============
*/
__int64 ContextSerialization::getUserIDSize(const bdUserAccountID *userID)
{
  int v1; 
  int v3; 
  void *v4; 

  v1 = (_DWORD)userID + 32;
  if ( userID == (const bdUserAccountID *)-32i64 )
    return 9i64;
  v3 = 10;
  v4 = memchr_0(userID->_bytes_20, 0, 0xAui64);
  if ( v4 )
    v3 = (_DWORD)v4 - v1;
  return (unsigned int)(v3 + 11);
}

/*
==============
ContextSerialization::getUserIDSize
==============
*/
__int64 ContextSerialization::getUserIDSize(const unsigned __int64 *__formal)
{
  return 9i64;
}

/*
==============
ContextSerialization::readContext
==============
*/
_BOOL8 ContextSerialization::readContext(bdReference<bdByteBuffer> buffer, char *context, const unsigned int contextBufferSize)
{
  bool String; 

  bdHandleAssert(context != NULL, "(context != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bduseraccountid.cpp", "ContextSerialization::readContext", 0xC4u, "Context buffer must not be NULL", -2i64);
  bdHandleAssert(contextBufferSize >= 0x10, "(contextBufferSize >= BD_MAX_CONTEXT_NAME_LENGTH)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bduseraccountid.cpp", "ContextSerialization::readContext", 0xC6u, "Context buffer size must be >= BD_MAX_CONTEXT_NAME_LENGTH");
  String = bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, context, contextBufferSize);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return String;
}

/*
==============
ContextSerialization::readUserID
==============
*/
bool ContextSerialization::readUserID(bdJSONDeserializer *jsonObject, bdUserAccountID *userID, const char *const userkey, const char *const contextkey)
{
  unsigned __int64 *p_m_userID; 
  const char *v9; 
  bool UInt64; 
  const char *v11; 

  p_m_userID = &userID->m_userID;
  v9 = userkey;
  if ( !userkey )
    v9 = "player_id";
  UInt64 = bdJSONDeserializer::getUInt64(jsonObject, v9, p_m_userID);
  if ( contextkey )
  {
    if ( !UInt64 )
      return 0;
    v11 = contextkey;
  }
  else
  {
    if ( !UInt64 )
      return 0;
    v11 = "account_type";
  }
  return bdJSONDeserializer::getString(jsonObject, v11, userID->_bytes_20, 0xAu);
}

/*
==============
ContextSerialization::readUserID
==============
*/
bool ContextSerialization::readUserID(bdJSONDeserializer *jsonObject, unsigned __int64 *userID, const char *const userkey, const char *const contextkey)
{
  bool v5; 
  const char *v7; 

  v5 = userkey == NULL;
  v7 = userkey;
  if ( v5 )
    v7 = "player_id";
  return bdJSONDeserializer::getUInt64(jsonObject, v7, userID);
}

/*
==============
ContextSerialization::readUserID
==============
*/
_BOOL8 ContextSerialization::readUserID(bdReference<bdByteBuffer> buffer, bdUserAccountID *userID)
{
  bool v4; 

  v4 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &userID->m_userID) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, userID->_bytes_20, 0xAui64);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v4;
}

/*
==============
ContextSerialization::readUserID
==============
*/
_BOOL8 ContextSerialization::readUserID(bdReference<bdByteBuffer> buffer, unsigned __int64 *userID)
{
  bool UInt64; 

  UInt64 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, userID);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return UInt64;
}

/*
==============
bdUserAccountID::reset
==============
*/
void bdUserAccountID::reset(bdUserAccountID *this)
{
  this->m_userID = 0i64;
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_WORD *)&this->_bytes_20[8] = 0;
}

/*
==============
bdStructUserAccountID::serialize
==============
*/
bool bdStructUserAccountID::serialize(bdStructUserAccountID *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeUInt64(serializer, 1u, *(_QWORD *)&this[-1]._bytes_48[8]) && bdStructBufferSerializer::writeString(serializer, 2u, &this[-1].gap38[8], 0xAu);
}

/*
==============
bdUserAccountID::serialize
==============
*/
bool bdUserAccountID::serialize(bdUserAccountID *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeUInt64(buffer, *(_QWORD *)this->_bytes_20) && bdByteBuffer::writeString(buffer, (const char *const)&this->__vftable + 16, 0xAui64);
}

/*
==============
bdUserAccountID::setAccountType
==============
*/
void bdUserAccountID::setAccountType(bdUserAccountID *this, const char *accountType)
{
  bdStrlcpy(this->_bytes_20, accountType, 0xAui64);
}

/*
==============
bdUserAccountID::setUserID
==============
*/
void bdUserAccountID::setUserID(bdUserAccountID *this, unsigned __int64 userID)
{
  this->m_userID = userID;
}

/*
==============
bdUserAccountID::sizeOf
==============
*/
__int64 bdUserAccountID::sizeOf(bdUserAccountID *this)
{
  return 72i64;
}

/*
==============
bdUserAccountID::toString
==============
*/
bdString *bdUserAccountID::toString(bdUserAccountID *this, bdString *result)
{
  makeFormattedString(result, "%s-%lu", this->_bytes_20, this->m_userID);
  return result;
}

/*
==============
ContextSerialization::writeContext
==============
*/
_BOOL8 ContextSerialization::writeContext(bdReference<bdByteBuffer> buffer, const char *context)
{
  bool v3; 

  v3 = bdByteBuffer::writeString((bdByteBuffer *)buffer.m_ptr->__vftable, context, 0x10ui64);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v3;
}

/*
==============
ContextSerialization::writeUserID
==============
*/
_BOOL8 ContextSerialization::writeUserID(bdReference<bdByteBuffer> buffer, const bdUserAccountID *userID)
{
  bool v4; 

  v4 = bdByteBuffer::writeUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, userID->m_userID) && bdByteBuffer::writeString((bdByteBuffer *)buffer.m_ptr->__vftable, userID->_bytes_20, 0xAui64);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v4;
}

/*
==============
ContextSerialization::writeUserID
==============
*/
_BOOL8 ContextSerialization::writeUserID(bdReference<bdByteBuffer> buffer, const unsigned __int64 *userID)
{
  bool v3; 

  v3 = bdByteBuffer::writeUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, *userID);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v3;
}

