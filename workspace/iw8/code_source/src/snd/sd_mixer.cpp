/*
==============
SD_MixBusses
==============
*/

void SD_MixBusses(void)
{
  ?SD_MixBusses@@YAXXZ();
}

/*
==============
SD_MixShutdown
==============
*/

void SD_MixShutdown(void)
{
  ?SD_MixShutdown@@YAXXZ();
}

/*
==============
SD_VoiceChatMixFrame
==============
*/

void SD_VoiceChatMixFrame(void)
{
  ?SD_VoiceChatMixFrame@@YAXXZ();
}

/*
==============
SD_MixVoicesAndMaster
==============
*/

void SD_MixVoicesAndMaster(void)
{
  ?SD_MixVoicesAndMaster@@YAXXZ();
}

/*
==============
SD_VoiceStarvePrint
==============
*/

void __fastcall SD_VoiceStarvePrint(unsigned int voiceCount, sd_voice *voicePool)
{
  ?SD_VoiceStarvePrint@@YAXIPEAUsd_voice@@@Z(voiceCount, voicePool);
}

/*
==============
SD_MixInit
==============
*/

void SD_MixInit(void)
{
  ?SD_MixInit@@YAXXZ();
}

/*
==============
SD_MixUpdateParam
==============
*/

void SD_MixUpdateParam(void)
{
  ?SD_MixUpdateParam@@YAXXZ();
}

/*
==============
SD_MixFrameEnd
==============
*/

void SD_MixFrameEnd(void)
{
  ?SD_MixFrameEnd@@YAXXZ();
}

/*
==============
SD_MixParamFree
==============
*/

void __fastcall SD_MixParamFree(sd_mix_master_param *param)
{
  ?SD_MixParamFree@@YAXPEAUsd_mix_master_param@@@Z(param);
}

/*
==============
SD_MixFrameBegin
==============
*/

void SD_MixFrameBegin(void)
{
  ?SD_MixFrameBegin@@YAXXZ();
}

/*
==============
SD_MixSetParam
==============
*/

void __fastcall SD_MixSetParam(sd_mix_master_param *param)
{
  ?SD_MixSetParam@@YAXPEAUsd_mix_master_param@@@Z(param);
}

/*
==============
SD_MixParamAllocate
==============
*/

sd_mix_master_param *__fastcall SD_MixParamAllocate()
{
  return ?SD_MixParamAllocate@@YAPEAUsd_mix_master_param@@XZ();
}

/*
==============
SD_MixBusses
==============
*/
void SD_MixBusses(void)
{
  if ( g_sd.mixParam )
  {
    SD_MixReverb();
    SD_MixMaster();
    if ( !g_sd.mixParam->paused )
      ++g_sd.autoSimClock;
  }
}

/*
==============
SD_MixFrameBegin
==============
*/
void SD_MixFrameBegin(void)
{
  sd_mix_master_param *mixParamNew; 

  SD_DecoderPreFrame();
  SD_VoiceFrameActive();
  mixParamNew = g_sd.mixParamNew;
  if ( !g_sd.mixParamNew )
    goto LABEL_8;
  while ( mixParamNew != (sd_mix_master_param *)_InterlockedCompareExchange64((volatile signed __int64 *)&g_sd.mixParamNew, 0i64, (signed __int64)mixParamNew) )
    mixParamNew = g_sd.mixParamNew;
  if ( mixParamNew )
  {
    if ( g_sd.mixParam )
      SD_MixParamFree(g_sd.mixParam);
    g_sd.mixParam = mixParamNew;
  }
  else
  {
LABEL_8:
    mixParamNew = g_sd.mixParam;
  }
  if ( !mixParamNew && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mixer.cpp", 151, ASSERT_TYPE_ASSERT, "(g_sd.mixParam)", (const char *)&queryFormat, "g_sd.mixParam") )
    __debugbreak();
}

/*
==============
SD_MixFrameEnd
==============
*/
void SD_MixFrameEnd(void)
{
  unsigned int *p_starvedThisFrame; 
  sd_voice_param **voiceParam; 
  unsigned int i; 
  __int64 v3; 
  unsigned int v4; 
  __int64 v5; 
  const void *v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 

  SD_OutputSubmitBuffer();
  SD_DecoderPostFrame();
  SD_VoiceFrameFreed();
  if ( !Com_ErrorEntered() )
  {
    p_starvedThisFrame = &g_sd.voicePool[0].starvedThisFrame;
    voiceParam = g_sd.voiceParam;
    for ( i = 0; i < 0xC6; ++i )
    {
      if ( *(p_starvedThisFrame - 131) )
      {
        if ( !*p_starvedThisFrame || (v3 = *(_QWORD *)(p_starvedThisFrame - 101)) == 0 || !*(_QWORD *)(v3 + 32) || *(_BYTE *)(v3 + 40) || !*voiceParam )
        {
          v8 = *(_QWORD *)(p_starvedThisFrame - 101);
          if ( v8 )
            *(_DWORD *)(v8 + 44) = -1;
          goto LABEL_18;
        }
        *(_DWORD *)(v3 + 44) = i;
        *p_starvedThisFrame = 0;
        ++g_sd.voiceStarvationCount;
        v4 = *(p_starvedThisFrame - 1);
        if ( v4 <= 0x1388 )
          goto LABEL_15;
        if ( Com_ErrorEntered() )
          goto LABEL_14;
        v5 = *(_QWORD *)(p_starvedThisFrame - 109);
        v6 = *(const void **)(p_starvedThisFrame - 101);
        if ( !v5 )
        {
          Com_Printf(9, "shutting down voice %d %p\n", i, v6);
LABEL_14:
          v4 = *(p_starvedThisFrame - 1);
          *((_BYTE *)p_starvedThisFrame - 520) = 1;
LABEL_15:
          *(p_starvedThisFrame - 1) = v4 + 1;
          goto LABEL_18;
        }
        LODWORD(v9) = *(_DWORD *)(*(_QWORD *)(p_starvedThisFrame - 123) + 12i64);
        Com_Printf(9, "shutting down voice %d %p %d %s\n", i, v6, v9, *(const char **)(v5 + 8));
        v7 = *(p_starvedThisFrame - 1) + 1;
        *((_BYTE *)p_starvedThisFrame - 520) = 1;
        *(p_starvedThisFrame - 1) = v7;
      }
LABEL_18:
      p_starvedThisFrame += 266;
      ++voiceParam;
    }
  }
  SD_StatFrame();
  ++g_sd.buffersSubmitted;
}

/*
==============
SD_MixInit
==============
*/
void SD_MixInit(void)
{
  __int64 v0; 
  snd_rv_state_simd *radverb; 
  __int64 v2; 
  float *v3; 
  unsigned int v4; 
  unsigned int *quadDelayParamHash; 
  snd_quad_five_tap_delay_state *quadDelay; 
  snd_quad_five_tap_delay_params params; 

  g_sd.mixParam = NULL;
  g_sd.mixParamNew = NULL;
  g_sd.mixParamInUse = 0;
  g_sd.mixParamAllocated = 0;
  memset_0(g_sd.mixParamPool, 0, sizeof(g_sd.mixParamPool));
  memset_0(g_sd.busBuffers, 0, sizeof(g_sd.busBuffers));
  memset_0(&g_sd.mixMasterState, 0, sizeof(g_sd.mixMasterState));
  sd_mix_master_dynamics_state::sd_mix_master_dynamics_state(&g_sd.mixMasterState.dynDialogue);
  sd_mix_master_dynamics_state::sd_mix_master_dynamics_state(&g_sd.mixMasterState.dynSfx);
  sd_mix_master_dynamics_state::sd_mix_master_dynamics_state(&g_sd.mixMasterState.dynMain);
  v0 = 4i64;
  radverb = g_sd.radverb;
  v2 = 4i64;
  v3 = g_sd.radverbDelayLine[0];
  do
  {
    SND_RvInit(radverb, v3);
    v3 += 0x20000;
    ++radverb;
    --v2;
  }
  while ( v2 );
  SND_DelayParamsDefault(&params);
  v4 = SND_Hash(&params, 0x64u);
  quadDelayParamHash = g_sd.quadDelayParamHash;
  quadDelay = g_sd.quadDelay;
  do
  {
    SND_FiveTapDelayInit(quadDelay);
    SND_FiveTapDelaySetParams(quadDelay++, &params);
    *quadDelayParamHash++ = v4;
    --v0;
  }
  while ( v0 );
  g_sd.buffersSubmitted = 0;
  g_sd.autoSimClock = 0i64;
}

/*
==============
SD_MixParamAllocate
==============
*/
sd_mix_master_param *SD_MixParamAllocate()
{
  int v0; 
  sd_mix_master_param *i; 

  Sys_ProfBeginNamedEvent(0xFF00u, "SD_MixParamAllocate");
  v0 = 0;
  for ( i = g_sd.mixParamPool; ; ++i )
  {
    if ( i->state == SD_MIX_PARAM_FREE )
    {
      if ( ((unsigned __int8)i & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", i) )
        __debugbreak();
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)i, 1, 0) )
        break;
    }
    if ( (unsigned int)++v0 >= 4 )
    {
      Sys_ProfEndNamedEvent();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mixer.cpp", 88, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SD_MixParamAllocate failed to allocate") )
        __debugbreak();
      return 0i64;
    }
  }
  if ( ((unsigned __int8)&g_sd.mixParamInUse & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd.mixParamInUse) )
    __debugbreak();
  _InterlockedIncrement(&g_sd.mixParamInUse);
  if ( ((unsigned __int8)&g_sd.mixParamAllocated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd.mixParamAllocated) )
    __debugbreak();
  _InterlockedIncrement(&g_sd.mixParamAllocated);
  Sys_ProfEndNamedEvent();
  return i;
}

/*
==============
SD_MixParamFree
==============
*/
void SD_MixParamFree(sd_mix_master_param *param)
{
  if ( param->state != SD_MIX_PARAM_ALLOCATED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mixer.cpp", 96, ASSERT_TYPE_ASSERT, "(param->state == SD_MIX_PARAM_ALLOCATED)", (const char *)&queryFormat, "param->state == SD_MIX_PARAM_ALLOCATED") )
    __debugbreak();
  param->state = SD_MIX_PARAM_FREE;
  if ( ((unsigned __int8)&g_sd.mixParamInUse & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd.mixParamInUse) )
    __debugbreak();
  _InterlockedDecrement(&g_sd.mixParamInUse);
}

/*
==============
SD_MixSetParam
==============
*/
void SD_MixSetParam(sd_mix_master_param *param)
{
  sd_mix_master_param *mixParamNew; 
  sd_mix_master_param *v3; 

  if ( param )
  {
    Sys_ProfBeginNamedEvent(0xFF00u, "SD_MixSetParam");
    if ( param->state != SD_MIX_PARAM_ALLOCATED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mixer.cpp", 113, ASSERT_TYPE_ASSERT, "(param->state == SD_MIX_PARAM_ALLOCATED)", (const char *)&queryFormat, "param->state == SD_MIX_PARAM_ALLOCATED") )
      __debugbreak();
    do
    {
      mixParamNew = g_sd.mixParamNew;
      v3 = g_sd.mixParamNew;
    }
    while ( v3 != (sd_mix_master_param *)_InterlockedCompareExchange64((volatile signed __int64 *)&g_sd.mixParamNew, (signed __int64)param, (signed __int64)g_sd.mixParamNew) );
    if ( mixParamNew )
      SD_MixParamFree(mixParamNew);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
SD_MixShutdown
==============
*/
void SD_MixShutdown(void)
{
  ;
}

/*
==============
SD_MixUpdateParam
==============
*/
void SD_MixUpdateParam(void)
{
  sd_mix_master_param *mixParamNew; 

  mixParamNew = g_sd.mixParamNew;
  if ( !g_sd.mixParamNew )
    goto LABEL_8;
  while ( mixParamNew != (sd_mix_master_param *)_InterlockedCompareExchange64((volatile signed __int64 *)&g_sd.mixParamNew, 0i64, (signed __int64)mixParamNew) )
    mixParamNew = g_sd.mixParamNew;
  if ( mixParamNew )
  {
    if ( g_sd.mixParam )
      SD_MixParamFree(g_sd.mixParam);
    g_sd.mixParam = mixParamNew;
  }
  else
  {
LABEL_8:
    mixParamNew = g_sd.mixParam;
  }
  if ( !mixParamNew && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mixer.cpp", 151, ASSERT_TYPE_ASSERT, "(g_sd.mixParam)", (const char *)&queryFormat, "g_sd.mixParam") )
    __debugbreak();
}

/*
==============
SD_MixVoicesAndMaster
==============
*/
void SD_MixVoicesAndMaster(void)
{
  int v0; 

  v0 = Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "sd mix voices usec");
  SD_MixVoices(0xC6u, g_sd.voicePool, g_sd.voiceParam, g_sd.busBuffers);
  g_sd.mixVoicesUsec = Sys_Microseconds() - v0;
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_VoiceChatMixFrame
==============
*/
void SD_VoiceChatMixFrame(void)
{
  Voice_MixVoiceChat();
  SD_DecoderPostFrame();
}

/*
==============
SD_VoiceStarvePrint
==============
*/
void SD_VoiceStarvePrint(unsigned int voiceCount, sd_voice *voicePool)
{
  unsigned int v4; 
  unsigned int *p_starvedThisFrame; 
  sd_voice_param **voiceParam; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  const void *v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !Com_ErrorEntered() )
  {
    v4 = 0;
    if ( voiceCount )
    {
      p_starvedThisFrame = &voicePool->starvedThisFrame;
      voiceParam = g_sd.voiceParam;
      do
      {
        if ( *(p_starvedThisFrame - 131) )
        {
          if ( !*p_starvedThisFrame || (v7 = *(_QWORD *)(p_starvedThisFrame - 101)) == 0 || !*(_QWORD *)(v7 + 32) || *(_BYTE *)(v7 + 40) || !*voiceParam )
          {
            v12 = *(_QWORD *)(p_starvedThisFrame - 101);
            if ( v12 )
              *(_DWORD *)(v12 + 44) = -1;
            goto LABEL_19;
          }
          *(_DWORD *)(v7 + 44) = v4;
          *p_starvedThisFrame = 0;
          ++g_sd.voiceStarvationCount;
          v8 = *(p_starvedThisFrame - 1);
          if ( v8 <= 0x1388 )
            goto LABEL_16;
          if ( Com_ErrorEntered() )
            goto LABEL_15;
          v9 = *(_QWORD *)(p_starvedThisFrame - 109);
          v10 = *(const void **)(p_starvedThisFrame - 101);
          if ( !v9 )
          {
            Com_Printf(9, "shutting down voice %d %p\n", v4, v10);
LABEL_15:
            v8 = *(p_starvedThisFrame - 1);
            *((_BYTE *)p_starvedThisFrame - 520) = 1;
LABEL_16:
            *(p_starvedThisFrame - 1) = v8 + 1;
            goto LABEL_19;
          }
          LODWORD(v13) = *(_DWORD *)(*(_QWORD *)(p_starvedThisFrame - 123) + 12i64);
          Com_Printf(9, "shutting down voice %d %p %d %s\n", v4, v10, v13, *(const char **)(v9 + 8));
          v11 = *(p_starvedThisFrame - 1) + 1;
          *((_BYTE *)p_starvedThisFrame - 520) = 1;
          *(p_starvedThisFrame - 1) = v11;
        }
LABEL_19:
        ++v4;
        p_starvedThisFrame += 266;
        ++voiceParam;
      }
      while ( v4 < voiceCount );
    }
  }
}

