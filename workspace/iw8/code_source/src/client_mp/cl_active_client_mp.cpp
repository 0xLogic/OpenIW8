/*
==============
ClActiveClientMP::AllocateClients
==============
*/

void __fastcall ClActiveClientMP::AllocateClients(HunkUser *hunkUser, const int maxLocalClients)
{
  ?AllocateClients@ClActiveClientMP@@SAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
ClActiveClientMP::FreeSnapshotMemory
==============
*/

void __fastcall ClActiveClientMP::FreeSnapshotMemory(ClActiveClientMP *this)
{
  ?FreeSnapshotMemory@ClActiveClientMP@@AEAAXXZ(this);
}

/*
==============
ClActiveClientMP::ShouldDisplayMsgWindow
==============
*/

bool __fastcall ClActiveClientMP::ShouldDisplayMsgWindow(ClActiveClientMP *this)
{
  return ?ShouldDisplayMsgWindow@ClActiveClientMP@@UEBA_NXZ(this);
}

/*
==============
ClActiveClientMP::SavePredictedData
==============
*/

void __fastcall ClActiveClientMP::SavePredictedData(ClActiveClientMP *this)
{
  ?SavePredictedData@ClActiveClientMP@@QEAAXXZ(this);
}

/*
==============
ClActiveClientMP::ToggleSpecKeyboard
==============
*/

void __fastcall ClActiveClientMP::ToggleSpecKeyboard(ClActiveClientMP *this, int key)
{
  ?ToggleSpecKeyboard@ClActiveClientMP@@UEBAXH@Z(this, key);
}

/*
==============
ClActiveClientMP::FreeClientSnapshots
==============
*/

void ClActiveClientMP::FreeClientSnapshots(void)
{
  ?FreeClientSnapshots@ClActiveClientMP@@SAXXZ();
}

/*
==============
ClActiveClientMP::AllocateClientSnapshots
==============
*/

void __fastcall ClActiveClientMP::AllocateClientSnapshots(HunkUser *hunkUser, const int maxLocalClients, const int packetBackupCount, const int maxClients, const int maxAgents, const bool useMoreEntities, const unsigned int scriptedCameraCount)
{
  ?AllocateClientSnapshots@ClActiveClientMP@@SAXPEAUHunkUser@@HHHH_NI@Z(hunkUser, maxLocalClients, packetBackupCount, maxClients, maxAgents, useMoreEntities, scriptedCameraCount);
}

/*
==============
ClActiveClientMP::FreeSharedSnapshotMemory
==============
*/

void ClActiveClientMP::FreeSharedSnapshotMemory(void)
{
  ?FreeSharedSnapshotMemory@ClActiveClientMP@@CAXXZ();
}

/*
==============
ClActiveClientMP::SendUserInfo
==============
*/

void __fastcall ClActiveClientMP::SendUserInfo(ClActiveClientMP *this)
{
  ?SendUserInfo@ClActiveClientMP@@UEBAXXZ(this);
}

/*
==============
ClActiveClientMP::PrintAdjustTime
==============
*/

void __fastcall ClActiveClientMP::PrintAdjustTime(ClActiveClientMP *this)
{
  ?PrintAdjustTime@ClActiveClientMP@@QEBAXXZ(this);
}

/*
==============
ClActiveClientMP::GetServerTime
==============
*/

int __fastcall ClActiveClientMP::GetServerTime(ClActiveClientMP *this)
{
  return ?GetServerTime@ClActiveClientMP@@UEBAHXZ(this);
}

/*
==============
ClActiveClientMP::ResetParseInfoMyChanges
==============
*/

void __fastcall ClActiveClientMP::ResetParseInfoMyChanges(ClActiveClientMP *this)
{
  ?ResetParseInfoMyChanges@ClActiveClientMP@@UEAAXXZ(this);
}

/*
==============
ClActiveClientMP::GetHudMsgCharHeight
==============
*/

int __fastcall ClActiveClientMP::GetHudMsgCharHeight(ClActiveClientMP *this)
{
  return ?GetHudMsgCharHeight@ClActiveClientMP@@UEBAHXZ(this);
}

/*
==============
ClActiveClientMP::GetMsgWindowDriftTime
==============
*/

int __fastcall ClActiveClientMP::GetMsgWindowDriftTime(ClActiveClientMP *this)
{
  return ?GetMsgWindowDriftTime@ClActiveClientMP@@UEBAHXZ(this);
}

/*
==============
ClActiveClientMP::TranslateButton
==============
*/

bool __fastcall ClActiveClientMP::TranslateButton(ClActiveClientMP *this, int button, int cmd)
{
  return ?TranslateButton@ClActiveClientMP@@UEBA_NHH@Z(this, button, cmd);
}

/*
==============
ClActiveClientMP::IsValidRemoteInputState
==============
*/

bool __fastcall ClActiveClientMP::IsValidRemoteInputState(ClActiveClientMP *this)
{
  return ?IsValidRemoteInputState@ClActiveClientMP@@UEBA_NXZ(this);
}

/*
==============
ClActiveClientMP::SetPredictedData
==============
*/

void __fastcall ClActiveClientMP::SetPredictedData(ClActiveClientMP *this, const int predictedIndex, const int commandTime, const ClPredictResultMP *predictedData)
{
  ?SetPredictedData@ClActiveClientMP@@QEAAXHHAEBUClPredictResultMP@@@Z(this, predictedIndex, commandTime, predictedData);
}

/*
==============
ClActiveClientMP::SpecNextKeyboard
==============
*/

void __fastcall ClActiveClientMP::SpecNextKeyboard(ClActiveClientMP *this, int key)
{
  ?SpecNextKeyboard@ClActiveClientMP@@UEBAXH@Z(this, key);
}

/*
==============
ClActiveClientMP::SpecPrevKeyboard
==============
*/

void __fastcall ClActiveClientMP::SpecPrevKeyboard(ClActiveClientMP *this, int key)
{
  ?SpecPrevKeyboard@ClActiveClientMP@@UEBAXH@Z(this, key);
}

/*
==============
ClActiveClientMP::ExecBinding
==============
*/

void __fastcall ClActiveClientMP::ExecBinding(ClActiveClientMP *this, int kb, int key, int forceNotify)
{
  ?ExecBinding@ClActiveClientMP@@UEBAXHHH@Z(this, kb, key, forceNotify);
}

/*
==============
ClActiveClientMP::GetFreeMoveType
==============
*/

FreeMoveType __fastcall ClActiveClientMP::GetFreeMoveType(ClActiveClientMP *this)
{
  return ?GetFreeMoveType@ClActiveClientMP@@UEBA?AW4FreeMoveType@@XZ(this);
}

/*
==============
ClActiveClientMP::ClearClient
==============
*/

void __fastcall ClActiveClientMP::ClearClient(const LocalClientNum_t localClientNum)
{
  ?ClearClient@ClActiveClientMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClActiveClientMP::IsSnapshotDataAllocated
==============
*/

bool __fastcall ClActiveClientMP::IsSnapshotDataAllocated(ClActiveClientMP *this)
{
  return ?IsSnapshotDataAllocated@ClActiveClientMP@@QEBA_NXZ(this);
}

/*
==============
ClActiveClientMP::FreeClients
==============
*/

void ClActiveClientMP::FreeClients(void)
{
  ?FreeClients@ClActiveClientMP@@SAXXZ();
}

/*
==============
ClActiveClientMP::AllocSharedSnapshotMemory
==============
*/

void __fastcall ClActiveClientMP::AllocSharedSnapshotMemory(HunkUser *hunkUser, bool useMoreEntities)
{
  ?AllocSharedSnapshotMemory@ClActiveClientMP@@CAXPEAUHunkUser@@_N@Z(hunkUser, useMoreEntities);
}

/*
==============
ClActiveClientMP::UpdateCommandTime
==============
*/

void __fastcall ClActiveClientMP::UpdateCommandTime(ClActiveClientMP *this, const unsigned __int64 usec)
{
  ?UpdateCommandTime@ClActiveClientMP@@UEAAX_K@Z(this, usec);
}

/*
==============
ClActiveClientMP::GetPredictedData
==============
*/

bool __fastcall ClActiveClientMP::GetPredictedData(ClActiveClientMP *this, const int commandNum, CmdPredict *const outCmdPredict)
{
  return ?GetPredictedData@ClActiveClientMP@@QEBA_NHQEAUCmdPredict@@@Z(this, commandNum, outCmdPredict);
}

/*
==============
ClActiveClientMP::GetCommandThrottleScale
==============
*/

long double __fastcall ClActiveClientMP::GetCommandThrottleScale(ClActiveClientMP *this)
{
  return ?GetCommandThrottleScale@ClActiveClientMP@@QEBANXZ(this);
}

/*
==============
ClActiveClientMP::FindPredictedDataForTime
==============
*/

bool __fastcall ClActiveClientMP::FindPredictedDataForTime(ClActiveClientMP *this, const int commandTime, int *outPredictedTime, ClPredictResultMP *outPredictedData)
{
  return ?FindPredictedDataForTime@ClActiveClientMP@@QEBA_NHAEAHAEAUClPredictResultMP@@@Z(this, commandTime, outPredictedTime, outPredictedData);
}

/*
==============
ClActiveClientMP::AllocSnapshotMemory
==============
*/

void __fastcall ClActiveClientMP::AllocSnapshotMemory(ClActiveClientMP *this, HunkUser *hunkUser, const int packetBackupCount, const int maxLocalClients, const int maxClients, const int maxAgents, const unsigned int scriptedCameraCount)
{
  ?AllocSnapshotMemory@ClActiveClientMP@@AEAAXPEAUHunkUser@@HHHHI@Z(this, hunkUser, packetBackupCount, maxLocalClients, maxClients, maxAgents, scriptedCameraCount);
}

/*
==============
ClActiveClientMP::Pause
==============
*/

void __fastcall ClActiveClientMP::Pause(ClActiveClientMP *this)
{
  ?Pause@ClActiveClientMP@@UEBAXXZ(this);
}

/*
==============
ClActiveClientMP::AllocSharedSnapshotMemory
==============
*/
void ClActiveClientMP::AllocSharedSnapshotMemory(HunkUser *hunkUser, bool useMoreEntities)
{
  int v4; 
  entityState_t *noDeltaEntities; 

  if ( cls.noDeltaEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 169, ASSERT_TYPE_ASSERT, "(cls.noDeltaEntities == nullptr)", (const char *)&queryFormat, "cls.noDeltaEntities == nullptr") )
    __debugbreak();
  v4 = 768;
  if ( useMoreEntities )
    v4 = 2048;
  cls.maxEntitiesInSnapshotForClient = v4;
  cls.maxNoDeltaEntities = (useMoreEntities + 1) << 10;
  cls.noDeltaEntities = (entityState_t *)Mem_HunkUser_AllocInternal(hunkUser, 248i64 * (((unsigned int)useMoreEntities + 1) << 10), 4ui64, "ClActiveClientMP::AllocSharedSnapshotMemory");
  noDeltaEntities = cls.noDeltaEntities;
  if ( !cls.noDeltaEntities )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 178, ASSERT_TYPE_ASSERT, "(cls.noDeltaEntities)", (const char *)&queryFormat, "cls.noDeltaEntities") )
      __debugbreak();
    noDeltaEntities = cls.noDeltaEntities;
  }
  memset_0(noDeltaEntities, 0, 248i64 * cls.maxNoDeltaEntities);
}

/*
==============
ClActiveClientMP::AllocSnapshotMemory
==============
*/
void ClActiveClientMP::AllocSnapshotMemory(ClActiveClientMP *this, HunkUser *hunkUser, const int packetBackupCount, const int maxLocalClients, const int maxClients, const int maxAgents, const unsigned int scriptedCameraCount)
{
  __int64 v7; 
  int v10; 
  signed int v11; 
  signed int v12; 
  unsigned int v13; 
  agentState_s *v14; 
  unsigned __int64 v15; 
  int v16; 
  char *fmt; 
  __int64 v18; 
  signed int v19; 
  int maxClientsa; 
  int maxAgentsa; 

  v7 = (unsigned int)packetBackupCount;
  if ( !maxLocalClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 43, ASSERT_TYPE_ASSERT, "(maxLocalClients)", (const char *)&queryFormat, "maxLocalClients") )
    __debugbreak();
  if ( !maxClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 44, ASSERT_TYPE_ASSERT, "(maxClients)", (const char *)&queryFormat, "maxClients") )
    __debugbreak();
  if ( this->snapshots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 46, ASSERT_TYPE_ASSERT, "(!this->snapshots)", (const char *)&queryFormat, "!this->snapshots") )
    __debugbreak();
  if ( this->parseEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 47, ASSERT_TYPE_ASSERT, "(!this->parseEntities)", (const char *)&queryFormat, "!this->parseEntities") )
    __debugbreak();
  if ( this->parseClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 48, ASSERT_TYPE_ASSERT, "(!this->parseClients)", (const char *)&queryFormat, "!this->parseClients") )
    __debugbreak();
  if ( this->parseAgents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 49, ASSERT_TYPE_ASSERT, "(!this->parseAgents)", (const char *)&queryFormat, "!this->parseAgents") )
    __debugbreak();
  this->parseSnapshotCount = v7;
  this->parseOmnvarsCount = v7;
  this->parseClientsCount = maxClients * v7;
  this->parseAgentsCount = maxAgents * v7;
  this->parseEntitiesCount = 600 * v7;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v10 = 94856 * this->parseSnapshotCount;
  v11 = 248 * this->parseEntitiesCount;
  v12 = 408 * this->parseClientsCount;
  this->parseWeaponMapEntriesCount = v7 * BgWeaponMap::ms_runtimeSize;
  maxClientsa = 252 * this->parseAgentsCount;
  v13 = BG_Omnvar_PerSnapCount();
  v19 = 62 * this->parseWeaponMapEntriesCount;
  maxAgentsa = 8 * this->parseOmnvarsCount * v13;
  LODWORD(v18) = v11 / 1024;
  LODWORD(fmt) = v10 / 1024;
  Com_Printf(14, "ClActiveClientMP::AllocSnapshotMemory: %i kb (pb %i) [Snapshot %i, Entity %i, Client %i, Agent %i, Omnvar %i, WeaponMap %i]\n", (unsigned int)((v10 + v11 + v12 + maxClientsa + v19 + maxAgentsa) / 1024), (unsigned int)v7, fmt, v18, v12 / 1024, maxClientsa / 1024, maxAgentsa / 1024, v19 / 1024);
  this->snapshots = (ClSnapshot *)Mem_HunkUser_AllocInternal(hunkUser, v10, 8ui64, "ClActiveClientMP::AllocSnapshotMemory");
  this->parseEntities = (entityState_t *)Mem_HunkUser_AllocInternal(hunkUser, v11, 4ui64, "ClActiveClientMP::AllocSnapshotMemory");
  this->parseClients = (clientState_t *)Mem_HunkUser_AllocInternal(hunkUser, v12, 4ui64, "ClActiveClientMP::AllocSnapshotMemory");
  if ( maxClientsa )
    v14 = (agentState_s *)Mem_HunkUser_AllocInternal(hunkUser, maxClientsa, 4ui64, "ClActiveClientMP::AllocSnapshotMemory");
  else
    v14 = NULL;
  this->parseAgents = v14;
  this->parseOmnvars = (OmnvarData *)Mem_HunkUser_AllocInternal(hunkUser, maxAgentsa, 4ui64, "ClActiveClientMP::AllocSnapshotMemory");
  this->parseWeaponMapEntries = (WeaponMapEntry *)Mem_HunkUser_AllocInternal(hunkUser, v19, 4ui64, "ClActiveClientMP::AllocSnapshotMemory");
  this->parseUmbraGateStatesCount = v7;
  this->parseUmbraGateStates = (bitarray<384> *)Mem_HunkUser_AllocInternal(hunkUser, 48 * v7, 4ui64, "ClActiveClientMP::AllocSnapshotMemory");
  this->parseUmbraGateStatesIndex = 0i64;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v15 = 62 * (unsigned int)BgWeaponMap::ms_runtimeSize;
  this->parseNoDeltaWeaponMapEntriesCount = BgWeaponMap::ms_runtimeSize;
  this->parseNoDeltaWeaponMapEntries = (WeaponMapEntry *)Mem_HunkUser_AllocInternal(hunkUser, v15, 4ui64, "ClActiveClientMP::AllocSnapshotMemory");
  this->parseNoDeltaPlayerState = (playerState_s *)Mem_HunkUser_AllocInternal(hunkUser, 0x53A4ui64, 4ui64, "ClActiveClientMP::AllocSnapshotMemory");
  if ( scriptedCameraCount )
  {
    v16 = scriptedCameraCount * v7;
    this->parseScriptedCameraCount = v16;
    this->parseScriptedCameras = (BgScriptedCameraState *)Mem_HunkUser_AllocInternal(hunkUser, (__int64)v16 << 7, 4ui64, "ClActiveClientMP::AllocSnapshotMemory");
    this->parseScriptedCameraIndex = 0;
  }
  else
  {
    if ( this->parseScriptedCameraCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 111, ASSERT_TYPE_ASSERT, "(this->parseScriptedCameraCount == 0)", (const char *)&queryFormat, "this->parseScriptedCameraCount == 0") )
      __debugbreak();
    if ( this->parseScriptedCameras )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 112, ASSERT_TYPE_ASSERT, "(this->parseScriptedCameras == nullptr)", (const char *)&queryFormat, "this->parseScriptedCameras == nullptr") )
        __debugbreak();
    }
  }
}

/*
==============
ClActiveClientMP::AllocateClientSnapshots
==============
*/
void ClActiveClientMP::AllocateClientSnapshots(HunkUser *hunkUser, const int maxLocalClients, const int packetBackupCount, const int maxClients, const int maxAgents, const bool useMoreEntities, const unsigned int scriptedCameraCount)
{
  int v11; 
  ClActiveClient **v12; 
  int v13; 
  entityState_t *noDeltaEntities; 
  __int64 v15; 
  __int64 v16; 

  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 194, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", "%s\n\tMust have called AllocateClients before allocating snapshots", "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
    __debugbreak();
  v11 = 0;
  if ( maxLocalClients > 0 )
  {
    v12 = ClActiveClient::ms_activeClients;
    do
    {
      if ( (unsigned int)v11 >= LODWORD(cl_maxLocalClients) )
      {
        *(float *)&v16 = cl_maxLocalClients;
        LODWORD(v15) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
        __debugbreak();
      if ( !*v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
        __debugbreak();
      ClActiveClientMP::AllocSnapshotMemory((ClActiveClientMP *)*v12, hunkUser, packetBackupCount, maxLocalClients, maxClients, maxAgents, scriptedCameraCount);
      ++v11;
      ++v12;
    }
    while ( v11 < maxLocalClients );
  }
  if ( cls.noDeltaEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 169, ASSERT_TYPE_ASSERT, "(cls.noDeltaEntities == nullptr)", (const char *)&queryFormat, "cls.noDeltaEntities == nullptr") )
    __debugbreak();
  v13 = 768;
  if ( useMoreEntities )
    v13 = 2048;
  cls.maxEntitiesInSnapshotForClient = v13;
  cls.maxNoDeltaEntities = (useMoreEntities + 1) << 10;
  noDeltaEntities = (entityState_t *)Mem_HunkUser_AllocInternal(hunkUser, 248i64 * (((unsigned int)useMoreEntities + 1) << 10), 4ui64, "ClActiveClientMP::AllocSharedSnapshotMemory");
  cls.noDeltaEntities = noDeltaEntities;
  if ( !noDeltaEntities )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 178, ASSERT_TYPE_ASSERT, "(cls.noDeltaEntities)", (const char *)&queryFormat, "cls.noDeltaEntities") )
      __debugbreak();
    noDeltaEntities = cls.noDeltaEntities;
  }
  memset_0(noDeltaEntities, 0, 248i64 * cls.maxNoDeltaEntities);
}

/*
==============
ClActiveClientMP::AllocateClients
==============
*/
void ClActiveClientMP::AllocateClients(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v2; 
  HunkUser *v3; 
  const dvar_t *v4; 
  __int64 v5; 
  HunkUser *v6; 
  unsigned __int64 v7; 
  NetBurstAutoCorrelate *v8; 
  char *v9; 
  LocalClientNum_t v10; 
  __int64 v11; 
  char *v12; 
  const dvar_t *v13; 
  __int64 v14; 
  int UserCommandConstantMsec; 
  const dvar_t *v16; 
  __int64 v17; 
  int v18; 
  unsigned __int64 FreeReserveAmount; 
  __int64 v20; 
  bdRandom v21; 
  HunkUser *v22; 
  __int64 v23; 
  unsigned __int8 pbBuffer[16]; 

  v23 = -2i64;
  v2 = maxLocalClients;
  v3 = hunkUser;
  v22 = hunkUser;
  if ( (_BYTE)ClActiveClient::ms_activeClientType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 233, ASSERT_TYPE_ASSERT, "(ms_activeClientType == GameModeType::NONE)", (const char *)&queryFormat, "ms_activeClientType == GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)(v2 - 1) > 1 )
  {
    LODWORD(v20) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 234, ASSERT_TYPE_ASSERT, "( 1 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [1, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v20, 1, 2) )
      __debugbreak();
  }
  v4 = DVARINT_cl_adjust_time_throttle_type;
  if ( !DVARINT_cl_adjust_time_throttle_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_adjust_time_throttle_type") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v2;
  if ( v4->current.integer == 1 )
  {
    v7 = 40 * v2;
    v6 = v3;
  }
  else
  {
    v6 = v3;
    if ( v4->current.integer == 3 )
      v7 = 1072 * v2;
    else
      v7 = 80 * v2;
  }
  v8 = (NetBurstAutoCorrelate *)Mem_HunkUser_AllocInternal(v6, v7, 8ui64, "ClActiveClientMP::AllocateClients");
  memset_0(v8, 0, v7);
  v9 = (char *)Mem_HunkUser_AllocInternal(v3, 153024 * v5, 8ui64, "ClActiveClientMP::AllocateClients");
  memset_0(v9, 0, 153024 * v5);
  v10 = LOCAL_CLIENT_0;
  if ( v5 > 0 )
  {
    v11 = 0i64;
    v12 = v9 + 436;
    do
    {
      v13 = DVARINT_cl_adjust_time_throttle_type;
      if ( !DVARINT_cl_adjust_time_throttle_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_adjust_time_throttle_type") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( v13->current.integer == 1 )
      {
        v16 = DVARINT_cl_adjust_time_throttle_window;
        if ( !DVARINT_cl_adjust_time_throttle_window && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_adjust_time_throttle_window") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        NetBurstFixedWindow::NetBurstFixedWindow((NetBurstAutoCorrelate *)((char *)v8 + 40 * v10), v16->current.integer);
      }
      else if ( v13->current.integer == 3 )
      {
        UserCommandConstantMsec = Com_GetUserCommandConstantMsec();
        NetBurstAutoCorrelate::NetBurstAutoCorrelate(&v8[v10], UserCommandConstantMsec);
      }
      else
      {
        NetBurstDynamicWindow::NetBurstDynamicWindow((NetBurstDynamicWindow *)v8 + (int)v10);
      }
      v17 = v14;
      ClActiveClient::ClActiveClient((ClActiveClient *)(v12 - 436), v10);
      *(_QWORD *)(v12 - 436) = &ClActiveClientMP::`vftable';
      *((_DWORD *)v12 + 9649) = 0;
      *(_QWORD *)(v12 + 129516) = v17;
      ClActiveClient::ms_activeClients[v11] = (ClActiveClient *)(v12 - 436);
      if ( !randomNumGenInit )
      {
        if ( !BCryptOpenAlgorithmProvider_0(&s_provider, L"RNG", NULL, 0) )
          OutputDebugStringA("InitRandomNumGen BCryptOpenAlgorithmProvider failed\n");
        randomNumGenInit = 1;
      }
      if ( !BCryptGenRandom_0(s_provider, pbBuffer, 0x10u, 0) || (v18 = *(_DWORD *)pbBuffer) == 0 && !*(_DWORD *)&pbBuffer[4] )
      {
        bdRandom::bdRandom(&v21);
        bdRandom::nextUBytes(&v21, pbBuffer, 16);
        bdRandom::~bdRandom(&v21);
        v18 = *(_DWORD *)pbBuffer;
      }
      *((_DWORD *)v12 + 8532) = v18;
      *((_DWORD *)v12 + 8533) = *(_DWORD *)&pbBuffer[4];
      *((_DWORD *)v12 + 8534) = *(_DWORD *)&pbBuffer[8];
      *((_DWORD *)v12 + 8535) = *(_DWORD *)&pbBuffer[12];
      memset(pbBuffer, 0, sizeof(pbBuffer));
      *((_DWORD *)v12 + 8532) -= *((_DWORD *)v12 + 8533);
      *((_DWORD *)v12 + 8457) = (((_DWORD)v12 + 33828) ^ *((_DWORD *)v12 + 8532)) * ((((_DWORD)v12 + 33828) ^ *((_DWORD *)v12 + 8532)) + 2);
      *((_DWORD *)v12 + 8534) += *((_DWORD *)v12 + 8535);
      *((_DWORD *)v12 - 2) = LODWORD(vec3_origin.v[0]) ^ ((((_DWORD)v12 - 8) ^ *((_DWORD *)v12 + 8534)) * ((((_DWORD)v12 - 8) ^ *((_DWORD *)v12 + 8534)) + 2));
      *((_DWORD *)v12 - 1) = LODWORD(vec3_origin.v[1]) ^ ((((_DWORD)v12 - 4) ^ *((_DWORD *)v12 + 8534)) * ((((_DWORD)v12 - 4) ^ *((_DWORD *)v12 + 8534)) + 2));
      *(_DWORD *)v12 = LODWORD(vec3_origin.v[2]) ^ (((unsigned int)v12 ^ *((_DWORD *)v12 + 8534)) * (((unsigned int)v12 ^ *((_DWORD *)v12 + 8534)) + 2));
      ++v10;
      ++v11;
      v12 += 153024;
    }
    while ( v11 < v5 );
    v3 = v22;
  }
  FreeReserveAmount = Mem_HunkUser_GetFreeReserveAmount(v3);
  Com_Printf(10, "GameAllocate: Free client hunk memory (ClActiveClientMP): %zu kb\n", FreeReserveAmount >> 10);
  LOBYTE(ClActiveClient::ms_activeClientType) = 2;
}

/*
==============
ClActiveClientMP::ClearClient
==============
*/
void ClActiveClientMP::ClearClient(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ClActiveClient *v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 333, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v1 >= LODWORD(cl_maxLocalClients) )
  {
    *(float *)&v5 = cl_maxLocalClients;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 334, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cl_maxLocalClients )", "localClientNum doesn't index cl_maxLocalClients\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 335, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
    __debugbreak();
  v2 = ClActiveClient::ms_activeClients[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 342, ASSERT_TYPE_ASSERT, "(clientBuffer)", (const char *)&queryFormat, "clientBuffer") )
    __debugbreak();
  v3 = *(_QWORD *)&v2[3].cmds[97].offHand.weaponIdx;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 345, ASSERT_TYPE_ASSERT, "(throttle)", (const char *)&queryFormat, "throttle") )
    __debugbreak();
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8i64))(v3);
  ((void (__fastcall *)(ClActiveClient *, _QWORD))v2->~ClActiveClient)(v2, 0i64);
  memset_0(v2, 0, 0x255C0ui64);
  ClActiveClient::ClActiveClient(v2, (const LocalClientNum_t)v1);
  v2->__vftable = (ClActiveClient_vtbl *)&ClActiveClientMP::`vftable';
  v2[1].cmds[15].stateFlags = NONE;
  *(_QWORD *)&v2[3].cmds[97].offHand.weaponIdx = v3;
  ClActiveClient::ms_activeClients[v1] = v2;
  ClActiveClient_Init_Obfuscation(v2);
}

/*
==============
ClActiveClientMP::ExecBinding
==============
*/
void ClActiveClientMP::ExecBinding(ClActiveClientMP *this, int kb, int key, int forceNotify)
{
  CL_InputMP_ExecBinding(this->m_localClientNum, kb, key, forceNotify);
}

/*
==============
ClActiveClientMP::FindPredictedDataForTime
==============
*/
__int64 ClActiveClientMP::FindPredictedDataForTime(ClActiveClientMP *this, const int commandTime, int *outPredictedTime, ClPredictResultMP *outPredictedData)
{
  int v8; 
  int v9; 
  char CmdNumber; 
  int i; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  unsigned __int8 v15; 
  char v17[4]; 
  __int64 v18; 

  v18 = -2i64;
  v8 = -1;
  v9 = 0x7FFFFFFF;
  CmdNumber = ClActiveClient_GetCmdNumber(this);
  for ( i = 0; i < 128; ++i )
  {
    v12 = (CmdNumber - (_BYTE)i) & 0x7F;
    v13 = commandTime - this->m_predictedCmdTime[v12];
    if ( commandTime == this->m_predictedCmdTime[v12] )
    {
      v14 = (CmdNumber - (_BYTE)i) & 0x7F;
      goto LABEL_11;
    }
    if ( v13 > 0 && v13 < v9 )
    {
      v9 = commandTime - this->m_predictedCmdTime[v12];
      v8 = (CmdNumber - (_BYTE)i) & 0x7F;
    }
  }
  if ( v8 == -1 )
  {
    memset_0(outPredictedData, 0, sizeof(ClPredictResultMP));
    *outPredictedTime = 0;
    v15 = 0;
    goto LABEL_12;
  }
  v12 = v8;
  v14 = v8;
LABEL_11:
  *(_OWORD *)&outPredictedData->commandTime = *(_OWORD *)&this->m_predictedCmdData[v14].commandTime;
  *(_OWORD *)&outPredictedData->origin.z = *(_OWORD *)&this->m_predictedCmdData[v14].origin.z;
  *(_OWORD *)&outPredictedData->movementDir = *(_OWORD *)&this->m_predictedCmdData[v14].movementDir;
  *(_OWORD *)(&outPredictedData->extrapData.offset.xy + 1) = *(_OWORD *)(&this->m_predictedCmdData[v14].extrapData.offset.xy + 1);
  *(_OWORD *)&outPredictedData->extrapData.packedBobCycle[1] = *(_OWORD *)&this->m_predictedCmdData[v14].extrapData.packedBobCycle[1];
  *(_OWORD *)&outPredictedData->vehicle.entity = *(_OWORD *)&this->m_predictedCmdData[v14].vehicle.entity;
  *(_OWORD *)&outPredictedData->vehicle.origin.y = *(_OWORD *)&this->m_predictedCmdData[v14].vehicle.origin.y;
  *(_OWORD *)&outPredictedData->vehicle.angles.z = *(_OWORD *)&this->m_predictedCmdData[v14].vehicle.angles.z;
  *(_OWORD *)outPredictedData->vehicle.angVelocity.v = *(_OWORD *)this->m_predictedCmdData[v14].vehicle.angVelocity.v;
  *(_OWORD *)&outPredictedData->vehicle.tilt.y = *(_OWORD *)&this->m_predictedCmdData[v14].vehicle.tilt.y;
  *(_QWORD *)&outPredictedData->vehicle.gunAngles.y = *(_QWORD *)&this->m_predictedCmdData[v14].vehicle.gunAngles.y;
  outPredictedData->lastStandMoveStopTime = this->m_predictedCmdData[v14].lastStandMoveStopTime;
  *outPredictedTime = this->m_predictedCmdTime[v12];
  v15 = 1;
LABEL_12:
  memset(v17, 0, sizeof(v17));
  return v15;
}

/*
==============
ClActiveClientMP::FreeClientSnapshots
==============
*/
void ClActiveClientMP::FreeClientSnapshots(void)
{
  float v0; 
  int v1; 
  ClActiveClient **v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 

  if ( BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) )
  {
    v0 = cl_maxLocalClients;
    *(_QWORD *)&cls.maxNoDeltaEntities = 0i64;
    v1 = LODWORD(cl_maxLocalClients) - 1;
    cls.noDeltaEntities = NULL;
    if ( LODWORD(cl_maxLocalClients) - 1 >= 0 )
    {
      v2 = &ClActiveClient::ms_activeClients[v1];
      while ( 1 )
      {
        if ( (unsigned int)v1 >= LODWORD(v0) )
        {
          *(float *)&v5 = v0;
          LODWORD(v4) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
            __debugbreak();
        }
        if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
          __debugbreak();
        if ( !*v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
          __debugbreak();
        v3 = (__int64)*v2--;
        --v1;
        *(_QWORD *)(v3 + 129752) = 0i64;
        *(_QWORD *)(v3 + 129760) = 0i64;
        *(_QWORD *)(v3 + 129768) = 0i64;
        *(_QWORD *)(v3 + 129776) = 0i64;
        *(_QWORD *)(v3 + 129792) = 0i64;
        *(_QWORD *)(v3 + 129800) = 0i64;
        *(_QWORD *)(v3 + 129784) = 0i64;
        *(_QWORD *)(v3 + 129720) = 0i64;
        *(_QWORD *)(v3 + 129728) = 0i64;
        *(_QWORD *)(v3 + 129740) = 0i64;
        *(_DWORD *)(v3 + 129736) = 0;
        *(_QWORD *)(v3 + 129832) = 0i64;
        *(_DWORD *)(v3 + 129816) = 0;
        *(_QWORD *)(v3 + 129808) = 0i64;
        *(_QWORD *)(v3 + 129848) = 0i64;
        *(_DWORD *)(v3 + 129840) = 0;
        if ( v1 < 0 )
          break;
        v0 = cl_maxLocalClients;
      }
    }
  }
}

/*
==============
ClActiveClientMP::FreeClients
==============
*/
void ClActiveClientMP::FreeClients(void)
{
  bool IsMP; 
  float v1; 
  int v2; 
  ClActiveClient **v3; 
  __int64 v4; 
  __int64 i; 
  ClActiveClient *v6; 
  __int64 v7; 
  __int64 v8; 

  if ( BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) )
  {
    IsMP = BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType);
    v1 = cl_maxLocalClients;
    if ( IsMP )
    {
      v2 = LODWORD(cl_maxLocalClients) - 1;
      *(_QWORD *)&cls.maxNoDeltaEntities = 0i64;
      cls.noDeltaEntities = NULL;
      if ( LODWORD(cl_maxLocalClients) - 1 >= 0 )
      {
        v3 = &ClActiveClient::ms_activeClients[v2];
        do
        {
          if ( (unsigned int)v2 >= LODWORD(v1) )
          {
            *(float *)&v8 = v1;
            LODWORD(v7) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
              __debugbreak();
          }
          if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
            __debugbreak();
          if ( !*v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
            __debugbreak();
          v4 = (__int64)*v3--;
          --v2;
          *(_QWORD *)(v4 + 129752) = 0i64;
          *(_QWORD *)(v4 + 129760) = 0i64;
          *(_QWORD *)(v4 + 129768) = 0i64;
          *(_QWORD *)(v4 + 129776) = 0i64;
          *(_QWORD *)(v4 + 129792) = 0i64;
          *(_QWORD *)(v4 + 129800) = 0i64;
          *(_QWORD *)(v4 + 129784) = 0i64;
          *(_QWORD *)(v4 + 129720) = 0i64;
          *(_QWORD *)(v4 + 129728) = 0i64;
          *(_QWORD *)(v4 + 129740) = 0i64;
          *(_DWORD *)(v4 + 129736) = 0;
          *(_QWORD *)(v4 + 129832) = 0i64;
          *(_DWORD *)(v4 + 129816) = 0;
          *(_QWORD *)(v4 + 129808) = 0i64;
          *(_QWORD *)(v4 + 129848) = 0i64;
          *(_DWORD *)(v4 + 129840) = 0;
          v1 = cl_maxLocalClients;
        }
        while ( v2 >= 0 );
      }
    }
    for ( i = LODWORD(v1) - 1; i >= 0; ClActiveClient::ms_activeClients[i--] = NULL )
    {
      v6 = ClActiveClient::ms_activeClients[i];
      (***(void (__fastcall ****)(_QWORD, _QWORD))&v6[3].cmds[97].offHand.weaponIdx)(*(_QWORD *)&v6[3].cmds[97].offHand.weaponIdx, 0i64);
      ((void (__fastcall *)(ClActiveClient *, _QWORD))v6->~ClActiveClient)(v6, 0i64);
      DebugWipe(v6, 0x255C0ui64);
    }
    LOBYTE(ClActiveClient::ms_activeClientType) = 0;
  }
  else
  {
    LOBYTE(ClActiveClient::ms_activeClientType) = 0;
  }
}

/*
==============
ClActiveClientMP::FreeSharedSnapshotMemory
==============
*/
void ClActiveClientMP::FreeSharedSnapshotMemory(void)
{
  *(_QWORD *)&cls.maxNoDeltaEntities = 0i64;
  cls.noDeltaEntities = NULL;
}

/*
==============
ClActiveClientMP::FreeSnapshotMemory
==============
*/
void ClActiveClientMP::FreeSnapshotMemory(ClActiveClientMP *this)
{
  this->snapshots = NULL;
  this->parseEntities = NULL;
  this->parseClients = NULL;
  this->parseAgents = NULL;
  this->parseWeaponMapEntries = NULL;
  this->parseNoDeltaWeaponMapEntries = NULL;
  this->parseOmnvars = NULL;
  *(_QWORD *)&this->parseSnapshotCount = 0i64;
  *(_QWORD *)&this->parseClientsCount = 0i64;
  *(_QWORD *)&this->parseWeaponMapEntriesCount = 0i64;
  this->parseOmnvarsCount = 0;
  this->parseUmbraGateStates = NULL;
  this->parseUmbraGateStatesCount = 0;
  this->parseNoDeltaPlayerState = NULL;
  this->parseScriptedCameras = NULL;
  this->parseScriptedCameraCount = 0;
}

/*
==============
ClActiveClientMP::GetCommandThrottleScale
==============
*/
double ClActiveClientMP::GetCommandThrottleScale(ClActiveClientMP *this)
{
  int UserCommandConstantMsec; 
  const dvar_t *v2; 
  __int128 v10; 

  UserCommandConstantMsec = Com_GetUserCommandConstantMsec();
  if ( 1000i64 * UserCommandConstantMsec <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 488, ASSERT_TYPE_ASSERT, "( commandTimeUsec ) > ( 0ll )", "%s > %s\n\t%lli, %lli", "commandTimeUsec", "0ll", 1000i64 * UserCommandConstantMsec, 0i64) )
    __debugbreak();
  v2 = DVARFLT_com_userCmdMaxBufferScale;
  if ( !DVARFLT_com_userCmdMaxBufferScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxBufferScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  _XMM6 = COERCE_UNSIGNED_INT64(v2->current.value);
  __asm { vxorpd  xmm7, xmm6, cs:__xmm@80000000000000008000000000000000 }
  _XMM1 = 0i64;
  _XMM0 = 0i64;
  __asm
  {
    vcvtsi2sd xmm1, xmm1, rbx
    vcvtsi2sd xmm0, xmm0, rsi
  }
  *((_QWORD *)&v10 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v10 = *(double *)&_XMM1 / *(double *)&_XMM0;
  _XMM8 = v10;
  if ( *(double *)&_XMM7 > v2->current.value && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 773, ASSERT_TYPE_SANITY, "( min <= max )", (const char *)&queryFormat, "min <= max") )
    __debugbreak();
  __asm
  {
    vminsd  xmm0, xmm8, xmm6
    vmaxsd  xmm6, xmm0, xmm7
  }
  if ( (*(double *)&_XMM6 <= -1.0 || *(double *)&_XMM6 >= 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 497, ASSERT_TYPE_ASSERT, "( ( (cmdThrottleClamp > -1.0) && (cmdThrottleClamp < 1.0) ) )", "( cmdThrottleClamp ) = %lg", *(long double *)&_XMM6) )
    __debugbreak();
  return *(double *)&_XMM6 + 1.0;
}

/*
==============
ClActiveClientMP::GetFreeMoveType
==============
*/
__int64 ClActiveClientMP::GetFreeMoveType(ClActiveClientMP *this)
{
  return 0i64;
}

/*
==============
ClActiveClientMP::GetHudMsgCharHeight
==============
*/
__int64 ClActiveClientMP::GetHudMsgCharHeight(ClActiveClientMP *this)
{
  return 16i64;
}

/*
==============
ClActiveClientMP::GetMsgWindowDriftTime
==============
*/
__int64 ClActiveClientMP::GetMsgWindowDriftTime(ClActiveClientMP *this)
{
  return 1000i64;
}

/*
==============
ClActiveClientMP::GetPredictedData
==============
*/
char ClActiveClientMP::GetPredictedData(ClActiveClientMP *this, const int commandNum, CmdPredict *const outCmdPredict)
{
  __int64 v6; 
  __int64 v7; 
  int entity; 
  int v9; 
  char result; 

  if ( !outCmdPredict && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 572, ASSERT_TYPE_ASSERT, "(outCmdPredict)", (const char *)&queryFormat, "outCmdPredict") )
    __debugbreak();
  v6 = commandNum & 0x7F;
  if ( this->m_predictedCmdNum[v6] == commandNum )
  {
    v7 = v6;
    outCmdPredict->origin.v[0] = this->m_predictedCmdData[v6].origin.v[0];
    outCmdPredict->origin.v[1] = this->m_predictedCmdData[v6].origin.v[1];
    outCmdPredict->origin.v[2] = this->m_predictedCmdData[v6].origin.v[2];
    *(_OWORD *)outCmdPredict->extrapData.offset.v = *(_OWORD *)this->m_predictedCmdData[v6].extrapData.offset.v;
    *(double *)&outCmdPredict->extrapData.inputTime = *(double *)&this->m_predictedCmdData[v6].extrapData.inputTime;
    outCmdPredict->extrapData.packedBobCycle[1] = this->m_predictedCmdData[v6].extrapData.packedBobCycle[1];
    entity = this->m_predictedCmdData[v6].vehicle.entity;
    v9 = entity && entity != 2047;
    outCmdPredict->vehActive = v9;
    outCmdPredict->vehTarget = this->m_predictedCmdData[v7].vehicle.targetEntity;
    outCmdPredict->vehOrigin.v[0] = this->m_predictedCmdData[v7].vehicle.origin.v[0];
    outCmdPredict->vehOrigin.v[1] = this->m_predictedCmdData[v7].vehicle.origin.v[1];
    outCmdPredict->vehOrigin.v[2] = this->m_predictedCmdData[v7].vehicle.origin.v[2];
    return 1;
  }
  else
  {
    result = 0;
    *(_QWORD *)outCmdPredict->origin.v = 0i64;
    *(_QWORD *)&outCmdPredict->origin.z = 0i64;
    *(_QWORD *)&outCmdPredict->extrapData.offset.xy.y = 0i64;
    *(_QWORD *)&outCmdPredict->extrapData.time = 0i64;
    *(_QWORD *)outCmdPredict->extrapData.packedBobCycle = 0i64;
    *(_QWORD *)&outCmdPredict->vehActive = 0i64;
    *(_QWORD *)outCmdPredict->vehOrigin.v = 0i64;
    outCmdPredict->vehOrigin.v[2] = 0.0;
  }
  return result;
}

/*
==============
ClActiveClientMP::GetServerTime
==============
*/
__int64 ClActiveClientMP::GetServerTime(ClActiveClientMP *this)
{
  return (unsigned int)this->serverTime;
}

/*
==============
ClActiveClientMP::IsSnapshotDataAllocated
==============
*/
bool ClActiveClientMP::IsSnapshotDataAllocated(ClActiveClientMP *this)
{
  return this->snapshots != NULL;
}

/*
==============
ClActiveClientMP::IsValidRemoteInputState
==============
*/
bool ClActiveClientMP::IsValidRemoteInputState(ClActiveClientMP *this)
{
  __int64 m_localClientNum; 
  cg_t **v2; 
  __int64 p_predictedPlayerState; 
  int v4; 
  bool result; 
  __int64 v6; 

  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", m_localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  v2 = &cg_t::ms_cgArray[m_localClientNum];
  if ( !*v2 )
  {
    LODWORD(v6) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v6) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v6) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v6) )
      __debugbreak();
  }
  p_predictedPlayerState = (__int64)&(*v2)->predictedPlayerState;
  if ( *v2 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 447, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = 1;
  if ( !g_cpuProfiler.m_enabled || !R_IsCPUTimelineProfilerViewEnabled() )
  {
    v4 = *(_DWORD *)(p_predictedPlayerState + 12);
    if ( v4 == 5 || (unsigned int)(v4 - 2) > 1 )
      return 0;
  }
  return result;
}

/*
==============
ClActiveClientMP::Pause
==============
*/
void ClActiveClientMP::Pause(ClActiveClientMP *this)
{
  CL_MainMP_Pause(this->m_localClientNum, 0, (CLPauseReason)32);
  LUI_CoD_Pause(this->m_localClientNum);
}

/*
==============
ClActiveClientMP::PrintAdjustTime
==============
*/
void ClActiveClientMP::PrintAdjustTime(ClActiveClientMP *this)
{
  unsigned int v1; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  int integer; 
  const PartyData *PartyData; 
  int IsServerDedicated; 
  int m_totalDesiredOffsetTime; 
  int m_totalServerOffsetTime; 
  int m_totalExtrapolationTime; 
  int m_totalExtrapolationCount; 
  int m_totalSnapshotCount; 
  int ControllerFromClient; 
  unsigned __int64 UserId; 
  bool v15; 
  int value; 
  DLogContext context; 
  char buffer[4096]; 

  v1 = cls.realtime - this->m_firstSnapTime;
  value = v1;
  Com_Printf(14, "*****         Adjust Time Results         *****\n");
  Com_Printf(14, "***** Total Game Time:%19d *****\n", v1);
  Com_Printf(14, "***** Total Extrapolation Count:%9d *****\n", (unsigned int)this->m_totalExtrapolationCount);
  Com_Printf(14, "***** Total Extrapolation Time:%10d *****\n", (unsigned int)this->m_totalExtrapolationTime);
  Com_Printf(14, "***** Total Snapshot Count:%14d *****\n", (unsigned int)this->m_totalSnapshotCount);
  Com_Printf(14, "***** Total Sever Offset Time:%11d *****\n", (unsigned int)this->m_totalServerOffsetTime);
  Com_Printf(14, "***** Total Desired Offset Time:%9d *****\n", (unsigned int)this->m_totalDesiredOffsetTime);
  v3 = DVARBOOL_cl_adjust_time_print;
  if ( !DVARBOOL_cl_adjust_time_print && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_adjust_time_print") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && this->m_firstSnapTime )
  {
    v4 = DVARINT_cl_adjust_time_fixed_ideal_time;
    if ( !DVARINT_cl_adjust_time_fixed_ideal_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_adjust_time_fixed_ideal_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    integer = v4->current.integer;
    PartyData = Lobby_GetPartyData();
    IsServerDedicated = Party_IsServerDedicated(PartyData);
    m_totalDesiredOffsetTime = this->m_totalDesiredOffsetTime;
    m_totalServerOffsetTime = this->m_totalServerOffsetTime;
    m_totalExtrapolationTime = this->m_totalExtrapolationTime;
    m_totalExtrapolationCount = this->m_totalExtrapolationCount;
    m_totalSnapshotCount = this->m_totalSnapshotCount;
    ControllerFromClient = CL_Mgr_GetControllerFromClient(this->m_localClientNum);
    UserId = DLog_GetUserId(ControllerFromClient);
    if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
    {
      v15 = DLog_BeginEvent(&context, "cl_adjust_time");
      context.autoEndEvent = 1;
      if ( v15 && DLog_String(&context, "exe", "1-game_test.exe", 0) && DLog_Int32(&context, "dedi", IsServerDedicated) && DLog_Int32(&context, "networkOffset", integer) && DLog_Int32(&context, "gameTime", value) && DLog_Int32(&context, "snapCount", m_totalSnapshotCount) && DLog_Int32(&context, "extrapCount", m_totalExtrapolationCount) && DLog_Int32(&context, "extrapTime", m_totalExtrapolationTime) && DLog_Int32(&context, "actualOffset", m_totalServerOffsetTime) && DLog_Int32(&context, "desiredOffset", m_totalDesiredOffsetTime) )
        DLog_RecordContext(&context);
    }
  }
}

/*
==============
ClActiveClientMP::ResetParseInfoMyChanges
==============
*/
void ClActiveClientMP::ResetParseInfoMyChanges(ClActiveClientMP *this)
{
  int v1; 
  __int64 v2; 

  v1 = 0;
  if ( this->parseSnapshotCount > 0 )
  {
    v2 = 0i64;
    do
    {
      ++v2;
      ++v1;
      this->snapshots[v2 - 1].state = BYTE_VALUE;
    }
    while ( v1 < this->parseSnapshotCount );
  }
}

/*
==============
ClActiveClientMP::SavePredictedData
==============
*/
void ClActiveClientMP::SavePredictedData(ClActiveClientMP *this)
{
  int CmdNumber; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  usercmd_s *v6; 
  ClPredictResultMP *v7; 
  int v8; 

  CmdNumber = ClActiveClient_GetCmdNumber(this);
  v3 = CmdNumber;
  v8 = CmdNumber;
  v4 = CmdNumber & 0x7F;
  if ( this->m_predictedCmdNum[v4] != CmdNumber )
  {
    v5 = CmdNumber & 0x7F;
    v6 = &this->cmds[v5];
    if ( (ClActiveClientMP *)((char *)this + v5 * 264) == (ClActiveClientMP *)-472i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd", -2i64) )
      __debugbreak();
    this->m_predictedCmdTime[v4] = v6->commandTime;
    v7 = &this->m_predictedCmdData[v4];
    *(_OWORD *)&v7->commandTime = *(_OWORD *)&this->cgamePredictedData.commandTime;
    *(_OWORD *)&v7->origin.z = *(_OWORD *)&this->cgamePredictedData.origin.z;
    *(_OWORD *)&v7->movementDir = *(_OWORD *)&this->cgamePredictedData.movementDir;
    *(_OWORD *)(&v7->extrapData.offset.xy + 1) = *(_OWORD *)(&this->cgamePredictedData.extrapData.offset.xy + 1);
    *(_OWORD *)&v7->extrapData.packedBobCycle[1] = *(_OWORD *)&this->cgamePredictedData.extrapData.packedBobCycle[1];
    *(_OWORD *)&v7->vehicle.entity = *(_OWORD *)&this->cgamePredictedData.vehicle.entity;
    *(_OWORD *)&v7->vehicle.origin.y = *(_OWORD *)&this->cgamePredictedData.vehicle.origin.y;
    *(_OWORD *)&v7->vehicle.angles.z = *(_OWORD *)&this->cgamePredictedData.vehicle.angles.z;
    *(_OWORD *)v7->vehicle.angVelocity.v = *(_OWORD *)this->cgamePredictedData.vehicle.angVelocity.v;
    *(_OWORD *)&v7->vehicle.tilt.y = *(_OWORD *)&this->cgamePredictedData.vehicle.tilt.y;
    *(_QWORD *)&v7->vehicle.gunAngles.y = *(_QWORD *)&this->cgamePredictedData.vehicle.gunAngles.y;
    v7->lastStandMoveStopTime = this->cgamePredictedData.lastStandMoveStopTime;
    this->m_predictedCmdNum[v4] = v3;
  }
  memset(&v8, 0, sizeof(v8));
}

/*
==============
ClActiveClientMP::SendUserInfo
==============
*/
void ClActiveClientMP::SendUserInfo(ClActiveClientMP *this)
{
  CL_MainMP_SendUserInfoCmd(this->m_localClientNum);
}

/*
==============
ClActiveClientMP::SetPredictedData
==============
*/
void ClActiveClientMP::SetPredictedData(ClActiveClientMP *this, const int predictedIndex, const int commandTime, const ClPredictResultMP *predictedData)
{
  __int64 v4; 
  ClPredictResultMP *v8; 

  v4 = predictedIndex;
  if ( (unsigned int)predictedIndex >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 641, ASSERT_TYPE_ASSERT, "(unsigned)( predictedIndex ) < (unsigned)( CMD_BACKUP )", "predictedIndex doesn't index CMD_BACKUP\n\t%i not in [0, %i)", predictedIndex, 128) )
    __debugbreak();
  this->m_predictedCmdTime[v4] = commandTime;
  this->m_predictedCmdNum[v4] = 0;
  v8 = &this->m_predictedCmdData[v4];
  *(_OWORD *)&v8->commandTime = *(_OWORD *)&predictedData->commandTime;
  *(_OWORD *)&v8->origin.z = *(_OWORD *)&predictedData->origin.z;
  *(_OWORD *)&v8->movementDir = *(_OWORD *)&predictedData->movementDir;
  *(_OWORD *)(&v8->extrapData.offset.xy + 1) = *(_OWORD *)(&predictedData->extrapData.offset.xy + 1);
  *(_OWORD *)&v8->extrapData.packedBobCycle[1] = *(_OWORD *)&predictedData->extrapData.packedBobCycle[1];
  *(_OWORD *)&v8->vehicle.entity = *(_OWORD *)&predictedData->vehicle.entity;
  *(_OWORD *)&v8->vehicle.origin.y = *(_OWORD *)&predictedData->vehicle.origin.y;
  *(_OWORD *)&v8->vehicle.angles.z = *(_OWORD *)&predictedData->vehicle.angles.z;
  *(_OWORD *)v8->vehicle.angVelocity.v = *(_OWORD *)predictedData->vehicle.angVelocity.v;
  *(_OWORD *)&v8->vehicle.tilt.y = *(_OWORD *)&predictedData->vehicle.tilt.y;
  *(_QWORD *)&v8->vehicle.gunAngles.y = *(_QWORD *)&predictedData->vehicle.gunAngles.y;
  v8->lastStandMoveStopTime = predictedData->lastStandMoveStopTime;
}

/*
==============
ClActiveClientMP::ShouldDisplayMsgWindow
==============
*/
bool ClActiveClientMP::ShouldDisplayMsgWindow(ClActiveClientMP *this)
{
  bool result; 

  if ( this->snap.ps.pm_type == 6 )
    return 1;
  result = CL_MainMP_ShouldDisplayHud(this->m_localClientNum);
  if ( result )
    return 1;
  return result;
}

/*
==============
ClActiveClientMP::SpecNextKeyboard
==============
*/
void ClActiveClientMP::SpecNextKeyboard(ClActiveClientMP *this, int key)
{
  CL_InputMP_SpecNextKeyboard((const LocalClientNum_t)this->m_localClientNum, key);
}

/*
==============
ClActiveClientMP::SpecPrevKeyboard
==============
*/
void ClActiveClientMP::SpecPrevKeyboard(ClActiveClientMP *this, int key)
{
  CL_InputMP_SpecPrevKeyboard((const LocalClientNum_t)this->m_localClientNum, key);
}

/*
==============
ClActiveClientMP::ToggleSpecKeyboard
==============
*/
void ClActiveClientMP::ToggleSpecKeyboard(ClActiveClientMP *this, int key)
{
  CL_InputMP_ToggleSpecKeyboard((const LocalClientNum_t)this->m_localClientNum, key);
}

/*
==============
ClActiveClientMP::TranslateButton
==============
*/
bool ClActiveClientMP::TranslateButton(ClActiveClientMP *this, int button, int cmd)
{
  return CG_TranslateGamepadButton(this->m_localClientNum, button, cmd);
}

/*
==============
ClActiveClientMP::UpdateCommandTime
==============
*/
void ClActiveClientMP::UpdateCommandTime(ClActiveClientMP *this, const unsigned __int64 usec)
{
  int UserCommandConstantMsec; 
  const dvar_t *v5; 
  __int128 v13; 
  double v16; 
  double v17; 
  __int128 v21; 
  __int128 v23; 

  UserCommandConstantMsec = Com_GetUserCommandConstantMsec();
  if ( 1000i64 * UserCommandConstantMsec <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 488, ASSERT_TYPE_ASSERT, "( commandTimeUsec ) > ( 0ll )", "%s > %s\n\t%lli, %lli", "commandTimeUsec", "0ll", 1000i64 * UserCommandConstantMsec, 0i64) )
    __debugbreak();
  v5 = DVARFLT_com_userCmdMaxBufferScale;
  if ( !DVARFLT_com_userCmdMaxBufferScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxBufferScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  _XMM6 = COERCE_UNSIGNED_INT64(v5->current.value);
  __asm { vxorpd  xmm7, xmm6, cs:__xmm@80000000000000008000000000000000 }
  _XMM1 = 0i64;
  _XMM0 = 0i64;
  __asm
  {
    vcvtsi2sd xmm1, xmm1, rsi
    vcvtsi2sd xmm0, xmm0, r14
  }
  *((_QWORD *)&v13 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v13 = *(double *)&_XMM1 / *(double *)&_XMM0;
  _XMM8 = v13;
  if ( *(double *)&_XMM7 > v5->current.value && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 773, ASSERT_TYPE_SANITY, "( min <= max )", (const char *)&queryFormat, "min <= max") )
    __debugbreak();
  __asm
  {
    vminsd  xmm0, xmm8, xmm6
    vmaxsd  xmm6, xmm0, xmm7
  }
  if ( (*(double *)&_XMM6 <= -1.0 || *(double *)&_XMM6 >= 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 497, ASSERT_TYPE_ASSERT, "( ( (cmdThrottleClamp > -1.0) && (cmdThrottleClamp < 1.0) ) )", "( cmdThrottleClamp ) = %lg", *(long double *)&_XMM6) )
    __debugbreak();
  v17 = *(double *)&_XMM6 + 1.0;
  v16 = v17;
  __asm { vxorpd  xmm0, xmm0, xmm0 }
  if ( v17 <= *(double *)&_XMM0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.cpp", 510, ASSERT_TYPE_ASSERT, "( ( cmdThrottleScale > 0.0 ) )", "( cmdThrottleScale ) = %lg", v17) )
    __debugbreak();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rdi }
  if ( (usec & 0x8000000000000000ui64) != 0i64 )
  {
    *((_QWORD *)&v21 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v21 = *(double *)&_XMM0 + 1.844674407370955e19;
    _XMM0 = v21;
  }
  *((_QWORD *)&v23 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v23 = *(double *)&_XMM0 * v16;
  _XMM0 = v23;
  __asm { vcvttsd2si rax, xmm0 }
  this->cmdAccumTimeUsec += _RAX;
  this->svCmdCurrentErrorUsec += _RAX - usec;
}

