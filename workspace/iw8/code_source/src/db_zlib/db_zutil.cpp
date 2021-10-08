/*
==============
db_zlibVersion
==============
*/

const char *__fastcall db_zlibVersion()
{
  return ?db_zlibVersion@@YAPEBDXZ();
}

/*
==============
DB_Zip_ShutdownThreadMemory
==============
*/

void __fastcall DB_Zip_ShutdownThreadMemory(db_z_stream_s *stream)
{
  ?DB_Zip_ShutdownThreadMemory@@YAXPEAUdb_z_stream_s@@@Z(stream);
}

/*
==============
db_zError
==============
*/

const char *__fastcall db_zError(int err)
{
  return ?db_zError@@YAPEBDH@Z(err);
}

/*
==============
db_zcalloc
==============
*/

void *__fastcall db_zcalloc(void *opaque, unsigned int items, unsigned int size)
{
  return ?db_zcalloc@@YAPEAXPEAXII@Z(opaque, items, size);
}

/*
==============
db_zcfree
==============
*/

void __fastcall db_zcfree(void *opaque, void *ptr)
{
  ?db_zcfree@@YAXPEAX0@Z(opaque, ptr);
}

/*
==============
DB_Zip_InitThreadMemory
==============
*/

void __fastcall DB_Zip_InitThreadMemory(db_z_stream_s *stream, void *memory, int size)
{
  ?DB_Zip_InitThreadMemory@@YAXPEAUdb_z_stream_s@@PEAXH@Z(stream, memory, size);
}

/*
==============
DB_Zip_InitThreadMemory
==============
*/
void DB_Zip_InitThreadMemory(db_z_stream_s *stream, void *memory, int size)
{
  if ( stream->opaque && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_zlib\\db_zutil.cpp", 88, ASSERT_TYPE_ASSERT, "(!stream->opaque)", (const char *)&queryFormat, "!stream->opaque") )
    __debugbreak();
  if ( ((size - 0x20000) & 0xFFFBFFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_zlib\\db_zutil.cpp", 89, ASSERT_TYPE_ASSERT, "(size == (128 * 1024) || size == (384 * 1024))", (const char *)&queryFormat, "size == DB_ZIP_INFLATE_SIZE || size == DB_ZIP_DEFLATE_SIZE") )
    __debugbreak();
  *(_DWORD *)memory = 0;
  *((_DWORD *)memory + 129) = size - 528;
  *((_QWORD *)memory + 65) = (char *)memory + 528;
  memset_0((char *)memory + 4, 0, 0x200ui64);
  stream->zalloc = db_zcalloc;
  stream->opaque = memory;
  stream->zfree = db_zcfree;
}

/*
==============
DB_Zip_ShutdownThreadMemory
==============
*/
void DB_Zip_ShutdownThreadMemory(db_z_stream_s *stream)
{
  if ( !stream->opaque && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_zlib\\db_zutil.cpp", 105, ASSERT_TYPE_ASSERT, "(stream->opaque)", (const char *)&queryFormat, "stream->opaque") )
    __debugbreak();
  stream->opaque = NULL;
  stream->zfree = NULL;
  stream->zalloc = NULL;
}

/*
==============
db_zError
==============
*/
const char *db_zError(int err)
{
  return db_z_errmsg[2 - err];
}

/*
==============
db_zcalloc
==============
*/
void *db_zcalloc(void *opaque, unsigned int items, unsigned int size)
{
  unsigned int v6; 
  __int64 v7; 
  int v8; 
  void *v9; 
  __int64 v10; 
  void *result; 
  __int64 v12; 

  if ( !opaque && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_zlib\\db_zutil.cpp", 152, ASSERT_TYPE_ASSERT, "(zipInfo)", (const char *)&queryFormat, "zipInfo") )
    __debugbreak();
  v6 = size * items;
  if ( !opaque && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_zlib\\db_zutil.cpp", 117, ASSERT_TYPE_ASSERT, "(zipInfo)", (const char *)&queryFormat, "zipInfo") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_zlib\\db_zutil.cpp", 118, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  if ( *(_DWORD *)opaque >= 0x7Fu )
  {
    LODWORD(v12) = *(_DWORD *)opaque;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_zlib\\db_zutil.cpp", 119, ASSERT_TYPE_ASSERT, "(unsigned)( zipInfo->offsetCount ) < (unsigned)( ( sizeof( *array_counter( zipInfo->offsets ) ) + 0 ) - 1 )", "zipInfo->offsetCount doesn't index ARRAY_COUNT( zipInfo->offsets ) - 1\n\t%i not in [0, %i)", v12, 127) )
      __debugbreak();
  }
  v7 = *((int *)opaque + *(int *)opaque + 1);
  v8 = v6 + v7;
  v9 = (void *)(*((_QWORD *)opaque + 65) + v7);
  if ( v8 > *((_DWORD *)opaque + 129) )
  {
    LODWORD(v12) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_zlib\\db_zutil.cpp", 125, ASSERT_TYPE_ASSERT, "( ( offset <= zipInfo->size ) )", "( offset ) = %i", v12) )
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
db_zcfree
==============
*/
void db_zcfree(void *opaque, void *ptr)
{
  __int64 v4; 
  char *v5; 
  __int64 v6; 

  if ( !opaque )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_zlib\\db_zutil.cpp", 173, ASSERT_TYPE_ASSERT, "(zipInfo)", (const char *)&queryFormat, "zipInfo") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_zlib\\db_zutil.cpp", 135, ASSERT_TYPE_ASSERT, "(zipInfo)", (const char *)&queryFormat, "zipInfo") )
      __debugbreak();
  }
  if ( *(int *)opaque <= 0 )
  {
    LODWORD(v6) = *(_DWORD *)opaque;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_zlib\\db_zutil.cpp", 136, ASSERT_TYPE_ASSERT, "( ( zipInfo->offsetCount > 0 ) )", "( zipInfo->offsetCount ) = %i", v6) )
      __debugbreak();
  }
  v4 = *(int *)opaque;
  v5 = (char *)ptr - *((_QWORD *)opaque + 65);
  *(_DWORD *)opaque = v4 - 1;
  if ( v5 != (char *)*((int *)opaque + v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_zlib\\db_zutil.cpp", 138, ASSERT_TYPE_ASSERT, "((byte *)ptr - zipInfo->buffer == zipInfo->offsets[zipInfo->offsetCount])", (const char *)&queryFormat, "(byte *)ptr - zipInfo->buffer == zipInfo->offsets[zipInfo->offsetCount]") )
    __debugbreak();
}

/*
==============
db_zlibVersion
==============
*/
const char *db_zlibVersion()
{
  return "1.1.4";
}

