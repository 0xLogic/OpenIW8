/*
==============
SvGameModeApplication::SyncServerApplicationShutdown
==============
*/

void SvGameModeApplication::SyncServerApplicationShutdown(void)
{
  ?SyncServerApplicationShutdown@SvGameModeApplication@@SAXXZ();
}

/*
==============
SvGameModeApplication::AllocateServerApplication
==============
*/

void SvGameModeApplication::AllocateServerApplication(void)
{
  ?AllocateServerApplication@SvGameModeApplication@@SAXXZ();
}

/*
==============
SvGameModeApplication::~SvGameModeApplication
==============
*/

void __fastcall SvGameModeApplication::~SvGameModeApplication(SvGameModeApplication *this)
{
  ??1SvGameModeApplication@@UEAA@XZ(this);
}

/*
==============
SvGameModeApplication::WakeServerApplication
==============
*/

void SvGameModeApplication::WakeServerApplication(void)
{
  ?WakeServerApplication@SvGameModeApplication@@SAXXZ();
}

/*
==============
SvGameModeApplication::FreeServerApplication
==============
*/

void SvGameModeApplication::FreeServerApplication(void)
{
  ?FreeServerApplication@SvGameModeApplication@@SAXXZ();
}

/*
==============
SvGameModeApplication::SyncServerApplicationCreation
==============
*/

void SvGameModeApplication::SyncServerApplicationCreation(void)
{
  ?SyncServerApplicationCreation@SvGameModeApplication@@SAXXZ();
}

/*
==============
SvGameModeApplication::SvGameModeApplication
==============
*/

void __fastcall SvGameModeApplication::SvGameModeApplication(SvGameModeApplication *this)
{
  ??0SvGameModeApplication@@QEAA@XZ(this);
}

/*
==============
SvGameModeApplication::HasActiveServerApplication
==============
*/

bool __fastcall SvGameModeApplication::HasActiveServerApplication()
{
  return ?HasActiveServerApplication@SvGameModeApplication@@SA_NXZ();
}

/*
==============
SvGameModeApplication::GetActiveServerApplication
==============
*/

SvGameModeApplication *__fastcall SvGameModeApplication::GetActiveServerApplication()
{
  return ?GetActiveServerApplication@SvGameModeApplication@@SAPEAV1@XZ();
}

/*
==============
SvGameModeApplication::ShutdownServerApplication
==============
*/

void SvGameModeApplication::ShutdownServerApplication(void)
{
  ?ShutdownServerApplication@SvGameModeApplication@@SAXXZ();
}

/*
==============
SvGameModeApplication::SvGameModeApplication
==============
*/
void SvGameModeApplication::SvGameModeApplication(SvGameModeApplication *this)
{
  this->__vftable = (SvGameModeApplication_vtbl *)&SvGameModeApplication::`vftable';
  *(_QWORD *)&this->m_svLevelTime = 0i64;
  this->m_frameDuration = 0;
  this->m_restartServerThread = 0;
}

/*
==============
SvGameModeApplication::~SvGameModeApplication
==============
*/
void SvGameModeApplication::~SvGameModeApplication(SvGameModeApplication *this)
{
  this->__vftable = (SvGameModeApplication_vtbl *)&SvGameModeApplication::`vftable';
}

/*
==============
SvGameModeApplication::AllocateServerApplication
==============
*/
void SvGameModeApplication::AllocateServerApplication(void)
{
  int ActiveGameMode; 
  SvGameModeApplication *v1; 

  if ( (_BYTE)SvGameModeApplication::ms_allocType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 51, ASSERT_TYPE_ASSERT, "(ms_allocType == GameModeType::NONE)", "%s\n\tGame mode must not be allocated", "ms_allocType == GameModeType::NONE") )
    __debugbreak();
  if ( SvGameModeApplication::ms_gameModeServer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 52, ASSERT_TYPE_ASSERT, "( ms_gameModeServer == 0 )", (const char *)&queryFormat, "ms_gameModeServer == NULL") )
    __debugbreak();
  if ( !SvGameModeApplication::ms_applicationActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 55, ASSERT_TYPE_ASSERT, "( ms_applicationActive )", (const char *)&queryFormat, "ms_applicationActive") )
    __debugbreak();
  ActiveGameMode = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode == 1 )
  {
    SvGameModeAppSP::SvGameModeAppSP((SvGameModeAppSP *)&s_appBufferServer);
    goto LABEL_17;
  }
  if ( ActiveGameMode == 2 || ActiveGameMode == 3 )
  {
    SvGameModeAppMP::SvGameModeAppMP(&s_appBufferServer);
LABEL_17:
    SvGameModeApplication::ms_gameModeServer = v1;
    goto LABEL_18;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 77, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected game mode value") )
    __debugbreak();
LABEL_18:
  if ( !SvGameModeApplication::ms_gameModeServer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 80, ASSERT_TYPE_ASSERT, "(ms_gameModeServer)", (const char *)&queryFormat, "ms_gameModeServer") )
    __debugbreak();
  SvGameModeApplication::ms_gameModeServer->InitGameMode(SvGameModeApplication::ms_gameModeServer);
  LOBYTE(SvGameModeApplication::ms_allocType) = ActiveGameMode;
}

/*
==============
SvGameModeApplication::FreeServerApplication
==============
*/
void SvGameModeApplication::FreeServerApplication(void)
{
  SvGameModeApplication *v0; 

  if ( (_BYTE)SvGameModeApplication::ms_allocType )
  {
    if ( SvGameModeApplication::ms_applicationActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 97, ASSERT_TYPE_ASSERT, "( !ms_applicationActive )", (const char *)&queryFormat, "!ms_applicationActive") )
      __debugbreak();
    v0 = SvGameModeApplication::ms_gameModeServer;
    LOBYTE(SvGameModeApplication::ms_allocType) = 0;
    if ( !SvGameModeApplication::ms_gameModeServer )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", (_DWORD)SvGameModeApplication::ms_gameModeServer + 103, ASSERT_TYPE_ASSERT, "(ms_gameModeServer)", "%s\n\tGame mode not allocated", "ms_gameModeServer") )
        __debugbreak();
      v0 = SvGameModeApplication::ms_gameModeServer;
    }
    v0->ShutdownGameMode(v0);
    ((void (__fastcall *)(SvGameModeApplication *, _QWORD))SvGameModeApplication::ms_gameModeServer->~SvGameModeApplication)(SvGameModeApplication::ms_gameModeServer, 0i64);
    SvGameModeApplication::ms_gameModeServer = NULL;
  }
  else if ( SvGameModeApplication::ms_gameModeServer )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 92, ASSERT_TYPE_ASSERT, "(ms_gameModeServer == 0)", "%s\n\tGame mode should not be allocated", "ms_gameModeServer == NULL") )
      __debugbreak();
  }
}

/*
==============
SvGameModeApplication::GetActiveServerApplication
==============
*/
SvGameModeApplication *SvGameModeApplication::GetActiveServerApplication()
{
  SvGameModeApplication *result; 

  result = SvGameModeApplication::ms_gameModeServer;
  if ( !SvGameModeApplication::ms_gameModeServer )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 235, ASSERT_TYPE_ASSERT, "(ms_gameModeServer)", "%s\n\tGame mode not allocated", "ms_gameModeServer") )
      __debugbreak();
    return SvGameModeApplication::ms_gameModeServer;
  }
  return result;
}

/*
==============
SvGameModeApplication::HasActiveServerApplication
==============
*/
bool SvGameModeApplication::HasActiveServerApplication()
{
  return (_BYTE)SvGameModeApplication::ms_allocType != NONE;
}

/*
==============
SvGameModeApplication::ShutdownServerApplication
==============
*/
void SvGameModeApplication::ShutdownServerApplication(void)
{
  if ( (_BYTE)SvGameModeApplication::ms_allocType )
  {
    if ( !SvGameModeApplication::ms_gameModeServer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 135, ASSERT_TYPE_ASSERT, "(ms_gameModeServer)", "%s\n\tGame mode not allocated", "ms_gameModeServer") )
      __debugbreak();
    SvGameModeApplication::ms_gameModeServer->m_restartServerThread = 1;
    SvGameModeApplication::ms_applicationActive = 0;
  }
  else if ( SvGameModeApplication::ms_gameModeServer )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 128, ASSERT_TYPE_ASSERT, "(ms_gameModeServer == 0)", "%s\n\tGame mode should not be allocated", "ms_gameModeServer == NULL") )
      __debugbreak();
  }
}

/*
==============
SvGameModeApplication::SyncServerApplicationCreation
==============
*/

void __fastcall SvGameModeApplication::SyncServerApplicationCreation(double _XMM0_8)
{
  char ActiveGameMode; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 146, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  __rdtsc();
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( !ActiveGameMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 154, ASSERT_TYPE_ASSERT, "(syncToMode != GameModeType::NONE)", "%s\n\tMust not be called unless we have an active game mode", "syncToMode != GameModeType::NONE") )
    __debugbreak();
  if ( !SvGameModeApplication::ms_applicationActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 157, ASSERT_TYPE_ASSERT, "(ms_applicationActive)", "%s\n\tMust not be called unless we're activating the application", "ms_applicationActive") )
    __debugbreak();
  while ( !SvGameModeApplication::ms_gameModeServer || (_BYTE)SvGameModeApplication::ms_allocType != ActiveGameMode )
  {
    if ( ActiveGameMode != (unsigned __int8)Com_GameMode_GetActiveGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 166, ASSERT_TYPE_ASSERT, "(syncToMode == Com_GameMode_GetActiveGameMode())", "%s\n\tGame mode changed while we were syncing, this is not supported", "syncToMode == Com_GameMode_GetActiveGameMode()") )
      __debugbreak();
    Sys_Sleep(1);
  }
  __rdtsc();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vcvtsd2ss xmm2, xmm1, xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmovq   r8, xmm2
  }
  Com_Printf(16, "SyncServerApplicationCreation took %f ms\n", *(double *)&_XMM2);
}

/*
==============
SvGameModeApplication::SyncServerApplicationShutdown
==============
*/

void __fastcall SvGameModeApplication::SyncServerApplicationShutdown(double _XMM0_8)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 190, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  __rdtsc();
  if ( SvGameModeApplication::ms_applicationActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 197, ASSERT_TYPE_ASSERT, "(!ms_applicationActive)", "%s\n\tMust not be called unless we're de-activating the application", "!ms_applicationActive") )
    __debugbreak();
  while ( SvGameModeApplication::ms_gameModeServer || (_BYTE)SvGameModeApplication::ms_allocType )
    Sys_Sleep(1);
  __rdtsc();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vcvtsd2ss xmm2, xmm1, xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmovq   r8, xmm2
  }
  Com_Printf(16, "SyncServerApplicationShutdown took %f ms\n", *(double *)&_XMM2);
}

/*
==============
SvGameModeApplication::WakeServerApplication
==============
*/
void SvGameModeApplication::WakeServerApplication(void)
{
  if ( (_BYTE)SvGameModeApplication::ms_allocType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 113, ASSERT_TYPE_ASSERT, "(ms_allocType == GameModeType::NONE)", "%s\n\tGame mode must not be allocated", "ms_allocType == GameModeType::NONE") )
    __debugbreak();
  if ( !(unsigned __int8)Com_GameMode_GetActiveGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 114, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() != GameModeType::NONE)", (const char *)&queryFormat, "Com_GameMode_GetActiveGameMode() != GameModeType::NONE") )
    __debugbreak();
  if ( SvGameModeApplication::ms_gameModeServer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.cpp", 115, ASSERT_TYPE_ASSERT, "(ms_gameModeServer == 0)", (const char *)&queryFormat, "ms_gameModeServer == NULL") )
    __debugbreak();
  SvGameModeApplication::ms_applicationActive = 1;
}

