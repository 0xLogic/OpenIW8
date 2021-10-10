/*
==============
CachedContentIOStreamDCache::Tell
==============
*/

bool __fastcall CachedContentIOStreamDCache::Tell(CachedContentIOStreamDCache *this, unsigned int *position)
{
  return ?Tell@CachedContentIOStreamDCache@@UEAA_NAEAI@Z(this, position);
}

/*
==============
CachedContentIOStreamDCache::Write
==============
*/

unsigned int __fastcall CachedContentIOStreamDCache::Write(CachedContentIOStreamDCache *this, unsigned __int8 *inData, unsigned int inSize)
{
  return ?Write@CachedContentIOStreamDCache@@UEAAIPEAEI@Z(this, inData, inSize);
}

/*
==============
CachedContentIOStreamDCache::~CachedContentIOStreamDCache
==============
*/

void __fastcall CachedContentIOStreamDCache::~CachedContentIOStreamDCache(CachedContentIOStreamDCache *this)
{
  ??1CachedContentIOStreamDCache@@UEAA@XZ(this);
}

/*
==============
CachedContentIOStreamDCache::Close
==============
*/

void __fastcall CachedContentIOStreamDCache::Close(CachedContentIOStreamDCache *this)
{
  ?Close@CachedContentIOStreamDCache@@UEAAXXZ(this);
}

/*
==============
CachedContentIOStreamDCache::Seek
==============
*/

bool __fastcall CachedContentIOStreamDCache::Seek(CachedContentIOStreamDCache *this, unsigned int offset, int origin)
{
  return ?Seek@CachedContentIOStreamDCache@@UEAA_NIH@Z(this, offset, origin);
}

/*
==============
CachedContentIOStreamCopy::PerformCopy
==============
*/

bool __fastcall CachedContentIOStreamCopy::PerformCopy(CachedContentIOStreamBase *fromStream, CachedContentIOStreamBase *toStream)
{
  return ?PerformCopy@CachedContentIOStreamCopy@@SA_NAEAVCachedContentIOStreamBase@@0@Z(fromStream, toStream);
}

/*
==============
CachedContentIOStreamDCache::GetErrorReportingContext
==============
*/

char *__fastcall CachedContentIOStreamDCache::GetErrorReportingContext(CachedContentIOStreamDCache *this)
{
  return ?GetErrorReportingContext@CachedContentIOStreamDCache@@AEAAPEADXZ(this);
}

/*
==============
CachedContentIOStreamDCache::Size
==============
*/

bool __fastcall CachedContentIOStreamDCache::Size(CachedContentIOStreamDCache *this, unsigned int *outSize)
{
  return ?Size@CachedContentIOStreamDCache@@UEAA_NAEAI@Z(this, outSize);
}

/*
==============
CachedContentIOStreamCopy::CachedContentIOStreamCopy
==============
*/

void __fastcall CachedContentIOStreamCopy::CachedContentIOStreamCopy(CachedContentIOStreamCopy *this)
{
  ??0CachedContentIOStreamCopy@@QEAA@XZ(this);
}

/*
==============
CachedContentIOStreamDCache::IsValid
==============
*/

bool __fastcall CachedContentIOStreamDCache::IsValid(CachedContentIOStreamDCache *this, CachedContentIOStreamBase::CCIOSMode forMode)
{
  return ?IsValid@CachedContentIOStreamDCache@@UEAA_NW4CCIOSMode@CachedContentIOStreamBase@@@Z(this, forMode);
}

/*
==============
CachedContentIOStreamCopy::PerformCopyOffsetSize
==============
*/

bool __fastcall CachedContentIOStreamCopy::PerformCopyOffsetSize(CachedContentIOStreamBase *fromStream, unsigned int offset, unsigned int size, CachedContentIOStreamBase *toStream)
{
  return ?PerformCopyOffsetSize@CachedContentIOStreamCopy@@SA_NAEAVCachedContentIOStreamBase@@II0@Z(fromStream, offset, size, toStream);
}

/*
==============
CachedContentIOStreamBase::DebugLog
==============
*/

void __fastcall CachedContentIOStreamBase::DebugLog(CachedContentIOStreamBase *this, const char *msg)
{
  ?DebugLog@CachedContentIOStreamBase@@IEAAXPEBD@Z(this, msg);
}

/*
==============
CachedContentIOStreamCopy::~CachedContentIOStreamCopy
==============
*/

void __fastcall CachedContentIOStreamCopy::~CachedContentIOStreamCopy(CachedContentIOStreamCopy *this)
{
  ??1CachedContentIOStreamCopy@@QEAA@XZ(this);
}

/*
==============
CachedContentIOStreamDCache::Read
==============
*/

unsigned int __fastcall CachedContentIOStreamDCache::Read(CachedContentIOStreamDCache *this, unsigned __int8 *outData, unsigned int bufferMaxSize)
{
  return ?Read@CachedContentIOStreamDCache@@UEAAIPEAEI@Z(this, outData, bufferMaxSize);
}

/*
==============
CachedContentIOStreamCopy::PerformCopyInternal
==============
*/

bool __fastcall CachedContentIOStreamCopy::PerformCopyInternal(CachedContentIOStreamBase *fromStream, unsigned int offset, unsigned int size, CachedContentIOStreamBase *toStream)
{
  return ?PerformCopyInternal@CachedContentIOStreamCopy@@CA_NAEAVCachedContentIOStreamBase@@II0@Z(fromStream, offset, size, toStream);
}

/*
==============
CachedContentIOStreamDCache::CachedContentIOStreamDCache
==============
*/

void __fastcall CachedContentIOStreamDCache::CachedContentIOStreamDCache(CachedContentIOStreamDCache *this, CachedContentIOStreamDCache::dcacheStreamFileSpecifier_t *fileSpecifier, CachedContentIOStreamBase::CCIOSMode mode)
{
  ??0CachedContentIOStreamDCache@@QEAA@PEAUdcacheStreamFileSpecifier_t@0@W4CCIOSMode@CachedContentIOStreamBase@@@Z(this, fileSpecifier, mode);
}

/*
==============
CachedContentIOStreamCopy::CachedContentIOStreamCopy
==============
*/
void CachedContentIOStreamCopy::CachedContentIOStreamCopy(CachedContentIOStreamCopy *this)
{
  ;
}

/*
==============
CachedContentIOStreamDCache::CachedContentIOStreamDCache
==============
*/
void CachedContentIOStreamDCache::CachedContentIOStreamDCache(CachedContentIOStreamDCache *this, CachedContentIOStreamDCache::dcacheStreamFileSpecifier_t *fileSpecifier, CachedContentIOStreamBase::CCIOSMode mode)
{
  Online_CachedContentStreamer *v6; 
  const char *v7; 
  Online_ErrorReporting *v8; 
  const char *v9; 
  Online_ErrorReporting *v10; 
  const char *v11; 
  Online_CachedContentStreamer *v12; 
  const char *v13; 
  Online_ErrorReporting *v14; 
  const char *v15; 
  Online_CachedContentStreamer *Instance; 
  const char *v17; 
  Online_ErrorReporting *InstancePtr; 
  const char *v19; 
  char *fileName; 
  char *fileNamea; 

  this->m_mode = CCIOSModeNone;
  this->__vftable = (CachedContentIOStreamDCache_vtbl *)&CachedContentIOStreamDCache::`vftable';
  *(_QWORD *)this->m_fileSpecifier.fileDetails.m_computedHashValue.hashBytes = 0i64;
  *(_QWORD *)&this->m_fileSpecifier.fileDetails.m_computedHashValue.hashBytes[8] = 0i64;
  *(_QWORD *)&this->m_fileSpecifier.fileDetails.m_computedHashValue.hashBytes[16] = 0i64;
  *(_QWORD *)&this->m_fileSpecifier.fileDetails.m_computedHashValue.hashBytes[24] = 0i64;
  if ( !fileSpecifier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentiostream.cpp", 319, ASSERT_TYPE_ASSERT, "(fileSpecifier)", (const char *)&queryFormat, "fileSpecifier") )
    __debugbreak();
  if ( mode == CCIOSModeRead )
  {
    if ( !DCache_IsCached(fileSpecifier->cacheType, fileSpecifier->fileDetails.m_fileID, fileSpecifier->fileDetails.m_location) )
    {
      Instance = Online_CachedContentStreamer::GetInstance();
      v17 = j_va("CachedContentIOStreamDCache:: Open for read failed as file is not currently cached. filename:%s, mode:%d\n", fileSpecifier->fileDetails.m_name, 1i64);
      OnlineSystem::DebugLog(Instance, v17);
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      LODWORD(fileName) = this->m_fileSpecifier.fileDetails.m_version;
      v19 = j_va("%d,%d,%d,%d,%zu,%s", (unsigned int)this->m_fileSpecifier.cacheType, (unsigned int)this->m_fileSpecifier.fileDetails.m_location, (unsigned int)this->m_fileSpecifier.fileDetails.m_size, fileName, this->m_fileSpecifier.fileDetails.m_fileID, this->m_fileSpecifier.fileDetails.m_name);
      Online_ErrorReporting::ReportError(InstancePtr, DODGE, v19);
      return;
    }
  }
  else
  {
    if ( mode != CCIOSModeWrite )
    {
      v6 = Online_CachedContentStreamer::GetInstance();
      v7 = j_va("CachedContentIOStreamDCache:: Init Failed for %s due to invalid mode %d\n", fileSpecifier->fileDetails.m_name, (unsigned int)mode);
      OnlineSystem::DebugLog(v6, v7);
      v8 = Online_ErrorReporting::GetInstancePtr();
      LODWORD(fileName) = this->m_fileSpecifier.fileDetails.m_version;
      v9 = j_va("%d,%d,%d,%d,%zu,%s", (unsigned int)this->m_fileSpecifier.cacheType, (unsigned int)this->m_fileSpecifier.fileDetails.m_location, (unsigned int)this->m_fileSpecifier.fileDetails.m_size, fileName, this->m_fileSpecifier.fileDetails.m_fileID, this->m_fileSpecifier.fileDetails.m_name);
      Online_ErrorReporting::ReportError(v8, (Online_Error_CAT_CCS_IOSTREAMS_t)4, v9);
      return;
    }
    if ( DCache_IsCached(fileSpecifier->cacheType, fileSpecifier->fileDetails.m_fileID, fileSpecifier->fileDetails.m_location) )
    {
      v10 = Online_ErrorReporting::GetInstancePtr();
      LODWORD(fileName) = this->m_fileSpecifier.fileDetails.m_version;
      v11 = j_va("%d,%d,%d,%d,%zu,%s", (unsigned int)this->m_fileSpecifier.cacheType, (unsigned int)this->m_fileSpecifier.fileDetails.m_location, (unsigned int)this->m_fileSpecifier.fileDetails.m_size, fileName, this->m_fileSpecifier.fileDetails.m_fileID, this->m_fileSpecifier.fileDetails.m_name);
      Online_ErrorReporting::ReportError(v10, (Online_Error_CAT_CCS_IOSTREAMS_t)256, v11);
      DCache_DeleteFromCache(fileSpecifier->cacheType, fileSpecifier->fileDetails.m_fileID, fileSpecifier->fileDetails.m_location);
    }
    if ( !DCache_WriteToCache(fileSpecifier->cacheType, fileSpecifier->fileDetails.m_fileID, fileSpecifier->fileDetails.m_location, fileSpecifier->fileDetails.m_originID, fileSpecifier->fileDetails.m_name, 128, fileSpecifier->fileDetails.m_version, fileSpecifier->fileDetails.m_serverCreateTime, fileSpecifier->fileDetails.m_serverModifiedTime, 1, fileSpecifier->fileDetails.m_size, NULL) )
    {
      v12 = Online_CachedContentStreamer::GetInstance();
      v13 = j_va("CachedContentIOStreamDCache:: Start stream failed. filename:%s, mode:%d\n", fileSpecifier->fileDetails.m_name, 2i64);
      OnlineSystem::DebugLog(v12, v13);
      v14 = Online_ErrorReporting::GetInstancePtr();
      LODWORD(fileNamea) = this->m_fileSpecifier.fileDetails.m_version;
      v15 = j_va("%d,%d,%d,%d,%zu,%s", (unsigned int)this->m_fileSpecifier.cacheType, (unsigned int)this->m_fileSpecifier.fileDetails.m_location, (unsigned int)this->m_fileSpecifier.fileDetails.m_size, fileNamea, this->m_fileSpecifier.fileDetails.m_fileID, this->m_fileSpecifier.fileDetails.m_name);
      Online_ErrorReporting::ReportError(v14, COUNT, v15);
      return;
    }
  }
  this->m_mode = mode;
  this->m_currentOffset = 0;
  *(_OWORD *)&this->m_fileSpecifier.cacheType = *(_OWORD *)&fileSpecifier->cacheType;
  *(_OWORD *)&this->m_fileSpecifier.fileDetails.m_location = *(_OWORD *)&fileSpecifier->fileDetails.m_location;
  *(_OWORD *)&this->m_fileSpecifier.fileDetails.m_name[12] = *(_OWORD *)&fileSpecifier->fileDetails.m_name[12];
  *(_OWORD *)&this->m_fileSpecifier.fileDetails.m_name[28] = *(_OWORD *)&fileSpecifier->fileDetails.m_name[28];
  *(_OWORD *)&this->m_fileSpecifier.fileDetails.m_name[44] = *(_OWORD *)&fileSpecifier->fileDetails.m_name[44];
  *(_OWORD *)&this->m_fileSpecifier.fileDetails.m_name[60] = *(_OWORD *)&fileSpecifier->fileDetails.m_name[60];
  *(_OWORD *)&this->m_fileSpecifier.fileDetails.m_name[76] = *(_OWORD *)&fileSpecifier->fileDetails.m_name[76];
  *(_OWORD *)&this->m_fileSpecifier.fileDetails.m_name[92] = *(_OWORD *)&fileSpecifier->fileDetails.m_name[92];
  *(_OWORD *)&this->m_fileSpecifier.fileDetails.m_name[108] = *(_OWORD *)&fileSpecifier->fileDetails.m_name[108];
  *(_OWORD *)&this->m_fileSpecifier.fileDetails.m_name[124] = *(_OWORD *)&fileSpecifier->fileDetails.m_name[124];
  *(_OWORD *)&this->m_fileSpecifier.fileDetails.m_computedHashValue.hashBytes[8] = *(_OWORD *)&fileSpecifier->fileDetails.m_computedHashValue.hashBytes[8];
  *(_OWORD *)&this->m_fileSpecifier.fileDetails.m_computedHashValue.hashBytes[24] = *(_OWORD *)&fileSpecifier->fileDetails.m_computedHashValue.hashBytes[24];
  *(_OWORD *)&this->m_fileSpecifier.fileDetails.m_serverCreateTime = *(_OWORD *)&fileSpecifier->fileDetails.m_serverCreateTime;
}

/*
==============
CachedContentIOStreamCopy::~CachedContentIOStreamCopy
==============
*/
void CachedContentIOStreamCopy::~CachedContentIOStreamCopy(CachedContentIOStreamCopy *this)
{
  ;
}

/*
==============
CachedContentIOStreamDCache::~CachedContentIOStreamDCache
==============
*/
void CachedContentIOStreamDCache::~CachedContentIOStreamDCache(CachedContentIOStreamDCache *this)
{
  __int32 v2; 
  Online_CachedContentStreamer *Instance; 
  const char *v4; 
  Online_ErrorReporting *InstancePtr; 
  const char *v6; 
  __int64 createTime; 

  this->__vftable = (CachedContentIOStreamDCache_vtbl *)&CachedContentIOStreamDCache::`vftable';
  v2 = this->m_mode - 1;
  if ( !v2 )
    goto LABEL_5;
  if ( v2 == 1 )
  {
    if ( !DCache_StreamToCacheComplete(this->m_fileSpecifier.cacheType, this->m_fileSpecifier.fileDetails.m_fileID, this->m_fileSpecifier.fileDetails.m_location, this->m_fileSpecifier.fileDetails.m_size, this->m_fileSpecifier.fileDetails.m_serverCreateTime, this->m_fileSpecifier.fileDetails.m_serverModifiedTime) )
    {
      Instance = Online_CachedContentStreamer::GetInstance();
      v4 = j_va("CachedContentIOStreamDCache:Close: Stream complete error: filename:%s\n", this->m_fileSpecifier.fileDetails.m_name);
      OnlineSystem::DebugLog(Instance, v4);
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      LODWORD(createTime) = this->m_fileSpecifier.fileDetails.m_version;
      v6 = j_va("%d,%d,%d,%d,%zu,%s", (unsigned int)this->m_fileSpecifier.cacheType, (unsigned int)this->m_fileSpecifier.fileDetails.m_location, (unsigned int)this->m_fileSpecifier.fileDetails.m_size, createTime, this->m_fileSpecifier.fileDetails.m_fileID, this->m_fileSpecifier.fileDetails.m_name);
      Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_IOSTREAMS_t)64, v6);
      goto LABEL_6;
    }
LABEL_5:
    this->m_mode = CCIOSModeNone;
    this->m_currentOffset = 0;
    memset_0(&this->m_fileSpecifier, 0, sizeof(this->m_fileSpecifier));
  }
LABEL_6:
  this->__vftable = (CachedContentIOStreamDCache_vtbl *)&CachedContentIOStreamBase::`vftable';
}

/*
==============
CachedContentIOStreamDCache::Close
==============
*/
void CachedContentIOStreamDCache::Close(CachedContentIOStreamDCache *this)
{
  __int32 v2; 
  Online_CachedContentStreamer *Instance; 
  const char *v4; 
  Online_ErrorReporting *InstancePtr; 
  const char *v6; 
  __int64 createTime; 

  v2 = this->m_mode - 1;
  if ( !v2 )
    goto LABEL_5;
  if ( v2 != 1 )
    return;
  if ( DCache_StreamToCacheComplete(this->m_fileSpecifier.cacheType, this->m_fileSpecifier.fileDetails.m_fileID, this->m_fileSpecifier.fileDetails.m_location, this->m_fileSpecifier.fileDetails.m_size, this->m_fileSpecifier.fileDetails.m_serverCreateTime, this->m_fileSpecifier.fileDetails.m_serverModifiedTime) )
  {
LABEL_5:
    this->m_mode = CCIOSModeNone;
    this->m_currentOffset = 0;
    memset_0(&this->m_fileSpecifier, 0, sizeof(this->m_fileSpecifier));
  }
  else
  {
    Instance = Online_CachedContentStreamer::GetInstance();
    v4 = j_va("CachedContentIOStreamDCache:Close: Stream complete error: filename:%s\n", this->m_fileSpecifier.fileDetails.m_name);
    OnlineSystem::DebugLog(Instance, v4);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    LODWORD(createTime) = this->m_fileSpecifier.fileDetails.m_version;
    v6 = j_va("%d,%d,%d,%d,%zu,%s", (unsigned int)this->m_fileSpecifier.cacheType, (unsigned int)this->m_fileSpecifier.fileDetails.m_location, (unsigned int)this->m_fileSpecifier.fileDetails.m_size, createTime, this->m_fileSpecifier.fileDetails.m_fileID, this->m_fileSpecifier.fileDetails.m_name);
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_IOSTREAMS_t)64, v6);
  }
}

/*
==============
CachedContentIOStreamBase::DebugLog
==============
*/
void CachedContentIOStreamBase::DebugLog(CachedContentIOStreamBase *this, const char *msg)
{
  Online_CachedContentStreamer *Instance; 
  const char *v4; 

  Instance = Online_CachedContentStreamer::GetInstance();
  v4 = j_va("cciostream: %s", msg);
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || Instance->ShowLogOutput(Instance) )
    Com_Printf(25, "%s: %s", Instance->m_name, v4);
}

/*
==============
CachedContentIOStreamDCache::GetErrorReportingContext
==============
*/
char *CachedContentIOStreamDCache::GetErrorReportingContext(CachedContentIOStreamDCache *this)
{
  unsigned int m_version; 

  m_version = this->m_fileSpecifier.fileDetails.m_version;
  return j_va("%d,%d,%d,%d,%zu,%s", (unsigned int)this->m_fileSpecifier.cacheType, (unsigned int)this->m_fileSpecifier.fileDetails.m_location, (unsigned int)this->m_fileSpecifier.fileDetails.m_size, m_version, this->m_fileSpecifier.fileDetails.m_fileID, this->m_fileSpecifier.fileDetails.m_name);
}

/*
==============
CachedContentIOStreamDCache::IsValid
==============
*/
bool CachedContentIOStreamDCache::IsValid(CachedContentIOStreamDCache *this, CachedContentIOStreamBase::CCIOSMode forMode)
{
  return forMode == this->m_mode && DCache_IsCached(this->m_fileSpecifier.cacheType, this->m_fileSpecifier.fileDetails.m_fileID, this->m_fileSpecifier.fileDetails.m_location);
}

/*
==============
CachedContentIOStreamCopy::PerformCopy
==============
*/
bool CachedContentIOStreamCopy::PerformCopy(CachedContentIOStreamBase *fromStream, CachedContentIOStreamBase *toStream)
{
  const char *v4; 
  const char *v6; 
  const char *v7; 
  unsigned int size; 

  if ( fromStream->IsValid(fromStream, CCIOSModeRead) )
  {
    if ( toStream->IsValid(toStream, CCIOSModeWrite) )
    {
      if ( fromStream->Size(fromStream, &size) )
      {
        return CachedContentIOStreamCopy::PerformCopyInternal(fromStream, 0, size, toStream);
      }
      else
      {
        v7 = j_va("CachedContentIOStreamCopy::PerformCopy: failed to get fileSize.\n");
        CachedContentIOStreamBase::DebugLog(toStream, v7);
        return 0;
      }
    }
    else
    {
      v6 = j_va("CachedContentIOStreamCopy::Invalid output mode %d\n", (unsigned int)toStream->m_mode);
      CachedContentIOStreamBase::DebugLog(toStream, v6);
      return 0;
    }
  }
  else
  {
    v4 = j_va("CachedContentIOStreamCopy::Invalid input mode %d\n", (unsigned int)fromStream->m_mode);
    CachedContentIOStreamBase::DebugLog(fromStream, v4);
    return 0;
  }
}

/*
==============
CachedContentIOStreamCopy::PerformCopyInternal
==============
*/
__int64 CachedContentIOStreamCopy::PerformCopyInternal(CachedContentIOStreamBase *fromStream, unsigned int offset, unsigned int size, CachedContentIOStreamBase *toStream)
{
  unsigned __int8 *m_ptr; 
  const char *v9; 
  unsigned __int8 v10; 
  unsigned int i; 
  unsigned int v12; 
  __int64 v13; 
  Mem_LargeLocal v15; 

  Mem_LargeLocal::Mem_LargeLocal(&v15, 0x20000ui64, "cachedIOStreamDataBlock_t copyDataBuffer");
  m_ptr = (unsigned __int8 *)v15.m_ptr;
  if ( fromStream->Seek(fromStream, offset, 0) )
  {
    for ( i = 0; i < size; i += toStream->Write(toStream, m_ptr, v13) )
    {
      v12 = fromStream->Read(fromStream, m_ptr, 0x20000i64);
      v13 = size - i;
      if ( (unsigned int)v13 > v12 )
        v13 = v12;
    }
    v10 = 1;
  }
  else
  {
    v9 = j_va("PerformCopyInternal:: Seek failed for offset %d\n", offset);
    CachedContentIOStreamBase::DebugLog(fromStream, v9);
    v10 = 0;
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v15);
  return v10;
}

/*
==============
CachedContentIOStreamCopy::PerformCopyOffsetSize
==============
*/
bool CachedContentIOStreamCopy::PerformCopyOffsetSize(CachedContentIOStreamBase *fromStream, unsigned int offset, unsigned int size, CachedContentIOStreamBase *toStream)
{
  const char *v8; 
  const char *v10; 
  const char *v11; 
  unsigned int v12; 

  if ( fromStream->IsValid(fromStream, CCIOSModeRead) )
  {
    if ( toStream->IsValid(toStream, CCIOSModeWrite) )
    {
      if ( fromStream->Size(fromStream, &v12) && offset + size <= v12 )
      {
        return CachedContentIOStreamCopy::PerformCopyInternal(fromStream, offset, size, toStream);
      }
      else
      {
        v11 = j_va("CachedContentIOStreamCopy::PerformCopyOffsetSize: failed to get fileSize.\n");
        CachedContentIOStreamBase::DebugLog(toStream, v11);
        return 0;
      }
    }
    else
    {
      v10 = j_va("CachedContentIOStreamCopy::PerformCopyOffsetSize: Invalid output mode %d\n", (unsigned int)toStream->m_mode);
      CachedContentIOStreamBase::DebugLog(toStream, v10);
      return 0;
    }
  }
  else
  {
    v8 = j_va("CachedContentIOStreamCopy::PerformCopyOffsetSize: Invalid input mode %d\n", (unsigned int)fromStream->m_mode);
    CachedContentIOStreamBase::DebugLog(fromStream, v8);
    return 0;
  }
}

/*
==============
CachedContentIOStreamDCache::Read
==============
*/
__int64 CachedContentIOStreamDCache::Read(CachedContentIOStreamDCache *this, unsigned __int8 *outData, unsigned int bufferMaxSize)
{
  Online_CachedContentStreamer *v6; 
  const char *v7; 
  Online_ErrorReporting *v8; 
  const char *v9; 
  __int64 result; 
  unsigned int m_currentOffset; 
  Online_CachedContentStreamer *Instance; 
  const char *v13; 
  Online_ErrorReporting *InstancePtr; 
  const char *ErrorReportingContext; 
  char *fmt; 
  int numBytesRead; 

  if ( !outData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentiostream.cpp", 378, ASSERT_TYPE_ASSERT, "(outData)", (const char *)&queryFormat, "outData") )
    __debugbreak();
  if ( this->m_mode == CCIOSModeRead )
  {
    m_currentOffset = this->m_currentOffset;
    if ( m_currentOffset < this->m_fileSpecifier.fileDetails.m_size )
    {
      if ( DCache_ReadFromCacheByOffset(this->m_fileSpecifier.cacheType, this->m_fileSpecifier.fileDetails.m_fileID, this->m_fileSpecifier.fileDetails.m_location, m_currentOffset, bufferMaxSize, outData, &numBytesRead, 1) )
      {
        result = (unsigned int)numBytesRead;
        this->m_currentOffset += numBytesRead;
        return result;
      }
      Instance = Online_CachedContentStreamer::GetInstance();
      v13 = j_va("CachedContentIOStreamDCache::Read error. filename:%s, offset:%d, bufferMaxSize:%d\n", this->m_fileSpecifier.fileDetails.m_name, this->m_currentOffset, bufferMaxSize);
      OnlineSystem::DebugLog(Instance, v13);
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      ErrorReportingContext = CachedContentIOStreamDCache::GetErrorReportingContext(this);
      Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_IOSTREAMS_t)16, ErrorReportingContext);
    }
    return 0i64;
  }
  v6 = Online_CachedContentStreamer::GetInstance();
  v7 = j_va("CachedContentIOStreamDCache::Read mode error. filename:%s, mode:%d\n", this->m_fileSpecifier.fileDetails.m_name, (unsigned int)this->m_mode);
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || v6->ShowLogOutput(v6) )
    Com_Printf(25, "%s: %s", v6->m_name, v7);
  v8 = Online_ErrorReporting::GetInstancePtr();
  LODWORD(fmt) = this->m_fileSpecifier.fileDetails.m_version;
  v9 = j_va("%d,%d,%d,%d,%zu,%s", (unsigned int)this->m_fileSpecifier.cacheType, (unsigned int)this->m_fileSpecifier.fileDetails.m_location, (unsigned int)this->m_fileSpecifier.fileDetails.m_size, fmt, this->m_fileSpecifier.fileDetails.m_fileID, this->m_fileSpecifier.fileDetails.m_name);
  Online_ErrorReporting::ReportError(v8, (Online_Error_CAT_CCS_IOSTREAMS_t)8, v9);
  return 0i64;
}

/*
==============
CachedContentIOStreamDCache::Seek
==============
*/
char CachedContentIOStreamDCache::Seek(CachedContentIOStreamDCache *this, unsigned int offset, int origin)
{
  Online_CachedContentStreamer *Instance; 
  const char *v6; 

  if ( origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentiostream.cpp", 493, ASSERT_TYPE_ASSERT, "(origin == 0)", (const char *)&queryFormat, "origin == 0") )
    __debugbreak();
  if ( this->m_mode == CCIOSModeNone )
  {
    Instance = Online_CachedContentStreamer::GetInstance();
    v6 = j_va("CachedContentIOStreamDCache::Seek: Invalid mode %d\n", (unsigned int)this->m_mode);
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || Instance->ShowLogOutput(Instance) )
      Com_Printf(25, "%s: %s", Instance->m_name, v6);
    return 0;
  }
  if ( offset >= this->m_fileSpecifier.fileDetails.m_size )
    return 0;
  this->m_currentOffset = offset;
  return 1;
}

/*
==============
CachedContentIOStreamDCache::Size
==============
*/
char CachedContentIOStreamDCache::Size(CachedContentIOStreamDCache *this, unsigned int *outSize)
{
  Online_CachedContentStreamer *Instance; 
  const char *v4; 

  if ( this->m_mode )
  {
    *outSize = this->m_fileSpecifier.fileDetails.m_size;
    return 1;
  }
  else
  {
    Instance = Online_CachedContentStreamer::GetInstance();
    v4 = j_va("CachedContentIOStreamDCache::Size: Invalid mode %d\n", (unsigned int)this->m_mode);
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || Instance->ShowLogOutput(Instance) )
      Com_Printf(25, "%s: %s", Instance->m_name, v4);
    return 0;
  }
}

/*
==============
CachedContentIOStreamDCache::Tell
==============
*/
char CachedContentIOStreamDCache::Tell(CachedContentIOStreamDCache *this, unsigned int *position)
{
  Online_CachedContentStreamer *Instance; 
  const char *v4; 

  if ( this->m_mode )
  {
    *position = this->m_currentOffset;
    return 1;
  }
  else
  {
    Instance = Online_CachedContentStreamer::GetInstance();
    v4 = j_va("CachedContentIOStreamDCache::Tell: Invalid mode %d\n", (unsigned int)this->m_mode);
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || Instance->ShowLogOutput(Instance) )
      Com_Printf(25, "%s: %s", Instance->m_name, v4);
    return 0;
  }
}

/*
==============
CachedContentIOStreamDCache::Write
==============
*/
int CachedContentIOStreamDCache::Write(CachedContentIOStreamDCache *this, unsigned __int8 *inData, unsigned int inSize)
{
  Online_CachedContentStreamer *Instance; 
  const char *v7; 
  Online_ErrorReporting *InstancePtr; 
  const char *v9; 
  int result; 
  char *fmt; 

  if ( !inData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentiostream.cpp", 413, ASSERT_TYPE_ASSERT, "(inData)", (const char *)&queryFormat, "inData") )
    __debugbreak();
  if ( this->m_mode == CCIOSModeWrite )
  {
    result = DCache_StreamToCache(this->m_fileSpecifier.cacheType, this->m_fileSpecifier.fileDetails.m_fileID, this->m_fileSpecifier.fileDetails.m_location, this->m_currentOffset, inSize, inData);
    this->m_currentOffset += result;
  }
  else
  {
    Instance = Online_CachedContentStreamer::GetInstance();
    v7 = j_va("CachedContentIOStreamDCache::Write mode error. filename:%s, mode:%d\n", this->m_fileSpecifier.fileDetails.m_name, (unsigned int)this->m_mode);
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || Instance->ShowLogOutput(Instance) )
      Com_Printf(25, "%s: %s", Instance->m_name, v7);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    LODWORD(fmt) = this->m_fileSpecifier.fileDetails.m_version;
    v9 = j_va("%d,%d,%d,%d,%zu,%s", (unsigned int)this->m_fileSpecifier.cacheType, (unsigned int)this->m_fileSpecifier.fileDetails.m_location, (unsigned int)this->m_fileSpecifier.fileDetails.m_size, fmt, this->m_fileSpecifier.fileDetails.m_fileID, this->m_fileSpecifier.fileDetails.m_name);
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_IOSTREAMS_t)32, v9);
    return 0;
  }
  return result;
}

