/*
==============
bdPublisherVariablesIterator::operator++
==============
*/

bdPublisherVariablesIterator *__fastcall bdPublisherVariablesIterator::operator++(bdPublisherVariablesIterator *this)
{
  return ??EbdPublisherVariablesIterator@@QEAAAEAV0@XZ(this);
}

/*
==============
bdPublisherVariables::subscribeToGroup
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPublisherVariables::subscribeToGroup(bdPublisherVariables *this, bdReference<bdRemoteTask> *result, const unsigned __int16 groupID)
{
  return ?subscribeToGroup@bdPublisherVariables@@QEAA?AV?$bdReference@VbdRemoteTask@@@@G@Z(this, result, groupID);
}

/*
==============
bdPublisherVariables::retrievePublisherVariables
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPublisherVariables::retrievePublisherVariables(bdPublisherVariables *this, bdReference<bdRemoteTask> *result, const char *const nameSpace)
{
  return ?retrievePublisherVariables@bdPublisherVariables@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD@Z(this, result, nameSpace);
}

/*
==============
bdPublisherVariablesIterator::bdPublisherVariablesIterator
==============
*/

void __fastcall bdPublisherVariablesIterator::bdPublisherVariablesIterator(bdPublisherVariablesIterator *this)
{
  ??0bdPublisherVariablesIterator@@QEAA@XZ(this);
}

/*
==============
bdPublisherVariables::retrievePublisherVariables
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPublisherVariables::retrievePublisherVariables(bdPublisherVariables *this, bdReference<bdRemoteTask> *result, const unsigned __int16 numNameSpaces, const char *const *nameSpaces, bdRetrievePublisherVariablesResponse *response)
{
  return ?retrievePublisherVariables@bdPublisherVariables@@QEAA?AV?$bdReference@VbdRemoteTask@@@@GQEBQEBDPEAVbdRetrievePublisherVariablesResponse@@@Z(this, result, numNameSpaces, nameSpaces, response);
}

/*
==============
bdPublisherVariables::bdPublisherVariables
==============
*/

void __fastcall bdPublisherVariables::bdPublisherVariables(bdPublisherVariables *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  ??0bdPublisherVariables@@IEAA@QEAVbdRemoteTaskManager@@PEBD@Z(this, remoteTaskManager, context);
}

/*
==============
bdRetrievePublisherVariablesRequest::serialize
==============
*/

bool __fastcall bdRetrievePublisherVariablesRequest::serialize(bdRetrievePublisherVariablesRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdRetrievePublisherVariablesRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdPublisherVariables::getVersions
==============
*/

bdPublisherVariables::bdPublisherVariablesStatus __fastcall bdPublisherVariables::getVersions(bdPublisherVariables *this, const char *const nameSpace, unsigned __int16 *majorVersion, unsigned __int16 *minorVersion)
{
  return ?getVersions@bdPublisherVariables@@QEAA?AW4bdPublisherVariablesStatus@1@QEBDAEAG1@Z(this, nameSpace, majorVersion, minorVersion);
}

/*
==============
bdPublisherVariablesIterator::valid
==============
*/

bool __fastcall bdPublisherVariablesIterator::valid(bdPublisherVariablesIterator *this)
{
  return ?valid@bdPublisherVariablesIterator@@QEBA_NXZ(this);
}

/*
==============
bdPublisherVariables::getKeyValueByIterator
==============
*/

bdPublisherVariables::bdPublisherVariablesStatus __fastcall bdPublisherVariables::getKeyValueByIterator(bdPublisherVariables *this, const bdPublisherVariablesIterator *iterator, char *const name, unsigned int nameSize, char *const value, unsigned int valueSize)
{
  return ?getKeyValueByIterator@bdPublisherVariables@@QEBA?AW4bdPublisherVariablesStatus@1@VbdPublisherVariablesIterator@@QEADI1I@Z(this, iterator, name, nameSize, value, valueSize);
}

/*
==============
bdPublisherVariables::getVariable
==============
*/

bdPublisherVariables::bdPublisherVariablesStatus __fastcall bdPublisherVariables::getVariable(bdPublisherVariables *this, const char *const nameSpace, const char *const name, char *const value, unsigned int size)
{
  return ?getVariable@bdPublisherVariables@@QEBA?AW4bdPublisherVariablesStatus@1@QEBD0QEADI@Z(this, nameSpace, name, value, size);
}

/*
==============
bdPublisherVariables::getIterator
==============
*/

bdPublisherVariables::bdPublisherVariablesStatus __fastcall bdPublisherVariables::getIterator(bdPublisherVariables *this, const char *const nameSpace, bdPublisherVariablesIterator *iterator)
{
  return ?getIterator@bdPublisherVariables@@QEAA?AW4bdPublisherVariablesStatus@1@QEBDAEAVbdPublisherVariablesIterator@@@Z(this, nameSpace, iterator);
}

/*
==============
bdRetrievePublisherVariablesRequest::deserialize
==============
*/

bool __fastcall bdRetrievePublisherVariablesRequest::deserialize(bdRetrievePublisherVariablesRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdRetrievePublisherVariablesRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdPublisherVariables::~bdPublisherVariables
==============
*/

void __fastcall bdPublisherVariables::~bdPublisherVariables(bdPublisherVariables *this)
{
  ??1bdPublisherVariables@@QEAA@XZ(this);
}

/*
==============
bdPublisherVariablesIterator::bdPublisherVariablesIterator
==============
*/

void __fastcall bdPublisherVariablesIterator::bdPublisherVariablesIterator(bdPublisherVariablesIterator *this, const bdHashMap<bdString,bdJSONValue,bdHashingClass> *map)
{
  ??0bdPublisherVariablesIterator@@AEAA@AEBV?$bdHashMap@VbdString@@VbdJSONValue@@VbdHashingClass@@@@@Z(this, map);
}

/*
==============
bdPublisherVariables::setData
==============
*/

bool __fastcall bdPublisherVariables::setData(bdPublisherVariables *this, const char *const nameSpace, bdJSONObject *jsonObj, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion)
{
  return ?setData@bdPublisherVariables@@IEAA_NQEBDPEAVbdJSONObject@@GG@Z(this, nameSpace, jsonObj, majorVersion, minorVersion);
}

/*
==============
bdPublisherVariables::bdPublisherVariables
==============
*/
void bdPublisherVariables::bdPublisherVariables(bdPublisherVariables *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  __int64 v5; 
  __int64 v6; 
  bdPublisherVariablesInfo v7; 

  this->m_remoteTaskManager = remoteTaskManager;
  bdJSONValue::bdJSONValue(&this->m_json, BD_JSON_OBJECT);
  this->m_jsonVariables = bdJSONValue::getObject(&this->m_json);
  bdPublisherVariablesInfo::bdPublisherVariablesInfo(&this->m_refreshPublisherVariablesResult, NULL);
  *(_DWORD *)&this->m_currentMajorVersion = 0;
  bdStrlcpy(this->m_context, context, 0x10ui64);
  bdPublisherVariablesInfo::bdPublisherVariablesInfo(&v7, this);
  v6 = v5;
  bdReferencable::operator=((bdReferencable *)((char *)&this->m_refreshPublisherVariablesResult.__vftable + *(int *)(*((_QWORD *)&this->m_refreshPublisherVariablesResult.__vftable + 1) + 4i64) + 8), (const bdReferencable *)(*(int *)(*(_QWORD *)(v5 + 8) + 4i64) + v5 + 8));
  bdReferencable::operator=((bdReferencable *)((char *)&this->m_refreshPublisherVariablesResult.__vftable + *(int *)(*((_QWORD *)&this->m_refreshPublisherVariablesResult.__vftable + 3) + 4i64) + 24), (const bdReferencable *)(*(int *)(*(_QWORD *)(v6 + 24) + 4i64) + v6 + 24));
  *(_QWORD *)this->m_refreshPublisherVariablesResult._bytes_20 = *(_QWORD *)(v6 + 32);
  bdPublisherVariablesInfo::~bdPublisherVariablesInfo((bdPublisherVariablesInfo *)&v7._bytes_20[8]);
  bdReferencable::~bdReferencable((bdReferencable *)&v7._bytes_20[8]);
}

/*
==============
bdPublisherVariablesIterator::bdPublisherVariablesIterator
==============
*/
void bdPublisherVariablesIterator::bdPublisherVariablesIterator(bdPublisherVariablesIterator *this, const bdHashMap<bdString,bdJSONValue,bdHashingClass> *map)
{
  unsigned int v2; 
  unsigned int m_capacity; 
  __int64 v5; 
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::Node **m_map; 

  v2 = 0;
  this->m_map = map;
  if ( map->m_size )
  {
    m_capacity = map->m_capacity;
    if ( m_capacity )
    {
      do
      {
        if ( map->m_map[v2] )
          break;
        ++v2;
      }
      while ( v2 < m_capacity );
    }
    v5 = v2;
    m_map = map->m_map;
    if ( m_map[v5] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&map->m_numIterators, 1u);
      m_map = map->m_map;
    }
    this->m_it = m_map[v5];
  }
  else
  {
    this->m_it = NULL;
  }
}

/*
==============
bdPublisherVariablesIterator::bdPublisherVariablesIterator
==============
*/
void bdPublisherVariablesIterator::bdPublisherVariablesIterator(bdPublisherVariablesIterator *this)
{
  this->m_map = NULL;
  this->m_it = NULL;
}

/*
==============
bdPublisherVariables::~bdPublisherVariables
==============
*/
void bdPublisherVariables::~bdPublisherVariables(bdPublisherVariables *this)
{
  bdPublisherVariablesInfo::~bdPublisherVariablesInfo((bdPublisherVariablesInfo *)&this->m_refreshPublisherVariablesResult._bytes_20[8]);
  bdReferencable::~bdReferencable((bdReferencable *)&this->m_refreshPublisherVariablesResult._bytes_20[8]);
  bdJSONValue::~bdJSONValue(&this->m_json);
}

/*
==============
bdPublisherVariablesIterator::operator++
==============
*/
bdPublisherVariablesIterator *bdPublisherVariablesIterator::operator++(bdPublisherVariablesIterator *this)
{
  bdString *m_it; 
  const bdHashMap<bdString,bdJSONValue,bdHashingClass> *m_map; 
  void *v4; 
  unsigned __int64 Length; 
  int v7; 
  __int64 v8; 
  const char *i; 
  int v10; 
  unsigned int m_capacity; 
  __int64 v12; 
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::Node *v13; 

  m_it = (bdString *)this->m_it;
  m_map = this->m_map;
  v4 = (void *)*((_QWORD *)this->m_it + 3);
  if ( v4 )
  {
    this->m_it = v4;
    return this;
  }
  else
  {
    Length = bdString::getLength(m_it + 2);
    v7 = 0;
    v8 = 0i64;
    for ( i = bdString::getBuffer(m_it + 2); Length; --Length )
    {
      v10 = (unsigned __int8)i[v8];
      v8 = (unsigned int)(v8 + 1);
      v7 = v10 ^ (16777619 * v7);
    }
    m_capacity = m_map->m_capacity;
    v12 = (v7 & (m_capacity - 1)) + 1;
    if ( (unsigned int)v12 >= m_capacity )
    {
LABEL_8:
      this->m_it = NULL;
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_map->m_numIterators, 0xFFFFFFFF);
      return this;
    }
    else
    {
      while ( 1 )
      {
        v13 = m_map->m_map[v12];
        if ( v13 )
          break;
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= m_capacity )
          goto LABEL_8;
      }
      this->m_it = v13;
      return this;
    }
  }
}

/*
==============
bdRetrievePublisherVariablesRequest::deserialize
==============
*/
bool bdRetrievePublisherVariablesRequest::deserialize(bdRetrievePublisherVariablesRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariables.cpp", "bdRetrievePublisherVariablesRequest::deserialize", 0x53u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdPublisherVariables::getIterator
==============
*/
__int64 bdPublisherVariables::getIterator(bdPublisherVariables *this, const char *const nameSpace, bdPublisherVariablesIterator *iterator)
{
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::Node *v6; 
  bdJSONValue *v7; 
  bdJSONObject *Object; 
  bdHashMap<bdString,bdJSONValue,bdHashingClass> *Map; 
  bdHashMap<bdString,bdJSONValue,bdHashingClass> *v10; 
  unsigned int m_capacity; 
  __int64 v12; 
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::Node **m_map; 
  __int64 result; 
  __int128 v16; 

  _RBP = iterator;
  v6 = NULL;
  if ( !bdJSONObject::containsKey(this->m_jsonVariables, nameSpace) )
    return 0i64;
  v7 = bdJSONObject::operator[](this->m_jsonVariables, nameSpace);
  Object = bdJSONValue::getObject(v7);
  Map = bdJSONObject::getMap(Object);
  v10 = Map;
  *((_QWORD *)&v16 + 1) = Map;
  if ( Map->m_size )
  {
    m_capacity = Map->m_capacity;
    if ( m_capacity )
    {
      do
      {
        if ( Map->m_map[(unsigned int)v6] )
          break;
        LODWORD(v6) = (_DWORD)v6 + 1;
      }
      while ( (unsigned int)v6 < m_capacity );
    }
    v12 = (unsigned int)v6;
    m_map = v10->m_map;
    if ( m_map[v12] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_numIterators, 1u);
      m_map = v10->m_map;
    }
    v6 = m_map[v12];
  }
  *(_QWORD *)&v16 = v6;
  result = 3i64;
  __asm
  {
    vmovups xmm0, [rsp+38h+var_18]
    vmovups xmmword ptr [rbp+0], xmm0
  }
  return result;
}

/*
==============
bdPublisherVariables::getKeyValueByIterator
==============
*/
__int64 bdPublisherVariables::getKeyValueByIterator(bdPublisherVariables *this, const bdPublisherVariablesIterator *iterator, char *const name, unsigned int nameSize, char *const value, unsigned __int64 valueSize)
{
  const bdString *m_it; 
  const char *Buffer; 
  unsigned int v10; 
  bdString *String; 
  const char *v12; 
  bdJSONValue v14; 
  bdString v15; 

  m_it = (const bdString *)iterator->m_it;
  bdHandleAssert(name != NULL, "(name != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariables.cpp", "bdPublisherVariables::getKeyValueByIterator", 0xFFu, "Cannot call bdPublisherVariables::getKeyValueByIterator with a NULL name");
  bdHandleAssert(nameSize != 0, "(nameSize > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariables.cpp", "bdPublisherVariables::getKeyValueByIterator", 0x100u, "Cannot call bdPublisherVariables::getKeyValueByIterator with a zero nameSize");
  bdHandleAssert(value != NULL, "(value != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariables.cpp", "bdPublisherVariables::getKeyValueByIterator", 0x101u, "Cannot call bdPublisherVariables::getKeyValueByIterator with a NULL value");
  bdHandleAssert((_DWORD)valueSize != 0, "(valueSize > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariables.cpp", "bdPublisherVariables::getKeyValueByIterator", 0x102u, "Cannot call bdPublisherVariables::getKeyValueByIterator with a zero valueSize");
  if ( m_it && name && nameSize && value && (_DWORD)valueSize )
  {
    bdString::bdString(&v15, m_it + 2);
    bdJSONValue::bdJSONValue(&v14, (const bdJSONValue *)m_it);
    Buffer = bdString::getBuffer(&v15);
    bdStrlcpy(name, Buffer, nameSize);
    v10 = valueSize;
    String = bdJSONValue::getString(&v14);
    v12 = bdString::getBuffer(String);
    bdStrlcpy(value, v12, v10);
    bdJSONValue::~bdJSONValue(&v14);
    bdString::~bdString(&v15);
    return 3i64;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdPublisherVariables", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariables.cpp", "bdPublisherVariables::getKeyValueByIterator", 0x10Eu, "NULL parameter passed to bdPublisherVariables::getKeyValueByIterator");
    return 1i64;
  }
}

/*
==============
bdPublisherVariables::getVariable
==============
*/
__int64 bdPublisherVariables::getVariable(bdPublisherVariables *this, const char *const nameSpace, const char *const name, char *const value, unsigned int size)
{
  bdJSONValue *v9; 
  bdJSONObject *Object; 
  bdJSONObject *v11; 
  bdJSONValue *v12; 
  unsigned int v13; 
  const char *Buffer; 
  unsigned int v15; 
  bdString valuea; 

  if ( !bdJSONObject::containsKey(this->m_jsonVariables, nameSpace) )
  {
    v15 = 0;
    goto LABEL_11;
  }
  v9 = bdJSONObject::operator[](this->m_jsonVariables, nameSpace);
  Object = bdJSONValue::getObject(v9);
  v11 = Object;
  if ( !name || !bdJSONObject::containsKey(Object, name) )
  {
    v15 = 1;
LABEL_11:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdPublisherVariables", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariables.cpp", "bdPublisherVariables::getVariable", 0xB9u, "Couldn't access variable[%s] with status [%i]", name, v15);
    return v15;
  }
  bdString::bdString(&valuea);
  v12 = bdJSONObject::operator[](v11, name);
  if ( bdJSONValue::getString(v12, &valuea) )
  {
    v13 = size;
    Buffer = bdString::getBuffer(&valuea);
    bdStrlcpy(value, Buffer, v13);
    v15 = 3;
  }
  else
  {
    v15 = 2;
  }
  bdString::~bdString(&valuea);
  if ( v15 != 3 )
    goto LABEL_11;
  return v15;
}

/*
==============
bdPublisherVariables::getVersions
==============
*/
__int64 bdPublisherVariables::getVersions(bdPublisherVariables *this, const char *const nameSpace, unsigned __int16 *majorVersion, unsigned __int16 *minorVersion)
{
  unsigned int v8; 
  bdJSONValue *v9; 
  bdJSONObject *Object; 
  const bdJSONValue *v11; 
  const bdJSONValue *v12; 
  unsigned __int64 value[2]; 
  bdJSONValue v15; 
  bdJSONValue v16; 
  unsigned __int64 v17; 

  value[1] = -2i64;
  v8 = 1;
  v17 = 0i64;
  if ( !bdJSONObject::containsKey(this->m_jsonVariables, nameSpace) )
  {
    v8 = 0;
LABEL_10:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdPublisherVariables", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariables.cpp", "bdPublisherVariables::getVersions", 0xE0u, "Couldn't access majorVersion in namespace[%s] with status [%i]", nameSpace, v8);
    return v8;
  }
  v9 = bdJSONObject::operator[](this->m_jsonVariables, nameSpace);
  Object = bdJSONValue::getObject(v9);
  if ( !bdJSONObject::containsKey(Object, BD_MAJOR_KEY) || !bdJSONObject::containsKey(Object, BD_MINOR_KEY) )
    goto LABEL_10;
  v11 = bdJSONObject::operator[](Object, BD_MAJOR_KEY);
  bdJSONValue::bdJSONValue(&v16, v11);
  v12 = bdJSONObject::operator[](Object, BD_MINOR_KEY);
  bdJSONValue::bdJSONValue(&v15, v12);
  if ( bdJSONValue::getUInt64(&v16, value) && bdJSONValue::getUInt64(&v15, &v17) )
  {
    *majorVersion = value[0];
    *minorVersion = v17;
    v8 = 3;
  }
  bdJSONValue::~bdJSONValue(&v15);
  bdJSONValue::~bdJSONValue(&v16);
  if ( v8 != 3 )
    goto LABEL_10;
  return v8;
}

/*
==============
bdPublisherVariables::retrievePublisherVariables
==============
*/
bdReference<bdRemoteTask> *bdPublisherVariables::retrievePublisherVariables(bdPublisherVariables *this, bdReference<bdRemoteTask> *result, const unsigned __int16 numNameSpaces, const char *const *nameSpaces, bdRetrievePublisherVariablesResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v12; 
  bdReference<bdStructBufferTask> newTask; 
  int v14; 
  __int64 v15; 
  bdStructBufferSerializable request; 
  unsigned __int16 v17; 
  const char *const *v18; 
  bdReferencable v19; 

  v15 = -2i64;
  newTask.m_ptr = NULL;
  bdHandleAssert(nameSpaces != NULL, "(nameSpaces != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariables.cpp", "bdPublisherVariables::retrievePublisherVariables", 0x63u, "Cannot call retrievePublisherVariables() with a NULL nameSpaces");
  bdHandleAssert(numNameSpaces != 0, "(numNameSpaces > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariables.cpp", "bdPublisherVariables::retrievePublisherVariables", 0x64u, "Cannot call retrievePublisherVariables() with <= 0 numNameSpaces");
  *((_QWORD *)&request.__vftable + 1) = &bdRetrievePublisherVariablesRequest::`vbtable';
  v19.__vftable = (bdReferencable_vtbl *)&bdReferencable::`vftable';
  v19.m_refCount.m_value._My_val = 0;
  v14 = 2;
  bdStructBufferSerializable::bdStructBufferSerializable(&request);
  request.__vftable = (bdStructBufferSerializable_vtbl *)&bdRetrievePublisherVariablesRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&request.__vftable + *(int *)(*((_QWORD *)&request.__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdRetrievePublisherVariablesRequest::`vftable'{for `bdReferencable'};
  v17 = numNameSpaces;
  v18 = nameSpaces;
  bdStrlcpy((char *const)&request.__vftable + 16, this->m_context, 0x10ui64);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x5Fu, 3u, &request, response, NULL);
  if ( started )
  {
    v12 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdPublisherVariables", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariables.cpp", "bdPublisherVariables::retrievePublisherVariables", 0x6Cu, "Failed to start task: Error %i", v12);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable(&v19);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdPublisherVariables::retrievePublisherVariables
==============
*/
bdReference<bdRemoteTask> *bdPublisherVariables::retrievePublisherVariables(bdPublisherVariables *this, bdReference<bdRemoteTask> *result, const char *const nameSpace)
{
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x5Fu, 1u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdBufferParams::addString(&taskParams, nameSpace, 0x20ui64);
  if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
  {
    taskParams.m_taskResults = &this->m_refreshPublisherVariablesResult;
    taskParams.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdRetrievePublisherVariablesRequest::serialize
==============
*/
bool bdRetrievePublisherVariablesRequest::serialize(bdRetrievePublisherVariablesRequest *this, bdStructBufferSerializer *serializer)
{
  bool result; 
  __int64 i; 

  result = bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x10u);
  for ( i = 0i64; (unsigned int)i < this->m_numNameSpaces; i = (unsigned int)(i + 1) )
    result = result && bdStructBufferSerializer::writeString(serializer, 2u, this->m_nameSpaces[i], 0x20u);
  return result;
}

/*
==============
bdPublisherVariables::setData
==============
*/
_BOOL8 bdPublisherVariables::setData(bdPublisherVariables *this, const char *const nameSpace, bdJSONObject *jsonObj, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion)
{
  bool v8; 
  unsigned int v9; 
  bdJSONValue *v10; 
  bdJSONValue *v11; 
  bdJSONValue *v12; 
  bdJSONValue *p_other; 
  const bdJSONObject *Object; 
  bdJSONValue *v15; 
  bdJSONValue other; 
  bdJSONValue v18; 

  v8 = jsonObj != NULL;
  if ( jsonObj )
  {
    v9 = majorVersion;
    v10 = bdJSONObject::operator[](jsonObj, BD_MAJOR_KEY);
    bdJSONValue::operator=(v10, v9);
    v11 = bdJSONObject::operator[](jsonObj, BD_MINOR_KEY);
    bdJSONValue::operator=(v11, minorVersion);
    bdJSONValue::bdJSONValue(&other, jsonObj);
    v12 = bdJSONObject::operator[](this->m_jsonVariables, nameSpace);
    bdJSONValue::operator=(v12, &other);
    p_other = &other;
  }
  else
  {
    bdJSONValue::bdJSONValue(&v18, BD_JSON_OBJECT);
    Object = bdJSONValue::getObject(&v18);
    bdJSONValue::bdJSONValue(&other, Object);
    v15 = bdJSONObject::operator[](this->m_jsonVariables, nameSpace);
    bdJSONValue::operator=(v15, &other);
    bdJSONValue::~bdJSONValue(&other);
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdPublisherVariables", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariables.cpp", "bdPublisherVariables::setData", 0x8Du, "Failed to get variables jsonValue");
    p_other = &v18;
  }
  bdJSONValue::~bdJSONValue(p_other);
  return v8;
}

/*
==============
bdPublisherVariables::subscribeToGroup
==============
*/
bdReference<bdRemoteTask> *bdPublisherVariables::subscribeToGroup(bdPublisherVariables *this, bdReference<bdRemoteTask> *result, const unsigned __int16 groupID)
{
  _BOOL8 v6; 
  bool v7; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x5Fu, 2u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v6) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 2u, v6) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v7 = bdByteBuffer::writeUInt16(taskParams.m_buffer.m_ptr, groupID), taskParams.m_serializeOk = 1, !v7) )
      taskParams.m_serializeOk = 0;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdPublisherVariablesIterator::valid
==============
*/
bool bdPublisherVariablesIterator::valid(bdPublisherVariablesIterator *this)
{
  return this->m_map && this->m_it;
}

