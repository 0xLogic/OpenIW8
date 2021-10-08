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
bool CG_Player_AlignPlayerModelForScriptLink(cg_t *cgameGlob, centity_t *cent)
{
  entityState_t *p_nextState; 
  entityType_s eType; 
  LocalClientNum_t localClientNum; 
  int number; 
  int clientNum; 
  __int16 linkEnt; 
  clientLinkInfo_t *p_clientLinkInfo; 
  const DObj *ClientDObj; 
  int WorldTagMatrix; 
  double v46; 
  bool result; 
  vec3_t inOrigin; 
  __int64 v52; 
  tmat43_t<vec3_t> outTagMat; 
  char v54; 
  void *retaddr; 

  _RAX = &retaddr;
  v52 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm8
  }
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
  _R15 = CG_GetCharacterInfo(cgameGlob, cent->nextState.clientNum);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 493, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  _RDI = CG_Entity_GetLinkToParent(localClientNum, cent);
  number = p_nextState->number;
  clientNum = cgameGlob->predictedPlayerState.clientNum;
  if ( clientNum == number )
  {
    linkEnt = cgameGlob->predictedPlayerState.linkEnt;
    if ( linkEnt != 2047 )
      _RDI = CG_GetEntity(localClientNum, linkEnt);
  }
  if ( _RDI && (_RDI->flags & 1) == 0 )
    _RDI = NULL;
  if ( !_R15->isScriptedSceneAnim || !_RDI )
  {
    result = 0;
    goto LABEL_37;
  }
  p_clientLinkInfo = &cent->nextState.clientLinkInfo;
  if ( clientNum == number )
  {
    ClientDObj = Com_GetClientDObj(_RDI->nextState.number, localClientNum);
    if ( ClientDObj )
    {
      WorldTagMatrix = CG_DObjGetWorldTagMatrix(&_RDI->pose, ClientDObj, scr_const.tag_player, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]);
      goto LABEL_30;
    }
LABEL_32:
    CG_GetPoseOrigin(&_RDI->pose, &inOrigin);
    CG_SetPoseOrigin(&cent->pose, &inOrigin);
    _RSI = &cent->pose.angles;
    cent->pose.angles.v[0] = _RDI->pose.angles.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4Ch]
      vmovss  dword ptr [rsi+4], xmm0
      vmovss  xmm1, dword ptr [rdi+50h]
      vmovss  dword ptr [rsi+8], xmm1
    }
    memset(&inOrigin, 0, sizeof(inOrigin));
    goto LABEL_33;
  }
  if ( (*(_DWORD *)p_clientLinkInfo & 0x100000) != 0 )
    goto LABEL_32;
  WorldTagMatrix = CG_Entity_GetParentAxis(localClientNum, p_nextState->number, p_clientLinkInfo, _RDI, &outTagMat);
LABEL_30:
  if ( !WorldTagMatrix )
    goto LABEL_32;
  CG_SetPoseOrigin(&cent->pose, &outTagMat.m[3]);
  _RSI = &cent->pose.angles;
  AxisToAngles((const tmat33_t<vec3_t> *)&outTagMat, &cent->pose.angles);
LABEL_33:
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  dword ptr [r15+9C0h], xmm0
  }
  _R15->playerAngles.v[1] = _RSI->v[1];
  _R15->playerAngles.v[2] = _RSI->v[2];
  __asm
  {
    vmulss  xmm3, xmm0, cs:__real@3b360b61
    vxorps  xmm8, xmm8, xmm8
    vmovss  xmm6, cs:__real@3f000000
    vaddss  xmm1, xmm3, xmm6
    vroundss xmm2, xmm8, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmovss  xmm5, cs:__real@43b40000
    vmulss  xmm0, xmm0, xmm5
    vmovss  dword ptr [r15+9C0h], xmm0
    vmovss  xmm1, dword ptr [r15+9C4h]
    vmulss  xmm4, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm4, xmm6
    vroundss xmm3, xmm8, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm5
    vmovss  dword ptr [r15+9C4h], xmm1
    vmovss  xmm2, dword ptr [r15+9C8h]
    vmulss  xmm3, xmm2, cs:__real@3b360b61
    vaddss  xmm1, xmm3, xmm6
    vroundss xmm2, xmm8, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm1, xmm0, xmm5
    vmovss  dword ptr [r15+9C8h], xmm1
  }
  *(double *)&_XMM0 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.movementDir);
  __asm { vmovss  dword ptr [r15+8BCh], xmm0 }
  _R15->leftStickInputInterpolated = BG_PackedPolarCoordsToCartesian(cent->nextState.lerp.u.player.leftStickPolarPacked);
  _R15->rightStickInputInterpolated = BG_PackedPolarCoordsToCartesian(cent->nextState.lerp.u.player.rightStickPolarPacked);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm1, xmm6; maxAbsValueSize
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[0], *(float *)&_XMM1, 0x10u);
  __asm
  {
    vmovss  dword ptr [r15+904h], xmm0
    vmovaps xmm1, xmm6; maxAbsValueSize
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[1], *(float *)&_XMM1, 0x10u);
  __asm
  {
    vmovss  dword ptr [r15+908h], xmm0
    vmovaps xmm1, xmm6; maxAbsValueSize
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[2], *(float *)&_XMM1, 0x10u);
  __asm { vmovss  dword ptr [r15+90Ch], xmm0 }
  BG_SlopeWorldmodel_Unpack(&cent->nextState.lerp.u.player.slopePacked, &_R15->groundNormalInterpolated);
  if ( PlayerASM_IsEnabled() )
  {
    v46 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.velocityDir);
    BG_PlayerASM_UpdateAngles(*(const float *)&v46, _R15);
  }
  result = 1;
LABEL_37:
  _R11 = &v54;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
CG_Players_AddFirstPersonBodyModelsToScene
==============
*/
void CG_Players_AddFirstPersonBodyModelsToScene(LocalClientNum_t localClientNum, centity_t *cent, DObj *playerShadowDObj, unsigned int renderFlags, const vec3_t *lightingOrigin, unsigned int emissiveMaterialData, bool drawLegs, bool drawShadow)
{
  const dvar_t *v18; 
  const DObj *ClientDObj; 
  DObj *v20; 
  unsigned int v22; 
  DObj *v23; 
  unsigned int v25; 
  const dvar_t *v26; 
  CgStatic *LocalClientStatics; 
  const XAnimTree *Tree; 
  __int64 v54; 
  void (__fastcall *v65)(const vec4_t *, vec3_t *); 
  cpose_t *ViewModelPoseForHand; 
  int v69; 
  const HudOutlineDef *HudOutlineDef; 
  int outlineWidth; 
  const dvar_t *v73; 
  unsigned int v87; 
  const dvar_t *v88; 
  float fmt; 
  float v92; 
  float v93; 
  vec3_t outOrigin; 
  unsigned int v95; 
  float characterEVOffset; 
  GfxSceneHudOutlineInfo v97; 
  DObj *obj; 
  const vec3_t *v99; 
  void (__fastcall *functionPointer)(const vec3_t *, vec4_t *); 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  void (__fastcall *Origin)(const vec3_t *, vec4_t *); 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 
  vec3_t v104; 
  shaderOverride_t v105; 
  __int64 v106; 
  vec3_t inOrigin; 
  vec3_t playerViewOrigin; 
  char v109; 
  void *retaddr; 

  _RAX = &retaddr;
  v106 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  v95 = renderFlags;
  obj = playerShadowDObj;
  v99 = lightingOrigin;
  _R13 = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:NULL_HUDOUTLINE_INFO_5.color
    vmovups [rbp+0B0h+var_D0], ymm0
    vmovups [rsp+1B0h+var_140], ymm0
  }
  characterEVOffset = NULL_HUDOUTLINE_INFO_5.characterEVOffset;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 684, ASSERT_TYPE_ASSERT, "(cent != 0)", (const char *)&queryFormat, "cent != NULL") )
    __debugbreak();
  if ( !playerShadowDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 685, ASSERT_TYPE_ASSERT, "(playerShadowDObj != 0)", (const char *)&queryFormat, "playerShadowDObj != NULL") )
    __debugbreak();
  if ( drawLegs || drawShadow )
  {
    v18 = DCONST_DVARMPSPBOOL_cg_drawPlayerAlways;
    if ( !DCONST_DVARMPSPBOOL_cg_drawPlayerAlways && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerAlways") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled || (unsigned int)(_R13->predictedPlayerState.pm_type - 2) > 1 )
    {
      cent->pose.player.control->tag_origin_offset.v[2] = 0.0;
      ClientDObj = Com_GetClientDObj(2114, localClientNum);
      v20 = (DObj *)ClientDObj;
      *(_QWORD *)outOrigin.v = ClientDObj;
      __asm { vxorps  xmm7, xmm7, xmm7 }
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
          DObjCloneAnimTree(v20, Tree);
          DObjClearSkel(v20);
          _RSI = &CG_GetLocalClientGlobals(localClientNum)->firstPersonLegsPose;
          __asm
          {
            vmovups xmm6, xmmword ptr [rsi+84h]
            vmovsd  xmm8, qword ptr [rsi+94h]
          }
          CG_GetPoseOrigin(_RSI, &v104);
          functionPointer = ObfuscateSetFunctionPointer_origin(_RSI->origin.Set_origin, _RSI);
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(_RSI->origin.Get_origin, _RSI);
          Origin = ObfuscateSetFunctionPointer_prevOrigin(_RSI->prevOrigin.Set_prevOrigin, _RSI);
          FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(_RSI->prevOrigin.Get_prevOrigin, _RSI);
          _RCX = _RSI;
          _RDX = cent;
          v54 = 2i64;
          do
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rdx]
              vmovups xmmword ptr [rcx], xmm0
              vmovups xmm1, xmmword ptr [rdx+10h]
              vmovups xmmword ptr [rcx+10h], xmm1
              vmovups xmm0, xmmword ptr [rdx+20h]
              vmovups xmmword ptr [rcx+20h], xmm0
              vmovups xmm1, xmmword ptr [rdx+30h]
              vmovups xmmword ptr [rcx+30h], xmm1
              vmovups xmm0, xmmword ptr [rdx+40h]
              vmovups xmmword ptr [rcx+40h], xmm0
              vmovups xmm1, xmmword ptr [rdx+50h]
              vmovups xmmword ptr [rcx+50h], xmm1
              vmovups xmm0, xmmword ptr [rdx+60h]
              vmovups xmmword ptr [rcx+60h], xmm0
            }
            _RCX = (cpose_t *)((char *)_RCX + 128);
            __asm
            {
              vmovups xmm1, xmmword ptr [rdx+70h]
              vmovups xmmword ptr [rcx-10h], xmm1
            }
            _RDX = (centity_t *)((char *)_RDX + 128);
            --v54;
          }
          while ( v54 );
          __asm
          {
            vmovups xmm0, xmmword ptr [rdx]
            vmovups xmmword ptr [rcx], xmm0
            vmovups xmm1, xmmword ptr [rdx+10h]
            vmovups xmmword ptr [rcx+10h], xmm1
          }
          _RSI->origin.Set_origin = NULL;
          _RSI->origin.Get_origin = NULL;
          _RSI->prevOrigin.Set_prevOrigin = NULL;
          _RSI->prevOrigin.Get_prevOrigin = NULL;
          _RSI->origin.Set_origin = ObfuscateSetFunctionPointer_origin(functionPointer, _RSI);
          _RSI->origin.Get_origin = ObfuscateGetFunctionPointer_origin(FunctionPointer_origin, _RSI);
          _RSI->prevOrigin.Set_prevOrigin = ObfuscateSetFunctionPointer_prevOrigin(Origin, _RSI);
          _RSI->prevOrigin.Get_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(FunctionPointer_prevOrigin, _RSI);
          CG_GetPoseOrigin(&cent->pose, &inOrigin);
          CG_SetPoseOrigin(_RSI, &inOrigin);
          if ( cent->pose.prevOrigin.Get_prevOrigin == (void (__fastcall *)(const vec4_t *, vec3_t *))(unsigned __int8)v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 568, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Get_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Get_prevOrigin") )
            __debugbreak();
          v65 = ObfuscateGetFunctionPointer_prevOrigin(cent->pose.prevOrigin.Get_prevOrigin, &cent->pose);
          v65(&cent->pose.prevOrigin.prevOrigin, &inOrigin);
          CG_SetPrevPoseOrigin(_RSI, &inOrigin);
          memset(&inOrigin, 0, sizeof(inOrigin));
          CG_GetPoseOrigin(_RSI, &inOrigin);
          XAnimBonePhysicsSetDObjMatrix(v20, &inOrigin, &_RSI->angles);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [r13+65E4h]
            vmulss  xmm1, xmm0, cs:__real@3a83126f; deltaTime
          }
          XAnimBonePhysicsUpdateTime(v20, *(float *)&_XMM1);
          memset(&inOrigin, 0, sizeof(inOrigin));
          BG_Player_SetPlayerInfo(v20, (clientControllers_t *)(*(_QWORD *)playerViewOrigin.v + 2812i64), (CEntPlayerInfo *)&_RSI->160);
          CG_SetPrevPoseOrigin(_RSI, &v104);
          __asm
          {
            vmovups xmmword ptr [rsi+84h], xmm6
            vmovsd  qword ptr [rsi+94h], xmm8
          }
          if ( CG_Cloth_Legs_ShouldCreateCloth(localClientNum, v20) )
            CG_Cloth_Legs_SetupModel(localClientNum, _RSI, v20);
          ViewModelPoseForHand = CG_GetViewModelPoseForHand(localClientNum, WEAPON_HAND_DEFAULT);
          CG_Players_AdjustLegsModelToHideUpperBody(v20, ViewModelPoseForHand, _R13->firstPersonLegsAdjustmentBoneIndices);
          CG_Ladder_SetLegsPose(localClientNum, &_R13->predictedPlayerState, _RSI);
          if ( (*(_DWORD *)&_R13->predictedPlayerState.outlineData.viewmodel & 0x3F) != 0 )
          {
            v69 = _R13->time - _R13->predictedPlayerState.deltaTime;
            HudOutlineDef = BG_GetHudOutlineDef(*(_DWORD *)&_R13->predictedPlayerState.outlineData.viewmodel & 0x3F);
            __asm
            {
              vmovss  dword ptr [rbp+0B0h+inOrigin], xmm7
              vmovss  dword ptr [rbp+0B0h+inOrigin+4], xmm7
              vmovss  dword ptr [rbp+0B0h+inOrigin+8], xmm7
              vmovss  dword ptr [rbp+0B0h+playerViewOrigin], xmm7
              vmovss  dword ptr [rbp+0B0h+playerViewOrigin+4], xmm7
              vmovss  dword ptr [rbp+0B0h+playerViewOrigin+8], xmm7
            }
            v97.color = BG_HudOutline_GetColor(HudOutlineDef, _R13->hudOutlineStartTime, v69, &playerViewOrigin, &inOrigin);
            v97.drawOccludedPixels = HudOutlineDef->drawOccludedPixels;
            v97.drawNonOccludedPixels = HudOutlineDef->drawNonOccludedPixels;
            outlineWidth = HudOutlineDef->outlineWidth;
            if ( (outlineWidth < 0 || (unsigned int)outlineWidth > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)outlineWidth, "signed", outlineWidth) )
              __debugbreak();
            v97.lineWidth = outlineWidth;
            v97.renderMode = HudOutlineDef->outlineType;
            v97.fill = HudOutlineDef->drawFill;
            __asm
            {
              vmovups ymm0, [rsp+1B0h+var_140]
              vmovups [rbp+0B0h+var_D0], ymm0
            }
          }
          v73 = DCONST_DVARMPSPBOOL_cg_drawPlayerAlways;
          if ( !DCONST_DVARMPSPBOOL_cg_drawPlayerAlways && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerAlways") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v73);
          if ( v73->current.enabled && (unsigned int)(_R13->predictedPlayerState.pm_type - 2) <= 1 )
          {
            __asm { vmovss  xmm6, dword ptr [r13+65E0h] }
            _RCX = _R13->nextPs;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+30h]
              vsubss  xmm1, xmm0, dword ptr [rax+30h]
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm3, xmm2, dword ptr [rax+30h]
              vmovss  dword ptr [rbp+0B0h+inOrigin], xmm3
              vmovss  xmm0, dword ptr [rcx+34h]
              vsubss  xmm1, xmm0, dword ptr [rax+34h]
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm3, xmm2, dword ptr [rax+34h]
              vmovss  dword ptr [rbp+0B0h+inOrigin+4], xmm3
              vmovss  xmm0, dword ptr [rcx+38h]
              vsubss  xmm1, xmm0, dword ptr [rax+38h]
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm3, xmm2, dword ptr [rax+38h]
              vmovss  dword ptr [rbp+0B0h+inOrigin+8], xmm3
            }
            CG_SetPoseOrigin(_RSI, &inOrigin);
            memset(&inOrigin, 0, sizeof(inOrigin));
          }
          v87 = v95 | 0x28;
          v88 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
          if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v88);
          if ( v88->current.enabled && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R13->predictedPlayerState.pm_flags, ACTIVE, 6u) )
            v87 = v95 & 0xFFFFFFD6 | 0x28;
          __asm
          {
            vmovups ymm0, [rbp+0B0h+var_D0]
            vmovups [rsp+1B0h+var_140], ymm0
          }
          v97.characterEVOffset = characterEVOffset;
          __asm
          {
            vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_4.scrollRateX
            vmovups [rbp+0B0h+var_D0], ymm0
          }
          v105.atlasTime = NULL_SHADER_OVERRIDE_4.atlasTime;
          v22 = emissiveMaterialData;
          __asm { vmovss  dword ptr [rsp+1B0h+var_170], xmm7 }
          CG_Entity_AddDObjToScene(localClientNum, *(const DObj **)outOrigin.v, _RSI, 0x842u, v87, &v105, &v97, v99, v93, emissiveMaterialData);
          memset(&v104, 0, sizeof(v104));
          goto LABEL_20;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 714, ASSERT_TYPE_ASSERT, "( legsDObjValid )", "Trying to submit invalid player legs dobj to render. (DObjVerifyNumBones failed)") )
          __debugbreak();
      }
      v22 = emissiveMaterialData;
LABEL_20:
      if ( drawShadow )
      {
        v23 = obj;
        DObjClearSkel(obj);
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        *(double *)&_XMM0 = DObjGetRadius(v23);
        __asm { vmovaps xmm3, xmm0; radius }
        v25 = R_LinkDObjEntity_NoCull(localClientNum, cent->nextState.clientNum, &outOrigin, *(float *)&_XMM3);
        cent->flags |= 0x80000u;
        *(double *)&_XMM0 = DObjGetRadius(v23);
        __asm { vmovss  dword ptr [rsp+1B0h+fmt], xmm0 }
        CG_Entity_CheckLightCount(cent->nextState.clientNum, v23, v25, &outOrigin, fmt);
        v26 = DCONST_DVARMPSPBOOL_cg_drawPlayerAlways;
        if ( !DCONST_DVARMPSPBOOL_cg_drawPlayerAlways && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerAlways") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        if ( v26->current.enabled && (unsigned int)(_R13->predictedPlayerState.pm_type - 2) <= 1 )
        {
          __asm { vmovss  xmm6, dword ptr [r13+65E0h] }
          _RCX = _R13->nextPs;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+30h]
            vsubss  xmm1, xmm0, dword ptr [rax+30h]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rax+30h]
            vmovss  dword ptr [rsp+1B0h+outOrigin], xmm3
            vmovss  xmm0, dword ptr [rcx+34h]
            vsubss  xmm1, xmm0, dword ptr [rax+34h]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rax+34h]
            vmovss  dword ptr [rsp+1B0h+outOrigin+4], xmm3
            vmovss  xmm0, dword ptr [rcx+38h]
            vsubss  xmm1, xmm0, dword ptr [rax+38h]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rax+38h]
            vmovss  dword ptr [rsp+1B0h+outOrigin+8], xmm3
          }
          CG_SetPoseOrigin(&cent->pose, &outOrigin);
        }
        __asm
        {
          vmovups ymm0, ymmword ptr cs:NULL_HUDOUTLINE_INFO_5.color
          vmovups [rsp+1B0h+var_140], ymm0
        }
        v97.characterEVOffset = NULL_HUDOUTLINE_INFO_5.characterEVOffset;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_4.scrollRateX
          vmovups [rbp+0B0h+var_D0], ymm0
        }
        v105.atlasTime = NULL_SHADER_OVERRIDE_4.atlasTime;
        __asm { vmovss  dword ptr [rsp+1B0h+var_170], xmm7 }
        CG_Entity_AddDObjToScene(localClientNum, v23, &cent->pose, cent->nextState.clientNum, v95 | 0x8004, &v105, &v97, v99, v92, v22);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
    }
  }
  _R11 = &v109;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
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
  unsigned int v10; 
  const unsigned __int8 *v13; 
  __int64 v14; 
  vec3_t axis; 
  vec4_t modelToWorldQuat; 
  DObjPartBits partBits; 
  vec4_t v35; 
  vec4_t modelAdjustmentQuat; 
  vec4_t quat; 

  __asm { vmovaps [rsp+120h+var_40], xmm6 }
  if ( !legsDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 235, ASSERT_TYPE_ASSERT, "(legsDObj != 0)", (const char *)&queryFormat, "legsDObj != NULL") )
    __debugbreak();
  if ( !legsPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 236, ASSERT_TYPE_ASSERT, "(legsPose != 0)", (const char *)&queryFormat, "legsPose != NULL") )
    __debugbreak();
  if ( !adjustmentBoneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 237, ASSERT_TYPE_ASSERT, "(adjustmentBoneIndices != 0)", (const char *)&queryFormat, "adjustmentBoneIndices != NULL") )
    __debugbreak();
  v10 = 0;
  legsPose->coverWall.coverGrid[2] = -1;
  _RDI = &partBits;
  __asm { vpxor   xmm6, xmm6, xmm6 }
  do
  {
    __asm { vmovdqu xmmword ptr [rdi], xmm6 }
    _RDI = (DObjPartBits *)((char *)_RDI + 16);
    ++v10;
  }
  while ( v10 < 2 );
  v13 = adjustmentBoneIndices;
  v14 = 7i64;
  do
  {
    if ( *v13 != 0xFF )
      partBits.array[(unsigned __int64)*v13 >> 5] |= 0x80000000 >> (*v13 & 0x1F);
    ++v13;
    --v14;
  }
  while ( v14 );
  DObjLock(legsDObj);
  if ( !CL_Pose_DObjCreateSkelForBones(legsDObj, &partBits) )
  {
    _RBX = DCONST_DVARFLT_cg_playerLegsSpineLowAngle;
    __asm
    {
      vmovaps [rsp+120h+var_50], xmm8
      vmovaps [rsp+120h+var_60], xmm9
      vmovss  xmm0, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vmovss  dword ptr [rsp+120h+axis], xmm1
      vmovss  dword ptr [rsp+120h+axis+4], xmm0
      vmovss  dword ptr [rsp+120h+axis+8], xmm1
    }
    if ( !DCONST_DVARFLT_cg_playerLegsSpineLowAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLegsSpineLowAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_cg_playerLegsSpineMidAngle;
    __asm { vmulss  xmm8, xmm0, cs:__real@3c8efa35 }
    if ( !DCONST_DVARFLT_cg_playerLegsSpineMidAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLegsSpineMidAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_cg_playerLegsArmsAngle;
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3c8efa35
      vaddss  xmm9, xmm1, xmm8
    }
    if ( !DCONST_DVARFLT_cg_playerLegsArmsAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLegsArmsAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+28h]
      vmovaps xmm0, xmm8; radians
    }
    AngleRadAxisToQuat(*(float *)&_XMM0, &axis, &quat);
    __asm { vmovaps xmm0, xmm9; radians }
    AngleRadAxisToQuat(*(float *)&_XMM0, &axis, &modelAdjustmentQuat);
    __asm { vmulss  xmm0, xmm6, cs:__real@3c8efa35; radians }
    AngleRadAxisToQuat(*(float *)&_XMM0, &axis, &v35);
    AnglesToQuat(&legsPose->angles, &modelToWorldQuat);
    CG_Players_AdjustBoneRelativeToBasePose(legsDObj, &partBits, *adjustmentBoneIndices, &quat, &modelToWorldQuat);
    CG_Players_AdjustBoneRelativeToBasePose(legsDObj, &partBits, adjustmentBoneIndices[1], &modelAdjustmentQuat, &modelToWorldQuat);
    CG_Players_AdjustBoneRelativeToBasePose(legsDObj, &partBits, adjustmentBoneIndices[2], &modelAdjustmentQuat, &modelToWorldQuat);
    CG_Players_AdjustBoneRelativeToBasePose(legsDObj, &partBits, adjustmentBoneIndices[3], &v35, &modelToWorldQuat);
    CG_Players_AdjustBoneRelativeToBasePose(legsDObj, &partBits, adjustmentBoneIndices[4], &v35, &modelToWorldQuat);
    CG_Players_AdjustBoneRelativeToBasePose(legsDObj, &partBits, adjustmentBoneIndices[5], &v35, &modelToWorldQuat);
    CG_Players_AdjustBoneRelativeToBasePose(legsDObj, &partBits, adjustmentBoneIndices[6], &v35, &modelToWorldQuat);
    __asm
    {
      vmovaps xmm9, [rsp+120h+var_60]
      vmovaps xmm8, [rsp+120h+var_50]
    }
  }
  DObjUnlock(legsDObj);
  __asm { vmovaps xmm6, [rsp+120h+var_40] }
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
  unsigned int refdefViewOrg_aab; 
  const dvar_t *v20; 
  unsigned int Animset; 
  unsigned int Anim; 
  int IsLadderAlias; 
  SuitAnimType SuitAnimIndexFromPlayerState; 
  int legsAnim; 
  const dvar_t *v35; 
  const dvar_t *v38; 
  CgHandler *Handler; 
  vec3_t inOrigin; 
  int v69[3]; 
  __int64 v70; 
  vec3_t inOutViewOrigin; 
  tmat33_t<vec3_t> axis; 
  WorldUpReferenceFrame v73; 
  char v74; 
  void *retaddr; 

  _RAX = &retaddr;
  v70 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _RSI = ps;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !CG_Player_AlignPlayerModelForScriptLink(_RBX, cent) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+38h]
      vmovss  dword ptr [rsp+150h+inOrigin], xmm0
      vmovss  xmm1, dword ptr [rbx+3Ch]
      vmovss  dword ptr [rsp+150h+inOrigin+4], xmm1
      vmovss  xmm0, dword ptr [rbx+40h]
      vmovss  dword ptr [rsp+150h+inOrigin+8], xmm0
    }
    if ( _RBX == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = _RBX->refdef.view.refdefViewOrg_aab;
    if ( _RBX == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v69[0] = LODWORD(_RBX->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26936)) + 2));
    v69[1] = LODWORD(_RBX->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26940)) + 2));
    v69[2] = LODWORD(_RBX->refdef.view.org.org.v[2]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)_RBX + 26944)) + 2));
    __asm
    {
      vmovsd  xmm0, qword ptr [rsi+30h]
      vmovsd  qword ptr [rsp+150h+inOutViewOrigin], xmm0
    }
    inOutViewOrigin.v[2] = _RSI->origin.v[2];
    if ( !CG_View_AddViewHeight(localClientNum, &inOutViewOrigin) )
    {
      memset(v69, 0, sizeof(v69));
LABEL_37:
      memset(&inOrigin, 0, sizeof(inOrigin));
      goto LABEL_38;
    }
    __asm
    {
      vmovss  xmm0, [rsp+150h+var_F8]
      vsubss  xmm1, xmm0, dword ptr [rsp+150h+inOutViewOrigin+8]
    }
    memset(v69, 0, sizeof(v69));
    __asm
    {
      vaddss  xmm1, xmm1, dword ptr [rsp+150h+inOrigin+8]
      vmovss  dword ptr [rsp+150h+inOrigin+8], xmm1
    }
    v20 = DVARBOOL_killswitch_view_legs_misprediction_fix_enabled;
    if ( !DVARBOOL_killswitch_view_legs_misprediction_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_view_legs_misprediction_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+150h+inOrigin]
        vaddss  xmm1, xmm0, dword ptr [rbx+53CCh]
        vmovss  dword ptr [rsp+150h+inOrigin], xmm1
        vmovss  xmm2, dword ptr [rsp+150h+inOrigin+4]
        vaddss  xmm0, xmm2, dword ptr [rbx+53D0h]
        vmovss  dword ptr [rsp+150h+inOrigin+4], xmm0
        vmovss  xmm1, dword ptr [rsp+150h+inOrigin+8]
        vaddss  xmm2, xmm1, dword ptr [rbx+53D4h]
        vmovss  dword ptr [rsp+150h+inOrigin+8], xmm2
      }
    }
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm9, xmm9, xmm9
    }
    _RDI = DCONST_DVARFLT_cg_playerLegsOffset;
    if ( !DCONST_DVARFLT_cg_playerLegsOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLegsOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm7, dword ptr [rdi+28h] }
    if ( PlayerASM_IsEnabled() )
    {
      Animset = BG_PlayerASM_GetAnimset(_RSI);
      Anim = BG_PlayerASM_GetAnim(_RSI, MOVEMENT);
      if ( Anim )
      {
        IsLadderAlias = BG_PlayerASM_IsLadderAlias(Anim, Animset);
        goto LABEL_23;
      }
    }
    else
    {
      SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(_RSI);
      legsAnim = _RSI->legsAnim;
      if ( legsAnim )
      {
        IsLadderAlias = BG_IsLadderAnim(legsAnim, SuitAnimIndexFromPlayerState);
LABEL_23:
        if ( IsLadderAlias )
        {
          __asm { vxorps  xmm7, xmm7, xmm7 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerLegsOffsetLadder, "cg_playerLegsOffsetLadder");
          __asm { vmovaps xmm9, xmm0 }
        }
      }
    }
    v35 = DCONST_DVARBOOL_cg_playerLegsOffsetEnableRadiusClamp;
    if ( !DCONST_DVARBOOL_cg_playerLegsOffsetEnableRadiusClamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLegsOffsetEnableRadiusClamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    if ( v35->current.enabled )
    {
      *(double *)&_XMM0 = BG_Suit_GetBoundsRadius(_RSI);
      __asm
      {
        vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000; min
        vmovaps xmm2, xmm0; max
        vmovaps xmm0, xmm7; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm7, xmm0 }
    }
    v38 = DCONST_DVARBOOL_cg_disable_playerLegsOffset_fov_comp;
    if ( !DCONST_DVARBOOL_cg_disable_playerLegsOffset_fov_comp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_disable_playerLegsOffset_fov_comp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    if ( !v38->current.enabled && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 6u) )
    {
      *(double *)&_XMM0 = CG_View_CalcFovCompensation(_RBX);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerLegsOffset_fovComp_forward, "cg_playerLegsOffset_fovComp_forward");
      __asm
      {
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm7, xmm7, xmm1
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerLegsOffset_fovComp_right, "cg_playerLegsOffset_fovComp_right");
      __asm
      {
        vmulss  xmm1, xmm0, xmm6
        vxorps  xmm8, xmm1, cs:__xmm@80000000800000008000000080000000
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerLegsOffset_fovComp_up, "cg_playerLegsOffset_fovComp_up");
      __asm
      {
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm9, xmm9, xmm1
      }
    }
    __asm { vmovss  xmm0, dword ptr [rsi+1DCh]; yaw }
    YawToAxis(*(float *)&_XMM0, &axis);
    Handler = CgHandler::getHandler(localClientNum);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v73, _RSI, Handler, 1);
    WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v73, &axis);
    __asm
    {
      vmulss  xmm3, xmm8, dword ptr [rbp+50h+axis+0Ch]
      vmulss  xmm2, xmm7, dword ptr [rbp+50h+axis]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm1, xmm9, dword ptr [rbp+50h+axis+18h]
      vaddss  xmm3, xmm4, xmm1
      vaddss  xmm0, xmm3, dword ptr [rsp+150h+inOrigin]
      vmovss  dword ptr [rsp+150h+inOrigin], xmm0
      vmulss  xmm3, xmm8, dword ptr [rbp+50h+axis+10h]
      vmulss  xmm2, xmm7, dword ptr [rbp+50h+axis+4]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm0, xmm9, dword ptr [rbp+50h+axis+1Ch]
      vaddss  xmm3, xmm4, xmm0
      vaddss  xmm1, xmm3, dword ptr [rsp+150h+inOrigin+4]
      vmovss  dword ptr [rsp+150h+inOrigin+4], xmm1
      vmulss  xmm3, xmm8, dword ptr [rbp+50h+axis+14h]
      vmulss  xmm2, xmm7, dword ptr [rbp+50h+axis+8]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm1, xmm9, dword ptr [rbp+50h+axis+20h]
      vaddss  xmm3, xmm4, xmm1
      vaddss  xmm0, xmm3, dword ptr [rsp+150h+inOrigin+8]
      vmovss  dword ptr [rsp+150h+inOrigin+8], xmm0
    }
    CG_SetPoseOrigin(&cent->pose, &inOrigin);
    goto LABEL_37;
  }
LABEL_38:
  _R11 = &v74;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
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
  unsigned __int8 v13; 
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
      __asm { vmovdqu xmm0, cs:__xmm@0000000000000000000000000000000c }
      v13 = *(_BYTE *)(v11 + 133);
      __asm { vmovdqu xmmword ptr [rsp+0A8h+outBuffer], xmm0 }
      Com_PlayerUtils_ColorizeClanTag((const char *)(v11 + 124), v13, outBuffer, 0x10ui64, 0x37u);
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
  unsigned __int8 v13; 
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
      __asm { vmovdqu xmm0, cs:__xmm@0000000000000000000000000000000c }
      v13 = *(_BYTE *)(v11 + 133);
      __asm { vmovdqu xmmword ptr [rsp+0B8h+outBuffer], xmm0 }
      Com_PlayerUtils_ColorizeClanTag((const char *)(v11 + 124), v13, outBuffer, 0x10ui64, 0x37u);
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
  int vehicleEntryFirstSnapTime; 
  int serverTime; 
  animScriptVehicleSeat_t outVehicleSeat; 
  animScriptVehicleType_t outVehicleType; 
  vec3_t viewAngles; 
  vec3_t outLinkAngles; 
  vec3_t inOrigin; 

  _RDI = cent;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 389, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 390, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( _RDI == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = _RDI->nextState.eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 391, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &cent->nextState )") )
    __debugbreak();
  localClientNum = cgameGlob->localClientNum;
  CharacterInfo = CG_GetCharacterInfo(cgameGlob, _RDI->nextState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 396, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  number = _RDI->nextState.number;
  clientNum = cgameGlob->predictedPlayerState.clientNum;
  if ( BG_IsPlayingVehicleOccupancyAnims(CharacterInfo) && CharacterInfo->linkedEntNum > 0 )
  {
    Handler = CgHandler::getHandler(localClientNum);
    LinkedVehicle = BG_VehicleOccupancy_GetLinkedVehicle(Handler, &_RDI->nextState, CharacterInfo, &outVehicleType, &outVehicleSeat);
    if ( LinkedVehicle != 2047 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+48h]
        vmovss  xmm1, dword ptr [rdi+4Ch]
        vmovss  dword ptr [rsp+0A8h+viewAngles], xmm0
        vmovss  xmm0, dword ptr [rdi+50h]
        vmovss  dword ptr [rsp+0A8h+viewAngles+4], xmm1
        vmovss  dword ptr [rsp+0A8h+viewAngles+8], xmm0
      }
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
        CG_SetPoseOrigin(&_RDI->pose, &inOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0A8h+var_50]
          vmovss  xmm1, dword ptr [rsp+0A8h+var_50+4]
          vmovss  dword ptr [rdi+48h], xmm0
          vmovss  xmm0, dword ptr [rsp+0A8h+var_50+8]
          vmovss  dword ptr [rdi+50h], xmm0
          vmovss  dword ptr [rdi+4Ch], xmm1
        }
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
  centity_t *Entity; 
  const DObj *ClientDObj; 
  tmat33_t<vec3_t> outTagMat; 

  _RBX = outWorldPosition;
  _RDI = headIconExtendedView;
  if ( !headIcon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1535, ASSERT_TYPE_ASSERT, "(headIcon)", (const char *)&queryFormat, "headIcon") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1536, ASSERT_TYPE_ASSERT, "(headIconExtendedView)", (const char *)&queryFormat, "headIconExtendedView") )
    __debugbreak();
  if ( _RDI->hasWorldOrigin )
  {
    _RBX->v[0] = _RDI->worldOrigin.v[0];
    _RBX->v[1] = _RDI->worldOrigin.v[1];
    result = 1;
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rbx+8], xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rsi+14h]
      vaddss  xmm1, xmm0, xmm1
      vmovss  dword ptr [rbx+8], xmm1
    }
  }
  else if ( headIcon->entityNumber == 2047 || !CG_Entity_CanUseDObj(localClientNum, headIcon->entityNumber) )
  {
    return 0;
  }
  else
  {
    Entity = CG_GetEntity(localClientNum, headIcon->entityNumber);
    CG_GetPoseOrigin(&Entity->pose, _RBX);
    ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
    if ( ClientDObj )
      CG_DObjGetWorldTagMatrix(&Entity->pose, ClientDObj, scr_const.j_head, &outTagMat, _RBX);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rsi+14h]
      vaddss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm1
    }
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
  unsigned int clientNum; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1289, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v4 = DCONST_DVARBOOL_stepBlendActive;
  if ( !DCONST_DVARBOOL_stepBlendActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stepBlendActive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    _RBX = CG_GetLocalClientGlobals(localClientNum);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1297, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    clientNum = cent->nextState.clientNum;
    if ( _RBX->clientNum != clientNum && _RBX->HasCharacterInfo(_RBX, clientNum) )
    {
      _RAX = CG_GetCharacterInfo(_RBX, clientNum);
      if ( _RAX )
      {
        if ( _RAX->infoValid )
        {
          __asm
          {
            vmovss  xmm3, dword ptr [rbx+65E0h]
            vmovss  xmm0, cs:__real@3f800000
            vsubss  xmm1, xmm0, xmm3
            vmulss  xmm2, xmm1, dword ptr [rax+38D8h]
            vmulss  xmm0, xmm3, dword ptr [rax+38DCh]
            vaddss  xmm1, xmm2, xmm0
            vmovss  dword ptr [rax+38E0h], xmm1
          }
        }
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
  CgStatic *v11; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  __int64 SuitAnimIndex; 
  int LegsAnimation; 
  const BgAnimStatic *v16; 
  PlayerAnimScript *v17; 
  signed int v18; 
  int XAnimIndex; 
  unsigned int legsPredictingForThisAnim; 
  unsigned int v21; 
  PlayerAnimEntry *animations; 
  unsigned __int8 syncGroup; 
  const DObj *ClientDObj; 
  const XAnimTree *Tree; 
  const XAnim_s *Anims; 
  char v32; 
  __int64 v35; 

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
  v11 = LocalClientStatics;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1026, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  SuitAnimIndex = BG_AnimationMP_GetSuitAnimIndex(p_nextState);
  LegsAnimation = BG_AnimationMP_GetLegsAnimation(p_nextState);
  if ( BG_IsTransitionalAnim(LegsAnimation, (SuitAnimType)SuitAnimIndex) )
  {
    v16 = v11->GetAnimStatics(v11);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1040, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v17 = v16->animScriptData.suitScript[SuitAnimIndex];
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1043, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
      __debugbreak();
    v18 = LegsAnimation & 0xFFFFEFFF;
    XAnimIndex = BG_AnimationMP_GetXAnimIndex(v16, (const SuitAnimType)SuitAnimIndex, v18);
    legsPredictingForThisAnim = CharacterInfo->legsPredictingForThisAnim;
    v21 = XAnimIndex;
    if ( legsPredictingForThisAnim == v18 )
      goto LABEL_47;
    if ( legsPredictingForThisAnim )
    {
      if ( legsPredictingForThisAnim >= v17->animationCount )
      {
        LODWORD(v35) = CharacterInfo->legsPredictingForThisAnim;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1054, ASSERT_TYPE_ASSERT, "(unsigned)( ci->legsPredictingForThisAnim ) < (unsigned)( playerAnim->animationCount )", "ci->legsPredictingForThisAnim doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v35, v17->animationCount) )
          __debugbreak();
      }
      animations = v17->animations;
      syncGroup = animations[CharacterInfo->legsPredictingForThisAnim].syncGroup;
      if ( syncGroup )
      {
        if ( syncGroup == animations[v18].syncGroup )
          goto LABEL_47;
      }
    }
    if ( legsPredictingForThisAnim == v18 )
    {
LABEL_47:
      if ( CG_PredictTransitionalExitCharacterAnim(p_nextState, CharacterInfo) )
      {
        CharacterInfo->legsPredictingForThisAnim = v18;
        return;
      }
    }
    else
    {
      __asm
      {
        vmovaps [rsp+88h+var_38], xmm6
        vmovaps [rsp+88h+var_48], xmm7
      }
      ClientDObj = Com_GetClientDObj(p_nextState->number, localClientNum);
      Tree = DObjGetTree(ClientDObj);
      if ( !Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1066, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
        __debugbreak();
      *(double *)&_XMM0 = XAnimGetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, v21);
      __asm { vmovaps xmm6, xmm0 }
      Anims = XAnimGetAnims(Tree);
      *(double *)&_XMM0 = XAnimGetLength(Anims, v21);
      __asm
      {
        vmovss  xmm7, cs:__real@3f800000
        vsubss  xmm1, xmm7, xmm6
        vmulss  xmm6, xmm0, xmm1
      }
      *(double *)&_XMM0 = XAnimGetRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v21);
      __asm
      {
        vcomiss xmm0, xmm7
        vmovaps xmm7, [rsp+88h+var_48]
      }
      if ( v32 )
      {
        __asm
        {
          vmulss  xmm0, xmm0, cs:__real@3d4ccccd
          vcomiss xmm0, xmm6
        }
      }
      else
      {
        __asm { vcomiss xmm6, cs:__real@3d4ccccd }
      }
      __asm { vmovaps xmm6, [rsp+88h+var_38] }
    }
  }
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
  unsigned int v16; 
  CgPlayer_Asm *v17; 
  scr_string_t StateNameFromIndex; 
  ASM *AssetBySuit; 
  ASM_State *StateByName; 
  const DObj *ClientDObj; 
  const XAnimTree *Tree; 
  bool ShouldSyncAnims; 
  unsigned int DescendantWithGreatest; 
  bool v31; 
  char v32; 
  _BOOL8 result; 
  unsigned int outAnimState; 
  unsigned int pOutGraftIndex; 
  unsigned int outAnimEntry; 
  XAnim_s *anims; 
  ASM_State *state; 
  ASM *asmAsset; 
  __int64 v43; 
  void *retaddr; 
  unsigned int inOutTimer; 
  XAnimSubTreeID pOutSubtreeID; 
  unsigned int pOutAnimIndex; 

  _RAX = &retaddr;
  v43 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
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
  v16 = Anim;
  if ( !Anim )
    goto LABEL_51;
  BG_PlayerASM_UnpackAnim(Animset, Anim, &outAnimState, &outAnimEntry);
  v17 = CgPlayer_Asm::Singleton(localClientNum);
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1171, ASSERT_TYPE_ASSERT, "(playerASM)", (const char *)&queryFormat, "playerASM") )
    __debugbreak();
  StateNameFromIndex = BG_PlayerASM_GetStateNameFromIndex(Animset, outAnimState);
  if ( !StateNameFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1174, ASSERT_TYPE_ASSERT, "(stateName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "stateName != NULL_SCR_STRING") )
    __debugbreak();
  AssetBySuit = (ASM *)BgPlayer_Asm::GetAssetBySuit(v17, CharacterInfo->suitIndex);
  asmAsset = AssetBySuit;
  if ( !AssetBySuit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1177, ASSERT_TYPE_ASSERT, "(asmAsset)", (const char *)&queryFormat, "asmAsset") )
    __debugbreak();
  StateByName = (ASM_State *)BgPlayer_Asm::GetStateByName(v17, AssetBySuit, StateNameFromIndex);
  state = StateByName;
  if ( !StateByName || (StateByName->m_Flags & 2) == 0 )
    goto LABEL_51;
  ClientDObj = Com_GetClientDObj(p_nextState->number, localClientNum);
  Tree = DObjGetTree(ClientDObj);
  if ( !Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1196, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  ShouldSyncAnims = CharacterInfo->legsPredictingForThisAnim == v16;
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
      *(double *)&_XMM0 = XAnimGetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, DescendantWithGreatest);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@447a0000
        vcvttss2si eax, xmm1
      }
      inOutTimer = 10 * _EAX;
      ShouldSyncAnims = BG_PlayerASM_ShouldSyncAnims(Animset, CharacterInfo->legsPredictingForThisAnim, v16, &inOutTimer);
      if ( ShouldSyncAnims )
        goto LABEL_55;
    }
    *(double *)&_XMM0 = XAnimGetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, DescendantWithGreatest);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = XAnimGetLength(anims, DescendantWithGreatest);
    __asm
    {
      vmovss  xmm7, cs:__real@3f800000
      vsubss  xmm1, xmm7, xmm6
      vmulss  xmm6, xmm0, xmm1
    }
    *(double *)&_XMM0 = XAnimGetRate(Tree, 0, XANIM_SUBTREE_DEFAULT, DescendantWithGreatest);
    __asm { vcomiss xmm0, xmm7 }
    if ( v31 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3d4ccccd
        vcomiss xmm0, xmm6
      }
      ShouldSyncAnims = !(v31 | v32);
    }
    else
    {
      __asm { vcomiss xmm6, cs:__real@3d4ccccd }
      ShouldSyncAnims = v31;
    }
    if ( ShouldSyncAnims )
    {
LABEL_55:
      if ( CG_PredictTransitionalExitPlayerASMAnim(localClientNum, p_nextState, CharacterInfo, v17, Animset, asmAsset, state) )
        CharacterInfo->legsPredictingForThisAnim = v16;
    }
  }
  else
  {
LABEL_51:
    ShouldSyncAnims = 0;
  }
  Sys_ProfEndNamedEvent();
  result = ShouldSyncAnims;
  __asm
  {
    vmovaps xmm6, [rsp+0E8h+var_58]
    vmovaps xmm7, [rsp+0E8h+var_68]
  }
  return result;
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
  float v1[4]; 

  _RBX = outBounds;
  _RDI = cgameGlob;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1265, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_players.cpp", 1266, ASSERT_TYPE_ASSERT, "(outBounds)", (const char *)&queryFormat, "outBounds") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@3a83126f; epsilon
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+58h+v1], xmm0
    vmovss  [rsp+58h+var_24], xmm0
    vmovss  [rsp+58h+var_20], xmm0
  }
  if ( VecNCompareCustomEpsilon(_RDI->playerBox.halfSize.v, v1, *(float *)&_XMM2, 3) )
  {
    _RAX = BG_Suit_GetBounds(_RDI->predictedPlayerState.suitIndex, PM_EFF_STANCE_DEFAULT);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbx], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+6470h]
      vmovups xmmword ptr [rbx], xmm0
      vmovsd  xmm1, qword ptr [rdi+6480h]
    }
  }
  __asm { vmovsd  qword ptr [rbx+10h], xmm1 }
}

