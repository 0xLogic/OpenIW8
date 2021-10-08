/*
==============
CL_CGameSP_RegisterSoundAliasCacheEntry
==============
*/

void __fastcall CL_CGameSP_RegisterSoundAliasCacheEntry(int soundString)
{
  ?CL_CGameSP_RegisterSoundAliasCacheEntry@@YAXH@Z(soundString);
}

/*
==============
CL_CGameSP_CleanupBeforeServerShutdown
==============
*/

void __fastcall CL_CGameSP_CleanupBeforeServerShutdown(bool loadScripts)
{
  ?CL_CGameSP_CleanupBeforeServerShutdown@@YAX_N@Z(loadScripts);
}

/*
==============
CL_CGameSP_Restart_Init
==============
*/

void __fastcall CL_CGameSP_Restart_Init(bool loadScripts, bool savegame)
{
  ?CL_CGameSP_Restart_Init@@YAX_N0@Z(loadScripts, savegame);
}

/*
==============
CL_CGameSP_SetUserCmdAimValues
==============
*/

void __fastcall CL_CGameSP_SetUserCmdAimValues(LocalClientNum_t localClientNum, float gunPitch, float gunYaw, float gunXOfs, float gunYOfs, float gunZOfs)
{
  ?CL_CGameSP_SetUserCmdAimValues@@YAXW4LocalClientNum_t@@MMMMM@Z(localClientNum, gunPitch, gunYaw, gunXOfs, gunYOfs, gunZOfs);
}

/*
==============
CL_CGameSP_Restart_Shutdown
==============
*/

void __fastcall CL_CGameSP_Restart_Shutdown(bool loadScripts)
{
  ?CL_CGameSP_Restart_Shutdown@@YAX_N@Z(loadScripts);
}

/*
==============
CL_CGameSP_CreateNextSnap
==============
*/

void CL_CGameSP_CreateNextSnap(void)
{
  ?CL_CGameSP_CreateNextSnap@@YAXXZ();
}

/*
==============
CL_ClearSubtitles
==============
*/

void CL_ClearSubtitles(void)
{
  ?CL_ClearSubtitles@@YAXXZ();
}

/*
==============
CL_CGameSP_Init
==============
*/

void __fastcall CL_CGameSP_Init(const char *mapname, const bool savegame)
{
  ?CL_CGameSP_Init@@YAXPEBD_N@Z(mapname, savegame);
}

/*
==============
CL_CGameSP_FirstSnapshot
==============
*/

void CL_CGameSP_FirstSnapshot(void)
{
  ?CL_CGameSP_FirstSnapshot@@YAXXZ();
}

/*
==============
CL_CGameSP_Shutdown
==============
*/

void __fastcall CL_CGameSP_Shutdown(LocalClientNum_t localClientNum)
{
  ?CL_CGameSP_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_CGameSP_CheckServerCommands
==============
*/

void CL_CGameSP_CheckServerCommands(void)
{
  ?CL_CGameSP_CheckServerCommands@@YAXXZ();
}

/*
==============
CL_CGameSP_ArchiveClientState
==============
*/

void __fastcall CL_CGameSP_ArchiveClientState(MemoryFile *memFile)
{
  ?CL_CGameSP_ArchiveClientState@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
CL_CGameSP_GetSnapshotCommon
==============
*/

void __fastcall CL_CGameSP_GetSnapshotCommon(CgSnapshotSP *snapshot)
{
  ?CL_CGameSP_GetSnapshotCommon@@YAXPEAUCgSnapshotSP@@@Z(snapshot);
}

/*
==============
CL_CGameSP_GetSoundAliasListByName
==============
*/

SndAliasList *__fastcall CL_CGameSP_GetSoundAliasListByName(int soundString)
{
  return ?CL_CGameSP_GetSoundAliasListByName@@YAPEAUSndAliasList@@H@Z(soundString);
}

/*
==============
CL_CGameSP_ClearSoundAliasCache
==============
*/

void CL_CGameSP_ClearSoundAliasCache(void)
{
  ?CL_CGameSP_ClearSoundAliasCache@@YAXXZ();
}

/*
==============
CL_CGameSP_SetActive
==============
*/

void CL_CGameSP_SetActive(void)
{
  ?CL_CGameSP_SetActive@@YAXXZ();
}

/*
==============
CL_CGameSP_GetSnapshot
==============
*/

int __fastcall CL_CGameSP_GetSnapshot(LocalClientNum_t localClientNum, playerState_s *ps)
{
  return ?CL_CGameSP_GetSnapshot@@YAHW4LocalClientNum_t@@PEAUplayerState_s@@@Z(localClientNum, ps);
}

/*
==============
CL_CGameSP_Init_Internal
==============
*/

void __fastcall CL_CGameSP_Init_Internal(const char *mapname, const bool savegame)
{
  ?CL_CGameSP_Init_Internal@@YAXPEBD_N@Z(mapname, savegame);
}

/*
==============
CL_CGameSP_GetServerCommands
==============
*/

ServerCommandsSP *__fastcall CL_CGameSP_GetServerCommands(LocalClientNum_t localClientNum)
{
  return ?CL_CGameSP_GetServerCommands@@YAPEAUServerCommandsSP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_CGameSP_StartLoading
==============
*/

void __fastcall CL_CGameSP_StartLoading(const char *mapname, const bool playMovie, const int fullRenderStartup, const bool savegame, const int serverFrameDuration)
{
  ?CL_CGameSP_StartLoading@@YAXPEBD_NH1H@Z(mapname, playMovie, fullRenderStartup, savegame, serverFrameDuration);
}

/*
==============
CL_CGameSP_LoadWorld
==============
*/

void __fastcall CL_CGameSP_LoadWorld(const char *name)
{
  ?CL_CGameSP_LoadWorld@@YAXPEBD@Z(name);
}

/*
==============
CL_CGameSP_ArchiveClientState
==============
*/
void CL_CGameSP_ArchiveClientState(MemoryFile *memFile)
{
  __int64 OnlyLocalClientNum; 
  CgClientSideEffectsSystemSP *v3; 
  bool IsWriting; 
  unsigned __int64 UsedSize; 
  unsigned __int64 v6; 
  const dvar_t *v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  ClActiveClientSP *ClientSP; 
  cg_t *LocalClientGlobals; 
  char usingAds; 
  char v17; 
  const dvar_t *v18; 
  ClActiveClientSP *v19; 
  __int64 v20; 
  __int64 v21; 
  char p[8]; 
  __int64 v23; 
  char outHexString[136]; 

  v23 = -2i64;
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  Sys_ProfBeginNamedEvent(0xFFFFA500, "CL_CGameSP_ArchiveClientState");
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 321, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", OnlyLocalClientNum, 1, (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)OnlyLocalClientNum >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(v21) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(v20) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  if ( !CgClientSideEffectsSystem::ms_cseSystemArray[OnlyLocalClientNum] )
  {
    LODWORD(v21) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 323, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", v21) )
      __debugbreak();
  }
  v3 = (CgClientSideEffectsSystemSP *)CgClientSideEffectsSystem::ms_cseSystemArray[OnlyLocalClientNum];
  IsWriting = MemFile_IsWriting(memFile);
  if ( IsWriting )
  {
    MemFile_StartSegment(memFile, 7, StreamModeSource_SPArchiveClientSTate);
    UsedSize = MemFile_GetUsedSize(memFile);
    ProfMem_Begin("sound", UsedSize);
    SND_Save(memFile);
    v6 = MemFile_GetUsedSize(memFile);
    ProfMem_End(v6);
    MemFile_StartSegment(memFile, 8, StreamModeSource_SPArchiveClientSTate);
    v7 = DCONST_DVARBOOL_developer_createfx;
    if ( !DCONST_DVARBOOL_developer_createfx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_createfx") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( !v7->current.enabled )
    {
      v8 = MemFile_GetUsedSize(memFile);
      ProfMem_Begin("FX", v8);
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Client Archive FX_Save");
      FX_Save(OnlyLocalClientNum, memFile);
      Sys_ProfEndNamedEvent();
      v9 = MemFile_GetUsedSize(memFile);
      ProfMem_End(v9);
    }
    v10 = MemFile_GetUsedSize(memFile);
    ProfMem_Begin("OcclusionQuery", v10);
    RB_Query_Save(memFile);
    v11 = MemFile_GetUsedSize(memFile);
    ProfMem_End(v11);
    v12 = MemFile_GetUsedSize(memFile);
    ProfMem_Begin("Glass", v12);
    Glass_Save(memFile);
    v13 = MemFile_GetUsedSize(memFile);
    ProfMem_End(v13);
    if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 602, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    if ( !MemFile_IsWriting(memFile) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 603, ASSERT_TYPE_ASSERT, "(MemFile_IsWriting( memFile ))", (const char *)&queryFormat, "MemFile_IsWriting( memFile )") )
      __debugbreak();
    ClientSP = ClActiveClientSP::GetClientSP((const LocalClientNum_t)OnlyLocalClientNum);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)OnlyLocalClientNum);
    BG_ConvertWeaponToHexString(&LocalClientGlobals->weaponSelect, outHexString, 121);
    Com_Printf(17, "CL_CGameSP_SaveSettings: Writing selected weapon %s.\n", outHexString);
    CL_CGameSP_WriteWeapon(memFile, &LocalClientGlobals->weaponSelect);
    CL_CGameSP_WriteWeapon(memFile, &LocalClientGlobals->equippedOffHand);
    usingAds = ClientSP->usingAds | 2;
    if ( !LocalClientGlobals->weaponSelectInAlt )
      usingAds = ClientSP->usingAds;
    v17 = usingAds | 4;
    if ( !LocalClientGlobals->equipSelectInAlt )
      v17 = usingAds;
    p[0] = v17;
    MemFile_WriteData(memFile, 1ui64, p);
    CgClientSideEffectsSystemSP::Save(v3, memFile, (const LocalClientNum_t)OnlyLocalClientNum);
    Con_SaveChannels(memFile);
  }
  else
  {
    MemFile_MoveToSegment(memFile, 7, StreamModeSource_SPArchiveClientSTate);
    SND_Restore(memFile);
    MemFile_MoveToSegment(memFile, 8, StreamModeSource_SPArchiveClientSTate);
    v18 = DCONST_DVARBOOL_developer_createfx;
    if ( !DCONST_DVARBOOL_developer_createfx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_createfx") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( !v18->current.enabled )
      FX_Restore(OnlyLocalClientNum, memFile);
    RB_Query_Restore(memFile);
    Glass_Restore(memFile);
    CL_CGameSP_RestoreSettings(memFile, (LocalClientNum_t)OnlyLocalClientNum);
    CgClientSideEffectsSystemSP::Restore(v3, memFile, (const LocalClientNum_t)OnlyLocalClientNum);
    Con_RestoreChannels(memFile);
  }
  CL_ArchiveMessages(memFile);
  v19 = ClActiveClientSP::GetClientSP((const LocalClientNum_t)OnlyLocalClientNum);
  MemFile_ArchiveData(memFile, 4, &v19->stance);
  MemFile_ArchiveData(memFile, 8, &v19->cmdAccumTimeUsec);
  MemFile_ArchiveData(memFile, 8, &v19->cmdTimeUsec);
  MemFile_ArchiveData(memFile, 4, &v19->cmdInputAccumTimeMs);
  MemFile_ArchiveData(memFile, 8, &v19->turnRateCapInfos[4]);
  CG_DrawSP_ArchiveState((LocalClientNum_t)OnlyLocalClientNum, memFile);
  AimAssist_ArchiveState((LocalClientNum_t)OnlyLocalClientNum, memFile);
  CG_PIP_ArchiveState((LocalClientNum_t)OnlyLocalClientNum, memFile);
  CG_Gesture_ArchiveState((LocalClientNum_t)OnlyLocalClientNum, memFile, IsWriting);
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    LODWORD(v21) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v21) )
      __debugbreak();
  }
  if ( (unsigned int)OnlyLocalClientNum >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v21) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v20) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[OnlyLocalClientNum] )
  {
    LODWORD(v21) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v21) )
      __debugbreak();
  }
  CgVehicleSystem::ArchiveVehicles(CgVehicleSystem::ms_vehicleSystemArray[OnlyLocalClientNum], memFile);
  Sys_ProfEndNamedEvent();
}

/*
==============
CL_CGameSP_CheckServerCommands
==============
*/
void CL_CGameSP_CheckServerCommands(void)
{
  LocalClientNum_t OnlyLocalClientNum; 
  ClConnectionDataSP *ClientConnectionData; 
  __int64 v2; 
  int rover; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  ClientConnectionData = ClConnectionSP::GetClientConnectionData(OnlyLocalClientNum);
  if ( ClientConnectionData->serverCommands.header.rover )
  {
    rover = ClientConnectionData->serverCommands.header.rover;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 285, ASSERT_TYPE_ASSERT, "( ( !clcData->serverCommands.header.rover ) )", "( clcData->serverCommands.header.rover ) = %i", rover) )
      __debugbreak();
  }
  if ( ClientConnectionData->serverCommands.header.sent )
  {
    LODWORD(v2) = ClientConnectionData->serverCommands.header.sent;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 286, ASSERT_TYPE_ASSERT, "( ( !clcData->serverCommands.header.sent ) )", "( clcData->serverCommands.header.sent ) = %i", v2) )
      __debugbreak();
  }
  if ( ClientConnectionData->serverCommands.header.sequence )
  {
    LODWORD(v2) = ClientConnectionData->serverCommands.header.sequence;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 287, ASSERT_TYPE_ASSERT, "( ( !clcData->serverCommands.header.sequence ) )", "( clcData->serverCommands.header.sequence ) = %i", v2) )
      __debugbreak();
  }
}

/*
==============
CL_CGameSP_CleanupBeforeServerShutdown
==============
*/
void CL_CGameSP_CleanupBeforeServerShutdown(bool loadScripts)
{
  LocalClientNum_t OnlyLocalClientNum; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  CG_Rumble_StopAll(OnlyLocalClientNum);
}

/*
==============
CL_CGameSP_ClearSoundAliasCache
==============
*/
void CL_CGameSP_ClearSoundAliasCache(void)
{
  memset_0(g_soundAliasListCache, 0, sizeof(g_soundAliasListCache));
}

/*
==============
CL_CGameSP_CreateNextSnap
==============
*/

void __fastcall CL_CGameSP_CreateNextSnap(double _XMM0_8)
{
  LocalClientNum_t OnlyLocalClientNum; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  SV_GetPartialFrametime();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3a83126f; dtime
  }
  CG_SnapshotSP_CreateNextSnap(OnlyLocalClientNum, *(float *)&_XMM1, 1);
}

/*
==============
CL_CGameSP_FirstSnapshot
==============
*/
void CL_CGameSP_FirstSnapshot(void)
{
  LocalClientNum_t OnlyLocalClientNum; 
  __int64 v1; 
  _QWORD *v2; 
  __int64 v3; 
  const void *v4; 
  __int64 v5; 
  _QWORD *v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  v1 = OnlyLocalClientNum;
  Con_ServerTimeJumped(OnlyLocalClientNum, com_time);
  if ( (unsigned int)v1 >= 2 )
  {
    v10 = 2;
    v8 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( !clientUIActives[v1].isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 538, ASSERT_TYPE_ASSERT, "(clUI->isRunning)", (const char *)&queryFormat, "clUI->isRunning") )
    __debugbreak();
  v2 = NtCurrentTeb()->Reserved1[11];
  v3 = tls_index;
  cls.animFrametime = 0;
  v4 = *(const void **)(v2[tls_index] + 272i64);
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 84, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "( ms_activeBgs ) = %p", v4) )
    __debugbreak();
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 85, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the client game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v1 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v9 = CgStatic::ms_allocatedCount;
    LODWORD(v7) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 86, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 87, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to set the active bgs to the client game static but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v3) + 272i64) = CgStatic::ms_cgameStaticsArray[v1];
  CG_SnapshotSP_FirstSnapshot((LocalClientNum_t)v1);
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 96, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the client game statics but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v1 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v9 = CgStatic::ms_allocatedCount;
    LODWORD(v7) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 98, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to clear the active bgs from the client game statics but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
    __debugbreak();
  v5 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v3);
  if ( *(CgStatic **)(v5 + 272) != CgStatic::ms_cgameStaticsArray[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 99, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_cgameStaticsArray[localClientNum] ) )", "( ms_activeBgs ) = %p", *(const void **)(v5 + 272)) )
    __debugbreak();
  v6 = NtCurrentTeb()->Reserved1[11];
  clientUIActives[v1].cgameInitialized = 1;
  *(_QWORD *)(v6[v3] + 272i64) = 0i64;
}

/*
==============
CL_CGameSP_GetServerCommands
==============
*/
ServerCommandsSP *CL_CGameSP_GetServerCommands(LocalClientNum_t localClientNum)
{
  return &ClConnectionSP::GetClientConnectionData(localClientNum)->serverCommands;
}

/*
==============
CL_CGameSP_GetSnapshot
==============
*/
__int64 CL_CGameSP_GetSnapshot(LocalClientNum_t localClientNum, playerState_s *ps)
{
  ClActiveClientSP *ClientSP; 

  ClientSP = ClActiveClientSP::GetClientSP(localClientNum);
  memcpy_0(ps, &ClientSP->ps, sizeof(playerState_s));
  return (unsigned int)ClConnectionSP::GetClientConnectionData(localClientNum)->serverCommands.header.sequence;
}

/*
==============
CL_CGameSP_GetSnapshotCommon
==============
*/
void CL_CGameSP_GetSnapshotCommon(CgSnapshotSP *snapshot)
{
  int SnapshotEntities; 
  int SnapshotFxEntities; 
  int SnapshotSoundInfos; 
  __int64 v8; 
  __int64 v9; 
  bitarray<384> result; 

  _RBX = snapshot;
  *(ClSnapshotHeader *)&snapshot->snapFlags = cls.snap;
  SnapshotEntities = SV_GetSnapshotEntities(snapshot->entityNums);
  _RBX->numEntities = SnapshotEntities;
  if ( SnapshotEntities > 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 85, ASSERT_TYPE_ASSERT, "( snapshot->numEntities ) <= ( 2048 )", "%s <= %s\n\t%i, %i", "snapshot->numEntities", "CL_MAX_ENTITIES_IN_SNAPSHOT_SP", SnapshotEntities, 2048) )
    __debugbreak();
  SnapshotFxEntities = SV_GetSnapshotFxEntities(_RBX->fxEntityNums);
  _RBX->numFxEntities = SnapshotFxEntities;
  if ( SnapshotFxEntities > 1280 )
  {
    LODWORD(v9) = 1280;
    LODWORD(v8) = SnapshotFxEntities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 88, ASSERT_TYPE_ASSERT, "( snapshot->numFxEntities ) <= ( 1280 )", "%s <= %s\n\t%i, %i", "snapshot->numFxEntities", "FX_ENTITY_MAX", v8, v9) )
      __debugbreak();
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
    __debugbreak();
  SnapshotSoundInfos = SV_GetSnapshotSoundInfos(_RBX->soundInfoNums);
  _RBX->numSounds = SnapshotSoundInfos;
  if ( SnapshotSoundInfos > 1024 )
  {
    LODWORD(v9) = 1024;
    LODWORD(v8) = SnapshotSoundInfos;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 93, ASSERT_TYPE_ASSERT, "( snapshot->numSounds ) <= ( 1024 )", "%s <= %s\n\t%i, %i", "snapshot->numSounds", "MAX_SERVER_CULLED_SOUNDS", v8, v9) )
      __debugbreak();
  }
  _RBX->numWeapons = SV_GetSnapshotWeapons(_RBX->weaponNums);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( _RBX->numWeapons > BgWeaponMap::ms_runtimeSize )
  {
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    LODWORD(v9) = BgWeaponMap::ms_runtimeSize;
    LODWORD(v8) = _RBX->numWeapons;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 97, ASSERT_TYPE_ASSERT, "( snapshot->numWeapons ) <= ( BgWeaponMap::GetRuntimeSize() )", "%s <= %s\n\t%i, %i", "snapshot->numWeapons", "BgWeaponMap::GetRuntimeSize()", v8, v9) )
      __debugbreak();
  }
  SV_GetSnapshotOmnvars(&_RBX->gameOmnvars);
  SV_GetSnapshotHudElems(_RBX->m_hudElem);
  _RAX = SV_GetSnapshotUmbraGateStates(&result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx+12324h], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbx+12344h], xmm1
  }
}

/*
==============
CL_CGameSP_GetSoundAliasListByName
==============
*/
SndAliasList *CL_CGameSP_GetSoundAliasListByName(int soundString)
{
  __int64 v1; 
  unsigned int v2; 

  v1 = soundString;
  if ( (unsigned int)soundString >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 343, ASSERT_TYPE_ASSERT, "(unsigned)( soundString ) < (unsigned)( ( sizeof( *array_counter( g_soundAliasListCache ) ) + 0 ) )", "soundString doesn't index ARRAY_COUNT( g_soundAliasListCache )\n\t%i not in [0, %i)", soundString, 512) )
    __debugbreak();
  v2 = g_soundAliasListCache[v1];
  if ( v2 )
    return SND_FindAliasFromId(v2);
  else
    return 0i64;
}

/*
==============
CL_CGameSP_Init
==============
*/

void __fastcall CL_CGameSP_Init(const char *mapname, const bool savegame)
{
  CL_CGameSP_Init_Internal(mapname, savegame);
}

/*
==============
CL_CGameSP_Init_Internal
==============
*/
void CL_CGameSP_Init_Internal(const char *mapname, const bool savegame)
{
  __int64 OnlyLocalClientNum; 
  char *m_activeGameMapName; 
  __int64 v7; 
  signed __int64 v8; 
  char v9; 
  __int64 v10; 
  char v11; 
  unsigned __int8 ActiveGameMode; 
  __int64 v17; 
  __int64 v18; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  Sys_Milliseconds();
  if ( !mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 419, ASSERT_TYPE_ASSERT, "(mapname)", (const char *)&queryFormat, "mapname") )
    __debugbreak();
  if ( !*mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 420, ASSERT_TYPE_ASSERT, "(mapname[0])", (const char *)&queryFormat, "mapname[0]") )
    __debugbreak();
  if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 422, ASSERT_TYPE_ASSERT, "(Com_IsAnyLocalServerRunning())", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  Live_SetCurrentMapname(mapname);
  if ( ui_play_credits && ui_play_credits->current.integer == 1 )
    Live_SetCreditsContext();
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  m_activeGameMapName = cls.m_activeGameMapName;
  v7 = 0x7FFFFFFFi64;
  v8 = mapname - cls.m_activeGameMapName;
  do
  {
    v9 = m_activeGameMapName[v8];
    v10 = v7;
    v11 = *m_activeGameMapName++;
    --v7;
    if ( !v10 )
      break;
    if ( v9 != v11 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 431, ASSERT_TYPE_ASSERT, "(0 == I_strcmp( mapname, cls.GetGameMapName() ))", (const char *)&queryFormat, "0 == I_strcmp( mapname, cls.GetGameMapName() )") )
        __debugbreak();
      break;
    }
  }
  while ( v9 );
  cls.isLoadComplete = 1;
  if ( (unsigned int)OnlyLocalClientNum >= 2 )
  {
    LODWORD(v17) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, 2) )
      __debugbreak();
  }
  if ( clientUIActives[OnlyLocalClientNum].connectionState != CA_LOADING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 435, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientAnyConnectionState( localClientNum ) == CA_LOADING)", (const char *)&queryFormat, "CL_GetLocalClientAnyConnectionState( localClientNum ) == CA_LOADING") )
    __debugbreak();
  if ( cls.serverMessageSequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 436, ASSERT_TYPE_ASSERT, "(!cls.serverMessageSequence)", (const char *)&queryFormat, "!cls.serverMessageSequence") )
    __debugbreak();
  if ( (unsigned int)OnlyLocalClientNum >= LODWORD(cl_maxLocalClients) )
  {
    *(float *)&v18 = cl_maxLocalClients;
    LODWORD(v17) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.h", 49, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( (_BYTE)ClConnection::ms_activeConnectionType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.h", 50, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType == GameModeType::SP)", (const char *)&queryFormat, "ms_activeConnectionType == GameModeType::SP") )
    __debugbreak();
  if ( !ClConnection::ms_connections[OnlyLocalClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.h", 51, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
    __debugbreak();
  if ( ClConnection::ms_connections[OnlyLocalClientNum][8259].m_localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 437, ASSERT_TYPE_ASSERT, "(!ClConnectionSP::GetClientConnectionData( localClientNum )->serverCommands.header.sent)", (const char *)&queryFormat, "!ClConnectionSP::GetClientConnectionData( localClientNum )->serverCommands.header.sent") )
    __debugbreak();
  if ( (unsigned int)OnlyLocalClientNum >= 2 )
  {
    LODWORD(v18) = 2;
    LODWORD(v17) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  clientUIActives[OnlyLocalClientNum].cgameInitCalled = 1;
  CG_MainSP_Init(savegame);
  Sys_Milliseconds();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, eax
    vmulsd  xmm2, xmm0, cs:__real@3f50624dd2f1a9fc
    vmovq   r8, xmm2
  }
  Com_Printf(14, "CL_CGameSP_Init: %5.2f seconds\n", *(double *)&_XMM2);
  R_EndRegistration();
  Con_ClearNotify((LocalClientNum_t)OnlyLocalClientNum);
  Con_InitConfig((const LocalClientNum_t)OnlyLocalClientNum, "console_sp.cfg");
  Con_InitMessageBuffer();
  Con_InitGameMsgChannels();
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  CL_Main_ReInitDevGUI((GameModeType)ActiveGameMode);
}

/*
==============
CL_CGameSP_LoadWorld
==============
*/
void CL_CGameSP_LoadWorld(const char *name)
{
  unsigned int LocalClientActiveCount; 
  int checksum; 

  LocalClientActiveCount = CL_GetLocalClientActiveCount();
  R_LoadWorld(LocalClientActiveCount, name, &checksum, 0);
  SV_GameSP_SetCheckSum(checksum);
}

/*
==============
CL_CGameSP_RegisterSoundAliasCacheEntry
==============
*/
void CL_CGameSP_RegisterSoundAliasCacheEntry(int soundString)
{
  __int64 v1; 
  const char *ConfigString; 
  int v4; 

  v1 = soundString;
  if ( (unsigned int)soundString >= 0x200 )
  {
    v4 = 512;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 334, ASSERT_TYPE_ASSERT, "(unsigned)( soundString ) < (unsigned)( ( sizeof( *array_counter( g_soundAliasListCache ) ) + 0 ) )", "soundString doesn't index ARRAY_COUNT( g_soundAliasListCache )\n\t%i not in [0, %i)", soundString, v4) )
      __debugbreak();
  }
  ConfigString = CL_GetConfigString((int)v1 + 2414);
  g_soundAliasListCache[v1] = SND_FindAliasId(ConfigString);
}

/*
==============
CL_CGameSP_Restart_Init
==============
*/
void CL_CGameSP_Restart_Init(bool loadScripts, bool savegame)
{
  LocalClientNum_t OnlyLocalClientNum; 
  ClConfigStringsSP *ClConfigStringsSP; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  ClConfigStringsSP = ClConfigStringsSP::GetClConfigStringsSP();
  ClConfigStringsSP::RestartInit(ClConfigStringsSP);
  CG_ServerCmdSP_MapInit(1, loadScripts, savegame);
  CG_ServerCmd_ParseSunLight(OnlyLocalClientNum);
  CG_ServerCmdSP_ParseSunDirection(OnlyLocalClientNum);
  CG_ServerCmdSP_ParseSunFlarePosition(OnlyLocalClientNum);
  CG_ServerCmdSP_ParseSkyOverride(OnlyLocalClientNum);
  CG_MainSP_ReloadSpecificClientSideAnimationSystems();
}

/*
==============
CL_CGameSP_Restart_Shutdown
==============
*/
void CL_CGameSP_Restart_Shutdown(bool loadScripts)
{
  LocalClientNum_t OnlyLocalClientNum; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  SND_ResetTimeScaleDefaults();
  SND_ResetPauseDefaults();
  if ( LUI_CoD_IsEnabled() && LUI_BeginEvent(LOCAL_CLIENT_0, "level_load", LUI_luaVM) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
  R_Cinematic_StopPlayback(1);
  memset_0(g_soundAliasListCache, 0, sizeof(g_soundAliasListCache));
  SV_TransientsSP_ShutdownLevel();
  Con_ClearNotify(OnlyLocalClientNum);
  Con_ClearErrors(OnlyLocalClientNum);
  Con_InitConfig(OnlyLocalClientNum, "console_sp.cfg");
  Con_InitMessageBuffer();
  Con_InitGameMsgChannels();
  CG_Glass_Shutdown();
  CG_Main_FreePhysics(OnlyLocalClientNum);
  CG_Main_FreeRagdolls(OnlyLocalClientNum);
  CG_ServerCmdSP_ShutdownPhysics(OnlyLocalClientNum);
  CG_Main_FreeCloth(OnlyLocalClientNum);
  CgAntiLag::ResetClientHistory(OnlyLocalClientNum);
}

/*
==============
CL_CGameSP_RestoreSettings
==============
*/
void CL_CGameSP_RestoreSettings(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  const char *CString; 
  int v11; 
  const char *v13; 
  int v18; 
  unsigned int v19; 
  int v20; 
  char p[8]; 
  Weapon result; 
  char outHexString[128]; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 657, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( MemFile_IsWriting(memFile) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 658, ASSERT_TYPE_ASSERT, "(!MemFile_IsWriting( memFile ))", (const char *)&queryFormat, "!MemFile_IsWriting( memFile )") )
    __debugbreak();
  _RSI = ClActiveClientSP::GetClientSP(localClientNum);
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 642, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  CString = MemFile_ReadCString(memFile);
  if ( CString && *CString )
  {
    _RAX = CG_Weapons_GetWeaponForName(&result, CString);
    __asm
    {
      vmovups ymm1, ymmword ptr [rax]
      vmovups xmm2, xmmword ptr [rax+20h]
      vmovsd  xmm3, qword ptr [rax+30h]
    }
    v11 = *(_DWORD *)&_RAX->weaponCamo;
  }
  else
  {
    __asm
    {
      vmovups ymm1, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups xmm2, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovsd  xmm3, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    }
    v11 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  }
  _RCX = &_RDI->weaponSelect;
  __asm
  {
    vmovups ymmword ptr [rcx], ymm1
    vmovups xmmword ptr [rcx+20h], xmm2
    vmovsd  qword ptr [rcx+30h], xmm3
  }
  *(_DWORD *)&_RDI->weaponSelect.weaponCamo = v11;
  __asm
  {
    vmovups ymmword ptr [rsi+90h], ymm1
    vmovups xmmword ptr [rsi+0B0h], xmm2
    vmovsd  qword ptr [rsi+0C0h], xmm3
  }
  *(_DWORD *)&_RSI->cgameUserCmdWeapon.weaponCamo = v11;
  BG_ConvertWeaponToHexString(&_RDI->weaponSelect, outHexString, 121);
  Com_Printf(17, "CL_CGameSP_RestoreSettings: Read selected weapon %s.\n", outHexString);
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 642, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v13 = MemFile_ReadCString(memFile);
  if ( v13 && *v13 )
  {
    _RAX = CG_Weapons_GetWeaponForName(&result, v13);
    __asm
    {
      vmovups ymm1, ymmword ptr [rax]
      vmovups xmm2, xmmword ptr [rax+20h]
      vmovsd  xmm3, qword ptr [rax+30h]
    }
    v18 = *(_DWORD *)&_RAX->weaponCamo;
  }
  else
  {
    __asm
    {
      vmovups ymm1, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups xmm2, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovsd  xmm3, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    }
    v18 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  }
  __asm
  {
    vmovups ymmword ptr [rdi+499C8h], ymm1
    vmovups xmmword ptr [rdi+499E8h], xmm2
    vmovsd  qword ptr [rdi+499F8h], xmm3
  }
  *(_DWORD *)&_RDI->equippedOffHand.weaponCamo = v18;
  __asm
  {
    vmovups ymmword ptr [rsi+0CCh], ymm1
    vmovups xmmword ptr [rsi+0ECh], xmm2
    vmovsd  qword ptr [rsi+0FCh], xmm3
  }
  *(_DWORD *)&_RSI->cgameUserCmdOffHand.weaponCamo = v18;
  MemFile_ReadData(memFile, 1ui64, p);
  v19 = (unsigned __int8)p[0];
  _RSI->usingAds = p[0] & 1;
  v20 = (v19 >> 1) & 1;
  _RDI->weaponSelectInAlt = v20;
  _RDI->equipSelectInAlt = (v19 & 4) != 0;
  _RSI->cgameUserCmdAlternate = v20;
}

/*
==============
CL_CGameSP_SetActive
==============
*/
void CL_CGameSP_SetActive(void)
{
  LocalClientNum_t OnlyLocalClientNum; 
  __int64 v1; 
  connstate_t *p_connectionState; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  v1 = OnlyLocalClientNum;
  if ( (unsigned int)OnlyLocalClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", OnlyLocalClientNum, 2) )
    __debugbreak();
  p_connectionState = &clientUIActives[v1].connectionState;
  Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", *(unsigned int *)p_connectionState, 9i64);
  *p_connectionState = CA_ACTIVE;
  CL_SetupScreenPlacements();
}

/*
==============
CL_CGameSP_SetUserCmdAimValues
==============
*/

void __fastcall CL_CGameSP_SetUserCmdAimValues(LocalClientNum_t localClientNum, double gunPitch, double gunYaw, double gunXOfs, float gunYOfs, float gunZOfs)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  _RAX = ClActiveClientSP::GetClientSP(localClientNum);
  __asm
  {
    vmovss  xmm0, [rsp+58h+gunYOfs]
    vmovss  xmm1, [rsp+58h+gunZOfs]
    vmovss  dword ptr [rax+8720h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rax+8724h], xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vmovss  dword ptr [rax+8728h], xmm8
    vmovaps xmm8, [rsp+58h+var_38]
    vmovss  dword ptr [rax+872Ch], xmm0
    vmovss  dword ptr [rax+8730h], xmm1
  }
}

/*
==============
CL_CGameSP_Shutdown
==============
*/
void CL_CGameSP_Shutdown(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool v2; 
  bool *p_cgameInitCalled; 
  bool *p_cgameInitialized; 
  int v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  v2 = !clientUIActives[v1].cgameInitCalled;
  p_cgameInitCalled = &clientUIActives[v1].cgameInitCalled;
  p_cgameInitialized = &clientUIActives[v1].cgameInitialized;
  if ( v2 )
  {
    if ( *p_cgameInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 298, ASSERT_TYPE_ASSERT, "(!clUI->cgameInitialized)", (const char *)&queryFormat, "!clUI->cgameInitialized") )
      __debugbreak();
  }
  else
  {
    CG_MainSP_Shutdown();
    *p_cgameInitCalled = 0;
    *p_cgameInitialized = 0;
    cls.isLoadComplete = 0;
    cls.m_serverFrameDuration = 0;
    ClStatic::SetGameMapName(&cls, (const char *)&queryFormat.fmt + 3);
    ClStatic::SetActiveGameType(&cls, (const char *)&queryFormat.fmt + 3);
  }
}

/*
==============
CL_CGameSP_StartLoading
==============
*/
void CL_CGameSP_StartLoading(const char *mapname, const bool playMovie, const int fullRenderStartup, const bool savegame, const int serverFrameDuration)
{
  LocalClientNum_t OnlyLocalClientNum; 
  __int64 v10; 
  bool v11; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  v10 = OnlyLocalClientNum;
  if ( (unsigned int)OnlyLocalClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", OnlyLocalClientNum, 2) )
    __debugbreak();
  if ( clientUIActives[v10].isRunning )
  {
    if ( SND_Active() )
    {
      SND_ResetTimeScaleDefaults();
      SND_ResetPauseDefaults();
    }
    ProfLoad_Begin("CL_InitRenderer");
    if ( fullRenderStartup )
      CL_Main_InitRenderer();
    else
      CL_Main_ResetViewport();
    ProfLoad_End();
    Dvar_SetBool_Internal(cl_pregame, 1);
    cls.m_serverFrameDuration = serverFrameDuration;
    ClStatic::SetGameMapName(&cls, mapname);
    ClStatic::SetActiveGameType(&cls, (const char *)&queryFormat.fmt + 3);
    ProfLoad_Begin("CL_Main_StartHunkUsers");
    CL_Main_StartHunkUsers();
    ProfLoad_End();
    v11 = savegame && fullRenderStartup && Com_ScreenShotSaveGame_ScreenShotExists();
    cls.displayScreenShotLoadingScreen = v11;
    cls.startedMainThreadRenderLoop = 0;
    if ( playMovie && !v11 )
      CL_MainSP_PlayMapMovie(mapname);
  }
}

/*
==============
CL_CGameSP_WriteWeapon
==============
*/
void CL_CGameSP_WriteWeapon(MemoryFile *memFile, const Weapon *r_weapon)
{
  char *v4; 
  char output[512]; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_cgame_sp.cpp", 585, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( r_weapon->weaponIdx )
  {
    BG_GetWeaponName(r_weapon, output, 0x200u);
    v4 = output;
  }
  else
  {
    v4 = (char *)&queryFormat.fmt + 3;
  }
  MemFile_WriteCString(memFile, v4);
}

/*
==============
CL_ClearSubtitles
==============
*/
void CL_ClearSubtitles(void)
{
  if ( LUI_CoD_IsEnabled() && LUI_BeginEvent(LOCAL_CLIENT_0, "level_load", LUI_luaVM) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

