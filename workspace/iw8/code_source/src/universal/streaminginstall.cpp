/*
==============
SI_CheckRequiredAvailableForRead
==============
*/

bool __fastcall SI_CheckRequiredAvailableForRead()
{
  return ?SI_CheckRequiredAvailableForRead@@YA_NXZ();
}

/*
==============
SI_CheckInstall
==============
*/

bool __fastcall SI_CheckInstall(float *progress, __int64 *secondsRemaining)
{
  return ?SI_CheckInstall@@YA_NPEAMPEA_J@Z(progress, secondsRemaining);
}

/*
==============
SI_IsStreamingInstall
==============
*/

bool __fastcall SI_IsStreamingInstall()
{
  return ?SI_IsStreamingInstall@@YA_NXZ();
}

/*
==============
SI_IsFullyInstalled
==============
*/

bool __fastcall SI_IsFullyInstalled()
{
  return ?SI_IsFullyInstalled@@YA_NXZ();
}

/*
==============
SI_Init
==============
*/

void SI_Init(void)
{
  ?SI_Init@@YAXXZ();
}

/*
==============
SI_SuspendInstall
==============
*/

void SI_SuspendInstall(void)
{
  ?SI_SuspendInstall@@YAXXZ();
}

/*
==============
SI_CheckRequestedMap
==============
*/

void __fastcall SI_CheckRequestedMap(const char *map)
{
  ?SI_CheckRequestedMap@@YAXPEBD@Z(map);
}

/*
==============
SI_RequestMap
==============
*/

void __fastcall SI_RequestMap(const char *map, const char *postInstallCmd)
{
  ?SI_RequestMap@@YAXPEBD0@Z(map, postInstallCmd);
}

/*
==============
SI_AreChunksInstalledCached
==============
*/
char SI_AreChunksInstalledCached(ChunkList *list)
{
  ChunkList *v1; 
  int v2; 
  int *p_count; 
  unsigned __int64 v4; 
  unsigned int v5; 
  unsigned __int64 v6; 
  __int64 v8; 
  __int64 v9; 

  v1 = list;
  if ( !list && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 473, ASSERT_TYPE_ASSERT, "(list)", (const char *)&queryFormat, "list") )
    __debugbreak();
  if ( g_siGlob.namedChunkListCount <= 0 )
    return 1;
  if ( g_siGlob.nextInstallCheckTime <= Sys_Milliseconds() )
  {
    SI_UpdateInstallationState_Internal_XB3();
    g_siGlob.nextInstallCheckTime = Sys_Milliseconds() + 30000;
  }
  v2 = 0;
  p_count = &v1->count;
  if ( v1->count <= 0 )
    return 1;
  while ( 1 )
  {
    v4 = v1->internalId[0];
    if ( (unsigned int)v4 >= 0x80 )
    {
      LODWORD(v9) = 128;
      LODWORD(v8) = v1->internalId[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v8, v9) )
        __debugbreak();
    }
    v5 = 0x80000000 >> (v4 & 0x1F);
    v6 = v4 >> 5;
    if ( (v5 & g_siGlob.chunkInstallChecked.array[v6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 485, ASSERT_TYPE_ASSERT, "(g_siGlob.chunkInstallChecked.testBit( internalId ))", (const char *)&queryFormat, "g_siGlob.chunkInstallChecked.testBit( internalId )") )
      __debugbreak();
    if ( (unsigned int)v4 >= 0x80 )
    {
      LODWORD(v9) = 128;
      LODWORD(v8) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v8, v9) )
        __debugbreak();
    }
    if ( (v5 & g_siGlob.chunkInstalled.array[v6]) == 0 )
      break;
    ++v2;
    v1 = (ChunkList *)((char *)v1 + 1);
    if ( v2 >= *p_count )
      return 1;
  }
  return 0;
}

/*
==============
SI_CheckInstall
==============
*/
char SI_CheckInstall(float *progress, __int64 *secondsRemaining)
{
  char result; 
  int v6; 
  char v7; 
  const char *v8; 

  _RSI = progress;
  if ( !progress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 1022, ASSERT_TYPE_ASSERT, "(progress)", (const char *)&queryFormat, "progress") )
    __debugbreak();
  if ( !secondsRemaining && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 1023, ASSERT_TYPE_ASSERT, "(secondsRemaining)", (const char *)&queryFormat, "secondsRemaining") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 1024, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( g_siGlob.namedChunkListCount > 0 )
  {
    if ( g_siGlob.transferWatcher && g_siGlob.percentComplete >= 0x64 )
    {
      v6 = ((__int64 (__fastcall *)(Windows::Xbox::Management::Deployment::PackageTransferWatcher *, Platform::Object_vtbl *))g_siGlob.transferWatcher->__abi_remove_ProgressChanged)(g_siGlob.transferWatcher, g_siGlob.cookie.__vftable);
      if ( v6 < 0 )
        __abi_WinRTraiseException(v6);
      g_siGlob.cookie.__vftable = NULL;
      if ( g_siGlob.transferWatcher )
      {
        g_siGlob.transferWatcher->__abi_Release(g_siGlob.transferWatcher);
        g_siGlob.transferWatcher = NULL;
      }
    }
    v7 = SI_AreChunksInstalledCached(&g_siGlob.requiredList);
    if ( v7 )
    {
      *_RSI = 1.0;
      *secondsRemaining = 0i64;
      if ( g_siGlob.postInstallCmd[0] )
      {
        v8 = j_va("%s\n", g_siGlob.postInstallCmd);
        Cbuf_AddText(LOCAL_CLIENT_0, v8);
        g_siGlob.postInstallCmd[0] = 0;
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, cs:__real@3c23d70a
        vmovss  dword ptr [rsi], xmm1
      }
      *secondsRemaining = 0i64;
    }
    return v7;
  }
  else
  {
    *_RSI = 1.0;
    result = 1;
    *secondsRemaining = 0i64;
  }
  return result;
}

/*
==============
SI_CheckRequestedMap
==============
*/
void SI_CheckRequestedMap(const char *map)
{
  int v2; 
  NamedChunkList *namedChunkLists; 
  char *name; 
  __int64 v5; 
  const char *v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  NamedChunkList *v12; 
  int v13; 
  ChunkList *p_chunks; 
  __int64 v15; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 1001, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( g_siGlob.namedChunkListCount > 0 )
  {
    v2 = 0;
    if ( g_siGlob.namedChunkListCount > 0 )
    {
      namedChunkLists = g_siGlob.namedChunkLists;
      while ( 2 )
      {
        name = namedChunkLists->name;
        v5 = 0x7FFFFFFFi64;
        if ( !map && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v6 = (const char *)(map - name);
        while ( 1 )
        {
          v7 = (unsigned __int8)name[(_QWORD)v6];
          v8 = v5;
          v9 = (unsigned __int8)*name++;
          --v5;
          if ( !v8 )
          {
LABEL_22:
            v12 = &g_siGlob.namedChunkLists[v2];
            if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 846, ASSERT_TYPE_ASSERT, "(map)", (const char *)&queryFormat, "map") )
              __debugbreak();
            v13 = 0;
            if ( v12->chunks.count > 0 )
            {
              p_chunks = &v12->chunks;
              do
              {
                v15 = 0i64;
                if ( g_siGlob.requiredList.count <= 0 )
                {
LABEL_30:
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 852, ASSERT_TYPE_ASSERT, "(SI_IsInList( list, internalId ))", "%s\n\tMap '%s' chunks are not all in the specified list", "SI_IsInList( list, internalId )", v12->name) )
                    __debugbreak();
                }
                else
                {
                  while ( g_siGlob.requiredList.internalId[v15] != p_chunks->internalId[0] )
                  {
                    if ( ++v15 >= g_siGlob.requiredList.count )
                      goto LABEL_30;
                  }
                }
                ++v13;
                p_chunks = (ChunkList *)((char *)p_chunks + 1);
              }
              while ( v13 < v12->chunks.count );
            }
            return;
          }
          if ( v7 != v9 )
          {
            v10 = v7 + 32;
            if ( (unsigned int)(v7 - 65) > 0x19 )
              v10 = v7;
            v7 = v10;
            v11 = v9 + 32;
            if ( (unsigned int)(v9 - 65) > 0x19 )
              v11 = v9;
            if ( v7 != v11 )
              break;
          }
          if ( !v7 )
            goto LABEL_22;
        }
        ++v2;
        ++namedChunkLists;
        if ( v2 < g_siGlob.namedChunkListCount )
          continue;
        break;
      }
    }
    Com_PrintError(1, "SI_CheckRequestedMap: Did not find '%s' in map chunks list\n", map);
  }
}

/*
==============
SI_CheckRequiredAvailableForRead
==============
*/
char SI_CheckRequiredAvailableForRead()
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 1130, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( g_siGlob.namedChunkListCount > 0 )
    return SI_AreChunksInstalledCached(&g_siGlob.requiredList);
  else
    return 1;
}

/*
==============
SI_Dump_Platform_f
==============
*/
__int64 SI_Dump_Platform_f()
{
  __int64 v0; 
  int v1; 
  ChunkList *p_priorityList; 
  unsigned int v3; 
  unsigned __int64 v4; 
  const char *v5; 
  Windows::Xbox::Management::Deployment::PackageTransferManager *v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  __int64 v14; 
  __int64 v15; 
  char *v16; 
  Windows::Xbox::Management::Deployment::PackageTransferManager *__valueArg; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 

  Com_Printf(16, "Chunks in install order:\n");
  v0 = 0i64;
  v1 = 0;
  if ( g_siGlob.priorityList.count > 0 )
  {
    p_priorityList = &g_siGlob.priorityList;
    do
    {
      v3 = p_priorityList->internalId[0];
      v4 = p_priorityList->internalId[0];
      if ( v3 >= 0x80 )
      {
        LODWORD(v15) = 128;
        LODWORD(v14) = p_priorityList->internalId[0];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v14, v15) )
          __debugbreak();
      }
      v5 = "not installed";
      if ( ((0x80000000 >> (v4 & 0x1F)) & g_siGlob.chunkInstalled.array[v4 >> 5]) != 0 )
        v5 = "installed";
      if ( (unsigned int)v4 >= g_siGlob.masterChunkIdCount )
      {
        LODWORD(v15) = g_siGlob.masterChunkIdCount;
        LODWORD(v14) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 182, ASSERT_TYPE_ASSERT, "(unsigned)( internalId ) < (unsigned)( g_siGlob.masterChunkIdCount )", "internalId doesn't index g_siGlob.masterChunkIdCount\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      Com_Printf(16, "\tchunk %d:%d %s\n", (unsigned int)v4, g_siGlob.masterChunkIDs[(unsigned __int8)v3], v5);
      ++v1;
      p_priorityList = (ChunkList *)((char *)p_priorityList + 1);
    }
    while ( v1 < g_siGlob.priorityList.count );
    v0 = 0i64;
  }
  if ( g_siGlob.transferWatcher )
    Com_Printf(16, "Install percent complete: %d\n", g_siGlob.percentComplete);
  else
    Com_Printf(16, "No current install\n");
  v6 = Windows::Xbox::Management::Deployment::PackageTransferManager::Current::get();
  v7 = (__int64)v6;
  __valueArg = v6;
  if ( v6 )
    v6->__abi_AddRef(v6);
  v20 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  v18 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 80i64))(v7, &v18);
  if ( v8 < 0 )
    __abi_WinRTraiseException(v8);
  LODWORD(__valueArg) = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, Windows::Xbox::Management::Deployment::PackageTransferManager **))(*(_QWORD *)v7 + 80i64))(v7, &__valueArg);
  if ( v9 < 0 )
    __abi_WinRTraiseException(v9);
  v19 = 0i64;
  Platform::Box<enum Windows::Xbox::Management::Deployment::PackageTransferStatus>::Box<enum Windows::Xbox::Management::Deployment::PackageTransferStatus>(NULL, (Windows::Xbox::Management::Deployment::PackageTransferStatus)__valueArg);
  v11 = v10;
  v19 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8i64))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
  v19 = 0i64;
  if ( v11 )
  {
    v12 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v11)(v11, &_uuidof__AVEnum_Platform__, &v19);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    v0 = v19;
  }
  v16 = (char *)Platform::Enum::ToString(v0);
  Com_Printf(16, "TransferStatus: %s(%d)\n", v16, v18);
  WindowsDeleteString_0((HSTRING)v16);
  if ( v0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v0 + 16i64))(v0);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
}

/*
==============
SI_Dump_f
==============
*/

void __fastcall SI_Dump_f(double _XMM0_8)
{
  int v1; 
  ChunkList *p_priorityList; 
  unsigned int v3; 
  char v5; 
  int v6; 
  const char *v7; 
  const char *v12; 
  __int64 v14; 
  __int64 v15; 

  Com_Printf(16, "priority list:");
  v1 = 0;
  if ( g_siGlob.priorityList.count > 0 )
  {
    p_priorityList = &g_siGlob.priorityList;
    do
    {
      v3 = p_priorityList->internalId[0];
      if ( v3 >= g_siGlob.masterChunkIdCount )
      {
        LODWORD(v15) = g_siGlob.masterChunkIdCount;
        LODWORD(v14) = p_priorityList->internalId[0];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 182, ASSERT_TYPE_ASSERT, "(unsigned)( internalId ) < (unsigned)( g_siGlob.masterChunkIdCount )", "internalId doesn't index g_siGlob.masterChunkIdCount\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      Com_Printf(16, " %d:%d", p_priorityList->internalId[0], g_siGlob.masterChunkIDs[(unsigned __int8)v3]);
      ++v1;
      p_priorityList = (ChunkList *)((char *)p_priorityList + 1);
    }
    while ( v1 < g_siGlob.priorityList.count );
  }
  Com_Printf(16, "\n");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 1024, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( g_siGlob.namedChunkListCount > 0 )
  {
    if ( g_siGlob.transferWatcher && g_siGlob.percentComplete >= 0x64 )
    {
      v6 = ((__int64 (__fastcall *)(Windows::Xbox::Management::Deployment::PackageTransferWatcher *, Platform::Object_vtbl *))g_siGlob.transferWatcher->__abi_remove_ProgressChanged)(g_siGlob.transferWatcher, g_siGlob.cookie.__vftable);
      if ( v6 < 0 )
        __abi_WinRTraiseException(v6);
      g_siGlob.cookie.__vftable = NULL;
      if ( g_siGlob.transferWatcher )
      {
        g_siGlob.transferWatcher->__abi_Release(g_siGlob.transferWatcher);
        g_siGlob.transferWatcher = NULL;
      }
    }
    v5 = SI_AreChunksInstalledCached(&g_siGlob.requiredList);
    if ( v5 )
    {
      if ( g_siGlob.postInstallCmd[0] )
      {
        v7 = j_va("%s\n", g_siGlob.postInstallCmd);
        Cbuf_AddText(LOCAL_CLIENT_0, v7);
        g_siGlob.postInstallCmd[0] = 0;
      }
      __asm { vmovss  xmm0, cs:__real@3f800000 }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm0, xmm0, cs:__real@3c23d70a
      }
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
    v5 = 1;
  }
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@42c80000
    vcvtss2sd xmm3, xmm0, xmm0
  }
  v12 = "in progress";
  __asm { vmovq   r9, xmm3 }
  if ( v5 )
    v12 = "complete";
  Com_Printf(16, "progress: %s (%f %%, %zd seconds remain)\n", v12, *(double *)&_XMM3, 0i64);
  SI_Dump_Platform_f();
}

/*
==============
SI_Fetch_XB3
==============
*/
char SI_Fetch_XB3()
{
  ChunkList *p_priorityList; 
  int v1; 
  Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *v2; 
  __int64 v3; 
  Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *v4; 
  Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *v5; 
  Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *v6; 
  Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *v7; 
  int i; 
  unsigned int v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v14; 
  __int64 v15; 
  Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *v16; 
  __int64 v17; 
  Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *v18; 
  Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *v19; 

  p_priorityList = &g_siGlob.priorityList;
  LOBYTE(v1) = SI_AreChunksInstalledCached(&g_siGlob.priorityList);
  if ( !(_BYTE)v1 )
  {
    v2 = (Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *)Windows::Xbox::Management::Deployment::PackageTransferManager::Current::get();
    v3 = (__int64)v2;
    v16 = v2;
    if ( v2 )
      v2->__abi_AddRef(v2);
    v17 = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
    v16 = (Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
    Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1>::Vector<unsigned int,std::equal_to<unsigned int>,1>(v16, g_siGlob.priorityList.count);
    v5 = v4;
    v16 = v4;
    if ( v4 )
    {
      v6 = (Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *)&v4->Windows::Foundation::Collections::IVector<unsigned int>;
      if ( v4 != (Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *)-8i64 )
        v6->__abi_AddRef(&v4->Windows::Foundation::Collections::IVector<unsigned int>);
      v7 = NULL;
    }
    else
    {
      v7 = NULL;
      v6 = NULL;
    }
    v18 = v6;
    if ( v5 )
      v5->__abi_Release(v5);
    for ( i = 0; i < g_siGlob.priorityList.count; p_priorityList = (ChunkList *)((char *)p_priorityList + 1) )
    {
      v9 = p_priorityList->internalId[0];
      if ( v9 >= g_siGlob.masterChunkIdCount )
      {
        LODWORD(v15) = g_siGlob.masterChunkIdCount;
        LODWORD(v14) = p_priorityList->internalId[0];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 182, ASSERT_TYPE_ASSERT, "(unsigned)( internalId ) < (unsigned)( g_siGlob.masterChunkIdCount )", "internalId doesn't index g_siGlob.masterChunkIdCount\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      v10 = ((__int64 (__fastcall *)(Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *, _QWORD, _QWORD))v6->Windows::Foundation::Collections::IObservableVector<unsigned int>::Platform::Object::__vftable[1].__abi_Release)(v6, (unsigned int)i, g_siGlob.masterChunkIDs[(unsigned __int8)v9]);
      if ( v10 < 0 )
        __abi_WinRTraiseException(v10);
      ++i;
    }
    if ( v6 )
      v6->__abi_AddRef(v6);
    if ( v6 )
      v6->__abi_Release(v6);
    v16 = v6;
    if ( v6 )
      v6->__abi_AddRef(v6);
    v19 = v6;
    if ( v6 )
      v6->__abi_Release(v6);
    v16 = NULL;
    if ( v6 )
    {
      v11 = v6->__abi_QueryInterface(v6, (Platform::Guid *)&_uuidof__AU__IIterable_I_Collections_Foundation_Windows__, (void **)&v16);
      if ( v11 < 0 )
        __abi_WinRTraiseException(v11);
      v7 = v16;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *, _QWORD))(*(_QWORD *)v3 + 48i64))(v3, v7, 0i64);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    if ( v7 )
      v7->__abi_Release(v7);
    v1 = Sys_Milliseconds() + 30000;
    g_siGlob.nextInstallCheckTime = v1;
    if ( v6 )
      LOBYTE(v1) = v6->__abi_Release(v6);
    if ( v3 )
      LOBYTE(v1) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
  }
  return v1;
}

/*
==============
SI_Fetch_f
==============
*/

void __fastcall SI_Fetch_f()
{
  SI_Fetch_XB3();
}

/*
==============
SI_Init
==============
*/
void SI_Init(void)
{
  const char *CurrentLanguageCode; 
  const char *v1; 
  char *fmt; 
  unsigned int namedChunkBufferIndex; 
  char dest[272]; 

  if ( !g_siGlob.initialized )
  {
    memset_0(&g_siGlob.initialized + 1, 0, 0x2F27ui64);
    g_siGlob.initialized = 1;
    if ( g_siGlob.namedChunkBufferIndex )
    {
      namedChunkBufferIndex = g_siGlob.namedChunkBufferIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 727, ASSERT_TYPE_ASSERT, "( g_siGlob.namedChunkBufferIndex ) == ( 0 )", "%s == %s\n\t%i, %i", "g_siGlob.namedChunkBufferIndex", "0", namedChunkBufferIndex, 0i64) )
        __debugbreak();
    }
    CurrentLanguageCode = SEH_GetCurrentLanguageCode();
    v1 = Sys_DefaultInstallPath();
    Com_sprintf(dest, 0x104ui64, "%s\\chunks.%s", v1, CurrentLanguageCode);
    g_siGlob.namedChunkListCount = SI_ReadChunkList(dest, g_siGlob.namedChunkLists, 5);
    LODWORD(fmt) = 100 * g_siGlob.namedChunkBufferIndex / 0x2800;
    Com_Printf(16, "StreamingInstall Buffer Used: %i / %i (%i%%)\n", g_siGlob.namedChunkBufferIndex, 10240i64, fmt);
    Cmd_AddCommandInternal("si_dump", (void (__fastcall *)())SI_Dump_f, &SI_Dump_f_VAR);
    Cmd_AddCommandInternal("si_isFullyInstalled", SI_IsFullyInstalled_f, &SI_IsFullyInstalled_f_VAR);
    Cmd_AddCommandInternal("si_fetch", SI_Fetch_f, &SI_Fetch_f_VAR);
    if ( g_siGlob.namedChunkListCount )
    {
      SI_UpdateInstallOrder(0);
      SI_SetupProgressCallback();
    }
  }
}

/*
==============
SI_IsFullyInstalled
==============
*/
char SI_IsFullyInstalled()
{
  return SI_AreChunksInstalledCached(&g_siGlob.priorityList);
}

/*
==============
SI_IsFullyInstalled_f
==============
*/
void SI_IsFullyInstalled_f()
{
  char v0; 
  const char *v1; 

  v0 = SI_AreChunksInstalledCached(&g_siGlob.priorityList);
  v1 = "No";
  if ( v0 )
    v1 = "Yes";
  Com_Printf(16, "IsFullyInstalled: %s\n", v1);
}

/*
==============
SI_IsStreamingInstall
==============
*/
bool SI_IsStreamingInstall()
{
  return g_siGlob.namedChunkListCount > 0;
}

/*
==============
SI_ProgressCallback
==============
*/
void SI_ProgressCallback(Windows::Xbox::Management::Deployment::PackageTransferWatcher *ptm, Windows::Xbox::Management::Deployment::ProgressChangedEventArgs *args)
{
  int v2; 
  volatile unsigned int v3; 

  v2 = args->__abi_get_PercentComplete(args, (unsigned int *)&v3);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  g_siGlob.percentComplete = v3;
}

/*
==============
SI_ReadChunkList
==============
*/
__int64 SI_ReadChunkList(const char *path, NamedChunkList *list, int listCount)
{
  const char *v4; 
  void *m_ptr; 
  FILE *v6; 
  FILE *v7; 
  size_t v8; 
  unsigned int v9; 
  const char *v10; 
  unsigned int v11; 
  const char *const *v12; 
  const char *v13; 
  __int64 v14; 
  signed __int64 v15; 
  int v16; 
  int v17; 
  int v19; 
  int v20; 
  __int64 v21; 
  const char *v22; 
  __int64 v23; 
  unsigned int v24; 
  unsigned int namedChunkBufferIndex; 
  const char *v26; 
  int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int masterChunkIdCount; 
  int v31; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  char *data_p; 
  __int64 v37; 
  __int64 v38; 
  Mem_LargeLocal Buffer[3]; 
  unsigned int v42; 

  v38 = -2i64;
  v4 = path;
  Mem_LargeLocal::Mem_LargeLocal(Buffer, 0x100000ui64, "file_buf buf");
  m_ptr = Buffer[0].m_ptr;
  v6 = fopen(v4, "rt");
  v7 = v6;
  if ( v6 )
  {
    v8 = fread(m_ptr, 1ui64, 0x100000ui64, v6);
    if ( v8 == 0x100000 )
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_14418B960, 441i64, 0x100000i64, v4, 0x100000i64);
    *((_BYTE *)m_ptr + v8) = 0;
    fclose(v7);
    v9 = 0;
    v42 = 0;
    data_p = (char *)m_ptr;
    v10 = Com_Parse((const char **)&data_p);
    if ( !data_p )
      goto LABEL_53;
    v37 = 0i64;
    do
    {
      v11 = 0;
      v12 = CHUNKLIST_NAME_WHITELIST;
LABEL_7:
      v13 = *v12;
      v14 = 0x7FFFFFFFi64;
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v15 = v10 - v13;
      do
      {
        v16 = (unsigned __int8)v13[v15];
        v17 = *(unsigned __int8 *)v13++;
        if ( !v14-- )
          break;
        if ( v16 != v17 )
        {
          v19 = v16 + 32;
          if ( (unsigned int)(v16 - 65) > 0x19 )
            v19 = v16;
          v16 = v19;
          v20 = v17 + 32;
          if ( (unsigned int)(v17 - 65) > 0x19 )
            v20 = v17;
          if ( v16 != v20 )
          {
            ++v11;
            ++v12;
            if ( v11 >= 5 )
              goto LABEL_47;
            goto LABEL_7;
          }
        }
      }
      while ( v16 );
      v21 = v37;
      v22 = path;
      if ( v37 >= listCount )
        Sys_Error((const ObfuscateErrorText)&stru_14418BB60, (unsigned int)listCount, path);
      v23 = -1i64;
      do
        ++v23;
      while ( v10[v23] );
      v24 = v23 + 1;
      namedChunkBufferIndex = g_siGlob.namedChunkBufferIndex;
      if ( g_siGlob.namedChunkBufferIndex + v24 > 0x2800 )
      {
        Sys_Error((const ObfuscateErrorText)&stru_14418BBC0, 10i64, path);
        namedChunkBufferIndex = g_siGlob.namedChunkBufferIndex;
      }
      list->name = &g_siGlob.namedChunkBuffer[namedChunkBufferIndex];
      g_siGlob.namedChunkBufferIndex += v24;
      Core_strcpy(list->name, v24, v10);
      list->chunks.count = 0;
      v26 = Com_ParseOnLine((const char **)&data_p);
      if ( data_p )
      {
        do
        {
          if ( !*v26 )
            break;
          v27 = atoi(v26);
          v28 = v27;
          if ( v27 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,int>(int)", "unsigned", (unsigned int)v27, "signed", v27) )
            __debugbreak();
          v29 = 0;
          masterChunkIdCount = g_siGlob.masterChunkIdCount;
          if ( g_siGlob.masterChunkIdCount )
          {
            while ( g_siGlob.masterChunkIDs[v29] != v28 )
            {
              if ( ++v29 >= g_siGlob.masterChunkIdCount )
                goto LABEL_36;
            }
            if ( v29 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v29, "unsigned", v29) )
              __debugbreak();
          }
          else
          {
LABEL_36:
            if ( g_siGlob.masterChunkIdCount >= 0x80 )
            {
              Sys_Error((const ObfuscateErrorText)&stru_14418BAF0, 128i64);
              masterChunkIdCount = g_siGlob.masterChunkIdCount;
            }
            g_siGlob.masterChunkIDs[masterChunkIdCount] = v28;
            ++g_siGlob.masterChunkIdCount;
            LOBYTE(v29) = masterChunkIdCount;
          }
          list->chunks.internalId[list->chunks.count] = v29;
          v31 = list->chunks.count + 1;
          list->chunks.count = v31;
          if ( v31 >= 128 )
          {
            LODWORD(v35) = 128;
            LODWORD(v34) = v31;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 303, ASSERT_TYPE_ASSERT, "( element->chunks.count ) < ( 128 )", "%s < %s\n\t%i, %i", "element->chunks.count", "MAX_CHUNK_COUNT", v34, v35) )
              __debugbreak();
          }
          v26 = Com_ParseOnLine((const char **)&data_p);
        }
        while ( data_p );
        v9 = v42;
        v22 = path;
        v21 = v37;
      }
      if ( !list->chunks.count )
        Com_PrintError(1, "SI_ReadChunkList: Read 0 chunks for name '%s' in '%s'\n", list->name, v22);
      v42 = ++v9;
      v37 = v21 + 1;
      ++list;
LABEL_47:
      v10 = Com_Parse((const char **)&data_p);
    }
    while ( data_p );
    if ( (v9 & 0x80000000) != 0 || v9 > 5 )
    {
      LODWORD(v34) = 5;
      LODWORD(v33) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 314, ASSERT_TYPE_ASSERT, "( 0 ) <= ( count ) && ( count ) <= ( MAX_NAMED_LIST_COUNT )", "count not in [0, MAX_NAMED_LIST_COUNT]\n\t%i not in [%i, %i]", v33, 0i64, v34) )
        __debugbreak();
    }
    v4 = path;
    if ( !v9 )
LABEL_53:
      Com_PrintError(1, "SI_ReadChunkList: There are no whitelisted names listed in '%s'\n", v4);
    Com_Printf(16, "SI_ReadChunkList: Found %d / %d named chunk lists in '%s'\n", v9, 5i64, v4);
  }
  else
  {
    v9 = 0;
  }
  Mem_LargeLocal::~Mem_LargeLocal(Buffer);
  return v9;
}

/*
==============
SI_RequestMap
==============
*/
void SI_RequestMap(const char *map, const char *postInstallCmd)
{
  const char *v4; 
  int v5; 
  NamedChunkList *namedChunkLists; 
  char *name; 
  __int64 v8; 
  const char *v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 964, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( g_siGlob.namedChunkListCount > 0 )
  {
    v5 = 0;
    if ( g_siGlob.namedChunkListCount > 0 )
    {
      namedChunkLists = g_siGlob.namedChunkLists;
      while ( 2 )
      {
        name = namedChunkLists->name;
        v8 = 0x7FFFFFFFi64;
        if ( !map && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v9 = (const char *)(map - name);
        while ( 1 )
        {
          v10 = (unsigned __int8)name[(_QWORD)v9];
          v11 = v8;
          v12 = (unsigned __int8)*name++;
          --v8;
          if ( !v11 )
          {
LABEL_24:
            SI_UpdateInstallOrder(v5);
            if ( postInstallCmd )
              Core_strcpy(g_siGlob.postInstallCmd, 0x100ui64, postInstallCmd);
            else
              g_siGlob.postInstallCmd[0] = 0;
            return;
          }
          if ( v10 != v12 )
          {
            v13 = v10 + 32;
            if ( (unsigned int)(v10 - 65) > 0x19 )
              v13 = v10;
            v10 = v13;
            v14 = v12 + 32;
            if ( (unsigned int)(v12 - 65) > 0x19 )
              v14 = v12;
            if ( v10 != v14 )
              break;
          }
          if ( !v10 )
            goto LABEL_24;
        }
        ++v5;
        ++namedChunkLists;
        if ( v5 < g_siGlob.namedChunkListCount )
          continue;
        break;
      }
    }
    Com_PrintError(1, "SI_RequestMap: Unknown map '%s'\n", map);
  }
  else if ( postInstallCmd )
  {
    v4 = j_va("%s\n", postInstallCmd);
    Cbuf_AddText(LOCAL_CLIENT_0, v4);
  }
}

/*
==============
SI_SetupProgressCallback
==============
*/
Platform::Object_vtbl *SI_SetupProgressCallback()
{
  int ActivationFactoryByPCWSTR; 
  int v1; 
  Windows::Foundation::TypedEventHandler<Windows::Xbox::Management::Deployment::PackageTransferWatcher _,Windows::Xbox::Management::Deployment::ProgressChangedEventArgs _> *v2; 
  Windows::Foundation::TypedEventHandler<Windows::Xbox::Management::Deployment::PackageTransferWatcher _,Windows::Xbox::Management::Deployment::ProgressChangedEventArgs _> *v3; 
  int v4; 
  int v5; 
  __int64 v6; 
  Windows::Xbox::Management::Deployment::PackageTransferWatcher *v7; 
  Windows::Xbox::Management::Deployment::PackageTransferWatcher *transferWatcher; 
  Windows::Foundation::TypedEventHandler<Windows::Xbox::Management::Deployment::PackageTransferWatcher _,Windows::Xbox::Management::Deployment::ProgressChangedEventArgs _> *v9; 
  Windows::Foundation::TypedEventHandler<Windows::Xbox::Management::Deployment::PackageTransferWatcher _,Windows::Xbox::Management::Deployment::ProgressChangedEventArgs _> *v10; 
  int v11; 
  Platform::Object_vtbl *result; 
  Platform::Object_vtbl *v13; 
  Windows::Xbox::Management::Deployment::PackageTransferWatcher *v14; 
  __int64 v15; 
  Windows::Foundation::TypedEventHandler<Windows::Xbox::Management::Deployment::PackageTransferWatcher _,Windows::Xbox::Management::Deployment::ProgressChangedEventArgs _> *v16; 
  Platform::Guid pGuid; 
  Platform::Guid v18; 
  Windows::Foundation::TypedEventHandler<Windows::Xbox::Management::Deployment::PackageTransferWatcher _,Windows::Xbox::Management::Deployment::ProgressChangedEventArgs _> *v19; 
  void *ppActivationFactory; 
  Windows::Xbox::Management::Deployment::PackageTransferWatcher *v21; 
  void *v22; 

  v15 = -2i64;
  if ( g_siGlob.transferWatcher && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 522, ASSERT_TYPE_ASSERT, "(g_siGlob.transferWatcher == nullptr)", (const char *)&queryFormat, "g_siGlob.transferWatcher == nullptr") )
    __debugbreak();
  g_siGlob.percentComplete = 0;
  pGuid.__vftable = (Platform::Object_vtbl *)0x487829604E534BDFi64;
  *(_DWORD *)&pGuid.__d = 613852311;
  *(_DWORD *)&pGuid.__h = 758101982;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.ApplicationModel.Package", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v19 = NULL;
  v1 = (*(__int64 (__fastcall **)(void *, Windows::Foundation::TypedEventHandler<Windows::Xbox::Management::Deployment::PackageTransferWatcher _,Windows::Xbox::Management::Deployment::ProgressChangedEventArgs _> **))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, &v19);
  if ( v1 < 0 )
    __abi_WinRTraiseException(v1);
  v2 = v19;
  v3 = v19;
  if ( v19 )
  {
    v19->__abi_AddRef(v19);
    v2 = v19;
  }
  if ( v2 )
    v2->__abi_Release(v2);
  v21 = NULL;
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  v16 = v3;
  v18.__vftable = (Platform::Object_vtbl *)0x460A12F9A306E506i64;
  *(_DWORD *)&v18.__d = -1169117520;
  *(_DWORD *)&v18.__h = 1819839538;
  v22 = NULL;
  v4 = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Management.Deployment.PackageTransferWatcher", &v18, &v22);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  v21 = NULL;
  v5 = (*(__int64 (__fastcall **)(void *, Windows::Foundation::TypedEventHandler<Windows::Xbox::Management::Deployment::PackageTransferWatcher _,Windows::Xbox::Management::Deployment::ProgressChangedEventArgs _> *, Windows::Xbox::Management::Deployment::PackageTransferWatcher **))(*(_QWORD *)v22 + 56i64))(v22, v3, &v21);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  v6 = (__int64)v21;
  v7 = v21;
  if ( v21 )
  {
    v21->__abi_AddRef(v21);
    v6 = (__int64)v21;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  v14 = NULL;
  if ( v22 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16i64))(v22);
  v14 = v7;
  transferWatcher = g_siGlob.transferWatcher;
  if ( v7 != g_siGlob.transferWatcher )
  {
    if ( v7 )
    {
      v7->__abi_AddRef(v7);
      transferWatcher = g_siGlob.transferWatcher;
    }
    if ( transferWatcher )
      transferWatcher->__abi_Release(transferWatcher);
    g_siGlob.transferWatcher = v7;
  }
  if ( v7 )
    v7->__abi_Release(v7);
  if ( v3 )
    v3->__abi_Release(v3);
  v19 = (Windows::Foundation::TypedEventHandler<Windows::Xbox::Management::Deployment::PackageTransferWatcher _,Windows::Xbox::Management::Deployment::ProgressChangedEventArgs _> *)Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
  Windows::Foundation::TypedEventHandler<Windows::Xbox::Management::Deployment::PackageTransferWatcher __gc *,Windows::Xbox::Management::Deployment::ProgressChangedEventArgs __gc *>::TypedEventHandler<Windows::Xbox::Management::Deployment::PackageTransferWatcher __gc *,Windows::Xbox::Management::Deployment::ProgressChangedEventArgs __gc *>(v19, SI_ProgressCallback, (Platform::CallbackContext)2, 0);
  v10 = v9;
  v19 = v9;
  v13 = NULL;
  v11 = g_siGlob.transferWatcher->__abi_add_ProgressChanged(g_siGlob.transferWatcher, v9, (Windows::Foundation::EventRegistrationToken *)&v13);
  if ( v11 < 0 )
    __abi_WinRTraiseException(v11);
  result = v13;
  g_siGlob.cookie.__vftable = v13;
  if ( v10 )
    return (Platform::Object_vtbl *)((__int64 (__fastcall *)(Windows::Foundation::TypedEventHandler<Windows::Xbox::Management::Deployment::PackageTransferWatcher _,Windows::Xbox::Management::Deployment::ProgressChangedEventArgs _> *))v10->__abi_Release)(v10);
  return result;
}

/*
==============
SI_SuspendInstall
==============
*/
void SI_SuspendInstall(void)
{
  ;
}

/*
==============
SI_UpdateInstallOrder
==============
*/
void SI_UpdateInstallOrder(int chunkListId)
{
  __int64 v1; 
  __int64 v2; 
  int v3; 
  int count; 
  ChunkList *p_chunks; 
  unsigned __int8 v6; 
  int v7; 
  ChunkList *p_requiredList; 
  int v9; 
  int *p_count; 
  int v11; 
  unsigned __int8 *v12; 
  unsigned __int8 v13; 
  int v14; 
  ChunkList *p_priorityList; 
  int *v16; 
  int v17; 
  unsigned __int8 *v18; 
  unsigned __int8 v19; 
  int v20; 
  ChunkList *v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 

  v1 = chunkListId;
  memset_0(&g_siGlob.requiredList, 0, 0x108ui64);
  v24 = v1;
  v2 = v1;
  if ( (StreamingInstallGlobals *)((char *)&g_siGlob + 144 * v1) == (StreamingInstallGlobals *)-10272i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 826, ASSERT_TYPE_ASSERT, "(map)", (const char *)&queryFormat, "map") )
    __debugbreak();
  v3 = 0;
  if ( g_siGlob.namedChunkLists[v1].chunks.count > 0 )
  {
    count = g_siGlob.requiredList.count;
    p_chunks = &g_siGlob.namedChunkLists[v1].chunks;
    do
    {
      v6 = p_chunks->internalId[0];
      v7 = 0;
      if ( count <= 0 )
      {
LABEL_10:
        g_siGlob.requiredList.internalId[count] = v6;
        count = g_siGlob.requiredList.count + 1;
        g_siGlob.requiredList.count = count;
        if ( (unsigned int)count >= 0x80 )
        {
          LODWORD(v23) = 128;
          LODWORD(v22) = count;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 837, ASSERT_TYPE_ASSERT, "(unsigned)( list->count ) < (unsigned)( 128 )", "list->count doesn't index MAX_CHUNK_COUNT\n\t%i not in [0, %i)", v22, v23) )
            __debugbreak();
          count = g_siGlob.requiredList.count;
        }
      }
      else
      {
        p_requiredList = &g_siGlob.requiredList;
        while ( p_requiredList->internalId[0] != v6 )
        {
          ++v7;
          p_requiredList = (ChunkList *)((char *)p_requiredList + 1);
          if ( v7 >= count )
            goto LABEL_10;
        }
      }
      ++v3;
      p_chunks = (ChunkList *)((char *)p_chunks + 1);
    }
    while ( v3 < g_siGlob.namedChunkLists[v1].chunks.count );
    v2 = v1;
  }
  v9 = g_siGlob.priorityList.count;
  if ( (int)v1 < g_siGlob.namedChunkListCount )
  {
    p_count = &g_siGlob.namedChunkLists[v1].chunks.count;
    do
    {
      if ( p_count == (int *)136 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 826, ASSERT_TYPE_ASSERT, "(map)", (const char *)&queryFormat, "map") )
          __debugbreak();
        v9 = g_siGlob.priorityList.count;
      }
      v11 = 0;
      if ( *p_count > 0 )
      {
        v12 = (unsigned __int8 *)(p_count - 32);
        do
        {
          v13 = *v12;
          v14 = 0;
          if ( v9 <= 0 )
          {
LABEL_28:
            g_siGlob.priorityList.internalId[v9] = v13;
            v9 = g_siGlob.priorityList.count + 1;
            g_siGlob.priorityList.count = v9;
            if ( (unsigned int)v9 >= 0x80 )
            {
              LODWORD(v23) = 128;
              LODWORD(v22) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 837, ASSERT_TYPE_ASSERT, "(unsigned)( list->count ) < (unsigned)( 128 )", "list->count doesn't index MAX_CHUNK_COUNT\n\t%i not in [0, %i)", v22, v23) )
                __debugbreak();
              v9 = g_siGlob.priorityList.count;
            }
          }
          else
          {
            p_priorityList = &g_siGlob.priorityList;
            while ( p_priorityList->internalId[0] != v13 )
            {
              ++v14;
              p_priorityList = (ChunkList *)((char *)p_priorityList + 1);
              if ( v14 >= v9 )
                goto LABEL_28;
            }
          }
          ++v11;
          ++v12;
        }
        while ( v11 < *p_count );
      }
      LODWORD(v1) = v1 + 1;
      p_count += 36;
    }
    while ( (int)v1 < g_siGlob.namedChunkListCount );
    v2 = v24;
  }
  if ( v2 > 0 )
  {
    v16 = &g_siGlob.namedChunkLists[0].chunks.count;
    do
    {
      if ( v16 == (int *)136 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 826, ASSERT_TYPE_ASSERT, "(map)", (const char *)&queryFormat, "map") )
          __debugbreak();
        v9 = g_siGlob.priorityList.count;
      }
      v17 = 0;
      if ( *v16 > 0 )
      {
        v18 = (unsigned __int8 *)(v16 - 32);
        do
        {
          v19 = *v18;
          v20 = 0;
          if ( v9 <= 0 )
          {
LABEL_47:
            g_siGlob.priorityList.internalId[v9] = v19;
            v9 = g_siGlob.priorityList.count + 1;
            g_siGlob.priorityList.count = v9;
            if ( (unsigned int)v9 >= 0x80 )
            {
              LODWORD(v23) = 128;
              LODWORD(v22) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 837, ASSERT_TYPE_ASSERT, "(unsigned)( list->count ) < (unsigned)( 128 )", "list->count doesn't index MAX_CHUNK_COUNT\n\t%i not in [0, %i)", v22, v23) )
                __debugbreak();
              v9 = g_siGlob.priorityList.count;
            }
          }
          else
          {
            v21 = &g_siGlob.priorityList;
            while ( v21->internalId[0] != v19 )
            {
              ++v20;
              v21 = (ChunkList *)((char *)v21 + 1);
              if ( v20 >= v9 )
                goto LABEL_47;
            }
          }
          ++v17;
          ++v18;
        }
        while ( v17 < *v16 );
      }
      v16 += 36;
      --v2;
    }
    while ( v2 );
  }
  Cbuf_AddText(LOCAL_CLIENT_0, "si_fetch");
}

/*
==============
SI_UpdateInstallationState_Internal_XB3
==============
*/
char SI_UpdateInstallationState_Internal_XB3()
{
  Windows::Xbox::Management::Deployment::PackageTransferManager *v0; 
  __int64 v1; 
  int v2; 
  int v3; 
  ChunkList *p_priorityList; 
  unsigned int v5; 
  unsigned __int64 v6; 
  unsigned int v7; 
  Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *v8; 
  Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *v9; 
  __int64 v10; 
  int v11; 
  Windows::Foundation::Collections::IIterable<unsigned int> *v12; 
  int v13; 
  bool v14; 
  ChunkList *p_requiredList; 
  unsigned __int64 v16; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  Windows::Xbox::Management::Deployment::PackageTransferManager *v22; 
  __int64 v23; 
  __int64 v24; 
  Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *v25; 

  v0 = Windows::Xbox::Management::Deployment::PackageTransferManager::Current::get();
  v1 = (__int64)v0;
  v22 = v0;
  if ( v0 )
    LOBYTE(v0) = v0->__abi_AddRef(v0);
  v24 = v1;
  if ( v1 )
    LOBYTE(v0) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16i64))(v1);
  v2 = 0;
  *(_QWORD *)g_siGlob.chunkInstalled.array = 0i64;
  *(_QWORD *)&g_siGlob.chunkInstalled.array[2] = 0i64;
  *(_QWORD *)g_siGlob.chunkInstallChecked.array = 0i64;
  *(_QWORD *)&g_siGlob.chunkInstallChecked.array[2] = 0i64;
  v3 = 0;
  if ( g_siGlob.priorityList.count > 0 )
  {
    p_priorityList = &g_siGlob.priorityList;
    do
    {
      v5 = p_priorityList->internalId[0];
      v6 = p_priorityList->internalId[0];
      if ( v5 >= g_siGlob.masterChunkIdCount )
      {
        LODWORD(v19) = g_siGlob.masterChunkIdCount;
        LODWORD(v18) = p_priorityList->internalId[0];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 182, ASSERT_TYPE_ASSERT, "(unsigned)( internalId ) < (unsigned)( g_siGlob.masterChunkIdCount )", "internalId doesn't index g_siGlob.masterChunkIdCount\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v7 = g_siGlob.masterChunkIDs[(unsigned __int8)v5];
      v25 = (Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
      Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1>::Vector<unsigned int,std::equal_to<unsigned int>,1>(v25);
      v9 = v8;
      if ( v8 )
        v8->__abi_AddRef(v8);
      if ( v9 )
        v9->__abi_Release(v9);
      j__Append__Q__IVector_I_Collections_Foundation_Windows____Vector_IU__equal_to_I_std___00_2Platform__UE_AAAXI_Z(v9, v7);
      v10 = 0i64;
      v23 = 0i64;
      if ( v1 )
      {
        v11 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v1)(v1, &_uuidof__AUIPackageTransferManagerForChunkSpecifiers_Deployment_Management_Xbox_Windows__, &v23);
        if ( v11 < 0 )
          __abi_WinRTraiseException(v11);
        v10 = v23;
      }
      v12 = &v9->Windows::Foundation::Collections::IIterable<unsigned int>;
      if ( !v9 )
        v12 = NULL;
      LODWORD(v22) = 0;
      v13 = (*(__int64 (__fastcall **)(__int64, Windows::Foundation::Collections::IIterable<unsigned int> *, Windows::Xbox::Management::Deployment::PackageTransferManager **))(*(_QWORD *)v10 + 56i64))(v10, v12, &v22);
      if ( v13 < 0 )
        __abi_WinRTraiseException(v13);
      v14 = (_DWORD)v22 == 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
      if ( v9 )
        v9->__abi_Release(v9);
      if ( v14 )
      {
        if ( (unsigned int)v6 >= 0x80 )
        {
          LODWORD(v21) = 128;
          LODWORD(v20) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v20, v21) )
            __debugbreak();
        }
        g_siGlob.chunkInstalled.array[v6 >> 5] |= 0x80000000 >> (v6 & 0x1F);
      }
      if ( (unsigned int)v6 >= 0x80 )
      {
        LODWORD(v21) = 128;
        LODWORD(v20) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v20, v21) )
          __debugbreak();
      }
      v0 = (Windows::Xbox::Management::Deployment::PackageTransferManager *)(v6 >> 5);
      g_siGlob.chunkInstallChecked.array[v6 >> 5] |= 0x80000000 >> (v6 & 0x1F);
      ++v3;
      p_priorityList = (ChunkList *)((char *)p_priorityList + 1);
    }
    while ( v3 < g_siGlob.priorityList.count );
  }
  if ( g_siGlob.requiredList.count > 0 )
  {
    p_requiredList = &g_siGlob.requiredList;
    do
    {
      v16 = p_requiredList->internalId[0];
      if ( (unsigned int)v16 >= 0x80 )
      {
        LODWORD(v19) = 128;
        LODWORD(v18) = p_requiredList->internalId[0];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v18, v19) )
          __debugbreak();
      }
      v0 = (Windows::Xbox::Management::Deployment::PackageTransferManager *)(v16 >> 5);
      if ( ((0x80000000 >> (v16 & 0x1F)) & g_siGlob.chunkInstallChecked.array[v16 >> 5]) == 0 )
      {
        LODWORD(v18) = v16;
        LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streaminginstall.cpp", 445, ASSERT_TYPE_ASSERT, "( ( g_siGlob.chunkInstallChecked.testBit( internalId ) ) )", "( internalId ) = %i", v18);
        if ( (_BYTE)v0 )
          __debugbreak();
      }
      ++v2;
      p_requiredList = (ChunkList *)((char *)p_requiredList + 1);
    }
    while ( v2 < g_siGlob.requiredList.count );
  }
  if ( v1 )
    LOBYTE(v0) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16i64))(v1);
  return (char)v0;
}

