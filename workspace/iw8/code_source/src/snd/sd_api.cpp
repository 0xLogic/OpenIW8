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
  __int64 v6; 
  float (*reverbPan)[64]; 
  _DWORD *p_frameRate; 
  __int64 v28; 

  _RBP = param;
  MasterCurrent = SND_GetMasterCurrent();
  v3 = 4i64;
  _R8 = &_RBP->masterParams;
  _RDX = MasterCurrent;
  v6 = 4i64;
  do
  {
    _R8 = (SndMaster *)((char *)_R8 + 128);
    __asm { vmovups xmm0, xmmword ptr [rdx] }
    _RDX = (const SndMaster *)((char *)_RDX + 128);
    __asm
    {
      vmovups xmmword ptr [r8-80h], xmm0
      vmovups xmm1, xmmword ptr [rdx-70h]
      vmovups xmmword ptr [r8-70h], xmm1
      vmovups xmm0, xmmword ptr [rdx-60h]
      vmovups xmmword ptr [r8-60h], xmm0
      vmovups xmm1, xmmword ptr [rdx-50h]
      vmovups xmmword ptr [r8-50h], xmm1
      vmovups xmm0, xmmword ptr [rdx-40h]
      vmovups xmmword ptr [r8-40h], xmm0
      vmovups xmm1, xmmword ptr [rdx-30h]
      vmovups xmmword ptr [r8-30h], xmm1
      vmovups xmm0, xmmword ptr [rdx-20h]
      vmovups xmmword ptr [r8-20h], xmm0
      vmovups xmm1, xmmword ptr [rdx-10h]
      vmovups xmmword ptr [r8-10h], xmm1
    }
    --v6;
  }
  while ( v6 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [r8], xmm0
    vmovups xmm1, xmmword ptr [rdx+10h]
    vmovups xmmword ptr [r8+10h], xmm1
    vmovups xmm0, xmmword ptr [rdx+20h]
    vmovups xmmword ptr [r8+20h], xmm0
  }
  reverbPan = _RBP->reverbPan;
  *(_QWORD *)&_R8->name[48] = *(_QWORD *)&_RDX->name[48];
  p_frameRate = (_DWORD *)&_RBP->radverb[0].frameRate;
  *(_DWORD *)&_R8->name[56] = *(_DWORD *)&_RDX->name[56];
  _RBX = sdGlob.currentReverbParams;
  _RDI = _RBP->quadDelay;
  _RSI = _RBP->radverb;
  do
  {
    SND_RvParamsDefault(_RSI);
    SND_DelayParamsDefault(_RDI);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rsi], ymm0
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups ymmword ptr [rsi+20h], ymm1
      vmovups xmm0, xmmword ptr [rbx+40h]
      vmovups xmmword ptr [rsi+40h], xmm0
    }
    p_frameRate[18] = 0;
    _RAX = (char *)reverbPan + (char *)sdGlob.reverbPan - (char *)_RBP->reverbPan;
    *p_frameRate = 1195081728;
    _RCX = reverbPan;
    v28 = 2i64;
    do
    {
      _RCX = (float (*)[64])((char *)_RCX + 128);
      __asm { vmovups xmm0, xmmword ptr [rax] }
      _RAX += 128;
      __asm
      {
        vmovups xmmword ptr [rcx-80h], xmm0
        vmovups xmm1, xmmword ptr [rax-70h]
        vmovups xmmword ptr [rcx-70h], xmm1
        vmovups xmm0, xmmword ptr [rax-60h]
        vmovups xmmword ptr [rcx-60h], xmm0
        vmovups xmm1, xmmword ptr [rax-50h]
        vmovups xmmword ptr [rcx-50h], xmm1
        vmovups xmm0, xmmword ptr [rax-40h]
        vmovups xmmword ptr [rcx-40h], xmm0
        vmovups xmm1, xmmword ptr [rax-30h]
        vmovups xmmword ptr [rcx-30h], xmm1
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmm1, xmmword ptr [rax-10h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v28;
    }
    while ( v28 );
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+50h]
      vmovups ymmword ptr [rdi], ymm0
      vmovups ymm1, ymmword ptr [rbx+70h]
      vmovups ymmword ptr [rdi+20h], ymm1
      vmovups ymm0, ymmword ptr [rbx+90h]
      vmovups ymmword ptr [rdi+40h], ymm0
    }
    ++_RSI;
    _RDI->params[4].hpfCutoff = _RBX->delayParams.params[4].hpfCutoff;
    ++_RBX;
    ++_RDI;
    ++reverbPan;
    p_frameRate += 20;
    --v3;
  }
  while ( v3 );
  _RBP->paused = g_snd.paused;
  _RBP->muted = g_snd.muted;
  *(double *)&_XMM0 = SND_GetBinkVolume();
  __asm { vmovss  dword ptr [rbp+910h], xmm0 }
  _RBP->testTone = g_sd.testTone != 0;
  return _RBP;
}

/*
==============
SD_GetMixParam
==============
*/
sd_mix_master_param *SD_GetMixParam()
{
  const SndMaster *MasterCurrent; 
  __int64 v2; 
  __int64 v4; 
  float (*reverbPan)[64]; 
  _DWORD *p_frameRate; 
  __int64 v27; 

  _RBP = SD_MixParamAllocate();
  MasterCurrent = SND_GetMasterCurrent();
  v2 = 4i64;
  _RDX = &_RBP->masterParams;
  v4 = 4i64;
  _RCX = MasterCurrent;
  do
  {
    _RDX = (SndMaster *)((char *)_RDX + 128);
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    _RCX = (const SndMaster *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmmword ptr [rdx-80h], xmm0
      vmovups xmm1, xmmword ptr [rcx-70h]
      vmovups xmmword ptr [rdx-70h], xmm1
      vmovups xmm0, xmmword ptr [rcx-60h]
      vmovups xmmword ptr [rdx-60h], xmm0
      vmovups xmm1, xmmword ptr [rcx-50h]
      vmovups xmmword ptr [rdx-50h], xmm1
      vmovups xmm0, xmmword ptr [rcx-40h]
      vmovups xmmword ptr [rdx-40h], xmm0
      vmovups xmm1, xmmword ptr [rcx-30h]
      vmovups xmmword ptr [rdx-30h], xmm1
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rdx-20h], xmm0
      vmovups xmm1, xmmword ptr [rcx-10h]
      vmovups xmmword ptr [rdx-10h], xmm1
    }
    --v4;
  }
  while ( v4 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rdx], xmm0
    vmovups xmm1, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rdx+10h], xmm1
    vmovups xmm0, xmmword ptr [rcx+20h]
    vmovups xmmword ptr [rdx+20h], xmm0
  }
  reverbPan = _RBP->reverbPan;
  *(_QWORD *)&_RDX->name[48] = *(_QWORD *)&_RCX->name[48];
  p_frameRate = (_DWORD *)&_RBP->radverb[0].frameRate;
  *(_DWORD *)&_RDX->name[56] = *(_DWORD *)&_RCX->name[56];
  _RBX = sdGlob.currentReverbParams;
  _RDI = _RBP->quadDelay;
  _RSI = _RBP->radverb;
  do
  {
    SND_RvParamsDefault(_RSI);
    SND_DelayParamsDefault(_RDI);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rsi], ymm0
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups ymmword ptr [rsi+20h], ymm1
      vmovups xmm0, xmmword ptr [rbx+40h]
      vmovups xmmword ptr [rsi+40h], xmm0
    }
    p_frameRate[18] = 0;
    _RAX = (char *)reverbPan + (char *)sdGlob.reverbPan - (char *)_RBP->reverbPan;
    *p_frameRate = 1195081728;
    _RCX = reverbPan;
    v27 = 2i64;
    do
    {
      _RCX = (float (*)[64])((char *)_RCX + 128);
      __asm { vmovups xmm0, xmmword ptr [rax] }
      _RAX += 128;
      __asm
      {
        vmovups xmmword ptr [rcx-80h], xmm0
        vmovups xmm1, xmmword ptr [rax-70h]
        vmovups xmmword ptr [rcx-70h], xmm1
        vmovups xmm0, xmmword ptr [rax-60h]
        vmovups xmmword ptr [rcx-60h], xmm0
        vmovups xmm1, xmmword ptr [rax-50h]
        vmovups xmmword ptr [rcx-50h], xmm1
        vmovups xmm0, xmmword ptr [rax-40h]
        vmovups xmmword ptr [rcx-40h], xmm0
        vmovups xmm1, xmmword ptr [rax-30h]
        vmovups xmmword ptr [rcx-30h], xmm1
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmm1, xmmword ptr [rax-10h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v27;
    }
    while ( v27 );
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+50h]
      vmovups ymmword ptr [rdi], ymm0
      vmovups ymm1, ymmword ptr [rbx+70h]
      vmovups ymmword ptr [rdi+20h], ymm1
      vmovups ymm0, ymmword ptr [rbx+90h]
      vmovups ymmword ptr [rdi+40h], ymm0
    }
    ++_RSI;
    _RDI->params[4].hpfCutoff = _RBX->delayParams.params[4].hpfCutoff;
    ++_RBX;
    ++_RDI;
    ++reverbPan;
    p_frameRate += 20;
    --v2;
  }
  while ( v2 );
  _RBP->paused = g_snd.paused;
  _RBP->muted = g_snd.muted;
  *(double *)&_XMM0 = SND_GetBinkVolume();
  __asm { vmovss  dword ptr [rbp+910h], xmm0 }
  _RBP->testTone = g_sd.testTone != 0;
  return _RBP;
}

/*
==============
SD_GetVoiceParam
==============
*/
sd_voice_param *SD_GetVoiceParam(int voiceIndex)
{
  __int64 v2; 
  sd_voice_param *result; 
  int v17; 
  int v19; 
  char v24; 
  sd_voice_src v27; 
  __int64 v28; 
  sd_voice_cmd v29; 
  sd_voice_cmd v33; 
  __int64 v35; 
  int i; 
  int v37; 
  unsigned int v38; 
  sd_voice_src v39; 
  int v40; 
  int v41; 
  __int64 v42; 
  int v43; 
  int v50; 
  __int64 v54; 
  __int64 v56; 
  __int64 v57; 
  int panMatrixIndex; 
  int panMatrixIndexa; 
  int panMatrixIndexb; 
  int panMatrixIndexc; 
  __int64 v63; 

  v2 = voiceIndex;
  result = SD_VoiceParamAllocate();
  _R13 = result;
  if ( result )
  {
    __asm { vmovaps [rsp+88h+var_48], xmm6 }
    if ( SND_IsVoiceFree(v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 125, ASSERT_TYPE_ASSERT, "(!SND_IsVoiceFree(voiceIndex))", (const char *)&queryFormat, "!SND_IsVoiceFree(voiceIndex)") )
      __debugbreak();
    _R14 = &sdGlob.voiceParams[v2];
    _R13->commandBufferCount = 0;
    _R13->panMatrixCount = 0;
    _RCX = &_R14->dspParams;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [r13+14h], ymm0
      vmovups ymm1, ymmword ptr [rcx+20h]
      vmovups ymmword ptr [r13+34h], ymm1
      vmovups xmm0, xmmword ptr [rcx+40h]
      vmovups xmmword ptr [r13+54h], xmm0
      vmovsd  xmm1, qword ptr [rcx+50h]
      vmovsd  qword ptr [r13+64h], xmm1
    }
    _R13->dspParams.hpfCutoff = _R14->dspParams.hpfCutoff;
    v63 = v2;
    _R13->eqBankParamsHash = SND_Hash(&_R14->dspParams, 0x54u);
    _R15 = _R14->panLevels;
    _R13->paused = g_snd.voices[v2].paused;
    _R13->trackEnvelope = g_snd.voices[v2].alias->masterPriority != 0;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+8]
      vminss  xmm1, xmm0, cs:__real@40000000
      vmaxss  xmm2, xmm1, cs:__real@3a83126f
      vmovss  dword ptr [r13+230h], xmm2
      vmovups xmm0, xmmword ptr [r15]
      vmovups xmmword ptr [r13+218h], xmm0
      vmovsd  xmm1, qword ptr [r15+10h]
      vmovsd  qword ptr [r13+228h], xmm1
    }
    v17 = SD_AllocVoiceParamPanMatrix(_R13);
    __asm { vmovups ymm0, ymmword ptr [r14+0Ch] }
    v19 = v17;
    panMatrixIndex = v17;
    _RCX = (__int64)v17 << 7;
    __asm
    {
      vmovups ymmword ptr [rcx+r13+114h], ymm0
      vmovups ymm1, ymmword ptr [r14+2Ch]
      vmovups ymmword ptr [rcx+r13+134h], ymm1
      vmovups ymm0, ymmword ptr [r14+4Ch]
      vmovups ymmword ptr [rcx+r13+154h], ymm0
      vmovups ymm1, ymmword ptr [r14+6Ch]
      vmovups ymmword ptr [rcx+r13+174h], ymm1
    }
    SD_AddVoiceParamCommand(_R13, SD_VOICE_CMD_EQ, 0, SD_VOICE_SRC_TRANSPORT, SD_VOICE_DEST_SCRATCH_1);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+100h]
      vmovss  xmm6, cs:__real@bf800000
      vucomiss xmm0, xmm6
    }
    v27 = SD_VOICE_SRC_SCRATCH_1;
    v28 = 2i64;
    if ( !v24 )
    {
      v29 = SD_VOICE_CMD_HPF_1POLE;
      __asm { vcvttss2si r8d, xmm0; cmdParam }
      if ( _R14->useBiQuad )
        v29 = SD_VOICE_CMD_HPF_BIQUAD;
      SD_AddVoiceParamCommand(_R13, v29, _ER8, SD_VOICE_SRC_SCRATCH_1, SD_VOICE_DEST_SCRATCH_2);
      v27 = SD_VOICE_SRC_SCRATCH_2;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r14+0FCh]
      vucomiss xmm0, xmm6
      vmovaps xmm6, [rsp+88h+var_48]
    }
    if ( !v24 )
    {
      v33 = SD_VOICE_CMD_LPF_1POLE;
      __asm { vcvttss2si r8d, xmm0; cmdParam }
      if ( _R14->useBiQuad )
        v33 = SD_VOICE_CMD_LPF_BIQUAD;
      SD_AddVoiceParamCommand(_R13, v33, _ER8, v27, (sd_voice_dest)v27);
      ++v27;
    }
    v35 = 6i64;
    if ( _R14->bus != SND_BUS_LICENCED && _R14->sendType != SENDTYPE_NONE )
    {
      for ( i = 0; i < 4; ++i )
      {
        v37 = 4;
        if ( _R14->sendType == SENDTYPE_DELAY )
          v37 = 0;
        v38 = i + v37;
        if ( v38 >= 0x11 )
        {
          LODWORD(v57) = 17;
          LODWORD(v56) = v38;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 177, ASSERT_TYPE_ASSERT, "(unsigned)( wetBus ) < (unsigned)( SND_BUS_COUNT )", "wetBus doesn't index SND_BUS_COUNT\n\t%i not in [0, %i)", v56, v57) )
            __debugbreak();
        }
        v39 = SD_VOICE_SRC_SCRATCH_1;
        if ( _R14->onePolePreReverb )
          v39 = v27;
        v40 = SD_PackVoiceParamPanArgument(v38, panMatrixIndex, i + 2);
        SD_AddVoiceParamCommand(_R13, SD_VOICE_CMD_PAN, v40, v39, SD_VOICE_DEST_BUS);
      }
      v19 = panMatrixIndex;
      _R15 = _R14->panLevels;
      v28 = 2i64;
    }
    if ( (unsigned int)(g_snd.voices[v63].params.gpadSound - 2) > 1 )
    {
      v41 = SD_PackVoiceParamPanArgument(_R14->bus, v19, 0);
      SD_AddVoiceParamCommand(_R13, SD_VOICE_CMD_PAN, v41, v27, SD_VOICE_DEST_BUS);
      if ( g_snd.voices[v63].propagationTriggerIndex != 1024 && SND_EntChannelFarReverbBehavior((unsigned __int8)(g_snd.voices[v63].alias->flags >> 10)) == SND_FAR_REVERB_FULL )
      {
        v42 = (unsigned int)(g_snd.voices[v63].propagationTriggerIndex != g_snd.reverbTrigger[2]) + 2;
        v43 = SD_AllocVoiceParamPanMatrix(_R13);
        _RDX = (__int64)v43 << 7;
        _RBX = sdGlob.reverbPan[v42];
        __asm
        {
          vmovups ymm0, ymmword ptr [rbx]
          vmovups ymmword ptr [rdx+r13+114h], ymm0
          vmovups ymm1, ymmword ptr [rbx+20h]
          vmovups ymmword ptr [rdx+r13+134h], ymm1
          vmovups ymm0, ymmword ptr [rbx+40h]
          vmovups ymmword ptr [rdx+r13+154h], ymm0
          vmovups ymm1, ymmword ptr [rbx+60h]
          vmovups ymmword ptr [rdx+r13+174h], ymm1
        }
        v50 = SD_PackVoiceParamPanArgument(_R14->bus, v43, 1);
        SD_AddVoiceParamCommand(_R13, SD_VOICE_CMD_PAN, v50, SD_VOICE_SRC_SCRATCH_1, SD_VOICE_DEST_BUS);
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r13+230h]
      vmovss  [rsp+88h+panMatrixIndex], xmm0
    }
    if ( (panMatrixIndexa & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 230, ASSERT_TYPE_ASSERT, "(!IS_NAN( param->pitch ))", (const char *)&queryFormat, "!IS_NAN( param->pitch )") )
      __debugbreak();
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r15]
        vmovss  [rsp+88h+panMatrixIndex], xmm0
      }
      if ( (panMatrixIndexb & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 234, ASSERT_TYPE_ASSERT, "(!IS_NAN( srcParam->panLevels[panLevelIndex] ))", (const char *)&queryFormat, "!IS_NAN( srcParam->panLevels[panLevelIndex] )") )
        __debugbreak();
      ++_R15;
      --v35;
    }
    while ( v35 );
    _RBX = _R13->panMatrix;
    do
    {
      v54 = 32i64;
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vmovss  [rsp+88h+panMatrixIndex], xmm0
        }
        if ( (panMatrixIndexc & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 241, ASSERT_TYPE_ASSERT, "(!IS_NAN( param->panMatrix[panIndex][i] ))", (const char *)&queryFormat, "!IS_NAN( param->panMatrix[panIndex][i] )") )
          __debugbreak();
        _RBX = (float (*)[32])((char *)_RBX + 4);
        --v54;
      }
      while ( v54 );
      --v28;
    }
    while ( v28 );
    return _R13;
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

void __fastcall SD_SetVoiceStartSync(int voiceIndex, bool startSync, double syncPeriodFrames, int meter, int offsetFrames, int delayBeats, int fadeBeats)
{
  __int64 v8; 
  signed __int32 v14[8]; 
  __int64 v15; 

  v8 = voiceIndex;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !g_sd.voices[voiceIndex] )
  {
    LODWORD(v15) = voiceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 826, ASSERT_TYPE_ASSERT, "( ( g_sd.voices[voiceIndex] ) )", "( voiceIndex ) = %i", v15) )
      __debugbreak();
  }
  _RCX = g_sd.voices[v8];
  _RCX->syncStart = startSync;
  _RCX->syncStartFrameOffset = offsetFrames;
  _RCX->syncStartDelayBeats = delayBeats;
  _RCX->syncStartFadeBeats = fadeBeats;
  __asm { vmovss  dword ptr [rcx+37Ch], xmm6 }
  _RCX->syncMeter = meter;
  _InterlockedOr(v14, 0);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  _RCX->isSync = startSync;
}

/*
==============
SD_SetVoiceStopSync
==============
*/
void SD_SetVoiceStopSync(int voiceIndex, bool stopSync, int delayBeats, int fadeBeats)
{
  bool v9; 
  bool v10; 
  signed __int32 v12[8]; 

  _RBX = g_sd.voices[voiceIndex];
  if ( _RBX )
  {
    v9 = !_RBX->isSync;
    if ( !_RBX->isSync )
    {
      v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 856, ASSERT_TYPE_ASSERT, "(voice->isSync)", (const char *)&queryFormat, "voice->isSync");
      v9 = !v10;
      if ( v10 )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rbx+37Ch]
    }
    if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 857, ASSERT_TYPE_ASSERT, "(voice->syncPeriodFrames)", (const char *)&queryFormat, "voice->syncPeriodFrames") )
      __debugbreak();
    _RBX->syncStopBeats = 1;
    _RBX->syncStopDelayBeats = delayBeats;
    _RBX->syncStopFadeBeats = fadeBeats;
    _InterlockedOr(v12, 0);
    _RBX->syncStop = stopSync;
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
  __int64 v4; 
  unsigned __int64 startFrame; 
  const SndAlias *alias; 
  sd_voice *Cinematic; 
  unsigned int v10; 
  sd_voice *Arcade; 
  const unsigned __int8 *loadedData; 
  unsigned int loadedSize; 
  const SndAlias *v14; 
  sd_voice *Stream; 
  sd_voice *Ram; 
  int adsrIndex; 
  sd_voice *v19; 
  ADSRSetting *ADSRSettingByIndex; 

  v4 = voiceIndex;
  Sys_ProfBeginNamedEvent(0xFF0000u, "SD_StartAlias");
  if ( g_sd.voices[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 396, ASSERT_TYPE_ASSERT, "(!g_sd.voices[voiceIndex])", (const char *)&queryFormat, "!g_sd.voices[voiceIndex]") )
    __debugbreak();
  startFrame = SND_CalcAndAlignDesiredSampleIndex(startMsec, aliasInfo->assetEntry->frameCount, aliasInfo->assetEntry->frameRate);
  alias = aliasInfo->alias;
  if ( aliasInfo->isCinematic )
  {
    if ( (alias->flags & 0x380u) > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 404, ASSERT_TYPE_ASSERT, "(SND_AssetLoaded( aliasInfo->alias ))", (const char *)&queryFormat, "SND_AssetLoaded( aliasInfo->alias )") )
      __debugbreak();
    Cinematic = SD_VoiceAllocateCinematic(aliasInfo->alias);
    g_sd.voices[v4] = Cinematic;
    if ( !Cinematic )
    {
LABEL_31:
      SND_StopVoice(v4);
      Sys_ProfEndNamedEvent();
      return 0;
    }
  }
  else
  {
    v10 = alias->flags & 0x380;
    if ( aliasInfo->arcadeAssetIndex == -1 )
    {
      if ( (unsigned int)(v4 - 80) > 0xD )
      {
        if ( v10 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 470, ASSERT_TYPE_ASSERT, "(SND_AssetLoaded( aliasInfo->alias ))", (const char *)&queryFormat, "SND_AssetLoaded( aliasInfo->alias )") )
          __debugbreak();
        Ram = SD_VoiceAllocateRam(aliasInfo->alias, aliasInfo->assetEntry, (const unsigned __int8 *)aliasInfo->loadedData, startFrame);
        g_sd.voices[v4] = Ram;
        if ( !Ram )
          goto LABEL_31;
        if ( !SD_VoiceHasData(Ram) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 488, ASSERT_TYPE_ASSERT, "(SD_VoiceHasData(g_sd.voices[voiceIndex]))", (const char *)&queryFormat, "SD_VoiceHasData(g_sd.voices[voiceIndex])") )
          __debugbreak();
      }
      else
      {
        if ( v10 <= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 430, ASSERT_TYPE_ASSERT, "(SND_AssetStreamed( aliasInfo->alias ))", (const char *)&queryFormat, "SND_AssetStreamed( aliasInfo->alias )") )
          __debugbreak();
        loadedData = NULL;
        loadedSize = 0;
        v14 = aliasInfo->alias;
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
            v14 = aliasInfo->alias;
            loadedSize = 0;
            loadedData = NULL;
          }
        }
        Stream = SD_VoiceAllocateStream(v14, aliasInfo->assetEntry, (FileStreamFileID)*(_DWORD *)aliasInfo->streamFid, loadedData, loadedSize, startFrame);
        g_sd.voices[v4] = Stream;
        if ( !Stream )
          goto LABEL_31;
      }
    }
    else
    {
      if ( v10 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 417, ASSERT_TYPE_ASSERT, "(SND_AssetLoaded( aliasInfo->alias ))", (const char *)&queryFormat, "SND_AssetLoaded( aliasInfo->alias )") )
        __debugbreak();
      Arcade = SD_VoiceAllocateArcade(aliasInfo->alias, aliasInfo->arcadeAssetIndex);
      g_sd.voices[v4] = Arcade;
      if ( !Arcade )
        goto LABEL_31;
    }
  }
  adsrIndex = aliasInfo->adsrIndex;
  if ( adsrIndex != -1 )
  {
    v19 = g_sd.voices[v4];
    ADSRSettingByIndex = CG_GetADSRSettingByIndex(adsrIndex);
    if ( ADSRSettingByIndex )
    {
      v19->adsrParams.inUse = 1;
      v19->adsrParams.attackLength = ADSRSettingByIndex->attackLength;
      v19->adsrParams.attackCurve = ADSRSettingByIndex->attackCurve;
      v19->adsrParams.decayLength = ADSRSettingByIndex->decayLength;
      v19->adsrParams.decayCurve = ADSRSettingByIndex->decayCurve;
      v19->adsrParams.sustainLength = ADSRSettingByIndex->sustainLength;
      v19->adsrParams.sustainLevel = ADSRSettingByIndex->sustainLevel;
      v19->adsrParams.releaseLength = ADSRSettingByIndex->releaseLength;
      v19->adsrParams.releaseCurve = ADSRSettingByIndex->releaseCurve;
    }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@5f000000
    vxorps  xmm0, xmm0, xmm0
  }
  g_sd.voices[v4]->autoSimId = aliasInfo->autoSimId;
  g_sd.voices[v4]->autoSimStartTimeStamp = aliasInfo->autoSimTimeStamp;
  g_sd.voices[v4]->autoSimStopTimeStamp = 0i64;
  g_sd.voices[v4]->autoSimShotCount = aliasInfo->autoSimShotCount;
  g_sd.voices[v4]->secondaryGroupId = aliasInfo->secondaryGroupId;
  g_sd.voices[v4]->secondaryGroupReady = 1;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+44h]
    vmulss  xmm1, xmm0, cs:__real@39449ba6
    vcomiss xmm1, xmm2
    vsubss  xmm1, xmm1, xmm2
    vcomiss xmm1, xmm2
    vcvttss2si rcx, xmm1
  }
  g_sd.voices[v4]->startDelayMixFrames = _RCX;
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

void __fastcall SD_UpdateVehicle(int voiceIndex, double throttle, double brake, double rpm, float velocity, int gear, bool useSimulatorParams)
{
  __int64 v10; 
  sd_voice *v14; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  v10 = voiceIndex;
  __asm
  {
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  Sys_ProfBeginNamedEvent(0xFFFF00u, "SD_UpdateVehicle");
  if ( !g_sd.voices[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_api.cpp", 604, ASSERT_TYPE_ASSERT, "(g_sd.voices[voiceIndex])", (const char *)&queryFormat, "g_sd.voices[voiceIndex]") )
    __debugbreak();
  v14 = g_sd.voices[v10];
  if ( v14 && SD_VoiceStarted(v14) )
  {
    _RAX = SD_VehicleParamAllocate();
    if ( _RAX )
    {
      __asm
      {
        vmovss  xmm0, [rsp+68h+velocity]
        vmovss  dword ptr [rax+1Ch], xmm0
        vmovss  dword ptr [rax+10h], xmm8
        vmovss  dword ptr [rax+14h], xmm7
        vmovss  dword ptr [rax+18h], xmm6
      }
      _RAX->gear = gear;
      _RAX->useSimulatorParams = useSimulatorParams;
      SD_VehicleSetParam(g_sd.voices[v10], _RAX);
    }
    else
    {
      Com_PrintWarning(9, "ran out of vehicle params for voice %d\n", (unsigned int)v10);
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
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
  __int64 v3; 
  __int64 v5; 
  sd_voice *v6; 
  unsigned __int64 v8; 
  sd_voice *v9; 
  sd_voice *v10; 
  sd_voice_param *VoiceParam; 

  v3 = voiceIndex;
  _R14 = 0x140000000ui64;
  v5 = voiceIndex;
  v6 = g_sd.voices[voiceIndex];
  if ( v6 )
  {
    _RBX = 492 * v5;
    v8 = SD_VoicePosition(v6);
    v9 = g_sd.voices[v3];
    *(_QWORD *)&g_snd.chaninfoUnweightedPriority[_RBX - 48618] = v8;
    *(double *)&_XMM0 = SD_VoiceEnvelope(v9);
    v10 = g_sd.voices[v3];
    __asm { vmovss  dword ptr [rbx+r14+15C6C420h], xmm0 }
    if ( SD_VoiceStarted(v10) )
    {
      VoiceParam = SD_GetVoiceParam(v3);
      if ( VoiceParam )
        SD_VoiceSetParam(g_sd.voices[v3], VoiceParam);
    }
  }
}

