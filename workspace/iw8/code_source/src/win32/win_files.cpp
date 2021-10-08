/*
==============
Win_FindClose
==============
*/

bool __fastcall Win_FindClose(void *findHandle)
{
  return ?Win_FindClose@@YA_NPEAX@Z(findHandle);
}

/*
==============
Win_FindFirst
==============
*/

HANDLE __stdcall Win_FindFirst(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData)
{
  return ?Win_FindFirst@@YAPEAXPEBDAEAU_WIN32_FIND_DATAA@@@Z(lpFileName, lpFindFileData);
}

/*
==============
Win_GetFileAttributes
==============
*/

DWORD __stdcall Win_GetFileAttributes(LPCSTR lpFileName)
{
  return ?Win_GetFileAttributes@@YAKPEBD@Z(lpFileName);
}

/*
==============
Win_FindNext
==============
*/

bool __fastcall Win_FindNext(void *findHandle, _WIN32_FIND_DATAA *outFindData)
{
  return ?Win_FindNext@@YA_NPEAXAEAU_WIN32_FIND_DATAA@@@Z(findHandle, outFindData);
}

/*
==============
Win_CreateDirectory
==============
*/

BOOL __stdcall Win_CreateDirectory(LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes)
{
  return ?Win_CreateDirectory@@YAHPEBDPEAU_SECURITY_ATTRIBUTES@@@Z(lpPathName, lpSecurityAttributes);
}

/*
==============
Win_HasFileExtension
==============
*/

bool __fastcall Win_HasFileExtension(const _WIN32_FIND_DATAA *findData, const char *extension)
{
  return ?Win_HasFileExtension@@YA_NAEBU_WIN32_FIND_DATAA@@PEBD@Z(findData, extension);
}

/*
==============
Win_IsCurrentOrParentDir
==============
*/

bool __fastcall Win_IsCurrentOrParentDir(const _WIN32_FIND_DATAA *findData)
{
  return ?Win_IsCurrentOrParentDir@@YA_NAEBU_WIN32_FIND_DATAA@@@Z(findData);
}

/*
==============
Win_GetCurrentDirectory
==============
*/

void __fastcall Win_GetCurrentDirectory(char *outCurDir, int bufferSize)
{
  ?Win_GetCurrentDirectory@@YAXPEADH@Z(outCurDir, bufferSize);
}

/*
==============
Win_CreateFile
==============
*/

HANDLE __stdcall Win_CreateFile(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)
{
  return ?Win_CreateFile@@YAPEAXPEBDKKPEAU_SECURITY_ATTRIBUTES@@KKPEAX@Z(lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
}

/*
==============
Win_DeleteFile
==============
*/

bool __fastcall Win_DeleteFile(const char *fileName)
{
  return ?Win_DeleteFile@@YA_NPEBD@Z(fileName);
}

/*
==============
Win_CreateDirectory
==============
*/

BOOL __stdcall Win_CreateDirectory(LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes)
{
  return CreateDirectoryA(lpPathName, lpSecurityAttributes);
}

/*
==============
Win_CreateFile
==============
*/

HANDLE __stdcall Win_CreateFile(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)
{
  return CreateFileA(lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
}

/*
==============
Win_DeleteFile
==============
*/
bool Win_DeleteFile(const char *fileName)
{
  return DeleteFileA(fileName);
}

/*
==============
Win_FindClose
==============
*/
bool Win_FindClose(void *findHandle)
{
  return FindClose(findHandle);
}

/*
==============
Win_FindFirst
==============
*/

HANDLE __stdcall Win_FindFirst(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData)
{
  return FindFirstFileA(lpFileName, lpFindFileData);
}

/*
==============
Win_FindNext
==============
*/
bool Win_FindNext(void *findHandle, _WIN32_FIND_DATAA *outFindData)
{
  return FindNextFileA(findHandle, outFindData);
}

/*
==============
Win_GetCurrentDirectory
==============
*/
void Win_GetCurrentDirectory(char *outCurDir, int bufferSize)
{
  __int64 v2; 

  v2 = bufferSize;
  if ( bufferSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\win32\\win_files.cpp", 243, ASSERT_TYPE_ASSERT, "(bufferSize > 0)", "%s\n\tWin_GetCurrentDirectory : Fetching current directory in a zero-sized buffer", "bufferSize > 0") )
    __debugbreak();
  *outCurDir = 0;
  if ( GetCurrentDirectoryA(v2 - 1, outCurDir) )
    outCurDir[v2 - 1] = 0;
}

/*
==============
Win_GetFileAttributes
==============
*/

DWORD __stdcall Win_GetFileAttributes(LPCSTR lpFileName)
{
  return GetFileAttributesA(lpFileName);
}

/*
==============
Win_HasFileExtension
==============
*/
bool Win_HasFileExtension(const _WIN32_FIND_DATAA *findData, const char *extension)
{
  char *p_s0; 
  char s0; 
  char v6; 

  if ( _splitpath_s(findData->cFileName, NULL, 0i64, NULL, 0i64, NULL, 0i64, &s0, 0x100ui64) )
    return 0;
  p_s0 = &v6;
  if ( *extension == 46 )
    p_s0 = &s0;
  return I_stricmp(p_s0, extension) == 0;
}

/*
==============
Win_IsCurrentOrParentDir
==============
*/
bool Win_IsCurrentOrParentDir(const _WIN32_FIND_DATAA *findData)
{
  char *cFileName; 
  bool result; 

  result = 0;
  if ( (findData->dwFileAttributes & 0x10) != 0 )
  {
    cFileName = findData->cFileName;
    if ( !I_stricmp(findData->cFileName, ".") || !I_stricmp(cFileName, "..") || !I_stricmp(cFileName, "CVS") )
      return 1;
  }
  return result;
}

