/*
==============
SD_VoiceState
==============
*/

sd_voice_state __fastcall SD_VoiceState(sd_voice *voice)
{
  return ?SD_VoiceState@@YA?AW4sd_voice_state@@PEAUsd_voice@@@Z(voice);
}

/*
==============
SD_VoiceStart
==============
*/

void __fastcall SD_VoiceStart(sd_voice *voice, sd_voice_param *param)
{
  ?SD_VoiceStart@@YAXPEAUsd_voice@@PEAUsd_voice_param@@@Z(voice, param);
}

/*
==============
SD_SyncStart
==============
*/

void __fastcall SD_SyncStart(sd_voice *voice, sd_voice *master)
{
  ?SD_SyncStart@@YAXPEAUsd_voice@@0@Z(voice, master);
}

/*
==============
SD_VoiceParamFree
==============
*/

void __fastcall SD_VoiceParamFree(sd_voice_param *p)
{
  ?SD_VoiceParamFree@@YAXPEAUsd_voice_param@@@Z(p);
}

/*
==============
SD_VoiceFrameFreed
==============
*/

void SD_VoiceFrameFreed(void)
{
  ?SD_VoiceFrameFreed@@YAXXZ();
}

/*
==============
SD_VoiceStarted
==============
*/

bool __fastcall SD_VoiceStarted(sd_voice *voice)
{
  return ?SD_VoiceStarted@@YA_NPEAUsd_voice@@@Z(voice);
}

/*
==============
SD_VoiceDone
==============
*/

bool __fastcall SD_VoiceDone(sd_voice *voice)
{
  return ?SD_VoiceDone@@YA_NPEAUsd_voice@@@Z(voice);
}

/*
==============
SD_VoiceHasData
==============
*/

bool __fastcall SD_VoiceHasData(sd_voice *voice)
{
  return ?SD_VoiceHasData@@YA_NPEAUsd_voice@@@Z(voice);
}

/*
==============
SD_VoiceEnvelope
==============
*/

double __fastcall SD_VoiceEnvelope(sd_voice *voice)
{
  double result; 

  *(float *)&result = ?SD_VoiceEnvelope@@YAMPEAUsd_voice@@@Z(voice);
  return result;
}

/*
==============
SD_VehicleParamFree
==============
*/

void __fastcall SD_VehicleParamFree(sd_vehicle_param *p)
{
  ?SD_VehicleParamFree@@YAXPEAUsd_vehicle_param@@@Z(p);
}

/*
==============
SD_VoiceSetParam
==============
*/

void __fastcall SD_VoiceSetParam(sd_voice *voice, sd_voice_param *param)
{
  ?SD_VoiceSetParam@@YAXPEAUsd_voice@@PEAUsd_voice_param@@@Z(voice, param);
}

/*
==============
SD_DecoderUpdate
==============
*/

void __fastcall SD_DecoderUpdate(sd_decoder *decoder)
{
  ?SD_DecoderUpdate@@YAXPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_VoiceInit
==============
*/

void SD_VoiceInit(void)
{
  ?SD_VoiceInit@@YAXXZ();
}

/*
==============
SD_VoiceShutdown
==============
*/

void SD_VoiceShutdown(void)
{
  ?SD_VoiceShutdown@@YAXXZ();
}

/*
==============
SD_VoiceAllocateRam
==============
*/

sd_voice *__fastcall SD_VoiceAllocateRam(const SndAlias *alias, const SndAssetBankEntry *entry, const unsigned __int8 *data, unsigned __int64 startFrame)
{
  return ?SD_VoiceAllocateRam@@YAPEAUsd_voice@@PEBUSndAlias@@PEBUSndAssetBankEntry@@PEBE_K@Z(alias, entry, data, startFrame);
}

/*
==============
SD_SecondaryUpdate
==============
*/

void SD_SecondaryUpdate(void)
{
  ?SD_SecondaryUpdate@@YAXXZ();
}

/*
==============
SD_VoiceAllocate
==============
*/

sd_voice *__fastcall SD_VoiceAllocate()
{
  return ?SD_VoiceAllocate@@YAPEAUsd_voice@@XZ();
}

/*
==============
SD_VoiceParamAllocate
==============
*/

sd_voice_param *__fastcall SD_VoiceParamAllocate()
{
  return ?SD_VoiceParamAllocate@@YAPEAUsd_voice_param@@XZ();
}

/*
==============
SD_VoiceAllocateCinematic
==============
*/

sd_voice *__fastcall SD_VoiceAllocateCinematic(const SndAlias *alias)
{
  return ?SD_VoiceAllocateCinematic@@YAPEAUsd_voice@@PEBUSndAlias@@@Z(alias);
}

/*
==============
SD_VehicleParamAllocate
==============
*/

sd_vehicle_param *__fastcall SD_VehicleParamAllocate()
{
  return ?SD_VehicleParamAllocate@@YAPEAUsd_vehicle_param@@XZ();
}

/*
==============
SD_SyncUpdate
==============
*/

void SD_SyncUpdate(void)
{
  ?SD_SyncUpdate@@YAXXZ();
}

/*
==============
SD_VoiceAllocateArcade
==============
*/

sd_voice *__fastcall SD_VoiceAllocateArcade(const SndAlias *alias, int arcadeIndex)
{
  return ?SD_VoiceAllocateArcade@@YAPEAUsd_voice@@PEBUSndAlias@@H@Z(alias, arcadeIndex);
}

/*
==============
SD_VoicePosition
==============
*/

unsigned __int64 __fastcall SD_VoicePosition(sd_voice *voice)
{
  return ?SD_VoicePosition@@YA_KPEAUsd_voice@@@Z(voice);
}

/*
==============
SD_VoiceStarted
==============
*/

bool __fastcall SD_VoiceStarted(int voiceIndex)
{
  return ?SD_VoiceStarted@@YA_NH@Z(voiceIndex);
}

/*
==============
SD_VehicleSetParam
==============
*/

void __fastcall SD_VehicleSetParam(sd_voice *voice, sd_vehicle_param *param)
{
  ?SD_VehicleSetParam@@YAXPEAUsd_voice@@PEAUsd_vehicle_param@@@Z(voice, param);
}

/*
==============
SD_ADSRInterp
==============
*/

double __fastcall SD_ADSRInterp(const ADSRCurve curve, const float start, const float end, const float t)
{
  double result; 

  *(float *)&result = ?SD_ADSRInterp@@YAMW4ADSRCurve@@MMM@Z(curve, start, end, t);
  return result;
}

/*
==============
SD_VoiceFrameActive
==============
*/

void SD_VoiceFrameActive(void)
{
  ?SD_VoiceFrameActive@@YAXXZ();
}

/*
==============
SD_VoiceAllocateStream
==============
*/

sd_voice *__fastcall SD_VoiceAllocateStream(const SndAlias *alias, const SndAssetBankEntry *entry, FileStreamFileID fid, const unsigned __int8 *primeData, unsigned int primeSize, unsigned __int64 startFrame)
{
  return ?SD_VoiceAllocateStream@@YAPEAUsd_voice@@PEBUSndAlias@@PEBUSndAssetBankEntry@@W4FileStreamFileID@@PEBEI_K@Z(alias, entry, fid, primeData, primeSize, startFrame);
}

/*
==============
SD_SyncStop
==============
*/

void __fastcall SD_SyncStop(sd_voice *voice, sd_voice *master)
{
  ?SD_SyncStop@@YAXPEAUsd_voice@@0@Z(voice, master);
}

/*
==============
SD_ADSRInterp
==============
*/

float __fastcall SD_ADSRInterp(const ADSRCurve curve, double start, double end, double t)
{
  __int32 v14; 
  __int32 v15; 
  __int32 v16; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vmovaps [rsp+58h+var_48], xmm9
    vmovaps [rsp+58h+var_58], xmm10
    vmovss  xmm0, cs:__real@3f800000
    vmovaps xmm10, xmm1
    vmovaps xmm7, xmm3
    vmovaps xmm9, xmm2
    vsubss  xmm8, xmm0, xmm3
  }
  v14 = curve - 1;
  if ( !v14 )
  {
    __asm { vmulss  xmm5, xmm9, cs:__real@40400000 }
    goto LABEL_11;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    __asm { vmulss  xmm5, xmm10, cs:__real@40400000 }
LABEL_11:
    __asm
    {
      vmulss  xmm2, xmm8, xmm8
      vmulss  xmm0, xmm2, xmm8
      vmulss  xmm3, xmm0, xmm10
      vmulss  xmm1, xmm5, xmm7
      vmulss  xmm2, xmm1, xmm2
      vmulss  xmm6, xmm7, xmm7
      vmulss  xmm0, xmm5, xmm6
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm1, xmm0, xmm8
      vmulss  xmm2, xmm6, xmm7
      vmulss  xmm0, xmm2, xmm9
      vaddss  xmm3, xmm4, xmm1
    }
    goto LABEL_12;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    __asm
    {
      vmulss  xmm1, xmm10, cs:__real@40400000
      vmulss  xmm2, xmm8, xmm8
      vmulss  xmm0, xmm2, xmm8
      vmulss  xmm3, xmm0, xmm10
      vmulss  xmm0, xmm1, xmm7
      vmulss  xmm1, xmm9, cs:__real@40400000
    }
    goto LABEL_7;
  }
  if ( v16 == 1 )
  {
    __asm
    {
      vmulss  xmm1, xmm9, cs:__real@40400000
      vmulss  xmm2, xmm8, xmm8
      vmulss  xmm0, xmm2, xmm8
      vmulss  xmm3, xmm0, xmm10
      vmulss  xmm0, xmm1, xmm7
      vmulss  xmm1, xmm10, cs:__real@40400000
    }
LABEL_7:
    __asm
    {
      vmulss  xmm2, xmm0, xmm2
      vmulss  xmm5, xmm7, xmm7
      vmulss  xmm0, xmm1, xmm5
      vaddss  xmm3, xmm3, xmm2
      vmulss  xmm2, xmm0, xmm8
      vmulss  xmm1, xmm5, xmm7
      vaddss  xmm3, xmm3, xmm2
      vmulss  xmm0, xmm1, xmm9
    }
LABEL_12:
    __asm { vaddss  xmm0, xmm3, xmm0 }
    goto LABEL_13;
  }
  __asm
  {
    vmulss  xmm1, xmm8, xmm1
    vmulss  xmm0, xmm2, xmm3
    vaddss  xmm0, xmm1, xmm0
  }
LABEL_13:
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
    vmovaps xmm9, [rsp+58h+var_48]
    vmovaps xmm10, [rsp+58h+var_58]
  }
  return *(float *)&_XMM0;
}

/*
==============
SD_DecoderUpdate
==============
*/
void SD_DecoderUpdate(sd_decoder *decoder)
{
  sd_source *source; 

  if ( decoder )
  {
    SD_DecoderMixThreadInit(decoder);
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 603, ASSERT_TYPE_ASSERT, "(decoder)", (const char *)&queryFormat, "decoder") )
  {
    __debugbreak();
  }
  SD_SourceUpdate(decoder->source, decoder);
  if ( SD_SourceError(decoder->source) || decoder->error )
  {
    decoder->error = 1;
  }
  else
  {
    source = decoder->source;
    if ( source->primed && SD_DecoderOutputPump(decoder, source, &decoder->output) && !decoder->output.count )
      decoder->done = 1;
  }
}

/*
==============
SD_InitVoice
==============
*/
void SD_InitVoice(int poolIndex)
{
  __int64 v1; 
  sd_voice *v2; 

  v1 = poolIndex;
  v2 = &g_sd.voicePool[poolIndex];
  if ( g_sd.voiceNewParam[poolIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 140, ASSERT_TYPE_ASSERT, "(!g_sd.voiceNewParam[poolIndex])", (const char *)&queryFormat, "!g_sd.voiceNewParam[poolIndex]") )
    __debugbreak();
  if ( g_sd.voiceParam[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 141, ASSERT_TYPE_ASSERT, "(!g_sd.voiceParam[poolIndex])", (const char *)&queryFormat, "!g_sd.voiceParam[poolIndex]") )
    __debugbreak();
  if ( g_sd.vehicleNewParam[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 143, ASSERT_TYPE_ASSERT, "(!g_sd.vehicleNewParam[poolIndex])", (const char *)&queryFormat, "!g_sd.vehicleNewParam[poolIndex]") )
    __debugbreak();
  if ( v2->decoder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 145, ASSERT_TYPE_ASSERT, "(!voice->decoder)", (const char *)&queryFormat, "!voice->decoder") )
    __debugbreak();
  g_sd.voiceYearnsToBeFree[v1] = 0;
  *(_WORD *)&v2->done = 0;
  v2->position = 0i64;
  v2->playedPosition = 0i64;
  v2->invalidateBuffers = 0;
  v2->needsDecoder = 0;
  v2->decoderAllocCount = 0;
  v2->adsr.inUse = 0;
  v2->adsrParams.inUse = 0;
  v2->needsInit = 1;
  memset_0(&v2->eqBank, 0, 0x138ui64);
  v2->isSync = 0;
  *(_QWORD *)&v2->syncStopFadeBeats = 0i64;
  v2->syncPeriodFrames = 0.0;
  v2->syncStart = 0;
  *(_QWORD *)&v2->syncStartDelayBeats = 0i64;
  *(_QWORD *)&v2->syncStopBeats = 0i64;
  *(_QWORD *)&v2->syncStartDelayFrames = 0i64;
  v2->syncStop = 0;
  *(_QWORD *)&v2->syncStopDelayFrames = 0i64;
  *(_QWORD *)&v2->syncStartDelayFramesDecoded = 0i64;
  *(_QWORD *)&v2->syncStopDelayFramesDecoded = 0i64;
  v2->syncEndScale = 1.0;
  v2->secondaryMaster = NULL;
  v2->secondaryGroupReady = 0;
  *(_QWORD *)&v2->secondaryGroupId = 0i64;
  v2->secondaryCheckMaxCount = 0;
  *(_DWORD *)&v2->isCinematic = 0;
  v2->startDelayMixFrames = 0i64;
  v2->envelope = 0.0;
}

/*
==============
SD_SecondaryUpdate
==============
*/
void SD_SecondaryUpdate(void)
{
  sd_voice_param **voiceParam; 
  sd_voice *voicePool; 
  int v2; 
  const sd_voice_param *v3; 
  unsigned int secondaryGroupId; 
  sd_voice_param **v5; 
  sd_voice *v6; 
  const sd_voice_param *v7; 

  voiceParam = g_sd.voiceParam;
  voicePool = g_sd.voicePool;
  do
  {
    v2 = 0;
    if ( voicePool->state == SD_VOICE_ACTIVE && !voicePool->playedPosition && !voicePool->secondaryGroupReady )
    {
      v3 = *voiceParam;
      if ( *voiceParam )
      {
        if ( !v3->paused )
        {
          if ( voicePool->secondaryGroupSize > 1 )
          {
            if ( voicePool->secondaryCheckMaxCount <= 200 )
            {
              secondaryGroupId = voicePool->secondaryGroupId;
              v5 = g_sd.voiceParam;
              v6 = g_sd.voicePool;
              do
              {
                v7 = *v5;
                if ( v6->state == SD_VOICE_ACTIVE && v6->secondaryGroupId == secondaryGroupId && v6 != voicePool )
                {
                  v6->secondaryMaster = voicePool;
                  if ( SD_SecondaryVoiceIsReady(v6, v7) )
                    ++v2;
                }
                ++v6;
                ++v5;
              }
              while ( (__int64)v6 < (__int64)g_sd.voiceYearnsToBeFree );
              if ( v2 == voicePool->secondaryGroupSize - 1 )
                voicePool->secondaryGroupReady = SD_SecondaryVoiceIsReady(voicePool, v3);
            }
            else
            {
              Com_PrintWarning(9, "Voice sync timed-out while waiting for secondary voices to become ready. (alias %s)\n", voicePool->source.alias->aliasName);
              voicePool->secondaryGroupReady = 1;
            }
          }
          else
          {
            voicePool->secondaryGroupReady = 1;
          }
          ++voicePool->secondaryCheckMaxCount;
        }
      }
    }
    ++voicePool;
    ++voiceParam;
  }
  while ( (__int64)voicePool < (__int64)g_sd.voiceYearnsToBeFree );
}

/*
==============
SD_SyncStart
==============
*/
void SD_SyncStart(sd_voice *voice, sd_voice *master)
{
  int v6; 
  sd_voice *v7; 
  int syncMeter; 
  int v22; 
  int i; 
  int syncStartFrameOffset; 
  int v29; 
  char v30; 

  v6 = 0;
  __asm { vmovaps [rsp+58h+var_28], xmm7 }
  v7 = voice;
  if ( master )
  {
    __asm { vmovss  xmm7, dword ptr [rdx+37Ch] }
    syncMeter = master->syncMeter;
  }
  else
  {
    __asm { vmovss  xmm7, dword ptr [rcx+37Ch] }
    syncMeter = voice->syncMeter;
  }
  voice->syncStartDelayFrames = 0;
  if ( voice->syncStart && master )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmovaps [rsp+58h+var_18], xmm6
      vmovaps [rsp+58h+var_38], xmm8
      vmulss  xmm8, xmm0, xmm7
      vcvttss2si eax, xmm8
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, rcx
      vmovaps xmm0, xmm6; X
      vmovaps xmm1, xmm7; Y
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vcvttss2si eax, xmm0
      vdivss  xmm0, xmm6, xmm7
      vmovaps xmm6, [rsp+58h+var_18]
      vcvttss2si r8d, xmm7
    }
    v22 = _ER8 - _EAX;
    __asm { vcvttss2si eax, xmm0 }
    for ( i = _EAX % syncMeter + 1; i % syncMeter; ++v6 )
      ++i;
    syncStartFrameOffset = v7->syncStartFrameOffset;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vmulss  xmm1, xmm0, xmm7
      vcvttss2si ecx, xmm1
    }
    v29 = v22 + _ECX;
    v7->syncStartDelayFrames = v29;
    if ( v29 < syncStartFrameOffset )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vsubss  xmm1, xmm8, xmm0
        vcvttss2si eax, xmm1
      }
      v7->syncStartDelayFrames = v29 + _EAX;
      __asm { vmovaps xmm8, [rsp+58h+var_38] }
      v30 = 0;
    }
    else
    {
      v7->syncStartDelayFrames = v29 - syncStartFrameOffset;
      v30 = 0;
      __asm { vmovaps xmm8, [rsp+58h+var_38] }
    }
  }
  else
  {
    v30 = 1;
  }
  v7->syncSoftStart = v30;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+38Ch]
    vmulss  xmm1, xmm0, xmm7
  }
  v7->syncTimestamp = g_sd.buffersSubmitted;
  __asm { vcvttss2si eax, xmm1 }
  v7->syncStartDelayFrames += _EAX;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+390h]
    vmulss  xmm1, xmm0, xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vcvttss2si eax, xmm1
  }
  v7->syncStartFadeFrames = _EAX;
}

/*
==============
SD_SyncStop
==============
*/
void SD_SyncStop(sd_voice *voice, sd_voice *master)
{
  sd_voice *v5; 
  int v7; 
  int syncMeter; 
  int i; 
  int syncStopDelayFrames; 

  __asm { vmovaps [rsp+48h+var_28], xmm7 }
  v5 = voice;
  if ( master )
    __asm { vmovss  xmm7, dword ptr [rdx+37Ch] }
  else
    __asm { vmovss  xmm7, dword ptr [rcx+37Ch] }
  v7 = 0;
  syncMeter = master->syncMeter;
  voice->syncStopDelayFrames = 0;
  if ( voice->syncStop )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm1, xmm0, xmm7
      vcvttss2si eax, xmm1
      vmovaps [rsp+48h+var_18], xmm6
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, rcx
      vmovaps xmm0, xmm6; X
      vmovaps xmm1, xmm7; Y
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vcvttss2si eax, xmm0
      vdivss  xmm0, xmm6, xmm7
      vmovaps xmm6, [rsp+48h+var_18]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vcvttss2si eax, xmm0
      vsubss  xmm2, xmm7, xmm1
      vcvttss2si r8d, xmm2
    }
    for ( i = _EAX % syncMeter + 1; i % syncMeter; ++v7 )
      ++i;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vmulss  xmm1, xmm0, xmm7
      vcvttss2si ecx, xmm1
    }
    syncStopDelayFrames = _ER8 + _ECX;
  }
  else
  {
    Com_PrintWarning(9, "SOUND: %d sync stopping without master %p\n", g_sd.buffersSubmitted, voice);
    syncStopDelayFrames = v5->syncStopDelayFrames;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+39Ch]
    vmulss  xmm1, xmm0, xmm7
    vcvttss2si eax, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+3A0h]
    vmulss  xmm1, xmm0, xmm7
    vmovaps xmm7, [rsp+48h+var_28]
  }
  v5->syncStopDelayFrames = syncStopDelayFrames + _EAX;
  __asm { vcvttss2si eax, xmm1 }
  v5->syncStopFadeFrames = _EAX;
}

/*
==============
SD_SyncUpdate
==============
*/

void __fastcall SD_SyncUpdate(double _XMM0_8)
{
  int v4; 
  sd_voice **syncVoices; 
  int v6; 
  sd_voice_param **voiceParam; 
  __int64 v8; 
  unsigned int *p_secondaryGroupId; 
  __int64 v10; 
  sd_voice *v11; 
  __int64 i; 
  sd_voice *v13; 
  __int64 j; 
  sd_voice *v15; 
  __int64 k; 
  sd_voice *v17; 
  char v18; 
  int v19; 
  __int64 v20; 
  int syncMeter; 
  int v34; 
  int v35; 
  int m; 
  int syncStartFrameOffset; 
  int v43; 
  char v44; 
  __int64 n; 
  sd_voice_sync syncState; 
  int v61; 
  int v74; 
  int ii; 
  __int64 jj; 
  int v92; 
  int v96; 

  v4 = 0;
  syncVoices = g_sd.syncVoices;
  v6 = 0;
  memset_0(g_sd.syncVoices, 0, sizeof(g_sd.syncVoices));
  voiceParam = g_sd.voiceParam;
  v8 = 198i64;
  p_secondaryGroupId = &g_sd.voicePool[0].secondaryGroupId;
  do
  {
    if ( *(p_secondaryGroupId - 258) == 2 && *((_BYTE *)p_secondaryGroupId - 144) && *voiceParam && !(*voiceParam)->paused && (!*p_secondaryGroupId || ((v10 = *((_QWORD *)p_secondaryGroupId + 2)) == 0 || *(_BYTE *)(v10 + 1040)) && ((int)p_secondaryGroupId[1] <= 1 || *((_BYTE *)p_secondaryGroupId + 8))) )
    {
      ++v6;
      *syncVoices++ = (sd_voice *)(p_secondaryGroupId - 258);
    }
    p_secondaryGroupId += 266;
    ++voiceParam;
    --v8;
  }
  while ( v8 );
  v11 = NULL;
  if ( v6 > 0 )
  {
    for ( i = 0i64; i < v6; ++i )
    {
      v13 = g_sd.syncVoices[i];
      if ( !v13->syncMaster && v13->syncState == SD_VOICE_SYNC_ACTIVE && v13->source.entry->looping )
        v11 = g_sd.syncVoices[i];
    }
    if ( !v11 )
    {
      for ( j = 0i64; j < v6; ++j )
      {
        v15 = g_sd.syncVoices[j];
        if ( !v15->syncMaster && v15->syncState == SD_VOICE_SYNC_ACTIVE )
          v11 = g_sd.syncVoices[j];
      }
      if ( !v11 )
      {
        for ( k = 0i64; k < v6; ++k )
        {
          v17 = g_sd.syncVoices[k];
          if ( !v17->syncMaster && v17->syncState == SD_VOICE_SYNC_STOP_DELAY )
            v11 = g_sd.syncVoices[k];
        }
      }
    }
  }
  v18 = 0;
  v96 = 0;
  v19 = 0;
  if ( v6 > 0 )
  {
    v20 = 0i64;
    __asm
    {
      vmovaps [rsp+78h+var_38], xmm6
      vmovaps [rsp+78h+var_48], xmm7
      vmovaps [rsp+78h+var_58], xmm8
    }
    do
    {
      _RBX = g_sd.syncVoices[v20];
      if ( _RBX->syncState == SD_VOICE_SYNC_INIT )
      {
        _RCX = v11;
        v18 = 1;
        if ( _RBX->syncMaster )
          _RCX = _RBX->syncMaster;
        if ( _RCX )
        {
          __asm { vmovss  xmm7, dword ptr [rcx+37Ch] }
          syncMeter = _RCX->syncMeter;
        }
        else
        {
          __asm { vmovss  xmm7, dword ptr [rbx+37Ch] }
          syncMeter = _RBX->syncMeter;
        }
        _RBX->syncStartDelayFrames = 0;
        if ( _RBX->syncStart && _RCX )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, r14d
            vmulss  xmm8, xmm0, xmm7
            vcvttss2si eax, xmm8
            vxorps  xmm6, xmm6, xmm6
            vcvtsi2ss xmm6, xmm6, rcx
            vmovaps xmm0, xmm6; X
            vmovaps xmm1, xmm7; Y
          }
          *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vcvttss2si eax, xmm0
            vcvttss2si r9d, xmm7
          }
          v34 = _ER9 - _EAX;
          v35 = 0;
          __asm
          {
            vdivss  xmm0, xmm6, xmm7
            vcvttss2si eax, xmm0
          }
          _RBX->syncStartDelayFrames = v34;
          for ( m = _EAX % syncMeter + 1; m % syncMeter; ++v35 )
            ++m;
          syncStartFrameOffset = _RBX->syncStartFrameOffset;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, r8d
            vmulss  xmm1, xmm0, xmm7
            vcvttss2si ecx, xmm1
          }
          v43 = v34 + _ECX;
          _RBX->syncStartDelayFrames = v43;
          if ( v43 < syncStartFrameOffset )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vsubss  xmm1, xmm8, xmm0
              vcvttss2si eax, xmm1
            }
            _RBX->syncStartDelayFrames = v43 + _EAX;
          }
          else
          {
            _RBX->syncStartDelayFrames = v43 - syncStartFrameOffset;
          }
          v44 = 0;
        }
        else
        {
          v44 = 1;
        }
        _RBX->syncSoftStart = v44;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+38Ch]
          vmulss  xmm1, xmm0, xmm7
        }
        _RBX->syncTimestamp = g_sd.buffersSubmitted;
        __asm { vcvttss2si eax, xmm1 }
        _RBX->syncStartDelayFrames += _EAX;
        ++v96;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+390h]
          vmulss  xmm1, xmm0, xmm7
          vcvttss2si eax, xmm1
        }
        _RBX->syncStartFadeFrames = _EAX;
        _RBX->syncState = SD_VOICE_SYNC_START_DELAY;
      }
      ++v20;
    }
    while ( v20 < v6 );
    __asm { vmovaps xmm8, [rsp+78h+var_58] }
    for ( n = 0i64; n < v6; ++n )
    {
      _RBX = g_sd.syncVoices[n];
      syncState = _RBX->syncState;
      if ( syncState == SD_VOICE_SYNC_ACTIVE )
      {
        if ( _RBX->syncStop )
        {
          _RDX = v11;
          v18 = 1;
          if ( _RBX->syncMaster )
            _RDX = _RBX->syncMaster;
          if ( _RDX )
            __asm { vmovss  xmm7, dword ptr [rdx+37Ch] }
          else
            __asm { vmovss  xmm7, dword ptr [rbx+37Ch] }
          v61 = _RDX->syncMeter;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, r15d
            vmulss  xmm1, xmm0, xmm7
            vcvttss2si eax, xmm1
            vxorps  xmm6, xmm6, xmm6
            vcvtsi2ss xmm6, xmm6, rcx
            vmovaps xmm0, xmm6; X
            vmovaps xmm1, xmm7; Y
          }
          *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vcvttss2si eax, xmm0
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vdivss  xmm0, xmm6, xmm7
            vcvttss2si eax, xmm0
          }
          v74 = 0;
          __asm
          {
            vsubss  xmm2, xmm7, xmm1
            vcvttss2si r9d, xmm2
          }
          _RBX->syncStopDelayFrames = _ER9;
          for ( ii = _EAX % v61 + 1; ii % v61; ++v74 )
            ++ii;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, r8d
            vmulss  xmm1, xmm0, xmm7
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rbx+39Ch]
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm0, xmm7
            vcvttss2si eax, xmm1
          }
          _RBX->syncState = SD_VOICE_SYNC_STOP_DELAY;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rbx+3A0h]
            vmulss  xmm1, xmm0, xmm7
          }
          _RBX->syncStopDelayFrames = _ER9 + _ECX + _EAX;
          __asm { vcvttss2si eax, xmm1 }
          _RBX->syncStopFadeFrames = _EAX;
        }
      }
      else if ( syncState == SD_VOICE_SYNC_START_DELAY && _RBX->syncStop )
      {
        _RBX->done = 1;
      }
    }
    v19 = v96;
    __asm
    {
      vmovaps xmm7, [rsp+78h+var_48]
      vmovaps xmm6, [rsp+78h+var_38]
    }
  }
  if ( v6 > 0 )
  {
    for ( jj = 0i64; jj < v6; ++jj )
    {
      v92 = v4 + 1;
      if ( !g_sd.syncVoices[jj]->syncMaster )
        v92 = v4;
      v4 = v92;
    }
  }
  if ( !v11 && v6 != 1 && v6 != v4 && v18 && v19 != v6 )
    Com_PrintWarning(9, "SOUND sync did not find master but had %d voices\n", (unsigned int)v6);
}

/*
==============
SD_VehicleParamAllocate
==============
*/
sd_vehicle_param *SD_VehicleParamAllocate()
{
  sd_vehicle_param *vehicleParamFreeList; 
  sd_vehicle_param *result; 
  sd_vehicle_param *v2; 

  while ( 1 )
  {
    vehicleParamFreeList = g_sd.vehicleParamFreeList;
    result = g_sd.vehicleParamFreeList;
    if ( !g_sd.vehicleParamFreeList )
      break;
    v2 = g_sd.vehicleParamFreeList;
    if ( v2 == (sd_vehicle_param *)_InterlockedCompareExchange64((volatile signed __int64 *)&g_sd.vehicleParamFreeList, (signed __int64)g_sd.vehicleParamFreeList->next, (signed __int64)g_sd.vehicleParamFreeList) )
    {
      vehicleParamFreeList->state = SD_VOICE_PARAM_ALLOCATED;
      return vehicleParamFreeList;
    }
  }
  return result;
}

/*
==============
SD_VehicleParamFree
==============
*/
void SD_VehicleParamFree(sd_vehicle_param *p)
{
  sd_vehicle_param *vehicleParamFreeList; 

  if ( p == g_sd.vehicleParamFreeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 124, ASSERT_TYPE_ASSERT, "(p != g_sd.vehicleParamFreeList)", (const char *)&queryFormat, "p != g_sd.vehicleParamFreeList") )
    __debugbreak();
  p->state = SD_VOICE_PARAM_FREE;
  do
  {
    vehicleParamFreeList = g_sd.vehicleParamFreeList;
    p->next = g_sd.vehicleParamFreeList;
  }
  while ( vehicleParamFreeList != (sd_vehicle_param *)_InterlockedCompareExchange64((volatile signed __int64 *)&g_sd.vehicleParamFreeList, (signed __int64)p, (signed __int64)vehicleParamFreeList) );
}

/*
==============
SD_VehicleSetParam
==============
*/
void SD_VehicleSetParam(sd_voice *voice, sd_vehicle_param *param)
{
  signed __int64 v3; 
  sd_vehicle_param *v4; 

  v3 = voice - g_sd.voicePool;
  if ( param->state != SD_VOICE_PARAM_ALLOCATED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 485, ASSERT_TYPE_ASSERT, "(param->state == SD_VOICE_PARAM_ALLOCATED)", (const char *)&queryFormat, "param->state == SD_VOICE_PARAM_ALLOCATED") )
    __debugbreak();
  _m_prefetchw(&g_sd.vehicleNewParam[v3]);
  do
    v4 = g_sd.vehicleNewParam[v3];
  while ( v4 != (sd_vehicle_param *)_InterlockedCompareExchange64((volatile signed __int64 *)&g_sd.vehicleNewParam[v3], (signed __int64)param, (signed __int64)v4) );
  if ( v4 )
    SD_VehicleParamFree(v4);
}

/*
==============
SD_VehicleUpdateParam
==============
*/

void __fastcall SD_VehicleUpdateParam(sd_voice *voice, double _XMM1_8)
{
  signed __int64 v5; 
  sd_decoder *decoder; 
  sd_decoder_instance v8; 
  _QWORD *v9; 
  bool v17; 
  CrankcaseAudio::PhysicsSimulator *v20; 
  int gear; 
  CrankcaseAudio::PhysicsOutputParameters result; 
  int v30; 
  int v33; 
  char v36; 
  CrankcaseAudio::PhysicsUpdateParams params; 

  v5 = voice - g_sd.voicePool;
  if ( g_sd.vehicleNewParam[v5] )
  {
    if ( !g_sd.voiceParam[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 507, ASSERT_TYPE_ASSERT, "(g_sd.voiceParam[voiceIndex])", (const char *)&queryFormat, "g_sd.voiceParam[voiceIndex]") )
      __debugbreak();
    _m_prefetchw(&g_sd.vehicleNewParam[v5]);
    do
      _RBX = g_sd.vehicleNewParam[v5];
    while ( _RBX != (sd_vehicle_param *)_InterlockedCompareExchange64((volatile signed __int64 *)&g_sd.vehicleNewParam[v5], 0i64, (signed __int64)_RBX) );
    if ( _RBX )
    {
      decoder = voice->decoder;
      if ( decoder )
      {
        if ( decoder->format == SND_ASSET_FORMAT_REV )
        {
          v8.x360_xma = (struct sd_decoder_360_xma *)decoder->instance;
          if ( v8.x360_xma )
          {
            v9 = (_QWORD *)*((_QWORD *)v8.x360_xma + 514);
            if ( v9 )
            {
              __asm { vmovaps [rsp+88h+var_28], xmm6 }
              if ( !*v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 520, ASSERT_TYPE_ASSERT, "(vehicle->player)", (const char *)&queryFormat, "vehicle->player") )
                __debugbreak();
              if ( g_snd.time == *((_DWORD *)v9 + 4) )
              {
                __asm { vmovss  xmm6, cs:__real@38d1b717 }
              }
              else
              {
                __asm
                {
                  vxorps  xmm1, xmm1, xmm1
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm1, xmm1, eax
                  vcvtsi2ss xmm0, xmm0, ecx
                  vsubss  xmm1, xmm1, xmm0
                  vmulss  xmm6, xmm1, cs:__real@3a83126f
                }
              }
              __asm { vmovss  xmm0, cs:__real@3f800000 }
              *((_DWORD *)v9 + 4) = g_snd.time;
              v17 = !_RBX->useSimulatorParams;
              __asm
              {
                vmovss  [rsp+88h+var_48], xmm0
                vmovss  [rsp+88h+var_34], xmm0
              }
              v36 = 1;
              if ( v17 )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx+18h]
                  vmovss  xmm1, dword ptr [rbx+10h]
                }
                gear = _RBX->gear;
                __asm
                {
                  vmovss  [rsp+88h+var_44], xmm0
                  vmovss  xmm0, dword ptr [rbx+1Ch]
                }
              }
              else
              {
                if ( !v9[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 531, ASSERT_TYPE_ASSERT, "(vehicle->physicsSim)", (const char *)&queryFormat, "vehicle->physicsSim") )
                  __debugbreak();
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx+10h]
                  vmovss  xmm1, dword ptr [rbx+14h]
                }
                v20 = (CrankcaseAudio::PhysicsSimulator *)v9[1];
                __asm
                {
                  vmovaps xmm3, xmm6; deltaTime
                  vmovss  [rsp+88h+params.Throttle], xmm0
                  vmovss  [rsp+88h+params.Break], xmm1
                }
                CrankcaseAudio::PhysicsSimulator::Update(v20, &result, &params, *(float *)&_XMM3);
                __asm
                {
                  vmovss  xmm0, [rsp+88h+result.Rpm]
                  vmovss  xmm1, [rsp+88h+result.Throttle]
                }
                gear = result.Gear;
                __asm
                {
                  vmovss  [rsp+88h+var_44], xmm0
                  vmovss  xmm0, [rsp+88h+result.Velocity]
                }
              }
              __asm
              {
                vmovss  [rsp+88h+var_38], xmm0
                vmovss  [rsp+88h+var_40], xmm1
              }
              v33 = gear;
              __asm { vmovaps xmm2, xmm6 }
              (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v9 + 16i64))(*v9, &v30);
              __asm { vmovaps xmm6, [rsp+88h+var_28] }
            }
          }
        }
      }
      SD_VehicleParamFree(_RBX);
    }
  }
}

/*
==============
SD_VoiceActiveUpdate
==============
*/

void __fastcall SD_VoiceActiveUpdate(sd_voice *voice, double a2, __int64 a3, double _XMM3_8)
{
  unsigned __int64 v9; 
  sd_decoder *v10; 
  char v26; 
  __int64 v29; 
  bool v44; 
  int v45; 
  int v46; 
  int v47; 
  int decayStart; 
  int releaseStart; 
  int end; 
  signed __int32 v83[8]; 

  _RDI = voice;
  v9 = voice - g_sd.voicePool;
  if ( voice->source.primed )
    voice->hasData = 1;
  if ( voice->decodeState == SD_VOICE_DECODE_STATE_DONE )
  {
    _InterlockedOr(v83, 0);
    voice->done = 1;
    return;
  }
  if ( voice->state == SD_VOICE_ACTIVE && voice->isSync && voice->syncState == SD_VOICE_SYNC_DONE )
    goto LABEL_34;
  if ( !voice->needsDecoder || !voice->source.stream && !SD_VoiceStarted(voice) )
    goto LABEL_17;
  if ( g_sd.voiceYearnsToBeFree[v9] )
  {
LABEL_34:
    _RDI->done = 1;
    _RDI->stopFadeState = 2;
    return;
  }
  if ( _RDI->decoder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 776, ASSERT_TYPE_ASSERT, "(!voice->decoder)", (const char *)&queryFormat, "!voice->decoder") )
    __debugbreak();
  v10 = SD_DecoderAllocate(&_RDI->source);
  _RDI->decoder = v10;
  if ( !v10 )
  {
    if ( ++_RDI->decoderAllocCount <= 20 )
      return;
    if ( v9 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v9, "unsigned", v9) )
      __debugbreak();
    Com_PrintWarning(9, "Stopping voice %d due to lack of decoder\n", (unsigned int)v9);
    goto LABEL_34;
  }
  _RDI->needsDecoder = 0;
LABEL_17:
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm8
    vmovaps [rsp+88h+var_28], xmm9
  }
  SD_VoiceUpdateParam(_RDI);
  SD_VehicleUpdateParam(_RDI, a2);
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vxorps  xmm8, xmm8, xmm8
  }
  if ( _RDI->needsInit && _RDI->state == SD_VOICE_ACTIVE )
  {
    _RSI = g_sd.voiceParam[v9];
    if ( _RSI )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+6Ch]
        vmovss  xmm3, cs:__real@473b8000; sampleRate
        vmovaps [rsp+88h+var_38], xmm10
        vmovss  xmm10, cs:__real@bf800000
        vcmpneqss xmm0, xmm1, xmm10
        vblendvps xmm2, xmm8, xmm1, xmm0; freq
        vmovss  xmm1, cs:__real@3e4ccccd; fadetime
      }
      OnePole_Init(&_RDI->onePoleHighPass, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rsi+68h]
        vmovss  xmm0, cs:__real@46bb8000
        vmovss  xmm3, cs:__real@473b8000; sampleRate
        vcmpneqss xmm1, xmm2, xmm10
        vblendvps xmm2, xmm0, xmm2, xmm1; freq
        vmovss  xmm1, cs:__real@3e4ccccd; fadetime
      }
      OnePole_Init(&_RDI->onePoleLowPass, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3_8);
      SND_InitFilter(&_RDI->highPass);
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+6Ch]; freq
        vucomiss xmm1, xmm10
      }
      if ( !v26 )
        SND_ApplyFilterHPFFrequency(&_RDI->highPass, *(const float *)&_XMM1);
      SND_InitFilter(&_RDI->lowPass);
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+68h]; freq
        vucomiss xmm1, xmm10
        vmovaps xmm10, [rsp+88h+var_38]
      }
      if ( !v26 )
        SND_ApplyFilterLPFFrequency(&_RDI->lowPass, *(const float *)&_XMM1);
      SND_InitEQBank(&_RDI->eqBank);
      SND_ApplyEQBankParams(&_RDI->eqBank, &_RSI->dspParams.eqBankParams);
      _RDI->eqBankParamsHash = _RSI->eqBankParamsHash;
      v29 = 2i64;
      _RAX = _RDI->panFilter;
      _RCX = (char *)_RSI - (char *)_RDI->panFilter;
      do
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx+rax+114h]
          vmovups ymmword ptr [rax], ymm0
          vmovups ymm1, ymmword ptr [rcx+rax+134h]
          vmovups ymmword ptr [rax+20h], ymm1
          vmovups ymm0, ymmword ptr [rcx+rax+154h]
          vmovups ymmword ptr [rax+40h], ymm0
          vmovups ymm1, ymmword ptr [rcx+rax+174h]
          vmovups ymmword ptr [rax+60h], ymm1
        }
        ++_RAX;
        --v29;
      }
      while ( v29 );
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi+218h]
        vmovups xmmword ptr [rdi+314h], xmm0
        vmovsd  xmm1, qword ptr [rsi+228h]
        vmovsd  qword ptr [rdi+324h], xmm1
      }
      _RDI->trackEnvelope = _RSI->trackEnvelope;
      _RDI->position = _RDI->source.startFrame;
      _RDI->needsInit = v29;
      if ( _RDI->adsrParams.inUse == (_BYTE)v29 )
      {
        _RDI->adsr.inUse = 0;
        _RDI->adsr.currentVolume = 1.0;
        _RDI->adsr.decayStart = 0x7FFFFFFF;
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+358h]
          vmulss  xmm1, xmm0, cs:__real@447a0000
          vcvttss2si ecx, xmm1
          vmovss  xmm1, cs:__real@c47a0000
          vmulss  xmm0, xmm1, dword ptr [rdi+360h]
          vcvttss2si eax, xmm0
          vmovss  xmm0, dword ptr [rdi+374h]
        }
        _RDI->adsr.decayStart = _ECX;
        v44 = _ECX < _EAX;
        v45 = _ECX - _EAX;
        __asm { vcomiss xmm0, xmm8 }
        _RDI->adsr.inUse = 1;
        _RDI->adsr.sustainStart = v45;
        if ( v44 )
        {
          v46 = 0x7FFFFFFF;
          v47 = 0x7FFFFFFF;
        }
        else
        {
          __asm
          {
            vmulss  xmm0, xmm0, xmm1
            vmulss  xmm1, xmm1, dword ptr [rdi+368h]
            vcvttss2si eax, xmm0
          }
          v47 = v45 - _EAX;
          __asm { vcvttss2si eax, xmm1 }
          v46 = v47 - _EAX;
        }
        _RDI->adsr.releaseStart = v47;
        _RDI->adsr.end = v46;
        __asm
        {
          vcmpltss xmm0, xmm8, dword ptr [rdi+358h]
          vblendvps xmm0, xmm9, xmm8, xmm0
        }
        _RDI->adsr.sustainLevel = _RDI->adsrParams.sustainLevel;
        __asm { vmovss  dword ptr [rdi+350h], xmm0 }
      }
    }
  }
  if ( _RDI->adsr.inUse )
  {
    decayStart = _RDI->adsr.decayStart;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, qword ptr [rdi+8]
      vmulss  xmm1, xmm0, cs:__real@3caaaaab
      vcvttss2si eax, xmm1
    }
    if ( decayStart == 0x7FFFFFFF )
    {
      _RDI->adsr.currentVolume = 1.0;
    }
    else if ( _EAX >= decayStart )
    {
      if ( _EAX >= _RDI->adsr.sustainStart )
      {
        releaseStart = _RDI->adsr.releaseStart;
        if ( _EAX < releaseStart || releaseStart == 0x7FFFFFFF )
        {
          _RDI->adsr.currentVolume = _RDI->adsr.sustainLevel;
        }
        else
        {
          end = _RDI->adsr.end;
          if ( _EAX >= end )
          {
            __asm { vucomiss xmm8, dword ptr [rdi+350h] }
            if ( _EAX == end )
              _RDI->done = 1;
            else
              _RDI->adsr.currentVolume = 0.0;
          }
          else
          {
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, eax
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, edx
              vdivss  xmm3, xmm1, xmm0; t
              vmovss  xmm1, dword ptr [rdi+34Ch]; start
              vmovaps xmm2, xmm8; end
            }
            *(double *)&_XMM0 = SD_ADSRInterp((const ADSRCurve)_RDI->adsrParams.releaseCurve, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3);
            __asm { vmovss  dword ptr [rdi+350h], xmm0 }
          }
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+34Ch]; end
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, edx
          vdivss  xmm3, xmm1, xmm0; t
          vmovaps xmm1, xmm9; start
        }
        *(double *)&_XMM0 = SD_ADSRInterp((const ADSRCurve)_RDI->adsrParams.decayCurve, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3);
        __asm { vmovss  dword ptr [rdi+350h], xmm0 }
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm3, xmm3, xmm3
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vcvtsi2ss xmm3, xmm3, eax
        vdivss  xmm3, xmm3, xmm0; t
        vmovaps xmm2, xmm9; end
        vmovaps xmm1, xmm8; start
      }
      *(double *)&_XMM0 = SD_ADSRInterp((const ADSRCurve)_RDI->adsrParams.attackCurve, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3);
      __asm { vmovss  dword ptr [rdi+350h], xmm0 }
    }
  }
  __asm
  {
    vmovaps xmm8, [rsp+88h+var_18]
    vmovaps xmm9, [rsp+88h+var_28]
  }
}

/*
==============
SD_VoiceAllocate
==============
*/
sd_voice *SD_VoiceAllocate()
{
  int v0; 
  sd_voice *i; 

  v0 = 0;
  for ( i = g_sd.voicePool; ; ++i )
  {
    if ( i->state == SD_VOICE_FREE )
    {
      if ( ((unsigned __int8)i & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", i) )
        __debugbreak();
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)i, 1, 0) )
        break;
    }
    if ( (unsigned int)++v0 >= 0xC6 )
    {
      if ( !Com_ErrorEntered() )
        Com_PrintWarning(9, "ran out of voices for playing sounds\n");
      return 0i64;
    }
  }
  SD_InitVoice(v0);
  if ( ((unsigned __int8)&g_sd.voiceInUse & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd.voiceInUse) )
    __debugbreak();
  _InterlockedIncrement(&g_sd.voiceInUse);
  return i;
}

/*
==============
SD_VoiceAllocateArcade
==============
*/
sd_voice *SD_VoiceAllocateArcade(const SndAlias *alias, int arcadeIndex)
{
  sd_voice *v4; 
  sd_voice *v5; 
  sd_voice *result; 
  signed __int32 v7[8]; 

  if ( (unsigned int)arcadeIndex > 1 )
    return 0i64;
  v4 = SD_VoiceAllocate();
  v5 = v4;
  if ( !v4 )
    return 0i64;
  if ( v4->source.stream )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 244, ASSERT_TYPE_ASSERT, "(voice->source.stream == 0)", (const char *)&queryFormat, "voice->source.stream == 0") )
      __debugbreak();
  }
  v5->source.alias = alias;
  *(_QWORD *)&v5->source.loaded.dataSize = 0i64;
  *(_QWORD *)&v5->source.loaded.seekTableSize = 0i64;
  *(_QWORD *)&v5->source.loaded.pcmDataSize = 0i64;
  v5->isArcade0 = arcadeIndex == 0;
  v5->source.entry = NULL;
  v5->source.loaded.data = NULL;
  v5->isArcade1 = arcadeIndex == 1;
  v5->source.loaded.seekTable = NULL;
  v5->source.loaded.pcmData = NULL;
  v5->source.stream = NULL;
  *(_WORD *)&v5->source.primed = 1;
  v5->source.eos = 0;
  *(_QWORD *)&v5->channelCount = 2i64;
  v5->starvedThisFrame = 0;
  v5->source.startFrame = 0i64;
  v5->decoder = NULL;
  v5->needsDecoder = 0;
  v5->hasData = 0;
  v5->stopFadeState = 0;
  v5->isCinematic = 0;
  _InterlockedOr(v7, 0);
  v5->decodeState = SD_VOICE_DECODE_NORMAL;
  result = v5;
  v5->state = SD_VOICE_ACTIVE;
  return result;
}

/*
==============
SD_VoiceAllocateCinematic
==============
*/
sd_voice *SD_VoiceAllocateCinematic(const SndAlias *alias)
{
  sd_voice *result; 
  sd_voice *v3; 
  signed __int32 v4[8]; 

  result = SD_VoiceAllocate();
  v3 = result;
  if ( result )
  {
    if ( result->source.stream )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 297, ASSERT_TYPE_ASSERT, "(voice->source.stream == 0)", (const char *)&queryFormat, "voice->source.stream == 0") )
        __debugbreak();
    }
    v3->source.alias = alias;
    *(_QWORD *)&v3->source.loaded.dataSize = 0i64;
    *(_QWORD *)&v3->source.loaded.seekTableSize = 0i64;
    *(_QWORD *)&v3->source.loaded.pcmDataSize = 0i64;
    v3->source.entry = NULL;
    v3->source.loaded.data = NULL;
    v3->source.loaded.seekTable = NULL;
    v3->source.loaded.pcmData = NULL;
    v3->source.stream = NULL;
    v3->source.eos = 0;
    v3->starvedThisFrame = 0;
    v3->source.startFrame = 0i64;
    v3->decoder = NULL;
    v3->needsDecoder = 0;
    v3->hasData = 0;
    v3->stopFadeState = 0;
    *(_WORD *)&v3->source.primed = 1;
    *(_QWORD *)&v3->channelCount = 2i64;
    v3->isCinematic = 1;
    _InterlockedOr(v4, 0);
    v3->decodeState = SD_VOICE_DECODE_NORMAL;
    result = v3;
    v3->state = SD_VOICE_ACTIVE;
  }
  return result;
}

/*
==============
SD_VoiceAllocateRam
==============
*/
sd_voice *SD_VoiceAllocateRam(const SndAlias *alias, const SndAssetBankEntry *entry, const unsigned __int8 *data, unsigned __int64 startFrame)
{
  sd_voice *result; 
  sd_voice *v9; 
  unsigned int ChannelCount; 
  const unsigned __int8 *v11; 
  signed __int32 v12[8]; 
  __int64 v13; 

  result = SD_VoiceAllocate();
  v9 = result;
  if ( result )
  {
    ChannelCount = SND_AssetBankGetChannelCount(entry);
    if ( v9->source.stream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 354, ASSERT_TYPE_ASSERT, "(voice->source.stream == 0)", (const char *)&queryFormat, "voice->source.stream == 0") )
      __debugbreak();
    if ( !entry->frameRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 355, ASSERT_TYPE_ASSERT, "(entry->frameRate)", (const char *)&queryFormat, "entry->frameRate") )
      __debugbreak();
    *(_QWORD *)&v9->source.loaded.dataSize = 0i64;
    v9->source.loaded.data = NULL;
    v9->source.loaded.seekTable = NULL;
    *(_QWORD *)&v9->source.loaded.seekTableSize = 0i64;
    v9->source.loaded.pcmData = NULL;
    *(_QWORD *)&v9->source.loaded.pcmDataSize = 0i64;
    if ( ChannelCount - 1 > 1 )
    {
      LODWORD(v13) = ChannelCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 358, ASSERT_TYPE_ASSERT, "( ( channelCount == 1 || channelCount == 2 ) )", "( channelCount ) = %i", v13) )
        __debugbreak();
    }
    v9->source.entry = entry;
    v9->source.loaded.dataSize = entry->size;
    v11 = &data[entry->seekTableSize];
    v9->source.loaded.seekTable = data;
    v9->source.loaded.data = v11;
    v9->source.loaded.seekTableSize = entry->seekTableSize;
    v9->source.loaded.pcmData = &data[entry->seekTableSize + entry->size];
    v9->source.loaded.pcmDataSize = entry->hybridPcmSize;
    v9->source.stream = NULL;
    v9->source.eos = 0;
    *(_QWORD *)&v9->starveCount = 0i64;
    v9->stopFadeState = 0;
    v9->source.alias = alias;
    *(_WORD *)&v9->source.primed = 1;
    v9->channelCount = ChannelCount;
    v9->source.startFrame = startFrame;
    v9->needsDecoder = 1;
    v9->hasData = 1;
    _InterlockedOr(v12, 0);
    v9->decodeState = SD_VOICE_DECODE_NORMAL;
    result = v9;
    v9->state = SD_VOICE_ACTIVE;
  }
  return result;
}

/*
==============
SD_VoiceAllocateStream
==============
*/
sd_voice *SD_VoiceAllocateStream(const SndAlias *alias, const SndAssetBankEntry *entry, FileStreamFileID fid, const unsigned __int8 *primeData, unsigned int primeSize, unsigned __int64 startFrame)
{
  sd_voice *result; 
  sd_voice *v11; 
  signed __int32 v12[8]; 

  result = SD_VoiceAllocate();
  v11 = result;
  if ( result )
  {
    SD_SourceInitStream(&result->source, alias->assetFileName, entry, fid, primeData, primeSize);
    if ( v11->source.stream )
    {
      if ( !entry->frameRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 419, ASSERT_TYPE_ASSERT, "(entry->frameRate)", (const char *)&queryFormat, "entry->frameRate") )
        __debugbreak();
      v11->source.alias = alias;
      v11->source.entry = entry;
      v11->channelCount = entry->channelCount;
      v11->source.startFrame = startFrame;
      v11->stopFadeState = 0;
      v11->needsDecoder = 1;
      _InterlockedOr(v12, 0);
      v11->decodeState = SD_VOICE_DECODE_NORMAL;
      result = v11;
      v11->state = SD_VOICE_ACTIVE;
    }
    else
    {
      _InterlockedOr(v12, 0);
      v11->state = SD_VOICE_FREED;
      return 0i64;
    }
  }
  return result;
}

/*
==============
SD_VoiceDone
==============
*/
bool SD_VoiceDone(sd_voice *voice)
{
  return voice->done;
}

/*
==============
SD_VoiceEnvelope
==============
*/
float SD_VoiceEnvelope(sd_voice *voice)
{
  __asm { vmovss  xmm0, dword ptr [rcx+18h] }
  return *(float *)&_XMM0;
}

/*
==============
SD_VoiceFrameActive
==============
*/
void SD_VoiceFrameActive(__int64 a1, double a2, __int64 a3, double a4)
{
  sd_voice_param **voiceParam; 
  sd_voice *voicePool; 
  int v6; 
  const sd_voice_param *v7; 
  unsigned int secondaryGroupId; 
  sd_voice_param **v9; 
  sd_voice *v10; 
  const sd_voice_param *v11; 
  __int64 v12; 
  unsigned int **p_decoder; 
  __int64 v14; 
  unsigned int *v15; 

  Sys_ProfBeginNamedEvent(0xFFu, "SD_VoiceFrameActive");
  voiceParam = g_sd.voiceParam;
  voicePool = g_sd.voicePool;
  do
  {
    v6 = 0;
    if ( voicePool->state == SD_VOICE_ACTIVE && !voicePool->playedPosition && !voicePool->secondaryGroupReady )
    {
      v7 = *voiceParam;
      if ( *voiceParam )
      {
        if ( !v7->paused )
        {
          if ( voicePool->secondaryGroupSize > 1 )
          {
            if ( voicePool->secondaryCheckMaxCount <= 200 )
            {
              secondaryGroupId = voicePool->secondaryGroupId;
              v9 = g_sd.voiceParam;
              v10 = g_sd.voicePool;
              do
              {
                v11 = *v9;
                if ( v10->state == SD_VOICE_ACTIVE && v10->secondaryGroupId == secondaryGroupId && v10 != voicePool )
                {
                  v10->secondaryMaster = voicePool;
                  if ( SD_SecondaryVoiceIsReady(v10, v11) )
                    ++v6;
                }
                ++v10;
                ++v9;
              }
              while ( (__int64)v10 < (__int64)g_sd.voiceYearnsToBeFree );
              if ( v6 == voicePool->secondaryGroupSize - 1 )
                voicePool->secondaryGroupReady = SD_SecondaryVoiceIsReady(voicePool, v7);
            }
            else
            {
              Com_PrintWarning(9, "Voice sync timed-out while waiting for secondary voices to become ready. (alias %s)\n", voicePool->source.alias->aliasName);
              voicePool->secondaryGroupReady = 1;
            }
          }
          else
          {
            voicePool->secondaryGroupReady = 1;
          }
          ++voicePool->secondaryCheckMaxCount;
        }
      }
    }
    ++voicePool;
    ++voiceParam;
  }
  while ( (__int64)voicePool < (__int64)g_sd.voiceYearnsToBeFree );
  SD_SyncUpdate();
  p_decoder = (unsigned int **)&g_sd.voicePool[0].decoder;
  *(_WORD *)&g_sd.hasCinematicSound = 0;
  v14 = 198i64;
  g_sd.hasArcadeSound1 = 0;
  do
  {
    if ( *((_DWORD *)p_decoder - 30) == 2 )
    {
      v15 = *p_decoder;
      if ( *p_decoder )
      {
        if ( !*((_BYTE *)v15 + 4356) && !*(p_decoder - 4) && !*((_BYTE *)p_decoder - 22) )
        {
          if ( *((_BYTE *)v15 + 40) )
          {
            Com_Printf(9, "DUMPING WACKY VOICE:\n");
            Com_Printf(9, "state: %d\n", *((unsigned int *)p_decoder - 30));
            Com_Printf(9, "done: %d\n", *((unsigned __int8 *)p_decoder - 116));
            Com_Printf(9, "hasData: %d\n", *((unsigned __int8 *)p_decoder - 115));
            Com_Printf(9, "position: %zd\n", (size_t)*(p_decoder - 14));
            Com_Printf(9, "source.stream: %p\n", *(p_decoder - 4));
            Com_Printf(9, "source.primed: %d\n", *((unsigned __int8 *)p_decoder - 24));
            Com_Printf(9, "source.looping: %d\n", *((unsigned __int8 *)*(p_decoder - 11) + 33));
            Com_Printf(9, "source.error: %d\n", *((unsigned __int8 *)p_decoder - 23));
            Com_Printf(9, "source.eos: %d\n", *((unsigned __int8 *)p_decoder - 22));
            Com_Printf(9, "decoder->state: %d\n", **p_decoder);
            Com_Printf(9, "decoder->lastBuffer: %p\n", *((const void **)*p_decoder + 3));
            Com_Printf(9, "decoder->framesDecoded: %zu\n", *((_QWORD *)*p_decoder + 4));
            Com_Printf(9, "decoder->eos: %d\n", *((unsigned __int8 *)*p_decoder + 40));
            Com_Printf(9, "decoderOutput.head:%d\n", (*p_decoder)[1056]);
            Com_Printf(9, "decoderOutput.count: %d\n", (*p_decoder)[1057]);
            if ( !*((_BYTE *)p_decoder - 22) && *((_BYTE *)*p_decoder + 40) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 1254, ASSERT_TYPE_ASSERT, "(!(!voice->source.eos && voice->decoder->eos))", (const char *)&queryFormat, "!(!voice->source.eos && voice->decoder->eos)") )
              __debugbreak();
          }
        }
      }
      SD_VoiceActiveUpdate((sd_voice *)(p_decoder - 15), a2, v12, a4);
      if ( *p_decoder && !*(p_decoder - 4) && !*((_BYTE *)p_decoder - 22) && *((_BYTE *)*p_decoder + 40) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 1261, ASSERT_TYPE_ASSERT, "(!(!voice->source.eos && voice->decoder->eos))", (const char *)&queryFormat, "!(!voice->source.eos && voice->decoder->eos)") )
        __debugbreak();
    }
    p_decoder += 133;
    --v14;
  }
  while ( v14 );
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_VoiceFrameFreed
==============
*/
void SD_VoiceFrameFreed(__int64 a1, double a2)
{
  bool *p_done; 
  bool *voiceYearnsToBeFree; 
  __int64 v4; 
  sd_voice_param **voiceParam; 
  sd_voice *v6; 
  __int64 v7; 
  sd_voice_param *v8; 
  sd_decoder *v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  unsigned int v14; 
  int *p_secondaryGroupSize; 
  signed __int32 v16[8]; 

  Sys_ProfBeginNamedEvent(0xFFu, "SD_VoiceFrameFreed");
  p_done = &g_sd.voicePool[0].done;
  voiceYearnsToBeFree = g_sd.voiceYearnsToBeFree;
  v4 = 198i64;
  voiceParam = g_sd.voiceParam;
  do
  {
    if ( *voiceYearnsToBeFree && (v6 = (sd_voice *)(p_done - 4), *((_DWORD *)p_done - 1) == 2) && (*((int *)p_done + 202) >= 2 || *p_done || *voiceParam && (*voiceParam)->paused) )
    {
      v6->state = SD_VOICE_FREED;
    }
    else
    {
      v6 = (sd_voice *)(p_done - 4);
      if ( *((_DWORD *)p_done - 1) != 3 )
        goto LABEL_29;
    }
    v7 = (p_done - &g_sd.voicePool[0].done) / 1064;
    SD_VoiceUpdateParam(v6);
    SD_VehicleUpdateParam(v6, a2);
    v8 = g_sd.voiceParam[v7];
    if ( v8 )
      SD_VoiceParamFree(v8);
    g_sd.voiceParam[v7] = NULL;
    v9 = *(sd_decoder **)(p_done + 116);
    if ( v9 )
    {
      SD_DecoderFree(v9);
      *(_QWORD *)(p_done + 116) = 0i64;
    }
    if ( p_done[524] )
    {
      v10 = *(_QWORD *)(p_done + 84);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 344);
        if ( v11 )
        {
          *(_BYTE *)(v11 + 307) = 1;
          v10 = *(_QWORD *)(p_done + 84);
        }
        v12 = *(_QWORD *)(v10 + 352);
        if ( v12 )
          *(_BYTE *)(v12 + 307) = 1;
      }
    }
    SD_SourceShutdown((sd_source *)(p_done + 28));
    g_sd.voiceYearnsToBeFree[v7] = 0;
    v13 = *((_DWORD *)p_done + 257);
    if ( *((int *)p_done + 258) > 1 )
    {
      v14 = 0;
      p_secondaryGroupSize = &g_sd.voicePool[0].secondaryGroupSize;
      do
      {
        if ( *(p_secondaryGroupSize - 1) == v13 )
          --*p_secondaryGroupSize;
        ++v14;
        p_secondaryGroupSize += 266;
      }
      while ( v14 < 0xC6 );
    }
    v6->secondaryGroupId = 0;
    _InterlockedOr(v16, 0);
    v6->state = SD_VOICE_FREE;
    if ( ((unsigned __int8)&g_sd.voiceInUse & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd.voiceInUse) )
      __debugbreak();
    _InterlockedDecrement(&g_sd.voiceInUse);
LABEL_29:
    p_done += 1064;
    ++voiceYearnsToBeFree;
    ++voiceParam;
    --v4;
  }
  while ( v4 );
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_VoiceHasData
==============
*/
bool SD_VoiceHasData(sd_voice *voice)
{
  return voice->hasData;
}

/*
==============
SD_VoiceInit
==============
*/
void SD_VoiceInit(void)
{
  volatile sd_voice_param **p_next; 
  __int64 v1; 
  sd_voice_param *v2; 

  memset_0(g_sd.voiceParamPool, 0, sizeof(g_sd.voiceParamPool));
  memset_0(g_sd.voicePool, 0, sizeof(g_sd.voicePool));
  p_next = &g_sd.voiceParamPool[0].next;
  v1 = 395i64;
  v2 = &g_sd.voiceParamPool[1];
  do
  {
    *p_next = v2;
    p_next += 71;
    ++v2;
    --v1;
  }
  while ( v1 );
  g_sd.voiceParamFreeList = g_sd.voiceParamPool;
  g_sd.vehicleParamPool[0].next = &g_sd.vehicleParamPool[1];
  g_sd.voiceParamPool[395].next = NULL;
  g_sd.vehicleParamPool[1].next = &g_sd.vehicleParamPool[2];
  g_sd.vehicleParamPool[2].next = &g_sd.vehicleParamPool[3];
  g_sd.vehicleParamPool[3].next = &g_sd.vehicleParamPool[4];
  g_sd.vehicleParamPool[4].next = &g_sd.vehicleParamPool[5];
  g_sd.vehicleParamPool[5].next = &g_sd.vehicleParamPool[6];
  g_sd.vehicleParamPool[6].next = &g_sd.vehicleParamPool[7];
  g_sd.vehicleParamPool[7].next = &g_sd.vehicleParamPool[8];
  g_sd.vehicleParamPool[8].next = &g_sd.vehicleParamPool[9];
  g_sd.vehicleParamFreeList = g_sd.vehicleParamPool;
  g_sd.vehicleParamPool[9].next = NULL;
}

/*
==============
SD_VoiceParamAllocate
==============
*/
sd_voice_param *SD_VoiceParamAllocate()
{
  sd_voice_param *voiceParamFreeList; 
  sd_voice_param *result; 
  sd_voice_param *v2; 

  while ( 1 )
  {
    voiceParamFreeList = g_sd.voiceParamFreeList;
    result = g_sd.voiceParamFreeList;
    if ( !g_sd.voiceParamFreeList )
      break;
    v2 = g_sd.voiceParamFreeList;
    if ( v2 == (sd_voice_param *)_InterlockedCompareExchange64((volatile signed __int64 *)&g_sd.voiceParamFreeList, (signed __int64)g_sd.voiceParamFreeList->next, (signed __int64)g_sd.voiceParamFreeList) )
    {
      voiceParamFreeList->state = SD_VOICE_PARAM_ALLOCATED;
      if ( ((unsigned __int8)&g_sd.voiceParamInUse & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd.voiceParamInUse) )
        __debugbreak();
      _InterlockedIncrement(&g_sd.voiceParamInUse);
      return voiceParamFreeList;
    }
  }
  return result;
}

/*
==============
SD_VoiceParamFree
==============
*/
void SD_VoiceParamFree(sd_voice_param *p)
{
  sd_voice_param *voiceParamFreeList; 

  if ( p == g_sd.voiceParamFreeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 89, ASSERT_TYPE_ASSERT, "(p != g_sd.voiceParamFreeList)", (const char *)&queryFormat, "p != g_sd.voiceParamFreeList") )
    __debugbreak();
  p->state = SD_VOICE_PARAM_FREE;
  do
  {
    voiceParamFreeList = g_sd.voiceParamFreeList;
    p->next = g_sd.voiceParamFreeList;
  }
  while ( voiceParamFreeList != (sd_voice_param *)_InterlockedCompareExchange64((volatile signed __int64 *)&g_sd.voiceParamFreeList, (signed __int64)p, (signed __int64)voiceParamFreeList) );
  if ( ((unsigned __int8)&g_sd.voiceParamInUse & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd.voiceParamInUse) )
    __debugbreak();
  _InterlockedDecrement(&g_sd.voiceParamInUse);
}

/*
==============
SD_VoicePosition
==============
*/
unsigned __int64 SD_VoicePosition(sd_voice *voice)
{
  return voice->playedPosition + voice->source.startFrame;
}

/*
==============
SD_VoiceSetParam
==============
*/
void SD_VoiceSetParam(sd_voice *voice, sd_voice_param *param)
{
  signed __int64 v3; 
  sd_voice_param *v4; 

  v3 = voice - g_sd.voicePool;
  if ( param->state != SD_VOICE_PARAM_ALLOCATED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 437, ASSERT_TYPE_ASSERT, "(param->state == SD_VOICE_PARAM_ALLOCATED)", (const char *)&queryFormat, "param->state == SD_VOICE_PARAM_ALLOCATED") )
    __debugbreak();
  if ( !g_sd.voiceParam[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 438, ASSERT_TYPE_ASSERT, "(g_sd.voiceParam[voiceIndex])", (const char *)&queryFormat, "g_sd.voiceParam[voiceIndex]") )
    __debugbreak();
  _m_prefetchw(&g_sd.voiceNewParam[v3]);
  do
    v4 = g_sd.voiceNewParam[v3];
  while ( v4 != (sd_voice_param *)_InterlockedCompareExchange64((volatile signed __int64 *)&g_sd.voiceNewParam[v3], (signed __int64)param, (signed __int64)v4) );
  if ( v4 )
    SD_VoiceParamFree(v4);
}

/*
==============
SD_VoiceShutdown
==============
*/
void SD_VoiceShutdown(void)
{
  __int64 v0; 
  int *p_stopFadeState; 
  __int64 v2; 
  sd_voice *voicePool; 
  sd_voice_param *voiceParamPool; 
  __int64 v5; 
  sd_vehicle_param *vehicleParamPool; 
  __int64 v7; 

  v0 = 198i64;
  p_stopFadeState = &g_sd.voicePool[0].stopFadeState;
  v2 = 198i64;
  do
  {
    p_stopFadeState[55] = 0;
    *p_stopFadeState = 2;
    p_stopFadeState += 266;
    --v2;
  }
  while ( v2 );
  SD_VoiceFrameFreed();
  voicePool = g_sd.voicePool;
  do
  {
    if ( voicePool->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 50, ASSERT_TYPE_ASSERT, "(g_sd.voicePool[i].state == SD_VOICE_FREE)", (const char *)&queryFormat, "g_sd.voicePool[i].state == SD_VOICE_FREE") )
      __debugbreak();
    ++voicePool;
    --v0;
  }
  while ( v0 );
  voiceParamPool = g_sd.voiceParamPool;
  v5 = 396i64;
  do
  {
    if ( voiceParamPool->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 55, ASSERT_TYPE_ASSERT, "(g_sd.voiceParamPool[i].state == SD_VOICE_PARAM_FREE)", (const char *)&queryFormat, "g_sd.voiceParamPool[i].state == SD_VOICE_PARAM_FREE") )
      __debugbreak();
    ++voiceParamPool;
    --v5;
  }
  while ( v5 );
  vehicleParamPool = g_sd.vehicleParamPool;
  v7 = 10i64;
  do
  {
    if ( vehicleParamPool->state )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 61, ASSERT_TYPE_ASSERT, "(g_sd.vehicleParamPool[i].state == SD_VOICE_PARAM_FREE)", (const char *)&queryFormat, "g_sd.vehicleParamPool[i].state == SD_VOICE_PARAM_FREE") )
        __debugbreak();
    }
    ++vehicleParamPool;
    --v7;
  }
  while ( v7 );
}

/*
==============
SD_VoiceStart
==============
*/
void SD_VoiceStart(sd_voice *voice, sd_voice_param *param)
{
  signed __int64 v3; 

  if ( voice->state != SD_VOICE_ACTIVE || !g_sd.voiceParam[voice - g_sd.voicePool] )
  {
    v3 = voice - g_sd.voicePool;
    if ( g_sd.voiceNewParam[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 578, ASSERT_TYPE_ASSERT, "(!g_sd.voiceNewParam[voiceIndex])", (const char *)&queryFormat, "!g_sd.voiceNewParam[voiceIndex]") )
      __debugbreak();
    if ( g_sd.voiceParam[v3] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 579, ASSERT_TYPE_ASSERT, "(!g_sd.voiceParam[voiceIndex])", (const char *)&queryFormat, "!g_sd.voiceParam[voiceIndex]") )
        __debugbreak();
    }
    g_sd.voiceParam[v3] = param;
  }
}

/*
==============
SD_VoiceStarted
==============
*/
bool SD_VoiceStarted(int voiceIndex)
{
  sd_voice *v1; 

  v1 = g_sd.voices[voiceIndex];
  return v1->state == SD_VOICE_ACTIVE && g_sd.voiceParam[v1 - g_sd.voicePool];
}

/*
==============
SD_VoiceStarted
==============
*/
bool SD_VoiceStarted(sd_voice *voice)
{
  return voice->state == SD_VOICE_ACTIVE && g_sd.voiceParam[voice - g_sd.voicePool];
}

/*
==============
SD_VoiceState
==============
*/
__int64 SD_VoiceState(sd_voice *voice)
{
  return (unsigned int)voice->state;
}

/*
==============
SD_VoiceUpdateParam
==============
*/
void SD_VoiceUpdateParam(sd_voice *voice)
{
  signed __int64 v1; 
  char v3; 
  bool v5; 

  v1 = voice - g_sd.voicePool;
  if ( g_sd.voiceNewParam[v1] )
  {
    if ( !g_sd.voiceParam[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 460, ASSERT_TYPE_ASSERT, "(g_sd.voiceParam[voiceIndex])", (const char *)&queryFormat, "g_sd.voiceParam[voiceIndex]") )
      __debugbreak();
    _m_prefetchw(&g_sd.voiceNewParam[v1]);
    do
      _RDI = g_sd.voiceNewParam[v1];
    while ( _RDI != (sd_voice_param *)_InterlockedCompareExchange64((volatile signed __int64 *)&g_sd.voiceNewParam[v1], 0i64, (signed __int64)_RDI) );
    if ( _RDI )
    {
      SD_VoiceParamFree(g_sd.voiceParam[v1]);
      __asm { vmovss  xmm0, cs:__real@40000000 }
      g_sd.voiceParam[v1] = _RDI;
      __asm { vcomiss xmm0, dword ptr [rdi+230h] }
      if ( v3 )
      {
        v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 474, ASSERT_TYPE_ASSERT, "(newParam->pitch <= 2.0f)", (const char *)&queryFormat, "newParam->pitch <= 2.0f");
        v3 = 0;
        if ( v5 )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [rdi+230h]
      }
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 475, ASSERT_TYPE_ASSERT, "(newParam->pitch > 0.0f)", (const char *)&queryFormat, "newParam->pitch > 0.0f") )
        __debugbreak();
    }
  }
}

