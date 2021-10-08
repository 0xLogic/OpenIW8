/*
==============
bdTeamShowcase::bdTeamShowcase
==============
*/

void __fastcall bdTeamShowcase::bdTeamShowcase(bdTeamShowcase *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  ??0bdTeamShowcase@@IEAA@QEAVbdRemoteTaskManager@@PEBD@Z(this, remoteTaskManager, context);
}

/*
==============
bdTeamShowcase::addTeamShowcaseBlockForUser
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeamShowcase::addTeamShowcaseBlockForUser(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  return ?addTeamShowcaseBlockForUser@bdTeamShowcase@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, userID);
}

/*
==============
bdTeamShowcase::removeTeamShowcaseBlockForUser
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeamShowcase::removeTeamShowcaseBlockForUser(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  return ?removeTeamShowcaseBlockForUser@bdTeamShowcase@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, userID);
}

/*
==============
bdTeamShowcase::removeFileFromIndividualTeamShowcase
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeamShowcase::removeFileFromIndividualTeamShowcase(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const bdFileID *const fileID, const unsigned __int64 teamID)
{
  return ?removeFileFromIndividualTeamShowcase@bdTeamShowcase@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdFileID@@_K@Z(this, result, fileID, teamID);
}

/*
==============
bdTeamShowcase::getShowcasedFilesByTeamIDAndFileTypeTag
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeamShowcase::getShowcasedFilesByTeamIDAndFileTypeTag(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned __int16 fileTypeTag, bdTeamShowcaseGetShowcasedFilesResponse *a5)
{
  return ?getShowcasedFilesByTeamIDAndFileTypeTag@bdTeamShowcase@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KGPEAVbdTeamShowcaseGetShowcasedFilesResponse@@@Z(this, result, teamID, fileTypeTag, a5);
}

/*
==============
bdTeamShowcase::favoriteFileInTeamsShowcase
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeamShowcase::favoriteFileInTeamsShowcase(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdFileID *fileID)
{
  return ?favoriteFileInTeamsShowcase@bdTeamShowcase@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBVbdFileID@@@Z(this, result, teamID, fileID);
}

/*
==============
bdTeamShowcase::shareUserFileToTeamsShowcase
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeamShowcase::shareUserFileToTeamsShowcase(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const bdFileID *fileID)
{
  return ?shareUserFileToTeamsShowcase@bdTeamShowcase@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdFileID@@@Z(this, result, fileID);
}

/*
==============
bdTeamShowcase::getTeamShowcaseBlocksForTeam
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeamShowcase::getTeamShowcaseBlocksForTeam(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMember *blockedMembers, const unsigned int maxResults)
{
  return ?getTeamShowcaseBlocksForTeam@bdTeamShowcase@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdTeamMember@@I@Z(this, result, teamID, blockedMembers, maxResults);
}

/*
==============
bdTeamShowcase::unfeatureFileFromTeamsShowcase
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeamShowcase::unfeatureFileFromTeamsShowcase(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdFileID *fileID)
{
  return ?unfeatureFileFromTeamsShowcase@bdTeamShowcase@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBVbdFileID@@@Z(this, result, teamID, fileID);
}

/*
==============
bdTeamShowcase::featureFileInTeamsShowcase
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeamShowcase::featureFileInTeamsShowcase(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdFileID *fileID)
{
  return ?featureFileInTeamsShowcase@bdTeamShowcase@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBVbdFileID@@@Z(this, result, teamID, fileID);
}

/*
==============
bdTeamShowcase::getTeamIDsAndFileTypeTagsByFileID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeamShowcase::getTeamIDsAndFileTypeTagsByFileID(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const bdFileID *fileID, bdTeamShowcaseGetTeamIDsAndTagsResponse *a4)
{
  return ?getTeamIDsAndFileTypeTagsByFileID@bdTeamShowcase@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdFileID@@PEAVbdTeamShowcaseGetTeamIDsAndTagsResponse@@@Z(this, result, fileID, a4);
}

/*
==============
bdTeamShowcase::unfavoriteFileFromTeamsShowcase
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeamShowcase::unfavoriteFileFromTeamsShowcase(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdFileID *fileID)
{
  return ?unfavoriteFileFromTeamsShowcase@bdTeamShowcase@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBVbdFileID@@@Z(this, result, teamID, fileID);
}

/*
==============
bdTeamShowcase::~bdTeamShowcase
==============
*/

void __fastcall bdTeamShowcase::~bdTeamShowcase(bdTeamShowcase *this)
{
  ??1bdTeamShowcase@@UEAA@XZ(this);
}

/*
==============
bdTeamShowcase::removeFileFromTeamsShowcase
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeamShowcase::removeFileFromTeamsShowcase(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const bdFileID *fileID)
{
  return ?removeFileFromTeamsShowcase@bdTeamShowcase@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdFileID@@@Z(this, result, fileID);
}

/*
==============
bdTeamShowcase::bdTeamShowcase
==============
*/
void bdTeamShowcase::bdTeamShowcase(bdTeamShowcase *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  this->__vftable = (bdTeamShowcase_vtbl *)&bdTeamShowcase::`vftable';
  this->m_remoteTaskManager = remoteTaskManager;
  bdStrlcpy(this->m_context, context, 0x10ui64);
}

/*
==============
bdTeamShowcase::~bdTeamShowcase
==============
*/
void bdTeamShowcase::~bdTeamShowcase(bdTeamShowcase *this)
{
  this->__vftable = (bdTeamShowcase_vtbl *)&bdTeamShowcase::`vftable';
}

/*
==============
bdTeamShowcase::addTeamShowcaseBlockForUser
==============
*/
bdReference<bdRemoteTask> *bdTeamShowcase::addTeamShowcaseBlockForUser(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams taskParams; 
  __int64 v12; 
  bdReference<bdRemoteTask> *v13; 
  const bdUserAccountID *v14; 

  v12 = -2i64;
  v13 = result;
  v14 = userID;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0xC0u, 5u, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
      taskParams.m_serializeOk = 0;
  }
  bdTaskParams::addContextUser(&taskParams, userID);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeamShowcase::favoriteFileInTeamsShowcase
==============
*/
bdReference<bdRemoteTask> *bdTeamShowcase::favoriteFileInTeamsShowcase(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdFileID *fileID)
{
  _BOOL8 v8; 
  _BOOL8 v9; 
  bool v10; 
  bool v11; 
  int v13; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  v13 = 1;
  bdHandleAssert(fileID != NULL, "(fileID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteamshowcase\\bdteamshowcase.cpp", "bdTeamShowcase::favoriteFileInTeamsShowcase", 0x52u, "Cannot call favoriteFileInTeamsShowcase() with a NULL fileID", v13, -2i64);
  bdTaskParams::bdTaskParams(&taskParams, 0xC0u, 8u, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v10) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *(_QWORD *)fileID->_bytes_20), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTeamShowcase::featureFileInTeamsShowcase
==============
*/
bdReference<bdRemoteTask> *bdTeamShowcase::featureFileInTeamsShowcase(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdFileID *fileID)
{
  _BOOL8 v8; 
  _BOOL8 v9; 
  bool v10; 
  bool v11; 
  int v13; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  v13 = 1;
  bdHandleAssert(fileID != NULL, "(fileID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteamshowcase\\bdteamshowcase.cpp", "bdTeamShowcase::featureFileInTeamsShowcase", 0x32u, "Cannot call featureFileInTeamsShowcase() with a NULL fileID", v13, -2i64);
  bdTaskParams::bdTaskParams(&taskParams, 0xC0u, 3u, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v10) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *(_QWORD *)fileID->_bytes_20), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTeamShowcase::getShowcasedFilesByTeamIDAndFileTypeTag
==============
*/
bdReference<bdRemoteTask> *bdTeamShowcase::getShowcasedFilesByTeamIDAndFileTypeTag(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned __int16 fileTypeTag, bdTeamShowcaseGetShowcasedFilesResponse *resulta)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v12; 
  bdTeamShowcaseGetShowcasedFilesRequest request; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = NULL;
  bdTeamShowcaseGetShowcasedFilesRequest::bdTeamShowcaseGetShowcasedFilesRequest(&request);
  bdTeamShowcaseGetShowcasedFilesRequest::init(&request, teamID, fileTypeTag);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC0u, 0xBu, &request, resulta, NULL);
  if ( started )
  {
    v12 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "teamShowcase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteamshowcase\\bdteamshowcase.cpp", "bdTeamShowcase::getShowcasedFilesByTeamIDAndFileTypeTag", 0xCFu, "Failed to start task: Error %i", v12);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)request.gap20);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdTeamShowcase::getTeamIDsAndFileTypeTagsByFileID
==============
*/
bdReference<bdRemoteTask> *bdTeamShowcase::getTeamIDsAndFileTypeTagsByFileID(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const bdFileID *fileID, bdTeamShowcaseGetTeamIDsAndTagsResponse *a4)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v11; 
  bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest request; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = NULL;
  bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest(&request);
  bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::init(&request, fileID);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC0u, 0xCu, &request, a4, NULL);
  if ( started )
  {
    v11 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "teamShowcase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteamshowcase\\bdteamshowcase.cpp", "bdTeamShowcase::getTeamIDsAndFileTypeTagsByFileID", 0xE6u, "Failed to start task: Error %i", v11);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&request.__vftable + 3));
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdTeamShowcase::getTeamShowcaseBlocksForTeam
==============
*/
bdReference<bdRemoteTask> *bdTeamShowcase::getTeamShowcaseBlocksForTeam(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMember *blockedMembers, const unsigned int maxResults)
{
  _BOOL8 v9; 
  bool v10; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0xC0u, 7u, 0x400u, 0xFFFFu);
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v10) )
      taskParams.m_serializeOk = 0;
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = blockedMembers;
    taskParams.m_maxResults = maxResults;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTeamShowcase::removeFileFromIndividualTeamShowcase
==============
*/
bdReference<bdRemoteTask> *bdTeamShowcase::removeFileFromIndividualTeamShowcase(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const bdFileID *const fileID, const unsigned __int64 teamID)
{
  _BOOL8 v8; 
  _BOOL8 v9; 
  bool v10; 
  bool v11; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0xC0u, 0xAu, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v8) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *(_QWORD *)fileID->_bytes_20), taskParams.m_serializeOk = 1, !v10) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTeamShowcase::removeFileFromTeamsShowcase
==============
*/
bdReference<bdRemoteTask> *bdTeamShowcase::removeFileFromTeamsShowcase(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const bdFileID *fileID)
{
  _BOOL8 v6; 
  bool v7; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0xC0u, 2u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v6) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v6) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v7 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *(_QWORD *)fileID->_bytes_20), taskParams.m_serializeOk = 1, !v7) )
      taskParams.m_serializeOk = 0;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTeamShowcase::removeTeamShowcaseBlockForUser
==============
*/
bdReference<bdRemoteTask> *bdTeamShowcase::removeTeamShowcaseBlockForUser(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams taskParams; 
  __int64 v12; 
  bdReference<bdRemoteTask> *v13; 
  const bdUserAccountID *v14; 

  v12 = -2i64;
  v13 = result;
  v14 = userID;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0xC0u, 6u, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
      taskParams.m_serializeOk = 0;
  }
  bdTaskParams::addContextUser(&taskParams, userID);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeamShowcase::shareUserFileToTeamsShowcase
==============
*/
bdReference<bdRemoteTask> *bdTeamShowcase::shareUserFileToTeamsShowcase(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const bdFileID *fileID)
{
  _BOOL8 v6; 
  bool v7; 
  int v9; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  v9 = 1;
  bdHandleAssert(fileID != NULL, "(fileID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteamshowcase\\bdteamshowcase.cpp", "bdTeamShowcase::shareUserFileToTeamsShowcase", 0x22u, "Cannot call shareUserFileToTeamsShowcase() with a NULL fileID", v9, -2i64);
  bdTaskParams::bdTaskParams(&taskParams, 0xC0u, 1u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v6) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v6) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v7 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *(_QWORD *)fileID->_bytes_20), taskParams.m_serializeOk = 1, !v7) )
      taskParams.m_serializeOk = 0;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTeamShowcase::unfavoriteFileFromTeamsShowcase
==============
*/
bdReference<bdRemoteTask> *bdTeamShowcase::unfavoriteFileFromTeamsShowcase(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdFileID *fileID)
{
  _BOOL8 v8; 
  _BOOL8 v9; 
  bool v10; 
  bool v11; 
  int v13; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  v13 = 1;
  bdHandleAssert(fileID != NULL, "(fileID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteamshowcase\\bdteamshowcase.cpp", "bdTeamShowcase::unfavoriteFileFromTeamsShowcase", 0x62u, "Cannot call unfavoriteFileFromTeamsShowcase() with a NULL fileID", v13, -2i64);
  bdTaskParams::bdTaskParams(&taskParams, 0xC0u, 9u, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v10) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *(_QWORD *)fileID->_bytes_20), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTeamShowcase::unfeatureFileFromTeamsShowcase
==============
*/
bdReference<bdRemoteTask> *bdTeamShowcase::unfeatureFileFromTeamsShowcase(bdTeamShowcase *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdFileID *fileID)
{
  _BOOL8 v8; 
  _BOOL8 v9; 
  bool v10; 
  bool v11; 
  int v13; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  v13 = 1;
  bdHandleAssert(fileID != NULL, "(fileID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteamshowcase\\bdteamshowcase.cpp", "bdTeamShowcase::unfeatureFileFromTeamsShowcase", 0x42u, "Cannot call unfeatureFileFromTeamsShowcase() with a NULL fileID", v13, -2i64);
  bdTaskParams::bdTaskParams(&taskParams, 0xC0u, 4u, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v10) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *(_QWORD *)fileID->_bytes_20), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

