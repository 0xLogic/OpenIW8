/*
==============
DB_CheckCanIncStreamPos
==============
*/

void __fastcall DB_CheckCanIncStreamPos(const unsigned __int64 size)
{
  ?DB_CheckCanIncStreamPos@@YAX_K@Z(size);
}

/*
==============
DB_AllocStreamPos
==============
*/

unsigned __int8 *__fastcall DB_AllocStreamPos(unsigned __int64 alignment)
{
  return ?DB_AllocStreamPos@@YAPEAE_K@Z(alignment);
}

/*
==============
DB_IncStreamPos
==============
*/

void __fastcall DB_IncStreamPos(unsigned __int64 size)
{
  ?DB_IncStreamPos@@YAX_K@Z(size);
}

/*
==============
DB_CheckCanIncStreamPos
==============
*/
void DB_CheckCanIncStreamPos(const unsigned __int64 size)
{
  unsigned int posIndex; 

  if ( &g_streamPosGlob.pos[size] > &g_streamPosGlob.archiveBlocks.blocks[g_streamPosGlob.posIndex].data[g_streamPosGlob.archiveBlocks.blocks[g_streamPosGlob.posIndex].size] )
  {
    posIndex = g_streamPosGlob.posIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.h", 132, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.pos + size <= g_streamPosGlob.archiveBlocks.blocks[g_streamPosGlob.posIndex].data + g_streamPosGlob.archiveBlocks.blocks[g_streamPosGlob.posIndex].size)", "%s\n\tStream %d overrun", "g_streamPosGlob.pos + size <= g_streamPosGlob.archiveBlocks.blocks[g_streamPosGlob.posIndex].data + g_streamPosGlob.archiveBlocks.blocks[g_streamPosGlob.posIndex].size", posIndex) )
      __debugbreak();
  }
}

/*
==============
DB_IncStreamPos
==============
*/
void DB_IncStreamPos(unsigned __int64 size)
{
  if ( !g_streamPosGlob.pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.h", 181, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.pos)", (const char *)&queryFormat, "g_streamPosGlob.pos") )
    __debugbreak();
  DB_CheckCanIncStreamPos(size);
  g_streamPosGlob.pos += size;
}

/*
==============
DB_AllocStreamPos
==============
*/
unsigned __int8 *DB_AllocStreamPos(unsigned __int64 alignment)
{
  if ( ((alignment + 1) & alignment) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.h", 157, ASSERT_TYPE_ASSERT, "( ( ( alignment & ( alignment + 1 ) ) == 0 ) )", "( alignment ) = %zu", alignment) )
    __debugbreak();
  if ( alignment )
  {
    DB_PatchMem_FixStreamAlignment(alignment);
    DB_CheckCanIncStreamPos(0i64);
  }
  return g_streamPosGlob.pos;
}

