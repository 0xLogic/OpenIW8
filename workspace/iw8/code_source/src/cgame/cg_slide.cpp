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
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  CgSoundSystem *SoundSystem; 
  __int64 clientNum; 
  int v8; 
  __int64 v9; 
  CgEntitySystem *v10; 
  unsigned int refdefViewOrg_aab; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  int v19[6]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v4 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x1Du) )
  {
    SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v4);
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( (unsigned int)clientNum >= 0xF8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slide.cpp", 63, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->slideSurfaceType ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( cgameGlob->slideSurfaceType )\n\t%i not in [0, %i)", clientNum, 248) )
      __debugbreak();
    v8 = LocalClientGlobals->slideSurfaceType[clientNum];
    v9 = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v17) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v17) )
        __debugbreak();
    }
    if ( (unsigned int)v4 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v17) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v15) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v15, v17) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v4] )
    {
      LODWORD(v17) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v17) )
        __debugbreak();
    }
    v10 = CgEntitySystem::ms_entitySystemArray[v4];
    if ( (unsigned int)v9 >= 0x800 )
    {
      LODWORD(v17) = 2048;
      LODWORD(v15) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v15, v17) )
        __debugbreak();
    }
    *(double *)&_XMM0 = CgSoundSystem::GetFootstepVolumeScale(SoundSystem, &v10->m_entities[v9], 3, 1);
    __asm { vmovaps xmm6, xmm0 }
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
    if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v19[0] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
    v19[1] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
    v19[2] = ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  dword ptr [rsp+98h+var_68], xmm0
      vmovss  dword ptr [rsp+98h+var_70], xmm6
    }
    ((void (__fastcall *)(CgSoundSystem *, _QWORD, int *, SndAliasList *, int, int, int, _DWORD, __int64))SoundSystem->PlaySurfaceSound)(SoundSystem, (unsigned int)LocalClientGlobals->predictedPlayerState.clientNum, v19, cgMedia.slideLoopSoundPlayer, v8, v16, v18, 0, -2i64);
    memset(v19, 0, 0xCui64);
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x1Du) )
  {
    if ( !LocalClientGlobals->slideRumblePlaying )
    {
      CG_Rumble_PlayLoopOnClientSafeNoEntFlagByName((LocalClientNum_t)v4, "slide_loop");
      LocalClientGlobals->slideRumblePlaying = 1;
    }
  }
  else if ( LocalClientGlobals->slideRumblePlaying )
  {
    LocalClientGlobals->slideRumblePlaying = 0;
    CG_Rumble_StopByName((LocalClientNum_t)v4, LocalClientGlobals->predictedPlayerState.clientNum, "slide_loop");
  }
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
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
  __int64 v10; 
  cg_t *v11; 
  const characterInfo_t *CharacterInfo; 
  unsigned int Animset; 
  unsigned int Anim; 
  int IsSlideAlias; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  CgSoundSystem *SoundSystem; 
  __int16 v18; 
  int v19; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int64 v37; 
  int v38; 
  __int64 v39; 
  int v40; 
  int v41[6]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
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
      v10 = cent->nextState.number;
      v11 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v11->IsMP(v11) )
      {
        if ( (unsigned int)v10 >= v11[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v37) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v37, v11[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
            __debugbreak();
        }
        CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v11[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v10);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v11, v10);
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
          v18 = cent->nextState.number;
          if ( (unsigned __int16)v18 >= 0xF8u )
          {
            LODWORD(v39) = 248;
            LODWORD(v37) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slide.cpp", 137, ASSERT_TYPE_ASSERT, "(unsigned)( es->number ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->slideSurfaceType ) ) + 0 ) )", "es->number doesn't index ARRAY_COUNT( cgameGlob->slideSurfaceType )\n\t%i not in [0, %i)", v37, v39) )
              __debugbreak();
          }
          v19 = LocalClientGlobals->slideSurfaceType[cent->nextState.number];
          *(double *)&_XMM0 = CgSoundSystem::GetFootstepVolumeScale(SoundSystem, cent, 3, 1);
          __asm { vmovaps xmm6, xmm0 }
          if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
            __debugbreak();
          if ( !cent->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(cent->pose.origin.Get_origin, &cent->pose);
          FunctionPointer_origin(&cent->pose.origin.origin.origin, (vec3_t *)v41);
          if ( cent->pose.isPosePrecise )
          {
            __asm
            {
              vmovd   xmm0, [rsp+98h+var_50]
              vcvtdq2pd xmm0, xmm0
              vmovsd  xmm3, cs:__real@3f30000000000000
              vmulsd  xmm0, xmm0, xmm3
              vcvtsd2ss xmm1, xmm0, xmm0
              vmovss  [rsp+98h+var_50], xmm1
              vmovd   xmm2, [rsp+98h+var_4C]
              vcvtdq2pd xmm2, xmm2
              vmulsd  xmm0, xmm2, xmm3
              vcvtsd2ss xmm1, xmm0, xmm0
              vmovss  [rsp+98h+var_4C], xmm1
              vmovd   xmm2, [rsp+98h+var_48]
              vcvtdq2pd xmm2, xmm2
              vmulsd  xmm0, xmm2, xmm3
              vcvtsd2ss xmm1, xmm0, xmm0
              vmovss  [rsp+98h+var_48], xmm1
            }
          }
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vmovss  dword ptr [rsp+98h+var_68], xmm0
            vmovss  dword ptr [rsp+98h+var_70], xmm6
          }
          ((void (__fastcall *)(CgSoundSystem *, _QWORD, int *, SndAliasList *, int, int, int, _DWORD, __int64))SoundSystem->PlaySurfaceSound)(SoundSystem, (unsigned int)cent->nextState.number, v41, cgMedia.slideLoopSound, v19, v38, v40, 0, -2i64);
          memset(v41, 0, 0xCui64);
        }
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
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

