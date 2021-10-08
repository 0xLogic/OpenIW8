/*
==============
DB_BinaryPatch_CopyData
==============
*/

void __fastcall DB_BinaryPatch_CopyData(XZoneTemporaryLoadData *tempData, unsigned __int8 *posIn, const unsigned __int64 size)
{
  ?DB_BinaryPatch_CopyData@@YAXAEAUXZoneTemporaryLoadData@@PEAE_K@Z(tempData, posIn, size);
}

/*
==============
DB_BinaryPatch_GetBDiffWindowSizeAlloc
==============
*/

unsigned __int64 __fastcall DB_BinaryPatch_GetBDiffWindowSizeAlloc(const BDiffWindowSizes *windowSizes)
{
  return ?DB_BinaryPatch_GetBDiffWindowSizeAlloc@@YA_KAEBUBDiffWindowSizes@@@Z(windowSizes);
}

/*
==============
DB_BinaryPatch_BeginLoad
==============
*/

void __fastcall DB_BinaryPatch_BeginLoad(XZoneTemporaryLoadData *tempData)
{
  ?DB_BinaryPatch_BeginLoad@@YAXAEAUXZoneTemporaryLoadData@@@Z(tempData);
}

/*
==============
DB_BinaryPatch_FinishLoad
==============
*/

void __fastcall DB_BinaryPatch_FinishLoad(const XZoneTemporaryLoadData *tempData)
{
  ?DB_BinaryPatch_FinishLoad@@YAXAEBUXZoneTemporaryLoadData@@@Z(tempData);
}

/*
==============
DB_BinaryPatch_MemSetClear
==============
*/

void __fastcall DB_BinaryPatch_MemSetClear(DBBinaryPatchStream *outStream)
{
  ?DB_BinaryPatch_MemSetClear@@YAXAEAUDBBinaryPatchStream@@@Z(outStream);
}

/*
==============
DB_BinaryPatch_SetWindowAllocs
==============
*/

void __fastcall DB_BinaryPatch_SetWindowAllocs(DBBinaryPatchStream *outStream, const BDiffWindowSizes *windowSizes, unsigned __int8 *mem, const unsigned __int64 memSize)
{
  ?DB_BinaryPatch_SetWindowAllocs@@YAXAEAUDBBinaryPatchStream@@AEBUBDiffWindowSizes@@PEAE_K@Z(outStream, windowSizes, mem, memSize);
}

/*
==============
DB_BinaryPatch_BeginLoad
==============
*/
void DB_BinaryPatch_BeginLoad(XZoneTemporaryLoadData *tempData)
{
  const char *CurrentZoneLoadName; 
  unsigned int i; 
  DBBinaryPatchStream *v4; 
  char *v5; 
  unsigned __int64 v6; 
  DBBinaryPatchStream **v7; 
  DB_AsyncIWFileLoad *residentLoader; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 387, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( tempData->openData.diffCount )
  {
    CurrentZoneLoadName = DB_Zones_GetCurrentZoneLoadName();
    Com_Printf(10, "DB_BinaryPatch_BeginLoad() for '%s'\n", CurrentZoneLoadName);
    for ( i = 0; i < tempData->openData.diffCount; ++i )
    {
      if ( !tempData->patchStreams[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 398, ASSERT_TYPE_ASSERT, "(tempData.patchStreams[i])", (const char *)&queryFormat, "tempData.patchStreams[i]") )
        __debugbreak();
      v4 = tempData->patchStreams[i];
      v5 = &tempData->openData.baseFastfile.name[512 * (unsigned __int64)i];
      v6 = *((_QWORD *)v5 + 80);
      v4->diffUncompSize = v6;
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 403, ASSERT_TYPE_ASSERT, "(stream.diffUncompSize > 0)", (const char *)&queryFormat, "stream.diffUncompSize > 0") )
        __debugbreak();
      if ( i )
      {
        if ( v4->prevStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 408, ASSERT_TYPE_ASSERT, "(stream.prevStream == nullptr)", (const char *)&queryFormat, "stream.prevStream == nullptr") )
          __debugbreak();
        v7 = &tempData->patchStreams[i - 1];
        if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 409, ASSERT_TYPE_ASSERT, "(tempData.patchStreams[i-1])", (const char *)&queryFormat, "tempData.patchStreams[i-1]") )
          __debugbreak();
        v4->prevStream = *v7;
        residentLoader = NULL;
      }
      else
      {
        v4->prevStream = NULL;
        residentLoader = tempData->residentLoader;
      }
      v4->baseFastfileLoad = residentLoader;
      DB_AsyncIWFileLoad::InflateInit(&v4->asyncFileLoad);
      v9 = (*((_QWORD *)v5 + 76) + 4095i64) & 0xFFFFFFFFFFFFF000ui64;
      if ( v9 < 0x10000 )
        v9 = 0x10000i64;
      v10 = (*((_QWORD *)v5 + 78) + 4095i64) & 0xFFFFFFFFFFFFF000ui64;
      if ( v10 < 0x10000 )
        v10 = 0x10000i64;
      v11 = v10 + v9;
      v12 = (*((_QWORD *)v5 + 77) + 4095i64) & 0xFFFFFFFFFFFFF000ui64;
      if ( v12 < 0x10000 )
        v12 = 0x10000i64;
      Com_Printf(10, "PATCH MEMORY %s(%s): %zukb temp window size needed\n", CurrentZoneLoadName, v5 + 456, (v11 + v12) >> 10);
    }
  }
}

/*
==============
DB_BinaryPatch_CopyData
==============
*/
void DB_BinaryPatch_CopyData(XZoneTemporaryLoadData *tempData, unsigned __int8 *posIn, const unsigned __int64 size)
{
  __int64 v6; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 363, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !posIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 364, ASSERT_TYPE_ASSERT, "(posIn)", (const char *)&queryFormat, "posIn") )
    __debugbreak();
  if ( !tempData->openData.diffCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 366, ASSERT_TYPE_ASSERT, "(tempData.openData.diffCount >= 1)", (const char *)&queryFormat, "tempData.openData.diffCount >= 1") )
    __debugbreak();
  v6 = tempData->openData.diffCount - 1;
  if ( !tempData->patchStreams[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 369, ASSERT_TYPE_ASSERT, "(tempData.patchStreams[lastIndex])", (const char *)&queryFormat, "tempData.patchStreams[lastIndex]") )
    __debugbreak();
  DB_BinaryPatch_CopyDataInternal(tempData->patchStreams[v6], posIn, size);
}

/*
==============
DB_BinaryPatch_CopyDataInternal
==============
*/
void DB_BinaryPatch_CopyDataInternal(DBBinaryPatchStream *r_stream, unsigned __int8 *const posIn, const unsigned __int64 size)
{
  unsigned __int64 v6; 
  int v9; 
  int v10; 
  unsigned __int64 destWindowReadOffset; 
  unsigned __int64 destWindowSize; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  int v19; 
  unsigned __int64 v20; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v6 = size;
  _RDI = r_stream;
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 305, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !posIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 306, ASSERT_TYPE_ASSERT, "(posIn)", (const char *)&queryFormat, "posIn") )
    __debugbreak();
  ProfLoad_DB_Begin("DB_BinaryPatch_CopyDataInternal");
  v9 = 0;
  if ( (v6 > 0x7FFFFFFFFFFFFFFFi64 || v6 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v6, "unsigned", v6) )
    __debugbreak();
  v10 = v6;
  if ( (_DWORD)v6 )
  {
    destWindowReadOffset = _RDI->destWindowReadOffset;
    __asm { vmovsd  xmm6, cs:__real@43f0000000000000 }
    do
    {
      destWindowSize = _RDI->destWindowSize;
      v14 = destWindowReadOffset;
      if ( destWindowSize == destWindowReadOffset )
      {
        _RDI->destWindowReadOffset = 0i64;
        v15 = __rdtsc();
        if ( !bdiff(_RDI, &_RDI->diffState, (unsigned __int8 *(__fastcall *)(DBBinaryPatchStream *, unsigned __int64, unsigned __int64))DB_BinaryPatch_LoadSourceData, (unsigned __int8 *(__fastcall *)(DBBinaryPatchStream *, unsigned __int64, unsigned __int64, unsigned __int64 *))DB_BinaryPatch_LoadPatchData, (unsigned __int8 *(__fastcall *)(DBBinaryPatchStream *, unsigned __int64))DB_BinaryPatch_SetupDestData) )
        {
          Com_Printf(0, "BDiff failed\n");
          Com_Printf(0, "r_stream.diffState.eof        : %u\n", _RDI->diffState.eof);
          Com_Printf(0, "r_stream.diffState.error      : %u\n", _RDI->diffState.error);
          Com_Printf(0, "r_stream.diffState.error_code : %u\n", _RDI->diffState.error_code);
          DB_AsyncIWFileLoad::DirtyDiscError(&_RDI->asyncFileLoad, PatchBDiff, _RDI->diffState.error_code);
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, rax
        }
        if ( (__int64)(__rdtsc() - v15) < 0 )
          __asm { vaddsd  xmm0, xmm0, xmm6 }
        __asm
        {
          vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
          vaddsd  xmm0, xmm0, qword ptr [rdi+1A0h]
          vmovsd  qword ptr [rdi+1A0h], xmm0
        }
        LODWORD(destWindowSize) = _RDI->destWindowSize;
        LODWORD(destWindowReadOffset) = _RDI->destWindowReadOffset;
        v14 = _RDI->destWindowReadOffset;
      }
      v19 = destWindowSize - destWindowReadOffset;
      if ( v10 < v19 )
        v19 = v10;
      v20 = __rdtsc();
      memcpy_0(posIn, &_RDI->destWindow[v14], v19);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
      }
      if ( (__int64)(__rdtsc() - v20) < 0 )
        __asm { vaddsd  xmm0, xmm0, xmm6 }
      __asm
      {
        vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
        vaddsd  xmm0, xmm0, qword ptr [rdi+198h]
        vmovsd  qword ptr [rdi+198h], xmm0
      }
      posIn += v19;
      v9 += v19;
      _RDI->destWindowReadOffset += v19;
      destWindowReadOffset = _RDI->destWindowReadOffset;
      v10 -= v19;
    }
    while ( v10 );
    v6 = size;
  }
  if ( v9 != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 357, ASSERT_TYPE_ASSERT, "(sizeCopied == size)", (const char *)&queryFormat, "sizeCopied == size") )
    __debugbreak();
  ProfLoad_DB_End();
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
}

/*
==============
DB_BinaryPatch_FinishLoad
==============
*/
void DB_BinaryPatch_FinishLoad(const XZoneTemporaryLoadData *tempData)
{
  const char *CurrentZoneLoadName; 
  __int64 i; 
  unsigned __int64 size; 
  unsigned __int64 v9; 
  char *fmt; 
  __int64 v11; 
  double v12; 
  __int128 v13; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 434, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( tempData->openData.diffCount )
  {
    CurrentZoneLoadName = DB_Zones_GetCurrentZoneLoadName();
    Com_Printf(10, "DB_BinaryPatch_FinishLoad() for '%s'\n", CurrentZoneLoadName);
    for ( i = 0i64; (unsigned int)i < tempData->openData.diffCount; i = (unsigned int)(i + 1) )
    {
      if ( !tempData->patchStreams[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 445, ASSERT_TYPE_ASSERT, "(tempData.patchStreams[i])", (const char *)&queryFormat, "tempData.patchStreams[i]") )
        __debugbreak();
      _RBX = tempData->patchStreams[i];
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+198h]
        vmovsd  xmm1, qword ptr [rbx+190h]
        vmovups [rsp+58h+var_28], xmm0
        vmovsd  xmm0, qword ptr [rbx+188h]
        vmovsd  [rsp+58h+var_30], xmm0
        vmovsd  [rsp+58h+fmt], xmm1
      }
      Com_Printf(10, "PATCH TIME %s(%s): %.0fms source read, %.0fms patch read, %.0fms dest copy %.0fms diff time\n", CurrentZoneLoadName, tempData->openData.diff[(unsigned __int64)(unsigned int)i].file.name, *(double *)&fmt, v12, *(double *)&v13, *((double *)&v13 + 1));
      DB_AsyncIWFileLoad::InflateShutdown(&_RBX->asyncFileLoad);
      DB_AsyncIWFileLoad::Shutdown(&_RBX->asyncFileLoad);
    }
    size = tempData->archiveBlocks.blocks[0].size;
    v9 = tempData->openData.topHeader.xfileHeader.size;
    LODWORD(v11) = 100 * size / v9;
    Com_Printf(10, "PATCH MEMORY %s: %zukb overhead, %zukb fastfile size (%d%%)\n", CurrentZoneLoadName, size >> 10, v9 >> 10, v11);
  }
}

/*
==============
DB_BinaryPatch_GetBDiffWindowSizeAlloc
==============
*/
unsigned __int64 DB_BinaryPatch_GetBDiffWindowSizeAlloc(const BDiffWindowSizes *windowSizes)
{
  unsigned __int64 v1; 
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 

  v1 = (windowSizes->destWindow + 4095) & 0xFFFFFFFFFFFFF000ui64;
  if ( v1 < 0x10000 )
    v1 = 0x10000i64;
  v2 = (windowSizes->diffWindow + 4095) & 0xFFFFFFFFFFFFF000ui64;
  if ( v2 < 0x10000 )
    v2 = 0x10000i64;
  v3 = v2 + v1;
  v4 = (windowSizes->sourceWindow + 4095) & 0xFFFFFFFFFFFFF000ui64;
  if ( v4 < 0x10000 )
    v4 = 0x10000i64;
  return v3 + v4;
}

/*
==============
DB_BinaryPatch_LoadPatchData
==============
*/
unsigned __int8 *DB_BinaryPatch_LoadPatchData(DBBinaryPatchStream *const stream, unsigned __int64 offset, const unsigned __int64 size, unsigned __int64 *const pOffset)
{
  size_t patchWindowSize; 
  unsigned __int64 patchWindowOffset; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int8 *v15; 
  unsigned __int64 v16; 

  _RDI = stream;
  if ( !stream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 112, ASSERT_TYPE_ASSERT, "(stream)", (const char *)&queryFormat, "stream") )
    __debugbreak();
  if ( offset )
    _RDI->patchWindowOffsetLast = offset;
  else
    offset = _RDI->patchWindowOffsetLast;
  if ( pOffset )
    *pOffset = offset;
  if ( offset < _RDI->patchWindowOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 130, ASSERT_TYPE_ASSERT, "(offset >= r_stream.patchWindowOffset)", (const char *)&queryFormat, "offset >= r_stream.patchWindowOffset") )
    __debugbreak();
  patchWindowSize = _RDI->patchWindowSize;
  patchWindowOffset = _RDI->patchWindowOffset;
  if ( offset + size <= patchWindowSize + patchWindowOffset )
    return &_RDI->patchWindow[offset - patchWindowOffset];
  v12 = 0i64;
  if ( offset != patchWindowOffset )
  {
    if ( offset >= patchWindowSize + patchWindowOffset )
    {
      v12 = offset - patchWindowSize - patchWindowOffset;
      patchWindowSize = 0i64;
    }
    else
    {
      patchWindowSize -= offset - patchWindowOffset;
      memmove_0(_RDI->patchWindow, &_RDI->patchWindow[offset - patchWindowOffset], patchWindowSize);
    }
    _RDI->patchWindowOffset = offset;
    if ( v12 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 156, ASSERT_TYPE_ASSERT, "(skip == 0)", (const char *)&queryFormat, "skip == 0") )
        __debugbreak();
    }
  }
  if ( size && patchWindowSize < size )
  {
    if ( size > _RDI->patchWindowAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 164, ASSERT_TYPE_ASSERT, "(size <= r_stream.patchWindowAllocated)", (const char *)&queryFormat, "size <= r_stream.patchWindowAllocated") )
      __debugbreak();
    if ( patchWindowSize + offset > _RDI->diffUncompSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 166, ASSERT_TYPE_ASSERT, "(( offset + memInWindow ) <= r_stream.diffUncompSize)", (const char *)&queryFormat, "( offset + memInWindow ) <= r_stream.diffUncompSize") )
      __debugbreak();
    v13 = _RDI->diffUncompSize - patchWindowSize - offset;
    if ( v13 && size > patchWindowSize )
    {
      v14 = size - patchWindowSize;
      if ( v14 <= v13 )
        v13 = v14;
      v15 = &_RDI->patchWindow[patchWindowSize];
      patchWindowSize += v13;
      if ( patchWindowSize > _RDI->patchWindowAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 180, ASSERT_TYPE_ASSERT, "(( memInWindow + getSize ) <= r_stream.patchWindowAllocated)", (const char *)&queryFormat, "( memInWindow + getSize ) <= r_stream.patchWindowAllocated") )
        __debugbreak();
      v16 = __rdtsc();
      DB_AsyncIWFileLoad::ReadDataAuthCmp(&_RDI->asyncFileLoad, v15, v13);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
      }
      if ( (__int64)(__rdtsc() - v16) < 0 )
        __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
      __asm
      {
        vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
        vaddsd  xmm1, xmm0, qword ptr [rdi+188h]
      }
      _RDI->patchDataOffset += v13;
      __asm { vmovsd  qword ptr [rdi+188h], xmm1 }
    }
    _RDI->patchWindowSize = patchWindowSize;
    if ( !patchWindowSize )
      return 0i64;
  }
  else
  {
    _RDI->patchWindowSize = patchWindowSize;
  }
  return _RDI->patchWindow;
}

/*
==============
DB_BinaryPatch_LoadSourceData
==============
*/
unsigned __int8 *DB_BinaryPatch_LoadSourceData(DBBinaryPatchStream *stream, const unsigned __int64 offset, const unsigned __int64 size)
{
  size_t sourceWindowSize; 
  unsigned __int64 sourceWindowOffset; 
  unsigned __int8 *result; 
  unsigned __int64 v10; 
  void (__fastcall *v11)(DBBinaryPatchStream *, unsigned __int8 *, unsigned __int64); 
  unsigned __int64 v12; 
  unsigned __int64 v13; 

  _RBX = stream;
  if ( !stream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 230, ASSERT_TYPE_ASSERT, "(stream)", (const char *)&queryFormat, "stream") )
    __debugbreak();
  if ( offset < _RBX->sourceWindowOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 235, ASSERT_TYPE_ASSERT, "(offset >= r_stream.sourceWindowOffset)", (const char *)&queryFormat, "offset >= r_stream.sourceWindowOffset") )
    __debugbreak();
  sourceWindowSize = _RBX->sourceWindowSize;
  sourceWindowOffset = _RBX->sourceWindowOffset;
  if ( offset + size <= sourceWindowSize + sourceWindowOffset )
    return &_RBX->sourceWindow[offset - sourceWindowOffset];
  v10 = 0i64;
  if ( offset != sourceWindowOffset )
  {
    if ( offset >= sourceWindowSize + sourceWindowOffset )
    {
      v10 = offset - sourceWindowSize - sourceWindowOffset;
      sourceWindowSize = 0i64;
    }
    else
    {
      sourceWindowSize -= offset - sourceWindowOffset;
      memmove_0(_RBX->sourceWindow, &_RBX->sourceWindow[offset - sourceWindowOffset], sourceWindowSize);
    }
    _RBX->sourceWindowOffset = offset;
  }
  if ( size > _RBX->sourceWindowAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 261, ASSERT_TYPE_ASSERT, "(size <= r_stream.sourceWindowAllocated)", (const char *)&queryFormat, "size <= r_stream.sourceWindowAllocated") )
    __debugbreak();
  v11 = (void (__fastcall *)(DBBinaryPatchStream *, unsigned __int8 *, unsigned __int64))DB_BinaryPatch_ReadOriginalFastfile;
  if ( _RBX->prevStream )
    v11 = (void (__fastcall *)(DBBinaryPatchStream *, unsigned __int8 *, unsigned __int64))DB_BinaryPatch_ReadPrevStreamOutput;
  v12 = __rdtsc();
  if ( v10 )
    DB_BinaryPatch_SkipSource(_RBX, v10, v11);
  _RBX->sourceWindowSize = size;
  if ( sourceWindowSize > size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 276, ASSERT_TYPE_ASSERT, "(memInWindow <= size)", (const char *)&queryFormat, "memInWindow <= size") )
    __debugbreak();
  v13 = size - sourceWindowSize;
  if ( v13 )
    *(double *)&_XMM0 = ((double (__fastcall *)(DBBinaryPatchStream *, unsigned __int8 *, unsigned __int64))v11)(_RBX, &_RBX->sourceWindow[sourceWindowSize], v13);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (__int64)(__rdtsc() - v12) < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vaddsd  xmm1, xmm0, qword ptr [rbx+190h]
  }
  result = _RBX->sourceWindow;
  __asm { vmovsd  qword ptr [rbx+190h], xmm1 }
  return result;
}

/*
==============
DB_BinaryPatch_MemSetClear
==============
*/
void DB_BinaryPatch_MemSetClear(DBBinaryPatchStream *outStream)
{
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 378, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  memset_0(outStream, 0, sizeof(DBBinaryPatchStream));
}

/*
==============
DB_BinaryPatch_ReadOriginalFastfile
==============
*/
void DB_BinaryPatch_ReadOriginalFastfile(DBBinaryPatchStream *r_stream, unsigned __int8 *const dest, const unsigned __int64 size)
{
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 207, ASSERT_TYPE_ASSERT, "(dest)", (const char *)&queryFormat, "dest") )
    __debugbreak();
  if ( r_stream->prevStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 208, ASSERT_TYPE_ASSERT, "(r_stream.prevStream == nullptr)", (const char *)&queryFormat, "r_stream.prevStream == nullptr") )
    __debugbreak();
  if ( !r_stream->baseFastfileLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 212, ASSERT_TYPE_ASSERT, "(r_stream.baseFastfileLoad)", (const char *)&queryFormat, "r_stream.baseFastfileLoad") )
    __debugbreak();
  DB_AsyncIWFileLoad::ReadDataAuthCmp(r_stream->baseFastfileLoad, dest, size);
}

/*
==============
DB_BinaryPatch_ReadPrevStreamOutput
==============
*/
void DB_BinaryPatch_ReadPrevStreamOutput(DBBinaryPatchStream *r_stream, unsigned __int8 *const dest, const unsigned __int64 size)
{
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 219, ASSERT_TYPE_ASSERT, "(dest)", (const char *)&queryFormat, "dest") )
    __debugbreak();
  if ( !r_stream->prevStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 220, ASSERT_TYPE_ASSERT, "(r_stream.prevStream != nullptr)", (const char *)&queryFormat, "r_stream.prevStream != nullptr") )
    __debugbreak();
  DB_BinaryPatch_CopyDataInternal(r_stream->prevStream, dest, size);
}

/*
==============
DB_BinaryPatch_SetWindowAllocs
==============
*/
void DB_BinaryPatch_SetWindowAllocs(DBBinaryPatchStream *outStream, const BDiffWindowSizes *windowSizes, unsigned __int8 *mem, const unsigned __int64 memSize)
{
  unsigned __int64 v8; 
  unsigned __int8 *v9; 
  unsigned __int64 v10; 
  unsigned __int8 *v11; 
  unsigned __int64 v12; 

  if ( !mem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 483, ASSERT_TYPE_ASSERT, "(mem)", (const char *)&queryFormat, "mem") )
    __debugbreak();
  outStream->destWindow = mem;
  v8 = (windowSizes->destWindow + 4095) & 0xFFFFFFFFFFFFF000ui64;
  if ( v8 < 0x10000 )
    v8 = 0x10000i64;
  outStream->destWindowAllocated = v8;
  v9 = &mem[v8];
  outStream->patchWindow = &mem[v8];
  v10 = (windowSizes->diffWindow + 4095) & 0xFFFFFFFFFFFFF000ui64;
  if ( v10 < 0x10000 )
    v10 = 0x10000i64;
  v11 = &v9[v10];
  outStream->patchWindowAllocated = v10;
  outStream->sourceWindow = v11;
  v12 = (windowSizes->sourceWindow + 4095) & 0xFFFFFFFFFFFFF000ui64;
  if ( v12 < 0x10000 )
    v12 = 0x10000i64;
  outStream->sourceWindowAllocated = v12;
  if ( (__int64)&v11[v12 - (_QWORD)mem] > (__int64)memSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 499, ASSERT_TYPE_ASSERT, "(ptr - mem <= static_cast<ptrdiff_t>( memSize ))", (const char *)&queryFormat, "ptr - mem <= static_cast<ptrdiff_t>( memSize )") )
    __debugbreak();
}

/*
==============
DB_BinaryPatch_SetupDestData
==============
*/
unsigned __int8 *DB_BinaryPatch_SetupDestData(DBBinaryPatchStream *stream, const unsigned __int64 size)
{
  unsigned __int8 *result; 

  if ( !stream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 292, ASSERT_TYPE_ASSERT, "(stream)", (const char *)&queryFormat, "stream") )
    __debugbreak();
  if ( stream->destWindowAllocated < size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_binarypatch_load.cpp", 297, ASSERT_TYPE_ASSERT, "(r_stream.destWindowAllocated >= size)", (const char *)&queryFormat, "r_stream.destWindowAllocated >= size") )
    __debugbreak();
  result = stream->destWindow;
  stream->destWindowSize = size;
  return result;
}

/*
==============
DB_BinaryPatch_SkipSource
==============
*/
void DB_BinaryPatch_SkipSource(DBBinaryPatchStream *r_stream, unsigned __int64 size, void (*func)(DBBinaryPatchStream *, unsigned __int8 *, unsigned __int64))
{
  unsigned __int64 v4; 
  unsigned __int64 v6; 
  char v7[10240]; 

  if ( size )
  {
    v4 = size;
    do
    {
      v6 = 10240i64;
      if ( v4 < 0x2800 )
        v6 = v4;
      func(r_stream, (unsigned __int8 *)v7, v6);
      v4 -= v6;
    }
    while ( v4 );
  }
}

