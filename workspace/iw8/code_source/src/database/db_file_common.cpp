/*
==============
DB_File_OpenDBFile
==============
*/

bool __fastcall DB_File_OpenDBFile(DBFileHandle *dbFile, const char *filename)
{
  return ?DB_File_OpenDBFile@@YA_NPEAUDBFileHandle@@PEBD@Z(dbFile, filename);
}

/*
==============
DB_File_IsDBFileOpen
==============
*/

bool __fastcall DB_File_IsDBFileOpen(const DBFileHandle *dbFile)
{
  return ?DB_File_IsDBFileOpen@@YA_NPEBUDBFileHandle@@@Z(dbFile);
}

/*
==============
DB_File_CloseDBFile
==============
*/

void __fastcall DB_File_CloseDBFile(DBFileHandle *dbFile)
{
  ?DB_File_CloseDBFile@@YAXPEAUDBFileHandle@@@Z(dbFile);
}

/*
==============
DB_File_OpenDBFileWithFolder
==============
*/

bool __fastcall DB_File_OpenDBFileWithFolder(DBFileHandle *dbFile, Sys_Folder folder, const char *filename)
{
  return ?DB_File_OpenDBFileWithFolder@@YA_NPEAUDBFileHandle@@W4Sys_Folder@@PEBD@Z(dbFile, folder, filename);
}

/*
==============
DB_File_IsFileCacheFileHandle
==============
*/

bool __fastcall DB_File_IsFileCacheFileHandle(const DBFileHandle *dbFile)
{
  return ?DB_File_IsFileCacheFileHandle@@YA_NPEBUDBFileHandle@@@Z(dbFile);
}

/*
==============
DB_File_HandlesMatch
==============
*/

bool __fastcall DB_File_HandlesMatch(const DBFileHandle *first, const DBFileHandle *second)
{
  return ?DB_File_HandlesMatch@@YA_NPEBUDBFileHandle@@0@Z(first, second);
}

/*
==============
DB_File_GetDBFileSize
==============
*/

unsigned __int64 __fastcall DB_File_GetDBFileSize(DBFileHandle *dbFile)
{
  return ?DB_File_GetDBFileSize@@YA_KPEAUDBFileHandle@@@Z(dbFile);
}

/*
==============
DB_File_CloseDBFile
==============
*/
void DB_File_CloseDBFile(DBFileHandle *dbFile)
{
  int v2; 

  if ( !dbFile )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 57, ASSERT_TYPE_ASSERT, "(dbFile)", (const char *)&queryFormat, "dbFile") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 118, ASSERT_TYPE_ASSERT, "(dbFile)", (const char *)&queryFormat, "dbFile") )
      __debugbreak();
  }
  v2 = *(_DWORD *)dbFile->fileID;
  if ( dbFile->dcacheFileID )
  {
    if ( v2 != -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 62, ASSERT_TYPE_ASSERT, "(dbFile->fileID == FileStreamFileID::INVALID)", (const char *)&queryFormat, "dbFile->fileID == FileStreamFileID::INVALID") )
      __debugbreak();
    dbFile->dcacheFileID = 0i64;
  }
  else if ( v2 != -16777217 )
  {
    FileStream_CloseFile((FileStreamFileID)v2);
    *(_DWORD *)dbFile->fileID = -16777217;
  }
}

/*
==============
DB_File_GetDBFileSize
==============
*/
__int64 DB_File_GetDBFileSize(DBFileHandle *dbFile)
{
  unsigned __int64 dcacheFileID; 

  if ( !dbFile )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 91, ASSERT_TYPE_ASSERT, "(dbFile)", (const char *)&queryFormat, "dbFile") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 118, ASSERT_TYPE_ASSERT, "(dbFile)", (const char *)&queryFormat, "dbFile") )
      __debugbreak();
  }
  dcacheFileID = dbFile->dcacheFileID;
  if ( dcacheFileID )
    return DCache_GetFileSize(DCACHE_TYPE_PERSISTENT, dcacheFileID, DCACHE_LOC_PATCH_MAN);
  else
    return FileStream_Easy_FileSize((FileStreamFileID)*(_DWORD *)dbFile->fileID);
}

/*
==============
DB_File_HandlesMatch
==============
*/
bool DB_File_HandlesMatch(const DBFileHandle *first, const DBFileHandle *second)
{
  unsigned __int64 v4; 

  if ( !first && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 108, ASSERT_TYPE_ASSERT, "(first)", (const char *)&queryFormat, "first") )
    __debugbreak();
  if ( !second && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 109, ASSERT_TYPE_ASSERT, "(second)", (const char *)&queryFormat, "second") )
    __debugbreak();
  v4 = *(_QWORD *)first->fileID - *(_QWORD *)second->fileID;
  if ( *(_QWORD *)first->fileID == *(_QWORD *)second->fileID )
    v4 = first->dcacheFileID - second->dcacheFileID;
  return v4 == 0;
}

/*
==============
DB_File_IsDBFileOpen
==============
*/
bool DB_File_IsDBFileOpen(const DBFileHandle *dbFile)
{
  if ( !dbFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 79, ASSERT_TYPE_ASSERT, "(dbFile)", (const char *)&queryFormat, "dbFile") )
    __debugbreak();
  return *(_DWORD *)dbFile->fileID != -16777217 || dbFile->dcacheFileID;
}

/*
==============
DB_File_IsFileCacheFileHandle
==============
*/
bool DB_File_IsFileCacheFileHandle(const DBFileHandle *dbFile)
{
  if ( !dbFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 118, ASSERT_TYPE_ASSERT, "(dbFile)", (const char *)&queryFormat, "dbFile") )
    __debugbreak();
  return dbFile->dcacheFileID != 0;
}

/*
==============
DB_File_OpenDBFile
==============
*/
bool DB_File_OpenDBFile(DBFileHandle *dbFile, const char *filename)
{
  Sys_Folder v4; 
  unsigned __int64 FileIDByFilename; 
  int v6; 
  bool result; 

  if ( !dbFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 17, ASSERT_TYPE_ASSERT, "(dbFile)", (const char *)&queryFormat, "dbFile") )
    __debugbreak();
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 18, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  if ( !dbFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 79, ASSERT_TYPE_ASSERT, "(dbFile)", (const char *)&queryFormat, "dbFile") )
    __debugbreak();
  if ( (*(_DWORD *)dbFile->fileID != -16777217 || dbFile->dcacheFileID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 19, ASSERT_TYPE_ASSERT, "( ( !DB_File_IsDBFileOpen( dbFile ) ) )", "( filename ) = %s", filename) )
    __debugbreak();
  v4 = SF_ZONE;
  if ( DB_Zones_IsLocalizedZoneName(filename) )
  {
    v4 = SF_ZONE_LOC;
  }
  else if ( DB_Zones_IsRegionalZoneName(filename) )
  {
    v4 = SF_ZONE_REGION;
  }
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 36, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  FileIDByFilename = DCache_GetFileIDByFilename(filename, DCACHE_TYPE_PERSISTENT, DCACHE_LOC_PATCH_MAN);
  dbFile->dcacheFileID = FileIDByFilename;
  result = 1;
  if ( !FileIDByFilename )
  {
    LOBYTE(v6) = FileStream_OpenFile(v4, filename, 25);
    *(_DWORD *)dbFile->fileID = v6;
    if ( v6 == -16777217 )
      return 0;
  }
  return result;
}

/*
==============
DB_File_OpenDBFileWithFolder
==============
*/
bool DB_File_OpenDBFileWithFolder(DBFileHandle *dbFile, Sys_Folder folder, const char *filename)
{
  unsigned __int64 FileIDByFilename; 
  int v7; 
  bool result; 

  if ( !dbFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 35, ASSERT_TYPE_ASSERT, "(dbFile)", (const char *)&queryFormat, "dbFile") )
    __debugbreak();
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_common.cpp", 36, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  FileIDByFilename = DCache_GetFileIDByFilename(filename, DCACHE_TYPE_PERSISTENT, DCACHE_LOC_PATCH_MAN);
  dbFile->dcacheFileID = FileIDByFilename;
  result = 1;
  if ( !FileIDByFilename )
  {
    LOBYTE(v7) = FileStream_OpenFile(folder, filename, 25);
    *(_DWORD *)dbFile->fileID = v7;
    if ( v7 == -16777217 )
      return 0;
  }
  return result;
}

