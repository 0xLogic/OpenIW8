/*
==============
VoiceEncode_FlushEncoder
==============
*/

bool __fastcall VoiceEncode_FlushEncoder(int localControllerIndex)
{
  return ?VoiceEncode_FlushEncoder@@YA_NH@Z(localControllerIndex);
}

/*
==============
VoiceEncode_GetMaxEncodeTime
==============
*/

unsigned __int64 __fastcall VoiceEncode_GetMaxEncodeTime()
{
  return ?VoiceEncode_GetMaxEncodeTime@@YA_KXZ();
}

/*
==============
VoiceEncode_Shutdown
==============
*/

void VoiceEncode_Shutdown(void)
{
  ?VoiceEncode_Shutdown@@YAXXZ();
}

/*
==============
VoiceEncode_ReadLocalVoiceData
==============
*/

int __fastcall VoiceEncode_ReadLocalVoiceData(int localControllerIndex, unsigned __int8 *data, unsigned int size)
{
  return ?VoiceEncode_ReadLocalVoiceData@@YAHHPEAEI@Z(localControllerIndex, data, size);
}

/*
==============
Voice_EncodeWorker
==============
*/

void __fastcall Voice_EncodeWorker(const void *const cmdInfo)
{
  ?Voice_EncodeWorker@@YAXQEBX@Z(cmdInfo);
}

/*
==============
VoiceEncode_CreateEncoder
==============
*/

bool __fastcall VoiceEncode_CreateEncoder(int localControllerIndex, LocalClientNum_t localClientNum)
{
  return ?VoiceEncode_CreateEncoder@@YA_NHW4LocalClientNum_t@@@Z(localControllerIndex, localClientNum);
}

/*
==============
VoiceEncode_Init
==============
*/

bool __fastcall VoiceEncode_Init()
{
  return ?VoiceEncode_Init@@YA_NXZ();
}

/*
==============
VoiceEncode_GetLocalVoiceRms
==============
*/

double __fastcall VoiceEncode_GetLocalVoiceRms(int localControllerIndex)
{
  double result; 

  *(float *)&result = ?VoiceEncode_GetLocalVoiceRms@@YAMH@Z(localControllerIndex);
  return result;
}

/*
==============
VoiceEncode_GetAverageEncodeTime
==============
*/

unsigned __int64 __fastcall VoiceEncode_GetAverageEncodeTime()
{
  return ?VoiceEncode_GetAverageEncodeTime@@YA_KXZ();
}

/*
==============
VoiceEncode_GetLocalVoiceBufferUsage
==============
*/

int __fastcall VoiceEncode_GetLocalVoiceBufferUsage(int localControllerIndex)
{
  return ?VoiceEncode_GetLocalVoiceBufferUsage@@YAHH@Z(localControllerIndex);
}

/*
==============
VoiceEncode_FreeEncoder
==============
*/

bool __fastcall VoiceEncode_FreeEncoder(int localControllerIndex)
{
  return ?VoiceEncode_FreeEncoder@@YA_NH@Z(localControllerIndex);
}

/*
==============
VoiceEncode_SubmitLocalVoiceData
==============
*/

bool __fastcall VoiceEncode_SubmitLocalVoiceData(int localControllerIndex, const float *data, unsigned int size)
{
  return ?VoiceEncode_SubmitLocalVoiceData@@YA_NHPEIBMI@Z(localControllerIndex, data, size);
}

/*
==============
VoiceEncode_CreateEncoder
==============
*/
char VoiceEncode_CreateEncoder(int localControllerIndex, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  VoiceEncoder *v5; 
  int v6; 
  signed __int32 v8[8]; 
  __int64 v9; 
  __int64 v10; 

  v2 = localControllerIndex;
  v3 = localClientNum;
  if ( (unsigned int)localControllerIndex >= 8 )
  {
    LODWORD(v10) = 8;
    LODWORD(v9) = localControllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 212, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_voiceEncoderGlob.voiceEncoders ) ) + 0 ) )", "localControllerIndex doesn't index ARRAY_COUNT( s_voiceEncoderGlob.voiceEncoders )\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v4 = v2;
  if ( s_voiceEncoderGlob.voiceEncoders[v2] )
    return 0;
  v5 = &s_voiceEncoderGlob.voiceEncoderPool[v3];
  if ( v5->state )
  {
    if ( v5->state != 3 )
    {
      LODWORD(v9) = v5->state;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 118, ASSERT_TYPE_ASSERT, "( ( encoder->state == VoiceEncoder::FREE || encoder->state == VoiceEncoder::WANTS_FREE ) )", "( encoder->state ) = %i", v9) )
        __debugbreak();
    }
  }
  if ( v5->state && v5->state != 3 )
    return 0;
  v6 = 0;
  if ( v5->state )
  {
    while ( 1 )
    {
      VoiceEncode_RunEncodeWorker();
      Sys_WaitWorkerCmdsOfType(WRKCMD_VOICECHAT_ENCODE);
      if ( ++v6 > 3 )
        break;
      if ( !v5->state )
        goto LABEL_14;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 135, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Timed out while waiting to free voice encoder!") )
      __debugbreak();
    return 0;
  }
LABEL_14:
  if ( ((unsigned __int8)v5 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_voiceEncoderGlob.voiceEncoderPool[v3]) )
    __debugbreak();
  _InterlockedExchange(&v5->state, 1);
  v5->localClientNum = v3;
  *(_QWORD *)&v5->lastTalkTime = 0i64;
  v5->lastMuteTime = 0;
  *(_WORD *)&v5->isMicOpen = 0;
  v5->wasTalkingLoud = 0;
  v5->agc.lastEnvSample.val = 0;
  v5->agc.currentRms = 0.0;
  Resampler_Initialize(&v5->resampler);
  VoiceCircBuf<float,3840>::Reset(&v5->pcm);
  v5->recordFile = NULL;
  v5->replayFile = NULL;
  VoiceCodec_Encode_Allocate((LocalClientNum_t)v3, 10);
  s_voiceEncoderGlob.voiceEncoders[v4] = v5;
  _InterlockedOr(v8, 0);
  if ( ((unsigned __int8)v5 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_voiceEncoderGlob.voiceEncoderPool[v3]) )
    __debugbreak();
  _InterlockedExchange(&v5->state, 2);
  return 1;
}

/*
==============
VoiceEncode_DoAGC
==============
*/
void VoiceEncode_DoAGC(VoiceEncoder *encoder, float micGain, float *inoutBuffer, float *outRms)
{
  const dvar_t *v7; 
  SD_DSP::RMSFinderParams<SD_DSP::MonoFrame> v8; 
  SD_DSP::InterleavedBufferRefType<SD_DSP::MonoFrame,960> v9; 
  int *v10; 
  SD_DSP::ClipParams<SD_DSP::MonoFrame> v11; 
  SD_DSP::GainParams<SD_DSP::MonoFrame> v12; 
  int v13[3]; 
  unsigned int val_low; 
  float v15; 
  float v16; 
  float v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v21; 
  SD_DSP::Functor_RMSEnvelopeProcessor<SD_DSP::Functor_Terminal<SD_DSP::MonoFrame> > func; 

  v21 = -2i64;
  Sys_ProfBeginNamedEvent(0xFFFF00u, "VoiceEncode_DoAGC");
  if ( ((unsigned __int8)inoutBuffer & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 61, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", inoutBuffer) )
    __debugbreak();
  if ( !inoutBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 424, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
    __debugbreak();
  if ( ((unsigned __int8)inoutBuffer & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 425, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  v9.data = (SD_DSP::MonoFrame *)inoutBuffer;
  v12.gain = micGain;
  v11.clipLevel = FLOAT_0_98000002;
  v8.frameCount = FLOAT_960_0;
  v8.peak.val = 0.0;
  SD_DSP::InterleavedBufferRefType<SD_DSP::MonoFrame,960>::Process<SD_DSP::Functor_Gain<SD_DSP::Functor_Clip<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::MonoFrame>>>>,SD_DSP::GainParams<SD_DSP::MonoFrame> *,SD_DSP::ClipParams<SD_DSP::MonoFrame> *,SD_DSP::RMSFinderParams<SD_DSP::MonoFrame> *>(&v9, &v12, &v11, &v8);
  v7 = DVARBOOL_voice_agc;
  if ( !DVARBOOL_voice_agc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_agc") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    v13[0] = SLODWORD(v8.peak.val);
    val_low = LODWORD(encoder->agc.lastEnvSample.val);
    v15 = FLOAT_1_2589254;
    v16 = FLOAT_100_0;
    v17 = FLOAT_0_089125097;
    func.peak = (const __m128)LODWORD(v8.peak.val);
    *(float *)&v13[1] = FLOAT_0_99979168;
    func.ga = (const __m128)LODWORD(FLOAT_0_99979168);
    *(float *)&v13[2] = FLOAT_0_99979168;
    func.gr = (const __m128)LODWORD(FLOAT_0_99979168);
    func.lastEnvSample = (__m128)val_low;
    *(__m256i *)func.postGain.m128_f32 = _ymm;
    *(__m256i *)func.thLin.m128_f32 = _ymm_c1a80000c1a80000c1a80000c1a800003db687383db687383db687383db68738;
    func.maxInput = (__m128)v18;
    func.maxOutput = (__m128)v19;
    func.minGain = (__m128)v20;
    SD_DSP::InterleavedBufferRefType<SD_DSP::MonoFrame,960>::Process<SD_DSP::Functor_RMSEnvelopeProcessor<SD_DSP::Functor_Terminal<SD_DSP::MonoFrame>>>(&v9, &func);
    v10 = v13;
    val_low = func.lastEnvSample.m128_u32[0];
    v18 = func.maxInput.m128_u32[0];
    v19 = func.maxOutput.m128_u32[0];
    v20 = func.minGain.m128_u32[0];
    encoder->agc.lastEnvSample.val = func.lastEnvSample.m128_f32[0];
  }
  if ( ((unsigned __int8)&v8 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 439, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  *outRms = v8.peak.val;
  Sys_ProfEndNamedEvent();
}

/*
==============
VoiceEncode_DoEncode
==============
*/
void VoiceEncode_DoEncode(const VoiceChatWorkerCmd *cmd, int currentTimeMs)
{
  signed __int64 v2; 
  void *v3; 
  unsigned __int64 v4; 
  int talk_time_threshold; 
  int post_loud_aggressive_time; 
  float mic_threshold_loud; 
  float mic_gain; 
  int aggressive_out_time_threshold; 
  int inactivity_mute_delay; 
  int LastInputTimeForAnyLocalPlayer; 
  unsigned int v15; 
  volatile int *p_bufcount; 
  volatile int *v17; 
  bool v18; 
  int v19; 
  volatile signed __int32 *v24; 
  __int64 v25; 
  void *v26; 
  __int64 v27; 
  const dvar_t *v28; 
  const char *v29; 
  const char *v30; 
  float v31; 
  float v32; 
  double v34; 
  float v35; 
  float v37; 
  __int64 v39; 
  float v40; 
  bool v41; 
  __int64 v42; 
  int v43; 
  FILE *v44; 
  FILE *v45; 
  const dvar_t *v46; 
  int v47; 
  unsigned __int64 maxEncodeTime; 
  int v49; 
  FILE *v50; 
  FILE *v51; 
  __int64 v52; 
  __int64 v53; 
  const char *v54; 
  double v55; 
  char v56[3920]; 

  v3 = alloca(v2);
  v4 = (unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF40) = (unsigned __int64)&v52 ^ _security_cookie;
  Sys_ProfBeginNamedEvent(0xFFFF00u, "VoiceEncode_DoEncode");
  *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = Sys_Microseconds();
  if ( s_voiceEncoderGlob.totalEncodeCount >= 0x64 )
  {
    s_voiceEncoderGlob.totalEncodeTime = 0i64;
    s_voiceEncoderGlob.totalEncodeCount = 0i64;
  }
  talk_time_threshold = cmd->talk_time_threshold;
  post_loud_aggressive_time = cmd->post_loud_aggressive_time;
  _XMM15 = LODWORD(cmd->mic_threshold_aggressive);
  mic_threshold_loud = cmd->mic_threshold_loud;
  mic_gain = cmd->mic_gain;
  *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) = cmd->talk_time_threshold_loud;
  *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) = cmd->aggressive_in_time_threshold;
  aggressive_out_time_threshold = cmd->aggressive_out_time_threshold;
  inactivity_mute_delay = cmd->inactivity_mute_delay;
  *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = talk_time_threshold;
  *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = aggressive_out_time_threshold;
  *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = post_loud_aggressive_time;
  if ( (float)inactivity_mute_delay < 0.0 || (LastInputTimeForAnyLocalPlayer = CL_InputMP_GetLastInputTimeForAnyLocalPlayer(), *(_BYTE *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 1) = 1, currentTimeMs - LastInputTimeForAnyLocalPlayer <= inactivity_mute_delay) )
    *(_BYTE *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 1) = 0;
  v15 = 0;
  *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = 0;
  p_bufcount = &s_voiceEncoderGlob.voiceEncoderPool[0].pcm.bufcount;
  do
  {
    v17 = p_bufcount - 11;
    if ( *((_DWORD *)p_bufcount - 11) == 2 )
    {
      VoiceEncode_UpdateDebugRecordFile((VoiceEncoder *const)(p_bufcount - 11));
      v18 = *((_BYTE *)p_bufcount - 23) || currentTimeMs - *((_DWORD *)p_bufcount - 8) < post_loud_aggressive_time;
      *(_BYTE *)v4 = v18;
      v19 = talk_time_threshold;
      if ( *((_BYTE *)p_bufcount - 22) )
        v19 = *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14);
      _XMM0 = v18;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm15, xmm14, xmm2
      }
      *(float *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = *(float *)&_XMM0;
      _XMM8 = *(unsigned int *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
      *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = v19;
      while ( *(int *)p_bufcount >= 960 )
      {
        v24 = p_bufcount + 3843;
        if ( 10 - *((_DWORD *)p_bufcount + 3843) < 1 )
          break;
        if ( *(int *)p_bufcount < 960 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 83, ASSERT_TYPE_ASSERT, "(CanRead( count ))", (const char *)&queryFormat, "CanRead( count )") )
          __debugbreak();
        v25 = *((unsigned int *)p_bufcount - 2);
        v26 = (void *)(v4 + 64);
        if ( (unsigned int)(v25 + 960) <= 0xF00 )
        {
          memcpy_0(v26, (const void *)&p_bufcount[v25 + 1], 0xF00ui64);
        }
        else
        {
          v27 = (unsigned int)(3840 - v25);
          memcpy_0(v26, (const void *)&p_bufcount[v25 + 1], 4 * v27);
          memcpy_0((void *)(v4 + 4 * v27 + 64), (const void *)(p_bufcount + 1), 4i64 * (unsigned int)(960 - v27));
          v19 = *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
        }
        if ( *(int *)p_bufcount < 960 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 102, ASSERT_TYPE_ASSERT, "(CanRead( count ))", (const char *)&queryFormat, "CanRead( count )") )
          __debugbreak();
        *((_DWORD *)p_bufcount - 2) = (*((_DWORD *)p_bufcount - 2) + 960) % 0xF00u;
        if ( ((unsigned __int8)p_bufcount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_bufcount) )
          __debugbreak();
        _InterlockedExchangeAdd(p_bufcount, 0xFFFFFC40);
        VoiceEncode_DoAGC((VoiceEncoder *)(p_bufcount - 11), mic_gain, (float *)(v4 + 64), (float *)p_bufcount - 4);
        v28 = DVARBOOL_voice_debug;
        if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v28);
        if ( v28->current.enabled )
        {
          v29 = "normal";
          v30 = "normal";
          v31 = (float)(currentTimeMs - CL_InputMP_GetLastInputTimeForAnyLocalPlayer());
          if ( *((_BYTE *)p_bufcount - 22) )
            v29 = "loud";
          v32 = v31 * 0.001;
          __asm { vmaxss  xmm0, xmm8, xmm11; X }
          if ( *(_BYTE *)v4 )
            v30 = "aggressive";
          v34 = v32;
          v35 = log10f_0(*(float *)&_XMM0);
          _XMM2 = *((unsigned int *)p_bufcount - 4);
          v37 = v35 * 20.0;
          __asm { vmaxss  xmm0, xmm2, xmm11; X }
          *(float *)&_XMM0 = log10f_0(*(float *)&_XMM0);
          v39 = *((unsigned __int8 *)p_bufcount - 24);
          v55 = v34;
          v54 = v29;
          v19 = *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
          LODWORD(v53) = v19;
          Com_PrintWarning(25, "mic open: %d, rms: %.1fdB, mic threshold: %.1fdB (%s), talk time threshold: %dms (%s), inactivity timer: %.2fs\n", v39, (float)(*(float *)&_XMM0 * 20.0), v37, v30, v53, v54, v34);
        }
        if ( !*(_BYTE *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 1) )
        {
          v40 = *((float *)p_bufcount - 4);
          if ( v40 > *(float *)&_XMM8 )
          {
            v41 = *((_BYTE *)p_bufcount - 24) == 0;
            *((_DWORD *)p_bufcount - 9) = currentTimeMs;
            if ( v41 )
              *((_BYTE *)p_bufcount - 22) = 0;
            if ( v40 > mic_threshold_loud )
            {
              *((_BYTE *)p_bufcount - 22) = 1;
              *((_DWORD *)v17 + 3) = currentTimeMs;
            }
          }
        }
        if ( currentTimeMs - *((_DWORD *)p_bufcount - 9) < v19 || *((_QWORD *)v17 + 2099) )
        {
          *((_BYTE *)p_bufcount - 24) = 1;
          if ( 10 - *v24 < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 202, ASSERT_TYPE_ASSERT, "(CanWrite())", (const char *)&queryFormat, "CanWrite()") )
            __debugbreak();
          v42 = (__int64)&p_bufcount[34 * *((unsigned int *)p_bufcount + 3842) + 3844];
          Sys_ProfBeginNamedEvent(0xFFFF00u, "Codec_Encode_SampleFloat");
          *(_DWORD *)(v42 + 128) = VoiceCodec_Encode_SampleFloat(*((LocalClientNum_t *)p_bufcount - 10), (const float *)(v4 + 64), 960, (unsigned __int8 *)v42, 126);
          Sys_ProfEndNamedEvent();
          if ( *(int *)(v42 + 128) > 126 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 647, ASSERT_TYPE_ASSERT, "(packet->dataSize <= 128 - NUM_BYTES_NON_VOIP_DATA_HEADER)", (const char *)&queryFormat, "packet->dataSize <= MAX_VOICE_PACKET_DATA - NUM_BYTES_NON_VOIP_DATA_HEADER") )
            __debugbreak();
          v43 = *(_DWORD *)(v42 + 128);
          *(_DWORD *)(v42 + 132) = currentTimeMs;
          if ( v43 >= 0 )
          {
            if ( v43 > 2 )
            {
              v44 = (FILE *)*((_QWORD *)v17 + 2098);
              if ( v44 )
                fwrite((const void *)v42, 0x88ui64, 1ui64, v44);
              v45 = (FILE *)*((_QWORD *)v17 + 2099);
              if ( v45 )
              {
                if ( !fread((void *)v42, 0x88ui64, 1ui64, v45) )
                {
                  fseek(*((FILE **)v17 + 2099), 0, 0);
                  if ( !fread((void *)v42, 0x88ui64, 1ui64, *((FILE **)v17 + 2099)) )
                  {
                    v46 = DCONST_DVARSTR_voice_replay_recording;
                    if ( !DCONST_DVARSTR_voice_replay_recording && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_replay_recording") )
                      __debugbreak();
                    Dvar_CheckFrontendServerThread(v46);
                    Com_PrintError(25, "Error when reading voice replay file %s\n", v46->current.string);
                    v19 = *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
                  }
                }
                *(_DWORD *)(v42 + 132) = currentTimeMs;
              }
              if ( 10 - *v24 < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 209, ASSERT_TYPE_ASSERT, "(CanWrite())", (const char *)&queryFormat, "CanWrite()") )
                __debugbreak();
              *((_DWORD *)p_bufcount + 3842) = (*((_DWORD *)p_bufcount + 3842) + 1) % 0xAu;
              if ( ((unsigned __int8)v24 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)(p_bufcount + 3843)) )
                __debugbreak();
              _InterlockedIncrement(v24);
            }
          }
          else
          {
            Com_PrintError(25, "Error when encoding voice chat data. ret = %d\n", (unsigned int)v43);
          }
        }
        else
        {
          *((_BYTE *)p_bufcount - 24) = 0;
          *((_DWORD *)p_bufcount - 7) = currentTimeMs;
        }
      }
      v47 = *((_DWORD *)p_bufcount - 7);
      if ( v47 > 0 && currentTimeMs - v47 > *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) )
      {
        *((_BYTE *)v17 + 21) = 1;
LABEL_76:
        talk_time_threshold = *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
        post_loud_aggressive_time = *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
        v15 = *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
        goto LABEL_77;
      }
      v49 = *((_DWORD *)p_bufcount - 9);
      if ( v49 <= 0 )
        goto LABEL_76;
      v15 = *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
      post_loud_aggressive_time = *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
      talk_time_threshold = *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
      if ( currentTimeMs - v49 > *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) )
        *((_BYTE *)v17 + 21) = 0;
    }
    else if ( *v17 == 3 )
    {
      v50 = *(FILE **)(p_bufcount + 4185);
      if ( v50 )
      {
        fclose(v50);
        *(_QWORD *)(p_bufcount + 4185) = 0i64;
      }
      v51 = *(FILE **)(p_bufcount + 4187);
      if ( v51 )
      {
        fclose(v51);
        *(_QWORD *)(p_bufcount + 4187) = 0i64;
      }
      if ( ((unsigned __int8)v17 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)(p_bufcount - 11)) )
        __debugbreak();
      _InterlockedExchange(v17, 0);
    }
LABEL_77:
    ++v15;
    p_bufcount += 4200;
    *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = v15;
  }
  while ( v15 < 2 );
  maxEncodeTime = Sys_Microseconds() - *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28);
  s_voiceEncoderGlob.totalEncodeTime += maxEncodeTime;
  ++s_voiceEncoderGlob.totalEncodeCount;
  if ( s_voiceEncoderGlob.maxEncodeTime > maxEncodeTime )
    maxEncodeTime = s_voiceEncoderGlob.maxEncodeTime;
  s_voiceEncoderGlob.maxEncodeTime = maxEncodeTime;
  Sys_ProfEndNamedEvent();
}

/*
==============
VoiceEncode_FlushEncoder
==============
*/
char VoiceEncode_FlushEncoder(int localControllerIndex)
{
  __int64 v1; 
  VoiceEncoder *v2; 
  volatile __int32 *p_bufcount; 

  v1 = localControllerIndex;
  if ( (unsigned int)localControllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 255, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_voiceEncoderGlob.voiceEncoders ) ) + 0 ) )", "localControllerIndex doesn't index ARRAY_COUNT( s_voiceEncoderGlob.voiceEncoders )\n\t%i not in [0, %i)", localControllerIndex, 8) )
    __debugbreak();
  v2 = s_voiceEncoderGlob.voiceEncoders[v1];
  if ( !v2 )
    return 0;
  Sys_WaitWorkerCmdsOfType(WRKCMD_VOICECHAT_ENCODE);
  *(_QWORD *)&v2->pcm.readPos = 0i64;
  p_bufcount = &v2->pcm.bufcount;
  if ( ((unsigned __int8)p_bufcount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_bufcount) )
    __debugbreak();
  _InterlockedExchange(p_bufcount, 0);
  return 1;
}

/*
==============
VoiceEncode_FreeEncoder
==============
*/
char VoiceEncode_FreeEncoder(int localControllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  VoiceEncoder *v3; 
  signed __int32 v5[8]; 
  __int64 v6; 
  __int64 v7; 

  v1 = localControllerIndex;
  if ( (unsigned int)localControllerIndex >= 8 )
  {
    LODWORD(v7) = 8;
    LODWORD(v6) = localControllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_voiceEncoderGlob.voiceEncoders ) ) + 0 ) )", "localControllerIndex doesn't index ARRAY_COUNT( s_voiceEncoderGlob.voiceEncoders )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  v2 = v1;
  v3 = s_voiceEncoderGlob.voiceEncoders[v1];
  if ( !v3 )
    return 0;
  s_voiceEncoderGlob.voiceEncoders[v2] = NULL;
  _InterlockedOr(v5, 0);
  if ( !v3->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 165, ASSERT_TYPE_ASSERT, "(encoder->state != VoiceEncoder::FREE)", (const char *)&queryFormat, "encoder->state != VoiceEncoder::FREE") )
    __debugbreak();
  if ( ((unsigned __int8)v3 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", v3) )
    __debugbreak();
  _InterlockedExchange(&v3->state, 3);
  VoiceEncode_RunEncodeWorker();
  return 1;
}

/*
==============
VoiceEncode_GetAverageEncodeTime
==============
*/
unsigned __int64 VoiceEncode_GetAverageEncodeTime()
{
  if ( s_voiceEncoderGlob.totalEncodeCount )
    return s_voiceEncoderGlob.totalEncodeTime / s_voiceEncoderGlob.totalEncodeCount;
  else
    return 0i64;
}

/*
==============
VoiceEncode_GetLocalVoiceBufferUsage
==============
*/
__int64 VoiceEncode_GetLocalVoiceBufferUsage(int localControllerIndex)
{
  __int64 v1; 
  VoiceEncoder *v2; 
  int v5; 

  v1 = localControllerIndex;
  if ( (unsigned int)localControllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 390, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_voiceEncoderGlob.voiceEncoders ) ) + 0 ) )", "localControllerIndex doesn't index ARRAY_COUNT( s_voiceEncoderGlob.voiceEncoders )\n\t%i not in [0, %i)", localControllerIndex, v5) )
      __debugbreak();
  }
  v2 = s_voiceEncoderGlob.voiceEncoders[v1];
  if ( v2 && v2->state == 2 )
    return (unsigned int)v2->voiceEncoderOutput.bufcount;
  else
    return 0i64;
}

/*
==============
VoiceEncode_GetLocalVoiceRms
==============
*/
float VoiceEncode_GetLocalVoiceRms(int localControllerIndex)
{
  __int64 v1; 
  VoiceEncoder *v2; 
  int v5; 

  v1 = localControllerIndex;
  if ( (unsigned int)localControllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 374, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_voiceEncoderGlob.voiceEncoders ) ) + 0 ) )", "localControllerIndex doesn't index ARRAY_COUNT( s_voiceEncoderGlob.voiceEncoders )\n\t%i not in [0, %i)", localControllerIndex, v5) )
      __debugbreak();
  }
  v2 = s_voiceEncoderGlob.voiceEncoders[v1];
  if ( v2 && v2->state == 2 )
    return v2->agc.currentRms;
  else
    return 0.0;
}

/*
==============
VoiceEncode_GetMaxEncodeTime
==============
*/
unsigned __int64 VoiceEncode_GetMaxEncodeTime()
{
  return s_voiceEncoderGlob.maxEncodeTime;
}

/*
==============
VoiceEncode_Init
==============
*/

char __fastcall VoiceEncode_Init(double _XMM0_8, double _XMM1_8)
{
  memset_0(&s_voiceEncoderGlob, 0, 0x8340ui64);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  *(_OWORD *)s_voiceEncoderGlob.voiceEncoders = _XMM0;
  *(_OWORD *)&s_voiceEncoderGlob.voiceEncoders[2] = _XMM1;
  *(_OWORD *)&s_voiceEncoderGlob.voiceEncoders[4] = _XMM0;
  *(_OWORD *)&s_voiceEncoderGlob.voiceEncoders[6] = _XMM1;
  s_voiceEncoderGlob.voiceEncoderInitialized = 1;
  return 1;
}

/*
==============
VoiceEncode_ReadLocalVoiceData
==============
*/
__int64 VoiceEncode_ReadLocalVoiceData(int localControllerIndex, unsigned __int8 *data, unsigned int size)
{
  __int64 v3; 
  VoiceEncoder *v6; 
  VoiceCircPacketQueue<10> *p_voiceEncoderOutput; 
  unsigned int *v8; 
  const dvar_t *v9; 
  volatile signed __int32 *p_bufcount; 
  size_t v12; 
  int v14; 

  v3 = localControllerIndex;
  if ( (unsigned int)localControllerIndex >= 8 )
  {
    v14 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 337, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_voiceEncoderGlob.voiceEncoders ) ) + 0 ) )", "localControllerIndex doesn't index ARRAY_COUNT( s_voiceEncoderGlob.voiceEncoders )\n\t%i not in [0, %i)", localControllerIndex, v14) )
      __debugbreak();
  }
  v6 = s_voiceEncoderGlob.voiceEncoders[v3];
  if ( !v6 || v6->state != 2 || v6->voiceEncoderOutput.bufcount < 1 )
    return 0i64;
  p_voiceEncoderOutput = &v6->voiceEncoderOutput;
  while ( 1 )
  {
    if ( v6->voiceEncoderOutput.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 182, ASSERT_TYPE_ASSERT, "(CanRead())", (const char *)&queryFormat, "CanRead()") )
      __debugbreak();
    v8 = (unsigned int *)p_voiceEncoderOutput->buffer[p_voiceEncoderOutput->readPos].data;
    if ( (int)(Sys_Milliseconds() - v8[33]) <= 500 )
      break;
    v9 = DVARBOOL_voice_debug;
    if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
      Com_Printf(25, "Dropping stale voice packet for talker %d\n", (unsigned int)v3);
    p_bufcount = &v6->voiceEncoderOutput.bufcount;
    if ( v6->voiceEncoderOutput.bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 189, ASSERT_TYPE_ASSERT, "(CanRead())", (const char *)&queryFormat, "CanRead()") )
      __debugbreak();
    p_voiceEncoderOutput->readPos = (p_voiceEncoderOutput->readPos + 1) % 0xA;
    if ( ((unsigned __int8)p_bufcount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v6->voiceEncoderOutput.bufcount) )
      __debugbreak();
    _InterlockedDecrement(p_bufcount);
    if ( v6->voiceEncoderOutput.bufcount < 1 )
      return 0i64;
  }
  v12 = v8[32];
  if ( (unsigned int)v12 > size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 352, ASSERT_TYPE_ASSERT, "(dataSize <= size)", (const char *)&queryFormat, "dataSize <= size") )
    __debugbreak();
  memcpy_0(data, v8, v12);
  VoiceCircPacketQueue<10>::Read_Commit(p_voiceEncoderOutput);
  return (unsigned int)v12;
}

/*
==============
VoiceEncode_RunEncodeWorker
==============
*/
void VoiceEncode_RunEncodeWorker()
{
  const dvar_t *v0; 
  double v1; 
  const dvar_t *v2; 
  __int128 v4; 
  const dvar_t *v5; 
  __int128 v8; 
  const dvar_t *v9; 
  float value; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v18; 
  const dvar_t *v20; 
  const dvar_t *v22; 
  const dvar_t *v24; 
  int data[10]; 

  if ( !Sys_ExistsWorkerCmdsOfType(WRKCMD_VOICECHAT_ENCODE) && !Com_ErrorEntering() && s_voiceEncoderGlob.voiceEncoderInitialized )
  {
    v0 = DVARFLT_voice_mic_threshold;
    if ( !DVARFLT_voice_mic_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_threshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    v1 = I_fclamp(0.000015258789 * v0->current.value, 0.00063095737, 1.0);
    v2 = DVARFLT_voice_mic_threshold_aggressive;
    data[0] = SLODWORD(v1);
    if ( !DVARFLT_voice_mic_threshold_aggressive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_threshold_aggressive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    v4 = (unsigned int)data[0];
    *(float *)&v4 = *(float *)data * v2->current.value;
    _XMM1 = v4;
    v5 = DVARFLT_voice_mic_threshold_loud;
    __asm { vminss  xmm2, xmm1, xmm6 }
    data[1] = _XMM2;
    if ( !DVARFLT_voice_mic_threshold_loud && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_threshold_loud") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    v8 = (unsigned int)data[0];
    *(float *)&v8 = *(float *)data * v5->current.value;
    _XMM1 = v8;
    v9 = DVARFLT_voice_mic_scaler;
    __asm { vminss  xmm2, xmm1, xmm6 }
    data[2] = _XMM2;
    if ( !DVARFLT_voice_mic_scaler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_scaler") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    value = v9->current.value;
    v12 = DVARFLT_voice_mic_reclevel;
    if ( !DVARFLT_voice_mic_reclevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_reclevel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = 0.000015258789 * v12->current.value;
    v14 = DVARFLT_voice_mic_outTime;
    *(float *)&data[3] = v13 * value;
    if ( !DVARFLT_voice_mic_outTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_outTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15 = DVARFLT_voice_mic_outTimeLoud;
    _XMM6 = 0i64;
    __asm { vroundss xmm3, xmm6, xmm2, 1 }
    data[4] = (int)*(float *)&_XMM3;
    if ( !DVARFLT_voice_mic_outTimeLoud && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_outTimeLoud") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v18 = DVARFLT_voice_mic_aggressiveInTime;
    __asm { vroundss xmm1, xmm6, xmm3, 1 }
    data[5] = (int)*(float *)&_XMM1;
    if ( !DVARFLT_voice_mic_aggressiveInTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_aggressiveInTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v20 = DVARFLT_voice_mic_aggressiveOutTime;
    __asm { vroundss xmm1, xmm6, xmm3, 1 }
    data[6] = (int)*(float *)&_XMM1;
    if ( !DVARFLT_voice_mic_aggressiveOutTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_aggressiveOutTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v22 = DVARFLT_voice_mic_postLoudAggressiveTime;
    __asm { vroundss xmm1, xmm6, xmm3, 1 }
    data[7] = (int)*(float *)&_XMM1;
    if ( !DVARFLT_voice_mic_postLoudAggressiveTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_postLoudAggressiveTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    v24 = DVARFLT_voice_mic_inactivityMuteDelay;
    __asm { vroundss xmm1, xmm6, xmm3, 1 }
    data[8] = (int)*(float *)&_XMM1;
    if ( !DVARFLT_voice_mic_inactivityMuteDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_inactivityMuteDelay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    __asm { vroundss xmm1, xmm6, xmm3, 1 }
    data[9] = (int)*(float *)&_XMM1;
    Sys_AddWorkerCmd(WRKCMD_VOICECHAT_ENCODE, data);
  }
}

/*
==============
VoiceEncode_Shutdown
==============
*/

void __fastcall VoiceEncode_Shutdown(double _XMM0_8, double _XMM1_8)
{
  s_voiceEncoderGlob.voiceEncoderInitialized = 0;
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_VOICECHAT_ENCODE);
  memset_0(&s_voiceEncoderGlob, 0, 0x8340ui64);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  *(_OWORD *)s_voiceEncoderGlob.voiceEncoders = _XMM0;
  *(_OWORD *)&s_voiceEncoderGlob.voiceEncoders[2] = _XMM1;
  *(_OWORD *)&s_voiceEncoderGlob.voiceEncoders[4] = _XMM0;
  *(_OWORD *)&s_voiceEncoderGlob.voiceEncoders[6] = _XMM1;
}

/*
==============
VoiceEncode_SubmitLocalVoiceData
==============
*/
char VoiceEncode_SubmitLocalVoiceData(int localControllerIndex, const float *data, unsigned int size)
{
  unsigned __int64 v3; 
  __int64 v4; 
  VoiceEncoder *v7; 
  const dvar_t *v8; 
  int v9; 
  __int64 i; 
  float v11; 
  unsigned int v12; 
  __int64 v13; 
  volatile signed __int32 *p_bufcount; 
  __int64 writePos; 
  const void *v16; 
  unsigned int v17; 
  __int64 v18; 
  float *buffer; 
  unsigned int v20; 
  const dvar_t *v21; 
  __int64 v23; 
  unsigned int destCount[2]; 
  __int64 v25; 
  char v26[1392]; 

  v3 = (unsigned __int64)v26 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560) = (unsigned __int64)&v23 ^ _security_cookie;
  v4 = localControllerIndex;
  if ( (unsigned int)localControllerIndex >= 8 )
  {
    LODWORD(v25) = 8;
    destCount[0] = localControllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 275, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_voiceEncoderGlob.voiceEncoders ) ) + 0 ) )", "localControllerIndex doesn't index ARRAY_COUNT( s_voiceEncoderGlob.voiceEncoders )\n\t%i not in [0, %i)", *(_QWORD *)destCount, v25) )
      __debugbreak();
  }
  v7 = s_voiceEncoderGlob.voiceEncoders[v4];
  if ( !v7 || v7->state != 2 )
    return 0;
  v8 = DVARBOOL_voice_test_tone;
  if ( !DVARBOOL_voice_test_tone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_test_tone") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    v9 = frame;
    for ( i = 0i64; i < 256; ++i )
    {
      v11 = sinf_0((float)v9 * 0.049087387);
      v9 = (v9 + 1) % 256;
      *(float *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFE0ui64) + 4 * i + 0x160) = v11;
      frame = v9;
    }
    data = (const float *)(v3 + 352);
  }
  v12 = Resampler_Resample_DrainSrc(&v7->resampler, 3.0, data, size, (float *)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFE0ui64), 0x55u);
  v13 = v12;
  if ( 3840 - v7->pcm.bufcount < v12 )
  {
    v21 = DVARBOOL_voice_debug;
    if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.enabled )
      Com_Printf(25, "Local voice pcm buffer overflow for talker %d\n", (unsigned int)v4);
  }
  else
  {
    p_bufcount = &v7->pcm.bufcount;
    if ( 3840 - v7->pcm.bufcount < v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 117, ASSERT_TYPE_ASSERT, "(CanWrite( count ))", (const char *)&queryFormat, "CanWrite( count )") )
      __debugbreak();
    writePos = v7->pcm.writePos;
    v16 = (const void *)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFE0ui64);
    if ( (unsigned int)(writePos + v13) <= 0xF00 )
    {
      v18 = v13;
      buffer = &v7->pcm.buffer[writePos];
    }
    else
    {
      v17 = 3840 - writePos;
      memcpy_0(&v7->pcm.buffer[writePos], v16, 4i64 * (unsigned int)(3840 - writePos));
      v16 = (const void *)(v3 + 4i64 * v17);
      v18 = (unsigned int)v13 - v17;
      buffer = v7->pcm.buffer;
    }
    memcpy_0(buffer, v16, 4 * v18);
    v7->pcm.writePos = ((int)v13 + v7->pcm.writePos) % 0xF00;
    v20 = truncate_cast<int,unsigned int>(v13);
    if ( ((unsigned __int8)p_bufcount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v7->pcm.bufcount) )
      __debugbreak();
    _InterlockedExchangeAdd(p_bufcount, v20);
  }
  if ( v7->pcm.bufcount >= 0x3C0u )
    VoiceEncode_RunEncodeWorker();
  return 1;
}

/*
==============
VoiceEncode_UpdateDebugRecordFile
==============
*/
void VoiceEncode_UpdateDebugRecordFile(VoiceEncoder *const encoder)
{
  const dvar_t *v1; 
  _iobuf *recordFile; 
  unsigned int v4; 
  const char *v5; 
  const char *DevHddPath; 
  _iobuf *v7; 
  const dvar_t *v8; 
  const char *string; 
  const char *v10; 
  const char *v11; 
  _iobuf *v12; 
  _iobuf *replayFile; 
  char ospath[256]; 

  v1 = DCONST_DVARBOOL_voice_record_input;
  if ( !DCONST_DVARBOOL_voice_record_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_record_input") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  recordFile = encoder->recordFile;
  if ( v1->current.enabled )
  {
    if ( !recordFile )
    {
      v4 = Sys_Milliseconds();
      v5 = j_va("audio_debug/voice_recording_%d.raw", v4);
      DevHddPath = Sys_GetDevHddPath();
      FS_BuildOSPath(DevHddPath, (const char *)&queryFormat.fmt + 3, v5, (char (*)[256])ospath);
      FS_CreatePath(ospath);
      v7 = fopen(ospath, "wb");
      encoder->recordFile = v7;
      if ( !v7 )
        Com_PrintError(9, "Failed to open voice recording file.\n");
    }
  }
  else if ( recordFile )
  {
    fclose(recordFile);
    encoder->recordFile = NULL;
  }
  v8 = DCONST_DVARSTR_voice_replay_recording;
  if ( !DCONST_DVARSTR_voice_replay_recording && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_replay_recording") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  string = v8->current.string;
  if ( string && *string )
  {
    if ( !encoder->replayFile )
    {
      v10 = j_va("audio_debug/%s", string);
      v11 = Sys_GetDevHddPath();
      FS_BuildOSPath(v11, (const char *)&queryFormat.fmt + 3, v10, (char (*)[256])ospath);
      FS_CreatePath(ospath);
      v12 = fopen(ospath, "rb");
      encoder->replayFile = v12;
      if ( v12 )
        Dvar_SetBool_Internal(DVARBOOL_voice_loopback, 1);
      else
        Com_PrintError(9, "Failed to open voice replay file.\n");
    }
  }
  else
  {
    replayFile = encoder->replayFile;
    if ( replayFile )
    {
      fclose(replayFile);
      encoder->replayFile = NULL;
    }
  }
}

/*
==============
Voice_EncodeWorker
==============
*/
void Voice_EncodeWorker(const void *const cmdInfo)
{
  int v2; 

  v2 = Sys_Milliseconds();
  VoiceEncode_DoEncode((const VoiceChatWorkerCmd *)cmdInfo, v2);
}

