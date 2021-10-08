/*
==============
MemCard_CloseFile
==============
*/

void __fastcall MemCard_CloseFile(MemCardFileHandle file, bool async)
{
  ?MemCard_CloseFile@@YAXUMemCardFileHandle@@_N@Z(file, async);
}

/*
==============
MemCard_IsUsingDevDrive
==============
*/

bool __fastcall MemCard_IsUsingDevDrive()
{
  return ?MemCard_IsUsingDevDrive@@YA_NXZ();
}

/*
==============
MemCard_PositionDevDrive
==============
*/

__int64 __fastcall MemCard_PositionDevDrive(MemCardFileHandle fileHandle)
{
  return ?MemCard_PositionDevDrive@@YA_JUMemCardFileHandle@@@Z(fileHandle);
}

/*
==============
MemCard_IsOpenDevDrive
==============
*/

bool __fastcall MemCard_IsOpenDevDrive(MemCardFileHandle fileHandle)
{
  return ?MemCard_IsOpenDevDrive@@YA_NUMemCardFileHandle@@@Z(fileHandle);
}

/*
==============
MemCard_ReadFile
==============
*/

__int64 __fastcall MemCard_ReadFile(MemCardFileHandle file, void *data, unsigned __int64 maxsize, MemcardError *error)
{
  return ?MemCard_ReadFile@@YA_JUMemCardFileHandle@@PEAX_KPEAUMemcardError@@@Z(file, data, maxsize, error);
}

/*
==============
MemCard_SetUseDevSaveArea
==============
*/

void __fastcall MemCard_SetUseDevSaveArea(bool useDevSaveArea)
{
  ?MemCard_SetUseDevSaveArea@@YAX_N@Z(useDevSaveArea);
}

/*
==============
MemCard_CloseDevDrive
==============
*/

void __fastcall MemCard_CloseDevDrive(MemCardFileHandle fileHandle)
{
  ?MemCard_CloseDevDrive@@YAXUMemCardFileHandle@@@Z(fileHandle);
}

/*
==============
MemCard_OpenFile
==============
*/

MemCardFileHandle *__fastcall MemCard_OpenFile(MemCardFileHandle *result, const char *name, MemcardOperation operation, MemcardSizeHint sizeHint, int controllerIndex)
{
  return ?MemCard_OpenFile@@YA?AUMemCardFileHandle@@PEBDW4MemcardOperation@@W4MemcardSizeHint@@H@Z(result, name, operation, sizeHint, controllerIndex);
}

/*
==============
MemCard_SizeDevDrive
==============
*/

__int64 __fastcall MemCard_SizeDevDrive(MemCardFileHandle fileHandle)
{
  return ?MemCard_SizeDevDrive@@YA_JUMemCardFileHandle@@@Z(fileHandle);
}

/*
==============
MemCard_DeleteAllFilesForAllUsers
==============
*/

void __fastcall MemCard_DeleteAllFilesForAllUsers()
{
  ?MemCard_DeleteAllFilesForAllUsers@@YAXXZ();
}

/*
==============
MemCard_FilePosition
==============
*/

unsigned int __fastcall MemCard_FilePosition(MemCardFileHandle fileHandle)
{
  return ?MemCard_FilePosition@@YAIUMemCardFileHandle@@@Z(fileHandle);
}

/*
==============
MemCard_WriteFile
==============
*/

void __fastcall MemCard_WriteFile(MemCardFileHandle file, const void *data, unsigned int size)
{
  ?MemCard_WriteFile@@YAXUMemCardFileHandle@@PEBXI@Z(file, data, size);
}

/*
==============
MemCard_PushUseDevDrive
==============
*/

void __fastcall MemCard_PushUseDevDrive(bool useDevDrive)
{
  ?MemCard_PushUseDevDrive@@YAX_N@Z(useDevDrive);
}

/*
==============
MemCard_InitializeSystem
==============
*/

void MemCard_InitializeSystem(void)
{
  ?MemCard_InitializeSystem@@YAXXZ();
}

/*
==============
MemCard_TerminateSystem
==============
*/

void MemCard_TerminateSystem(void)
{
  ?MemCard_TerminateSystem@@YAXXZ();
}

/*
==============
MemCard_ClearMemcardError
==============
*/

void __fastcall MemCard_ClearMemcardError(MemcardError *error)
{
  ?MemCard_ClearMemcardError@@YAXPEAUMemcardError@@@Z(error);
}

/*
==============
MemCard_WriteDevDrive
==============
*/

void __fastcall MemCard_WriteDevDrive(MemCardFileHandle fileHandle, const void *data, int size, MemcardError *error)
{
  ?MemCard_WriteDevDrive@@YAXUMemCardFileHandle@@PEBXHPEAUMemcardError@@@Z(fileHandle, data, size, error);
}

/*
==============
MemCard_GetWriteError
==============
*/

const MemcardError *__fastcall MemCard_GetWriteError()
{
  return ?MemCard_GetWriteError@@YAPEBUMemcardError@@XZ();
}

/*
==============
MemCard_GetUseDevSaveArea
==============
*/

bool __fastcall MemCard_GetUseDevSaveArea()
{
  return ?MemCard_GetUseDevSaveArea@@YA_NXZ();
}

/*
==============
MemCard_Reset
==============
*/

void MemCard_Reset(void)
{
  ?MemCard_Reset@@YAXXZ();
}

/*
==============
MemCard_PopUseDevDrive
==============
*/

void MemCard_PopUseDevDrive(void)
{
  ?MemCard_PopUseDevDrive@@YAXXZ();
}

/*
==============
MemCard_SetMemcardError
==============
*/

void __fastcall MemCard_SetMemcardError(MemcardError *error, const char *errorString, int errorCode)
{
  ?MemCard_SetMemcardError@@YAXPEAUMemcardError@@PEBDH@Z(error, errorString, errorCode);
}

/*
==============
MemCard_GetOpenError
==============
*/

const MemcardError *__fastcall MemCard_GetOpenError()
{
  return ?MemCard_GetOpenError@@YAPEBUMemcardError@@XZ();
}

/*
==============
MemCard_FileSize
==============
*/

__int64 __fastcall MemCard_FileSize(MemCardFileHandle fileHandle)
{
  return ?MemCard_FileSize@@YA_JUMemCardFileHandle@@@Z(fileHandle);
}

/*
==============
MemCard_ClearMemcardError
==============
*/
void MemCard_ClearMemcardError(MemcardError *error)
{
  if ( !error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 533, ASSERT_TYPE_ASSERT, "(error != nullptr)", (const char *)&queryFormat, "error != nullptr") )
    __debugbreak();
  *(_QWORD *)&error->isError = 0i64;
  error->errorString = NULL;
}

/*
==============
MemCard_CloseDevDrive
==============
*/
void MemCard_CloseDevDrive(MemCardFileHandle fileHandle)
{
  MemCard_DevDriveData *ThreadDevDriveData; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int devFileHandleCount; 
  MemCardFileHandle *devFileHandles; 
  void *handle; 
  MemCard_DevDriveData *v8; 
  unsigned int v9; 
  unsigned int v10; 

  ThreadDevDriveData = MemCard_GetThreadDevDriveData();
  v3 = 0i64;
  v4 = 0;
  devFileHandleCount = ThreadDevDriveData->devFileHandleCount;
  if ( devFileHandleCount )
  {
    devFileHandles = ThreadDevDriveData->devFileHandles;
    while ( fileHandle.handle != devFileHandles->handle )
    {
      ++v4;
      ++devFileHandles;
      if ( v4 >= devFileHandleCount )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 329, ASSERT_TYPE_ASSERT, "(MemCard_IsOpenDevDrive( fileHandle ))", (const char *)&queryFormat, "MemCard_IsOpenDevDrive( fileHandle )") )
      __debugbreak();
  }
  handle = (void *)INVALID_SYS_FILE_HANDLE.handle;
  if ( fileHandle.handle )
    handle = (void *)fileHandle.handle;
  FS_FileClose(handle);
  v8 = MemCard_GetThreadDevDriveData();
  v9 = v8->devFileHandleCount;
  if ( v9 )
  {
    while ( fileHandle.handle != v8->devFileHandles[v3].handle )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v9 )
        return;
    }
    v10 = v9 - 1;
    v8->devFileHandleCount = v10;
    if ( v10 )
      v8->devFileHandles[v3].handle = v8->devFileHandles[v10].handle;
  }
}

/*
==============
MemCard_CloseFile
==============
*/
void MemCard_CloseFile(MemCardFileHandle file, bool async)
{
  bool useDevDrive; 
  MemCard_DevDriveData *ThreadDevDriveData; 
  unsigned int devFileHandleCount; 
  __int64 v7; 
  unsigned int v8; 
  MemCardFileHandle *devFileHandles; 
  void *handle; 
  MemCard_DevDriveData *v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  MemCardFileHandle *v16; 
  MemcardError *v17; 

  useDevDrive = MemCard_GetThreadDevDriveData()->useDevDrive;
  ThreadDevDriveData = MemCard_GetThreadDevDriveData();
  if ( useDevDrive )
  {
    devFileHandleCount = ThreadDevDriveData->devFileHandleCount;
    v7 = 0i64;
    v8 = 0;
    if ( devFileHandleCount )
    {
      devFileHandles = ThreadDevDriveData->devFileHandles;
      while ( file.handle != devFileHandles->handle )
      {
        ++v8;
        ++devFileHandles;
        if ( v8 >= devFileHandleCount )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 329, ASSERT_TYPE_ASSERT, "(MemCard_IsOpenDevDrive( fileHandle ))", (const char *)&queryFormat, "MemCard_IsOpenDevDrive( fileHandle )") )
        __debugbreak();
    }
    handle = (void *)INVALID_SYS_FILE_HANDLE.handle;
    if ( file.handle )
      handle = (void *)file.handle;
    FS_FileClose(handle);
    v11 = MemCard_GetThreadDevDriveData();
    v12 = v11->devFileHandleCount;
    if ( v12 )
    {
      while ( file.handle != v11->devFileHandles[v7].handle )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v12 )
          return;
      }
      v13 = v12 - 1;
      v11->devFileHandleCount = v13;
      if ( v13 )
        v11->devFileHandles[v7].handle = v11->devFileHandles[v13].handle;
    }
  }
  else
  {
    v14 = ThreadDevDriveData->devFileHandleCount;
    v15 = 0;
    if ( v14 )
    {
      v16 = ThreadDevDriveData->devFileHandles;
      while ( file.handle != v16->handle )
      {
        ++v15;
        ++v16;
        if ( v15 >= v14 )
          goto LABEL_23;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 428, ASSERT_TYPE_ASSERT, "(!MemCard_IsOpenDevDrive( file ))", (const char *)&queryFormat, "!MemCard_IsOpenDevDrive( file )") )
        __debugbreak();
    }
LABEL_23:
    v17 = (MemcardError *)MemCard_GetWriteError();
    MemCard_CloseFile_Platform(file, async, v17);
  }
}

/*
==============
MemCard_DeleteAllFilesForAllUsers
==============
*/

void MemCard_DeleteAllFilesForAllUsers(void)
{
  MemCard_DeleteAllFilesForAllUsers_Platform();
}

/*
==============
MemCard_FilePosition
==============
*/
unsigned int MemCard_FilePosition(MemCardFileHandle fileHandle)
{
  bool useDevDrive; 
  MemCard_DevDriveData *ThreadDevDriveData; 
  unsigned int v4; 
  unsigned int devFileHandleCount; 
  MemCardFileHandle *devFileHandles; 
  __int64 v7; 
  MemCardFileHandle *i; 

  useDevDrive = MemCard_GetThreadDevDriveData()->useDevDrive;
  ThreadDevDriveData = MemCard_GetThreadDevDriveData();
  v4 = 0;
  devFileHandleCount = ThreadDevDriveData->devFileHandleCount;
  if ( useDevDrive )
  {
    if ( devFileHandleCount )
    {
      devFileHandles = ThreadDevDriveData->devFileHandles;
      while ( fileHandle.handle != devFileHandles->handle )
      {
        ++v4;
        ++devFileHandles;
        if ( v4 >= devFileHandleCount )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 371, ASSERT_TYPE_ASSERT, "(MemCard_IsOpenDevDrive( fileHandle ))", (const char *)&queryFormat, "MemCard_IsOpenDevDrive( fileHandle )") )
        __debugbreak();
    }
    if ( !fileHandle.handle )
      fileHandle.handle = INVALID_SYS_FILE_HANDLE.handle;
    v7 = FS_FileTell((sysFileHandle_t)fileHandle.handle);
    if ( (v7 < 0 || (unsigned __int64)v7 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v7, "signed", v7) )
      __debugbreak();
    return v7;
  }
  else
  {
    if ( devFileHandleCount )
    {
      for ( i = ThreadDevDriveData->devFileHandles; fileHandle.handle != i->handle; ++i )
      {
        if ( ++v4 >= devFileHandleCount )
          return MemCard_FilePosition_Platform(fileHandle);
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 488, ASSERT_TYPE_ASSERT, "(!MemCard_IsOpenDevDrive( fileHandle ))", (const char *)&queryFormat, "!MemCard_IsOpenDevDrive( fileHandle )") )
        __debugbreak();
    }
    return MemCard_FilePosition_Platform(fileHandle);
  }
}

/*
==============
MemCard_FileSize
==============
*/
__int64 MemCard_FileSize(MemCardFileHandle fileHandle)
{
  bool useDevDrive; 
  MemCard_DevDriveData *ThreadDevDriveData; 
  unsigned int v4; 
  unsigned int devFileHandleCount; 
  MemCardFileHandle *devFileHandles; 
  MemCardFileHandle *i; 

  useDevDrive = MemCard_GetThreadDevDriveData()->useDevDrive;
  ThreadDevDriveData = MemCard_GetThreadDevDriveData();
  v4 = 0;
  devFileHandleCount = ThreadDevDriveData->devFileHandleCount;
  if ( useDevDrive )
  {
    if ( devFileHandleCount )
    {
      devFileHandles = ThreadDevDriveData->devFileHandles;
      while ( fileHandle.handle != devFileHandles->handle )
      {
        ++v4;
        ++devFileHandles;
        if ( v4 >= devFileHandleCount )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 358, ASSERT_TYPE_ASSERT, "(MemCard_IsOpenDevDrive( fileHandle ))", (const char *)&queryFormat, "MemCard_IsOpenDevDrive( fileHandle )") )
        __debugbreak();
    }
    if ( !fileHandle.handle )
      fileHandle.handle = INVALID_SYS_FILE_HANDLE.handle;
    return FS_FileGetFileSize((sysFileHandle_t)fileHandle.handle);
  }
  else
  {
    if ( devFileHandleCount )
    {
      for ( i = ThreadDevDriveData->devFileHandles; fileHandle.handle != i->handle; ++i )
      {
        if ( ++v4 >= devFileHandleCount )
          return MemCard_FileSize_Platform(fileHandle);
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 474, ASSERT_TYPE_ASSERT, "(!MemCard_IsOpenDevDrive( fileHandle ))", (const char *)&queryFormat, "!MemCard_IsOpenDevDrive( fileHandle )") )
        __debugbreak();
    }
    return MemCard_FileSize_Platform(fileHandle);
  }
}

/*
==============
MemCard_GetOpenError
==============
*/
const MemcardError *MemCard_GetOpenError()
{
  ThreadContext CurrentThreadContext; 
  int v1; 
  const ThreadContext *i; 
  const char *CurrentThreadContextName; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v1 = 0;
  for ( i = SUPPORTED_THREADS; *i != CurrentThreadContext; ++i )
  {
    if ( (unsigned int)++v1 >= 5 )
    {
      CurrentThreadContextName = Sys_GetCurrentThreadContextName();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 510, ASSERT_TYPE_ASSERT, "(MemCard_IsSupportedThread())", "%s\n\tAccessing memcard data from unsupported thread %s", "MemCard_IsSupportedThread()", CurrentThreadContextName) )
        __debugbreak();
      return (const MemcardError *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 464i64);
    }
  }
  return (const MemcardError *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 464i64);
}

/*
==============
MemCard_GetThreadDevDriveData
==============
*/
MemCard_DevDriveData *MemCard_GetThreadDevDriveData()
{
  ThreadContext CurrentThreadContext; 
  int v1; 
  const ThreadContext *i; 
  const char *CurrentThreadContextName; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v1 = 0;
  for ( i = SUPPORTED_THREADS; *i != CurrentThreadContext; ++i )
  {
    if ( (unsigned int)++v1 >= 5 )
    {
      CurrentThreadContextName = Sys_GetCurrentThreadContextName();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 94, ASSERT_TYPE_ASSERT, "(MemCard_IsSupportedThread())", "%s\n\tAccessing memcard data from unsupported thread %s", "MemCard_IsSupportedThread()", CurrentThreadContextName) )
        __debugbreak();
      return (MemCard_DevDriveData *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 496i64);
    }
  }
  return (MemCard_DevDriveData *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 496i64);
}

/*
==============
MemCard_GetUseDevSaveArea
==============
*/
_BOOL8 MemCard_GetUseDevSaveArea()
{
  return MemCard_GetThreadDevDriveData()->useDevSaveArea;
}

/*
==============
MemCard_GetWriteError
==============
*/
const MemcardError *MemCard_GetWriteError()
{
  ThreadContext CurrentThreadContext; 
  int v1; 
  const ThreadContext *i; 
  const char *CurrentThreadContextName; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v1 = 0;
  for ( i = SUPPORTED_THREADS; *i != CurrentThreadContext; ++i )
  {
    if ( (unsigned int)++v1 >= 5 )
    {
      CurrentThreadContextName = Sys_GetCurrentThreadContextName();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 517, ASSERT_TYPE_ASSERT, "(MemCard_IsSupportedThread())", "%s\n\tAccessing memcard data from unsupported thread %s", "MemCard_IsSupportedThread()", CurrentThreadContextName) )
        __debugbreak();
      return (const MemcardError *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 480i64);
    }
  }
  return (const MemcardError *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 480i64);
}

/*
==============
MemCard_InitializeSystem
==============
*/
void MemCard_InitializeSystem(void)
{
  MemCard_InitializeSystem_Platform();
  Cmd_AddCommandInternal("delete_all_savedata", MemCard_DeleteAllFilesForAllUsers, &MemCard_DeleteAllFilesForAllUsers_VAR);
}

/*
==============
MemCard_IsOpenDevDrive
==============
*/
char MemCard_IsOpenDevDrive(MemCardFileHandle fileHandle)
{
  MemCard_DevDriveData *ThreadDevDriveData; 
  int v3; 
  unsigned int devFileHandleCount; 
  MemCardFileHandle *i; 

  ThreadDevDriveData = MemCard_GetThreadDevDriveData();
  v3 = 0;
  devFileHandleCount = ThreadDevDriveData->devFileHandleCount;
  if ( !devFileHandleCount )
    return 0;
  for ( i = ThreadDevDriveData->devFileHandles; fileHandle.handle != i->handle; ++i )
  {
    if ( ++v3 >= devFileHandleCount )
      return 0;
  }
  return 1;
}

/*
==============
MemCard_IsUsingDevDrive
==============
*/
_BOOL8 MemCard_IsUsingDevDrive()
{
  return MemCard_GetThreadDevDriveData()->useDevDrive;
}

/*
==============
MemCard_OpenDevDrive
==============
*/
MemCardFileHandle *MemCard_OpenDevDrive(MemCardFileHandle *result, const char *name, MemcardError *operation, MemcardError *error)
{
  unsigned int v5; 
  __int64 v7; 
  const char *PathDevDrive_Platform; 
  const char *v9; 
  sysFileHandle_t *Binary; 
  MemCardFileHandle *v11; 
  MemCard_DevDriveData *ThreadDevDriveData; 
  unsigned int v13; 
  unsigned int devFileHandleCount; 
  MemCardFileHandle *devFileHandles; 
  MemCard_DevDriveData *v16; 
  MemCardFileHandle *v17; 
  char ospath[256]; 

  v5 = (unsigned int)name;
  if ( !MemCard_GetThreadDevDriveData()->useDevDrive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 206, ASSERT_TYPE_ASSERT, "(MemCard_IsUsingDevDrive())", (const char *)&queryFormat, "MemCard_IsUsingDevDrive()") )
    __debugbreak();
  if ( v5 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 207, ASSERT_TYPE_ASSERT, "(operation == MEMCARD_READ || operation == MEMCARD_WRITE)", (const char *)&queryFormat, "operation == MEMCARD_READ || operation == MEMCARD_WRITE") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 208, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v7 = -1i64;
  do
    ++v7;
  while ( *((_BYTE *)&result->handle + v7) );
  if ( (unsigned int)v7 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 209, ASSERT_TYPE_ASSERT, "(I_strlen( name ) < ( 64 ))", (const char *)&queryFormat, "I_strlen( name ) < MAX_QPATH") )
    __debugbreak();
  PathDevDrive_Platform = MemCard_GetPathDevDrive_Platform();
  FS_BuildOSPath(PathDevDrive_Platform, (const char *)&queryFormat.fmt + 3, (const char *)result, (char (*)[256])ospath);
  if ( FS_CreatePath(ospath) || (v5 ? (Binary = FS_FileOpenWriteBinary((sysFileHandle_t *)ospath, v9)) : (Binary = FS_FileOpenReadBinary((sysFileHandle_t *)ospath, v9)), v11 = (MemCardFileHandle *)Binary, Binary == (sysFileHandle_t *)-1i64) )
  {
    MemCard_SetMemcardError(operation, MEMCARD_UNABLE_TO_ACCESS_DEVICE, 0);
    return (MemCardFileHandle *)MEMCARD_INVALID_FILE_HANDLE.handle;
  }
  else
  {
    if ( !operation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 533, ASSERT_TYPE_ASSERT, "(error != nullptr)", (const char *)&queryFormat, "error != nullptr") )
      __debugbreak();
    *(_QWORD *)&operation->isError = 0i64;
    operation->errorString = NULL;
    ThreadDevDriveData = MemCard_GetThreadDevDriveData();
    v13 = 0;
    devFileHandleCount = ThreadDevDriveData->devFileHandleCount;
    if ( devFileHandleCount )
    {
      devFileHandles = ThreadDevDriveData->devFileHandles;
      while ( v11 != (MemCardFileHandle *)devFileHandles->handle )
      {
        ++v13;
        ++devFileHandles;
        if ( v13 >= devFileHandleCount )
          goto LABEL_30;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 235, ASSERT_TYPE_ASSERT, "(!MemCard_IsOpenDevDrive( memCardFileHandle ))", (const char *)&queryFormat, "!MemCard_IsOpenDevDrive( memCardFileHandle )") )
        __debugbreak();
    }
LABEL_30:
    v16 = MemCard_GetThreadDevDriveData();
    if ( v16->devFileHandleCount >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 239, ASSERT_TYPE_ASSERT, "(threadDevDriveData->devFileHandleCount < MAX_DEV_FILE_HANDLES)", (const char *)&queryFormat, "threadDevDriveData->devFileHandleCount < MAX_DEV_FILE_HANDLES") )
      __debugbreak();
    v16->devFileHandles[v16->devFileHandleCount].handle = (__int64)v11;
    v17 = v11;
    ++v16->devFileHandleCount;
  }
  return v17;
}

/*
==============
MemCard_OpenFile
==============
*/
MemCardFileHandle *MemCard_OpenFile(MemCardFileHandle *result, const char *name, MemcardOperation operation, MemcardSizeHint sizeHint)
{
  unsigned int v6; 
  ThreadContext CurrentThreadContext; 
  unsigned int v9; 
  const ThreadContext *v10; 
  const char *CurrentThreadContextName; 
  MemcardError *v12; 
  MemcardError *v13; 
  MemCardFileHandle *v15; 
  MemcardError *fmt; 
  int v17; 

  v6 = (unsigned int)name;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v9 = 0;
  v10 = SUPPORTED_THREADS;
  while ( *v10 != CurrentThreadContext )
  {
    ++v9;
    ++v10;
    if ( v9 >= 5 )
    {
      CurrentThreadContextName = Sys_GetCurrentThreadContextName();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 510, ASSERT_TYPE_ASSERT, "(MemCard_IsSupportedThread())", "%s\n\tAccessing memcard data from unsupported thread %s", "MemCard_IsSupportedThread()", CurrentThreadContextName) )
        __debugbreak();
      break;
    }
  }
  v12 = (MemcardError *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 464i64);
  if ( MemCard_GetThreadDevDriveData()->useDevDrive )
    return MemCard_OpenDevDrive(result, (const char *)v6, v12, v13);
  LODWORD(fmt) = sizeHint;
  v15 = MemCard_OpenFile_Platform(result, (const char *)v6, operation, (MemcardSizeHint)v12, fmt, v17);
  if ( v15 )
    MemCard_ClearMemcardError(v12);
  return v15;
}

/*
==============
MemCard_PopUseDevDrive
==============
*/
void MemCard_PopUseDevDrive(void)
{
  MemCard_DevDriveData *ThreadDevDriveData; 
  volatile signed __int32 *p_useDevDrivePushed; 

  ThreadDevDriveData = MemCard_GetThreadDevDriveData();
  p_useDevDrivePushed = &ThreadDevDriveData->useDevDrivePushed;
  ThreadDevDriveData->useDevDrive = 0;
  if ( (((_BYTE)ThreadDevDriveData + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &ThreadDevDriveData->useDevDrivePushed) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_useDevDrivePushed, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 139, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &threadDevDriveData->useDevDrivePushed, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &threadDevDriveData->useDevDrivePushed, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
MemCard_PositionDevDrive
==============
*/
__int64 MemCard_PositionDevDrive(MemCardFileHandle fileHandle)
{
  MemCard_DevDriveData *ThreadDevDriveData; 
  unsigned int v3; 
  unsigned int devFileHandleCount; 
  MemCardFileHandle *devFileHandles; 

  ThreadDevDriveData = MemCard_GetThreadDevDriveData();
  v3 = 0;
  devFileHandleCount = ThreadDevDriveData->devFileHandleCount;
  if ( devFileHandleCount )
  {
    devFileHandles = ThreadDevDriveData->devFileHandles;
    while ( fileHandle.handle != devFileHandles->handle )
    {
      ++v3;
      ++devFileHandles;
      if ( v3 >= devFileHandleCount )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 371, ASSERT_TYPE_ASSERT, "(MemCard_IsOpenDevDrive( fileHandle ))", (const char *)&queryFormat, "MemCard_IsOpenDevDrive( fileHandle )") )
      __debugbreak();
  }
  if ( !fileHandle.handle )
    fileHandle.handle = INVALID_SYS_FILE_HANDLE.handle;
  return FS_FileTell((sysFileHandle_t)fileHandle.handle);
}

/*
==============
MemCard_PushUseDevDrive
==============
*/
void MemCard_PushUseDevDrive(bool useDevDrive)
{
  MemCard_DevDriveData *ThreadDevDriveData; 
  MemCard_DevDriveData *v3; 
  volatile signed __int32 *p_useDevDrivePushed; 

  ThreadDevDriveData = MemCard_GetThreadDevDriveData();
  v3 = ThreadDevDriveData;
  p_useDevDrivePushed = &ThreadDevDriveData->useDevDrivePushed;
  if ( (((_BYTE)ThreadDevDriveData + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &ThreadDevDriveData->useDevDrivePushed) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_useDevDrivePushed, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 128, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &threadDevDriveData->useDevDrivePushed, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &threadDevDriveData->useDevDrivePushed, 1, 0 ) == 0") )
    __debugbreak();
  v3->useDevDrive = useDevDrive;
}

/*
==============
MemCard_ReadFile
==============
*/
unsigned __int64 MemCard_ReadFile(MemCardFileHandle file, void *data, unsigned __int64 maxsize, MemcardError *error)
{
  MemCard_DevDriveData *ThreadDevDriveData; 
  unsigned int v9; 
  unsigned int devFileHandleCount; 
  MemCardFileHandle *devFileHandles; 
  MemcardError *v12; 
  int v14; 
  MemCard_DevDriveData *v15; 
  int v16; 
  unsigned int v17; 
  MemCardFileHandle *i; 

  if ( MemCard_GetThreadDevDriveData()->useDevDrive )
  {
    if ( !error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 257, ASSERT_TYPE_ASSERT, "(error)", (const char *)&queryFormat, "error") )
      __debugbreak();
    if ( !file.handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 258, ASSERT_TYPE_ASSERT, "(fileHandle)", (const char *)&queryFormat, "fileHandle") )
      __debugbreak();
    if ( !maxsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 259, ASSERT_TYPE_ASSERT, "(maxsize > 0)", (const char *)&queryFormat, "maxsize > 0") )
      __debugbreak();
    ThreadDevDriveData = MemCard_GetThreadDevDriveData();
    v9 = 0;
    devFileHandleCount = ThreadDevDriveData->devFileHandleCount;
    if ( devFileHandleCount )
    {
      devFileHandles = ThreadDevDriveData->devFileHandles;
      while ( file.handle != devFileHandles->handle )
      {
        ++v9;
        ++devFileHandles;
        if ( v9 >= devFileHandleCount )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 260, ASSERT_TYPE_ASSERT, "(MemCard_IsOpenDevDrive( fileHandle ))", (const char *)&queryFormat, "MemCard_IsOpenDevDrive( fileHandle )") )
        __debugbreak();
    }
    if ( !file.handle )
      file.handle = INVALID_SYS_FILE_HANDLE.handle;
    if ( data )
    {
      maxsize = FS_FileRead(data, maxsize, (sysFileHandle_t)file.handle);
      v12 = error;
      if ( !maxsize )
      {
LABEL_21:
        MemCard_SetMemcardError(v12, MEMCARD_UNABLE_TO_READ_FROM_DEVICE, 0);
        return maxsize;
      }
    }
    else
    {
      v14 = FS_FileSeek((sysFileHandle_t)file.handle, maxsize, 0);
      v12 = error;
      if ( v14 )
        goto LABEL_21;
    }
    MemCard_ClearMemcardError(v12);
    return maxsize;
  }
  else
  {
    v15 = MemCard_GetThreadDevDriveData();
    v16 = 0;
    v17 = v15->devFileHandleCount;
    if ( v17 )
    {
      for ( i = v15->devFileHandles; file.handle != i->handle; ++i )
      {
        if ( ++v16 >= v17 )
          return MemCard_ReadFile_Platform(file, data, maxsize, error);
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 442, ASSERT_TYPE_ASSERT, "(!MemCard_IsOpenDevDrive( file ))", (const char *)&queryFormat, "!MemCard_IsOpenDevDrive( file )") )
        __debugbreak();
    }
    return MemCard_ReadFile_Platform(file, data, maxsize, error);
  }
}

/*
==============
MemCard_Reset
==============
*/

void MemCard_Reset(void)
{
  MemCard_Reset_Platform();
}

/*
==============
MemCard_SetMemcardError
==============
*/
void MemCard_SetMemcardError(MemcardError *error, const char *errorString, int errorCode)
{
  if ( !error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 524, ASSERT_TYPE_ASSERT, "(error != nullptr)", (const char *)&queryFormat, "error != nullptr") )
    __debugbreak();
  error->errorString = errorString;
  error->errorCode = errorCode;
  error->isError = 1;
}

/*
==============
MemCard_SetUseDevSaveArea
==============
*/
void MemCard_SetUseDevSaveArea(bool useDevSaveArea)
{
  MemCard_GetThreadDevDriveData()->useDevSaveArea = useDevSaveArea;
}

/*
==============
MemCard_SizeDevDrive
==============
*/
__int64 MemCard_SizeDevDrive(MemCardFileHandle fileHandle)
{
  MemCard_DevDriveData *ThreadDevDriveData; 
  unsigned int v3; 
  unsigned int devFileHandleCount; 
  MemCardFileHandle *devFileHandles; 

  ThreadDevDriveData = MemCard_GetThreadDevDriveData();
  v3 = 0;
  devFileHandleCount = ThreadDevDriveData->devFileHandleCount;
  if ( devFileHandleCount )
  {
    devFileHandles = ThreadDevDriveData->devFileHandles;
    while ( fileHandle.handle != devFileHandles->handle )
    {
      ++v3;
      ++devFileHandles;
      if ( v3 >= devFileHandleCount )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 358, ASSERT_TYPE_ASSERT, "(MemCard_IsOpenDevDrive( fileHandle ))", (const char *)&queryFormat, "MemCard_IsOpenDevDrive( fileHandle )") )
      __debugbreak();
  }
  if ( !fileHandle.handle )
    fileHandle.handle = INVALID_SYS_FILE_HANDLE.handle;
  return FS_FileGetFileSize((sysFileHandle_t)fileHandle.handle);
}

/*
==============
MemCard_TerminateSystem
==============
*/

void MemCard_TerminateSystem(void)
{
  MemCard_TerminateSystem_Platform();
}

/*
==============
MemCard_WriteDevDrive
==============
*/
void MemCard_WriteDevDrive(MemCardFileHandle fileHandle, const void *data, int size, MemcardError *error)
{
  unsigned __int64 v4; 
  __int64 handle; 
  MemCard_DevDriveData *ThreadDevDriveData; 
  unsigned int v9; 
  unsigned int devFileHandleCount; 
  MemCardFileHandle *devFileHandles; 

  v4 = size;
  handle = fileHandle.handle;
  if ( !fileHandle.handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 302, ASSERT_TYPE_ASSERT, "(fileHandle)", (const char *)&queryFormat, "fileHandle") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 303, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( (int)v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 304, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( !error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 305, ASSERT_TYPE_ASSERT, "(error)", (const char *)&queryFormat, "error") )
    __debugbreak();
  ThreadDevDriveData = MemCard_GetThreadDevDriveData();
  v9 = 0;
  devFileHandleCount = ThreadDevDriveData->devFileHandleCount;
  if ( devFileHandleCount )
  {
    devFileHandles = ThreadDevDriveData->devFileHandles;
    while ( handle != devFileHandles->handle )
    {
      ++v9;
      ++devFileHandles;
      if ( v9 >= devFileHandleCount )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 306, ASSERT_TYPE_ASSERT, "(MemCard_IsOpenDevDrive( fileHandle ))", (const char *)&queryFormat, "MemCard_IsOpenDevDrive( fileHandle )") )
      __debugbreak();
  }
  if ( !handle )
    handle = INVALID_SYS_FILE_HANDLE.handle;
  if ( FS_FileWrite(data, v4, (sysFileHandle_t)handle) == v4 )
  {
    if ( !error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 533, ASSERT_TYPE_ASSERT, "(error != nullptr)", (const char *)&queryFormat, "error != nullptr") )
      __debugbreak();
    *(_QWORD *)&error->isError = 0i64;
    error->errorString = NULL;
  }
  else
  {
    MemCard_SetMemcardError(error, MEMCARD_INSUFFICIENT_FREE_DISK, 0);
  }
}

/*
==============
MemCard_WriteFile
==============
*/
void MemCard_WriteFile(MemCardFileHandle file, const void *data, unsigned int size)
{
  MemcardError *v6; 
  MemCard_DevDriveData *ThreadDevDriveData; 
  unsigned int v8; 
  unsigned int devFileHandleCount; 
  MemCardFileHandle *devFileHandles; 

  v6 = (MemcardError *)MemCard_GetWriteError();
  if ( MemCard_GetThreadDevDriveData()->useDevDrive )
  {
    MemCard_WriteDevDrive(file, data, size, v6);
  }
  else
  {
    ThreadDevDriveData = MemCard_GetThreadDevDriveData();
    v8 = 0;
    devFileHandleCount = ThreadDevDriveData->devFileHandleCount;
    if ( devFileHandleCount )
    {
      devFileHandles = ThreadDevDriveData->devFileHandles;
      while ( file.handle != devFileHandles->handle )
      {
        ++v8;
        ++devFileHandles;
        if ( v8 >= devFileHandleCount )
          goto LABEL_10;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_memorycard.cpp", 460, ASSERT_TYPE_ASSERT, "(!MemCard_IsOpenDevDrive( file ))", (const char *)&queryFormat, "!MemCard_IsOpenDevDrive( file )") )
        __debugbreak();
    }
LABEL_10:
    MemCard_WriteFile_Platform(file, data, size, v6);
  }
}

