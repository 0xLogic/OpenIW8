/*
==============
bdObjectStoreCompleteUploadSessionsRequest::deserializeFromJSON
==============
*/

bool __fastcall bdObjectStoreCompleteUploadSessionsRequest::deserializeFromJSON(bdObjectStoreCompleteUploadSessionsRequest *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdObjectStoreCompleteUploadSessionsRequest@@QEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::getAuthorizationHeaderValue
==============
*/

char *__fastcall bdObjectStoreCompleteUploadSessionsRequest::getAuthorizationHeaderValue(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  return ?getAuthorizationHeaderValue@bdObjectStoreCompleteUploadSessionsRequest@@QEAAPEADXZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::reset
==============
*/

void __fastcall bdObjectStoreCompleteUploadSessionsRequest::reset(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  ?reset@bdObjectStoreCompleteUploadSessionsRequest@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::incrementIndex
==============
*/

void __fastcall bdObjectStoreCompleteUploadSessionsRequest::incrementIndex(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  ?incrementIndex@bdObjectStoreCompleteUploadSessionsRequest@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::getAuthorizationHeaderValue
==============
*/

const char *__fastcall bdObjectStoreCompleteUploadSessionsRequest::getAuthorizationHeaderValue(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  return ?getAuthorizationHeaderValue@bdObjectStoreCompleteUploadSessionsRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::deserialize
==============
*/

bool __fastcall bdObjectStoreCompleteUploadSessionsRequest::deserialize(bdObjectStoreCompleteUploadSessionsRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreCompleteUploadSessionsRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::init
==============
*/

void __fastcall bdObjectStoreCompleteUploadSessionsRequest::init(bdObjectStoreCompleteUploadSessionsRequest *this, const char *const context, const bdObjectStoreObject *objects, unsigned int objectsSize)
{
  ?init@bdObjectStoreCompleteUploadSessionsRequest@@QEAAXQEBDPEBVbdObjectStoreObject@@I@Z(this, context, objects, objectsSize);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::getNextObject
==============
*/

const bdObjectStoreObject *__fastcall bdObjectStoreCompleteUploadSessionsRequest::getNextObject(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  return ?getNextObject@bdObjectStoreCompleteUploadSessionsRequest@@QEBAPEBVbdObjectStoreObject@@XZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::hasMoreObjectsToUpload
==============
*/

bool __fastcall bdObjectStoreCompleteUploadSessionsRequest::hasMoreObjectsToUpload(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  return ?hasMoreObjectsToUpload@bdObjectStoreCompleteUploadSessionsRequest@@QEBA_NXZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::bdObjectStoreCompleteUploadSessionsRequest
==============
*/

void __fastcall bdObjectStoreCompleteUploadSessionsRequest::bdObjectStoreCompleteUploadSessionsRequest(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  ??0bdObjectStoreCompleteUploadSessionsRequest@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::serializeRequestBody
==============
*/

bool __fastcall bdObjectStoreCompleteUploadSessionsRequest::serializeRequestBody(bdObjectStoreCompleteUploadSessionsRequest *this, bdJSONSerializer *json)
{
  return ?serializeRequestBody@bdObjectStoreCompleteUploadSessionsRequest@@IEBA_NPEAVbdJSONSerializer@@@Z(this, json);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::getObjectIndex
==============
*/

unsigned int __fastcall bdObjectStoreCompleteUploadSessionsRequest::getObjectIndex(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  return ?getObjectIndex@bdObjectStoreCompleteUploadSessionsRequest@@QEBAIXZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::setAuthorizationHeaderValue
==============
*/

void __fastcall bdObjectStoreCompleteUploadSessionsRequest::setAuthorizationHeaderValue(bdObjectStoreCompleteUploadSessionsRequest *this, const char *authorizationHeaderValue)
{
  ?setAuthorizationHeaderValue@bdObjectStoreCompleteUploadSessionsRequest@@QEAAXPEBD@Z(this, authorizationHeaderValue);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::serializeWithLobbyService
==============
*/

bool __fastcall bdObjectStoreCompleteUploadSessionsRequest::serializeWithLobbyService(bdObjectStoreCompleteUploadSessionsRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdObjectStoreCompleteUploadSessionsRequest@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::getNextUploadSession
==============
*/

bdObjectStoreUploadSession *__fastcall bdObjectStoreCompleteUploadSessionsRequest::getNextUploadSession(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  return ?getNextUploadSession@bdObjectStoreCompleteUploadSessionsRequest@@QEAAAEAVbdObjectStoreUploadSession@@XZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::needsOrchestration
==============
*/

bool __fastcall bdObjectStoreCompleteUploadSessionsRequest::needsOrchestration(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  return ?needsOrchestration@bdObjectStoreCompleteUploadSessionsRequest@@IEAA_NXZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::bdObjectStoreCompleteUploadSessionsRequest
==============
*/
void bdObjectStoreCompleteUploadSessionsRequest::bdObjectStoreCompleteUploadSessionsRequest(bdObjectStoreCompleteUploadSessionsRequest *this, int a2)
{
  bdObjectStoreUploadSession *v3; 
  bdObjectStoreUploadSession *v4; 
  __int64 v5; 
  __int64 v6; 

  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreCompleteUploadSessionsRequest::`vbtable';
    *(_QWORD *)this->gap39B8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap39B8[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreCompleteUploadSessionsRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreCompleteUploadSessionsRequest_vtbl *)&bdObjectStoreCompleteUploadSessionsRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreCompleteUploadSessionsRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreCompleteUploadSessionsRequest::`vftable'{for `bdReferencable'};
  v3 = (bdObjectStoreUploadSession *)(&this->bdStructBufferSerializable::__vftable + 2);
  v4 = (bdObjectStoreUploadSession *)(&this->bdStructBufferSerializable::__vftable + 2);
  v5 = 10i64;
  v6 = 10i64;
  do
  {
    bdObjectStoreUploadSession::bdObjectStoreUploadSession(v4++);
    --v6;
  }
  while ( v6 );
  do
  {
    bdObjectStoreUploadSession::reset(v3++);
    --v5;
  }
  while ( v5 );
  memset_0(this->m_authorizationHeaderValue, 0, sizeof(this->m_authorizationHeaderValue));
  this->m_needsOrchestration = 0;
  this->m_objects = NULL;
  *(_QWORD *)&this->m_objectsSize = 0i64;
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::deserialize
==============
*/
bool bdObjectStoreCompleteUploadSessionsRequest::deserialize(bdObjectStoreCompleteUploadSessionsRequest *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorecompleteuploadsessionsrequest.cpp", "bdObjectStoreCompleteUploadSessionsRequest::deserialize", 0x9Du, "Cannot call deserialize on bdObjectStoreCompleteUploadSessionsRequest");
  return 0;
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::deserializeFromJSON
==============
*/
_BOOL8 bdObjectStoreCompleteUploadSessionsRequest::deserializeFromJSON(bdObjectStoreCompleteUploadSessionsRequest *this, bdJSONDeserializer *json)
{
  bool Array; 
  unsigned int m_count; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int m_objectsSize; 
  bdJSONDeserializer value; 
  bdJSONDeserializer jsona; 
  unsigned int v12; 

  bdJSONDeserializer::bdJSONDeserializer(&value);
  Array = bdJSONDeserializer::getArray(json, "uploadSessions", &value);
  m_count = value.m_count;
  if ( value.m_count == this->m_objectsSize )
  {
    v7 = 0;
    if ( !Array )
      goto LABEL_3;
    while ( 1 )
    {
      if ( v7 >= m_count )
        goto LABEL_3;
      bdJSONDeserializer::bdJSONDeserializer(&jsona);
      if ( bdJSONDeserializer::getObject(&value, v7, &jsona) )
      {
        v12 = 0;
        if ( bdJSONDeserializer::getUInt32(&jsona, "requestIndex", &v12) && v12 < this->m_objectsSize && bdObjectStoreUploadSession::deserializeFromJSON((bdObjectStoreUploadSession *)((char *)&this->bdStructBufferSerializable::__vftable + 1061 * v12 + 16), &jsona) )
        {
          Array = 1;
          goto LABEL_14;
        }
      }
      else
      {
        v12 = 0;
      }
      Array = 0;
LABEL_14:
      bdJSONDeserializer::~bdJSONDeserializer(&jsona);
      ++v7;
      if ( !Array )
        goto LABEL_3;
      m_count = value.m_count;
    }
  }
  m_objectsSize = this->m_objectsSize;
  v8 = value.m_count;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreCompleteUploadSessionsRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorecompleteuploadsessionsrequest.cpp", "bdObjectStoreCompleteUploadSessionsRequest::deserializeFromJSON", 0xACu, "Upload Sessions count [%d] does not match expected number of objects [%d]", v8, m_objectsSize);
  Array = 0;
LABEL_3:
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return Array;
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::getAuthorizationHeaderValue
==============
*/
char *bdObjectStoreCompleteUploadSessionsRequest::getAuthorizationHeaderValue(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  return this->m_authorizationHeaderValue;
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::getAuthorizationHeaderValue
==============
*/
char *bdObjectStoreCompleteUploadSessionsRequest::getAuthorizationHeaderValue(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  return this->m_authorizationHeaderValue;
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::getNextObject
==============
*/
const bdObjectStoreObject *bdObjectStoreCompleteUploadSessionsRequest::getNextObject(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  __int64 m_objectIndex; 
  const bdObjectStoreObject *m_objects; 

  m_objectIndex = this->m_objectIndex;
  if ( this->m_objectsSize > (unsigned int)m_objectIndex )
  {
    m_objects = this->m_objects;
    if ( m_objects )
      return &m_objects[m_objectIndex];
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreCompleteUploadSessionsRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorecompleteuploadsessionsrequest.cpp", "bdObjectStoreCompleteUploadSessionsRequest::getNextObject", 0xE8u, "Index [%d] out of bounds for objects array", this->m_objectIndex);
  return 0i64;
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::getNextUploadSession
==============
*/
bdStructBufferSerializable_vtbl **bdObjectStoreCompleteUploadSessionsRequest::getNextUploadSession(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  __int64 m_objectIndex; 

  m_objectIndex = this->m_objectIndex;
  if ( this->m_objectsSize > (unsigned int)m_objectIndex )
    return (bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + 1061 * m_objectIndex + 16);
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreCompleteUploadSessionsRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorecompleteuploadsessionsrequest.cpp", "bdObjectStoreCompleteUploadSessionsRequest::getNextUploadSession", 0xDBu, "Index [%d] out of bounds for upload session array", this->m_objectIndex);
  return &this->bdStructBufferSerializable::__vftable + 2;
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::getObjectIndex
==============
*/
__int64 bdObjectStoreCompleteUploadSessionsRequest::getObjectIndex(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  return this->m_objectIndex;
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::hasMoreObjectsToUpload
==============
*/
bool bdObjectStoreCompleteUploadSessionsRequest::hasMoreObjectsToUpload(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  return this->m_objectIndex + 1 < this->m_objectsSize;
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::incrementIndex
==============
*/
void bdObjectStoreCompleteUploadSessionsRequest::incrementIndex(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  ++this->m_objectIndex;
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::init
==============
*/
void bdObjectStoreCompleteUploadSessionsRequest::init(bdObjectStoreCompleteUploadSessionsRequest *this, const char *const context, const bdObjectStoreObject *objects, unsigned int objectsSize)
{
  int v7; 
  bdObjectStoreMetadata *Metadata; 

  bdObjectStoreRequestBase::setContext(this, context);
  this->m_objects = objects;
  this->m_objectsSize = objectsSize;
  if ( objectsSize && objects )
  {
    v7 = 0;
    while ( 1 )
    {
      Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)&this->m_objects[v7]);
      if ( bdObjectStoreMetadata::hasTags(Metadata) )
        break;
      if ( ++v7 >= this->m_objectsSize )
        goto LABEL_9;
    }
    this->m_needsOrchestration = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreCompleteUploadSessionsRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorecompleteuploadsessionsrequest.cpp", "bdObjectStoreCompleteUploadSessionsRequest::needsOrchestration", 0x2Du, "Objects are not initialized correctly.");
LABEL_9:
    this->m_needsOrchestration = 0;
  }
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::needsOrchestration
==============
*/
char bdObjectStoreCompleteUploadSessionsRequest::needsOrchestration(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  int v2; 
  bdObjectStoreMetadata *Metadata; 

  if ( this->m_objectsSize && this->m_objects )
  {
    v2 = 0;
    while ( 1 )
    {
      Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)&this->m_objects[v2]);
      if ( bdObjectStoreMetadata::hasTags(Metadata) )
        break;
      if ( ++v2 >= this->m_objectsSize )
        return 0;
    }
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreCompleteUploadSessionsRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorecompleteuploadsessionsrequest.cpp", "bdObjectStoreCompleteUploadSessionsRequest::needsOrchestration", 0x2Du, "Objects are not initialized correctly.");
    return 0;
  }
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::reset
==============
*/
void bdObjectStoreCompleteUploadSessionsRequest::reset(bdObjectStoreCompleteUploadSessionsRequest *this)
{
  bdObjectStoreUploadSession *v2; 
  __int64 v3; 

  v2 = (bdObjectStoreUploadSession *)(&this->bdStructBufferSerializable::__vftable + 2);
  v3 = 10i64;
  do
  {
    bdObjectStoreUploadSession::reset(v2++);
    --v3;
  }
  while ( v3 );
  memset_0(this->m_authorizationHeaderValue, 0, sizeof(this->m_authorizationHeaderValue));
  this->m_objects = NULL;
  *(_QWORD *)&this->m_objectsSize = 0i64;
  this->m_needsOrchestration = 0;
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::serializeRequestBody
==============
*/
bool bdObjectStoreCompleteUploadSessionsRequest::serializeRequestBody(bdObjectStoreCompleteUploadSessionsRequest *this, bdJSONSerializer *json)
{
  unsigned int i; 
  __int64 v5; 
  const char *SessionID; 
  unsigned __int64 ContentSize; 
  char v8; 
  const bdObjectStoreMetadata *Metadata; 
  char *m_contentURL; 
  _OWORD *v11; 
  __int64 v12; 
  __m256i *v13; 
  __int64 m_capacity; 
  unsigned int m_size; 
  __m256i *v16; 
  signed __int64 v17; 
  __int64 v18; 
  char v19; 
  _QWORD v21[437]; 

  if ( !bdJSONSerializer::writeBeginObject(json) || !bdJSONSerializer::writeBeginArray(json, "uploadSessionCompletions") )
    return 0;
  for ( i = 0; i < this->m_objectsSize; ++i )
  {
    if ( !bdJSONSerializer::writeBeginObject(json) )
    {
      v5 = i;
LABEL_10:
      v8 = 0;
      goto LABEL_11;
    }
    v5 = i;
    SessionID = bdObjectStoreUploadSession::getSessionID((bdObjectStoreUploadSession *)((char *)&this->bdStructBufferSerializable::__vftable + 1061 * i + 16));
    if ( !bdJSONSerializer::writeString(json, "sessionID", SessionID) )
      goto LABEL_10;
    ContentSize = bdObjectStoreObject::getContentSize((bdObjectStoreObject *)&this->m_objects[i]);
    if ( !bdJSONSerializer::writeUInt64(json, "finalContentLength", ContentSize, 0) )
      goto LABEL_10;
    v8 = 1;
LABEL_11:
    Metadata = bdObjectStoreObject::getMetadata((bdObjectStoreObject *)&this->m_objects[v5]);
    *(_OWORD *)&v21[1] = *(_OWORD *)Metadata->m_context;
    *(bdObjectStoreObjectID *)&v21[3] = Metadata->m_objectID;
    *(__m256i *)&v21[17] = *(__m256i *)Metadata->m_contentChecksum;
    LOBYTE(v21[21]) = Metadata->m_contentChecksum[32];
    *(__m256i *)((char *)&v21[21] + 1) = *(__m256i *)Metadata->m_objectVersion;
    BYTE1(v21[25]) = Metadata->m_objectVersion[32];
    v21[26] = Metadata->m_expiresOn;
    v21[27] = Metadata->m_contentLength;
    LODWORD(v21[28]) = Metadata->m_acl.m_aclType;
    v21[29] = Metadata->m_created;
    v21[30] = Metadata->m_modified;
    m_contentURL = Metadata->m_contentURL;
    v11 = &v21[31];
    v12 = 8i64;
    do
    {
      *v11 = *(_OWORD *)m_contentURL;
      v11[1] = *((_OWORD *)m_contentURL + 1);
      v11[2] = *((_OWORD *)m_contentURL + 2);
      v11[3] = *((_OWORD *)m_contentURL + 3);
      v11[4] = *((_OWORD *)m_contentURL + 4);
      v11[5] = *((_OWORD *)m_contentURL + 5);
      v11[6] = *((_OWORD *)m_contentURL + 6);
      v11 += 8;
      *(v11 - 1) = *((_OWORD *)m_contentURL + 7);
      m_contentURL += 128;
      --v12;
    }
    while ( v12 );
    *(__m256i *)&v21[159] = *(__m256i *)Metadata->m_category;
    *(__m256i *)&v21[163] = *(__m256i *)&Metadata->m_category[32];
    LOBYTE(v21[167]) = Metadata->m_category[64];
    memcpy_0((char *)&v21[167] + 1, Metadata->m_extraData, 0x800ui64);
    HIDWORD(v21[423]) = Metadata->m_extraDataSize;
    v21[424] = Metadata->m_summaryContentLength;
    *(__m256i *)&v21[425] = *(__m256i *)Metadata->m_summaryChecksum;
    LOWORD(v21[429]) = *(_WORD *)&Metadata->m_summaryChecksum[32];
    v21[431] = *(_QWORD *)&Metadata->m_tags.m_capacity;
    v13 = NULL;
    m_capacity = Metadata->m_tags.m_capacity;
    if ( (_DWORD)m_capacity )
    {
      v13 = (__m256i *)bdMemory::allocate(66 * m_capacity);
      m_size = Metadata->m_tags.m_size;
      if ( m_size )
      {
        v16 = v13;
        v17 = (char *)Metadata->m_tags.m_data - (char *)v13;
        v18 = m_size;
        do
        {
          if ( v16 )
          {
            *v16 = *(__m256i *)((char *)v16 + v17);
            v16[1] = *(__m256i *)((char *)&v16[1] + v17);
            v16[2].m256i_i16[0] = *(__int16 *)((char *)v16[2].m256i_i16 + v17);
          }
          v16 = (__m256i *)((char *)v16 + 66);
          --v18;
        }
        while ( v18 );
      }
    }
    v21[430] = v13;
    LODWORD(v21[432]) = Metadata->m_numTags;
    *(bdObjectStoreObjectStatistics *)((char *)&v21[432] + 4) = Metadata->m_statistics;
    if ( bdObjectStoreMetadata::hasTags((bdObjectStoreMetadata *)&v21[1]) )
    {
      if ( !v8 || !bdObjectStoreMetadata::serializeTagsToJSON((bdObjectStoreMetadata *)&v21[1], json, "tags") )
        goto LABEL_22;
    }
    else if ( !v8 )
    {
      goto LABEL_22;
    }
    if ( bdJSONSerializer::writeEndObject(json) )
    {
      v19 = 1;
      goto LABEL_23;
    }
LABEL_22:
    v19 = 0;
LABEL_23:
    bdMemory::deallocate((void *)v21[430]);
    v21[430] = 0i64;
    v21[431] = 0i64;
    bdObjectStoreACL::~bdObjectStoreACL((bdObjectStoreACL *)&v21[28]);
    if ( !v19 )
      return 0;
  }
  return bdJSONSerializer::writeEndArray(json) && bdJSONSerializer::writeEndObject(json);
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::serializeWithLobbyService
==============
*/
_BOOL8 bdObjectStoreCompleteUploadSessionsRequest::serializeWithLobbyService(bdObjectStoreCompleteUploadSessionsRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  bdObjectStoreCompleteUploadSessionsRequest *v5; 
  char orchestration; 
  const char *ClientIDFromAuthInfo; 
  bool v8; 
  unsigned int v9; 
  bool v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  size_t v13; 
  size_t v14; 
  bool v15; 
  bdJSONSerializer json; 
  bdObjectStoreHTTPHeader v18; 
  char url[1024]; 
  char buffer[65536]; 

  v5 = (bdObjectStoreCompleteUploadSessionsRequest *)((char *)this - 32);
  orchestration = this->m_authorizationHeaderValue[4064];
  ClientIDFromAuthInfo = bdObjectStoreRequestBase::getClientIDFromAuthInfo((bdObjectStoreCompleteUploadSessionsRequest *)((char *)this - 32), lobbyService);
  bdObjectStoreRequestBase::buildCompleteUploadSessionsURL(v5, url, 0x400u, ClientIDFromAuthInfo, (const char *)&this[-1].m_objectIndex, orchestration);
  v8 = bdStructBufferSerializer::writeString(serializer, 1u, "POST", 0x10u) && bdStructBufferSerializer::writeString(serializer, 2u, url, 0x400u);
  memset_0(buffer, 0, 0xFFFFui64);
  bdJSONSerializer::bdJSONSerializer(&json, buffer, 0xFFFFu);
  v10 = 0;
  if ( v8 && bdObjectStoreCompleteUploadSessionsRequest::serializeRequestBody(v5, &json) )
  {
    v9 = bdJSONSerializer::length(&json);
    if ( bdStructBufferSerializer::writeBlob(serializer, 3u, buffer, v9) )
      v10 = 1;
  }
  bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader(&v18);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v11 = -1i64;
  v12 = -1i64;
  do
    ++v12;
  while ( aContentType[v12] );
  v13 = 99i64;
  if ( v12 < 0x63 )
    v13 = v12;
  memcpy_0(&v18.__vftable + 2, "Content-Type", v13);
  v18.m_key[v13 - 16] = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v11;
  while ( aApplicationJso_0[v11] );
  v14 = 4095i64;
  if ( v11 < 0xFFF )
    v14 = v11;
  memcpy_0(v18.m_value, "application/json", v14);
  v18.m_value[v14] = 0;
  v15 = v10 && bdStructBufferSerializer::writeObject(serializer, 4u, &v18);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v18.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&v18.gap1074[4]);
  bdJSONSerializer::~bdJSONSerializer(&json);
  return v15;
}

/*
==============
bdObjectStoreCompleteUploadSessionsRequest::setAuthorizationHeaderValue
==============
*/
void bdObjectStoreCompleteUploadSessionsRequest::setAuthorizationHeaderValue(bdObjectStoreCompleteUploadSessionsRequest *this, const char *authorizationHeaderValue)
{
  memcpy_0(this->m_authorizationHeaderValue, authorizationHeaderValue, sizeof(this->m_authorizationHeaderValue));
}

