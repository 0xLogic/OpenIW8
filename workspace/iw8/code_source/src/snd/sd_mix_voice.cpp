/*
==============
SD_VoicePitchStereo
==============
*/

int __fastcall SD_VoicePitchStereo(sd_decoder *decoder, float pitchRatio, unsigned int outputCount, float *leftOut, float *rightOut)
{
  return ?SD_VoicePitchStereo@@YAHPEAUsd_decoder@@MIPEIAM1@Z(decoder, pitchRatio, outputCount, leftOut, rightOut);
}

/*
==============
SD_VoicePitchMono
==============
*/

int __fastcall SD_VoicePitchMono(sd_decoder *decoder, float pitchRatio, unsigned int outputCount, float *leftOut)
{
  return ?SD_VoicePitchMono@@YAHPEAUsd_decoder@@MIPEIAM@Z(decoder, pitchRatio, outputCount, leftOut);
}

/*
==============
SD_SecondaryVoiceIsReady
==============
*/

bool __fastcall SD_SecondaryVoiceIsReady(const sd_voice *voice, const sd_voice_param *param)
{
  return ?SD_SecondaryVoiceIsReady@@YA_NPEBUsd_voice@@PEBUsd_voice_param@@@Z(voice, param);
}

/*
==============
SD_MixVoices
==============
*/

void __fastcall SD_MixVoices(unsigned int voiceCount, sd_voice *voicePool, sd_voice_param **params, float *busBuffers)
{
  ?SD_MixVoices@@YAXIPEAUsd_voice@@PEAPEAUsd_voice_param@@PEAM@Z(voiceCount, voicePool, params, busBuffers);
}

/*
==============
SD_VoicePitchStereoEnv
==============
*/

int __fastcall SD_VoicePitchStereoEnv(sd_decoder *decoder, float pitchRatio, unsigned int outputCount, float *leftOut, float *rightOut, float *envelopeOut)
{
  return ?SD_VoicePitchStereoEnv@@YAHPEAUsd_decoder@@MIPEIAM11@Z(decoder, pitchRatio, outputCount, leftOut, rightOut, envelopeOut);
}

/*
==============
SD_DecoderIsReady
==============
*/

bool __fastcall SD_DecoderIsReady(sd_decoder *decoder)
{
  return ?SD_DecoderIsReady@@YA_NPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_VoiceRead
==============
*/

bool __fastcall SD_VoiceRead(sd_voice *voice, const sd_voice_param *param, float *leftOut, float *rightOut)
{
  return ?SD_VoiceRead@@YA_NPEAUsd_voice@@PEBUsd_voice_param@@PEAM2@Z(voice, param, leftOut, rightOut);
}

/*
==============
SD_VoiceNoPitchEnv
==============
*/

int __fastcall SD_VoiceNoPitchEnv(sd_decoder *decoder, float *leftOut, float *rightOut, unsigned int decodeCount, int channelCount, float *envelopeOut)
{
  return ?SD_VoiceNoPitchEnv@@YAHPEAUsd_decoder@@PEAM1IHPEIAM@Z(decoder, leftOut, rightOut, decodeCount, channelCount, envelopeOut);
}

/*
==============
SD_VoicePitchMonoEnv
==============
*/

int __fastcall SD_VoicePitchMonoEnv(sd_decoder *decoder, float pitchRatio, unsigned int outputCount, float *leftOut, float *envelopeOut)
{
  return ?SD_VoicePitchMonoEnv@@YAHPEAUsd_decoder@@MIPEIAM1@Z(decoder, pitchRatio, outputCount, leftOut, envelopeOut);
}

/*
==============
SD_VoiceIsReady
==============
*/

bool __fastcall SD_VoiceIsReady(sd_voice *voice, const sd_voice_param *param)
{
  return ?SD_VoiceIsReady@@YA_NPEAUsd_voice@@PEBUsd_voice_param@@@Z(voice, param);
}

/*
==============
SD_VoiceNoPitch
==============
*/

int __fastcall SD_VoiceNoPitch(sd_decoder *decoder, float *leftOut, float *rightOut, unsigned int decodeCount, int channelCount)
{
  return ?SD_VoiceNoPitch@@YAHPEAUsd_decoder@@PEAM1IH@Z(decoder, leftOut, rightOut, decodeCount, channelCount);
}

/*
==============
SD_DecoderIsReady
==============
*/
bool SD_DecoderIsReady(sd_decoder *decoder)
{
  unsigned int count; 

  count = decoder->output.count;
  return count && (count >= 0x100 || decoder->eos);
}

/*
==============
SD_MixVoice
==============
*/
void SD_MixVoice(sd_voice *voice, const sd_voice_param *param, float *busBuffers, bool stopping)
{
  signed __int64 v4; 
  void *v13; 
  const sd_voice_param *v16; 
  __int64 v22; 
  unsigned int autoSimId; 
  __int64 v26; 
  unsigned int v27; 
  unsigned int v28; 
  __int64 v29; 
  unsigned int v30; 
  sd_voice *secondaryMaster; 
  unsigned int v37; 
  unsigned __int64 startDelayMixFrames; 
  __int64 v39; 
  unsigned int v40; 
  SDAutoSim *v41; 
  SndWeapShotCountId autoSimShotCount; 
  sd_decoder *decoder; 
  unsigned int count; 
  int syncStopDelayFramesDecoded; 
  int syncStopFadeFramesDecoded; 
  int syncStartDelayFramesDecoded; 
  __int64 syncTimestamp; 
  signed int v61; 
  int syncStartFadeFramesDecoded; 
  __int64 v78; 
  sd_voice_cmd_entry *v79; 
  const float *MixSrcBuffer; 
  float *MixDestBuffer; 
  __int64 i; 
  const float *v83; 
  float *v84; 
  const float *v86; 
  float *v87; 
  OnePoleFilter_t *p_onePoleLowPass; 
  const float *v92; 
  float *v93; 
  const float *v96; 
  float *v97; 
  OnePoleFilter_t *p_onePoleHighPass; 
  const float *v102; 
  float *v103; 
  float v105; 
  float v106; 
  float *v109; 
  float *v110; 
  __int64 v111; 
  unsigned int v114; 
  const float **v115; 
  const float *v116; 
  __int64 v118; 
  int v122; 
  __int64 v136; 
  char *fmt; 
  float endScale[2]; 
  __int64 v139; 
  char v140[8328]; 
  __int64 v141; 
  char v148; 

  v13 = alloca(v4);
  v141 = -2i64;
  __asm
  {
    vmovaps [rsp+21A8h+var_48], xmm6
    vmovaps [rsp+21A8h+var_58], xmm7
    vmovaps [rsp+21A8h+var_68], xmm8
    vmovaps [rsp+21A8h+var_78], xmm10
    vmovaps [rsp+21A8h+var_88], xmm11
    vmovaps [rsp+21A8h+var_98], xmm12
  }
  _RBP = (int *)((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64);
  *((_QWORD *)_RBP + 1040) = (unsigned __int64)&v136 ^ _security_cookie;
  v16 = param;
  *((_QWORD *)_RBP + 4) = param;
  _RBX = voice;
  *((_QWORD *)_RBP + 5) = voice;
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm10, xmm6
    vmovaps xmm12, xmm6
    vmovaps xmm11, xmm6
  }
  if ( !param && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 906, ASSERT_TYPE_ASSERT, "(param)", (const char *)&queryFormat, "param") )
    __debugbreak();
  v22 = 2i64;
  __asm
  {
    vmovss  xmm8, cs:__real@5f800000
    vmovss  xmm7, cs:__real@5f000000
  }
  if ( stopping )
  {
    autoSimId = _RBX->autoSimId;
    if ( autoSimId == -1 )
      goto LABEL_11;
    v26 = (unsigned __int16)autoSimId;
    v27 = HIWORD(autoSimId);
    if ( (unsigned int)v26 >= 0x40 )
    {
      LODWORD(v139) = 64;
      LODWORD(endScale[0]) = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 505, ASSERT_TYPE_ASSERT, "(unsigned)( autoSimIndex ) < (unsigned)( ( sizeof( *array_counter( g_sd.autoSims ) ) + 0 ) )", "autoSimIndex doesn't index ARRAY_COUNT( g_sd.autoSims )\n\t%i not in [0, %i)", *(_QWORD *)endScale, v139) )
        __debugbreak();
    }
    if ( g_sd.autoSims[v26].instanceId != v27 || _RBX->autoSimShotCount != g_sd.autoSims[v26].currentShotCount )
    {
LABEL_11:
      v28 = _RBX->autoSimId;
      if ( v28 == -1 )
        goto LABEL_19;
      v29 = (unsigned __int16)v28;
      v30 = HIWORD(v28);
      if ( (unsigned int)v29 >= 0x40 )
      {
        LODWORD(v139) = 64;
        LODWORD(endScale[0]) = v29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 472, ASSERT_TYPE_ASSERT, "(unsigned)( autoSimIndex ) < (unsigned)( ( sizeof( *array_counter( g_sd.autoSims ) ) + 0 ) )", "autoSimIndex doesn't index ARRAY_COUNT( g_sd.autoSims )\n\t%i not in [0, %i)", *(_QWORD *)endScale, v139) )
          __debugbreak();
      }
      if ( g_sd.autoSims[v29].instanceId != v30 )
        goto LABEL_19;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
      }
      if ( (_RBX->autoSimStopTimeStamp & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddss  xmm0, xmm0, xmm8 }
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3d449ba6
        vcomiss xmm0, xmm7
        vsubss  xmm0, xmm0, xmm7
        vcomiss xmm0, xmm7
        vcvttss2si rax, xmm0
      }
      if ( (g_sd.autoSimClock << 8) + 256 > (g_sd.autoSims[v29].startTime << 8) + _RAX )
      {
LABEL_19:
        I_clamp(1 - _RBX->stopFadeState, 0, 2);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm10, xmm0, cs:__real@3f000000
        }
        ++_RBX->stopFadeState;
      }
    }
  }
  if ( (!_RBX->secondaryGroupId || ((secondaryMaster = _RBX->secondaryMaster) == NULL || secondaryMaster->secondaryGroupReady) && (_RBX->secondaryGroupSize <= 1 || _RBX->secondaryGroupReady)) && _RBX->state == SD_VOICE_ACTIVE && !_RBX->done )
  {
    v37 = _RBX->autoSimId;
    if ( (v37 == -1 || !g_sd.mixParam || !g_sd.mixParam->paused) && (_RBX->syncState || !_RBX->isSync) && v16 && !v16->paused )
    {
      startDelayMixFrames = _RBX->startDelayMixFrames;
      if ( startDelayMixFrames )
      {
        _RBX->startDelayMixFrames = startDelayMixFrames - 1;
        goto LABEL_185;
      }
      if ( _RBX->position )
        goto LABEL_54;
      if ( v37 == -1 )
        goto LABEL_47;
      v39 = (unsigned __int16)v37;
      v40 = HIWORD(v37);
      if ( (unsigned int)v39 >= 0x40 )
      {
        LODWORD(v139) = 64;
        LODWORD(endScale[0]) = v39;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 435, ASSERT_TYPE_ASSERT, "(unsigned)( autoSimIndex ) < (unsigned)( ( sizeof( *array_counter( g_sd.autoSims ) ) + 0 ) )", "autoSimIndex doesn't index ARRAY_COUNT( g_sd.autoSims )\n\t%i not in [0, %i)", *(_QWORD *)endScale, v139) )
          __debugbreak();
      }
      v41 = &g_sd.autoSims[v39];
      if ( v41->instanceId != v40 )
      {
LABEL_47:
        decoder = _RBX->decoder;
        if ( (!decoder || (count = decoder->output.count) == 0 || count < 0x100 && !decoder->eos) && !_RBX->isCinematic && !_RBX->isArcade0 && !_RBX->isArcade1 )
          goto LABEL_185;
LABEL_54:
        if ( _RBX->state != SD_VOICE_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 939, ASSERT_TYPE_ASSERT, "(voice->state == SD_VOICE_ACTIVE)", (const char *)&queryFormat, "voice->state == SD_VOICE_ACTIVE") )
          __debugbreak();
        memset_0(_RBP + 32, 0, 0x2000ui64);
        if ( !_RBX->isSync )
          goto LABEL_82;
        switch ( _RBX->syncState )
        {
          case SD_VOICE_SYNC_START_DELAY:
            syncStartDelayFramesDecoded = _RBX->syncStartDelayFramesDecoded;
            if ( !syncStartDelayFramesDecoded )
            {
              syncTimestamp = (unsigned int)_RBX->syncTimestamp;
              v61 = (g_sd.buffersSubmitted - (_DWORD)syncTimestamp) << 8;
              if ( !_RBX->syncSoftStart && _RBX->syncStartDelayFrames + 256 < v61 )
                Com_PrintWarning(9, "SOUND: too long elapsed between the sync offset computation and sound start %d %d\n", g_sd.buffersSubmitted, syncTimestamp);
              _RBX->syncStartDelayFramesDecoded += v61;
              syncStartDelayFramesDecoded = _RBX->syncStartDelayFramesDecoded;
            }
            if ( syncStartDelayFramesDecoded < _RBX->syncStartDelayFrames )
            {
              _RBX->syncStartDelayFramesDecoded = syncStartDelayFramesDecoded + 256;
              goto LABEL_185;
            }
            _RBX->syncState = SD_VOICE_SYNC_START_FADE;
            break;
          case SD_VOICE_SYNC_START_FADE:
            break;
          case SD_VOICE_SYNC_STOP_DELAY:
            syncStopDelayFramesDecoded = _RBX->syncStopDelayFramesDecoded;
            if ( syncStopDelayFramesDecoded >= _RBX->syncStopDelayFrames )
            {
              _RBX->syncState = SD_VOICE_SYNC_STOP_FADE;
LABEL_67:
              syncStopFadeFramesDecoded = _RBX->syncStopFadeFramesDecoded;
              if ( syncStopFadeFramesDecoded >= _RBX->syncStopFadeFrames )
              {
                _RBX->syncState = SD_VOICE_SYNC_DONE;
                goto LABEL_185;
              }
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, ecx
                vdivss  xmm2, xmm6, xmm0
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vmulss  xmm1, xmm0, xmm2
                vsubss  xmm12, xmm6, xmm1
              }
              _RBX->syncStopFadeFramesDecoded = syncStopFadeFramesDecoded + 256;
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vmulss  xmm1, xmm0, xmm2
                vsubss  xmm11, xmm6, xmm1
              }
              goto LABEL_81;
            }
            _RBX->syncStopDelayFramesDecoded = syncStopDelayFramesDecoded + 256;
LABEL_81:
            __asm
            {
              vmovaps xmm2, xmm6; max
              vxorps  xmm1, xmm1, xmm1; min
              vmovaps xmm0, xmm12; val
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmovaps xmm12, xmm0
              vmovaps xmm2, xmm6; max
              vxorps  xmm1, xmm1, xmm1; min
              vmovaps xmm0, xmm11; val
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmovaps xmm11, xmm0
              vmovss  dword ptr [rbx+3C0h], xmm0
            }
LABEL_82:
            if ( !SD_VoiceRead(_RBX, v16, (float *)_RBP + 32, (float *)_RBP + 288) )
            {
              _RBX->position += 256i64;
              __asm { vmulss  xmm8, xmm10, dword ptr [rbx+350h] }
              *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 0xC) = 0;
              if ( v16->commandBufferCount > 0 )
              {
                v78 = 0i64;
                *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 0x18) = 0i64;
                do
                {
                  v79 = &v16->commandBuffer[v78];
                  switch ( v79->cmd )
                  {
                    case SD_VOICE_CMD_COPY:
                      MixSrcBuffer = SD_VoiceGetMixSrcBuffer(v79->src, (const sd_voice_mix_temp_state *)(_RBP + 32));
                      if ( (unsigned int)(v79->dest - 3) <= 1 )
                      {
                        LODWORD(v139) = v79->dest;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1071, ASSERT_TYPE_ASSERT, "(cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD)", "%s\n\tCannot copy to voice destination %d.", "cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD", v139) )
                          __debugbreak();
                      }
                      MixDestBuffer = SD_VoiceGetMixDestBuffer(v79->dest, (sd_voice_mix_temp_state *)(_RBP + 32), 0);
                      if ( MixSrcBuffer == MixDestBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1073, ASSERT_TYPE_ASSERT, "(srcBuffer != destBuffer)", (const char *)&queryFormat, "srcBuffer != destBuffer") )
                        __debugbreak();
                      for ( i = _RBX->channelCount << 8; i; --i )
                        *MixDestBuffer++ = *MixSrcBuffer++;
                      break;
                    case SD_VOICE_CMD_EQ:
                      v83 = SD_VoiceGetMixSrcBuffer(v79->src, (const sd_voice_mix_temp_state *)(_RBP + 32));
                      if ( (unsigned int)(v79->dest - 3) <= 1 )
                      {
                        LODWORD(v139) = v79->dest;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1086, ASSERT_TYPE_ASSERT, "(cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD)", "%s\n\tCannot EQ to voice destination %d.", "cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD", v139) )
                          __debugbreak();
                      }
                      v84 = SD_VoiceGetMixDestBuffer(v79->dest, (sd_voice_mix_temp_state *)(_RBP + 32), 0);
                      if ( v83 == v84 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1088, ASSERT_TYPE_ASSERT, "(srcBuffer != destBuffer)", (const char *)&queryFormat, "srcBuffer != destBuffer") )
                        __debugbreak();
                      if ( v16->eqBankParamsHash != _RBX->eqBankParamsHash )
                      {
                        SND_ApplyEQBankParams(&_RBX->eqBank, &v16->dspParams.eqBankParams);
                        _RBX->eqBankParamsHash = v16->eqBankParamsHash;
                      }
                      EQBANK_ProcessArrayBlock<256>(&_RBX->eqBank, &v16->dspParams.eqBankParams, v83, v84, _RBX->channelCount);
                      break;
                    case SD_VOICE_CMD_LPF_BIQUAD:
                      __asm
                      {
                        vxorps  xmm6, xmm6, xmm6; jumptable 0000000142701BD1 case 2
                        vcvtsi2ss xmm6, xmm6, dword ptr [rdi+4]
                      }
                      v92 = SD_VoiceGetMixSrcBuffer(v79->src, (const sd_voice_mix_temp_state *)(_RBP + 32));
                      if ( (unsigned int)(v79->dest - 3) <= 1 )
                      {
                        LODWORD(v139) = v79->dest;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1133, ASSERT_TYPE_ASSERT, "(cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD)", "%s\n\tCannot LPF_BIQUAD to voice destination %d.", "cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD", v139) )
                          __debugbreak();
                      }
                      v93 = SD_VoiceGetMixDestBuffer(v79->dest, (sd_voice_mix_temp_state *)(_RBP + 32), 0);
                      if ( v92 == v93 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1135, ASSERT_TYPE_ASSERT, "(srcBuffer != destBuffer)", (const char *)&queryFormat, "srcBuffer != destBuffer") )
                        __debugbreak();
                      __asm { vmovaps xmm1, xmm6; freq }
                      SND_ApplyFilterLPFFrequency(&_RBX->lowPass, *(const float *)&_XMM1);
                      BIQUAD_ProcessArray<256>(&_RBX->lowPass.coeffs, _RBX->lowPass.state, v92, v93);
                      if ( _RBX->channelCount == 2 )
                        BIQUAD_ProcessArray<256>(&_RBX->lowPass.coeffs, &_RBX->lowPass.state[1], v92 + 256, v93 + 256);
                      break;
                    case SD_VOICE_CMD_HPF_BIQUAD:
                      __asm
                      {
                        vxorps  xmm6, xmm6, xmm6; jumptable 0000000142701BD1 case 3
                        vcvtsi2ss xmm6, xmm6, dword ptr [rdi+4]
                      }
                      v102 = SD_VoiceGetMixSrcBuffer(v79->src, (const sd_voice_mix_temp_state *)(_RBP + 32));
                      if ( (unsigned int)(v79->dest - 3) <= 1 )
                      {
                        LODWORD(v139) = v79->dest;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1178, ASSERT_TYPE_ASSERT, "(cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD)", "%s\n\tCannot HPF_BIQUAD to voice destination %d.", "cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD", v139) )
                          __debugbreak();
                      }
                      v103 = SD_VoiceGetMixDestBuffer(v79->dest, (sd_voice_mix_temp_state *)(_RBP + 32), 0);
                      if ( v102 == v103 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1180, ASSERT_TYPE_ASSERT, "(srcBuffer != destBuffer)", (const char *)&queryFormat, "srcBuffer != destBuffer") )
                        __debugbreak();
                      __asm { vmovaps xmm1, xmm6; freq }
                      SND_ApplyFilterHPFFrequency(&_RBX->highPass, *(const float *)&_XMM1);
                      BIQUAD_ProcessArray<256>(&_RBX->highPass.coeffs, _RBX->highPass.state, v102, v103);
                      if ( _RBX->channelCount == 2 )
                        BIQUAD_ProcessArray<256>(&_RBX->highPass.coeffs, &_RBX->highPass.state[1], v102 + 256, v103 + 256);
                      break;
                    case SD_VOICE_CMD_LPF_1POLE:
                      __asm
                      {
                        vxorps  xmm6, xmm6, xmm6; jumptable 0000000142701BD1 case 4
                        vcvtsi2ss xmm6, xmm6, dword ptr [rdi+4]
                      }
                      v86 = SD_VoiceGetMixSrcBuffer(v79->src, (const sd_voice_mix_temp_state *)(_RBP + 32));
                      if ( (unsigned int)(v79->dest - 3) <= 1 )
                      {
                        LODWORD(v139) = v79->dest;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1108, ASSERT_TYPE_ASSERT, "(cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD)", "%s\n\tCannot LPF_1POLE to voice destination %d.", "cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD", v139) )
                          __debugbreak();
                      }
                      v87 = SD_VoiceGetMixDestBuffer(v79->dest, (sd_voice_mix_temp_state *)(_RBP + 32), 0);
                      if ( v86 == v87 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1110, ASSERT_TYPE_ASSERT, "(srcBuffer != destBuffer)", (const char *)&queryFormat, "srcBuffer != destBuffer") )
                        __debugbreak();
                      __asm
                      {
                        vmovss  xmm2, cs:__real@473b8000; sampleRate
                        vmovaps xmm1, xmm6; freq
                      }
                      OnePole_SetFrequency(&_RBX->onePoleLowPass, *(float *)&_XMM1, *(float *)&_XMM2, 0);
                      p_onePoleLowPass = &_RBX->onePoleLowPass;
                      if ( _RBX->channelCount == 1 )
                        OnePoleLPF_ProcessArray(p_onePoleLowPass, v86, v87, 256);
                      else
                        OnePoleLPF_ProcessArrayStereoBlock(p_onePoleLowPass, v86, v87, 256);
                      break;
                    case SD_VOICE_CMD_HPF_1POLE:
                      __asm
                      {
                        vxorps  xmm6, xmm6, xmm6; jumptable 0000000142701BD1 case 5
                        vcvtsi2ss xmm6, xmm6, dword ptr [rdi+4]
                      }
                      v96 = SD_VoiceGetMixSrcBuffer(v79->src, (const sd_voice_mix_temp_state *)(_RBP + 32));
                      if ( (unsigned int)(v79->dest - 3) <= 1 )
                      {
                        LODWORD(v139) = v79->dest;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1154, ASSERT_TYPE_ASSERT, "(cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD)", "%s\n\tCannot HPF_1POLE to voice destination %d.", "cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD", v139) )
                          __debugbreak();
                      }
                      v97 = SD_VoiceGetMixDestBuffer(v79->dest, (sd_voice_mix_temp_state *)(_RBP + 32), 0);
                      if ( v96 == v97 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1156, ASSERT_TYPE_ASSERT, "(srcBuffer != destBuffer)", (const char *)&queryFormat, "srcBuffer != destBuffer") )
                        __debugbreak();
                      __asm
                      {
                        vmovss  xmm2, cs:__real@473b8000; sampleRate
                        vmovaps xmm1, xmm6; freq
                      }
                      OnePole_SetFrequency(&_RBX->onePoleHighPass, *(float *)&_XMM1, *(float *)&_XMM2, 0);
                      p_onePoleHighPass = &_RBX->onePoleHighPass;
                      if ( _RBX->channelCount == 1 )
                        OnePoleHPF_ProcessArray(p_onePoleHighPass, v96, v97, 256);
                      else
                        OnePoleHPF_ProcessArrayStereoBlock(p_onePoleHighPass, v96, v97, 256);
                      break;
                    case SD_VOICE_CMD_PAN:
                      SD_UnpackVoiceParamPanArgument(v79->cmdParam, _RBP + 2, _RBP + 1, (int *)((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64));
                      v105 = *(float *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 4);
                      if ( LODWORD(v105) >= v16->panMatrixCount )
                      {
                        LODWORD(v139) = v16->panMatrixCount;
                        endScale[0] = v105;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1202, ASSERT_TYPE_ASSERT, "(unsigned)( panMatrixIndex ) < (unsigned)( param->panMatrixCount )", "panMatrixIndex doesn't index param->panMatrixCount\n\t%i not in [0, %i)", *(_QWORD *)endScale, v139) )
                          __debugbreak();
                      }
                      v106 = *(float *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 8);
                      if ( LODWORD(v106) >= 0x11 )
                      {
                        LODWORD(v139) = 17;
                        endScale[0] = v106;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1203, ASSERT_TYPE_ASSERT, "(unsigned)( busIndex ) < (unsigned)( SND_BUS_COUNT )", "busIndex doesn't index SND_BUS_COUNT\n\t%i not in [0, %i)", *(_QWORD *)endScale, v139) )
                          __debugbreak();
                      }
                      LODWORD(_RAX) = *_RBP;
                      if ( (unsigned int)*_RBP >= 6 )
                      {
                        LODWORD(v139) = 6;
                        LODWORD(endScale[0]) = _RAX;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1204, ASSERT_TYPE_ASSERT, "(unsigned)( panLevelIndex ) < (unsigned)( SND_PAN_LEVEL_COUNT )", "panLevelIndex doesn't index SND_PAN_LEVEL_COUNT\n\t%i not in [0, %i)", *(_QWORD *)endScale, v139) )
                          __debugbreak();
                        LODWORD(_RAX) = *_RBP;
                      }
                      _RAX = (int)_RAX;
                      __asm
                      {
                        vmulss  xmm6, xmm8, dword ptr [r15+rax*4+218h]
                        vmovss  xmm7, dword ptr [rbx+rax*4+314h]
                      }
                      v109 = (float *)SD_VoiceGetMixSrcBuffer(v79->src, (const sd_voice_mix_temp_state *)(_RBP + 32));
                      if ( v79->dest != SD_VOICE_DEST_BUS )
                      {
                        LODWORD(v139) = v79->dest;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1210, ASSERT_TYPE_ASSERT, "(cmd->dest == SD_VOICE_DEST_BUS)", "%s\n\tCannot pan to voice destination %d.", "cmd->dest == SD_VOICE_DEST_BUS", v139) )
                          __debugbreak();
                      }
                      v110 = SD_VoiceGetMixDestBuffer(v79->dest, (sd_voice_mix_temp_state *)(_RBP + 32), *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 8));
                      *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 0x10) = v110;
                      if ( v109 == v110 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1212, ASSERT_TYPE_ASSERT, "(srcBuffer != destBuffer)", (const char *)&queryFormat, "srcBuffer != destBuffer") )
                        __debugbreak();
                      if ( _RBX->channelCount == 1 )
                      {
                        if ( ((unsigned __int8)v109 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 84, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", v109) )
                          __debugbreak();
                        if ( !v109 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 459, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
                          __debugbreak();
                        if ( ((unsigned __int8)v109 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 460, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
                          __debugbreak();
                        *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 0x10) = v109;
                        v111 = (__int64)*(int *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 4) << 7;
                        __asm
                        {
                          vmulss  xmm0, xmm6, xmm11
                          vmulss  xmm1, xmm7, xmm12
                          vmovss  [rsp+21A8h+endScale], xmm0
                          vmovss  dword ptr [rsp+21A8h+fmt], xmm1
                        }
                        SD_DSP::RawSequentialPanSum<SD_DSP::Buffer<SD_DSP::AtmosFrame,256>,SD_DSP::ConstSequentialBufferRefType<SD_DSP::MonoFrame,256>>(v110, (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::MonoFrame,256> *)_RBP + 2, (const float *const)((char *)_RBX->panFilter[0] + v111), (const float *const)((char *)v16->panMatrix[0] + v111), *(const float *)&fmt, endScale[0]);
                      }
                      else
                      {
                        if ( ((unsigned __int8)v109 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 84, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", v109) )
                          __debugbreak();
                        v114 = 0;
                        v115 = (const float **)(_RBP + 16);
                        do
                        {
                          v116 = &v109[256 * v114];
                          if ( !v116 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 459, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
                            __debugbreak();
                          if ( ((unsigned __int8)v109 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 460, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
                            __debugbreak();
                          *v115 = v116;
                          ++v114;
                          ++v115;
                        }
                        while ( v114 < 2 );
                        __asm
                        {
                          vmovups xmm0, xmmword ptr [rbp+40h]
                          vmovdqa xmmword ptr [rbp+50h], xmm0
                        }
                        v118 = (__int64)*(int *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 4) << 7;
                        __asm
                        {
                          vmulss  xmm0, xmm6, xmm11
                          vmulss  xmm1, xmm7, xmm12
                        }
                        v16 = *(const sd_voice_param **)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 0x20);
                        _RBX = *(sd_voice **)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 0x28);
                        __asm
                        {
                          vmovss  [rsp+21A8h+endScale], xmm0
                          vmovss  dword ptr [rsp+21A8h+fmt], xmm1
                        }
                        SD_DSP::RawSequentialPanSum<SD_DSP::Buffer<SD_DSP::AtmosFrame,256>,SD_DSP::ConstSequentialBufferRefType<SD_DSP::StereoFrame,256>>(*(float **)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 0x10), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::StereoFrame,256> *)_RBP + 5, (const float *const)((char *)_RBX->panFilter[0] + v118), (const float *const)((char *)v16->panMatrix[0] + v118), *(const float *)&fmt, endScale[0]);
                      }
                      _RAX = *_RBP;
                      __asm { vmovss  dword ptr [rbx+rax*4+314h], xmm6 }
                      break;
                    default:
                      endScale[0] = *(float *)&v79->cmd;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1287, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SD_MixVoice() received unknown mix command %d.", *(_QWORD *)endScale) )
                        __debugbreak();
                      break;
                  }
                  v122 = *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 0xC) + 1;
                  *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 0xC) = v122;
                  v78 = *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 0x18) + 1i64;
                  *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0ui64) + 0x18) = v78;
                }
                while ( v122 < v16->commandBufferCount );
                v22 = 2i64;
              }
              _RAX = _RBX->panFilter;
              _R15 = (char *)v16 - (char *)_RBX->panFilter;
              do
              {
                __asm
                {
                  vmovups ymm0, ymmword ptr [r15+rax+114h]
                  vmovups ymmword ptr [rax], ymm0
                  vmovups ymm1, ymmword ptr [r15+rax+134h]
                  vmovups ymmword ptr [rax+20h], ymm1
                  vmovups ymm0, ymmword ptr [r15+rax+154h]
                  vmovups ymmword ptr [rax+40h], ymm0
                  vmovups ymm1, ymmword ptr [r15+rax+174h]
                  vmovups ymmword ptr [rax+60h], ymm1
                }
                ++_RAX;
                --v22;
              }
              while ( v22 );
            }
            goto LABEL_185;
          case SD_VOICE_SYNC_STOP_FADE:
            goto LABEL_67;
          case SD_VOICE_SYNC_DONE:
            goto LABEL_185;
          default:
            goto LABEL_81;
        }
        syncStartFadeFramesDecoded = _RBX->syncStartFadeFramesDecoded;
        if ( syncStartFadeFramesDecoded >= _RBX->syncStartFadeFrames )
        {
          _RBX->syncState = SD_VOICE_SYNC_ACTIVE;
        }
        else
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ecx
            vdivss  xmm1, xmm6, xmm0
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm12, xmm0, xmm1
          }
          _RBX->syncStartFadeFramesDecoded = syncStartFadeFramesDecoded + 256;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm11, xmm0, xmm1
          }
        }
        goto LABEL_81;
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
      }
      if ( (_RBX->autoSimStartTimeStamp & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddss  xmm0, xmm0, xmm8 }
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3d449ba6
        vcomiss xmm0, xmm7
        vsubss  xmm0, xmm0, xmm7
        vcomiss xmm0, xmm7
        vcvttss2si rax, xmm0
      }
      if ( (g_sd.autoSimClock << 8) + 256 > (v41->startTime << 8) + _RAX )
      {
        autoSimShotCount = _RBX->autoSimShotCount;
        if ( v41->currentShotCount < autoSimShotCount )
          v41->currentShotCount = autoSimShotCount;
        goto LABEL_47;
      }
    }
  }
LABEL_185:
  _R11 = &v148;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
  }
}

/*
==============
SD_MixVoices
==============
*/
void SD_MixVoices(unsigned int voiceCount, sd_voice *voicePool, sd_voice_param **params, float *busBuffers)
{
  float *v5; 
  __int64 i; 
  unsigned int v7; 
  bool *p_needsInit; 
  bool *voiceYearnsToBeFree; 

  v5 = g_sd.busBuffers;
  for ( i = 69632i64; i; --i )
    *v5++ = 0.0;
  v7 = 0;
  *(_QWORD *)&g_sd.panPanCount = 0i64;
  if ( voiceCount )
  {
    p_needsInit = &voicePool->needsInit;
    voiceYearnsToBeFree = g_sd.voiceYearnsToBeFree;
    do
    {
      if ( *params )
      {
        if ( !*p_needsInit )
          SD_MixVoice(&voicePool[v7], *params, busBuffers, *voiceYearnsToBeFree);
      }
      ++v7;
      ++params;
      p_needsInit += 1064;
      ++voiceYearnsToBeFree;
    }
    while ( v7 < voiceCount );
  }
}

/*
==============
SD_SecondaryVoiceIsReady
==============
*/
bool SD_SecondaryVoiceIsReady(const sd_voice *voice, const sd_voice_param *param)
{
  sd_decoder *decoder; 
  unsigned int count; 
  bool result; 

  result = 0;
  if ( voice->state == SD_VOICE_ACTIVE && !voice->done && (voice->autoSimId == -1 || !g_sd.mixParam || !g_sd.mixParam->paused) && param && !param->paused )
  {
    if ( voice->position )
      return 1;
    decoder = voice->decoder;
    if ( decoder )
    {
      count = decoder->output.count;
      if ( count )
      {
        if ( count >= 0x100 || decoder->eos )
          return 1;
      }
    }
    if ( voice->isCinematic || voice->isArcade0 || voice->isArcade1 )
      return 1;
  }
  return result;
}

/*
==============
SD_VoiceDecoderRead
==============
*/
int SD_VoiceDecoderRead(sd_voice *voice, sd_decoder *decoder, int decodeCount, bool doPitch, float pitch, float *leftOut, float *rightOut, float *envelopeOut)
{
  __int64 v16; 
  signed __int64 v27; 
  int v28; 
  __int64 v29; 
  int v30; 
  float *v31; 
  unsigned __int64 v32; 
  unsigned __int64 i; 
  float *v34; 
  unsigned __int64 j; 
  float *v36; 
  __int64 v37; 
  int result; 
  int v39; 
  unsigned int count; 
  unsigned int v41; 
  bool v42; 
  __int16 v43; 
  __int16 v44; 
  unsigned int v45; 
  unsigned int v60; 
  bool v61; 
  __int16 v68; 
  __int16 v69; 
  unsigned int v70; 
  unsigned int v92; 
  bool v93; 
  unsigned int v95; 
  unsigned int v96; 
  __int16 v97; 
  __int16 v98; 
  unsigned int v99; 
  unsigned int v107; 
  bool v108; 
  __int16 v109; 
  __int16 v110; 
  unsigned int v111; 
  unsigned int v123; 
  bool v124; 
  char v131; 

  __asm { vmovaps [rsp+0D8h+var_88], xmm11 }
  v16 = decodeCount;
  _RDI = decoder;
  if ( !decodeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 639, ASSERT_TYPE_ASSERT, "(decodeCount)", (const char *)&queryFormat, "decodeCount") )
    __debugbreak();
  _R12 = envelopeOut;
  if ( !envelopeOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 641, ASSERT_TYPE_ASSERT, "(envelopeOut)", (const char *)&queryFormat, "envelopeOut") )
    __debugbreak();
  _RBX = leftOut;
  if ( ((unsigned __int8)leftOut & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 644, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( leftOut ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )leftOut ) ) = 0x%llx", leftOut) )
    __debugbreak();
  _RSI = rightOut;
  if ( ((unsigned __int8)rightOut & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 645, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( rightOut ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )rightOut ) ) = 0x%llx", rightOut) )
    __debugbreak();
  __asm { vmovss  xmm11, [rsp+0D8h+pitch] }
  if ( _RDI->eos )
    goto LABEL_34;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebp
    vmulss  xmm1, xmm0, xmm11
    vcvttss2si eax, xmm1
  }
  if ( _EAX < (signed int)_RDI->output.count )
  {
LABEL_34:
    v39 = 0;
    _RDI->starvingVoiceIndex = -1;
    *envelopeOut = 0.0;
    if ( voice->trackEnvelope )
    {
      if ( !doPitch )
      {
        result = SD_VoiceNoPitchEnv(_RDI, leftOut, rightOut, v16, voice->channelCount, envelopeOut);
        goto LABEL_51;
      }
      count = _RDI->output.count;
      v41 = _RDI->output.head - count;
      v42 = voice->channelCount == 1;
      __asm
      {
        vmovaps [rsp+0D8h+var_38], xmm6
        vmovaps [rsp+0D8h+var_48], xmm7
        vmovaps [rsp+0D8h+var_58], xmm8
        vmovaps [rsp+0D8h+var_68], xmm9
      }
      if ( v42 )
      {
        v43 = v41 & 0x3FF;
        v44 = (v43 + 1) & 0x3FF;
        if ( count > 8 )
        {
          v45 = 0;
          __asm
          {
            vmovss  xmm4, dword ptr [rdi+1100h]
            vxorps  xmm7, xmm7, xmm7
          }
          if ( (_DWORD)v16 )
          {
            __asm
            {
              vmovss  xmm5, cs:__real@3f800000
              vmovss  xmm8, cs:__real@3f7f974a
              vmovss  xmm9, cs:__real@3f7fb44a
              vmovss  xmm6, cs:__real@bf800000
            }
            do
            {
              if ( !_RDI->output.count )
                break;
              __asm
              {
                vsubss  xmm0, xmm5, xmm4
                vmulss  xmm1, xmm0, dword ptr [rdi+rcx*4+80h]
                vmulss  xmm0, xmm4, dword ptr [rdi+rdx*4+80h]
                vaddss  xmm3, xmm1, xmm0
                vcmpltss xmm0, xmm7, xmm3
                vsubss  xmm2, xmm7, xmm3
                vblendvps xmm1, xmm9, xmm8, xmm0
                vaddss  xmm4, xmm4, xmm11
                vcomiss xmm4, xmm5
                vmulss  xmm0, xmm2, xmm1
                vaddss  xmm7, xmm0, xmm3
                vmovss  dword ptr [rbx], xmm3
              }
              v60 = _RDI->output.count;
              do
              {
                v43 = (v43 + 1) & 0x3FF;
                v44 = (v44 + 1) & 0x3FF;
                v61 = v60-- == 0;
                _RDI->output.count = v60;
                __asm { vaddss  xmm4, xmm4, xmm6 }
                if ( !v60 )
                  break;
                __asm { vcomiss xmm4, xmm5 }
              }
              while ( !v61 );
              ++v45;
              ++_RBX;
            }
            while ( v45 < (unsigned int)v16 );
          }
          if ( _RDI->output.count <= 8 && _RDI->eos )
            _RDI->output.count = 0;
          __asm
          {
            vmovss  dword ptr [rdi+1100h], xmm4
            vmovss  dword ptr [r12], xmm7
          }
          v39 = v45;
        }
      }
      else
      {
        v68 = (2 * v41) & 0x3FF;
        v69 = (v68 + 2) & 0x3FF;
        if ( count > 8 )
        {
          v70 = 0;
          __asm
          {
            vmovss  xmm4, dword ptr [rdi+1100h]
            vxorps  xmm7, xmm7, xmm7
          }
          if ( (_DWORD)v16 )
          {
            __asm
            {
              vmovss  xmm5, cs:__real@3f800000
              vmovss  xmm8, cs:__real@3f7f974a
              vmovss  xmm9, cs:__real@3f7fb44a
              vmovss  xmm6, cs:__real@bf800000
              vmovaps [rsp+0D8h+var_78], xmm10
            }
            _RSI = (char *)rightOut - (char *)leftOut;
            __asm { vmovss  xmm10, cs:__real@3f004dce }
            do
            {
              if ( !_RDI->output.count )
                break;
              __asm
              {
                vmulss  xmm1, xmm4, dword ptr [rdi+r8*4+80h]
                vsubss  xmm2, xmm5, xmm4
                vmulss  xmm0, xmm2, dword ptr [rdi+rdx*4+80h]
                vaddss  xmm1, xmm1, xmm0
                vmovss  dword ptr [rbx], xmm1
                vmulss  xmm1, xmm4, dword ptr [rdi+rax*4+80h]
                vmulss  xmm0, xmm2, dword ptr [rdi+rax*4+80h]
                vaddss  xmm1, xmm1, xmm0
                vmovss  dword ptr [rsi+rbx], xmm1
                vaddss  xmm0, xmm1, dword ptr [rbx]
                vmulss  xmm3, xmm0, xmm10
                vcmpltss xmm0, xmm7, xmm3
                vsubss  xmm2, xmm7, xmm3
                vblendvps xmm1, xmm9, xmm8, xmm0
                vaddss  xmm4, xmm4, xmm11
                vcomiss xmm4, xmm5
                vmulss  xmm0, xmm2, xmm1
                vaddss  xmm7, xmm0, xmm3
              }
              v92 = _RDI->output.count;
              do
              {
                v68 = (v68 + 2) & 0x3FF;
                v69 = (v69 + 2) & 0x3FF;
                v93 = v92-- == 0;
                _RDI->output.count = v92;
                __asm { vaddss  xmm4, xmm4, xmm6 }
                if ( !v92 )
                  break;
                __asm { vcomiss xmm4, xmm5 }
              }
              while ( !v93 );
              ++v70;
              ++_RBX;
            }
            while ( v70 < (unsigned int)v16 );
            __asm { vmovaps xmm10, [rsp+0D8h+var_78] }
          }
          if ( _RDI->output.count <= 8 && _RDI->eos )
            _RDI->output.count = 0;
          __asm
          {
            vmovss  dword ptr [rdi+1100h], xmm4
            vmovss  dword ptr [r12], xmm7
          }
          v39 = v70;
        }
      }
      __asm
      {
        vmovaps xmm8, [rsp+0D8h+var_58]
        vmovaps xmm7, [rsp+0D8h+var_48]
        vmovaps xmm6, [rsp+0D8h+var_38]
        vmovaps xmm9, [rsp+0D8h+var_68]
      }
    }
    else
    {
      if ( !doPitch )
      {
        result = SD_VoiceNoPitch(_RDI, leftOut, rightOut, v16, voice->channelCount);
        goto LABEL_51;
      }
      v95 = _RDI->output.count;
      v96 = _RDI->output.head - v95;
      if ( voice->channelCount == 1 )
      {
        v97 = v96 & 0x3FF;
        v98 = (v97 + 1) & 0x3FF;
        if ( v95 > 8 )
        {
          v99 = 0;
          __asm { vmovss  xmm2, dword ptr [rdi+1100h] }
          if ( (_DWORD)v16 )
          {
            __asm
            {
              vmovss  xmm3, cs:__real@3f800000
              vmovss  xmm4, cs:__real@bf800000
            }
            do
            {
              if ( !_RDI->output.count )
                break;
              __asm
              {
                vsubss  xmm0, xmm3, xmm2
                vmulss  xmm1, xmm0, dword ptr [rdi+rcx*4+80h]
                vmulss  xmm0, xmm2, dword ptr [rdi+rdx*4+80h]
                vaddss  xmm2, xmm2, xmm11
                vcomiss xmm2, xmm3
                vaddss  xmm1, xmm1, xmm0
                vmovss  dword ptr [rbx], xmm1
              }
              v107 = _RDI->output.count;
              do
              {
                v97 = (v97 + 1) & 0x3FF;
                v98 = (v98 + 1) & 0x3FF;
                v108 = v107-- == 0;
                _RDI->output.count = v107;
                __asm { vaddss  xmm2, xmm2, xmm4 }
                if ( !v107 )
                  break;
                __asm { vcomiss xmm2, xmm3 }
              }
              while ( !v108 );
              ++v99;
              ++_RBX;
            }
            while ( v99 < (unsigned int)v16 );
          }
          if ( _RDI->output.count <= 8 && _RDI->eos )
            _RDI->output.count = 0;
          __asm { vmovss  dword ptr [rdi+1100h], xmm2 }
          v39 = v99;
        }
      }
      else
      {
        v109 = (2 * v96) & 0x3FF;
        v110 = (v109 + 2) & 0x3FF;
        if ( v95 > 8 )
        {
          v111 = 0;
          __asm { vmovss  xmm3, dword ptr [rdi+1100h] }
          if ( (_DWORD)v16 )
          {
            __asm
            {
              vmovss  xmm4, cs:__real@3f800000
              vmovss  xmm5, cs:__real@bf800000
            }
            _RBX = (char *)leftOut - (char *)rightOut;
            do
            {
              if ( !_RDI->output.count )
                break;
              __asm
              {
                vmulss  xmm1, xmm3, dword ptr [rdi+r8*4+80h]
                vsubss  xmm2, xmm4, xmm3
                vmulss  xmm0, xmm2, dword ptr [rdi+rdx*4+80h]
                vaddss  xmm1, xmm1, xmm0
                vmovss  dword ptr [rsi+rbx], xmm1
                vmulss  xmm1, xmm3, dword ptr [rdi+rax*4+80h]
                vmulss  xmm0, xmm2, dword ptr [rdi+rax*4+80h]
                vaddss  xmm3, xmm3, xmm11
                vcomiss xmm3, xmm4
                vaddss  xmm1, xmm1, xmm0
                vmovss  dword ptr [rsi], xmm1
              }
              v123 = _RDI->output.count;
              do
              {
                v109 = (v109 + 2) & 0x3FF;
                v110 = (v110 + 2) & 0x3FF;
                v124 = v123-- == 0;
                _RDI->output.count = v123;
                __asm { vaddss  xmm3, xmm3, xmm5 }
                if ( !v123 )
                  break;
                __asm { vcomiss xmm3, xmm4 }
              }
              while ( !v124 );
              ++v111;
              ++_RSI;
            }
            while ( v111 < (unsigned int)v16 );
          }
          if ( _RDI->output.count <= 8 && _RDI->eos )
            _RDI->output.count = 0;
          __asm { vmovss  dword ptr [rdi+1100h], xmm3 }
          v39 = v111;
        }
      }
    }
    result = v39;
  }
  else
  {
    v27 = voice - g_sd.voicePool;
    if ( (unsigned __int64)(v27 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v27, "signed", voice - g_sd.voicePool) )
      __debugbreak();
    _RDI->starvingVoiceIndex = v27;
    voice->starvedThisFrame = 1;
    v28 = 0;
    if ( (int)v16 > 0 && (unsigned int)v16 >= 4 )
    {
      v29 = (int)v16 - 1;
      if ( rightOut > &leftOut[v29] || &rightOut[v29] < leftOut )
      {
        v30 = v16 - (int)v16 % 4;
        do
          v28 += 4;
        while ( v28 < v30 );
        v31 = leftOut;
        v32 = 16i64 * ((v30 + 3) / 4);
        for ( i = v32 >> 2; i; --i )
          *v31++ = 0.0;
        v34 = rightOut;
        for ( j = v32 >> 2; j; --j )
          *v34++ = 0.0;
      }
    }
    if ( v28 < v16 )
    {
      v36 = &rightOut[v28];
      v37 = v16 - v28;
      do
      {
        *(float *)((char *)v36 + (char *)leftOut - (char *)rightOut) = 0.0;
        *v36++ = 0.0;
        --v37;
      }
      while ( v37 );
    }
    result = v16;
  }
LABEL_51:
  _R11 = &v131;
  __asm { vmovaps xmm11, xmmword ptr [r11-60h] }
  return result;
}

/*
==============
SD_VoiceGetMixDestBuffer
==============
*/
float *SD_VoiceGetMixDestBuffer(sd_voice_dest dest, sd_voice_mix_temp_state *tmpState, int busIndex)
{
  if ( dest == SD_VOICE_DEST_SCRATCH_1 )
    return tmpState->scratch1;
  if ( dest == SD_VOICE_DEST_SCRATCH_2 )
    return tmpState->scratch2;
  if ( dest == SD_VOICE_DEST_SCRATCH_3 )
    return tmpState->scratch3;
  if ( dest == SD_VOICE_DEST_BUS )
  {
    if ( (unsigned int)busIndex >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 579, ASSERT_TYPE_ASSERT, "(i<SND_BUS_COUNT)", (const char *)&queryFormat, "i<SND_BUS_COUNT") )
      __debugbreak();
    return &g_sd.voiceBusBuffers[(busIndex << 12) - 69632];
  }
  else
  {
    if ( dest == SD_VOICE_DEST_PAD )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 882, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Pad mixing not supported on this platform.") )
        __debugbreak();
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 887, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown voice destination type %d.", dest) )
    {
      __debugbreak();
      return 0i64;
    }
    return 0i64;
  }
}

/*
==============
SD_VoiceGetMixSrcBuffer
==============
*/
const sd_voice_mix_temp_state *SD_VoiceGetMixSrcBuffer(sd_voice_src src, const sd_voice_mix_temp_state *tmpState)
{
  switch ( src )
  {
    case SD_VOICE_SRC_TRANSPORT:
      return tmpState;
    case SD_VOICE_SRC_SCRATCH_1:
      return (const sd_voice_mix_temp_state *)tmpState->scratch1;
    case SD_VOICE_SRC_SCRATCH_2:
      return (const sd_voice_mix_temp_state *)tmpState->scratch2;
    case SD_VOICE_SRC_SCRATCH_3:
      return (const sd_voice_mix_temp_state *)tmpState->scratch3;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 856, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown voice source type %d.", src) )
    __debugbreak();
  return 0i64;
}

/*
==============
SD_VoiceIsReady
==============
*/
char SD_VoiceIsReady(sd_voice *voice, const sd_voice_param *param)
{
  unsigned int autoSimId; 
  unsigned __int64 startDelayMixFrames; 
  __int64 v7; 
  unsigned int v8; 
  SDAutoSim *v9; 
  SndWeapShotCountId autoSimShotCount; 
  sd_decoder *decoder; 
  unsigned int count; 

  if ( voice->state != SD_VOICE_ACTIVE )
    return 0;
  if ( voice->done )
    return 0;
  autoSimId = voice->autoSimId;
  if ( autoSimId != -1 && g_sd.mixParam && g_sd.mixParam->paused )
    return 0;
  if ( voice->syncState == SD_VOICE_SYNC_INIT && voice->isSync || !param || param->paused )
    return 0;
  startDelayMixFrames = voice->startDelayMixFrames;
  if ( startDelayMixFrames )
  {
    voice->startDelayMixFrames = startDelayMixFrames - 1;
    return 0;
  }
  if ( !voice->position )
  {
    if ( autoSimId != -1 )
    {
      v7 = (unsigned __int16)autoSimId;
      v8 = HIWORD(autoSimId);
      if ( (unsigned int)v7 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 435, ASSERT_TYPE_ASSERT, "(unsigned)( autoSimIndex ) < (unsigned)( ( sizeof( *array_counter( g_sd.autoSims ) ) + 0 ) )", "autoSimIndex doesn't index ARRAY_COUNT( g_sd.autoSims )\n\t%i not in [0, %i)", v7, 64) )
        __debugbreak();
      v9 = &g_sd.autoSims[v7];
      if ( v9->instanceId == v8 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
        }
        if ( (voice->autoSimStartTimeStamp & 0x8000000000000000ui64) != 0i64 )
          __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
        __asm
        {
          vmulss  xmm0, xmm0, cs:__real@3d449ba6
          vmovss  xmm1, cs:__real@5f000000
          vcomiss xmm0, xmm1
          vsubss  xmm0, xmm0, xmm1
          vcomiss xmm0, xmm1
          vcvttss2si rcx, xmm0
        }
        if ( (g_sd.autoSimClock + 1) << 8 <= (v9->startTime << 8) + _RCX )
          return 0;
        autoSimShotCount = voice->autoSimShotCount;
        if ( v9->currentShotCount < autoSimShotCount )
          v9->currentShotCount = autoSimShotCount;
      }
    }
    decoder = voice->decoder;
    if ( (!decoder || (count = decoder->output.count) == 0 || count < 0x100 && !decoder->eos) && !voice->isCinematic && !voice->isArcade0 && !voice->isArcade1 )
      return 0;
  }
  return 1;
}

/*
==============
SD_VoiceNoPitch
==============
*/
__int64 SD_VoiceNoPitch(sd_decoder *decoder, float *leftOut, float *rightOut, unsigned int decodeCount, int channelCount)
{
  unsigned int v5; 
  float *v6; 
  float *v7; 
  sd_stream *stream; 
  sd_stream_buffer *ioBuffer; 
  unsigned int requestLatency; 
  sd_stream_buffer *v12; 
  int v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int count; 
  unsigned int v17; 
  unsigned int v18; 
  __int64 v19; 
  unsigned int v20; 
  char *v21; 
  unsigned int v22; 
  __int64 v23; 
  int v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  float *v29; 
  __int64 v30; 
  __int64 v31; 

  v5 = decodeCount;
  v6 = rightOut;
  v7 = leftOut;
  if ( !decoder->eos && decodeCount > decoder->output.count )
  {
    stream = decoder->source->stream;
    if ( stream )
    {
      ioBuffer = stream->ioBuffer;
      if ( ioBuffer )
      {
        requestLatency = ioBuffer->requestLatency;
        v12 = decoder->source->stream->ioBuffer;
        v13 = Sys_Milliseconds();
        Com_PrintWarning(9, "SOUND: starving due to read request %s took %dms instead of %dms\n", v12->filename, v13 - v12->requestStartTime, requestLatency);
      }
    }
  }
  v14 = 1024 / channelCount;
  if ( decoder->output.head >= 1024 / channelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 179, ASSERT_TYPE_ASSERT, "(decoder->output.head < totalFrameCount)", (const char *)&queryFormat, "decoder->output.head < totalFrameCount") )
    __debugbreak();
  if ( decoder->output.count > v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 180, ASSERT_TYPE_ASSERT, "(decoder->output.count <= totalFrameCount)", (const char *)&queryFormat, "decoder->output.count <= totalFrameCount") )
    __debugbreak();
  v15 = 0i64;
  while ( v5 )
  {
    count = decoder->output.count;
    if ( !count )
      break;
    v17 = decoder->output.count;
    v18 = v5;
    v19 = (v14 + decoder->output.head - count) % v14;
    if ( v5 > v14 - (v14 + decoder->output.head - count) % v14 )
      v18 = v14 - (v14 + decoder->output.head - count) % v14;
    if ( count > v18 )
      v17 = v18;
    if ( count - v17 > v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 193, ASSERT_TYPE_ASSERT, "(decoder->output.count - contiguous <= totalFrameCount)", (const char *)&queryFormat, "decoder->output.count - contiguous <= totalFrameCount") )
      __debugbreak();
    if ( channelCount == 1 )
    {
      memcpy_0(&v7[v15], &decoder->output.buffer[v19], 4i64 * v17);
    }
    else
    {
      v20 = 0;
      if ( v17 >= 4 )
      {
        v21 = (char *)((char *)leftOut - (char *)v6);
        v22 = ((v17 - 4) >> 2) + 1;
        v23 = (__int64)&v6[v15 + 1];
        v24 = v19;
        v25 = v22;
        v20 = 4 * v22;
        do
        {
          v26 = (unsigned int)(2 * v24);
          *(float *)&v21[v23 - 4] = decoder->output.buffer[v26];
          v23 += 16i64;
          *(float *)(v23 - 20) = decoder->output.buffer[(unsigned int)(v26 + 1)];
          *(float *)&v21[v23 - 16] = decoder->output.buffer[(unsigned int)(v26 + 2)];
          *(float *)(v23 - 16) = decoder->output.buffer[(unsigned int)(v26 + 3)];
          *(float *)&v21[v23 - 12] = decoder->output.buffer[2 * v24 + 4];
          *(float *)(v23 - 12) = decoder->output.buffer[(unsigned int)(v26 + 5)];
          v27 = (unsigned int)(2 * v24 + 6);
          v24 += 4;
          *(float *)&v21[v23 - 8] = decoder->output.buffer[v27];
          *(float *)(v23 - 8) = decoder->output.buffer[(unsigned int)(v26 + 7)];
          --v25;
        }
        while ( v25 );
        v6 = rightOut;
        v7 = leftOut;
      }
      if ( v20 < v17 )
      {
        v28 = v20 + v19;
        v29 = &v6[v20 + (unsigned __int64)(unsigned int)v15];
        v30 = v17 - v20;
        do
        {
          v31 = (unsigned int)(2 * v28);
          *(float *)((char *)v29++ + (char *)v7 - (char *)v6) = decoder->output.buffer[v31];
          ++v28;
          *(v29 - 1) = decoder->output.buffer[(unsigned int)(v31 + 1)];
          --v30;
        }
        while ( v30 );
      }
    }
    decoder->output.count -= v17;
    v15 = v17 + (unsigned int)v15;
    v5 -= v17;
    if ( decoder->output.count > v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 211, ASSERT_TYPE_ASSERT, "(decoder->output.count <= totalFrameCount)", (const char *)&queryFormat, "decoder->output.count <= totalFrameCount") )
      __debugbreak();
  }
  if ( decoder->output.head >= v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 214, ASSERT_TYPE_ASSERT, "(decoder->output.head < totalFrameCount)", (const char *)&queryFormat, "decoder->output.head < totalFrameCount") )
    __debugbreak();
  if ( decoder->output.count > v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 215, ASSERT_TYPE_ASSERT, "(decoder->output.count <= totalFrameCount)", (const char *)&queryFormat, "decoder->output.count <= totalFrameCount") )
    __debugbreak();
  return (unsigned int)v15;
}

/*
==============
SD_VoiceNoPitchEnv
==============
*/
__int64 SD_VoiceNoPitchEnv(sd_decoder *decoder, float *leftOut, float *rightOut, unsigned int decodeCount, int channelCount, float *envelopeOut)
{
  bool v11; 
  float *v14; 
  unsigned int v15; 
  sd_stream *stream; 
  sd_stream_buffer *ioBuffer; 
  unsigned int requestLatency; 
  sd_stream_buffer *v19; 
  int v20; 
  unsigned int v21; 
  __int64 v23; 
  unsigned int count; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v34; 
  __int64 v36; 
  unsigned int v70; 
  unsigned int v72; 
  unsigned int v74; 
  __int64 v75; 
  __int64 v76; 
  __int64 v97; 
  unsigned int v113; 
  unsigned __int64 v114; 
  __int64 v116; 
  __int64 v118; 
  void *retaddr; 

  _RAX = &retaddr;
  v11 = !decoder->eos;
  _RSI = decoder;
  v14 = rightOut;
  v15 = decodeCount;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  if ( v11 && decodeCount > decoder->output.count )
  {
    stream = decoder->source->stream;
    if ( stream )
    {
      ioBuffer = stream->ioBuffer;
      if ( ioBuffer )
      {
        requestLatency = ioBuffer->requestLatency;
        v19 = _RSI->source->stream->ioBuffer;
        v20 = Sys_Milliseconds();
        Com_PrintWarning(9, "SOUND: starving due to read request %s took %dms instead of %dms\n", v19->filename, v20 - v19->requestStartTime, requestLatency);
      }
    }
  }
  v21 = 1024 / channelCount;
  if ( _RSI->output.head >= 1024 / channelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 365, ASSERT_TYPE_ASSERT, "(decoder->output.head < totalFrameCount)", (const char *)&queryFormat, "decoder->output.head < totalFrameCount") )
    __debugbreak();
  if ( _RSI->output.count > v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 366, ASSERT_TYPE_ASSERT, "(decoder->output.count <= totalFrameCount)", (const char *)&queryFormat, "decoder->output.count <= totalFrameCount") )
    __debugbreak();
  if ( !_RSI->eos && v15 > _RSI->output.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 368, ASSERT_TYPE_ASSERT, "(decoder->eos || decodeCount <= decoder->output.count)", (const char *)&queryFormat, "decoder->eos || decodeCount <= decoder->output.count") )
    __debugbreak();
  _RAX = envelopeOut;
  v23 = 0i64;
  __asm { vmovss  xmm6, dword ptr [rax] }
  if ( v15 )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_58], xmm7
      vmovss  xmm7, cs:__real@3f7f974a
      vmovaps [rsp+0A8h+var_68], xmm8
      vmovss  xmm8, cs:__real@3f7fb44a
      vmovaps [rsp+0A8h+var_78], xmm9
      vmovss  xmm9, cs:__real@3f004dce
    }
    do
    {
      count = _RSI->output.count;
      if ( !count )
        break;
      v29 = _RSI->output.count;
      v30 = v15;
      v31 = (v21 + _RSI->output.head - count) % v21;
      if ( v15 > v21 - v31 )
        v30 = v21 - (v21 + _RSI->output.head - count) % v21;
      if ( count > v30 )
        v29 = v30;
      if ( count - v29 > v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 381, ASSERT_TYPE_ASSERT, "(decoder->output.count - contiguous <= totalFrameCount)", (const char *)&queryFormat, "decoder->output.count - contiguous <= totalFrameCount") )
        __debugbreak();
      if ( channelCount == 1 )
      {
        v32 = 0;
        if ( v29 >= 4 )
        {
          _R8 = v31 + 1;
          v34 = ((v29 - 4) >> 2) + 1;
          _R9 = &leftOut[v23];
          v36 = v34;
          v32 = 4 * v34;
          do
          {
            _RAX = (unsigned int)(_R8 - 1);
            _R9 += 4;
            __asm { vmovss  xmm3, dword ptr [rsi+rax*4+80h] }
            _RAX = (unsigned int)(_R8 + 1);
            __asm
            {
              vmovss  dword ptr [r9-10h], xmm3
              vmovss  xmm4, dword ptr [rsi+r8*4+80h]
              vcmpltss xmm0, xmm6, xmm3
              vblendvps xmm1, xmm8, xmm7, xmm0
              vsubss  xmm2, xmm6, xmm3
              vmulss  xmm0, xmm2, xmm1
              vaddss  xmm2, xmm0, xmm3
              vcmpltss xmm0, xmm2, xmm4
              vblendvps xmm1, xmm8, xmm7, xmm0
              vsubss  xmm3, xmm2, xmm4
              vmulss  xmm0, xmm1, xmm3
              vaddss  xmm2, xmm0, xmm4
              vmovss  dword ptr [r9-0Ch], xmm4
              vmovss  xmm4, dword ptr [rsi+rax*4+80h]
            }
            _RAX = (unsigned int)(_R8 + 2);
            _R8 = (unsigned int)(_R8 + 4);
            __asm
            {
              vcmpltss xmm0, xmm2, xmm4
              vblendvps xmm1, xmm8, xmm7, xmm0
              vsubss  xmm3, xmm2, xmm4
              vmulss  xmm0, xmm1, xmm3
              vaddss  xmm2, xmm0, xmm4
              vmovss  dword ptr [r9-8], xmm4
              vmovss  xmm4, dword ptr [rsi+rax*4+80h]
              vcmpltss xmm0, xmm2, xmm4
              vblendvps xmm1, xmm8, xmm7, xmm0
              vsubss  xmm3, xmm2, xmm4
              vmulss  xmm0, xmm1, xmm3
              vmovss  dword ptr [r9-4], xmm4
              vaddss  xmm6, xmm0, xmm4
            }
            --v36;
          }
          while ( v36 );
        }
        if ( v32 < v29 )
        {
          _R8 = &leftOut[(unsigned int)v23 + (unsigned __int64)v32];
          do
          {
            _RAX = v32 + v31;
            ++v32;
            ++_R8;
            __asm
            {
              vmovss  xmm3, dword ptr [rsi+rax*4+80h]
              vcmpltss xmm0, xmm6, xmm3
              vsubss  xmm2, xmm6, xmm3
              vblendvps xmm1, xmm8, xmm7, xmm0
              vmulss  xmm0, xmm2, xmm1
              vmovss  dword ptr [r8-4], xmm3
              vaddss  xmm6, xmm0, xmm3
            }
          }
          while ( v32 < v29 );
        }
      }
      else
      {
        v70 = 0;
        if ( v29 >= 4 )
        {
          _R11 = (char *)v14 - (char *)leftOut;
          v72 = ((v29 - 4) >> 2) + 1;
          _R9 = &leftOut[v23 + 1];
          v74 = v31;
          v75 = v72;
          v70 = 4 * v72;
          do
          {
            v76 = 2 * v74;
            _RAX = (unsigned int)(v76 + 1);
            *(_R9 - 1) = _RSI->output.buffer[v76];
            _R9 += 4;
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+rax*4+80h]
              vmovss  dword ptr [r11+r9-14h], xmm0
            }
            *(_R9 - 4) = _RSI->output.buffer[(unsigned int)(v76 + 2)];
            _RAX = (unsigned int)(v76 + 3);
            __asm
            {
              vaddss  xmm0, xmm0, dword ptr [r9-14h]
              vmulss  xmm3, xmm0, xmm9
              vcmpltss xmm0, xmm6, xmm3
              vblendvps xmm1, xmm8, xmm7, xmm0
              vsubss  xmm2, xmm6, xmm3
              vmulss  xmm0, xmm1, xmm2
              vaddss  xmm4, xmm0, xmm3
              vmovss  xmm0, dword ptr [rsi+rax*4+80h]
              vmovss  dword ptr [r11+r9-10h], xmm0
            }
            *(_R9 - 3) = _RSI->output.buffer[2 * v74 + 4];
            _RAX = (unsigned int)(v76 + 5);
            __asm
            {
              vaddss  xmm0, xmm0, dword ptr [r9-10h]
              vmulss  xmm3, xmm0, xmm9
              vcmpltss xmm0, xmm4, xmm3
              vblendvps xmm1, xmm8, xmm7, xmm0
              vsubss  xmm2, xmm4, xmm3
              vmulss  xmm0, xmm1, xmm2
              vaddss  xmm4, xmm0, xmm3
              vmovss  xmm0, dword ptr [rsi+rax*4+80h]
            }
            v97 = 2 * v74 + 6;
            v74 += 4;
            __asm { vmovss  dword ptr [r11+r9-0Ch], xmm0 }
            *(_R9 - 2) = _RSI->output.buffer[v97];
            _RAX = (unsigned int)(v76 + 7);
            __asm
            {
              vaddss  xmm0, xmm0, dword ptr [r9-0Ch]
              vmulss  xmm3, xmm0, xmm9
              vcmpltss xmm0, xmm4, xmm3
              vblendvps xmm1, xmm8, xmm7, xmm0
              vsubss  xmm2, xmm4, xmm3
              vmulss  xmm0, xmm1, xmm2
              vaddss  xmm4, xmm0, xmm3
              vmovss  xmm0, dword ptr [rsi+rax*4+80h]
              vmovss  dword ptr [r11+r9-8], xmm0
              vaddss  xmm0, xmm0, dword ptr [r9-8]
              vmulss  xmm3, xmm0, xmm9
              vcmpltss xmm0, xmm4, xmm3
              vblendvps xmm1, xmm8, xmm7, xmm0
              vsubss  xmm2, xmm4, xmm3
              vmulss  xmm0, xmm1, xmm2
              vaddss  xmm6, xmm0, xmm3
            }
            --v75;
          }
          while ( v75 );
          v21 = 1024 / channelCount;
          v14 = rightOut;
        }
        if ( v70 < v29 )
        {
          v113 = v70 + v31;
          v114 = (unsigned int)v23 + (unsigned __int64)v70;
          _R11 = (char *)v14 - (char *)leftOut;
          v116 = v29 - v70;
          _R8 = &leftOut[v114];
          do
          {
            v118 = 2 * v113;
            _RAX = (unsigned int)(v118 + 1);
            *_R8++ = _RSI->output.buffer[v118];
            ++v113;
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+rax*4+80h]
              vmovss  dword ptr [r11+r8-4], xmm0
              vaddss  xmm0, xmm0, dword ptr [r8-4]
              vmulss  xmm3, xmm0, xmm9
              vcmpltss xmm0, xmm6, xmm3
              vsubss  xmm2, xmm6, xmm3
              vblendvps xmm1, xmm8, xmm7, xmm0
              vmulss  xmm0, xmm1, xmm2
              vaddss  xmm6, xmm0, xmm3
            }
            --v116;
          }
          while ( v116 );
        }
      }
      _RSI->output.count -= v29;
      v23 = v29 + (unsigned int)v23;
      v15 -= v29;
      if ( _RSI->output.count > v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 413, ASSERT_TYPE_ASSERT, "(decoder->output.count <= totalFrameCount)", (const char *)&queryFormat, "decoder->output.count <= totalFrameCount") )
        __debugbreak();
    }
    while ( v15 );
    _RAX = envelopeOut;
    __asm
    {
      vmovaps xmm9, [rsp+0A8h+var_78]
      vmovaps xmm8, [rsp+0A8h+var_68]
      vmovaps xmm7, [rsp+0A8h+var_58]
    }
  }
  __asm
  {
    vmovss  dword ptr [rax], xmm6
    vmovaps xmm6, [rsp+0A8h+var_48]
  }
  if ( _RSI->output.head >= v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 418, ASSERT_TYPE_ASSERT, "(decoder->output.head < totalFrameCount)", (const char *)&queryFormat, "decoder->output.head < totalFrameCount") )
    __debugbreak();
  if ( _RSI->output.count > v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 419, ASSERT_TYPE_ASSERT, "(decoder->output.count <= totalFrameCount)", (const char *)&queryFormat, "decoder->output.count <= totalFrameCount") )
    __debugbreak();
  return (unsigned int)v23;
}

/*
==============
SD_VoicePitchMono
==============
*/

__int64 __fastcall SD_VoicePitchMono(sd_decoder *decoder, double pitchRatio, unsigned int outputCount, float *leftOut)
{
  unsigned int count; 
  __int16 v6; 
  __int16 v8; 
  __int64 result; 
  unsigned int v11; 
  unsigned int i; 

  count = decoder->output.count;
  v6 = (decoder->output.head - count) & 0x3FF;
  __asm { vmovaps xmm5, xmm1 }
  v8 = (v6 + 1) & 0x3FF;
  if ( count <= 8 )
    return 0i64;
  __asm { vmovss  xmm2, dword ptr [rcx+1100h] }
  v11 = 0;
  if ( outputCount )
  {
    __asm
    {
      vmovss  xmm3, cs:__real@3f800000
      vmovss  xmm4, cs:__real@bf800000
    }
    do
    {
      count = decoder->output.count;
      if ( !count )
        break;
      __asm
      {
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm0, dword ptr [rcx+r10*4+80h]
        vmulss  xmm0, xmm2, dword ptr [rcx+r11*4+80h]
        vaddss  xmm2, xmm2, xmm5
        vcomiss xmm2, xmm3
        vaddss  xmm1, xmm1, xmm0
        vmovss  dword ptr [r9], xmm1
      }
      for ( i = count; ; --i )
      {
        count = i - 1;
        v6 = (v6 + 1) & 0x3FF;
        decoder->output.count = i - 1;
        v8 = (v8 + 1) & 0x3FF;
        __asm { vaddss  xmm2, xmm2, xmm4 }
        if ( i == 1 )
          break;
        __asm { vcomiss xmm2, xmm3 }
      }
      ++v11;
      ++leftOut;
    }
    while ( v11 < outputCount );
  }
  if ( count <= 8 && decoder->eos )
    decoder->output.count = 0;
  result = v11;
  __asm { vmovss  dword ptr [rcx+1100h], xmm2 }
  return result;
}

/*
==============
SD_VoicePitchMonoEnv
==============
*/

__int64 __fastcall SD_VoicePitchMonoEnv(sd_decoder *decoder, double pitchRatio, unsigned int outputCount, float *leftOut, float *envelopeOut)
{
  unsigned int count; 
  __int16 v11; 
  __int16 v13; 
  __int64 result; 
  unsigned int v17; 
  unsigned int i; 

  count = decoder->output.count;
  __asm { vmovaps [rsp+48h+var_48], xmm9 }
  v11 = (decoder->output.head - count) & 0x3FF;
  __asm { vmovaps xmm9, xmm1 }
  v13 = (v11 + 1) & 0x3FF;
  if ( count > 8 )
  {
    __asm { vmovss  xmm3, dword ptr [rcx+1100h] }
    v17 = 0;
    _RDI = envelopeOut;
    __asm
    {
      vmovaps [rsp+48h+var_18], xmm6
      vmovss  xmm6, dword ptr [rdi]
    }
    if ( outputCount )
    {
      __asm
      {
        vmovss  xmm4, cs:__real@3f800000
        vmovss  xmm5, cs:__real@bf800000
        vmovaps [rsp+48h+var_28], xmm7
        vmovss  xmm7, cs:__real@3f7f974a
        vmovaps [rsp+48h+var_38], xmm8
        vmovss  xmm8, cs:__real@3f7fb44a
      }
      do
      {
        count = decoder->output.count;
        if ( !count )
          break;
        __asm
        {
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm1, xmm0, dword ptr [rcx+r10*4+80h]
          vmulss  xmm0, xmm3, dword ptr [rcx+r11*4+80h]
          vaddss  xmm2, xmm1, xmm0
          vcmpltss xmm0, xmm6, xmm2
          vblendvps xmm1, xmm8, xmm7, xmm0
          vsubss  xmm0, xmm6, xmm2
          vaddss  xmm3, xmm3, xmm9
          vcomiss xmm3, xmm4
          vmulss  xmm1, xmm1, xmm0
          vaddss  xmm6, xmm1, xmm2
          vmovss  dword ptr [r9], xmm2
        }
        for ( i = count; ; --i )
        {
          count = i - 1;
          v11 = (v11 + 1) & 0x3FF;
          decoder->output.count = i - 1;
          v13 = (v13 + 1) & 0x3FF;
          __asm { vaddss  xmm3, xmm3, xmm5 }
          if ( i == 1 )
            break;
          __asm { vcomiss xmm3, xmm4 }
        }
        ++v17;
        ++leftOut;
      }
      while ( v17 < outputCount );
      __asm
      {
        vmovaps xmm7, [rsp+48h+var_28]
        vmovaps xmm8, [rsp+48h+var_38]
      }
    }
    if ( count <= 8 && decoder->eos )
      decoder->output.count = 0;
    __asm { vmovaps xmm9, [rsp+48h+var_48] }
    result = v17;
    __asm
    {
      vmovss  dword ptr [rdi], xmm6
      vmovaps xmm6, [rsp+48h+var_18]
      vmovss  dword ptr [rcx+1100h], xmm3
    }
  }
  else
  {
    result = 0i64;
    __asm { vmovaps xmm9, [rsp+48h+var_48] }
  }
  return result;
}

/*
==============
SD_VoicePitchStereo
==============
*/

__int64 __fastcall SD_VoicePitchStereo(sd_decoder *decoder, double pitchRatio, unsigned int outputCount, float *leftOut, float *rightOut)
{
  unsigned int count; 
  __int16 v9; 
  __int16 v11; 
  __int64 result; 
  unsigned int v15; 
  unsigned int i; 

  count = decoder->output.count;
  __asm { vmovaps [rsp+18h+var_18], xmm6 }
  v9 = (2 * (decoder->output.head - count)) & 0x3FF;
  __asm { vmovaps xmm6, xmm1 }
  v11 = (v9 + 2) & 0x3FF;
  if ( count > 8 )
  {
    __asm { vmovss  xmm3, dword ptr [rcx+1100h] }
    v15 = 0;
    if ( outputCount )
    {
      __asm
      {
        vmovss  xmm4, cs:__real@3f800000
        vmovss  xmm5, cs:__real@bf800000
      }
      _RBX = rightOut;
      _RSI = (char *)leftOut - (char *)rightOut;
      do
      {
        count = decoder->output.count;
        if ( !count )
          break;
        __asm
        {
          vmulss  xmm0, xmm3, dword ptr [rcx+r8*4+80h]
          vsubss  xmm2, xmm4, xmm3
          vmulss  xmm1, xmm2, dword ptr [rcx+r10*4+80h]
          vaddss  xmm1, xmm1, xmm0
          vmovss  dword ptr [rsi+rbx], xmm1
          vmulss  xmm1, xmm2, dword ptr [rcx+rax*4+80h]
          vmulss  xmm0, xmm3, dword ptr [rcx+rax*4+80h]
          vaddss  xmm3, xmm3, xmm6
          vcomiss xmm3, xmm4
          vaddss  xmm1, xmm1, xmm0
          vmovss  dword ptr [rbx], xmm1
        }
        for ( i = count; ; --i )
        {
          count = i - 1;
          decoder->output.count = i - 1;
          v9 = (v9 + 2) & 0x3FF;
          v11 = (v11 + 2) & 0x3FF;
          __asm { vaddss  xmm3, xmm3, xmm5 }
          if ( i == 1 )
            break;
          __asm { vcomiss xmm3, xmm4 }
        }
        ++v15;
        ++_RBX;
      }
      while ( v15 < outputCount );
    }
    if ( count <= 8 && decoder->eos )
      decoder->output.count = 0;
    result = v15;
    __asm
    {
      vmovaps xmm6, [rsp+18h+var_18]
      vmovss  dword ptr [rcx+1100h], xmm3
    }
  }
  else
  {
    result = 0i64;
    __asm { vmovaps xmm6, [rsp+18h+var_18] }
  }
  return result;
}

/*
==============
SD_VoicePitchStereoEnv
==============
*/

__int64 __fastcall SD_VoicePitchStereoEnv(sd_decoder *decoder, double pitchRatio, unsigned int outputCount, float *leftOut, float *rightOut, float *envelopeOut)
{
  unsigned int count; 
  __int16 v15; 
  __int16 v17; 
  __int64 result; 
  unsigned int v20; 
  unsigned int i; 

  count = decoder->output.count;
  __asm { vmovaps [rsp+68h+var_38], xmm8 }
  v15 = (2 * (decoder->output.head - count)) & 0x3FF;
  __asm { vmovaps xmm8, xmm1 }
  v17 = (v15 + 2) & 0x3FF;
  if ( count > 8 )
  {
    __asm { vmovss  xmm4, dword ptr [rcx+1100h] }
    v20 = 0;
    _RBP = envelopeOut;
    __asm
    {
      vmovaps [rsp+68h+var_28], xmm7
      vmovss  xmm7, dword ptr [rbp+0]
    }
    if ( outputCount )
    {
      __asm { vmovss  xmm5, cs:__real@3f800000 }
      _RBX = rightOut;
      __asm { vmovaps [rsp+68h+var_18], xmm6 }
      _RSI = (char *)leftOut - (char *)rightOut;
      __asm
      {
        vmovss  xmm6, cs:__real@bf800000
        vmovaps [rsp+68h+var_48], xmm9
        vmovss  xmm9, cs:__real@3f004dce
        vmovaps [rsp+68h+var_58], xmm10
        vmovss  xmm10, cs:__real@3f7f974a
        vmovaps [rsp+68h+var_68], xmm11
        vmovss  xmm11, cs:__real@3f7fb44a
      }
      do
      {
        count = decoder->output.count;
        if ( !count )
          break;
        __asm
        {
          vmulss  xmm0, xmm4, dword ptr [rcx+r8*4+80h]
          vsubss  xmm3, xmm5, xmm4
          vmulss  xmm1, xmm3, dword ptr [rcx+r10*4+80h]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, dword ptr [rcx+rax*4+80h]
          vmulss  xmm0, xmm4, dword ptr [rcx+rax*4+80h]
          vaddss  xmm1, xmm1, xmm0
          vmovss  dword ptr [rbx], xmm1
          vaddss  xmm1, xmm1, xmm2
          vmulss  xmm3, xmm1, xmm9
          vcmpltss xmm0, xmm7, xmm3
          vmovss  dword ptr [rsi+rbx], xmm2
          vsubss  xmm2, xmm7, xmm3
          vblendvps xmm1, xmm11, xmm10, xmm0
          vaddss  xmm4, xmm4, xmm8
          vcomiss xmm4, xmm5
          vmulss  xmm0, xmm2, xmm1
          vaddss  xmm7, xmm0, xmm3
        }
        for ( i = count; ; --i )
        {
          count = i - 1;
          decoder->output.count = i - 1;
          v15 = (v15 + 2) & 0x3FF;
          v17 = (v17 + 2) & 0x3FF;
          __asm { vaddss  xmm4, xmm4, xmm6 }
          if ( i == 1 )
            break;
          __asm { vcomiss xmm4, xmm5 }
        }
        ++v20;
        ++_RBX;
      }
      while ( v20 < outputCount );
      __asm
      {
        vmovaps xmm10, [rsp+68h+var_58]
        vmovaps xmm9, [rsp+68h+var_48]
        vmovaps xmm6, [rsp+68h+var_18]
        vmovaps xmm11, [rsp+68h+var_68]
      }
    }
    if ( count <= 8 && decoder->eos )
      decoder->output.count = 0;
    __asm
    {
      vmovss  dword ptr [rbp+0], xmm7
      vmovaps xmm7, [rsp+68h+var_28]
    }
    result = v20;
    __asm { vmovss  dword ptr [rcx+1100h], xmm4 }
  }
  else
  {
    result = 0i64;
  }
  __asm { vmovaps xmm8, [rsp+68h+var_38] }
  return result;
}

/*
==============
SD_VoiceRead
==============
*/
bool SD_VoiceRead(sd_voice *voice, const sd_voice_param *param, float *leftOut, float *rightOut)
{
  sd_decoder *decoder; 
  bool result; 
  const dvar_t *v10; 
  unsigned int flags; 
  int v12; 
  sd_decoder *v13; 
  unsigned int count; 
  sd_decoder *v22; 
  signed __int32 v23[8]; 
  char *fmt; 

  if ( voice->decodeState == SD_VOICE_DECODE_STATE_DONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 729, ASSERT_TYPE_ASSERT, "(voice->decodeState != SD_VOICE_DECODE_STATE_DONE)", (const char *)&queryFormat, "voice->decodeState != SD_VOICE_DECODE_STATE_DONE") )
    __debugbreak();
  decoder = voice->decoder;
  if ( decoder && decoder->error )
  {
    voice->decodeState = SD_VOICE_DECODE_STATE_DONE;
    return 1;
  }
  else
  {
    if ( !voice->isCinematic )
      goto LABEL_20;
    v10 = DVARBOOL_bg_cinematicFullscreen;
    if ( !DVARBOOL_bg_cinematicFullscreen )
      goto LABEL_20;
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v10->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v10->name) )
        __debugbreak();
    }
    if ( !v10->current.enabled )
    {
      result = 1;
      if ( !g_sd.hasCinematicSound )
      {
        g_sd.hasCinematicSound = 1;
        if ( SD_MixBinkAsVoice(leftOut, rightOut, 0x100u) )
          return 0;
      }
    }
    else
    {
LABEL_20:
      v12 = 0;
      if ( voice->decodeState == SD_VOICE_DECODE_NORMAL )
      {
        v13 = voice->decoder;
        if ( v13 )
        {
          count = v13->output.count;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rax+1Ch]
            vmulss  xmm1, xmm0, cs:__real@37aec33e
            vmulss  xmm2, xmm1, dword ptr [r15+230h]
            vmovss  xmm0, cs:__real@3f800000
            vsubss  xmm1, xmm0, xmm2
            vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vcomiss xmm1, cs:__real@3a83126f
            vmovss  dword ptr [rsp+58h+fmt], xmm2
          }
          v12 = SD_VoiceDecoderRead(voice, v13, 256, v13 != NULL, *(float *)&fmt, leftOut, rightOut, &voice->envelope);
          v22 = voice->decoder;
          voice->playedPosition += (int)(count - v22->output.count);
          if ( v22->done && !v22->output.count )
          {
            _InterlockedOr(v23, 0);
            SD_DecoderFree(voice->decoder);
            voice->decoder = NULL;
            voice->done = 1;
          }
        }
      }
      return v12 == 0;
    }
  }
  return result;
}

