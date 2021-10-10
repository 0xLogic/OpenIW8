/*
==============
indyfs_sfwrite
==============
*/

unsigned __int64 __fastcall indyfs_sfwrite(INDYFS_SFILE *file, const void *src, unsigned __int64 size)
{
  return ?indyfs_sfwrite@@YA_KPEAUINDYFS_SFILE@@PEBX_K@Z(file, src, size);
}

/*
==============
indyfs_file_touch
==============
*/

int __fastcall indyfs_file_touch(const char *filepath)
{
  return ?indyfs_file_touch@@YAHPEBD@Z(filepath);
}

/*
==============
indyfs_sfclose
==============
*/

int __fastcall indyfs_sfclose(INDYFS_SFILE *file)
{
  return ?indyfs_sfclose@@YAHPEAUINDYFS_SFILE@@@Z(file);
}

/*
==============
indyfs_file_accesstime
==============
*/

unsigned __int64 __fastcall indyfs_file_accesstime(const char *filepath)
{
  return ?indyfs_file_accesstime@@YA_KPEBD@Z(filepath);
}

/*
==============
indyfs_fwrite
==============
*/

__int64 __fastcall indyfs_fwrite(void *handle, const void *src, __int64 srcSize)
{
  return ?indyfs_fwrite@@YA_JPEAXPEBX_J@Z(handle, src, srcSize);
}

/*
==============
indyfs_file_exists
==============
*/

bool __fastcall indyfs_file_exists(const char *filepath)
{
  return ?indyfs_file_exists@@YA_NPEBD@Z(filepath);
}

/*
==============
indyfs_fopen
==============
*/

int __fastcall indyfs_fopen(void **handle, const char *filepath, IndyFsNativeFileAccessFlag flags)
{
  return ?indyfs_fopen@@YAHPEAPEAXPEBDW4IndyFsNativeFileAccessFlag@@@Z(handle, filepath, flags);
}

/*
==============
indyfs_sfclose_and_delete
==============
*/

int __fastcall indyfs_sfclose_and_delete(INDYFS_SFILE *file)
{
  return ?indyfs_sfclose_and_delete@@YAHPEAUINDYFS_SFILE@@@Z(file);
}

/*
==============
indyfs_fread
==============
*/

__int64 __fastcall indyfs_fread(void *handle, void *dest, __int64 requested)
{
  return ?indyfs_fread@@YA_JPEAX0_J@Z(handle, dest, requested);
}

/*
==============
indyfs_sfopen
==============
*/

int __fastcall indyfs_sfopen(INDYFS_SFILE *file, const char *filepath)
{
  return ?indyfs_sfopen@@YAHPEAUINDYFS_SFILE@@PEBD@Z(file, filepath);
}

/*
==============
indyfs_fclose
==============
*/

int __fastcall indyfs_fclose(void *handle)
{
  return ?indyfs_fclose@@YAHPEAX@Z(handle);
}

/*
==============
indyfs_fseek
==============
*/

__int64 __fastcall indyfs_fseek(void *handle, __int64 offset, IndyFsFileWhence whence)
{
  return ?indyfs_fseek@@YA_JPEAX_JW4IndyFsFileWhence@@@Z(handle, offset, whence);
}

/*
==============
indyfs_file_size
==============
*/

__int64 __fastcall indyfs_file_size(const char *filepath)
{
  return ?indyfs_file_size@@YA_JPEBD@Z(filepath);
}

/*
==============
indyfs_file_copy
==============
*/

int __fastcall indyfs_file_copy(const char *from, const char *to)
{
  return ?indyfs_file_copy@@YAHPEBD0@Z(from, to);
}

/*
==============
indyfs_file_stat
==============
*/

int __fastcall indyfs_file_stat(const char *filepath, IndyFsFileStat *stat)
{
  return ?indyfs_file_stat@@YAHPEBDPEAUIndyFsFileStat@@@Z(filepath, stat);
}

/*
==============
indyfs_file_modifytime
==============
*/

unsigned __int64 __fastcall indyfs_file_modifytime(const char *filepath)
{
  return ?indyfs_file_modifytime@@YA_KPEBD@Z(filepath);
}

/*
==============
indyfs_file_delete
==============
*/

int __fastcall indyfs_file_delete(const char *filepath)
{
  return ?indyfs_file_delete@@YAHPEBD@Z(filepath);
}

/*
==============
indyfs_file_load
==============
*/

int __fastcall indyfs_file_load(const char *filepath, void *dest, unsigned __int64 requested)
{
  return ?indyfs_file_load@@YAHPEBDPEAX_K@Z(filepath, dest, requested);
}

/*
==============
indyfs_fclose
==============
*/
__int64 indyfs_fclose(void *handle)
{
  DWORD LastError; 

  if ( CloseHandle(handle) )
    return 0i64;
  LastError = GetLastError();
  indyfs_log_message(Error, "Failed to close handle %p - Err: %d", handle, LastError);
  return 0xFFFFFFFFi64;
}

/*
==============
indyfs_file_accesstime
==============
*/
unsigned __int64 indyfs_file_accesstime(const char *filepath)
{
  HANDLE FileA; 
  void *v3; 
  DWORD LastError; 
  BOOL FileTime; 
  DWORD v7; 
  _FILETIME LastAccessTime; 

  FileA = CreateFileA(filepath, 0x80000000, 7u, NULL, 3u, 0x80u, NULL);
  v3 = FileA;
  if ( FileA == (HANDLE)-1i64 )
  {
    LastError = GetLastError();
    indyfs_log_message(Error, "Failed to get access time of %s - Failed to open file: %llu", filepath, LastError);
    return -1i64;
  }
  LastAccessTime = 0i64;
  FileTime = GetFileTime(FileA, NULL, &LastAccessTime, NULL);
  CloseHandle(v3);
  if ( !FileTime )
  {
    v7 = GetLastError();
    indyfs_log_message(Error, "Failed to get access time of %s - Failed to read access time: %llu", filepath, v7);
    return -1i64;
  }
  return *(unsigned __int64 *)&LastAccessTime / 0x989680 - 0x2B6109100i64;
}

/*
==============
indyfs_file_copy
==============
*/
__int64 indyfs_file_copy(const char *from, const char *to)
{
  unsigned int v4; 
  HANDLE FileA; 
  void *v6; 
  DWORD LastError; 
  const char *v8; 
  HANDLE v9; 
  DWORD v10; 
  DWORD v12; 
  unsigned int NumberOfBytesRead; 
  unsigned int NumberOfBytesWritten; 
  __int64 v15; 
  _BY_HANDLE_FILE_INFORMATION FileInformation; 
  IndyFsScopedEvent v17; 
  char Buffer[4096]; 

  v15 = -2i64;
  IndyFsScopedEvent::IndyFsScopedEvent(&v17, "File", "Copy");
  v4 = 0;
  FileA = CreateFileA(from, 0x80000000, 7u, NULL, 3u, 0x8000080u, NULL);
  v6 = FileA;
  if ( FileA == (HANDLE)-1i64 )
  {
    LastError = GetLastError();
    v8 = from;
LABEL_3:
    indyfs_log_message(Error, "Failed to open \"%s\" - Error: %d", v8, LastError);
LABEL_15:
    v4 = -1;
    goto LABEL_16;
  }
  if ( !GetFileInformationByHandle(FileA, &FileInformation) )
    indyfs_log_message(Error, "Failed to fetch file attributes for %s", from);
  v9 = CreateFileA(to, 0x40000000u, 7u, NULL, 2u, FileInformation.dwFileAttributes | 0x8000000, NULL);
  if ( v9 == (HANDLE)-1i64 )
  {
    LastError = GetLastError();
    v8 = to;
    goto LABEL_3;
  }
  if ( !ReadFile(v6, Buffer, 0x1000u, &NumberOfBytesRead, NULL) )
  {
LABEL_13:
    v10 = GetLastError();
    indyfs_log_message(Error, "Failed to read from \"%s\" - Error: %d", from, v10);
LABEL_14:
    CloseHandle(v9);
    CloseHandle(v6);
    goto LABEL_15;
  }
  while ( NumberOfBytesRead )
  {
    if ( !WriteFile(v9, Buffer, NumberOfBytesRead, &NumberOfBytesWritten, NULL) || NumberOfBytesWritten != NumberOfBytesRead )
    {
      v12 = GetLastError();
      indyfs_log_message(Error, "Failed to write to \"%s\" - Error: %d", to, v12);
      goto LABEL_14;
    }
    if ( !ReadFile(v6, Buffer, 0x1000u, &NumberOfBytesRead, NULL) )
      goto LABEL_13;
  }
  CloseHandle(v9);
  CloseHandle(v6);
LABEL_16:
  IndyFsScopedEvent::~IndyFsScopedEvent(&v17);
  return v4;
}

/*
==============
indyfs_file_delete
==============
*/
DWORD indyfs_file_delete(const char *filepath)
{
  if ( DeleteFileA(filepath) )
    return 0;
  else
    return GetLastError();
}

/*
==============
indyfs_file_exists
==============
*/
_BOOL8 indyfs_file_exists(const char *filepath)
{
  DWORD FileAttributesA; 
  bool v3; 
  IndyFsScopedEvent v5; 

  IndyFsScopedEvent::IndyFsScopedEvent(&v5, "File", "Exists");
  FileAttributesA = GetFileAttributesA(filepath);
  v3 = FileAttributesA != -1 && (FileAttributesA & 0x10) == 0;
  IndyFsScopedEvent::~IndyFsScopedEvent(&v5);
  return v3;
}

/*
==============
indyfs_file_load
==============
*/
__int64 indyfs_file_load(const char *filepath, void *dest, unsigned __int64 requested)
{
  unsigned int v6; 
  HANDLE FileA; 
  DWORD LastError; 
  unsigned __int64 v9; 
  double v10; 
  long double i; 
  DWORD v12; 
  long double v13; 
  unsigned int NumberOfBytesRead; 
  __int64 v18; 
  IndyFsScopedEvent v19; 
  IndyFsScopedDuration v20; 
  IndyFsScopedEvent v21; 
  IndyFsScopedDuration v22; 
  IndyFsScopedEvent v23; 
  IndyFsScopedDuration v24; 

  v18 = -2i64;
  IndyFsScopedDuration::IndyFsScopedDuration(&v24, "FileLoad", "Total");
  IndyFsScopedEvent::IndyFsScopedEvent(&v23, "FileLoad", "Total");
  IndyFsScopedDuration::IndyFsScopedDuration(&v20, "FileLoad", "FileOpen");
  IndyFsScopedEvent::IndyFsScopedEvent(&v19, "FileLoad", "FileOpen");
  v6 = 0;
  FileA = CreateFileA(filepath, 0x80000000, 7u, NULL, 3u, 0x80u, NULL);
  IndyFsScopedEvent::~IndyFsScopedEvent(&v19);
  IndyFsScopedDuration::~IndyFsScopedDuration(&v20);
  if ( FileA == (HANDLE)-1i64 )
  {
    LastError = GetLastError();
    indyfs_log_message(Error, "Failed to open \"%s\" - Error: %d", filepath, LastError);
LABEL_13:
    v6 = -1;
    goto LABEL_14;
  }
  v9 = 0i64;
  v10 = indyfs_time_now_us();
  for ( i = v10; v9 < requested; v9 += NumberOfBytesRead )
  {
    v12 = 0x7FFFFFFF;
    if ( requested - v9 < 0x7FFFFFFF )
      v12 = requested - v9;
    if ( !ReadFile(FileA, (char *)dest + v9, v12, &NumberOfBytesRead, NULL) )
      break;
    if ( !NumberOfBytesRead )
      break;
  }
  v13 = indyfs_time_now_us() - v10;
  indyfs_statistics_internal_add_duration("FileLoad", "Read", v13);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rdi }
  if ( (requested & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  indyfs_statistics_internal_add_duration("FileLoad", "ReadThroughput", *(double *)&_XMM0 / v13);
  indyfs_profiler_internal_duration_event("FileLoad", "FileRead", i, v13);
  IndyFsScopedDuration::IndyFsScopedDuration(&v22, "FileLoad", "FileClose");
  IndyFsScopedEvent::IndyFsScopedEvent(&v21, "FileLoad", "FileClose");
  CloseHandle(FileA);
  IndyFsScopedEvent::~IndyFsScopedEvent(&v21);
  IndyFsScopedDuration::~IndyFsScopedDuration(&v22);
  if ( v9 != requested )
  {
    indyfs_log_message(Error, "Loaded %zu from \"%s\" but requested %zu.", v9, filepath, requested);
    goto LABEL_13;
  }
LABEL_14:
  IndyFsScopedEvent::~IndyFsScopedEvent(&v23);
  IndyFsScopedDuration::~IndyFsScopedDuration(&v24);
  return v6;
}

/*
==============
indyfs_file_modifytime
==============
*/
unsigned __int64 indyfs_file_modifytime(const char *filepath)
{
  HANDLE FileA; 
  void *v3; 
  DWORD LastError; 
  BOOL FileTime; 
  DWORD v7; 
  _FILETIME LastWriteTime; 

  FileA = CreateFileA(filepath, 0x80000000, 7u, NULL, 3u, 0x80u, NULL);
  v3 = FileA;
  if ( FileA == (HANDLE)-1i64 )
  {
    LastError = GetLastError();
    indyfs_log_message(Error, "Failed to get modify time of %s - Failed to open file: %llu", filepath, LastError);
    return -1i64;
  }
  LastWriteTime = 0i64;
  FileTime = GetFileTime(FileA, NULL, NULL, &LastWriteTime);
  CloseHandle(v3);
  if ( !FileTime )
  {
    v7 = GetLastError();
    indyfs_log_message(Error, "Failed to get modify time of %s - Failed to read modify time: %llu", filepath, v7);
    return -1i64;
  }
  return *(unsigned __int64 *)&LastWriteTime / 0x989680 - 0x2B6109100i64;
}

/*
==============
indyfs_file_size
==============
*/
_LARGE_INTEGER indyfs_file_size(const char *filepath)
{
  HANDLE FileA; 
  void *v3; 
  BOOL v4; 
  bool v5; 
  _LARGE_INTEGER v6; 
  _LARGE_INTEGER FileSize; 
  IndyFsScopedEvent v9; 

  IndyFsScopedEvent::IndyFsScopedEvent(&v9, "File", "Size");
  FileA = CreateFileA(filepath, 0x80000000, 7u, NULL, 3u, 0x80u, NULL);
  v3 = FileA;
  if ( FileA == (HANDLE)-1i64 || (v4 = GetFileSizeEx(FileA, &FileSize), CloseHandle(v3), v5 = !v4, v6 = FileSize, v5) )
    v6.QuadPart = -1i64;
  IndyFsScopedEvent::~IndyFsScopedEvent(&v9);
  return v6;
}

/*
==============
indyfs_file_stat
==============
*/
__int64 indyfs_file_stat(const char *filepath, IndyFsFileStat *stat)
{
  HANDLE FileA; 
  void *v5; 
  DWORD LastError; 
  DWORD v8; 
  DWORD v9; 
  _FILETIME v10; 
  _LARGE_INTEGER FileSize; 
  _FILETIME LastAccessTime; 
  _FILETIME LastWriteTime; 

  FileA = CreateFileA(filepath, 0x80000000, 7u, NULL, 3u, 0x80u, NULL);
  v5 = FileA;
  if ( FileA == (HANDLE)-1i64 )
  {
    LastError = GetLastError();
    indyfs_log_message(Error, "Failed to stat %s - Failed to open file: %llu", filepath, LastError);
    return 0xFFFFFFFFi64;
  }
  else if ( GetFileSizeEx(FileA, &FileSize) )
  {
    stat->fileSize = FileSize.QuadPart;
    LastAccessTime = 0i64;
    LastWriteTime = 0i64;
    if ( GetFileTime(v5, NULL, &LastAccessTime, &LastWriteTime) )
    {
      v10 = LastWriteTime;
      stat->accessTime = *(unsigned __int64 *)&LastAccessTime / 0x989680 - 0x2B6109100i64;
      stat->modifyTime = *(unsigned __int64 *)&v10 / 0x989680 - 0x2B6109100i64;
      CloseHandle(v5);
      return 0i64;
    }
    else
    {
      CloseHandle(v5);
      v9 = GetLastError();
      indyfs_log_message(Error, "Failed to stat %s - Failed to read access or modify time: %llu", filepath, v9);
      return 0xFFFFFFFFi64;
    }
  }
  else
  {
    CloseHandle(v5);
    v8 = GetLastError();
    indyfs_log_message(Error, "Failed to stat %s - Failed to read file size: %llu", filepath, v8);
    return 0xFFFFFFFFi64;
  }
}

/*
==============
indyfs_file_touch
==============
*/
__int64 indyfs_file_touch(const char *filepath)
{
  unsigned int v2; 
  HANDLE FileA; 
  DWORD LastError; 
  BOOL v5; 
  DWORD v6; 
  _FILETIME FileTime; 
  __int64 v9; 
  _SYSTEMTIME SystemTime; 
  IndyFsScopedEvent v11; 

  v9 = -2i64;
  IndyFsScopedEvent::IndyFsScopedEvent(&v11, "File", "Touch");
  v2 = 0;
  FileA = CreateFileA(filepath, 0x100u, 7u, NULL, 4u, 0x80u, NULL);
  if ( FileA == (HANDLE)-1i64 )
  {
    LastError = GetLastError();
    indyfs_log_message(Error, "Touch: Failed to open \"%s\": %d", filepath, LastError);
LABEL_5:
    v2 = -1;
    goto LABEL_6;
  }
  GetSystemTime(&SystemTime);
  SystemTimeToFileTime(&SystemTime, &FileTime);
  v5 = SetFileTime(FileA, NULL, &FileTime, &FileTime);
  CloseHandle(FileA);
  if ( !v5 )
  {
    v6 = GetLastError();
    indyfs_log_message(Error, "Touch: Failed to set the time \"%s\": %d", filepath, v6);
    goto LABEL_5;
  }
LABEL_6:
  IndyFsScopedEvent::~IndyFsScopedEvent(&v11);
  return v2;
}

/*
==============
indyfs_fopen
==============
*/
__int64 indyfs_fopen(void **handle, const char *filepath, IndyFsNativeFileAccessFlag flags)
{
  __int32 v5; 
  DWORD dwCreationDisposition; 
  HANDLE FileA; 
  DWORD LastError; 

  v5 = (((flags ^ 1) + 1) << 31) | 0x40000000;
  if ( (flags & 2) == 0 )
    v5 = ((flags ^ 1) + 1) << 31;
  if ( (flags & 0xC) == 12 )
  {
    dwCreationDisposition = 2;
  }
  else if ( (flags & 4) != 0 )
  {
    dwCreationDisposition = 1;
  }
  else
  {
    dwCreationDisposition = 3;
    if ( (flags & 8) != 0 )
      dwCreationDisposition = 5;
  }
  FileA = CreateFileA(filepath, v5, 7u, NULL, dwCreationDisposition, 0x80u, NULL);
  if ( FileA == (HANDLE)-1i64 )
  {
    LastError = GetLastError();
    indyfs_log_message(Error, "Failed to open \"%s\" - Error: %d", filepath, LastError);
    return 0xFFFFFFFFi64;
  }
  else
  {
    *handle = FileA;
    return 0i64;
  }
}

/*
==============
indyfs_fread
==============
*/
__int64 indyfs_fread(void *handle, void *dest, __int64 requested)
{
  unsigned __int64 v6; 
  DWORD v7; 
  DWORD LastError; 
  unsigned int NumberOfBytesRead; 

  v6 = 0i64;
  if ( !requested )
    return v6;
  while ( 1 )
  {
    v7 = 0x7FFFFFFF;
    if ( requested - v6 < 0x7FFFFFFF )
      v7 = requested - v6;
    if ( !ReadFile(handle, (char *)dest + v6, v7, &NumberOfBytesRead, NULL) )
      break;
    if ( NumberOfBytesRead )
    {
      v6 += NumberOfBytesRead;
      if ( v6 < requested )
        continue;
    }
    return v6;
  }
  LastError = GetLastError();
  indyfs_log_message(Error, "Failed to read from handle %p - Err: %d", handle, LastError);
  return -1i64;
}

/*
==============
indyfs_fseek
==============
*/
__int64 indyfs_fseek(void *handle, __int64 offset, IndyFsFileWhence whence)
{
  DWORD v3; 
  int DistanceToMoveHigh; 

  v3 = 0;
  if ( whence )
  {
    LOBYTE(v3) = whence == SaudiArabia;
    ++v3;
  }
  DistanceToMoveHigh = HIDWORD(offset);
  return SetFilePointer(handle, offset, &DistanceToMoveHigh, v3);
}

/*
==============
indyfs_fwrite
==============
*/
__int64 indyfs_fwrite(void *handle, const void *src, __int64 srcSize)
{
  unsigned __int64 v3; 
  __int64 v6; 
  DWORD v7; 
  DWORD LastError; 
  unsigned int NumberOfBytesWritten; 

  v3 = srcSize;
  v6 = 0i64;
  if ( !srcSize )
    return v6;
  while ( 1 )
  {
    v7 = 0x7FFFFFFF;
    if ( v3 < 0x7FFFFFFF )
      v7 = v3;
    if ( !WriteFile(handle, src, v7, &NumberOfBytesWritten, NULL) )
      break;
    v6 += v7;
    src = (char *)src + v7;
    v3 -= v7;
    if ( !v3 )
      return v6;
  }
  LastError = GetLastError();
  indyfs_log_message(Error, "fwrite failed to write - Error: %d", LastError);
  return -1i64;
}

/*
==============
indyfs_sfclose
==============
*/
__int64 indyfs_sfclose(INDYFS_SFILE *file)
{
  unsigned int v2; 
  DWORD v3; 
  const char *v4; 
  __int64 v5; 
  bool v6; 
  BOOL v7; 
  DWORD v8; 
  DWORD LastError; 
  const char *v10; 
  DWORD v11; 
  DWORD FileAttributesA; 
  char v13; 
  size_t MaxCount; 
  size_t PtNumOfCharConverted; 
  IndyFsScopedEvent v17; 
  IndyFsScopedEvent v18; 
  char FileInformation[16]; 
  int v20; 
  wchar_t DstBuf[262]; 

  IndyFsScopedEvent::IndyFsScopedEvent(&v18, "SFile", "Close");
  IndyFsScopedEvent::IndyFsScopedEvent(&v17, "SFile", "FlushFileBuffers");
  v2 = -1;
  if ( FlushFileBuffers(*(HANDLE *)file->impl) )
  {
    IndyFsScopedEvent::~IndyFsScopedEvent(&v17);
    memset_0(FileInformation, 0, 0x216ui64);
    v4 = &file->impl[258];
    mbstowcs_s(&PtNumOfCharConverted, DstBuf, 0x100ui64, &file->impl[258], 0xFFFFFFFFFFFFFFFFui64);
    v5 = -1i64;
    do
      ++v5;
    while ( DstBuf[v5] );
    v20 = v5;
    FileInformation[0] = 1;
    IndyFsScopedEvent::IndyFsScopedEvent(&v17, "SFile", "SetFileInformationByHandle");
    v6 = SetFileInformationByHandle(*(HANDLE *)file->impl, FileRenameInfo, FileInformation, 0x216u);
    IndyFsScopedEvent::~IndyFsScopedEvent(&v17);
    if ( *(_QWORD *)file->impl == -1i64 || (IndyFsScopedEvent::IndyFsScopedEvent(&v17, "SFile", "CloseHandle"), v7 = CloseHandle(*(HANDLE *)file->impl), IndyFsScopedEvent::~IndyFsScopedEvent(&v17), v7) )
    {
      if ( v6 )
        goto LABEL_18;
      LastError = GetLastError();
      v10 = &file->impl[8];
      if ( !DeleteFileA(v10) )
      {
        v11 = GetLastError();
        indyfs_log_message(Error, "Failed to delete tmp file %s - Err: %d", v10, v11);
      }
      if ( LastError == 5 && ((IndyFsScopedEvent::IndyFsScopedEvent(&v17, "File", "Exists"), FileAttributesA = GetFileAttributesA(v4), FileAttributesA == -1) || (FileAttributesA & 0x10) != 0 ? (v13 = 0) : (v13 = 1), IndyFsScopedEvent::~IndyFsScopedEvent(&v17), v13) )
      {
LABEL_18:
        v2 = 0;
      }
      else
      {
        LODWORD(MaxCount) = LastError;
        indyfs_log_message(Error, "sfclose failed. Failed to rename tmp file. From: %s  To: %s - Error: %lu", v10, v4, MaxCount);
      }
    }
    else
    {
      v8 = GetLastError();
      indyfs_log_message(Error, "sfclose failed. Failed to close renamed handle - %d", v8);
    }
  }
  else
  {
    v3 = GetLastError();
    indyfs_log_message(Error, "sfclose failed. Failed to flush I/O buffers - %d", v3);
    CloseHandle(*(HANDLE *)file->impl);
    DeleteFileA(&file->impl[8]);
    IndyFsScopedEvent::~IndyFsScopedEvent(&v17);
  }
  IndyFsScopedEvent::~IndyFsScopedEvent(&v18);
  return v2;
}

/*
==============
indyfs_sfclose_and_delete
==============
*/
__int64 indyfs_sfclose_and_delete(INDYFS_SFILE *file)
{
  IndyFsScopedEvent v3; 

  IndyFsScopedEvent::IndyFsScopedEvent(&v3, "SFile", "CloseAndDelete");
  CloseHandle(*(HANDLE *)file->impl);
  DeleteFileA(&file->impl[8]);
  IndyFsScopedEvent::~IndyFsScopedEvent(&v3);
  return 0i64;
}

/*
==============
indyfs_sfopen
==============
*/
__int64 indyfs_sfopen(INDYFS_SFILE *file, const char *filepath)
{
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  HANDLE FileA; 
  DWORD LastError; 

  v4 = indyfs_process_pid();
  v5 = indyfs_process_tid();
  j_snprintf(&file->impl[8], 0xFAui64, "%s.%08llx%08llx.tmp", filepath, v4, v5);
  indyfs_strlcpy(&file->impl[258], filepath, 0xFAui64);
  FileA = CreateFileA(&file->impl[8], 0xC0010000, 7u, NULL, 2u, 0x80u, NULL);
  *(_QWORD *)file->impl = FileA;
  if ( FileA != (HANDLE)-1i64 )
    return 0i64;
  LastError = GetLastError();
  indyfs_log_message(Error, "Failed to open \"%s\" - Error: %d", &file->impl[8], LastError);
  return 0xFFFFFFFFi64;
}

/*
==============
indyfs_sfwrite
==============
*/
__int64 indyfs_sfwrite(INDYFS_SFILE *file, const void *src, unsigned __int64 size)
{
  unsigned __int64 v3; 
  __int64 v6; 
  DWORD v7; 
  DWORD LastError; 
  unsigned int NumberOfBytesWritten; 

  v3 = size;
  v6 = 0i64;
  if ( size )
  {
    while ( 1 )
    {
      v7 = 0x7FFFFFFF;
      if ( v3 < 0x7FFFFFFF )
        v7 = v3;
      if ( !WriteFile(*(HANDLE *)file->impl, src, v7, &NumberOfBytesWritten, NULL) )
        break;
      v6 += v7;
      src = (char *)src + v7;
      v3 -= v7;
      if ( !v3 )
        return v6;
    }
    LastError = GetLastError();
    indyfs_log_message(Error, "sfwrite failed to write - Error: %d", LastError);
  }
  return v6;
}

