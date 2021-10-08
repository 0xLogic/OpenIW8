/*
==============
CG_PlayerSecondaryCollision_Init
==============
*/

void CG_PlayerSecondaryCollision_Init(void)
{
  ?CG_PlayerSecondaryCollision_Init@@YAXXZ();
}

/*
==============
CollAvoid_CalculateCmdAvoidance
==============
*/

void __fastcall CollAvoid_CalculateCmdAvoidance(LocalClientNum_t localClientNum, const playerState_s *ps, float deltaTime, CollAvoidItem *avoidItem, usercmd_s *cmd)
{
  ?CollAvoid_CalculateCmdAvoidance@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@MPEAUCollAvoidItem@@PEAUusercmd_s@@@Z(localClientNum, ps, deltaTime, avoidItem, cmd);
}

/*
==============
CollAvoid_DebugLine
==============
*/

void __fastcall CollAvoid_DebugLine(const vec3_t *startPos, const vec3_t *endPos, const vec4_t *color, const int time)
{
  ?CollAvoid_DebugLine@@YAXAEBTvec3_t@@0AEBTvec4_t@@H@Z(startPos, endPos, color, time);
}

/*
==============
CollAvoid_GetLocalClientData
==============
*/

CollAvoidData *__fastcall CollAvoid_GetLocalClientData(LocalClientNum_t localClientNum)
{
  return ?CollAvoid_GetLocalClientData@@YAPEAUCollAvoidData@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CollAvoid_WriteAvoidanceToCmd
==============
*/

void __fastcall CollAvoid_WriteAvoidanceToCmd(LocalClientNum_t localClientNum, const playerState_s *ps, usercmd_s *cmd, const vec3_t *avoidAgg)
{
  ?CollAvoid_WriteAvoidanceToCmd@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@PEAUusercmd_s@@AEBTvec3_t@@@Z(localClientNum, ps, cmd, avoidAgg);
}

/*
==============
CollAvoid_UpdateMoveCmd
==============
*/

void __fastcall CollAvoid_UpdateMoveCmd(LocalClientNum_t localClientNum, const playerState_s *ps, float deltaTime, usercmd_s *cmd)
{
  ?CollAvoid_UpdateMoveCmd@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@MPEAUusercmd_s@@@Z(localClientNum, ps, deltaTime, cmd);
}

/*
==============
CG_PlayerSecondaryCollision_StartBroadphaseWorker
==============
*/

void __fastcall CG_PlayerSecondaryCollision_StartBroadphaseWorker(const LocalClientNum_t localClientNum, bool shouldRunPrediction, const playerState_s *const ps)
{
  ?CG_PlayerSecondaryCollision_StartBroadphaseWorker@@YAXW4LocalClientNum_t@@_NQEBUplayerState_s@@@Z(localClientNum, shouldRunPrediction, ps);
}

/*
==============
CollAvoid_ShouldUpdateMoveCmd
==============
*/

bool __fastcall CollAvoid_ShouldUpdateMoveCmd(LocalClientNum_t localClientNum)
{
  return ?CollAvoid_ShouldUpdateMoveCmd@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CollAvoid_DebugTraceStar
==============
*/

void __fastcall CollAvoid_DebugTraceStar(const vec3_t *startPos, const vec3_t *endPos, const float fraction, const vec4_t *color, const int time)
{
  ?CollAvoid_DebugTraceStar@@YAXAEBTvec3_t@@0MAEBTvec4_t@@H@Z(startPos, endPos, fraction, color, time);
}

/*
==============
CollAvoid_ShouldAvoidTarget
==============
*/

bool __fastcall CollAvoid_ShouldAvoidTarget(LocalClientNum_t localClientNum, const playerState_s *ps, CollAvoidItem *avoidItem)
{
  return ?CollAvoid_ShouldAvoidTarget@@YA_NW4LocalClientNum_t@@PEBUplayerState_s@@PEAUCollAvoidItem@@@Z(localClientNum, ps, avoidItem);
}

/*
==============
CollAvoid_DebugStar
==============
*/

void __fastcall CollAvoid_DebugStar(const vec3_t *pos, const vec4_t *color, const int time)
{
  ?CollAvoid_DebugStar@@YAXAEBTvec3_t@@AEBTvec4_t@@H@Z(pos, color, time);
}

/*
==============
CG_PlayerSecondaryCollision_GetBroadphaseWorkerResult
==============
*/

bool __fastcall CG_PlayerSecondaryCollision_GetBroadphaseWorkerResult(const LocalClientNum_t localClientNum, workerTrace_t *outResult)
{
  return ?CG_PlayerSecondaryCollision_GetBroadphaseWorkerResult@@YA_NW4LocalClientNum_t@@PEAUworkerTrace_t@@@Z(localClientNum, outResult);
}

/*
==============
CollAvoid_UpdateAvoidTargets
==============
*/

void __fastcall CollAvoid_UpdateAvoidTargets(LocalClientNum_t localClientNum)
{
  ?CollAvoid_UpdateAvoidTargets@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CollAvoid_IsUsingAvoidance
==============
*/

bool __fastcall CollAvoid_IsUsingAvoidance()
{
  return ?CollAvoid_IsUsingAvoidance@@YA_NXZ();
}

/*
==============
CollAvoid_PredictAvoidItems
==============
*/

void __fastcall CollAvoid_PredictAvoidItems(CollAvoidData *caData, float deltaTime)
{
  ?CollAvoid_PredictAvoidItems@@YAXPEAUCollAvoidData@@M@Z(caData, deltaTime);
}

/*
==============
CollAvoid_ShouldAddAvoidTarget
==============
*/

bool __fastcall CollAvoid_ShouldAddAvoidTarget(cg_t *cgameGlob, const playerState_s *ps, const centity_t *cent)
{
  return ?CollAvoid_ShouldAddAvoidTarget@@YA_NPEAVcg_t@@PEBUplayerState_s@@PEBUcentity_t@@@Z(cgameGlob, ps, cent);
}

/*
==============
CollAvoid_ClearAvoidList
==============
*/

void __fastcall CollAvoid_ClearAvoidList(LocalClientNum_t localClientNum)
{
  ?CollAvoid_ClearAvoidList@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CollAvoid_DebugTraceLine
==============
*/

void __fastcall CollAvoid_DebugTraceLine(const vec3_t *startPos, const vec3_t *endPos, const float fraction, const vec4_t *color, const int time)
{
  ?CollAvoid_DebugTraceLine@@YAXAEBTvec3_t@@0MAEBTvec4_t@@H@Z(startPos, endPos, fraction, color, time);
}

/*
==============
CollAvoid_AddAvoidTarget
==============
*/

void __fastcall CollAvoid_AddAvoidTarget(LocalClientNum_t localClientNum, cg_t *cgameGlob, const centity_t *cent, CollAvoidData *caData)
{
  ?CollAvoid_AddAvoidTarget@@YAXW4LocalClientNum_t@@PEAVcg_t@@PEBUcentity_t@@PEAUCollAvoidData@@@Z(localClientNum, cgameGlob, cent, caData);
}

/*
==============
CollAvoid_CmdHasAvoidance
==============
*/

bool __fastcall CollAvoid_CmdHasAvoidance(const usercmd_s *cmd)
{
  return ?CollAvoid_CmdHasAvoidance@@YA_NPEBUusercmd_s@@@Z(cmd);
}

/*
==============
CG_PlayerSecondaryCollision_GetBroadphaseWorkerResult
==============
*/
bool CG_PlayerSecondaryCollision_GetBroadphaseWorkerResult(const LocalClientNum_t localClientNum, workerTrace_t *outResult)
{
  __int64 v3; 
  volatile unsigned int state; 
  __int64 v11; 

  _RDI = outResult;
  v3 = localClientNum;
  if ( !outResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 698, ASSERT_TYPE_ASSERT, "(outResult)", (const char *)&queryFormat, "outResult") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 699, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_playerSecondaryCollisionResults ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_playerSecondaryCollisionResults )\n\t%i not in [0, %i)", v11, 2) )
      __debugbreak();
  }
  _RBX = &s_playerSecondaryCollisionResults[v3];
  state = _RBX->state;
  if ( state )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "CG_PlayerSecondaryCollision_GetBroadphaseWorkerResult");
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_TRACE_REAR_COLLISION);
    if ( _RBX->state != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 711, ASSERT_TYPE_ASSERT, "( results->state ) == ( WORKER_TRACE_FINISHED )", "%s == %s\n\t%i, %i", "results->state", "WORKER_TRACE_FINISHED", _RBX->state, 2) )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rdi], ymm0
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups ymmword ptr [rdi+20h], ymm1
      vmovups ymm0, ymmword ptr [rbx+40h]
      vmovups ymmword ptr [rdi+40h], ymm0
      vmovups ymm1, ymmword ptr [rbx+60h]
      vmovups ymmword ptr [rdi+60h], ymm1
    }
    Sys_ProfEndNamedEvent();
    LOBYTE(state) = 1;
  }
  return state;
}

/*
==============
CG_PlayerSecondaryCollision_GetParameters
==============
*/
void CG_PlayerSecondaryCollision_GetParameters(const playerState_s *ps, float *outCylinderRadius, float *outCylinderTopHeight, float *outCylinderBottomHeight)
{
  int suitIndex; 
  EffectiveStance EffectiveStanceForWorldModelAnimation; 
  const dvar_t *v16; 
  char v23; 
  const dvar_t *v31; 
  double v43; 
  double v44; 
  Bounds bounds; 

  _R15 = outCylinderBottomHeight;
  _R14 = outCylinderTopHeight;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 573, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  suitIndex = ps->suitIndex;
  __asm { vmovaps [rsp+0F8h+var_58], xmm6 }
  BG_GetSuitDef(suitIndex);
  EffectiveStanceForWorldModelAnimation = PM_GetEffectiveStanceForWorldModelAnimation(ps);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_68], xmm7
      vmovaps [rsp+0F8h+var_78], xmm8
    }
    *(double *)&_XMM0 = BG_Suit_GetBoundsRadius(ps);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = BG_Suit_GetBoundsHeight(ps, PM_EFF_STANCE_LASTSTANDCRAWL);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vxorps  xmm7, xmm7, xmm7
      vmovss  dword ptr [rsp+0F8h+bounds.midPoint+8], xmm1
      vmovss  dword ptr [rsp+0F8h+bounds.halfSize+8], xmm1
      vmovss  dword ptr [rsp+0F8h+bounds.midPoint], xmm7
      vmovss  dword ptr [rsp+0F8h+bounds.midPoint+4], xmm7
      vmovss  dword ptr [rsp+0F8h+bounds.halfSize], xmm6
      vmovss  dword ptr [rsp+0F8h+bounds.halfSize+4], xmm6
    }
    *(double *)&_XMM0 = BG_PlayerCollision_GetCollisionStickLength(&bounds);
    v16 = DVARINT_playerLastStandCollisionTestSteps;
    __asm { vmovaps xmm8, xmm0 }
    if ( !DVARINT_playerLastStandCollisionTestSteps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerLastStandCollisionTestSteps") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
    _RAX = outCylinderRadius;
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vaddss  xmm2, xmm1, cs:horizPadding
      vmovss  dword ptr [rax], xmm2
    }
    *(double *)&_XMM0 = BG_Suit_GetBoundsHeight(ps, PM_EFF_STANCE_LASTSTANDCRAWL);
    __asm
    {
      vaddss  xmm0, xmm0, cs:vertPadding
      vsubss  xmm1, xmm8, cs:vertPadding
      vmovaps xmm8, [rsp+0F8h+var_78]
      vmovss  dword ptr [r14], xmm0
      vmaxss  xmm0, xmm1, xmm7
      vmovaps xmm7, [rsp+0F8h+var_68]
    }
  }
  else
  {
    _RDI = DVARFLT_playerButtCollisionOffset;
    if ( !DVARFLT_playerButtCollisionOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerButtCollisionOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    v31 = DVARFLT_playerButtCollisionClientBroadphaseExtraRadius;
    if ( !DVARFLT_playerButtCollisionClientBroadphaseExtraRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerButtCollisionClientBroadphaseExtraRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    _RAX = outCylinderRadius;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [r12+220h]
      vaddss  xmm1, xmm0, xmm6
      vaddss  xmm2, xmm1, dword ptr [rdi+28h]
      vmovss  dword ptr [rax], xmm2
    }
    *(double *)&_XMM0 = BG_Suit_GetBoundsHeight(ps, EffectiveStanceForWorldModelAnimation);
    __asm { vmovss  dword ptr [r14], xmm0 }
    _RBX = DCONST_DVARMPFLT_playerCollisionStandingStickHeight;
    if ( !DCONST_DVARMPFLT_playerCollisionStandingStickHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionStandingStickHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  __asm
  {
    vmovss  dword ptr [r15], xmm0
    vmovss  xmm1, dword ptr [r14]
    vcomiss xmm0, xmm1
    vmovaps xmm6, [rsp+0F8h+var_58]
  }
  if ( !v23 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm1, xmm1
      vmovss  xmm1, dword ptr [r15]
      vmovsd  [rsp+0F8h+var_B8], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+0F8h+var_C0], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 600, ASSERT_TYPE_ASSERT, "( outCylinderBottomHeight ) < ( outCylinderTopHeight )", "%s < %s\n\t%g, %g", "outCylinderBottomHeight", "outCylinderTopHeight", v43, v44) )
      __debugbreak();
  }
}

/*
==============
CG_PlayerSecondaryCollision_Init
==============
*/
void CG_PlayerSecondaryCollision_Init(void)
{
  unsigned int i; 
  __int64 v1; 

  for ( i = 0; i < 2; ++i )
  {
    v1 = (int)i;
    s_playerSecondaryCollisionResults[v1].state = 0;
  }
}

/*
==============
CG_PlayerSecondaryCollision_StartBroadphaseWorker
==============
*/
void CG_PlayerSecondaryCollision_StartBroadphaseWorker(const LocalClientNum_t localClientNum, bool shouldRunPrediction, const playerState_s *const ps)
{
  __int64 v6; 
  workerTrace_t *v9; 
  cg_t *LocalClientGlobals; 
  bool v25; 
  int clientNum; 
  float outCylinderBottomHeight; 
  float outCylinderTopHeight; 
  float outCylinderRadius; 
  workerTrace_t *data; 
  int v54; 
  float v56; 
  float v58; 
  int v61; 
  float v63; 
  int v64; 
  int v65; 
  TraceExtents extents; 
  int v67; 
  int v68; 
  int v69; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  int v73; 
  char v74; 
  playerState_s *p_predictedPlayerState; 
  float v77; 
  vec3_t end; 
  vec3_t start; 

  v6 = localClientNum;
  _RDI = ps;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 607, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_playerSecondaryCollisionResults ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_playerSecondaryCollisionResults )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v9 = &s_playerSecondaryCollisionResults[v6];
  if ( v9->state == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 610, ASSERT_TYPE_ASSERT, "( results->state ) != ( WORKER_TRACE_STARTED )", "%s != %s\n\t%i, %i", "results->state", "WORKER_TRACE_STARTED", v9->state, 1) )
    __debugbreak();
  v9->state = 0;
  if ( shouldRunPrediction && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
  {
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 624, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !_RDI->pm_type )
    {
      __asm
      {
        vmovaps [rsp+220h+var_30], xmm6
        vmovaps [rsp+220h+var_40], xmm7
        vmovaps [rsp+220h+var_50], xmm8
      }
      v9->state = 1;
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
      __asm
      {
        vmovss  xmm3, cs:__real@3a83126f
        vxorps  xmm4, xmm4, xmm4
        vcvtsi2ss xmm4, xmm4, dword ptr [rax+65E4h]
        vmulss  xmm0, xmm4, dword ptr [rdi+3Ch]
        vmulss  xmm0, xmm0, xmm3
        vaddss  xmm1, xmm0, dword ptr [rdi+30h]
        vmulss  xmm0, xmm4, dword ptr [rdi+40h]
        vmovss  dword ptr [rbp+120h+var_A0], xmm1
        vmulss  xmm1, xmm0, xmm3
        vaddss  xmm2, xmm1, dword ptr [rdi+34h]
        vmulss  xmm0, xmm4, dword ptr [rdi+44h]
        vmulss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rbp+120h+var_A0+4], xmm2
        vaddss  xmm2, xmm1, dword ptr [rdi+38h]
      }
      _R14 = LocalClientGlobals;
      __asm { vmovss  [rbp+120h+var_98], xmm2 }
      CG_PlayerSecondaryCollision_GetParameters(_RDI, &outCylinderRadius, &outCylinderTopHeight, &outCylinderBottomHeight);
      v25 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, ACTIVE, 0xBu);
      __asm
      {
        vmovss  xmm7, [rsp+220h+outCylinderBottomHeight]
        vmovss  xmm8, [rsp+220h+outCylinderTopHeight]
        vmovss  xmm6, [rsp+220h+outCylinderRadius]
      }
      if ( v25 && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_playerLastStandDebug, "playerLastStandDebug") )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+34h]
          vaddss  xmm0, xmm7, dword ptr [rdi+38h]
          vmovss  xmm3, dword ptr [rdi+30h]
          vmovss  dword ptr [rbp+120h+start+8], xmm0
          vaddss  xmm0, xmm8, dword ptr [rdi+38h]
          vmovss  dword ptr [rbp+120h+start+4], xmm2
          vmovss  dword ptr [rbp+120h+end+4], xmm2
          vmovaps xmm2, xmm6; radius
          vmovss  dword ptr [rbp+120h+end+8], xmm0
          vmovss  dword ptr [rbp+120h+start], xmm3
          vmovss  dword ptr [rbp+120h+end], xmm3
        }
        CG_DebugCylinder(&start, &end, *(float *)&_XMM2, &colorBlue, depthTest_1, duration_2);
      }
      __asm
      {
        vmulss  xmm0, xmm7, cs:__real@3f000000
        vmovsd  xmm5, [rbp+120h+var_A0]
        vmulss  xmm1, xmm8, cs:__real@3f000000
        vxorps  xmm4, xmm4, xmm4
        vaddss  xmm2, xmm0, xmm1
      }
      v56 = v77;
      v58 = v77;
      __asm
      {
        vinsertps xmm4, xmm4, xmm4, 10h
        vsubss  xmm3, xmm1, xmm0
        vunpcklps xmm0, xmm6, xmm3
      }
      v64 = v6;
      v73 = 0;
      data = &s_playerSecondaryCollisionResults[v6];
      v54 = 1;
      v61 = 65553;
      __asm
      {
        vmovsd  [rsp+220h+var_1B4], xmm5
        vmovsd  [rsp+220h+var_1A8], xmm5
        vmovsd  [rbp+120h+var_18C], xmm0
      }
      v74 = 1;
      __asm
      {
        vinsertps xmm4, xmm4, xmm6, 30h ; '0'
        vinsertps xmm4, xmm4, xmm2, 20h ; ' '
        vmovups [rbp+120h+var_19C], xmm4
        vmovsd  xmm0, qword ptr [r14+699Ch]
        vmovsd  [rbp+120h+var_180], xmm0
      }
      v63 = _R14->refdef.viewOffset.v[2];
      p_predictedPlayerState = &_R14->predictedPlayerState;
      clientNum = _RDI->clientNum;
      extents.start.v[2] = v77;
      extents.end.v[2] = v77;
      v67 = clientNum;
      v65 = 0;
      v72 = -1i64;
      v70 = 0i64;
      v69 = 65553;
      v68 = 1;
      v71 = 0i64;
      __asm
      {
        vmovsd  qword ptr [rbp+120h+extents.start], xmm5
        vmovsd  qword ptr [rbp+120h+extents.end], xmm5
      }
      CM_CalcTraceExtents(&extents);
      Sys_AddWorkerCmd(WRKCMD_TRACE_REAR_COLLISION, &data);
      __asm
      {
        vmovaps xmm8, [rsp+220h+var_50]
        vmovaps xmm7, [rsp+220h+var_40]
        vmovaps xmm6, [rsp+220h+var_30]
      }
    }
  }
}

/*
==============
CollAvoid_AddAvoidTarget
==============
*/
void CollAvoid_AddAvoidTarget(LocalClientNum_t localClientNum, cg_t *cgameGlob, const centity_t *cent, CollAvoidData *caData)
{
  unsigned int number; 
  unsigned int v13; 
  unsigned int v14; 
  const DObj *v15; 
  bool v16; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  const snapshot_t *nextSnap; 
  const snapshot_t *snap; 
  int serverTime; 
  __int64 v48; 
  unsigned int avoidItemCount; 
  __int64 v50; 
  int v51; 
  CgTrajectory v52; 
  vec3_t v53; 
  vec3_t outPos; 

  _RBX = caData;
  if ( caData->avoidItemCount >= 0xC8 )
  {
    v51 = 200;
    avoidItemCount = caData->avoidItemCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 473, ASSERT_TYPE_ASSERT, "(unsigned)( caData->avoidItemCount ) < (unsigned)( 200 )", "caData->avoidItemCount doesn't index MAX_AVOID_ITEMS\n\t%i not in [0, %i)", avoidItemCount, v51) )
      __debugbreak();
  }
  _RSI = _RBX->avoidItemCount;
  _RBX->avoidItems[_RSI].entityNum = cent->nextState.number;
  number = cent->nextState.number;
  if ( number > 0x9E4 )
  {
    LODWORD(v50) = cent->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v50) )
      __debugbreak();
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v50) = 2;
    LODWORD(v48) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v48, v50) )
      __debugbreak();
  }
  v13 = 2533 * localClientNum + number;
  if ( v13 >= 0x13CA )
  {
    LODWORD(v50) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v50) )
      __debugbreak();
  }
  v14 = clientObjMap[v13];
  if ( v14 )
  {
    if ( v14 >= (unsigned int)s_objCount )
    {
      LODWORD(v50) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v50) )
        __debugbreak();
    }
    v15 = (const DObj *)s_objBuf[v14];
    if ( v15 && DObjGetFirstModel(v15) )
    {
      v16 = cent->pose.origin.Get_origin == NULL;
      _RDI = (__int64)&_RBX->avoidItems[_RSI].origin;
      __asm { vmovaps [rsp+0D8h+var_48], xmm6 }
      if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(cent->pose.origin.Get_origin, &cent->pose);
      FunctionPointer_origin(&cent->pose.origin.origin.origin, &_RBX->avoidItems[_RSI].origin);
      if ( cent->pose.isPosePrecise )
      {
        __asm
        {
          vmovsd  xmm3, cs:__real@3f30000000000000
          vmovd   xmm0, dword ptr [rdi]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm0, xmm0, xmm3
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovd   xmm0, dword ptr [rdi+4]
          vcvtdq2pd xmm0, xmm0
          vmovss  dword ptr [rdi], xmm1
          vmulsd  xmm1, xmm0, xmm3
          vmovd   xmm0, dword ptr [rdi+8]
          vcvtsd2ss xmm2, xmm1, xmm1
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm3
          vmovss  dword ptr [rdi+4], xmm2
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  dword ptr [rdi+8], xmm2
        }
      }
      DObjPhysicsGetBounds(v15, &_RBX->avoidItems[_RSI].bounds);
      nextSnap = cgameGlob->nextSnap;
      snap = cgameGlob->snap;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm6, xmm0, cs:__real@3a83126f
        vcomiss xmm6, xmm1
      }
      if ( nextSnap->serverTime <= (unsigned int)snap->serverTime )
      {
        *(_QWORD *)_RBX->avoidItems[_RSI].velocity.v = 0i64;
      }
      else
      {
        CgTrajectory::CgTrajectory(&v52, localClientNum, cent, &cent->prevState);
        BgTrajectory::EvaluatePosTrajectory(&v52, snap->serverTime, &outPos);
        serverTime = nextSnap->serverTime;
        v52.m_es = &cent->nextState.lerp;
        BgTrajectory::EvaluatePosTrajectory(&v52, serverTime, &v53);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0D8h+var_70+4]
          vsubss  xmm1, xmm0, dword ptr [rsp+0D8h+outPos+4]
          vmovss  xmm2, dword ptr [rsp+0D8h+var_70+8]
          vsubss  xmm0, xmm2, dword ptr [rsp+0D8h+outPos+8]
          vmovss  dword ptr [rsi+rbx+18h], xmm1
          vmovss  xmm1, dword ptr [rsp+0D8h+var_70]
          vmovss  dword ptr [rsi+rbx+1Ch], xmm0
          vsubss  xmm0, xmm1, dword ptr [rsp+0D8h+outPos]
          vdivss  xmm2, xmm0, xmm6
          vmovss  dword ptr [rsi+rbx+14h], xmm2
          vmovss  xmm1, dword ptr [rsi+rbx+18h]
          vdivss  xmm0, xmm1, xmm6
          vmovss  dword ptr [rsi+rbx+18h], xmm0
          vmovss  xmm2, dword ptr [rsi+rbx+1Ch]
          vdivss  xmm1, xmm2, xmm6
        }
      }
      __asm { vmovss  dword ptr [rsi+rbx+1Ch], xmm1 }
      ++_RBX->avoidItemCount;
      __asm { vmovaps xmm6, [rsp+0D8h+var_48] }
    }
  }
}

/*
==============
CollAvoid_CalculateCmdAvoidance
==============
*/
void CollAvoid_CalculateCmdAvoidance(LocalClientNum_t localClientNum, const playerState_s *ps, float deltaTime, CollAvoidItem *avoidItem, usercmd_s *cmd)
{
  CgHandler *Handler; 
  char v91; 
  char v108; 
  const dvar_t *v136; 
  const dvar_t *v147; 
  const dvar_t *v173; 
  vec3_t forward; 
  vec3_t end; 
  vec3_t vec; 
  vec3_t right; 
  vec3_t outVec; 
  vec3_t angles; 
  WorldUpReferenceFrame v215; 
  char v217; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
  }
  _RDI = avoidItem;
  _RSI = ps;
  ClActiveClientMP::GetClientMP(localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+1D8h]
    vmovss  xmm1, dword ptr [rsi+1DCh]
    vmovss  dword ptr [rbp+0A0h+angles], xmm0
    vmovss  xmm0, dword ptr [rsi+1E0h]
    vmovss  dword ptr [rbp+0A0h+angles+8], xmm0
    vmovss  dword ptr [rbp+0A0h+angles+4], xmm1
  }
  AngleVectors(&angles, &forward, &right, NULL);
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v215, _RSI, Handler);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1; height
    vxorps  xmm11, xmm11, xmm11
  }
  WorldUpReferenceFrame::SetUpContribution(&v215, *(float *)&_XMM1, &forward);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+1A0h+forward]
    vmovss  xmm6, dword ptr [rsp+1A0h+forward+4]
    vmovss  xmm4, dword ptr [rsp+1A0h+forward+8]
    vmovss  xmm13, cs:__real@3f800000
    vmovss  xmm14, cs:__real@80000000
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, xmm14
    vblendvps xmm0, xmm3, xmm13, xmm0
    vdivss  xmm2, xmm13, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+1A0h+forward], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+1A0h+forward+4], xmm1
    vxorps  xmm1, xmm1, xmm1; height
    vmovss  dword ptr [rsp+1A0h+forward+8], xmm0
  }
  WorldUpReferenceFrame::SetUpContribution(&v215, *(float *)&_XMM1, &right);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+1A0h+right]
    vmovss  xmm5, dword ptr [rsp+1A0h+right+4]
    vmovss  xmm6, dword ptr [rsp+1A0h+right+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, xmm14
    vblendvps xmm0, xmm3, xmm13, xmm0
    vdivss  xmm1, xmm13, xmm0
    vmulss  xmm7, xmm5, xmm1
    vmulss  xmm3, xmm4, xmm1
    vmulss  xmm6, xmm6, xmm1
    vxorps  xmm5, xmm5, xmm5
    vcvtsi2ss xmm5, xmm5, eax
    vmulss  xmm1, xmm3, xmm5
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, eax
    vmulss  xmm2, xmm4, dword ptr [rsp+1A0h+forward]
    vaddss  xmm8, xmm2, xmm1
    vmovss  dword ptr [rsp+1A0h+right], xmm3
    vmulss  xmm3, xmm4, dword ptr [rsp+1A0h+forward+4]
    vmulss  xmm1, xmm7, xmm5
    vmovss  dword ptr [rsp+1A0h+right+4], xmm7
    vaddss  xmm7, xmm3, xmm1
    vmovss  dword ptr [rsp+1A0h+right+8], xmm6
    vmulss  xmm2, xmm4, dword ptr [rsp+1A0h+forward+8]
    vmulss  xmm0, xmm8, xmm8
    vmulss  xmm1, xmm6, xmm5
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm3, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm9, xmm2, xmm2
    vmovss  xmm2, dword ptr [rdi+8]
    vcmpless xmm0, xmm9, xmm14
    vblendvps xmm0, xmm9, xmm13, xmm0
    vdivss  xmm1, xmm13, xmm0
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm8, xmm8, xmm1
    vmulss  xmm7, xmm7, xmm1
    vmulss  xmm10, xmm4, xmm1
    vsubss  xmm1, xmm0, dword ptr [rsi+30h]
    vsubss  xmm0, xmm2, dword ptr [rsi+34h]
  }
  _RDI = &_RDI->origin;
  __asm
  {
    vmovss  dword ptr [rsp+1A0h+vec], xmm1
    vmovss  dword ptr [rsp+1A0h+vec+4], xmm0
    vmovss  xmm1, dword ptr [rdi+8]
    vsubss  xmm2, xmm1, dword ptr [rsi+38h]
    vxorps  xmm1, xmm1, xmm1; height
    vmovss  dword ptr [rsp+1A0h+vec+8], xmm2
  }
  WorldUpReferenceFrame::SetUpContribution(&v215, *(float *)&_XMM1, &vec);
  __asm
  {
    vcomiss xmm9, xmm11
    vmovss  xmm4, dword ptr [rsp+1A0h+vec]
    vmovss  xmm6, dword ptr [rsp+1A0h+vec+4]
    vmovss  xmm5, dword ptr [rsp+1A0h+vec+8]
    vmovss  xmm12, cs:__real@42700000
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, xmm14
    vblendvps xmm0, xmm3, xmm13, xmm0
    vdivss  xmm1, xmm13, xmm0
    vmulss  xmm2, xmm4, xmm1
    vmulss  xmm0, xmm6, xmm1
    vmulss  xmm3, xmm5, xmm1
    vmovss  dword ptr [rsp+1A0h+vec], xmm2
    vmovss  dword ptr [rsp+1A0h+vec+4], xmm0
    vmovss  dword ptr [rsp+1A0h+vec+8], xmm3
  }
  if ( v91 | v108 )
  {
    __asm
    {
      vmovaps xmm9, xmm12
      vmovaps xmm8, xmm2
      vmovaps xmm7, xmm0
      vmovaps xmm10, xmm3
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm7, xmm0
      vmulss  xmm0, xmm8, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm10, xmm3
      vaddss  xmm3, xmm2, xmm1
      vcomiss xmm3, xmm11
    }
    if ( v91 )
      goto LABEL_22;
  }
  __asm { vmovaps [rsp+1A0h+var_D0], xmm15 }
  WorldUpReferenceFrame::CrossWithUp(&v215, &vec, &outVec);
  __asm
  {
    vmovss  xmm4, dword ptr [rbp+0A0h+outVec]
    vmovss  xmm5, dword ptr [rbp+0A0h+outVec+4]
    vmovss  xmm6, dword ptr [rbp+0A0h+outVec+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, xmm14
    vblendvps xmm0, xmm3, xmm13, xmm0
    vdivss  xmm1, xmm13, xmm0
    vmulss  xmm4, xmm4, xmm1
    vmulss  xmm5, xmm5, xmm1
    vmulss  xmm6, xmm6, xmm1
    vmulss  xmm1, xmm7, xmm5
    vmulss  xmm0, xmm8, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm6
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, xmm11
    vmovss  dword ptr [rbp+0A0h+outVec], xmm4
    vmovss  dword ptr [rbp+0A0h+outVec+4], xmm5
    vmovss  dword ptr [rbp+0A0h+outVec+8], xmm6
  }
  if ( v91 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm4, xmm4, xmm0
      vxorps  xmm5, xmm5, xmm0
      vxorps  xmm6, xmm6, xmm0
      vmovss  dword ptr [rbp+0A0h+outVec], xmm4
      vmovss  dword ptr [rbp+0A0h+outVec+4], xmm5
      vmovss  dword ptr [rbp+0A0h+outVec+8], xmm6
    }
  }
  v136 = DCONST_DVARBOOL_collAvoid_debug;
  __asm
  {
    vmulss  xmm0, xmm8, xmm12
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vmulss  xmm2, xmm7, xmm12
    vaddss  xmm0, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+1A0h+end], xmm1
    vmulss  xmm1, xmm10, xmm12
    vaddss  xmm2, xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+1A0h+end+8], xmm2
    vmovss  dword ptr [rsp+1A0h+end+4], xmm0
    vmulss  xmm14, xmm4, xmm9
    vmulss  xmm15, xmm5, xmm9
    vmulss  xmm6, xmm6, xmm9
  }
  if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v136);
  if ( v136->current.enabled )
    CG_DebugLine(_RDI, &end, &colorGreen, 0, 0);
  __asm { vaddss  xmm0, xmm14, dword ptr [rdi] }
  v147 = DCONST_DVARBOOL_collAvoid_debug;
  __asm
  {
    vaddss  xmm1, xmm15, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+1A0h+end], xmm0
    vaddss  xmm0, xmm6, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+1A0h+end+8], xmm0
    vmovss  dword ptr [rsp+1A0h+end+4], xmm1
  }
  if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v147);
  if ( v147->current.enabled )
    CG_DebugLine(_RDI, &end, &colorRed, 0, 0);
  __asm
  {
    vmovss  xmm5, cs:__real@42fe0000
    vmulss  xmm0, xmm15, dword ptr [rsp+1A0h+forward+4]
    vmulss  xmm2, xmm6, dword ptr [rsp+1A0h+forward+8]
    vmulss  xmm1, xmm14, dword ptr [rsp+1A0h+forward]
    vaddss  xmm3, xmm1, xmm0
    vmulss  xmm0, xmm15, dword ptr [rsp+1A0h+right+4]
    vmulss  xmm1, xmm14, dword ptr [rsp+1A0h+right]
    vmovaps xmm15, [rsp+1A0h+var_D0]
    vaddss  xmm7, xmm3, xmm2
    vmulss  xmm2, xmm6, dword ptr [rsp+1A0h+right+8]
    vaddss  xmm3, xmm1, xmm0
    vandps  xmm0, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm6, xmm3, xmm2
    vandps  xmm4, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmaxss  xmm1, xmm4, xmm0
    vmaxss  xmm2, xmm1, xmm5
    vdivss  xmm3, xmm13, xmm2
    vmulss  xmm0, xmm3, xmm7
    vmulss  xmm1, xmm0, xmm5
    vcvttss2si ecx, xmm1
    vmulss  xmm0, xmm3, xmm6
    vmulss  xmm1, xmm0, xmm5
    vcvttss2si eax, xmm1
  }
  cmd->rightmove = _EAX;
  cmd->forwardmove = _ECX;
  v173 = DCONST_DVARBOOL_collAvoid_debug;
  _EAX = (char)_EAX;
  __asm { vmovd   xmm3, eax }
  _EAX = (char)_ECX;
  __asm
  {
    vcvtdq2ps xmm3, xmm3
    vmulss  xmm0, xmm3, dword ptr [rsp+1A0h+right]
    vmovd   xmm2, eax
    vcvtdq2ps xmm2, xmm2
    vmulss  xmm1, xmm2, dword ptr [rsp+1A0h+forward]
    vmulss  xmm2, xmm2, dword ptr [rsp+1A0h+forward+4]
    vaddss  xmm4, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rsp+1A0h+right+4]
    vaddss  xmm5, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm3, xmm5, xmm5
    vaddss  xmm1, xmm3, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm13, xmm0
    vdivss  xmm3, xmm13, xmm0
    vmulss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm12
    vaddss  xmm2, xmm1, dword ptr [rdi]
    vmulss  xmm0, xmm5, xmm3
    vmulss  xmm1, xmm0, xmm12
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+1A0h+end], xmm2
    vaddss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+1A0h+end+4], xmm2
    vmovss  dword ptr [rsp+1A0h+end+8], xmm0
  }
  if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v173);
  if ( v173->current.enabled )
    CG_DebugLine(_RDI, &end, &colorYellow, 0, 0);
LABEL_22:
  _R11 = &v217;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm8, xmmword ptr [r11-40h]
    vmovaps xmm9, xmmword ptr [r11-50h]
    vmovaps xmm10, xmmword ptr [r11-60h]
    vmovaps xmm11, xmmword ptr [r11-70h]
    vmovaps xmm12, xmmword ptr [r11-80h]
    vmovaps xmm13, xmmword ptr [r11-90h]
    vmovaps xmm14, xmmword ptr [r11-0A0h]
  }
}

/*
==============
CollAvoid_CalculateLinearAvoidance
==============
*/

void __fastcall CollAvoid_CalculateLinearAvoidance(LocalClientNum_t localClientNum, const playerState_s *ps, double deltaTime, CollAvoidItem *avoidItem, usercmd_s *cmd, vec3_t *inOutAvoidAgg)
{
  CgHandler *Handler; 
  unsigned __int8 v39; 
  unsigned __int8 v64; 
  bool v65; 
  char v66; 
  const dvar_t *v88; 
  const dvar_t *v133; 
  const dvar_t *v144; 
  const dvar_t *v151; 
  const dvar_t *v176; 
  vec3_t outVec; 
  vec3_t end; 
  vec3_t v188; 
  vec3_t vec; 
  vec3_t v190; 
  WorldUpReferenceFrame v191; 
  char v192; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RSI = inOutAvoidAgg;
  _R14 = avoidItem;
  __asm { vmovaps xmm15, xmm2 }
  _RDI = ps;
  ClActiveClientMP::GetClientMP(localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vaddss  xmm1, xmm0, dword ptr [rdi+3Ch]
    vmovss  xmm0, dword ptr [rdi+40h]
    vmovss  dword ptr [rsp+1A0h+vec], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rdi+44h]
    vmovss  dword ptr [rsp+1A0h+vec+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+0A0h+vec+8], xmm1
  }
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v191, _RDI, Handler);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1; height
    vxorps  xmm14, xmm14, xmm14
  }
  WorldUpReferenceFrame::SetUpContribution(&v191, *(float *)&_XMM1, &vec);
  _RBX = &_R14->origin;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm0, dword ptr [rdi+30h]
    vmovss  xmm2, dword ptr [rbx+4]
    vsubss  xmm0, xmm2, dword ptr [rdi+34h]
    vmovss  dword ptr [rbp+0A0h+var_118], xmm1
    vmovss  xmm1, dword ptr [rbx+8]
    vsubss  xmm2, xmm1, dword ptr [rdi+38h]
    vxorps  xmm1, xmm1, xmm1; height
    vmovss  dword ptr [rbp+0A0h+var_118+8], xmm2
    vmovss  dword ptr [rbp+0A0h+var_118+4], xmm0
  }
  WorldUpReferenceFrame::SetUpContribution(&v191, *(float *)&_XMM1, &v190);
  __asm
  {
    vmovss  xmm7, dword ptr [rsp+1A0h+vec]
    vmovss  xmm8, dword ptr [rsp+1A0h+vec+4]
    vmovss  xmm9, dword ptr [rbp+0A0h+vec+8]
    vsubss  xmm11, xmm7, dword ptr [r14+10h]
    vsubss  xmm12, xmm8, dword ptr [r14+14h]
    vsubss  xmm13, xmm9, dword ptr [r14+18h]
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm3, xmm12, xmm12
    vmulss  xmm0, xmm11, xmm11
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm13, xmm13
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm4, xmm2
  }
  if ( v39 )
  {
    __asm
    {
      vmovaps xmm11, xmm7
      vmovaps xmm12, xmm8
      vmovaps xmm13, xmm9
    }
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rbp+0A0h+var_118+4]
    vmovss  xmm5, dword ptr [rbp+0A0h+var_118]
    vmovss  xmm6, dword ptr [rbp+0A0h+var_118+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm10, xmm2, xmm1
    vcomiss xmm10, cs:__real@43610000
  }
  v64 = v39;
  v65 = cmd->forwardmove == 0;
  if ( cmd->forwardmove || (v65 = cmd->rightmove == 0, cmd->rightmove) )
  {
    v66 = 1;
  }
  else
  {
    v66 = 0;
    v65 = 1;
  }
  __asm
  {
    vmulss  xmm1, xmm7, xmm5
    vmulss  xmm0, xmm4, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm9
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, xmm14
  }
  if ( !v65 || (v65 = v66 == 0, !v66) || (v65 = v39 == 0, v39) )
  {
    __asm
    {
      vmovss  xmm9, cs:__real@3f800000
      vsqrtss xmm1, xmm10, xmm10
      vmovss  xmm10, cs:__real@80000000
      vcmpless xmm0, xmm1, xmm10
      vblendvps xmm0, xmm1, xmm9, xmm0
      vdivss  xmm1, xmm9, xmm0
      vmulss  xmm2, xmm5, xmm1
      vmulss  xmm0, xmm4, xmm1
      vmulss  xmm3, xmm6, xmm1
      vmulss  xmm1, xmm12, xmm0
      vmovss  dword ptr [rsp+1A0h+var_138+4], xmm0
      vmulss  xmm0, xmm11, xmm2
      vmovss  dword ptr [rsp+1A0h+var_138], xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm13, xmm3
      vaddss  xmm6, xmm2, xmm1
      vcomiss xmm6, xmm14
      vmovss  dword ptr [rsp+1A0h+var_138+8], xmm3
    }
    if ( v65 )
      goto LABEL_40;
    _RDI = DCONST_DVARFLT_collAvoid_linearMinSpeed;
    if ( !DCONST_DVARFLT_collAvoid_linearMinSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_linearMinSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vcomiss xmm6, dword ptr [rdi+28h] }
    if ( !v39 )
    {
LABEL_40:
      _RDI = DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed;
      if ( !DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_linearNearlyStoppedSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vcomiss xmm6, dword ptr [rdi+28h] }
      if ( v39 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+10h]
          vmovss  xmm2, dword ptr [r14+14h]
          vmovss  xmm3, dword ptr [r14+18h]
        }
        _RDI = DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed;
        __asm
        {
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm8, xmm2, xmm1
        }
        if ( !DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_linearNearlyStoppedSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm { vmovss  xmm7, dword ptr [rdi+28h] }
        v176 = DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed;
        if ( !DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_linearNearlyStoppedSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v176);
        __asm
        {
          vmulss  xmm0, xmm7, dword ptr [rdi+28h]
          vcomiss xmm8, xmm0
        }
        if ( v39 )
        {
          _RDI = DCONST_DVARFLT_collAvoid_linearMinSpeed;
          if ( !DCONST_DVARFLT_collAvoid_linearMinSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_linearMinSpeed") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm { vmovss  xmm3, dword ptr [rdi+28h] }
          _ER14 = 0;
          _EAX = v64;
          __asm
          {
            vmovd   xmm1, r14d
            vmovd   xmm0, eax
            vpcmpeqd xmm2, xmm0, xmm1
            vmovss  xmm1, cs:__real@43160000
            vblendvps xmm6, xmm1, xmm3, xmm2
          }
        }
      }
    }
    else
    {
      _RDI = DCONST_DVARFLT_collAvoid_linearMinSpeed;
      if ( !DCONST_DVARFLT_collAvoid_linearMinSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_linearMinSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    }
    v88 = DCONST_DVARFLT_collAvoid_linearAccel;
    if ( !DCONST_DVARFLT_collAvoid_linearAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_linearAccel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v88);
    __asm
    {
      vmulss  xmm0, xmm15, dword ptr [rdi+28h]
      vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
      vmulss  xmm3, xmm0, xmm6
      vandps  xmm2, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcmpltss xmm2, xmm0, xmm2
      vblendvps xmm8, xmm3, xmm6, xmm2
      vxorps  xmm3, xmm8, xmm7
      vmulss  xmm0, xmm3, dword ptr [rsp+1A0h+var_138]
      vaddss  xmm1, xmm0, dword ptr [rsi]
      vmulss  xmm2, xmm3, dword ptr [rsp+1A0h+var_138+4]
      vaddss  xmm0, xmm2, dword ptr [rsi+4]
      vmovss  dword ptr [rsi], xmm1
      vmulss  xmm1, xmm3, dword ptr [rsp+1A0h+var_138+8]
      vaddss  xmm2, xmm1, dword ptr [rsi+8]
      vmovss  dword ptr [rsi+8], xmm2
      vmovss  dword ptr [rsi+4], xmm0
    }
    WorldUpReferenceFrame::CrossWithUp(&v191, &v188, &outVec);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+1A0h+outVec]
      vmovss  xmm5, dword ptr [rsp+1A0h+outVec+4]
      vmovss  xmm6, dword ptr [rsp+1A0h+outVec+8]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm9, xmm0
      vdivss  xmm1, xmm9, xmm0
      vmulss  xmm4, xmm1, xmm4
      vmulss  xmm5, xmm1, xmm5
      vmulss  xmm6, xmm1, xmm6
      vmulss  xmm1, xmm12, xmm5
      vmulss  xmm0, xmm11, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm13
      vaddss  xmm3, xmm2, xmm1
      vcomiss xmm3, xmm14
      vmovss  dword ptr [rsp+1A0h+outVec], xmm4
      vmovss  dword ptr [rsp+1A0h+outVec+4], xmm5
      vmovss  dword ptr [rsp+1A0h+outVec+8], xmm6
    }
    if ( v39 )
    {
      __asm
      {
        vxorps  xmm4, xmm4, xmm7
        vxorps  xmm5, xmm5, xmm7
        vxorps  xmm6, xmm6, xmm7
        vmovss  dword ptr [rsp+1A0h+outVec], xmm4
        vmovss  dword ptr [rsp+1A0h+outVec+4], xmm5
        vmovss  dword ptr [rsp+1A0h+outVec+8], xmm6
      }
    }
    __asm
    {
      vmulss  xmm0, xmm4, xmm8
      vaddss  xmm1, xmm0, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vmulss  xmm1, xmm6, xmm8
      vmovss  xmm6, cs:__real@42700000
      vmulss  xmm3, xmm6, dword ptr [rsp+1A0h+var_138+4]
      vmulss  xmm2, xmm5, xmm8
      vaddss  xmm0, xmm2, dword ptr [rsi+4]
      vaddss  xmm2, xmm1, dword ptr [rsi+8]
      vmovss  dword ptr [rsi+8], xmm2
      vmulss  xmm2, xmm6, dword ptr [rsp+1A0h+var_138]
      vmovss  dword ptr [rsi+4], xmm0
      vmovss  xmm1, dword ptr [rbx]
    }
    v133 = DCONST_DVARBOOL_collAvoid_debug;
    __asm
    {
      vsubss  xmm2, xmm1, xmm2
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+1A0h+end], xmm2
      vsubss  xmm2, xmm1, xmm3
      vmulss  xmm3, xmm6, dword ptr [rsp+1A0h+var_138+8]
      vmovss  xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+1A0h+end+4], xmm2
      vsubss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rsp+1A0h+end+8], xmm2
    }
    if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v133);
    if ( v133->current.enabled )
      CG_DebugLine(_RBX, &end, &colorYellow, 0, 0);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1A0h+vec]
      vaddss  xmm1, xmm0, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rsp+1A0h+vec+4]
      vaddss  xmm0, xmm2, dword ptr [rbx+4]
    }
    v144 = DCONST_DVARBOOL_collAvoid_debug;
    __asm
    {
      vmovss  dword ptr [rsp+1A0h+end], xmm1
      vmovss  xmm1, dword ptr [rbp+0A0h+vec+8]
      vaddss  xmm2, xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+1A0h+end+8], xmm2
      vmovss  dword ptr [rsp+1A0h+end+4], xmm0
    }
    if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v144);
    if ( v144->current.enabled )
      CG_DebugLine(_RBX, &end, &colorGreen, 0, 0);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rsp+1A0h+outVec]
      vaddss  xmm2, xmm1, dword ptr [rbx]
      vmulss  xmm1, xmm6, dword ptr [rsp+1A0h+outVec+4]
      vaddss  xmm1, xmm1, dword ptr [rbx+4]
    }
    v151 = DCONST_DVARBOOL_collAvoid_debug;
    __asm
    {
      vmovss  dword ptr [rsp+1A0h+end], xmm2
      vmulss  xmm2, xmm6, dword ptr [rsp+1A0h+outVec+8]
      vmovss  dword ptr [rsp+1A0h+end+4], xmm1
      vaddss  xmm1, xmm2, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+1A0h+end+8], xmm1
    }
    if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v151);
    if ( v151->current.enabled )
      CG_DebugLine(_RBX, &end, &colorRed, 0, 0);
  }
  _R11 = &v192;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
CollAvoid_ClearAvoidList
==============
*/
void CollAvoid_ClearAvoidList(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v3; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 95, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v3) )
      __debugbreak();
  }
  s_collAvoidDatas[v1].avoidItemCount = 0;
}

/*
==============
CollAvoid_CmdHasAvoidance
==============
*/
bool CollAvoid_CmdHasAvoidance(const usercmd_s *cmd)
{
  return cmd->avoidForward || cmd->avoidRight;
}

/*
==============
CollAvoid_DebugLine
==============
*/
void CollAvoid_DebugLine(const vec3_t *startPos, const vec3_t *endPos, const vec4_t *color, const int time)
{
  const dvar_t *v4; 

  v4 = DCONST_DVARBOOL_collAvoid_debug;
  if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
    CG_DebugLine(startPos, endPos, color, 0, time);
}

/*
==============
CollAvoid_DebugStar
==============
*/
void CollAvoid_DebugStar(const vec3_t *pos, const vec4_t *color, const int time)
{
  const dvar_t *v3; 

  v3 = DCONST_DVARBOOL_collAvoid_debug;
  if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    CG_DebugStar(pos, color, 0, time);
}

/*
==============
CollAvoid_DebugTraceLine
==============
*/

void __fastcall CollAvoid_DebugTraceLine(const vec3_t *startPos, const vec3_t *endPos, double fraction, const vec4_t *color, const int time)
{
  const dvar_t *v6; 
  vec3_t end; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  v6 = DCONST_DVARBOOL_collAvoid_debug;
  _RSI = endPos;
  __asm { vmovaps xmm6, xmm2 }
  if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm1, xmm0, dword ptr [rdi]
      vmovss  xmm0, dword ptr [rsi+4]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rdi]
      vsubss  xmm1, xmm0, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [rsi+8]
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+88h+end], xmm3
      vaddss  xmm3, xmm2, dword ptr [rdi+4]
      vmulss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rsp+88h+end+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+88h+end+8], xmm3
    }
    CG_DebugLine(startPos, &end, color, 0, time);
  }
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

/*
==============
CollAvoid_DebugTraceStar
==============
*/

void __fastcall CollAvoid_DebugTraceStar(const vec3_t *startPos, const vec3_t *endPos, double fraction, const vec4_t *color, const int time)
{
  const dvar_t *v6; 
  vec3_t point; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  v6 = DCONST_DVARBOOL_collAvoid_debug;
  _RDI = endPos;
  __asm { vmovaps xmm6, xmm2 }
  if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm1, xmm0, dword ptr [rsi]
      vmovss  xmm0, dword ptr [rdi+4]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rsi]
      vsubss  xmm1, xmm0, dword ptr [rsi+4]
      vmovss  xmm0, dword ptr [rdi+8]
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm1, xmm0, dword ptr [rsi+8]
      vmovss  dword ptr [rsp+78h+point], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsi+4]
      vmulss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rsp+78h+point+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsi+8]
      vmovss  dword ptr [rsp+78h+point+8], xmm3
    }
    CG_DebugStar(&point, color, 0, time);
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
}

/*
==============
CollAvoid_GetLocalClientData
==============
*/
CollAvoidData *CollAvoid_GetLocalClientData(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 95, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return &s_collAvoidDatas[v1];
}

/*
==============
CollAvoid_IsUsingAvoidance
==============
*/
bool CollAvoid_IsUsingAvoidance()
{
  const dvar_t *v0; 
  const dvar_t *v2; 

  v0 = DCONST_DVARBOOL_playerCharacterCollisionUseNew;
  if ( !DCONST_DVARBOOL_playerCharacterCollisionUseNew && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionUseNew") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    return 0;
  v2 = DCONST_DVARINT_collAvoid_avoidType;
  if ( !DCONST_DVARINT_collAvoid_avoidType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_avoidType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.integer != 0;
}

/*
==============
CollAvoid_PredictAvoidItems
==============
*/

void __fastcall CollAvoid_PredictAvoidItems(CollAvoidData *caData, double deltaTime)
{
  unsigned int v2; 
  __int64 v4; 

  v2 = 0;
  __asm { vmovaps xmm2, xmm1 }
  if ( caData->avoidItemCount )
  {
    do
    {
      v4 = v2++;
      _RDX = 52 * v4;
      __asm
      {
        vmulss  xmm0, xmm2, dword ptr [rdx+rcx+14h]
        vaddss  xmm1, xmm0, dword ptr [rdx+rcx+8]
        vmovss  dword ptr [rdx+rcx+8], xmm1
        vmulss  xmm0, xmm2, dword ptr [rdx+rcx+18h]
        vaddss  xmm1, xmm0, dword ptr [rdx+rcx+0Ch]
        vmovss  dword ptr [rdx+rcx+0Ch], xmm1
        vmulss  xmm0, xmm2, dword ptr [rdx+rcx+1Ch]
        vaddss  xmm1, xmm0, dword ptr [rdx+rcx+10h]
        vmovss  dword ptr [rdx+rcx+10h], xmm1
      }
    }
    while ( v2 < caData->avoidItemCount );
  }
}

/*
==============
CollAvoid_ShouldAddAvoidTarget
==============
*/
bool CollAvoid_ShouldAddAvoidTarget(cg_t *cgameGlob, const playerState_s *ps, const centity_t *cent)
{
  __int64 localClientNum; 
  CgStatic *v8; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v10; 
  team_t team; 
  __int64 v12; 
  __int64 v13; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 421, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 422, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 423, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( ps->clientNum == cent->nextState.number )
    return 0;
  if ( cent->nextState.eType == ET_PLAYER )
  {
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x11u) )
      return 0;
  }
  else
  {
    if ( cent->nextState.eType != ET_AGENT || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x11u) )
      return 0;
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x1Cu) )
      return 0;
  }
  localClientNum = cgameGlob->localClientNum;
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", cgameGlob->localClientNum) )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v13 = CgStatic::ms_allocatedCount;
    LODWORD(v12) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[localClientNum] )
  {
    LODWORD(v13) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v13) )
      __debugbreak();
  }
  v8 = CgStatic::ms_cgameStaticsArray[localClientNum];
  CharacterInfo = CgStatic::GetCharacterInfo(v8, cent->nextState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 452, ASSERT_TYPE_ASSERT, "(avoidInfo)", (const char *)&queryFormat, "avoidInfo") )
    __debugbreak();
  v10 = CgStatic::GetCharacterInfo(v8, ps->clientNum);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 455, ASSERT_TYPE_ASSERT, "(playerInfo)", (const char *)&queryFormat, "playerInfo") )
    __debugbreak();
  if ( !CharacterInfo->infoValid )
    return 0;
  if ( !CharacterInfo->model[0] )
    return 0;
  team = CharacterInfo->team;
  return team != TEAM_ZERO && team == v10->team;
}

/*
==============
CollAvoid_ShouldAvoidTarget
==============
*/
bool CollAvoid_ShouldAvoidTarget(LocalClientNum_t localClientNum, const playerState_s *ps, CollAvoidItem *avoidItem)
{
  EffectiveStance EffectiveStance; 
  bool result; 

  __asm { vmovaps [rsp+0C8h+var_28], xmm6 }
  if ( avoidItem->entityNum != ps->clientNum )
  {
    EffectiveStance = PM_GetEffectiveStance(ps);
    _RAX = BG_Suit_GetBounds(ps->suitIndex, EffectiveStance);
    _RDI = &avoidItem->bounds;
    __asm
    {
      vmovups xmm1, xmmword ptr [rax]
      vmovsd  xmm0, qword ptr [rax+10h]
      vmovups [rsp+0C8h+var_78], xmm1
      vmovsd  [rsp+0C8h+var_68], xmm0
      vmovss  xmm0, dword ptr [rsp+0C8h+var_78+8]
      vaddss  xmm6, xmm0, dword ptr [rbx+38h]
      vmovss  xmm0, dword ptr [rdi]
      vaddss  xmm1, xmm0, dword ptr [rsi+4]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm2, dword ptr [rdi+4]
      vaddss  xmm0, xmm2, dword ptr [rsi+8]
      vmovss  dword ptr [rdi+4], xmm0
      vmovss  xmm1, dword ptr [rdi+8]
      vaddss  xmm2, xmm1, dword ptr [rsi+0Ch]
      vmovss  dword ptr [rdi+8], xmm2
    }
    if ( avoidItem == (CollAvoidItem *)-28i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 581, ASSERT_TYPE_ASSERT, "(b1)", (const char *)&queryFormat, "b1") )
      __debugbreak();
    __asm
    {
      vsubss  xmm2, xmm6, dword ptr [rdi+8]
      vmovss  xmm0, dword ptr [rsp+0C8h+var_68+4]
      vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vaddss  xmm1, xmm0, dword ptr [rdi+14h]
      vcomiss xmm2, xmm1
    }
  }
  result = 0;
  __asm { vmovaps xmm6, [rsp+0C8h+var_28] }
  return result;
}

/*
==============
CollAvoid_ShouldUpdateMoveCmd
==============
*/

bool __fastcall CollAvoid_ShouldUpdateMoveCmd(LocalClientNum_t localClientNum)
{
  return CollAvoid_IsUsingAvoidance();
}

/*
==============
CollAvoid_UpdateAvoidTargets
==============
*/
void CollAvoid_UpdateAvoidTargets(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  const CgSnapshotMP *NextSnap; 
  int v4; 
  CgEntitySystem **v5; 
  entityState_t *entities; 
  __int64 number; 
  CgEntitySystem *v8; 
  __int64 v9; 
  CollAvoidData *LocalClientData; 
  __int64 v11; 
  __int64 v12; 

  v1 = localClientNum;
  if ( CollAvoid_IsUsingAvoidance() )
  {
    if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 532, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v1, 2) )
      __debugbreak();
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
    NextSnap = CG_SnapshotMP_GetNextSnap((const LocalClientNum_t)v1);
    if ( !NextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 537, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
      __debugbreak();
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v12) = 2;
      LODWORD(v11) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 95, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v4 = 0;
    s_collAvoidDatas[v1].avoidItemCount = 0;
    if ( NextSnap->numEntities > 0 )
    {
      v5 = &CgEntitySystem::ms_entitySystemArray[v1];
      entities = NextSnap->entities;
      do
      {
        number = entities->number;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v12) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v12) )
            __debugbreak();
        }
        if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v12) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v11) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v11, v12) )
            __debugbreak();
        }
        if ( !*v5 )
        {
          LODWORD(v12) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v12) )
            __debugbreak();
        }
        v8 = *v5;
        if ( (unsigned int)number >= 0x800 )
        {
          LODWORD(v12) = 2048;
          LODWORD(v11) = number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v11, v12) )
            __debugbreak();
        }
        v9 = (__int64)&v8->m_entities[number];
        if ( !CG_Entity_IsNoDraw((const LocalClientNum_t)v1, (const entityState_t *)(v9 + 400), NULL) && (*(_BYTE *)(v9 + 648) & 1) != 0 && CollAvoid_ShouldAddAvoidTarget(LocalClientGlobals, &LocalClientGlobals->predictedPlayerState, (const centity_t *)v9) )
        {
          LocalClientData = CollAvoid_GetLocalClientData((LocalClientNum_t)v1);
          CollAvoid_AddAvoidTarget((LocalClientNum_t)v1, LocalClientGlobals, (const centity_t *)v9, LocalClientData);
        }
        ++v4;
        ++entities;
      }
      while ( v4 < NextSnap->numEntities );
    }
  }
}

/*
==============
CollAvoid_UpdateMoveCmd
==============
*/

void __fastcall CollAvoid_UpdateMoveCmd(LocalClientNum_t localClientNum, const playerState_s *ps, double deltaTime, usercmd_s *cmd)
{
  __int64 v11; 
  unsigned int v15; 
  unsigned int v17; 
  __int64 v18; 
  const dvar_t *v29; 
  CgHandler *Handler; 
  int v91; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t angles; 
  WorldUpReferenceFrame v95; 
  char v96; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  v11 = localClientNum;
  _R12 = ps;
  __asm { vmovaps xmm6, xmm2 }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v91 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 95, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v91) )
      __debugbreak();
  }
  v15 = 0;
  _RBX = &s_collAvoidDatas[v11];
  v17 = 0;
  while ( v17 < _RBX->avoidItemCount )
  {
    v18 = v17++;
    _RCX = 52 * v18;
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rcx+rbx+14h]
      vaddss  xmm1, xmm0, dword ptr [rcx+rbx+8]
      vmovss  dword ptr [rcx+rbx+8], xmm1
      vmulss  xmm0, xmm6, dword ptr [rcx+rbx+18h]
      vaddss  xmm1, xmm0, dword ptr [rcx+rbx+0Ch]
      vmovss  dword ptr [rcx+rbx+0Ch], xmm1
      vmulss  xmm0, xmm6, dword ptr [rcx+rbx+1Ch]
      vaddss  xmm1, xmm0, dword ptr [rcx+rbx+10h]
      vmovss  dword ptr [rcx+rbx+10h], xmm1
    }
  }
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vxorps  xmm10, xmm10, xmm10
    vxorps  xmm11, xmm11, xmm11
  }
  *(_DWORD *)&cmd->avoidForward = 0;
  __asm
  {
    vmovss  dword ptr [rsp+130h+forward], xmm9
    vmovss  dword ptr [rsp+130h+forward+4], xmm10
    vmovss  dword ptr [rsp+130h+forward+8], xmm11
  }
  if ( _RBX->avoidItemCount )
  {
    do
    {
      if ( CollAvoid_ShouldAvoidTarget((LocalClientNum_t)v11, _R12, &_RBX->avoidItems[v15]) )
      {
        v29 = DCONST_DVARINT_collAvoid_avoidType;
        if ( !DCONST_DVARINT_collAvoid_avoidType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_avoidType") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        if ( v29->current.integer == 1 )
        {
          __asm { vmovaps xmm2, xmm6; deltaTime }
          CollAvoid_CalculateLinearAvoidance((LocalClientNum_t)v11, _R12, *(double *)&_XMM2, &_RBX->avoidItems[v15], cmd, &forward);
        }
        else if ( v29->current.integer == 2 )
        {
          __asm { vmovaps xmm2, xmm6; deltaTime }
          CollAvoid_CalculateCmdAvoidance((LocalClientNum_t)v11, _R12, *(float *)&_XMM2, &_RBX->avoidItems[v15], cmd);
        }
      }
      ++v15;
    }
    while ( v15 < _RBX->avoidItemCount );
    __asm
    {
      vmovss  xmm11, dword ptr [rsp+130h+forward+8]
      vmovss  xmm10, dword ptr [rsp+130h+forward+4]
      vmovss  xmm9, dword ptr [rsp+130h+forward]
    }
  }
  ClActiveClientMP::GetClientMP((const LocalClientNum_t)v11);
  __asm
  {
    vmovss  xmm0, dword ptr [r12+1D8h]
    vmovss  xmm1, dword ptr [r12+1DCh]
    vmovss  dword ptr [rsp+130h+angles], xmm0
    vmovss  xmm0, dword ptr [r12+1E0h]
    vmovss  dword ptr [rsp+130h+angles+8], xmm0
    vmovss  dword ptr [rsp+130h+angles+4], xmm1
  }
  AngleVectors(&angles, &forward, &right, NULL);
  Handler = CgHandler::getHandler((LocalClientNum_t)v11);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v95, _R12, Handler);
  __asm { vxorps  xmm1, xmm1, xmm1; height }
  WorldUpReferenceFrame::SetUpContribution(&v95, *(float *)&_XMM1, &forward);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+130h+forward]
    vmovss  xmm6, dword ptr [rsp+130h+forward+4]
    vmovss  xmm4, dword ptr [rsp+130h+forward+8]
    vmovss  xmm8, cs:__real@3f800000
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm3, xmm8, xmm0
    vmulss  xmm0, xmm5, xmm3
    vmovss  dword ptr [rsp+130h+forward], xmm0
    vmulss  xmm0, xmm4, xmm3
    vmulss  xmm2, xmm6, xmm3
    vxorps  xmm1, xmm1, xmm1; height
    vmovss  dword ptr [rsp+130h+forward+8], xmm0
    vmovss  dword ptr [rsp+130h+forward+4], xmm2
  }
  WorldUpReferenceFrame::SetUpContribution(&v95, *(float *)&_XMM1, &right);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+130h+right+8]
    vmovss  xmm5, dword ptr [rsp+130h+right+4]
    vmovss  xmm6, dword ptr [rsp+130h+right]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm9, dword ptr [rsp+130h+forward]
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
    vmulss  xmm3, xmm10, dword ptr [rsp+130h+forward+4]
    vdivss  xmm1, xmm8, xmm0
    vmulss  xmm6, xmm6, xmm1
    vmulss  xmm7, xmm4, xmm1
    vmulss  xmm5, xmm5, xmm1
    vmulss  xmm1, xmm11, dword ptr [rsp+130h+forward+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm0, xmm2, cs:__real@42c80000
    vcvttss2si eax, xmm0
    vmulss  xmm0, xmm6, xmm9
    vmulss  xmm1, xmm5, xmm10
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm11
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, cs:__real@42c80000
  }
  cmd->avoidForward = _EAX;
  __asm { vcvttss2si eax, xmm0 }
  cmd->avoidRight = _EAX;
  _R11 = &v96;
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
CollAvoid_WriteAvoidanceToCmd
==============
*/
void CollAvoid_WriteAvoidanceToCmd(LocalClientNum_t localClientNum, const playerState_s *ps, usercmd_s *cmd, const vec3_t *avoidAgg)
{
  CgHandler *Handler; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t angles; 
  WorldUpReferenceFrame v76; 
  char v77; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
  }
  _RDI = ps;
  ClActiveClientMP::GetClientMP(localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1D8h]
    vmovss  xmm1, dword ptr [rdi+1DCh]
    vmovss  dword ptr [rsp+0E8h+angles], xmm0
    vmovss  xmm0, dword ptr [rdi+1E0h]
    vmovss  dword ptr [rsp+0E8h+angles+8], xmm0
    vmovss  dword ptr [rsp+0E8h+angles+4], xmm1
  }
  AngleVectors(&angles, &forward, &right, NULL);
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v76, _RDI, Handler);
  __asm { vxorps  xmm1, xmm1, xmm1; height }
  WorldUpReferenceFrame::SetUpContribution(&v76, *(float *)&_XMM1, &forward);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+0E8h+forward]
    vmovss  xmm6, dword ptr [rsp+0E8h+forward+4]
    vmovss  xmm4, dword ptr [rsp+0E8h+forward+8]
    vmovss  xmm11, cs:__real@3f800000
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm11, xmm0
    vdivss  xmm3, xmm11, xmm0
    vmulss  xmm0, xmm5, xmm3
    vmovss  dword ptr [rsp+0E8h+forward], xmm0
    vmulss  xmm0, xmm4, xmm3
    vmulss  xmm2, xmm6, xmm3
    vxorps  xmm1, xmm1, xmm1; height
    vmovss  dword ptr [rsp+0E8h+forward+8], xmm0
    vmovss  dword ptr [rsp+0E8h+forward+4], xmm2
  }
  WorldUpReferenceFrame::SetUpContribution(&v76, *(float *)&_XMM1, &right);
  __asm
  {
    vmovss  xmm8, dword ptr [rsp+0E8h+right]
    vmovss  xmm9, dword ptr [rsp+0E8h+right+4]
    vmovss  xmm10, dword ptr [rsp+0E8h+right+8]
    vmulss  xmm1, xmm8, xmm8
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm0, xmm2, xmm1
    vmovss  xmm1, dword ptr [rsp+0E8h+forward+4]
    vmulss  xmm2, xmm1, dword ptr [rsi+4]
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm11, xmm0
    vdivss  xmm6, xmm11, xmm0
    vmovss  xmm0, dword ptr [rsp+0E8h+forward]
    vmulss  xmm3, xmm0, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rsp+0E8h+forward+8]
    vmulss  xmm1, xmm0, dword ptr [rsi+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm0, xmm2, cs:__real@42c80000
    vcvttss2si eax, xmm0
  }
  cmd->avoidForward = _EAX;
  __asm
  {
    vmulss  xmm1, xmm8, xmm6
    vmulss  xmm3, xmm1, dword ptr [rsi]
    vmulss  xmm0, xmm9, xmm6
    vmulss  xmm2, xmm0, dword ptr [rsi+4]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm1, xmm10, xmm6
    vmulss  xmm0, xmm1, dword ptr [rsi+8]
    vaddss  xmm2, xmm4, xmm0
    vmulss  xmm3, xmm2, cs:__real@42c80000
    vcvttss2si eax, xmm3
  }
  cmd->avoidRight = _EAX;
  _R11 = &v77;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
  }
}

