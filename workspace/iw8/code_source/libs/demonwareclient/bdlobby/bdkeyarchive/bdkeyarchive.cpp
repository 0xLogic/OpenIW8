/*
==============
bdKeyArchive::writeMultipleEntityIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdKeyArchive::writeMultipleEntityIDs(bdKeyArchive *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *entityIDs, const bdKeyValuePair *keyValuePairs, const unsigned int numItems, const unsigned __int16 category)
{
  return ?writeMultipleEntityIDs@bdKeyArchive@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KQEBVbdKeyValuePair@@IG@Z(this, result, entityIDs, keyValuePairs, numItems, category);
}

/*
==============
bdKeyArchive::read
==============
*/

bdReference<bdRemoteTask> *__fastcall bdKeyArchive::read(bdKeyArchive *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID, const unsigned __int16 category, const bool readDedicated, bdKeyValuePair *keyValuePairs, const unsigned int numValues)
{
  return ?read@bdKeyArchive@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KG_NQEAVbdKeyValuePair@@I@Z(this, result, entityID, category, readDedicated, keyValuePairs, numValues);
}

/*
==============
bdKeyArchive::bdKeyArchive
==============
*/

void __fastcall bdKeyArchive::bdKeyArchive(bdKeyArchive *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdKeyArchive@@IEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdKeyArchive::~bdKeyArchive
==============
*/

void __fastcall bdKeyArchive::~bdKeyArchive(bdKeyArchive *this)
{
  ??1bdKeyArchive@@QEAA@XZ(this);
}

/*
==============
bdKeyArchive::readMultipleEntityIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdKeyArchive::readMultipleEntityIDs(bdKeyArchive *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, const unsigned __int16 category, const bool readDedicated, const unsigned __int16 *keysToRead, const unsigned int numKeysToRead, bdEntityIDKeyArchiveMap **entityIDKeyArchiveMaps)
{
  return ?readMultipleEntityIDs@bdKeyArchive@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KIG_NQEBGIQEAPEAVbdEntityIDKeyArchiveMap@@@Z(this, result, entityIDs, numEntityIDs, category, readDedicated, keysToRead, numKeysToRead, entityIDKeyArchiveMaps);
}

/*
==============
bdKeyArchive::writeMultipleEntityIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdKeyArchive::writeMultipleEntityIDs(bdKeyArchive *this, bdReference<bdRemoteTask> *result, const bdEntityIDKeyValueTriplet *triplets, const unsigned int numTriplets, const unsigned __int16 category)
{
  return ?writeMultipleEntityIDs@bdKeyArchive@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdEntityIDKeyValueTriplet@@IG@Z(this, result, triplets, numTriplets, category);
}

/*
==============
bdKeyArchive::write
==============
*/

bdReference<bdRemoteTask> *__fastcall bdKeyArchive::write(bdKeyArchive *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID, const unsigned __int16 category, const bdKeyValuePair *keyValuePairs, const unsigned int numValues)
{
  return ?write@bdKeyArchive@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KGQEBVbdKeyValuePair@@I@Z(this, result, entityID, category, keyValuePairs, numValues);
}

/*
==============
bdKeyArchive::readAll
==============
*/

bdReference<bdRemoteTask> *__fastcall bdKeyArchive::readAll(bdKeyArchive *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID, const unsigned __int16 category, const bool readDedicated, bdKeyValuePair *keyValuePairs, const unsigned int numValues)
{
  return ?readAll@bdKeyArchive@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KG_NQEAVbdKeyValuePair@@I@Z(this, result, entityID, category, readDedicated, keyValuePairs, numValues);
}

/*
==============
bdKeyArchive::bdKeyArchive
==============
*/
void bdKeyArchive::bdKeyArchive(bdKeyArchive *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdKeyArchive::~bdKeyArchive
==============
*/
void bdKeyArchive::~bdKeyArchive(bdKeyArchive *this)
{
  this->m_remoteTaskManager = NULL;
}

/*
==============
bdKeyArchive::read
==============
*/
bdReference<bdRemoteTask> *bdKeyArchive::read(bdKeyArchive *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID, const unsigned __int16 category, const bool readDedicated, bdKeyValuePair *keyValuePairs, const unsigned int numValues)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  _BOOL8 v14; 
  bool v15; 
  _BOOL8 v16; 
  bool v17; 
  const unsigned __int16 *v18; 
  __int64 v19; 
  bool v20; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0xFu, 2u, 0x400u, 0xFFFFu);
  LOBYTE(v11) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, entityID), taskParams.m_serializeOk = 1, !v13) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 2u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt16(taskParams.m_buffer.m_ptr, category), taskParams.m_serializeOk = 1, !v15) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v14) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 1u, v14) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v17 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, readDedicated), taskParams.m_serializeOk = 1, !v17) )
      taskParams.m_serializeOk = 0;
  }
  if ( numValues )
  {
    v18 = (const unsigned __int16 *)&keyValuePairs->_bytes_20[2];
    v19 = numValues;
    do
    {
      LOBYTE(v16) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 2u, v16) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v20 = bdByteBuffer::writeUInt16(taskParams.m_buffer.m_ptr, *v18), taskParams.m_serializeOk = 1, !v20) )
          taskParams.m_serializeOk = 0;
      }
      v18 += 32;
      --v19;
    }
    while ( v19 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = keyValuePairs;
    taskParams.m_maxResults = numValues;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "key archive", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdkeyarchive\\bdkeyarchive.cpp", "bdKeyArchive::read", 0x5Eu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdKeyArchive::readAll
==============
*/
bdReference<bdRemoteTask> *bdKeyArchive::readAll(bdKeyArchive *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID, const unsigned __int16 category, const bool readDedicated, bdKeyValuePair *keyValuePairs, const unsigned int numValues)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  _BOOL8 v14; 
  bool v15; 
  bool v16; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0xFu, 3u, 0x400u, 0xFFFFu);
  LOBYTE(v11) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, entityID), taskParams.m_serializeOk = 1, !v13) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 2u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt16(taskParams.m_buffer.m_ptr, category), taskParams.m_serializeOk = 1, !v15) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v14) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 1u, v14) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, readDedicated), taskParams.m_serializeOk = 1, !v16) )
      taskParams.m_serializeOk = 0;
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = keyValuePairs;
    taskParams.m_maxResults = numValues;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "key archive", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdkeyarchive\\bdkeyarchive.cpp", "bdKeyArchive::readAll", 0x7Cu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdKeyArchive::readMultipleEntityIDs
==============
*/
bdReference<bdRemoteTask> *bdKeyArchive::readMultipleEntityIDs(bdKeyArchive *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, const unsigned __int16 category, const bool readDedicated, const unsigned __int16 *keysToRead, const unsigned int numKeysToRead, bdEntityIDKeyArchiveMap **entityIDKeyArchiveMaps)
{
  __int64 v9; 
  _BOOL8 v13; 
  _BOOL8 v14; 
  bool v15; 
  __int64 v16; 
  bool v17; 
  _BOOL8 v18; 
  bool v19; 
  _BOOL8 v20; 
  bool v21; 
  _BOOL8 v22; 
  __int64 v23; 
  bool v24; 
  bool v26; 
  bdLobbyErrorCode started; 
  __int64 v29; 
  bdReference<bdTaskByteBuffer> queryParams; 
  __int64 v31; 
  bdTaskParams v32; 

  v31 = -2i64;
  v9 = numEntityIDs;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v32, 0xFu, 5u, 0x400u, 0xFFFFu);
  LOBYTE(v13) = 1;
  if ( v32.ensureCapacity(&v32, 4u, v13) )
  {
    if ( v32.m_isWritingArray )
      --v32.m_arrayWriteCount;
    if ( !v32.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(v32.m_buffer.m_ptr, v9), v32.m_serializeOk = 1, !v15) )
      v32.m_serializeOk = 0;
  }
  if ( (_DWORD)v9 )
  {
    v16 = v9;
    do
    {
      LOBYTE(v14) = 1;
      if ( v32.ensureCapacity(&v32, 8u, v14) )
      {
        if ( v32.m_isWritingArray )
          --v32.m_arrayWriteCount;
        if ( !v32.m_serializeOk || (v17 = bdByteBuffer::writeUInt64(v32.m_buffer.m_ptr, *entityIDs), v32.m_serializeOk = 1, !v17) )
          v32.m_serializeOk = 0;
      }
      ++entityIDs;
      --v16;
    }
    while ( v16 );
  }
  LOBYTE(v14) = 1;
  if ( v32.ensureCapacity(&v32, 2u, v14) )
  {
    if ( v32.m_isWritingArray )
      --v32.m_arrayWriteCount;
    if ( !v32.m_serializeOk || (v19 = bdByteBuffer::writeUInt16(v32.m_buffer.m_ptr, category), v32.m_serializeOk = 1, !v19) )
      v32.m_serializeOk = 0;
  }
  LOBYTE(v18) = 1;
  if ( v32.ensureCapacity(&v32, 1u, v18) )
  {
    if ( v32.m_isWritingArray )
      --v32.m_arrayWriteCount;
    if ( !v32.m_serializeOk || (v21 = bdByteBuffer::writeBool(v32.m_buffer.m_ptr, readDedicated), v32.m_serializeOk = 1, !v21) )
      v32.m_serializeOk = 0;
  }
  LOBYTE(v20) = 1;
  v23 = numKeysToRead;
  if ( v32.ensureCapacity(&v32, 4u, v20) )
  {
    if ( v32.m_isWritingArray )
      --v32.m_arrayWriteCount;
    if ( !v32.m_serializeOk || (v24 = bdByteBuffer::writeUInt32(v32.m_buffer.m_ptr, numKeysToRead), v32.m_serializeOk = 1, !v24) )
      v32.m_serializeOk = 0;
  }
  if ( numKeysToRead )
  {
    do
    {
      LOBYTE(v22) = 1;
      if ( v32.ensureCapacity(&v32, 2u, v22) )
      {
        if ( v32.m_isWritingArray )
          --v32.m_arrayWriteCount;
        if ( !v32.m_serializeOk || (v26 = bdByteBuffer::writeUInt16(v32.m_buffer.m_ptr, *keysToRead), v32.m_serializeOk = 1, !v26) )
          v32.m_serializeOk = 0;
      }
      ++keysToRead;
      --v23;
    }
    while ( v23 );
  }
  if ( !v32.m_serializeOk )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::getTaskBuffer", 0x13u, "Failed to serialize one or more task parameters.");
  queryParams.m_ptr = v32.m_taskBuffer.m_ptr;
  if ( v32.m_taskBuffer.m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v32.m_taskBuffer.m_ptr->m_refCount, 1u);
  if ( (v32.m_isWritingArray || v32.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", v32.m_arrayWriteCount), v32.m_isWritingArray) || v32.m_arrayWriteCount) || !v32.m_serializeOk || !v32.m_buffer.m_ptr || !v32.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "key archive", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdkeyarchive\\bdkeyarchive.cpp", "bdKeyArchive::readMultipleEntityIDs", 0xB3u, "Failed to serialize the task buffer.");
  }
  else
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &queryParams);
    if ( started )
    {
      LODWORD(v29) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "key archive", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdkeyarchive\\bdkeyarchive.cpp", "bdKeyArchive::readMultipleEntityIDs", 0xAAu, "Failed to start task: Error %i", v29);
    }
    else
    {
      bdRemoteTask::setTaskResultList(result->m_ptr, entityIDKeyArchiveMaps, v9);
    }
  }
  if ( queryParams.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&queryParams.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( queryParams.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))queryParams.m_ptr->~bdReferencable)(queryParams.m_ptr, 1i64);
    queryParams.m_ptr = NULL;
  }
  bdTaskParams::~bdTaskParams(&v32);
  return result;
}

/*
==============
bdKeyArchive::write
==============
*/
bdReference<bdRemoteTask> *bdKeyArchive::write(bdKeyArchive *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID, const unsigned __int16 category, const bdKeyValuePair *keyValuePairs, const unsigned int numValues)
{
  unsigned int v10; 
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  bool v14; 
  _BYTE *bytes_20; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v18; 
  bdTaskParams taskParams; 

  v10 = 0;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0xFu, 1u, 0x400u, 0xFFFFu);
  LOBYTE(v11) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, entityID), taskParams.m_serializeOk = 1, !v13) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 2u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt16(taskParams.m_buffer.m_ptr, category), taskParams.m_serializeOk = 1, !v14) )
      taskParams.m_serializeOk = 0;
  }
  if ( numValues )
  {
    bytes_20 = keyValuePairs->_bytes_20;
    do
    {
      if ( *((_QWORD *)bytes_20 + 1) || *bytes_20 != 1 )
        bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&keyValuePairs[(unsigned __int64)v10].__vftable + 2));
      ++v10;
      bytes_20 += 64;
    }
    while ( v10 < numValues );
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v18 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "key archive", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdkeyarchive\\bdkeyarchive.cpp", "bdKeyArchive::write", 0x3Bu, "Failed to start task: Error %i", v18);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdKeyArchive::writeMultipleEntityIDs
==============
*/
bdReference<bdRemoteTask> *bdKeyArchive::writeMultipleEntityIDs(bdKeyArchive *this, bdReference<bdRemoteTask> *result, const bdEntityIDKeyValueTriplet *triplets, const unsigned int numTriplets, const unsigned __int16 category)
{
  __int64 v5; 
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v15; 
  bdTaskParams taskParams; 

  v5 = numTriplets;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0xFu, 6u, 0x400u, 0xFFFFu);
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v5), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  if ( (_DWORD)v5 )
  {
    do
    {
      bdBufferParams::addSerializable(&taskParams, triplets++);
      --v5;
    }
    while ( v5 );
  }
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 2u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt16(taskParams.m_buffer.m_ptr, category), taskParams.m_serializeOk = 1, !v12) )
      taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v15 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "key archive", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdkeyarchive\\bdkeyarchive.cpp", "bdKeyArchive::writeMultipleEntityIDs", 0xF3u, "Failed to start task: Error %i", v15);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdKeyArchive::writeMultipleEntityIDs
==============
*/
bdReference<bdRemoteTask> *bdKeyArchive::writeMultipleEntityIDs(bdKeyArchive *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *entityIDs, const bdKeyValuePair *keyValuePairs, const unsigned int numItems, const unsigned __int16 category)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  __int64 v12; 
  bool v13; 
  bool v14; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 
  __int64 v18; 
  bdEntityIDKeyValueTriplet v19; 

  v18 = -2i64;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0xFu, 6u, 0x400u, 0xFFFFu);
  LOBYTE(v10) = 1;
  v12 = numItems;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numItems), taskParams.m_serializeOk = 1, !v13) )
      taskParams.m_serializeOk = 0;
  }
  if ( numItems )
  {
    do
    {
      bdEntityIDKeyValueTriplet::bdEntityIDKeyValueTriplet(&v19, *entityIDs, keyValuePairs);
      bdBufferParams::addSerializable(&taskParams, &v19);
      bdSerializable::~bdSerializable((bdSerializable *)(&v19.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)(&v19.m_updateType + 8));
      ++keyValuePairs;
      ++entityIDs;
      --v12;
    }
    while ( v12 );
  }
  LOBYTE(v11) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 2u, v11) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt16(taskParams.m_buffer.m_ptr, category), taskParams.m_serializeOk = 1, !v14) )
      taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "key archive", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdkeyarchive\\bdkeyarchive.cpp", "bdKeyArchive::writeMultipleEntityIDs", 0xD5u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

