/*
==============
CG_PlayersSP_ClearPlayersFromScene
==============
*/

void __fastcall CG_PlayersSP_ClearPlayersFromScene(LocalClientNum_t localClientNum)
{
  ?CG_PlayersSP_ClearPlayersFromScene@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayersSP_AddLocalPlayerToScene
==============
*/

void __fastcall CG_PlayersSP_AddLocalPlayerToScene(LocalClientNum_t localClientNum, bool isLocalClientFirstPerson)
{
  ?CG_PlayersSP_AddLocalPlayerToScene@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, isLocalClientFirstPerson);
}

/*
==============
CG_PlayersSP_AddLocalPlayerToScene
==============
*/
void CG_PlayersSP_AddLocalPlayerToScene(LocalClientNum_t localClientNum, bool isLocalClientFirstPerson)
{
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  centity_t *v6; 
  bool ShouldDrawPlayerLegs; 
  bool ShouldDrawPlayerShadow; 
  unsigned int scriptableIndex; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    Entity = CG_GetEntity(localClientNum, LocalClientGlobals->clientNum);
    v6 = Entity;
    if ( (Entity->flags & 1) != 0 )
    {
      CG_PlayersSP_PrePlayer(localClientNum, Entity);
      if ( ScriptableCl_IsScriptableEntity(localClientNum, v6) )
      {
        if ( ScriptableCl_GetIndexForEntity(localClientNum, v6, &scriptableIndex) )
        {
          ScriptableCl_UpdatePosition(localClientNum, scriptableIndex, v6);
          ScriptableCl_UpdateSharedInstance(localClientNum, scriptableIndex, v6->nextState.number);
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_players_sp.cpp", 568, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SP Player has a reserved scriptable but cannot resolve the index for that scriptable. Entity Number:%d", v6->nextState.number) )
        {
          __debugbreak();
        }
      }
      if ( !isLocalClientFirstPerson || (ShouldDrawPlayerLegs = CG_PlayersSP_ShouldDrawPlayerLegs(localClientNum), ShouldDrawPlayerShadow = CG_PlayersSP_ShouldDrawPlayerShadow(localClientNum), ShouldDrawPlayerLegs) || ShouldDrawPlayerShadow )
        CG_PlayersSP_AddPlayerToScene(localClientNum, v6, isLocalClientFirstPerson);
    }
  }
}

/*
==============
CG_PlayersSP_AddPlayerToScene
==============
*/
void CG_PlayersSP_AddPlayerToScene(LocalClientNum_t localClientNum, centity_t *cent, bool isFirstPerson)
{
  cg_t *LocalClientGlobals; 
  DObj *ClientDObj; 
  CgHandler *Handler; 
  __int128 viewHeightCurrent_low; 
  float v12; 
  bool drawLegs; 
  bool drawShadow; 
  int v15; 
  const HudOutlineDef *HudOutlineDef; 
  int outlineWidth; 
  __m256i v18; 
  vec3_t outOrigin; 
  float characterEVOffset; 
  GfxSceneHudOutlineInfo v21; 
  shaderOverride_t v22; 
  __int64 v23; 
  vec3_t outlinedEntityOrigin; 
  vec3_t playerViewOrigin; 
  WorldUpReferenceFrame v26; 

  v23 = -2i64;
  *(__m256i *)&v22.scrollRateX = *(__m256i *)&NULL_HUDOUTLINE_INFO_10.color;
  *(__m256i *)&v21.color = *(__m256i *)&NULL_HUDOUTLINE_INFO_10.color;
  characterEVOffset = NULL_HUDOUTLINE_INFO_10.characterEVOffset;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( cent->pose.player.control )
  {
    ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
    if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_players_sp.cpp", 446, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    if ( LocalClientGlobals->localClientNum == cent->nextState.number )
    {
      Handler = CgHandler::getHandler(localClientNum);
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v26, &LocalClientGlobals->predictedPlayerState, Handler);
      viewHeightCurrent_low = LODWORD(LocalClientGlobals->predictedPlayerState.viewHeightCurrent);
      *(float *)&viewHeightCurrent_low = LocalClientGlobals->predictedPlayerState.viewHeightCurrent * 0.5;
      _XMM1 = viewHeightCurrent_low;
      __asm { vmaxss  xmm1, xmm1, cs:__real@41400000; height }
      WorldUpReferenceFrame::AddUpContribution(&v26, *(float *)&_XMM1, &outOrigin);
    }
    else
    {
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 4u) )
      {
        v12 = outOrigin.v[2] + 12.0;
      }
      else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 3u) )
      {
        v12 = outOrigin.v[2] + 20.0;
      }
      else
      {
        v12 = outOrigin.v[2] + 32.0;
      }
      outOrigin.v[2] = v12;
    }
    if ( isFirstPerson )
    {
      drawLegs = CG_PlayersSP_ShouldDrawPlayerLegs(localClientNum);
      drawShadow = CG_PlayersSP_ShouldDrawPlayerShadow(localClientNum);
      CG_Players_CalcFirstPersonModelPlacement(localClientNum, &LocalClientGlobals->predictedPlayerState, cent);
      CG_Players_AddFirstPersonBodyModelsToScene(localClientNum, cent, ClientDObj, 0x1400u, &outOrigin, 0, drawLegs, drawShadow);
    }
    else
    {
      if ( (*(_DWORD *)&LocalClientGlobals->predictedPlayerState.outlineData.viewmodel & 0x3F) != 0 )
      {
        v15 = LocalClientGlobals->time - LocalClientGlobals->predictedPlayerState.deltaTime;
        HudOutlineDef = BG_GetHudOutlineDef(*(_DWORD *)&LocalClientGlobals->predictedPlayerState.outlineData.viewmodel & 0x3F);
        outlinedEntityOrigin.v[0] = 0.0;
        outlinedEntityOrigin.v[1] = 0.0;
        outlinedEntityOrigin.v[2] = 0.0;
        playerViewOrigin.v[0] = 0.0;
        playerViewOrigin.v[1] = 0.0;
        playerViewOrigin.v[2] = 0.0;
        v21.color = BG_HudOutline_GetColor(HudOutlineDef, LocalClientGlobals->hudOutlineStartTime, v15, &playerViewOrigin, &outlinedEntityOrigin);
        v21.drawOccludedPixels = HudOutlineDef->drawOccludedPixels;
        v21.drawNonOccludedPixels = HudOutlineDef->drawNonOccludedPixels;
        outlineWidth = HudOutlineDef->outlineWidth;
        if ( (outlineWidth < 0 || (unsigned int)outlineWidth > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)outlineWidth, "signed", outlineWidth) )
          __debugbreak();
        v21.lineWidth = outlineWidth;
        v21.renderMode = HudOutlineDef->outlineType;
        v21.fill = HudOutlineDef->drawFill;
        v18 = *(__m256i *)&v21.color;
      }
      else
      {
        cent->currentHudOutlineIndex = 0;
        v18 = *(__m256i *)&v22.scrollRateX;
      }
      *(__m256i *)&v21.color = v18;
      v21.characterEVOffset = characterEVOffset;
      memset(&v22, 0, sizeof(v22));
      CG_Entity_AddDObjToScene(localClientNum, ClientDObj, &cent->pose, cent->nextState.clientNum, 0x1400u, &v22, &v21, &outOrigin, 0.0, 0);
    }
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_PlayersSP_AddShadowWeaponModel
==============
*/
void CG_PlayersSP_AddShadowWeaponModel(const Weapon *weapon, PlayerHandIndex hand, bool isDualWield, scr_string_t attachBoneName, const unsigned int maxDObjModels, DObjModel *inoutDObjModels, unsigned __int16 *inoutModelIndex)
{
  const WeaponDef *v11; 
  const XModel *v12; 
  DObjModel *outDObjModel; 
  __int64 v14; 

  if ( !weapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_players_sp.cpp", 75, ASSERT_TYPE_ASSERT, "(weapon != 0)", (const char *)&queryFormat, "weapon != NULL") )
    __debugbreak();
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(outDObjModel) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_players_sp.cpp", 76, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", outDObjModel, 2) )
      __debugbreak();
  }
  if ( weapon->weaponIdx )
  {
    v11 = BG_WeaponDef(weapon, 0);
    v12 = isDualWield ? BG_Weapons_SelectModel(hand, v11->playerShadowModel, v11->playerShadowModelLeftHand, v11->playerShadowModelRightHand) : v11->playerShadowModel;
    if ( v12 )
    {
      if ( *inoutModelIndex >= maxDObjModels )
      {
        LODWORD(v14) = maxDObjModels;
        LODWORD(outDObjModel) = *inoutModelIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_players_sp.cpp", 96, ASSERT_TYPE_ASSERT, "(unsigned)( *inoutModelIndex ) < (unsigned)( maxDObjModels )", "*inoutModelIndex doesn't index maxDObjModels\n\t%i not in [0, %i)", outDObjModel, v14) )
          __debugbreak();
      }
      DObjInitModel(v12, attachBoneName, 1, 0, NULL, &inoutDObjModels[*inoutModelIndex]);
      ++*inoutModelIndex;
    }
  }
}

/*
==============
CG_PlayersSP_AddWeaponsToPlayerShadowDObj
==============
*/
void CG_PlayersSP_AddWeaponsToPlayerShadowDObj(LocalClientNum_t localClientNum, const centity_t *cent)
{
  LocalClientNum_t v3; 
  CgGlobalsSP *LocalClientGlobals; 
  cg_t *v5; 
  int number; 
  characterInfo_t *CharacterInfo; 
  DObj *ClientDObj; 
  PlayerHandIndex v9; 
  int v10; 
  unsigned __int16 v11; 
  int v12; 
  unsigned int v13; 
  scr_string_t tag_weapon_right; 
  scr_string_t tag_accessory_left; 
  int dualWielding; 
  const WeaponDef *v17; 
  const XModel *v18; 
  unsigned __int16 v19; 
  const dvar_t *v20; 
  const XModel *model; 
  bool v22; 
  const char *WeaponName; 
  const WeaponDef *v24; 
  XModel *v25; 
  const centity_t *v26; 
  DObjModel *outDObjModel; 
  unsigned __int16 *inoutModelIndex; 
  unsigned __int16 numModels[2]; 
  LocalClientNum_t v30; 
  playerState_s *p_predictedPlayerState; 
  const centity_t *v32; 
  XAnimIKTagRequest result; 
  XAnimIKTagRequest tagRequest; 
  XAnimWeaponIKModelsContainer weaponModels; 
  CharacterModelType outModelTypes[32]; 
  DObjModel inoutDObjModels[32]; 
  char output[1024]; 

  v32 = cent;
  v3 = localClientNum;
  v30 = localClientNum;
  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals(localClientNum);
  v5 = CG_GetLocalClientGlobals(v3);
  number = cent->nextState.number;
  p_predictedPlayerState = &v5->predictedPlayerState;
  CharacterInfo = CgGlobalsSP::GetCharacterInfo(LocalClientGlobals, number);
  memset_0(outModelTypes, 0, sizeof(outModelTypes));
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_players_sp.cpp", 135, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !CharacterInfo->pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_players_sp.cpp", 136, ASSERT_TYPE_ASSERT, "(ci->pXAnimTree)", (const char *)&queryFormat, "ci->pXAnimTree") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(cent->nextState.number, v3);
  if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_players_sp.cpp", 139, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  v9 = WEAPON_HAND_DEFAULT;
  numModels[0] = 0;
  if ( !ClientDObj->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_players_sp.cpp", 143, ASSERT_TYPE_ASSERT, "(dobj->numModels > 0)", (const char *)&queryFormat, "dobj->numModels > 0") )
    __debugbreak();
  DObjInitModel(*ClientDObj->models, (scr_string_t)0, 1, 0, NULL, inoutDObjModels);
  v10 = -1;
  v11 = ++numModels[0];
  if ( !CharacterInfo->hideWeapon && CharacterInfo->dobjHeldWeapon.weaponIdx )
  {
    if ( v11 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_players_sp.cpp", 153, ASSERT_TYPE_ASSERT, "(numModels == 1)", (const char *)&queryFormat, "numModels == 1") )
      __debugbreak();
    if ( !CharacterInfo->dualWielding || (v12 = 1, CharacterInfo->dobjThrownWeapon.weaponIdx) )
      v12 = 0;
    v13 = numModels[0];
    do
    {
      tag_weapon_right = scr_const.tag_weapon_right;
      if ( v9 == WEAPON_HAND_LEFT )
        tag_weapon_right = scr_const.tag_weapon_left;
      CG_PlayersSP_AddShadowWeaponModel(&CharacterInfo->dobjHeldWeapon, v9++, CharacterInfo->dualWielding != 0, tag_weapon_right, 0x20u, inoutDObjModels, numModels);
    }
    while ( v9 <= v12 );
    if ( v13 < numModels[0] )
      v10 = v13;
    v3 = v30;
  }
  if ( CharacterInfo->dobjThrownWeapon.weaponIdx )
  {
    tag_accessory_left = scr_const.tag_accessory_left;
    dualWielding = CharacterInfo->dualWielding;
    if ( CharacterInfo == (characterInfo_t *)-1644i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_players_sp.cpp", 75, ASSERT_TYPE_ASSERT, "(weapon != 0)", (const char *)&queryFormat, "weapon != NULL") )
      __debugbreak();
    if ( CharacterInfo->dobjThrownWeapon.weaponIdx )
    {
      v17 = BG_WeaponDef(&CharacterInfo->dobjThrownWeapon, 0);
      v18 = dualWielding ? BG_Weapons_SelectModel(WEAPON_HAND_DEFAULT, v17->playerShadowModel, v17->playerShadowModelLeftHand, v17->playerShadowModelRightHand) : v17->playerShadowModel;
      if ( v18 )
      {
        v19 = numModels[0];
        if ( numModels[0] >= 0x20u )
        {
          LODWORD(inoutModelIndex) = 32;
          LODWORD(outDObjModel) = numModels[0];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_players_sp.cpp", 96, ASSERT_TYPE_ASSERT, "(unsigned)( *inoutModelIndex ) < (unsigned)( maxDObjModels )", "*inoutModelIndex doesn't index maxDObjModels\n\t%i not in [0, %i)", outDObjModel, inoutModelIndex) )
            __debugbreak();
          v19 = numModels[0];
        }
        DObjInitModel(v18, tag_accessory_left, 1, 0, NULL, &inoutDObjModels[v19]);
        ++numModels[0];
      }
    }
  }
  if ( v10 >= 0 )
  {
    v20 = DCONST_DVARBOOL_cg_viewmodelRoboticIK;
    model = inoutDObjModels[v10].model;
    if ( !DCONST_DVARBOOL_cg_viewmodelRoboticIK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewmodelRoboticIK") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v22 = v20->current.enabled && BG_Suit_IsRoboticIKEnabled(p_predictedPlayerState->suitIndex);
    XAnimWeaponIKModelsContainer::XAnimWeaponIKModelsContainer(&weaponModels);
    if ( !XAnimWeaponIKModelsContainer::AddXModel(&weaponModels, WEAPON_HAND_DEFAULT, model) )
    {
      WeaponName = BG_GetWeaponName(&CharacterInfo->dobjHeldWeapon, output, 0x400u);
      LODWORD(inoutModelIndex) = 12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_players_sp.cpp", 203, ASSERT_TYPE_ASSERT, "(modelAdded)", "%s\n\tFailed to add IK target in xmodel because we reached the maximum number of %d for weapon %s", "modelAdded", inoutModelIndex, WeaponName) )
        __debugbreak();
    }
    tagRequest = *XAnimIKSetupTagRequest(&result, &CharacterInfo->dobjHeldWeapon, CharacterInfo->isUsingWeaponAltMode == 1, v22, 0, CharacterInfo->dualWielding == 1);
    XAnimIKAttachTargetToWeapon(XANIM_IK_ACTOR_RIGHT_HAND, cg_tagIKTargetModelRight, &weaponModels, &tagRequest, inoutDObjModels, numModels, (CharacterModelType (*)[32])outModelTypes);
    if ( CharacterInfo->dualWielding )
    {
      tagRequest.requiresAkimboIK = 1;
      v24 = BG_WeaponDef(&CharacterInfo->dobjHeldWeapon, 0);
      v25 = BG_Weapons_SelectModel(WEAPON_HAND_LEFT, v24->playerShadowModel, v24->playerShadowModelLeftHand, v24->playerShadowModelRightHand);
      if ( v25 )
      {
        if ( v25 != model )
          model = v25;
      }
    }
    XAnimWeaponIKModelsContainer::ReplaceXModel(&weaponModels, 0, WEAPON_HAND_LEFT, model);
    XAnimIKAttachTargetToWeapon(XANIM_IK_ACTOR_LEFT_HAND, cg_tagIKTargetModelLeft, &weaponModels, &tagRequest, inoutDObjModels, numModels, (CharacterModelType (*)[32])outModelTypes);
  }
  if ( numModels[0] != 1 || ClientDObj->numModels != 1 || ClientDObj->tree != CharacterInfo->pXAnimTree )
  {
    v26 = v32;
    Com_SafeClientDObjFree(v32->nextState.number, v3);
    Com_ClientDObjCreate(inoutDObjModels, numModels[0], CharacterInfo->pXAnimTree, v26->nextState.number, v3, v10 >= 0, v26->nextState.number);
  }
}

/*
==============
CG_PlayersSP_ClearPlayersFromScene
==============
*/
void CG_PlayersSP_ClearPlayersFromScene(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgEntitySystem **v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 

  v1 = localClientNum;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    v2 = &CgEntitySystem::ms_entitySystemArray[v1];
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      v5 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v5) )
        __debugbreak();
    }
    if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v4) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v3) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    if ( !*v2 )
    {
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v4) )
        __debugbreak();
    }
    if ( ((*v2)->m_entities[0].flags & 1) != 0 )
      R_ClearDObjInScene((*v2)->m_entities[0].nextState.number);
    R_ClearDObjInScene(0x842u);
    R_ClearDObjInScene(0x843u);
  }
}

/*
==============
CG_PlayersSP_PrePlayer
==============
*/
void CG_PlayersSP_PrePlayer(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int128 v2; 
  cg_t *LocalClientGlobalsForEnt; 
  const DObj *ClientDObj; 
  int number; 
  CgStatic *LocalClientStatics; 
  const Weapon *p_weapon; 
  characterInfo_t *CharacterInfo; 
  bool hideWeapon; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  unsigned int Animset; 
  XAnimOwner v18; 
  double v19; 
  double v20; 
  const PlayerEquippedWeaponState *EquippedWeaponStateConst; 
  BOOL v22; 
  int enableVehicleOccupancyAnimations; 
  int v24; 
  const Weapon *CurrentWeaponForPlayer; 
  const PlayerEquippedWeaponState *v26; 
  int hybridScope; 
  bool v28; 
  CgWeaponMap *Instance; 
  bool v30; 
  __int16 groundRefEnt; 
  char v32; 
  LocalClientNum_t v33; 
  CgGlobalsSP *v34; 
  CgStatic *v35; 
  characterInfo_t *v36; 
  double v37; 
  double v38; 
  bool v39; 
  int offhandShieldDeployed; 
  int dualWielding; 
  CgGlobalsSP *LocalClientGlobals; 
  CgWeaponMap *weaponMap; 
  CgHandler *handler; 
  vec3_t outAngles; 
  vec3_t movingPlatformOrigin; 
  vec3_t outOrigin; 
  __int128 v49; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_players_sp.cpp", 266, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( CG_Entity_IsNoDraw(localClientNum, &cent->nextState, NULL) || (LocalClientGlobalsForEnt = CG_GetLocalClientGlobalsForEnt(cent->nextState.number), (ClientDObj = Com_GetClientDObj(cent->nextState.number, LocalClientGlobalsForEnt->localClientNum)) == NULL) )
  {
    cent->pose.player.control = NULL;
  }
  else
  {
    number = cent->nextState.number;
    if ( LocalClientGlobalsForEnt == (cg_t *)-8i64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_local.h", 128, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2296, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
    }
    if ( GameModeFlagValues::ms_mpValue != ACTIVE || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobalsForEnt->predictedPlayerState.otherFlags, ACTIVE, 0x22u) )
      goto LABEL_22;
    if ( LocalClientGlobalsForEnt == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2308, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobalsForEnt->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x29u) )
      goto LABEL_22;
    if ( LocalClientGlobalsForEnt == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobalsForEnt->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
    {
LABEL_22:
      if ( number == LocalClientGlobalsForEnt->predictedPlayerState.clientNum )
      {
        v49 = v2;
        LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
        LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals(localClientNum);
        p_weapon = &LocalClientGlobals->playerWeaponInfo.weapon;
        weaponMap = CgWeaponMap::GetInstance(localClientNum);
        handler = CgHandler::getHandler(localClientNum);
        CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.number);
        offhandShieldDeployed = CharacterInfo->offhandShieldDeployed;
        dualWielding = CharacterInfo->dualWielding;
        hideWeapon = CharacterInfo->hideWeapon;
        CharacterInfo->playerAngles = LocalClientGlobalsForEnt->predictedPlayerState.viewangles;
        v39 = hideWeapon;
        v12 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.movementDir);
        CharacterInfo->lerpMoveDir = *(float *)&v12;
        BG_SlopeWorldmodel_Unpack(&cent->nextState.lerp.u.player.slopePacked, &CharacterInfo->groundNormalInterpolated);
        CharacterInfo->leftStickInputInterpolated = BG_PackedPolarCoordsToCartesian(cent->nextState.lerp.u.player.leftStickPolarPacked);
        CharacterInfo->rightStickInputInterpolated = BG_PackedPolarCoordsToCartesian(cent->nextState.lerp.u.player.rightStickPolarPacked);
        v13 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[0], 1.0, 0x10u);
        CharacterInfo->skydivePitchInterpolated = *(float *)&v13;
        v14 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[1], 1.0, 0x10u);
        CharacterInfo->skydiveRollInterpolated = *(float *)&v14;
        v15 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[2], 1.0, 0x10u);
        CharacterInfo->skydiveThrottleInterpolated = *(float *)&v15;
        if ( PlayerASM_IsEnabled() )
        {
          v16 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.velocityDir);
          BG_PlayerASM_UpdateAngles(*(const float *)&v16, CharacterInfo);
        }
        CG_Players_CopyAnimStateFromEntity(CharacterInfo, &cent->nextState);
        if ( PlayerASM_IsEnabled() )
        {
          Animset = BG_PlayerASM_GetAnimset(CharacterInfo);
          LOBYTE(v18) = 1;
          if ( BG_PlayersASM_ResetAnimTree(Animset, CG_MainSP_AllocXAnimClient, v18, CharacterInfo) )
            CharacterInfo->dobjDirty = 1;
        }
        v19 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.torsoPitchPacked);
        CharacterInfo->fTorsoPitch = *(float *)&v19;
        v20 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.waistPitchPacked);
        CharacterInfo->offhandShieldDeployed = 0;
        CharacterInfo->fWaistPitch = *(float *)&v20;
        if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1135, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( LocalClientGlobalsForEnt == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1136, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v22 = !BG_Skydive_IsSkydiving(&LocalClientGlobalsForEnt->predictedPlayerState) && BG_Ladder_IsDualWieldingAllowed(&LocalClientGlobalsForEnt->predictedPlayerState) && (EquippedWeaponStateConst = BG_GetEquippedWeaponStateConst(weaponMap, &LocalClientGlobalsForEnt->predictedPlayerState, p_weapon)) != NULL && EquippedWeaponStateConst->dualWielding;
        enableVehicleOccupancyAnimations = CharacterInfo->enableVehicleOccupancyAnimations;
        CharacterInfo->dualWielding = v22;
        CharacterInfo->hideWeapon = LocalClientGlobals->playerWeaponInfo.isWeaponHidden;
        *(_QWORD *)&CharacterInfo->isOnWall = 0i64;
        CharacterInfo->animLinkedToType = ANIM_LINKEDTO_NONE;
        v24 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobalsForEnt->predictedPlayerState.otherFlags, ACTIVE, 0x1Bu);
        CharacterInfo->enableVehicleOccupancyAnimations = v24;
        if ( enableVehicleOccupancyAnimations != v24 )
          CharacterInfo->dobjDirty = 1;
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, &LocalClientGlobalsForEnt->predictedPlayerState);
        v26 = BG_GetEquippedWeaponStateConst(weaponMap, &LocalClientGlobalsForEnt->predictedPlayerState, CurrentWeaponForPlayer);
        if ( v26 )
          hybridScope = v26->hybridScope;
        else
          hybridScope = 0;
        CharacterInfo->hybridScopeState = hybridScope;
        if ( LocalClientGlobalsForEnt == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2222, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        CharacterInfo->usingNVG = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobalsForEnt->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 7u);
        v28 = memcmp_0(&CharacterInfo->dobjHeldWeapon, p_weapon, 0x3Cui64) || memcmp_0(&CharacterInfo->dobjThrownWeapon, &LocalClientGlobals->gestureWeapInfo, 0x3Cui64) || CharacterInfo->offhandShieldDeployed != offhandShieldDeployed || CharacterInfo->dualWielding != dualWielding || CharacterInfo->hideWeapon != v39;
        if ( CharacterInfo->dobjDirty || v28 )
        {
          *(__m256i *)&CharacterInfo->dobjHeldWeapon.weaponIdx = *(__m256i *)&p_weapon->weaponIdx;
          *(_OWORD *)&CharacterInfo->dobjHeldWeapon.attachmentVariationIndices[5] = *(_OWORD *)&LocalClientGlobals->playerWeaponInfo.weapon.attachmentVariationIndices[5];
          *(double *)&CharacterInfo->dobjHeldWeapon.attachmentVariationIndices[21] = *(double *)&LocalClientGlobals->playerWeaponInfo.weapon.attachmentVariationIndices[21];
          *(_DWORD *)&CharacterInfo->dobjHeldWeapon.weaponCamo = *(_DWORD *)&LocalClientGlobals->playerWeaponInfo.weapon.weaponCamo;
          *(__m256i *)&CharacterInfo->dobjThrownWeapon.weaponIdx = *(__m256i *)&LocalClientGlobals->gestureWeapInfo.offhandGestureWeapon.weaponIdx;
          *(_OWORD *)&CharacterInfo->dobjThrownWeapon.attachmentVariationIndices[5] = *(_OWORD *)&LocalClientGlobals->gestureWeapInfo.offhandGestureWeapon.attachmentVariationIndices[5];
          *(double *)&CharacterInfo->dobjThrownWeapon.attachmentVariationIndices[21] = *(double *)&LocalClientGlobals->gestureWeapInfo.offhandGestureWeapon.attachmentVariationIndices[21];
          *(_DWORD *)&CharacterInfo->dobjThrownWeapon.weaponCamo = *(_DWORD *)&LocalClientGlobals->gestureWeapInfo.offhandGestureWeapon.weaponCamo;
          CharacterInfo->dobjDirty = 0;
          CG_PlayersSP_AddWeaponsToPlayerShadowDObj(LocalClientGlobalsForEnt->localClientNum, cent);
        }
        BG_ContextMount_GetWorldmodelProperties(handler, &LocalClientGlobalsForEnt->predictedPlayerState, &CharacterInfo->mount);
        CG_Players_UpdatePlayerLegsDObj(LocalClientGlobalsForEnt->localClientNum, cent);
        if ( PlayerASM_IsEnabled() )
        {
          if ( !CG_PredictPlayerASMState(localClientNum, cent) )
            CharacterInfo->legsPredictingForThisAnim = 0;
        }
        else
        {
          CG_PredictCharacterState(localClientNum, cent);
        }
        v30 = 0;
        if ( !LocalClientGlobalsForEnt->renderingThirdPerson )
        {
          Instance = CgWeaponMap::GetInstance(localClientNum);
          if ( !BG_IsThirdPersonMode(Instance, &LocalClientGlobalsForEnt->predictedPlayerState) )
            v30 = 1;
        }
        CG_Players_SetUseShadowAnims(CharacterInfo, v30);
        if ( LocalClientGlobalsForEnt == (cg_t *)-8i64 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2605, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
        }
        if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobalsForEnt->predictedPlayerState.pm_flags, ACTIVE, 0x2Au) )
          goto LABEL_78;
        groundRefEnt = LocalClientGlobalsForEnt->predictedPlayerState.groundRefEnt;
        if ( groundRefEnt != 2047 )
        {
          if ( groundRefEnt )
            goto LABEL_78;
        }
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
          __debugbreak();
        if ( BG_IsPlayerZeroGWalking(&LocalClientGlobalsForEnt->predictedPlayerState) )
LABEL_78:
          v32 = 0;
        else
          v32 = 1;
        CharacterInfo->zeroGravity = v32;
        ClientDObj = Com_GetClientDObj(cent->nextState.number, LocalClientGlobalsForEnt->localClientNum);
        if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_players_sp.cpp", 404, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
          __debugbreak();
        if ( CharacterInfo->animTreeDirty )
        {
          XAnimClearTree(ClientDObj);
          CharacterInfo->animTreeDirty = 0;
        }
        CG_GameInterface_PlayersSP_PrePlayer(CharacterInfo);
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        CGMovingPlatformClient::GetMoverInfoFromClientEntity(LocalClientGlobalsForEnt->localClientNum, cent, &movingPlatformOrigin, &outAngles);
        BG_PlayerAnimation(handler, weaponMap, &cent->nextState, CharacterInfo, &outOrigin, &movingPlatformOrigin, &outAngles);
      }
    }
    v33 = LocalClientGlobalsForEnt->localClientNum;
    v34 = CgGlobalsSP::GetLocalClientGlobals(v33);
    v35 = CgStatic::GetLocalClientStatics(v33);
    v36 = CgStatic::GetCharacterInfo(v35, cent->nextState.number);
    CG_Players_CopyAnimStateFromEntity(v36, &cent->nextState);
    v37 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.torsoPitchPacked);
    v36->fTorsoPitch = *(float *)&v37;
    v38 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.waistPitchPacked);
    v36->fWaistPitch = *(float *)&v38;
    BG_Player_DoControllersSetup(&cent->nextState, v36, v34->frametime);
    BG_Player_SetPlayerInfo(ClientDObj, &v36->control, (CEntPlayerInfo *)&cent->pose.160);
  }
}

/*
==============
CG_PlayersSP_ShouldDrawPlayerLegs
==============
*/
bool CG_PlayersSP_ShouldDrawPlayerLegs(LocalClientNum_t localClientNum)
{
  CgGlobalsSP *LocalClientGlobals; 
  bool v3; 
  bool v4; 
  bool v5; 
  bool IsHidingViewmodel; 
  bool v7; 
  const dvar_t *v8; 

  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals(localClientNum);
  v3 = !Mantle_DrawLegsModel(&LocalClientGlobals->predictedPlayerState);
  v4 = !BG_ContextMount_DrawLegsModel(&LocalClientGlobals->predictedPlayerState);
  v5 = !BG_Skydive_DrawLegs(&LocalClientGlobals->predictedPlayerState);
  IsHidingViewmodel = CG_Camera_Transition_IsHidingViewmodel(localClientNum);
  v7 = BG_VehicleOccupancy_HideLegs(&LocalClientGlobals->predictedPlayerState);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x2Bu) || v3 || v4 || IsHidingViewmodel || v5 || v7 )
    IsHidingViewmodel = 1;
  v8 = DCONST_DVARMPSPBOOL_cg_drawPlayerLegs;
  if ( !DCONST_DVARMPSPBOOL_cg_drawPlayerLegs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerLegs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  return v8->current.enabled && !IsHidingViewmodel;
}

/*
==============
CG_PlayersSP_ShouldDrawPlayerShadow
==============
*/
bool CG_PlayersSP_ShouldDrawPlayerShadow(LocalClientNum_t localClientNum)
{
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  bool v2; 
  const dvar_t *v3; 
  bool v4; 

  p_otherFlags = &CgGlobalsSP::GetLocalClientGlobals(localClientNum)->predictedPlayerState.otherFlags;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v2 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Cu);
  v3 = DCONST_DVARMPBOOL_cg_drawPlayerShadow;
  v4 = v2;
  if ( !DCONST_DVARMPBOOL_cg_drawPlayerShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerShadow") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.enabled && !v4;
}

