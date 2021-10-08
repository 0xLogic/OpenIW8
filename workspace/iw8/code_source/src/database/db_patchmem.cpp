/*
==============
DB_PopSharedData
==============
*/

void DB_PopSharedData(void)
{
  ?DB_PopSharedData@@YAXXZ();
}

/*
==============
DB_PatchMem_UpdateForPostload
==============
*/

void DB_PatchMem_UpdateForPostload(void)
{
  ?DB_PatchMem_UpdateForPostload@@YAXXZ();
}

/*
==============
DB_PatchMem_FixStreamAlignment
==============
*/

void __fastcall DB_PatchMem_FixStreamAlignment(unsigned __int64 alignmentMinusOne)
{
  ?DB_PatchMem_FixStreamAlignment@@YAX_K@Z(alignmentMinusOne);
}

/*
==============
DB_PatchMem_BeginPostload
==============
*/

void DB_PatchMem_BeginPostload(void)
{
  ?DB_PatchMem_BeginPostload@@YAXXZ();
}

/*
==============
DB_PatchMem_PopAsset
==============
*/

void DB_PatchMem_PopAsset(void)
{
  ?DB_PatchMem_PopAsset@@YAXXZ();
}

/*
==============
DB_PatchMem_BeginLoad
==============
*/

void DB_PatchMem_BeginLoad(void)
{
  ?DB_PatchMem_BeginLoad@@YAXXZ();
}

/*
==============
DB_PatchMem_EndLoad
==============
*/

void DB_PatchMem_EndLoad(void)
{
  ?DB_PatchMem_EndLoad@@YAXXZ();
}

/*
==============
DB_PatchMem_SetRewindDataFromCopy
==============
*/

void __fastcall DB_PatchMem_SetRewindDataFromCopy(const DB_PatchMem_RewindData *rewindData)
{
  ?DB_PatchMem_SetRewindDataFromCopy@@YAXAEBUDB_PatchMem_RewindData@@@Z(rewindData);
}

/*
==============
DB_PatchMem_PostLoad_PushAsset
==============
*/

void __fastcall DB_PatchMem_PostLoad_PushAsset(const int type, void *const data)
{
  ?DB_PatchMem_PostLoad_PushAsset@@YAXHQEAX@Z(type, data);
}

/*
==============
DB_PatchMem_PopDevAssetReplacement
==============
*/

void DB_PatchMem_PopDevAssetReplacement(void)
{
  ?DB_PatchMem_PopDevAssetReplacement@@YAXXZ();
}

/*
==============
DB_PatchMem_PushAsset
==============
*/

void __fastcall DB_PatchMem_PushAsset(const int type, void *const data)
{
  ?DB_PatchMem_PushAsset@@YAXHQEAX@Z(type, data);
}

/*
==============
DB_PushSharedData
==============
*/

void DB_PushSharedData(void)
{
  ?DB_PushSharedData@@YAXXZ();
}

/*
==============
DB_PatchMem_TryDiscard
==============
*/

void __fastcall DB_PatchMem_TryDiscard(XAsset *asset)
{
  ?DB_PatchMem_TryDiscard@@YAXPEAUXAsset@@@Z(asset);
}

/*
==============
DB_PatchMem_ValidatePostloadStream
==============
*/

void __fastcall DB_PatchMem_ValidatePostloadStream(DBStreamStart streamStart, const void *ptr, unsigned __int64 size)
{
  ?DB_PatchMem_ValidatePostloadStream@@YAXW4DBStreamStart@@PEBX_K@Z(streamStart, ptr, size);
}

/*
==============
DB_PatchMem_GetAssetRelativePointerOffset
==============
*/

unsigned int __fastcall DB_PatchMem_GetAssetRelativePointerOffset(unsigned int streamIndex)
{
  return ?DB_PatchMem_GetAssetRelativePointerOffset@@YAII@Z(streamIndex);
}

/*
==============
DB_PatchMem_AdjustOffsetForDiscards
==============
*/

void __fastcall DB_PatchMem_AdjustOffsetForDiscards(unsigned int streamIndex, unsigned int *streamOffsetPtr)
{
  ?DB_PatchMem_AdjustOffsetForDiscards@@YAXIPEAI@Z(streamIndex, streamOffsetPtr);
}

/*
==============
DB_PatchMem_Init
==============
*/

void DB_PatchMem_Init(void)
{
  ?DB_PatchMem_Init@@YAXXZ();
}

/*
==============
DB_PatchMem_GetStreamOffset
==============
*/

unsigned int __fastcall DB_PatchMem_GetStreamOffset(unsigned int streamIndex)
{
  return ?DB_PatchMem_GetStreamOffset@@YAII@Z(streamIndex);
}

/*
==============
DB_PatchMem_GetRewindDataCopy
==============
*/

void __fastcall DB_PatchMem_GetRewindDataCopy(DB_PatchMem_RewindData *rewindData)
{
  ?DB_PatchMem_GetRewindDataCopy@@YAXAEAUDB_PatchMem_RewindData@@@Z(rewindData);
}

/*
==============
DB_PatchMem_PushDevAssetReplacement
==============
*/

void DB_PatchMem_PushDevAssetReplacement(void)
{
  ?DB_PatchMem_PushDevAssetReplacement@@YAXXZ();
}

/*
==============
DB_PatchMem_AdjustOffsetForDiscards
==============
*/
void DB_PatchMem_AdjustOffsetForDiscards(unsigned int streamIndex, unsigned int *streamOffsetPtr)
{
  __int64 v2; 
  RewindStreamData *v4; 
  unsigned int v5; 
  unsigned int historyWalkIndex; 
  unsigned int RewindBinary; 
  __int64 v8; 

  v2 = streamIndex;
  if ( !streamOffsetPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 795, ASSERT_TYPE_ASSERT, "(streamOffsetPtr)", (const char *)&queryFormat, "streamOffsetPtr") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xB )
  {
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 796, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( g_streamPosGlob.posArray ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( g_streamPosGlob.posArray )\n\t%i not in [0, %i)", v8, 11) )
      __debugbreak();
  }
  v4 = s_rewind.data[v2];
  if ( v4 )
  {
    v5 = *streamOffsetPtr;
    if ( s_rewindPostload )
      historyWalkIndex = v4->historyWalkIndex;
    else
      historyWalkIndex = v4->rewindHistorySize;
    if ( historyWalkIndex > v4->rewindHistorySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 809, ASSERT_TYPE_ASSERT, "(historySize <= rewindData.rewindHistorySize)", (const char *)&queryFormat, "historySize <= rewindData.rewindHistorySize") )
      __debugbreak();
    if ( historyWalkIndex )
    {
      if ( v4->currentRewind != v4->rewindHistory[historyWalkIndex - 1].rewind && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 815, ASSERT_TYPE_ASSERT, "(rewindData.currentRewind == rewindData.rewindHistory[historySize-1].rewind)", (const char *)&queryFormat, "rewindData.currentRewind == rewindData.rewindHistory[historySize-1].rewind") )
        __debugbreak();
      if ( v5 < v4->lastExpectedOffset )
        RewindBinary = DB_PatchMem_FindRewindBinary(v4, v5);
      else
        RewindBinary = v4->currentRewind;
      if ( RewindBinary > v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 827, ASSERT_TYPE_ASSERT, "(rewind <= currOffset)", (const char *)&queryFormat, "rewind <= currOffset") )
        __debugbreak();
      *streamOffsetPtr -= RewindBinary;
    }
  }
}

/*
==============
DB_PatchMem_BeginLoad
==============
*/
void DB_PatchMem_BeginLoad(void)
{
  unsigned __int64 *p_size; 
  DB_PatchMem_RewindData *v1; 
  __int64 v2; 
  RewindStreamData *v3; 
  unsigned __int64 v4; 

  if ( s_rewindPostload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 616, ASSERT_TYPE_ASSERT, "(!s_rewindPostload)", (const char *)&queryFormat, "!s_rewindPostload") )
    __debugbreak();
  p_size = &g_streamPosGlob.archiveBlocks.blocks[0].size;
  v1 = &s_rewind;
  v2 = 11i64;
  do
  {
    v3 = v1->data[0];
    if ( v1->data[0] )
    {
      *(_QWORD *)&v3->rewindHistorySize = 0i64;
      v3->lastActualAssetPos = NULL;
      *(_QWORD *)&v3->lastExpectedOffset = -1i64;
      v3->historyWalkIndex = 0;
      v4 = *p_size;
      if ( *p_size > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v4, "unsigned", *p_size) )
        __debugbreak();
      v3->streamSizeCheck = v4;
      v3->devAssetSavings = 0i64;
    }
    v1 = (DB_PatchMem_RewindData *)((char *)v1 + 8);
    p_size += 2;
    --v2;
  }
  while ( v2 );
  *(_QWORD *)&s_rewind.assets.stackPos = 0i64;
  s_rewind.assets.sharedDataPushCount = 0;
  *(_QWORD *)&s_rewind.failSizeUnsupportedStream = 0i64;
  s_rewind.failSizeSharedAsset = 0;
}

/*
==============
DB_PatchMem_BeginPostload
==============
*/
void DB_PatchMem_BeginPostload(void)
{
  unsigned int *p_currentRewind; 
  __int64 v1; 

  if ( g_dbPreloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1002, ASSERT_TYPE_ASSERT, "(!DB_IsPreloading())", (const char *)&queryFormat, "!DB_IsPreloading()") )
    __debugbreak();
  if ( s_rewindPostload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1007, ASSERT_TYPE_ASSERT, "(!s_rewindPostload)", (const char *)&queryFormat, "!s_rewindPostload") )
    __debugbreak();
  s_rewindPostload = 1;
  p_currentRewind = &s_rewind.dataAlloc[0].currentRewind;
  v1 = 3i64;
  do
  {
    if ( p_currentRewind[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1012, ASSERT_TYPE_ASSERT, "(s_rewind.dataAlloc[i].historyWalkIndex == 0)", (const char *)&queryFormat, "s_rewind.dataAlloc[i].historyWalkIndex == 0") )
      __debugbreak();
    *p_currentRewind = 0;
    *(_QWORD *)(p_currentRewind + 5) = 0i64;
    *(_QWORD *)(p_currentRewind + 3) = -1i64;
    p_currentRewind += 12298;
    --v1;
  }
  while ( v1 );
  *(_QWORD *)&s_rewind.failSizeUnsupportedStream = 0i64;
  s_rewind.failSizeSharedAsset = 0;
}

/*
==============
DB_PatchMem_EndLoad
==============
*/
void DB_PatchMem_EndLoad(void)
{
  unsigned int v0; 
  unsigned __int64 rewindHistorySize; 
  unsigned int v2; 
  DB_PatchMem_RewindData *v3; 
  unsigned __int64 *p_size; 
  RewindStreamData *v5; 
  unsigned __int64 currentRewind; 
  unsigned __int64 v7; 
  __int64 v8; 
  void *v9; 
  XZoneMemory *zoneMem; 
  unsigned __int64 v11; 
  unsigned int v12; 
  unsigned __int8 **p_alloc; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  XZoneMemoryAllocation *v18; 
  unsigned __int8 *v19; 
  unsigned __int64 v20; 
  bool v21; 
  unsigned __int64 v22; 
  XZoneMemory *v23; 
  unsigned __int64 v24; 
  const char *CurrentZoneLoadName; 
  __int64 v26; 
  unsigned int v27; 

  v0 = 0;
  v27 = 0;
  if ( s_rewind.assets.sharedDataPushCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 661, ASSERT_TYPE_ASSERT, "(s_rewind.assets.sharedDataPushCount == 0)", (const char *)&queryFormat, "s_rewind.assets.sharedDataPushCount == 0") )
    __debugbreak();
  if ( s_rewindPostload )
  {
    s_rewindPostload = 0;
  }
  else
  {
    rewindHistorySize = s_rewindHighwatermark;
    v2 = 0;
    v3 = &s_rewind;
    p_size = &g_streamPosGlob.archiveBlocks.blocks[0].size;
    do
    {
      v5 = v3->data[0];
      if ( v3->data[0] )
      {
        currentRewind = v5->currentRewind;
        if ( (_DWORD)currentRewind )
        {
          if ( currentRewind > *p_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 681, ASSERT_TYPE_ASSERT, "(rewindData.currentRewind <= g_streamPosGlob.archiveBlocks.blocks[i].size)", (const char *)&queryFormat, "rewindData.currentRewind <= g_streamPosGlob.archiveBlocks.blocks[i].size") )
            __debugbreak();
          v7 = v5->currentRewind;
          v8 = truncate_cast<unsigned int,unsigned __int64>(*p_size - v7);
          if ( DB_PatchMem_GetActualOffset(v2) != (_DWORD)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 685, ASSERT_TYPE_ASSERT, "(DB_PatchMem_GetActualOffset( i ) == offsetUnused)", (const char *)&queryFormat, "DB_PatchMem_GetActualOffset( i ) == offsetUnused") )
            __debugbreak();
          v9 = (void *)(*(p_size - 1) + v8);
          DebugWipe(v9, v7);
          zoneMem = g_streamPosGlob.zoneMem;
          v11 = (unsigned __int64)&g_streamPosGlob.archiveBlocks.blocks[v2].data[g_streamPosGlob.archiveBlocks.blocks[v2].size + 0xFFFF] & 0xFFFFFFFFFFFF0000ui64;
          if ( !g_streamPosGlob.zoneMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 500, ASSERT_TYPE_ASSERT, "(zoneMem)", (const char *)&queryFormat, "zoneMem") )
            __debugbreak();
          v12 = 0;
          p_alloc = &zoneMem->alloc[0].alloc;
          while ( (unsigned __int8 *)v11 != &p_alloc[1][(_QWORD)*p_alloc] )
          {
            ++v12;
            p_alloc += 3;
            if ( v12 >= 6 )
            {
              LODWORD(v26) = v2;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 514, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find DB allocation for stream %d. The stream needs to be at the end of the allocated block.", v26) )
                __debugbreak();
LABEL_23:
              v0 = v27;
              goto LABEL_24;
            }
          }
          v18 = &zoneMem->alloc[v12];
          if ( !v18 )
            goto LABEL_23;
          v19 = &v18->alloc[v18->size];
          v20 = ((unsigned __int64)v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64;
          if ( (_WORD)v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 700, ASSERT_TYPE_ASSERT, "(IsAligned( allocEndPtr, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( allocEndPtr, MEM_PHYSICAL_PAGE_SIZE )") )
            __debugbreak();
          v21 = (unsigned __int64)v19 <= v20;
          if ( (unsigned __int64)v19 < v20 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 701, ASSERT_TYPE_ASSERT, "(alignedEndPtr <= allocEndPtr)", (const char *)&queryFormat, "alignedEndPtr <= allocEndPtr") )
              __debugbreak();
            v21 = (unsigned __int64)v19 <= v20;
          }
          if ( v21 )
            goto LABEL_23;
          v22 = (unsigned __int64)&v19[-v20];
          if ( v22 > v18->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 706, ASSERT_TYPE_ASSERT, "(decommitSize <= foundAlloc->size)", (const char *)&queryFormat, "decommitSize <= foundAlloc->size") )
            __debugbreak();
          v23 = g_streamPosGlob.zoneMem;
          if ( !g_streamPosGlob.zoneMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 709, ASSERT_TYPE_ASSERT, "(zoneMem)", (const char *)&queryFormat, "zoneMem") )
            __debugbreak();
          DB_DecommitUnusedPatchMem(v23, v18, v2, v7, v22);
          v0 = truncate_cast<unsigned int,unsigned __int64>(v22) + v27;
          v27 = v0;
          v23->patchMemSavings += truncate_cast<unsigned int,unsigned __int64>(v22);
          v24 = v22;
          if ( v22 > ((v5->devAssetSavings + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64) )
            v24 = (v5->devAssetSavings + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64;
          v23->devPatchMemSavings += truncate_cast<unsigned int,unsigned __int64>(v24);
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_db_patchmem_verbose, "db_patchmem_verbose") )
          {
            CurrentZoneLoadName = DB_Zones_GetCurrentZoneLoadName();
            Com_Printf(16, "DB_PATCH_MEM: '%s' stream=%d. Reclaimed %zukb\n", CurrentZoneLoadName, v2, v22 >> 10);
          }
LABEL_24:
          rewindHistorySize = s_rewindHighwatermark;
          if ( v5->rewindHistorySize > s_rewindHighwatermark )
            rewindHistorySize = v5->rewindHistorySize;
          s_rewindHighwatermark = rewindHistorySize;
        }
      }
      ++v2;
      v3 = (DB_PatchMem_RewindData *)((char *)v3 + 8);
      p_size += 2;
    }
    while ( v2 < 0xB );
    if ( v0 )
    {
      v14 = DB_Zones_GetCurrentZoneLoadName();
      Com_Printf(16, "DB_PATCH_MEM: Reclaimed %dkb after loading '%s'. Rewind entry HWM=%zu\n", v0 >> 10, v14, rewindHistorySize);
    }
    if ( s_rewind.failSizeMaxRewinds >= 0x400 )
    {
      v15 = DB_Zones_GetCurrentZoneLoadName();
      Com_Printf(16, "DB_PATCH_MEM: Failed to reclaim %dkb from '%s', due to hitting max rewinds.\n", s_rewind.failSizeMaxRewinds >> 10, v15);
    }
    if ( s_rewind.failSizeSharedAsset >= 0x400 )
    {
      v16 = DB_Zones_GetCurrentZoneLoadName();
      Com_Printf(16, "DB_PATCH_MEM: Failed to reclaim %dkb from '%s', due to shared asset data.\n", s_rewind.failSizeSharedAsset >> 10, v16);
    }
    if ( s_rewind.failSizeUnsupportedStream >= 0x400 )
    {
      v17 = DB_Zones_GetCurrentZoneLoadName();
      Com_Printf(16, "DB_PATCH_MEM: Failed to reclaim %dkb from '%s', from unsupported streams.\n", s_rewind.failSizeUnsupportedStream >> 10, v17);
    }
  }
}

/*
==============
DB_PatchMem_FindRewindBinary
==============
*/
__int64 DB_PatchMem_FindRewindBinary(const RewindStreamData *rewindData, const unsigned int currOffset)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned int rewind; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int i; 
  unsigned int *p_startOffset; 
  unsigned int v11; 
  __int64 v13; 
  __int64 v14; 

  v4 = rewindData->rewindHistorySize - 1;
  v5 = 0;
  rewind = 0;
  v7 = 0;
  if ( v4 > 1 )
  {
    do
    {
      if ( v4 <= v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 560, ASSERT_TYPE_ASSERT, "(maxVal > minVal)", (const char *)&queryFormat, "maxVal > minVal") )
        __debugbreak();
      v8 = v7 + ((v4 - v7) >> 1);
      if ( v8 >= rewindData->rewindHistorySize )
      {
        LODWORD(v14) = rewindData->rewindHistorySize;
        LODWORD(v13) = v7 + ((v4 - v7) >> 1);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 562, ASSERT_TYPE_ASSERT, "(unsigned)( mid ) < (unsigned)( rewindData.rewindHistorySize )", "mid doesn't index rewindData.rewindHistorySize\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( currOffset >= rewindData->rewindHistory[v8].startOffset )
        v7 += (v4 - v7) >> 1;
      if ( currOffset >= rewindData->rewindHistory[v8].startOffset )
        v8 = v4;
      v4 = v8;
    }
    while ( v7 + 1 < v8 );
    rewind = 0;
    v5 = 0;
  }
  for ( ; v7 <= v4; rewind = rewindData->rewindHistory[v7++].rewind )
  {
    if ( currOffset < rewindData->rewindHistory[v7].startOffset )
      break;
  }
  for ( i = 0; i < rewindData->rewindHistorySize; ++i )
  {
    p_startOffset = &rewindData->rewindHistory[i].startOffset;
    v11 = *p_startOffset;
    if ( currOffset < *p_startOffset )
      break;
    if ( currOffset < p_startOffset[2] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 533, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Pointer dereference in discarded memory!") )
        __debugbreak();
      v11 = *p_startOffset;
    }
    if ( currOffset < v11 )
      break;
    v5 = p_startOffset[1];
  }
  if ( rewind != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 589, ASSERT_TYPE_ASSERT, "(rewind == DB_PatchMem_FindRewindLinear( rewindData, currOffset ))", (const char *)&queryFormat, "rewind == DB_PatchMem_FindRewindLinear( rewindData, currOffset )") )
    __debugbreak();
  return rewind;
}

/*
==============
DB_PatchMem_FixStreamAlignment
==============
*/
void DB_PatchMem_FixStreamAlignment(unsigned __int64 alignmentMinusOne)
{
  unsigned __int64 CurrentExpectedOffset; 
  unsigned __int64 v3; 
  __int64 CurrentActualOffset; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 

  if ( s_rewindPostload )
  {
    if ( !DB_IsInPostload() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 771, ASSERT_TYPE_ASSERT, "(DB_IsInPostload())", (const char *)&queryFormat, "DB_IsInPostload()") )
      __debugbreak();
    CurrentExpectedOffset = DB_PatchMem_GetCurrentExpectedOffset();
    v3 = ~alignmentMinusOne & (CurrentExpectedOffset + alignmentMinusOne);
    if ( v3 < CurrentExpectedOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 775, ASSERT_TYPE_ASSERT, "(newOffset >= expectedOffset)", (const char *)&queryFormat, "newOffset >= expectedOffset") )
      __debugbreak();
    g_streamPosGlob.pos += v3 - CurrentExpectedOffset;
    DB_PatchMem_UpdateForPostload();
    goto LABEL_18;
  }
  DB_PatchMem_FixStreamAlignmentInternal(alignmentMinusOne);
  CurrentActualOffset = DB_PatchMem_GetCurrentActualOffset();
  if ( alignmentMinusOne == -1i64 )
  {
    v5 = -1i64;
    goto LABEL_13;
  }
  v5 = alignmentMinusOne;
  v6 = alignmentMinusOne;
  if ( (alignmentMinusOne & (alignmentMinusOne + 1)) != 0 )
  {
LABEL_13:
    v6 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
      __debugbreak();
  }
  if ( (CurrentActualOffset & v6) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 784, ASSERT_TYPE_ASSERT, "(IsAligned( DB_PatchMem_GetCurrentActualOffset(), alignmentMinusOne + 1 ))", (const char *)&queryFormat, "IsAligned( DB_PatchMem_GetCurrentActualOffset(), alignmentMinusOne + 1 )") )
    __debugbreak();
LABEL_18:
  v7 = DB_PatchMem_GetCurrentExpectedOffset();
  v8 = alignmentMinusOne + 1;
  if ( (!v8 || ((v8 - 1) & v8) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  if ( ((v8 - 1) & v7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 787, ASSERT_TYPE_ASSERT, "(IsAligned( DB_PatchMem_GetCurrentExpectedOffset(), alignmentMinusOne + 1 ))", (const char *)&queryFormat, "IsAligned( DB_PatchMem_GetCurrentExpectedOffset(), alignmentMinusOne + 1 )") )
    __debugbreak();
}

/*
==============
DB_PatchMem_FixStreamAlignmentInternal
==============
*/
void DB_PatchMem_FixStreamAlignmentInternal(const unsigned __int64 alignmentMinusOne)
{
  unsigned int posIndex; 
  unsigned int RewindAddition; 
  __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned __int8 *pos; 
  unsigned __int8 *v10; 
  unsigned __int8 *v11; 
  unsigned __int8 *v12; 

  posIndex = g_streamPosGlob.posIndex;
  if ( g_streamPosGlob.posIndex >= 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 459, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( g_streamPosGlob.posArray ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( g_streamPosGlob.posArray )\n\t%i not in [0, %i)", g_streamPosGlob.posIndex, 11) )
    __debugbreak();
  RewindAddition = DB_PatchMem_GetRewindAddition(posIndex);
  if ( !RewindAddition || (v4 = RewindAddition, v5 = alignmentMinusOne & (unsigned __int64)g_streamPosGlob.pos, v6 = alignmentMinusOne & (unsigned __int64)&g_streamPosGlob.pos[RewindAddition], (alignmentMinusOne & (unsigned __int64)g_streamPosGlob.pos) == v6) )
  {
    g_streamPosGlob.pos = (unsigned __int8 *)(~alignmentMinusOne & (unsigned __int64)&g_streamPosGlob.pos[alignmentMinusOne]);
  }
  else
  {
    v7 = 0;
    if ( v5 )
      v8 = truncate_cast<unsigned int,unsigned __int64>(alignmentMinusOne - v5 + 1);
    else
      v8 = 0;
    if ( v6 )
      v7 = truncate_cast<unsigned int,unsigned __int64>(alignmentMinusOne - v6 + 1);
    pos = g_streamPosGlob.pos;
    v10 = (unsigned __int8 *)(~alignmentMinusOne & (unsigned __int64)&g_streamPosGlob.pos[alignmentMinusOne]);
    if ( v10 < g_streamPosGlob.pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 450, ASSERT_TYPE_ASSERT, "(newPtr >= ptr)", (const char *)&queryFormat, "newPtr >= ptr") )
      __debugbreak();
    if ( v10 - pos != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 477, ASSERT_TYPE_ASSERT, "(DB_PatchMem_CalculateAdvance( g_streamPosGlob.pos, alignmentMinusOne ) == actualAdvance)", (const char *)&queryFormat, "DB_PatchMem_CalculateAdvance( g_streamPosGlob.pos, alignmentMinusOne ) == actualAdvance") )
      __debugbreak();
    v11 = &g_streamPosGlob.pos[v4];
    v12 = (unsigned __int8 *)(~alignmentMinusOne & (unsigned __int64)&g_streamPosGlob.pos[v4 + alignmentMinusOne]);
    if ( v12 < &g_streamPosGlob.pos[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 450, ASSERT_TYPE_ASSERT, "(newPtr >= ptr)", (const char *)&queryFormat, "newPtr >= ptr") )
      __debugbreak();
    if ( v12 - v11 != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 478, ASSERT_TYPE_ASSERT, "(DB_PatchMem_CalculateAdvance( g_streamPosGlob.pos + currentRewind, alignmentMinusOne ) == wantedAdvance)", (const char *)&queryFormat, "DB_PatchMem_CalculateAdvance( g_streamPosGlob.pos + currentRewind, alignmentMinusOne ) == wantedAdvance") )
      __debugbreak();
    DB_PatchMem_RewindForAlignment(v8, v7);
  }
}

/*
==============
DB_PatchMem_GetActualOffset
==============
*/
__int64 DB_PatchMem_GetActualOffset(const unsigned int streamIndex)
{
  __int64 v1; 
  unsigned __int8 *pos; 
  unsigned int v3; 
  RewindStreamData *v4; 
  unsigned int streamSizeCheck; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v1 = streamIndex;
  if ( streamIndex >= 0xB )
  {
    v10 = 11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( g_streamPosGlob.posArray ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( g_streamPosGlob.posArray )\n\t%i not in [0, %i)", streamIndex, v10) )
      __debugbreak();
  }
  pos = g_streamPosGlob.pos;
  if ( g_streamPosGlob.posIndex != (_DWORD)v1 )
    pos = g_streamPosGlob.posArray[v1];
  v3 = truncate_cast<unsigned int,__int64>(pos - g_streamPosGlob.archiveBlocks.blocks[v1].data);
  if ( (unsigned int)v1 >= 0xB )
  {
    LODWORD(v9) = 11;
    LODWORD(v7) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( s_rewind.data ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( s_rewind.data )\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v4 = s_rewind.data[v1];
  if ( v4 )
    streamSizeCheck = v4->streamSizeCheck;
  else
    streamSizeCheck = truncate_cast<unsigned int,unsigned __int64>(g_streamPosGlob.archiveBlocks.blocks[v1].size);
  if ( v3 > streamSizeCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 150, ASSERT_TYPE_ASSERT, "(currentOffset <= DB_PatchMem_GetStreamSize( streamIndex ))", (const char *)&queryFormat, "currentOffset <= DB_PatchMem_GetStreamSize( streamIndex )") )
    __debugbreak();
  return v3;
}

/*
==============
DB_PatchMem_GetAssetRelativePointerOffset
==============
*/
__int64 DB_PatchMem_GetAssetRelativePointerOffset(unsigned int streamIndex)
{
  __int64 v1; 
  int v4; 

  v1 = streamIndex;
  if ( streamIndex >= 0xB )
  {
    v4 = 11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1253, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( MAX_XFILE_COUNT )", "streamIndex doesn't index MAX_XFILE_COUNT\n\t%i not in [0, %i)", streamIndex, v4) )
      __debugbreak();
  }
  if ( !s_rewind.assets.stackPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1254, ASSERT_TYPE_ASSERT, "(s_rewind.assets.stackPos > ASSET_STACKINDEX_ASSETS)", (const char *)&queryFormat, "s_rewind.assets.stackPos > ASSET_STACKINDEX_ASSETS") )
    __debugbreak();
  if ( s_rewind.assets.stackPos > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1255, ASSERT_TYPE_ASSERT, "(s_rewind.assets.stackPos <= ASSET_STACKINDEX_MAXCOUNT)", (const char *)&queryFormat, "s_rewind.assets.stackPos <= ASSET_STACKINDEX_MAXCOUNT") )
    __debugbreak();
  return s_rewind.assets.stack[0].startPos[v1];
}

/*
==============
DB_PatchMem_GetCurrentActualOffset
==============
*/
__int64 DB_PatchMem_GetCurrentActualOffset()
{
  __int64 posIndex; 
  unsigned int v1; 
  RewindStreamData *v2; 
  unsigned int streamSizeCheck; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  int v8; 

  posIndex = g_streamPosGlob.posIndex;
  if ( g_streamPosGlob.posIndex >= 0xB )
  {
    v8 = 11;
    v6 = g_streamPosGlob.posIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 105, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( g_streamPosGlob.posArray ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( g_streamPosGlob.posArray )\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v1 = truncate_cast<unsigned int,__int64>(g_streamPosGlob.pos - g_streamPosGlob.archiveBlocks.blocks[posIndex].data);
  if ( (unsigned int)posIndex >= 0xB )
  {
    LODWORD(v7) = 11;
    LODWORD(v5) = posIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( s_rewind.data ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( s_rewind.data )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  v2 = s_rewind.data[posIndex];
  if ( v2 )
    streamSizeCheck = v2->streamSizeCheck;
  else
    streamSizeCheck = truncate_cast<unsigned int,unsigned __int64>(g_streamPosGlob.archiveBlocks.blocks[posIndex].size);
  if ( v1 > streamSizeCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 109, ASSERT_TYPE_ASSERT, "(currentOffset <= DB_PatchMem_GetStreamSize( streamIndex ))", (const char *)&queryFormat, "currentOffset <= DB_PatchMem_GetStreamSize( streamIndex )") )
    __debugbreak();
  return v1;
}

/*
==============
DB_PatchMem_GetCurrentExpectedOffset
==============
*/
__int64 DB_PatchMem_GetCurrentExpectedOffset()
{
  __int64 posIndex; 
  int CurrentActualOffset; 
  unsigned int v2; 
  RewindStreamData *v3; 
  unsigned int streamSizeCheck; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  int v9; 

  posIndex = g_streamPosGlob.posIndex;
  if ( g_streamPosGlob.posIndex >= 0xB )
  {
    v9 = 11;
    v7 = g_streamPosGlob.posIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 120, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( g_streamPosGlob.posArray ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( g_streamPosGlob.posArray )\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  CurrentActualOffset = DB_PatchMem_GetCurrentActualOffset();
  v2 = DB_PatchMem_GetRewindAddition(posIndex) + CurrentActualOffset;
  if ( (unsigned int)posIndex >= 0xB )
  {
    LODWORD(v8) = 11;
    LODWORD(v6) = posIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( s_rewind.data ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( s_rewind.data )\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v3 = s_rewind.data[posIndex];
  if ( v3 )
    streamSizeCheck = v3->streamSizeCheck;
  else
    streamSizeCheck = truncate_cast<unsigned int,unsigned __int64>(g_streamPosGlob.archiveBlocks.blocks[posIndex].size);
  if ( v2 > streamSizeCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 126, ASSERT_TYPE_ASSERT, "(origOffset <= DB_PatchMem_GetStreamSize( streamIndex ))", (const char *)&queryFormat, "origOffset <= DB_PatchMem_GetStreamSize( streamIndex )") )
    __debugbreak();
  return v2;
}

/*
==============
DB_PatchMem_GetExpectedOffset
==============
*/
__int64 DB_PatchMem_GetExpectedOffset(const unsigned int streamIndex)
{
  __int64 v1; 
  int ActualOffset; 
  unsigned int v3; 
  RewindStreamData *v4; 
  unsigned int streamSizeCheck; 
  int v7; 
  int v8; 

  v1 = streamIndex;
  ActualOffset = DB_PatchMem_GetActualOffset(streamIndex);
  v3 = DB_PatchMem_GetRewindAddition(v1) + ActualOffset;
  if ( (unsigned int)v1 >= 0xB )
  {
    v8 = 11;
    v7 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( s_rewind.data ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( s_rewind.data )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v4 = s_rewind.data[v1];
  if ( v4 )
    streamSizeCheck = v4->streamSizeCheck;
  else
    streamSizeCheck = truncate_cast<unsigned int,unsigned __int64>(g_streamPosGlob.archiveBlocks.blocks[v1].size);
  if ( v3 > streamSizeCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 164, ASSERT_TYPE_ASSERT, "(expectedOffset <= DB_PatchMem_GetStreamSize( streamIndex ))", (const char *)&queryFormat, "expectedOffset <= DB_PatchMem_GetStreamSize( streamIndex )") )
    __debugbreak();
  return v3;
}

/*
==============
DB_PatchMem_GetRewindAddition
==============
*/
__int64 DB_PatchMem_GetRewindAddition(const unsigned int streamIndex)
{
  __int64 v1; 
  RewindStreamData *v2; 

  v1 = streamIndex;
  if ( streamIndex >= 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( s_rewind.data ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( s_rewind.data )\n\t%i not in [0, %i)", streamIndex, 11) )
    __debugbreak();
  v2 = s_rewind.data[v1];
  if ( v2 )
    return v2->currentRewind;
  else
    return 0i64;
}

/*
==============
DB_PatchMem_GetRewindDataCopy
==============
*/
void DB_PatchMem_GetRewindDataCopy(DB_PatchMem_RewindData *rewindData)
{
  if ( s_rewind.assets.sharedDataPushCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1171, ASSERT_TYPE_ASSERT, "(s_rewind.assets.sharedDataPushCount == 0)", (const char *)&queryFormat, "s_rewind.assets.sharedDataPushCount == 0") )
    __debugbreak();
  if ( s_rewind.assets.stackPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1172, ASSERT_TYPE_ASSERT, "(s_rewind.assets.stackPos == 0)", (const char *)&queryFormat, "s_rewind.assets.stackPos == 0") )
    __debugbreak();
  memcpy_0(rewindData, &s_rewind, sizeof(DB_PatchMem_RewindData));
}

/*
==============
DB_PatchMem_GetStreamOffset
==============
*/

__int64 __fastcall DB_PatchMem_GetStreamOffset(unsigned int streamIndex)
{
  return DB_PatchMem_GetExpectedOffset(streamIndex);
}

/*
==============
DB_PatchMem_Init
==============
*/
void DB_PatchMem_Init(void)
{
  DB_PatchMem_RewindData *v0; 
  int *v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 

  v0 = &s_rewind;
  v1 = s_rewindDataAllocIndex;
  do
  {
    if ( v0->data[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 600, ASSERT_TYPE_ASSERT, "(s_rewind.data[i] == nullptr)", (const char *)&queryFormat, "s_rewind.data[i] == nullptr") )
      __debugbreak();
    v2 = *v1;
    if ( (_DWORD)v2 != 0x7FFFFFFF )
    {
      if ( (unsigned int)v2 >= 3 )
      {
        LODWORD(v4) = 3;
        LODWORD(v3) = *v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 607, ASSERT_TYPE_ASSERT, "(unsigned)( allocIndex ) < (unsigned)( ( sizeof( *array_counter( s_rewind.dataAlloc ) ) + 0 ) )", "allocIndex doesn't index ARRAY_COUNT( s_rewind.dataAlloc )\n\t%i not in [0, %i)", v3, v4) )
          __debugbreak();
      }
      v0->data[0] = &s_rewind.dataAlloc[v2];
    }
    ++v1;
    v0 = (DB_PatchMem_RewindData *)((char *)v0 + 8);
  }
  while ( (__int64)v1 < (__int64)&unk_145069BBC );
}

/*
==============
DB_PatchMem_PopAsset
==============
*/
void DB_PatchMem_PopAsset(void)
{
  unsigned int v0; 
  __int64 v1; 
  int v2; 

  if ( !s_rewind.assets.stackPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1216, ASSERT_TYPE_ASSERT, "(s_rewind.assets.stackPos > 0)", (const char *)&queryFormat, "s_rewind.assets.stackPos > 0") )
    __debugbreak();
  v0 = s_rewind.assets.stackPos - 1;
  if ( s_rewind.assets.stackPos - 1 >= 2 )
  {
    v2 = 2;
    LODWORD(v1) = s_rewind.assets.stackPos - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1220, ASSERT_TYPE_ASSERT, "(unsigned)( stackIndex ) < (unsigned)( ( sizeof( *array_counter( s_rewind.assets.stack ) ) + 0 ) )", "stackIndex doesn't index ARRAY_COUNT( s_rewind.assets.stack )\n\t%i not in [0, %i)", v1, v2) )
      __debugbreak();
  }
  if ( s_rewind.assets.stack[v0].sharedPushCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1221, ASSERT_TYPE_ASSERT, "(s_rewind.assets.stack[stackIndex].sharedPushCount == 0)", (const char *)&queryFormat, "s_rewind.assets.stack[stackIndex].sharedPushCount == 0") )
    __debugbreak();
  --s_rewind.assets.stackPos;
}

/*
==============
DB_PatchMem_PopDevAssetReplacement
==============
*/
void DB_PatchMem_PopDevAssetReplacement(void)
{
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1349, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !s_devAssetReplacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1350, ASSERT_TYPE_ASSERT, "(s_devAssetReplacement)", (const char *)&queryFormat, "s_devAssetReplacement") )
    __debugbreak();
  s_devAssetReplacement = 0;
}

/*
==============
DB_PatchMem_PostLoad_PushAsset
==============
*/
void DB_PatchMem_PostLoad_PushAsset(const int type, void *const data)
{
  unsigned int stackPos; 
  unsigned int *startPos; 
  unsigned __int64 *p_size; 
  DB_PatchMem_RewindData *v7; 
  unsigned int v8; 
  int ActualOffset; 
  RewindStreamData *v10; 
  unsigned int v11; 
  unsigned int streamSizeCheck; 
  __int64 v13; 
  __int64 v14; 

  stackPos = s_rewind.assets.stackPos;
  if ( s_rewind.assets.stackPos >= 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1232, ASSERT_TYPE_ASSERT, "(unsigned)( s_rewind.assets.stackPos ) < (unsigned)( ( sizeof( *array_counter( s_rewind.assets.stack ) ) + 0 ) )", "s_rewind.assets.stackPos doesn't index ARRAY_COUNT( s_rewind.assets.stack )\n\t%i not in [0, %i)", s_rewind.assets.stackPos, 2) )
      __debugbreak();
    stackPos = s_rewind.assets.stackPos;
  }
  if ( stackPos )
  {
    s_rewind.assets.stackPos = stackPos + 1;
  }
  else
  {
    startPos = s_rewind.assets.stack[0].startPos;
    p_size = &g_streamPosGlob.archiveBlocks.blocks[0].size;
    s_rewind.assets.stack[0].type = type;
    v7 = &s_rewind;
    s_rewind.assets.stack[0].ptr = data;
    v8 = 0;
    do
    {
      ActualOffset = DB_PatchMem_GetActualOffset(v8);
      if ( v8 >= 0xB )
      {
        LODWORD(v14) = 11;
        LODWORD(v13) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( s_rewind.data ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( s_rewind.data )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v10 = v7->data[0];
      if ( v7->data[0] )
        LODWORD(v10) = v10->currentRewind;
      v11 = (_DWORD)v10 + ActualOffset;
      if ( v8 >= 0xB )
      {
        LODWORD(v14) = 11;
        LODWORD(v13) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( s_rewind.data ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( s_rewind.data )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( v7->data[0] )
        streamSizeCheck = v7->data[0]->streamSizeCheck;
      else
        streamSizeCheck = truncate_cast<unsigned int,unsigned __int64>(*p_size);
      if ( v11 > streamSizeCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 164, ASSERT_TYPE_ASSERT, "(expectedOffset <= DB_PatchMem_GetStreamSize( streamIndex ))", (const char *)&queryFormat, "expectedOffset <= DB_PatchMem_GetStreamSize( streamIndex )") )
        __debugbreak();
      *startPos = v11;
      ++v8;
      ++startPos;
      v7 = (DB_PatchMem_RewindData *)((char *)v7 + 8);
      p_size += 2;
    }
    while ( (int)v8 < 11 );
    ++s_rewind.assets.stackPos;
  }
}

/*
==============
DB_PatchMem_PushAsset
==============
*/
void DB_PatchMem_PushAsset(const int type, void *const data)
{
  __int64 stackPos; 
  unsigned __int64 *p_size; 
  DB_PatchMem_RewindData *v6; 
  unsigned int *lastSharedPush; 
  unsigned int v8; 
  int ActualOffset; 
  unsigned int currentRewind; 
  unsigned int v11; 
  unsigned int streamSizeCheck; 
  __int64 v13; 
  __int64 v14; 
  RewindAssetStack::StackEntry *v15; 

  stackPos = s_rewind.assets.stackPos;
  if ( s_rewind.assets.stackPos >= 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1194, ASSERT_TYPE_ASSERT, "(unsigned)( s_rewind.assets.stackPos ) < (unsigned)( ( sizeof( *array_counter( s_rewind.assets.stack ) ) + 0 ) )", "s_rewind.assets.stackPos doesn't index ARRAY_COUNT( s_rewind.assets.stack )\n\t%i not in [0, %i)", s_rewind.assets.stackPos, 2) )
      __debugbreak();
    stackPos = s_rewind.assets.stackPos;
  }
  p_size = &g_streamPosGlob.archiveBlocks.blocks[0].size;
  v15 = &s_rewind.assets.stack[stackPos];
  v6 = &s_rewind;
  v15->ptr = data;
  lastSharedPush = v15->lastSharedPush;
  v15->type = type;
  v8 = 0;
  do
  {
    ActualOffset = DB_PatchMem_GetActualOffset(v8);
    if ( v8 >= 0xB )
    {
      LODWORD(v14) = 11;
      LODWORD(v13) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( s_rewind.data ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( s_rewind.data )\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( v6->data[0] )
      currentRewind = v6->data[0]->currentRewind;
    else
      currentRewind = 0;
    v11 = currentRewind + ActualOffset;
    if ( v8 >= 0xB )
    {
      LODWORD(v14) = 11;
      LODWORD(v13) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( s_rewind.data ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( s_rewind.data )\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( v6->data[0] )
      streamSizeCheck = v6->data[0]->streamSizeCheck;
    else
      streamSizeCheck = truncate_cast<unsigned int,unsigned __int64>(*p_size);
    if ( v11 > streamSizeCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 164, ASSERT_TYPE_ASSERT, "(expectedOffset <= DB_PatchMem_GetStreamSize( streamIndex ))", (const char *)&queryFormat, "expectedOffset <= DB_PatchMem_GetStreamSize( streamIndex )") )
      __debugbreak();
    *(lastSharedPush - 11) = v11;
    ++v8;
    *lastSharedPush = 0;
    v6 = (DB_PatchMem_RewindData *)((char *)v6 + 8);
    ++lastSharedPush;
    p_size += 2;
  }
  while ( (int)v8 < 11 );
  v15->sharedPushCount = 0;
  s_rewind.assets.allowedDiscardStackIndex = s_rewind.assets.stackPos++;
}

/*
==============
DB_PatchMem_PushDevAssetReplacement
==============
*/
void DB_PatchMem_PushDevAssetReplacement(void)
{
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1341, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( s_devAssetReplacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1342, ASSERT_TYPE_ASSERT, "(!s_devAssetReplacement)", (const char *)&queryFormat, "!s_devAssetReplacement") )
    __debugbreak();
  s_devAssetReplacement = 1;
}

/*
==============
DB_PatchMem_RewindForAlignment
==============
*/
void DB_PatchMem_RewindForAlignment(const unsigned int actualAdvance, const unsigned int wantedAdvance)
{
  __int64 v2; 
  __int64 posIndex; 
  RewindStreamData *v5; 
  unsigned int CurrentExpectedOffset; 
  unsigned int v7; 
  RewindHistoryEntry *v8; 
  unsigned int v9; 
  unsigned int currentRewind; 
  __int64 v11; 
  __int64 v12; 
  int v13; 

  v2 = actualAdvance;
  if ( actualAdvance == wantedAdvance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 173, ASSERT_TYPE_ASSERT, "(actualAdvance != wantedAdvance)", (const char *)&queryFormat, "actualAdvance != wantedAdvance") )
    __debugbreak();
  posIndex = g_streamPosGlob.posIndex;
  if ( g_streamPosGlob.posIndex >= 0xB )
  {
    v13 = 11;
    LODWORD(v11) = g_streamPosGlob.posIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 176, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( g_streamPosGlob.posArray ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( g_streamPosGlob.posArray )\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( !s_rewind.data[posIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 178, ASSERT_TYPE_ASSERT, "(s_rewind.data[streamIndex] != nullptr)", (const char *)&queryFormat, "s_rewind.data[streamIndex] != nullptr") )
    __debugbreak();
  v5 = s_rewind.data[posIndex];
  CurrentExpectedOffset = DB_PatchMem_GetCurrentExpectedOffset();
  v5->currentRewind += wantedAdvance;
  v7 = CurrentExpectedOffset;
  if ( v5->currentRewind < (unsigned int)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 187, ASSERT_TYPE_ASSERT, "(rewindData.currentRewind >= actualAdvance)", (const char *)&queryFormat, "rewindData.currentRewind >= actualAdvance") )
    __debugbreak();
  v5->currentRewind -= v2;
  g_streamPosGlob.pos += v2;
  if ( v5->rewindHistorySize >= 0xC00 )
  {
    LODWORD(v12) = 3072;
    LODWORD(v11) = v5->rewindHistorySize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 199, ASSERT_TYPE_ASSERT, "(unsigned)( rewindData.rewindHistorySize ) < (unsigned)( ( sizeof( *array_counter( rewindData.rewindHistory ) ) + 0 ) )", "rewindData.rewindHistorySize doesn't index ARRAY_COUNT( rewindData.rewindHistory )\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v8 = &v5->rewindHistory[v5->rewindHistorySize++];
  v8->startOffset = v7;
  v9 = wantedAdvance + v7;
  currentRewind = v5->currentRewind;
  v8->endOffset = v9;
  v8->rewind = currentRewind;
  v8->forAsset = 0;
  v5->lastExpectedOffset = v9;
  if ( v9 != (unsigned int)DB_PatchMem_GetCurrentExpectedOffset() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 214, ASSERT_TYPE_ASSERT, "(( expectedOffset + wantedAdvance ) == DB_PatchMem_GetCurrentExpectedOffset())", (const char *)&queryFormat, "( expectedOffset + wantedAdvance ) == DB_PatchMem_GetCurrentExpectedOffset()") )
    __debugbreak();
  if ( v5->lastExpectedOffset != (unsigned int)DB_PatchMem_GetCurrentExpectedOffset() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 215, ASSERT_TYPE_ASSERT, "(rewindData.lastExpectedOffset == DB_PatchMem_GetCurrentExpectedOffset())", (const char *)&queryFormat, "rewindData.lastExpectedOffset == DB_PatchMem_GetCurrentExpectedOffset()") )
    __debugbreak();
}

/*
==============
DB_PatchMem_RewindForAsset
==============
*/
char DB_PatchMem_RewindForAsset(const unsigned int removeStartOffset, const unsigned int removeEndOffset, const XAssetType assetType)
{
  __int64 v3; 
  unsigned int v4; 
  __int64 posIndex; 
  __int64 v6; 
  RewindStreamData *v7; 
  unsigned int v9; 
  unsigned int rewindHistorySize; 
  unsigned int lastExpectedAssetOffset; 
  unsigned __int8 *pos; 
  unsigned int lastExpectedOffset; 
  unsigned int v14; 
  RewindHistoryEntry *v15; 
  unsigned int rewind; 
  unsigned int v17; 
  unsigned __int8 *v18; 
  RewindHistoryEntry *v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  unsigned int v23; 
  unsigned int CurrentExpectedOffset; 

  v3 = removeStartOffset;
  v4 = removeEndOffset;
  if ( removeStartOffset >= removeEndOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 297, ASSERT_TYPE_ASSERT, "(removeStartOffset < removeEndOffset)", (const char *)&queryFormat, "removeStartOffset < removeEndOffset") )
    __debugbreak();
  posIndex = g_streamPosGlob.posIndex;
  if ( g_streamPosGlob.posIndex >= 0xB )
  {
    v21 = 11;
    LODWORD(v20) = g_streamPosGlob.posIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 300, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( g_streamPosGlob.posArray ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( g_streamPosGlob.posArray )\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  v6 = posIndex;
  if ( !s_rewind.data[posIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 302, ASSERT_TYPE_ASSERT, "(s_rewind.data[streamIndex])", (const char *)&queryFormat, "s_rewind.data[streamIndex]") )
    __debugbreak();
  v7 = s_rewind.data[posIndex];
  if ( v7->rewindHistorySize + 8 >= 0xC00 )
    return 0;
  CurrentExpectedOffset = DB_PatchMem_GetCurrentExpectedOffset();
  v9 = CurrentExpectedOffset;
  if ( CurrentExpectedOffset != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 315, ASSERT_TYPE_ASSERT, "(expectedOffset == removeEndOffset)", (const char *)&queryFormat, "expectedOffset == removeEndOffset") )
    __debugbreak();
  rewindHistorySize = v7->rewindHistorySize;
  if ( rewindHistorySize )
  {
    if ( v7->rewindHistory[rewindHistorySize - 1].rewind != v7->currentRewind && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 319, ASSERT_TYPE_ASSERT, "(rewindData.rewindHistory[rewindData.rewindHistorySize-1].rewind == rewindData.currentRewind)", (const char *)&queryFormat, "rewindData.rewindHistory[rewindData.rewindHistorySize-1].rewind == rewindData.currentRewind") )
      __debugbreak();
    if ( (unsigned int)v3 < v7->lastExpectedAssetOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 320, ASSERT_TYPE_ASSERT, "(removeStartOffset >= rewindData.lastExpectedAssetOffset)", (const char *)&queryFormat, "removeStartOffset >= rewindData.lastExpectedAssetOffset") )
      __debugbreak();
  }
  lastExpectedAssetOffset = v7->lastExpectedAssetOffset;
  pos = g_streamPosGlob.pos;
  if ( lastExpectedAssetOffset != -1 && (unsigned int)v3 < lastExpectedAssetOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 327, ASSERT_TYPE_ASSERT, "(( rewindData.lastExpectedAssetOffset == 0xffffffff ) || ( removeStartOffset >= rewindData.lastExpectedAssetOffset ))", (const char *)&queryFormat, "( rewindData.lastExpectedAssetOffset == UINT_MAX ) || ( removeStartOffset >= rewindData.lastExpectedAssetOffset )") )
    __debugbreak();
  lastExpectedOffset = v7->lastExpectedOffset;
  v14 = v7->lastExpectedAssetOffset;
  if ( (unsigned int)v3 <= lastExpectedOffset && lastExpectedOffset != -1 )
  {
    if ( v7->lastActualAssetPos >= g_streamPosGlob.pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 332, ASSERT_TYPE_ASSERT, "(rewindData.lastActualAssetPos < g_streamPosGlob.pos)", (const char *)&queryFormat, "rewindData.lastActualAssetPos < g_streamPosGlob.pos") )
      __debugbreak();
    while ( 1 )
    {
      if ( !v7->rewindHistorySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 337, ASSERT_TYPE_ASSERT, "(rewindData.rewindHistorySize)", (const char *)&queryFormat, "rewindData.rewindHistorySize") )
        __debugbreak();
      v15 = &v7->rewindHistory[v7->rewindHistorySize - 1];
      if ( v15->startOffset < (unsigned int)v3 )
        break;
      if ( v15->forAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 345, ASSERT_TYPE_ASSERT, "(!historyEntry.forAsset)", (const char *)&queryFormat, "!historyEntry.forAsset") )
        __debugbreak();
      --v7->rewindHistorySize;
    }
    v9 = CurrentExpectedOffset;
    v4 = removeEndOffset;
    if ( (_DWORD)v3 == v14 )
    {
      if ( !v15->forAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 355, ASSERT_TYPE_ASSERT, "(historyEntry.forAsset)", (const char *)&queryFormat, "historyEntry.forAsset") )
        __debugbreak();
      if ( v15->endOffset != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 356, ASSERT_TYPE_ASSERT, "(historyEntry.endOffset == removeStartOffset)", (const char *)&queryFormat, "historyEntry.endOffset == removeStartOffset") )
        __debugbreak();
    }
    rewind = v15->rewind;
    v7->currentRewind = rewind;
    if ( rewind > (unsigned int)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 360, ASSERT_TYPE_ASSERT, "(rewindData.currentRewind <= removeStartOffset)", (const char *)&queryFormat, "rewindData.currentRewind <= removeStartOffset") )
      __debugbreak();
    if ( !v7->rewindHistorySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 365, ASSERT_TYPE_ASSERT, "(rewindData.rewindHistorySize)", (const char *)&queryFormat, "rewindData.rewindHistorySize") )
      __debugbreak();
  }
  if ( (unsigned int)v3 < v7->currentRewind && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 371, ASSERT_TYPE_ASSERT, "(removeStartOffset >= rewindData.currentRewind)", (const char *)&queryFormat, "removeStartOffset >= rewindData.currentRewind") )
    __debugbreak();
  v17 = v4 - v3;
  g_streamPosGlob.pos = &g_streamPosGlob.archiveBlocks.blocks[v6].data[v3 - v7->currentRewind];
  v7->currentRewind += v17;
  if ( s_devAssetReplacement )
    v7->devAssetSavings += v17;
  v18 = g_streamPosGlob.pos;
  if ( g_streamPosGlob.pos >= pos )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 396, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.pos < oldStreamPos)", (const char *)&queryFormat, "g_streamPosGlob.pos < oldStreamPos") )
      __debugbreak();
    v18 = g_streamPosGlob.pos;
  }
  DebugWipe(v18, pos - v18);
  if ( (unsigned int)DB_PatchMem_GetCurrentExpectedOffset() != v9 )
  {
    v23 = v9;
    v22 = DB_PatchMem_GetCurrentExpectedOffset();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 403, ASSERT_TYPE_ASSERT, "( DB_PatchMem_GetCurrentExpectedOffset() ) == ( expectedOffset )", "%s == %s\n\t%i, %i", "DB_PatchMem_GetCurrentExpectedOffset()", "expectedOffset", v22, v23) )
      __debugbreak();
  }
  if ( (_DWORD)v3 == v14 )
  {
    if ( !v7->rewindHistorySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 410, ASSERT_TYPE_ASSERT, "(rewindData.rewindHistorySize)", (const char *)&queryFormat, "rewindData.rewindHistorySize") )
      __debugbreak();
    v19 = &v7->rewindHistory[v7->rewindHistorySize - 1];
    if ( v19->startOffset >= (unsigned int)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 413, ASSERT_TYPE_ASSERT, "(entry->startOffset < removeStartOffset)", (const char *)&queryFormat, "entry->startOffset < removeStartOffset") )
      __debugbreak();
    if ( v19->endOffset != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 414, ASSERT_TYPE_ASSERT, "(entry->endOffset == removeStartOffset)", (const char *)&queryFormat, "entry->endOffset == removeStartOffset") )
      __debugbreak();
    if ( !v19->forAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 415, ASSERT_TYPE_ASSERT, "(entry->forAsset)", (const char *)&queryFormat, "entry->forAsset") )
      __debugbreak();
  }
  else
  {
    DB_PatchMem_TryPurgeAlignmentEntryForNewAsset(v7, v3);
    v19 = &v7->rewindHistory[v7->rewindHistorySize++];
    v19->startOffset = v3;
  }
  v19->endOffset = v9;
  v19->forAsset = 1;
  v19->rewind = v7->currentRewind;
  v7->lastExpectedOffset = v9;
  v7->lastExpectedAssetOffset = v9;
  v7->lastActualAssetPos = g_streamPosGlob.pos;
  return 1;
}

/*
==============
DB_PatchMem_SetRewindDataFromCopy
==============
*/
void DB_PatchMem_SetRewindDataFromCopy(const DB_PatchMem_RewindData *rewindData)
{
  memcpy_0(&s_rewind, rewindData, sizeof(s_rewind));
  if ( s_rewind.assets.sharedDataPushCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1186, ASSERT_TYPE_ASSERT, "(s_rewind.assets.sharedDataPushCount == 0)", (const char *)&queryFormat, "s_rewind.assets.sharedDataPushCount == 0") )
    __debugbreak();
  if ( s_rewind.assets.stackPos )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1187, ASSERT_TYPE_ASSERT, "(s_rewind.assets.stackPos == 0)", (const char *)&queryFormat, "s_rewind.assets.stackPos == 0") )
      __debugbreak();
  }
}

/*
==============
DB_PatchMem_TryDiscard
==============
*/
void DB_PatchMem_TryDiscard(XAsset *asset)
{
  RewindAssetStack::StackEntry *v2; 
  __int64 type; 
  const char **p_name; 
  unsigned int v5; 
  const char *v6; 
  DB_PatchMem_RewindData *v7; 
  int v8; 
  unsigned int *lastSharedPush; 
  unsigned int v10; 
  unsigned int ExpectedOffset; 
  unsigned int v12; 
  unsigned int v13; 
  const char *v14; 
  unsigned int v15; 
  const char *XAssetTypeName; 
  unsigned int ActualOffset; 
  const char *v18; 
  unsigned int v19; 
  const char *v20; 
  const char *v21; 
  char *fmt; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned int v27; 
  DB_PatchMem_RewindData *v28; 
  char dest[256]; 

  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 840, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_db_patchmem, "db_patchmem") && (!g_dbPreloading || Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_db_patchmem_preload, "db_patchmem_preload")) )
  {
    if ( s_rewindPostload )
    {
      if ( !DB_IsInPostload() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 855, ASSERT_TYPE_ASSERT, "(DB_IsInPostload())", (const char *)&queryFormat, "DB_IsInPostload()") )
        __debugbreak();
    }
    else if ( s_rewind.assets.stackPos < 2 )
    {
      v2 = &s_rewind.assets.stack[s_rewind.assets.stackPos];
      if ( v2->type != asset->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 865, ASSERT_TYPE_ASSERT, "(stackEntry.type == asset->type)", (const char *)&queryFormat, "stackEntry.type == asset->type") )
        __debugbreak();
      if ( v2->ptr != asset->header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 866, ASSERT_TYPE_ASSERT, "(stackEntry.ptr == asset->header.data)", (const char *)&queryFormat, "stackEntry.ptr == asset->header.data") )
        __debugbreak();
      if ( v2->sharedPushCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 867, ASSERT_TYPE_ASSERT, "(stackEntry.sharedPushCount == 0)", (const char *)&queryFormat, "stackEntry.sharedPushCount == 0") )
        __debugbreak();
      type = asset->type;
      p_name = &asset->header.physicsLibrary->name;
      if ( (unsigned int)type >= 0x71 )
      {
        LODWORD(v23) = asset->type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 62, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v23, 113) )
          __debugbreak();
        LODWORD(v26) = 113;
        LODWORD(v24) = type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 20, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v24, v26) )
          __debugbreak();
      }
      if ( !g_assetNameFieldValid[type] )
      {
        if ( (unsigned int)type >= 0x71 )
        {
          LODWORD(v25) = 113;
          LODWORD(v23) = type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v23, v25) )
            __debugbreak();
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 63, ASSERT_TYPE_ASSERT, "(DB_XAssetTypeHasName( type ))", "%s\n\tDB_GetXAssetHeaderName %s, 0x%p", "DB_XAssetTypeHasName( type )", g_assetNames[type], p_name) )
          __debugbreak();
      }
      if ( !p_name )
      {
        if ( (unsigned int)type >= 0x71 )
        {
          LODWORD(v25) = 113;
          LODWORD(v23) = type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v23, v25) )
            __debugbreak();
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 65, ASSERT_TYPE_ASSERT, "(header.data)", "%s\n\tDB_GetXAssetHeaderName %s, nullptr", "header.data", g_assetNames[type]) )
          __debugbreak();
      }
      Core_strcpy(dest, 0x100ui64, *p_name);
      v5 = 0;
      v27 = 0;
      if ( s_rewind.assets.stackPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 878, ASSERT_TYPE_ASSERT, "(s_rewind.assets.stackPos == 0)", (const char *)&queryFormat, "s_rewind.assets.stackPos == 0") )
        __debugbreak();
      if ( s_rewind.assets.stackPos >= s_rewind.assets.allowedDiscardStackIndex )
      {
        v7 = &s_rewind;
        v8 = 0;
        v28 = &s_rewind;
        lastSharedPush = v2->lastSharedPush;
        do
        {
          if ( (unsigned int)v8 > 2 )
          {
            v10 = *(lastSharedPush - 11);
            ExpectedOffset = DB_PatchMem_GetExpectedOffset(v8);
            v12 = ExpectedOffset;
            if ( ExpectedOffset > v10 )
            {
              if ( v7->data[0] )
              {
                if ( *lastSharedPush == -1 )
                {
                  v15 = ExpectedOffset - v10;
                  v5 += ExpectedOffset - v10;
                  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_db_patchmem_verbose, "db_patchmem_verbose") )
                  {
                    XAssetTypeName = DB_GetXAssetTypeName(asset->type);
                    LODWORD(v23) = v15 >> 10;
                    LODWORD(fmt) = v8;
                    Com_Printf(16, "DB_PATCH_MEM: WARNING: Unable to reclaim %s,%s,%d - %dkb. Has some shared data in it.\n", XAssetTypeName, dest, fmt, v23);
                  }
                  s_rewind.failSizeSharedAsset += v12 - v10;
                }
                else
                {
                  ActualOffset = DB_PatchMem_GetActualOffset(v8);
                  DB_PushStreamPos(v8);
                  if ( !DB_PatchMem_RewindForAsset(v10, v12, (const XAssetType)asset->type) )
                  {
                    v5 += v12 - v10;
                    v18 = DB_GetXAssetTypeName(asset->type);
                    LODWORD(v23) = (v12 - v10) >> 10;
                    LODWORD(fmt) = v8;
                    Com_Printf(16, "DB_PATCH_MEM: WARNING: Unable to reclaim %s,%s,%d - %dkb. RewindStreamData::MAX_REWINDS needs increasing!\n", v18, dest, fmt, v23);
                    s_rewind.failSizeMaxRewinds += v12 - v10;
                  }
                  DB_PopStreamPos();
                  v19 = DB_PatchMem_GetActualOffset(v8);
                  if ( v19 > ActualOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 964, ASSERT_TYPE_ASSERT, "(offsetAfter <= offsetBefore)", (const char *)&queryFormat, "offsetAfter <= offsetBefore") )
                    __debugbreak();
                  v27 += ActualOffset - v19;
                  if ( v12 != (unsigned int)DB_PatchMem_GetExpectedOffset(v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 968, ASSERT_TYPE_ASSERT, "(endOffset == DB_PatchMem_GetExpectedOffset( i ))", (const char *)&queryFormat, "endOffset == DB_PatchMem_GetExpectedOffset( i )") )
                    __debugbreak();
                  v7 = v28;
                }
              }
              else
              {
                v13 = ExpectedOffset - v10;
                v5 += ExpectedOffset - v10;
                if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_db_patchmem_verbose, "db_patchmem_verbose") )
                {
                  v14 = DB_GetXAssetTypeName(asset->type);
                  LODWORD(v23) = v13 >> 10;
                  LODWORD(fmt) = v8;
                  Com_Printf(16, "DB_PATCH_MEM: WARNING: Unable to reclaim %s,%s,%d - %dkb. We don't reclaim from this stream.\n", v14, dest, fmt, v23);
                }
                s_rewind.failSizeUnsupportedStream += v12 - v10;
              }
            }
          }
          v7 = (DB_PatchMem_RewindData *)((char *)v7 + 8);
          ++v8;
          ++lastSharedPush;
          v28 = v7;
        }
        while ( v8 < 11 );
        if ( v27 && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_db_patchmem_verbose, "db_patchmem_verbose") )
        {
          v20 = DB_GetXAssetTypeName(asset->type);
          LODWORD(fmt) = v27 >> 10;
          Com_Printf(16, "DB_PATCH_MEM: Reclaimed %s,%s - %dkb\n", v20, dest, fmt);
        }
        if ( v5 && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_db_patchmem_verbose, "db_patchmem_verbose") )
        {
          v21 = DB_GetXAssetTypeName(asset->type);
          LODWORD(fmt) = v5 >> 10;
          Com_Printf(16, "DB_PATCH_MEM: Couldn't reclaim all/some of %s,%s - %dkb\n", v21, dest, fmt);
        }
      }
      else if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_db_patchmem_verbose, "db_patchmem_verbose") )
      {
        v6 = DB_GetXAssetTypeName(asset->type);
        Com_Printf(16, "DB_PATCH_MEM: WARNING: Unable to reclaim %s,%s. Is a parented asset\n", v6, dest);
      }
    }
  }
}

/*
==============
DB_PatchMem_TryPurgeAlignmentEntryForNewAsset
==============
*/
void DB_PatchMem_TryPurgeAlignmentEntryForNewAsset(RewindStreamData *r_rewindData, const unsigned int newAssetStartOffset)
{
  unsigned int lastExpectedAssetOffset; 
  unsigned int rewindHistorySize; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  RewindHistoryEntry *v9; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 

  lastExpectedAssetOffset = r_rewindData->lastExpectedAssetOffset;
  if ( lastExpectedAssetOffset != -1 )
  {
    if ( newAssetStartOffset <= lastExpectedAssetOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 228, ASSERT_TYPE_ASSERT, "(newAssetStartOffset > r_rewindData.lastExpectedAssetOffset)", (const char *)&queryFormat, "newAssetStartOffset > r_rewindData.lastExpectedAssetOffset") )
      __debugbreak();
    if ( !r_rewindData->rewindHistorySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 229, ASSERT_TYPE_ASSERT, "(r_rewindData.rewindHistorySize > 0)", (const char *)&queryFormat, "r_rewindData.rewindHistorySize > 0") )
      __debugbreak();
    rewindHistorySize = r_rewindData->rewindHistorySize;
    while ( 1 )
    {
      if ( --rewindHistorySize >= r_rewindData->rewindHistorySize )
      {
        LODWORD(v13) = r_rewindData->rewindHistorySize;
        LODWORD(v12) = rewindHistorySize;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 236, ASSERT_TYPE_ASSERT, "(unsigned)( lastAssetIndex ) < (unsigned)( r_rewindData.rewindHistorySize )", "lastAssetIndex doesn't index r_rewindData.rewindHistorySize\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      v6 = r_rewindData->lastExpectedAssetOffset;
      v7 = rewindHistorySize;
      if ( r_rewindData->rewindHistory[rewindHistorySize].startOffset < v6 )
        break;
      if ( !rewindHistorySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 249, ASSERT_TYPE_ASSERT, "(lastAssetIndex > 0)", (const char *)&queryFormat, "lastAssetIndex > 0") )
        __debugbreak();
    }
    if ( r_rewindData->rewindHistory[rewindHistorySize].endOffset != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 243, ASSERT_TYPE_ASSERT, "(r_entry.endOffset == r_rewindData.lastExpectedAssetOffset)", (const char *)&queryFormat, "r_entry.endOffset == r_rewindData.lastExpectedAssetOffset") )
      __debugbreak();
    if ( !r_rewindData->rewindHistory[rewindHistorySize].forAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 244, ASSERT_TYPE_ASSERT, "(r_entry.forAsset)", (const char *)&queryFormat, "r_entry.forAsset") )
      __debugbreak();
    v8 = rewindHistorySize + 1;
    if ( rewindHistorySize + 1 < r_rewindData->rewindHistorySize )
    {
      v9 = &r_rewindData->rewindHistory[v8];
      if ( v9->startOffset == r_rewindData->lastExpectedAssetOffset )
      {
        if ( v9->forAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 265, ASSERT_TYPE_ASSERT, "(!r_alignEntry.forAsset)", (const char *)&queryFormat, "!r_alignEntry.forAsset") )
          __debugbreak();
        if ( v9->endOffset > newAssetStartOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 266, ASSERT_TYPE_ASSERT, "(r_alignEntry.endOffset <= newAssetStartOffset)", (const char *)&queryFormat, "r_alignEntry.endOffset <= newAssetStartOffset") )
          __debugbreak();
        v10 = v7;
        r_rewindData->rewindHistory[v10].rewind = v9->rewind;
        r_rewindData->rewindHistory[v10].endOffset = v9->endOffset;
        v11 = r_rewindData->rewindHistorySize;
        if ( v11 - v8 != 1 )
        {
          memmove_0(&r_rewindData->rewindHistory[v8], &r_rewindData->rewindHistory[v8 + 1], 16i64 * (r_rewindData->rewindHistorySize - v8 - 1));
          v11 = r_rewindData->rewindHistorySize;
        }
        r_rewindData->rewindHistorySize = v11 - 1;
      }
    }
  }
}

/*
==============
DB_PatchMem_UpdateForPostload
==============
*/
void DB_PatchMem_UpdateForPostload(void)
{
  unsigned int posIndex; 
  __int64 v1; 
  RewindStreamData *v2; 
  unsigned int v3; 
  unsigned int historyWalkIndex; 
  unsigned int i; 
  unsigned int rewind; 
  unsigned __int8 *v7; 
  unsigned int ExpectedOffset; 
  unsigned int v9; 
  unsigned int rewindHistorySize; 
  __int64 v11; 
  __int64 v12; 

  if ( !DB_IsInPostload() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1062, ASSERT_TYPE_ASSERT, "(DB_IsInPostload())", (const char *)&queryFormat, "DB_IsInPostload()") )
    __debugbreak();
  if ( !s_rewindPostload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1063, ASSERT_TYPE_ASSERT, "(s_rewindPostload)", (const char *)&queryFormat, "s_rewindPostload") )
    __debugbreak();
  posIndex = g_streamPosGlob.posIndex;
  v1 = g_streamPosGlob.posIndex;
  if ( g_streamPosGlob.posIndex >= 0xB )
  {
    LODWORD(v11) = g_streamPosGlob.posIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1066, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( s_rewind.data ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( s_rewind.data )\n\t%i not in [0, %i)", v11, 11) )
      __debugbreak();
    posIndex = g_streamPosGlob.posIndex;
  }
  v2 = s_rewind.data[v1];
  if ( v2 )
  {
    if ( v2->historyWalkIndex < v2->rewindHistorySize )
    {
      v3 = DB_PatchMem_GetActualOffset(v1) + v2->currentRewind;
      if ( g_streamPosGlob.pos < g_streamPosGlob.archiveBlocks.blocks[v1].data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1085, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.pos >= g_streamPosGlob.archiveBlocks.blocks[streamIndex].data)", (const char *)&queryFormat, "g_streamPosGlob.pos >= g_streamPosGlob.archiveBlocks.blocks[streamIndex].data") )
        __debugbreak();
      g_streamPosGlob.pos += v2->currentRewind;
      if ( v2->historyWalkIndex >= v2->rewindHistorySize )
      {
        LODWORD(v12) = v2->rewindHistorySize;
        LODWORD(v11) = v2->historyWalkIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1089, ASSERT_TYPE_ASSERT, "(unsigned)( rewindData.historyWalkIndex ) < (unsigned)( rewindData.rewindHistorySize )", "rewindData.historyWalkIndex doesn't index rewindData.rewindHistorySize\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      historyWalkIndex = v2->historyWalkIndex;
      for ( i = v2->rewindHistorySize; historyWalkIndex < i; v2->historyWalkIndex = historyWalkIndex )
      {
        if ( v2->rewindHistory[historyWalkIndex].startOffset > v3 )
          break;
        rewind = v2->rewindHistory[historyWalkIndex].rewind;
        if ( rewind > v3 )
          break;
        ++historyWalkIndex;
        v2->currentRewind = rewind;
      }
      if ( v2->currentRewind > v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1112, ASSERT_TYPE_ASSERT, "(rewindData.currentRewind <= currExpectedOffset)", (const char *)&queryFormat, "rewindData.currentRewind <= currExpectedOffset") )
        __debugbreak();
      g_streamPosGlob.pos -= v2->currentRewind;
      if ( g_streamPosGlob.pos < g_streamPosGlob.archiveBlocks.blocks[v1].data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1114, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.pos >= g_streamPosGlob.archiveBlocks.blocks[streamIndex].data)", (const char *)&queryFormat, "g_streamPosGlob.pos >= g_streamPosGlob.archiveBlocks.blocks[streamIndex].data") )
        __debugbreak();
      if ( (unsigned int)DB_PatchMem_GetExpectedOffset(v1) != v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1116, ASSERT_TYPE_ASSERT, "(DB_PatchMem_GetExpectedOffset( streamIndex ) == currExpectedOffset)", (const char *)&queryFormat, "DB_PatchMem_GetExpectedOffset( streamIndex ) == currExpectedOffset") )
        __debugbreak();
      posIndex = g_streamPosGlob.posIndex;
    }
    v7 = &g_streamPosGlob.archiveBlocks.blocks[posIndex].data[g_streamPosGlob.archiveBlocks.blocks[posIndex].size];
    if ( g_streamPosGlob.pos > v7 )
    {
      ExpectedOffset = DB_PatchMem_GetExpectedOffset(posIndex);
      v9 = v2->historyWalkIndex;
      rewindHistorySize = v2->rewindHistorySize;
      if ( v9 >= rewindHistorySize )
      {
LABEL_41:
        LODWORD(v11) = g_streamPosGlob.posIndex;
        if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1054, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Stream overflow for stream %d, by %zu bytes", v11, g_streamPosGlob.pos - v7) )
          return;
        goto LABEL_42;
      }
      while ( v2->rewindHistory[v9].startOffset > ExpectedOffset || v2->rewindHistory[v9].endOffset <= ExpectedOffset )
      {
        if ( ++v9 >= rewindHistorySize )
          goto LABEL_41;
      }
    }
  }
  else if ( g_streamPosGlob.pos > &g_streamPosGlob.archiveBlocks.blocks[posIndex].data[g_streamPosGlob.archiveBlocks.blocks[posIndex].size] )
  {
    LODWORD(v12) = posIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.h", 132, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.pos + size <= g_streamPosGlob.archiveBlocks.blocks[g_streamPosGlob.posIndex].data + g_streamPosGlob.archiveBlocks.blocks[g_streamPosGlob.posIndex].size)", "%s\n\tStream %d overrun", "g_streamPosGlob.pos + size <= g_streamPosGlob.archiveBlocks.blocks[g_streamPosGlob.posIndex].data + g_streamPosGlob.archiveBlocks.blocks[g_streamPosGlob.posIndex].size", v12) )
LABEL_42:
      __debugbreak();
  }
}

/*
==============
DB_PatchMem_ValidatePostloadStream
==============
*/
void DB_PatchMem_ValidatePostloadStream(DBStreamStart streamStart, const void *ptr, unsigned __int64 size)
{
  unsigned __int8 *pos; 
  unsigned int v4; 
  __int64 posIndex; 
  RewindStreamData *v9; 
  unsigned int ExpectedOffset; 
  unsigned int rewindHistorySize; 
  __int64 v12; 
  __int64 v13; 

  pos = g_streamPosGlob.pos;
  v4 = 0;
  if ( streamStart == (ptr != g_streamPosGlob.pos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1131, ASSERT_TYPE_ASSERT, "(streamStart != ( ( ptr == curStreamPosPtr ) ? DBStreamStart::AtStart : DBStreamStart::NotAtStart ))", (const char *)&queryFormat, "streamStart != ( ( ptr == curStreamPosPtr ) ? DBStreamStart::AtStart : DBStreamStart::NotAtStart )") )
    __debugbreak();
  posIndex = g_streamPosGlob.posIndex;
  if ( g_streamPosGlob.posIndex >= 0xB )
  {
    LODWORD(v12) = g_streamPosGlob.posIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1134, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( ( sizeof( *array_counter( s_rewind.data ) ) + 0 ) )", "streamIndex doesn't index ARRAY_COUNT( s_rewind.data )\n\t%i not in [0, %i)", v12, 11) )
      __debugbreak();
  }
  if ( streamStart != NotAtStart )
    goto LABEL_16;
  if ( ptr != pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1139, ASSERT_TYPE_ASSERT, "(ptr == curStreamPosPtr)", (const char *)&queryFormat, "ptr == curStreamPosPtr") )
    __debugbreak();
  v9 = s_rewind.data[posIndex];
  if ( v9 && (ExpectedOffset = DB_PatchMem_GetExpectedOffset(posIndex), (rewindHistorySize = v9->rewindHistorySize) != 0) )
  {
    while ( ExpectedOffset < v9->rewindHistory[0].startOffset || ExpectedOffset >= v9->rewindHistory[0].endOffset )
    {
      ++v4;
      v9 = (RewindStreamData *)((char *)v9 + 16);
      if ( v4 >= rewindHistorySize )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    LODWORD(v13) = streamStart;
    LODWORD(v12) = posIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1163, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "DB_PatchMem_ValidatePostloadStream: Fail. %u %d %p %p %zu", v12, v13, ptr, pos, size) )
      __debugbreak();
  }
}

/*
==============
DB_PopSharedData
==============
*/
void DB_PopSharedData(void)
{
  unsigned int v0; 
  __int64 v1; 
  signed int v3; 
  unsigned int *lastSharedPush; 
  __int64 v5; 

  if ( !s_rewind.assets.sharedDataPushCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1302, ASSERT_TYPE_ASSERT, "(s_rewind.assets.sharedDataPushCount > 0)", (const char *)&queryFormat, "s_rewind.assets.sharedDataPushCount > 0") )
    __debugbreak();
  --s_rewind.assets.sharedDataPushCount;
  if ( s_rewind.assets.stackPos )
  {
    v0 = s_rewind.assets.stackPos - 1;
    if ( s_rewind.assets.stackPos - 1 >= 2 )
    {
      LODWORD(v5) = s_rewind.assets.stackPos - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1315, ASSERT_TYPE_ASSERT, "(unsigned)( stackIndex ) < (unsigned)( ( sizeof( *array_counter( s_rewind.assets.stack ) ) + 0 ) )", "stackIndex doesn't index ARRAY_COUNT( s_rewind.assets.stack )\n\t%i not in [0, %i)", v5, 2) )
        __debugbreak();
    }
    v1 = v0;
    if ( s_rewind.assets.stack[v1].sharedPushCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1319, ASSERT_TYPE_ASSERT, "(stackEntry.sharedPushCount > 0)", (const char *)&queryFormat, "stackEntry.sharedPushCount > 0") )
      __debugbreak();
    if ( s_rewind.assets.stack[v1].sharedPushCount-- == 1 )
    {
      v3 = 0;
      lastSharedPush = s_rewind.assets.stack[v1].lastSharedPush;
      do
      {
        if ( *lastSharedPush != -1 && *lastSharedPush < (unsigned int)DB_PatchMem_GetExpectedOffset(v3) )
          *lastSharedPush = -1;
        ++v3;
        ++lastSharedPush;
      }
      while ( v3 < 11 );
    }
  }
}

/*
==============
DB_PushSharedData
==============
*/
void DB_PushSharedData(void)
{
  unsigned int v0; 
  __int64 v1; 
  int sharedPushCount; 
  unsigned int *lastSharedPush; 
  signed int i; 

  ++s_rewind.assets.sharedDataPushCount;
  if ( s_rewind.assets.stackPos )
  {
    v0 = s_rewind.assets.stackPos - 1;
    if ( s_rewind.assets.stackPos - 1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_patchmem.cpp", 1279, ASSERT_TYPE_ASSERT, "(unsigned)( stackIndex ) < (unsigned)( ( sizeof( *array_counter( s_rewind.assets.stack ) ) + 0 ) )", "stackIndex doesn't index ARRAY_COUNT( s_rewind.assets.stack )\n\t%i not in [0, %i)", s_rewind.assets.stackPos - 1, 2) )
      __debugbreak();
    v1 = v0;
    sharedPushCount = s_rewind.assets.stack[v1].sharedPushCount;
    if ( !sharedPushCount )
    {
      lastSharedPush = s_rewind.assets.stack[v1].lastSharedPush;
      for ( i = 0; i < 11; ++i )
      {
        if ( *lastSharedPush != -1 )
          *lastSharedPush = DB_PatchMem_GetExpectedOffset(i);
        ++lastSharedPush;
      }
      sharedPushCount = s_rewind.assets.stack[v1].sharedPushCount;
    }
    s_rewind.assets.stack[v1].sharedPushCount = sharedPushCount + 1;
  }
}

