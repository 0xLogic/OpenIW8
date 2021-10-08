/*
==============
DB_GetRawBufferInflate
==============
*/

void __fastcall DB_GetRawBufferInflate(const RawFile *const rawfile, char *const buf, const int size, DBZlibInflateBuf *const inflateBuf)
{
  ?DB_GetRawBufferInflate@@YAXQEBURawFile@@QEADHQEAUDBZlibInflateBuf@@@Z(rawfile, buf, size, inflateBuf);
}

/*
==============
DB_GetRawBuffer
==============
*/

void __fastcall DB_GetRawBuffer(const RawFile *rawfile, char *buf, int size)
{
  ?DB_GetRawBuffer@@YAXPEBURawFile@@PEADH@Z(rawfile, buf, size);
}

/*
==============
DB_GetRawFileLen
==============
*/

int __fastcall DB_GetRawFileLen(const RawFile *rawfile)
{
  return ?DB_GetRawFileLen@@YAHPEBURawFile@@@Z(rawfile);
}

/*
==============
DB_ReadRawFile
==============
*/

char *__fastcall DB_ReadRawFile(const char *filename, char *buf, int size)
{
  return ?DB_ReadRawFile@@YAPEADPEBDPEADH@Z(filename, buf, size);
}

/*
==============
DB_GetRawBuffer
==============
*/
void DB_GetRawBuffer(const RawFile *rawfile, char *buf, int size)
{
  Mem_LargeLocal v6; 

  Mem_LargeLocal::Mem_LargeLocal(&v6, 0x20000ui64, "DBZlibInflateBuf memory");
  DB_GetRawBufferInflate(rawfile, buf, size, (DBZlibInflateBuf *const)v6.m_ptr);
  Mem_LargeLocal::~Mem_LargeLocal(&v6);
}

/*
==============
DB_GetRawBufferInflate
==============
*/
void DB_GetRawBufferInflate(const RawFile *const rawfile, char *const buf, const int size, DBZlibInflateBuf *const inflateBuf)
{
  int v5; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  db_z_stream_s stream; 

  v5 = rawfile->len + 1;
  if ( v5 > size )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14401DB60, 1048i64, rawfile->name, rawfile->len + 1);
  if ( !rawfile->compressedLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\rawfile_db.cpp", 25, ASSERT_TYPE_ASSERT, "(rawfile->compressedLen)", (const char *)&queryFormat, "rawfile->compressedLen") )
    __debugbreak();
  v8 = v5 - 1;
  v9 = 0;
  stream.next_in = (unsigned __int8 *)rawfile->buffer;
  stream.avail_in = rawfile->compressedLen;
  memset(&stream.total_in, 0, 68);
  memset_0(inflateBuf, 0, sizeof(DBZlibInflateBuf));
  DB_Zip_InitThreadMemory(&stream, inflateBuf, 0x20000);
  if ( db_inflateInit_(&stream, "1.1.4", 80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\rawfile_db.cpp", 37, ASSERT_TYPE_ASSERT, "((db_inflateInit_((&stream), \"1.1.4\", sizeof(db_z_stream))) == (0))", (const char *)&queryFormat, "db_inflateInit( &stream ) == DB_Z_OK") )
    __debugbreak();
  stream.next_out = (unsigned __int8 *)buf;
  stream.avail_out = v8;
  if ( db_inflate(&stream, 2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\rawfile_db.cpp", 42, ASSERT_TYPE_ASSERT, "((db_inflate( &stream, 2 )) == (1))", (const char *)&queryFormat, "db_inflate( &stream, DB_Z_SYNC_FLUSH ) == DB_Z_STREAM_END") )
    __debugbreak();
  if ( (unsigned __int8 *)(stream.next_in - (unsigned __int8 *)rawfile->buffer) != (unsigned __int8 *)rawfile->compressedLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\rawfile_db.cpp", 44, ASSERT_TYPE_ASSERT, "((char *)stream.next_in - rawfile->buffer == rawfile->compressedLen)", (const char *)&queryFormat, "(char *)stream.next_in - rawfile->buffer == rawfile->compressedLen") )
    __debugbreak();
  if ( (unsigned __int8 *)(stream.next_out - (unsigned __int8 *)buf) != (unsigned __int8 *)rawfile->len && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\rawfile_db.cpp", 45, ASSERT_TYPE_ASSERT, "((char *)stream.next_out - buf == rawfile->len)", (const char *)&queryFormat, "(char *)stream.next_out - buf == rawfile->len") )
    __debugbreak();
  if ( stream.avail_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\rawfile_db.cpp", 46, ASSERT_TYPE_ASSERT, "(!stream.avail_in)", (const char *)&queryFormat, "!stream.avail_in") )
    __debugbreak();
  if ( stream.avail_out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\rawfile_db.cpp", 47, ASSERT_TYPE_ASSERT, "(!stream.avail_out)", (const char *)&queryFormat, "!stream.avail_out") )
    __debugbreak();
  v10 = stream.avail_in + stream.avail_out;
  if ( db_inflateEnd(&stream) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\rawfile_db.cpp", 51, ASSERT_TYPE_ASSERT, "((db_inflateEnd( &stream )) == (0))", (const char *)&queryFormat, "db_inflateEnd( &stream ) == DB_Z_OK") )
    __debugbreak();
  DB_Zip_ShutdownThreadMemory(&stream);
  if ( !v10 )
    v9 = v8;
  buf[v9] = 0;
}

/*
==============
DB_GetRawFileLen
==============
*/
__int64 DB_GetRawFileLen(const RawFile *rawfile)
{
  return rawfile->len + 1;
}

/*
==============
DB_ReadRawFile
==============
*/
char *DB_ReadRawFile(const char *filename, char *buf, int size)
{
  const RawFile *rawfile; 
  Mem_LargeLocal v8; 

  rawfile = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, filename, 1).rawfile;
  if ( DB_IsXAssetDefault(ASSET_TYPE_RAWFILE, filename) )
    return 0i64;
  if ( !rawfile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\rawfile_db.cpp", 83, ASSERT_TYPE_ASSERT, "(rawfile)", (const char *)&queryFormat, "rawfile", -2i64) )
    __debugbreak();
  Mem_LargeLocal::Mem_LargeLocal(&v8, 0x20000ui64, "DBZlibInflateBuf memory");
  DB_GetRawBufferInflate(rawfile, buf, size, (DBZlibInflateBuf *const)v8.m_ptr);
  Mem_LargeLocal::~Mem_LargeLocal(&v8);
  return buf;
}

