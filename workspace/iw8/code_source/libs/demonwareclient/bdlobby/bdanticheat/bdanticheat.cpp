/*
==============
bdAntiCheat::reportExtendedAuthInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAntiCheat::reportExtendedAuthInfo(bdAntiCheat *this, bdReference<bdRemoteTask> *result, unsigned int gameMode, unsigned int gameVersion, unsigned __int64 checksum, const bdMACAddr *macAddress, unsigned __int64 internalAddr, unsigned __int64 externalAddr, const bdExtendedAuthInfo *extendedAuthInfo, const bdAntiCheat::bdAntiCheatTrialStatus trialStatus)
{
  return ?reportExtendedAuthInfo@bdAntiCheat@@QEAA?AV?$bdReference@VbdRemoteTask@@@@II_KAEBVbdMACAddr@@00PEBVbdExtendedAuthInfo@@W4bdAntiCheatTrialStatus@1@@Z(this, result, gameMode, gameVersion, checksum, macAddress, internalAddr, externalAddr, extendedAuthInfo, trialStatus);
}

/*
==============
bdAntiCheat::~bdAntiCheat
==============
*/

void __fastcall bdAntiCheat::~bdAntiCheat(bdAntiCheat *this)
{
  ??1bdAntiCheat@@QEAA@XZ(this);
}

/*
==============
bdAntiCheat::bdAntiCheat
==============
*/

void __fastcall bdAntiCheat::bdAntiCheat(bdAntiCheat *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdAntiCheat@@QEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdAntiCheat::answerChallenges
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAntiCheat::answerChallenges(bdAntiCheat *this, bdReference<bdRemoteTask> *result, const bdAntiCheatResponses *responses)
{
  return ?answerChallenges@bdAntiCheat@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdAntiCheatResponses@@@Z(this, result, responses);
}

/*
==============
bdAntiCheat::reportConsoleDetails
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAntiCheat::reportConsoleDetails(bdAntiCheat *this, bdReference<bdRemoteTask> *result, unsigned int gameMode, unsigned int gameVersion, unsigned __int64 checksum, const bdMACAddr *macAddress, unsigned __int64 internalAddr, unsigned __int64 externalAddr, const bdConsoleID *consoleID)
{
  return ?reportConsoleDetails@bdAntiCheat@@QEAA?AV?$bdReference@VbdRemoteTask@@@@II_KAEBVbdMACAddr@@00PEBVbdConsoleID@@@Z(this, result, gameMode, gameVersion, checksum, macAddress, internalAddr, externalAddr, consoleID);
}

/*
==============
bdAntiCheat::reportExtendedAuthInfoTask
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAntiCheat::reportExtendedAuthInfoTask(bdAntiCheat *this, bdReference<bdRemoteTask> *result, const unsigned __int8 taskID, unsigned int gameMode, unsigned int gameVersion, unsigned __int64 checksum, const bdMACAddr *macAddress, unsigned __int64 internalAddr, unsigned __int64 externalAddr, const bdExtendedAuthInfo *extendedAuthInfo, const bdAntiCheat::bdAntiCheatTrialStatus trialStatus)
{
  return ?reportExtendedAuthInfoTask@bdAntiCheat@@IEAA?AV?$bdReference@VbdRemoteTask@@@@EII_KAEBVbdMACAddr@@00PEBVbdExtendedAuthInfo@@W4bdAntiCheatTrialStatus@1@@Z(this, result, taskID, gameMode, gameVersion, checksum, macAddress, internalAddr, externalAddr, extendedAuthInfo, trialStatus);
}

/*
==============
bdAntiCheat::answerTOTPChallenge
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAntiCheat::answerTOTPChallenge(bdAntiCheat *this, bdReference<bdRemoteTask> *result, unsigned int totpCode)
{
  return ?answerTOTPChallenge@bdAntiCheat@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I@Z(this, result, totpCode);
}

/*
==============
bdAntiCheat::reportBNetSessionToken
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAntiCheat::reportBNetSessionToken(bdAntiCheat *this, bdReference<bdRemoteTask> *result, const char *sessionToken)
{
  return ?reportBNetSessionToken@bdAntiCheat@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD@Z(this, result, sessionToken);
}

/*
==============
bdAntiCheat::reportExtendedAuthInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAntiCheat::reportExtendedAuthInfo(bdAntiCheat *this, bdReference<bdRemoteTask> *result, unsigned int gameMode, unsigned int gameVersion, unsigned __int64 checksum, const bdMACAddr *macAddress, unsigned __int64 internalAddr, unsigned __int64 externalAddr, const bdExtendedAuthInfo *extendedAuthInfo)
{
  return ?reportExtendedAuthInfo@bdAntiCheat@@QEAA?AV?$bdReference@VbdRemoteTask@@@@II_KAEBVbdMACAddr@@00PEBVbdExtendedAuthInfo@@@Z(this, result, gameMode, gameVersion, checksum, macAddress, internalAddr, externalAddr, extendedAuthInfo);
}

/*
==============
bdAntiCheat::reportConsoleID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAntiCheat::reportConsoleID(bdAntiCheat *this, bdReference<bdRemoteTask> *result, const bdConsoleID *consoleID)
{
  return ?reportConsoleID@bdAntiCheat@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdConsoleID@@@Z(this, result, consoleID);
}

/*
==============
bdAntiCheat::bdAntiCheat
==============
*/
void bdAntiCheat::bdAntiCheat(bdAntiCheat *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdAntiCheat::~bdAntiCheat
==============
*/
void bdAntiCheat::~bdAntiCheat(bdAntiCheat *this)
{
  ;
}

/*
==============
bdAntiCheat::answerChallenges
==============
*/
bdReference<bdRemoteTask> *bdAntiCheat::answerChallenges(bdAntiCheat *this, bdReference<bdRemoteTask> *result, const bdAntiCheatResponses *responses)
{
  bdLobbyErrorCode started; 
  __int64 v8; 
  bdTaskParams v9; 
  bdReference<bdTaskByteBuffer> queryParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v9, 0x26u, 2u, 0x400u, 0xFFFFu);
  bdBufferParams::addSerializable(&v9, responses);
  if ( !v9.m_serializeOk )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::getTaskBuffer", 0x13u, "Failed to serialize one or more task parameters.");
  queryParams.m_ptr = v9.m_taskBuffer.m_ptr;
  if ( v9.m_taskBuffer.m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9.m_taskBuffer.m_ptr->m_refCount, 1u);
  if ( (v9.m_isWritingArray || v9.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", v9.m_arrayWriteCount), v9.m_isWritingArray) || v9.m_arrayWriteCount) || !v9.m_serializeOk || !v9.m_buffer.m_ptr || !v9.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::answerChallenges", 0x3Du, "Failed to serialize the task buffer.");
  }
  else
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &queryParams);
    if ( started )
    {
      LODWORD(v8) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::answerChallenges", 0x38u, "Failed to start task: Error %i", v8);
    }
  }
  if ( queryParams.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&queryParams.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( queryParams.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))queryParams.m_ptr->~bdReferencable)(queryParams.m_ptr, 1i64);
    queryParams.m_ptr = NULL;
  }
  bdTaskParams::~bdTaskParams(&v9);
  return result;
}

/*
==============
bdAntiCheat::answerTOTPChallenge
==============
*/
bdReference<bdRemoteTask> *bdAntiCheat::answerTOTPChallenge(bdAntiCheat *this, bdReference<bdRemoteTask> *result, unsigned int totpCode)
{
  _BOOL8 v6; 
  bdTaskByteBuffer *m_ptr; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v10; 
  bdTaskParams v11; 
  bdReference<bdTaskByteBuffer> queryParams; 
  bdReference<bdRemoteTask> *v13; 
  bdTaskByteBuffer *v14; 

  v13 = result;
  result->m_ptr = NULL;
  queryParams.m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v11, 0x26u, 5u, 0x400u, 0xFFFFu);
  LOBYTE(v6) = 1;
  if ( v11.ensureCapacity(&v11, 4u, v6) )
  {
    if ( v11.m_isWritingArray )
      --v11.m_arrayWriteCount;
    if ( v11.m_serializeOk && bdByteBuffer::writeInt32(v11.m_buffer.m_ptr, totpCode) )
    {
      v11.m_serializeOk = 1;
      goto LABEL_10;
    }
    v11.m_serializeOk = 0;
  }
  else if ( v11.m_serializeOk )
  {
    goto LABEL_10;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::getTaskBuffer", 0x13u, "Failed to serialize one or more task parameters.");
LABEL_10:
  m_ptr = v11.m_taskBuffer.m_ptr;
  v14 = v11.m_taskBuffer.m_ptr;
  if ( v11.m_taskBuffer.m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v11.m_taskBuffer.m_ptr->m_refCount, 1u);
    m_ptr = v14;
  }
  if ( queryParams.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&queryParams.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && queryParams.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))queryParams.m_ptr->~bdReferencable)(queryParams.m_ptr, 1i64);
    m_ptr = v14;
  }
  queryParams.m_ptr = m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))v14->~bdReferencable)(v14, 1i64);
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &queryParams);
  if ( started )
  {
    v10 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::answerTOTPChallenge", 0x152u, "Failed to start task: Error %i", v10);
  }
  bdTaskParams::~bdTaskParams(&v11);
  if ( queryParams.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&queryParams.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && queryParams.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))queryParams.m_ptr->~bdReferencable)(queryParams.m_ptr, 1i64);
  return result;
}

/*
==============
bdAntiCheat::reportBNetSessionToken
==============
*/
bdReference<bdRemoteTask> *bdAntiCheat::reportBNetSessionToken(bdAntiCheat *this, bdReference<bdRemoteTask> *result, const char *sessionToken)
{
  bdLobbyErrorCode started; 
  bdTaskParams v8; 

  result->m_ptr = NULL;
  if ( sessionToken )
  {
    bdTaskParams::bdTaskParams(&v8, 0x26u, 7u, 0x400u, 0xFFFFu);
    bdBufferParams::addString(&v8, sessionToken, 0x800ui64);
    if ( bdBufferParams::serializedOk(&v8) )
    {
      started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v8);
      if ( started )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportBNetSessionToken", 0xDBu, "Failed to start task: Error %i", started);
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportBNetSessionToken", 0xE0u, "Failed to serialize the task buffer.");
    }
    bdTaskParams::~bdTaskParams(&v8);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportBNetSessionToken", 0xE5u, "Cannot call reportBNetSessionToken() with a NULL sessionToken");
  }
  return result;
}

/*
==============
bdAntiCheat::reportConsoleDetails
==============
*/
bdReference<bdRemoteTask> *bdAntiCheat::reportConsoleDetails(bdAntiCheat *this, bdReference<bdRemoteTask> *result, unsigned int gameMode, unsigned int gameVersion, unsigned __int64 checksum, const bdMACAddr *macAddress, unsigned __int64 internalAddr, unsigned __int64 externalAddr, const bdConsoleID *consoleID)
{
  bool v13; 
  _BOOL8 v14; 
  _BOOL8 v15; 
  bool v16; 
  _BOOL8 v17; 
  bool v18; 
  _BOOL8 v19; 
  bool v20; 
  _BOOL8 v21; 
  bool v22; 
  bool v23; 
  bdTaskByteBuffer *m_ptr; 
  bdLobbyErrorCode started; 
  bdReference<bdTaskByteBuffer> queryParams; 
  int v28; 
  bdTaskParams v29; 
  bdTaskByteBuffer *v30; 
  __int64 v31; 
  bdReference<bdRemoteTask> *v32; 
  bdConsoleID data; 

  v31 = -2i64;
  v32 = result;
  v13 = 1;
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportConsoleDetails", 0x8Cu, "Use of bdAntiCheat::reportConsoleDetails() is DEPRECATED");
  result->m_ptr = NULL;
  v28 = 1;
  queryParams.m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v29, 0x26u, 4u, 0x400u, 0xFFFFu);
  if ( consoleID )
  {
    bdBufferParams::addBlob(&v29, consoleID->_bytes_20, 0x14u);
  }
  else
  {
    bdConsoleID::bdConsoleID(&data);
    v13 = bdConsoleID::readConsoleID(&data);
    if ( v13 )
      bdBufferParams::addBlob(&v29, data._bytes_20, 0x14u);
    bdConsoleID::~bdConsoleID((bdConsoleID *)&data.gap34[4]);
    bdReferencable::~bdReferencable((bdReferencable *)&data.gap34[4]);
  }
  LOBYTE(v14) = 1;
  if ( v29.ensureCapacity(&v29, 4u, v14) )
  {
    if ( v29.m_isWritingArray )
      --v29.m_arrayWriteCount;
    if ( !v29.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(v29.m_buffer.m_ptr, gameMode), v29.m_serializeOk = 1, !v16) )
      v29.m_serializeOk = 0;
  }
  LOBYTE(v15) = 1;
  if ( v29.ensureCapacity(&v29, 4u, v15) )
  {
    if ( v29.m_isWritingArray )
      --v29.m_arrayWriteCount;
    if ( !v29.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(v29.m_buffer.m_ptr, gameVersion), v29.m_serializeOk = 1, !v18) )
      v29.m_serializeOk = 0;
  }
  LOBYTE(v17) = 1;
  if ( v29.ensureCapacity(&v29, 8u, v17) )
  {
    if ( v29.m_isWritingArray )
      --v29.m_arrayWriteCount;
    if ( !v29.m_serializeOk || (v20 = bdByteBuffer::writeUInt64(v29.m_buffer.m_ptr, checksum), v29.m_serializeOk = 1, !v20) )
      v29.m_serializeOk = 0;
  }
  LOBYTE(v19) = 1;
  if ( v29.ensureCapacity(&v29, 8u, v19) )
  {
    if ( v29.m_isWritingArray )
      --v29.m_arrayWriteCount;
    if ( !v29.m_serializeOk || (v22 = bdByteBuffer::writeUInt64(v29.m_buffer.m_ptr, internalAddr), v29.m_serializeOk = 1, !v22) )
      v29.m_serializeOk = 0;
  }
  LOBYTE(v21) = 1;
  if ( v29.ensureCapacity(&v29, 8u, v21) )
  {
    if ( v29.m_isWritingArray )
      --v29.m_arrayWriteCount;
    if ( !v29.m_serializeOk || (v23 = bdByteBuffer::writeUInt64(v29.m_buffer.m_ptr, externalAddr), v29.m_serializeOk = 1, !v23) )
      v29.m_serializeOk = 0;
  }
  bdBufferParams::addBlob(&v29, macAddress, 6u);
  if ( !v29.m_serializeOk )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::getTaskBuffer", 0x13u, "Failed to serialize one or more task parameters.");
  m_ptr = v29.m_taskBuffer.m_ptr;
  v30 = v29.m_taskBuffer.m_ptr;
  if ( v29.m_taskBuffer.m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v29.m_taskBuffer.m_ptr->m_refCount, 1u);
    m_ptr = v30;
  }
  v28 = 3;
  queryParams.m_ptr = m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))v30->~bdReferencable)(v30, 1i64);
  }
  if ( v13 )
  {
    if ( bdBufferParams::serializedOk(&v29) )
    {
      started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &queryParams);
      if ( started )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportConsoleDetails", 0xB9u, "Failed to start task: Error %i", started);
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportConsoleDetails", 0xBFu, "Failed to serialize the task buffer.");
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportConsoleDetails", 0xC4u, "Failed to read console ID");
  }
  bdTaskParams::~bdTaskParams(&v29);
  if ( queryParams.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&queryParams.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && queryParams.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))queryParams.m_ptr->~bdReferencable)(queryParams.m_ptr, 1i64);
  return result;
}

/*
==============
bdAntiCheat::reportConsoleID
==============
*/
bdReference<bdRemoteTask> *bdAntiCheat::reportConsoleID(bdAntiCheat *this, bdReference<bdRemoteTask> *result, const bdConsoleID *consoleID)
{
  bool v6; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *m_ptr; 
  bdLobbyErrorCode started; 
  bdReference<bdTaskByteBuffer> queryParams; 
  int v12; 
  bdTaskByteBuffer *v13; 
  bdTaskByteBuffer *v14; 
  __int64 v15; 
  bdReference<bdRemoteTask> *v16; 
  bdTaskParams v17; 
  bdConsoleID data; 

  v15 = -2i64;
  v16 = result;
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportConsoleID", 0x47u, "Use of bdAntiCheat::reportConsoleID() is DEPRECATED");
  result->m_ptr = NULL;
  v12 = 1;
  queryParams.m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v17, 0x26u, 3u, 0x400u, 0xFFFFu);
  if ( consoleID )
  {
    bdBufferParams::addBlob(&v17, consoleID->_bytes_20, 0x14u);
    if ( !v17.m_serializeOk )
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::getTaskBuffer", 0x13u, "Failed to serialize one or more task parameters.");
    m_ptr = v17.m_taskBuffer.m_ptr;
    v14 = v17.m_taskBuffer.m_ptr;
    if ( v17.m_taskBuffer.m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v17.m_taskBuffer.m_ptr->m_refCount, 1u);
      m_ptr = v14;
    }
    v12 = 5;
    queryParams.m_ptr = m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdTaskByteBuffer *, __int64))v14->~bdReferencable)(v14, 1i64);
    }
  }
  else
  {
    bdConsoleID::bdConsoleID(&data);
    v6 = bdConsoleID::readConsoleID(&data);
    if ( v6 )
    {
      bdBufferParams::addBlob(&v17, data._bytes_20, 0x14u);
      if ( !v17.m_serializeOk )
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::getTaskBuffer", 0x13u, "Failed to serialize one or more task parameters.");
      v7 = v17.m_taskBuffer.m_ptr;
      v13 = v17.m_taskBuffer.m_ptr;
      if ( v17.m_taskBuffer.m_ptr )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&v17.m_taskBuffer.m_ptr->m_refCount, 1u);
        v7 = v13;
      }
      v12 = 3;
      queryParams.m_ptr = v7;
      if ( v7 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdTaskByteBuffer *, __int64))v13->~bdReferencable)(v13, 1i64);
      }
    }
    bdConsoleID::~bdConsoleID((bdConsoleID *)&data.gap34[4]);
    bdReferencable::~bdReferencable((bdReferencable *)&data.gap34[4]);
    if ( !v6 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportConsoleID", 0x7Cu, "Failed to read console ID");
      goto LABEL_23;
    }
  }
  if ( bdBufferParams::serializedOk(&v17) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &queryParams);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportConsoleID", 0x71u, "Failed to start task: Error %i", started);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportConsoleID", 0x77u, "Failed to serialize the task buffer.");
  }
LABEL_23:
  bdTaskParams::~bdTaskParams(&v17);
  if ( queryParams.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&queryParams.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && queryParams.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))queryParams.m_ptr->~bdReferencable)(queryParams.m_ptr, 1i64);
  return result;
}

/*
==============
bdAntiCheat::reportExtendedAuthInfo
==============
*/
bdReference<bdRemoteTask> *bdAntiCheat::reportExtendedAuthInfo(bdAntiCheat *this, bdReference<bdRemoteTask> *result, unsigned int gameMode, unsigned int gameVersion, unsigned __int64 checksum, const bdMACAddr *macAddress, unsigned __int64 internalAddr, unsigned __int64 externalAddr, const bdExtendedAuthInfo *extendedAuthInfo)
{
  bdAntiCheat::reportExtendedAuthInfoTask(this, result, 6u, gameMode, gameVersion, checksum, macAddress, internalAddr, externalAddr, extendedAuthInfo, BD_TRIAL_STATUS_UNKNOWN);
  return result;
}

/*
==============
bdAntiCheat::reportExtendedAuthInfo
==============
*/
bdReference<bdRemoteTask> *bdAntiCheat::reportExtendedAuthInfo(bdAntiCheat *this, bdReference<bdRemoteTask> *result, unsigned int gameMode, unsigned int gameVersion, unsigned __int64 checksum, const bdMACAddr *macAddress, unsigned __int64 internalAddr, unsigned __int64 externalAddr, const bdExtendedAuthInfo *extendedAuthInfo, const bdAntiCheat::bdAntiCheatTrialStatus trialStatus)
{
  bdHandleAssert(trialStatus != BD_TRIAL_STATUS_UNKNOWN, "trialStatus != BD_TRIAL_STATUS_UNKNOWN", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportExtendedAuthInfo", 0xF6u, "Cannot call reportExtendedAuthInfo() with BD_TRIAL_STATUS_UNKNOWN");
  bdAntiCheat::reportExtendedAuthInfoTask(this, result, 8u, gameMode, gameVersion, checksum, macAddress, internalAddr, externalAddr, extendedAuthInfo, trialStatus);
  return result;
}

/*
==============
bdAntiCheat::reportExtendedAuthInfoTask
==============
*/
bdReference<bdRemoteTask> *bdAntiCheat::reportExtendedAuthInfoTask(bdAntiCheat *this, bdReference<bdRemoteTask> *result, const unsigned __int8 taskID, unsigned int gameMode, unsigned int gameVersion, unsigned __int64 checksum, const bdMACAddr *macAddress, unsigned __int64 internalAddr, unsigned __int64 externalAddr, const bdExtendedAuthInfo *extendedAuthInfo, const bdAntiCheat::bdAntiCheatTrialStatus trialStatus)
{
  bool v15; 
  _BOOL8 v16; 
  _BOOL8 v17; 
  bool v18; 
  _BOOL8 v19; 
  bool v20; 
  _BOOL8 v21; 
  bool v22; 
  _BOOL8 v23; 
  bool v24; 
  bool v25; 
  const char *Data; 
  _BOOL8 v27; 
  bool v28; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  v15 = extendedAuthInfo && bdExtendedAuthInfo::getData((bdExtendedAuthInfo *)extendedAuthInfo);
  bdHandleAssert(v15, "(extendedAuthInfo != BD_NULL && extendedAuthInfo->getData() != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportExtendedAuthInfoTask", 0x11Bu, "Cannot call reportExtendedAuthInfo() with a NULL extendedAuthInfo");
  if ( extendedAuthInfo && bdExtendedAuthInfo::getData((bdExtendedAuthInfo *)extendedAuthInfo) )
  {
    bdTaskParams::bdTaskParams(&taskParams, 0x26u, taskID, 0x400u, 0xFFFFu);
    LOBYTE(v16) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v16) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, gameMode), taskParams.m_serializeOk = 1, !v18) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v17) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v17) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, gameVersion), taskParams.m_serializeOk = 1, !v20) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v19) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v19) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v22 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, checksum), taskParams.m_serializeOk = 1, !v22) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v21) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v21) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v24 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, internalAddr), taskParams.m_serializeOk = 1, !v24) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v23) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v23) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v25 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, externalAddr), taskParams.m_serializeOk = 1, !v25) )
        taskParams.m_serializeOk = 0;
    }
    bdBufferParams::addBlob(&taskParams, macAddress, 6u);
    Data = bdExtendedAuthInfo::getData((bdExtendedAuthInfo *)extendedAuthInfo);
    bdBufferParams::addString(&taskParams, Data, 0x1000ui64);
    if ( taskID == 8 )
    {
      LOBYTE(v27) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v27) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v28 = bdByteBuffer::writeInt32(taskParams.m_buffer.m_ptr, trialStatus), taskParams.m_serializeOk = 1, !v28) )
          taskParams.m_serializeOk = 0;
      }
    }
    if ( bdBufferParams::serializedOk(&taskParams) )
    {
      started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
      if ( started )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportExtendedAuthInfoTask", 0x136u, "Failed to start task: Error %i", started);
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportExtendedAuthInfoTask", 0x13Bu, "Failed to serialize the task buffer.");
    }
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAntiCheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheat.cpp", "bdAntiCheat::reportExtendedAuthInfoTask", 0x140u, "Cannot call reportExtendedAuthInfo() with a NULL extendedAuthInfo");
  }
  return result;
}

