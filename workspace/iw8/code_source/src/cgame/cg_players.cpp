/*
==============
CG_Players_SetUseShadowAnims
==============
*/

void __fastcall CG_Players_SetUseShadowAnims(characterInfo_t *const ci, bool useShadowAnims)
{
  ?CG_Players_SetUseShadowAnims@@YAXQEAUcharacterInfo_t@@_N@Z(ci, useShadowAnims);
}

/*
==============
CG_Players_ShouldDrawPlayerHelmet
==============
*/

bool __fastcall CG_Players_ShouldDrawPlayerHelmet(LocalClientNum_t localClientNum)
{
  return ?CG_Players_ShouldDrawPlayerHelmet@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Players_ClearPlayerLegsDObj
==============
*/

void __fastcall CG_Players_ClearPlayerLegsDObj(LocalClientNum_t localClientNum, cg_t *const cgameGlob)
{
  ?CG_Players_ClearPlayerLegsDObj@@YAXW4LocalClientNum_t@@QEAVcg_t@@@Z(localClientNum, cgameGlob);
}

/*
==============
CG_Players_AddFirstPersonBodyModelsToScene
==============
*/

void __fastcall CG_Players_AddFirstPersonBodyModelsToScene(LocalClientNum_t localClientNum, centity_t *cent, DObj *playerShadowDObj, unsigned int renderFlags, const vec3_t *lightingOrigin, unsigned int emissiveMaterialData, bool drawLegs, bool drawShadow)
{
  ?CG_Players_AddFirstPersonBodyModelsToScene@@YAXW4LocalClientNum_t@@PEAUcentity_t@@PEAUDObj@@IAEBTvec3_t@@I_N4@Z(localClientNum, cent, playerShadowDObj, renderFlags, lightingOrigin, emissiveMaterialData, drawLegs, drawShadow);
}

/*
==============
CG_Players_GetPlayerGamertagWithHash
==============
*/

void __fastcall CG_Players_GetPlayerGamertagWithHash(const LocalClientNum_t localClientNum, const int clientNum, unsigned __int64 playerNameSize, char *out_playerNameWithHash)
{
  ?CG_Players_GetPlayerGamertagWithHash@@YAXW4LocalClientNum_t@@H_KPEAD@Z(localClientNum, clientNum, playerNameSize, out_playerNameWithHash);
}

/*
==============
CG_Players_UpdatePlayerLegsDObj
==============
*/

void __fastcall CG_Players_UpdatePlayerLegsDObj(LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?CG_Players_UpdatePlayerLegsDObj@@YAXW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_PredictCharacterState
==============
*/

void __fastcall CG_PredictCharacterState(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_PredictCharacterState@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Player_AlignPlayerModelForScriptLink
==============
*/

bool __fastcall CG_Player_AlignPlayerModelForScriptLink(cg_t *cgameGlob, centity_t *cent)
{
  return ?CG_Player_AlignPlayerModelForScriptLink@@YA_NPEAVcg_t@@PEAUcentity_t@@@Z(cgameGlob, cent);
}

/*
==============
CG_Players_CalcFirstPersonModelPlacement
==============
*/

void __fastcall CG_Players_CalcFirstPersonModelPlacement(LocalClientNum_t localClientNum, const playerState_s *ps, centity_t *cent)
{
  ?CG_Players_CalcFirstPersonModelPlacement@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@PEAUcentity_t@@@Z(localClientNum, ps, cent);
}

/*
==============
CG_Players_InterpolateHeightOffset
==============
*/

void __fastcall CG_Players_InterpolateHeightOffset(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_Players_InterpolateHeightOffset@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Players_IsPlayerIconHidden
==============
*/

bool __fastcall CG_Players_IsPlayerIconHidden(const LocalClientNum_t localClientNum, const int clientNum)
{
  return ?CG_Players_IsPlayerIconHidden@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, clientNum);
}

/*
==============
CG_Players_HeadIcons_GetWorldPosition
==============
*/

bool __fastcall CG_Players_HeadIcons_GetWorldPosition(LocalClientNum_t localClientNum, const HeadIconView *headIcon, const HeadIconExtendedView *headIconExtendedView, vec3_t *outWorldPosition)
{
  return ?CG_Players_HeadIcons_GetWorldPosition@@YA_NW4LocalClientNum_t@@PEBUHeadIconView@@PEBUHeadIconExtendedView@@AEATvec3_t@@@Z(localClientNum, headIcon, headIconExtendedView, outWorldPosition);
}

/*
==============
CG_Players_IsPlayerRemoteControlling
==============
*/

bool __fastcall CG_Players_IsPlayerRemoteControlling(const LocalClientNum_t localClientNum)
{
  return ?CG_Players_IsPlayerRemoteControlling@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PredictPlayerASMState
==============
*/

bool __fastcall CG_PredictPlayerASMState(LocalClientNum_t localClientNum, centity_t *cent)
{
  return ?CG_PredictPlayerASMState@@YA_NW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Players_HandleVehicleOccupancyLink
==============
*/

bool __fastcall CG_Players_HandleVehicleOccupancyLink(cg_t *cgameGlob, centity_t *cent)
{
  return ?CG_Players_HandleVehicleOccupancyLink@@YA_NPEAVcg_t@@PEAUcentity_t@@@Z(cgameGlob, cent);
}

/*
==============
CG_Players_GetPlayerGamertag
==============
*/

void __fastcall CG_Players_GetPlayerGamertag(const LocalClientNum_t localClientNum, const int clientNum, unsigned __int64 playerNameSize, char *out_playerName)
{
  ?CG_Players_GetPlayerGamertag@@YAXW4LocalClientNum_t@@H_KPEAD@Z(localClientNum, clientNum, playerNameSize, out_playerName);
}

/*
==============
CG_Players_CopyAnimStateFromEntity
==============
*/

void __fastcall CG_Players_CopyAnimStateFromEntity(characterInfo_t *ci, const entityState_t *es)
{
  ?CG_Players_CopyAnimStateFromEntity@@YAXPEAUcharacterInfo_t@@PEBUentityState_t@@@Z(ci, es);
}

/*
==============
CG_Players_GetPlayerName
==============
*/

void __fastcall CG_Players_GetPlayerName(const LocalClientNum_t localClientNum, const int clientNum, unsigned __int64 playerNameSize, char *out_playerName, const bool includeClanTag)
{
  ?CG_Players_GetPlayerName@@YAXW4LocalClientNum_t@@H_KPEAD_N@Z(localClientNum, clientNum, playerNameSize, out_playerName, includeClanTag);
}

/*
==============
CG_Players_IsPlayerInGulag
==============
*/

bool __fastcall CG_Players_IsPlayerInGulag(const LocalClientNum_t localClientNum, const int clientNum)
{
  return ?CG_Players_IsPlayerInGulag@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, clientNum);
}

/*
==============
CG_GetPerks
==============
*/

bool __fastcall CG_GetPerks(LocalClientNum_t localClientNum, int entNum, bitarray<64> *outPerks)
{
  return ?CG_GetPerks@@YA_NW4LocalClientNum_t@@HPEAV?$bitarray@$0EA@@@@Z(localClientNum, entNum, outPerks);
}

/*
==============
CG_Players_ShouldHidePlayerFromLocalPlayer
==============
*/

bool __fastcall CG_Players_ShouldHidePlayerFromLocalPlayer(const LocalClientNum_t localClientNum, const int otherPlayerEntNum)
{
  return ?CG_Players_ShouldHidePlayerFromLocalPlayer@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, otherPlayerEntNum);
}

/*
==============
CG_Players_GetPlayerNameWithHash
==============
*/

void __fastcall CG_Players_GetPlayerNameWithHash(const LocalClientNum_t localClientNum, const int clientNum, unsigned __int64 playerNameSize, char *out_playerNameWithHash, const bool includeClanTag)
{
  ?CG_Players_GetPlayerNameWithHash@@YAXW4LocalClientNum_t@@H_KPEAD_N@Z(localClientNum, clientNum, playerNameSize, out_playerNameWithHash, includeClanTag);
}

/*
==============
CG_SetupPrePredictBounds
==============
*/

void __fastcall CG_SetupPrePredictBounds(const cg_t *cgameGlob, Bounds *outBounds)
{
  ?CG_SetupPrePredictBounds@@YAXPEBVcg_t@@PEAUBounds@@@Z(cgameGlob, outBounds);
}

/*
==============
CG_GetPerks
==============
*/
char CG_GetPerks(LocalClientNum_t localClientNum, int entNum, bitarray<64> *outPerks)
{
  __int64 v3; 
  CgStatic *LocalClientStatics; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  char result; 
  __int64 v10; 

  v3 = entNum;
  if ( !outPerks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 950, ASSERT_TYPE_ASSERT, "(outPerks)", (const char *)&queryFormat, "outPerks") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (int)v3 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
    goto LABEL_23;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 960, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
  {
    if ( (unsigned int)v3 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      LODWORD(v10) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v10, LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
        __debugbreak();
    }
    CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v3);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v3);
  }
  if ( CharacterInfo && CharacterInfo->infoValid )
  {
    outPerks->array[0] = CharacterInfo->perks.array[0];
    outPerks->array[1] = CharacterInfo->perks.array[1];
    return 1;
  }
  else
  {
LABEL_23:
    result = 0;
    *outPerks = 0i64;
  }
  return result;
}

/*
==============
CG_Player_AlignPlayerModelForScriptLink
==============
*/
char CG_Player_AlignPlayerModelForScriptLink(cg_t *cgameGlob, centity_t *cent)
{
  entityState_t *p_nextState; 
  entityType_s eType; 
  LocalClientNum_t localClientNum; 
  characterInfo_t *CharacterInfo; 
  centity_t *LinkToParent; 
  int number; 
  int clientNum; 
  __int16 linkEnt; 
  clientLinkInfo_t *p_clientLinkInfo; 
  const DObj *ClientDObj; 
  int WorldTagMatrix; 
  vec3_t *p_angles; 
  float v16; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  vec3_t inOrigin; 
  __int64 v28; 
  tmat43_t<vec3_t> outTagMat; 

  v28 = -2i64;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 486, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 487, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_nextState = &cent->nextState;
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 488, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &cent->nextState )") )
    __debugbreak();
  localClientNum = cgameGlob->localClientNum;
  CharacterInfo = CG_GetCharacterInfo(cgameGlob, cent->nextState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 493, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  LinkToParent = CG_Entity_GetLinkToParent(localClientNum, cent);
  number = p_nextState->number;
  clientNum = cgameGlob->predictedPlayerState.clientNum;
  if ( clientNum == number )
  {
    linkEnt = cgameGlob->predictedPlayerState.linkEnt;
    if ( linkEnt != 2047 )
      LinkToParent = CG_GetEntity(localClientNum, linkEnt);
  }
  if ( LinkToParent && (LinkToParent->flags & 1) == 0 )
    LinkToParent = NULL;
  if ( !CharacterInfo->isScriptedSceneAnim || !LinkToParent )
    return 0;
  p_clientLinkInfo = &cent->nextState.clientLinkInfo;
  if ( clientNum == number )
  {
    ClientDObj = Com_GetClientDObj(LinkToParent->nextState.number, localClientNum);
    if ( ClientDObj )
    {
      WorldTagMatrix = CG_DObjGetWorldTagMatrix(&LinkToParent->pose, ClientDObj, scr_const.tag_player, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]);
      goto LABEL_30;
    }
LABEL_32:
    CG_GetPoseOrigin(&LinkToParent->pose, &inOrigin);
    CG_SetPoseOrigin(&cent->pose, &inOrigin);
    p_angles = &cent->pose.angles;
    cent->pose.angles.v[0] = LinkToParent->pose.angles.v[0];
    cent->pose.angles.v[1] = LinkToParent->pose.angles.v[1];
    cent->pose.angles.v[2] = LinkToParent->pose.angles.v[2];
    memset(&inOrigin, 0, sizeof(inOrigin));
    goto LABEL_33;
  }
  if ( (*(_DWORD *)p_clientLinkInfo & 0x100000) != 0 )
    goto LABEL_32;
  WorldTagMatrix = CG_Entity_GetParentAxis(localClientNum, p_nextState->number, p_clientLinkInfo, LinkToParent, &outTagMat);
LABEL_30:
  if ( !WorldTagMatrix )
    goto LABEL_32;
  CG_SetPoseOrigin(&cent->pose, &outTagMat.m[3]);
  p_angles = &cent->pose.angles;
  AxisToAngles((const tmat33_t<vec3_t> *)&outTagMat, &cent->pose.angles);
LABEL_33:
  v16 = p_angles->v[0];
  CharacterInfo->playerAngles.v[0] = p_angles->v[0];
  CharacterInfo->playerAngles.v[1] = p_angles->v[1];
  CharacterInfo->playerAngles.v[2] = p_angles->v[2];
  _XMM8 = 0i64;
  __asm { vroundss xmm2, xmm8, xmm1, 1 }
  CharacterInfo->playerAngles.v[0] = (float)((float)(v16 * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  __asm { vroundss xmm3, xmm8, xmm2, 1 }
  CharacterInfo->playerAngles.v[1] = (float)((float)(CharacterInfo->playerAngles.v[1] * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm2, xmm8, xmm1, 1 }
  CharacterInfo->playerAngles.v[2] = (float)((float)(CharacterInfo->playerAngles.v[2] * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  v21 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.movementDir);
  CharacterInfo->lerpMoveDir = *(float *)&v21;
  CharacterInfo->leftStickInputInterpolated = BG_PackedPolarCoordsToCartesian(cent->nextState.lerp.u.player.leftStickPolarPacked);
  CharacterInfo->rightStickInputInterpolated = BG_PackedPolarCoordsToCartesian(cent->nextState.lerp.u.player.rightStickPolarPacked);
  v22 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[0], 1.0, 0x10u);
  CharacterInfo->skydivePitchInterpolated = *(float *)&v22;
  v23 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[1], 1.0, 0x10u);
  CharacterInfo->skydiveRollInterpolated = *(float *)&v23;
  v24 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[2], 1.0, 0x10u);
  CharacterInfo->skydiveThrottleInterpolated = *(float *)&v24;
  BG_SlopeWorldmodel_Unpack(&cent->nextState.lerp.u.player.slopePacked, &CharacterInfo->groundNormalInterpolated);
  if ( PlayerASM_IsEnabled() )
  {
    v25 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.velocityDir);
    BG_PlayerASM_UpdateAngles(*(const float *)&v25, CharacterInfo);
  }
  return 1;
}

/*
==============
CG_Players_AddFirstPersonBodyModelsToScene
==============
*/
void CG_Players_AddFirstPersonBodyModelsToScene(LocalClientNum_t localClientNum, centity_t *cent, DObj *playerShadowDObj, unsigned int renderFlags, const vec3_t *lightingOrigin, unsigned int emissiveMaterialData, bool drawLegs, bool drawShadow)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v12; 
  const DObj *ClientDObj; 
  DObj *v14; 
  unsigned int v15; 
  DObj *v16; 
  double Radius; 
  unsigned int v18; 
  double v19; 
  const dvar_t *v20; 
  float v21; 
  float *v22; 
  float *v23; 
  CgStatic *LocalClientStatics; 
  const XAnimTree *Tree; 
  cg_t *v26; 
  cpose_t *p_firstPersonLegsPose; 
  __int128 v28; 
  double v29; 
  cpose_t *v30; 
  centity_t *v31; 
  __int64 v32; 
  void (__fastcall *v33)(const vec4_t *, vec3_t *); 
  cpose_t *ViewModelPoseForHand; 
  int v35; 
  const HudOutlineDef *HudOutlineDef; 
  int outlineWidth; 
  const dvar_t *v38; 
  float frameInterpolation; 
  float *p_commandTime; 
  float *v41; 
  unsigned int v42; 
  const dvar_t *v43; 
  vec3_t outOrigin; 
  unsigned int v45; 
  float characterEVOffset; 
  GfxSceneHudOutlineInfo v47; 
  DObj *obj; 
  const vec3_t *v49; 
  void (__fastcall *functionPointer)(const vec3_t *, vec4_t *); 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  void (__fastcall *Origin)(const vec3_t *, vec4_t *); 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 
  vec3_t v54; 
  shaderOverride_t v55; 
  __int64 v56; 
  vec3_t inOrigin; 
  vec3_t playerViewOrigin; 

  v56 = -2i64;
  v45 = renderFlags;
  obj = playerShadowDObj;
  v49 = lightingOrigin;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  *(__m256i *)&v55.scrollRateX = *(__m256i *)&NULL_HUDOUTLINE_INFO_5.color;
  *(__m256i *)&v47.color = *(__m256i *)&NULL_HUDOUTLINE_INFO_5.color;
  characterEVOffset = NULL_HUDOUTLINE_INFO_5.characterEVOffset;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 684, ASSERT_TYPE_ASSERT, "(cent != 0)", (const char *)&queryFormat, "cent != NULL") )
    __debugbreak();
  if ( !playerShadowDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 685, ASSERT_TYPE_ASSERT, "(playerShadowDObj != 0)", (const char *)&queryFormat, "playerShadowDObj != NULL") )
    __debugbreak();
  if ( drawLegs || drawShadow )
  {
    v12 = DCONST_DVARMPSPBOOL_cg_drawPlayerAlways;
    if ( !DCONST_DVARMPSPBOOL_cg_drawPlayerAlways && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerAlways") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled || (unsigned int)(LocalClientGlobals->predictedPlayerState.pm_type - 2) > 1 )
    {
      cent->pose.player.control->tag_origin_offset.v[2] = 0.0;
      ClientDObj = Com_GetClientDObj(2114, localClientNum);
      v14 = (DObj *)ClientDObj;
      *(_QWORD *)outOrigin.v = ClientDObj;
      if ( ClientDObj && drawLegs )
      {
        if ( DObjVerifyNumBones(ClientDObj) )
        {
          LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
          if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 725, ASSERT_TYPE_ASSERT, "(cgameStatic != 0)", (const char *)&queryFormat, "cgameStatic != NULL") )
            __debugbreak();
          *(_QWORD *)playerViewOrigin.v = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.clientNum);
          if ( !*(_QWORD *)playerViewOrigin.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 727, ASSERT_TYPE_ASSERT, "(ci != 0)", (const char *)&queryFormat, "ci != NULL") )
            __debugbreak();
          Tree = DObjGetTree(obj);
          DObjCloneAnimTree(v14, Tree);
          DObjClearSkel(v14);
          v26 = CG_GetLocalClientGlobals(localClientNum);
          p_firstPersonLegsPose = &v26->firstPersonLegsPose;
          v28 = *(_OWORD *)&v26->firstPersonLegsPose.skinCacheEntry.frameCount;
          v29 = *(double *)&v26->firstPersonLegsPose.skinCacheEntry.subdivCacheOffset;
          CG_GetPoseOrigin(&v26->firstPersonLegsPose, &v54);
          functionPointer = ObfuscateSetFunctionPointer_origin(p_firstPersonLegsPose->origin.Set_origin, p_firstPersonLegsPose);
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_firstPersonLegsPose->origin.Get_origin, p_firstPersonLegsPose);
          Origin = ObfuscateSetFunctionPointer_prevOrigin(p_firstPersonLegsPose->prevOrigin.Set_prevOrigin, p_firstPersonLegsPose);
          FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(p_firstPersonLegsPose->prevOrigin.Get_prevOrigin, p_firstPersonLegsPose);
          v30 = p_firstPersonLegsPose;
          v31 = cent;
          v32 = 2i64;
          do
          {
            *(_OWORD *)&v30->eType = *(_OWORD *)&v31->pose.eType;
            *(_OWORD *)&v30->ragdollHandle = *(_OWORD *)&v31->pose.ragdollHandle;
            *(_OWORD *)&v30->actualOrigin.y = *(_OWORD *)&v31->pose.actualOrigin.y;
            *(_OWORD *)&v30->origin.Get_origin = *(_OWORD *)&v31->pose.origin.Get_origin;
            *(SecureOrigin::secureUnion *)((char *)&v30->origin.origin + 8) = *(SecureOrigin::secureUnion *)((char *)&v31->pose.origin.origin + 8);
            *(_OWORD *)&v30->angles.z = *(_OWORD *)&v31->pose.angles.z;
            *(_OWORD *)&v30->prevOrigin.Get_prevOrigin = *(_OWORD *)&v31->pose.prevOrigin.Get_prevOrigin;
            v30 = (cpose_t *)((char *)v30 + 128);
            *((_OWORD *)&v30[-1].moverFx + 7) = *(vec4_t *)((char *)&v31->pose.prevOrigin.prevOrigin + 8);
            v31 = (centity_t *)((char *)v31 + 128);
            --v32;
          }
          while ( v32 );
          *(_OWORD *)&v30->eType = *(_OWORD *)&v31->pose.eType;
          *(_OWORD *)&v30->ragdollHandle = *(_OWORD *)&v31->pose.ragdollHandle;
          p_firstPersonLegsPose->origin.Set_origin = NULL;
          p_firstPersonLegsPose->origin.Get_origin = NULL;
          p_firstPersonLegsPose->prevOrigin.Set_prevOrigin = NULL;
          p_firstPersonLegsPose->prevOrigin.Get_prevOrigin = NULL;
          p_firstPersonLegsPose->origin.Set_origin = ObfuscateSetFunctionPointer_origin(functionPointer, p_firstPersonLegsPose);
          p_firstPersonLegsPose->origin.Get_origin = ObfuscateGetFunctionPointer_origin(FunctionPointer_origin, p_firstPersonLegsPose);
          p_firstPersonLegsPose->prevOrigin.Set_prevOrigin = ObfuscateSetFunctionPointer_prevOrigin(Origin, p_firstPersonLegsPose);
          p_firstPersonLegsPose->prevOrigin.Get_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(FunctionPointer_prevOrigin, p_firstPersonLegsPose);
          CG_GetPoseOrigin(&cent->pose, &inOrigin);
          CG_SetPoseOrigin(p_firstPersonLegsPose, &inOrigin);
          if ( !cent->pose.prevOrigin.Get_prevOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 568, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Get_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Get_prevOrigin") )
            __debugbreak();
          v33 = ObfuscateGetFunctionPointer_prevOrigin(cent->pose.prevOrigin.Get_prevOrigin, &cent->pose);
          v33(&cent->pose.prevOrigin.prevOrigin, &inOrigin);
          CG_SetPrevPoseOrigin(p_firstPersonLegsPose, &inOrigin);
          memset(&inOrigin, 0, sizeof(inOrigin));
          CG_GetPoseOrigin(p_firstPersonLegsPose, &inOrigin);
          XAnimBonePhysicsSetDObjMatrix(v14, &inOrigin, &p_firstPersonLegsPose->angles);
          XAnimBonePhysicsUpdateTime(v14, (float)LocalClientGlobals->frametime * 0.001);
          memset(&inOrigin, 0, sizeof(inOrigin));
          BG_Player_SetPlayerInfo(v14, (clientControllers_t *)(*(_QWORD *)playerViewOrigin.v + 2812i64), (CEntPlayerInfo *)&p_firstPersonLegsPose->160);
          CG_SetPrevPoseOrigin(p_firstPersonLegsPose, &v54);
          *(_OWORD *)&p_firstPersonLegsPose->skinCacheEntry.frameCount = v28;
          *(double *)&p_firstPersonLegsPose->skinCacheEntry.subdivCacheOffset = v29;
          if ( CG_Cloth_Legs_ShouldCreateCloth(localClientNum, v14) )
            CG_Cloth_Legs_SetupModel(localClientNum, p_firstPersonLegsPose, v14);
          ViewModelPoseForHand = CG_GetViewModelPoseForHand(localClientNum, WEAPON_HAND_DEFAULT);
          CG_Players_AdjustLegsModelToHideUpperBody(v14, ViewModelPoseForHand, LocalClientGlobals->firstPersonLegsAdjustmentBoneIndices);
          CG_Ladder_SetLegsPose(localClientNum, &LocalClientGlobals->predictedPlayerState, p_firstPersonLegsPose);
          if ( (*(_DWORD *)&LocalClientGlobals->predictedPlayerState.outlineData.viewmodel & 0x3F) != 0 )
          {
            v35 = LocalClientGlobals->time - LocalClientGlobals->predictedPlayerState.deltaTime;
            HudOutlineDef = BG_GetHudOutlineDef(*(_DWORD *)&LocalClientGlobals->predictedPlayerState.outlineData.viewmodel & 0x3F);
            inOrigin.v[0] = 0.0;
            inOrigin.v[1] = 0.0;
            inOrigin.v[2] = 0.0;
            playerViewOrigin.v[0] = 0.0;
            playerViewOrigin.v[1] = 0.0;
            playerViewOrigin.v[2] = 0.0;
            v47.color = BG_HudOutline_GetColor(HudOutlineDef, LocalClientGlobals->hudOutlineStartTime, v35, &playerViewOrigin, &inOrigin);
            v47.drawOccludedPixels = HudOutlineDef->drawOccludedPixels;
            v47.drawNonOccludedPixels = HudOutlineDef->drawNonOccludedPixels;
            outlineWidth = HudOutlineDef->outlineWidth;
            if ( (outlineWidth < 0 || (unsigned int)outlineWidth > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)outlineWidth, "signed", outlineWidth) )
              __debugbreak();
            v47.lineWidth = outlineWidth;
            v47.renderMode = HudOutlineDef->outlineType;
            v47.fill = HudOutlineDef->drawFill;
            *(__m256i *)&v55.scrollRateX = *(__m256i *)&v47.color;
          }
          v38 = DCONST_DVARMPSPBOOL_cg_drawPlayerAlways;
          if ( !DCONST_DVARMPSPBOOL_cg_drawPlayerAlways && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerAlways") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v38);
          if ( v38->current.enabled && (unsigned int)(LocalClientGlobals->predictedPlayerState.pm_type - 2) <= 1 )
          {
            frameInterpolation = LocalClientGlobals->frameInterpolation;
            p_commandTime = (float *)&LocalClientGlobals->nextPs->commandTime;
            v41 = (float *)&LocalClientGlobals->ps->commandTime;
            inOrigin.v[0] = (float)((float)(p_commandTime[12] - v41[12]) * frameInterpolation) + v41[12];
            inOrigin.v[1] = (float)((float)(p_commandTime[13] - v41[13]) * frameInterpolation) + v41[13];
            inOrigin.v[2] = (float)((float)(p_commandTime[14] - v41[14]) * frameInterpolation) + v41[14];
            CG_SetPoseOrigin(p_firstPersonLegsPose, &inOrigin);
            memset(&inOrigin, 0, sizeof(inOrigin));
          }
          v42 = v45 | 0x28;
          v43 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
          if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v43);
          if ( v43->current.enabled && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 6u) )
            v42 = v45 & 0xFFFFFFD6 | 0x28;
          *(__m256i *)&v47.color = *(__m256i *)&v55.scrollRateX;
          v47.characterEVOffset = characterEVOffset;
          memset(&v55, 0, sizeof(v55));
          v15 = emissiveMaterialData;
          CG_Entity_AddDObjToScene(localClientNum, *(const DObj **)outOrigin.v, p_firstPersonLegsPose, 0x842u, v42, &v55, &v47, v49, 0.0, emissiveMaterialData);
          memset(&v54, 0, sizeof(v54));
          goto LABEL_20;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 714, ASSERT_TYPE_ASSERT, "( legsDObjValid )", "Trying to submit invalid player legs dobj to render. (DObjVerifyNumBones failed)") )
          __debugbreak();
      }
      v15 = emissiveMaterialData;
LABEL_20:
      if ( drawShadow )
      {
        v16 = obj;
        DObjClearSkel(obj);
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        Radius = DObjGetRadius(v16);
        v18 = R_LinkDObjEntity_NoCull(localClientNum, cent->nextState.clientNum, &outOrigin, *(float *)&Radius);
        cent->flags |= 0x80000u;
        v19 = DObjGetRadius(v16);
        CG_Entity_CheckLightCount(cent->nextState.clientNum, v16, v18, &outOrigin, *(float *)&v19);
        v20 = DCONST_DVARMPSPBOOL_cg_drawPlayerAlways;
        if ( !DCONST_DVARMPSPBOOL_cg_drawPlayerAlways && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerAlways") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v20);
        if ( v20->current.enabled && (unsigned int)(LocalClientGlobals->predictedPlayerState.pm_type - 2) <= 1 )
        {
          v21 = LocalClientGlobals->frameInterpolation;
          v22 = (float *)&LocalClientGlobals->nextPs->commandTime;
          v23 = (float *)&LocalClientGlobals->ps->commandTime;
          outOrigin.v[0] = (float)((float)(v22[12] - v23[12]) * v21) + v23[12];
          outOrigin.v[1] = (float)((float)(v22[13] - v23[13]) * v21) + v23[13];
          outOrigin.v[2] = (float)((float)(v22[14] - v23[14]) * v21) + v23[14];
          CG_SetPoseOrigin(&cent->pose, &outOrigin);
        }
        memset(&v47, 0, sizeof(v47));
        memset(&v55, 0, sizeof(v55));
        CG_Entity_AddDObjToScene(localClientNum, v16, &cent->pose, cent->nextState.clientNum, v45 | 0x8004, &v55, &v47, v49, 0.0, v15);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
    }
  }
}

/*
==============
CG_Players_AdjustBoneRelativeToBasePose
==============
*/
void CG_Players_AdjustBoneRelativeToBasePose(const DObj *dobj, DObjPartBits *partBits, unsigned __int8 boneIndex, const vec4_t *modelAdjustmentQuat, const vec4_t *modelToWorldQuat)
{
  vec4_t out; 
  vec4_t quat; 
  DObjAnimMat outMat; 

  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 213, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 214, ASSERT_TYPE_ASSERT, "(partBits != 0)", (const char *)&queryFormat, "partBits != NULL") )
    __debugbreak();
  if ( boneIndex < 0xFEu )
  {
    DObjGetBasePoseMatrix(dobj, boneIndex, &outMat);
    QuatMultiply(&outMat.quat, modelAdjustmentQuat, &out);
    QuatMultiply(&out, modelToWorldQuat, &quat);
    DObjSetWorldControlTag(dobj, partBits, boneIndex, &vec3_origin, &quat);
  }
}

/*
==============
CG_Players_AdjustLegsModelToHideUpperBody
==============
*/
void CG_Players_AdjustLegsModelToHideUpperBody(DObj *legsDObj, cpose_t *legsPose, const unsigned __int8 *adjustmentBoneIndices)
{
  unsigned int v7; 
  DObjPartBits *p_partBits; 
  const unsigned __int8 *v10; 
  __int64 v11; 
  const dvar_t *v12; 
  float value; 
  const dvar_t *v14; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  vec3_t axis; 
  vec4_t modelToWorldQuat; 
  DObjPartBits partBits; 
  vec4_t v22; 
  vec4_t modelAdjustmentQuat; 
  vec4_t quat; 

  if ( !legsDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 235, ASSERT_TYPE_ASSERT, "(legsDObj != 0)", (const char *)&queryFormat, "legsDObj != NULL") )
    __debugbreak();
  if ( !legsPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 236, ASSERT_TYPE_ASSERT, "(legsPose != 0)", (const char *)&queryFormat, "legsPose != NULL") )
    __debugbreak();
  if ( !adjustmentBoneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 237, ASSERT_TYPE_ASSERT, "(adjustmentBoneIndices != 0)", (const char *)&queryFormat, "adjustmentBoneIndices != NULL") )
    __debugbreak();
  v7 = 0;
  legsPose->coverWall.coverGrid[2] = -1;
  p_partBits = &partBits;
  __asm { vpxor   xmm6, xmm6, xmm6 }
  do
  {
    *(_OWORD *)p_partBits->array = _XMM6;
    p_partBits = (DObjPartBits *)((char *)p_partBits + 16);
    ++v7;
  }
  while ( v7 < 2 );
  v10 = adjustmentBoneIndices;
  v11 = 7i64;
  do
  {
    if ( *v10 != 0xFF )
      partBits.array[(unsigned __int64)*v10 >> 5] |= 0x80000000 >> (*v10 & 0x1F);
    ++v10;
    --v11;
  }
  while ( v11 );
  DObjLock(legsDObj);
  if ( !CL_Pose_DObjCreateSkelForBones(legsDObj, &partBits) )
  {
    v12 = DCONST_DVARFLT_cg_playerLegsSpineLowAngle;
    axis.v[0] = 0.0;
    axis.v[1] = FLOAT_1_0;
    axis.v[2] = 0.0;
    if ( !DCONST_DVARFLT_cg_playerLegsSpineLowAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLegsSpineLowAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    value = v12->current.value;
    v14 = DCONST_DVARFLT_cg_playerLegsSpineMidAngle;
    v15 = value * 0.017453292;
    if ( !DCONST_DVARFLT_cg_playerLegsSpineMidAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLegsSpineMidAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v16 = v14->current.value;
    v17 = DCONST_DVARFLT_cg_playerLegsArmsAngle;
    if ( !DCONST_DVARFLT_cg_playerLegsArmsAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLegsArmsAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v18 = v17->current.value;
    AngleRadAxisToQuat(v15, &axis, &quat);
    AngleRadAxisToQuat((float)(v16 * 0.017453292) + v15, &axis, &modelAdjustmentQuat);
    AngleRadAxisToQuat(v18 * 0.017453292, &axis, &v22);
    AnglesToQuat(&legsPose->angles, &modelToWorldQuat);
    CG_Players_AdjustBoneRelativeToBasePose(legsDObj, &partBits, *adjustmentBoneIndices, &quat, &modelToWorldQuat);
    CG_Players_AdjustBoneRelativeToBasePose(legsDObj, &partBits, adjustmentBoneIndices[1], &modelAdjustmentQuat, &modelToWorldQuat);
    CG_Players_AdjustBoneRelativeToBasePose(legsDObj, &partBits, adjustmentBoneIndices[2], &modelAdjustmentQuat, &modelToWorldQuat);
    CG_Players_AdjustBoneRelativeToBasePose(legsDObj, &partBits, adjustmentBoneIndices[3], &v22, &modelToWorldQuat);
    CG_Players_AdjustBoneRelativeToBasePose(legsDObj, &partBits, adjustmentBoneIndices[4], &v22, &modelToWorldQuat);
    CG_Players_AdjustBoneRelativeToBasePose(legsDObj, &partBits, adjustmentBoneIndices[5], &v22, &modelToWorldQuat);
    CG_Players_AdjustBoneRelativeToBasePose(legsDObj, &partBits, adjustmentBoneIndices[6], &v22, &modelToWorldQuat);
  }
  DObjUnlock(legsDObj);
}

/*
==============
CG_Players_AllPlayerIconsHidden
==============
*/
bool CG_Players_AllPlayerIconsHidden(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  float impulseFieldSpeed; 
  OmnvarData *Data; 
  int v5; 
  __int64 v6; 
  int v7; 

  v1 = localClientNum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_FIRING|0x80) )
    return 0;
  if ( (unsigned int)v1 >= cg_t::ms_allocatedCount )
  {
    v7 = cg_t::ms_allocatedCount;
    v5 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
  {
    LODWORD(v6) = cg_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 218, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::GetLocalClientGlobals: Trying to get multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", v6) )
      __debugbreak();
  }
  impulseFieldSpeed = cg_t::ms_cgArray[v1][1].predictedPlayerState.impulseFieldSpeed;
  return impulseFieldSpeed != NAN && (Data = CG_Omnvar_GetData((LocalClientNum_t)v1, LODWORD(impulseFieldSpeed))) != NULL && Data->current.enabled;
}

/*
==============
CG_Players_CalcFirstPersonModelPlacement
==============
*/
void CG_Players_CalcFirstPersonModelPlacement(LocalClientNum_t localClientNum, const playerState_s *ps, centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  unsigned int refdefViewOrg_aab; 
  float v8; 
  const dvar_t *v9; 
  float v10; 
  float v11; 
  const dvar_t *v12; 
  float value; 
  unsigned int Animset; 
  unsigned int Anim; 
  int IsLadderAlias; 
  SuitAnimType SuitAnimIndexFromPlayerState; 
  int legsAnim; 
  double Float_Internal_DebugName; 
  const dvar_t *v20; 
  double BoundsRadius; 
  const dvar_t *v22; 
  double v23; 
  float v24; 
  double v25; 
  double v26; 
  double v27; 
  CgHandler *Handler; 
  vec3_t inOrigin; 
  int v30[3]; 
  __int64 v31; 
  vec3_t inOutViewOrigin; 
  tmat33_t<vec3_t> axis; 
  WorldUpReferenceFrame v34; 

  v31 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CG_Player_AlignPlayerModelForScriptLink(LocalClientGlobals, cent) )
  {
    inOrigin = LocalClientGlobals->predictedPlayerState.origin;
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
    if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v30[0] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
    v30[1] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
    v30[2] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) + 2));
    inOutViewOrigin = ps->origin;
    if ( !CG_View_AddViewHeight(localClientNum, &inOutViewOrigin) )
    {
      memset(v30, 0, sizeof(v30));
LABEL_37:
      memset(&inOrigin, 0, sizeof(inOrigin));
      return;
    }
    v8 = *(float *)&v30[2] - inOutViewOrigin.v[2];
    memset(v30, 0, sizeof(v30));
    inOrigin.v[2] = v8 + inOrigin.v[2];
    v9 = DVARBOOL_killswitch_view_legs_misprediction_fix_enabled;
    if ( !DVARBOOL_killswitch_view_legs_misprediction_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_view_legs_misprediction_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      inOrigin.v[0] = inOrigin.v[0] + LocalClientGlobals->predictedErrorCurrentFrame.v[0];
      inOrigin.v[1] = inOrigin.v[1] + LocalClientGlobals->predictedErrorCurrentFrame.v[1];
      inOrigin.v[2] = inOrigin.v[2] + LocalClientGlobals->predictedErrorCurrentFrame.v[2];
    }
    v10 = 0.0;
    v11 = 0.0;
    v12 = DCONST_DVARFLT_cg_playerLegsOffset;
    if ( !DCONST_DVARFLT_cg_playerLegsOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLegsOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    value = v12->current.value;
    if ( PlayerASM_IsEnabled() )
    {
      Animset = BG_PlayerASM_GetAnimset(ps);
      Anim = BG_PlayerASM_GetAnim(ps, MOVEMENT);
      if ( Anim )
      {
        IsLadderAlias = BG_PlayerASM_IsLadderAlias(Anim, Animset);
        goto LABEL_23;
      }
    }
    else
    {
      SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(ps);
      legsAnim = ps->legsAnim;
      if ( legsAnim )
      {
        IsLadderAlias = BG_IsLadderAnim(legsAnim, SuitAnimIndexFromPlayerState);
LABEL_23:
        if ( IsLadderAlias )
        {
          value = 0.0;
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerLegsOffsetLadder, "cg_playerLegsOffsetLadder");
          v11 = *(float *)&Float_Internal_DebugName;
        }
      }
    }
    v20 = DCONST_DVARBOOL_cg_playerLegsOffsetEnableRadiusClamp;
    if ( !DCONST_DVARBOOL_cg_playerLegsOffsetEnableRadiusClamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLegsOffsetEnableRadiusClamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled )
    {
      BoundsRadius = BG_Suit_GetBoundsRadius(ps);
      I_fclamp(value, COERCE_FLOAT(LODWORD(BoundsRadius) ^ _xmm), *(float *)&BoundsRadius);
    }
    v22 = DCONST_DVARBOOL_cg_disable_playerLegsOffset_fov_comp;
    if ( !DCONST_DVARBOOL_cg_disable_playerLegsOffset_fov_comp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_disable_playerLegsOffset_fov_comp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( !v22->current.enabled && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
    {
      v23 = CG_View_CalcFovCompensation(LocalClientGlobals);
      v24 = *(float *)&v23;
      v25 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerLegsOffset_fovComp_forward, "cg_playerLegsOffset_fovComp_forward");
      value = value + (float)(*(float *)&v25 * v24);
      v26 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerLegsOffset_fovComp_right, "cg_playerLegsOffset_fovComp_right");
      LODWORD(v10) = COERCE_UNSIGNED_INT(*(float *)&v26 * v24) ^ _xmm;
      v27 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerLegsOffset_fovComp_up, "cg_playerLegsOffset_fovComp_up");
      v11 = v11 + (float)(*(float *)&v27 * v24);
    }
    YawToAxis(ps->viewangles.v[1], &axis);
    Handler = CgHandler::getHandler(localClientNum);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v34, ps, Handler, 1);
    WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v34, &axis);
    inOrigin.v[0] = (float)((float)((float)(v10 * axis.m[1].v[0]) + (float)(value * axis.m[0].v[0])) + (float)(v11 * axis.m[2].v[0])) + inOrigin.v[0];
    inOrigin.v[1] = (float)((float)((float)(v10 * axis.m[1].v[1]) + (float)(value * axis.m[0].v[1])) + (float)(v11 * axis.m[2].v[1])) + inOrigin.v[1];
    inOrigin.v[2] = (float)((float)((float)(v10 * axis.m[1].v[2]) + (float)(value * axis.m[0].v[2])) + (float)(v11 * axis.m[2].v[2])) + inOrigin.v[2];
    CG_SetPoseOrigin(&cent->pose, &inOrigin);
    goto LABEL_37;
  }
}

/*
==============
CG_Players_ClearPlayerLegsDObj
==============
*/
void CG_Players_ClearPlayerLegsDObj(LocalClientNum_t localClientNum, cg_t *const cgameGlob)
{
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 299, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 302, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( CG_Cloth_Legs_IsInitialized(localClientNum) )
    CG_Cloth_Legs_DestroyModel(localClientNum);
  cg_t::FreePlayerLegs(cgameGlob);
}

/*
==============
CG_Players_CopyAnimStateFromEntity
==============
*/
void CG_Players_CopyAnimStateFromEntity(characterInfo_t *ci, const entityState_t *es)
{
  unsigned int SuitAnimIndex; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 976, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 977, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  SuitAnimIndex = BG_AnimationMP_GetSuitAnimIndex(es);
  if ( ci->playerASMAnim.animSet != SuitAnimIndex )
    ci->legsPredictingForThisAnim = 0;
  if ( PlayerASM_IsEnabled() )
  {
    BG_PlayerASM_CopyAnimDataToCharacterInfo(es, ci);
  }
  else
  {
    ci->playerASMAnim.animSet = SuitAnimIndex;
    ci->playerAnim.legsAnim = BG_AnimationMP_GetLegsAnimation(es);
    ci->playerAnim.torsoAnim = BG_AnimationMP_GetTorsoAnimation(es);
  }
}

/*
==============
CG_Players_GetPlayerGamertag
==============
*/
void CG_Players_GetPlayerGamertag(const LocalClientNum_t localClientNum, const int clientNum, unsigned __int64 playerNameSize, char *out_playerName)
{
  CG_Players_GetPlayerName(localClientNum, clientNum, playerNameSize, out_playerName, 0);
}

/*
==============
CG_Players_GetPlayerGamertagWithHash
==============
*/
void CG_Players_GetPlayerGamertagWithHash(const LocalClientNum_t localClientNum, const int clientNum, unsigned __int64 playerNameSize, char *out_playerNameWithHash)
{
  CG_Players_GetPlayerNameWithHash(localClientNum, clientNum, playerNameSize, out_playerNameWithHash, 0);
}

/*
==============
CG_Players_GetPlayerGulagIndex
==============
*/
int CG_Players_GetPlayerGulagIndex(const LocalClientNum_t localClientNum, const int clientNum)
{
  CgStatic *LocalClientStatics; 
  __int64 v6; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_FIRING|0x80) )
    return 0;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  v6 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, clientNum);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1345, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
    __debugbreak();
  return UnpackValue(*(_DWORD *)(v6 + 120), 3u, 3u);
}

/*
==============
CG_Players_GetPlayerName
==============
*/
void CG_Players_GetPlayerName(const LocalClientNum_t localClientNum, const int clientNum, unsigned __int64 playerNameSize, char *out_playerName, const bool includeClanTag)
{
  char *v9; 
  CgStatic *LocalClientStatics; 
  __int64 v11; 
  unsigned __int8 v12; 
  char outBuffer[16]; 
  char out_playerNamea[48]; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1361, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::AGENTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::AGENTS )") )
    __debugbreak();
  if ( CL_Anonymization_ShouldAnonymizeClient(localClientNum, clientNum) )
  {
    CL_Anonymization_GetNameForIndex(clientNum, out_playerNamea);
    v9 = out_playerNamea;
  }
  else
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    v11 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, clientNum);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1374, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    if ( *(_BYTE *)(v11 + 124) && includeClanTag )
    {
      v12 = *(_BYTE *)(v11 + 133);
      *(_OWORD *)outBuffer = _xmm;
      Com_PlayerUtils_ColorizeClanTag((const char *)(v11 + 124), v12, outBuffer, 0x10ui64, 0x37u);
      Com_sprintf(out_playerNamea, 0x2Fui64, "[%s]%s", outBuffer, (const char *)(v11 + 4));
      v9 = out_playerNamea;
    }
    else
    {
      v9 = (char *)(v11 + 4);
    }
  }
  Core_strcpy(out_playerName, playerNameSize, v9);
}

/*
==============
CG_Players_GetPlayerNameWithHash
==============
*/
void CG_Players_GetPlayerNameWithHash(const LocalClientNum_t localClientNum, const int clientNum, unsigned __int64 playerNameSize, char *out_playerNameWithHash, const bool includeClanTag)
{
  char *v9; 
  CgStatic *LocalClientStatics; 
  __int64 v11; 
  unsigned __int8 v12; 
  char outBuffer[16]; 
  char out_playerName[64]; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1408, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::AGENTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::AGENTS )") )
    __debugbreak();
  if ( CL_Anonymization_ShouldAnonymizeClient(localClientNum, clientNum) )
  {
    CL_Anonymization_GetNameForIndex(clientNum, out_playerName);
    v9 = out_playerName;
  }
  else
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    v11 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, clientNum);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1421, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    if ( *(_BYTE *)(v11 + 124) && includeClanTag )
    {
      v12 = *(_BYTE *)(v11 + 133);
      *(_OWORD *)outBuffer = _xmm;
      Com_PlayerUtils_ColorizeClanTag((const char *)(v11 + 124), v12, outBuffer, 0x10ui64, 0x37u);
      Com_sprintf(out_playerName, 0x40ui64, "[%s]%s", outBuffer, (const char *)(v11 + 40));
      v9 = out_playerName;
    }
    else
    {
      v9 = (char *)(v11 + 40);
    }
  }
  Core_strcpy(out_playerNameWithHash, playerNameSize, v9);
}

/*
==============
CG_Players_HandleVehicleOccupancyLink
==============
*/
char CG_Players_HandleVehicleOccupancyLink(cg_t *cgameGlob, centity_t *cent)
{
  entityType_s eType; 
  LocalClientNum_t localClientNum; 
  characterInfo_t *CharacterInfo; 
  int number; 
  int clientNum; 
  CgHandler *Handler; 
  int LinkedVehicle; 
  float v11; 
  float v12; 
  int vehicleEntryFirstSnapTime; 
  int serverTime; 
  float v15; 
  animScriptVehicleSeat_t outVehicleSeat; 
  animScriptVehicleType_t outVehicleType; 
  vec3_t viewAngles; 
  vec3_t outLinkAngles; 
  vec3_t inOrigin; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 389, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 390, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 391, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &cent->nextState )") )
    __debugbreak();
  localClientNum = cgameGlob->localClientNum;
  CharacterInfo = CG_GetCharacterInfo(cgameGlob, cent->nextState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 396, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  number = cent->nextState.number;
  clientNum = cgameGlob->predictedPlayerState.clientNum;
  if ( BG_IsPlayingVehicleOccupancyAnims(CharacterInfo) && CharacterInfo->linkedEntNum > 0 )
  {
    Handler = CgHandler::getHandler(localClientNum);
    LinkedVehicle = BG_VehicleOccupancy_GetLinkedVehicle(Handler, &cent->nextState, CharacterInfo, &outVehicleType, &outVehicleSeat);
    if ( LinkedVehicle != 2047 )
    {
      v11 = cent->pose.angles.v[1];
      viewAngles.v[0] = cent->pose.angles.v[0];
      v12 = cent->pose.angles.v[2];
      viewAngles.v[1] = v11;
      viewAngles.v[2] = v12;
      if ( BG_VehicleOccupancy_SetCharacterInfo(Handler, LinkedVehicle, outVehicleSeat, CharacterInfo, &viewAngles, &inOrigin, &outLinkAngles) )
      {
        if ( number == clientNum )
        {
          vehicleEntryFirstSnapTime = cgameGlob->vehicleEntryFirstSnapTime;
          serverTime = cgameGlob->nextSnap->serverTime;
          if ( vehicleEntryFirstSnapTime )
          {
            if ( serverTime > HIDE_DURATION + vehicleEntryFirstSnapTime )
            {
              cgameGlob->vehicleEntryHidesPlayer = 0;
              goto LABEL_25;
            }
          }
          else
          {
            cgameGlob->vehicleEntryFirstSnapTime = serverTime;
            cgameGlob->vehicleEntryHidesPlayer = 1;
          }
          cgameGlob->renderingThirdPerson = 0;
        }
LABEL_25:
        CG_SetPoseOrigin(&cent->pose, &inOrigin);
        v15 = outLinkAngles.v[1];
        cent->pose.angles.v[0] = outLinkAngles.v[0];
        cent->pose.angles.v[2] = outLinkAngles.v[2];
        cent->pose.angles.v[1] = v15;
        return 1;
      }
    }
  }
  if ( number == clientNum )
  {
    cgameGlob->vehicleEntryFirstSnapTime = 0;
    cgameGlob->vehicleEntryHidesPlayer = 0;
  }
  return 0;
}

/*
==============
CG_Players_HeadIcons_GetWorldPosition
==============
*/
bool CG_Players_HeadIcons_GetWorldPosition(LocalClientNum_t localClientNum, const HeadIconView *headIcon, const HeadIconExtendedView *headIconExtendedView, vec3_t *outWorldPosition)
{
  bool result; 
  float v9; 
  centity_t *Entity; 
  const DObj *ClientDObj; 
  tmat33_t<vec3_t> outTagMat; 

  if ( !headIcon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1535, ASSERT_TYPE_ASSERT, "(headIcon)", (const char *)&queryFormat, "headIcon") )
    __debugbreak();
  if ( !headIconExtendedView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1536, ASSERT_TYPE_ASSERT, "(headIconExtendedView)", (const char *)&queryFormat, "headIconExtendedView") )
    __debugbreak();
  if ( headIconExtendedView->hasWorldOrigin )
  {
    outWorldPosition->v[0] = headIconExtendedView->worldOrigin.v[0];
    outWorldPosition->v[1] = headIconExtendedView->worldOrigin.v[1];
    result = 1;
    v9 = headIconExtendedView->worldOrigin.v[2];
    outWorldPosition->v[2] = v9;
    outWorldPosition->v[2] = (float)headIcon->zOffset + v9;
  }
  else if ( headIcon->entityNumber == 2047 || !CG_Entity_CanUseDObj(localClientNum, headIcon->entityNumber) )
  {
    return 0;
  }
  else
  {
    Entity = CG_GetEntity(localClientNum, headIcon->entityNumber);
    CG_GetPoseOrigin(&Entity->pose, outWorldPosition);
    ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
    if ( ClientDObj )
      CG_DObjGetWorldTagMatrix(&Entity->pose, ClientDObj, scr_const.j_head, &outTagMat, outWorldPosition);
    outWorldPosition->v[2] = (float)headIcon->zOffset + outWorldPosition->v[2];
    return 1;
  }
  return result;
}

/*
==============
CG_Players_InterpolateHeightOffset
==============
*/
void CG_Players_InterpolateHeightOffset(const LocalClientNum_t localClientNum, centity_t *cent)
{
  const dvar_t *v4; 
  cg_t *LocalClientGlobals; 
  unsigned int clientNum; 
  characterInfo_t *CharacterInfo; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1289, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v4 = DCONST_DVARBOOL_stepBlendActive;
  if ( !DCONST_DVARBOOL_stepBlendActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stepBlendActive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1297, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    clientNum = cent->nextState.clientNum;
    if ( LocalClientGlobals->clientNum != clientNum && LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, clientNum) )
    {
      CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
      if ( CharacterInfo )
      {
        if ( CharacterInfo->infoValid )
          CharacterInfo->heightOffset = (float)((float)(1.0 - LocalClientGlobals->frameInterpolation) * CharacterInfo->prevHeightOffset) + (float)(LocalClientGlobals->frameInterpolation * CharacterInfo->nextHeightOffset);
      }
    }
  }
}

/*
==============
CG_Players_IsPlayerIconHidden
==============
*/
bool CG_Players_IsPlayerIconHidden(const LocalClientNum_t localClientNum, const int clientNum)
{
  centity_t *Entity; 
  bool result; 

  result = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_FIRING|0x80) )
  {
    if ( CG_Players_AllPlayerIconsHidden(localClientNum) )
      return 1;
    Entity = CG_GetEntity(localClientNum, clientNum);
    if ( (Entity->flags & 1) != 0 && !BG_IsAgentEntity(&Entity->nextState) && CG_Players_IsPlayerInGulag(localClientNum, clientNum) )
      return 1;
  }
  return result;
}

/*
==============
CG_Players_IsPlayerInGulag
==============
*/
bool CG_Players_IsPlayerInGulag(const LocalClientNum_t localClientNum, const int clientNum)
{
  bool result; 
  CgStatic *LocalClientStatics; 
  __int64 v6; 

  result = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_FIRING|0x80);
  if ( result )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    v6 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, clientNum);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1324, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
      __debugbreak();
    return (UnpackValue(*(_DWORD *)(v6 + 120), 6u, 0xAu) & 6) != 0;
  }
  return result;
}

/*
==============
CG_Players_IsPlayerRemoteControlling
==============
*/
bool CG_Players_IsPlayerRemoteControlling(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x1Cu);
}

/*
==============
CG_Players_SetUseShadowAnims
==============
*/
void CG_Players_SetUseShadowAnims(characterInfo_t *const ci, bool useShadowAnims)
{
  bool v4; 

  if ( ci->usingAnimState )
  {
    if ( ci->animTreeDirty || ci->useShadowAnims != useShadowAnims )
    {
      ci->useShadowAnims = useShadowAnims;
      ci->animTreeDirty = 1;
    }
    else
    {
      ci->useShadowAnims = useShadowAnims;
      ci->animTreeDirty = 0;
    }
  }
  else if ( PlayerASM_IsEnabled() )
  {
    v4 = ci->useShadowAnims == useShadowAnims;
    ci->useShadowAnims = useShadowAnims;
    if ( !v4 )
      ci->playerASMLocomotion.forceUpdate = 1;
  }
  else
  {
    ci->useShadowAnims = useShadowAnims;
  }
}

/*
==============
CG_Players_ShouldDrawPlayerHelmet
==============
*/
bool CG_Players_ShouldDrawPlayerHelmet(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  const DObj *ClientDObj; 
  bool result; 

  v1 = DCONST_DVARBOOL_helmetCamDrawHelmet;
  if ( !DCONST_DVARBOOL_helmetCamDrawHelmet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "helmetCamDrawHelmet") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  result = 0;
  if ( v1->current.enabled )
  {
    if ( BG_Customization_IsEnabled() )
    {
      if ( CG_Utils_IsActionCamActive(localClientNum) )
      {
        ClientDObj = Com_GetClientDObj(2115, localClientNum);
        if ( ClientDObj )
        {
          if ( DObjGetModel(ClientDObj, 0) )
            return 1;
        }
      }
    }
  }
  return result;
}

/*
==============
CG_Players_ShouldHidePlayerFromLocalPlayer
==============
*/
bool CG_Players_ShouldHidePlayerFromLocalPlayer(const LocalClientNum_t localClientNum, const int otherPlayerEntNum)
{
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  bool IsPlayerInGulag; 
  bool v7; 
  int PlayerGulagIndex; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_FIRING|0x80) )
  {
    if ( CG_Players_AllPlayerIconsHidden(localClientNum) )
      return 1;
    Entity = CG_GetEntity(localClientNum, otherPlayerEntNum);
    if ( (Entity->flags & 1) != 0 && !BG_IsAgentEntity(&Entity->nextState) )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      IsPlayerInGulag = CG_Players_IsPlayerInGulag(localClientNum, LocalClientGlobals->predictedPlayerState.clientNum);
      v7 = CG_Players_IsPlayerInGulag(localClientNum, otherPlayerEntNum);
      if ( IsPlayerInGulag )
      {
        if ( v7 )
        {
          PlayerGulagIndex = CG_Players_GetPlayerGulagIndex(localClientNum, LocalClientGlobals->predictedPlayerState.clientNum);
          return PlayerGulagIndex != CG_Players_GetPlayerGulagIndex(localClientNum, otherPlayerEntNum);
        }
        return 1;
      }
      if ( v7 )
        return 1;
    }
  }
  return 0;
}

/*
==============
CG_Players_ShouldRecreateLegsDObj
==============
*/
char CG_Players_ShouldRecreateLegsDObj(LocalClientNum_t localClientNum, int entityNum)
{
  cg_t *LocalClientGlobals; 
  const DObj *ClientDObj; 
  const DObj *v6; 
  const XModel *Model; 
  int v8; 
  bool v9; 
  const XModel *v10; 
  bool v11; 
  DObj *v12; 
  DObj *v13; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->refreshLegsMaterialOverride )
    return 1;
  if ( Com_GameMode_SupportsFeature(WEAPON_OFFHAND_DETONATE|0x80) )
  {
    v11 = LocalClientGlobals->predictedPlayerState.legsModelIndex == LocalClientGlobals->firstPersonLegsModelIndex;
    goto LABEL_21;
  }
  ClientDObj = Com_GetClientDObj(entityNum, localClientNum);
  v6 = Com_GetClientDObj(2114, localClientNum);
  if ( !v6 )
  {
    v11 = ClientDObj == NULL;
    goto LABEL_21;
  }
  if ( !ClientDObj )
  {
    v9 = 1;
    goto LABEL_22;
  }
  Model = DObjGetModel(ClientDObj, 0);
  if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 132, ASSERT_TYPE_ASSERT, "(shadowModel)", (const char *)&queryFormat, "shadowModel") )
    __debugbreak();
  if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_playerLegsDObjFixActive, "cg_playerLegsDObjFixActive") )
  {
    v11 = DObjGetModel(v6, 0) == Model;
LABEL_21:
    v9 = !v11;
    goto LABEL_22;
  }
  v8 = I_strcmp(Model->name, LocalClientGlobals->firstPersonLegsModelName);
  v9 = v8 != 0;
  if ( !v8 )
  {
    v10 = DObjGetModel(v6, 0);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 144, ASSERT_TYPE_ASSERT, "(legsModel)", (const char *)&queryFormat, "legsModel") )
      __debugbreak();
    if ( (v10 != Model || I_strcmp(Model->name, v10->name)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 145, ASSERT_TYPE_ASSERT, "( legsModel == shadowModel && I_strcmp( shadowModel->name, legsModel->name ) == 0 )", "player legs dobj built with model name %s, but XModel pointer has moved (old pointer has name %s)", Model->name, v10->name) )
      __debugbreak();
  }
LABEL_22:
  if ( !PlayerASM_IsEnabled() )
    return v9;
  v12 = Com_GetClientDObj(entityNum, localClientNum);
  v13 = Com_GetClientDObj(2114, localClientNum);
  if ( !v12 || !v12->tree || !v13 || !v13->tree || v12->tree->anims == v13->tree->anims )
    return v9;
  return 1;
}

/*
==============
CG_Players_UpdatePlayerLegsDObj
==============
*/
void CG_Players_UpdatePlayerLegsDObj(LocalClientNum_t localClientNum, const centity_t *cent)
{
  CgStatic *LocalClientStatics; 
  cg_t *LocalClientGlobals; 
  int number; 
  cg_t *v7; 
  const XModel *v8; 
  const DObj *ClientDObj; 
  XModel *Model; 
  ClConfigStrings *ClConfigStrings; 
  const char *v12; 
  const char *v13; 
  const char *name; 
  characterInfo_t *CharacterInfo; 
  XAnim_s *Anims; 
  XAnimOwner v17; 
  XAnimTree *SmallTree; 
  DObj *v19; 
  unsigned __int8 *firstPersonLegsAdjustmentBoneIndices; 
  scr_string_t **v21; 
  unsigned __int8 *v22; 
  __int64 v23; 
  scr_string_t *v24; 
  int modelIndex[4]; 
  DObjModel dobjModels; 

  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 325, ASSERT_TYPE_ASSERT, "(cent != 0)", (const char *)&queryFormat, "cent != NULL") )
    __debugbreak();
  if ( cent->nextState.number == LocalClientGlobals->predictedPlayerState.clientNum )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 334, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    if ( CG_Players_ShouldRecreateLegsDObj(localClientNum, cent->nextState.number) )
    {
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 302, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      if ( CG_Cloth_Legs_IsInitialized(localClientNum) )
        CG_Cloth_Legs_DestroyModel(localClientNum);
      cg_t::FreePlayerLegs(LocalClientGlobals);
      number = cent->nextState.number;
      v7 = CG_GetLocalClientGlobals(localClientNum);
      v8 = NULL;
      if ( Com_GameMode_SupportsFeature(WEAPON_OFFHAND_DETONATE|0x80) )
      {
        if ( !v7->predictedPlayerState.legsModelIndex )
          goto LABEL_25;
        ClConfigStrings = ClConfigStrings::GetClConfigStrings();
        v12 = ClConfigStrings->GetModelString(ClConfigStrings, v7->predictedPlayerState.legsModelIndex);
        v13 = v12;
        if ( (!v12 || !*v12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 100, ASSERT_TYPE_ASSERT, "(modelName && modelName[0])", (const char *)&queryFormat, "modelName && modelName[0]") )
          __debugbreak();
        Model = R_RegisterModel(v13);
      }
      else
      {
        ClientDObj = Com_GetClientDObj(number, localClientNum);
        if ( !ClientDObj )
          goto LABEL_25;
        Model = (XModel *)DObjGetModel(ClientDObj, 0);
      }
      v8 = Model;
      if ( Model )
      {
        name = Model->name;
        goto LABEL_26;
      }
LABEL_25:
      name = (char *)&queryFormat.fmt + 3;
LABEL_26:
      Core_strcpy(LocalClientGlobals->firstPersonLegsModelName, 0x40ui64, name);
      if ( v8 )
      {
        DObjInitModel(v8, (scr_string_t)0, 1, 0, NULL, &dobjModels);
        CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.clientNum);
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 354, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        if ( !CharacterInfo->pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 355, ASSERT_TYPE_ASSERT, "(ci->pXAnimTree)", (const char *)&queryFormat, "ci->pXAnimTree") )
          __debugbreak();
        Anims = XAnimGetAnims(CharacterInfo->pXAnimTree);
        LOBYTE(v17) = 1;
        SmallTree = Com_XAnimCreateSmallTree(Anims, v17);
        if ( !SmallTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 360, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
          __debugbreak();
        XAnimCloneAnimTree(CharacterInfo->pXAnimTree, SmallTree);
        v19 = Com_ClientDObjCreate(&dobjModels, 1u, SmallTree, 2114, localClientNum, 1, 0x842u);
        CG_Cloth_Legs_DeactivateClothNode(localClientNum, v19);
        DObjSetCamoMaterialOverride(v19, &dobjModels, 1);
        LocalClientGlobals->refreshLegsMaterialOverride = 0;
        XAnimBonePhysicsSetSettlingEnabled(v19, 0);
        firstPersonLegsAdjustmentBoneIndices = LocalClientGlobals->firstPersonLegsAdjustmentBoneIndices;
        LocalClientGlobals->firstPersonLegsModelIndex = LocalClientGlobals->predictedPlayerState.legsModelIndex;
        if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 195, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
          __debugbreak();
        if ( LocalClientGlobals == (cg_t *)-304300i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 196, ASSERT_TYPE_ASSERT, "(outBoneIndices != 0)", (const char *)&queryFormat, "outBoneIndices != NULL") )
          __debugbreak();
        v21 = (scr_string_t **)s_legsAdjustmentBoneNames;
        v22 = LocalClientGlobals->firstPersonLegsAdjustmentBoneIndices;
        v23 = 7i64;
        do
        {
          v24 = *v21;
          *firstPersonLegsAdjustmentBoneIndices = -2;
          DObjGetBoneIndexInternal_56(v19, *v24, v22++, modelIndex);
          ++firstPersonLegsAdjustmentBoneIndices;
          ++v21;
          --v23;
        }
        while ( v23 );
      }
    }
  }
}

/*
==============
CG_PredictCharacterState
==============
*/
void CG_PredictCharacterState(LocalClientNum_t localClientNum, centity_t *cent)
{
  entityState_t *p_nextState; 
  entityType_s eType; 
  CgStatic *LocalClientStatics; 
  int clientNum; 
  CgStatic *v8; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  __int64 SuitAnimIndex; 
  int LegsAnimation; 
  const BgAnimStatic *v13; 
  PlayerAnimScript *v14; 
  signed int v15; 
  int XAnimIndex; 
  unsigned int legsPredictingForThisAnim; 
  unsigned int v18; 
  PlayerAnimEntry *animations; 
  unsigned __int8 syncGroup; 
  const DObj *ClientDObj; 
  const XAnimTree *Tree; 
  double Time; 
  float v24; 
  const XAnim_s *Anims; 
  double Length; 
  float v27; 
  double Rate; 
  __int64 v30; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1017, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_nextState = &cent->nextState;
  if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = p_nextState->eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1018, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &cent->nextState )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1019, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", "%s\n\tCG_PredictCharacterState is intended to be called only when using the PLAYER_ANIMATION feature.", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  clientNum = p_nextState->clientNum;
  v8 = LocalClientStatics;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1026, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  SuitAnimIndex = BG_AnimationMP_GetSuitAnimIndex(p_nextState);
  LegsAnimation = BG_AnimationMP_GetLegsAnimation(p_nextState);
  if ( !BG_IsTransitionalAnim(LegsAnimation, (SuitAnimType)SuitAnimIndex) )
    goto LABEL_44;
  v13 = v8->GetAnimStatics(v8);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1040, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v14 = v13->animScriptData.suitScript[SuitAnimIndex];
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1043, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  v15 = LegsAnimation & 0xFFFFEFFF;
  XAnimIndex = BG_AnimationMP_GetXAnimIndex(v13, (const SuitAnimType)SuitAnimIndex, v15);
  legsPredictingForThisAnim = CharacterInfo->legsPredictingForThisAnim;
  v18 = XAnimIndex;
  if ( legsPredictingForThisAnim != v15 )
  {
    if ( !legsPredictingForThisAnim )
      goto LABEL_41;
    if ( legsPredictingForThisAnim >= v14->animationCount )
    {
      LODWORD(v30) = CharacterInfo->legsPredictingForThisAnim;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1054, ASSERT_TYPE_ASSERT, "(unsigned)( ci->legsPredictingForThisAnim ) < (unsigned)( playerAnim->animationCount )", "ci->legsPredictingForThisAnim doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v30, v14->animationCount) )
        __debugbreak();
    }
    animations = v14->animations;
    syncGroup = animations[CharacterInfo->legsPredictingForThisAnim].syncGroup;
    if ( !syncGroup || syncGroup != animations[v15].syncGroup )
    {
LABEL_41:
      if ( legsPredictingForThisAnim != v15 )
      {
        ClientDObj = Com_GetClientDObj(p_nextState->number, localClientNum);
        Tree = DObjGetTree(ClientDObj);
        if ( !Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1066, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
          __debugbreak();
        Time = XAnimGetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, v18);
        v24 = *(float *)&Time;
        Anims = XAnimGetAnims(Tree);
        Length = XAnimGetLength(Anims, v18);
        v27 = *(float *)&Length * (float)(1.0 - v24);
        Rate = XAnimGetRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v18);
        if ( !(*(float *)&Rate >= 1.0 ? v27 < 0.050000001 : (float)(*(float *)&Rate * 0.050000001) > v27) )
          goto LABEL_44;
      }
    }
  }
  if ( CG_PredictTransitionalExitCharacterAnim(p_nextState, CharacterInfo) )
    CharacterInfo->legsPredictingForThisAnim = v15;
  else
LABEL_44:
    CharacterInfo->legsPredictingForThisAnim = 0;
}

/*
==============
CG_PredictPlayerASMState
==============
*/
_BOOL8 CG_PredictPlayerASMState(LocalClientNum_t localClientNum, centity_t *cent)
{
  entityState_t *p_nextState; 
  entityType_s eType; 
  CgStatic *LocalClientStatics; 
  int clientNum; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  unsigned int Animset; 
  unsigned int Anim; 
  unsigned int v12; 
  CgPlayer_Asm *v13; 
  scr_string_t StateNameFromIndex; 
  ASM *AssetBySuit; 
  ASM_State *StateByName; 
  const DObj *ClientDObj; 
  const XAnimTree *Tree; 
  bool ShouldSyncAnims; 
  unsigned int DescendantWithGreatest; 
  double Time; 
  double v22; 
  float v23; 
  double Length; 
  float v25; 
  double Rate; 
  unsigned int outAnimState; 
  unsigned int pOutGraftIndex; 
  unsigned int outAnimEntry; 
  XAnim_s *anims; 
  ASM_State *state; 
  ASM *asmAsset; 
  __int64 v34; 
  unsigned int inOutTimer; 
  XAnimSubTreeID pOutSubtreeID; 
  unsigned int pOutAnimIndex; 

  v34 = -2i64;
  pOutGraftIndex = 0;
  if ( !PlayerASM_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1141, ASSERT_TYPE_ASSERT, "(PlayerASM_IsEnabled())", (const char *)&queryFormat, "PlayerASM_IsEnabled()") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1142, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_nextState = &cent->nextState;
  if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = p_nextState->eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1143, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &cent->nextState )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1145, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", "%s\n\tCG_PredictPlayerASMState() is intended to be called only when using the PLAYER_ANIMATION feature.", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFEE82EE, "CG_PredictPlayerASMState");
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  clientNum = p_nextState->clientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1154, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  Animset = BG_PlayerASM_GetAnimset(p_nextState);
  Anim = BG_PlayerASM_GetAnim(p_nextState, MOVEMENT);
  v12 = Anim;
  if ( !Anim )
    goto LABEL_51;
  BG_PlayerASM_UnpackAnim(Animset, Anim, &outAnimState, &outAnimEntry);
  v13 = CgPlayer_Asm::Singleton(localClientNum);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1171, ASSERT_TYPE_ASSERT, "(playerASM)", (const char *)&queryFormat, "playerASM") )
    __debugbreak();
  StateNameFromIndex = BG_PlayerASM_GetStateNameFromIndex(Animset, outAnimState);
  if ( !StateNameFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1174, ASSERT_TYPE_ASSERT, "(stateName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "stateName != NULL_SCR_STRING") )
    __debugbreak();
  AssetBySuit = (ASM *)BgPlayer_Asm::GetAssetBySuit(v13, CharacterInfo->suitIndex);
  asmAsset = AssetBySuit;
  if ( !AssetBySuit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1177, ASSERT_TYPE_ASSERT, "(asmAsset)", (const char *)&queryFormat, "asmAsset") )
    __debugbreak();
  StateByName = (ASM_State *)BgPlayer_Asm::GetStateByName(v13, AssetBySuit, StateNameFromIndex);
  state = StateByName;
  if ( !StateByName || (StateByName->m_Flags & 2) == 0 )
    goto LABEL_51;
  ClientDObj = Com_GetClientDObj(p_nextState->number, localClientNum);
  Tree = DObjGetTree(ClientDObj);
  if ( !Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1196, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  ShouldSyncAnims = CharacterInfo->legsPredictingForThisAnim == v12;
  pOutAnimIndex = 0;
  pOutSubtreeID = XANIM_SUBTREE_DEFAULT;
  BG_PlayerASM_GetXAnimData(Animset, outAnimState, outAnimEntry, &pOutAnimIndex, &pOutGraftIndex, &pOutSubtreeID);
  anims = (XAnim_s *)XAnimGetSubTreeAnims(Tree, pOutSubtreeID);
  LOWORD(inOutTimer) = XAnimGetInfoIndex(Tree, 0, XANIM_SUBTREE_DEFAULT, pOutAnimIndex);
  if ( !(_WORD)inOutTimer )
    goto LABEL_51;
  DescendantWithGreatest = pOutAnimIndex;
  if ( !XAnimIsLeafNode(anims, pOutAnimIndex) )
    DescendantWithGreatest = XAnimGetDescendantWithGreatestWeight<0>(inOutTimer);
  if ( DescendantWithGreatest )
  {
    if ( ShouldSyncAnims )
      goto LABEL_55;
    if ( CharacterInfo->legsPredictingForThisAnim )
    {
      Time = XAnimGetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, DescendantWithGreatest);
      inOutTimer = 10 * (int)(float)(*(float *)&Time * 1000.0);
      ShouldSyncAnims = BG_PlayerASM_ShouldSyncAnims(Animset, CharacterInfo->legsPredictingForThisAnim, v12, &inOutTimer);
      if ( ShouldSyncAnims )
        goto LABEL_55;
    }
    v22 = XAnimGetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, DescendantWithGreatest);
    v23 = *(float *)&v22;
    Length = XAnimGetLength(anims, DescendantWithGreatest);
    v25 = *(float *)&Length * (float)(1.0 - v23);
    Rate = XAnimGetRate(Tree, 0, XANIM_SUBTREE_DEFAULT, DescendantWithGreatest);
    ShouldSyncAnims = *(float *)&Rate >= 1.0 ? v25 < 0.050000001 : (float)(*(float *)&Rate * 0.050000001) > v25;
    if ( ShouldSyncAnims )
    {
LABEL_55:
      if ( CG_PredictTransitionalExitPlayerASMAnim(localClientNum, p_nextState, CharacterInfo, v13, Animset, asmAsset, state) )
        CharacterInfo->legsPredictingForThisAnim = v12;
    }
  }
  else
  {
LABEL_51:
    ShouldSyncAnims = 0;
  }
  Sys_ProfEndNamedEvent();
  return ShouldSyncAnims;
}

/*
==============
CG_PredictTransitionalExitCharacterAnim
==============
*/
__int64 CG_PredictTransitionalExitCharacterAnim(entityState_t *es, characterInfo_t *ci)
{
  signed int SuitAnimIndex; 
  int LegsAnimation; 
  PlayerAnimScriptMoveType MoveType; 
  PlayerAnimScriptMoveType ExitOfTransitionalMoveType; 
  PlayerAnimScriptItem *scriptItem; 
  PlayerAnimScriptEntry *script; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 864, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 865, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 866, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  SuitAnimIndex = BG_AnimationMP_GetSuitAnimIndex(es);
  LegsAnimation = BG_AnimationMP_GetLegsAnimation(es);
  MoveType = BG_GetMoveType(LegsAnimation, (SuitAnimType)SuitAnimIndex);
  if ( MoveType == ANIM_MT_UNUSED )
    return 0i64;
  ExitOfTransitionalMoveType = BG_GetExitOfTransitionalMoveType(AISTATE_COMBAT, MoveType, (SuitAnimType)SuitAnimIndex);
  if ( ExitOfTransitionalMoveType == ANIM_MT_UNUSED || !BG_AnimFindScript(es->clientNum, (const SuitAnimType)SuitAnimIndex, AISTATE_COMBAT, ExitOfTransitionalMoveType, (const PlayerAnimScriptEntry **)&script, (const PlayerAnimScriptItem **)&scriptItem) )
    return 0i64;
  if ( !scriptItem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 881, ASSERT_TYPE_ASSERT, "(scriptItem)", (const char *)&queryFormat, "scriptItem") )
    __debugbreak();
  if ( !scriptItem->commandCount )
    return 0i64;
  if ( scriptItem->commands->bodyPart >= 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 886, ASSERT_TYPE_ASSERT, "(scriptItem->commands[0].bodyPart < ANIM_BP_SKIP)", (const char *)&queryFormat, "scriptItem->commands[0].bodyPart < ANIM_BP_SKIP") )
    __debugbreak();
  if ( !scriptItem->commands->animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 887, ASSERT_TYPE_ASSERT, "(scriptItem->commands[0].animIndex)", (const char *)&queryFormat, "scriptItem->commands[0].animIndex") )
    __debugbreak();
  BG_AnimationMP_SetLegsAnimation(es, scriptItem->commands->animIndex, (SuitAnimType)SuitAnimIndex);
  ci->playerASMAnim.animSet = SuitAnimIndex;
  ci->playerAnim.legsAnim = BG_AnimationMP_GetLegsAnimation(es);
  return 1i64;
}

/*
==============
CG_PredictTransitionalExitPlayerASMAnim
==============
*/
char CG_PredictTransitionalExitPlayerASMAnim(LocalClientNum_t localClientNum, entityState_t *es, characterInfo_t *ci, CgPlayer_Asm *playerASM, unsigned int animsetIndex, const ASM *asmAsset, const ASM_State *state)
{
  const dvar_t *v10; 
  const dvar_t *v11; 
  __int64 v12; 

  if ( !playerASM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1101, ASSERT_TYPE_ASSERT, "(playerASM)", (const char *)&queryFormat, "playerASM") )
    __debugbreak();
  if ( !asmAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1102, ASSERT_TYPE_ASSERT, "(asmAsset)", (const char *)&queryFormat, "asmAsset") )
    __debugbreak();
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1103, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1104, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  v10 = DCONST_DVARINT_playerasm_debug_override_entnum;
  if ( !DCONST_DVARINT_playerasm_debug_override_entnum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_entnum") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( es->clientNum == v10->current.integer )
  {
    v11 = DVARSTR_playerasm_debug_override_main_state_name;
    if ( !DVARSTR_playerasm_debug_override_main_state_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_main_state_name") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = -1i64;
    do
      ++v12;
    while ( *(_BYTE *)(v11->current.integer64 + v12) );
    if ( (_DWORD)v12 )
      return 0;
  }
  if ( !CgPlayer_Asm::CG_PredictTransitionalExit(playerASM, asmAsset, state, MOVEMENT, ci->suitIndex, es) )
    return 0;
  ci->playerASMAnim.animSet = animsetIndex;
  ci->playerAnim.legsAnim = BG_PlayerASM_GetAnim(es, MOVEMENT);
  return 1;
}

/*
==============
CG_SetupPrePredictBounds
==============
*/
void CG_SetupPrePredictBounds(const cg_t *cgameGlob, Bounds *outBounds)
{
  const Bounds *Bounds; 
  double v5; 
  float v1[4]; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1265, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !outBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1266, ASSERT_TYPE_ASSERT, "(outBounds)", (const char *)&queryFormat, "outBounds") )
    __debugbreak();
  v1[0] = 0.0;
  v1[1] = 0.0;
  v1[2] = 0.0;
  if ( VecNCompareCustomEpsilon(cgameGlob->playerBox.halfSize.v, v1, 0.001, 3) )
  {
    Bounds = BG_Suit_GetBounds(cgameGlob->predictedPlayerState.suitIndex, PM_EFF_STANCE_DEFAULT);
    *(_OWORD *)outBounds->midPoint.v = *(_OWORD *)Bounds->midPoint.v;
    v5 = *(double *)&Bounds->halfSize.y;
  }
  else
  {
    *(_OWORD *)outBounds->midPoint.v = *(_OWORD *)cgameGlob->playerBox.midPoint.v;
    v5 = *(double *)&cgameGlob->playerBox.halfSize.y;
  }
  *(double *)&outBounds->halfSize.y = v5;
}

