/*
==============
SV_ServerCulledSoundsSP_ClearServerCulledSounds
==============
*/

void SV_ServerCulledSoundsSP_ClearServerCulledSounds(void)
{
  ?SV_ServerCulledSoundsSP_ClearServerCulledSounds@@YAXXZ();
}

/*
==============
SV_ServerCulledSoundsSP_ScrSpawnLoopingSound
==============
*/

void __fastcall SV_ServerCulledSoundsSP_ScrSpawnLoopingSound(scrContext_t *scrContext)
{
  ?SV_ServerCulledSoundsSP_ScrSpawnLoopingSound@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
SV_ServerCulledSoundsSP_GetServerSoundInfo
==============
*/

serverSoundInfo_s *__fastcall SV_ServerCulledSoundsSP_GetServerSoundInfo(int soundInfoIndex)
{
  return ?SV_ServerCulledSoundsSP_GetServerSoundInfo@@YAPEAUserverSoundInfo_s@@H@Z(soundInfoIndex);
}

/*
==============
SV_ServerCulledSoundsSP_GetMaxSoundInfo
==============
*/

int __fastcall SV_ServerCulledSoundsSP_GetMaxSoundInfo()
{
  return ?SV_ServerCulledSoundsSP_GetMaxSoundInfo@@YAHXZ();
}

/*
==============
SV_ServerCulledSoundsSP_ClearServerCulledSounds
==============
*/
void SV_ServerCulledSoundsSP_ClearServerCulledSounds(void)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_culled_sounds_sp.cpp", 115, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
    __debugbreak();
  sv_serverSoundInfoCount = 0;
}

/*
==============
SV_ServerCulledSoundsSP_GetMaxSoundInfo
==============
*/
__int64 SV_ServerCulledSoundsSP_GetMaxSoundInfo()
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_culled_sounds_sp.cpp", 122, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
    __debugbreak();
  return (unsigned int)sv_serverSoundInfoCount;
}

/*
==============
SV_ServerCulledSoundsSP_GetServerSoundInfo
==============
*/
serverSoundInfo_s *SV_ServerCulledSoundsSP_GetServerSoundInfo(int soundInfoIndex)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = soundInfoIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_culled_sounds_sp.cpp", 129, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x400 )
  {
    v4 = 1024;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_culled_sounds_sp.cpp", 130, ASSERT_TYPE_ASSERT, "(unsigned)( soundInfoIndex ) < (unsigned)( 1024 )", "soundInfoIndex doesn't index MAX_SERVER_CULLED_SOUNDS\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &sv_serverSoundInfos[v1];
}

/*
==============
SV_ServerCulledSoundsSP_ScrSpawnLoopingSound
==============
*/
void SV_ServerCulledSoundsSP_ScrSpawnLoopingSound(scrContext_t *scrContext)
{
  const char *String; 
  SndAliasList *Alias; 
  const char *v4; 
  SndAlias *head; 
  const char *v6; 
  float distMax; 
  float v11; 
  __int64 v12; 
  float v13; 
  unsigned __int16 v15; 
  __int64 v16; 
  vec3_t v17; 
  vec3_t vectorValue; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) )
  {
    if ( sv_serverSoundInfoCount < 1024 )
    {
      if ( Scr_GetNumParam(scrContext) == 4 || Scr_GetNumParam(scrContext) == 3 || Scr_GetNumParam(scrContext) == 2 )
      {
        if ( level.initializing )
        {
          String = Scr_GetString(scrContext, 0);
          Scr_GetVector(scrContext, 1u, &vectorValue);
          if ( Scr_GetNumParam(scrContext) <= 2 )
          {
            v17.v[0] = 0.0;
            v17.v[1] = 0.0;
            v17.v[2] = 0.0;
          }
          else
          {
            Scr_GetVector(scrContext, 2u, &v17);
          }
          Alias = SND_FindAlias(String);
          if ( !Alias )
          {
            v4 = j_va("unknown sound alias '%s'", String);
            Scr_ParamError(COM_ERR_3330, scrContext, 0, v4);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_alias_db.h", 339, ASSERT_TYPE_ASSERT, "(aliasList)", (const char *)&queryFormat, "aliasList") )
              __debugbreak();
          }
          if ( !Alias->head && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_alias_db.h", 340, ASSERT_TYPE_ASSERT, "(aliasList->head)", (const char *)&queryFormat, "aliasList->head") )
            __debugbreak();
          head = Alias->head;
          if ( (head->flags & 1) == 0 )
          {
            v6 = j_va("'%s' is not a looping alias, do not use createLoopSound", String);
            Scr_ParamError(COM_ERR_3331, scrContext, 0, v6);
            head = Alias->head;
          }
          _XMM8 = LODWORD(head->distMin);
          distMax = head->distMax;
          if ( !SND_IsEntChannel3D((unsigned __int8)(head->flags >> 10)) && (head->flags & 0x70) == 0 )
          {
            distMax = FLOAT_1_0e30;
            _XMM8 = 0i64;
          }
          _XMM0 = head->flags & 0x70;
          __asm { vpcmpeqd xmm2, xmm0, xmm1 }
          v11 = vectorValue.v[1];
          v12 = sv_serverSoundInfoCount;
          sv_serverSoundInfos[v12].soundOrigin.v[0] = vectorValue.v[0];
          sv_serverSoundInfos[v12].soundOrigin.v[2] = vectorValue.v[2];
          *(float *)&_XMM0 = v17.v[0];
          sv_serverSoundInfos[v12].soundOrigin.v[1] = v11;
          v13 = v17.v[1];
          sv_serverSoundInfos[v12].soundAngles.v[0] = *(float *)&_XMM0;
          sv_serverSoundInfos[v12].soundAngles.v[2] = v17.v[2];
          sv_serverSoundInfos[v12].soundAngles.v[1] = v13;
          __asm { vblendvps xmm3, xmm8, xmm6, xmm2 }
          sv_serverSoundInfos[v12].minDistSq = *(float *)&_XMM3 * *(float *)&_XMM3;
          sv_serverSoundInfos[v12].maxDistSq = distMax * distMax;
          v15 = G_CStringSP_SoundAliasIndexPermanent(String);
          v16 = sv_serverSoundInfoCount++;
          sv_serverSoundInfos[v16].loopSound = v15;
        }
        else
        {
          Scr_Error(COM_ERR_3329, scrContext, "SpawnLoopingSound() must be called during level initialization.\n");
        }
      }
      else
      {
        Scr_Error(COM_ERR_3328, scrContext, "SpawnLoopingSound requires 2, 3, or 4 parameters");
      }
    }
    else
    {
      Scr_Error(COM_ERR_3327, scrContext, "SpawnLoopingSound called with too many sounds in level");
    }
  }
  else
  {
    Scr_Error(COM_ERR_3326, scrContext, "SpawnLoopingSound is not supported in this game mode");
  }
}

