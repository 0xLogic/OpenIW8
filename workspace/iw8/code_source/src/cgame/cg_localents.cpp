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
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  int endTime; 
  bool v13; 
  int time; 
  int simStartTime; 
  int v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  float v28; 
  float v29; 
  __int128 v30; 
  int startTime; 
  const dvar_t *v34; 
  const char *v35; 
  double Float_Internal_DebugName; 
  const dvar_t *v37; 
  float length; 
  __m128 v40; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  ParticleSystemHandle particleSystem; 
  float v0; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v1[4]; 
  __int128 v59; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 526, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !le && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 527, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
    __debugbreak();
  if ( le->leType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 528, ASSERT_TYPE_ASSERT, "(le->leType == LE_MOVING_TRACER)", (const char *)&queryFormat, "le->leType == LE_MOVING_TRACER") )
    __debugbreak();
  if ( !drawTracerCb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 529, ASSERT_TYPE_ASSERT, "(drawTracerCb)", (const char *)&queryFormat, "drawTracerCb") )
    __debugbreak();
  endTime = le->endTime;
  v13 = endTime != 0x7FFFFFFF && 1.0 == le->u.tracer.ballistics.lastInterpRate;
  time = cgameGlob->time;
  if ( time >= endTime || v13 )
  {
    particleSystem = le->u.tracer.particleSystem;
    if ( particleSystem )
    {
      ParticleManager::StopSystem((ParticleManager *)data, particleSystem);
      le->u.tracer.particleSystem = PARTICLE_SYSTEM_INVALID_HANDLE;
    }
  }
  else
  {
    simStartTime = le->u.tracer.ballistics.simStartTime;
    v16 = le->u.tracer.ballistics.simFinishTime - simStartTime;
    v62 = v4;
    v61 = v5;
    v60 = v6;
    v59 = v7;
    if ( v16 <= 0 )
    {
      v18 = FLOAT_1_0;
    }
    else
    {
      v17 = (float)(time - simStartTime) / (float)v16;
      I_fclamp(v17, 0.0, 1.0);
      v18 = v17;
    }
    if ( endTime != 0x7FFFFFFF )
      le->u.tracer.ballistics.lastInterpRate = v18;
    v19 = le->u.tracer.ballistics.tracerStartPos.v[0] - le->u.tracer.ballistics.startPos.v[0];
    v20 = le->u.tracer.ballistics.tracerStartPos.v[2] - le->u.tracer.ballistics.startPos.v[2];
    v21 = le->u.tracer.ballistics.simFinishPos.v[0] - le->u.tracer.ballistics.simStartPos.v[0];
    v22 = le->u.tracer.ballistics.tracerStartPos.v[1] - le->u.tracer.ballistics.startPos.v[1];
    v23 = le->u.tracer.ballistics.simFinishPos.v[1] - le->u.tracer.ballistics.simStartPos.v[1];
    v24 = le->u.tracer.ballistics.simFinishPos.v[2] - le->u.tracer.ballistics.simStartPos.v[2];
    v52 = (float)(v21 * v18) + le->u.tracer.ballistics.simStartPos.v[0];
    v53 = (float)(v23 * v18) + le->u.tracer.ballistics.simStartPos.v[1];
    v54 = (float)(v24 * v18) + le->u.tracer.ballistics.simStartPos.v[2];
    v0 = v21;
    v50 = v23;
    v51 = v24;
    v1[0] = 0.0;
    v1[1] = 0.0;
    v1[2] = 0.0;
    if ( VecNCompareCustomEpsilon(&v0, v1, 0.001, 3) )
    {
      v25 = le->u.tracer.ballistics.lastDir.v[1];
      v0 = le->u.tracer.ballistics.lastDir.v[0];
      v26 = le->u.tracer.ballistics.lastDir.v[2];
    }
    else
    {
      v27 = LODWORD(v50);
      v28 = v0;
      v29 = v51;
      v30 = v27;
      *(float *)&v30 = (float)((float)(*(float *)&v27 * *(float *)&v27) + (float)(v28 * v28)) + (float)(v29 * v29);
      if ( *(float *)&v30 <= 0.0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
          __debugbreak();
        v28 = v0;
        *(float *)&v27 = v50;
        v29 = v51;
      }
      _XMM1 = v30;
      __asm { vrsqrtss xmm3, xmm1, xmm1 }
      v25 = *(float *)&v27 * *(float *)&_XMM3;
      v26 = v29 * *(float *)&_XMM3;
      v0 = v28 * *(float *)&_XMM3;
      le->u.tracer.ballistics.lastDir.v[0] = v28 * *(float *)&_XMM3;
      le->u.tracer.ballistics.lastDir.v[1] = *(float *)&v27 * *(float *)&_XMM3;
      le->u.tracer.ballistics.lastDir.v[2] = v29 * *(float *)&_XMM3;
    }
    startTime = le->u.tracer.ballistics.startTime;
    v51 = v26;
    v50 = v25;
    if ( cgameGlob->time == startTime )
    {
      if ( le->u.tracer.ballistics.isPlayerView )
      {
        v34 = DCONST_DVARFLT_tracer_muzzleOffsetViewmodel;
        v35 = "tracer_muzzleOffsetViewmodel";
      }
      else
      {
        v34 = DCONST_DVARFLT_tracer_muzzleOffsetWorldmodel;
        v35 = "tracer_muzzleOffsetWorldmodel";
      }
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v34, v35);
      v52 = (float)(*(float *)&Float_Internal_DebugName * v0) + le->u.tracer.ballistics.simStartPos.v[0];
      v53 = (float)(*(float *)&Float_Internal_DebugName * v50) + le->u.tracer.ballistics.simStartPos.v[1];
      v54 = (float)(*(float *)&Float_Internal_DebugName * v51) + le->u.tracer.ballistics.simStartPos.v[2];
    }
    v37 = DCONST_DVARINT_bg_ballisticsMuzzleOffsetBlendMs;
    if ( !DCONST_DVARINT_bg_ballisticsMuzzleOffsetBlendMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsMuzzleOffsetBlendMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    length = le->u.tracer.length;
    v40 = _mm_cvtepi32_ps((__m128i)(unsigned int)(cgameGlob->time - le->u.tracer.ballistics.startTime));
    v40.m128_f32[0] = v40.m128_f32[0] / _mm_cvtepi32_ps((__m128i)v37->current.unsignedInt).m128_f32[0];
    _XMM1 = v40;
    __asm { vminss  xmm2, xmm1, xmm7 }
    v42 = (float)(v19 * (float)(1.0 - *(float *)&_XMM2)) + v52;
    v43 = (float)(v22 * (float)(1.0 - *(float *)&_XMM2)) + v53;
    v44 = (float)(v20 * (float)(1.0 - *(float *)&_XMM2)) + v54;
    v45 = (float)((float)((float)(v43 - le->u.tracer.ballistics.tracerStartPos.v[1]) * (float)(v43 - le->u.tracer.ballistics.tracerStartPos.v[1])) + (float)((float)(v42 - le->u.tracer.ballistics.tracerStartPos.v[0]) * (float)(v42 - le->u.tracer.ballistics.tracerStartPos.v[0]))) + (float)((float)(v44 - le->u.tracer.ballistics.tracerStartPos.v[2]) * (float)(v44 - le->u.tracer.ballistics.tracerStartPos.v[2]));
    v52 = v42;
    v53 = v43;
    v54 = v44;
    if ( v45 >= (float)(length * length) )
    {
      LODWORD(v47) = LODWORD(length) ^ _xmm;
      v55 = (float)(v47 * v0) + v42;
      v57 = (float)(v47 * v51) + v44;
      v56 = (float)(v47 * v50) + v43;
    }
    else
    {
      LODWORD(v46) = COERCE_UNSIGNED_INT(fsqrt(v45)) ^ _xmm;
      v55 = (float)(v46 * v0) + v42;
      v57 = (float)(v46 * v51) + v44;
      v56 = (float)(v46 * v50) + v43;
    }
    ((void (__fastcall *)(float *, float *, float *))drawTracerCb)(&v55, &v52, &v0);
  }
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
  __int128 v4; 
  float v8; 
  float v9; 
  float v10; 
  __int128 v11; 
  float v12; 
  __int128 v13; 
  float v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  __int128 v21; 
  __int128 v22; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v27; 
  float v28; 
  __int128 v29; 
  float length; 
  __int128 length_low; 
  bool v40; 
  float v41; 
  int v42; 
  float v43; 
  float v44; 
  float v45; 
  vec3_t result; 
  int v47[4]; 
  int v48[4]; 
  __int128 v49; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 446, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !le && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 447, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
    __debugbreak();
  if ( le->leType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 448, ASSERT_TYPE_ASSERT, "(le->leType == LE_MOVING_TRACER)", (const char *)&queryFormat, "le->leType == LE_MOVING_TRACER") )
    __debugbreak();
  if ( !drawTracerCb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 449, ASSERT_TYPE_ASSERT, "(drawTracerCb)", (const char *)&queryFormat, "drawTracerCb") )
    __debugbreak();
  if ( cgameGlob->time >= le->pos.trTime )
  {
    v8 = le->pos.trDelta.v[0];
    v9 = le->pos.trDelta.v[2];
    if ( (float)((float)((float)(v8 * v8) + (float)(le->pos.trDelta.v[1] * le->pos.trDelta.v[1])) + (float)(v9 * v9)) <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 459, ASSERT_TYPE_ASSERT, "(Vec3LengthSq( le->pos.trDelta ) > 1.0E-6)", "%s\n\tZero length tracer encountered.  trDelta (%0.2f, %0.2f, %0.2f)", "Vec3LengthSq( le->pos.trDelta ) > ZERO_EPSILON", v8, le->pos.trDelta.v[1], v9) )
      __debugbreak();
    BgTrajectory::LegacyEvaluateTrajectory(&le->pos, cgameGlob->time, &result);
    if ( ((LODWORD(le->pos.trDelta.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(le->pos.trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(le->pos.trDelta.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 465, ASSERT_TYPE_SANITY, "( !IS_NAN( ( le->pos.trDelta )[0] ) && !IS_NAN( ( le->pos.trDelta )[1] ) && !IS_NAN( ( le->pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( le->pos.trDelta )[0] ) && !IS_NAN( ( le->pos.trDelta )[1] ) && !IS_NAN( ( le->pos.trDelta )[2] )") )
      __debugbreak();
    v10 = le->pos.trDelta.v[1];
    v11 = LODWORD(le->pos.trDelta.v[0]);
    v12 = le->pos.trDelta.v[2];
    v13 = v11;
    *(float *)&v13 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(v10 * v10)) + (float)(v12 * v12));
    _XMM3 = v13;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm11, xmm0
    }
    v17 = v10 * (float)(1.0 / *(float *)&_XMM0);
    v18 = v12 * (float)(1.0 / *(float *)&_XMM0);
    v19 = *(float *)&v11 * (float)(1.0 / *(float *)&_XMM0);
    v45 = v18;
    v43 = v19;
    v44 = v17;
    if ( *(float *)&v13 > 0.000001 || le->u.tracer.isInstantaneousBeam )
    {
      v20 = LODWORD(result.v[1]);
      *(float *)&v20 = (float)(result.v[1] - le->pos.trBase.v[1]) * v17;
      v21 = v20;
      v23 = LODWORD(result.v[2]);
      *(float *)&v23 = result.v[2] - le->pos.trBase.v[2];
      v22 = v23;
      v25 = v21;
      *(float *)&v25 = *(float *)&v21 + (float)((float)(result.v[0] - le->pos.trBase.v[0]) * v19);
      v24 = v25;
      v27 = v22;
      *(float *)&v27 = *(float *)&v22 * v18;
      _XMM1 = v27;
      v49 = v4;
      v29 = v24;
      *(float *)&v29 = *(float *)&v24 + *(float *)&_XMM1;
      v28 = *(float *)&v24 + *(float *)&_XMM1;
      if ( (float)(*(float *)&v24 + *(float *)&_XMM1) < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 478, ASSERT_TYPE_SANITY, "( ( lengthBaseToStart >= 0.0f ) )", "( lengthBaseToStart ) = %g", *(float *)&v29) )
        __debugbreak();
      _XMM6 = LODWORD(le->u.tracer.clipDist);
      length = le->u.tracer.length;
      if ( le->u.tracer.isInstantaneousBeam )
      {
        length_low = LODWORD(le->u.tracer.length);
        *(float *)&length_low = length + v28;
        _XMM0 = length_low;
        __asm
        {
          vminss  xmm8, xmm0, xmm6
          vminss  xmm9, xmm6, xmm7
        }
      }
      else
      {
        *(float *)&v29 = *(float *)&v29 - length;
        _XMM8 = v29;
        if ( *(float *)&_XMM6 < 0.0 )
        {
          __asm { vxorpd  xmm1, xmm1, xmm1 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&_XMM1, *(float *)&_XMM6) )
            __debugbreak();
        }
        _XMM1 = LODWORD(le->u.tracer.clipDist);
        __asm
        {
          vmaxss  xmm0, xmm8, xmm10
          vminss  xmm9, xmm0, xmm6
          vminss  xmm8, xmm1, xmm7
        }
      }
      if ( *(float *)&_XMM8 < *(float *)&_XMM9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 496, ASSERT_TYPE_ASSERT, "(headDist >= tailDist)", (const char *)&queryFormat, "headDist >= tailDist") )
        __debugbreak();
      v40 = le->u.tracer.isInstantaneousBeam == 0;
      *(float *)v47 = (float)(*(float *)&_XMM8 * v43) + le->pos.trBase.v[0];
      *(float *)&v47[1] = (float)(*(float *)&_XMM8 * v44) + le->pos.trBase.v[1];
      v41 = (float)(*(float *)&_XMM9 * v43) + le->pos.trBase.v[0];
      *(float *)&v47[2] = (float)(*(float *)&_XMM8 * v45) + le->pos.trBase.v[2];
      *(float *)&v42 = (float)(*(float *)&_XMM9 * v44) + le->pos.trBase.v[1];
      *(float *)v48 = v41;
      *(float *)&v48[2] = (float)(*(float *)&_XMM9 * v45) + le->pos.trBase.v[2];
      v48[1] = v42;
      if ( !v40 )
        I_fclamp(1.0 - (float)((float)(cgameGlob->time - le->pos.trTime) / (float)((float)le->endTime - (float)le->pos.trTime)), 0.0, 1.0);
      ((void (__fastcall *)(int *, int *, float *))drawTracerCb)(v48, v47, &v43);
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
  localEntity_s *v17; 
  localEntity_s *v18; 
  localEntity_s *v19; 
  __int128 v20; 
  CgBallisticInstance *ballisticInstance; 
  localEntity_s *v22; 
  localEntity_s *v23; 
  const char *v24; 
  int v25; 
  const char *v26; 
  __int64 v27; 
  __int64 v28; 

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
    LODWORD(v28) = 2;
    LODWORD(v27) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v27, v28) )
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
    LODWORD(v28) = cg_localEntityCount[v4];
    LODWORD(v27) = le - v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 159, ASSERT_TYPE_ASSERT, "(unsigned)( freeIndex ) < (unsigned)( cg_localEntityCount[localClientNum] )", "freeIndex doesn't index cg_localEntityCount[localClientNum]\n\t%i not in [0, %i)", v27, v28) )
      __debugbreak();
  }
  v16 = cg_localEntityCount[v4];
  if ( v15 + 1 != v16 )
  {
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 163, ASSERT_TYPE_ASSERT, "(cg_localEntityCount[localClientNum] != 0)", (const char *)&queryFormat, "cg_localEntityCount[localClientNum] != 0") )
      __debugbreak();
    v17 = le;
    v18 = &v5[cg_localEntityCount[v4] - 1];
    v19 = v18;
    do
    {
      v17 = (localEntity_s *)((char *)v17 + 128);
      v20 = *(_OWORD *)&v19->next;
      v19 = (localEntity_s *)((char *)v19 + 128);
      *(_OWORD *)&v17[-1].u.laser.cache.lastCurve.p3.z = v20;
      *(_OWORD *)&v17[-1].u.laser.cache.lastYaw = *(_OWORD *)&v19[-1].u.laser.cache.lastYaw;
      *(_OWORD *)&v17[-1].u.laser.trackedTagOffset.z = *(_OWORD *)&v19[-1].u.laser.trackedTagOffset.z;
      *(_OWORD *)&v17[-1].u.laser.attachedTag = *(_OWORD *)&v19[-1].u.laser.attachedTag;
      *(_OWORD *)&v17[-1].u.laser.weapon.weaponIdx = *(_OWORD *)&v19[-1].u.laser.weapon.weaponIdx;
      *(_OWORD *)&v17[-1].u.laser.weapon.weaponAttachments[2] = *(_OWORD *)&v19[-1].u.laser.weapon.weaponAttachments[2];
      *(_OWORD *)&v17[-1].u.laser.weapon.attachmentVariationIndices[5] = *(_OWORD *)&v19[-1].u.laser.weapon.attachmentVariationIndices[5];
      *(_OWORD *)&v17[-1].u.laser.weapon.attachmentVariationIndices[21] = *(_OWORD *)&v19[-1].u.laser.weapon.attachmentVariationIndices[21];
      --v6;
    }
    while ( v6 );
    *(_OWORD *)&v17->next = *(_OWORD *)&v19->next;
    *(_OWORD *)&v17->leType = *(_OWORD *)&v19->leType;
    *(_OWORD *)v17->pos.trBase.v = *(_OWORD *)v19->pos.trBase.v;
    *(_OWORD *)&v17->pos.trDelta.y = *(_OWORD *)&v19->pos.trDelta.y;
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
    v22 = le->prev;
    if ( v22 )
      v22->next = le;
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
  v23 = cg_localEntityNewest[v4];
  if ( cg_localEntityCount[v4] )
  {
    if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 211, ASSERT_TYPE_ASSERT, "(cg_localEntityNewest[localClientNum] != nullptr)", (const char *)&queryFormat, "cg_localEntityNewest[localClientNum] != nullptr") )
      __debugbreak();
    if ( !cg_localEntityOldest[v4] )
    {
      v24 = "cg_localEntityOldest[localClientNum] != nullptr";
      v25 = 212;
      v26 = "(cg_localEntityOldest[localClientNum] != nullptr)";
LABEL_107:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", v25, ASSERT_TYPE_ASSERT, v26, (const char *)&queryFormat, v24) )
        __debugbreak();
    }
  }
  else
  {
    if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_localents.cpp", 206, ASSERT_TYPE_ASSERT, "(cg_localEntityNewest[localClientNum] == nullptr)", (const char *)&queryFormat, "cg_localEntityNewest[localClientNum] == nullptr") )
      __debugbreak();
    if ( cg_localEntityOldest[v4] )
    {
      v24 = "cg_localEntityOldest[localClientNum] == nullptr";
      v25 = 207;
      v26 = "(cg_localEntityOldest[localClientNum] == nullptr)";
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

