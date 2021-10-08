/*
==============
SV_GetConfigstringConst
==============
*/

scr_string_t __fastcall SV_GetConfigstringConst(unsigned int index)
{
  return ?SV_GetConfigstringConst@@YA?AW4scr_string_t@@I@Z(index);
}

/*
==============
SV_Main_RestrictServerAllowedDvarFlags
==============
*/

void __fastcall SV_Main_RestrictServerAllowedDvarFlags(const bool isFrontendServer)
{
  ?SV_Main_RestrictServerAllowedDvarFlags@@YAX_N@Z(isFrontendServer);
}

/*
==============
SV_Main_GetServerThreadOwnsGame
==============
*/

int __fastcall SV_Main_GetServerThreadOwnsGame()
{
  return ?SV_Main_GetServerThreadOwnsGame@@YAHXZ();
}

/*
==============
SV_GetConfigstring
==============
*/

void __fastcall SV_GetConfigstring(unsigned int index, char *buffer, int bufferSize)
{
  ?SV_GetConfigstring@@YAXIPEADH@Z(index, buffer, bufferSize);
}

/*
==============
SV_Main_InServerFrame
==============
*/

int __fastcall SV_Main_InServerFrame()
{
  return ?SV_Main_InServerFrame@@YAHXZ();
}

/*
==============
SV_Main_RestrictClientAllowedDvarFlags
==============
*/

void __fastcall SV_Main_RestrictClientAllowedDvarFlags(const bool isFrontendServer)
{
  ?SV_Main_RestrictClientAllowedDvarFlags@@YAX_N@Z(isFrontendServer);
}

/*
==============
SV_SetConfigstring
==============
*/

void __fastcall SV_SetConfigstring(unsigned int index, const char *val)
{
  ?SV_SetConfigstring@@YAXIPEBD@Z(index, val);
}

/*
==============
SvGameGlobals::ClearConfigStrings
==============
*/

void __fastcall SvGameGlobals::ClearConfigStrings(SvGameGlobals *this)
{
  ?ClearConfigStrings@SvGameGlobals@@IEAAXXZ(this);
}

/*
==============
SV_Main_InitServerThread
==============
*/

void SV_Main_InitServerThread(void)
{
  ?SV_Main_InitServerThread@@YAXXZ();
}

/*
==============
SV_Main_UpdateConstConfigString
==============
*/

void __fastcall SV_Main_UpdateConstConfigString(const unsigned int index, const char *val)
{
  ?SV_Main_UpdateConstConfigString@@YAXIPEBD@Z(index, val);
}

/*
==============
SvGameGlobals::~SvGameGlobals
==============
*/

void __fastcall SvGameGlobals::~SvGameGlobals(SvGameGlobals *this)
{
  ??1SvGameGlobals@@IEAA@XZ(this);
}

/*
==============
SV_GetProfileTimes
==============
*/

const volatile ServerProfileTimes *__fastcall SV_GetProfileTimes()
{
  return ?SV_GetProfileTimes@@YAPEDUServerProfileTimes@@XZ();
}

/*
==============
SV_WaitServer
==============
*/

void SV_WaitServer(void)
{
  ?SV_WaitServer@@YAXXZ();
}

/*
==============
SV_ClientFrameRateFix
==============
*/

int __fastcall SV_ClientFrameRateFix(int msec_base)
{
  return ?SV_ClientFrameRateFix@@YAHH@Z(msec_base);
}

/*
==============
SvGameGlobals::InitConfigStrings
==============
*/

void __fastcall SvGameGlobals::InitConfigStrings(SvGameGlobals *this)
{
  ?InitConfigStrings@SvGameGlobals@@QEAAXXZ(this);
}

/*
==============
SvGameGlobals::~SvGameGlobals
==============
*/
void SvGameGlobals::~SvGameGlobals(SvGameGlobals *this)
{
  int v2; 
  __int64 v3; 

  if ( SvGameGlobals::ms_svGameGlobals != this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 88, ASSERT_TYPE_ASSERT, "(ms_svGameGlobals == this)", "%s\n\tDeleting ClStrings that is not the singleton", "ms_svGameGlobals == this") )
    __debugbreak();
  v2 = 0;
  if ( this->m_configstringsCount > 0 )
  {
    v3 = 0i64;
    do
    {
      if ( this->configstrings[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 92, ASSERT_TYPE_ASSERT, "(this->configstrings[csIndex] == ( static_cast< scr_string_t >( 0 ) ))", "%s\n\tConfig string leak", "this->configstrings[csIndex] == NULL_SCR_STRING") )
        __debugbreak();
      ++v2;
      ++v3;
    }
    while ( v2 < this->m_configstringsCount );
  }
  if ( this->emptyConfigString )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 95, ASSERT_TYPE_ASSERT, "(this->emptyConfigString == ( static_cast< scr_string_t >( 0 ) ))", "%s\n\tConfig string leak", "this->emptyConfigString == NULL_SCR_STRING") )
      __debugbreak();
  }
}

/*
==============
SvGameGlobals::ClearConfigStrings
==============
*/
void SvGameGlobals::ClearConfigStrings(SvGameGlobals *this)
{
  int v2; 
  __int64 v3; 
  scr_string_t *configstrings; 
  scr_string_t v5; 

  if ( !scr_const._ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 66, ASSERT_TYPE_ASSERT, "( scr_const._ != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "scr_const._ != NULL_SCR_STRING") )
    __debugbreak();
  v2 = 0;
  if ( this->m_configstringsCount > 0 )
  {
    v3 = 0i64;
    do
    {
      configstrings = this->configstrings;
      v5 = configstrings[v3];
      if ( v5 )
      {
        if ( v5 != scr_const._ )
        {
          SL_RemoveRefToString(v5);
          configstrings = this->configstrings;
        }
        configstrings[v3] = 0;
      }
      ++v2;
      ++v3;
    }
    while ( v2 < this->m_configstringsCount );
  }
  this->emptyConfigString = 0;
}

/*
==============
SvGameGlobals::InitConfigStrings
==============
*/
void SvGameGlobals::InitConfigStrings(SvGameGlobals *this)
{
  int v2; 
  __int64 v3; 

  if ( this->emptyConfigString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 50, ASSERT_TYPE_ASSERT, "(this->emptyConfigString == ( static_cast< scr_string_t >( 0 ) ))", "%s\n\tConfig string leak", "this->emptyConfigString == NULL_SCR_STRING") )
    __debugbreak();
  if ( !scr_const._ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 51, ASSERT_TYPE_ASSERT, "( scr_const._ != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "scr_const._ != NULL_SCR_STRING") )
    __debugbreak();
  v2 = 0;
  this->emptyConfigString = scr_const._;
  if ( this->m_configstringsCount > 0 )
  {
    v3 = 0i64;
    do
    {
      if ( this->configstrings[v3] )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 58, ASSERT_TYPE_ASSERT, "(this->configstrings[csIndex] == ( static_cast< scr_string_t >( 0 ) ))", "%s\n\tConfig string leak", "this->configstrings[csIndex] == NULL_SCR_STRING") )
          __debugbreak();
      }
      ++v2;
      this->configstrings[v3++] = scr_const._;
    }
    while ( v2 < this->m_configstringsCount );
  }
}

/*
==============
SV_ClientFrameRateFix
==============
*/
__int64 SV_ClientFrameRateFix(int msec_base)
{
  SvGameModeApplication *ActiveServerApplication; 

  if ( !Com_IsAnyLocalServerRunning() )
    return (unsigned int)msec_base;
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  return ((__int64 (__fastcall *)(SvGameModeApplication *, _QWORD))ActiveServerApplication->ClientFrameRateFix)(ActiveServerApplication, (unsigned int)msec_base);
}

/*
==============
SV_GameMode_CheckForActivation
==============
*/
bool SV_GameMode_CheckForActivation(void *__formal)
{
  return SvGameModeApplication::ms_applicationActive && (unsigned __int8)Com_GameMode_GetActiveGameMode();
}

/*
==============
SV_GetConfigstring
==============
*/
void SV_GetConfigstring(unsigned int index, char *buffer, int bufferSize)
{
  unsigned __int64 v3; 
  __int64 v5; 
  SvGameGlobals *SvGameGlobalsCommon; 
  const char *v7; 
  __int64 v8; 

  v3 = bufferSize;
  v5 = index;
  if ( bufferSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 396, ASSERT_TYPE_ASSERT, "( ( bufferSize > 0 ) )", "( bufferSize ) = %i", bufferSize) )
    __debugbreak();
  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( (unsigned int)v5 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
  {
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 397, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < BgDynamicLimits::GetMaxConfigStrings() ) )", "( index ) = %i", v8) )
      __debugbreak();
  }
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  if ( !SvGameGlobalsCommon->configstrings[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 401, ASSERT_TYPE_ASSERT, "(sv->configstrings[index] != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "sv->configstrings[index] != NULL_SCR_STRING") )
    __debugbreak();
  v7 = SL_ConvertToString(SvGameGlobalsCommon->configstrings[v5]);
  Core_strcpy(buffer, v3, v7);
}

/*
==============
SV_GetConfigstringConst
==============
*/
__int64 SV_GetConfigstringConst(unsigned int index)
{
  __int64 v1; 
  SvGameGlobals *SvGameGlobalsCommon; 
  scr_string_t *configstrings; 
  __int64 v5; 
  unsigned int m_maxConfigStrings; 

  v1 = index;
  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( (unsigned int)v1 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
  {
    if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
      __debugbreak();
    m_maxConfigStrings = BgDynamicLimits::ms_data.m_maxConfigStrings;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 385, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( BgDynamicLimits::GetMaxConfigStrings() )", "index doesn't index BgDynamicLimits::GetMaxConfigStrings()\n\t%i not in [0, %i)", v5, m_maxConfigStrings) )
      __debugbreak();
  }
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  configstrings = SvGameGlobalsCommon->configstrings;
  if ( configstrings[v1] )
    return (unsigned int)configstrings[v1];
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 389, ASSERT_TYPE_ASSERT, "( sv->configstrings[index] != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "sv->configstrings[index] != NULL_SCR_STRING") )
    __debugbreak();
  return (unsigned int)SvGameGlobalsCommon->configstrings[v1];
}

/*
==============
SV_GetProfileTimes
==============
*/
volatile ServerProfileTimes *SV_GetProfileTimes()
{
  return &SvGameGlobals::GetSvGameGlobalsCommon()->profile;
}

/*
==============
SV_Main_GetServerThreadOwnsGame
==============
*/
_BOOL8 SV_Main_GetServerThreadOwnsGame()
{
  SvGameModeApplication *ActiveServerApplication; 

  if ( !SvGameModeApplication::HasActiveServerApplication() )
    return 0i64;
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  return ActiveServerApplication->GetServerThreadOwnsGame(ActiveServerApplication);
}

/*
==============
SV_Main_InServerFrame
==============
*/
__int64 SV_Main_InServerFrame()
{
  return (unsigned int)com_inServerFrame;
}

/*
==============
SV_Main_InitServerThread
==============
*/
void SV_Main_InitServerThread(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 284, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !Sys_SpawnServerThread(SV_ServerThreadCommon) )
    Sys_Error((const ObfuscateErrorText)&stru_1440BB9F0);
}

/*
==============
SV_Main_RestrictClientAllowedDvarFlags
==============
*/
void SV_Main_RestrictClientAllowedDvarFlags(const bool isFrontendServer)
{
  __int64 v2; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 140, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( isFrontendServer )
    *(_DWORD *)(v2 + 1052) = -1;
  else
    *(_DWORD *)(v2 + 1052) = -529545;
}

/*
==============
SV_Main_RestrictServerAllowedDvarFlags
==============
*/
void SV_Main_RestrictServerAllowedDvarFlags(const bool isFrontendServer)
{
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 130, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) = -4609;
}

/*
==============
SV_Main_UpdateConstConfigString
==============
*/
void SV_Main_UpdateConstConfigString(const unsigned int index, const char *val)
{
  __int64 v3; 
  SvGameGlobals *SvGameGlobalsCommon; 
  scr_string_t v5; 
  scr_string_t v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  scr_string_t StringOfSize; 

  v3 = index;
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  if ( (unsigned int)v3 >= SvGameGlobalsCommon->m_configstringsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 302, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( sv->m_configstringsCount )", "index doesn't index sv->m_configstringsCount\n\t%i not in [0, %i)", v3, SvGameGlobalsCommon->m_configstringsCount) )
    __debugbreak();
  if ( !SvGameGlobalsCommon->configstrings[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 303, ASSERT_TYPE_ASSERT, "( sv->configstrings[index] != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "sv->configstrings[index] != NULL_SCR_STRING") )
    __debugbreak();
  if ( !val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 304, ASSERT_TYPE_ASSERT, "( val )", (const char *)&queryFormat, "val") )
    __debugbreak();
  v5 = scr_const._;
  v6 = SvGameGlobalsCommon->configstrings[v3];
  if ( v6 != scr_const._ )
  {
    SL_RemoveRefToString(v6);
    v5 = scr_const._;
  }
  if ( *val )
  {
    v7 = -1i64;
    do
      ++v7;
    while ( val[v7] );
    v8 = v7 + 1;
    if ( v8 > 0x3F8 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440BBB58, 1069i64, val);
    if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 119, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
      __debugbreak();
    if ( (unsigned int)v3 >= BgDynamicLimits::ms_data.m_caseSensitiveConfigStrings )
      StringOfSize = j_SL_GetStringOfSize(val, 0, v8, 20);
    else
      StringOfSize = SL_GetLowercaseStringOfSize(val, 0, v8, 20);
    SvGameGlobalsCommon->configstrings[v3] = StringOfSize;
  }
  else
  {
    SvGameGlobalsCommon->configstrings[v3] = v5;
  }
}

/*
==============
SV_ServerThreadCommon
==============
*/
void __noreturn SV_ServerThreadCommon(unsigned int threadContext)
{
  unsigned int ServerThreadId; 
  _JBTYPE *Value; 
  SvGameModeApplication *ActiveServerApplication; 
  int *v4; 
  __int64 v5; 
  int v6; 
  _DWORD *v7; 
  __int64 v8; 
  __int64 v9; 
  SvGameModeApplication *v10; 
  __int64 v11; 
  __int64 v12; 
  int v14; 

  if ( threadContext != 5 )
  {
    v14 = 5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 238, ASSERT_TYPE_ASSERT, "( threadContext ) == ( THREAD_CONTEXT_SERVER )", "%s == %s\n\t%i, %i", "threadContext", "THREAD_CONTEXT_SERVER", threadContext, v14) )
      __debugbreak();
  }
  ServerThreadId = Physics_GetServerThreadId();
  Physics_OnThreadInit(ServerThreadId);
  while ( 1 )
  {
    Value = (_JBTYPE *)Sys_GetValue(2);
    if ( !setjmp(Value) )
      break;
    Profile_Recover(1);
    SV_Demo_HandleComError();
    if ( SvGameModeApplication::HasActiveServerApplication() )
    {
      ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
      ActiveServerApplication->ServerThreadErrorCleanup(ActiveServerApplication);
    }
  }
  v4 = (int *)Sys_GetValue(0);
  v5 = v4[8914];
  if ( (_DWORD)v5 && *(_QWORD *)&v4[4 * v5 + 8784] > *((_QWORD *)v4 + 261) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 189, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack)", (const char *)&queryFormat, "prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack") )
    __debugbreak();
  if ( (unsigned int)v4[8914] >= 0x20 )
  {
    LODWORD(v12) = 32;
    LODWORD(v11) = v4[8914];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 190, ASSERT_TYPE_ASSERT, "(unsigned)( prof_stack->prof_guardpos ) < (unsigned)( ( sizeof( *array_counter( prof_stack->prof_guardstack ) ) + 0 ) )", "prof_stack->prof_guardpos doesn't index ARRAY_COUNT( prof_stack->prof_guardstack )\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v6 = 0;
  if ( v4[8914] > 0 )
  {
    v7 = v4 + 8786;
    do
    {
      if ( *v7 == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 195, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardstack[i].id != id)", (const char *)&queryFormat, "prof_stack->prof_guardstack[i].id != id") )
        __debugbreak();
      ++v6;
      v7 += 4;
    }
    while ( v6 < v4[8914] );
  }
  if ( *((_QWORD *)v4 + 261) < (unsigned __int64)(v4 + 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 199, ASSERT_TYPE_ASSERT, "(prof_stack->prof_ppStack >= prof_stack->prof_pStack)", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  v8 = tls_index;
  v4[4 * v4[8914] + 8786] = 1;
  *(_QWORD *)&v4[4 * v4[8914]++ + 8788] = *((_QWORD *)v4 + 261);
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v8) + 272i64) = 0i64;
  Sys_InitServerEvents();
  while ( !Sys_IsServerThread() )
    Sys_Sleep(1);
  SV_Main_RestrictServerAllowedDvarFlags(0);
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v8) + 1048i64) = 0;
  Sys_ServerCompleted();
  while ( 1 )
  {
    if ( !SvGameModeApplication::ms_applicationActive || !(unsigned __int8)Com_GameMode_GetActiveGameMode() )
    {
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Initial wait start server");
      Sys_ProcessWorkerCmdsWithTimeout(SV_GameMode_CheckForActivation, NULL);
      Sys_ProfEndNamedEvent();
    }
    if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 214, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
      __debugbreak();
    if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 130, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
      __debugbreak();
    v9 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v8);
    *(_DWORD *)(v9 + 1052) = -4609;
    *(_DWORD *)(v9 + 1048) = 0;
    if ( !SvGameModeApplication::HasActiveServerApplication() )
      SvGameModeApplication::AllocateServerApplication();
    v10 = SvGameModeApplication::GetActiveServerApplication();
    v10->ServerThreadLoop(v10);
    if ( SvGameModeApplication::GetActiveServerApplication() != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 231, ASSERT_TYPE_ASSERT, "(SvGameModeApplication::GetActiveServerApplication() == svApp)", "%s\n\tServer application de-allocated during the loop", "SvGameModeApplication::GetActiveServerApplication() == svApp") )
      __debugbreak();
    SvGameModeApplication::FreeServerApplication();
  }
}

/*
==============
SV_SetConfigstring
==============
*/
void SV_SetConfigstring(unsigned int index, const char *val)
{
  __int64 v3; 
  SvGameGlobals *SvGameGlobalsCommon; 
  scr_string_t v5; 
  const char *v6; 
  __int64 v7; 
  const char *v8; 
  signed __int64 v9; 
  char v10; 
  __int64 v11; 
  char v12; 
  SvGameGlobals *v13; 
  scr_string_t v14; 
  scr_string_t v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  scr_string_t StringOfSize; 
  char *fmt; 
  __int64 v21; 
  __int64 v22; 
  char dest[1024]; 

  v3 = index;
  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( (unsigned int)v3 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440BBBA0, 1070i64, (unsigned int)v3);
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  v5 = SvGameGlobalsCommon->configstrings[v3];
  if ( v5 )
  {
    v6 = (char *)&queryFormat.fmt + 3;
    if ( val )
      v6 = val;
    v7 = 0x7FFFFFFFi64;
    v8 = SL_ConvertToString(v5);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v9 = v6 - v8;
    do
    {
      v10 = v8[v9];
      v11 = v7;
      v12 = *v8++;
      --v7;
      if ( !v11 )
        break;
      if ( v10 != v12 )
      {
        v13 = SvGameGlobals::GetSvGameGlobalsCommon();
        if ( (unsigned int)v3 >= v13->m_configstringsCount )
        {
          LODWORD(v21) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 302, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( sv->m_configstringsCount )", "index doesn't index sv->m_configstringsCount\n\t%i not in [0, %i)", v21, v13->m_configstringsCount) )
            __debugbreak();
        }
        if ( !v13->configstrings[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 303, ASSERT_TYPE_ASSERT, "( sv->configstrings[index] != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "sv->configstrings[index] != NULL_SCR_STRING") )
          __debugbreak();
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 304, ASSERT_TYPE_ASSERT, "( val )", (const char *)&queryFormat, "val") )
          __debugbreak();
        v14 = scr_const._;
        v15 = v13->configstrings[v3];
        if ( v15 != scr_const._ )
        {
          SL_RemoveRefToString(v15);
          v14 = scr_const._;
        }
        v16 = -1i64;
        if ( *v6 )
        {
          v17 = -1i64;
          do
            ++v17;
          while ( v6[v17] );
          v18 = v17 + 1;
          if ( v18 > 0x3F8 )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440BBB58, 1069i64, v6);
          if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 119, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
            __debugbreak();
          if ( (unsigned int)v3 >= BgDynamicLimits::ms_data.m_caseSensitiveConfigStrings )
            StringOfSize = j_SL_GetStringOfSize(v6, 0, v18, 20);
          else
            StringOfSize = SL_GetLowercaseStringOfSize(v6, 0, v18, 20);
          v13->configstrings[v3] = StringOfSize;
        }
        else
        {
          v13->configstrings[v3] = v14;
        }
        if ( SV_Loaded() || SvGameGlobalsCommon->restarting )
        {
          Com_sprintf(dest, 0x400ui64, "%i", (unsigned int)v3);
          do
            ++v16;
          while ( dest[v16] );
          if ( (unsigned __int64)(v16 + 4) > 8 )
          {
            LODWORD(v22) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 372, ASSERT_TYPE_ASSERT, "( ( overhead <= MAX_CONFIG_STRING_OVERHEAD ) )", "%s\n\t( index ) = %i", "( overhead <= MAX_CONFIG_STRING_OVERHEAD )", v22) )
              __debugbreak();
          }
          LODWORD(fmt) = v3;
          Com_sprintf(dest, 0x400ui64, "%c %i %s", 100i64, fmt, v6);
          SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, dest);
        }
        return;
      }
    }
    while ( v10 );
  }
  else if ( val )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_main.cpp", 350, ASSERT_TYPE_ASSERT, "(!val)", (const char *)&queryFormat, "!val") )
      __debugbreak();
  }
}

/*
==============
SV_WaitServer
==============
*/
void SV_WaitServer(void)
{
  SvGameModeApplication *ActiveServerApplication; 

  if ( SvGameModeApplication::HasActiveServerApplication() )
  {
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    ActiveServerApplication->WaitServer(ActiveServerApplication, NULL);
  }
}

