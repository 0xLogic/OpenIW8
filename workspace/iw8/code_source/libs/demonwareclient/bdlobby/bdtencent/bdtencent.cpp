/*
==============
bdTencent::getZoneIDsForUserIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::getZoneIDsForUserIDs(bdTencent *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *userIDs, bdTencentUserIDZoneID *results, const unsigned int numUserIDs)
{
  return ?getZoneIDsForUserIDs@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KQEAVbdTencentUserIDZoneID@@I@Z(this, result, userIDs, results, numUserIDs);
}

/*
==============
bdTencent::claimClientDecidedRewards
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::claimClientDecidedRewards(bdTencent *this, bdReference<bdRemoteTask> *result, const char **eventCode, const unsigned int numRewards)
{
  return ?claimClientDecidedRewards@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAPEBDI@Z(this, result, eventCode, numRewards);
}

/*
==============
bdTencent::getAASRecord
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::getAASRecord(bdTencent *this, bdReference<bdRemoteTask> *result, bdTencentAASRecord *a3)
{
  return ?getAASRecord@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdTencentAASRecord@@@Z(this, result, a3);
}

/*
==============
bdTencent::antibotSendData
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::antibotSendData(bdTencent *this, bdReference<bdRemoteTask> *result, const char *const data, const unsigned int length)
{
  return ?antibotSendData@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDI@Z(this, result, data, length);
}

/*
==============
bdTencent::setAntibotSendDataInterval
==============
*/

void __fastcall bdTencent::setAntibotSendDataInterval(bdTencent *this, const unsigned int interval)
{
  ?setAntibotSendDataInterval@bdTencent@@QEAAXI@Z(this, interval);
}

/*
==============
bdTencent::~bdTencent
==============
*/

void __fastcall bdTencent::~bdTencent(bdTencent *this)
{
  ??1bdTencent@@QEAA@XZ(this);
}

/*
==============
bdTencent::claimRewards
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::claimRewards(bdTencent *this, bdReference<bdRemoteTask> *result)
{
  return ?claimRewards@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdTencent::claimCumulativeReward
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::claimCumulativeReward(bdTencent *this, bdReference<bdRemoteTask> *result, const char *eventCode)
{
  return ?claimCumulativeReward@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD@Z(this, result, eventCode);
}

/*
==============
bdTencent::makeTSSQuery
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::makeTSSQuery(bdTencent *this, bdReference<bdRemoteTask> *result, const bdTencent::bdTSSQueryType queryType, const unsigned int clientVersion)
{
  return ?makeTSSQuery@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@W4bdTSSQueryType@1@I@Z(this, result, queryType, clientVersion);
}

/*
==============
bdTencent::bdTencent
==============
*/

void __fastcall bdTencent::bdTencent(bdTencent *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdTencent@@QEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdTencent::redeemNameChange
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::redeemNameChange(bdTencent *this, bdReference<bdRemoteTask> *result, const unsigned int itemID, const char *const desiredName, const unsigned int desiredNameLength)
{
  return ?redeemNameChange@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEBDI@Z(this, result, itemID, desiredName, desiredNameLength);
}

/*
==============
bdTencent::tlogBatchSendCompressed
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::tlogBatchSendCompressed(bdTencent *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *const compressedStr, unsigned int length)
{
  return ?tlogBatchSendCompressed@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBEI@Z(this, result, compressedStr, length);
}

/*
==============
bdTencent::registerCodoID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::registerCodoID(bdTencent *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *codoID, const unsigned __int8 *codoIDSignature, unsigned int clientVersion, const unsigned __int8 *extraData, const unsigned int extraDataLen, const unsigned __int8 *loginSignature, const unsigned int loginSignatureLen, const char *const macAddr)
{
  return ?registerCodoID@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBE0I0I0IQEBD@Z(this, result, codoID, codoIDSignature, clientVersion, extraData, extraDataLen, loginSignature, loginSignatureLen, macAddr);
}

/*
==============
bdTencent::getClientDecidedRewards
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::getClientDecidedRewards(bdTencent *this, bdReference<bdRemoteTask> *result, bdTencentClientDecidedRewardRequest *request, bdTencentClientDecidedRewardResponse *response)
{
  return ?getClientDecidedRewards@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdTencentClientDecidedRewardRequest@@PEAVbdTencentClientDecidedRewardResponse@@@Z(this, result, request, response);
}

/*
==============
bdTencent::tLog
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::tLog(bdTencent *this, bdReference<bdRemoteTask> *result, const char *const str, unsigned int length)
{
  return ?tLog@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDI@Z(this, result, str, length);
}

/*
==============
bdTencent::sendTLog
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::sendTLog(bdTencent *this, bdReference<bdRemoteTask> *result, const char *const str, unsigned int length, bool batched)
{
  return ?sendTLog@bdTencent@@AEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDI_N@Z(this, result, str, length, batched);
}

/*
==============
bdTencent::getAASRecordsByUserID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::getAASRecordsByUserID(bdTencent *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *userIDs, const unsigned int numUserIDs, bdTencentAASRecord *results)
{
  return ?getAASRecordsByUserID@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KIQEAVbdTencentAASRecord@@@Z(this, result, userIDs, numUserIDs, results);
}

/*
==============
bdTencent::getCumulativeRewards
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::getCumulativeRewards(bdTencent *this, bdReference<bdRemoteTask> *result, bdTencentCumulativeReward *results, const unsigned int maxNumResults)
{
  return ?getCumulativeRewards@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdTencentCumulativeReward@@I@Z(this, result, results, maxNumResults);
}

/*
==============
bdTencent::tLogBatchSend
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::tLogBatchSend(bdTencent *this, bdReference<bdRemoteTask> *result, const char *const str, unsigned int length)
{
  return ?tLogBatchSend@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDI@Z(this, result, str, length);
}

/*
==============
bdTencent::sanitizeString
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::sanitizeString(bdTencent *this, bdReference<bdRemoteTask> *result, const char *const str, const unsigned int length, bdSanitizedString *verified)
{
  return ?sanitizeString@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIPEAVbdSanitizedString@@@Z(this, result, str, length, verified);
}

/*
==============
bdTencent::antibotSendDataImmediately
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::antibotSendDataImmediately(bdTencent *this, bdReference<bdRemoteTask> *result, const char *const data, const unsigned int length)
{
  return ?antibotSendDataImmediately@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDI@Z(this, result, data, length);
}

/*
==============
bdTencent::verifyString
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::verifyString(bdTencent *this, bdReference<bdRemoteTask> *result, const char *const str, const unsigned int length, bdVerifyString *verified)
{
  return ?verifyString@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIPEAVbdVerifyString@@@Z(this, result, str, length, verified);
}

/*
==============
bdTencent::doLogoff
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::doLogoff(bdTencent *this, bdReference<bdRemoteTask> *result, const unsigned int offlineReason)
{
  return ?doLogoff@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I@Z(this, result, offlineReason);
}

/*
==============
bdTencent::redeemTeamNameChange
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTencent::redeemTeamNameChange(bdTencent *this, bdReference<bdRemoteTask> *result, bdTencentRedeemTeamNameChangeRequest *request)
{
  return ?redeemTeamNameChange@bdTencent@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdTencentRedeemTeamNameChangeRequest@@@Z(this, result, request);
}

/*
==============
bdTencent::bdTencent
==============
*/
void bdTencent::bdTencent(bdTencent *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
  this->m_antibotSendInterval = 30;
  this->m_antibotLastMessageTime = bdPlatformTiming::getLoResTimeStamp();
  this->m_antibotBatchBuffer[0] = 0;
  this->m_antibotBatchTotalSize = 0i64;
}

/*
==============
bdTencent::~bdTencent
==============
*/
void bdTencent::~bdTencent(bdTencent *this)
{
  ;
}

/*
==============
bdTencent::antibotSendData
==============
*/
bdReference<bdRemoteTask> *bdTencent::antibotSendData(bdTencent *this, bdReference<bdRemoteTask> *result, const char *const data, const unsigned int length)
{
  bdRemoteTask *v6; 
  bdRemoteTask *m_ptr; 
  __int64 v8; 
  char *m_antibotBatchBuffer; 
  unsigned __int64 v10; 
  char *v11; 
  size_t v12; 
  __int64 v13; 
  char *v14; 
  unsigned __int64 v15; 
  char *v16; 
  unsigned __int64 v17; 
  size_t v18; 
  bdFinishedTask *v19; 
  bdRemoteTask *v20; 
  signed __int32 v21; 
  bdLobbyErrorCode started; 
  bdRemoteTask *v23; 
  bdReference<bdRemoteTask> newTask; 
  bdReference<bdRemoteTask> *v26; 
  unsigned int LoResElapsedTime; 
  unsigned int LoResTimeStamp; 
  __int64 v29; 
  bdTaskParams taskParams; 
  char dest[43696]; 

  v29 = -2i64;
  v26 = result;
  v6 = NULL;
  newTask.m_ptr = NULL;
  if ( !this->m_antibotSendInterval )
  {
    this->m_antibotBatchTotalSize = 0i64;
    result->m_ptr = NULL;
    return result;
  }
  if ( length > 0x8000 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::antibotSendData", 0x139u, "Tencent antibot data too large.");
    result->m_ptr = NULL;
    m_ptr = newTask.m_ptr;
    if ( !newTask.m_ptr )
      return result;
    goto LABEL_55;
  }
  bdBase64::encode(data, length, dest, 0xAAADu);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v8 = -1i64;
  do
    ++v8;
  while ( dest[v8] );
  if ( this->m_antibotBatchTotalSize + v8 + 1 > 0x50000 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::antibotSendData", 0x147u, "Tencent antibot data batch buffer overflow.");
    result->m_ptr = NULL;
    goto LABEL_54;
  }
  LoResTimeStamp = bdPlatformTiming::getLoResTimeStamp();
  LoResElapsedTime = bdPlatformTiming::getLoResElapsedTime(this->m_antibotLastMessageTime, LoResTimeStamp);
  if ( this->m_antibotBatchTotalSize )
  {
    m_antibotBatchBuffer = this->m_antibotBatchBuffer;
    bdHandleAssert(this->m_antibotBatchBuffer != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v10 = -1i64;
    do
      ++v10;
    while ( m_antibotBatchBuffer[v10] );
    if ( v10 >= 0x4FFFF )
    {
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v13 = -1i64;
      do
        ++v13;
      while ( Delimiter[v13] );
    }
    else
    {
      v26 = (bdReference<bdRemoteTask> *)(327680 - v10);
      v11 = &m_antibotBatchBuffer[v10];
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( 327680 != v10 && v11 )
      {
        v12 = 1i64;
        if ( (unsigned __int64)&v26[-1].m_ptr + 7 <= 1 )
          v12 = (size_t)&v26[-1].m_ptr + 7;
        memcpy_0(v11, "|", v12);
        v11[v12] = 0;
      }
      v13 = 1i64;
    }
    this->m_antibotBatchTotalSize = v10 + v13;
  }
  v14 = this->m_antibotBatchBuffer;
  bdHandleAssert(this->m_antibotBatchBuffer != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v15 = -1i64;
  do
    ++v15;
  while ( v14[v15] );
  if ( v15 >= 0x4FFFF )
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v17 = -1i64;
    do
      ++v17;
    while ( dest[v17] );
  }
  else
  {
    v26 = (bdReference<bdRemoteTask> *)(327680 - v15);
    v16 = &v14[v15];
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v17 = -1i64;
    do
      ++v17;
    while ( dest[v17] );
    if ( v26 && v16 )
    {
      v18 = v17;
      if ( v17 >= (unsigned __int64)&v26[-1].m_ptr + 7 )
        v18 = (size_t)&v26[-1].m_ptr + 7;
      memcpy_0(&this->m_antibotBatchBuffer[v15], dest, v18);
      this->m_antibotBatchBuffer[v15 + v18] = 0;
    }
  }
  this->m_antibotBatchTotalSize = v17 + v15;
  if ( LoResElapsedTime >= this->m_antibotSendInterval )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::antibotSendData", 0x163u, "Tencent antibot data batch is being sent.");
    bdTaskParams::bdTaskParams(&taskParams, 0x47u, 8u, 0x400u, 0xFFFFu);
    bdBufferParams::addString(&taskParams, this->m_antibotBatchBuffer, 0x50000ui64);
    this->m_antibotBatchBuffer[0] = 0;
    this->m_antibotBatchTotalSize = 0i64;
    this->m_antibotLastMessageTime = LoResTimeStamp;
    if ( bdBufferParams::serializedOk(&taskParams) )
    {
      started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, &newTask, &taskParams);
      if ( started )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::antibotSendData", 0x174u, "Failed to start task: Error %i", started);
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::antibotSendData", 0x179u, "Failed to write antibot data into buffer");
    }
    v23 = newTask.m_ptr;
    result->m_ptr = newTask.m_ptr;
    if ( v23 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v23->m_refCount, 1u);
    bdTaskParams::~bdTaskParams(&taskParams);
LABEL_54:
    m_ptr = newTask.m_ptr;
    if ( !newTask.m_ptr )
      return result;
LABEL_55:
    v21 = _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF);
    goto LABEL_56;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::antibotSendData", 0x15Eu, "Tencent antibot data batched for later.");
  v19 = (bdFinishedTask *)bdMemory::allocate(0x68ui64);
  v26 = (bdReference<bdRemoteTask> *)v19;
  if ( v19 )
  {
    bdFinishedTask::bdFinishedTask(v19, BD_DONE);
    v6 = v20;
  }
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdRemoteTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  newTask.m_ptr = v6;
  if ( v6 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
    v6 = newTask.m_ptr;
  }
  result->m_ptr = v6;
  if ( v6 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
    v6 = newTask.m_ptr;
  }
  if ( v6 )
  {
    v21 = _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 0xFFFFFFFF);
LABEL_56:
    if ( v21 == 1 && newTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  }
  return result;
}

/*
==============
bdTencent::antibotSendDataImmediately
==============
*/
bdReference<bdRemoteTask> *bdTencent::antibotSendDataImmediately(bdTencent *this, bdReference<bdRemoteTask> *result, const char *const data, const unsigned int length)
{
  unsigned int m_antibotLastMessageTime; 
  bdReference<bdRemoteTask> *v7; 

  m_antibotLastMessageTime = this->m_antibotLastMessageTime;
  this->m_antibotLastMessageTime = 0;
  bdTencent::antibotSendData(this, result, data, length);
  v7 = result;
  if ( !result->m_ptr )
    this->m_antibotLastMessageTime = m_antibotLastMessageTime;
  return v7;
}

/*
==============
bdTencent::claimClientDecidedRewards
==============
*/
bdReference<bdRemoteTask> *bdTencent::claimClientDecidedRewards(bdTencent *this, bdReference<bdRemoteTask> *result, const char **eventCode, const unsigned int numRewards)
{
  __int64 v4; 
  _BOOL8 v8; 
  bool v9; 
  bdLobbyErrorCode started; 
  bdRemoteTask *m_ptr; 
  __int64 v13; 
  bdReference<bdRemoteTask> newTask; 
  __int64 v15; 
  bdTaskParams taskParams; 

  v15 = -2i64;
  v4 = numRewards;
  bdTaskParams::bdTaskParams(&taskParams, 0x47u, 0xBu, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v8) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v4), taskParams.m_serializeOk = 1, !v9) )
      taskParams.m_serializeOk = 0;
  }
  if ( (_DWORD)v4 )
  {
    do
    {
      bdBufferParams::addString(&taskParams, *eventCode++, 0x2Dui64);
      --v4;
    }
    while ( v4 );
  }
  if ( (taskParams.m_isWritingArray || taskParams.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", taskParams.m_arrayWriteCount), taskParams.m_isWritingArray) || taskParams.m_arrayWriteCount) || !taskParams.m_serializeOk || !taskParams.m_buffer.m_ptr || !taskParams.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::claimClientDecidedRewards", 0x1E1u, "Failed to serialize the task buffer.");
    result->m_ptr = NULL;
  }
  else
  {
    newTask.m_ptr = NULL;
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, &newTask, &taskParams);
    if ( started )
    {
      LODWORD(v13) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::claimClientDecidedRewards", 0x1DBu, "Failed to start task: Error %i", v13);
    }
    m_ptr = newTask.m_ptr;
    result->m_ptr = newTask.m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = newTask.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( newTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
      newTask.m_ptr = NULL;
    }
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTencent::claimCumulativeReward
==============
*/
bdReference<bdRemoteTask> *bdTencent::claimCumulativeReward(bdTencent *this, bdReference<bdRemoteTask> *result, const char *eventCode)
{
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v8; 
  bdTaskParams v9; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v9, 0x47u, 0xEu, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v9, eventCode, 0x2Dui64);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v9);
  if ( started )
  {
    v8 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::claimCumulativeReward", 0x209u, "Failed to start task: Error %i", v8);
  }
  bdTaskParams::~bdTaskParams(&v9);
  return result;
}

/*
==============
bdTencent::claimRewards
==============
*/
bdReference<bdRemoteTask> *bdTencent::claimRewards(bdTencent *this, bdReference<bdRemoteTask> *result)
{
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v6; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x47u, 0xAu, 0x400u, 0xFFFFu);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v6 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::claimRewards", 0x1C6u, "Failed to start task: Error %i", v6);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTencent::doLogoff
==============
*/
bdReference<bdRemoteTask> *bdTencent::doLogoff(bdTencent *this, bdReference<bdRemoteTask> *result, const unsigned int offlineReason)
{
  _BOOL8 v6; 
  bool v7; 
  bdLobbyErrorCode started; 
  __int64 v10; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x47u, 9u, 0x400u, 0xFFFFu);
  LOBYTE(v6) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v6) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v7 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, offlineReason), taskParams.m_serializeOk = 1, !v7) )
      taskParams.m_serializeOk = 0;
  }
  if ( (taskParams.m_isWritingArray || taskParams.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", taskParams.m_arrayWriteCount), taskParams.m_isWritingArray) || taskParams.m_arrayWriteCount) || !taskParams.m_serializeOk || !taskParams.m_buffer.m_ptr || !taskParams.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::doLogoff", 0x1A4u, "Failed to serialize the task buffer.");
  }
  else
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    if ( started )
    {
      LODWORD(v10) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::doLogoff", 0x19Fu, "Failed to start task: Error %i", v10);
    }
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTencent::getAASRecord
==============
*/
bdReference<bdRemoteTask> *bdTencent::getAASRecord(bdTencent *this, bdReference<bdRemoteTask> *result, bdTencentAASRecord *a3)
{
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x47u, 5u, 0x400u, 0xFFFFu);
  if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
  {
    taskParams.m_taskResults = a3;
    taskParams.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::getAASRecord", 0x62u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTencent::getAASRecordsByUserID
==============
*/
bdReference<bdRemoteTask> *bdTencent::getAASRecordsByUserID(bdTencent *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *userIDs, const unsigned int numUserIDs, bdTencentAASRecord *results)
{
  __int64 v5; 
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  v5 = numUserIDs;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x47u, 6u, 0x400u, 0xFFFFu);
  if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
  {
    taskParams.m_taskResults = results;
    taskParams.m_maxResults = v5;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
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
      LOBYTE(v10) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v10) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *userIDs), taskParams.m_serializeOk = 1, !v12) )
          taskParams.m_serializeOk = 0;
      }
      ++userIDs;
      --v5;
    }
    while ( v5 );
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::getAASRecordsByUserID", 0x78u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTencent::getClientDecidedRewards
==============
*/
bdReference<bdRemoteTask> *bdTencent::getClientDecidedRewards(bdTencent *this, bdReference<bdRemoteTask> *result, bdTencentClientDecidedRewardRequest *request, bdTencentClientDecidedRewardResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v8; 
  bdReference<bdStructBufferTask> v9; 

  v9.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v9, 0x47u, 0x11u, request, response, NULL);
  if ( started )
  {
    v8 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::getClientDecidedRewards", 0x1B7u, "Failed to start getClientDecidedRewards task: Error %d", v8);
  }
  m_ptr = v9.m_ptr;
  result->m_ptr = v9.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = v9.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v9.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))v9.m_ptr->~bdReferencable)(v9.m_ptr, 1i64);
  return result;
}

/*
==============
bdTencent::getCumulativeRewards
==============
*/
bdReference<bdRemoteTask> *bdTencent::getCumulativeRewards(bdTencent *this, bdReference<bdRemoteTask> *result, bdTencentCumulativeReward *results, const unsigned int maxNumResults)
{
  _BOOL8 v8; 
  bool v9; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x47u, 0xDu, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v8) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumResults), taskParams.m_serializeOk = 1, !v9) )
      taskParams.m_serializeOk = 0;
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = results;
    taskParams.m_maxResults = maxNumResults;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::getCumulativeRewards", 0x1F6u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTencent::getZoneIDsForUserIDs
==============
*/
bdReference<bdRemoteTask> *bdTencent::getZoneIDsForUserIDs(bdTencent *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *userIDs, bdTencentUserIDZoneID *results, const unsigned int numUserIDs)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  __int64 v12; 
  bool v13; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x47u, 0x13u, 0x400u, 0xFFFFu);
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numUserIDs), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  if ( numUserIDs )
  {
    v12 = numUserIDs;
    do
    {
      LOBYTE(v10) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v10) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *userIDs), taskParams.m_serializeOk = 1, !v13) )
          taskParams.m_serializeOk = 0;
      }
      ++userIDs;
      --v12;
    }
    while ( v12 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = results;
    taskParams.m_maxResults = numUserIDs;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::getZoneIDsForUserIDs", 0x26Eu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTencent::makeTSSQuery
==============
*/
bdReference<bdRemoteTask> *bdTencent::makeTSSQuery(bdTencent *this, bdReference<bdRemoteTask> *result, const bdTencent::bdTSSQueryType queryType, const unsigned int clientVersion)
{
  _BOOL8 v8; 
  _BOOL8 v9; 
  bool v10; 
  bool v11; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v14; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x47u, 0x12u, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v8) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, queryType), taskParams.m_serializeOk = 1, !v10) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, clientVersion), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v14 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::makeTSSQuery", 0x259u, "Failed to start task: Error %i", v14);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTencent::redeemNameChange
==============
*/
bdReference<bdRemoteTask> *bdTencent::redeemNameChange(bdTencent *this, bdReference<bdRemoteTask> *result, const unsigned int itemID, const char *const desiredName, const unsigned int desiredNameLength)
{
  __int64 v9; 
  _BOOL8 v10; 
  bool v11; 
  bdLobbyErrorCode started; 
  bdRemoteTask *m_ptr; 
  bdLobbyErrorCode v15; 
  bdTaskParams taskParams; 
  bdReference<bdRemoteTask> newTask; 

  bdHandleAssert(desiredName != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v9 = -1i64;
  do
    ++v9;
  while ( desiredName[v9] );
  if ( desiredNameLength != (_DWORD)v9 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::redeemNameChange", 0x21Du, "Desired Name actual and provided lengths do not match.");
LABEL_25:
    result->m_ptr = NULL;
    return result;
  }
  if ( (unsigned int)(v9 - 1) > 0x3F )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::redeemNameChange", 0x223u, "Desired name for name change is an invalid length.");
    goto LABEL_25;
  }
  bdTaskParams::bdTaskParams(&taskParams, 0x47u, 0xCu, 0x400u, 0xFFFFu);
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, itemID), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  bdBufferParams::addString(&taskParams, desiredName, 0x40ui64);
  if ( bdBufferParams::serializedOk(&taskParams) )
  {
    newTask.m_ptr = NULL;
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, &newTask, &taskParams);
    if ( started )
    {
      v15 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::redeemNameChange", 0x231u, "Failed to start task: Error %i", v15);
    }
    m_ptr = newTask.m_ptr;
    result->m_ptr = newTask.m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = newTask.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( newTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
      newTask.m_ptr = NULL;
    }
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::redeemNameChange", 0x237u, "Failed to serialize the task buffer.");
    result->m_ptr = NULL;
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTencent::redeemTeamNameChange
==============
*/
bdReference<bdRemoteTask> *bdTencent::redeemTeamNameChange(bdTencent *this, bdReference<bdRemoteTask> *result, bdTencentRedeemTeamNameChangeRequest *request)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v7; 
  bdReference<bdStructBufferTask> v8; 

  v8.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v8, 0x47u, 0x10u, request, NULL, NULL);
  if ( started )
  {
    v7 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::redeemTeamNameChange", 0x247u, "Failed to start team name change task: Error %i", v7);
  }
  m_ptr = v8.m_ptr;
  result->m_ptr = v8.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = v8.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v8.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))v8.m_ptr->~bdReferencable)(v8.m_ptr, 1i64);
  return result;
}

/*
==============
bdTencent::registerCodoID
==============
*/
bdReference<bdRemoteTask> *bdTencent::registerCodoID(bdTencent *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *codoID, const unsigned __int8 *codoIDSignature, unsigned int clientVersion, const unsigned __int8 *extraData, const unsigned int extraDataLen, const unsigned __int8 *loginSignature, const unsigned int loginSignatureLen, const char *const macAddr)
{
  unsigned int v14; 
  _BOOL8 v15; 
  bool v16; 
  unsigned int v17; 
  const char *v18; 
  bdLobbyErrorCode started; 
  bdRemoteTask *m_ptr; 
  __int64 v22; 
  bdReference<bdRemoteTask> newTask; 
  __int64 v24; 
  bdTaskParams taskParams; 

  v24 = -2i64;
  v14 = 0;
  newTask.m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x47u, 4u, 0x400u, 0xFFFFu);
  bdBufferParams::addBlob(&taskParams, codoID, 0x10u);
  if ( (taskParams.m_isWritingArray || taskParams.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", taskParams.m_arrayWriteCount), taskParams.m_isWritingArray) || taskParams.m_arrayWriteCount) || !taskParams.m_serializeOk || !taskParams.m_buffer.m_ptr || !taskParams.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::registerCodoID", 0x8Cu, "Could not write codoID to task buffer");
  }
  else
  {
    bdBufferParams::addBlob(&taskParams, codoIDSignature, 0x10u);
    if ( bdBufferParams::serializedOk(&taskParams) )
    {
      LOBYTE(v15) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v15) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, clientVersion), taskParams.m_serializeOk = 1, !v16) )
          taskParams.m_serializeOk = 0;
      }
      if ( bdBufferParams::serializedOk(&taskParams) )
      {
        v17 = 0;
        if ( extraDataLen )
          v17 = extraDataLen;
        bdBufferParams::addBlob(&taskParams, extraData, v17);
        if ( bdBufferParams::serializedOk(&taskParams) )
        {
          if ( loginSignatureLen )
            v14 = loginSignatureLen;
          bdBufferParams::addBlob(&taskParams, loginSignature, v14);
          if ( bdBufferParams::serializedOk(&taskParams) )
          {
            v18 = macAddr;
            if ( !macAddr )
              v18 = (char *)&queryFormat.fmt + 3;
            bdBufferParams::addString(&taskParams, v18, 0x12ui64);
            if ( bdBufferParams::serializedOk(&taskParams) )
            {
              started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, &newTask, &taskParams);
              if ( started )
              {
                LODWORD(v22) = started;
                bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::registerCodoID", 0xC0u, "Failed to start registerCodoID task: Error %i", v22);
              }
            }
            else
            {
              bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::registerCodoID", 0xB9u, "Could not write MAC Address to registerCodoID data");
            }
          }
          else
          {
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::registerCodoID", 0xAAu, "Could not write login signature to registerCodoID data");
          }
        }
        else
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::registerCodoID", 0xA3u, "Could not write extra registerCodoID data");
        }
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::registerCodoID", 0x9Au, "Could not write client version to task buffer");
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::registerCodoID", 0x93u, "Could not write codoID signature to task buffer");
    }
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdTaskParams::~bdTaskParams(&taskParams);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdTencent::sanitizeString
==============
*/
bdReference<bdRemoteTask> *bdTencent::sanitizeString(bdTencent *this, bdReference<bdRemoteTask> *result, const char *const str, const unsigned int length, bdSanitizedString *verified)
{
  unsigned __int64 v5; 
  bdLobbyErrorCode started; 
  __int64 v11; 
  bdTaskParams v12; 

  v5 = length;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v12, 0x47u, 2u, 0x400u, 0xFFFFu);
  if ( *(_OWORD *)&v12.m_taskResults == 0i64 )
  {
    v12.m_taskResults = verified;
    v12.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v12.m_serializeOk = 0;
  }
  bdBufferParams::addString(&v12, str, v5);
  if ( (v12.m_isWritingArray || v12.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", v12.m_arrayWriteCount), v12.m_isWritingArray) || v12.m_arrayWriteCount) || !v12.m_serializeOk || !v12.m_buffer.m_ptr || !v12.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::sanitizeString", 0x54u, "Failed to write string %s into buffer", str);
  }
  else
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v12);
    if ( started )
    {
      LODWORD(v11) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::sanitizeString", 0x4Fu, "Failed to start task: Error %i", v11);
    }
  }
  bdTaskParams::~bdTaskParams(&v12);
  return result;
}

/*
==============
bdTencent::sendTLog
==============
*/
bdReference<bdRemoteTask> *bdTencent::sendTLog(bdTencent *this, bdReference<bdRemoteTask> *result, const char *const str, unsigned int length, bool batched)
{
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v11; 
  int v13; 
  bdTaskParams v14; 

  result->m_ptr = NULL;
  if ( length > 0x2000 )
  {
    v13 = 0x2000;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::sendTLog", 0x116u, "Failed to send message to TLog: string length (%u) exceeds BD_TENCENT_TLOG_MAX_LENGTH (%u)", length, v13);
  }
  else
  {
    bdTaskParams::bdTaskParams(&v14, 0x47u, 4 * !batched + 3, 0x400u, 0xFFFFu);
    bdBufferParams::addString(&v14, str, length + 1);
    if ( bdBufferParams::serializedOk(&v14) )
    {
      started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v14);
      if ( started )
      {
        v11 = started;
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::sendTLog", 0x109u, "Failed to start task: Error %i", v11);
      }
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::sendTLog", 0x10Eu, "Failed to write string %s into buffer", str);
    }
    bdTaskParams::~bdTaskParams(&v14);
  }
  return result;
}

/*
==============
bdTencent::setAntibotSendDataInterval
==============
*/
void bdTencent::setAntibotSendDataInterval(bdTencent *this, const unsigned int interval)
{
  this->m_antibotSendInterval = interval;
}

/*
==============
bdTencent::tLog
==============
*/
bdReference<bdRemoteTask> *bdTencent::tLog(bdTencent *this, bdReference<bdRemoteTask> *result, const char *const str, unsigned int length)
{
  bdTencent::sendTLog(this, result, str, length, 0);
  return result;
}

/*
==============
bdTencent::tLogBatchSend
==============
*/
bdReference<bdRemoteTask> *bdTencent::tLogBatchSend(bdTencent *this, bdReference<bdRemoteTask> *result, const char *const str, unsigned int length)
{
  bdTencent::sendTLog(this, result, str, length, 1);
  return result;
}

/*
==============
bdTencent::tlogBatchSendCompressed
==============
*/
bdReference<bdRemoteTask> *bdTencent::tlogBatchSendCompressed(bdTencent *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *const compressedStr, unsigned int length)
{
  bdLobbyErrorCode started; 
  __int64 v10; 
  bdTaskParams v11; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v11, 0x47u, 0xFu, 0x400u, 0xFFFFu);
  bdBufferParams::addBlob(&v11, compressedStr, length);
  if ( (v11.m_isWritingArray || v11.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", v11.m_arrayWriteCount), v11.m_isWritingArray) || v11.m_arrayWriteCount) || !v11.m_serializeOk || !v11.m_buffer.m_ptr || !v11.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::tlogBatchSendCompressed", 0xE9u, "Could not write compressed TLogs to buffer");
  }
  else
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v11);
    if ( started )
    {
      LODWORD(v10) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::tlogBatchSendCompressed", 0xE4u, "Failed to start task: Error %i", v10);
    }
  }
  bdTaskParams::~bdTaskParams(&v11);
  return result;
}

/*
==============
bdTencent::verifyString
==============
*/
bdReference<bdRemoteTask> *bdTencent::verifyString(bdTencent *this, bdReference<bdRemoteTask> *result, const char *const str, const unsigned int length, bdVerifyString *verified)
{
  unsigned __int64 v5; 
  bdLobbyErrorCode started; 
  __int64 v11; 
  bdTaskParams v12; 

  v5 = length;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v12, 0x47u, 1u, 0x400u, 0xFFFFu);
  if ( *(_OWORD *)&v12.m_taskResults == 0i64 )
  {
    v12.m_taskResults = verified;
    v12.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v12.m_serializeOk = 0;
  }
  bdBufferParams::addString(&v12, str, v5);
  if ( (v12.m_isWritingArray || v12.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", v12.m_arrayWriteCount), v12.m_isWritingArray) || v12.m_arrayWriteCount) || !v12.m_serializeOk || !v12.m_buffer.m_ptr || !v12.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::verifyString", 0x3Bu, "Failed to write string %s into buffer", str);
  }
  else
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v12);
    if ( started )
    {
      LODWORD(v11) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdTencent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtencent\\bdtencent.cpp", "bdTencent::verifyString", 0x36u, "Failed to start task: Error %i", v11);
    }
  }
  bdTaskParams::~bdTaskParams(&v12);
  return result;
}

