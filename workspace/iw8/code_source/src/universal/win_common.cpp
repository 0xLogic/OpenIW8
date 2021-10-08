/*
==============
Sys_DefaultCDPath
==============
*/

const char *__fastcall Sys_DefaultCDPath()
{
  return ?Sys_DefaultCDPath@@YAPEBDXZ();
}

/*
==============
Sys_DirectoryHasContents
==============
*/

int __fastcall Sys_DirectoryHasContents(const char *directory)
{
  return ?Sys_DirectoryHasContents@@YAHPEBD@Z(directory);
}

/*
==============
Sys_DefaultHomePath
==============
*/

const char *__fastcall Sys_DefaultHomePath()
{
  return ?Sys_DefaultHomePath@@YAPEBDXZ();
}

/*
==============
Sys_EnterCriticalSection
==============
*/

void __fastcall Sys_EnterCriticalSection(CriticalSection critSect)
{
  ?Sys_EnterCriticalSection@@YAXW4CriticalSection@@@Z(critSect);
}

/*
==============
Sys_RemoveDirTree
==============
*/

int __fastcall Sys_RemoveDirTree(const char *path)
{
  return ?Sys_RemoveDirTree@@YAHPEBD@Z(path);
}

/*
==============
Sys_TryEnterCriticalSection
==============
*/

bool __fastcall Sys_TryEnterCriticalSection(CriticalSection critSect)
{
  return ?Sys_TryEnterCriticalSection@@YA_NW4CriticalSection@@@Z(critSect);
}

/*
==============
Sys_GetLastErrorString
==============
*/

void __fastcall Sys_GetLastErrorString(wchar_t *outErrText, unsigned __int64 errTextBuffCount, unsigned int lastErrCode)
{
  ?Sys_GetLastErrorString@@YAXPEA_W_KI@Z(outErrText, errTextBuffCount, lastErrCode);
}

/*
==============
Sys_GetLastErrorString
==============
*/

void __fastcall Sys_GetLastErrorString(wchar_t *outErrText, unsigned __int64 errTextBuffCount)
{
  ?Sys_GetLastErrorString@@YAXPEA_W_K@Z(outErrText, errTextBuffCount);
}

/*
==============
Sys_FreeFileList
==============
*/

void __fastcall Sys_FreeFileList(char **list)
{
  ?Sys_FreeFileList@@YAXPEAPEAD@Z(list);
}

/*
==============
Sys_Cwd
==============
*/

const char *__fastcall Sys_Cwd()
{
  return ?Sys_Cwd@@YAPEBDXZ();
}

/*
==============
Sys_GetDevHddPath
==============
*/

const char *__fastcall Sys_GetDevHddPath()
{
  return ?Sys_GetDevHddPath@@YAPEBDXZ();
}

/*
==============
Sys_Mkdir
==============
*/

int __fastcall Sys_Mkdir(const char *path)
{
  return ?Sys_Mkdir@@YAHPEBD@Z(path);
}

/*
==============
Sys_DefaultInstallPath
==============
*/

const char *__fastcall Sys_DefaultInstallPath()
{
  return ?Sys_DefaultInstallPath@@YAPEBDXZ();
}

/*
==============
Sys_Isdir
==============
*/

int __fastcall Sys_Isdir(const char *path)
{
  return ?Sys_Isdir@@YAHPEBD@Z(path);
}

/*
==============
Sys_LeaveCriticalSection
==============
*/

void __fastcall Sys_LeaveCriticalSection(CriticalSection critSect)
{
  ?Sys_LeaveCriticalSection@@YAXW4CriticalSection@@@Z(critSect);
}

/*
==============
Sys_InitializeCriticalSections
==============
*/

void Sys_InitializeCriticalSections(void)
{
  ?Sys_InitializeCriticalSections@@YAXXZ();
}

/*
==============
Sys_ListFiles
==============
*/

char **__fastcall Sys_ListFiles(const char *directory, const char *extension, const char *filter, int *numfiles, int wantsubs)
{
  return ?Sys_ListFiles@@YAPEAPEADPEBD00PEAHH@Z(directory, extension, filter, numfiles, wantsubs);
}

/*
==============
Sys_GetHddPath
==============
*/

const char *__fastcall Sys_GetHddPath()
{
  return ?Sys_GetHddPath@@YAPEBDXZ();
}

/*
==============
Sys_InCriticalSection
==============
*/

bool __fastcall Sys_InCriticalSection(CriticalSection critSect)
{
  return ?Sys_InCriticalSection@@YA_NW4CriticalSection@@@Z(critSect);
}

/*
==============
Sys_Cwd
==============
*/
char *Sys_Cwd()
{
  __int64 v0; 
  wchar_t Buffer[256]; 

  Buffer[0] = 0;
  GetCurrentDirectoryW(0x1FFu, Buffer);
  Buffer[255] = 0;
  v0 = -1i64;
  while ( Buffer[++v0] != 0 )
    ;
  if ( Buffer[v0 - 1] == 92 )
    Buffer[v0 - 1] = 0;
  WideCharToMultiByte(0xFDE9u, 0, Buffer, -1, cwd, 256, NULL, NULL);
  return cwd;
}

/*
==============
Sys_DefaultCDPath
==============
*/
const char *Sys_DefaultCDPath()
{
  return (char *)&queryFormat.fmt + 3;
}

/*
==============
Sys_DefaultHomePath
==============
*/
char *Sys_DefaultHomePath()
{
  return home;
}

/*
==============
Sys_DefaultInstallPath
==============
*/
char *Sys_DefaultInstallPath()
{
  __int64 v0; 
  wchar_t Buffer[256]; 

  Buffer[0] = 0;
  GetCurrentDirectoryW(0x1FFu, Buffer);
  Buffer[255] = 0;
  v0 = -1i64;
  while ( Buffer[++v0] != 0 )
    ;
  if ( Buffer[v0 - 1] == 92 )
    Buffer[v0 - 1] = 0;
  WideCharToMultiByte(0xFDE9u, 0, Buffer, -1, cwd, 256, NULL, NULL);
  return cwd;
}

/*
==============
Sys_DirectoryHasContents
==============
*/
__int64 Sys_DirectoryHasContents(const char *directory)
{
  HANDLE First; 
  _WIN32_FIND_DATAA FindFileData; 
  char dest[256]; 

  Com_sprintf(dest, 0x100ui64, "%s\\*", directory);
  First = Win_FindFirst(dest, &FindFileData);
  if ( First == (HANDLE)-1i64 )
    return 0i64;
  while ( Win_IsCurrentOrParentDir(&FindFileData) )
  {
    if ( !Win_FindNext(First, &FindFileData) )
    {
      Win_FindClose(First);
      return 0i64;
    }
  }
  Win_FindClose(First);
  return 1i64;
}

/*
==============
Sys_EnterCriticalSection
==============
*/
void Sys_EnterCriticalSection(CriticalSection critSect)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  int v4; 
  const char *CriticalSectionName; 
  __int64 v6; 
  char *v7; 
  __int64 v9; 
  int v10; 

  v1 = critSect;
  if ( (unsigned int)critSect >= CRITSECT_COUNT )
  {
    v10 = 116;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\win_common.cpp", 614, ASSERT_TYPE_ASSERT, "(unsigned)( critSect ) < (unsigned)( CRITSECT_COUNT )", "critSect doesn't index CRITSECT_COUNT\n\t%i not in [0, %i)", critSect, v10) )
      __debugbreak();
  }
  v2 = 4 * v1;
  v3 = v1;
  v4 = *(_DWORD *)(4 * v1 + *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1104);
  if ( v4 < 0 )
  {
    CriticalSectionName = Sys_GetCriticalSectionName((CriticalSection)v1);
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\win_common.cpp", 615, ASSERT_TYPE_ASSERT, "( s_criticalSectionRecurse[critSect] >= 0 )", "%s (recurse=%d)", CriticalSectionName, v9) )
      __debugbreak();
  }
  v6 = 8i64 * tls_index;
  if ( !*(_DWORD *)(v2 + *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v6) + 1104) )
    EnterCriticalSection(&s_criticalSection[v3]);
  v7 = (char *)NtCurrentTeb()->Reserved1[11];
  ++*(_DWORD *)(v2 + *(_QWORD *)&v7[v6] + 1104);
}

/*
==============
Sys_FreeFileList
==============
*/
void Sys_FreeFileList(char **list)
{
  if ( list )
    Mem_HunkUser_Destroy((HunkUser *)*(list - 1));
}

/*
==============
Sys_GetDevHddPath
==============
*/
const char *Sys_GetDevHddPath()
{
  return "D:";
}

/*
==============
Sys_GetHddPath
==============
*/
const char *Sys_GetHddPath()
{
  return "T:";
}

/*
==============
Sys_GetLastErrorString
==============
*/
void Sys_GetLastErrorString(wchar_t *outErrText, unsigned __int64 errTextBuffCount)
{
  DWORD LastError; 
  DWORD v5; 

  LastError = GetLastError();
  if ( !FormatMessageW(0x1200u, NULL, LastError, 0x400u, outErrText, errTextBuffCount, NULL) )
  {
    v5 = GetLastError();
    j_swprintf_s(outErrText, errTextBuffCount, L"<Failed to get string> 0x%X", v5);
  }
}

/*
==============
Sys_GetLastErrorString
==============
*/
void Sys_GetLastErrorString(wchar_t *outErrText, unsigned __int64 errTextBuffCount, unsigned int lastErrCode)
{
  DWORD LastError; 

  if ( !FormatMessageW(0x1200u, NULL, lastErrCode, 0x400u, outErrText, errTextBuffCount, NULL) )
  {
    LastError = GetLastError();
    j_swprintf_s(outErrText, errTextBuffCount, L"<Failed to get string> 0x%X", LastError);
  }
}

/*
==============
Sys_InCriticalSection
==============
*/
bool Sys_InCriticalSection(CriticalSection critSect)
{
  return *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 4i64 * (int)critSect + 1104) != 0;
}

/*
==============
Sys_InitializeCriticalSections
==============
*/
void Sys_InitializeCriticalSections(void)
{
  _RTL_CRITICAL_SECTION *v0; 
  __int64 v1; 

  v0 = s_criticalSection;
  v1 = 116i64;
  do
  {
    InitializeCriticalSection(v0++);
    --v1;
  }
  while ( v1 );
}

/*
==============
Sys_Isdir
==============
*/
_BOOL8 Sys_Isdir(const char *path)
{
  struct _stat64 v2; 

  memset(&v2, 0, sizeof(v2));
  return !_stat64(path, &v2) && (v2.st_mode & 0x4000) != 0;
}

/*
==============
Sys_LeaveCriticalSection
==============
*/
void Sys_LeaveCriticalSection(CriticalSection critSect)
{
  __int64 v1; 
  __int64 v2; 
  bool v3; 
  int v4; 
  const char *CriticalSectionName; 
  __int64 v7; 
  int v8; 

  v1 = critSect;
  if ( (unsigned int)critSect >= CRITSECT_COUNT )
  {
    v8 = 116;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\win_common.cpp", 650, ASSERT_TYPE_ASSERT, "(unsigned)( critSect ) < (unsigned)( CRITSECT_COUNT )", "critSect doesn't index CRITSECT_COUNT\n\t%i not in [0, %i)", critSect, v8) )
      __debugbreak();
  }
  v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 4 * v1;
  v3 = (*(_DWORD *)(v2 + 1104))-- == 1;
  v4 = *(_DWORD *)(v2 + 1104);
  if ( v3 )
  {
    LeaveCriticalSection(&s_criticalSection[v1]);
  }
  else if ( v4 < 0 )
  {
    CriticalSectionName = Sys_GetCriticalSectionName((CriticalSection)v1);
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\win_common.cpp", 654, ASSERT_TYPE_ASSERT, "( s_criticalSectionRecurse[critSect] >= 0 )", "Trying to leave %s but it's not currently entered by this thread (recurse=%d)", CriticalSectionName, v7) )
      __debugbreak();
  }
}

/*
==============
Sys_ListFiles
==============
*/
char **Sys_ListFiles(const char *directory, const char *extension, const char *filter, int *numfiles, int wantsubs)
{
  _QWORD *m_ptr; 
  HunkUser *v10; 
  char *v11; 
  int v12; 
  HANDLE First; 
  _QWORD *v14; 
  HunkUser *v15; 
  HunkUser **v16; 
  char *v17; 
  int v18; 
  __int64 v19; 
  _QWORD *v20; 
  char *v21; 
  const char *v22; 
  const char *v23; 
  int v24; 
  int v25; 
  HANDLE v26; 
  HunkUser *v27; 
  __int64 v28; 
  HunkUser **v29; 
  int v30; 
  __int64 v31; 
  _QWORD *v32; 
  char *v33; 
  Mem_LargeLocal v37; 
  _WIN32_FIND_DATAA findData; 
  _WIN32_FIND_DATAA FindFileData; 
  char name[256]; 
  char FileName[256]; 
  char dest[256]; 

  Mem_LargeLocal::Mem_LargeLocal(&v37, 0x10000ui64, "list_t list");
  m_ptr = v37.m_ptr;
  if ( filter )
  {
    v10 = Mem_HunkUser_Create(0x400000ui64, "Sys_ListFiles", TRACK_MISC_SWAP, MEM_ALLOC_FLAG_NONE);
    v11 = NULL;
    v12 = 0;
    Com_sprintf(dest, 0x100ui64, "%s\\*", directory);
    First = Win_FindFirst(dest, &FindFileData);
    if ( First != (HANDLE)-1i64 )
    {
      v14 = m_ptr;
      do
      {
        if ( !Win_IsCurrentOrParentDir(&FindFileData) )
        {
          if ( (unsigned int)v12 >= 0x1FFF )
            break;
          Com_sprintf(name, 0x100ui64, "%s\\%s", (const char *)&queryFormat.fmt + 3, FindFileData.cFileName);
          if ( Com_FilterPath(filter, name, 0) )
          {
            *v14 = Mem_HunkUser_CopyStringInternal(v10, name, "Sys_ListFilteredFiles");
            ++v12;
            ++v14;
          }
        }
      }
      while ( Win_FindNext(First, &FindFileData) );
      Win_FindClose(First);
    }
    m_ptr[v12] = 0i64;
    *numfiles = v12;
    v15 = v10;
    if ( !v12 )
      goto LABEL_38;
    v16 = (HunkUser **)Mem_HunkUser_AllocInternal(v10, 8i64 * v12 + 16, 4ui64, "Sys_ListFiles");
    *v16 = v10;
    v17 = (char *)(v16 + 1);
    v18 = 0;
    if ( v12 > 0 )
    {
      v19 = 0i64;
      v20 = v16 + 1;
      v21 = (char *)((char *)m_ptr - v17);
      do
      {
        *v20 = *(_QWORD *)((char *)v20 + (_QWORD)v21);
        ++v18;
        ++v19;
        ++v20;
      }
      while ( v19 < v12 );
    }
    *(_QWORD *)&v17[8 * v18] = 0i64;
    goto LABEL_43;
  }
  v22 = (char *)&queryFormat.fmt + 3;
  v23 = (char *)&queryFormat.fmt + 3;
  if ( extension )
    v23 = extension;
  v11 = NULL;
  if ( *v23 == 47 && !v23[1] )
  {
    v24 = 0;
LABEL_20:
    Com_sprintf(FileName, 0x100ui64, "%s\\*", directory);
    goto LABEL_21;
  }
  v24 = 16;
  v22 = v23;
  if ( !*v23 )
    goto LABEL_20;
  Com_sprintf(FileName, 0x100ui64, "%s\\*.%s", directory, v23);
LABEL_21:
  v25 = 0;
  v26 = Win_FindFirst(FileName, &findData);
  if ( v26 != (HANDLE)-1i64 )
  {
    v27 = Mem_HunkUser_Create(0x400000ui64, "Sys_ListFiles", TRACK_MISC_SWAP, MEM_ALLOC_FLAG_NONE);
    v28 = 0i64;
    while ( 1 )
    {
      if ( wantsubs )
      {
        if ( (findData.dwFileAttributes & 0x10) == 0 )
          goto LABEL_34;
      }
      else if ( (findData.dwFileAttributes & 0x10) == v24 )
      {
        goto LABEL_34;
      }
      if ( !Win_IsCurrentOrParentDir(&findData) && (!*v22 || Win_HasFileExtension(&findData, v22)) )
      {
        m_ptr[v28] = Mem_HunkUser_CopyStringInternal(v27, findData.cFileName, "Sys_ListFiles");
        ++v25;
        if ( ++v28 == 0x1FFF )
        {
          Com_PrintWarning(16, "WARNING: MAX_FOUND_FILES (%zu) exceeded: ignoring some files in directory '%s'.\n", 0x2000ui64, directory);
LABEL_37:
          m_ptr[v25] = 0i64;
          Win_FindClose(v26);
          *numfiles = v25;
          v15 = v27;
          if ( !v25 )
          {
LABEL_38:
            Mem_HunkUser_Destroy(v15);
            goto LABEL_44;
          }
          v29 = (HunkUser **)Mem_HunkUser_AllocInternal(v27, 8i64 * v25 + 16, 4ui64, "Sys_ListFiles");
          *v29 = v27;
          v17 = (char *)(v29 + 1);
          v30 = 0;
          if ( v25 > 0 )
          {
            v31 = 0i64;
            v32 = v29 + 1;
            v33 = (char *)((char *)m_ptr - v17);
            do
            {
              *v32 = *(_QWORD *)&v33[(_QWORD)v32];
              ++v30;
              ++v31;
              ++v32;
            }
            while ( v31 < v25 );
          }
          *(_QWORD *)&v17[8 * v30] = 0i64;
LABEL_43:
          v11 = v17;
          goto LABEL_44;
        }
      }
LABEL_34:
      if ( !Win_FindNext(v26, &findData) )
        goto LABEL_37;
    }
  }
  *numfiles = 0;
LABEL_44:
  Mem_LargeLocal::~Mem_LargeLocal(&v37);
  return (char **)v11;
}

/*
==============
Sys_Mkdir
==============
*/
_BOOL8 Sys_Mkdir(const char *path)
{
  return Win_CreateDirectory(path, NULL) || GetLastError() == 183;
}

/*
==============
Sys_RemoveDirTree
==============
*/
_BOOL8 Sys_RemoveDirTree(const char *path)
{
  __int64 v2; 
  char v3; 
  bool v4; 
  const char *v5; 
  intptr_t v6; 
  bool v7; 
  const char *v8; 
  bool v9; 
  struct _finddata64i32_t FindData; 
  char dest[256]; 

  v2 = -1i64;
  do
    v9 = path[++v2] == 0;
  while ( !v9 );
  v3 = path[v2 - 1];
  v4 = v3 == 92 || v3 == 47;
  v5 = "%s\\*";
  if ( v4 )
    v5 = "%s*";
  Com_sprintf(dest, 0x100ui64, v5, path, FindData.name);
  v6 = _findfirst64i32(dest, &FindData);
  if ( v6 != -1 )
  {
    v7 = 0;
    do
    {
      if ( FindData.name[0] != 46 || FindData.name[1] && (FindData.name[1] != 46 || FindData.name[2]) )
      {
        v8 = "%s\\%s";
        if ( v4 )
          v8 = "%s%s";
        Com_sprintf(dest, 0x100ui64, v8, path, FindData.name);
        v9 = (FindData.attrib & 0x10) != 0 ? Sys_RemoveDirTree(dest) == 0 : remove(dest) == -1;
        v7 = v9;
        if ( v9 )
          break;
      }
    }
    while ( _findnext64i32(v6, &FindData) != -1 );
    _findclose(v6);
    if ( v7 )
      return 0i64;
  }
  return _rmdir(path) != -1;
}

/*
==============
Sys_TryEnterCriticalSection
==============
*/
bool Sys_TryEnterCriticalSection(CriticalSection critSect)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  int v4; 
  const char *CriticalSectionName; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  bool result; 
  __int64 v10; 
  __int64 v12; 
  int v13; 

  v1 = critSect;
  if ( (unsigned int)critSect >= CRITSECT_COUNT )
  {
    v13 = 116;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\win_common.cpp", 629, ASSERT_TYPE_ASSERT, "(unsigned)( critSect ) < (unsigned)( CRITSECT_COUNT )", "critSect doesn't index CRITSECT_COUNT\n\t%i not in [0, %i)", critSect, v13) )
      __debugbreak();
  }
  v2 = 4 * v1;
  v3 = v1;
  v4 = *(_DWORD *)(4 * v1 + *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1104);
  if ( v4 < 0 )
  {
    CriticalSectionName = Sys_GetCriticalSectionName((CriticalSection)v1);
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\win_common.cpp", 630, ASSERT_TYPE_ASSERT, "( s_criticalSectionRecurse[critSect] >= 0 )", "%s (recurse=%d)", CriticalSectionName, v12) )
      __debugbreak();
  }
  v6 = 8i64 * tls_index;
  v7 = v2 + *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v6);
  v8 = *(_DWORD *)(v7 + 1104);
  if ( v8 )
  {
    *(_DWORD *)(v7 + 1104) = v8 + 1;
    return 1;
  }
  else if ( TryEnterCriticalSection(&s_criticalSection[v3]) )
  {
    v10 = *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v6);
    result = 1;
    ++*(_DWORD *)(v2 + v10 + 1104);
  }
  else
  {
    return 0;
  }
  return result;
}

