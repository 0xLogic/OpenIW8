/*
==============
bdCODOTeamMarketplace::awardCCP
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCODOTeamMarketplace::awardCCP(bdCODOTeamMarketplace *this, bdReference<bdRemoteTask> *result, bdCODOAwardCCPRequest *request, bdCODOAwardCCPResponse *response)
{
  return ?awardCCP@bdCODOTeamMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdCODOAwardCCPRequest@@PEAVbdCODOAwardCCPResponse@@@Z(this, result, request, response);
}

/*
==============
bdCODOTeamMarketplace::bdCODOTeamMarketplace
==============
*/

void __fastcall bdCODOTeamMarketplace::bdCODOTeamMarketplace(bdCODOTeamMarketplace *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdCODOTeamMarketplace@@IEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdCODOTeamMarketplace::awardCCPWithLimitedNumCurrencies
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCODOTeamMarketplace::awardCCPWithLimitedNumCurrencies(bdCODOTeamMarketplace *this, bdReference<bdRemoteTask> *result, bdCODOAwardCCPRequest *request, bdCODOAwardCCPResponse *response)
{
  return ?awardCCPWithLimitedNumCurrencies@bdCODOTeamMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdCODOAwardCCPRequest@@PEAVbdCODOAwardCCPResponse@@@Z(this, result, request, response);
}

/*
==============
bdCODOTeamMarketplace::readTeamMembersCCPLeaderboard
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCODOTeamMarketplace::readTeamMembersCCPLeaderboard(bdCODOTeamMarketplace *this, bdReference<bdRemoteTask> *result, bdCODOReadCCPLeaderboardRequest *request, bdCODOReadCCPLeaderboardResponse *response)
{
  return ?readTeamMembersCCPLeaderboard@bdCODOTeamMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdCODOReadCCPLeaderboardRequest@@PEAVbdCODOReadCCPLeaderboardResponse@@@Z(this, result, request, response);
}

/*
==============
bdCODOTeamMarketplace::bdCODOTeamMarketplace
==============
*/
void bdCODOTeamMarketplace::bdCODOTeamMarketplace(bdCODOTeamMarketplace *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdCODOTeamMarketplace::awardCCP
==============
*/
bdReference<bdRemoteTask> *bdCODOTeamMarketplace::awardCCP(bdCODOTeamMarketplace *this, bdReference<bdRemoteTask> *result, bdCODOAwardCCPRequest *request, bdCODOAwardCCPResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v8; 
  bdReference<bdStructBufferTask> v9; 

  v9.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v9, 0x8Du, 1u, request, response, NULL);
  if ( started )
  {
    v8 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "CODOTeamMarketplaceService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodoteammarketplace.cpp", "bdCODOTeamMarketplace::awardCCP", 0x21u, "Failed to start task: Error %i", v8);
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
bdCODOTeamMarketplace::awardCCPWithLimitedNumCurrencies
==============
*/
bdReference<bdRemoteTask> *bdCODOTeamMarketplace::awardCCPWithLimitedNumCurrencies(bdCODOTeamMarketplace *this, bdReference<bdRemoteTask> *result, bdCODOAwardCCPRequest *request, bdCODOAwardCCPResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v8; 
  bdReference<bdStructBufferTask> v9; 

  v9.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v9, 0x8Du, 7u, request, response, NULL);
  if ( started )
  {
    v8 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "CODOTeamMarketplaceService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodoteammarketplace.cpp", "bdCODOTeamMarketplace::awardCCPWithLimitedNumCurrencies", 0x32u, "Failed to start task: Error %i", v8);
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
bdCODOTeamMarketplace::readTeamMembersCCPLeaderboard
==============
*/
bdReference<bdRemoteTask> *bdCODOTeamMarketplace::readTeamMembersCCPLeaderboard(bdCODOTeamMarketplace *this, bdReference<bdRemoteTask> *result, bdCODOReadCCPLeaderboardRequest *request, bdCODOReadCCPLeaderboardResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v8; 
  bdReference<bdStructBufferTask> v9; 

  v9.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v9, 0x8Du, 2u, request, response, NULL);
  if ( started )
  {
    v8 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "CODOTeamMarketplaceService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodoteammarketplace.cpp", "bdCODOTeamMarketplace::readTeamMembersCCPLeaderboard", 0x42u, "Failed to start task: Error %i", v8);
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

