/*
==============
MemFile_ReadCompressedData
==============
*/

bool __fastcall MemFile_ReadCompressedData(unsigned __int8 *fromBuf, int fromSize, unsigned __int8 *toBuf, int toSize, int *outReadSize)
{
  return ?MemFile_ReadCompressedData@@YA_NPEAEH0HAEAH@Z(fromBuf, fromSize, toBuf, toSize, outReadSize);
}

/*
==============
MemFile_MoveToSegment
==============
*/

void __fastcall MemFile_MoveToSegment(MemoryFile *memFile, int index, StreamModeSource source)
{
  ?MemFile_MoveToSegment@@YAXPEAUMemoryFile@@HW4StreamModeSource@@@Z(memFile, index, source);
}

/*
==============
MemFile_AtEnd
==============
*/

int __fastcall MemFile_AtEnd(MemoryFile *memFile)
{
  return ?MemFile_AtEnd@@YAHPEAUMemoryFile@@@Z(memFile);
}

/*
==============
MemFile_ArchiveSentinel
==============
*/

void __fastcall MemFile_ArchiveSentinel(MemoryFile *memFile, const unsigned int sentinel)
{
  ?MemFile_ArchiveSentinel@@YAXPEAUMemoryFile@@I@Z(memFile, sentinel);
}

/*
==============
MemFile_WriteData
==============
*/

void __fastcall MemFile_WriteData(MemoryFile *memFile, unsigned __int64 byteCount, const void *p)
{
  ?MemFile_WriteData@@YAXPEAUMemoryFile@@_KPEBX@Z(memFile, byteCount, p);
}

/*
==============
MemFile_inflateInit
==============
*/

void __fastcall MemFile_inflateInit(void *next_in, int len, bool compress, StreamModeSource source)
{
  ?MemFile_inflateInit@@YAXPEAXH_NW4StreamModeSource@@@Z(next_in, len, compress, source);
}

/*
==============
MemFile_CommonInit
==============
*/

void __fastcall MemFile_CommonInit(MemoryFile *memFile, unsigned __int64 size, void *buffer, bool errorOnOverflow, bool compress)
{
  ?MemFile_CommonInit@@YAXPEAUMemoryFile@@_KPEAX_N3@Z(memFile, size, buffer, errorOnOverflow, compress);
}

/*
==============
MemFile_WriteCString
==============
*/

void __fastcall MemFile_WriteCString(MemoryFile *memFile, const char *string, unsigned int size)
{
  ?MemFile_WriteCString@@YAXPEAUMemoryFile@@PEBDI@Z(memFile, string, size);
}

/*
==============
MemFile_inflateEnd
==============
*/

int __fastcall MemFile_inflateEnd(bool compress, StreamModeSource source)
{
  return ?MemFile_inflateEnd@@YAH_NW4StreamModeSource@@@Z(compress, source);
}

/*
==============
MemFile_InitForWriteParallel
==============
*/

void __fastcall MemFile_InitForWriteParallel(MemoryFile *memFile, unsigned __int64 size, void *buffer, bool errorOnOverflow, void *saveStringsBuffer, unsigned __int64 saveStringsBufferSize)
{
  ?MemFile_InitForWriteParallel@@YAXPEAUMemoryFile@@_KPEAX_N21@Z(memFile, size, buffer, errorOnOverflow, saveStringsBuffer, saveStringsBufferSize);
}

/*
==============
MemFile_Append
==============
*/

void __fastcall MemFile_Append(MemoryFile *dstMemFile, MemoryFile *srcMemFile)
{
  ?MemFile_Append@@YAXPEAUMemoryFile@@0@Z(dstMemFile, srcMemFile);
}

/*
==============
MemFile_IsWriting
==============
*/

bool __fastcall MemFile_IsWriting(MemoryFile *memFile)
{
  return ?MemFile_IsWriting@@YA_NPEAUMemoryFile@@@Z(memFile);
}

/*
==============
MemFile_ArchiveFloat
==============
*/

void __fastcall MemFile_ArchiveFloat(MemoryFile *memFile, float *value)
{
  ?MemFile_ArchiveFloat@@YAXPEAUMemoryFile@@PEAM@Z(memFile, value);
}

/*
==============
MemFile_InitForWriting
==============
*/

void __fastcall MemFile_InitForWriting(MemoryFile *memFile, unsigned __int64 size, void *buffer, bool errorOnOverflow, bool compress, StreamModeSource source)
{
  ?MemFile_InitForWriting@@YAXPEAUMemoryFile@@_KPEAX_N3W4StreamModeSource@@@Z(memFile, size, buffer, errorOnOverflow, compress, source);
}

/*
==============
MemFile_ReadCString
==============
*/

const char *__fastcall MemFile_ReadCString(MemoryFile *memFile, unsigned int size)
{
  return ?MemFile_ReadCString@@YAPEBDPEAUMemoryFile@@I@Z(memFile, size);
}

/*
==============
MemFile_DecompressWithZLib
==============
*/

int __fastcall MemFile_DecompressWithZLib(const unsigned __int8 *from, int inSizeBytes, unsigned __int8 *to, int outSizeBytes)
{
  return ?MemFile_DecompressWithZLib@@YAHPEBEHPEAEH@Z(from, inSizeBytes, to, outSizeBytes);
}

/*
==============
MemFile_Shutdown
==============
*/

void __fastcall MemFile_Shutdown(MemoryFile *memFile)
{
  ?MemFile_Shutdown@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
MemFile_InitForReading
==============
*/

void __fastcall MemFile_InitForReading(MemoryFile *memFile, unsigned __int64 size, void *buffer, bool compress, StreamModeSource source)
{
  ?MemFile_InitForReading@@YAXPEAUMemoryFile@@_KPEAX_NW4StreamModeSource@@@Z(memFile, size, buffer, compress, source);
}

/*
==============
MemFile_WriteCString
==============
*/

void __fastcall MemFile_WriteCString(MemoryFile *memFile, const char *string)
{
  ?MemFile_WriteCString@@YAXPEAUMemoryFile@@PEBD@Z(memFile, string);
}

/*
==============
MemFile_ReadCString
==============
*/

const char *__fastcall MemFile_ReadCString(MemoryFile *memFile)
{
  return ?MemFile_ReadCString@@YAPEBDPEAUMemoryFile@@@Z(memFile);
}

/*
==============
MemFile_CompressWithZLib
==============
*/

int __fastcall MemFile_CompressWithZLib(const unsigned __int8 *from, int inSizeBytes, unsigned __int8 *to, int outSizeBytes)
{
  return ?MemFile_CompressWithZLib@@YAHPEBEHPEAEH@Z(from, inSizeBytes, to, outSizeBytes);
}

/*
==============
MemFile_WriteFloat
==============
*/

void __fastcall MemFile_WriteFloat(MemoryFile *memFile, float value)
{
  ?MemFile_WriteFloat@@YAXPEAUMemoryFile@@M@Z(memFile, value);
}

/*
==============
MemFile_ReadFloat
==============
*/

double __fastcall MemFile_ReadFloat(MemoryFile *memFile)
{
  double result; 

  *(float *)&result = ?MemFile_ReadFloat@@YAMPEAUMemoryFile@@@Z(memFile);
  return result;
}

/*
==============
MemFile_Cleanup
==============
*/

void MemFile_Cleanup(void)
{
  ?MemFile_Cleanup@@YAXXZ();
}

/*
==============
MemFile_IsReading
==============
*/

bool __fastcall MemFile_IsReading(MemoryFile *memFile)
{
  return ?MemFile_IsReading@@YA_NPEAUMemoryFile@@@Z(memFile);
}

/*
==============
MemFile_deflateEnd
==============
*/

int __fastcall MemFile_deflateEnd(bool compress, StreamModeSource source)
{
  return ?MemFile_deflateEnd@@YAH_NW4StreamModeSource@@@Z(compress, source);
}

/*
==============
MemFile_GetUsedSize
==============
*/

unsigned __int64 __fastcall MemFile_GetUsedSize(MemoryFile *memFile)
{
  return ?MemFile_GetUsedSize@@YA_KPEAUMemoryFile@@@Z(memFile);
}

/*
==============
MemFile_ReadData
==============
*/

void __fastcall MemFile_ReadData(MemoryFile *memFile, unsigned __int64 byteCount, void *p)
{
  ?MemFile_ReadData@@YAXPEAUMemoryFile@@_KPEAX@Z(memFile, byteCount, p);
}

/*
==============
MemFile_CopySegments
==============
*/

unsigned __int64 __fastcall MemFile_CopySegments(MemoryFile *memFile, int index, void *buf)
{
  return ?MemFile_CopySegments@@YA_KPEAUMemoryFile@@HPEAX@Z(memFile, index, buf);
}

/*
==============
MemFile_StartSegment
==============
*/

void __fastcall MemFile_StartSegment(MemoryFile *memFile, int index, StreamModeSource source)
{
  ?MemFile_StartSegment@@YAXPEAUMemoryFile@@HW4StreamModeSource@@@Z(memFile, index, source);
}

/*
==============
MemFile_WriteSentinel
==============
*/

void __fastcall MemFile_WriteSentinel(MemoryFile *memFile, const unsigned int sentinel)
{
  ?MemFile_WriteSentinel@@YAXPEAUMemoryFile@@I@Z(memFile, sentinel);
}

/*
==============
MemFile_ReadSentinel
==============
*/

void __fastcall MemFile_ReadSentinel(MemoryFile *memFile, const unsigned int sentinel)
{
  ?MemFile_ReadSentinel@@YAXPEAUMemoryFile@@I@Z(memFile, sentinel);
}

/*
==============
MemFile_deflateInit
==============
*/

void __fastcall MemFile_deflateInit(void *next_out, unsigned __int64 avail_out, bool compress, StreamModeSource source)
{
  ?MemFile_deflateInit@@YAXPEAX_K_NW4StreamModeSource@@@Z(next_out, avail_out, compress, source);
}

/*
==============
MemFile_WriteCompressedData
==============
*/

bool __fastcall MemFile_WriteCompressedData(unsigned __int8 *fromBuf, int fromSize, unsigned __int8 *toBuf, int toSize, int *outWriteSize)
{
  return ?MemFile_WriteCompressedData@@YA_NPEAEH0HAEAH@Z(fromBuf, fromSize, toBuf, toSize, outWriteSize);
}

/*
==============
AssertStreamMode
==============
*/
void AssertStreamMode(MemFileMode mode)
{
  StreamModeSource v1; 

  if ( streamMode != mode )
  {
    v1 = streamModeSource;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 261, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Memfile routine expected streamMode \"%s\", but is \"%s\" instead.  Possible race with thread \"%s\".  Source=%d", MemFileModeNames[mode], MemFileModeNames[streamMode], MemFileThreadNames[streamModeThread], v1) )
      __debugbreak();
  }
}

/*
==============
MemFile_Append
==============
*/
void MemFile_Append(MemoryFile *dstMemFile, MemoryFile *srcMemFile)
{
  unsigned __int64 bytesUsed; 
  unsigned __int64 bufferSize; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !dstMemFile )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1064, ASSERT_TYPE_ASSERT, "(dstMemFile)", (const char *)&queryFormat, "dstMemFile") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 762, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
  }
  if ( dstMemFile->archiveProc != MemFile_WriteDataForArchive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1065, ASSERT_TYPE_ASSERT, "(MemFile_IsWriting( dstMemFile ))", (const char *)&queryFormat, "MemFile_IsWriting( dstMemFile )") )
    __debugbreak();
  if ( !dstMemFile->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1066, ASSERT_TYPE_ASSERT, "(dstMemFile->buffer)", (const char *)&queryFormat, "dstMemFile->buffer") )
    __debugbreak();
  if ( dstMemFile->compress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1067, ASSERT_TYPE_ASSERT, "(!dstMemFile->compress)", "%s\n\tCompression not supported by append", "!dstMemFile->compress") )
    __debugbreak();
  bytesUsed = dstMemFile->bytesUsed;
  bufferSize = dstMemFile->bufferSize;
  if ( bytesUsed > bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1068, ASSERT_TYPE_ASSERT, "( dstMemFile->bytesUsed ) <= ( dstMemFile->bufferSize )", "%s <= %s\n\t%i, %i", "dstMemFile->bytesUsed", "dstMemFile->bufferSize", bytesUsed, bufferSize) )
    __debugbreak();
  if ( !srcMemFile )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1070, ASSERT_TYPE_ASSERT, "(srcMemFile)", (const char *)&queryFormat, "srcMemFile") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 762, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
  }
  if ( srcMemFile->archiveProc != MemFile_WriteDataForArchive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1071, ASSERT_TYPE_ASSERT, "(MemFile_IsWriting( srcMemFile ))", (const char *)&queryFormat, "MemFile_IsWriting( srcMemFile )") )
    __debugbreak();
  if ( !srcMemFile->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1072, ASSERT_TYPE_ASSERT, "(srcMemFile->buffer)", (const char *)&queryFormat, "srcMemFile->buffer") )
    __debugbreak();
  if ( srcMemFile->compress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1073, ASSERT_TYPE_ASSERT, "(!srcMemFile->compress)", "%s\n\tCompression not supported by append", "!srcMemFile->compress") )
    __debugbreak();
  if ( srcMemFile->bytesUsed > srcMemFile->bufferSize )
  {
    LODWORD(v9) = srcMemFile->bufferSize;
    LODWORD(v8) = srcMemFile->bytesUsed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1074, ASSERT_TYPE_ASSERT, "( srcMemFile->bytesUsed ) <= ( srcMemFile->bufferSize )", "%s <= %s\n\t%i, %i", "srcMemFile->bytesUsed", "srcMemFile->bufferSize", v8, v9) )
      __debugbreak();
  }
  if ( dstMemFile->segmentIndex != -1 )
    MemFile_EndSegment(dstMemFile, StreamModeSource_SPWriteGame);
  if ( srcMemFile->segmentIndex != -1 )
    MemFile_EndSegment(srcMemFile, StreamModeSource_SPWriteGame);
  v6 = dstMemFile->bytesUsed;
  v7 = srcMemFile->bytesUsed;
  if ( v7 + v6 <= dstMemFile->bufferSize )
  {
    memcpy_0(&dstMemFile->buffer[v6], srcMemFile->buffer, v7);
    dstMemFile->bytesUsed += srcMemFile->bytesUsed;
  }
  else
  {
    MemFile_WriteError(dstMemFile);
  }
}

/*
==============
MemFile_ArchiveFloat
==============
*/
void MemFile_ArchiveFloat(MemoryFile *memFile, float *value)
{
  int v5; 

  _RDI = value;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 397, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !memFile->archiveProc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 398, ASSERT_TYPE_ASSERT, "(memFile->archiveProc)", (const char *)&queryFormat, "memFile->archiveProc") )
    __debugbreak();
  memFile->archiveProc(memFile, 4ui64, _RDI);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 37, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v5 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 38, ASSERT_TYPE_SANITY, "( !IS_NAN( *value ) )", (const char *)&queryFormat, "!IS_NAN( *value )") )
    __debugbreak();
}

/*
==============
MemFile_ArchiveSentinel
==============
*/
void MemFile_ArchiveSentinel(MemoryFile *memFile, const unsigned int sentinel)
{
  unsigned int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 762, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( memFile->archiveProc == MemFile_WriteDataForArchive )
  {
    p = sentinel;
    MemFile_WriteData(memFile, 4ui64, &p);
  }
  else if ( MemFile_IsReading(memFile) )
  {
    MemFile_ReadData(memFile, 4ui64, &p);
    if ( p != sentinel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1269, ASSERT_TYPE_ASSERT, "(fileSentinel == sentinel)", "%s\n\tSaved game out of sync, expecting sentinel 0x%0x but got 0x%0x", "fileSentinel == sentinel", sentinel, p) )
      __debugbreak();
  }
}

/*
==============
MemFile_AtEnd
==============
*/
_BOOL8 MemFile_AtEnd(MemoryFile *memFile)
{
  return memFile->bytesUsed == memFile->bufferSize;
}

/*
==============
MemFile_Cleanup
==============
*/
void MemFile_Cleanup(void)
{
  if ( streamMode == MEM_FILE_MODE_INFLATE )
  {
    if ( g_compress )
    {
      AssertStreamMode(MEM_FILE_MODE_INFLATE);
      j_inflateEnd_0(&stream);
      j_Zip_ShutdownThreadMemory(&stream);
    }
    SetStreamMode(MEM_FILE_MODE_DEFAULT, StreamModeSource_Cleanup);
    SL_ShutdownSystem(0x10u);
  }
  else if ( streamMode == MEM_FILE_MODE_DEFLATE )
  {
    if ( g_compress )
    {
      AssertStreamMode(MEM_FILE_MODE_DEFLATE);
      j_deflateEnd(&stream);
      j_Zip_ShutdownThreadMemory(&stream);
    }
    SetStreamMode(MEM_FILE_MODE_DEFAULT, StreamModeSource_Cleanup);
  }
}

/*
==============
MemFile_CommonInit
==============
*/
void MemFile_CommonInit(MemoryFile *memFile, unsigned __int64 size, void *buffer, bool errorOnOverflow, bool compress)
{
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 134, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 135, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 136, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  memFile->compress = compress;
  memFile->buffer = (unsigned __int8 *)buffer;
  memFile->bufferSize = size;
  memFile->bufferSizeOriginal = size;
  memFile->errorOnOverflow = errorOnOverflow;
  memFile->saveStrings.buffer = g_saveStrings;
  memFile->bytesUsed = 0i64;
  memFile->memoryOverflow = 0;
  memFile->segmentIndex = -1;
  memFile->segmentStart = 0i64;
  memFile->segmentFullLen = 0;
  memFile->saveStrings.bufferSize = 0x100000i64;
  *(_QWORD *)&memFile->rle.cacheSize = 1i64;
  memFile->rle.zeroCount = 0;
  memFile->rle.cacheBufferLen = -1;
}

/*
==============
MemFile_CompressWithZLib
==============
*/
__int64 MemFile_CompressWithZLib(const unsigned __int8 *from, int inSizeBytes, unsigned __int8 *to, int outSizeBytes)
{
  z_stream_s *m_ptr; 
  void *v9; 
  unsigned int total_out; 
  int v11; 
  Mem_LargeLocal v13; 
  Mem_LargeLocal stream; 

  Mem_LargeLocal::Mem_LargeLocal(&stream, 0x58ui64, "z_stream zstream");
  m_ptr = (z_stream_s *)stream.m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v13, 0x60000ui64, "zlib_deflate_buf deflateBuf");
  v9 = v13.m_ptr;
  memset_0(m_ptr, 0, sizeof(z_stream_s));
  j_Zip_InitThreadMemory(m_ptr, v9, 393216);
  m_ptr->next_in = (unsigned __int8 *)from;
  m_ptr->avail_in = truncate_cast<unsigned int,int>(inSizeBytes);
  m_ptr->next_out = to;
  m_ptr->avail_out = truncate_cast<unsigned int,int>(outSizeBytes);
  total_out = 0;
  m_ptr->data_type = 0;
  j_deflateInit_(m_ptr, 1, "1.2.8", 88);
  v11 = j_deflate(m_ptr, 4);
  if ( v11 == 1 )
  {
    v11 = j_deflateEnd(m_ptr);
  }
  else
  {
    j_deflateEnd(m_ptr);
    if ( !v11 )
      v11 = -5;
  }
  j_Zip_ShutdownThreadMemory(m_ptr);
  if ( !v11 )
    total_out = m_ptr->total_out;
  Mem_LargeLocal::~Mem_LargeLocal(&v13);
  Mem_LargeLocal::~Mem_LargeLocal(&stream);
  return total_out;
}

/*
==============
MemFile_CopySegments
==============
*/
unsigned __int8 *MemFile_CopySegments(MemoryFile *memFile, int index, void *buf)
{
  const unsigned __int8 *SegmentAddress; 
  unsigned __int8 *v7; 

  if ( memFile->memoryOverflow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 722, ASSERT_TYPE_ASSERT, "(!memFile->memoryOverflow)", (const char *)&queryFormat, "!memFile->memoryOverflow") )
    __debugbreak();
  SegmentAddress = MemFile_GetSegmentAddress(memFile, index);
  v7 = (unsigned __int8 *)(&memFile->buffer[memFile->bufferSize] - (unsigned __int8 *)SegmentAddress);
  if ( buf )
    memcpy_0(buf, SegmentAddress, &memFile->buffer[memFile->bufferSize] - (unsigned __int8 *)SegmentAddress);
  return v7;
}

/*
==============
MemFile_DecompressWithZLib
==============
*/
__int64 MemFile_DecompressWithZLib(const unsigned __int8 *from, int inSizeBytes, unsigned __int8 *to, int outSizeBytes)
{
  z_stream_s *m_ptr; 
  void *v9; 
  unsigned int total_out; 
  int v11; 
  Mem_LargeLocal v13; 
  Mem_LargeLocal stream; 

  Mem_LargeLocal::Mem_LargeLocal(&stream, 0x58ui64, "z_stream zstream");
  m_ptr = (z_stream_s *)stream.m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v13, 0x20000ui64, "zlib_inflate_buf inflateBuf");
  v9 = v13.m_ptr;
  memset_0(m_ptr, 0, sizeof(z_stream_s));
  j_Zip_InitThreadMemory(m_ptr, v9, 0x20000);
  m_ptr->next_in = (unsigned __int8 *)from;
  m_ptr->avail_in = truncate_cast<unsigned int,int>(inSizeBytes);
  m_ptr->next_out = to;
  m_ptr->avail_out = truncate_cast<unsigned int,int>(outSizeBytes);
  total_out = 0;
  m_ptr->data_type = 0;
  j_inflateInit_(m_ptr, "1.2.8", 88);
  v11 = j_inflate_0(m_ptr, 4);
  if ( v11 == 1 )
  {
    v11 = j_inflateEnd_0(m_ptr);
  }
  else
  {
    j_inflateEnd_0(m_ptr);
    if ( !v11 )
      v11 = -5;
  }
  j_Zip_ShutdownThreadMemory(m_ptr);
  if ( !v11 )
    total_out = m_ptr->total_out;
  Mem_LargeLocal::~Mem_LargeLocal(&v13);
  Mem_LargeLocal::~Mem_LargeLocal(&stream);
  return total_out;
}

/*
==============
MemFile_EndSegment
==============
*/
void MemFile_EndSegment(MemoryFile *memFile, StreamModeSource source)
{
  int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned __int64 v7; 
  unsigned __int64 segmentStart; 
  unsigned __int64 v9; 
  __int64 v10; 

  if ( memFile->memoryOverflow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 531, ASSERT_TYPE_ASSERT, "(!memFile->memoryOverflow)", (const char *)&queryFormat, "!memFile->memoryOverflow") )
    __debugbreak();
  if ( !memFile->memoryOverflow )
  {
    if ( memFile->segmentIndex > 9u )
    {
      LODWORD(v10) = memFile->segmentIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 538, ASSERT_TYPE_ASSERT, "( ( (index >= 0) && (index < SAVE_SEGMENT_COUNT) ) )", "( index ) = %i", v10) )
        __debugbreak();
    }
    v4 = 0;
    if ( memFile->rle.cacheSize > 1 )
    {
      if ( memFile->rle.cacheBufferLen < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 543, ASSERT_TYPE_ASSERT, "(memFile->rle.cacheBufferLen >= 0)", (const char *)&queryFormat, "memFile->rle.cacheBufferLen >= 0") )
        __debugbreak();
      if ( !MemFile_WriteDataInternal(memFile, memFile->rle.cacheSize, memFile->rle.nonZeroCount, memFile->rle.cacheBufferLen, 0) )
      {
        MemFile_WriteError(memFile);
        return;
      }
      memFile->rle.cacheSize = 0;
    }
    if ( memFile->compress )
    {
      AssertStreamMode(MEM_FILE_MODE_DEFLATE);
      stream.next_in = g_saveBuffer;
      if ( &memFile->buffer[memFile->bytesUsed] != stream.next_out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 559, ASSERT_TYPE_ASSERT, "(memFile->buffer + memFile->bytesUsed == stream.next_out)", (const char *)&queryFormat, "memFile->buffer + memFile->bytesUsed == stream.next_out") )
        __debugbreak();
      v5 = j_deflate(&stream, 4);
      v6 = v5;
      if ( v5 > 1 )
      {
        LODWORD(v10) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 562, ASSERT_TYPE_ASSERT, "( ( (err == 0) || (err == 1) ) )", "( err ) = %i", v10) )
          __debugbreak();
      }
      v7 = stream.next_out - memFile->buffer;
      memFile->bytesUsed = v7;
      if ( v7 > memFile->bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 565, ASSERT_TYPE_ASSERT, "(memFile->bytesUsed <= memFile->bufferSize)", (const char *)&queryFormat, "memFile->bytesUsed <= memFile->bufferSize") )
        __debugbreak();
      if ( v6 != 1 )
      {
        if ( stream.avail_out )
        {
          LODWORD(v10) = stream.avail_out;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 569, ASSERT_TYPE_ASSERT, "( ( !stream.avail_out ) )", "( stream.avail_out ) = %i", v10) )
            __debugbreak();
        }
        MemFile_deflateEnd(memFile->compress, source);
        if ( memFile->errorOnOverflow )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144177A60, 252i64);
        Com_Printf(10, "MemFile_EndSegment: Out of memory\n");
        memFile->memoryOverflow = 1;
        return;
      }
      if ( memFile->compress )
      {
        AssertStreamMode(MEM_FILE_MODE_DEFLATE);
        v4 = j_deflateEnd(&stream);
        j_Zip_ShutdownThreadMemory(&stream);
      }
    }
    SetStreamMode(MEM_FILE_MODE_DEFAULT, source);
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 589, ASSERT_TYPE_ASSERT, "(err == 0)", (const char *)&queryFormat, "err == Z_OK") )
      __debugbreak();
    segmentStart = memFile->segmentStart;
    v9 = memFile->bytesUsed - segmentStart;
    memFile->segmentIndex = -1;
    if ( v9 > 0x7FFFFFFFFFFFFFFFi64 || v9 + 0x80000000 > 0xFFFFFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v9, "unsigned", v9) )
        __debugbreak();
      segmentStart = memFile->segmentStart;
    }
    *(_DWORD *)&memFile->buffer[segmentStart] = v9;
  }
}

/*
==============
MemFile_GetSegmentAddress
==============
*/
unsigned __int8 *MemFile_GetSegmentAddress(MemoryFile *memFile, int index)
{
  int v2; 
  __int64 i; 

  v2 = index;
  if ( (unsigned int)index > 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 652, ASSERT_TYPE_ASSERT, "( ( (index >= 0) && (index < SAVE_SEGMENT_COUNT) ) )", "( index ) = %i", index) )
    __debugbreak();
  if ( memFile->memoryOverflow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 653, ASSERT_TYPE_ASSERT, "(!memFile->memoryOverflow)", (const char *)&queryFormat, "!memFile->memoryOverflow") )
    __debugbreak();
  for ( i = 0i64; v2; --v2 )
  {
    if ( i + 4 > memFile->bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 658, ASSERT_TYPE_ASSERT, "(segmentStart + sizeof( int ) <= memFile->bufferSize)", (const char *)&queryFormat, "segmentStart + sizeof( int ) <= memFile->bufferSize") )
      __debugbreak();
    i += *(int *)&memFile->buffer[i];
  }
  if ( i + 4 > memFile->bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 663, ASSERT_TYPE_ASSERT, "(segmentStart + sizeof( int ) <= memFile->bufferSize)", (const char *)&queryFormat, "segmentStart + sizeof( int ) <= memFile->bufferSize") )
    __debugbreak();
  return &memFile->buffer[i];
}

/*
==============
MemFile_GetUsedSize
==============
*/
unsigned __int64 MemFile_GetUsedSize(MemoryFile *memFile)
{
  if ( memFile )
    return memFile->bytesUsed;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 866, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  return MEMORY[0x88];
}

/*
==============
MemFile_InitForReading
==============
*/
void MemFile_InitForReading(MemoryFile *memFile, unsigned __int64 size, void *buffer, bool compress, StreamModeSource source)
{
  MemFile_CommonInit(memFile, size, buffer, 1, compress);
  memFile->archiveProc = MemFile_ReadData;
  MemFile_MoveToSegment(memFile, 0, source);
}

/*
==============
MemFile_InitForWriteParallel
==============
*/
void MemFile_InitForWriteParallel(MemoryFile *memFile, unsigned __int64 size, void *buffer, bool errorOnOverflow, void *saveStringsBuffer, unsigned __int64 saveStringsBufferSize)
{
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 291, ASSERT_TYPE_ASSERT, "(memFile != nullptr)", (const char *)&queryFormat, "memFile != nullptr") )
    __debugbreak();
  MemFile_CommonInit(memFile, size, buffer, errorOnOverflow, 0);
  if ( saveStringsBufferSize != 0x100000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 295, ASSERT_TYPE_ASSERT, "(saveStringsBufferSize == ( sizeof( MemoryFile::SaveStrings::index_t ) * MEMORY_NODE_COUNT ))", "%s\n\tSave strings buffer size not valid.", "saveStringsBufferSize == MEMFILE_STRINGS_WRITE_BUFFER_SIZE") )
    __debugbreak();
  memFile->saveStrings.buffer = saveStringsBuffer;
  memFile->archiveProc = MemFile_WriteDataForArchive;
  memFile->saveStrings.bufferSize = saveStringsBufferSize;
}

/*
==============
MemFile_InitForWriting
==============
*/
void MemFile_InitForWriting(MemoryFile *memFile, unsigned __int64 size, void *buffer, bool errorOnOverflow, bool compress, StreamModeSource source)
{
  MemFile_CommonInit(memFile, size, buffer, errorOnOverflow, compress);
  memFile->archiveProc = MemFile_WriteDataForArchive;
  MemFile_StartSegment(memFile, 0, source);
}

/*
==============
MemFile_IsReading
==============
*/
bool MemFile_IsReading(MemoryFile *memFile)
{
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 755, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  return memFile->archiveProc == MemFile_ReadData;
}

/*
==============
MemFile_IsWriting
==============
*/
bool MemFile_IsWriting(MemoryFile *memFile)
{
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 762, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  return memFile->archiveProc == MemFile_WriteDataForArchive;
}

/*
==============
MemFile_MoveToSegment
==============
*/
void MemFile_MoveToSegment(MemoryFile *memFile, int index, StreamModeSource source)
{
  int v6; 
  int *SegmentAddress; 
  unsigned __int8 *buffer; 
  bool compress; 
  int v10; 
  unsigned __int64 v11; 
  char *fmt; 
  __int64 v13; 
  unsigned __int8 p; 
  char v15[15]; 
  unsigned __int8 v16; 
  unsigned __int8 v17; 
  unsigned __int8 v18; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 755, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( memFile->archiveProc != MemFile_ReadData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 679, ASSERT_TYPE_ASSERT, "(MemFile_IsReading( memFile ))", (const char *)&queryFormat, "MemFile_IsReading( memFile )") )
    __debugbreak();
  if ( (unsigned int)(index + 1) > 0xA )
  {
    LODWORD(v13) = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 680, ASSERT_TYPE_ASSERT, "( ( (index >= -1) && (index < SAVE_SEGMENT_COUNT) ) )", "( index ) = %i", v13) )
      __debugbreak();
  }
  if ( !memFile->memoryOverflow )
  {
    if ( memFile->segmentIndex >= 0 )
    {
      if ( memFile->compress )
      {
        AssertStreamMode(MEM_FILE_MODE_INFLATE);
        v6 = j_inflateEnd_0(&stream);
        j_Zip_ShutdownThreadMemory(&stream);
      }
      else
      {
        v6 = 0;
      }
      SetStreamMode(MEM_FILE_MODE_DEFAULT, source);
      if ( v6 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 687, ASSERT_TYPE_ASSERT, "((MemFile_inflateEnd( memFile->compress, source )) == (0))", (const char *)&queryFormat, "MemFile_inflateEnd( memFile->compress, source ) == Z_OK") )
          __debugbreak();
      }
    }
    memFile->segmentIndex = index;
    if ( index >= 0 )
    {
      MemFile_ResetSaveStrings(memFile);
      SegmentAddress = (int *)MemFile_GetSegmentAddress(memFile, index);
      buffer = memFile->buffer;
      compress = memFile->compress;
      memFile->segmentStart = (char *)SegmentAddress - (char *)buffer;
      v10 = *SegmentAddress;
      memFile->segmentFullLen = *SegmentAddress;
      v11 = (char *)SegmentAddress - (char *)buffer + 4;
      memFile->bytesUsed = v11;
      if ( compress )
      {
        AssertStreamMode(MEM_FILE_MODE_DEFAULT);
        memset_0(&stream, 0, sizeof(stream));
        j_Zip_InitThreadMemory(&stream, g_zipMemoryMemFile, 393216);
        stream.next_in = &buffer[v11];
        stream.avail_in = v10 - 4;
        if ( j_inflateInit_(&stream, "1.2.8", 88) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 613, ASSERT_TYPE_ASSERT, "((inflateInit_((&stream), \"1.2.8\", (int)sizeof(z_stream))) == (0))", (const char *)&queryFormat, "inflateInit( &stream ) == Z_OK") )
            __debugbreak();
        }
      }
      SetStreamMode(MEM_FILE_MODE_INFLATE, source);
      g_compress = compress;
      *(_QWORD *)&memFile->rle.nonZeroCount = 0i64;
      MemFile_ReadData(memFile, 1ui64, &p);
      MemFile_ReadData(memFile, 1ui64, &v17);
      MemFile_ReadData(memFile, 1ui64, v15);
      MemFile_ReadData(memFile, 1ui64, &v16);
      MemFile_ReadData(memFile, 1ui64, &v18);
      if ( p != 88 || v17 != 88 || v16 != p || v18 != p )
      {
        LODWORD(v13) = v16;
        LODWORD(fmt) = (unsigned __int8)v15[0];
        Com_PrintError(10, "Corrupt Savegame - Expected sentinel sequence, but found: { 0x%x, 0x%x, 0x%x, 0x%x, 0x%x }", p, v17, fmt, v13, v18);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144177450);
      }
    }
    else
    {
      SL_ShutdownSystem(0x10u);
    }
  }
}

/*
==============
MemFile_ReadByteInternal
==============
*/
unsigned __int8 MemFile_ReadByteInternal(MemoryFile *memFile)
{
  unsigned __int64 bytesUsed; 
  unsigned __int64 bufferSize; 
  unsigned int v4; 
  unsigned __int8 result; 
  unsigned __int64 v6; 
  __int64 v7; 
  char v8; 

  if ( !memFile )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1291, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 755, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
  }
  if ( memFile->archiveProc != MemFile_ReadData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1292, ASSERT_TYPE_ASSERT, "(MemFile_IsReading( memFile ))", (const char *)&queryFormat, "MemFile_IsReading( memFile )") )
    __debugbreak();
  if ( !memFile->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1293, ASSERT_TYPE_ASSERT, "(memFile->buffer)", (const char *)&queryFormat, "memFile->buffer") )
    __debugbreak();
  bytesUsed = memFile->bytesUsed;
  bufferSize = memFile->bufferSize;
  if ( bytesUsed > bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1294, ASSERT_TYPE_ASSERT, "( memFile->bytesUsed ) <= ( memFile->bufferSize )", "%s <= %s\n\t%i, %i", "memFile->bytesUsed", "memFile->bufferSize", bytesUsed, bufferSize) )
    __debugbreak();
  if ( memFile->memoryOverflow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1295, ASSERT_TYPE_ASSERT, "(!memFile->memoryOverflow)", (const char *)&queryFormat, "!memFile->memoryOverflow") )
    __debugbreak();
  if ( !memFile->errorOnOverflow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1296, ASSERT_TYPE_ASSERT, "(memFile->errorOnOverflow)", (const char *)&queryFormat, "memFile->errorOnOverflow") )
    __debugbreak();
  if ( memFile->compress )
  {
    AssertStreamMode(MEM_FILE_MODE_INFLATE);
    stream.avail_out = 1;
    stream.next_out = (unsigned __int8 *)&v8;
    if ( &memFile->buffer[memFile->bytesUsed] != stream.next_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1306, ASSERT_TYPE_ASSERT, "(memFile->buffer + memFile->bytesUsed == stream.next_in)", (const char *)&queryFormat, "memFile->buffer + memFile->bytesUsed == stream.next_in") )
      __debugbreak();
    v4 = j_inflate_0(&stream, 2);
    if ( v4 > 1 )
    {
      LODWORD(v7) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1313, ASSERT_TYPE_ASSERT, "( ( (err == 0) || (err == 1) ) )", "( err ) = %i", v7) )
        __debugbreak();
    }
    memFile->bytesUsed = stream.next_in - memFile->buffer;
    if ( !stream.avail_out )
      return v8;
  }
  else
  {
    v6 = memFile->bytesUsed;
    if ( v6 < memFile->bufferSize )
    {
      result = memFile->buffer[v6];
      memFile->bytesUsed = v6 + 1;
      return result;
    }
  }
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144178930, 255i64);
  return 0;
}

/*
==============
MemFile_ReadCString
==============
*/
const char *MemFile_ReadCString(MemoryFile *memFile)
{
  return MemFile_ReadCString(memFile, 0xFFFFFFFF);
}

/*
==============
MemFile_ReadCString
==============
*/
const char *MemFile_ReadCString(MemoryFile *memFile, unsigned int size)
{
  unsigned __int64 v2; 
  unsigned __int64 bytesUsed; 
  unsigned __int64 bufferSize; 
  _DWORD *buffer; 
  unsigned __int8 *v8; 
  unsigned int i; 
  scr_string_t String; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int16 p; 

  v2 = size;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1177, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !memFile->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1178, ASSERT_TYPE_ASSERT, "(memFile->buffer)", (const char *)&queryFormat, "memFile->buffer") )
    __debugbreak();
  bytesUsed = memFile->bytesUsed;
  bufferSize = memFile->bufferSize;
  if ( bytesUsed > bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1179, ASSERT_TYPE_ASSERT, "( memFile->bytesUsed ) <= ( memFile->bufferSize )", "%s <= %s\n\t%i, %i", "memFile->bytesUsed", "memFile->bufferSize", bytesUsed, bufferSize) )
    __debugbreak();
  MemFile_ReadData(memFile, 1ui64, &p);
  if ( memFile->memoryOverflow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1182, ASSERT_TYPE_ASSERT, "(!memFile->memoryOverflow)", (const char *)&queryFormat, "!memFile->memoryOverflow") )
    __debugbreak();
  buffer = memFile->saveStrings.buffer;
  if ( !(_BYTE)p )
    return 0i64;
  if ( (_BYTE)p == 1 )
    return (char *)&queryFormat.fmt + 3;
  if ( (unsigned __int8)p <= 1u )
  {
LABEL_22:
    LODWORD(v11) = (unsigned __int8)p;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1204, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MemFile_ReadCString received an unexpected value %d", v11) )
      __debugbreak();
    goto LABEL_24;
  }
  if ( (unsigned __int8)p > 3u )
  {
    if ( (_BYTE)p == 4 )
    {
      MemFile_ReadData(memFile, 2ui64, &p);
      if ( memFile->memoryOverflow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1200, ASSERT_TYPE_ASSERT, "(!memFile->memoryOverflow)", (const char *)&queryFormat, "!memFile->memoryOverflow") )
        __debugbreak();
      return SL_ConvertToString((scr_string_t)buffer[p]);
    }
    goto LABEL_22;
  }
LABEL_24:
  v8 = g_saveBuffer;
  for ( i = 0; (_DWORD)v2 == -1 || i < (unsigned int)v2; ++i )
  {
    MemFile_ReadData(memFile, 1ui64, v8);
    if ( memFile->memoryOverflow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1220, ASSERT_TYPE_ASSERT, "(!memFile->memoryOverflow)", (const char *)&queryFormat, "!memFile->memoryOverflow") )
      __debugbreak();
    if ( (_DWORD)v2 == -1 && !*v8 )
      break;
    if ( ++v8 >= byte_14FDA0B10 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144178930, 254i64);
  }
  if ( (_BYTE)p == 2 )
  {
    if ( memFile->saveStrings.index == 0xFFFF )
    {
      LODWORD(v12) = 0xFFFF;
      LODWORD(v11) = 0xFFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1236, ASSERT_TYPE_ASSERT, "(unsigned)( memFile->saveStrings.index ) < (unsigned)( 0xffff )", "memFile->saveStrings.index doesn't index MEMFILE_STRINGS_MAX_INDEX\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( (_DWORD)v2 == -1 )
      String = SL_GetString((const char *)g_saveBuffer, 0x10u);
    else
      String = j_SL_GetStringOfSize((const char *)g_saveBuffer, 0x10u, v2, 7);
    buffer[memFile->saveStrings.index++] = String;
  }
  return (const char *)g_saveBuffer;
}

/*
==============
MemFile_ReadCompressedData
==============
*/
__int64 MemFile_ReadCompressedData(unsigned __int8 *fromBuf, int fromSize, unsigned __int8 *toBuf, int toSize, int *outReadSize)
{
  unsigned __int8 v9; 
  z_stream_s stream; 
  __int64 v12; 
  Mem_LargeLocal memory; 

  v12 = -2i64;
  Mem_LargeLocal::Mem_LargeLocal(&memory, 0x20000ui64, "zlib_inflate_buf zipMemory");
  memset_0(&stream, 0, sizeof(stream));
  j_Zip_InitThreadMemory(&stream, memory.m_ptr, 0x20000);
  stream.next_in = fromBuf;
  stream.avail_in = fromSize;
  stream.next_out = toBuf;
  stream.avail_out = toSize;
  if ( j_inflateInit_(&stream, "1.2.8", 88) || j_inflate_0(&stream, 4) != 1 || j_inflateEnd_0(&stream) )
  {
    j_Zip_ShutdownThreadMemory(&stream);
    v9 = 0;
  }
  else
  {
    *outReadSize = truncate_cast<int,__int64>(stream.next_out - toBuf);
    j_Zip_ShutdownThreadMemory(&stream);
    v9 = 1;
  }
  Mem_LargeLocal::~Mem_LargeLocal(&memory);
  return v9;
}

/*
==============
MemFile_ReadData
==============
*/
void MemFile_ReadData(MemoryFile *memFile, unsigned __int64 byteCount, void *p)
{
  unsigned __int64 bytesUsed; 
  unsigned __int64 bufferSize; 
  int nonZeroCount; 
  int i; 
  unsigned __int8 ByteInternal; 
  int v11; 
  int v12; 

  if ( !memFile )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1342, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 755, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
  }
  if ( memFile->archiveProc != MemFile_ReadData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1343, ASSERT_TYPE_ASSERT, "(MemFile_IsReading( memFile ))", (const char *)&queryFormat, "MemFile_IsReading( memFile )") )
    __debugbreak();
  if ( !memFile->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1344, ASSERT_TYPE_ASSERT, "(memFile->buffer)", (const char *)&queryFormat, "memFile->buffer") )
    __debugbreak();
  bytesUsed = memFile->bytesUsed;
  bufferSize = memFile->bufferSize;
  if ( bytesUsed > bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1345, ASSERT_TYPE_ASSERT, "( memFile->bytesUsed ) <= ( memFile->bufferSize )", "%s <= %s\n\t%i, %i", "memFile->bytesUsed", "memFile->bufferSize", bytesUsed, bufferSize) )
    __debugbreak();
  if ( byteCount && !memFile->memoryOverflow )
  {
    if ( !p && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1353, ASSERT_TYPE_ASSERT, "(p)", (const char *)&queryFormat, "p") )
      __debugbreak();
    while ( 1 )
    {
      nonZeroCount = memFile->rle.nonZeroCount;
      if ( nonZeroCount )
        break;
LABEL_26:
      for ( i = memFile->rle.zeroCount; i; i = memFile->rle.zeroCount )
      {
        memFile->rle.zeroCount = i - 1;
        *(_BYTE *)p = 0;
        p = (char *)p + 1;
        if ( !--byteCount )
          return;
      }
      ByteInternal = MemFile_ReadByteInternal(memFile);
      if ( memFile->memoryOverflow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1378, ASSERT_TYPE_ASSERT, "(!memFile->memoryOverflow)", (const char *)&queryFormat, "!memFile->memoryOverflow") )
        __debugbreak();
      v11 = (ByteInternal & 0x3F) + 1;
      v12 = v11;
      if ( (ByteInternal & 0xC0) != 0 )
        v12 = ByteInternal >> 6;
      memFile->rle.nonZeroCount = v12;
      if ( (ByteInternal & 0xC0) == 0 )
        v11 = 0;
      memFile->rle.zeroCount = v11;
    }
    while ( 1 )
    {
      memFile->rle.nonZeroCount = nonZeroCount - 1;
      --byteCount;
      *(_BYTE *)p = MemFile_ReadByteInternal(memFile);
      p = (char *)p + 1;
      if ( memFile->memoryOverflow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1363, ASSERT_TYPE_ASSERT, "(!memFile->memoryOverflow)", (const char *)&queryFormat, "!memFile->memoryOverflow") )
        __debugbreak();
      if ( !byteCount )
        break;
      nonZeroCount = memFile->rle.nonZeroCount;
      if ( !nonZeroCount )
        goto LABEL_26;
    }
  }
}

/*
==============
MemFile_ReadFloat
==============
*/
float MemFile_ReadFloat(MemoryFile *memFile)
{
  int p; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  MemFile_ReadData(memFile, 4ui64, &p);
  __asm
  {
    vmovss  xmm6, [rsp+48h+p]
    vmovss  [rsp+48h+p], xmm6
  }
  if ( (p & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 29, ASSERT_TYPE_SANITY, "( !IS_NAN( value ) )", (const char *)&queryFormat, "!IS_NAN( value )") )
    __debugbreak();
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
MemFile_ReadSentinel
==============
*/
void MemFile_ReadSentinel(MemoryFile *memFile, const unsigned int sentinel)
{
  unsigned int v3; 
  int v4; 
  int p; 

  MemFile_ReadData(memFile, 4ui64, &p);
  if ( p != sentinel )
  {
    v4 = p;
    v3 = sentinel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1269, ASSERT_TYPE_ASSERT, "(fileSentinel == sentinel)", "%s\n\tSaved game out of sync, expecting sentinel 0x%0x but got 0x%0x", "fileSentinel == sentinel", v3, v4) )
      __debugbreak();
  }
}

/*
==============
MemFile_ResetSaveStrings
==============
*/
void MemFile_ResetSaveStrings(MemoryFile *memFile)
{
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 120, ASSERT_TYPE_ASSERT, "(memFile != nullptr)", (const char *)&queryFormat, "memFile != nullptr") )
    __debugbreak();
  memset_0(memFile->saveStrings.buffer, 0, memFile->saveStrings.bufferSize);
  memFile->saveStrings.index = 0;
}

/*
==============
MemFile_Shutdown
==============
*/
void MemFile_Shutdown(MemoryFile *memFile)
{
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 306, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  memset_0(memFile, 0, sizeof(MemoryFile));
}

/*
==============
MemFile_StartSegment
==============
*/
void MemFile_StartSegment(MemoryFile *memFile, int index, StreamModeSource source)
{
  int segmentIndex; 
  unsigned __int64 bytesUsed; 
  bool v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  bool compress; 
  unsigned __int8 *v12; 
  char p; 

  if ( (unsigned int)(index + 1) > 0xA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 470, ASSERT_TYPE_ASSERT, "( ( (index == SAVE_SEGMENT_NONE) || ((index >= SAVE_SEGMENT_START) && (index < SAVE_SEGMENT_COUNT)) ) )", "( index ) = %i", index) )
    __debugbreak();
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 762, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( memFile->archiveProc != MemFile_WriteDataForArchive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 471, ASSERT_TYPE_ASSERT, "(MemFile_IsWriting( memFile ))", (const char *)&queryFormat, "MemFile_IsWriting( memFile )") )
    __debugbreak();
  if ( !memFile->memoryOverflow )
  {
    segmentIndex = memFile->segmentIndex;
    if ( segmentIndex == -1 || (MemFile_EndSegment(memFile, source), !memFile->memoryOverflow) )
    {
      memFile->segmentIndex = index;
      if ( index == -1 )
      {
        memFile->bufferSize = memFile->bytesUsed;
      }
      else
      {
        if ( segmentIndex >= index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 491, ASSERT_TYPE_ASSERT, "(oldSegmentIndex < index)", (const char *)&queryFormat, "oldSegmentIndex < index") )
          __debugbreak();
        MemFile_ResetSaveStrings(memFile);
        bytesUsed = memFile->bytesUsed;
        memFile->segmentStart = bytesUsed;
        if ( bytesUsed + 69 <= memFile->bufferSize )
        {
          v8 = !memFile->memoryOverflow;
          memFile->bytesUsed = bytesUsed + 4;
          if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 508, ASSERT_TYPE_ASSERT, "(!memFile->memoryOverflow)", (const char *)&queryFormat, "!memFile->memoryOverflow") )
            __debugbreak();
          v9 = memFile->bytesUsed;
          v10 = memFile->bufferSize - v9;
          compress = memFile->compress;
          v12 = &memFile->buffer[v9];
          if ( compress )
          {
            AssertStreamMode(MEM_FILE_MODE_DEFAULT);
            memset_0(&stream, 0, sizeof(stream));
            j_Zip_InitThreadMemory(&stream, g_zipMemoryMemFile, 393216);
            stream.next_out = v12;
            stream.avail_out = truncate_cast<unsigned int,unsigned __int64>(v10);
            if ( j_deflateInit_(&stream, 1, "1.2.8", 88) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 432, ASSERT_TYPE_ASSERT, "((deflateInit_((&stream), (1), \"1.2.8\", (int)sizeof(z_stream))) == (0))", (const char *)&queryFormat, "deflateInit( &stream, Z_BEST_SPEED ) == Z_OK") )
                __debugbreak();
            }
          }
          SetStreamMode(MEM_FILE_MODE_DEFLATE, source);
          g_compress = compress;
          *(_QWORD *)&memFile->rle.cacheSize = 1i64;
          memFile->rle.zeroCount = 0;
          memFile->rle.cacheBufferLen = -1;
          p = 88;
          MemFile_WriteData(memFile, 1ui64, &p);
          p = 88;
          MemFile_WriteData(memFile, 1ui64, &p);
          p = index;
          MemFile_WriteData(memFile, 1ui64, &p);
          p = 88;
          MemFile_WriteData(memFile, 1ui64, &p);
          p = 88;
          MemFile_WriteData(memFile, 1ui64, &p);
        }
        else
        {
          if ( memFile->errorOnOverflow )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441777A0, 251i64);
          Com_Printf(10, "MemFile_StartSegment: Out of memory\n");
          memFile->memoryOverflow = 1;
        }
      }
    }
  }
}

/*
==============
MemFile_WriteCString
==============
*/
void MemFile_WriteCString(MemoryFile *memFile, const char *string)
{
  scr_string_t v4; 
  __int64 v5; 
  _WORD *buffer; 
  bool v7; 
  unsigned __int16 *v8; 
  const char *v9; 
  unsigned __int64 v10; 
  char v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  char p; 

  if ( !string )
  {
    p = 0;
LABEL_3:
    MemFile_WriteData(memFile, 1ui64, &p);
    return;
  }
  if ( !*string )
  {
    p = 1;
    goto LABEL_3;
  }
  if ( !SL_IsString(string) )
  {
    v11 = 3;
LABEL_17:
    p = v11;
    MemFile_WriteData(memFile, 1ui64, &p);
    v12 = -1i64;
    do
      ++v12;
    while ( string[v12] );
    v10 = v12 + 1;
    v9 = string;
    goto LABEL_20;
  }
  v4 = SL_ConvertFromString(string);
  v5 = (unsigned int)v4;
  if ( (unsigned int)v4 >= 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1128, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<unsigned>(stringValue) ) < (unsigned)( MEMORY_NODE_COUNT )", "static_cast<unsigned>(stringValue) doesn't index MEMORY_NODE_COUNT\n\t%i not in [0, %i)", v4, 0x80000) )
    __debugbreak();
  buffer = memFile->saveStrings.buffer;
  v7 = buffer[v5] == 0;
  v8 = &buffer[v5];
  if ( v7 )
  {
    if ( memFile->saveStrings.index == 0xFFFF )
    {
      LODWORD(v14) = 0xFFFF;
      LODWORD(v13) = 0xFFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1141, ASSERT_TYPE_ASSERT, "(unsigned)( memFile->saveStrings.index ) < (unsigned)( 0xffff )", "memFile->saveStrings.index doesn't index MEMFILE_STRINGS_MAX_INDEX\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    *v8 = memFile->saveStrings.index;
    v11 = 2;
    ++memFile->saveStrings.index;
    goto LABEL_17;
  }
  p = 4;
  MemFile_WriteData(memFile, 1ui64, &p);
  v9 = (const char *)v8;
  v10 = 2i64;
LABEL_20:
  MemFile_WriteData(memFile, v10, v9);
}

/*
==============
MemFile_WriteCString
==============
*/
void MemFile_WriteCString(MemoryFile *memFile, const char *string, unsigned int size)
{
  unsigned __int64 v3; 
  scr_string_t v6; 
  __int64 v7; 
  _WORD *buffer; 
  bool v9; 
  unsigned __int16 *v10; 
  const char *v11; 
  unsigned __int64 v12; 
  char v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  char p; 

  v3 = size;
  if ( !string )
  {
    p = 0;
LABEL_3:
    MemFile_WriteData(memFile, 1ui64, &p);
    return;
  }
  if ( !*string )
  {
    p = 1;
    goto LABEL_3;
  }
  if ( !SL_IsString(string) )
  {
    v13 = 3;
LABEL_17:
    p = v13;
    MemFile_WriteData(memFile, 1ui64, &p);
    if ( (_DWORD)v3 == -1 )
    {
      v14 = -1i64;
      do
        ++v14;
      while ( string[v14] );
      v12 = v14 + 1;
    }
    else
    {
      v12 = v3;
    }
    v11 = string;
    goto LABEL_23;
  }
  v6 = SL_ConvertFromString(string);
  v7 = (unsigned int)v6;
  if ( (unsigned int)v6 >= 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1128, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<unsigned>(stringValue) ) < (unsigned)( MEMORY_NODE_COUNT )", "static_cast<unsigned>(stringValue) doesn't index MEMORY_NODE_COUNT\n\t%i not in [0, %i)", v6, 0x80000) )
    __debugbreak();
  buffer = memFile->saveStrings.buffer;
  v9 = buffer[v7] == 0;
  v10 = &buffer[v7];
  if ( v9 )
  {
    if ( memFile->saveStrings.index == 0xFFFF )
    {
      LODWORD(v16) = 0xFFFF;
      LODWORD(v15) = 0xFFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1141, ASSERT_TYPE_ASSERT, "(unsigned)( memFile->saveStrings.index ) < (unsigned)( 0xffff )", "memFile->saveStrings.index doesn't index MEMFILE_STRINGS_MAX_INDEX\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    *v10 = memFile->saveStrings.index;
    v13 = 2;
    ++memFile->saveStrings.index;
    goto LABEL_17;
  }
  p = 4;
  MemFile_WriteData(memFile, 1ui64, &p);
  v11 = (const char *)v10;
  v12 = 2i64;
LABEL_23:
  MemFile_WriteData(memFile, v12, v11);
}

/*
==============
MemFile_WriteCompressedData
==============
*/
char MemFile_WriteCompressedData(unsigned __int8 *fromBuf, int fromSize, unsigned __int8 *toBuf, int toSize, int *outWriteSize)
{
  z_stream_s stream; 

  AssertStreamMode(MEM_FILE_MODE_DEFAULT);
  memset_0(&stream, 0, sizeof(stream));
  j_Zip_InitThreadMemory(&stream, g_zipMemoryMemFile, 393216);
  stream.next_in = fromBuf;
  stream.avail_in = fromSize;
  stream.next_out = toBuf;
  stream.avail_out = toSize;
  if ( j_deflateInit_(&stream, 9, "1.2.8", 88) || j_deflate(&stream, 4) != 1 || j_deflateEnd(&stream) )
  {
    j_Zip_ShutdownThreadMemory(&stream);
    return 0;
  }
  else
  {
    *outWriteSize = truncate_cast<int,__int64>(stream.next_out - toBuf);
    j_Zip_ShutdownThreadMemory(&stream);
    return 1;
  }
}

/*
==============
MemFile_WriteData
==============
*/
void MemFile_WriteData(MemoryFile *memFile, unsigned __int64 byteCount, const void *p)
{
  unsigned __int64 v3; 
  unsigned __int64 bytesUsed; 
  unsigned __int64 bufferSize; 
  _BYTE *v7; 
  int cacheSize; 
  unsigned __int64 v9; 
  int zeroCount; 
  int nonZeroCount; 
  int cacheBufferLen; 
  __int64 v13; 
  unsigned int v14; 
  int v15; 
  unsigned __int8 *buffer; 
  unsigned __int64 v17; 
  int v18; 
  unsigned __int8 v19; 
  unsigned __int8 *v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  __int64 v23; 

  v3 = byteCount;
  if ( !memFile )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 897, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 762, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
  }
  if ( memFile->archiveProc != MemFile_WriteDataForArchive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 898, ASSERT_TYPE_ASSERT, "(MemFile_IsWriting( memFile ))", (const char *)&queryFormat, "MemFile_IsWriting( memFile )") )
    __debugbreak();
  if ( !memFile->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 899, ASSERT_TYPE_ASSERT, "(memFile->buffer)", (const char *)&queryFormat, "memFile->buffer") )
    __debugbreak();
  bytesUsed = memFile->bytesUsed;
  bufferSize = memFile->bufferSize;
  if ( bytesUsed > bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 900, ASSERT_TYPE_ASSERT, "( memFile->bytesUsed ) <= ( memFile->bufferSize )", "%s <= %s\n\t%i, %i", "memFile->bytesUsed", "memFile->bufferSize", bytesUsed, bufferSize) )
    __debugbreak();
  if ( memFile->memoryOverflow )
    return;
  v7 = p;
  if ( !p )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 905, ASSERT_TYPE_ASSERT, "(p)", (const char *)&queryFormat, "p") )
      __debugbreak();
    v7 = NULL;
  }
  cacheSize = memFile->rle.cacheSize;
  v9 = 0i64;
  zeroCount = memFile->rle.zeroCount;
  nonZeroCount = memFile->rle.nonZeroCount;
  cacheBufferLen = memFile->rle.cacheBufferLen;
  if ( !v3 )
  {
LABEL_33:
    memFile->rle.cacheSize = cacheSize;
    memFile->rle.zeroCount = zeroCount;
    memFile->rle.nonZeroCount = nonZeroCount;
    memFile->rle.cacheBufferLen = cacheBufferLen;
    return;
  }
  v13 = memFile->rle.cacheSize;
  while ( nonZeroCount )
  {
    while ( 1 )
    {
      v14 = (unsigned __int8)v7[v9];
      if ( v14 )
        break;
      ++zeroCount;
      if ( cacheBufferLen == 63 )
      {
        zeroCount = 1;
        goto LABEL_29;
      }
      ++cacheBufferLen;
      if ( ++v9 >= v3 )
        goto LABEL_33;
      v7 = p;
    }
    zeroCount = 0;
LABEL_29:
    if ( !MemFile_WriteDataInternal(memFile, cacheSize, nonZeroCount, cacheBufferLen, v14) )
      goto LABEL_90;
    cacheBufferLen = 0;
    nonZeroCount = 0;
    v13 = 2i64;
    ++v9;
    cacheSize = 2;
LABEL_31:
    v7 = p;
LABEL_32:
    if ( v9 >= v3 )
      goto LABEL_33;
  }
  while ( 1 )
  {
    v15 = (unsigned __int8)v7[v9];
    if ( cacheBufferLen != 63 )
      break;
    if ( !MemFile_WriteDataInternal(memFile, cacheSize, 0, 63, (unsigned __int8)v7[v9]) )
      goto LABEL_90;
    cacheBufferLen = 0;
    nonZeroCount = 0;
    v13 = 2i64;
    cacheSize = 2;
    zeroCount = v15 == 0;
LABEL_66:
    v3 = byteCount;
    if ( ++v9 >= byteCount )
      goto LABEL_31;
    v7 = p;
  }
  if ( v7[v9] )
  {
    zeroCount = 0;
    goto LABEL_56;
  }
  ++zeroCount;
  if ( cacheBufferLen <= 2 )
  {
    if ( cacheBufferLen >= 0 )
    {
      v3 = byteCount;
      nonZeroCount = cacheBufferLen + 1;
      cacheBufferLen = 0;
      ++v9;
      goto LABEL_32;
    }
    goto LABEL_56;
  }
  if ( cacheSize <= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 981, ASSERT_TYPE_ASSERT, "(cacheSize > 2)", (const char *)&queryFormat, "cacheSize > 2") )
    __debugbreak();
  if ( zeroCount < 3 )
  {
    if ( memFile->compress )
    {
      if ( memFile->rle.cacheBuffer[v13 - 2] || memFile->rle.cacheBuffer[v13 - 1] || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1018, ASSERT_TYPE_ASSERT, "(memFile->rle.cacheBuffer[cacheSize - 2] != 0 || memFile->rle.cacheBuffer[cacheSize - 1] != 0)", (const char *)&queryFormat, "memFile->rle.cacheBuffer[cacheSize - 2] != 0 || memFile->rle.cacheBuffer[cacheSize - 1] != 0") )
        goto LABEL_56;
    }
    else
    {
      buffer = memFile->buffer;
      v17 = v13 + memFile->bytesUsed;
      if ( buffer[v17 - 2] || buffer[v17 - 1] || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1021, ASSERT_TYPE_ASSERT, "(memFile->buffer[memFile->bytesUsed + cacheSize - 2] != 0 || memFile->buffer[memFile->bytesUsed + cacheSize - 1] != 0)", (const char *)&queryFormat, "memFile->buffer[memFile->bytesUsed + cacheSize - 2] != 0 || memFile->buffer[memFile->bytesUsed + cacheSize - 1] != 0") )
        goto LABEL_56;
    }
    __debugbreak();
LABEL_56:
    ++cacheBufferLen;
    if ( cacheSize >= 65 )
    {
      LODWORD(v23) = cacheSize;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1039, ASSERT_TYPE_ASSERT, "( ( cacheSize < CODE_LEN_MASK + 2 ) )", "( cacheSize ) = %i", v23) )
        __debugbreak();
    }
    if ( cacheSize <= 0 )
    {
      LODWORD(v23) = cacheSize;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1040, ASSERT_TYPE_ASSERT, "( ( cacheSize > 0 ) )", "( cacheSize ) = %i", v23) )
        __debugbreak();
    }
    if ( memFile->compress )
      memFile->rle.cacheBuffer[v13] = v15;
    else
      memFile->buffer[v13 + memFile->bytesUsed] = v15;
    ++cacheSize;
    ++v13;
    goto LABEL_66;
  }
  if ( zeroCount != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 984, ASSERT_TYPE_ASSERT, "(zeroCount == 3)", (const char *)&queryFormat, "zeroCount == 3") )
    __debugbreak();
  if ( cacheSize <= 4 )
  {
    LODWORD(v23) = cacheSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 985, ASSERT_TYPE_ASSERT, "( ( cacheSize > 4 ) )", "( cacheSize ) = %i", v23) )
      __debugbreak();
  }
  v18 = cacheSize - 3;
  if ( memFile->compress )
  {
    if ( (memFile->rle.cacheBuffer[v13 - 2] || memFile->rle.cacheBuffer[v13 - 1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 992, ASSERT_TYPE_ASSERT, "(memFile->rle.cacheBuffer[cacheSize + 1] == 0 && memFile->rle.cacheBuffer[cacheSize + 2] == 0)", (const char *)&queryFormat, "memFile->rle.cacheBuffer[cacheSize + 1] == 0 && memFile->rle.cacheBuffer[cacheSize + 2] == 0") )
      __debugbreak();
    v19 = memFile->rle.cacheBuffer[v13 - 3];
  }
  else
  {
    v20 = memFile->buffer;
    v21 = v13 + memFile->bytesUsed;
    if ( (v20[v21 - 2] || v20[v21 - 1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 998, ASSERT_TYPE_ASSERT, "(memFile->buffer[memFile->bytesUsed + cacheSize + 1] == 0 && memFile->buffer[memFile->bytesUsed + cacheSize + 2] == 0)", (const char *)&queryFormat, "memFile->buffer[memFile->bytesUsed + cacheSize + 1] == 0 && memFile->buffer[memFile->bytesUsed + cacheSize + 2] == 0") )
      __debugbreak();
    v19 = memFile->buffer[v13 - 3 + memFile->bytesUsed];
  }
  v22 = v19;
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 1002, ASSERT_TYPE_ASSERT, "(moveByte)", (const char *)&queryFormat, "moveByte") )
    __debugbreak();
  if ( MemFile_WriteDataInternal(memFile, v18, 0, cacheBufferLen - 3, v22) )
  {
    v3 = byteCount;
    v13 = 2i64;
    zeroCount = 0;
    cacheBufferLen = 2;
    cacheSize = 2;
    ++v9;
    nonZeroCount = 1;
    goto LABEL_31;
  }
LABEL_90:
  MemFile_WriteError(memFile);
}

/*
==============
MemFile_WriteDataForArchive
==============
*/

void __fastcall MemFile_WriteDataForArchive(MemoryFile *memFile, unsigned __int64 bytes, void *data)
{
  MemFile_WriteData(memFile, bytes, data);
}

/*
==============
MemFile_WriteDataInternal
==============
*/
__int64 MemFile_WriteDataInternal(MemoryFile *memFile, unsigned __int64 bytes, int nonZeroCount, int cacheBufferLen, unsigned int nextByte)
{
  char v5; 
  char v6; 
  unsigned __int64 bytesUsed; 
  unsigned __int64 bufferSize; 
  unsigned __int8 v11; 
  MemoryFile *v12; 
  unsigned __int64 v13; 
  size_t v14; 
  unsigned __int64 v15; 
  unsigned __int64 v17; 

  v5 = cacheBufferLen;
  v6 = nonZeroCount;
  if ( !memFile )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 798, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 762, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
  }
  if ( memFile->archiveProc != MemFile_WriteDataForArchive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 799, ASSERT_TYPE_ASSERT, "(MemFile_IsWriting( memFile ))", (const char *)&queryFormat, "MemFile_IsWriting( memFile )") )
    __debugbreak();
  if ( !memFile->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 800, ASSERT_TYPE_ASSERT, "(memFile->buffer)", (const char *)&queryFormat, "memFile->buffer") )
    __debugbreak();
  bytesUsed = memFile->bytesUsed;
  bufferSize = memFile->bufferSize;
  if ( bytesUsed > bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 801, ASSERT_TYPE_ASSERT, "( memFile->bytesUsed ) <= ( memFile->bufferSize )", "%s <= %s\n\t%i, %i", "memFile->bytesUsed", "memFile->bufferSize", bytesUsed, bufferSize) )
    __debugbreak();
  if ( !bytes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 802, ASSERT_TYPE_ASSERT, "(bytes > 0)", (const char *)&queryFormat, "bytes > 0") )
    __debugbreak();
  if ( memFile->memoryOverflow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 803, ASSERT_TYPE_ASSERT, "(!memFile->memoryOverflow)", (const char *)&queryFormat, "!memFile->memoryOverflow") )
    __debugbreak();
  v11 = v5 + (v6 << 6);
  if ( !memFile->compress )
  {
    memFile->buffer[memFile->bytesUsed] = v11;
    memFile->bytesUsed += bytes;
    v17 = memFile->bytesUsed;
    if ( v17 + 65 <= memFile->bufferSize )
    {
      memFile->buffer[v17 + 1] = nextByte;
      return 1i64;
    }
    return 0i64;
  }
  AssertStreamMode(MEM_FILE_MODE_DEFLATE);
  memFile->rle.cacheBuffer[0] = v11;
  v12 = memFile;
  v13 = bytes + stream.avail_in;
  if ( v13 )
  {
    if ( v13 < 0x2000 )
      goto LABEL_41;
    while ( 1 )
    {
      if ( stream.avail_in >= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 824, ASSERT_TYPE_ASSERT, "(stream.avail_in < (8*1024))", (const char *)&queryFormat, "stream.avail_in < TEMP_SAVE_BUFFER_SIZE") )
        __debugbreak();
      v14 = 0x2000 - stream.avail_in;
      memcpy_0(&g_saveBuffer[stream.avail_in], v12, v14);
      stream.avail_in = 0x2000;
      v13 -= 0x2000i64;
      stream.next_in = g_saveBuffer;
      v12 = (MemoryFile *)((char *)v12 + v14);
      if ( &memFile->buffer[memFile->bytesUsed] != stream.next_out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 833, ASSERT_TYPE_ASSERT, "(memFile->buffer + memFile->bytesUsed == stream.next_out)", (const char *)&queryFormat, "memFile->buffer + memFile->bytesUsed == stream.next_out") )
        __debugbreak();
      if ( j_deflate(&stream, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 835, ASSERT_TYPE_ASSERT, "((deflate( &stream, 2 )) == (0))", (const char *)&queryFormat, "deflate( &stream, Z_SYNC_FLUSH ) == Z_OK") )
        __debugbreak();
      v15 = stream.next_out - memFile->buffer;
      memFile->bytesUsed = v15;
      if ( v15 > memFile->bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 838, ASSERT_TYPE_ASSERT, "(memFile->bytesUsed <= memFile->bufferSize)", (const char *)&queryFormat, "memFile->bytesUsed <= memFile->bufferSize") )
        __debugbreak();
      if ( !stream.avail_out )
        return 0i64;
      if ( !v13 )
        goto LABEL_42;
      if ( v13 < 0x2000 )
        goto LABEL_41;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 814, ASSERT_TYPE_ASSERT, "(sourceLen)", (const char *)&queryFormat, "sourceLen") )
    __debugbreak();
LABEL_41:
  memcpy_0(&g_saveBuffer[stream.avail_in], v12, v13 - stream.avail_in);
  stream.avail_in = truncate_cast<unsigned int,unsigned __int64>(v13);
LABEL_42:
  memFile->rle.cacheBuffer[1] = nextByte;
  return 1i64;
}

/*
==============
MemFile_WriteError
==============
*/
void MemFile_WriteError(MemoryFile *memFile)
{
  StreamModeSource v2; 

  if ( memFile->memoryOverflow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 769, ASSERT_TYPE_ASSERT, "(!memFile->memoryOverflow)", (const char *)&queryFormat, "!memFile->memoryOverflow") )
    __debugbreak();
  v2 = streamModeSource;
  if ( memFile->compress )
  {
    AssertStreamMode(MEM_FILE_MODE_DEFLATE);
    j_deflateEnd(&stream);
    j_Zip_ShutdownThreadMemory(&stream);
  }
  SetStreamMode(MEM_FILE_MODE_DEFAULT, v2);
  ProfMem_EndAllForError(memFile->bytesUsed);
  ProfMem_PrintTree(1);
  if ( memFile->errorOnOverflow )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144177D10, 253i64);
  Com_Printf(10, "MemFile_WriteError: Out of memory\n");
  memFile->memoryOverflow = 1;
}

/*
==============
MemFile_WriteFloat
==============
*/

void __fastcall MemFile_WriteFloat(MemoryFile *memFile, double value)
{
  int p; 
  int v4; 

  __asm
  {
    vmovss  [rsp+p], xmm1
    vmovss  [rsp+38h+arg_10], xmm1
  }
  if ( (v4 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 19, ASSERT_TYPE_SANITY, "( !IS_NAN( value ) )", (const char *)&queryFormat, "!IS_NAN( value )") )
    __debugbreak();
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
MemFile_WriteSentinel
==============
*/
void MemFile_WriteSentinel(MemoryFile *memFile, const unsigned int sentinel)
{
  unsigned int p; 

  p = sentinel;
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
MemFile_deflateEnd
==============
*/
__int64 MemFile_deflateEnd(bool compress, StreamModeSource source)
{
  unsigned int v3; 

  if ( compress )
  {
    AssertStreamMode(MEM_FILE_MODE_DEFLATE);
    v3 = j_deflateEnd(&stream);
    j_Zip_ShutdownThreadMemory(&stream);
  }
  else
  {
    v3 = 0;
  }
  SetStreamMode(MEM_FILE_MODE_DEFAULT, source);
  return v3;
}

/*
==============
MemFile_deflateInit
==============
*/
void MemFile_deflateInit(void *next_out, unsigned __int64 avail_out, bool compress, StreamModeSource source)
{
  if ( compress )
  {
    AssertStreamMode(MEM_FILE_MODE_DEFAULT);
    memset_0(&stream, 0, sizeof(stream));
    j_Zip_InitThreadMemory(&stream, g_zipMemoryMemFile, 393216);
    stream.next_out = (unsigned __int8 *)next_out;
    stream.avail_out = truncate_cast<unsigned int,unsigned __int64>(avail_out);
    if ( j_deflateInit_(&stream, 1, "1.2.8", 88) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 432, ASSERT_TYPE_ASSERT, "((deflateInit_((&stream), (1), \"1.2.8\", (int)sizeof(z_stream))) == (0))", (const char *)&queryFormat, "deflateInit( &stream, Z_BEST_SPEED ) == Z_OK") )
        __debugbreak();
    }
  }
  SetStreamMode(MEM_FILE_MODE_DEFLATE, source);
  g_compress = compress;
}

/*
==============
MemFile_inflateEnd
==============
*/
__int64 MemFile_inflateEnd(bool compress, StreamModeSource source)
{
  unsigned int v3; 

  if ( compress )
  {
    AssertStreamMode(MEM_FILE_MODE_INFLATE);
    v3 = j_inflateEnd_0(&stream);
    j_Zip_ShutdownThreadMemory(&stream);
  }
  else
  {
    v3 = 0;
  }
  SetStreamMode(MEM_FILE_MODE_DEFAULT, source);
  return v3;
}

/*
==============
MemFile_inflateInit
==============
*/
void MemFile_inflateInit(void *next_in, int len, bool compress, StreamModeSource source)
{
  if ( compress )
  {
    AssertStreamMode(MEM_FILE_MODE_DEFAULT);
    memset_0(&stream, 0, sizeof(stream));
    j_Zip_InitThreadMemory(&stream, g_zipMemoryMemFile, 393216);
    stream.next_in = (unsigned __int8 *)next_in;
    stream.avail_in = len;
    if ( j_inflateInit_(&stream, "1.2.8", 88) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.cpp", 613, ASSERT_TYPE_ASSERT, "((inflateInit_((&stream), \"1.2.8\", (int)sizeof(z_stream))) == (0))", (const char *)&queryFormat, "inflateInit( &stream ) == Z_OK") )
        __debugbreak();
    }
  }
  SetStreamMode(MEM_FILE_MODE_INFLATE, source);
  g_compress = compress;
}

/*
==============
SetStreamMode
==============
*/
void SetStreamMode(MemFileMode mode, StreamModeSource source)
{
  bool IsDatabaseThread; 

  streamMode = mode;
  if ( Sys_IsMainThread() )
  {
    streamModeThread = MEM_FILE_THREAD_MAIN;
    streamModeSource = source;
  }
  else if ( Sys_IsServerThread() )
  {
    streamModeThread = MEM_FILE_THREAD_SERVER;
    streamModeSource = source;
  }
  else if ( Sys_IsRenderThread() )
  {
    streamModeThread = MEM_FILE_THREAD_BACKEND;
    streamModeSource = source;
  }
  else
  {
    IsDatabaseThread = Sys_IsDatabaseThread();
    streamModeSource = source;
    streamModeThread = IsDatabaseThread ? MEM_FILE_THREAD_DATABASE : MEM_FILE_THREAD_UNKNOWN;
  }
}

