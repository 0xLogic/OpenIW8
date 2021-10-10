/*
==============
CG_Ladder_ProccessNotetracks
==============
*/

void __fastcall CG_Ladder_ProccessNotetracks(LocalClientNum_t localClientNum, scr_string_t noteName)
{
  ?CG_Ladder_ProccessNotetracks@@YAXW4LocalClientNum_t@@W4scr_string_t@@@Z(localClientNum, noteName);
}

/*
==============
CG_Ladder_PlayAudioClient
==============
*/

void __fastcall CG_Ladder_PlayAudioClient(const LocalClientNum_t localClientNum)
{
  ?CG_Ladder_PlayAudioClient@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Ladder_AttachIKMarkers
==============
*/

void __fastcall CG_Ladder_AttachIKMarkers(PlayerHandIndex hand, LocalClientNum_t localClientNum, const XAnimWeaponIKModelsContainer *weaponIKModels, const XAnimIKTagRequest *tagRequest, DObjModel *dobjModels, unsigned __int16 *modelCount)
{
  ?CG_Ladder_AttachIKMarkers@@YAXW4PlayerHandIndex@@W4LocalClientNum_t@@PEBVXAnimWeaponIKModelsContainer@@PEBUXAnimIKTagRequest@@PEAUDObjModel@@PEAG@Z(hand, localClientNum, weaponIKModels, tagRequest, dobjModels, modelCount);
}

/*
==============
CG_Ladder_InterpolateHand
==============
*/

void __fastcall CG_Ladder_InterpolateHand(LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex hand, cpose_t *outPose)
{
  ?CG_Ladder_InterpolateHand@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@W4PlayerHandIndex@@PEAUcpose_t@@@Z(localClientNum, ps, hand, outPose);
}

/*
==============
CG_Ladder_PlayAudioClientEntity
==============
*/

void __fastcall CG_Ladder_PlayAudioClientEntity(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?CG_Ladder_PlayAudioClientEntity@@YAXW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Ladder_ValidateEdges
==============
*/

void __fastcall CG_Ladder_ValidateEdges(LocalClientNum_t localClientNum)
{
  ?CG_Ladder_ValidateEdges@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Ladder_CreateAnims
==============
*/

void __fastcall CG_Ladder_CreateAnims(WeaponXAnim *pAnims)
{
  ?CG_Ladder_CreateAnims@@YAXPEAUWeaponXAnim@@@Z(pAnims);
}

/*
==============
CG_Ladder_GetDepthHackFoV
==============
*/

double __fastcall CG_Ladder_GetDepthHackFoV(const LocalClientNum_t localClientNum, float hackFov, float sceneFov)
{
  double result; 

  *(float *)&result = ?CG_Ladder_GetDepthHackFoV@@YAMW4LocalClientNum_t@@MM@Z(localClientNum, hackFov, sceneFov);
  return result;
}

/*
==============
CG_Ladder_SetClimbParameters
==============
*/

void __fastcall CG_Ladder_SetClimbParameters(WeaponXAnim *pAnims, weapAnimFiles_t climbParentAnim)
{
  ?CG_Ladder_SetClimbParameters@@YAXPEAUWeaponXAnim@@W4weapAnimFiles_t@@@Z(pAnims, climbParentAnim);
}

/*
==============
CG_Ladder_ResetHandInterpolation
==============
*/

void __fastcall CG_Ladder_ResetHandInterpolation(LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex hand)
{
  ?CG_Ladder_ResetHandInterpolation@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@W4PlayerHandIndex@@@Z(localClientNum, ps, hand);
}

/*
==============
CG_Ladder_PlayAnims
==============
*/

void __fastcall CG_Ladder_PlayAnims(const LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex hand, DObj *const obj)
{
  ?CG_Ladder_PlayAnims@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@W4PlayerHandIndex@@QEAUDObj@@@Z(localClientNum, ps, hand, obj);
}

/*
==============
CG_Ladder_InputUpdate
==============
*/

void __fastcall CG_Ladder_InputUpdate(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ?CG_Ladder_InputUpdate@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CG_Ladder_SetRenderFlagsForHand
==============
*/

void __fastcall CG_Ladder_SetRenderFlagsForHand(LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex hand, unsigned int *outRenderFlags)
{
  ?CG_Ladder_SetRenderFlagsForHand@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@W4PlayerHandIndex@@PEAI@Z(localClientNum, ps, hand, outRenderFlags);
}

/*
==============
CG_Ladder_SetLegsPose
==============
*/

void __fastcall CG_Ladder_SetLegsPose(LocalClientNum_t localClientNum, const playerState_s *ps, cpose_t *outPose)
{
  ?CG_Ladder_SetLegsPose@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@PEAUcpose_t@@@Z(localClientNum, ps, outPose);
}

/*
==============
CG_Ladder_Update
==============
*/

void __fastcall CG_Ladder_Update(LocalClientNum_t localClientNum)
{
  ?CG_Ladder_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Ladder_AttachIKMarkers
==============
*/
void CG_Ladder_AttachIKMarkers(PlayerHandIndex hand, LocalClientNum_t localClientNum, const XAnimWeaponIKModelsContainer *weaponIKModels, const XAnimIKTagRequest *tagRequest, DObjModel *dobjModels, unsigned __int16 *modelCount)
{
  cg_t *LocalClientGlobals; 
  scr_string_t j_left_hand; 
  XModel *v12; 
  int attachedModelIdx[4]; 
  CharacterModelType outModelTypes[32]; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 508, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !weaponIKModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 509, ASSERT_TYPE_ASSERT, "(weaponIKModels)", (const char *)&queryFormat, "weaponIKModels") )
    __debugbreak();
  if ( !tagRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 510, ASSERT_TYPE_ASSERT, "(tagRequest)", (const char *)&queryFormat, "tagRequest") )
    __debugbreak();
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 511, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  if ( !modelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 512, ASSERT_TYPE_ASSERT, "(modelCount)", (const char *)&queryFormat, "modelCount") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 515, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  memset_0(outModelTypes, 0, sizeof(outModelTypes));
  if ( hand == WEAPON_HAND_LEFT )
  {
    j_left_hand = scr_const.j_left_hand;
    v12 = cg_tagIKTargetModelLeft;
  }
  else
  {
    if ( !LocalClientGlobals->playerWeaponInfo.isWeaponHidden && XAnimWeaponIKModelsContainer::GetXModelCount((XAnimWeaponIKModelsContainer *)weaponIKModels) > 0 )
    {
      XAnimIKAttachTargetToWeapon(XANIM_IK_ACTOR_RIGHT_HAND, cg_tagIKTargetModelRight, weaponIKModels, tagRequest, dobjModels, modelCount, (CharacterModelType (*)[32])outModelTypes);
      return;
    }
    j_left_hand = scr_const.j_right_hand;
    v12 = cg_tagIKTargetModelRight;
  }
  XAnimIKAttachTargetToTag(v12, j_left_hand, dobjModels, modelCount, attachedModelIdx, (CharacterModelType (*)[32])outModelTypes);
}

/*
==============
CG_Ladder_CreateAnims
==============
*/
void CG_Ladder_CreateAnims(WeaponXAnim *pAnims)
{
  unsigned int flags; 
  XAnimSyncGroupID syncGroup; 
  XAnimSyncGroupID syncGroupa; 
  XAnimSyncGroupID syncGroupb; 

  if ( !pAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 46, ASSERT_TYPE_ASSERT, "(pAnims)", (const char *)&queryFormat, "pAnims") )
    __debugbreak();
  LOBYTE(syncGroup) = 4;
  XAnimCustomNode(scr_const.xanimIKLadder, &pAnims->xanim, 6u, "ladder_root", 7u, 1u, 0, syncGroup, 0);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, 6u, 0x13u, scr_const.ladderAnchor);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, 6u, 0xCu, scr_const.ladderBottom);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, 6u, 0xDu, scr_const.ladderTop);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, 6u, 0xEu, scr_const.ladderAngles);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, 6u, 0xFu, scr_const.ladderWidth);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, 6u, 0x10u, scr_const.ladderRungDist);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, 6u, 0x11u, scr_const.ladderState);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, 6u, 0x19u, scr_const.ladderStateTime);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, 6u, 0x12u, scr_const.ladderHand);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, 6u, 0x1Au, scr_const.ladderHasWeapon);
  LOBYTE(syncGroupa) = 4;
  XAnimCustomNode(scr_const.xanimLadderClimb, &pAnims->xanim, 0x178u, "ladder_climb", 0x19Du, 2u, 0, syncGroupa, 0);
  LOBYTE(flags) = 4;
  XAnimBlend(&pAnims->xanim, 0x19Eu, "ladder_overlays", 0x19Fu, 6u, 0x100u, (const XAnimSyncGroupID)flags, 0);
  CG_Ladder_SetClimbParameters(pAnims, WEAP_ANIM_LADDER_CLIMB);
  LOBYTE(syncGroupb) = 4;
  XAnimCustomNode(scr_const.xanimLadderClimb, &pAnims->xanim, 0x179u, "ladder_climb_weapon", 0x1A5u, 1u, 0, syncGroupb, 0);
  CG_Ladder_SetClimbParameters(pAnims, WEAP_ANIM_LADDER_CLIMB_WEAPON);
}

/*
==============
CG_Ladder_GetDepthHackFoV
==============
*/
float CG_Ladder_GetDepthHackFoV(const LocalClientNum_t localClientNum, float hackFov, float sceneFov)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return (float)((float)(1.0 - LocalClientGlobals->ladderInterpData[0].m_fovRatio) * sceneFov) + (float)(hackFov * LocalClientGlobals->ladderInterpData[0].m_fovRatio);
}

/*
==============
CG_Ladder_InputUpdate
==============
*/
void CG_Ladder_InputUpdate(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  __int64 v6; 
  bool v7; 
  unsigned __int64 outResultCount; 
  EdgeOctreeQuery<EdgeOctreeQuerySphere> v9; 
  __int64 v10; 
  EdgeOctreeQuerySphere v11; 
  float resultFractionPool[4]; 
  EdgeId resultIdPool; 

  v10 = -2i64;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 684, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 685, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_Ladder_InputUpdate");
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Handler = CgHandler::getHandler(localClientNum);
  v6 = (__int64)Handler->GetEdgeQueryCache(Handler, LocalClientGlobals->predictedPlayerState.clientNum);
  v7 = Physics_IsInitialized() && Physics_AreClientWorldsCreated(localClientNum) && Handler->RequiresScriptMoverLadderChecks(Handler);
  outResultCount = 0i64;
  EdgeOctreeQuerySphere::EdgeOctreeQuerySphere(&v11, &LocalClientGlobals->predictedPlayerState.origin, 100.0);
  v9.m_bucket = LADDER_CENTERLINE;
  v9.m_queryShape = &v11;
  v9.m_hint = *(_DWORD *)(v6 + 12);
  v9.m_flags = v7;
  EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute(&v9, Handler, &resultIdPool, resultFractionPool, NULL, 4ui64, &outResultCount, (unsigned int *)(v6 + 12));
  if ( outResultCount )
    cmd->buttons |= 0x800000000000000ui64;
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Ladder_InterpolateHand
==============
*/
void CG_Ladder_InterpolateHand(LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex hand, cpose_t *outPose)
{
  __int128 v4; 
  __int128 v5; 
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  unsigned __int64 weaponState; 
  __int64 v12; 
  int v13; 
  float v14; 
  __int64 v15; 
  vec4_t *p_m_beginQuat; 
  int m_prevWeaponState; 
  __int64 v19; 
  bool v20; 
  __int64 v21; 
  CgWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  int v24; 
  const dvar_t *v25; 
  int v26; 
  int v27; 
  int time; 
  __int64 v32; 
  int v33; 
  int v34; 
  int m_interpBegin; 
  float v36; 
  __int64 v37; 
  __int128 v38; 
  vec4_t *p_out; 
  __int64 v41; 
  vec4_t *p_result; 
  float v43; 
  vec3_t angles; 
  vec4_t quat; 
  vec4_t result; 
  tmat33_t<vec3_t> mat; 
  vec4_t out; 
  __int128 v50; 
  __int128 v51; 

  v6 = hand;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 213, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 214, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 215, ASSERT_TYPE_ASSERT, "(outPose)", (const char *)&queryFormat, "outPose") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  weaponState = ps->weapState[v6].weaponState;
  if ( !(_DWORD)v6 && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) && (_DWORD)weaponState == 6 )
  {
    v12 = v6;
    *(_QWORD *)LocalClientGlobals->ladderInterpData[v12].m_beginQuat.v = 0i64;
    *(_QWORD *)&LocalClientGlobals->ladderInterpData[v12].m_beginQuat.xyz.z = 0i64;
    *(_QWORD *)LocalClientGlobals->ladderInterpData[v12].m_currQuat.v = 0i64;
    *(_QWORD *)&LocalClientGlobals->ladderInterpData[v12].m_currQuat.xyz.z = 0i64;
    v13 = ps->weapState[v6].weaponState;
    LocalClientGlobals->ladderInterpData[v12].m_fovRatio = 1.0;
    LocalClientGlobals->ladderInterpData[v12].m_prevWeaponState = v13;
    return;
  }
  LODWORD(mat.m[0].v[0]) = LODWORD(LocalClientGlobals->ladderInfo.axis.m[0].v[0]) ^ _xmm;
  LODWORD(mat.m[0].v[1]) = LODWORD(LocalClientGlobals->ladderInfo.axis.m[0].v[1]) ^ _xmm;
  LODWORD(mat.m[0].v[2]) = LODWORD(LocalClientGlobals->ladderInfo.axis.m[0].v[2]) ^ _xmm;
  LODWORD(mat.m[1].v[0]) = LODWORD(LocalClientGlobals->ladderInfo.axis.m[1].v[0]) ^ _xmm;
  LODWORD(mat.m[1].v[1]) = LODWORD(LocalClientGlobals->ladderInfo.axis.m[1].v[1]) ^ _xmm;
  LODWORD(mat.m[1].v[2]) = LODWORD(LocalClientGlobals->ladderInfo.axis.m[1].v[2]) ^ _xmm;
  *(_QWORD *)mat.row2.v = *(_QWORD *)LocalClientGlobals->ladderInfo.axis.row2.v;
  v14 = LocalClientGlobals->ladderInfo.axis.m[2].v[2];
  v51 = v4;
  v50 = v5;
  mat.m[2].v[2] = v14;
  AxisToQuat(&mat, &out);
  AnglesToQuat(&outPose->angles, &quat);
  v15 = v6;
  _XMM6 = 0i64;
  p_m_beginQuat = &LocalClientGlobals->ladderInterpData[v6].m_beginQuat;
  if ( p_m_beginQuat->v[0] == 0.0 && LocalClientGlobals->ladderInterpData[v6].m_beginQuat.v[1] == 0.0 && LocalClientGlobals->ladderInterpData[v6].m_beginQuat.v[2] == 0.0 && LocalClientGlobals->ladderInterpData[v6].m_beginQuat.v[3] == 0.0 )
  {
    p_m_beginQuat->v[0] = quat.v[0];
    LocalClientGlobals->ladderInterpData[v6].m_beginQuat.v[1] = quat.v[1];
    LocalClientGlobals->ladderInterpData[v6].m_beginQuat.v[2] = quat.v[2];
    LocalClientGlobals->ladderInterpData[v6].m_beginQuat.v[3] = quat.v[3];
    LocalClientGlobals->ladderInterpData[v15].m_currQuat = quat;
    LocalClientGlobals->ladderInterpData[v15].m_fovBeginRatio = 1.0;
  }
  m_prevWeaponState = LocalClientGlobals->ladderInterpData[v15].m_prevWeaponState;
  v20 = 1;
  if ( m_prevWeaponState != 49 || (_DWORD)weaponState != 48 )
  {
    if ( (unsigned int)weaponState > 0x31 || (v19 = 0x2000000003040i64, !_bittest64(&v19, weaponState)) )
    {
      if ( m_prevWeaponState != 44 )
        v20 = 0;
    }
  }
  v21 = 0x1000000001040i64;
  if ( (_DWORD)weaponState != m_prevWeaponState && v20 )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, ps);
    if ( (_DWORD)weaponState == 6 )
      goto LABEL_33;
    if ( (_DWORD)weaponState == 13 )
    {
      v24 = BG_LadderAimDropTime(ps, ViewmodelWeapon, 0, 0);
      goto LABEL_34;
    }
    if ( (unsigned int)(weaponState - 48) <= 1 )
LABEL_33:
      v24 = BG_LadderAimRaiseTime(ps, ViewmodelWeapon, 0, 0);
    else
      v24 = BG_LadderClimbDropTime(ps, ViewmodelWeapon, 0, 0);
LABEL_34:
    v25 = DCONST_DVARFLT_cg_ladderSpinTimePercent;
    v26 = v24;
    if ( !DCONST_DVARFLT_cg_ladderSpinTimePercent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ladderSpinTimePercent") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    v27 = (int)(float)((float)v26 * v25->current.value);
    if ( LocalClientGlobals->ladderInterpData[v15].m_prevWeaponState == 44 )
    {
      LocalClientGlobals->ladderInterpData[v15].m_interpBegin = LocalClientGlobals->time;
      time = LocalClientGlobals->time;
      _XMM0 = (unsigned int)weaponState;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm6, xmm7, xmm2
      }
    }
    else if ( (unsigned int)weaponState <= 0x30 && (v32 = 0x1000000001040i64, _bittest64(&v32, weaponState)) )
    {
      v33 = LocalClientGlobals->time;
      LocalClientGlobals->ladderInterpData[v15].m_interpBegin = v33;
      time = v27 + v33;
      *(float *)&_XMM0 = FLOAT_1_0;
    }
    else
    {
      LocalClientGlobals->ladderInterpData[v15].m_interpBegin = v26 + LocalClientGlobals->time - v27;
      time = v26 + LocalClientGlobals->time;
      LODWORD(_XMM0) = 0;
    }
    LocalClientGlobals->ladderInterpData[v15].m_interpFinish = time;
    v21 = 0x1000000001040i64;
    LocalClientGlobals->ladderInterpData[v15].m_fovEndRatio = *(float *)&_XMM0;
    LocalClientGlobals->ladderInterpData[v15].m_fovBeginRatio = LocalClientGlobals->ladderInterpData[v15].m_fovRatio;
    p_m_beginQuat->v[0] = LocalClientGlobals->ladderInterpData[v15].m_currQuat.v[0];
    LocalClientGlobals->ladderInterpData[v6].m_beginQuat.v[1] = LocalClientGlobals->ladderInterpData[v15].m_currQuat.v[1];
    LocalClientGlobals->ladderInterpData[v6].m_beginQuat.v[2] = LocalClientGlobals->ladderInterpData[v15].m_currQuat.v[2];
    LocalClientGlobals->ladderInterpData[v6].m_beginQuat.v[3] = LocalClientGlobals->ladderInterpData[v15].m_currQuat.v[3];
  }
  v34 = LocalClientGlobals->time;
  m_interpBegin = LocalClientGlobals->ladderInterpData[v15].m_interpBegin;
  if ( v34 >= m_interpBegin )
  {
    if ( LocalClientGlobals->ladderInterpData[v15].m_interpFinish - v34 <= 0 )
      v36 = FLOAT_1_0;
    else
      v36 = (float)(v34 - m_interpBegin) / (float)(LocalClientGlobals->ladderInterpData[v15].m_interpFinish - m_interpBegin);
  }
  else
  {
    v36 = 0.0;
  }
  if ( (unsigned int)weaponState > 0x2F || (v37 = 0x800000001020i64, !_bittest64(&v37, weaponState)) )
  {
    *(float *)&_XMM6 = LocalClientGlobals->ladderInterpData[v15].m_fovEndRatio;
    if ( v36 < 1.0 )
    {
      v38 = LODWORD(FLOAT_1_0);
      *(float *)&v38 = (float)((float)(1.0 - v36) * LocalClientGlobals->ladderInterpData[v15].m_fovBeginRatio) + (float)(*(float *)&_XMM6 * v36);
      _XMM2 = v38;
      __asm { vminss  xmm6, xmm2, xmm7 }
    }
  }
  LocalClientGlobals->ladderInterpData[v15].m_fovRatio = *(float *)&_XMM6;
  if ( (_DWORD)weaponState == 13 || (_DWORD)weaponState == 49 )
  {
    p_out = &out;
    goto LABEL_63;
  }
  if ( (unsigned int)weaponState <= 0x30 && _bittest64(&v21, weaponState) )
  {
    p_out = &quat;
LABEL_63:
    QuatSlerp(p_m_beginQuat, p_out, v36 * v36, &result);
    p_result = &result;
    goto LABEL_64;
  }
  if ( (unsigned int)weaponState <= 0x32 )
  {
    v41 = 0x4800000004020i64;
    if ( _bittest64(&v41, weaponState) )
    {
      p_result = &out;
      LocalClientGlobals->ladderInterpData[v15].m_interpBegin = LocalClientGlobals->time;
      LocalClientGlobals->ladderInterpData[v15].m_interpFinish = LocalClientGlobals->time;
      result = out;
LABEL_64:
      QuatToAngles(p_result, &angles);
      if ( !outPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 559, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      v43 = angles.v[1];
      outPose->angles.v[0] = angles.v[0];
      outPose->angles.v[2] = angles.v[2];
      outPose->angles.v[1] = v43;
      goto LABEL_68;
    }
  }
  LocalClientGlobals->ladderInterpData[v15].m_interpBegin = LocalClientGlobals->time;
  LocalClientGlobals->ladderInterpData[v15].m_interpFinish = LocalClientGlobals->time;
  AnglesToQuat(&outPose->angles, &result);
LABEL_68:
  LocalClientGlobals->ladderInterpData[v15].m_currQuat = result;
  LocalClientGlobals->ladderInterpData[v15].m_prevWeaponState = weaponState;
}

/*
==============
CG_Ladder_PlayAnims
==============
*/
void CG_Ladder_PlayAnims(const LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex hand, DObj *const obj)
{
  int v4; 
  __int64 v5; 
  const dvar_t *v9; 
  XAnimTree *tree; 
  cg_t *LocalClientGlobals; 
  unsigned __int64 weaponState; 
  CgWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  bool v15; 
  bool v16; 
  __int64 v17; 
  __int64 v18; 
  int time; 
  double v20; 
  double GoalWeight; 
  __int64 v22; 
  __int64 v23; 
  bool v24; 
  double HandAnimDistance; 
  double TargetAnimationTimeClamped; 
  float v27; 
  const dvar_t *v28; 
  float v29; 
  const dvar_t *v30; 
  float goalTime; 
  double v32; 
  double v33; 
  double Float_Internal_DebugName; 
  char v35; 
  bool HasLadderHand; 
  int weaponTime; 
  vec3_t outAnchorPos; 
  vec3_t angles; 

  v4 = 2;
  v5 = hand;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 75, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 76, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 77, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v9 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
  if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    tree = obj->tree;
    if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 85, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
      __debugbreak();
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 88, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    HasLadderHand = BG_HasLadderHand(ps);
    weaponState = ps->weapState[v5].weaponState;
    weaponTime = ps->weapState[v5].weaponTime;
    Instance = CgWeaponMap::GetInstance(localClientNum);
    ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, ps);
    v15 = BG_UsingAlternate(ps);
    if ( !BG_IsLadderWeapon(ViewmodelWeapon, v15) || (v16 = BG_UsingAlternate(ps), !BG_GetAmmoInClip(ps, ViewmodelWeapon, v16, WEAPON_HAND_DEFAULT)) || (v35 = 1, (_DWORD)weaponState == 12) )
      v35 = 0;
    v17 = v5;
    if ( (_DWORD)weaponState != LocalClientGlobals->ladderInterpData[v5].m_prevWeaponState && (unsigned int)weaponState <= 0x31 )
    {
      v18 = 0x2000000003040i64;
      if ( _bittest64(&v18, weaponState) )
      {
        time = LocalClientGlobals->time;
        LocalClientGlobals->ladderInterpData[v17].m_interpBegin = time;
        LocalClientGlobals->ladderInterpData[v17].m_interpFinish = weaponTime + time;
      }
    }
    if ( !HasLadderHand || (_DWORD)weaponState == 7 )
    {
      GoalWeight = XAnimGetGoalWeight(tree, 0, XANIM_SUBTREE_DEFAULT, 6u);
      if ( *(float *)&GoalWeight > 0.0 )
        XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 6u, 0.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    }
    else
    {
      v20 = XAnimGetGoalWeight(tree, 0, XANIM_SUBTREE_DEFAULT, 6u);
      if ( *(float *)&v20 < 1.0 )
        XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 6u, 1.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    }
    if ( (unsigned int)weaponState <= 0x32 && (v22 = 0x4800000003020i64, _bittest64(&v22, weaponState)) )
    {
      v4 = 1;
    }
    else if ( (_DWORD)weaponState == 49 || (_DWORD)weaponState == 14 )
    {
      v4 = 4;
    }
    else if ( (unsigned int)weaponState > 0x30 || (v23 = 0x1000000000041i64, !_bittest64(&v23, weaponState)) )
    {
      v4 = 0;
    }
    XAnimSetIntGameParameterByIndex(obj, 0x11u, v4);
    XAnimSetFloatGameParameterByIndex(obj, 0x19u, (float)(LocalClientGlobals->ladderInterpData[v17].m_interpFinish - LocalClientGlobals->ladderInterpData[v17].m_interpBegin) * 0.001);
    v24 = v35 && hand == WEAPON_HAND_DEFAULT;
    XAnimSetBoolGameParameterByIndex(obj, 0x1Au, v24);
    AxisToAngles(&LocalClientGlobals->ladderInfo.axis, &angles);
    BG_Ladder_GetAnchorWorldPosition(&ps->origin, ps->suitIndex, 1, &outAnchorPos);
    HandAnimDistance = BG_Ladder_GetHandAnimDistance(ps);
    XAnimSetVec3GameParameterByIndex(obj, 0x13u, &outAnchorPos);
    XAnimSetVec3GameParameterByIndex(obj, 0xCu, &LocalClientGlobals->ladderInfo.bottom);
    XAnimSetVec3GameParameterByIndex(obj, 0xDu, &LocalClientGlobals->ladderInfo.top);
    XAnimSetFloatGameParameterByIndex(obj, 0x14u, ps->velocity.v[2]);
    XAnimSetFloatGameParameterByIndex(obj, 0x10u, 12.0);
    XAnimSetFloatGameParameterByIndex(obj, 0x15u, *(float *)&HandAnimDistance);
    XAnimSetVec3GameParameterByIndex(obj, 0xEu, &angles);
    XAnimSetFloatGameParameterByIndex(obj, 0xFu, LocalClientGlobals->ladderInfo.width);
    XAnimSetIntGameParameterByIndex(obj, 0x12u, hand);
    XAnimSetBoolGameParameterByIndex(obj, 0x16u, 1);
    TargetAnimationTimeClamped = BG_Ladder_GetTargetAnimationTimeClamped(&outAnchorPos, &LocalClientGlobals->ladderInfo.bottom, &LocalClientGlobals->ladderInfo.top, *(float *)&HandAnimDistance);
    v27 = *(float *)&TargetAnimationTimeClamped;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
    {
      XAnimSetFloatGameParameterByIndex(obj, 0x18u, *(float *)&TargetAnimationTimeClamped);
      XAnimSetFloatGameParameterByIndex(obj, 0x17u, 0.0);
    }
    if ( hand == WEAPON_HAND_DEFAULT )
    {
      if ( ps->ladderState.mode == LADDER_MODE_CLIMB )
      {
        v28 = DCONST_DVARMPFLT_cg_ladderCameraAnimWeight;
        if ( !DCONST_DVARMPFLT_cg_ladderCameraAnimWeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ladderCameraAnimWeight") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v28);
        v29 = v28->current.value;
        v30 = DCONST_DVARFLT_cg_ladderCameraAnimBlendInTime;
        if ( !DCONST_DVARFLT_cg_ladderCameraAnimBlendInTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ladderCameraAnimBlendInTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v30);
        goalTime = v30->current.value;
        v32 = XAnimGetGoalWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, 0xAAu);
        if ( *(float *)&v32 <= 0.0 )
        {
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xAAu, v29, goalTime, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xABu, v29, 0.0, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
        }
        XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, 0xABu, v27);
      }
      else
      {
        v33 = XAnimGetGoalWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, 0xAAu);
        if ( *(float *)&v33 > 0.0 )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_ladderCameraAnimBlendOutTime, "cg_ladderCameraAnimBlendOutTime");
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xAAu, 0.0, *(float *)&Float_Internal_DebugName, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
        }
      }
    }
  }
}

/*
==============
CG_Ladder_PlayAudioClient
==============
*/
void CG_Ladder_PlayAudioClient(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int clientNum; 
  unsigned int refdefViewOrg_aab; 
  vec3_t pos; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 603, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 606, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 609, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.ladderState.mode == LADDER_MODE_SLIDE && LocalClientGlobals->predictedPlayerState.ladderState.modeStartTime < LocalClientGlobals->time )
  {
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
    if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(pos.v[0]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
    LODWORD(pos.v[1]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
    LODWORD(pos.v[2]) = ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
    CG_Ladder_PlayLadderSlideAudio(localClientNum, clientNum, &pos, LocalClientGlobals->lastGroundSurfaceType, 1);
    memset(&pos, 0, sizeof(pos));
  }
}

/*
==============
CG_Ladder_PlayAudioClientEntity
==============
*/
void CG_Ladder_PlayAudioClientEntity(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  int number; 
  cg_t *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  unsigned int Animset; 
  unsigned int Anim; 
  int IsLadderSlideAlias; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  vec3_t outOrigin; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 629, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent", -2i64) )
      __debugbreak();
    number = cent->nextState.number;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
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
      CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, number);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 641, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      if ( !CharacterInfo->usingAnimState )
      {
        if ( PlayerASM_IsEnabled() )
        {
          Animset = BG_PlayerASM_GetAnimset(CharacterInfo);
          Anim = BG_PlayerASM_GetAnim(CharacterInfo, MOVEMENT);
          IsLadderSlideAlias = BG_PlayerASM_IsLadderSlideAlias(Anim, Animset);
        }
        else
        {
          SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(CharacterInfo);
          IsLadderSlideAlias = BG_IsLadderSlideAnim(CharacterInfo->playerAnim.legsAnim, SuitAnimIndexFromCharacter);
        }
        if ( IsLadderSlideAlias )
        {
          if ( !BG_PlayerASM_IsOnLadder(CharacterInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 660, ASSERT_TYPE_ASSERT, "(BG_PlayerASM_IsOnLadder( ci ))", (const char *)&queryFormat, "BG_PlayerASM_IsOnLadder( ci )") )
            __debugbreak();
          CG_GetPoseOrigin(&cent->pose, &outOrigin);
          CG_Ladder_PlayLadderSlideAudio(localClientNum, number, &outOrigin, LocalClientGlobals->slideSurfaceType[cent->nextState.number], 0);
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
      }
    }
  }
}

/*
==============
CG_Ladder_PlayLadderSlideAudio
==============
*/
void CG_Ladder_PlayLadderSlideAudio(const LocalClientNum_t localClientNum, const int entNum, const vec3_t *pos, const unsigned __int8 surfaceType, bool isLocalClient)
{
  __int64 v6; 
  CgSoundSystem *v9; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  bool IsThirdPersonMode; 
  bool v13; 
  SndAliasList *ladderSlideLoopSound; 
  const centity_t *Entity; 
  double FootstepVolumeScale; 
  const dvar_t *v17; 
  const char *v18; 
  __int64 fromServer; 
  __int64 duration; 
  char _Buffer[1024]; 

  v6 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 571, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
  {
    LODWORD(duration) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", duration) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= CgSoundSystem::ms_allocatedCount )
  {
    LODWORD(duration) = CgSoundSystem::ms_allocatedCount;
    LODWORD(fromServer) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", fromServer, duration) )
      __debugbreak();
  }
  if ( !CgSoundSystem::ms_soundSystemArray[v6] )
  {
    LODWORD(duration) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", duration) )
      __debugbreak();
  }
  v9 = CgSoundSystem::ms_soundSystemArray[v6];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 574, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 577, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->renderingThirdPerson || (Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)LocalClientGlobals->localClientNum), IsThirdPersonMode = BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState)) )
    IsThirdPersonMode = 1;
  v13 = entNum == LocalClientGlobals->predictedPlayerState.clientNum && !IsThirdPersonMode;
  if ( !isLocalClient || (ladderSlideLoopSound = cgMedia.ladderSlideLoopSoundPlayer, !v13) )
    ladderSlideLoopSound = cgMedia.ladderSlideLoopSound;
  Entity = CG_GetEntity((const LocalClientNum_t)v6, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 585, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  FootstepVolumeScale = CgSoundSystem::GetFootstepVolumeScale(v9, Entity, 3, 1);
  ((void (__fastcall *)(CgSoundSystem *, _QWORD, const vec3_t *, SndAliasList *, _DWORD, _DWORD, _DWORD, _DWORD))v9->PlaySurfaceSound)(v9, (unsigned int)entNum, pos, ladderSlideLoopSound, surfaceType, LODWORD(FootstepVolumeScale), LODWORD(FLOAT_1_0), 0);
  v17 = DCONST_DVARBOOL_cg_drawLadderSlideAudio;
  if ( !DCONST_DVARBOOL_cg_drawLadderSlideAudio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLadderSlideAudio") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled )
  {
    v18 = "remoteClient";
    if ( isLocalClient )
      v18 = "localClient";
    j_sprintf(_Buffer, "%s LadderSlide audio is playing.\n", v18);
    CL_AddDebugString2D(400.0, 300.0, &colorYellow, 1.5, _Buffer, 0, 0);
  }
}

/*
==============
CG_Ladder_ProccessNotetracks
==============
*/
void CG_Ladder_ProccessNotetracks(LocalClientNum_t localClientNum, scr_string_t noteName)
{
  cg_t *LocalClientGlobals; 
  bool v5; 
  bool v6; 
  bool v7; 
  int clientNum; 

  if ( noteName )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 550, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v5 = noteName == scr_const.ladder_grab_left || noteName == scr_const.ladder_grab_right;
    v6 = noteName == scr_const.footstep_left_large || noteName == scr_const.footstep_right_large;
    v7 = noteName == scr_const.ladder_grab_left || noteName == scr_const.footstep_left_large;
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( v6 )
      CG_Event_PlayFootstepSound(localClientNum, clientNum, v7, LocalClientGlobals->lastGroundSurfaceType, SCRIPTABLE_FOOTSTEP_NONE);
    if ( v5 )
      CG_Event_PlayHandGrabSound(localClientNum, clientNum, v7, LocalClientGlobals->lastGroundSurfaceType);
  }
}

/*
==============
CG_Ladder_ResetHandInterpolation
==============
*/
void CG_Ladder_ResetHandInterpolation(LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex hand)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  __int64 v7; 

  v3 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 190, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_HasLadderHand(ps) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v7 = v3;
    *(_QWORD *)LocalClientGlobals->ladderInterpData[v7].m_beginQuat.v = 0i64;
    *(_QWORD *)&LocalClientGlobals->ladderInterpData[v7].m_beginQuat.xyz.z = 0i64;
    *(_QWORD *)LocalClientGlobals->ladderInterpData[v7].m_currQuat.v = 0i64;
    *(_QWORD *)&LocalClientGlobals->ladderInterpData[v7].m_currQuat.xyz.z = 0i64;
    LocalClientGlobals->ladderInterpData[v7].m_prevWeaponState = ps->weapState[v3].weaponState;
    LocalClientGlobals->ladderInterpData[v7].m_fovRatio = 1.0;
  }
}

/*
==============
CG_Ladder_SetClimbParameters
==============
*/
void CG_Ladder_SetClimbParameters(WeaponXAnim *pAnims, weapAnimFiles_t climbParentAnim)
{
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, climbParentAnim, 0x13u, scr_const.ladderAnchor);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, climbParentAnim, 0xCu, scr_const.ladderBottom);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, climbParentAnim, 0xDu, scr_const.ladderTop);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, climbParentAnim, 0xEu, scr_const.ladderAngles);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, climbParentAnim, 0x14u, scr_const.ladderSpeed);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, climbParentAnim, 0x10u, scr_const.ladderRungDist);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, climbParentAnim, 0x15u, scr_const.ladderHandDist);
  XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, climbParentAnim, 0x16u, scr_const.ladderIsTorso);
}

/*
==============
CG_Ladder_SetLegsPose
==============
*/
void CG_Ladder_SetLegsPose(LocalClientNum_t localClientNum, const playerState_s *ps, cpose_t *outPose)
{
  const dvar_t *v6; 
  cg_t *LocalClientGlobals; 
  double v8; 
  double v9; 
  double v10; 
  float v11; 
  float v12; 
  double v13; 
  float v14; 
  float v15; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 418, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 419, ASSERT_TYPE_ASSERT, "(outPose)", (const char *)&queryFormat, "outPose") )
    __debugbreak();
  v6 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
  if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && BG_HasLadderHand(ps) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    LODWORD(axis.m[0].v[0]) = LODWORD(LocalClientGlobals->ladderInfo.axis.m[0].v[0]) ^ _xmm;
    LODWORD(axis.m[0].v[1]) = LODWORD(LocalClientGlobals->ladderInfo.axis.m[0].v[1]) ^ _xmm;
    LODWORD(axis.m[0].v[2]) = LODWORD(LocalClientGlobals->ladderInfo.axis.m[0].v[2]) ^ _xmm;
    LODWORD(axis.m[1].v[0]) = LODWORD(LocalClientGlobals->ladderInfo.axis.m[1].v[0]) ^ _xmm;
    LODWORD(axis.m[1].v[1]) = LODWORD(LocalClientGlobals->ladderInfo.axis.m[1].v[1]) ^ _xmm;
    LODWORD(axis.m[1].v[2]) = LODWORD(LocalClientGlobals->ladderInfo.axis.m[1].v[2]) ^ _xmm;
    axis.m[2] = LocalClientGlobals->ladderInfo.axis.row2;
    AxisToAngles(&axis, &angles);
    v8 = AngleNormalize360(angles.v[1]);
    v9 = AngleDelta(ps->viewangles.v[1], *(const float *)&v8);
    if ( COERCE_FLOAT(LODWORD(v9) & _xmm) > LEFT_DIFF_BEGIN_0 )
    {
      if ( *(float *)&v9 <= 0.0 )
      {
        v13 = I_fclamp(*(float *)&v9, COERCE_FLOAT(LODWORD(LEFT_DIFF_END_0) ^ _xmm), COERCE_FLOAT(LODWORD(LEFT_DIFF_BEGIN_0) ^ _xmm));
        v11 = LEFT_DIFF_BEGIN_0;
        v12 = *(float *)&v13 + LEFT_DIFF_BEGIN_0;
      }
      else
      {
        v10 = I_fclamp(*(float *)&v9, LEFT_DIFF_BEGIN_0, LEFT_DIFF_END_0);
        v11 = LEFT_DIFF_BEGIN_0;
        v12 = *(float *)&v10 - LEFT_DIFF_BEGIN_0;
      }
      v14 = v12 / (float)(LEFT_DIFF_END_0 - v11);
      CG_GetPoseOrigin(outPose, &outOrigin);
      LODWORD(v15) = COERCE_UNSIGNED_INT((float)((float)((float)((float)((float)(v14 * 6.0) - 15.0) * v14) + 10.0) * (float)((float)(v14 * v14) * v14)) * LEFT_MOVE_DIST) ^ _xmm;
      outOrigin.v[0] = (float)(v15 * axis.m[1].v[0]) + outOrigin.v[0];
      outOrigin.v[1] = (float)(v15 * axis.m[1].v[1]) + outOrigin.v[1];
      outOrigin.v[2] = (float)(v15 * axis.m[1].v[2]) + outOrigin.v[2];
      CG_SetPoseOrigin(outPose, &outOrigin);
    }
  }
}

/*
==============
CG_Ladder_SetRenderFlagsForHand
==============
*/
void CG_Ladder_SetRenderFlagsForHand(LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex hand, unsigned int *outRenderFlags)
{
  __int64 v4; 
  CgWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  unsigned __int64 weaponState; 
  __int64 v11; 
  __int64 v12; 
  bool v13; 

  v4 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 390, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outRenderFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 391, ASSERT_TYPE_ASSERT, "(outRenderFlags)", (const char *)&queryFormat, "outRenderFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, ps);
    weaponState = ps->weapState[v4].weaponState;
    if ( outRenderFlags )
    {
      if ( (_DWORD)v4 == 1 )
      {
        if ( (unsigned int)weaponState <= 0x2F )
        {
          v11 = 0x800000001020i64;
          if ( _bittest64(&v11, weaponState) )
LABEL_18:
            *outRenderFlags &= ~1u;
        }
      }
      else if ( !(_DWORD)v4 && (unsigned int)weaponState <= 0x2F )
      {
        v12 = 0x800000001020i64;
        if ( _bittest64(&v12, weaponState) )
        {
          if ( !BG_IsLadderWeapon(ViewmodelWeapon, 0) )
            goto LABEL_18;
          v13 = BG_UsingAlternate(ps);
          if ( !BG_GetAmmoInClip(ps, ViewmodelWeapon, v13, WEAPON_HAND_DEFAULT) )
            goto LABEL_18;
        }
      }
    }
  }
}

/*
==============
CG_Ladder_Update
==============
*/
void CG_Ladder_Update(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  __int64 v5; 
  __m256i v6; 
  float rungDistance; 
  unsigned int *edgeLadderQueryHint; 
  unsigned int *edgeWidthQueryHint; 
  LadderInfo outLadderInfo; 

  v1 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
  if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    CG_Ladder_ValidateEdges(localClientNum);
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(edgeWidthQueryHint) = 2;
      LODWORD(edgeLadderQueryHint) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 481, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", edgeLadderQueryHint, edgeWidthQueryHint) )
        __debugbreak();
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 484, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 487, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Handler = CgHandler::getHandler(localClientNum);
    if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 490, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
      __debugbreak();
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 6u) )
    {
      v5 = (__int64)Handler->GetEdgeQueryCache(Handler, LocalClientGlobals->predictedPlayerState.clientNum);
      if ( BG_GetLadderInfo(&LocalClientGlobals->predictedPlayerState.origin, Handler, &outLadderInfo, NULL, 0, (unsigned int *)(v5 + 8), (unsigned int *)(v5 + 16)) )
      {
        v6 = *(__m256i *)&outLadderInfo.axis.row2.z;
        rungDistance = outLadderInfo.rungDistance;
        *(__m256i *)LocalClientGlobals->ladderInfo.axis.m[0].v = *(__m256i *)outLadderInfo.axis.m[0].v;
        *(__m256i *)&LocalClientGlobals->ladderInfo.axis.row2.z = v6;
        LocalClientGlobals->ladderInfo.rungDistance = rungDistance;
      }
    }
  }
}

/*
==============
CG_Ladder_ValidateEdges
==============
*/
void CG_Ladder_ValidateEdges(LocalClientNum_t localClientNum)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  const dvar_t *v9; 
  CgHandler *Handler; 
  MapEnts *mapEnts; 
  __int64 v13; 
  __int64 v14; 
  const BgHandler *v15; 
  MapEdgeList *v16; 
  unsigned int v17; 
  unsigned int EdgeIndex; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  __int64 v26; 
  __int64 v27; 
  float v28; 
  __int64 v29; 
  __int64 i; 
  MapEdgeList *v31; 
  unsigned int v32; 
  unsigned int v33; 
  float *v34; 
  __int64 v35; 
  vec3_t *p_point; 
  float *v37; 
  __int64 v38; 
  EdgeId edgeId; 
  CgHandler *v40; 
  EdgeId v41; 
  vec3_t outLineSegment[2]; 
  vec3_t start[2]; 
  vec3_t point; 
  int v45[24996]; 
  __int128 v46; 
  __int128 v47; 
  __int128 v48; 
  __int128 v49; 
  __int128 v50; 
  __int128 v51; 
  __int128 v52; 
  __int128 v53; 

  v9 = DVARBOOL_cg_ladders_validate;
  if ( !DVARBOOL_cg_ladders_validate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ladders_validate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    v53 = v1;
    v47 = v7;
    v46 = v8;
    Dvar_SetBool_Internal(DVARBOOL_cg_ladders_validate, 0);
    memset_0(&point, 0, 0x186A0ui64);
    Handler = CgHandler::getHandler(localClientNum);
    mapEnts = cm.mapEnts;
    v13 = 0i64;
    v14 = 0i64;
    v40 = Handler;
    v15 = Handler;
    if ( cm.mapEnts->numEdgeLists )
    {
      v52 = v2;
      v51 = v3;
      v50 = v4;
      v49 = v5;
      v48 = v6;
      while ( (unsigned int)v13 < 0x1388 )
      {
        v16 = mapEnts->edgeLists[v14];
        if ( v16 )
        {
          if ( v16->valid )
          {
            v17 = 0;
            if ( v16->numEdges )
            {
              while ( 1 )
              {
                if ( (unsigned int)v13 >= 0x1388 )
                {
LABEL_21:
                  mapEnts = cm.mapEnts;
                  break;
                }
                EdgeIndex = MapEdgeList_MakeEdgeIndex(v14, v17);
                EdgeId::Set(&edgeId, EdgeIndex);
                if ( (Edge_GetFlags(edgeId) & 4) != 0 )
                {
                  Edge_GetLineSegment(v15, edgeId, (vec3_t (*)[2])outLineSegment);
                  v19 = outLineSegment[0].v[2];
                  v20 = outLineSegment[1].v[2];
                  v21 = outLineSegment[0].v[1];
                  v22 = outLineSegment[1].v[1];
                  v23 = outLineSegment[0].v[2] - outLineSegment[1].v[2];
                  v24 = outLineSegment[0].v[0] - outLineSegment[1].v[0];
                  v25 = outLineSegment[0].v[1] - outLineSegment[1].v[1];
                  if ( (float)(outLineSegment[0].v[2] - outLineSegment[1].v[2]) > 0.5 )
                  {
                    v26 = 5 * v13;
                    point.v[v26] = outLineSegment[0].v[0];
                    point.v[v26 + 1] = v21;
                    point.v[v26 + 2] = v19;
LABEL_17:
                    v28 = fsqrt((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v23 * v23));
                    if ( fmodf_0(v28, 12.0) > 0.1 )
                      Com_PrintWarning(34, "WARNING: ladder at %0.2f %0.2f %0.2f has a segment length (%0.2f) that is not a multiple of %0.2f. \n", point.v[5 * (unsigned int)v13], point.v[5 * (unsigned int)v13 + 1], point.v[5 * (unsigned int)v13 + 2], v28, DOUBLE_12_0);
                    v29 = 5i64 * (unsigned int)v13;
                    v13 = (unsigned int)(v13 + 1);
                    v15 = v40;
                    v45[v29] = EdgeIndex;
                    goto LABEL_20;
                  }
                  if ( v23 < -0.5 )
                  {
                    v27 = 5 * v13;
                    point.v[v27] = outLineSegment[1].v[0];
                    point.v[v27 + 1] = v22;
                    point.v[v27 + 2] = v20;
                    goto LABEL_17;
                  }
                }
LABEL_20:
                if ( ++v17 >= v16->numEdges )
                  goto LABEL_21;
              }
            }
          }
        }
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= mapEnts->numEdgeLists )
          break;
      }
    }
    for ( i = 0i64; (unsigned int)i < mapEnts->numEdgeLists; i = (unsigned int)(i + 1) )
    {
      v31 = mapEnts->edgeLists[i];
      if ( v31 )
      {
        if ( v31->valid )
        {
          v32 = 0;
          if ( v31->numEdges )
          {
            do
            {
              v33 = MapEdgeList_MakeEdgeIndex(i, v32);
              EdgeId::Set(&v41, v33);
              if ( (Edge_GetFlags(v41) & 4) != 0 )
              {
                Edge_GetLineSegment(v15, v41, (vec3_t (*)[2])start);
                if ( (float)(start[0].v[2] - start[1].v[2]) <= 0.5 && (float)(start[0].v[2] - start[1].v[2]) >= -0.5 && (_DWORD)v13 )
                {
                  v34 = &point.v[2];
                  v35 = (unsigned int)v13;
                  p_point = &point;
                  do
                  {
                    ProjectPointOntoVectorClamped(p_point, start, &start[1], outLineSegment, (float *)&edgeId);
                    if ( (float)((float)((float)((float)(outLineSegment[0].v[1] - *(v34 - 1)) * (float)(outLineSegment[0].v[1] - *(v34 - 1))) + (float)((float)(outLineSegment[0].v[0] - *(v34 - 2)) * (float)(outLineSegment[0].v[0] - *(v34 - 2)))) + (float)((float)(outLineSegment[0].v[2] - *v34) * (float)(outLineSegment[0].v[2] - *v34))) < 25.0 )
                      *((_BYTE *)v34 + 4) = 1;
                    p_point = (vec3_t *)((char *)p_point + 20);
                    v34 += 5;
                    --v35;
                  }
                  while ( v35 );
                }
              }
              v15 = v40;
              ++v32;
            }
            while ( v32 < v31->numEdges );
            mapEnts = cm.mapEnts;
          }
        }
      }
      v15 = v40;
    }
    if ( (_DWORD)v13 )
    {
      v37 = &point.v[2];
      v38 = (unsigned int)v13;
      do
      {
        if ( !*((_BYTE *)v37 + 4) )
          Com_PrintWarning(34, "WARNING: ladder at %0.2f %0.2f %0.2f did not have a width edge. \n", *(v37 - 2), *(v37 - 1), *v37);
        v37 += 5;
        --v38;
      }
      while ( v38 );
    }
  }
}

