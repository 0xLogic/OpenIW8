/*
==============
SD_StreamBufferReady
==============
*/

bool __fastcall SD_StreamBufferReady(sd_stream_buffer *buffer)
{
  return ?SD_StreamBufferReady@@YA_NPEAUsd_stream_buffer@@@Z(buffer);
}

/*
==============
SD_StreamFindFreeBuffer
==============
*/

sd_stream_buffer *__fastcall SD_StreamFindFreeBuffer()
{
  return ?SD_StreamFindFreeBuffer@@YAPEAUsd_stream_buffer@@XZ();
}

/*
==============
SD_StreamBufferRead
==============
*/

sd_stream_buffer *__fastcall SD_StreamBufferRead(const char *filename, unsigned int latencyMs, __int64 offset, __int64 size, FileStreamFileID fileHandle)
{
  return ?SD_StreamBufferRead@@YAPEAUsd_stream_buffer@@PEBDI_J1W4FileStreamFileID@@@Z(filename, latencyMs, offset, size, fileHandle);
}

/*
==============
SD_StreamAllocate
==============
*/

sd_stream *__fastcall SD_StreamAllocate(const char *filename, const SndAssetBankEntry *entry, FileStreamFileID fid, const unsigned __int8 *primeData, unsigned int primeSize)
{
  return ?SD_StreamAllocate@@YAPEAUsd_stream@@PEBDPEBUSndAssetBankEntry@@W4FileStreamFileID@@PEBEI@Z(filename, entry, fid, primeData, primeSize);
}

/*
==============
SD_StreamFree
==============
*/

void __fastcall SD_StreamFree(sd_stream *stream)
{
  ?SD_StreamFree@@YAXPEAUsd_stream@@@Z(stream);
}

/*
==============
SD_StreamShutdown
==============
*/

void SD_StreamShutdown(void)
{
  ?SD_StreamShutdown@@YAXXZ();
}

/*
==============
SD_StreamDevhost
==============
*/

void SD_StreamDevhost(void)
{
  ?SD_StreamDevhost@@YAXXZ();
}

/*
==============
SD_StreamBufferFree
==============
*/

void __fastcall SD_StreamBufferFree(sd_stream_buffer *buffer)
{
  ?SD_StreamBufferFree@@YAXPEAUsd_stream_buffer@@@Z(buffer);
}

/*
==============
SD_StreamInit
==============
*/

void SD_StreamInit(void)
{
  ?SD_StreamInit@@YAXXZ();
}

/*
==============
SD_StreamPrint
==============
*/

void __fastcall SD_StreamPrint(const char *str)
{
  ?SD_StreamPrint@@YAXPEBD@Z(str);
}

/*
==============
SD_StreamBufferError
==============
*/

bool __fastcall SD_StreamBufferError(sd_stream_buffer *buffer)
{
  return ?SD_StreamBufferError@@YA_NPEAUsd_stream_buffer@@@Z(buffer);
}

/*
==============
SD_StreamAllocate
==============
*/
sd_stream_globals *SD_StreamAllocate(const char *filename, const SndAssetBankEntry *entry, int fid, const unsigned __int8 *primeData, unsigned int primeSize)
{
  sd_stream_globals *v6; 
  sd_stream_globals *result; 

  v6 = &g_sd_stream_globals;
  while ( v6->streamPool[0].used )
  {
    v6 = (sd_stream_globals *)((char *)v6 + 408);
    if ( (__int64)v6 >= (__int64)g_sd_stream_globals.streamBufferPool )
    {
      Com_PrintError(9, "Out of streams. Someone is playing WAY too many streamed sounds in one frame\n");
      return 0i64;
    }
  }
  if ( v6->streamPool[0].ioBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 337, ASSERT_TYPE_ASSERT, "(stream->ioBuffer == 0)", (const char *)&queryFormat, "stream->ioBuffer == 0") )
    __debugbreak();
  if ( v6->streamPool[0].buffers[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 338, ASSERT_TYPE_ASSERT, "(stream->buffers[0] == 0)", (const char *)&queryFormat, "stream->buffers[0] == 0") )
    __debugbreak();
  if ( v6->streamPool[0].buffers[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 339, ASSERT_TYPE_ASSERT, "(stream->buffers[1] == 0)", (const char *)&queryFormat, "stream->buffers[1] == 0") )
    __debugbreak();
  if ( v6->streamPool[0].buffersSubmitted[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 340, ASSERT_TYPE_ASSERT, "(stream->buffersSubmitted[0] == false)", (const char *)&queryFormat, "stream->buffersSubmitted[0] == false") )
    __debugbreak();
  if ( v6->streamPool[0].buffersSubmitted[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 341, ASSERT_TYPE_ASSERT, "(stream->buffersSubmitted[1] == false)", (const char *)&queryFormat, "stream->buffersSubmitted[1] == false") )
    __debugbreak();
  v6->streamPool[0].frameSkip = 0i64;
  v6->streamPool[0].readOffset = 0i64;
  v6->streamPool[0].lastBuffer = NULL;
  v6->streamPool[0].decodeStartPos = 0i64;
  v6->streamPool[0].primeSize = primeSize;
  result = v6;
  v6->streamPool[0].used = 1;
  v6->streamPool[0].filename = filename;
  *(_DWORD *)v6->streamPool[0].fileHandle = fid;
  v6->streamPool[0].primeData = primeData;
  return result;
}

/*
==============
SD_StreamBufferError
==============
*/
bool SD_StreamBufferError(sd_stream_buffer *buffer)
{
  bool v3; 

  if ( !buffer )
    return 0;
  if ( !buffer->refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 310, ASSERT_TYPE_ASSERT, "(buffer->refCount)", (const char *)&queryFormat, "buffer->refCount") )
    __debugbreak();
  if ( !buffer->primed && !buffer->filenameHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 315, ASSERT_TYPE_ASSERT, "(buffer->filenameHash != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "buffer->filenameHash != SND_INVALID_HASH") )
    __debugbreak();
  if ( !buffer->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 318, ASSERT_TYPE_ASSERT, "(buffer->data)", (const char *)&queryFormat, "buffer->data") )
    __debugbreak();
  if ( !buffer->valid )
    goto LABEL_17;
  v3 = !buffer->error;
  if ( buffer->error )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 319, ASSERT_TYPE_ASSERT, "(!(buffer->valid && buffer->error))", (const char *)&queryFormat, "!(buffer->valid && buffer->error)") )
      __debugbreak();
LABEL_17:
    v3 = !buffer->error;
  }
  return !v3;
}

/*
==============
SD_StreamBufferFree
==============
*/
void SD_StreamBufferFree(sd_stream_buffer *buffer)
{
  if ( !buffer->refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 260, ASSERT_TYPE_ASSERT, "(buffer->refCount!=0)", (const char *)&queryFormat, "buffer->refCount!=0") )
    __debugbreak();
  if ( ((unsigned __int8)buffer & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", buffer) )
    __debugbreak();
  _InterlockedDecrement(&buffer->refCount);
  if ( !buffer->error && !buffer->valid && buffer->refCount == 1 && !buffer->primed )
    FileStream_FreeRequest((FileStreamRequestID)*(_DWORD *)buffer->requestId, 1);
  if ( !buffer->refCount && buffer->invalidateBuffer )
  {
    buffer->filenameHash = 0;
    buffer->offset = 0i64;
  }
}

/*
==============
SD_StreamBufferRead
==============
*/
sd_stream_buffer *SD_StreamBufferRead(const char *filename, unsigned int latencyMs, __int64 offset, __int64 size, unsigned int fileHandle)
{
  sd_stream_buffer *streamBufferPool; 
  unsigned int v10; 
  const char *v12; 
  char v13; 
  int v14; 
  char v15; 
  const char *v16; 
  char dest[256]; 

  j_va("stream %s %zd %zd\n", filename, offset, size);
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 185, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  streamBufferPool = g_sd_stream_globals.streamBufferPool;
  v10 = 0;
  while ( streamBufferPool->refCount )
  {
    ++v10;
    ++streamBufferPool;
    if ( v10 >= 0x2A )
    {
      Com_Printf(9, "SOUND: Failed to find free buffer for %s\n", filename);
      return 0i64;
    }
  }
  if ( ((unsigned __int8)streamBufferPool & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", streamBufferPool) )
    __debugbreak();
  _InterlockedIncrement(&streamBufferPool->refCount);
  streamBufferPool->filenameHash = 0;
  *(_DWORD *)&streamBufferPool->valid = 0;
  streamBufferPool->readSize = 0i64;
  *(_QWORD *)&streamBufferPool->requestStartTime = 0i64;
  streamBufferPool->offset = 0i64;
  if ( I_strempty(filename) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 205, ASSERT_TYPE_ASSERT, "(!I_strempty( filename ))", (const char *)&queryFormat, "!I_strempty( filename )") )
    __debugbreak();
  Core_strcpy(streamBufferPool->filename, 0x100ui64, filename);
  v12 = filename;
  if ( filename && (v13 = *filename) != 0 )
  {
    v14 = 5381;
    do
    {
      ++v12;
      v15 = v13 | 0x20;
      if ( (unsigned int)(v13 - 65) >= 0x1A )
        v15 = v13;
      v14 = 65599 * v14 + v15;
      v13 = *v12;
    }
    while ( *v12 );
    if ( !v14 )
      v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  streamBufferPool->filenameHash = v14;
  streamBufferPool->offset = offset;
  streamBufferPool->readSize = size;
  *(_WORD *)&streamBufferPool->valid = 0;
  streamBufferPool->requestLatency = latencyMs;
  streamBufferPool->requestStartTime = Sys_Milliseconds();
  streamBufferPool->requestEndTime = 0;
  Sys_InterlockedIncrement(&streamBufferPool->refCount);
  if ( ((unsigned __int8)&g_sd_stream_globals.streamIoActive & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd_stream_globals.streamIoActive) )
    __debugbreak();
  _InterlockedIncrement(&g_sd_stream_globals.streamIoActive);
  if ( FileStream_FileIsError((FileStreamFileID)fileHandle) || !FileStream_FileIsOpen((FileStreamFileID)fileHandle) )
  {
    v16 = "SD_StreamBufferRead_FileNotOpen";
    if ( FileStream_FileIsError((FileStreamFileID)fileHandle) )
      v16 = "SD_StreamBufferRead_FileError";
    Com_sprintf_truncate<256>((char (*)[256])dest, "%d: %s", fileHandle, filename);
    CrashReport_AddKVP(v16, dest);
  }
  if ( !FileStream_AddRequest((FileStreamFileID)fileHandle, offset, size, streamBufferPool->data, latencyMs, (FileStreamPriority)2, SD_StreamReadCallback, streamBufferPool, (FileStreamRequestID *)streamBufferPool->requestId, FILE_STREAM_TRACK_SOUND) )
  {
    streamBufferPool->requestEndTime = Sys_Milliseconds();
    streamBufferPool->error = 1;
    Sys_InterlockedDecrement(&streamBufferPool->refCount);
    if ( ((unsigned __int64)&g_sd_stream_globals.streamIoActive & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd_stream_globals.streamIoActive) )
      __debugbreak();
    _InterlockedDecrement(&g_sd_stream_globals.streamIoActive);
  }
  return streamBufferPool;
}

/*
==============
SD_StreamBufferReady
==============
*/
bool SD_StreamBufferReady(sd_stream_buffer *buffer)
{
  bool result; 

  if ( !buffer )
    return 0;
  if ( !buffer->refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 288, ASSERT_TYPE_ASSERT, "(buffer->refCount)", (const char *)&queryFormat, "buffer->refCount") )
    __debugbreak();
  if ( !buffer->primed && !buffer->filenameHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 293, ASSERT_TYPE_ASSERT, "(buffer->filenameHash != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "buffer->filenameHash != SND_INVALID_HASH") )
    __debugbreak();
  if ( !buffer->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 296, ASSERT_TYPE_ASSERT, "(buffer->data)", (const char *)&queryFormat, "buffer->data") )
    __debugbreak();
  if ( buffer->valid && buffer->error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 297, ASSERT_TYPE_ASSERT, "(!(buffer->valid && buffer->error))", (const char *)&queryFormat, "!(buffer->valid && buffer->error)") )
    __debugbreak();
  result = 0;
  if ( !buffer->error )
    return buffer->valid;
  return result;
}

/*
==============
SD_StreamDevhost
==============
*/
void SD_StreamDevhost(void)
{
  SND_DevhostStatInt("SD Starvation Stream", g_sd_stream_globals.streamStarvationCount);
  SND_DevhostStatInt("SD Stream Buffers Used", g_sd_stream_globals.streamBuffersUsed);
  SND_DevhostStatInt("SD Stream Buffers Free", g_sd_stream_globals.streamBuffersFree);
  SND_DevhostStatInt("SD Stream Used", g_sd_stream_globals.streamInUse);
  SND_DevhostStatInt("SD Pending IO", g_sd_stream_globals.streamIoActive);
}

/*
==============
SD_StreamFindFreeBuffer
==============
*/
sd_stream_buffer *SD_StreamFindFreeBuffer()
{
  sd_stream_buffer *streamBufferPool; 
  unsigned int v1; 
  sd_stream_buffer *result; 

  streamBufferPool = g_sd_stream_globals.streamBufferPool;
  v1 = 0;
  while ( streamBufferPool->refCount )
  {
    ++v1;
    ++streamBufferPool;
    if ( v1 >= 0x2A )
      return 0i64;
  }
  if ( ((unsigned __int8)streamBufferPool & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", streamBufferPool) )
    __debugbreak();
  _InterlockedIncrement(&streamBufferPool->refCount);
  streamBufferPool->filenameHash = 0;
  result = streamBufferPool;
  *(_DWORD *)&streamBufferPool->valid = 0;
  streamBufferPool->readSize = 0i64;
  *(_QWORD *)&streamBufferPool->requestStartTime = 0i64;
  streamBufferPool->offset = 0i64;
  return result;
}

/*
==============
SD_StreamFree
==============
*/
void SD_StreamFree(sd_stream *stream)
{
  bool *buffersSubmitted; 
  __int64 v2; 
  sd_stream_buffer **buffers; 
  sd_stream_buffer *v4; 
  sd_stream_buffer *ioBuffer; 

  buffersSubmitted = stream->buffersSubmitted;
  v2 = 2i64;
  buffers = stream->buffers;
  do
  {
    v4 = *buffers;
    if ( *buffers )
    {
      if ( !v4->refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 260, ASSERT_TYPE_ASSERT, "(buffer->refCount!=0)", (const char *)&queryFormat, "buffer->refCount!=0") )
        __debugbreak();
      if ( ((unsigned __int8)v4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", v4) )
        __debugbreak();
      _InterlockedDecrement(&v4->refCount);
      if ( !v4->error && !v4->valid && v4->refCount == 1 && !v4->primed )
        FileStream_FreeRequest((FileStreamRequestID)*(_DWORD *)v4->requestId, 1);
      if ( !v4->refCount && v4->invalidateBuffer )
      {
        v4->filenameHash = 0;
        v4->offset = 0i64;
      }
    }
    *buffers++ = NULL;
    *buffersSubmitted++ = 0;
    --v2;
  }
  while ( v2 );
  ioBuffer = stream->ioBuffer;
  if ( ioBuffer )
  {
    SD_StreamBufferFree(ioBuffer);
    stream->ioBuffer = NULL;
  }
  stream->frameSkip = 0i64;
  stream->readOffset = 0i64;
  stream->lastBuffer = NULL;
  stream->decodeStartPos = 0i64;
  stream->primeData = NULL;
  stream->primeSize = 0;
  *(_DWORD *)stream->fileHandle = -16777217;
  stream->used = 0;
}

/*
==============
SD_StreamInit
==============
*/
void SD_StreamInit(void)
{
  memset_0(g_sd_stream_globals.streamBufferPool, 0, sizeof(g_sd_stream_globals.streamBufferPool));
  g_sd_stream_globals.streamBlob = SD_Alloc("sd_stream", 0x540000u, 0x800u);
  memset_0(&g_sd_stream_globals, 0, 0x42F0ui64);
  memset_0(g_sd_stream_globals.streamBlob, 0, 0x540000ui64);
  g_sd_stream_globals.streamBufferPool[0].data = g_sd_stream_globals.streamBlob;
  g_sd_stream_globals.streamBufferPool[1].data = g_sd_stream_globals.streamBlob + 0x20000;
  g_sd_stream_globals.streamBufferPool[2].data = g_sd_stream_globals.streamBlob + 0x40000;
  g_sd_stream_globals.streamBufferPool[3].data = g_sd_stream_globals.streamBlob + 393216;
  g_sd_stream_globals.streamBufferPool[4].data = g_sd_stream_globals.streamBlob + 0x80000;
  g_sd_stream_globals.streamBufferPool[5].data = g_sd_stream_globals.streamBlob + 655360;
  g_sd_stream_globals.streamBufferPool[6].data = g_sd_stream_globals.streamBlob + 786432;
  g_sd_stream_globals.streamBufferPool[7].data = g_sd_stream_globals.streamBlob + 917504;
  g_sd_stream_globals.streamBufferPool[8].data = g_sd_stream_globals.streamBlob + 0x100000;
  g_sd_stream_globals.streamBufferPool[9].data = g_sd_stream_globals.streamBlob + 1179648;
  g_sd_stream_globals.streamBufferPool[10].data = g_sd_stream_globals.streamBlob + 1310720;
  g_sd_stream_globals.streamBufferPool[11].data = g_sd_stream_globals.streamBlob + 1441792;
  g_sd_stream_globals.streamBufferPool[12].data = g_sd_stream_globals.streamBlob + 1572864;
  g_sd_stream_globals.streamBufferPool[13].data = g_sd_stream_globals.streamBlob + 1703936;
  g_sd_stream_globals.streamBufferPool[14].data = g_sd_stream_globals.streamBlob + 1835008;
  g_sd_stream_globals.streamBufferPool[15].data = g_sd_stream_globals.streamBlob + 1966080;
  g_sd_stream_globals.streamBufferPool[16].data = g_sd_stream_globals.streamBlob + 0x200000;
  g_sd_stream_globals.streamBufferPool[17].data = g_sd_stream_globals.streamBlob + 2228224;
  g_sd_stream_globals.streamBufferPool[18].data = g_sd_stream_globals.streamBlob + 2359296;
  g_sd_stream_globals.streamBufferPool[19].data = g_sd_stream_globals.streamBlob + 2490368;
  g_sd_stream_globals.streamBufferPool[20].data = g_sd_stream_globals.streamBlob + 2621440;
  g_sd_stream_globals.streamBufferPool[21].data = g_sd_stream_globals.streamBlob + 2752512;
  g_sd_stream_globals.streamBufferPool[22].data = g_sd_stream_globals.streamBlob + 2883584;
  g_sd_stream_globals.streamBufferPool[23].data = g_sd_stream_globals.streamBlob + 3014656;
  g_sd_stream_globals.streamBufferPool[24].data = g_sd_stream_globals.streamBlob + 3145728;
  g_sd_stream_globals.streamBufferPool[25].data = g_sd_stream_globals.streamBlob + 3276800;
  g_sd_stream_globals.streamBufferPool[26].data = g_sd_stream_globals.streamBlob + 3407872;
  g_sd_stream_globals.streamBufferPool[27].data = g_sd_stream_globals.streamBlob + 3538944;
  g_sd_stream_globals.streamBufferPool[28].data = g_sd_stream_globals.streamBlob + 3670016;
  g_sd_stream_globals.streamBufferPool[29].data = g_sd_stream_globals.streamBlob + 3801088;
  g_sd_stream_globals.streamBufferPool[30].data = g_sd_stream_globals.streamBlob + 3932160;
  g_sd_stream_globals.streamBufferPool[31].data = g_sd_stream_globals.streamBlob + 4063232;
  g_sd_stream_globals.streamBufferPool[32].data = g_sd_stream_globals.streamBlob + 0x400000;
  g_sd_stream_globals.streamBufferPool[33].data = g_sd_stream_globals.streamBlob + 4325376;
  g_sd_stream_globals.streamBufferPool[34].data = g_sd_stream_globals.streamBlob + 4456448;
  g_sd_stream_globals.streamBufferPool[35].data = g_sd_stream_globals.streamBlob + 4587520;
  g_sd_stream_globals.streamBufferPool[36].data = g_sd_stream_globals.streamBlob + 4718592;
  g_sd_stream_globals.streamBufferPool[37].data = g_sd_stream_globals.streamBlob + 4849664;
  g_sd_stream_globals.streamBufferPool[38].data = g_sd_stream_globals.streamBlob + 4980736;
  g_sd_stream_globals.streamBufferPool[39].data = g_sd_stream_globals.streamBlob + 5111808;
  g_sd_stream_globals.streamBufferPool[40].data = g_sd_stream_globals.streamBlob + 5242880;
  g_sd_stream_globals.streamBufferPool[41].data = g_sd_stream_globals.streamBlob + 5373952;
  g_sd_stream_globals.streamIoActive = 0;
}

/*
==============
SD_StreamPrint
==============
*/
void SD_StreamPrint(const char *str)
{
  ;
}

/*
==============
SD_StreamReadCallback
==============
*/
void SD_StreamReadCallback(int id, int result, __int64 numBytesRead, void *b)
{
  __int64 v7; 
  bool v8; 
  int v9; 
  unsigned int v10; 
  unsigned int v11; 
  const dvar_t *v12; 
  unsigned int flags; 
  __int64 v14; 
  _BYTE *v15; 
  int v16; 
  char *fmt; 

  if ( *((_DWORD *)b + 73) != id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 81, ASSERT_TYPE_ASSERT, "( buffer->requestId ) == ( id )", "%s == %s\n\t%i, %i", "buffer->requestId", (const char *)&valueOut, *((_DWORD *)b + 73), id) )
    __debugbreak();
  switch ( result )
  {
    case 0:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 86, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SD_StreamReadCallback: FileStreamStatus::INVALID") )
        __debugbreak();
      goto LABEL_37;
    case 3:
    case 4:
    case 6:
      *((_DWORD *)b + 72) = Sys_Milliseconds();
      *((_BYTE *)b + 305) = 1;
      goto LABEL_37;
    case 7:
    case 8:
      v7 = *((_QWORD *)b + 34);
      if ( v7 == numBytesRead )
      {
        v8 = 1;
      }
      else
      {
        Com_PrintError(9, "SD_StreamReadCallback readSize Error: %zi != %zi, '%s'\n", v7, numBytesRead, (const char *)b + 4);
        *((_QWORD *)b + 34) = numBytesRead;
        *((_BYTE *)b + 305) = numBytesRead == 0;
        v8 = numBytesRead != 0;
      }
      *((_BYTE *)b + 304) = v8;
      v9 = Sys_Milliseconds();
      v10 = *((_DWORD *)b + 70);
      *((_DWORD *)b + 72) = v9;
      v11 = v9 - *((_DWORD *)b + 71);
      if ( v10 )
      {
        if ( v10 >= v11 )
          goto LABEL_19;
        LODWORD(fmt) = v10;
      }
      else
      {
        if ( v11 <= 0x3E8 )
          goto LABEL_19;
        LODWORD(fmt) = 1000;
      }
      Com_PrintWarning(9, "read request %s took %dms instead of %dms\n", (const char *)b + 4, v11, fmt);
      if ( ((unsigned __int8)&g_sd_stream_globals.streamStarvationCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd_stream_globals.streamStarvationCount) )
        __debugbreak();
      _InterlockedIncrement(&g_sd_stream_globals.streamStarvationCount);
LABEL_19:
      v12 = DVARBOOL_snd_invalid_stream_buffer_validation_enable;
      if ( !DVARBOOL_snd_invalid_stream_buffer_validation_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_invalid_stream_buffer_validation_enable") )
        __debugbreak();
      if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
      {
        flags = v12->flags;
        if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v12->name) )
          __debugbreak();
      }
      if ( v12->current.enabled )
      {
        v14 = *((_QWORD *)b + 34);
        if ( v14 > 0 )
        {
          v15 = (_BYTE *)*((_QWORD *)b + 37);
          v16 = 0;
          while ( !*v15 )
          {
            ++v16;
            ++v15;
            if ( v16 >= v14 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_stream.cpp", 152, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SD_StreamReadCallback detected all zeros in the stream buffer! Size %zi, '%s'\n", v14, (const char *)b + 4) )
                __debugbreak();
              *((_WORD *)b + 152) = 256;
              break;
            }
          }
        }
      }
LABEL_37:
      if ( ((unsigned __int8)b & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", b) )
        __debugbreak();
      _InterlockedDecrement((volatile signed __int32 *)b);
      if ( ((unsigned __int8)&g_sd_stream_globals.streamIoActive & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd_stream_globals.streamIoActive) )
        __debugbreak();
      _InterlockedDecrement(&g_sd_stream_globals.streamIoActive);
      return;
    default:
      goto LABEL_37;
  }
}

/*
==============
SD_StreamShutdown
==============
*/
void SD_StreamShutdown(void)
{
  ;
}

