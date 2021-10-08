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

float __fastcall CG_Ladder_GetDepthHackFoV(const LocalClientNum_t localClientNum, double hackFov, double sceneFov)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm2
  }
  CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm3, xmm0, dword ptr [rax+656Ch]
    vmulss  xmm1, xmm7, dword ptr [rax+656Ch]
    vmovaps xmm7, [rsp+48h+var_28]
    vmulss  xmm2, xmm3, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vaddss  xmm0, xmm2, xmm1
  }
  return *(float *)&_XMM0;
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
  EdgeOctreeQuery<EdgeOctreeQuerySphere> v10; 
  __int64 v11; 
  EdgeOctreeQuerySphere v12; 
  float resultFractionPool[4]; 
  EdgeId resultIdPool; 

  v11 = -2i64;
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
  __asm { vmovss  xmm2, cs:__real@42c80000; radius }
  EdgeOctreeQuerySphere::EdgeOctreeQuerySphere(&v12, &LocalClientGlobals->predictedPlayerState.origin, *(float *)&_XMM2);
  v10.m_bucket = LADDER_CENTERLINE;
  v10.m_queryShape = &v12;
  v10.m_hint = *(_DWORD *)(v6 + 12);
  v10.m_flags = v7;
  EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute(&v10, Handler, &resultIdPool, resultFractionPool, NULL, 4ui64, &outResultCount, (unsigned int *)(v6 + 12));
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
  __int64 v6; 
  __int64 v11; 
  __int64 v13; 
  int weaponState; 
  char v32; 
  int m_prevWeaponState; 
  __int64 v43; 
  bool v44; 
  __int64 v45; 
  CgWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  int v49; 
  const dvar_t *v50; 
  int v51; 
  int time; 
  __int64 v60; 
  int v61; 
  int v62; 
  bool v68; 
  __int64 v69; 
  vec4_t *p_out; 
  __int64 v78; 
  vec4_t *p_result; 
  vec3_t angles; 
  vec4_t quat; 
  vec4_t result; 
  tmat33_t<vec3_t> mat; 
  vec4_t out; 

  v6 = hand;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 213, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 214, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 215, ASSERT_TYPE_ASSERT, "(outPose)", (const char *)&queryFormat, "outPose") )
    __debugbreak();
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  v11 = v6;
  _RSI = ps->weapState[v6].weaponState;
  if ( !(_DWORD)v6 && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) && (_DWORD)_RSI == 6 )
  {
    v13 = v6;
    *(_QWORD *)_RBX->ladderInterpData[v13].m_beginQuat.v = 0i64;
    *(_QWORD *)&_RBX->ladderInterpData[v13].m_beginQuat.xyz.z = 0i64;
    *(_QWORD *)_RBX->ladderInterpData[v13].m_currQuat.v = 0i64;
    *(_QWORD *)&_RBX->ladderInterpData[v13].m_currQuat.xyz.z = 0i64;
    weaponState = ps->weapState[v6].weaponState;
    _RBX->ladderInterpData[v13].m_fovRatio = 1.0;
    _RBX->ladderInterpData[v13].m_prevWeaponState = weaponState;
    return;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+64F4h]
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm0, xmm3
    vmovss  dword ptr [rbp+57h+mat], xmm0
    vmovss  xmm1, dword ptr [rbx+64F8h]
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rbp+57h+mat+4], xmm2
    vmovss  xmm0, dword ptr [rbx+64FCh]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rbp+57h+mat+8], xmm1
    vmovss  xmm0, dword ptr [rbx+6500h]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rbp+57h+mat+0Ch], xmm1
    vmovss  xmm2, dword ptr [rbx+6504h]
    vxorps  xmm0, xmm2, xmm3
    vmovss  dword ptr [rbp+57h+mat+10h], xmm0
    vmovss  xmm1, dword ptr [rbx+6508h]
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rbp+57h+mat+14h], xmm2
    vmovss  xmm0, dword ptr [rbx+650Ch]
    vmovss  dword ptr [rbp+57h+mat+18h], xmm0
    vmovss  xmm1, dword ptr [rbx+6510h]
    vmovss  dword ptr [rbp+57h+mat+1Ch], xmm1
    vmovss  xmm0, dword ptr [rbx+6514h]
    vmovaps [rsp+130h+var_50], xmm6
    vmovaps [rsp+130h+var_60], xmm7
    vmovss  dword ptr [rbp+57h+mat+20h], xmm0
  }
  AxisToQuat(&mat, &out);
  _R14 = outPose;
  AnglesToQuat(&outPose->angles, &quat);
  _RDI = v11;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  _R15 = (__int64)&_RBX->ladderInterpData[v11].m_beginQuat;
  __asm { vucomiss xmm6, dword ptr [r15] }
  if ( v32 )
  {
    __asm { vucomiss xmm6, dword ptr [r15+4] }
    if ( v32 )
    {
      __asm { vucomiss xmm6, dword ptr [r15+8] }
      if ( v32 )
      {
        __asm { vucomiss xmm6, dword ptr [r15+0Ch] }
        if ( v32 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+57h+quat]
            vmovss  dword ptr [r15], xmm0
            vmovss  xmm1, dword ptr [rbp+57h+quat+4]
            vmovss  dword ptr [r15+4], xmm1
            vmovss  xmm0, dword ptr [rbp+57h+quat+8]
            vmovss  dword ptr [r15+8], xmm0
            vmovss  xmm1, dword ptr [rbp+57h+quat+0Ch]
            vmovss  dword ptr [r15+0Ch], xmm1
            vmovss  xmm0, dword ptr [rbp+57h+quat]
            vmovss  dword ptr [rdi+rbx+6554h], xmm0
            vmovss  xmm1, dword ptr [rbp+57h+quat+4]
            vmovss  dword ptr [rdi+rbx+6558h], xmm1
            vmovss  xmm0, dword ptr [rbp+57h+quat+8]
            vmovss  dword ptr [rdi+rbx+655Ch], xmm0
            vmovss  xmm1, dword ptr [rbp+57h+quat+0Ch]
            vmovss  dword ptr [rdi+rbx+6560h], xmm1
          }
          _RBX->ladderInterpData[_RDI].m_fovBeginRatio = 1.0;
        }
      }
    }
  }
  m_prevWeaponState = _RBX->ladderInterpData[_RDI].m_prevWeaponState;
  v44 = 1;
  if ( m_prevWeaponState != 49 || (_DWORD)_RSI != 48 )
  {
    if ( (unsigned int)_RSI > 0x31 || (v43 = 0x2000000003040i64, !_bittest64(&v43, _RSI)) )
    {
      if ( m_prevWeaponState != 44 )
        v44 = 0;
    }
  }
  v45 = 0x1000000001040i64;
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  if ( (_DWORD)_RSI != m_prevWeaponState && v44 )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, ps);
    if ( (_DWORD)_RSI == 6 )
      goto LABEL_33;
    if ( (_DWORD)_RSI == 13 )
    {
      v49 = BG_LadderAimDropTime(ps, ViewmodelWeapon, 0, 0);
      goto LABEL_34;
    }
    if ( (unsigned int)(_RSI - 48) <= 1 )
LABEL_33:
      v49 = BG_LadderAimRaiseTime(ps, ViewmodelWeapon, 0, 0);
    else
      v49 = BG_LadderClimbDropTime(ps, ViewmodelWeapon, 0, 0);
LABEL_34:
    v50 = DCONST_DVARFLT_cg_ladderSpinTimePercent;
    v51 = v49;
    if ( !DCONST_DVARFLT_cg_ladderSpinTimePercent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ladderSpinTimePercent") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r12d
      vmulss  xmm0, xmm0, dword ptr [r13+28h]
      vcvttss2si ecx, xmm0
    }
    if ( _RBX->ladderInterpData[_RDI].m_prevWeaponState == 44 )
    {
      _RBX->ladderInterpData[_RDI].m_interpBegin = _RBX->time;
      _EAX = 6;
      __asm { vmovd   xmm1, eax }
      time = _RBX->time;
      __asm
      {
        vmovd   xmm0, esi
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm6, xmm7, xmm2
      }
    }
    else if ( (unsigned int)_RSI <= 0x30 && (v60 = 0x1000000001040i64, _bittest64(&v60, _RSI)) )
    {
      v61 = _RBX->time;
      _RBX->ladderInterpData[_RDI].m_interpBegin = v61;
      time = _ECX + v61;
      __asm { vmovaps xmm0, xmm7 }
    }
    else
    {
      _RBX->ladderInterpData[_RDI].m_interpBegin = v51 + _RBX->time - _ECX;
      time = v51 + _RBX->time;
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    _RBX->ladderInterpData[_RDI].m_interpFinish = time;
    v45 = 0x1000000001040i64;
    __asm { vmovss  dword ptr [rdi+rbx+6568h], xmm0 }
    _RBX->ladderInterpData[_RDI].m_fovBeginRatio = _RBX->ladderInterpData[_RDI].m_fovRatio;
    *(float *)_R15 = _RBX->ladderInterpData[_RDI].m_currQuat.v[0];
    *(float *)(_R15 + 4) = _RBX->ladderInterpData[_RDI].m_currQuat.v[1];
    *(float *)(_R15 + 8) = _RBX->ladderInterpData[_RDI].m_currQuat.v[2];
    *(float *)(_R15 + 12) = _RBX->ladderInterpData[_RDI].m_currQuat.v[3];
  }
  v62 = _RBX->time;
  if ( v62 >= _RBX->ladderInterpData[_RDI].m_interpBegin )
  {
    if ( _RBX->ladderInterpData[_RDI].m_interpFinish - v62 <= 0 )
    {
      __asm { vmovaps xmm3, xmm7 }
    }
    else
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edx
        vcvtsi2ss xmm1, xmm1, ecx
        vdivss  xmm3, xmm1, xmm0
      }
    }
  }
  else
  {
    __asm { vxorps  xmm3, xmm3, xmm3 }
  }
  v68 = (unsigned int)_RSI < 0x2F;
  if ( (unsigned int)_RSI > 0x2F || (v69 = 0x800000001020i64, !(v68 = _bittest64(&v69, _RSI))) )
  {
    __asm
    {
      vcomiss xmm3, xmm7
      vmovss  xmm6, dword ptr [rdi+rbx+6568h]
    }
    if ( v68 )
    {
      __asm
      {
        vmulss  xmm1, xmm6, xmm3
        vsubss  xmm0, xmm7, xmm3
        vmulss  xmm2, xmm0, dword ptr [rdi+rbx+6564h]
        vaddss  xmm2, xmm2, xmm1
        vminss  xmm6, xmm2, xmm7
      }
    }
  }
  __asm
  {
    vmovss  dword ptr [rdi+rbx+656Ch], xmm6
    vmovaps xmm7, [rsp+130h+var_60]
    vmovaps xmm6, [rsp+130h+var_50]
    vmulss  xmm2, xmm3, xmm3; frac
  }
  if ( (_DWORD)_RSI == 13 || (_DWORD)_RSI == 49 )
  {
    p_out = &out;
    goto LABEL_63;
  }
  if ( (unsigned int)_RSI <= 0x30 && _bittest64(&v45, _RSI) )
  {
    p_out = &quat;
LABEL_63:
    QuatSlerp((const vec4_t *)_R15, p_out, *(float *)&_XMM2, &result);
    p_result = &result;
    goto LABEL_64;
  }
  if ( (unsigned int)_RSI <= 0x32 )
  {
    v78 = 0x4800000004020i64;
    if ( _bittest64(&v78, _RSI) )
    {
      p_result = &out;
      _RBX->ladderInterpData[_RDI].m_interpBegin = _RBX->time;
      _RBX->ladderInterpData[_RDI].m_interpFinish = _RBX->time;
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+57h+out]
        vmovdqa xmmword ptr [rbp+57h+result], xmm0
      }
LABEL_64:
      QuatToAngles(p_result, &angles);
      if ( !outPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 559, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+130h+angles]
        vmovss  xmm1, dword ptr [rsp+130h+angles+4]
        vmovss  dword ptr [r14+48h], xmm0
        vmovss  xmm0, dword ptr [rsp+130h+angles+8]
        vmovss  dword ptr [r14+50h], xmm0
        vmovss  dword ptr [r14+4Ch], xmm1
      }
      goto LABEL_68;
    }
  }
  _RBX->ladderInterpData[_RDI].m_interpBegin = _RBX->time;
  _RBX->ladderInterpData[_RDI].m_interpFinish = _RBX->time;
  AnglesToQuat(&outPose->angles, &result);
LABEL_68:
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+result]
    vmovss  dword ptr [rdi+rbx+6554h], xmm0
    vmovss  xmm1, dword ptr [rbp+57h+result+4]
    vmovss  dword ptr [rdi+rbx+6558h], xmm1
    vmovss  xmm0, dword ptr [rbp+57h+result+8]
    vmovss  dword ptr [rdi+rbx+655Ch], xmm0
    vmovss  xmm1, dword ptr [rbp+57h+result+0Ch]
    vmovss  dword ptr [rdi+rbx+6560h], xmm1
  }
  _RBX->ladderInterpData[_RDI].m_prevWeaponState = _RSI;
}

/*
==============
CG_Ladder_PlayAnims
==============
*/
void CG_Ladder_PlayAnims(const LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex hand, DObj *const obj)
{
  int v9; 
  __int64 v10; 
  const dvar_t *v14; 
  XAnimTree *tree; 
  unsigned __int64 weaponState; 
  CgWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  bool v20; 
  bool v21; 
  __int64 v22; 
  __int64 v23; 
  int time; 
  char v27; 
  char v28; 
  __int64 v29; 
  __int64 v30; 
  bool v34; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float goalTime; 
  float goalTimea; 
  float goalTimeb; 
  float goalTimec; 
  float goalTimed; 
  float rate; 
  float ratea; 
  float rateb; 
  float ratec; 
  float rated; 
  char v68; 
  bool HasLadderHand; 
  int weaponTime; 
  vec3_t outAnchorPos; 
  vec3_t angles; 

  v9 = 2;
  v10 = hand;
  _RBP = ps;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 75, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 76, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 77, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v14 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
  if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    tree = obj->tree;
    __asm
    {
      vmovaps [rsp+128h+var_58], xmm6
      vmovaps [rsp+128h+var_68], xmm7
      vmovaps [rsp+128h+var_78], xmm8
      vmovaps [rsp+128h+var_88], xmm9
    }
    if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 85, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
      __debugbreak();
    _RSI = CG_GetLocalClientGlobals(localClientNum);
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 88, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    HasLadderHand = BG_HasLadderHand(_RBP);
    weaponState = _RBP->weapState[v10].weaponState;
    weaponTime = _RBP->weapState[v10].weaponTime;
    Instance = CgWeaponMap::GetInstance(localClientNum);
    ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, _RBP);
    v20 = BG_UsingAlternate(_RBP);
    if ( !BG_IsLadderWeapon(ViewmodelWeapon, v20) || (v21 = BG_UsingAlternate(_RBP), !BG_GetAmmoInClip(_RBP, ViewmodelWeapon, v21, WEAPON_HAND_DEFAULT)) || (v68 = 1, (_DWORD)weaponState == 12) )
      v68 = 0;
    v22 = v10;
    if ( (_DWORD)weaponState != _RSI->ladderInterpData[v10].m_prevWeaponState && (unsigned int)weaponState <= 0x31 )
    {
      v23 = 0x2000000003040i64;
      if ( _bittest64(&v23, weaponState) )
      {
        time = _RSI->time;
        _RSI->ladderInterpData[v22].m_interpBegin = time;
        _RSI->ladderInterpData[v22].m_interpFinish = weaponTime + time;
      }
    }
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vxorps  xmm7, xmm7, xmm7
    }
    if ( !HasLadderHand || (_DWORD)weaponState == 7 )
    {
      *(double *)&_XMM0 = XAnimGetGoalWeight(tree, 0, XANIM_SUBTREE_DEFAULT, 6u);
      __asm { vcomiss xmm0, xmm7 }
      if ( !(v27 | v28) )
      {
        __asm
        {
          vmovss  [rsp+128h+rate], xmm8
          vmovss  [rsp+128h+goalTime], xmm7
          vmovss  dword ptr [rsp+128h+fmt], xmm7
        }
        XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 6u, fmta, goalTimea, ratea, (scr_string_t)0, 0, 0, LINEAR, NULL);
      }
    }
    else
    {
      *(double *)&_XMM0 = XAnimGetGoalWeight(tree, 0, XANIM_SUBTREE_DEFAULT, 6u);
      __asm { vcomiss xmm0, xmm8 }
      if ( v27 )
      {
        __asm
        {
          vmovss  [rsp+128h+rate], xmm8
          vmovss  [rsp+128h+goalTime], xmm7
          vmovss  dword ptr [rsp+128h+fmt], xmm8
        }
        XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 6u, fmt, goalTime, rate, (scr_string_t)0, 0, 0, LINEAR, NULL);
      }
    }
    if ( (unsigned int)weaponState <= 0x32 && (v29 = 0x4800000003020i64, _bittest64(&v29, weaponState)) )
    {
      v9 = 1;
    }
    else if ( (_DWORD)weaponState == 49 || (_DWORD)weaponState == 14 )
    {
      v9 = 4;
    }
    else if ( (unsigned int)weaponState > 0x30 || (v30 = 0x1000000000041i64, !_bittest64(&v30, weaponState)) )
    {
      v9 = 0;
    }
    XAnimSetIntGameParameterByIndex(obj, 0x11u, v9);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, cs:__real@3a83126f; value
    }
    XAnimSetFloatGameParameterByIndex(obj, 0x19u, *(float *)&_XMM2);
    v34 = v68 && hand == WEAPON_HAND_DEFAULT;
    XAnimSetBoolGameParameterByIndex(obj, 0x1Au, v34);
    AxisToAngles(&_RSI->ladderInfo.axis, &angles);
    BG_Ladder_GetAnchorWorldPosition(&_RBP->origin, _RBP->suitIndex, 1, &outAnchorPos);
    *(double *)&_XMM0 = BG_Ladder_GetHandAnimDistance(_RBP);
    __asm { vmovaps xmm6, xmm0 }
    XAnimSetVec3GameParameterByIndex(obj, 0x13u, &outAnchorPos);
    XAnimSetVec3GameParameterByIndex(obj, 0xCu, &_RSI->ladderInfo.bottom);
    XAnimSetVec3GameParameterByIndex(obj, 0xDu, &_RSI->ladderInfo.top);
    __asm { vmovss  xmm2, dword ptr [rbp+44h]; value }
    XAnimSetFloatGameParameterByIndex(obj, 0x14u, *(float *)&_XMM2);
    __asm { vmovss  xmm2, cs:__real@41400000; value }
    XAnimSetFloatGameParameterByIndex(obj, 0x10u, *(float *)&_XMM2);
    __asm { vmovaps xmm2, xmm6; value }
    XAnimSetFloatGameParameterByIndex(obj, 0x15u, *(float *)&_XMM2);
    XAnimSetVec3GameParameterByIndex(obj, 0xEu, &angles);
    __asm { vmovss  xmm2, dword ptr [rsi+6530h]; value }
    XAnimSetFloatGameParameterByIndex(obj, 0xFu, *(float *)&_XMM2);
    XAnimSetIntGameParameterByIndex(obj, 0x12u, hand);
    XAnimSetBoolGameParameterByIndex(obj, 0x16u, 1);
    __asm { vmovaps xmm3, xmm6; handDistance }
    *(double *)&_XMM0 = BG_Ladder_GetTargetAnimationTimeClamped(&outAnchorPos, &_RSI->ladderInfo.bottom, &_RSI->ladderInfo.top, *(float *)&_XMM3);
    __asm { vmovaps xmm9, xmm0 }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBP->pm_flags, ACTIVE, 6u) )
    {
      __asm { vmovaps xmm2, xmm9; value }
      XAnimSetFloatGameParameterByIndex(obj, 0x18u, *(float *)&_XMM2);
      __asm { vxorps  xmm2, xmm2, xmm2; value }
      XAnimSetFloatGameParameterByIndex(obj, 0x17u, *(float *)&_XMM2);
    }
    if ( hand == WEAPON_HAND_DEFAULT )
    {
      if ( _RBP->ladderState.mode == LADDER_MODE_CLIMB )
      {
        _RBX = DCONST_DVARMPFLT_cg_ladderCameraAnimWeight;
        if ( !DCONST_DVARMPFLT_cg_ladderCameraAnimWeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ladderCameraAnimWeight") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm6, dword ptr [rbx+28h] }
        _RBX = DCONST_DVARFLT_cg_ladderCameraAnimBlendInTime;
        if ( !DCONST_DVARFLT_cg_ladderCameraAnimBlendInTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ladderCameraAnimBlendInTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm8, dword ptr [rbx+28h] }
        *(double *)&_XMM0 = XAnimGetGoalWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, 0xAAu);
        __asm { vcomiss xmm0, xmm7 }
        if ( v27 | v28 )
        {
          __asm
          {
            vmovss  [rsp+128h+rate], xmm7
            vmovss  [rsp+128h+goalTime], xmm8
            vmovss  dword ptr [rsp+128h+fmt], xmm6
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xAAu, fmtb, goalTimeb, rateb, (scr_string_t)0, 0, 0, LINEAR, NULL);
          __asm
          {
            vmovss  [rsp+128h+rate], xmm7
            vmovss  [rsp+128h+goalTime], xmm7
            vmovss  dword ptr [rsp+128h+fmt], xmm6
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xABu, fmtc, goalTimec, ratec, (scr_string_t)0, 0, 0, LINEAR, NULL);
        }
        __asm { vmovss  dword ptr [rsp+128h+fmt], xmm9 }
        XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, 0xABu, fmtd);
      }
      else
      {
        *(double *)&_XMM0 = XAnimGetGoalWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, 0xAAu);
        __asm { vcomiss xmm0, xmm7 }
        if ( !(v27 | v28) )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_ladderCameraAnimBlendOutTime, "cg_ladderCameraAnimBlendOutTime");
          __asm
          {
            vmovss  [rsp+128h+rate], xmm8
            vmovss  [rsp+128h+goalTime], xmm0
            vmovss  dword ptr [rsp+128h+fmt], xmm7
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xAAu, fmte, goalTimed, rated, (scr_string_t)0, 0, 0, LINEAR, NULL);
        }
      }
    }
    __asm
    {
      vmovaps xmm8, [rsp+128h+var_78]
      vmovaps xmm7, [rsp+128h+var_68]
      vmovaps xmm6, [rsp+128h+var_58]
      vmovaps xmm9, [rsp+128h+var_88]
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
  __int64 v7; 
  CgSoundSystem *v10; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  bool IsThirdPersonMode; 
  bool v14; 
  SndAliasList *ladderSlideLoopSound; 
  const centity_t *Entity; 
  const dvar_t *v18; 
  const char *v19; 
  __int64 fromServer; 
  int fromServera; 
  __int64 duration; 
  int durationa; 
  char _Buffer[1024]; 

  v7 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 571, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
  {
    LODWORD(duration) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", duration) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= CgSoundSystem::ms_allocatedCount )
  {
    LODWORD(duration) = CgSoundSystem::ms_allocatedCount;
    LODWORD(fromServer) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", fromServer, duration) )
      __debugbreak();
  }
  if ( !CgSoundSystem::ms_soundSystemArray[v7] )
  {
    LODWORD(duration) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", duration) )
      __debugbreak();
  }
  v10 = CgSoundSystem::ms_soundSystemArray[v7];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 574, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 577, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->renderingThirdPerson || (Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)LocalClientGlobals->localClientNum), IsThirdPersonMode = BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState)) )
    IsThirdPersonMode = 1;
  v14 = entNum == LocalClientGlobals->predictedPlayerState.clientNum && !IsThirdPersonMode;
  if ( !isLocalClient || (ladderSlideLoopSound = cgMedia.ladderSlideLoopSoundPlayer, !v14) )
    ladderSlideLoopSound = cgMedia.ladderSlideLoopSound;
  Entity = CG_GetEntity((const LocalClientNum_t)v7, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 585, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  *(double *)&_XMM0 = CgSoundSystem::GetFootstepVolumeScale(v10, Entity, 3, 1);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmovss  [rsp+498h+duration], xmm1
    vmovss  [rsp+498h+fromServer], xmm0
  }
  ((void (__fastcall *)(CgSoundSystem *, _QWORD, const vec3_t *, SndAliasList *, _DWORD, int, int, _DWORD))v10->PlaySurfaceSound)(v10, (unsigned int)entNum, pos, ladderSlideLoopSound, surfaceType, fromServera, durationa, 0);
  v18 = DCONST_DVARBOOL_cg_drawLadderSlideAudio;
  if ( !DCONST_DVARBOOL_cg_drawLadderSlideAudio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLadderSlideAudio") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.enabled )
  {
    v19 = "remoteClient";
    if ( isLocalClient )
      v19 = "localClient";
    j_sprintf(_Buffer, "%s LadderSlide audio is playing.\n", v19);
    __asm
    {
      vmovss  xmm3, cs:__real@3fc00000; scale
      vmovss  xmm1, cs:__real@43960000; y
      vmovss  xmm0, cs:__real@43c80000; x
    }
    CL_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, _Buffer, 0, 0);
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
  const dvar_t *v8; 
  char v29; 
  char v30; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 

  _RDI = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 418, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 419, ASSERT_TYPE_ASSERT, "(outPose)", (const char *)&queryFormat, "outPose") )
    __debugbreak();
  v8 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
  if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled && BG_HasLadderHand(_RDI) )
  {
    __asm { vmovaps [rsp+0C8h+var_38], xmm7 }
    _RAX = CG_GetLocalClientGlobals(localClientNum);
    __asm
    {
      vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rax+64F4h]
      vxorps  xmm0, xmm0, xmm7
      vmovss  dword ptr [rsp+0C8h+axis], xmm0
      vmovss  xmm1, dword ptr [rax+64F8h]
      vxorps  xmm2, xmm1, xmm7
      vmovss  dword ptr [rsp+0C8h+axis+4], xmm2
      vmovss  xmm0, dword ptr [rax+64FCh]
      vxorps  xmm1, xmm0, xmm7
      vmovss  dword ptr [rsp+0C8h+axis+8], xmm1
      vmovss  xmm0, dword ptr [rax+6500h]
      vxorps  xmm1, xmm0, xmm7
      vmovss  dword ptr [rsp+0C8h+axis+0Ch], xmm1
      vmovss  xmm2, dword ptr [rax+6504h]
      vxorps  xmm0, xmm2, xmm7
      vmovss  dword ptr [rsp+0C8h+axis+10h], xmm0
      vmovss  xmm1, dword ptr [rax+6508h]
      vxorps  xmm2, xmm1, xmm7
      vmovss  dword ptr [rsp+0C8h+axis+14h], xmm2
      vmovss  xmm1, dword ptr [rax+650Ch]
      vmovss  dword ptr [rsp+0C8h+axis+18h], xmm1
      vmovss  xmm2, dword ptr [rax+6510h]
      vmovss  dword ptr [rsp+0C8h+axis+1Ch], xmm2
      vmovss  xmm1, dword ptr [rax+6514h]
      vmovss  dword ptr [rsp+0C8h+axis+20h], xmm1
    }
    AxisToAngles(&axis, &angles);
    __asm { vmovss  xmm0, dword ptr [rsp+0C8h+angles+4]; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovaps xmm1, xmm0; angle2
      vmovss  xmm0, dword ptr [rdi+1DCh]; angle1
    }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vandps  xmm2, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps xmm3, xmm0
      vmovss  xmm0, cs:LEFT_DIFF_BEGIN_0
      vcomiss xmm2, xmm0
    }
    if ( !(v29 | v30) )
    {
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vcomiss xmm3, xmm2
        vmovaps [rsp+0C8h+var_28], xmm6
      }
      if ( v29 | v30 )
      {
        __asm
        {
          vxorps  xmm2, xmm0, xmm7; max
          vmovss  xmm0, cs:LEFT_DIFF_END_0
          vxorps  xmm1, xmm0, xmm7; min
          vmovaps xmm0, xmm3; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  xmm1, cs:LEFT_DIFF_BEGIN_0
          vaddss  xmm2, xmm0, xmm1
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm2, cs:LEFT_DIFF_END_0; max
          vmovaps xmm1, xmm0; min
          vmovaps xmm0, xmm3; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  xmm1, cs:LEFT_DIFF_BEGIN_0
          vsubss  xmm2, xmm0, xmm1
        }
      }
      __asm
      {
        vmovss  xmm0, cs:LEFT_DIFF_END_0
        vsubss  xmm1, xmm0, xmm1
        vdivss  xmm6, xmm2, xmm1
      }
      CG_GetPoseOrigin(outPose, &outOrigin);
      __asm
      {
        vmulss  xmm0, xmm6, cs:__real@40c00000
        vsubss  xmm1, xmm0, cs:__real@41700000
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, cs:__real@41200000
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm3, xmm1
        vmulss  xmm3, xmm2, cs:LEFT_MOVE_DIST
        vxorps  xmm4, xmm3, xmm7
        vmulss  xmm3, xmm4, dword ptr [rsp+0C8h+axis+10h]
        vmulss  xmm2, xmm4, dword ptr [rsp+0C8h+axis+0Ch]
        vaddss  xmm2, xmm2, dword ptr [rsp+0C8h+outOrigin]
        vmovss  dword ptr [rsp+0C8h+outOrigin], xmm2
        vaddss  xmm2, xmm3, dword ptr [rsp+0C8h+outOrigin+4]
        vmulss  xmm3, xmm4, dword ptr [rsp+0C8h+axis+14h]
        vmovss  dword ptr [rsp+0C8h+outOrigin+4], xmm2
        vaddss  xmm2, xmm3, dword ptr [rsp+0C8h+outOrigin+8]
        vmovss  dword ptr [rsp+0C8h+outOrigin+8], xmm2
      }
      CG_SetPoseOrigin(outPose, &outOrigin);
      __asm { vmovaps xmm6, [rsp+0C8h+var_28] }
    }
    __asm { vmovaps xmm7, [rsp+0C8h+var_38] }
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
  CgHandler *Handler; 
  __int64 v5; 
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
    _RDI = CG_GetLocalClientGlobals(localClientNum);
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 484, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( _RDI == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 487, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Handler = CgHandler::getHandler(localClientNum);
    if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ladder.cpp", 490, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
      __debugbreak();
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->predictedPlayerState.pm_flags, ACTIVE, 6u) )
    {
      v5 = (__int64)Handler->GetEdgeQueryCache(Handler, _RDI->predictedPlayerState.clientNum);
      if ( BG_GetLadderInfo(&_RDI->predictedPlayerState.origin, Handler, &outLadderInfo, NULL, 0, (unsigned int *)(v5 + 8), (unsigned int *)(v5 + 16)) )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+0A8h+outLadderInfo.axis]
          vmovups ymm1, ymmword ptr [rsp+0A8h+outLadderInfo.axis+20h]
        }
        rungDistance = outLadderInfo.rungDistance;
        __asm
        {
          vmovups ymmword ptr [rdi+64F4h], ymm0
          vmovups ymmword ptr [rdi+6514h], ymm1
        }
        _RDI->ladderInfo.rungDistance = rungDistance;
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
  const dvar_t *v9; 
  CgHandler *Handler; 
  MapEnts *mapEnts; 
  __int64 v13; 
  __int64 v16; 
  const BgHandler *v17; 
  MapEdgeList *v21; 
  unsigned int v22; 
  unsigned int EdgeIndex; 
  char v24; 
  char v34; 
  __int64 v55; 
  __int64 v61; 
  MapEdgeList *v63; 
  unsigned int v64; 
  unsigned int v65; 
  char v66; 
  float *v69; 
  __int64 v70; 
  vec3_t *p_point; 
  __int64 v87; 
  char *fmt; 
  char *fmta; 
  __int64 v98; 
  __int64 v99; 
  EdgeId edgeId; 
  CgHandler *v101; 
  EdgeId v102; 
  vec3_t outLineSegment[2]; 
  vec3_t start[2]; 
  vec3_t point; 
  int v106[24996]; 

  v9 = DVARBOOL_cg_ladders_validate;
  if ( !DVARBOOL_cg_ladders_validate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ladders_validate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+187E0h+var_30], xmm6
      vmovaps [rsp+187E0h+var_90], xmm12
      vmovaps [rsp+187E0h+var_A0], xmm13
    }
    Dvar_SetBool_Internal(DVARBOOL_cg_ladders_validate, 0);
    memset_0(&point, 0, 0x186A0ui64);
    Handler = CgHandler::getHandler(localClientNum);
    mapEnts = cm.mapEnts;
    v13 = 0i64;
    __asm
    {
      vmovss  xmm13, cs:__real@3f000000
      vmovss  xmm12, cs:__real@bf000000
    }
    v16 = 0i64;
    v101 = Handler;
    v17 = Handler;
    if ( cm.mapEnts->numEdgeLists )
    {
      __asm
      {
        vmovaps [rsp+187E0h+var_40], xmm7
        vmovaps [rsp+187E0h+var_50], xmm8
        vmovaps [rsp+187E0h+var_60], xmm9
        vmovsd  xmm9, cs:__real@4028000000000000
        vmovaps [rsp+187E0h+var_70], xmm10
        vmovss  xmm10, cs:__real@41400000
        vmovaps [rsp+187E0h+var_80], xmm11
        vmovss  xmm11, cs:__real@3dcccccd
      }
      while ( (unsigned int)v13 < 0x1388 )
      {
        v21 = mapEnts->edgeLists[v16];
        if ( v21 )
        {
          if ( v21->valid )
          {
            v22 = 0;
            if ( v21->numEdges )
            {
              while ( 1 )
              {
                if ( (unsigned int)v13 >= 0x1388 )
                {
LABEL_21:
                  mapEnts = cm.mapEnts;
                  break;
                }
                EdgeIndex = MapEdgeList_MakeEdgeIndex(v16, v22);
                EdgeId::Set(&edgeId, EdgeIndex);
                if ( (Edge_GetFlags(edgeId) & 4) != 0 )
                {
                  Edge_GetLineSegment(v17, edgeId, (vec3_t (*)[2])outLineSegment);
                  __asm
                  {
                    vmovss  xmm2, dword ptr [rsp+187E0h+outLineSegment+8]
                    vmovss  xmm6, dword ptr [rsp+187E0h+outLineSegment+14h]
                    vmovss  xmm0, dword ptr [rsp+187E0h+outLineSegment]
                    vmovss  xmm4, dword ptr [rsp+187E0h+outLineSegment+0Ch]
                    vmovss  xmm1, dword ptr [rsp+187E0h+outLineSegment+4]
                    vmovss  xmm5, dword ptr [rsp+187E0h+outLineSegment+10h]
                    vsubss  xmm3, xmm2, xmm6
                    vcomiss xmm3, xmm13
                    vsubss  xmm7, xmm0, xmm4
                    vsubss  xmm8, xmm1, xmm5
                  }
                  if ( !(v24 | v34) )
                  {
                    _RAX = 5 * v13;
                    __asm
                    {
                      vmovss  dword ptr [rbp+rax*4+186E0h+point], xmm0
                      vmovss  dword ptr [rbp+rax*4+186E0h+point+4], xmm1
                      vmovss  dword ptr [rbp+rax*4+186E0h+point+8], xmm2
                    }
LABEL_17:
                    __asm
                    {
                      vmulss  xmm1, xmm8, xmm8
                      vmulss  xmm0, xmm7, xmm7
                      vaddss  xmm2, xmm1, xmm0
                      vmulss  xmm1, xmm3, xmm3
                      vaddss  xmm2, xmm2, xmm1
                      vsqrtss xmm6, xmm2, xmm2
                      vmovaps xmm0, xmm6; X
                      vmovaps xmm1, xmm10; Y
                    }
                    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
                    __asm { vcomiss xmm0, xmm11 }
                    if ( !(v24 | v34) )
                    {
                      _RAX = 5i64 * (unsigned int)v13;
                      __asm
                      {
                        vmovss  xmm3, dword ptr [rbp+rax*4+186E0h+point+4]
                        vmovss  xmm2, dword ptr [rbp+rax*4+186E0h+point]
                        vmovss  xmm1, dword ptr [rbp+rax*4+186E0h+point+8]
                        vcvtss2sd xmm3, xmm3, xmm3
                        vcvtss2sd xmm2, xmm2, xmm2
                        vcvtss2sd xmm0, xmm6, xmm6
                        vmovsd  [rsp+187E0h+var_187B0], xmm9
                        vcvtss2sd xmm1, xmm1, xmm1
                        vmovsd  [rsp+187E0h+var_187B8], xmm0
                        vmovq   r9, xmm3
                        vmovq   r8, xmm2
                        vmovsd  [rsp+187E0h+fmt], xmm1
                      }
                      Com_PrintWarning(34, "WARNING: ladder at %0.2f %0.2f %0.2f has a segment length (%0.2f) that is not a multiple of %0.2f. \n", _R8, _R9, fmt, v98, v99);
                    }
                    v55 = 5i64 * (unsigned int)v13;
                    v13 = (unsigned int)(v13 + 1);
                    v17 = v101;
                    v106[v55] = EdgeIndex;
                    goto LABEL_20;
                  }
                  __asm { vcomiss xmm3, xmm12 }
                  if ( v24 )
                  {
                    _RAX = 5 * v13;
                    __asm
                    {
                      vmovss  dword ptr [rbp+rax*4+186E0h+point], xmm4
                      vmovss  dword ptr [rbp+rax*4+186E0h+point+4], xmm5
                      vmovss  dword ptr [rbp+rax*4+186E0h+point+8], xmm6
                    }
                    goto LABEL_17;
                  }
                }
LABEL_20:
                if ( ++v22 >= v21->numEdges )
                  goto LABEL_21;
              }
            }
          }
        }
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= mapEnts->numEdgeLists )
          break;
      }
      __asm
      {
        vmovaps xmm10, [rsp+187E0h+var_70]
        vmovaps xmm9, [rsp+187E0h+var_60]
        vmovaps xmm8, [rsp+187E0h+var_50]
        vmovaps xmm7, [rsp+187E0h+var_40]
        vmovaps xmm11, [rsp+187E0h+var_80]
      }
    }
    v61 = 0i64;
    if ( mapEnts->numEdgeLists )
    {
      __asm { vmovss  xmm6, cs:__real@41c80000 }
      do
      {
        v63 = mapEnts->edgeLists[v61];
        if ( v63 )
        {
          if ( v63->valid )
          {
            v64 = 0;
            if ( v63->numEdges )
            {
              do
              {
                v65 = MapEdgeList_MakeEdgeIndex(v61, v64);
                EdgeId::Set(&v102, v65);
                if ( (Edge_GetFlags(v102) & 4) != 0 )
                {
                  Edge_GetLineSegment(v17, v102, (vec3_t (*)[2])start);
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+187E0h+start+8]
                    vsubss  xmm1, xmm0, dword ptr [rbp+186E0h+start+14h]
                    vcomiss xmm1, xmm13
                  }
                  if ( v66 | v34 )
                  {
                    __asm { vcomiss xmm1, xmm12 }
                    if ( !v66 )
                    {
                      if ( (_DWORD)v13 )
                      {
                        v69 = &point.v[2];
                        v70 = (unsigned int)v13;
                        p_point = &point;
                        do
                        {
                          ProjectPointOntoVectorClamped(p_point, start, &start[1], outLineSegment, (float *)&edgeId);
                          __asm
                          {
                            vmovss  xmm0, dword ptr [rsp+187E0h+outLineSegment]
                            vsubss  xmm3, xmm0, dword ptr [rbx-8]
                            vmovss  xmm1, dword ptr [rsp+187E0h+outLineSegment+4]
                            vsubss  xmm2, xmm1, dword ptr [rbx-4]
                            vmovss  xmm0, dword ptr [rsp+187E0h+outLineSegment+8]
                            vsubss  xmm4, xmm0, dword ptr [rbx]
                            vmulss  xmm2, xmm2, xmm2
                            vmulss  xmm1, xmm3, xmm3
                            vmulss  xmm0, xmm4, xmm4
                            vaddss  xmm3, xmm2, xmm1
                            vaddss  xmm2, xmm3, xmm0
                            vcomiss xmm2, xmm6
                          }
                          if ( v24 )
                            *((_BYTE *)v69 + 4) = 1;
                          p_point = (vec3_t *)((char *)p_point + 20);
                          v69 += 5;
                          --v70;
                        }
                        while ( v70 );
                      }
                    }
                  }
                }
                v17 = v101;
                ++v64;
              }
              while ( v64 < v63->numEdges );
              mapEnts = cm.mapEnts;
            }
          }
        }
        v17 = v101;
        v61 = (unsigned int)(v61 + 1);
      }
      while ( (unsigned int)v61 < mapEnts->numEdgeLists );
    }
    __asm
    {
      vmovaps xmm13, [rsp+187E0h+var_A0]
      vmovaps xmm12, [rsp+187E0h+var_90]
      vmovaps xmm6, [rsp+187E0h+var_30]
    }
    if ( (_DWORD)v13 )
    {
      _RBX = &point.v[2];
      v87 = (unsigned int)v13;
      do
      {
        if ( !*((_BYTE *)_RBX + 4) )
        {
          __asm
          {
            vmovss  xmm3, dword ptr [rbx-4]
            vmovss  xmm2, dword ptr [rbx-8]
            vmovss  xmm0, dword ptr [rbx]
            vcvtss2sd xmm3, xmm3, xmm3
            vcvtss2sd xmm2, xmm2, xmm2
            vcvtss2sd xmm0, xmm0, xmm0
            vmovq   r9, xmm3
            vmovq   r8, xmm2
            vmovsd  [rsp+187E0h+fmt], xmm0
          }
          Com_PrintWarning(34, "WARNING: ladder at %0.2f %0.2f %0.2f did not have a width edge. \n", _R8, _R9, fmta);
        }
        _RBX += 5;
        --v87;
      }
      while ( v87 );
    }
  }
}

