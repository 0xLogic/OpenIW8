/*
==============
bdVoteRank::submitCategorizedRating
==============
*/

bdReference<bdRemoteTask> *__fastcall bdVoteRank::submitCategorizedRating(bdVoteRank *this, bdReference<bdRemoteTask> *result, bdCategorizedRatingInfo *ratings, const unsigned int numRatings)
{
  return ?submitCategorizedRating@bdVoteRank@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdCategorizedRatingInfo@@I@Z(this, result, ratings, numRatings);
}

/*
==============
bdVoteRank::~bdVoteRank
==============
*/

void __fastcall bdVoteRank::~bdVoteRank(bdVoteRank *this)
{
  ??1bdVoteRank@@QEAA@XZ(this);
}

/*
==============
bdVoteRank::bdVoteRank
==============
*/

void __fastcall bdVoteRank::bdVoteRank(bdVoteRank *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdVoteRank@@IEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdVoteRank::getLikeDislikeRatioFromRating
==============
*/

bool __fastcall bdVoteRank::getLikeDislikeRatioFromRating(bdVoteRank *this, const bdVoteRankStatsInfo *rating, unsigned int *likes, unsigned int *dislikes)
{
  return ?getLikeDislikeRatioFromRating@bdVoteRank@@QEBA_NPEBVbdVoteRankStatsInfo@@AEAI1@Z(this, rating, likes, dislikes);
}

/*
==============
bdVoteRank::getVoteHistory
==============
*/

bdReference<bdRemoteTask> *__fastcall bdVoteRank::getVoteHistory(bdVoteRank *this, bdReference<bdRemoteTask> *result, const unsigned __int16 category, bdCategorizedRatingInfo *historicalVotes, const unsigned int offset, const unsigned int maxResults)
{
  return ?getVoteHistory@bdVoteRank@@QEAA?AV?$bdReference@VbdRemoteTask@@@@GQEAVbdCategorizedRatingInfo@@II@Z(this, result, category, historicalVotes, offset, maxResults);
}

/*
==============
bdVoteRank::submitRating
==============
*/

bdReference<bdRemoteTask> *__fastcall bdVoteRank::submitRating(bdVoteRank *this, bdReference<bdRemoteTask> *result, bdRatingInfo *ratings, const unsigned int numRatings)
{
  return ?submitRating@bdVoteRank@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdRatingInfo@@I@Z(this, result, ratings, numRatings);
}

/*
==============
bdVoteRank::bdVoteRank
==============
*/
void bdVoteRank::bdVoteRank(bdVoteRank *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdVoteRank::~bdVoteRank
==============
*/
void bdVoteRank::~bdVoteRank(bdVoteRank *this)
{
  this->m_remoteTaskManager = NULL;
}

/*
==============
bdVoteRank::getLikeDislikeRatioFromRating
==============
*/
char bdVoteRank::getLikeDislikeRatioFromRating(bdVoteRank *this, const bdVoteRankStatsInfo *rating, unsigned int *likes, unsigned int *dislikes)
{
  unsigned int m_totalVotes; 

  if ( !rating )
    return 0;
  m_totalVotes = rating->m_totalVotes;
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  *likes = (int)*(float *)&_XMM3;
  *dislikes = m_totalVotes - (int)*(float *)&_XMM3;
  return 1;
}

/*
==============
bdVoteRank::getVoteHistory
==============
*/
bdReference<bdRemoteTask> *bdVoteRank::getVoteHistory(bdVoteRank *this, bdReference<bdRemoteTask> *result, const unsigned __int16 category, bdCategorizedRatingInfo *historicalVotes, const unsigned int offset, const unsigned int maxResults)
{
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v15; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v17; 
  bdTaskByteBuffer *v18; 

  v17 = -2i64;
  v10 = NULL;
  bdHandleAssert(maxResults <= 0x1F4, "BD_VOTERANK_MAX_VOTE_HISTORY >= maxResults", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdvoterank\\bdvoterank.cpp", "bdVoteRank::getVoteHistory", 0x59u, "Max Vote History Exceeded\n");
  result->m_ptr = NULL;
  v11 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v18 = v11;
  if ( v11 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v11, 0x55u, 1);
    v10 = v12;
  }
  buffer.m_ptr = v10;
  if ( v10 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x37u, 3u);
  if ( bdByteBuffer::writeUInt16(buffer.m_ptr, category) && bdByteBuffer::writeUInt32(buffer.m_ptr, offset) && bdByteBuffer::writeUInt32(buffer.m_ptr, maxResults) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v15 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdVoteRank", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdvoterank\\bdvoterank.cpp", "bdVoteRank::getVoteHistory", 0x6Bu, "Failed to start task: Error %i", v15);
    }
    else
    {
      bdRemoteTask::setTaskResult(result->m_ptr, historicalVotes, maxResults);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdVoteRank", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdvoterank\\bdvoterank.cpp", "bdVoteRank::getVoteHistory", 0x74u, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdVoteRank::submitCategorizedRating
==============
*/
bdReference<bdRemoteTask> *bdVoteRank::submitCategorizedRating(bdVoteRank *this, bdReference<bdRemoteTask> *result, bdCategorizedRatingInfo *ratings, const unsigned int numRatings)
{
  __int64 v4; 
  bdTaskByteBuffer *v7; 
  unsigned int v8; 
  bdCategorizedRatingInfo *v9; 
  bdCategorizedRatingInfo *v10; 
  __int64 v11; 
  bdTaskByteBuffer *v12; 
  bdTaskByteBuffer *v13; 
  bdCategorizedRatingInfo_vtbl **v14; 
  bdCategorizedRatingInfo_vtbl **v15; 
  __int64 v16; 
  int v18; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v20; 
  bdTaskByteBuffer *v21; 

  v20 = -2i64;
  v4 = numRatings;
  v7 = NULL;
  v18 = 0;
  bdHandleAssert(numRatings <= 0x14, "BD_VOTERANK_MAX_NUM_VOTES >= numRatings", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdvoterank\\bdvoterank.cpp", "bdVoteRank::submitCategorizedRating", 0x3Eu, "Max Vote Submission Exceeded\n", v18);
  result->m_ptr = NULL;
  v8 = 72;
  if ( (_DWORD)v4 )
  {
    v9 = ratings;
    v10 = ratings;
    v11 = (unsigned int)v4;
    do
    {
      v8 += v9->sizeOf(v10++);
      ++v9;
      --v11;
    }
    while ( v11 );
  }
  v12 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v21 = v12;
  if ( v12 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v12, v8, 1);
    v7 = v13;
  }
  buffer.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x37u, 2u);
  if ( (_DWORD)v4 )
  {
    v14 = &ratings->__vftable + 2;
    v15 = &ratings->__vftable + 2;
    v16 = v4;
    do
    {
      ((void (__fastcall *)(bdCategorizedRatingInfo_vtbl **, bdTaskByteBuffer *))(*v14)->deserialize)(v15, buffer.m_ptr);
      v15 += 9;
      v14 += 9;
      --v16;
    }
    while ( v16 );
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdVoteRank::submitRating
==============
*/
bdReference<bdRemoteTask> *bdVoteRank::submitRating(bdVoteRank *this, bdReference<bdRemoteTask> *result, bdRatingInfo *ratings, const unsigned int numRatings)
{
  __int64 v4; 
  bdTaskByteBuffer *v7; 
  unsigned int v8; 
  bdRatingInfo *v9; 
  bdRatingInfo *v10; 
  __int64 v11; 
  bdTaskByteBuffer *v12; 
  bdTaskByteBuffer *v13; 
  bdRatingInfo_vtbl **v14; 
  bdRatingInfo_vtbl **v15; 
  __int64 v16; 
  int v18; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v20; 
  bdTaskByteBuffer *v21; 

  v20 = -2i64;
  v4 = numRatings;
  v7 = NULL;
  v18 = 0;
  bdHandleAssert(numRatings <= 0x14, "BD_VOTERANK_MAX_NUM_VOTES >= numRatings", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdvoterank\\bdvoterank.cpp", "bdVoteRank::submitRating", 0x25u, "Max Vote Submission Exceeded\n", v18);
  result->m_ptr = NULL;
  v8 = 72;
  if ( (_DWORD)v4 )
  {
    v9 = ratings;
    v10 = ratings;
    v11 = (unsigned int)v4;
    do
    {
      v8 += v9->sizeOf(v10++);
      ++v9;
      --v11;
    }
    while ( v11 );
  }
  v12 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v21 = v12;
  if ( v12 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v12, v8, 1);
    v7 = v13;
  }
  buffer.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x37u, 1u);
  if ( (_DWORD)v4 )
  {
    v14 = &ratings->__vftable + 2;
    v15 = &ratings->__vftable + 2;
    v16 = v4;
    do
    {
      ((void (__fastcall *)(bdRatingInfo_vtbl **, bdTaskByteBuffer *))(*v14)->deserialize)(v15, buffer.m_ptr);
      v15 += 8;
      v14 += 8;
      --v16;
    }
    while ( v16 );
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

