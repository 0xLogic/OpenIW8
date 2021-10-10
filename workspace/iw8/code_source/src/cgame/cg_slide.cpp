/*
==============
CG_IsPlayerSliding
==============
*/

bool __fastcall CG_IsPlayerSliding(const characterInfo_t *ci, const centity_t *cent)
{
  return ?CG_IsPlayerSliding@@YA_NPEBUcharacterInfo_t@@PEBUcentity_t@@@Z(ci, cent);
}

/*
==============
Slide_GetFootstepVFX
==============
*/

const FxCombinedDef *__fastcall Slide_GetFootstepVFX(const characterInfo_t *ci, const int playerSurf)
{
  return ?Slide_GetFootstepVFX@@YAPEBUFxCombinedDef@@PEBUcharacterInfo_t@@H@Z(ci, playerSurf);
}

/*
==============
CG_Slide_UpdateClientEntity
==============
*/

void __fastcall CG_Slide_UpdateClientEntity(LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?CG_Slide_UpdateClientEntity@@YAXW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Slide_UpdateClientFX
==============
*/

void __fastcall CG_Slide_UpdateClientFX(LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?CG_Slide_UpdateClientFX@@YAXW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Slide_UpdateClient
==============
*/

void __fastcall CG_Slide_UpdateClient(LocalClientNum_t localClientNum)
{
  ?CG_Slide_UpdateClient@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_IsPlayerSliding
==============
*/
bool CG_IsPlayerSliding(const characterInfo_t *ci, const centity_t *cent)
{
  entityState_t *p_nextState; 
  unsigned int Animset; 
  unsigned int Anim; 
  int IsSlideAlias; 
  SuitAnimType SuitAnimIndex; 
  int LegsAnimation; 
  bool result; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slide.cpp", 23, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  result = 0;
  if ( !ci->usingAnimState )
  {
    p_nextState = &cent->nextState;
    if ( PlayerASM_IsEnabled() )
    {
      Animset = BG_PlayerASM_GetAnimset(p_nextState);
      Anim = BG_PlayerASM_GetAnim(p_nextState, MOVEMENT);
      IsSlideAlias = BG_PlayerASM_IsSlideAlias(Anim, Animset);
    }
    else
    {
      SuitAnimIndex = BG_AnimationMP_GetSuitAnimIndex(p_nextState);
      LegsAnimation = BG_AnimationMP_GetLegsAnimation(p_nextState);
      IsSlideAlias = BG_IsSlideAnim(LegsAnimation, SuitAnimIndex);
    }
    if ( IsSlideAlias )
      return 1;
  }
  return result;
}

/*
==============
CG_Slide_UpdateClient
==============
*/
void CG_Slide_UpdateClient(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  CgSoundSystem *SoundSystem; 
  __int64 clientNum; 
  int v5; 
  __int64 v6; 
  CgEntitySystem *v7; 
  double FootstepVolumeScale; 
  unsigned int refdefViewOrg_aab; 
  __int64 v10; 
  __int64 v11; 
  int v12[6]; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x1Du) )
  {
    SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v1);
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( (unsigned int)clientNum >= 0xF8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slide.cpp", 63, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->slideSurfaceType ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( cgameGlob->slideSurfaceType )\n\t%i not in [0, %i)", clientNum, 248) )
      __debugbreak();
    v5 = LocalClientGlobals->slideSurfaceType[clientNum];
    v6 = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v11) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v11) )
        __debugbreak();
    }
    if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v11) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v10) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v1] )
    {
      LODWORD(v11) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v11) )
        __debugbreak();
    }
    v7 = CgEntitySystem::ms_entitySystemArray[v1];
    if ( (unsigned int)v6 >= 0x800 )
    {
      LODWORD(v11) = 2048;
      LODWORD(v10) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    FootstepVolumeScale = CgSoundSystem::GetFootstepVolumeScale(SoundSystem, &v7->m_entities[v6], 3, 1);
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
    if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v12[0] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
    v12[1] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
    v12[2] = ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
    ((void (__fastcall *)(CgSoundSystem *, _QWORD, int *, SndAliasList *, int, _DWORD, _DWORD, _DWORD, __int64))SoundSystem->PlaySurfaceSound)(SoundSystem, (unsigned int)LocalClientGlobals->predictedPlayerState.clientNum, v12, cgMedia.slideLoopSoundPlayer, v5, LODWORD(FootstepVolumeScale), LODWORD(FLOAT_1_0), 0, -2i64);
    memset(v12, 0, 0xCui64);
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x1Du) )
  {
    if ( !LocalClientGlobals->slideRumblePlaying )
    {
      CG_Rumble_PlayLoopOnClientSafeNoEntFlagByName((LocalClientNum_t)v1, "slide_loop");
      LocalClientGlobals->slideRumblePlaying = 1;
    }
  }
  else if ( LocalClientGlobals->slideRumblePlaying )
  {
    LocalClientGlobals->slideRumblePlaying = 0;
    CG_Rumble_StopByName((LocalClientNum_t)v1, LocalClientGlobals->predictedPlayerState.clientNum, "slide_loop");
  }
}

/*
==============
CG_Slide_UpdateClientEntity
==============
*/
void CG_Slide_UpdateClientEntity(LocalClientNum_t localClientNum, const centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  int number; 
  CgStatic *LocalClientStatics; 
  __int64 v7; 
  cg_t *v8; 
  const characterInfo_t *CharacterInfo; 
  unsigned int Animset; 
  unsigned int Anim; 
  int IsSlideAlias; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  CgSoundSystem *SoundSystem; 
  __int16 v15; 
  int v16; 
  double FootstepVolumeScale; 
  int v18; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v23; 
  __int64 v33; 
  __int64 v34; 
  int v35[6]; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slide.cpp", 102, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    number = cent->nextState.number;
    if ( LocalClientGlobals == (cg_t *)-8i64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_local.h", 128, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2296, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
    }
    if ( GameModeFlagValues::ms_mpValue == ACTIVE && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x22u) )
    {
      if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2308, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x29u) )
      {
        if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
          goto LABEL_22;
      }
    }
    if ( number != LocalClientGlobals->predictedPlayerState.clientNum )
    {
LABEL_22:
      LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
      v7 = cent->nextState.number;
      v8 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v8->IsMP(v8) )
      {
        if ( (unsigned int)v7 >= v8[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v33) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v33, v8[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
            __debugbreak();
        }
        CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v8[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v7);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v8, v7);
      }
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slide.cpp", 113, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      if ( !CharacterInfo->usingAnimState )
      {
        if ( PlayerASM_IsEnabled() )
        {
          Animset = BG_PlayerASM_GetAnimset(CharacterInfo);
          Anim = BG_PlayerASM_GetAnim(CharacterInfo, MOVEMENT);
          IsSlideAlias = BG_PlayerASM_IsSlideAlias(Anim, Animset);
        }
        else
        {
          SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(CharacterInfo);
          IsSlideAlias = BG_IsSlideAnim(CharacterInfo->playerAnim.legsAnim, SuitAnimIndexFromCharacter);
        }
        if ( IsSlideAlias )
        {
          SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
          v15 = cent->nextState.number;
          if ( (unsigned __int16)v15 >= 0xF8u )
          {
            LODWORD(v34) = 248;
            LODWORD(v33) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slide.cpp", 137, ASSERT_TYPE_ASSERT, "(unsigned)( es->number ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->slideSurfaceType ) ) + 0 ) )", "es->number doesn't index ARRAY_COUNT( cgameGlob->slideSurfaceType )\n\t%i not in [0, %i)", v33, v34) )
              __debugbreak();
          }
          v16 = LocalClientGlobals->slideSurfaceType[cent->nextState.number];
          FootstepVolumeScale = CgSoundSystem::GetFootstepVolumeScale(SoundSystem, cent, 3, 1);
          v18 = LODWORD(FootstepVolumeScale);
          if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
            __debugbreak();
          if ( !cent->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(cent->pose.origin.Get_origin, &cent->pose);
          FunctionPointer_origin(&cent->pose.origin.origin.origin, (vec3_t *)v35);
          if ( cent->pose.isPosePrecise )
          {
            _XMM0 = (unsigned int)v35[0];
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v23 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v23 = *(double *)&_XMM0 * 0.000244140625;
            _XMM0 = v23;
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            v35[0] = _XMM1;
            _XMM2 = (unsigned int)v35[1];
            __asm { vcvtdq2pd xmm2, xmm2 }
            *((_QWORD *)&v23 + 1) = *((_QWORD *)&_XMM2 + 1);
            *(double *)&v23 = *(double *)&_XMM2 * 0.000244140625;
            _XMM0 = v23;
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            v35[1] = _XMM1;
            _XMM2 = (unsigned int)v35[2];
            __asm { vcvtdq2pd xmm2, xmm2 }
            *((_QWORD *)&v23 + 1) = *((_QWORD *)&_XMM2 + 1);
            *(double *)&v23 = *(double *)&_XMM2 * 0.000244140625;
            _XMM0 = v23;
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            v35[2] = _XMM1;
          }
          ((void (__fastcall *)(CgSoundSystem *, _QWORD, int *, SndAliasList *, int, int, _DWORD, _DWORD, __int64))SoundSystem->PlaySurfaceSound)(SoundSystem, (unsigned int)cent->nextState.number, v35, cgMedia.slideLoopSound, v16, v18, LODWORD(FLOAT_1_0), 0, -2i64);
          memset(v35, 0, 0xCui64);
        }
      }
    }
  }
}

/*
==============
CG_Slide_UpdateClientFX
==============
*/
void CG_Slide_UpdateClientFX(LocalClientNum_t localClientNum, const centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  entityState_t *p_nextState; 
  CgStatic *LocalClientStatics; 
  __int64 number; 
  cg_t *v8; 
  characterInfo_t *CharacterInfo; 
  const dvar_t *v10; 
  unsigned int Animset; 
  unsigned int Anim; 
  unsigned __int8 slidefxSurfaceType; 
  const SuitDef *SuitDef; 
  FootstepVFX *footstepvfx_slide; 
  int v16; 
  SuitAnimType SuitAnimIndex; 
  int LegsAnimation; 
  int v19; 
  int v20; 
  const FxCombinedDef *FootstepVFX; 
  const ParticleSystemDef *particleSystemDef; 
  int v23; 
  const FxCombinedDef *v24; 
  const ParticleSystemDef *v25; 
  int v26; 
  __int64 v27; 
  __int64 v28; 
  FXRegisteredDef fxDef; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    return;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slide.cpp", 170, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_nextState = &cent->nextState;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  number = p_nextState->number;
  v8 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( v8->IsMP(v8) )
  {
    if ( (unsigned int)number >= v8[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      LODWORD(v27) = number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v27, v8[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
        __debugbreak();
    }
    CharacterInfo = (characterInfo_t *)(*(_QWORD *)&v8[1].predictedPlayerState.rxvOmnvars[62] + 14792 * number);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v8, number);
  }
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slide.cpp", 177, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v10 = DVARBOOL_cg_fx_slide_enable;
  if ( !DVARBOOL_cg_fx_slide_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fx_slide_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled )
    goto LABEL_27;
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slide.cpp", 23, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( CharacterInfo->usingAnimState )
    goto LABEL_27;
  if ( PlayerASM_IsEnabled() )
  {
    Animset = BG_PlayerASM_GetAnimset(p_nextState);
    Anim = BG_PlayerASM_GetAnim(p_nextState, MOVEMENT);
    if ( !BG_PlayerASM_IsSlideAlias(Anim, Animset) )
      goto LABEL_27;
  }
  else
  {
    SuitAnimIndex = BG_AnimationMP_GetSuitAnimIndex(p_nextState);
    LegsAnimation = BG_AnimationMP_GetLegsAnimation(p_nextState);
    if ( !BG_IsSlideAnim(LegsAnimation, SuitAnimIndex) )
    {
LABEL_27:
      slidefxSurfaceType = CharacterInfo->slidefxSurfaceType;
      if ( slidefxSurfaceType )
      {
        SuitDef = BG_GetSuitDef(CharacterInfo->suitIndex);
        if ( SuitDef )
        {
          footstepvfx_slide = SuitDef->footstepvfx_slide;
          if ( footstepvfx_slide )
          {
            if ( (FootstepVFX *)((char *)footstepvfx_slide + 8 * slidefxSurfaceType) != (FootstepVFX *)-8i64 )
            {
              if ( footstepvfx_slide->footstepVFX[slidefxSurfaceType].particleSystemDef )
              {
                v16 = p_nextState->number;
                fxDef.m_particleSystemDef = footstepvfx_slide->footstepVFX[slidefxSurfaceType].particleSystemDef;
                CG_StopBoltedEffects(localClientNum, &fxDef, v16, scr_const.tag_origin);
              }
            }
          }
        }
        CharacterInfo->slidefxSurfaceType = 0;
      }
      return;
    }
  }
  if ( p_nextState->number >= 0xF8u )
  {
    LODWORD(v28) = 248;
    LODWORD(v27) = p_nextState->number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slide.cpp", 181, ASSERT_TYPE_ASSERT, "(unsigned)( es->number ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->slideSurfaceType ) ) + 0 ) )", "es->number doesn't index ARRAY_COUNT( cgameGlob->slideSurfaceType )\n\t%i not in [0, %i)", v27, v28) )
      __debugbreak();
  }
  v19 = CharacterInfo->slidefxSurfaceType;
  v20 = LocalClientGlobals->slideSurfaceType[p_nextState->number];
  if ( v20 != v19 )
  {
    if ( (_BYTE)v19 )
    {
      FootstepVFX = Slide_GetFootstepVFX(CharacterInfo, v19);
      if ( FootstepVFX )
      {
        particleSystemDef = FootstepVFX->particleSystemDef;
        if ( particleSystemDef )
        {
          v23 = p_nextState->number;
          fxDef.m_particleSystemDef = particleSystemDef;
          CG_StopBoltedEffects(localClientNum, &fxDef, v23, scr_const.tag_origin);
        }
      }
    }
    CharacterInfo->slidefxSurfaceType = v20;
    v24 = Slide_GetFootstepVFX(CharacterInfo, (unsigned __int8)v20);
    if ( v24 )
    {
      v25 = v24->particleSystemDef;
      if ( v25 )
      {
        v26 = p_nextState->number;
        fxDef.m_particleSystemDef = v25;
        CG_PlayBoltedEffect(localClientNum, &fxDef, v26, scr_const.tag_origin);
      }
    }
  }
}

/*
==============
Slide_GetFootstepVFX
==============
*/
FxCombinedDef *Slide_GetFootstepVFX(const characterInfo_t *ci, const int playerSurf)
{
  __int64 v2; 
  const SuitDef *SuitDef; 
  FootstepVFX *footstepvfx_slide; 

  v2 = playerSurf;
  if ( ci && (SuitDef = BG_GetSuitDef(ci->suitIndex)) != NULL && (footstepvfx_slide = SuitDef->footstepvfx_slide) != NULL )
    return &footstepvfx_slide->footstepVFX[v2];
  else
    return 0i64;
}

