/*
==============
DB_DynamicHeap_Commit
==============
*/

void __fastcall DB_DynamicHeap_Commit(unsigned __int64 size)
{
  ?DB_DynamicHeap_Commit@@YAX_K@Z(size);
}

/*
==============
DB_AsyncIWFileLoad::ReadNextData
==============
*/

void __fastcall DB_AsyncIWFileLoad::ReadNextData(DB_AsyncIWFileLoad *this)
{
  ?ReadNextData@DB_AsyncIWFileLoad@@AEAAXXZ(this);
}

/*
==============
DB_AsyncIWFileLoad::IsEndOfFile
==============
*/

bool __fastcall DB_AsyncIWFileLoad::IsEndOfFile(DB_AsyncIWFileLoad *this)
{
  return ?IsEndOfFile@DB_AsyncIWFileLoad@@AEBA_NXZ(this);
}

/*
==============
DB_AsyncIWFileLoad::Shutdown
==============
*/

void __fastcall DB_AsyncIWFileLoad::Shutdown(DB_AsyncIWFileLoad *this)
{
  ?Shutdown@DB_AsyncIWFileLoad@@QEAAXXZ(this);
}

/*
==============
DB_AsyncIWFileLoad::BatchRead
==============
*/

void __fastcall DB_AsyncIWFileLoad::BatchRead(DB_AsyncIWFileLoad *this)
{
  ?BatchRead@DB_AsyncIWFileLoad@@AEAAXXZ(this);
}

/*
==============
DB_AsyncIWFileLoad::CopyFrom
==============
*/

void __fastcall DB_AsyncIWFileLoad::CopyFrom(DB_AsyncIWFileLoad *this, DB_AsyncIWFileLoad *other, DBFile *file)
{
  ?CopyFrom@DB_AsyncIWFileLoad@@QEAAXAEAU1@PEAUDBFile@@@Z(this, other, file);
}

/*
==============
DB_AsyncIWFileLoad::InflateInitForceNoSecure
==============
*/

void __fastcall DB_AsyncIWFileLoad::InflateInitForceNoSecure(DB_AsyncIWFileLoad *this)
{
  ?InflateInitForceNoSecure@DB_AsyncIWFileLoad@@QEAAXXZ(this);
}

/*
==============
DB_AsyncIWFileLoad::~DB_AsyncIWFileLoad
==============
*/

void __fastcall DB_AsyncIWFileLoad::~DB_AsyncIWFileLoad(DB_AsyncIWFileLoad *this)
{
  ??1DB_AsyncIWFileLoad@@QEAA@XZ(this);
}

/*
==============
DB_DynamicHeap_OneTimeInit
==============
*/

void DB_DynamicHeap_OneTimeInit(void)
{
  ?DB_DynamicHeap_OneTimeInit@@YAXXZ();
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::ReadRaw
==============
*/

bool __fastcall DB_AsyncIWFileLoad::ReadBuffer::ReadRaw(DB_AsyncIWFileLoad::ReadBuffer *this, DB_AsyncIWFileLoad *owner, unsigned __int8 **pos, unsigned __int64 *size)
{
  return ?ReadRaw@ReadBuffer@DB_AsyncIWFileLoad@@QEAA_NAEAU2@PEAPEAEPEA_K@Z(this, owner, pos, size);
}

/*
==============
DB_AsyncIWFileLoad::InflateInit
==============
*/

void __fastcall DB_AsyncIWFileLoad::InflateInit(DB_AsyncIWFileLoad *this)
{
  ?InflateInit@DB_AsyncIWFileLoad@@QEAAXXZ(this);
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::Inflate
==============
*/

void __fastcall DB_AsyncIWFileLoad::ReadBuffer::Inflate(DB_AsyncIWFileLoad::ReadBuffer *this, DB_AsyncIWFileLoad *owner)
{
  ?Inflate@ReadBuffer@DB_AsyncIWFileLoad@@QEAAXAEAU2@@Z(this, owner);
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::BeginAsyncRead
==============
*/

void __fastcall DB_AsyncIWFileLoad::ReadBuffer::BeginAsyncRead(DB_AsyncIWFileLoad::ReadBuffer *this, DB_AsyncIWFileLoad *owner, unsigned __int64 offset, unsigned int readSize)
{
  ?BeginAsyncRead@ReadBuffer@DB_AsyncIWFileLoad@@QEAAXAEAU2@_KI@Z(this, owner, offset, readSize);
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::SetupDecompressor
==============
*/

void __fastcall DB_AsyncIWFileLoad::ReadBuffer::SetupDecompressor(DB_AsyncIWFileLoad::ReadBuffer *this, DB_AsyncIWFileLoad *owner, DB_ReadStream *stream)
{
  ?SetupDecompressor@ReadBuffer@DB_AsyncIWFileLoad@@QEAAXAEAU2@PEAUDB_ReadStream@@@Z(this, owner, stream);
}

/*
==============
DB_AsyncIWFileLoad::DirtyDiscError
==============
*/

void __fastcall DB_AsyncIWFileLoad::DirtyDiscError(DB_AsyncIWFileLoad *this, const DBDirtyDiscErrorType type, const unsigned int param1)
{
  ?DirtyDiscError@DB_AsyncIWFileLoad@@QEAAXW4DBDirtyDiscErrorType@@I@Z(this, type, param1);
}

/*
==============
DB_AsyncIWFileLoad::Init
==============
*/

void __fastcall DB_AsyncIWFileLoad::Init(DB_AsyncIWFileLoad *this)
{
  ?Init@DB_AsyncIWFileLoad@@QEAAXXZ(this);
}

/*
==============
DB_DynamicHeap_ValidateClear
==============
*/

void DB_DynamicHeap_ValidateClear(void)
{
  ?DB_DynamicHeap_ValidateClear@@YAXXZ();
}

/*
==============
DB_AsyncIWFileLoad::ReadHeader
==============
*/

bool __fastcall DB_AsyncIWFileLoad::ReadHeader(DB_AsyncIWFileLoad *this, void *const pos, const unsigned __int64 size)
{
  return ?ReadHeader@DB_AsyncIWFileLoad@@QEAA_NQEAX_K@Z(this, pos, size);
}

/*
==============
DB_AsyncIWFileLoad::InflateShutdown
==============
*/

void __fastcall DB_AsyncIWFileLoad::InflateShutdown(DB_AsyncIWFileLoad *this)
{
  ?InflateShutdown@DB_AsyncIWFileLoad@@QEAAXXZ(this);
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::Shutdown
==============
*/

bool __fastcall DB_AsyncIWFileLoad::ReadBuffer::Shutdown(DB_AsyncIWFileLoad::ReadBuffer *this, DB_AsyncIWFileLoad *owner)
{
  return ?Shutdown@ReadBuffer@DB_AsyncIWFileLoad@@QEAA_NAEAU2@@Z(this, owner);
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::Terminate
==============
*/

bool __fastcall DB_AsyncIWFileLoad::ReadBuffer::Terminate(DB_AsyncIWFileLoad::ReadBuffer *this, DB_AsyncIWFileLoad *owner)
{
  return ?Terminate@ReadBuffer@DB_AsyncIWFileLoad@@AEAA_NAEAU2@@Z(this, owner);
}

/*
==============
DB_DynamicHeap_Decommit
==============
*/

void __fastcall DB_DynamicHeap_Decommit(unsigned __int64 size)
{
  ?DB_DynamicHeap_Decommit@@YAX_K@Z(size);
}

/*
==============
DB_AsyncIWFileLoad::IsDoneReading
==============
*/

bool __fastcall DB_AsyncIWFileLoad::IsDoneReading(DB_AsyncIWFileLoad *this)
{
  return ?IsDoneReading@DB_AsyncIWFileLoad@@QEBA_NXZ(this);
}

/*
==============
DB_AsyncIWFileLoad::ReadDataAuthCmp
==============
*/

void __fastcall DB_AsyncIWFileLoad::ReadDataAuthCmp(DB_AsyncIWFileLoad *this, unsigned __int8 *const pos, const unsigned __int64 size)
{
  ?ReadDataAuthCmp@DB_AsyncIWFileLoad@@QEAAXQEAE_K@Z(this, pos, size);
}

/*
==============
DB_DynamicHeap_Allocate
==============
*/

unsigned __int8 *__fastcall DB_DynamicHeap_Allocate(unsigned __int64 size, unsigned __int64 alignment)
{
  return ?DB_DynamicHeap_Allocate@@YAPEAE_K0@Z(size, alignment);
}

/*
==============
DB_DynamicHeap_Deallocate
==============
*/

void __fastcall DB_DynamicHeap_Deallocate(unsigned __int8 *ptr, unsigned __int64 size)
{
  ?DB_DynamicHeap_Deallocate@@YAXPEAE_K@Z(ptr, size);
}

/*
==============
DB_AsyncIWFileLoad::DumpLoadState
==============
*/

void __fastcall DB_AsyncIWFileLoad::DumpLoadState(DB_AsyncIWFileLoad *this)
{
  ?DumpLoadState@DB_AsyncIWFileLoad@@QEBAXXZ(this);
}

/*
==============
DB_AsyncIWFileLoad::GetEncryptionInfo
==============
*/

const EncryptionInfo *__fastcall DB_AsyncIWFileLoad::GetEncryptionInfo(DB_AsyncIWFileLoad *this)
{
  return ?GetEncryptionInfo@DB_AsyncIWFileLoad@@AEBAPEBUEncryptionInfo@@XZ(this);
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::Init
==============
*/

void __fastcall DB_AsyncIWFileLoad::ReadBuffer::Init(DB_AsyncIWFileLoad::ReadBuffer *this)
{
  ?Init@ReadBuffer@DB_AsyncIWFileLoad@@QEAAXXZ(this);
}

/*
==============
DB_AsyncIWFileLoad::WaitForAsyncCompletion
==============
*/

void __fastcall DB_AsyncIWFileLoad::WaitForAsyncCompletion(DB_AsyncIWFileLoad *this)
{
  ?WaitForAsyncCompletion@DB_AsyncIWFileLoad@@QEAAXXZ(this);
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::FileReadCallback
==============
*/

void __fastcall DB_AsyncIWFileLoad::ReadBuffer::FileReadCallback(FileStreamRequestID id, FileStreamStatus result, __int64 numBytesRead, void *user)
{
  ?FileReadCallback@ReadBuffer@DB_AsyncIWFileLoad@@CAXW4FileStreamRequestID@@W4FileStreamStatus@@_JPEAX@Z(id, result, numBytesRead, user);
}

/*
==============
DB_AsyncIWFileLoad::PrepareToRead
==============
*/

void __fastcall DB_AsyncIWFileLoad::PrepareToRead(DB_AsyncIWFileLoad *this, DBFile *file, int maxSizeToRead)
{
  ?PrepareToRead@DB_AsyncIWFileLoad@@QEAAXPEAUDBFile@@H@Z(this, file, maxSizeToRead);
}

/*
==============
DB_AsyncIWFileLoad::IsShutdown
==============
*/

bool __fastcall DB_AsyncIWFileLoad::IsShutdown(DB_AsyncIWFileLoad *this)
{
  return ?IsShutdown@DB_AsyncIWFileLoad@@QEBA_NXZ(this);
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::WaitForAsyncCompletion
==============
*/

bool __fastcall DB_AsyncIWFileLoad::ReadBuffer::WaitForAsyncCompletion(DB_AsyncIWFileLoad::ReadBuffer *this, DB_AsyncIWFileLoad *owner)
{
  return ?WaitForAsyncCompletion@ReadBuffer@DB_AsyncIWFileLoad@@QEAA_NAEAU2@@Z(this, owner);
}

/*
==============
DB_AsyncIWFileLoad::~DB_AsyncIWFileLoad
==============
*/
void DB_AsyncIWFileLoad::~DB_AsyncIWFileLoad(DB_AsyncIWFileLoad *this)
{
  DBFile *m_dbFile; 
  __int64 v3; 

  m_dbFile = this->m_dbFile;
  if ( m_dbFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 157, ASSERT_TYPE_ASSERT, "( m_dbFile ) == ( nullptr )", "%s == %s\n\t%p, %p", "m_dbFile", "nullptr", m_dbFile, NULL) )
    __debugbreak();
  if ( this->m_bufferCount )
  {
    LODWORD(v3) = this->m_bufferCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 158, ASSERT_TYPE_ASSERT, "( m_bufferCount ) == ( 0 )", "%s == %s\n\t%u, %u", "m_bufferCount", "0", v3, 0i64) )
      __debugbreak();
  }
}

/*
==============
DB_AsyncIWFileLoad::BatchRead
==============
*/
void DB_AsyncIWFileLoad::BatchRead(DB_AsyncIWFileLoad *this)
{
  __int64 v2; 
  DB_AsyncIWFileLoad::ReadBuffer *v3; 
  unsigned int v4; 
  unsigned int m_currentReadBuffer; 
  int v6; 

  if ( this->m_currentReadBuffer >= 0x14 )
  {
    v6 = 20;
    m_currentReadBuffer = this->m_currentReadBuffer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 848, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentReadBuffer ) < (unsigned)( ( sizeof( *array_counter( m_readBuffers ) ) + 0 ) )", "m_currentReadBuffer doesn't index m_readBuffers\n\t%i not in [0, %i)", m_currentReadBuffer, v6) )
      __debugbreak();
  }
  if ( !this->m_readBuffers[this->m_currentReadBuffer] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 849, ASSERT_TYPE_ASSERT, "(m_readBuffers[m_currentReadBuffer] != nullptr)", (const char *)&queryFormat, "m_readBuffers[m_currentReadBuffer] != nullptr") )
    __debugbreak();
  v2 = this->m_currentReadBuffer;
  if ( this->m_readBuffers[v2]->m_readState )
    LODWORD(v2) = (unsigned int)(v2 + 1) % this->m_bufferCount;
  for ( ; this->m_sizeRead < this->m_fileSize; LODWORD(v2) = (unsigned int)(v2 + 1) % this->m_bufferCount )
  {
    v3 = this->m_readBuffers[(unsigned int)v2];
    if ( v3->m_readState )
      break;
    v4 = LODWORD(this->m_fileSize) - LODWORD(this->m_sizeRead);
    if ( v4 > 0x80000 )
      v4 = 0x80000;
    DB_AsyncIWFileLoad::ReadBuffer::BeginAsyncRead(v3, this, this->m_sizeRead, v4);
    this->m_sizeRead += v4;
  }
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::BeginAsyncRead
==============
*/
void DB_AsyncIWFileLoad::ReadBuffer::BeginAsyncRead(DB_AsyncIWFileLoad::ReadBuffer *this, DB_AsyncIWFileLoad *owner, unsigned __int64 offset, unsigned int readSize)
{
  unsigned __int64 v4; 
  DBFile *m_dbFile; 
  volatile __int32 *p_m_readCompleted; 
  const char *v10; 
  unsigned __int8 *buffer; 
  int v12; 
  const char *v13; 
  const dvar_t *v14; 
  bool v15; 
  int numBytesRead; 

  v4 = readSize;
  if ( readSize > 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 457, ASSERT_TYPE_ASSERT, "(readSize <= FILE_BUFFER_SIZE)", (const char *)&queryFormat, "readSize <= FILE_BUFFER_SIZE") )
    __debugbreak();
  ProfLoad_DB_Begin("DB_AsyncIWFileLoad::ReadBuffer::BeginAsyncRead");
  if ( this->m_readState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 461, ASSERT_TYPE_ASSERT, "(GetReadState() == DB_ReadState::None)", (const char *)&queryFormat, "GetReadState() == DB_ReadState::None") )
    __debugbreak();
  m_dbFile = owner->m_dbFile;
  if ( (!m_dbFile || !DB_File_IsDBFileOpen(&m_dbFile->dbFileHandle)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 462, ASSERT_TYPE_ASSERT, "(DB_IsFileValid( owner.m_dbFile ))", (const char *)&queryFormat, "DB_IsFileValid( owner.m_dbFile )") )
    __debugbreak();
  if ( v4 + offset < offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 468, ASSERT_TYPE_ASSERT, "( ( offset + readSize ) ) >= ( offset )", "%s >= %s\n\t%zu, %zu", "( offset + readSize )", "offset", v4 + offset, offset) )
    __debugbreak();
  this->m_requestReadSize = v4;
  this->m_requestReadOffset = offset;
  if ( !(_DWORD)v4 )
  {
    this->m_sizeLeft = 0i64;
    *(_DWORD *)this->m_readResult = 8;
    p_m_readCompleted = &this->m_readCompleted;
    if ( (((_BYTE)this + 44) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_readCompleted) )
      __debugbreak();
LABEL_18:
    _InterlockedExchange(p_m_readCompleted, 1);
    this->m_readState = 2;
    goto LABEL_38;
  }
  if ( DB_File_IsFileCacheFileHandle(&owner->m_dbFile->dbFileHandle) )
  {
    ProfLoad_DB_Begin("ReadFile-dcache");
    v10 = j_va("StartRead-dcache: %s %u", owner->m_dbFile->name, (unsigned int)v4);
    Sys_ProfBeginNamedEvent(0xFF008008, v10);
    buffer = this->m_buffer;
    v12 = truncate_cast<int,unsigned __int64>(offset);
    if ( !DCache_ReadFromCacheByOffset(DCACHE_TYPE_PERSISTENT, owner->m_dbFile->dbFileHandle.dcacheFileID, DCACHE_LOC_PATCH_MAN, v12, v4, buffer, &numBytesRead, 1) )
      Sys_Error((const ObfuscateErrorText)&stru_143D1ACB0, owner->m_dbFile);
    Sys_ProfEndNamedEvent();
    ProfLoad_DB_End();
    this->m_sizeLeft = numBytesRead;
    *(_DWORD *)this->m_readResult = 8;
    p_m_readCompleted = &this->m_readCompleted;
    if ( (((_BYTE)this + 44) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_readCompleted) )
      __debugbreak();
    goto LABEL_18;
  }
  if ( *(_DWORD *)owner->m_dbFile->dbFileHandle.fileID == -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 518, ASSERT_TYPE_ASSERT, "(owner.m_dbFile->dbFileHandle.fileID != FileStreamFileID::INVALID)", (const char *)&queryFormat, "owner.m_dbFile->dbFileHandle.fileID != FileStreamFileID::INVALID") )
    __debugbreak();
  ProfLoad_DB_Begin("FileStream_AddRequest");
  v13 = j_va("FileStream_AddRequest: %s %u", owner->m_dbFile->name, (unsigned int)v4);
  Sys_ProfBeginNamedEvent(0xFF008008, v13);
  *(_DWORD *)this->m_readResult = 1;
  if ( (((_BYTE)this + 44) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_readCompleted) )
    __debugbreak();
  _InterlockedExchange(&this->m_readCompleted, 0);
  v14 = DCONST_DVARINT_fileStream_readDeadlineMS_DB;
  if ( !DCONST_DVARINT_fileStream_readDeadlineMS_DB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_readDeadlineMS_DB") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v15 = FileStream_AddRequest((FileStreamFileID)*(_DWORD *)owner->m_dbFile->dbFileHandle.fileID, offset, ((_DWORD)v4 + 4095) & 0xFFFFF000, this->m_buffer, v14->current.integer, (FileStreamPriority)2, DB_AsyncIWFileLoad::ReadBuffer::FileReadCallback, this, NULL, FILE_STREAM_TRACK_FASTFILE);
  Sys_ProfEndNamedEvent();
  ProfLoad_DB_End();
  if ( v15 )
    this->m_readState = 1;
  else
    DB_AsyncIWFileLoad::DirtyDiscError(owner, BeginAsyncRead, 0);
LABEL_38:
  ProfLoad_DB_End();
}

/*
==============
DB_AsyncIWFileLoad::CopyFrom
==============
*/
void DB_AsyncIWFileLoad::CopyFrom(DB_AsyncIWFileLoad *this, DB_AsyncIWFileLoad *other, DBFile *file)
{
  DBFile *m_dbFile; 

  _RBX = other;
  _RSI = this;
  if ( this == other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 165, ASSERT_TYPE_ASSERT, "( this ) != ( &other )", "%s != %s\n\t%p, %p", "this", "&other", this, other) )
    __debugbreak();
  m_dbFile = _RBX->m_dbFile;
  if ( m_dbFile == file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 166, ASSERT_TYPE_ASSERT, "( other.m_dbFile ) != ( file )", "%s != %s\n\t%p, %p", "other.m_dbFile", "file", m_dbFile, file) )
    __debugbreak();
  if ( *(_DWORD *)_RBX->m_dbFile->dbFileHandle.fileID != *(_DWORD *)file->dbFileHandle.fileID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 167, ASSERT_TYPE_ASSERT, "(other.m_dbFile->dbFileHandle.fileID == file->dbFileHandle.fileID)", (const char *)&queryFormat, "other.m_dbFile->dbFileHandle.fileID == file->dbFileHandle.fileID") )
    __debugbreak();
  if ( _RBX->m_dbFile->dbFileHandle.dcacheFileID != file->dbFileHandle.dcacheFileID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 169, ASSERT_TYPE_ASSERT, "(other.m_dbFile->dbFileHandle.dcacheFileID == file->dbFileHandle.dcacheFileID)", (const char *)&queryFormat, "other.m_dbFile->dbFileHandle.dcacheFileID == file->dbFileHandle.dcacheFileID") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rsi], xmm0
    vmovups xmm1, xmmword ptr [rbx+10h]
    vmovups xmmword ptr [rsi+10h], xmm1
    vmovups xmm0, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rsi+20h], xmm0
    vmovups xmm1, xmmword ptr [rbx+30h]
    vmovups xmmword ptr [rsi+30h], xmm1
    vmovups xmm0, xmmword ptr [rbx+40h]
    vmovups xmmword ptr [rsi+40h], xmm0
    vmovups xmm1, xmmword ptr [rbx+50h]
    vmovups xmmword ptr [rsi+50h], xmm1
    vmovups xmm0, xmmword ptr [rbx+60h]
    vmovups xmmword ptr [rsi+60h], xmm0
    vmovups xmm0, xmmword ptr [rbx+70h]
    vmovups xmmword ptr [rsi+70h], xmm0
    vmovups xmm1, xmmword ptr [rbx+80h]
    vmovups xmmword ptr [rsi+80h], xmm1
    vmovups xmm0, xmmword ptr [rbx+90h]
    vmovups xmmword ptr [rsi+90h], xmm0
    vmovups xmm1, xmmword ptr [rbx+0A0h]
    vmovups xmmword ptr [rsi+0A0h], xmm1
    vmovups xmm0, xmmword ptr [rbx+0B0h]
    vmovups xmmword ptr [rsi+0B0h], xmm0
    vmovups xmm1, xmmword ptr [rbx+0C0h]
    vmovups xmmword ptr [rsi+0C0h], xmm1
    vmovups xmm0, xmmword ptr [rbx+0D0h]
    vmovups xmmword ptr [rsi+0D0h], xmm0
  }
  *(_QWORD *)&_RSI->m_isFirstCompressedRead = *(_QWORD *)&_RBX->m_isFirstCompressedRead;
  memset_0(_RBX, 0, sizeof(DB_AsyncIWFileLoad));
  _RSI->m_dbFile = file;
}

/*
==============
DB_DynamicHeap_Allocate
==============
*/
unsigned __int8 *DB_DynamicHeap_Allocate(unsigned __int64 size, unsigned __int64 alignment)
{
  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 90, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  return Stream_StreamerLoanHeap::Allocate(&s_streamAllocator, size, alignment);
}

/*
==============
DB_DynamicHeap_Commit
==============
*/
void DB_DynamicHeap_Commit(unsigned __int64 size)
{
  bool IsMainThread; 
  const dvar_t *v3; 
  int integer; 
  int v5; 
  const dvar_t *v6; 

  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 52, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "DB_DynamicHeap_Commit");
  Stream_StreamerLoanHeap::Grow(&s_streamAllocator, size);
  IsMainThread = Sys_IsMainThread();
  v3 = DVARINT_db_memoryLoanDeadline;
  if ( !DVARINT_db_memoryLoanDeadline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_memoryLoanDeadline") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  v5 = Sys_Milliseconds() + integer;
  while ( !Stream_StreamerLoanHeap::CheckIfReady(&s_streamAllocator, IsMainThread) )
  {
    Sys_YieldWorkerCmd();
    if ( Sys_Milliseconds() > v5 )
    {
      v6 = DVARINT_db_memoryLoanDeadline;
      if ( !DVARINT_db_memoryLoanDeadline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_memoryLoanDeadline") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      Com_PrintWarning(10, "Waiting more than %d ms for a streamer loan of %zu bytes\n", v6->current.unsignedInt, size);
      IsMainThread = 1;
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_DynamicHeap_Deallocate
==============
*/
void DB_DynamicHeap_Deallocate(unsigned __int8 *ptr, unsigned __int64 size)
{
  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 98, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  Stream_StreamerLoanHeap::Deallocate(&s_streamAllocator, ptr, size);
}

/*
==============
DB_DynamicHeap_Decommit
==============
*/
void DB_DynamicHeap_Decommit(unsigned __int64 size)
{
  bool HasPendingLoadsAbovePriority; 

  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 77, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  HasPendingLoadsAbovePriority = CL_TransientsMP_HasPendingLoadsAbovePriority(0);
  Stream_StreamerLoanHeap::Shrink(&s_streamAllocator, size, !HasPendingLoadsAbovePriority);
}

/*
==============
DB_DynamicHeap_OneTimeInit
==============
*/
void DB_DynamicHeap_OneTimeInit(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 45, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Stream_StreamerLoanHeap::OneTimeInit(&s_streamAllocator, 0x6400000ui64, "FastFile Loading Streamer Loan");
}

/*
==============
DB_DynamicHeap_ValidateClear
==============
*/
void DB_DynamicHeap_ValidateClear(void)
{
  unsigned __int64 v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 106, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( StreamerMemLoan::Size(&s_streamAllocator.m_loan) )
  {
    v0 = StreamerMemLoan::Size(&s_streamAllocator.m_loan);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 108, ASSERT_TYPE_ASSERT, "( s_streamAllocator.UsedSize() ) == ( 0 )", "%s == %s\n\t%zu, %zu", "s_streamAllocator.UsedSize()", "0", v0, 0i64) )
      __debugbreak();
  }
}

/*
==============
DB_AsyncIWFileLoad::DirtyDiscError
==============
*/
void DB_AsyncIWFileLoad::DirtyDiscError(DB_AsyncIWFileLoad *this, const DBDirtyDiscErrorType type, const unsigned int param1)
{
  DBFile *m_dbFile; 
  DBFile *v7; 
  DBFile *v8; 
  DB_AuthLoadReader *m_reader; 
  DB_AuthLoadReader *v10; 
  int v11; 
  DB_AsyncIWFileLoad::ReadBuffer *v12; 
  int v13; 
  char *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  DB_AsyncIWFileLoad::ReadBuffer *v17; 
  char *fmt; 
  char *fmta; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  int outOpID; 
  int outOpCode[3]; 
  char dest[256]; 

  m_dbFile = this->m_dbFile;
  if ( (!m_dbFile || !DB_File_IsDBFileOpen(&m_dbFile->dbFileHandle)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 679, ASSERT_TYPE_ASSERT, "(DB_IsFileValid( m_dbFile ))", (const char *)&queryFormat, "DB_IsFileValid( m_dbFile )") )
    __debugbreak();
  v7 = this->m_dbFile;
  DB_CleanupPlaylistFile(v7);
  Com_PrintError(0, "ERROR: Dirty disk: '%s'\n", v7->name);
  v8 = (DBFile *)"<none>";
  if ( this->m_dbFile )
    v8 = this->m_dbFile;
  Com_Printf(0, "\tfile                 = %s\n", v8);
  Com_Printf(0, "\tsizeRead             = %zu\n", this->m_sizeRead);
  Com_Printf(0, "\tsizeInflated         = %zu\n", this->m_sizeInflated);
  Com_Printf(0, "\tsizePassedToInflator = %zu\n", this->m_sizePassedToInflator);
  Com_Printf(0, "\tfileSize             = %zu\n", this->m_fileSize);
  Com_Printf(0, "\treadResult           = %u\n", *(unsigned int *)this->m_readBuffers[this->m_currentReadBuffer]->m_readResult);
  Com_Printf(0, "\treadState            = %u\n", (unsigned int)this->m_readBuffers[this->m_currentReadBuffer]->m_readState);
  Com_Printf(0, "\tlastReadSize         = %zu\n", this->m_readBuffers[this->m_currentReadBuffer]->m_requestReadSize);
  Com_Printf(0, "\tlastReadOffset       = %zu\n", this->m_readBuffers[this->m_currentReadBuffer]->m_requestReadOffset);
  Com_Printf(0, "\tbuffer               = 0x%p\n", this->m_readBuffers[this->m_currentReadBuffer]->m_buffer);
  Com_Printf(0, "\nstate.stream:\n");
  m_reader = this->m_reader;
  Com_Printf(0, "\tnext_in    = 0x%p\n", this->m_reader->state.stream.next_in);
  Com_Printf(0, "\tavail_in   = %zu\n", m_reader->state.stream.avail_in);
  Com_Printf(0, "\ttotal_in   = %zu\n", m_reader->state.stream.total_in);
  Com_Printf(0, "\tnext_out   = 0x%p\n", m_reader->state.stream.next_out);
  Com_Printf(0, "\tavail_out  = %zu\n", m_reader->state.stream.avail_out);
  Com_Printf(0, "\ttotal_out  = %zu\n", m_reader->state.stream.total_out);
  Com_Printf(0, "\tcompressor = %u\n", (unsigned int)m_reader->state.stream.compressor);
  DB_CmpLoad_DumpState(&this->m_reader->state);
  v10 = this->m_reader;
  DiskFS_GetLastSystemError(&outOpID, outOpCode);
  v11 = 0;
  v12 = this->m_readBuffers[this->m_currentReadBuffer];
  LODWORD(v20) = v12->m_readState;
  LODWORD(fmt) = *(_DWORD *)this->m_dbFile->dbFileHandle.fileID == -16777217;
  v13 = Com_sprintf_truncate<256>((char (*)[256])dest, "%i,%i,%x,%x,%x,%x,%x,%zx,%zx,%zx,%zx,%zx,%zx,%zx,%zx,%zx,%zx,%zx,%s", (unsigned int)type, param1, fmt, v20, *(_DWORD *)v12->m_readResult, outOpID, outOpCode[0], this->m_sizeRead, this->m_sizeInflated, v12->m_requestReadSize, v12->m_sizeLeft, this->m_sizePassedToInflator, this->m_fileSize, v12->m_requestReadOffset, v10->state.stream.avail_in, v10->state.stream.total_in, v10->state.stream.avail_out, v10->state.stream.total_out, v7->name);
  v14 = dest;
  if ( v13 <= 0 )
    v14 = "<format error>";
  OnlineError_SetSystemStartupError(DODGE, v14);
  v15 = DVARBOOL_db_discErrorSystemDialog;
  if ( !DVARBOOL_db_discErrorSystemDialog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_discErrorSystemDialog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = DVARBOOL_db_discErrorVerbose;
  if ( !DVARBOOL_db_discErrorVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_discErrorVerbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled )
  {
    v17 = this->m_readBuffers[this->m_currentReadBuffer];
    LOBYTE(v11) = *(_DWORD *)this->m_dbFile->dbFileHandle.fileID == -16777217;
    LODWORD(v23) = outOpID;
    LODWORD(v22) = *(_DWORD *)v17->m_readResult;
    LODWORD(v21) = v17->m_readState;
    LODWORD(fmta) = v11;
    Sys_Error((const ObfuscateErrorText)&stru_143D1B170, (unsigned int)type, param1, v7, fmta, v21, v22, v23, this->m_sizeRead, this->m_sizeInflated, v17->m_requestReadSize, v17->m_sizeLeft, this->m_sizePassedToInflator, this->m_fileSize, v17->m_requestReadOffset, v10->state.stream.avail_in, v10->state.stream.total_in, v10->state.stream.avail_out, v10->state.stream.total_out);
  }
  else
  {
    Sys_Error((const ObfuscateErrorText)&stru_143D1B1D8, (unsigned int)type, param1, v7);
  }
}

/*
==============
DB_AsyncIWFileLoad::DumpLoadState
==============
*/
void DB_AsyncIWFileLoad::DumpLoadState(DB_AsyncIWFileLoad *this)
{
  DBFile *m_dbFile; 
  DB_AuthLoadReader *m_reader; 

  m_dbFile = (DBFile *)"<none>";
  if ( this->m_dbFile )
    m_dbFile = this->m_dbFile;
  Com_Printf(0, "\tfile                 = %s\n", m_dbFile);
  Com_Printf(0, "\tsizeRead             = %zu\n", this->m_sizeRead);
  Com_Printf(0, "\tsizeInflated         = %zu\n", this->m_sizeInflated);
  Com_Printf(0, "\tsizePassedToInflator = %zu\n", this->m_sizePassedToInflator);
  Com_Printf(0, "\tfileSize             = %zu\n", this->m_fileSize);
  Com_Printf(0, "\treadResult           = %u\n", *(unsigned int *)this->m_readBuffers[this->m_currentReadBuffer]->m_readResult);
  Com_Printf(0, "\treadState            = %u\n", (unsigned int)this->m_readBuffers[this->m_currentReadBuffer]->m_readState);
  Com_Printf(0, "\tlastReadSize         = %zu\n", this->m_readBuffers[this->m_currentReadBuffer]->m_requestReadSize);
  Com_Printf(0, "\tlastReadOffset       = %zu\n", this->m_readBuffers[this->m_currentReadBuffer]->m_requestReadOffset);
  Com_Printf(0, "\tbuffer               = 0x%p\n", this->m_readBuffers[this->m_currentReadBuffer]->m_buffer);
  Com_Printf(0, "\nstate.stream:\n");
  m_reader = this->m_reader;
  Com_Printf(0, "\tnext_in    = 0x%p\n", this->m_reader->state.stream.next_in);
  Com_Printf(0, "\tavail_in   = %zu\n", m_reader->state.stream.avail_in);
  Com_Printf(0, "\ttotal_in   = %zu\n", m_reader->state.stream.total_in);
  Com_Printf(0, "\tnext_out   = 0x%p\n", m_reader->state.stream.next_out);
  Com_Printf(0, "\tavail_out  = %zu\n", m_reader->state.stream.avail_out);
  Com_Printf(0, "\ttotal_out  = %zu\n", m_reader->state.stream.total_out);
  Com_Printf(0, "\tcompressor = %u\n", (unsigned int)m_reader->state.stream.compressor);
  DB_CmpLoad_DumpState(&this->m_reader->state);
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::FileReadCallback
==============
*/
void DB_AsyncIWFileLoad::ReadBuffer::FileReadCallback(FileStreamRequestID id, int result, __int64 numBytesRead, void *user)
{
  volatile signed __int32 *v7; 
  unsigned __int64 v8; 

  Sys_ProfBeginNamedEvent(0xFF808080, "DB_AsyncIWFileLoad::ReadBuffer::FileReadCallback");
  if ( *((_DWORD *)user + 10) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 937, ASSERT_TYPE_ASSERT, "(readBuffer->m_readResult == FileStreamStatus::QUEUED)", (const char *)&queryFormat, "readBuffer->m_readResult == FileStreamStatus::QUEUED", -2i64) )
    __debugbreak();
  v7 = (volatile signed __int32 *)((char *)user + 44);
  if ( *((_DWORD *)user + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 938, ASSERT_TYPE_ASSERT, "(readBuffer->m_readCompleted == 0)", (const char *)&queryFormat, "readBuffer->m_readCompleted == 0") )
    __debugbreak();
  *((_DWORD *)user + 10) = result;
  v8 = *((_QWORD *)user + 1);
  if ( v8 > numBytesRead )
    v8 = numBytesRead;
  *((_QWORD *)user + 4) = v8;
  if ( ((unsigned __int8)v7 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (char *)user + 44) )
    __debugbreak();
  _InterlockedIncrement(v7);
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_AsyncIWFileLoad::GetEncryptionInfo
==============
*/
EncryptionInfo *DB_AsyncIWFileLoad::GetEncryptionInfo(DB_AsyncIWFileLoad *this)
{
  EncryptionInfo *result; 
  EncryptionInfo *p_encryption; 

  result = NULL;
  p_encryption = &this->m_dbFile->encryption;
  if ( p_encryption->header.isEncrypted )
    return p_encryption;
  return result;
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::Inflate
==============
*/
void DB_AsyncIWFileLoad::ReadBuffer::Inflate(DB_AsyncIWFileLoad::ReadBuffer *this, DB_AsyncIWFileLoad *owner)
{
  DBFile *m_dbFile; 
  unsigned __int64 m_sizePassedToInflator; 
  unsigned int Inflate; 
  DB_AuthLoadReader *m_reader; 

  m_dbFile = owner->m_dbFile;
  if ( (!m_dbFile || !DB_File_IsDBFileOpen(&m_dbFile->dbFileHandle)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 821, ASSERT_TYPE_ASSERT, "(DB_IsFileValid( owner.m_dbFile ))", (const char *)&queryFormat, "DB_IsFileValid( owner.m_dbFile )") )
    __debugbreak();
  if ( this->m_readState != 3 || !DB_AuthLoad_HasAvailIn(owner->m_reader) )
  {
    m_sizePassedToInflator = owner->m_sizePassedToInflator;
    if ( m_sizePassedToInflator > owner->m_fileSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 314, ASSERT_TYPE_ASSERT, "( m_sizePassedToInflator ) <= ( m_fileSize )", "%s <= %s\n\t%llu, %llu", "m_sizePassedToInflator", "m_fileSize", m_sizePassedToInflator, owner->m_fileSize) )
      __debugbreak();
    if ( owner->m_sizePassedToInflator != owner->m_fileSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 822, ASSERT_TYPE_ASSERT, "(( GetReadState() == DB_ReadState::Inflating && DB_AuthLoad_HasAvailIn( owner.m_reader ) ) || owner.IsDoneReading())", (const char *)&queryFormat, "( GetReadState() == DB_ReadState::Inflating && DB_AuthLoad_HasAvailIn( owner.m_reader ) ) || owner.IsDoneReading()") )
      __debugbreak();
  }
  ProfLoad_DB_Begin("DB_AuthLoad_Inflate");
  Inflate = DB_AuthLoad_Inflate(owner->m_reader);
  ProfLoad_DB_End();
  if ( Inflate )
    DB_AsyncIWFileLoad::DirtyDiscError(owner, ReadDataAuthCmp_AuthFail, Inflate);
  m_reader = owner->m_reader;
  if ( !DB_AuthLoad_HasAvailIn(owner->m_reader) )
    this->m_readState = None;
  if ( DB_AuthLoad_HasAvailIn(owner->m_reader) && m_reader->state.stream.avail_out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 842, ASSERT_TYPE_ASSERT, "(!DB_AuthLoad_HasAvailIn( owner.m_reader ) || stream->avail_out == 0)", (const char *)&queryFormat, "!DB_AuthLoad_HasAvailIn( owner.m_reader ) || stream->avail_out == 0") )
    __debugbreak();
}

/*
==============
DB_AsyncIWFileLoad::InflateInit
==============
*/
void DB_AsyncIWFileLoad::InflateInit(DB_AsyncIWFileLoad *this)
{
  DBFile *m_dbFile; 
  DBFile *v3; 
  const EncryptionInfo *p_encryption; 

  m_dbFile = this->m_dbFile;
  if ( (!m_dbFile || !DB_File_IsDBFileOpen(&m_dbFile->dbFileHandle)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 402, ASSERT_TYPE_ASSERT, "(DB_IsFileValid( m_dbFile ))", (const char *)&queryFormat, "DB_IsFileValid( m_dbFile )") )
    __debugbreak();
  v3 = this->m_dbFile;
  if ( v3->isSecured )
  {
    DB_AsyncIWFileLoad::DirtyDiscError(this, InflateUnsupportedAuth, 0);
    v3 = this->m_dbFile;
  }
  p_encryption = &v3->encryption;
  if ( !v3->encryption.header.isEncrypted )
    p_encryption = NULL;
  DB_AuthLoad_InflateInit(this->m_reader, v3->isSecured, v3->name, p_encryption);
}

/*
==============
DB_AsyncIWFileLoad::InflateInitForceNoSecure
==============
*/
void DB_AsyncIWFileLoad::InflateInitForceNoSecure(DB_AsyncIWFileLoad *this)
{
  DBFile *m_dbFile; 
  DBFile *v3; 
  const EncryptionInfo *p_encryption; 

  m_dbFile = this->m_dbFile;
  if ( (!m_dbFile || !DB_File_IsDBFileOpen(&m_dbFile->dbFileHandle)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 441, ASSERT_TYPE_ASSERT, "(DB_IsFileValid( m_dbFile ))", (const char *)&queryFormat, "DB_IsFileValid( m_dbFile )") )
    __debugbreak();
  v3 = this->m_dbFile;
  p_encryption = &v3->encryption;
  if ( !v3->encryption.header.isEncrypted )
    p_encryption = NULL;
  DB_AuthLoad_InflateInit(this->m_reader, 0, v3->name, p_encryption);
}

/*
==============
DB_AsyncIWFileLoad::InflateShutdown
==============
*/
void DB_AsyncIWFileLoad::InflateShutdown(DB_AsyncIWFileLoad *this)
{
  DBFile *m_dbFile; 

  m_dbFile = this->m_dbFile;
  if ( (!m_dbFile || !DB_File_IsDBFileOpen(&m_dbFile->dbFileHandle)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 449, ASSERT_TYPE_ASSERT, "(DB_IsFileValid( m_dbFile ))", (const char *)&queryFormat, "DB_IsFileValid( m_dbFile )") )
    __debugbreak();
  DB_AuthLoad_InflateEnd(this->m_reader);
}

/*
==============
DB_AsyncIWFileLoad::Init
==============
*/
void DB_AsyncIWFileLoad::Init(DB_AsyncIWFileLoad *this)
{
  memset_0(this, 0, sizeof(DB_AsyncIWFileLoad));
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::Init
==============
*/
void DB_AsyncIWFileLoad::ReadBuffer::Init(DB_AsyncIWFileLoad::ReadBuffer *this)
{
  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 90, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  this->m_buffer = Stream_StreamerLoanHeap::Allocate(&s_streamAllocator, 0x80000ui64, 0x1000ui64);
  this->m_sizeLeft = 0i64;
  this->m_requestReadSize = 0i64;
  this->m_requestReadOffset = 0i64;
  *(_DWORD *)this->m_readResult = 0;
  this->m_readState = None;
  if ( (((_BYTE)this + 44) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_readCompleted) )
    __debugbreak();
  _InterlockedExchange(&this->m_readCompleted, 0);
  if ( ((__int64)this->m_buffer & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 351, ASSERT_TYPE_ASSERT, "(IsAligned( m_buffer, 4096 ))", (const char *)&queryFormat, "IsAligned( m_buffer, FILE_READ_ALIGNMENT )") )
    __debugbreak();
}

/*
==============
DB_AsyncIWFileLoad::IsDoneReading
==============
*/
bool DB_AsyncIWFileLoad::IsDoneReading(DB_AsyncIWFileLoad *this)
{
  unsigned __int64 m_sizePassedToInflator; 
  unsigned __int64 m_fileSize; 

  m_sizePassedToInflator = this->m_sizePassedToInflator;
  m_fileSize = this->m_fileSize;
  if ( m_sizePassedToInflator > m_fileSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 314, ASSERT_TYPE_ASSERT, "( m_sizePassedToInflator ) <= ( m_fileSize )", "%s <= %s\n\t%llu, %llu", "m_sizePassedToInflator", "m_fileSize", m_sizePassedToInflator, m_fileSize) )
    __debugbreak();
  return this->m_sizePassedToInflator == this->m_fileSize;
}

/*
==============
DB_AsyncIWFileLoad::IsEndOfFile
==============
*/
bool DB_AsyncIWFileLoad::IsEndOfFile(DB_AsyncIWFileLoad *this)
{
  return !DB_AuthLoad_HasAvailIn(this->m_reader) && DB_AsyncIWFileLoad::IsDoneReading(this);
}

/*
==============
DB_AsyncIWFileLoad::IsShutdown
==============
*/
bool DB_AsyncIWFileLoad::IsShutdown(DB_AsyncIWFileLoad *this)
{
  return this->m_dbFile == NULL;
}

/*
==============
DB_AsyncIWFileLoad::PrepareToRead
==============
*/
void DB_AsyncIWFileLoad::PrepareToRead(DB_AsyncIWFileLoad *this, DBFile *file, int maxSizeToRead)
{
  unsigned __int64 v3; 
  DBFile *m_dbFile; 
  unsigned __int64 DBFileSize; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  bool IsMainThread; 
  const dvar_t *v13; 
  int integer; 
  int v15; 
  const dvar_t *v16; 
  DB_AuthLoadReader *v17; 
  unsigned __int8 *v18; 
  unsigned int i; 
  unsigned __int8 *v20; 
  __int64 v21; 
  ScopedCriticalSection v22; 

  v3 = maxSizeToRead;
  m_dbFile = this->m_dbFile;
  if ( m_dbFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 187, ASSERT_TYPE_ASSERT, "( m_dbFile ) == ( nullptr )", "%s == %s\n\t%p, %p", "m_dbFile", "nullptr", m_dbFile, NULL) )
    __debugbreak();
  if ( this->m_bufferCount )
  {
    LODWORD(v21) = this->m_bufferCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 188, ASSERT_TYPE_ASSERT, "( m_bufferCount ) == ( 0 )", "%s == %s\n\t%u, %u", "m_bufferCount", "0", v21, 0i64) )
      __debugbreak();
  }
  if ( (!file || !DB_File_IsDBFileOpen(&file->dbFileHandle)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 189, ASSERT_TYPE_ASSERT, "(DB_IsFileValid( file ))", (const char *)&queryFormat, "DB_IsFileValid( file )") )
    __debugbreak();
  this->m_dbFile = file;
  DBFileSize = DB_File_GetDBFileSize(&file->dbFileHandle);
  if ( (int)v3 <= 0 || (v8 = v3, v3 >= DBFileSize) )
  {
    this->m_fileSize = DBFileSize;
    v8 = DBFileSize;
  }
  else
  {
    this->m_fileSize = v3;
  }
  if ( v8 )
  {
    ScopedCriticalSection::ScopedCriticalSection(&v22, CRITSECT_FAST_FILE_STREAM_HEAP, SCOPED_CRITSECT_NORMAL);
    v9 = (this->m_fileSize + 0x7FFFF) >> 19;
    if ( v9 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v9, "unsigned", (this->m_fileSize + 0x7FFFF) >> 19) )
      __debugbreak();
    v10 = 20i64;
    if ( (int)v9 < 20 )
      v10 = (unsigned int)v9;
    this->m_bufferCount = v10;
    v11 = 524336 * v10 + 285064;
    this->m_committedMemorySize = v11;
    if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 52, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFF808080, "DB_DynamicHeap_Commit");
    Stream_StreamerLoanHeap::Grow(&s_streamAllocator, v11);
    IsMainThread = Sys_IsMainThread();
    v13 = DVARINT_db_memoryLoanDeadline;
    if ( !DVARINT_db_memoryLoanDeadline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_memoryLoanDeadline") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    integer = v13->current.integer;
    v15 = Sys_Milliseconds() + integer;
    while ( !Stream_StreamerLoanHeap::CheckIfReady(&s_streamAllocator, IsMainThread) )
    {
      Sys_YieldWorkerCmd();
      if ( Sys_Milliseconds() > v15 )
      {
        v16 = DVARINT_db_memoryLoanDeadline;
        if ( !DVARINT_db_memoryLoanDeadline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_memoryLoanDeadline") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        Com_PrintWarning(10, "Waiting more than %d ms for a streamer loan of %zu bytes\n", v16->current.unsignedInt, v11);
        IsMainThread = 1;
      }
    }
    Sys_ProfEndNamedEvent();
    v17 = (DB_AuthLoadReader *)DB_DynamicHeap_Allocate(0x44900ui64, 0x80ui64);
    this->m_reader = v17;
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 220, ASSERT_TYPE_ASSERT, "( m_reader ) != ( nullptr )", "%s != %s\n\t%p, %p", "m_reader", "nullptr", NULL, NULL) )
      __debugbreak();
    v18 = DB_DynamicHeap_Allocate(48i64 * this->m_bufferCount, 8ui64);
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 222, ASSERT_TYPE_ASSERT, "( baseReadBuffers ) != ( nullptr )", "%s != %s\n\t%p, %p", "baseReadBuffers", "nullptr", NULL, NULL) )
      __debugbreak();
    for ( i = 0; i < this->m_bufferCount; ++i )
    {
      v20 = &v18[48 * i];
      this->m_readBuffers[i] = (DB_AsyncIWFileLoad::ReadBuffer *)v20;
      if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 90, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
        __debugbreak();
      *(_QWORD *)v20 = Stream_StreamerLoanHeap::Allocate(&s_streamAllocator, 0x80000ui64, 0x1000ui64);
      *((_QWORD *)v20 + 4) = 0i64;
      *((_QWORD *)v20 + 1) = 0i64;
      *((_QWORD *)v20 + 2) = 0i64;
      *((_DWORD *)v20 + 10) = 0;
      *((_DWORD *)v20 + 6) = 0;
      if ( (((_BYTE)v20 + 44) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", v20 + 44) )
        __debugbreak();
      _InterlockedExchange((volatile __int32 *)v20 + 11, 0);
      if ( (*(_QWORD *)v20 & 0xFFFi64) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 351, ASSERT_TYPE_ASSERT, "(IsAligned( m_buffer, 4096 ))", (const char *)&queryFormat, "IsAligned( m_buffer, FILE_READ_ALIGNMENT )") )
        __debugbreak();
    }
    this->m_sizeRead = 0i64;
    this->m_sizePassedToInflator = 0i64;
    this->m_sizeInflated = 0i64;
    this->m_currentReadBuffer = 0;
    this->m_isFirstCompressedRead = 1;
    DB_AsyncIWFileLoad::BatchRead(this);
    DB_AuthLoad_OneTimeInit(this->m_reader);
    ScopedCriticalSection::~ScopedCriticalSection(&v22);
  }
}

/*
==============
DB_AsyncIWFileLoad::ReadDataAuthCmp
==============
*/
void DB_AsyncIWFileLoad::ReadDataAuthCmp(DB_AsyncIWFileLoad *this, unsigned __int8 *const pos, const unsigned __int64 size)
{
  DBFile *m_dbFile; 
  DB_AuthLoadReader *m_reader; 
  __int64 v8; 
  DB_AsyncIWFileLoad::ReadBuffer *v9; 
  DBFile *v10; 
  unsigned __int64 m_sizePassedToInflator; 
  unsigned int Inflate; 
  DB_AuthLoadReader *v13; 
  unsigned __int64 v14; 
  const dvar_t *v15; 
  DBDirtyDiscErrorType v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 609, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 610, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  if ( !pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 611, ASSERT_TYPE_ASSERT, "(pos)", (const char *)&queryFormat, "pos") )
    __debugbreak();
  m_dbFile = this->m_dbFile;
  if ( (!m_dbFile || !DB_File_IsDBFileOpen(&m_dbFile->dbFileHandle)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 612, ASSERT_TYPE_ASSERT, "(DB_IsFileValid( m_dbFile ))", (const char *)&queryFormat, "DB_IsFileValid( m_dbFile )") )
    __debugbreak();
  ProfLoad_DB_Begin("ReadDataAuthCmp");
  m_reader = this->m_reader;
  if ( this->m_reader->state.stream.avail_out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 617, ASSERT_TYPE_ASSERT, "(!stream->avail_out)", (const char *)&queryFormat, "!stream->avail_out") )
    __debugbreak();
  if ( this->m_isFirstCompressedRead )
  {
    if ( this->m_currentReadBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 621, ASSERT_TYPE_ASSERT, "( m_currentReadBuffer ) == ( 0 )", "%s == %s\n\t%u, %u", "m_currentReadBuffer", "0", this->m_currentReadBuffer, 0i64) )
      __debugbreak();
    DB_AsyncIWFileLoad::ReadBuffer::SetupDecompressor(this->m_readBuffers[this->m_currentReadBuffer], this, &this->m_reader->state.stream);
    this->m_isFirstCompressedRead = 0;
  }
  m_reader->state.stream.next_out = pos;
  m_reader->state.stream.avail_out = size;
  while ( 1 )
  {
    if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 890, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
      __debugbreak();
    if ( !DB_AuthLoad_HasAvailIn(this->m_reader) && !DB_AsyncIWFileLoad::IsDoneReading(this) )
    {
      if ( this->m_currentReadBuffer >= 0x14 )
      {
        LODWORD(v18) = 20;
        LODWORD(v17) = this->m_currentReadBuffer;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 894, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentReadBuffer ) < (unsigned)( ( sizeof( *array_counter( m_readBuffers ) ) + 0 ) )", "m_currentReadBuffer doesn't index m_readBuffers\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      if ( this->m_readBuffers[this->m_currentReadBuffer]->m_readState )
      {
        LODWORD(v19) = this->m_readBuffers[this->m_currentReadBuffer]->m_readState;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 895, ASSERT_TYPE_ASSERT, "( m_readBuffers[m_currentReadBuffer]->GetReadState() ) == ( DB_ReadState::None )", "%s == %s\n\t%u, %u", "m_readBuffers[m_currentReadBuffer]->GetReadState()", "DB_ReadState::None", v19, 0i64) )
          __debugbreak();
      }
      v8 = (this->m_currentReadBuffer + 1) % this->m_bufferCount;
      this->m_currentReadBuffer = v8;
      DB_AsyncIWFileLoad::ReadBuffer::SetupDecompressor(this->m_readBuffers[v8], this, &this->m_reader->state.stream);
      if ( this->m_sizeRead < this->m_fileSize && this->m_readBuffers[(this->m_currentReadBuffer + 1) % this->m_bufferCount]->m_readState == None )
        DB_AsyncIWFileLoad::BatchRead(this);
    }
    if ( this->m_currentReadBuffer >= 0x14 )
    {
      LODWORD(v18) = 20;
      LODWORD(v17) = this->m_currentReadBuffer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 633, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentReadBuffer ) < (unsigned)( ( sizeof( *array_counter( m_readBuffers ) ) + 0 ) )", "m_currentReadBuffer doesn't index m_readBuffers\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    v9 = this->m_readBuffers[this->m_currentReadBuffer];
    v10 = this->m_dbFile;
    if ( (!v10 || !DB_File_IsDBFileOpen(&v10->dbFileHandle)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 821, ASSERT_TYPE_ASSERT, "(DB_IsFileValid( owner.m_dbFile ))", (const char *)&queryFormat, "DB_IsFileValid( owner.m_dbFile )") )
      __debugbreak();
    if ( v9->m_readState != 3 || !DB_AuthLoad_HasAvailIn(this->m_reader) )
    {
      m_sizePassedToInflator = this->m_sizePassedToInflator;
      if ( m_sizePassedToInflator > this->m_fileSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 314, ASSERT_TYPE_ASSERT, "( m_sizePassedToInflator ) <= ( m_fileSize )", "%s <= %s\n\t%llu, %llu", "m_sizePassedToInflator", "m_fileSize", m_sizePassedToInflator, this->m_fileSize) )
        __debugbreak();
      if ( this->m_sizePassedToInflator != this->m_fileSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 822, ASSERT_TYPE_ASSERT, "(( GetReadState() == DB_ReadState::Inflating && DB_AuthLoad_HasAvailIn( owner.m_reader ) ) || owner.IsDoneReading())", (const char *)&queryFormat, "( GetReadState() == DB_ReadState::Inflating && DB_AuthLoad_HasAvailIn( owner.m_reader ) ) || owner.IsDoneReading()") )
        __debugbreak();
    }
    ProfLoad_DB_Begin("DB_AuthLoad_Inflate");
    Inflate = DB_AuthLoad_Inflate(this->m_reader);
    ProfLoad_DB_End();
    if ( Inflate )
      DB_AsyncIWFileLoad::DirtyDiscError(this, ReadDataAuthCmp_AuthFail, Inflate);
    v13 = this->m_reader;
    if ( !DB_AuthLoad_HasAvailIn(this->m_reader) )
      v9->m_readState = None;
    if ( DB_AuthLoad_HasAvailIn(this->m_reader) && v13->state.stream.avail_out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 842, ASSERT_TYPE_ASSERT, "(!DB_AuthLoad_HasAvailIn( owner.m_reader ) || stream->avail_out == 0)", (const char *)&queryFormat, "!DB_AuthLoad_HasAvailIn( owner.m_reader ) || stream->avail_out == 0") )
      __debugbreak();
    v14 = Sys_Microseconds();
    if ( v14 - lastYieldTime > 0x320 )
    {
      Sys_YieldWorkerCmd();
      v15 = DVARBOOL_db_resetYieldCountDownAfterYielding;
      if ( !DVARBOOL_db_resetYieldCountDownAfterYielding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_resetYieldCountDownAfterYielding") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v15->current.enabled )
        lastYieldTime = Sys_Microseconds();
      else
        lastYieldTime = v14;
    }
    if ( !m_reader->state.stream.avail_out )
      break;
    if ( DB_AuthLoad_HasAvailIn(this->m_reader) )
    {
      v16 = ReadDataAuthCmp_AvailNotZero;
      goto LABEL_73;
    }
    if ( !DB_AuthLoad_HasAvailIn(this->m_reader) && DB_AsyncIWFileLoad::IsDoneReading(this) )
    {
      v16 = ReadDataAuthCmp_EOF;
LABEL_73:
      DB_AsyncIWFileLoad::DirtyDiscError(this, v16, m_reader->state.stream.avail_in);
      size -= m_reader->state.stream.avail_out;
      break;
    }
  }
  this->m_sizeInflated += size;
  ProfLoad_DB_End();
}

/*
==============
DB_AsyncIWFileLoad::ReadHeader
==============
*/
bool DB_AsyncIWFileLoad::ReadHeader(DB_AsyncIWFileLoad *this, void *const pos, const unsigned __int64 size)
{
  unsigned __int64 m_sizePassedToInflator; 
  __int64 m_currentReadBuffer; 
  DB_AsyncIWFileLoad::ReadBuffer *v8; 
  bool result; 
  unsigned __int64 m_sizeLeft; 
  unsigned __int64 v11; 
  size_t v12; 
  char *v13; 
  unsigned __int64 v14; 
  bool v15; 
  __int64 v16; 

  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 277, ASSERT_TYPE_ASSERT, "( size ) > ( 0 )", "%s > %s\n\t%u, %u", "size", "0", 0, 0i64) )
    __debugbreak();
  if ( this->m_currentReadBuffer )
  {
    LODWORD(v16) = this->m_currentReadBuffer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 278, ASSERT_TYPE_ASSERT, "( m_currentReadBuffer ) == ( 0 )", "%s == %s\n\t%u, %u", "m_currentReadBuffer", "0", v16, 0i64) )
      __debugbreak();
  }
  m_sizePassedToInflator = this->m_sizePassedToInflator;
  if ( m_sizePassedToInflator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 279, ASSERT_TYPE_ASSERT, "( m_sizePassedToInflator ) == ( 0 )", "%s == %s\n\t%llu, %llu", "m_sizePassedToInflator", "0", m_sizePassedToInflator, 0i64) )
    __debugbreak();
  if ( size > this->m_fileSize )
    return 0;
  m_currentReadBuffer = this->m_currentReadBuffer;
  v8 = this->m_readBuffers[m_currentReadBuffer];
  if ( v8->m_readState == 1 && !DB_AsyncIWFileLoad::ReadBuffer::WaitForAsyncCompletion(this->m_readBuffers[m_currentReadBuffer], this) )
  {
    DB_AsyncIWFileLoad::DirtyDiscError(this, WaitForAsyncFail1, *(_DWORD *)v8->m_readResult);
    return 0;
  }
  if ( v8->m_readState != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 329, ASSERT_TYPE_ASSERT, "(m_readState == DB_ReadState::ReadComplete)", (const char *)&queryFormat, "m_readState == DB_ReadState::ReadComplete") )
    __debugbreak();
  m_sizeLeft = v8->m_sizeLeft;
  if ( m_sizeLeft > v8->m_requestReadSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 330, ASSERT_TYPE_ASSERT, "( m_sizeLeft ) <= ( m_requestReadSize )", "%s <= %s\n\t%llu, %llu", "m_sizeLeft", "m_requestReadSize", m_sizeLeft, v8->m_requestReadSize) )
    __debugbreak();
  v11 = v8->m_sizeLeft;
  v12 = size;
  if ( size > v11 )
    v12 = v8->m_sizeLeft;
  memcpy_0(pos, &v8->m_buffer[v8->m_requestReadSize - v11], v12);
  v8->m_sizeLeft -= v12;
  v13 = (char *)pos + v12;
  v14 = size - v12;
  v15 = size == v12;
  if ( v14 )
    return 0;
  if ( v13 != (char *)pos + size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 295, ASSERT_TYPE_ASSERT, "( cursor ) == ( reinterpret_cast< byte* >( pos ) + size )", "%s == %s\n\t%p, %p", "cursor", "reinterpret_cast< byte* >( pos ) + size", v13, (char *)pos + size) )
    __debugbreak();
  this->m_sizePassedToInflator += size;
  result = v15;
  this->m_sizeInflated += size;
  return result;
}

/*
==============
DB_AsyncIWFileLoad::ReadNextData
==============
*/
void DB_AsyncIWFileLoad::ReadNextData(DB_AsyncIWFileLoad *this)
{
  DB_ReadStream *p_stream; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  DB_ReadState m_readState; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 890, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !DB_AuthLoad_HasAvailIn(this->m_reader) && !DB_AsyncIWFileLoad::IsDoneReading(this) )
  {
    if ( this->m_currentReadBuffer >= 0x14 )
    {
      v5 = 20;
      LODWORD(v4) = this->m_currentReadBuffer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 894, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentReadBuffer ) < (unsigned)( ( sizeof( *array_counter( m_readBuffers ) ) + 0 ) )", "m_currentReadBuffer doesn't index m_readBuffers\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    if ( this->m_readBuffers[this->m_currentReadBuffer]->m_readState )
    {
      m_readState = this->m_readBuffers[this->m_currentReadBuffer]->m_readState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 895, ASSERT_TYPE_ASSERT, "( m_readBuffers[m_currentReadBuffer]->GetReadState() ) == ( DB_ReadState::None )", "%s == %s\n\t%u, %u", "m_readBuffers[m_currentReadBuffer]->GetReadState()", "DB_ReadState::None", m_readState, 0i64) )
        __debugbreak();
    }
    p_stream = &this->m_reader->state.stream;
    v3 = (this->m_currentReadBuffer + 1) % this->m_bufferCount;
    this->m_currentReadBuffer = v3;
    DB_AsyncIWFileLoad::ReadBuffer::SetupDecompressor(this->m_readBuffers[v3], this, p_stream);
    if ( this->m_sizeRead < this->m_fileSize && this->m_readBuffers[(this->m_currentReadBuffer + 1) % this->m_bufferCount]->m_readState == None )
      DB_AsyncIWFileLoad::BatchRead(this);
  }
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::ReadRaw
==============
*/
bool DB_AsyncIWFileLoad::ReadBuffer::ReadRaw(DB_AsyncIWFileLoad::ReadBuffer *this, DB_AsyncIWFileLoad *owner, unsigned __int8 **pos, unsigned __int64 *size)
{
  unsigned __int64 m_sizeLeft; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  bool v12; 

  if ( this->m_readState != 1 || DB_AsyncIWFileLoad::ReadBuffer::WaitForAsyncCompletion(this, owner) )
  {
    if ( this->m_readState != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 329, ASSERT_TYPE_ASSERT, "(m_readState == DB_ReadState::ReadComplete)", (const char *)&queryFormat, "m_readState == DB_ReadState::ReadComplete") )
      __debugbreak();
    m_sizeLeft = this->m_sizeLeft;
    if ( m_sizeLeft > this->m_requestReadSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 330, ASSERT_TYPE_ASSERT, "( m_sizeLeft ) <= ( m_requestReadSize )", "%s <= %s\n\t%llu, %llu", "m_sizeLeft", "m_requestReadSize", m_sizeLeft, this->m_requestReadSize) )
      __debugbreak();
    v10 = this->m_sizeLeft;
    v11 = *size;
    if ( *size > v10 )
      v11 = this->m_sizeLeft;
    memcpy_0(*pos, &this->m_buffer[this->m_requestReadSize - v10], v11);
    this->m_sizeLeft -= v11;
    *pos += v11;
    v12 = *size == v11;
    *size -= v11;
    return v12;
  }
  else
  {
    DB_AsyncIWFileLoad::DirtyDiscError(owner, WaitForAsyncFail1, *(_DWORD *)this->m_readResult);
    return 0;
  }
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::SetupDecompressor
==============
*/
void DB_AsyncIWFileLoad::ReadBuffer::SetupDecompressor(DB_AsyncIWFileLoad::ReadBuffer *this, DB_AsyncIWFileLoad *owner, DB_ReadStream *stream)
{
  unsigned __int64 m_sizeLeft; 
  unsigned __int64 m_requestReadSize; 
  unsigned __int64 v8; 

  if ( this->m_readState != 1 || DB_AsyncIWFileLoad::ReadBuffer::WaitForAsyncCompletion(this, owner) )
  {
    if ( this->m_readState != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 872, ASSERT_TYPE_ASSERT, "(m_readState == DB_ReadState::ReadComplete)", (const char *)&queryFormat, "m_readState == DB_ReadState::ReadComplete") )
      __debugbreak();
    if ( !this->m_sizeLeft && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 873, ASSERT_TYPE_ASSERT, "(m_sizeLeft > 0)", (const char *)&queryFormat, "m_sizeLeft > 0") )
      __debugbreak();
    if ( this->m_requestReadSize < this->m_sizeLeft && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 874, ASSERT_TYPE_ASSERT, "(m_requestReadSize >= m_sizeLeft)", (const char *)&queryFormat, "m_requestReadSize >= m_sizeLeft") )
      __debugbreak();
    m_sizeLeft = this->m_sizeLeft;
    m_requestReadSize = this->m_requestReadSize;
    owner->m_sizePassedToInflator += m_sizeLeft;
    v8 = m_requestReadSize - m_sizeLeft;
    if ( owner->m_sizePassedToInflator > owner->m_sizeRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 879, ASSERT_TYPE_ASSERT, "(owner.m_sizePassedToInflator <= owner.m_sizeRead)", (const char *)&queryFormat, "owner.m_sizePassedToInflator <= owner.m_sizeRead") )
      __debugbreak();
    stream->avail_in = this->m_sizeLeft;
    stream->next_in = &this->m_buffer[v8];
    this->m_sizeLeft = 0i64;
    this->m_readState = 3;
  }
  else
  {
    DB_AsyncIWFileLoad::DirtyDiscError(owner, WaitForAsyncFail1, *(_DWORD *)this->m_readResult);
  }
}

/*
==============
DB_AsyncIWFileLoad::Shutdown
==============
*/
void DB_AsyncIWFileLoad::Shutdown(DB_AsyncIWFileLoad *this)
{
  unsigned int i; 
  DB_AsyncIWFileLoad::ReadBuffer **v3; 
  DB_AsyncIWFileLoad::ReadBuffer *v4; 
  DB_ReadState m_readState; 
  char v6; 
  unsigned __int8 *m_buffer; 
  DB_AuthLoadReader *m_reader; 
  unsigned __int64 m_committedMemorySize; 
  bool HasPendingLoadsAbovePriority; 
  __int64 v11; 
  ScopedCriticalSection v12; 

  if ( this->m_dbFile )
  {
    if ( this->m_fileSize )
    {
      if ( !this->m_bufferCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 248, ASSERT_TYPE_ASSERT, "( m_bufferCount ) > ( 0 )", "%s > %s\n\t%u, %u", "m_bufferCount", "0", 0, 0i64) )
        __debugbreak();
      ScopedCriticalSection::ScopedCriticalSection(&v12, CRITSECT_FAST_FILE_STREAM_HEAP, SCOPED_CRITSECT_NORMAL);
      for ( i = 0; i < this->m_bufferCount; ++i )
      {
        v3 = &this->m_readBuffers[i];
        v4 = *v3;
        m_readState = (*v3)->m_readState;
        if ( m_readState == 1 )
        {
          if ( !DB_AsyncIWFileLoad::ReadBuffer::WaitForAsyncCompletion(*v3, this) )
          {
            v6 = 0;
            goto LABEL_19;
          }
          if ( v4->m_readState != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 366, ASSERT_TYPE_ASSERT, "(GetReadState() == DB_ReadState::ReadComplete)", (const char *)&queryFormat, "GetReadState() == DB_ReadState::ReadComplete") )
            __debugbreak();
        }
        else if ( (unsigned int)(m_readState - 2) > 1 )
        {
          if ( m_readState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 382, ASSERT_TYPE_ASSERT, "(!IsActive())", (const char *)&queryFormat, "!IsActive()") )
            __debugbreak();
          goto LABEL_18;
        }
        v4->m_readState = None;
LABEL_18:
        v6 = 1;
LABEL_19:
        if ( v4->m_readState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 391, ASSERT_TYPE_ASSERT, "(!IsActive())", (const char *)&queryFormat, "!IsActive()") )
          __debugbreak();
        m_buffer = v4->m_buffer;
        if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 98, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
          __debugbreak();
        Stream_StreamerLoanHeap::Deallocate(&s_streamAllocator, m_buffer, 0x80000ui64);
        v4->m_buffer = NULL;
        if ( !v6 )
          DB_AsyncIWFileLoad::DirtyDiscError(this, ShutdownTerminateFail, *(_DWORD *)(*v3)->m_readResult);
      }
      m_reader = this->m_reader;
      if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 98, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
        __debugbreak();
      Stream_StreamerLoanHeap::Deallocate(&s_streamAllocator, (unsigned __int8 *)m_reader, 0x44900ui64);
      DB_DynamicHeap_Deallocate((unsigned __int8 *)this->m_readBuffers[0], 48i64 * this->m_bufferCount);
      m_committedMemorySize = this->m_committedMemorySize;
      if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 77, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
        __debugbreak();
      HasPendingLoadsAbovePriority = CL_TransientsMP_HasPendingLoadsAbovePriority(0);
      Stream_StreamerLoanHeap::Shrink(&s_streamAllocator, m_committedMemorySize, !HasPendingLoadsAbovePriority);
      this->m_bufferCount = 0;
      ScopedCriticalSection::~ScopedCriticalSection(&v12);
    }
    if ( this->m_bufferCount )
    {
      LODWORD(v11) = this->m_bufferCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 268, ASSERT_TYPE_ASSERT, "( m_bufferCount ) == ( 0 )", "%s == %s\n\t%u, %u", "m_bufferCount", "0", v11, 0i64) )
        __debugbreak();
    }
    this->m_dbFile = NULL;
  }
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::Shutdown
==============
*/
__int64 DB_AsyncIWFileLoad::ReadBuffer::Shutdown(DB_AsyncIWFileLoad::ReadBuffer *this, DB_AsyncIWFileLoad *owner)
{
  DB_ReadState m_readState; 
  unsigned __int8 v4; 
  __int64 result; 

  m_readState = this->m_readState;
  if ( m_readState != 1 )
  {
    if ( (unsigned int)(m_readState - 2) > 1 )
    {
      if ( m_readState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 382, ASSERT_TYPE_ASSERT, "(!IsActive())", (const char *)&queryFormat, "!IsActive()") )
        __debugbreak();
      goto LABEL_12;
    }
LABEL_11:
    this->m_readState = None;
LABEL_12:
    v4 = 1;
    goto LABEL_13;
  }
  if ( DB_AsyncIWFileLoad::ReadBuffer::WaitForAsyncCompletion(this, owner) )
  {
    if ( this->m_readState != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 366, ASSERT_TYPE_ASSERT, "(GetReadState() == DB_ReadState::ReadComplete)", (const char *)&queryFormat, "GetReadState() == DB_ReadState::ReadComplete") )
      __debugbreak();
    goto LABEL_11;
  }
  v4 = 0;
LABEL_13:
  if ( this->m_readState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 391, ASSERT_TYPE_ASSERT, "(!IsActive())", (const char *)&queryFormat, "!IsActive()") )
    __debugbreak();
  DB_DynamicHeap_Deallocate(this->m_buffer, 0x80000ui64);
  result = v4;
  this->m_buffer = NULL;
  return result;
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::Terminate
==============
*/
bool DB_AsyncIWFileLoad::ReadBuffer::Terminate(DB_AsyncIWFileLoad::ReadBuffer *this, DB_AsyncIWFileLoad *owner)
{
  DB_ReadState m_readState; 
  bool result; 

  m_readState = this->m_readState;
  if ( m_readState == 1 )
  {
    result = DB_AsyncIWFileLoad::ReadBuffer::WaitForAsyncCompletion(this, owner);
    if ( !result )
      return result;
    if ( this->m_readState != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 366, ASSERT_TYPE_ASSERT, "(GetReadState() == DB_ReadState::ReadComplete)", (const char *)&queryFormat, "GetReadState() == DB_ReadState::ReadComplete") )
      __debugbreak();
  }
  else if ( (unsigned int)(m_readState - 2) > 1 )
  {
    if ( m_readState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 382, ASSERT_TYPE_ASSERT, "(!IsActive())", (const char *)&queryFormat, "!IsActive()") )
    {
      __debugbreak();
      return 1;
    }
    return 1;
  }
  this->m_readState = None;
  return 1;
}

/*
==============
DB_AsyncIWFileLoad::WaitForAsyncCompletion
==============
*/
void DB_AsyncIWFileLoad::WaitForAsyncCompletion(DB_AsyncIWFileLoad *this)
{
  __int64 i; 
  DB_AsyncIWFileLoad::ReadBuffer *v3; 

  for ( i = 0i64; (unsigned int)i < this->m_bufferCount; i = (unsigned int)(i + 1) )
  {
    v3 = this->m_readBuffers[i];
    if ( v3->m_readState == 1 && !DB_AsyncIWFileLoad::ReadBuffer::WaitForAsyncCompletion(v3, this) )
      DB_AsyncIWFileLoad::DirtyDiscError(this, WaitForAsyncFail1, *(_DWORD *)this->m_readBuffers[i]->m_readResult);
  }
}

/*
==============
DB_AsyncIWFileLoad::ReadBuffer::WaitForAsyncCompletion
==============
*/
char DB_AsyncIWFileLoad::ReadBuffer::WaitForAsyncCompletion(DB_AsyncIWFileLoad::ReadBuffer *this, DB_AsyncIWFileLoad *owner)
{
  DB_ReadState m_readState; 
  __int64 v5; 

  m_readState = this->m_readState;
  if ( m_readState == 1 )
  {
    if ( !owner->m_dbFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 547, ASSERT_TYPE_ASSERT, "(owner.m_dbFile != nullptr)", (const char *)&queryFormat, "owner.m_dbFile != nullptr") )
      __debugbreak();
    if ( *(_DWORD *)owner->m_dbFile->dbFileHandle.fileID == -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 553, ASSERT_TYPE_ASSERT, "( ( owner.m_dbFile->dbFileHandle.fileID != FileStreamFileID::INVALID ) )", "( owner.m_dbFile->name ) = %s", owner->m_dbFile->name) )
      __debugbreak();
    ProfLoad_DB_Begin("wait for async read");
    while ( 1 )
    {
      if ( (((_BYTE)this + 44) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_readCompleted) )
        __debugbreak();
      if ( _InterlockedCompareExchange(&this->m_readCompleted, 0, 1) )
        break;
      Sys_YieldWorkerCmd();
    }
    ProfLoad_DB_End();
    v5 = *(unsigned int *)this->m_readResult;
    if ( (_DWORD)v5 == 8 )
      goto LABEL_17;
    if ( (_DWORD)v5 == 7 )
    {
      Com_Printf(10, "WaitForAsyncCompletion: FileStreamStatus::ENDOFFILE with %s\n", owner->m_dbFile->name);
LABEL_17:
      this->m_readState = 2;
      return 1;
    }
    Com_Printf(10, "FileStreamStatus error %d with %s\n", v5, owner->m_dbFile->name);
    return 0;
  }
  else
  {
    if ( m_readState != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_async_file_load.cpp", 589, ASSERT_TYPE_ASSERT, "( ( GetReadState() == DB_ReadState::ReadComplete ) )", "( GetReadState() ) = %u", this->m_readState) )
      __debugbreak();
    return 1;
  }
}

