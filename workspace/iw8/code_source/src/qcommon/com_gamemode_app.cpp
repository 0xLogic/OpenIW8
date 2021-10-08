/*
==============
ComGameModeApplication::FinalizeCommonShutdown
==============
*/

void __fastcall ComGameModeApplication::FinalizeCommonShutdown(ComGameModeApplication *this)
{
  ?FinalizeCommonShutdown@ComGameModeApplication@@IEBAXXZ(this);
}

/*
==============
ComGameModeApplication::AllocateComApplication
==============
*/

void ComGameModeApplication::AllocateComApplication(void)
{
  ?AllocateComApplication@ComGameModeApplication@@SAXXZ();
}

/*
==============
ComGameModeApplication::BeginCommonInitialization
==============
*/

void __fastcall ComGameModeApplication::BeginCommonInitialization(ComGameModeApplication *this)
{
  ?BeginCommonInitialization@ComGameModeApplication@@IEBAXXZ(this);
}

/*
==============
ComGameModeApplication::~ComGameModeApplication
==============
*/

void __fastcall ComGameModeApplication::~ComGameModeApplication(ComGameModeApplication *this)
{
  ??1ComGameModeApplication@@UEAA@XZ(this);
}

/*
==============
ComGameModeApplication::FreeComApplication
==============
*/

void ComGameModeApplication::FreeComApplication(void)
{
  ?FreeComApplication@ComGameModeApplication@@SAXXZ();
}

/*
==============
ComGameModeApplication::FinalizeCommonInitialization
==============
*/

void __fastcall ComGameModeApplication::FinalizeCommonInitialization(ComGameModeApplication *this)
{
  ?FinalizeCommonInitialization@ComGameModeApplication@@IEBAXXZ(this);
}

/*
==============
ComGameModeApplication::GetActiveApplication
==============
*/

ComGameModeApplication *__fastcall ComGameModeApplication::GetActiveApplication()
{
  return ?GetActiveApplication@ComGameModeApplication@@SAPEAV1@XZ();
}

/*
==============
ComGameModeApplication::~ComGameModeApplication
==============
*/
void ComGameModeApplication::~ComGameModeApplication(ComGameModeApplication *this)
{
  this->__vftable = (ComGameModeApplication_vtbl *)&ComGameModeApplication::`vftable';
}

/*
==============
ComGameModeApplication::AllocateComApplication
==============
*/
void ComGameModeApplication::AllocateComApplication(void)
{
  int ActiveGameMode; 
  ComGameModeApplication *v1; 

  if ( (_BYTE)ComGameModeApplication::ms_allocType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_app.cpp", 83, ASSERT_TYPE_ASSERT, "(ms_allocType == GameModeType::NONE)", "%s\n\tGame mode application must not be allocated", "ms_allocType == GameModeType::NONE") )
    __debugbreak();
  if ( ComGameModeApplication::ms_gameModeCommon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_app.cpp", 84, ASSERT_TYPE_ASSERT, "(ms_gameModeCommon == 0)", (const char *)&queryFormat, "ms_gameModeCommon == NULL") )
    __debugbreak();
  ActiveGameMode = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode == 1 )
  {
    ComGameModeAppSP::ComGameModeAppSP((ComGameModeAppSP *)&s_appBufferCommon);
    goto LABEL_14;
  }
  if ( ActiveGameMode == 2 || ActiveGameMode == 3 )
  {
    ComGameModeAppMP::ComGameModeAppMP(&s_appBufferCommon);
LABEL_14:
    ComGameModeApplication::ms_gameModeCommon = v1;
    goto LABEL_15;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_app.cpp", 105, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected game mode value") )
    __debugbreak();
LABEL_15:
  if ( !ComGameModeApplication::ms_gameModeCommon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_app.cpp", 108, ASSERT_TYPE_ASSERT, "(ms_gameModeCommon)", (const char *)&queryFormat, "ms_gameModeCommon") )
    __debugbreak();
  ComGameModeApplication::ms_gameModeCommon->InitializeGameMode(ComGameModeApplication::ms_gameModeCommon);
  LOBYTE(ComGameModeApplication::ms_allocType) = ActiveGameMode;
}

/*
==============
ComGameModeApplication::BeginCommonInitialization
==============
*/
void ComGameModeApplication::BeginCommonInitialization(ComGameModeApplication *this)
{
  unsigned __int8 ActiveGameMode; 
  unsigned __int8 v2; 
  unsigned __int8 v3; 

  Com_Printf(16, "-- ComGameModeApplication Initialization --\n");
  Com_GameInfo_Init();
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  Com_ExecGameModeConfigs((GameModeType)ActiveGameMode);
  v2 = Com_GameMode_GetActiveGameMode();
  BgDynamicLimits::InitGameModeValues((GameModeType)v2);
  BG_Omnvar_ClearTables();
  v3 = Com_GameMode_GetActiveGameMode();
  BG_GameStateInfo_InitGameMode((GameModeType)v3);
}

/*
==============
ComGameModeApplication::FinalizeCommonInitialization
==============
*/
void ComGameModeApplication::FinalizeCommonInitialization(ComGameModeApplication *this)
{
  BG_EntityState_UnitTests();
  Com_Printf(16, "-- ComGameModeApplication Initialization Complete --\n");
}

/*
==============
ComGameModeApplication::FinalizeCommonShutdown
==============
*/
void ComGameModeApplication::FinalizeCommonShutdown(ComGameModeApplication *this)
{
  Scr_ShutdownStringConstants();
  Com_GameInfo_Clear();
  BgDynamicLimits::Clear();
  ComCharacterLimits::SetModeLimits(0);
  ComCharacterLimits::ClearGameLimits();
  Com_Printf(16, "-- ComGameModeApplication Shutdown Complete --\n");
}

/*
==============
ComGameModeApplication::FreeComApplication
==============
*/
void ComGameModeApplication::FreeComApplication(void)
{
  ComGameModeApplication *v0; 

  if ( (_BYTE)ComGameModeApplication::ms_allocType )
  {
    v0 = ComGameModeApplication::ms_gameModeCommon;
    if ( !ComGameModeApplication::ms_gameModeCommon )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_app.cpp", (_DWORD)ComGameModeApplication::ms_gameModeCommon + 125, ASSERT_TYPE_ASSERT, "(ms_gameModeCommon)", "%s\n\tFreeComApplication -- Game mode not allocated for application", "ms_gameModeCommon") )
        __debugbreak();
      v0 = ComGameModeApplication::ms_gameModeCommon;
    }
    LOBYTE(ComGameModeApplication::ms_allocType) = 0;
    v0->ShutdownGameMode(v0);
    ((void (__fastcall *)(ComGameModeApplication *, _QWORD))ComGameModeApplication::ms_gameModeCommon->~ComGameModeApplication)(ComGameModeApplication::ms_gameModeCommon, 0i64);
    ComGameModeApplication::ms_gameModeCommon = NULL;
  }
  else if ( ComGameModeApplication::ms_gameModeCommon )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_app.cpp", 121, ASSERT_TYPE_ASSERT, "(ms_gameModeCommon == 0)", "%s\n\tFreeComApplication -- Game mode should not be allocated for application", "ms_gameModeCommon == NULL") )
      __debugbreak();
  }
}

/*
==============
ComGameModeApplication::GetActiveApplication
==============
*/
ComGameModeApplication *ComGameModeApplication::GetActiveApplication()
{
  ComGameModeApplication *result; 

  result = ComGameModeApplication::ms_gameModeCommon;
  if ( !ComGameModeApplication::ms_gameModeCommon )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_app.cpp", 139, ASSERT_TYPE_ASSERT, "(ms_gameModeCommon)", "%s\n\tGetActiveApplication -- Game mode not allocated for application", "ms_gameModeCommon") )
      __debugbreak();
    return ComGameModeApplication::ms_gameModeCommon;
  }
  return result;
}

