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
  bool WorldUpTriggerData; 
  int v28; 
  unsigned int v29; 
  BgTrace *m_trace; 
  char v66; 
  char v71; 
  int passEntityNum; 
  int contentMask; 
  bool outHadValidTriggerData; 
  vec3_t vec; 
  vec3_t start; 
  vec3_t v126; 
  vec3_t angles; 
  vec3_t end; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 

  _RDI = outNormal;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 225, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !outInTrigger && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 226, ASSERT_TYPE_ASSERT, "(outInTrigger)", (const char *)&queryFormat, "outInTrigger") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr cs:?m_defaultUp@WorldUpReferenceFrame@@2Tvec3_t@@B; vec3_t const WorldUpReferenceFrame::m_defaultUp }
  _R14 = pm->ps;
  __asm
  {
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm1, dword ptr cs:?m_defaultUp@WorldUpReferenceFrame@@2Tvec3_t@@B+4; vec3_t const WorldUpReferenceFrame::m_defaultUp
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  xmm0, dword ptr cs:?m_defaultUp@WorldUpReferenceFrame@@2Tvec3_t@@B+8; vec3_t const WorldUpReferenceFrame::m_defaultUp
  }
  outHadValidTriggerData = 0;
  __asm { vmovss  dword ptr [rdi+8], xmm0 }
  WorldUpTriggerData = WorldUpMp_GetWorldUpTriggerData(pm, _RDI, &outHadValidTriggerData);
  *outInTrigger = WorldUpTriggerData;
  if ( !WorldUpTriggerData )
  {
    if ( _R14->worldUpTransitionTarget && !WorldUpMp_IsWorldTransitionActive(pm->ps) )
      WorldUpReferenceFramePM::SetToWorldFallTransition(&pm->refFrame, pm);
    if ( pm->refFrame.m_axisAdjusted )
    {
      _RBX = DCONST_DVARFLT_worldUpTransitionNormalCompare;
      if ( !DCONST_DVARFLT_worldUpTransitionNormalCompare && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldUpTransitionNormalCompare") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm2, dword ptr [rbx+28h]; epsilon }
      if ( !VecNCompareCustomEpsilon(pm->refFrame.m_axis.m[2].v, WorldUpReferenceFrame::m_defaultUp.v, *(float *)&_XMM2, 3) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr cs:?m_defaultUp@WorldUpReferenceFrame@@2Tvec3_t@@B; vec3_t const WorldUpReferenceFrame::m_defaultUp
          vmovss  dword ptr [rdi], xmm0
          vmovss  xmm1, dword ptr cs:?m_defaultUp@WorldUpReferenceFrame@@2Tvec3_t@@B+4; vec3_t const WorldUpReferenceFrame::m_defaultUp
          vmovss  dword ptr [rdi+4], xmm1
          vmovss  xmm0, dword ptr cs:?m_defaultUp@WorldUpReferenceFrame@@2Tvec3_t@@B+8; vec3_t const WorldUpReferenceFrame::m_defaultUp
          vmovss  dword ptr [rdi+8], xmm0
        }
        return 1;
      }
      if ( !BG_IsInAir(_R14, 0) )
      {
        WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles(&pm->refFrame, pm->ps, pm->m_bgHandler, &WorldUpReferenceFrame::m_defaultUp);
        *(_QWORD *)_R14->worldUpAngles.v = 0i64;
        _R14->worldUpAngles.v[2] = 0.0;
      }
    }
    WorldUpReferenceFramePM::ClearAllTransitions(&pm->refFrame, pm);
    return 0;
  }
  if ( !outHadValidTriggerData )
  {
    __asm
    {
      vmovaps [rsp+1D0h+var_40], xmm6
      vmovaps [rsp+1D0h+var_60], xmm8
      vmovaps [rsp+1D0h+var_70], xmm9
      vmovaps [rsp+1D0h+var_80], xmm10
      vmovaps [rsp+1D0h+var_90], xmm11
      vmovaps [rsp+1D0h+var_A0], xmm12
    }
    if ( WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 288, ASSERT_TYPE_ASSERT, "(WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT == 1)", (const char *)&queryFormat, "WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT == 1") )
      __debugbreak();
    if ( !WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 290, ASSERT_TYPE_ASSERT, "(WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT > 0)", (const char *)&queryFormat, "WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT > 0") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, cs:WORLD_UP_MP_GROUND_SOLVER_RAY_START_SCALE
      vmulss  xmm11, xmm0, dword ptr [r14+1E8h]
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm12, xmm12, xmm12
    }
    if ( (int)(WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT - 1) > 0 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@43b40000
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vdivss  xmm12, xmm0, xmm1
      }
    }
    __asm
    {
      vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm10, cs:__real@3f800000
    }
    v28 = 0;
    v29 = 0;
    if ( WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT )
    {
      __asm { vmovaps [rsp+1D0h+var_50], xmm7 }
      do
      {
        __asm
        {
          vmovss  xmm0, cs:WORLD_UP_MP_GROUND_SOLVER_RAY_LENGTH
          vxorps  xmm1, xmm0, xmm9
          vmovss  dword ptr [rsp+1D0h+vec+8], xmm1
          vmovss  dword ptr [rsp+1D0h+vec], xmm8
          vmovss  dword ptr [rsp+1D0h+vec+4], xmm8
        }
        if ( v29 )
        {
          __asm
          {
            vmovss  xmm0, cs:WORLD_UP_MP_GROUND_SOLVER_RAY_CONE_ANGLE
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, rax
            vmovss  dword ptr [rsp+1D0h+angles], xmm0
            vmulss  xmm0, xmm1, xmm12
            vmovss  dword ptr [rsp+1D0h+angles+4], xmm0
            vmovss  dword ptr [rbp+0D0h+angles+8], xmm8
          }
          AnglesToAxis(&angles, &axis);
          __asm
          {
            vmovss  xmm7, dword ptr [rsp+1D0h+vec]
            vmovss  xmm6, dword ptr [rsp+1D0h+vec+4]
            vmovss  xmm5, dword ptr [rsp+1D0h+vec+8]
            vmulss  xmm3, xmm6, dword ptr [rbp+0D0h+axis+0Ch]
            vmulss  xmm2, xmm7, dword ptr [rbp+0D0h+axis]
            vmulss  xmm1, xmm5, dword ptr [rbp+0D0h+axis+18h]
            vmulss  xmm0, xmm5, dword ptr [rbp+0D0h+axis+20h]
            vaddss  xmm4, xmm3, xmm2
            vmulss  xmm3, xmm6, dword ptr [rbp+0D0h+axis+10h]
            vaddss  xmm2, xmm4, xmm1
            vmulss  xmm1, xmm5, dword ptr [rbp+0D0h+axis+1Ch]
            vmovss  dword ptr [rsp+1D0h+vec], xmm2
            vmulss  xmm2, xmm7, dword ptr [rbp+0D0h+axis+4]
            vaddss  xmm4, xmm3, xmm2
            vmulss  xmm3, xmm6, dword ptr [rbp+0D0h+axis+14h]
            vaddss  xmm2, xmm4, xmm1
            vmulss  xmm1, xmm7, dword ptr [rbp+0D0h+axis+8]
            vaddss  xmm4, xmm3, xmm1
            vaddss  xmm1, xmm4, xmm0
            vmovss  dword ptr [rsp+1D0h+vec+8], xmm1
            vmovss  dword ptr [rsp+1D0h+vec+4], xmm2
          }
        }
        WorldUpReferenceFrame::ApplyReferenceFrameToVector(&pm->refFrame, &vec);
        __asm
        {
          vmovss  xmm0, dword ptr [r14+30h]
          vmovss  xmm1, dword ptr [r14+34h]
          vmovss  dword ptr [rsp+1D0h+start], xmm0
          vmovss  xmm0, dword ptr [r14+38h]
          vmovss  dword ptr [rsp+1D0h+start+4], xmm1
          vmovaps xmm1, xmm11; height
          vmovss  dword ptr [rsp+1D0h+start+8], xmm0
        }
        WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &start);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1D0h+start]
          vaddss  xmm1, xmm0, dword ptr [rsp+1D0h+vec]
          vmovss  xmm2, dword ptr [rsp+1D0h+start+4]
          vaddss  xmm0, xmm2, dword ptr [rsp+1D0h+vec+4]
        }
        m_trace = pm->m_trace;
        contentMask = pm->tracemask;
        passEntityNum = _R14->clientNum;
        __asm
        {
          vmovss  dword ptr [rbp+0D0h+end], xmm1
          vmovss  xmm1, dword ptr [rsp+1D0h+start+8]
          vaddss  xmm2, xmm1, dword ptr [rsp+1D0h+vec+8]
          vmovss  dword ptr [rbp+0D0h+end+8], xmm2
          vmovss  dword ptr [rbp+0D0h+end+4], xmm0
        }
        BgTrace::LegacyTrace(m_trace, pm, &results, &start, &end, &bounds_origin, passEntityNum, contentMask);
        __asm
        {
          vmovss  xmm0, [rbp+0D0h+results.fraction]
          vcomiss xmm0, xmm10
        }
        if ( v66 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+0D0h+results.normal]
            vmovss  xmm1, dword ptr [rbp+0D0h+results.normal+4]
            vmovss  dword ptr [rsp+1D0h+var_168], xmm0
            vmovss  xmm0, dword ptr [rbp+0D0h+results.normal+8]
            vmovss  dword ptr [rsp+1D0h+var_168+8], xmm0
            vmovss  dword ptr [rsp+1D0h+var_168+4], xmm1
          }
          WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &v126);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1D0h+var_168+8]
            vcomiss xmm0, cs:WORLD_UP_MP_GROUND_SOLVER_RAY_WALL_NORMAL
          }
          if ( !(v66 | v71) )
          {
            __asm { vmovss  xmm0, dword ptr [rbp+0D0h+results.normal] }
            if ( v28 )
            {
              __asm
              {
                vaddss  xmm1, xmm0, dword ptr [rdi]
                vmovss  xmm2, dword ptr [rbp+0D0h+results.normal+4]
                vaddss  xmm0, xmm2, dword ptr [rdi+4]
                vmovss  dword ptr [rdi], xmm1
                vmovss  xmm1, dword ptr [rbp+0D0h+results.normal+8]
                vaddss  xmm2, xmm1, dword ptr [rdi+8]
                vmovss  dword ptr [rdi+8], xmm2
                vmovss  dword ptr [rdi+4], xmm0
              }
            }
            else
            {
              __asm
              {
                vmovss  xmm1, dword ptr [rbp+0D0h+results.normal+4]
                vmovss  dword ptr [rdi], xmm0
                vmovss  xmm0, dword ptr [rbp+0D0h+results.normal+8]
                vmovss  dword ptr [rdi+8], xmm0
                vmovss  dword ptr [rdi+4], xmm1
              }
            }
            ++v28;
          }
        }
        ++v29;
      }
      while ( v29 < WORLD_UP_MP_GROUND_SOLVER_RAY_COUNT );
      __asm { vmovaps xmm7, [rsp+1D0h+var_50] }
    }
    __asm
    {
      vmovaps xmm12, [rsp+1D0h+var_A0]
      vmovaps xmm8, [rsp+1D0h+var_60]
      vmovss  xmm6, dword ptr [rdi+8]
      vmovss  xmm5, dword ptr [rdi+4]
      vmovss  xmm4, dword ptr [rdi]
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm10, xmm0
      vdivss  xmm2, xmm10, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rdi], xmm0
      vmulss  xmm0, xmm6, xmm2
      vmovaps xmm6, [rsp+1D0h+var_40]
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rdi+8], xmm0
      vmovss  dword ptr [rdi+4], xmm1
    }
    if ( !v28 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+30h]
        vmovss  xmm2, dword ptr [r14+34h]
        vmovss  dword ptr [rsp+1D0h+start], xmm0
        vmovss  xmm0, dword ptr [r14+38h]
        vmovaps xmm1, xmm11; height
        vmovss  dword ptr [rsp+1D0h+start+8], xmm0
        vmovss  dword ptr [rsp+1D0h+start+4], xmm2
      }
      WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &start);
      __asm
      {
        vmovss  xmm1, dword ptr [r14+34h]
        vmovss  xmm0, dword ptr [r14+30h]
        vmovss  dword ptr [rsp+1D0h+var_168+4], xmm1
        vmovss  xmm1, cs:ARBITRARY_UP_MP_GROUND_TRACE_HEIGHT
        vmovss  dword ptr [rsp+1D0h+var_168], xmm0
        vmovss  xmm0, dword ptr [r14+38h]
        vxorps  xmm1, xmm1, xmm9; height
        vmovss  dword ptr [rsp+1D0h+var_168+8], xmm0
      }
      WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &v126);
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &v126, &bounds_origin, _R14->clientNum, pm->tracemask);
      __asm
      {
        vmovss  xmm0, [rbp+0D0h+results.fraction]
        vcomiss xmm0, xmm10
      }
      if ( v66 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0D0h+results.normal]
          vmovss  xmm1, dword ptr [rbp+0D0h+results.normal+4]
          vmovss  dword ptr [rdi], xmm0
          vmovss  xmm0, dword ptr [rbp+0D0h+results.normal+8]
          vmovss  dword ptr [rdi+8], xmm0
          vmovss  dword ptr [rdi+4], xmm1
        }
      }
    }
    __asm
    {
      vmovaps xmm10, [rsp+1D0h+var_80]
      vmovaps xmm9, [rsp+1D0h+var_70]
      vmovaps xmm11, [rsp+1D0h+var_90]
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
  vec3_t angles; 
  char v18[16]; 

  _RDI = outGravityDir;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 641, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( WorldUpMp_IsLockedTransitionActive(ps) )
  {
    worldUpTransitionTarget = (unsigned int)ps->worldUpTransitionTarget;
    if ( (_DWORD)worldUpTransitionTarget && (_DWORD)worldUpTransitionTarget != 2047 && pm->GetWorldUpParentOrientation((pmove_t *)pm, worldUpTransitionTarget, (vec3_t *)v18, &angles) )
    {
      AngleVectors(&angles, _RDI, NULL, NULL);
      __asm
      {
        vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  xmm1, dword ptr [rdi+4]
        vmovss  xmm0, dword ptr [rdi]
        vxorps  xmm0, xmm0, xmm2
        vmovss  dword ptr [rdi], xmm0
        vxorps  xmm0, xmm1, xmm2
        vmovss  xmm1, dword ptr [rdi+8]
        vmovss  dword ptr [rdi+4], xmm0
        vxorps  xmm0, xmm1, xmm2
        vmovss  dword ptr [rdi+8], xmm0
      }
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
        __asm
        {
          vmovss  xmm0, dword ptr cs:?m_defaultUp@WorldUpReferenceFrame@@2Tvec3_t@@B; vec3_t const WorldUpReferenceFrame::m_defaultUp
          vmovss  dword ptr [rdi], xmm0
          vmovss  xmm1, dword ptr cs:?m_defaultUp@WorldUpReferenceFrame@@2Tvec3_t@@B+4; vec3_t const WorldUpReferenceFrame::m_defaultUp
          vmovss  dword ptr [rdi+4], xmm1
          vmovss  xmm0, dword ptr cs:?m_defaultUp@WorldUpReferenceFrame@@2Tvec3_t@@B+8; vec3_t const WorldUpReferenceFrame::m_defaultUp
          vmovss  dword ptr [rdi+8], xmm0
        }
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
  playerState_s *ps; 
  const BgHandler *m_bgHandler; 
  Physics_WorldId v10; 
  HavokPhysics_CollisionQueryResult *AllResult; 
  const BgHandler *v12; 
  playerState_s *v13; 
  int v14; 
  BgWeaponMap *weaponMap; 
  unsigned int NumHits; 
  unsigned int v20; 
  int ClosestPointHitRef; 
  int EntityNum; 
  unsigned __int16 v23; 
  playerState_s *v32; 
  playerState_s *v33; 
  __int64 v34; 
  __int64 v35; 
  Physics_QueryPointExtendedData extendedData; 
  vec3_t outOrigin; 
  vec3_t angles; 
  char v39[16]; 

  _R14 = outWorldUpDir;
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
  __asm { vmovaps [rsp+0F8h+var_48], xmm6 }
  v10 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
  AllResult = PhysicsQuery_GetAllResult(v10);
  if ( !AllResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 161, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(AllResult, 1);
  v12 = pm->m_bgHandler;
  v13 = pm->ps;
  v14 = 0;
  weaponMap = pm->weaponMap;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+0F8h+extendedData.collisionBuffer], xmm6
  }
  extendedData.ignoreBodies = NULL;
  extendedData.phaseSelection = All;
  extendedData.simplify = 0;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.contents = 1078198280;
  BG_GetPlayerEyePosition(weaponMap, v13, &outOrigin, v12);
  __asm { vxorps  xmm2, xmm2, xmm2; maxDistance }
  Physics_QueryPoint(v10, &outOrigin, *(float *)&_XMM2, &extendedData, AllResult);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(AllResult);
  __asm { vmovaps xmm6, [rsp+0F8h+var_48] }
  v20 = NumHits;
  if ( !NumHits )
    return 0;
  while ( 1 )
  {
    ClosestPointHitRef = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(AllResult, v14);
    EntityNum = Physics_GetEntityNum(ClosestPointHitRef);
    v23 = EntityNum;
    if ( (EntityNum < 0 || (unsigned int)EntityNum > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)EntityNum, "signed", EntityNum) )
      __debugbreak();
    if ( v23 >= 0x800u )
    {
      LODWORD(v35) = 2048;
      LODWORD(v34) = v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 179, ASSERT_TYPE_ASSERT, "(unsigned)( triggerEntNum ) < (unsigned)( ( 2048 ) )", "triggerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v34, v35) )
        __debugbreak();
    }
    if ( pm->IsWorldUpVolume(pm, v23) )
      break;
    if ( ++v14 >= v20 )
      return 0;
  }
  if ( pm->GetWorldUpParentOrientation(pm, v23, (vec3_t *)v39, &angles) )
  {
    AngleVectors(&angles, _R14, NULL, NULL);
    __asm
    {
      vmovss  xmm1, dword ptr [r14+4]
      vmovss  xmm0, dword ptr [r14]
      vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm0, xmm2
      vmovss  dword ptr [r14], xmm0
      vxorps  xmm0, xmm1, xmm2
      vmovss  xmm1, dword ptr [r14+8]
      vmovss  dword ptr [r14+4], xmm0
      vxorps  xmm0, xmm1, xmm2
      vmovss  dword ptr [r14+8], xmm0
    }
    *outHadValidTriggerData = 1;
  }
  v32 = pm->ps;
  if ( v32->worldUpTransitionTarget == v23 )
    return 1;
  if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 44, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v32->worldUpTransitionTarget == 2046 )
    return 1;
  pm->ps->worldUpTransitionTarget = v23;
  pm->ps->worldUpAngularVelocity = 0;
  v33 = pm->ps;
  if ( !*outHadValidTriggerData )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&v33->otherFlags, ACTIVE, 0x36u);
    return 1;
  }
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&v33->otherFlags, ACTIVE, 0x36u);
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
  int pm_type; 
  bool v17; 
  bool v24; 
  bool v25; 
  bool v26; 
  char v49; 
  bool outInTrigger; 
  vec3_t outNormal; 
  vec3_t angles; 
  vec3_t end; 
  vec3_t vec; 
  vec3_t outAngles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> v80; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 470, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 471, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 472, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END|0x80) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&_RDI->otherFlags, DEAD|PRONE|0x20) )
  {
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    pm_type = _RDI->pm_type;
    if ( pm_type != 1 && pm_type != 8 && (_RDI->linkFlags.m_flags[0] & 4) == 0 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, ACTIVE, 1u) && !WorldUpReferenceFrame::HasValidWorldUpEnt(_RDI) )
    {
      __asm { vmovsd  xmm0, qword ptr cs:?m_defaultUp@WorldUpReferenceFrame@@2Tvec3_t@@B; vec3_t const WorldUpReferenceFrame::m_defaultUp }
      v17 = 0;
      outInTrigger = 0;
      __asm { vmovsd  qword ptr [rsp+230h+outNormal], xmm0 }
      outNormal.v[2] = WorldUpReferenceFrame::m_defaultUp.v[2];
      if ( !WorldUpMp_IsLockedTransitionActive(_RDI) )
      {
        if ( !WorldUpMp_CalculateNormalForGroundUpdate(pm, &outNormal, &outInTrigger) )
          return;
        v17 = outInTrigger;
      }
      __asm
      {
        vmovaps [rsp+230h+var_80], xmm10
        vmovaps [rsp+230h+var_90], xmm11
        vmovaps [rsp+230h+var_A0], xmm12
      }
      WorldUpReferenceFrame::GetAngles(&pm->refFrame, &outAngles);
      __asm
      {
        vmovss  xmm10, dword ptr [rdi+30h]
        vmovss  xmm11, dword ptr [rdi+34h]
        vmovss  xmm12, dword ptr [rdi+38h]
      }
      if ( !WorldUpMp_UpdateTransition(pm, pml, &outNormal) )
      {
        __asm
        {
          vmovaps [rsp+230h+var_40], xmm6
          vmovaps [rsp+230h+var_60], xmm8
          vmovaps [rsp+230h+var_70], xmm9
        }
        *(double *)&_XMM0 = BgSpaceship::AngleBetweenVectors(&pm->refFrame.m_axis.m[2], &outNormal);
        __asm { vmovaps xmm9, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_worldUpTransitionNormalCompareFastBlend, "worldUpTransitionNormalCompareFastBlend");
        __asm
        {
          vcomiss xmm0, xmm9
          vxorps  xmm8, xmm8, xmm8
          vcvtsi2ss xmm8, xmm8, eax
        }
        v24 = BG_IsInAir(_RDI, 0);
        v25 = !v24;
        if ( v24 || (v26 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x13u), v25 = !v26, v26) || (v25 = !v17) )
        {
          __asm
          {
            vmovaps [rsp+230h+var_50], xmm7
            vxorps  xmm7, xmm7, xmm7
            vucomiss xmm8, xmm7
          }
          if ( v25 )
          {
            WorldUpMp_UpdateViewRotation(pm, pml, &outNormal);
          }
          else
          {
            __asm
            {
              vcomiss xmm9, cs:__real@3a83126f
              vmovss  xmm6, cs:__real@3f800000
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_worldUpTransitionFastBlendSpeed, "worldUpTransitionFastBlendSpeed");
            __asm
            {
              vmulss  xmm1, xmm0, dword ptr [rbx+24h]
              vdivss  xmm0, xmm1, xmm9; val
              vxorps  xmm1, xmm1, xmm1; min
              vmovaps xmm2, xmm6; max
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmovaps xmm6, xmm0
              vmovaps xmm3, xmm6; lerp
            }
            WorldUpMp_UpdateViewRotationLerp(pm, pml, &outNormal, *(const float *)&_XMM3);
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+230h+outNormal+4]
            vmulss  xmm3, xmm0, dword ptr [rsi+374h]
            vmovss  xmm1, dword ptr [rsp+230h+outNormal]
            vmulss  xmm2, xmm1, dword ptr [rsi+370h]
            vmovss  xmm0, dword ptr [rsp+230h+outNormal+8]
            vaddss  xmm4, xmm3, xmm2
            vmulss  xmm3, xmm0, dword ptr [rsi+378h]
            vaddss  xmm6, xmm4, xmm3
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_worldUpTransitionVelocityNormalCompare, "worldUpTransitionVelocityNormalCompare");
          __asm { vcomiss xmm6, xmm0 }
          if ( v49 )
          {
            *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &_RDI->velocity);
            __asm
            {
              vxorps  xmm1, xmm1, xmm1; height
              vmovaps xmm6, xmm0
            }
            WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &_RDI->velocity);
            __asm
            {
              vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
              vxorps  xmm0, xmm6, cs:__xmm@80000000800000008000000080000000
              vmovss  dword ptr [rdi+44h], xmm0
            }
          }
          __asm { vmovaps xmm7, [rsp+230h+var_50] }
        }
        else
        {
          __asm
          {
            vxorps  xmm6, xmm6, xmm6
            vucomiss xmm8, xmm6
          }
          AnglesToAxis(&_RDI->viewangles, &axis);
          WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&pm->refFrame, &axis);
          BgSpaceshipPlayer::BuildAxisFromForward(axis.m, &pm->refFrame.m_axis, &outAxis);
          GenerateAxisFromUpVector(&pm->refFrame.m_axis.m[2], &outAxis, &v80);
          AxisToAngles(&v80, &angles);
          WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles(&pm->refFrame, _RDI, pm->m_bgHandler, &angles);
          __asm
          {
            vmovss  xmm0, cs:WORLD_UP_MP_GROUND_SOLVER_BLEND_STRENGTH
            vmulss  xmm0, xmm0, dword ptr [rbx+24h]; val
            vmovss  xmm2, cs:__real@3f800000; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovaps xmm3, xmm0; lerp }
          WorldUpMp_UpdateViewRotationLerp(pm, pml, &outNormal, *(const float *)&_XMM3);
        }
        __asm
        {
          vmovaps xmm6, [rsp+230h+var_40]
          vmovaps xmm9, [rsp+230h+var_70]
          vmovaps xmm8, [rsp+230h+var_60]
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+30h]
        vmovss  dword ptr [rbp+130h+vec], xmm0
        vmovss  xmm1, dword ptr [rdi+34h]
        vmovss  dword ptr [rbp+130h+vec+4], xmm1
        vmovss  xmm0, dword ptr [rdi+38h]
        vmovss  xmm1, cs:WORLD_UP_MP_GROUND_SOLVER_TRACE_UP; height
        vmovss  dword ptr [rbp+130h+vec+8], xmm0
      }
      WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+30h]
        vmovss  dword ptr [rsp+230h+end], xmm0
        vmovss  xmm1, dword ptr [rdi+34h]
        vmovss  dword ptr [rsp+230h+end+4], xmm1
        vmovss  xmm0, dword ptr [rdi+38h]
        vmovss  xmm1, cs:WORLD_UP_MP_GROUND_SOLVER_TRACE_DOWN; height
        vmovss  dword ptr [rbp+130h+end+8], xmm0
      }
      WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &end);
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &vec, &end, pm->bounds, _RDI->clientNum, pm->tracemask);
      if ( results.startsolid )
      {
        if ( PM_ResolvePlayerPenetration(pm, &_RDI->origin, NULL, pm->bounds, NULL, pm->tracemask, 0, &angles, NULL) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+230h+angles]
            vmovss  xmm1, dword ptr [rsp+230h+angles+4]
            vmovss  dword ptr [rdi+30h], xmm0
            vmovss  xmm0, dword ptr [rsp+230h+angles+8]
            vmovss  dword ptr [rdi+38h], xmm0
            vmovss  dword ptr [rdi+34h], xmm1
          }
        }
        else
        {
          WorldUpReferenceFrame::SetAngles(&pm->refFrame, _RDI, pm->m_bgHandler, &outAngles);
          __asm
          {
            vmovss  dword ptr [rdi+30h], xmm10
            vmovss  dword ptr [rdi+34h], xmm11
            vmovss  dword ptr [rdi+38h], xmm12
          }
        }
      }
      __asm
      {
        vmovaps xmm10, [rsp+230h+var_80]
        vmovaps xmm11, [rsp+230h+var_90]
        vmovaps xmm12, [rsp+230h+var_A0]
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
  char v58; 
  char v59; 
  vec3_t outEye; 
  int v90; 
  vec3_t angles; 

  _R14 = outNormal;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 386, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 387, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !WorldUpMp_IsLockedTransitionActive(_RBX) || !pm->GetWorldUpParentOrientation(pm, _RBX->worldUpTransitionTarget, (vec3_t *)&v90, &angles) )
    return 0;
  _RSI = DCONST_DVARFLT_worldUpTransitionFriction;
  __asm
  {
    vmovaps [rsp+128h+var_48], xmm6
    vmovaps [rsp+128h+var_58], xmm7
    vmovaps [rsp+128h+var_68], xmm8
    vmovaps [rsp+128h+var_78], xmm9
    vmovaps [rsp+128h+var_88], xmm10
    vmovaps [rsp+128h+var_98], xmm11
    vmovaps [rsp+128h+var_A8], xmm12
  }
  if ( !DCONST_DVARFLT_worldUpTransitionFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldUpTransitionFriction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+28h]
    vmovss  xmm7, cs:__real@3f800000
    vmulss  xmm0, xmm0, dword ptr [rbp+24h]; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vsubss  xmm2, xmm1, dword ptr [rbx+3Ch]
    vmulss  xmm3, xmm2, xmm0
    vaddss  xmm4, xmm3, dword ptr [rbx+3Ch]
    vmovss  dword ptr [rbx+3Ch], xmm4
    vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
    vsubss  xmm2, xmm1, dword ptr [rbx+40h]
    vmulss  xmm3, xmm2, xmm0
    vaddss  xmm4, xmm3, dword ptr [rbx+40h]
    vmovss  dword ptr [rbx+40h], xmm4
    vmovaps xmm6, xmm0
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
    vsubss  xmm1, xmm0, dword ptr [rbx+44h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rbx+44h]
    vmovss  dword ptr [rbx+44h], xmm3
  }
  AngleVectors(&angles, _R14, NULL, NULL);
  __asm
  {
    vmovss  xmm1, dword ptr [r14+4]
    vmovss  xmm0, dword ptr [r14]
    vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm0, xmm8
    vmovss  dword ptr [r14], xmm0
    vxorps  xmm0, xmm1, xmm8
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  dword ptr [r14+4], xmm0
    vxorps  xmm0, xmm1, xmm8
    vmovss  dword ptr [r14+8], xmm0
  }
  WorldUpMp_UpdateViewRotation(pm, pml, _R14);
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetEyePosition(&pm->refFrame, _RBX, pm->weaponMap, pm->m_bgHandler, &outEye);
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [r14]
    vaddss  xmm10, xmm1, [rsp+128h+var_D8]
    vmulss  xmm2, xmm0, dword ptr [r14+4]
    vmulss  xmm1, xmm0, dword ptr [r14+8]
    vaddss  xmm11, xmm2, [rsp+128h+var_D4]
    vaddss  xmm12, xmm1, [rsp+128h+var_D0]
    vsubss  xmm1, xmm11, dword ptr [rsp+128h+outEye+4]
    vmovss  xmm5, dword ptr [rsp+128h+outEye]
    vsubss  xmm4, xmm12, dword ptr [rsp+128h+outEye+8]
    vmulss  xmm2, xmm1, xmm1
    vsubss  xmm3, xmm10, xmm5
    vmulss  xmm1, xmm3, xmm3
    vmovaps xmm9, xmm0
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm6, xmm2, xmm2
    vcomiss xmm6, cs:__real@3a83126f
  }
  if ( !(v58 | v59) )
  {
    _RSI = DCONST_DVARFLT_worldUpTransitionPosVelocity;
    if ( !DCONST_DVARFLT_worldUpTransitionPosVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldUpTransitionPosVelocity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+28h]
      vmulss  xmm2, xmm0, dword ptr [rbp+24h]
      vdivss  xmm0, xmm2, xmm6; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+128h+outEye]
      vmovaps xmm7, xmm0
    }
  }
  _R8 = &_RBX->origin;
  __asm
  {
    vsubss  xmm1, xmm10, xmm5
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm3, xmm2, xmm5
    vmovss  dword ptr [r8], xmm3
    vsubss  xmm1, xmm11, dword ptr [rsp+128h+outEye+4]
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm3, xmm2, dword ptr [rsp+128h+outEye+4]
    vmovss  dword ptr [r8+4], xmm3
    vsubss  xmm0, xmm12, dword ptr [rsp+128h+outEye+8]
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm2, xmm1, dword ptr [rsp+128h+outEye+8]
    vxorps  xmm1, xmm9, xmm8; height
    vmovss  dword ptr [r8+8], xmm2
  }
  WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &_RBX->origin);
  _RSI = DCONST_DVARFLT_worldUpTransitionTriggerNormalCompare;
  __asm
  {
    vmovaps xmm12, [rsp+128h+var_A8]
    vmovaps xmm11, [rsp+128h+var_98]
    vmovaps xmm10, [rsp+128h+var_88]
    vmovaps xmm9, [rsp+128h+var_78]
    vmovaps xmm8, [rsp+128h+var_68]
    vmovaps xmm7, [rsp+128h+var_58]
    vmovaps xmm6, [rsp+128h+var_48]
  }
  if ( !DCONST_DVARFLT_worldUpTransitionTriggerNormalCompare && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldUpTransitionTriggerNormalCompare") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm2, dword ptr [rsi+28h]; epsilon }
  if ( VecNCompareCustomEpsilon(pm->refFrame.m_axis.m[2].v, _R14->v, *(float *)&_XMM2, 3) )
  {
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(&_RBX->otherFlags, FOG_SCALE|PRONE|0x20);
    _RBX->worldUpAngularVelocity = 0;
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
  float velocity; 
  float currentPos; 
  DampedSpring v36; 
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
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _R14 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 78, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 79, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !pm->refFrame.m_axisAdjusted && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&_RDI->otherFlags, DEAD|PRONE|0x20) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+1D8h]
      vmovss  xmm1, dword ptr [rdi+1DCh]
      vmovss  dword ptr [rsp+210h+angles], xmm0
      vmovss  xmm0, dword ptr [rdi+1E0h]
      vmovss  dword ptr [rbp+110h+angles+8], xmm0
      vmovss  dword ptr [rsp+210h+angles+4], xmm1
    }
    WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&pm->refFrame, &angles);
    WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles(&pm->refFrame, pm->ps, pm->m_bgHandler, &angles);
    pm->m_flags |= 8u;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1D8h]
    vmovss  dword ptr [rsp+210h+newViewAngles], xmm0
    vmovss  xmm1, dword ptr [rdi+1DCh]
    vmovss  dword ptr [rsp+210h+newViewAngles+4], xmm1
    vmovss  xmm0, dword ptr [rdi+1E0h]
    vmovss  dword ptr [rsp+210h+newViewAngles+8], xmm0
  }
  WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&pm->refFrame, &newViewAngles);
  AnglesToAxis(&newViewAngles, &axis);
  BgSpaceshipPlayer::BuildAxisFromForward(axis.m, &pm->refFrame.m_axis, &outAxis);
  GenerateAxisFromUpVector(targetNormal, &outAxis, &end);
  BgSpaceship::DeltaAxis(&pm->refFrame.m_axis, &end, &outDeltaAxis);
  *(double *)&_XMM0 = BgSpaceship::AxisToAxisAngle(&outDeltaAxis, &outAxisAngle);
  __asm { vmovss  xmm7, dword ptr [r14+24h] }
  _R14 = DCONST_DVARFLT_worldUpTransitionSpringOscillation;
  __asm
  {
    vmovss  [rsp+210h+currentPos], xmm0
    vmovaps xmm8, xmm0
  }
  if ( !DCONST_DVARFLT_worldUpTransitionSpringOscillation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldUpTransitionSpringOscillation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R14);
  __asm { vmovss  xmm6, dword ptr [r14+28h] }
  _R14 = DCONST_DVARFLT_worldUpTransitionSpringStrength;
  if ( !DCONST_DVARFLT_worldUpTransitionSpringStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldUpTransitionSpringStrength") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R14);
  __asm
  {
    vmovss  xmm1, dword ptr [r14+28h]; springConst
    vmovaps xmm3, xmm7; deltaTime
    vmovaps xmm2, xmm6; accelWeight
  }
  DampedSpring::DampedSpring(&v36, *(const float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1163, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vmovss  xmm1, cs:__real@43fa0000; maxAbsValueSize }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(_RDI->worldUpAngularVelocity, *(float *)&_XMM1, 0xCu);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; targetPos
    vmovss  [rsp+210h+velocity], xmm0
  }
  DampedSpring::Update1DAngleSpring(&v36, &currentPos, *(const float *)&_XMM2, &velocity);
  __asm
  {
    vmovss  xmm1, cs:__real@43fa0000; maxAbsValueSize
    vmovss  xmm0, [rsp+210h+velocity]; value
  }
  _RDI->worldUpAngularVelocity = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0xCu);
  __asm { vsubss  xmm0, xmm8, [rsp+210h+currentPos]; angle }
  BgSpaceship::AxisAngleToAngles(*(const float *)&_XMM0, &outAxisAngle, &outAngles);
  AnglesToAxis(&outAngles, &in2);
  MatrixMultiply(&pm->refFrame.m_axis, &in2, &out);
  AxisToAngles(&out, &newWorldAngles);
  WorldUpReferenceFrame::SetAnglesAndViewAngles(&pm->refFrame, _RDI, pm->m_bgHandler, &newWorldAngles, &newViewAngles);
  _R11 = &v48;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
WorldUpMp_UpdateViewRotationLerp
==============
*/

void __fastcall WorldUpMp_UpdateViewRotationLerp(pmove_t *pm, const pml_t *pml, const vec3_t *targetNormal, double lerp)
{
  vec3_t angles; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> axis; 

  __asm
  {
    vmovaps [rsp+0C8h+var_28], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 449, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up_mp.cpp", 450, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  GenerateAxisFromUpVector(targetNormal, &pm->refFrame.m_axis, &outAxis);
  __asm { vmovaps xmm2, xmm6; fraction }
  BgSpaceship::AxisLerp(&pm->refFrame.m_axis, &outAxis, *(const float *)&_XMM2, &axis);
  AxisToAngles(&axis, &angles);
  WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles(&pm->refFrame, pm->ps, pm->m_bgHandler, &angles);
  __asm { vmovaps xmm6, [rsp+0C8h+var_28] }
}

