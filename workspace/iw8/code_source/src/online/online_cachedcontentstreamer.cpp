/*
==============
Online_CachedContentStreamer::ResetForController
==============
*/

void __fastcall Online_CachedContentStreamer::ResetForController(Online_CachedContentStreamer *this, const int controllerIndex)
{
  ?ResetForController@Online_CachedContentStreamer@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_CachedContentStreamer::GetInstancePtr
==============
*/

Online_CachedContentStreamer *__fastcall Online_CachedContentStreamer::GetInstancePtr()
{
  return ?GetInstancePtr@Online_CachedContentStreamer@@SAPEAV1@XZ();
}

/*
==============
Online_CachedContentStreamer::Reset
==============
*/

void __fastcall Online_CachedContentStreamer::Reset(Online_CachedContentStreamer *this)
{
  ?Reset@Online_CachedContentStreamer@@QEAAXXZ(this);
}

/*
==============
Online_CachedContentStreamer::Uninit
==============
*/

void __fastcall Online_CachedContentStreamer::Uninit(Online_CachedContentStreamer *this)
{
  ?Uninit@Online_CachedContentStreamer@@UEAAXXZ(this);
}

/*
==============
Online_CachedContentStreamer::OnListFilesFailed
==============
*/

void __fastcall Online_CachedContentStreamer::OnListFilesFailed(Online_CachedContentStreamer *this, const int controllerIndex)
{
  ?OnListFilesFailed@Online_CachedContentStreamer@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_CachedContentStreamer::OnDownloadFilesFailed
==============
*/

void __fastcall Online_CachedContentStreamer::OnDownloadFilesFailed(Online_CachedContentStreamer *this, const int controllerIndex)
{
  ?OnDownloadFilesFailed@Online_CachedContentStreamer@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
CCS_StressTest_f
==============
*/

void __fastcall CCS_StressTest_f()
{
  ?CCS_StressTest_f@@YAXXZ();
}

/*
==============
Online_CachedContentStreamer::GetErrorReportingContext
==============
*/

void __fastcall Online_CachedContentStreamer::GetErrorReportingContext(Online_CachedContentStreamer *this, char *outData, int outLength)
{
  ?GetErrorReportingContext@Online_CachedContentStreamer@@AEAAXPEADH@Z(this, outData, outLength);
}

/*
==============
Online_CachedContentStreamer::OnRegistered
==============
*/

void __fastcall Online_CachedContentStreamer::OnRegistered(Online_CachedContentStreamer *this)
{
  ?OnRegistered@Online_CachedContentStreamer@@UEAAXXZ(this);
}

/*
==============
Online_CachedContentStreamer::Frame
==============
*/

void __fastcall Online_CachedContentStreamer::Frame(Online_CachedContentStreamer *this)
{
  ?Frame@Online_CachedContentStreamer@@UEAAXXZ(this);
}

/*
==============
Online_CachedContentStreamer::DebugLogCCSState
==============
*/

void __fastcall Online_CachedContentStreamer::DebugLogCCSState(Online_CachedContentStreamer *this, const char *msg)
{
  ?DebugLogCCSState@Online_CachedContentStreamer@@AEAAXPEBD@Z(this, msg);
}

/*
==============
CCS_DumpSystemState_f
==============
*/

void __fastcall CCS_DumpSystemState_f()
{
  ?CCS_DumpSystemState_f@@YAXXZ();
}

/*
==============
Online_CachedContentStreamer_OnListFilesSuccess
==============
*/

void __fastcall Online_CachedContentStreamer_OnListFilesSuccess(const int controllerIndex, const int category)
{
  ?Online_CachedContentStreamer_OnListFilesSuccess@@YAXHH@Z(controllerIndex, category);
}

/*
==============
Online_CachedContentStreamer::TryRequestStreamToCache
==============
*/

bool __fastcall Online_CachedContentStreamer::TryRequestStreamToCache(Online_CachedContentStreamer *this, const int controllerIndex, const dcacheType_t cacheType, dcacheLocation_t location, const char *fileName, unsigned int fileVersion, bool forceOverWrite, CCSPatchType ccsPatchType, void (__fastcall *OnSuccess)(const CCSPatchType, const dcacheType_t, const unsigned __int64, const dcacheLocation_t, const unsigned int, const bool), void (__fastcall *OnFailure)(const CCSPatchType, const Online_Error_CAT_CCS_t), void (__fastcall *OnProgress)(const CCSPatchType, const dcacheType_t, const unsigned __int64, const dcacheLocation_t, const unsigned int, const unsigned int, const unsigned int))
{
  return ?TryRequestStreamToCache@Online_CachedContentStreamer@@QEAA_NHW4dcacheType_t@@W4dcacheLocation_t@@PEBDI_NW4CCSPatchType@@P6AXW44@0_KW43@I_N@ZP6AX5W4Online_Error_CAT_CCS_t@@@ZP6AX5067III@Z@Z(this, controllerIndex, cacheType, location, fileName, fileVersion, forceOverWrite, ccsPatchType, OnSuccess, OnFailure, OnProgress);
}

/*
==============
Online_CachedContentStreamer_OnDownloadFilesFailed
==============
*/

void __fastcall Online_CachedContentStreamer_OnDownloadFilesFailed(const int controllerIndex, bdLobbyErrorCode errorCode)
{
  ?Online_CachedContentStreamer_OnDownloadFilesFailed@@YAXHW4bdLobbyErrorCode@@@Z(controllerIndex, errorCode);
}

/*
==============
Online_CachedContentStreamer::ClearStreamRequestAtIndex
==============
*/

void __fastcall Online_CachedContentStreamer::ClearStreamRequestAtIndex(Online_CachedContentStreamer *this, int streamIndex)
{
  ?ClearStreamRequestAtIndex@Online_CachedContentStreamer@@AEAAXH@Z(this, streamIndex);
}

/*
==============
Online_CachedContentStreamer::OnSignedOut
==============
*/

void __fastcall Online_CachedContentStreamer::OnSignedOut(Online_CachedContentStreamer *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_CachedContentStreamer@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_CachedContentStreamer::RegisterLuaFunctions
==============
*/

void __fastcall Online_CachedContentStreamer::RegisterLuaFunctions(Online_CachedContentStreamer *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_CachedContentStreamer@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_CachedContentStreamer::GetNextInactiveStreamListIndex
==============
*/

int __fastcall Online_CachedContentStreamer::GetNextInactiveStreamListIndex(Online_CachedContentStreamer *this)
{
  return ?GetNextInactiveStreamListIndex@Online_CachedContentStreamer@@AEAAHXZ(this);
}

/*
==============
CCSStressFileSuccess
==============
*/

void __fastcall CCSStressFileSuccess(const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int fileSize, const bool existingFile)
{
  ?CCSStressFileSuccess@@YAXW4CCSPatchType@@W4dcacheType_t@@_KW4dcacheLocation_t@@I_N@Z(patchType, cacheType, fileID, location, fileSize, existingFile);
}

/*
==============
Online_CachedContentStreamer::OnListFilesSuccess
==============
*/

void __fastcall Online_CachedContentStreamer::OnListFilesSuccess(Online_CachedContentStreamer *this, const int controllerIndex)
{
  ?OnListFilesSuccess@Online_CachedContentStreamer@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_CachedContentStreamer::OnDownloadFilesSuccess
==============
*/

void __fastcall Online_CachedContentStreamer::OnDownloadFilesSuccess(Online_CachedContentStreamer *this, const int controllerIndex, unsigned __int64 fileID, unsigned int fileSize)
{
  ?OnDownloadFilesSuccess@Online_CachedContentStreamer@@QEAAXH_KI@Z(this, controllerIndex, fileID, fileSize);
}

/*
==============
Online_CachedContentStreamer::OnUnregistered
==============
*/

void __fastcall Online_CachedContentStreamer::OnUnregistered(Online_CachedContentStreamer *this)
{
  ?OnUnregistered@Online_CachedContentStreamer@@UEAAXXZ(this);
}

/*
==============
Online_CachedContentStreamer_OnDownloadFilesSuccess
==============
*/

void __fastcall Online_CachedContentStreamer_OnDownloadFilesSuccess(const int controllerIndex, const dwCSReadPublisherFileTask *task)
{
  ?Online_CachedContentStreamer_OnDownloadFilesSuccess@@YAXHPEBUdwCSReadPublisherFileTask@@@Z(controllerIndex, task);
}

/*
==============
Online_CachedContentStreamer::Init
==============
*/

bool __fastcall Online_CachedContentStreamer::Init(Online_CachedContentStreamer *this)
{
  return ?Init@Online_CachedContentStreamer@@UEAA_NXZ(this);
}

/*
==============
Online_CachedContentStreamer::ClearCurrentStreamRequest
==============
*/

void __fastcall Online_CachedContentStreamer::ClearCurrentStreamRequest(Online_CachedContentStreamer *this)
{
  ?ClearCurrentStreamRequest@Online_CachedContentStreamer@@AEAAXXZ(this);
}

/*
==============
OnDownloadPublisherStorageFilesComplete
==============
*/

void __fastcall OnDownloadPublisherStorageFilesComplete(OnlineStorageTask *storageTask)
{
  ?OnDownloadPublisherStorageFilesComplete@@YAXPEAUOnlineStorageTask@@@Z(storageTask);
}

/*
==============
Online_CachedContentStreamer::OnCSShutdown
==============
*/

void __fastcall Online_CachedContentStreamer::OnCSShutdown(Online_CachedContentStreamer *this, const int controllerIndex)
{
  ?OnCSShutdown@Online_CachedContentStreamer@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnListPublisherStorageFilesComplete
==============
*/

void __fastcall OnListPublisherStorageFilesComplete(OnlineStorageTask *storageTask)
{
  ?OnListPublisherStorageFilesComplete@@YAXPEAUOnlineStorageTask@@@Z(storageTask);
}

/*
==============
Online_CachedContentStreamer::OutputCurrentState
==============
*/

void __fastcall Online_CachedContentStreamer::OutputCurrentState(Online_CachedContentStreamer *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_CachedContentStreamer@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
CCSStressFileProgress
==============
*/

void __fastcall CCSStressFileProgress(const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int packetBytes, const unsigned int currentDownloadBytes, const unsigned int totalSizeBytes)
{
  ?CCSStressFileProgress@@YAXW4CCSPatchType@@W4dcacheType_t@@_KW4dcacheLocation_t@@III@Z(patchType, cacheType, fileID, location, packetBytes, currentDownloadBytes, totalSizeBytes);
}

/*
==============
Online_CachedContentStreamer::TryStartCurrentFileList
==============
*/

bool __fastcall Online_CachedContentStreamer::TryStartCurrentFileList(Online_CachedContentStreamer *this)
{
  return ?TryStartCurrentFileList@Online_CachedContentStreamer@@AEAA_NXZ(this);
}

/*
==============
Online_CachedContentStreamer::OnSignedIn
==============
*/

void __fastcall Online_CachedContentStreamer::OnSignedIn(Online_CachedContentStreamer *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_CachedContentStreamer@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_CachedContentStreamer::Online_CachedContentStreamer
==============
*/

void __fastcall Online_CachedContentStreamer::Online_CachedContentStreamer(Online_CachedContentStreamer *this)
{
  ??0Online_CachedContentStreamer@@AEAA@XZ(this);
}

/*
==============
Online_CachedContentStreamer::GetInstance
==============
*/

Online_CachedContentStreamer *__fastcall Online_CachedContentStreamer::GetInstance()
{
  return ?GetInstance@Online_CachedContentStreamer@@SAAEAV1@XZ();
}

/*
==============
Online_CachedContentStreamer::HandleDownload
==============
*/

void __fastcall Online_CachedContentStreamer::HandleDownload(Online_CachedContentStreamer *this, void *data, unsigned int dataSize, unsigned int bytesDownloaded, unsigned int fileSize, unsigned __int64 fileID)
{
  ?HandleDownload@Online_CachedContentStreamer@@QEAAXPEAXIII_K@Z(this, data, dataSize, bytesDownloaded, fileSize, fileID);
}

/*
==============
CCSStressFileFailure
==============
*/

void __fastcall CCSStressFileFailure(const CCSPatchType patchType, const Online_Error_CAT_CCS_t error)
{
  ?CCSStressFileFailure@@YAXW4CCSPatchType@@W4Online_Error_CAT_CCS_t@@@Z(patchType, error);
}

/*
==============
Online_CachedContentStreamer::SetCurrentStreamState
==============
*/

void __fastcall Online_CachedContentStreamer::SetCurrentStreamState(Online_CachedContentStreamer *this, ccsStreamState nextState)
{
  ?SetCurrentStreamState@Online_CachedContentStreamer@@AEAAXW4ccsStreamState@@@Z(this, nextState);
}

/*
==============
Online_CachedContentStreamer::OnPublisherVariablesFetched
==============
*/

void __fastcall Online_CachedContentStreamer::OnPublisherVariablesFetched(Online_CachedContentStreamer *this)
{
  ?OnPublisherVariablesFetched@Online_CachedContentStreamer@@QEAAXXZ(this);
}

/*
==============
OnDownloadPublisherStorageFilesHandleDownload
==============
*/

unsigned int __fastcall OnDownloadPublisherStorageFilesHandleDownload(void *data, unsigned int dataSize, unsigned int bytesDownloaded, unsigned int fileSize, unsigned __int64 fileID)
{
  return ?OnDownloadPublisherStorageFilesHandleDownload@@YAIPEAXIII_K@Z(data, dataSize, bytesDownloaded, fileSize, fileID);
}

/*
==============
Online_CachedContentStreamer_HandleDownload
==============
*/

void __fastcall Online_CachedContentStreamer_HandleDownload(void *data, unsigned int dataSize, unsigned int bytesDownloaded, unsigned int fileSize, const dwCSReadPublisherFileTask *task)
{
  ?Online_CachedContentStreamer_HandleDownload@@YAXPEAXIIIPEBUdwCSReadPublisherFileTask@@@Z(data, dataSize, bytesDownloaded, fileSize, task);
}

/*
==============
Online_CachedContentStreamer::TryStartCurrentDownload
==============
*/

bool __fastcall Online_CachedContentStreamer::TryStartCurrentDownload(Online_CachedContentStreamer *this)
{
  return ?TryStartCurrentDownload@Online_CachedContentStreamer@@AEAA_NXZ(this);
}

/*
==============
Online_CachedContentStreamer::OnDisconnect
==============
*/

void __fastcall Online_CachedContentStreamer::OnDisconnect(Online_CachedContentStreamer *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_CachedContentStreamer@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_CachedContentStreamer::ControllerFrame
==============
*/

void __fastcall Online_CachedContentStreamer::ControllerFrame(Online_CachedContentStreamer *this, const int controllerIndex)
{
  ?ControllerFrame@Online_CachedContentStreamer@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_CachedContentStreamer::DumpSystemState
==============
*/

void __fastcall Online_CachedContentStreamer::DumpSystemState(Online_CachedContentStreamer *this)
{
  ?DumpSystemState@Online_CachedContentStreamer@@QEAAXXZ(this);
}

/*
==============
Online_CachedContentStreamer_OnListFilesFailed
==============
*/

void __fastcall Online_CachedContentStreamer_OnListFilesFailed(const int controllerIndex, const int category, bdLobbyErrorCode error)
{
  ?Online_CachedContentStreamer_OnListFilesFailed@@YAXHHW4bdLobbyErrorCode@@@Z(controllerIndex, category, error);
}

/*
==============
Online_CachedContentStreamer::OnRegistered
==============
*/
void Online_CachedContentStreamer::OnRegistered(Online_CachedContentStreamer *this)
{
  ;
}

/*
==============
Online_CachedContentStreamer::OnUnregistered
==============
*/
void Online_CachedContentStreamer::OnUnregistered(Online_CachedContentStreamer *this)
{
  ;
}

/*
==============
Online_CachedContentStreamer::Init
==============
*/
bool Online_CachedContentStreamer::Init(Online_CachedContentStreamer *this)
{
  PublisherVariableManager *Instance; 
  bool result; 

  Cmd_AddCommandInternal("ccs_dump", CCS_DumpSystemState_f, &CCS_DumpSystemState_f_VAR);
  Cmd_AddCommandInternal("ccs_stressTest", CCS_StressTest_f, &CCS_StressTest_f_VAR);
  Instance = PublisherVariableManager::GetInstance();
  PublisherVariableManager::AddRetrievedCallback(Instance, StaticOnPublisherVariablesFetched);
  result = 1;
  this->m_initialized = 1;
  return result;
}

/*
==============
Online_CachedContentStreamer::Uninit
==============
*/
void Online_CachedContentStreamer::Uninit(Online_CachedContentStreamer *this)
{
  ;
}

/*
==============
Online_CachedContentStreamer::Frame
==============
*/
void Online_CachedContentStreamer::Frame(Online_CachedContentStreamer *this)
{
  unsigned __int16 m_currentStreamIndex; 
  __int64 v3; 
  ccsStreamState state; 
  DWServicesAccess *Instance; 
  int v6; 
  const dvar_t *v7; 
  int v8; 
  Online_ErrorReporting *InstancePtr; 
  __int64 v10; 
  void (__fastcall *OnFailure)(const CCSPatchType, const Online_Error_CAT_CCS_t); 
  DWServicesAccess *v12; 
  const dvar_t *v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  char outData[1024]; 

  m_currentStreamIndex = this->m_currentStreamIndex;
  if ( m_currentStreamIndex >= 0x80u )
  {
    v16 = 128;
    v15 = m_currentStreamIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentStreamIndex ) < (unsigned)( 128 )", "m_currentStreamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v3 = this->m_currentStreamIndex;
  if ( this->m_streamList[v3].state )
  {
    if ( this->m_streamList[v3].controllerIndex == -1 )
    {
      v18 = -1;
      v17 = -1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 183, ASSERT_TYPE_ASSERT, "( m_streamList[m_currentStreamIndex].controllerIndex ) != ( (-1) )", "%s != %s\n\t%i, %i", "m_streamList[m_currentStreamIndex].controllerIndex", "INVALID_CONTROLLER_PORT", v17, v18) )
        __debugbreak();
    }
    state = this->m_streamList[this->m_currentStreamIndex].state;
    if ( state == CCS_STATE_ERROR_CLEANUP )
    {
      Instance = DWServicesAccess::GetInstance();
      if ( !DWServicesAccess::isDisconnected(Instance, this->m_streamList[this->m_currentStreamIndex].controllerIndex) )
        LiveStorage_CS_ClearDWOverlappedTasks(this->m_streamList[this->m_currentStreamIndex].controllerIndex);
      Online_CachedContentStreamer::ClearCurrentStreamRequest(this);
    }
    else
    {
      if ( state <= CCS_STATE_WAIT_LISTING_START )
        goto LABEL_22;
      v6 = Sys_Milliseconds();
      v7 = DVARINT_cachedContentStreamRequestTimeout;
      v8 = v6 - this->m_streamList[this->m_currentStreamIndex].lastAccessTime;
      if ( !DVARINT_cachedContentStreamRequestTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cachedContentStreamRequestTimeout") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v8 <= v7->current.integer )
      {
LABEL_22:
        v13 = DVARBOOL_online_ccs_cs_support_enabled;
        if ( !DVARBOOL_online_ccs_cs_support_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_ccs_cs_support_enabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v13);
        if ( !v13->current.enabled || LiveStorage_CS_IsAvailable(this->m_streamList[this->m_currentStreamIndex].controllerIndex) && !LiveStorage_CS_IsTaskInProgress(this->m_streamList[this->m_currentStreamIndex].controllerIndex, "listpublisherfiles") && !LiveStorage_CS_IsTaskInProgress(this->m_streamList[this->m_currentStreamIndex].controllerIndex, "downloadpublisherfile") )
        {
          v14 = this->m_currentStreamIndex;
          if ( this->m_streamList[v14].state == CCS_STATE_WAIT_LISTING_START )
          {
            Online_CachedContentStreamer::TryStartCurrentFileList(this);
          }
          else if ( this->m_streamList[v14].state == CCS_STATE_WAIT_DOWNLOAD_START )
          {
            Online_CachedContentStreamer::TryStartCurrentDownload(this);
          }
        }
      }
      else
      {
        Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
        InstancePtr = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, outData);
        v10 = this->m_currentStreamIndex;
        OnFailure = this->m_streamList[v10].OnFailure;
        if ( OnFailure )
          OnFailure((const CCSPatchType)this->m_streamList[v10].patchType, MOVEMENT);
        v12 = DWServicesAccess::GetInstance();
        if ( !DWServicesAccess::isDisconnected(v12, this->m_streamList[this->m_currentStreamIndex].controllerIndex) )
          LiveStorage_CS_ClearDWOverlappedTasks(this->m_streamList[this->m_currentStreamIndex].controllerIndex);
        Online_CachedContentStreamer::ClearCurrentStreamRequest(this);
      }
    }
  }
}

/*
==============
Online_CachedContentStreamer::ControllerFrame
==============
*/
void Online_CachedContentStreamer::ControllerFrame(Online_CachedContentStreamer *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_CachedContentStreamer::OnSignedIn
==============
*/
void Online_CachedContentStreamer::OnSignedIn(Online_CachedContentStreamer *this, const int controllerIndex, GenericSignInState signinState)
{
  unsigned __int16 m_currentStreamIndex; 
  int v7; 
  int v8; 

  m_currentStreamIndex = this->m_currentStreamIndex;
  if ( m_currentStreamIndex >= 0x80u )
  {
    v8 = 128;
    v7 = m_currentStreamIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 579, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentStreamIndex ) < (unsigned)( 128 )", "m_currentStreamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( this->m_streamList[this->m_currentStreamIndex].state )
  {
    if ( signinState < SignedInToDemonWare )
      Online_CachedContentStreamer::ResetForController(this, controllerIndex);
  }
}

/*
==============
Online_CachedContentStreamer::OnSignedOut
==============
*/

void __fastcall Online_CachedContentStreamer::OnSignedOut(Online_CachedContentStreamer *this, const int controllerIndex, GenericSignOutState signOutState)
{
  Online_CachedContentStreamer::ResetForController(this, controllerIndex);
}

/*
==============
Online_CachedContentStreamer::OnDisconnect
==============
*/

void __fastcall Online_CachedContentStreamer::OnDisconnect(Online_CachedContentStreamer *this, ONLINE_DISCONNECT reason)
{
  Online_CachedContentStreamer::Reset(this);
}

/*
==============
Online_CachedContentStreamer::RegisterLuaFunctions
==============
*/
void Online_CachedContentStreamer::RegisterLuaFunctions(Online_CachedContentStreamer *this, lua_State *luaVM)
{
  ;
}

/*
==============
Online_CachedContentStreamer::OutputCurrentState
==============
*/
void Online_CachedContentStreamer::OutputCurrentState(Online_CachedContentStreamer *this, const int controllerIndex)
{
  Com_Printf(25, "CACHEDCONTENTSTREAMER SYSTEM DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "CACHEDCONTENTSTREAMER SYSTEM DUMP END\n");
}

/*
==============
Online_CachedContentStreamer::Online_CachedContentStreamer
==============
*/
void Online_CachedContentStreamer::Online_CachedContentStreamer(Online_CachedContentStreamer *this)
{
  ccsStreamRequestInfo_t *m_streamList; 
  __int64 v3; 

  this->m_nextSystem = NULL;
  this->m_initialized = 0;
  this->__vftable = (Online_CachedContentStreamer_vtbl *)&Online_CachedContentStreamer::`vftable';
  bdFileMetaData::bdFileMetaData(&this->m_cachedContentFileMetaData);
  m_streamList = this->m_streamList;
  v3 = 128i64;
  do
  {
    ccsStreamRequestInfo_t::ccsStreamRequestInfo_t(m_streamList++);
    --v3;
  }
  while ( v3 );
  Online_CachedContentStreamer::Reset(this);
}

/*
==============
CCSStressFileFailure
==============
*/
void CCSStressFileFailure(const CCSPatchType patchType, __int64 error)
{
  int v2; 

  ++faileCount;
  v2 = totalCount;
  Com_Printf(25, "CCSStressFileFailure:[%d+%d=%d] %zu \n", (unsigned int)successCount, (unsigned int)faileCount, v2, error);
}

/*
==============
CCSStressFileProgress
==============
*/
void CCSStressFileProgress(const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int packetBytes, const unsigned int currentDownloadBytes, const unsigned int totalSizeBytes)
{
  Com_Printf(25, "CCSStressFileProgress: %zu, %u, %u, %u, %u, %u \n", fileID, (unsigned int)cacheType, location, packetBytes, currentDownloadBytes, totalSizeBytes);
}

/*
==============
CCSStressFileSuccess
==============
*/
void CCSStressFileSuccess(const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int fileSize, const bool existingFile)
{
  int v6; 
  BOOL v9; 

  v9 = existingFile;
  ++successCount;
  v6 = totalCount;
  Com_Printf(25, "CCSStressFileSuccess:[%d+%d=%d] %zu, %u, %u, %u, %u \n", (unsigned int)successCount, (unsigned int)faileCount, v6, fileID, cacheType, location, v9, fileSize);
}

/*
==============
CCS_DumpSystemState_f
==============
*/
void CCS_DumpSystemState_f(void)
{
  Online_CachedContentStreamer::DumpSystemState(&Online_CachedContentStreamer::s_instance);
}

/*
==============
CCS_StressTest_f
==============
*/
void CCS_StressTest_f(void)
{
  int i; 

  for ( i = 0; i < 50; ++i )
  {
    Com_Printf(25, "CCS_StressTest_f: Requested %d \n", (unsigned int)i);
    if ( Online_CachedContentStreamer::TryRequestStreamToCache(&Online_CachedContentStreamer::s_instance, 0, DCACHE_TYPE_PERSISTENT, DCACHE_LOC_CCS_DEFAULT, "patch_manifest_ps4_6.0.txt", 1u, 1, MOVEMENT, CCSStressFileSuccess, CCSStressFileFailure, CCSStressFileProgress) )
      ++totalCount;
  }
}

/*
==============
Online_CachedContentStreamer::ClearCurrentStreamRequest
==============
*/
void Online_CachedContentStreamer::ClearCurrentStreamRequest(Online_CachedContentStreamer *this)
{
  unsigned __int16 m_currentStreamIndex; 
  int v3; 
  int v4; 

  m_currentStreamIndex = this->m_currentStreamIndex;
  if ( m_currentStreamIndex >= 0x80u )
  {
    v4 = 128;
    v3 = m_currentStreamIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 697, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentStreamIndex ) < (unsigned)( 128 )", "m_currentStreamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  Online_CachedContentStreamer::ClearStreamRequestAtIndex(this, this->m_currentStreamIndex);
  memset_0(&this->m_listCachedContentFilesInfo, 0, 0xA0ui64);
  this->m_currentStreamIndex = ((unsigned __int8)this->m_currentStreamIndex + 1) & 0x7F;
}

/*
==============
Online_CachedContentStreamer::ClearStreamRequestAtIndex
==============
*/
void Online_CachedContentStreamer::ClearStreamRequestAtIndex(Online_CachedContentStreamer *this, int streamIndex)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = streamIndex;
  if ( (unsigned int)streamIndex >= 0x80 )
  {
    v6 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 689, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( 128 )", "streamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", streamIndex, v6) )
      __debugbreak();
  }
  v4 = v2;
  memset_0(&this->m_streamList[v4].state, 0, 0xC4ui64);
  this->m_streamList[v4].controllerIndex = -1;
}

/*
==============
Online_CachedContentStreamer::DebugLogCCSState
==============
*/
void Online_CachedContentStreamer::DebugLogCCSState(Online_CachedContentStreamer *this, const char *msg)
{
  __int64 m_currentStreamIndex; 
  char *v4; 
  const char *v5; 
  int v6; 
  int v7; 

  m_currentStreamIndex = this->m_currentStreamIndex;
  v4 = (char *)this + 200 * m_currentStreamIndex;
  v7 = *((_DWORD *)v4 + 4996);
  v6 = *((_DWORD *)v4 + 5033);
  v5 = j_va("ccs state: %s. [ Context: Idx:%d, ContIdx:%d, file:%s, category:%d, cacheType:%d ].\n", msg, m_currentStreamIndex, *((unsigned int *)v4 + 4994), v4 + 19992, v6, v7);
  OnlineSystem::DebugLog(this, v5);
}

/*
==============
Online_CachedContentStreamer::DumpSystemState
==============
*/
void Online_CachedContentStreamer::DumpSystemState(Online_CachedContentStreamer *this)
{
  const char *v2; 
  char *streamFileName; 
  int i; 
  __int64 v5; 
  char *v6; 
  const dvar_t *v7; 
  const char *v8; 
  char *fmt; 
  __int64 v10; 

  v2 = j_va("ccs: %20s %20s %20s %20s %20s %30s\n", "Idx", "ControllerIdx", "State", "Cache Type", "File Cat", "FileName");
  OnlineSystem::DebugLog(this, v2);
  streamFileName = this->m_streamList[0].streamFileName;
  for ( i = 0; i < 128; ++i )
  {
    v5 = *((unsigned int *)streamFileName - 3);
    if ( (_DWORD)v5 )
    {
      LODWORD(v10) = *((_DWORD *)streamFileName + 35);
      LODWORD(fmt) = *((_DWORD *)streamFileName - 2);
      v6 = j_va("ccs: %20d %20d %20d %20d %20d %30s\n", (unsigned int)i, *((unsigned int *)streamFileName - 4), v5, fmt, v10, streamFileName);
      v7 = DVARINT_onlineSystemDebugAll;
      v8 = v6;
      if ( !DVARINT_onlineSystemDebugAll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlineSystemDebugAll") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.integer || this->ShowLogOutput(this) )
        Com_Printf(25, "%s: %s", this->m_name, v8);
    }
    streamFileName += 200;
  }
}

/*
==============
Online_CachedContentStreamer::GetErrorReportingContext
==============
*/
void Online_CachedContentStreamer::GetErrorReportingContext(Online_CachedContentStreamer *this, char *outData, int outLength)
{
  unsigned __int64 v3; 
  unsigned __int16 m_currentStreamIndex; 
  int *p_state; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned int v25; 
  __int64 *v26; 
  OnlineStorage *Instance; 
  unsigned int StateCount; 
  __int64 v29; 
  char *v30; 
  int v31; 
  char *fmt; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  int v40; 

  v3 = outLength;
  v35 = 0i64;
  v36 = 0i64;
  v37 = 0i64;
  v38 = 0i64;
  v39 = 0i64;
  v40 = 0;
  m_currentStreamIndex = this->m_currentStreamIndex;
  if ( m_currentStreamIndex >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 1137, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentStreamIndex ) < (unsigned)( 128 )", "m_currentStreamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", m_currentStreamIndex, 128) )
    __debugbreak();
  p_state = (int *)&this->m_streamList[2].state;
  v8 = 8i64;
  do
  {
    v9 = *(p_state - 100);
    if ( (int)v9 < 6 )
      ++*((_DWORD *)&v35 + v9);
    v10 = *(p_state - 50);
    if ( (int)v10 < 6 )
      ++*((_DWORD *)&v35 + v10);
    v11 = *p_state;
    if ( (int)v11 < 6 )
      ++*((_DWORD *)&v35 + v11);
    v12 = p_state[50];
    if ( (int)v12 < 6 )
      ++*((_DWORD *)&v35 + v12);
    v13 = p_state[100];
    if ( (int)v13 < 6 )
      ++*((_DWORD *)&v35 + v13);
    v14 = p_state[150];
    if ( (int)v14 < 6 )
      ++*((_DWORD *)&v35 + v14);
    v15 = p_state[200];
    if ( (int)v15 < 6 )
      ++*((_DWORD *)&v35 + v15);
    v16 = p_state[250];
    if ( (int)v16 < 6 )
      ++*((_DWORD *)&v35 + v16);
    v17 = p_state[300];
    if ( (int)v17 < 6 )
      ++*((_DWORD *)&v35 + v17);
    v18 = p_state[350];
    if ( (int)v18 < 6 )
      ++*((_DWORD *)&v35 + v18);
    v19 = p_state[400];
    if ( (int)v19 < 6 )
      ++*((_DWORD *)&v35 + v19);
    v20 = p_state[450];
    if ( (int)v20 < 6 )
      ++*((_DWORD *)&v35 + v20);
    v21 = p_state[500];
    if ( (int)v21 < 6 )
      ++*((_DWORD *)&v35 + v21);
    v22 = p_state[550];
    if ( (int)v22 < 6 )
      ++*((_DWORD *)&v35 + v22);
    v23 = p_state[600];
    if ( (int)v23 < 6 )
      ++*((_DWORD *)&v35 + v23);
    v24 = p_state[650];
    if ( (int)v24 < 6 )
      ++*((_DWORD *)&v35 + v24);
    p_state += 800;
    --v8;
  }
  while ( v8 );
  v25 = 0;
  v26 = &v38;
  do
  {
    Instance = OnlineStorage::GetInstance();
    StateCount = OnlineStorage::GetStateCount(Instance, (OnlineStorageTaskStatus)v25++);
    *(_DWORD *)v26 = StateCount;
    v26 = (__int64 *)((char *)v26 + 4);
  }
  while ( v25 < 5 );
  v29 = this->m_currentStreamIndex;
  v30 = (char *)this + 200 * v29;
  v31 = Sys_Milliseconds();
  LODWORD(v34) = *((_DWORD *)v30 + 4996);
  LODWORD(v33) = *((_DWORD *)v30 + 4995);
  LODWORD(fmt) = *((_DWORD *)v30 + 4994);
  Com_sprintf(outData, v3, "%d,%d,%d,%d,%d,%s,%zu,%u,%u,%d,%d,%d,(%u,%u,%u,%u,%u,%u),(%u,%u,%u,%u,%u)", (unsigned int)v29, fmt, v33, v34, *((_DWORD *)v30 + 4997), v30 + 19992, *((_QWORD *)v30 + 2515), *((_DWORD *)v30 + 5032), *((_DWORD *)v30 + 5033), *((_DWORD *)v30 + 5036), *((_DWORD *)v30 + 5037), v31 - *((_DWORD *)v30 + 5034), v35, HIDWORD(v35), v36, HIDWORD(v36), v37, HIDWORD(v37), v38, HIDWORD(v38), v39, HIDWORD(v39), v40);
}

/*
==============
Online_CachedContentStreamer::GetInstance
==============
*/
Online_CachedContentStreamer *Online_CachedContentStreamer::GetInstance()
{
  return &Online_CachedContentStreamer::s_instance;
}

/*
==============
Online_CachedContentStreamer::GetInstancePtr
==============
*/
Online_CachedContentStreamer *Online_CachedContentStreamer::GetInstancePtr()
{
  return &Online_CachedContentStreamer::s_instance;
}

/*
==============
Online_CachedContentStreamer::GetNextInactiveStreamListIndex
==============
*/
__int64 Online_CachedContentStreamer::GetNextInactiveStreamListIndex(Online_CachedContentStreamer *this)
{
  int m_currentStreamIndex; 
  int v2; 
  __int64 result; 

  m_currentStreamIndex = this->m_currentStreamIndex;
  v2 = 0;
  while ( 1 )
  {
    result = (m_currentStreamIndex + v2 + 1) & 0x8000007F;
    if ( m_currentStreamIndex + v2 + 1 < 0 )
      result = ((unsigned __int8)(((m_currentStreamIndex + v2 + 1) & 0x7F) - 1) | 0xFFFFFF80) + 1;
    if ( this->m_streamList[(int)result].state == CCS_STATE_INACTIVE )
      break;
    if ( ++v2 >= 128 )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
Online_CachedContentStreamer::HandleDownload
==============
*/
void Online_CachedContentStreamer::HandleDownload(Online_CachedContentStreamer *this, void *data, unsigned int dataSize, unsigned int bytesDownloaded, unsigned int fileSize, unsigned __int64 fileID)
{
  unsigned __int16 m_currentStreamIndex; 
  __int64 v13; 
  ccsStreamState state; 
  Online_ErrorReporting *v15; 
  Online_ErrorReporting *InstancePtr; 
  unsigned __int16 v17; 
  unsigned __int64 streamFileID; 
  int v19; 
  Online_ErrorReporting *v20; 
  __int64 v21; 
  void (__fastcall *OnProgress)(const CCSPatchType, const dcacheType_t, const unsigned __int64, const dcacheLocation_t, const unsigned int, const unsigned int, const unsigned int); 
  char *fmt; 
  char *fmta; 
  unsigned __int8 *buffer; 
  unsigned __int8 *buffera; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  char outData[1024]; 

  m_currentStreamIndex = this->m_currentStreamIndex;
  if ( m_currentStreamIndex >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 254, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentStreamIndex ) < (unsigned)( 128 )", "m_currentStreamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", m_currentStreamIndex, 128) )
    __debugbreak();
  v13 = this->m_currentStreamIndex;
  state = this->m_streamList[v13].state;
  if ( state )
  {
    if ( state == CCS_STATE_ACTIVE_DOWNLOAD )
    {
      if ( this->m_streamList[v13].controllerIndex == -1 )
      {
        Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
        InstancePtr = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, outData);
      }
      else if ( dataSize )
      {
        Sys_LockWrite(&s_dcacheStreamCritSect);
        v17 = this->m_currentStreamIndex;
        if ( v17 >= 0x80u )
        {
          LODWORD(v34) = 128;
          LODWORD(buffer) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 286, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentStreamIndex ) < (unsigned)( 128 )", "m_currentStreamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", buffer, v34) )
            __debugbreak();
        }
        streamFileID = this->m_streamList[this->m_currentStreamIndex].streamFileID;
        if ( streamFileID != fileID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 287, ASSERT_TYPE_ASSERT, "( m_streamList[m_currentStreamIndex].streamFileID ) == ( fileID )", "%s == %s\n\t%lli, %lli", "m_streamList[m_currentStreamIndex].streamFileID", "fileID", streamFileID, fileID) )
          __debugbreak();
        if ( this->m_streamList[this->m_currentStreamIndex].state != CCS_STATE_ACTIVE_DOWNLOAD )
        {
          LODWORD(v36) = 4;
          LODWORD(v35) = this->m_streamList[this->m_currentStreamIndex].state;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 288, ASSERT_TYPE_ASSERT, "( m_streamList[m_currentStreamIndex].state ) == ( CCS_STATE_ACTIVE_DOWNLOAD )", "%s == %s\n\t%i, %i", "m_streamList[m_currentStreamIndex].state", "CCS_STATE_ACTIVE_DOWNLOAD", v35, v36) )
            __debugbreak();
        }
        v19 = DCache_StreamToCache(this->m_streamList[this->m_currentStreamIndex].cacheType, fileID, this->m_streamList[this->m_currentStreamIndex].locationType, bytesDownloaded, dataSize, (unsigned __int8 *)data);
        if ( v19 == dataSize )
        {
          v21 = this->m_currentStreamIndex;
          OnProgress = this->m_streamList[v21].OnProgress;
          if ( OnProgress )
            OnProgress((const CCSPatchType)this->m_streamList[v21].patchType, (const dcacheType_t)this->m_streamList[v21].cacheType, this->m_streamList[v21].streamFileID, (const dcacheLocation_t)this->m_streamList[v21].locationType, dataSize, bytesDownloaded, fileSize);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm1, xmm1, rbp
            vcvtsi2ss xmm0, xmm0, rsi
            vdivss  xmm1, xmm1, xmm0
            vmulss  xmm2, xmm1, cs:__real@42c80000
            vcvtss2sd xmm3, xmm2, xmm2
          }
          this->m_streamList[this->m_currentStreamIndex].lastAccessTime = Sys_Milliseconds();
          __asm { vmovsd  [rsp+498h+buffer], xmm3 }
          LODWORD(fmta) = bytesDownloaded;
          j_sprintf_s(outData, 0x400ui64, "handle dl.[ packetSize:%d, totalSize:%d, percent:%f ]\n", dataSize, fmta, *(double *)&buffera);
          OnlineSystem::DebugLog(this, outData);
        }
        else
        {
          Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
          v20 = Online_ErrorReporting::GetInstancePtr();
          Online_ErrorReporting::ReportError(v20, (Online_Error_CAT_CCS_t)32, outData);
          LODWORD(fmta) = v19;
          j_sprintf_s(outData, 0x400ui64, "handle dl. write mismatch. bytes got:%d, bytes written:%d.\n", dataSize, fmta);
          OnlineSystem::DebugLog(this, outData);
          Online_CachedContentStreamer::SetCurrentStreamState(this, CCS_STATE_ERROR_CLEANUP);
        }
        Sys_UnlockWrite(&s_dcacheStreamCritSect);
      }
      else
      {
        LODWORD(fmt) = fileSize;
        j_sprintf_s(outData, 0x400ui64, "handle dl. early exit on 0 data size. bytes downloaded:%d, file size:%d.\n", bytesDownloaded, fmt);
        OnlineSystem::DebugLog(this, outData);
      }
    }
    else
    {
      Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
      v15 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v15, (Online_Error_CAT_CCS_IOSTREAMS_t)0x2000, outData);
    }
  }
}

/*
==============
Online_CachedContentStreamer::OnCSShutdown
==============
*/
void Online_CachedContentStreamer::OnCSShutdown(Online_CachedContentStreamer *this, const int controllerIndex)
{
  unsigned __int16 m_currentStreamIndex; 
  __int64 v5; 
  void (__fastcall *OnFailure)(const CCSPatchType, const Online_Error_CAT_CCS_t); 
  char *v7; 
  int v8; 
  int v9; 

  m_currentStreamIndex = this->m_currentStreamIndex;
  if ( m_currentStreamIndex >= 0x80u )
  {
    v9 = 128;
    v8 = m_currentStreamIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 550, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentStreamIndex ) < (unsigned)( 128 )", "m_currentStreamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v5 = this->m_currentStreamIndex;
  if ( this->m_streamList[v5].controllerIndex == controllerIndex )
  {
    if ( this->m_streamList[v5].state )
    {
      OnFailure = this->m_streamList[v5].OnFailure;
      if ( OnFailure )
        OnFailure((const CCSPatchType)this->m_streamList[v5].patchType, MOVEMENT);
    }
  }
  Sys_LockWrite(&s_dcacheStreamCritSect);
  v7 = (char *)this + 200 * this->m_currentStreamIndex;
  if ( *((_DWORD *)v7 + 4995) == 4 )
    DCache_DeleteFromCache(*((dcacheType_t *)v7 + 4996), *((_QWORD *)v7 + 2515), *((dcacheLocation_t *)v7 + 4997));
  Sys_UnlockWrite(&s_dcacheStreamCritSect);
  Online_CachedContentStreamer::ResetForController(this, controllerIndex);
}

/*
==============
Online_CachedContentStreamer::OnDownloadFilesFailed
==============
*/
void Online_CachedContentStreamer::OnDownloadFilesFailed(Online_CachedContentStreamer *this, const int controllerIndex)
{
  unsigned __int16 m_currentStreamIndex; 
  __int64 v5; 
  ccsStreamState state; 
  Online_ErrorReporting *v7; 
  Online_ErrorReporting *v8; 
  __int64 v9; 
  void (__fastcall *OnFailure)(const CCSPatchType, const Online_Error_CAT_CCS_t); 
  Online_ErrorReporting *InstancePtr; 
  char *v12; 
  const char *v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  int v19; 
  char outData[1024]; 

  m_currentStreamIndex = this->m_currentStreamIndex;
  if ( m_currentStreamIndex >= 0x80u )
  {
    v17 = 128;
    v15 = m_currentStreamIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 334, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentStreamIndex ) < (unsigned)( 128 )", "m_currentStreamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  v5 = this->m_currentStreamIndex;
  state = this->m_streamList[v5].state;
  if ( state )
  {
    if ( state == CCS_STATE_ACTIVE_DOWNLOAD )
    {
      if ( this->m_streamList[v5].controllerIndex != controllerIndex )
      {
        v19 = controllerIndex;
        v18 = this->m_streamList[v5].controllerIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 348, ASSERT_TYPE_ASSERT, "( m_streamList[m_currentStreamIndex].controllerIndex ) == ( controllerIndex )", "%s == %s\n\t%i, %i", "m_streamList[m_currentStreamIndex].controllerIndex", "controllerIndex", v18, v19) )
          __debugbreak();
      }
      if ( this->m_streamList[this->m_currentStreamIndex].controllerIndex == controllerIndex )
      {
        Sys_LockWrite(&s_dcacheStreamCritSect);
        if ( this->m_streamList[this->m_currentStreamIndex].state != CCS_STATE_ACTIVE_DOWNLOAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 359, ASSERT_TYPE_ASSERT, "(m_streamList[m_currentStreamIndex].state == CCS_STATE_ACTIVE_DOWNLOAD)", (const char *)&queryFormat, "m_streamList[m_currentStreamIndex].state == CCS_STATE_ACTIVE_DOWNLOAD") )
          __debugbreak();
        v9 = this->m_currentStreamIndex;
        OnFailure = this->m_streamList[v9].OnFailure;
        if ( OnFailure )
          OnFailure((const CCSPatchType)this->m_streamList[v9].patchType, (const Online_Error_CAT_CCS_t)8i64);
        Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
        InstancePtr = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_t)8, outData);
        v12 = (char *)this + 200 * this->m_currentStreamIndex;
        LODWORD(v16) = *((_DWORD *)v12 + 4996);
        LODWORD(v14) = *((_DWORD *)v12 + 5033);
        v13 = j_va("ccs state: %s. [ Context: Idx:%d, ContIdx:%d, file:%s, category:%d, cacheType:%d ].\n", "ccs download: failed to download.", this->m_currentStreamIndex, *((unsigned int *)v12 + 4994), v12 + 19992, v14, v16);
        OnlineSystem::DebugLog(this, v13);
        Online_CachedContentStreamer::ClearCurrentStreamRequest(this);
        Sys_UnlockWrite(&s_dcacheStreamCritSect);
      }
      else
      {
        Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
        v8 = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(v8, MOVEMENT, outData);
      }
    }
    else
    {
      Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
      v7 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v7, (Online_Error_CAT_CCS_IOSTREAMS_t)4096, outData);
    }
  }
}

/*
==============
Online_CachedContentStreamer::OnDownloadFilesSuccess
==============
*/
void Online_CachedContentStreamer::OnDownloadFilesSuccess(Online_CachedContentStreamer *this, const int controllerIndex, unsigned __int64 fileID, unsigned int fileSize)
{
  unsigned __int16 m_currentStreamIndex; 
  __int64 v9; 
  ccsStreamState state; 
  Online_ErrorReporting *v11; 
  Online_ErrorReporting *v12; 
  bool v13; 
  char *v14; 
  void (__fastcall *v15)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int, _DWORD); 
  void (__fastcall *v16)(_QWORD, __int64); 
  Online_ErrorReporting *InstancePtr; 
  char *v18; 
  const char *v19; 
  __int64 modifiedTime; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  char outData[1024]; 

  m_currentStreamIndex = this->m_currentStreamIndex;
  if ( m_currentStreamIndex >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 382, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentStreamIndex ) < (unsigned)( 128 )", "m_currentStreamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", m_currentStreamIndex, 128) )
    __debugbreak();
  v9 = this->m_currentStreamIndex;
  state = this->m_streamList[v9].state;
  if ( state )
  {
    if ( state == CCS_STATE_ACTIVE_DOWNLOAD )
    {
      if ( this->m_streamList[v9].controllerIndex != controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 396, ASSERT_TYPE_ASSERT, "( m_streamList[m_currentStreamIndex].controllerIndex ) == ( controllerIndex )", "%s == %s\n\t%i, %i", "m_streamList[m_currentStreamIndex].controllerIndex", "controllerIndex", this->m_streamList[v9].controllerIndex, controllerIndex) )
        __debugbreak();
      if ( this->m_streamList[this->m_currentStreamIndex].controllerIndex == controllerIndex )
      {
        Sys_LockWrite(&s_dcacheStreamCritSect);
        if ( this->m_streamList[this->m_currentStreamIndex].state != CCS_STATE_ACTIVE_DOWNLOAD )
        {
          LODWORD(v23) = 4;
          LODWORD(v22) = this->m_streamList[this->m_currentStreamIndex].state;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 418, ASSERT_TYPE_ASSERT, "( m_streamList[m_currentStreamIndex].state ) == ( CCS_STATE_ACTIVE_DOWNLOAD )", "%s == %s\n\t%i, %i", "m_streamList[m_currentStreamIndex].state", "CCS_STATE_ACTIVE_DOWNLOAD", v22, v23) )
            __debugbreak();
        }
        v13 = DCache_StreamToCacheComplete(this->m_streamList[this->m_currentStreamIndex].cacheType, fileID, this->m_streamList[this->m_currentStreamIndex].locationType, fileSize, this->m_streamList[this->m_currentStreamIndex].createTime, this->m_streamList[this->m_currentStreamIndex].modifiedTime);
        v14 = (char *)this + 200 * this->m_currentStreamIndex;
        if ( v13 )
        {
          v15 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int, _DWORD))*((_QWORD *)v14 + 2519);
          if ( v15 )
          {
            LOBYTE(modifiedTime) = 0;
            v15(*((unsigned int *)v14 + 5035), *((unsigned int *)v14 + 4996), *((_QWORD *)v14 + 2515), *((unsigned int *)v14 + 4997), fileSize, modifiedTime);
          }
        }
        else
        {
          v16 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)v14 + 2520);
          if ( v16 )
            v16(*((unsigned int *)v14 + 5035), 16i64);
          Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
          InstancePtr = Online_ErrorReporting::GetInstancePtr();
          Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_t)16, outData);
        }
        v18 = (char *)this + 200 * this->m_currentStreamIndex;
        LODWORD(v21) = *((_DWORD *)v18 + 4996);
        LODWORD(modifiedTime) = *((_DWORD *)v18 + 5033);
        v19 = j_va("ccs state: %s. [ Context: Idx:%d, ContIdx:%d, file:%s, category:%d, cacheType:%d ].\n", "ccs download: success.", this->m_currentStreamIndex, *((unsigned int *)v18 + 4994), v18 + 19992, modifiedTime, v21);
        OnlineSystem::DebugLog(this, v19);
        Online_CachedContentStreamer::ClearCurrentStreamRequest(this);
        Sys_UnlockWrite(&s_dcacheStreamCritSect);
      }
      else
      {
        Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
        v12 = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(v12, MOVEMENT, outData);
      }
    }
    else
    {
      Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
      v11 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v11, (Online_Error_CAT_CCS_IOSTREAMS_t)2048, outData);
    }
  }
}

/*
==============
OnDownloadPublisherStorageFilesComplete
==============
*/
void OnDownloadPublisherStorageFilesComplete(OnlineStorageTask *storageTask)
{
  bdObjectStoreErrorWrappedObject *ObjectList; 
  bool hasError; 
  bdObjectStoreErrorWrappedObject *v4; 
  bdObjectStoreObject *Object; 
  bdObjectStoreMetadata *Metadata; 
  bdObjectStoreObjectID *ObjectID; 
  unsigned __int64 ID; 
  bdObjectStoreErrorWrappedObject *v9; 
  bdObjectStoreObject *v10; 
  bdObjectStoreMetadata *v11; 
  unsigned __int64 ContentLength; 
  unsigned int v13; 

  if ( !storageTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 712, ASSERT_TYPE_ASSERT, "(storageTask != 0)", (const char *)&queryFormat, "storageTask != NULL") )
    __debugbreak();
  ObjectList = bdObjectStoreGetPublisherObjectsResponse::getObjectList(storageTask->getPublisherStorageResponse);
  hasError = bdObjectStoreErrorWrappedObject::hasError(ObjectList);
  if ( storageTask->status != (AERIAL|FREE) || hasError )
  {
    Online_CachedContentStreamer::OnDownloadFilesFailed(&Online_CachedContentStreamer::s_instance, storageTask->controllerIndex);
  }
  else
  {
    v4 = bdObjectStoreGetPublisherObjectsResponse::getObjectList(storageTask->getPublisherStorageResponse);
    Object = bdObjectStoreErrorWrappedObject::getObject(v4);
    Metadata = bdObjectStoreObject::getMetadata(Object);
    ObjectID = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(Metadata);
    ID = bdObjectStoreObjectID::getID(ObjectID);
    v9 = bdObjectStoreGetPublisherObjectsResponse::getObjectList(storageTask->getPublisherStorageResponse);
    v10 = bdObjectStoreErrorWrappedObject::getObject(v9);
    v11 = bdObjectStoreObject::getMetadata(v10);
    ContentLength = bdObjectStoreMetadata::getContentLength(v11);
    v13 = truncate_cast<unsigned int,unsigned __int64>(ContentLength);
    Online_CachedContentStreamer::OnDownloadFilesSuccess(&Online_CachedContentStreamer::s_instance, storageTask->controllerIndex, ID, v13);
  }
}

/*
==============
OnDownloadPublisherStorageFilesHandleDownload
==============
*/
__int64 OnDownloadPublisherStorageFilesHandleDownload(void *data, unsigned int dataSize, unsigned int bytesDownloaded, unsigned int fileSize, unsigned __int64 fileID)
{
  Online_CachedContentStreamer::HandleDownload(&Online_CachedContentStreamer::s_instance, data, dataSize, bytesDownloaded, fileSize, fileID);
  return dataSize;
}

/*
==============
Online_CachedContentStreamer::OnListFilesFailed
==============
*/
void Online_CachedContentStreamer::OnListFilesFailed(Online_CachedContentStreamer *this, const int controllerIndex)
{
  unsigned __int16 m_currentStreamIndex; 
  __int64 v5; 
  ccsStreamState state; 
  Online_ErrorReporting *v7; 
  Online_ErrorReporting *v8; 
  __int64 v9; 
  void (__fastcall *OnFailure)(const CCSPatchType, const Online_Error_CAT_CCS_t); 
  Online_ErrorReporting *InstancePtr; 
  char *v12; 
  const char *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  char outData[1024]; 

  m_currentStreamIndex = this->m_currentStreamIndex;
  if ( m_currentStreamIndex >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 461, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentStreamIndex ) < (unsigned)( 128 )", "m_currentStreamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", m_currentStreamIndex, 128) )
    __debugbreak();
  v5 = this->m_currentStreamIndex;
  state = this->m_streamList[v5].state;
  if ( state )
  {
    if ( state == CCS_STATE_WAIT_LISTING_END )
    {
      if ( this->m_streamList[v5].controllerIndex != controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 476, ASSERT_TYPE_ASSERT, "( m_streamList[m_currentStreamIndex].controllerIndex ) == ( controllerIndex )", "%s == %s\n\t%i, %i", "m_streamList[m_currentStreamIndex].controllerIndex", "controllerIndex", this->m_streamList[v5].controllerIndex, controllerIndex) )
        __debugbreak();
      Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
      if ( this->m_streamList[this->m_currentStreamIndex].controllerIndex == controllerIndex )
      {
        Sys_LockWrite(&s_dcacheStreamCritSect);
        if ( this->m_streamList[this->m_currentStreamIndex].state != CCS_STATE_WAIT_LISTING_END )
        {
          LODWORD(v17) = 2;
          LODWORD(v16) = this->m_streamList[this->m_currentStreamIndex].state;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 489, ASSERT_TYPE_ASSERT, "( m_streamList[m_currentStreamIndex].state ) == ( CCS_STATE_WAIT_LISTING_END )", "%s == %s\n\t%i, %i", "m_streamList[m_currentStreamIndex].state", "CCS_STATE_WAIT_LISTING_END", v16, v17) )
            __debugbreak();
        }
        v9 = this->m_currentStreamIndex;
        OnFailure = this->m_streamList[v9].OnFailure;
        if ( OnFailure )
          OnFailure((const CCSPatchType)this->m_streamList[v9].patchType, COUNT);
        InstancePtr = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(InstancePtr, COUNT, outData);
        v12 = (char *)this + 200 * this->m_currentStreamIndex;
        LODWORD(v15) = *((_DWORD *)v12 + 4996);
        LODWORD(v14) = *((_DWORD *)v12 + 5033);
        v13 = j_va("ccs state: %s. [ Context: Idx:%d, ContIdx:%d, file:%s, category:%d, cacheType:%d ].\n", "ccs list: failed.", this->m_currentStreamIndex, *((unsigned int *)v12 + 4994), v12 + 19992, v14, v15);
        OnlineSystem::DebugLog(this, v13);
        Online_CachedContentStreamer::ClearCurrentStreamRequest(this);
        Sys_UnlockWrite(&s_dcacheStreamCritSect);
      }
      else
      {
        v8 = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(v8, MOVEMENT, outData);
      }
    }
    else
    {
      Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
      v7 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v7, (Online_Error_CAT_CCS_IOSTREAMS_t)1024, outData);
    }
  }
}

/*
==============
Online_CachedContentStreamer::OnListFilesSuccess
==============
*/
void Online_CachedContentStreamer::OnListFilesSuccess(Online_CachedContentStreamer *this, const int controllerIndex)
{
  unsigned __int16 m_currentStreamIndex; 
  __int64 v5; 
  ccsStreamState state; 
  Online_ErrorReporting *v7; 
  __int64 v8; 
  Online_ErrorReporting *InstancePtr; 
  char *v10; 
  const char *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  char outData[1024]; 

  m_currentStreamIndex = this->m_currentStreamIndex;
  if ( m_currentStreamIndex >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 511, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentStreamIndex ) < (unsigned)( 128 )", "m_currentStreamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", m_currentStreamIndex, 128) )
    __debugbreak();
  v5 = this->m_currentStreamIndex;
  state = this->m_streamList[v5].state;
  if ( state )
  {
    if ( state == CCS_STATE_WAIT_LISTING_END )
    {
      if ( this->m_streamList[v5].controllerIndex != controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 525, ASSERT_TYPE_ASSERT, "( m_streamList[m_currentStreamIndex].controllerIndex ) == ( controllerIndex )", "%s == %s\n\t%i, %i", "m_streamList[m_currentStreamIndex].controllerIndex", "controllerIndex", this->m_streamList[v5].controllerIndex, controllerIndex) )
        __debugbreak();
      v8 = this->m_currentStreamIndex;
      if ( this->m_streamList[v8].controllerIndex == controllerIndex )
      {
        if ( this->m_streamList[v8].state != CCS_STATE_WAIT_LISTING_END )
        {
          LODWORD(v15) = 2;
          LODWORD(v14) = this->m_streamList[v8].state;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 534, ASSERT_TYPE_ASSERT, "( m_streamList[m_currentStreamIndex].state ) == ( CCS_STATE_WAIT_LISTING_END )", "%s == %s\n\t%i, %i", "m_streamList[m_currentStreamIndex].state", "CCS_STATE_WAIT_LISTING_END", v14, v15) )
            __debugbreak();
        }
        v10 = (char *)this + 200 * this->m_currentStreamIndex;
        LODWORD(v13) = *((_DWORD *)v10 + 4996);
        LODWORD(v12) = *((_DWORD *)v10 + 5033);
        v11 = j_va("ccs state: %s. [ Context: Idx:%d, ContIdx:%d, file:%s, category:%d, cacheType:%d ].\n", "list file success", this->m_currentStreamIndex, *((unsigned int *)v10 + 4994), v10 + 19992, v12, v13);
        OnlineSystem::DebugLog(this, v11);
        Online_CachedContentStreamer::SetCurrentStreamState(this, CCS_STATE_WAIT_DOWNLOAD_START);
        Online_CachedContentStreamer::TryStartCurrentDownload(this);
      }
      else
      {
        Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
        InstancePtr = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, outData);
      }
    }
    else
    {
      Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
      v7 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v7, (Online_Error_CAT_CCS_IOSTREAMS_t)512, outData);
    }
  }
}

/*
==============
OnListPublisherStorageFilesComplete
==============
*/
void OnListPublisherStorageFilesComplete(OnlineStorageTask *storageTask)
{
  OnlineStorageTaskStatus status; 

  if ( !storageTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 998, ASSERT_TYPE_ASSERT, "(storageTask != 0)", (const char *)&queryFormat, "storageTask != NULL") )
    __debugbreak();
  status = storageTask->status;
  if ( status == (AERIAL|FREE) )
  {
    Online_CachedContentStreamer::OnListFilesSuccess(&Online_CachedContentStreamer::s_instance, storageTask->controllerIndex);
  }
  else
  {
    if ( status != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 1006, ASSERT_TYPE_ASSERT, "(storageTask->status == OnlineStorageTaskStatus::FAILURE)", (const char *)&queryFormat, "storageTask->status == OnlineStorageTaskStatus::FAILURE") )
      __debugbreak();
    Online_CachedContentStreamer::OnListFilesFailed(&Online_CachedContentStreamer::s_instance, storageTask->controllerIndex);
  }
}

/*
==============
Online_CachedContentStreamer::OnPublisherVariablesFetched
==============
*/
void Online_CachedContentStreamer::OnPublisherVariablesFetched(Online_CachedContentStreamer *this)
{
  const dvar_t *v1; 
  int v2; 
  int integer; 
  const dvar_t *v4; 
  int v5; 
  const dvar_t *v6; 
  int v7; 
  const dvar_t *v8; 

  v1 = DVARINT_ccs_purgeCacheRequestId;
  v2 = 0;
  if ( DVARINT_ccs_purgeCacheRequestId )
  {
    Dvar_CheckFrontendServerThread(DVARINT_ccs_purgeCacheRequestId);
    integer = v1->current.integer;
  }
  else
  {
    integer = 0;
  }
  DCache_TOC_RemotePurgeCacheRequest(integer);
  v4 = DVARINT_ccs_onCorruptionConfig;
  if ( DVARINT_ccs_onCorruptionConfig )
  {
    Dvar_CheckFrontendServerThread(DVARINT_ccs_onCorruptionConfig);
    v5 = v4->current.integer;
  }
  else
  {
    v5 = 0;
  }
  DCache_TOC_OnCorruptionConfig(v5);
  v6 = DVARINT_dcache_checksumConfig;
  if ( DVARINT_dcache_checksumConfig )
  {
    Dvar_CheckFrontendServerThread(DVARINT_dcache_checksumConfig);
    v7 = v6->current.integer;
  }
  else
  {
    v7 = 0;
  }
  DCache_TOC_OnChecksumConfig(v7);
  v8 = DVARINT_dcache_genericConfig;
  if ( DVARINT_dcache_genericConfig )
  {
    Dvar_CheckFrontendServerThread(DVARINT_dcache_genericConfig);
    v2 = v8->current.integer;
  }
  DCache_TOC_OnGenericConfig(v2);
}

/*
==============
Online_CachedContentStreamer_HandleDownload
==============
*/
void Online_CachedContentStreamer_HandleDownload(void *data, unsigned int dataSize, unsigned int bytesDownloaded, unsigned int fileSize, const dwCSReadPublisherFileTask *task)
{
  Online_CachedContentStreamer::HandleDownload(&Online_CachedContentStreamer::s_instance, data, dataSize, bytesDownloaded, fileSize, task->m_fileID);
}

/*
==============
Online_CachedContentStreamer_OnDownloadFilesFailed
==============
*/
void Online_CachedContentStreamer_OnDownloadFilesFailed(const int controllerIndex, bdLobbyErrorCode errorCode)
{
  Online_CachedContentStreamer::OnDownloadFilesFailed(&Online_CachedContentStreamer::s_instance, controllerIndex);
}

/*
==============
Online_CachedContentStreamer_OnDownloadFilesSuccess
==============
*/
void Online_CachedContentStreamer_OnDownloadFilesSuccess(const int controllerIndex, const dwCSReadPublisherFileTask *task)
{
  Online_CachedContentStreamer::OnDownloadFilesSuccess(&Online_CachedContentStreamer::s_instance, controllerIndex, task->m_fileID, task->m_fileSize);
}

/*
==============
Online_CachedContentStreamer_OnListFilesFailed
==============
*/
void Online_CachedContentStreamer_OnListFilesFailed(const int controllerIndex, const int category, bdLobbyErrorCode error)
{
  Online_CachedContentStreamer::OnListFilesFailed(&Online_CachedContentStreamer::s_instance, controllerIndex);
}

/*
==============
Online_CachedContentStreamer_OnListFilesSuccess
==============
*/
void Online_CachedContentStreamer_OnListFilesSuccess(const int controllerIndex, const int category)
{
  Online_CachedContentStreamer::OnListFilesSuccess(&Online_CachedContentStreamer::s_instance, controllerIndex);
}

/*
==============
Online_CachedContentStreamer::Reset
==============
*/
void Online_CachedContentStreamer::Reset(Online_CachedContentStreamer *this)
{
  ccsStreamRequestInfo_t *m_streamList; 
  int v2; 
  bool v3; 
  ccsStreamRequestInfo_t *v5; 
  __int64 v6; 
  __int64 v7; 

  m_streamList = this->m_streamList;
  v2 = 0;
  v3 = 1;
  v5 = this->m_streamList;
  do
  {
    if ( !v3 )
    {
      LODWORD(v7) = 128;
      LODWORD(v6) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 689, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( 128 )", "streamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    memset_0(v5, 0, sizeof(ccsStreamRequestInfo_t));
    m_streamList->controllerIndex = -1;
    ++v2;
    ++m_streamList;
    ++v5;
    v3 = (unsigned int)v2 < 0x80;
  }
  while ( v2 < 128 );
  this->m_currentStreamIndex = 0;
}

/*
==============
Online_CachedContentStreamer::ResetForController
==============
*/
void Online_CachedContentStreamer::ResetForController(Online_CachedContentStreamer *this, const int controllerIndex)
{
  ccsStreamRequestInfo_t *m_streamList; 
  int i; 

  m_streamList = this->m_streamList;
  for ( i = 0; i < 128; ++i )
  {
    if ( m_streamList->state && m_streamList->controllerIndex == controllerIndex )
    {
      if ( this->m_currentStreamIndex == i )
        Online_CachedContentStreamer::ClearCurrentStreamRequest(this);
      else
        Online_CachedContentStreamer::ClearStreamRequestAtIndex(this, i);
    }
    ++m_streamList;
  }
}

/*
==============
Online_CachedContentStreamer::SetCurrentStreamState
==============
*/
void Online_CachedContentStreamer::SetCurrentStreamState(Online_CachedContentStreamer *this, ccsStreamState nextState)
{
  unsigned __int16 m_currentStreamIndex; 
  const char *v5; 
  char *v6; 
  const char *v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 

  m_currentStreamIndex = this->m_currentStreamIndex;
  if ( m_currentStreamIndex >= 0x80u )
  {
    v11 = 128;
    v9 = m_currentStreamIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 1123, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentStreamIndex ) < (unsigned)( 128 )", "m_currentStreamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  v5 = j_va("SetCurrentState: State Transition [%d]->[%d] for file %s. \n", (unsigned int)this->m_streamList[this->m_currentStreamIndex].state, (unsigned int)nextState, this->m_streamList[this->m_currentStreamIndex].streamFileName);
  v6 = (char *)this + 200 * this->m_currentStreamIndex;
  LODWORD(v10) = *((_DWORD *)v6 + 4996);
  LODWORD(v8) = *((_DWORD *)v6 + 5033);
  v7 = j_va("ccs state: %s. [ Context: Idx:%d, ContIdx:%d, file:%s, category:%d, cacheType:%d ].\n", v5, this->m_currentStreamIndex, *((unsigned int *)v6 + 4994), v6 + 19992, v8, v10);
  OnlineSystem::DebugLog(this, v7);
  this->m_streamList[this->m_currentStreamIndex].state = nextState;
  this->m_streamList[this->m_currentStreamIndex].lastAccessTime = Sys_Milliseconds();
}

/*
==============
Online_CachedContentStreamer::TryRequestStreamToCache
==============
*/
char Online_CachedContentStreamer::TryRequestStreamToCache(Online_CachedContentStreamer *this, const int controllerIndex, const dcacheType_t cacheType, dcacheLocation_t location, const char *fileName, unsigned int fileVersion, bool forceOverWrite, CCSPatchType ccsPatchType, void (*OnSuccess)(const CCSPatchType, const dcacheType_t, const unsigned __int64, const dcacheLocation_t, const unsigned int, const bool), void (*OnFailure)(const CCSPatchType, const Online_Error_CAT_CCS_t), void (*OnProgress)(const CCSPatchType, const dcacheType_t, const unsigned __int64, const dcacheLocation_t, const unsigned int, const unsigned int, const unsigned int))
{
  unsigned __int16 m_currentStreamIndex; 
  Online_ErrorReporting *v16; 
  __int64 v18; 
  int v19; 
  int v20; 
  Online_ErrorReporting *InstancePtr; 
  char *v22; 
  unsigned __int64 outFileID; 
  char outData[1024]; 

  m_currentStreamIndex = this->m_currentStreamIndex;
  if ( m_currentStreamIndex >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 623, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentStreamIndex ) < (unsigned)( 128 )", "m_currentStreamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", m_currentStreamIndex, 128) )
    __debugbreak();
  if ( forceOverWrite || !DCache_TOC_GetFileIDByFilename(fileName, cacheType, location, &outFileID) )
  {
    v18 = this->m_currentStreamIndex;
    if ( this->m_streamList[v18].state )
    {
      v19 = 0;
      while ( 1 )
      {
        v20 = ((int)v18 + 1 + v19) % 128;
        if ( this->m_streamList[v20].state == CCS_STATE_INACTIVE )
          break;
        if ( ++v19 >= 128 )
          goto LABEL_13;
      }
      LODWORD(v18) = ((int)v18 + 1 + v19) % 128;
      if ( v20 != -1 )
        goto LABEL_14;
LABEL_13:
      Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_t)128, outData);
      return 0;
    }
    else
    {
LABEL_14:
      v22 = (char *)this + 200 * (int)v18;
      *((_DWORD *)v22 + 4994) = controllerIndex;
      *((_DWORD *)v22 + 4995) = 1;
      *((_DWORD *)v22 + 4996) = cacheType;
      *((_DWORD *)v22 + 4997) = location;
      *((_DWORD *)v22 + 5033) = fileVersion;
      *((_DWORD *)v22 + 5034) = Sys_Milliseconds();
      Core_strcpy(v22 + 19992, 0x80ui64, fileName);
      *((_DWORD *)v22 + 5035) = ccsPatchType;
      *((_QWORD *)v22 + 2519) = OnSuccess;
      *((_QWORD *)v22 + 2520) = OnFailure;
      *((_QWORD *)v22 + 2521) = OnProgress;
      Online_CachedContentStreamer::DumpSystemState(this);
      return 1;
    }
  }
  else
  {
    Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
    v16 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v16, (Online_Error_CAT_CCS_t)64, outData);
    return 0;
  }
}

/*
==============
Online_CachedContentStreamer::TryStartCurrentDownload
==============
*/
char Online_CachedContentStreamer::TryStartCurrentDownload(Online_CachedContentStreamer *this)
{
  unsigned __int16 m_currentStreamIndex; 
  const dvar_t *v3; 
  char *v4; 
  const char *v5; 
  const dvar_t *v6; 
  bdObjectStoreErrorWrappedMetadata *MetadataList; 
  bdObjectStoreMetadata *Metadata; 
  bdObjectStoreObjectID *ObjectID; 
  unsigned __int64 ID; 
  bdObjectStoreErrorWrappedMetadata *v11; 
  bdObjectStoreMetadata *v12; 
  unsigned __int64 ContentLength; 
  unsigned int bufferSize; 
  bdObjectStoreErrorWrappedMetadata *v15; 
  bdObjectStoreMetadata *v16; 
  bdObjectStoreObjectID *v17; 
  const char *i; 
  bdObjectStoreErrorWrappedMetadata *v19; 
  bdObjectStoreMetadata *v20; 
  unsigned int Created; 
  unsigned int v22; 
  bdObjectStoreErrorWrappedMetadata *v23; 
  bdObjectStoreMetadata *v24; 
  unsigned int Modified; 
  unsigned int v26; 
  bdObjectStoreErrorWrappedMetadata *v27; 
  bdObjectStoreMetadata *v28; 
  const char *Category; 
  bdObjectStoreErrorWrappedMetadata *v30; 
  bdObjectStoreMetadata *v31; 
  const char *ContentChecksum; 
  unsigned __int64 FileIDByFilename; 
  unsigned __int64 v34; 
  char v35; 
  bool v36; 
  char Int_Internal_DebugName; 
  bool v38; 
  Online_ErrorReporting *v39; 
  const char *v40; 
  __int64 v41; 
  void (__fastcall *OnSuccess)(const CCSPatchType, const dcacheType_t, const unsigned __int64, const dcacheLocation_t, const unsigned int, const bool); 
  bdObjectStoreErrorWrappedMetadata *v44; 
  bdObjectStoreMetadata *v45; 
  bdObjectStoreObjectID *v46; 
  const char *ObjectName; 
  const XUID *v48; 
  OnlineStorage *Instance; 
  char CurrentPlatform; 
  OnlineStorage *v51; 
  Online_ErrorReporting *InstancePtr; 
  char *v53; 
  const char *v54; 
  char *v55; 
  const char *v56; 
  __int64 v57; 
  void (__fastcall *OnFailure)(const CCSPatchType, const Online_Error_CAT_CCS_t); 
  char *fmt; 
  __int64 fileNameSize; 
  __int64 fileNameSizea; 
  __int64 fileVersion; 
  __int64 fileVersiona; 
  __int64 createTime; 
  __int64 modifiedTime; 
  bool v66; 
  bool v67; 
  unsigned int v68; 
  XUID result; 
  __int64 v70; 
  dcacheFileDetails_t outFileDetails; 
  OnlineStorageTask newTask; 
  cccHashValueSHA256_t outHash; 
  bdObjectStoreObject object; 
  char v75[8]; 
  __int64 v76; 
  int v77; 
  char v78; 
  char Destination[8]; 
  __int64 v80; 
  __int64 v81; 
  int v82; 
  char v83; 
  char outHexString[8]; 
  __int64 v85; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  char v92; 
  char dest[128]; 
  char outData[1024]; 

  v70 = -2i64;
  memset(&outFileDetails.m_computedHashValue, 0, sizeof(outFileDetails.m_computedHashValue));
  *(_QWORD *)Destination = 0i64;
  v80 = 0i64;
  v81 = 0i64;
  v82 = 0;
  v83 = 0;
  *(_QWORD *)v75 = 0i64;
  v76 = 0i64;
  v77 = 0;
  v78 = 0;
  m_currentStreamIndex = this->m_currentStreamIndex;
  if ( m_currentStreamIndex >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 762, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentStreamIndex ) < (unsigned)( 128 )", "m_currentStreamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", m_currentStreamIndex, 128) )
    __debugbreak();
  if ( this->m_streamList[this->m_currentStreamIndex].state != CCS_STATE_WAIT_DOWNLOAD_START && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 763, ASSERT_TYPE_ASSERT, "( m_streamList[m_currentStreamIndex].state ) == ( CCS_STATE_WAIT_DOWNLOAD_START )", "%s == %s\n\t%i, %i", "m_streamList[m_currentStreamIndex].state", "CCS_STATE_WAIT_DOWNLOAD_START", this->m_streamList[this->m_currentStreamIndex].state, 3) )
    __debugbreak();
  if ( this->m_streamList[this->m_currentStreamIndex].controllerIndex == -1 )
  {
    LODWORD(modifiedTime) = -1;
    LODWORD(createTime) = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 764, ASSERT_TYPE_ASSERT, "( m_streamList[m_currentStreamIndex].controllerIndex ) != ( (-1) )", "%s != %s\n\t%i, %i", "m_streamList[m_currentStreamIndex].controllerIndex", "INVALID_CONTROLLER_PORT", createTime, modifiedTime) )
      __debugbreak();
  }
  v3 = DVARBOOL_online_ccs_cs_support_enabled;
  if ( !DVARBOOL_online_ccs_cs_support_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_ccs_cs_support_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && LiveStorage_CS_IsTaskInProgress(this->m_streamList[this->m_currentStreamIndex].controllerIndex, "downloadpublisherfile") )
  {
    v4 = (char *)this + 200 * this->m_currentStreamIndex;
    LODWORD(fileVersion) = *((_DWORD *)v4 + 4996);
    LODWORD(fileNameSize) = *((_DWORD *)v4 + 5033);
    v5 = j_va("ccs state: %s. [ Context: Idx:%d, ContIdx:%d, file:%s, category:%d, cacheType:%d ].\n", "ccs download: publisher file request task in progress. Wait and retry.", this->m_currentStreamIndex, *((unsigned int *)v4 + 4994), v4 + 19992, fileNameSize, fileVersion);
    OnlineSystem::DebugLog(this, v5);
    return 0;
  }
  v6 = DVARINT_online_ccs_file_transport;
  if ( !DVARINT_online_ccs_file_transport && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_ccs_file_transport") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer == 1 )
  {
    MetadataList = bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataList(&s_getPublisherObjectMetadatasResponse);
    Metadata = (bdObjectStoreMetadata *)bdObjectStoreErrorWrappedMetadata::getMetadata(MetadataList);
    ObjectID = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(Metadata);
    ID = bdObjectStoreObjectID::getID(ObjectID);
    v11 = bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataList(&s_getPublisherObjectMetadatasResponse);
    v12 = (bdObjectStoreMetadata *)bdObjectStoreErrorWrappedMetadata::getMetadata(v11);
    ContentLength = bdObjectStoreMetadata::getContentLength(v12);
    bufferSize = truncate_cast<unsigned int,unsigned __int64>(ContentLength);
    v15 = bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataList(&s_getPublisherObjectMetadatasResponse);
    v16 = (bdObjectStoreMetadata *)bdObjectStoreErrorWrappedMetadata::getMetadata(v15);
    v17 = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(v16);
    for ( i = bdObjectStoreObjectID::getObjectName(v17); *i != 95; ++i )
      ;
    Core_strcpy(dest, 0x80ui64, i + 1);
    v19 = bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataList(&s_getPublisherObjectMetadatasResponse);
    v20 = (bdObjectStoreMetadata *)bdObjectStoreErrorWrappedMetadata::getMetadata(v19);
    Created = bdObjectStoreMetadata::getCreated(v20);
    v22 = truncate_cast<unsigned int,unsigned __int64>(Created);
    v68 = v22;
    v23 = bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataList(&s_getPublisherObjectMetadatasResponse);
    v24 = (bdObjectStoreMetadata *)bdObjectStoreErrorWrappedMetadata::getMetadata(v23);
    Modified = bdObjectStoreMetadata::getModified(v24);
    v26 = truncate_cast<unsigned int,unsigned __int64>(Modified);
    LODWORD(result.m_id) = v26;
    v27 = bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataList(&s_getPublisherObjectMetadatasResponse);
    v28 = (bdObjectStoreMetadata *)bdObjectStoreErrorWrappedMetadata::getMetadata(v27);
    Category = bdObjectStoreMetadata::getCategory(v28);
    atoi(Category);
    v30 = bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataList(&s_getPublisherObjectMetadatasResponse);
    v31 = (bdObjectStoreMetadata *)bdObjectStoreErrorWrappedMetadata::getMetadata(v30);
    ContentChecksum = bdObjectStoreMetadata::getContentChecksum(v31);
    strcpy_s(Destination, 0x1Dui64, ContentChecksum);
    bdBase64::decode(Destination, 0x1Du, v75, 0x15u);
  }
  else
  {
    ID = *((_QWORD *)&this->m_cachedContentFileMetaData.__vftable + 2);
    bufferSize = this->m_cachedContentFileMetaData.m_fileSize;
    Core_strcpy(dest, 0x80ui64, this->m_cachedContentFileMetaData.m_fileName);
    v22 = *((_DWORD *)&this->m_cachedContentFileMetaData.__vftable + 6);
    v68 = v22;
    v26 = *((_DWORD *)&this->m_cachedContentFileMetaData.__vftable + 7);
    LODWORD(result.m_id) = v26;
  }
  if ( !ID || !bufferSize )
  {
    v55 = (char *)this + 200 * this->m_currentStreamIndex;
    LODWORD(fileVersion) = *((_DWORD *)v55 + 4996);
    LODWORD(fileNameSize) = *((_DWORD *)v55 + 5033);
    v56 = j_va("ccs state: %s. [ Context: Idx:%d, ContIdx:%d, file:%s, category:%d, cacheType:%d ].\n", "ccs download: list file resulted in invalid file results.", this->m_currentStreamIndex, *((unsigned int *)v55 + 4994), v55 + 19992, fileNameSize, fileVersion);
    OnlineSystem::DebugLog(this, v56);
    v57 = this->m_currentStreamIndex;
    OnFailure = this->m_streamList[v57].OnFailure;
    if ( OnFailure )
      OnFailure((const CCSPatchType)this->m_streamList[v57].patchType, (const Online_Error_CAT_CCS_t)0x80000i64);
    Online_CachedContentStreamer::ClearCurrentStreamRequest(this);
    return 0;
  }
  FileIDByFilename = DCache_GetFileIDByFilename(dest, this->m_streamList[this->m_currentStreamIndex].cacheType, this->m_streamList[this->m_currentStreamIndex].locationType);
  v34 = FileIDByFilename;
  v35 = 0;
  if ( !FileIDByFilename || !DCache_TOC_GetFileDetails(this->m_streamList[this->m_currentStreamIndex].cacheType, FileIDByFilename, this->m_streamList[this->m_currentStreamIndex].locationType, &outFileDetails) )
  {
LABEL_50:
    this->m_streamList[this->m_currentStreamIndex].createTime = v68;
    this->m_streamList[this->m_currentStreamIndex].modifiedTime = result.m_id;
    Sys_LockWrite(&s_dcacheStreamCritSect);
    if ( DCache_WriteToCache(this->m_streamList[this->m_currentStreamIndex].cacheType, ID, this->m_streamList[this->m_currentStreamIndex].locationType, this->m_streamList[this->m_currentStreamIndex].patchType, dest, 128, this->m_streamList[this->m_currentStreamIndex].streamFileVersion, 0, 0, 1, bufferSize, NULL) )
    {
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_online_ccs_file_transport, "online_ccs_file_transport") == 1 )
      {
        OnlineStorageTask::OnlineStorageTask(&newTask);
        memset_0(&newTask, 0, sizeof(newTask));
        newTask.fileEntryCount = 0;
        *(_WORD *)&newTask.operation = 257;
        newTask.priority[0] = 9;
        newTask.controllerIndex = this->m_streamList[this->m_currentStreamIndex].controllerIndex;
        newTask.onTaskCompleteCallback = OnDownloadPublisherStorageFilesComplete;
        bdObjectStoreGetPublisherObjectsResponse::reset(&s_getPublisherObjectsResponse);
        newTask.validateUpload = 0;
        newTask.getPublisherStorageResponse = &s_getPublisherObjectsResponse;
        if ( newTask.fileEntryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 914, ASSERT_TYPE_ASSERT, "(storageTask.fileEntryCount < 1)", (const char *)&queryFormat, "storageTask.fileEntryCount < MAX_FILES_PER_REQUEST") )
          __debugbreak();
        v44 = bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataList(&s_getPublisherObjectMetadatasResponse);
        v45 = (bdObjectStoreMetadata *)bdObjectStoreErrorWrappedMetadata::getMetadata(v44);
        v46 = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(v45);
        ObjectName = bdObjectStoreObjectID::getObjectName(v46);
        Core_strcpy(newTask.fileEntries[newTask.fileEntryCount].fileName, 0x40ui64, ObjectName);
        v48 = XUID::NullXUID(&result);
        XUID::operator=(&newTask.fileEntries[newTask.fileEntryCount].xuid, v48);
        Instance = OnlineStorage::GetInstance();
        CurrentPlatform = OnlineStorage::GetCurrentPlatform(Instance);
        newTask.fileEntries[newTask.fileEntryCount].platform[0] = CurrentPlatform;
        if ( dword_14B342FAC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
        {
          j__Init_thread_header(&dword_14B342FAC);
          if ( dword_14B342FAC == -1 )
          {
            bdObjectStoreDownloadInterceptor::bdObjectStoreDownloadInterceptor(&downloadInterceptor);
            downloadInterceptor.__vftable = (OnlineStorageDownloadInterceptor_vtbl *)&OnlineStorageDownloadInterceptor::`vftable';
            j_atexit(Online_CachedContentStreamer::TryStartCurrentDownload_::_67_::_dynamic_atexit_destructor_for__downloadInterceptor__);
            j__Init_thread_footer(&dword_14B342FAC);
          }
        }
        downloadInterceptor.m_callback = OnDownloadPublisherStorageFilesHandleDownload;
        downloadInterceptor.m_fileID = ID;
        downloadInterceptor.m_fileSize = bufferSize;
        downloadInterceptor.m_bytesDownloaded = 0;
        bdObjectStoreObject::bdObjectStoreObject(&object, &downloadInterceptor);
        bdObjectStoreErrorWrappedObject::reset(&s_responseObjects[newTask.fileEntryCount]);
        bdObjectStoreErrorWrappedObject::setObject(&s_responseObjects[newTask.fileEntryCount++], &object);
        bdMemory::deallocate(object.m_metadata.m_tags.m_data);
        object.m_metadata.m_tags.m_data = NULL;
        *(_QWORD *)&object.m_metadata.m_tags.m_capacity = 0i64;
        bdObjectStoreACL::~bdObjectStoreACL(&object.m_metadata.m_acl);
        bdObjectStoreGetPublisherObjectsResponse::setObjectList(newTask.getPublisherStorageResponse, s_responseObjects, newTask.fileEntryCount);
        v51 = OnlineStorage::GetInstance();
        if ( OnlineStorage::EnqueueTask(v51, &newTask) )
        {
          Online_CachedContentStreamer::SetCurrentStreamState(this, CCS_STATE_ACTIVE_DOWNLOAD);
          this->m_streamList[this->m_currentStreamIndex].streamFileID = ID;
          this->m_streamList[this->m_currentStreamIndex].streamFileSize = bufferSize;
          Online_CachedContentStreamer::DebugLogCCSState(this, "Successfully started downloading, waiting for results");
          Sys_UnlockWrite(&s_dcacheStreamCritSect);
          TaskCreateRequest::~TaskCreateRequest(&newTask.taskCreateRequest);
          return 1;
        }
        TaskCreateRequest::~TaskCreateRequest(&newTask.taskCreateRequest);
      }
      else
      {
        *(&this->m_readCachedContentFileInfo.m_fileSize + 1) = 0;
        *(_QWORD *)&this->m_readCachedContentFileInfo.m_bufferSize = 0i64;
        *(_WORD *)&this->m_readCachedContentFileInfo.m_loadedFromCache = 256;
        *(_DWORD *)(&this->m_readCachedContentFileInfo.m_isStreamed + 1) = 0;
        *(_WORD *)(&this->m_readCachedContentFileInfo.m_isStreamed + 5) = 0;
        this->m_readCachedContentFileInfo.m_fileID = ID;
        this->m_readCachedContentFileInfo.m_fileSize = bufferSize;
        this->m_readCachedContentFileInfo.m_buffer = NULL;
        this->m_readCachedContentFileInfo.m_outDescriptors = &this->m_cachedContentFileMetaData;
        *(_QWORD *)&this->m_readCachedContentFileInfo.m_startByte = 0i64;
        this->m_readCachedContentFileInfo.m_cacheBuffer = NULL;
        this->m_readCachedContentFileInfo.m_downloadHandler = NULL;
        this->m_readCachedContentFileInfo.m_dataCallback = Online_CachedContentStreamer_HandleDownload;
        this->m_readCachedContentFileInfo.m_successCallback = Online_CachedContentStreamer_OnDownloadFilesSuccess;
        this->m_readCachedContentFileInfo.m_failureCallback = Online_CachedContentStreamer_OnDownloadFilesFailed;
        if ( LiveStorage_CS_ReadPublisherFile(this->m_streamList[this->m_currentStreamIndex].controllerIndex, &this->m_readCachedContentFileInfo) )
        {
          Online_CachedContentStreamer::SetCurrentStreamState(this, CCS_STATE_ACTIVE_DOWNLOAD);
          this->m_streamList[this->m_currentStreamIndex].streamFileID = ID;
          this->m_streamList[this->m_currentStreamIndex].streamFileSize = bufferSize;
          Online_CachedContentStreamer::DebugLogCCSState(this, "Successfully started downloading, waiting for results");
          Sys_UnlockWrite(&s_dcacheStreamCritSect);
          return 1;
        }
      }
    }
    Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_t)4, outData);
    v53 = (char *)this + 200 * this->m_currentStreamIndex;
    LODWORD(fileVersiona) = *((_DWORD *)v53 + 4996);
    LODWORD(fileNameSizea) = *((_DWORD *)v53 + 5033);
    v54 = j_va("ccs state: %s. [ Context: Idx:%d, ContIdx:%d, file:%s, category:%d, cacheType:%d ].\n", "ccs download: publisher file request failed to start. Wait and retry.", this->m_currentStreamIndex, *((unsigned int *)v53 + 4994), v53 + 19992, fileNameSizea, fileVersiona);
    OnlineSystem::DebugLog(this, v54);
    Sys_UnlockWrite(&s_dcacheStreamCritSect);
    return 0;
  }
  v36 = outFileDetails.m_serverCreateTime == v22;
  v67 = v36;
  v66 = outFileDetails.m_serverModifiedTime == v26;
  memset(&outHash, 0, sizeof(outHash));
  if ( DCache_IO_CalculateHash(this->m_streamList[this->m_currentStreamIndex].cacheType, v34, this->m_streamList[this->m_currentStreamIndex].locationType, &outHash) && *(_QWORD *)outHash.hashBytes == *(_QWORD *)v75 && *(_QWORD *)&outHash.hashBytes[8] == v76 && *(_DWORD *)&outHash.hashBytes[16] == v77 )
    v35 = 1;
  if ( DVARINT_ccs_hashCheckMode )
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_ccs_hashCheckMode, "ccs_hashCheckMode");
  else
    Int_Internal_DebugName = 0;
  if ( (Int_Internal_DebugName & 2) == 0 )
    goto LABEL_41;
  if ( !v36 )
  {
LABEL_49:
    DCache_DeleteFromCache(this->m_streamList[this->m_currentStreamIndex].cacheType, v34, this->m_streamList[this->m_currentStreamIndex].locationType);
    goto LABEL_50;
  }
  v38 = v66;
  if ( v66 && !v35 )
  {
    *(_QWORD *)outHexString = 0i64;
    v85 = 0i64;
    v86 = 0i64;
    v87 = 0i64;
    v88 = 0i64;
    v89 = 0i64;
    v90 = 0i64;
    v91 = 0i64;
    v92 = 0;
    ByteBufferToHexString(outHash.hashBytes, 32, outHexString, 65);
    Online_CachedContentStreamer::GetErrorReportingContext(this, outData, 1024);
    v39 = Online_ErrorReporting::GetInstancePtr();
    LODWORD(fmt) = outFileDetails.m_serverModifiedTime;
    v40 = j_va("[%d, %d],[%d, %d],[%s, %s] %s", v68, outFileDetails.m_serverCreateTime, LODWORD(result.m_id), fmt, Destination, outHexString, outData);
    Online_ErrorReporting::ReportError(v39, MOVEMENT, v40);
    v36 = v67;
LABEL_41:
    v38 = v66;
  }
  if ( !v36 || !v38 || (Int_Internal_DebugName & 1) != 0 && !v35 )
    goto LABEL_49;
  v41 = this->m_currentStreamIndex;
  OnSuccess = this->m_streamList[v41].OnSuccess;
  if ( OnSuccess )
  {
    LOBYTE(fileNameSize) = 1;
    OnSuccess((const CCSPatchType)this->m_streamList[v41].patchType, (const dcacheType_t)this->m_streamList[v41].cacheType, v34, (const dcacheLocation_t)this->m_streamList[v41].locationType, outFileDetails.m_size, fileNameSize);
  }
  Online_CachedContentStreamer::ClearCurrentStreamRequest(this);
  return 1;
}

/*
==============
Online_CachedContentStreamer::TryStartCurrentFileList
==============
*/
char Online_CachedContentStreamer::TryStartCurrentFileList(Online_CachedContentStreamer *this)
{
  unsigned __int16 m_currentStreamIndex; 
  const dvar_t *v3; 
  char *v4; 
  const char *v5; 
  const dvar_t *v6; 
  OnlineStorageTaskFileEntry *fileEntries; 
  __int64 v8; 
  const XUID *v9; 
  OnlineStorage *Instance; 
  char CurrentPlatform; 
  OnlineStorage *v12; 
  char *v13; 
  const char *v14; 
  char *v16; 
  const char *v17; 
  __int64 v18; 
  char *v19; 
  const char *v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  XUID result; 
  __int64 v26; 
  OnlineStorageTask newTask; 
  bdObjectStoreObject v28; 

  v26 = -2i64;
  m_currentStreamIndex = this->m_currentStreamIndex;
  if ( m_currentStreamIndex >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 1015, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentStreamIndex ) < (unsigned)( 128 )", "m_currentStreamIndex doesn't index CCS_DOWNLOAD_LIST_MAX\n\t%i not in [0, %i)", m_currentStreamIndex, 128) )
    __debugbreak();
  if ( this->m_streamList[this->m_currentStreamIndex].controllerIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 1016, ASSERT_TYPE_ASSERT, "( m_streamList[m_currentStreamIndex].controllerIndex ) != ( (-1) )", "%s != %s\n\t%i, %i", "m_streamList[m_currentStreamIndex].controllerIndex", "INVALID_CONTROLLER_PORT", -1, -1) )
    __debugbreak();
  if ( this->m_streamList[this->m_currentStreamIndex].state != CCS_STATE_WAIT_LISTING_START )
  {
    LODWORD(v24) = 1;
    LODWORD(v23) = this->m_streamList[this->m_currentStreamIndex].state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 1017, ASSERT_TYPE_ASSERT, "( m_streamList[m_currentStreamIndex].state ) == ( CCS_STATE_WAIT_LISTING_START )", "%s == %s\n\t%i, %i", "m_streamList[m_currentStreamIndex].state", "CCS_STATE_WAIT_LISTING_START", v23, v24) )
      __debugbreak();
  }
  v3 = DVARBOOL_online_ccs_cs_support_enabled;
  if ( !DVARBOOL_online_ccs_cs_support_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_ccs_cs_support_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && LiveStorage_CS_IsTaskInProgress(this->m_streamList[this->m_currentStreamIndex].controllerIndex, "listpublisherfiles") )
  {
    v4 = (char *)this + 200 * this->m_currentStreamIndex;
    LODWORD(v22) = *((_DWORD *)v4 + 4996);
    LODWORD(v21) = *((_DWORD *)v4 + 5033);
    v5 = j_va("ccs state: %s. [ Context: Idx:%d, ContIdx:%d, file:%s, category:%d, cacheType:%d ].\n", "ccs list: publisher file list request task in progress.Wait and retry.", this->m_currentStreamIndex, *((unsigned int *)v4 + 4994), v4 + 19992, v21, v22);
    OnlineSystem::DebugLog(this, v5);
    return 0;
  }
  bdFileMetaData::reset(&this->m_cachedContentFileMetaData);
  this->m_outCachedContentMetaDataCount = 0;
  Sys_LockWrite(&s_dcacheStreamCritSect);
  v6 = DVARINT_online_ccs_file_transport;
  if ( !DVARINT_online_ccs_file_transport && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_ccs_file_transport") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer == 1 )
  {
    result.m_id = (unsigned __int64)&newTask;
    *(_QWORD *)&newTask.taskCreateRequest.m_controllerIndex = -1i64;
    memset(&newTask.taskCreateRequest.m_appData, 0, 48);
    newTask.taskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    newTask.taskCreateRequest.m_timeoutInSeconds = 0;
    fileEntries = newTask.fileEntries;
    v8 = 16i64;
    do
    {
      OnlineStorageTaskFileEntry::OnlineStorageTaskFileEntry(fileEntries++);
      --v8;
    }
    while ( v8 );
    memset_0(&newTask, 0, sizeof(newTask));
    newTask.fileEntryCount = 0;
    *(_WORD *)&newTask.operation = 258;
    newTask.priority[0] = 8;
    newTask.controllerIndex = this->m_streamList[this->m_currentStreamIndex].controllerIndex;
    newTask.onTaskCompleteCallback = OnListPublisherStorageFilesComplete;
    bdObjectStoreGetPublisherObjectMetadatasResponse::reset(&s_getPublisherObjectMetadatasResponse);
    newTask.validateUpload = 0;
    newTask.getPublisherStorageMetadatasResponse = &s_getPublisherObjectMetadatasResponse;
    if ( newTask.fileEntryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 1057, ASSERT_TYPE_ASSERT, "(storageTask.fileEntryCount < 1)", (const char *)&queryFormat, "storageTask.fileEntryCount < MAX_FILES_PER_REQUEST") )
      __debugbreak();
    Com_sprintf<64>((char (*)[64])&newTask.fileEntries[newTask.fileEntryCount], "%d_%s", this->m_streamList[this->m_currentStreamIndex].streamFileVersion, this->m_streamList[this->m_currentStreamIndex].streamFileName);
    v9 = XUID::NullXUID(&result);
    XUID::operator=(&newTask.fileEntries[newTask.fileEntryCount].xuid, v9);
    Instance = OnlineStorage::GetInstance();
    CurrentPlatform = OnlineStorage::GetCurrentPlatform(Instance);
    newTask.fileEntries[newTask.fileEntryCount].platform[0] = CurrentPlatform;
    bdObjectStoreObject::bdObjectStoreObject(&v28, NULL, 0i64);
    ++newTask.fileEntryCount;
    bdMemory::deallocate(v28.m_metadata.m_tags.m_data);
    v28.m_metadata.m_tags.m_data = NULL;
    *(_QWORD *)&v28.m_metadata.m_tags.m_capacity = 0i64;
    bdObjectStoreACL::~bdObjectStoreACL(&v28.m_metadata.m_acl);
    if ( newTask.fileEntryCount > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_cachedcontentstreamer.cpp", 1067, ASSERT_TYPE_ASSERT, "(storageTask.fileEntryCount <= ( sizeof( *array_counter( s_responseObjectMetadatas ) ) + 0 ))", (const char *)&queryFormat, "storageTask.fileEntryCount <= ARRAY_COUNT( s_responseObjectMetadatas )") )
      __debugbreak();
    bdObjectStoreGetPublisherObjectMetadatasResponse::setMetadataList(newTask.getPublisherStorageMetadatasResponse, s_responseObjectMetadatas, newTask.fileEntryCount);
    v12 = OnlineStorage::GetInstance();
    if ( OnlineStorage::EnqueueTask(v12, &newTask) )
    {
      Online_CachedContentStreamer::SetCurrentStreamState(this, CCS_STATE_WAIT_LISTING_END);
      v13 = (char *)this + 200 * this->m_currentStreamIndex;
      LODWORD(v22) = *((_DWORD *)v13 + 4996);
      LODWORD(v21) = *((_DWORD *)v13 + 5033);
      v14 = j_va("ccs state: %s. [ Context: Idx:%d, ContIdx:%d, file:%s, category:%d, cacheType:%d ].\n", "Successfully started listing, waiting for results", this->m_currentStreamIndex, *((unsigned int *)v13 + 4994), v13 + 19992, v21, v22);
      OnlineSystem::DebugLog(this, v14);
      Sys_UnlockWrite(&s_dcacheStreamCritSect);
      TaskCreateRequest::~TaskCreateRequest(&newTask.taskCreateRequest);
      return 1;
    }
    TaskCreateRequest::~TaskCreateRequest(&newTask.taskCreateRequest);
    goto LABEL_31;
  }
  *(_QWORD *)&this->m_listCachedContentFilesInfo.m_startDate = 0i64;
  this->m_listCachedContentFilesInfo.m_outDescriptors = NULL;
  *(_QWORD *)&this->m_listCachedContentFilesInfo.m_maxNumResults = 0i64;
  this->m_listCachedContentFilesInfo.m_outDescriptorCount = NULL;
  *(_QWORD *)&this->m_listCachedContentFilesInfo.m_offset = 0i64;
  this->m_listCachedContentFilesInfo.m_fileName = NULL;
  this->m_listCachedContentFilesInfo.m_successCallback = NULL;
  this->m_listCachedContentFilesInfo.m_failureCallback = NULL;
  v18 = this->m_currentStreamIndex;
  this->m_listCachedContentFilesInfo.m_category = this->m_streamList[v18].streamFileVersion;
  this->m_listCachedContentFilesInfo.m_outDescriptors = &this->m_cachedContentFileMetaData;
  this->m_listCachedContentFilesInfo.m_maxNumResults = 1;
  this->m_listCachedContentFilesInfo.m_outDescriptorCount = &this->m_outCachedContentMetaDataCount;
  this->m_listCachedContentFilesInfo.m_fileName = this->m_streamList[v18].streamFileName;
  this->m_listCachedContentFilesInfo.m_successCallback = Online_CachedContentStreamer_OnListFilesSuccess;
  this->m_listCachedContentFilesInfo.m_failureCallback = Online_CachedContentStreamer_OnListFilesFailed;
  if ( !LiveStorage_CS_ListAllPublisherFiles(this->m_streamList[v18].controllerIndex, &this->m_listCachedContentFilesInfo) )
  {
LABEL_31:
    v16 = (char *)this + 200 * this->m_currentStreamIndex;
    LODWORD(v22) = *((_DWORD *)v16 + 4996);
    LODWORD(v21) = *((_DWORD *)v16 + 5033);
    v17 = j_va("ccs state: %s. [ Context: Idx:%d, ContIdx:%d, file:%s, category:%d, cacheType:%d ].\n", "ccs list: publisher file list request  failed to start. Wait and retry.", this->m_currentStreamIndex, *((unsigned int *)v16 + 4994), v16 + 19992, v21, v22);
    OnlineSystem::DebugLog(this, v17);
    Sys_UnlockWrite(&s_dcacheStreamCritSect);
    return 0;
  }
  Online_CachedContentStreamer::SetCurrentStreamState(this, CCS_STATE_WAIT_LISTING_END);
  v19 = (char *)this + 200 * this->m_currentStreamIndex;
  LODWORD(v22) = *((_DWORD *)v19 + 4996);
  LODWORD(v21) = *((_DWORD *)v19 + 5033);
  v20 = j_va("ccs state: %s. [ Context: Idx:%d, ContIdx:%d, file:%s, category:%d, cacheType:%d ].\n", "Successfully started listing, waiting for results", this->m_currentStreamIndex, *((unsigned int *)v19 + 4994), v19 + 19992, v21, v22);
  OnlineSystem::DebugLog(this, v20);
  Sys_UnlockWrite(&s_dcacheStreamCritSect);
  return 1;
}

