/*
==============
CG_GameInterface_MainSP_RegisterGraphics
==============
*/

void __fastcall CG_GameInterface_MainSP_RegisterGraphics(const char *mapname)
{
  ?CG_GameInterface_MainSP_RegisterGraphics@@YAXPEBD@Z(mapname);
}

/*
==============
CG_GameInterface_PlayingGWReinforce
==============
*/

bool __fastcall CG_GameInterface_PlayingGWReinforce()
{
  return ?CG_GameInterface_PlayingGWReinforce@@YA_NXZ();
}

/*
==============
CG_GameInterface_MinimapHidePinnedVehicleTest
==============
*/

bool __fastcall CG_GameInterface_MinimapHidePinnedVehicleTest(const unsigned int vehFlags, const vec2_t *currentPosition, const vec2_t *clippedPosition)
{
  return ?CG_GameInterface_MinimapHidePinnedVehicleTest@@YA_NIAEBTvec2_t@@0@Z(vehFlags, currentPosition, clippedPosition);
}

/*
==============
CG_GameInterface_PlayingArena
==============
*/

bool __fastcall CG_GameInterface_PlayingArena()
{
  return ?CG_GameInterface_PlayingArena@@YA_NXZ();
}

/*
==============
CG_GameInterface_FreeCompassSystem
==============
*/

bool __fastcall CG_GameInterface_FreeCompassSystem()
{
  return ?CG_GameInterface_FreeCompassSystem@@YA_NXZ();
}

/*
==============
CG_GameInterface_InitCompassSystem
==============
*/

bool __fastcall CG_GameInterface_InitCompassSystem(LocalClientNum_t localClientNum)
{
  return ?CG_GameInterface_InitCompassSystem@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GameInterface_PlayingGroundWar
==============
*/

bool __fastcall CG_GameInterface_PlayingGroundWar()
{
  return ?CG_GameInterface_PlayingGroundWar@@YA_NXZ();
}

/*
==============
CG_GameInterface_OnPredictPlayerState
==============
*/

void __fastcall CG_GameInterface_OnPredictPlayerState(LocalClientNum_t localClientNum)
{
  ?CG_GameInterface_OnPredictPlayerState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GameInterface_OnShutdownGameMemory
==============
*/

void CG_GameInterface_OnShutdownGameMemory(void)
{
  ?CG_GameInterface_OnShutdownGameMemory@@YAXXZ();
}

/*
==============
CG_GameInterface_IsRemoteControlledVehicle
==============
*/

bool __fastcall CG_GameInterface_IsRemoteControlledVehicle(LocalClientNum_t localClientNum, const centity_t *remoteControlledVeh)
{
  return ?CG_GameInterface_IsRemoteControlledVehicle@@YA_NW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, remoteControlledVeh);
}

/*
==============
CG_GameInterface_OnAllocateGameMemory
==============
*/

void __fastcall CG_GameInterface_OnAllocateGameMemory(HunkUser *hunkUser, int maxLocalClients)
{
  ?CG_GameInterface_OnAllocateGameMemory@@YAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CG_GameInterface_PlayingBRTDM
==============
*/

bool __fastcall CG_GameInterface_PlayingBRTDM()
{
  return ?CG_GameInterface_PlayingBRTDM@@YA_NXZ();
}

/*
==============
CG_GameInterface_ShutdownCompassSystem
==============
*/

bool __fastcall CG_GameInterface_ShutdownCompassSystem(LocalClientNum_t localClientNum)
{
  return ?CG_GameInterface_ShutdownCompassSystem@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GameInterface_MainMP_RegisterGraphics
==============
*/

void __fastcall CG_GameInterface_MainMP_RegisterGraphics(LocalClientNum_t localClientNum, const char *mapname)
{
  ?CG_GameInterface_MainMP_RegisterGraphics@@YAXW4LocalClientNum_t@@PEBD@Z(localClientNum, mapname);
}

/*
==============
CG_GameInterface_PlayingBR
==============
*/

bool __fastcall CG_GameInterface_PlayingBR()
{
  return ?CG_GameInterface_PlayingBR@@YA_NXZ();
}

/*
==============
CG_GameInterface_ClearCompassSystem
==============
*/

bool __fastcall CG_GameInterface_ClearCompassSystem(LocalClientNum_t localClientNum)
{
  return ?CG_GameInterface_ClearCompassSystem@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GameInterface_AllocateCompassSystem
==============
*/

bool __fastcall CG_GameInterface_AllocateCompassSystem(HunkUser *hunkUser, int maxLocalClients)
{
  return ?CG_GameInterface_AllocateCompassSystem@@YA_NPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CG_GameInterface_AllocateCompassSystem
==============
*/
bool CG_GameInterface_AllocateCompassSystem(HunkUser *hunkUser, int maxLocalClients)
{
  __int64 v3; 
  const dvar_t *v4; 
  int v5; 
  CgCompassSystemCPRaid *v6; 
  CgCompassSystem **v7; 
  CgCompassSystem *v8; 
  int v9; 
  CgCompassSystemMP *v10; 
  CgCompassSystem **v11; 
  CgCompassSystem *v12; 
  int v13; 
  CgCompassSystemBR *v14; 
  CgCompassSystem **v15; 
  CgCompassSystem *v16; 
  bool result; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 

  v3 = maxLocalClients;
  if ( (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == DODGE || (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == 4 )
  {
    if ( (_BYTE)CgCompassSystem::ms_allocatedType )
    {
      v21 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 599, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the compass system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v21) )
        __debugbreak();
    }
    v13 = 0;
    if ( (unsigned int)v3 > 2 )
    {
      v24 = 2;
      LODWORD(v18) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 600, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v18, 0i64, v24) )
        __debugbreak();
    }
    v14 = (CgCompassSystemBR *)Mem_HunkUser_AllocInternal(hunkUser, 64448 * v3, 8ui64, "CgCompassSystem::AllocateCompassSystemCommon");
    memset_0(v14, 0, 64448 * v3);
    if ( (int)v3 > 0 )
    {
      v15 = CgCompassSystem::ms_compassSystemArray;
      do
      {
        if ( *v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 610, ASSERT_TYPE_ASSERT, "(!ms_compassSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_compassSystemArray[localClientIndex]") )
          __debugbreak();
        CgCompassSystemBR::CgCompassSystemBR(v14, (const LocalClientNum_t)v13);
        *v15 = v16;
        ++v13;
        ++v15;
        ++v14;
      }
      while ( v13 < (int)v3 );
    }
  }
  else
  {
    v4 = DVARBOOL_isCompassCPRaidSecurityScreen;
    if ( DVARBOOL_isCompassCPRaidSecurityScreen && (Dvar_CheckFrontendServerThread(DVARBOOL_isCompassCPRaidSecurityScreen), v4->current.enabled) )
    {
      if ( (_BYTE)CgCompassSystem::ms_allocatedType )
      {
        v19 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 599, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the compass system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v19) )
          __debugbreak();
      }
      v5 = 0;
      if ( (unsigned int)v3 > 2 )
      {
        v22 = 2;
        LODWORD(v18) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 600, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v18, 0i64, v22) )
          __debugbreak();
      }
      v6 = (CgCompassSystemCPRaid *)Mem_HunkUser_AllocInternal(hunkUser, 64304 * v3, 8ui64, "CgCompassSystem::AllocateCompassSystemCommon");
      memset_0(v6, 0, 64304 * v3);
      if ( (int)v3 > 0 )
      {
        v7 = CgCompassSystem::ms_compassSystemArray;
        do
        {
          if ( *v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 610, ASSERT_TYPE_ASSERT, "(!ms_compassSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_compassSystemArray[localClientIndex]") )
            __debugbreak();
          CgCompassSystemCPRaid::CgCompassSystemCPRaid(v6, (const LocalClientNum_t)v5);
          *v7 = v8;
          ++v5;
          ++v7;
          ++v6;
        }
        while ( v5 < (int)v3 );
      }
    }
    else
    {
      if ( (_BYTE)CgCompassSystem::ms_allocatedType )
      {
        v20 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 599, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the compass system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v20) )
          __debugbreak();
      }
      v9 = 0;
      if ( (unsigned int)v3 > 2 )
      {
        v23 = 2;
        LODWORD(v18) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 600, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v18, 0i64, v23) )
          __debugbreak();
      }
      v10 = (CgCompassSystemMP *)Mem_HunkUser_AllocInternal(hunkUser, 64280 * v3, 8ui64, "CgCompassSystem::AllocateCompassSystemCommon");
      memset_0(v10, 0, 64280 * v3);
      if ( (int)v3 > 0 )
      {
        v11 = CgCompassSystem::ms_compassSystemArray;
        do
        {
          if ( *v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 610, ASSERT_TYPE_ASSERT, "(!ms_compassSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_compassSystemArray[localClientIndex]") )
            __debugbreak();
          CgCompassSystemMP::CgCompassSystemMP(v10, (const LocalClientNum_t)v9);
          *v11 = v12;
          ++v9;
          ++v11;
          ++v10;
        }
        while ( v9 < (int)v3 );
      }
    }
  }
  result = 1;
  CgCompassSystem::ms_allocatedCount = v3;
  LOBYTE(CgCompassSystem::ms_allocatedType) = 2;
  return result;
}

/*
==============
CG_GameInterface_ClearCompassSystem
==============
*/
char CG_GameInterface_ClearCompassSystem(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const dvar_t *v2; 
  void **v3; 
  void **v4; 
  void **v5; 
  CgCompassSystem *CompassSystem; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 

  v1 = localClientNum;
  if ( (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == DODGE || (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == 4 )
  {
    if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
    {
      v15 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
      v12 = 2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 651, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tCgCompassSystem::ClearCompassSystemCommon: Trying to clear compass system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v12, v15) )
        __debugbreak();
    }
    if ( (unsigned int)v1 >= CgCompassSystem::ms_allocatedCount )
    {
      LODWORD(v9) = CgCompassSystem::ms_allocatedCount;
      LODWORD(v8) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 652, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v5 = (void **)&CgCompassSystem::ms_compassSystemArray[v1];
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v5 + 120i64))(*v5, 0i64);
    memset_0(*v5, 0, 0xFBC0ui64);
    CgCompassSystemBR::CgCompassSystemBR((CgCompassSystemBR *)*v5, (const LocalClientNum_t)v1);
  }
  else
  {
    v2 = DVARBOOL_isCompassCPRaidSecurityScreen;
    if ( DVARBOOL_isCompassCPRaidSecurityScreen && (Dvar_CheckFrontendServerThread(DVARBOOL_isCompassCPRaidSecurityScreen), v2->current.enabled) )
    {
      if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
      {
        v13 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
        v10 = 2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 651, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tCgCompassSystem::ClearCompassSystemCommon: Trying to clear compass system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v10, v13) )
          __debugbreak();
      }
      if ( (unsigned int)v1 >= CgCompassSystem::ms_allocatedCount )
      {
        LODWORD(v9) = CgCompassSystem::ms_allocatedCount;
        LODWORD(v8) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 652, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      v3 = (void **)&CgCompassSystem::ms_compassSystemArray[v1];
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v3 + 120i64))(*v3, 0i64);
      memset_0(*v3, 0, 0xFB30ui64);
      CgCompassSystemCPRaid::CgCompassSystemCPRaid((CgCompassSystemCPRaid *)*v3, (const LocalClientNum_t)v1);
    }
    else
    {
      if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
      {
        v14 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
        v11 = 2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 651, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tCgCompassSystem::ClearCompassSystemCommon: Trying to clear compass system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v11, v14) )
          __debugbreak();
      }
      if ( (unsigned int)v1 >= CgCompassSystem::ms_allocatedCount )
      {
        LODWORD(v9) = CgCompassSystem::ms_allocatedCount;
        LODWORD(v8) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 652, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      v4 = (void **)&CgCompassSystem::ms_compassSystemArray[v1];
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v4 + 120i64))(*v4, 0i64);
      memset_0(*v4, 0, 0xFB18ui64);
      CgCompassSystemMP::CgCompassSystemMP((CgCompassSystemMP *)*v4, (const LocalClientNum_t)v1);
    }
  }
  CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)v1);
  CgCompassSystem::ResetCompassActorObfuscation(CompassSystem);
  return 1;
}

/*
==============
CG_GameInterface_FreeCompassSystem
==============
*/
bool CG_GameInterface_FreeCompassSystem()
{
  const dvar_t *v0; 
  char v1; 
  int v2; 
  void **v3; 
  bool result; 
  char v5; 
  int v6; 
  void **v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 

  if ( (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) != DODGE && (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) != 4 )
  {
    v0 = DVARBOOL_isCompassCPRaidSecurityScreen;
    if ( DVARBOOL_isCompassCPRaidSecurityScreen )
    {
      Dvar_CheckFrontendServerThread(DVARBOOL_isCompassCPRaidSecurityScreen);
      if ( v0->current.enabled )
      {
        v1 = CgCompassSystem::ms_allocatedType;
        if ( (_BYTE)CgCompassSystem::ms_allocatedType )
        {
          if ( (_BYTE)CgCompassSystem::ms_allocatedType == HALF_HALF )
            goto LABEL_11;
          v10 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
          v8 = 2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 624, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to free compass system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v8, v10) )
            __debugbreak();
          v1 = CgCompassSystem::ms_allocatedType;
        }
        if ( v1 == 2 )
        {
LABEL_11:
          if ( CgCompassSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 628, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgCompassSystem::FreeCompassSystemCommon: Trying to free single-player compass system but no compass system has been allocated\n", "ms_allocatedCount > 0") )
            __debugbreak();
          v2 = CgCompassSystem::ms_allocatedCount - 1;
          if ( CgCompassSystem::ms_allocatedCount - 1 >= 0 )
          {
            v3 = (void **)&CgCompassSystem::ms_compassSystemArray[v2];
            do
            {
              (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v3 + 120i64))(*v3, 0i64);
              DebugWipe(*v3, 0xFB30ui64);
              --v2;
              *v3-- = NULL;
            }
            while ( v2 >= 0 );
          }
        }
LABEL_17:
        result = 1;
        CgCompassSystem::ms_allocatedCount = 0;
        LOBYTE(CgCompassSystem::ms_allocatedType) = 0;
        return result;
      }
    }
    v5 = CgCompassSystem::ms_allocatedType;
    if ( (_BYTE)CgCompassSystem::ms_allocatedType )
    {
      if ( (_BYTE)CgCompassSystem::ms_allocatedType == HALF_HALF )
        goto LABEL_24;
      v11 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
      v9 = 2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 624, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to free compass system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v9, v11) )
        __debugbreak();
      v5 = CgCompassSystem::ms_allocatedType;
    }
    if ( v5 != 2 )
      goto LABEL_17;
LABEL_24:
    if ( CgCompassSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 628, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgCompassSystem::FreeCompassSystemCommon: Trying to free single-player compass system but no compass system has been allocated\n", "ms_allocatedCount > 0") )
      __debugbreak();
    v6 = CgCompassSystem::ms_allocatedCount - 1;
    if ( CgCompassSystem::ms_allocatedCount - 1 >= 0 )
    {
      v7 = (void **)&CgCompassSystem::ms_compassSystemArray[v6];
      do
      {
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v7 + 120i64))(*v7, 0i64);
        DebugWipe(*v7, 0xFB18ui64);
        --v6;
        *v7-- = NULL;
      }
      while ( v6 >= 0 );
    }
    goto LABEL_17;
  }
  CgCompassSystemBR::FreeCompassSystem();
  return 1;
}

/*
==============
CG_GameInterface_InitCompassSystem
==============
*/
char CG_GameInterface_InitCompassSystem(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  CgCompassSystemCPRaid *CompassSystemCPRaid; 
  CgCompassSystemMP *CompassSystemMP; 
  CgCompassSystemBR *CompassSystemBR; 

  if ( (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == DODGE || (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == 4 )
  {
    CompassSystemBR = CgCompassSystemBR::GetCompassSystemBR(localClientNum);
    CgCompassSystemBR::InitCompass(CompassSystemBR);
    return 1;
  }
  else
  {
    v2 = DVARBOOL_isCompassCPRaidSecurityScreen;
    if ( DVARBOOL_isCompassCPRaidSecurityScreen && (Dvar_CheckFrontendServerThread(DVARBOOL_isCompassCPRaidSecurityScreen), v2->current.enabled) )
    {
      CompassSystemCPRaid = CgCompassSystemCPRaid::GetCompassSystemCPRaid(localClientNum);
      CgCompassSystemCPRaid::InitCompass(CompassSystemCPRaid);
      return 1;
    }
    else
    {
      CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP(localClientNum);
      CgCompassSystemMP::InitCompass(CompassSystemMP);
      return 1;
    }
  }
}

/*
==============
CG_GameInterface_IsRemoteControlledVehicle
==============
*/
bool CG_GameInterface_IsRemoteControlledVehicle(LocalClientNum_t localClientNum, const centity_t *remoteControlledVeh)
{
  return remoteControlledVeh->nextState.eType == ET_VEHICLE;
}

/*
==============
CG_GameInterface_MainMP_RegisterGraphics
==============
*/
void CG_GameInterface_MainMP_RegisterGraphics(LocalClientNum_t localClientNum, const char *mapname)
{
  cgMedia.damageMaterial = Material_RegisterHandle("hit_direction", IMAGE_TRACK_HUD);
}

/*
==============
CG_GameInterface_MainSP_RegisterGraphics
==============
*/
void CG_GameInterface_MainSP_RegisterGraphics(const char *mapname)
{
  cgMedia.damageMaterial = Material_RegisterHandle("hit_direction", IMAGE_TRACK_HUD);
}

/*
==============
CG_GameInterface_MinimapHidePinnedVehicleTest
==============
*/
bool CG_GameInterface_MinimapHidePinnedVehicleTest(const unsigned int vehFlags, const vec2_t *currentPosition, const vec2_t *clippedPosition)
{
  char v18; 

  _RBX = clippedPosition;
  if ( (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) != COUNT )
    return (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == DODGE || (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == 4;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm4, xmm0, dword ptr [rdi]
    vsubss  xmm2, xmm1, dword ptr [rdi+4]
  }
  _RBX = DVARFLT_compassClippedScaleMaxDistance;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm6, xmm3, xmm0
  }
  if ( !DVARFLT_compassClippedScaleMaxDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClippedScaleMaxDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, xmm0
    vsubss  xmm3, xmm1, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm3, xmm2
  }
  return v18;
}

/*
==============
CG_GameInterface_OnAllocateGameMemory
==============
*/
void CG_GameInterface_OnAllocateGameMemory(HunkUser *hunkUser, int maxLocalClients)
{
  CgExampleSystemClass::Allocate(hunkUser, maxLocalClients);
  CG_ExampleSystemFunctions_OnAllocate(hunkUser, maxLocalClients);
}

/*
==============
CG_GameInterface_OnPredictPlayerState
==============
*/
void CG_GameInterface_OnPredictPlayerState(LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CG_GameInterface_OnShutdownGameMemory
==============
*/
void CG_GameInterface_OnShutdownGameMemory(void)
{
  CG_ExampleSystemFunctions_OnShutdownGameMemory();
  CgExampleSystemClass::Free();
}

/*
==============
CG_GameInterface_PlayingArena
==============
*/
bool CG_GameInterface_PlayingArena()
{
  return (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == (COUNT|DODGE);
}

/*
==============
CG_GameInterface_PlayingBR
==============
*/
bool CG_GameInterface_PlayingBR()
{
  return (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == DODGE;
}

/*
==============
CG_GameInterface_PlayingBRTDM
==============
*/
bool CG_GameInterface_PlayingBRTDM()
{
  return (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == 4;
}

/*
==============
CG_GameInterface_PlayingGWReinforce
==============
*/
bool CG_GameInterface_PlayingGWReinforce()
{
  return (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == 5;
}

/*
==============
CG_GameInterface_PlayingGroundWar
==============
*/
bool CG_GameInterface_PlayingGroundWar()
{
  return (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == COUNT;
}

/*
==============
CG_GameInterface_ShutdownCompassSystem
==============
*/
char CG_GameInterface_ShutdownCompassSystem(LocalClientNum_t localClientNum)
{
  const dvar_t *v3; 
  CgCompassSystemCPRaid *CompassSystemCPRaid; 
  char v7; 
  bool v8; 
  CgCompassSystemMP *CompassSystemMP; 
  CgCompassSystemBR *CompassSystemBR; 

  if ( (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == DODGE || (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == 4 )
  {
    CompassSystemBR = CgCompassSystemBR::GetCompassSystemBR(localClientNum);
    CgCompassSystemMP::ShutdownCompass(CompassSystemBR);
    return 1;
  }
  else
  {
    v3 = DVARBOOL_isCompassCPRaidSecurityScreen;
    if ( DVARBOOL_isCompassCPRaidSecurityScreen && (Dvar_CheckFrontendServerThread(DVARBOOL_isCompassCPRaidSecurityScreen), v3->current.enabled) )
    {
      CompassSystemCPRaid = CgCompassSystemCPRaid::GetCompassSystemCPRaid(localClientNum);
      CgCompassSystemMP::ShutdownCompass(CompassSystemCPRaid);
      _RAX = Dvar_FindVarByName("LQSSNPQOMO");
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm0, dword ptr [rax+48h]
      }
      if ( v7 )
        v8 = 0;
      else
        v8 = 1;
      Dvar_SetBool_Internal(_RAX, v8);
      return 1;
    }
    else
    {
      CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP(localClientNum);
      CgCompassSystemMP::ShutdownCompass(CompassSystemMP);
      return 1;
    }
  }
}

