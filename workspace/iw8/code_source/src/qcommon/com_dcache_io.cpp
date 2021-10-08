/*
==============
DCache_IO_ReadFromCache
==============
*/

bool __fastcall DCache_IO_ReadFromCache(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int length, unsigned __int8 *buffer)
{
  return ?DCache_IO_ReadFromCache@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@HPEAE@Z(cacheType, fileID, location, length, buffer);
}

/*
==============
DCache_IO_DebugIsChecksumValid
==============
*/

bool __fastcall DCache_IO_DebugIsChecksumValid(dcacheType_t cacheType, int blockIndex)
{
  return ?DCache_IO_DebugIsChecksumValid@@YA_NW4dcacheType_t@@H@Z(cacheType, blockIndex);
}

/*
==============
DCache_IO_StreamToCache
==============
*/

int __fastcall DCache_IO_StreamToCache(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int offset, int length, unsigned __int8 *buffer)
{
  return ?DCache_IO_StreamToCache@@YAHW4dcacheType_t@@_KW4dcacheLocation_t@@HHPEAE@Z(cacheType, fileID, location, offset, length, buffer);
}

/*
==============
DCache_IO_Init
==============
*/

bool __fastcall DCache_IO_Init(bool purgeCache)
{
  return ?DCache_IO_Init@@YA_N_N@Z(purgeCache);
}

/*
==============
DCache_IO_ReadFromCacheByOffset
==============
*/

bool __fastcall DCache_IO_ReadFromCacheByOffset(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int startOffset, int endOffset, unsigned __int8 *buffer, int *numBytesRead, bool validateChecksum)
{
  return ?DCache_IO_ReadFromCacheByOffset@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@HHPEAEPEAH_N@Z(cacheType, fileID, location, startOffset, endOffset, buffer, numBytesRead, validateChecksum);
}

/*
==============
DCache_IO_SerializeTOC
==============
*/

bool __fastcall DCache_IO_SerializeTOC(dcacheType_t cacheType, dcacheTOC_t *toc)
{
  return ?DCache_IO_SerializeTOC@@YA_NW4dcacheType_t@@PEAUdcacheTOC_t@@@Z(cacheType, toc);
}

/*
==============
DCache_IO_ValidateDataFileHandle
==============
*/

bool __fastcall DCache_IO_ValidateDataFileHandle(dcacheType_t cacheType, bool generateError)
{
  return ?DCache_IO_ValidateDataFileHandle@@YA_NW4dcacheType_t@@_N@Z(cacheType, generateError);
}

/*
==============
DCache_IO_ValidateTOCFileHandle
==============
*/

bool __fastcall DCache_IO_ValidateTOCFileHandle(dcacheType_t cacheType, bool generateError)
{
  return ?DCache_IO_ValidateTOCFileHandle@@YA_NW4dcacheType_t@@_N@Z(cacheType, generateError);
}

/*
==============
DCache_IO_Shutdown
==============
*/

void DCache_IO_Shutdown(void)
{
  ?DCache_IO_Shutdown@@YAXXZ();
}

/*
==============
DCache_IO_WriteToCache
==============
*/

bool __fastcall DCache_IO_WriteToCache(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int length, unsigned __int8 *buffer)
{
  return ?DCache_IO_WriteToCache@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@HPEAE@Z(cacheType, fileID, location, length, buffer);
}

/*
==============
DCache_IO_StreamToCacheComplete
==============
*/

bool __fastcall DCache_IO_StreamToCacheComplete(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int finalSize, unsigned int createTime, unsigned int modifiedTime)
{
  return ?DCache_IO_StreamToCacheComplete@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@HII@Z(cacheType, fileID, location, finalSize, createTime, modifiedTime);
}

/*
==============
DCache_IO_CalculateHash
==============
*/

bool __fastcall DCache_IO_CalculateHash(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, cccHashValueSHA256_t *outHash)
{
  return ?DCache_IO_CalculateHash@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@PEAUcccHashValueSHA256_t@@@Z(cacheType, fileID, location, outHash);
}

/*
==============
CalculateBlockChecksum
==============
*/
__int64 CalculateBlockChecksum(dcacheType_t cacheType, const unsigned __int8 *buffer, int byteCount)
{
  __int64 v3; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 

  v3 = byteCount;
  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 500, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", cacheType, 2) )
    __debugbreak();
  if ( (int)v3 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 501, ASSERT_TYPE_ASSERT, "( byteCount ) > ( 0 )", "%s > %s\n\t%i, %i", "byteCount", "0", v3, 0i64) )
    __debugbreak();
  if ( (int)v3 > 0x20000 )
  {
    LODWORD(v10) = 0x20000;
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 502, ASSERT_TYPE_ASSERT, "( byteCount ) <= ( ( 128 * 1024 ) )", "%s <= %s\n\t%i, %i", "byteCount", "DCACHE_BLOCK_SIZE", v9, v10) )
      __debugbreak();
  }
  if ( (int)v3 <= 0 )
    return 0i64;
  v5 = -1;
  v6 = v3;
  do
  {
    v7 = *buffer++;
    v5 = (v5 >> 8) ^ g_crc32Table[v7 ^ (unsigned __int8)v5];
    --v6;
  }
  while ( v6 );
  return ~v5;
}

/*
==============
DCache_IO_CalculateHash
==============
*/
char DCache_IO_CalculateHash(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, cccHashValueSHA256_t *outHash)
{
  unsigned __int8 *BlockBuffer; 
  dcacheTOC_t *TOC; 
  dcacheTOC_t *v10; 
  int m_genericConfig; 
  CachedContentCrypto *Instance; 
  Online_ErrorReporting *InstancePtr; 
  Online_Error_CAT_DCACHE_IO_t v14; 
  int v15; 
  int v16; 
  int m_size; 
  int Block; 
  signed int v19; 
  CachedContentCrypto *v20; 
  unsigned int v21; 
  CachedContentCrypto *v22; 
  __int64 v24; 
  __int64 v25; 
  int index; 

  if ( !outHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 971, ASSERT_TYPE_ASSERT, "(outHash)", (const char *)&queryFormat, "outHash") )
    __debugbreak();
  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT )
  {
    LODWORD(v24) = cacheType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 972, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", v24, 2) )
      __debugbreak();
  }
  BlockBuffer = DCache_IO_GetBlockBuffer(DCACHE_BLOCK_READ);
  TOC = DCache_TOC_GetTOC(cacheType);
  v10 = TOC;
  if ( TOC )
    m_genericConfig = TOC->m_additionalData.m_genericConfig;
  else
    LOBYTE(m_genericConfig) = 0;
  if ( DCache_TOC_GetIndex(cacheType, fileID, location, &index) )
  {
    Instance = CachedContentCrypto::GetInstance();
    if ( CachedContentCrypto::Hash_SHA256Init(Instance) )
    {
      v15 = index;
      v16 = 0;
      m_size = v10->m_fileInfo[index].m_details.m_size;
      while ( 1 )
      {
        if ( DCache_TOC_IsBitSet(cacheType, v15, v16) )
        {
          memset_0(BlockBuffer, 0, 0x20000ui64);
          Block = DCache_IO_ReadBlock(cacheType, v16, BlockBuffer, CHECKSUM_READ_CHECK);
          v19 = Block;
          if ( Block <= 0 )
          {
            LODWORD(v25) = Block;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1002, ASSERT_TYPE_ASSERT, "( bytesRead ) > ( 0 )", "%s > %s\n\t%i, %i", "bytesRead", "0", v25, 0i64) )
              __debugbreak();
          }
          if ( m_size <= 0 )
          {
            LODWORD(v25) = m_size;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1003, ASSERT_TYPE_ASSERT, "( fileSizeRemaining ) > ( 0 )", "%s > %s\n\t%i, %i", "fileSizeRemaining", "0", v25, 0i64) )
              __debugbreak();
          }
          v20 = CachedContentCrypto::GetInstance();
          v21 = v19;
          if ( m_size < v19 )
            v21 = m_size;
          if ( !CachedContentCrypto::Hash_SHA256Process(v20, BlockBuffer, v21) )
          {
            InstancePtr = Online_ErrorReporting::GetInstancePtr();
            v14 = 0x10000;
            goto LABEL_33;
          }
          m_size -= v19;
          if ( (m_genericConfig & 1) != 0 && m_size <= 0 )
            break;
        }
        if ( ++v16 >= 2152 )
          break;
        v15 = index;
      }
      v22 = CachedContentCrypto::GetInstance();
      if ( CachedContentCrypto::Hash_SHA256Done(v22, outHash) )
        return 1;
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      v14 = 0x20000;
    }
    else
    {
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      v14 = 0x8000;
    }
  }
  else
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    v14 = 0x40000;
  }
LABEL_33:
  Online_ErrorReporting::ReportError(InstancePtr, v14, NULL);
  return 0;
}

/*
==============
DCache_IO_CreateFile
==============
*/
__int64 DCache_IO_CreateFile(dcacheType_t cacheType, const char *fileName, int fileSize, fileHandle_t *handle)
{
  unsigned int v7; 
  HSTRING v8; 
  HSTRING v9; 
  HSTRING v10; 
  int ActivationFactoryByPCWSTR; 
  HSTRING v12; 
  int v13; 
  __int64 v14; 
  HSTRING v15; 
  int v16; 
  void *v17; 
  HSTRING v18; 
  __int64 v19; 
  int v20; 
  int v21; 
  HSTRING v22; 
  int v23; 
  int v24; 
  const wchar_t *StringRawBuffer_0; 
  Online_ErrorReporting *v26; 
  __int64 File2; 
  Online_ErrorReporting *InstancePtr; 
  void *ppActivationFactory; 
  __int64 v31; 
  Platform::Guid pGuid; 
  HSTRING v33; 
  HSTRING v34; 
  HSTRING v35; 
  HSTRING v36; 
  HSTRING newString; 
  const char *v38; 
  __int64 v39; 
  __int64 v40; 
  char dest[256]; 
  char MultiByteStr[256]; 
  wchar_t WideCharStr[256]; 

  v39 = -2i64;
  v38 = fileName;
  v7 = 2;
  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 122, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", cacheType, 2) )
    __debugbreak();
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 174, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
    __debugbreak();
  v8 = NULL;
  v35 = NULL;
  v9 = NULL;
  v36 = NULL;
  v10 = NULL;
  v34 = NULL;
  if ( cacheType != DCACHE_TYPE_PERSISTENT )
  {
    Com_sprintf<256>((char (*)[256])dest, "T:\\%s", fileName);
LABEL_53:
    MultiByteToWideChar(0xFDE9u, 0, dest, -1, WideCharStr, 256);
    handle->handle.handle = -1i64;
    File2 = CreateFile2(WideCharStr, 3221225472i64, 0i64, 1i64, 0i64);
    if ( ((File2 + 1) & 0xFFFFFFFFFFFFFFFEui64) != 0 || (File2 = CreateFile2(WideCharStr, 3221225472i64, 0i64, 3i64, 0i64), v7 = 1, (unsigned __int64)(File2 - 1) <= 0xFFFFFFFFFFFFFFFDui64) )
    {
      handle->handle.handle = File2;
      WindowsDeleteString_0(v10);
      if ( v9 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 16i64))(v9);
      if ( v8 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16i64))(v8);
      return v7;
    }
    else
    {
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(InstancePtr, DODGE, NULL);
      WindowsDeleteString_0(v10);
      if ( v9 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 16i64))(v9);
      if ( v8 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16i64))(v8);
      return 0i64;
    }
  }
  pGuid.__vftable = (Platform::Object_vtbl *)0x45E3E8435612147Bi64;
  *(_DWORD *)&pGuid.__d = 369547412;
  *(_DWORD *)&pGuid.__h = 395197598;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Storage.ApplicationData", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v12 = NULL;
  v31 = 0i64;
  v13 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, &v31);
  if ( v13 < 0 )
    __abi_WinRTraiseException(v13);
  v14 = v31;
  v15 = (HSTRING)v31;
  if ( v31 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8i64))(v31);
    v14 = v31;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
  v33 = v15;
  if ( v15 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 8i64))(v15);
  v33 = v15;
  if ( v15 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 16i64))(v15);
  if ( v15 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 8i64))(v15);
  if ( v15 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 16i64))(v15);
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  v33 = v15;
  if ( v15 )
  {
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 8i64))(v15);
    v8 = v15;
    v35 = v15;
  }
  if ( v15 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 16i64))(v15);
  ppActivationFactory = NULL;
  v16 = (*(__int64 (__fastcall **)(HSTRING, void **))(*(_QWORD *)v8 + 48i64))(v8, &ppActivationFactory);
  if ( v16 < 0 )
    __abi_WinRTraiseException(v16);
  v17 = ppActivationFactory;
  v18 = (HSTRING)ppActivationFactory;
  if ( ppActivationFactory )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 8i64))(ppActivationFactory);
    v17 = ppActivationFactory;
  }
  if ( v17 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16i64))(v17);
  v33 = v18;
  if ( v18 )
  {
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v18 + 8i64))(v18);
    v9 = v18;
    v36 = v18;
  }
  if ( v18 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v18 + 16i64))(v18);
  v19 = 0i64;
  v31 = 0i64;
  if ( v9 )
  {
    v20 = (**(__int64 (__fastcall ***)(HSTRING, void *, __int64 *))v9)(v9, &_uuidof__AUIStorageItem_Storage_Windows__, &v31);
    if ( v20 < 0 )
      __abi_WinRTraiseException(v20);
    v19 = v31;
  }
  v40 = v19;
  ppActivationFactory = NULL;
  v21 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v19 + 56i64))(v19, &ppActivationFactory);
  if ( v21 < 0 )
    __abi_WinRTraiseException(v21);
  v22 = (HSTRING)ppActivationFactory;
  if ( ppActivationFactory )
  {
    v23 = WindowsDuplicateString_0((HSTRING)ppActivationFactory, &newString);
    if ( v23 < 0 )
      __abi_WinRTraiseException(v23);
    v12 = newString;
    v22 = (HSTRING)ppActivationFactory;
  }
  WindowsDeleteString_0(v22);
  pGuid.__vftable = (Platform::Object_vtbl *)v12;
  if ( v12 )
  {
    v34 = NULL;
    v24 = WindowsDuplicateString_0(v12, &v33);
    if ( v24 < 0 )
      __abi_WinRTraiseException(v24);
    v10 = v33;
    v34 = v33;
  }
  WindowsDeleteString_0(v12);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16i64))(v19);
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v10, NULL);
  if ( WideCharToMultiByte(0xFDE9u, 0, StringRawBuffer_0, -1, MultiByteStr, 256, NULL, NULL) )
  {
    Com_sprintf<256>((char (*)[256])dest, "%s\\%s", MultiByteStr, v38);
    goto LABEL_53;
  }
  v26 = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(v26, COUNT, NULL);
  WindowsDeleteString_0(v10);
  if ( v9 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 16i64))(v9);
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16i64))(v8);
  return 0i64;
}

/*
==============
DCache_IO_DebugIsChecksumValid
==============
*/
bool DCache_IO_DebugIsChecksumValid(dcacheType_t cacheType, int blockIndex)
{
  __int64 v2; 
  unsigned __int8 *BlockBuffer; 
  unsigned int Bytes; 

  v2 = cacheType;
  BlockBuffer = DCache_IO_GetBlockBuffer(DCACHE_BLOCK_READ);
  memset_0(BlockBuffer, 0, 0x20000ui64);
  Bytes = DCache_IO_ReadBytes(s_dcacheFileHandle[v2], blockIndex << 17, 0x20000, BlockBuffer);
  return IsChecksumValid((dcacheType_t)v2, blockIndex, BlockBuffer, Bytes);
}

/*
==============
DCache_IO_GetBlockBuffer
==============
*/
unsigned __int8 *DCache_IO_GetBlockBuffer(const BlockBufferType type)
{
  __int64 v1; 
  ThreadContext CurrentThreadContext; 
  ThreadContext v4; 

  v1 = type;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( CurrentThreadContext == THREAD_CONTEXT_DATABASE )
    return s_dbDcacheBlockBuf[v1];
  if ( CurrentThreadContext == THREAD_CONTEXT_FILE_STREAM )
    return s_fsDcacheBlockBuf[v1];
  if ( CurrentThreadContext )
  {
    v4 = CurrentThreadContext;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 75, ASSERT_TYPE_ASSERT, "( currentThread ) == ( THREAD_CONTEXT_MAIN )", "%s == %s\n\t%i, %i", "currentThread", "THREAD_CONTEXT_MAIN", v4, 0i64) )
      __debugbreak();
  }
  return s_mainDcacheBlockBuf[v1];
}

/*
==============
DCache_IO_GetBlockIndexForOffset
==============
*/
__int64 DCache_IO_GetBlockIndexForOffset(dcacheType_t cacheType, int fileIndex, int offset)
{
  int v6; 
  int v7; 
  int i; 
  Online_ErrorReporting *InstancePtr; 
  __int64 v11; 
  int v13; 

  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT )
  {
    v13 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 663, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", cacheType, v13) )
      __debugbreak();
  }
  v6 = offset / 0x20000;
  v7 = 0;
  for ( i = 0; i < 2152; ++i )
  {
    if ( DCache_TOC_IsBitSet(cacheType, fileIndex, i) )
    {
      if ( v7 == v6 )
        return (unsigned int)i;
      ++v7;
    }
  }
  LODWORD(v11) = cacheType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 680, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "dcache[%d]: Reached end of blocks and could not fit an offset.", v11) )
    __debugbreak();
  InstancePtr = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_IO_t)16, NULL);
  return 0i64;
}

/*
==============
DCache_IO_Init
==============
*/
__int64 DCache_IO_Init(bool purgeCache)
{
  int v1; 
  __int64 v2; 
  unsigned __int8 v4; 
  Online_ErrorReporting *InstancePtr; 
  const char *v6; 
  Online_Error_CAT_DCACHE_IO_t v7; 
  int File; 
  dcacheTOC_t *v9; 
  unsigned int Bytes; 
  Online_ErrorReporting *v11; 
  const char *v12; 
  char v13; 
  unsigned __int16 *p_m_versionMajor; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  Online_ErrorReporting *v22; 
  const char *v23; 
  Online_Error_CAT_DCACHE_IO_t v24; 
  unsigned __int16 m_versionMajor; 
  bool v27; 
  Online_ErrorReporting *v28; 
  const char *v29; 
  dcacheTOC_t *TOC; 
  char *fmt; 
  __int64 v32; 
  __int64 v33; 
  char dest[64]; 

  v1 = 0;
  v2 = 0i64;
  v4 = 1;
  do
  {
    if ( !DCache_TOC_GetTOC((dcacheType_t)v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1447, ASSERT_TYPE_ASSERT, "(DCache_TOC_GetTOC( cacheType ))", (const char *)&queryFormat, "DCache_TOC_GetTOC( cacheType )") )
      __debugbreak();
    if ( !DCache_TOC_GetTOC((dcacheType_t)v1) )
    {
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      v6 = j_va("%d", (unsigned int)v1);
      v7 = 0x20000000;
      goto LABEL_25;
    }
    Com_sprintf<64>((char (*)[64])dest, "%s%d.%s", "toc", (unsigned int)v1, "dcache");
    File = DCache_IO_CreateFile((dcacheType_t)v1, dest, 984192, &s_dcacheTOCFileHandle[v2]);
    if ( !File )
    {
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      v6 = j_va("%d,%zu", (unsigned int)v1, 0xF0480ui64);
      v7 = 0x40000000;
      goto LABEL_25;
    }
    if ( File != 1 )
    {
      DCache_TOC_FlushTOC((dcacheType_t)v1, 0);
      TOC = DCache_TOC_GetTOC((dcacheType_t)v1);
      DCache_IO_SerializeTOC((dcacheType_t)v1, TOC);
      goto LABEL_23;
    }
    v9 = DCache_TOC_GetTOC((dcacheType_t)v1);
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v33) = 2;
      LODWORD(v32) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1315, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    Bytes = DCache_IO_ReadBytes(s_dcacheTOCFileHandle[v2], 0, 984192, (unsigned __int8 *)v9);
    if ( Bytes == 984192 )
    {
      v13 = 1;
    }
    else
    {
      v11 = Online_ErrorReporting::GetInstancePtr();
      v12 = j_va("%d,%d,%zu", (unsigned int)v1, Bytes, 0xF0480ui64);
      Online_ErrorReporting::ReportError(v11, (Online_Error_CAT_DCACHE_IO_t)0x8000000, v12);
      v13 = 0;
    }
    if ( purgeCache )
      goto LABEL_33;
    if ( !v13 )
    {
      v28 = Online_ErrorReporting::GetInstancePtr();
      v29 = j_va("%d", (unsigned int)v1);
      Online_ErrorReporting::ReportError(v28, MOVEMENT, v29);
LABEL_33:
      DCache_TOC_FlushTOC((dcacheType_t)v1, 0);
      DCache_IO_SerializeTOC((dcacheType_t)v1, v9);
      goto LABEL_23;
    }
    p_m_versionMajor = &v9->m_versionMajor;
    v15 = -1;
    v16 = 246047i64;
    do
    {
      v17 = *(unsigned __int8 *)p_m_versionMajor;
      p_m_versionMajor += 2;
      v18 = (v15 >> 8) ^ g_crc32Table[v17 ^ (unsigned __int8)v15];
      v19 = (v18 >> 8) ^ g_crc32Table[*((unsigned __int8 *)p_m_versionMajor - 3) ^ (unsigned __int64)(unsigned __int8)v18];
      v20 = (v19 >> 8) ^ g_crc32Table[*((unsigned __int8 *)p_m_versionMajor - 2) ^ (unsigned __int64)(unsigned __int8)v19];
      v15 = (v20 >> 8) ^ g_crc32Table[*((unsigned __int8 *)p_m_versionMajor - 1) ^ (unsigned __int64)(unsigned __int8)v20];
      --v16;
    }
    while ( v16 );
    v21 = ~v15;
    if ( v21 == v9->m_tocChecksum )
    {
      m_versionMajor = v9->m_versionMajor;
      v27 = m_versionMajor == 11;
      if ( m_versionMajor == 11 )
      {
        if ( v9->m_versionMinor == 9 )
          goto LABEL_23;
        v27 = 1;
      }
      DCache_TOC_FlushTOC((dcacheType_t)v1, v27);
      DCache_IO_SerializeTOC((dcacheType_t)v1, v9);
      LODWORD(v32) = 9;
      v22 = Online_ErrorReporting::GetInstancePtr();
      LODWORD(fmt) = v9->m_versionMinor;
      v23 = j_va("%d,%d,%d,%d,%d", (unsigned int)v1, v9->m_versionMajor, 11i64, fmt, v32);
      v24 = 0x80000000;
    }
    else
    {
      DCache_TOC_FlushTOC((dcacheType_t)v1, 0);
      DCache_IO_SerializeTOC((dcacheType_t)v1, v9);
      v22 = Online_ErrorReporting::GetInstancePtr();
      v23 = j_va("%d,%u,%u", (unsigned int)v1, v21, v9->m_tocChecksum);
      v24 = MOVEMENT;
    }
    Online_ErrorReporting::ReportError(v22, v24, v23);
LABEL_23:
    Com_sprintf<64>((char (*)[64])dest, "%s%d.%s", "data", (unsigned int)v1, "dcache");
    if ( (unsigned int)DCache_IO_CreateFile((dcacheType_t)v1, dest, 282066944, &s_dcacheFileHandle[v2]) )
      goto LABEL_26;
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    v6 = j_va("%d,%d", (unsigned int)v1, 282066944i64);
    v7 = MOVEMENT;
LABEL_25:
    Online_ErrorReporting::ReportError(InstancePtr, v7, v6);
    v4 = 0;
LABEL_26:
    ++v1;
    ++v2;
  }
  while ( v1 < 2 );
  return v4;
}

/*
==============
DCache_IO_ReadBlock
==============
*/
__int64 DCache_IO_ReadBlock(dcacheType_t cacheType, int blockIndex, unsigned __int8 *outBuffer, DCacheChecksumConfig checksumState)
{
  __int64 v4; 
  unsigned int Bytes; 
  dcacheTOC_t *TOC; 
  unsigned int m_corruptionConfig; 
  dcacheTOC_t *v11; 
  int m_checksumConfig; 
  const char *v13; 
  Online_ErrorReporting *InstancePtr; 
  char *fmt; 

  v4 = cacheType;
  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 538, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", cacheType, 2) )
    __debugbreak();
  if ( !DCache_TOC_IsBlockReserved((dcacheType_t)v4, blockIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 544, ASSERT_TYPE_ASSERT, "(DCache_TOC_IsBlockReserved( cacheType, blockIndex ))", (const char *)&queryFormat, "DCache_TOC_IsBlockReserved( cacheType, blockIndex )") )
    __debugbreak();
  Bytes = DCache_IO_ReadBytes(s_dcacheFileHandle[v4], blockIndex << 17, 0x20000, outBuffer);
  TOC = DCache_TOC_GetTOC((dcacheType_t)v4);
  m_corruptionConfig = 0;
  v11 = TOC;
  if ( TOC )
    m_checksumConfig = TOC->m_additionalData.m_checksumConfig;
  else
    m_checksumConfig = 0;
  if ( (m_checksumConfig & checksumState) != 0 && !IsChecksumValid((dcacheType_t)v4, blockIndex, outBuffer, Bytes) )
  {
    if ( v11 )
      m_corruptionConfig = v11->m_additionalData.m_corruptionConfig;
    DCache_OnCorruption((dcacheType_t)v4, CORRUPTION_READ_OFFSET);
    LODWORD(fmt) = checksumState;
    v13 = j_va("On DCache corruption: %d, %d, %d, %d", (unsigned int)v4, (unsigned int)blockIndex, m_corruptionConfig, fmt);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_IO_t)8, v13);
    if ( (m_corruptionConfig & 3) != 0 )
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143FFF518, 6385i64, v13);
  }
  return Bytes;
}

/*
==============
DCache_IO_ReadBlockWithOffset
==============
*/
__int64 DCache_IO_ReadBlockWithOffset(dcacheType_t cacheType, int blockIndex, int offset, unsigned __int8 *data, int length, DCacheChecksumConfig checksumState)
{
  __int64 v6; 
  int v10; 
  unsigned __int8 *BlockBuffer; 
  int Block; 
  int v13; 
  int v16; 
  int v17; 

  v6 = offset;
  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT )
  {
    v16 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 640, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", cacheType, v16) )
      __debugbreak();
  }
  if ( !DCache_TOC_IsBlockReserved(cacheType, blockIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 646, ASSERT_TYPE_ASSERT, "(DCache_TOC_IsBlockReserved( cacheType, blockIndex ))", (const char *)&queryFormat, "DCache_TOC_IsBlockReserved( cacheType, blockIndex )") )
    __debugbreak();
  v10 = length;
  if ( length > 0x20000 - (int)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 647, ASSERT_TYPE_ASSERT, "(length <= ( ( 128 * 1024 ) - offset ))", (const char *)&queryFormat, "length <= ( DCACHE_BLOCK_SIZE - offset )") )
    __debugbreak();
  BlockBuffer = DCache_IO_GetBlockBuffer(DCACHE_BLOCK_READ);
  memset_0(BlockBuffer, 0, 0x20000ui64);
  Block = DCache_IO_ReadBlock(cacheType, blockIndex, BlockBuffer, checksumState);
  v13 = Block;
  if ( Block <= 0 )
  {
    v17 = Block;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 654, ASSERT_TYPE_ASSERT, "( bytesRead ) > ( 0 )", "%s > %s\n\t%i, %i", "bytesRead", "0", v17, 0i64) )
      __debugbreak();
  }
  if ( v13 < length )
    v10 = v13;
  memcpy_0(data, &BlockBuffer[v6], v10);
  return (unsigned int)v10;
}

/*
==============
DCache_IO_ReadBytes
==============
*/
__int64 DCache_IO_ReadBytes(fileHandle_t handle, int offset, int length, unsigned __int8 *buffer)
{
  LARGE_INTEGER v4; 
  Online_ErrorReporting *InstancePtr; 
  Online_ErrorReporting *v9; 
  __int64 result; 
  Online_ErrorReporting *v11; 
  unsigned int NumberOfBytesRead; 

  v4.QuadPart = offset;
  if ( !length )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, NULL);
  }
  NumberOfBytesRead = 0;
  if ( handle.handle.handle == -1 || !SetFilePointerEx((HANDLE)handle.handle.handle, v4, NULL, 0) || !ReadFile((HANDLE)handle.handle.handle, buffer, length, &NumberOfBytesRead, NULL) )
  {
    v9 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v9, MOVEMENT, NULL);
  }
  result = NumberOfBytesRead;
  if ( !NumberOfBytesRead )
  {
    v11 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v11, MOVEMENT, NULL);
    return NumberOfBytesRead;
  }
  return result;
}

/*
==============
DCache_IO_ReadFromCache
==============
*/
char DCache_IO_ReadFromCache(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int length, unsigned __int8 *buffer)
{
  int FileIndex; 
  __int64 v10; 
  Online_ErrorReporting *InstancePtr; 
  Online_ErrorReporting *v13; 
  Online_ErrorReporting *v14; 
  int v15; 
  Online_Error_CAT_DCACHE_IO_t v16; 
  int v17; 
  int v18; 
  int BlockIndexForOffset; 
  int v20; 
  int BlockWithOffset; 
  Online_ErrorReporting *v22; 
  Online_ErrorReporting *v23; 
  __int64 checksumState; 
  __int64 v25; 

  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1238, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", cacheType, 2) )
    __debugbreak();
  FileIndex = DCache_GetFileIndex(cacheType, fileID, location);
  v10 = FileIndex;
  if ( FileIndex == -1 )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_IO_t)0x800000, NULL);
    return 0;
  }
  if ( buffer )
  {
    if ( length > 0 )
    {
      if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT )
      {
        LODWORD(v25) = 2;
        LODWORD(checksumState) = cacheType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 829, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", checksumState, v25) )
          __debugbreak();
      }
      v15 = length / 0x20000 + 1;
      if ( ((((length >> 31) & 0x1FFFF) + length) & 0x1FFFF) == ((length >> 31) & 0x1FFFF) )
        v15 = length / 0x20000;
      if ( DCache_TOC_GetTOC(cacheType)->m_fileInfo[v10].m_details.m_size == length )
      {
        if ( DCache_TOC_GetBlocksUsed(cacheType, v10) == v15 )
        {
          v17 = 0;
          v18 = 0;
          if ( v15 <= 0 )
            return 1;
          while ( 1 )
          {
            BlockIndexForOffset = DCache_IO_GetBlockIndexForOffset(cacheType, v10, v17);
            if ( !DCache_TOC_IsBitSet(cacheType, v10, BlockIndexForOffset) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 866, ASSERT_TYPE_ASSERT, "(DCache_TOC_IsBitSet( cacheType, fileIndex, blockIndex ))", (const char *)&queryFormat, "DCache_TOC_IsBitSet( cacheType, fileIndex, blockIndex )") )
              __debugbreak();
            v20 = 0x20000;
            if ( length < 0x20000 )
              v20 = length;
            BlockWithOffset = DCache_IO_ReadBlockWithOffset(cacheType, BlockIndexForOffset, 0, &buffer[v17], v20, CHECKSUM_READ_OFFSET_CHECK);
            if ( !BlockWithOffset )
              break;
            v17 += BlockWithOffset;
            length -= BlockWithOffset;
            if ( ++v18 >= v15 )
              return 1;
          }
          v16 = 2048;
        }
        else
        {
          v16 = 1024;
        }
      }
      else
      {
        v16 = 512;
      }
      v22 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v22, v16, NULL);
      v23 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v23, (Online_Error_CAT_DCACHE_IO_t)0x4000000, NULL);
      return 0;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1263, ASSERT_TYPE_ASSERT, "(length > 0)", (const char *)&queryFormat, "length > 0") )
        __debugbreak();
      v14 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v14, (Online_Error_CAT_DCACHE_IO_t)0x2000000, NULL);
      return 0;
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1252, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
      __debugbreak();
    v13 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v13, (Online_Error_CAT_DCACHE_IO_t)0x1000000, NULL);
    return 0;
  }
}

/*
==============
DCache_IO_ReadFromCacheByOffset
==============
*/
char DCache_IO_ReadFromCacheByOffset(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int startOffset, int endOffset, unsigned __int8 *buffer, int *numBytesRead, bool validateChecksum)
{
  int v12; 
  int v13; 
  Online_ErrorReporting *v14; 
  int FileIndex; 
  int v17; 
  Online_ErrorReporting *InstancePtr; 
  int m_size; 
  Online_ErrorReporting *v20; 
  int BlockIndexForOffset; 
  int v22; 
  int BlockWithOffset; 
  int v24; 
  int v25; 
  bool v26; 
  int v27; 
  int v28; 
  int v29; 
  int Block; 
  int v31; 
  int v32; 
  int v33; 
  Online_ErrorReporting *v34; 
  __int64 v35; 
  __int64 v36; 
  int endOffseta; 

  v12 = startOffset % 0x20000;
  v13 = endOffset - startOffset;
  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1105, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", cacheType, 2) )
    __debugbreak();
  if ( buffer )
  {
    FileIndex = DCache_GetFileIndex(cacheType, fileID, location);
    v17 = FileIndex;
    if ( FileIndex == -1 )
    {
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_IO_t)0x100000, NULL);
      return 0;
    }
    m_size = DCache_TOC_GetTOC(cacheType)->m_fileInfo[FileIndex].m_details.m_size;
    if ( endOffset <= m_size )
    {
      if ( v13 <= 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1144, ASSERT_TYPE_ASSERT, "( size ) > ( 0 )", "%s > %s\n\t%i, %i", "size", "0", endOffset - startOffset, 0i64) )
          __debugbreak();
        if ( !v13 )
        {
          v20 = Online_ErrorReporting::GetInstancePtr();
          Online_ErrorReporting::ReportError(v20, (Online_Error_CAT_DCACHE_IO_t)0x400000, NULL);
        }
      }
    }
    else
    {
      v13 = m_size - startOffset;
      if ( m_size - startOffset <= 0 )
      {
        *numBytesRead = 0;
        return 0;
      }
    }
    BlockIndexForOffset = DCache_IO_GetBlockIndexForOffset(cacheType, v17, startOffset);
    if ( !DCache_TOC_IsBitSet(cacheType, v17, BlockIndexForOffset) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1157, ASSERT_TYPE_ASSERT, "(DCache_TOC_IsBitSet( cacheType, fileIndex, startBlockIndex ))", (const char *)&queryFormat, "DCache_TOC_IsBitSet( cacheType, fileIndex, startBlockIndex )") )
      __debugbreak();
    v22 = 0x20000 - v12;
    if ( v13 < 0x20000 - v12 )
      v22 = v13;
    BlockWithOffset = DCache_IO_ReadBlockWithOffset(cacheType, BlockIndexForOffset, v12, buffer, v22, (DCacheChecksumConfig)validateChecksum);
    if ( BlockWithOffset <= 0 )
    {
      LODWORD(v35) = BlockWithOffset;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1165, ASSERT_TYPE_ASSERT, "( bytesRead ) > ( 0 )", "%s > %s\n\t%i, %i", "bytesRead", "0", v35, 0i64) )
        __debugbreak();
    }
    v24 = v13 - BlockWithOffset;
    v25 = BlockWithOffset;
    v26 = v24 == 0;
    if ( v24 > 0 )
    {
      v27 = 0;
      v28 = v24 / 0x20000 + 1;
      if ( !(v24 % 0x20000) )
        v28 = v24 / 0x20000;
      endOffseta = v28;
      if ( v28 > 0 )
      {
        do
        {
          if ( v24 <= 0 )
          {
            LODWORD(v35) = v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1183, ASSERT_TYPE_ASSERT, "( size ) > ( 0 )", "%s > %s\n\t%i, %i", "size", "0", v35, 0i64) )
              __debugbreak();
          }
          if ( v24 < 0x20000 )
            break;
          v29 = DCache_IO_GetBlockIndexForOffset(cacheType, v17, v25 + startOffset);
          if ( !DCache_TOC_IsBitSet(cacheType, v17, v29) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1188, ASSERT_TYPE_ASSERT, "(DCache_TOC_IsBitSet( cacheType, fileIndex, blockIndex ))", (const char *)&queryFormat, "DCache_TOC_IsBitSet( cacheType, fileIndex, blockIndex )") )
            __debugbreak();
          Block = DCache_IO_ReadBlock(cacheType, v29, &buffer[BlockWithOffset], (DCacheChecksumConfig)(2 * validateChecksum));
          v31 = Block;
          if ( Block <= 0 )
          {
            LODWORD(v35) = Block;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1202, ASSERT_TYPE_ASSERT, "( bytesRead ) > ( 0 )", "%s > %s\n\t%i, %i", "bytesRead", "0", v35, 0i64) )
              __debugbreak();
          }
          BlockWithOffset += v31;
          v24 -= v31;
          v25 += v31;
          ++v27;
        }
        while ( v27 < endOffseta );
      }
      v26 = v24 == 0;
      if ( v24 > 0 )
      {
        if ( v24 >= 0x20000 )
        {
          LODWORD(v36) = 0x20000;
          LODWORD(v35) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1212, ASSERT_TYPE_ASSERT, "( size ) < ( ( 128 * 1024 ) )", "%s < %s\n\t%i, %i", "size", "DCACHE_BLOCK_SIZE", v35, v36) )
            __debugbreak();
        }
        v32 = DCache_IO_GetBlockIndexForOffset(cacheType, v17, v25 + startOffset);
        if ( !DCache_TOC_IsBitSet(cacheType, v17, v32) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1215, ASSERT_TYPE_ASSERT, "(DCache_TOC_IsBitSet( cacheType, fileIndex, lastBlockIndex ))", (const char *)&queryFormat, "DCache_TOC_IsBitSet( cacheType, fileIndex, lastBlockIndex )") )
          __debugbreak();
        v33 = DCache_IO_ReadBlockWithOffset(cacheType, v32, 0, &buffer[BlockWithOffset], v24, (DCacheChecksumConfig)validateChecksum);
        v24 -= v33;
        v25 += v33;
        v26 = v24 == 0;
      }
    }
    if ( !v26 )
    {
      LODWORD(v35) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1224, ASSERT_TYPE_ASSERT, "( size ) == ( 0 )", "%s == %s\n\t%i, %i", "size", "0", v35, 0i64) )
        __debugbreak();
      v34 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v34, MOVEMENT, NULL);
    }
    *numBytesRead = v25;
    return 1;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1106, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
      __debugbreak();
    v14 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v14, (Online_Error_CAT_DCACHE_IO_t)0x200000, NULL);
    return 0;
  }
}

/*
==============
DCache_IO_SerializeTOC
==============
*/
char DCache_IO_SerializeTOC(dcacheType_t cacheType, dcacheTOC_t *toc)
{
  __int64 v2; 
  unsigned __int16 *p_m_versionMajor; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  Online_ErrorReporting *InstancePtr; 
  const char *v13; 

  v2 = cacheType;
  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1339, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", cacheType, 2) )
    __debugbreak();
  p_m_versionMajor = &toc->m_versionMajor;
  v5 = -1;
  v6 = 246047i64;
  do
  {
    v7 = *(unsigned __int8 *)p_m_versionMajor;
    p_m_versionMajor += 2;
    v8 = (v5 >> 8) ^ g_crc32Table[v7 ^ (unsigned __int8)v5];
    v9 = (v8 >> 8) ^ g_crc32Table[*((unsigned __int8 *)p_m_versionMajor - 3) ^ (unsigned __int64)(unsigned __int8)v8];
    v10 = (v9 >> 8) ^ g_crc32Table[*((unsigned __int8 *)p_m_versionMajor - 2) ^ (unsigned __int64)(unsigned __int8)v9];
    v5 = (v10 >> 8) ^ g_crc32Table[*((unsigned __int8 *)p_m_versionMajor - 1) ^ (unsigned __int64)(unsigned __int8)v10];
    --v6;
  }
  while ( v6 );
  toc->m_tocChecksum = ~v5;
  v11 = DCache_IO_WriteBytes(s_dcacheTOCFileHandle[v2], 0, 984192, (unsigned __int8 *)toc);
  if ( v11 == 984192 )
    return 1;
  InstancePtr = Online_ErrorReporting::GetInstancePtr();
  v13 = j_va("%d,%d,%zu", (unsigned int)v2, v11, 0xF0480ui64);
  Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_IO_t)0x10000000, v13);
  return 0;
}

/*
==============
DCache_IO_Shutdown
==============
*/
void DCache_IO_Shutdown(void)
{
  __int64 v0; 
  __int64 v1; 
  __int64 v2; 

  v0 = 0i64;
  v1 = 0i64;
  v2 = 2i64;
  do
  {
    if ( s_dcacheTOCFileHandle[v1].handle.handle != -1 )
    {
      FS_FCloseFile(s_dcacheTOCFileHandle[v0]);
      s_dcacheTOCFileHandle[v1].handle.handle = -1i64;
    }
    if ( s_dcacheFileHandle[v1].handle.handle != -1 )
    {
      FS_FCloseFile(s_dcacheFileHandle[v0]);
      s_dcacheFileHandle[v1].handle.handle = -1i64;
    }
    ++v0;
    ++v1;
    --v2;
  }
  while ( v2 );
}

/*
==============
DCache_IO_StreamFileData
==============
*/
__int64 DCache_IO_StreamFileData(dcacheType_t cacheType, int fileIndex, int offset, int size, unsigned __int8 *data)
{
  __int64 v5; 
  int v9; 
  int BlockIndexForOffset; 
  int v11; 
  int v12; 
  int v13; 
  unsigned int v14; 
  bool v15; 
  int v16; 
  int i; 
  int v18; 
  int v19; 
  int v20; 
  Online_ErrorReporting *InstancePtr; 
  int v24; 

  v5 = cacheType;
  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT )
  {
    v24 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 692, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", cacheType, v24) )
      __debugbreak();
  }
  v9 = offset % 0x20000;
  BlockIndexForOffset = DCache_IO_GetBlockIndexForOffset((dcacheType_t)v5, fileIndex, offset);
  if ( !DCache_TOC_IsBitSet((dcacheType_t)v5, fileIndex, BlockIndexForOffset) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 700, ASSERT_TYPE_ASSERT, "(DCache_TOC_IsBitSet( cacheType, fileIndex, startBlockIndex ))", (const char *)&queryFormat, "DCache_TOC_IsBitSet( cacheType, fileIndex, startBlockIndex )") )
    __debugbreak();
  v11 = 0x20000 - v9;
  if ( size < 0x20000 - v9 )
    v11 = size;
  if ( !DCache_TOC_IsBlockReserved((dcacheType_t)v5, BlockIndexForOffset) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 631, ASSERT_TYPE_ASSERT, "(DCache_TOC_IsBlockReserved( cacheType, blockIndex ))", (const char *)&queryFormat, "DCache_TOC_IsBlockReserved( cacheType, blockIndex )") )
    __debugbreak();
  if ( v11 > 0x20000 - v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 632, ASSERT_TYPE_ASSERT, "(length <= ( ( 128 * 1024 ) - offset ))", (const char *)&queryFormat, "length <= ( DCACHE_BLOCK_SIZE - offset )") )
    __debugbreak();
  v12 = DCache_IO_WriteBytes(s_dcacheFileHandle[v5], v9 + (BlockIndexForOffset << 17), v11, data);
  if ( v12 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 707, ASSERT_TYPE_ASSERT, "(bytesWritten > 0)", (const char *)&queryFormat, "bytesWritten > 0") )
    __debugbreak();
  v13 = size - v12;
  v14 = v12;
  v15 = v13 == 0;
  if ( v13 > 0 )
  {
    v16 = v13 / 0x20000 + 1;
    if ( ((((v13 >> 31) & 0x1FFFF) + v13) & 0x1FFFF) == ((v13 >> 31) & 0x1FFFF) )
      v16 = v13 / 0x20000;
    for ( i = 0; i < v16; ++i )
    {
      if ( v13 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 725, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
        __debugbreak();
      v18 = DCache_IO_GetBlockIndexForOffset((dcacheType_t)v5, fileIndex, v14 + offset);
      if ( !DCache_TOC_IsBitSet((dcacheType_t)v5, fileIndex, v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 728, ASSERT_TYPE_ASSERT, "(DCache_TOC_IsBitSet( cacheType, fileIndex, blockIndex ))", (const char *)&queryFormat, "DCache_TOC_IsBitSet( cacheType, fileIndex, blockIndex )") )
        __debugbreak();
      v19 = 0x20000;
      if ( v13 < 0x20000 )
        v19 = v13;
      v20 = DCache_IO_WriteBlock((dcacheType_t)v5, v18, &data[v12], v19, 0);
      if ( v20 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 736, ASSERT_TYPE_ASSERT, "(blockBytesWritten > 0)", (const char *)&queryFormat, "blockBytesWritten > 0") )
        __debugbreak();
      v12 += v20;
      v13 -= v20;
      v14 += v20;
    }
    v15 = v13 == 0;
  }
  if ( !v15 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 744, ASSERT_TYPE_ASSERT, "(size == 0)", (const char *)&queryFormat, "size == 0") )
      __debugbreak();
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_IO_t)32, NULL);
  }
  return v14;
}

/*
==============
DCache_IO_StreamToCache
==============
*/
__int64 DCache_IO_StreamToCache(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int offset, int length, unsigned __int8 *buffer)
{
  int FileIndex; 
  Online_ErrorReporting *InstancePtr; 
  int v14; 

  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT )
  {
    v14 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 913, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", cacheType, v14) )
      __debugbreak();
  }
  FileIndex = DCache_GetFileIndex(cacheType, fileID, location);
  if ( FileIndex != -1 )
    return DCache_IO_StreamFileData(cacheType, FileIndex, offset, length, buffer);
  InstancePtr = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_IO_t)0x2000, NULL);
  return 0i64;
}

/*
==============
DCache_IO_StreamToCacheComplete
==============
*/
char DCache_IO_StreamToCacheComplete(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int finalSize, unsigned int createTime, unsigned int modifiedTime)
{
  dcacheLocation_t v7; 
  __int64 FileIndex; 
  dcacheTOC_t *v11; 
  dcacheTOC_t *v12; 
  Online_ErrorReporting *InstancePtr; 
  char *v15; 
  dcacheTOC_t *v16; 
  int v17; 
  int v18; 
  int m_size; 
  int v20; 
  Online_ErrorReporting *v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  dcacheTOC_t *toc; 
  int index; 
  dcacheLocation_t locationa; 

  locationa = location;
  v7 = location;
  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1057, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", cacheType, 2) )
    __debugbreak();
  FileIndex = DCache_GetFileIndex(cacheType, fileID, v7);
  v11 = DCache_TOC_GetTOC(cacheType);
  toc = v11;
  v12 = v11;
  if ( (_DWORD)FileIndex == -1 )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_IO_t)0x80000, NULL);
    return 0;
  }
  else
  {
    v15 = (char *)v11 + 472 * FileIndex;
    *((_DWORD *)v15 + 54) = createTime;
    *((_DWORD *)v15 + 55) = modifiedTime;
    *((_DWORD *)v15 + 52) = finalSize;
    v15[228] = 0;
    if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT )
    {
      LODWORD(v23) = 2;
      LODWORD(v22) = cacheType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 935, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    if ( DCache_TOC_GetIndex(cacheType, fileID, v7, &index) )
    {
      v16 = DCache_TOC_GetTOC(cacheType);
      v17 = index;
      v18 = 0;
      m_size = v16->m_fileInfo[index].m_details.m_size;
      while ( 1 )
      {
        if ( DCache_TOC_IsBitSet(cacheType, v17, v18) )
        {
          if ( m_size <= 0 )
          {
            LODWORD(v24) = m_size;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 945, ASSERT_TYPE_ASSERT, "( fileSizeRemaining ) > ( 0 )", "%s > %s\n\t%i, %i", "fileSizeRemaining", "0", v24, 0i64) )
              __debugbreak();
          }
          v20 = 0x20000;
          if ( m_size < 0x20000 )
            v20 = m_size;
          SetBlockChecksum(cacheType, v18, v20);
          m_size -= 0x20000;
        }
        if ( ++v18 >= 2152 )
          break;
        v17 = index;
      }
      v12 = toc;
      v7 = locationa;
    }
    else
    {
      v21 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v21, (Online_Error_CAT_DCACHE_IO_t)0x4000, NULL);
    }
    DCache_IO_CalculateHash(cacheType, fileID, v7, (cccHashValueSHA256_t *)(v15 + 176));
    if ( v12->m_versionMajor != 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1088, ASSERT_TYPE_ASSERT, "(toc->m_versionMajor == 11)", (const char *)&queryFormat, "toc->m_versionMajor == DCACHE_TOC_VERSION_MAJOR") )
      __debugbreak();
    if ( v12->m_versionMinor != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 1089, ASSERT_TYPE_ASSERT, "(toc->m_versionMinor == 9)", (const char *)&queryFormat, "toc->m_versionMinor == DCACHE_TOC_VERSION_MINOR") )
      __debugbreak();
    DCache_IO_SerializeTOC(cacheType, v12);
    return 1;
  }
}

/*
==============
DCache_IO_ValidateDataFileHandle
==============
*/
char DCache_IO_ValidateDataFileHandle(dcacheType_t cacheType, bool generateError)
{
  return 1;
}

/*
==============
DCache_IO_ValidateTOCFileHandle
==============
*/
char DCache_IO_ValidateTOCFileHandle(dcacheType_t cacheType, bool generateError)
{
  return 1;
}

/*
==============
DCache_IO_WriteBlock
==============
*/
int DCache_IO_WriteBlock(dcacheType_t cacheType, int blockIndex, unsigned __int8 *data, int length, bool calcChecksum)
{
  __int64 v5; 
  int result; 
  int v10; 
  int v12; 

  v5 = cacheType;
  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT )
  {
    v12 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 606, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", cacheType, v12) )
      __debugbreak();
  }
  if ( !DCache_TOC_IsBlockReserved((dcacheType_t)v5, blockIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 612, ASSERT_TYPE_ASSERT, "(DCache_TOC_IsBlockReserved( cacheType, blockIndex ))", (const char *)&queryFormat, "DCache_TOC_IsBlockReserved( cacheType, blockIndex )") )
    __debugbreak();
  result = DCache_IO_WriteBytes(s_dcacheFileHandle[v5], blockIndex << 17, length, data);
  v10 = result;
  if ( calcChecksum )
  {
    SetBlockChecksum((dcacheType_t)v5, blockIndex, result);
    return v10;
  }
  return result;
}

/*
==============
DCache_IO_WriteBytes
==============
*/
__int64 DCache_IO_WriteBytes(fileHandle_t handle, int fileOffset, int length, unsigned __int8 *buffer)
{
  LARGE_INTEGER v4; 
  Online_ErrorReporting *InstancePtr; 
  Online_ErrorReporting *v9; 
  __int64 result; 
  Online_ErrorReporting *v11; 
  unsigned int NumberOfBytesWritten; 

  v4.QuadPart = fileOffset;
  if ( !length )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, NULL);
  }
  NumberOfBytesWritten = 0;
  if ( handle.handle.handle == -1 || !SetFilePointerEx((HANDLE)handle.handle.handle, v4, NULL, 0) || !WriteFile((HANDLE)handle.handle.handle, buffer, length, &NumberOfBytesWritten, NULL) )
  {
    v9 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v9, MOVEMENT, NULL);
  }
  result = NumberOfBytesWritten;
  if ( !NumberOfBytesWritten )
  {
    v11 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v11, MOVEMENT, NULL);
    return NumberOfBytesWritten;
  }
  return result;
}

/*
==============
DCache_IO_WriteFileData
==============
*/
char DCache_IO_WriteFileData(dcacheType_t cacheType, int fileIndex, int size, unsigned __int8 *data)
{
  __int64 v4; 
  dcacheTOC_t *TOC; 
  int v9; 
  int *p_m_size; 
  Online_ErrorReporting *v11; 
  Online_ErrorReporting *v13; 
  int v14; 
  int v15; 
  int BlockIndexForOffset; 
  int v17; 
  int v18; 
  Online_ErrorReporting *InstancePtr; 
  int v21; 

  v4 = fileIndex;
  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT )
  {
    v21 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 757, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", cacheType, v21) )
      __debugbreak();
  }
  TOC = DCache_TOC_GetTOC(cacheType);
  v9 = size / 0x20000 + 1;
  if ( ((((size >> 31) & 0x1FFFF) + size) & 0x1FFFF) == ((size >> 31) & 0x1FFFF) )
    v9 = size / 0x20000;
  p_m_size = &TOC->m_fileInfo[v4].m_details.m_size;
  if ( *p_m_size != size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 768, ASSERT_TYPE_ASSERT, "(toc->m_fileInfo[ fileIndex ].m_details.m_size == size)", (const char *)&queryFormat, "toc->m_fileInfo[ fileIndex ].m_details.m_size == size") )
    __debugbreak();
  if ( DCache_TOC_GetBlocksUsed(cacheType, v4) != v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 769, ASSERT_TYPE_ASSERT, "(DCache_TOC_GetBlocksUsed( cacheType, fileIndex ) == numBlocksRequired)", (const char *)&queryFormat, "DCache_TOC_GetBlocksUsed( cacheType, fileIndex ) == numBlocksRequired") )
    __debugbreak();
  if ( *p_m_size == size )
  {
    if ( DCache_TOC_GetBlocksUsed(cacheType, v4) == v9 )
    {
      v14 = 0;
      v15 = 0;
      if ( v9 <= 0 )
      {
        return 1;
      }
      else
      {
        while ( 1 )
        {
          if ( size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 794, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
            __debugbreak();
          BlockIndexForOffset = DCache_IO_GetBlockIndexForOffset(cacheType, v4, v14);
          if ( !DCache_TOC_IsBitSet(cacheType, v4, BlockIndexForOffset) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 801, ASSERT_TYPE_ASSERT, "(DCache_TOC_IsBitSet( cacheType, fileIndex, blockIndex ))", (const char *)&queryFormat, "DCache_TOC_IsBitSet( cacheType, fileIndex, blockIndex )") )
            __debugbreak();
          v17 = 0x20000;
          if ( size < 0x20000 )
            v17 = size;
          v18 = DCache_IO_WriteBlock(cacheType, BlockIndexForOffset, &data[v14], v17, 1);
          if ( !v18 )
            break;
          v14 += v18;
          size -= v18;
          if ( ++v15 >= v9 )
            return 1;
        }
        InstancePtr = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_IO_t)256, NULL);
        return 0;
      }
    }
    else
    {
      v13 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v13, (Online_Error_CAT_DCACHE_IO_t)128, NULL);
      return 0;
    }
  }
  else
  {
    v11 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v11, (Online_Error_CAT_DCACHE_IO_t)64, NULL);
    return 0;
  }
}

/*
==============
DCache_IO_WriteToCache
==============
*/
char DCache_IO_WriteToCache(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int length, unsigned __int8 *buffer)
{
  int FileIndex; 
  Online_ErrorReporting *InstancePtr; 
  int v13; 

  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT )
  {
    v13 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 893, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", cacheType, v13) )
      __debugbreak();
  }
  FileIndex = DCache_GetFileIndex(cacheType, fileID, location);
  if ( FileIndex != -1 )
    return DCache_IO_WriteFileData(cacheType, FileIndex, length, buffer);
  InstancePtr = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_IO_t)4096, NULL);
  return 0;
}

/*
==============
IsChecksumValid
==============
*/
bool IsChecksumValid(dcacheType_t cacheType, int blockIndex, const unsigned __int8 *buffer, unsigned int bufferSize)
{
  __int64 v4; 
  dcacheTOC_t *TOC; 
  __int64 v10; 

  v4 = blockIndex;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 515, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 516, ASSERT_TYPE_ASSERT, "(bufferSize > 0)", (const char *)&queryFormat, "bufferSize > 0") )
    __debugbreak();
  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT )
  {
    LODWORD(v10) = cacheType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 517, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", v10, 2) )
      __debugbreak();
  }
  TOC = DCache_TOC_GetTOC(cacheType);
  if ( bufferSize < TOC->m_checksumByteCount[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 520, ASSERT_TYPE_ASSERT, "( bufferSize ) >= ( toc->m_checksumByteCount[blockIndex] )", "%s >= %s\n\t%u, %u", "bufferSize", "toc->m_checksumByteCount[blockIndex]", bufferSize, TOC->m_checksumByteCount[v4]) )
    __debugbreak();
  return (unsigned int)CalculateBlockChecksum(cacheType, buffer, TOC->m_checksumByteCount[v4]) == TOC->m_checksum[v4];
}

/*
==============
SetBlockChecksum
==============
*/
void SetBlockChecksum(dcacheType_t cacheType, int blockIndex, int byteCount)
{
  __int64 v3; 
  dcacheTOC_t *TOC; 
  unsigned __int8 *BlockBuffer; 
  int Block; 
  int v9; 
  unsigned int v10; 
  int v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 

  v3 = blockIndex;
  if ( (unsigned int)cacheType >= DCACHE_TYPE_COUNT )
  {
    v12 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 583, ASSERT_TYPE_ASSERT, "(unsigned)( cacheType ) < (unsigned)( DCACHE_TYPE_COUNT )", "cacheType doesn't index DCACHE_TYPE_COUNT\n\t%i not in [0, %i)", cacheType, v12) )
      __debugbreak();
  }
  TOC = DCache_TOC_GetTOC(cacheType);
  BlockBuffer = DCache_IO_GetBlockBuffer(DCACHE_BLOCK_READ);
  memset_0(BlockBuffer, 0, 0x20000ui64);
  Block = DCache_IO_ReadBlock(cacheType, v3, BlockBuffer, CHECKSUM_NO_ACTION);
  v9 = Block;
  if ( Block <= 0 )
  {
    v14 = Block;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 591, ASSERT_TYPE_ASSERT, "( bytesRead ) > ( 0 )", "%s > %s\n\t%i, %i", "bytesRead", "0", v14, 0i64) )
      __debugbreak();
  }
  if ( v9 < byteCount )
  {
    LODWORD(v15) = byteCount;
    LODWORD(v13) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_io.cpp", 592, ASSERT_TYPE_ASSERT, "( bytesRead ) >= ( byteCount )", "%s >= %s\n\t%i, %i", "bytesRead", "byteCount", v13, v15) )
      __debugbreak();
  }
  v10 = CalculateBlockChecksum(cacheType, BlockBuffer, byteCount);
  TOC->m_checksumByteCount[v3] = byteCount;
  TOC->m_checksum[v3] = v10;
}

