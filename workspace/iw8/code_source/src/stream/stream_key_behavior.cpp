/*
==============
StreamKey_UserLoadedBackend
==============
*/

void __fastcall StreamKey_UserLoadedBackend(const StreamKey *streamKey)
{
  ?StreamKey_UserLoadedBackend@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
StreamKey_UserDBPreRelease
==============
*/

void __fastcall StreamKey_UserDBPreRelease(StreamKey *streamKey)
{
  ?StreamKey_UserDBPreRelease@@YAXPEAUStreamKey@@@Z(streamKey);
}

/*
==============
StreamKey_UserPtrFixupRelocateBackend
==============
*/

void __fastcall StreamKey_UserPtrFixupRelocateBackend(const StreamKey *streamKey)
{
  ?StreamKey_UserPtrFixupRelocateBackend@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
StreamKey_SetBehavior
==============
*/

void __fastcall StreamKey_SetBehavior(StreamKeyBehaviorIndex index, StreamKeyBehavior *behavior)
{
  ?StreamKey_SetBehavior@@YAXW4StreamKeyBehaviorIndex@@UStreamKeyBehavior@@@Z(index, behavior);
}

/*
==============
StreamKey_UserForceFixedRegion
==============
*/

bool __fastcall StreamKey_UserForceFixedRegion(const StreamKey *streamKey)
{
  return ?StreamKey_UserForceFixedRegion@@YA_NPEBUStreamKey@@@Z(streamKey);
}

/*
==============
StreamKey_UserUnloadedFrontend
==============
*/

void __fastcall StreamKey_UserUnloadedFrontend(const StreamKey *streamKey)
{
  ?StreamKey_UserUnloadedFrontend@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
StreamKey_UserLoadedFrontend
==============
*/

void __fastcall StreamKey_UserLoadedFrontend(const StreamKey *streamKey)
{
  ?StreamKey_UserLoadedFrontend@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
StreamKey_UserPtrFixupNewBackend
==============
*/

void __fastcall StreamKey_UserPtrFixupNewBackend(const StreamKey *streamKey)
{
  ?StreamKey_UserPtrFixupNewBackend@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
Load_StreamKeyResident
==============
*/

void __fastcall Load_StreamKeyResident(StreamKey *streamKey)
{
  ?Load_StreamKeyResident@@YAXPEAUStreamKey@@@Z(streamKey);
}

/*
==============
StreamKey_UserUnloadedBackend
==============
*/

void __fastcall StreamKey_UserUnloadedBackend(const StreamKey *streamKey)
{
  ?StreamKey_UserUnloadedBackend@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
StreamKey_UserUnmapOldAddressBackend
==============
*/

void __fastcall StreamKey_UserUnmapOldAddressBackend(const StreamKey *streamKey)
{
  ?StreamKey_UserUnmapOldAddressBackend@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
StreamKey_UserAlignment
==============
*/

unsigned int __fastcall StreamKey_UserAlignment(const StreamKey *streamKey)
{
  return ?StreamKey_UserAlignment@@YAIPEBUStreamKey@@@Z(streamKey);
}

/*
==============
Load_StreamKeyResident
==============
*/
void Load_StreamKeyResident(StreamKey *streamKey)
{
  StreamKeyBehaviorIndex behaviorIndex; 
  void (__fastcall *loadedFrontend)(const StreamKey *); 
  StreamKeyBehaviorIndex v4; 
  void (__fastcall *loadedBackend)(const StreamKey *); 
  __int64 v6; 
  __int64 v7; 

  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 193, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
    __debugbreak();
  if ( (streamKey->flags & 2) != 0 )
  {
    behaviorIndex = streamKey->behaviorIndex;
    if ( behaviorIndex )
    {
      if ( (unsigned __int8)behaviorIndex >= SKBI_COUNT )
      {
        LODWORD(v6) = (unsigned __int8)behaviorIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 25, ASSERT_TYPE_ASSERT, "(unsigned)( streamKey->behaviorIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamKeyBehaviors ) ) + 0 ) )", "streamKey->behaviorIndex doesn't index ARRAY_COUNT( s_streamKeyBehaviors )\n\t%i not in [0, %i)", v6, 5) )
          __debugbreak();
      }
      loadedFrontend = s_streamKeyBehaviors[(unsigned __int8)streamKey->behaviorIndex].loadedFrontend;
      if ( loadedFrontend )
        loadedFrontend(streamKey);
    }
    if ( (streamKey->flags & 2) == 0 && !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 38, ASSERT_TYPE_ASSERT, "(streamKey->Resident() || Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "streamKey->Resident() || Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
      __debugbreak();
    v4 = streamKey->behaviorIndex;
    if ( v4 )
    {
      if ( (unsigned __int8)v4 >= SKBI_COUNT )
      {
        LODWORD(v7) = 5;
        LODWORD(v6) = (unsigned __int8)v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 42, ASSERT_TYPE_ASSERT, "(unsigned)( streamKey->behaviorIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamKeyBehaviors ) ) + 0 ) )", "streamKey->behaviorIndex doesn't index ARRAY_COUNT( s_streamKeyBehaviors )\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      loadedBackend = s_streamKeyBehaviors[(unsigned __int8)streamKey->behaviorIndex].loadedBackend;
      if ( loadedBackend )
        loadedBackend(streamKey);
    }
  }
}

/*
==============
StreamKey_SetBehavior
==============
*/
void StreamKey_SetBehavior(StreamKeyBehaviorIndex index, StreamKeyBehavior *behavior)
{
  int v9; 
  int v10; 

  _RDI = behavior;
  if ( (unsigned __int8)index >= SKBI_COUNT )
  {
    v10 = 5;
    v9 = (unsigned __int8)index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 14, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_streamKeyBehaviors ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_streamKeyBehaviors )\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymm1, ymmword ptr [rdi+20h]
  }
  _RCX = 9i64 * (unsigned __int8)index;
  _RAX = s_streamKeyBehaviors;
  __asm
  {
    vmovups ymmword ptr [rax+rcx*8], ymm0
    vmovsd  xmm0, qword ptr [rdi+40h]
    vmovups ymmword ptr [rax+rcx*8+20h], ymm1
    vmovsd  qword ptr [rax+rcx*8+40h], xmm0
  }
}

/*
==============
StreamKey_UserAlignment
==============
*/
__int64 StreamKey_UserAlignment(const StreamKey *streamKey)
{
  StreamKeyBehaviorIndex behaviorIndex; 
  bool v3; 
  unsigned int *p_alignment; 
  int v6; 
  int v7; 

  behaviorIndex = streamKey->behaviorIndex;
  if ( behaviorIndex == SKBI_NONE )
    return 16i64;
  if ( (unsigned __int8)behaviorIndex >= SKBI_COUNT )
  {
    v7 = 5;
    v6 = (unsigned __int8)behaviorIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 178, ASSERT_TYPE_ASSERT, "(unsigned)( streamKey->behaviorIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamKeyBehaviors ) ) + 0 ) )", "streamKey->behaviorIndex doesn't index ARRAY_COUNT( s_streamKeyBehaviors )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  v3 = s_streamKeyBehaviors[(unsigned __int8)streamKey->behaviorIndex].alignment < 0x10;
  p_alignment = &s_streamKeyBehaviors[(unsigned __int8)streamKey->behaviorIndex].alignment;
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 180, ASSERT_TYPE_ASSERT, "(behavior.alignment >= DEFAULT_STREAM_KEY_ALIGNMENT)", (const char *)&queryFormat, "behavior.alignment >= DEFAULT_STREAM_KEY_ALIGNMENT") )
    __debugbreak();
  if ( ((*p_alignment - 1) & *p_alignment) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 181, ASSERT_TYPE_ASSERT, "(IsPowerOf2( behavior.alignment ))", (const char *)&queryFormat, "IsPowerOf2( behavior.alignment )") )
    __debugbreak();
  return *p_alignment;
}

/*
==============
StreamKey_UserDBPreRelease
==============
*/
void StreamKey_UserDBPreRelease(StreamKey *streamKey)
{
  StreamKeyBehaviorIndex behaviorIndex; 
  void (__fastcall *dbPreRelease)(const StreamKey *); 
  __int64 v4; 

  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 89, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
    __debugbreak();
  behaviorIndex = streamKey->behaviorIndex;
  if ( behaviorIndex )
  {
    if ( (unsigned __int8)behaviorIndex >= SKBI_COUNT )
    {
      LODWORD(v4) = (unsigned __int8)behaviorIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 93, ASSERT_TYPE_ASSERT, "(unsigned)( streamKey->behaviorIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamKeyBehaviors ) ) + 0 ) )", "streamKey->behaviorIndex doesn't index ARRAY_COUNT( s_streamKeyBehaviors )\n\t%i not in [0, %i)", v4, 5) )
        __debugbreak();
    }
    dbPreRelease = s_streamKeyBehaviors[(unsigned __int8)streamKey->behaviorIndex].dbPreRelease;
    if ( dbPreRelease )
      dbPreRelease(streamKey);
    streamKey->behaviorIndex = SKBI_NONE;
    streamKey->assetHash = 0i64;
  }
}

/*
==============
StreamKey_UserForceFixedRegion
==============
*/
bool StreamKey_UserForceFixedRegion(const StreamKey *streamKey)
{
  StreamKeyBehaviorIndex behaviorIndex; 
  int v4; 
  int v5; 

  behaviorIndex = streamKey->behaviorIndex;
  if ( behaviorIndex == SKBI_NONE )
    return 0;
  if ( (unsigned __int8)behaviorIndex >= SKBI_COUNT )
  {
    v5 = 5;
    v4 = (unsigned __int8)behaviorIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 161, ASSERT_TYPE_ASSERT, "(unsigned)( streamKey->behaviorIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamKeyBehaviors ) ) + 0 ) )", "streamKey->behaviorIndex doesn't index ARRAY_COUNT( s_streamKeyBehaviors )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return s_streamKeyBehaviors[(unsigned __int8)streamKey->behaviorIndex].forceFixedRegion;
}

/*
==============
StreamKey_UserLoadedBackend
==============
*/
void StreamKey_UserLoadedBackend(const StreamKey *streamKey)
{
  StreamKeyBehaviorIndex behaviorIndex; 
  void (__fastcall *loadedBackend)(const StreamKey *); 
  __int64 v4; 

  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 37, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
    __debugbreak();
  if ( (streamKey->flags & 2) == 0 && !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 38, ASSERT_TYPE_ASSERT, "(streamKey->Resident() || Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "streamKey->Resident() || Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  behaviorIndex = streamKey->behaviorIndex;
  if ( behaviorIndex )
  {
    if ( (unsigned __int8)behaviorIndex >= SKBI_COUNT )
    {
      LODWORD(v4) = (unsigned __int8)behaviorIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 42, ASSERT_TYPE_ASSERT, "(unsigned)( streamKey->behaviorIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamKeyBehaviors ) ) + 0 ) )", "streamKey->behaviorIndex doesn't index ARRAY_COUNT( s_streamKeyBehaviors )\n\t%i not in [0, %i)", v4, 5) )
        __debugbreak();
    }
    loadedBackend = s_streamKeyBehaviors[(unsigned __int8)streamKey->behaviorIndex].loadedBackend;
    if ( loadedBackend )
      loadedBackend(streamKey);
  }
}

/*
==============
StreamKey_UserLoadedFrontend
==============
*/
void StreamKey_UserLoadedFrontend(const StreamKey *streamKey)
{
  StreamKeyBehaviorIndex behaviorIndex; 
  void (__fastcall *loadedFrontend)(const StreamKey *); 
  __int64 v4; 

  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 21, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
    __debugbreak();
  behaviorIndex = streamKey->behaviorIndex;
  if ( behaviorIndex )
  {
    if ( (unsigned __int8)behaviorIndex >= SKBI_COUNT )
    {
      LODWORD(v4) = (unsigned __int8)behaviorIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 25, ASSERT_TYPE_ASSERT, "(unsigned)( streamKey->behaviorIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamKeyBehaviors ) ) + 0 ) )", "streamKey->behaviorIndex doesn't index ARRAY_COUNT( s_streamKeyBehaviors )\n\t%i not in [0, %i)", v4, 5) )
        __debugbreak();
    }
    loadedFrontend = s_streamKeyBehaviors[(unsigned __int8)streamKey->behaviorIndex].loadedFrontend;
    if ( loadedFrontend )
      loadedFrontend(streamKey);
  }
}

/*
==============
StreamKey_UserPtrFixupNewBackend
==============
*/
void StreamKey_UserPtrFixupNewBackend(const StreamKey *streamKey)
{
  StreamKeyBehaviorIndex behaviorIndex; 
  void (__fastcall *ptrFixupNewBackend)(const StreamKey *); 
  __int64 v4; 

  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 109, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
    __debugbreak();
  if ( (streamKey->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 110, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
    __debugbreak();
  behaviorIndex = streamKey->behaviorIndex;
  if ( behaviorIndex )
  {
    if ( (unsigned __int8)behaviorIndex >= SKBI_COUNT )
    {
      LODWORD(v4) = (unsigned __int8)behaviorIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 114, ASSERT_TYPE_ASSERT, "(unsigned)( streamKey->behaviorIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamKeyBehaviors ) ) + 0 ) )", "streamKey->behaviorIndex doesn't index ARRAY_COUNT( s_streamKeyBehaviors )\n\t%i not in [0, %i)", v4, 5) )
        __debugbreak();
    }
    ptrFixupNewBackend = s_streamKeyBehaviors[(unsigned __int8)streamKey->behaviorIndex].ptrFixupNewBackend;
    if ( ptrFixupNewBackend )
      ptrFixupNewBackend(streamKey);
  }
}

/*
==============
StreamKey_UserPtrFixupRelocateBackend
==============
*/
void StreamKey_UserPtrFixupRelocateBackend(const StreamKey *streamKey)
{
  StreamKeyBehaviorIndex behaviorIndex; 
  void (__fastcall *ptrFixupRelocateBackend)(const StreamKey *); 
  __int64 v4; 

  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 126, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
    __debugbreak();
  if ( (streamKey->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 127, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
    __debugbreak();
  behaviorIndex = streamKey->behaviorIndex;
  if ( behaviorIndex )
  {
    if ( (unsigned __int8)behaviorIndex >= SKBI_COUNT )
    {
      LODWORD(v4) = (unsigned __int8)behaviorIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 131, ASSERT_TYPE_ASSERT, "(unsigned)( streamKey->behaviorIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamKeyBehaviors ) ) + 0 ) )", "streamKey->behaviorIndex doesn't index ARRAY_COUNT( s_streamKeyBehaviors )\n\t%i not in [0, %i)", v4, 5) )
        __debugbreak();
    }
    ptrFixupRelocateBackend = s_streamKeyBehaviors[(unsigned __int8)streamKey->behaviorIndex].ptrFixupRelocateBackend;
    if ( ptrFixupRelocateBackend )
      ptrFixupRelocateBackend(streamKey);
  }
}

/*
==============
StreamKey_UserUnloadedBackend
==============
*/
void StreamKey_UserUnloadedBackend(const StreamKey *streamKey)
{
  StreamKeyBehaviorIndex behaviorIndex; 
  void (__fastcall *unloadedBackend)(const StreamKey *); 
  __int64 v4; 

  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 71, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
    __debugbreak();
  if ( (streamKey->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 72, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 73, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ) || !Stream_IsEnabled())", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ) || !Stream_IsEnabled()") )
    __debugbreak();
  behaviorIndex = streamKey->behaviorIndex;
  if ( behaviorIndex )
  {
    if ( (unsigned __int8)behaviorIndex >= SKBI_COUNT )
    {
      LODWORD(v4) = (unsigned __int8)behaviorIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( streamKey->behaviorIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamKeyBehaviors ) ) + 0 ) )", "streamKey->behaviorIndex doesn't index ARRAY_COUNT( s_streamKeyBehaviors )\n\t%i not in [0, %i)", v4, 5) )
        __debugbreak();
    }
    unloadedBackend = s_streamKeyBehaviors[(unsigned __int8)streamKey->behaviorIndex].unloadedBackend;
    if ( unloadedBackend )
      unloadedBackend(streamKey);
  }
}

/*
==============
StreamKey_UserUnloadedFrontend
==============
*/
void StreamKey_UserUnloadedFrontend(const StreamKey *streamKey)
{
  StreamKeyBehaviorIndex behaviorIndex; 
  void (__fastcall *unloadedFrontend)(const StreamKey *); 
  __int64 v4; 

  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 54, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
    __debugbreak();
  if ( (streamKey->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 55, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
    __debugbreak();
  behaviorIndex = streamKey->behaviorIndex;
  if ( behaviorIndex )
  {
    if ( (unsigned __int8)behaviorIndex >= SKBI_COUNT )
    {
      LODWORD(v4) = (unsigned __int8)behaviorIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 59, ASSERT_TYPE_ASSERT, "(unsigned)( streamKey->behaviorIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamKeyBehaviors ) ) + 0 ) )", "streamKey->behaviorIndex doesn't index ARRAY_COUNT( s_streamKeyBehaviors )\n\t%i not in [0, %i)", v4, 5) )
        __debugbreak();
    }
    unloadedFrontend = s_streamKeyBehaviors[(unsigned __int8)streamKey->behaviorIndex].unloadedFrontend;
    if ( unloadedFrontend )
      unloadedFrontend(streamKey);
  }
}

/*
==============
StreamKey_UserUnmapOldAddressBackend
==============
*/
void StreamKey_UserUnmapOldAddressBackend(const StreamKey *streamKey)
{
  StreamKeyBehaviorIndex behaviorIndex; 
  void (__fastcall *unmapOldAddressBackend)(const StreamKey *); 
  __int64 v4; 

  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 143, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
    __debugbreak();
  if ( (streamKey->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 144, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
    __debugbreak();
  behaviorIndex = streamKey->behaviorIndex;
  if ( behaviorIndex )
  {
    if ( (unsigned __int8)behaviorIndex >= SKBI_COUNT )
    {
      LODWORD(v4) = (unsigned __int8)behaviorIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_key_behavior.cpp", 147, ASSERT_TYPE_ASSERT, "(unsigned)( streamKey->behaviorIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamKeyBehaviors ) ) + 0 ) )", "streamKey->behaviorIndex doesn't index ARRAY_COUNT( s_streamKeyBehaviors )\n\t%i not in [0, %i)", v4, 5) )
        __debugbreak();
    }
    unmapOldAddressBackend = s_streamKeyBehaviors[(unsigned __int8)streamKey->behaviorIndex].unmapOldAddressBackend;
    if ( unmapOldAddressBackend )
      unmapOldAddressBackend(streamKey);
  }
}

