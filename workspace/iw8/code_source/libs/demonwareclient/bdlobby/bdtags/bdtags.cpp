/*
==============
bdTags::~bdTags
==============
*/

void __fastcall bdTags::~bdTags(bdTags *this)
{
  ??1bdTags@@QEAA@XZ(this);
}

/*
==============
bdTags::getTagsForEntityIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTags::getTagsForEntityIDs(bdTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned int numEntityIDs, const unsigned __int64 *entityIDs, bdTagsArray *tagResults)
{
  return ?getTagsForEntityIDs@bdTags@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IIQEB_KQEAVbdTagsArray@@@Z(this, result, collectionID, numEntityIDs, entityIDs, tagResults);
}

/*
==============
bdTags::setTagsForEntityID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTags::setTagsForEntityID(bdTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned __int64 entityID, const unsigned int numTags, const bdTag *tags)
{
  return ?setTagsForEntityID@bdTags@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_KIQEBVbdTag@@@Z(this, result, collectionID, entityID, numTags, tags);
}

/*
==============
bdTags::searchByTags
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTags::searchByTags(bdTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned int startIndex, const unsigned int maxNumResults, const bool orderNewestFirst, const unsigned int numTags, const bdTag *tags, bdFileID *results)
{
  return ?searchByTags@bdTags@@QEAA?AV?$bdReference@VbdRemoteTask@@@@III_NIQEBVbdTag@@QEAVbdFileID@@@Z(this, result, collectionID, startIndex, maxNumResults, orderNewestFirst, numTags, tags, results);
}

/*
==============
bdTags::bdTags
==============
*/

void __fastcall bdTags::bdTags(bdTags *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdTags@@IEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdTags::removeAllTagsForEntityID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTags::removeAllTagsForEntityID(bdTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned __int64 entityID)
{
  return ?removeAllTagsForEntityID@bdTags@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_K@Z(this, result, collectionID, entityID);
}

/*
==============
bdTags::appendTagsToEntityID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTags::appendTagsToEntityID(bdTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned __int64 entityID, const unsigned int numTags, const bdTag *tags)
{
  return ?appendTagsToEntityID@bdTags@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_KIQEBVbdTag@@@Z(this, result, collectionID, entityID, numTags, tags);
}

/*
==============
bdTags::removeTagsForEntityID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTags::removeTagsForEntityID(bdTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned __int64 entityID, const unsigned int numTags, const bdTag *tags)
{
  return ?removeTagsForEntityID@bdTags@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_KIQEBVbdTag@@@Z(this, result, collectionID, entityID, numTags, tags);
}

/*
==============
bdTags::searchByTagsBase
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTags::searchByTagsBase(bdTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned int startIndex, const unsigned int maxNumResults, const bool orderNewestFirst, const unsigned int numTags, const bdTag *tags, bdTaskResult *results)
{
  return ?searchByTagsBase@bdTags@@AEAA?AV?$bdReference@VbdRemoteTask@@@@III_NIQEBVbdTag@@PEAVbdTaskResult@@@Z(this, result, collectionID, startIndex, maxNumResults, orderNewestFirst, numTags, tags, results);
}

/*
==============
bdTags::countValidTags
==============
*/

unsigned int __fastcall bdTags::countValidTags(bdTags *this, const unsigned int numTags, const bdTag *tags)
{
  return ?countValidTags@bdTags@@AEAAIIQEBVbdTag@@@Z(this, numTags, tags);
}

/*
==============
bdTags::bdTags
==============
*/
void bdTags::bdTags(bdTags *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdTags::~bdTags
==============
*/
void bdTags::~bdTags(bdTags *this)
{
  this->m_remoteTaskManager = NULL;
}

/*
==============
bdTags::appendTagsToEntityID
==============
*/
bdReference<bdRemoteTask> *bdTags::appendTagsToEntityID(bdTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned __int64 entityID, const unsigned int numTags, const bdTag *tags)
{
  unsigned __int64 v6; 
  unsigned int v7; 
  bdTaskByteBuffer *v9; 
  int v10; 
  const bdTag *v11; 
  const bdTag *v12; 
  const bdTag *v13; 
  __int64 v14; 
  bdTaskByteBuffer *v15; 
  bdTaskByteBuffer *v16; 
  const bdTag *v17; 
  __int64 v18; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v21; 
  bdTaskByteBuffer *v22; 

  v21 = -2i64;
  v6 = entityID;
  v7 = collectionID;
  v9 = NULL;
  result->m_ptr = NULL;
  v10 = 0;
  v11 = tags;
  if ( numTags )
  {
    v12 = tags;
    v13 = tags;
    v14 = numTags;
    do
    {
      if ( v12->isSerializable((bdTag *)v13) )
        ++v10;
      ++v13;
      ++v12;
      --v14;
    }
    while ( v14 );
    v6 = entityID;
    v7 = collectionID;
  }
  v15 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v22 = v15;
  if ( v15 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v15, 16 * v10 + 97, 1);
    v9 = v16;
  }
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x34u, 7u);
  bdByteBuffer::writeUInt32(buffer.m_ptr, v7);
  bdByteBuffer::writeUInt64(buffer.m_ptr, v6);
  bdByteBuffer::writeArrayStart(buffer.m_ptr, 0xAu, 2 * v10, 8u);
  if ( numTags )
  {
    v17 = tags;
    v18 = numTags;
    do
    {
      if ( v11->isSerializable((bdTag *)v17) )
        (**((void (__fastcall ***)(__int64, bdTaskByteBuffer *))&v11->__vftable + 2))((__int64)(&v17->__vftable + 2), buffer.m_ptr);
      ++v17;
      ++v11;
      --v18;
    }
    while ( v18 );
  }
  bdByteBuffer::writeArrayEnd(buffer.m_ptr);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdTags::countValidTags
==============
*/
__int64 bdTags::countValidTags(bdTags *this, const unsigned int numTags, const bdTag *tags)
{
  unsigned int v3; 
  const bdTag *v4; 
  const bdTag *v5; 
  __int64 v6; 

  v3 = 0;
  v4 = tags;
  if ( numTags )
  {
    v5 = tags;
    v6 = numTags;
    do
    {
      if ( v4->isSerializable((bdTag *)v5) )
        ++v3;
      ++v5;
      ++v4;
      --v6;
    }
    while ( v6 );
  }
  return v3;
}

/*
==============
bdTags::getTagsForEntityIDs
==============
*/
bdReference<bdRemoteTask> *bdTags::getTagsForEntityIDs(bdTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned int numEntityIDs, const unsigned __int64 *entityIDs, bdTagsArray *tagResults)
{
  __int64 v6; 
  bdTaskByteBuffer *v10; 
  unsigned int v11; 
  bdTaskByteBuffer *v12; 
  bdTaskByteBuffer *v13; 
  const unsigned __int64 *v14; 
  __int64 v15; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v18; 

  v18 = result;
  v6 = numEntityIDs;
  v10 = NULL;
  result->m_ptr = NULL;
  v11 = 8 * numEntityIDs + 88;
  v12 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v12 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v12, v11, 1);
    v10 = v13;
  }
  buffer.m_ptr = v10;
  if ( v10 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x34u, 1u);
  bdByteBuffer::writeUInt32(buffer.m_ptr, collectionID);
  bdByteBuffer::writeArrayStart(buffer.m_ptr, 0xAu, v6, 8u);
  if ( (_DWORD)v6 )
  {
    v14 = entityIDs;
    v15 = v6;
    do
    {
      bdByteBuffer::writeUInt64(buffer.m_ptr, *v14++);
      --v15;
    }
    while ( v15 );
  }
  bdByteBuffer::writeArrayEnd(buffer.m_ptr);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, tagResults, v6);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdTags::removeAllTagsForEntityID
==============
*/
bdReference<bdRemoteTask> *bdTags::removeAllTagsForEntityID(bdTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned __int64 entityID)
{
  bdTaskByteBuffer *v8; 
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  v8 = NULL;
  result->m_ptr = NULL;
  v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v9 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v9, 0x56u, 1);
    v8 = v10;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x34u, 4u);
  bdByteBuffer::writeUInt32(buffer.m_ptr, collectionID);
  bdByteBuffer::writeUInt64(buffer.m_ptr, entityID);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdTags::removeTagsForEntityID
==============
*/
bdReference<bdRemoteTask> *bdTags::removeTagsForEntityID(bdTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned __int64 entityID, const unsigned int numTags, const bdTag *tags)
{
  unsigned __int64 v6; 
  unsigned int v7; 
  bdTaskByteBuffer *v9; 
  int v10; 
  const bdTag *v11; 
  const bdTag *v12; 
  const bdTag *v13; 
  __int64 v14; 
  bdTaskByteBuffer *v15; 
  bdTaskByteBuffer *v16; 
  const bdTag *v17; 
  __int64 v18; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v21; 
  bdTaskByteBuffer *v22; 

  v21 = -2i64;
  v6 = entityID;
  v7 = collectionID;
  v9 = NULL;
  result->m_ptr = NULL;
  v10 = 0;
  v11 = tags;
  if ( numTags )
  {
    v12 = tags;
    v13 = tags;
    v14 = numTags;
    do
    {
      if ( v12->isSerializable((bdTag *)v13) )
        ++v10;
      ++v13;
      ++v12;
      --v14;
    }
    while ( v14 );
    v6 = entityID;
    v7 = collectionID;
  }
  v15 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v22 = v15;
  if ( v15 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v15, 16 * v10 + 97, 1);
    v9 = v16;
  }
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x34u, 3u);
  bdByteBuffer::writeUInt32(buffer.m_ptr, v7);
  bdByteBuffer::writeUInt64(buffer.m_ptr, v6);
  bdByteBuffer::writeArrayStart(buffer.m_ptr, 0xAu, 2 * v10, 8u);
  if ( numTags )
  {
    v17 = tags;
    v18 = numTags;
    do
    {
      if ( v11->isSerializable((bdTag *)v17) )
        (**((void (__fastcall ***)(__int64, bdTaskByteBuffer *))&v11->__vftable + 2))((__int64)(&v17->__vftable + 2), buffer.m_ptr);
      ++v17;
      ++v11;
      --v18;
    }
    while ( v18 );
  }
  bdByteBuffer::writeArrayEnd(buffer.m_ptr);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdTags::searchByTags
==============
*/
bdReference<bdRemoteTask> *bdTags::searchByTags(bdTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned int startIndex, const unsigned int maxNumResults, const bool orderNewestFirst, const unsigned int numTags, const bdTag *tags, bdFileID *results)
{
  bdTags::searchByTagsBase(this, result, collectionID, startIndex, maxNumResults, orderNewestFirst, numTags, tags, results);
  return result;
}

/*
==============
bdTags::searchByTagsBase
==============
*/
bdReference<bdRemoteTask> *bdTags::searchByTagsBase(bdTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned int startIndex, const unsigned int maxNumResults, const bool orderNewestFirst, const unsigned int numTags, const bdTag *tags, bdTaskResult *results)
{
  unsigned int v9; 
  unsigned int v10; 
  bdTaskByteBuffer *v12; 
  int v13; 
  const bdTag *v14; 
  const bdTag *v15; 
  const bdTag *v16; 
  __int64 v17; 
  bdTaskByteBuffer *v18; 
  bdTaskByteBuffer *v19; 
  const bdTag *v20; 
  __int64 v21; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v24; 
  bdTaskByteBuffer *v25; 

  v24 = -2i64;
  v9 = startIndex;
  v10 = collectionID;
  v12 = NULL;
  result->m_ptr = NULL;
  v13 = 0;
  v14 = tags;
  if ( numTags )
  {
    v15 = tags;
    v16 = tags;
    v17 = numTags;
    do
    {
      if ( v15->isSerializable((bdTag *)v16) )
        ++v13;
      ++v16;
      ++v15;
      --v17;
    }
    while ( v17 );
    v9 = startIndex;
    v10 = collectionID;
  }
  v18 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v25 = v18;
  if ( v18 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v18, 16 * v13 + 100, 1);
    v12 = v19;
  }
  buffer.m_ptr = v12;
  if ( v12 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x34u, 5u);
  bdByteBuffer::writeUInt32(buffer.m_ptr, v10);
  bdByteBuffer::writeUInt32(buffer.m_ptr, v9);
  bdByteBuffer::writeUInt32(buffer.m_ptr, maxNumResults);
  bdByteBuffer::writeBool(buffer.m_ptr, orderNewestFirst);
  bdByteBuffer::writeArrayStart(buffer.m_ptr, 0xAu, 2 * v13, 8u);
  if ( numTags )
  {
    v20 = tags;
    v21 = numTags;
    do
    {
      if ( v14->isSerializable((bdTag *)v20) )
        (**((void (__fastcall ***)(__int64, bdTaskByteBuffer *))&v14->__vftable + 2))((__int64)(&v20->__vftable + 2), buffer.m_ptr);
      ++v20;
      ++v14;
      --v21;
    }
    while ( v21 );
  }
  bdByteBuffer::writeArrayEnd(buffer.m_ptr);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, results, maxNumResults);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdTags::setTagsForEntityID
==============
*/
bdReference<bdRemoteTask> *bdTags::setTagsForEntityID(bdTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned __int64 entityID, const unsigned int numTags, const bdTag *tags)
{
  unsigned __int64 v6; 
  unsigned int v7; 
  bdTaskByteBuffer *v9; 
  int v10; 
  const bdTag *v11; 
  const bdTag *v12; 
  const bdTag *v13; 
  __int64 v14; 
  bdTaskByteBuffer *v15; 
  bdTaskByteBuffer *v16; 
  const bdTag *v17; 
  __int64 v18; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v21; 
  bdTaskByteBuffer *v22; 

  v21 = -2i64;
  v6 = entityID;
  v7 = collectionID;
  v9 = NULL;
  result->m_ptr = NULL;
  v10 = 0;
  v11 = tags;
  if ( numTags )
  {
    v12 = tags;
    v13 = tags;
    v14 = numTags;
    do
    {
      if ( v12->isSerializable((bdTag *)v13) )
        ++v10;
      ++v13;
      ++v12;
      --v14;
    }
    while ( v14 );
    v6 = entityID;
    v7 = collectionID;
  }
  v15 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v22 = v15;
  if ( v15 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v15, 16 * v10 + 97, 1);
    v9 = v16;
  }
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x34u, 2u);
  bdByteBuffer::writeUInt32(buffer.m_ptr, v7);
  bdByteBuffer::writeUInt64(buffer.m_ptr, v6);
  bdByteBuffer::writeArrayStart(buffer.m_ptr, 0xAu, 2 * v10, 8u);
  if ( numTags )
  {
    v17 = tags;
    v18 = numTags;
    do
    {
      if ( v11->isSerializable((bdTag *)v17) )
        (**((void (__fastcall ***)(__int64, bdTaskByteBuffer *))&v11->__vftable + 2))((__int64)(&v17->__vftable + 2), buffer.m_ptr);
      ++v17;
      ++v11;
      --v18;
    }
    while ( v18 );
  }
  bdByteBuffer::writeArrayEnd(buffer.m_ptr);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

