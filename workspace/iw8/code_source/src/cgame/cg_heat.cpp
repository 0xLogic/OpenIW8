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
  PlayerHandIndex v9; 
  int v10; 
  int v11; 
  CgWeaponMap *Instance; 
  signed int v13; 
  bool v14; 
  const XAnimParts *AnimParts; 
  double NotetrackTimeFromParts; 
  float v17; 
  XAnimTree *tree; 
  double Time; 
  __int64 v22; 
  CgHandler *pmoveHandler; 
  AmmoStore result; 
  AmmoStore r_clip2; 

  v22 = handIndex;
  pmoveHandler = CgHandler::getHandler(localClientNum);
  if ( ps->weapState[v22].weaponState != 16 )
  {
    if ( BG_WeaponDef(r_weapon, isAlternate)->heatIsOpenBolt )
      return 1;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v9 = handIndex;
    r_clip2 = *BG_AmmoStoreForWeapon(&result, r_weapon, isAlternate);
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v10 = 0;
    if ( BG_HasLadderHand(ps) && handIndex == WEAPON_HAND_LEFT )
      v9 = WEAPON_HAND_DEFAULT;
    while ( !BG_IsClipCompatible(&ps->weapCommon.ammoInClip[v10].clipIndex, &r_clip2) )
    {
      if ( (unsigned int)++v10 >= 0xF )
        goto LABEL_16;
    }
    if ( ps->weapCommon.ammoInClip[v10].ammoCount[v9] > 0 )
      return 0;
LABEL_16:
    v11 = ps->weapState[v22].weapAnim & 0xFFFFFF7F;
    Instance = CgWeaponMap::GetInstance(localClientNum);
    v13 = BG_MapWeaponAnimStateToAnimIndex(Instance, ps, v11, 0, r_weapon, isAlternate, handIndex, pmoveHandler);
    v14 = v13 == 237 || (unsigned int)(v13 - 335) <= 1;
    if ( (unsigned int)(ps->weapState[v22].weaponState - 18) <= 3 )
    {
      AnimParts = BG_WeaponGetAnimParts(ps, handIndex, isAlternate, (weapAnimFiles_t)v13, pmoveHandler);
      if ( !AnimParts )
        return 0;
      NotetrackTimeFromParts = XAnimGetNotetrackTimeFromParts(AnimParts, scr_const.close_bolt);
      v17 = *(float *)&NotetrackTimeFromParts;
      if ( !viewmodelHand->viewModelDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_heat.cpp", 305, ASSERT_TYPE_ASSERT, "(viewmodelHand->viewModelDObj)", (const char *)&queryFormat, "viewmodelHand->viewModelDObj") )
        __debugbreak();
      tree = viewmodelHand->viewModelDObj->tree;
      if ( !tree )
        return 0;
      Time = XAnimGetTime(tree, 0, XANIM_SUBTREE_DEFAULT, v13);
      return v17 < 0.0 || v17 > *(float *)&Time;
    }
    if ( v14 )
      return 1;
  }
  return 0;
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
  __m128 v19; 
  __m128 v; 
  scr_string_t *outTagName; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t name; 
  CharacterModelType modelTypesToSearch[2]; 
  ParticleManager *v28; 
  float4 emitterPos; 
  vector3 emitterOrientationMat; 
  TagPair v31; 

  v31 = tagPair;
  v9 = particleSystemDef;
  v28 = particleManager;
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
    TagNameAndBoneIndexForCharacter = TagPair::GetTagNameAndBoneIndexForCharacter(&v31, obj, CharacterInfo, modelTypesToSearch, 2, &name, outBoneIndex);
  else
    TagNameAndBoneIndexForCharacter = TagPair::GetTagNameAndBoneIndex(&v31, obj, &name, outBoneIndex);
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
  v19 = (__m128)LODWORD(FLOAT_1_0);
  emitterPos.v.m128_i32[3] = 0;
  v = emitterPos.v;
  v.m128_f32[0] = 0.0;
  _XMM3 = v;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4, 10h; vec3_t const vec3_origin
    vinsertps xmm3, xmm3, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8, 20h ; ' '; vec3_t const vec3_origin
  }
  emitterOrientationMat.x = (float4)LODWORD(FLOAT_1_0);
  emitterPos.v = _XMM3;
  emitterOrientationMat.y.v = _mm_shuffle_ps(v19, v19, 81);
  emitterOrientationMat.z.v = _mm_shuffle_ps(v19, v19, 69);
  return ParticleManager::AddSystem(v28, localClientNum, v9, &emitterPos, &emitterOrientationMat, time, PARTICLE_SYSTEM_FLAG_NO_SAVE, dobjHandle, NextBoneIndex, NULL, NULL, NULL);
}

/*
==============
CG_Heat_UpdateViewmodel
==============
*/
void CG_Heat_UpdateViewmodel(LocalClientNum_t localClientNum)
{
  __int64 v2; 
  playerState_s *p_predictedPlayerState; 
  __int64 v4; 
  const Weapon *ViewmodelWeapon; 
  __int64 p_weapFlags; 
  bool v7; 
  ParticleManager *v8; 
  cg_t *LocalClientGlobals; 
  PlayerHandIndex WeaponHand; 
  __int64 v11; 
  PlayerHandIndex v12; 
  int *p_weaponState; 
  const WeaponHand *m_weaponHand; 
  ParticleSystemHandle *p_ejectionPort; 
  __int64 v16; 
  WeaponHeat *v18; 
  ParticleSystemHandle v19; 
  __int64 v20; 
  unsigned int v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  bool v24; 
  char v25; 
  unsigned int v26; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  bool v29; 
  LocalClientNum_t v30; 
  bool v31; 
  unsigned int v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  bool v35; 
  const ParticleSystemDef *particleSystemDef; 
  int v37; 
  const TagPair *v38; 
  double Heat; 
  int v40; 
  unsigned int v41; 
  unsigned __int64 v42; 
  unsigned __int64 v43; 
  unsigned int v44; 
  unsigned __int64 v45; 
  unsigned __int64 v46; 
  unsigned int v47; 
  unsigned __int64 v48; 
  unsigned __int64 v49; 
  FxCombinedDef *ejectionPortSmoke; 
  __int64 time; 
  cg_t *v52; 
  playerState_s *ps; 
  __int64 v54; 
  FxCombinedDef muzzleSmoke; 
  FxCombinedDef barrelSmoke; 
  WeaponHeat *playerWeaponHeat; 
  CgHandler *Handler; 
  TagPair result; 
  TagPair tagPair; 
  FxCombinedDef v61; 
  __int64 v62; 
  TagPair v63; 
  bool v65; 
  int *v66; 
  __int64 v67; 

  v62 = -2i64;
  v2 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF000000, "CG_Heat_UpdateViewmodel");
  Handler = CgHandler::getHandler((LocalClientNum_t)v2);
  p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v2)->predictedPlayerState;
  ps = p_predictedPlayerState;
  Handler->PlayerWeaponHeatIterate(Handler, p_predictedPlayerState, BG_Heat_UpdateFlags);
  v4 = v2;
  v54 = v2;
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(CgWeaponMap::ms_instance[v2], p_predictedPlayerState);
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
    v7 = 1;
    goto LABEL_7;
  }
LABEL_6:
  v7 = 0;
LABEL_7:
  v65 = v7;
  BG_HeatSmokeEffect(ViewmodelWeapon, v7, 1, &muzzleSmoke, &barrelSmoke, &v61);
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(ejectionPortSmoke) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ejectionPortSmoke, 2) )
      __debugbreak();
  }
  v8 = &g_particleManager[v2];
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
  v52 = LocalClientGlobals;
  if ( !CgWeaponMap::ms_instance[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  WeaponHand = BG_PlayerLastWeaponHand(CgWeaponMap::ms_instance[v4], p_predictedPlayerState);
  v11 = WeaponHand;
  if ( (unsigned int)WeaponHand > WEAPON_HAND_LEFT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_heat.cpp", 65, ASSERT_TYPE_ASSERT, "(lastHand >= 0 && lastHand < NUM_WEAPON_HANDS)", (const char *)&queryFormat, "lastHand >= 0 && lastHand < NUM_WEAPON_HANDS") )
    __debugbreak();
  v12 = WEAPON_HAND_DEFAULT;
  if ( (int)v11 >= 0 )
  {
    p_weaponState = &p_predictedPlayerState->weapState[0].weaponState;
    v66 = &p_predictedPlayerState->weapState[0].weaponState;
    m_weaponHand = LocalClientGlobals->m_weaponHand;
    p_ejectionPort = &LocalClientGlobals->viewmodelSmokeInfo[0].ejectionPort;
    v16 = v11 + 1;
    v67 = v11 + 1;
    __asm { vxorpd  xmm10, xmm10, xmm10 }
    do
    {
      if ( (unsigned int)v12 >= NUM_WEAPON_HANDS )
      {
        LODWORD(time) = 2;
        LODWORD(ejectionPortSmoke) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1200, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", ejectionPortSmoke, time) )
          __debugbreak();
        v16 = v67;
        p_weaponState = v66;
      }
      if ( !m_weaponHand->viewModelDObj )
        goto LABEL_104;
      v18 = Handler->GetPlayerWeaponHeat(Handler, p_predictedPlayerState, ViewmodelWeapon, v12);
      playerWeaponHeat = v18;
      v19 = *((_DWORD *)p_ejectionPort - 2);
      v20 = v4 << 12;
      v21 = 0;
      if ( g_particleSystemsGeneration[v20 + (v19 & 0xFFF)].__all32 == v19 )
        v21 = *(p_ejectionPort - 2) & 0xFFF;
      v22 = *((_QWORD *)&g_particleSystems[0][v20] + v21);
      v23 = 0i64;
      if ( v22 >= 0x1000 )
        v23 = v22;
      v24 = v23 && (*(_BYTE *)(v23 + 416) & 0x10) == 0;
      if ( *v66 != 16 )
      {
        if ( BG_Heat_GetIsSmoking(v18, ViewmodelWeapon) )
        {
          v25 = 1;
          if ( !v24 && muzzleSmoke.particleSystemDef )
          {
            BG_GetWeaponFlashTagname(&result, ViewmodelWeapon, v65, 0);
            *((_DWORD *)p_ejectionPort - 2) = CG_Heat_PlaySmokeEffect(localClientNum, m_weaponHand->viewModelDObj, result, 0, v8, muzzleSmoke.particleSystemDef, v52->time, v12 + 2048);
          }
          goto LABEL_44;
        }
        v19 = *((_DWORD *)p_ejectionPort - 2);
      }
      v25 = 0;
      if ( v24 )
      {
        ParticleManager::StopSystem(v8, v19);
        *((_DWORD *)p_ejectionPort - 2) = 0;
      }
LABEL_44:
      v26 = 0;
      if ( g_particleSystemsGeneration[v20 + (*(p_ejectionPort - 1) & 0xFFF)].__all32 == *((_DWORD *)p_ejectionPort - 1) )
        v26 = *(p_ejectionPort - 1) & 0xFFF;
      v27 = *((_QWORD *)&g_particleSystems[0][v20] + v26);
      v28 = 0i64;
      if ( v27 >= 0x1000 )
        v28 = v27;
      v29 = v28 && (*(_BYTE *)(v28 + 416) & 0x10) == 0;
      if ( !BG_Heat_GetIsSmoking(playerWeaponHeat, ViewmodelWeapon) )
      {
        if ( v29 )
        {
          ParticleManager::StopSystem(v8, *(p_ejectionPort - 1));
          *((_DWORD *)p_ejectionPort - 1) = 0;
        }
LABEL_55:
        v30 = localClientNum;
        goto LABEL_56;
      }
      if ( v29 || !barrelSmoke.particleSystemDef )
        goto LABEL_55;
      BG_GetWeaponFlashTagname(&tagPair, ViewmodelWeapon, v65, 0);
      v30 = localClientNum;
      *((_DWORD *)p_ejectionPort - 1) = CG_Heat_PlaySmokeEffect(localClientNum, m_weaponHand->viewModelDObj, tagPair, 0, v8, barrelSmoke.particleSystemDef, v52->time, v12 + 2048);
LABEL_56:
      v31 = v25 && CG_Heat_IsBoltOpenViewmodel(v30, ps, ViewmodelWeapon, v65, v12, m_weaponHand);
      v32 = 0;
      if ( g_particleSystemsGeneration[v20 + (*p_ejectionPort & 0xFFF)].__all32 == *p_ejectionPort )
        v32 = *p_ejectionPort & 0xFFF;
      v33 = *((_QWORD *)&g_particleSystems[0][v20] + v32);
      v34 = 0i64;
      if ( v33 >= 0x1000 )
        v34 = v33;
      v35 = v34 && (*(_BYTE *)(v34 + 416) & 0x10) == 0;
      if ( v31 )
      {
        if ( !v35 )
        {
          particleSystemDef = v61.particleSystemDef;
          if ( v61.particleSystemDef )
          {
            v37 = v52->time;
            TagPair::TagPair(&v63, scr_const.tag_brass, (scr_string_t)0);
            *p_ejectionPort = CG_Heat_PlaySmokeEffect(localClientNum, m_weaponHand->viewModelDObj, *v38, 0, v8, particleSystemDef, v37, v12 + 2048);
          }
        }
      }
      else if ( v35 )
      {
        ParticleManager::StopSystem(v8, *p_ejectionPort);
        *p_ejectionPort = PARTICLE_SYSTEM_INVALID_HANDLE;
      }
      if ( *((_DWORD *)p_ejectionPort - 2) || *((_DWORD *)p_ejectionPort - 1) || *p_ejectionPort )
      {
        p_predictedPlayerState = ps;
        Heat = BG_Heat_GetHeat(playerWeaponHeat, ViewmodelWeapon, 0, ps->serverTime);
        if ( (*(float *)&Heat < 0.0 || *(float *)&Heat > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_heat.cpp", 127, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( heat ) && ( heat ) <= ( 1.0f )", "heat not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&Heat, *(double *)&_XMM10, DOUBLE_1_0) )
          __debugbreak();
        v40 = (int)(float)(*(float *)&Heat * 255.0);
        v41 = 0;
        if ( g_particleSystemsGeneration[v20 + (*(p_ejectionPort - 2) & 0xFFF)].__all32 == *((_DWORD *)p_ejectionPort - 2) )
          v41 = *(p_ejectionPort - 2) & 0xFFF;
        v42 = *((_QWORD *)&g_particleSystems[0][v20] + v41);
        v43 = 0i64;
        if ( v42 >= 0x1000 )
          v43 = v42;
        if ( v43 )
          *(_BYTE *)(v43 + 550) = v40;
        v44 = 0;
        if ( g_particleSystemsGeneration[v20 + (*(p_ejectionPort - 1) & 0xFFF)].__all32 == *((_DWORD *)p_ejectionPort - 1) )
          v44 = *(p_ejectionPort - 1) & 0xFFF;
        v45 = *((_QWORD *)&g_particleSystems[0][v20] + v44);
        v46 = 0i64;
        if ( v45 >= 0x1000 )
          v46 = v45;
        if ( v46 )
          *(_BYTE *)(v46 + 550) = v40;
        v47 = 0;
        if ( g_particleSystemsGeneration[v20 + (*p_ejectionPort & 0xFFF)].__all32 == *p_ejectionPort )
          v47 = *p_ejectionPort & 0xFFF;
        v48 = *((_QWORD *)&g_particleSystems[0][v20] + v47);
        v49 = 0i64;
        if ( v48 >= 0x1000 )
          v49 = v48;
        p_weaponState = v66;
        v4 = v54;
        if ( v49 )
          *(_BYTE *)(v49 + 550) = v40;
      }
      else
      {
        p_predictedPlayerState = ps;
        p_weaponState = v66;
        v4 = v54;
      }
      v16 = v67;
LABEL_104:
      ++v12;
      p_ejectionPort += 4;
      ++m_weaponHand;
      p_weaponState += 20;
      v66 = p_weaponState;
      v67 = --v16;
    }
    while ( v16 );
  }
  Sys_ProfEndNamedEvent();
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

