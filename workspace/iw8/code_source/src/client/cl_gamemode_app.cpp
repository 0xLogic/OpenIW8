/*
==============
ClGameModeApplication::AllocateClientApplication
==============
*/

void ClGameModeApplication::AllocateClientApplication(void)
{
  ?AllocateClientApplication@ClGameModeApplication@@SAXXZ();
}

/*
==============
ClGameModeApplication::GetActiveClientApplication
==============
*/

ClGameModeApplication *__fastcall ClGameModeApplication::GetActiveClientApplication()
{
  return ?GetActiveClientApplication@ClGameModeApplication@@SAPEAV1@XZ();
}

/*
==============
ClGameModeApplication::GetActiveApplicationGameMode
==============
*/

GameModeType __fastcall ClGameModeApplication::GetActiveApplicationGameMode()
{
  return ?GetActiveApplicationGameMode@ClGameModeApplication@@SA?AW4GameModeType@@XZ();
}

/*
==============
ClGameModeApplication::ShutdownGameMode
==============
*/

void __fastcall ClGameModeApplication::ShutdownGameMode(ClGameModeApplication *this)
{
  ?ShutdownGameMode@ClGameModeApplication@@MEAAXXZ(this);
}

/*
==============
ClGameModeApplication::HasActiveApplicationGameMode
==============
*/

bool __fastcall ClGameModeApplication::HasActiveApplicationGameMode()
{
  return ?HasActiveApplicationGameMode@ClGameModeApplication@@SA_NXZ();
}

/*
==============
ClGameModeApplication::~ClGameModeApplication
==============
*/

void __fastcall ClGameModeApplication::~ClGameModeApplication(ClGameModeApplication *this)
{
  ??1ClGameModeApplication@@UEAA@XZ(this);
}

/*
==============
ClGameModeApplication::FreeClientApplication
==============
*/

void ClGameModeApplication::FreeClientApplication(void)
{
  ?FreeClientApplication@ClGameModeApplication@@SAXXZ();
}

/*
==============
ClGameModeApplication::InitGameMode
==============
*/

void __fastcall ClGameModeApplication::InitGameMode(ClGameModeApplication *this)
{
  ?InitGameMode@ClGameModeApplication@@MEAAXXZ(this);
}

/*
==============
ClGameModeApplication::~ClGameModeApplication
==============
*/
void ClGameModeApplication::~ClGameModeApplication(ClGameModeApplication *this)
{
  this->__vftable = (ClGameModeApplication_vtbl *)&ClGameModeApplication::`vftable';
}

/*
==============
ClGameModeApplication::AllocateClientApplication
==============
*/
void ClGameModeApplication::AllocateClientApplication(void)
{
  int ActiveGameMode; 
  char *v1; 
  void **v2; 

  if ( (_BYTE)ClGameModeApplication::ms_allocType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamemode_app.cpp", 111, ASSERT_TYPE_ASSERT, "(ms_allocType == GameModeType::NONE)", "%s\n\tGame mode application must not be allocated", "ms_allocType == GameModeType::NONE") )
    __debugbreak();
  if ( ClGameModeApplication::ms_gameModeClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamemode_app.cpp", 112, ASSERT_TYPE_ASSERT, "(ms_gameModeClient == 0)", (const char *)&queryFormat, "ms_gameModeClient == NULL") )
    __debugbreak();
  ActiveGameMode = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode == 1 )
  {
    v2 = &ClGameModeApplicationSP::`vftable';
    goto LABEL_18;
  }
  if ( ActiveGameMode == 2 || ActiveGameMode == 3 )
  {
    v2 = &ClGameModeApplicationMP::`vftable';
LABEL_18:
    v1 = s_appBufferClient;
    *(_QWORD *)s_appBufferClient = v2;
    ClGameModeApplication::ms_gameModeClient = (ClGameModeApplication *)s_appBufferClient;
    goto LABEL_19;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamemode_app.cpp", 135, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected game mode value") )
    __debugbreak();
  v1 = (char *)ClGameModeApplication::ms_gameModeClient;
  if ( !ClGameModeApplication::ms_gameModeClient )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamemode_app.cpp", 138, ASSERT_TYPE_ASSERT, "(ms_gameModeClient)", (const char *)&queryFormat, "ms_gameModeClient") )
      __debugbreak();
    v1 = (char *)ClGameModeApplication::ms_gameModeClient;
  }
LABEL_19:
  (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 224i64))(v1);
  ClGameModeApplication::ms_gameModeClient->InitAllGameModeClients(ClGameModeApplication::ms_gameModeClient);
  LOBYTE(ClGameModeApplication::ms_allocType) = ActiveGameMode;
}

/*
==============
ClGameModeApplication::FreeClientApplication
==============
*/
void ClGameModeApplication::FreeClientApplication(void)
{
  if ( ClGameModeApplication::ms_gameModeClient )
  {
    ClGameModeApplication::ms_gameModeClient->ShutdownGameMode(ClGameModeApplication::ms_gameModeClient);
    ClGameModeApplication::ms_gameModeClient->ShutdownAllGameModeClients(ClGameModeApplication::ms_gameModeClient);
    LOBYTE(ClGameModeApplication::ms_allocType) = 0;
    ((void (__fastcall *)(ClGameModeApplication *, _QWORD))ClGameModeApplication::ms_gameModeClient->~ClGameModeApplication)(ClGameModeApplication::ms_gameModeClient, 0i64);
    ClGameModeApplication::ms_gameModeClient = NULL;
  }
  else if ( (_BYTE)ClGameModeApplication::ms_allocType != (_BYTE)ClGameModeApplication::ms_gameModeClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamemode_app.cpp", 152, ASSERT_TYPE_ASSERT, "(ms_allocType == GameModeType::NONE)", "%s\n\tFreeClientApplication -- Game mode should not be allocated for client application", "ms_allocType == GameModeType::NONE") )
  {
    __debugbreak();
  }
}

/*
==============
ClGameModeApplication::GetActiveApplicationGameMode
==============
*/
__int64 ClGameModeApplication::GetActiveApplicationGameMode()
{
  return (unsigned __int8)ClGameModeApplication::ms_allocType;
}

/*
==============
ClGameModeApplication::GetActiveClientApplication
==============
*/
ClGameModeApplication *ClGameModeApplication::GetActiveClientApplication()
{
  ClGameModeApplication *result; 

  result = ClGameModeApplication::ms_gameModeClient;
  if ( !ClGameModeApplication::ms_gameModeClient )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamemode_app.cpp", 167, ASSERT_TYPE_ASSERT, "(ms_gameModeClient)", "%s\n\tGetActiveClientApplication -- Game mode not allocated for client application", "ms_gameModeClient") )
      __debugbreak();
    return ClGameModeApplication::ms_gameModeClient;
  }
  return result;
}

/*
==============
ClGameModeApplication::HasActiveApplicationGameMode
==============
*/
bool ClGameModeApplication::HasActiveApplicationGameMode()
{
  return (_BYTE)ClGameModeApplication::ms_allocType != NONE;
}

/*
==============
ClGameModeApplication::InitGameMode
==============
*/
void ClGameModeApplication::InitGameMode(ClGameModeApplication *this)
{
  unsigned __int8 ActiveGameMode; 

  R_RegisterGameDvars();
  LUI_CoD_RegisterGameDvars();
  CL_Main_RegisterGameDvars();
  CG_Main_RegisterGameDvars();
  R_UpdateDvarGameModeDefaults();
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  CL_Main_ReInitDevGUI((GameModeType)ActiveGameMode);
  DB_MyChangesMainThreadInit();
  CL_Streaming_Init();
}

/*
==============
ClGameModeApplication::ShutdownGameMode
==============
*/
void ClGameModeApplication::ShutdownGameMode(ClGameModeApplication *this)
{
  if ( LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamemode_app.cpp", 81, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients == 0)", "%s\n\tWe are freeing the game mode application but there is still allocated game mode memory", "cl_maxLocalClients == 0") )
    __debugbreak();
  CL_Main_ReInitDevGUI(NONE);
  R_UnregisterGameDvars();
  LUI_CoD_UnregisterGameDvars();
  Cl_Main_UnregisterGameDvars();
  CG_Main_UnregisterGameDvars();
  CL_Streaming_Shutdown();
}

