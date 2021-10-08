/*
==============
DB_AuthLoad_InflateInit
==============
*/

void __fastcall DB_AuthLoad_InflateInit(DB_AuthLoadReader *const reader, const int isSecure, const char *const filename, const EncryptionInfo *keyserverEncryption)
{
  ?DB_AuthLoad_InflateInit@@YAXQEAUDB_AuthLoadReader@@HQEBDPEBUEncryptionInfo@@@Z(reader, isSecure, filename, keyserverEncryption);
}

/*
==============
DB_AuthLoad_InflateEnd
==============
*/

void __fastcall DB_AuthLoad_InflateEnd(DB_AuthLoadReader *const reader)
{
  ?DB_AuthLoad_InflateEnd@@YAXQEAUDB_AuthLoadReader@@@Z(reader);
}

/*
==============
DB_AuthLoad_Inflate
==============
*/

DB_AuthLoad_Return __fastcall DB_AuthLoad_Inflate(DB_AuthLoadReader *const reader)
{
  return ?DB_AuthLoad_Inflate@@YA?AW4DB_AuthLoad_Return@@QEAUDB_AuthLoadReader@@@Z(reader);
}

/*
==============
DB_AuthLoad_OneTimeInit
==============
*/

void __fastcall DB_AuthLoad_OneTimeInit(DB_AuthLoadReader *const reader)
{
  ?DB_AuthLoad_OneTimeInit@@YAXQEAUDB_AuthLoadReader@@@Z(reader);
}

/*
==============
DB_AuthLoad_HasAvailIn
==============
*/

bool __fastcall DB_AuthLoad_HasAvailIn(const DB_AuthLoadReader *const reader)
{
  return ?DB_AuthLoad_HasAvailIn@@YA_NQEBUDB_AuthLoadReader@@@Z(reader);
}

/*
==============
DB_AuthLoad_HasAvailIn
==============
*/
bool DB_AuthLoad_HasAvailIn(const DB_AuthLoadReader *const reader)
{
  return reader->state.stream.avail_in != 0;
}

/*
==============
DB_AuthLoad_Inflate
==============
*/
_BOOL8 DB_AuthLoad_Inflate(DB_AuthLoadReader *const reader)
{
  if ( !reader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_auth_load.cpp", 484, ASSERT_TYPE_ASSERT, "(reader)", (const char *)&queryFormat, "reader") )
    __debugbreak();
  if ( !reader->inInflate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_auth_load.cpp", 485, ASSERT_TYPE_ASSERT, "(reader->inInflate)", (const char *)&queryFormat, "reader->inInflate") )
    __debugbreak();
  if ( !reader->state.stream.avail_out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_auth_load.cpp", 489, ASSERT_TYPE_ASSERT, "(stream->avail_out)", (const char *)&queryFormat, "stream->avail_out") )
    __debugbreak();
  return !DB_CmpLoad_Decompress(&reader->state);
}

/*
==============
DB_AuthLoad_InflateEnd
==============
*/
void DB_AuthLoad_InflateEnd(DB_AuthLoadReader *const reader)
{
  if ( !reader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_auth_load.cpp", 441, ASSERT_TYPE_ASSERT, "(reader)", (const char *)&queryFormat, "reader") )
    __debugbreak();
  if ( !reader->inInflate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_auth_load.cpp", 442, ASSERT_TYPE_ASSERT, "(reader->inInflate)", (const char *)&queryFormat, "reader->inInflate") )
    __debugbreak();
  reader->inInflate = 0;
}

/*
==============
DB_AuthLoad_InflateInit
==============
*/
void DB_AuthLoad_InflateInit(DB_AuthLoadReader *const reader, const int isSecure, const char *const filename, const EncryptionInfo *keyserverEncryption)
{
  if ( !reader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_auth_load.cpp", 398, ASSERT_TYPE_ASSERT, "(reader)", (const char *)&queryFormat, "reader") )
    __debugbreak();
  if ( reader->inInflate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_auth_load.cpp", 399, ASSERT_TYPE_ASSERT, "(!reader->inInflate)", (const char *)&queryFormat, "!reader->inInflate") )
    __debugbreak();
  reader->inInflate = 1;
  DB_CmpLoad_ResetForNewFile(&reader->state, keyserverEncryption);
  if ( isSecure && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_auth_load.cpp", 431, ASSERT_TYPE_ASSERT, "(!isSecure)", (const char *)&queryFormat, "!isSecure") )
    __debugbreak();
  reader->state.stream.total_in = 0i64;
  reader->state.stream.total_out = 0i64;
  reader->state.stream.compressor = DB_COMPRESSOR_INVALID;
}

/*
==============
DB_AuthLoad_OneTimeInit
==============
*/
void DB_AuthLoad_OneTimeInit(DB_AuthLoadReader *const reader)
{
  if ( !reader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_auth_load.cpp", 382, ASSERT_TYPE_ASSERT, "(reader)", (const char *)&queryFormat, "reader") )
    __debugbreak();
  DB_CmpLoad_OneTimeInit(&reader->state);
  reader->inInflate = 0;
}

