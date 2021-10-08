/*
==============
Callstack_ForEachSymbol
==============
*/

void __fastcall Callstack_ForEachSymbol(void (__fastcall *callback)(unsigned __int64, const char *))
{
  ?Callstack_ForEachSymbol@@YAXP6AX_KPEBD@Z@Z(callback);
}

/*
==============
Callstack_ResolveSymbols
==============
*/

void __fastcall Callstack_ResolveSymbols(Callstack *callstack)
{
  ?Callstack_ResolveSymbols@@YAXPEAUCallstack@@@Z(callstack);
}

/*
==============
Callstack_ForEachSymbol
==============
*/
void Callstack_ForEachSymbol(void (*callback)(unsigned __int64, const char *))
{
  Sys_EnterCriticalSection(CRITSECT_CALLSTACK_SYMBOLS);
  s_resolvingCallstack = NULL;
  s_symbolFileCallback = callback;
  Callstack_ResolveSymbolsInternal();
  Sys_LeaveCriticalSection(CRITSECT_CALLSTACK_SYMBOLS);
}

/*
==============
Callstack_InitializeModuleAddressesCallback
==============
*/
void Callstack_InitializeModuleAddressesCallback(HINSTANCE__ *const module, const _MODULEINFO *r_info)
{
  int v3; 
  __int64 v4; 
  void *lpBaseOfDll; 
  __int64 v14; 

  lpBaseOfDll = r_info->lpBaseOfDll;
  LODWORD(v14) = r_info->SizeOfImage;
  if ( !Sys_ModuleInfo_GetFilename(module, temp, 260) )
    Com_PrintError(0, "Sys_ModuleInfo_GetFilename %p failed\n", module);
  Core_strcpy((char *)&v14 + 4, 0x104ui64, temp);
  v3 = s_moduleAddressCount;
  if ( (unsigned __int64)s_moduleAddressCount >= 0x100 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_symbols_msvc.cpp", 669, ASSERT_TYPE_ASSERT, "(s_moduleAddressCount < ( sizeof( *array_counter( s_moduleAddresses ) ) + 0 ))", (const char *)&queryFormat, "s_moduleAddressCount < ARRAY_COUNT( s_moduleAddresses )", lpBaseOfDll, v14) )
      __debugbreak();
    v3 = s_moduleAddressCount;
  }
  v4 = 2i64;
  _RDX = &s_moduleAddresses[v3];
  _RAX = &lpBaseOfDll;
  do
  {
    _RDX = (AddressRange *)((char *)_RDX + 128);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RAX += 16;
    __asm
    {
      vmovups ymmword ptr [rdx-80h], ymm0
      vmovups ymm0, ymmword ptr [rax-60h]
      vmovups ymmword ptr [rdx-60h], ymm0
      vmovups ymm0, ymmword ptr [rax-40h]
      vmovups ymmword ptr [rdx-40h], ymm0
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rdx-20h], xmm0
      vmovups xmmword ptr [rdx-10h], xmm1
    }
    --v4;
  }
  while ( v4 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rdx], xmm0
  }
  s_moduleAddressCount = v3 + 1;
}

/*
==============
Callstack_ParsePdbMapFile
==============
*/
bool Callstack_ParsePdbMapFile(void *mapFile, _OVERLAPPED *mapOverlapped, unsigned __int64 baseAddress, unsigned __int64 baseSize, const char *mapName)
{
  _OVERLAPPED *v7; 
  void *v8; 
  const char *v9; 
  __int64 v10; 
  __int64 v11; 
  char v12; 
  __int64 v13; 
  char v14; 
  Callstack *v15; 
  unsigned __int64 v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned __int64 v19; 
  char *v20; 
  char *v21; 
  const char *v22; 
  Callstack *v23; 
  unsigned int v24; 
  __int64 v25; 
  unsigned __int64 v26; 
  char *v27; 
  char *v28; 
  const char *v29; 
  char *v30; 
  const char *v31; 
  __int64 v33; 
  char v36; 
  char v37; 

  v7 = mapOverlapped;
  v8 = mapFile;
  if ( mapFile == (void *)-1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_symbols_msvc.cpp", 335, ASSERT_TYPE_ASSERT, "(mapFile != ((HANDLE)(LONG_PTR)-1))", (const char *)&queryFormat, "mapFile != INVALID_HANDLE_VALUE") )
    __debugbreak();
  v9 = mapName;
  if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_symbols_msvc.cpp", 336, ASSERT_TYPE_ASSERT, "(mapName)", (const char *)&queryFormat, "mapName") )
    __debugbreak();
  if ( Callstack_ReadLine(v8, v7) )
  {
LABEL_8:
    v10 = 0i64;
    v11 = 0x7FFFFFFFi64;
    do
    {
      v12 = s_lineBuffer[v10];
      v13 = v11;
      v14 = aSymbols[v10++];
      --v11;
      if ( !v13 )
        break;
      if ( v12 != v14 )
      {
        if ( Callstack_ReadLine(v8, v7) )
          goto LABEL_8;
        goto LABEL_14;
      }
    }
    while ( v12 );
  }
  else
  {
LABEL_14:
    Com_PrintError(16, "%s.map parse error - %s\n", v9, "Bad PDB MAP file");
  }
  v15 = s_resolvingCallstack;
  v16 = baseSize + baseAddress + 4096;
  if ( s_resolvingCallstack )
  {
    v17 = 0;
    if ( s_resolvingCallstack->count )
    {
      do
      {
        v18 = (__int64)&v15->entries[v17];
        if ( *(_QWORD *)v18 >= baseAddress && *(_QWORD *)v18 < v16 )
        {
          Core_strcpy_truncate((char *)(v18 + 8), 0x100ui64, v9);
          v15 = s_resolvingCallstack;
        }
        ++v17;
      }
      while ( v17 < v15->count );
    }
  }
  while ( Callstack_ReadLine(v8, v7) )
  {
    if ( s_lineBuffer[0] )
    {
      if ( j_sscanf(s_lineBuffer, "** Module: %[^\n]", tempParseBuffer) == 1 )
        Core_strcpy(filenameBuffer, 0x800ui64, tempParseBuffer);
      if ( j_sscanf(s_lineBuffer, "Function\t: %s [0x%I64x][0x%x:0x%x], len = %x, %[^\n]", tempParseBuffer, &v33, &v37, &v36, &mapName, function) == 6 )
      {
        v19 = baseAddress + v33;
        if ( s_symbolFileCallback )
        {
          v20 = strchr_0(function, 40);
          if ( v20 )
            *v20 = 0;
          Callstack_SanitizeTemplates(function);
          v21 = strrchr_0(function, 32);
          v22 = v21 + 1;
          if ( !v21 )
            v22 = function;
          s_symbolFileCallback(v19, v22);
        }
        v23 = s_resolvingCallstack;
        if ( s_resolvingCallstack )
        {
          v24 = 0;
          if ( s_resolvingCallstack->count )
          {
            do
            {
              v25 = (__int64)&v23->entries[v24];
              v26 = *(_QWORD *)v25;
              if ( *(_QWORD *)v25 >= baseAddress && v26 < v16 && v19 <= v26 && (!*(_BYTE *)(v25 + 264) || *(_QWORD *)(v25 + 776) < v19) )
              {
                *(_QWORD *)(v25 + 776) = v19;
                v27 = strchr_0(function, 40);
                if ( v27 )
                  *v27 = 0;
                Callstack_SanitizeTemplates(function);
                v28 = strrchr_0(function, 32);
                v29 = v28 + 1;
                if ( !v28 )
                  v29 = function;
                v30 = strrchr_0(filenameBuffer, 92);
                v31 = v30 + 1;
                if ( !v30 )
                  v31 = filenameBuffer;
                Core_strcpy_truncate((char *)(v25 + 264), 0x100ui64, v29);
                Core_strcpy_truncate((char *)(v25 + 520), 0x100ui64, v31);
                v23 = s_resolvingCallstack;
              }
              ++v24;
            }
            while ( v24 < v23->count );
            v8 = mapFile;
            v7 = mapOverlapped;
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
Callstack_ReadLine
==============
*/
char Callstack_ReadLine(void *fp, _OVERLAPPED *overlapped)
{
  int v2; 
  unsigned __int64 v3; 
  int v5; 
  unsigned __int64 v7; 
  int v8; 
  __int64 v9; 
  char *v10; 
  unsigned __int64 v11; 
  size_t v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  char v15; 
  char v17; 
  unsigned int NumberOfBytesRead; 

  v2 = s_lineBufferEndPos;
  v3 = s_readBufferCursor;
  v5 = s_lineBufferStartPos;
  v7 = s_readBufferSize;
$restart:
  v8 = v2 - v5;
  v17 = 0;
  s_lineBufferEndPos = v8;
  memmove_0(s_lineBuffer, &s_lineBuffer[v5], v8);
  s_lineBufferStartPos = 0;
  while ( 1 )
  {
    v9 = 0i64;
    v10 = &s_lineBuffer[v8];
    v11 = 2047i64 - v8;
    if ( v8 != 2047i64 )
    {
      do
      {
        if ( v3 == v7 )
        {
          NumberOfBytesRead = 0;
          if ( !ReadFile(fp, s_readBuffer, 0x10000u, &NumberOfBytesRead, overlapped) && GetLastError() == 997 )
            GetOverlappedResult(fp, overlapped, &NumberOfBytesRead, 1);
          overlapped->Offset += 0x10000;
          v7 = NumberOfBytesRead;
          v3 = 0i64;
          s_readBufferCursor = 0i64;
          s_readBufferSize = NumberOfBytesRead;
        }
        v12 = v7 - v3;
        if ( v7 - v3 > v11 )
          v12 = v11;
        if ( !v12 )
          break;
        memcpy_0(v10, &s_readBuffer[v3], v12);
        v3 += v12;
        v10 += v12;
        v9 += v12;
        s_readBufferCursor = v3;
        v11 -= v12;
      }
      while ( v11 );
    }
    v13 = 0xFFFFFFFFi64;
    if ( (unsigned __int64)(v9 + 0x80000000i64) > 0xFFFFFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v9, "signed", v9) )
        __debugbreak();
      v3 = s_readBufferCursor;
      v7 = s_readBufferSize;
    }
    s_lineBufferEndPos += v9;
    v2 = s_lineBufferEndPos;
    if ( (unsigned __int64)s_lineBufferEndPos >= 0x800 )
      goto LABEL_31;
    s_lineBuffer[s_lineBufferEndPos] = 0;
    if ( !v2 )
      return 0;
    v13 = 0i64;
    v14 = 0i64;
    if ( v2 > 0 )
    {
      while ( 1 )
      {
        v15 = s_lineBuffer[v14];
        if ( v15 == 10 )
          break;
        if ( v15 == 13 )
        {
          if ( v14 < 0x800 )
          {
            v5 = v13 + (s_lineBuffer[v14 + 1] == 10) + 1;
            goto LABEL_28;
          }
LABEL_31:
          j___report_rangecheckfailure(v13);
          JUMPOUT(0x140BFD493i64);
        }
        v13 = (unsigned int)(v13 + 1);
        ++v14;
        if ( (int)v13 >= v2 )
          goto LABEL_23;
      }
      if ( v14 >= 0x800 )
        goto LABEL_31;
      v5 = v13 + 1;
LABEL_28:
      s_lineBuffer[v14] = 0;
      s_lineBufferStartPos = v5;
      if ( !v17 )
        return 1;
      goto $restart;
    }
LABEL_23:
    v17 = 1;
    v8 = 0;
    s_lineBufferEndPos = 0;
  }
}

/*
==============
Callstack_ResolveSymbols
==============
*/
void Callstack_ResolveSymbols(Callstack *callstack)
{
  Sys_EnterCriticalSection(CRITSECT_CALLSTACK_SYMBOLS);
  s_resolvingCallstack = callstack;
  s_symbolFileCallback = NULL;
  Callstack_ResolveSymbolsInternal();
  Sys_LeaveCriticalSection(CRITSECT_CALLSTACK_SYMBOLS);
}

/*
==============
Callstack_ResolveSymbolsInternal
==============
*/
void Callstack_ResolveSymbolsInternal()
{
  int v0; 
  unsigned int *p_size; 
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  __int64 v4; 
  void *FileW; 
  __int64 v7; 
  _OVERLAPPED mapOverlapped; 

  memset_0(s_moduleAddresses, 0, sizeof(s_moduleAddresses));
  s_moduleAddressCount = 0;
  if ( !Sys_ModuleInfo_EnumModules((void (__fastcall *)(HINSTANCE__ *, const _MODULEINFO *))Callstack_InitializeModuleAddressesCallback) )
    Com_PrintError(0, "Sys_ModuleInfo_EnumModules failed\n");
  v0 = 0;
  if ( s_moduleAddressCount > 0 )
  {
    p_size = &s_moduleAddresses[0].size;
    do
    {
      v2 = *((_QWORD *)p_size - 1);
      if ( v2 )
      {
        v3 = *p_size;
        Core_strcpy(mapFileName, 0x800ui64, s_moduleAddresses[v0].name);
        v4 = -1i64;
        while ( mapFileName[++v4] != 0 )
          ;
        mapFileName[(unsigned int)(v4 - 3)] = 109;
        mapFileName[(unsigned int)(v4 - 2)] = 97;
        mapFileName[(unsigned int)(v4 - 1)] = 112;
        FileW = CreateFileW(mapFileName, 0x80000000, 1u, NULL, 3u, 0x68000000u, NULL);
        memset(&mapOverlapped, 0, sizeof(mapOverlapped));
        if ( FileW != (void *)-1i64 )
        {
          Core_strcpy(mapName, 0x800ui64, mapFileName);
          v7 = (unsigned int)(v4 - 4);
          if ( (unsigned int)v7 >= 0x800 )
          {
            j___report_rangecheckfailure(v7);
            JUMPOUT(0x140BFD769i64);
          }
          s_lineBufferStartPos = 0;
          mapName[v7] = 0;
          s_lineBufferEndPos = 0;
          Callstack_ParsePdbMapFile(FileW, &mapOverlapped, v2, v3, mapName);
          CloseHandle(FileW);
        }
      }
      ++v0;
      p_size += 68;
    }
    while ( v0 < s_moduleAddressCount );
  }
}

/*
==============
Callstack_SanitizeTemplates
==============
*/
void Callstack_SanitizeTemplates(char *str)
{
  char *v2; 
  char v3; 
  char *v4; 
  char v5; 
  int v6; 
  const char *v7; 
  __int64 v8; 
  char *v9; 
  char v10; 
  signed __int64 v11; 
  char v12; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_symbols_msvc.cpp", 223, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  v2 = strchr_0(str, 60);
  if ( !v2 )
    return;
  do
  {
    v3 = v2[1];
    v4 = v2 + 1;
    v5 = 0;
    v6 = 1;
    v7 = v2 + 1;
    if ( !v3 )
      goto LABEL_29;
    while ( 1 )
    {
      if ( v3 == 60 )
      {
        ++v6;
        goto LABEL_33;
      }
      if ( v3 != 62 )
      {
        if ( v3 == 32 )
          v5 = 1;
        goto LABEL_33;
      }
      if ( !--v6 )
        break;
LABEL_33:
      v3 = *++v7;
      if ( !v3 )
        goto LABEL_29;
    }
    v8 = v7 - v2 - 1;
    if ( (unsigned __int64)(v8 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v8, "signed", v7 - v2 - 1) )
      __debugbreak();
    if ( (int)v8 > 0 && (v5 || (int)v8 > 32) )
    {
      v9 = v4;
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_symbols_msvc.cpp", 201, ASSERT_TYPE_ASSERT, "(dest)", (const char *)&queryFormat, "dest") )
        __debugbreak();
      if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_symbols_msvc.cpp", 203, ASSERT_TYPE_ASSERT, "(*dest)", (const char *)&queryFormat, "*dest") )
        __debugbreak();
      if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_symbols_msvc.cpp", 204, ASSERT_TYPE_ASSERT, "(*src)", (const char *)&queryFormat, "*src") )
        __debugbreak();
      v10 = *v7;
      *v4 = *v7;
      if ( v10 )
      {
        v11 = v7 - v4;
        do
        {
          v12 = (v9++)[v11 + 1];
          *v9 = v12;
        }
        while ( v12 );
      }
      v7 = v4;
    }
LABEL_29:
    v2 = strchr_0(v7, 60);
  }
  while ( v2 );
}

