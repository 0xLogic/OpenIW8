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
  const char *v8; 
  const char *v10; 
  unsigned __int16 v29; 
  __int64 v33; 
  vec3_t v34; 
  vec3_t vectorValue; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) )
  {
    if ( sv_serverSoundInfoCount < 1024 )
    {
      if ( Scr_GetNumParam(scrContext) == 4 || Scr_GetNumParam(scrContext) == 3 || Scr_GetNumParam(scrContext) == 2 )
      {
        if ( level.initializing )
        {
          __asm
          {
            vmovaps [rsp+98h+var_18], xmm6
            vmovaps [rsp+98h+var_28], xmm7
            vmovaps [rsp+98h+var_38], xmm8
          }
          String = Scr_GetString(scrContext, 0);
          Scr_GetVector(scrContext, 1u, &vectorValue);
          __asm { vxorps  xmm6, xmm6, xmm6 }
          if ( Scr_GetNumParam(scrContext) <= 2 )
          {
            __asm
            {
              vmovss  dword ptr [rsp+98h+var_60], xmm6
              vmovss  dword ptr [rsp+98h+var_60+4], xmm6
              vmovss  dword ptr [rsp+98h+var_60+8], xmm6
            }
          }
          else
          {
            Scr_GetVector(scrContext, 2u, &v34);
          }
          Alias = SND_FindAlias(String);
          if ( !Alias )
          {
            v8 = j_va("unknown sound alias '%s'", String);
            Scr_ParamError(COM_ERR_3330, scrContext, 0, v8);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_alias_db.h", 339, ASSERT_TYPE_ASSERT, "(aliasList)", (const char *)&queryFormat, "aliasList") )
              __debugbreak();
          }
          if ( !Alias->head && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_alias_db.h", 340, ASSERT_TYPE_ASSERT, "(aliasList->head)", (const char *)&queryFormat, "aliasList->head") )
            __debugbreak();
          _RDI = Alias->head;
          if ( (_RDI->flags & 1) == 0 )
          {
            v10 = j_va("'%s' is not a looping alias, do not use createLoopSound", String);
            Scr_ParamError(COM_ERR_3331, scrContext, 0, v10);
            _RDI = Alias->head;
          }
          __asm
          {
            vmovss  xmm8, dword ptr [rdi+64h]
            vmovss  xmm7, dword ptr [rdi+68h]
          }
          if ( !SND_IsEntChannel3D((unsigned __int8)(_RDI->flags >> 10)) && (_RDI->flags & 0x70) == 0 )
          {
            __asm
            {
              vmovss  xmm7, cs:__real@7149f2ca
              vxorps  xmm8, xmm8, xmm8
            }
          }
          _RBX = sv_serverSoundInfos;
          _ECX = 0;
          __asm { vmovd   xmm1, ecx }
          _EAX = _RDI->flags & 0x70;
          __asm
          {
            vmovd   xmm0, eax
            vpcmpeqd xmm2, xmm0, xmm1
            vmovss  xmm0, dword ptr [rsp+98h+vectorValue]
            vmovss  xmm1, dword ptr [rsp+98h+vectorValue+4]
          }
          _RCX = 9i64 * sv_serverSoundInfoCount;
          __asm
          {
            vmovss  dword ptr [rbx+rcx*4], xmm0
            vmovss  xmm0, dword ptr [rsp+98h+vectorValue+8]
            vmovss  dword ptr [rbx+rcx*4+8], xmm0
            vmovss  xmm0, dword ptr [rsp+98h+var_60]
            vmovss  dword ptr [rbx+rcx*4+4], xmm1
            vmovss  xmm1, dword ptr [rsp+98h+var_60+4]
            vmovss  dword ptr [rbx+rcx*4+0Ch], xmm0
            vmovss  xmm0, dword ptr [rsp+98h+var_60+8]
            vmovss  dword ptr [rbx+rcx*4+14h], xmm0
            vmovss  dword ptr [rbx+rcx*4+10h], xmm1
            vblendvps xmm3, xmm8, xmm6, xmm2
            vmulss  xmm0, xmm3, xmm3
            vmovss  dword ptr [rbx+rcx*4+18h], xmm0
            vmulss  xmm1, xmm7, xmm7
            vmovss  dword ptr [rbx+rcx*4+1Ch], xmm1
          }
          v29 = G_CStringSP_SoundAliasIndexPermanent(String);
          __asm
          {
            vmovaps xmm8, [rsp+98h+var_38]
            vmovaps xmm7, [rsp+98h+var_28]
            vmovaps xmm6, [rsp+98h+var_18]
          }
          v33 = sv_serverSoundInfoCount++;
          sv_serverSoundInfos[v33].loopSound = v29;
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

