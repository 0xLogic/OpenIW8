/*
==============
DB_PreloadPackedWalk_Finish
==============
*/

void DB_PreloadPackedWalk_Finish(void)
{
  ?DB_PreloadPackedWalk_Finish@@YAXXZ();
}

/*
==============
DB_PreloadPackedWalk_WalkData
==============
*/

void DB_PreloadPackedWalk_WalkData(void)
{
  ?DB_PreloadPackedWalk_WalkData@@YAXXZ();
}

/*
==============
DB_PreloadPackedWalk_Start
==============
*/

void DB_PreloadPackedWalk_Start(void)
{
  ?DB_PreloadPackedWalk_Start@@YAXXZ();
}

/*
==============
PreloadProcessedSizes::LastPop
==============
*/

void __fastcall PreloadProcessedSizes::LastPop(PreloadProcessedSizes *this)
{
  ?LastPop@PreloadProcessedSizes@@QEAAXXZ(this);
}

/*
==============
DB_PreloadPackedWalk_FirstPush
==============
*/

void DB_PreloadPackedWalk_FirstPush(void)
{
  ?DB_PreloadPackedWalk_FirstPush@@YAXXZ();
}

/*
==============
DB_PreloadPackedWalk_LastPop
==============
*/

void DB_PreloadPackedWalk_LastPop(void)
{
  ?DB_PreloadPackedWalk_LastPop@@YAXXZ();
}

/*
==============
DB_PreloadPackedWalk_Finish
==============
*/
void DB_PreloadPackedWalk_Finish(void)
{
  XZoneTemporaryLoadData *tempData; 

  if ( s_processedSizes.m_pushStreamIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 66, ASSERT_TYPE_ASSERT, "(m_pushStreamIndex == 0xffffffff)", (const char *)&queryFormat, "m_pushStreamIndex == UINT_MAX") )
    __debugbreak();
  tempData = g_streamPosGlob.tempData;
  if ( !g_streamPosGlob.tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", LODWORD(g_streamPosGlob.tempData) + 71, ASSERT_TYPE_ASSERT, "(tempData)", (const char *)&queryFormat, "tempData") )
    __debugbreak();
  tempData->preloadWalkWrite = s_processedSizes.m_packedWrite;
  if ( g_dbPreloading && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_db_patchmem_preload, "db_patchmem_preload") )
  {
    if ( !tempData->preloadRewind && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 78, ASSERT_TYPE_ASSERT, "(tempData->preloadRewind)", (const char *)&queryFormat, "tempData->preloadRewind") )
      __debugbreak();
    DB_PatchMem_GetRewindDataCopy(tempData->preloadRewind);
  }
  s_processedSizes.m_packed = NULL;
  *(_QWORD *)&s_processedSizes.m_packedMaxLen = 0i64;
  s_processedSizes.m_packedRead = 0;
}

/*
==============
DB_PreloadPackedWalk_FirstPush
==============
*/
void DB_PreloadPackedWalk_FirstPush(void)
{
  unsigned int *m_pushOffset; 
  unsigned int v1; 

  if ( s_processedSizes.m_packedRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 98, ASSERT_TYPE_ASSERT, "(m_packedRead == 0)", (const char *)&queryFormat, "m_packedRead == 0") )
    __debugbreak();
  if ( s_processedSizes.m_pushStreamIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 101, ASSERT_TYPE_ASSERT, "(m_pushStreamIndex == 0xffffffff)", (const char *)&queryFormat, "m_pushStreamIndex == UINT_MAX") )
    __debugbreak();
  m_pushOffset = s_processedSizes.m_pushOffset;
  v1 = 0;
  s_processedSizes.m_pushStreamIndex = g_streamPosGlob.posIndex;
  do
    *m_pushOffset++ = DB_PatchMem_GetStreamOffset(v1++);
  while ( v1 < 0xB );
}

/*
==============
DB_PreloadPackedWalk_LastPop
==============
*/
void DB_PreloadPackedWalk_LastPop(void)
{
  PreloadProcessedSizes::LastPop(&s_processedSizes);
}

/*
==============
DB_PreloadPackedWalk_Start
==============
*/
void DB_PreloadPackedWalk_Start(void)
{
  XZoneTemporaryLoadData *tempData; 
  unsigned __int64 size; 

  tempData = g_streamPosGlob.tempData;
  if ( !g_streamPosGlob.tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", LODWORD(g_streamPosGlob.tempData) + 31, ASSERT_TYPE_ASSERT, "(tempData)", (const char *)&queryFormat, "tempData") )
    __debugbreak();
  s_processedSizes.m_packed = tempData->preloadWalkData.data;
  if ( !s_processedSizes.m_packed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 34, ASSERT_TYPE_ASSERT, "(m_packed)", (const char *)&queryFormat, "m_packed") )
    __debugbreak();
  size = tempData->preloadWalkData.size;
  if ( size > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)size, "unsigned", size) )
    __debugbreak();
  s_processedSizes.m_packedMaxLen = size;
  s_processedSizes.m_packedWrite = tempData->preloadWalkWrite;
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_db_patchmem_preload, "db_patchmem_preload") && !g_dbPreloading )
  {
    if ( !tempData->preloadRewind && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 45, ASSERT_TYPE_ASSERT, "(tempData->preloadRewind)", (const char *)&queryFormat, "tempData->preloadRewind") )
      __debugbreak();
    DB_PatchMem_SetRewindDataFromCopy(tempData->preloadRewind);
  }
  s_processedSizes.m_pushStreamIndex = -1;
  s_processedSizes.m_packedRead = 0;
}

/*
==============
DB_PreloadPackedWalk_WalkData
==============
*/
void DB_PreloadPackedWalk_WalkData(void)
{
  unsigned __int8 v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 

  if ( s_processedSizes.m_packedRead >= s_processedSizes.m_packedWrite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 143, ASSERT_TYPE_ASSERT, "(m_packedRead < m_packedWrite)", (const char *)&queryFormat, "m_packedRead < m_packedWrite") )
    __debugbreak();
  while ( 1 )
  {
    if ( (unsigned __int64)s_processedSizes.m_packedRead + 1 > s_processedSizes.m_packedWrite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 200, ASSERT_TYPE_ASSERT, "(( m_packedRead + sizeof( uint8_t ) ) <= m_packedWrite)", (const char *)&queryFormat, "( m_packedRead + sizeof( uint8_t ) ) <= m_packedWrite") )
      __debugbreak();
    v0 = s_processedSizes.m_packed[s_processedSizes.m_packedRead++];
    if ( !v0 )
      break;
    if ( v0 >= 0xBu )
    {
      LODWORD(v3) = 11;
      LODWORD(v2) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 153, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( MAX_XFILE_COUNT )", "streamIndex doesn't index MAX_XFILE_COUNT\n\t%i not in [0, %i)", v2, v3) )
        __debugbreak();
    }
    if ( (unsigned __int64)s_processedSizes.m_packedRead + 4 > s_processedSizes.m_packedWrite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 209, ASSERT_TYPE_ASSERT, "(( m_packedRead + sizeof( uint32_t ) ) <= m_packedWrite)", (const char *)&queryFormat, "( m_packedRead + sizeof( uint32_t ) ) <= m_packedWrite") )
      __debugbreak();
    v1 = *(unsigned int *)&s_processedSizes.m_packed[s_processedSizes.m_packedRead];
    s_processedSizes.m_packedRead += 4;
    if ( g_streamPosGlob.archiveBlocks.blocks[v0].size )
    {
      DB_PushStreamPos(v0);
      g_streamPosGlob.pos += v1;
      DB_PatchMem_UpdateForPostload();
      DB_PopStreamPos();
    }
  }
}

/*
==============
PreloadProcessedSizes::LastPop
==============
*/
void PreloadProcessedSizes::LastPop(PreloadProcessedSizes *this)
{
  unsigned int v2; 
  unsigned int *m_pushOffset; 
  __int64 v4; 
  unsigned int StreamOffset; 
  unsigned int v6; 

  if ( this->m_packedRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 113, ASSERT_TYPE_ASSERT, "(m_packedRead == 0)", (const char *)&queryFormat, "m_packedRead == 0") )
    __debugbreak();
  if ( this->m_pushStreamIndex != g_streamPosGlob.posIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 116, ASSERT_TYPE_ASSERT, "(m_pushStreamIndex == g_streamPosGlob.posIndex)", (const char *)&queryFormat, "m_pushStreamIndex == g_streamPosGlob.posIndex") )
    __debugbreak();
  v2 = 0;
  this->m_pushStreamIndex = -1;
  m_pushOffset = this->m_pushOffset;
  v4 = 0i64;
  do
  {
    StreamOffset = DB_PatchMem_GetStreamOffset(v2);
    if ( StreamOffset < *m_pushOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 124, ASSERT_TYPE_ASSERT, "(offset >= m_pushOffset[i])", (const char *)&queryFormat, "offset >= m_pushOffset[i]") )
      __debugbreak();
    v6 = StreamOffset - *m_pushOffset;
    if ( v6 )
    {
      if ( v2 <= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 129, ASSERT_TYPE_ASSERT, "(!DB_IsTempStreamIndex( i ))", (const char *)&queryFormat, "!DB_IsTempStreamIndex( i )") )
        __debugbreak();
      if ( (unsigned __int64)this->m_packedWrite + 1 > this->m_packedMaxLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 180, ASSERT_TYPE_ASSERT, "(( m_packedWrite + sizeof( uint8_t ) ) <= m_packedMaxLen)", (const char *)&queryFormat, "( m_packedWrite + sizeof( uint8_t ) ) <= m_packedMaxLen") )
        __debugbreak();
      this->m_packed[this->m_packedWrite++] = v2;
      if ( (unsigned __int64)this->m_packedWrite + 4 > this->m_packedMaxLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 190, ASSERT_TYPE_ASSERT, "(( m_packedWrite + sizeof( uint32_t ) ) <= m_packedMaxLen)", (const char *)&queryFormat, "( m_packedWrite + sizeof( uint32_t ) ) <= m_packedMaxLen") )
        __debugbreak();
      *(_DWORD *)&this->m_packed[this->m_packedWrite] = v6;
      this->m_packedWrite += 4;
    }
    ++v2;
    ++v4;
    ++m_pushOffset;
  }
  while ( v2 < 0xB );
  if ( (unsigned __int64)this->m_packedWrite + 1 > this->m_packedMaxLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_packedwalk.cpp", 180, ASSERT_TYPE_ASSERT, "(( m_packedWrite + sizeof( uint8_t ) ) <= m_packedMaxLen)", (const char *)&queryFormat, "( m_packedWrite + sizeof( uint8_t ) ) <= m_packedMaxLen") )
    __debugbreak();
  this->m_packed[this->m_packedWrite++] = 0;
}

