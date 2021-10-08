/*
==============
FS_FileOpenReadText
==============
*/

sysFileHandle_t *__fastcall FS_FileOpenReadText(sysFileHandle_t *result, const char *filename)
{
  return ?FS_FileOpenReadText@@YA?AUsysFileHandle_t@@PEBD@Z(result, filename);
}

/*
==============
FS_FileGetFileSize
==============
*/

__int64 __fastcall FS_FileGetFileSize(sysFileHandle_t file)
{
  return ?FS_FileGetFileSize@@YA_JUsysFileHandle_t@@@Z(file);
}

/*
==============
FS_FileOpenWriteText
==============
*/

sysFileHandle_t *__fastcall FS_FileOpenWriteText(sysFileHandle_t *result, const char *filename)
{
  return ?FS_FileOpenWriteText@@YA?AUsysFileHandle_t@@PEBD@Z(result, filename);
}

/*
==============
FS_FileOpenWriteReadBinary
==============
*/

sysFileHandle_t *__fastcall FS_FileOpenWriteReadBinary(sysFileHandle_t *result, const char *filename)
{
  return ?FS_FileOpenWriteReadBinary@@YA?AUsysFileHandle_t@@PEBD@Z(result, filename);
}

/*
==============
FS_FileOpenAppendText
==============
*/

sysFileHandle_t *__fastcall FS_FileOpenAppendText(sysFileHandle_t *result, const char *filename)
{
  return ?FS_FileOpenAppendText@@YA?AUsysFileHandle_t@@PEBD@Z(result, filename);
}

/*
==============
FS_FileRead
==============
*/

__int64 __fastcall FS_FileRead(void *ptr, unsigned __int64 len, sysFileHandle_t stream)
{
  return ?FS_FileRead@@YA_JPEAX_KUsysFileHandle_t@@@Z(ptr, len, stream);
}

/*
==============
FS_FileWrite
==============
*/

__int64 __fastcall FS_FileWrite(const void *ptr, unsigned __int64 len, sysFileHandle_t stream)
{
  return ?FS_FileWrite@@YA_JPEBX_KUsysFileHandle_t@@@Z(ptr, len, stream);
}

/*
==============
FS_FileOpenWriteBinary
==============
*/

sysFileHandle_t *__fastcall FS_FileOpenWriteBinary(sysFileHandle_t *result, const char *filename)
{
  return ?FS_FileOpenWriteBinary@@YA?AUsysFileHandle_t@@PEBD@Z(result, filename);
}

/*
==============
FS_FileClose
==============
*/

BOOL __stdcall FS_FileClose(HANDLE hObject)
{
  return ?FS_FileClose@@YAXUsysFileHandle_t@@@Z(hObject);
}

/*
==============
FS_FileOpenReadBinary
==============
*/

sysFileHandle_t *__fastcall FS_FileOpenReadBinary(sysFileHandle_t *result, const char *filename)
{
  return ?FS_FileOpenReadBinary@@YA?AUsysFileHandle_t@@PEBD@Z(result, filename);
}

/*
==============
FS_FileRotate
==============
*/

int __fastcall FS_FileRotate(const char *filename)
{
  return ?FS_FileRotate@@YAHPEBD@Z(filename);
}

/*
==============
FS_FileSeek
==============
*/

int __fastcall FS_FileSeek(sysFileHandle_t file, __int64 offset, int whence)
{
  return ?FS_FileSeek@@YAHUsysFileHandle_t@@_JH@Z(file, offset, whence);
}

/*
==============
FS_FileOpenReadWriteBinary
==============
*/

sysFileHandle_t *__fastcall FS_FileOpenReadWriteBinary(sysFileHandle_t *result, const char *filename)
{
  return ?FS_FileOpenReadWriteBinary@@YA?AUsysFileHandle_t@@PEBD@Z(result, filename);
}

/*
==============
FS_FileTell
==============
*/

__int64 __fastcall FS_FileTell(sysFileHandle_t file)
{
  return ?FS_FileTell@@YA_JUsysFileHandle_t@@@Z(file);
}

/*
==============
FS_FileClose
==============
*/

BOOL __stdcall FS_FileClose(HANDLE hObject)
{
  return CloseHandle(hObject);
}

/*
==============
FS_FileGetFileSize
==============
*/
_LARGE_INTEGER FS_FileGetFileSize(sysFileHandle_t file)
{
  BOOL v1; 
  _LARGE_INTEGER v2; 
  _LARGE_INTEGER FileSize; 

  v1 = GetFileSizeEx((HANDLE)file.handle, &FileSize);
  v2 = FileSize;
  if ( !v1 )
    v2.QuadPart = -1i64;
  return v2;
}

/*
==============
FS_FileOpenAppendText
==============
*/
sysFileHandle_t *FS_FileOpenAppendText(sysFileHandle_t *result, const char *filename)
{
  int Int_Internal_DebugName; 
  unsigned int v4; 
  sysFileHandle_t *File2; 
  sysFileHandle_t *v6; 
  __int64 v7[4]; 
  wchar_t WideCharStr[256]; 

  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_logfile, "logfile");
  v4 = 0;
  if ( Int_Internal_DebugName > 1 )
    v4 = 0x80000000;
  v7[2] = 0i64;
  v7[3] = 0i64;
  v7[1] = v4;
  v7[0] = 32i64;
  MultiByteToWideChar(0xFDE9u, 0, (LPCCH)result, -1, WideCharStr, 256);
  File2 = (sysFileHandle_t *)CreateFile2(WideCharStr, 0x40000000i64, 1i64, 4i64, v7);
  v6 = File2;
  if ( File2 != (sysFileHandle_t *)-1i64 )
  {
    SetFilePointerEx(File2, 0i64, NULL, 2u);
    return v6;
  }
  return File2;
}

/*
==============
FS_FileOpenReadBinary
==============
*/
sysFileHandle_t *FS_FileOpenReadBinary(sysFileHandle_t *result, const char *filename)
{
  __int64 v5; 
  int v6; 
  int v8; 
  wchar_t WideCharStr[256]; 

  v8 = 0;
  v5 = 32i64;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v6 = 0x8000000;
  __asm { vmovdqu [rsp+268h+var_22C], xmm0 }
  MultiByteToWideChar(0xFDE9u, 0, (LPCCH)result, -1, WideCharStr, 256);
  return (sysFileHandle_t *)CreateFile2(WideCharStr, 0x80000000i64, 0i64, 3i64, &v5);
}

/*
==============
FS_FileOpenReadText
==============
*/
sysFileHandle_t *FS_FileOpenReadText(sysFileHandle_t *result, const char *filename)
{
  wchar_t WideCharStr[256]; 

  MultiByteToWideChar(0xFDE9u, 0, (LPCCH)result, -1, WideCharStr, 256);
  return (sysFileHandle_t *)CreateFile2(WideCharStr, 0x80000000i64, 0i64, 3i64, 0i64);
}

/*
==============
FS_FileOpenReadWriteBinary
==============
*/
sysFileHandle_t *FS_FileOpenReadWriteBinary(sysFileHandle_t *result, const char *filename)
{
  wchar_t WideCharStr[256]; 

  MultiByteToWideChar(0xFDE9u, 0, (LPCCH)result, -1, WideCharStr, 256);
  return (sysFileHandle_t *)CreateFile2(WideCharStr, 3221225472i64, 0i64, 3i64, 0i64);
}

/*
==============
FS_FileOpenWriteBinary
==============
*/
sysFileHandle_t *FS_FileOpenWriteBinary(sysFileHandle_t *result, const char *filename)
{
  wchar_t WideCharStr[256]; 

  MultiByteToWideChar(0xFDE9u, 0, (LPCCH)result, -1, WideCharStr, 256);
  return (sysFileHandle_t *)CreateFile2(WideCharStr, 0x40000000i64, 0i64, 2i64, 0i64);
}

/*
==============
FS_FileOpenWriteReadBinary
==============
*/
sysFileHandle_t *FS_FileOpenWriteReadBinary(sysFileHandle_t *result, const char *filename)
{
  wchar_t WideCharStr[256]; 

  MultiByteToWideChar(0xFDE9u, 0, (LPCCH)result, -1, WideCharStr, 256);
  return (sysFileHandle_t *)CreateFile2(WideCharStr, 3221225472i64, 0i64, 2i64, 0i64);
}

/*
==============
FS_FileOpenWriteText
==============
*/
sysFileHandle_t *FS_FileOpenWriteText(sysFileHandle_t *result, const char *filename)
{
  unsigned int v3; 
  __int64 v5[4]; 
  wchar_t WideCharStr[256]; 

  v3 = 0;
  if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_logfile, "logfile") > 1 )
    v3 = 0x80000000;
  v5[2] = 0i64;
  v5[3] = 0i64;
  v5[0] = 32i64;
  v5[1] = v3;
  MultiByteToWideChar(0xFDE9u, 0, (LPCCH)result, -1, WideCharStr, 256);
  return (sysFileHandle_t *)CreateFile2(WideCharStr, 0x40000000i64, 1i64, 2i64, v5);
}

/*
==============
FS_FileRead
==============
*/
__int64 FS_FileRead(void *ptr, unsigned __int64 len, sysFileHandle_t stream)
{
  DWORD v6; 
  unsigned int NumberOfBytesRead; 

  if ( len > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files_wrapper_ms.h", 401, ASSERT_TYPE_ASSERT, "(len <= 0xffffffffui32)", (const char *)&queryFormat, "len <= UINT32_MAX") )
    __debugbreak();
  if ( len > 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files_wrapper_ms.h", 402, ASSERT_TYPE_ASSERT, "(len <= FILEPOS_MAX)", (const char *)&queryFormat, "len <= FILEPOS_MAX") )
    __debugbreak();
  v6 = truncate_cast<unsigned long,unsigned __int64>(len);
  ReadFile((HANDLE)stream.handle, ptr, v6, &NumberOfBytesRead, NULL);
  return NumberOfBytesRead;
}

/*
==============
FS_FileRotate
==============
*/
__int64 FS_FileRotate(const char *filename)
{
  int v1; 
  unsigned int v2; 
  HANDLE FirstFile; 
  int v4; 
  HANDLE v5; 
  LPWSTR lpWideCharStr; 
  FILETIME FileTime1; 
  char FindFileData[20]; 
  FILETIME FileTime2; 
  wchar_t _Buffer[256]; 
  wchar_t WideCharStr[256]; 

  v1 = -1;
  MultiByteToWideChar(0xFDE9u, 0, filename, -1, WideCharStr, 256);
  v2 = 0;
  FirstFile = FindFirstFileExW(WideCharStr, FindExInfoBasic, FindFileData, FindExSearchNameMatch, NULL, 0);
  if ( FirstFile != (HANDLE)-1i64 )
  {
    FindClose(FirstFile);
    FileTime1 = 0i64;
    v4 = 0;
    while ( 1 )
    {
      LODWORD(lpWideCharStr) = v4;
      j_swprintf_s(_Buffer, 0x100ui64, L"%s.%03i", WideCharStr, lpWideCharStr);
      v5 = FindFirstFileExW(_Buffer, FindExInfoBasic, FindFileData, FindExSearchNameMatch, NULL, 0);
      if ( v5 == (HANDLE)-1i64 )
        break;
      FindClose(v5);
      if ( v1 == -1 || CompareFileTime(&FileTime1, &FileTime2) > 0 )
      {
        v1 = v4;
        FileTime1 = FileTime2;
      }
      if ( ++v4 >= 20 )
        goto LABEL_10;
    }
    v1 = v4;
LABEL_10:
    if ( v1 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files_wrapper_ms.h", 178, ASSERT_TYPE_ASSERT, "(bestToReplace >= 0)", (const char *)&queryFormat, "bestToReplace >= 0", FileTime1) )
      __debugbreak();
    LODWORD(lpWideCharStr) = v1;
    j_swprintf_s(_Buffer, 0x100ui64, L"%s.%03i", WideCharStr, lpWideCharStr);
    DeleteFileW(_Buffer);
    LOBYTE(v2) = MoveFileExW(WideCharStr, _Buffer, 3u);
  }
  return v2;
}

/*
==============
FS_FileSeek
==============
*/
__int64 FS_FileSeek(sysFileHandle_t file, __int64 offset, int whence)
{
  unsigned int v3; 
  DWORD v5; 

  v3 = 0;
  switch ( whence )
  {
    case 0:
      v5 = 1;
      goto LABEL_9;
    case 1:
      v5 = 2;
      goto LABEL_9;
    case 2:
      v5 = 0;
LABEL_9:
      LOBYTE(v3) = !SetFilePointerEx((HANDLE)file.handle, (LARGE_INTEGER)offset, NULL, v5);
      return v3;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files_wrapper_ms.h", 326, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Bad origin %i in FS_Seek", whence) )
  {
    __debugbreak();
    return 0i64;
  }
  return v3;
}

/*
==============
FS_FileTell
==============
*/
_LARGE_INTEGER FS_FileTell(sysFileHandle_t file)
{
  _LARGE_INTEGER NewFilePointer; 

  if ( !SetFilePointerEx((HANDLE)file.handle, 0i64, &NewFilePointer, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files_wrapper_ms.h", 345, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SetFilePointerEx failed") )
    __debugbreak();
  return NewFilePointer;
}

/*
==============
FS_FileWrite
==============
*/
__int64 FS_FileWrite(const void *ptr, unsigned __int64 len, sysFileHandle_t stream)
{
  DWORD v6; 
  unsigned int NumberOfBytesWritten; 

  if ( len > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files_wrapper_ms.h", 446, ASSERT_TYPE_ASSERT, "(len <= 0xffffffffui32)", (const char *)&queryFormat, "len <= UINT32_MAX") )
    __debugbreak();
  if ( len > 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files_wrapper_ms.h", 447, ASSERT_TYPE_ASSERT, "(len <= FILEPOS_MAX)", (const char *)&queryFormat, "len <= FILEPOS_MAX") )
    __debugbreak();
  v6 = truncate_cast<unsigned long,unsigned __int64>(len);
  WriteFile((HANDLE)stream.handle, ptr, v6, &NumberOfBytesWritten, NULL);
  return NumberOfBytesWritten;
}

