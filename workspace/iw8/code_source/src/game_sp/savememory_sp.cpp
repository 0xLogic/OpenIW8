/*
==============
G_SaveMemorySP_IsSecondarySaveThreadInProgress
==============
*/

bool __fastcall G_SaveMemorySP_IsSecondarySaveThreadInProgress()
{
  return ?G_SaveMemorySP_IsSecondarySaveThreadInProgress@@YA_NXZ();
}

/*
==============
G_SaveMemorySP_WriteSaveToDevice
==============
*/

int __fastcall G_SaveMemorySP_WriteSaveToDevice(SaveGame *save)
{
  return ?G_SaveMemorySP_WriteSaveToDevice@@YAHPEAUSaveGame@@@Z(save);
}

/*
==============
G_SaveMemorySP_GetScriptWriteBuffer
==============
*/

unsigned __int8 *__fastcall G_SaveMemorySP_GetScriptWriteBuffer()
{
  return ?G_SaveMemorySP_GetScriptWriteBuffer@@YAPEAEXZ();
}

/*
==============
G_SaveMemorySP_IsSuccessful
==============
*/

bool __fastcall G_SaveMemorySP_IsSuccessful(SaveGame *save)
{
  return ?G_SaveMemorySP_IsSuccessful@@YA_NPEAUSaveGame@@@Z(save);
}

/*
==============
G_SaveMemorySP_ForceCommitSave
==============
*/

bool __fastcall G_SaveMemorySP_ForceCommitSave(SaveGame *save)
{
  return ?G_SaveMemorySP_ForceCommitSave@@YA_NPEAUSaveGame@@@Z(save);
}

/*
==============
G_SaveMemorySP_IsCommittedSaveAvailable
==============
*/

bool __fastcall G_SaveMemorySP_IsCommittedSaveAvailable(const char *filename, int checksum)
{
  return ?G_SaveMemorySP_IsCommittedSaveAvailable@@YA_NPEBDH@Z(filename, checksum);
}

/*
==============
G_SaveMemorySP_InitializeClientMemoryFile
==============
*/

void __fastcall G_SaveMemorySP_InitializeClientMemoryFile(MemoryFile *memoryFile)
{
  ?G_SaveMemorySP_InitializeClientMemoryFile@@YAXPEAUMemoryFile@@@Z(memoryFile);
}

/*
==============
G_SaveMemorySP_GetLastCommittedSave
==============
*/

SaveGame *__fastcall G_SaveMemorySP_GetLastCommittedSave()
{
  return ?G_SaveMemorySP_GetLastCommittedSave@@YAPEAUSaveGame@@XZ();
}

/*
==============
G_SaveMemorySP_IsCurrentCommittedSaveValid
==============
*/

bool __fastcall G_SaveMemorySP_IsCurrentCommittedSaveValid()
{
  return ?G_SaveMemorySP_IsCurrentCommittedSaveValid@@YA_NXZ();
}

/*
==============
G_SaveMemorySP_InitializeSecondarySaveThreadMemoryFile
==============
*/

void __fastcall G_SaveMemorySP_InitializeSecondarySaveThreadMemoryFile(MemoryFile *memoryFile)
{
  ?G_SaveMemorySP_InitializeSecondarySaveThreadMemoryFile@@YAXPEAUMemoryFile@@@Z(memoryFile);
}

/*
==============
G_SaveMemorySP_InitializeGameSave
==============
*/

void __fastcall G_SaveMemorySP_InitializeGameSave(SaveGame *save)
{
  ?G_SaveMemorySP_InitializeGameSave@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_SaveMemorySP_WaitForWritesToComplete
==============
*/

bool __fastcall G_SaveMemorySP_WaitForWritesToComplete(int isBlocking)
{
  return ?G_SaveMemorySP_WaitForWritesToComplete@@YA_NH@Z(isBlocking);
}

/*
==============
G_SaveMemorySP_CreateHeader
==============
*/

void __fastcall G_SaveMemorySP_CreateHeader(const char *cleanUserName, const char *description, const char *screenshot, int checksum, bool demoPlayback, bool suppressPlayerNotify, SaveType saveType, int saveId, SaveGame *save)
{
  ?G_SaveMemorySP_CreateHeader@@YAXPEBD00H_N1W4SaveType@@HPEAUSaveGame@@@Z(cleanUserName, description, screenshot, checksum, demoPlayback, suppressPlayerNotify, saveType, saveId, save);
}

/*
==============
G_SaveMemorySP_RollbackSave
==============
*/

void __fastcall G_SaveMemorySP_RollbackSave(SaveGame *save)
{
  ?G_SaveMemorySP_RollbackSave@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_SaveMemorySP_ClearForcedCommitFlag
==============
*/

void G_SaveMemorySP_ClearForcedCommitFlag(void)
{
  ?G_SaveMemorySP_ClearForcedCommitFlag@@YAXXZ();
}

/*
==============
G_SaveMemorySP_SetClientMemoryFileValid
==============
*/

void __fastcall G_SaveMemorySP_SetClientMemoryFileValid(bool valid)
{
  ?G_SaveMemorySP_SetClientMemoryFileValid@@YAX_N@Z(valid);
}

/*
==============
G_SaveMemorySP_CheckAndClearAsyncWriteError
==============
*/

bool __fastcall G_SaveMemorySP_CheckAndClearAsyncWriteError()
{
  return ?G_SaveMemorySP_CheckAndClearAsyncWriteError@@YA_NXZ();
}

/*
==============
G_SaveMemorySP_FinalizeLoad
==============
*/

void __fastcall G_SaveMemorySP_FinalizeLoad(SaveGame *save)
{
  ?G_SaveMemorySP_FinalizeLoad@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_SaveMemorySP_CommitSave
==============
*/

bool __fastcall G_SaveMemorySP_CommitSave(SaveGame *save)
{
  return ?G_SaveMemorySP_CommitSave@@YA_NPEAUSaveGame@@@Z(save);
}

/*
==============
G_SaveMemorySP_GetClientMemoryFileValid
==============
*/

bool __fastcall G_SaveMemorySP_GetClientMemoryFileValid()
{
  return ?G_SaveMemorySP_GetClientMemoryFileValid@@YA_NXZ();
}

/*
==============
G_SaveMemorySP_GetClientMemoryFile
==============
*/

MemoryFile *__fastcall G_SaveMemorySP_GetClientMemoryFile()
{
  return ?G_SaveMemorySP_GetClientMemoryFile@@YAPEAUMemoryFile@@XZ();
}

/*
==============
G_SaveMemorySP_CreateHeaderInternal
==============
*/

void __fastcall G_SaveMemorySP_CreateHeaderInternal(const char *cleanUserName, const char *description, const char *screenshot, int checksum, bool demoPlayback, bool suppressPlayerNotify, SaveType saveType, int saveId, SaveHeader *header, MemoryFile *memFile)
{
  ?G_SaveMemorySP_CreateHeaderInternal@@YAXPEBD00H_N1W4SaveType@@HPEAUSaveHeader@@PEAUMemoryFile@@@Z(cleanUserName, description, screenshot, checksum, demoPlayback, suppressPlayerNotify, saveType, saveId, header, memFile);
}

/*
==============
G_SaveMemorySP_MoveToSegment
==============
*/

void __fastcall G_SaveMemorySP_MoveToSegment(SaveGame *save, int index)
{
  ?G_SaveMemorySP_MoveToSegment@@YAXPEAUSaveGame@@H@Z(save, index);
}

/*
==============
G_SaveMemorySP_WriteLastCommittedSave
==============
*/

void G_SaveMemorySP_WriteLastCommittedSave(void)
{
  ?G_SaveMemorySP_WriteLastCommittedSave@@YAXXZ();
}

/*
==============
G_SaveMemorySP_GetSecondarySaveThreadMemoryFile
==============
*/

MemoryFile *__fastcall G_SaveMemorySP_GetSecondarySaveThreadMemoryFile()
{
  return ?G_SaveMemorySP_GetSecondarySaveThreadMemoryFile@@YAPEAUMemoryFile@@XZ();
}

/*
==============
G_SaveMemorySP_IsWaitingForCommit
==============
*/

bool __fastcall G_SaveMemorySP_IsWaitingForCommit(SaveGame *save)
{
  return ?G_SaveMemorySP_IsWaitingForCommit@@YA_NPEAUSaveGame@@@Z(save);
}

/*
==============
G_SaveMemorySP_IsLoading
==============
*/

bool __fastcall G_SaveMemorySP_IsLoading(SaveGame *save)
{
  return ?G_SaveMemorySP_IsLoading@@YA_NPEAUSaveGame@@@Z(save);
}

/*
==============
G_SaveMemorySP_GetHeader
==============
*/

const SaveHeader *__fastcall G_SaveMemorySP_GetHeader(SaveGame *save)
{
  return ?G_SaveMemorySP_GetHeader@@YAPEBUSaveHeader@@PEAUSaveGame@@@Z(save);
}

/*
==============
GSaveMemorySP::CleanupSaveMemory
==============
*/

void __fastcall GSaveMemorySP::CleanupSaveMemory(GSaveMemorySP *this)
{
  ?CleanupSaveMemory@GSaveMemorySP@@UEAAXXZ(this);
}

/*
==============
GSaveMemorySP::InitializeSaveSystem
==============
*/

void __fastcall GSaveMemorySP::InitializeSaveSystem(GSaveMemorySP *this)
{
  ?InitializeSaveSystem@GSaveMemorySP@@QEAAXXZ(this);
}

/*
==============
G_SaveMemorySP_ReadLoadFromDevice
==============
*/

MemCardFileHandle *__fastcall G_SaveMemorySP_ReadLoadFromDevice(MemCardFileHandle *result, const char *filename, int checksum, SaveGame **save)
{
  return ?G_SaveMemorySP_ReadLoadFromDevice@@YA?AUMemCardFileHandle@@PEBDHPEAPEAUSaveGame@@@Z(result, filename, checksum, save);
}

/*
==============
G_SaveMemorySP_IsRecentlyLoaded
==============
*/

bool __fastcall G_SaveMemorySP_IsRecentlyLoaded()
{
  return ?G_SaveMemorySP_IsRecentlyLoaded@@YA_NXZ();
}

/*
==============
G_SaveMemorySP_ClearPendingCommit
==============
*/

void G_SaveMemorySP_ClearPendingCommit(void)
{
  ?G_SaveMemorySP_ClearPendingCommit@@YAXXZ();
}

/*
==============
G_SaveMemorySP_GetSaveHandle
==============
*/

SaveGame *__fastcall G_SaveMemorySP_GetSaveHandle(GSaveSPHandleType type)
{
  return ?G_SaveMemorySP_GetSaveHandle@@YAPEAUSaveGame@@W4GSaveSPHandleType@@@Z(type);
}

/*
==============
SaveMemory_WriteInfoToBuffer
==============
*/

int __fastcall SaveMemory_WriteInfoToBuffer(char *buffer, int bufferSize)
{
  return ?SaveMemory_WriteInfoToBuffer@@YAHPEADH@Z(buffer, bufferSize);
}

/*
==============
GSaveMemorySP::ResetGlobalBufferPointers
==============
*/

void __fastcall GSaveMemorySP::ResetGlobalBufferPointers(GSaveMemorySP *this)
{
  ?ResetGlobalBufferPointers@GSaveMemorySP@@QEAAXXZ(this);
}

/*
==============
G_SaveMemorySP_IsCommitForced
==============
*/

bool __fastcall G_SaveMemorySP_IsCommitForced()
{
  return ?G_SaveMemorySP_IsCommitForced@@YA_NXZ();
}

/*
==============
G_SaveMemorySP_SetSecondarySaveInProgress
==============
*/

void __fastcall G_SaveMemorySP_SetSecondarySaveInProgress(bool inProgress)
{
  ?G_SaveMemorySP_SetSecondarySaveInProgress@@YAX_N@Z(inProgress);
}

/*
==============
G_SaveMemorySP_ReadHeader
==============
*/

bool __fastcall G_SaveMemorySP_ReadHeader(const char *filename, SaveHeader *header)
{
  return ?G_SaveMemorySP_ReadHeader@@YA_NPEBDPEAUSaveHeader@@@Z(filename, header);
}

/*
==============
GSaveMemorySP::ResetGameBuffers
==============
*/

void __fastcall GSaveMemorySP::ResetGameBuffers(GSaveMemorySP *this)
{
  ?ResetGameBuffers@GSaveMemorySP@@QEAAXXZ(this);
}

/*
==============
G_SaveMemorySP_FinalizeSave
==============
*/

void __fastcall G_SaveMemorySP_FinalizeSave(SaveGame *save)
{
  ?G_SaveMemorySP_FinalizeSave@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_SaveMemorySP_GenerateSaveId
==============
*/

int __fastcall G_SaveMemorySP_GenerateSaveId()
{
  return ?G_SaveMemorySP_GenerateSaveId@@YAHXZ();
}

/*
==============
GSaveMemorySP::ShutdownSaveSystem
==============
*/

void __fastcall GSaveMemorySP::ShutdownSaveSystem(GSaveMemorySP *this)
{
  ?ShutdownSaveSystem@GSaveMemorySP@@UEAAXXZ(this);
}

/*
==============
GSaveMemorySP::CleanupSaveMemory
==============
*/
void GSaveMemorySP::CleanupSaveMemory(GSaveMemorySP *this)
{
  SaveGame *currentGameSave; 

  if ( this->currentGameSave )
  {
    G_SaveMemorySP_WaitForWritesToComplete(0);
    currentGameSave = this->currentGameSave;
    if ( !currentGameSave )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 321, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 348, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
        __debugbreak();
    }
    if ( currentGameSave->saveState == AWAITING_COMMIT )
    {
      if ( !currentGameSave->memFile.buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 326, ASSERT_TYPE_ASSERT, "(save->memFile.buffer)", (const char *)&queryFormat, "save->memFile.buffer") )
        __debugbreak();
      if ( (_BYTE)GSaveMemory::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savememory_sp.h", 131, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      if ( !GSaveMemory::ms_gSaveMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 199, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory )", (const char *)&queryFormat, "ms_gSaveMemory") )
        __debugbreak();
      if ( currentGameSave != (SaveGame *)GSaveMemory::ms_gSaveMemory[3].__vftable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 327, ASSERT_TYPE_ASSERT, "(save == GSaveMemorySP::GetSaveMemorySP()->currentGameSave)", (const char *)&queryFormat, "save == GSaveMemorySP::GetSaveMemorySP()->currentGameSave") )
        __debugbreak();
      currentGameSave->saveState = MEMCLEAR;
    }
  }
}

/*
==============
G_SaveMemorySP_CheckAndClearAsyncWriteError
==============
*/
_BOOL8 G_SaveMemorySP_CheckAndClearAsyncWriteError()
{
  GSaveMemorySP *SaveMemorySP; 
  _BOOL8 result; 

  if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 717, ASSERT_TYPE_ASSERT, "(Com_IsAnyLocalServerRunning())", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  SaveMemorySP = GSaveMemorySP::GetSaveMemorySP();
  result = SaveMemorySP->writeErrorOccurred;
  if ( result )
    SaveMemorySP->writeErrorOccurred = 0;
  return result;
}

/*
==============
G_SaveMemorySP_ClearForcedCommitFlag
==============
*/
void G_SaveMemorySP_ClearForcedCommitFlag(void)
{
  GSaveMemorySP::GetSaveMemorySP()->isCommitForced = 0;
}

/*
==============
G_SaveMemorySP_ClearPendingCommit
==============
*/
void G_SaveMemorySP_ClearPendingCommit(void)
{
  GSaveMemorySP *SaveMemorySP; 
  GSaveMemorySP *v1; 

  Sys_EnterCriticalSection(CRITSECT_ASYNC_GAME_SAVE);
  SaveMemorySP = GSaveMemorySP::GetSaveMemorySP();
  v1 = SaveMemorySP;
  if ( SaveMemorySP->commitPending )
  {
    if ( !SaveMemorySP->writeActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 650, ASSERT_TYPE_ASSERT, "(saveMemorySp->writeActive)", (const char *)&queryFormat, "saveMemorySp->writeActive") )
      __debugbreak();
    v1->commitPending = 0;
  }
  Sys_LeaveCriticalSection(CRITSECT_ASYNC_GAME_SAVE);
}

/*
==============
G_SaveMemorySP_CommitSave
==============
*/
__int64 G_SaveMemorySP_CommitSave(SaveGame *save)
{
  unsigned __int8 v2; 
  GSaveMemorySP *SaveMemorySP; 
  GSaveMemorySP *v4; 

  v2 = 0;
  Sys_EnterCriticalSection(CRITSECT_ASYNC_GAME_SAVE);
  SaveMemorySP = GSaveMemorySP::GetSaveMemorySP();
  v4 = SaveMemorySP;
  if ( SaveMemorySP->writeActive )
  {
    SaveMemorySP->commitPending = 1;
LABEL_8:
    v2 = 1;
    goto LABEL_9;
  }
  if ( SaveMemorySP->commitPending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 610, ASSERT_TYPE_ASSERT, "(!saveMemorySp->commitPending)", (const char *)&queryFormat, "!saveMemorySp->commitPending") )
    __debugbreak();
  if ( G_SaveMemorySP_CommitSaveInteral(save) )
  {
    v4->writeActive = 1;
    Sys_SetGameSaveEvent();
    goto LABEL_8;
  }
LABEL_9:
  Sys_LeaveCriticalSection(CRITSECT_ASYNC_GAME_SAVE);
  return v2;
}

/*
==============
G_SaveMemorySP_CommitSaveInteral
==============
*/
char G_SaveMemorySP_CommitSaveInteral(SaveGame *save)
{
  GSaveMemorySP *SaveMemorySP; 
  SaveGame *currentGameSave; 
  SaveGame *committedGameSave; 
  __int64 v6; 
  const char *v7; 
  __int64 screenShotName; 
  __int64 v9; 
  char v10; 
  __int64 v11; 
  char v12; 
  char *filename; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 348, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( save->saveState == AWAITING_COMMIT )
  {
    SaveMemorySP = GSaveMemorySP::GetSaveMemorySP();
    CL_StreamViewsSP_CopyAutoView(EASE_OUT_QUAD, EASE_IN_QUAD, 0);
    if ( !save->memFile.buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 534, ASSERT_TYPE_ASSERT, "(save->memFile.buffer)", (const char *)&queryFormat, "save->memFile.buffer") )
      __debugbreak();
    if ( save != SaveMemorySP->currentGameSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 535, ASSERT_TYPE_ASSERT, "(save == saveMemory->currentGameSave)", (const char *)&queryFormat, "save == saveMemory->currentGameSave") )
      __debugbreak();
    if ( !SaveMemorySP->committedGameSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 536, ASSERT_TYPE_ASSERT, "(saveMemory->committedGameSave)", (const char *)&queryFormat, "saveMemory->committedGameSave") )
      __debugbreak();
    if ( !SaveMemorySP->currentGameSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 537, ASSERT_TYPE_ASSERT, "(saveMemory->currentGameSave)", (const char *)&queryFormat, "saveMemory->currentGameSave") )
      __debugbreak();
    currentGameSave = SaveMemorySP->currentGameSave;
    committedGameSave = SaveMemorySP->committedGameSave;
    SaveMemorySP->committedGameSave = currentGameSave;
    SaveMemorySP->currentGameSave = committedGameSave;
    currentGameSave->saveState = COMMITTED;
    SaveDevice_SetTimeOfLastSave(&SaveMemorySP->committedGameSave->header.time);
    v6 = 0x7FFFFFFFi64;
    v7 = SAVE_GAME_SCREEN_SHOT_NAME;
    screenShotName = (__int64)SaveMemorySP->committedGameSave->header.screenShotName;
    if ( !screenShotName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v9 = screenShotName - (_QWORD)v7;
    do
    {
      v10 = v7[v9];
      v11 = v6;
      v12 = *v7++;
      --v6;
      if ( !v11 )
        break;
      if ( v10 != v12 )
        goto LABEL_29;
    }
    while ( v10 );
    Com_ScreenShotSaveGame_Commit();
LABEL_29:
    filename = save->header.filename;
    if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 555, ASSERT_TYPE_ASSERT, "(save->header.filename)", (const char *)&queryFormat, "save->header.filename") )
      __debugbreak();
    SV_SaveSP_SetLastSaveName(filename);
    return 1;
  }
  else
  {
    Com_Printf(10, "Attempting to commit an invalid save buffer\n");
    return 0;
  }
}

/*
==============
G_SaveMemorySP_CreateHeader
==============
*/
void G_SaveMemorySP_CreateHeader(const char *cleanUserName, const char *description, const char *screenshot, int checksum, bool demoPlayback, bool suppressPlayerNotify, SaveType saveType, int saveId, SaveGame *save)
{
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 392, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( save->saveState != SAVING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 393, ASSERT_TYPE_ASSERT, "( save->saveState == SAVING )", (const char *)&queryFormat, "save->saveState == SAVING") )
    __debugbreak();
  save->suppressPlayerNotify = suppressPlayerNotify;
  G_SaveMemorySP_CreateHeaderInternal(cleanUserName, description, screenshot, checksum, demoPlayback, suppressPlayerNotify, saveType, saveId, &save->header, &save->memFile);
}

/*
==============
G_SaveMemorySP_CreateHeaderInternal
==============
*/
void G_SaveMemorySP_CreateHeaderInternal(const char *cleanUserName, const char *description, const char *screenshot, int checksum, bool demoPlayback, bool suppressPlayerNotify, SaveType saveType, int saveId, SaveHeader *header, MemoryFile *memFile)
{
  unsigned int v16; 
  bool *transientLoaded; 
  unsigned __int64 v18; 

  if ( !header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 357, ASSERT_TYPE_ASSERT, "( header )", (const char *)&queryFormat, "header") )
    __debugbreak();
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 358, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  G_SaveMemory_CreateHeaderCommon(cleanUserName, description, screenshot, checksum, demoPlayback, saveType, saveId, header, memFile);
  v16 = 0;
  transientLoaded = level.transientLoaded;
  v18 = 0i64;
  do
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 368, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES )") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 369, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC )") )
      __debugbreak();
    if ( *transientLoaded )
      header->sp.transientLoaded.array[v18 >> 5] |= 0x80000000 >> (v16 & 0x1F);
    else
      header->sp.transientLoaded.array[v18 >> 5] &= ~(0x80000000 >> (v16 & 0x1F));
    ++v16;
    ++v18;
    ++transientLoaded;
  }
  while ( v16 < 0x20 );
  if ( !G_IsEntityInUse(0) )
    goto LABEL_25;
  if ( !g_entities->health )
    goto LABEL_25;
  if ( !g_entities->client->sess.maxHealth )
    goto LABEL_25;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vcvtsi2ss xmm1, xmm1, eax
    vdivss  xmm1, xmm1, xmm0
    vcvttss2si eax, xmm1
  }
  if ( _EAX >= 1 )
  {
    if ( _EAX <= 100 )
      header->sp.health = _EAX;
    else
      header->sp.health = 100;
  }
  else
  {
LABEL_25:
    header->sp.health = 1;
  }
}

/*
==============
G_SaveMemorySP_FinalizeLoad
==============
*/
void G_SaveMemorySP_FinalizeLoad(SaveGame *save)
{
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 301, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( save->saveState != LOADING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 302, ASSERT_TYPE_ASSERT, "(save->saveState == LOADING)", (const char *)&queryFormat, "save->saveState == LOADING") )
    __debugbreak();
  save->saveState = COMMITTED;
  GSaveMemorySP::GetSaveMemorySP()->recentLoadTime = level.time;
}

/*
==============
G_SaveMemorySP_FinalizeSave
==============
*/
void G_SaveMemorySP_FinalizeSave(SaveGame *save)
{
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 292, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( save->saveState != SAVING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 293, ASSERT_TYPE_ASSERT, "(save->saveState == SAVING)", (const char *)&queryFormat, "save->saveState == SAVING") )
    __debugbreak();
  save->saveState = AWAITING_COMMIT;
}

/*
==============
G_SaveMemorySP_FinalizeSaveCommit
==============
*/
void G_SaveMemorySP_FinalizeSaveCommit(SaveGame *save)
{
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 313, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( (unsigned int)(save->saveState - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 314, ASSERT_TYPE_ASSERT, "(save->saveState == AWAITING_COMMIT || save->saveState == COMMITTED)", (const char *)&queryFormat, "save->saveState == AWAITING_COMMIT || save->saveState == COMMITTED") )
    __debugbreak();
  save->saveState = COMMITTED;
}

/*
==============
G_SaveMemorySP_ForceCommitSave
==============
*/
__int64 G_SaveMemorySP_ForceCommitSave(SaveGame *save)
{
  unsigned __int8 v2; 
  GSaveMemorySP *SaveMemorySP; 
  GSaveMemorySP *v4; 

  v2 = 0;
  GSaveMemorySP::GetSaveMemorySP()->isCommitForced = 1;
  Sys_EnterCriticalSection(CRITSECT_ASYNC_GAME_SAVE);
  SaveMemorySP = GSaveMemorySP::GetSaveMemorySP();
  v4 = SaveMemorySP;
  if ( SaveMemorySP->writeActive )
  {
    SaveMemorySP->commitPending = 1;
LABEL_8:
    v2 = 1;
    goto LABEL_9;
  }
  if ( SaveMemorySP->commitPending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 610, ASSERT_TYPE_ASSERT, "(!saveMemorySp->commitPending)", (const char *)&queryFormat, "!saveMemorySp->commitPending") )
    __debugbreak();
  if ( G_SaveMemorySP_CommitSaveInteral(save) )
  {
    v4->writeActive = 1;
    Sys_SetGameSaveEvent();
    goto LABEL_8;
  }
LABEL_9:
  Sys_LeaveCriticalSection(CRITSECT_ASYNC_GAME_SAVE);
  return v2;
}

/*
==============
G_SaveMemorySP_GenerateSaveId
==============
*/
__int64 G_SaveMemorySP_GenerateSaveId()
{
  return (unsigned int)++s_saveId;
}

/*
==============
G_SaveMemorySP_GetClientMemoryFile
==============
*/
MemoryFile *G_SaveMemorySP_GetClientMemoryFile()
{
  return &GSaveMemorySP::GetSaveMemorySP()->m_clientMemoryFile;
}

/*
==============
G_SaveMemorySP_GetClientMemoryFileValid
==============
*/
_BOOL8 G_SaveMemorySP_GetClientMemoryFileValid()
{
  return GSaveMemorySP::GetSaveMemorySP()->m_clientMemoryFileValid;
}

/*
==============
G_SaveMemorySP_GetHeader
==============
*/
SaveGame *G_SaveMemorySP_GetHeader(SaveGame *save)
{
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 402, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  return save;
}

/*
==============
G_SaveMemorySP_GetLastCommittedSave
==============
*/
SaveGame *G_SaveMemorySP_GetLastCommittedSave()
{
  SaveGame *result; 

  result = GSaveMemorySP::GetSaveMemorySP()->committedGameSave;
  if ( result->header.saveType != SAVE_TYPE_AUTOSAVE )
    return 0i64;
  return result;
}

/*
==============
G_SaveMemorySP_GetSaveHandle
==============
*/
SaveGame *G_SaveMemorySP_GetSaveHandle(GSaveSPHandleType type)
{
  GSaveMemorySP *SaveMemorySP; 

  SaveMemorySP = GSaveMemorySP::GetSaveMemorySP();
  if ( type == SAVE_GAME_HANDLE )
    return SaveMemorySP->currentGameSave;
  if ( type == SAVE_LAST_COMMITTED )
    return SaveMemorySP->committedGameSave;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 77, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported handle") )
    __debugbreak();
  return 0i64;
}

/*
==============
G_SaveMemorySP_GetScriptWriteBuffer
==============
*/
unsigned __int8 *G_SaveMemorySP_GetScriptWriteBuffer()
{
  return GSaveMemorySP::GetSaveMemorySP()->asyncGameSaveScriptWriteBuffer;
}

/*
==============
G_SaveMemorySP_GetSecondarySaveThreadMemoryFile
==============
*/
MemoryFile *G_SaveMemorySP_GetSecondarySaveThreadMemoryFile()
{
  return &GSaveMemorySP::GetSaveMemorySP()->m_secondarySaveThreadMemoryFile;
}

/*
==============
G_SaveMemorySP_InitializeClientMemoryFile
==============
*/
void G_SaveMemorySP_InitializeClientMemoryFile(MemoryFile *memoryFile)
{
  GSaveMemorySP *SaveMemorySP; 

  SaveMemorySP = GSaveMemorySP::GetSaveMemorySP();
  MemFile_InitForWriteParallel(memoryFile, 0x200000ui64, SaveMemorySP->m_clientMemoryFileBuffer, 1, SaveMemorySP->m_clientMemoryFileSaveStrings, 0x100000ui64);
}

/*
==============
G_SaveMemorySP_InitializeGameSave
==============
*/
void G_SaveMemorySP_InitializeGameSave(SaveGame *save)
{
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 271, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  MemCard_Reset();
  MemFile_InitForWriting(&save->memFile, 0x600000ui64, save->memFile.buffer, 1, 0, StreamModeSource_SPInitializeGameSave);
  save->saveState = SAVING;
  GSaveMemorySP::GetSaveMemorySP()->recentLoadTime = -3000;
}

/*
==============
G_SaveMemorySP_InitializeSecondarySaveThreadMemoryFile
==============
*/
void G_SaveMemorySP_InitializeSecondarySaveThreadMemoryFile(MemoryFile *memoryFile)
{
  GSaveMemorySP *SaveMemorySP; 

  SaveMemorySP = GSaveMemorySP::GetSaveMemorySP();
  MemFile_InitForWriteParallel(memoryFile, 0x1C0000ui64, SaveMemorySP->m_secondarySaveThreadMemoryFileBuffer, 1, SaveMemorySP->m_secondarySaveThreadMemoryFileSaveStrings, 0x100000ui64);
}

/*
==============
G_SaveMemorySP_IsCommitForced
==============
*/
_BOOL8 G_SaveMemorySP_IsCommitForced()
{
  return GSaveMemorySP::GetSaveMemorySP()->isCommitForced;
}

/*
==============
G_SaveMemorySP_IsCommittedSaveAvailable
==============
*/
char G_SaveMemorySP_IsCommittedSaveAvailable(const char *filename, int checksum)
{
  SaveGame *committedGameSave; 
  SaveType saveType; 
  const char *v7; 
  __int64 gameCheckSum; 
  const char *v9; 
  const char *v10; 
  size_t v11; 
  const char *v12; 

  if ( MemCard_GetUseDevSaveArea() )
  {
    Com_Printf(10, "Committed save not available.  Reason: %s\n", "Devsave area is in use.");
    return 0;
  }
  else
  {
    committedGameSave = GSaveMemorySP::GetSaveMemorySP()->committedGameSave;
    if ( committedGameSave )
    {
      saveType = committedGameSave->header.saveType;
      if ( saveType == SAVE_TYPE_AUTOSAVE )
      {
        gameCheckSum = (unsigned int)committedGameSave->header.gameCheckSum;
        if ( checksum == (_DWORD)gameCheckSum )
        {
          v10 = committedGameSave->header.filename;
          if ( !*v10 )
            goto LABEL_16;
          v11 = -1i64;
          do
            ++v11;
          while ( v10[v11] );
          if ( !strncmp(filename, v10, v11) )
          {
            return 1;
          }
          else
          {
LABEL_16:
            v12 = j_va("committed filename \"%s\" doesn't match needed filename \"%s\".", v10, filename);
            PrintNotAvailableReason(v12);
            return 0;
          }
        }
        else
        {
          v9 = j_va("committed game checksum %i doesn't match needed checksum %i.", gameCheckSum, (unsigned int)checksum);
          PrintNotAvailableReason(v9);
          return 0;
        }
      }
      else
      {
        if ( (unsigned __int8)saveType >= SAVE_TYPESCOUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 476, ASSERT_TYPE_ASSERT, "(unsigned)( header->saveType ) < (unsigned)( SAVE_TYPESCOUNT )", "header->saveType doesn't index SAVE_TYPESCOUNT\n\t%i not in [0, %i)", (unsigned __int8)saveType, 4) )
          __debugbreak();
        v7 = j_va("Committed save is not of type \"%s\", is \"%s\".", SaveTypeNames[1], SaveTypeNames[(unsigned __int8)committedGameSave->header.saveType]);
        PrintNotAvailableReason(v7);
        return 0;
      }
    }
    else
    {
      Com_Printf(10, "Committed save not available.  Reason: %s\n", "No committed save in memory.");
      return 0;
    }
  }
}

/*
==============
G_SaveMemorySP_IsCurrentCommittedSaveValid
==============
*/
bool G_SaveMemorySP_IsCurrentCommittedSaveValid()
{
  SaveGame *committedGameSave; 

  committedGameSave = GSaveMemorySP::GetSaveMemorySP()->committedGameSave;
  return committedGameSave && committedGameSave->saveState == COMMITTED;
}

/*
==============
G_SaveMemorySP_IsLoading
==============
*/
bool G_SaveMemorySP_IsLoading(SaveGame *save)
{
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 341, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  return save->saveState == LOADING;
}

/*
==============
G_SaveMemorySP_IsRecentlyLoaded
==============
*/
bool G_SaveMemorySP_IsRecentlyLoaded()
{
  return (unsigned int)(level.time - GSaveMemorySP::GetSaveMemorySP()->recentLoadTime) < 0x7D0;
}

/*
==============
G_SaveMemorySP_IsSecondarySaveThreadInProgress
==============
*/
_BOOL8 G_SaveMemorySP_IsSecondarySaveThreadInProgress()
{
  return GSaveMemorySP::GetSaveMemorySP()->m_secondarySaveInProgress;
}

/*
==============
G_SaveMemorySP_IsSuccessful
==============
*/
bool G_SaveMemorySP_IsSuccessful(SaveGame *save)
{
  return !save->memFile.memoryOverflow;
}

/*
==============
G_SaveMemorySP_IsWaitingForCommit
==============
*/
bool G_SaveMemorySP_IsWaitingForCommit(SaveGame *save)
{
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 348, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  return save->saveState == AWAITING_COMMIT;
}

/*
==============
G_SaveMemorySP_MoveToSegment
==============
*/
void G_SaveMemorySP_MoveToSegment(SaveGame *save, int index)
{
  MemFile_MoveToSegment(&save->memFile, index, StreamModeSource_SPMoveToSegment);
}

/*
==============
G_SaveMemorySP_ReadHeader
==============
*/
bool G_SaveMemorySP_ReadHeader(const char *filename, SaveHeader *header)
{
  if ( !header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 423, ASSERT_TYPE_ASSERT, "( header )", (const char *)&queryFormat, "header") )
    __debugbreak();
  return SaveDevice_ReadSaveHeader(filename, header) && G_SaveMemory_ValidateHeaderCommon(header);
}

/*
==============
G_SaveMemorySP_ReadLoadFromDevice
==============
*/
MemCardFileHandle *G_SaveMemorySP_ReadLoadFromDevice(MemCardFileHandle *result, const char *filename, SaveGame **checksum, SaveGame **save)
{
  unsigned int v5; 
  GSaveMemorySP *SaveMemorySP; 
  SaveGame *committedGameSave; 
  char *fmt; 
  const char *saveBufferSize; 

  v5 = (unsigned int)filename;
  if ( !checksum )
  {
    saveBufferSize = "save";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 409, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat) )
      __debugbreak();
  }
  SaveMemorySP = GSaveMemorySP::GetSaveMemorySP();
  GSaveMemorySP::ResetGameBuffers(SaveMemorySP);
  committedGameSave = SaveMemorySP->committedGameSave;
  *checksum = committedGameSave;
  LODWORD(fmt) = 6291456;
  return G_SaveMemory_ReadLoadFromDeviceCommon(result, (const char *)v5, (int)committedGameSave->memFile.buffer, (unsigned __int8 *)committedGameSave, (SaveHeader *)fmt, (int)saveBufferSize);
}

/*
==============
G_SaveMemorySP_RollbackSave
==============
*/
void G_SaveMemorySP_RollbackSave(SaveGame *save)
{
  if ( !save )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 321, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 348, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
      __debugbreak();
  }
  if ( save->saveState == AWAITING_COMMIT )
  {
    if ( !save->memFile.buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 326, ASSERT_TYPE_ASSERT, "(save->memFile.buffer)", (const char *)&queryFormat, "save->memFile.buffer") )
      __debugbreak();
    if ( (_BYTE)GSaveMemory::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savememory_sp.h", 131, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    if ( !GSaveMemory::ms_gSaveMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 199, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory )", (const char *)&queryFormat, "ms_gSaveMemory") )
      __debugbreak();
    if ( save != (SaveGame *)GSaveMemory::ms_gSaveMemory[3].__vftable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 327, ASSERT_TYPE_ASSERT, "(save == GSaveMemorySP::GetSaveMemorySP()->currentGameSave)", (const char *)&queryFormat, "save == GSaveMemorySP::GetSaveMemorySP()->currentGameSave") )
      __debugbreak();
    save->saveState = MEMCLEAR;
  }
}

/*
==============
G_SaveMemorySP_SaveGame_Thread
==============
*/
void __noreturn G_SaveMemorySP_SaveGame_Thread(unsigned int threadContext)
{
  GSaveMemory *v1; 
  SaveGame *committedGameSave; 
  SaveType saveType; 
  bool v4; 
  bool v5; 
  SaveGame *currentGameSave; 

  if ( threadContext != 14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 948, ASSERT_TYPE_ASSERT, "( threadContext ) == ( THREAD_CONTEXT_SAVE_GAME )", "%s == %s\n\t%i, %i", "threadContext", "THREAD_CONTEXT_SAVE_GAME", threadContext, 14) )
    __debugbreak();
  while ( 1 )
  {
    Sys_WaitGameSaveEvent();
    if ( (_BYTE)GSaveMemory::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savememory_sp.h", 131, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    if ( !GSaveMemory::ms_gSaveMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 199, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory )", (const char *)&queryFormat, "ms_gSaveMemory") )
      __debugbreak();
    v1 = GSaveMemory::ms_gSaveMemory;
    if ( !BYTE1(GSaveMemory::ms_gSaveMemory[2375984].__vftable) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 957, ASSERT_TYPE_ASSERT, "(saveMemorySp->writeActive)", (const char *)&queryFormat, "saveMemorySp->writeActive") )
        __debugbreak();
      if ( !BYTE1(v1[2375984].__vftable) )
        continue;
    }
    do
    {
      committedGameSave = GSaveMemorySP::GetSaveMemorySP()->committedGameSave;
      if ( !committedGameSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 963, ASSERT_TYPE_ASSERT, "(nullptr != committedSave)", (const char *)&queryFormat, "nullptr != committedSave") )
        __debugbreak();
      saveType = committedGameSave->header.saveType;
      if ( saveType == SAVE_TYPE_CONSOLE )
        MemCard_PushUseDevDrive(1);
      v4 = SaveMemory_WriteSaveToDeviceInternal(committedGameSave) != 0;
      if ( saveType == SAVE_TYPE_CONSOLE )
        MemCard_PopUseDevDrive();
      G_SaveMemorySP_FinalizeSaveCommit(committedGameSave);
      PLM_SetUseDefaultGameSave(1);
      PLM_SetValidGameSave(!v4);
      if ( !v4 )
        CL_MainSP_SetCurrentMapHasSaveGame(1);
      Sys_EnterCriticalSection(CRITSECT_ASYNC_GAME_SAVE);
      v5 = LOBYTE(v1[2375984].__vftable) == 0;
      BYTE2(v1[2375984].__vftable) = v4;
      BYTE1(v1[2375984].__vftable) = 0;
      if ( !v5 )
      {
        LOBYTE(v1[2375984].__vftable) = 0;
        currentGameSave = GSaveMemorySP::GetSaveMemorySP()->currentGameSave;
        if ( !currentGameSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 1013, ASSERT_TYPE_ASSERT, "(nullptr != currentGameSave)", (const char *)&queryFormat, "nullptr != currentGameSave") )
          __debugbreak();
        if ( G_SaveMemorySP_CommitSaveInteral(currentGameSave) )
          BYTE1(v1[2375984].__vftable) = 1;
      }
      Sys_LeaveCriticalSection(CRITSECT_ASYNC_GAME_SAVE);
    }
    while ( BYTE1(v1[2375984].__vftable) );
  }
}

/*
==============
G_SaveMemorySP_SetClientMemoryFileValid
==============
*/
void G_SaveMemorySP_SetClientMemoryFileValid(bool valid)
{
  GSaveMemorySP::GetSaveMemorySP()->m_clientMemoryFileValid = valid;
}

/*
==============
G_SaveMemorySP_SetSecondarySaveInProgress
==============
*/
void G_SaveMemorySP_SetSecondarySaveInProgress(bool inProgress)
{
  GSaveMemorySP::GetSaveMemorySP()->m_secondarySaveInProgress = inProgress;
}

/*
==============
G_SaveMemorySP_WaitForWritesToComplete
==============
*/
char G_SaveMemorySP_WaitForWritesToComplete(int isBlocking)
{
  GSaveMemorySP *SaveMemorySP; 
  bool writeActive; 
  bool commitPending; 
  bool v5; 
  bool v6; 

  if ( isBlocking && GetCurrentProcessorNumber() == 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 666, ASSERT_TYPE_ASSERT, "(isBlocking == qfalse || GetCurrentProcessorNumber() != 5)", (const char *)&queryFormat, "isBlocking == qfalse || GetCurrentProcessorNumber() != SAVE_GAME_THREAD_PROCESSOR_ID") )
    __debugbreak();
  if ( !Com_IsAnyLocalServerRunning() || (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    return 1;
  SaveMemorySP = GSaveMemorySP::GetSaveMemorySP();
  Sys_EnterCriticalSection(CRITSECT_ASYNC_GAME_SAVE);
  writeActive = SaveMemorySP->writeActive;
  commitPending = SaveMemorySP->commitPending;
  v5 = !SaveMemorySP->writeErrorOccurred;
  Sys_LeaveCriticalSection(CRITSECT_ASYNC_GAME_SAVE);
  if ( writeActive )
  {
    do
    {
      if ( !isBlocking )
        Sys_Sleep(1);
      Sys_EnterCriticalSection(CRITSECT_ASYNC_GAME_SAVE);
      v6 = SaveMemorySP->writeActive;
      commitPending = SaveMemorySP->commitPending;
      v5 = !SaveMemorySP->writeErrorOccurred;
      Sys_LeaveCriticalSection(CRITSECT_ASYNC_GAME_SAVE);
    }
    while ( v6 );
  }
  if ( commitPending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 689, ASSERT_TYPE_ASSERT, "(!commitPending)", (const char *)&queryFormat, "!commitPending") )
    __debugbreak();
  return v5;
}

/*
==============
G_SaveMemorySP_WriteLastCommittedSave
==============
*/
void G_SaveMemorySP_WriteLastCommittedSave(void)
{
  SaveGame *committedGameSave; 

  if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 736, ASSERT_TYPE_ASSERT, "(Com_IsAnyLocalServerRunning())", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  committedGameSave = GSaveMemorySP::GetSaveMemorySP()->committedGameSave;
  if ( committedGameSave->header.saveType != SAVE_TYPE_AUTOSAVE )
    committedGameSave = NULL;
  if ( committedGameSave )
    SaveMemory_WriteSaveToDeviceInternal(committedGameSave);
}

/*
==============
G_SaveMemorySP_WriteSaveToDevice
==============
*/
_BOOL8 G_SaveMemorySP_WriteSaveToDevice(SaveGame *save)
{
  bool v3; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 765, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( SV_SaveSP_ShouldPreventSavingToDisk(save->header.filename) )
    return 0i64;
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 348, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( (unsigned int)(save->saveState - 2) > 1 )
  {
    Com_Printf(10, "Attempting to write an invalid save buffer\n");
    return 0i64;
  }
  v3 = G_SaveMemorySP_WaitForWritesToComplete(0);
  ProfLoad_Begin("SaveMemory_FinalizeSaveCommit");
  G_SaveMemorySP_FinalizeSaveCommit(save);
  ProfLoad_End();
  if ( !v3 )
    Com_PrintError(10, "Game save Error\n");
  return !v3;
}

/*
==============
GetBufferName
==============
*/
const char *GetBufferName(unsigned __int8 *buffer)
{
  const char *result; 
  GSaveMemorySP *SaveMemorySP; 
  bool v4; 

  if ( !buffer )
    return "NULL";
  SaveMemorySP = GSaveMemorySP::GetSaveMemorySP();
  if ( buffer == (unsigned __int8 *)&SaveMemorySP->buffer0 )
    return "buffer0";
  v4 = buffer == (unsigned __int8 *)&SaveMemorySP->buffer1;
  result = "buffer1";
  if ( !v4 )
    return "^1<other>";
  return result;
}

/*
==============
GSaveMemorySP::InitializeSaveSystem
==============
*/
void GSaveMemorySP::InitializeSaveSystem(GSaveMemorySP *this)
{
  if ( this->committedGameSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 106, ASSERT_TYPE_ASSERT, "( !this->committedGameSave )", (const char *)&queryFormat, "!this->committedGameSave") )
    __debugbreak();
  if ( this->currentGameSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 107, ASSERT_TYPE_ASSERT, "( !this->currentGameSave )", (const char *)&queryFormat, "!this->currentGameSave") )
    __debugbreak();
  GSaveMemorySP::ResetGameBuffers(this);
  this->recentLoadTime = -3000;
  *(_WORD *)&this->commitPending = 0;
  if ( !Sys_GameSaveThreadExists() )
    Sys_SpawnGameSaveThread((void (__fastcall *)(unsigned int))G_SaveMemorySP_SaveGame_Thread);
  this->m_clientMemoryFileValid = 0;
  if ( !Sys_SaveGameSecondaryThreadExists() )
    Sys_SpawnSaveGameSecondaryThread((void (__fastcall *)(unsigned int))G_SaveSP_SecondarySaveGameThread);
  this->m_secondarySaveInProgress = 0;
}

/*
==============
PrintNotAvailableReason
==============
*/
void PrintNotAvailableReason(const char *reason)
{
  if ( !reason && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\savememory_sp.cpp", 445, ASSERT_TYPE_ASSERT, "(reason)", (const char *)&queryFormat, "reason") )
    __debugbreak();
  Com_Printf(10, "Committed save not available.  Reason: %s\n", reason);
}

/*
==============
GSaveMemorySP::ResetGameBuffers
==============
*/
void GSaveMemorySP::ResetGameBuffers(GSaveMemorySP *this)
{
  memset_0(&this->game0, 0, 0x3F0ui64);
  memset_0(&this->game0.memFile.bufferSizeOriginal, 0, 0x80ui64);
  memset_0(&this->game1, 0, 0x3F0ui64);
  memset_0(&this->game1.memFile.bufferSizeOriginal, 0, 0x80ui64);
  this->game0.memFile.bufferSize = 6291456i64;
  this->game0.memFile.buffer = this->buffer0.data;
  this->game1.memFile.buffer = this->buffer1.data;
  this->committedGameSave = &this->game0;
  this->currentGameSave = &this->game1;
  this->game1.memFile.bufferSize = 6291456i64;
}

/*
==============
GSaveMemorySP::ResetGlobalBufferPointers
==============
*/
void GSaveMemorySP::ResetGlobalBufferPointers(GSaveMemorySP *this)
{
  this->game0.memFile.buffer = this->buffer0.data;
  this->game1.memFile.buffer = this->buffer1.data;
}

/*
==============
SaveMemory_WriteInfoToBuffer
==============
*/
__int64 SaveMemory_WriteInfoToBuffer(char *buffer, int bufferSize)
{
  __int64 v4; 
  GSaveMemorySP *SaveMemorySP; 
  char *v6; 
  const char *v7; 
  const char *v8; 
  SaveGame *committedGameSave; 
  unsigned __int64 v10; 
  int v11; 
  int v12; 
  const char *BufferName; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  const char *v19; 
  int v20; 
  const char *v21; 
  int v22; 
  const char *v23; 
  int v24; 
  int v25; 
  SaveGame *currentGameSave; 
  int v27; 
  char *v28; 
  unsigned __int64 v29; 
  int v30; 
  int v31; 
  const char *v32; 
  int v33; 
  SaveBufferState saveState; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 

  v4 = Com_sprintf(buffer, bufferSize, "^7\n");
  SaveMemorySP = GSaveMemorySP::GetSaveMemorySP();
  v6 = &buffer[v4];
  v7 = "FALSE";
  v8 = "NO";
  committedGameSave = SaveMemorySP->committedGameSave;
  v10 = bufferSize - (int)v4;
  if ( committedGameSave )
  {
    v11 = Com_sprintf(v6, v10, "^7== Committed Save ==\n") + v4;
    v12 = Com_sprintf(&buffer[v11], bufferSize - v11, "^7  State: ^2%s\n", SaveBufferStateNames[committedGameSave->saveState]) + v11;
    BufferName = GetBufferName(committedGameSave->memFile.buffer);
    v14 = Com_sprintf(&buffer[v12], bufferSize - v12, "^7  Buffer: ^5%s\n", BufferName) + v12;
    if ( committedGameSave->saveState == MEMCLEAR )
      goto LABEL_12;
    v15 = Com_sprintf(&buffer[v14], bufferSize - v14, "^7  Type: ^5%s\n", SaveTypeNames[(unsigned __int8)committedGameSave->header.saveType]) + v14;
    v16 = Com_sprintf(&buffer[v15], bufferSize - v15, "^7  Description: ^5%s\n", committedGameSave->header.description) + v15;
    v17 = Com_sprintf(&buffer[v16], bufferSize - v16, "^7  Filename: ^5%s\n", committedGameSave->header.filename) + v16;
    v18 = Com_sprintf(&buffer[v17], bufferSize - v17, "^7  ID: ^5%i\n", (unsigned int)committedGameSave->header.saveId) + v17;
    v19 = "FALSE";
    if ( committedGameSave->header.demoPlayback )
      v19 = "TRUE";
    v20 = Com_sprintf(&buffer[v18], bufferSize - v18, "^7  DemoPlayback: ^5%s\n", v19) + v18;
    v21 = "NO";
    if ( committedGameSave->suppressPlayerNotify )
      v21 = "YES";
    v22 = Com_sprintf(&buffer[v20], bufferSize - v20, "^7  Suppress notify: ^5%s\n", v21) + v20;
    v23 = "NO";
    if ( SaveMemorySP->isCommitForced )
      v23 = "YES";
    LODWORD(v4) = Com_sprintf(&buffer[v22], bufferSize - v22, "^7  Forced: ^5%s\n", v23) + v22;
    v24 = Com_sprintf(&buffer[(int)v4], bufferSize - (int)v4, "^7  header.bodySize: ^2%i\n", (unsigned int)committedGameSave->header.bodySize);
  }
  else
  {
    v24 = Com_sprintf(v6, v10, "committedGameSave: NONE\n");
  }
  v14 = v24 + v4;
LABEL_12:
  v25 = Com_sprintf(&buffer[v14], bufferSize - v14, "^7\n");
  currentGameSave = SaveMemorySP->currentGameSave;
  v27 = v25 + v14;
  v28 = &buffer[v27];
  v29 = bufferSize - v27;
  if ( !currentGameSave )
  {
    v40 = Com_sprintf(v28, v29, "currentGameSave: NONE\n");
LABEL_21:
    v33 = v40 + v27;
    goto LABEL_22;
  }
  v30 = Com_sprintf(v28, v29, "^7== Current Save ==\n") + v27;
  v31 = Com_sprintf(&buffer[v30], bufferSize - v30, "^7  State: ^2%s\n", SaveBufferStateNames[currentGameSave->saveState]) + v30;
  v32 = GetBufferName(currentGameSave->memFile.buffer);
  v33 = Com_sprintf(&buffer[v31], bufferSize - v31, "^7  Buffer: ^5%s\n", v32) + v31;
  saveState = currentGameSave->saveState;
  if ( saveState && saveState != COMMITTED )
  {
    v35 = Com_sprintf(&buffer[v33], bufferSize - v33, "^7  Type: ^5%s\n", SaveTypeNames[(unsigned __int8)currentGameSave->header.saveType]) + v33;
    v36 = Com_sprintf(&buffer[v35], bufferSize - v35, "^7  Description: ^5%s\n", currentGameSave->header.description) + v35;
    v37 = Com_sprintf(&buffer[v36], bufferSize - v36, "^7  Filename: ^5%s\n", currentGameSave->header.filename) + v36;
    v38 = Com_sprintf(&buffer[v37], bufferSize - v37, "^7  ID: ^5%i\n", (unsigned int)currentGameSave->header.saveId) + v37;
    if ( currentGameSave->header.demoPlayback )
      v7 = "TRUE";
    v39 = Com_sprintf(&buffer[v38], bufferSize - v38, "^7  DemoPlayback: ^5%s\n", v7) + v38;
    if ( currentGameSave->suppressPlayerNotify )
      v8 = "YES";
    v27 = Com_sprintf(&buffer[v39], bufferSize - v39, "^7  Suppress notify: ^5%s\n", v8) + v39;
    v40 = Com_sprintf(&buffer[v27], bufferSize - v27, "^7  header.bodySize: ^2%i\n", (unsigned int)currentGameSave->header.bodySize);
    goto LABEL_21;
  }
LABEL_22:
  v41 = Com_sprintf(&buffer[v33], bufferSize - v33, "^7\nrecentLoadTime: ^5%i\n", (unsigned int)SaveMemorySP->recentLoadTime) + v33;
  return (unsigned int)(v41 + Com_sprintf(&buffer[v41], bufferSize - v41, "\n"));
}

/*
==============
GSaveMemorySP::ShutdownSaveSystem
==============
*/
void GSaveMemorySP::ShutdownSaveSystem(GSaveMemorySP *this)
{
  G_SaveMemorySP_WaitForWritesToComplete(0);
  this->committedGameSave = NULL;
  this->currentGameSave = NULL;
}

