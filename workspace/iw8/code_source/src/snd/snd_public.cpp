/*
==============
SND_StreamedBankUnloadedFrontend
==============
*/

void __fastcall SND_StreamedBankUnloadedFrontend(const StreamKey *streamKey)
{
  ?SND_StreamedBankUnloadedFrontend@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
SND_DisableUpdatePop
==============
*/

void SND_DisableUpdatePop(void)
{
  ?SND_DisableUpdatePop@@YAXXZ();
}

/*
==============
SND_UpdateSoundWorker
==============
*/

void __fastcall SND_UpdateSoundWorker(void *data)
{
  ?SND_UpdateSoundWorker@@YAXPEAX@Z(data);
}

/*
==============
SND_SetProcessCommandFlag
==============
*/

void __fastcall SND_SetProcessCommandFlag(bool flag)
{
  ?SND_SetProcessCommandFlag@@YAX_N@Z(flag);
}

/*
==============
SND_StreamedBankDBPreRelease
==============
*/

void __fastcall SND_StreamedBankDBPreRelease(const StreamKey *streamKey)
{
  ?SND_StreamedBankDBPreRelease@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
SND_AddBank
==============
*/

void __fastcall SND_AddBank(const SndBank *bank, bool isPreloading)
{
  ?SND_AddBank@@YAXPEBUSndBank@@_N@Z(bank, isPreloading);
}

/*
==============
SND_RemoveBank
==============
*/

void __fastcall SND_RemoveBank(const SndBank *bank)
{
  ?SND_RemoveBank@@YAXPEBUSndBank@@@Z(bank);
}

/*
==============
SND_GetProcessCommandFlag
==============
*/

bool __fastcall SND_GetProcessCommandFlag()
{
  return ?SND_GetProcessCommandFlag@@YA_NXZ();
}

/*
==============
SND_SwapBank
==============
*/

void __fastcall SND_SwapBank(SndBank *fromBank, SndBank *toBank)
{
  ?SND_SwapBank@@YAXPEAUSndBank@@0@Z(fromBank, toBank);
}

/*
==============
SND_DisableUpdatePush
==============
*/

void SND_DisableUpdatePush(void)
{
  ?SND_DisableUpdatePush@@YAXXZ();
}

/*
==============
SND_RemoveGlobals
==============
*/

void __fastcall SND_RemoveGlobals(const SndGlobals *globals)
{
  ?SND_RemoveGlobals@@YAXPEBUSndGlobals@@@Z(globals);
}

/*
==============
SND_IsUpdate
==============
*/

bool __fastcall SND_IsUpdate()
{
  return ?SND_IsUpdate@@YA_NXZ();
}

/*
==============
SND_BankLoadedNotify
==============
*/

void SND_BankLoadedNotify(void)
{
  ?SND_BankLoadedNotify@@YAXXZ();
}

/*
==============
SND_PossiblyUpdate
==============
*/

void __fastcall SND_PossiblyUpdate(int minUpdateMs)
{
  ?SND_PossiblyUpdate@@YAXH@Z(minUpdateMs);
}

/*
==============
SND_Frame
==============
*/

void SND_Frame(void)
{
  ?SND_Frame@@YAXXZ();
}

/*
==============
SND_AddGlobals
==============
*/

void __fastcall SND_AddGlobals(const SndGlobals *globals)
{
  ?SND_AddGlobals@@YAXPEBUSndGlobals@@@Z(globals);
}

/*
==============
SND_StreamedBankPtrFixupRelocateBackend
==============
*/

void __fastcall SND_StreamedBankPtrFixupRelocateBackend(const StreamKey *streamKey)
{
  ?SND_StreamedBankPtrFixupRelocateBackend@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
SND_Shutdown
==============
*/

void SND_Shutdown(void)
{
  ?SND_Shutdown@@YAXXZ();
}

/*
==============
SND_StreamedBankPtrFixupNewBackend
==============
*/

void __fastcall SND_StreamedBankPtrFixupNewBackend(const StreamKey *streamKey)
{
  ?SND_StreamedBankPtrFixupNewBackend@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
SND_StreamedBankLoadedFrontend
==============
*/

void __fastcall SND_StreamedBankLoadedFrontend(const StreamKey *streamKey)
{
  ?SND_StreamedBankLoadedFrontend@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
SNDL_Update
==============
*/

void SNDL_Update(void)
{
  ?SNDL_Update@@YAXXZ();
}

/*
==============
SND_Active
==============
*/

bool __fastcall SND_Active()
{
  return ?SND_Active@@YA_NXZ();
}

/*
==============
SND_UpdateWait
==============
*/

void SND_UpdateWait(void)
{
  ?SND_UpdateWait@@YAXXZ();
}

/*
==============
SNDL_Update
==============
*/
void SNDL_Update(void)
{
  g_snd.bankUpdateStatus = SND_BankUpdate();
}

/*
==============
SND_Active
==============
*/
_BOOL8 SND_Active()
{
  return g_snd.driverInitialized;
}

/*
==============
SND_AddBank
==============
*/
void SND_AddBank(const SndBank *bank, bool isPreloading)
{
  if ( !bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 19, ASSERT_TYPE_ASSERT, "(bank)", (const char *)&queryFormat, "bank") )
    __debugbreak();
  if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1044i64) == 1164548266 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 23, ASSERT_TYPE_ASSERT, "(!SND_IsUpdate())", (const char *)&queryFormat, "!SND_IsUpdate()") )
    __debugbreak();
  if ( SND_ShouldInit() )
  {
    if ( ((unsigned __int8)&g_snd.banksLoading & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_snd.banksLoading) )
      __debugbreak();
    _InterlockedIncrement(&g_snd.banksLoading);
    SNDL_AddBank(bank, isPreloading);
  }
}

/*
==============
SND_AddGlobals
==============
*/
void SND_AddGlobals(const SndGlobals *globals)
{
  if ( g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 123, ASSERT_TYPE_ASSERT, "(g_snd.globals == 0)", (const char *)&queryFormat, "g_snd.globals == 0") )
    __debugbreak();
  g_snd.globals = globals;
}

/*
==============
SND_BankLoadedNotify
==============
*/
void SND_BankLoadedNotify(void)
{
  if ( ((unsigned __int8)&g_snd.banksLoading & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_snd.banksLoading) )
    __debugbreak();
  _InterlockedDecrement(&g_snd.banksLoading);
}

/*
==============
SND_DisableUpdatePop
==============
*/
void SND_DisableUpdatePop(void)
{
  if ( ((unsigned __int8)&s_snd_update_disable & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_snd_update_disable) )
    __debugbreak();
  if ( _InterlockedDecrement(&s_snd_update_disable) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 268, ASSERT_TYPE_ASSERT, "(s_snd_update_disable >= 0)", (const char *)&queryFormat, "s_snd_update_disable >= 0") )
    __debugbreak();
}

/*
==============
SND_DisableUpdatePush
==============
*/
void SND_DisableUpdatePush(void)
{
  if ( ((unsigned __int8)&s_snd_update_disable & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_snd_update_disable) )
    __debugbreak();
  _InterlockedIncrement(&s_snd_update_disable);
}

/*
==============
SND_Frame
==============
*/
void SND_Frame(void)
{
  int v0; 

  v0 = Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_Frame");
  SND_ProcessSNDQueue();
  if ( g_snd.driverInitialized )
    g_snd.bankUpdateStatus = SND_BankUpdate();
  g_snd.frameUsec = Sys_Microseconds() - v0;
  Sys_ProfEndNamedEvent();
}

/*
==============
SND_GetProcessCommandFlag
==============
*/
_BOOL8 SND_GetProcessCommandFlag()
{
  return g_snd.command_process_flag;
}

/*
==============
SND_IsUpdate
==============
*/
bool SND_IsUpdate()
{
  return *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1044i64) == 1164548266;
}

/*
==============
SND_PossiblyUpdate
==============
*/
void SND_PossiblyUpdate(int minUpdateMs)
{
  char data; 

  if ( SND_ShouldInit() && s_snd_update_disable <= 0 )
  {
    SND_ErrorIfSoundGlobalsTrashed();
    if ( ((unsigned __int8)&snd_update_fence & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&snd_update_fence) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&snd_update_fence, 1, 0) )
    {
      if ( Sys_Milliseconds() - snd_update_start > minUpdateMs )
      {
        snd_update_start = Sys_Milliseconds();
        SND_UpdateSoundWorker(&data);
      }
      snd_update_fence = 0;
    }
  }
}

/*
==============
SND_RemoveBank
==============
*/
void SND_RemoveBank(const SndBank *bank)
{
  const SndBank *data; 
  bool v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 39, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 40, ASSERT_TYPE_ASSERT, "(bank)", (const char *)&queryFormat, "bank") )
    __debugbreak();
  if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1044i64) == 1164548266 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 48, ASSERT_TYPE_ASSERT, "(!SND_IsUpdate())", (const char *)&queryFormat, "!SND_IsUpdate()") )
    __debugbreak();
  if ( SND_ShouldInit() )
  {
    data = bank;
    v3 = SND_StopBankSounds(bank);
    SND_QueueAdd(&g_snd.SNDQ, 2, 16, &data);
    SND_UpdateWait();
  }
}

/*
==============
SND_RemoveGlobals
==============
*/
void SND_RemoveGlobals(const SndGlobals *globals)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 132, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( g_snd.driverInitialized )
  {
    SND_StopSounds(SND_STOP_ALL);
    SD_Sync();
  }
  if ( g_snd.globals && g_snd.globals != globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 143, ASSERT_TYPE_ASSERT, "(g_snd.globals == 0 || g_snd.globals == globals)", (const char *)&queryFormat, "g_snd.globals == 0 || g_snd.globals == globals") )
    __debugbreak();
  g_snd.globals = NULL;
}

/*
==============
SND_SetProcessCommandFlag
==============
*/
void SND_SetProcessCommandFlag(bool flag)
{
  g_snd.command_process_flag = flag;
}

/*
==============
SND_Shutdown
==============
*/
void SND_Shutdown(void)
{
  if ( g_snd.driverInitialized )
  {
    if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1044i64) == 1164548266 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 346, ASSERT_TYPE_ASSERT, "(!SND_IsUpdate())", (const char *)&queryFormat, "!SND_IsUpdate()") )
      __debugbreak();
    SND_ProcessCLQueue();
    SND_QueueAdd(&g_snd.SNDQ, 4, 0, NULL);
    SND_UpdateWait();
    if ( g_snd.driverInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 355, ASSERT_TYPE_ASSERT, "(!SND_Active())", (const char *)&queryFormat, "!SND_Active()") )
      __debugbreak();
  }
}

/*
==============
SND_StreamedBankDBPreRelease
==============
*/

void __fastcall SND_StreamedBankDBPreRelease(const StreamKey *streamKey)
{
  SNDL_UnloadBank(streamKey);
}

/*
==============
SND_StreamedBankLoadedFrontend
==============
*/
void SND_StreamedBankLoadedFrontend(const StreamKey *streamKey)
{
  if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1044i64) == 1164548266 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 82, ASSERT_TYPE_ASSERT, "(!SND_IsUpdate())", (const char *)&queryFormat, "!SND_IsUpdate()") )
    __debugbreak();
  if ( SND_ShouldInit() )
    SNDL_LoadBank(streamKey);
}

/*
==============
SND_StreamedBankPtrFixupNewBackend
==============
*/

void __fastcall SND_StreamedBankPtrFixupNewBackend(const StreamKey *streamKey)
{
  SNDL_FixupBankPointers(streamKey);
}

/*
==============
SND_StreamedBankPtrFixupRelocateBackend
==============
*/

void __fastcall SND_StreamedBankPtrFixupRelocateBackend(const StreamKey *streamKey)
{
  SNDL_FixupBankPointers(streamKey);
}

/*
==============
SND_StreamedBankUnloadedFrontend
==============
*/

void __fastcall SND_StreamedBankUnloadedFrontend(const StreamKey *streamKey)
{
  SNDL_UnloadBank(streamKey);
}

/*
==============
SND_SwapBank
==============
*/
void SND_SwapBank(SndBank *fromBank, SndBank *toBank)
{
  if ( !fromBank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 71, ASSERT_TYPE_ASSERT, "(fromBank)", (const char *)&queryFormat, "fromBank") )
    __debugbreak();
  if ( !toBank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 72, ASSERT_TYPE_ASSERT, "(toBank)", (const char *)&queryFormat, "toBank") )
    __debugbreak();
  SNDL_SwapBank(fromBank, toBank);
}

/*
==============
SND_UpdateSoundWorker
==============
*/
void SND_UpdateSoundWorker(void *data)
{
  __int64 v1; 
  int v2; 

  if ( g_snd.driverInitialized )
  {
    if ( !snd_update_fence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 241, ASSERT_TYPE_ASSERT, "(snd_update_fence)", (const char *)&queryFormat, "snd_update_fence") )
      __debugbreak();
    if ( ((unsigned __int8)&snd_update_entry_count & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&snd_update_entry_count) )
      __debugbreak();
    if ( _InterlockedIncrement(&snd_update_entry_count) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 245, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement(&snd_update_entry_count) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement(&snd_update_entry_count) == 1") )
      __debugbreak();
    v1 = 8i64 * tls_index;
    *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v1) + 1044i64) = 1164548266;
    v2 = Sys_Microseconds();
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_Frame");
    SND_ProcessSNDQueue();
    if ( g_snd.driverInitialized )
      g_snd.bankUpdateStatus = SND_BankUpdate();
    g_snd.frameUsec = Sys_Microseconds() - v2;
    Sys_ProfEndNamedEvent();
    *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v1) + 1044i64) = 0;
    if ( ((unsigned __int64)&snd_update_entry_count & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&snd_update_entry_count) )
      __debugbreak();
    if ( _InterlockedExchangeAdd(&snd_update_entry_count, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 253, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement(&snd_update_entry_count) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement(&snd_update_entry_count) == 0") )
      __debugbreak();
  }
}

/*
==============
SND_UpdateWait
==============
*/
void SND_UpdateWait(void)
{
  char data; 

  do
  {
    SND_ErrorIfSoundGlobalsTrashed();
    if ( ((unsigned __int64)&snd_update_fence & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&snd_update_fence) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(&snd_update_fence, 1, 0) );
  snd_update_start = Sys_Milliseconds();
  SND_UpdateSoundWorker(&data);
  snd_update_fence = 0;
}

