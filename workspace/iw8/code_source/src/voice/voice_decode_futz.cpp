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
  const SndAliasList *v13; 
  sd_decoder *loopDec; 
  const SndAliasList *v21; 
  const SndAliasList *v22; 
  sd_decoder *outDec; 
  const SndAliasList *v30; 
  const SndAliasList *v31; 
  sd_source *decInSource; 
  sd_source *decLoopSource; 
  sd_source *decOutSource; 

  _RDI = futz;
  __asm { vmovaps [rsp+48h+var_28], xmm6 }
  if ( futz->curInAlias != startAliasId && futz->playbackState == PLAY_DONE )
  {
    inDec = futz->inDec;
    if ( inDec )
    {
      SD_DecoderFree(inDec);
      _RDI->inDec = NULL;
    }
    SD_SourceShutdown(_RDI->decInSource);
    if ( startAliasId )
    {
      AliasFromId = SND_FindAliasFromId(startAliasId);
      v13 = AliasFromId;
      if ( AliasFromId )
      {
        if ( VoiceDecode_FutzAllocateSource(AliasFromId, _RDI->decInSource) )
        {
          _RBX = v13->head;
          __asm { vmovss  xmm6, dword ptr [rbx+4Ch] }
          *(double *)&_XMM0 = I_random();
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+50h]
            vsubss  xmm2, xmm1, xmm6
            vmulss  xmm0, xmm0, xmm2
            vmovss  xmm2, cs:__real@40800000; max
            vaddss  xmm0, xmm0, xmm6; val
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovss  dword ptr [rdi+70h], xmm0 }
        }
      }
    }
    _RDI->curInAlias = startAliasId;
  }
  if ( _RDI->curLoopAlias != loopAliasId && _RDI->playbackState == PLAY_DONE )
  {
    loopDec = _RDI->loopDec;
    if ( loopDec )
    {
      SD_DecoderFree(loopDec);
      _RDI->loopDec = NULL;
    }
    SD_SourceShutdown(_RDI->decLoopSource);
    if ( loopAliasId )
    {
      v21 = SND_FindAliasFromId(loopAliasId);
      v22 = v21;
      if ( v21 )
      {
        if ( VoiceDecode_FutzAllocateSource(v21, _RDI->decLoopSource) )
        {
          _RBX = v22->head;
          __asm { vmovss  xmm6, dword ptr [rbx+4Ch] }
          *(double *)&_XMM0 = I_random();
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+50h]
            vsubss  xmm2, xmm1, xmm6
            vmulss  xmm0, xmm0, xmm2
            vmovss  xmm2, cs:__real@40800000; max
            vaddss  xmm0, xmm0, xmm6; val
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovss  dword ptr [rdi+88h], xmm0 }
        }
      }
    }
    _RDI->curLoopAlias = loopAliasId;
  }
  if ( _RDI->curOutAlias != stopAliasId && _RDI->playbackState == PLAY_DONE )
  {
    outDec = _RDI->outDec;
    if ( outDec )
    {
      SD_DecoderFree(outDec);
      _RDI->outDec = NULL;
    }
    SD_SourceShutdown(_RDI->decOutSource);
    if ( stopAliasId )
    {
      v30 = SND_FindAliasFromId(stopAliasId);
      v31 = v30;
      if ( v30 )
      {
        if ( VoiceDecode_FutzAllocateSource(v30, _RDI->decOutSource) )
        {
          _RBX = v31->head;
          __asm { vmovss  xmm6, dword ptr [rbx+4Ch] }
          *(double *)&_XMM0 = I_random();
          __asm
          {
            vmovss  xmm3, dword ptr [rbx+50h]
            vmovss  xmm2, cs:__real@40800000; max
            vsubss  xmm4, xmm3, xmm6
            vmulss  xmm0, xmm0, xmm4
            vaddss  xmm0, xmm0, xmm6; val
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovss  dword ptr [rdi+0A0h], xmm0 }
        }
      }
    }
    _RDI->curOutAlias = stopAliasId;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_28] }
  if ( !_RDI->inDec )
  {
    decInSource = _RDI->decInSource;
    if ( decInSource->entry )
    {
      decInSource->stream = NULL;
      *(_WORD *)&decInSource->primed = 1;
      decInSource->eos = 0;
      decInSource->startFrame = 0i64;
      _RDI->inDec = SD_DecoderAllocate(decInSource);
    }
  }
  if ( !_RDI->loopDec )
  {
    decLoopSource = _RDI->decLoopSource;
    if ( decLoopSource->entry )
    {
      decLoopSource->stream = NULL;
      *(_WORD *)&decLoopSource->primed = 1;
      decLoopSource->eos = 0;
      decLoopSource->startFrame = 0i64;
      _RDI->loopDec = SD_DecoderAllocate(decLoopSource);
    }
  }
  if ( !_RDI->outDec )
  {
    decOutSource = _RDI->decOutSource;
    if ( decOutSource->entry )
    {
      decOutSource->stream = NULL;
      *(_WORD *)&decOutSource->primed = 1;
      decOutSource->eos = 0;
      decOutSource->startFrame = 0i64;
      _RDI->outDec = SD_DecoderAllocate(decOutSource);
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
  unsigned int v4; 
  sd_decoder **p_inDec; 
  volatile __int32 *v6; 
  __int64 v7; 
  int v8; 
  sd_decoder *v9; 
  sd_decoder *v10; 

  if ( s_futzParamsPending.isNew )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_futzParamsPending.isNew
      vmovups ymm1, ymmword ptr cs:s_futzParamsPending.futzDspParams.pregain
      vmovups ymmword ptr cs:s_futzParamsCurrent.isNew, ymm0
      vmovups ymmword ptr cs:s_futzParamsCurrent.futzDspParams.pregain, ymm1
    }
    s_futzParamsCurrent.stopAliasId = s_futzParamsPending.stopAliasId;
    s_futzParamsPending.isNew = 0;
  }
  v4 = 0;
  p_inDec = &s_voiceFutzPool[0].inDec;
  do
  {
    v6 = (volatile __int32 *)(p_inDec - 13);
    if ( *((_DWORD *)p_inDec - 26) == 2 )
    {
      v7 = *((int *)p_inDec - 25);
      VoiceDecode_FutzInitAssets((VoiceFutz *)(p_inDec - 13), s_futzParamsCurrent.startAliasId, s_futzParamsCurrent.loopAliasId, s_futzParamsCurrent.stopAliasId);
      v8 = maxSamplesDecoded[v7];
      if ( (unsigned int)v7 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 616, ASSERT_TYPE_ASSERT, "(i<SND_VOICE_BUS_COUNT)", (const char *)&queryFormat, "i<SND_VOICE_BUS_COUNT") )
        __debugbreak();
      VoiceDecode_FutzProcess((VoiceFutz *)(p_inDec - 13), &g_sd.voiceBusBuffers[(_DWORD)v7 << 8], v8, 256, &s_futzParamsCurrent.futzDspParams);
    }
    else if ( *v6 == 3 )
    {
      if ( *p_inDec )
      {
        SD_DecoderFree(*p_inDec);
        *p_inDec = NULL;
      }
      SD_SourceShutdown((sd_source *)*(p_inDec - 1));
      v9 = p_inDec[3];
      if ( v9 )
      {
        SD_DecoderFree(v9);
        p_inDec[3] = NULL;
      }
      SD_SourceShutdown((sd_source *)p_inDec[2]);
      v10 = p_inDec[6];
      if ( v10 )
      {
        SD_DecoderFree(v10);
        p_inDec[6] = NULL;
      }
      SD_SourceShutdown((sd_source *)p_inDec[5]);
      if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", p_inDec - 13) )
        __debugbreak();
      _InterlockedExchange(v6, 0);
    }
    ++v4;
    p_inDec += 21;
  }
  while ( v4 < 8 );
}

/*
==============
VoiceDecode_FutzProcess
==============
*/
void VoiceDecode_FutzProcess(VoiceFutz *futz, float *inPlace, int count, int maxCount, const SndDspFutzParam *futzParams)
{
  unsigned __int64 v9; 
  int v12; 
  int v13; 
  int v15; 
  sd_decoder *loopDec; 
  int v19; 
  __int64 v20; 
  unsigned int v21; 
  float *v22; 
  __int64 v24; 
  __int64 v28; 
  sd_decoder *outDec; 
  int v33; 
  float *v34; 
  __int64 v36; 
  __int64 v40; 
  sd_decoder *v43; 
  _DWORD *v44; 
  __int64 i; 
  int v47; 
  int v49; 
  unsigned int v50; 
  unsigned int v51; 
  __int64 v54; 
  float *v56; 
  sd_decoder *inDec; 
  sd_source *decInSource; 
  int v61; 
  sd_source *decOutSource; 
  __int64 v65; 
  char v66[2096]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  v9 = (unsigned __int64)v66 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v9 + 2080) = (unsigned __int64)&v65 ^ _security_cookie;
  _RBX = futz;
  *(_DWORD *)(v9 + 4) = maxCount;
  *(_DWORD *)v9 = count;
  v12 = maxCount;
  v13 = count;
  Sys_ProfBeginNamedEvent(0xFFFF00u, "VoiceDecode_FutzProcess");
  if ( v13 > 0 )
  {
    __asm { vmovss  xmm2, cs:__real@473b8000; rate }
    SND_DspFutzMono(futzParams, &_RBX->futzDSPState, *(float *)&_XMM2, v13, inPlace, (float *)(v9 + 32), (float *)(v9 + 1056));
  }
  v15 = v12;
  if ( v12 > 0 )
  {
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    do
    {
      if ( _RBX->playbackState == PLAY_START )
      {
        v61 = 4;
        if ( _RBX->inDec )
          v61 = 2;
        _RBX->playbackState = v61;
      }
      else
      {
        if ( _RBX->playbackState == PLAY_IN )
        {
          v44 = (_DWORD *)(v9 + 32);
          for ( i = 256i64; i; --i )
            *v44++ = 0;
          __asm { vmovaps xmm1, xmm7; pitchRatio }
          v47 = VoiceDecode_DecoderRead(_RBX->inDec, *(float *)&_XMM1, (float *)(v9 + 32), v15);
          __asm { vmovss  xmm6, dword ptr [rbx+70h] }
          v49 = v47;
          v50 = v47 + 7;
          if ( (((_BYTE)v9 + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 596, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", v9 + 32) )
            __debugbreak();
          if ( ((unsigned __int8)inPlace & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 597, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", inPlace) )
            __debugbreak();
          v51 = v50 >> 3;
          __asm
          {
            vmovaps xmm2, xmm6
            vshufps xmm2, xmm2, xmm2, 0
            vinsertf128 ymm2, ymm2, xmm2, 1
          }
          if ( v51 )
          {
            v54 = v51;
            _RCX = inPlace;
            v56 = inPlace;
            do
            {
              _RCX += 8;
              __asm
              {
                vmulps  ymm0, ymm2, ymmword ptr [rdi+rax]
                vaddps  ymm1, ymm0, ymmword ptr [rax]
              }
              v56 += 8;
              __asm { vmovups ymmword ptr [rcx-20h], ymm1 }
              --v54;
            }
            while ( v54 );
          }
          inDec = _RBX->inDec;
          v15 -= v49;
          if ( !inDec->output.count )
          {
            SD_DecoderFree(inDec);
            decInSource = _RBX->decInSource;
            decInSource->stream = NULL;
            *(_WORD *)&decInSource->primed = 1;
            decInSource->eos = 0;
            decInSource->startFrame = 0i64;
            _RBX->inDec = SD_DecoderAllocate(decInSource);
            _RBX->playbackState = PLAY_LOOP;
          }
        }
        else
        {
          if ( _RBX->playbackState != PLAY_OUT )
          {
            if ( _RBX->playbackState == PLAY_LOOP )
            {
              loopDec = _RBX->loopDec;
              if ( !loopDec )
                goto LABEL_23;
              __asm { vmovaps xmm1, xmm7; pitchRatio }
              v19 = VoiceDecode_DecoderRead(loopDec, *(float *)&_XMM1, (float *)(v9 + 32), v15);
              v20 = v19;
              if ( v19 > 0 )
              {
                v21 = v19 + 7;
                v22 = &inPlace[v12 - v15];
                memcpy_0((void *)(v9 + 1056), v22, 4i64 * v19);
                __asm { vmovss  xmm6, dword ptr [rbx+88h] }
                if ( (((_BYTE)v9 + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 596, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", v9 + 32) )
                  __debugbreak();
                if ( (((_BYTE)v9 + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 597, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v9 + 1056) )
                  __debugbreak();
                v24 = v21 >> 3;
                __asm
                {
                  vmovaps xmm2, xmm6
                  vshufps xmm2, xmm2, xmm2, 0
                  vinsertf128 ymm2, ymm2, xmm2, 1
                }
                if ( (_DWORD)v24 )
                {
                  _RDX = v9 + 1056;
                  v28 = 0i64;
                  do
                  {
                    _RDX += 32i64;
                    __asm
                    {
                      vmulps  ymm0, ymm2, ymmword ptr [rbp+rax+20h]
                      vaddps  ymm1, ymm0, ymmword ptr [rbp+rax+420h]
                    }
                    v28 += 32i64;
                    __asm { vmovups ymmword ptr [rdx-20h], ymm1 }
                    --v24;
                  }
                  while ( v24 );
                }
                memcpy_0(v22, (const void *)(v9 + 1056), 4 * v20);
                v12 = *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
                v15 -= v20;
                v13 = *(_DWORD *)v9;
              }
              else
              {
LABEL_23:
                v15 = 0;
              }
              if ( v13 < v12 )
              {
                _RBX->playbackState = PLAY_OUT;
                v15 = v12 - v13;
              }
            }
            else
            {
              if ( !v13 )
                break;
              _RBX->playbackState = PLAY_START;
            }
            continue;
          }
          outDec = _RBX->outDec;
          if ( !outDec )
          {
            _RBX->playbackState = PLAY_DONE;
            break;
          }
          __asm { vmovaps xmm1, xmm7; pitchRatio }
          v33 = VoiceDecode_DecoderRead(outDec, *(float *)&_XMM1, (float *)(v9 + 32), v15);
          v34 = &inPlace[v12 - v15];
          memcpy_0((void *)(v9 + 1056), v34, 4i64 * v33);
          __asm { vmovss  xmm6, dword ptr [rbx+70h] }
          if ( (((_BYTE)v9 + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 596, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", v9 + 32) )
            __debugbreak();
          if ( (((_BYTE)v9 + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 597, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v9 + 1056) )
            __debugbreak();
          v36 = (unsigned int)(v33 + 7) >> 3;
          __asm
          {
            vmovaps xmm2, xmm6
            vshufps xmm2, xmm2, xmm2, 0
            vinsertf128 ymm2, ymm2, xmm2, 1
          }
          if ( (_DWORD)v36 )
          {
            _RDX = v9 + 1056;
            v40 = 0i64;
            do
            {
              _RDX += 32i64;
              __asm
              {
                vmulps  ymm0, ymm2, ymmword ptr [rbp+rax+20h]
                vaddps  ymm1, ymm0, ymmword ptr [rbp+rax+420h]
              }
              v40 += 32i64;
              __asm { vmovups ymmword ptr [rdx-20h], ymm1 }
              --v36;
            }
            while ( v36 );
          }
          memcpy_0(v34, (const void *)(v9 + 1056), 4i64 * v33);
          v43 = _RBX->outDec;
          v15 -= v33;
          if ( !v43->output.count )
          {
            SD_DecoderFree(v43);
            decOutSource = _RBX->decOutSource;
            decOutSource->stream = NULL;
            *(_WORD *)&decOutSource->primed = 1;
            decOutSource->eos = 0;
            decOutSource->startFrame = 0i64;
            _RBX->outDec = SD_DecoderAllocate(decOutSource);
            _RBX->playbackState = PLAY_DONE;
            break;
          }
          v12 = *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
        }
        v13 = *(_DWORD *)v9;
      }
    }
    while ( v15 > 0 );
  }
  Sys_ProfEndNamedEvent();
  __asm
  {
    vmovaps xmm6, [rsp+8F8h+var_58]
    vmovaps xmm7, [rsp+8F8h+var_68]
  }
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
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+78h]
    vmovss  cs:s_futzParamsPending.futzDspParams.blend, xmm0
    vmovss  xmm1, dword ptr [rcx+48h]
    vmovss  cs:s_futzParamsPending.futzDspParams.bpfF, xmm1
    vmovss  xmm0, dword ptr [rcx+4Ch]
    vmovss  cs:s_futzParamsPending.futzDspParams.bpfQ, xmm0
    vmovss  xmm1, dword ptr [rcx+5Ch]
    vmovss  cs:s_futzParamsPending.futzDspParams.distortion, xmm1
    vmovss  xmm0, dword ptr [rcx+54h]
    vmovss  cs:s_futzParamsPending.futzDspParams.lsF, xmm0
    vmovss  xmm1, dword ptr [rcx+50h]
    vmovss  cs:s_futzParamsPending.futzDspParams.lsG, xmm1
    vmovss  xmm0, dword ptr [rcx+58h]
    vmovss  cs:s_futzParamsPending.futzDspParams.lsQ, xmm0
    vmovss  xmm1, dword ptr [rcx+74h]
    vmovss  cs:s_futzParamsPending.futzDspParams.postclip, xmm1
    vmovss  xmm0, dword ptr [rcx+64h]
    vmovss  cs:s_futzParamsPending.futzDspParams.postgain, xmm0
    vmovss  xmm1, dword ptr [rcx+70h]
    vmovss  cs:s_futzParamsPending.futzDspParams.preclip, xmm1
    vmovss  xmm0, dword ptr [rcx+60h]
    vmovss  cs:s_futzParamsPending.futzDspParams.pregain, xmm0
    vmovss  xmm1, dword ptr [rcx+6Ch]
    vmovss  cs:s_futzParamsPending.futzDspParams.squelch.tg, xmm1
    vmovss  xmm0, dword ptr [rcx+68h]
    vmovss  cs:s_futzParamsPending.futzDspParams.squelch.th, xmm0
  }
  s_futzParamsPending.startAliasId = futzDef->startAliasId;
  s_futzParamsPending.loopAliasId = futzDef->loopAliasId;
  s_futzParamsPending.stopAliasId = futzDef->stopAliasId;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  s_futzParamsPending.isNew = 1;
  return 1;
}

