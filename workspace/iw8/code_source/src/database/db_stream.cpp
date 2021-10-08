/*
==============
DB_CloseStreams
==============
*/

void DB_CloseStreams(void)
{
  ?DB_CloseStreams@@YAXXZ();
}

/*
==============
DB_RefreshStream
==============
*/

void __fastcall DB_RefreshStream(const XArchiveBlocks *const archiveBlocks, unsigned int blockIndex)
{
  ?DB_RefreshStream@@YAXQEBUXArchiveBlocks@@I@Z(archiveBlocks, blockIndex);
}

/*
==============
DB_PushStreamPos
==============
*/

void __fastcall DB_PushStreamPos(unsigned int index)
{
  ?DB_PushStreamPos@@YAXI@Z(index);
}

/*
==============
DB_InsertPointer
==============
*/

unsigned __int8 *__fastcall DB_InsertPointer()
{
  return ?DB_InsertPointer@@YAPEAEXZ();
}

/*
==============
DB_PopPreloadProcessing
==============
*/

void DB_PopPreloadProcessing(void)
{
  ?DB_PopPreloadProcessing@@YAXXZ();
}

/*
==============
DB_InitStreams
==============
*/

void __fastcall DB_InitStreams(const XArchiveBlocks *const archiveBlocks)
{
  ?DB_InitStreams@@YAXQEBUXArchiveBlocks@@@Z(archiveBlocks);
}

/*
==============
DB_PopStreamPos
==============
*/

void DB_PopStreamPos(void)
{
  ?DB_PopStreamPos@@YAXXZ();
}

/*
==============
DB_PushPreloadProcessing
==============
*/

void DB_PushPreloadProcessing(void)
{
  ?DB_PushPreloadProcessing@@YAXXZ();
}

/*
==============
DB_WalkDataProcessedInPreload
==============
*/

void DB_WalkDataProcessedInPreload(void)
{
  ?DB_WalkDataProcessedInPreload@@YAXXZ();
}

/*
==============
DB_IsInPreloadProcessing
==============
*/

bool __fastcall DB_IsInPreloadProcessing()
{
  return ?DB_IsInPreloadProcessing@@YA_NXZ();
}

/*
==============
DB_CloseStreams
==============
*/
void DB_CloseStreams(void)
{
  memset_0(&g_streamPosGlob, 0, sizeof(g_streamPosGlob));
}

/*
==============
DB_InitStreams
==============
*/
void DB_InitStreams(const XArchiveBlocks *const archiveBlocks)
{
  unsigned __int8 **posArray; 
  const unsigned int *v15; 
  unsigned int v16; 
  unsigned __int8 *data; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  _RSI = archiveBlocks;
  if ( !archiveBlocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 57, ASSERT_TYPE_ASSERT, "(archiveBlocks)", (const char *)&queryFormat, "archiveBlocks") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  _RCX = &g_streamPosGlob;
  __asm
  {
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rsi+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
    vmovups xmm0, xmmword ptr [rsi+20h]
    vmovups xmmword ptr [rcx+20h], xmm0
    vmovups xmm1, xmmword ptr [rsi+30h]
    vmovups xmmword ptr [rcx+30h], xmm1
    vmovups xmm0, xmmword ptr [rsi+40h]
    vmovups xmmword ptr [rcx+40h], xmm0
    vmovups xmm1, xmmword ptr [rsi+50h]
    vmovups xmmword ptr [rcx+50h], xmm1
    vmovups xmm0, xmmword ptr [rsi+60h]
    vmovups xmmword ptr [rcx+60h], xmm0
    vmovups xmm0, xmmword ptr [rsi+70h]
    vmovups xmmword ptr [rcx+70h], xmm0
    vmovups xmm1, xmmword ptr [rsi+80h]
    vmovups xmmword ptr [rcx+80h], xmm1
    vmovups xmm0, xmmword ptr [rsi+90h]
    vmovups xmmword ptr [rcx+90h], xmm0
    vmovups xmm1, xmmword ptr [rsi+0A0h]
    vmovups xmmword ptr [rcx+0A0h], xmm1
  }
  g_streamPosGlob.posIndex = 1;
  posArray = g_streamPosGlob.posArray;
  v15 = DB_XFILE_ALIGNMENT_0;
  v16 = 0;
  g_streamPosGlob.pos = _RSI->blocks[1].data;
  g_streamPosGlob.posStackIndex = 0;
  do
  {
    data = _RSI->blocks[0].data;
    if ( _RSI->blocks[0].data )
    {
      v18 = *v15;
      if ( (!*v15 || ((v18 - 1) & v18) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
        __debugbreak();
      if ( ((v18 - 1) & (unsigned __int64)data) != 0 )
      {
        LODWORD(v20) = *v15;
        LODWORD(v19) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 77, ASSERT_TYPE_ASSERT, "( IsAligned( archiveBlocks->blocks[i].data, DB_XFILE_ALIGNMENT[i] ) )", "stream %d has bad alignment, wanted %u", v19, v20) )
          __debugbreak();
      }
      data = _RSI->blocks[0].data;
    }
    *posArray = data;
    ++v16;
    ++posArray;
    ++v15;
    _RSI = (const XArchiveBlocks *)((char *)_RSI + 16);
  }
  while ( v16 < 0xB );
}

/*
==============
DB_InsertPointer
==============
*/
unsigned __int8 *DB_InsertPointer()
{
  unsigned int posStackIndex; 
  unsigned __int8 *pos; 
  unsigned __int8 *v2; 
  unsigned int v3; 
  unsigned __int8 *v4; 
  unsigned int posIndex; 
  unsigned int v6; 
  unsigned __int8 *result; 
  __int64 index; 
  __int64 v9; 

  if ( g_streamPosGlob.posIndex >= 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 122, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.posIndex < ( sizeof( *array_counter( g_streamPosGlob.posArray ) ) + 0 ))", (const char *)&queryFormat, "g_streamPosGlob.posIndex < ARRAY_COUNT( g_streamPosGlob.posArray )") )
    __debugbreak();
  if ( g_streamPosGlob.posStackIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 123, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.posStackIndex < ( sizeof( *array_counter( g_streamPosGlob.posStack ) ) + 0 ))", (const char *)&queryFormat, "g_streamPosGlob.posStackIndex < ARRAY_COUNT( g_streamPosGlob.posStack )") )
    __debugbreak();
  g_streamPosGlob.posStack[g_streamPosGlob.posStackIndex].index = g_streamPosGlob.posIndex;
  posStackIndex = ++g_streamPosGlob.posStackIndex;
  if ( g_streamPosGlob.posIndex == 8 )
  {
    pos = g_streamPosGlob.pos;
  }
  else
  {
    g_streamPosGlob.posArray[g_streamPosGlob.posIndex] = g_streamPosGlob.pos;
    pos = g_streamPosGlob.posArray[8];
    posStackIndex = g_streamPosGlob.posStackIndex;
    g_streamPosGlob.pos = g_streamPosGlob.posArray[8];
    g_streamPosGlob.posIndex = 8;
  }
  g_streamPosGlob.posArray[2 * posStackIndex + 10] = pos;
  DB_PatchMem_FixStreamAlignment(7ui64);
  DB_CheckCanIncStreamPos(0i64);
  v2 = g_streamPosGlob.pos;
  if ( !g_streamPosGlob.pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.h", 181, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.pos)", (const char *)&queryFormat, "g_streamPosGlob.pos") )
    __debugbreak();
  DB_CheckCanIncStreamPos(8ui64);
  v3 = g_streamPosGlob.posStackIndex;
  v4 = g_streamPosGlob.pos + 8;
  g_streamPosGlob.pos += 8;
  if ( !g_streamPosGlob.posStackIndex )
  {
    LODWORD(v9) = g_streamPosGlob.posStackIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 138, ASSERT_TYPE_ASSERT, "( ( g_streamPosGlob.posStackIndex > 0 ) )", "( g_streamPosGlob.posStackIndex ) = %i", v9) )
      __debugbreak();
    v4 = g_streamPosGlob.pos;
    v3 = g_streamPosGlob.posStackIndex;
  }
  posIndex = g_streamPosGlob.posIndex;
  v6 = v3 - 1;
  g_streamPosGlob.posStackIndex = v6;
  if ( g_streamPosGlob.posIndex == 1 )
  {
    if ( v4 < g_streamPosGlob.posStack[v6].pos )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 173, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.pos >= g_streamPosGlob.posStack[g_streamPosGlob.posStackIndex].pos)", (const char *)&queryFormat, "g_streamPosGlob.pos >= g_streamPosGlob.posStack[g_streamPosGlob.posStackIndex].pos") )
        __debugbreak();
      posIndex = g_streamPosGlob.posIndex;
      v6 = g_streamPosGlob.posStackIndex;
    }
    v4 = g_streamPosGlob.posStack[v6].pos;
  }
  else
  {
    if ( g_streamPosGlob.posIndex != 2 )
      goto LABEL_26;
    v4 = (unsigned __int8 *)((unsigned __int64)(v4 + 31) & 0xFFFFFFFFFFFFFFE0ui64);
  }
  g_streamPosGlob.pos = v4;
LABEL_26:
  result = v2;
  index = g_streamPosGlob.posStack[v6].index;
  if ( (_DWORD)index != posIndex )
  {
    g_streamPosGlob.posArray[posIndex] = v4;
    g_streamPosGlob.posIndex = index;
    g_streamPosGlob.pos = g_streamPosGlob.posArray[index];
  }
  return result;
}

/*
==============
DB_IsInPreloadProcessing
==============
*/
bool DB_IsInPreloadProcessing()
{
  return s_preloadProcesssing > 0;
}

/*
==============
DB_PopPreloadProcessing
==============
*/
void DB_PopPreloadProcessing(void)
{
  if ( s_preloadProcesssing <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 230, ASSERT_TYPE_ASSERT, "(s_preloadProcesssing > 0)", (const char *)&queryFormat, "s_preloadProcesssing > 0") )
    __debugbreak();
  if ( !--s_preloadProcesssing )
    DB_PreloadPackedWalk_LastPop();
}

/*
==============
DB_PopStreamPos
==============
*/
void DB_PopStreamPos(void)
{
  unsigned int posStackIndex; 
  unsigned int posIndex; 
  unsigned int v2; 
  unsigned __int8 *pos; 
  __int64 index; 

  posStackIndex = g_streamPosGlob.posStackIndex;
  if ( !g_streamPosGlob.posStackIndex )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 138, ASSERT_TYPE_ASSERT, "( ( g_streamPosGlob.posStackIndex > 0 ) )", "( g_streamPosGlob.posStackIndex ) = %i", g_streamPosGlob.posStackIndex) )
      __debugbreak();
    posStackIndex = g_streamPosGlob.posStackIndex;
  }
  posIndex = g_streamPosGlob.posIndex;
  v2 = posStackIndex - 1;
  g_streamPosGlob.posStackIndex = posStackIndex - 1;
  if ( g_streamPosGlob.posIndex == 1 )
  {
    if ( g_streamPosGlob.pos < g_streamPosGlob.posStack[v2].pos )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 173, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.pos >= g_streamPosGlob.posStack[g_streamPosGlob.posStackIndex].pos)", (const char *)&queryFormat, "g_streamPosGlob.pos >= g_streamPosGlob.posStack[g_streamPosGlob.posStackIndex].pos") )
        __debugbreak();
      posIndex = g_streamPosGlob.posIndex;
      v2 = g_streamPosGlob.posStackIndex;
    }
    pos = g_streamPosGlob.posStack[v2].pos;
  }
  else
  {
    pos = g_streamPosGlob.pos;
    if ( g_streamPosGlob.posIndex != 2 )
      goto LABEL_14;
    pos = (unsigned __int8 *)((unsigned __int64)(g_streamPosGlob.pos + 31) & 0xFFFFFFFFFFFFFFE0ui64);
  }
  g_streamPosGlob.pos = pos;
LABEL_14:
  index = g_streamPosGlob.posStack[v2].index;
  if ( (_DWORD)index != posIndex )
  {
    g_streamPosGlob.posArray[posIndex] = pos;
    g_streamPosGlob.posIndex = index;
    g_streamPosGlob.pos = g_streamPosGlob.posArray[index];
  }
}

/*
==============
DB_PushPreloadProcessing
==============
*/
void DB_PushPreloadProcessing(void)
{
  int v0; 

  v0 = s_preloadProcesssing;
  if ( s_preloadProcesssing >= 3 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 216, ASSERT_TYPE_ASSERT, "(s_preloadProcesssing < MAX_PRELOAD_PROCESSING_LEVELS)", (const char *)&queryFormat, "s_preloadProcesssing < MAX_PRELOAD_PROCESSING_LEVELS") )
      __debugbreak();
    v0 = s_preloadProcesssing;
  }
  if ( v0 )
  {
    s_preloadProcesssing = v0 + 1;
  }
  else
  {
    DB_PreloadPackedWalk_FirstPush();
    ++s_preloadProcesssing;
  }
}

/*
==============
DB_PushStreamPos
==============
*/
void DB_PushStreamPos(unsigned int index)
{
  __int64 v1; 
  unsigned int posStackIndex; 
  unsigned __int8 *pos; 

  v1 = index;
  if ( index >= 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 121, ASSERT_TYPE_ASSERT, "(index < ( sizeof( *array_counter( g_streamPosGlob.posArray ) ) + 0 ))", (const char *)&queryFormat, "index < ARRAY_COUNT( g_streamPosGlob.posArray )") )
    __debugbreak();
  if ( g_streamPosGlob.posIndex >= 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 122, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.posIndex < ( sizeof( *array_counter( g_streamPosGlob.posArray ) ) + 0 ))", (const char *)&queryFormat, "g_streamPosGlob.posIndex < ARRAY_COUNT( g_streamPosGlob.posArray )") )
    __debugbreak();
  if ( g_streamPosGlob.posStackIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 123, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.posStackIndex < ( sizeof( *array_counter( g_streamPosGlob.posStack ) ) + 0 ))", (const char *)&queryFormat, "g_streamPosGlob.posStackIndex < ARRAY_COUNT( g_streamPosGlob.posStack )") )
    __debugbreak();
  g_streamPosGlob.posStack[g_streamPosGlob.posStackIndex].index = g_streamPosGlob.posIndex;
  posStackIndex = ++g_streamPosGlob.posStackIndex;
  if ( (_DWORD)v1 == g_streamPosGlob.posIndex )
  {
    pos = g_streamPosGlob.pos;
  }
  else
  {
    g_streamPosGlob.posArray[g_streamPosGlob.posIndex] = g_streamPosGlob.pos;
    posStackIndex = g_streamPosGlob.posStackIndex;
    g_streamPosGlob.posIndex = v1;
    pos = g_streamPosGlob.posArray[v1];
    g_streamPosGlob.pos = pos;
  }
  g_streamPosGlob.posArray[2 * posStackIndex + 10] = pos;
}

/*
==============
DB_RefreshStream
==============
*/
void DB_RefreshStream(const XArchiveBlocks *const archiveBlocks, unsigned int blockIndex)
{
  __int64 v2; 
  unsigned int v4; 
  StreamPosGlob *v5; 
  signed __int64 v6; 

  v2 = blockIndex;
  _R14 = archiveBlocks;
  if ( !archiveBlocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 87, ASSERT_TYPE_ASSERT, "(archiveBlocks)", (const char *)&queryFormat, "archiveBlocks") )
    __debugbreak();
  v4 = 0;
  v5 = &g_streamPosGlob;
  v6 = (char *)_R14 - (char *)&g_streamPosGlob;
  do
  {
    if ( v4 != (_DWORD)v2 )
    {
      if ( *(unsigned __int8 **)((char *)&v5->archiveBlocks.blocks[0].data + v6) != v5->archiveBlocks.blocks[0].data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 93, ASSERT_TYPE_ASSERT, "(archiveBlocks->blocks[i].data == g_streamPosGlob.archiveBlocks.blocks[i].data)", (const char *)&queryFormat, "archiveBlocks->blocks[i].data == g_streamPosGlob.archiveBlocks.blocks[i].data") )
        __debugbreak();
      if ( *(unsigned __int64 *)((char *)&v5->archiveBlocks.blocks[0].size + v6) != v5->archiveBlocks.blocks[0].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.cpp", 94, ASSERT_TYPE_ASSERT, "(archiveBlocks->blocks[i].size == g_streamPosGlob.archiveBlocks.blocks[i].size)", (const char *)&queryFormat, "archiveBlocks->blocks[i].size == g_streamPosGlob.archiveBlocks.blocks[i].size") )
        __debugbreak();
    }
    ++v4;
    v5 = (StreamPosGlob *)((char *)v5 + 16);
  }
  while ( v4 < 0xB );
  _R12 = &g_streamPosGlob;
  _RAX = 2 * v2;
  __asm
  {
    vmovups xmm0, xmmword ptr [r14+rax*8]
    vmovups xmmword ptr [r12+rax*8], xmm0
  }
  g_streamPosGlob.posArray[v2] = _R14->blocks[v2].data;
}

/*
==============
DB_WalkDataProcessedInPreload
==============
*/

void DB_WalkDataProcessedInPreload(void)
{
  DB_PreloadPackedWalk_WalkData();
}

