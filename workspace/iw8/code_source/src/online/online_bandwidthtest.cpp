/*
==============
Online_BandwidthTest::Init
==============
*/

bool __fastcall Online_BandwidthTest::Init(Online_BandwidthTest *this)
{
  return ?Init@Online_BandwidthTest@@UEAA_NXZ(this);
}

/*
==============
Online_BandwidthTest::Uninit
==============
*/

void __fastcall Online_BandwidthTest::Uninit(Online_BandwidthTest *this)
{
  ?Uninit@Online_BandwidthTest@@UEAAXXZ(this);
}

/*
==============
Online_BandwidthTest::IsInProgress
==============
*/

bool __fastcall Online_BandwidthTest::IsInProgress(Online_BandwidthTest *this)
{
  return ?IsInProgress@Online_BandwidthTest@@QEAA_NXZ(this);
}

/*
==============
Online_BandwidthTest::CleanupTask
==============
*/

void __fastcall Online_BandwidthTest::CleanupTask(Online_BandwidthTest *this)
{
  ?CleanupTask@Online_BandwidthTest@@AEAAXXZ(this);
}

/*
==============
Online_BandwidthTest::GetInstance
==============
*/

Online_BandwidthTest *__fastcall Online_BandwidthTest::GetInstance()
{
  return ?GetInstance@Online_BandwidthTest@@SAAEAV1@XZ();
}

/*
==============
Online_BandwidthTest::OnSignedOut
==============
*/

void __fastcall Online_BandwidthTest::OnSignedOut(Online_BandwidthTest *this, const int controllerIndex, GenericSignOutState __formal)
{
  ?OnSignedOut@Online_BandwidthTest@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, __formal);
}

/*
==============
Online_BandwidthTest::Online_BandwidthTest
==============
*/

void __fastcall Online_BandwidthTest::Online_BandwidthTest(Online_BandwidthTest *this)
{
  ??0Online_BandwidthTest@@QEAA@XZ(this);
}

/*
==============
Online_BandwidthTest::TryStartBandwidthTest
==============
*/

void __fastcall Online_BandwidthTest::TryStartBandwidthTest(Online_BandwidthTest *this, const int controllerIndex)
{
  ?TryStartBandwidthTest@Online_BandwidthTest@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_BandwidthTest::Frame
==============
*/

void __fastcall Online_BandwidthTest::Frame(Online_BandwidthTest *this)
{
  ?Frame@Online_BandwidthTest@@UEAAXXZ(this);
}

/*
==============
Online_BandwidthTest::ComErrorCleanup
==============
*/

void __fastcall Online_BandwidthTest::ComErrorCleanup(Online_BandwidthTest *this)
{
  ?ComErrorCleanup@Online_BandwidthTest@@QEAAXXZ(this);
}

/*
==============
Online_BandwidthTest::GetInstancePtr
==============
*/

Online_BandwidthTest *__fastcall Online_BandwidthTest::GetInstancePtr()
{
  return ?GetInstancePtr@Online_BandwidthTest@@SAPEAV1@XZ();
}

/*
==============
Online_BandwidthTest::SetDefaultBandwidth
==============
*/

void __fastcall Online_BandwidthTest::SetDefaultBandwidth(Online_BandwidthTest *this)
{
  ?SetDefaultBandwidth@Online_BandwidthTest@@AEAAXXZ(this);
}

/*
==============
Online_GetUploadSpeed
==============
*/

int __fastcall Online_GetUploadSpeed()
{
  return ?Online_GetUploadSpeed@@YAHXZ();
}

/*
==============
Online_BandwidthTest::FenceDependeciesUpdated
==============
*/

void __fastcall Online_BandwidthTest::FenceDependeciesUpdated(const int controllerIndex, const bool value)
{
  ?FenceDependeciesUpdated@Online_BandwidthTest@@SAXH_N@Z(controllerIndex, value);
}

/*
==============
Online_BandwidthTest::IsComplete
==============
*/

bool __fastcall Online_BandwidthTest::IsComplete(Online_BandwidthTest *this)
{
  return ?IsComplete@Online_BandwidthTest@@QEAA_NXZ(this);
}

/*
==============
Online_BandwidthTest::OnDisconnect
==============
*/

void __fastcall Online_BandwidthTest::OnDisconnect(Online_BandwidthTest *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_BandwidthTest@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_BandwidthTest::Reset
==============
*/

void __fastcall Online_BandwidthTest::Reset(Online_BandwidthTest *this)
{
  ?Reset@Online_BandwidthTest@@QEAAXXZ(this);
}

/*
==============
Online_BandwidthTest::Online_BandwidthTest
==============
*/
void Online_BandwidthTest::Online_BandwidthTest(Online_BandwidthTest *this)
{
  this->m_nextSystem = NULL;
  this->__vftable = (Online_BandwidthTest_vtbl *)&Online_BandwidthTest::`vftable';
  this->m_initialized = 0;
  bdBandwidthTestClient::bdBandwidthTestClient(&this->m_bandwidthTestClient);
  this->m_bandwidthTestType = BD_UPLOAD_TEST;
  this->m_controllerIndex = -1;
  this->m_complete = 0;
}

/*
==============
Online_BandwidthTest::CleanupTask
==============
*/
void Online_BandwidthTest::CleanupTask(Online_BandwidthTest *this)
{
  bdBandwidthTestClient::stop(&this->m_bandwidthTestClient);
  bdBandwidthTestClient::quit(&this->m_bandwidthTestClient);
  this->m_complete = 1;
}

/*
==============
Online_BandwidthTest::ComErrorCleanup
==============
*/
void Online_BandwidthTest::ComErrorCleanup(Online_BandwidthTest *this)
{
  bdBandwidthTestStatus Status; 

  Status = bdBandwidthTestClient::getStatus(&this->m_bandwidthTestClient);
  if ( Status )
  {
    if ( Status != BD_BANDWIDTH_TEST_DONE )
    {
      bdBandwidthTestClient::stop(&this->m_bandwidthTestClient);
      bdBandwidthTestClient::quit(&this->m_bandwidthTestClient);
      this->m_complete = 0;
      this->m_controllerIndex = -1;
    }
  }
}

/*
==============
Online_BandwidthTest::FenceDependeciesUpdated
==============
*/
void Online_BandwidthTest::FenceDependeciesUpdated(const int controllerIndex, const bool value)
{
  bdBandwidthTestStatus Status; 

  if ( value )
  {
    Status = bdBandwidthTestClient::getStatus(&Online_BandwidthTest::s_instance.m_bandwidthTestClient);
    if ( (Status == BD_BANDWIDTH_TEST_IDLE || Status == BD_BANDWIDTH_TEST_DONE) && !Online_BandwidthTest::s_instance.m_complete )
      Online_BandwidthTest::TryStartBandwidthTest(&Online_BandwidthTest::s_instance, controllerIndex);
  }
}

/*
==============
Online_BandwidthTest::Frame
==============
*/
void Online_BandwidthTest::Frame(Online_BandwidthTest *this)
{
  int Status; 
  bdBandwidthTestResults *UploadResults; 
  bool v5; 
  bdBandwidthTestResults *DownloadResults; 
  unsigned int NecessaryBandwidth; 
  int m_uploadBitsPerSec; 
  int m_downloadBitsPerSec; 
  bdLobbyErrorCode ErrorCode; 

  Status = bdBandwidthTestClient::getStatus(&this->m_bandwidthTestClient);
  if ( Status > 0 )
  {
    bdBandwidthTestClient::pump(&this->m_bandwidthTestClient);
    if ( bdBandwidthTestClient::getErrorCode(&this->m_bandwidthTestClient) )
    {
      ErrorCode = bdBandwidthTestClient::getErrorCode(&this->m_bandwidthTestClient);
      Com_PrintError(25, "Error '%i' trying to measure upload bandwidth, default value will be used\n", (unsigned int)ErrorCode);
      bdBandwidthTestClient::stop(&this->m_bandwidthTestClient);
      bdBandwidthTestClient::quit(&this->m_bandwidthTestClient);
      this->m_complete = 1;
    }
    else if ( Status == 7 )
    {
      UploadResults = bdBandwidthTestClient::getUploadResults(&this->m_bandwidthTestClient);
      *(double *)&_XMM0 = bdBandwidthTestResults::getBandwidth(UploadResults);
      v5 = this->m_bandwidthTestType == BD_UPLOAD_DOWNLOAD_TEST;
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@447a0000
        vcvttss2si r8d, xmm0
      }
      this->m_uploadBitsPerSec = _R8;
      if ( v5 )
      {
        DownloadResults = bdBandwidthTestClient::getDownloadResults(&this->m_bandwidthTestClient);
        *(double *)&_XMM0 = bdBandwidthTestResults::getBandwidth(DownloadResults);
        __asm { vmulss  xmm1, xmm0, cs:__real@447a0000 }
        _R8 = (unsigned int)this->m_uploadBitsPerSec;
        __asm { vcvttss2si eax, xmm1 }
        this->m_downloadBitsPerSec = _EAX;
      }
      Com_Printf(25, "Upload Bandwidth: %d bits/s\n", _R8);
      Com_Printf(25, "Download Bandwidth: %d bits/s\n", (unsigned int)this->m_downloadBitsPerSec);
      if ( !this->m_uploadBitsPerSec )
      {
        NecessaryBandwidth = Live_GetNecessaryBandwidth(200);
        this->m_uploadBitsPerSec = NecessaryBandwidth;
        this->m_downloadBitsPerSec = NecessaryBandwidth;
        Com_Printf(25, "DemonWare bandwidth test internal failure.  Upload Bandwidth faked to: %d bits/s\n", NecessaryBandwidth);
      }
      bdBandwidthTestClient::stop(&this->m_bandwidthTestClient);
      bdBandwidthTestClient::quit(&this->m_bandwidthTestClient);
      m_uploadBitsPerSec = this->m_uploadBitsPerSec;
      m_downloadBitsPerSec = this->m_downloadBitsPerSec;
      this->m_complete = 1;
      Live_QueueBandwidthSample(m_downloadBitsPerSec, m_uploadBitsPerSec);
    }
  }
}

/*
==============
Online_BandwidthTest::GetInstance
==============
*/
Online_BandwidthTest *Online_BandwidthTest::GetInstance()
{
  return &Online_BandwidthTest::s_instance;
}

/*
==============
Online_BandwidthTest::GetInstancePtr
==============
*/
Online_BandwidthTest *Online_BandwidthTest::GetInstancePtr()
{
  return &Online_BandwidthTest::s_instance;
}

/*
==============
Online_BandwidthTest::Init
==============
*/
char Online_BandwidthTest::Init(Online_BandwidthTest *this)
{
  int NecessaryBandwidth; 

  NecessaryBandwidth = Live_GetNecessaryBandwidth(200);
  this->m_uploadBitsPerSec = NecessaryBandwidth;
  this->m_downloadBitsPerSec = NecessaryBandwidth;
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_BANDWIDTH_TEST, (void (__fastcall *)(int, bool))Online_BandwidthTest::FenceDependeciesUpdated);
  return 1;
}

/*
==============
Online_BandwidthTest::IsComplete
==============
*/
_BOOL8 Online_BandwidthTest::IsComplete(Online_BandwidthTest *this)
{
  return this->m_complete;
}

/*
==============
Online_BandwidthTest::IsInProgress
==============
*/
bool Online_BandwidthTest::IsInProgress(Online_BandwidthTest *this)
{
  bdBandwidthTestStatus Status; 

  Status = bdBandwidthTestClient::getStatus(&this->m_bandwidthTestClient);
  return Status && Status != BD_BANDWIDTH_TEST_DONE;
}

/*
==============
Online_BandwidthTest::OnDisconnect
==============
*/
void Online_BandwidthTest::OnDisconnect(Online_BandwidthTest *this, ONLINE_DISCONNECT reason)
{
  bdBandwidthTestClient::stop(&this->m_bandwidthTestClient);
  bdBandwidthTestClient::quit(&this->m_bandwidthTestClient);
  this->m_complete = 0;
  this->m_controllerIndex = -1;
}

/*
==============
Online_BandwidthTest::OnSignedOut
==============
*/
void Online_BandwidthTest::OnSignedOut(Online_BandwidthTest *this, const int controllerIndex, GenericSignOutState __formal)
{
  if ( this->m_controllerIndex == controllerIndex )
  {
    bdBandwidthTestClient::stop(&this->m_bandwidthTestClient);
    bdBandwidthTestClient::quit(&this->m_bandwidthTestClient);
    this->m_complete = 0;
    this->m_controllerIndex = -1;
  }
}

/*
==============
Online_GetUploadSpeed
==============
*/
__int64 Online_GetUploadSpeed()
{
  return (unsigned int)Online_BandwidthTest::s_instance.m_uploadBitsPerSec;
}

/*
==============
Online_BandwidthTest::Reset
==============
*/
void Online_BandwidthTest::Reset(Online_BandwidthTest *this)
{
  bdBandwidthTestClient::stop(&this->m_bandwidthTestClient);
  bdBandwidthTestClient::quit(&this->m_bandwidthTestClient);
  this->m_complete = 0;
  this->m_controllerIndex = -1;
}

/*
==============
Online_BandwidthTest::SetDefaultBandwidth
==============
*/
void Online_BandwidthTest::SetDefaultBandwidth(Online_BandwidthTest *this)
{
  int NecessaryBandwidth; 

  NecessaryBandwidth = Live_GetNecessaryBandwidth(200);
  this->m_uploadBitsPerSec = NecessaryBandwidth;
  this->m_downloadBitsPerSec = NecessaryBandwidth;
}

/*
==============
Online_BandwidthTest::TryStartBandwidthTest
==============
*/
void Online_BandwidthTest::TryStartBandwidthTest(Online_BandwidthTest *this, const int controllerIndex)
{
  const dvar_t *v6; 
  const dvar_t *v7; 
  Online_Commerce *Instance; 
  Online_Commerce *v9; 
  bool v10; 
  Online_Commerce *v11; 
  bool HavePaidEntitlement; 
  char v19; 
  DWServicesAccess *v20; 
  DWLobbyService *DWLobbyService; 
  bdBandwidthTestType m_bandwidthTestType; 

  if ( bdBandwidthTestClient::getStatus(&this->m_bandwidthTestClient) <= BD_BANDWIDTH_TEST_IDLE )
  {
    v6 = DVARBOOL_com_force_free_to_play;
    if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
      goto LABEL_30;
    v7 = DVARBOOL_com_force_premium;
    if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( !v7->current.enabled && (!Content_IsEnumerationDone() || !Content_DoWeHavePaidContentPackEntitlement()) )
    {
      Instance = Online_Commerce::GetInstance();
      v10 = 1;
      if ( Online_Commerce::GetPaidEntitlementTaskState(Instance, controllerIndex) != ENTITLEMENT_STATE_COMPLETE )
      {
        v9 = Online_Commerce::GetInstance();
        if ( Online_Commerce::GetPaidEntitlementTaskState(v9, controllerIndex) != ENTITLEMENT_STATE_ERROR )
          v10 = 0;
      }
      v11 = Online_Commerce::GetInstance();
      HavePaidEntitlement = Online_Commerce::HavePaidEntitlement(v11, controllerIndex);
      if ( !Live_IsUserSignedInToLive(controllerIndex) || !v10 || !HavePaidEntitlement )
      {
LABEL_30:
        _RSI = DVARFLT_online_bandwith_test_f2p_pct;
        __asm { vmovaps [rsp+68h+var_28], xmm6 }
        if ( !DVARFLT_online_bandwith_test_f2p_pct && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_bandwith_test_f2p_pct") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RSI);
        __asm { vmovss  xmm6, dword ptr [rsi+28h] }
        rand();
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, cs:__real@38000100
          vcomiss xmm1, xmm6
          vmovaps xmm6, [rsp+68h+var_28]
        }
        if ( !v19 )
        {
          Com_Printf(25, "%s skipping bandwidth test for f2p player due to failing random pct chance\n", "Online_BandwidthTest::TryStartBandwidthTest");
LABEL_27:
          this->m_complete = 1;
          return;
        }
      }
    }
    this->m_complete = 0;
    v20 = DWServicesAccess::GetInstance();
    DWLobbyService = DWServicesAccess::GetDWLobbyService(v20, controllerIndex);
    if ( DWLobbyService::initBandwidthTestClient(DWLobbyService, &this->m_bandwidthTestClient) )
    {
      m_bandwidthTestType = this->m_bandwidthTestType;
      this->m_controllerIndex = controllerIndex;
      bdBandwidthTestClient::start(&this->m_bandwidthTestClient, m_bandwidthTestType);
      if ( bdBandwidthTestClient::getErrorCode(&this->m_bandwidthTestClient) == BD_START_TASK_FAILED )
      {
        Com_Printf(25, "DemonWare bandwidth test internal failure.  Upload Bandwidth faked to: %d bits/s\n", (unsigned int)this->m_uploadBitsPerSec);
        bdBandwidthTestClient::stop(&this->m_bandwidthTestClient);
        bdBandwidthTestClient::quit(&this->m_bandwidthTestClient);
        goto LABEL_27;
      }
    }
  }
}

/*
==============
Online_BandwidthTest::Uninit
==============
*/
void Online_BandwidthTest::Uninit(Online_BandwidthTest *this)
{
  bdBandwidthTestClient::stop(&this->m_bandwidthTestClient);
  bdBandwidthTestClient::quit(&this->m_bandwidthTestClient);
  this->m_complete = 1;
}

