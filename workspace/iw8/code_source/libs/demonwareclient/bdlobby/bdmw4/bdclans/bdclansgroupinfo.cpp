/*
==============
bdClansGroupInfo::setName
==============
*/

void __fastcall bdClansGroupInfo::setName(bdClansGroupInfo *this, const char *name)
{
  ?setName@bdClansGroupInfo@@QEAAXPEBD@Z(this, name);
}

/*
==============
bdClansGroupInfo::setUniqueTag
==============
*/

void __fastcall bdClansGroupInfo::setUniqueTag(bdClansGroupInfo *this, const char *uniqueTag)
{
  ?setUniqueTag@bdClansGroupInfo@@QEAAXPEBD@Z(this, uniqueTag);
}

/*
==============
bdClansGroupInfo::getName
==============
*/

const char *__fastcall bdClansGroupInfo::getName(bdClansGroupInfo *this)
{
  return ?getName@bdClansGroupInfo@@QEBAPEBDXZ(this);
}

/*
==============
bdClansGroupInfo::bdClansGroupInfo
==============
*/

void __fastcall bdClansGroupInfo::bdClansGroupInfo(bdClansGroupInfo *this, const unsigned __int16 kind, const unsigned __int64 id, const char *name, const char *uniqueTag, const unsigned __int16 privacyLevel, const bdUserAccountID *owner, const unsigned __int16 rootKind, const unsigned __int64 rootID)
{
  ??0bdClansGroupInfo@@QEAA@G_KPEBD1GVbdUserAccountID@@G0@Z(this, kind, id, name, uniqueTag, privacyLevel, owner, rootKind, rootID);
}

/*
==============
bdClansGroupInfo::bdClansGroupInfo
==============
*/

void __fastcall bdClansGroupInfo::bdClansGroupInfo(bdClansGroupInfo *this, const bdClansGroupInfo *__that)
{
  ??0bdClansGroupInfo@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdClansGroupInfo::deserialize
==============
*/

bool __fastcall bdClansGroupInfo::deserialize(bdClansGroupInfo *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansGroupInfo@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansGroupInfo::bdClansGroupInfo
==============
*/

void __fastcall bdClansGroupInfo::bdClansGroupInfo(bdClansGroupInfo *this, const unsigned __int16 kind, const unsigned __int64 id, const char *name, const char *uniqueTag, const unsigned __int16 privacyLevel, const unsigned __int16 rootKind, const unsigned __int64 rootID)
{
  ??0bdClansGroupInfo@@QEAA@G_KPEBD1GG0@Z(this, kind, id, name, uniqueTag, privacyLevel, rootKind, rootID);
}

/*
==============
bdClansGroupInfo::setOwner
==============
*/

void __fastcall bdClansGroupInfo::setOwner(bdClansGroupInfo *this, const bdUserAccountID *owner)
{
  ?setOwner@bdClansGroupInfo@@QEAAXVbdUserAccountID@@@Z(this, owner);
}

/*
==============
bdClansGroupInfo::serialize
==============
*/

bool __fastcall bdClansGroupInfo::serialize(bdClansGroupInfo *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansGroupInfo@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansGroupInfo::getMemberCount
==============
*/

unsigned int __fastcall bdClansGroupInfo::getMemberCount(bdClansGroupInfo *this)
{
  return ?getMemberCount@bdClansGroupInfo@@QEBAIXZ(this);
}

/*
==============
bdClansGroupInfo::getPrivacyLevel
==============
*/

unsigned __int16 __fastcall bdClansGroupInfo::getPrivacyLevel(bdClansGroupInfo *this)
{
  return ?getPrivacyLevel@bdClansGroupInfo@@QEBAGXZ(this);
}

/*
==============
bdClansGroupInfo::getUniqueTag
==============
*/

const char *__fastcall bdClansGroupInfo::getUniqueTag(bdClansGroupInfo *this)
{
  return ?getUniqueTag@bdClansGroupInfo@@QEBAPEBDXZ(this);
}

/*
==============
bdClansGroupInfo::bdClansGroupInfo
==============
*/

void __fastcall bdClansGroupInfo::bdClansGroupInfo(bdClansGroupInfo *this, const unsigned __int16 kind, const unsigned __int64 id, const unsigned __int16 rootKind, const unsigned __int64 rootID)
{
  ??0bdClansGroupInfo@@QEAA@G_KG0@Z(this, kind, id, rootKind, rootID);
}

/*
==============
bdClansGroupInfo::getProposalCount
==============
*/

unsigned int __fastcall bdClansGroupInfo::getProposalCount(bdClansGroupInfo *this)
{
  return ?getProposalCount@bdClansGroupInfo@@QEBAIXZ(this);
}

/*
==============
bdClansGroupInfo::setPrivacyLevel
==============
*/

void __fastcall bdClansGroupInfo::setPrivacyLevel(bdClansGroupInfo *this, const unsigned __int16 privacyLevel)
{
  ?setPrivacyLevel@bdClansGroupInfo@@QEAAXG@Z(this, privacyLevel);
}

/*
==============
bdClansGroupInfo::getCreatedTimestamp
==============
*/

unsigned int __fastcall bdClansGroupInfo::getCreatedTimestamp(bdClansGroupInfo *this)
{
  return ?getCreatedTimestamp@bdClansGroupInfo@@QEBAIXZ(this);
}

/*
==============
bdClansGroupInfo::getOwner
==============
*/

bdUserAccountID *__fastcall bdClansGroupInfo::getOwner(bdClansGroupInfo *this, bdUserAccountID *result)
{
  return ?getOwner@bdClansGroupInfo@@QEBA?AVbdUserAccountID@@XZ(this, result);
}

/*
==============
bdClansGroupInfo::hasOwner
==============
*/

bool __fastcall bdClansGroupInfo::hasOwner(bdClansGroupInfo *this)
{
  return ?hasOwner@bdClansGroupInfo@@QEBA_NXZ(this);
}

/*
==============
bdClansGroupInfo::bdClansGroupInfo
==============
*/

void __fastcall bdClansGroupInfo::bdClansGroupInfo(bdClansGroupInfo *this)
{
  ??0bdClansGroupInfo@@QEAA@XZ(this);
}

/*
==============
bdClansGroupInfo::getOnlineMemberCount
==============
*/

unsigned int __fastcall bdClansGroupInfo::getOnlineMemberCount(bdClansGroupInfo *this)
{
  return ?getOnlineMemberCount@bdClansGroupInfo@@QEBAIXZ(this);
}

/*
==============
bdClansGroupInfo::bdClansGroupInfo
==============
*/
void bdClansGroupInfo::bdClansGroupInfo(bdClansGroupInfo *this, const unsigned __int16 kind, const unsigned __int64 id, const unsigned __int16 rootKind, const unsigned __int64 rootID, int a6)
{
  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupInfo::`vbtable';
    *(_QWORD *)this->gap2A8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap2A8[8] = 0;
  }
  bdClansGroupIdentifier::bdClansGroupIdentifier(this, kind, id, rootKind, rootID);
  this->__vftable = (bdClansGroupInfo_vtbl *)&bdClansGroupInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupInfo_vtbl *)&bdClansGroupInfo::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<255>::bdStructFixedSizeString<255>((bdStructFixedSizeString<255> *)(&this->m_rootID + 1));
  bdStructFixedSizeString<255>::bdStructFixedSizeString<255>(&this->m_uniqueTag);
  this->m_privacyLevel = 0;
  this->m_owner.m_hasValue = 0;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_owner.m_value);
  *(_QWORD *)&this->m_memberCount = 0i64;
  *(_QWORD *)&this->m_createdTimestamp = 0i64;
}

/*
==============
bdClansGroupInfo::bdClansGroupInfo
==============
*/
void bdClansGroupInfo::bdClansGroupInfo(bdClansGroupInfo *this, const unsigned __int16 kind, const unsigned __int64 id, const char *name, const char *uniqueTag, const unsigned __int16 privacyLevel, const unsigned __int16 rootKind, const unsigned __int64 rootID, int a9)
{
  if ( a9 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupInfo::`vbtable';
    *(_QWORD *)this->gap2A8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap2A8[8] = 0;
  }
  bdClansGroupIdentifier::bdClansGroupIdentifier(this, kind, id, rootKind, rootID);
  this->__vftable = (bdClansGroupInfo_vtbl *)&bdClansGroupInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupInfo_vtbl *)&bdClansGroupInfo::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<255>::copy((bdStructFixedSizeString<255> *)(&this->m_rootID + 1), name);
  bdStructFixedSizeString<255>::copy(&this->m_uniqueTag, uniqueTag);
  this->m_privacyLevel = privacyLevel;
  this->m_owner.m_hasValue = 0;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_owner.m_value);
  *(_QWORD *)&this->m_memberCount = 0i64;
  *(_QWORD *)&this->m_createdTimestamp = 0i64;
}

/*
==============
bdClansGroupInfo::bdClansGroupInfo
==============
*/
void bdClansGroupInfo::bdClansGroupInfo(bdClansGroupInfo *this, const unsigned __int16 kind, const unsigned __int64 id, const char *name, const char *uniqueTag, const unsigned __int16 privacyLevel, const bdUserAccountID *owner, const unsigned __int16 rootKind, const unsigned __int64 rootID, int a10)
{
  bdStructUserAccountID v12; 

  if ( a10 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupInfo::`vbtable';
    *(_QWORD *)this->gap2A8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap2A8[8] = 0;
  }
  bdClansGroupIdentifier::bdClansGroupIdentifier(this, kind, id, rootKind, rootID);
  this->__vftable = (bdClansGroupInfo_vtbl *)&bdClansGroupInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupInfo_vtbl *)&bdClansGroupInfo::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<255>::copy((bdStructFixedSizeString<255> *)(&this->m_rootID + 1), name);
  bdStructFixedSizeString<255>::copy(&this->m_uniqueTag, uniqueTag);
  this->m_privacyLevel = privacyLevel;
  bdStructUserAccountID::bdStructUserAccountID(&v12, owner);
  this->m_owner.m_hasValue = 1;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_owner.m_value, &v12);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v12._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v12.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v12._bytes_48);
  *(_QWORD *)&this->m_memberCount = 0i64;
  *(_QWORD *)&this->m_createdTimestamp = 0i64;
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)owner->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)owner->gap38);
}

/*
==============
bdClansGroupInfo::bdClansGroupInfo
==============
*/
void bdClansGroupInfo::bdClansGroupInfo(bdClansGroupInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupInfo::`vbtable';
    *(_QWORD *)this->gap2A8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap2A8[8] = 0;
  }
  bdClansGroupIdentifier::bdClansGroupIdentifier(this);
  this->__vftable = (bdClansGroupInfo_vtbl *)&bdClansGroupInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupInfo_vtbl *)&bdClansGroupInfo::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<255>::bdStructFixedSizeString<255>((bdStructFixedSizeString<255> *)(&this->m_rootID + 1));
  bdStructFixedSizeString<255>::bdStructFixedSizeString<255>(&this->m_uniqueTag);
  this->m_privacyLevel = 0;
  this->m_owner.m_hasValue = 0;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_owner.m_value);
  *(_QWORD *)&this->m_memberCount = 0i64;
  *(_QWORD *)&this->m_createdTimestamp = 0i64;
}

/*
==============
bdClansGroupInfo::deserialize
==============
*/
bool bdClansGroupInfo::deserialize(bdClansGroupInfo *this, bdStructBufferDeserializer *deserializer)
{
  char v4; 
  bdStructUserAccountID v6; 

  if ( !bdStructBufferDeserializer::readUInt16(deserializer, 1u, (unsigned __int16 *)&this->__vftable + 8) || !bdStructBufferDeserializer::readUInt64(deserializer, 2u, (unsigned __int64 *)&this->__vftable + 3) || !bdStructBufferDeserializer::readUInt16(deserializer, 3u, &this->m_rootKind) || !bdStructBufferDeserializer::readUInt64(deserializer, 4u, &this->m_rootID) || !bdStructBufferDeserializer::readString(deserializer, 5u, (char *const)&this->m_rootID + 8, 0xFFu) )
    return 0;
  this->m_owner.m_hasValue = 0;
  bdStructUserAccountID::bdStructUserAccountID(&v6);
  if ( bdStructBufferDeserializer::readObject(deserializer, 6u, (bdStructBufferSerializable *)v6.gap38) )
  {
    v4 = 1;
    if ( bdStructBufferDeserializer::getLastReadResult(deserializer) != BD_READ_SUCCESS_TAG_NOT_FOUND )
    {
      this->m_owner.m_hasValue = 1;
      bdUserAccountID::operator=(&this->m_owner.m_value, &v6);
      bdReferencable::operator=((bdReferencable *)&this->m_owner.m_value.gap38[*(int *)(*(_QWORD *)&this->m_owner.m_value.gap38[8] + 4i64) + 8], (const bdReferencable *)&v6.gap38[*(int *)(*(_QWORD *)&v6.gap38[8] + 4i64) + 8]);
    }
  }
  else
  {
    v4 = 0;
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v6._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v6.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v6._bytes_48);
  return v4 && bdStructBufferDeserializer::readUInt16(deserializer, 7u, &this->m_privacyLevel) && bdStructBufferDeserializer::readUInt32(deserializer, 8u, &this->m_memberCount) && bdStructBufferDeserializer::readUInt32(deserializer, 9u, &this->m_proposalCount) && bdStructBufferDeserializer::readUInt32(deserializer, 0xAu, &this->m_createdTimestamp) && bdStructBufferDeserializer::readUInt32(deserializer, 0xBu, &this->m_onlineMemberCount) && bdStructBufferDeserializer::readString(deserializer, 0xCu, this->m_uniqueTag.m_buffer, 0xFFu);
}

/*
==============
bdClansGroupInfo::getCreatedTimestamp
==============
*/
__int64 bdClansGroupInfo::getCreatedTimestamp(bdClansGroupInfo *this)
{
  return this->m_createdTimestamp;
}

/*
==============
bdClansGroupInfo::getMemberCount
==============
*/
__int64 bdClansGroupInfo::getMemberCount(bdClansGroupInfo *this)
{
  return this->m_memberCount;
}

/*
==============
bdClansGroupInfo::getName
==============
*/
const char *bdClansGroupInfo::getName(bdClansGroupInfo *this)
{
  return (const char *)(&this->m_rootID + 1);
}

/*
==============
bdClansGroupInfo::getOnlineMemberCount
==============
*/
__int64 bdClansGroupInfo::getOnlineMemberCount(bdClansGroupInfo *this)
{
  return this->m_onlineMemberCount;
}

/*
==============
bdClansGroupInfo::getOwner
==============
*/
bdUserAccountID *bdClansGroupInfo::getOwner(bdClansGroupInfo *this, bdUserAccountID *result)
{
  bdHandleAssert(this->m_owner.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdStructUserAccountID>::getValue", 0x3Cu, "Has no value");
  bdUserAccountID::bdUserAccountID(result, &this->m_owner.m_value);
  return result;
}

/*
==============
bdClansGroupInfo::getPrivacyLevel
==============
*/
__int64 bdClansGroupInfo::getPrivacyLevel(bdClansGroupInfo *this)
{
  return this->m_privacyLevel;
}

/*
==============
bdClansGroupInfo::getProposalCount
==============
*/
__int64 bdClansGroupInfo::getProposalCount(bdClansGroupInfo *this)
{
  return this->m_proposalCount;
}

/*
==============
bdClansGroupInfo::getUniqueTag
==============
*/
bdStructFixedSizeString<255> *bdClansGroupInfo::getUniqueTag(bdClansGroupInfo *this)
{
  return &this->m_uniqueTag;
}

/*
==============
bdClansGroupInfo::hasOwner
==============
*/
_BOOL8 bdClansGroupInfo::hasOwner(bdClansGroupInfo *this)
{
  return this->m_owner.m_hasValue;
}

/*
==============
bdClansGroupInfo::serialize
==============
*/
char bdClansGroupInfo::serialize(bdClansGroupInfo *this, bdStructBufferSerializer *serializer)
{
  bool v4; 
  unsigned __int64 *v5; 
  unsigned int v6; 
  unsigned __int64 *v7; 
  bool v8; 
  void *v9; 
  unsigned int v10; 
  bool m_hasValue; 
  char v12; 
  bdStructFixedSizeString<255> *p_m_uniqueTag; 
  bdStructFixedSizeString<255> *v14; 
  void *v16; 

  v4 = bdStructBufferSerializer::writeUInt16(serializer, 1u, *((_WORD *)&this->__vftable + 8)) && bdStructBufferSerializer::writeUInt64(serializer, 2u, *((_QWORD *)&this->__vftable + 3)) && bdStructBufferSerializer::writeUInt16(serializer, 3u, this->m_rootKind) && bdStructBufferSerializer::writeUInt64(serializer, 4u, this->m_rootID);
  v5 = &this->m_rootID + 1;
  v6 = 255;
  v7 = (unsigned __int64 *)memchr_0(&this->m_rootID + 1, 0, 0xFFui64);
  if ( v7 && v7 == v5 )
  {
    v8 = !v4;
  }
  else
  {
    if ( !v4 )
    {
LABEL_19:
      v12 = 0;
      goto LABEL_20;
    }
    v9 = memchr_0(&this->m_rootID + 1, 0, 0xFFui64);
    v10 = 255;
    if ( v9 )
      v10 = (_DWORD)v9 - (_DWORD)v5;
    v8 = !bdStructBufferSerializer::writeString(serializer, 5u, (const char *)&this->m_rootID + 8, v10);
  }
  if ( v8 )
    goto LABEL_19;
  m_hasValue = this->m_owner.m_hasValue;
  if ( m_hasValue )
  {
    bdHandleAssert(m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdStructUserAccountID>::getValue", 0x3Cu, "Has no value");
    if ( !bdStructBufferSerializer::writeObject(serializer, 6u, (const bdStructBufferSerializable *)this->m_owner.m_value.gap38) )
      goto LABEL_19;
  }
  if ( !bdStructBufferSerializer::writeUInt16(serializer, 7u, this->m_privacyLevel) )
    goto LABEL_19;
  v12 = 1;
LABEL_20:
  p_m_uniqueTag = &this->m_uniqueTag;
  v14 = (bdStructFixedSizeString<255> *)memchr_0(p_m_uniqueTag, 0, 0xFFui64);
  if ( v14 && v14 == p_m_uniqueTag )
    return v12;
  if ( v12 )
  {
    v16 = memchr_0(p_m_uniqueTag, 0, 0xFFui64);
    if ( v16 )
      v6 = (_DWORD)v16 - (_DWORD)p_m_uniqueTag;
    if ( bdStructBufferSerializer::writeString(serializer, 0xCu, p_m_uniqueTag->m_buffer, v6) )
      return 1;
  }
  return 0;
}

/*
==============
bdClansGroupInfo::setName
==============
*/
void bdClansGroupInfo::setName(bdClansGroupInfo *this, const char *name)
{
  bdStructFixedSizeString<255>::copy((bdStructFixedSizeString<255> *)(&this->m_rootID + 1), name);
}

/*
==============
bdClansGroupInfo::setOwner
==============
*/
void bdClansGroupInfo::setOwner(bdClansGroupInfo *this, const bdUserAccountID *owner)
{
  const bdStructUserAccountID *v4; 
  bdStructOptionalObject<bdStructUserAccountID> *p_m_owner; 
  bool v6; 
  bdStructUserAccountID v7; 
  __int64 v8; 
  _BYTE v9[64]; 

  bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)&v8, owner);
  v6 = 1;
  bdStructUserAccountID::bdStructUserAccountID(&v7, v4);
  p_m_owner = &this->m_owner;
  if ( p_m_owner != (bdStructOptionalObject<bdStructUserAccountID> *)&v6 )
  {
    p_m_owner->m_hasValue = v6;
    bdUserAccountID::operator=(&p_m_owner->m_value, &v7);
    bdReferencable::operator=((bdReferencable *)&p_m_owner->m_value.gap38[*(int *)(*(_QWORD *)&p_m_owner->m_value.gap38[8] + 4i64) + 8], (const bdReferencable *)&v7.gap38[*(int *)(*(_QWORD *)&v7.gap38[8] + 4i64) + 8]);
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v7._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v7.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v7._bytes_48);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v9[16]);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v9);
  bdReferencable::~bdReferencable((bdReferencable *)&v9[16]);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)owner->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)owner->gap38);
}

/*
==============
bdClansGroupInfo::setPrivacyLevel
==============
*/
void bdClansGroupInfo::setPrivacyLevel(bdClansGroupInfo *this, const unsigned __int16 privacyLevel)
{
  this->m_privacyLevel = privacyLevel;
}

/*
==============
bdClansGroupInfo::setUniqueTag
==============
*/
void bdClansGroupInfo::setUniqueTag(bdClansGroupInfo *this, const char *uniqueTag)
{
  bdStructFixedSizeString<255>::copy(&this->m_uniqueTag, uniqueTag);
}

/*
==============
bdClansGroupInfo::bdClansGroupInfo
==============
*/
void bdClansGroupInfo::bdClansGroupInfo(bdClansGroupInfo *this, const bdClansGroupInfo *__that, int a3)
{
  __int64 v7; 
  __int64 v8; 

  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupInfo::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)this->gap2A8, (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this, __that);
  this->__vftable = (bdClansGroupInfo_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupInfo_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *((_WORD *)&this->__vftable + 8) = *((_WORD *)&__that->__vftable + 8);
  *((_QWORD *)&this->__vftable + 3) = *((_QWORD *)&__that->__vftable + 3);
  this->m_rootKind = __that->m_rootKind;
  this->m_rootID = __that->m_rootID;
  this->__vftable = (bdClansGroupInfo_vtbl *)&bdClansGroupInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupInfo_vtbl *)&bdClansGroupInfo::`vftable'{for `bdReferencable'};
  _RAX = &this->m_rootID + 1;
  _RCX = &__that->m_rootID + 1;
  v7 = 2i64;
  v8 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups xmmword ptr [rax], xmm0
      vmovups xmm1, xmmword ptr [rcx+10h]
      vmovups xmmword ptr [rax+10h], xmm1
      vmovups xmm0, xmmword ptr [rcx+20h]
      vmovups xmmword ptr [rax+20h], xmm0
      vmovups xmm1, xmmword ptr [rcx+30h]
      vmovups xmmword ptr [rax+30h], xmm1
      vmovups xmm0, xmmword ptr [rcx+40h]
      vmovups xmmword ptr [rax+40h], xmm0
      vmovups xmm1, xmmword ptr [rcx+50h]
      vmovups xmmword ptr [rax+50h], xmm1
      vmovups xmm0, xmmword ptr [rcx+60h]
      vmovups xmmword ptr [rax+60h], xmm0
    }
    _RAX += 16;
    __asm
    {
      vmovups xmm1, xmmword ptr [rcx+70h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    _RCX += 16;
    --v8;
  }
  while ( v8 );
  _RCX = &this->m_uniqueTag;
  _RAX = &__that->m_uniqueTag;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (bdStructFixedSizeString<255> *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX = (bdStructFixedSizeString<255> *)((char *)_RAX + 128);
    --v7;
  }
  while ( v7 );
  this->m_privacyLevel = __that->m_privacyLevel;
  this->m_owner.m_hasValue = __that->m_owner.m_hasValue;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_owner.m_value, &__that->m_owner.m_value);
  this->m_memberCount = __that->m_memberCount;
  this->m_proposalCount = __that->m_proposalCount;
  this->m_createdTimestamp = __that->m_createdTimestamp;
  this->m_onlineMemberCount = __that->m_onlineMemberCount;
}

