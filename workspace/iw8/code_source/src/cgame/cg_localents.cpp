/*
==============
CG_LocalEntityTypeIsBeamTracer
==============
*/

bool __fastcall CG_LocalEntityTypeIsBeamTracer(leType_t type)
{
  return ?CG_LocalEntityTypeIsBeamTracer@@YA_NW4leType_t@@@Z(type);
}

/*
==============
CG_LocalEntity_PreAddDObjUpdate
==============
*/

void __fastcall CG_LocalEntity_PreAddDObjUpdate(const LocalClientNum_t localClientNum, const int entityNum)
{
  ?CG_LocalEntity_PreAddDObjUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entityNum);
}

/*
==============
CG_GetLocalEntityTypeForTrackingBeamTracer
==============
*/

leType_t __fastcall CG_GetLocalEntityTypeForTrackingBeamTracer(int shotIndex)
{
  return ?CG_GetLocalEntityTypeForTrackingBeamTracer@@YA?AW4leType_t@@H@Z(shotIndex);
}

/*
==============
CG_AllocLocalClientEntities
==============
*/

void __fastcall CG_AllocLocalClientEntities(HunkUser *hunkUser, int maxLocalClients)
{
  ?CG_AllocLocalClientEntities@@YAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CG_GetLaserLocalEntityByOwner
==============
*/

localEntity_s *__fastcall CG_GetLaserLocalEntityByOwner(const LocalClientNum_t localClientNum, const int ownerNum, leType_t leType, const bool isSecondaryLaser)
{
  return ?CG_GetLaserLocalEntityByOwner@@YAPEAUlocalEntity_s@@W4LocalClientNum_t@@HW4leType_t@@_N@Z(localClientNum, ownerNum, leType, isSecondaryLaser);
}

/*
==============
CG_UpdateLocalEntities
==============
*/

void __fastcall CG_UpdateLocalEntities(const LocalClientNum_t localClientNum)
{
  ?CG_UpdateLocalEntities@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_LocalEntity_ResetWorkIndex
==============
*/

void __fastcall CG_LocalEntity_ResetWorkIndex(const LocalClientNum_t localClientNum)
{
  ?CG_LocalEntity_ResetWorkIndex@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_AddLocalEntityTracerParticles
==============
*/

void __fastcall CG_AddLocalEntityTracerParticles(const LocalClientNum_t localClientNum)
{
  ?CG_AddLocalEntityTracerParticles@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetTracerLocalEntityByBulletId
==============
*/

localEntity_s *__fastcall CG_GetTracerLocalEntityByBulletId(const LocalClientNum_t localClientNum, const int bulletId)
{
  return ?CG_GetTracerLocalEntityByBulletId@@YAPEAUlocalEntity_s@@W4LocalClientNum_t@@H@Z(localClientNum, bulletId);
}

/*
==============
CG_AllocLocalEntity
==============
*/

localEntity_s *__fastcall CG_AllocLocalEntity(const LocalClientNum_t localClientNum)
{
  return ?CG_AllocLocalEntity@@YAPEAUlocalEntity_s@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_LocalEntity_FreeOwnerEntity
==============
*/

void __fastcall CG_LocalEntity_FreeOwnerEntity(const LocalClientNum_t localClientNum, const int entityNum)
{
  ?CG_LocalEntity_FreeOwnerEntity@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entityNum);
}

/*
==============
CG_FreeLocalClientEntities
==============
*/

void CG_FreeLocalClientEntities(void)
{
  ?CG_FreeLocalClientEntities@@YAXXZ();
}

/*
==============
CG_LocalEntity_BeamTargetsUpdate
==============
*/

void __fastcall CG_LocalEntity_BeamTargetsUpdate(const LocalClientNum_t localClientNum, const centity_t *attackerEnt, const int targetCount, const ntl::fixed_array<CAssistTarget,20> *targetArray)
{
  ?CG_LocalEntity_BeamTargetsUpdate@@YAXW4LocalClientNum_t@@PEBUcentity_t@@HPEBV?$fixed_array@VCAssistTarget@@$0BE@@ntl@@@Z(localClientNum, attackerEnt, targetCount, targetArray);
}

/*
==============
CG_InitLocalEntities
==============
*/

void __fastcall CG_InitLocalEntities(const LocalClientNum_t localClientNum)
{
  ?CG_InitLocalEntities@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_AddLocalEntityTracerBeams
==============
*/

void __fastcall CG_AddLocalEntityTracerBeams(const LocalClientNum_t localClientNum)
{
  ?CG_AddLocalEntityTracerBeams@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_AddBallisticTracer
==============
*/
void CG_AddBallisticTracer(const cg_t *cgameGlob, localEntity_s *const le, void (*drawTracerCb)(const vec3_t *, const vec3_t *, const vec3_t *, const float, const TracerDrawFlags, TracerInfo *const, void *), void *data)
{
  int endTime; 
  int v19; 
  int startTime; 
  const dvar_t *v67; 
  const char *v68; 
  unsigned int time; 
  bool v79; 
  ParticleSystemHandle particleSystem; 
  float v0; 
  int v129; 
  int v132; 
  float v1[4]; 

  __asm { vmovaps [rsp+130h+var_50], xmm7 }
  _RBX = le;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 526, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 527, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
    __debugbreak();
  if ( _RBX->leType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 528, ASSERT_TYPE_ASSERT, "(le->leType == LE_MOVING_TRACER)", (const char *)&queryFormat, "le->leType == LE_MOVING_TRACER") )
    __debugbreak();
  if ( !drawTracerCb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 529, ASSERT_TYPE_ASSERT, "(drawTracerCb)", (const char *)&queryFormat, "drawTracerCb") )
    __debugbreak();
  endTime = _RBX->endTime;
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  if ( endTime != 0x7FFFFFFF )
    __asm { vucomiss xmm7, dword ptr [rbx+98h] }
  if ( cgameGlob->time >= endTime )
  {
    particleSystem = _RBX->u.tracer.particleSystem;
    if ( particleSystem )
    {
      ParticleManager::StopSystem((ParticleManager *)data, particleSystem);
      _RBX->u.tracer.particleSystem = PARTICLE_SYSTEM_INVALID_HANDLE;
    }
  }
  else
  {
    v19 = _RBX->u.tracer.ballistics.simFinishTime - _RBX->u.tracer.ballistics.simStartTime;
    __asm
    {
      vmovaps [rsp+130h+var_40], xmm6
      vmovaps [rsp+130h+var_60], xmm8
      vmovaps [rsp+130h+var_70], xmm9
      vmovaps [rsp+130h+var_80], xmm10
      vmovaps [rsp+130h+var_90], xmm11
      vmovaps [rsp+130h+var_A0], xmm12
      vxorps  xmm9, xmm9, xmm9
    }
    if ( v19 <= 0 )
    {
      __asm { vmovaps xmm8, xmm7 }
    }
    else
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, ecx
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm0, xmm1, xmm0; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm7; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm8, xmm0 }
    }
    if ( endTime != 0x7FFFFFFF )
      __asm { vmovss  dword ptr [rbx+98h], xmm8 }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+50h]
      vsubss  xmm10, xmm0, dword ptr [rbx+5Ch]
      vmovss  xmm0, dword ptr [rbx+58h]
      vsubss  xmm12, xmm0, dword ptr [rbx+64h]
      vmovss  xmm0, dword ptr [rbx+74h]
      vsubss  xmm6, xmm0, dword ptr [rbx+68h]
      vmovss  xmm1, dword ptr [rbx+54h]
      vsubss  xmm11, xmm1, dword ptr [rbx+60h]
      vmovss  xmm0, dword ptr [rbx+78h]
      vsubss  xmm5, xmm0, dword ptr [rbx+6Ch]
      vmovss  xmm0, dword ptr [rbx+7Ch]
      vsubss  xmm4, xmm0, dword ptr [rbx+70h]
      vmulss  xmm1, xmm6, xmm8
      vaddss  xmm2, xmm1, dword ptr [rbx+68h]
      vmovss  [rsp+130h+var_E0], xmm2
      vmulss  xmm1, xmm5, xmm8
      vaddss  xmm2, xmm1, dword ptr [rbx+6Ch]
      vmovss  [rsp+130h+var_DC], xmm2
      vmulss  xmm1, xmm4, xmm8
      vaddss  xmm2, xmm1, dword ptr [rbx+70h]
      vmovss  [rsp+130h+var_D8], xmm2
      vmovss  xmm2, cs:__real@3a83126f; epsilon
      vmovss  [rsp+130h+v0], xmm6
      vmovss  [rsp+130h+var_EC], xmm5
      vmovss  [rsp+130h+var_E8], xmm4
      vmovss  [rbp+57h+v1], xmm9
      vmovss  [rbp+57h+var_BC], xmm9
      vmovss  [rbp+57h+var_B8], xmm9
    }
    if ( VecNCompareCustomEpsilon(&v0, v1, *(float *)&_XMM2, 3) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+80h]
        vmovss  xmm1, dword ptr [rbx+84h]
        vmovss  [rsp+130h+v0], xmm0
        vmovss  xmm0, dword ptr [rbx+88h]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm4, [rsp+130h+var_EC]
        vmovss  xmm5, [rsp+130h+v0]
        vmovss  xmm6, [rsp+130h+var_E8]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm8, xmm2, xmm1
        vcomiss xmm8, xmm9
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
        __debugbreak();
      __asm
      {
        vmovss  xmm5, [rsp+130h+v0]
        vmovss  xmm4, [rsp+130h+var_EC]
        vmovss  xmm6, [rsp+130h+var_E8]
        vmovaps xmm1, xmm8
        vrsqrtss xmm3, xmm1, xmm1
        vmulss  xmm2, xmm5, xmm3
        vmulss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm6, xmm3
        vmovss  [rsp+130h+v0], xmm2
        vmovss  dword ptr [rbx+80h], xmm2
        vmovss  dword ptr [rbx+84h], xmm1
        vmovss  dword ptr [rbx+88h], xmm0
      }
    }
    startTime = _RBX->u.tracer.ballistics.startTime;
    __asm
    {
      vmovaps xmm9, [rsp+130h+var_70]
      vmovss  [rsp+130h+var_E8], xmm0
      vmovss  [rsp+130h+var_EC], xmm1
    }
    if ( cgameGlob->time == startTime )
    {
      if ( _RBX->u.tracer.ballistics.isPlayerView )
      {
        v67 = DCONST_DVARFLT_tracer_muzzleOffsetViewmodel;
        v68 = "tracer_muzzleOffsetViewmodel";
      }
      else
      {
        v67 = DCONST_DVARFLT_tracer_muzzleOffsetWorldmodel;
        v68 = "tracer_muzzleOffsetWorldmodel";
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v67, v68);
      __asm
      {
        vmulss  xmm1, xmm0, [rsp+130h+v0]
        vaddss  xmm2, xmm1, dword ptr [rbx+68h]
        vmulss  xmm1, xmm0, [rsp+130h+var_EC]
        vmovss  [rsp+130h+var_E0], xmm2
        vaddss  xmm2, xmm1, dword ptr [rbx+6Ch]
        vmulss  xmm1, xmm0, [rsp+130h+var_E8]
        vmovss  [rsp+130h+var_DC], xmm2
        vaddss  xmm2, xmm1, dword ptr [rbx+70h]
        vmovss  [rsp+130h+var_D8], xmm2
        vmovaps xmm3, xmm0
      }
    }
    _RDI = DCONST_DVARINT_bg_ballisticsMuzzleOffsetBlendMs;
    if ( !DCONST_DVARINT_bg_ballisticsMuzzleOffsetBlendMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsMuzzleOffsetBlendMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovd   xmm0, dword ptr [rdi+28h] }
    time = cgameGlob->time;
    v79 = time < _RBX->u.tracer.ballistics.startTime;
    _EAX = time - _RBX->u.tracer.ballistics.startTime;
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+0B8h]
      vcvtdq2ps xmm0, xmm0
      vmovd   xmm1, eax
      vcvtdq2ps xmm1, xmm1
      vdivss  xmm1, xmm1, xmm0
      vminss  xmm2, xmm1, xmm7
      vsubss  xmm3, xmm7, xmm2
      vmulss  xmm0, xmm10, xmm3
      vaddss  xmm5, xmm0, [rsp+130h+var_E0]
      vsubss  xmm2, xmm5, dword ptr [rbx+50h]
      vmovaps xmm10, [rsp+130h+var_80]
      vmulss  xmm0, xmm11, xmm3
      vaddss  xmm6, xmm0, [rsp+130h+var_DC]
      vmovaps xmm11, [rsp+130h+var_90]
      vmulss  xmm0, xmm12, xmm3
      vaddss  xmm8, xmm0, [rsp+130h+var_D8]
      vsubss  xmm0, xmm6, dword ptr [rbx+54h]
      vsubss  xmm3, xmm8, dword ptr [rbx+58h]
      vmovaps xmm12, [rsp+130h+var_A0]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vcomiss xmm3, xmm0
      vmovss  [rsp+130h+var_E0], xmm5
      vmovss  [rsp+130h+var_DC], xmm6
      vmovss  [rsp+130h+var_D8], xmm8
    }
    if ( v79 )
    {
      __asm
      {
        vsqrtss xmm0, xmm3, xmm3
        vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm1, xmm3, [rsp+130h+v0]
        vmulss  xmm0, xmm3, [rsp+130h+var_EC]
        vaddss  xmm2, xmm1, xmm5
        vaddss  xmm1, xmm0, xmm6
        vmovss  [rbp+57h+var_D0], xmm2
        vmulss  xmm2, xmm3, [rsp+130h+var_E8]
        vaddss  xmm0, xmm2, xmm8
        vmovss  [rbp+57h+var_C8], xmm0
        vmovss  [rbp+57h+var_CC], xmm1
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm4, xmm4, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm0, xmm4, [rsp+130h+v0]
        vmulss  xmm2, xmm4, [rsp+130h+var_EC]
        vaddss  xmm1, xmm0, xmm5
        vaddss  xmm0, xmm2, xmm6
        vmovss  [rbp+57h+var_D0], xmm1
        vmulss  xmm1, xmm4, [rsp+130h+var_E8]
        vaddss  xmm2, xmm1, xmm8
        vmovss  [rbp+57h+var_C8], xmm2
        vmovss  [rbp+57h+var_CC], xmm0
      }
    }
    __asm { vmovaps xmm3, xmm7 }
    ((void (__fastcall *)(int *, int *, float *))drawTracerCb)(&v132, &v129, &v0);
    __asm
    {
      vmovaps xmm8, [rsp+130h+var_60]
      vmovaps xmm6, [rsp+130h+var_40]
    }
  }
  __asm { vmovaps xmm7, [rsp+130h+var_50] }
}

/*
==============
CG_AddLocalEntityTracerBeams
==============
*/
void CG_AddLocalEntityTracerBeams(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned __int64 v2; 
  cg_t *LocalClientGlobals; 
  int time; 
  localEntity_s *v5; 
  leType_t leType; 
  unsigned int v7; 
  leType_t v8; 
  bool v9; 
  __int64 v10; 

  v1 = localClientNum;
  Profile_Begin(8);
  v2 = (unsigned __int64)g_localEntThread & 3;
  if ( ((unsigned __int8)g_localEntThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", g_localEntThread) )
    __debugbreak();
  if ( _InterlockedIncrement(g_localEntThread) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 725, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_localEntThread ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_localEntThread ) == 1") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  time = LocalClientGlobals->time;
  v5 = cg_localEntities[v1];
  if ( v5 < &v5[cg_localEntityCount[v1]] )
  {
    while ( 1 )
    {
      leType = v5->leType;
      v7 = leType - 1;
      if ( leType && v7 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 735, ASSERT_TYPE_ASSERT, "((le->leType == LE_MOVING_TRACER) || isBeamTracerType)", (const char *)&queryFormat, "(le->leType == LE_MOVING_TRACER) || isBeamTracerType") )
        __debugbreak();
      v8 = v5->leType;
      if ( v8 )
      {
        if ( v8 == LE_BEAM_SCRIPTED )
        {
          CG_ScriptedBeamDraw((LocalClientNum_t)v1, v5);
LABEL_41:
          ++v5;
          goto LABEL_42;
        }
        if ( v7 > 8 )
          goto LABEL_41;
        if ( time < v5->endTime )
        {
          if ( (unsigned int)(v8 - 1) > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 621, ASSERT_TYPE_ASSERT, "(CG_LocalEntityTypeIsBeamTracer( le->leType ))", (const char *)&queryFormat, "CG_LocalEntityTypeIsBeamTracer( le->leType )") )
            __debugbreak();
          CG_LaserBeamDraw((LocalClientNum_t)v1, v5, &v5->u.laser.weapon, v5->u.laser.isAlternate);
          goto LABEL_41;
        }
      }
      else
      {
        if ( v5->pos.trType != TR_LINEAR )
        {
          LODWORD(v10) = v5->pos.trType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 739, ASSERT_TYPE_ASSERT, "( ( le->pos.trType == TR_LINEAR ) )", "( le->pos.trType ) = %i", v10) )
            __debugbreak();
        }
        v9 = v5->leType == LE_MOVING_TRACER && !v5->u.tracer.isInstantaneousBeam && !v5->u.tracer.ballistics.isBallistic && v5->u.tracer.particleSystem;
        if ( time < v5->endTime || v9 )
        {
          if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
          {
            if ( time >= v5->addTime )
              goto LABEL_30;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 651, ASSERT_TYPE_ASSERT, "((Com_GameMode_GetActiveGameMode() != GameModeType::SP) || (time >= le->addTime))", (const char *)&queryFormat, "(Com_GameMode_GetActiveGameMode() != GameModeType::SP) || (time >= le->addTime)") )
              __debugbreak();
          }
          if ( time >= v5->addTime )
          {
LABEL_30:
            if ( v5->u.tracer.drawLegacyTracer )
              CG_AddMovingTracer(LocalClientGlobals, v5, Tracer_Draw_Legacy, NULL);
            goto LABEL_41;
          }
        }
      }
      CG_FreeLocalEntityAndCompact((const LocalClientNum_t)v1, v5);
LABEL_42:
      if ( v5 >= &cg_localEntities[v1][cg_localEntityCount[v1]] )
      {
        v2 = (unsigned __int64)g_localEntThread & 3;
        break;
      }
    }
  }
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", g_localEntThread) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(g_localEntThread, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 771, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_localEntThread ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_localEntThread ) == 0") )
    __debugbreak();
  Profile_EndInternal(NULL);
}

/*
==============
CG_AddLocalEntityTracerParticles
==============
*/
void CG_AddLocalEntityTracerParticles(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned __int64 v2; 
  const cg_t *LocalClientGlobals; 
  ParticleManager *v4; 
  volatile signed __int32 *v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  localEntity_s *v8; 
  __int64 v9; 
  __int64 v10; 

  v1 = localClientNum;
  v2 = (unsigned __int64)&g_localEntReadOnlyThread & 3;
  if ( ((unsigned __int8)&g_localEntReadOnlyThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_localEntReadOnlyThread) )
    __debugbreak();
  if ( _InterlockedAdd(&g_localEntReadOnlyThread, 1u) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 669, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_localEntReadOnlyThread ) > 0)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_localEntReadOnlyThread ) > 0") )
    __debugbreak();
  Profile_Begin(9);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v9) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, 2) )
      __debugbreak();
  }
  v4 = &g_particleManager[v1];
  v5 = &cg_localEntityWorkIndex[v1];
  v6 = cg_localEntityCount[v1];
  if ( *(int *)v5 < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 679, ASSERT_TYPE_ASSERT, "( cg_localEntityWorkIndex[localClientNum] ) >= ( -1 )", "%s >= %s\n\t%i, %i", "cg_localEntityWorkIndex[localClientNum]", "-1", *v5, -1) )
    __debugbreak();
  if ( ((unsigned __int8)v5 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&cg_localEntityWorkIndex[v1]) )
    __debugbreak();
  v7 = _InterlockedIncrement(v5);
  if ( v7 < v6 )
  {
    v10 = v1;
    do
    {
      v8 = &cg_localEntities[v10][v7];
      if ( v8->leType == LE_MOVING_TRACER && v8->u.tracer.particleSystemDef )
      {
        if ( v8->pos.trType != TR_LINEAR )
        {
          LODWORD(v9) = v8->pos.trType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 688, ASSERT_TYPE_ASSERT, "( ( le->pos.trType == TR_LINEAR ) )", "( le->pos.trType ) = %i", v9) )
            __debugbreak();
        }
        if ( v8->u.tracer.ballistics.isBallistic )
          CG_AddBallisticTracer(LocalClientGlobals, v8, Tracer_Draw_ParticleSystem, v4);
        else
          CG_AddMovingTracer(LocalClientGlobals, v8, Tracer_Draw_ParticleSystem, v4);
      }
      if ( ((unsigned __int8)v5 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v5) )
        __debugbreak();
      v7 = _InterlockedIncrement(v5);
    }
    while ( v7 < v6 );
    v2 = (unsigned __int64)&g_localEntReadOnlyThread & 3;
  }
  Profile_EndInternal(NULL);
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_localEntReadOnlyThread) )
    __debugbreak();
  if ( _InterlockedDecrement(&g_localEntReadOnlyThread) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 705, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_localEntReadOnlyThread ) >= 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_localEntReadOnlyThread ) >= 0") )
    __debugbreak();
}

/*
==============
CG_AddMovingTracer
==============
*/
void CG_AddMovingTracer(const cg_t *cgameGlob, localEntity_s *const le, void (*drawTracerCb)(const vec3_t *, const vec3_t *, const vec3_t *, const float, const TracerDrawFlags, TracerInfo *const, void *), void *data)
{
  int trTime; 
  bool v14; 
  bool v33; 
  bool v34; 
  bool v35; 
  bool v74; 
  double v105; 
  double v106; 
  double v107; 
  double v108; 
  int v109; 
  int v110; 
  int v111; 
  int v112[4]; 
  vec3_t result; 
  int v114[4]; 
  int v115[4]; 

  _RBX = le;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 446, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 447, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
    __debugbreak();
  if ( _RBX->leType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 448, ASSERT_TYPE_ASSERT, "(le->leType == LE_MOVING_TRACER)", (const char *)&queryFormat, "le->leType == LE_MOVING_TRACER") )
    __debugbreak();
  if ( !drawTracerCb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 449, ASSERT_TYPE_ASSERT, "(drawTracerCb)", (const char *)&queryFormat, "drawTracerCb") )
    __debugbreak();
  trTime = _RBX->pos.trTime;
  v14 = cgameGlob->time <= (unsigned int)trTime;
  if ( cgameGlob->time >= trTime )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+30h]
      vmovss  xmm4, dword ptr [rbx+2Ch]
      vmovss  xmm3, dword ptr [rbx+34h]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm0, xmm0
      vaddss  xmm2, xmm1, xmm0
      vmovaps [rsp+128h+var_38], xmm6
      vmovaps [rsp+128h+var_48], xmm7
      vmovsd  xmm7, cs:__real@3eb0c6f7a0b5ed8d
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcvtss2sd xmm0, xmm2, xmm2
      vcomisd xmm0, xmm7
      vmovaps [rsp+128h+var_88], xmm11
    }
    if ( v14 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+30h]
        vmovaps xmm0, xmm3
        vcvtss2sd xmm0, xmm3, xmm3
        vmovsd  [rsp+128h+var_E8], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+128h+var_F0], xmm1
        vcvtss2sd xmm2, xmm4, xmm4
        vmovsd  [rsp+128h+var_F8], xmm2
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 459, ASSERT_TYPE_ASSERT, "(Vec3LengthSq( le->pos.trDelta ) > 1.0E-6)", "%s\n\tZero length tracer encountered.  trDelta (%0.2f, %0.2f, %0.2f)", "Vec3LengthSq( le->pos.trDelta ) > ZERO_EPSILON", v106, v107, v108) )
        __debugbreak();
    }
    BgTrajectory::LegacyEvaluateTrajectory(&_RBX->pos, cgameGlob->time, &result);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+2Ch]
      vmovss  [rsp+128h+var_D8], xmm0
    }
    if ( (v109 & 0x7F800000) == 2139095040 )
      goto LABEL_36;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+30h]
      vmovss  [rsp+128h+var_D8], xmm0
    }
    if ( (v110 & 0x7F800000) == 2139095040 )
      goto LABEL_36;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+34h]
      vmovss  [rsp+128h+var_D8], xmm0
    }
    v33 = (v111 & 0x7F800000u) < 0x7F800000;
    v34 = (v111 & 0x7F800000u) <= 0x7F800000;
    if ( (v111 & 0x7F800000) == 2139095040 )
    {
LABEL_36:
      v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 465, ASSERT_TYPE_SANITY, "( !IS_NAN( ( le->pos.trDelta )[0] ) && !IS_NAN( ( le->pos.trDelta )[1] ) && !IS_NAN( ( le->pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( le->pos.trDelta )[0] ) && !IS_NAN( ( le->pos.trDelta )[1] ) && !IS_NAN( ( le->pos.trDelta )[2] )");
      v33 = 0;
      v34 = !v35;
      if ( v35 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm5, dword ptr [rbx+30h]
      vmovss  xmm4, dword ptr [rbx+2Ch]
      vmovss  xmm6, dword ptr [rbx+34h]
      vmovss  xmm11, cs:__real@3f800000
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm11, xmm0
      vdivss  xmm1, xmm11, xmm0
      vmulss  xmm2, xmm5, xmm1
      vcvtss2sd xmm0, xmm3, xmm3
      vcomisd xmm0, xmm7
      vmulss  xmm5, xmm6, xmm1
      vmulss  xmm4, xmm4, xmm1
      vmovss  [rsp+128h+var_C8], xmm5
      vmovss  [rsp+128h+var_D0], xmm4
      vmovss  [rsp+128h+var_CC], xmm2
    }
    if ( !v34 || (v33 = 0, _RBX->u.tracer.isInstantaneousBeam) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+128h+result+4]
        vsubss  xmm1, xmm0, dword ptr [rbx+24h]
        vmulss  xmm3, xmm1, xmm2
        vmovss  xmm2, dword ptr [rsp+128h+result]
        vsubss  xmm0, xmm2, dword ptr [rbx+20h]
        vmovss  xmm2, dword ptr [rsp+128h+result+8]
        vmulss  xmm1, xmm0, xmm4
        vsubss  xmm0, xmm2, dword ptr [rbx+28h]
        vaddss  xmm4, xmm3, xmm1
        vmovaps [rsp+128h+var_58], xmm8
        vmulss  xmm1, xmm0, xmm5
        vmovaps [rsp+128h+var_68], xmm9
        vmovaps [rsp+128h+var_78], xmm10
        vaddss  xmm7, xmm4, xmm1
        vxorps  xmm10, xmm10, xmm10
        vcomiss xmm7, xmm10
      }
      if ( v33 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm7, xmm7
          vmovsd  [rsp+128h+var_100], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 478, ASSERT_TYPE_SANITY, "( ( lengthBaseToStart >= 0.0f ) )", "( lengthBaseToStart ) = %g", v105) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+0B4h]
        vmovss  xmm0, dword ptr [rbx+0B8h]
      }
      if ( _RBX->u.tracer.isInstantaneousBeam )
      {
        __asm
        {
          vaddss  xmm0, xmm0, xmm7
          vminss  xmm8, xmm0, xmm6
          vminss  xmm9, xmm6, xmm7
        }
      }
      else
      {
        __asm
        {
          vcomiss xmm6, xmm10
          vsubss  xmm8, xmm7, xmm0
          vmovss  xmm1, dword ptr [rbx+0B4h]
          vmaxss  xmm0, xmm8, xmm10
          vminss  xmm9, xmm0, xmm6
          vminss  xmm8, xmm1, xmm7
        }
      }
      __asm { vcomiss xmm8, xmm9 }
      v74 = _RBX->u.tracer.isInstantaneousBeam == 0;
      __asm
      {
        vmulss  xmm2, xmm9, [rsp+128h+var_D0]
        vmulss  xmm0, xmm8, [rsp+128h+var_D0]
        vaddss  xmm1, xmm0, dword ptr [rbx+20h]
        vmulss  xmm0, xmm8, [rsp+128h+var_CC]
        vmovss  [rsp+128h+var_B0], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbx+24h]
        vmulss  xmm0, xmm8, [rsp+128h+var_C8]
        vmovss  [rsp+128h+var_AC], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbx+28h]
        vaddss  xmm0, xmm2, dword ptr [rbx+20h]
        vmovss  [rsp+128h+var_A8], xmm1
        vmulss  xmm1, xmm9, [rsp+128h+var_CC]
        vaddss  xmm2, xmm1, dword ptr [rbx+24h]
        vmovss  [rsp+128h+var_A0], xmm0
        vmulss  xmm0, xmm9, [rsp+128h+var_C8]
        vaddss  xmm1, xmm0, dword ptr [rbx+28h]
        vmovaps xmm9, [rsp+128h+var_68]
        vmovss  [rsp+128h+var_98], xmm1
        vmovss  [rsp+128h+var_9C], xmm2
      }
      if ( !v74 )
      {
        __asm
        {
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm2, xmm2, dword ptr [rbx+3Ch]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+18h]
          vsubss  xmm2, xmm2, xmm0
          vxorps  xmm3, xmm3, xmm3
          vcvtsi2ss xmm3, xmm3, eax
          vdivss  xmm3, xmm3, xmm2
          vsubss  xmm0, xmm11, xmm3; val
          vmovaps xmm2, xmm11; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm11, xmm0 }
      }
      __asm
      {
        vcomiss xmm8, dword ptr [rbx+0B4h]
        vmovaps xmm3, xmm11
      }
      ((void (__fastcall *)(int *, int *, int *))drawTracerCb)(v115, v114, v112);
      __asm
      {
        vmovaps xmm10, [rsp+128h+var_78]
        vmovaps xmm8, [rsp+128h+var_58]
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+128h+var_48]
      vmovaps xmm6, [rsp+128h+var_38]
      vmovaps xmm11, [rsp+128h+var_88]
    }
  }
}

/*
==============
CG_AllocLocalClientEntities
==============
*/
void CG_AllocLocalClientEntities(HunkUser *hunkUser, int maxLocalClients)
{
  __int64 v2; 
  __int64 i; 
  localEntity_s *v5; 

  v2 = maxLocalClients;
  cg_localEntities = (localEntity_s **)Mem_HunkUser_AllocInternal(hunkUser, 8i64 * maxLocalClients, 8ui64, "CG_AllocLocalClientEntities");
  if ( v2 > 0 )
  {
    for ( i = 0i64; i < v2; ++i )
    {
      cg_localEntityCount[i] = 0i64;
      cg_localEntityNewest[i] = NULL;
      cg_localEntityOldest[i] = NULL;
      v5 = (localEntity_s *)Mem_HunkUser_AllocInternal(hunkUser, 0xA000ui64, 8ui64, "CG_AllocLocalClientEntities");
      cg_localEntities[i] = v5;
      memset_0(v5, 0, 0xA000ui64);
    }
  }
}

/*
==============
CG_AllocLocalEntity
==============
*/
localEntity_s *CG_AllocLocalEntity(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  unsigned __int64 v3; 
  bool v4; 
  unsigned __int64 v5; 
  localEntity_s **v6; 
  localEntity_s *v7; 
  bool v8; 
  localEntity_s *v9; 
  localEntity_s *v10; 
  localEntity_s *prev; 
  localEntity_s *v12; 
  __int64 v14; 
  __int64 v15; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_maxLocalClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 222, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_maxLocalClients )", "localClientNum doesn't index cg_maxLocalClients\n\t%i not in [0, %i)", localClientNum, cg_maxLocalClients) )
    __debugbreak();
  if ( ((unsigned __int8)g_localEntThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", g_localEntThread) )
    __debugbreak();
  if ( _InterlockedIncrement(g_localEntThread) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 224, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_localEntThread ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_localEntThread ) == 1") )
    __debugbreak();
  v2 = v1;
  v3 = cg_localEntityCount[v1];
  v4 = v3 < 0x80;
  if ( v3 == 128 )
  {
    if ( !cg_localEntityOldest[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 231, ASSERT_TYPE_ASSERT, "(cg_localEntityOldest[localClientNum] != nullptr)", (const char *)&queryFormat, "cg_localEntityOldest[localClientNum] != nullptr") )
      __debugbreak();
    CG_FreeLocalEntityAndCompact((const LocalClientNum_t)v1, cg_localEntityOldest[v2]);
    v4 = cg_localEntityCount[v2] < 0x80;
  }
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 234, ASSERT_TYPE_ASSERT, "(cg_localEntityCount[localClientNum] < 128)", (const char *)&queryFormat, "cg_localEntityCount[localClientNum] < MAX_LOCAL_ENTITIES") )
    __debugbreak();
  v5 = cg_localEntityCount[v2];
  if ( (unsigned int)v5 >= 0x80 )
  {
    LODWORD(v15) = 128;
    LODWORD(v14) = cg_localEntityCount[v2];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 242, ASSERT_TYPE_ASSERT, "(unsigned)( freeIndex ) < (unsigned)( 128 )", "freeIndex doesn't index MAX_LOCAL_ENTITIES\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v6 = cg_localEntities;
  ++cg_localEntityCount[v2];
  v7 = &v6[v2][v5];
  memset_0(v7, 0, sizeof(localEntity_s));
  v8 = cg_localEntityOldest[v2] == NULL;
  v7->ownerNum = 2047;
  if ( v8 )
    cg_localEntityOldest[v2] = v7;
  v9 = cg_localEntityNewest[v2];
  if ( v9 && v9->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 254, ASSERT_TYPE_ASSERT, "((cg_localEntityNewest[localClientNum] == nullptr) || (cg_localEntityNewest[localClientNum]->next == nullptr))", (const char *)&queryFormat, "(cg_localEntityNewest[localClientNum] == nullptr) || (cg_localEntityNewest[localClientNum]->next == nullptr)") )
    __debugbreak();
  v10 = cg_localEntityNewest[v2];
  v7->next = NULL;
  v7->prev = v10;
  if ( !v10 && cg_localEntityCount[v2] != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 257, ASSERT_TYPE_ASSERT, "(le->prev || (cg_localEntityCount[localClientNum] == 1))", (const char *)&queryFormat, "le->prev || (cg_localEntityCount[localClientNum] == 1)") )
    __debugbreak();
  prev = v7->prev;
  if ( prev )
    prev->next = v7;
  cg_localEntityNewest[v2] = v7;
  if ( v7 == v7->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 264, ASSERT_TYPE_ASSERT, "(le != le->next)", (const char *)&queryFormat, "le != le->next") )
    __debugbreak();
  if ( v7 == v7->prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 265, ASSERT_TYPE_ASSERT, "(le != le->prev)", (const char *)&queryFormat, "le != le->prev") )
    __debugbreak();
  if ( cg_localEntityCount[v2] != 1 && !v7->next && !v7->prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 266, ASSERT_TYPE_ASSERT, "((cg_localEntityCount[localClientNum] == 1) || le->next || le->prev)", (const char *)&queryFormat, "(cg_localEntityCount[localClientNum] == 1) || le->next || le->prev") )
    __debugbreak();
  v12 = v7->prev;
  if ( v12 && v7 != v12->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 267, ASSERT_TYPE_ASSERT, "((le->prev == nullptr) || (le == le->prev->next))", (const char *)&queryFormat, "(le->prev == nullptr) || (le == le->prev->next)") )
    __debugbreak();
  if ( !cg_localEntityCount[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 268, ASSERT_TYPE_ASSERT, "(cg_localEntityCount[localClientNum] > 0)", (const char *)&queryFormat, "cg_localEntityCount[localClientNum] > 0") )
    __debugbreak();
  if ( !cg_localEntityNewest[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 269, ASSERT_TYPE_ASSERT, "(cg_localEntityNewest[localClientNum] != nullptr)", (const char *)&queryFormat, "cg_localEntityNewest[localClientNum] != nullptr") )
    __debugbreak();
  if ( !cg_localEntityOldest[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 270, ASSERT_TYPE_ASSERT, "(cg_localEntityOldest[localClientNum] != nullptr)", (const char *)&queryFormat, "cg_localEntityOldest[localClientNum] != nullptr") )
    __debugbreak();
  if ( ((unsigned __int64)g_localEntThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", g_localEntThread) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(g_localEntThread, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 273, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_localEntThread ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_localEntThread ) == 0") )
    __debugbreak();
  return v7;
}

/*
==============
CG_FreeLocalClientEntities
==============
*/
void CG_FreeLocalClientEntities(void)
{
  cg_localEntities = NULL;
}

/*
==============
CG_FreeLocalEntityAndCompact
==============
*/
void CG_FreeLocalEntityAndCompact(const LocalClientNum_t localClientNum, localEntity_s *const le)
{
  __int64 v3; 
  __int64 v4; 
  localEntity_s *v5; 
  __int64 v6; 
  ParticleManager *v7; 
  leType_t leType; 
  ParticleSystemHandle particleSystem; 
  ParticleSystemHandle pBeamEffect; 
  localEntity_s *next; 
  localEntity_s *prev; 
  bool v13; 
  localEntity_s *v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  localEntity_s *v18; 
  CgBallisticInstance *ballisticInstance; 
  localEntity_s *v33; 
  localEntity_s *v34; 
  const char *v35; 
  int v36; 
  const char *v37; 
  __int64 v38; 
  __int64 v39; 

  v3 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_maxLocalClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 92, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_maxLocalClients )", "localClientNum doesn't index cg_maxLocalClients\n\t%i not in [0, %i)", localClientNum, cg_maxLocalClients) )
    __debugbreak();
  if ( !le && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 93, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
    __debugbreak();
  v4 = v3;
  if ( cg_localEntityCount[v3] != 1 && !le->next && !le->prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 94, ASSERT_TYPE_ASSERT, "((cg_localEntityCount[localClientNum] == 1) || le->next || le->prev)", (const char *)&queryFormat, "(cg_localEntityCount[localClientNum] == 1) || le->next || le->prev") )
    __debugbreak();
  v5 = cg_localEntities[v3];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 97, ASSERT_TYPE_ASSERT, "(localEntities)", (const char *)&queryFormat, "localEntities") )
    __debugbreak();
  if ( ((unsigned __int8)&g_localEntReadOnlyThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_localEntReadOnlyThread) )
    __debugbreak();
  if ( _InterlockedDecrement(&g_localEntReadOnlyThread) != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 100, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_localEntReadOnlyThread ) == -1)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_localEntReadOnlyThread ) == -1") )
    __debugbreak();
  v6 = 2i64;
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v39) = 2;
    LODWORD(v38) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v38, v39) )
      __debugbreak();
  }
  v7 = &g_particleManager[v3];
  if ( v7 && v7->m_isRunning )
  {
    leType = le->leType;
    if ( leType )
    {
      if ( (unsigned int)(leType - 1) <= 8 )
      {
        pBeamEffect = le->u.laser.pBeamEffect;
        if ( pBeamEffect )
        {
          ParticleManager::KillSystem(v7, pBeamEffect);
          le->u.laser.pBeamEffect = PARTICLE_SYSTEM_INVALID_HANDLE;
        }
      }
    }
    else
    {
      particleSystem = le->u.tracer.particleSystem;
      if ( particleSystem )
      {
        ParticleManager::StopSystem(v7, particleSystem);
        le->u.tracer.particleSystem = PARTICLE_SYSTEM_INVALID_HANDLE;
      }
    }
  }
  next = le->next;
  le->ownerNum = 2047;
  if ( next )
  {
    if ( next->prev != le && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 133, ASSERT_TYPE_ASSERT, "(le->next->prev == le)", (const char *)&queryFormat, "le->next->prev == le") )
      __debugbreak();
    le->next->prev = le->prev;
    if ( le->next->prev == le->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 135, ASSERT_TYPE_ASSERT, "(le->next->prev != le->next)", (const char *)&queryFormat, "le->next->prev != le->next") )
      __debugbreak();
    le->next = NULL;
  }
  else
  {
    prev = le->prev;
    v13 = cg_localEntityCount[v4] == 1;
    cg_localEntityNewest[v4] = prev;
    if ( !v13 && !prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 141, ASSERT_TYPE_ASSERT, "((cg_localEntityCount[localClientNum] == 1) || (cg_localEntityNewest[localClientNum] != nullptr))", (const char *)&queryFormat, "(cg_localEntityCount[localClientNum] == 1) || (cg_localEntityNewest[localClientNum] != nullptr)") )
      __debugbreak();
  }
  v14 = le->prev;
  if ( v14 )
  {
    if ( v14->next != le && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 146, ASSERT_TYPE_ASSERT, "(le->prev->next == le)", (const char *)&queryFormat, "le->prev->next == le") )
      __debugbreak();
    le->prev->next = next;
    if ( le->prev->next == le->prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 148, ASSERT_TYPE_ASSERT, "(le->prev->next != le->prev)", (const char *)&queryFormat, "le->prev->next != le->prev") )
      __debugbreak();
    le->prev = NULL;
  }
  else
  {
    v13 = cg_localEntityCount[v4] == 1;
    cg_localEntityOldest[v4] = next;
    if ( !v13 && !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 154, ASSERT_TYPE_ASSERT, "((cg_localEntityCount[localClientNum] == 1) || (cg_localEntityOldest[localClientNum] != nullptr))", (const char *)&queryFormat, "(cg_localEntityCount[localClientNum] == 1) || (cg_localEntityOldest[localClientNum] != nullptr)") )
      __debugbreak();
  }
  v15 = le - v5;
  if ( v15 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned __int64 __cdecl truncate_cast_impl<unsigned __int64,__int64>(__int64)", "unsigned", le - v5, "signed", le - v5) )
    __debugbreak();
  if ( (unsigned int)v15 >= LODWORD(cg_localEntityCount[v4]) )
  {
    LODWORD(v39) = cg_localEntityCount[v4];
    LODWORD(v38) = le - v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 159, ASSERT_TYPE_ASSERT, "(unsigned)( freeIndex ) < (unsigned)( cg_localEntityCount[localClientNum] )", "freeIndex doesn't index cg_localEntityCount[localClientNum]\n\t%i not in [0, %i)", v38, v39) )
      __debugbreak();
  }
  v16 = cg_localEntityCount[v4];
  if ( v15 + 1 != v16 )
  {
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 163, ASSERT_TYPE_ASSERT, "(cg_localEntityCount[localClientNum] != 0)", (const char *)&queryFormat, "cg_localEntityCount[localClientNum] != 0") )
      __debugbreak();
    _RAX = le;
    v18 = &v5[cg_localEntityCount[v4] - 1];
    _RCX = v18;
    do
    {
      _RAX = (localEntity_s *)((char *)_RAX + 128);
      __asm { vmovups xmm0, xmmword ptr [rcx] }
      _RCX = (localEntity_s *)((char *)_RCX + 128);
      __asm
      {
        vmovups xmmword ptr [rax-80h], xmm0
        vmovups xmm1, xmmword ptr [rcx-70h]
        vmovups xmmword ptr [rax-70h], xmm1
        vmovups xmm0, xmmword ptr [rcx-60h]
        vmovups xmmword ptr [rax-60h], xmm0
        vmovups xmm1, xmmword ptr [rcx-50h]
        vmovups xmmword ptr [rax-50h], xmm1
        vmovups xmm0, xmmword ptr [rcx-40h]
        vmovups xmmword ptr [rax-40h], xmm0
        vmovups xmm1, xmmword ptr [rcx-30h]
        vmovups xmmword ptr [rax-30h], xmm1
        vmovups xmm0, xmmword ptr [rcx-20h]
        vmovups xmmword ptr [rax-20h], xmm0
        vmovups xmm1, xmmword ptr [rcx-10h]
        vmovups xmmword ptr [rax-10h], xmm1
      }
      --v6;
    }
    while ( v6 );
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups xmmword ptr [rax], xmm0
      vmovups xmm1, xmmword ptr [rcx+10h]
      vmovups xmmword ptr [rax+10h], xmm1
      vmovups xmm0, xmmword ptr [rcx+20h]
      vmovups xmmword ptr [rax+20h], xmm0
      vmovups xmm1, xmmword ptr [rcx+30h]
      vmovups xmmword ptr [rax+30h], xmm1
    }
    v18->next = NULL;
    v18->prev = NULL;
    ballisticInstance = le->u.tracer.ballistics.ballisticInstance;
    if ( ballisticInstance )
      ballisticInstance->tracer = le;
    if ( cg_localEntityNewest[v4] == v18 )
      cg_localEntityNewest[v4] = le;
    if ( cg_localEntityOldest[v4] == v18 )
      cg_localEntityOldest[v4] = le;
    if ( le->next )
      le->next->prev = le;
    v33 = le->prev;
    if ( v33 )
      v33->next = le;
    if ( le == le->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 194, ASSERT_TYPE_ASSERT, "(le != le->next)", (const char *)&queryFormat, "le != le->next") )
      __debugbreak();
    if ( le == le->prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 195, ASSERT_TYPE_ASSERT, "(le != le->prev)", (const char *)&queryFormat, "le != le->prev") )
      __debugbreak();
    if ( cg_localEntityCount[v4] != 2 && !le->next && !le->prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 196, ASSERT_TYPE_ASSERT, "((cg_localEntityCount[localClientNum] == 2) || le->next || le->prev)", (const char *)&queryFormat, "(cg_localEntityCount[localClientNum] == 2) || le->next || le->prev") )
      __debugbreak();
    v16 = cg_localEntityCount[v4];
  }
  cg_localEntityCount[v4] = v16 - 1;
  if ( ((unsigned __int64)&g_localEntReadOnlyThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_localEntReadOnlyThread) )
    __debugbreak();
  if ( _InterlockedIncrement(&g_localEntReadOnlyThread) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 202, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_localEntReadOnlyThread ) == 0)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_localEntReadOnlyThread ) == 0") )
    __debugbreak();
  v34 = cg_localEntityNewest[v4];
  if ( cg_localEntityCount[v4] )
  {
    if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 211, ASSERT_TYPE_ASSERT, "(cg_localEntityNewest[localClientNum] != nullptr)", (const char *)&queryFormat, "cg_localEntityNewest[localClientNum] != nullptr") )
      __debugbreak();
    if ( !cg_localEntityOldest[v4] )
    {
      v35 = "cg_localEntityOldest[localClientNum] != nullptr";
      v36 = 212;
      v37 = "(cg_localEntityOldest[localClientNum] != nullptr)";
LABEL_107:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", v36, ASSERT_TYPE_ASSERT, v37, (const char *)&queryFormat, v35) )
        __debugbreak();
    }
  }
  else
  {
    if ( v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 206, ASSERT_TYPE_ASSERT, "(cg_localEntityNewest[localClientNum] == nullptr)", (const char *)&queryFormat, "cg_localEntityNewest[localClientNum] == nullptr") )
      __debugbreak();
    if ( cg_localEntityOldest[v4] )
    {
      v35 = "cg_localEntityOldest[localClientNum] == nullptr";
      v36 = 207;
      v37 = "(cg_localEntityOldest[localClientNum] == nullptr)";
      goto LABEL_107;
    }
  }
}

/*
==============
CG_GetLaserLocalEntityByOwner
==============
*/
localEntity_s *CG_GetLaserLocalEntityByOwner(const LocalClientNum_t localClientNum, const int ownerNum, leType_t leType, const bool isSecondaryLaser)
{
  localEntity_s *v4; 
  __int64 v5; 
  localEntity_s *v9; 
  localEntity_s *v10; 

  v4 = NULL;
  v5 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_maxLocalClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 287, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_maxLocalClients )", "localClientNum doesn't index cg_maxLocalClients\n\t%i not in [0, %i)", localClientNum, cg_maxLocalClients) )
    __debugbreak();
  if ( ((unsigned __int8)g_localEntThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", g_localEntThread) )
    __debugbreak();
  if ( _InterlockedIncrement(g_localEntThread) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 289, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_localEntThread ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_localEntThread ) == 1") )
    __debugbreak();
  v9 = cg_localEntities[v5];
  v10 = &v9[cg_localEntityCount[v5]];
  if ( v9 < v10 )
  {
    while ( v9->leType != leType || v9->ownerNum != ownerNum || v9->u.laser.isSecondaryLaser != isSecondaryLaser )
    {
      if ( ++v9 >= v10 )
        goto LABEL_17;
    }
    v4 = v9;
  }
LABEL_17:
  if ( ((unsigned __int64)g_localEntThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", g_localEntThread) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(g_localEntThread, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 308, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_localEntThread ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_localEntThread ) == 0") )
    __debugbreak();
  return v4;
}

/*
==============
CG_GetLocalEntityTypeForTrackingBeamTracer
==============
*/
__int64 CG_GetLocalEntityTypeForTrackingBeamTracer(int shotIndex)
{
  if ( (unsigned int)shotIndex <= 6 )
    return (unsigned int)(shotIndex + 2);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 787, ASSERT_TYPE_ASSERT, "(shotIndex >= 0 && shotIndex < 7)", (const char *)&queryFormat, "shotIndex >= 0 && shotIndex < BEAM_ENT_BONE_PAIR_COUNT") )
    __debugbreak();
  return (unsigned int)(shotIndex + 2);
}

/*
==============
CG_GetTracerLocalEntityByBulletId
==============
*/
localEntity_s *CG_GetTracerLocalEntityByBulletId(const LocalClientNum_t localClientNum, const int bulletId)
{
  __int64 v3; 
  localEntity_s *result; 
  localEntity_s *v5; 
  int v7; 

  v3 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_maxLocalClients )
  {
    v7 = cg_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 316, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_maxLocalClients )", "localClientNum doesn't index cg_maxLocalClients\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  result = cg_localEntities[v3];
  v5 = &result[cg_localEntityCount[v3] - 1];
  if ( result > v5 )
    return 0i64;
  while ( result->leType || result->u.tracer.bulletId != bulletId )
  {
    if ( ++result > v5 )
      return 0i64;
  }
  return result;
}

/*
==============
CG_InitLocalEntities
==============
*/
void CG_InitLocalEntities(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  localEntity_s **v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 

  v1 = localClientNum;
  if ( !cg_localEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 68, ASSERT_TYPE_ASSERT, "(cg_localEntities)", "%s\n\tTrying to access unallocated cg_localEntities for localClientNum %i", "cg_localEntities", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v1 >= cg_maxLocalClients )
  {
    LODWORD(v5) = cg_maxLocalClients;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 69, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_maxLocalClients )", "localClientNum doesn't index cg_maxLocalClients\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = cg_localEntities;
  v3 = 0i64;
  cg_localEntityCount[v1] = 0i64;
  cg_localEntityNewest[v1] = NULL;
  cg_localEntityOldest[v1] = NULL;
  do
    v2[v1][v3++].ownerNum = 2047;
  while ( v3 < 127 );
}

/*
==============
CG_IsStillFiringValidBeamWeapon
==============
*/
bool CG_IsStillFiringValidBeamWeapon(localEntity_s *le, const Weapon *r_currentWeapon, const bool isAlternate, const bool isFiring)
{
  weapFireType_t WeaponFireType; 
  bool v9; 
  bool result; 

  if ( !le && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 339, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
    __debugbreak();
  result = 0;
  if ( isFiring && isAlternate == le->u.laser.isAlternate && !memcmp_0(r_currentWeapon, &le->u.laser.weapon, 0x3Cui64) )
  {
    WeaponFireType = BG_GetWeaponFireType(r_currentWeapon, isAlternate);
    v9 = BG_GetWeaponClass(r_currentWeapon, isAlternate) == WEAPCLASS_TURRET;
    if ( WeaponFireType == WEAPON_FIRETYPE_BEAM || v9 )
      return 1;
  }
  return result;
}

/*
==============
CG_LocalEntityTypeIsBeamTracer
==============
*/
bool CG_LocalEntityTypeIsBeamTracer(leType_t type)
{
  return (unsigned int)(type - 1) <= 8;
}

/*
==============
CG_LocalEntity_BeamTargetsUpdate
==============
*/
void CG_LocalEntity_BeamTargetsUpdate(const LocalClientNum_t localClientNum, const centity_t *attackerEnt, const int targetCount, const ntl::fixed_array<CAssistTarget,20> *targetArray)
{
  __int64 v4; 
  __int64 v6; 
  const centity_t *v7; 
  __int64 v8; 
  localEntity_s *v9; 
  const char *v10; 
  const char *v11; 
  __int64 ownerNum; 
  CgEntitySystem *v13; 
  int trackedEntNum; 
  const ntl::fixed_array<CAssistTarget,20> *v15; 
  scr_string_t trackedEntTag; 
  unsigned __int64 v17; 
  ConeTargetInfo *v18; 
  ConeTargetHitResults *HitResults; 
  ConeTargetHitResults *v20; 
  __int64 v21; 
  __int64 v22; 

  v4 = targetCount;
  v6 = localClientNum;
  v7 = attackerEnt;
  if ( !attackerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 843, ASSERT_TYPE_ASSERT, "(attackerEnt)", (const char *)&queryFormat, "attackerEnt") )
    __debugbreak();
  if ( !targetArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 844, ASSERT_TYPE_ASSERT, "(targetArray)", (const char *)&queryFormat, "targetArray") )
    __debugbreak();
  if ( ((unsigned __int8)g_localEntThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", g_localEntThread) )
    __debugbreak();
  if ( _InterlockedIncrement(g_localEntThread) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 846, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_localEntThread ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_localEntThread ) == 1") )
    __debugbreak();
  v8 = v4;
  v9 = cg_localEntities[v6];
  if ( v9 < &v9[cg_localEntityCount[v6]] )
  {
    v10 = "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n";
    v11 = "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)";
    while ( 1 )
    {
      if ( (unsigned int)(v9->leType - 1) > 8 )
        goto LABEL_47;
      ownerNum = v9->ownerNum;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v22) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v22) )
          __debugbreak();
        v11 = "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)";
      }
      if ( (unsigned int)v6 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v22) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v21) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v6] )
      {
        LODWORD(v22) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v22) )
          __debugbreak();
      }
      v13 = CgEntitySystem::ms_entitySystemArray[v6];
      if ( (unsigned int)ownerNum >= 0x800 )
      {
        LODWORD(v22) = 2048;
        LODWORD(v21) = ownerNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      if ( (v13->m_entities[ownerNum].flags & 1) == 0 )
        goto LABEL_47;
      if ( &v13->m_entities[ownerNum] != v7 )
        goto LABEL_47;
      trackedEntNum = v9->u.laser.trackedEntNum;
      if ( trackedEntNum == 2047 || v9->leType == LE_TRACKING_BEAM_TRACER_FIRST )
        goto LABEL_47;
      v15 = targetArray;
      trackedEntTag = v9->u.laser.trackedEntTag;
      if ( !targetArray )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 820, ASSERT_TYPE_ASSERT, "(targetArray)", (const char *)&queryFormat, "targetArray") )
          __debugbreak();
        v15 = NULL;
      }
      v17 = 0i64;
      if ( v8 > 0 )
        break;
LABEL_46:
      CG_FreeLocalEntityAndCompact((const LocalClientNum_t)v6, v9);
LABEL_48:
      v10 = "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n";
      v7 = attackerEnt;
      v11 = "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)";
      if ( v9 >= &cg_localEntities[v6][cg_localEntityCount[v6]] )
        goto LABEL_49;
    }
    v18 = (ConeTargetInfo *)v15;
    while ( 1 )
    {
      if ( v17 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( ((unsigned int (__fastcall *)(ConeTargetInfo *, const char *, const char *))v18->GetEntNum)(v18, v10, v11) == trackedEntNum )
      {
        HitResults = (ConeTargetHitResults *)ConeTargetInfo::GetHitResults(v18);
        if ( ConeTargetHitResults::GetFirstVisibleHit(HitResults) )
        {
          v20 = (ConeTargetHitResults *)ConeTargetInfo::GetHitResults(v18);
          if ( ConeTargetHitResults::GetFirstVisibleHit(v20)->tagName == trackedEntTag )
            break;
        }
      }
      ++v17;
      v18 = (ConeTargetInfo *)((char *)v18 + 848);
      if ( (__int64)v17 >= v8 )
        goto LABEL_46;
    }
LABEL_47:
    ++v9;
    goto LABEL_48;
  }
LABEL_49:
  if ( ((unsigned __int64)g_localEntThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", g_localEntThread) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(g_localEntThread, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 877, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_localEntThread ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_localEntThread ) == 0") )
    __debugbreak();
}

/*
==============
CG_LocalEntity_FreeOwnerEntity
==============
*/
void CG_LocalEntity_FreeOwnerEntity(const LocalClientNum_t localClientNum, const int entityNum)
{
  __int64 v2; 
  localEntity_s **v4; 
  localEntity_s *v5; 
  int v7; 

  v2 = localClientNum;
  if ( (unsigned int)entityNum >= 0x800 )
  {
    v7 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 795, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( (( 2048 ) + 0) )", "entityNum doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", entityNum, v7) )
      __debugbreak();
  }
  if ( ((unsigned __int8)g_localEntThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", g_localEntThread) )
    __debugbreak();
  if ( _InterlockedIncrement(g_localEntThread) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 797, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_localEntThread ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_localEntThread ) == 1") )
    __debugbreak();
  v4 = cg_localEntities;
  v5 = cg_localEntities[v2];
  if ( v5 < &v5[cg_localEntityCount[v2]] )
  {
    do
    {
      if ( v5->ownerNum == entityNum )
      {
        CG_FreeLocalEntityAndCompact((const LocalClientNum_t)v2, v5);
        v4 = cg_localEntities;
      }
      else
      {
        ++v5;
      }
    }
    while ( v5 < &v4[v2][cg_localEntityCount[v2]] );
  }
  if ( ((unsigned __int64)g_localEntThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", g_localEntThread) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(g_localEntThread, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 813, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_localEntThread ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_localEntThread ) == 0") )
    __debugbreak();
}

/*
==============
CG_LocalEntity_PreAddDObjUpdate
==============
*/
void CG_LocalEntity_PreAddDObjUpdate(const LocalClientNum_t localClientNum, const int entityNum)
{
  __int64 v2; 
  localEntity_s *v4; 
  leType_t leType; 

  v2 = localClientNum;
  Profile_Begin(802);
  if ( ((unsigned __int8)g_localEntThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", g_localEntThread) )
    __debugbreak();
  if ( _InterlockedIncrement(g_localEntThread) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 948, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_localEntThread ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_localEntThread ) == 1") )
    __debugbreak();
  CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
  v4 = cg_localEntities[v2];
  if ( v4 < &v4[cg_localEntityCount[v2]] )
  {
    do
    {
      leType = v4->leType;
      if ( leType == LE_BEAM_SCRIPTED )
      {
        CG_ScriptedBeamPreAddDObjUpdate((LocalClientNum_t)v2, v4, entityNum);
      }
      else if ( (unsigned int)(leType - 1) <= 8 )
      {
        CG_LaserBeamPreAddDObjUpdate((LocalClientNum_t)v2, v4, entityNum);
      }
      ++v4;
    }
    while ( v4 < &cg_localEntities[v2][cg_localEntityCount[v2]] );
  }
  if ( ((unsigned __int64)g_localEntThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", g_localEntThread) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(g_localEntThread, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 972, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_localEntThread ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_localEntThread ) == 0") )
    __debugbreak();
  Profile_EndInternal(NULL);
}

/*
==============
CG_LocalEntity_ResetWorkIndex
==============
*/
void CG_LocalEntity_ResetWorkIndex(const LocalClientNum_t localClientNum)
{
  __int64 v1; 

  v1 = localClientNum;
  if ( ((unsigned __int8)&g_localEntReadOnlyThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_localEntReadOnlyThread) )
    __debugbreak();
  if ( _InterlockedDecrement(&g_localEntReadOnlyThread) != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 982, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_localEntReadOnlyThread ) == -1)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_localEntReadOnlyThread ) == -1") )
    __debugbreak();
  cg_localEntityWorkIndex[v1] = -1;
  if ( ((unsigned __int64)&g_localEntReadOnlyThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_localEntReadOnlyThread) )
    __debugbreak();
  if ( _InterlockedIncrement(&g_localEntReadOnlyThread) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 988, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_localEntReadOnlyThread ) == 0)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_localEntReadOnlyThread ) == 0") )
      __debugbreak();
  }
}

/*
==============
CG_UpdateLocalEntities
==============
*/
void CG_UpdateLocalEntities(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  localEntity_s *v4; 
  __int64 ownerNum; 
  CgEntitySystem *v6; 
  __int64 v7; 
  __int64 trackedEntNum; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v9; 
  char v10; 
  CgEntitySystem *v11; 
  char v12; 
  CgWeaponMap *v13; 
  const Weapon *ViewmodelWeapon; 
  __int64 p_weapFlags; 
  char v16; 
  bool v17; 
  const Weapon *v18; 
  const Weapon *Weapon; 
  const Weapon *v20; 
  __int64 v21; 
  __int64 v22; 

  v1 = localClientNum;
  if ( ((unsigned __int8)g_localEntThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", g_localEntThread) )
    __debugbreak();
  if ( _InterlockedIncrement(g_localEntThread) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 374, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_localEntThread ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_localEntThread ) == 1") )
    __debugbreak();
  v2 = v1;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  v4 = cg_localEntities[v1];
  if ( v4 < &v4[cg_localEntityCount[v1]] )
  {
    while ( 1 )
    {
      if ( (unsigned int)(v4->leType - 1) > 8 )
      {
LABEL_62:
        ++v4;
        goto LABEL_63;
      }
      ownerNum = v4->ownerNum;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v22) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v22) )
          __debugbreak();
      }
      if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v22) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v21) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v2] )
      {
        LODWORD(v22) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v22) )
          __debugbreak();
      }
      v6 = CgEntitySystem::ms_entitySystemArray[v2];
      if ( (unsigned int)ownerNum >= 0x800 )
      {
        LODWORD(v22) = 2048;
        LODWORD(v21) = ownerNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      v7 = 760 * ownerNum;
      trackedEntNum = v4->u.laser.trackedEntNum;
      v9 = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)((char *)v6 + v7);
      v10 = v9[166].m_flags[0] & 1;
      if ( (_DWORD)trackedEntNum == 2047 )
      {
        v12 = 1;
      }
      else
      {
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v22) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v22) )
            __debugbreak();
        }
        if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v22) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v21) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v2] )
        {
          LODWORD(v22) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v22) )
            __debugbreak();
        }
        v11 = CgEntitySystem::ms_entitySystemArray[v2];
        if ( (unsigned int)trackedEntNum >= 0x800 )
        {
          LODWORD(v22) = 2048;
          LODWORD(v21) = trackedEntNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        v12 = v11->m_entities[trackedEntNum].flags & 1;
      }
      if ( v10 && v12 )
        break;
LABEL_61:
      CG_FreeLocalEntityAndCompact((const LocalClientNum_t)v1, v4);
LABEL_63:
      if ( v4 >= &cg_localEntities[v2][cg_localEntityCount[v2]] )
        goto LABEL_64;
    }
    if ( v4->leType == LE_BEAM_SCRIPTED )
      goto LABEL_62;
    if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v13 = CgWeaponMap::ms_instance[v2];
    if ( SLOWORD(v9[104].m_flags[0]) != LocalClientGlobals->predictedPlayerState.clientNum )
    {
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( v9 == (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      Weapon = BgWeaponMap::GetWeapon(v13, (BgWeaponHandle)v9[137].m_flags[0]);
      v16 = HIBYTE(v9[106].m_flags[0]);
      v20 = Weapon;
      v17 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v9 + 107, ACTIVE, 0xAu);
      v18 = v20;
LABEL_60:
      if ( CG_IsStillFiringValidBeamWeapon(v4, v18, v16, v17) )
        goto LABEL_62;
      goto LABEL_61;
    }
    ViewmodelWeapon = BG_GetViewmodelWeapon(v13, &LocalClientGlobals->predictedPlayerState);
    if ( LocalClientGlobals == (cg_t *)-8i64 )
    {
      p_weapFlags = 1832i64;
    }
    else
    {
      p_weapFlags = (__int64)&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags;
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x22u) )
        goto LABEL_51;
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x11u) )
      {
LABEL_50:
        v16 = 1;
LABEL_52:
        v17 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 0xAu);
        v18 = ViewmodelWeapon;
        goto LABEL_60;
      }
    }
    if ( LocalClientGlobals != (cg_t *)-8i64 && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x1Bu) )
      goto LABEL_50;
LABEL_51:
    v16 = 0;
    goto LABEL_52;
  }
LABEL_64:
  if ( ((unsigned __int64)g_localEntThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", g_localEntThread) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(g_localEntThread, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 438, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_localEntThread ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_localEntThread ) == 0") )
    __debugbreak();
}

