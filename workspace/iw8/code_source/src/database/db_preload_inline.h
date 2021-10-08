/*
==============
Postload_Stream
==============
*/
void Postload_Stream(const DBStreamStart streamStart, const void *const ptr, const unsigned __int64 size)
{
  if ( streamStart != (ptr != g_streamPosGlob.pos) )
    DB_PatchMem_ValidatePostloadStream(streamStart, ptr, size);
  if ( streamStart != NotAtStart && size )
  {
    if ( size > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_inline.h", 98, ASSERT_TYPE_ASSERT, "(size <= 2147483647i32)", (const char *)&queryFormat, "size <= INT32_MAX") )
      __debugbreak();
    DB_IncStreamPos(size);
  }
}

