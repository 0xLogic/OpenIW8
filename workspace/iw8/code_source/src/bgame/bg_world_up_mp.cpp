/*
==============
WorldUpMp_UpdateArbitraryUpForGroundUpdate
==============
*/

void __fastcall WorldUpMp_UpdateArbitraryUpForGroundUpdate(pmove_t *pm, const pml_t *pml, const trace_t *trace)
{
  ?WorldUpMp_UpdateArbitraryUpForGroundUpdate@@YAXPEAVpmove_t@@PEBUpml_t@@PEBUtrace_t@@@Z(pm, pml, trace);
}

/*
==============
WorldUpMp_IsLockedTransitionActive
==============
*/

bool __fastcall WorldUpMp_IsLockedTransitionActive(const playerState_s *ps)
{
  return ?WorldUpMp_IsLockedTransitionActive@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
WorldUpMp_GetCustomSlideMoveGravityDir
==============
*/

bool __fastcall WorldUpMp_GetCustomSlideMoveGravityDir(const pmove_t *pm, vec3_t *outGravityDir)
{
  return ?WorldUpMp_GetCustomSlideMoveGravityDir@@YA_NPEBVpmove_t@@AEATvec3_t@@@Z(pm, outGravityDir);
}

/*
==============
WorldUpMp_IsUnlockedTransitionActive
==============
*/

bool __fastcall WorldUpMp_IsUnlockedTransitionActive(const playerState_s *ps)
{
  return ?WorldUpMp_IsUnlockedTransitionActive@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
WorldUpMp_CalculateNormalForGroundUpdate
==============
*/
char WorldUpMp_CalculateNormalForGroundUpdate(pmove_t *pm, vec3_t *outNormal, bool *outInTrigger)
{
  playerState_s *ps; 
  bool WorldUpTriggerData; 
  float v8; 
  float v9; 
  int v10; 
  unsigned int i; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  BgTrace *m_trace; 
  float v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  __int128 v22; 
  float v26; 
  __int64 v27; 
  float v28; 
  const dvar_t *v30; 
  int passEntityNum; 
  int contentMask; 
  bool outHadValidTriggerData; 
  vec3_t vec; 
  vec3_t start; 
  vec3_t normal; 
  vec3_t angles; 
  vec3_t end; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 225, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !outInTrigger && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 226, ASSERT_TYPE_ASSERT, "(outInTrigger)", (const char *)&queryFormat, "outInTrigger") )
    __debugbreak();
  ps = pm->ps;
  outNormal->v[0] = WorldUpReferenceFrame::m_defaultUp.v[0];
  outNormal->v[1] = WorldUpReferenceFrame::m_defaultUp.v[1];
  outHadValidTriggerData = 0;
  outNormal->v[2] = WorldUpReferenceFrame::m_defaultUp.v[2];
  WorldUpTriggerData = WorldUpMp_GetWorldUpTriggerData(pm, outNormal, &outHadValidTriggerData);
  *outInTrigger = WorldUpTriggerData;
  if ( !WorldUpTriggerData )
  {
    if ( ps->worldUpTransitionTarget && !WorldUpMp_IsWorldTransitionActive(pm->ps) )
      WorldUpReferenceFramePM::SetToWorldFallTransition(&pm->refFrame, pm);
    if ( pm->refFrame.m_axisAdjusted )
    {
      v30 = DCONST_DVARFLT_worldUpTransitionNormalCompare;
      if ( !DCONST_DVARFLT_worldUpTransitionNormalCompare && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldUpTransitionNormalCompare") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      if ( !VecNCompareCustomEpsilon(pm->refFrame.m_axis.m[2].v, WorldUpReferenceFrame::m_defaultUp.v, v30->current.value, 3) )
      {
        *outNormal = WorldUpReferenceFrame::m_defaultUp;
        return 1;
      }
      if ( !BG_IsInAir(ps, 0) )
      {
        WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles(&pm->refFrame, pm->ps, pm->m_bgHandler, &WorldUpReferenceFrame::m_defaultUp);
        *(_QWORD *)ps->worldUpAngles.v = 0i64;
        ps->worldUpAngles.v[2] = 0.0;
      }
    }
    WorldUpReferenceFramePM::ClearAllTransitions(&pm->refFrame, pm);
    return 0;
  }
  if ( !outHadValidTriggerData )
  {
    if ( WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 288, ASSERT_TYPE_ASSERT, "(WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT == 1)", (const char *)&queryFormat, "WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT == 1") )
      __debugbreak();
    if ( !WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 290, ASSERT_TYPE_ASSERT, "(WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT > 0)", (const char *)&queryFormat, "WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT > 0") )
      __debugbreak();
    v8 = WORLD_UP_MP_GROUND_SOLVER_RAY_START_SCALE * ps->viewHeightCurrent;
    v9 = 0.0;
    if ( (int)(WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT - 1) > 0 )
      v9 = 360.0 / (float)(int)(WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT - 1);
    v10 = 0;
    for ( i = 0; i < WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT; ++i )
    {
      LODWORD(vec.v[2]) = LODWORD(WORLD_UP_MP_GROUND_SOLVER_RAY_LENGTH) ^ _xmm;
      vec.v[0] = 0.0;
      vec.v[1] = 0.0;
      if ( i )
      {
        v12 = (float)i;
        angles.v[0] = WORLD_UP_MP_GROUND_SOLVER_RAY_CONE_ANGLE;
        angles.v[1] = v12 * v9;
        angles.v[2] = 0.0;
        AnglesToAxis(&angles, &axis);
        v13 = vec.v[0];
        vec.v[0] = (float)((float)(vec.v[1] * axis.m[1].v[0]) + (float)(vec.v[0] * axis.m[0].v[0])) + (float)(vec.v[2] * axis.m[2].v[0]);
        v14 = (float)((float)(vec.v[1] * axis.m[1].v[1]) + (float)(v13 * axis.m[0].v[1])) + (float)(vec.v[2] * axis.m[2].v[1]);
        vec.v[2] = (float)((float)(vec.v[1] * axis.m[1].v[2]) + (float)(v13 * axis.m[0].v[2])) + (float)(vec.v[2] * axis.m[2].v[2]);
        vec.v[1] = v14;
      }
      WorldUpReferenceFrame::ApplyReferenceFrameToVector(&pm->refFrame, &vec);
      v15 = ps->origin.v[1];
      start.v[0] = ps->origin.v[0];
      v16 = ps->origin.v[2];
      start.v[1] = v15;
      start.v[2] = v16;
      WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, v8, &start);
      m_trace = pm->m_trace;
      contentMask = pm->tracemask;
      passEntityNum = ps->clientNum;
      end.v[0] = start.v[0] + vec.v[0];
      end.v[2] = start.v[2] + vec.v[2];
      end.v[1] = start.v[1] + vec.v[1];
      BgTrace::LegacyTrace(m_trace, pm, &results, &start, &end, &bounds_origin, passEntityNum, contentMask);
      if ( results.fraction < 1.0 )
      {
        normal = results.normal;
        WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &normal);
        if ( normal.v[2] > WORLD_UP_MP_GROUND_SOLVER_RAY_WALL_NORMAL )
        {
          if ( v10 )
          {
            v19 = results.normal.v[1] + outNormal->v[1];
            outNormal->v[0] = results.normal.v[0] + outNormal->v[0];
            outNormal->v[2] = results.normal.v[2] + outNormal->v[2];
            outNormal->v[1] = v19;
          }
          else
          {
            v18 = results.normal.v[1];
            outNormal->v[0] = results.normal.v[0];
            outNormal->v[2] = results.normal.v[2];
            outNormal->v[1] = v18;
          }
          ++v10;
        }
      }
    }
    v20 = outNormal->v[2];
    v21 = LODWORD(outNormal->v[1]);
    v22 = v21;
    *(float *)&v22 = fsqrt((float)((float)(*(float *)&v21 * *(float *)&v21) + (float)(outNormal->v[0] * outNormal->v[0])) + (float)(v20 * v20));
    _XMM3 = v22;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm10, xmm0
    }
    outNormal->v[0] = outNormal->v[0] * (float)(1.0 / *(float *)&_XMM0);
    outNormal->v[2] = v20 * (float)(1.0 / *(float *)&_XMM0);
    outNormal->v[1] = *(float *)&v21 * (float)(1.0 / *(float *)&_XMM0);
    if ( !v10 )
    {
      v26 = ps->origin.v[1];
      start.v[0] = ps->origin.v[0];
      start.v[2] = ps->origin.v[2];
      start.v[1] = v26;
      WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, v8, &start);
      v27 = *(_QWORD *)ps->origin.v;
      normal.v[1] = *((float *)&v27 + 1);
      normal.v[0] = *(float *)&v27;
      normal.v[2] = ps->origin.v[2];
      WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, COERCE_FLOAT(LODWORD(ARBITRARY_UP_MP_GROUND_TRACE_HEIGHT) ^ _xmm), &normal);
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &normal, &bounds_origin, ps->clientNum, pm->tracemask);
      if ( results.fraction < 1.0 )
      {
        v28 = results.normal.v[1];
        outNormal->v[0] = results.normal.v[0];
        outNormal->v[2] = results.normal.v[2];
        outNormal->v[1] = v28;
      }
    }
  }
  return 1;
}

/*
==============
WorldUpMp_GetCustomSlideMoveGravityDir
==============
*/
char WorldUpMp_GetCustomSlideMoveGravityDir(const pmove_t *pm, vec3_t *outGravityDir)
{
  playerState_s *ps; 
  __int64 worldUpTransitionTarget; 
  float v6; 
  float v7; 
  float v8; 
  vec3_t angles; 
  char v11[16]; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 641, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( WorldUpMp_IsLockedTransitionActive(ps) )
  {
    worldUpTransitionTarget = (unsigned int)ps->worldUpTransitionTarget;
    if ( (_DWORD)worldUpTransitionTarget && (_DWORD)worldUpTransitionTarget != 2047 && pm->GetWorldUpParentOrientation((pmove_t *)pm, worldUpTransitionTarget, (vec3_t *)v11, &angles) )
    {
      AngleVectors(&angles, outGravityDir, NULL, NULL);
      v6 = outGravityDir->v[1];
      outGravityDir->v[0] = COERCE_FLOAT(LODWORD(outGravityDir->v[0]) ^ _xmm);
      LODWORD(v7) = LODWORD(v6) ^ _xmm;
      v8 = outGravityDir->v[2];
      outGravityDir->v[1] = v7;
      outGravityDir->v[2] = COERCE_FLOAT(LODWORD(v8) ^ _xmm);
      return 1;
    }
  }
  else
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 633, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x36u) )
    {
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 44, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( ps->worldUpTransitionTarget == 2046 )
      {
        *outGravityDir = WorldUpReferenceFrame::m_defaultUp;
        return 1;
      }
    }
  }
  return 0;
}

/*
==============
WorldUpMp_GetWorldUpTriggerData
==============
*/
char WorldUpMp_GetWorldUpTriggerData(pmove_t *pm, vec3_t *outWorldUpDir, bool *outHadValidTriggerData)
{
  __int128 v3; 
  playerState_s *ps; 
  const BgHandler *m_bgHandler; 
  Physics_WorldId v9; 
  HavokPhysics_CollisionQueryResult *AllResult; 
  const BgHandler *v11; 
  playerState_s *v12; 
  int v13; 
  BgWeaponMap *weaponMap; 
  unsigned int NumHits; 
  int ClosestPointHitRef; 
  int EntityNum; 
  unsigned __int16 v18; 
  float v20; 
  float v21; 
  float v22; 
  playerState_s *v23; 
  playerState_s *v24; 
  __int64 v25; 
  __int64 v26; 
  Physics_QueryPointExtendedData extendedData; 
  vec3_t outOrigin; 
  vec3_t angles; 
  char v30[16]; 
  __int128 v31; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 148, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !outHadValidTriggerData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 149, ASSERT_TYPE_ASSERT, "(outHadValidTriggerData)", (const char *)&queryFormat, "outHadValidTriggerData") )
    __debugbreak();
  *outHadValidTriggerData = 0;
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 44, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->worldUpTransitionTarget == 2046 )
    return 0;
  m_bgHandler = pm->m_bgHandler;
  v31 = v3;
  v9 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
  AllResult = PhysicsQuery_GetAllResult(v9);
  if ( !AllResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 161, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(AllResult, 1);
  v11 = pm->m_bgHandler;
  v12 = pm->ps;
  v13 = 0;
  weaponMap = pm->weaponMap;
  extendedData.collisionBuffer = 0.0;
  extendedData.ignoreBodies = NULL;
  extendedData.phaseSelection = All;
  extendedData.simplify = 0;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.contents = 1078198280;
  BG_GetPlayerEyePosition(weaponMap, v12, &outOrigin, v11);
  Physics_QueryPoint(v9, &outOrigin, 0.0, &extendedData, AllResult);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(AllResult);
  if ( !NumHits )
    return 0;
  while ( 1 )
  {
    ClosestPointHitRef = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(AllResult, v13);
    EntityNum = Physics_GetEntityNum(ClosestPointHitRef);
    v18 = EntityNum;
    if ( (EntityNum < 0 || (unsigned int)EntityNum > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)EntityNum, "signed", EntityNum) )
      __debugbreak();
    if ( v18 >= 0x800u )
    {
      LODWORD(v26) = 2048;
      LODWORD(v25) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 179, ASSERT_TYPE_ASSERT, "(unsigned)( triggerEntNum ) < (unsigned)( ( 2048 ) )", "triggerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    if ( pm->IsWorldUpVolume(pm, v18) )
      break;
    if ( ++v13 >= NumHits )
      return 0;
  }
  if ( pm->GetWorldUpParentOrientation(pm, v18, (vec3_t *)v30, &angles) )
  {
    AngleVectors(&angles, outWorldUpDir, NULL, NULL);
    v20 = outWorldUpDir->v[1];
    outWorldUpDir->v[0] = COERCE_FLOAT(LODWORD(outWorldUpDir->v[0]) ^ _xmm);
    LODWORD(v21) = LODWORD(v20) ^ _xmm;
    v22 = outWorldUpDir->v[2];
    outWorldUpDir->v[1] = v21;
    outWorldUpDir->v[2] = COERCE_FLOAT(LODWORD(v22) ^ _xmm);
    *outHadValidTriggerData = 1;
  }
  v23 = pm->ps;
  if ( v23->worldUpTransitionTarget == v18 )
    return 1;
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 44, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v23->worldUpTransitionTarget == 2046 )
    return 1;
  pm->ps->worldUpTransitionTarget = v18;
  pm->ps->worldUpAngularVelocity = 0;
  v24 = pm->ps;
  if ( !*outHadValidTriggerData )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&v24->otherFlags, ACTIVE, 0x36u);
    return 1;
  }
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&v24->otherFlags, ACTIVE, 0x36u);
  return 1;
}

/*
==============
WorldUpMp_IsLockedTransitionActive
==============
*/
bool WorldUpMp_IsLockedTransitionActive(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 625, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x36u) )
    return 0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 44, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->worldUpTransitionTarget != 2046;
}

/*
==============
WorldUpMp_IsUnlockedTransitionActive
==============
*/
bool WorldUpMp_IsUnlockedTransitionActive(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 633, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x36u) )
    return 0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 44, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->worldUpTransitionTarget == 2046;
}

/*
==============
WorldUpMp_IsWorldTransitionActive
==============
*/
bool WorldUpMp_IsWorldTransitionActive(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 44, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->worldUpTransitionTarget == 2046;
}

/*
==============
WorldUpMp_UpdateArbitraryUpForGroundUpdate
==============
*/
void WorldUpMp_UpdateArbitraryUpForGroundUpdate(pmove_t *pm, const pml_t *pml, const trace_t *trace)
{
  playerState_s *ps; 
  int pm_type; 
  bool v8; 
  float v9; 
  float v10; 
  float v11; 
  double v12; 
  float v13; 
  double Float_Internal_DebugName; 
  float v15; 
  float v16; 
  float v17; 
  double v18; 
  float v19; 
  float v20; 
  double v21; 
  double UpContribution; 
  float v23; 
  bool outInTrigger; 
  vec3_t outNormal; 
  vec3_t angles; 
  vec3_t end; 
  vec3_t vec; 
  vec3_t outAngles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> v32; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 470, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 471, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 472, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  ps = pm->ps;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END|0x80) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&ps->otherFlags, DEAD|PRONE|0x20) )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    pm_type = ps->pm_type;
    if ( pm_type != 1 && pm_type != 8 && (ps->linkFlags.m_flags[0] & 4) == 0 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 1u) && !WorldUpReferenceFrame::HasValidWorldUpEnt(ps) )
    {
      v8 = 0;
      outInTrigger = 0;
      outNormal = WorldUpReferenceFrame::m_defaultUp;
      if ( !WorldUpMp_IsLockedTransitionActive(ps) )
      {
        if ( !WorldUpMp_CalculateNormalForGroundUpdate(pm, &outNormal, &outInTrigger) )
          return;
        v8 = outInTrigger;
      }
      WorldUpReferenceFrame::GetAngles(&pm->refFrame, &outAngles);
      v9 = ps->origin.v[0];
      v10 = ps->origin.v[1];
      v11 = ps->origin.v[2];
      if ( !WorldUpMp_UpdateTransition(pm, pml, &outNormal) )
      {
        v12 = BgSpaceship::AngleBetweenVectors(&pm->refFrame.m_axis.m[2], &outNormal);
        v13 = *(float *)&v12;
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_worldUpTransitionNormalCompareFastBlend, "worldUpTransitionNormalCompareFastBlend");
        v15 = (float)(*(float *)&Float_Internal_DebugName > v13);
        if ( BG_IsInAir(ps, 0) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) || !v8 )
        {
          if ( v15 == 0.0 )
          {
            WorldUpMp_UpdateViewRotation(pm, pml, &outNormal);
          }
          else
          {
            v17 = FLOAT_1_0;
            if ( v13 > 0.001 )
            {
              v18 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_worldUpTransitionFastBlendSpeed, "worldUpTransitionFastBlendSpeed");
              v19 = (float)(*(float *)&v18 * pml->frametime) / v13;
              I_fclamp(v19, 0.0, 1.0);
              v17 = v19;
            }
            WorldUpMp_UpdateViewRotationLerp(pm, pml, &outNormal, v17);
          }
          v20 = (float)((float)(outNormal.v[1] * pm->refFrame.m_axis.m[2].v[1]) + (float)(outNormal.v[0] * pm->refFrame.m_axis.m[2].v[0])) + (float)(outNormal.v[2] * pm->refFrame.m_axis.m[2].v[2]);
          v21 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_worldUpTransitionVelocityNormalCompare, "worldUpTransitionVelocityNormalCompare");
          if ( v20 < *(float *)&v21 )
          {
            UpContribution = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &ps->velocity);
            WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &ps->velocity);
            ps->velocity.v[2] = COERCE_FLOAT(LODWORD(UpContribution) & _xmm ^ _xmm);
          }
        }
        else
        {
          if ( v15 != 0.0 )
          {
            AnglesToAxis(&ps->viewangles, &axis);
            WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&pm->refFrame, &axis);
            BgSpaceshipPlayer::BuildAxisFromForward(axis.m, &pm->refFrame.m_axis, &outAxis);
            GenerateAxisFromUpVector(&pm->refFrame.m_axis.m[2], &outAxis, &v32);
            AxisToAngles(&v32, &angles);
            WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles(&pm->refFrame, ps, pm->m_bgHandler, &angles);
          }
          v16 = WORLD_UP_MP_GROUND_SOLVER_BLEND_STRENGTH * pml->frametime;
          I_fclamp(v16, 0.0, 1.0);
          WorldUpMp_UpdateViewRotationLerp(pm, pml, &outNormal, v16);
        }
      }
      vec = ps->origin;
      WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, WORLD_UP_MP_GROUND_SOLVER_TRACE_UP, &vec);
      end = ps->origin;
      WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, WORLD_UP_MP_GROUND_SOLVER_TRACE_DOWN, &end);
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &vec, &end, pm->bounds, ps->clientNum, pm->tracemask);
      if ( results.startsolid )
      {
        if ( PM_ResolvePlayerPenetration(pm, &ps->origin, NULL, pm->bounds, NULL, pm->tracemask, 0, &angles, NULL) )
        {
          v23 = angles.v[1];
          ps->origin.v[0] = angles.v[0];
          ps->origin.v[2] = angles.v[2];
          ps->origin.v[1] = v23;
        }
        else
        {
          WorldUpReferenceFrame::SetAngles(&pm->refFrame, ps, pm->m_bgHandler, &outAngles);
          ps->origin.v[0] = v9;
          ps->origin.v[1] = v10;
          ps->origin.v[2] = v11;
        }
      }
    }
  }
}

/*
==============
WorldUpMp_UpdateTransition
==============
*/
char WorldUpMp_UpdateTransition(pmove_t *pm, const pml_t *pml, vec3_t *outNormal)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  playerState_s *ps; 
  const dvar_t *v14; 
  float v15; 
  double v16; 
  float v17; 
  float v18; 
  double EyePosition; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  int v24; 
  float v25; 
  const dvar_t *v26; 
  float v27; 
  const dvar_t *v28; 
  vec3_t outEye; 
  int v31[4]; 
  vec3_t angles; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 
  __int128 v38; 
  __int128 v39; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 386, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 387, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  ps = pm->ps;
  if ( !WorldUpMp_IsLockedTransitionActive(ps) || !pm->GetWorldUpParentOrientation(pm, ps->worldUpTransitionTarget, (vec3_t *)v31, &angles) )
    return 0;
  v14 = DCONST_DVARFLT_worldUpTransitionFriction;
  v39 = v3;
  v38 = v4;
  v37 = v5;
  v36 = v6;
  v35 = v7;
  v34 = v8;
  v33 = v9;
  if ( !DCONST_DVARFLT_worldUpTransitionFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldUpTransitionFriction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v15 = FLOAT_1_0;
  v16 = I_fclamp(v14->current.value * pml->frametime, 0.0, 1.0);
  ps->velocity.v[0] = (float)((float)(0.0 - ps->velocity.v[0]) * *(float *)&v16) + ps->velocity.v[0];
  ps->velocity.v[1] = (float)((float)(0.0 - ps->velocity.v[1]) * *(float *)&v16) + ps->velocity.v[1];
  ps->velocity.v[2] = (float)((float)(0.0 - ps->velocity.v[2]) * *(float *)&v16) + ps->velocity.v[2];
  AngleVectors(&angles, outNormal, NULL, NULL);
  v17 = outNormal->v[1];
  outNormal->v[0] = COERCE_FLOAT(LODWORD(outNormal->v[0]) ^ _xmm);
  LODWORD(v16) = LODWORD(v17) ^ _xmm;
  v18 = outNormal->v[2];
  outNormal->v[1] = *(float *)&v16;
  outNormal->v[2] = COERCE_FLOAT(LODWORD(v18) ^ _xmm);
  WorldUpMp_UpdateViewRotation(pm, pml, outNormal);
  EyePosition = WorldUpReferenceFrame::GetEyePosition(&pm->refFrame, ps, pm->weaponMap, pm->m_bgHandler, &outEye);
  v20 = (float)(*(float *)&EyePosition * outNormal->v[0]) + *(float *)v31;
  v21 = (float)(*(float *)&EyePosition * outNormal->v[1]) + *(float *)&v31[1];
  v22 = (float)(*(float *)&EyePosition * outNormal->v[2]) + *(float *)&v31[2];
  v23 = outEye.v[0];
  v24 = LODWORD(EyePosition);
  v25 = fsqrt((float)((float)((float)(v21 - outEye.v[1]) * (float)(v21 - outEye.v[1])) + (float)((float)(v20 - outEye.v[0]) * (float)(v20 - outEye.v[0]))) + (float)((float)(v22 - outEye.v[2]) * (float)(v22 - outEye.v[2])));
  if ( v25 > 0.001 )
  {
    v26 = DCONST_DVARFLT_worldUpTransitionPosVelocity;
    if ( !DCONST_DVARFLT_worldUpTransitionPosVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldUpTransitionPosVelocity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = (float)(v26->current.value * pml->frametime) / v25;
    I_fclamp(v27, 0.0, 1.0);
    v23 = outEye.v[0];
    v15 = v27;
  }
  ps->origin.v[0] = (float)((float)(v20 - v23) * v15) + v23;
  ps->origin.v[1] = (float)((float)(v21 - outEye.v[1]) * v15) + outEye.v[1];
  ps->origin.v[2] = (float)((float)(v22 - outEye.v[2]) * v15) + outEye.v[2];
  WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, COERCE_FLOAT(v24 ^ _xmm), &ps->origin);
  v28 = DCONST_DVARFLT_worldUpTransitionTriggerNormalCompare;
  if ( !DCONST_DVARFLT_worldUpTransitionTriggerNormalCompare && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldUpTransitionTriggerNormalCompare") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  if ( VecNCompareCustomEpsilon(pm->refFrame.m_axis.m[2].v, outNormal->v, v28->current.value, 3) )
  {
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(&ps->otherFlags, FOG_SCALE|PRONE|0x20);
    ps->worldUpAngularVelocity = 0;
    return 0;
  }
  return 1;
}

/*
==============
WorldUpMp_UpdateViewRotation
==============
*/
void WorldUpMp_UpdateViewRotation(pmove_t *pm, const pml_t *pml, const vec3_t *targetNormal)
{
  playerState_s *ps; 
  float v7; 
  double v8; 
  float frametime; 
  const dvar_t *v10; 
  float v11; 
  float value; 
  const dvar_t *v13; 
  double v14; 
  float velocity; 
  float currentPos; 
  DampedSpring v17; 
  vec3_t newViewAngles; 
  vec3_t angles; 
  vec3_t outAxisAngle; 
  vec3_t outAngles; 
  vec3_t newWorldAngles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> end; 
  tmat33_t<vec3_t> outDeltaAxis; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> out; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 78, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 79, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  ps = pm->ps;
  if ( !pm->refFrame.m_axisAdjusted && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&ps->otherFlags, DEAD|PRONE|0x20) )
  {
    v7 = ps->viewangles.v[1];
    angles.v[0] = ps->viewangles.v[0];
    angles.v[2] = ps->viewangles.v[2];
    angles.v[1] = v7;
    WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&pm->refFrame, &angles);
    WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles(&pm->refFrame, pm->ps, pm->m_bgHandler, &angles);
    pm->m_flags |= 8u;
  }
  newViewAngles = ps->viewangles;
  WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&pm->refFrame, &newViewAngles);
  AnglesToAxis(&newViewAngles, &axis);
  BgSpaceshipPlayer::BuildAxisFromForward(axis.m, &pm->refFrame.m_axis, &outAxis);
  GenerateAxisFromUpVector(targetNormal, &outAxis, &end);
  BgSpaceship::DeltaAxis(&pm->refFrame.m_axis, &end, &outDeltaAxis);
  v8 = BgSpaceship::AxisToAxisAngle(&outDeltaAxis, &outAxisAngle);
  frametime = pml->frametime;
  v10 = DCONST_DVARFLT_worldUpTransitionSpringOscillation;
  currentPos = *(float *)&v8;
  v11 = *(float *)&v8;
  if ( !DCONST_DVARFLT_worldUpTransitionSpringOscillation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldUpTransitionSpringOscillation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  value = v10->current.value;
  v13 = DCONST_DVARFLT_worldUpTransitionSpringStrength;
  if ( !DCONST_DVARFLT_worldUpTransitionSpringStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldUpTransitionSpringStrength") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  DampedSpring::DampedSpring(&v17, v13->current.value, value, frametime);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1163, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v14 = MSG_UnpackSignedFloat(ps->worldUpAngularVelocity, 500.0, 0xCu);
  velocity = *(float *)&v14;
  DampedSpring::Update1DAngleSpring(&v17, &currentPos, 0.0, &velocity);
  ps->worldUpAngularVelocity = MSG_PackSignedFloat(velocity, 500.0, 0xCu);
  BgSpaceship::AxisAngleToAngles(v11 - currentPos, &outAxisAngle, &outAngles);
  AnglesToAxis(&outAngles, &in2);
  MatrixMultiply(&pm->refFrame.m_axis, &in2, &out);
  AxisToAngles(&out, &newWorldAngles);
  WorldUpReferenceFrame::SetAnglesAndViewAngles(&pm->refFrame, ps, pm->m_bgHandler, &newWorldAngles, &newViewAngles);
}

/*
==============
WorldUpMp_UpdateViewRotationLerp
==============
*/
void WorldUpMp_UpdateViewRotationLerp(pmove_t *pm, const pml_t *pml, const vec3_t *targetNormal, const float lerp)
{
  vec3_t angles; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> axis; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 449, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 450, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  GenerateAxisFromUpVector(targetNormal, &pm->refFrame.m_axis, &outAxis);
  BgSpaceship::AxisLerp(&pm->refFrame.m_axis, &outAxis, lerp, &axis);
  AxisToAngles(&axis, &angles);
  WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles(&pm->refFrame, pm->ps, pm->m_bgHandler, &angles);
}

