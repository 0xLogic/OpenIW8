/*
==============
SD_SourceShutdown
==============
*/

void __fastcall SD_SourceShutdown(sd_source *source)
{
  ?SD_SourceShutdown@@YAXPEAUsd_source@@@Z(source);
}

/*
==============
SD_SourceIsResident
==============
*/

bool __fastcall SD_SourceIsResident(sd_source *source)
{
  return ?SD_SourceIsResident@@YA_NPEAUsd_source@@@Z(source);
}

/*
==============
SD_SourceGetHybridPCMFrameCount
==============
*/

unsigned int __fastcall SD_SourceGetHybridPCMFrameCount(sd_source *source)
{
  return ?SD_SourceGetHybridPCMFrameCount@@YAIPEAUsd_source@@@Z(source);
}

/*
==============
SD_SourceError
==============
*/

bool __fastcall SD_SourceError(sd_source *source)
{
  return ?SD_SourceError@@YA_NPEAUsd_source@@@Z(source);
}

/*
==============
SD_SourceIsLooping
==============
*/

bool __fastcall SD_SourceIsLooping(sd_source *source)
{
  return ?SD_SourceIsLooping@@YA_NPEAUsd_source@@@Z(source);
}

/*
==============
SD_SourcePrime
==============
*/

void __fastcall SD_SourcePrime(sd_source *source)
{
  ?SD_SourcePrime@@YAXPEAUsd_source@@@Z(source);
}

/*
==============
SD_SourceGetChannelCount
==============
*/

unsigned int __fastcall SD_SourceGetChannelCount(sd_source *source)
{
  return ?SD_SourceGetChannelCount@@YAIPEAUsd_source@@@Z(source);
}

/*
==============
SD_SourceGetFileSize
==============
*/

unsigned int __fastcall SD_SourceGetFileSize(sd_source *source)
{
  return ?SD_SourceGetFileSize@@YAIPEAUsd_source@@@Z(source);
}

/*
==============
SD_SourceGetFrameCount
==============
*/

unsigned int __fastcall SD_SourceGetFrameCount(sd_source *source)
{
  return ?SD_SourceGetFrameCount@@YAIPEAUsd_source@@@Z(source);
}

/*
==============
SD_SourceInitStream
==============
*/

void __fastcall SD_SourceInitStream(sd_source *source, const char *name, const SndAssetBankEntry *entry, FileStreamFileID fid, const unsigned __int8 *primeData, unsigned int primeSize)
{
  ?SD_SourceInitStream@@YAXPEAUsd_source@@PEBDPEBUSndAssetBankEntry@@W4FileStreamFileID@@PEBEI@Z(source, name, entry, fid, primeData, primeSize);
}

/*
==============
SD_SourceUpdate
==============
*/

void __fastcall SD_SourceUpdate(sd_source *source, sd_decoder *decoder)
{
  ?SD_SourceUpdate@@YAXPEAUsd_source@@PEAUsd_decoder@@@Z(source, decoder);
}

/*
==============
SD_SourceError
==============
*/
bool SD_SourceError(sd_source *source)
{
  if ( !source->entry )
    return 1;
  if ( source->stream )
    return source->error;
  return 0;
}

/*
==============
SD_SourceGetChannelCount
==============
*/
__int64 SD_SourceGetChannelCount(sd_source *source)
{
  return source->entry->channelCount;
}

/*
==============
SD_SourceGetFileSize
==============
*/
__int64 SD_SourceGetFileSize(sd_source *source)
{
  return source->entry->size;
}

/*
==============
SD_SourceGetFrameCount
==============
*/
__int64 SD_SourceGetFrameCount(sd_source *source)
{
  return source->entry->frameCount;
}

/*
==============
SD_SourceGetHybridPCMFrameCount
==============
*/
__int64 SD_SourceGetHybridPCMFrameCount(sd_source *source)
{
  return (source->entry->hybridPcmSize / source->entry->channelCount) >> 1;
}

/*
==============
SD_SourceInitStream
==============
*/
void SD_SourceInitStream(sd_source *source, const char *name, const SndAssetBankEntry *entry, FileStreamFileID fid, const unsigned __int8 *primeData, unsigned int primeSize)
{
  const SndAssetBankEntry *v6; 
  unsigned __int8 channelCount; 
  sd_stream *v11; 

  v6 = entry;
  channelCount = entry->channelCount;
  if ( (unsigned __int8)(channelCount - 1) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 18, ASSERT_TYPE_ASSERT, "( ( entry->channelCount == 1 || entry->channelCount == 2 ) )", "( entry->channelCount ) = %i", channelCount) )
    __debugbreak();
  v11 = SD_StreamAllocate(name, v6, fid, primeData, primeSize);
  source->stream = v11;
  if ( !v11 )
    v6 = NULL;
  source->entry = v6;
  source->error = v11 == NULL;
  source->primed = v11 == NULL;
  source->eos = v11 == NULL;
}

/*
==============
SD_SourceIsLooping
==============
*/
bool SD_SourceIsLooping(sd_source *source)
{
  return source->entry->looping != 0;
}

/*
==============
SD_SourceIsResident
==============
*/
bool SD_SourceIsResident(sd_source *source)
{
  return source->loaded.data != NULL;
}

/*
==============
SD_SourcePrime
==============
*/
void SD_SourcePrime(sd_source *source)
{
  sd_stream *stream; 

  if ( !source->stream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 100, ASSERT_TYPE_ASSERT, "(source->stream)", (const char *)&queryFormat, "source->stream") )
    __debugbreak();
  stream = source->stream;
  if ( !stream->ioBuffer && !stream->primeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 101, ASSERT_TYPE_ASSERT, "(source->stream->ioBuffer || source->stream->primeData)", (const char *)&queryFormat, "source->stream->ioBuffer || source->stream->primeData") )
    __debugbreak();
  if ( source->stream->buffers[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 102, ASSERT_TYPE_ASSERT, "(!source->stream->buffers[0])", (const char *)&queryFormat, "!source->stream->buffers[0]") )
    __debugbreak();
  if ( source->stream->buffers[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 103, ASSERT_TYPE_ASSERT, "(!source->stream->buffers[1])", (const char *)&queryFormat, "!source->stream->buffers[1]") )
    __debugbreak();
  source->primed = 1;
}

/*
==============
SD_SourceShutdown
==============
*/
void SD_SourceShutdown(sd_source *source)
{
  sd_stream *stream; 

  stream = source->stream;
  if ( stream )
    SD_StreamFree(stream);
  *(_QWORD *)&source->loaded.dataSize = 0i64;
  source->loaded.data = NULL;
  source->loaded.seekTable = NULL;
  *(_QWORD *)&source->loaded.seekTableSize = 0i64;
  source->loaded.pcmData = NULL;
  *(_QWORD *)&source->loaded.pcmDataSize = 0i64;
  source->stream = NULL;
  *(_WORD *)&source->primed = 256;
  source->eos = 1;
  source->startFrame = 0i64;
  source->alias = NULL;
  source->entry = NULL;
}

/*
==============
SD_SourceStreamUpdateStep
==============
*/
bool SD_SourceStreamUpdateStep(sd_source *source, sd_decoder *decoder)
{
  sd_stream *stream; 
  sd_stream_buffer *ioBuffer; 
  sd_stream_buffer **buffers; 
  sd_stream_buffer *v7; 
  sd_stream_buffer *v8; 
  sd_stream_buffer *v9; 
  bool v10; 
  sd_stream_buffer *v11; 
  unsigned __int64 startFrame; 
  const SndAssetBankEntry *entry; 
  sd_stream_buffer *v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int64 seekTableSize; 
  unsigned __int64 v18; 
  bool result; 
  const SndAssetBankEntry *v20; 
  unsigned int v21; 
  sd_stream_buffer *v22; 
  sd_stream *v23; 
  sd_stream_buffer *v24; 
  sd_stream_buffer *v25; 
  bool v26; 
  __int64 readOffset; 
  const SndAssetBankEntry *v28; 
  __int64 v29; 
  unsigned int v30; 
  sd_stream_buffer *v31; 
  __int64 size; 
  bool *buffersSubmitted; 
  __int64 v34; 
  sd_stream_buffer *lastBuffer; 
  __int64 outFrameSkip; 
  __int64 outDecodePos; 

  if ( !source->stream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 116, ASSERT_TYPE_ASSERT, "(source->stream)", (const char *)&queryFormat, "source->stream") )
    __debugbreak();
  stream = source->stream;
  if ( source->error )
  {
    if ( !source->eos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 121, ASSERT_TYPE_ASSERT, "(source->eos)", (const char *)&queryFormat, "source->eos") )
      __debugbreak();
    return 0;
  }
  ioBuffer = stream->ioBuffer;
  if ( ioBuffer && !ioBuffer->refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 125, ASSERT_TYPE_ASSERT, "(!stream->ioBuffer || stream->ioBuffer->refCount)", (const char *)&queryFormat, "!stream->ioBuffer || stream->ioBuffer->refCount") )
    __debugbreak();
  buffers = stream->buffers;
  v7 = stream->buffers[0];
  if ( v7 && !v7->refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 126, ASSERT_TYPE_ASSERT, "(!stream->buffers[0] || stream->buffers[0]->refCount)", (const char *)&queryFormat, "!stream->buffers[0] || stream->buffers[0]->refCount") )
    __debugbreak();
  v8 = stream->buffers[1];
  if ( v8 && !v8->refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 127, ASSERT_TYPE_ASSERT, "(!stream->buffers[1] || stream->buffers[1]->refCount)", (const char *)&queryFormat, "!stream->buffers[1] || stream->buffers[1]->refCount") )
    __debugbreak();
  v9 = stream->ioBuffer;
  if ( v9 )
    v10 = SD_StreamBufferReady(v9);
  else
    v10 = 0;
  if ( !decoder || decoder->error )
    return 0;
  if ( SD_StreamBufferError(stream->ioBuffer) )
  {
    v11 = stream->ioBuffer;
    stream->readOffset -= v11->readSize;
    SD_StreamBufferFree(v11);
    stream->ioBuffer = NULL;
    return 0;
  }
  if ( source->primed )
    goto LABEL_138;
  startFrame = source->startFrame;
  if ( startFrame && v10 && stream->readOffset == -1 )
  {
    entry = source->entry;
    v14 = stream->ioBuffer;
    outDecodePos = 0i64;
    outFrameSkip = 0i64;
    SD_DecoderSeek(decoder, v14->data, entry->seekTableSize, entry->frameCount, startFrame, &outDecodePos, &outFrameSkip);
    SD_StreamBufferFree(stream->ioBuffer);
    v15 = outDecodePos;
    if ( outDecodePos )
    {
      v16 = outFrameSkip;
      if ( source->entry->size <= 0x20000 )
      {
        source->startFrame = 0i64;
        stream->readOffset = 0i64;
        stream->decodeStartPos = v15;
        stream->frameSkip = v16;
LABEL_37:
        stream->ioBuffer = NULL;
        if ( *buffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 175, ASSERT_TYPE_ASSERT, "(stream->buffers[0] == 0)", (const char *)&queryFormat, "stream->buffers[0] == NULL") )
          __debugbreak();
        if ( stream->buffers[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 176, ASSERT_TYPE_ASSERT, "(stream->buffers[1] == 0)", (const char *)&queryFormat, "stream->buffers[1] == NULL") )
        {
LABEL_100:
          __debugbreak();
          return 1;
        }
        return 1;
      }
      stream->readOffset = outDecodePos;
      stream->frameSkip = v16;
    }
    else
    {
      source->startFrame = 0i64;
      stream->readOffset = 0i64;
      stream->frameSkip = 0i64;
    }
    stream->decodeStartPos = 0i64;
    goto LABEL_37;
  }
  if ( !stream->ioBuffer )
  {
    if ( startFrame && !stream->readOffset )
    {
      seekTableSize = source->entry->seekTableSize;
      if ( seekTableSize > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 184, ASSERT_TYPE_ASSERT, "(size <= (128*1024U))", (const char *)&queryFormat, "size <= SD_STREAM_BUFFER_SIZE") )
        __debugbreak();
      if ( !(_DWORD)seekTableSize )
      {
        stream->readOffset = 0i64;
        stream->decodeStartPos = 0i64;
        v18 = source->startFrame;
        result = 1;
        if ( v18 >= source->entry->frameCount )
          v18 = 0i64;
        stream->frameSkip = v18;
        source->startFrame = 0i64;
        return result;
      }
      if ( (unsigned int)seekTableSize > 0x20000 )
      {
        stream->readOffset = 0i64;
        result = 1;
        stream->decodeStartPos = 0i64;
        stream->frameSkip = 0i64;
        source->startFrame = 0i64;
        return result;
      }
      v20 = source->entry;
      if ( stream->readOffset )
        v21 = 0x1F4u / v20->channelCount;
      else
        v21 = 0;
      v22 = SD_StreamBufferRead(stream->filename, v21, v20->offset, seekTableSize, (FileStreamFileID)*(_DWORD *)stream->fileHandle);
      stream->ioBuffer = v22;
      if ( v22 )
      {
        stream->readOffset = -1i64;
        return 1;
      }
LABEL_120:
      if ( source->primed )
      {
        buffersSubmitted = stream->buffersSubmitted;
        v34 = 2i64;
        do
        {
          if ( !*buffersSubmitted && *buffers && SD_DecoderBufferReady(decoder) )
          {
            if ( decoder->eos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 330, ASSERT_TYPE_ASSERT, "(!decoder->eos)", (const char *)&queryFormat, "!decoder->eos") )
              __debugbreak();
            if ( !(*buffers)->refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 331, ASSERT_TYPE_ASSERT, "(stream->buffers[i]->refCount)", (const char *)&queryFormat, "stream->buffers[i]->refCount") )
              __debugbreak();
            SD_DecoderBufferSubmit(decoder, (*buffers)->data, (*buffers)->readSize, *buffers == stream->lastBuffer, stream->decodeStartPos, stream->frameSkip, (*buffers)->offset - source->entry->seekTableSize - source->entry->offset);
            *buffersSubmitted = 1;
            lastBuffer = stream->lastBuffer;
            stream->frameSkip = 0i64;
            stream->decodeStartPos = 0i64;
            if ( decoder->eos != (*buffers == lastBuffer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 343, ASSERT_TYPE_ASSERT, "(decoder->eos == (stream->buffers[i] == stream->lastBuffer))", (const char *)&queryFormat, "decoder->eos == (stream->buffers[i] == stream->lastBuffer)") )
              __debugbreak();
          }
          ++buffers;
          ++buffersSubmitted;
          --v34;
        }
        while ( v34 );
      }
      return 0;
    }
    v23 = source->stream;
    if ( v23->primeData )
    {
      if ( !stream->readOffset )
      {
        stream->readOffset = v23->primeSize;
        stream->decodeStartPos = 0i64;
        stream->frameSkip = 0i64;
        source->eos = source->stream->primeSize == source->entry->size;
        if ( !SD_DecoderBufferReady(decoder) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 232, ASSERT_TYPE_ASSERT, "(SD_DecoderBufferReady( decoder ))", (const char *)&queryFormat, "SD_DecoderBufferReady( decoder )") )
          __debugbreak();
        if ( decoder->eos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 233, ASSERT_TYPE_ASSERT, "(!decoder->eos)", (const char *)&queryFormat, "!decoder->eos") )
          __debugbreak();
        SD_DecoderBufferSubmit(decoder, source->stream->primeData, source->stream->primeSize, source->eos, stream->decodeStartPos, stream->frameSkip, 0i64);
        SD_SourcePrime(source);
        return !source->eos;
      }
    }
  }
  if ( !v10 )
  {
LABEL_138:
    if ( !stream->buffersSubmitted[0] || !SD_DecoderBufferComplete(decoder, (*buffers)->data) )
    {
      v24 = stream->buffers[1];
      if ( v24 )
      {
        if ( !*buffers )
        {
          if ( !source->primed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 260, ASSERT_TYPE_ASSERT, "(source->primed)", (const char *)&queryFormat, "source->primed") )
            __debugbreak();
          v25 = stream->buffers[1];
          v26 = stream->buffersSubmitted[1];
          *buffers = v25;
          stream->buffersSubmitted[0] = v26;
          stream->buffers[1] = NULL;
          stream->buffersSubmitted[1] = 0;
          if ( !v25->refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 265, ASSERT_TYPE_ASSERT, "(stream->buffers[0]->refCount)", (const char *)&queryFormat, "stream->buffers[0]->refCount") )
            goto LABEL_100;
          return 1;
        }
      }
      else if ( v10 )
      {
        if ( !source->primed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 270, ASSERT_TYPE_ASSERT, "(source->primed)", (const char *)&queryFormat, "source->primed") )
          __debugbreak();
        stream->buffers[1] = stream->ioBuffer;
        stream->buffersSubmitted[1] = 0;
        stream->ioBuffer = NULL;
        if ( *buffers == stream->buffers[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 274, ASSERT_TYPE_ASSERT, "(stream->buffers[0] != stream->buffers[1])", (const char *)&queryFormat, "stream->buffers[0] != stream->buffers[1]") )
          __debugbreak();
        if ( !stream->buffers[1]->refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 275, ASSERT_TYPE_ASSERT, "(stream->buffers[1]->refCount)", (const char *)&queryFormat, "stream->buffers[1]->refCount") )
          goto LABEL_100;
        return 1;
      }
      if ( !stream->ioBuffer && !source->eos && (!v24 || v24->readSize < 0x20000) )
      {
        if ( stream->readOffset == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 283, ASSERT_TYPE_ASSERT, "(stream->readOffset != -1)", (const char *)&queryFormat, "stream->readOffset != -1") )
          __debugbreak();
        readOffset = stream->readOffset;
        v28 = source->entry;
        v29 = source->entry->size - readOffset;
        if ( v29 > 0x20000 )
          v29 = 0x20000i64;
        v30 = readOffset ? 0x1F4u / v28->channelCount : 0;
        v31 = SD_StreamBufferRead(stream->filename, v30, readOffset + v28->offset + v28->seekTableSize, v29, (FileStreamFileID)*(_DWORD *)stream->fileHandle);
        stream->ioBuffer = v31;
        if ( v31 )
        {
          stream->readOffset += v29;
          size = source->entry->size;
          if ( stream->readOffset >= size )
          {
            if ( source->entry->looping && (unsigned int)size > 0x20000 )
            {
              stream->readOffset = 0i64;
              return 1;
            }
            source->eos = 1;
            stream->lastBuffer = stream->ioBuffer;
          }
          return 1;
        }
      }
      goto LABEL_120;
    }
    if ( !(*buffers)->refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 252, ASSERT_TYPE_ASSERT, "(stream->buffers[0]->refCount)", (const char *)&queryFormat, "stream->buffers[0]->refCount") )
      __debugbreak();
    SD_StreamBufferFree(*buffers);
    result = 1;
    *buffers = NULL;
    stream->buffersSubmitted[0] = 0;
  }
  else
  {
    if ( *buffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 243, ASSERT_TYPE_ASSERT, "(!stream->buffers[0])", (const char *)&queryFormat, "!stream->buffers[0]") )
      __debugbreak();
    if ( stream->buffers[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 244, ASSERT_TYPE_ASSERT, "(!stream->buffers[1])", (const char *)&queryFormat, "!stream->buffers[1]") )
      __debugbreak();
    SD_SourcePrime(source);
    return 1;
  }
  return result;
}

/*
==============
SD_SourceUpdate
==============
*/
void SD_SourceUpdate(sd_source *source, sd_decoder *decoder)
{
  int v4; 
  unsigned __int64 startFrame; 
  const SndAssetBankEntry *entry; 
  unsigned int v7; 
  bool v8; 
  __int64 frameSkip; 
  __int64 decodePos; 

  if ( source->stream )
  {
    v4 = 0;
    if ( SD_SourceStreamUpdateStep(source, decoder) )
    {
      while ( (unsigned int)++v4 < 0xA )
      {
        if ( !SD_SourceStreamUpdateStep(source, decoder) )
          return;
      }
      *(_WORD *)&source->error = 257;
    }
  }
  else if ( decoder && !source->eos )
  {
    if ( decoder->state == SD_DECODER_FREE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 375, ASSERT_TYPE_ASSERT, "(decoder->state != SD_DECODER_FREE)", (const char *)&queryFormat, "decoder->state != SD_DECODER_FREE") )
      __debugbreak();
    if ( decoder->eos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 376, ASSERT_TYPE_ASSERT, "(!decoder->eos)", (const char *)&queryFormat, "!decoder->eos") )
      __debugbreak();
    decodePos = 0i64;
    frameSkip = 0i64;
    if ( source->loaded.dataSize )
    {
      startFrame = source->startFrame;
      entry = source->entry;
      if ( startFrame )
      {
        SD_DecoderSeek(decoder, source->loaded.seekTable, source->loaded.seekTableSize, entry->frameCount, startFrame, &decodePos, &frameSkip);
      }
      else
      {
        v7 = (entry->hybridPcmSize / entry->channelCount) >> 1;
        if ( v7 )
        {
          SD_DecoderSeek(decoder, source->loaded.seekTable, source->loaded.seekTableSize, entry->frameCount, v7, &decodePos, &frameSkip);
          if ( v7 > 0x400u / source->entry->channelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 394, ASSERT_TYPE_ASSERT, "(pcmFrameCount <= (uint)( ((( 256 )*( 2 ))*( 2 )) / source->entry->channelCount ))", (const char *)&queryFormat, "pcmFrameCount <= (uint)( SD_MIX_DECODE_SAMPLE_COUNT / source->entry->channelCount )") )
            __debugbreak();
          if ( decoder->output.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 395, ASSERT_TYPE_ASSERT, "(decoder->output.count == 0)", (const char *)&queryFormat, "decoder->output.count == 0") )
            __debugbreak();
          if ( decoder->output.head && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 396, ASSERT_TYPE_ASSERT, "(decoder->output.head == 0)", (const char *)&queryFormat, "decoder->output.head == 0") )
            __debugbreak();
          SD_DecoderConsumeHybridPCM(source, decoder->output.buffer);
          decoder->output.head += v7;
          decoder->output.count = v7;
        }
      }
      v8 = decoder->format != SND_ASSET_FORMAT_REV;
      SD_DecoderBufferSubmit(decoder, source->loaded.data, source->loaded.dataSize, v8, decodePos, frameSkip, 0i64);
      if ( decoder->eos != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_source.cpp", 408, ASSERT_TYPE_ASSERT, "(decoder->eos == eos)", (const char *)&queryFormat, "decoder->eos == eos") )
        __debugbreak();
      source->eos = 1;
    }
  }
}

