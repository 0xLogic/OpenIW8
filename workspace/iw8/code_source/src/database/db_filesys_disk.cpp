/*
==============
DiskFS::Size
==============
*/

unsigned __int64 __fastcall DiskFS::Size(DiskFS *this, struct DB_IFileSysFile *handle)
{
  return ?Size@DiskFS@@UEAA_KPEAVDB_IFileSysFile@@@Z(this, handle);
}

/*
==============
DiskFile::ReadBlocking
==============
*/

FileSysResult __fastcall DiskFile::ReadBlocking(DiskFile *this, unsigned __int64 offset, unsigned __int64 size, void *dest, unsigned __int64 *outNumBytesRead, FileStreamPriority priority, int endDeadline)
{
  return ?ReadBlocking@DiskFile@@QEAA?AW4FileSysResult@@_K0PEAXPEA_KW4FileStreamPriority@@H@Z(this, offset, size, dest, outNumBytesRead, priority, endDeadline);
}

/*
==============
DiskFS::Seek
==============
*/

unsigned __int64 __fastcall DiskFS::Seek(DiskFS *this, struct DB_IFileSysFile *handle, const unsigned __int64 pos)
{
  return ?Seek@DiskFS@@UEAA_KPEAVDB_IFileSysFile@@_K@Z(this, handle, pos);
}

/*
==============
DiskFS::ToHandle
==============
*/

struct DB_IFileSysFile *__fastcall DiskFS::ToHandle(DiskFS *this, DiskFile *in)
{
  return ?ToHandle@DiskFS@@AEAAPEAVDB_IFileSysFile@@PEAVDiskFile@@@Z(this, in);
}

/*
==============
DiskFS::AllocReadContext
==============
*/

DiskReadContext *__fastcall DiskFS::AllocReadContext(DiskFS *this)
{
  return ?AllocReadContext@DiskFS@@AEAAPEAUDiskReadContext@@XZ(this);
}

/*
==============
DiskFS::StartRead
==============
*/

struct FileReadContext *__fastcall DiskFS::StartRead(DiskFS *this, struct DB_IFileSysFile *handle, unsigned __int64 offset, unsigned __int64 size, void *dest, void (__fastcall *cbfn)(void *, FileSysResult, unsigned __int64), void *cbContext, FileStreamPriority priority, int endDeadline)
{
  return ?StartRead@DiskFS@@UEAAPEAUFileReadContext@@PEAVDB_IFileSysFile@@_K1PEAXP6AX2W4FileSysResult@@1@Z2W4FileStreamPriority@@H@Z(this, handle, offset, size, dest, cbfn, cbContext, priority, endDeadline);
}

/*
==============
DiskFile::SetName
==============
*/

void __fastcall DiskFile::SetName(DiskFile *this, const char *const name)
{
  ?SetName@DiskFile@@QEAAXQEBD@Z(this, name);
}

/*
==============
DiskFile::WaitDelayRead
==============
*/

void __fastcall DiskFile::WaitDelayRead(DiskFile *this, unsigned __int64 numBytesRead)
{
  ?WaitDelayRead@DiskFile@@QEAAX_K@Z(this, numBytesRead);
}

/*
==============
DiskFile::GetName
==============
*/

const char *__fastcall DiskFile::GetName(DiskFile *this)
{
  return ?GetName@DiskFile@@QEBAPEBDXZ(this);
}

/*
==============
DiskFS::GetType
==============
*/

DB_FileSysInterface::Type __fastcall DiskFS::GetType(DiskFS *this)
{
  return ?GetType@DiskFS@@UEAA?AW4Type@DB_FileSysInterface@@XZ(this);
}

/*
==============
DiskFile::FileSysResultFromWindowsError
==============
*/

FileSysResult __fastcall DiskFile::FileSysResultFromWindowsError(DiskFile *this)
{
  return ?FileSysResultFromWindowsError@DiskFile@@AEAA?AW4FileSysResult@@XZ(this);
}

/*
==============
DiskFS::ReadBlocking
==============
*/

FileSysResult __fastcall DiskFS::ReadBlocking(DiskFS *this, struct DB_IFileSysFile *handle, unsigned __int64 offset, unsigned __int64 size, void *dest, unsigned __int64 *numBytesRead, FileStreamPriority priority, int endDeadline)
{
  return ?ReadBlocking@DiskFS@@UEAA?AW4FileSysResult@@PEAVDB_IFileSysFile@@_K1PEAXPEA_KW4FileStreamPriority@@H@Z(this, handle, offset, size, dest, numBytesRead, priority, endDeadline);
}

/*
==============
DiskFS::Shutdown
==============
*/

void __fastcall DiskFS::Shutdown(DiskFS *this)
{
  ?Shutdown@DiskFS@@UEAAXXZ(this);
}

/*
==============
DiskFile::InUse
==============
*/

bool __fastcall DiskFile::InUse(DiskFile *this)
{
  return ?InUse@DiskFile@@QEBA_NXZ(this);
}

/*
==============
DiskFS::AllocFile
==============
*/

DiskFile *__fastcall DiskFS::AllocFile(DiskFS *this)
{
  return ?AllocFile@DiskFS@@AEAAPEAVDiskFile@@XZ(this);
}

/*
==============
DiskFS::Close
==============
*/

void __fastcall DiskFS::Close(DiskFS *this, struct DB_IFileSysFile *handle)
{
  ?Close@DiskFS@@UEAAXPEAVDB_IFileSysFile@@@Z(this, handle);
}

/*
==============
DiskFile::Seek
==============
*/

unsigned __int64 __fastcall DiskFile::Seek(DiskFile *this, const unsigned __int64 pos)
{
  return ?Seek@DiskFile@@QEAA_K_K@Z(this, pos);
}

/*
==============
DiskFile::BeginDelayRead
==============
*/

unsigned __int64 __fastcall DiskFile::BeginDelayRead(DiskFile *this, unsigned __int64 offset, unsigned __int64 size)
{
  return ?BeginDelayRead@DiskFile@@QEAA_K_K0@Z(this, offset, size);
}

/*
==============
DiskFile::Size
==============
*/

unsigned __int64 __fastcall DiskFile::Size(DiskFile *this)
{
  return ?Size@DiskFile@@QEAA_KXZ(this);
}

/*
==============
DiskFS::OpenFile
==============
*/

struct DB_IFileSysFile *__fastcall DiskFS::OpenFile(DiskFS *this, Sys_Folder folder, const char *filename, int flags)
{
  return ?OpenFile@DiskFS@@UEAAPEAVDB_IFileSysFile@@W4Sys_Folder@@PEBDH@Z(this, folder, filename, flags);
}

/*
==============
DiskFS_GetLastSystemError
==============
*/

void __fastcall DiskFS_GetLastSystemError(int *outOpID, int *outOpCode)
{
  ?DiskFS_GetLastSystemError@@YAXAEAH0@Z(outOpID, outOpCode);
}

/*
==============
DiskFile::DiskFile
==============
*/

void __fastcall DiskFile::DiskFile(DiskFile *this)
{
  ??0DiskFile@@QEAA@XZ(this);
}

/*
==============
DiskFile::Close
==============
*/

void __fastcall DiskFile::Close(DiskFile *this)
{
  ?Close@DiskFile@@QEAAXXZ(this);
}

/*
==============
DiskFile::Initialize
==============
*/

void __fastcall DiskFile::Initialize(DiskFile *this, sysFileHandle_t handle, int flags)
{
  ?Initialize@DiskFile@@QEAAXUsysFileHandle_t@@H@Z(this, handle, flags);
}

/*
==============
DB_DiskFSInitialize
==============
*/

DB_FileSysInterface *__fastcall DB_DiskFSInitialize()
{
  return ?DB_DiskFSInitialize@@YAPEAVDB_FileSysInterface@@XZ();
}

/*
==============
DiskFS::Exists
==============
*/

bool __fastcall DiskFS::Exists(DiskFS *this, Sys_Folder folder, const char *filename)
{
  return ?Exists@DiskFS@@UEAA_NW4Sys_Folder@@PEBD@Z(this, folder, filename);
}

/*
==============
DiskFS::Cancel
==============
*/

void __fastcall DiskFS::Cancel(DiskFS *this, struct FileReadContext *readHandle)
{
  ?Cancel@DiskFS@@UEAAXPEAUFileReadContext@@@Z(this, readHandle);
}

/*
==============
DiskFile::StartRead
==============
*/

DiskReadContext *__fastcall DiskFile::StartRead(DiskFile *this, DiskReadContext *readContext, unsigned __int64 offset, unsigned __int64 size, void *dest, void (__fastcall *cbfn)(void *, FileSysResult, unsigned __int64), void *cbContext, FileStreamPriority priority, int endDeadline)
{
  return ?StartRead@DiskFile@@QEAAPEAUDiskReadContext@@PEAU2@_K1PEAXP6AX2W4FileSysResult@@1@Z2W4FileStreamPriority@@H@Z(this, readContext, offset, size, dest, cbfn, cbContext, priority, endDeadline);
}

/*
==============
DiskFS::ToFile
==============
*/

DiskFile *__fastcall DiskFS::ToFile(DiskFS *this, struct DB_IFileSysFile *in)
{
  return ?ToFile@DiskFS@@AEAAPEAVDiskFile@@PEAVDB_IFileSysFile@@@Z(this, in);
}

/*
==============
DiskFile::IsAsync
==============
*/

bool __fastcall DiskFile::IsAsync(DiskFile *this)
{
  return ?IsAsync@DiskFile@@QEBA_NXZ(this);
}

/*
==============
DiskFS::Shutdown
==============
*/
void DiskFS::Shutdown(DiskFS *this)
{
  DiskFile *m_files; 
  __int64 v3; 

  Sys_EnterCriticalSection(CRITSECT_FILESYS_DISK);
  m_files = this->m_files;
  v3 = 256i64;
  do
  {
    if ( m_files->m_handle.handle != -1 )
      Com_Printf(10, "DiskFS: File Handle Leaked: %s\n", m_files->m_filename);
    ++m_files;
    --v3;
  }
  while ( v3 );
  Sys_LeaveCriticalSection(CRITSECT_FILESYS_DISK);
}

/*
==============
DiskFS::GetType
==============
*/
__int64 DiskFS::GetType(DiskFS *this)
{
  return 0i64;
}

/*
==============
DiskFS::OpenFile
==============
*/
DiskFile *DiskFS::OpenFile(DiskFS *this, Sys_Folder folder, const char *filename, int flags)
{
  int v8; 
  sysFileHandle_t *File; 
  DiskFile *v10; 
  __int64 v11; 
  DiskFile *m_files; 

  Sys_ProfBeginNamedEvent(0xFF808080, "DiskFS::OpenFile");
  File = Sys_CreateFile((sysFileHandle_t *)(unsigned int)folder, (Sys_Folder)filename, (const char *)(unsigned int)flags, v8);
  if ( File == (sysFileHandle_t *)-1i64 )
  {
    v10 = NULL;
  }
  else
  {
    Sys_EnterCriticalSection(CRITSECT_FILESYS_DISK);
    v11 = 0i64;
    m_files = this->m_files;
    while ( m_files->m_handle.handle != -1 )
    {
      ++v11;
      ++m_files;
      if ( v11 >= 256 )
      {
        Sys_Error((const ObfuscateErrorText)&stru_143DFCCF0, 256i64);
        m_files = NULL;
        goto LABEL_8;
      }
    }
    if ( m_files )
      goto LABEL_10;
LABEL_8:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 817, ASSERT_TYPE_ASSERT, "(file != 0)", (const char *)&queryFormat, "file != NULL", -2i64) )
      __debugbreak();
LABEL_10:
    m_files->m_handle.handle = (__int64)File;
    m_files->m_flags = flags;
    m_files->m_lastReadEndOffset = -1i64;
    m_files->m_lastStartReadTime = 0i64;
    Core_strcpy(m_files->m_filename, 0x100ui64, filename);
    Sys_LeaveCriticalSection(CRITSECT_FILESYS_DISK);
    v10 = m_files;
  }
  Sys_ProfEndNamedEvent();
  return v10;
}

/*
==============
DiskFS::Size
==============
*/
__int64 DiskFS::Size(DiskFS *this, struct DB_IFileSysFile *handle)
{
  void *v3; 
  __int64 v4; 
  __int64 FileInformation; 
  __int64 v7; 
  __int64 v8; 

  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 855, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  v3 = (void *)*((_QWORD *)handle + 34);
  v4 = 0i64;
  FileInformation = 0i64;
  v7 = 0i64;
  v8 = 0i64;
  if ( GetFileInformationByHandleEx(v3, FileStandardInfo, &FileInformation, 0x18u) )
    return v7;
  return v4;
}

/*
==============
DiskFS::Seek
==============
*/
unsigned __int64 DiskFS::Seek(DiskFS *this, struct DB_IFileSysFile *handle, const unsigned __int64 pos)
{
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 863, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  return DiskFile::Seek((DiskFile *)handle, pos);
}

/*
==============
DiskFS::Close
==============
*/
void DiskFS::Close(DiskFS *this, struct DB_IFileSysFile *handle)
{
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 871, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  _InterlockedCompareExchange64((volatile signed __int64 *)&s_lastReadHandle, -1i64, *((_QWORD *)handle + 34));
  Sys_CloseFile(*(sysFileHandle_t *)((char *)handle + 272));
  Sys_EnterCriticalSection(CRITSECT_FILESYS_DISK);
  *((_QWORD *)handle + 34) = -1i64;
  Sys_LeaveCriticalSection(CRITSECT_FILESYS_DISK);
}

/*
==============
DiskFS::Exists
==============
*/
char DiskFS::Exists(DiskFS *this, Sys_Folder folder, const char *filename, int a4)
{
  sysFileHandle_t *File; 

  File = Sys_CreateFile((sysFileHandle_t *)(unsigned int)folder, (Sys_Folder)filename, NULL, a4);
  if ( File == (sysFileHandle_t *)-1i64 )
    return 0;
  Sys_CloseFile((sysFileHandle_t)File);
  return 1;
}

/*
==============
DiskFS::ReadBlocking
==============
*/
FileSysResult DiskFS::ReadBlocking(DiskFS *this, struct DB_IFileSysFile *handle, unsigned __int64 offset, unsigned __int64 size, void *dest, unsigned __int64 *numBytesRead, FileStreamPriority priority, int endDeadline)
{
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 943, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  if ( (*((_DWORD *)handle + 70) & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 947, ASSERT_TYPE_ASSERT, "(!file->IsAsync())", (const char *)&queryFormat, "!file->IsAsync()") )
    __debugbreak();
  if ( (*((_DWORD *)handle + 70) & 8) == 0 )
    return DiskFile::ReadBlocking((DiskFile *)handle, offset, size, dest, numBytesRead, priority, endDeadline);
  Com_PrintError(10, "DiskFS::ReadBlocking trying to use a blocking read with a file opened with the async flag. Use DiskFs::StartRead instead.\n");
  return 2;
}

/*
==============
DiskFS::StartRead
==============
*/
DiskReadContext *DiskFS::StartRead(DiskFS *this, struct DB_IFileSysFile *handle, unsigned __int64 offset, unsigned __int64 size, void *dest, void (*cbfn)(void *, FileSysResult, unsigned __int64), void *cbContext, FileStreamPriority priority, int endDeadline)
{
  DiskReadContext *v14; 
  DiskReadContext *m_reads; 
  __int64 v16; 

  if ( !cbfn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 962, ASSERT_TYPE_ASSERT, "(cbfn)", (const char *)&queryFormat, "cbfn") )
    __debugbreak();
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 965, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  if ( cbfn )
  {
    if ( (*((_DWORD *)handle + 70) & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 973, ASSERT_TYPE_ASSERT, "(file->IsAsync())", (const char *)&queryFormat, "file->IsAsync()") )
      __debugbreak();
    if ( (*((_DWORD *)handle + 70) & 8) != 0 )
    {
      Sys_EnterCriticalSection(CRITSECT_FILESYS_DISK);
      v14 = NULL;
      m_reads = this->m_reads;
      v16 = 0i64;
      while ( m_reads->m_inUse )
      {
        ++v16;
        ++m_reads;
        if ( v16 >= 256 )
        {
          Sys_Error((const ObfuscateErrorText)&stru_143DFCD18, 256i64);
          goto LABEL_19;
        }
      }
      m_reads->m_inUse = 1;
      v14 = m_reads;
LABEL_19:
      Sys_LeaveCriticalSection(CRITSECT_FILESYS_DISK);
      return DiskFile::StartRead((DiskFile *)handle, v14, offset, size, dest, cbfn, cbContext, priority, endDeadline);
    }
    else
    {
      Com_PrintError(10, "DiskFS::StartRead trying to use an async read with a file opened without the async flag. Use DiskFs::ReadBlocking instead.\n");
      return 0i64;
    }
  }
  else
  {
    Com_PrintError(10, "DiskFS::StartRead called without a completion callback.\n");
    return 0i64;
  }
}

/*
==============
DiskFS::Cancel
==============
*/
void DiskFS::Cancel(DiskFS *this, struct FileReadContext *readHandle)
{
  ;
}

/*
==============
DiskFile::DiskFile
==============
*/
void DiskFile::DiskFile(DiskFile *this)
{
  this->m_handle.handle = -1i64;
  this->m_flags = 0;
}

/*
==============
DiskFS::AllocFile
==============
*/
DiskFile *DiskFS::AllocFile(DiskFS *this)
{
  __int64 v1; 
  DiskFile *result; 

  v1 = 0i64;
  for ( result = this->m_files; result->m_handle.handle != -1; ++result )
  {
    if ( ++v1 >= 256 )
    {
      Sys_Error((const ObfuscateErrorText)&stru_143DFCCF0, 256i64);
      return 0i64;
    }
  }
  return result;
}

/*
==============
DiskFS::AllocReadContext
==============
*/
DiskReadContext *DiskFS::AllocReadContext(DiskFS *this)
{
  __int64 v1; 
  DiskReadContext *result; 

  v1 = 0i64;
  for ( result = this->m_reads; result->m_inUse; ++result )
  {
    if ( ++v1 >= 256 )
    {
      Sys_Error((const ObfuscateErrorText)&stru_143DFCD18, 256i64);
      return 0i64;
    }
  }
  result->m_inUse = 1;
  return result;
}

/*
==============
DiskFile::BeginDelayRead
==============
*/
unsigned __int64 DiskFile::BeginDelayRead(DiskFile *this, unsigned __int64 offset, unsigned __int64 size)
{
  unsigned __int64 result; 

  if ( s_lastReadHandle != (void *volatile)this->m_handle.handle )
  {
    s_lastReadHandle = (void *volatile)this->m_handle.handle;
LABEL_4:
    DB_DelayLoading_Seek();
    goto LABEL_5;
  }
  if ( this->m_lastReadEndOffset != offset )
    goto LABEL_4;
LABEL_5:
  result = __rdtsc();
  this->m_lastStartReadTime = result;
  this->m_lastReadEndOffset = offset + size;
  return result;
}

/*
==============
DiskFile::Close
==============
*/
void DiskFile::Close(DiskFile *this)
{
  _InterlockedCompareExchange64((volatile signed __int64 *)&s_lastReadHandle, -1i64, this->m_handle.handle);
  Sys_CloseFile(this->m_handle);
  Sys_EnterCriticalSection(CRITSECT_FILESYS_DISK);
  this->m_handle.handle = -1i64;
  Sys_LeaveCriticalSection(CRITSECT_FILESYS_DISK);
}

/*
==============
DB_DiskFSInitialize
==============
*/
DiskFS *DB_DiskFSInitialize()
{
  return &s_diskfs;
}

/*
==============
DiskFS_GetLastSystemError
==============
*/
void DiskFS_GetLastSystemError(int *outOpID, int *outOpCode)
{
  *outOpID = s_lastSystemErrorOp;
  *outOpCode = s_lastSystemErrorCode;
}

/*
==============
DiskReadCallback
==============
*/
void DiskReadCallback(unsigned int dwErrorCode, unsigned int dwNumberOfBytesTransferred, _OVERLAPPED *pOverlapped)
{
  unsigned __int64 v3; 
  unsigned int v5; 
  unsigned __int64 Internal; 

  v3 = dwNumberOfBytesTransferred;
  if ( dwErrorCode )
  {
    if ( dwErrorCode == 38 )
      v5 = 1;
    else
      v5 = (dwErrorCode == 997) + 2;
  }
  else
  {
    v5 = 0;
  }
  if ( !LOBYTE(pOverlapped[1].hEvent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 595, ASSERT_TYPE_ASSERT, "(readContext->m_inUse)", (const char *)&queryFormat, "readContext->m_inUse") )
    __debugbreak();
  ((void (__fastcall *)(void *, _QWORD, unsigned __int64))pOverlapped[1].InternalHigh)(pOverlapped[1].Pointer, v5, v3);
  Internal = pOverlapped[1].Internal;
  LOBYTE(pOverlapped[1].hEvent) = 0;
  DB_DelayLoading_OnWait(Internal, v3);
}

/*
==============
DiskFile::FileSysResultFromWindowsError
==============
*/
__int64 DiskFile::FileSysResultFromWindowsError(DiskFile *this)
{
  DWORD LastError; 

  LastError = GetLastError();
  if ( LastError )
  {
    if ( LastError == 38 )
      return 1i64;
    if ( LastError != 997 )
    {
      Com_PrintError(10, "Windows File error '%s' %08x\n", this->m_filename, LastError);
      return 2i64;
    }
  }
  return 0i64;
}

/*
==============
DiskFile::GetName
==============
*/
DiskFile *DiskFile::GetName(DiskFile *this)
{
  return this;
}

/*
==============
DiskFile::InUse
==============
*/
bool DiskFile::InUse(DiskFile *this)
{
  return this->m_handle.handle != -1;
}

/*
==============
DiskFile::Initialize
==============
*/
void DiskFile::Initialize(DiskFile *this, sysFileHandle_t handle, int flags)
{
  if ( handle.handle == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 87, ASSERT_TYPE_ASSERT, "(handle != INVALID_SYS_FILE_HANDLE)", (const char *)&queryFormat, "handle != INVALID_SYS_FILE_HANDLE") )
    __debugbreak();
  this->m_handle = handle;
  this->m_flags = flags;
  this->m_lastReadEndOffset = -1i64;
  this->m_lastStartReadTime = 0i64;
}

/*
==============
DiskFile::IsAsync
==============
*/
bool DiskFile::IsAsync(DiskFile *this)
{
  return (this->m_flags & 8) != 0;
}

/*
==============
DiskFile::ReadBlocking
==============
*/
__int64 DiskFile::ReadBlocking(DiskFile *this, unsigned __int64 offset, unsigned __int64 size, void *dest, unsigned __int64 *outNumBytesRead)
{
  unsigned int v9; 
  DWORD v10; 
  DWORD LastError; 
  unsigned __int64 v12; 
  unsigned int NumberOfBytesRead; 

  DiskFile::BeginDelayRead(this, offset, size);
  if ( (this->m_flags & 0x10) != 0 )
  {
    if ( (offset & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 474, ASSERT_TYPE_ASSERT, "(IsAligned( offset, 4096 ))", (const char *)&queryFormat, "IsAligned( offset, FILE_READ_ALIGNMENT )") )
      __debugbreak();
    if ( (size & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 475, ASSERT_TYPE_ASSERT, "(IsAligned( size, 4096 ))", (const char *)&queryFormat, "IsAligned( size, FILE_READ_ALIGNMENT )") )
      __debugbreak();
    if ( ((unsigned __int16)dest & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 476, ASSERT_TYPE_ASSERT, "(IsAligned( dest, 4096 ))", (const char *)&queryFormat, "IsAligned( dest, FILE_READ_ALIGNMENT )") )
      __debugbreak();
    if ( XB3XMem_IsInAuxMem(dest) )
      Sys_Error((const ObfuscateErrorText)&stru_143D69550);
  }
  DiskFile::Seek(this, offset);
  v9 = 0;
  NumberOfBytesRead = 0;
  v10 = truncate_cast<unsigned long,unsigned __int64>(size);
  if ( !ReadFile((HANDLE)this->m_handle.handle, dest, v10, &NumberOfBytesRead, NULL) )
  {
    LastError = GetLastError();
    if ( LastError )
    {
      if ( LastError == 38 )
      {
        v9 = 1;
      }
      else
      {
        if ( LastError == 997 )
          goto LABEL_20;
        Com_PrintError(10, "Windows File error '%s' %08x\n", this->m_filename, LastError);
        v9 = 2;
      }
      Com_PrintError(10, "DiskFile::ReadBlocking call to ReadFile error for '%s': %d\n", this->m_filename, v9);
    }
  }
LABEL_20:
  v12 = NumberOfBytesRead;
  if ( outNumBytesRead )
    *outNumBytesRead = NumberOfBytesRead;
  DB_DelayLoading_OnWait(this->m_lastStartReadTime, v12);
  return v9;
}

/*
==============
DiskFile::Seek
==============
*/
unsigned __int64 DiskFile::Seek(DiskFile *this, const unsigned __int64 pos)
{
  void *handle; 
  _LARGE_INTEGER NewFilePointer; 

  if ( (this->m_flags & 0x10) != 0 && (pos & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 417, ASSERT_TYPE_ASSERT, "(IsAligned( pos, 4096 ))", (const char *)&queryFormat, "IsAligned( pos, FILE_READ_ALIGNMENT )") )
    __debugbreak();
  handle = (void *)this->m_handle.handle;
  NewFilePointer.QuadPart = 0i64;
  if ( !SetFilePointerEx(handle, (LARGE_INTEGER)pos, &NewFilePointer, 0) )
    return -1i64;
  if ( NewFilePointer.QuadPart != pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 427, ASSERT_TYPE_ASSERT, "(liResult.QuadPart == int64_t(pos))", (const char *)&queryFormat, "liResult.QuadPart == int64_t(pos)") )
    __debugbreak();
  return pos;
}

/*
==============
DiskFile::SetName
==============
*/
void DiskFile::SetName(DiskFile *this, const char *const name)
{
  Core_strcpy(this->m_filename, 0x100ui64, name);
}

/*
==============
DiskFile::Size
==============
*/
__int64 DiskFile::Size(DiskFile *this)
{
  void *handle; 
  __int64 v2; 
  __int64 FileInformation; 
  __int64 v5; 
  __int64 v6; 

  handle = (void *)this->m_handle.handle;
  v2 = 0i64;
  FileInformation = 0i64;
  v5 = 0i64;
  v6 = 0i64;
  if ( GetFileInformationByHandleEx(handle, FileStandardInfo, &FileInformation, 0x18u) )
    return v5;
  return v2;
}

/*
==============
DiskFile::StartRead
==============
*/
DiskReadContext *DiskFile::StartRead(DiskFile *this, DiskReadContext *readContext, unsigned __int64 offset, unsigned __int64 size, void *dest, void (*cbfn)(void *, FileSysResult, unsigned __int64), void *cbContext)
{
  DiskReadContext *v11; 
  DWORD v12; 
  DWORD LastError; 

  if ( !readContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 659, ASSERT_TYPE_ASSERT, "(readContext)", (const char *)&queryFormat, "readContext", -2i64) )
    __debugbreak();
  if ( !readContext->m_inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 660, ASSERT_TYPE_ASSERT, "(readContext->m_inUse)", (const char *)&queryFormat, "readContext->m_inUse") )
    __debugbreak();
  if ( !cbfn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 661, ASSERT_TYPE_ASSERT, "(cbfn)", (const char *)&queryFormat, "cbfn") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "DiskFile::StartRead");
  readContext->m_callback = cbfn;
  readContext->m_callbackContext = cbContext;
  if ( (this->m_flags & 0x10) != 0 )
  {
    if ( (offset & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 675, ASSERT_TYPE_ASSERT, "(IsAligned( offset, 4096 ))", (const char *)&queryFormat, "IsAligned( offset, FILE_READ_ALIGNMENT )") )
      __debugbreak();
    if ( (size & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 676, ASSERT_TYPE_ASSERT, "(IsAligned( size, 4096 ))", (const char *)&queryFormat, "IsAligned( size, FILE_READ_ALIGNMENT )") )
      __debugbreak();
    if ( ((unsigned __int16)dest & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_disk.cpp", 677, ASSERT_TYPE_ASSERT, "(IsAligned( dest, 4096 ))", (const char *)&queryFormat, "IsAligned( dest, FILE_READ_ALIGNMENT )") )
      __debugbreak();
    if ( XB3XMem_IsInAuxMem(dest) )
      Sys_Error((const ObfuscateErrorText)&stru_143D69550);
  }
  v11 = NULL;
  readContext->m_overlapped.Internal = 0i64;
  readContext->m_overlapped.InternalHigh = 0i64;
  readContext->m_overlapped.hEvent = NULL;
  readContext->m_overlapped.Pointer = (void *)offset;
  v12 = truncate_cast<unsigned long,unsigned __int64>(size);
  if ( ReadFileEx((HANDLE)this->m_handle.handle, dest, v12, &readContext->m_overlapped, DiskReadCallback) )
    goto LABEL_28;
  LastError = GetLastError();
  switch ( LastError )
  {
    case 0u:
      goto LABEL_28;
    case 0x26u:
      ((void (__fastcall *)(void *, __int64))cbfn)(cbContext, 1i64);
      readContext->m_inUse = 0;
      goto LABEL_29;
    case 0x3E5u:
LABEL_28:
      readContext->m_lastStartReadTime = DiskFile::BeginDelayRead(this, offset, size);
      v11 = readContext;
      goto LABEL_29;
  }
  Com_PrintError(10, "Windows File error '%s' %08x\n", this->m_filename, LastError);
  Com_PrintError(10, "DiskFile::StartRead call to ReadFileEx error for '%s': %d\n", this->m_filename, 2i64);
  readContext->m_inUse = 0;
LABEL_29:
  Sys_ProfEndNamedEvent();
  return v11;
}

/*
==============
DiskFS::ToFile
==============
*/
DiskFile *DiskFS::ToFile(DiskFS *this, struct DB_IFileSysFile *in)
{
  return (DiskFile *)in;
}

/*
==============
DiskFS::ToHandle
==============
*/
DiskFile *DiskFS::ToHandle(DiskFS *this, DiskFile *in)
{
  return in;
}

/*
==============
DiskFile::WaitDelayRead
==============
*/
void DiskFile::WaitDelayRead(DiskFile *this, unsigned __int64 numBytesRead)
{
  DB_DelayLoading_OnWait(this->m_lastStartReadTime, numBytesRead);
}

