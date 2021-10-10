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
  __m256i *v4; 
  int v5; 
  __int64 v7; 

  v3 = localClientNum;
  if ( !outResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 698, ASSERT_TYPE_ASSERT, "(outResult)", (const char *)&queryFormat, "outResult") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 699, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_playerSecondaryCollisionResults ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_playerSecondaryCollisionResults )\n\t%i not in [0, %i)", v7, 2) )
      __debugbreak();
  }
  v4 = (__m256i *)&s_playerSecondaryCollisionResults[v3];
  v5 = v4[2].m256i_i32[6];
  if ( v5 )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "CG_PlayerSecondaryCollision_GetBroadphaseWorkerResult");
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_TRACE_REAR_COLLISION);
    if ( v4[2].m256i_i32[6] != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 711, ASSERT_TYPE_ASSERT, "( results->state ) == ( WORKER_TRACE_FINISHED )", "%s == %s\n\t%i, %i", "results->state", "WORKER_TRACE_FINISHED", v4[2].m256i_i32[6], 2) )
      __debugbreak();
    *(__m256i *)&outResult->trace.fraction = *v4;
    *(__m256i *)&outResult->trace.contents = v4[1];
    *(__m256i *)&outResult->trace.allsolid = v4[2];
    *(__m256i *)&outResult->start.y = v4[3];
    Sys_ProfEndNamedEvent();
    LOBYTE(v5) = 1;
  }
  return v5;
}

/*
==============
CG_PlayerSecondaryCollision_GetParameters
==============
*/
void CG_PlayerSecondaryCollision_GetParameters(const playerState_s *ps, float *outCylinderRadius, float *outCylinderTopHeight, float *outCylinderBottomHeight)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  int suitIndex; 
  const SuitDef *SuitDef; 
  EffectiveStance EffectiveStanceForWorldModelAnimation; 
  float v14; 
  const dvar_t *v15; 
  __int128 v16; 
  double BoundsHeight; 
  __int128 v19; 
  const dvar_t *v21; 
  float value; 
  const dvar_t *v23; 
  double v24; 
  const dvar_t *v25; 
  Bounds bounds; 
  __int128 v28; 
  __int128 v29; 
  __int128 v30; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 573, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  suitIndex = ps->suitIndex;
  v30 = v5;
  SuitDef = BG_GetSuitDef(suitIndex);
  EffectiveStanceForWorldModelAnimation = PM_GetEffectiveStanceForWorldModelAnimation(ps);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
  {
    v29 = v6;
    v28 = v7;
    *(double *)&v4 = BG_Suit_GetBoundsRadius(ps);
    v14 = *(float *)&v4;
    *(double *)&v4 = BG_Suit_GetBoundsHeight(ps, PM_EFF_STANCE_LASTSTANDCRAWL);
    bounds.midPoint.v[2] = *(float *)&v4 * 0.5;
    bounds.halfSize.v[2] = *(float *)&v4 * 0.5;
    bounds.midPoint.v[0] = 0.0;
    bounds.midPoint.v[1] = 0.0;
    bounds.halfSize.v[0] = v14;
    bounds.halfSize.v[1] = v14;
    *(double *)&v4 = BG_PlayerCollision_GetCollisionStickLength(&bounds);
    v15 = DVARINT_playerLastStandCollisionTestSteps;
    v16 = v4;
    if ( !DVARINT_playerLastStandCollisionTestSteps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerLastStandCollisionTestSteps") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    *outCylinderRadius = (float)((float)(v15->current.integer + 1) * v14) + horizPadding;
    BoundsHeight = BG_Suit_GetBoundsHeight(ps, PM_EFF_STANCE_LASTSTANDCRAWL);
    v19 = v16;
    *(float *)&v19 = *(float *)&v16 - vertPadding;
    _XMM1 = v19;
    *outCylinderTopHeight = *(float *)&BoundsHeight + vertPadding;
    __asm { vmaxss  xmm0, xmm1, xmm7 }
  }
  else
  {
    v21 = DVARFLT_playerButtCollisionOffset;
    if ( !DVARFLT_playerButtCollisionOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerButtCollisionOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    value = v21->current.value;
    v23 = DVARFLT_playerButtCollisionClientBroadphaseExtraRadius;
    if ( !DVARFLT_playerButtCollisionClientBroadphaseExtraRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerButtCollisionClientBroadphaseExtraRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    *outCylinderRadius = (float)((float)SuitDef->bounds_radius + value) + v23->current.value;
    v24 = BG_Suit_GetBoundsHeight(ps, EffectiveStanceForWorldModelAnimation);
    *outCylinderTopHeight = *(float *)&v24;
    v25 = DCONST_DVARMPFLT_playerCollisionStandingStickHeight;
    if ( !DCONST_DVARMPFLT_playerCollisionStandingStickHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionStandingStickHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    LODWORD(_XMM0) = v25->current.integer;
  }
  *outCylinderBottomHeight = *(float *)&_XMM0;
  if ( *(float *)&_XMM0 >= *outCylinderTopHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 600, ASSERT_TYPE_ASSERT, "( outCylinderBottomHeight ) < ( outCylinderTopHeight )", "%s < %s\n\t%g, %g", "outCylinderBottomHeight", "outCylinderTopHeight", *outCylinderBottomHeight, *outCylinderTopHeight) )
    __debugbreak();
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
  __int64 v3; 
  workerTrace_t *v6; 
  cg_t *LocalClientGlobals; 
  float frametime; 
  float v9; 
  float v10; 
  cg_t *v11; 
  bool v12; 
  float v13; 
  float v14; 
  float v16; 
  float v17; 
  float v18; 
  int clientNum; 
  float outCylinderBottomHeight; 
  float outCylinderTopHeight; 
  float outCylinderRadius; 
  workerTrace_t *data; 
  int v29; 
  vec3_t v30; 
  vec3_t v31; 
  __int128 v32; 
  __int64 v33; 
  int v34; 
  __int64 v35; 
  float v36; 
  int v37; 
  int v38; 
  TraceExtents extents; 
  int v40; 
  int v41; 
  int v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  int v46; 
  char v47; 
  playerState_s *p_predictedPlayerState; 
  vec3_t v49; 
  vec3_t end; 
  vec3_t start; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 607, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_playerSecondaryCollisionResults ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_playerSecondaryCollisionResults )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v6 = &s_playerSecondaryCollisionResults[v3];
  if ( v6->state == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 610, ASSERT_TYPE_ASSERT, "( results->state ) != ( WORKER_TRACE_STARTED )", "%s != %s\n\t%i, %i", "results->state", "WORKER_TRACE_STARTED", v6->state, 1) )
    __debugbreak();
  v6->state = 0;
  if ( shouldRunPrediction && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 624, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !ps->pm_type )
    {
      v6->state = 1;
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
      frametime = (float)LocalClientGlobals->frametime;
      v9 = frametime * ps->velocity.v[1];
      v49.v[0] = (float)((float)(frametime * ps->velocity.v[0]) * 0.001) + ps->origin.v[0];
      v10 = (float)(frametime * ps->velocity.v[2]) * 0.001;
      v49.v[1] = (float)(v9 * 0.001) + ps->origin.v[1];
      v11 = LocalClientGlobals;
      v49.v[2] = v10 + ps->origin.v[2];
      CG_PlayerSecondaryCollision_GetParameters(ps, &outCylinderRadius, &outCylinderTopHeight, &outCylinderBottomHeight);
      v12 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu);
      v13 = outCylinderBottomHeight;
      v14 = outCylinderTopHeight;
      _XMM6 = LODWORD(outCylinderRadius);
      if ( v12 && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_playerLastStandDebug, "playerLastStandDebug") )
      {
        v16 = ps->origin.v[1];
        v17 = ps->origin.v[0];
        start.v[2] = v13 + ps->origin.v[2];
        v18 = v14 + ps->origin.v[2];
        start.v[1] = v16;
        end.v[1] = v16;
        end.v[2] = v18;
        start.v[0] = v17;
        end.v[0] = v17;
        CG_DebugCylinder(&start, &end, *(float *)&_XMM6, &colorBlue, depthTest_1, duration_2);
      }
      _XMM4 = 0i64;
      v30 = v49;
      v31 = v49;
      __asm
      {
        vinsertps xmm4, xmm4, xmm4, 10h
        vunpcklps xmm0, xmm6, xmm3
      }
      v37 = v3;
      v46 = 0;
      data = &s_playerSecondaryCollisionResults[v3];
      v29 = 1;
      v34 = 65553;
      v33 = *(__int64 *)&_XMM0;
      v47 = 1;
      __asm
      {
        vinsertps xmm4, xmm4, xmm6, 30h ; '0'
        vinsertps xmm4, xmm4, xmm2, 20h ; ' '
      }
      v32 = _XMM4;
      v35 = *(_QWORD *)v11->refdef.viewOffset.v;
      v36 = v11->refdef.viewOffset.v[2];
      p_predictedPlayerState = &v11->predictedPlayerState;
      clientNum = ps->clientNum;
      extents.start = v49;
      extents.end = v49;
      v40 = clientNum;
      v38 = 0;
      v45 = -1i64;
      v43 = 0i64;
      v42 = 65553;
      v41 = 1;
      v44 = 0i64;
      CM_CalcTraceExtents(&extents);
      Sys_AddWorkerCmd(WRKCMD_TRACE_REAR_COLLISION, &data);
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
  __int64 v8; 
  unsigned int number; 
  unsigned int v10; 
  unsigned int v11; 
  const DObj *v12; 
  vec3_t *p_origin; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v18; 
  const snapshot_t *nextSnap; 
  const snapshot_t *snap; 
  float v30; 
  float v31; 
  int serverTime; 
  float v33; 
  float v34; 
  __int64 v35; 
  unsigned int avoidItemCount; 
  __int64 v37; 
  int v38; 
  CgTrajectory v39; 
  vec3_t v40; 
  vec3_t outPos; 

  if ( caData->avoidItemCount >= 0xC8 )
  {
    v38 = 200;
    avoidItemCount = caData->avoidItemCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 473, ASSERT_TYPE_ASSERT, "(unsigned)( caData->avoidItemCount ) < (unsigned)( 200 )", "caData->avoidItemCount doesn't index MAX_AVOID_ITEMS\n\t%i not in [0, %i)", avoidItemCount, v38) )
      __debugbreak();
  }
  v8 = caData->avoidItemCount;
  caData->avoidItems[v8].entityNum = cent->nextState.number;
  number = cent->nextState.number;
  if ( number > 0x9E4 )
  {
    LODWORD(v37) = cent->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v37) )
      __debugbreak();
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v37) = 2;
    LODWORD(v35) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v35, v37) )
      __debugbreak();
  }
  v10 = 2533 * localClientNum + number;
  if ( v10 >= 0x13CA )
  {
    LODWORD(v37) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v37) )
      __debugbreak();
  }
  v11 = clientObjMap[v10];
  if ( v11 )
  {
    if ( v11 >= (unsigned int)s_objCount )
    {
      LODWORD(v37) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v37) )
        __debugbreak();
    }
    v12 = (const DObj *)s_objBuf[v11];
    if ( v12 && DObjGetFirstModel(v12) )
    {
      p_origin = &caData->avoidItems[v8].origin;
      if ( !cent->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(cent->pose.origin.Get_origin, &cent->pose);
      FunctionPointer_origin(&cent->pose.origin.origin.origin, &caData->avoidItems[v8].origin);
      if ( cent->pose.isPosePrecise )
      {
        _XMM0 = LODWORD(p_origin->v[0]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v18 = *(double *)&_XMM0 * 0.000244140625;
        _XMM0 = v18;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        _XMM0 = LODWORD(caData->avoidItems[v8].origin.v[1]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        p_origin->v[0] = *(float *)&_XMM1;
        *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v18 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v18;
        _XMM0 = LODWORD(caData->avoidItems[v8].origin.v[2]);
        __asm
        {
          vcvtsd2ss xmm2, xmm1, xmm1
          vcvtdq2pd xmm0, xmm0
        }
        *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v18 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v18;
        caData->avoidItems[v8].origin.v[1] = *(float *)&_XMM2;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        caData->avoidItems[v8].origin.v[2] = *(float *)&_XMM2;
      }
      DObjPhysicsGetBounds(v12, &caData->avoidItems[v8].bounds);
      nextSnap = cgameGlob->nextSnap;
      snap = cgameGlob->snap;
      v30 = 0.0;
      v31 = (float)(nextSnap->serverTime - snap->serverTime) * 0.001;
      if ( v31 <= 0.0 )
      {
        *(_QWORD *)caData->avoidItems[v8].velocity.v = 0i64;
      }
      else
      {
        CgTrajectory::CgTrajectory(&v39, localClientNum, cent, &cent->prevState);
        BgTrajectory::EvaluatePosTrajectory(&v39, snap->serverTime, &outPos);
        serverTime = nextSnap->serverTime;
        v39.m_es = &cent->nextState.lerp;
        BgTrajectory::EvaluatePosTrajectory(&v39, serverTime, &v40);
        v33 = v40.v[2] - outPos.v[2];
        caData->avoidItems[v8].velocity.v[1] = v40.v[1] - outPos.v[1];
        v34 = v40.v[0];
        caData->avoidItems[v8].velocity.v[2] = v33;
        caData->avoidItems[v8].velocity.v[0] = (float)(v34 - outPos.v[0]) / v31;
        caData->avoidItems[v8].velocity.v[1] = caData->avoidItems[v8].velocity.v[1] / v31;
        v30 = caData->avoidItems[v8].velocity.v[2] / v31;
      }
      caData->avoidItems[v8].velocity.v[2] = v30;
      ++caData->avoidItemCount;
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
  __int128 v5; 
  float v9; 
  CgHandler *Handler; 
  __int128 v11; 
  __int128 v15; 
  float rightmove; 
  float forwardmove; 
  __int128 v21; 
  float v22; 
  float v23; 
  float v24; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  vec3_t *p_origin; 
  __int128 v33; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  __int128 v42; 
  __int128 v46; 
  __int128 v47; 
  float v48; 
  float v49; 
  float v50; 
  const dvar_t *v51; 
  float v52; 
  __int128 v53; 
  __int128 v54; 
  float v55; 
  float v56; 
  float v57; 
  const dvar_t *v58; 
  float v59; 
  __int128 v60; 
  int v64; 
  int v65; 
  const dvar_t *v66; 
  float v67; 
  __m128 v68; 
  float v69; 
  vec3_t forward; 
  vec3_t end; 
  vec3_t vec; 
  vec3_t right; 
  vec3_t outVec; 
  vec3_t angles; 
  WorldUpReferenceFrame v79; 
  __int128 v80; 

  ClActiveClientMP::GetClientMP(localClientNum);
  v9 = ps->viewangles.v[1];
  angles.v[0] = ps->viewangles.v[0];
  angles.v[2] = ps->viewangles.v[2];
  angles.v[1] = v9;
  AngleVectors(&angles, &forward, &right, NULL);
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v79, ps, Handler);
  WorldUpReferenceFrame::SetUpContribution(&v79, 0.0, &forward);
  v11 = LODWORD(forward.v[0]);
  *(float *)&v11 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(forward.v[1] * forward.v[1])) + (float)(forward.v[2] * forward.v[2]));
  _XMM3 = v11;
  __asm
  {
    vcmpless xmm0, xmm3, xmm14
    vblendvps xmm0, xmm3, xmm13, xmm0
  }
  forward.v[0] = forward.v[0] * (float)(1.0 / *(float *)&_XMM0);
  forward.v[1] = forward.v[1] * (float)(1.0 / *(float *)&_XMM0);
  forward.v[2] = forward.v[2] * (float)(1.0 / *(float *)&_XMM0);
  WorldUpReferenceFrame::SetUpContribution(&v79, 0.0, &right);
  v15 = LODWORD(right.v[0]);
  *(float *)&v15 = fsqrt((float)((float)(*(float *)&v15 * *(float *)&v15) + (float)(right.v[1] * right.v[1])) + (float)(right.v[2] * right.v[2]));
  _XMM3 = v15;
  __asm
  {
    vcmpless xmm0, xmm3, xmm14
    vblendvps xmm0, xmm3, xmm13, xmm0
  }
  rightmove = (float)cmd->rightmove;
  v21 = 0i64;
  forwardmove = (float)cmd->forwardmove;
  v22 = (float)(forwardmove * forward.v[0]) + (float)((float)(right.v[0] * (float)(1.0 / *(float *)&_XMM0)) * rightmove);
  right.v[0] = right.v[0] * (float)(1.0 / *(float *)&_XMM0);
  right.v[1] = right.v[1] * (float)(1.0 / *(float *)&_XMM0);
  v23 = (float)(forwardmove * forward.v[1]) + (float)(right.v[1] * rightmove);
  right.v[2] = right.v[2] * (float)(1.0 / *(float *)&_XMM0);
  v24 = (float)(forwardmove * forward.v[2]) + (float)(right.v[2] * rightmove);
  *(float *)&v21 = fsqrt((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v24 * v24));
  _XMM9 = v21;
  __asm
  {
    vcmpless xmm0, xmm9, xmm14
    vblendvps xmm0, xmm9, xmm13, xmm0
  }
  v28 = v22 * (float)(1.0 / *(float *)&_XMM0);
  v29 = v23 * (float)(1.0 / *(float *)&_XMM0);
  v30 = v24 * (float)(1.0 / *(float *)&_XMM0);
  v31 = avoidItem->origin.v[0] - ps->origin.v[0];
  *(float *)&v21 = avoidItem->origin.v[1] - ps->origin.v[1];
  p_origin = &avoidItem->origin;
  vec.v[0] = v31;
  vec.v[1] = *(float *)&v21;
  vec.v[2] = p_origin->v[2] - ps->origin.v[2];
  WorldUpReferenceFrame::SetUpContribution(&v79, 0.0, &vec);
  v33 = LODWORD(vec.v[1]);
  *(float *)&v33 = fsqrt((float)((float)(*(float *)&v33 * *(float *)&v33) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
  _XMM3 = v33;
  __asm
  {
    vcmpless xmm0, xmm3, xmm14
    vblendvps xmm0, xmm3, xmm13, xmm0
  }
  v37 = 1.0 / *(float *)&_XMM0;
  v38 = vec.v[0] * (float)(1.0 / *(float *)&_XMM0);
  v39 = vec.v[1] * (float)(1.0 / *(float *)&_XMM0);
  v41 = vec.v[2] * v37;
  v40 = vec.v[2] * v37;
  vec.v[0] = v38;
  vec.v[1] = v39;
  vec.v[2] = vec.v[2] * v37;
  if ( *(float *)&_XMM9 <= 0.0 )
  {
    *(float *)&_XMM9 = FLOAT_60_0;
    v28 = v38;
    v29 = v39;
    v30 = v41;
  }
  else if ( (float)((float)((float)(v29 * v39) + (float)(v28 * v38)) + (float)(v30 * v40)) < 0.0 )
  {
    return;
  }
  v80 = v5;
  WorldUpReferenceFrame::CrossWithUp(&v79, &vec, &outVec);
  v42 = LODWORD(outVec.v[0]);
  *(float *)&v42 = fsqrt((float)((float)(*(float *)&v42 * *(float *)&v42) + (float)(outVec.v[1] * outVec.v[1])) + (float)(outVec.v[2] * outVec.v[2]));
  _XMM3 = v42;
  __asm
  {
    vcmpless xmm0, xmm3, xmm14
    vblendvps xmm0, xmm3, xmm13, xmm0
  }
  v47 = LODWORD(outVec.v[0]);
  *(float *)&v47 = outVec.v[0] * (float)(1.0 / *(float *)&_XMM0);
  v46 = v47;
  v48 = outVec.v[1] * (float)(1.0 / *(float *)&_XMM0);
  v50 = outVec.v[2] * (float)(1.0 / *(float *)&_XMM0);
  v49 = v50;
  outVec.v[0] = *(float *)&v46;
  outVec.v[1] = v48;
  outVec.v[2] = v50;
  if ( (float)((float)((float)(v29 * v48) + (float)(v28 * *(float *)&v46)) + (float)(v30 * v50)) < 0.0 )
  {
    v46 ^= (unsigned int)_xmm;
    LODWORD(v48) ^= _xmm;
    LODWORD(v49) = LODWORD(v50) ^ _xmm;
    outVec.v[0] = *(float *)&v46;
    outVec.v[1] = v48;
    LODWORD(outVec.v[2]) = LODWORD(v50) ^ _xmm;
  }
  v51 = DCONST_DVARBOOL_collAvoid_debug;
  v52 = (float)(v29 * 60.0) + p_origin->v[1];
  end.v[0] = (float)(v28 * 60.0) + p_origin->v[0];
  end.v[2] = (float)(v30 * 60.0) + p_origin->v[2];
  end.v[1] = v52;
  v54 = v46;
  *(float *)&v54 = *(float *)&v46 * *(float *)&_XMM9;
  v53 = v54;
  v55 = v48 * *(float *)&_XMM9;
  v57 = v49 * *(float *)&_XMM9;
  v56 = v49 * *(float *)&_XMM9;
  if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v51);
  if ( v51->current.enabled )
    CG_DebugLine(p_origin, &end, &colorGreen, 0, 0);
  v58 = DCONST_DVARBOOL_collAvoid_debug;
  v59 = v55 + p_origin->v[1];
  end.v[0] = *(float *)&v53 + p_origin->v[0];
  end.v[2] = v57 + p_origin->v[2];
  end.v[1] = v59;
  if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  if ( v58->current.enabled )
    CG_DebugLine(p_origin, &end, &colorRed, 0, 0);
  v60 = v53;
  *(float *)&v60 = (float)((float)(*(float *)&v53 * right.v[0]) + (float)(v55 * right.v[1])) + (float)(v56 * right.v[2]);
  _XMM4 = v60 & _xmm;
  __asm
  {
    vmaxss  xmm1, xmm4, xmm0
    vmaxss  xmm2, xmm1, xmm5
  }
  v64 = (int)(float)((float)((float)(1.0 / *(float *)&_XMM2) * (float)((float)((float)(*(float *)&v53 * forward.v[0]) + (float)(v55 * forward.v[1])) + (float)(v56 * forward.v[2]))) * 127.0);
  v65 = (int)(float)((float)((float)(1.0 / *(float *)&_XMM2) * *(float *)&v60) * 127.0);
  cmd->rightmove = v65;
  cmd->forwardmove = v64;
  v66 = DCONST_DVARBOOL_collAvoid_debug;
  v67 = _mm_cvtepi32_ps((__m128i)(unsigned int)(char)v65).m128_f32[0];
  v68 = _mm_cvtepi32_ps((__m128i)(unsigned int)(char)v64);
  *(float *)&_XMM4 = (float)(v68.m128_f32[0] * forward.v[0]) + (float)(v67 * right.v[0]);
  v69 = (float)(v68.m128_f32[0] * forward.v[1]) + (float)(v67 * right.v[1]);
  v68.m128_f32[0] = fsqrt((float)(v69 * v69) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4));
  _XMM2 = v68;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm13, xmm0
  }
  _XMM2.m128_f32[0] = (float)((float)(*(float *)&_XMM4 * (float)(1.0 / *(float *)&_XMM0)) * 60.0) + p_origin->v[0];
  v68.m128_f32[0] = (float)(v69 * (float)(1.0 / *(float *)&_XMM0)) * 60.0;
  *(float *)&_XMM0 = p_origin->v[2];
  end.v[0] = _XMM2.m128_f32[0];
  end.v[1] = v68.m128_f32[0] + p_origin->v[1];
  end.v[2] = *(float *)&_XMM0;
  if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v66);
  if ( v66->current.enabled )
    CG_DebugLine(p_origin, &end, &colorYellow, 0, 0);
}

/*
==============
CollAvoid_CalculateLinearAvoidance
==============
*/

void __fastcall CollAvoid_CalculateLinearAvoidance(LocalClientNum_t localClientNum, const playerState_s *ps, double deltaTime, CollAvoidItem *avoidItem, usercmd_s *cmd, vec3_t *inOutAvoidAgg)
{
  __int128 v7; 
  float v10; 
  float v11; 
  float v12; 
  CgHandler *Handler; 
  vec3_t *p_origin; 
  float v15; 
  float v16; 
  __int128 v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  bool v22; 
  bool v23; 
  __int128 v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  __int128 v32; 
  __int128 v37; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  const dvar_t *v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  const dvar_t *v53; 
  float v54; 
  const dvar_t *v55; 
  const dvar_t *v56; 
  const dvar_t *v57; 
  float v58; 
  float value; 
  const dvar_t *v60; 
  const dvar_t *v61; 
  vec3_t outVec; 
  vec3_t end; 
  vec3_t v67; 
  vec3_t vec; 
  vec3_t v69; 
  WorldUpReferenceFrame v70; 

  v7 = *(_OWORD *)&deltaTime;
  ClActiveClientMP::GetClientMP(localClientNum);
  v10 = ps->velocity.v[1];
  vec.v[0] = inOutAvoidAgg->v[0] + ps->velocity.v[0];
  v11 = v10 + inOutAvoidAgg->v[1];
  v12 = ps->velocity.v[2];
  vec.v[1] = v11;
  vec.v[2] = v12 + inOutAvoidAgg->v[2];
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v70, ps, Handler);
  WorldUpReferenceFrame::SetUpContribution(&v70, 0.0, &vec);
  p_origin = &avoidItem->origin;
  v15 = avoidItem->origin.v[1] - ps->origin.v[1];
  v69.v[0] = avoidItem->origin.v[0] - ps->origin.v[0];
  v69.v[2] = avoidItem->origin.v[2] - ps->origin.v[2];
  v69.v[1] = v15;
  WorldUpReferenceFrame::SetUpContribution(&v70, 0.0, &v69);
  v16 = vec.v[0] - avoidItem->velocity.v[0];
  v18 = LODWORD(vec.v[1]);
  *(float *)&v18 = vec.v[1] - avoidItem->velocity.v[1];
  v17 = v18;
  v19 = vec.v[2] - avoidItem->velocity.v[2];
  if ( (float)((float)((float)(vec.v[0] * vec.v[0]) + (float)(vec.v[1] * vec.v[1])) + (float)(vec.v[2] * vec.v[2])) < (float)((float)((float)(*(float *)&v17 * *(float *)&v17) + (float)(v16 * v16)) + (float)(v19 * v19)) )
  {
    v16 = vec.v[0];
    v17 = LODWORD(vec.v[1]);
    v19 = vec.v[2];
  }
  v21 = LODWORD(v69.v[1]);
  v20 = (float)(v69.v[1] * v69.v[1]) + (float)(v69.v[0] * v69.v[0]);
  *(float *)&v21 = v20 + (float)(v69.v[2] * v69.v[2]);
  v22 = *(float *)&v21 < 225.0;
  v23 = cmd->forwardmove || cmd->rightmove;
  if ( (float)((float)((float)(vec.v[0] * v69.v[0]) + (float)(v69.v[1] * vec.v[1])) + (float)(v69.v[2] * vec.v[2])) > 0.0 || !v23 || (float)(v20 + (float)(v69.v[2] * v69.v[2])) < 225.0 )
  {
    *(float *)&v21 = fsqrt(*(float *)&v21);
    _XMM1 = v21;
    __asm
    {
      vcmpless xmm0, xmm1, xmm10
      vblendvps xmm0, xmm1, xmm9, xmm0
    }
    v28 = v17;
    v67.v[1] = v69.v[1] * (float)(1.0 / *(float *)&_XMM0);
    v67.v[0] = v69.v[0] * (float)(1.0 / *(float *)&_XMM0);
    *(float *)&v28 = (float)((float)(*(float *)&v17 * v67.v[1]) + (float)(v16 * v67.v[0])) + (float)(v19 * (float)(v69.v[2] * (float)(1.0 / *(float *)&_XMM0)));
    _XMM6 = v28;
    v67.v[2] = v69.v[2] * (float)(1.0 / *(float *)&_XMM0);
    if ( *(float *)&v28 <= 0.0 )
      goto LABEL_40;
    v29 = DCONST_DVARFLT_collAvoid_linearMinSpeed;
    if ( !DCONST_DVARFLT_collAvoid_linearMinSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_linearMinSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( *(float *)&v28 >= v29->current.value )
    {
LABEL_40:
      v56 = DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed;
      if ( !DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_linearNearlyStoppedSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v56);
      if ( *(float *)&v28 < v56->current.value )
      {
        v57 = DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed;
        v58 = (float)((float)(avoidItem->velocity.v[0] * avoidItem->velocity.v[0]) + (float)(avoidItem->velocity.v[1] * avoidItem->velocity.v[1])) + (float)(avoidItem->velocity.v[2] * avoidItem->velocity.v[2]);
        if ( !DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_linearNearlyStoppedSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v57);
        value = v57->current.value;
        v60 = DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed;
        if ( !DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_linearNearlyStoppedSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v60);
        if ( v58 < (float)(value * v60->current.value) )
        {
          v61 = DCONST_DVARFLT_collAvoid_linearMinSpeed;
          if ( !DCONST_DVARFLT_collAvoid_linearMinSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_linearMinSpeed") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v61);
          _XMM0 = v22;
          __asm { vpcmpeqd xmm2, xmm0, xmm1 }
          _XMM1 = LODWORD(FLOAT_150_0);
          __asm { vblendvps xmm6, xmm1, xmm3, xmm2 }
        }
      }
    }
    else
    {
      v30 = DCONST_DVARFLT_collAvoid_linearMinSpeed;
      if ( !DCONST_DVARFLT_collAvoid_linearMinSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_linearMinSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      _XMM6 = v30->current.unsignedInt;
    }
    v31 = DCONST_DVARFLT_collAvoid_linearAccel;
    if ( !DCONST_DVARFLT_collAvoid_linearAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_linearAccel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    v32 = v7;
    *(float *)&v32 = (float)(*(float *)&v7 * v31->current.value) * *(float *)&_XMM6;
    _XMM3 = v32;
    _XMM0 = _XMM6 & _xmm;
    __asm
    {
      vcmpltss xmm2, xmm0, xmm2
      vblendvps xmm8, xmm3, xmm6, xmm2
    }
    *(float *)&_XMM0 = (float)(COERCE_FLOAT(_XMM8 ^ _xmm) * v67.v[1]) + inOutAvoidAgg->v[1];
    inOutAvoidAgg->v[0] = (float)(COERCE_FLOAT(_XMM8 ^ _xmm) * v67.v[0]) + inOutAvoidAgg->v[0];
    inOutAvoidAgg->v[2] = (float)(COERCE_FLOAT(_XMM8 ^ _xmm) * v67.v[2]) + inOutAvoidAgg->v[2];
    inOutAvoidAgg->v[1] = *(float *)&_XMM0;
    WorldUpReferenceFrame::CrossWithUp(&v70, &v67, &outVec);
    v37 = LODWORD(outVec.v[0]);
    *(float *)&v37 = fsqrt((float)((float)(*(float *)&v37 * *(float *)&v37) + (float)(outVec.v[1] * outVec.v[1])) + (float)(outVec.v[2] * outVec.v[2]));
    _XMM3 = v37;
    __asm
    {
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm9, xmm0
    }
    v41 = (float)(1.0 / *(float *)&_XMM0) * outVec.v[0];
    v42 = (float)(1.0 / *(float *)&_XMM0) * outVec.v[1];
    v44 = (float)(1.0 / *(float *)&_XMM0) * outVec.v[2];
    v43 = v44;
    outVec.v[0] = v41;
    outVec.v[1] = v42;
    outVec.v[2] = v44;
    if ( (float)((float)((float)(*(float *)&v17 * v42) + (float)(v16 * v41)) + (float)(v44 * v19)) < 0.0 )
    {
      LODWORD(v41) ^= _xmm;
      LODWORD(v42) ^= _xmm;
      LODWORD(v43) = LODWORD(v44) ^ _xmm;
      outVec.v[0] = v41;
      outVec.v[1] = v42;
      LODWORD(outVec.v[2]) = LODWORD(v44) ^ _xmm;
    }
    inOutAvoidAgg->v[0] = (float)(v41 * *(float *)&_XMM8) + inOutAvoidAgg->v[0];
    v45 = 60.0 * v67.v[1];
    v46 = (float)(v42 * *(float *)&_XMM8) + inOutAvoidAgg->v[1];
    inOutAvoidAgg->v[2] = (float)(v43 * *(float *)&_XMM8) + inOutAvoidAgg->v[2];
    v47 = 60.0 * v67.v[0];
    inOutAvoidAgg->v[1] = v46;
    v48 = DCONST_DVARBOOL_collAvoid_debug;
    v49 = avoidItem->origin.v[1];
    end.v[0] = p_origin->v[0] - v47;
    v50 = v49 - v45;
    v51 = avoidItem->origin.v[2];
    end.v[1] = v50;
    end.v[2] = v51 - (float)(60.0 * v67.v[2]);
    if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v48);
    if ( v48->current.enabled )
      CG_DebugLine(p_origin, &end, &colorYellow, 0, 0);
    v52 = vec.v[1] + avoidItem->origin.v[1];
    v53 = DCONST_DVARBOOL_collAvoid_debug;
    end.v[0] = vec.v[0] + p_origin->v[0];
    end.v[2] = vec.v[2] + avoidItem->origin.v[2];
    end.v[1] = v52;
    if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v53);
    if ( v53->current.enabled )
      CG_DebugLine(p_origin, &end, &colorGreen, 0, 0);
    v54 = (float)(60.0 * outVec.v[1]) + avoidItem->origin.v[1];
    v55 = DCONST_DVARBOOL_collAvoid_debug;
    end.v[0] = (float)(60.0 * outVec.v[0]) + p_origin->v[0];
    end.v[1] = v54;
    end.v[2] = (float)(60.0 * outVec.v[2]) + avoidItem->origin.v[2];
    if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v55);
    if ( v55->current.enabled )
      CG_DebugLine(p_origin, &end, &colorRed, 0, 0);
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
void CollAvoid_DebugTraceLine(const vec3_t *startPos, const vec3_t *endPos, const float fraction, const vec4_t *color, const int time)
{
  const dvar_t *v5; 
  float v10; 
  float v11; 
  vec3_t end; 

  v5 = DCONST_DVARBOOL_collAvoid_debug;
  if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    v10 = (float)(endPos->v[1] - startPos->v[1]) * fraction;
    v11 = endPos->v[2] - startPos->v[2];
    end.v[0] = (float)((float)(endPos->v[0] - startPos->v[0]) * fraction) + startPos->v[0];
    end.v[1] = v10 + startPos->v[1];
    end.v[2] = (float)(v11 * fraction) + startPos->v[2];
    CG_DebugLine(startPos, &end, color, 0, time);
  }
}

/*
==============
CollAvoid_DebugTraceStar
==============
*/
void CollAvoid_DebugTraceStar(const vec3_t *startPos, const vec3_t *endPos, const float fraction, const vec4_t *color, const int time)
{
  const dvar_t *v5; 
  float v10; 
  float v11; 
  vec3_t point; 

  v5 = DCONST_DVARBOOL_collAvoid_debug;
  if ( !DCONST_DVARBOOL_collAvoid_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    v10 = (float)(endPos->v[1] - startPos->v[1]) * fraction;
    v11 = endPos->v[2] - startPos->v[2];
    point.v[0] = (float)((float)(endPos->v[0] - startPos->v[0]) * fraction) + startPos->v[0];
    point.v[1] = v10 + startPos->v[1];
    point.v[2] = (float)(v11 * fraction) + startPos->v[2];
    CG_DebugStar(&point, color, 0, time);
  }
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
void CollAvoid_PredictAvoidItems(CollAvoidData *caData, float deltaTime)
{
  unsigned int i; 
  __int64 v3; 
  __int64 v4; 

  for ( i = 0; i < caData->avoidItemCount; caData->avoidItems[v4].origin.v[2] = (float)(deltaTime * caData->avoidItems[v3].velocity.v[2]) + caData->avoidItems[v3].origin.v[2] )
  {
    v3 = i++;
    v4 = v3;
    caData->avoidItems[v4].origin.v[0] = (float)(deltaTime * caData->avoidItems[v3].velocity.v[0]) + caData->avoidItems[v3].origin.v[0];
    caData->avoidItems[v4].origin.v[1] = (float)(deltaTime * caData->avoidItems[v3].velocity.v[1]) + caData->avoidItems[v3].origin.v[1];
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
  const Bounds *Bounds; 
  double v8; 
  float v9; 
  const dvar_t *v10; 
  float v11; 
  CgHandler *Handler; 
  float v13; 
  vec3_t vec; 
  __int128 v16; 
  double v17; 
  WorldUpReferenceFrame v18; 

  if ( avoidItem->entityNum == ps->clientNum )
    return 0;
  EffectiveStance = PM_GetEffectiveStance(ps);
  Bounds = BG_Suit_GetBounds(ps->suitIndex, EffectiveStance);
  v8 = *(double *)&Bounds->halfSize.y;
  v16 = *(_OWORD *)Bounds->midPoint.v;
  v17 = v8;
  v9 = *((float *)&v16 + 2) + ps->origin.v[2];
  avoidItem->bounds.midPoint.v[0] = avoidItem->bounds.midPoint.v[0] + avoidItem->origin.v[0];
  avoidItem->bounds.midPoint.v[1] = avoidItem->bounds.midPoint.v[1] + avoidItem->origin.v[1];
  avoidItem->bounds.midPoint.v[2] = avoidItem->bounds.midPoint.v[2] + avoidItem->origin.v[2];
  if ( avoidItem == (CollAvoidItem *)-28i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 581, ASSERT_TYPE_ASSERT, "(b1)", (const char *)&queryFormat, "b1") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - avoidItem->bounds.midPoint.v[2]) & _xmm) >= (float)(*((float *)&v17 + 1) + avoidItem->bounds.halfSize.v[2]) )
    return 0;
  v10 = DCONST_DVARFLT_collAvoid_additionalAvoidDistance;
  if ( !DCONST_DVARFLT_collAvoid_additionalAvoidDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_additionalAvoidDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = (float)(avoidItem->bounds.halfSize.v[0] + 15.0) + v10->current.value;
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v18, ps, Handler);
  v13 = avoidItem->origin.v[1] - ps->origin.v[1];
  vec.v[0] = avoidItem->origin.v[0] - ps->origin.v[0];
  vec.v[2] = avoidItem->origin.v[2] - ps->origin.v[2];
  vec.v[1] = v13;
  WorldUpReferenceFrame::SetUpContribution(&v18, 0.0, &vec);
  return (float)((float)((float)(vec.v[1] * vec.v[1]) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2])) < (float)(v11 * v11);
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
void CollAvoid_UpdateMoveCmd(LocalClientNum_t localClientNum, const playerState_s *ps, double deltaTime, usercmd_s *cmd)
{
  __int64 v4; 
  unsigned int v7; 
  CollAvoidData *v8; 
  unsigned int i; 
  __int64 v10; 
  __int64 v11; 
  float v12; 
  float v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  CgHandler *Handler; 
  __int128 v18; 
  __int128 v22; 
  int v27; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t angles; 
  WorldUpReferenceFrame v31; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v27 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_collision_avoid.cpp", 95, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v27) )
      __debugbreak();
  }
  v7 = 0;
  v8 = &s_collAvoidDatas[v4];
  for ( i = 0; i < v8->avoidItemCount; v8->avoidItems[v11].origin.v[2] = (float)(*(float *)&deltaTime * v8->avoidItems[v10].velocity.v[2]) + v8->avoidItems[v10].origin.v[2] )
  {
    v10 = i++;
    v11 = v10;
    v8->avoidItems[v11].origin.v[0] = (float)(*(float *)&deltaTime * v8->avoidItems[v10].velocity.v[0]) + v8->avoidItems[v10].origin.v[0];
    v8->avoidItems[v11].origin.v[1] = (float)(*(float *)&deltaTime * v8->avoidItems[v10].velocity.v[1]) + v8->avoidItems[v10].origin.v[1];
  }
  v12 = 0.0;
  v13 = 0.0;
  v14 = 0.0;
  *(_DWORD *)&cmd->avoidForward = 0;
  forward.v[0] = 0.0;
  forward.v[1] = 0.0;
  forward.v[2] = 0.0;
  if ( v8->avoidItemCount )
  {
    do
    {
      if ( CollAvoid_ShouldAvoidTarget((LocalClientNum_t)v4, ps, &v8->avoidItems[v7]) )
      {
        v15 = DCONST_DVARINT_collAvoid_avoidType;
        if ( !DCONST_DVARINT_collAvoid_avoidType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_avoidType") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        if ( v15->current.integer == 1 )
        {
          CollAvoid_CalculateLinearAvoidance((LocalClientNum_t)v4, ps, deltaTime, &v8->avoidItems[v7], cmd, &forward);
        }
        else if ( v15->current.integer == 2 )
        {
          CollAvoid_CalculateCmdAvoidance((LocalClientNum_t)v4, ps, *(float *)&deltaTime, &v8->avoidItems[v7], cmd);
        }
      }
      ++v7;
    }
    while ( v7 < v8->avoidItemCount );
    v14 = forward.v[2];
    v13 = forward.v[1];
    v12 = forward.v[0];
  }
  ClActiveClientMP::GetClientMP((const LocalClientNum_t)v4);
  v16 = ps->viewangles.v[1];
  angles.v[0] = ps->viewangles.v[0];
  angles.v[2] = ps->viewangles.v[2];
  angles.v[1] = v16;
  AngleVectors(&angles, &forward, &right, NULL);
  Handler = CgHandler::getHandler((LocalClientNum_t)v4);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v31, ps, Handler);
  WorldUpReferenceFrame::SetUpContribution(&v31, 0.0, &forward);
  v18 = LODWORD(forward.v[0]);
  *(float *)&v18 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(forward.v[1] * forward.v[1])) + (float)(forward.v[2] * forward.v[2]));
  _XMM3 = v18;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  forward.v[0] = forward.v[0] * (float)(1.0 / *(float *)&_XMM0);
  forward.v[2] = forward.v[2] * (float)(1.0 / *(float *)&_XMM0);
  forward.v[1] = forward.v[1] * (float)(1.0 / *(float *)&_XMM0);
  WorldUpReferenceFrame::SetUpContribution(&v31, 0.0, &right);
  v22 = LODWORD(right.v[0]);
  *(float *)&v22 = fsqrt((float)((float)(*(float *)&v22 * *(float *)&v22) + (float)(right.v[1] * right.v[1])) + (float)(right.v[2] * right.v[2]));
  _XMM3 = v22;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  *(float *)&v22 = (float)((float)((float)((float)(right.v[1] * (float)(1.0 / *(float *)&_XMM0)) * v13) + (float)((float)(right.v[0] * (float)(1.0 / *(float *)&_XMM0)) * v12)) + (float)((float)(right.v[2] * (float)(1.0 / *(float *)&_XMM0)) * v14)) * 100.0;
  cmd->avoidForward = (int)(float)((float)((float)((float)(v13 * forward.v[1]) + (float)(v12 * forward.v[0])) + (float)(v14 * forward.v[2])) * 100.0);
  cmd->avoidRight = (int)*(float *)&v22;
}

/*
==============
CollAvoid_WriteAvoidanceToCmd
==============
*/
void CollAvoid_WriteAvoidanceToCmd(LocalClientNum_t localClientNum, const playerState_s *ps, usercmd_s *cmd, const vec3_t *avoidAgg)
{
  float v8; 
  CgHandler *Handler; 
  __int128 v10; 
  __int128 v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t angles; 
  WorldUpReferenceFrame v24; 

  ClActiveClientMP::GetClientMP(localClientNum);
  v8 = ps->viewangles.v[1];
  angles.v[0] = ps->viewangles.v[0];
  angles.v[2] = ps->viewangles.v[2];
  angles.v[1] = v8;
  AngleVectors(&angles, &forward, &right, NULL);
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v24, ps, Handler);
  WorldUpReferenceFrame::SetUpContribution(&v24, 0.0, &forward);
  v10 = LODWORD(forward.v[0]);
  *(float *)&v10 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(forward.v[1] * forward.v[1])) + (float)(forward.v[2] * forward.v[2]));
  _XMM3 = v10;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm11, xmm0
  }
  forward.v[0] = forward.v[0] * (float)(1.0 / *(float *)&_XMM0);
  forward.v[2] = forward.v[2] * (float)(1.0 / *(float *)&_XMM0);
  forward.v[1] = forward.v[1] * (float)(1.0 / *(float *)&_XMM0);
  WorldUpReferenceFrame::SetUpContribution(&v24, 0.0, &right);
  v14 = LODWORD(right.v[0]);
  v15 = right.v[1];
  v16 = right.v[2];
  v17 = v14;
  *(float *)&v17 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(v15 * v15)) + (float)(v16 * v16));
  _XMM3 = v17;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm11, xmm0
  }
  cmd->avoidForward = (int)(float)((float)((float)((float)(forward.v[0] * avoidAgg->v[0]) + (float)(forward.v[1] * avoidAgg->v[1])) + (float)(forward.v[2] * avoidAgg->v[2])) * 100.0);
  cmd->avoidRight = (int)(float)((float)((float)((float)((float)(*(float *)&v14 * (float)(1.0 / *(float *)&_XMM0)) * avoidAgg->v[0]) + (float)((float)(v15 * (float)(1.0 / *(float *)&_XMM0)) * avoidAgg->v[1])) + (float)((float)(v16 * (float)(1.0 / *(float *)&_XMM0)) * avoidAgg->v[2])) * 100.0);
}

