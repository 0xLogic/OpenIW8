/*
==============
SaveDevice_GetTimeOfLastSave
==============
*/

const qtime_s *__fastcall SaveDevice_GetTimeOfLastSave()
{
  return ?SaveDevice_GetTimeOfLastSave@@YAPEBUqtime_s@@XZ();
}

/*
==============
OpenDevice
==============
*/

__int64 __fastcall OpenDevice(const char *name, MemCardFileHandle *fileHandle)
{
  return ?OpenDevice@@YA_JPEBDPEAUMemCardFileHandle@@@Z(name, fileHandle);
}

/*
==============
SaveExists
==============
*/

bool __fastcall SaveExists(const char *savename)
{
  return ?SaveExists@@YA_NPEBD@Z(savename);
}

/*
==============
SaveDevice_SetTimeOfLastSave
==============
*/

void __fastcall SaveDevice_SetTimeOfLastSave(const qtime_s *time)
{
  ?SaveDevice_SetTimeOfLastSave@@YAXPEBUqtime_s@@@Z(time);
}

/*
==============
WriteSaveToDevice
==============
*/

int __fastcall WriteSaveToDevice(SaveGame *save)
{
  return ?WriteSaveToDevice@@YAHPEAUSaveGame@@@Z(save);
}

/*
==============
SaveDevice_ReadSaveHeader
==============
*/

bool __fastcall SaveDevice_ReadSaveHeader(const char *filename, SaveHeader *header)
{
  return ?SaveDevice_ReadSaveHeader@@YA_NPEBDPEAUSaveHeader@@@Z(filename, header);
}

/*
==============
SaveDevice_GetFreeFileName
==============
*/

void __fastcall SaveDevice_GetFreeFileName(const char *baseName, int count, char *testName)
{
  ?SaveDevice_GetFreeFileName@@YAXPEBDHQEAD@Z(baseName, count, testName);
}

/*
==============
BuildCleanSavePath
==============
*/

bool __fastcall BuildCleanSavePath(char *cleanSavePath, unsigned __int64 cleanSavePathSize, const char *filename, SaveType saveType)
{
  return ?BuildCleanSavePath@@YA_NPEAD_KPEBDW4SaveType@@@Z(cleanSavePath, cleanSavePathSize, filename, saveType);
}

/*
==============
CloseDevice
==============
*/

void __fastcall CloseDevice(MemCardFileHandle fileHandle)
{
  ?CloseDevice@@YAXUMemCardFileHandle@@@Z(fileHandle);
}

/*
==============
ReadFromDevice
==============
*/

__int64 __fastcall ReadFromDevice(void *buffer, unsigned __int64 size, MemCardFileHandle fileHandle)
{
  return ?ReadFromDevice@@YA_JPEAX_KUMemCardFileHandle@@@Z(buffer, size, fileHandle);
}

/*
==============
G_SaveError
==============
*/

void G_SaveError(SaveErrorType errorType, const char *fmt, ...)
{
  ?G_SaveError@@YAXW4SaveErrorType@@PEBDZZ(errorType, fmt);
}

/*
==============
BuildCleanSavePath
==============
*/
bool BuildCleanSavePath(char *cleanSavePath, unsigned __int64 cleanSavePathSize, const char *filename, SaveType saveType)
{
  const char *v8; 
  char v9; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  const char *v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  char v20[64]; 

  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savedevice.cpp", 120, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  if ( !cleanSavePath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savedevice.cpp", 121, ASSERT_TYPE_ASSERT, "(cleanSavePath)", (const char *)&queryFormat, "cleanSavePath") )
    __debugbreak();
  if ( saveType == SAVE_TYPE_AUTOSAVE )
  {
    v8 = DEFAULT_SAVE_NAME;
    do
    {
      v9 = *v8++;
      *cleanSavePath++ = v9;
    }
    while ( v9 );
    return 1;
  }
  v11 = -1i64;
  do
    ++v11;
  while ( filename[v11] );
  if ( v11 >= cleanSavePathSize || v11 >= 0x40 )
  {
    Com_Printf(10, "filename '%s' is too long.\n", filename);
    return 0;
  }
  v12 = 0i64;
  if ( !v11 )
    goto LABEL_43;
  do
  {
    v13 = (unsigned __int8)filename[v12];
    if ( (_BYTE)v13 == 47 || (_BYTE)v13 == 92 )
    {
      if ( saveType == SAVE_TYPE_INTERNAL )
        goto LABEL_38;
      if ( v12 == 8 )
      {
        v14 = 8i64;
        v15 = "autosave";
        if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        do
        {
          v16 = (unsigned __int8)v15[filename - "autosave"];
          v13 = v14;
          v17 = *(unsigned __int8 *)v15++;
          --v14;
          if ( !v13 )
            break;
          if ( v16 != v17 )
          {
            v18 = v16 + 32;
            v13 = (unsigned int)(v17 - 65);
            if ( (unsigned int)(v16 - 65) > 0x19 )
              v18 = v16;
            v16 = v18;
            v19 = v17 + 32;
            if ( (unsigned int)v13 > 0x19 )
              v19 = v17;
            if ( v16 != v19 )
              goto LABEL_42;
          }
        }
        while ( v16 );
LABEL_38:
        LOBYTE(v13) = 47;
        goto LABEL_39;
      }
LABEL_42:
      LOBYTE(v13) = 45;
    }
    else if ( (unsigned __int8)(v13 - 97) > 0x19u && (unsigned __int8)(v13 - 65) > 0x19u && (unsigned __int8)(v13 - 48) > 9u && (_BYTE)v13 != 95 && (_BYTE)v13 != 45 )
    {
      Com_Printf(10, "filename '%s' has invalid character (%c) in filename.  Must use alphanumeric characters only.\n", filename, (unsigned int)(char)v13);
      return 0;
    }
LABEL_39:
    v20[v12++] = v13;
  }
  while ( v12 < v11 );
  if ( v12 >= 0x40 )
  {
    j___report_rangecheckfailure(v13);
    JUMPOUT(0x141376C95i64);
  }
LABEL_43:
  v20[v12] = 0;
  return Com_sprintf_truncate(cleanSavePath, cleanSavePathSize, "save/%s.svg", v20) >= 0;
}

/*
==============
CloseDevice
==============
*/
void CloseDevice(MemCardFileHandle fileHandle)
{
  R_BeginRemoteScreenUpdate();
  MemCard_CloseFile(fileHandle, 1);
  R_EndRemoteScreenUpdate();
}

/*
==============
G_SaveError
==============
*/
void G_SaveError(SaveErrorType errorType, const char *fmt, ...)
{
  const char *v3; 
  errorParm_t v4; 
  char dest[512]; 
  va_list va; 

  va_start(va, fmt);
  Com_vsprintf(dest, 0x200ui64, fmt, va);
  Com_PrintError(10, (const char *)&queryFormat, dest);
  if ( errorType == SAVE_ERROR_CORRUPT_SAVE )
  {
    v3 = SEH_SafeTranslateString("PLATFORM/ERR_SAVEGAME_BAD");
    Sys_Error((const ObfuscateErrorText)&queryFormat, v3);
  }
  else if ( errorType == SAVE_ERROR_CANNOT_LOAD )
  {
    Com_BootCheck_ForceDelete();
    Com_BootCheck_Reset();
    v4 = ERR_DISCONNECT;
    goto LABEL_4;
  }
  v4 = ERR_DROP;
LABEL_4:
  Com_Error_impl(v4, (const ObfuscateErrorText)&queryFormat, "PLATFORM/UNABLE_TO_READ_FROM_DEVICE");
}

/*
==============
OpenDevice
==============
*/
__int64 OpenDevice(const char *name, MemCardFileHandle *fileHandle)
{
  MemcardSizeHint ControllerFromClient; 
  MemCardFileHandle *v5; 
  int v7; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v5 = MemCard_OpenFile((MemCardFileHandle *)name, NULL, MEMCARD_WRITE, ControllerFromClient, v7);
  fileHandle->handle = (__int64)v5;
  if ( v5 )
    return MemCard_FileSize((MemCardFileHandle)v5);
  else
    return -1i64;
}

/*
==============
ReadFromDevice
==============
*/
__int64 ReadFromDevice(void *buffer, unsigned __int64 size, MemCardFileHandle fileHandle)
{
  __int64 result; 
  __int64 v5; 
  MemcardError error; 

  result = MemCard_ReadFile(fileHandle, buffer, size, &error);
  v5 = result;
  if ( error.isError )
  {
    MemCard_CloseFile(fileHandle, 1);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&queryFormat, error.errorString);
    return v5;
  }
  return result;
}

/*
==============
SaveDevice_GetFreeFileName
==============
*/
void SaveDevice_GetFreeFileName(const char *baseName, int count, char *testName)
{
  int i; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  fileHandle_t file; 
  char path[256]; 

  for ( i = 1; !count || i < count; ++i )
  {
    LODWORD(v8) = i;
    Com_sprintf(testName, 0x40ui64, "%s%i", baseName, v8);
    Com_BuildPlayerProfilePath(path, 256, "save/%s.svg", testName);
    v7 = FS_FOpenFileReadCurrentThread(path, &file);
    FS_FCloseFile(file);
    if ( v7 <= 0 )
      goto LABEL_7;
  }
  i = 0;
LABEL_7:
  if ( count )
  {
    LODWORD(v8) = (i + 1) % count;
    Com_sprintf(testName, 0x40ui64, "%s%i", baseName, v8);
    Com_BuildPlayerProfilePath(path, 256, "save/%s.svg", testName);
    FS_Delete(path);
    LODWORD(v9) = i;
    Com_sprintf(testName, 0x40ui64, "%s%i", baseName, v9);
  }
}

/*
==============
SaveDevice_GetTimeOfLastSave
==============
*/
qtime_s *SaveDevice_GetTimeOfLastSave()
{
  return &s_timeOfLastSave;
}

/*
==============
SaveDevice_ReadSaveHeader
==============
*/
char SaveDevice_ReadSaveHeader(const char *filename, SaveHeader *header)
{
  bool UseDevSaveArea; 
  MemcardSizeHint ControllerFromClient; 
  MemCardFileHandle *v6; 
  MemCardFileHandle v7; 
  __int64 v8; 
  const MemcardError *OpenError; 
  int fmt; 
  MemcardError error; 

  UseDevSaveArea = MemCard_GetUseDevSaveArea();
  MemCard_PushUseDevDrive(UseDevSaveArea);
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savedevice.cpp", 708, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat) )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v6 = MemCard_OpenFile((MemCardFileHandle *)filename, NULL, MEMCARD_WRITE, ControllerFromClient, fmt);
  v7.handle = (__int64)v6;
  if ( v6 && MemCard_FileSize((MemCardFileHandle)v6) >= 0 )
  {
    v8 = MemCard_ReadFile(v7, header, 0x380ui64, &error);
    if ( error.isError )
    {
      MemCard_CloseFile(v7, 1);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&queryFormat, error.errorString);
    }
    R_BeginRemoteScreenUpdate();
    MemCard_CloseFile(v7, 1);
    R_EndRemoteScreenUpdate();
    MemCard_PopUseDevDrive();
    if ( v8 == 896 )
      return 1;
    Com_Printf(15, "Bad save read.\n");
  }
  else
  {
    MemCard_PopUseDevDrive();
    OpenError = MemCard_GetOpenError();
    Com_PrintError(1, "%s\n", OpenError->errorString);
    Com_Printf(15, "Can't open savegame %s\n", filename);
  }
  return 0;
}

/*
==============
SaveDevice_SetTimeOfLastSave
==============
*/
void SaveDevice_SetTimeOfLastSave(const qtime_s *time)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymmword ptr cs:s_timeOfLastSave.tm_sec, ymm0
  }
  s_timeOfLastSave.tm_isdst = time->tm_isdst;
}

/*
==============
SaveExists
==============
*/
bool SaveExists(const char *savename)
{
  int v3; 
  MemcardSizeHint ControllerFromClient; 
  MemCardFileHandle *v5; 
  const MemcardError *OpenError; 
  int v7; 
  int v8; 
  bool result; 
  int fmt; 
  char *fmta; 
  const char *v13; 
  int BuildType; 
  MemcardError error; 

  _RBP = (unsigned __int64)&error & 0xFFFFFFFFFFFFFF80ui64;
  v3 = Sys_Milliseconds();
  if ( !savename )
  {
    v13 = "savename";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savedevice.cpp", 578, ASSERT_TYPE_ASSERT, "(savename)", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( *savename )
  {
    R_BeginRemoteScreenUpdate();
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    v5 = MemCard_OpenFile((MemCardFileHandle *)savename, NULL, MEMCARD_WRITE, ControllerFromClient, fmt);
    R_EndRemoteScreenUpdate();
    if ( MemCard_GetOpenError()->isError )
    {
      Com_Printf(0, "SaveExists(\"%s\"): returning false, Memcard_GetOpenError()->isError\n", savename);
      OpenError = MemCard_GetOpenError();
      Com_Printf(0, "  errorString: \"%s\"\n", OpenError->errorString);
    }
    else
    {
      R_BeginRemoteScreenUpdate();
      MemCard_ReadFile((MemCardFileHandle)v5, (void *)(_RBP + 128), 0x380ui64, (MemcardError *)((unsigned __int64)&error & 0xFFFFFFFFFFFFFF80ui64));
      R_BeginRemoteScreenUpdate();
      MemCard_CloseFile((MemCardFileHandle)v5, 1);
      R_EndRemoteScreenUpdate();
      R_EndRemoteScreenUpdate();
      v7 = Sys_Milliseconds();
      Com_Printf(16, "SaveExists() took %ims\n", (unsigned int)(v7 - v3));
      if ( *(_BYTE *)_RBP )
      {
        Com_Printf(0, "SaveExists(\"%s\"): returning false, error.isError\n", savename);
      }
      else
      {
        v8 = *(_DWORD *)(((unsigned __int64)&error & 0xFFFFFFFFFFFFFF80ui64) + 0x80);
        if ( v8 == 321 )
        {
          if ( SaveMemory_IsFromSameBuild((const SaveHeader *const)(_RBP + 128)) )
          {
            __asm { vmovups ymm0, [rbp+410h+var_370] }
            s_timeOfLastSave.tm_isdst = *(_DWORD *)(((unsigned __int64)&error & 0xFFFFFFFFFFFFFF80ui64) + 0xC0);
            result = 1;
            __asm { vmovups ymmword ptr cs:s_timeOfLastSave.tm_sec, ymm0 }
            return result;
          }
          v8 = *(_DWORD *)(((unsigned __int64)&error & 0xFFFFFFFFFFFFFF80ui64) + 0x80);
        }
        if ( v8 )
        {
          BuildType = (unsigned __int8)SaveMemory_GetBuildType();
          LODWORD(v13) = *(unsigned __int8 *)(((unsigned __int64)&error & 0xFFFFFFFFFFFFFF80ui64) + 0x3B2);
          LODWORD(fmta) = 321;
          Com_Printf(0, "SaveExists(\"%s\"): returning false, header.saveVersion %i != SAVE_VERSION (%i), header.buildType %d != %d\n", savename, *(unsigned int *)(((unsigned __int64)&error & 0xFFFFFFFFFFFFFF80ui64) + 0x80), fmta, v13, BuildType);
        }
        else
        {
          Com_Printf(0, "SaveExists(\"%s\"): returning false, header.saveVersion == 0, likely doesn't exist\n", savename);
        }
      }
    }
  }
  else
  {
    Com_Printf(0, "SaveExists(\"%s\"): returning false, !savename[0]\n", savename);
  }
  return 0;
}

/*
==============
WriteSaveToDevice
==============
*/
__int64 WriteSaveToDevice(SaveGame *save)
{
  ProfLoad_Begin("WriteSaveToDeviceInternal");
  LODWORD(save) = WriteSaveToDeviceInternal(save);
  ProfLoad_End();
  return (unsigned int)save;
}

/*
==============
WriteSaveToDeviceCleanup
==============
*/
void WriteSaveToDeviceCleanup(MemCardFileHandle fileHandle)
{
  Com_Printf(16, "Cleaning up save-device infos.\n");
  MemCard_CloseFile(fileHandle, 1);
}

/*
==============
WriteSaveToDeviceInternal
==============
*/
__int64 WriteSaveToDeviceInternal(SaveGame *saveGame)
{
  char *Value; 
  unsigned int *v3; 
  unsigned int v4; 
  _QWORD *v5; 
  char *v6; 
  int *v7; 
  unsigned __int64 v8; 
  ThreadContext CurrentThreadContext; 
  unsigned __int8 *buffer; 
  int ControllerFromClient; 
  MemCardFileHandle *v12; 
  bool IsUsingDevDrive; 
  unsigned int v15; 
  unsigned int screenShotSize; 
  const unsigned __int8 *v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  bool isError; 
  const scrContext_t *v23; 
  scrContext_t *i; 
  const scrContext_t *v25; 
  scrContext_t *j; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  int v30; 
  unsigned int v31; 
  int fmt; 
  __int64 v33; 
  __int64 v34; 
  SaveImmediate save; 
  Mem_LargeLocal v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 

  Value = (char *)Sys_GetValue(0);
  v3 = (unsigned int *)(Value + 14096);
  if ( (unsigned int)(*((_DWORD *)Value + 3524) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 3524) + 1, 3) )
    __debugbreak();
  v4 = *v3 + 1;
  *v3 = v4;
  if ( v4 >= 3 )
  {
    LODWORD(v34) = 3;
    LODWORD(v33) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v33, v34) )
      __debugbreak();
  }
  v5 = Value + 2088;
  v6 = Value + 40;
  if ( *v5 < (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v5 += 8i64;
  if ( *v5 >= (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v5 = v3;
  if ( *v5 <= (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v7 = (int *)&v3[*v3 + 2];
  v8 = __rdtsc();
  *v7 = v8;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 300, NULL, 0);
  buffer = saveGame->memFile.buffer;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savedevice.cpp", 232, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat) )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  if ( !GamerProfile_IsProfileLoggedIn(ControllerFromClient) && !MemCard_IsUsingDevDrive() )
    goto LABEL_72;
  v38 = Sys_Milliseconds();
  ProfLoad_Begin("OpenContextFile");
  v12 = MemCard_OpenFile((MemCardFileHandle *)saveGame->header.filename, (const char *)1, MEMCARD_WRITE, (MemcardSizeHint)ControllerFromClient, fmt);
  ProfLoad_End();
  if ( !MemCard_GetOpenError()->isError )
  {
    if ( !Com_ScreenShotSaveGame_ScreenShotExists() || MemCard_IsUsingDevDrive() )
      saveGame->header.screenShotSize = 0;
    else
      saveGame->header.screenShotSize = Com_ScreenShotSaveGame_GetBufferSize();
    if ( saveGame->header.saveType != SAVE_TYPE_AUTOSAVE || (IsUsingDevDrive = MemCard_IsUsingDevDrive()) )
      IsUsingDevDrive = 1;
    saveGame->header.hasScriptSource = IsUsingDevDrive;
    v37 = Sys_Milliseconds();
    ProfLoad_Begin("Write Header");
    MemCard_WriteFile((MemCardFileHandle)v12, saveGame, 0x380u);
    ProfLoad_End();
    if ( MemCard_GetWriteError()->isError )
      goto LABEL_37;
    v15 = MemCard_FilePosition((MemCardFileHandle)v12);
    Com_Printf(10, "bytes to write header: %i kb\n", v15 >> 10);
    v39 = Sys_Milliseconds();
    if ( saveGame->header.screenShotSize )
    {
      if ( !Com_ScreenShotSaveGame_ScreenShotExists() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savedevice.cpp", 305, ASSERT_TYPE_ASSERT, "(Com_ScreenShotSaveGame_ScreenShotExists())", (const char *)&queryFormat, "Com_ScreenShotSaveGame_ScreenShotExists()") )
        __debugbreak();
      ProfLoad_Begin("Write Screen Shot");
      screenShotSize = saveGame->header.screenShotSize;
      v17 = Com_ScreenShotSaveGame_LockBufferForRead();
      MemCard_WriteFile((MemCardFileHandle)v12, v17, screenShotSize);
      Com_ScreenShotSaveGame_UnlockBufferForRead();
      ProfLoad_End();
      if ( MemCard_GetWriteError()->isError )
        goto LABEL_43;
    }
    v18 = MemCard_FilePosition((MemCardFileHandle)v12);
    Com_Printf(10, "bytes to write screen shot: %i kb\n", (v18 - v15) >> 10);
    v19 = Sys_Milliseconds();
    ProfLoad_Begin("Write Body");
    MemCard_WriteFile((MemCardFileHandle)v12, buffer, saveGame->header.bodySize);
    ProfLoad_End();
    if ( MemCard_GetWriteError()->isError )
      goto LABEL_37;
    v20 = MemCard_FilePosition((MemCardFileHandle)v12);
    Com_Printf(10, "bytes to write body: %i kb\n", (v20 - v18) >> 10);
    v21 = Sys_Milliseconds();
    save.f.handle = (__int64)v12;
    save.saveByteCount = saveGame->header.bodySize + 896;
    if ( saveGame->header.hasScriptSource )
    {
      isError = 0;
      if ( Sys_IsGameSaveThread() )
      {
        save.buf = G_SaveMemorySP_GetScriptWriteBuffer();
        ProfLoad_Begin("Scr_SaveSourceImmediate");
        if ( saveGame->header.gameModeType[0] == 1 )
        {
          for ( i = ScriptContext_GetFirst(); i; i = ScriptContext_GetNext(i) )
          {
            Scr_SaveSourceImmediate(i, &save);
            isError = MemCard_GetWriteError()->isError;
            if ( isError )
              break;
          }
          ProfLoad_End();
          save.buf = NULL;
        }
        else
        {
          v23 = ScriptContext_Server();
          Scr_SaveSourceImmediate(v23, &save);
          isError = MemCard_GetWriteError()->isError;
          ProfLoad_End();
          save.buf = NULL;
        }
      }
      else
      {
        Mem_LargeLocal::Mem_LargeLocal(&v36, 0x20000ui64, "saveBuf_t saveBuf");
        save.buf = (unsigned __int8 *)v36.m_ptr;
        ProfLoad_Begin("Scr_SaveSourceImmediate");
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
        {
          v25 = ScriptContext_Server();
          Scr_SaveSourceImmediate(v25, &save);
          isError = MemCard_GetWriteError()->isError;
        }
        else
        {
          for ( j = ScriptContext_GetFirst(); j; j = ScriptContext_GetNext(j) )
          {
            Scr_SaveSourceImmediate(j, &save);
            isError = MemCard_GetWriteError()->isError;
            if ( isError )
              break;
          }
        }
        ProfLoad_End();
        save.buf = NULL;
        Mem_LargeLocal::~Mem_LargeLocal(&v36);
      }
      if ( isError )
      {
LABEL_37:
        Profile_EndInternal(NULL);
        Com_Printf(16, "Cleaning up save-device infos.\n");
        MemCard_CloseFile((MemCardFileHandle)v12, 1);
        return 1i64;
      }
    }
    v27 = MemCard_FilePosition((MemCardFileHandle)v12);
    Com_Printf(10, "bytes to write script: %i kb\n", (v27 - v20) >> 10);
    v28 = Sys_Milliseconds();
    if ( saveGame->header.demoPlayback )
    {
      ProfLoad_Begin("SV_SaveDemoImmediate");
      if ( Sys_IsGameSaveThread() )
      {
        save.buf = G_SaveMemorySP_GetScriptWriteBuffer();
        SV_Demo_SaveImmediate(&save);
        save.buf = NULL;
      }
      else
      {
        Mem_LargeLocal::Mem_LargeLocal(&v36, 0x20000ui64, "saveBuf_t saveBuf");
        save.buf = (unsigned __int8 *)v36.m_ptr;
        SV_Demo_SaveImmediate(&save);
        save.buf = NULL;
        Mem_LargeLocal::~Mem_LargeLocal(&v36);
      }
      ProfLoad_End();
      if ( MemCard_GetWriteError()->isError )
        goto LABEL_43;
    }
    v29 = MemCard_FilePosition((MemCardFileHandle)v12);
    Com_Printf(10, "bytes to write demo: %i kb\n", (v29 - v27) >> 10);
    v30 = Sys_Milliseconds();
    v31 = MemCard_FilePosition((MemCardFileHandle)v12);
    Com_Printf(10, "bytes to write save: %i kb\n", v31 >> 10);
    if ( MemCard_GetWriteError()->isError )
    {
LABEL_43:
      Profile_EndInternal(NULL);
      WriteSaveToDeviceCleanup((MemCardFileHandle)v12);
      return 1i64;
    }
    Com_Printf(10, "Open Start: %i ms\n", v38);
    Com_Printf(10, "write Header Start: %i ms\n", v37);
    Com_Printf(10, "write ScreenShot Start: %i ms\n", v39);
    Com_Printf(10, "write Body Start: %i ms\n", v19);
    Com_Printf(10, "write Script Start: %i ms\n", v21);
    Com_Printf(10, "write Script finish: %i ms\n", v28);
    Com_Printf(10, "time to open: %i ms\n", v37 - v38);
    Com_Printf(10, "time to write header: %i ms\n", v39 - v37);
    Com_Printf(10, "time to write screen shot: %i ms\n", v19 - v39);
    Com_Printf(10, "time to write body: %i ms\n", v21 - v19);
    Com_Printf(10, "time to write script: %i ms\n", v28 - v21);
    Com_Printf(10, "time to write demo: %i ms\n", v30 - v28);
    if ( !saveGame->header.demoPlayback )
    {
      if ( !GSave::ms_gSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 71, ASSERT_TYPE_ASSERT, "( ms_gSave )", (const char *)&queryFormat, "ms_gSave") )
        __debugbreak();
      GSave::ms_gSave->SetLastSaveName(GSave::ms_gSave, saveGame->header.filename);
    }
    WriteSaveToDeviceCleanup((MemCardFileHandle)v12);
LABEL_72:
    Profile_EndInternal(NULL);
    return 0i64;
  }
  if ( v12 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savedevice.cpp", 253, ASSERT_TYPE_ASSERT, "(fileHandle == MEMCARD_INVALID_FILE_HANDLE)", (const char *)&queryFormat, "fileHandle == MEMCARD_INVALID_FILE_HANDLE") )
      __debugbreak();
  }
  Profile_EndInternal(NULL);
  return 1i64;
}

