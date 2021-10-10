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
  void *v5; 
  int *v6; 
  const sd_voice_param *v8; 
  sd_voice *v9; 
  float v10; 
  float v11; 
  float v12; 
  __int64 v13; 
  unsigned int autoSimId; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned int v19; 
  __int64 autoSimStopTimeStamp; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  unsigned __int64 v25; 
  sd_voice *secondaryMaster; 
  unsigned int v27; 
  unsigned __int64 startDelayMixFrames; 
  __int64 v29; 
  unsigned int v30; 
  SDAutoSim *v31; 
  __int64 autoSimStartTimeStamp; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  unsigned __int64 v37; 
  SndWeapShotCountId autoSimShotCount; 
  sd_decoder *decoder; 
  unsigned int count; 
  int syncStopDelayFramesDecoded; 
  int syncStopFadeFramesDecoded; 
  int syncStopFadeFrames; 
  float v44; 
  int v45; 
  int syncStartDelayFramesDecoded; 
  __int64 syncTimestamp; 
  signed int v48; 
  int syncStartFadeFramesDecoded; 
  int syncStartFadeFrames; 
  float v51; 
  int v52; 
  double v53; 
  double v54; 
  float v55; 
  __int64 v56; 
  sd_voice_cmd_entry *v57; 
  const float *MixSrcBuffer; 
  float *MixDestBuffer; 
  __int64 i; 
  const float *v61; 
  float *v62; 
  float v63; 
  const float *v64; 
  float *v65; 
  OnePoleFilter_t *p_onePoleLowPass; 
  float cmdParam; 
  const float *v68; 
  float *v69; 
  float v70; 
  const float *v71; 
  float *v72; 
  OnePoleFilter_t *p_onePoleHighPass; 
  float v74; 
  const float *v75; 
  float *v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float *v82; 
  float *v83; 
  __int64 v84; 
  unsigned int v85; 
  const float **v86; 
  const float *v87; 
  __int64 v88; 
  int v89; 
  __m256i *panFilter; 
  signed __int64 v91; 
  __int64 v92; 
  float endScale[2]; 
  __int64 v94; 
  char v95[8328]; 
  __int64 v96; 

  v5 = alloca(v4);
  v96 = -2i64;
  v6 = (int *)((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64);
  *((_QWORD *)v6 + 1040) = (unsigned __int64)&v92 ^ _security_cookie;
  v8 = param;
  *((_QWORD *)v6 + 4) = param;
  v9 = voice;
  *((_QWORD *)v6 + 5) = voice;
  v10 = FLOAT_1_0;
  v11 = FLOAT_1_0;
  v12 = FLOAT_1_0;
  if ( !param && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 906, ASSERT_TYPE_ASSERT, "(param)", (const char *)&queryFormat, "param") )
    __debugbreak();
  v13 = 2i64;
  if ( stopping )
  {
    autoSimId = v9->autoSimId;
    if ( autoSimId == -1 )
      goto LABEL_11;
    v15 = (unsigned __int16)autoSimId;
    v16 = HIWORD(autoSimId);
    if ( (unsigned int)v15 >= 0x40 )
    {
      LODWORD(v94) = 64;
      LODWORD(endScale[0]) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 505, ASSERT_TYPE_ASSERT, "(unsigned)( autoSimIndex ) < (unsigned)( ( sizeof( *array_counter( g_sd.autoSims ) ) + 0 ) )", "autoSimIndex doesn't index ARRAY_COUNT( g_sd.autoSims )\n\t%i not in [0, %i)", *(_QWORD *)endScale, v94) )
        __debugbreak();
    }
    if ( g_sd.autoSims[v15].instanceId != v16 || v9->autoSimShotCount != g_sd.autoSims[v15].currentShotCount )
    {
LABEL_11:
      v17 = v9->autoSimId;
      if ( v17 == -1 )
        goto LABEL_22;
      v18 = (unsigned __int16)v17;
      v19 = HIWORD(v17);
      if ( (unsigned int)v18 >= 0x40 )
      {
        LODWORD(v94) = 64;
        LODWORD(endScale[0]) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 472, ASSERT_TYPE_ASSERT, "(unsigned)( autoSimIndex ) < (unsigned)( ( sizeof( *array_counter( g_sd.autoSims ) ) + 0 ) )", "autoSimIndex doesn't index ARRAY_COUNT( g_sd.autoSims )\n\t%i not in [0, %i)", *(_QWORD *)endScale, v94) )
          __debugbreak();
      }
      if ( g_sd.autoSims[v18].instanceId != v19 )
        goto LABEL_22;
      autoSimStopTimeStamp = v9->autoSimStopTimeStamp;
      v21 = (float)autoSimStopTimeStamp;
      if ( autoSimStopTimeStamp < 0 )
      {
        v22 = (float)autoSimStopTimeStamp;
        v21 = v22 + 1.8446744e19;
      }
      v24 = v21 * 0.048;
      v23 = v24;
      v25 = 0i64;
      if ( v24 >= 9.223372e18 )
      {
        v23 = v24 - 9.223372e18;
        if ( (float)(v24 - 9.223372e18) < 9.223372e18 )
          v25 = 0x8000000000000000ui64;
      }
      if ( (g_sd.autoSimClock << 8) + 256 > (g_sd.autoSims[v18].startTime << 8) + (unsigned int)(int)v23 + v25 )
      {
LABEL_22:
        v10 = (float)I_clamp(1 - v9->stopFadeState, 0, 2) * 0.5;
        ++v9->stopFadeState;
      }
    }
  }
  if ( (!v9->secondaryGroupId || ((secondaryMaster = v9->secondaryMaster) == NULL || secondaryMaster->secondaryGroupReady) && (v9->secondaryGroupSize <= 1 || v9->secondaryGroupReady)) && v9->state == SD_VOICE_ACTIVE && !v9->done )
  {
    v27 = v9->autoSimId;
    if ( (v27 == -1 || !g_sd.mixParam || !g_sd.mixParam->paused) && (v9->syncState || !v9->isSync) && v8 && !v8->paused )
    {
      startDelayMixFrames = v9->startDelayMixFrames;
      if ( startDelayMixFrames )
      {
        v9->startDelayMixFrames = startDelayMixFrames - 1;
        return;
      }
      if ( v9->position )
        goto LABEL_60;
      if ( v27 == -1 )
        goto LABEL_53;
      v29 = (unsigned __int16)v27;
      v30 = HIWORD(v27);
      if ( (unsigned int)v29 >= 0x40 )
      {
        LODWORD(v94) = 64;
        LODWORD(endScale[0]) = v29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 435, ASSERT_TYPE_ASSERT, "(unsigned)( autoSimIndex ) < (unsigned)( ( sizeof( *array_counter( g_sd.autoSims ) ) + 0 ) )", "autoSimIndex doesn't index ARRAY_COUNT( g_sd.autoSims )\n\t%i not in [0, %i)", *(_QWORD *)endScale, v94) )
          __debugbreak();
      }
      v31 = &g_sd.autoSims[v29];
      if ( v31->instanceId != v30 )
      {
LABEL_53:
        decoder = v9->decoder;
        if ( (!decoder || (count = decoder->output.count) == 0 || count < 0x100 && !decoder->eos) && !v9->isCinematic && !v9->isArcade0 && !v9->isArcade1 )
          return;
LABEL_60:
        if ( v9->state != SD_VOICE_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 939, ASSERT_TYPE_ASSERT, "(voice->state == SD_VOICE_ACTIVE)", (const char *)&queryFormat, "voice->state == SD_VOICE_ACTIVE") )
          __debugbreak();
        memset_0(v6 + 32, 0, 0x2000ui64);
        if ( !v9->isSync )
          goto LABEL_88;
        switch ( v9->syncState )
        {
          case SD_VOICE_SYNC_START_DELAY:
            syncStartDelayFramesDecoded = v9->syncStartDelayFramesDecoded;
            if ( !syncStartDelayFramesDecoded )
            {
              syncTimestamp = (unsigned int)v9->syncTimestamp;
              v48 = (g_sd.buffersSubmitted - (_DWORD)syncTimestamp) << 8;
              if ( !v9->syncSoftStart && v9->syncStartDelayFrames + 256 < v48 )
                Com_PrintWarning(9, "SOUND: too long elapsed between the sync offset computation and sound start %d %d\n", g_sd.buffersSubmitted, syncTimestamp);
              v9->syncStartDelayFramesDecoded += v48;
              syncStartDelayFramesDecoded = v9->syncStartDelayFramesDecoded;
            }
            if ( syncStartDelayFramesDecoded < v9->syncStartDelayFrames )
            {
              v9->syncStartDelayFramesDecoded = syncStartDelayFramesDecoded + 256;
              return;
            }
            v9->syncState = SD_VOICE_SYNC_START_FADE;
            break;
          case SD_VOICE_SYNC_START_FADE:
            break;
          case SD_VOICE_SYNC_STOP_DELAY:
            syncStopDelayFramesDecoded = v9->syncStopDelayFramesDecoded;
            if ( syncStopDelayFramesDecoded >= v9->syncStopDelayFrames )
            {
              v9->syncState = SD_VOICE_SYNC_STOP_FADE;
              goto LABEL_73;
            }
            v9->syncStopDelayFramesDecoded = syncStopDelayFramesDecoded + 256;
LABEL_87:
            v53 = I_fclamp(v11, 0.0, 1.0);
            v11 = *(float *)&v53;
            v54 = I_fclamp(v12, 0.0, 1.0);
            v12 = *(float *)&v54;
            v9->syncEndScale = *(float *)&v54;
LABEL_88:
            if ( !SD_VoiceRead(v9, v8, (float *)v6 + 32, (float *)v6 + 288) )
            {
              v9->position += 256i64;
              v55 = v10 * v9->adsr.currentVolume;
              *(_DWORD *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 0xC) = 0;
              if ( v8->commandBufferCount > 0 )
              {
                v56 = 0i64;
                *(_QWORD *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 0x18) = 0i64;
                do
                {
                  v57 = &v8->commandBuffer[v56];
                  switch ( v57->cmd )
                  {
                    case SD_VOICE_CMD_COPY:
                      MixSrcBuffer = SD_VoiceGetMixSrcBuffer(v57->src, (const sd_voice_mix_temp_state *)(v6 + 32));
                      if ( (unsigned int)(v57->dest - 3) <= 1 )
                      {
                        LODWORD(v94) = v57->dest;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1071, ASSERT_TYPE_ASSERT, "(cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD)", "%s\n\tCannot copy to voice destination %d.", "cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD", v94) )
                          __debugbreak();
                      }
                      MixDestBuffer = SD_VoiceGetMixDestBuffer(v57->dest, (sd_voice_mix_temp_state *)(v6 + 32), 0);
                      if ( MixSrcBuffer == MixDestBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1073, ASSERT_TYPE_ASSERT, "(srcBuffer != destBuffer)", (const char *)&queryFormat, "srcBuffer != destBuffer") )
                        __debugbreak();
                      for ( i = v9->channelCount << 8; i; --i )
                        *MixDestBuffer++ = *MixSrcBuffer++;
                      break;
                    case SD_VOICE_CMD_EQ:
                      v61 = SD_VoiceGetMixSrcBuffer(v57->src, (const sd_voice_mix_temp_state *)(v6 + 32));
                      if ( (unsigned int)(v57->dest - 3) <= 1 )
                      {
                        LODWORD(v94) = v57->dest;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1086, ASSERT_TYPE_ASSERT, "(cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD)", "%s\n\tCannot EQ to voice destination %d.", "cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD", v94) )
                          __debugbreak();
                      }
                      v62 = SD_VoiceGetMixDestBuffer(v57->dest, (sd_voice_mix_temp_state *)(v6 + 32), 0);
                      if ( v61 == v62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1088, ASSERT_TYPE_ASSERT, "(srcBuffer != destBuffer)", (const char *)&queryFormat, "srcBuffer != destBuffer") )
                        __debugbreak();
                      if ( v8->eqBankParamsHash != v9->eqBankParamsHash )
                      {
                        SND_ApplyEQBankParams(&v9->eqBank, &v8->dspParams.eqBankParams);
                        v9->eqBankParamsHash = v8->eqBankParamsHash;
                      }
                      EQBANK_ProcessArrayBlock<256>(&v9->eqBank, &v8->dspParams.eqBankParams, v61, v62, v9->channelCount);
                      break;
                    case SD_VOICE_CMD_LPF_BIQUAD:
                      cmdParam = (float)v57->cmdParam;
                      v68 = SD_VoiceGetMixSrcBuffer(v57->src, (const sd_voice_mix_temp_state *)(v6 + 32));
                      if ( (unsigned int)(v57->dest - 3) <= 1 )
                      {
                        LODWORD(v94) = v57->dest;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1133, ASSERT_TYPE_ASSERT, "(cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD)", "%s\n\tCannot LPF_BIQUAD to voice destination %d.", "cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD", v94) )
                          __debugbreak();
                      }
                      v69 = SD_VoiceGetMixDestBuffer(v57->dest, (sd_voice_mix_temp_state *)(v6 + 32), 0);
                      if ( v68 == v69 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1135, ASSERT_TYPE_ASSERT, "(srcBuffer != destBuffer)", (const char *)&queryFormat, "srcBuffer != destBuffer") )
                        __debugbreak();
                      SND_ApplyFilterLPFFrequency(&v9->lowPass, cmdParam);
                      BIQUAD_ProcessArray<256>(&v9->lowPass.coeffs, v9->lowPass.state, v68, v69);
                      if ( v9->channelCount == 2 )
                        BIQUAD_ProcessArray<256>(&v9->lowPass.coeffs, &v9->lowPass.state[1], v68 + 256, v69 + 256);
                      break;
                    case SD_VOICE_CMD_HPF_BIQUAD:
                      v74 = (float)v57->cmdParam;
                      v75 = SD_VoiceGetMixSrcBuffer(v57->src, (const sd_voice_mix_temp_state *)(v6 + 32));
                      if ( (unsigned int)(v57->dest - 3) <= 1 )
                      {
                        LODWORD(v94) = v57->dest;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1178, ASSERT_TYPE_ASSERT, "(cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD)", "%s\n\tCannot HPF_BIQUAD to voice destination %d.", "cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD", v94) )
                          __debugbreak();
                      }
                      v76 = SD_VoiceGetMixDestBuffer(v57->dest, (sd_voice_mix_temp_state *)(v6 + 32), 0);
                      if ( v75 == v76 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1180, ASSERT_TYPE_ASSERT, "(srcBuffer != destBuffer)", (const char *)&queryFormat, "srcBuffer != destBuffer") )
                        __debugbreak();
                      SND_ApplyFilterHPFFrequency(&v9->highPass, v74);
                      BIQUAD_ProcessArray<256>(&v9->highPass.coeffs, v9->highPass.state, v75, v76);
                      if ( v9->channelCount == 2 )
                        BIQUAD_ProcessArray<256>(&v9->highPass.coeffs, &v9->highPass.state[1], v75 + 256, v76 + 256);
                      break;
                    case SD_VOICE_CMD_LPF_1POLE:
                      v63 = (float)v57->cmdParam;
                      v64 = SD_VoiceGetMixSrcBuffer(v57->src, (const sd_voice_mix_temp_state *)(v6 + 32));
                      if ( (unsigned int)(v57->dest - 3) <= 1 )
                      {
                        LODWORD(v94) = v57->dest;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1108, ASSERT_TYPE_ASSERT, "(cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD)", "%s\n\tCannot LPF_1POLE to voice destination %d.", "cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD", v94) )
                          __debugbreak();
                      }
                      v65 = SD_VoiceGetMixDestBuffer(v57->dest, (sd_voice_mix_temp_state *)(v6 + 32), 0);
                      if ( v64 == v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1110, ASSERT_TYPE_ASSERT, "(srcBuffer != destBuffer)", (const char *)&queryFormat, "srcBuffer != destBuffer") )
                        __debugbreak();
                      OnePole_SetFrequency(&v9->onePoleLowPass, v63, 48000.0, 0);
                      p_onePoleLowPass = &v9->onePoleLowPass;
                      if ( v9->channelCount == 1 )
                        OnePoleLPF_ProcessArray(p_onePoleLowPass, v64, v65, 256);
                      else
                        OnePoleLPF_ProcessArrayStereoBlock(p_onePoleLowPass, v64, v65, 256);
                      break;
                    case SD_VOICE_CMD_HPF_1POLE:
                      v70 = (float)v57->cmdParam;
                      v71 = SD_VoiceGetMixSrcBuffer(v57->src, (const sd_voice_mix_temp_state *)(v6 + 32));
                      if ( (unsigned int)(v57->dest - 3) <= 1 )
                      {
                        LODWORD(v94) = v57->dest;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1154, ASSERT_TYPE_ASSERT, "(cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD)", "%s\n\tCannot HPF_1POLE to voice destination %d.", "cmd->dest != SD_VOICE_DEST_BUS && cmd->dest != SD_VOICE_DEST_PAD", v94) )
                          __debugbreak();
                      }
                      v72 = SD_VoiceGetMixDestBuffer(v57->dest, (sd_voice_mix_temp_state *)(v6 + 32), 0);
                      if ( v71 == v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1156, ASSERT_TYPE_ASSERT, "(srcBuffer != destBuffer)", (const char *)&queryFormat, "srcBuffer != destBuffer") )
                        __debugbreak();
                      OnePole_SetFrequency(&v9->onePoleHighPass, v70, 48000.0, 0);
                      p_onePoleHighPass = &v9->onePoleHighPass;
                      if ( v9->channelCount == 1 )
                        OnePoleHPF_ProcessArray(p_onePoleHighPass, v71, v72, 256);
                      else
                        OnePoleHPF_ProcessArrayStereoBlock(p_onePoleHighPass, v71, v72, 256);
                      break;
                    case SD_VOICE_CMD_PAN:
                      SD_UnpackVoiceParamPanArgument(v57->cmdParam, v6 + 2, v6 + 1, (int *)((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64));
                      v77 = *(float *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 4);
                      if ( LODWORD(v77) >= v8->panMatrixCount )
                      {
                        LODWORD(v94) = v8->panMatrixCount;
                        endScale[0] = v77;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1202, ASSERT_TYPE_ASSERT, "(unsigned)( panMatrixIndex ) < (unsigned)( param->panMatrixCount )", "panMatrixIndex doesn't index param->panMatrixCount\n\t%i not in [0, %i)", *(_QWORD *)endScale, v94) )
                          __debugbreak();
                      }
                      v78 = *(float *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 8);
                      if ( LODWORD(v78) >= 0x11 )
                      {
                        LODWORD(v94) = 17;
                        endScale[0] = v78;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1203, ASSERT_TYPE_ASSERT, "(unsigned)( busIndex ) < (unsigned)( SND_BUS_COUNT )", "busIndex doesn't index SND_BUS_COUNT\n\t%i not in [0, %i)", *(_QWORD *)endScale, v94) )
                          __debugbreak();
                      }
                      v79 = *(float *)v6;
                      if ( (unsigned int)*v6 >= 6 )
                      {
                        LODWORD(v94) = 6;
                        endScale[0] = v79;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1204, ASSERT_TYPE_ASSERT, "(unsigned)( panLevelIndex ) < (unsigned)( SND_PAN_LEVEL_COUNT )", "panLevelIndex doesn't index SND_PAN_LEVEL_COUNT\n\t%i not in [0, %i)", *(_QWORD *)endScale, v94) )
                          __debugbreak();
                        v79 = *(float *)v6;
                      }
                      v80 = v55 * v8->panLevels[SLODWORD(v79)];
                      v81 = v9->panLevels[SLODWORD(v79)];
                      v82 = (float *)SD_VoiceGetMixSrcBuffer(v57->src, (const sd_voice_mix_temp_state *)(v6 + 32));
                      if ( v57->dest != SD_VOICE_DEST_BUS )
                      {
                        LODWORD(v94) = v57->dest;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1210, ASSERT_TYPE_ASSERT, "(cmd->dest == SD_VOICE_DEST_BUS)", "%s\n\tCannot pan to voice destination %d.", "cmd->dest == SD_VOICE_DEST_BUS", v94) )
                          __debugbreak();
                      }
                      v83 = SD_VoiceGetMixDestBuffer(v57->dest, (sd_voice_mix_temp_state *)(v6 + 32), *(_DWORD *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 8));
                      *(_QWORD *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 0x10) = v83;
                      if ( v82 == v83 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1212, ASSERT_TYPE_ASSERT, "(srcBuffer != destBuffer)", (const char *)&queryFormat, "srcBuffer != destBuffer") )
                        __debugbreak();
                      if ( v9->channelCount == 1 )
                      {
                        if ( ((unsigned __int8)v82 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 84, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", v82) )
                          __debugbreak();
                        if ( !v82 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 459, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
                          __debugbreak();
                        if ( ((unsigned __int8)v82 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 460, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
                          __debugbreak();
                        *(_QWORD *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 0x10) = v82;
                        v84 = (__int64)*(int *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 4) << 7;
                        SD_DSP::RawSequentialPanSum<SD_DSP::Buffer<SD_DSP::AtmosFrame,256>,SD_DSP::ConstSequentialBufferRefType<SD_DSP::MonoFrame,256>>(v83, (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::MonoFrame,256> *)v6 + 2, (const float *const)((char *)v9->panFilter[0] + v84), (const float *const)((char *)v8->panMatrix[0] + v84), v81 * v11, v80 * v12);
                      }
                      else
                      {
                        if ( ((unsigned __int8)v82 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 84, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", v82) )
                          __debugbreak();
                        v85 = 0;
                        v86 = (const float **)(v6 + 16);
                        do
                        {
                          v87 = &v82[256 * v85];
                          if ( !v87 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 459, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
                            __debugbreak();
                          if ( ((unsigned __int8)v82 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 460, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
                            __debugbreak();
                          *v86 = v87;
                          ++v85;
                          ++v86;
                        }
                        while ( v85 < 2 );
                        *(_OWORD *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 0x50) = *(_OWORD *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 0x40);
                        v88 = (__int64)*(int *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 4) << 7;
                        v8 = *(const sd_voice_param **)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 0x20);
                        v9 = *(sd_voice **)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 0x28);
                        SD_DSP::RawSequentialPanSum<SD_DSP::Buffer<SD_DSP::AtmosFrame,256>,SD_DSP::ConstSequentialBufferRefType<SD_DSP::StereoFrame,256>>(*(float **)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 0x10), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::StereoFrame,256> *)v6 + 5, (const float *const)((char *)v9->panFilter[0] + v88), (const float *const)((char *)v8->panMatrix[0] + v88), v81 * v11, v80 * v12);
                      }
                      v9->panLevels[*v6] = v80;
                      break;
                    default:
                      endScale[0] = *(float *)&v57->cmd;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 1287, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SD_MixVoice() received unknown mix command %d.", *(_QWORD *)endScale) )
                        __debugbreak();
                      break;
                  }
                  v89 = *(_DWORD *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 0xC) + 1;
                  *(_DWORD *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 0xC) = v89;
                  v56 = *(_QWORD *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 0x18) + 1i64;
                  *(_QWORD *)(((unsigned __int64)v95 & 0xFFFFFFFFFFFFFFC0ui64) + 0x18) = v56;
                }
                while ( v89 < v8->commandBufferCount );
                v13 = 2i64;
              }
              panFilter = (__m256i *)v9->panFilter;
              v91 = (char *)v8 - (char *)v9->panFilter;
              do
              {
                *panFilter = *(__m256i *)((char *)&panFilter[8] + v91 + 20);
                panFilter[1] = *(__m256i *)((char *)&panFilter[9] + v91 + 20);
                panFilter[2] = *(__m256i *)((char *)&panFilter[10] + v91 + 20);
                panFilter[3] = *(__m256i *)((char *)&panFilter[11] + v91 + 20);
                panFilter += 4;
                --v13;
              }
              while ( v13 );
            }
            return;
          case SD_VOICE_SYNC_STOP_FADE:
LABEL_73:
            syncStopFadeFramesDecoded = v9->syncStopFadeFramesDecoded;
            syncStopFadeFrames = v9->syncStopFadeFrames;
            if ( syncStopFadeFramesDecoded >= syncStopFadeFrames )
            {
              v9->syncState = SD_VOICE_SYNC_DONE;
              return;
            }
            v44 = 1.0 / (float)syncStopFadeFrames;
            v11 = 1.0 - (float)((float)syncStopFadeFramesDecoded * v44);
            v45 = syncStopFadeFramesDecoded + 256;
            v9->syncStopFadeFramesDecoded = v45;
            v12 = 1.0 - (float)((float)v45 * v44);
            goto LABEL_87;
          case SD_VOICE_SYNC_DONE:
            return;
          default:
            goto LABEL_87;
        }
        syncStartFadeFramesDecoded = v9->syncStartFadeFramesDecoded;
        syncStartFadeFrames = v9->syncStartFadeFrames;
        if ( syncStartFadeFramesDecoded >= syncStartFadeFrames )
        {
          v9->syncState = SD_VOICE_SYNC_ACTIVE;
        }
        else
        {
          v51 = 1.0 / (float)syncStartFadeFrames;
          v11 = (float)syncStartFadeFramesDecoded * v51;
          v52 = syncStartFadeFramesDecoded + 256;
          v9->syncStartFadeFramesDecoded = v52;
          v12 = (float)v52 * v51;
        }
        goto LABEL_87;
      }
      autoSimStartTimeStamp = v9->autoSimStartTimeStamp;
      v33 = (float)autoSimStartTimeStamp;
      if ( autoSimStartTimeStamp < 0 )
      {
        v34 = (float)autoSimStartTimeStamp;
        v33 = v34 + 1.8446744e19;
      }
      v36 = v33 * 0.048;
      v35 = v36;
      v37 = 0i64;
      if ( v36 >= 9.223372e18 )
      {
        v35 = v36 - 9.223372e18;
        if ( (float)(v36 - 9.223372e18) < 9.223372e18 )
          v37 = 0x8000000000000000ui64;
      }
      if ( (g_sd.autoSimClock << 8) + 256 > (v31->startTime << 8) + (unsigned int)(int)v35 + v37 )
      {
        autoSimShotCount = v9->autoSimShotCount;
        if ( v31->currentShotCount < autoSimShotCount )
          v31->currentShotCount = autoSimShotCount;
        goto LABEL_53;
      }
    }
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
  __int64 v9; 
  float *v12; 
  float *v13; 
  signed __int64 v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  float *v18; 
  unsigned __int64 v19; 
  unsigned __int64 k; 
  float *v21; 
  unsigned __int64 m; 
  float *v23; 
  __int64 v24; 
  int v26; 
  unsigned int count; 
  unsigned int v28; 
  __int64 v29; 
  __int64 v30; 
  unsigned int v31; 
  __int128 pitchFraction_low; 
  float v35; 
  __int128 v37; 
  __int128 v38; 
  __int128 v40; 
  bool v41; 
  __int128 v42; 
  unsigned int v43; 
  __int128 v44; 
  __int64 v45; 
  __int64 v46; 
  unsigned int v47; 
  __int128 v48; 
  float v51; 
  float v52; 
  __int128 v54; 
  __int128 v55; 
  __int128 v57; 
  __int128 v58; 
  unsigned int v59; 
  __int128 v60; 
  unsigned int v61; 
  unsigned int v62; 
  __int64 v63; 
  __int64 v64; 
  unsigned int v65; 
  __int128 i; 
  float v67; 
  float v68; 
  __int128 v69; 
  unsigned int v70; 
  __int128 v71; 
  __int64 v72; 
  __int64 v73; 
  unsigned int v74; 
  __int128 j; 
  float v76; 
  float v77; 
  __int128 v78; 
  unsigned int v79; 
  __int128 v80; 

  v9 = decodeCount;
  if ( !decodeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 639, ASSERT_TYPE_ASSERT, "(decodeCount)", (const char *)&queryFormat, "decodeCount") )
    __debugbreak();
  if ( !envelopeOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 641, ASSERT_TYPE_ASSERT, "(envelopeOut)", (const char *)&queryFormat, "envelopeOut") )
    __debugbreak();
  v12 = leftOut;
  if ( ((unsigned __int8)leftOut & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 644, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( leftOut ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )leftOut ) ) = 0x%llx", leftOut) )
    __debugbreak();
  v13 = rightOut;
  if ( ((unsigned __int8)rightOut & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 645, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( rightOut ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )rightOut ) ) = 0x%llx", rightOut) )
    __debugbreak();
  if ( decoder->eos || (int)(float)((float)(int)v9 * pitch) < (signed int)decoder->output.count )
  {
    v26 = 0;
    decoder->starvingVoiceIndex = -1;
    *envelopeOut = 0.0;
    if ( voice->trackEnvelope )
    {
      if ( !doPitch )
        return SD_VoiceNoPitchEnv(decoder, leftOut, rightOut, v9, voice->channelCount, envelopeOut);
      count = decoder->output.count;
      v28 = decoder->output.head - count;
      if ( voice->channelCount == 1 )
      {
        v29 = v28 & 0x3FF;
        v30 = ((_WORD)v29 + 1) & 0x3FF;
        if ( count > 8 )
        {
          v31 = 0;
          pitchFraction_low = LODWORD(decoder->pitchFraction);
          _XMM7 = 0i64;
          if ( (_DWORD)v9 )
          {
            _XMM9 = LODWORD(FLOAT_0_99884474);
            do
            {
              if ( !decoder->output.count )
                break;
              v35 = (float)((float)(1.0 - *(float *)&pitchFraction_low) * decoder->output.buffer[v29]) + (float)(*(float *)&pitchFraction_low * decoder->output.buffer[v30]);
              __asm { vcmpltss xmm0, xmm7, xmm3 }
              v38 = _XMM7;
              *(float *)&v38 = *(float *)&_XMM7 - v35;
              v37 = v38;
              __asm { vblendvps xmm1, xmm9, xmm8, xmm0 }
              v40 = pitchFraction_low;
              *(float *)&v40 = *(float *)&pitchFraction_low + pitch;
              pitchFraction_low = v40;
              v41 = *(float *)&v40 < 1.0;
              v42 = v37;
              *(float *)&v42 = (float)(*(float *)&v37 * *(float *)&_XMM1) + v35;
              _XMM7 = v42;
              *v12 = v35;
              if ( !v41 )
              {
                v43 = decoder->output.count;
                do
                {
                  v29 = ((_WORD)v29 + 1) & 0x3FF;
                  v30 = ((_WORD)v30 + 1) & 0x3FF;
                  decoder->output.count = --v43;
                  v44 = pitchFraction_low;
                  *(float *)&v44 = *(float *)&pitchFraction_low + -1.0;
                  pitchFraction_low = v44;
                }
                while ( v43 && *(float *)&v44 >= 1.0 );
              }
              ++v31;
              ++v12;
            }
            while ( v31 < (unsigned int)v9 );
          }
          if ( decoder->output.count <= 8 && decoder->eos )
            decoder->output.count = 0;
          decoder->pitchFraction = *(float *)&pitchFraction_low;
          *envelopeOut = *(float *)&_XMM7;
          return v31;
        }
      }
      else
      {
        v45 = (2 * (_WORD)v28) & 0x3FF;
        v46 = ((_WORD)v45 + 2) & 0x3FF;
        if ( count > 8 )
        {
          v47 = 0;
          v48 = LODWORD(decoder->pitchFraction);
          _XMM7 = 0i64;
          if ( (_DWORD)v9 )
          {
            _XMM9 = LODWORD(FLOAT_0_99884474);
            do
            {
              if ( !decoder->output.count )
                break;
              *v12 = (float)(*(float *)&v48 * decoder->output.buffer[v46]) + (float)((float)(1.0 - *(float *)&v48) * decoder->output.buffer[v45]);
              v51 = (float)(*(float *)&v48 * decoder->output.buffer[(unsigned int)(v46 + 1)]) + (float)((float)(1.0 - *(float *)&v48) * decoder->output.buffer[(unsigned int)(v45 + 1)]);
              *(float *)((char *)v12 + (char *)rightOut - (char *)leftOut) = v51;
              v52 = (float)(v51 + *v12) * 0.50118721;
              __asm { vcmpltss xmm0, xmm7, xmm3 }
              v55 = _XMM7;
              *(float *)&v55 = *(float *)&_XMM7 - v52;
              v54 = v55;
              __asm { vblendvps xmm1, xmm9, xmm8, xmm0 }
              v57 = v48;
              *(float *)&v57 = *(float *)&v48 + pitch;
              v48 = v57;
              v41 = *(float *)&v57 < 1.0;
              v58 = v54;
              *(float *)&v58 = (float)(*(float *)&v54 * *(float *)&_XMM1) + v52;
              _XMM7 = v58;
              if ( !v41 )
              {
                v59 = decoder->output.count;
                do
                {
                  v45 = ((_WORD)v45 + 2) & 0x3FF;
                  v46 = ((_WORD)v46 + 2) & 0x3FF;
                  decoder->output.count = --v59;
                  v60 = v48;
                  *(float *)&v60 = *(float *)&v48 + -1.0;
                  v48 = v60;
                }
                while ( v59 && *(float *)&v60 >= 1.0 );
              }
              ++v47;
              ++v12;
            }
            while ( v47 < (unsigned int)v9 );
          }
          if ( decoder->output.count <= 8 && decoder->eos )
            decoder->output.count = 0;
          decoder->pitchFraction = *(float *)&v48;
          *envelopeOut = *(float *)&_XMM7;
          return v47;
        }
      }
    }
    else
    {
      if ( !doPitch )
        return SD_VoiceNoPitch(decoder, leftOut, rightOut, v9, voice->channelCount);
      v61 = decoder->output.count;
      v62 = decoder->output.head - v61;
      if ( voice->channelCount == 1 )
      {
        v63 = v62 & 0x3FF;
        v64 = ((_WORD)v63 + 1) & 0x3FF;
        if ( v61 > 8 )
        {
          v65 = 0;
          for ( i = LODWORD(decoder->pitchFraction); v65 < (unsigned int)v9; ++v12 )
          {
            if ( !decoder->output.count )
              break;
            v67 = (float)(1.0 - *(float *)&i) * decoder->output.buffer[v63];
            v68 = *(float *)&i * decoder->output.buffer[v64];
            v69 = i;
            *(float *)&v69 = *(float *)&i + pitch;
            i = v69;
            *v12 = v67 + v68;
            if ( *(float *)&v69 >= 1.0 )
            {
              v70 = decoder->output.count;
              do
              {
                v63 = ((_WORD)v63 + 1) & 0x3FF;
                v64 = ((_WORD)v64 + 1) & 0x3FF;
                decoder->output.count = --v70;
                v71 = i;
                *(float *)&v71 = *(float *)&i + -1.0;
                i = v71;
              }
              while ( v70 && *(float *)&v71 >= 1.0 );
            }
            ++v65;
          }
          if ( decoder->output.count <= 8 && decoder->eos )
            decoder->output.count = 0;
          decoder->pitchFraction = *(float *)&i;
          return v65;
        }
      }
      else
      {
        v72 = (2 * (_WORD)v62) & 0x3FF;
        v73 = ((_WORD)v72 + 2) & 0x3FF;
        if ( v61 > 8 )
        {
          v74 = 0;
          for ( j = LODWORD(decoder->pitchFraction); v74 < (unsigned int)v9; ++v13 )
          {
            if ( !decoder->output.count )
              break;
            *(float *)((char *)v13 + (char *)leftOut - (char *)rightOut) = (float)(*(float *)&j * decoder->output.buffer[v73]) + (float)((float)(1.0 - *(float *)&j) * decoder->output.buffer[v72]);
            v76 = *(float *)&j * decoder->output.buffer[(unsigned int)(v73 + 1)];
            v77 = (float)(1.0 - *(float *)&j) * decoder->output.buffer[(unsigned int)(v72 + 1)];
            v78 = j;
            *(float *)&v78 = *(float *)&j + pitch;
            j = v78;
            *v13 = v76 + v77;
            if ( *(float *)&v78 >= 1.0 )
            {
              v79 = decoder->output.count;
              do
              {
                v72 = ((_WORD)v72 + 2) & 0x3FF;
                v73 = ((_WORD)v73 + 2) & 0x3FF;
                decoder->output.count = --v79;
                v80 = j;
                *(float *)&v80 = *(float *)&j + -1.0;
                j = v80;
              }
              while ( v79 && *(float *)&v80 >= 1.0 );
            }
            ++v74;
          }
          if ( decoder->output.count <= 8 && decoder->eos )
            decoder->output.count = 0;
          decoder->pitchFraction = *(float *)&j;
          return v74;
        }
      }
    }
    return v26;
  }
  v14 = voice - g_sd.voicePool;
  if ( (unsigned __int64)(v14 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v14, "signed", voice - g_sd.voicePool) )
    __debugbreak();
  decoder->starvingVoiceIndex = v14;
  voice->starvedThisFrame = 1;
  v15 = 0;
  if ( (int)v9 > 0 && (unsigned int)v9 >= 4 )
  {
    v16 = (int)v9 - 1;
    if ( rightOut > &leftOut[v16] || &rightOut[v16] < leftOut )
    {
      v17 = v9 - (int)v9 % 4;
      do
        v15 += 4;
      while ( v15 < v17 );
      v18 = leftOut;
      v19 = 16i64 * ((v17 + 3) / 4);
      for ( k = v19 >> 2; k; --k )
        *v18++ = 0.0;
      v21 = rightOut;
      for ( m = v19 >> 2; m; --m )
        *v21++ = 0.0;
    }
  }
  if ( v15 < v9 )
  {
    v23 = &rightOut[v15];
    v24 = v9 - v15;
    do
    {
      *(float *)((char *)v23 + (char *)leftOut - (char *)rightOut) = 0.0;
      *v23++ = 0.0;
      --v24;
    }
    while ( v24 );
  }
  return v9;
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
  __int64 v6; 
  unsigned int v7; 
  SDAutoSim *v8; 
  signed __int64 autoSimStartTimeStamp; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  unsigned __int64 v14; 
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
      v6 = (unsigned __int16)autoSimId;
      v7 = HIWORD(autoSimId);
      if ( (unsigned int)v6 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 435, ASSERT_TYPE_ASSERT, "(unsigned)( autoSimIndex ) < (unsigned)( ( sizeof( *array_counter( g_sd.autoSims ) ) + 0 ) )", "autoSimIndex doesn't index ARRAY_COUNT( g_sd.autoSims )\n\t%i not in [0, %i)", v6, 64) )
        __debugbreak();
      v8 = &g_sd.autoSims[v6];
      if ( v8->instanceId == v7 )
      {
        autoSimStartTimeStamp = voice->autoSimStartTimeStamp;
        v10 = (float)autoSimStartTimeStamp;
        if ( autoSimStartTimeStamp < 0 )
        {
          v11 = (float)autoSimStartTimeStamp;
          v10 = v11 + 1.8446744e19;
        }
        v13 = v10 * 0.048;
        v12 = v13;
        v14 = 0i64;
        if ( v13 >= 9.223372e18 )
        {
          v12 = v13 - 9.223372e18;
          if ( (float)(v13 - 9.223372e18) < 9.223372e18 )
            v14 = 0x8000000000000000ui64;
        }
        if ( (g_sd.autoSimClock + 1) << 8 <= (v8->startTime << 8) + v14 + (unsigned int)(int)v12 )
          return 0;
        autoSimShotCount = voice->autoSimShotCount;
        if ( v8->currentShotCount < autoSimShotCount )
          v8->currentShotCount = autoSimShotCount;
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
  float *v8; 
  unsigned int v9; 
  sd_stream *stream; 
  sd_stream_buffer *ioBuffer; 
  unsigned int requestLatency; 
  sd_stream_buffer *v13; 
  int v14; 
  unsigned int v15; 
  float *v16; 
  __int64 v17; 
  unsigned int count; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  __int64 v25; 
  unsigned int v26; 
  float *v27; 
  __int64 v28; 
  float v29; 
  float v30; 
  __int128 v33; 
  float v37; 
  __int128 v38; 
  float v40; 
  __int64 v41; 
  float v44; 
  __int128 v45; 
  float v47; 
  float v50; 
  __int128 v51; 
  float *v52; 
  __int64 v53; 
  float v54; 
  __int128 v56; 
  unsigned int v58; 
  signed __int64 v59; 
  unsigned int v60; 
  float *v61; 
  unsigned int v62; 
  __int64 v63; 
  __int64 v64; 
  float v65; 
  float v66; 
  __int128 v69; 
  float v71; 
  float v74; 
  __int128 v75; 
  __int64 v77; 
  float v78; 
  float v81; 
  __int128 v82; 
  float v84; 
  float v87; 
  __int128 v88; 
  unsigned int v89; 
  unsigned __int64 v90; 
  __int64 v91; 
  float *v92; 
  __int64 v93; 
  float v94; 
  float v95; 
  __int128 v98; 

  v8 = rightOut;
  v9 = decodeCount;
  if ( !decoder->eos && decodeCount > decoder->output.count )
  {
    stream = decoder->source->stream;
    if ( stream )
    {
      ioBuffer = stream->ioBuffer;
      if ( ioBuffer )
      {
        requestLatency = ioBuffer->requestLatency;
        v13 = decoder->source->stream->ioBuffer;
        v14 = Sys_Milliseconds();
        Com_PrintWarning(9, "SOUND: starving due to read request %s took %dms instead of %dms\n", v13->filename, v14 - v13->requestStartTime, requestLatency);
      }
    }
  }
  v15 = 1024 / channelCount;
  if ( decoder->output.head >= 1024 / channelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 365, ASSERT_TYPE_ASSERT, "(decoder->output.head < totalFrameCount)", (const char *)&queryFormat, "decoder->output.head < totalFrameCount") )
    __debugbreak();
  if ( decoder->output.count > v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 366, ASSERT_TYPE_ASSERT, "(decoder->output.count <= totalFrameCount)", (const char *)&queryFormat, "decoder->output.count <= totalFrameCount") )
    __debugbreak();
  if ( !decoder->eos && v9 > decoder->output.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 368, ASSERT_TYPE_ASSERT, "(decoder->eos || decodeCount <= decoder->output.count)", (const char *)&queryFormat, "decoder->eos || decodeCount <= decoder->output.count") )
    __debugbreak();
  v16 = envelopeOut;
  v17 = 0i64;
  _XMM6 = *(unsigned int *)envelopeOut;
  if ( v9 )
  {
    _XMM8 = LODWORD(FLOAT_0_99884474);
    do
    {
      count = decoder->output.count;
      if ( !count )
        break;
      v21 = decoder->output.count;
      v22 = v9;
      v23 = (v15 + decoder->output.head - count) % v15;
      if ( v9 > v15 - v23 )
        v22 = v15 - (v15 + decoder->output.head - count) % v15;
      if ( count > v22 )
        v21 = v22;
      if ( count - v21 > v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 381, ASSERT_TYPE_ASSERT, "(decoder->output.count - contiguous <= totalFrameCount)", (const char *)&queryFormat, "decoder->output.count - contiguous <= totalFrameCount") )
        __debugbreak();
      if ( channelCount == 1 )
      {
        v24 = 0;
        if ( v21 >= 4 )
        {
          v25 = v23 + 1;
          v26 = ((v21 - 4) >> 2) + 1;
          v27 = &leftOut[v17];
          v28 = v26;
          v24 = 4 * v26;
          do
          {
            v27 += 4;
            v29 = decoder->output.buffer[(unsigned int)(v25 - 1)];
            *(v27 - 4) = v29;
            v30 = decoder->output.buffer[v25];
            __asm
            {
              vcmpltss xmm0, xmm6, xmm3
              vblendvps xmm1, xmm8, xmm7, xmm0
            }
            v33 = _XMM6;
            *(float *)&v33 = (float)((float)(*(float *)&_XMM6 - v29) * *(float *)&_XMM1) + v29;
            _XMM2 = v33;
            __asm
            {
              vcmpltss xmm0, xmm2, xmm4
              vblendvps xmm1, xmm8, xmm7, xmm0
            }
            v37 = *(float *)&v33 - v30;
            v38 = _XMM1;
            *(float *)&v38 = (float)(*(float *)&_XMM1 * v37) + v30;
            _XMM2 = v38;
            *(v27 - 3) = v30;
            v40 = decoder->output.buffer[(unsigned int)(v25 + 1)];
            v41 = (unsigned int)(v25 + 2);
            v25 = (unsigned int)(v25 + 4);
            __asm
            {
              vcmpltss xmm0, xmm2, xmm4
              vblendvps xmm1, xmm8, xmm7, xmm0
            }
            v44 = *(float *)&v38 - v40;
            v45 = _XMM1;
            *(float *)&v45 = (float)(*(float *)&_XMM1 * v44) + v40;
            _XMM2 = v45;
            *(v27 - 2) = v40;
            v47 = decoder->output.buffer[v41];
            __asm
            {
              vcmpltss xmm0, xmm2, xmm4
              vblendvps xmm1, xmm8, xmm7, xmm0
            }
            v50 = *(float *)&v45 - v47;
            v51 = _XMM1;
            *(v27 - 1) = v47;
            *(float *)&v51 = (float)(*(float *)&_XMM1 * v50) + v47;
            _XMM6 = v51;
            --v28;
          }
          while ( v28 );
        }
        if ( v24 < v21 )
        {
          v52 = &leftOut[(unsigned int)v17 + (unsigned __int64)v24];
          do
          {
            v53 = v24 + v23;
            ++v24;
            ++v52;
            v54 = decoder->output.buffer[v53];
            __asm { vcmpltss xmm0, xmm6, xmm3 }
            v56 = _XMM6;
            __asm { vblendvps xmm1, xmm8, xmm7, xmm0 }
            *(v52 - 1) = v54;
            *(float *)&v56 = (float)((float)(*(float *)&_XMM6 - v54) * *(float *)&_XMM1) + v54;
            _XMM6 = v56;
          }
          while ( v24 < v21 );
        }
      }
      else
      {
        v58 = 0;
        if ( v21 >= 4 )
        {
          v59 = (char *)v8 - (char *)leftOut;
          v60 = ((v21 - 4) >> 2) + 1;
          v61 = &leftOut[v17 + 1];
          v62 = v23;
          v63 = v60;
          v58 = 4 * v60;
          do
          {
            v64 = 2 * v62;
            *(v61 - 1) = decoder->output.buffer[v64];
            v61 += 4;
            v65 = decoder->output.buffer[(unsigned int)(v64 + 1)];
            *(float *)((char *)v61 + v59 - 20) = v65;
            *(v61 - 4) = decoder->output.buffer[(unsigned int)(v64 + 2)];
            v66 = (float)(v65 + *(v61 - 5)) * 0.50118721;
            __asm
            {
              vcmpltss xmm0, xmm6, xmm3
              vblendvps xmm1, xmm8, xmm7, xmm0
            }
            v69 = _XMM1;
            *(float *)&v69 = (float)(*(float *)&_XMM1 * (float)(*(float *)&_XMM6 - v66)) + v66;
            _XMM4 = v69;
            *(float *)&_XMM0 = decoder->output.buffer[(unsigned int)(v64 + 3)];
            *(float *)((char *)v61 + v59 - 16) = *(float *)&_XMM0;
            *(v61 - 3) = decoder->output.buffer[2 * v62 + 4];
            v71 = (float)(*(float *)&_XMM0 + *(v61 - 4)) * 0.50118721;
            __asm
            {
              vcmpltss xmm0, xmm4, xmm3
              vblendvps xmm1, xmm8, xmm7, xmm0
            }
            v74 = *(float *)&v69 - v71;
            v75 = _XMM1;
            *(float *)&v75 = (float)(*(float *)&_XMM1 * v74) + v71;
            _XMM4 = v75;
            *(float *)&_XMM0 = decoder->output.buffer[(unsigned int)(v64 + 5)];
            v77 = 2 * v62 + 6;
            v62 += 4;
            *(float *)((char *)v61 + v59 - 12) = *(float *)&_XMM0;
            *(v61 - 2) = decoder->output.buffer[v77];
            v78 = (float)(*(float *)&_XMM0 + *(v61 - 3)) * 0.50118721;
            __asm
            {
              vcmpltss xmm0, xmm4, xmm3
              vblendvps xmm1, xmm8, xmm7, xmm0
            }
            v81 = *(float *)&v75 - v78;
            v82 = _XMM1;
            *(float *)&v82 = (float)(*(float *)&_XMM1 * v81) + v78;
            _XMM4 = v82;
            *(float *)&_XMM0 = decoder->output.buffer[(unsigned int)(v64 + 7)];
            *(float *)((char *)v61 + v59 - 8) = *(float *)&_XMM0;
            v84 = (float)(*(float *)&_XMM0 + *(v61 - 2)) * 0.50118721;
            __asm
            {
              vcmpltss xmm0, xmm4, xmm3
              vblendvps xmm1, xmm8, xmm7, xmm0
            }
            v87 = *(float *)&v82 - v84;
            v88 = _XMM1;
            *(float *)&v88 = (float)(*(float *)&_XMM1 * v87) + v84;
            _XMM6 = v88;
            --v63;
          }
          while ( v63 );
          v15 = 1024 / channelCount;
          v8 = rightOut;
        }
        if ( v58 < v21 )
        {
          v89 = v58 + v23;
          v90 = (unsigned int)v17 + (unsigned __int64)v58;
          v91 = v21 - v58;
          v92 = &leftOut[v90];
          do
          {
            v93 = 2 * v89;
            *v92++ = decoder->output.buffer[v93];
            ++v89;
            v94 = decoder->output.buffer[(unsigned int)(v93 + 1)];
            *(float *)((char *)v92 + (char *)v8 - (char *)leftOut - 4) = v94;
            v95 = (float)(v94 + *(v92 - 1)) * 0.50118721;
            __asm
            {
              vcmpltss xmm0, xmm6, xmm3
              vblendvps xmm1, xmm8, xmm7, xmm0
            }
            v98 = _XMM1;
            *(float *)&v98 = (float)(*(float *)&_XMM1 * (float)(*(float *)&_XMM6 - v95)) + v95;
            _XMM6 = v98;
            --v91;
          }
          while ( v91 );
        }
      }
      decoder->output.count -= v21;
      v17 = v21 + (unsigned int)v17;
      v9 -= v21;
      if ( decoder->output.count > v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 413, ASSERT_TYPE_ASSERT, "(decoder->output.count <= totalFrameCount)", (const char *)&queryFormat, "decoder->output.count <= totalFrameCount") )
        __debugbreak();
    }
    while ( v9 );
    v16 = envelopeOut;
  }
  *v16 = *(float *)&_XMM6;
  if ( decoder->output.head >= v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 418, ASSERT_TYPE_ASSERT, "(decoder->output.head < totalFrameCount)", (const char *)&queryFormat, "decoder->output.head < totalFrameCount") )
    __debugbreak();
  if ( decoder->output.count > v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_voice.cpp", 419, ASSERT_TYPE_ASSERT, "(decoder->output.count <= totalFrameCount)", (const char *)&queryFormat, "decoder->output.count <= totalFrameCount") )
    __debugbreak();
  return (unsigned int)v17;
}

/*
==============
SD_VoicePitchMono
==============
*/
__int64 SD_VoicePitchMono(sd_decoder *decoder, float pitchRatio, unsigned int outputCount, float *leftOut)
{
  unsigned int count; 
  __int64 v6; 
  __int64 v8; 
  __int64 result; 
  __int128 pitchFraction_low; 
  unsigned int i; 
  float v12; 
  float v13; 
  __int128 v14; 
  unsigned int v15; 
  __int128 v16; 

  count = decoder->output.count;
  v6 = ((unsigned __int16)decoder->output.head - (_WORD)count) & 0x3FF;
  v8 = ((_WORD)v6 + 1) & 0x3FF;
  if ( count <= 8 )
    return 0i64;
  pitchFraction_low = LODWORD(decoder->pitchFraction);
  for ( i = 0; i < outputCount; ++leftOut )
  {
    count = decoder->output.count;
    if ( !count )
      break;
    v12 = (float)(1.0 - *(float *)&pitchFraction_low) * decoder->output.buffer[v6];
    v13 = *(float *)&pitchFraction_low * decoder->output.buffer[v8];
    v14 = pitchFraction_low;
    *(float *)&v14 = *(float *)&pitchFraction_low + pitchRatio;
    pitchFraction_low = v14;
    *leftOut = v12 + v13;
    if ( *(float *)&v14 >= 1.0 )
    {
      v15 = count;
      do
      {
        count = v15 - 1;
        v6 = ((_WORD)v6 + 1) & 0x3FF;
        decoder->output.count = v15 - 1;
        v8 = ((_WORD)v8 + 1) & 0x3FF;
        v16 = pitchFraction_low;
        *(float *)&v16 = *(float *)&pitchFraction_low + -1.0;
        pitchFraction_low = v16;
        if ( v15 == 1 )
          break;
        --v15;
      }
      while ( *(float *)&v16 >= 1.0 );
    }
    ++i;
  }
  if ( count <= 8 && decoder->eos )
    decoder->output.count = 0;
  result = i;
  decoder->pitchFraction = *(float *)&pitchFraction_low;
  return result;
}

/*
==============
SD_VoicePitchMonoEnv
==============
*/
__int64 SD_VoicePitchMonoEnv(sd_decoder *decoder, float pitchRatio, unsigned int outputCount, float *leftOut, float *envelopeOut)
{
  unsigned int count; 
  __int64 v7; 
  __int64 v9; 
  __int64 result; 
  __int128 pitchFraction_low; 
  unsigned int v12; 
  float v15; 
  __int128 v18; 
  bool v19; 
  __int128 v20; 
  unsigned int v21; 
  __int128 v22; 

  count = decoder->output.count;
  v7 = ((unsigned __int16)decoder->output.head - (_WORD)count) & 0x3FF;
  v9 = ((_WORD)v7 + 1) & 0x3FF;
  if ( count <= 8 )
    return 0i64;
  pitchFraction_low = LODWORD(decoder->pitchFraction);
  v12 = 0;
  _XMM6 = *(unsigned int *)envelopeOut;
  if ( outputCount )
  {
    _XMM8 = LODWORD(FLOAT_0_99884474);
    do
    {
      count = decoder->output.count;
      if ( !count )
        break;
      v15 = (float)((float)(1.0 - *(float *)&pitchFraction_low) * decoder->output.buffer[v7]) + (float)(*(float *)&pitchFraction_low * decoder->output.buffer[v9]);
      __asm
      {
        vcmpltss xmm0, xmm6, xmm2
        vblendvps xmm1, xmm8, xmm7, xmm0
      }
      v18 = pitchFraction_low;
      *(float *)&v18 = *(float *)&pitchFraction_low + pitchRatio;
      pitchFraction_low = v18;
      v19 = *(float *)&v18 < 1.0;
      v20 = _XMM1;
      *(float *)&v20 = (float)(*(float *)&_XMM1 * (float)(*(float *)&_XMM6 - v15)) + v15;
      _XMM6 = v20;
      *leftOut = v15;
      if ( !v19 )
      {
        v21 = count;
        do
        {
          count = v21 - 1;
          v7 = ((_WORD)v7 + 1) & 0x3FF;
          decoder->output.count = v21 - 1;
          v9 = ((_WORD)v9 + 1) & 0x3FF;
          v22 = pitchFraction_low;
          *(float *)&v22 = *(float *)&pitchFraction_low + -1.0;
          pitchFraction_low = v22;
          if ( v21 == 1 )
            break;
          --v21;
        }
        while ( *(float *)&v22 >= 1.0 );
      }
      ++v12;
      ++leftOut;
    }
    while ( v12 < outputCount );
  }
  if ( count <= 8 && decoder->eos )
    decoder->output.count = 0;
  result = v12;
  *envelopeOut = *(float *)&_XMM6;
  decoder->pitchFraction = *(float *)&pitchFraction_low;
  return result;
}

/*
==============
SD_VoicePitchStereo
==============
*/
__int64 SD_VoicePitchStereo(sd_decoder *decoder, float pitchRatio, unsigned int outputCount, float *leftOut, float *rightOut)
{
  unsigned int count; 
  __int64 v8; 
  __int64 v10; 
  __int64 result; 
  __int128 pitchFraction_low; 
  unsigned int v13; 
  float *v14; 
  signed __int64 v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  unsigned int v19; 
  __int128 v20; 

  count = decoder->output.count;
  v8 = (2 * ((unsigned __int16)decoder->output.head - (_WORD)count)) & 0x3FF;
  v10 = ((_WORD)v8 + 2) & 0x3FF;
  if ( count <= 8 )
    return 0i64;
  pitchFraction_low = LODWORD(decoder->pitchFraction);
  v13 = 0;
  if ( outputCount )
  {
    v14 = rightOut;
    v15 = (char *)leftOut - (char *)rightOut;
    do
    {
      count = decoder->output.count;
      if ( !count )
        break;
      *(float *)((char *)v14 + v15) = (float)((float)(1.0 - *(float *)&pitchFraction_low) * decoder->output.buffer[v8]) + (float)(*(float *)&pitchFraction_low * decoder->output.buffer[v10]);
      v16 = (float)(1.0 - *(float *)&pitchFraction_low) * decoder->output.buffer[(unsigned int)(v8 + 1)];
      v17 = *(float *)&pitchFraction_low * decoder->output.buffer[(unsigned int)(v10 + 1)];
      v18 = pitchFraction_low;
      *(float *)&v18 = *(float *)&pitchFraction_low + pitchRatio;
      pitchFraction_low = v18;
      *v14 = v16 + v17;
      if ( *(float *)&v18 >= 1.0 )
      {
        v19 = count;
        do
        {
          count = v19 - 1;
          decoder->output.count = v19 - 1;
          v8 = ((_WORD)v8 + 2) & 0x3FF;
          v10 = ((_WORD)v10 + 2) & 0x3FF;
          v20 = pitchFraction_low;
          *(float *)&v20 = *(float *)&pitchFraction_low + -1.0;
          pitchFraction_low = v20;
          if ( v19 == 1 )
            break;
          --v19;
        }
        while ( *(float *)&v20 >= 1.0 );
      }
      ++v13;
      ++v14;
    }
    while ( v13 < outputCount );
  }
  if ( count <= 8 && decoder->eos )
    decoder->output.count = 0;
  result = v13;
  decoder->pitchFraction = *(float *)&pitchFraction_low;
  return result;
}

/*
==============
SD_VoicePitchStereoEnv
==============
*/
__int64 SD_VoicePitchStereoEnv(sd_decoder *decoder, float pitchRatio, unsigned int outputCount, float *leftOut, float *rightOut, float *envelopeOut)
{
  unsigned int count; 
  __int64 v9; 
  __int64 v11; 
  __int64 result; 
  __int128 pitchFraction_low; 
  unsigned int v14; 
  float *v16; 
  signed __int64 v17; 
  float v19; 
  float v20; 
  float v21; 
  __int128 v23; 
  __int128 v24; 
  __int128 v26; 
  bool v27; 
  __int128 v28; 
  unsigned int v29; 
  __int128 v30; 

  count = decoder->output.count;
  v9 = (2 * ((unsigned __int16)decoder->output.head - (_WORD)count)) & 0x3FF;
  v11 = ((_WORD)v9 + 2) & 0x3FF;
  if ( count <= 8 )
    return 0i64;
  pitchFraction_low = LODWORD(decoder->pitchFraction);
  v14 = 0;
  _XMM7 = *(unsigned int *)envelopeOut;
  if ( outputCount )
  {
    v16 = rightOut;
    v17 = (char *)leftOut - (char *)rightOut;
    _XMM11 = LODWORD(FLOAT_0_99884474);
    do
    {
      count = decoder->output.count;
      if ( !count )
        break;
      v19 = (float)((float)(1.0 - *(float *)&pitchFraction_low) * decoder->output.buffer[v9]) + (float)(*(float *)&pitchFraction_low * decoder->output.buffer[v11]);
      v20 = (float)((float)(1.0 - *(float *)&pitchFraction_low) * decoder->output.buffer[(unsigned int)(v9 + 1)]) + (float)(*(float *)&pitchFraction_low * decoder->output.buffer[(unsigned int)(v11 + 1)]);
      *v16 = v20;
      v21 = (float)(v20 + v19) * 0.50118721;
      __asm { vcmpltss xmm0, xmm7, xmm3 }
      *(float *)((char *)v16 + v17) = v19;
      v24 = _XMM7;
      *(float *)&v24 = *(float *)&_XMM7 - v21;
      v23 = v24;
      __asm { vblendvps xmm1, xmm11, xmm10, xmm0 }
      v26 = pitchFraction_low;
      *(float *)&v26 = *(float *)&pitchFraction_low + pitchRatio;
      pitchFraction_low = v26;
      v27 = *(float *)&v26 < 1.0;
      v28 = v23;
      *(float *)&v28 = (float)(*(float *)&v23 * *(float *)&_XMM1) + v21;
      _XMM7 = v28;
      if ( !v27 )
      {
        v29 = count;
        do
        {
          count = v29 - 1;
          decoder->output.count = v29 - 1;
          v9 = ((_WORD)v9 + 2) & 0x3FF;
          v11 = ((_WORD)v11 + 2) & 0x3FF;
          v30 = pitchFraction_low;
          *(float *)&v30 = *(float *)&pitchFraction_low + -1.0;
          pitchFraction_low = v30;
          if ( v29 == 1 )
            break;
          --v29;
        }
        while ( *(float *)&v30 >= 1.0 );
      }
      ++v14;
      ++v16;
    }
    while ( v14 < outputCount );
  }
  if ( count <= 8 && decoder->eos )
    decoder->output.count = 0;
  *envelopeOut = *(float *)&_XMM7;
  result = v14;
  decoder->pitchFraction = *(float *)&pitchFraction_low;
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
  float v15; 
  sd_decoder *v16; 
  signed __int32 v17[8]; 

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
          v15 = (float)((float)voice->source.entry->frameRate * 0.000020833333) * param->pitch;
          v12 = SD_VoiceDecoderRead(voice, v13, 256, COERCE_FLOAT(COERCE_UNSIGNED_INT(1.0 - v15) & _xmm) > 0.001, v15, leftOut, rightOut, &voice->envelope);
          v16 = voice->decoder;
          voice->playedPosition += (int)(count - v16->output.count);
          if ( v16->done && !v16->output.count )
          {
            _InterlockedOr(v17, 0);
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

