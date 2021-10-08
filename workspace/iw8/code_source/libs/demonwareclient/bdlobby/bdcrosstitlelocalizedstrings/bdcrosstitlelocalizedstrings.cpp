/*
==============
bdCrossTitleLocalizedStrings::bdCrossTitleLocalizedStrings
==============
*/

void __fastcall bdCrossTitleLocalizedStrings::bdCrossTitleLocalizedStrings(bdCrossTitleLocalizedStrings *this, bdLobbyService *const lobbyService)
{
  ??0bdCrossTitleLocalizedStrings@@QEAA@QEAVbdLobbyService@@@Z(this, lobbyService);
}

/*
==============
bdCrossTitleLocalizedStrings::resolveLocalizedStrings
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossTitleLocalizedStrings::resolveLocalizedStrings(bdCrossTitleLocalizedStrings *this, bdReference<bdRemoteTask> *result, const bdResolveLocalizedStringsRequest *request, bdResolveLocalizedStringsResponse *response)
{
  return ?resolveLocalizedStrings@bdCrossTitleLocalizedStrings@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdResolveLocalizedStringsRequest@@AEAVbdResolveLocalizedStringsResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossTitleLocalizedStrings::bdCrossTitleLocalizedStrings
==============
*/
void bdCrossTitleLocalizedStrings::bdCrossTitleLocalizedStrings(bdCrossTitleLocalizedStrings *this, bdLobbyService *const lobbyService)
{
  this->m_lobbyService = lobbyService;
}

/*
==============
bdCrossTitleLocalizedStrings::resolveLocalizedStrings
==============
*/
bdReference<bdRemoteTask> *bdCrossTitleLocalizedStrings::resolveLocalizedStrings(bdCrossTitleLocalizedStrings *this, bdReference<bdRemoteTask> *result, const bdResolveLocalizedStringsRequest *request, bdResolveLocalizedStringsResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

