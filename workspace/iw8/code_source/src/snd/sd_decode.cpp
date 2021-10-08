/*
==============
SD_DecoderDecodeFrameCount
==============
*/

int __fastcall SD_DecoderDecodeFrameCount(sd_decoder *decoder)
{
  return ?SD_DecoderDecodeFrameCount@@YAHPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderShutdown
==============
*/

void SD_DecoderShutdown(void)
{
  ?SD_DecoderShutdown@@YAXXZ();
}

/*
==============
SD_DecoderCreate
==============
*/

void __fastcall SD_DecoderCreate(sd_decoder *decoder, const SndAssetBankEntry *entry)
{
  ?SD_DecoderCreate@@YAXPEAUsd_decoder@@PEBUSndAssetBankEntry@@@Z(decoder, entry);
}

/*
==============
SD_DecoderThreadMain
==============
*/

void __fastcall SD_DecoderThreadMain(unsigned int threadContext)
{
  ?SD_DecoderThreadMain@@YAXI@Z(threadContext);
}

/*
==============
SD_DecoderBufferSubmit
==============
*/

void __fastcall SD_DecoderBufferSubmit(sd_decoder *decoder, const unsigned __int8 *data, __int64 size, bool eos, __int64 decodePos, __int64 frameSkip, __int64 filePos)
{
  ?SD_DecoderBufferSubmit@@YAXPEAUsd_decoder@@PEBE_J_N222@Z(decoder, data, size, eos, decodePos, frameSkip, filePos);
}

/*
==============
SD_DecoderAllocate
==============
*/

sd_decoder *__fastcall SD_DecoderAllocate(sd_source *source)
{
  return ?SD_DecoderAllocate@@YAPEAUsd_decoder@@PEAUsd_source@@@Z(source);
}

/*
==============
SD_DecoderPostFrame
==============
*/

void SD_DecoderPostFrame(void)
{
  ?SD_DecoderPostFrame@@YAXXZ();
}

/*
==============
SD_DecoderQueryAvailableData
==============
*/

unsigned int __fastcall SD_DecoderQueryAvailableData(sd_decoder *decoder, unsigned int desired)
{
  return ?SD_DecoderQueryAvailableData@@YAIPEAUsd_decoder@@I@Z(decoder, desired);
}

/*
==============
SD_DecoderConsume
==============
*/

void __fastcall SD_DecoderConsume(sd_decoder *decoder, unsigned int channelCount, unsigned int count, float *frames)
{
  ?SD_DecoderConsume@@YAXPEAUsd_decoder@@IIPEAM@Z(decoder, channelCount, count, frames);
}

/*
==============
SD_DecoderSeek
==============
*/

void __fastcall SD_DecoderSeek(sd_decoder *decoder, const unsigned __int8 *seekTable, const __int64 seekTableSize, const __int64 frameCount, const __int64 startFrame, __int64 *outDecodePos, __int64 *outFrameSkip)
{
  ?SD_DecoderSeek@@YAXPEAUsd_decoder@@PEBE_J22PEA_J3@Z(decoder, seekTable, seekTableSize, frameCount, startFrame, outDecodePos, outFrameSkip);
}

/*
==============
SD_DecoderDump
==============
*/

void __fastcall SD_DecoderDump(const sd_decoder *decoder)
{
  ?SD_DecoderDump@@YAXPEBUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderConsumeHybridPCM
==============
*/

void __fastcall SD_DecoderConsumeHybridPCM(sd_source *source, float *output)
{
  ?SD_DecoderConsumeHybridPCM@@YAXPEAUsd_source@@PEAM@Z(source, output);
}

/*
==============
SD_DecoderLock
==============
*/

void __fastcall SD_DecoderLock(sd_decoder *decoder)
{
  ?SD_DecoderLock@@YAXPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderPreFrame
==============
*/

void SD_DecoderPreFrame(void)
{
  ?SD_DecoderPreFrame@@YAXXZ();
}

/*
==============
SD_DecoderBufferReady
==============
*/

bool __fastcall SD_DecoderBufferReady(sd_decoder *decoder)
{
  return ?SD_DecoderBufferReady@@YA_NPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderEos
==============
*/

bool __fastcall SD_DecoderEos(sd_decoder *decoder)
{
  return ?SD_DecoderEos@@YA_NPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderOutputPump
==============
*/

bool __fastcall SD_DecoderOutputPump(sd_decoder *decoder, sd_source *source, sd_decoder_output *output)
{
  return ?SD_DecoderOutputPump@@YA_NPEAUsd_decoder@@PEAUsd_source@@PEAUsd_decoder_output@@@Z(decoder, source, output);
}

/*
==============
SD_DecoderFree
==============
*/

void __fastcall SD_DecoderFree(sd_decoder *decoder)
{
  ?SD_DecoderFree@@YAXPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderMixThreadInit
==============
*/

bool __fastcall SD_DecoderMixThreadInit(sd_decoder *decoder)
{
  return ?SD_DecoderMixThreadInit@@YA_NPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderBufferComplete
==============
*/

bool __fastcall SD_DecoderBufferComplete(sd_decoder *decoder, void *pData)
{
  return ?SD_DecoderBufferComplete@@YA_NPEAUsd_decoder@@PEAX@Z(decoder, pData);
}

/*
==============
SD_DecoderUnlock
==============
*/

void __fastcall SD_DecoderUnlock(sd_decoder *decoder)
{
  ?SD_DecoderUnlock@@YAXPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderAllocate
==============
*/
sd_decoder *SD_DecoderAllocate(sd_source *source)
{
  const SndAssetBankEntry *entry; 
  __int64 format; 
  sd_decoder *acpXmaPool; 
  unsigned int v6; 
  unsigned int v7; 
  sd_decoder *v8; 
  volatile signed __int32 *v9; 
  sd_decoder *v10; 
  signed __int32 v11[8]; 
  const SndAssetBankEntry *v12; 

  entry = source->entry;
  v12 = source->entry;
  if ( source->entry )
  {
    format = entry->format;
    switch ( entry->format )
    {
      case 4u:
        acpXmaPool = g_sd.acpXmaPool;
        v6 = 113;
        break;
      case 0xCu:
        acpXmaPool = g_sd.revPool;
        v6 = 5;
        break;
      case 0xDu:
        acpXmaPool = g_sd.opusPool;
        v6 = 5;
        break;
      default:
        Com_Printf(9, "sound no decoder for asset type %d\n", entry->format);
        return 0i64;
    }
    Sys_ProfBeginNamedEvent(0xFFFF00u, "SD_DecoderAllocate");
    v7 = 0;
    v8 = acpXmaPool;
    while ( 1 )
    {
      if ( v8->state == SD_DECODER_FREE )
      {
        v9 = (volatile signed __int32 *)&acpXmaPool[v7];
        if ( ((unsigned __int8)v9 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &acpXmaPool[v7]) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(v9, 1, 0) )
          break;
      }
      ++v7;
      ++v8;
      if ( v7 >= v6 )
      {
        v10 = NULL;
        goto LABEL_20;
      }
    }
    v10 = &acpXmaPool[v7];
    v10->lastBuffer = NULL;
    v10->framesDecoded = 0i64;
    *(_QWORD *)&v10->output.head = 0i64;
    v10->output.starving = 0;
    v10->pitchFraction = 0.0;
    v10->done = 0;
    v10->source = source;
    *(_WORD *)&v10->eos = 0;
    v10->format = format;
    v10->starvingVoiceIndex = -1;
    v10->output.priming = 1;
    if ( !g_sd.decoderInterfaces[format].Create && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 317, ASSERT_TYPE_ASSERT, "(g_sd.decoderInterfaces[decoder->format].Create)", (const char *)&queryFormat, "g_sd.decoderInterfaces[decoder->format].Create") )
      __debugbreak();
    g_sd.decoderInterfaces[(__int64)(int)v10->format].Create(&acpXmaPool[v7], v12);
    _InterlockedOr(v11, 0);
    if ( !source->stream )
      SD_SourceUpdate(source, &acpXmaPool[v7]);
    v10->state = SD_DECODER_RUNNING;
LABEL_20:
    Sys_ProfEndNamedEvent();
    return v10;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 181, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No voice source SndAssetBankEntry assigned!") )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
SD_DecoderBufferComplete
==============
*/
__int64 SD_DecoderBufferComplete(sd_decoder *decoder, void *pData)
{
  if ( !g_sd.decoderInterfaces[(__int64)(int)decoder->format].BufferComplete && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 292, ASSERT_TYPE_ASSERT, "(g_sd.decoderInterfaces[decoder->format].BufferComplete)", (const char *)&queryFormat, "g_sd.decoderInterfaces[decoder->format].BufferComplete") )
    __debugbreak();
  return ((__int64 (__fastcall *)(sd_decoder *, void *))g_sd.decoderInterfaces[(__int64)(int)decoder->format].BufferComplete)(decoder, pData);
}

/*
==============
SD_DecoderBufferReady
==============
*/
__int64 SD_DecoderBufferReady(sd_decoder *decoder)
{
  if ( !g_sd.decoderInterfaces[(__int64)(int)decoder->format].BufferReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 298, ASSERT_TYPE_ASSERT, "(g_sd.decoderInterfaces[decoder->format].BufferReady)", (const char *)&queryFormat, "g_sd.decoderInterfaces[decoder->format].BufferReady") )
    __debugbreak();
  return ((__int64 (__fastcall *)(sd_decoder *))g_sd.decoderInterfaces[(__int64)(int)decoder->format].BufferReady)(decoder);
}

/*
==============
SD_DecoderBufferSubmit
==============
*/
void SD_DecoderBufferSubmit(sd_decoder *decoder, const unsigned __int8 *data, __int64 size, bool eos, __int64 decodePos, __int64 frameSkip, __int64 filePos)
{
  if ( !g_sd.decoderInterfaces[(__int64)(int)decoder->format].BufferSubmit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 304, ASSERT_TYPE_ASSERT, "(g_sd.decoderInterfaces[decoder->format].BufferSubmit)", (const char *)&queryFormat, "g_sd.decoderInterfaces[decoder->format].BufferSubmit") )
    __debugbreak();
  ((void (__fastcall *)(sd_decoder *, const unsigned __int8 *, __int64, bool))g_sd.decoderInterfaces[(__int64)(int)decoder->format].BufferSubmit)(decoder, data, size, eos);
}

/*
==============
SD_DecoderConsume
==============
*/
void SD_DecoderConsume(sd_decoder *decoder, unsigned int channelCount, unsigned int count, float *frames)
{
  if ( (count & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 310, ASSERT_TYPE_ASSERT, "(count%8 == 0)", (const char *)&queryFormat, "count%SD_DECODER_GRANULARITY == 0") )
    __debugbreak();
  if ( !g_sd.decoderInterfaces[(__int64)(int)decoder->format].Consume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 311, ASSERT_TYPE_ASSERT, "(g_sd.decoderInterfaces[decoder->format].Consume)", (const char *)&queryFormat, "g_sd.decoderInterfaces[decoder->format].Consume") )
    __debugbreak();
  g_sd.decoderInterfaces[(__int64)(int)decoder->format].Consume(decoder, channelCount, count, frames);
}

/*
==============
SD_DecoderConsumeHybridPCM
==============
*/
void SD_DecoderConsumeHybridPCM(sd_source *source, float *output)
{
  unsigned int HybridPCMFrameCount; 
  int channelCount; 
  __int16 in[1024]; 

  if ( ((unsigned __int8)in & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 532, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( tmpInput ) ) & 15 ) == 0 ) )", "( ( ( uintptr_t )tmpInput ) ) = 0x%llx", in) )
    __debugbreak();
  HybridPCMFrameCount = SD_SourceGetHybridPCMFrameCount(source);
  channelCount = source->entry->channelCount;
  memcpy_0(in, source->loaded.pcmData, source->loaded.pcmDataSize);
  SND_DspShort8ToFloat4(HybridPCMFrameCount * channelCount, in, output);
}

/*
==============
SD_DecoderCreate
==============
*/
void SD_DecoderCreate(sd_decoder *decoder, const SndAssetBankEntry *entry)
{
  if ( !g_sd.decoderInterfaces[(__int64)(int)decoder->format].Create && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 317, ASSERT_TYPE_ASSERT, "(g_sd.decoderInterfaces[decoder->format].Create)", (const char *)&queryFormat, "g_sd.decoderInterfaces[decoder->format].Create") )
    __debugbreak();
  g_sd.decoderInterfaces[(__int64)(int)decoder->format].Create(decoder, entry);
}

/*
==============
SD_DecoderDecodeFrameCount
==============
*/
__int64 SD_DecoderDecodeFrameCount(sd_decoder *decoder)
{
  if ( !g_sd.decoderInterfaces[(__int64)(int)decoder->format].DecodeFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 348, ASSERT_TYPE_ASSERT, "(g_sd.decoderInterfaces[decoder->format].DecodeFrameCount)", (const char *)&queryFormat, "g_sd.decoderInterfaces[decoder->format].DecodeFrameCount") )
    __debugbreak();
  return ((__int64 (__fastcall *)(sd_decoder *))g_sd.decoderInterfaces[(__int64)(int)decoder->format].DecodeFrameCount)(decoder);
}

/*
==============
SD_DecoderDump
==============
*/
void SD_DecoderDump(const sd_decoder *decoder)
{
  sd_source *source; 
  unsigned __int8 *stream; 
  const SndAssetBankEntry *entry; 

  source = decoder->source;
  if ( source )
  {
    stream = (unsigned __int8 *)source->stream;
    entry = source->entry;
  }
  else
  {
    stream = NULL;
    entry = NULL;
  }
  Com_Printf(9, "decoder state  : %d\n", (unsigned int)decoder->state);
  Com_Printf(9, "decoder source : %p\n", source);
  Com_Printf(9, "decoder last   : %p\n", decoder->lastBuffer);
  Com_Printf(9, "decoder decoded: %zu\n", decoder->framesDecoded);
  Com_Printf(9, "decoder eos    : %d\n", decoder->eos);
  Com_Printf(9, "decoder starve : %d\n", (unsigned int)decoder->starvingVoiceIndex);
  Com_Printf(9, "decoder format : %d\n", (unsigned int)decoder->format);
  if ( source )
  {
    Com_Printf(9, "decoder alias  : %s\n", source->alias->aliasName);
    Com_Printf(9, "decoder asset  : %s\n", source->alias->assetFileName);
    Com_Printf(9, "source stream  : %p\n", stream);
    Com_Printf(9, "source primed  : %d\n", source->primed);
    Com_Printf(9, "source error   : %d\n", source->error);
    Com_Printf(9, "source eos     : %d\n", source->eos);
    Com_Printf(9, "source startFra: %zu\n", source->startFrame);
    if ( entry )
    {
      Com_Printf(9, "entry id         : %u\n", entry->id);
      Com_Printf(9, "entry size       : %d\n", entry->size);
      Com_Printf(9, "entry seek size  : %d\n", entry->seekTableSize);
      Com_Printf(9, "entry offset     : %ld\n", entry->offset);
      Com_Printf(9, "entry count      : %d\n", entry->frameCount);
      Com_Printf(9, "entry rate\t\t: %x\n", (unsigned int)entry->frameRate);
      Com_Printf(9, "entry channels   : %x\n", entry->channelCount);
      Com_Printf(9, "entry looping    : %x\n", entry->looping);
      Com_Printf(9, "entry format     : %x\n", entry->format);
    }
    if ( stream )
    {
      Com_Printf(9, "stream used      : %d\n", *stream);
      Com_Printf(9, "stream filename  : %s\n", *((const char **)stream + 1));
      Com_Printf(9, "stream prime buf : %p\n", *((const void **)stream + 39));
      Com_Printf(9, "stream io buf    : %p\n", *((const void **)stream + 41));
      Com_Printf(9, "stream buf 0     : %p\n", *((const void **)stream + 43));
      Com_Printf(9, "stream buf 1     : %p\n", *((const void **)stream + 44));
      Com_Printf(9, "stream buf sub 0 : %d\n", stream[360]);
      Com_Printf(9, "stream buf sub 1 : %d\n", stream[361]);
      Com_Printf(9, "stream read ofs  : %zd\n", *((_QWORD *)stream + 46));
      Com_Printf(9, "stream prime data: %p\n", *((const void **)stream + 49));
      Com_Printf(9, "stream prime size: %d\n", *((unsigned int *)stream + 100));
      Com_Printf(9, "stream handle    : %d\n", *((unsigned int *)stream + 101));
    }
    else
    {
      Com_Printf(9, "loaded size      : %d\n", source->loaded.dataSize);
    }
  }
}

/*
==============
SD_DecoderEos
==============
*/
bool SD_DecoderEos(sd_decoder *decoder)
{
  return decoder->eos;
}

/*
==============
SD_DecoderFree
==============
*/
void SD_DecoderFree(sd_decoder *decoder)
{
  signed __int32 v2[8]; 

  Sys_ProfBeginNamedEvent(0xFFFF00u, "SD_DecoderFree");
  if ( !g_sd.decoderInterfaces[(__int64)(int)decoder->format].Free && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 257, ASSERT_TYPE_ASSERT, "(g_sd.decoderInterfaces[decoder->format].Free)", (const char *)&queryFormat, "g_sd.decoderInterfaces[decoder->format].Free") )
    __debugbreak();
  decoder->state = (__int64)g_sd.decoderInterfaces[(__int64)(int)decoder->format].Free(decoder);
  _InterlockedOr(v2, 0);
  decoder->eos = 1;
  decoder->source = NULL;
  decoder->lastBuffer = NULL;
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_DecoderLock
==============
*/
void SD_DecoderLock(sd_decoder *decoder)
{
  Sys_ProfBeginNamedEvent(0xFFFF00u, "SD_DecoderLock");
  if ( !g_sd.decoderInterfaces[(__int64)(int)decoder->format].Lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 273, ASSERT_TYPE_ASSERT, "(g_sd.decoderInterfaces[decoder->format].Lock)", (const char *)&queryFormat, "g_sd.decoderInterfaces[decoder->format].Lock") )
    __debugbreak();
  g_sd.decoderInterfaces[(__int64)(int)decoder->format].Lock(decoder);
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_DecoderMixThreadInit
==============
*/
bool SD_DecoderMixThreadInit(sd_decoder *decoder)
{
  __int64 (*MixThreadInit)(void); 

  MixThreadInit = (__int64 (*)(void))g_sd.decoderInterfaces[(__int64)(int)decoder->format].MixThreadInit;
  if ( MixThreadInit )
    return MixThreadInit();
  else
    return 0;
}

/*
==============
SD_DecoderOutputPump
==============
*/
char SD_DecoderOutputPump(sd_decoder *decoder, sd_source *source, sd_decoder_output *output)
{
  char v4; 
  unsigned int ChannelCount; 
  void *lastBuffer; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int AvailableData; 
  unsigned int v13; 
  unsigned int head; 
  unsigned int v15; 
  float *v16; 
  unsigned int v17; 

  v4 = 0;
  ChannelCount = SD_SourceGetChannelCount(source);
  if ( ChannelCount - 1 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 360, ASSERT_TYPE_ASSERT, "( ( channelCount == 1 || channelCount == 2 ) )", "( channelCount ) = %i", ChannelCount) )
    __debugbreak();
  if ( decoder )
  {
    if ( output->head >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 366, ASSERT_TYPE_ASSERT, "(output->head < ((( 256 )*( 2 ))*( 2 )))", (const char *)&queryFormat, "output->head < SD_MIX_DECODE_SAMPLE_COUNT") )
      __debugbreak();
    if ( output->count > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 367, ASSERT_TYPE_ASSERT, "(output->count <= ((( 256 )*( 2 ))*( 2 )))", (const char *)&queryFormat, "output->count <= SD_MIX_DECODE_SAMPLE_COUNT") )
      __debugbreak();
    if ( output->count >= 0x200 )
      return 0;
    Sys_ProfBeginNamedEvent(0xFFFF00u, "SD_DecoderLock");
    if ( !g_sd.decoderInterfaces[(__int64)(int)decoder->format].Lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 273, ASSERT_TYPE_ASSERT, "(g_sd.decoderInterfaces[decoder->format].Lock)", (const char *)&queryFormat, "g_sd.decoderInterfaces[decoder->format].Lock") )
      __debugbreak();
    g_sd.decoderInterfaces[(__int64)(int)decoder->format].Lock(decoder);
    Sys_ProfEndNamedEvent();
    lastBuffer = decoder->lastBuffer;
    v10 = 0x400 / ChannelCount;
    v11 = 0x400 / ChannelCount - output->count;
    if ( !lastBuffer )
      goto LABEL_36;
    if ( !g_sd.decoderInterfaces[(__int64)(int)decoder->format].BufferComplete && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 292, ASSERT_TYPE_ASSERT, "(g_sd.decoderInterfaces[decoder->format].BufferComplete)", (const char *)&queryFormat, "g_sd.decoderInterfaces[decoder->format].BufferComplete") )
      __debugbreak();
    if ( g_sd.decoderInterfaces[(__int64)(int)decoder->format].BufferComplete(decoder, lastBuffer) && decoder->eos && SD_DecoderQueryAvailableData(decoder, 0) < 8 && !source->entry->looping )
    {
      v4 = 1;
    }
    else
    {
LABEL_36:
      AvailableData = SD_DecoderQueryAvailableData(decoder, v11);
      if ( v11 > AvailableData )
        v11 = AvailableData;
      v13 = v11 & 0xFFFFFFF8;
      if ( v13 )
      {
        head = output->head;
        do
        {
          v15 = v13;
          if ( v13 >= v10 - head )
            v15 = v10 - head;
          v16 = &output->buffer[ChannelCount * head];
          if ( (v15 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 310, ASSERT_TYPE_ASSERT, "(count%8 == 0)", (const char *)&queryFormat, "count%SD_DECODER_GRANULARITY == 0") )
            __debugbreak();
          if ( !g_sd.decoderInterfaces[(__int64)(int)decoder->format].Consume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 311, ASSERT_TYPE_ASSERT, "(g_sd.decoderInterfaces[decoder->format].Consume)", (const char *)&queryFormat, "g_sd.decoderInterfaces[decoder->format].Consume") )
            __debugbreak();
          g_sd.decoderInterfaces[(__int64)(int)decoder->format].Consume(decoder, ChannelCount, v15, v16);
          v17 = output->head;
          output->count += v15;
          head = (v15 + v17) % v10;
          output->head = head;
          v13 -= v15;
        }
        while ( v13 );
        v4 = 0;
      }
    }
    if ( output->count > v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 422, ASSERT_TYPE_ASSERT, "(output->count <= totalFrameCount)", (const char *)&queryFormat, "output->count <= totalFrameCount") )
      __debugbreak();
    if ( output->head >= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 423, ASSERT_TYPE_ASSERT, "(output->head < totalFrameCount)", (const char *)&queryFormat, "output->head < totalFrameCount") )
      __debugbreak();
    if ( !g_sd.decoderInterfaces[(__int64)(int)decoder->format].Unlock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 280, ASSERT_TYPE_ASSERT, "(g_sd.decoderInterfaces[decoder->format].Unlock)", (const char *)&queryFormat, "g_sd.decoderInterfaces[decoder->format].Unlock") )
      __debugbreak();
    g_sd.decoderInterfaces[(__int64)(int)decoder->format].Unlock(decoder);
  }
  return v4;
}

/*
==============
SD_DecoderPostFrame
==============
*/
void SD_DecoderPostFrame(void)
{
  int v0; 
  void (__fastcall **p_Frame)(); 
  __int64 v2; 

  v0 = Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "decoder post");
  p_Frame = &g_sd.decoderInterfaces[0].Frame;
  v2 = 14i64;
  do
  {
    if ( *p_Frame )
      (*p_Frame)();
    p_Frame += 16;
    --v2;
  }
  while ( v2 );
  Sys_SetEvent(&g_sd.decodeEvent);
  g_sd.decodePostTimeUsec = Sys_Microseconds() - v0;
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_DecoderPreFrame
==============
*/
void SD_DecoderPreFrame(void)
{
  int v0; 
  void (__fastcall **p_Frame)(); 
  __int64 v2; 

  v0 = Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "decoder pre");
  p_Frame = &g_sd.decoderInterfaces[0].Frame;
  v2 = 14i64;
  do
  {
    if ( *p_Frame )
      (*p_Frame)();
    p_Frame += 16;
    --v2;
  }
  while ( v2 );
  Sys_SetEvent(&g_sd.decodeEvent);
  g_sd.decodePreTimeUsec = Sys_Microseconds() - v0;
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_DecoderQueryAvailableData
==============
*/
__int64 SD_DecoderQueryAvailableData(sd_decoder *decoder, unsigned int desired)
{
  if ( !g_sd.decoderInterfaces[(__int64)(int)decoder->format].QueryAvailableData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 286, ASSERT_TYPE_ASSERT, "(g_sd.decoderInterfaces[decoder->format].QueryAvailableData)", (const char *)&queryFormat, "g_sd.decoderInterfaces[decoder->format].QueryAvailableData") )
    __debugbreak();
  return ((__int64 (__fastcall *)(sd_decoder *, _QWORD))g_sd.decoderInterfaces[(__int64)(int)decoder->format].QueryAvailableData)(decoder, desired);
}

/*
==============
SD_DecoderSeek
==============
*/
void SD_DecoderSeek(sd_decoder *decoder, const unsigned __int8 *seekTable, const __int64 seekTableSize, const __int64 frameCount)
{
  void (__fastcall *Seek)(sd_decoder *, const unsigned __int8 *, const __int64, const __int64, const __int64, __int64 *, __int64 *); 

  Seek = g_sd.decoderInterfaces[(__int64)(int)decoder->format].Seek;
  if ( Seek )
    ((void (__fastcall *)(sd_decoder *, const unsigned __int8 *, const __int64, const __int64))Seek)(decoder, seekTable, seekTableSize, frameCount);
}

/*
==============
SD_DecoderShutdown
==============
*/
void SD_DecoderShutdown(void)
{
  void (__fastcall **p_Shutdown)(); 
  __int64 v1; 

  p_Shutdown = &g_sd.decoderInterfaces[0].Shutdown;
  v1 = 14i64;
  do
  {
    if ( *p_Shutdown )
      (*p_Shutdown)();
    p_Shutdown += 16;
    --v1;
  }
  while ( v1 );
  g_sd.decodeThreadActive = 0;
  Sys_SetEvent(&g_sd.decodeEvent);
}

/*
==============
SD_DecoderThreadMain
==============
*/
void SD_DecoderThreadMain(unsigned int threadContext)
{
  int v1; 
  int v2; 
  void (__fastcall **p_ThreadUpdate)(); 
  __int64 v4; 

  for ( ; g_sd.decodeThreadActive; g_sd.decodeProcessTimeUsec -= g_sd.decodeThreadWaitTimeUsec )
  {
    v1 = Sys_Microseconds();
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "decode thread wait");
    Sys_WaitForSingleObject(&g_sd.decodeEvent);
    g_sd.decodeWaitTimeUsec = Sys_Microseconds() - v1;
    Sys_ProfEndNamedEvent();
    v2 = Sys_Microseconds();
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "decode process");
    p_ThreadUpdate = &g_sd.decoderInterfaces[0].ThreadUpdate;
    v4 = 14i64;
    do
    {
      if ( *p_ThreadUpdate )
        (*p_ThreadUpdate)();
      p_ThreadUpdate += 16;
      --v4;
    }
    while ( v4 );
    g_sd.decodeProcessTimeUsec = Sys_Microseconds() - v2;
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
SD_DecoderUnlock
==============
*/
void SD_DecoderUnlock(sd_decoder *decoder)
{
  if ( !g_sd.decoderInterfaces[(__int64)(int)decoder->format].Unlock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode.cpp", 280, ASSERT_TYPE_ASSERT, "(g_sd.decoderInterfaces[decoder->format].Unlock)", (const char *)&queryFormat, "g_sd.decoderInterfaces[decoder->format].Unlock") )
    __debugbreak();
  g_sd.decoderInterfaces[(__int64)(int)decoder->format].Unlock(decoder);
}

