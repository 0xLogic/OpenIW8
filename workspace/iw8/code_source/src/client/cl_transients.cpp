/*
==============
CL_Transients_OnUnloadAll
==============
*/

void CL_Transients_OnUnloadAll(void)
{
  ?CL_Transients_OnUnloadAll@@YAXXZ();
}

/*
==============
CL_Transients_GameSystemsTransientSP_UnloadDB
==============
*/

void __fastcall CL_Transients_GameSystemsTransientSP_UnloadDB(const unsigned int worldTransientIndex)
{
  ?CL_Transients_GameSystemsTransientSP_UnloadDB@@YAXI@Z(worldTransientIndex);
}

/*
==============
CL_Transients_OnLevelLoadFinalize
==============
*/

void CL_Transients_OnLevelLoadFinalize(void)
{
  ?CL_Transients_OnLevelLoadFinalize@@YAXXZ();
}

/*
==============
CL_Transients_OnLobbyToGameStart
==============
*/

void CL_Transients_OnLobbyToGameStart(void)
{
  ?CL_Transients_OnLobbyToGameStart@@YAXXZ();
}

/*
==============
CL_Transients_OnGameModeUnload
==============
*/

void CL_Transients_OnGameModeUnload(void)
{
  ?CL_Transients_OnGameModeUnload@@YAXXZ();
}

/*
==============
CL_Transients_OnPlayAgainRestart
==============
*/

void CL_Transients_OnPlayAgainRestart(void)
{
  ?CL_Transients_OnPlayAgainRestart@@YAXXZ();
}

/*
==============
CL_Transients_OnLevelUnload
==============
*/

void CL_Transients_OnLevelUnload(void)
{
  ?CL_Transients_OnLevelUnload@@YAXXZ();
}

/*
==============
CL_Transients_GameSystemsTransientSP_LoadDB
==============
*/

void __fastcall CL_Transients_GameSystemsTransientSP_LoadDB(const unsigned int worldTransientIndex)
{
  ?CL_Transients_GameSystemsTransientSP_LoadDB@@YAXI@Z(worldTransientIndex);
}

/*
==============
CL_Transients_OnLevelLoadBegin
==============
*/

void CL_Transients_OnLevelLoadBegin(void)
{
  ?CL_Transients_OnLevelLoadBegin@@YAXXZ();
}

/*
==============
CL_Transients_OnClosePreUnload
==============
*/

void CL_Transients_OnClosePreUnload(void)
{
  ?CL_Transients_OnClosePreUnload@@YAXXZ();
}

/*
==============
CL_Transients_OnClosePostUnload
==============
*/

void CL_Transients_OnClosePostUnload(void)
{
  ?CL_Transients_OnClosePostUnload@@YAXXZ();
}

/*
==============
CL_Transients_OnPreloadFrontendUnload
==============
*/

void CL_Transients_OnPreloadFrontendUnload(void)
{
  ?CL_Transients_OnPreloadFrontendUnload@@YAXXZ();
}

/*
==============
CL_Transients_GameSystemsTransientSP_LoadDB
==============
*/
void CL_Transients_GameSystemsTransientSP_LoadDB(const unsigned int worldTransientIndex)
{
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients.cpp", 139, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  StaticModels_TransientZoneLoadedDB(worldTransientIndex);
}

/*
==============
CL_Transients_GameSystemsTransientSP_UnloadDB
==============
*/
void CL_Transients_GameSystemsTransientSP_UnloadDB(const unsigned int worldTransientIndex)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients.cpp", 147, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  StaticModels_TransientZoneUnloadingDB(worldTransientIndex);
}

/*
==============
CL_Transients_OnClosePostUnload
==============
*/

void CL_Transients_OnClosePostUnload(void)
{
  CL_TransientsCollisionMP_OnClosePostUnload();
}

/*
==============
CL_Transients_OnClosePreUnload
==============
*/

void CL_Transients_OnClosePreUnload(void)
{
  CL_TransientsCollisionMP_OnClosePreUnload();
}

/*
==============
CL_Transients_OnGameModeUnload
==============
*/
void CL_Transients_OnGameModeUnload(void)
{
  if ( Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients.cpp", 108, ASSERT_TYPE_ASSERT, "(!Sys_IsDatabaseThread())", (const char *)&queryFormat, "!Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) )
    CL_TransientsSP_OnGameModeUnload();
}

/*
==============
CL_Transients_OnLevelLoadBegin
==============
*/
void CL_Transients_OnLevelLoadBegin(void)
{
  if ( Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients.cpp", 45, ASSERT_TYPE_ASSERT, "(!Sys_IsDatabaseThread())", (const char *)&queryFormat, "!Sys_IsDatabaseThread()") )
    __debugbreak();
  CL_TransientsMP_OnLevelLoad();
}

/*
==============
CL_Transients_OnLevelLoadFinalize
==============
*/
void CL_Transients_OnLevelLoadFinalize(void)
{
  unsigned int v0; 
  unsigned int v1; 
  __int64 v2; 

  if ( Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients.cpp", 55, ASSERT_TYPE_ASSERT, "(!Sys_IsDatabaseThread())", (const char *)&queryFormat, "!Sys_IsDatabaseThread()") )
    __debugbreak();
  v0 = DB_Zones_GetInUseFlags();
  v1 = v0;
  if ( (v0 & 0x100) == 0 )
  {
    LODWORD(v2) = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients.cpp", 60, ASSERT_TYPE_ASSERT, "( ( ( inUseFlags & DB_ZONE_GAME ) ) )", "( inUseFlags ) = %u", v2) )
      __debugbreak();
  }
  if ( (v1 & 0x80u) != 0 )
  {
    LODWORD(v2) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients.cpp", 61, ASSERT_TYPE_ASSERT, "( ( ( inUseFlags & DB_ZONE_UI_SCENE ) == 0 ) )", "( inUseFlags ) = %u", v2) )
      __debugbreak();
  }
  if ( (v1 & 0x40) != 0 )
  {
    LODWORD(v2) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients.cpp", 62, ASSERT_TYPE_ASSERT, "( ( ( inUseFlags & DB_ZONE_UI ) == 0 ) )", "( inUseFlags ) = %u", v2) )
      __debugbreak();
  }
  if ( (v1 & 0x100000) != 0 )
  {
    LODWORD(v2) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients.cpp", 63, ASSERT_TYPE_ASSERT, "( ( ( inUseFlags & DB_ZONE_PRELOAD_FRONTEND ) == 0 ) )", "( inUseFlags ) = %u", v2) )
      __debugbreak();
  }
  CL_TransientsCommonMP_OnLevelLoad();
  CL_TransientsWorldMP_OnLevelLoad();
  CL_TransientsCollisionMP_OnLevelLoad();
  CL_TransientsInfilMP_OnLevelLoad();
}

/*
==============
CL_Transients_OnLevelUnload
==============
*/
void CL_Transients_OnLevelUnload(void)
{
  if ( Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients.cpp", 75, ASSERT_TYPE_ASSERT, "(!Sys_IsDatabaseThread())", (const char *)&queryFormat, "!Sys_IsDatabaseThread()") )
    __debugbreak();
  Com_Printf(30, "CL_Transients_OnLevelUnload\n");
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) )
    CL_TransientsSP_OnLevelUnload();
  CL_TransientsWorldMP_OnLevelUnload();
  CL_TransientsCollisionMP_OnLevelUnload();
  CL_TransientsInfilMP_OnLevelUnload();
  CL_TransientsCommonMP_OnLevelUnload();
  CL_TransientsMP_OnLevelUnload();
}

/*
==============
CL_Transients_OnLobbyToGameStart
==============
*/
void CL_Transients_OnLobbyToGameStart(void)
{
  if ( Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients.cpp", 34, ASSERT_TYPE_ASSERT, "(!Sys_IsDatabaseThread())", (const char *)&queryFormat, "!Sys_IsDatabaseThread()") )
    __debugbreak();
  CL_TransientsCommonMP_OnLobbyToGameStart();
  CL_TransientsWorldMP_OnLobbyToGameStart();
  CL_TransientsCollisionMP_OnLobbyToGameStart();
  CL_TransientsInfilMP_OnLobbyToGameStart();
}

/*
==============
CL_Transients_OnPlayAgainRestart
==============
*/
void CL_Transients_OnPlayAgainRestart(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients.cpp", 119, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_TransientsWorldMP_OnPlayAgainRestart();
}

/*
==============
CL_Transients_OnPreloadFrontendUnload
==============
*/
void CL_Transients_OnPreloadFrontendUnload(void)
{
  if ( Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients.cpp", 94, ASSERT_TYPE_ASSERT, "(!Sys_IsDatabaseThread())", (const char *)&queryFormat, "!Sys_IsDatabaseThread()") )
    __debugbreak();
  Com_Printf(30, "CL_Transients_OnPreloadFrontendUnload\n");
  CL_TransientsWorldMP_OnLevelUnload();
  CL_TransientsCollisionMP_OnLevelUnload();
  CL_TransientsInfilMP_OnLevelUnload();
  CL_TransientsCommonMP_OnLevelUnload();
  CL_TransientsMP_OnPreloadFrontendUnload();
}

/*
==============
CL_Transients_OnUnloadAll
==============
*/
void CL_Transients_OnUnloadAll(void)
{
  if ( Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients.cpp", 21, ASSERT_TYPE_ASSERT, "(!Sys_IsDatabaseThread())", (const char *)&queryFormat, "!Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) )
    CL_TransientsSP_OnUnloadAll();
  CL_TransientsMP_OnUnloadAll();
}

