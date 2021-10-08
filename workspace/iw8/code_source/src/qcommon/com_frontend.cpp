/*
==============
Com_FrontEnd_EnterFrontEnd
==============
*/

void Com_FrontEnd_EnterFrontEnd(void)
{
  ?Com_FrontEnd_EnterFrontEnd@@YAXXZ();
}

/*
==============
Com_FrontEnd_FreeZonesOnLevelLoad
==============
*/

void Com_FrontEnd_FreeZonesOnLevelLoad(void)
{
  ?Com_FrontEnd_FreeZonesOnLevelLoad@@YAXXZ();
}

/*
==============
Com_FrontEnd_UnloadLevelFastFiles
==============
*/

void Com_FrontEnd_UnloadLevelFastFiles(void)
{
  ?Com_FrontEnd_UnloadLevelFastFiles@@YAXXZ();
}

/*
==============
Com_Frontend_LoadFastfile_Free
==============
*/

void Com_Frontend_LoadFastfile_Free(void)
{
  ?Com_Frontend_LoadFastfile_Free@@YAXXZ();
}

/*
==============
Com_FrontEnd_Init
==============
*/

void Com_FrontEnd_Init(void)
{
  ?Com_FrontEnd_Init@@YAXXZ();
}

/*
==============
Com_FrontEnd_ExitFrontEnd
==============
*/

void Com_FrontEnd_ExitFrontEnd(void)
{
  ?Com_FrontEnd_ExitFrontEnd@@YAXXZ();
}

/*
==============
Com_Frontend_LoadFastfile_Load
==============
*/

void __fastcall Com_Frontend_LoadFastfile_Load(const char *mapname)
{
  ?Com_Frontend_LoadFastfile_Load@@YAXPEBD@Z(mapname);
}

/*
==============
Com_FrontEnd_InitDevGui
==============
*/

void Com_FrontEnd_InitDevGui(void)
{
  ?Com_FrontEnd_InitDevGui@@YAXXZ();
}

/*
==============
Com_FrontEnd_IsInFrontEnd
==============
*/

bool __fastcall Com_FrontEnd_IsInFrontEnd()
{
  return ?Com_FrontEnd_IsInFrontEnd@@YA_NXZ();
}

/*
==============
Com_FrontEnd_OnComClose
==============
*/

void Com_FrontEnd_OnComClose(void)
{
  ?Com_FrontEnd_OnComClose@@YAXXZ();
}

/*
==============
Com_Frontend_LoadFastfile_IsInUse
==============
*/

bool __fastcall Com_Frontend_LoadFastfile_IsInUse()
{
  return ?Com_Frontend_LoadFastfile_IsInUse@@YA_NXZ();
}

/*
==============
Com_FrontEnd_EnterFrontEnd
==============
*/
void Com_FrontEnd_EnterFrontEnd(void)
{
  if ( DB_DevFastBoot_DevmapBootSkipUI() )
  {
    if ( s_inFrontEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_frontend.cpp", 376, ASSERT_TYPE_ASSERT, "(!s_inFrontEnd)", (const char *)&queryFormat, "!s_inFrontEnd") )
      __debugbreak();
    if ( !s_fastBootFrontEnd )
    {
      if ( DB_DevFastBoot_LoadUIFastFile() )
        Com_FastFile_OnEnterFrontendFastBoot();
      UI_CinematicSubtitles_OnEnterFrontEnd();
      s_fastBootFrontEnd = 1;
    }
  }
  else
  {
    if ( !s_inFrontEnd )
    {
      if ( s_inFrontEndInit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_frontend.cpp", 432, ASSERT_TYPE_ASSERT, "(!s_inFrontEndInit)", (const char *)&queryFormat, "!s_inFrontEndInit") )
        __debugbreak();
      s_inFrontEndInit = 1;
      Online_Telemetry_SendScreenViews();
      PMem_BeginAlloc(S_FRONTEND_PMEM_NAME, PMEM_STACK_GAME);
      PartyHost_AllocMatchRulesNetworkingMemory();
      LiveStorage_CS_AllocMemory();
      LUI_CoD_AllocExtraFrontendMemory();
      OnlineMgr::OnFrontEnd_AllocateSystemsMemory(&g_onlineMgr);
      PMem_EndAlloc(S_FRONTEND_PMEM_NAME, PMEM_STACK_GAME);
      CL_UIStreaming_StartImageStreaming();
      Com_FastFile_OnEnterFrontEnd();
      Com_FrontEndScene_OnEnterFrontEnd();
      UI_CinematicSubtitles_OnEnterFrontEnd();
      R_Cinematic_ClearPreloads();
      s_inFrontEndInit = 0;
    }
    s_inFrontEnd = 1;
  }
}

/*
==============
Com_FrontEnd_ExitFrontEnd
==============
*/
void Com_FrontEnd_ExitFrontEnd(void)
{
  Online_VideoStreaming *Instance; 

  if ( s_fastBootFrontEnd )
  {
    if ( s_inFrontEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_frontend.cpp", 404, ASSERT_TYPE_ASSERT, "(!s_inFrontEnd)", (const char *)&queryFormat, "!s_inFrontEnd") )
      __debugbreak();
    if ( DB_DevFastBoot_LoadUIFastFile() )
      Com_FastFile_OnExitFrontEndFastBoot();
    UI_CinematicSubtitles_OnExitFrontEnd();
    s_fastBootFrontEnd = 0;
  }
  if ( s_inFrontEnd )
  {
    Instance = Online_VideoStreaming::GetInstance();
    Online_VideoStreaming::StopVideo(Instance, 1, 0);
    Com_FrontEndScene_OnExitFrontEnd();
    Com_FastFile_OnExitFrontEnd();
    CL_UIStreaming_StopImageStreaming();
    Com_FrontEnd_FreeSystemsMemory();
    Online_Telemetry_SendScreenViews();
    UI_CinematicSubtitles_OnExitFrontEnd();
    R_Cinematic_ClearPreloads();
    CL_Screen_ClearFrontendCinematic();
  }
  s_inFrontEnd = 0;
}

/*
==============
Com_FrontEnd_FreeSystemsMemory
==============
*/
void Com_FrontEnd_FreeSystemsMemory()
{
  StreamerMemLoan result; 

  PartyHost_ClearMatchRulesNetworkingMemory();
  LiveStorage_CS_ShutdownAll();
  LUI_CoD_ShutdownAndFreeExtraFrontendMemory();
  OnlineMgr::OnFrontEnd_FreeSystemsMemory(&g_onlineMgr);
  PMem_Free(&result, S_FRONTEND_PMEM_NAME, PMEM_STACK_GAME);
  StreamerMemLoan::~StreamerMemLoan(&result);
}

/*
==============
Com_FrontEnd_FreeZonesOnLevelLoad
==============
*/
void Com_FrontEnd_FreeZonesOnLevelLoad(void)
{
  if ( s_inFrontEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_frontend.cpp", 184, ASSERT_TYPE_ASSERT, "(!Com_FrontEnd_IsInFrontEnd())", (const char *)&queryFormat, "!Com_FrontEnd_IsInFrontEnd()") )
    __debugbreak();
  if ( (DB_Zones_GetInUseFlags() & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_frontend.cpp", 185, ASSERT_TYPE_ASSERT, "((DB_Zones_GetInUseFlags() & DB_ZONE_UI_SCENE) == 0)", (const char *)&queryFormat, "(DB_Zones_GetInUseFlags() & DB_ZONE_UI_SCENE) == 0") )
    __debugbreak();
  if ( (DB_Zones_GetInUseFlags() & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_frontend.cpp", 193, ASSERT_TYPE_ASSERT, "((DB_Zones_GetInUseFlags() & DB_ZONE_UI) == 0)", (const char *)&queryFormat, "(DB_Zones_GetInUseFlags() & DB_ZONE_UI) == 0") )
    __debugbreak();
  if ( (DB_Zones_GetInUseFlags() & 0x100) != 0 )
  {
    ProfLoad_Begin("FreeZonesOnLevelLoad");
    DB_UnloadFastfilesByZoneFlags(0x100u, 0);
    ProfLoad_End();
  }
}

/*
==============
Com_FrontEnd_Init
==============
*/
void Com_FrontEnd_Init(void)
{
  s_inFrontEnd = 0;
  Dvar_BeginPermanentRegistration();
  DVARBOOL_frontEndUseLoadFastfiles = Dvar_RegisterBool("QSKONNRNP", 0, 0, "Enables load fastfiles in multiplayer modes");
  DCONST_DVARINT_frontEndFastfilesMinTime = Dvar_RegisterInt("frontEndFastfilesMinTime", 1000, 0, 60000, 0x40004u, "Duration, in MS, to load fast files before checking for image streaming");
  DCONST_DVARINT_frontEndStreamingMinTime = Dvar_RegisterInt("frontEndStreamingMinTime", 1000, 0, 60000, 0x40004u, "Duration, in MS, to stream images before checking for fast file loads");
  DVARBOOL_frontEndPrioritizeLevelLoadTransients = Dvar_RegisterBool("LKLMQLRRML", 1, 0, "Prevents UI transients from interrupting the level load under certain conditions");
  DVARBOOL_frontEndPrioritizeLevelLoadImages = Dvar_RegisterBool("OKPTMOTTOQ", 1, 0, "Prevents UI images from interrupting the level load under certain conditions");
  DVARBOOL_frontEndPrioritizeLevelLoadExceptNeededTransients = Dvar_RegisterBool("PNOKSLNQP", 0, 0, "Allow cg transients to override the prioritized level load");
  DVARBOOL_frontEndPrioritizeLevelLoadExpectStreamingVisibility = Dvar_RegisterBool("MNSMLRLKMN", 0, 0, "Allow scene streaming to override the prioritized level load");
  DVARBOOL_frontEndSceneEnabled = Dvar_RegisterBool("LOTLQRLOMK", 1, 0, "Turn on to enable the front end scene (server).");
  DVARBOOL_frontEndScenePreload = Dvar_RegisterBool("MOKLQNMLMS", 1, 0, "Controls whether the front end scene fastfile gets preloaded when exiting a level back to the menu.");
  DVARBOOL_frontendSceneTabulationForce = Dvar_RegisterBool("MRLRTMSRRT", 0, 0, "Force image tabulation to happen even while fast files are loading, during the front-end scene render");
  DCONST_DVARINT_frontEndSceneRenderStreamingTimeout = Dvar_RegisterInt("frontEndSceneRenderStreamingTimeout", 10000, 0, 60000, 0x40004u, "Duration, in MS, before giving up on image streaming delays");
  DCONST_DVARINT_frontEndSceneDefaultFadeTime = Dvar_RegisterInt("frontEndSceneDefaultFadeTime", 500, 0, 10000, 0x40004u, "Default duration, in milliseconds, to fade in the scene when first visible");
  DVARBOOL_frontEndSceneFreeCam = Dvar_RegisterBool("TLSMNSRPK", 0, 0, "Turn on to enable freecam during the front-end scene");
  DVARSTR_frontEndFastfileName = Dvar_RegisterString("LORSOSSMRS", "mp_frontend5", 0, "Name of the frontend fast file to load. Must begin with mp_frontend");
  Dvar_EndPermanentRegistration();
  Com_FrontEndScene_Init();
}

/*
==============
Com_FrontEnd_InitDevGui
==============
*/
void Com_FrontEnd_InitDevGui(void)
{
  int v0; 
  __int64 i; 
  __int64 v2; 
  unsigned __int8 v3; 

  if ( s_inFrontEnd )
  {
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v0 = truncate_cast<int,unsigned __int64>(0x15ui64) + 1;
    if ( s_cmd_superUser_textArray[0].cmdsize + v0 <= s_cmd_superUser_textArray[0].maxsize )
    {
      for ( i = s_cmd_superUser_textArray[0].cmdsize - 1; i >= 0; s_cmd_superUser_textArray[0].data[v2] = v3 )
      {
        v2 = v0 + i;
        v3 = s_cmd_superUser_textArray[0].data[i--];
      }
      memcpy_0(s_cmd_superUser_textArray[0].data, "exec devgui_frontend\n", v0 - 1);
      s_cmd_superUser_textArray[0].data[v0 - 1] = 10;
      s_cmd_superUser_textArray[0].cmdsize += v0;
      Sys_LeaveCriticalSection(CRITSECT_CBUF);
    }
    else
    {
      Com_PrintError(1, "Cbuf_InsertText overflowed\n");
      Sys_LeaveCriticalSection(CRITSECT_CBUF);
    }
  }
}

/*
==============
Com_FrontEnd_IsInFrontEnd
==============
*/
_BOOL8 Com_FrontEnd_IsInFrontEnd()
{
  return s_inFrontEnd;
}

/*
==============
Com_FrontEnd_OnComClose
==============
*/
void Com_FrontEnd_OnComClose(void)
{
  if ( s_inFrontEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_frontend.cpp", 513, ASSERT_TYPE_ASSERT, "(!s_inFrontEnd)", (const char *)&queryFormat, "!s_inFrontEnd") )
    __debugbreak();
  if ( s_inFrontEndInit )
    Com_FrontEnd_FreeSystemsMemory();
}

/*
==============
Com_FrontEnd_UnloadLevelFastFiles
==============
*/
void Com_FrontEnd_UnloadLevelFastFiles(void)
{
  ClGameModeApplication *ActiveClientApplication; 

  if ( s_inFrontEnd )
  {
    if ( (DB_Zones_GetInUseFlags() & 0x300) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_frontend.cpp", 106, ASSERT_TYPE_ASSERT, "(!(DB_Zones_GetInUseFlags() & (DB_ZONE_GAME | DB_ZONE_LOAD)))", (const char *)&queryFormat, "!(DB_Zones_GetInUseFlags() & (DB_ZONE_GAME | DB_ZONE_LOAD))") )
      __debugbreak();
  }
  else
  {
    if ( SV_Init_IsMemoryAllocated() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_frontend.cpp", 110, ASSERT_TYPE_ASSERT, "(!SV_Init_IsMemoryAllocated())", "%s\n\tShutting down fastfiles while server memory is still allocated", "!SV_Init_IsMemoryAllocated()") )
      __debugbreak();
    if ( ClGameModeApplication::HasActiveApplicationGameMode() )
    {
      ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
      ActiveClientApplication->ShutdownClientMemory(ActiveClientApplication);
    }
    R_Cinematic_StopPlayback(0);
    DB_ReleaseAllExternalReferences(1);
    Stream_PushSyncDisable();
    DB_PushSkipAlwaysloadedImages();
    Stream_AlwaysLoaded_CancelProcessStreamingInfo();
    CL_Streaming_OnLevelUnload();
    CL_Transients_OnLevelUnload();
    DB_UnloadFastfilesByZoneFlags(0x605700u, 0);
    CL_PreloadSP_OnLevelUnload();
    Stream_PopSyncDisable();
    DB_PopSkipAlwaysloadedImages();
    IWMem_ProfileTree_PruneTree();
  }
}

/*
==============
Com_Frontend_LoadFastfile_Free
==============
*/
void Com_Frontend_LoadFastfile_Free(void)
{
  const dvar_t *v0; 

  if ( (DB_Zones_GetInUseFlags() & 0x200) != 0 )
  {
    v0 = DVARBOOL_frontEndUseLoadFastfiles;
    if ( !DVARBOOL_frontEndUseLoadFastfiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "frontEndUseLoadFastfiles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( !v0->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_frontend.cpp", 250, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DVARBOOL_frontEndUseLoadFastfiles, \"frontEndUseLoadFastfiles\" ))", "%s\n\tLOAD zone active while system is meant to be disabled", "Dvar_GetBool( frontEndUseLoadFastfiles )") )
      __debugbreak();
    DB_UnloadFastfilesByZoneFlags(0x200u, 0);
  }
}

/*
==============
Com_Frontend_LoadFastfile_IsInUse
==============
*/
bool Com_Frontend_LoadFastfile_IsInUse()
{
  return (DB_Zones_GetInUseFlags() & 0x200) != 0;
}

/*
==============
Com_Frontend_LoadFastfile_Load
==============
*/
void Com_Frontend_LoadFastfile_Load(const char *mapname)
{
  const dvar_t *v2; 
  DB_FastfileInfo zoneInfo; 
  char dest[64]; 

  if ( (DB_Zones_GetInUseFlags() & 0x200) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_frontend.cpp", 210, ASSERT_TYPE_ASSERT, "(( DB_Zones_GetInUseFlags() & DB_ZONE_LOAD ) == 0)", (const char *)&queryFormat, "( DB_Zones_GetInUseFlags() & DB_ZONE_LOAD ) == 0") )
    __debugbreak();
  v2 = DVARBOOL_frontEndUseLoadFastfiles;
  if ( !DVARBOOL_frontEndUseLoadFastfiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "frontEndUseLoadFastfiles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    Com_sprintf(dest, 0x40ui64, "%s_load", mapname);
    *(_QWORD *)&zoneInfo.zoneFlags = 512i64;
    zoneInfo.name = dest;
    zoneInfo.priority = 0xFFFF;
    DB_CheckSkipAlwaysLoadedImages();
    DB_PushSkipAlwaysloadedImages();
    DB_LoadFastfiles(&zoneInfo, 1u, 1u, 0);
    DB_PopSkipAlwaysloadedImages();
  }
  CL_Streaming_OnLevelLoad();
}

