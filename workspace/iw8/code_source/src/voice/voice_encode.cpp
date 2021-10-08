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
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  int v7; 
  signed __int32 v10[8]; 
  __int64 v11; 
  __int64 v12; 

  v3 = localControllerIndex;
  v4 = localClientNum;
  if ( (unsigned int)localControllerIndex >= 8 )
  {
    LODWORD(v12) = 8;
    LODWORD(v11) = localControllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 212, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_voiceEncoderGlob.voiceEncoders ) ) + 0 ) )", "localControllerIndex doesn't index ARRAY_COUNT( s_voiceEncoderGlob.voiceEncoders )\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v5 = v3;
  if ( s_voiceEncoderGlob.voiceEncoders[v3] )
    return 0;
  _RBX = &s_voiceEncoderGlob.voiceEncoderPool[v4];
  if ( _RBX->state )
  {
    if ( _RBX->state != 3 )
    {
      LODWORD(v11) = _RBX->state;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 118, ASSERT_TYPE_ASSERT, "( ( encoder->state == VoiceEncoder::FREE || encoder->state == VoiceEncoder::WANTS_FREE ) )", "( encoder->state ) = %i", v11) )
        __debugbreak();
    }
  }
  if ( _RBX->state && _RBX->state != 3 )
    return 0;
  v7 = 0;
  if ( _RBX->state )
  {
    while ( 1 )
    {
      VoiceEncode_RunEncodeWorker();
      Sys_WaitWorkerCmdsOfType(WRKCMD_VOICECHAT_ENCODE);
      if ( ++v7 > 3 )
        break;
      if ( !_RBX->state )
        goto LABEL_14;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 135, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Timed out while waiting to free voice encoder!") )
      __debugbreak();
    return 0;
  }
LABEL_14:
  if ( ((unsigned __int8)_RBX & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_voiceEncoderGlob.voiceEncoderPool[v4]) )
    __debugbreak();
  _InterlockedExchange(&_RBX->state, 1);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  _RBX->localClientNum = v4;
  *(_QWORD *)&_RBX->lastTalkTime = 0i64;
  _RBX->lastMuteTime = 0;
  *(_WORD *)&_RBX->isMicOpen = 0;
  _RBX->wasTalkingLoud = 0;
  __asm { vmovss  dword ptr [rbx+18h], xmm0 }
  _RBX->agc.currentRms = 0.0;
  Resampler_Initialize(&_RBX->resampler);
  VoiceCircBuf<float,3840>::Reset(&_RBX->pcm);
  _RBX->recordFile = NULL;
  _RBX->replayFile = NULL;
  VoiceCodec_Encode_Allocate((LocalClientNum_t)v4, 10);
  s_voiceEncoderGlob.voiceEncoders[v5] = _RBX;
  _InterlockedOr(v10, 0);
  if ( ((unsigned __int8)_RBX & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_voiceEncoderGlob.voiceEncoderPool[v4]) )
    __debugbreak();
  _InterlockedExchange(&_RBX->state, 2);
  return 1;
}

/*
==============
VoiceEncode_DoAGC
==============
*/

void __fastcall VoiceEncode_DoAGC(VoiceEncoder *encoder, double micGain, float *inoutBuffer, float *outRms)
{
  const dvar_t *v12; 
  SD_DSP::RMSFinderParams<SD_DSP::MonoFrame> v35; 
  SD_DSP::InterleavedBufferRefType<SD_DSP::MonoFrame,960> v36; 
  int *v37; 
  SD_DSP::ClipParams<SD_DSP::MonoFrame> v38; 
  SD_DSP::GainParams<SD_DSP::MonoFrame> v39; 
  int v40[3]; 
  __int64 v48; 
  SD_DSP::Functor_RMSEnvelopeProcessor<SD_DSP::Functor_Terminal<SD_DSP::MonoFrame> > func; 

  v48 = -2i64;
  __asm { vmovaps [rsp+1A0h+var_40], xmm6 }
  _RDI = outRms;
  __asm { vmovaps xmm6, xmm1 }
  _RSI = encoder;
  Sys_ProfBeginNamedEvent(0xFFFF00u, "VoiceEncode_DoAGC");
  if ( ((unsigned __int8)inoutBuffer & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 61, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", inoutBuffer) )
    __debugbreak();
  if ( !inoutBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 424, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
    __debugbreak();
  if ( ((unsigned __int8)inoutBuffer & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 425, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  v36.data = (SD_DSP::MonoFrame *)inoutBuffer;
  __asm
  {
    vmovss  [rsp+1A0h+var_144.gain], xmm6
    vmovss  xmm0, cs:__real@3f7ae148
    vmovss  [rsp+1A0h+var_148.clipLevel], xmm0
    vmovss  xmm1, cs:__real@44700000
    vmovss  [rsp+1A0h+var_160.frameCount], xmm1
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+1A0h+var_160.peak.val], xmm0
  }
  SD_DSP::InterleavedBufferRefType<SD_DSP::MonoFrame,960>::Process<SD_DSP::Functor_Gain<SD_DSP::Functor_Clip<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::MonoFrame>>>>,SD_DSP::GainParams<SD_DSP::MonoFrame> *,SD_DSP::ClipParams<SD_DSP::MonoFrame> *,SD_DSP::RMSFinderParams<SD_DSP::MonoFrame> *>(&v36, &v39, &v38, &v35);
  v12 = DVARBOOL_voice_agc;
  if ( !DVARBOOL_voice_agc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_agc") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    __asm
    {
      vmovss  xmm2, [rsp+1A0h+var_160.peak.val]
      vmovss  [rsp+1A0h+var_130], xmm2
      vmovss  xmm3, cs:__real@3f7ff259
      vmovss  xmm4, dword ptr [rsi+18h]
      vmovss  [rsp+1A0h+var_124], xmm4
      vmovss  xmm0, cs:__real@3fa12478
      vmovss  [rbp+0A0h+var_120], xmm0
      vmovss  xmm1, cs:__real@42c80000
      vmovss  [rbp+0A0h+var_11C], xmm1
      vmovss  xmm0, cs:__real@3db68738
      vmovss  [rbp+0A0h+var_118], xmm0
      vmovaps xmm1, xmm2
      vmovups xmmword ptr [rbp+0A0h+func.peak], xmm1
      vmovss  [rsp+1A0h+var_12C], xmm3
      vmovups xmmword ptr [rbp+0A0h+func.ga], xmm3
      vmovss  [rsp+1A0h+var_128], xmm3
      vmovups xmmword ptr [rbp+0A0h+func.gr], xmm3
      vmovaps xmm2, xmm4
      vmovups xmmword ptr [rbp+0A0h+func.lastEnvSample], xmm2
      vmovaps ymm2, cs:__ymm@3f7d70a43f7d70a43f7d70a43f7d70a43fa124783fa124783fa124783fa12478
      vmovups ymmword ptr [rbp+0A0h+func.postGain], ymm2
      vmovaps ymm1, cs:__ymm@c1a80000c1a80000c1a80000c1a800003db687383db687383db687383db68738
      vmovups ymmword ptr [rbp+0A0h+func.thLin], ymm1
      vmovss  xmm2, [rbp+0A0h+var_114]
      vmovups xmmword ptr [rbp+0A0h+func.maxInput], xmm2
      vmovss  xmm3, [rbp+0A0h+var_110]
      vmovups xmmword ptr [rbp+0A0h+func.maxOutput], xmm3
      vmovss  xmm2, [rbp+0A0h+var_10C]
      vmovups xmmword ptr [rbp+0A0h+func.minGain], xmm2
    }
    SD_DSP::InterleavedBufferRefType<SD_DSP::MonoFrame,960>::Process<SD_DSP::Functor_RMSEnvelopeProcessor<SD_DSP::Functor_Terminal<SD_DSP::MonoFrame>>>(&v36, &func);
    v37 = v40;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0A0h+func.lastEnvSample]
      vmovss  [rsp+1A0h+var_124], xmm0
      vmovups xmm0, xmmword ptr [rbp+0A0h+func.maxInput]
      vmovss  dword ptr [rax+1Ch], xmm0
    }
    _RAX = (__int64)v37;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0A0h+func.maxOutput]
      vmovss  dword ptr [rax+20h], xmm0
    }
    _RAX = (__int64)v37;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0A0h+func.minGain]
      vmovss  dword ptr [rax+24h], xmm0
      vmovss  xmm0, [rsp+1A0h+var_124]
      vmovss  dword ptr [rsi+18h], xmm0
    }
  }
  if ( ((unsigned __int8)&v35 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 439, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+1A0h+var_160.peak.val]
    vmovss  dword ptr [rdi], xmm0
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+1A0h+var_40] }
}

/*
==============
VoiceEncode_DoEncode
==============
*/
void VoiceEncode_DoEncode(const VoiceChatWorkerCmd *cmd, int currentTimeMs)
{
  signed __int64 v2; 
  void *v15; 
  bool v19; 
  int talk_time_threshold; 
  int post_loud_aggressive_time; 
  int aggressive_out_time_threshold; 
  int inactivity_mute_delay; 
  int LastInputTimeForAnyLocalPlayer; 
  unsigned int v35; 
  volatile int *v37; 
  int v40; 
  volatile signed __int32 *v46; 
  __int64 v47; 
  void *v48; 
  __int64 v49; 
  const dvar_t *v51; 
  const char *v53; 
  const char *v54; 
  __int64 v62; 
  bool v66; 
  __int64 v67; 
  int v68; 
  FILE *v69; 
  FILE *v70; 
  const dvar_t *v71; 
  int v72; 
  unsigned __int64 maxEncodeTime; 
  int v85; 
  FILE *v86; 
  FILE *v87; 
  __int64 v88; 
  char *fmt; 
  __int64 v90; 
  const char *v91; 
  __int64 v92; 
  char v93[3920]; 
  char v104; 

  v15 = alloca(v2);
  __asm
  {
    vmovaps [rsp+1098h+var_48], xmm6
    vmovaps [rsp+1098h+var_58], xmm7
    vmovaps [rsp+1098h+var_68], xmm8
    vmovaps [rsp+1098h+var_78], xmm9
    vmovaps [rsp+1098h+var_88], xmm10
    vmovaps [rsp+1098h+var_98], xmm11
    vmovaps [rsp+1098h+var_A8], xmm12
    vmovaps [rsp+1098h+var_B8], xmm13
    vmovaps [rsp+1098h+var_C8], xmm14
    vmovaps [rsp+1098h+var_D8], xmm15
  }
  _RBP = (unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF40) = (unsigned __int64)&v88 ^ _security_cookie;
  _RBX = cmd;
  Sys_ProfBeginNamedEvent(0xFFFF00u, "VoiceEncode_DoEncode");
  *(_QWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = Sys_Microseconds();
  v19 = s_voiceEncoderGlob.totalEncodeCount < 0x64;
  if ( s_voiceEncoderGlob.totalEncodeCount >= 0x64 )
  {
    s_voiceEncoderGlob.totalEncodeTime = 0i64;
    s_voiceEncoderGlob.totalEncodeCount = 0i64;
  }
  talk_time_threshold = _RBX->talk_time_threshold;
  post_loud_aggressive_time = _RBX->post_loud_aggressive_time;
  __asm
  {
    vmovss  xmm14, dword ptr [rbx]
    vmovss  xmm15, dword ptr [rbx+4]
    vmovss  xmm9, dword ptr [rbx+8]
    vmovss  xmm10, dword ptr [rbx+0Ch]
  }
  *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) = _RBX->talk_time_threshold_loud;
  *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) = _RBX->aggressive_in_time_threshold;
  aggressive_out_time_threshold = _RBX->aggressive_out_time_threshold;
  inactivity_mute_delay = _RBX->inactivity_mute_delay;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ebx
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = talk_time_threshold;
  *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = aggressive_out_time_threshold;
  *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = post_loud_aggressive_time;
  if ( v19 || (LastInputTimeForAnyLocalPlayer = CL_InputMP_GetLastInputTimeForAnyLocalPlayer(), *(_BYTE *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 1) = 1, currentTimeMs - LastInputTimeForAnyLocalPlayer <= inactivity_mute_delay) )
    *(_BYTE *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 1) = 0;
  __asm
  {
    vmovss  xmm13, cs:__real@3a83126f
    vmovss  xmm11, cs:__real@37803e84
    vmovss  xmm12, cs:__real@41a00000
  }
  v35 = 0;
  *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = 0;
  _RSI = &s_voiceEncoderGlob.voiceEncoderPool[0].pcm.bufcount;
  do
  {
    v37 = _RSI - 11;
    if ( *((_DWORD *)_RSI - 11) == 2 )
    {
      VoiceEncode_UpdateDebugRecordFile((VoiceEncoder *const)(_RSI - 11));
      LOBYTE(_EAX) = *((_BYTE *)_RSI - 23) || currentTimeMs - *((_DWORD *)_RSI - 8) < post_loud_aggressive_time;
      _ECX = 0;
      *(_BYTE *)_RBP = _EAX;
      v40 = talk_time_threshold;
      _EAX = (unsigned __int8)_EAX;
      if ( *((_BYTE *)_RSI - 22) )
        v40 = *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14);
      __asm
      {
        vmovd   xmm0, eax
        vmovd   xmm1, ecx
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm15, xmm14, xmm2
        vmovss  dword ptr [rbp+18h], xmm0
        vmovss  xmm8, dword ptr [rbp+18h]
      }
      *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = v40;
      while ( *(int *)_RSI >= 960 )
      {
        v46 = _RSI + 3843;
        if ( 10 - *((_DWORD *)_RSI + 3843) < 1 )
          break;
        if ( *(int *)_RSI < 960 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 83, ASSERT_TYPE_ASSERT, "(CanRead( count ))", (const char *)&queryFormat, "CanRead( count )") )
          __debugbreak();
        v47 = *((unsigned int *)_RSI - 2);
        v48 = (void *)(_RBP + 64);
        if ( (unsigned int)(v47 + 960) <= 0xF00 )
        {
          memcpy_0(v48, (const void *)&_RSI[v47 + 1], 0xF00ui64);
        }
        else
        {
          v49 = (unsigned int)(3840 - v47);
          memcpy_0(v48, (const void *)&_RSI[v47 + 1], 4 * v49);
          memcpy_0((void *)(_RBP + 4 * v49 + 64), (const void *)(_RSI + 1), 4i64 * (unsigned int)(960 - v49));
          v40 = *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
        }
        if ( *(int *)_RSI < 960 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 102, ASSERT_TYPE_ASSERT, "(CanRead( count ))", (const char *)&queryFormat, "CanRead( count )") )
          __debugbreak();
        *((_DWORD *)_RSI - 2) = (*((_DWORD *)_RSI - 2) + 960) % 0xF00u;
        if ( ((unsigned __int8)_RSI & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)_RSI) )
          __debugbreak();
        _InterlockedExchangeAdd(_RSI, 0xFFFFFC40);
        __asm { vmovaps xmm1, xmm10; micGain }
        VoiceEncode_DoAGC((VoiceEncoder *)(_RSI - 11), *(double *)&_XMM1, (float *)(_RBP + 64), (float *)_RSI - 4);
        v51 = DVARBOOL_voice_debug;
        if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v51);
        if ( v51->current.enabled )
        {
          CL_InputMP_GetLastInputTimeForAnyLocalPlayer();
          __asm { vxorps  xmm0, xmm0, xmm0 }
          v53 = "normal";
          v54 = "normal";
          __asm { vcvtsi2ss xmm0, xmm0, ecx }
          if ( *((_BYTE *)_RSI - 22) )
            v53 = "loud";
          __asm
          {
            vmulss  xmm1, xmm0, xmm13
            vmaxss  xmm0, xmm8, xmm11; X
          }
          if ( *(_BYTE *)_RBP )
            v54 = "aggressive";
          __asm { vcvtss2sd xmm7, xmm1, xmm1 }
          *(float *)&_XMM0 = log10f_0(*(float *)&_XMM0);
          __asm
          {
            vmovss  xmm2, dword ptr [rsi-10h]
            vmulss  xmm1, xmm0, xmm12
            vmaxss  xmm0, xmm2, xmm11; X
            vcvtss2sd xmm6, xmm1, xmm1
          }
          *(float *)&_XMM0 = log10f_0(*(float *)&_XMM0);
          v62 = *((unsigned __int8 *)_RSI - 24);
          __asm { vmovsd  [rsp+1098h+var_1058], xmm7 }
          v91 = v53;
          v40 = *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
          __asm
          {
            vmulss  xmm1, xmm0, xmm12
            vcvtss2sd xmm3, xmm1, xmm1
          }
          LODWORD(v90) = v40;
          __asm
          {
            vmovq   r9, xmm3
            vmovsd  [rsp+1098h+fmt], xmm6
          }
          Com_PrintWarning(25, "mic open: %d, rms: %.1fdB, mic threshold: %.1fdB (%s), talk time threshold: %dms (%s), inactivity timer: %.2fs\n", v62, _R9, fmt, v54, v90, v91, v92);
        }
        if ( !*(_BYTE *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 1) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsi-10h]
            vcomiss xmm0, xmm8
          }
          if ( *(_BYTE *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 1) )
          {
            v66 = *((_BYTE *)_RSI - 24) == 0;
            *((_DWORD *)_RSI - 9) = currentTimeMs;
            if ( v66 )
              *((_BYTE *)_RSI - 22) = 0;
            __asm { vcomiss xmm0, xmm9 }
            if ( !v66 )
            {
              *((_BYTE *)_RSI - 22) = 1;
              *((_DWORD *)v37 + 3) = currentTimeMs;
            }
          }
        }
        if ( currentTimeMs - *((_DWORD *)_RSI - 9) < v40 || *((_QWORD *)v37 + 2099) )
        {
          *((_BYTE *)_RSI - 24) = 1;
          if ( 10 - *v46 < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 202, ASSERT_TYPE_ASSERT, "(CanWrite())", (const char *)&queryFormat, "CanWrite()") )
            __debugbreak();
          v67 = (__int64)&_RSI[34 * *((unsigned int *)_RSI + 3842) + 3844];
          Sys_ProfBeginNamedEvent(0xFFFF00u, "Codec_Encode_SampleFloat");
          *(_DWORD *)(v67 + 128) = VoiceCodec_Encode_SampleFloat(*((LocalClientNum_t *)_RSI - 10), (const float *)(_RBP + 64), 960, (unsigned __int8 *)v67, 126);
          Sys_ProfEndNamedEvent();
          if ( *(int *)(v67 + 128) > 126 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 647, ASSERT_TYPE_ASSERT, "(packet->dataSize <= 128 - NUM_BYTES_NON_VOIP_DATA_HEADER)", (const char *)&queryFormat, "packet->dataSize <= MAX_VOICE_PACKET_DATA - NUM_BYTES_NON_VOIP_DATA_HEADER") )
            __debugbreak();
          v68 = *(_DWORD *)(v67 + 128);
          *(_DWORD *)(v67 + 132) = currentTimeMs;
          if ( v68 >= 0 )
          {
            if ( v68 > 2 )
            {
              v69 = (FILE *)*((_QWORD *)v37 + 2098);
              if ( v69 )
                fwrite((const void *)v67, 0x88ui64, 1ui64, v69);
              v70 = (FILE *)*((_QWORD *)v37 + 2099);
              if ( v70 )
              {
                if ( !fread((void *)v67, 0x88ui64, 1ui64, v70) )
                {
                  fseek(*((FILE **)v37 + 2099), 0, 0);
                  if ( !fread((void *)v67, 0x88ui64, 1ui64, *((FILE **)v37 + 2099)) )
                  {
                    v71 = DCONST_DVARSTR_voice_replay_recording;
                    if ( !DCONST_DVARSTR_voice_replay_recording && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_replay_recording") )
                      __debugbreak();
                    Dvar_CheckFrontendServerThread(v71);
                    Com_PrintError(25, "Error when reading voice replay file %s\n", v71->current.string);
                    v40 = *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
                  }
                }
                *(_DWORD *)(v67 + 132) = currentTimeMs;
              }
              if ( 10 - *v46 < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 209, ASSERT_TYPE_ASSERT, "(CanWrite())", (const char *)&queryFormat, "CanWrite()") )
                __debugbreak();
              *((_DWORD *)_RSI + 3842) = (*((_DWORD *)_RSI + 3842) + 1) % 0xAu;
              if ( ((unsigned __int8)v46 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)(_RSI + 3843)) )
                __debugbreak();
              _InterlockedIncrement(v46);
            }
          }
          else
          {
            Com_PrintError(25, "Error when encoding voice chat data. ret = %d\n", (unsigned int)v68);
          }
        }
        else
        {
          *((_BYTE *)_RSI - 24) = 0;
          *((_DWORD *)_RSI - 7) = currentTimeMs;
        }
      }
      v72 = *((_DWORD *)_RSI - 7);
      if ( v72 > 0 && currentTimeMs - v72 > *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) )
      {
        *((_BYTE *)v37 + 21) = 1;
LABEL_76:
        talk_time_threshold = *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
        post_loud_aggressive_time = *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
        v35 = *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
        goto LABEL_77;
      }
      v85 = *((_DWORD *)_RSI - 9);
      if ( v85 <= 0 )
        goto LABEL_76;
      v35 = *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
      post_loud_aggressive_time = *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
      talk_time_threshold = *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
      if ( currentTimeMs - v85 > *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) )
        *((_BYTE *)v37 + 21) = 0;
    }
    else if ( *v37 == 3 )
    {
      v86 = *(FILE **)(_RSI + 4185);
      if ( v86 )
      {
        fclose(v86);
        *(_QWORD *)(_RSI + 4185) = 0i64;
      }
      v87 = *(FILE **)(_RSI + 4187);
      if ( v87 )
      {
        fclose(v87);
        *(_QWORD *)(_RSI + 4187) = 0i64;
      }
      if ( ((unsigned __int8)v37 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)(_RSI - 11)) )
        __debugbreak();
      _InterlockedExchange(v37, 0);
    }
LABEL_77:
    ++v35;
    _RSI += 4200;
    *(_DWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = v35;
  }
  while ( v35 < 2 );
  maxEncodeTime = Sys_Microseconds() - *(_QWORD *)(((unsigned __int64)v93 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28);
  s_voiceEncoderGlob.totalEncodeTime += maxEncodeTime;
  ++s_voiceEncoderGlob.totalEncodeCount;
  if ( s_voiceEncoderGlob.maxEncodeTime > maxEncodeTime )
    maxEncodeTime = s_voiceEncoderGlob.maxEncodeTime;
  s_voiceEncoderGlob.maxEncodeTime = maxEncodeTime;
  Sys_ProfEndNamedEvent();
  _R11 = &v104;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
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
  __int64 v2; 
  int v7; 

  v2 = localControllerIndex;
  if ( (unsigned int)localControllerIndex >= 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 374, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_voiceEncoderGlob.voiceEncoders ) ) + 0 ) )", "localControllerIndex doesn't index ARRAY_COUNT( s_voiceEncoderGlob.voiceEncoders )\n\t%i not in [0, %i)", localControllerIndex, v7) )
      __debugbreak();
  }
  _RCX = s_voiceEncoderGlob.voiceEncoders[v2];
  if ( _RCX && _RCX->state == 2 )
    __asm { vmovss  xmm0, dword ptr [rcx+1Ch] }
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
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
    vmovdqu xmmword ptr cs:s_voiceEncoderGlob.voiceEncoders, xmm0
    vmovdqu xmmword ptr cs:s_voiceEncoderGlob.voiceEncoders+10h, xmm1
    vmovdqu xmmword ptr cs:s_voiceEncoderGlob.voiceEncoders+20h, xmm0
    vmovdqu xmmword ptr cs:s_voiceEncoderGlob.voiceEncoders+30h, xmm1
  }
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
  const dvar_t *v3; 
  const dvar_t *v9; 
  const dvar_t *v12; 
  const dvar_t *v19; 
  const dvar_t *v21; 
  const dvar_t *v26; 
  const dvar_t *v32; 
  const dvar_t *v37; 
  const dvar_t *v42; 
  const dvar_t *v47; 
  int data[10]; 

  if ( !Sys_ExistsWorkerCmdsOfType(WRKCMD_VOICECHAT_ENCODE) && !Com_ErrorEntering() && s_voiceEncoderGlob.voiceEncoderInitialized )
  {
    v3 = DVARFLT_voice_mic_threshold;
    __asm
    {
      vmovaps [rsp+0A8h+var_18], xmm6
      vmovaps [rsp+0A8h+var_28], xmm7
      vmovaps [rsp+0A8h+var_38], xmm8
    }
    if ( !DVARFLT_voice_mic_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_threshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    __asm
    {
      vmovss  xmm7, cs:__real@37800000
      vmovss  xmm6, cs:__real@3f800000
      vmulss  xmm0, xmm7, dword ptr [rbx+28h]; val
      vmovss  xmm1, cs:__real@3a2566d5; min
      vmovaps xmm2, xmm6; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    v9 = DVARFLT_voice_mic_threshold_aggressive;
    __asm { vmovss  [rsp+0A8h+data], xmm0 }
    if ( !DVARFLT_voice_mic_threshold_aggressive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_threshold_aggressive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    __asm
    {
      vmovss  xmm0, [rsp+0A8h+data]
      vmulss  xmm1, xmm0, dword ptr [rbx+28h]
    }
    v12 = DVARFLT_voice_mic_threshold_loud;
    __asm
    {
      vminss  xmm2, xmm1, xmm6
      vmovss  [rsp+0A8h+var_64], xmm2
    }
    if ( !DVARFLT_voice_mic_threshold_loud && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_threshold_loud") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    __asm
    {
      vmovss  xmm0, [rsp+0A8h+data]
      vmulss  xmm1, xmm0, dword ptr [rbx+28h]
    }
    _RBX = DVARFLT_voice_mic_scaler;
    __asm
    {
      vminss  xmm2, xmm1, xmm6
      vmovss  [rsp+0A8h+var_60], xmm2
    }
    if ( !DVARFLT_voice_mic_scaler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_scaler") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    v19 = DVARFLT_voice_mic_reclevel;
    if ( !DVARFLT_voice_mic_reclevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_reclevel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    __asm { vmulss  xmm1, xmm7, dword ptr [rbx+28h] }
    v21 = DVARFLT_voice_mic_outTime;
    __asm
    {
      vmulss  xmm2, xmm1, xmm6
      vmovss  [rsp+0A8h+var_5C], xmm2
    }
    if ( !DVARFLT_voice_mic_outTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_outTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    __asm
    {
      vmovss  xmm7, cs:__real@447a0000
      vmulss  xmm1, xmm7, dword ptr [rbx+28h]
      vmovss  xmm8, cs:__real@3f000000
    }
    v26 = DVARFLT_voice_mic_outTimeLoud;
    __asm
    {
      vaddss  xmm2, xmm1, xmm8
      vxorps  xmm6, xmm6, xmm6
      vroundss xmm3, xmm6, xmm2, 1
      vcvttss2si eax, xmm3
    }
    data[4] = _EAX;
    if ( !DVARFLT_voice_mic_outTimeLoud && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_outTimeLoud") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    __asm { vmulss  xmm1, xmm7, dword ptr [rbx+28h] }
    v32 = DVARFLT_voice_mic_aggressiveInTime;
    __asm
    {
      vaddss  xmm3, xmm1, xmm8
      vroundss xmm1, xmm6, xmm3, 1
      vcvttss2si eax, xmm1
    }
    data[5] = _EAX;
    if ( !DVARFLT_voice_mic_aggressiveInTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_aggressiveInTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    __asm { vmulss  xmm1, xmm7, dword ptr [rbx+28h] }
    v37 = DVARFLT_voice_mic_aggressiveOutTime;
    __asm
    {
      vaddss  xmm3, xmm1, xmm8
      vroundss xmm1, xmm6, xmm3, 1
      vcvttss2si eax, xmm1
    }
    data[6] = _EAX;
    if ( !DVARFLT_voice_mic_aggressiveOutTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_aggressiveOutTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    __asm { vmulss  xmm1, xmm7, dword ptr [rbx+28h] }
    v42 = DVARFLT_voice_mic_postLoudAggressiveTime;
    __asm
    {
      vaddss  xmm3, xmm1, xmm8
      vroundss xmm1, xmm6, xmm3, 1
      vcvttss2si eax, xmm1
    }
    data[7] = _EAX;
    if ( !DVARFLT_voice_mic_postLoudAggressiveTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_postLoudAggressiveTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    __asm { vmulss  xmm1, xmm7, dword ptr [rbx+28h] }
    v47 = DVARFLT_voice_mic_inactivityMuteDelay;
    __asm
    {
      vaddss  xmm3, xmm1, xmm8
      vroundss xmm1, xmm6, xmm3, 1
      vcvttss2si eax, xmm1
    }
    data[8] = _EAX;
    if ( !DVARFLT_voice_mic_inactivityMuteDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_inactivityMuteDelay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    __asm
    {
      vmulss  xmm1, xmm7, dword ptr [rbx+28h]
      vaddss  xmm3, xmm1, xmm8
      vroundss xmm1, xmm6, xmm3, 1
      vcvttss2si eax, xmm1
    }
    data[9] = _EAX;
    Sys_AddWorkerCmd(WRKCMD_VOICECHAT_ENCODE, data);
    __asm
    {
      vmovaps xmm8, [rsp+0A8h+var_38]
      vmovaps xmm7, [rsp+0A8h+var_28]
      vmovaps xmm6, [rsp+0A8h+var_18]
    }
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
    vmovdqu xmmword ptr cs:s_voiceEncoderGlob.voiceEncoders, xmm0
    vmovdqu xmmword ptr cs:s_voiceEncoderGlob.voiceEncoders+10h, xmm1
    vmovdqu xmmword ptr cs:s_voiceEncoderGlob.voiceEncoders+20h, xmm0
    vmovdqu xmmword ptr cs:s_voiceEncoderGlob.voiceEncoders+30h, xmm1
  }
}

/*
==============
VoiceEncode_SubmitLocalVoiceData
==============
*/
bool VoiceEncode_SubmitLocalVoiceData(int localControllerIndex, const float *data, unsigned int size)
{
  __int64 v6; 
  VoiceEncoder *v9; 
  const dvar_t *v10; 
  int v12; 
  unsigned int v17; 
  __int64 v18; 
  volatile signed __int32 *p_bufcount; 
  __int64 writePos; 
  const void *v21; 
  unsigned int v22; 
  __int64 v23; 
  float *buffer; 
  unsigned int v25; 
  const dvar_t *v26; 
  bool result; 
  __int64 v29; 
  unsigned int destCount[2]; 
  __int64 v31; 
  char v32[1392]; 

  __asm { vmovaps [rsp+618h+var_48], xmm6 }
  _RBP = (unsigned __int64)v32 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560) = (unsigned __int64)&v29 ^ _security_cookie;
  v6 = localControllerIndex;
  if ( (unsigned int)localControllerIndex >= 8 )
  {
    LODWORD(v31) = 8;
    destCount[0] = localControllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_encode.cpp", 275, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_voiceEncoderGlob.voiceEncoders ) ) + 0 ) )", "localControllerIndex doesn't index ARRAY_COUNT( s_voiceEncoderGlob.voiceEncoders )\n\t%i not in [0, %i)", *(_QWORD *)destCount, v31) )
      __debugbreak();
  }
  v9 = s_voiceEncoderGlob.voiceEncoders[v6];
  if ( v9 && v9->state == 2 )
  {
    v10 = DVARBOOL_voice_test_tone;
    if ( !DVARBOOL_voice_test_tone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_test_tone") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
      __asm { vmovss  xmm6, cs:__real@3d490fdb }
      v12 = frame;
      for ( _RDI = 0i64; _RDI < 256; ++_RDI )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebx
          vmulss  xmm0, xmm0, xmm6; X
        }
        *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
        v12 = (v12 + 1) % 256;
        __asm { vmovss  dword ptr [rbp+rdi*4+160h], xmm0 }
        frame = v12;
      }
      data = (const float *)(_RBP + 352);
    }
    __asm { vmovss  xmm1, cs:__real@40400000; pitchRatio }
    v17 = Resampler_Resample_DrainSrc(&v9->resampler, *(const float *)&_XMM1, data, size, (float *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFE0ui64), 0x55u);
    v18 = v17;
    if ( 3840 - v9->pcm.bufcount < v17 )
    {
      v26 = DVARBOOL_voice_debug;
      if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      if ( v26->current.enabled )
        Com_Printf(25, "Local voice pcm buffer overflow for talker %d\n", (unsigned int)v6);
    }
    else
    {
      p_bufcount = &v9->pcm.bufcount;
      if ( 3840 - v9->pcm.bufcount < v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 117, ASSERT_TYPE_ASSERT, "(CanWrite( count ))", (const char *)&queryFormat, "CanWrite( count )") )
        __debugbreak();
      writePos = v9->pcm.writePos;
      v21 = (const void *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFE0ui64);
      if ( (unsigned int)(writePos + v18) <= 0xF00 )
      {
        v23 = v18;
        buffer = &v9->pcm.buffer[writePos];
      }
      else
      {
        v22 = 3840 - writePos;
        memcpy_0(&v9->pcm.buffer[writePos], v21, 4i64 * (unsigned int)(3840 - writePos));
        v21 = (const void *)(_RBP + 4i64 * v22);
        v23 = (unsigned int)v18 - v22;
        buffer = v9->pcm.buffer;
      }
      memcpy_0(buffer, v21, 4 * v23);
      v9->pcm.writePos = ((int)v18 + v9->pcm.writePos) % 0xF00;
      v25 = truncate_cast<int,unsigned int>(v18);
      if ( ((unsigned __int8)p_bufcount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v9->pcm.bufcount) )
        __debugbreak();
      _InterlockedExchangeAdd(p_bufcount, v25);
    }
    if ( v9->pcm.bufcount >= 0x3C0u )
      VoiceEncode_RunEncodeWorker();
    result = 1;
  }
  else
  {
    result = 0;
  }
  __asm { vmovaps xmm6, [rsp+618h+var_48] }
  return result;
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

