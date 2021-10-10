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
float SD_ADSRInterp(const ADSRCurve curve, const float start, const float end, const float t)
{
  float v7; 
  float v8; 
  __int32 v9; 
  __int32 v10; 
  __int32 v11; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 

  v8 = 1.0 - t;
  v7 = 1.0 - t;
  v9 = curve - 1;
  if ( !v9 )
  {
    v20 = end * 3.0;
    goto LABEL_11;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v20 = start * 3.0;
LABEL_11:
    v19 = (float)((float)(t * t) * t) * end;
    v18 = (float)((float)((float)((float)(v8 * v8) * v8) * start) + (float)((float)(v20 * t) * (float)(v8 * v8))) + (float)((float)(v20 * (float)(t * t)) * v8);
    return v18 + v19;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
      return (float)(v8 * start) + (float)(end * t);
    v13 = end * 3.0;
    v14 = v8 * v8;
    v15 = (float)((float)(v8 * v8) * v8) * start;
    v16 = v13 * t;
    v17 = start * 3.0;
  }
  else
  {
    v14 = v8 * v8;
    v15 = (float)((float)(v8 * v8) * v8) * start;
    v16 = (float)(start * 3.0) * t;
    v17 = end * 3.0;
  }
  v18 = (float)(v15 + (float)(v16 * v14)) + (float)((float)(v17 * (float)(t * t)) * v7);
  v19 = (float)((float)(t * t) * t) * end;
  return v18 + v19;
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
  int v2; 
  float syncPeriodFrames; 
  __int64 position; 
  int syncMeter; 
  int syncStartFrameOffset; 
  float v8; 
  int v9; 
  int i; 
  int v11; 
  int v12; 
  bool v13; 
  float v14; 

  v2 = 0;
  if ( master )
  {
    syncPeriodFrames = master->syncPeriodFrames;
    position = master->position;
    syncMeter = master->syncMeter;
    syncStartFrameOffset = master->syncStartFrameOffset;
  }
  else
  {
    syncPeriodFrames = voice->syncPeriodFrames;
    syncMeter = voice->syncMeter;
    position = 0i64;
    syncStartFrameOffset = 0;
  }
  voice->syncStartDelayFrames = 0;
  if ( voice->syncStart && master )
  {
    v8 = (float)(position + (int)(float)((float)syncMeter * syncPeriodFrames) - (__int64)syncStartFrameOffset);
    v9 = (int)syncPeriodFrames - (int)fmodf_0(v8, syncPeriodFrames);
    for ( i = (int)(float)(v8 / syncPeriodFrames) % syncMeter + 1; i % syncMeter; ++v2 )
      ++i;
    v11 = voice->syncStartFrameOffset;
    v12 = v9 + (int)(float)((float)v2 * syncPeriodFrames);
    voice->syncStartDelayFrames = v12;
    if ( v12 < v11 )
      voice->syncStartDelayFrames = v12 + (int)(float)((float)((float)syncMeter * syncPeriodFrames) - (float)v11);
    else
      voice->syncStartDelayFrames = v12 - v11;
    v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  voice->syncSoftStart = v13;
  v14 = (float)voice->syncStartDelayBeats * syncPeriodFrames;
  voice->syncTimestamp = g_sd.buffersSubmitted;
  voice->syncStartDelayFrames += (int)v14;
  voice->syncStartFadeFrames = (int)(float)((float)voice->syncStartFadeBeats * syncPeriodFrames);
}

/*
==============
SD_SyncStop
==============
*/
void SD_SyncStop(sd_voice *voice, sd_voice *master)
{
  float syncPeriodFrames; 
  __int64 position; 
  int v5; 
  int syncMeter; 
  __int64 syncStartFrameOffset; 
  float v8; 
  int v9; 
  int i; 
  int syncStopDelayFrames; 
  float syncStopFadeBeats; 

  if ( master )
    syncPeriodFrames = master->syncPeriodFrames;
  else
    syncPeriodFrames = voice->syncPeriodFrames;
  position = master->position;
  v5 = 0;
  syncMeter = master->syncMeter;
  syncStartFrameOffset = master->syncStartFrameOffset;
  voice->syncStopDelayFrames = 0;
  if ( voice->syncStop )
  {
    v8 = (float)(position + (int)(float)((float)syncMeter * syncPeriodFrames) - syncStartFrameOffset);
    v9 = (int)(float)(syncPeriodFrames - (float)(int)fmodf_0(v8, syncPeriodFrames));
    for ( i = (int)(float)(v8 / syncPeriodFrames) % syncMeter + 1; i % syncMeter; ++v5 )
      ++i;
    syncStopDelayFrames = v9 + (int)(float)((float)v5 * syncPeriodFrames);
  }
  else
  {
    Com_PrintWarning(9, "SOUND: %d sync stopping without master %p\n", g_sd.buffersSubmitted, voice);
    syncStopDelayFrames = voice->syncStopDelayFrames;
  }
  syncStopFadeBeats = (float)voice->syncStopFadeBeats;
  voice->syncStopDelayFrames = syncStopDelayFrames + (int)(float)((float)voice->syncStopDelayBeats * syncPeriodFrames);
  voice->syncStopFadeFrames = (int)(float)(syncStopFadeBeats * syncPeriodFrames);
}

/*
==============
SD_SyncUpdate
==============
*/
void SD_SyncUpdate(void)
{
  int v0; 
  sd_voice **syncVoices; 
  int v2; 
  sd_voice_param **voiceParam; 
  __int64 v4; 
  unsigned int *p_secondaryGroupId; 
  __int64 v6; 
  sd_voice *v7; 
  __int64 i; 
  sd_voice *v9; 
  __int64 j; 
  sd_voice *v11; 
  __int64 k; 
  sd_voice *v13; 
  char v14; 
  int v15; 
  __int64 m; 
  sd_voice *v17; 
  sd_voice *syncMaster; 
  float syncPeriodFrames; 
  __int64 position; 
  int syncMeter; 
  int syncStartFrameOffset; 
  float v23; 
  float v24; 
  int v25; 
  int v26; 
  int v27; 
  int n; 
  int v29; 
  int v30; 
  char v31; 
  float v32; 
  __int64 ii; 
  sd_voice *v34; 
  sd_voice_sync syncState; 
  sd_voice *v36; 
  float v37; 
  int v38; 
  float v39; 
  float v40; 
  int v41; 
  int v42; 
  int jj; 
  int v44; 
  float v45; 
  __int64 kk; 
  int v47; 
  int v48; 

  v0 = 0;
  syncVoices = g_sd.syncVoices;
  v2 = 0;
  memset_0(g_sd.syncVoices, 0, sizeof(g_sd.syncVoices));
  voiceParam = g_sd.voiceParam;
  v4 = 198i64;
  p_secondaryGroupId = &g_sd.voicePool[0].secondaryGroupId;
  do
  {
    if ( *(p_secondaryGroupId - 258) == 2 && *((_BYTE *)p_secondaryGroupId - 144) && *voiceParam && !(*voiceParam)->paused && (!*p_secondaryGroupId || ((v6 = *((_QWORD *)p_secondaryGroupId + 2)) == 0 || *(_BYTE *)(v6 + 1040)) && ((int)p_secondaryGroupId[1] <= 1 || *((_BYTE *)p_secondaryGroupId + 8))) )
    {
      ++v2;
      *syncVoices++ = (sd_voice *)(p_secondaryGroupId - 258);
    }
    p_secondaryGroupId += 266;
    ++voiceParam;
    --v4;
  }
  while ( v4 );
  v7 = NULL;
  if ( v2 > 0 )
  {
    for ( i = 0i64; i < v2; ++i )
    {
      v9 = g_sd.syncVoices[i];
      if ( !v9->syncMaster && v9->syncState == SD_VOICE_SYNC_ACTIVE && v9->source.entry->looping )
        v7 = g_sd.syncVoices[i];
    }
    if ( !v7 )
    {
      for ( j = 0i64; j < v2; ++j )
      {
        v11 = g_sd.syncVoices[j];
        if ( !v11->syncMaster && v11->syncState == SD_VOICE_SYNC_ACTIVE )
          v7 = g_sd.syncVoices[j];
      }
      if ( !v7 )
      {
        for ( k = 0i64; k < v2; ++k )
        {
          v13 = g_sd.syncVoices[k];
          if ( !v13->syncMaster && v13->syncState == SD_VOICE_SYNC_STOP_DELAY )
            v7 = g_sd.syncVoices[k];
        }
      }
    }
  }
  v14 = 0;
  v48 = 0;
  v15 = 0;
  if ( v2 > 0 )
  {
    for ( m = 0i64; m < v2; ++m )
    {
      v17 = g_sd.syncVoices[m];
      if ( v17->syncState == SD_VOICE_SYNC_INIT )
      {
        syncMaster = v7;
        v14 = 1;
        if ( v17->syncMaster )
          syncMaster = v17->syncMaster;
        if ( syncMaster )
        {
          syncPeriodFrames = syncMaster->syncPeriodFrames;
          position = syncMaster->position;
          syncMeter = syncMaster->syncMeter;
          syncStartFrameOffset = syncMaster->syncStartFrameOffset;
        }
        else
        {
          syncPeriodFrames = v17->syncPeriodFrames;
          syncMeter = v17->syncMeter;
          position = 0i64;
          syncStartFrameOffset = 0;
        }
        v17->syncStartDelayFrames = 0;
        if ( v17->syncStart && syncMaster )
        {
          v23 = (float)syncMeter * syncPeriodFrames;
          v24 = (float)(position + (int)v23 - (__int64)syncStartFrameOffset);
          v25 = (int)syncPeriodFrames - (int)fmodf_0(v24, syncPeriodFrames);
          v26 = 0;
          v17->syncStartDelayFrames = v25;
          v27 = (int)(float)(v24 / syncPeriodFrames);
          for ( n = v27 % syncMeter + 1; n % syncMeter; ++v26 )
            ++n;
          v29 = v17->syncStartFrameOffset;
          v30 = v25 + (int)(float)((float)v26 * syncPeriodFrames);
          v17->syncStartDelayFrames = v30;
          if ( v30 < v29 )
            v17->syncStartDelayFrames = v30 + (int)(float)(v23 - (float)v29);
          else
            v17->syncStartDelayFrames = v30 - v29;
          v31 = 0;
        }
        else
        {
          v31 = 1;
        }
        v17->syncSoftStart = v31;
        v32 = (float)v17->syncStartDelayBeats * syncPeriodFrames;
        v17->syncTimestamp = g_sd.buffersSubmitted;
        v17->syncStartDelayFrames += (int)v32;
        ++v48;
        v17->syncStartFadeFrames = (int)(float)((float)v17->syncStartFadeBeats * syncPeriodFrames);
        v17->syncState = SD_VOICE_SYNC_START_DELAY;
      }
    }
    for ( ii = 0i64; ii < v2; ++ii )
    {
      v34 = g_sd.syncVoices[ii];
      syncState = v34->syncState;
      if ( syncState == SD_VOICE_SYNC_ACTIVE )
      {
        if ( v34->syncStop )
        {
          v36 = v7;
          v14 = 1;
          if ( v34->syncMaster )
            v36 = v34->syncMaster;
          if ( v36 )
            v37 = v36->syncPeriodFrames;
          else
            v37 = v34->syncPeriodFrames;
          v38 = v36->syncMeter;
          v39 = (float)(v36->position + (int)(float)((float)v38 * v37) - (__int64)v36->syncStartFrameOffset);
          v40 = fmodf_0(v39, v37);
          v41 = 0;
          v42 = (int)(float)(v37 - (float)(int)v40);
          v34->syncStopDelayFrames = v42;
          for ( jj = (int)(float)(v39 / v37) % v38 + 1; jj % v38; ++v41 )
            ++jj;
          v44 = (int)(float)((float)v34->syncStopDelayBeats * v37);
          v34->syncState = SD_VOICE_SYNC_STOP_DELAY;
          v45 = (float)v34->syncStopFadeBeats * v37;
          v34->syncStopDelayFrames = v42 + (int)(float)((float)v41 * v37) + v44;
          v34->syncStopFadeFrames = (int)v45;
        }
      }
      else if ( syncState == SD_VOICE_SYNC_START_DELAY && v34->syncStop )
      {
        v34->done = 1;
      }
    }
    v15 = v48;
  }
  if ( v2 > 0 )
  {
    for ( kk = 0i64; kk < v2; ++kk )
    {
      v47 = v0 + 1;
      if ( !g_sd.syncVoices[kk]->syncMaster )
        v47 = v0;
      v0 = v47;
    }
  }
  if ( !v7 && v2 != 1 && v2 != v0 && v14 && v15 != v2 )
    Com_PrintWarning(9, "SOUND sync did not find master but had %d voices\n", (unsigned int)v2);
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
void SD_VehicleUpdateParam(sd_voice *voice)
{
  signed __int64 v2; 
  sd_vehicle_param *v3; 
  sd_decoder *decoder; 
  sd_decoder_instance v5; 
  _QWORD *v6; 
  int v7; 
  float v8; 
  bool v9; 
  float brake; 
  CrankcaseAudio::PhysicsSimulator *v11; 
  float throttle; 
  int gear; 
  float velocity; 
  CrankcaseAudio::PhysicsOutputParameters result; 
  float v16; 
  float rpm; 
  float v18; 
  int v19; 
  float v20; 
  float v21; 
  char v22; 
  CrankcaseAudio::PhysicsUpdateParams params; 

  v2 = voice - g_sd.voicePool;
  if ( g_sd.vehicleNewParam[v2] )
  {
    if ( !g_sd.voiceParam[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 507, ASSERT_TYPE_ASSERT, "(g_sd.voiceParam[voiceIndex])", (const char *)&queryFormat, "g_sd.voiceParam[voiceIndex]") )
      __debugbreak();
    _m_prefetchw(&g_sd.vehicleNewParam[v2]);
    do
      v3 = g_sd.vehicleNewParam[v2];
    while ( v3 != (sd_vehicle_param *)_InterlockedCompareExchange64((volatile signed __int64 *)&g_sd.vehicleNewParam[v2], 0i64, (signed __int64)v3) );
    if ( v3 )
    {
      decoder = voice->decoder;
      if ( decoder )
      {
        if ( decoder->format == SND_ASSET_FORMAT_REV )
        {
          v5.x360_xma = (struct sd_decoder_360_xma *)decoder->instance;
          if ( v5.x360_xma )
          {
            v6 = (_QWORD *)*((_QWORD *)v5.x360_xma + 514);
            if ( v6 )
            {
              if ( !*v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 520, ASSERT_TYPE_ASSERT, "(vehicle->player)", (const char *)&queryFormat, "vehicle->player") )
                __debugbreak();
              v7 = *((_DWORD *)v6 + 4);
              if ( g_snd.time == v7 )
                v8 = FLOAT_0_000099999997;
              else
                v8 = (float)((float)g_snd.time - (float)v7) * 0.001;
              *((_DWORD *)v6 + 4) = g_snd.time;
              v9 = !v3->useSimulatorParams;
              v16 = FLOAT_1_0;
              v21 = FLOAT_1_0;
              v22 = 1;
              if ( v9 )
              {
                throttle = v3->throttle;
                gear = v3->gear;
                rpm = v3->rpm;
                velocity = v3->velocity;
              }
              else
              {
                if ( !v6[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 531, ASSERT_TYPE_ASSERT, "(vehicle->physicsSim)", (const char *)&queryFormat, "vehicle->physicsSim") )
                  __debugbreak();
                brake = v3->brake;
                v11 = (CrankcaseAudio::PhysicsSimulator *)v6[1];
                params.Throttle = v3->throttle;
                params.Break = brake;
                CrankcaseAudio::PhysicsSimulator::Update(v11, &result, &params, v8);
                throttle = result.Throttle;
                gear = result.Gear;
                rpm = result.Rpm;
                velocity = result.Velocity;
              }
              v20 = velocity;
              v18 = throttle;
              v19 = gear;
              (*(void (__fastcall **)(_QWORD, float *))(*(_QWORD *)*v6 + 16i64))(*v6, &v16);
            }
          }
        }
      }
      SD_VehicleParamFree(v3);
    }
  }
}

/*
==============
SD_VoiceActiveUpdate
==============
*/
void SD_VoiceActiveUpdate(sd_voice *voice)
{
  unsigned __int64 v2; 
  sd_decoder *v3; 
  sd_voice_param *v6; 
  float hpfCutoff; 
  float lpfCutoff; 
  __int64 v16; 
  __m256i *panFilter; 
  signed __int64 v18; 
  int v19; 
  int v20; 
  float sustainLength; 
  int v22; 
  int v23; 
  int v24; 
  int decayStart; 
  float position; 
  int v29; 
  double v30; 
  int sustainStart; 
  double v32; 
  int releaseStart; 
  int end; 
  double v35; 
  signed __int32 v36[8]; 

  v2 = voice - g_sd.voicePool;
  if ( voice->source.primed )
    voice->hasData = 1;
  if ( voice->decodeState == SD_VOICE_DECODE_STATE_DONE )
  {
    _InterlockedOr(v36, 0);
    voice->done = 1;
    return;
  }
  if ( voice->state == SD_VOICE_ACTIVE && voice->isSync && voice->syncState == SD_VOICE_SYNC_DONE )
    goto LABEL_34;
  if ( !voice->needsDecoder || !voice->source.stream && !SD_VoiceStarted(voice) )
    goto LABEL_17;
  if ( g_sd.voiceYearnsToBeFree[v2] )
  {
LABEL_34:
    voice->done = 1;
    voice->stopFadeState = 2;
    return;
  }
  if ( voice->decoder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 776, ASSERT_TYPE_ASSERT, "(!voice->decoder)", (const char *)&queryFormat, "!voice->decoder") )
    __debugbreak();
  v3 = SD_DecoderAllocate(&voice->source);
  voice->decoder = v3;
  if ( !v3 )
  {
    if ( ++voice->decoderAllocCount <= 20 )
      return;
    if ( v2 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v2, "unsigned", v2) )
      __debugbreak();
    Com_PrintWarning(9, "Stopping voice %d due to lack of decoder\n", (unsigned int)v2);
    goto LABEL_34;
  }
  voice->needsDecoder = 0;
LABEL_17:
  SD_VoiceUpdateParam(voice);
  SD_VehicleUpdateParam(voice);
  _XMM9 = LODWORD(FLOAT_1_0);
  _XMM8 = 0i64;
  if ( voice->needsInit && voice->state == SD_VOICE_ACTIVE )
  {
    v6 = g_sd.voiceParam[v2];
    if ( v6 )
    {
      _XMM1 = LODWORD(v6->dspParams.hpfCutoff);
      __asm
      {
        vcmpneqss xmm0, xmm1, xmm10
        vblendvps xmm2, xmm8, xmm1, xmm0; freq
      }
      OnePole_Init(&voice->onePoleHighPass, 0.2, *(float *)&_XMM2, 48000.0);
      _XMM2 = LODWORD(v6->dspParams.lpfCutoff);
      _XMM0 = LODWORD(FLOAT_24000_0);
      __asm
      {
        vcmpneqss xmm1, xmm2, xmm10
        vblendvps xmm2, xmm0, xmm2, xmm1; freq
      }
      OnePole_Init(&voice->onePoleLowPass, 0.2, *(float *)&_XMM2, 48000.0);
      SND_InitFilter(&voice->highPass);
      hpfCutoff = v6->dspParams.hpfCutoff;
      if ( hpfCutoff != -1.0 )
        SND_ApplyFilterHPFFrequency(&voice->highPass, hpfCutoff);
      SND_InitFilter(&voice->lowPass);
      lpfCutoff = v6->dspParams.lpfCutoff;
      if ( lpfCutoff != -1.0 )
        SND_ApplyFilterLPFFrequency(&voice->lowPass, lpfCutoff);
      SND_InitEQBank(&voice->eqBank);
      SND_ApplyEQBankParams(&voice->eqBank, &v6->dspParams.eqBankParams);
      voice->eqBankParamsHash = v6->eqBankParamsHash;
      v16 = 2i64;
      panFilter = (__m256i *)voice->panFilter;
      v18 = (char *)v6 - (char *)voice->panFilter;
      do
      {
        *panFilter = *(__m256i *)((char *)&panFilter[8] + v18 + 20);
        panFilter[1] = *(__m256i *)((char *)&panFilter[9] + v18 + 20);
        panFilter[2] = *(__m256i *)((char *)&panFilter[10] + v18 + 20);
        panFilter[3] = *(__m256i *)((char *)&panFilter[11] + v18 + 20);
        panFilter += 4;
        --v16;
      }
      while ( v16 );
      *(_OWORD *)voice->panLevels = *(_OWORD *)v6->panLevels;
      *(double *)&voice->panLevels[4] = *(double *)&v6->panLevels[4];
      voice->trackEnvelope = v6->trackEnvelope;
      voice->position = voice->source.startFrame;
      voice->needsInit = 0;
      if ( voice->adsrParams.inUse )
      {
        v19 = (int)(float)(voice->adsrParams.attackLength * 1000.0);
        v20 = (int)(float)(-1000.0 * voice->adsrParams.decayLength);
        sustainLength = voice->adsrParams.sustainLength;
        voice->adsr.decayStart = v19;
        v22 = v19 - v20;
        voice->adsr.inUse = 1;
        voice->adsr.sustainStart = v22;
        if ( sustainLength >= 0.0 )
        {
          v24 = v22 - (int)(float)(sustainLength * -1000.0);
          v23 = v24 - (int)(float)(-1000.0 * voice->adsrParams.releaseLength);
        }
        else
        {
          v23 = 0x7FFFFFFF;
          v24 = 0x7FFFFFFF;
        }
        voice->adsr.releaseStart = v24;
        voice->adsr.end = v23;
        __asm
        {
          vcmpltss xmm0, xmm8, dword ptr [rdi+358h]
          vblendvps xmm0, xmm9, xmm8, xmm0
        }
        voice->adsr.sustainLevel = voice->adsrParams.sustainLevel;
        voice->adsr.currentVolume = *(float *)&_XMM0;
      }
      else
      {
        voice->adsr.inUse = 0;
        voice->adsr.currentVolume = 1.0;
        voice->adsr.decayStart = 0x7FFFFFFF;
      }
    }
  }
  if ( voice->adsr.inUse )
  {
    decayStart = voice->adsr.decayStart;
    position = (float)voice->position;
    v29 = (int)(float)(position * 0.020833334);
    if ( decayStart == 0x7FFFFFFF )
    {
      voice->adsr.currentVolume = 1.0;
    }
    else if ( v29 >= decayStart )
    {
      sustainStart = voice->adsr.sustainStart;
      if ( v29 >= sustainStart )
      {
        releaseStart = voice->adsr.releaseStart;
        if ( v29 < releaseStart || releaseStart == 0x7FFFFFFF )
        {
          voice->adsr.currentVolume = voice->adsr.sustainLevel;
        }
        else
        {
          end = voice->adsr.end;
          if ( v29 >= end )
          {
            if ( voice->adsr.currentVolume == 0.0 )
              voice->done = 1;
            else
              voice->adsr.currentVolume = 0.0;
          }
          else
          {
            v35 = SD_ADSRInterp((const ADSRCurve)voice->adsrParams.releaseCurve, voice->adsr.sustainLevel, 0.0, (float)(v29 - releaseStart) / (float)(end - releaseStart));
            voice->adsr.currentVolume = *(float *)&v35;
          }
        }
      }
      else
      {
        v32 = SD_ADSRInterp((const ADSRCurve)voice->adsrParams.decayCurve, 1.0, voice->adsr.sustainLevel, (float)(v29 - decayStart) / (float)(sustainStart - decayStart));
        voice->adsr.currentVolume = *(float *)&v32;
      }
    }
    else
    {
      v30 = SD_ADSRInterp((const ADSRCurve)voice->adsrParams.attackCurve, 0.0, 1.0, (float)v29 / (float)decayStart);
      voice->adsr.currentVolume = *(float *)&v30;
    }
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
  return voice->envelope;
}

/*
==============
SD_VoiceFrameActive
==============
*/
void SD_VoiceFrameActive(void)
{
  sd_voice_param **voiceParam; 
  sd_voice *voicePool; 
  int v2; 
  const sd_voice_param *v3; 
  unsigned int secondaryGroupId; 
  sd_voice_param **v5; 
  sd_voice *v6; 
  const sd_voice_param *v7; 
  unsigned int **p_decoder; 
  __int64 v9; 
  unsigned int *v10; 

  Sys_ProfBeginNamedEvent(0xFFu, "SD_VoiceFrameActive");
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
  SD_SyncUpdate();
  p_decoder = (unsigned int **)&g_sd.voicePool[0].decoder;
  *(_WORD *)&g_sd.hasCinematicSound = 0;
  v9 = 198i64;
  g_sd.hasArcadeSound1 = 0;
  do
  {
    if ( *((_DWORD *)p_decoder - 30) == 2 )
    {
      v10 = *p_decoder;
      if ( *p_decoder )
      {
        if ( !*((_BYTE *)v10 + 4356) && !*(p_decoder - 4) && !*((_BYTE *)p_decoder - 22) )
        {
          if ( *((_BYTE *)v10 + 40) )
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
      SD_VoiceActiveUpdate((sd_voice *)(p_decoder - 15));
      if ( *p_decoder && !*(p_decoder - 4) && !*((_BYTE *)p_decoder - 22) && *((_BYTE *)*p_decoder + 40) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 1261, ASSERT_TYPE_ASSERT, "(!(!voice->source.eos && voice->decoder->eos))", (const char *)&queryFormat, "!(!voice->source.eos && voice->decoder->eos)") )
        __debugbreak();
    }
    p_decoder += 133;
    --v9;
  }
  while ( v9 );
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_VoiceFrameFreed
==============
*/
void SD_VoiceFrameFreed(void)
{
  bool *p_done; 
  bool *voiceYearnsToBeFree; 
  __int64 v2; 
  sd_voice_param **voiceParam; 
  sd_voice *v4; 
  __int64 v5; 
  sd_voice_param *v6; 
  sd_decoder *v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  unsigned int v12; 
  int *p_secondaryGroupSize; 
  signed __int32 v14[8]; 

  Sys_ProfBeginNamedEvent(0xFFu, "SD_VoiceFrameFreed");
  p_done = &g_sd.voicePool[0].done;
  voiceYearnsToBeFree = g_sd.voiceYearnsToBeFree;
  v2 = 198i64;
  voiceParam = g_sd.voiceParam;
  do
  {
    if ( *voiceYearnsToBeFree && (v4 = (sd_voice *)(p_done - 4), *((_DWORD *)p_done - 1) == 2) && (*((int *)p_done + 202) >= 2 || *p_done || *voiceParam && (*voiceParam)->paused) )
    {
      v4->state = SD_VOICE_FREED;
    }
    else
    {
      v4 = (sd_voice *)(p_done - 4);
      if ( *((_DWORD *)p_done - 1) != 3 )
        goto LABEL_29;
    }
    v5 = (p_done - &g_sd.voicePool[0].done) / 1064;
    SD_VoiceUpdateParam(v4);
    SD_VehicleUpdateParam(v4);
    v6 = g_sd.voiceParam[v5];
    if ( v6 )
      SD_VoiceParamFree(v6);
    g_sd.voiceParam[v5] = NULL;
    v7 = *(sd_decoder **)(p_done + 116);
    if ( v7 )
    {
      SD_DecoderFree(v7);
      *(_QWORD *)(p_done + 116) = 0i64;
    }
    if ( p_done[524] )
    {
      v8 = *(_QWORD *)(p_done + 84);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 344);
        if ( v9 )
        {
          *(_BYTE *)(v9 + 307) = 1;
          v8 = *(_QWORD *)(p_done + 84);
        }
        v10 = *(_QWORD *)(v8 + 352);
        if ( v10 )
          *(_BYTE *)(v10 + 307) = 1;
      }
    }
    SD_SourceShutdown((sd_source *)(p_done + 28));
    g_sd.voiceYearnsToBeFree[v5] = 0;
    v11 = *((_DWORD *)p_done + 257);
    if ( *((int *)p_done + 258) > 1 )
    {
      v12 = 0;
      p_secondaryGroupSize = &g_sd.voicePool[0].secondaryGroupSize;
      do
      {
        if ( *(p_secondaryGroupSize - 1) == v11 )
          --*p_secondaryGroupSize;
        ++v12;
        p_secondaryGroupSize += 266;
      }
      while ( v12 < 0xC6 );
    }
    v4->secondaryGroupId = 0;
    _InterlockedOr(v14, 0);
    v4->state = SD_VOICE_FREE;
    if ( ((unsigned __int8)&g_sd.voiceInUse & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd.voiceInUse) )
      __debugbreak();
    _InterlockedDecrement(&g_sd.voiceInUse);
LABEL_29:
    p_done += 1064;
    ++voiceYearnsToBeFree;
    ++voiceParam;
    --v2;
  }
  while ( v2 );
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
  sd_voice_param *v2; 

  v1 = voice - g_sd.voicePool;
  if ( g_sd.voiceNewParam[v1] )
  {
    if ( !g_sd.voiceParam[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 460, ASSERT_TYPE_ASSERT, "(g_sd.voiceParam[voiceIndex])", (const char *)&queryFormat, "g_sd.voiceParam[voiceIndex]") )
      __debugbreak();
    _m_prefetchw(&g_sd.voiceNewParam[v1]);
    do
      v2 = g_sd.voiceNewParam[v1];
    while ( v2 != (sd_voice_param *)_InterlockedCompareExchange64((volatile signed __int64 *)&g_sd.voiceNewParam[v1], 0i64, (signed __int64)v2) );
    if ( v2 )
    {
      SD_VoiceParamFree(g_sd.voiceParam[v1]);
      g_sd.voiceParam[v1] = v2;
      if ( v2->pitch > 2.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 474, ASSERT_TYPE_ASSERT, "(newParam->pitch <= 2.0f)", (const char *)&queryFormat, "newParam->pitch <= 2.0f") )
        __debugbreak();
      if ( v2->pitch <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_voice.cpp", 475, ASSERT_TYPE_ASSERT, "(newParam->pitch > 0.0f)", (const char *)&queryFormat, "newParam->pitch > 0.0f") )
        __debugbreak();
    }
  }
}

