/*
==============
G_SaveMemory_TriggerSaveExistTask
==============
*/

void G_SaveMemory_TriggerSaveExistTask(void)
{
  ?G_SaveMemory_TriggerSaveExistTask@@YAXXZ();
}

/*
==============
SaveMemory_CalculateChecksum
==============
*/

int __fastcall SaveMemory_CalculateChecksum(const SaveGame *save)
{
  return ?SaveMemory_CalculateChecksum@@YAHPEBUSaveGame@@@Z(save);
}

/*
==============
G_SaveMemory_CheckSaveExistTaskComplete
==============
*/

bool __fastcall G_SaveMemory_CheckSaveExistTaskComplete(bool *outSaveExists)
{
  return ?G_SaveMemory_CheckSaveExistTaskComplete@@YA_NPEA_N@Z(outSaveExists);
}

/*
==============
G_SaveMemory_ValidateHeaderCommon
==============
*/

bool __fastcall G_SaveMemory_ValidateHeaderCommon(SaveHeader *header)
{
  return ?G_SaveMemory_ValidateHeaderCommon@@YA_NPEAUSaveHeader@@@Z(header);
}

/*
==============
G_SaveMemory_CheckSaveExistTaskInProgress
==============
*/

bool __fastcall G_SaveMemory_CheckSaveExistTaskInProgress()
{
  return ?G_SaveMemory_CheckSaveExistTaskInProgress@@YA_NXZ();
}

/*
==============
SaveMemory_GetBuildType
==============
*/

BuildType __fastcall SaveMemory_GetBuildType()
{
  return ?SaveMemory_GetBuildType@@YA?AW4BuildType@@XZ();
}

/*
==============
G_SaveMemory_InitializeLoadFromBuffer
==============
*/

void __fastcall G_SaveMemory_InitializeLoadFromBuffer(SaveGame *save, const unsigned __int8 *buffer, unsigned __int64 length, bool runtimeCompress)
{
  ?G_SaveMemory_InitializeLoadFromBuffer@@YAXPEAUSaveGame@@PEBE_K_N@Z(save, buffer, length, runtimeCompress);
}

/*
==============
G_SaveMemory_WaitForSaveTasksToComplete
==============
*/

void G_SaveMemory_WaitForSaveTasksToComplete(void)
{
  ?G_SaveMemory_WaitForSaveTasksToComplete@@YAXXZ();
}

/*
==============
G_SaveMemory_InitTaskThread
==============
*/

void G_SaveMemory_InitTaskThread(void)
{
  ?G_SaveMemory_InitTaskThread@@YAXXZ();
}

/*
==============
G_SaveMemory_ReadLoadFromDeviceCommon
==============
*/

MemCardFileHandle *__fastcall G_SaveMemory_ReadLoadFromDeviceCommon(MemCardFileHandle *result, const char *filename, int checksum, unsigned __int8 *buffer, SaveHeader *header, int saveBufferSize)
{
  return ?G_SaveMemory_ReadLoadFromDeviceCommon@@YA?AUMemCardFileHandle@@PEBDHPEAEPEAUSaveHeader@@H@Z(result, filename, checksum, buffer, header, saveBufferSize);
}

/*
==============
G_SaveMemory_InitializeLoad
==============
*/

void __fastcall G_SaveMemory_InitializeLoad(SaveGame *save)
{
  ?G_SaveMemory_InitializeLoad@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
SaveMemory_GetMemoryFile
==============
*/

MemoryFile *__fastcall SaveMemory_GetMemoryFile(SaveGame *save)
{
  return ?SaveMemory_GetMemoryFile@@YAPEAUMemoryFile@@PEAUSaveGame@@@Z(save);
}

/*
==============
SaveMemory_IsFromSameBuild
==============
*/

bool __fastcall SaveMemory_IsFromSameBuild(const SaveHeader *const header)
{
  return ?SaveMemory_IsFromSameBuild@@YA_NQEBUSaveHeader@@@Z(header);
}

/*
==============
G_SaveMemory_CheckSaveComplete
==============
*/

bool __fastcall G_SaveMemory_CheckSaveComplete()
{
  return ?G_SaveMemory_CheckSaveComplete@@YA_NXZ();
}

/*
==============
G_SaveMemory_CreateHeaderCommon
==============
*/

void __fastcall G_SaveMemory_CreateHeaderCommon(const char *cleanUserName, const char *description, const char *screenshot, int checksum, bool demoPlayback, SaveType saveType, int saveId, SaveHeader *header, MemoryFile *memFile)
{
  ?G_SaveMemory_CreateHeaderCommon@@YAXPEBD00H_NW4SaveType@@HPEAUSaveHeader@@PEAUMemoryFile@@@Z(cleanUserName, description, screenshot, checksum, demoPlayback, saveType, saveId, header, memFile);
}

/*
==============
SaveMemory_LoadRead
==============
*/

void __fastcall SaveMemory_LoadRead(void *buffer, int size, SaveGame *save)
{
  ?SaveMemory_LoadRead@@YAXPEAXHPEAUSaveGame@@@Z(buffer, size, save);
}

/*
==============
SaveMemory_WriteSaveToDeviceInternal
==============
*/

int __fastcall SaveMemory_WriteSaveToDeviceInternal(SaveGame *save)
{
  return ?SaveMemory_WriteSaveToDeviceInternal@@YAHPEAUSaveGame@@@Z(save);
}

/*
==============
SaveMemory_ComputeChecksum
==============
*/

unsigned int __fastcall SaveMemory_ComputeChecksum(const unsigned __int8 *data, unsigned __int64 len)
{
  return ?SaveMemory_ComputeChecksum@@YAIPEBE_K@Z(data, len);
}

/*
==============
G_SaveMemory_CheckSaveComplete
==============
*/
bool G_SaveMemory_CheckSaveComplete()
{
  return s_saveExistsTaskState == 2 || !s_saveExistsTaskState;
}

/*
==============
G_SaveMemory_CheckSaveExistTaskComplete
==============
*/
char G_SaveMemory_CheckSaveExistTaskComplete(bool *outSaveExists)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 720, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !outSaveExists && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 721, ASSERT_TYPE_ASSERT, "(outSaveExists)", (const char *)&queryFormat, "outSaveExists") )
    __debugbreak();
  if ( s_saveExistsTaskState == 2 )
  {
    *outSaveExists = s_saveExistsLastResult;
    if ( ((unsigned __int8)&s_saveExistsTaskState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_saveExistsTaskState) )
      __debugbreak();
    if ( _InterlockedExchange(&s_saveExistsTaskState, 0) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 727, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchange( &s_saveExistsTaskState, SAVE_CHECK_IDLE ) == SAVE_CHECK_FINISHED)", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_saveExistsTaskState, SAVE_CHECK_IDLE ) == SAVE_CHECK_FINISHED") )
      __debugbreak();
    return 1;
  }
  else
  {
    *outSaveExists = 0;
    return 0;
  }
}

/*
==============
G_SaveMemory_CheckSaveExistTaskInProgress
==============
*/
bool G_SaveMemory_CheckSaveExistTaskInProgress()
{
  return s_saveExistsTaskState == 1;
}

/*
==============
G_SaveMemory_CheckTasksThread
==============
*/
void __noreturn G_SaveMemory_CheckTasksThread(unsigned int threadContext)
{
  if ( threadContext == 15 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 762, ASSERT_TYPE_ASSERT, "( threadContext ) == ( THREAD_CONTEXT_SAVE_TASKS )", "%s == %s\n\t%i, %i", "threadContext", "THREAD_CONTEXT_SAVE_TASKS", threadContext, 15) )
    goto LABEL_4;
  while ( 1 )
  {
    __debugbreak();
    while ( 1 )
    {
LABEL_4:
      Sys_WaitSaveTasksEvent();
      if ( Live_ShouldPerformXboxPermissionsCheck_InSaveGameThread() )
        Live_PerformXboxPermissionsCheck_InSaveGameThread();
      if ( s_saveExistsTaskState == 1 )
      {
        if ( Com_FrontEnd_IsInFrontEnd() )
        {
          if ( Com_IsGameLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 784, ASSERT_TYPE_ASSERT, "(!Com_IsGameLocalServerRunning())", "%s\n\tTo support this in-game, we would need to implement thread safety (E.g. Sys_EnterCriticalSection( CRITSECT_ASYNC_GAME_SAVE ))", "!Com_IsGameLocalServerRunning()") )
            __debugbreak();
          s_saveExistsLastResult = SaveExists(DEFAULT_SAVE_NAME);
        }
        if ( ((unsigned __int8)&s_saveExistsTaskState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_saveExistsTaskState) )
          __debugbreak();
        if ( _InterlockedExchange(&s_saveExistsTaskState, 2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 789, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchange( &s_saveExistsTaskState, SAVE_CHECK_FINISHED ) == SAVE_CHECK_REQUESTED)", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_saveExistsTaskState, SAVE_CHECK_FINISHED ) == SAVE_CHECK_REQUESTED") )
          break;
      }
    }
  }
}

/*
==============
G_SaveMemory_CreateHeaderCommon
==============
*/
void G_SaveMemory_CreateHeaderCommon(const char *cleanUserName, const char *description, const char *screenshot, int checksum, bool demoPlayback, SaveType saveType, int saveId, SaveHeader *header, MemoryFile *memFile)
{
  const char *MapName; 
  const char *BuildNumber; 
  unsigned __int64 v15; 
  const scrContext_t *v16; 
  unsigned __int64 v17; 
  unsigned __int64 bufferSize; 

  if ( !cleanUserName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 95, ASSERT_TYPE_ASSERT, "( cleanUserName )", (const char *)&queryFormat, "cleanUserName") )
    __debugbreak();
  memset_0(header, 0, sizeof(SaveHeader));
  header->saveType = saveType;
  header->demoPlayback = demoPlayback;
  header->saveId = saveId;
  header->saveVersion = 321;
  header->gameModeType[0] = Com_GameMode_GetActiveGameMode();
  header->buildType = BUILDTYPE_DEVELOPMENT;
  MapName = SV_Game_GetMapName();
  Core_strcpy(header->mapName, 0x40ui64, MapName);
  BuildNumber = j_getBuildNumber();
  Core_strcpy(header->buildNumber, 0x80ui64, BuildNumber);
  header->gameCheckSum = checksum;
  Sys_ProfBeginNamedEvent(0xFFu, "SaveMemory_Checksum");
  v15 = j_CoD_XXH64(memFile->buffer, memFile->bufferSize, 0i64);
  header->saveCheckSum = v15 ^ HIDWORD(v15);
  Sys_ProfEndNamedEvent();
  header->ncsChecksum = NetConstStrings_GetChecksum();
  header->omnvarChecksum = BG_Omnvar_GetDataChecksum();
  v16 = ScriptContext_Server();
  Scr_GetChecksum(v16, header->scrCheckSum);
  if ( screenshot )
    Core_strcpy(header->screenShotName, 0x40ui64, screenshot);
  else
    header->screenShotName[0] = 0;
  Core_strcpy(header->filename, 0x40ui64, cleanUserName);
  if ( description )
    Core_strcpy_truncate_or_fill_zero(header->description, 0x100ui64, description);
  else
    header->description[0] = 0;
  Com_RealTime(0, &header->time);
  v17 = MemFile_CopySegments(memFile, 0, NULL);
  header->bodySize = truncate_cast<int,unsigned __int64>(v17);
  bufferSize = memFile->bufferSize;
  if ( (bufferSize > 0x7FFFFFFFFFFFFFFFi64 || bufferSize + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)bufferSize, "unsigned", memFile->bufferSize) )
    __debugbreak();
  if ( header->bodySize != (_DWORD)bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 147, ASSERT_TYPE_ASSERT, "(header->bodySize == truncate_cast<int>( memFile->bufferSize ))", (const char *)&queryFormat, "header->bodySize == truncate_cast<int>( memFile->bufferSize )") )
    __debugbreak();
  header->splitscreen = SV_Game_IsSplitscreen();
}

/*
==============
G_SaveMemory_InitTaskThread
==============
*/
void G_SaveMemory_InitTaskThread(void)
{
  Sys_SpawnSaveTasksThread((void (__fastcall *)(unsigned int))G_SaveMemory_CheckTasksThread);
}

/*
==============
G_SaveMemory_InitializeLoad
==============
*/
void G_SaveMemory_InitializeLoad(SaveGame *save)
{
  if ( save )
  {
    save->saveState = LOADING;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 55, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
      __debugbreak();
    MEMORY[0x430] = 4;
  }
}

/*
==============
G_SaveMemory_InitializeLoadFromBuffer
==============
*/
void G_SaveMemory_InitializeLoadFromBuffer(SaveGame *save, const unsigned __int8 *buffer, unsigned __int64 length, bool runtimeCompress)
{
  int v8; 
  bool v9; 
  unsigned __int64 v10; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 647, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  memset_0(save, 0, sizeof(SaveGame));
  MemFile_InitForReading(&save->memFile, length, (void *)buffer, runtimeCompress, StreamModeSource_InitializeLoadFromBuffer);
  v8 = truncate_cast<int,unsigned __int64>(length);
  v9 = save->memFile.buffer == NULL;
  save->header.bodySize = v8;
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 640, ASSERT_TYPE_ASSERT, "(save->memFile.buffer)", (const char *)&queryFormat, "save->memFile.buffer") )
    __debugbreak();
  v10 = j_CoD_XXH64(save->memFile.buffer, save->header.bodySize, 0i64);
  save->saveState = LOADING;
  save->header.saveCheckSum = v10 ^ HIDWORD(v10);
}

/*
==============
G_SaveMemory_ReadLoadFromDeviceCommon
==============
*/
MemCardFileHandle *G_SaveMemory_ReadLoadFromDeviceCommon(MemCardFileHandle *result, const char *filename, void *checksum, unsigned __int8 *buffer, SaveHeader *header)
{
  int v6; 
  const char *v9; 
  unsigned __int8 *v10; 
  unsigned int v11; 
  int v12; 
  int v13; 
  unsigned int v14; 
  unsigned int DataChecksum; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  MemCardFileHandle fileHandle; 

  v6 = (int)filename;
  Com_Printf(10, "Opening save filename: \"%s\"\n", (const char *)result);
  if ( OpenDevice((const char *)result, &fileHandle) < 0 )
  {
    CloseDevice(fileHandle);
    MemCard_PopUseDevDrive();
    G_SaveError(SAVE_ERROR_CANNOT_LOAD, &byte_143E2B538, result);
  }
  if ( ReadFromDevice(buffer, 0x380ui64, fileHandle) != 896 )
  {
    CloseDevice(fileHandle);
    MemCard_PopUseDevDrive();
    G_SaveError(SAVE_ERROR_CANNOT_LOAD, &byte_143E2B568);
  }
  if ( *(_DWORD *)buffer == 321 && buffer[818] == 1 )
  {
    v9 = (const char *)(buffer + 136);
    v10 = buffer + 584;
  }
  else
  {
    CloseDevice(fileHandle);
    MemCard_PopUseDevDrive();
    v9 = (const char *)(buffer + 136);
    v10 = buffer + 584;
    v20 = 1;
    v19 = buffer[818];
    v18 = 321;
    G_SaveError(SAVE_ERROR_CANNOT_LOAD, &byte_143E2B590, buffer + 584, *(unsigned int *)buffer, v18, v19, v20, buffer + 136);
  }
  if ( buffer[817] != (unsigned __int8)Com_GameMode_GetActiveGameMode() )
  {
    CloseDevice(fileHandle);
    MemCard_PopUseDevDrive();
    LODWORD(v17) = (unsigned __int8)Com_GameMode_GetActiveGameMode();
    G_SaveError(SAVE_ERROR_CANNOT_LOAD, &byte_143E2B610, v10, buffer[817], v17, v9);
  }
  v11 = *((_DWORD *)buffer + 162);
  if ( v11 && ReadFromDevice(NULL, v11, fileHandle) != *((_DWORD *)buffer + 162) )
  {
    CloseDevice(fileHandle);
    MemCard_PopUseDevDrive();
    G_SaveError(SAVE_ERROR_CANNOT_LOAD, &byte_143E2B668);
  }
  v12 = *((_DWORD *)buffer + 17);
  v13 = (int)header;
  if ( v12 > (int)header )
  {
    CloseDevice(fileHandle);
    MemCard_PopUseDevDrive();
    LODWORD(v17) = v13;
    G_SaveError(SAVE_ERROR_CANNOT_LOAD, &byte_143E2B6A0, result, *((unsigned int *)buffer + 17), v17);
    v12 = *((_DWORD *)buffer + 17);
  }
  if ( (unsigned int)ReadFromDevice(checksum, v12, fileHandle) != *((_DWORD *)buffer + 17) )
  {
    CloseDevice(fileHandle);
    MemCard_PopUseDevDrive();
    G_SaveError(SAVE_ERROR_CANNOT_LOAD, &byte_143E2B568);
  }
  if ( *((_DWORD *)buffer + 1) != v6 )
  {
    CloseDevice(fileHandle);
    MemCard_PopUseDevDrive();
    G_SaveError(SAVE_ERROR_CANNOT_LOAD, &byte_143E2B720, v9);
  }
  v14 = NetConstStrings_GetChecksum();
  if ( *((_DWORD *)buffer + 7) != v14 )
  {
    CloseDevice(fileHandle);
    MemCard_PopUseDevDrive();
    G_SaveError(SAVE_ERROR_CANNOT_LOAD, &byte_143E2B770, *((unsigned int *)buffer + 7), v14, v9);
  }
  DataChecksum = BG_Omnvar_GetDataChecksum();
  if ( *((_DWORD *)buffer + 163) != DataChecksum )
  {
    CloseDevice(fileHandle);
    MemCard_PopUseDevDrive();
    G_SaveError(SAVE_ERROR_CANNOT_LOAD, &byte_143E2B7F0, *((unsigned int *)buffer + 163), DataChecksum, v9);
  }
  Com_Printf(10, "Save game build number: %s\n", v9);
  return (MemCardFileHandle *)fileHandle.handle;
}

/*
==============
G_SaveMemory_TriggerSaveExistTask
==============
*/
void G_SaveMemory_TriggerSaveExistTask(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 699, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( ((unsigned __int8)&s_saveExistsTaskState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_saveExistsTaskState) )
    __debugbreak();
  if ( !_InterlockedCompareExchange(&s_saveExistsTaskState, 1, 0) )
    Sys_SetSaveTasksEvent();
}

/*
==============
G_SaveMemory_ValidateHeaderCommon
==============
*/
char G_SaveMemory_ValidateHeaderCommon(SaveHeader *header)
{
  __int64 saveVersion; 
  unsigned __int8 ActiveGameMode; 
  char *fmt; 
  __int64 v6; 

  if ( !header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 155, ASSERT_TYPE_ASSERT, "( header )", (const char *)&queryFormat, "header") )
    __debugbreak();
  saveVersion = (unsigned int)header->saveVersion;
  if ( (_DWORD)saveVersion == 321 && header->buildType == BUILDTYPE_DEVELOPMENT )
  {
    if ( header->gameModeType[0] == (unsigned __int8)Com_GameMode_GetActiveGameMode() )
    {
      return 1;
    }
    else
    {
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      Com_Printf(15, "Bad save game mode %d, expecting %d\n", (unsigned __int8)header->gameModeType[0], ActiveGameMode);
      return 0;
    }
  }
  else
  {
    LODWORD(v6) = 1;
    LODWORD(fmt) = (unsigned __int8)header->buildType;
    Com_Printf(15, "Bad save version %d expecting %d, or or buildtype %d expecting %d\n", saveVersion, 321i64, fmt, v6);
    return 0;
  }
}

/*
==============
G_SaveMemory_WaitForSaveTasksToComplete
==============
*/
void G_SaveMemory_WaitForSaveTasksToComplete(void)
{
  __int64 v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 744, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_saveExistsTaskState )
  {
    while ( 1 )
    {
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 720, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      if ( s_saveExistsTaskState == 2 )
        break;
      Sys_Sleep(1);
      if ( !s_saveExistsTaskState )
      {
        LODWORD(v0) = s_saveExistsTaskState;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 754, ASSERT_TYPE_ASSERT, "( s_saveExistsTaskState ) != ( SAVE_CHECK_IDLE )", "%s != %s\n\t%i, %i", "s_saveExistsTaskState", "SAVE_CHECK_IDLE", v0, 0i64) )
          __debugbreak();
      }
    }
    if ( ((unsigned __int8)&s_saveExistsTaskState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_saveExistsTaskState) )
      __debugbreak();
    if ( _InterlockedExchange(&s_saveExistsTaskState, 0) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 727, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchange( &s_saveExistsTaskState, SAVE_CHECK_IDLE ) == SAVE_CHECK_FINISHED)", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_saveExistsTaskState, SAVE_CHECK_IDLE ) == SAVE_CHECK_FINISHED") )
      __debugbreak();
    if ( s_saveExistsTaskState )
    {
      LODWORD(v0) = s_saveExistsTaskState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 756, ASSERT_TYPE_ASSERT, "( s_saveExistsTaskState ) == ( SAVE_CHECK_IDLE )", "%s == %s\n\t%i, %i", "s_saveExistsTaskState", "SAVE_CHECK_IDLE", v0, 0i64) )
        __debugbreak();
    }
  }
}

/*
==============
SaveMemory_CalculateChecksum
==============
*/
__int64 SaveMemory_CalculateChecksum(const SaveGame *save)
{
  unsigned __int64 v2; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 639, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( !save->memFile.buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 640, ASSERT_TYPE_ASSERT, "(save->memFile.buffer)", (const char *)&queryFormat, "save->memFile.buffer") )
    __debugbreak();
  v2 = j_CoD_XXH64(save->memFile.buffer, save->header.bodySize, 0i64);
  return HIDWORD(v2) ^ (unsigned int)v2;
}

/*
==============
SaveMemory_ComputeChecksum
==============
*/
__int64 SaveMemory_ComputeChecksum(const unsigned __int8 *data, unsigned __int64 len)
{
  unsigned __int64 v2; 

  v2 = j_CoD_XXH64(data, len, 0i64);
  return HIDWORD(v2) ^ (unsigned int)v2;
}

/*
==============
SaveMemory_GetBuildType
==============
*/
char SaveMemory_GetBuildType()
{
  return 1;
}

/*
==============
SaveMemory_GetMemoryFile
==============
*/
MemoryFile *SaveMemory_GetMemoryFile(SaveGame *save)
{
  if ( save )
    return &save->memFile;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 658, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  return (MemoryFile *)896;
}

/*
==============
SaveMemory_IsFromSameBuild
==============
*/
bool SaveMemory_IsFromSameBuild(const SaveHeader *const header)
{
  return header->buildType == BUILDTYPE_DEVELOPMENT;
}

/*
==============
SaveMemory_LoadRead
==============
*/
void SaveMemory_LoadRead(void *buffer, int size, SaveGame *save)
{
  unsigned __int64 v3; 

  v3 = size;
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 62, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( save->saveState != LOADING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 63, ASSERT_TYPE_ASSERT, "( save->saveState == LOADING )", (const char *)&queryFormat, "save->saveState == LOADING") )
    __debugbreak();
  MemFile_ReadData(&save->memFile, v3, buffer);
}

/*
==============
SaveMemory_WriteSaveToDeviceInternal
==============
*/
__int64 SaveMemory_WriteSaveToDeviceInternal(SaveGame *save)
{
  unsigned __int64 bufferSize; 
  char *description; 
  int v4; 
  unsigned int v5; 
  int v6; 
  const char *v7; 

  bufferSize = save->memFile.bufferSize;
  if ( (bufferSize > 0x7FFFFFFFFFFFFFFFi64 || bufferSize + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)bufferSize, "unsigned", bufferSize) )
    __debugbreak();
  if ( (_DWORD)bufferSize != save->header.bodySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 672, ASSERT_TYPE_ASSERT, "(truncate_cast<int>( save->memFile.bufferSize ) == save->header.bodySize)", (const char *)&queryFormat, "truncate_cast<int>( save->memFile.bufferSize ) == save->header.bodySize") )
    __debugbreak();
  if ( !save->memFile.buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_savememory.cpp", 673, ASSERT_TYPE_ASSERT, "(save->memFile.buffer)", (const char *)&queryFormat, "save->memFile.buffer") )
    __debugbreak();
  description = save->header.description;
  Com_Printf(10, "Writing savegame \"%s\" to file \"%s\".\n", save->header.description, save->header.filename);
  v4 = Sys_Milliseconds();
  v5 = WriteSaveToDevice(save);
  v6 = Sys_Milliseconds();
  v7 = "Error writing savegame \"%s\".  Time spent writing: %i ms\n";
  if ( !v5 )
    v7 = "Done writing savegame \"%s\".  Time to write: %i ms\n";
  Com_Printf(10, v7, description, (unsigned int)(v6 - v4));
  return v5;
}

