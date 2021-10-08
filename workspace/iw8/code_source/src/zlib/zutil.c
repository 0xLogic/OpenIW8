/*
==============
zcalloc
==============
*/

void *__fastcall zcalloc(void *opaque, unsigned int items, unsigned int size)
{
  return ?zcalloc@@YAPEAXPEAXII@Z(opaque, items, size);
}

/*
==============
zcfree
==============
*/

void __fastcall zcfree(void *opaque, void *ptr)
{
  ?zcfree@@YAXPEAX0@Z(opaque, ptr);
}

/*
==============
zcalloc
==============
*/

void *__fastcall zcalloc(void *opaque, unsigned int items, unsigned int size)
{
  return ft_gzip_alloc((FT_MemoryRec_ *)opaque, items, size);
}

/*
==============
zcfree
==============
*/

void __fastcall zcfree(void *opaque, void *ptr)
{
  ft_gzip_free((FT_MemoryRec_ *)opaque, ptr);
}

/*
==============
zcalloc
==============
*/
void *zcalloc(void *opaque, unsigned int items, unsigned int size)
{
  unsigned int v6; 
  __int64 v7; 
  int v8; 
  void *v9; 
  __int64 v10; 
  void *result; 
  __int64 v12; 

  if ( !opaque && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\zlib\\zutil.c", 418, ASSERT_TYPE_ASSERT, "(zipInfo)", (const char *)&queryFormat, "zipInfo") )
    __debugbreak();
  v6 = size * items;
  if ( !opaque && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\zlib\\zutil.c", 384, ASSERT_TYPE_ASSERT, "(zipInfo)", (const char *)&queryFormat, "zipInfo") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\zlib\\zutil.c", 385, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  if ( *(_DWORD *)opaque >= 0x7Fu )
  {
    LODWORD(v12) = *(_DWORD *)opaque;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\zlib\\zutil.c", 386, ASSERT_TYPE_ASSERT, "(unsigned)( zipInfo->offsetCount ) < (unsigned)( ( sizeof( *array_counter( zipInfo->offsets ) ) + 0 ) - 1 )", "zipInfo->offsetCount doesn't index ARRAY_COUNT( zipInfo->offsets ) - 1\n\t%i not in [0, %i)", v12, 127) )
      __debugbreak();
  }
  v7 = *((int *)opaque + *(int *)opaque + 1);
  v8 = v6 + v7;
  v9 = (void *)(*((_QWORD *)opaque + 65) + v7);
  if ( v8 > *((_DWORD *)opaque + 129) )
  {
    LODWORD(v12) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\zlib\\zutil.c", 392, ASSERT_TYPE_ASSERT, "( ( offset <= zipInfo->size ) )", "( offset ) = %i", v12) )
      __debugbreak();
  }
  v10 = *(int *)opaque;
  result = v9;
  *(_DWORD *)opaque = v10 + 1;
  *((_DWORD *)opaque + v10 + 2) = v8;
  return result;
}

/*
==============
zcfree
==============
*/
void zcfree(void *opaque, void *ptr)
{
  __int64 v4; 
  char *v5; 
  __int64 v6; 

  if ( !opaque )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\zlib\\zutil.c", 437, ASSERT_TYPE_ASSERT, "(zipInfo)", (const char *)&queryFormat, "zipInfo") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\zlib\\zutil.c", 402, ASSERT_TYPE_ASSERT, "(zipInfo)", (const char *)&queryFormat, "zipInfo") )
      __debugbreak();
  }
  if ( *(int *)opaque <= 0 )
  {
    LODWORD(v6) = *(_DWORD *)opaque;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\zlib\\zutil.c", 403, ASSERT_TYPE_ASSERT, "( ( zipInfo->offsetCount > 0 ) )", "( zipInfo->offsetCount ) = %i", v6) )
      __debugbreak();
  }
  v4 = *(int *)opaque;
  v5 = (char *)ptr - *((_QWORD *)opaque + 65);
  *(_DWORD *)opaque = v4 - 1;
  if ( v5 != (char *)*((int *)opaque + v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\zlib\\zutil.c", 405, ASSERT_TYPE_ASSERT, "((byte *)ptr - zipInfo->buffer == zipInfo->offsets[zipInfo->offsetCount])", (const char *)&queryFormat, "(byte *)ptr - zipInfo->buffer == zipInfo->offsets[zipInfo->offsetCount]") )
    __debugbreak();
}

/*
==============
Zip_InitThreadMemory
==============
*/
void Zip_InitThreadMemory(z_stream_s *stream, void *memory, int size)
{
  if ( stream->opaque && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\zlib\\zutil.c", 355, ASSERT_TYPE_ASSERT, "(!stream->opaque)", (const char *)&queryFormat, "!stream->opaque") )
    __debugbreak();
  if ( ((size - 0x20000) & 0xFFFBFFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\zlib\\zutil.c", 356, ASSERT_TYPE_ASSERT, "(size == (128 * 1024) || size == (384 * 1024))", (const char *)&queryFormat, "size == ZIP_INFLATE_SIZE || size == ZIP_DEFLATE_SIZE") )
    __debugbreak();
  *((_DWORD *)memory + 129) = size - 528;
  *((_QWORD *)memory + 65) = (char *)memory + 528;
  *(_QWORD *)memory = 0i64;
  stream->zalloc = zcalloc;
  stream->opaque = memory;
  stream->zfree = zcfree;
}

/*
==============
Zip_ShutdownThreadMemory
==============
*/
void Zip_ShutdownThreadMemory(z_stream_s *stream)
{
  if ( !stream->opaque && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\zlib\\zutil.c", 372, ASSERT_TYPE_ASSERT, "(stream->opaque)", (const char *)&queryFormat, "stream->opaque") )
    __debugbreak();
  stream->opaque = NULL;
  stream->zfree = NULL;
  stream->zalloc = NULL;
}

/*
==============
zError
==============
*/
const char *zError(int err)
{
  return z_errmsg_zlib[2 - err];
}

/*
==============
zlibCompileFlags
==============
*/
__int64 zlibCompileFlags()
{
  return 101i64;
}

/*
==============
zlibVersion
==============
*/
const char *zlibVersion()
{
  return "1.2.8";
}

