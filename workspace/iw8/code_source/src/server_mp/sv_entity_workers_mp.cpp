/*
==============
SV_EntityWorkersMP_GetAllocationSize
==============
*/

unsigned int __fastcall SV_EntityWorkersMP_GetAllocationSize()
{
  return ?SV_EntityWorkersMP_GetAllocationSize@@YAIXZ();
}

/*
==============
SV_EntityWorkersMP_AddEntityNotify
==============
*/

bool __fastcall SV_EntityWorkersMP_AddEntityNotify(const unsigned int entityIndex, const unsigned int notifyIndex)
{
  return ?SV_EntityWorkersMP_AddEntityNotify@@YA_NII@Z(entityIndex, notifyIndex);
}

/*
==============
SV_EntityWorkersMP_ShutdownMemory
==============
*/

void SV_EntityWorkersMP_ShutdownMemory(void)
{
  ?SV_EntityWorkersMP_ShutdownMemory@@YAXXZ();
}

/*
==============
SV_EntityWorkersMP_StartEntityNotifyUpdate
==============
*/

void SV_EntityWorkersMP_StartEntityNotifyUpdate(void)
{
  ?SV_EntityWorkersMP_StartEntityNotifyUpdate@@YAXXZ();
}

/*
==============
SV_EntityWorkersMP_EntityNotifyCmd
==============
*/

void __fastcall SV_EntityWorkersMP_EntityNotifyCmd(const void *const cmdInfo)
{
  ?SV_EntityWorkersMP_EntityNotifyCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_EntityWorkersMP_ClearEntityNotifyUpdate
==============
*/

void SV_EntityWorkersMP_ClearEntityNotifyUpdate(void)
{
  ?SV_EntityWorkersMP_ClearEntityNotifyUpdate@@YAXXZ();
}

/*
==============
SV_EntityWorkersMP_AllocateMemory
==============
*/

void __fastcall SV_EntityWorkersMP_AllocateMemory(HunkUser *hunkUser)
{
  ?SV_EntityWorkersMP_AllocateMemory@@YAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
SV_EntityWorkersMP_FinishEntityNotifyUpdate
==============
*/

unsigned int __fastcall SV_EntityWorkersMP_FinishEntityNotifyUpdate(const EntityNotifyList **outNotifyLists)
{
  return ?SV_EntityWorkersMP_FinishEntityNotifyUpdate@@YAIPEAPEBUEntityNotifyList@@@Z(outNotifyLists);
}

/*
==============
SV_EntityWorkersMP_AddEntityNotifyUpdate
==============
*/

void __fastcall SV_EntityWorkersMP_AddEntityNotifyUpdate(const unsigned int entityIndex, const scr_string_t notifyString)
{
  ?SV_EntityWorkersMP_AddEntityNotifyUpdate@@YAXIW4scr_string_t@@@Z(entityIndex, notifyString);
}

/*
==============
SV_EntityWorkersMP_AddEntityNotify
==============
*/
bool SV_EntityWorkersMP_AddEntityNotify(const unsigned int entityIndex, const unsigned int notifyIndex)
{
  unsigned __int64 v2; 
  __int64 v4; 
  __int64 v5; 
  _DWORD *v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v10; 
  __int64 v11; 

  v2 = notifyIndex;
  if ( entityIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entity_workers_mp.cpp", 170, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityIndex, 2048) )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x800 )
  {
    LODWORD(v11) = 2048;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entity_workers_mp.cpp", 171, ASSERT_TYPE_ASSERT, "(unsigned)( notifyIndex ) < (unsigned)( ( 2048 ) )", "notifyIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v4 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1032i64);
  if ( v4 )
  {
    if ( entityIndex != *(unsigned __int16 *)(v4 + 4) )
    {
      LODWORD(v11) = *(unsigned __int16 *)(v4 + 4);
      LODWORD(v10) = entityIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entity_workers_mp.cpp", 175, ASSERT_TYPE_ASSERT, "( entityIndex ) == ( s_notifyList->notifyEntity )", "entityIndex == s_notifyList->notifyEntity\n\t%i, %i", v10, v11) )
        __debugbreak();
    }
    v5 = 8i64 * tls_index;
    v6 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v5) + 1032i64) + 4 * (v2 >> 5) + 8);
    v7 = 0x80000000 >> (v2 & 0x1F);
    if ( (*v6 & v7) == 0 )
    {
      *v6 |= v7;
      v8 = *(_QWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v5) + 1032i64);
      ++*(_WORD *)(v8 + 6);
    }
    LOBYTE(v4) = 1;
  }
  return v4;
}

/*
==============
SV_EntityWorkersMP_AddEntityNotifyUpdate
==============
*/
void SV_EntityWorkersMP_AddEntityNotifyUpdate(const unsigned int entityIndex, const scr_string_t notifyString)
{
  EntityNotifyList *v4; 
  EntityNotifyWorker *v5; 
  __int64 v6; 
  __int64 v7; 

  if ( entityIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entity_workers_mp.cpp", 79, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityIndex, 2048) )
    __debugbreak();
  if ( s_notifyCount >= 0x200 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entity_workers_mp.cpp", 101, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Too many notification updates being processed in a single frame") )
      __debugbreak();
  }
  else
  {
    v4 = &s_notifyWorkersOutput[s_notifyCount];
    v5 = &s_notifyWorkers[s_notifyCount & 0xF];
    memset_0(&v4->notifyEntity, 0, 0x104ui64);
    v4->notifyString = notifyString;
    v4->notifyEntity = truncate_cast<unsigned short,unsigned int>(entityIndex);
    if ( v5->notifyCount >= 0x20u )
    {
      LODWORD(v7) = 32;
      LODWORD(v6) = v5->notifyCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entity_workers_mp.cpp", 93, ASSERT_TYPE_ASSERT, "(unsigned)( worker->notifyCount ) < (unsigned)( (512 / 16) )", "worker->notifyCount doesn't index MAX_NOTIFIES_PER_WORKER\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    v5->notifyList[v5->notifyCount++] = v4;
    ++s_notifyCount;
  }
}

/*
==============
SV_EntityWorkersMP_AllocateMemory
==============
*/
void SV_EntityWorkersMP_AllocateMemory(HunkUser *hunkUser)
{
  if ( s_notifyWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entity_workers_mp.cpp", 50, ASSERT_TYPE_ASSERT, "( s_notifyWorkers == nullptr )", (const char *)&queryFormat, "s_notifyWorkers == nullptr") )
    __debugbreak();
  s_notifyWorkers = (EntityNotifyWorker *)Mem_HunkUser_AllocInternal(hunkUser, 0x1080ui64, 0x80ui64, "SV_EntityWorkersMP_AllocateMemory");
  memset_0(s_notifyWorkers, 0, 0x1080ui64);
  if ( s_notifyWorkersOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entity_workers_mp.cpp", 54, ASSERT_TYPE_ASSERT, "( s_notifyWorkersOutput == nullptr )", (const char *)&queryFormat, "s_notifyWorkersOutput == nullptr") )
    __debugbreak();
  s_notifyWorkersOutput = (EntityNotifyList *)Mem_HunkUser_AllocInternal(hunkUser, 0x21000ui64, 0x80ui64, "SV_EntityWorkersMP_AllocateMemory");
  memset_0(s_notifyWorkersOutput, 0, 0x21000ui64);
}

/*
==============
SV_EntityWorkersMP_ClearEntityNotifyUpdate
==============
*/
void SV_EntityWorkersMP_ClearEntityNotifyUpdate(void)
{
  memset_0(s_notifyWorkers, 0, 0x1080ui64);
  s_notifyCount = 0;
}

/*
==============
SV_EntityWorkersMP_EntityNotifyCmd
==============
*/
void SV_EntityWorkersMP_EntityNotifyCmd(const void *const cmdInfo)
{
  __int64 v1; 
  bool v2; 
  __int64 v4; 
  __int64 v5; 
  const void *v6; 
  __int64 v7; 
  unsigned __int16 v8; 
  EntityNotifyWorker *v9; 
  EntityNotifyList **v10; 
  EntityNotifyList *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v1 = tls_index;
  v2 = (_BYTE)GStatic::ms_allocatedType == NONE;
  v4 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v5 = *(_QWORD *)(v4 + 272);
  *(_QWORD *)(v4 + 272) = 0i64;
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 103, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 104, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to set the active bgs to the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
    __debugbreak();
  v6 = *(const void **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 272i64);
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 105, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == 0 )", v6) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 272i64) = *(_QWORD *)&GStatic::ms_gameStatics;
  if ( *(_WORD *)cmdInfo >= 0x10u )
  {
    LODWORD(v14) = 16;
    LODWORD(v13) = *(unsigned __int16 *)cmdInfo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entity_workers_mp.cpp", 151, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->workerIndex ) < (unsigned)( 16 )", "cmd->workerIndex doesn't index MAX_ENTITY_NOTIFY_WRKCMDS\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v7 = *(unsigned __int16 *)cmdInfo;
  v8 = 0;
  v9 = &s_notifyWorkers[v7];
  if ( v9->notifyCount )
  {
    v10 = (EntityNotifyList **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 1032i64);
    do
    {
      v11 = v9->notifyList[v8];
      *v10 = v11;
      G_Main_ProcessEntityNotifies(v11->notifyEntity);
      ++v8;
      v10 = (EntityNotifyList **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 1032i64);
      *v10 = NULL;
    }
    while ( v8 < v9->notifyCount );
  }
  if ( !(_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 113, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 114, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to clear the active bgs from the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
    __debugbreak();
  v12 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1);
  if ( *(_QWORD *)(v12 + 272) != *(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 115, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_gameStatics ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == ms_gameStatics )", *(const void **)(v12 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 272i64) = v5;
}

/*
==============
SV_EntityWorkersMP_FinishEntityNotifyUpdate
==============
*/
__int64 SV_EntityWorkersMP_FinishEntityNotifyUpdate(const EntityNotifyList **outNotifyLists)
{
  if ( !outNotifyLists && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entity_workers_mp.cpp", 134, ASSERT_TYPE_ASSERT, "( outNotifyLists != nullptr )", (const char *)&queryFormat, "outNotifyLists != nullptr") )
    __debugbreak();
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SV_ENTITY_NOTIFIES);
  *outNotifyLists = s_notifyWorkersOutput;
  return s_notifyCount;
}

/*
==============
SV_EntityWorkersMP_GetAllocationSize
==============
*/
__int64 SV_EntityWorkersMP_GetAllocationSize()
{
  return 135168i64;
}

/*
==============
SV_EntityWorkersMP_ShutdownMemory
==============
*/
void SV_EntityWorkersMP_ShutdownMemory(void)
{
  s_notifyWorkers = NULL;
  s_notifyWorkersOutput = NULL;
}

/*
==============
SV_EntityWorkersMP_StartEntityNotifyUpdate
==============
*/
void SV_EntityWorkersMP_StartEntityNotifyUpdate(void)
{
  unsigned int v0; 
  unsigned int v1; 
  __int64 v2; 
  const dvar_t *v3; 
  __int16 data; 

  if ( s_notifyCount )
  {
    v0 = 16;
    if ( (int)s_notifyCount < 16 )
      v0 = s_notifyCount;
    v1 = 0;
    if ( v0 )
    {
      v2 = 0i64;
      do
      {
        if ( v1 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v1, "unsigned", v2) )
          __debugbreak();
        v3 = DCONST_DVARBOOL_sv_entityWorkersEnabled;
        data = v1;
        if ( !DCONST_DVARBOOL_sv_entityWorkersEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_entityWorkersEnabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v3);
        if ( v3->current.enabled )
          Sys_AddWorkerCmd(WRKCMD_SV_ENTITY_NOTIFIES, &data);
        else
          SV_EntityWorkersMP_EntityNotifyCmd(&data);
        ++v1;
        ++v2;
      }
      while ( v1 < v0 );
    }
  }
}

