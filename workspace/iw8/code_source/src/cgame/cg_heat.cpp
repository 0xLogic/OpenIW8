/*
==============
CG_Heat_FireWeapon
==============
*/

void __fastcall CG_Heat_FireWeapon(LocalClientNum_t localClientNum, const entityState_t *es, PlayerHandIndex hand)
{
  ?CG_Heat_FireWeapon@@YAXW4LocalClientNum_t@@PEBUentityState_t@@W4PlayerHandIndex@@@Z(localClientNum, es, hand);
}

/*
==============
CG_Heat_UpdateWorldmodel
==============
*/

void __fastcall CG_Heat_UpdateWorldmodel(LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?CG_Heat_UpdateWorldmodel@@YAXW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Heat_UpdateViewmodel
==============
*/

void __fastcall CG_Heat_UpdateViewmodel(LocalClientNum_t localClientNum)
{
  ?CG_Heat_UpdateViewmodel@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_EffectIsNotDead
==============
*/
bool CG_EffectIsNotDead(LocalClientNum_t localClientNum, ParticleSystemHandle handle)
{
  __int64 v2; 
  ParticleSystem *v3; 
  unsigned __int32 v4; 
  __int64 v5; 

  v2 = (__int64)(int)localClientNum << 12;
  v3 = NULL;
  v4 = 0;
  if ( g_particleSystemsGeneration[v2 + (handle & 0xFFF)].__all32 == handle )
    v4 = handle & 0xFFF;
  v5 = v2 + v4;
  if ( g_particleSystems[0][v5] >= (ParticleSystem *)0x1000 )
    v3 = g_particleSystems[0][v5];
  return v3 && (v3->m_flags & 0x10) == 0;
}

/*
==============
CG_Heat_FireWeapon
==============
*/
void CG_Heat_FireWeapon(LocalClientNum_t localClientNum, const entityState_t *es, PlayerHandIndex hand)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  int number; 
  int clientNum; 
  __int64 v9; 
  __int64 v10; 

  v3 = hand;
  if ( !es )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_heat.cpp", 18, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
  }
  if ( ((es->eType - 1) & 0xFFEF) == 0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    number = es->number;
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( es->number >= 0xF8u )
    {
      LODWORD(v9) = es->number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_heat.cpp", 26, ASSERT_TYPE_ASSERT, "(unsigned)( es->number ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "es->number doesn't index MAX_CHARACTERS_STATIC\n\t%i not in [0, %i)", v9, 248) )
        __debugbreak();
    }
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v10) = 2;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_heat.cpp", 27, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( number == clientNum )
      LocalClientGlobals->viewmodelSmokeInfo[v3].lastFireTime = LocalClientGlobals->time;
    LocalClientGlobals->worldmodelSmokeInfo[es->number][v3].lastFireTime = LocalClientGlobals->time;
  }
}

/*
==============
CG_Heat_IsBoltOpenViewmodel
==============
*/
bool CG_Heat_IsBoltOpenViewmodel(LocalClientNum_t localClientNum, const playerState_s *ps, const Weapon *r_weapon, bool isAlternate, PlayerHandIndex handIndex, const WeaponHand *viewmodelHand)
{
  PlayerHandIndex v13; 
  int v16; 
  int v17; 
  CgWeaponMap *Instance; 
  signed int v19; 
  bool v20; 
  const XAnimParts *AnimParts; 
  XAnimTree *tree; 
  char v24; 
  char v25; 
  bool v27; 
  __int64 v30; 
  CgHandler *pmoveHandler; 
  AmmoStore result; 
  AmmoStore r_clip2; 

  __asm { vmovaps [rsp+148h+var_58], xmm6 }
  v30 = handIndex;
  pmoveHandler = CgHandler::getHandler(localClientNum);
  if ( ps->weapState[v30].weaponState != 16 )
  {
    if ( BG_WeaponDef(r_weapon, isAlternate)->heatIsOpenBolt )
      goto LABEL_31;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    _RAX = BG_AmmoStoreForWeapon(&result, r_weapon, isAlternate);
    v13 = handIndex;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+148h+r_clip2.weapon.weaponIdx], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rsp+148h+r_clip2.weapon.attachmentVariationIndices+5], ymm1
    }
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v16 = 0;
    if ( BG_HasLadderHand(ps) && handIndex == WEAPON_HAND_LEFT )
      v13 = WEAPON_HAND_DEFAULT;
    while ( !BG_IsClipCompatible(&ps->weapCommon.ammoInClip[v16].clipIndex, &r_clip2) )
    {
      if ( (unsigned int)++v16 >= 0xF )
        goto LABEL_16;
    }
    if ( ps->weapCommon.ammoInClip[v16].ammoCount[v13] > 0 )
      goto LABEL_28;
LABEL_16:
    v17 = ps->weapState[v30].weapAnim & 0xFFFFFF7F;
    Instance = CgWeaponMap::GetInstance(localClientNum);
    v19 = BG_MapWeaponAnimStateToAnimIndex(Instance, ps, v17, 0, r_weapon, isAlternate, handIndex, pmoveHandler);
    v20 = v19 == 237 || (unsigned int)(v19 - 335) <= 1;
    if ( (unsigned int)(ps->weapState[v30].weaponState - 18) <= 3 )
    {
      AnimParts = BG_WeaponGetAnimParts(ps, handIndex, isAlternate, (weapAnimFiles_t)v19, pmoveHandler);
      if ( !AnimParts )
        goto LABEL_28;
      *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(AnimParts, scr_const.close_bolt);
      __asm { vmovaps xmm6, xmm0 }
      if ( !viewmodelHand->viewModelDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_heat.cpp", 305, ASSERT_TYPE_ASSERT, "(viewmodelHand->viewModelDObj)", (const char *)&queryFormat, "viewmodelHand->viewModelDObj") )
        __debugbreak();
      tree = viewmodelHand->viewModelDObj->tree;
      if ( !tree )
        goto LABEL_28;
      *(double *)&_XMM0 = XAnimGetTime(tree, 0, XANIM_SUBTREE_DEFAULT, v19);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcomiss xmm6, xmm1
      }
      if ( !v24 )
      {
        __asm { vcomiss xmm6, xmm0 }
        if ( v24 | v25 )
          goto LABEL_28;
      }
LABEL_31:
      v27 = 1;
      goto LABEL_29;
    }
    if ( v20 )
      goto LABEL_31;
  }
LABEL_28:
  v27 = 0;
LABEL_29:
  __asm { vmovaps xmm6, [rsp+148h+var_58] }
  return v27;
}

/*
==============
CG_Heat_PlaySmokeEffect
==============
*/
ParticleSystemHandle CG_Heat_PlaySmokeEffect(LocalClientNum_t localClientNum, DObj *obj, const TagPair tagPair, bool useSecondBone, ParticleManager *particleManager, const ParticleSystemDef *particleSystemDef, int time, int dobjHandle)
{
  const ParticleSystemDef *v9; 
  __int64 entnum; 
  unsigned int v13; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  bool TagNameAndBoneIndexForCharacter; 
  unsigned __int8 NextBoneIndex; 
  scr_string_t *outTagName; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t name; 
  CharacterModelType modelTypesToSearch[2]; 
  ParticleManager *v32; 
  float4 emitterPos; 
  vector3 emitterOrientationMat; 
  TagPair v35; 

  v35 = tagPair;
  v9 = particleSystemDef;
  v32 = particleManager;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_heat.cpp", 330, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_heat.cpp", 331, ASSERT_TYPE_ASSERT, "(particleSystemDef)", (const char *)&queryFormat, "particleSystemDef") )
    __debugbreak();
  entnum = obj->entnum;
  v13 = entnum - 1;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_heat.cpp", 336, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v13) )
  {
    if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
    {
      if ( v13 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(outTagName) = entnum - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", outTagName, LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
          __debugbreak();
      }
      CharacterInfo = (const characterInfo_t *)(14792 * entnum + *(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] - 14792);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v13);
    }
  }
  else
  {
    CharacterInfo = NULL;
  }
  outBoneIndex[0] = -2;
  name = 0;
  modelTypesToSearch[0] = CHAR_MODEL_WEAPON_HELD;
  modelTypesToSearch[1] = CHAR_MODEL_WEAPON_HELD_LEFT;
  if ( CharacterInfo )
    TagNameAndBoneIndexForCharacter = TagPair::GetTagNameAndBoneIndexForCharacter(&v35, obj, CharacterInfo, modelTypesToSearch, 2, &name, outBoneIndex);
  else
    TagNameAndBoneIndexForCharacter = TagPair::GetTagNameAndBoneIndex(&v35, obj, &name, outBoneIndex);
  if ( !TagNameAndBoneIndexForCharacter )
    return 0;
  if ( useSecondBone )
  {
    NextBoneIndex = DObjGetNextBoneIndex(obj, name, outBoneIndex[0]);
    outBoneIndex[0] = NextBoneIndex;
    if ( NextBoneIndex == 0xFF )
      return 0;
  }
  else
  {
    NextBoneIndex = outBoneIndex[0];
  }
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
  }
  emitterPos.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rbp+37h+emitterPos.v]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4, 10h; vec3_t const vec3_origin
    vinsertps xmm3, xmm3, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8, 20h ; ' '; vec3_t const vec3_origin
    vshufps xmm0, xmm1, xmm1, 51h ; 'Q'
    vmovdqa xmmword ptr [rbp+37h+emitterOrientationMat.x.v], xmm1
    vshufps xmm1, xmm1, xmm1, 45h ; 'E'
    vmovups xmmword ptr [rbp+37h+emitterPos.v], xmm3
    vmovups xmmword ptr [rbp+37h+emitterPos.v], xmm3
    vmovups xmmword ptr [rbp+37h+emitterOrientationMat.y.v], xmm0
    vmovups xmmword ptr [rbp+37h+emitterOrientationMat.z.v], xmm1
  }
  return ParticleManager::AddSystem(v32, localClientNum, v9, &emitterPos, &emitterOrientationMat, time, PARTICLE_SYSTEM_FLAG_NO_SAVE, dobjHandle, NextBoneIndex, NULL, NULL, NULL);
}

/*
==============
CG_Heat_UpdateViewmodel
==============
*/
void CG_Heat_UpdateViewmodel(LocalClientNum_t localClientNum)
{
  __int64 v9; 
  playerState_s *p_predictedPlayerState; 
  __int64 v11; 
  const Weapon *ViewmodelWeapon; 
  __int64 p_weapFlags; 
  bool v14; 
  ParticleManager *v15; 
  cg_t *LocalClientGlobals; 
  PlayerHandIndex WeaponHand; 
  __int64 v18; 
  PlayerHandIndex v19; 
  int *p_weaponState; 
  const WeaponHand *m_weaponHand; 
  ParticleSystemHandle *p_ejectionPort; 
  __int64 v23; 
  WeaponHeat *v29; 
  ParticleSystemHandle v30; 
  __int64 v31; 
  unsigned int v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  bool v35; 
  char v36; 
  unsigned int v37; 
  unsigned __int64 v38; 
  unsigned __int64 v39; 
  bool v40; 
  LocalClientNum_t v41; 
  bool v42; 
  unsigned int v43; 
  unsigned __int64 v44; 
  unsigned __int64 v45; 
  bool v46; 
  const ParticleSystemDef *particleSystemDef; 
  int v48; 
  const TagPair *v49; 
  char v50; 
  char v51; 
  unsigned int v55; 
  unsigned __int64 v56; 
  unsigned __int64 v57; 
  unsigned int v58; 
  unsigned __int64 v59; 
  unsigned __int64 v60; 
  unsigned int v61; 
  unsigned __int64 v62; 
  unsigned __int64 v63; 
  FxCombinedDef *ejectionPortSmoke; 
  FxCombinedDef *ejectionPortSmokea; 
  __int64 time; 
  double timea; 
  double dobjHandle; 
  cg_t *v76; 
  playerState_s *ps; 
  __int64 v78; 
  FxCombinedDef muzzleSmoke; 
  FxCombinedDef barrelSmoke; 
  WeaponHeat *playerWeaponHeat; 
  CgHandler *Handler; 
  TagPair result; 
  TagPair tagPair; 
  FxCombinedDef v85; 
  __int64 v86; 
  TagPair v87; 
  char v88; 
  void *retaddr; 
  bool v91; 
  int *v92; 
  __int64 v93; 

  _RAX = &retaddr;
  v86 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
  }
  v9 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF000000, "CG_Heat_UpdateViewmodel");
  Handler = CgHandler::getHandler((LocalClientNum_t)v9);
  p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v9)->predictedPlayerState;
  ps = p_predictedPlayerState;
  Handler->PlayerWeaponHeatIterate(Handler, p_predictedPlayerState, BG_Heat_UpdateFlags);
  v11 = v9;
  v78 = v9;
  if ( !CgWeaponMap::ms_instance[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(CgWeaponMap::ms_instance[v9], p_predictedPlayerState);
  if ( p_predictedPlayerState )
  {
    p_weapFlags = (__int64)&p_predictedPlayerState->weapCommon.weapFlags;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 0x22u) )
      goto LABEL_6;
  }
  else
  {
    p_weapFlags = 1832i64;
  }
  if ( p_predictedPlayerState && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x1Bu)) )
  {
    v14 = 1;
    goto LABEL_7;
  }
LABEL_6:
  v14 = 0;
LABEL_7:
  v91 = v14;
  BG_HeatSmokeEffect(ViewmodelWeapon, v14, 1, &muzzleSmoke, &barrelSmoke, &v85);
  if ( (unsigned int)v9 >= 2 )
  {
    LODWORD(ejectionPortSmoke) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ejectionPortSmoke, 2) )
      __debugbreak();
  }
  v15 = &g_particleManager[v9];
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9);
  v76 = LocalClientGlobals;
  if ( !CgWeaponMap::ms_instance[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  WeaponHand = BG_PlayerLastWeaponHand(CgWeaponMap::ms_instance[v11], p_predictedPlayerState);
  v18 = WeaponHand;
  if ( (unsigned int)WeaponHand > WEAPON_HAND_LEFT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_heat.cpp", 65, ASSERT_TYPE_ASSERT, "(lastHand >= 0 && lastHand < NUM_WEAPON_HANDS)", (const char *)&queryFormat, "lastHand >= 0 && lastHand < NUM_WEAPON_HANDS") )
    __debugbreak();
  v19 = WEAPON_HAND_DEFAULT;
  if ( (int)v18 >= 0 )
  {
    p_weaponState = &p_predictedPlayerState->weapState[0].weaponState;
    v92 = &p_predictedPlayerState->weapState[0].weaponState;
    m_weaponHand = LocalClientGlobals->m_weaponHand;
    p_ejectionPort = &LocalClientGlobals->viewmodelSmokeInfo[0].ejectionPort;
    v23 = v18 + 1;
    v93 = v18 + 1;
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vmovss  xmm7, cs:__real@3f800000
      vmovsd  xmm9, cs:__real@3ff0000000000000
      vxorpd  xmm10, xmm10, xmm10
      vmovss  xmm11, cs:__real@437f0000
    }
    do
    {
      if ( (unsigned int)v19 >= NUM_WEAPON_HANDS )
      {
        LODWORD(time) = 2;
        LODWORD(ejectionPortSmoke) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1200, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", ejectionPortSmoke, time) )
          __debugbreak();
        v23 = v93;
        p_weaponState = v92;
      }
      if ( !m_weaponHand->viewModelDObj )
        goto LABEL_104;
      v29 = Handler->GetPlayerWeaponHeat(Handler, p_predictedPlayerState, ViewmodelWeapon, v19);
      playerWeaponHeat = v29;
      v30 = *((_DWORD *)p_ejectionPort - 2);
      v31 = v11 << 12;
      v32 = 0;
      if ( g_particleSystemsGeneration[v31 + (v30 & 0xFFF)].__all32 == v30 )
        v32 = *(p_ejectionPort - 2) & 0xFFF;
      v33 = *((_QWORD *)&g_particleSystems[0][v31] + v32);
      v34 = 0i64;
      if ( v33 >= 0x1000 )
        v34 = v33;
      v35 = v34 && (*(_BYTE *)(v34 + 416) & 0x10) == 0;
      if ( *v92 != 16 )
      {
        if ( BG_Heat_GetIsSmoking(v29, ViewmodelWeapon) )
        {
          v36 = 1;
          if ( !v35 && muzzleSmoke.particleSystemDef )
          {
            BG_GetWeaponFlashTagname(&result, ViewmodelWeapon, v91, 0);
            *((_DWORD *)p_ejectionPort - 2) = CG_Heat_PlaySmokeEffect(localClientNum, m_weaponHand->viewModelDObj, result, 0, v15, muzzleSmoke.particleSystemDef, v76->time, v19 + 2048);
          }
          goto LABEL_44;
        }
        v30 = *((_DWORD *)p_ejectionPort - 2);
      }
      v36 = 0;
      if ( v35 )
      {
        ParticleManager::StopSystem(v15, v30);
        *((_DWORD *)p_ejectionPort - 2) = 0;
      }
LABEL_44:
      v37 = 0;
      if ( g_particleSystemsGeneration[v31 + (*(p_ejectionPort - 1) & 0xFFF)].__all32 == *((_DWORD *)p_ejectionPort - 1) )
        v37 = *(p_ejectionPort - 1) & 0xFFF;
      v38 = *((_QWORD *)&g_particleSystems[0][v31] + v37);
      v39 = 0i64;
      if ( v38 >= 0x1000 )
        v39 = v38;
      v40 = v39 && (*(_BYTE *)(v39 + 416) & 0x10) == 0;
      if ( !BG_Heat_GetIsSmoking(playerWeaponHeat, ViewmodelWeapon) )
      {
        if ( v40 )
        {
          ParticleManager::StopSystem(v15, *(p_ejectionPort - 1));
          *((_DWORD *)p_ejectionPort - 1) = 0;
        }
LABEL_55:
        v41 = localClientNum;
        goto LABEL_56;
      }
      if ( v40 || !barrelSmoke.particleSystemDef )
        goto LABEL_55;
      BG_GetWeaponFlashTagname(&tagPair, ViewmodelWeapon, v91, 0);
      v41 = localClientNum;
      *((_DWORD *)p_ejectionPort - 1) = CG_Heat_PlaySmokeEffect(localClientNum, m_weaponHand->viewModelDObj, tagPair, 0, v15, barrelSmoke.particleSystemDef, v76->time, v19 + 2048);
LABEL_56:
      v42 = v36 && CG_Heat_IsBoltOpenViewmodel(v41, ps, ViewmodelWeapon, v91, v19, m_weaponHand);
      v43 = 0;
      if ( g_particleSystemsGeneration[v31 + (*p_ejectionPort & 0xFFF)].__all32 == *p_ejectionPort )
        v43 = *p_ejectionPort & 0xFFF;
      v44 = *((_QWORD *)&g_particleSystems[0][v31] + v43);
      v45 = 0i64;
      if ( v44 >= 0x1000 )
        v45 = v44;
      v46 = v45 && (*(_BYTE *)(v45 + 416) & 0x10) == 0;
      if ( v42 )
      {
        if ( !v46 )
        {
          particleSystemDef = v85.particleSystemDef;
          if ( v85.particleSystemDef )
          {
            v48 = v76->time;
            TagPair::TagPair(&v87, scr_const.tag_brass, (scr_string_t)0);
            *p_ejectionPort = CG_Heat_PlaySmokeEffect(localClientNum, m_weaponHand->viewModelDObj, *v49, 0, v15, particleSystemDef, v48, v19 + 2048);
          }
        }
      }
      else if ( v46 )
      {
        ParticleManager::StopSystem(v15, *p_ejectionPort);
        *p_ejectionPort = PARTICLE_SYSTEM_INVALID_HANDLE;
      }
      if ( *((_DWORD *)p_ejectionPort - 2) || *((_DWORD *)p_ejectionPort - 1) || *p_ejectionPort )
      {
        p_predictedPlayerState = ps;
        *(double *)&_XMM0 = BG_Heat_GetHeat(playerWeaponHeat, ViewmodelWeapon, 0, ps->serverTime);
        __asm
        {
          vmovaps xmm6, xmm0
          vcomiss xmm0, xmm8
        }
        if ( v50 )
          goto LABEL_108;
        __asm { vcomiss xmm0, xmm7 }
        if ( !(v50 | v51) )
        {
LABEL_108:
          __asm
          {
            vcvtss2sd xmm1, xmm6, xmm6
            vmovsd  qword ptr [rsp+158h+dobjHandle], xmm9
            vmovsd  qword ptr [rsp+158h+time], xmm10
            vmovsd  [rsp+158h+ejectionPortSmoke], xmm1
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_heat.cpp", 127, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( heat ) && ( heat ) <= ( 1.0f )", "heat not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&ejectionPortSmokea, timea, dobjHandle) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm0, xmm6, xmm11
          vcvttss2si r9d, xmm0
        }
        v55 = 0;
        if ( g_particleSystemsGeneration[v31 + (*(p_ejectionPort - 2) & 0xFFF)].__all32 == *((_DWORD *)p_ejectionPort - 2) )
          v55 = *(p_ejectionPort - 2) & 0xFFF;
        v56 = *((_QWORD *)&g_particleSystems[0][v31] + v55);
        v57 = 0i64;
        if ( v56 >= 0x1000 )
          v57 = v56;
        if ( v57 )
          *(_BYTE *)(v57 + 550) = _ER9;
        v58 = 0;
        if ( g_particleSystemsGeneration[v31 + (*(p_ejectionPort - 1) & 0xFFF)].__all32 == *((_DWORD *)p_ejectionPort - 1) )
          v58 = *(p_ejectionPort - 1) & 0xFFF;
        v59 = *((_QWORD *)&g_particleSystems[0][v31] + v58);
        v60 = 0i64;
        if ( v59 >= 0x1000 )
          v60 = v59;
        if ( v60 )
          *(_BYTE *)(v60 + 550) = _ER9;
        v61 = 0;
        if ( g_particleSystemsGeneration[v31 + (*p_ejectionPort & 0xFFF)].__all32 == *p_ejectionPort )
          v61 = *p_ejectionPort & 0xFFF;
        v62 = *((_QWORD *)&g_particleSystems[0][v31] + v61);
        v63 = 0i64;
        if ( v62 >= 0x1000 )
          v63 = v62;
        p_weaponState = v92;
        v11 = v78;
        if ( v63 )
          *(_BYTE *)(v63 + 550) = _ER9;
      }
      else
      {
        p_predictedPlayerState = ps;
        p_weaponState = v92;
        v11 = v78;
      }
      v23 = v93;
LABEL_104:
      ++v19;
      p_ejectionPort += 4;
      ++m_weaponHand;
      p_weaponState += 20;
      v92 = p_weaponState;
      v93 = --v23;
    }
    while ( v23 );
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v88;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
CG_Heat_UpdateWorldmodel
==============
*/
void CG_Heat_UpdateWorldmodel(LocalClientNum_t localClientNum, const centity_t *cent)
{
  __int64 v3; 
  entityState_t *p_nextState; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  __int64 number; 
  characterInfo_t *CharacterInfo; 
  CgWeaponMap *v9; 
  ParticleManager *ParticleManager; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  __int64 i; 
  const dvar_t *v16; 
  int v17; 
  int v18; 
  bool v19; 
  bool v20; 
  bool IsNotDead; 
  char v22; 
  entityState_t *v23; 
  bool v24; 
  bool v25; 
  bool v26; 
  const ParticleSystemDef *particleSystemDef; 
  int v28; 
  int time; 
  const TagPair *v30; 
  __int64 v31; 
  unsigned int v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  unsigned int v35; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  unsigned int v38; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  Weapon *r_stowedWeapon; 
  Weapon *r_stowedWeapona; 
  Weapon *r_executionWeapon; 
  Weapon *r_executionWeapona; 
  char v45; 
  int v46; 
  entityState_t *v47; 
  DObj *obj; 
  int *isWeaponSmoking; 
  characterInfo_t *v50; 
  FxCombinedDef muzzleSmoke; 
  FxCombinedDef barrelSmoke; 
  __int64 v53; 
  TagPair result; 
  TagPair tagPair; 
  const WeaponDef *v56; 
  FxCombinedDef ejectionPortSmoke; 
  __int64 v58; 
  TagPair v59; 
  Weapon r_heldWeapon; 
  Weapon r_turretWeapon; 
  Weapon r_accessoryWeapon; 
  Weapon v63; 
  Weapon v64; 
  Weapon r_thrownWeapon; 

  v3 = localClientNum;
  if ( (cent->flags & 1) != 0 )
  {
    p_nextState = &cent->nextState;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v47 = &cent->nextState;
    if ( LocalClientGlobals->predictedPlayerState.clientNum != cent->nextState.number || (Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v3), BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState)) || (v45 = 1, LocalClientGlobals->renderingThirdPerson) )
      v45 = 0;
    number = p_nextState->number;
    if ( (unsigned int)number >= 0xF8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_heat.cpp", 167, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "characterIndex doesn't index MAX_CHARACTERS_STATIC\n\t%i not in [0, %i)", number, 248) )
      __debugbreak();
    if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
    {
      if ( (unsigned int)number >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(r_executionWeapon) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(r_stowedWeapon) = number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", r_stowedWeapon, r_executionWeapon) )
          __debugbreak();
      }
      CharacterInfo = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * number);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, number);
    }
    v50 = CharacterInfo;
    if ( CharacterInfo )
    {
      v9 = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
      BG_GetCharacterWeapons(v9, p_nextState, CharacterInfo, &r_heldWeapon, &r_thrownWeapon, &v64, &v63, &r_accessoryWeapon, &r_turretWeapon);
      v56 = BG_WeaponDef(&r_heldWeapon, 0);
      ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)v3);
      BG_HeatSmokeEffect(&r_heldWeapon, CharacterInfo->isUsingWeaponAltMode != 0, 0, &muzzleSmoke, &barrelSmoke, &ejectionPortSmoke);
      v11 = p_nextState->number;
      if ( v11 > 0x9E4 )
      {
        LODWORD(r_executionWeapona) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", r_executionWeapona) )
          __debugbreak();
      }
      v53 = 2i64;
      if ( (unsigned int)v3 >= 2 )
      {
        LODWORD(r_executionWeapona) = 2;
        LODWORD(r_stowedWeapona) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", r_stowedWeapona, r_executionWeapona) )
          __debugbreak();
      }
      v12 = 2533 * v3 + v11;
      if ( v12 >= 0x13CA )
      {
        LODWORD(r_executionWeapona) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", r_executionWeapona) )
          __debugbreak();
      }
      v13 = clientObjMap[v12];
      if ( v13 )
      {
        if ( v13 >= (unsigned int)s_objCount )
        {
          LODWORD(r_executionWeapona) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", r_executionWeapona) )
            __debugbreak();
        }
        obj = (DObj *)s_objBuf[v13];
        if ( obj )
        {
          v58 = v3 << 12;
          v14 = 0;
          isWeaponSmoking = CharacterInfo->isWeaponSmoking;
          v46 = 0;
          for ( i = (__int64)&LocalClientGlobals->worldmodelSmokeInfo[number][0].barrel; ; i += 16i64 )
          {
            v16 = DCONST_DVARINT_cg_wmSmokeDelayAfterShot;
            v17 = v50->dualWielding != 0;
            if ( !DCONST_DVARINT_cg_wmSmokeDelayAfterShot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_wmSmokeDelayAfterShot") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v16);
            v18 = v16->current.integer + *(_DWORD *)(i + 8);
            v19 = v14 == 1;
            v20 = v17 >= v46 && !v45 && *isWeaponSmoking;
            IsNotDead = CG_EffectIsNotDead((LocalClientNum_t)v3, *(ParticleSystemHandle *)(i - 4));
            if ( LocalClientGlobals->time < v18 || !v20 )
              break;
            v22 = 1;
            if ( IsNotDead || !muzzleSmoke.particleSystemDef )
              goto LABEL_46;
            BG_GetWeaponFlashTagname(&result, &r_heldWeapon, 0, 0);
            v23 = v47;
            *(_DWORD *)(i - 4) = CG_Heat_PlaySmokeEffect((LocalClientNum_t)v3, obj, result, v19, ParticleManager, muzzleSmoke.particleSystemDef, LocalClientGlobals->time, v47->number);
LABEL_47:
            v24 = CG_EffectIsNotDead((LocalClientNum_t)v3, *(ParticleSystemHandle *)i);
            if ( v20 )
            {
              if ( !v24 && barrelSmoke.particleSystemDef )
              {
                BG_GetWeaponFlashTagname(&tagPair, &r_heldWeapon, 0, 0);
                *(_DWORD *)i = CG_Heat_PlaySmokeEffect((LocalClientNum_t)v3, obj, tagPair, v19, ParticleManager, barrelSmoke.particleSystemDef, LocalClientGlobals->time, v23->number);
              }
            }
            else if ( v24 )
            {
              ParticleManager::StopSystem(ParticleManager, *(ParticleSystemHandle *)i);
              *(_DWORD *)i = 0;
            }
            v25 = v22 && v56->heatIsOpenBolt;
            v26 = CG_EffectIsNotDead((LocalClientNum_t)v3, *(ParticleSystemHandle *)(i + 4));
            if ( v25 )
            {
              if ( !v26 )
              {
                particleSystemDef = ejectionPortSmoke.particleSystemDef;
                if ( ejectionPortSmoke.particleSystemDef )
                {
                  v28 = v23->number;
                  time = LocalClientGlobals->time;
                  TagPair::TagPair(&v59, scr_const.tag_brass, (scr_string_t)0);
                  *(_DWORD *)(i + 4) = CG_Heat_PlaySmokeEffect((LocalClientNum_t)v3, obj, *v30, v19, ParticleManager, particleSystemDef, time, v28);
                }
              }
            }
            else if ( v26 )
            {
              ParticleManager::StopSystem(ParticleManager, *(ParticleSystemHandle *)(i + 4));
              *(_DWORD *)(i + 4) = 0;
            }
            v31 = v58;
            v32 = 0;
            if ( g_particleSystemsGeneration[v58 + (*(_DWORD *)(i - 4) & 0xFFF)].__all32 == *(_DWORD *)(i - 4) )
              v32 = *(_DWORD *)(i - 4) & 0xFFF;
            v33 = *((_QWORD *)&g_particleSystems[0][v58] + v32);
            v34 = 0i64;
            if ( v33 >= 0x1000 )
              v34 = v33;
            if ( v34 )
              *(_BYTE *)(v34 + 550) = -1;
            v35 = 0;
            if ( g_particleSystemsGeneration[v31 + (*(_DWORD *)i & 0xFFF)].__all32 == *(_DWORD *)i )
              v35 = *(_DWORD *)i & 0xFFF;
            v36 = *((_QWORD *)&g_particleSystems[0][v31] + v35);
            v37 = 0i64;
            if ( v36 >= 0x1000 )
              v37 = v36;
            if ( v37 )
              *(_BYTE *)(v37 + 550) = -1;
            v38 = 0;
            if ( g_particleSystemsGeneration[v31 + (*(_DWORD *)(i + 4) & 0xFFF)].__all32 == *(_DWORD *)(i + 4) )
              v38 = *(_DWORD *)(i + 4) & 0xFFF;
            v39 = *((_QWORD *)&g_particleSystems[0][v31] + v38);
            v40 = 0i64;
            if ( v39 >= 0x1000 )
              v40 = v39;
            if ( v40 )
              *(_BYTE *)(v40 + 550) = -1;
            ++isWeaponSmoking;
            v14 = ++v46;
            if ( !--v53 )
              return;
          }
          v22 = 0;
          if ( IsNotDead )
          {
            ParticleManager::StopSystem(ParticleManager, *(ParticleSystemHandle *)(i - 4));
            *(_DWORD *)(i - 4) = 0;
          }
LABEL_46:
          v23 = v47;
          goto LABEL_47;
        }
      }
    }
  }
}

