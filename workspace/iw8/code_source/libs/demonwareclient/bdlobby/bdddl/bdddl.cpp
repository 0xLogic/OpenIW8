/*
==============
bdDDL::~bdDDL
==============
*/

void __fastcall bdDDL::~bdDDL(bdDDL *this)
{
  ??1bdDDL@@QEAA@XZ(this);
}

/*
==============
bdDDL::bdDDL
==============
*/

void __fastcall bdDDL::bdDDL(bdDDL *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdDDL@@QEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdDDL::verifyDDLFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdDDL::verifyDDLFiles(bdDDL *this, bdReference<bdRemoteTask> *result, const unsigned int numFileChecksums, bdDDLDefinitionChecksum *definitionChecksums, bdDDLChecksumResult *checksumResults)
{
  return ?verifyDDLFiles@bdDDL@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEAVbdDDLDefinitionChecksum@@QEAVbdDDLChecksumResult@@@Z(this, result, numFileChecksums, definitionChecksums, checksumResults);
}

/*
==============
bdDDL::bdDDL
==============
*/
void bdDDL::bdDDL(bdDDL *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdDDL::~bdDDL
==============
*/
void bdDDL::~bdDDL(bdDDL *this)
{
  ;
}

/*
==============
bdDDL::verifyDDLFiles
==============
*/
bdReference<bdRemoteTask> *bdDDL::verifyDDLFiles(bdDDL *this, bdReference<bdRemoteTask> *result, const unsigned int numFileChecksums, bdDDLDefinitionChecksum *definitionChecksums, bdDDLChecksumResult *checksumResults)
{
  __int64 v6; 
  _BOOL8 v9; 
  bool v10; 
  __int64 v11; 
  bdLobbyErrorCode started; 
  bdTaskParams v14; 

  v6 = numFileChecksums;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v14, 0x60u, 1u, 0x400u, 0xFFFFu);
  LOBYTE(v9) = 1;
  if ( v14.ensureCapacity(&v14, 4u, v9) )
  {
    if ( v14.m_isWritingArray )
      --v14.m_arrayWriteCount;
    if ( !v14.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(v14.m_buffer.m_ptr, v6), v14.m_serializeOk = 1, !v10) )
      v14.m_serializeOk = 0;
  }
  if ( (_DWORD)v6 )
  {
    v11 = v6;
    do
    {
      bdBufferParams::addSerializable(&v14, definitionChecksums++);
      --v11;
    }
    while ( v11 );
  }
  if ( v14.m_taskResults || v14.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v14.m_serializeOk = 0;
  }
  else
  {
    v14.m_taskResults = checksumResults;
    v14.m_maxResults = v6;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v14);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdDDL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdddl\\bdddl.cpp", "bdDDL::verifyDDLFiles", 0x34u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&v14);
  return result;
}

