/*
==============
SNDL_ResetMusicState
==============
*/

void __fastcall SNDL_ResetMusicState(SndMusicState *state)
{
  ?SNDL_ResetMusicState@@YAXPEAUSndMusicState@@@Z(state);
}

/*
==============
SNDL_SetMusicState
==============
*/

void __fastcall SNDL_SetMusicState(unsigned int id)
{
  ?SNDL_SetMusicState@@YAXI@Z(id);
}

/*
==============
SND_MusicInit
==============
*/

void SND_MusicInit(void)
{
  ?SND_MusicInit@@YAXXZ();
}

/*
==============
SND_MusicUpdate
==============
*/

void SND_MusicUpdate(void)
{
  ?SND_MusicUpdate@@YAXXZ();
}

/*
==============
SNDL_StopMusicState
==============
*/

void __fastcall SNDL_StopMusicState(unsigned int id)
{
  ?SNDL_StopMusicState@@YAXI@Z(id);
}

/*
==============
SND_GetCurrentMusicState
==============
*/

const SndMusicState *__fastcall SND_GetCurrentMusicState()
{
  return ?SND_GetCurrentMusicState@@YAPEBUSndMusicState@@XZ();
}

/*
==============
SNDL_StopMusicState
==============
*/

void __fastcall SNDL_StopMusicState(const unsigned int *stateIdArray, unsigned int arrayCount)
{
  ?SNDL_StopMusicState@@YAXPEBII@Z(stateIdArray, arrayCount);
}

/*
==============
SndMusicAssetInstance::SetMusicState
==============
*/

void __fastcall SndMusicAssetInstance::SetMusicState(SndMusicAssetInstance *this, SndMusicState *pState)
{
  ?SetMusicState@SndMusicAssetInstance@@QEAAXPEAUSndMusicState@@@Z(this, pState);
}

/*
==============
SNDL_SetMusicState
==============
*/

void __fastcall SNDL_SetMusicState(unsigned int stateId, const unsigned int *assetIdPlaylist, unsigned int assetIdCount)
{
  ?SNDL_SetMusicState@@YAXIPEBII@Z(stateId, assetIdPlaylist, assetIdCount);
}

/*
==============
SND_ReleaseMusicAssetInstance
==============
*/

void __fastcall SND_ReleaseMusicAssetInstance(SndMusicAssetInstance *instance)
{
  ?SND_ReleaseMusicAssetInstance@@YAXPEAUSndMusicAssetInstance@@@Z(instance);
}

/*
==============
SNDL_ResetMusicState
==============
*/
void SNDL_ResetMusicState(SndMusicState *state)
{
  SndMusicAssetInstance *musicPlaybacks; 
  SndMusicState *v3; 
  SndMusicState *musicRequestedState; 

  if ( state )
  {
    musicPlaybacks = g_snd.musicPlaybacks;
    do
    {
      v3 = musicPlaybacks->state;
      if ( v3 && v3 == state )
        SND_ReleaseMusicAssetInstance(musicPlaybacks);
      ++musicPlaybacks;
    }
    while ( (__int64)musicPlaybacks < (__int64)&g_snd.currentStateLooping );
    state->status = SND_MUSIC_STATE_INACTIVE;
    musicRequestedState = g_snd.musicRequestedState;
    if ( state == g_snd.musicRequestedState )
      musicRequestedState = NULL;
    g_snd.musicRequestedState = musicRequestedState;
  }
}

/*
==============
SNDL_SetMusicState
==============
*/
void SNDL_SetMusicState(unsigned int id)
{
  SndMusicState *MusicState; 
  unsigned int i; 
  unsigned int *v4; 
  const dvar_t *v5; 
  SndMusicState *musicRequestedState; 
  SndMusicState *musicCurrentState; 
  SndMusicState *musicPreviousState; 
  bool v9; 
  int v10; 
  SndMusicState *v11; 
  SndMusicAssetInstance *musicPlaybacks; 
  SndVoice *PlaybackVoice; 
  const SndAssetBankEntry *assetEntry; 
  __int64 frameCount; 
  int v16; 
  SndVoice *v17; 
  int v18; 
  __int64 v19; 
  ScopedCriticalSection v20; 
  SndAliasGroupTracking inOutTracking; 

  ScopedCriticalSection::ScopedCriticalSection(&v20, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
  MusicState = SND_GetMusicState(id);
  if ( MusicState == g_snd.musicRequestedState )
    goto LABEL_54;
  if ( MusicState )
  {
    if ( g_snd.musicRequestedState && MusicState->interruptPriority < g_snd.musicRequestedState->persistPriority )
      goto LABEL_54;
    MusicState->status = SND_MUSIC_STATE_INACTIVE;
    for ( i = 0; i < MusicState->loopCount; ++i )
      MusicState->loops[i].inactive = 0;
  }
  g_snd.musicRequestedState = MusicState;
  v4 = NULL;
  v5 = DCONST_DVARBOOL_snd_enable_capture_mode;
  if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    if ( g_snd.musicCurrentState )
      SND_EndMusicState(g_snd.musicCurrentState, 1);
    goto LABEL_54;
  }
  musicRequestedState = g_snd.musicRequestedState;
  musicCurrentState = g_snd.musicCurrentState;
  musicPreviousState = g_snd.musicPreviousState;
  if ( g_snd.musicRequestedState == g_snd.musicCurrentState )
    goto LABEL_22;
  if ( g_snd.musicCurrentState && g_snd.musicCurrentState->status == SND_MUSIC_STATE_ACTIVE )
  {
    v9 = g_snd.musicRequestedState && g_snd.musicRequestedState->skipPreviousExit;
    if ( !SND_EndMusicState(g_snd.musicCurrentState, v9) )
      goto LABEL_22;
  }
  musicPreviousState = musicCurrentState;
  musicCurrentState = musicRequestedState;
  if ( musicRequestedState )
  {
    g_snd.musicCurrentStateId = musicRequestedState->id;
LABEL_22:
    if ( musicCurrentState && musicCurrentState->status == SND_MUSIC_STATE_INACTIVE )
    {
      LOBYTE(v10) = SND_StartMusicState(musicCurrentState, musicPreviousState);
      if ( v10 )
      {
        musicCurrentState->status = v10 == 1;
      }
      else
      {
        v11 = NULL;
        if ( musicRequestedState != musicCurrentState )
          v11 = musicRequestedState;
        musicRequestedState = v11;
        musicCurrentState->status = SND_MUSIC_STATE_INACTIVE;
        musicCurrentState = NULL;
      }
    }
    goto LABEL_30;
  }
  g_snd.musicCurrentStateId = 0;
LABEL_30:
  g_snd.musicRequestedState = musicRequestedState;
  g_snd.musicCurrentState = musicCurrentState;
  g_snd.musicPreviousState = musicPreviousState;
  musicPlaybacks = g_snd.musicPlaybacks;
  do
  {
    if ( musicPlaybacks->playbackState != SND_MUSIC_PLAYBACK_STOPPED )
    {
      PlaybackVoice = SND_GetPlaybackVoice(musicPlaybacks->id);
      if ( PlaybackVoice )
      {
        if ( musicPlaybacks->asset )
        {
          assetEntry = PlaybackVoice->assetEntry;
          if ( assetEntry )
          {
            if ( musicPlaybacks->asset->assetType == 1 && !musicPlaybacks->queuedNextLoop )
            {
              frameCount = assetEntry->frameCount;
              if ( (_DWORD)frameCount )
              {
                if ( frameCount - PlaybackVoice->framesPlayed < 0x2710 )
                  v4 = (unsigned int *)musicPlaybacks;
              }
            }
          }
        }
      }
      else
      {
        SND_ReleaseMusicAssetInstance(musicPlaybacks);
      }
    }
    ++musicPlaybacks;
  }
  while ( (__int64)musicPlaybacks < (__int64)&g_snd.currentStateLooping );
  if ( v4 )
  {
    v16 = v4[7] + 1;
    v4[7] = v16;
    if ( *(_DWORD *)(*((_QWORD *)v4 + 1) + 316i64) > 1u && v16 == *(_DWORD *)(*(_QWORD *)v4 + 88i64) )
    {
      v17 = SND_GetPlaybackVoice(v4[4]);
      if ( v17 )
      {
        v18 = 1;
        if ( *(int *)(*(_QWORD *)v4 + 108i64) > 0 )
          v18 = *(_DWORD *)(*(_QWORD *)v4 + 108i64);
        SND_VoiceSetStopSync(v17, 1, *(_DWORD *)(*(_QWORD *)v4 + 104i64), v18);
      }
      v4[5] = 0;
      v19 = (*(_QWORD *)v4 - *(_QWORD *)(*((_QWORD *)v4 + 1) + 320i64)) / 124i64;
      if ( (unsigned __int64)(v19 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v19, "signed", v19) )
        __debugbreak();
      SND_InitAliasGroupTracking(&inOutTracking);
      SND_MusicStartNextLoop(*((SndMusicState **)v4 + 1), v19, -1, &inOutTracking);
      SND_FinalizeAliasGroupTracking(&inOutTracking);
    }
    v4[8] = 1;
  }
LABEL_54:
  ScopedCriticalSection::~ScopedCriticalSection(&v20);
}

/*
==============
SNDL_SetMusicState
==============
*/
void SNDL_SetMusicState(unsigned int stateId, const unsigned int *assetIdPlaylist, unsigned int assetIdCount)
{
  SndMusicState *MusicState; 
  unsigned int v7; 
  unsigned int i; 
  __int64 alias; 
  int v10; 
  ScopedCriticalSection v11; 

  ScopedCriticalSection::ScopedCriticalSection(&v11, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
  MusicState = SND_GetMusicState(stateId);
  if ( MusicState != g_snd.musicRequestedState )
  {
    if ( !MusicState )
    {
LABEL_17:
      g_snd.musicRequestedState = MusicState;
      SND_MusicUpdate();
      goto LABEL_18;
    }
    if ( !g_snd.musicRequestedState || MusicState->interruptPriority >= g_snd.musicRequestedState->persistPriority )
    {
      v7 = 0;
      MusicState->status = SND_MUSIC_STATE_INACTIVE;
      if ( assetIdPlaylist && assetIdCount )
      {
        for ( i = 0; i < MusicState->loopCount; ++i )
        {
          alias = (__int64)MusicState->loops[i].alias;
          *(_BYTE *)(alias + 68) = 1;
          v10 = 0;
          while ( *(_DWORD *)(alias + 64) != assetIdPlaylist[v10] )
          {
            if ( ++v10 >= assetIdCount )
              goto LABEL_13;
          }
          *(_BYTE *)(alias + 68) = 0;
LABEL_13:
          ;
        }
      }
      else if ( MusicState->loopCount )
      {
        do
          MusicState->loops[v7++].inactive = 0;
        while ( v7 < MusicState->loopCount );
      }
      goto LABEL_17;
    }
  }
LABEL_18:
  ScopedCriticalSection::~ScopedCriticalSection(&v11);
}

/*
==============
SNDL_StopMusicState
==============
*/
void SNDL_StopMusicState(unsigned int id)
{
  SndMusicState *MusicState; 
  ScopedCriticalSection v3; 

  ScopedCriticalSection::ScopedCriticalSection(&v3, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
  MusicState = SND_GetMusicState(id);
  if ( MusicState && MusicState == g_snd.musicRequestedState )
  {
    g_snd.musicRequestedState = NULL;
    SND_MusicUpdate();
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v3);
}

/*
==============
SNDL_StopMusicState
==============
*/
void SNDL_StopMusicState(const unsigned int *stateIdArray, unsigned int arrayCount)
{
  unsigned int v4; 
  SndMusicState *MusicState; 
  unsigned int *v6; 
  const dvar_t *v7; 
  SndMusicState *musicRequestedState; 
  SndMusicState *musicCurrentState; 
  SndMusicState *musicPreviousState; 
  bool v11; 
  int v12; 
  SndMusicState *v13; 
  SndMusicAssetInstance *musicPlaybacks; 
  SndVoice *PlaybackVoice; 
  const SndAssetBankEntry *assetEntry; 
  __int64 frameCount; 
  int v18; 
  SndVoice *v19; 
  int v20; 
  __int64 v21; 
  ScopedCriticalSection v22; 
  SndAliasGroupTracking inOutTracking; 

  ScopedCriticalSection::ScopedCriticalSection(&v22, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
  v4 = 0;
  if ( !arrayCount )
    goto LABEL_53;
  while ( 1 )
  {
    MusicState = SND_GetMusicState(*stateIdArray);
    if ( MusicState )
    {
      if ( MusicState == g_snd.musicRequestedState )
        break;
    }
    ++v4;
    ++stateIdArray;
    if ( v4 >= arrayCount )
      goto LABEL_53;
  }
  g_snd.musicRequestedState = NULL;
  v6 = NULL;
  v7 = DCONST_DVARBOOL_snd_enable_capture_mode;
  if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    if ( g_snd.musicCurrentState )
      SND_EndMusicState(g_snd.musicCurrentState, 1);
    goto LABEL_53;
  }
  musicRequestedState = g_snd.musicRequestedState;
  musicCurrentState = g_snd.musicCurrentState;
  musicPreviousState = g_snd.musicPreviousState;
  if ( g_snd.musicRequestedState == g_snd.musicCurrentState )
    goto LABEL_21;
  if ( g_snd.musicCurrentState && g_snd.musicCurrentState->status == SND_MUSIC_STATE_ACTIVE )
  {
    v11 = g_snd.musicRequestedState && g_snd.musicRequestedState->skipPreviousExit;
    if ( !SND_EndMusicState(g_snd.musicCurrentState, v11) )
      goto LABEL_21;
  }
  musicPreviousState = musicCurrentState;
  musicCurrentState = musicRequestedState;
  if ( musicRequestedState )
  {
    g_snd.musicCurrentStateId = musicRequestedState->id;
LABEL_21:
    if ( musicCurrentState && musicCurrentState->status == SND_MUSIC_STATE_INACTIVE )
    {
      LOBYTE(v12) = SND_StartMusicState(musicCurrentState, musicPreviousState);
      if ( v12 )
      {
        musicCurrentState->status = v12 == 1;
      }
      else
      {
        v13 = NULL;
        if ( musicRequestedState != musicCurrentState )
          v13 = musicRequestedState;
        musicRequestedState = v13;
        musicCurrentState->status = SND_MUSIC_STATE_INACTIVE;
        musicCurrentState = NULL;
      }
    }
    goto LABEL_29;
  }
  g_snd.musicCurrentStateId = 0;
LABEL_29:
  g_snd.musicRequestedState = musicRequestedState;
  g_snd.musicCurrentState = musicCurrentState;
  g_snd.musicPreviousState = musicPreviousState;
  musicPlaybacks = g_snd.musicPlaybacks;
  do
  {
    if ( musicPlaybacks->playbackState != SND_MUSIC_PLAYBACK_STOPPED )
    {
      PlaybackVoice = SND_GetPlaybackVoice(musicPlaybacks->id);
      if ( PlaybackVoice )
      {
        if ( musicPlaybacks->asset )
        {
          assetEntry = PlaybackVoice->assetEntry;
          if ( assetEntry )
          {
            if ( musicPlaybacks->asset->assetType == 1 && !musicPlaybacks->queuedNextLoop )
            {
              frameCount = assetEntry->frameCount;
              if ( (_DWORD)frameCount )
              {
                if ( frameCount - PlaybackVoice->framesPlayed < 0x2710 )
                  v6 = (unsigned int *)musicPlaybacks;
              }
            }
          }
        }
      }
      else
      {
        SND_ReleaseMusicAssetInstance(musicPlaybacks);
      }
    }
    ++musicPlaybacks;
  }
  while ( (__int64)musicPlaybacks < (__int64)&g_snd.currentStateLooping );
  if ( v6 )
  {
    v18 = v6[7] + 1;
    v6[7] = v18;
    if ( *(_DWORD *)(*((_QWORD *)v6 + 1) + 316i64) > 1u && v18 == *(_DWORD *)(*(_QWORD *)v6 + 88i64) )
    {
      v19 = SND_GetPlaybackVoice(v6[4]);
      if ( v19 )
      {
        v20 = 1;
        if ( *(int *)(*(_QWORD *)v6 + 108i64) > 0 )
          v20 = *(_DWORD *)(*(_QWORD *)v6 + 108i64);
        SND_VoiceSetStopSync(v19, 1, *(_DWORD *)(*(_QWORD *)v6 + 104i64), v20);
      }
      v6[5] = 0;
      v21 = (*(_QWORD *)v6 - *(_QWORD *)(*((_QWORD *)v6 + 1) + 320i64)) / 124i64;
      if ( (unsigned __int64)(v21 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v21, "signed", v21) )
        __debugbreak();
      SND_InitAliasGroupTracking(&inOutTracking);
      SND_MusicStartNextLoop(*((SndMusicState **)v6 + 1), v21, -1, &inOutTracking);
      SND_FinalizeAliasGroupTracking(&inOutTracking);
    }
    v6[8] = 1;
  }
LABEL_53:
  ScopedCriticalSection::~ScopedCriticalSection(&v22);
}

/*
==============
SND_EndMusicState
==============
*/

char __fastcall SND_EndMusicState(SndMusicState *state, bool skipEndAsset, __int64 a3, double _XMM3_8)
{
  SndMusicAssetInstance *NewMusicAssetInstance; 
  SndMusicAssetInstance *musicPlaybacks; 
  SndMusicAssetInstance *v8; 
  SndMusicState *asset; 
  SndMusicState *v10; 
  const SndMusicAsset *v11; 
  int assetType; 
  bool v13; 
  SndMusicAssetInstance *v16; 
  int v17; 
  __int64 i; 
  const SndMusicAsset *v19; 
  const SndMusicAsset *v20; 
  const SndMusicAsset *v21; 
  const SndMusicAsset *v22; 
  const SndMusicAsset *v23; 
  const SndMusicAsset *v24; 
  const SndMusicAsset *v25; 
  const SndMusicAsset *v26; 
  const SndMusicAsset *v27; 
  const SndMusicAsset *v28; 
  const SndMusicAsset *v29; 
  const SndMusicAsset *v30; 
  const SndMusicAsset *v31; 
  const SndMusicAsset *v32; 
  const SndMusicAsset *v33; 
  const SndMusicAsset *v34; 
  SndVoice *PlaybackVoice; 
  SndAliasGroupTracking inOutTracking; 

  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_music.cpp", 242, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  NewMusicAssetInstance = NULL;
  if ( state )
  {
    musicPlaybacks = g_snd.musicPlaybacks;
    if ( state->intro.aliasId && !skipEndAsset )
    {
      if ( state == (SndMusicState *)-68i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_music.cpp", 189, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
        __debugbreak();
      v8 = g_snd.musicPlaybacks;
      while ( 1 )
      {
        asset = (SndMusicState *)v8->asset;
        if ( v8->asset )
        {
          v10 = v8->state;
          if ( v10 )
          {
            if ( asset == (SndMusicState *)&state->intro && v10 == state )
              break;
          }
        }
        if ( (__int64)++v8 >= (__int64)&g_snd.currentStateLooping )
          goto LABEL_16;
      }
      if ( asset && asset->intro.alias[6] && SND_MusicGetPlaybackSamples(v8) < v8->asset->loopStartOffset )
        return 0;
    }
    while ( 1 )
    {
LABEL_16:
      v11 = musicPlaybacks->asset;
      if ( !musicPlaybacks->asset || !musicPlaybacks->id )
        goto LABEL_28;
      assetType = v11->assetType;
      if ( assetType )
      {
        v13 = assetType == 2;
      }
      else
      {
        if ( !v11->completeOnStop )
          goto LABEL_27;
        v13 = !skipEndAsset;
      }
      if ( !v13 )
LABEL_27:
        SND_MusicAssetStop(musicPlaybacks, skipEndAsset);
LABEL_28:
      if ( (__int64)++musicPlaybacks >= (__int64)&g_snd.currentStateLooping )
      {
        if ( state->exit.aliasId )
        {
          if ( !skipEndAsset )
          {
            NewMusicAssetInstance = SND_GetNewMusicAssetInstance(state, &state->exit);
            if ( NewMusicAssetInstance )
            {
              SND_InitAliasGroupTracking(&inOutTracking);
              __asm { vxorps  xmm3, xmm3, xmm3; startOffsetFraction }
              NewMusicAssetInstance->id = SND_MusicAssetStart(&state->exit, NewMusicAssetInstance, -1, *(float *)&_XMM3, &inOutTracking);
              SND_FinalizeAliasGroupTracking(&inOutTracking);
              if ( NewMusicAssetInstance->id )
                NewMusicAssetInstance->playbackState = SND_MUSIC_PLAYBACK_STARTED;
              else
                SND_ReleaseMusicAssetInstance(NewMusicAssetInstance);
            }
          }
        }
        v16 = NULL;
        state->status = SND_MUSIC_STATE_INACTIVE;
        v17 = 0;
        for ( i = 0i64; i < 16; i += 16i64 )
        {
          v19 = g_snd.musicPlaybacks[i].asset;
          if ( v19 && g_snd.musicPlaybacks[i].playbackState == SND_MUSIC_PLAYBACK_STARTED && v19->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i];
            ++v17;
          }
          v20 = g_snd.musicPlaybacks[i + 1].asset;
          if ( v20 && g_snd.musicPlaybacks[i + 1].playbackState == SND_MUSIC_PLAYBACK_STARTED && v20->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i + 1].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i + 1];
            ++v17;
          }
          v21 = g_snd.musicPlaybacks[i + 2].asset;
          if ( v21 && g_snd.musicPlaybacks[i + 2].playbackState == SND_MUSIC_PLAYBACK_STARTED && v21->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i + 2].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i + 2];
            ++v17;
          }
          v22 = g_snd.musicPlaybacks[i + 3].asset;
          if ( v22 && g_snd.musicPlaybacks[i + 3].playbackState == SND_MUSIC_PLAYBACK_STARTED && v22->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i + 3].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i + 3];
            ++v17;
          }
          v23 = g_snd.musicPlaybacks[i + 4].asset;
          if ( v23 && g_snd.musicPlaybacks[i + 4].playbackState == SND_MUSIC_PLAYBACK_STARTED && v23->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i + 4].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i + 4];
            ++v17;
          }
          v24 = g_snd.musicPlaybacks[i + 5].asset;
          if ( v24 && g_snd.musicPlaybacks[i + 5].playbackState == SND_MUSIC_PLAYBACK_STARTED && v24->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i + 5].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i + 5];
            ++v17;
          }
          v25 = g_snd.musicPlaybacks[i + 6].asset;
          if ( v25 && g_snd.musicPlaybacks[i + 6].playbackState == SND_MUSIC_PLAYBACK_STARTED && v25->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i + 6].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i + 6];
            ++v17;
          }
          v26 = g_snd.musicPlaybacks[i + 7].asset;
          if ( v26 && g_snd.musicPlaybacks[i + 7].playbackState == SND_MUSIC_PLAYBACK_STARTED && v26->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i + 7].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i + 7];
            ++v17;
          }
          v27 = g_snd.musicPlaybacks[i + 8].asset;
          if ( v27 && g_snd.musicPlaybacks[i + 8].playbackState == SND_MUSIC_PLAYBACK_STARTED && v27->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i + 8].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i + 8];
            ++v17;
          }
          v28 = g_snd.musicPlaybacks[i + 9].asset;
          if ( v28 && g_snd.musicPlaybacks[i + 9].playbackState == SND_MUSIC_PLAYBACK_STARTED && v28->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i + 9].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i + 9];
            ++v17;
          }
          v29 = g_snd.musicPlaybacks[i + 10].asset;
          if ( v29 && g_snd.musicPlaybacks[i + 10].playbackState == SND_MUSIC_PLAYBACK_STARTED && v29->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i + 10].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i + 10];
            ++v17;
          }
          v30 = g_snd.musicPlaybacks[i + 11].asset;
          if ( v30 && g_snd.musicPlaybacks[i + 11].playbackState == SND_MUSIC_PLAYBACK_STARTED && v30->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i + 11].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i + 11];
            ++v17;
          }
          v31 = g_snd.musicPlaybacks[i + 12].asset;
          if ( v31 && g_snd.musicPlaybacks[i + 12].playbackState == SND_MUSIC_PLAYBACK_STARTED && v31->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i + 12].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i + 12];
            ++v17;
          }
          v32 = g_snd.musicPlaybacks[i + 13].asset;
          if ( v32 && g_snd.musicPlaybacks[i + 13].playbackState == SND_MUSIC_PLAYBACK_STARTED && v32->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i + 13].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i + 13];
            ++v17;
          }
          v33 = g_snd.musicPlaybacks[i + 14].asset;
          if ( v33 && g_snd.musicPlaybacks[i + 14].playbackState == SND_MUSIC_PLAYBACK_STARTED && v33->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i + 14].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i + 14];
            ++v17;
          }
          v34 = g_snd.musicPlaybacks[i + 15].asset;
          if ( v34 && g_snd.musicPlaybacks[i + 15].playbackState == SND_MUSIC_PLAYBACK_STARTED && v34->assetType == 2 )
          {
            if ( !v16 || g_snd.musicPlaybacks[i + 15].startFrame < v16->startFrame )
              v16 = &g_snd.musicPlaybacks[i + 15];
            ++v17;
          }
        }
        if ( v16 && v16 != NewMusicAssetInstance && v17 > 1 )
        {
          PlaybackVoice = SND_GetPlaybackVoice(v16->id);
          if ( PlaybackVoice )
            SND_VoiceSetStopSync(PlaybackVoice, 1, v16->asset->stopDelayBeats, 1);
          v16->playbackState = SND_MUSIC_PLAYBACK_STOPPING;
        }
        return 1;
      }
    }
  }
  return 1;
}

/*
==============
SND_GetCurrentMusicState
==============
*/
SndMusicState *SND_GetCurrentMusicState()
{
  return g_snd.musicCurrentState;
}

/*
==============
SND_GetNewMusicAssetInstance
==============
*/
SndMusicAssetInstance *SND_GetNewMusicAssetInstance(SndMusicState *state, const SndMusicAsset *asset)
{
  SndMusicAssetInstance *result; 

  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_music.cpp", 167, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_music.cpp", 168, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  result = g_snd.musicPlaybacks;
  while ( result->asset || result->state )
  {
    if ( (__int64)++result >= (__int64)&g_snd.currentStateLooping )
    {
      Com_PrintError(9, "MUSIC: ran out of SndMusicAssetInstances trying to allocate for state - %s, asset - %s\n", state->name, asset->alias);
      return 0i64;
    }
  }
  result->asset = asset;
  if ( state )
  {
    ++state->refCount;
    result->state = state;
  }
  return result;
}

/*
==============
SND_MusicAssetStart
==============
*/

__int64 __fastcall SND_MusicAssetStart(const SndMusicAsset *asset, SndMusicAssetInstance *instance, int offset, double startOffsetFraction, SndAliasGroupTracking *tracking)
{
  SndAliasList *AliasFromId; 
  const dvar_t *v12; 
  int v13; 
  const SndAliasList *v14; 
  unsigned int v15; 
  __int64 result; 
  SndVoice *PlaybackVoice; 
  SndVoice *v22; 
  int delayBeats; 
  SndAlias *outAliasA; 
  SndPlayParams inParams; 

  __asm
  {
    vmovaps [rsp+130h+var_50], xmm6
    vmovaps xmm6, xmm3
  }
  AliasFromId = SND_FindAliasFromId(asset->aliasId);
  v12 = DCONST_DVARBOOL_snd_enable_capture_mode;
  v13 = 0;
  v14 = AliasFromId;
  v15 = 0;
  if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    result = 0i64;
  }
  else
  {
    if ( v14 )
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
        vxorps  xmm1, xmm1, xmm1
        vmovups xmmword ptr [rsp+130h+inParams.volumeScale], xmm0
        vmovss  xmm0, cs:__real@bf800000
      }
      *(_QWORD *)&inParams.aliasId = 0i64;
      __asm
      {
        vmovss  [rbp+4Fh+inParams.lpfCutoff], xmm0
        vmovss  [rbp+4Fh+inParams.hpfCutoff], xmm0
        vmovss  dword ptr [rbp+4Fh+inParams.org], xmm1
        vmovss  dword ptr [rbp+4Fh+inParams.org+4], xmm1
        vmovss  dword ptr [rbp+4Fh+inParams.org+8], xmm1
        vmovss  [rbp+4Fh+inParams.startOffsetFraction], xmm1
      }
      inParams.timeshift = 0;
      inParams.adsrIndex = -1;
      inParams.fadeTime = 0;
      inParams.system = SASYS_CGAME;
      inParams.autoSimId = -1;
      inParams.autoSimTimeStamp = 0i64;
      inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
      inParams.startPaused = 0;
      inParams.additionalStartDelayUs = 0;
      *(_QWORD *)&inParams.surfaceType = -1i64;
      inParams.contextIndex2 = -1;
      inParams.reflectionClass = 0;
      *(_WORD *)&inParams.isADS = 0;
      inParams.aliasList = v14;
      inParams.sndEnt = CG_GenerateSndEntHandle(LOCAL_CLIENT_0, 2048);
      __asm { vmovss  [rbp+4Fh+inParams.startOffsetFraction], xmm6 }
      SND_PickSoundAliasFromList(v14, &inParams, (const SndAlias **)&outAliasA, NULL, NULL);
      __asm { vmovss  xmm1, cs:__real@3f800000; contextLerp }
      v15 = SND_PlaySoundAliasCore(outAliasA, *(float *)&_XMM1, &inParams, tracking);
      PlaybackVoice = SND_GetPlaybackVoice(v15);
      v22 = PlaybackVoice;
      if ( v15 && PlaybackVoice )
      {
        delayBeats = asset->startDelayBeats;
        __asm
        {
          vmovss  xmm0, cs:__real@4a2fc800
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, dword ptr [rdi+50h]
          vdivss  xmm2, xmm0, xmm1; syncPeriodFrames
        }
        if ( offset >= 0 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, r14d
            vdivss  xmm1, xmm0, xmm2
            vcvttss2si eax, xmm1
          }
          delayBeats += _EAX;
        }
        SND_VoiceSetStartSync(v22, 1, *(float *)&_XMM2, asset->meter, asset->startOffsetFrames, delayBeats, asset->startFadeBeats);
        instance->startFrame = g_snd.frame;
        instance->loopNumber = 0;
        g_snd.musicCurrentPlaybackAsset = asset;
        if ( g_snd.musicRequestedState && g_snd.musicRequestedState->id == 1437501848 )
        {
          do
          {
            if ( CL_Mgr_IsClientActive((LocalClientNum_t)v13) && LUI_BeginEvent((LocalClientNum_t)v13, "play_battle_track", LUI_luaVM) )
            {
              LUI_SetTableString("trackString", asset->alias, LUI_luaVM);
              LUI_EndEvent(LUI_luaVM);
            }
            ++v13;
          }
          while ( v13 < 2 );
        }
      }
      else
      {
        Com_PrintError(9, "MUSIC: failed to play music: %s\n", asset->alias);
      }
    }
    else
    {
      Com_PrintError(9, "MUSIC: missing alias %s %x\n", asset->alias, asset->aliasId);
    }
    result = v15;
  }
  __asm { vmovaps xmm6, [rsp+130h+var_50] }
  return result;
}

/*
==============
SND_MusicAssetStop
==============
*/
void SND_MusicAssetStop(SndMusicAssetInstance *instance, bool forceQuickFade)
{
  SndVoice *PlaybackVoice; 
  int stopFadeBeats; 

  if ( instance )
  {
    PlaybackVoice = SND_GetPlaybackVoice(instance->id);
    if ( PlaybackVoice )
    {
      stopFadeBeats = 1;
      if ( instance->asset->stopFadeBeats > 0 )
        stopFadeBeats = instance->asset->stopFadeBeats;
      if ( forceQuickFade )
        stopFadeBeats = 1;
      SND_VoiceSetStopSync(PlaybackVoice, 1, instance->asset->stopDelayBeats, stopFadeBeats);
    }
    instance->playbackState = SND_MUSIC_PLAYBACK_STOPPING;
  }
}

/*
==============
SND_MusicGetPlaybackSamples
==============
*/
SndVoice *SND_MusicGetPlaybackSamples(SndMusicAssetInstance *instance)
{
  SndVoice *result; 
  unsigned __int64 framesPlayed; 

  if ( !instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_music.cpp", 224, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  result = SND_GetPlaybackVoice(instance->id);
  if ( result )
  {
    framesPlayed = result->framesPlayed;
    if ( framesPlayed > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)framesPlayed, "unsigned", framesPlayed) )
      __debugbreak();
    return (SndVoice *)(unsigned int)framesPlayed;
  }
  return result;
}

/*
==============
SND_MusicInit
==============
*/

void __fastcall SND_MusicInit(double _XMM0_8)
{
  SndMusicState **p_state; 
  const SndMusicAsset **v3; 
  const SndMusicAsset *musicCurrentPlaybackAsset; 
  unsigned int refCount; 
  SndMusicState *v6; 

  p_state = &g_snd.musicPlaybacks[0].state;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr cs:?g_snd@@3Usnd_local_t@@A.musicRequestedState, xmm0; snd_local_t g_snd
  }
  g_snd.musicPreviousState = NULL;
  g_snd.musicCurrentPlaybackAsset = NULL;
  g_snd.currentStateLooping = 0;
  g_snd.musicCurrentStateId = 0;
  do
  {
    v3 = (const SndMusicAsset **)(p_state - 1);
    if ( p_state == (SndMusicState **)8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_music.cpp", 131, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    musicCurrentPlaybackAsset = g_snd.musicCurrentPlaybackAsset;
    if ( *v3 == g_snd.musicCurrentPlaybackAsset )
      musicCurrentPlaybackAsset = NULL;
    g_snd.musicCurrentPlaybackAsset = musicCurrentPlaybackAsset;
    if ( *p_state )
    {
      if ( !(*p_state)->refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_music.cpp", 783, ASSERT_TYPE_ASSERT, "(state->refCount > 0)", (const char *)&queryFormat, "state->refCount > 0") )
        __debugbreak();
      refCount = (*p_state)->refCount;
      (*p_state)->refCount = refCount - 1;
      if ( refCount == 1 )
      {
        v6 = *p_state;
        if ( g_snd.musicRequestedState == *p_state )
        {
          g_snd.musicRequestedState = NULL;
          v6 = *p_state;
        }
        if ( g_snd.musicCurrentState == v6 )
        {
          g_snd.musicCurrentState = NULL;
          v6 = *p_state;
        }
        v6->status = SND_MUSIC_STATE_INACTIVE;
      }
      *p_state = NULL;
    }
    *((_DWORD *)p_state + 2) = 0;
    *(SndMusicState **)((char *)p_state + 12) = (SndMusicState *)1;
    *(SndMusicState **)((char *)p_state + 20) = NULL;
    p_state += 5;
    *v3 = NULL;
  }
  while ( (__int64)p_state < (__int64)&g_snd.cinematicAssetEntry.size + 3 );
}

/*
==============
SND_MusicStartNextLoop
==============
*/
bool SND_MusicStartNextLoop(SndMusicState *state, int currentLoopNum, int offset, SndAliasGroupTracking *tracking)
{
  __int64 loopCount; 
  unsigned int v15; 
  unsigned int v17; 
  unsigned int v18; 
  SndMusicAsset *loops; 
  unsigned int *p_sampleRate; 
  unsigned int *v23; 
  __int64 v24; 
  unsigned int *v37; 
  __int64 v38; 
  unsigned int v45; 
  int v59; 
  SndMusicAssetInstance *NewMusicAssetInstance; 
  SndMusicAssetInstance *v62; 
  unsigned int v64; 
  bool result; 
  __int64 v68; 

  loopCount = (int)state->loopCount;
  __asm { vmovaps [rsp+98h+var_48], xmm7 }
  if ( (_DWORD)loopCount )
  {
    v15 = 0;
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm6
      vxorps  xmm7, xmm7, xmm7
    }
    if ( state->isSequential || (unsigned int)loopCount < 2 )
    {
      if ( state->wallClockSync && currentLoopNum == -1 )
      {
        if ( !cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", 0, cg_t::ms_allocatedCount) )
          __debugbreak();
        if ( !cg_t::ms_cgArray[0] )
        {
          LODWORD(v68) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v68) )
            __debugbreak();
        }
        if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
        {
          LODWORD(v68) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v68) )
            __debugbreak();
        }
        v18 = 0;
        __asm
        {
          vxorpd  xmm4, xmm4, xmm4
          vxorpd  xmm2, xmm2, xmm2
        }
        if ( (unsigned int)loopCount >= 4 )
        {
          loops = state->loops;
          p_sampleRate = &loops->sampleRate;
          v23 = &loops[2].sampleRate;
          LODWORD(loops) = ((unsigned int)(loopCount - 4) >> 2) + 1;
          v24 = (unsigned int)loops;
          v18 = 4 * (_DWORD)loops;
          do
          {
            if ( !*((_BYTE *)p_sampleRate - 52) )
            {
              __asm
              {
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2sd xmm1, xmm1, rax
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2sd xmm0, xmm0, rax
                vdivsd  xmm1, xmm1, xmm0
                vaddsd  xmm2, xmm2, xmm1
              }
            }
            if ( !*((_BYTE *)p_sampleRate + 72) )
            {
              __asm
              {
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2sd xmm1, xmm1, rax
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2sd xmm0, xmm0, rax
                vdivsd  xmm1, xmm1, xmm0
                vaddsd  xmm2, xmm2, xmm1
              }
            }
            if ( !*((_BYTE *)v23 - 52) )
            {
              __asm
              {
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2sd xmm1, xmm1, rax
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2sd xmm0, xmm0, rax
                vdivsd  xmm1, xmm1, xmm0
                vaddsd  xmm2, xmm2, xmm1
              }
            }
            if ( !*((_BYTE *)v23 + 72) )
            {
              __asm
              {
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2sd xmm1, xmm1, rax
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2sd xmm0, xmm0, rax
                vdivsd  xmm1, xmm1, xmm0
                vaddsd  xmm2, xmm2, xmm1
              }
            }
            p_sampleRate += 124;
            v23 += 124;
            --v24;
          }
          while ( v24 );
        }
        if ( v18 < (unsigned int)loopCount )
        {
          v37 = &state->loops[v18].sampleRate;
          v38 = (unsigned int)loopCount - v18;
          do
          {
            if ( !*((_BYTE *)v37 - 52) )
            {
              __asm
              {
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2sd xmm1, xmm1, rax
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2sd xmm0, xmm0, rax
                vdivsd  xmm1, xmm1, xmm0
                vaddsd  xmm2, xmm2, xmm1
              }
            }
            v37 += 31;
            --v38;
          }
          while ( v38 );
        }
        __asm
        {
          vmovsd  xmm3, cs:__real@408f400000000000
          vmulsd  xmm0, xmm2, xmm3
          vcvttsd2si rcx, xmm0
        }
        v45 = 0;
        if ( (_DWORD)loopCount )
        {
          while ( 1 )
          {
            if ( !state->loops[v45].inactive )
            {
              __asm
              {
                vmulsd  xmm0, xmm4, xmm3
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2sd xmm1, xmm1, rax
                vcvttsd2si rsi, xmm0
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2sd xmm0, xmm0, rax
                vdivsd  xmm6, xmm1, xmm0
                vaddsd  xmm4, xmm4, xmm6
                vmulsd  xmm1, xmm4, xmm3
                vcvttsd2si rax, xmm1
              }
              if ( cg_t::ms_cgArray[0]->time % (unsigned int)_RCX < (unsigned int)_RAX )
                break;
            }
            if ( ++v45 >= (unsigned int)loopCount )
              goto LABEL_47;
          }
          __asm
          {
            vmovsd  xmm0, cs:__real@3f50624dd2f1a9fc
            vxorps  xmm2, xmm2, xmm2
          }
          v15 = truncate_cast<int,unsigned int>(v45);
          __asm
          {
            vcvtsi2sd xmm2, xmm2, rax
            vdivsd  xmm1, xmm0, xmm6
            vmulsd  xmm2, xmm2, xmm1
            vcvtsd2ss xmm7, xmm2, xmm2
          }
        }
      }
      else
      {
        v59 = 0;
        if ( (_DWORD)loopCount )
        {
          while ( 1 )
          {
            if ( (unsigned int)loopCount > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", loopCount, "unsigned", (unsigned int)loopCount) )
              __debugbreak();
            if ( !state->loops[(currentLoopNum + v59 + 1) % (unsigned int)loopCount].inactive )
              break;
            if ( ++v59 >= (unsigned int)loopCount )
              goto LABEL_47;
          }
          v15 = (currentLoopNum + v59 + 1) % (unsigned int)loopCount;
        }
      }
    }
    else
    {
      v17 = rand() % (unsigned int)loopCount;
      v15 = v17;
      if ( currentLoopNum != -1 )
        v15 = (v17 + currentLoopNum) % (unsigned int)loopCount;
    }
LABEL_47:
    NewMusicAssetInstance = SND_GetNewMusicAssetInstance(state, &state->loops[v15]);
    __asm { vmovaps xmm6, [rsp+98h+var_38] }
    v62 = NewMusicAssetInstance;
    if ( NewMusicAssetInstance )
    {
      __asm { vmovaps xmm3, xmm7; startOffsetFraction }
      v64 = SND_MusicAssetStart(NewMusicAssetInstance->asset, NewMusicAssetInstance, offset, *(double *)&_XMM3, tracking);
      v62->id = v64;
      if ( v64 )
      {
        v62->playbackState = SND_MUSIC_PLAYBACK_STARTED;
        result = 1;
        __asm { vmovaps xmm7, [rsp+98h+var_48] }
        return result;
      }
      SND_ReleaseMusicAssetInstance(v62);
    }
  }
  __asm { vmovaps xmm7, [rsp+98h+var_48] }
  return 0;
}

/*
==============
SND_MusicUpdate
==============
*/
void SND_MusicUpdate(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  const dvar_t *v4; 
  SndMusicAssetInstance *v5; 
  __int64 v6; 
  SndMusicState *musicCurrentState; 
  SndMusicState *musicPreviousState; 
  SndMusicState *musicRequestedState; 
  bool skipPreviousExit; 
  int v11; 
  SndMusicState *v12; 
  SndMusicAssetInstance *musicPlaybacks; 
  SndVoice *PlaybackVoice; 
  const SndAssetBankEntry *assetEntry; 
  __int64 frameCount; 
  SndMusicState *state; 
  int v18; 
  SndVoice *v19; 
  int stopFadeBeats; 
  SndMusicState *v21; 
  const SndMusicAsset *asset; 
  __int64 v23; 
  SndAliasGroupTracking inOutTracking; 

  v4 = DCONST_DVARBOOL_snd_enable_capture_mode;
  v5 = NULL;
  if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    if ( g_snd.musicCurrentState )
      SND_EndMusicState(g_snd.musicCurrentState, 1, v6, a4);
  }
  else
  {
    musicCurrentState = g_snd.musicCurrentState;
    musicPreviousState = g_snd.musicPreviousState;
    musicRequestedState = g_snd.musicRequestedState;
    if ( g_snd.musicRequestedState != g_snd.musicCurrentState )
    {
      if ( !g_snd.musicCurrentState || g_snd.musicCurrentState->status != SND_MUSIC_STATE_ACTIVE || (!g_snd.musicRequestedState ? (skipPreviousExit = 0) : (skipPreviousExit = g_snd.musicRequestedState->skipPreviousExit), SND_EndMusicState(g_snd.musicCurrentState, skipPreviousExit, v6, a4)) )
      {
        musicPreviousState = musicCurrentState;
        musicCurrentState = musicRequestedState;
        if ( musicRequestedState )
          g_snd.musicCurrentStateId = musicRequestedState->id;
        else
          g_snd.musicCurrentStateId = 0;
      }
    }
    if ( musicCurrentState && musicCurrentState->status == SND_MUSIC_STATE_INACTIVE )
    {
      LOBYTE(v11) = SND_StartMusicState(musicCurrentState, musicPreviousState);
      if ( v11 )
      {
        musicCurrentState->status = v11 == 1;
      }
      else
      {
        v12 = NULL;
        musicCurrentState->status = SND_MUSIC_STATE_INACTIVE;
        if ( musicRequestedState != musicCurrentState )
          v12 = musicRequestedState;
        musicCurrentState = NULL;
        musicRequestedState = v12;
      }
    }
    g_snd.musicRequestedState = musicRequestedState;
    g_snd.musicCurrentState = musicCurrentState;
    musicPlaybacks = g_snd.musicPlaybacks;
    g_snd.musicPreviousState = musicPreviousState;
    do
    {
      if ( musicPlaybacks->playbackState != SND_MUSIC_PLAYBACK_STOPPED )
      {
        PlaybackVoice = SND_GetPlaybackVoice(musicPlaybacks->id);
        if ( PlaybackVoice )
        {
          if ( musicPlaybacks->asset )
          {
            assetEntry = PlaybackVoice->assetEntry;
            if ( assetEntry )
            {
              if ( musicPlaybacks->asset->assetType == 1 && !musicPlaybacks->queuedNextLoop )
              {
                frameCount = assetEntry->frameCount;
                if ( (_DWORD)frameCount )
                {
                  if ( frameCount - PlaybackVoice->framesPlayed < 0x2710 )
                    v5 = musicPlaybacks;
                }
              }
            }
          }
        }
        else
        {
          SND_ReleaseMusicAssetInstance(musicPlaybacks);
        }
      }
      ++musicPlaybacks;
    }
    while ( (__int64)musicPlaybacks < (__int64)&g_snd.currentStateLooping );
    if ( v5 )
    {
      state = v5->state;
      v18 = v5->loopNumber + 1;
      v5->loopNumber = v18;
      if ( state->loopCount > 1 && v18 == v5->asset->loopNumber )
      {
        v19 = SND_GetPlaybackVoice(v5->id);
        if ( v19 )
        {
          stopFadeBeats = 1;
          if ( v5->asset->stopFadeBeats > 0 )
            stopFadeBeats = v5->asset->stopFadeBeats;
          SND_VoiceSetStopSync(v19, 1, v5->asset->stopDelayBeats, stopFadeBeats);
        }
        v21 = v5->state;
        asset = v5->asset;
        v5->playbackState = SND_MUSIC_PLAYBACK_STOPPING;
        v23 = asset - v21->loops;
        if ( (unsigned __int64)(v23 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v23, "signed", v23) )
          __debugbreak();
        SND_InitAliasGroupTracking(&inOutTracking);
        SND_MusicStartNextLoop(v5->state, v23, -1, &inOutTracking);
        SND_FinalizeAliasGroupTracking(&inOutTracking);
      }
      v5->queuedNextLoop = 1;
    }
  }
}

/*
==============
SND_ReleaseMusicAssetInstance
==============
*/
void SND_ReleaseMusicAssetInstance(SndMusicAssetInstance *instance)
{
  const SndMusicAsset *musicCurrentPlaybackAsset; 

  if ( !instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_music.cpp", 131, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  musicCurrentPlaybackAsset = g_snd.musicCurrentPlaybackAsset;
  if ( instance->asset == g_snd.musicCurrentPlaybackAsset )
    musicCurrentPlaybackAsset = NULL;
  g_snd.musicCurrentPlaybackAsset = musicCurrentPlaybackAsset;
  SndMusicAssetInstance::SetMusicState(instance, NULL);
  instance->asset = NULL;
  instance->id = 0;
  *(_QWORD *)&instance->playbackState = 1i64;
  *(_QWORD *)&instance->loopNumber = 0i64;
}

/*
==============
SND_StartMusicState
==============
*/

__int64 __fastcall SND_StartMusicState(SndMusicState *newState, SndMusicState *oldState, __int64 a3, double _XMM3_8)
{
  SndMusicAssetInstance *musicPlaybacks; 
  const SndMusicAsset *asset; 
  int v7; 
  const SndMusicAsset *v8; 
  SndVoice *PlaybackVoice; 
  int stopFadeBeats; 
  char v12; 
  SndMusicAssetInstance *NewMusicAssetInstance; 
  unsigned int v15; 
  int loopStartOffset; 
  bool started; 
  int numVoices; 
  unsigned __int8 v19; 
  int *voiceIndices; 
  unsigned int secondaryGroupId; 
  __int64 v22; 
  sd_voice *v23; 
  SndAliasGroupTracking inOutTracking; 

  if ( !newState || !newState->intro.aliasId && !newState->loopCount )
    return 0i64;
  musicPlaybacks = g_snd.musicPlaybacks;
  while ( 1 )
  {
    asset = musicPlaybacks->asset;
    v7 = 0;
    if ( musicPlaybacks->asset )
    {
      if ( musicPlaybacks->id && asset->assetType == 2 && musicPlaybacks->playbackState == SND_MUSIC_PLAYBACK_STARTED )
        break;
    }
    if ( (__int64)++musicPlaybacks >= (__int64)&g_snd.currentStateLooping )
      goto LABEL_21;
  }
  if ( asset )
  {
    v8 = musicPlaybacks->asset;
    if ( (unsigned int)SND_MusicGetPlaybackSamples(musicPlaybacks) < v8->loopStartOffset )
      return 2i64;
    if ( v8->stopFadeBeats > 0 )
    {
      PlaybackVoice = SND_GetPlaybackVoice(musicPlaybacks->id);
      if ( PlaybackVoice )
      {
        stopFadeBeats = 1;
        if ( musicPlaybacks->asset->stopFadeBeats > 0 )
          stopFadeBeats = musicPlaybacks->asset->stopFadeBeats;
        SND_VoiceSetStopSync(PlaybackVoice, 1, musicPlaybacks->asset->stopDelayBeats, stopFadeBeats);
      }
      musicPlaybacks->playbackState = SND_MUSIC_PLAYBACK_STOPPING;
    }
  }
LABEL_21:
  SND_InitAliasGroupTracking(&inOutTracking);
  v12 = 0;
  if ( !newState->intro.aliasId )
    goto LABEL_26;
  NewMusicAssetInstance = SND_GetNewMusicAssetInstance(newState, &newState->intro);
  if ( !NewMusicAssetInstance )
    goto LABEL_26;
  __asm { vxorps  xmm3, xmm3, xmm3; startOffsetFraction }
  v15 = SND_MusicAssetStart(&newState->intro, NewMusicAssetInstance, -1, *(double *)&_XMM3, &inOutTracking);
  NewMusicAssetInstance->id = v15;
  if ( !v15 )
  {
    SND_ReleaseMusicAssetInstance(NewMusicAssetInstance);
LABEL_26:
    loopStartOffset = -1;
    goto LABEL_27;
  }
  NewMusicAssetInstance->playbackState = SND_MUSIC_PLAYBACK_STARTED;
  v12 = 1;
  loopStartOffset = NewMusicAssetInstance->asset->loopStartOffset;
LABEL_27:
  started = SND_MusicStartNextLoop(newState, -1, loopStartOffset, &inOutTracking);
  numVoices = inOutTracking.numVoices;
  v19 = v12 | started;
  if ( inOutTracking.numVoices > 0 )
  {
    voiceIndices = inOutTracking.voiceIndices;
    secondaryGroupId = g_sd.voices[inOutTracking.voiceIndices[0]]->secondaryGroupId;
    do
    {
      v22 = *voiceIndices;
      v23 = g_sd.voices[v22];
      if ( v23 )
      {
        v23->secondaryGroupId = secondaryGroupId;
        g_sd.voices[v22]->secondaryGroupSize = inOutTracking.numVoices;
        numVoices = inOutTracking.numVoices;
      }
      ++v7;
      ++voiceIndices;
    }
    while ( v7 < numVoices );
  }
  SND_FinalizeAliasGroupTracking(&inOutTracking);
  return v19;
}

/*
==============
SndMusicAssetInstance::SetMusicState
==============
*/
void SndMusicAssetInstance::SetMusicState(SndMusicAssetInstance *this, SndMusicState *pState)
{
  SndMusicState *state; 
  SndMusicState *v5; 
  unsigned int refCount; 
  SndMusicState *v7; 

  state = this->state;
  if ( pState != state )
  {
    if ( state )
    {
      if ( !state->refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_music.cpp", 783, ASSERT_TYPE_ASSERT, "(state->refCount > 0)", (const char *)&queryFormat, "state->refCount > 0") )
        __debugbreak();
      v5 = this->state;
      refCount = v5->refCount;
      v5->refCount = refCount - 1;
      if ( refCount == 1 )
      {
        v7 = this->state;
        if ( g_snd.musicRequestedState == v7 )
        {
          g_snd.musicRequestedState = NULL;
          v7 = this->state;
        }
        if ( g_snd.musicCurrentState == v7 )
        {
          g_snd.musicCurrentState = NULL;
          v7 = this->state;
        }
        v7->status = SND_MUSIC_STATE_INACTIVE;
      }
    }
    if ( pState )
      ++pState->refCount;
    this->state = pState;
  }
}

