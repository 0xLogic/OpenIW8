/*
==============
Com_IsAddonMap
==============
*/

bool __fastcall Com_IsAddonMap(const char *mapName, const char **pBaseMapName)
{
  return ?Com_IsAddonMap@@YA_NPEBDPEAPEBD@Z(mapName, pBaseMapName);
}

/*
==============
FS_FOpenFileWriteCurrentThread
==============
*/

fileHandle_t *__fastcall FS_FOpenFileWriteCurrentThread(fileHandle_t *result, const char *filename)
{
  return ?FS_FOpenFileWriteCurrentThread@@YA?AUfileHandle_t@@PEBD@Z(result, filename);
}

/*
==============
FS_FOpenFileAppend
==============
*/

fileHandle_t *__fastcall FS_FOpenFileAppend(fileHandle_t *result, const char *filename)
{
  return ?FS_FOpenFileAppend@@YA?AUfileHandle_t@@PEBD@Z(result, filename);
}

/*
==============
FS_FOpenFileReadScriptLoose
==============
*/

__int64 __fastcall FS_FOpenFileReadScriptLoose(const char *filename, fileHandle_t *file)
{
  return ?FS_FOpenFileReadScriptLoose@@YA_JPEBDPEAUfileHandle_t@@@Z(filename, file);
}

/*
==============
Com_MapUsesPlayerViewHeight
==============
*/

bool __fastcall Com_MapUsesPlayerViewHeight(const char *mapName)
{
  return ?Com_MapUsesPlayerViewHeight@@YA_NPEBD@Z(mapName);
}

/*
==============
Sys_GetMovedStreamName
==============
*/

void __fastcall Sys_GetMovedStreamName(char *toFilepath, int toFilepathSize, const char *fromFilepath)
{
  ?Sys_GetMovedStreamName@@YAXPEADHPEBD@Z(toFilepath, toFilepathSize, fromFilepath);
}

/*
==============
FS_Rename
==============
*/

int __fastcall FS_Rename(const char *from, const char *fromDir, const char *to, const char *toDir)
{
  return ?FS_Rename@@YAHPEBD000@Z(from, fromDir, to, toDir);
}

/*
==============
FS_FileExists
==============
*/

bool __fastcall FS_FileExists(const char *file)
{
  return ?FS_FileExists@@YA_NPEBD@Z(file);
}

/*
==============
FS_FOpenFileReadDatabase
==============
*/

__int64 __fastcall FS_FOpenFileReadDatabase(const char *filename, fileHandle_t *file)
{
  return ?FS_FOpenFileReadDatabase@@YA_JPEBDPEAUfileHandle_t@@@Z(filename, file);
}

/*
==============
FS_FOpenFileReadServer
==============
*/

__int64 __fastcall FS_FOpenFileReadServer(const char *filename, fileHandle_t *file)
{
  return ?FS_FOpenFileReadServer@@YA_JPEBDPEAUfileHandle_t@@@Z(filename, file);
}

/*
==============
FS_InitLogThread
==============
*/

void FS_InitLogThread(void)
{
  ?FS_InitLogThread@@YAXXZ();
}

/*
==============
Com_IsMpMap
==============
*/

bool __fastcall Com_IsMpMap(const char *mapName)
{
  return ?Com_IsMpMap@@YA_NPEBD@Z(mapName);
}

/*
==============
FS_Printf
==============
*/

int FS_Printf(fileHandle_t h, const char *fmt, ...)
{
  return ?FS_Printf@@YAHUfileHandle_t@@PEBDZZ(h, fmt);
}

/*
==============
FS_ReadFile
==============
*/

__int64 __fastcall FS_ReadFile(const char *qpath, void **buffer)
{
  return ?FS_ReadFile@@YA_JPEBDPEAPEAX@Z(qpath, buffer);
}

/*
==============
FS_Print
==============
*/

int __fastcall FS_Print(fileHandle_t h, const char *msg)
{
  return ?FS_Print@@YAHUfileHandle_t@@PEBD@Z(h, msg);
}

/*
==============
FS_CheckFileSystemStarted
==============
*/

void FS_CheckFileSystemStarted(void)
{
  ?FS_CheckFileSystemStarted@@YAXXZ();
}

/*
==============
FS_FOpenFileWriteToDir
==============
*/

fileHandle_t *__fastcall FS_FOpenFileWriteToDir(fileHandle_t *result, const char *filename, const char *dir)
{
  return ?FS_FOpenFileWriteToDir@@YA?AUfileHandle_t@@PEBD0@Z(result, filename, dir);
}

/*
==============
FS_Delete
==============
*/

bool __fastcall FS_Delete(const char *filename)
{
  return ?FS_Delete@@YA_NPEBD@Z(filename);
}

/*
==============
FS_ConvertPath
==============
*/

void __fastcall FS_ConvertPath(char *s)
{
  ?FS_ConvertPath@@YAXPEAD@Z(s);
}

/*
==============
Com_Files_GetMapBaseName
==============
*/

void __fastcall Com_Files_GetMapBaseName(const char *mapname, char *basename, int size)
{
  ?Com_Files_GetMapBaseName@@YAXPEBDPEADH@Z(mapname, basename, size);
}

/*
==============
FS_FlushLogFile
==============
*/

void __fastcall FS_FlushLogFile(fileHandle_t h, unsigned int maxWaitMs)
{
  ?FS_FlushLogFile@@YAXUfileHandle_t@@I@Z(h, maxWaitMs);
}

/*
==============
FS_ReadFile2
==============
*/

__int64 __fastcall FS_ReadFile2(const char *qpath, void **buffer, int *isLocalized)
{
  return ?FS_ReadFile2@@YA_JPEBDPEAPEAXPEAH@Z(qpath, buffer, isLocalized);
}

/*
==============
FS_FileExists
==============
*/

bool __fastcall FS_FileExists(const char *file, const char *dir)
{
  return ?FS_FileExists@@YA_NPEBD0@Z(file, dir);
}

/*
==============
FS_ReplaceSeparators
==============
*/

void __fastcall FS_ReplaceSeparators(char *path)
{
  ?FS_ReplaceSeparators@@YAXPEAD@Z(path);
}

/*
==============
FS_FOpenFileByMode
==============
*/

__int64 __fastcall FS_FOpenFileByMode(const char *qpath, fileHandle_t *f, fsMode_t mode)
{
  return ?FS_FOpenFileByMode@@YA_JPEBDPEAUfileHandle_t@@W4fsMode_t@@@Z(qpath, f, mode);
}

/*
==============
FS_BuildOSPath
==============
*/

void __fastcall FS_BuildOSPath(const char *base, const char *game, const char *qpath, char (*ospath)[256])
{
  ?FS_BuildOSPath@@YAXPEBD00AEAY0BAA@D@Z(base, game, qpath, ospath);
}

/*
==============
FS_FOpenFileReadCurrentThread
==============
*/

__int64 __fastcall FS_FOpenFileReadCurrentThread(const char *filename, fileHandle_t *file)
{
  return ?FS_FOpenFileReadCurrentThread@@YA_JPEBDPEAUfileHandle_t@@@Z(filename, file);
}

/*
==============
FS_FRotate
==============
*/

bool __fastcall FS_FRotate(const char *filename)
{
  return ?FS_FRotate@@YA_NPEBD@Z(filename);
}

/*
==============
FS_Remove
==============
*/

int __cdecl FS_Remove(const char *FileName)
{
  return ?FS_Remove@@YAXPEBD@Z(FileName);
}

/*
==============
FS_Read
==============
*/

__int64 __fastcall FS_Read(void *buffer, unsigned __int64 len, fileHandle_t h)
{
  return ?FS_Read@@YA_JPEAX_KUfileHandle_t@@@Z(buffer, len, h);
}

/*
==============
FS_FCloseLogFile
==============
*/

void __fastcall FS_FCloseLogFile(fileHandle_t h)
{
  ?FS_FCloseLogFile@@YAXUfileHandle_t@@@Z(h);
}

/*
==============
FS_WriteLog
==============
*/

__int64 __fastcall FS_WriteLog(const void *buffer, unsigned __int64 len, fileHandle_t h)
{
  return ?FS_WriteLog@@YA_JPEBX_KUfileHandle_t@@@Z(buffer, len, h);
}

/*
==============
FS_FCloseFile
==============
*/

void __fastcall FS_FCloseFile(fileHandle_t h)
{
  ?FS_FCloseFile@@YAXUfileHandle_t@@@Z(h);
}

/*
==============
FS_CreatePath
==============
*/

int __fastcall FS_CreatePath(char *OSPath)
{
  return ?FS_CreatePath@@YAHPEAD@Z(OSPath);
}

/*
==============
FS_FOpenTextFileWrite
==============
*/

fileHandle_t *__fastcall FS_FOpenTextFileWrite(fileHandle_t *result, const char *filename)
{
  return ?FS_FOpenTextFileWrite@@YA?AUfileHandle_t@@PEBD@Z(result, filename);
}

/*
==============
FS_FreeFileList
==============
*/

void __fastcall FS_FreeFileList(const char **list)
{
  ?FS_FreeFileList@@YAXPEAPEBD@Z(list);
}

/*
==============
FS_GetConsoleLogFilename
==============
*/

void __fastcall FS_GetConsoleLogFilename(char *filename)
{
  ?FS_GetConsoleLogFilename@@YAXPEAD@Z(filename);
}

/*
==============
FS_Seek
==============
*/

int __fastcall FS_Seek(fileHandle_t f, __int64 offset, int origin)
{
  return ?FS_Seek@@YAHUfileHandle_t@@_JH@Z(f, offset, origin);
}

/*
==============
FS_FOpenFileWrite
==============
*/

fileHandle_t *__fastcall FS_FOpenFileWrite(fileHandle_t *result, const char *filename)
{
  return ?FS_FOpenFileWrite@@YA?AUfileHandle_t@@PEBD@Z(result, filename);
}

/*
==============
Com_GetBspFilename
==============
*/

void __fastcall Com_GetBspFilename(char *filename, int size, const char *mapname)
{
  ?Com_GetBspFilename@@YAXQEADHPEBD@Z(filename, size, mapname);
}

/*
==============
FS_filelength
==============
*/

__int64 __fastcall FS_filelength(fileHandle_t f)
{
  return ?FS_filelength@@YA_JUfileHandle_t@@@Z(f);
}

/*
==============
FS_FOpenFileRead
==============
*/

__int64 __fastcall FS_FOpenFileRead(const char *filename, fileHandle_t *file)
{
  return ?FS_FOpenFileRead@@YA_JPEBDPEAUfileHandle_t@@@Z(filename, file);
}

/*
==============
FS_CopyFile
==============
*/

int __fastcall FS_CopyFile(const char *fromOSPath, char *toOSPath)
{
  return ?FS_CopyFile@@YAHPEBDPEAD@Z(fromOSPath, toOSPath);
}

/*
==============
FS_FreeFile
==============
*/

void __fastcall FS_FreeFile(void *buffer)
{
  ?FS_FreeFile@@YAXPEAX@Z(buffer);
}

/*
==============
FS_Flush
==============
*/

void __fastcall FS_Flush(fileHandle_t f)
{
  ?FS_Flush@@YAXUfileHandle_t@@@Z(f);
}

/*
==============
Com_IsCpMap
==============
*/

bool __fastcall Com_IsCpMap(const char *mapName)
{
  return ?Com_IsCpMap@@YA_NPEBD@Z(mapName);
}

/*
==============
FS_Write
==============
*/

__int64 __fastcall FS_Write(const void *buffer, unsigned __int64 len, fileHandle_t h)
{
  return ?FS_Write@@YA_JPEBX_KUfileHandle_t@@@Z(buffer, len, h);
}

/*
==============
FS_WriteFile
==============
*/

int __fastcall FS_WriteFile(const char *filename, const void *buffer, unsigned __int64 size)
{
  return ?FS_WriteFile@@YAHPEBDPEBX_K@Z(filename, buffer, size);
}

/*
==============
FS_FOpenFileByModeForServer
==============
*/

__int64 __fastcall FS_FOpenFileByModeForServer(const char *qpath, fileHandle_t *f, fsMode_t mode)
{
  return ?FS_FOpenFileByModeForServer@@YA_JPEBDPEAUfileHandle_t@@W4fsMode_t@@@Z(qpath, f, mode);
}

/*
==============
FS_InitFilesystem
==============
*/

void __fastcall FS_InitFilesystem(bool forceNoZoneDirectory, bool restarting)
{
  ?FS_InitFilesystem@@YAX_N0@Z(forceNoZoneDirectory, restarting);
}

/*
==============
Com_Files_GetMapBaseName
==============
*/
void Com_Files_GetMapBaseName(const char *mapname, char *basename, int size)
{
  const char *v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 

  v5 = mapname;
  if ( !mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 4408, ASSERT_TYPE_ASSERT, "(mapname)", (const char *)&queryFormat, "mapname") )
    __debugbreak();
  if ( !basename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 4409, ASSERT_TYPE_ASSERT, "(basename)", (const char *)&queryFormat, "basename") )
    __debugbreak();
  if ( !I_strnicmp(v5, "maps/", 5ui64) )
    v5 += 5;
  if ( !I_strnicmp(v5, "mp/", 3ui64) || !I_strnicmp(v5, "cp/", 3ui64) )
    v5 += 3;
  v6 = -1i64;
  do
    ++v6;
  while ( v5[v6] );
  if ( !I_strnicmp(&v5[(int)v6 - 7], ".d3dbsp", 0x7FFFFFFFui64) )
    LODWORD(v6) = v6 - 7;
  v7 = size - 1;
  if ( (int)v6 < size - 1 )
    v7 = v6;
  v8 = v7;
  memcpy_0(basename, v5, v7);
  basename[v8] = 0;
  if ( v8 > 0 )
  {
    do
    {
      if ( *basename == 37 )
        *basename = 95;
      ++basename;
      --v8;
    }
    while ( v8 );
  }
}

/*
==============
Com_GetBspFilename
==============
*/
void Com_GetBspFilename(char *filename, int size, const char *mapname)
{
  unsigned __int64 v3; 
  char *v5; 
  const char *v6; 
  bool IsMpMap; 
  char *pBaseMapName; 

  pBaseMapName = (char *)mapname;
  v3 = size;
  Com_IsAddonMap(mapname, (const char **)&pBaseMapName);
  v5 = pBaseMapName;
  if ( Com_IsCpMap(pBaseMapName) )
  {
    v6 = "cp/";
  }
  else
  {
    IsMpMap = Com_IsMpMap(v5);
    v6 = "mp/";
    if ( !IsMpMap )
      v6 = (char *)&queryFormat.fmt + 3;
  }
  Com_sprintf(filename, v3, "maps/%s%s.d3dbsp", v6, v5);
}

/*
==============
Com_IsAddonMap
==============
*/
char Com_IsAddonMap(const char *mapName, const char **pBaseMapName)
{
  unsigned int v4; 
  AddonMapDef *v5; 
  __int64 prefixLen; 
  const char *prefix; 
  const char *v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 
  const char *v14; 
  char *v15; 
  int optionalBaseMap; 
  const char *v18; 

  if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 4373, ASSERT_TYPE_ASSERT, "(mapName)", (const char *)&queryFormat, "mapName") )
    __debugbreak();
  v4 = 0;
  v5 = g_addonMapDefs;
  while ( 2 )
  {
    prefixLen = v5->prefixLen;
    prefix = v5->prefix;
    if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !prefix && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v8 = (const char *)(mapName - prefix);
    do
    {
      v9 = (unsigned __int8)prefix[(_QWORD)v8];
      v10 = prefixLen;
      v11 = *(unsigned __int8 *)prefix++;
      --prefixLen;
      if ( !v10 )
        break;
      if ( v9 != v11 )
      {
        v12 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v12 = v9;
        v9 = v12;
        v13 = v11 + 32;
        if ( (unsigned int)(v11 - 65) > 0x19 )
          v13 = v11;
        if ( v9 != v13 )
          goto LABEL_22;
      }
    }
    while ( v9 );
    v14 = &mapName[v5->prefixLen];
    v15 = strchr_0(v14, 95);
    optionalBaseMap = v5->optionalBaseMap;
    if ( !optionalBaseMap || v15 )
    {
      if ( pBaseMapName )
      {
        if ( !optionalBaseMap || Com_IsMpMap(v14) || Com_IsCpMap(v14) )
          v18 = v14;
        else
          v18 = v15 + 1;
        *pBaseMapName = v18;
      }
      return 1;
    }
LABEL_22:
    ++v4;
    ++v5;
    if ( v4 < 2 )
      continue;
    return 0;
  }
}

/*
==============
Com_IsCpMap
==============
*/
bool Com_IsCpMap(const char *mapName)
{
  const char *v1; 
  __int64 v2; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 

  v1 = "cp_";
  v2 = 3i64;
  v4 = 1;
  if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = mapName - "cp_";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v2;
    v8 = *(unsigned __int8 *)v1++;
    --v2;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      return v4 == 0;
    }
    if ( v6 != v8 )
    {
      v9 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v9 = v6;
      v6 = v9;
      v10 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v10 = v8;
      if ( v6 != v10 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v10 )
    v4 = -1;
  return v4 == 0;
}

/*
==============
Com_IsMpMap
==============
*/
bool Com_IsMpMap(const char *mapName)
{
  const char *v1; 
  __int64 v2; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 

  v1 = "mp_";
  v2 = 3i64;
  v4 = 1;
  if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = mapName - "mp_";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v2;
    v8 = *(unsigned __int8 *)v1++;
    --v2;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      return v4 == 0;
    }
    if ( v6 != v8 )
    {
      v9 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v9 = v6;
      v6 = v9;
      v10 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v10 = v8;
      if ( v6 != v10 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v10 )
    v4 = -1;
  return v4 == 0;
}

/*
==============
Com_MapUsesPlayerViewHeight
==============
*/

bool __fastcall Com_MapUsesPlayerViewHeight(const char *mapName)
{
  return Com_IsMpMap(mapName);
}

/*
==============
FS_BuildOSPath
==============
*/
void FS_BuildOSPath(const char *base, const char *game, const char *qpath, char (*ospath)[256])
{
  __int64 v8; 
  size_t v9; 
  size_t v10; 
  char v12; 
  bool v13; 
  char (*v14)[256]; 
  char (*v15)[256]; 

  if ( !base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 670, ASSERT_TYPE_ASSERT, "(base)", (const char *)&queryFormat, "base") )
    __debugbreak();
  if ( !qpath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 671, ASSERT_TYPE_ASSERT, "(qpath)", (const char *)&queryFormat, "qpath") )
    __debugbreak();
  if ( !ospath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 672, ASSERT_TYPE_ASSERT, "(ospath)", (const char *)&queryFormat, "ospath") )
    __debugbreak();
  v8 = -1i64;
  v9 = -1i64;
  do
    ++v9;
  while ( base[v9] );
  v10 = -1i64;
  do
    ++v10;
  while ( game[v10] );
  while ( qpath[++v8] != 0 )
    ;
  if ( v8 + v10 + v9 + 2 >= 0x100 )
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144163FF8, 1108i64);
  memcpy_0(ospath, base, v9);
  (*ospath)[v9] = 47;
  memcpy_0(&(*ospath)[v9 + 1], game, v10);
  (*ospath)[v10 + 1 + v9] = 47;
  memcpy_0(&(*ospath)[v10 + 2 + v9], qpath, v8 + 1);
  v12 = (*ospath)[0];
  v13 = 0;
  v14 = ospath;
  v15 = ospath;
  if ( (*ospath)[0] )
  {
    while ( v12 == 47 || v12 == 92 )
    {
      if ( !v13 )
      {
        *(_BYTE *)v15 = 92;
        v13 = v14 != ospath;
        goto LABEL_23;
      }
LABEL_24:
      v12 = (*v14)[1];
      v14 = (char (*)[256])((char *)v14 + 1);
      if ( !v12 )
      {
        *(_BYTE *)v15 = 0;
        return;
      }
    }
    v13 = 0;
    *(_BYTE *)v15 = v12;
LABEL_23:
    v15 = (char (*)[256])((char *)v15 + 1);
    goto LABEL_24;
  }
  (*ospath)[0] = 0;
}

/*
==============
FS_CheckFileSystemStarted
==============
*/
void FS_CheckFileSystemStarted(void)
{
  ;
}

/*
==============
FS_ConvertPath
==============
*/
void FS_ConvertPath(char *s)
{
  char i; 

  for ( i = *s; i; ++s )
  {
    if ( i == 92 || i == 58 )
      *s = 47;
    i = s[1];
  }
}

/*
==============
FS_CopyFile
==============
*/
__int64 FS_CopyFile(const char *fromOSPath, char *toOSPath)
{
  sysFileHandle_t *Binary; 
  sysFileHandle_t *v4; 
  size_t FileSize; 
  void *v7; 
  const char *v8; 
  sysFileHandle_t *v9; 
  sysFileHandle_t *v10; 

  Binary = FS_FileOpenReadBinary((sysFileHandle_t *)fromOSPath, toOSPath);
  v4 = Binary;
  if ( Binary == (sysFileHandle_t *)-1i64 )
    return 0i64;
  FileSize = FS_FileGetFileSize((sysFileHandle_t)Binary);
  v7 = malloc(FileSize);
  if ( FS_FileRead(v7, FileSize, (sysFileHandle_t)v4) != FileSize )
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144164088, 1109i64);
  FS_FileClose(v4);
  if ( FS_CreatePath(toOSPath) || (v9 = FS_FileOpenWriteBinary((sysFileHandle_t *)toOSPath, v8), v10 = v9, v9 == (sysFileHandle_t *)-1i64) )
  {
    free(v7);
    return 0i64;
  }
  else
  {
    if ( FS_FileWrite(v7, FileSize, (sysFileHandle_t)v9) != FileSize )
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1441640C0, 1110i64);
    FS_FileClose(v10);
    free(v7);
    return 1i64;
  }
}

/*
==============
FS_CreatePath
==============
*/
__int64 FS_CreatePath(char *OSPath)
{
  char v2; 
  char *i; 

  if ( strstr_0(OSPath, "..") || strstr_0(OSPath, "::") )
  {
    Com_PrintWarning(10, "WARNING: refusing to create relative path \"%s\"\n", OSPath);
    return 1i64;
  }
  else
  {
    v2 = OSPath[1];
    for ( i = OSPath + 1; v2; ++i )
    {
      if ( v2 == 92 )
      {
        *i = 0;
        Sys_Mkdir(OSPath);
        *i = 92;
      }
      v2 = i[1];
    }
    return 0i64;
  }
}

/*
==============
FS_Delete
==============
*/
bool FS_Delete(const char *filename)
{
  const char *v2; 
  bool result; 
  char ospath[256]; 

  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 1809, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  result = 0;
  if ( *filename )
  {
    v2 = Sys_DefaultInstallPath();
    FS_BuildOSPath(v2, (const char *)&queryFormat.fmt + 3, filename, (char (*)[256])ospath);
    if ( remove(ospath) != -1 )
      return 1;
  }
  return result;
}

/*
==============
FS_FCloseFile
==============
*/
void FS_FCloseFile(fileHandle_t h)
{
  if ( h.handle.handle != -1 )
    FS_FileClose((HANDLE)h.handle.handle);
}

/*
==============
FS_FCloseLogFile
==============
*/
void FS_FCloseLogFile(fileHandle_t h)
{
  if ( h.handle.handle != -1 )
  {
    FS_FinishAsyncronousLogWrites(h, 0);
    FS_FileClose((HANDLE)h.handle.handle);
  }
}

/*
==============
FS_FOpenFileAppend
==============
*/
sysFileHandle_t *FS_FOpenFileAppend(fileHandle_t *result, const char *filename)
{
  const char *DevHddPath; 
  const char *v4; 
  char v5; 
  char *i; 
  char ospath[256]; 

  DevHddPath = Sys_GetDevHddPath();
  FS_BuildOSPath(DevHddPath, (const char *)&queryFormat.fmt + 3, (const char *)result, (char (*)[256])ospath);
  if ( strstr_0(ospath, "..") || strstr_0(ospath, "::") )
  {
    Com_PrintWarning(10, "WARNING: refusing to create relative path \"%s\"\n", ospath);
    return (sysFileHandle_t *)INVALID_FILE_HANDLE.handle.handle;
  }
  else
  {
    v5 = ospath[1];
    for ( i = &ospath[1]; v5; ++i )
    {
      if ( v5 == 92 )
      {
        *i = 0;
        Sys_Mkdir(ospath);
        *i = 92;
      }
      v5 = i[1];
    }
    return FS_FileOpenAppendText((sysFileHandle_t *)ospath, v4);
  }
}

/*
==============
FS_FOpenFileByMode
==============
*/
__int64 FS_FOpenFileByMode(const char *qpath, fileHandle_t *f, fsMode_t mode)
{
  const char *DevHddPath; 
  const char *v7; 
  char v8; 
  char *i; 
  fileHandle_t *handle; 
  char ospath[256]; 

  if ( !f && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 4150, ASSERT_TYPE_ASSERT, "(f)", (const char *)&queryFormat, "f") )
    __debugbreak();
  if ( mode )
  {
    if ( mode == FS_WRITE )
    {
      handle = FS_FOpenFileWrite((fileHandle_t *)qpath, (const char *)f);
    }
    else
    {
      if ( (unsigned int)(mode - 2) > 1 )
      {
        Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144164318, 1124i64);
        return 6969i64;
      }
      DevHddPath = Sys_GetDevHddPath();
      FS_BuildOSPath(DevHddPath, (const char *)&queryFormat.fmt + 3, qpath, (char (*)[256])ospath);
      if ( strstr_0(ospath, "..") || strstr_0(ospath, "::") )
      {
        Com_PrintWarning(10, "WARNING: refusing to create relative path \"%s\"\n", ospath);
        handle = (fileHandle_t *)INVALID_FILE_HANDLE.handle.handle;
      }
      else
      {
        v8 = ospath[1];
        for ( i = &ospath[1]; v8; ++i )
        {
          if ( v8 == 92 )
          {
            *i = 0;
            Sys_Mkdir(ospath);
            *i = 92;
          }
          v8 = i[1];
        }
        handle = (fileHandle_t *)FS_FileOpenAppendText((sysFileHandle_t *)ospath, v7);
      }
    }
    f->handle.handle = (__int64)handle;
    return ((__int64 *)((char *)&handle->handle.handle + 1) != NULL) - 1i64;
  }
  else
  {
    com_fileAccessed = 1;
    return FS_FOpenFileReadForThread(qpath, f);
  }
}

/*
==============
FS_FOpenFileByModeForServer
==============
*/
__int64 FS_FOpenFileByModeForServer(const char *qpath, fileHandle_t *f, fsMode_t mode)
{
  if ( mode == FS_READ )
    return FS_FOpenFileReadForThread(qpath, f);
  Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144164350, 1125i64, (unsigned int)mode);
  return 6969i64;
}

/*
==============
FS_FOpenFileRead
==============
*/
__int64 FS_FOpenFileRead(const char *filename, fileHandle_t *file)
{
  com_fileAccessed = 1;
  return FS_FOpenFileReadForThread(filename, file);
}

/*
==============
FS_FOpenFileReadCurrentThread
==============
*/

__int64 __fastcall FS_FOpenFileReadCurrentThread(const char *filename, fileHandle_t *file)
{
  return FS_FOpenFileReadForThread(filename, file);
}

/*
==============
FS_FOpenFileReadDatabase
==============
*/

__int64 __fastcall FS_FOpenFileReadDatabase(const char *filename, fileHandle_t *file)
{
  return FS_FOpenFileReadForThread(filename, file);
}

/*
==============
FS_FOpenFileReadForThread
==============
*/
sysFileHandle_t *FS_FOpenFileReadForThread(const char *filename, fileHandle_t *file)
{
  const char *v4; 
  const char *v5; 
  sysFileHandle_t *result; 
  char ospath[256]; 

  if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 1697, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  v4 = Sys_DefaultInstallPath();
  FS_BuildOSPath(v4, (const char *)&queryFormat.fmt + 3, filename, (char (*)[256])ospath);
  result = FS_FileOpenReadBinary((sysFileHandle_t *)ospath, v5);
  file->handle.handle = (__int64)result;
  if ( result != (sysFileHandle_t *)-1i64 )
    return (sysFileHandle_t *)FS_FileGetFileSize((sysFileHandle_t)result);
  return result;
}

/*
==============
FS_FOpenFileReadScriptLoose
==============
*/
sysFileHandle_t *FS_FOpenFileReadScriptLoose(const char *filename, fileHandle_t *file)
{
  int v4; 
  const char **i; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  sysFileHandle_t *result; 
  char ospath[256]; 

  if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 1750, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  v4 = 0;
  for ( i = SUB_DIRS; ; ++i )
  {
    v6 = *i;
    v7 = Sys_DefaultInstallPath();
    FS_BuildOSPath(v7, v6, filename, (char (*)[256])ospath);
    result = FS_FileOpenReadBinary((sysFileHandle_t *)ospath, v8);
    file->handle.handle = (__int64)result;
    if ( result != (sysFileHandle_t *)-1i64 )
      break;
    if ( (unsigned int)++v4 >= 5 )
      return result;
  }
  return (sysFileHandle_t *)FS_FileGetFileSize((sysFileHandle_t)result);
}

/*
==============
FS_FOpenFileReadServer
==============
*/

sysFileHandle_t *__fastcall FS_FOpenFileReadServer(const char *filename, fileHandle_t *file)
{
  return FS_FOpenFileReadForThread(filename, file);
}

/*
==============
FS_FOpenFileWrite
==============
*/
sysFileHandle_t *FS_FOpenFileWrite(fileHandle_t *result, const char *filename)
{
  const char *DevHddPath; 
  const char *v4; 
  char v5; 
  char *i; 
  char ospath[256]; 

  DevHddPath = Sys_GetDevHddPath();
  FS_BuildOSPath(DevHddPath, (const char *)&queryFormat.fmt + 3, (const char *)result, (char (*)[256])ospath);
  if ( strstr_0(ospath, "..") || strstr_0(ospath, "::") )
  {
    Com_PrintWarning(10, "WARNING: refusing to create relative path \"%s\"\n", ospath);
    return (sysFileHandle_t *)INVALID_FILE_HANDLE.handle.handle;
  }
  else
  {
    v5 = ospath[1];
    for ( i = &ospath[1]; v5; ++i )
    {
      if ( v5 == 92 )
      {
        *i = 0;
        Sys_Mkdir(ospath);
        *i = 92;
      }
      v5 = i[1];
    }
    return FS_FileOpenWriteBinary((sysFileHandle_t *)ospath, v4);
  }
}

/*
==============
FS_FOpenFileWriteCurrentThread
==============
*/
fileHandle_t *FS_FOpenFileWriteCurrentThread(fileHandle_t *result, const char *filename, const char *a3)
{
  return FS_FOpenFileWriteToDir(result, (const char *)&queryFormat.fmt + 3, a3);
}

/*
==============
FS_FOpenFileWriteToDir
==============
*/
fileHandle_t *FS_FOpenFileWriteToDir(fileHandle_t *result, const char *filename, const char *dir)
{
  __int64 v5; 
  size_t v6; 
  char handle; 
  fileHandle_t *v9; 
  bool v10; 
  fileHandle_t *v11; 
  const char *v12; 
  char v13; 
  char *i; 
  fileHandle_t Str[32]; 

  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 671, ASSERT_TYPE_ASSERT, "(qpath)", (const char *)&queryFormat, "qpath") )
    __debugbreak();
  v5 = -1i64;
  v6 = -1i64;
  do
    ++v6;
  while ( filename[v6] );
  while ( *((_BYTE *)&result->handle.handle + ++v5) != 0 )
    ;
  if ( v5 + v6 + 2 >= 0x100 )
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144163FF8, 1108i64);
  LOBYTE(Str[0].handle.handle) = 47;
  memcpy_0((char *)&Str[0].handle.handle + 1, filename, v6);
  *((_BYTE *)&Str[0].handle.handle + v6 + 1) = 47;
  memcpy_0((char *)&Str[0].handle.handle + v6 + 2, result, v5 + 1);
  handle = Str[0].handle.handle;
  v9 = Str;
  v10 = 0;
  v11 = Str;
  if ( LOBYTE(Str[0].handle.handle) )
  {
    while ( handle == 47 || handle == 92 )
    {
      if ( !v10 )
      {
        LOBYTE(v11->handle.handle) = 92;
        v10 = v9 != Str;
        goto LABEL_15;
      }
LABEL_16:
      handle = BYTE1(v9->handle.handle);
      v9 = (fileHandle_t *)((char *)v9 + 1);
      if ( !handle )
        goto LABEL_17;
    }
    v10 = 0;
    LOBYTE(v11->handle.handle) = handle;
LABEL_15:
    v11 = (fileHandle_t *)((char *)v11 + 1);
    goto LABEL_16;
  }
LABEL_17:
  LOBYTE(v11->handle.handle) = 0;
  if ( strstr_0((const char *)Str, "..") || strstr_0((const char *)Str, "::") )
  {
    Com_PrintWarning(10, "WARNING: refusing to create relative path \"%s\"\n", (const char *)Str);
    return (fileHandle_t *)INVALID_FILE_HANDLE.handle.handle;
  }
  else
  {
    v13 = BYTE1(Str[0].handle.handle);
    for ( i = (char *)&Str[0].handle.handle + 1; v13; ++i )
    {
      if ( v13 == 92 )
      {
        *i = 0;
        Sys_Mkdir((const char *)Str);
        *i = 92;
      }
      v13 = i[1];
    }
    return FS_FOpenFileWrite(Str, v12);
  }
}

/*
==============
FS_FOpenTextFileWrite
==============
*/
sysFileHandle_t *FS_FOpenTextFileWrite(fileHandle_t *result, const char *filename)
{
  const char *DevHddPath; 
  const char *v4; 
  char v5; 
  char *i; 
  char ospath[256]; 

  DevHddPath = Sys_GetDevHddPath();
  FS_BuildOSPath(DevHddPath, (const char *)&queryFormat.fmt + 3, (const char *)result, (char (*)[256])ospath);
  if ( strstr_0(ospath, "..") || strstr_0(ospath, "::") )
  {
    Com_PrintWarning(10, "WARNING: refusing to create relative path \"%s\"\n", ospath);
    return (sysFileHandle_t *)INVALID_FILE_HANDLE.handle.handle;
  }
  else
  {
    v5 = ospath[1];
    for ( i = &ospath[1]; v5; ++i )
    {
      if ( v5 == 92 )
      {
        *i = 0;
        Sys_Mkdir(ospath);
        *i = 92;
      }
      v5 = i[1];
    }
    return FS_FileOpenWriteText((sysFileHandle_t *)ospath, v4);
  }
}

/*
==============
FS_FRotate
==============
*/
bool FS_FRotate(const char *filename)
{
  const char *DevHddPath; 
  char ospath[256]; 

  DevHddPath = Sys_GetDevHddPath();
  FS_BuildOSPath(DevHddPath, (const char *)&queryFormat.fmt + 3, filename, (char (*)[256])ospath);
  return FS_FileRotate(ospath) == 1;
}

/*
==============
FS_FileExists
==============
*/
char FS_FileExists(const char *file, const char *dir)
{
  sysFileHandle_t *v2; 
  sysFileHandle_t result; 

  v2 = FS_FileOpenReadBinary(&result, dir);
  if ( v2 == (sysFileHandle_t *)-1i64 )
    return 0;
  FS_FileClose(v2);
  return 1;
}

/*
==============
FS_FileExists
==============
*/
char FS_FileExists(const char *file)
{
  const char *v2; 
  const char *v3; 
  sysFileHandle_t *Binary; 
  char ospath[256]; 

  v2 = Sys_Cwd();
  FS_BuildOSPath(v2, (const char *)&queryFormat.fmt + 3, file, (char (*)[256])ospath);
  Binary = FS_FileOpenReadBinary((sysFileHandle_t *)ospath, v3);
  if ( Binary == (sysFileHandle_t *)-1i64 )
    return 0;
  FS_FileClose(Binary);
  return 1;
}

/*
==============
FS_FinishAsyncronousLogWrites
==============
*/
void FS_FinishAsyncronousLogWrites(fileHandle_t h, unsigned int maxWaitMs)
{
  DWORD v3; 
  DWORD v4; 
  unsigned int v5; 
  DWORD v6; 
  void *v7; 
  unsigned int NumberOfBytesWritten; 

  if ( threadWriteInProgress )
  {
    if ( !maxWaitMs )
      maxWaitMs = -1;
    v3 = WaitForSingleObject(g_writeLogCompleteEvent, maxWaitMs);
    if ( v3 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 2278, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "WaitForSingleObject() returned %i", v3) )
        __debugbreak();
      v6 = fileWriteBufferPos;
    }
    else
    {
      v4 = fileWriteBufferPos;
      v5 = s_logBytesWritten;
      if ( fileWriteBufferPos > s_logBytesWritten )
        memmove_0(fileWriteBuffer, &fileWriteBuffer[s_logBytesWritten], fileWriteBufferPos - s_logBytesWritten);
      v6 = v4 - v5;
      threadWriteInProgress = 0;
      fileWriteBufferPos = v6;
    }
    if ( v6 )
    {
      v7 = FS_WinHandleFromFileHandle(h);
      WriteFile(v7, fileWriteBuffer, v6, &NumberOfBytesWritten, NULL);
      fileWriteBufferPos = 0;
    }
  }
}

/*
==============
FS_Flush
==============
*/
void FS_Flush(fileHandle_t f)
{
  if ( f.handle.handle == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 437, ASSERT_TYPE_ASSERT, "(handle != INVALID_FILE_HANDLE)", (const char *)&queryFormat, "handle != INVALID_FILE_HANDLE") )
    __debugbreak();
  FlushFileBuffers((HANDLE)f.handle.handle);
}

/*
==============
FS_FlushLogFile
==============
*/
void FS_FlushLogFile(fileHandle_t h, unsigned int maxWaitMs)
{
  if ( h.handle.handle != -1 )
  {
    FS_FinishAsyncronousLogWrites(h, maxWaitMs);
    FlushFileBuffers((HANDLE)h.handle.handle);
  }
}

/*
==============
FS_FreeFile
==============
*/
void FS_FreeFile(void *buffer)
{
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 2553, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  Mem_Virtual_Free(buffer);
}

/*
==============
FS_FreeFileList
==============
*/
void FS_FreeFileList(const char **list)
{
  if ( list )
    Mem_HunkUser_Destroy((HunkUser *)*(list - 1));
}

/*
==============
FS_GetConsoleLogFilename
==============
*/
void FS_GetConsoleLogFilename(char *filename)
{
  Com_sprintf(filename, 0x100ui64, "%s%s", "console", ".log");
}

/*
==============
FS_InitFilesystem
==============
*/
void FS_InitFilesystem(bool forceNoZoneDirectory, bool restarting)
{
  const char *StringSafe; 
  const char *v4; 
  int v5; 
  int piLanguageIndex; 

  StringSafe = Dvar_GetStringSafe("PMKLQQKSO");
  v4 = StringSafe;
  if ( StringSafe && *StringSafe )
  {
    piLanguageIndex = 0;
    if ( SEH_GetLanguageIndexForName(StringSafe, &piLanguageIndex) )
      v5 = piLanguageIndex;
    else
      v5 = atoi(v4);
    g_defaultLanguage = v5;
    Dvar_SetIntByName("PMKLQQKSO", v5);
  }
  else
  {
    g_defaultLanguage = Sys_GetLanguage();
  }
  SEH_InitLanguage();
  SEH_InitFolders(forceNoZoneDirectory);
  RG_SetRegionFromPlatform();
  Sys_InitRegionFolders(forceNoZoneDirectory);
}

/*
==============
FS_InitLogThread
==============
*/
void FS_InitLogThread(void)
{
  g_writeLogEvent = CreateEventW(NULL, 0, 0, NULL);
  g_writeLogCompleteEvent = CreateEventW(NULL, 0, 0, NULL);
  CreateThread(NULL, 0i64, LogWriteThread, NULL, 0, NULL);
}

/*
==============
FS_Print
==============
*/
int FS_Print(fileHandle_t h, const char *msg)
{
  __int64 v2; 
  unsigned __int64 v4; 

  v2 = -1i64;
  v4 = -1i64;
  do
    ++v4;
  while ( msg[v4] );
  if ( h.handle.handle != -1 )
    v2 = FS_FileWrite(msg, v4, h.handle);
  return truncate_cast<int,__int64>(v2);
}

/*
==============
FS_Printf
==============
*/
int FS_Printf(fileHandle_t h, const char *fmt, ...)
{
  __int64 v3; 
  unsigned __int64 v4; 
  char dest[16384]; 
  va_list ap; 

  va_start(ap, fmt);
  Com_vsprintf(dest, 0x4000ui64, fmt, ap);
  v3 = -1i64;
  v4 = -1i64;
  do
    ++v4;
  while ( dest[v4] );
  if ( h.handle.handle != -1 )
    v3 = FS_FileWrite(dest, v4, h.handle);
  return truncate_cast<int,__int64>(v3);
}

/*
==============
FS_Read
==============
*/
__int64 FS_Read(void *buffer, unsigned __int64 len, fileHandle_t h)
{
  if ( h.handle.handle == -1 )
    return -1i64;
  else
    return FS_FileRead(buffer, len, h.handle);
}

/*
==============
FS_ReadFile2
==============
*/
unsigned __int64 FS_ReadFile2(const char *qpath, void **buffer, int *isLocalized)
{
  const char *v5; 
  const char *v6; 
  sysFileHandle_t *Binary; 
  sysFileHandle_t *v8; 
  __int64 FileSize; 
  unsigned __int64 v10; 
  void *v12; 
  _BYTE *v13; 
  char ospath[256]; 

  if ( !qpath || !*qpath )
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1441642C8, 1117i64);
  com_fileAccessed = 1;
  v5 = Sys_DefaultInstallPath();
  FS_BuildOSPath(v5, (const char *)&queryFormat.fmt + 3, qpath, (char (*)[256])ospath);
  Binary = FS_FileOpenReadBinary((sysFileHandle_t *)ospath, v6);
  v8 = Binary;
  if ( Binary == (sysFileHandle_t *)-1i64 || (FileSize = FS_FileGetFileSize((sysFileHandle_t)Binary), v10 = FileSize, v8 == (sysFileHandle_t *)-1i64) )
  {
    if ( buffer )
      *buffer = NULL;
    return -1i64;
  }
  else
  {
    if ( buffer )
    {
      v12 = Mem_Virtual_Alloc(FileSize + 1, "FS_AllocMem", TRACK_DEBUG);
      *buffer = v12;
      v13 = v12;
      FS_FileRead(v12, v10, (sysFileHandle_t)v8);
      v13[v10] = 0;
    }
    FS_FileClose(v8);
    return v10;
  }
}

/*
==============
FS_ReadFile
==============
*/
unsigned __int64 FS_ReadFile(const char *qpath, void **buffer)
{
  const char *v4; 
  const char *v5; 
  sysFileHandle_t *Binary; 
  sysFileHandle_t *v7; 
  __int64 FileSize; 
  unsigned __int64 v9; 
  void *v11; 
  _BYTE *v12; 
  char ospath[256]; 

  if ( !qpath || !*qpath )
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1441642C8, 1117i64);
  com_fileAccessed = 1;
  v4 = Sys_DefaultInstallPath();
  FS_BuildOSPath(v4, (const char *)&queryFormat.fmt + 3, qpath, (char (*)[256])ospath);
  Binary = FS_FileOpenReadBinary((sysFileHandle_t *)ospath, v5);
  v7 = Binary;
  if ( Binary == (sysFileHandle_t *)-1i64 || (FileSize = FS_FileGetFileSize((sysFileHandle_t)Binary), v9 = FileSize, v7 == (sysFileHandle_t *)-1i64) )
  {
    if ( buffer )
      *buffer = NULL;
    return -1i64;
  }
  else
  {
    if ( buffer )
    {
      v11 = Mem_Virtual_Alloc(FileSize + 1, "FS_AllocMem", TRACK_DEBUG);
      *buffer = v11;
      v12 = v11;
      FS_FileRead(v11, v9, (sysFileHandle_t)v7);
      v12[v9] = 0;
    }
    FS_FileClose(v7);
    return v9;
  }
}

/*
==============
FS_Remove
==============
*/

int __cdecl FS_Remove(const char *FileName)
{
  return remove(FileName);
}

/*
==============
FS_Rename
==============
*/
__int64 FS_Rename(const char *from, const char *fromDir, const char *to, const char *toDir)
{
  const char *v6; 
  sysFileHandle_t *Binary; 
  sysFileHandle_t *v8; 
  size_t FileSize; 
  void *v10; 
  const char *v11; 
  char v12; 
  char *i; 
  sysFileHandle_t *v14; 
  sysFileHandle_t *v15; 
  void *v16; 
  int v18; 
  __int64 v19; 
  sysFileHandle_t NewFilename[32]; 
  sysFileHandle_t dest[32]; 

  v18 = 92;
  Com_sprintf((char *)dest, 0x100ui64, "%s%c%s", fromDir, v18, from);
  LODWORD(v19) = 92;
  Com_sprintf((char *)NewFilename, 0x100ui64, "%s%c%s", toDir, v19, to);
  if ( !rename((const char *)dest, (const char *)NewFilename) )
    return 1i64;
  remove((const char *)NewFilename);
  if ( !rename((const char *)dest, (const char *)NewFilename) )
    return 1i64;
  Binary = FS_FileOpenReadBinary(dest, v6);
  v8 = Binary;
  if ( Binary != (sysFileHandle_t *)-1i64 )
  {
    FileSize = FS_FileGetFileSize((sysFileHandle_t)Binary);
    v10 = malloc(FileSize);
    if ( FS_FileRead(v10, FileSize, (sysFileHandle_t)v8) != FileSize )
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144164088, 1109i64);
    FS_FileClose(v8);
    if ( strstr_0((const char *)NewFilename, "..") || strstr_0((const char *)NewFilename, "::") )
    {
      Com_PrintWarning(10, "WARNING: refusing to create relative path \"%s\"\n", (const char *)NewFilename);
      v16 = v10;
    }
    else
    {
      v12 = BYTE1(NewFilename[0].handle);
      for ( i = (char *)&NewFilename[0].handle + 1; v12; ++i )
      {
        if ( v12 == 92 )
        {
          *i = 0;
          Sys_Mkdir((const char *)NewFilename);
          *i = 92;
        }
        v12 = i[1];
      }
      v14 = FS_FileOpenWriteBinary(NewFilename, v11);
      v15 = v14;
      v16 = v10;
      if ( v14 != (sysFileHandle_t *)-1i64 )
      {
        if ( FS_FileWrite(v10, FileSize, (sysFileHandle_t)v14) != FileSize )
          Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1441640C0, 1110i64);
        FS_FileClose(v15);
        free(v10);
        remove((const char *)dest);
        return 1i64;
      }
    }
    free(v16);
  }
  remove((const char *)dest);
  return 0i64;
}

/*
==============
FS_ReplaceSeparators
==============
*/
void FS_ReplaceSeparators(char *path)
{
  char v1; 
  bool v2; 
  char *v3; 
  char *v4; 

  v1 = *path;
  v2 = 0;
  v3 = path;
  v4 = path;
  if ( *path )
  {
    while ( v1 == 47 || v1 == 92 )
    {
      if ( !v2 )
      {
        *v4 = 92;
        v2 = v3 != path;
        goto LABEL_7;
      }
LABEL_8:
      v1 = *++v3;
      if ( !v1 )
      {
        *v4 = 0;
        return;
      }
    }
    v2 = 0;
    *v4 = v1;
LABEL_7:
    ++v4;
    goto LABEL_8;
  }
  *path = 0;
}

/*
==============
FS_Seek
==============
*/

int __fastcall FS_Seek(fileHandle_t f, __int64 offset, int origin)
{
  return FS_FileSeek(f.handle, offset, origin);
}

/*
==============
FS_WinHandleFromFileHandle
==============
*/
__int64 FS_WinHandleFromFileHandle(fileHandle_t handle)
{
  if ( handle.handle.handle == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 437, ASSERT_TYPE_ASSERT, "(handle != INVALID_FILE_HANDLE)", (const char *)&queryFormat, "handle != INVALID_FILE_HANDLE") )
    __debugbreak();
  return handle.handle.handle;
}

/*
==============
FS_Write
==============
*/
__int64 FS_Write(const void *buffer, unsigned __int64 len, fileHandle_t h)
{
  if ( h.handle.handle == -1 )
    return -1i64;
  else
    return FS_FileWrite(buffer, len, h.handle);
}

/*
==============
FS_WriteFile
==============
*/
__int64 FS_WriteFile(const char *filename, const void *buffer, unsigned __int64 size)
{
  fileHandle_t *v6; 
  fileHandle_t *v7; 
  __int64 v8; 
  const char *v10; 
  char ospath[256]; 

  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 2607, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 2608, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  v6 = FS_FOpenFileWrite((fileHandle_t *)filename, (const char *)buffer);
  v7 = v6;
  if ( v6 == (fileHandle_t *)-1i64 )
  {
    Com_Printf(10, "Failed to open %s\n", filename);
  }
  else
  {
    v8 = FS_FileWrite(buffer, size, (sysFileHandle_t)v6);
    FS_FileClose(v7);
    if ( v8 >= 0 && v8 == size )
      return 1i64;
    if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 1809, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
      __debugbreak();
    if ( *filename )
    {
      v10 = Sys_DefaultInstallPath();
      FS_BuildOSPath(v10, (const char *)&queryFormat.fmt + 3, filename, (char (*)[256])ospath);
      remove(ospath);
    }
  }
  return 0i64;
}

/*
==============
FS_WriteLog
==============
*/
__int64 FS_WriteLog(const void *buffer, unsigned __int64 len, fileHandle_t h)
{
  const dvar_t *v6; 
  unsigned int flags; 
  DWORD v8; 
  unsigned __int64 v9; 
  DWORD v10; 
  DWORD v11; 
  unsigned int v12; 
  DWORD v13; 
  void *v14; 
  void *v15; 
  __int64 result; 
  __int64 v17; 
  __int64 v18; 
  unsigned int NumberOfBytesWritten; 

  if ( h.handle.handle == -1 || !len || !g_writeLogEvent )
    return -1i64;
  v6 = DCONST_DVARINT_logfile;
  if ( !DCONST_DVARINT_logfile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "logfile") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v6->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
      __debugbreak();
  }
  if ( v6->current.integer != 1 )
    return FS_FileWrite(buffer, len, h.handle);
  if ( !threadWriteInProgress )
    goto LABEL_26;
  v8 = -1;
  v9 = len + fileWriteBufferPos;
  if ( v9 < 0x8000 )
    v8 = 0;
  v10 = WaitForSingleObject(g_writeLogCompleteEvent, v8);
  if ( !v10 )
  {
    v11 = fileWriteBufferPos;
    v12 = s_logBytesWritten;
    if ( fileWriteBufferPos > s_logBytesWritten )
      memmove_0(fileWriteBuffer, &fileWriteBuffer[s_logBytesWritten], fileWriteBufferPos - s_logBytesWritten);
    v13 = v11 - v12;
    threadWriteInProgress = 0;
    fileWriteBufferPos = v13;
    goto LABEL_27;
  }
  if ( v9 >= 0x8000 )
  {
    LODWORD(v17) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 2217, ASSERT_TYPE_ASSERT, "( ( timeout != 0xFFFFFFFF ) )", "( res ) = %i", v17) )
      __debugbreak();
  }
  if ( !threadWriteInProgress )
  {
LABEL_26:
    v13 = fileWriteBufferPos;
LABEL_27:
    if ( len + v13 >= 0x8000 )
    {
      v14 = (void *)FS_WinHandleFromFileHandle(h);
      WriteFile(v14, fileWriteBuffer, v13, &NumberOfBytesWritten, NULL);
      if ( NumberOfBytesWritten != fileWriteBufferPos )
        Com_PrintWarning(7, "Failed trying to write %i bytes to the logfile\n", fileWriteBufferPos);
      v15 = (void *)FS_WinHandleFromFileHandle(h);
      FlushFileBuffers(v15);
      v13 = 0;
      fileWriteBufferPos = 0;
    }
    goto LABEL_31;
  }
  v13 = fileWriteBufferPos;
LABEL_31:
  if ( len + v13 >= 0x8000 )
  {
    LODWORD(v18) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 2235, ASSERT_TYPE_ASSERT, "(fileWriteBufferPos + len < (32 * KB))", "%s\n\tfileWriteBufferPos is %i, len is %i", "fileWriteBufferPos + len < FILE_WRITE_BUFFER_SIZE", v18, len) )
      __debugbreak();
    v13 = fileWriteBufferPos;
  }
  memcpy_0(&fileWriteBuffer[v13], buffer, len);
  fileWriteBufferPos += truncate_cast<unsigned long,unsigned __int64>(len);
  LODWORD(result) = truncate_cast<unsigned long,unsigned __int64>(len);
  NumberOfBytesWritten = result;
  if ( !threadWriteInProgress )
  {
    s_logFile = (HANDLE)FS_WinHandleFromFileHandle(h);
    SetEvent(g_writeLogEvent);
    LODWORD(result) = NumberOfBytesWritten;
    threadWriteInProgress = 1;
  }
  return (unsigned int)result;
}

/*
==============
FS_filelength
==============
*/
__int64 FS_filelength(fileHandle_t f)
{
  if ( f.handle.handle == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 629, ASSERT_TYPE_ASSERT, "(f)", (const char *)&queryFormat, "f") )
    __debugbreak();
  return FS_FileGetFileSize(f.handle);
}

/*
==============
LogWriteThread
==============
*/
void __noreturn LogWriteThread(void *lpParameter)
{
  DWORD v1; 
  unsigned int v2; 
  DWORD LastError; 
  _iobuf *v4; 
  _iobuf *v5; 
  __int64 v6; 
  unsigned int NumberOfBytesWritten; 

  while ( 1 )
  {
    v1 = WaitForSingleObject(g_writeLogEvent, 0xFFFFFFFF);
    if ( v1 )
    {
      LODWORD(v6) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files.cpp", 2079, ASSERT_TYPE_ASSERT, "( ( res == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( res ) = %i", v6) )
        __debugbreak();
    }
    v2 = fileWriteBufferPos;
    if ( !WriteFile(s_logFile, fileWriteBuffer, fileWriteBufferPos, &NumberOfBytesWritten, NULL) )
    {
      LastError = GetLastError();
      if ( LastError )
      {
        v4 = __acrt_iob_func(2u);
        j_fprintf(v4, "Error %i from log file write\n", LastError);
      }
    }
    if ( NumberOfBytesWritten != v2 )
    {
      v5 = __acrt_iob_func(2u);
      j_fprintf(v5, "Failed trying to write %i bytes to the logfile\n", v2);
    }
    FlushFileBuffers(s_logFile);
    s_logBytesWritten = v2;
    SetEvent(g_writeLogCompleteEvent);
  }
}

/*
==============
Sys_GetMovedStreamName
==============
*/
void Sys_GetMovedStreamName(char *toFilepath, int toFilepathSize, const char *fromFilepath)
{
  Com_sprintf(toFilepath, toFilepathSize, "%sm", fromFilepath);
}

