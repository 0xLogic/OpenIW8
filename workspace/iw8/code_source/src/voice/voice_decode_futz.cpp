/*
==============
VoiceDecode_FutzCreate
==============
*/

bool __fastcall VoiceDecode_FutzCreate(int voiceBusIndex)
{
  return ?VoiceDecode_FutzCreate@@YA_NH@Z(voiceBusIndex);
}

/*
==============
VoiceDecode_FutzAssignParams
==============
*/

void __fastcall VoiceDecode_FutzAssignParams(const SndFutz *futzDef, VoiceDecodeFutzParams *outfutzParams)
{
  ?VoiceDecode_FutzAssignParams@@YAXPEBUSndFutz@@AEAUVoiceDecodeFutzParams@@@Z(futzDef, outfutzParams);
}

/*
==============
VoiceDecode_FutzDelete
==============
*/

bool __fastcall VoiceDecode_FutzDelete(int voiceBusIndex)
{
  return ?VoiceDecode_FutzDelete@@YA_NH@Z(voiceBusIndex);
}

/*
==============
VoiceDecode_FutzUpdateParam
==============
*/

bool __fastcall VoiceDecode_FutzUpdateParam(const SndFutz *futzDef)
{
  return ?VoiceDecode_FutzUpdateParam@@YA_NPEBUSndFutz@@@Z(futzDef);
}

/*
==============
VoiceDecode_FutzMix
==============
*/

void __fastcall VoiceDecode_FutzMix(unsigned int *maxSamplesDecoded)
{
  ?VoiceDecode_FutzMix@@YAXPEAI@Z(maxSamplesDecoded);
}

/*
==============
VoiceDecode_FutzAllocateSource
==============
*/
char VoiceDecode_FutzAllocateSource(const SndAliasList *aliasList, sd_source *outSource)
{
  SndAlias *head; 
  SndAssetBankEntry *v6; 
  const unsigned __int8 *v7; 
  const unsigned __int8 *v8; 
  unsigned int size; 
  SndAssetBankEntry *entry; 
  void *data; 

  if ( !aliasList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_decode_futz.cpp", 195, ASSERT_TYPE_ASSERT, "(aliasList)", (const char *)&queryFormat, "aliasList") )
    __debugbreak();
  if ( !outSource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_decode_futz.cpp", 196, ASSERT_TYPE_ASSERT, "(outSource)", (const char *)&queryFormat, "outSource") )
    __debugbreak();
  head = aliasList->head;
  if ( (head->flags & 0x380) == 0 || (head->flags & 0x380) == 256 )
  {
    if ( SND_AssetBankFindLoaded(head->assetId, (const SndAssetBankEntry **)&entry, (const void **)&data, &size) )
    {
      v6 = entry;
      if ( entry->channelCount == 1 )
      {
        v7 = (const unsigned __int8 *)data;
        outSource->alias = aliasList->head;
        outSource->entry = v6;
        outSource->loaded.dataSize = v6->size;
        v8 = &v7[v6->seekTableSize];
        outSource->loaded.seekTable = v7;
        outSource->loaded.data = v8;
        outSource->loaded.seekTableSize = v6->seekTableSize;
        outSource->loaded.pcmData = &v7[v6->seekTableSize + v6->size];
        outSource->loaded.pcmDataSize = v6->hybridPcmSize;
        return 1;
      }
      else
      {
        Com_PrintError(9, "Loaded sound asset %s for alias %s is not mono\n", head->assetFileName, head->aliasName);
        return 0;
      }
    }
    else
    {
      Com_PrintError(9, "Loaded sound asset %s for alias %s not found for voice system\n", head->assetFileName, head->aliasName);
      return 0;
    }
  }
  else
  {
    Com_PrintError(9, "Loaded sound asset %s for alias %s is not loaded or hybrid PCM\n", head->assetFileName, head->aliasName);
    return 0;
  }
}

/*
==============
VoiceDecode_FutzAssignParams
==============
*/
void VoiceDecode_FutzAssignParams(const SndFutz *futzDef, VoiceDecodeFutzParams *outfutzParams)
{
  if ( !futzDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_decode_futz.cpp", 155, ASSERT_TYPE_ASSERT, "(futzDef)", (const char *)&queryFormat, "futzDef") )
    __debugbreak();
  outfutzParams->futzDspParams.blend = futzDef->blend;
  outfutzParams->futzDspParams.bpfF = futzDef->bpfF;
  outfutzParams->futzDspParams.bpfQ = futzDef->bpfQ;
  outfutzParams->futzDspParams.distortion = futzDef->dist;
  outfutzParams->futzDspParams.lsF = futzDef->lsF;
  outfutzParams->futzDspParams.lsG = futzDef->lsG;
  outfutzParams->futzDspParams.lsQ = futzDef->lsQ;
  outfutzParams->futzDspParams.postclip = futzDef->clippost;
  outfutzParams->futzDspParams.postgain = futzDef->postG;
  outfutzParams->futzDspParams.preclip = futzDef->clippre;
  outfutzParams->futzDspParams.pregain = futzDef->preG;
  outfutzParams->futzDspParams.squelch.tg = futzDef->tg;
  outfutzParams->futzDspParams.squelch.th = futzDef->th;
  outfutzParams->startAliasId = futzDef->startAliasId;
  outfutzParams->loopAliasId = futzDef->loopAliasId;
  outfutzParams->stopAliasId = futzDef->stopAliasId;
}

/*
==============
VoiceDecode_FutzCreate
==============
*/
char VoiceDecode_FutzCreate(int voiceBusIndex)
{
  __int64 v1; 
  int v2; 
  unsigned int v3; 
  VoiceFutz *v4; 
  VoiceFutz *v5; 
  __int64 v6; 
  __int64 v8; 
  int v10; 

  v1 = voiceBusIndex;
  if ( (unsigned int)voiceBusIndex >= 8 )
  {
    v10 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_decode_futz.cpp", 117, ASSERT_TYPE_ASSERT, "(unsigned)( voiceBusIndex ) < (unsigned)( SND_VOICE_BUS_COUNT )", "voiceBusIndex doesn't index SND_VOICE_BUS_COUNT\n\t%i not in [0, %i)", voiceBusIndex, v10) )
      __debugbreak();
  }
  if ( !s_voiceFutz[v1] )
  {
    v2 = 0;
    while ( 2 )
    {
      v3 = 0;
      v4 = s_voiceFutzPool;
      do
      {
        if ( !v4->state )
        {
          v5 = &s_voiceFutzPool[v3];
          v6 = ((unsigned __int8)s_voiceFutzPool - 88 * (_BYTE)v3) & 3;
          if ( (((unsigned __int8)s_voiceFutzPool - 88 * (_BYTE)v3) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_voiceFutzPool[v3]) )
            __debugbreak();
          if ( !_InterlockedCompareExchange(&v5->state, 1, 0) )
          {
            v5->voiceBusIndex = v1;
            v8 = v3;
            v5->playbackState = PLAY_DONE;
            *(_QWORD *)&v5->curInAlias = 0i64;
            v5->curOutAlias = 0;
            g_sd.futzSource[v8].voiceBusIndex = v1;
            v5->decInSource = &g_sd.futzSource[v8].in;
            memset_0(&g_sd.futzSource[v8], 0, 0x58ui64);
            v5->decLoopSource = &g_sd.futzSource[v8].loop;
            memset_0(&g_sd.futzSource[v8].loop, 0, sizeof(g_sd.futzSource[v8].loop));
            v5->decOutSource = &g_sd.futzSource[v8].out;
            memset_0(&g_sd.futzSource[v8].out, 0, sizeof(g_sd.futzSource[v8].out));
            s_voiceFutz[v1] = v5;
            *(_QWORD *)v5->futzDSPState.bpf.y = 0i64;
            *(_QWORD *)&v5->futzDSPState.bpf.y[2] = 0i64;
            *(_QWORD *)v5->futzDSPState.bpf.x = 0i64;
            *(_QWORD *)&v5->futzDSPState.bpf.x[2] = 0i64;
            *(_QWORD *)v5->futzDSPState.ls.y = 0i64;
            *(_QWORD *)&v5->futzDSPState.ls.y[2] = 0i64;
            *(_QWORD *)v5->futzDSPState.ls.x = 0i64;
            *(_QWORD *)&v5->futzDSPState.ls.x[2] = 0i64;
            v5->futzDSPState.squelch = 0i64;
            v5->inDec = NULL;
            v5->outDec = NULL;
            v5->loopDec = NULL;
            if ( v6 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", v5) )
                __debugbreak();
            }
            _InterlockedExchange(&v5->state, 2);
            return 1;
          }
        }
        ++v3;
        ++v4;
      }
      while ( v3 < 8 );
      SD_Sync();
      if ( (unsigned int)++v2 < 4 )
        continue;
      break;
    }
  }
  return 0;
}

/*
==============
VoiceDecode_FutzDelete
==============
*/
char VoiceDecode_FutzDelete(int voiceBusIndex)
{
  VoiceFutz *v1; 

  v1 = s_voiceFutz[voiceBusIndex];
  if ( !v1 )
    return 0;
  s_voiceFutz[voiceBusIndex] = NULL;
  if ( ((unsigned __int8)v1 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", v1) )
    __debugbreak();
  _InterlockedExchange(&v1->state, 3);
  return 1;
}

/*
==============
VoiceDecode_FutzInitAssets
==============
*/
void VoiceDecode_FutzInitAssets(VoiceFutz *futz, unsigned int startAliasId, unsigned int loopAliasId, unsigned int stopAliasId)
{
  sd_decoder *inDec; 
  const SndAliasList *AliasFromId; 
  const SndAliasList *v10; 
  SndAlias *head; 
  float volMin; 
  double v13; 
  double v14; 
  sd_decoder *loopDec; 
  const SndAliasList *v16; 
  const SndAliasList *v17; 
  SndAlias *v18; 
  float v19; 
  double v20; 
  double v21; 
  sd_decoder *outDec; 
  const SndAliasList *v23; 
  const SndAliasList *v24; 
  SndAlias *v25; 
  float v26; 
  double v27; 
  double v28; 
  sd_source *decInSource; 
  sd_source *decLoopSource; 
  sd_source *decOutSource; 

  if ( futz->curInAlias != startAliasId && futz->playbackState == PLAY_DONE )
  {
    inDec = futz->inDec;
    if ( inDec )
    {
      SD_DecoderFree(inDec);
      futz->inDec = NULL;
    }
    SD_SourceShutdown(futz->decInSource);
    if ( startAliasId )
    {
      AliasFromId = SND_FindAliasFromId(startAliasId);
      v10 = AliasFromId;
      if ( AliasFromId )
      {
        if ( VoiceDecode_FutzAllocateSource(AliasFromId, futz->decInSource) )
        {
          head = v10->head;
          volMin = head->volMin;
          v13 = I_random();
          v14 = I_fclamp((float)(*(float *)&v13 * (float)(head->volMax - volMin)) + volMin, 0.0, 4.0);
          futz->inDecVolume = *(float *)&v14;
        }
      }
    }
    futz->curInAlias = startAliasId;
  }
  if ( futz->curLoopAlias != loopAliasId && futz->playbackState == PLAY_DONE )
  {
    loopDec = futz->loopDec;
    if ( loopDec )
    {
      SD_DecoderFree(loopDec);
      futz->loopDec = NULL;
    }
    SD_SourceShutdown(futz->decLoopSource);
    if ( loopAliasId )
    {
      v16 = SND_FindAliasFromId(loopAliasId);
      v17 = v16;
      if ( v16 )
      {
        if ( VoiceDecode_FutzAllocateSource(v16, futz->decLoopSource) )
        {
          v18 = v17->head;
          v19 = v18->volMin;
          v20 = I_random();
          v21 = I_fclamp((float)(*(float *)&v20 * (float)(v18->volMax - v19)) + v19, 0.0, 4.0);
          futz->loopDecVolume = *(float *)&v21;
        }
      }
    }
    futz->curLoopAlias = loopAliasId;
  }
  if ( futz->curOutAlias != stopAliasId && futz->playbackState == PLAY_DONE )
  {
    outDec = futz->outDec;
    if ( outDec )
    {
      SD_DecoderFree(outDec);
      futz->outDec = NULL;
    }
    SD_SourceShutdown(futz->decOutSource);
    if ( stopAliasId )
    {
      v23 = SND_FindAliasFromId(stopAliasId);
      v24 = v23;
      if ( v23 )
      {
        if ( VoiceDecode_FutzAllocateSource(v23, futz->decOutSource) )
        {
          v25 = v24->head;
          v26 = v25->volMin;
          v27 = I_random();
          v28 = I_fclamp((float)(*(float *)&v27 * (float)(v25->volMax - v26)) + v26, 0.0, 4.0);
          futz->outDecVolume = *(float *)&v28;
        }
      }
    }
    futz->curOutAlias = stopAliasId;
  }
  if ( !futz->inDec )
  {
    decInSource = futz->decInSource;
    if ( decInSource->entry )
    {
      decInSource->stream = NULL;
      *(_WORD *)&decInSource->primed = 1;
      decInSource->eos = 0;
      decInSource->startFrame = 0i64;
      futz->inDec = SD_DecoderAllocate(decInSource);
    }
  }
  if ( !futz->loopDec )
  {
    decLoopSource = futz->decLoopSource;
    if ( decLoopSource->entry )
    {
      decLoopSource->stream = NULL;
      *(_WORD *)&decLoopSource->primed = 1;
      decLoopSource->eos = 0;
      decLoopSource->startFrame = 0i64;
      futz->loopDec = SD_DecoderAllocate(decLoopSource);
    }
  }
  if ( !futz->outDec )
  {
    decOutSource = futz->decOutSource;
    if ( decOutSource->entry )
    {
      decOutSource->stream = NULL;
      *(_WORD *)&decOutSource->primed = 1;
      decOutSource->eos = 0;
      decOutSource->startFrame = 0i64;
      futz->outDec = SD_DecoderAllocate(decOutSource);
    }
  }
}

/*
==============
VoiceDecode_FutzMix
==============
*/
void VoiceDecode_FutzMix(unsigned int *maxSamplesDecoded)
{
  unsigned int v2; 
  sd_decoder **p_inDec; 
  volatile __int32 *v4; 
  __int64 v5; 
  int v6; 
  sd_decoder *v7; 
  sd_decoder *v8; 

  if ( s_futzParamsPending.isNew )
  {
    s_futzParamsCurrent = s_futzParamsPending;
    s_futzParamsPending.isNew = 0;
  }
  v2 = 0;
  p_inDec = &s_voiceFutzPool[0].inDec;
  do
  {
    v4 = (volatile __int32 *)(p_inDec - 13);
    if ( *((_DWORD *)p_inDec - 26) == 2 )
    {
      v5 = *((int *)p_inDec - 25);
      VoiceDecode_FutzInitAssets((VoiceFutz *)(p_inDec - 13), s_futzParamsCurrent.startAliasId, s_futzParamsCurrent.loopAliasId, s_futzParamsCurrent.stopAliasId);
      v6 = maxSamplesDecoded[v5];
      if ( (unsigned int)v5 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 616, ASSERT_TYPE_ASSERT, "(i<SND_VOICE_BUS_COUNT)", (const char *)&queryFormat, "i<SND_VOICE_BUS_COUNT") )
        __debugbreak();
      VoiceDecode_FutzProcess((VoiceFutz *)(p_inDec - 13), &g_sd.voiceBusBuffers[(_DWORD)v5 << 8], v6, 256, &s_futzParamsCurrent.futzDspParams);
    }
    else if ( *v4 == 3 )
    {
      if ( *p_inDec )
      {
        SD_DecoderFree(*p_inDec);
        *p_inDec = NULL;
      }
      SD_SourceShutdown((sd_source *)*(p_inDec - 1));
      v7 = p_inDec[3];
      if ( v7 )
      {
        SD_DecoderFree(v7);
        p_inDec[3] = NULL;
      }
      SD_SourceShutdown((sd_source *)p_inDec[2]);
      v8 = p_inDec[6];
      if ( v8 )
      {
        SD_DecoderFree(v8);
        p_inDec[6] = NULL;
      }
      SD_SourceShutdown((sd_source *)p_inDec[5]);
      if ( ((unsigned __int8)v4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", p_inDec - 13) )
        __debugbreak();
      _InterlockedExchange(v4, 0);
    }
    ++v2;
    p_inDec += 21;
  }
  while ( v2 < 8 );
}

/*
==============
VoiceDecode_FutzProcess
==============
*/
void VoiceDecode_FutzProcess(VoiceFutz *futz, float *inPlace, int count, int maxCount, const SndDspFutzParam *futzParams)
{
  unsigned __int64 v5; 
  int v8; 
  int v9; 
  int v10; 
  sd_decoder *loopDec; 
  int v12; 
  __int64 v13; 
  unsigned int v14; 
  float *v15; 
  __m128 loopDecVolume_low; 
  __int64 v17; 
  unsigned __int64 v20; 
  __int64 v21; 
  __m256i v22; 
  sd_decoder *outDec; 
  int v24; 
  float *v25; 
  __m128 v26; 
  __int64 v27; 
  unsigned __int64 v30; 
  __int64 v31; 
  __m256i v32; 
  sd_decoder *v33; 
  _DWORD *v34; 
  __int64 i; 
  int v36; 
  __m128 inDecVolume_low; 
  int v38; 
  unsigned int v39; 
  unsigned int v40; 
  __int64 v43; 
  float *v44; 
  __m256 *v45; 
  __m256i v46; 
  sd_decoder *inDec; 
  sd_source *decInSource; 
  VoiceFutz::EFutzPlaybackState v49; 
  sd_source *decOutSource; 
  __int64 v51; 
  char v52[2096]; 

  v5 = (unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v5 + 2080) = (unsigned __int64)&v51 ^ _security_cookie;
  *(_DWORD *)(v5 + 4) = maxCount;
  *(_DWORD *)v5 = count;
  v8 = maxCount;
  v9 = count;
  Sys_ProfBeginNamedEvent(0xFFFF00u, "VoiceDecode_FutzProcess");
  if ( v9 > 0 )
    SND_DspFutzMono(futzParams, &futz->futzDSPState, 48000.0, v9, inPlace, (float *)(v5 + 32), (float *)(v5 + 1056));
  v10 = v8;
  while ( v10 > 0 )
  {
    if ( futz->playbackState == PLAY_START )
    {
      v49 = PLAY_LOOP;
      if ( futz->inDec )
        v49 = PLAY_IN;
      futz->playbackState = v49;
    }
    else
    {
      if ( futz->playbackState == PLAY_IN )
      {
        v34 = (_DWORD *)(v5 + 32);
        for ( i = 256i64; i; --i )
          *v34++ = 0;
        v36 = VoiceDecode_DecoderRead(futz->inDec, 1.0, (float *)(v5 + 32), v10);
        inDecVolume_low = (__m128)LODWORD(futz->inDecVolume);
        v38 = v36;
        v39 = v36 + 7;
        if ( (((_BYTE)v5 + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 596, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", v5 + 32) )
          __debugbreak();
        if ( ((unsigned __int8)inPlace & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 597, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", inPlace) )
          __debugbreak();
        v40 = v39 >> 3;
        _YMM2 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(inDecVolume_low, inDecVolume_low, 0);
        __asm { vinsertf128 ymm2, ymm2, xmm2, 1 }
        if ( v40 )
        {
          v43 = v40;
          v44 = inPlace;
          v45 = (__m256 *)inPlace;
          do
          {
            v44 += 8;
            v46 = (__m256i)_mm256_add_ps(_mm256_mul_ps(_YMM2, *(__m256 *)((char *)v45 + v5 + 32 - (_QWORD)inPlace)), *v45);
            ++v45;
            *((__m256i *)v44 - 1) = v46;
            --v43;
          }
          while ( v43 );
        }
        inDec = futz->inDec;
        v10 -= v38;
        if ( !inDec->output.count )
        {
          SD_DecoderFree(inDec);
          decInSource = futz->decInSource;
          decInSource->stream = NULL;
          *(_WORD *)&decInSource->primed = 1;
          decInSource->eos = 0;
          decInSource->startFrame = 0i64;
          futz->inDec = SD_DecoderAllocate(decInSource);
          futz->playbackState = PLAY_LOOP;
        }
      }
      else
      {
        if ( futz->playbackState != PLAY_OUT )
        {
          if ( futz->playbackState == PLAY_LOOP )
          {
            loopDec = futz->loopDec;
            if ( loopDec && (v12 = VoiceDecode_DecoderRead(loopDec, 1.0, (float *)(v5 + 32), v10), v13 = v12, v12 > 0) )
            {
              v14 = v12 + 7;
              v15 = &inPlace[v8 - v10];
              memcpy_0((void *)(v5 + 1056), v15, 4i64 * v12);
              loopDecVolume_low = (__m128)LODWORD(futz->loopDecVolume);
              if ( (((_BYTE)v5 + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 596, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", v5 + 32) )
                __debugbreak();
              if ( (((_BYTE)v5 + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 597, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v5 + 1056) )
                __debugbreak();
              v17 = v14 >> 3;
              _YMM2 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(loopDecVolume_low, loopDecVolume_low, 0);
              __asm { vinsertf128 ymm2, ymm2, xmm2, 1 }
              if ( (_DWORD)v17 )
              {
                v20 = v5 + 1056;
                v21 = 0i64;
                do
                {
                  v20 += 32i64;
                  v22 = (__m256i)_mm256_add_ps(_mm256_mul_ps(_YMM2, *(__m256 *)(v5 + v21 + 32)), *(__m256 *)(v5 + v21 + 1056));
                  v21 += 32i64;
                  *(__m256i *)(v20 - 32) = v22;
                  --v17;
                }
                while ( v17 );
              }
              memcpy_0(v15, (const void *)(v5 + 1056), 4 * v13);
              v8 = *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
              v10 -= v13;
              v9 = *(_DWORD *)v5;
            }
            else
            {
              v10 = 0;
            }
            if ( v9 < v8 )
            {
              futz->playbackState = PLAY_OUT;
              v10 = v8 - v9;
            }
          }
          else
          {
            if ( !v9 )
              break;
            futz->playbackState = PLAY_START;
          }
          continue;
        }
        outDec = futz->outDec;
        if ( !outDec )
        {
          futz->playbackState = PLAY_DONE;
          break;
        }
        v24 = VoiceDecode_DecoderRead(outDec, 1.0, (float *)(v5 + 32), v10);
        v25 = &inPlace[v8 - v10];
        memcpy_0((void *)(v5 + 1056), v25, 4i64 * v24);
        v26 = (__m128)LODWORD(futz->inDecVolume);
        if ( (((_BYTE)v5 + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 596, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", v5 + 32) )
          __debugbreak();
        if ( (((_BYTE)v5 + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 597, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v5 + 1056) )
          __debugbreak();
        v27 = (unsigned int)(v24 + 7) >> 3;
        _YMM2 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v26, v26, 0);
        __asm { vinsertf128 ymm2, ymm2, xmm2, 1 }
        if ( (_DWORD)v27 )
        {
          v30 = v5 + 1056;
          v31 = 0i64;
          do
          {
            v30 += 32i64;
            v32 = (__m256i)_mm256_add_ps(_mm256_mul_ps(_YMM2, *(__m256 *)(v5 + v31 + 32)), *(__m256 *)(v5 + v31 + 1056));
            v31 += 32i64;
            *(__m256i *)(v30 - 32) = v32;
            --v27;
          }
          while ( v27 );
        }
        memcpy_0(v25, (const void *)(v5 + 1056), 4i64 * v24);
        v33 = futz->outDec;
        v10 -= v24;
        if ( !v33->output.count )
        {
          SD_DecoderFree(v33);
          decOutSource = futz->decOutSource;
          decOutSource->stream = NULL;
          *(_WORD *)&decOutSource->primed = 1;
          decOutSource->eos = 0;
          decOutSource->startFrame = 0i64;
          futz->outDec = SD_DecoderAllocate(decOutSource);
          futz->playbackState = PLAY_DONE;
          break;
        }
        v8 = *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
      }
      v9 = *(_DWORD *)v5;
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
VoiceDecode_FutzUpdateParam
==============
*/
char VoiceDecode_FutzUpdateParam(const SndFutz *futzDef)
{
  void *retaddr; 

  if ( !futzDef || s_futzParamsPending.isNew )
    return 0;
  s_futzParamsPending.futzDspParams.blend = futzDef->blend;
  s_futzParamsPending.futzDspParams.bpfF = futzDef->bpfF;
  s_futzParamsPending.futzDspParams.bpfQ = futzDef->bpfQ;
  s_futzParamsPending.futzDspParams.distortion = futzDef->dist;
  s_futzParamsPending.futzDspParams.lsF = futzDef->lsF;
  s_futzParamsPending.futzDspParams.lsG = futzDef->lsG;
  s_futzParamsPending.futzDspParams.lsQ = futzDef->lsQ;
  s_futzParamsPending.futzDspParams.postclip = futzDef->clippost;
  s_futzParamsPending.futzDspParams.postgain = futzDef->postG;
  s_futzParamsPending.futzDspParams.preclip = futzDef->clippre;
  s_futzParamsPending.futzDspParams.pregain = futzDef->preG;
  s_futzParamsPending.futzDspParams.squelch.tg = futzDef->tg;
  s_futzParamsPending.futzDspParams.squelch.th = futzDef->th;
  s_futzParamsPending.startAliasId = futzDef->startAliasId;
  s_futzParamsPending.loopAliasId = futzDef->loopAliasId;
  s_futzParamsPending.stopAliasId = futzDef->stopAliasId;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  s_futzParamsPending.isNew = 1;
  return 1;
}

