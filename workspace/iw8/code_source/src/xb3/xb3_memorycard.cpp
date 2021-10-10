/*
==============
MemCard_LargeFileBuffer_Init
==============
*/

void MemCard_LargeFileBuffer_Init(void)
{
  ?MemCard_LargeFileBuffer_Init@@YAXXZ();
}

/*
==============
MemCard_Reset_Platform
==============
*/

void MemCard_Reset_Platform(void)
{
  ?MemCard_Reset_Platform@@YAXXZ();
}

/*
==============
MemCard_LargeFileBuffer_GetCommitSize
==============
*/

unsigned __int64 __fastcall MemCard_LargeFileBuffer_GetCommitSize()
{
  return ?MemCard_LargeFileBuffer_GetCommitSize@@YA_KXZ();
}

/*
==============
MemCard_OpenFile_Platform
==============
*/

MemCardFileHandle *__fastcall MemCard_OpenFile_Platform(MemCardFileHandle *result, const char *name, MemcardOperation operation, MemcardSizeHint sizeHint, MemcardError *error, int controllerIndex)
{
  return ?MemCard_OpenFile_Platform@@YA?AUMemCardFileHandle@@PEBDW4MemcardOperation@@W4MemcardSizeHint@@PEAUMemcardError@@H@Z(result, name, operation, sizeHint, error, controllerIndex);
}

/*
==============
MemCard_TerminateSystem_Platform
==============
*/

void MemCard_TerminateSystem_Platform(void)
{
  ?MemCard_TerminateSystem_Platform@@YAXXZ();
}

/*
==============
MemCard_WriteFile_Platform
==============
*/

void __fastcall MemCard_WriteFile_Platform(MemCardFileHandle fileHandle, const void *data, unsigned int size, MemcardError *writeError)
{
  ?MemCard_WriteFile_Platform@@YAXUMemCardFileHandle@@PEBXIPEAUMemcardError@@@Z(fileHandle, data, size, writeError);
}

/*
==============
MemCard_ReadFile_Platform
==============
*/

__int64 __fastcall MemCard_ReadFile_Platform(MemCardFileHandle fileHandle, void *data, unsigned __int64 maxsize, MemcardError *error)
{
  return ?MemCard_ReadFile_Platform@@YA_JUMemCardFileHandle@@PEAX_KPEAUMemcardError@@@Z(fileHandle, data, maxsize, error);
}

/*
==============
MemCard_LargeFileBuffer_GetReserveSize
==============
*/

unsigned __int64 __fastcall MemCard_LargeFileBuffer_GetReserveSize()
{
  return ?MemCard_LargeFileBuffer_GetReserveSize@@YA_KXZ();
}

/*
==============
MemCard_InitializeSystem_Platform
==============
*/

void MemCard_InitializeSystem_Platform(void)
{
  ?MemCard_InitializeSystem_Platform@@YAXXZ();
}

/*
==============
MemCard_LargeFileBuffer_LargeBufferCommitted
==============
*/

bool __fastcall MemCard_LargeFileBuffer_LargeBufferCommitted()
{
  return ?MemCard_LargeFileBuffer_LargeBufferCommitted@@YA_NXZ();
}

/*
==============
MemCard_CloseFile_Platform
==============
*/

void __fastcall MemCard_CloseFile_Platform(MemCardFileHandle fileHandle, bool async, MemcardError *writeError)
{
  ?MemCard_CloseFile_Platform@@YAXUMemCardFileHandle@@_NPEAUMemcardError@@@Z(fileHandle, async, writeError);
}

/*
==============
MemCard_FileSize_Platform
==============
*/

__int64 __fastcall MemCard_FileSize_Platform(MemCardFileHandle fileHandle)
{
  return ?MemCard_FileSize_Platform@@YA_JUMemCardFileHandle@@@Z(fileHandle);
}

/*
==============
MemCard_GetPathDevDrive_Platform
==============
*/

const char *__fastcall MemCard_GetPathDevDrive_Platform()
{
  return ?MemCard_GetPathDevDrive_Platform@@YAPEBDXZ();
}

/*
==============
MemCard_FilePosition_Platform
==============
*/

unsigned int __fastcall MemCard_FilePosition_Platform(MemCardFileHandle fileHandle)
{
  return ?MemCard_FilePosition_Platform@@YAIUMemCardFileHandle@@@Z(fileHandle);
}

/*
==============
MemCard_LargeFileBuffer_Destroy
==============
*/

void MemCard_LargeFileBuffer_Destroy(void)
{
  ?MemCard_LargeFileBuffer_Destroy@@YAXXZ();
}

/*
==============
MemCard_DeleteAllFilesForAllUsers_Platform
==============
*/

void MemCard_DeleteAllFilesForAllUsers_Platform(void)
{
  ?MemCard_DeleteAllFilesForAllUsers_Platform@@YAXXZ();
}

/*
==============
GetSaveDataFileInfo
==============
*/
SaveDataFileInfo *GetSaveDataFileInfo(MemCardFileHandle fileHandle)
{
  int handle; 

  handle = fileHandle.handle;
  if ( (unsigned __int64)(fileHandle.handle + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", SLODWORD(fileHandle.handle), "signed", fileHandle.handle) )
    __debugbreak();
  if ( handle <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 99, ASSERT_TYPE_ASSERT, "(fileIndex > 0)", (const char *)&queryFormat, "fileIndex > 0") )
    __debugbreak();
  if ( handle > 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 100, ASSERT_TYPE_ASSERT, "(fileIndex <= ( 2 + 4 ))", (const char *)&queryFormat, "fileIndex <= XB3_MEMCARD_FILE_COUNT") )
    __debugbreak();
  return (SaveDataFileInfo *)&memoryCardGlob.fileBufferSpaceSmall[72 * handle + 262096];
}

/*
==============
MemCard_CloseFile_Platform
==============
*/
void MemCard_CloseFile_Platform(MemCardFileHandle fileHandle, bool async, MemcardError *writeError)
{
  SaveDataFileInfo *SaveDataFileInfo; 
  SaveDataFileInfo *v7; 
  volatile Platform::String *v8; 
  Platform::String *v9; 
  Windows::Storage::Streams::IBuffer *v10; 
  Windows::Storage::Streams::IBuffer *v11; 
  Windows::Xbox::Storage::ConnectedStorageSpace *UserConnectedStorage; 
  Windows::Xbox::Storage::IConnectedStorageSpace *v13; 
  Platform::Collections::Map<Platform::String _,Windows::Storage::Streams::IBuffer _,std::less<Platform::String _>,1,1> *v14; 
  Platform::Collections::Map<Platform::String _,Windows::Storage::Streams::IBuffer _,std::less<Platform::String _>,1,1> *v15; 
  int v16; 
  Platform::Collections::Map<Platform::String _,Windows::Storage::Streams::IBuffer _,std::less<Platform::String _>,1,1> *Container; 
  HSTRING v18; 
  Windows::Foundation::Collections::IMapView<Platform::String _,Windows::Storage::Streams::IBuffer _> *View__Q__IMap_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows____Map_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows__U__less_PE_AAVString_Platform___std___00_00_2Platform__UE_AAAPE_AAU__IMapView_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___234_XZ; 
  int v20; 
  Platform::Collections::Map<Platform::String _,Windows::Storage::Streams::IBuffer _,std::less<Platform::String _>,1,1> *v21; 
  Windows::Foundation::IAsyncAction *v22; 
  Concurrency::task_options *v23; 
  std::_Ref_count_base *Rep; 
  volatile signed __int32 *actionSubmitUpdates; 
  Concurrency::task<void> *v27; 
  HSTRING v28; 
  Concurrency::task<void> v29; 
  HSTRING string[6]; 
  Windows::Foundation::IAsyncAction *v31; 
  MemCard_CloseFile_Platform::__l50::<lambda_a9ac7a0c310a8e05bbfb1c2014b4e7f9> v32; 
  Windows::Foundation::IAsyncAction *v33; 
  MemcardError *v34; 
  __int64 v35; 
  Concurrency::task<void> v36; 
  HSTRING_HEADER hstringHeader; 
  Concurrency::task_options v38; 
  Concurrency::task_options v39; 
  void *v40; 
  bool v41; 
  MemcardError *v42; 
  Platform::Collections::Map<Platform::String _,Windows::Storage::Streams::IBuffer _,std::less<Platform::String _>,1,1> *v43; 

  v42 = writeError;
  v41 = async;
  v35 = -2i64;
  if ( !writeError && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 565, ASSERT_TYPE_ASSERT, "(writeError != nullptr)", (const char *)&queryFormat, "writeError != nullptr") )
    __debugbreak();
  if ( fileHandle.handle )
  {
    LockMutex(memoryCardGlob.fileInfoMutex);
    SaveDataFileInfo = GetSaveDataFileInfo(fileHandle);
    v7 = SaveDataFileInfo;
    string[1] = (HSTRING)SaveDataFileInfo;
    if ( !SaveDataFileInfo->isOpen )
    {
LABEL_8:
      UnlockMutex(memoryCardGlob.fileInfoMutex);
      return;
    }
    if ( SaveDataFileInfo->mode == MEMCARD_READ )
    {
      Memcard_FileInfoReset(SaveDataFileInfo);
      goto LABEL_8;
    }
    if ( !SaveDataFileInfo->position || !SaveDataFileInfo->user || SaveDataFileInfo->isWriting )
      goto LABEL_8;
    SaveDataFileInfo->isWriting = 1;
    v8 = NewString(SaveDataFileInfo->fileName);
    v40 = (void *)v8;
    v9 = (Platform::String *)__abi_winrt_ptrto_string_ctor(v8);
    v28 = (HSTRING)v9;
    WindowsDeleteString_0((HSTRING)v8);
    v10 = WrapDataBuffer(v7->buffer, v7->bufferSize, v7->position);
    v11 = v10;
    v40 = v10;
    if ( v10 )
      v10->__abi_AddRef(v10);
    string[5] = (HSTRING)v11;
    if ( v11 )
      v11->__abi_Release(v11);
    UserConnectedStorage = Users_GetUserConnectedStorage(v7->user);
    v13 = UserConnectedStorage;
    v40 = UserConnectedStorage;
    if ( UserConnectedStorage )
      UserConnectedStorage->__abi_AddRef(UserConnectedStorage);
    string[4] = (HSTRING)v13;
    if ( v13 )
      v13->__abi_Release(v13);
    if ( v13 )
    {
      v43 = (Platform::Collections::Map<Platform::String _,Windows::Storage::Streams::IBuffer _,std::less<Platform::String _>,1,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
      Platform::Collections::Map<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *,std::less<Platform::String __gc *>,1,1>::Map<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *,std::less<Platform::String __gc *>,1,1>(v43, (const std::less<Platform::String _> *)&v40);
      v15 = v14;
      v43 = v14;
      if ( v14 )
        v14->__abi_AddRef(v14);
      string[3] = (HSTRING)v15;
      if ( v15 )
        v15->__abi_Release(v15);
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 613, ASSERT_TYPE_ASSERT, "(updates != nullptr)", (const char *)&queryFormat, "updates != nullptr") )
        __debugbreak();
      v16 = WindowsCreateStringReference_0(L"save", 4u, &hstringHeader, string);
      if ( v16 < 0 )
        __abi_WinRTraiseException(v16);
      j__Insert__Q__IMap_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows____Map_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows__U__less_PE_AAVString_Platform___std___00_00_2Platform__UE_AAA_NPE_AAVString_6_PE_AAUIBuffer_Streams_Storage_4__Z(v15, (Platform::String *)string[0], v11);
      Container = (Platform::Collections::Map<Platform::String _,Windows::Storage::Streams::IBuffer _,std::less<Platform::String _>,1,1> *)Windows::Xbox::Storage::IConnectedStorageSpace::CreateContainer(v13, v9);
      v18 = (HSTRING)Container;
      v43 = Container;
      if ( Container )
        Container->__abi_AddRef(Container);
      string[2] = v18;
      if ( v18 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v18 + 16i64))(v18);
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 617, ASSERT_TYPE_ASSERT, "(container != nullptr)", (const char *)&queryFormat, "container != nullptr") )
        __debugbreak();
      Com_Printf(16, "MEMCARD: WRITE %s\n", v7->fileName);
      View__Q__IMap_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows____Map_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows__U__less_PE_AAVString_Platform___std___00_00_2Platform__UE_AAAPE_AAU__IMapView_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___234_XZ = j__GetView__Q__IMap_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows____Map_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows__U__less_PE_AAVString_Platform___std___00_00_2Platform__UE_AAAPE_AAU__IMapView_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___234_XZ(v15);
      v43 = NULL;
      v20 = (*(__int64 (__fastcall **)(HSTRING, Windows::Foundation::Collections::IMapView<Platform::String _,Windows::Storage::Streams::IBuffer _> *, _QWORD, Platform::Collections::Map<Platform::String _,Windows::Storage::Streams::IBuffer _,std::less<Platform::String _>,1,1> **))(*(_QWORD *)v18 + 64i64))(v18, View__Q__IMap_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows____Map_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows__U__less_PE_AAVString_Platform___std___00_00_2Platform__UE_AAAPE_AAU__IMapView_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___234_XZ, 0i64, &v43);
      if ( v20 < 0 )
        __abi_WinRTraiseException(v20);
      v21 = v43;
      v22 = (Windows::Foundation::IAsyncAction *)v43;
      if ( v43 )
      {
        v43->__abi_AddRef(v43);
        v21 = v43;
      }
      if ( v21 )
        v21->__abi_Release(v21);
      v31 = v22;
      if ( v22 )
        v22->__abi_AddRef(v22);
      v31 = v22;
      if ( v22 )
        v22->__abi_Release(v22);
      if ( View__Q__IMap_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows____Map_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows__U__less_PE_AAVString_Platform___std___00_00_2Platform__UE_AAAPE_AAU__IMapView_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___234_XZ )
        View__Q__IMap_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows____Map_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows__U__less_PE_AAVString_Platform___std___00_00_2Platform__UE_AAAPE_AAU__IMapView_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___234_XZ->__abi_Release(View__Q__IMap_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows____Map_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows__U__less_PE_AAVString_Platform___std___00_00_2Platform__UE_AAAPE_AAU__IMapView_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___234_XZ);
      Concurrency::task_options::task_options(&v38);
      v27 = Concurrency::create_task<Windows::Foundation::IAsyncAction __gc *>(&v36, v22, v23);
      v29._M_unitTask._M_Impl._Ptr = (Concurrency::details::_Task_impl<unsigned char> *)&v39;
      Concurrency::task_options::task_options(&v39);
      v32.writeError = (MemcardError *)v7;
      if ( v22 )
        v22->__abi_AddRef(v22);
      v33 = v22;
      v34 = v42;
      Concurrency::task_void_::then__lambda_a9ac7a0c310a8e05bbfb1c2014b4e7f9___(v27, &v32, (Concurrency::task_options *)&v32.writeError);
      if ( v33 )
        v33->__abi_Release(v33);
      Rep = v36._M_unitTask._M_Impl._Rep;
      if ( v36._M_unitTask._M_Impl._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v36._M_unitTask._M_Impl._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          Rep->_Destroy(Rep);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
            Rep->_Delete_this(Rep);
        }
      }
      if ( !v41 )
      {
        UnlockMutex(memoryCardGlob.fileInfoMutex);
        __asm { vpxor   xmm0, xmm0, xmm0 }
        v29 = _XMM0;
        if ( v32.actionSubmitUpdates )
          _InterlockedIncrement((volatile signed __int32 *)&v32.actionSubmitUpdates->Windows::Foundation::IAsyncInfo);
        v29 = *(Concurrency::task<void> *)&v32.info;
        Memcard_Wait_void_(&v29);
        LockMutex(memoryCardGlob.fileInfoMutex);
      }
      actionSubmitUpdates = (volatile signed __int32 *)v32.actionSubmitUpdates;
      if ( v32.actionSubmitUpdates )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v32.actionSubmitUpdates->Windows::Foundation::IAsyncInfo, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))actionSubmitUpdates)(actionSubmitUpdates);
          if ( _InterlockedExchangeAdd(actionSubmitUpdates + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)actionSubmitUpdates + 8i64))(actionSubmitUpdates);
        }
      }
      if ( v22 )
        v22->__abi_Release(v22);
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v18 + 16i64))(v18);
      if ( v15 )
        v15->__abi_Release(v15);
      v13->__abi_Release(v13);
      if ( v11 )
        v11->__abi_Release(v11);
      WindowsDeleteString_0(v28);
      goto LABEL_8;
    }
    MemCard_SetMemcardError(writeError, MEMCARD_UNABLE_TO_ACCESS_DEVICE, 0);
    Memcard_FileInfoReset(v7);
    UnlockMutex(memoryCardGlob.fileInfoMutex);
    if ( v11 )
      v11->__abi_Release(v11);
    WindowsDeleteString_0((HSTRING)v9);
  }
}

/*
==============
MemCard_DeleteAllFilesForAllUsers_Platform
==============
*/

void __fastcall MemCard_DeleteAllFilesForAllUsers_Platform(double _XMM0_8)
{
  unsigned int i; 
  Windows::Xbox::System::User *User; 
  Windows::Xbox::System::User *v3; 
  Windows::Xbox::Storage::ConnectedStorageSpace *UserConnectedStorage; 
  __int64 v5; 
  HSTRING v6; 
  const wchar_t *StringRawBuffer_0; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Xbox::Storage::ContainerInfo> _> *v13; 
  const std::shared_ptr<Concurrency::scheduler_interface> *ambient_scheduler; 
  std::_Ref_count_base *Rep; 
  Concurrency::task<void> *v16; 
  Concurrency::details::_Task_impl<unsigned char> *v17; 
  volatile signed __int32 *v18; 
  std::_Ref_count_base *v19; 
  Concurrency::task_options v20; 
  __int64 v21; 
  Windows::Xbox::System::User *v22; 
  Windows::Xbox::Storage::ConnectedStorageSpace *v23; 
  __int64 v24; 
  HSTRING v25; 
  __int64 v26; 
  Concurrency::scheduler_interface *Ptr; 
  MemCard_DeleteAllFilesForAllUsers_Platform::__l4::<lambda_59529e40b094afeae0f07d14bfe6c2f5> _Func; 
  volatile signed __int32 *v29; 
  Concurrency::task<Windows::Foundation::Collections::IVectorView<Windows::Xbox::Storage::ContainerInfo> _> v30; 
  __int64 v31; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Xbox::Storage::ContainerInfo> _> *v32; 
  __int64 v33; 
  Windows::Xbox::System::User *v34; 

  v21 = -2i64;
  for ( i = 0; i < Users_NumUsers(); ++i )
  {
    User = Users_GetUser(i);
    v3 = User;
    v34 = User;
    if ( User )
      User->__abi_AddRef(User);
    v22 = v3;
    if ( v3 )
      v3->__abi_Release(v3);
    if ( v3 )
    {
      UserConnectedStorage = Users_GetUserConnectedStorage(v3);
      v5 = (__int64)UserConnectedStorage;
      v23 = UserConnectedStorage;
      if ( UserConnectedStorage )
        UserConnectedStorage->__abi_AddRef(UserConnectedStorage);
      v24 = v5;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
      if ( v5 )
      {
        v6 = (HSTRING)Live_GamertagForUser(v3);
        v25 = v6;
        StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v6, NULL);
        Com_Printf(16, "MEMCARD: Deleting containers for user %S\n", StringRawBuffer_0);
        WindowsDeleteString_0(v6);
        v31 = 0i64;
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 88i64))(v5, 0i64, &v31);
        if ( v8 < 0 )
          __abi_WinRTraiseException(v8);
        v9 = v31;
        v10 = v31;
        if ( v31 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8i64))(v31);
          v9 = v31;
        }
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
        v32 = (Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Xbox::Storage::ContainerInfo> _> *)v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8i64))(v10);
        v26 = v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
        v32 = NULL;
        v11 = (*(__int64 (__fastcall **)(__int64, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Xbox::Storage::ContainerInfo> _> **))(*(_QWORD *)v10 + 56i64))(v10, &v32);
        if ( v11 < 0 )
          __abi_WinRTraiseException(v11);
        v12 = (__int64)v32;
        v13 = v32;
        if ( v32 )
        {
          v32->__abi_AddRef(v32);
          v12 = (__int64)v32;
        }
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
        if ( v13 )
          v13->__abi_AddRef(v13);
        if ( v13 )
          v13->__abi_Release(v13);
        ambient_scheduler = Concurrency::get_ambient_scheduler();
        Rep = ambient_scheduler->_Rep;
        if ( Rep )
        {
          _InterlockedIncrement((volatile signed __int32 *)&Rep->_Uses);
          Rep = ambient_scheduler->_Rep;
        }
        Ptr = ambient_scheduler->_Ptr;
        v20._M_Scheduler._M_sharedScheduler._Ptr = Ptr;
        v20._M_Scheduler._M_sharedScheduler._Rep = Rep;
        v20._M_Scheduler._M_scheduler = Ptr;
        v20._M_CancellationToken._M_Impl = NULL;
        v20._M_ContinuationContext._M_context._M_captureMethod = 1i64;
        v20._M_ContinuationContext._M_RunInline = 0;
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&v20._M_InternalTaskOptions._M_presetCreationCallstack._M_frames._Mypair._Myval2._Myfirst = *(_OWORD *)&_XMM0_8;
        v20._M_InternalTaskOptions._M_presetCreationCallstack._M_frames._Mypair._Myval2._Myend = NULL;
        v20._M_InternalTaskOptions._M_presetCreationCallstack._M_SingleFrame = NULL;
        v20._M_InternalTaskOptions._M_hasPresetCreationCallstack = 0;
        *(_WORD *)&v20._M_HasCancellationToken = 0;
        v16 = (Concurrency::task<void> *)Concurrency::create_task<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Xbox::Storage::ContainerInfo> __gc *> __gc *>(&v30, v13, &v20);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8i64))(v5);
        v33 = v5;
        v17 = Concurrency::task_Windows::Foundation::Collections::IVectorView_Windows::Xbox::Storage::ContainerInfo____::then__lambda_59529e40b094afeae0f07d14bfe6c2f5___(v16, &_Func)->_M_unitTask._M_Impl._Ptr;
        if ( !v17 )
          Concurrency::details::_DefaultTaskHelper::_NoCallOnDefaultTask_ErrorImpl();
        Concurrency::details::_Task_impl_base::_Wait(v17);
        v18 = v29;
        if ( v29 )
        {
          if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8i64))(v18);
          }
        }
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16i64))(v33);
        v19 = v30._M_Impl._Rep;
        if ( v30._M_Impl._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v30._M_Impl._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v19->_Destroy(v19);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19->_Weaks, 0xFFFFFFFF) == 1 )
              v19->_Delete_this(v19);
          }
        }
        if ( v13 )
          v13->__abi_Release(v13);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
      }
      v3->__abi_Release(v3);
    }
  }
}

/*
==============
MemCard_FilePosition_Platform
==============
*/
__int64 MemCard_FilePosition_Platform(MemCardFileHandle fileHandle)
{
  SaveDataFileInfo *SaveDataFileInfo; 
  unsigned int position; 

  if ( !fileHandle.handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 510, ASSERT_TYPE_ASSERT, "(fileHandle)", (const char *)&queryFormat, "fileHandle") )
    __debugbreak();
  LockMutex(memoryCardGlob.fileInfoMutex);
  SaveDataFileInfo = GetSaveDataFileInfo(fileHandle);
  if ( SaveDataFileInfo->isOpen )
    position = SaveDataFileInfo->position;
  else
    position = 0;
  UnlockMutex(memoryCardGlob.fileInfoMutex);
  return position;
}

/*
==============
MemCard_FileSize_Platform
==============
*/
__int64 MemCard_FileSize_Platform(MemCardFileHandle fileHandle)
{
  SaveDataFileInfo *SaveDataFileInfo; 

  SaveDataFileInfo = GetSaveDataFileInfo(fileHandle);
  if ( !SaveDataFileInfo->isOpen || SaveDataFileInfo->mode )
    return 0i64;
  else
    return SaveDataFileInfo->readSize;
}

/*
==============
MemCard_GetPathDevDrive_Platform
==============
*/

const char *__fastcall MemCard_GetPathDevDrive_Platform()
{
  return Sys_GetDevHddPath();
}

/*
==============
MemCard_InitializeSystem_Platform
==============
*/
void MemCard_InitializeSystem_Platform(void)
{
  memset_0(&memoryCardGlob, 0, sizeof(memoryCardGlob));
  memoryCardGlob.fileInfoMutex = NewMutex();
  memoryCardGlob.fileInfo[1].buffer = &memoryCardGlob.fileBufferSpaceSmall[0x10000];
  memoryCardGlob.fileInfo[2].buffer = &memoryCardGlob.fileBufferSpaceSmall[0x20000];
  memoryCardGlob.fileInfo[0].buffer = (unsigned __int8 *)&memoryCardGlob;
  memoryCardGlob.fileInfo[3].buffer = &memoryCardGlob.fileBufferSpaceSmall[196608];
  memoryCardGlob.fileInfo[0].bufferSize = 0x10000;
  memoryCardGlob.fileInfo[1].bufferSize = 0x10000;
  memoryCardGlob.fileInfo[2].bufferSize = 0x10000;
  memoryCardGlob.fileInfo[3].bufferSize = 0x10000;
  if ( memoryCardGlob.commitRangeStartPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 166, ASSERT_TYPE_ASSERT, "(memoryCardGlob.commitRangeStartPtr == nullptr)", (const char *)&queryFormat, "memoryCardGlob.commitRangeStartPtr == nullptr") )
    __debugbreak();
  if ( memoryCardGlob.fileBufferLarge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 167, ASSERT_TYPE_ASSERT, "(memoryCardGlob.fileBufferLarge == nullptr)", (const char *)&queryFormat, "memoryCardGlob.fileBufferLarge == nullptr") )
    __debugbreak();
  PMem_BeginAlloc("MemcardLargeBuffer", PMEM_STACK_MEMCARD_LARGE_BUFFER);
  memoryCardGlob.commitRangeStartPtr = PMem_Alloc(0x2810000ui64, 0x10000ui64, MEM_POOL_MAIN, PMEM_STACK_MEMCARD_LARGE_BUFFER, "MEMCARD_LARGE_BUFFER");
  PMem_EndAlloc("MemcardLargeBuffer", PMEM_STACK_MEMCARD_LARGE_BUFFER);
  if ( !memoryCardGlob.commitRangeStartPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 173, ASSERT_TYPE_ASSERT, "(memoryCardGlob.commitRangeStartPtr)", (const char *)&queryFormat, "memoryCardGlob.commitRangeStartPtr") )
    __debugbreak();
  memoryCardGlob.commitRange = MEM_PAGE_RANGE_INVALID_10;
}

/*
==============
MemCard_LargeFileBuffer_Destroy
==============
*/
void MemCard_LargeFileBuffer_Destroy(void)
{
  bool *p_isWriting; 
  __int64 v1; 
  Mem_PageRange inoutPageRange; 
  StreamerMemLoan result; 

  if ( memoryCardGlob.fileBufferLarge )
  {
    if ( G_SaveMemory_CheckSaveExistTaskInProgress() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 251, ASSERT_TYPE_ASSERT, "(!G_SaveMemory_CheckSaveExistTaskInProgress())", (const char *)&queryFormat, "!G_SaveMemory_CheckSaveExistTaskInProgress()") )
      __debugbreak();
    p_isWriting = &memoryCardGlob.fileInfo[4].isWriting;
    v1 = 2i64;
    do
    {
      if ( *(p_isWriting - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 257, ASSERT_TYPE_ASSERT, "(!saveDataFileInfo->isOpen)", (const char *)&queryFormat, "!saveDataFileInfo->isOpen") )
        __debugbreak();
      if ( *p_isWriting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 258, ASSERT_TYPE_ASSERT, "(!saveDataFileInfo->isWriting)", (const char *)&queryFormat, "!saveDataFileInfo->isWriting") )
        __debugbreak();
      *(_QWORD *)(p_isWriting - 37) = 0i64;
      *(_DWORD *)(p_isWriting - 29) = 0;
      p_isWriting += 72;
      --v1;
    }
    while ( v1 );
    if ( !memoryCardGlob.commitRangeStartPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 200, ASSERT_TYPE_ASSERT, "(memoryCardGlob.commitRangeStartPtr)", (const char *)&queryFormat, "memoryCardGlob.commitRangeStartPtr") )
      __debugbreak();
    if ( !memoryCardGlob.fileBufferLarge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 201, ASSERT_TYPE_ASSERT, "(memoryCardGlob.fileBufferLarge != nullptr)", (const char *)&queryFormat, "memoryCardGlob.fileBufferLarge != nullptr") )
      __debugbreak();
    inoutPageRange = memoryCardGlob.commitRange;
    PMem_DecommitMemoryPartial(&result, PMEM_STACK_MEMCARD_LARGE_BUFFER, (unsigned __int8 *)memoryCardGlob.commitRangeStartPtr, (unsigned __int8 *)memoryCardGlob.commitRangeStartPtr + 42008576, (unsigned __int8 *)memoryCardGlob.commitRangeStartPtr, &inoutPageRange);
    StreamerMemLoan::~StreamerMemLoan(&result);
    memoryCardGlob.fileBufferLarge = NULL;
    memoryCardGlob.commitRange = MEM_PAGE_RANGE_INVALID_10;
  }
}

/*
==============
MemCard_LargeFileBuffer_GetCommitSize
==============
*/
unsigned __int64 MemCard_LargeFileBuffer_GetCommitSize()
{
  return memoryCardGlob.fileBufferLarge != NULL ? 0x2810000 : 0;
}

/*
==============
MemCard_LargeFileBuffer_GetReserveSize
==============
*/
unsigned __int64 MemCard_LargeFileBuffer_GetReserveSize()
{
  return 42008576i64;
}

/*
==============
MemCard_LargeFileBuffer_Init
==============
*/
void MemCard_LargeFileBuffer_Init(void)
{
  unsigned __int8 *commitRangeStartPtr; 
  unsigned __int8 *v1; 
  unsigned __int8 **p_buffer; 
  __int64 v3; 

  if ( !memoryCardGlob.fileBufferLarge )
  {
    commitRangeStartPtr = (unsigned __int8 *)memoryCardGlob.commitRangeStartPtr;
    if ( !memoryCardGlob.commitRangeStartPtr )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 181, ASSERT_TYPE_ASSERT, "(memoryCardGlob.commitRangeStartPtr)", (const char *)&queryFormat, "memoryCardGlob.commitRangeStartPtr") )
        __debugbreak();
      if ( memoryCardGlob.fileBufferLarge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 182, ASSERT_TYPE_ASSERT, "(memoryCardGlob.fileBufferLarge == nullptr)", (const char *)&queryFormat, "memoryCardGlob.fileBufferLarge == nullptr") )
        __debugbreak();
      commitRangeStartPtr = (unsigned __int8 *)memoryCardGlob.commitRangeStartPtr;
    }
    if ( !PMem_CommitMemoryPartial(PMEM_STACK_MEMCARD_LARGE_BUFFER, commitRangeStartPtr, commitRangeStartPtr + 42008576, commitRangeStartPtr, NULL, &memoryCardGlob.commitRange, "MEMCARD_LARGE_BUFFER") )
      Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)20, "MemCard_LargeFileBuffer_Commit", "c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 188, "MEMCARD_LARGE_BUFFER");
    DebugWipe(memoryCardGlob.commitRangeStartPtr, 0x2810000ui64);
    v1 = (unsigned __int8 *)memoryCardGlob.commitRangeStartPtr;
    p_buffer = &memoryCardGlob.fileInfo[4].buffer;
    memoryCardGlob.fileBufferLarge = (unsigned __int8 *)memoryCardGlob.commitRangeStartPtr;
    v3 = 2i64;
    do
    {
      if ( *p_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 230, ASSERT_TYPE_ASSERT, "(saveDataFileInfo->buffer == nullptr)", (const char *)&queryFormat, "saveDataFileInfo->buffer == nullptr") )
        __debugbreak();
      *p_buffer = v1;
      v1 += 20972544;
      *((_DWORD *)p_buffer + 2) = 20972544;
      p_buffer += 9;
      --v3;
    }
    while ( v3 );
    if ( (unsigned __int8 *)(v1 - memoryCardGlob.fileBufferLarge) != (unsigned __int8 *)41945088 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 238, ASSERT_TYPE_ASSERT, "(( bufferPointer - &memoryCardGlob.fileBufferLarge[0] ) == ( 2 * ((1 * 1024) + (6 * 1024 * 1024) + (13 * 1024 * 1024) + (1 * 1024 * 1024)) ))", (const char *)&queryFormat, "( bufferPointer - &memoryCardGlob.fileBufferLarge[0] ) == XB3_MEMCARD_LARGE_BUFFER_SIZE") )
      __debugbreak();
  }
}

/*
==============
MemCard_LargeFileBuffer_LargeBufferCommitted
==============
*/
bool MemCard_LargeFileBuffer_LargeBufferCommitted()
{
  return memoryCardGlob.fileBufferLarge != NULL;
}

/*
==============
MemCard_OpenFile_Platform
==============
*/
MemCardFileHandle *MemCard_OpenFile_Platform(MemCardFileHandle *result, const char *name, MemcardOperation operation, MemcardError *sizeHint, MemcardError *error)
{
  MemcardOperation v8; 
  int v10; 
  unsigned int v11; 
  unsigned __int64 v12; 
  signed __int64 v13; 
  __int64 v14; 
  SaveDataFileInfo *v16; 
  Windows::Xbox::System::User *user; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *UserFromControllerIndex; 
  Windows::Xbox::System::User *v19; 
  Windows::Xbox::System::User *v20; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *v21; 
  HSTRING v22; 
  int v23; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *v24; 
  const volatile Platform::Object *v25; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *v27; 
  int v28; 
  HSTRING v29; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *Myhead; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *Ptr; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *Parent; 
  HSTRING first; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *v34; 
  int v35; 
  HSTRING v36; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *UserConnectedStorage; 
  Windows::Xbox::Storage::IConnectedStorageSpace *v38; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *v39; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *v40; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *v41; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *v42; 
  Windows::Storage::Streams::IBuffer *second; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *Container; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *v45; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *v46; 
  int v47; 
  HSTRING v48; 
  Windows::Foundation::IAsyncAction *v49; 
  Concurrency::task_options *v50; 
  Concurrency::task<void> *v51; 
  int v52; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *v53; 
  HSTRING v54; 
  std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *v55; 
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _> > > > v56; 
  std::_Tree<std::_Tmap_traits<Platform::String _,Windows::Storage::Streams::IBuffer _,std::less<Platform::String _>,std::allocator<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _> >,0> > v57; 
  HSTRING v58; 
  HSTRING string; 
  HSTRING v60; 
  INT32 resulta[2]; 
  unsigned int v62; 
  HSTRING v63; 
  HSTRING v64[3]; 
  Windows::Foundation::IAsyncAction *v65; 
  HSTRING_HEADER hstringHeader; 
  HSTRING newString[4]; 
  Concurrency::task_options v68; 
  unsigned int v69; 
  MemcardError *v70; 

  v70 = sizeHint;
  newString[1] = (HSTRING)-2i64;
  v8 = (int)name;
  LockMutex(memoryCardGlob.fileInfoMutex);
  if ( operation )
  {
    if ( operation != MEMCARD_WRITE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 126, ASSERT_TYPE_ASSERT, "(sizeHint == MEMCARD_SIZEHINT_LARGE)", (const char *)&queryFormat, "sizeHint == MEMCARD_SIZEHINT_LARGE") )
      __debugbreak();
    v10 = 20972544;
    v11 = 4;
    v12 = 6i64;
  }
  else
  {
    v10 = 0x10000;
    v11 = 0;
    v12 = 4i64;
  }
  v62 = v11;
  v13 = v11;
  if ( v11 >= v12 )
  {
LABEL_11:
    Com_Printf(16, "XB3_MEMCARD_FILE_COUNT exceeded\n");
LABEL_12:
    Com_PrintError(16, "No free memory card handles\n");
LABEL_13:
    MemCard_SetMemcardError(sizeHint, MEMCARD_UNABLE_TO_ACCESS_DEVICE, 0);
    UnlockMutex(memoryCardGlob.fileInfoMutex);
    return (MemCardFileHandle *)MEMCARD_INVALID_FILE_HANDLE_3.handle;
  }
  v14 = v11;
  while ( memoryCardGlob.fileInfo[v14].isOpen )
  {
    v62 = ++v11;
    ++v13;
    ++v14;
    if ( v13 >= (__int64)v12 )
      goto LABEL_11;
  }
  if ( memoryCardGlob.fileInfo[v14].bufferSize != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 144, ASSERT_TYPE_ASSERT, "(fileInfo->bufferSize == bufferSize)", (const char *)&queryFormat, "fileInfo->bufferSize == bufferSize") )
    __debugbreak();
  if ( v11 == -1 )
    goto LABEL_12;
  v16 = &memoryCardGlob.fileInfo[v11];
  v64[1] = (HSTRING)v16;
  v16->isOpen = 0;
  user = memoryCardGlob.fileInfo[v11].user;
  if ( user )
  {
    user->__abi_Release(user);
    memoryCardGlob.fileInfo[v11].user = NULL;
  }
  memoryCardGlob.fileInfo[v11].position = 0;
  memoryCardGlob.fileInfo[v11].isWriting = 0;
  UserFromControllerIndex = (std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *)GetUserFromControllerIndex((const int)error);
  v19 = (Windows::Xbox::System::User *)UserFromControllerIndex;
  v56._Ptr = UserFromControllerIndex;
  v20 = memoryCardGlob.fileInfo[v11].user;
  if ( UserFromControllerIndex != (std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *)v20 )
  {
    if ( UserFromControllerIndex )
    {
      ((void (__fastcall *)(std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *))UserFromControllerIndex->_Left->_Parent)(UserFromControllerIndex);
      v20 = memoryCardGlob.fileInfo[v11].user;
    }
    if ( v20 )
      v20->__abi_Release(v20);
    memoryCardGlob.fileInfo[v11].user = v19;
    v20 = v19;
  }
  if ( v19 )
  {
    v19->__abi_Release(v19);
    v20 = memoryCardGlob.fileInfo[v11].user;
  }
  if ( !v20 )
  {
    Com_PrintError(16, "No logged in user- cannot open save!\n");
    goto LABEL_13;
  }
  memoryCardGlob.fileInfo[v11].isOpen = 1;
  Core_strcpy(v16->fileName, 0x20ui64, (const char *)result);
  memoryCardGlob.fileInfo[v11].mode = v8;
  if ( v8 )
    goto LABEL_90;
  Com_Printf(16, "MEMCARD: READ %s DONE\n", v16->fileName);
  memset_0(memoryCardGlob.fileInfo[v11].buffer, 0, memoryCardGlob.fileInfo[v11].bufferSize);
  v21 = (std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *)NewString(v16->fileName);
  v22 = (HSTRING)v21;
  v56._Ptr = v21;
  if ( v21 )
  {
    v23 = WindowsDuplicateString_0((HSTRING)v21, newString);
    if ( v23 < 0 )
      __abi_WinRTraiseException(v23);
    v60 = newString[0];
    v63 = newString[0];
  }
  else
  {
    v60 = NULL;
    v63 = NULL;
  }
  WindowsDeleteString_0(v22);
  v24 = (std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *)WrapDataBuffer(memoryCardGlob.fileInfo[v11].buffer, memoryCardGlob.fileInfo[v11].bufferSize, 0);
  v25 = (const volatile Platform::Object *)v24;
  v56._Ptr = v24;
  if ( v24 )
    ((void (__fastcall *)(std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *))v24->_Left->_Parent)(v24);
  v64[2] = (HSTRING)v25;
  if ( v25 )
    v25->__abi_Release((Platform::Object *)v25);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v57._Mypair._Myval2._Myval2._Mysize = *((_QWORD *)&_XMM0 + 1);
  v27 = (std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *)operator new(0x30ui64);
  v56._Ptr = v27;
  v27->_Left = v27;
  v27->_Parent = v27;
  v27->_Right = v27;
  *(_WORD *)&v27->_Color = 257;
  v57._Mypair._Myval2._Myval2._Myhead = v27;
  v28 = WindowsCreateStringReference_0(L"save", 4u, &hstringHeader, &string);
  if ( v28 < 0 )
    __abi_WinRTraiseException(v28);
  v29 = string;
  v58 = string;
  Myhead = v57._Mypair._Myval2._Myval2._Myhead;
  Ptr = v57._Mypair._Myval2._Myval2._Myhead;
  Parent = v57._Mypair._Myval2._Myval2._Myhead->_Parent;
  if ( !Parent->_Isnil )
  {
    do
    {
      first = (HSTRING)Parent->_Myval.first;
      resulta[0] = 0;
      WindowsCompareStringOrdinal_0(first, v29, resulta);
      if ( resulta[0] >= 0 )
      {
        Ptr = Parent;
        Parent = Parent->_Left;
      }
      else
      {
        Parent = Parent->_Right;
      }
      v29 = v58;
    }
    while ( !Parent->_Isnil );
    Myhead = v57._Mypair._Myval2._Myval2._Myhead;
  }
  v56._Ptr = Myhead;
  if ( Ptr == Myhead || (LODWORD(string) = 0, WindowsCompareStringOrdinal_0(v29, (HSTRING)Ptr->_Myval.first, (INT32 *)&string), (int)string < 0) )
  {
    LOBYTE(v69) = 1;
    v34 = (std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *)operator new(0x30ui64);
    v34->_Left = v57._Mypair._Myval2._Myval2._Myhead;
    v34->_Parent = v57._Mypair._Myval2._Myval2._Myhead;
    v34->_Right = v57._Mypair._Myval2._Myval2._Myhead;
    *(_WORD *)&v34->_Color = 0;
    v56._Ptr = (std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *)&v58;
    if ( v58 )
    {
      v35 = WindowsDuplicateString_0(v58, v64);
      if ( v35 < 0 )
        __abi_WinRTraiseException(v35);
      v36 = v64[0];
    }
    else
    {
      v36 = NULL;
    }
    v34->_Myval.first = (Platform::String *const)v36;
    v34->_Myval.second = NULL;
    std::_Tree<std::_Tmap_traits<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *,std::less<Platform::String __gc *>,std::allocator<std::pair<Platform::String __gc * const,Windows::Storage::Streams::IBuffer __gc *>>,0>>::_Insert_hint<std::pair<Platform::String __gc * const,Windows::Storage::Streams::IBuffer __gc *> &,std::_Tree_node<std::pair<Platform::String __gc * const,Windows::Storage::Streams::IBuffer __gc *>,void *> *>(&v57, &v56, (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _> > > >)Ptr, &v34->_Myval, v34);
    Ptr = v56._Ptr;
  }
  else
  {
    LOBYTE(v69) = 0;
  }
  __abi_winrt_ptr_assign((void **)&Ptr->_Myval.second, v25);
  UserConnectedStorage = (std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *)Users_GetUserConnectedStorage(memoryCardGlob.fileInfo[v11].user);
  v38 = (Windows::Xbox::Storage::IConnectedStorageSpace *)UserConnectedStorage;
  v56._Ptr = UserConnectedStorage;
  if ( UserConnectedStorage )
    ((void (__fastcall *)(std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *))UserConnectedStorage->_Left->_Parent)(UserConnectedStorage);
  string = (HSTRING)v38;
  if ( v38 )
    v38->__abi_Release(v38);
  if ( !v38 )
  {
    MemCard_SetMemcardError(v70, MEMCARD_UNABLE_TO_READ_FROM_DEVICE, 0);
    Memcard_FileInfoReset(v16);
    UnlockMutex(memoryCardGlob.fileInfoMutex);
    v39 = v57._Mypair._Myval2._Myval2._Myhead;
    v40 = v57._Mypair._Myval2._Myval2._Myhead;
    v41 = v57._Mypair._Myval2._Myval2._Myhead->_Parent;
    v42 = v41;
    if ( !v41->_Isnil )
    {
      do
      {
        std::_Tree<std::_Tmap_traits<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *,std::less<Platform::String __gc *>,std::allocator<std::pair<Platform::String __gc * const,Windows::Storage::Streams::IBuffer __gc *>>,0>>::_Erase(&v57, v42->_Right);
        v42 = v42->_Left;
        second = v41->_Myval.second;
        if ( second )
          second->__abi_Release(second);
        WindowsDeleteString_0((HSTRING)v41->_Myval.first);
        operator delete(v41, 0x30ui64);
        v41 = v42;
      }
      while ( !v42->_Isnil );
      v39 = v57._Mypair._Myval2._Myval2._Myhead;
    }
    v39->_Parent = v40;
    v57._Mypair._Myval2._Myval2._Myhead->_Left = v40;
    v57._Mypair._Myval2._Myval2._Myhead->_Right = v40;
    v57._Mypair._Myval2._Myval2._Mysize = 0i64;
    operator delete(v57._Mypair._Myval2._Myval2._Myhead, 0x30ui64);
    if ( v25 )
      v25->__abi_Release((Platform::Object *)v25);
    WindowsDeleteString_0(v60);
    return 0i64;
  }
  Container = (std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *)Windows::Xbox::Storage::IConnectedStorageSpace::CreateContainer(v38, (Platform::String *)v60);
  v45 = Container;
  v56._Ptr = Container;
  if ( Container )
    ((void (__fastcall *)(std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *))Container->_Left->_Parent)(Container);
  *(_QWORD *)resulta = v45;
  if ( v45 )
    ((void (__fastcall *)(std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *))v45->_Left->_Right)(v45);
  if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 425, ASSERT_TYPE_ASSERT, "(container != nullptr)", (const char *)&queryFormat, "container != nullptr", v56._Ptr) )
    __debugbreak();
  LOBYTE(v69) = 0;
  v56._Ptr = (std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *)Platform::Details::Heap::Allocate(0x58ui64, 0x70ui64);
  Platform::Collections::MapView<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *,std::less<Platform::String __gc *>,1,1>::MapView<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *,std::less<Platform::String __gc *>,1,1>((Platform::Collections::MapView<Platform::String _,Windows::Storage::Streams::IBuffer _,std::less<Platform::String _>,1,1> *)v56._Ptr, (const std::map<Platform::String _,Windows::Storage::Streams::IBuffer _> *)&v57);
  v56._Ptr = v46;
  hstringHeader.Reserved.Reserved1 = v46;
  v58 = NULL;
  v47 = (*(__int64 (__fastcall **)(std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *, std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *, HSTRING *))&v45->_Left[1]._Color)(v45, v46, &v58);
  if ( v47 < 0 )
    __abi_WinRTraiseException(v47);
  v48 = v58;
  v49 = (Windows::Foundation::IAsyncAction *)v58;
  v64[0] = v58;
  if ( v58 )
  {
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v58 + 8i64))(v58);
    v48 = v58;
  }
  if ( v48 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v48 + 16i64))(v48);
  v65 = v49;
  if ( v49 )
    v49->__abi_AddRef(v49);
  v65 = v49;
  if ( v49 )
    v49->__abi_Release(v49);
  if ( v56._Ptr )
    ((void (__fastcall *)(std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *))v56._Ptr->_Left->_Right)(v56._Ptr);
  Concurrency::task_options::task_options(&v68);
  v51 = Concurrency::create_task<Windows::Foundation::IAsyncAction __gc *>((Concurrency::task<void> *)&hstringHeader, v49, v50);
  Memcard_Wait_void_(v51);
  if ( v49 )
    v49->__abi_Release(v49);
  if ( !(_BYTE)v69 )
  {
    ((void (__fastcall *)(std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *))v45->_Left->_Right)(v45);
    v52 = ((__int64 (__fastcall *)(const volatile Platform::Object *, unsigned int *))v25->__vftable[1].__abi_AddRef)(v25, &v69);
    if ( v52 < 0 )
      __abi_WinRTraiseException(v52);
    memoryCardGlob.fileInfo[v11].readSize = v69;
    v38->__abi_Release(v38);
    v53 = v57._Mypair._Myval2._Myval2._Myhead;
    std::_Tree<std::_Tmap_traits<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *,std::less<Platform::String __gc *>,std::allocator<std::pair<Platform::String __gc * const,Windows::Storage::Streams::IBuffer __gc *>>,0>>::_Erase(&v57, v57._Mypair._Myval2._Myval2._Myhead->_Parent);
    v57._Mypair._Myval2._Myval2._Myhead->_Parent = v53;
    v57._Mypair._Myval2._Myval2._Myhead->_Left = v53;
    v57._Mypair._Myval2._Myval2._Myhead->_Right = v53;
    v57._Mypair._Myval2._Myval2._Mysize = 0i64;
    operator delete(v57._Mypair._Myval2._Myval2._Myhead, 0x30ui64);
    v25->__abi_Release((Platform::Object *)v25);
    WindowsDeleteString_0(v60);
LABEL_90:
    UnlockMutex(memoryCardGlob.fileInfoMutex);
    return (MemCardFileHandle *)(int)(v11 + 1);
  }
  v54 = v60;
  MemCard_SetMemcardError(v70, MEMCARD_UNABLE_TO_READ_FROM_DEVICE, 0);
  Memcard_FileInfoReset(v16);
  UnlockMutex(memoryCardGlob.fileInfoMutex);
  if ( v45 )
    ((void (__fastcall *)(std::_Tree_node<std::pair<Platform::String _ const,Windows::Storage::Streams::IBuffer _>,void *> *))v45->_Left->_Right)(v45);
  v38->__abi_Release(v38);
  v55 = v57._Mypair._Myval2._Myval2._Myhead;
  std::_Tree<std::_Tmap_traits<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *,std::less<Platform::String __gc *>,std::allocator<std::pair<Platform::String __gc * const,Windows::Storage::Streams::IBuffer __gc *>>,0>>::_Erase(&v57, v57._Mypair._Myval2._Myval2._Myhead->_Parent);
  v57._Mypair._Myval2._Myval2._Myhead->_Parent = v55;
  v57._Mypair._Myval2._Myval2._Myhead->_Left = v55;
  v57._Mypair._Myval2._Myval2._Myhead->_Right = v55;
  v57._Mypair._Myval2._Myval2._Mysize = 0i64;
  operator delete(v57._Mypair._Myval2._Myval2._Myhead, 0x30ui64);
  if ( v25 )
    v25->__abi_Release((Platform::Object *)v25);
  WindowsDeleteString_0(v54);
  return 0i64;
}

/*
==============
MemCard_ReadFile_Platform
==============
*/
__int64 MemCard_ReadFile_Platform(MemCardFileHandle fileHandle, void *data, unsigned __int64 maxsize, MemcardError *error)
{
  int v5; 
  SaveDataFileInfo *SaveDataFileInfo; 
  __int64 position; 
  int v10; 
  unsigned int v12; 
  unsigned __int8 *buffer; 

  v5 = maxsize;
  if ( !error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 470, ASSERT_TYPE_ASSERT, "(error)", (const char *)&queryFormat, "error") )
    __debugbreak();
  if ( !fileHandle.handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 471, ASSERT_TYPE_ASSERT, "(fileHandle)", (const char *)&queryFormat, "fileHandle") )
    __debugbreak();
  LockMutex(memoryCardGlob.fileInfoMutex);
  SaveDataFileInfo = GetSaveDataFileInfo(fileHandle);
  position = SaveDataFileInfo->position;
  v10 = SaveDataFileInfo->readSize - position;
  if ( v5 < v10 )
    v10 = v5;
  if ( !SaveDataFileInfo->isOpen || SaveDataFileInfo->mode )
  {
    MemCard_SetMemcardError(error, MEMCARD_UNABLE_TO_ACCESS_DEVICE, 0);
    UnlockMutex(memoryCardGlob.fileInfoMutex);
    return -1i64;
  }
  else if ( v10 )
  {
    v12 = SaveDataFileInfo->position;
    if ( data )
    {
      buffer = SaveDataFileInfo->buffer;
      if ( data != &buffer[position] )
      {
        if ( buffer - (_BYTE *)data < (unsigned __int64)v10 && (_BYTE *)data - buffer < (unsigned __int64)SaveDataFileInfo->bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 493, ASSERT_TYPE_ASSERT, "(((uintptr_t)info->buffer - (uintptr_t)data >= (uintptr_t)size) || ((uintptr_t)data - (uintptr_t)info->buffer >= (uintptr_t)info->bufferSize))", (const char *)&queryFormat, "((uintptr_t)info->buffer - (uintptr_t)data >= (uintptr_t)size) || ((uintptr_t)data - (uintptr_t)info->buffer >= (uintptr_t)info->bufferSize)") )
          __debugbreak();
        memcpy_0(data, &SaveDataFileInfo->buffer[SaveDataFileInfo->position], v10);
        v12 = SaveDataFileInfo->position;
      }
    }
    SaveDataFileInfo->position = v12 + v10;
    UnlockMutex(memoryCardGlob.fileInfoMutex);
    MemCard_ClearMemcardError(error);
    return v10;
  }
  else
  {
    MemCard_SetMemcardError(error, MEMCARD_UNABLE_TO_READ_FROM_DEVICE, 0);
    UnlockMutex(memoryCardGlob.fileInfoMutex);
    return 0i64;
  }
}

/*
==============
MemCard_Reset_Platform
==============
*/
void MemCard_Reset_Platform(void)
{
  ;
}

/*
==============
MemCard_TerminateSystem_Platform
==============
*/
void MemCard_TerminateSystem_Platform(void)
{
  ;
}

/*
==============
MemCard_WriteFile_Platform
==============
*/
void MemCard_WriteFile_Platform(MemCardFileHandle fileHandle, const void *data, unsigned int size, MemcardError *writeError)
{
  SaveDataFileInfo *SaveDataFileInfo; 
  SaveDataFileInfo *v9; 
  __int64 position; 
  unsigned int v11; 
  unsigned __int8 *v12; 

  LockMutex(memoryCardGlob.fileInfoMutex);
  SaveDataFileInfo = GetSaveDataFileInfo(fileHandle);
  v9 = SaveDataFileInfo;
  if ( SaveDataFileInfo->isOpen && SaveDataFileInfo->mode == MEMCARD_WRITE )
  {
    position = SaveDataFileInfo->position;
    v11 = SaveDataFileInfo->bufferSize - position;
    if ( v11 > size )
      v11 = size;
    v12 = &SaveDataFileInfo->buffer[position];
    if ( v12 != data )
    {
      memcpy_0(v12, data, v11);
      LODWORD(position) = v9->position;
    }
    v9->position = position + v11;
    UnlockMutex(memoryCardGlob.fileInfoMutex);
    if ( v11 == size )
    {
      MemCard_ClearMemcardError(writeError);
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_memorycard.cpp", 550, ASSERT_TYPE_ASSERT, "( writtenSize == size )", "Buffer is full; increase XB3_SAVEDATA_LARGE_BUFFER_SIZE") )
        __debugbreak();
      MemCard_SetMemcardError(writeError, MEMCARD_INSUFFICIENT_FREE_DISK, 0);
    }
  }
  else
  {
    MemCard_SetMemcardError(writeError, MEMCARD_UNABLE_TO_ACCESS_DEVICE, 0);
    UnlockMutex(memoryCardGlob.fileInfoMutex);
  }
}

/*
==============
Memcard_FileInfoReset
==============
*/
void Memcard_FileInfoReset(SaveDataFileInfo *fileInfo)
{
  Windows::Xbox::System::User *user; 

  fileInfo->isOpen = 0;
  user = fileInfo->user;
  if ( user )
  {
    user->__abi_Release(user);
    fileInfo->user = NULL;
  }
  fileInfo->isWriting = 0;
  fileInfo->position = 0;
}

/*
==============
NewString
==============
*/
Platform::String *NewString(const char *str)
{
  __int64 v1; 
  __int64 v2; 
  wchar_t WideCharStr[256]; 

  MultiByteToWideChar(0xFDE9u, 0, str, -1, WideCharStr, 256);
  Platform::String::String(NULL, WideCharStr);
  v2 = v1;
  WindowsDeleteString_0(NULL);
  return (Platform::String *)v2;
}

