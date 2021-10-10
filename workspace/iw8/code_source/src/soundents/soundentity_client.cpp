/*
==============
CG_SoundEntity_ScalePitch
==============
*/

void __fastcall CG_SoundEntity_ScalePitch(LocalClientNum_t localClientNum, int soundEntityId, float pitch, int blendTimeMs)
{
  ?CG_SoundEntity_ScalePitch@@YAXW4LocalClientNum_t@@HMH@Z(localClientNum, soundEntityId, pitch, blendTimeMs);
}

/*
==============
CG_SoundEntity_Init
==============
*/

void __fastcall CG_SoundEntity_Init(LocalClientNum_t localClientNum)
{
  ?CG_SoundEntity_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SoundEntity_TriggerStop
==============
*/

void __fastcall CG_SoundEntity_TriggerStop(LocalClientNum_t localClientNum, int soundEntityId)
{
  ?CG_SoundEntity_TriggerStop@@YAXW4LocalClientNum_t@@H@Z(localClientNum, soundEntityId);
}

/*
==============
CG_SoundEntity_TriggerStart
==============
*/

void __fastcall CG_SoundEntity_TriggerStart(LocalClientNum_t localClientNum, int soundEntityId, unsigned __int16 soundAlias, vec3_t *origin)
{
  ?CG_SoundEntity_TriggerStart@@YAXW4LocalClientNum_t@@HGTvec3_t@@@Z(localClientNum, soundEntityId, soundAlias, origin);
}

/*
==============
CG_LoadSoundEntities
==============
*/

void __fastcall CG_LoadSoundEntities(SaveGame *save)
{
  ?CG_LoadSoundEntities@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
CG_SoundEntity_ScaleVolume
==============
*/

void __fastcall CG_SoundEntity_ScaleVolume(LocalClientNum_t localClientNum, int soundEntityId, float volume, int blendTimeMs)
{
  ?CG_SoundEntity_ScaleVolume@@YAXW4LocalClientNum_t@@HMH@Z(localClientNum, soundEntityId, volume, blendTimeMs);
}

/*
==============
CG_SoundEntity_StopAllSounds
==============
*/

void __fastcall CG_SoundEntity_StopAllSounds(LocalClientNum_t localClientNum)
{
  ?CG_SoundEntity_StopAllSounds@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SaveSoundEntities
==============
*/

void __fastcall CG_SaveSoundEntities(MemoryFile *memFile)
{
  ?CG_SaveSoundEntities@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
CG_SoundEntity_Shutdown
==============
*/

void __fastcall CG_SoundEntity_Shutdown(LocalClientNum_t localClientNum)
{
  ?CG_SoundEntity_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_LoadSoundEntities
==============
*/
void CG_LoadSoundEntities(SaveGame *save)
{
  LocalClientNum_t OnlyLocalClientNum; 
  unsigned __int64 v3; 
  int v4; 
  unsigned __int64 v5; 
  char *fmt; 
  int buffer; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  v3 = OnlyLocalClientNum;
  if ( (unsigned int)OnlyLocalClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_client.cpp", 152, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clientSoundEntities ) ) + 0 ) )", "localClientNum doesn't index s_clientSoundEntities\n\t%i not in [0, %i)", OnlyLocalClientNum, 2) )
    __debugbreak();
  if ( (v3 & 0x80000000) != 0i64 || v3 >= 2 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14411CB90, 5638i64, (unsigned int)v3, 2i64);
  SaveMemory_LoadRead(&buffer, 4, save);
  v4 = buffer;
  if ( buffer >= 0 )
  {
    v5 = v3 << 7;
    do
    {
      if ( v4 >= 128 )
      {
        LODWORD(fmt) = 128;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14411CC00, 621i64, (unsigned int)v4, fmt);
        v4 = buffer;
      }
      SaveMemory_LoadRead((char *)s_clientSoundEntities + 4 * v5 + 4 * v4, 4, save);
      SaveMemory_LoadRead(&buffer, 4, save);
      v4 = buffer;
    }
    while ( buffer >= 0 );
  }
}

/*
==============
CG_SaveSoundEntities
==============
*/
void CG_SaveSoundEntities(MemoryFile *memFile)
{
  LocalClientNum_t OnlyLocalClientNum; 
  int v3; 
  LocalClientNum_t v4; 
  ClientSoundEntity *v5; 
  ClientSoundEntity *v6; 
  int p; 
  int v8; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  v3 = 0;
  v4 = OnlyLocalClientNum;
  p = 0;
  do
  {
    v5 = CG_SoundEntity_Get(v4, v3);
    v6 = v5;
    if ( v5 && v5->playbackId )
    {
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteData(memFile, 4ui64, v6);
    }
    v3 = p + 1;
    p = v3;
  }
  while ( v3 < 128 );
  v8 = -1;
  MemFile_WriteData(memFile, 4ui64, &v8);
}

/*
==============
CG_SoundEntity_Get
==============
*/
ClientSoundEntity *CG_SoundEntity_Get(LocalClientNum_t localClientNum, int soundEntityId)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = soundEntityId;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_client.cpp", 26, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v2 > 1 )
    return 0i64;
  if ( (unsigned int)v3 >= 0x80 )
  {
    LODWORD(v7) = 128;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_client.cpp", 32, ASSERT_TYPE_ASSERT, "(unsigned)( soundEntityId ) < (unsigned)( ( sizeof( *array_counter( s_clientSoundEntities[localClientNum] ) ) + 0 ) )", "soundEntityId doesn't index s_clientSoundEntities[localClientNum]\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( (int)v3 < 0 || (unsigned int)v3 >= 0x80 )
    return 0i64;
  else
    return &s_clientSoundEntities[v2][v3];
}

/*
==============
CG_SoundEntity_Init
==============
*/
void CG_SoundEntity_Init(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v3; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_client.cpp", 44, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clientSoundEntities ) ) + 0 ) )", "localClientNum doesn't index s_clientSoundEntities\n\t%i not in [0, %i)", localClientNum, v3) )
      __debugbreak();
  }
  memset_0(s_clientSoundEntities[v1], 0, sizeof(ClientSoundEntity[128]));
}

/*
==============
CG_SoundEntity_ScalePitch
==============
*/
void CG_SoundEntity_ScalePitch(LocalClientNum_t localClientNum, int soundEntityId, float pitch, int blendTimeMs)
{
  ClientSoundEntity *v5; 

  v5 = CG_SoundEntity_Get(localClientNum, soundEntityId);
  if ( v5 )
    SND_ScaleVoicePitchById(v5->playbackId, pitch, blendTimeMs);
}

/*
==============
CG_SoundEntity_ScaleVolume
==============
*/
void CG_SoundEntity_ScaleVolume(LocalClientNum_t localClientNum, int soundEntityId, float volume, int blendTimeMs)
{
  ClientSoundEntity *v5; 

  v5 = CG_SoundEntity_Get(localClientNum, soundEntityId);
  if ( v5 )
    SND_ScaleVoiceVolumeById(v5->playbackId, volume, blendTimeMs);
}

/*
==============
CG_SoundEntity_Shutdown
==============
*/
void CG_SoundEntity_Shutdown(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int i; 
  ClientSoundEntity *v3; 
  ClientSoundEntity *v4; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_client.cpp", 51, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clientSoundEntities ) ) + 0 ) )", "localClientNum doesn't index s_clientSoundEntities\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  for ( i = 0; i < 128; ++i )
  {
    v3 = CG_SoundEntity_Get((LocalClientNum_t)v1, i);
    v4 = v3;
    if ( v3 && SND_IsPlaybackIdPlaying(v3->playbackId) )
    {
      if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
      {
        LODWORD(v7) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", v7) )
          __debugbreak();
      }
      if ( (unsigned int)v1 >= CgSoundSystem::ms_allocatedCount )
      {
        LODWORD(v7) = CgSoundSystem::ms_allocatedCount;
        LODWORD(v5) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v5, v7) )
          __debugbreak();
      }
      if ( !CgSoundSystem::ms_soundSystemArray[v1] )
      {
        LODWORD(v7) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v7) )
          __debugbreak();
      }
      CgSoundSystem::StopSoundsOnEnt(CgSoundSystem::ms_soundSystemArray[v1], i + 5443);
      v4->playbackId = 0;
    }
  }
  memset_0(s_clientSoundEntities[v1], 0, sizeof(ClientSoundEntity[128]));
}

/*
==============
CG_SoundEntity_StopAllSounds
==============
*/
void CG_SoundEntity_StopAllSounds(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int i; 
  ClientSoundEntity *v3; 
  ClientSoundEntity *v4; 
  __int64 v5; 
  __int64 v6; 

  v1 = localClientNum;
  for ( i = 0; i < 128; ++i )
  {
    v3 = CG_SoundEntity_Get((LocalClientNum_t)v1, i);
    v4 = v3;
    if ( v3 && SND_IsPlaybackIdPlaying(v3->playbackId) )
    {
      if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
      {
        LODWORD(v6) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", v6) )
          __debugbreak();
      }
      if ( (unsigned int)v1 >= CgSoundSystem::ms_allocatedCount )
      {
        LODWORD(v6) = CgSoundSystem::ms_allocatedCount;
        LODWORD(v5) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( !CgSoundSystem::ms_soundSystemArray[v1] )
      {
        LODWORD(v6) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v6) )
          __debugbreak();
      }
      CgSoundSystem::StopSoundsOnEnt(CgSoundSystem::ms_soundSystemArray[v1], i + 5443);
      v4->playbackId = 0;
    }
  }
}

/*
==============
CG_SoundEntity_TriggerStart
==============
*/
void CG_SoundEntity_TriggerStart(LocalClientNum_t localClientNum, int soundEntityId, unsigned __int16 soundAlias, vec3_t *origin)
{
  float v4; 
  ClientSoundEntity *v8; 
  unsigned int v9; 
  bool v10; 
  int v11; 
  unsigned int v12; 
  CgSoundSystem *SoundSystem; 
  unsigned int v14; 
  int v15; 
  __int64 v16; 
  float v17; 

  v4 = origin->v[2];
  v16 = *(_QWORD *)origin->v;
  v17 = v4;
  v8 = CG_SoundEntity_Get(localClientNum, soundEntityId);
  if ( v8 )
  {
    v9 = soundAlias;
    v10 = Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80);
    v11 = 512;
    v12 = 512;
    if ( v10 )
      v12 = 0x7FFF;
    if ( v9 >= v12 )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
        v11 = 0x7FFF;
      v15 = v11;
      v14 = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_client.cpp", 81, ASSERT_TYPE_ASSERT, "(unsigned)( soundAlias ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_MULTIPLAYER ) ? ( (1 << 15) - 1 ) : 512 )", "soundAlias doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_MULTIPLAYER ) ? SND_MAX_PRECACHED_ALIASES : MAX_SOUNDALIASES\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
    v8->playbackId = SoundSystem->PlaySoundAliasByName(SoundSystem, soundEntityId + 5443, (const vec3_t *)&v16, v9);
  }
}

/*
==============
CG_SoundEntity_TriggerStop
==============
*/
void CG_SoundEntity_TriggerStop(LocalClientNum_t localClientNum, int soundEntityId)
{
  ClientSoundEntity *v4; 
  CgSoundSystem *SoundSystem; 

  v4 = CG_SoundEntity_Get(localClientNum, soundEntityId);
  if ( v4 )
  {
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
    CgSoundSystem::StopSoundsOnEnt(SoundSystem, soundEntityId + 5443);
    v4->playbackId = 0;
  }
}

