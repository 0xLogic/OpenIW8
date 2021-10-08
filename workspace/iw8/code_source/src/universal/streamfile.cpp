/*
==============
Sys_OpenFileReliable
==============
*/

sysFileHandle_t *__fastcall Sys_OpenFileReliable(sysFileHandle_t *result, const char *filename)
{
  return ?Sys_OpenFileReliable@@YA?AUsysFileHandle_t@@PEBD@Z(result, filename);
}

/*
==============
Sys_CreateFile
==============
*/

sysFileHandle_t *__fastcall Sys_CreateFile(sysFileHandle_t *result, Sys_Folder folder, const char *baseFilename, int flags)
{
  return ?Sys_CreateFile@@YA?AUsysFileHandle_t@@W4Sys_Folder@@PEBDH@Z(result, folder, baseFilename, flags);
}

/*
==============
Sys_GetFolder
==============
*/

const char *__fastcall Sys_GetFolder(Sys_Folder folder)
{
  return ?Sys_GetFolder@@YAPEBDW4Sys_Folder@@@Z(folder);
}

/*
==============
Sys_BuildRelativePath
==============
*/

void __fastcall Sys_BuildRelativePath(char *path, int pathSize, Sys_Folder folder, const char *filename, const char *ext)
{
  ?Sys_BuildRelativePath@@YAXPEADHW4Sys_Folder@@PEBD2@Z(path, pathSize, folder, filename, ext);
}

/*
==============
Sys_CopyFile
==============
*/

void __fastcall Sys_CopyFile(const char *fromFilepath, const char *toFilepath)
{
  ?Sys_CopyFile@@YAXPEBD0@Z(fromFilepath, toFilepath);
}

/*
==============
Sys_CloseFile
==============
*/

void __fastcall Sys_CloseFile(sysFileHandle_t handle)
{
  ?Sys_CloseFile@@YAXUsysFileHandle_t@@@Z(handle);
}

/*
==============
Sys_IsStreamedFile
==============
*/

bool __fastcall Sys_IsStreamedFile(const char *filepath)
{
  return ?Sys_IsStreamedFile@@YA_NPEBD@Z(filepath);
}

/*
==============
Sys_BuildAbsPath
==============
*/

void __fastcall Sys_BuildAbsPath(char *path, int pathSize, Sys_Folder folder, const char *filename, const char *ext)
{
  ?Sys_BuildAbsPath@@YAXPEADHW4Sys_Folder@@PEBD2@Z(path, pathSize, folder, filename, ext);
}

/*
==============
Sys_MoveFile
==============
*/

void __fastcall Sys_MoveFile(const char *fromFilepath, const char *toFilepath)
{
  ?Sys_MoveFile@@YAXPEBD0@Z(fromFilepath, toFilepath);
}

/*
==============
Sys_GetDlcFolder
==============
*/

const char *__fastcall Sys_GetDlcFolder(Sys_Folder folder)
{
  return ?Sys_GetDlcFolder@@YAPEBDW4Sys_Folder@@@Z(folder);
}

/*
==============
Sys_OpenFileReliable
==============
*/

sysFileHandle_t *__fastcall Sys_OpenFileReliable(sysFileHandle_t *result, const char *filename, int flags)
{
  return ?Sys_OpenFileReliable@@YA?AUsysFileHandle_t@@PEBDH@Z(result, filename, flags);
}

/*
==============
Sys_BuildHomePath
==============
*/

void __fastcall Sys_BuildHomePath(char *path, int pathSize, Sys_Folder folder, const char *filename, const char *ext)
{
  ?Sys_BuildHomePath@@YAXPEADHW4Sys_Folder@@PEBD2@Z(path, pathSize, folder, filename, ext);
}

/*
==============
Sys_SetFolder
==============
*/

void __fastcall Sys_SetFolder(Sys_Folder folder, const char *path)
{
  ?Sys_SetFolder@@YAXW4Sys_Folder@@PEBD@Z(folder, path);
}

/*
==============
Sys_BuildAbsPath
==============
*/
void Sys_BuildAbsPath(char *path, int pathSize, Sys_Folder folder, const char *filename, const char *ext)
{
  const char *v9; 

  v9 = Sys_DefaultInstallPath();
  Sys_BuildPathInternal(path, pathSize, v9, folder, filename, ext);
}

/*
==============
Sys_BuildHomePath
==============
*/
void Sys_BuildHomePath(char *path, int pathSize, Sys_Folder folder, const char *filename, const char *ext)
{
  const char *v9; 

  v9 = Sys_DefaultHomePath();
  Sys_BuildPathInternal(path, pathSize, v9, folder, filename, ext);
}

/*
==============
Sys_BuildPathInternal
==============
*/
void Sys_BuildPathInternal(char *path, int pathSize, const char *root, Sys_Folder folder, const char *filename, const char *ext)
{
  unsigned __int64 v6; 
  const char *v10; 
  char *fmt; 

  v6 = pathSize;
  if ( (unsigned int)folder >= SF_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streamfile.cpp", 861, ASSERT_TYPE_ASSERT, "(unsigned)( folder ) < (unsigned)( SF_COUNT )", "folder doesn't index SF_COUNT\n\t%i not in [0, %i)", folder, 7) )
    __debugbreak();
  v10 = Sys_GetFolder(folder);
  if ( root )
  {
    LODWORD(fmt) = 92;
    Com_sprintf(path, v6, "%s%c%s%s%s", root, fmt, v10, filename, ext);
  }
  else
  {
    Com_sprintf(path, v6, "%s%s%s", v10, filename, ext);
  }
}

/*
==============
Sys_BuildRelativePath
==============
*/
void Sys_BuildRelativePath(char *path, int pathSize, Sys_Folder folder, const char *filename, const char *ext)
{
  unsigned __int64 v5; 
  const char *v9; 
  int v11; 

  v5 = pathSize;
  if ( (unsigned int)folder >= SF_COUNT )
  {
    v11 = 7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streamfile.cpp", 861, ASSERT_TYPE_ASSERT, "(unsigned)( folder ) < (unsigned)( SF_COUNT )", "folder doesn't index SF_COUNT\n\t%i not in [0, %i)", folder, v11) )
      __debugbreak();
  }
  v9 = Sys_GetFolder(folder);
  Com_sprintf(path, v5, "%s%s%s", v9, filename, ext);
}

/*
==============
Sys_CloseFile
==============
*/
void Sys_CloseFile(sysFileHandle_t handle)
{
  BOOL v2; 
  bool v3; 
  DWORD LastError; 
  DWORD v5; 

  v2 = CloseHandle((HANDLE)handle.handle);
  v3 = v2;
  if ( !v2 )
  {
    LastError = GetLastError();
    Com_Printf(10, "Sys_CloseFile: Error %x, Handle %d\n", LastError, handle.handle);
  }
  if ( !v3 )
  {
    v5 = GetLastError();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streamfile.cpp", 309, ASSERT_TYPE_ASSERT, "( closeResult )", "Sys_CloseFile: Error %x Handle %d", v5, handle.handle) )
      __debugbreak();
  }
}

/*
==============
Sys_CopyFile
==============
*/
void Sys_CopyFile(const char *fromFilepath, const char *toFilepath)
{
  int FileInformation[12]; 
  wchar_t WideCharStr[256]; 
  wchar_t pwszExistingFileName[256]; 

  if ( dev_move_files->current.enabled && GetFileAttributesExA(fromFilepath, GetFileExInfoStandard, FileInformation) && FileInformation[0] != -1 )
  {
    MultiByteToWideChar(0xFDE9u, 0, toFilepath, -1, WideCharStr, 256);
    MultiByteToWideChar(0xFDE9u, 0, fromFilepath, -1, pwszExistingFileName, 256);
    CopyFile2(pwszExistingFileName, WideCharStr, NULL);
  }
}

/*
==============
Sys_CreateFile
==============
*/
sysFileHandle_t *Sys_CreateFile(sysFileHandle_t *result, const char *folder, const char *baseFilename, int flags)
{
  unsigned int v4; 
  Sys_Folder v5; 
  const char *v6; 
  const char *v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  char v11; 
  __int64 v12; 
  char v13; 
  __int64 v14; 
  char v15; 
  __int64 v16; 
  char v17; 
  const char *v18; 
  const char *v19; 
  int v20; 
  sysFileHandle_t *File; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  char v25; 
  const char *v26; 
  int v27; 
  sysFileHandle_t *v28; 
  int v29; 
  int v30; 
  char *fmt; 
  char *fmta; 
  __int64 cchWideChar; 
  __int64 v34; 
  int FileInformation[5]; 
  FILETIME FileTime1; 
  char v37[20]; 
  FILETIME FileTime2; 
  sysFileHandle_t FileName[32]; 
  sysFileHandle_t MultiByteStr[32]; 
  char dest[256]; 
  char WideCharStr[2][256]; 
  wchar_t pwszExistingFileName[256]; 

  v4 = (unsigned int)baseFilename;
  v5 = (int)result;
  Core_strcpy(dest, 0x100ui64, folder);
  v6 = Sys_DefaultInstallPath();
  if ( (unsigned int)v5 >= SF_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streamfile.cpp", 861, ASSERT_TYPE_ASSERT, "(unsigned)( folder ) < (unsigned)( SF_COUNT )", "folder doesn't index SF_COUNT\n\t%i not in [0, %i)", v5, 7) )
    __debugbreak();
  v7 = Sys_GetFolder(v5);
  if ( v6 )
  {
    LODWORD(fmt) = 92;
    Com_sprintf((char *)FileName, 0x100ui64, "%s%c%s%s%s", v6, fmt, v7, dest, (const char *)&queryFormat.fmt + 3);
  }
  else
  {
    Com_sprintf((char *)FileName, 0x100ui64, "%s%s%s", v7, dest, (const char *)&queryFormat.fmt + 3);
  }
  v8 = 0i64;
  v9 = 0i64;
  v10 = 9i64;
  do
  {
    v11 = dest[v9];
    v12 = v10;
    v13 = aMychanges_0[v9++];
    --v10;
    if ( !v12 )
      break;
    if ( v11 != v13 )
    {
      v14 = 11i64;
      do
      {
        v15 = dest[v8];
        v16 = v14;
        v17 = aMyparticles[v8++];
        --v14;
        if ( !v16 )
          break;
        if ( v15 != v17 )
          goto LABEL_27;
      }
      while ( v15 );
      break;
    }
  }
  while ( v11 );
  v18 = Sys_DefaultHomePath();
  if ( (unsigned int)v5 >= SF_COUNT )
  {
    LODWORD(v34) = 7;
    LODWORD(cchWideChar) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streamfile.cpp", 861, ASSERT_TYPE_ASSERT, "(unsigned)( folder ) < (unsigned)( SF_COUNT )", "folder doesn't index SF_COUNT\n\t%i not in [0, %i)", cchWideChar, v34) )
      __debugbreak();
  }
  v19 = Sys_GetFolder(v5);
  if ( v18 )
  {
    LODWORD(fmta) = 92;
    Com_sprintf((char *)MultiByteStr, 0x100ui64, "%s%c%s%s%s", v18, fmta, v19, dest, (const char *)&queryFormat.fmt + 3);
  }
  else
  {
    Com_sprintf((char *)MultiByteStr, 0x100ui64, "%s%s%s", v19, dest, (const char *)&queryFormat.fmt + 3);
  }
  if ( dev_move_files->current.enabled && GetFileAttributesExA((LPCSTR)FileName, GetFileExInfoStandard, FileInformation) && FileInformation[0] != -1 )
  {
    MultiByteToWideChar(0xFDE9u, 0, (LPCCH)MultiByteStr, -1, (LPWSTR)WideCharStr, 256);
    MultiByteToWideChar(0xFDE9u, 0, (LPCCH)FileName, -1, pwszExistingFileName, 256);
    CopyFile2(pwszExistingFileName, (PCWSTR)WideCharStr, NULL);
  }
  File = Sys_OpenFileReliable(MultiByteStr, (const char *)v4, v20);
  if ( File == (sysFileHandle_t *)-1i64 )
  {
LABEL_27:
    v22 = I_stristr((const char *)FileName, "xpak");
    if ( (!v22 || I_stricmp(v22, "xpak")) && ((v23 = I_stristr((const char *)FileName, ".sabl")) == NULL || I_stricmp(v23, ".sabl")) && ((v24 = I_stristr((const char *)FileName, ".sabs")) == NULL || I_stricmp(v24, ".sabs")) )
    {
      v25 = 0;
    }
    else
    {
      Sys_GetMovedStreamName((char *)MultiByteStr, 256, (const char *)FileName);
      v25 = 1;
      if ( !SI_IsStreamingInstall() && dev_move_files->current.enabled && GetFileAttributesExA((LPCSTR)FileName, GetFileExInfoStandard, FileInformation) )
      {
        if ( FileInformation[0] != -1 && (FileInformation[0] & 1) == 0 )
        {
          MultiByteToWideChar(0xFDE9u, 0, (LPCCH)MultiByteStr, -1, pwszExistingFileName, 256);
          MultiByteToWideChar(0xFDE9u, 0, (LPCCH)FileName, -1, (LPWSTR)WideCharStr, 256);
          MoveFileExW((LPCWSTR)WideCharStr, pwszExistingFileName, 1u);
        }
        v25 = 1;
      }
    }
    v26 = I_stristr((const char *)FileName, "xpak");
    if ( !v26 || I_stricmp(v26, "xpak") )
    {
LABEL_57:
      File = Sys_OpenFileReliable(FileName, (const char *)v4, v27);
      if ( File == (sysFileHandle_t *)-1i64 )
      {
        if ( !v25 || (File = Sys_OpenFileReliable(MultiByteStr, (const char *)v4, v29), File == (sysFileHandle_t *)-1i64) )
        {
          File = Content_CreateFile((sysFileHandle_t *)(unsigned int)v5, (Sys_Folder)dest, (const char *)v4, v30);
          if ( File == (sysFileHandle_t *)-1i64 )
            return (sysFileHandle_t *)INVALID_SYS_FILE_HANDLE_1.handle;
        }
      }
      return File;
    }
    Com_sprintf<256>(WideCharStr, "%s%s", (const char *)FileName, "~lk");
    if ( GetFileAttributesExA(WideCharStr[0], GetFileExInfoStandard, FileInformation) )
    {
      if ( GetFileAttributesExA((LPCSTR)FileName, GetFileExInfoStandard, v37) )
        goto LABEL_47;
      if ( GetLastError() == 2 )
      {
        if ( GetFileAttributesExA((LPCSTR)MultiByteStr, GetFileExInfoStandard, v37) )
        {
LABEL_47:
          if ( CompareFileTime(&FileTime1, &FileTime2) == 1 )
          {
LABEL_48:
            File = Sys_OpenFileReliable((sysFileHandle_t *)WideCharStr, (const char *)v4, v27);
            goto LABEL_56;
          }
LABEL_55:
          File = (sysFileHandle_t *)INVALID_SYS_FILE_HANDLE_1.handle;
LABEL_56:
          if ( File != (sysFileHandle_t *)-1i64 )
            return File;
          goto LABEL_57;
        }
        if ( GetLastError() == 2 )
          goto LABEL_48;
        v28 = MultiByteStr;
      }
      else
      {
        v28 = FileName;
      }
    }
    else
    {
      if ( GetLastError() == 2 )
        goto LABEL_55;
      v28 = (sysFileHandle_t *)WideCharStr;
    }
    Com_PrintError(10, "Sys_OpenLockFileIfNewer(): Failed to get file attributes for %s\n", (const char *)v28);
    goto LABEL_55;
  }
  return File;
}

/*
==============
Sys_GetDlcFolder
==============
*/
char *Sys_GetDlcFolder(Sys_Folder folder)
{
  const char *CurrentLanguageName; 
  char *result; 

  switch ( folder )
  {
    case SF_ZONE:
    case SF_VIDEO:
    case SF_PAKFILE:
      goto $LN4_93;
    case SF_ZONE_LOC:
    case SF_VIDEO_LOC:
    case SF_PAKFILE_LOC:
      CurrentLanguageName = SEH_GetCurrentLanguageName();
      goto LABEL_3;
    case SF_ZONE_REGION:
      CurrentLanguageName = RG_GetCurrentRegionName();
LABEL_3:
      result = j_va("%s%c", CurrentLanguageName, 92i64);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streamfile.cpp", 853, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown Sys_Folder") )
        __debugbreak();
$LN4_93:
      result = (char *)&queryFormat.fmt + 3;
      break;
  }
  return result;
}

/*
==============
Sys_GetFolder
==============
*/
char *Sys_GetFolder(Sys_Folder folder)
{
  __int64 v1; 
  int v4; 

  v1 = folder;
  if ( (unsigned int)folder >= SF_COUNT )
  {
    v4 = 7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streamfile.cpp", 812, ASSERT_TYPE_ASSERT, "(unsigned)( folder ) < (unsigned)( SF_COUNT )", "folder doesn't index SF_COUNT\n\t%i not in [0, %i)", folder, v4) )
      __debugbreak();
  }
  if ( !g_sysFoldersInit[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streamfile.cpp", 814, ASSERT_TYPE_ASSERT, "(g_sysFoldersInit[folder])", (const char *)&queryFormat, "g_sysFoldersInit[folder]") )
    __debugbreak();
  return g_sysFolders[v1];
}

/*
==============
Sys_IsStreamedFile
==============
*/
bool Sys_IsStreamedFile(const char *filepath)
{
  const char *v2; 
  const char *v3; 
  const char *v4; 
  bool result; 

  v2 = I_stristr(filepath, "xpak");
  result = 1;
  if ( !v2 || I_stricmp(v2, "xpak") )
  {
    v3 = I_stristr(filepath, ".sabl");
    if ( !v3 || I_stricmp(v3, ".sabl") )
    {
      v4 = I_stristr(filepath, ".sabs");
      if ( !v4 || I_stricmp(v4, ".sabs") )
        return 0;
    }
  }
  return result;
}

/*
==============
Sys_MoveFile
==============
*/
void Sys_MoveFile(const char *fromFilepath, const char *toFilepath)
{
  int FileInformation[12]; 
  wchar_t WideCharStr[256]; 
  wchar_t ExistingFileName[256]; 

  if ( !SI_IsStreamingInstall() && dev_move_files->current.enabled && GetFileAttributesExA(fromFilepath, GetFileExInfoStandard, FileInformation) && FileInformation[0] != -1 && (FileInformation[0] & 1) == 0 )
  {
    MultiByteToWideChar(0xFDE9u, 0, toFilepath, -1, WideCharStr, 256);
    MultiByteToWideChar(0xFDE9u, 0, fromFilepath, -1, ExistingFileName, 256);
    MoveFileExW(ExistingFileName, WideCharStr, 1u);
  }
}

/*
==============
Sys_OpenFileReliable
==============
*/
sysFileHandle_t *Sys_OpenFileReliable(sysFileHandle_t *result, const char *filename, int a3)
{
  return Sys_OpenFileReliable(result, (const char *)0x18, a3);
}

/*
==============
Sys_OpenFileReliable
==============
*/
sysFileHandle_t *Sys_OpenFileReliable(sysFileHandle_t *result, const char *filename, int flags)
{
  char v3; 
  int v4; 
  bool v6; 
  int v7; 
  HANDLE File; 
  HANDLE v9; 
  DWORD LastError; 
  DWORD v12; 
  __int64 dwFlagsAndAttributes; 

  v3 = (char)filename;
  v4 = ((unsigned __int8)filename & 8) << 27;
  v6 = I_stristr((const char *)result, ".xpak") != NULL;
  v7 = v4 | 0x20000000;
  if ( (v3 & 0x10) == 0 )
    v7 = v4;
  File = Win_CreateFile((LPCSTR)result, 0x80000000, 1u, NULL, 3u, v7, NULL);
  v9 = File;
  if ( !File )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streamfile.cpp", 253, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
      __debugbreak();
    goto LABEL_6;
  }
  if ( File != (HANDLE)-1i64 )
  {
LABEL_6:
    if ( v6 )
      Com_Printf(36, "Sys_OpenFileReliable(): Opened xpak %s\n", (const char *)result);
    return (sysFileHandle_t *)v9;
  }
  LastError = GetLastError();
  v12 = LastError;
  if ( LastError >= 2 )
  {
    if ( LastError <= 3 )
      goto LABEL_15;
    if ( LastError == 5 )
    {
      Com_Printf(10, "Sys_OpenFileReliable: Access denied opening file %s\n", (const char *)result);
      goto LABEL_16;
    }
  }
  Com_Printf(10, "Sys_OpenFileReliable: Unknown Error %x for file %s\n", LastError, (const char *)result);
LABEL_15:
  if ( v12 - 2 > 1 )
  {
LABEL_16:
    LODWORD(dwFlagsAndAttributes) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streamfile.cpp", 277, ASSERT_TYPE_ASSERT, "( (errorCode == 2L) || (errorCode == 3L) )", "Sys_OpenFileReliable: Error 0x%x File %s", dwFlagsAndAttributes, (const char *)result) )
      __debugbreak();
  }
  if ( v6 )
    Com_Printf(36, "Sys_OpenFileReliable(): Failed to open xpak %s with error code 0x%x\n", (const char *)result, v12);
  return (sysFileHandle_t *)v9;
}

/*
==============
Sys_SetFolder
==============
*/
void Sys_SetFolder(Sys_Folder folder, const char *path)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 
  bool v6; 
  char v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 

  v2 = folder;
  v4 = -1i64;
  if ( path )
  {
    if ( *path )
    {
      v5 = -1i64;
      do
        v6 = path[++v5] == 0;
      while ( !v6 );
      v7 = path[v5 - 1];
      if ( (v7 == 92 || v7 == 47) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streamfile.cpp", 782, ASSERT_TYPE_ASSERT, "(last != '\\\\' && last != '/')", (const char *)&queryFormat, "last != '\\\\' && last != '/'") )
        __debugbreak();
    }
  }
  if ( (unsigned int)v2 >= 7 )
  {
    v11 = 7;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streamfile.cpp", 786, ASSERT_TYPE_ASSERT, "(unsigned)( folder ) < (unsigned)( SF_COUNT )", "folder doesn't index SF_COUNT\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v8 = v2;
  g_sysFoldersInit[v2] = 1;
  v9 = v2 << 8;
  Core_strcpy(&g_sysFolders[0][v9], 0x100ui64, path);
  if ( *path )
  {
    do
      v6 = path[++v4] == 0;
    while ( !v6 );
    if ( (unsigned __int64)(v4 + 1) >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\streamfile.cpp", 796, ASSERT_TYPE_ASSERT, "(len + 1 < sizeof( g_sysFolders[folder] ))", (const char *)&queryFormat, "len + 1 < sizeof( g_sysFolders[folder] )") )
      __debugbreak();
    *(_WORD *)&g_sysFolders[0][v9 + v4] = 92;
  }
  Com_Printf(10, "%s: %s\n", g_sysFolderNames[v8], &g_sysFolders[0][v9]);
}

