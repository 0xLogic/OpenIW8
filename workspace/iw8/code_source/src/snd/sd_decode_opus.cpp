/*
==============
SD_DecoderShutdownOpus
==============
*/

void SD_DecoderShutdownOpus(void)
{
  ?SD_DecoderShutdownOpus@@YAXXZ();
}

/*
==============
SD_DecoderBufferReadyOpus
==============
*/

bool __fastcall SD_DecoderBufferReadyOpus(sd_decoder *decoder)
{
  return ?SD_DecoderBufferReadyOpus@@YA_NPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderFrameCountOpus
==============
*/

unsigned int __fastcall SD_DecoderFrameCountOpus(sd_decoder *decoder)
{
  return ?SD_DecoderFrameCountOpus@@YAIPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderBufferCompleteOpus
==============
*/

bool __fastcall SD_DecoderBufferCompleteOpus(sd_decoder *decoder, const void *buffer)
{
  return ?SD_DecoderBufferCompleteOpus@@YA_NPEAUsd_decoder@@PEBX@Z(decoder, buffer);
}

/*
==============
SD_DecoderCreateOpus
==============
*/

void __fastcall SD_DecoderCreateOpus(sd_decoder *decoder, const SndAssetBankEntry *entry)
{
  ?SD_DecoderCreateOpus@@YAXPEAUsd_decoder@@PEBUSndAssetBankEntry@@@Z(decoder, entry);
}

/*
==============
SD_DecoderInterfaceInitOpus
==============
*/

void __fastcall SD_DecoderInterfaceInitOpus(sd_decoder_interface *api)
{
  ?SD_DecoderInterfaceInitOpus@@YAXPEAUsd_decoder_interface@@@Z(api);
}

/*
==============
SD_DecoderLockOpus
==============
*/

void __fastcall SD_DecoderLockOpus(sd_decoder *decoder)
{
  ?SD_DecoderLockOpus@@YAXPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderUnlockOpus
==============
*/

void __fastcall SD_DecoderUnlockOpus(sd_decoder *decoder)
{
  ?SD_DecoderUnlockOpus@@YAXPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderFrameOpus
==============
*/

void SD_DecoderFrameOpus(void)
{
  ?SD_DecoderFrameOpus@@YAXXZ();
}

/*
==============
SD_DecoderFreeOpus
==============
*/

sd_decoder_state __fastcall SD_DecoderFreeOpus(sd_decoder *decoder)
{
  return ?SD_DecoderFreeOpus@@YA?AW4sd_decoder_state@@PEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderBufferSubmitOpus
==============
*/

void __fastcall SD_DecoderBufferSubmitOpus(sd_decoder *decoder, const unsigned __int8 *data, __int64 size, bool eos, __int64 decodePos, __int64 frameSkip, __int64 filePos)
{
  ?SD_DecoderBufferSubmitOpus@@YAXPEAUsd_decoder@@PEBE_J_N222@Z(decoder, data, size, eos, decodePos, frameSkip, filePos);
}

/*
==============
SD_DecoderConsumeOpus
==============
*/

void __fastcall SD_DecoderConsumeOpus(sd_decoder *decoder, unsigned int channelCount, unsigned int count, float *frames)
{
  ?SD_DecoderConsumeOpus@@YAXPEAUsd_decoder@@IIPEAM@Z(decoder, channelCount, count, frames);
}

/*
==============
SD_DecoderInitOpus
==============
*/

void SD_DecoderInitOpus(void)
{
  ?SD_DecoderInitOpus@@YAXXZ();
}

/*
==============
SD_DecoderThreadUpdateOpus
==============
*/

void SD_DecoderThreadUpdateOpus(void)
{
  ?SD_DecoderThreadUpdateOpus@@YAXXZ();
}

/*
==============
SD_DecoderQueryAvailableDataOpus
==============
*/

unsigned int __fastcall SD_DecoderQueryAvailableDataOpus(sd_decoder *decoder, unsigned int desired)
{
  return ?SD_DecoderQueryAvailableDataOpus@@YAIPEAUsd_decoder@@I@Z(decoder, desired);
}

/*
==============
SD_DecodeOpusRead
==============
*/
char SD_DecodeOpusRead(sd_decoder *decoder)
{
  sd_decoder_instance v2; 
  unsigned int v3; 
  unsigned int v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const VoiceChatPacket *Request; 
  const dvar_t *v8; 
  const VoiceChatPacket *v9; 
  int dataSize; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  const unsigned __int8 *v16; 
  int v17; 
  unsigned int *v19; 
  volatile signed __int32 *v20; 
  char *fmt; 

  Sys_ProfBeginNamedEvent(0xFFFF00u, "SD_DecodeOpusRead");
  v2.x360_xma = (struct sd_decoder_360_xma *)decoder->instance;
  if ( !v2.x360_xma && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 190, ASSERT_TYPE_ASSERT, "(opus)", (const char *)&queryFormat, "opus") )
    __debugbreak();
  if ( !*((_QWORD *)v2.x360_xma + 962) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 191, ASSERT_TYPE_ASSERT, "(opus->voiceBuffer)", (const char *)&queryFormat, "opus->voiceBuffer") )
    __debugbreak();
  v3 = truncate_cast<unsigned int,__int64>((v2.x360_xma - (struct sd_decoder_360_xma *)g_sd.opusInstancePool) / 7728);
  v4 = *(_DWORD *)(*((_QWORD *)v2.x360_xma + 962) + 8i64);
  if ( !v4 && *((int *)v2.x360_xma + 1922) < 8 )
  {
    v5 = DVARBOOL_voice_debug;
    if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled && *((_DWORD *)v2.x360_xma + 1926) == 1 )
    {
      LODWORD(fmt) = Sys_Milliseconds() - *((_DWORD *)v2.x360_xma + 1927);
      Com_Printf(25, "Starting buffering for voice decoder %d. encoded packet count %d, last decode delta %d\n", v3, 0i64, fmt);
    }
    v6 = DVARINT_voice_packetDecodePrebufferCount;
    if ( !DVARINT_voice_packetDecodePrebufferCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_packetDecodePrebufferCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    *((_DWORD *)v2.x360_xma + 1926) = v6->current.integer;
  }
  if ( v4 < *((_DWORD *)v2.x360_xma + 1926) )
  {
    if ( v4 )
    {
      Request = VoiceCircPacketQueue<40>::Read_Request(*((VoiceCircPacketQueue<40> **)v2.x360_xma + 962));
      if ( Sys_Milliseconds() - Request->timestamp > 500 )
      {
        *((_DWORD *)v2.x360_xma + 1926) = 1;
        v8 = DVARBOOL_voice_debug;
        if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        if ( v8->current.enabled )
          Com_Printf(25, "Buffered voice packet is stale. Starting decoder %d. encoded packet count %d \n", v3, v4);
      }
    }
    if ( v4 < *((_DWORD *)v2.x360_xma + 1926) )
      goto LABEL_51;
  }
  v9 = VoiceCircPacketQueue<40>::Read_Request(*((VoiceCircPacketQueue<40> **)v2.x360_xma + 962));
  dataSize = v9->dataSize;
  if ( dataSize != -1 )
  {
    if ( (unsigned int)dataSize > 0x88 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 260, ASSERT_TYPE_ASSERT, "(dataSize <= sizeof( VoiceChatPacket ))", (const char *)&queryFormat, "dataSize <= sizeof( VoiceChatPacket )") )
      __debugbreak();
    v15 = *((_DWORD *)v2.x360_xma + 1922) + 960;
    *((_DWORD *)v2.x360_xma + 1926) = 1;
    if ( v15 <= 1920 )
    {
      if ( (unsigned int)(*((_DWORD *)v2.x360_xma + 1921) + 960) > 0x780 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 270, ASSERT_TYPE_ASSERT, "(opus->outputBufferWriteHead + (VOICE_CODEC_FRAME_COUNT) <= ( 2 * (VOICE_CODEC_FRAME_COUNT) ))", (const char *)&queryFormat, "opus->outputBufferWriteHead + SD_DECODER_OPUS_FRAME_SIZE <= SD_DECODER_OPUS_OUTPUT_BUFFER_SIZE") )
        __debugbreak();
      v16 = NULL;
      if ( dataSize > 0 )
        v16 = (const unsigned __int8 *)v9;
      Sys_ProfBeginNamedEvent(0xFFFF00u, "VoiceCodec_Decode_SampleFloat");
      v17 = VoiceCodec_Decode_SampleFloat(v3, v16, dataSize, (float *)v2.x360_xma + *((unsigned int *)v2.x360_xma + 1921), 960);
      Sys_ProfEndNamedEvent();
      *((_DWORD *)v2.x360_xma + 1927) = Sys_Milliseconds();
      if ( v17 == 960 )
      {
        *((_DWORD *)v2.x360_xma + 1921) = (*((_DWORD *)v2.x360_xma + 1921) + 960) % 0x780u;
        Sys_InterlockedExchangeAdd((volatile int *)v2.x360_xma + 1922, 960);
        if ( *((int *)v2.x360_xma + 1922) > 1920 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 290, ASSERT_TYPE_ASSERT, "(opus->outputBufferCount <= ( 2 * (VOICE_CODEC_FRAME_COUNT) ))", (const char *)&queryFormat, "opus->outputBufferCount <= SD_DECODER_OPUS_OUTPUT_BUFFER_SIZE") )
          __debugbreak();
        goto LABEL_55;
      }
      Com_PrintError(25, "Error while decoding voice for decoder index %u\n", v3);
    }
LABEL_51:
    Sys_ProfEndNamedEvent();
    return 0;
  }
  VoiceCodec_Decode_Allocate(v3);
  v11 = DVARINT_voice_packetDecodePrebufferCount;
  if ( !DVARINT_voice_packetDecodePrebufferCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_packetDecodePrebufferCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  *((_DWORD *)v2.x360_xma + 1926) = v11->current.integer;
  v12 = DVARBOOL_voice_debug;
  if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
    Com_Printf(25, "Starting buffering for voice decoder %d due to stream discontinuity\n", v3);
  v13 = Sys_Milliseconds();
  v14 = (unsigned int)(v13 - *((_DWORD *)v2.x360_xma + 1928));
  if ( (unsigned int)v14 < 0x960 )
    Com_PrintWarning(25, "Possible voice decoder thrashing for decoder %d. Last reset %dms ago.\n", v3, v14);
  *((_DWORD *)v2.x360_xma + 1928) = v13;
LABEL_55:
  v19 = (unsigned int *)*((_QWORD *)v2.x360_xma + 962);
  v20 = (volatile signed __int32 *)(v19 + 2);
  if ( (int)v19[2] < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 189, ASSERT_TYPE_ASSERT, "(CanRead())", (const char *)&queryFormat, "CanRead()") )
    __debugbreak();
  *v19 = (*v19 + 1) % 0x28;
  if ( ((unsigned __int8)v20 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", v19 + 2) )
    __debugbreak();
  _InterlockedDecrement(v20);
  Sys_ProfEndNamedEvent();
  return 1;
}

/*
==============
SD_DecoderBufferCompleteOpus
==============
*/
char SD_DecoderBufferCompleteOpus(sd_decoder *decoder, const void *buffer)
{
  return 1;
}

/*
==============
SD_DecoderBufferReadyOpus
==============
*/
char SD_DecoderBufferReadyOpus(sd_decoder *decoder)
{
  return 1;
}

/*
==============
SD_DecoderBufferSubmitOpus
==============
*/
void SD_DecoderBufferSubmitOpus(sd_decoder *decoder, const unsigned __int8 *data, __int64 size, bool eos)
{
  ;
}

/*
==============
SD_DecoderConsumeOpus
==============
*/
void SD_DecoderConsumeOpus(sd_decoder *decoder, unsigned int channelCount, unsigned int count, float *frames)
{
  __int64 v5; 
  sd_decoder *v6; 
  sd_decoder_instance v8; 
  int *v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  bool v13; 

  v5 = (int)count;
  v6 = decoder;
  Sys_ProfBeginNamedEvent(0xFFFF00u, "SD_DecoderConsumeOpus");
  v8.x360_xma = (struct sd_decoder_360_xma *)v6->instance;
  if ( channelCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 76, ASSERT_TYPE_ASSERT, "(channelCount == 1)", (const char *)&queryFormat, "channelCount == VOICE_CODEC_CHANNELS") )
    __debugbreak();
  if ( (unsigned int)v5 > *((_DWORD *)v6->instance.x360_xma + 1922) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 77, ASSERT_TYPE_ASSERT, "(count <= SD_DecoderQueryAvailableDataOpus( decoder, 0 ))", (const char *)&queryFormat, "count <= SD_DecoderQueryAvailableDataOpus( decoder, 0 )") )
    __debugbreak();
  v9 = (int *)((char *)v8.x360_xma + 7688);
  if ( *((int *)v8.x360_xma + 1922) > 1920 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 78, ASSERT_TYPE_ASSERT, "(opus->outputBufferCount <= ( 2 * (VOICE_CODEC_FRAME_COUNT) ))", (const char *)&queryFormat, "opus->outputBufferCount <= SD_DECODER_OPUS_OUTPUT_BUFFER_SIZE") )
    __debugbreak();
  if ( *((_DWORD *)v8.x360_xma + 1920) >= 0x780u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 79, ASSERT_TYPE_ASSERT, "(opus->outputBufferReadHead < ( 2 * (VOICE_CODEC_FRAME_COUNT) ))", (const char *)&queryFormat, "opus->outputBufferReadHead < SD_DECODER_OPUS_OUTPUT_BUFFER_SIZE") )
    __debugbreak();
  v10 = 0i64;
  if ( (_DWORD)v5 )
  {
    do
    {
      v11 = 1920 - *((_DWORD *)v8.x360_xma + 1920);
      if ( (int)v5 - (int)v10 > (unsigned int)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 88, ASSERT_TYPE_ASSERT, "(toWrite <= count)", (const char *)&queryFormat, "toWrite <= count") )
        __debugbreak();
      if ( v11 > 0x780 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 89, ASSERT_TYPE_ASSERT, "(available <= ( 2 * (VOICE_CODEC_FRAME_COUNT) ))", (const char *)&queryFormat, "available <= SD_DECODER_OPUS_OUTPUT_BUFFER_SIZE") )
        __debugbreak();
      if ( v11 >= (int)v5 - (int)v10 )
        v11 = v5 - v10;
      if ( v11 > 0x780 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 96, ASSERT_TYPE_ASSERT, "(toWrite <= ( 2 * (VOICE_CODEC_FRAME_COUNT) ))", (const char *)&queryFormat, "toWrite <= SD_DECODER_OPUS_OUTPUT_BUFFER_SIZE") )
        __debugbreak();
      memcpy_0(&frames[v10], (char *)v8.x360_xma + 4 * *((unsigned int *)v8.x360_xma + 1920), 4i64 * v11);
      v10 = v11 + (unsigned int)v10;
      v12 = (v11 + *((_DWORD *)v8.x360_xma + 1920)) % 0x780;
      *((_DWORD *)v8.x360_xma + 1920) = v12;
      if ( v12 >= 0x780 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 103, ASSERT_TYPE_ASSERT, "(opus->outputBufferReadHead < ( 2 * (VOICE_CODEC_FRAME_COUNT) ))", (const char *)&queryFormat, "opus->outputBufferReadHead < SD_DECODER_OPUS_OUTPUT_BUFFER_SIZE") )
        __debugbreak();
      if ( (unsigned int)v10 > 0x780 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 104, ASSERT_TYPE_ASSERT, "(written <= ( 2 * (VOICE_CODEC_FRAME_COUNT) ))", (const char *)&queryFormat, "written <= SD_DECODER_OPUS_OUTPUT_BUFFER_SIZE") )
        __debugbreak();
      v13 = (unsigned int)v10 < (unsigned int)v5;
      if ( (unsigned int)v10 > (unsigned int)v5 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 105, ASSERT_TYPE_ASSERT, "(written <= count)", (const char *)&queryFormat, "written <= count") )
          __debugbreak();
        v13 = (unsigned int)v10 < (unsigned int)v5;
      }
    }
    while ( v13 );
    v9 = (int *)((char *)v8.x360_xma + 7688);
    v6 = decoder;
  }
  v6->framesDecoded += (unsigned int)v5;
  if ( (unsigned int)v5 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", v5, "unsigned", (unsigned int)v5) )
    __debugbreak();
  if ( ((unsigned __int8)v9 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", v9) )
    __debugbreak();
  _InterlockedExchangeAdd(v9, -(int)v5);
  if ( *v9 > 1920 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 111, ASSERT_TYPE_ASSERT, "(opus->outputBufferCount <= ( 2 * (VOICE_CODEC_FRAME_COUNT) ))", (const char *)&queryFormat, "opus->outputBufferCount <= SD_DECODER_OPUS_OUTPUT_BUFFER_SIZE") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_DecoderCreateOpus
==============
*/
void SD_DecoderCreateOpus(sd_decoder *decoder, const SndAssetBankEntry *entry)
{
  sd_decoder_instance v4; 
  unsigned int v5; 
  const dvar_t *v6; 

  Sys_ProfBeginNamedEvent(0xFFFF00u, "SD_DecoderCreateOpus");
  if ( !decoder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 146, ASSERT_TYPE_ASSERT, "(decoder)", (const char *)&queryFormat, "decoder") )
    __debugbreak();
  if ( !*((_QWORD *)decoder->instance.x360_xma + 962) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 147, ASSERT_TYPE_ASSERT, "(decoder->instance.opus->voiceBuffer)", (const char *)&queryFormat, "decoder->instance.opus->voiceBuffer") )
    __debugbreak();
  if ( entry->frameRate != 16000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 148, ASSERT_TYPE_ASSERT, "(entry->frameRate == 16000)", (const char *)&queryFormat, "entry->frameRate == VOICE_CODEC_FREQUENCY") )
    __debugbreak();
  if ( entry->channelCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 149, ASSERT_TYPE_ASSERT, "(entry->channelCount == 1)", (const char *)&queryFormat, "entry->channelCount == VOICE_CODEC_CHANNELS") )
    __debugbreak();
  v4.x360_xma = (struct sd_decoder_360_xma *)decoder->instance;
  memset_0(v4.x360_xma, 0, 0x1E00ui64);
  *((_QWORD *)v4.x360_xma + 960) = 0i64;
  *((_DWORD *)v4.x360_xma + 1922) = 0;
  v5 = truncate_cast<unsigned int,__int64>((v4.x360_xma - (struct sd_decoder_360_xma *)g_sd.opusInstancePool) / 7728);
  VoiceCodec_Decode_Allocate(v5);
  v6 = DVARINT_voice_packetDecodePrebufferCount;
  if ( !DVARINT_voice_packetDecodePrebufferCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_packetDecodePrebufferCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  *((_DWORD *)v4.x360_xma + 1926) = v6->current.integer;
  *(_QWORD *)((char *)v4.x360_xma + 7708) = 0i64;
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_DecoderFrameCountOpus
==============
*/
__int64 SD_DecoderFrameCountOpus(sd_decoder *decoder)
{
  return 0x20000i64;
}

/*
==============
SD_DecoderFrameOpus
==============
*/
void SD_DecoderFrameOpus(void)
{
  sd_decoder *opusPool; 

  opusPool = g_sd.opusPool;
  do
  {
    if ( opusPool->state == SD_DECODER_RUNNING )
      SD_DecoderUpdate(opusPool);
    ++opusPool;
  }
  while ( (__int64)opusPool < (__int64)g_sd.opusInstancePool );
}

/*
==============
SD_DecoderFreeOpus
==============
*/
__int64 SD_DecoderFreeOpus(sd_decoder *decoder)
{
  return 3i64;
}

/*
==============
SD_DecoderInitOpus
==============
*/
void SD_DecoderInitOpus(void)
{
  sd_decoder_instance *p_instance; 
  unsigned int v1; 
  VoiceDecoderInputBuffer **p_voiceBuffer; 
  VoiceDecoderInputBuffer *DecoderInputBuffer; 
  VoiceDecoderInputBuffer *v4; 

  p_instance = &g_sd.opusPool[0].instance;
  v1 = 0;
  p_voiceBuffer = &g_sd.opusInstancePool[0].voiceBuffer;
  do
  {
    DecoderInputBuffer = VoiceDecode_GetDecoderInputBuffer(v1);
    *p_voiceBuffer = DecoderInputBuffer;
    if ( !DecoderInputBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_opus.cpp", 130, ASSERT_TYPE_ASSERT, "(opus->voiceBuffer)", (const char *)&queryFormat, "opus->voiceBuffer") )
      __debugbreak();
    v4 = *p_voiceBuffer;
    ++v1;
    *(_QWORD *)&v4->encodedPackets.readPos = 0i64;
    v4->encodedPackets.bufcount = 0;
    p_instance->x360_xma = (struct sd_decoder_360_xma *)(p_voiceBuffer - 962);
    p_voiceBuffer += 966;
    p_instance += 560;
  }
  while ( v1 < 5 );
}

/*
==============
SD_DecoderInterfaceInitOpus
==============
*/
void SD_DecoderInterfaceInitOpus(sd_decoder_interface *api)
{
  api->Init = SD_DecoderInitOpus;
  api->Shutdown = SD_DecoderShutdownOpus;
  api->Lock = SD_DecoderLockOpus;
  api->Unlock = SD_DecoderUnlockOpus;
  api->QueryAvailableData = SD_DecoderQueryAvailableDataOpus;
  api->BufferComplete = SD_DecoderBufferCompleteOpus;
  api->BufferReady = SD_DecoderBufferReadyOpus;
  api->BufferSubmit = SD_DecoderBufferSubmitOpus;
  api->Consume = SD_DecoderConsumeOpus;
  api->Free = SD_DecoderFreeOpus;
  api->Create = SD_DecoderCreateOpus;
  api->ThreadUpdate = SD_DecoderThreadUpdateOpus;
  api->Frame = SD_DecoderFrameOpus;
  api->DecodeFrameCount = SD_DecoderFrameCountOpus;
}

/*
==============
SD_DecoderLockOpus
==============
*/
void SD_DecoderLockOpus(sd_decoder *decoder)
{
  ;
}

/*
==============
SD_DecoderQueryAvailableDataOpus
==============
*/
__int64 SD_DecoderQueryAvailableDataOpus(sd_decoder *decoder, unsigned int desired)
{
  return *((unsigned int *)decoder->instance.x360_xma + 1922);
}

/*
==============
SD_DecoderShutdownOpus
==============
*/
void SD_DecoderShutdownOpus(void)
{
  ;
}

/*
==============
SD_DecoderThreadUpdateOpus
==============
*/
void SD_DecoderThreadUpdateOpus(void)
{
  sd_decoder *opusPool; 
  sd_decoder_instance v1; 

  opusPool = g_sd.opusPool;
  do
  {
    v1.x360_xma = (struct sd_decoder_360_xma *)opusPool->instance;
    if ( opusPool->state == SD_DECODER_FREED )
    {
      memset_0(opusPool->instance.x360_xma, 0, 0x1E00ui64);
      *((_QWORD *)v1.x360_xma + 960) = 0i64;
      *((_DWORD *)v1.x360_xma + 1922) = 0;
      *((_QWORD *)v1.x360_xma + 962) = 0i64;
      *((_QWORD *)v1.x360_xma + 963) = 0i64;
      *((_DWORD *)v1.x360_xma + 1928) = 0;
      opusPool->state = SD_DECODER_FREE;
    }
    else if ( opusPool->state == SD_DECODER_RUNNING )
    {
      while ( SD_DecodeOpusRead(opusPool) )
        ;
    }
    ++opusPool;
  }
  while ( (__int64)opusPool < (__int64)g_sd.opusInstancePool );
}

/*
==============
SD_DecoderUnlockOpus
==============
*/
void SD_DecoderUnlockOpus(sd_decoder *decoder)
{
  ;
}

