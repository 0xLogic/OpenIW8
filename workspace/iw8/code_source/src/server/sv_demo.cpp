/*
==============
SV_Record_GetInt
==============
*/

void __fastcall SV_Record_GetInt(int value)
{
  ?SV_Record_GetInt@@YAXH@Z(value);
}

/*
==============
SV_Record_GetByte
==============
*/

void __fastcall SV_Record_GetByte(unsigned __int8 value)
{
  ?SV_Record_GetByte@@YAXE@Z(value);
}

/*
==============
SV_Demo_GetTimeScale
==============
*/

double __fastcall SV_Demo_GetTimeScale()
{
  double result; 

  *(float *)&result = ?SV_Demo_GetTimeScale@@YAMXZ();
  return result;
}

/*
==============
SV_Record_GetFloat
==============
*/

void __fastcall SV_Record_GetFloat(float value)
{
  ?SV_Record_GetFloat@@YAXM@Z(value);
}

/*
==============
SV_Demo_GetCheatsOk
==============
*/

int __fastcall SV_Demo_GetCheatsOk()
{
  return ?SV_Demo_GetCheatsOk@@YAHXZ();
}

/*
==============
SV_Demo_GetMsgSizeMax
==============
*/

int __fastcall SV_Demo_GetMsgSizeMax()
{
  return ?SV_Demo_GetMsgSizeMax@@YAHXZ();
}

/*
==============
SV_Demo_GetString
==============
*/

const char *__fastcall SV_Demo_GetString()
{
  return ?SV_Demo_GetString@@YAPEBDXZ();
}

/*
==============
SV_Demo_IsPaused
==============
*/

bool __fastcall SV_Demo_IsPaused()
{
  return ?SV_Demo_IsPaused@@YA_NXZ();
}

/*
==============
SV_Demo_GetInt64
==============
*/

__int64 __fastcall SV_Demo_GetInt64()
{
  return ?SV_Demo_GetInt64@@YA_JXZ();
}

/*
==============
SV_Demo_IsRecording
==============
*/

bool __fastcall SV_Demo_IsRecording()
{
  return ?SV_Demo_IsRecording@@YA_NXZ();
}

/*
==============
SV_Demo_WaitForSaveHistoryDone
==============
*/

void SV_Demo_WaitForSaveHistoryDone(void)
{
  ?SV_Demo_WaitForSaveHistoryDone@@YAXXZ();
}

/*
==============
SV_Demo_GetInt
==============
*/

int __fastcall SV_Demo_GetInt()
{
  return ?SV_Demo_GetInt@@YAHXZ();
}

/*
==============
SV_Demo_GetMsgSizeCurrent
==============
*/

int __fastcall SV_Demo_GetMsgSizeCurrent()
{
  return ?SV_Demo_GetMsgSizeCurrent@@YAHXZ();
}

/*
==============
SV_Demo_GetFloat
==============
*/

double __fastcall SV_Demo_GetFloat()
{
  double result; 

  *(float *)&result = ?SV_Demo_GetFloat@@YAMXZ();
  return result;
}

/*
==============
SV_Demo_RecordShort
==============
*/

void __fastcall SV_Demo_RecordShort(__int16 value)
{
  ?SV_Demo_RecordShort@@YAXF@Z(value);
}

/*
==============
SV_Demo_HandleComError
==============
*/

void SV_Demo_HandleComError(void)
{
  ?SV_Demo_HandleComError@@YAXXZ();
}

/*
==============
SV_IsDemoPlayingNext
==============
*/

bool __fastcall SV_IsDemoPlayingNext()
{
  return ?SV_IsDemoPlayingNext@@YA_NXZ();
}

/*
==============
SV_Demo_GetShort
==============
*/

__int16 __fastcall SV_Demo_GetShort()
{
  return ?SV_Demo_GetShort@@YAFXZ();
}

/*
==============
SV_IsDemoPlaying
==============
*/

bool __fastcall SV_IsDemoPlaying()
{
  return ?SV_IsDemoPlaying@@YA_NXZ();
}

/*
==============
SV_Demo_SetDvar
==============
*/

bool __fastcall SV_Demo_SetDvar(unsigned int var_checksum, const char *value)
{
  return ?SV_Demo_SetDvar@@YA_NIPEBD@Z(var_checksum, value);
}

/*
==============
SV_Demo_GetEndTime
==============
*/

int __fastcall SV_Demo_GetEndTime()
{
  return ?SV_Demo_GetEndTime@@YAHXZ();
}

/*
==============
SV_Demo_RecordCheatsOk
==============
*/

void __fastcall SV_Demo_RecordCheatsOk(int cheatsOk)
{
  ?SV_Demo_RecordCheatsOk@@YAXH@Z(cheatsOk);
}

/*
==============
SV_Record_GetString
==============
*/

void __fastcall SV_Record_GetString(const char *buffer)
{
  ?SV_Record_GetString@@YAXPEBD@Z(buffer);
}

/*
==============
SV_Demo_InitHistorySaveThread
==============
*/

void SV_Demo_InitHistorySaveThread(void)
{
  ?SV_Demo_InitHistorySaveThread@@YAXXZ();
}

/*
==============
SV_Demo_GetStartTime
==============
*/

int __fastcall SV_Demo_GetStartTime()
{
  return ?SV_Demo_GetStartTime@@YAHXZ();
}

/*
==============
SV_IsDemoPlayingForClient
==============
*/

bool __fastcall SV_IsDemoPlayingForClient()
{
  return ?SV_IsDemoPlayingForClient@@YA_NXZ();
}

/*
==============
SV_Demo_ResetDemo
==============
*/

void SV_Demo_ResetDemo(void)
{
  ?SV_Demo_ResetDemo@@YAXXZ();
}

/*
==============
SV_Demo_SaveImmediate
==============
*/

void __fastcall SV_Demo_SaveImmediate(SaveImmediate *save)
{
  ?SV_Demo_SaveImmediate@@YAXPEAUSaveImmediate@@@Z(save);
}

/*
==============
SV_Record_GetInt64
==============
*/

void __fastcall SV_Record_GetInt64(__int64 value)
{
  ?SV_Record_GetInt64@@YAX_J@Z(value);
}

/*
==============
SV_Demo_AutoSave
==============
*/

void __fastcall SV_Demo_AutoSave(AutoSaveType autosaveType, const char *description, int demoCount, bool force)
{
  ?SV_Demo_AutoSave@@YAXW4AutoSaveType@@PEBDH_N@Z(autosaveType, description, demoCount, force);
}

/*
==============
SV_Demo_GetByte
==============
*/

unsigned __int8 __fastcall SV_Demo_GetByte()
{
  return ?SV_Demo_GetByte@@YAEXZ();
}

/*
==============
SV_Demo_AutoSave
==============
*/
void SV_Demo_AutoSave(AutoSaveType autosaveType, const char *description, int demoCount, bool force)
{
  SvDemo *DemoCommon; 
  bool v9; 

  if ( Sys_IsMainThread() || Sys_IsServerThread() )
  {
    if ( SvDemo::ms_gServerDemoSystem )
    {
      if ( SvStaticGlobals::ms_svStaticGlobals.state == SS_GAME )
      {
        DemoCommon = SvDemo::GetDemoCommon();
        v9 = force;
        DemoCommon->AutoSave(DemoCommon, autosaveType, description, demoCount, v9);
      }
    }
  }
}

/*
==============
SV_Demo_GetByte
==============
*/
__int64 SV_Demo_GetByte()
{
  if ( !SvDemo::ms_gServerDemoSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.cpp", 141, ASSERT_TYPE_ASSERT, "( SvDemo::IsSystemEnabled() )", (const char *)&queryFormat, "SvDemo::IsSystemEnabled()") )
      __debugbreak();
    if ( !SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 260, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem )", (const char *)&queryFormat, "ms_gServerDemoSystem") )
      __debugbreak();
  }
  return ((__int64 (__fastcall *)(SvDemo *))SvDemo::ms_gServerDemoSystem->GetByte)(SvDemo::ms_gServerDemoSystem);
}

/*
==============
SV_Demo_GetCheatsOk
==============
*/
__int64 SV_Demo_GetCheatsOk()
{
  if ( !SvDemo::ms_gServerDemoSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.cpp", 103, ASSERT_TYPE_ASSERT, "( SvDemo::IsSystemEnabled() )", (const char *)&queryFormat, "SvDemo::IsSystemEnabled()") )
      __debugbreak();
    if ( !SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 260, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem )", (const char *)&queryFormat, "ms_gServerDemoSystem") )
      __debugbreak();
  }
  return ((__int64 (__fastcall *)(SvDemo *))SvDemo::ms_gServerDemoSystem->GetCheatsOk)(SvDemo::ms_gServerDemoSystem);
}

/*
==============
SV_Demo_GetEndTime
==============
*/
__int64 SV_Demo_GetEndTime()
{
  return (unsigned int)sv_demo.endTime;
}

/*
==============
SV_Demo_GetFloat
==============
*/
void SV_Demo_GetFloat()
{
  if ( !SvDemo::ms_gServerDemoSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.cpp", 217, ASSERT_TYPE_ASSERT, "( SvDemo::IsSystemEnabled() )", (const char *)&queryFormat, "SvDemo::IsSystemEnabled()") )
      __debugbreak();
    if ( !SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 260, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem )", (const char *)&queryFormat, "ms_gServerDemoSystem") )
      __debugbreak();
  }
  SvDemo::ms_gServerDemoSystem->GetFloat(SvDemo::ms_gServerDemoSystem);
}

/*
==============
SV_Demo_GetInt64
==============
*/
__int64 SV_Demo_GetInt64()
{
  if ( !SvDemo::ms_gServerDemoSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.cpp", 208, ASSERT_TYPE_ASSERT, "( SvDemo::IsSystemEnabled( ) )", (const char *)&queryFormat, "SvDemo::IsSystemEnabled( )") )
      __debugbreak();
    if ( !SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 260, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem )", (const char *)&queryFormat, "ms_gServerDemoSystem") )
      __debugbreak();
  }
  return SvDemo::ms_gServerDemoSystem->GetInt64(SvDemo::ms_gServerDemoSystem);
}

/*
==============
SV_Demo_GetInt
==============
*/
__int64 SV_Demo_GetInt()
{
  if ( !SvDemo::ms_gServerDemoSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.cpp", 179, ASSERT_TYPE_ASSERT, "( SvDemo::IsSystemEnabled() )", (const char *)&queryFormat, "SvDemo::IsSystemEnabled()") )
      __debugbreak();
    if ( !SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 260, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem )", (const char *)&queryFormat, "ms_gServerDemoSystem") )
      __debugbreak();
  }
  return ((__int64 (__fastcall *)(SvDemo *))SvDemo::ms_gServerDemoSystem->GetInt)(SvDemo::ms_gServerDemoSystem);
}

/*
==============
SV_Demo_GetMsgSizeCurrent
==============
*/
__int64 SV_Demo_GetMsgSizeCurrent()
{
  return (unsigned int)sv_demo.msg.cursize;
}

/*
==============
SV_Demo_GetMsgSizeMax
==============
*/
__int64 SV_Demo_GetMsgSizeMax()
{
  return (unsigned int)sv_demo.msg.maxsize;
}

/*
==============
SV_Demo_GetShort
==============
*/
__int64 SV_Demo_GetShort()
{
  if ( !SvDemo::ms_gServerDemoSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.cpp", 170, ASSERT_TYPE_ASSERT, "( SvDemo::IsSystemEnabled() )", (const char *)&queryFormat, "SvDemo::IsSystemEnabled()") )
      __debugbreak();
    if ( !SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 260, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem )", (const char *)&queryFormat, "ms_gServerDemoSystem") )
      __debugbreak();
  }
  return ((__int64 (__fastcall *)(SvDemo *))SvDemo::ms_gServerDemoSystem->GetShort)(SvDemo::ms_gServerDemoSystem);
}

/*
==============
SV_Demo_GetStartTime
==============
*/
__int64 SV_Demo_GetStartTime()
{
  return (unsigned int)sv_demo.startTime;
}

/*
==============
SV_Demo_GetString
==============
*/
const char *SV_Demo_GetString()
{
  if ( !SvDemo::ms_gServerDemoSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.cpp", 122, ASSERT_TYPE_ASSERT, "( SvDemo::IsSystemEnabled() )", (const char *)&queryFormat, "SvDemo::IsSystemEnabled()") )
      __debugbreak();
    if ( !SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 260, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem )", (const char *)&queryFormat, "ms_gServerDemoSystem") )
      __debugbreak();
  }
  return SvDemo::ms_gServerDemoSystem->GetString(SvDemo::ms_gServerDemoSystem);
}

/*
==============
SV_Demo_GetTimeScale
==============
*/

float __fastcall SV_Demo_GetTimeScale(double _XMM0_8)
{
  char v3; 

  if ( !sv_demo.playing )
    goto LABEL_16;
  if ( !SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.cpp", 245, ASSERT_TYPE_ASSERT, "( SvDemo::IsSystemEnabled() )", (const char *)&queryFormat, "SvDemo::IsSystemEnabled()") )
    __debugbreak();
  _RBX = DVARFLT_replay_speed;
  if ( !DVARFLT_replay_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "replay_speed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rbx+28h]
  }
  if ( v3 )
  {
LABEL_16:
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  else
  {
    if ( !SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.cpp", 255, ASSERT_TYPE_ASSERT, "( SvDemo::IsSystemEnabled() )", (const char *)&queryFormat, "SvDemo::IsSystemEnabled()") )
      __debugbreak();
    _RBX = DVARFLT_replay_speed;
    if ( !DVARFLT_replay_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "replay_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  return *(float *)&_XMM0;
}

/*
==============
SV_Demo_HandleComError
==============
*/
void SV_Demo_HandleComError(void)
{
  *(_DWORD *)&sv_demo.recording = 0;
  sv_demo.forwardTime = 0;
  sv_demo.residualTime = 0;
  *(_WORD *)&sv_demo.fastForward = 0;
}

/*
==============
SV_Demo_InitHistorySaveThread
==============
*/
void SV_Demo_InitHistorySaveThread(void)
{
  Sys_SpawnServerDemoThread(SV_Demo_SaveHistoryLoop);
}

/*
==============
SV_Demo_IsPaused
==============
*/

bool __fastcall SV_Demo_IsPaused(double _XMM0_8)
{
  char v3; 

  if ( !SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.cpp", 245, ASSERT_TYPE_ASSERT, "( SvDemo::IsSystemEnabled() )", (const char *)&queryFormat, "SvDemo::IsSystemEnabled()") )
    __debugbreak();
  _RBX = DVARFLT_replay_speed;
  if ( !DVARFLT_replay_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "replay_speed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rbx+28h]
  }
  return v3 != 0;
}

/*
==============
SV_Demo_IsRecording
==============
*/
_BOOL8 SV_Demo_IsRecording()
{
  return sv_demo.recording;
}

/*
==============
SV_Demo_RecordCheatsOk
==============
*/
void SV_Demo_RecordCheatsOk(int cheatsOk)
{
  if ( SvDemo::ms_gServerDemoSystem )
    SvDemo::ms_gServerDemoSystem->RecordCheatsOk(SvDemo::ms_gServerDemoSystem, cheatsOk);
}

/*
==============
SV_Demo_RecordShort
==============
*/
void SV_Demo_RecordShort(__int16 value)
{
  if ( SvDemo::ms_gServerDemoSystem )
    SvDemo::ms_gServerDemoSystem->RecordShort(SvDemo::ms_gServerDemoSystem, value);
}

/*
==============
SV_Demo_ResetDemo
==============
*/
void SV_Demo_ResetDemo(void)
{
  *(_DWORD *)&sv_demo.recording = 0;
  sv_demo.forwardTime = 0;
  sv_demo.residualTime = 0;
  *(_WORD *)&sv_demo.fastForward = 0;
}

/*
==============
SV_Demo_SaveHistoryLoop
==============
*/
void __noreturn SV_Demo_SaveHistoryLoop(unsigned int threadContext)
{
  int v2; 

  if ( threadContext != 13 )
  {
    v2 = 13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.cpp", 303, ASSERT_TYPE_ASSERT, "( threadContext ) == ( THREAD_CONTEXT_SERVER_DEMO )", "%s == %s\n\t%i, %i", "threadContext", "THREAD_CONTEXT_SERVER_DEMO", threadContext, v2) )
      __debugbreak();
  }
  while ( 1 )
  {
    Sys_WaitForSaveHistory();
    if ( !SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 260, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem )", (const char *)&queryFormat, "ms_gServerDemoSystem") )
      __debugbreak();
    SvDemo::ms_gServerDemoSystem->SaveHistory(SvDemo::ms_gServerDemoSystem);
  }
}

/*
==============
SV_Demo_SaveImmediate
==============
*/
void SV_Demo_SaveImmediate(SaveImmediate *save)
{
  if ( !SvDemo::ms_gServerDemoSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.cpp", 236, ASSERT_TYPE_ASSERT, "( SvDemo::IsSystemEnabled() )", (const char *)&queryFormat, "SvDemo::IsSystemEnabled()") )
      __debugbreak();
    if ( !SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 260, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem )", (const char *)&queryFormat, "ms_gServerDemoSystem") )
      __debugbreak();
  }
  SvDemo::ms_gServerDemoSystem->SaveImmediate(SvDemo::ms_gServerDemoSystem, save);
}

/*
==============
SV_Demo_SetDvar
==============
*/
char SV_Demo_SetDvar(unsigned int var_checksum, const char *value)
{
  SvDemo *DemoCommon; 

  if ( sv_demo.playing )
    return 0;
  if ( !sv_demo.recording )
    return 1;
  DemoCommon = SvDemo::GetDemoCommon();
  return DemoCommon->DvarSet(DemoCommon, var_checksum, value);
}

/*
==============
SV_Demo_WaitForSaveHistoryDone
==============
*/
void SV_Demo_WaitForSaveHistoryDone(void)
{
  if ( Sys_CheckForSaveHistory() )
  {
    if ( !SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 260, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem )", (const char *)&queryFormat, "ms_gServerDemoSystem") )
      __debugbreak();
    SvDemo::ms_gServerDemoSystem->SaveHistory(SvDemo::ms_gServerDemoSystem);
  }
  else
  {
    Sys_WaitForSaveHistoryDone();
  }
}

/*
==============
SV_IsDemoPlaying
==============
*/
_BOOL8 SV_IsDemoPlaying()
{
  return sv_demo.playing;
}

/*
==============
SV_IsDemoPlayingForClient
==============
*/
_BOOL8 SV_IsDemoPlayingForClient()
{
  return sv_demo.playingForClient;
}

/*
==============
SV_IsDemoPlayingNext
==============
*/
_BOOL8 SV_IsDemoPlayingNext()
{
  return sv_demo.nextLevelplaying;
}

/*
==============
SV_Record_GetByte
==============
*/
void SV_Record_GetByte(unsigned __int8 value)
{
  if ( SvDemo::ms_gServerDemoSystem )
    SvDemo::ms_gServerDemoSystem->RecordByte(SvDemo::ms_gServerDemoSystem, value);
}

/*
==============
SV_Record_GetFloat
==============
*/

void __fastcall SV_Record_GetFloat(double value)
{
  if ( SvDemo::ms_gServerDemoSystem )
  {
    __asm { vmovaps xmm1, xmm0 }
    ((void (__fastcall *)(SvDemo *))SvDemo::ms_gServerDemoSystem->RecordFloat)(SvDemo::ms_gServerDemoSystem);
  }
}

/*
==============
SV_Record_GetInt64
==============
*/
void SV_Record_GetInt64(__int64 value)
{
  if ( SvDemo::ms_gServerDemoSystem )
    SvDemo::ms_gServerDemoSystem->RecordInt64(SvDemo::ms_gServerDemoSystem, value);
}

/*
==============
SV_Record_GetInt
==============
*/
void SV_Record_GetInt(int value)
{
  if ( SvDemo::ms_gServerDemoSystem )
    SvDemo::ms_gServerDemoSystem->RecordInt(SvDemo::ms_gServerDemoSystem, value);
}

/*
==============
SV_Record_GetString
==============
*/
void SV_Record_GetString(const char *buffer)
{
  if ( SvDemo::ms_gServerDemoSystem )
    SvDemo::ms_gServerDemoSystem->RecordString(SvDemo::ms_gServerDemoSystem, buffer);
}

