/*
==============
bdObjectStoreCacheAwareObjectID::getCachedChecksum
==============
*/

const char *__fastcall bdObjectStoreCacheAwareObjectID::getCachedChecksum(bdObjectStoreCacheAwareObjectID *this)
{
  return ?getCachedChecksum@bdObjectStoreCacheAwareObjectID@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreCacheAwareObjectID::initialize
==============
*/

void __fastcall bdObjectStoreCacheAwareObjectID::initialize(bdObjectStoreCacheAwareObjectID *this, const char *const cachedObjectVersion, const char *const cachedChecksum)
{
  ?initialize@bdObjectStoreCacheAwareObjectID@@IEAAXQEBD0@Z(this, cachedObjectVersion, cachedChecksum);
}

/*
==============
bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID
==============
*/

void __fastcall bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID(bdObjectStoreCacheAwareObjectID *this, const bdUserAccountID *owner, const char *const objectName, const char *const cachedObjectVersion, const char *const cachedChecksum)
{
  ??0bdObjectStoreCacheAwareObjectID@@QEAA@AEBVbdUserAccountID@@QEBD11@Z(this, owner, objectName, cachedObjectVersion, cachedChecksum);
}

/*
==============
bdObjectStoreCacheAwareObjectID::reset
==============
*/

void __fastcall bdObjectStoreCacheAwareObjectID::reset(bdObjectStoreCacheAwareObjectID *this)
{
  ?reset@bdObjectStoreCacheAwareObjectID@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreCacheAwareObjectID::getOwnerString
==============
*/

bool __fastcall bdObjectStoreCacheAwareObjectID::getOwnerString(bdObjectStoreCacheAwareObjectID *this, char *owner, int ownerSize)
{
  return ?getOwnerString@bdObjectStoreCacheAwareObjectID@@QEBA_NPEADH@Z(this, owner, ownerSize);
}

/*
==============
bdObjectStoreCacheAwareObjectID::getObjectID
==============
*/

bdObjectStoreObjectID *__fastcall bdObjectStoreCacheAwareObjectID::getObjectID(bdObjectStoreCacheAwareObjectID *this)
{
  return ?getObjectID@bdObjectStoreCacheAwareObjectID@@QEAAAEAVbdObjectStoreObjectID@@XZ(this);
}

/*
==============
bdObjectStoreCacheAwareObjectID::~bdObjectStoreCacheAwareObjectID
==============
*/

void __fastcall bdObjectStoreCacheAwareObjectID::~bdObjectStoreCacheAwareObjectID(bdObjectStoreCacheAwareObjectID *this)
{
  ??1bdObjectStoreCacheAwareObjectID@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID
==============
*/

void __fastcall bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID(bdObjectStoreCacheAwareObjectID *this, const char *const owner, const char *const objectName, const char *const cachedObjectVersion, const char *const cachedChecksum)
{
  ??0bdObjectStoreCacheAwareObjectID@@QEAA@QEBD000@Z(this, owner, objectName, cachedObjectVersion, cachedChecksum);
}

/*
==============
bdObjectStoreCacheAwareObjectID::setUserIDFromOwnerString
==============
*/

bool __fastcall bdObjectStoreCacheAwareObjectID::setUserIDFromOwnerString(bdObjectStoreCacheAwareObjectID *this, const char *owner)
{
  return ?setUserIDFromOwnerString@bdObjectStoreCacheAwareObjectID@@QEAA_NPEBD@Z(this, owner);
}

/*
==============
bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID
==============
*/

void __fastcall bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID(bdObjectStoreCacheAwareObjectID *this, const bdObjectStoreObjectID *objectID, const char *const cachedObjectVersion, const char *const cachedChecksum)
{
  ??0bdObjectStoreCacheAwareObjectID@@QEAA@AEBVbdObjectStoreObjectID@@QEBD1@Z(this, objectID, cachedObjectVersion, cachedChecksum);
}

/*
==============
bdObjectStoreCacheAwareObjectID::getCachedObjectVersion
==============
*/

const char *__fastcall bdObjectStoreCacheAwareObjectID::getCachedObjectVersion(bdObjectStoreCacheAwareObjectID *this)
{
  return ?getCachedObjectVersion@bdObjectStoreCacheAwareObjectID@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreCacheAwareObjectID::serializeToJSON
==============
*/

bool __fastcall bdObjectStoreCacheAwareObjectID::serializeToJSON(bdObjectStoreCacheAwareObjectID *this, bdJSONSerializer *json)
{
  return ?serializeToJSON@bdObjectStoreCacheAwareObjectID@@QEBA_NPEAVbdJSONSerializer@@@Z(this, json);
}

/*
==============
bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID
==============
*/

void __fastcall bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID(bdObjectStoreCacheAwareObjectID *this)
{
  ??0bdObjectStoreCacheAwareObjectID@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID
==============
*/
void bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID(bdObjectStoreCacheAwareObjectID *this, const bdObjectStoreObjectID *objectID, const char *const cachedObjectVersion, const char *const cachedChecksum)
{
  _RBX = objectID;
  _RBP = this;
  bdObjectStoreObjectID::bdObjectStoreObjectID(&this->m_objectID);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rbp+0], ymm0
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rbp+20h], ymm1
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups ymmword ptr [rbp+40h], ymm0
    vmovups xmm1, xmmword ptr [rbx+60h]
    vmovups xmmword ptr [rbp+60h], xmm1
  }
  bdObjectStoreCacheAwareObjectID::initialize(_RBP, cachedObjectVersion, cachedChecksum);
}

/*
==============
bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID
==============
*/
void bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID(bdObjectStoreCacheAwareObjectID *this, const bdUserAccountID *owner, const char *const objectName, const char *const cachedObjectVersion, const char *const cachedChecksum)
{
  bdObjectStoreObjectID v14; 

  _RBP = this;
  bdObjectStoreObjectID::bdObjectStoreObjectID(&this->m_objectID);
  bdObjectStoreObjectID::bdObjectStoreObjectID(&v14, owner, objectName, USER_OWNER_TYPE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+0], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbp+20h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbp+40h], ymm0
    vmovups xmm1, xmmword ptr [rax+60h]
    vmovups xmmword ptr [rbp+60h], xmm1
  }
  bdObjectStoreCacheAwareObjectID::initialize(_RBP, cachedObjectVersion, cachedChecksum);
}

/*
==============
bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID
==============
*/
void bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID(bdObjectStoreCacheAwareObjectID *this, const char *const owner, const char *const objectName, const char *const cachedObjectVersion, const char *const cachedChecksum)
{
  bdObjectStoreObjectID v14; 

  _RBP = this;
  bdObjectStoreObjectID::bdObjectStoreObjectID(&this->m_objectID);
  bdObjectStoreObjectID::bdObjectStoreObjectID(&v14, owner, objectName, USER_OWNER_TYPE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+0], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbp+20h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbp+40h], ymm0
    vmovups xmm1, xmmword ptr [rax+60h]
    vmovups xmmword ptr [rbp+60h], xmm1
  }
  bdObjectStoreCacheAwareObjectID::initialize(_RBP, cachedObjectVersion, cachedChecksum);
}

/*
==============
bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID
==============
*/
void bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID(bdObjectStoreCacheAwareObjectID *this)
{
  bdObjectStoreObjectID::bdObjectStoreObjectID(&this->m_objectID);
  bdObjectStoreObjectID::reset(&this->m_objectID);
  *(_QWORD *)this->m_cachedObjectVersion = 0i64;
  *(_QWORD *)&this->m_cachedObjectVersion[8] = 0i64;
  *(_QWORD *)&this->m_cachedObjectVersion[16] = 0i64;
  *(_QWORD *)&this->m_cachedObjectVersion[24] = 0i64;
  *(_QWORD *)&this->m_cachedObjectVersion[32] = 0i64;
  *(_QWORD *)&this->m_cachedChecksum[7] = 0i64;
  *(_QWORD *)&this->m_cachedChecksum[15] = 0i64;
  *(_QWORD *)&this->m_cachedChecksum[23] = 0i64;
  *(_WORD *)&this->m_cachedChecksum[31] = 0;
}

/*
==============
bdObjectStoreCacheAwareObjectID::~bdObjectStoreCacheAwareObjectID
==============
*/
void bdObjectStoreCacheAwareObjectID::~bdObjectStoreCacheAwareObjectID(bdObjectStoreCacheAwareObjectID *this)
{
  ;
}

/*
==============
bdObjectStoreCacheAwareObjectID::getCachedChecksum
==============
*/
char *bdObjectStoreCacheAwareObjectID::getCachedChecksum(bdObjectStoreCacheAwareObjectID *this)
{
  return this->m_cachedChecksum;
}

/*
==============
bdObjectStoreCacheAwareObjectID::getCachedObjectVersion
==============
*/
char *bdObjectStoreCacheAwareObjectID::getCachedObjectVersion(bdObjectStoreCacheAwareObjectID *this)
{
  return this->m_cachedObjectVersion;
}

/*
==============
bdObjectStoreCacheAwareObjectID::getObjectID
==============
*/
bdObjectStoreCacheAwareObjectID *bdObjectStoreCacheAwareObjectID::getObjectID(bdObjectStoreCacheAwareObjectID *this)
{
  return this;
}

/*
==============
bdObjectStoreCacheAwareObjectID::getOwnerString
==============
*/

bool __fastcall bdObjectStoreCacheAwareObjectID::getOwnerString(bdObjectStoreCacheAwareObjectID *this, char *owner, int ownerSize)
{
  return bdObjectStoreObjectID::getOwnerString(&this->m_objectID, owner, ownerSize);
}

/*
==============
bdObjectStoreCacheAwareObjectID::initialize
==============
*/
void bdObjectStoreCacheAwareObjectID::initialize(bdObjectStoreCacheAwareObjectID *this, const char *const cachedObjectVersion, const char *const cachedChecksum)
{
  if ( cachedObjectVersion )
  {
    bdStrlcpy(this->m_cachedObjectVersion, cachedObjectVersion, 0x21ui64);
  }
  else
  {
    *(_QWORD *)this->m_cachedObjectVersion = 0i64;
    *(_QWORD *)&this->m_cachedObjectVersion[8] = 0i64;
    *(_QWORD *)&this->m_cachedObjectVersion[16] = 0i64;
    *(_QWORD *)&this->m_cachedObjectVersion[24] = 0i64;
    this->m_cachedObjectVersion[32] = 0;
  }
  if ( cachedChecksum )
  {
    bdStrlcpy(this->m_cachedChecksum, cachedChecksum, 0x21ui64);
  }
  else
  {
    *(_QWORD *)this->m_cachedChecksum = 0i64;
    *(_QWORD *)&this->m_cachedChecksum[8] = 0i64;
    *(_QWORD *)&this->m_cachedChecksum[16] = 0i64;
    *(_QWORD *)&this->m_cachedChecksum[24] = 0i64;
    this->m_cachedChecksum[32] = 0;
  }
}

/*
==============
bdObjectStoreCacheAwareObjectID::reset
==============
*/
void bdObjectStoreCacheAwareObjectID::reset(bdObjectStoreCacheAwareObjectID *this)
{
  bdObjectStoreObjectID::reset(&this->m_objectID);
  *(_QWORD *)this->m_cachedObjectVersion = 0i64;
  *(_QWORD *)&this->m_cachedObjectVersion[8] = 0i64;
  *(_QWORD *)&this->m_cachedObjectVersion[16] = 0i64;
  *(_QWORD *)&this->m_cachedObjectVersion[24] = 0i64;
  *(_QWORD *)&this->m_cachedObjectVersion[32] = 0i64;
  *(_QWORD *)&this->m_cachedChecksum[7] = 0i64;
  *(_QWORD *)&this->m_cachedChecksum[15] = 0i64;
  *(_QWORD *)&this->m_cachedChecksum[23] = 0i64;
  *(_WORD *)&this->m_cachedChecksum[31] = 0;
}

/*
==============
bdObjectStoreCacheAwareObjectID::serializeToJSON
==============
*/
char bdObjectStoreCacheAwareObjectID::serializeToJSON(bdObjectStoreCacheAwareObjectID *this, bdJSONSerializer *json)
{
  const char *ObjectName; 
  const char *Owner; 
  bool v6; 
  bdObjectStoreCacheAwareObjectID *v7; 
  char *m_cachedChecksum; 
  char *v9; 
  bool v10; 

  v6 = 0;
  if ( bdJSONSerializer::writeBeginObject(json) )
  {
    ObjectName = bdObjectStoreObjectID::getObjectName(&this->m_objectID);
    if ( bdJSONSerializer::writeString(json, (const char *)&stru_143C9A1A4, ObjectName) )
    {
      Owner = bdObjectStoreObjectID::getOwner(&this->m_objectID);
      if ( bdJSONSerializer::writeString(json, "owner", Owner) )
        v6 = 1;
    }
  }
  v7 = (bdObjectStoreCacheAwareObjectID *)memchr_0(this->m_cachedObjectVersion, 0, 0x21ui64);
  if ( !v7 || v7 != (bdObjectStoreCacheAwareObjectID *)this->m_cachedObjectVersion )
    v6 = v6 && bdJSONSerializer::writeString(json, "objectVersion", this->m_cachedObjectVersion);
  m_cachedChecksum = this->m_cachedChecksum;
  v9 = (char *)memchr_0(m_cachedChecksum, 0, 0x21ui64);
  if ( v9 && v9 == m_cachedChecksum )
  {
    v10 = !v6;
  }
  else
  {
    if ( !v6 )
      goto LABEL_20;
    v10 = !bdJSONSerializer::writeString(json, "checksum", m_cachedChecksum);
  }
  if ( !v10 && bdJSONSerializer::writeEndObject(json) )
    return 1;
LABEL_20:
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreCacheAwareObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorecacheawareobjectid.cpp", "bdObjectStoreCacheAwareObjectID::serializeToJSON", 0x77u, "Unable to generate JSON object from Object ID");
  return 0;
}

/*
==============
bdObjectStoreCacheAwareObjectID::setUserIDFromOwnerString
==============
*/
bool bdObjectStoreCacheAwareObjectID::setUserIDFromOwnerString(bdObjectStoreCacheAwareObjectID *this, const char *owner)
{
  return bdObjectStoreObjectID::setOwner(&this->m_objectID, owner, USER_OWNER_TYPE);
}

