/*
==============
bdObjectStoreObjectID::getObjectName
==============
*/

const char *__fastcall bdObjectStoreObjectID::getObjectName(bdObjectStoreObjectID *this)
{
  return ?getObjectName@bdObjectStoreObjectID@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreObjectID::getOwner
==============
*/

const char *__fastcall bdObjectStoreObjectID::getOwner(bdObjectStoreObjectID *this)
{
  return ?getOwner@bdObjectStoreObjectID@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreObjectID::validateOwnerString
==============
*/

bool __fastcall bdObjectStoreObjectID::validateOwnerString(bdObjectStoreObjectID *this, const char *owner)
{
  return ?validateOwnerString@bdObjectStoreObjectID@@IEAA_NPEBD@Z(this, owner);
}

/*
==============
bdObjectStoreObjectID::convertOwnerTypeString
==============
*/

bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType __fastcall bdObjectStoreObjectID::convertOwnerTypeString(const char *ownerTypeString)
{
  return ?convertOwnerTypeString@bdObjectStoreObjectID@@SA?AW4bdObjectStoreObjectIDOwnerType@1@PEBD@Z(ownerTypeString);
}

/*
==============
bdObjectStoreObjectID::setOwner
==============
*/

bool __fastcall bdObjectStoreObjectID::setOwner(bdObjectStoreObjectID *this, const char *owner, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  return ?setOwner@bdObjectStoreObjectID@@QEAA_NPEBDW4bdObjectStoreObjectIDOwnerType@1@@Z(this, owner, ownerType);
}

/*
==============
bdObjectStoreObjectID::deserializeFromMetadataJSON
==============
*/

bool __fastcall bdObjectStoreObjectID::deserializeFromMetadataJSON(bdObjectStoreObjectID *this, bdJSONDeserializer *json, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  return ?deserializeFromMetadataJSON@bdObjectStoreObjectID@@QEAA_NPEAVbdJSONDeserializer@@W4bdObjectStoreObjectIDOwnerType@1@@Z(this, json, ownerType);
}

/*
==============
bdObjectStoreObjectID::setOwnerStringForPublisher
==============
*/

bool __fastcall bdObjectStoreObjectID::setOwnerStringForPublisher(bdObjectStoreObjectID *this, const char *owner)
{
  return ?setOwnerStringForPublisher@bdObjectStoreObjectID@@IEAA_NPEBD@Z(this, owner);
}

/*
==============
bdObjectStoreObjectID::setOwnerStringFromUserString
==============
*/

bool __fastcall bdObjectStoreObjectID::setOwnerStringFromUserString(bdObjectStoreObjectID *this, const char *owner)
{
  return ?setOwnerStringFromUserString@bdObjectStoreObjectID@@IEAA_NPEBD@Z(this, owner);
}

/*
==============
bdObjectStoreObjectID::getOwnerType
==============
*/

bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType __fastcall bdObjectStoreObjectID::getOwnerType(bdObjectStoreObjectID *this)
{
  return ?getOwnerType@bdObjectStoreObjectID@@QEBA?AW4bdObjectStoreObjectIDOwnerType@1@XZ(this);
}

/*
==============
bdObjectStoreObjectID::getObjectName
==============
*/

char *__fastcall bdObjectStoreObjectID::getObjectName(bdObjectStoreObjectID *this)
{
  return ?getObjectName@bdObjectStoreObjectID@@QEAAPEADXZ(this);
}

/*
==============
bdObjectStoreObjectID::setOwnerStringForUserSummary
==============
*/

bool __fastcall bdObjectStoreObjectID::setOwnerStringForUserSummary(bdObjectStoreObjectID *this, const char *owner)
{
  return ?setOwnerStringForUserSummary@bdObjectStoreObjectID@@IEAA_NPEBD@Z(this, owner);
}

/*
==============
bdObjectStoreObjectID::getOwnerString
==============
*/

bool __fastcall bdObjectStoreObjectID::getOwnerString(bdObjectStoreObjectID *this, char *owner, unsigned int ownerSize)
{
  return ?getOwnerString@bdObjectStoreObjectID@@QEBA_NPEADI@Z(this, owner, ownerSize);
}

/*
==============
bdObjectStoreObjectID::getOwnerTypeString
==============
*/

bool __fastcall bdObjectStoreObjectID::getOwnerTypeString(bdObjectStoreObjectID *this, char *ownerType, unsigned int ownerTypeSize)
{
  return ?getOwnerTypeString@bdObjectStoreObjectID@@QEBA_NPEADI@Z(this, ownerType, ownerTypeSize);
}

/*
==============
bdObjectStoreObjectID::setOwnerStringFromUserAccountID
==============
*/

bool __fastcall bdObjectStoreObjectID::setOwnerStringFromUserAccountID(bdObjectStoreObjectID *this, const bdUserAccountID *owner)
{
  return ?setOwnerStringFromUserAccountID@bdObjectStoreObjectID@@IEAA_NAEBVbdUserAccountID@@@Z(this, owner);
}

/*
==============
bdObjectStoreObjectID::validateUserIDOwnerString
==============
*/

bool __fastcall bdObjectStoreObjectID::validateUserIDOwnerString(bdObjectStoreObjectID *this, const char *owner)
{
  return ?validateUserIDOwnerString@bdObjectStoreObjectID@@IEAA_NPEBD@Z(this, owner);
}

/*
==============
bdObjectStoreObjectID::setObjectName
==============
*/

bool __fastcall bdObjectStoreObjectID::setObjectName(bdObjectStoreObjectID *this, const char *const objectName)
{
  return ?setObjectName@bdObjectStoreObjectID@@QEAA_NQEBD@Z(this, objectName);
}

/*
==============
bdObjectStoreObjectID::bdObjectStoreObjectID
==============
*/

void __fastcall bdObjectStoreObjectID::bdObjectStoreObjectID(bdObjectStoreObjectID *this)
{
  ??0bdObjectStoreObjectID@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreObjectID::setOwnerType
==============
*/

bool __fastcall bdObjectStoreObjectID::setOwnerType(bdObjectStoreObjectID *this, const bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  return ?setOwnerType@bdObjectStoreObjectID@@IEAA_NW4bdObjectStoreObjectIDOwnerType@1@@Z(this, ownerType);
}

/*
==============
bdObjectStoreObjectID::hasAccountType
==============
*/

bool __fastcall bdObjectStoreObjectID::hasAccountType(bdObjectStoreObjectID *this, const bdUserAccountID *owner)
{
  return ?hasAccountType@bdObjectStoreObjectID@@IEAA_NAEBVbdUserAccountID@@@Z(this, owner);
}

/*
==============
bdObjectStoreObjectID::getID
==============
*/

unsigned __int64 __fastcall bdObjectStoreObjectID::getID(bdObjectStoreObjectID *this)
{
  return ?getID@bdObjectStoreObjectID@@QEBA_KXZ(this);
}

/*
==============
bdObjectStoreObjectID::bdObjectStoreObjectID
==============
*/

void __fastcall bdObjectStoreObjectID::bdObjectStoreObjectID(bdObjectStoreObjectID *this, const char *const owner, const char *const objectName, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  ??0bdObjectStoreObjectID@@QEAA@QEBD0W4bdObjectStoreObjectIDOwnerType@0@@Z(this, owner, objectName, ownerType);
}

/*
==============
bdObjectStoreObjectID::serializeToJSON
==============
*/

bool __fastcall bdObjectStoreObjectID::serializeToJSON(bdObjectStoreObjectID *this, bdJSONSerializer *json)
{
  return ?serializeToJSON@bdObjectStoreObjectID@@QEBA_NPEAVbdJSONSerializer@@@Z(this, json);
}

/*
==============
bdObjectStoreObjectID::reset
==============
*/

void __fastcall bdObjectStoreObjectID::reset(bdObjectStoreObjectID *this)
{
  ?reset@bdObjectStoreObjectID@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreObjectID::bdObjectStoreObjectID
==============
*/

void __fastcall bdObjectStoreObjectID::bdObjectStoreObjectID(bdObjectStoreObjectID *this, const bdUserAccountID *owner, const char *const objectName, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  ??0bdObjectStoreObjectID@@QEAA@AEBVbdUserAccountID@@QEBDW4bdObjectStoreObjectIDOwnerType@0@@Z(this, owner, objectName, ownerType);
}

/*
==============
bdObjectStoreObjectID::bdObjectStoreObjectID
==============
*/
void bdObjectStoreObjectID::bdObjectStoreObjectID(bdObjectStoreObjectID *this, const bdUserAccountID *owner, const char *const objectName, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  const bdUserAccountID *v8; 
  bool v9; 
  int v10; 
  bool v11; 
  const bdUserAccountID *v12; 
  bool v13; 
  char *m_owner; 
  const bdUserAccountID *v15; 
  bool v16; 
  _BYTE *v17; 
  unsigned __int64 v18; 
  bool v19; 
  bool v20; 
  bdUserAccountID v21; 

  bdUserAccountID::bdUserAccountID(&v21);
  v9 = bdUserAccountID::operator!=((bdUserAccountID *)owner, v8);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v21.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v21.gap38);
  if ( v9 )
  {
    v10 = strncmp(owner->_bytes_20, (const char *)&queryFormat.fmt + 3, 0xAui64);
    bdHandleAssert(v10 != 0, "hasAccountType(owner)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::bdObjectStoreObjectID", 0x27u, "User ID has no account type, can't create Object ID");
  }
  v11 = 1;
  bdUserAccountID::bdUserAccountID(&v21);
  v13 = bdUserAccountID::operator==((bdUserAccountID *)owner, v12);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v21.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v21.gap38);
  if ( !v13 )
  {
    v15 = (const bdUserAccountID *)memchr_0(owner->_bytes_20, 0, 0xAui64);
    if ( v15 && v15 == (const bdUserAccountID *)owner->_bytes_20 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::setOwnerStringFromUserAccountID", 0x15Du, "Instance has not got an account type set");
      m_owner = this->m_owner;
    }
    else
    {
      m_owner = this->m_owner;
      if ( (unsigned int)bdSnprintf(this->m_owner, 0x1Eui64, "%s-%llu", owner->_bytes_20, owner->m_userID) < 0x1E )
        goto LABEL_11;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::setOwnerStringFromUserAccountID", 0x166u, "Getting Owner String failed.");
    }
    v11 = 0;
    goto LABEL_11;
  }
  m_owner = this->m_owner;
  bdStrlcpy(this->m_owner, BD_OBJECTSTORE_ME_OWNER_STRING, 0x1Eui64);
LABEL_11:
  bdHandleAssert(v11, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::bdObjectStoreObjectID", 0x2Au, "Invalid user accountID provided, failed to convert to string");
  v16 = v11 && bdObjectStoreObjectID::validateUserIDOwnerString(this, m_owner);
  bdHandleAssert(v16, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::bdObjectStoreObjectID", 0x2Cu, "Invalid user ID, can't create Object ID");
  if ( !v16 )
    goto LABEL_23;
  v17 = memchr_0(objectName, 0, 0x41ui64);
  if ( v17 )
  {
    v18 = v17 - objectName;
    if ( (unsigned __int64)(v17 - objectName) < 0x41 )
    {
      bdStrlcpy(this->m_objectName, objectName, 0x41ui64);
      goto LABEL_21;
    }
  }
  else
  {
    v18 = 65i64;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::setObjectName", 0x61u, "Object Name is too long. Max length is %d", 64);
  *(_QWORD *)this->m_objectName = 0i64;
  *(_QWORD *)&this->m_objectName[8] = 0i64;
  *(_QWORD *)&this->m_objectName[16] = 0i64;
  *(_QWORD *)&this->m_objectName[24] = 0i64;
  *(_QWORD *)&this->m_objectName[32] = 0i64;
  *(_QWORD *)&this->m_objectName[40] = 0i64;
  *(_QWORD *)&this->m_objectName[48] = 0i64;
  *(_QWORD *)&this->m_objectName[56] = 0i64;
  this->m_objectName[64] = 0;
LABEL_21:
  if ( v18 < 0x41 )
  {
    v19 = 1;
    goto LABEL_24;
  }
LABEL_23:
  v19 = 0;
LABEL_24:
  bdHandleAssert(v19, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::bdObjectStoreObjectID", 0x2Fu, "Invalid ObjectName.");
  if ( v19 )
  {
    if ( (ownerType & 0xFFFFFFFD) == 0 )
    {
      this->m_ownerType = ownerType;
      v20 = 1;
      goto LABEL_28;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::setOwnerType", 0x50u, "Owner Type is the wrong type. Must be user or user summary type.");
    this->m_ownerType = USER_OWNER_TYPE;
  }
  v20 = 0;
LABEL_28:
  bdHandleAssert(v20, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::bdObjectStoreObjectID", 0x32u, "Invalid Owner Type.");
  this->m_ownerType = USER_OWNER_TYPE;
  this->m_ID = 0i64;
}

/*
==============
bdObjectStoreObjectID::bdObjectStoreObjectID
==============
*/
void bdObjectStoreObjectID::bdObjectStoreObjectID(bdObjectStoreObjectID *this, const char *const owner, const char *const objectName, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  bool v6; 
  _BYTE *v7; 
  unsigned __int64 v8; 
  int v9; 

  v6 = bdObjectStoreObjectID::setOwner(this, owner, ownerType);
  bdHandleAssert(v6, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::bdObjectStoreObjectID", 0x17u, "Invalid owner string.");
  v7 = memchr_0(objectName, 0, 0x41ui64);
  v9 = 64;
  v8 = 65i64;
  if ( v7 )
    v8 = v7 - objectName;
  bdHandleAssert(v8 < 0x41, "(bdStrnlen(objectName, BD_OBJECTSTORE_MAX_OBJECT_NAME_LENGTH) < BD_OBJECTSTORE_MAX_OBJECT_NAME_LENGTH)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::bdObjectStoreObjectID", 0x19u, "Object Name is too long. Max length is %d", v9);
  if ( v6 )
    bdStrlcpy(this->m_objectName, objectName, 0x41ui64);
  this->m_ID = 0i64;
}

/*
==============
bdObjectStoreObjectID::bdObjectStoreObjectID
==============
*/
void bdObjectStoreObjectID::bdObjectStoreObjectID(bdObjectStoreObjectID *this)
{
  *(_QWORD *)this->m_objectName = 0i64;
  *(_QWORD *)&this->m_objectName[8] = 0i64;
  *(_QWORD *)&this->m_objectName[16] = 0i64;
  *(_QWORD *)&this->m_objectName[24] = 0i64;
  *(_QWORD *)&this->m_objectName[32] = 0i64;
  *(_QWORD *)&this->m_objectName[40] = 0i64;
  *(_QWORD *)&this->m_objectName[48] = 0i64;
  *(_QWORD *)&this->m_objectName[56] = 0i64;
  this->m_objectName[64] = 0;
  this->m_ID = 0i64;
  *(_QWORD *)this->m_owner = 0i64;
  *(_QWORD *)&this->m_owner[8] = 0i64;
  *(_QWORD *)&this->m_owner[16] = 0i64;
  *(_DWORD *)&this->m_owner[24] = 0;
  *(_WORD *)&this->m_owner[28] = 0;
  this->m_ownerType = USER_OWNER_TYPE;
}

/*
==============
bdObjectStoreObjectID::convertOwnerTypeString
==============
*/
__int64 bdObjectStoreObjectID::convertOwnerTypeString(const char *ownerTypeString)
{
  if ( strncmp(BD_OBJECTSTORE_USERS_OWNER_TYPE_STRING, ownerTypeString, 0x18ui64) )
  {
    if ( !strncmp(BD_OBJECTSTORE_PUBLISHERS_OWNER_TYPE_STRING, ownerTypeString, 0x18ui64) )
      return 1i64;
    if ( !strncmp(BD_OBJECTSTORE_USERS_SUMMARY_OWNER_TYPE_STRING, ownerTypeString, 0x18ui64) )
      return 2i64;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::convertOwnerTypeString", 0x125u, "Invalid Owner Type String.");
  }
  return 0i64;
}

/*
==============
bdObjectStoreObjectID::deserializeFromMetadataJSON
==============
*/
char bdObjectStoreObjectID::deserializeFromMetadataJSON(bdObjectStoreObjectID *this, bdJSONDeserializer *json, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  bool v6; 
  char value[32]; 

  bdHandleAssert(json != NULL, "json != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::deserializeFromMetadataJSON", 0x187u, "bdJSONDeserializer is NULL.");
  v6 = json->m_type == BD_JSON_OBJECT && bdJSONDeserializer::getString(json, (const char *const)&stru_143C9A1A4, this->m_objectName, 0x41u) && bdJSONDeserializer::getString(json, "owner", value, 0x1Eu) && bdObjectStoreObjectID::setOwner(this, value, ownerType);
  if ( bdJSONDeserializer::hasKey(json, "objectID") )
  {
    if ( v6 && bdJSONDeserializer::getUInt64(json, "objectID", &this->m_ID) )
      return 1;
    v6 = 0;
    goto LABEL_13;
  }
  if ( !v6 )
LABEL_13:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::deserializeFromMetadataJSON", 0x197u, "Unable to parse JSON response for bdObjectStoreObjectID");
  return v6;
}

/*
==============
bdObjectStoreObjectID::getID
==============
*/
unsigned __int64 bdObjectStoreObjectID::getID(bdObjectStoreObjectID *this)
{
  return this->m_ID;
}

/*
==============
bdObjectStoreObjectID::getObjectName
==============
*/
char *bdObjectStoreObjectID::getObjectName(bdObjectStoreObjectID *this)
{
  return this->m_objectName;
}

/*
==============
bdObjectStoreObjectID::getObjectName
==============
*/
char *bdObjectStoreObjectID::getObjectName(bdObjectStoreObjectID *this)
{
  return this->m_objectName;
}

/*
==============
bdObjectStoreObjectID::getOwner
==============
*/
char *bdObjectStoreObjectID::getOwner(bdObjectStoreObjectID *this)
{
  return this->m_owner;
}

/*
==============
bdObjectStoreObjectID::getOwnerString
==============
*/
char bdObjectStoreObjectID::getOwnerString(bdObjectStoreObjectID *this, char *owner, unsigned int ownerSize)
{
  unsigned __int64 v3; 
  unsigned __int64 v4; 

  v3 = ownerSize;
  v4 = bdStrlcpy(owner, this->m_owner, ownerSize);
  if ( v4 <= v3 )
    return 1;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::getOwnerString", 0x14Du, "Buffer provided too small: Required length [%d]", v4);
  return 0;
}

/*
==============
bdObjectStoreObjectID::getOwnerType
==============
*/
__int64 bdObjectStoreObjectID::getOwnerType(bdObjectStoreObjectID *this)
{
  return (unsigned int)this->m_ownerType;
}

/*
==============
bdObjectStoreObjectID::getOwnerTypeString
==============
*/
char bdObjectStoreObjectID::getOwnerTypeString(bdObjectStoreObjectID *this, char *ownerType, unsigned int ownerTypeSize)
{
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  const char *v6; 

  v3 = 0i64;
  v4 = ownerTypeSize;
  if ( this->m_ownerType )
  {
    if ( this->m_ownerType == PUBLISHER_OWNER_TYPE )
    {
      v6 = BD_OBJECTSTORE_PUBLISHERS_OWNER_TYPE_STRING;
    }
    else
    {
      if ( this->m_ownerType != USER_SUMMARY_OWNER_TYPE )
        goto LABEL_8;
      v6 = BD_OBJECTSTORE_USERS_SUMMARY_OWNER_TYPE_STRING;
    }
  }
  else
  {
    v6 = BD_OBJECTSTORE_USERS_OWNER_TYPE_STRING;
  }
  v3 = bdStrlcpy(ownerType, v6, ownerTypeSize);
LABEL_8:
  if ( v3 <= v4 )
    return 1;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::getOwnerTypeString", 0x142u, "Buffer provided too small: Required length [%d]", v3);
  return 0;
}

/*
==============
bdObjectStoreObjectID::hasAccountType
==============
*/
bool bdObjectStoreObjectID::hasAccountType(bdObjectStoreObjectID *this, const bdUserAccountID *owner)
{
  return strncmp(owner->_bytes_20, (const char *)&queryFormat.fmt + 3, 0xAui64) != 0;
}

/*
==============
bdObjectStoreObjectID::reset
==============
*/
void bdObjectStoreObjectID::reset(bdObjectStoreObjectID *this)
{
  *(_QWORD *)this->m_objectName = 0i64;
  *(_QWORD *)&this->m_objectName[8] = 0i64;
  *(_QWORD *)&this->m_objectName[16] = 0i64;
  *(_QWORD *)&this->m_objectName[24] = 0i64;
  *(_QWORD *)&this->m_objectName[32] = 0i64;
  *(_QWORD *)&this->m_objectName[40] = 0i64;
  *(_QWORD *)&this->m_objectName[48] = 0i64;
  *(_QWORD *)&this->m_objectName[56] = 0i64;
  this->m_objectName[64] = 0;
  this->m_ID = 0i64;
  *(_QWORD *)this->m_owner = 0i64;
  *(_QWORD *)&this->m_owner[8] = 0i64;
  *(_QWORD *)&this->m_owner[16] = 0i64;
  *(_DWORD *)&this->m_owner[24] = 0;
  *(_WORD *)&this->m_owner[28] = 0;
  this->m_ownerType = USER_OWNER_TYPE;
}

/*
==============
bdObjectStoreObjectID::serializeToJSON
==============
*/
char bdObjectStoreObjectID::serializeToJSON(bdObjectStoreObjectID *this, bdJSONSerializer *json)
{
  bool v4; 
  char *m_owner; 
  unsigned __int64 v6; 
  size_t v7; 
  char value[32]; 

  if ( !bdJSONSerializer::writeBeginObject(json) || !bdJSONSerializer::writeString(json, (const char *)&stru_143C9A1A4, this->m_objectName) )
    goto LABEL_9;
  v4 = this->m_owner == NULL;
  m_owner = this->m_owner;
  bdHandleAssert(!v4, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v6 = -1i64;
  do
    ++v6;
  while ( m_owner[v6] );
  v7 = 29i64;
  if ( v6 < 0x1D )
    v7 = v6;
  memcpy_0(value, m_owner, v7);
  value[v7] = 0;
  if ( v6 > 0x1E )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::getOwnerString", 0x14Du, "Buffer provided too small: Required length [%d]", v6);
LABEL_9:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::serializeToJSON", 0x17Du, "Unable to generate JSON object from Object ID");
    return 0;
  }
  if ( !bdJSONSerializer::writeString(json, "owner", value) || !bdJSONSerializer::writeEndObject(json) )
    goto LABEL_9;
  return 1;
}

/*
==============
bdObjectStoreObjectID::setObjectName
==============
*/
_BOOL8 bdObjectStoreObjectID::setObjectName(bdObjectStoreObjectID *this, const char *const objectName)
{
  _BYTE *v4; 
  unsigned __int64 v5; 
  bool v6; 
  int v8; 

  v4 = memchr_0(objectName, 0, 0x41ui64);
  v5 = 65i64;
  if ( v4 )
    v5 = v4 - objectName;
  v6 = v5 < 0x41;
  if ( v5 < 0x41 )
  {
    bdStrlcpy(this->m_objectName, objectName, 0x41ui64);
  }
  else
  {
    v8 = 64;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::setObjectName", 0x61u, "Object Name is too long. Max length is %d", v8);
    *(_QWORD *)this->m_objectName = 0i64;
    *(_QWORD *)&this->m_objectName[8] = 0i64;
    *(_QWORD *)&this->m_objectName[16] = 0i64;
    *(_QWORD *)&this->m_objectName[24] = 0i64;
    *(_QWORD *)&this->m_objectName[32] = 0i64;
    *(_QWORD *)&this->m_objectName[40] = 0i64;
    *(_QWORD *)&this->m_objectName[48] = 0i64;
    *(_QWORD *)&this->m_objectName[56] = 0i64;
    this->m_objectName[64] = 0;
  }
  return v6;
}

/*
==============
bdObjectStoreObjectID::setOwner
==============
*/
bool bdObjectStoreObjectID::setOwner(bdObjectStoreObjectID *this, const char *owner, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  __int32 v5; 
  bool v6; 
  bool result; 

  this->m_ownerType = ownerType;
  if ( ownerType )
  {
    v5 = ownerType - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return 0;
      this->m_ownerType = USER_SUMMARY_OWNER_TYPE;
      v6 = bdObjectStoreObjectID::validateUserIDOwnerString(this, owner);
      if ( !v6 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::setOwnerStringForUserSummary", 0x9Cu, "owner string is invalid for summary owner type.");
        return 0;
      }
    }
    else
    {
      this->m_ownerType = PUBLISHER_OWNER_TYPE;
      v6 = bdObjectStoreObjectID::validateOwnerString(this, owner);
      if ( !v6 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::setOwnerStringForPublisher", 0x8Cu, "owner string is too long for publisher owner_type. Max length is %d", 20);
        return 0;
      }
    }
    goto LABEL_12;
  }
  if ( bdObjectStoreObjectID::validateOwnerString(this, owner) && bdObjectStoreObjectID::validateUserIDOwnerString(this, owner) )
  {
    v6 = 1;
LABEL_12:
    bdStrlcpy(this->m_owner, owner, 0x1Eui64);
    return v6;
  }
  *(_QWORD *)this->m_objectName = 0i64;
  *(_QWORD *)&this->m_objectName[8] = 0i64;
  *(_QWORD *)&this->m_objectName[16] = 0i64;
  *(_QWORD *)&this->m_objectName[24] = 0i64;
  *(_QWORD *)&this->m_objectName[32] = 0i64;
  *(_QWORD *)&this->m_objectName[40] = 0i64;
  *(_QWORD *)&this->m_objectName[48] = 0i64;
  *(_QWORD *)&this->m_objectName[56] = 0i64;
  this->m_objectName[64] = 0;
  this->m_ID = 0i64;
  *(_QWORD *)this->m_owner = 0i64;
  *(_QWORD *)&this->m_owner[8] = 0i64;
  *(_QWORD *)&this->m_owner[16] = 0i64;
  *(_DWORD *)&this->m_owner[24] = 0;
  *(_WORD *)&this->m_owner[28] = 0;
  result = 0;
  this->m_ownerType = USER_OWNER_TYPE;
  return result;
}

/*
==============
bdObjectStoreObjectID::setOwnerStringForPublisher
==============
*/
_BOOL8 bdObjectStoreObjectID::setOwnerStringForPublisher(bdObjectStoreObjectID *this, const char *owner)
{
  bool v4; 

  this->m_ownerType = PUBLISHER_OWNER_TYPE;
  v4 = bdObjectStoreObjectID::validateOwnerString(this, owner);
  if ( v4 )
    bdStrlcpy(this->m_owner, owner, 0x1Eui64);
  else
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::setOwnerStringForPublisher", 0x8Cu, "owner string is too long for publisher owner_type. Max length is %d", 20);
  return v4;
}

/*
==============
bdObjectStoreObjectID::setOwnerStringForUserSummary
==============
*/
_BOOL8 bdObjectStoreObjectID::setOwnerStringForUserSummary(bdObjectStoreObjectID *this, const char *owner)
{
  bool v4; 

  this->m_ownerType = USER_SUMMARY_OWNER_TYPE;
  v4 = bdObjectStoreObjectID::validateUserIDOwnerString(this, owner);
  if ( v4 )
    bdStrlcpy(this->m_owner, owner, 0x1Eui64);
  else
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::setOwnerStringForUserSummary", 0x9Cu, "owner string is invalid for summary owner type.");
  return v4;
}

/*
==============
bdObjectStoreObjectID::setOwnerStringFromUserAccountID
==============
*/
char bdObjectStoreObjectID::setOwnerStringFromUserAccountID(bdObjectStoreObjectID *this, const bdUserAccountID *owner)
{
  const bdUserAccountID *v4; 
  bool v5; 
  const bdUserAccountID *v7; 
  bdUserAccountID v8; 

  bdUserAccountID::bdUserAccountID(&v8);
  v5 = bdUserAccountID::operator==((bdUserAccountID *)owner, v4);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v8.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v8.gap38);
  if ( v5 )
  {
    bdStrlcpy(this->m_owner, BD_OBJECTSTORE_ME_OWNER_STRING, 0x1Eui64);
    return 1;
  }
  v7 = (const bdUserAccountID *)memchr_0(owner->_bytes_20, 0, 0xAui64);
  if ( v7 && v7 == (const bdUserAccountID *)owner->_bytes_20 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::setOwnerStringFromUserAccountID", 0x15Du, "Instance has not got an account type set");
  }
  else
  {
    if ( (unsigned int)bdSnprintf(this->m_owner, 0x1Eui64, "%s-%llu", owner->_bytes_20, owner->m_userID) < 0x1E )
      return 1;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::setOwnerStringFromUserAccountID", 0x166u, "Getting Owner String failed.");
  }
  return 0;
}

/*
==============
bdObjectStoreObjectID::setOwnerStringFromUserString
==============
*/
char bdObjectStoreObjectID::setOwnerStringFromUserString(bdObjectStoreObjectID *this, const char *owner)
{
  char result; 

  if ( this->m_ownerType == PUBLISHER_OWNER_TYPE )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::setOwnerStringFromUserString", 0xEEu, "Cannot call setOwnerStringFromUserString on a publisher owner type.");
LABEL_3:
    *(_QWORD *)this->m_objectName = 0i64;
    result = 0;
    *(_QWORD *)&this->m_objectName[8] = 0i64;
    *(_QWORD *)&this->m_objectName[16] = 0i64;
    *(_QWORD *)&this->m_objectName[24] = 0i64;
    *(_QWORD *)&this->m_objectName[32] = 0i64;
    *(_QWORD *)&this->m_objectName[40] = 0i64;
    *(_QWORD *)&this->m_objectName[48] = 0i64;
    *(_QWORD *)&this->m_objectName[56] = 0i64;
    this->m_objectName[64] = 0;
    this->m_ID = 0i64;
    *(_QWORD *)this->m_owner = 0i64;
    *(_QWORD *)&this->m_owner[8] = 0i64;
    *(_QWORD *)&this->m_owner[16] = 0i64;
    *(_DWORD *)&this->m_owner[24] = 0;
    *(_WORD *)&this->m_owner[28] = 0;
    this->m_ownerType = USER_OWNER_TYPE;
    return result;
  }
  if ( !bdObjectStoreObjectID::validateOwnerString(this, owner) || !bdObjectStoreObjectID::validateUserIDOwnerString(this, owner) )
    goto LABEL_3;
  bdStrlcpy(this->m_owner, owner, 0x1Eui64);
  return 1;
}

/*
==============
bdObjectStoreObjectID::setOwnerType
==============
*/
char bdObjectStoreObjectID::setOwnerType(bdObjectStoreObjectID *this, const bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  char result; 

  if ( (ownerType & 0xFFFFFFFD) != 0 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::setOwnerType", 0x50u, "Owner Type is the wrong type. Must be user or user summary type.");
    result = 0;
    this->m_ownerType = USER_OWNER_TYPE;
  }
  else
  {
    this->m_ownerType = ownerType;
    return 1;
  }
  return result;
}

/*
==============
bdObjectStoreObjectID::validateOwnerString
==============
*/
bool bdObjectStoreObjectID::validateOwnerString(bdObjectStoreObjectID *this, const char *owner)
{
  bool v3; 
  _BYTE *v4; 

  v3 = owner != NULL;
  if ( !owner )
    return v3;
  v4 = memchr_0(owner, 0, 0x1Eui64);
  if ( v4 )
  {
    if ( (unsigned __int64)(v4 - owner) < 0x1E )
      return v3;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::validateOwnerString", 0xADu, "Owner string is too long.");
  return 0;
}

/*
==============
bdObjectStoreObjectID::validateUserIDOwnerString
==============
*/
__int64 bdObjectStoreObjectID::validateUserIDOwnerString(bdObjectStoreObjectID *this, const char *owner)
{
  unsigned __int8 v3; 
  char *v5; 
  char *v6; 
  int v7; 
  const char *v8; 
  int v9; 
  char *EndPtr; 

  v3 = 1;
  if ( !strncmp(owner, BD_OBJECTSTORE_ME_OWNER_STRING, 0x1Eui64) )
    return 1i64;
  v5 = strchr_0(owner, 45);
  v6 = v5;
  if ( !v5 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::validateUserIDOwnerString", 0xC1u, "Couldn't find a '-' character. Owner unparseable.");
    return 0;
  }
  v7 = (_DWORD)v5 - (_DWORD)owner;
  if ( v7 >= 10 )
  {
    v9 = v7;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::validateUserIDOwnerString", 0xC9u, "Account Type Size [%d] Invalid. Owner unparseable.", v9);
    return 0i64;
  }
  v8 = v6 + 1;
  if ( *v8 == 45 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::validateUserIDOwnerString", 0xD3u, "Negative Number is not allowed. Owner unparseable.");
    return 0;
  }
  EndPtr = NULL;
  if ( !_strtoui64(v8, &EndPtr, 10) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreObjectID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreobjectid.cpp", "bdObjectStoreObjectID::validateUserIDOwnerString", 0xDDu, "Owner does not have valid userID.");
    return 0;
  }
  return v3;
}

