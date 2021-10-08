/*
==============
VoiceDecode_AddOutputBus
==============
*/

bool __fastcall VoiceDecode_AddOutputBus(unsigned int decoderIndex, int voiceBus)
{
  return ?VoiceDecode_AddOutputBus@@YA_NIH@Z(decoderIndex, voiceBus);
}

/*
==============
VoiceDecode_GetLocalVoiceBufferUsage
==============
*/

int __fastcall VoiceDecode_GetLocalVoiceBufferUsage(unsigned int decoderIndex)
{
  return ?VoiceDecode_GetLocalVoiceBufferUsage@@YAHI@Z(decoderIndex);
}

/*
==============
Voice_MixVoiceChat
==============
*/

void Voice_MixVoiceChat(void)
{
  ?Voice_MixVoiceChat@@YAXXZ();
}

/*
==============
VoiceDecode_RemoveOutputBus
==============
*/

bool __fastcall VoiceDecode_RemoveOutputBus(unsigned int decoderIndex, int voiceBus)
{
  return ?VoiceDecode_RemoveOutputBus@@YA_NIH@Z(decoderIndex, voiceBus);
}

/*
==============
VoiceDecode_DecoderRead
==============
*/

int __fastcall VoiceDecode_DecoderRead(sd_decoder *decoder, float pitchRatio, float *dest, int destCount)
{
  return ?VoiceDecode_DecoderRead@@YAHPEAUsd_decoder@@MPEIAMH@Z(decoder, pitchRatio, dest, destCount);
}

/*
==============
VoiceDecode_Init
==============
*/

bool __fastcall VoiceDecode_Init()
{
  return ?VoiceDecode_Init@@YA_NXZ();
}

/*
==============
VoiceDecode_SubmitRemoteVoiceData
==============
*/

bool __fastcall VoiceDecode_SubmitRemoteVoiceData(unsigned int decoderIndex, const unsigned __int8 *data, unsigned int size, int frameGaps)
{
  return ?VoiceDecode_SubmitRemoteVoiceData@@YA_NIPEIBEIH@Z(decoderIndex, data, size, frameGaps);
}

/*
==============
VoiceDecode_Shutdown
==============
*/

void VoiceDecode_Shutdown(void)
{
  ?VoiceDecode_Shutdown@@YAXXZ();
}

/*
==============
VoiceDecode_SetOutputVolume
==============
*/

void __fastcall VoiceDecode_SetOutputVolume(float volume)
{
  ?VoiceDecode_SetOutputVolume@@YAXM@Z(volume);
}

/*
==============
VoiceDecode_ResetDecoder
==============
*/

bool __fastcall VoiceDecode_ResetDecoder(unsigned int decoderIndex)
{
  return ?VoiceDecode_ResetDecoder@@YA_NI@Z(decoderIndex);
}

/*
==============
VoiceDecode_GetDecoderInputBuffer
==============
*/

VoiceDecoderInputBuffer *__fastcall VoiceDecode_GetDecoderInputBuffer(unsigned int decoderIndex)
{
  return ?VoiceDecode_GetDecoderInputBuffer@@YAPEAUVoiceDecoderInputBuffer@@I@Z(decoderIndex);
}

/*
==============
VoiceDecode_AddOutputBus
==============
*/
char VoiceDecode_AddOutputBus(unsigned int decoderIndex, int voiceBus)
{
  if ( decoderIndex >= 5 )
    return 0;
  s_voiceDecoderGlob.voiceOutputBus[decoderIndex] |= 1 << voiceBus;
  return 1;
}

/*
==============
VoiceDecode_DecoderRead
==============
*/

int __fastcall VoiceDecode_DecoderRead(sd_decoder *decoder, double pitchRatio, float *dest, int destCount)
{
  sd_source *source; 
  bool v10; 
  bool v11; 
  int result; 

  source = decoder->source;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v10 = source->entry->channelCount == 1;
  if ( source->entry->channelCount != 1 )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_decode.cpp", 242, ASSERT_TYPE_ASSERT, "(decoder->source->entry->channelCount == 1)", (const char *)&queryFormat, "decoder->source->entry->channelCount == VOICE_CODEC_CHANNELS");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, cs:__real@3f800000 }
  if ( v10 )
  {
    result = SD_VoiceNoPitch(decoder, dest, NULL, destCount, 1);
  }
  else
  {
    __asm { vmovaps xmm1, xmm6; pitchRatio }
    result = SD_VoicePitchMono(decoder, *(float *)&_XMM1, destCount, dest);
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
VoiceDecode_GetDecoderInputBuffer
==============
*/
VoiceDecoderInputBuffer *VoiceDecode_GetDecoderInputBuffer(unsigned int decoderIndex)
{
  if ( decoderIndex < 5 )
    return (VoiceDecoderInputBuffer *)((char *)&s_voiceDecoderGlob + 5452 * decoderIndex);
  else
    return 0i64;
}

/*
==============
VoiceDecode_GetLocalVoiceBufferUsage
==============
*/
__int64 VoiceDecode_GetLocalVoiceBufferUsage(unsigned int decoderIndex)
{
  if ( decoderIndex < 5 )
    return (unsigned int)s_voiceDecoderGlob.voiceDecoderInputBuffers[decoderIndex].encodedPackets.bufcount;
  else
    return 0i64;
}

/*
==============
VoiceDecode_Init
==============
*/
char VoiceDecode_Init()
{
  unsigned int v0; 
  sd_decoder **voiceDecoders; 
  sd_loaded *p_loaded; 
  unsigned __int8 *p_channelCount; 
  SndAssetBankEntry *v4; 
  sd_decoder *v5; 
  signed __int32 v8[8]; 
  __int64 v9; 

  s_voiceDecoderGlob.voiceDecoderState = 1;
  v0 = 0;
  voiceDecoders = s_voiceDecoderGlob.voiceDecoders;
  p_loaded = &s_voiceDecoderGlob.voiceDecoderSources[0].loaded;
  p_channelCount = &s_voiceDecoderGlob.voiceDecoderBankEntries[0].channelCount;
  while ( 1 )
  {
    v4 = &s_voiceDecoderGlob.voiceDecoderBankEntries[v0];
    *(_QWORD *)&v4->id = 0i64;
    *(_QWORD *)&v4->seekTableSize = 0i64;
    *(_QWORD *)&v4->hybridPcmSize = 0i64;
    *(unsigned __int64 *)((char *)&v4->offset + 4) = 0i64;
    *(_QWORD *)&v4->channelCount = 0i64;
    *(_DWORD *)&v4->EnvelopeLoudness1 = 0;
    *((_DWORD *)p_channelCount - 1) = 16000;
    *p_channelCount = 1;
    p_channelCount[2] = 13;
    *(_QWORD *)&p_loaded[-1].pcmDataSize = v4;
    p_loaded->dataSize = 0;
    p_loaded->data = NULL;
    p_loaded->seekTable = NULL;
    p_loaded->seekTableSize = 0;
    p_loaded->pcmData = NULL;
    p_loaded->pcmDataSize = 0;
    *(_QWORD *)&p_loaded[1].seekTableSize = 0i64;
    *(_QWORD *)&p_loaded[1].dataSize = 0i64;
    LOWORD(p_loaded[1].data) = 1;
    BYTE2(p_loaded[1].data) = 0;
    p_loaded[1].seekTable = NULL;
    if ( *voiceDecoders && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_decode.cpp", 83, ASSERT_TYPE_ASSERT, "(s_voiceDecoderGlob.voiceDecoders[i] == nullptr)", (const char *)&queryFormat, "s_voiceDecoderGlob.voiceDecoders[i] == nullptr") )
      __debugbreak();
    v5 = SD_DecoderAllocate((sd_source *)&s_voiceDecoderGlob.voiceDecoderBankEntries[2 * v0 - 10]);
    *voiceDecoders = v5;
    if ( !v5 )
    {
      LODWORD(v9) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_decode.cpp", 85, ASSERT_TYPE_ASSERT, "( s_voiceDecoderGlob.voiceDecoders[i] )", "Error allocating voice decoder %d\n", v9) )
        __debugbreak();
    }
    if ( !*voiceDecoders )
      break;
    ++v0;
    p_channelCount += 44;
    p_loaded = (sd_loaded *)((char *)p_loaded + 88);
    ++voiceDecoders;
    if ( v0 >= 5 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovss  cs:s_voiceDecoderGlob.voiceOutputVolume, xmm0
      }
      _InterlockedOr(v8, 0);
      s_voiceDecoderGlob.voiceDecoderState = 2;
      return 1;
    }
  }
  s_voiceDecoderGlob.voiceDecoderState = 0;
  return 0;
}

/*
==============
VoiceDecode_RemoveOutputBus
==============
*/
char VoiceDecode_RemoveOutputBus(unsigned int decoderIndex, int voiceBus)
{
  if ( decoderIndex >= 5 )
    return 0;
  s_voiceDecoderGlob.voiceOutputBus[decoderIndex] &= ~(1 << voiceBus);
  return 1;
}

/*
==============
VoiceDecode_ResetDecoder
==============
*/
char VoiceDecode_ResetDecoder(unsigned int decoderIndex)
{
  __int64 v1; 
  VoiceChatPacket *v2; 
  const dvar_t *v4; 

  v1 = decoderIndex;
  if ( decoderIndex < 5 )
  {
    if ( 40 - s_voiceDecoderGlob.voiceDecoderInputBuffers[decoderIndex].encodedPackets.bufcount >= 1 )
    {
      v2 = VoiceCircPacketQueue<40>::Write_Request(&s_voiceDecoderGlob.voiceDecoderInputBuffers[decoderIndex].encodedPackets);
      v2->dataSize = -1;
      v2->timestamp = Sys_Milliseconds();
      VoiceCircPacketQueue<40>::Write_Commit(&s_voiceDecoderGlob.voiceDecoderInputBuffers[v1].encodedPackets);
      return 1;
    }
    v4 = DVARBOOL_voice_debug;
    if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
      Com_Printf(25, "Failed to write voice discontinuity packet for decoder %d\n", (unsigned int)v1);
  }
  return 0;
}

/*
==============
VoiceDecode_SetOutputVolume
==============
*/

void __fastcall VoiceDecode_SetOutputVolume(double volume)
{
  __asm { vmovss  cs:s_voiceDecoderGlob.voiceOutputVolume, xmm0 }
}

/*
==============
VoiceDecode_Shutdown
==============
*/
void VoiceDecode_Shutdown(void)
{
  s_voiceDecoderGlob.voiceDecoderState = 0;
}

/*
==============
VoiceDecode_SubmitRemoteVoiceData
==============
*/
char VoiceDecode_SubmitRemoteVoiceData(unsigned int decoderIndex, const unsigned __int8 *data, unsigned int size, int frameGaps)
{
  size_t v4; 
  __int64 v6; 
  int v8; 
  int v9; 
  VoiceDecoderInputBuffer *i; 
  VoiceChatPacket *v11; 
  VoiceChatPacket *v12; 
  const dvar_t *v14; 

  v4 = size;
  v6 = decoderIndex;
  if ( decoderIndex < 5 )
  {
    if ( frameGaps < 0 )
      return 1;
    v8 = 0;
    v9 = Sys_Milliseconds();
    for ( i = &s_voiceDecoderGlob.voiceDecoderInputBuffers[v6]; v8 < frameGaps; ++v8 )
    {
      if ( 40 - i->encodedPackets.bufcount < 1 )
        break;
      v11 = VoiceCircPacketQueue<40>::Write_Request(&s_voiceDecoderGlob.voiceDecoderInputBuffers[v6].encodedPackets);
      v11->dataSize = 0;
      v11->timestamp = v9;
      VoiceCircPacketQueue<40>::Write_Commit(&s_voiceDecoderGlob.voiceDecoderInputBuffers[v6].encodedPackets);
    }
    if ( 40 - i->encodedPackets.bufcount >= 1 )
    {
      v12 = VoiceCircPacketQueue<40>::Write_Request(&s_voiceDecoderGlob.voiceDecoderInputBuffers[v6].encodedPackets);
      if ( (unsigned int)v4 > 0x7E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_decode.cpp", 185, ASSERT_TYPE_ASSERT, "(size <= sizeof( packet->data ))", (const char *)&queryFormat, "size <= sizeof( packet->data )") )
        __debugbreak();
      memcpy_0(v12, data, v4);
      v12->dataSize = v4;
      v12->timestamp = v9;
      VoiceCircPacketQueue<40>::Write_Commit(&s_voiceDecoderGlob.voiceDecoderInputBuffers[v6].encodedPackets);
      return 1;
    }
    v14 = DVARBOOL_voice_debug;
    if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
      Com_Printf(25, "Remote voice packet buffer overflow for decoder %d\n", (unsigned int)v6);
  }
  return 0;
}

/*
==============
VoiceDecode_VoiceChatMix
==============
*/
void VoiceDecode_VoiceChatMix(unsigned int *outMaxSamplesDecoded)
{
  unsigned __int64 v5; 
  unsigned int *v6; 
  volatile int *voiceOutputBus; 
  sd_decoder **voiceDecoders; 
  sd_decoder *v10; 
  int v11; 
  unsigned int v13; 
  unsigned int i; 
  __int64 v19; 
  float *v20; 
  unsigned int v23; 
  bool v24; 
  sd_decoder **v25; 
  __int64 v26; 
  __int64 v30; 
  char v31[1104]; 
  char v32; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v5 = (unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v5 + 1056) = (unsigned __int64)&v30 ^ _security_cookie;
  *(_QWORD *)(v5 + 24) = outMaxSamplesDecoded;
  *(_QWORD *)outMaxSamplesDecoded = 0i64;
  v6 = outMaxSamplesDecoded;
  *((_QWORD *)outMaxSamplesDecoded + 1) = 0i64;
  *((_QWORD *)outMaxSamplesDecoded + 2) = 0i64;
  *((_QWORD *)outMaxSamplesDecoded + 3) = 0i64;
  if ( s_voiceDecoderGlob.voiceDecoderState == 2 )
  {
    __asm { vmovss  xmm7, cs:__real@3eaaaaab }
    voiceOutputBus = s_voiceDecoderGlob.voiceOutputBus;
    *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = 5i64;
    voiceDecoders = s_voiceDecoderGlob.voiceDecoders;
    *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = s_voiceDecoderGlob.voiceOutputBus;
    *(_QWORD *)v5 = s_voiceDecoderGlob.voiceDecoders;
    do
    {
      v10 = *voiceDecoders;
      if ( !*voiceDecoders && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_decode.cpp", 281, ASSERT_TYPE_ASSERT, "(decoder)", (const char *)&queryFormat, "decoder") )
        __debugbreak();
      v11 = *voiceOutputBus;
      if ( v10->source->entry->frameRate != 16000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_decode.cpp", 284, ASSERT_TYPE_ASSERT, "(decoder->source->entry->frameRate == 16000)", (const char *)&queryFormat, "decoder->source->entry->frameRate == VOICE_CODEC_FREQUENCY") )
        __debugbreak();
      if ( v10->source->entry->channelCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_decode.cpp", 242, ASSERT_TYPE_ASSERT, "(decoder->source->entry->channelCount == 1)", (const char *)&queryFormat, "decoder->source->entry->channelCount == VOICE_CODEC_CHANNELS") )
        __debugbreak();
      __asm { vmovaps xmm1, xmm7; pitchRatio }
      v13 = SD_VoicePitchMono(v10, *(float *)&_XMM1, 0x100u, (float *)(v5 + 32)) & 0xFFFFFFF8;
      for ( i = 0; i < 8; ++i )
      {
        if ( !v13 )
          break;
        if ( ((v11 >> i) & 1) != 0 )
        {
          __asm { vmovss  xmm6, cs:s_voiceDecoderGlob.voiceOutputVolume }
          _RBX = &g_sd.voiceBusBuffers[256 * i];
          if ( (((_BYTE)v5 + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 596, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", v5 + 32) )
            __debugbreak();
          if ( ((unsigned __int8)_RBX & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 597, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", &g_sd.voiceBusBuffers[256 * i]) )
            __debugbreak();
          __asm
          {
            vmovaps xmm2, xmm6
            vshufps xmm2, xmm2, xmm2, 0
            vinsertf128 ymm2, ymm2, xmm2, 1
          }
          if ( v13 >> 3 )
          {
            v19 = v13 >> 3;
            v20 = &g_sd.voiceBusBuffers[256 * i];
            do
            {
              _RBX += 8;
              __asm
              {
                vmulps  ymm0, ymm2, ymmword ptr [rdx+rax]
                vaddps  ymm1, ymm0, ymmword ptr [rax]
              }
              v20 += 8;
              __asm { vmovups ymmword ptr [rbx-20h], ymm1 }
              --v19;
            }
            while ( v19 );
          }
          v23 = v13;
          if ( (int)*v6 > (int)v13 )
            v23 = *v6;
          *v6 = v23;
        }
        ++v6;
      }
      v6 = *(unsigned int **)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
      voiceDecoders = (sd_decoder **)(*(_QWORD *)v5 + 8i64);
      voiceOutputBus = (volatile int *)(*(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 8) + 4i64);
      v24 = (*(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10))-- == 1i64;
      *(_QWORD *)v5 = voiceDecoders;
      *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = voiceOutputBus;
    }
    while ( !v24 );
  }
  else if ( !s_voiceDecoderGlob.voiceDecoderState )
  {
    v25 = s_voiceDecoderGlob.voiceDecoders;
    v26 = (unsigned int)(s_voiceDecoderGlob.voiceDecoderState + 5);
    do
    {
      if ( *v25 )
      {
        SD_DecoderFree(*v25);
        *v25 = NULL;
      }
      ++v25;
      --v26;
    }
    while ( v26 );
  }
  _R11 = &v32;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
Voice_MixVoiceChat
==============
*/
void Voice_MixVoiceChat(void)
{
  float *voiceBusBuffers; 
  __int64 i; 
  const dvar_t *v2; 
  unsigned int outMaxSamplesDecoded[8]; 

  voiceBusBuffers = g_sd.voiceBusBuffers;
  for ( i = 2048i64; i; --i )
    *voiceBusBuffers++ = 0.0;
  VoiceDecode_VoiceChatMix(outMaxSamplesDecoded);
  v2 = DCONST_DVARBOOL_snd_voicefutz_enable;
  if ( !DCONST_DVARBOOL_snd_voicefutz_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_voicefutz_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    VoiceDecode_FutzMix(outMaxSamplesDecoded);
}

