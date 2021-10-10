/*
==============
SD_SetVoiceStartSync
==============
*/

void __fastcall SD_SetVoiceStartSync(int voiceIndex, bool startSync, float syncPeriodFrames, int meter, int offsetFrames, int delayBeats, int fadeBeats)
{
  ?SD_SetVoiceStartSync@@YAXH_NMHHHH@Z(voiceIndex, startSync, syncPeriodFrames, meter, offsetFrames, delayBeats, fadeBeats);
}

/*
==============
SD_SetAuxCallback
==============
*/

void __fastcall SD_SetAuxCallback(bool (__fastcall *callback)(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *))
{
  ?SD_SetAuxCallback@@YAXP6A_NAEAU?$SequentialBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@SD_DSP@@@Z@Z(callback);
}

/*
==============
SD_SetVoiceSyncVoice
==============
*/

void __fastcall SD_SetVoiceSyncVoice(int voiceIndexMaster, int voiceIndexSynced)
{
  ?SD_SetVoiceSyncVoice@@YAXHH@Z(voiceIndexMaster, voiceIndexSynced);
}

/*
==============
SD_StartAlias
==============
*/

bool __fastcall SD_StartAlias(const SndStartAliasInfo *aliasInfo, int voiceIndex, int startMsec)
{
  return ?SD_StartAlias@@YA_NPEBUSndStartAliasInfo@@HH@Z(aliasInfo, voiceIndex, startMsec);
}

/*
==============
SD_StartVoice
==============
*/

void __fastcall SD_StartVoice(int voice)
{
  ?SD_StartVoice@@YAXH@Z(voice);
}

/*
==============
SD_ClearAutoSim
==============
*/

void __fastcall SD_ClearAutoSim(int voiceIndex)
{
  ?SD_ClearAutoSim@@YAXH@Z(voiceIndex);
}

/*
==============
SD_StopVoice
==============
*/

void __fastcall SD_StopVoice(int voiceIndex)
{
  ?SD_StopVoice@@YAXH@Z(voiceIndex);
}

/*
==============
SD_SetVoiceStopSync
==============
*/

void __fastcall SD_SetVoiceStopSync(int voiceIndex, bool stopSync, int delayBeats, int fadeBeats)
{
  ?SD_SetVoiceStopSync@@YAXH_NHH@Z(voiceIndex, stopSync, delayBeats, fadeBeats);
}

/*
==============
SD_Shutdown
==============
*/

void SD_Shutdown(void)
{
  ?SD_Shutdown@@YAXXZ();
}

/*
==============
SD_UpdateVehicle
==============
*/

void __fastcall SD_UpdateVehicle(int voiceIndex, float throttle, float brake, float rpm, float velocity, int gear, bool useSimulatorParams)
{
  ?SD_UpdateVehicle@@YAXHMMMMH_N@Z(voiceIndex, throttle, brake, rpm, velocity, gear, useSimulatorParams);
}

/*
==============
SD_ClearVoiceStopSync
==============
*/

bool __fastcall SD_ClearVoiceStopSync(int voiceIndex)
{
  return ?SD_ClearVoiceStopSync@@YA_NH@Z(voiceIndex);
}

/*
==============
SD_PostUpdate
==============
*/

void __fastcall SD_PostUpdate(int frametime)
{
  ?SD_PostUpdate@@YAXH@Z(frametime);
}

/*
==============
SD_IsVoiceDone
==============
*/

bool __fastcall SD_IsVoiceDone(int voice)
{
  return ?SD_IsVoiceDone@@YA_NH@Z(voice);
}

/*
==============
SD_Terminate
==============
*/

void SD_Terminate(void)
{
  ?SD_Terminate@@YAXXZ();
}

/*
==============
SD_UpdateVoice
==============
*/

void __fastcall SD_UpdateVoice(int voiceIndex, int frametime)
{
  ?SD_UpdateVoice@@YAXHH@Z(voiceIndex, frametime);
}

/*
==============
SD_InvalidateStreamBuffers
==============
*/

void __fastcall SD_InvalidateStreamBuffers(int voiceIndex)
{
  ?SD_InvalidateStreamBuffers@@YAXH@Z(voiceIndex);
}

/*
==============
SD_GetMixParam
==============
*/

sd_mix_master_param *__fastcall SD_GetMixParam(sd_mix_master_param *param)
{
  return ?SD_GetMixParam@@YAPEAUsd_mix_master_param@@PEAU1@@Z(param);
}

/*
==============
SD_Init
==============
*/

bool __fastcall SD_Init()
{
  return ?SD_Init@@YA_NXZ();
}

/*
==============
SD_Sync
==============
*/

void SD_Sync(void)
{
  ?SD_Sync@@YAXXZ();
}

/*
==============
SD_StatFrame
==============
*/

void SD_StatFrame(void)
{
  ?SD_StatFrame@@YAXXZ();
}

/*
==============
SD_UnpackVoiceParamPanArgument
==============
*/

void __fastcall SD_UnpackVoiceParamPanArgument(const int cmdParam, int *outBusIndex, int *outPanMatrixIndex, int *outPanLevelIndex)
{
  ?SD_UnpackVoiceParamPanArgument@@YAXHAEAH00@Z(cmdParam, outBusIndex, outPanMatrixIndex, outPanLevelIndex);
}

/*
==============
SD_Bootstrap
==============
*/

void SD_Bootstrap(void)
{
  ?SD_Bootstrap@@YAXXZ();
}

/*
==============
SD_PreUpdate
==============
*/

void __fastcall SD_PreUpdate(int frametime)
{
  ?SD_PreUpdate@@YAXH@Z(frametime);
}

/*
==============
SD_StreamReady
==============
*/

bool __fastcall SD_StreamReady(int voiceIndex)
{
  return ?SD_StreamReady@@YA_NH@Z(voiceIndex);
}

/*
==============
SD_StopHeldAutoSimVoice
==============
*/

void __fastcall SD_StopHeldAutoSimVoice(int voicePoolIndex)
{
  ?SD_StopHeldAutoSimVoice@@YAXH@Z(voicePoolIndex);
}

/*
==============
SD_SetSecondaryGroupInfo
==============
*/

void __fastcall SD_SetSecondaryGroupInfo(int voiceIndex, int numSecondaries)
{
  ?SD_SetSecondaryGroupInfo@@YAXHH@Z(voiceIndex, numSecondaries);
}

/*
==============
SD_AddVoiceParamCommand
==============
*/
void SD_AddVoiceParamCommand(sd_voice_param *param, sd_voice_cmd cmd, int cmdParam, sd_voice_src src, sd_voice_dest dest)
{
  __int64 v9; 
  sd_voice_cmd_entry *v10; 
  int commandBufferCount; 
  int v12; 

  if ( param->commandBufferCount >= 0xAu )
  {
    v12 = 10;
    commandBufferCount = param->commandBufferCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( param->commandBufferCount ) < (unsigned)( 10 )", "param->commandBufferCount doesn't index SD_VOICE_COMMAND_COUNT\n\t%i not in [0, %i)", commandBufferCount, v12) )
      __debugbreak();
  }
  v9 = param->commandBufferCount;
  v10 = &param->commandBuffer[v9];
  param->commandBufferCount = v9 + 1;
  v10->cmd = cmd;
  v10->cmdParam = cmdParam;
  v10->dest = dest;
  v10->src = src;
}

/*
==============
SD_AllocVoiceParamPanMatrix
==============
*/
__int64 SD_AllocVoiceParamPanMatrix(sd_voice_param *param)
{
  __int64 result; 
  int panMatrixCount; 
  int v4; 

  if ( param->panMatrixCount >= 2u )
  {
    v4 = 2;
    panMatrixCount = param->panMatrixCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( param->panMatrixCount ) < (unsigned)( 2 )", "param->panMatrixCount doesn't index SD_VOICE_PAN_MATRIX_COUNT\n\t%i not in [0, %i)", panMatrixCount, v4) )
      __debugbreak();
  }
  result = (unsigned int)param->panMatrixCount;
  param->panMatrixCount = result + 1;
  return result;
}

/*
==============
SD_Bootstrap
==============
*/
void SD_Bootstrap(void)
{
  if ( SND_ShouldInit() )
    SD_InitAD();
}

/*
==============
SD_ClearAutoSim
==============
*/
void SD_ClearAutoSim(int voiceIndex)
{
  __int64 v1; 
  int v3; 

  v1 = voiceIndex;
  if ( (unsigned int)voiceIndex > 0x63 )
  {
    v3 = 99;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 800, ASSERT_TYPE_ASSERT, "( 0 ) <= ( voiceIndex ) && ( voiceIndex ) <= ( ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) )", "voiceIndex not in [0, SND_MAX_VOICES]\n\t%i not in [%i, %i]", voiceIndex, 0i64, v3) )
      __debugbreak();
  }
  if ( !g_sd.voices[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 802, ASSERT_TYPE_ASSERT, "(g_sd.voices[voiceIndex])", (const char *)&queryFormat, "g_sd.voices[voiceIndex]") )
    __debugbreak();
  g_snd.chaninfoUnweightedPriority[492 * v1 - 48650] = NAN;
}

/*
==============
SD_ClearVoiceStopSync
==============
*/
bool SD_ClearVoiceStopSync(int voiceIndex)
{
  sd_voice *v1; 
  bool result; 

  v1 = g_sd.voices[voiceIndex];
  if ( !v1 || (unsigned int)(v1->syncState - 3) > 1 )
    return 0;
  if ( !v1->isSync && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 887, ASSERT_TYPE_ASSERT, "(voice->isSync)", (const char *)&queryFormat, "voice->isSync") )
    __debugbreak();
  result = 1;
  v1->syncState = SD_VOICE_SYNC_ACTIVE;
  *(_QWORD *)&v1->syncStopBeats = 0i64;
  v1->syncStopFadeBeats = 0;
  v1->syncStop = 0;
  return result;
}

/*
==============
SD_GetMixParam
==============
*/
sd_mix_master_param *SD_GetMixParam(sd_mix_master_param *param)
{
  const SndMaster *MasterCurrent; 
  __int64 v3; 
  SndMaster *p_masterParams; 
  const SndMaster *v5; 
  __int64 v6; 
  __int128 v7; 
  float (*reverbPan)[64]; 
  snd_rv_params *radverb; 
  sd_send_effect_param *currentReverbParams; 
  snd_quad_five_tap_delay_params *quadDelay; 
  snd_rv_params *v12; 
  __int128 *v13; 
  float (*v14)[64]; 
  __int64 v15; 
  __int128 v16; 
  double BinkVolume; 

  MasterCurrent = SND_GetMasterCurrent();
  v3 = 4i64;
  p_masterParams = &param->masterParams;
  v5 = MasterCurrent;
  v6 = 4i64;
  do
  {
    p_masterParams = (SndMaster *)((char *)p_masterParams + 128);
    v7 = *(_OWORD *)v5->name;
    v5 = (const SndMaster *)((char *)v5 + 128);
    *(_OWORD *)&p_masterParams[-1].dialogPeakLimit.enable = v7;
    *(_OWORD *)&p_masterParams[-1].dialogPeakLimit.releaseMin = *(_OWORD *)&v5[-1].dialogPeakLimit.releaseMin;
    *(_OWORD *)&p_masterParams[-1].sfxPeakLimit.outputGain = *(_OWORD *)&v5[-1].sfxPeakLimit.outputGain;
    *(_OWORD *)&p_masterParams[-1].mainPeakLimit.enable = *(_OWORD *)&v5[-1].mainPeakLimit.enable;
    *(_OWORD *)&p_masterParams[-1].mainPeakLimit.releaseMin = *(_OWORD *)&v5[-1].mainPeakLimit.releaseMin;
    *(_OWORD *)&p_masterParams[-1].busSfxGain = *(_OWORD *)&v5[-1].busSfxGain;
    *(_OWORD *)&p_masterParams[-1].busReferenceGain = *(_OWORD *)&v5[-1].busReferenceGain;
    *(_OWORD *)&p_masterParams[-1].busReverbEnable = *(_OWORD *)&v5[-1].busReverbEnable;
    --v6;
  }
  while ( v6 );
  *(_OWORD *)p_masterParams->name = *(_OWORD *)v5->name;
  *(_OWORD *)&p_masterParams->name[16] = *(_OWORD *)&v5->name[16];
  *(_OWORD *)&p_masterParams->name[32] = *(_OWORD *)&v5->name[32];
  reverbPan = param->reverbPan;
  *(_QWORD *)&p_masterParams->name[48] = *(_QWORD *)&v5->name[48];
  radverb = param->radverb;
  *(_DWORD *)&p_masterParams->name[56] = *(_DWORD *)&v5->name[56];
  currentReverbParams = sdGlob.currentReverbParams;
  quadDelay = param->quadDelay;
  v12 = param->radverb;
  do
  {
    SND_RvParamsDefault(v12);
    SND_DelayParamsDefault(quadDelay);
    *(__m256i *)&v12->frameRate = *(__m256i *)&currentReverbParams->reverbParams.frameRate;
    *(__m256i *)&v12->returnGain = *(__m256i *)&currentReverbParams->reverbParams.returnGain;
    *(_OWORD *)&v12->lateSize = *(_OWORD *)&currentReverbParams->reverbParams.lateSize;
    radverb->delayMatrix = 0;
    v13 = (__int128 *)((char *)reverbPan + (char *)sdGlob.reverbPan - (char *)param->reverbPan);
    radverb->frameRate = 48000.0;
    v14 = reverbPan;
    v15 = 2i64;
    do
    {
      v14 = (float (*)[64])((char *)v14 + 128);
      v16 = *v13;
      v13 += 8;
      *(_OWORD *)&(*v14)[-32] = v16;
      *(_OWORD *)&(*v14)[-28] = *(v13 - 7);
      *(_OWORD *)&(*v14)[-24] = *(v13 - 6);
      *(_OWORD *)&(*v14)[-20] = *(v13 - 5);
      *(_OWORD *)&(*v14)[-16] = *(v13 - 4);
      *(_OWORD *)&(*v14)[-12] = *(v13 - 3);
      *(_OWORD *)&(*v14)[-8] = *(v13 - 2);
      *(_OWORD *)&(*v14)[-4] = *(v13 - 1);
      --v15;
    }
    while ( v15 );
    *(__m256i *)&quadDelay->params[0].enabled = *(__m256i *)&currentReverbParams->delayParams.params[0].enabled;
    *(__m256i *)&quadDelay->params[1].lpfCutoff = *(__m256i *)&currentReverbParams->delayParams.params[1].lpfCutoff;
    *(__m256i *)&quadDelay->params[3].delayTimeMS = *(__m256i *)&currentReverbParams->delayParams.params[3].delayTimeMS;
    ++v12;
    quadDelay->params[4].hpfCutoff = currentReverbParams->delayParams.params[4].hpfCutoff;
    ++currentReverbParams;
    ++quadDelay;
    ++reverbPan;
    ++radverb;
    --v3;
  }
  while ( v3 );
  param->paused = g_snd.paused;
  param->muted = g_snd.muted;
  BinkVolume = SND_GetBinkVolume();
  param->movieMasterGain = *(float *)&BinkVolume;
  param->testTone = g_sd.testTone != 0;
  return param;
}

/*
==============
SD_GetMixParam
==============
*/
sd_mix_master_param *SD_GetMixParam()
{
  sd_mix_master_param *v0; 
  const SndMaster *MasterCurrent; 
  __int64 v2; 
  SndMaster *p_masterParams; 
  __int64 v4; 
  const SndMaster *v5; 
  __int128 v6; 
  float (*reverbPan)[64]; 
  _DWORD *p_frameRate; 
  sd_send_effect_param *currentReverbParams; 
  snd_quad_five_tap_delay_params *quadDelay; 
  snd_rv_params *radverb; 
  __int128 *v12; 
  float (*v13)[64]; 
  __int64 v14; 
  __int128 v15; 
  double BinkVolume; 

  v0 = SD_MixParamAllocate();
  MasterCurrent = SND_GetMasterCurrent();
  v2 = 4i64;
  p_masterParams = &v0->masterParams;
  v4 = 4i64;
  v5 = MasterCurrent;
  do
  {
    p_masterParams = (SndMaster *)((char *)p_masterParams + 128);
    v6 = *(_OWORD *)v5->name;
    v5 = (const SndMaster *)((char *)v5 + 128);
    *(_OWORD *)&p_masterParams[-1].dialogPeakLimit.enable = v6;
    *(_OWORD *)&p_masterParams[-1].dialogPeakLimit.releaseMin = *(_OWORD *)&v5[-1].dialogPeakLimit.releaseMin;
    *(_OWORD *)&p_masterParams[-1].sfxPeakLimit.outputGain = *(_OWORD *)&v5[-1].sfxPeakLimit.outputGain;
    *(_OWORD *)&p_masterParams[-1].mainPeakLimit.enable = *(_OWORD *)&v5[-1].mainPeakLimit.enable;
    *(_OWORD *)&p_masterParams[-1].mainPeakLimit.releaseMin = *(_OWORD *)&v5[-1].mainPeakLimit.releaseMin;
    *(_OWORD *)&p_masterParams[-1].busSfxGain = *(_OWORD *)&v5[-1].busSfxGain;
    *(_OWORD *)&p_masterParams[-1].busReferenceGain = *(_OWORD *)&v5[-1].busReferenceGain;
    *(_OWORD *)&p_masterParams[-1].busReverbEnable = *(_OWORD *)&v5[-1].busReverbEnable;
    --v4;
  }
  while ( v4 );
  *(_OWORD *)p_masterParams->name = *(_OWORD *)v5->name;
  *(_OWORD *)&p_masterParams->name[16] = *(_OWORD *)&v5->name[16];
  *(_OWORD *)&p_masterParams->name[32] = *(_OWORD *)&v5->name[32];
  reverbPan = v0->reverbPan;
  *(_QWORD *)&p_masterParams->name[48] = *(_QWORD *)&v5->name[48];
  p_frameRate = (_DWORD *)&v0->radverb[0].frameRate;
  *(_DWORD *)&p_masterParams->name[56] = *(_DWORD *)&v5->name[56];
  currentReverbParams = sdGlob.currentReverbParams;
  quadDelay = v0->quadDelay;
  radverb = v0->radverb;
  do
  {
    SND_RvParamsDefault(radverb);
    SND_DelayParamsDefault(quadDelay);
    *(__m256i *)&radverb->frameRate = *(__m256i *)&currentReverbParams->reverbParams.frameRate;
    *(__m256i *)&radverb->returnGain = *(__m256i *)&currentReverbParams->reverbParams.returnGain;
    *(_OWORD *)&radverb->lateSize = *(_OWORD *)&currentReverbParams->reverbParams.lateSize;
    p_frameRate[18] = 0;
    v12 = (__int128 *)((char *)reverbPan + (char *)sdGlob.reverbPan - (char *)v0->reverbPan);
    *p_frameRate = 1195081728;
    v13 = reverbPan;
    v14 = 2i64;
    do
    {
      v13 = (float (*)[64])((char *)v13 + 128);
      v15 = *v12;
      v12 += 8;
      *(_OWORD *)&(*v13)[-32] = v15;
      *(_OWORD *)&(*v13)[-28] = *(v12 - 7);
      *(_OWORD *)&(*v13)[-24] = *(v12 - 6);
      *(_OWORD *)&(*v13)[-20] = *(v12 - 5);
      *(_OWORD *)&(*v13)[-16] = *(v12 - 4);
      *(_OWORD *)&(*v13)[-12] = *(v12 - 3);
      *(_OWORD *)&(*v13)[-8] = *(v12 - 2);
      *(_OWORD *)&(*v13)[-4] = *(v12 - 1);
      --v14;
    }
    while ( v14 );
    *(__m256i *)&quadDelay->params[0].enabled = *(__m256i *)&currentReverbParams->delayParams.params[0].enabled;
    *(__m256i *)&quadDelay->params[1].lpfCutoff = *(__m256i *)&currentReverbParams->delayParams.params[1].lpfCutoff;
    *(__m256i *)&quadDelay->params[3].delayTimeMS = *(__m256i *)&currentReverbParams->delayParams.params[3].delayTimeMS;
    ++radverb;
    quadDelay->params[4].hpfCutoff = currentReverbParams->delayParams.params[4].hpfCutoff;
    ++currentReverbParams;
    ++quadDelay;
    ++reverbPan;
    p_frameRate += 20;
    --v2;
  }
  while ( v2 );
  v0->paused = g_snd.paused;
  v0->muted = g_snd.muted;
  BinkVolume = SND_GetBinkVolume();
  v0->movieMasterGain = *(float *)&BinkVolume;
  v0->testTone = g_sd.testTone != 0;
  return v0;
}

/*
==============
SD_GetVoiceParam
==============
*/
sd_voice_param *SD_GetVoiceParam(int voiceIndex)
{
  __int64 v1; 
  sd_voice_param *result; 
  sd_voice_param *v3; 
  SDClientVoiceParams *v4; 
  _DWORD *panLevels; 
  int v9; 
  __int64 v10; 
  float hpfCutoff; 
  sd_voice_src v12; 
  __int64 v13; 
  sd_voice_cmd v14; 
  float lpfCutoff; 
  sd_voice_cmd v16; 
  __int64 v17; 
  int i; 
  int v19; 
  unsigned int v20; 
  sd_voice_src v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  __int64 v26; 
  __m256i *v27; 
  int v28; 
  _DWORD *v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  int panMatrixIndex; 
  __int64 v34; 

  v1 = voiceIndex;
  result = SD_VoiceParamAllocate();
  v3 = result;
  if ( result )
  {
    if ( SND_IsVoiceFree(v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 125, ASSERT_TYPE_ASSERT, "(!SND_IsVoiceFree(voiceIndex))", (const char *)&queryFormat, "!SND_IsVoiceFree(voiceIndex)") )
      __debugbreak();
    v4 = &sdGlob.voiceParams[v1];
    v3->commandBufferCount = 0;
    v3->panMatrixCount = 0;
    *(__m256i *)&v3->dspParams.eqBankParams.eqLerp = *(__m256i *)&v4->dspParams.eqBankParams.eqLerp;
    *(__m256i *)&v3->dspParams.eqBankParams.params[0][1].freq = *(__m256i *)&v4->dspParams.eqBankParams.params[0][1].freq;
    *(_OWORD *)&v3->dspParams.eqBankParams.params[1][1].type = *(_OWORD *)&v4->dspParams.eqBankParams.params[1][1].type;
    *(double *)&v3->dspParams.eqBankParams.params[1][1].enabled = *(double *)&v4->dspParams.eqBankParams.params[1][1].enabled;
    v3->dspParams.hpfCutoff = v4->dspParams.hpfCutoff;
    v34 = v1;
    v3->eqBankParamsHash = SND_Hash(&v4->dspParams, 0x54u);
    panLevels = (_DWORD *)v4->panLevels;
    v3->paused = g_snd.voices[v1].paused;
    v3->trackEnvelope = g_snd.voices[v1].alias->masterPriority != 0;
    _XMM0 = LODWORD(v4->pitch);
    __asm
    {
      vminss  xmm1, xmm0, cs:__real@40000000
      vmaxss  xmm2, xmm1, cs:__real@3a83126f
    }
    v3->pitch = *(float *)&_XMM2;
    *(_OWORD *)v3->panLevels = *(_OWORD *)v4->panLevels;
    *(double *)&v3->panLevels[4] = *(double *)&v4->panLevels[4];
    v9 = SD_AllocVoiceParamPanMatrix(v3);
    panMatrixIndex = v9;
    v10 = (__int64)v9 << 7;
    *(__m256i *)((char *)v3->panMatrix[0] + v10) = *(__m256i *)v4->panMatrix;
    *(__m256i *)((char *)&v3->panMatrix[0][8] + v10) = *(__m256i *)&v4->panMatrix[8];
    *(__m256i *)((char *)&v3->panMatrix[0][16] + v10) = *(__m256i *)&v4->panMatrix[16];
    *(__m256i *)((char *)&v3->panMatrix[0][24] + v10) = *(__m256i *)&v4->panMatrix[24];
    SD_AddVoiceParamCommand(v3, SD_VOICE_CMD_EQ, 0, SD_VOICE_SRC_TRANSPORT, SD_VOICE_DEST_SCRATCH_1);
    hpfCutoff = v4->dspParams.hpfCutoff;
    v12 = SD_VOICE_SRC_SCRATCH_1;
    v13 = 2i64;
    if ( hpfCutoff != -1.0 )
    {
      v14 = SD_VOICE_CMD_HPF_1POLE;
      if ( v4->useBiQuad )
        v14 = SD_VOICE_CMD_HPF_BIQUAD;
      SD_AddVoiceParamCommand(v3, v14, (int)hpfCutoff, SD_VOICE_SRC_SCRATCH_1, SD_VOICE_DEST_SCRATCH_2);
      v12 = SD_VOICE_SRC_SCRATCH_2;
    }
    lpfCutoff = v4->dspParams.lpfCutoff;
    if ( lpfCutoff != -1.0 )
    {
      v16 = SD_VOICE_CMD_LPF_1POLE;
      if ( v4->useBiQuad )
        v16 = SD_VOICE_CMD_LPF_BIQUAD;
      SD_AddVoiceParamCommand(v3, v16, (int)lpfCutoff, v12, (sd_voice_dest)v12);
      ++v12;
    }
    v17 = 6i64;
    if ( v4->bus != SND_BUS_LICENCED && v4->sendType != SENDTYPE_NONE )
    {
      for ( i = 0; i < 4; ++i )
      {
        v19 = 4;
        if ( v4->sendType == SENDTYPE_DELAY )
          v19 = 0;
        v20 = i + v19;
        if ( v20 >= 0x11 )
        {
          LODWORD(v32) = 17;
          LODWORD(v31) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 177, ASSERT_TYPE_ASSERT, "(unsigned)( wetBus ) < (unsigned)( SND_BUS_COUNT )", "wetBus doesn't index SND_BUS_COUNT\n\t%i not in [0, %i)", v31, v32) )
            __debugbreak();
        }
        v21 = SD_VOICE_SRC_SCRATCH_1;
        if ( v4->onePolePreReverb )
          v21 = v12;
        v22 = SD_PackVoiceParamPanArgument(v20, panMatrixIndex, i + 2);
        SD_AddVoiceParamCommand(v3, SD_VOICE_CMD_PAN, v22, v21, SD_VOICE_DEST_BUS);
      }
      v9 = panMatrixIndex;
      panLevels = (_DWORD *)v4->panLevels;
      v13 = 2i64;
    }
    if ( (unsigned int)(g_snd.voices[v34].params.gpadSound - 2) > 1 )
    {
      v23 = SD_PackVoiceParamPanArgument(v4->bus, v9, 0);
      SD_AddVoiceParamCommand(v3, SD_VOICE_CMD_PAN, v23, v12, SD_VOICE_DEST_BUS);
      if ( g_snd.voices[v34].propagationTriggerIndex != 1024 && SND_EntChannelFarReverbBehavior((unsigned __int8)(g_snd.voices[v34].alias->flags >> 10)) == SND_FAR_REVERB_FULL )
      {
        v24 = (unsigned int)(g_snd.voices[v34].propagationTriggerIndex != g_snd.reverbTrigger[2]) + 2;
        v25 = SD_AllocVoiceParamPanMatrix(v3);
        v26 = (__int64)v25 << 7;
        v27 = (__m256i *)sdGlob.reverbPan[v24];
        *(__m256i *)((char *)v3->panMatrix[0] + v26) = *v27;
        *(__m256i *)((char *)&v3->panMatrix[0][8] + v26) = v27[1];
        *(__m256i *)((char *)&v3->panMatrix[0][16] + v26) = v27[2];
        *(__m256i *)((char *)&v3->panMatrix[0][24] + v26) = v27[3];
        v28 = SD_PackVoiceParamPanArgument(v4->bus, v25, 1);
        SD_AddVoiceParamCommand(v3, SD_VOICE_CMD_PAN, v28, SD_VOICE_SRC_SCRATCH_1, SD_VOICE_DEST_BUS);
      }
    }
    if ( (LODWORD(v3->pitch) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 230, ASSERT_TYPE_ASSERT, "(!IS_NAN( param->pitch ))", (const char *)&queryFormat, "!IS_NAN( param->pitch )") )
      __debugbreak();
    do
    {
      if ( (*panLevels & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 234, ASSERT_TYPE_ASSERT, "(!IS_NAN( srcParam->panLevels[panLevelIndex] ))", (const char *)&queryFormat, "!IS_NAN( srcParam->panLevels[panLevelIndex] )") )
        __debugbreak();
      ++panLevels;
      --v17;
    }
    while ( v17 );
    v29 = (_DWORD *)v3->panMatrix[0];
    do
    {
      v30 = 32i64;
      do
      {
        if ( (*v29 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 241, ASSERT_TYPE_ASSERT, "(!IS_NAN( param->panMatrix[panIndex][i] ))", (const char *)&queryFormat, "!IS_NAN( param->panMatrix[panIndex][i] )") )
          __debugbreak();
        ++v29;
        --v30;
      }
      while ( v30 );
      --v13;
    }
    while ( v13 );
    return v3;
  }
  return result;
}

/*
==============
SD_Init
==============
*/
char SD_Init()
{
  sd_mix_master_param *MixParam; 
  signed __int32 v2[10]; 

  memset_0(g_sd.voices, 0, sizeof(g_sd.voices));
  SND_InitLog();
  SD_StreamInit();
  SND_AsyncInit();
  SD_MixInit();
  SD_DecoderInit();
  SD_VoiceInit();
  SD_VehicleInit();
  MixParam = SD_GetMixParam();
  SD_MixSetParam(MixParam);
  SD_OutputInit(0);
  g_sd.testTone = 0;
  g_sd.running = 1;
  _InterlockedOr(v2, 0);
  return 1;
}

/*
==============
SD_InvalidateStreamBuffers
==============
*/
void SD_InvalidateStreamBuffers(int voiceIndex)
{
  sd_voice **v1; 

  v1 = &g_sd.voices[voiceIndex];
  if ( !*v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 792, ASSERT_TYPE_ASSERT, "(g_sd.voices[voiceIndex])", (const char *)&queryFormat, "g_sd.voices[voiceIndex]") )
    __debugbreak();
  (*v1)->invalidateBuffers = 1;
}

/*
==============
SD_IsVoiceDone
==============
*/
bool SD_IsVoiceDone(int voice)
{
  return SD_VoiceDone(g_sd.voices[voice]);
}

/*
==============
SD_PackVoiceParamPanArgument
==============
*/
__int64 SD_PackVoiceParamPanArgument(const int busIndex, const int panMatrixIndex, const int panLevelIndex)
{
  __int64 v7; 
  __int64 v9; 
  int v10; 

  if ( (unsigned int)busIndex >= 0xFFFF )
  {
    v10 = 0xFFFF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 100, ASSERT_TYPE_ASSERT, "(unsigned)( busIndex ) < (unsigned)( 0xFFFF )", "busIndex doesn't index 0xFFFF\n\t%i not in [0, %i)", busIndex, v10) )
      __debugbreak();
  }
  if ( (unsigned int)panMatrixIndex >= 0xFF )
  {
    LODWORD(v9) = 255;
    LODWORD(v7) = panMatrixIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 101, ASSERT_TYPE_ASSERT, "(unsigned)( panMatrixIndex ) < (unsigned)( 0xFF )", "panMatrixIndex doesn't index 0xFF\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( (unsigned int)panLevelIndex >= 0xFF )
  {
    LODWORD(v9) = 255;
    LODWORD(v7) = panLevelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 102, ASSERT_TYPE_ASSERT, "(unsigned)( panLevelIndex ) < (unsigned)( 0xFF )", "panLevelIndex doesn't index 0xFF\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return panLevelIndex | ((panMatrixIndex | (unsigned int)(busIndex << 8)) << 8);
}

/*
==============
SD_PostUpdate
==============
*/
void SD_PostUpdate(int frametime)
{
  ;
}

/*
==============
SD_PreUpdate
==============
*/
void SD_PreUpdate(int frametime)
{
  sd_mix_master_param *MixParam; 
  int v2; 

  Sys_ProfBeginNamedEvent(0xFF0000u, "SD_PreUpdate");
  MixParam = SD_GetMixParam();
  SD_MixSetParam(MixParam);
  SD_OutputUpdateVoiceDeviceType();
  SD_StreamDevhost();
  SND_DevhostStatInt("SD Streams", g_sd_stream_globals.streamInUse);
  SND_DevhostStatInt("SD Mix Param", g_sd.mixParamInUse);
  SND_DevhostStatInt("SD Voice", g_sd.voiceInUse);
  SND_DevhostStatInt("SD Voice %", 100 * g_sd.voiceInUse / 198);
  SND_DevhostStatInt("SD Voice Param", g_sd.voiceParamInUse);
  SND_DevhostStatInt("SD Voice Param %", 100 * g_sd.voiceParamInUse / 396);
  SND_DevhostStatInt("SD Starvation Voice", g_sd.voiceStarvationCount);
  SND_DevhostStatInt("SD Starvation Master", g_sd.masterStarvationCount);
  SND_DevhostStatInt("SD Mix usec", g_sd.mixTimeUsec);
  SND_DevhostStatInt("SD Decode Pre usec", g_sd.decodePreTimeUsec);
  SND_DevhostStatInt("SD Decode Post usec", g_sd.decodePostTimeUsec);
  SND_DevhostStatInt("SD Mix Wait usec", g_sd.mixWaitTimeUsec);
  SND_DevhostStatInt("SD Voice usec", g_sd.mixVoicesUsec);
  SND_DevhostStatInt("SD Radverb usec", g_sd.mixReverbUsec);
  SND_DevhostStatInt("SD Delay usec", g_sd.mixDelayUsec);
  SND_DevhostStatInt("SD Master usec", g_sd.mixMasterUsec);
  SND_DevhostStatInt("SD decode job wait us", g_sd.decodeThreadWaitTimeUsec);
  SND_DevhostStatInt("SD decode thread wait us", g_sd.decodeWaitTimeUsec);
  SND_DevhostStatInt("SD decode thread process us", g_sd.decodeProcessTimeUsec);
  SND_DevhostStatInt("SD acp commands", g_sd.pendingCommands);
  SND_DevhostStatInt("SD voice pan total", g_sd.panTotalCount);
  SND_DevhostStatInt("SD voice pan count", g_sd.panPanCount);
  if ( g_sd.panTotalCount )
    v2 = 100 * g_sd.panPanCount / g_sd.panTotalCount;
  else
    v2 = 0;
  SND_DevhostStatInt("SD voice pan %", v2);
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_SetAuxCallback
==============
*/
void SD_SetAuxCallback(bool (*callback)(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *))
{
  g_sd.auxCallback = callback;
  if ( !callback )
    SD_Sync();
}

/*
==============
SD_SetSecondaryGroupInfo
==============
*/
void SD_SetSecondaryGroupInfo(int voiceIndex, int numSecondaries)
{
  __int64 v2; 
  sd_voice *v3; 

  v2 = voiceIndex;
  v3 = g_sd.voices[voiceIndex];
  if ( v3 )
  {
    v3->secondaryGroupSize = numSecondaries;
    g_sd.voices[v2]->secondaryGroupReady = 0;
  }
}

/*
==============
SD_SetVoiceStartSync
==============
*/
void SD_SetVoiceStartSync(int voiceIndex, bool startSync, float syncPeriodFrames, int meter, int offsetFrames, int delayBeats, int fadeBeats)
{
  __int64 v7; 
  sd_voice *v10; 
  signed __int32 v11[8]; 
  __int64 v12; 

  v7 = voiceIndex;
  if ( !g_sd.voices[voiceIndex] )
  {
    LODWORD(v12) = voiceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 826, ASSERT_TYPE_ASSERT, "( ( g_sd.voices[voiceIndex] ) )", "( voiceIndex ) = %i", v12) )
      __debugbreak();
  }
  v10 = g_sd.voices[v7];
  v10->syncStart = startSync;
  v10->syncStartFrameOffset = offsetFrames;
  v10->syncStartDelayBeats = delayBeats;
  v10->syncStartFadeBeats = fadeBeats;
  v10->syncPeriodFrames = syncPeriodFrames;
  v10->syncMeter = meter;
  _InterlockedOr(v11, 0);
  v10->isSync = startSync;
}

/*
==============
SD_SetVoiceStopSync
==============
*/
void SD_SetVoiceStopSync(int voiceIndex, bool stopSync, int delayBeats, int fadeBeats)
{
  sd_voice *v7; 
  signed __int32 v8[8]; 

  v7 = g_sd.voices[voiceIndex];
  if ( v7 )
  {
    if ( !v7->isSync && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 856, ASSERT_TYPE_ASSERT, "(voice->isSync)", (const char *)&queryFormat, "voice->isSync") )
      __debugbreak();
    if ( v7->syncPeriodFrames == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 857, ASSERT_TYPE_ASSERT, "(voice->syncPeriodFrames)", (const char *)&queryFormat, "voice->syncPeriodFrames") )
      __debugbreak();
    v7->syncStopBeats = 1;
    v7->syncStopDelayBeats = delayBeats;
    v7->syncStopFadeBeats = fadeBeats;
    _InterlockedOr(v8, 0);
    v7->syncStop = stopSync;
  }
}

/*
==============
SD_SetVoiceSyncVoice
==============
*/
void SD_SetVoiceSyncVoice(int voiceIndexMaster, int voiceIndexSynced)
{
  g_sd.voices[voiceIndexSynced]->syncMaster = g_sd.voices[voiceIndexMaster];
}

/*
==============
SD_Shutdown
==============
*/
void SD_Shutdown(void)
{
  sd_voice **voices; 
  __int64 v1; 

  SD_Sync();
  g_sd.running = 0;
  SD_Sync();
  voices = g_sd.voices;
  v1 = 99i64;
  do
  {
    if ( *voices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 324, ASSERT_TYPE_ASSERT, "(!g_sd.voices[i])", (const char *)&queryFormat, "!g_sd.voices[i]") )
      __debugbreak();
    ++voices;
    --v1;
  }
  while ( v1 );
  SD_VoiceShutdown();
  SD_DecoderShutdown();
  SD_OutputShutdown(0);
  SD_MixShutdown();
  SD_StreamShutdown();
}

/*
==============
SD_StartAlias
==============
*/
char SD_StartAlias(const SndStartAliasInfo *aliasInfo, int voiceIndex, int startMsec)
{
  __int64 v3; 
  unsigned __int64 startFrame; 
  const SndAlias *alias; 
  sd_voice *Cinematic; 
  unsigned int v9; 
  sd_voice *Arcade; 
  const unsigned __int8 *loadedData; 
  unsigned int loadedSize; 
  const SndAlias *v13; 
  sd_voice *Stream; 
  sd_voice *Ram; 
  int adsrIndex; 
  sd_voice *v18; 
  ADSRSetting *ADSRSettingByIndex; 
  unsigned __int64 v20; 
  float v21; 
  float v22; 

  v3 = voiceIndex;
  Sys_ProfBeginNamedEvent(0xFF0000u, "SD_StartAlias");
  if ( g_sd.voices[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 396, ASSERT_TYPE_ASSERT, "(!g_sd.voices[voiceIndex])", (const char *)&queryFormat, "!g_sd.voices[voiceIndex]") )
    __debugbreak();
  startFrame = SND_CalcAndAlignDesiredSampleIndex(startMsec, aliasInfo->assetEntry->frameCount, aliasInfo->assetEntry->frameRate);
  alias = aliasInfo->alias;
  if ( aliasInfo->isCinematic )
  {
    if ( (alias->flags & 0x380u) > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 404, ASSERT_TYPE_ASSERT, "(SND_AssetLoaded( aliasInfo->alias ))", (const char *)&queryFormat, "SND_AssetLoaded( aliasInfo->alias )") )
      __debugbreak();
    Cinematic = SD_VoiceAllocateCinematic(aliasInfo->alias);
    g_sd.voices[v3] = Cinematic;
    if ( !Cinematic )
    {
LABEL_31:
      SND_StopVoice(v3);
      Sys_ProfEndNamedEvent();
      return 0;
    }
  }
  else
  {
    v9 = alias->flags & 0x380;
    if ( aliasInfo->arcadeAssetIndex == -1 )
    {
      if ( (unsigned int)(v3 - 80) > 0xD )
      {
        if ( v9 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 470, ASSERT_TYPE_ASSERT, "(SND_AssetLoaded( aliasInfo->alias ))", (const char *)&queryFormat, "SND_AssetLoaded( aliasInfo->alias )") )
          __debugbreak();
        Ram = SD_VoiceAllocateRam(aliasInfo->alias, aliasInfo->assetEntry, (const unsigned __int8 *)aliasInfo->loadedData, startFrame);
        g_sd.voices[v3] = Ram;
        if ( !Ram )
          goto LABEL_31;
        if ( !SD_VoiceHasData(Ram) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 488, ASSERT_TYPE_ASSERT, "(SD_VoiceHasData(g_sd.voices[voiceIndex]))", (const char *)&queryFormat, "SD_VoiceHasData(g_sd.voices[voiceIndex])") )
          __debugbreak();
      }
      else
      {
        if ( v9 <= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 430, ASSERT_TYPE_ASSERT, "(SND_AssetStreamed( aliasInfo->alias ))", (const char *)&queryFormat, "SND_AssetStreamed( aliasInfo->alias )") )
          __debugbreak();
        loadedData = NULL;
        loadedSize = 0;
        v13 = aliasInfo->alias;
        if ( (aliasInfo->alias->flags & 0x380) == 512 && !startMsec )
        {
          loadedData = (const unsigned __int8 *)aliasInfo->loadedData;
          if ( loadedData )
          {
            loadedSize = aliasInfo->loadedSize;
          }
          else
          {
            Com_PrintError(9, "Error: Missing primed loaded part: %s", aliasInfo->alias->aliasName);
            v13 = aliasInfo->alias;
            loadedSize = 0;
            loadedData = NULL;
          }
        }
        Stream = SD_VoiceAllocateStream(v13, aliasInfo->assetEntry, (FileStreamFileID)*(_DWORD *)aliasInfo->streamFid, loadedData, loadedSize, startFrame);
        g_sd.voices[v3] = Stream;
        if ( !Stream )
          goto LABEL_31;
      }
    }
    else
    {
      if ( v9 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 417, ASSERT_TYPE_ASSERT, "(SND_AssetLoaded( aliasInfo->alias ))", (const char *)&queryFormat, "SND_AssetLoaded( aliasInfo->alias )") )
        __debugbreak();
      Arcade = SD_VoiceAllocateArcade(aliasInfo->alias, aliasInfo->arcadeAssetIndex);
      g_sd.voices[v3] = Arcade;
      if ( !Arcade )
        goto LABEL_31;
    }
  }
  adsrIndex = aliasInfo->adsrIndex;
  if ( adsrIndex != -1 )
  {
    v18 = g_sd.voices[v3];
    ADSRSettingByIndex = CG_GetADSRSettingByIndex(adsrIndex);
    if ( ADSRSettingByIndex )
    {
      v18->adsrParams.inUse = 1;
      v18->adsrParams.attackLength = ADSRSettingByIndex->attackLength;
      v18->adsrParams.attackCurve = ADSRSettingByIndex->attackCurve;
      v18->adsrParams.decayLength = ADSRSettingByIndex->decayLength;
      v18->adsrParams.decayCurve = ADSRSettingByIndex->decayCurve;
      v18->adsrParams.sustainLength = ADSRSettingByIndex->sustainLength;
      v18->adsrParams.sustainLevel = ADSRSettingByIndex->sustainLevel;
      v18->adsrParams.releaseLength = ADSRSettingByIndex->releaseLength;
      v18->adsrParams.releaseCurve = ADSRSettingByIndex->releaseCurve;
    }
  }
  g_sd.voices[v3]->autoSimId = aliasInfo->autoSimId;
  g_sd.voices[v3]->autoSimStartTimeStamp = aliasInfo->autoSimTimeStamp;
  g_sd.voices[v3]->autoSimStopTimeStamp = 0i64;
  g_sd.voices[v3]->autoSimShotCount = aliasInfo->autoSimShotCount;
  g_sd.voices[v3]->secondaryGroupId = aliasInfo->secondaryGroupId;
  g_sd.voices[v3]->secondaryGroupReady = 1;
  v20 = 0i64;
  v22 = (float)aliasInfo->startDelayUs * 0.0001875;
  v21 = v22;
  if ( v22 >= 9.223372e18 )
  {
    v21 = v22 - 9.223372e18;
    if ( (float)(v22 - 9.223372e18) < 9.223372e18 )
      v20 = 0x8000000000000000ui64;
  }
  g_sd.voices[v3]->startDelayMixFrames = v20 + (unsigned int)(int)v21;
  Sys_ProfEndNamedEvent();
  return 1;
}

/*
==============
SD_StartVoice
==============
*/
void SD_StartVoice(int voice)
{
  sd_voice **v1; 
  sd_voice_param *VoiceParam; 

  v1 = &g_sd.voices[voice];
  if ( *v1 )
  {
    VoiceParam = SD_GetVoiceParam(voice);
    SD_VoiceStart(*v1, VoiceParam);
  }
}

/*
==============
SD_StatFrame
==============
*/
void SD_StatFrame(void)
{
  unsigned int v0; 
  sd_stream_buffer *streamBufferPool; 
  unsigned int v2; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  sd_stream **p_stream; 
  __int64 v7; 

  Sys_ProfBeginNamedEvent(0xFF0000u, "SD_StatFrame");
  v0 = 0;
  streamBufferPool = g_sd_stream_globals.streamBufferPool;
  v2 = 0;
  v3 = 0;
  v4 = 42i64;
  do
  {
    if ( !streamBufferPool->refCount )
      ++v3;
    v5 = v2 + 1;
    if ( !streamBufferPool->filenameHash )
      v5 = v2;
    ++streamBufferPool;
    v2 = v5;
    --v4;
  }
  while ( v4 );
  g_sd_stream_globals.streamBuffersUsed = v5;
  g_sd_stream_globals.streamBuffersFree = v3;
  Sys_ProfEndNamedEvent();
  p_stream = &g_sd.voicePool[0].source.stream;
  v7 = 33i64;
  do
  {
    if ( *((_DWORD *)p_stream - 22) == 2 && *p_stream )
      ++v0;
    if ( *((_DWORD *)p_stream + 244) == 2 && p_stream[133] )
      ++v0;
    if ( *((_DWORD *)p_stream + 510) == 2 && p_stream[266] )
      ++v0;
    if ( *((_DWORD *)p_stream + 776) == 2 && p_stream[399] )
      ++v0;
    if ( *((_DWORD *)p_stream + 1042) == 2 && p_stream[532] )
      ++v0;
    if ( *((_DWORD *)p_stream + 1308) == 2 && p_stream[665] )
      ++v0;
    p_stream += 798;
    --v7;
  }
  while ( v7 );
  g_sd_stream_globals.streamInUse = v0;
}

/*
==============
SD_StopHeldAutoSimVoice
==============
*/
void SD_StopHeldAutoSimVoice(int voicePoolIndex)
{
  __int64 v1; 
  void *retaddr; 

  v1 = voicePoolIndex;
  g_sd.voicePool[v1].stopFadeState = 2;
  g_sd.voicePool[v1].autoSimId = -1;
  g_sd.voicePool[v1].invalidateBuffers = 1;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  g_sd.voiceYearnsToBeFree[voicePoolIndex] = 1;
}

/*
==============
SD_StopVoice
==============
*/
void SD_StopVoice(int voiceIndex)
{
  sd_voice **v1; 
  __int64 v2; 
  void *retaddr; 

  v1 = &g_sd.voices[voiceIndex];
  if ( *v1 )
  {
    v2 = *v1 - g_sd.voicePool;
    if ( !g_sd.voiceParam[v2] )
      g_sd.voicePool[v2].stopFadeState = 2;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    g_sd.voiceYearnsToBeFree[v2] = 1;
    *v1 = NULL;
  }
}

/*
==============
SD_StreamReady
==============
*/
bool SD_StreamReady(int voiceIndex)
{
  sd_voice *v1; 

  v1 = g_sd.voices[voiceIndex];
  return v1 && v1->source.primed;
}

/*
==============
SD_Sync
==============
*/
void SD_Sync(void)
{
  volatile unsigned int buffersSubmitted; 
  int v1; 
  volatile unsigned int v2; 
  int v3; 
  char *fmt; 
  int v5; 
  volatile unsigned int v6; 
  unsigned int v7; 
  volatile unsigned int v8; 

  buffersSubmitted = g_sd.buffersSubmitted;
  v1 = 500;
  if ( g_PLMSuspending )
    v1 = 5000;
  v2 = g_sd.buffersSubmitted + 3;
  v3 = 0;
  while ( g_sd.buffersSubmitted < v2 && !g_sd.threadExit )
  {
    if ( v3 > 0 && v3 == 100 * (v3 / 100) )
      SD_OutputForceWakeup();
    Sys_Sleep(1);
    if ( ++v3 >= v1 )
    {
      v8 = g_sd.buffersSubmitted;
      v7 = buffersSubmitted + 3;
      v6 = buffersSubmitted;
      v5 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 785, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, (const char *)&stru_1444DBB50, v5, v6, v7, v8) )
        __debugbreak();
      LODWORD(fmt) = g_sd.buffersSubmitted;
      Sys_Error((const ObfuscateErrorText)&stru_1444DBB50, (unsigned int)v1, buffersSubmitted, v2, fmt);
      return;
    }
  }
}

/*
==============
SD_Terminate
==============
*/

void SD_Terminate(void)
{
  SD_ShutdownAD();
}

/*
==============
SD_UnpackVoiceParamPanArgument
==============
*/
void SD_UnpackVoiceParamPanArgument(const int cmdParam, int *outBusIndex, int *outPanMatrixIndex, int *outPanLevelIndex)
{
  *outBusIndex = cmdParam >> 16;
  *outPanMatrixIndex = BYTE1(cmdParam);
  *outPanLevelIndex = (unsigned __int8)cmdParam;
}

/*
==============
SD_UpdateVehicle
==============
*/
void SD_UpdateVehicle(int voiceIndex, float throttle, float brake, float rpm, float velocity, int gear, bool useSimulatorParams)
{
  __int64 v7; 
  sd_voice *v8; 
  sd_vehicle_param *v9; 

  v7 = voiceIndex;
  Sys_ProfBeginNamedEvent(0xFFFF00u, "SD_UpdateVehicle");
  if ( !g_sd.voices[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 604, ASSERT_TYPE_ASSERT, "(g_sd.voices[voiceIndex])", (const char *)&queryFormat, "g_sd.voices[voiceIndex]") )
    __debugbreak();
  v8 = g_sd.voices[v7];
  if ( v8 && SD_VoiceStarted(v8) )
  {
    v9 = SD_VehicleParamAllocate();
    if ( v9 )
    {
      v9->velocity = velocity;
      v9->throttle = throttle;
      v9->brake = brake;
      v9->rpm = rpm;
      v9->gear = gear;
      v9->useSimulatorParams = useSimulatorParams;
      SD_VehicleSetParam(g_sd.voices[v7], v9);
    }
    else
    {
      Com_PrintWarning(9, "ran out of vehicle params for voice %d\n", (unsigned int)v7);
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_UpdateVoice
==============
*/
void SD_UpdateVoice(int voiceIndex, int frametime)
{
  __int64 v2; 
  __int64 v3; 
  sd_voice *v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  sd_voice *v7; 
  double v8; 
  sd_voice *v9; 
  sd_voice_param *VoiceParam; 

  v2 = voiceIndex;
  v3 = voiceIndex;
  v4 = g_sd.voices[voiceIndex];
  if ( v4 )
  {
    v5 = 492 * v3;
    v6 = SD_VoicePosition(v4);
    v7 = g_sd.voices[v2];
    *(_QWORD *)&g_snd.chaninfoUnweightedPriority[v5 - 48618] = v6;
    v8 = SD_VoiceEnvelope(v7);
    v9 = g_sd.voices[v2];
    g_snd.chaninfoUnweightedPriority[v5 - 48616] = *(float *)&v8;
    if ( SD_VoiceStarted(v9) )
    {
      VoiceParam = SD_GetVoiceParam(v2);
      if ( VoiceParam )
        SD_VoiceSetParam(g_sd.voices[v2], VoiceParam);
    }
  }
}

