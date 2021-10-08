/*
==============
CgBallistics::BuildTracerLinks
==============
*/

void __fastcall CgBallistics::BuildTracerLinks(CgBallistics *this)
{
  ?BuildTracerLinks@CgBallistics@@IEAAXXZ(this);
}

/*
==============
CgBallistics::GetWhizbySphere
==============
*/

bool __fastcall CgBallistics::GetWhizbySphere(CgBallistics *this, const vec3_t *bulletStartPos, const vec3_t *bulletEndPos, const vec3_t *localPlayerViewPos, vec3_t *outSoundCenterPoint, vec3_t *outBulletDirNormalized, float *outPlayerProjLengthOnBulletPath, float *outPlayerDistanceToBulletPath)
{
  return ?GetWhizbySphere@CgBallistics@@IEBA_NAEBTvec3_t@@00AEAT2@1AEAM2@Z(this, bulletStartPos, bulletEndPos, localPlayerViewPos, outSoundCenterPoint, outBulletDirNormalized, outPlayerProjLengthOnBulletPath, outPlayerDistanceToBulletPath);
}

/*
==============
CgBallistics::AddWorker
==============
*/

void __fastcall CgBallistics::AddWorker(CgBallistics *this, CgBallisticInstance *ballisticInstance)
{
  ?AddWorker@CgBallistics@@IEAAXPEAUCgBallisticInstance@@@Z(this, ballisticInstance);
}

/*
==============
CgBallistics::InitializeWhizby
==============
*/

void __fastcall CgBallistics::InitializeWhizby(CgBallistics *this, CgBallisticInstance *ballisticInstance)
{
  ?InitializeWhizby@CgBallistics@@IEAAXPEAUCgBallisticInstance@@@Z(this, ballisticInstance);
}

/*
==============
CgBallistics::StopWhizby
==============
*/

void __fastcall CgBallistics::StopWhizby(CgBallistics *this, CgBallisticInstance *ballisticInstance)
{
  ?StopWhizby@CgBallistics@@IEAAXPEAUCgBallisticInstance@@@Z(this, ballisticInstance);
}

/*
==============
CgBallistics::IsBallisticInstanceAlive
==============
*/

bool __fastcall CgBallistics::IsBallisticInstanceAlive(CgBallistics *this, CgBallisticInstance *ballisticInstance)
{
  return ?IsBallisticInstanceAlive@CgBallistics@@IEBA_NPEAUCgBallisticInstance@@@Z(this, ballisticInstance);
}

/*
==============
CgBallistics::FireBallistics
==============
*/

void __fastcall CgBallistics::FireBallistics(CgBallistics *this, const int bulletId, const Weapon *r_weapon, const bool isAlternate, const bool isPlayerView, const bool shouldSpawnTracer, const PlayerHandIndex hand, const unsigned int randSeed, const BulletFireParams *fireParams, const vec3_t *shootingAxisRight, const vec3_t *shootingAxisUp, const int attackerEntNum, const bitarray<64> *attackerPerks, const vec3_t *tracerStart, const TagPair *tagPair, const int shootingTime, const bool shouldPredictCharacterImpacts)
{
  ?FireBallistics@CgBallistics@@QEAAXHAEBUWeapon@@_N11W4PlayerHandIndex@@IAEBUBulletFireParams@@AEBTvec3_t@@4HAEBV?$bitarray@$0EA@@@4AEBVTagPair@@H1@Z(this, bulletId, r_weapon, isAlternate, isPlayerView, shouldSpawnTracer, hand, randSeed, fireParams, shootingAxisRight, shootingAxisUp, attackerEntNum, attackerPerks, tracerStart, tagPair, shootingTime, shouldPredictCharacterImpacts);
}

/*
==============
CgBallistics::GetSystem
==============
*/

CgBallistics *__fastcall CgBallistics::GetSystem(const LocalClientNum_t localClientNum)
{
  return ?GetSystem@CgBallistics@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgBallistics::OnCompactOperation
==============
*/

void __fastcall CgBallistics::OnCompactOperation(CgBallistics *this, CgBallisticInstance *movedBallisticInstance)
{
  ?OnCompactOperation@CgBallistics@@MEAAXPEAUCgBallisticInstance@@@Z(this, movedBallisticInstance);
}

/*
==============
CgBallistics::UpdateFoliage
==============
*/

void __fastcall CgBallistics::UpdateFoliage(CgBallistics *this, CgBallisticInstance *ballisticInstance)
{
  ?UpdateFoliage@CgBallistics@@IEAAXPEAUCgBallisticInstance@@@Z(this, ballisticInstance);
}

/*
==============
CgBallistics::DrawDebugOverlay
==============
*/

void __fastcall CgBallistics::DrawDebugOverlay(CgBallistics *this)
{
  ?DrawDebugOverlay@CgBallistics@@QEBAXXZ(this);
}

/*
==============
CgBallistics::StartWorkers
==============
*/

void __fastcall CgBallistics::StartWorkers(CgBallistics *this, const bool processLocalBallisticInstances)
{
  ?StartWorkers@CgBallistics@@QEAAX_N@Z(this, processLocalBallisticInstances);
}

/*
==============
CgBallistics::UpdateWhizby
==============
*/

void __fastcall CgBallistics::UpdateWhizby(CgBallistics *this, CgBallisticInstance *ballisticInstance)
{
  ?UpdateWhizby@CgBallistics@@IEAAXPEAUCgBallisticInstance@@@Z(this, ballisticInstance);
}

/*
==============
CgBallistics::WaitForWorkers
==============
*/

void __fastcall CgBallistics::WaitForWorkers(CgBallistics *this)
{
  ?WaitForWorkers@CgBallistics@@QEAAXXZ(this);
}

/*
==============
CgBallistics::FinishFrame
==============
*/

void __fastcall CgBallistics::FinishFrame(CgBallistics *this)
{
  ?FinishFrame@CgBallistics@@QEAAXXZ(this);
}

/*
==============
CG_Ballistics_ExecuteWorkerThread
==============
*/

void __fastcall CG_Ballistics_ExecuteWorkerThread(const void *const cmdInfo)
{
  ?CG_Ballistics_ExecuteWorkerThread@@YAXQEBX@Z(cmdInfo);
}

/*
==============
CgBallistics::CopyBallisticDataToTracer
==============
*/

void __fastcall CgBallistics::CopyBallisticDataToTracer(CgBallistics *this, CgBallisticInstance *ballisticInstance, localEntity_s *tracer)
{
  ?CopyBallisticDataToTracer@CgBallistics@@IEAAXPEAUCgBallisticInstance@@PEAUlocalEntity_s@@@Z(this, ballisticInstance, tracer);
}

/*
==============
CgBallistics::UpdateTracerOnBallisticInstanceDestroyed
==============
*/

void __fastcall CgBallistics::UpdateTracerOnBallisticInstanceDestroyed(CgBallistics *this, CgBallisticInstance *ballisticInstance, localEntity_s *tracer)
{
  ?UpdateTracerOnBallisticInstanceDestroyed@CgBallistics@@IEAAXPEAUCgBallisticInstance@@PEAUlocalEntity_s@@@Z(this, ballisticInstance, tracer);
}

/*
==============
CgBallistics::ShouldFireBallisticBullet
==============
*/

bool __fastcall CgBallistics::ShouldFireBallisticBullet(CgBallistics *this, const Weapon *weapon, const bool isAlternate, const int attackerEntNum)
{
  return ?ShouldFireBallisticBullet@CgBallistics@@UEBA_NAEBUWeapon@@_NH@Z(this, weapon, isAlternate, attackerEntNum);
}

/*
==============
CgBallistics::AddWorker
==============
*/
void CgBallistics::AddWorker(CgBallistics *this, CgBallisticInstance *ballisticInstance)
{
  volatile int *p_m_workerCountLocal; 
  LocalClientNum_t data; 
  CgBallisticInstance *v6; 

  if ( ballisticInstance->isPlayerView )
    p_m_workerCountLocal = &this->m_workerCountLocal;
  else
    p_m_workerCountLocal = &this->m_workerCountRemote;
  if ( ((unsigned __int8)p_m_workerCountLocal & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_m_workerCountLocal) )
    __debugbreak();
  if ( _InterlockedIncrement(p_m_workerCountLocal) <= 50 )
  {
    data = this->m_localClientNum;
    v6 = ballisticInstance;
    Sys_AddWorkerCmd(WRKCMD_SIM_BALLISTICS, &data);
  }
  else
  {
    Sys_InterlockedDecrement(p_m_workerCountLocal);
  }
}

/*
==============
CgBallistics::BuildTracerLinks
==============
*/
void CgBallistics::BuildTracerLinks(CgBallistics *this)
{
  int v2; 
  bool *p_tracerSearched; 
  int v4; 
  localEntity_s *TracerLocalEntityByBulletId; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 950, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = 0;
  if ( this->m_numTouchedSlots > 0 )
  {
    p_tracerSearched = &this->m_ballisticInstances[0].tracerSearched;
    do
    {
      if ( *(p_tracerSearched - 151) && !*(_QWORD *)(p_tracerSearched - 148) && !*p_tracerSearched )
      {
        v4 = *((_DWORD *)p_tracerSearched - 29);
        *p_tracerSearched = 1;
        TracerLocalEntityByBulletId = CG_GetTracerLocalEntityByBulletId((const LocalClientNum_t)this->m_localClientNum, v4);
        *(_QWORD *)(p_tracerSearched - 148) = TracerLocalEntityByBulletId;
        if ( TracerLocalEntityByBulletId )
          CgBallistics::CopyBallisticDataToTracer(this, (CgBallisticInstance *)(p_tracerSearched - 428), TracerLocalEntityByBulletId);
      }
      ++v2;
      p_tracerSearched += 440;
    }
    while ( v2 < this->m_numTouchedSlots );
  }
}

/*
==============
CG_Ballistics_AdjustDistance
==============
*/

void __fastcall CG_Ballistics_AdjustDistance(double maxDistance, const bool increment, double inputRatio)
{
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm0
    vmovaps xmm6, xmm2
  }
  if ( s_debugOverlayInputState.distAdjustScaleIndex >= 5u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 57, ASSERT_TYPE_ASSERT, "(unsigned)( s_debugOverlayInputState.distAdjustScaleIndex ) < (unsigned)( (5) )", "s_debugOverlayInputState.distAdjustScaleIndex doesn't index MAX_DIST_ADJUST_SCALE\n\t%i not in [0, %i)", s_debugOverlayInputState.distAdjustScaleIndex, 5) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:DIST_ADJUSTMENT
    vmulss  xmm1, xmm0, dword ptr [rcx+rax*4]
  }
  if ( increment )
  {
    __asm
    {
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, cs:s_debugOverlayInputState.currentDistance
      vminss  xmm0, xmm3, xmm7
      vmovss  cs:s_debugOverlayInputState.currentDistance, xmm0
      vmovaps xmm6, [rsp+68h+var_18]
      vmovaps xmm7, [rsp+68h+var_28]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, cs:s_debugOverlayInputState.currentDistance
      vmovaps xmm7, [rsp+68h+var_28]
      vmulss  xmm3, xmm1, xmm6
      vmovaps xmm6, [rsp+68h+var_18]
      vsubss  xmm4, xmm2, xmm3
      vxorps  xmm0, xmm0, xmm0
      vmaxss  xmm1, xmm4, xmm0
      vmovss  cs:s_debugOverlayInputState.currentDistance, xmm1
    }
  }
}

/*
==============
CG_Ballistics_ExecuteWorkerThread
==============
*/
void CG_Ballistics_ExecuteWorkerThread(const void *const cmdInfo)
{
  __int64 v4; 
  CgWeaponMap *v6; 
  cg_t *LocalClientGlobals; 
  CgBallistics *v9; 
  const dvar_t *v10; 
  int v12; 
  int integer; 
  bool updated; 
  int v17; 
  int v18; 
  bool shouldSpawnTracer; 
  _DWORD *v20; 
  bool v25; 
  const dvar_t *v29; 
  char v30; 
  centity_t *inflictorEnt; 
  bitarray<64> *r_attackerPerks; 
  float v35; 
  bool shouldDeferEvents; 
  unsigned __int8 outHitSurfaceTypeId[7]; 
  centity_t *Entity; 
  CgWeaponSystem *v39; 
  playerState_s *p_predictedPlayerState; 
  CgBallistics *v41; 
  vec3_t outLastBulletPos; 
  vec3_t outHitPos; 

  v4 = *(int *)cmdInfo;
  if ( !CgWeaponMap::ms_instance[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v6 = CgWeaponMap::ms_instance[v4];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 1111, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
  _RBX = *((_QWORD *)cmdInfo + 1);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", v4) )
    __debugbreak();
  if ( (unsigned int)v4 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(r_attackerPerks) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(inflictorEnt) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", inflictorEnt, r_attackerPerks) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v4] )
  {
    LODWORD(r_attackerPerks) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", r_attackerPerks) )
      __debugbreak();
  }
  v39 = CgWeaponSystem::ms_weaponSystemArray[v4];
  if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 1119, ASSERT_TYPE_ASSERT, "(weaponSystem)", (const char *)&queryFormat, "weaponSystem") )
    __debugbreak();
  if ( !(_BYTE)CgBallistics::ms_allocatedType )
  {
    LODWORD(r_attackerPerks) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 195, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the ballistics system for localClientNum %d but the ballistics system type is not known\n", "ms_allocatedType != GameModeType::NONE", r_attackerPerks) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= CgBallistics::ms_allocatedCount )
  {
    LODWORD(r_attackerPerks) = CgBallistics::ms_allocatedCount;
    LODWORD(inflictorEnt) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 196, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", inflictorEnt, r_attackerPerks) )
      __debugbreak();
  }
  if ( !CgBallistics::ms_systemsArray[v4] )
  {
    LODWORD(r_attackerPerks) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 197, ASSERT_TYPE_ASSERT, "(ms_systemsArray[localClientNum])", "%s\n\tTrying to access unallocated ballistics system for localClientNum %d\n", "ms_systemsArray[localClientNum]", r_attackerPerks) )
      __debugbreak();
  }
  v9 = CgBallistics::ms_systemsArray[v4];
  v41 = v9;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 1122, ASSERT_TYPE_ASSERT, "(balisticsSystem)", (const char *)&queryFormat, "balisticsSystem") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)v4, *(_DWORD *)(_RBX + 260));
  if ( (Entity->flags & 1) == 0 )
  {
    *(_BYTE *)(_RBX + 426) = 0;
    return;
  }
  __asm { vmovaps [rsp+158h+var_38], xmm6 }
  shouldDeferEvents = !Sys_IsMainThread();
  *(double *)&_XMM0 = BG_GetBulletTerminationRange(v6, &LocalClientGlobals->predictedPlayerState, (const Weapon *)_RBX, *(_BYTE *)(_RBX + 276));
  v10 = DVARINT_cg_ballisticsMaxSimStepsPerServerFrame;
  __asm { vmovaps xmm6, xmm0 }
  if ( !DVARINT_cg_ballisticsMaxSimStepsPerServerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ballisticsMaxSimStepsPerServerFrame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v12 = 0;
  integer = v10->current.integer;
  if ( *(_DWORD *)(_RBX + 268) > LocalClientGlobals->time )
    goto LABEL_60;
  __asm
  {
    vmovaps [rsp+158h+var_48], xmm7
    vxorps  xmm7, xmm7, xmm7
  }
  while ( 1 )
  {
    __asm { vmovaps xmm2, xmm6; terminationRange }
    updated = BgBallistics<CgBallisticInstance>::UpdateBallisticPosition(v9, (CgBallisticInstance *)_RBX, *(const float *)&_XMM2);
    v17 = *(_DWORD *)(_RBX + 268);
    v18 = *(_DWORD *)(_RBX + 264);
    shouldSpawnTracer = *(_BYTE *)(_RBX + 427) && v17 == v18;
    v20 = *(_DWORD **)(_RBX + 280);
    if ( v17 == v18 )
    {
      *(_DWORD *)(_RBX + 288) = *(_DWORD *)(_RBX + 176);
      *(_DWORD *)(_RBX + 292) = *(_DWORD *)(_RBX + 180);
      __asm { vmovss  xmm0, dword ptr [rbx+0B8h] }
    }
    else
    {
      *(_DWORD *)(_RBX + 288) = *(_DWORD *)(_RBX + 300);
      *(_DWORD *)(_RBX + 292) = *(_DWORD *)(_RBX + 304);
      __asm { vmovss  xmm0, dword ptr [rbx+134h] }
    }
    __asm { vmovss  dword ptr [rbx+128h], xmm0 }
    if ( v20 )
    {
      v20[26] = *(_DWORD *)(_RBX + 288);
      v20[27] = *(_DWORD *)(_RBX + 292);
      v20[28] = *(_DWORD *)(_RBX + 296);
    }
    *(_DWORD *)(_RBX + 220) = *(_DWORD *)(_RBX + 268);
    __asm { vmovss  [rsp+158h+var_100], xmm7 }
    ++v12;
    *(_BYTE *)(_RBX + 426) = CgWeaponSystem::SimulateBulletFire_DoBulletPathSim(v39, (BulletFireParams *)(_RBX + 72), *(_DWORD *)(_RBX + 312), (const Weapon *)_RBX, *(_BYTE *)(_RBX + 276), Entity, (const bitarray<64> *)(_RBX + 316), -1, 2047, (const scr_string_t)0, (const vec3_t *)(_RBX + 324), v35, *(_BYTE *)(_RBX + 425), *(PlayerHandIndex *)(_RBX + 256), *(const TagPair *)(_RBX + 348), 0, shouldSpawnTracer, 0, shouldDeferEvents, *(_BYTE *)(_RBX + 433), &outLastBulletPos);
    if ( updated )
      *(_BYTE *)(_RBX + 426) = 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+158h+var_78]
      vmovss  xmm1, dword ptr [rsp+158h+var_78+4]
      vmovss  dword ptr [rbx+12Ch], xmm0
      vmovss  xmm0, dword ptr [rsp+158h+var_78+8]
      vmovss  dword ptr [rbx+134h], xmm0
      vmovss  dword ptr [rbx+130h], xmm1
    }
    if ( !*(_BYTE *)(_RBX + 432) && p_predictedPlayerState->clientNum != *(_DWORD *)(_RBX + 260) )
    {
      v25 = CG_Foliage_BulletTrace((const LocalClientNum_t)v4, (const vec3_t *)(_RBX + 176), (const vec3_t *)(_RBX + 300), &outHitPos, outHitSurfaceTypeId);
      *(_BYTE *)(_RBX + 432) = v25;
      if ( v25 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+158h+outHitPos]
          vmovss  xmm1, dword ptr [rsp+158h+outHitPos+4]
        }
        *(_BYTE *)(_RBX + 424) = outHitSurfaceTypeId[0];
        __asm
        {
          vmovss  dword ptr [rbx+150h], xmm0
          vmovss  xmm0, dword ptr [rsp+158h+outHitPos+8]
          vmovss  dword ptr [rbx+158h], xmm0
          vmovss  dword ptr [rbx+154h], xmm1
        }
      }
    }
    v29 = DCONST_DVARINT_bg_ballisticsSimTimeStepMs;
    if ( !DCONST_DVARINT_bg_ballisticsSimTimeStepMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsSimTimeStepMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    *(_DWORD *)(_RBX + 268) += v29->current.integer;
    v30 = *(_BYTE *)(_RBX + 426);
    if ( v20 )
      break;
    if ( !v30 )
      goto LABEL_59;
LABEL_62:
    if ( integer > 0 && v12 >= integer || *(_DWORD *)(_RBX + 268) > LocalClientGlobals->time )
      goto LABEL_59;
    v9 = v41;
  }
  v20[29] = *(_DWORD *)(_RBX + 300);
  v20[30] = *(_DWORD *)(_RBX + 304);
  v20[31] = *(_DWORD *)(_RBX + 308);
  v20[35] = *(_DWORD *)(_RBX + 220);
  v20[36] = *(_DWORD *)(_RBX + 224);
  if ( v30 )
    goto LABEL_62;
  v20[15] = *(_DWORD *)(_RBX + 268) + 100;
LABEL_59:
  __asm { vmovaps xmm7, [rsp+158h+var_48] }
LABEL_60:
  __asm { vmovaps xmm6, [rsp+158h+var_38] }
}

/*
==============
CG_Ballistics_UpdateDebugOverlayInput
==============
*/

void __fastcall CG_Ballistics_UpdateDebugOverlayInput(double maxDistance)
{
  int frametime; 
  bool IsButtonDown; 
  bool v10; 
  int buttonHoldTime; 
  bool v13; 
  int v16; 
  int *v17; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  frametime = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->frametime;
  maxDistance = CG_DrawDebugInput_GetAxis(DRAW_DEBUG_INPUT_AXIS_RIGHT_X);
  __asm { vmovaps xmm2, xmm0 }
  if ( !ENABLE_ANALOG_INPUT )
    goto LABEL_7;
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( ENABLE_ANALOG_INPUT )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm2, xmm0
    }
    if ( !ENABLE_ANALOG_INPUT )
    {
      __asm
      {
        vxorps  xmm2, xmm2, cs:__xmm@80000000800000008000000080000000
        vcomiss xmm2, xmm0
      }
      if ( !ENABLE_ANALOG_INPUT )
      {
LABEL_5:
        *(_QWORD *)&s_debugOverlayInputState.distDirection = 0i64;
        s_debugOverlayInputState.lastProcessedTime = 0;
LABEL_6:
        s_debugOverlayInputState.distAdjustScaleIndex = 0;
        __asm { vmovaps xmm6, [rsp+38h+var_18] }
        return;
      }
LABEL_9:
      if ( s_debugOverlayInputState.distDirection != CG_BALLISTIC_DIST_INPUT_DIR_LEFT )
      {
        __asm { vmovaps xmm0, xmm6; maxDistance }
        CG_Ballistics_AdjustDistance(*(double *)&_XMM0, 0, *(double *)&_XMM2);
        buttonHoldTime = 0;
        s_debugOverlayInputState.distDirection = CG_BALLISTIC_DIST_INPUT_DIR_LEFT;
        s_debugOverlayInputState.buttonHoldTime = 0;
        *(_QWORD *)&s_debugOverlayInputState.lastProcessedTime = 0i64;
        goto LABEL_20;
      }
      s_debugOverlayInputState.buttonHoldTime += frametime;
      buttonHoldTime = s_debugOverlayInputState.buttonHoldTime;
      if ( s_debugOverlayInputState.buttonHoldTime - s_debugOverlayInputState.lastProcessedTime >= INPUT_PROCESS_INTERVAL )
      {
        v13 = 0;
        goto LABEL_19;
      }
      goto LABEL_20;
    }
  }
  else
  {
LABEL_7:
    IsButtonDown = CG_DrawDebugInput_IsButtonDown(DRAW_DEBUG_INPUT_BUTTON_LEFT);
    v10 = CG_DrawDebugInput_IsButtonDown(DRAW_DEBUG_INPUT_BUTTON_RIGHT);
    if ( IsButtonDown )
    {
      __asm { vmovss  xmm2, cs:__real@3f800000; inputRatio }
      goto LABEL_9;
    }
    if ( !v10 )
      goto LABEL_5;
    __asm { vmovss  xmm2, cs:__real@3f800000; inputRatio }
  }
  if ( s_debugOverlayInputState.distDirection != CG_BALLISTIC_DIST_INPUT_DIR_RIGHT )
  {
    __asm { vmovaps xmm0, xmm6; maxDistance }
    CG_Ballistics_AdjustDistance(*(double *)&_XMM0, 1, *(double *)&_XMM2);
    buttonHoldTime = 0;
    s_debugOverlayInputState.distDirection = CG_BALLISTIC_DIST_INPUT_DIR_RIGHT;
    s_debugOverlayInputState.buttonHoldTime = 0;
    *(_QWORD *)&s_debugOverlayInputState.lastProcessedTime = 0i64;
    goto LABEL_20;
  }
  s_debugOverlayInputState.buttonHoldTime += frametime;
  buttonHoldTime = s_debugOverlayInputState.buttonHoldTime;
  if ( s_debugOverlayInputState.buttonHoldTime - s_debugOverlayInputState.lastProcessedTime >= INPUT_PROCESS_INTERVAL )
  {
    v13 = 1;
LABEL_19:
    __asm { vmovaps xmm0, xmm6; maxDistance }
    CG_Ballistics_AdjustDistance(*(double *)&_XMM0, v13, *(double *)&_XMM2);
    buttonHoldTime = s_debugOverlayInputState.buttonHoldTime;
    s_debugOverlayInputState.lastProcessedTime = s_debugOverlayInputState.buttonHoldTime;
    if ( s_debugOverlayInputState.distDirection == CG_BALLISTIC_DIST_INPUT_DIR_NONE )
      goto LABEL_6;
  }
LABEL_20:
  v16 = 3;
  v17 = &distAdjustScaleTimes[3];
  while ( buttonHoldTime < *v17 )
  {
    --v16;
    if ( (__int64)--v17 < (__int64)distAdjustScaleTimes )
    {
      __asm { vmovaps xmm6, [rsp+38h+var_18] }
      return;
    }
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  s_debugOverlayInputState.distAdjustScaleIndex = v16 + 1;
}

/*
==============
CgBallistics::CopyBallisticDataToTracer
==============
*/
void CgBallistics::CopyBallisticDataToTracer(CgBallistics *this, CgBallisticInstance *ballisticInstance, localEntity_s *tracer)
{
  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 663, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  if ( !tracer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 664, ASSERT_TYPE_ASSERT, "(tracer)", (const char *)&queryFormat, "tracer") )
    __debugbreak();
  tracer->u.tracer.ballistics.isBallistic = 1;
  tracer->u.tracer.ballistics.ballisticInstance = ballisticInstance;
  tracer->endTime = 0x7FFFFFFF;
  tracer->u.tracer.ballistics.startTime = ballisticInstance->shootingTime;
  tracer->u.tracer.ballistics.isPlayerView = ballisticInstance->isPlayerView;
  tracer->u.tracer.ballistics.tracerStartPos.v[0] = ballisticInstance->tracerStart.v[0];
  tracer->u.tracer.ballistics.tracerStartPos.v[1] = ballisticInstance->tracerStart.v[1];
  tracer->u.tracer.ballistics.tracerStartPos.v[2] = ballisticInstance->tracerStart.v[2];
  tracer->u.tracer.ballistics.startPos.v[0] = ballisticInstance->shootingPos.v[0];
  tracer->u.laser.cache.interpStartTime = LODWORD(ballisticInstance->shootingPos.v[1]);
  tracer->u.tracer.ballistics.startPos.v[2] = ballisticInstance->shootingPos.v[2];
  tracer->u.tracer.ballistics.simStartPos.v[0] = ballisticInstance->tracerCurrentStart.v[0];
  tracer->u.tracer.ballistics.simStartPos.v[1] = ballisticInstance->tracerCurrentStart.v[1];
  tracer->u.tracer.ballistics.simStartPos.v[2] = ballisticInstance->tracerCurrentStart.v[2];
  tracer->u.tracer.ballistics.simFinishPos.v[0] = ballisticInstance->tracerCurrentFinish.v[0];
  tracer->u.tracer.ballistics.simFinishPos.v[1] = ballisticInstance->tracerCurrentFinish.v[1];
  tracer->u.tracer.ballistics.simFinishPos.v[2] = ballisticInstance->tracerCurrentFinish.v[2];
  tracer->u.tracer.ballistics.simStartTime = ballisticInstance->fireParams.ballisticsTickStartTime;
  tracer->u.tracer.ballistics.simFinishTime = ballisticInstance->fireParams.ballisticsTickEndTime;
}

/*
==============
CgBallistics::DrawDebugOverlay
==============
*/
void CgBallistics::DrawDebugOverlay(CgBallistics *this)
{
  signed __int64 v1; 
  void *v12; 
  __int64 v14; 
  bool v18; 
  const ScreenPlacement *v19; 
  __int64 m_localClientNum; 
  CgWeaponMap *v22; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  const Weapon *CurrentWeaponForPlayer; 
  __int64 p_weapFlags; 
  char v27; 
  const BallisticInfo *BallisticInfo; 
  centity_t *Entity; 
  const dvar_t *v34; 
  BallisticInfoCalculated *calculated; 
  int numDistanceEntries; 
  int v37; 
  const char *v54; 
  char v66; 
  unsigned __int64 v84; 
  int v96; 
  int v97; 
  unsigned __int64 v98; 
  int v99; 
  BallisticInfoCalculated *v100; 
  int v101; 
  int v102; 
  BallisticInfoCalculated *v103; 
  int v104; 
  int v105; 
  BallisticInfoCalculated *v106; 
  int v107; 
  int v108; 
  BallisticInfoCalculated *v109; 
  int v110; 
  int v111; 
  BallisticInfoCalculated *v112; 
  int v113; 
  int v114; 
  unsigned __int64 v124; 
  float fmt; 
  char *fmta; 
  char *fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  char *fmti; 
  char *fmtj; 
  float fmtk; 
  float fmtl; 
  float fmtm; 
  float fmtn; 
  float fmto; 
  float fmtp; 
  Weapon *r_weapon; 
  float r_weaponb; 
  Weapon *r_weaponc; 
  float r_weapond; 
  float r_weapone; 
  float r_weaponf; 
  float r_weapong; 
  Weapon *r_weapona; 
  float r_weaponh; 
  float r_weaponi; 
  float r_weaponj; 
  float r_weaponk; 
  double isAlternate; 
  double isAlternatea; 
  float isAlternateb; 
  float isAlternatec; 
  float isAlternated; 
  float isAlternatee; 
  double vertAlign; 
  double numDataEntries; 
  float numDataEntriesa; 
  float numDataEntriesb; 
  float numDataEntriesc; 
  vec4_t *color; 
  bool v257; 
  char v258; 
  GfxFont *font; 
  float data[84]; 
  float v267[152]; 
  char output[1024]; 
  char dest[6144]; 
  char v279; 

  v12 = alloca(v1);
  __asm
  {
    vmovaps [rsp+2100h+var_30], xmm6
    vmovaps [rsp+2100h+var_40], xmm7
    vmovaps [rsp+2100h+var_50], xmm8
    vmovaps [rsp+2100h+var_60], xmm9
    vmovaps [rsp+2100h+var_70], xmm10
    vmovaps [rsp+2100h+var_A0], xmm13
  }
  v14 = tls_index;
  __asm { vmovss  xmm6, cs:__real@41a00000 }
  if ( dword_148C1103C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_148C1103C);
    if ( dword_148C1103C == -1 )
    {
      __asm
      {
        vaddss  xmm1, xmm6, cs:GRAPH_HEIGHT
        vmovss  cs:SECTION_BULLET_DROP_GRAPH_Y_OFFSET, xmm1
      }
      j__Init_thread_footer(&dword_148C1103C);
    }
  }
  if ( dword_148C11044 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v14) + 1772i64) )
  {
    j__Init_thread_header(&dword_148C11044);
    if ( dword_148C11044 == -1 )
    {
      __asm
      {
        vaddss  xmm1, xmm6, cs:GRAPH_HEIGHT
        vmovss  cs:SECTION_BULLET_TRAVEL_GRAPH_Y_OFFSET, xmm1
      }
      j__Init_thread_footer(&dword_148C11044);
    }
  }
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v19 = &scrPlaceViewDisplay[this->m_localClientNum];
      goto LABEL_14;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v18 )
      __debugbreak();
  }
  v19 = &scrPlaceFull;
LABEL_14:
  __asm { vmovss  xmm2, cs:MY_SCALE; scale }
  font = UI_GetFontHandle(v19, 6, *(float *)&_XMM2);
  memset_0(dest, 0, sizeof(dest));
  m_localClientNum = this->m_localClientNum;
  if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v22 = CgWeaponMap::ms_instance[m_localClientNum];
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 284, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 287, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v22, p_predictedPlayerState);
  if ( !p_predictedPlayerState )
  {
    p_weapFlags = 1832i64;
    goto LABEL_30;
  }
  p_weapFlags = (__int64)&p_predictedPlayerState->weapCommon.weapFlags;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 0x22u) )
    goto LABEL_33;
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 0x11u) )
  {
LABEL_30:
    if ( p_predictedPlayerState && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x1Bu) )
      goto LABEL_32;
LABEL_33:
    v27 = 0;
    goto LABEL_34;
  }
LABEL_32:
  v27 = 1;
LABEL_34:
  BallisticInfo = BG_GetBallisticInfo(CurrentWeaponForPlayer, v27);
  if ( !BallisticInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 295, ASSERT_TYPE_ASSERT, "(ballisticInfo)", (const char *)&queryFormat, "ballisticInfo") )
    __debugbreak();
  BG_GetWeaponName(CurrentWeaponForPlayer, output, 0x400u);
  v257 = BG_GetWeaponType(CurrentWeaponForPlayer, v27) == WEAPTYPE_BULLET;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, p_predictedPlayerState->clientNum);
  if ( !Entity )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 303, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    Entity = NULL;
  }
  LOBYTE(_EAX) = v257;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( v257 )
  {
    *(double *)&_XMM0 = BG_GetBulletRange<CgBallisticInstance>(v22, this, p_predictedPlayerState, &Entity->nextState, &p_predictedPlayerState->perks, CurrentWeaponForPlayer, v27);
    LOBYTE(_EAX) = v257;
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  _RBX = 0i64;
  if ( BallisticInfo->enableBallisticTrajectory )
  {
    v34 = DCONST_DVARINT_bg_ballisticsSimTimeStepMs;
    if ( !DCONST_DVARINT_bg_ballisticsSimTimeStepMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsSimTimeStepMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    calculated = BallisticInfo->calculated;
    numDistanceEntries = calculated->numDistanceEntries;
    v37 = numDistanceEntries - 1;
    if ( v34->current.integer >> 3 < numDistanceEntries )
      v37 = v34->current.integer >> 3;
    _RBX = 0i64;
    _RCX = v37;
    _RAX = calculated->distances;
    __asm { vmovss  xmm8, dword ptr [rax+rcx*4] }
  }
  else
  {
    _EAX = (unsigned __int8)_EAX;
    __asm
    {
      vmovd   xmm0, eax
      vmovd   xmm1, ebx
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm6, xmm7, xmm2
      vmovaps xmm8, xmm0
      vmovss  [rsp+2100h+var_2098], xmm0
    }
  }
  __asm
  {
    vmovss  xmm10, cs:BASE_X_OFFSET
    vmovss  xmm9, cs:BASE_Y_OFFSET
    vmovss  [rsp+2100h+var_2090], xmm10
  }
  *(double *)&_XMM0 = BG_GetBallisticMuzzleVelocityScale(CurrentWeaponForPlayer, v27);
  __asm
  {
    vmovss  xmm13, cs:__real@3cd013a9
    vmulss  xmm1, xmm8, xmm13
    vcvtss2sd xmm5, xmm0, xmm0
    vmovsd  [rsp+2100h+color], xmm5
    vcvtss2sd xmm3, xmm1, xmm1
    vmovsd  qword ptr [rsp+2100h+numDataEntries], xmm3
    vmulss  xmm0, xmm6, xmm13
    vcvtss2sd xmm4, xmm8, xmm8
    vmovsd  qword ptr [rsp+2100h+vertAlign], xmm4
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  qword ptr [rsp+2100h+isAlternate], xmm1
    vcvtss2sd xmm2, xmm6, xmm6
    vmovsd  [rsp+2100h+r_weapon], xmm2
  }
  v54 = "no";
  if ( BallisticInfo->enableBallisticTrajectory )
    v54 = "yes";
  Com_sprintf(dest, 0x1800ui64, "^7=== BALLISTICS ===\n^3Use D-PAD Left-Right (or keyboard left-right arrows for PC) to adjust the distance\n^7Weapon: ^5%s\n^7Uses Ballistic: ^5%s\n^7Max Range: ^5%.2f inches (%.2f meters)\n^7Hit Scan Range: ^5%.2f inches (%.2f meters)\n^7Muzzle Vel. Scalar: ^5%.2f\n", output, v54, *(double *)&r_weapon, isAlternate, vertAlign, numDataEntries, *(double *)&color);
  __asm
  {
    vmovss  xmm0, cs:MY_SCALE
    vmovss  [rsp+2100h+numDataEntries], xmm0
    vmovss  dword ptr [rsp+2100h+r_weapon], xmm9
    vmovss  dword ptr [rsp+2100h+fmt], xmm10
  }
  UI_DrawText(v19, dest, 6144, font, fmt, r_weaponb, 1, 1, numDataEntriesa, &colorWhite, 3);
  if ( v257 && BallisticInfo->enableBallisticTrajectory )
  {
    __asm
    {
      vaddss  xmm0, xmm9, cs:SECTION_BALLISTIC_Y_OFFSET
      vmovss  [rsp+2100h+var_2094], xmm0
      vmovss  xmm0, cs:__real@471c4000; maxDistance
      vmovaps [rsp+2100h+var_80], xmm11
      vmovaps [rsp+2100h+var_90], xmm12
      vmovaps [rsp+2100h+var_B0], xmm15
    }
    CG_Ballistics_UpdateDebugOverlayInput(*(double *)&_XMM0);
    __asm
    {
      vmovss  xmm10, cs:__real@5f800000
      vmovss  xmm11, cs:__real@ff7fffff
      vmovss  xmm9, cs:__real@43410000
      vxorps  xmm8, xmm8, xmm8
    }
    _R13 = 0i64;
    _R14 = data;
    do
    {
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, rbx
        vmovaps xmm2, xmm6; distance
      }
      *(double *)&_XMM0 = BG_Ballistics_TravelTimeForDistance(CurrentWeaponForPlayer, v27, *(const float *)&_XMM2);
      __asm { vucomiss xmm0, xmm11 }
      if ( v66 )
        break;
      __asm
      {
        vmulss  xmm2, xmm9, dword ptr [rsi+10h]
        vmulss  xmm3, xmm2, xmm0
        vmulss  xmm0, xmm3, xmm0
        vmovss  dword ptr [r14], xmm0
      }
      ++_R14;
      ++_R13;
      _RBX += 500i64;
      __asm { vmovaps xmm8, xmm6 }
    }
    while ( _RBX < 0x9E34 );
    if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 387, ASSERT_TYPE_ASSERT, "(bulletDropActualSampleCount > 0)", (const char *)&queryFormat, "bulletDropActualSampleCount > 0") )
      __debugbreak();
    __asm
    {
      vmovss  xmm10, [rbp+r13*4+2000h+var_2074]
      vmovss  xmm2, cs:s_debugOverlayInputState.currentDistance; distance
    }
    v258 = 0;
    __asm
    {
      vmovss  [rsp+2100h+var_2098], xmm10
      vmovss  [rsp+2100h+var_209C], xmm7
      vmovaps xmm15, xmm7
      vmovaps xmm6, xmm7
    }
    *(double *)&_XMM0 = BG_Ballistics_TravelTimeForDistance(CurrentWeaponForPlayer, v27, *(const float *)&_XMM2);
    __asm
    {
      vucomiss xmm0, xmm11
      vmovaps xmm12, xmm0
    }
    if ( v66 )
    {
      v258 = 1;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:s_debugOverlayInputState.currentDistance
        vminss  xmm2, xmm0, xmm8; dist
        vmovaps xmm0, xmm7; min
        vmovaps xmm1, xmm8; max
      }
      *(double *)&_XMM0 = I_fdistnormalized(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm2, xmm9, dword ptr [rsi+10h]
        vmulss  xmm3, xmm2, xmm12
        vmovss  [rsp+2100h+var_209C], xmm0
        vmulss  xmm0, xmm3, xmm12; val
        vmovaps xmm2, xmm10; max
        vmovaps xmm1, xmm7; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      _RAX = 0i64;
      __asm { vmovaps xmm6, xmm0 }
      if ( _R13 != 1 )
      {
        v84 = _R13 - 2;
        while ( 1 )
        {
          __asm
          {
            vmovss  xmm0, [rbp+rax*4+2000h+data]; min
            vmovss  xmm1, [rbp+rax*4+2000h+var_206C]; max
          }
          if ( _RAX == v84 )
            break;
          __asm { vcomiss xmm6, xmm0 }
          if ( _RAX >= v84 )
          {
            __asm { vcomiss xmm6, xmm1 }
            if ( _RAX <= v84 )
              break;
          }
          if ( ++_RAX >= _R13 - 1 )
            goto LABEL_72;
        }
        __asm { vmovaps xmm2, xmm6; dist }
        I_fdistnormalized(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      }
LABEL_72:
      __asm
      {
        vmovaps xmm2, xmm6; dist
        vmovaps xmm1, xmm10; max
        vmovaps xmm0, xmm7; min
      }
      *(double *)&_XMM0 = I_fdistnormalized(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm15, xmm0 }
    }
    __asm { vmovss  xmm2, cs:__real@471c4000; distance }
    *(double *)&_XMM0 = BG_Ballistics_TravelTimeForDistance(CurrentWeaponForPlayer, v27, *(const float *)&_XMM2);
    __asm
    {
      vmovss  xmm1, cs:__real@40c00000
      vcmpeqss xmm2, xmm0, xmm11
      vblendvps xmm10, xmm0, xmm1, xmm2
      vmulss  xmm0, xmm10, cs:__real@447a0000
      vcvttss2si ecx, xmm0
    }
    v96 = 0;
    v97 = _ECX / 40;
    if ( (unsigned __int64)(_ECX / 40) > 0x96 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 453, ASSERT_TYPE_ASSERT, "(sampleCountBasedOnDistance <= GRAPH_SAMPLE_COUNT_MAX)", (const char *)&queryFormat, "sampleCountBasedOnDistance <= GRAPH_SAMPLE_COUNT_MAX") )
      __debugbreak();
    v98 = 0i64;
    if ( (unsigned __int64)v97 >= 4 )
    {
      v99 = 80;
      do
      {
        v100 = BallisticInfo->calculated;
        v101 = v100->numDistanceEntries;
        v102 = v101 - 1;
        if ( v96 >> 3 < v101 )
          v102 = v96 >> 3;
        v267[v98] = v100->distances[v102];
        v103 = BallisticInfo->calculated;
        v104 = v103->numDistanceEntries;
        v105 = v104 - 1;
        if ( (v99 - 40) >> 3 < v104 )
          v105 = (v99 - 40) >> 3;
        v267[v98 + 1] = v103->distances[v105];
        v106 = BallisticInfo->calculated;
        v107 = v106->numDistanceEntries;
        v108 = v107 - 1;
        if ( v99 >> 3 < v107 )
          v108 = v99 >> 3;
        v267[v98 + 2] = v106->distances[v108];
        v109 = BallisticInfo->calculated;
        v110 = v109->numDistanceEntries;
        v111 = v110 - 1;
        if ( (v99 + 40) >> 3 < v110 )
          v111 = (v99 + 40) >> 3;
        v96 += 160;
        v99 += 160;
        v267[v98 + 3] = v109->distances[v111];
        v98 += 4i64;
      }
      while ( v98 < v97 - 3i64 );
    }
    for ( ; v98 < v97; ++v98 )
    {
      v112 = BallisticInfo->calculated;
      v113 = v112->numDistanceEntries;
      v114 = v113 - 1;
      if ( v96 >> 3 < v113 )
        v114 = v96 >> 3;
      v96 += 40;
      v267[v98] = v112->distances[v114];
    }
    _RBX = v97 - 1i64;
    __asm
    {
      vmovaps xmm11, xmm7
      vmovaps xmm8, xmm7
      vmovss  xmm9, [rbp+rbx*4+2000h+var_1F20]
    }
    if ( v258 )
    {
      __asm
      {
        vmovss  xmm2, cs:s_debugOverlayInputState.currentDistance
        vmulss  xmm0, xmm2, xmm13
        vcvtss2sd xmm3, xmm2, xmm2
        vcvtss2sd xmm1, xmm0, xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+2100h+fmt], xmm1
      }
      Com_sprintf(dest, 0x1800ui64, "^7=== BULLET DROP FOR DISTANCE ===\n^7Distance: ^5%.2f inches (%.2f meters)\n^7Drop: ^5Out of Range\n", *(double *)&_XMM3, *(double *)&fmtb);
    }
    else
    {
      __asm
      {
        vmovaps xmm2, xmm12; dist
        vmovaps xmm1, xmm10; max
        vmovaps xmm0, xmm7; min
      }
      *(double *)&_XMM0 = I_fdistnormalized(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      _RCX = 0i64;
      __asm
      {
        vmovss  xmm1, cs:s_debugOverlayInputState.currentDistance
        vmovaps xmm11, xmm0
      }
      if ( v97 != 1i64 )
      {
        v124 = v97 - 2;
        while ( 1 )
        {
          __asm
          {
            vmovss  xmm0, [rbp+rcx*4+2000h+var_1F20]; min
            vmovss  xmm3, [rbp+rcx*4+2000h+var_1F1C]
          }
          if ( _RCX == v97 - 2 )
            break;
          __asm { vcomiss xmm1, xmm0 }
          if ( _RCX >= v124 )
          {
            __asm { vcomiss xmm1, xmm3 }
            if ( _RCX <= v124 )
              break;
          }
          if ( ++_RCX >= _RBX )
            goto LABEL_100;
        }
        __asm
        {
          vminss  xmm2, xmm3, xmm1; dist
          vmovaps xmm1, xmm3; max
        }
        I_fdistnormalized(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovss  xmm1, cs:s_debugOverlayInputState.currentDistance }
      }
LABEL_100:
      __asm
      {
        vminss  xmm2, xmm9, xmm1; dist
        vmovaps xmm1, xmm9; max
        vmovaps xmm0, xmm7; min
      }
      *(double *)&_XMM0 = I_fdistnormalized(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm2, cs:s_debugOverlayInputState.currentDistance
        vmulss  xmm1, xmm6, xmm13
        vcvtss2sd xmm5, xmm1, xmm1
        vmovsd  qword ptr [rsp+2100h+isAlternate], xmm5
        vmulss  xmm1, xmm2, xmm13
        vcvtss2sd xmm3, xmm2, xmm2
        vcvtss2sd xmm4, xmm1, xmm1
        vcvtss2sd xmm6, xmm6, xmm6
        vmovsd  [rsp+2100h+r_weapon], xmm6
        vmovq   r9, xmm3
        vmovsd  [rsp+2100h+fmt], xmm4
        vmovaps xmm8, xmm0
      }
      Com_sprintf(dest, 0x1800ui64, "^7=== BULLET DROP FOR DISTANCE ===\n^7Distance: ^5%.2f inches (%.2f meters)\n^7Drop: ^5%.2f inches (%.2f meters)\n", *(double *)&_XMM3, *(double *)&fmta, *(double *)&r_weaponc, isAlternatea);
    }
    __asm
    {
      vmovss  xmm0, cs:MY_SCALE
      vmovss  xmm6, [rsp+2100h+var_2094]
      vmovss  xmm10, [rsp+2100h+var_2090]
      vmovss  [rsp+2100h+numDataEntries], xmm0
      vmovss  dword ptr [rsp+2100h+r_weapon], xmm6
      vmovss  dword ptr [rsp+2100h+fmt], xmm10
    }
    UI_DrawText(v19, dest, 6144, font, fmtc, r_weapond, 1, 1, numDataEntriesb, &colorWhite, 3);
    __asm
    {
      vaddss  xmm6, xmm6, cs:SECTION_BULLET_DROP_TEXT_Y_OFFSET
      vmovss  xmm0, cs:GRAPH_HEIGHT
      vmovss  xmm3, cs:GRAPH_WIDTH; width
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm10; x
      vmovss  dword ptr [rsp+2100h+fmt], xmm0
    }
    CG_DebugGraphs_DrawAxes(v19, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, &colorWhite);
    __asm
    {
      vmovss  xmm1, cs:GRAPH_WIDTH
      vmovss  xmm0, cs:GRAPH_HEIGHT
      vmovss  xmm3, cs:AXIS_LABEL_CHAR_HEIGHT; charHeight
      vmovss  dword ptr [rsp+2100h+r_weapon], xmm0
      vmovss  dword ptr [rsp+2100h+fmt], xmm1
      vmovaps xmm1, xmm10; x
      vmovaps xmm2, xmm6; y
    }
    CG_DebugGraphs_DrawAxisLabelX(v19, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, r_weapone, "Distance", &colorWhite);
    __asm
    {
      vmovss  xmm0, cs:GRAPH_HEIGHT
      vmovss  xmm3, cs:AXIS_LABEL_CHAR_HEIGHT; charHeight
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm10; x
      vmovss  dword ptr [rsp+2100h+fmt], xmm0
    }
    CG_DebugGraphs_DrawAxisLabelY(v19, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, "Drop", &colorWhite);
    __asm
    {
      vmovss  xmm0, [rsp+2100h+var_2098]
      vmovss  xmm3, cs:GRAPH_WIDTH; width
      vmovss  dword ptr [rsp+2100h+isAlternate], xmm0
      vmovss  xmm0, cs:GRAPH_HEIGHT
      vmovss  dword ptr [rsp+2100h+r_weapon], xmm7
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm10; x
      vmovss  dword ptr [rsp+2100h+fmt], xmm0
    }
    CG_DebugGraphs_DrawGraphData(v19, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, r_weaponf, isAlternateb, data, _R13, 0, &colorGreen);
    __asm
    {
      vmovss  xmm0, [rsp+2100h+var_209C]
      vmovss  xmm3, cs:GRAPH_WIDTH; width
      vmovss  dword ptr [rsp+2100h+isAlternate], xmm15
      vmovss  dword ptr [rsp+2100h+r_weapon], xmm0
      vmovss  xmm0, cs:GRAPH_HEIGHT
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm10; x
      vmovss  dword ptr [rsp+2100h+fmt], xmm0
    }
    CG_DebugGraphs_DrawGraphDatapoint(v19, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmth, r_weapong, isAlternatec, &colorYellow);
    __asm
    {
      vmovss  xmm2, cs:s_debugOverlayInputState.currentDistance
      vaddss  xmm6, xmm6, cs:SECTION_BULLET_DROP_GRAPH_Y_OFFSET
      vmovaps xmm15, [rsp+2100h+var_B0]
      vcvtss2sd xmm3, xmm2, xmm2
      vmovq   r9, xmm3
    }
    if ( v258 )
    {
      __asm
      {
        vmulss  xmm0, xmm2, xmm13
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+2100h+fmt], xmm1
      }
      Com_sprintf(dest, 0x1800ui64, "^7=== TRAVEL DISTANCE FOR TIME ===\n^7Distance: ^5%.2f inches (%.2f meters)\n^7Travel Time: Out of Range\n", *(double *)&_XMM3, *(double *)&fmti);
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm12, cs:__real@447a0000
        vcvttss2si eax, xmm0
        vmulss  xmm1, xmm2, xmm13
        vcvtss2sd xmm0, xmm1, xmm1
      }
      LODWORD(r_weapona) = _EAX;
      __asm { vmovsd  [rsp+2100h+fmt], xmm0 }
      Com_sprintf(dest, 0x1800ui64, "^7=== TRAVEL DISTANCE FOR TIME ===\n^7Distance: ^5%.2f inches (%.2f meters)\n^7Travel Time: ^5%d milliseconds\n", *(double *)&_XMM3, *(double *)&fmtj, r_weapona);
    }
    __asm
    {
      vmovss  xmm0, cs:MY_SCALE
      vmovss  [rsp+2100h+numDataEntries], xmm0
      vmovss  dword ptr [rsp+2100h+r_weapon], xmm6
      vmovss  dword ptr [rsp+2100h+fmt], xmm10
    }
    UI_DrawText(v19, dest, 6144, font, fmtk, r_weaponh, 1, 1, numDataEntriesc, &colorWhite, 3);
    __asm
    {
      vaddss  xmm6, xmm6, cs:SECTION_BULLET_TRAVEL_TEXT_Y_OFFSET
      vmovss  xmm0, cs:GRAPH_HEIGHT
      vmovss  xmm3, cs:GRAPH_WIDTH; width
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm10; x
      vmovss  dword ptr [rsp+2100h+fmt], xmm0
    }
    CG_DebugGraphs_DrawAxes(v19, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtl, &colorWhite);
    __asm
    {
      vmovss  xmm1, cs:GRAPH_WIDTH
      vmovss  xmm0, cs:GRAPH_HEIGHT
      vmovss  xmm3, cs:AXIS_LABEL_CHAR_HEIGHT; charHeight
      vmovss  dword ptr [rsp+2100h+r_weapon], xmm0
      vmovss  dword ptr [rsp+2100h+fmt], xmm1
      vmovaps xmm1, xmm10; x
      vmovaps xmm2, xmm6; y
    }
    CG_DebugGraphs_DrawAxisLabelX(v19, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtm, r_weaponi, "Time", &colorWhite);
    __asm
    {
      vmovss  xmm0, cs:GRAPH_HEIGHT
      vmovss  xmm3, cs:AXIS_LABEL_CHAR_HEIGHT; charHeight
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm10; x
      vmovss  dword ptr [rsp+2100h+fmt], xmm0
    }
    CG_DebugGraphs_DrawAxisLabelY(v19, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtn, "Distance", &colorWhite);
    __asm
    {
      vmovss  xmm0, cs:GRAPH_HEIGHT
      vmovss  xmm3, cs:GRAPH_WIDTH; width
      vmovss  dword ptr [rsp+2100h+isAlternate], xmm9
      vmovss  dword ptr [rsp+2100h+r_weapon], xmm7
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm10; x
      vmovss  dword ptr [rsp+2100h+fmt], xmm0
    }
    CG_DebugGraphs_DrawGraphData(v19, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmto, r_weaponj, isAlternated, v267, v97, 0, &colorGreen);
    __asm
    {
      vmovss  xmm0, cs:GRAPH_HEIGHT
      vmovss  xmm3, cs:GRAPH_WIDTH; width
      vmovss  dword ptr [rsp+2100h+isAlternate], xmm8
      vmovss  dword ptr [rsp+2100h+r_weapon], xmm11
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm10; x
      vmovss  dword ptr [rsp+2100h+fmt], xmm0
    }
    CG_DebugGraphs_DrawGraphDatapoint(v19, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtp, r_weaponk, isAlternatee, &colorYellow);
    __asm
    {
      vmovaps xmm12, [rsp+2100h+var_90]
      vmovaps xmm11, [rsp+2100h+var_80]
    }
  }
  _R11 = &v279;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
CgBallistics::FinishFrame
==============
*/

void __fastcall CgBallistics::FinishFrame(CgBallistics *this, double _XMM1_8)
{
  int v4; 
  CgBallisticInstance *m_ballisticInstances; 
  localEntity_s *tracer; 
  CgBallisticInstance *m_firstFree; 
  volatile int m_ballisticInstanceEntryIndexNext; 
  __int64 v9; 
  CgBallisticInstance *m_ballisticInstancesCurrentFrame; 
  CgBallisticInstance *nextFree; 
  __int64 m_numTouchedSlots; 
  __int64 v15; 
  unsigned int whizbyInPlayId; 
  unsigned int whizbyOutPlayId; 
  localEntity_s *TracerLocalEntityByBulletId; 
  const dvar_t *v28; 
  int v34; 
  bool *p_tracerSearched; 
  int v36; 
  localEntity_s *v37; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 985, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v4 = 0;
  if ( this->m_numTouchedSlots > 0 )
  {
    m_ballisticInstances = this->m_ballisticInstances;
    do
    {
      if ( m_ballisticInstances->isInUse )
      {
        CgBallistics::UpdateFoliage(this, m_ballisticInstances);
        CgBallistics::UpdateWhizby(this, m_ballisticInstances);
        if ( !CgBallistics::IsBallisticInstanceAlive(this, m_ballisticInstances) )
        {
          tracer = m_ballisticInstances->tracer;
          if ( tracer )
            CgBallistics::UpdateTracerOnBallisticInstanceDestroyed(this, m_ballisticInstances, tracer);
          CgBallistics::StopWhizby(this, m_ballisticInstances);
          if ( !m_ballisticInstances->isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 257, ASSERT_TYPE_ASSERT, "(ballisticInstance->isInUse)", (const char *)&queryFormat, "ballisticInstance->isInUse") )
            __debugbreak();
          if ( m_ballisticInstances->nextFree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 258, ASSERT_TYPE_ASSERT, "(!ballisticInstance->nextFree)", (const char *)&queryFormat, "!ballisticInstance->nextFree") )
            __debugbreak();
          memset_0(m_ballisticInstances, 0, sizeof(CgBallisticInstance));
          m_firstFree = this->m_firstFree;
          this->m_firstFree = m_ballisticInstances;
          if ( m_firstFree )
            m_ballisticInstances->nextFree = m_firstFree;
          else
            this->m_lastFree = m_ballisticInstances;
          --this->m_numSlotsActive;
        }
      }
      ++v4;
      ++m_ballisticInstances;
    }
    while ( v4 < this->m_numTouchedSlots );
  }
  m_ballisticInstanceEntryIndexNext = 50;
  if ( this->m_ballisticInstanceEntryIndexNext < 50 )
    m_ballisticInstanceEntryIndexNext = this->m_ballisticInstanceEntryIndexNext;
  v9 = m_ballisticInstanceEntryIndexNext;
  if ( m_ballisticInstanceEntryIndexNext > 0 )
  {
    m_ballisticInstancesCurrentFrame = this->m_ballisticInstancesCurrentFrame;
    while ( 1 )
    {
      CgBallistics::UpdateFoliage(this, m_ballisticInstancesCurrentFrame);
      CgBallistics::UpdateWhizby(this, m_ballisticInstancesCurrentFrame);
      if ( !CgBallistics::IsBallisticInstanceAlive(this, m_ballisticInstancesCurrentFrame) )
      {
        if ( !m_ballisticInstancesCurrentFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 784, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
          __debugbreak();
        if ( m_ballisticInstancesCurrentFrame->whizbySfxPlayed )
        {
          whizbyInPlayId = m_ballisticInstancesCurrentFrame->soundData.whizbyInPlayId;
          if ( whizbyInPlayId )
            SND_StopVoiceById(whizbyInPlayId);
          whizbyOutPlayId = m_ballisticInstancesCurrentFrame->soundData.whizbyOutPlayId;
          if ( whizbyOutPlayId )
            SND_StopVoiceById(whizbyOutPlayId);
        }
        TracerLocalEntityByBulletId = CG_GetTracerLocalEntityByBulletId((const LocalClientNum_t)this->m_localClientNum, m_ballisticInstancesCurrentFrame->bulletId);
        if ( TracerLocalEntityByBulletId )
          CgBallistics::UpdateTracerOnBallisticInstanceDestroyed(this, m_ballisticInstancesCurrentFrame, TracerLocalEntityByBulletId);
        goto LABEL_51;
      }
      _RBX = this->m_firstFree;
      if ( _RBX )
        break;
      m_numTouchedSlots = this->m_numTouchedSlots;
      if ( (int)m_numTouchedSlots < 600 )
      {
        this->m_numTouchedSlots = m_numTouchedSlots + 1;
        _RBX = &this->m_ballisticInstances[m_numTouchedSlots];
LABEL_32:
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 242, ASSERT_TYPE_ASSERT, "(newInstance)", (const char *)&queryFormat, "newInstance") )
          __debugbreak();
        memset_0(_RBX, 0, sizeof(CgBallisticInstance));
        _RBX->isInUse = 1;
        ++this->m_numSlotsActive;
        if ( m_ballisticInstancesCurrentFrame->nextFree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 1030, ASSERT_TYPE_ASSERT, "(!ballisticInstance->nextFree)", (const char *)&queryFormat, "!ballisticInstance->nextFree") )
          __debugbreak();
        _RAX = m_ballisticInstancesCurrentFrame;
        v15 = 3i64;
        do
        {
          _RBX = (CgBallisticInstance *)((char *)_RBX + 128);
          __asm { vmovups xmm0, xmmword ptr [rax] }
          _RAX = (CgBallisticInstance *)((char *)_RAX + 128);
          __asm
          {
            vmovups xmmword ptr [rbx-80h], xmm0
            vmovups xmm1, xmmword ptr [rax-70h]
            vmovups xmmword ptr [rbx-70h], xmm1
            vmovups xmm0, xmmword ptr [rax-60h]
            vmovups xmmword ptr [rbx-60h], xmm0
            vmovups xmm1, xmmword ptr [rax-50h]
            vmovups xmmword ptr [rbx-50h], xmm1
            vmovups xmm0, xmmword ptr [rax-40h]
            vmovups xmmword ptr [rbx-40h], xmm0
            vmovups xmm1, xmmword ptr [rax-30h]
            vmovups xmmword ptr [rbx-30h], xmm1
            vmovups xmm0, xmmword ptr [rax-20h]
            vmovups xmmword ptr [rbx-20h], xmm0
            vmovups xmm1, xmmword ptr [rax-10h]
            vmovups xmmword ptr [rbx-10h], xmm1
          }
          --v15;
        }
        while ( v15 );
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rbx], xmm0
          vmovups xmm1, xmmword ptr [rax+10h]
          vmovups xmmword ptr [rbx+10h], xmm1
          vmovups xmm0, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rbx+20h], xmm0
        }
        *(_QWORD *)&_RBX->weapon.attachmentVariationIndices[21] = *(_QWORD *)&_RAX->weapon.attachmentVariationIndices[21];
        goto LABEL_51;
      }
      Com_PrintError(1, "Reached the maximum number of ballistic instances. We might need to increase MAX_BALLISTIC_COUNT(%d) to handle more.", 600i64);
LABEL_51:
      ++m_ballisticInstancesCurrentFrame;
      if ( !--v9 )
        goto LABEL_52;
    }
    nextFree = _RBX->nextFree;
    this->m_firstFree = nextFree;
    if ( !nextFree )
      this->m_lastFree = NULL;
    goto LABEL_32;
  }
LABEL_52:
  v28 = DCONST_DVARBOOL_bg_ballisticsCompactArrays;
  if ( !DCONST_DVARBOOL_bg_ballisticsCompactArrays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsCompactArrays") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  if ( v28->current.enabled )
  {
    if ( this->m_numTouchedSlots < this->m_numSlotsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 283, ASSERT_TYPE_ASSERT, "(m_numTouchedSlots >= m_numSlotsActive)", (const char *)&queryFormat, "m_numTouchedSlots >= m_numSlotsActive") )
      __debugbreak();
    if ( this->m_numTouchedSlots )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rdi+40758h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm1, xmm1, xmm0
        vcomiss xmm1, cs:?IDEAL_MIN_FILL_RATE@?1??CompactStorage@?$BgBallistics@UCgBallisticInstance@@@@IEAAXXZ@4MA; float `BgBallistics<CgBallisticInstance>::CompactStorage(void)'::`2'::IDEAL_MIN_FILL_RATE
      }
    }
  }
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 950, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v34 = 0;
  if ( this->m_numTouchedSlots > 0 )
  {
    p_tracerSearched = &this->m_ballisticInstances[0].tracerSearched;
    do
    {
      if ( *(p_tracerSearched - 151) && !*(_QWORD *)(p_tracerSearched - 148) && !*p_tracerSearched )
      {
        v36 = *((_DWORD *)p_tracerSearched - 29);
        *p_tracerSearched = 1;
        v37 = CG_GetTracerLocalEntityByBulletId((const LocalClientNum_t)this->m_localClientNum, v36);
        *(_QWORD *)(p_tracerSearched - 148) = v37;
        if ( v37 )
          CgBallistics::CopyBallisticDataToTracer(this, (CgBallisticInstance *)(p_tracerSearched - 428), v37);
      }
      ++v34;
      p_tracerSearched += 440;
    }
    while ( v34 < this->m_numTouchedSlots );
  }
  this->m_ballisticInstanceEntryIndexNext = 0;
  this->m_workerCountLocal = 0;
  this->m_workerCountRemote = 0;
}

/*
==============
CgBallistics::FireBallistics
==============
*/
void CgBallistics::FireBallistics(CgBallistics *this, const int bulletId, const Weapon *r_weapon, const bool isAlternate, const bool isPlayerView, const bool shouldSpawnTracer, const PlayerHandIndex hand, const unsigned int randSeed, const BulletFireParams *fireParams, const vec3_t *shootingAxisRight, const vec3_t *shootingAxisUp, const int attackerEntNum, const bitarray<64> *attackerPerks, const vec3_t *tracerStart, const TagPair *tagPair, const int shootingTime, const bool shouldPredictCharacterImpacts)
{
  volatile int *p_m_ballisticInstanceEntryIndexNext; 
  int v22; 
  CgBallisticInstance *ballisticInstance; 
  bitarray<64> v24; 

  p_m_ballisticInstanceEntryIndexNext = &this->m_ballisticInstanceEntryIndexNext;
  if ( (((_BYTE)this + 88) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_ballisticInstanceEntryIndexNext) )
    __debugbreak();
  v22 = _InterlockedExchangeAdd(p_m_ballisticInstanceEntryIndexNext, 1u);
  if ( v22 < 50 )
  {
    ballisticInstance = &this->m_ballisticInstancesCurrentFrame[v22];
    memset_0(ballisticInstance, 0, sizeof(CgBallisticInstance));
    BgBallistics<CgBallisticInstance>::SetBallisticInstanceData(this, r_weapon, isAlternate, hand, fireParams, shootingAxisRight, shootingAxisUp, attackerEntNum, shootingTime, randSeed, ballisticInstance);
    ballisticInstance->isInUse = 1;
    ballisticInstance->bulletStillActive = 1;
    ballisticInstance->bulletId = bulletId;
    v24 = *attackerPerks;
    ballisticInstance->isPlayerView = isPlayerView;
    ballisticInstance->attackerPerks = v24;
    ballisticInstance->tagPair = *tagPair;
    ballisticInstance->shouldSpawnTracer = shouldSpawnTracer;
    ballisticInstance->shouldPredictCharacterImpact = shouldPredictCharacterImpacts;
    ballisticInstance->tracerStart = *tracerStart;
    CgBallistics::AddWorker(this, ballisticInstance);
  }
  else
  {
    Com_PrintWarning(14, "Reached the maximum number of new ballistic instances the client can handle in a single frame. Might need to bump up MAX_BALLISTIC_COUNT_PER_CLIENT_FRAME (%d)", 50i64);
  }
}

/*
==============
CgBallistics::GetSystem
==============
*/
CgBallistics *CgBallistics::GetSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( !(_BYTE)CgBallistics::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 195, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the ballistics system for localClientNum %d but the ballistics system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgBallistics::ms_allocatedCount )
  {
    LODWORD(v4) = CgBallistics::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 196, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgBallistics::ms_systemsArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 197, ASSERT_TYPE_ASSERT, "(ms_systemsArray[localClientNum])", "%s\n\tTrying to access unallocated ballistics system for localClientNum %d\n", "ms_systemsArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgBallistics::ms_systemsArray[v1];
}

/*
==============
CgBallistics::GetWhizbySphere
==============
*/
bool CgBallistics::GetWhizbySphere(CgBallistics *this, const vec3_t *bulletStartPos, const vec3_t *bulletEndPos, const vec3_t *localPlayerViewPos, vec3_t *outSoundCenterPoint, vec3_t *outBulletDirNormalized, float *outPlayerProjLengthOnBulletPath, float *outPlayerDistanceToBulletPath)
{
  bool result; 
  float v1[4]; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm1, xmm0, dword ptr [rdx]
  }
  _RBX = outBulletDirNormalized;
  _RSI = localPlayerViewPos;
  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  _RBP = outSoundCenterPoint;
  _R15 = outPlayerProjLengthOnBulletPath;
  _R14 = outPlayerDistanceToBulletPath;
  _RCX = outBulletDirNormalized;
  __asm
  {
    vmovss  dword ptr [rbx], xmm1
    vmovss  xmm0, dword ptr [r8+4]
    vsubss  xmm1, xmm0, dword ptr [rdx+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmovss  xmm0, dword ptr [r8+8]
    vsubss  xmm1, xmm0, dword ptr [rdx+8]
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rbx+8], xmm1
    vmovss  [rsp+88h+v1], xmm6
    vmovss  [rsp+88h+var_54], xmm6
    vmovss  [rsp+88h+var_50], xmm6
  }
  if ( VecNCompareCustomEpsilon(outBulletDirNormalized->v, v1, *(float *)&_XMM2, 3) )
  {
    result = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rbx+4]
      vmovss  xmm3, dword ptr [rbx+8]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vmovaps [rsp+88h+var_38], xmm7
      vaddss  xmm7, xmm2, xmm1
      vcomiss xmm7, xmm6
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    __asm
    {
      vmovaps xmm1, xmm7
      vrsqrtss xmm2, xmm1, xmm7
      vmulss  xmm0, xmm2, dword ptr [rbx]
      vmovaps xmm7, [rsp+88h+var_38]
      vmovss  dword ptr [rbx], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm5, xmm2, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm5
      vmovss  xmm0, dword ptr [rsi+4]
      vsubss  xmm1, xmm0, dword ptr [rdi+4]
      vmulss  xmm3, xmm1, dword ptr [rbx+4]
      vmovss  xmm2, dword ptr [rsi]
      vsubss  xmm0, xmm2, dword ptr [rdi]
      vmulss  xmm1, xmm0, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rsi+8]
      vsubss  xmm0, xmm2, dword ptr [rdi+8]
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm1, xmm0, xmm5
      vaddss  xmm5, xmm4, xmm1
      vcomiss xmm5, xmm6
      vmovss  dword ptr [r15], xmm5
      vmulss  xmm0, xmm5, dword ptr [rbx]
      vaddss  xmm2, xmm0, dword ptr [rdi]
      vmovss  dword ptr [rbp+0], xmm2
      vmulss  xmm0, xmm5, dword ptr [rbx+4]
      vaddss  xmm3, xmm0, dword ptr [rdi+4]
      vmovss  dword ptr [rbp+4], xmm3
      vmulss  xmm0, xmm5, dword ptr [rbx+8]
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rbp+8], xmm1
      vsubss  xmm0, xmm3, dword ptr [rsi+4]
      vsubss  xmm2, xmm2, dword ptr [rsi]
      vsubss  xmm3, xmm1, dword ptr [rsi+8]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vmovss  dword ptr [r14], xmm0
    }
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
  return result;
}

/*
==============
CgBallistics::InitializeWhizby
==============
*/
void CgBallistics::InitializeWhizby(CgBallistics *this, CgBallisticInstance *ballisticInstance)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v7; 
  const WeaponSFXPackage *SfxPackage; 
  const dvar_t *v9; 
  const BallisticInfo *BallisticInfo; 
  bool v15; 
  bool v16; 
  int Int_Internal_DebugName; 
  int v33; 
  float fmt; 
  float outPlayerProjLengthOnBulletPath; 
  float outPlayerDistanceToBulletPath; 
  float radius; 
  float ballisticTimeSecToTarget; 
  vec3_t outOrg; 
  vec3_t bulletEndPos; 
  vec3_t outDisplacement; 
  vec3_t inBulletDir; 
  vec3_t outSoundCenterPoint; 

  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 836, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  if ( !ballisticInstance->whizbyInitialized )
  {
    ballisticInstance->whizbyInitialized = 1;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 846, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v7 = DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint;
    if ( !DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBallisticWhizbyEnableRefPoint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled || ballisticInstance->attackerEntNum != LocalClientGlobals->predictedPlayerState.clientNum )
    {
      SfxPackage = BG_GetSfxPackage(&ballisticInstance->weapon, ballisticInstance->isAlternate);
      if ( SND_GetWhizby(SfxPackage) )
      {
        v9 = DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint;
        __asm { vmovaps [rsp+0F0h+var_40], xmm6 }
        if ( !DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBallisticWhizbyEnableRefPoint") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v9);
        if ( v9->current.enabled )
        {
          _RDI = DCONST_DVARVEC3_cg_debugBallisticWhizbyRefPoint;
          if ( !DCONST_DVARVEC3_cg_debugBallisticWhizbyRefPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBallisticWhizbyRefPoint") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+28h]
            vmovss  dword ptr [rbp+57h+outOrg], xmm0
            vmovss  xmm1, dword ptr [rdi+2Ch]
            vmovss  dword ptr [rbp+57h+outOrg+4], xmm1
            vmovss  xmm0, dword ptr [rdi+30h]
            vmovss  dword ptr [rbp+57h+outOrg+8], xmm0
          }
        }
        else
        {
          RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
        }
        *(double *)&_XMM0 = BG_Ballistics_HorizontalTravelTimeToTarget(&ballisticInstance->weapon, ballisticInstance->isAlternate, &ballisticInstance->shootingPos, &ballisticInstance->fireParams.dir, &outOrg);
        __asm { vmovaps xmm6, xmm0 }
        BallisticInfo = BG_GetBallisticInfo(&ballisticInstance->weapon, ballisticInstance->isAlternate);
        v15 = BallisticInfo == NULL;
        if ( !BallisticInfo )
        {
          v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 892, ASSERT_TYPE_ASSERT, "(ballisticInfo)", (const char *)&queryFormat, "ballisticInfo");
          v15 = !v16;
          if ( v16 )
            __debugbreak();
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm6, xmm0
        }
        if ( !v15 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rsi+24h]
            vmulss  xmm1, xmm0, cs:__real@3a83126f
            vcomiss xmm6, xmm1
          }
          if ( v15 )
          {
            *(double *)&_XMM0 = BG_GetBallisticMuzzleVelocityScale(&ballisticInstance->weapon, ballisticInstance->isAlternate);
            __asm
            {
              vmulss  xmm1, xmm6, cs:__real@447a0000
              vcvttss2si edx, xmm1; timeInFlightMs
              vmovaps xmm2, xmm0; scalar
            }
            BG_Ballistics_CalculateDisplacement(BallisticInfo, _EDX, *(const float *)&_XMM2, &ballisticInstance->fireParams.dir, &outDisplacement);
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+57h+outDisplacement]
              vaddss  xmm1, xmm0, dword ptr [rbx+0E8h]
              vmovss  xmm2, dword ptr [rbp+57h+outDisplacement+4]
              vaddss  xmm0, xmm2, dword ptr [rbx+0ECh]
              vmovss  dword ptr [rbp+57h+bulletEndPos], xmm1
              vmovss  xmm1, dword ptr [rbp+57h+outDisplacement+8]
              vaddss  xmm2, xmm1, dword ptr [rbx+0F0h]
              vmovss  dword ptr [rbp+57h+bulletEndPos+4], xmm0
              vmovss  dword ptr [rbp+57h+bulletEndPos+8], xmm2
            }
            if ( CgBallistics::GetWhizbySphere(this, &ballisticInstance->shootingPos, &bulletEndPos, &outOrg, &outSoundCenterPoint, &inBulletDir, &ballisticTimeSecToTarget, &radius) )
            {
              __asm
              {
                vmovss  xmm0, [rbp+57h+radius]
                vmovss  dword ptr [rsp+0F0h+outPlayerDistanceToBulletPath], xmm0
                vmovss  xmm0, [rbp+57h+ballisticTimeSecToTarget]
                vmovss  dword ptr [rsp+0F0h+outPlayerProjLengthOnBulletPath], xmm6
                vmovss  dword ptr [rsp+0F0h+fmt], xmm0
              }
              ballisticInstance->shouldPlayWhizbySfx = SND_GetWhizbyData((const LocalClientNum_t)this->m_localClientNum, SfxPackage, &outSoundCenterPoint, &inBulletDir, fmt, 1, outPlayerProjLengthOnBulletPath, outPlayerDistanceToBulletPath, &ballisticInstance->soundData.whizbyData);
              if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_debugBallisticWhizby, "cg_debugBallisticWhizby") )
              {
                Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_debugBallisticWhizbyDrawFrameCount, "cg_debugBallisticWhizbyDrawFrameCount");
                CG_DebugLine(&ballisticInstance->shootingPos, &bulletEndPos, &colorRed, 1, Int_Internal_DebugName);
                v33 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_debugBallisticWhizbyDrawFrameCount, "cg_debugBallisticWhizbyDrawFrameCount");
                CG_DebugLine(&ballisticInstance->shootingPos, &outOrg, &colorGreen, 1, v33);
              }
            }
          }
        }
        __asm { vmovaps xmm6, [rsp+0F0h+var_40] }
      }
    }
  }
}

/*
==============
CgBallistics::IsBallisticInstanceAlive
==============
*/
bool CgBallistics::IsBallisticInstanceAlive(CgBallistics *this, CgBallisticInstance *ballisticInstance)
{
  const BallisticInfo *BallisticInfo; 

  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 617, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  if ( !ballisticInstance->bulletStillActive )
    return 0;
  BallisticInfo = BG_GetBallisticInfo(&ballisticInstance->weapon, ballisticInstance->isAlternate);
  if ( !BallisticInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 625, ASSERT_TYPE_ASSERT, "(ballisticInfo)", (const char *)&queryFormat, "ballisticInfo") )
    __debugbreak();
  return ballisticInstance->lastSimulationTime - ballisticInstance->shootingTime < BallisticInfo->lifeTimeMs;
}

/*
==============
CgBallistics::OnCompactOperation
==============
*/
void CgBallistics::OnCompactOperation(CgBallistics *this, CgBallisticInstance *movedBallisticInstance)
{
  localEntity_s *tracer; 

  if ( !movedBallisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 1065, ASSERT_TYPE_ASSERT, "(movedBallisticInstance)", (const char *)&queryFormat, "movedBallisticInstance") )
    __debugbreak();
  tracer = movedBallisticInstance->tracer;
  if ( tracer )
    tracer->u.tracer.ballistics.ballisticInstance = movedBallisticInstance;
}

/*
==============
CgBallistics::ShouldFireBallisticBullet
==============
*/
bool CgBallistics::ShouldFireBallisticBullet(CgBallistics *this, const Weapon *weapon, const bool isAlternate, const int attackerEntNum)
{
  const BallisticInfo *BallisticInfo; 
  const dvar_t *v7; 
  centity_t *Entity; 
  centity_t *v9; 
  entityType_s eType; 
  CgEntitySystem *EntitySystem; 

  BallisticInfo = BG_GetBallisticInfo(weapon, isAlternate);
  if ( !BallisticInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 420, ASSERT_TYPE_ASSERT, "(ballisticInfo)", (const char *)&queryFormat, "ballisticInfo") )
    __debugbreak();
  v7 = DCONST_DVARBOOL_bg_ballisticsEnabled;
  if ( !DCONST_DVARBOOL_bg_ballisticsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled )
    return 0;
  if ( !BallisticInfo->enableBallisticTrajectory )
    return 0;
  if ( (unsigned int)attackerEntNum >= 0x7FE )
    return 0;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, attackerEntNum);
  v9 = Entity;
  if ( (Entity->flags & 1) == 0 )
    return 0;
  eType = Entity->nextState.eType;
  EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)this->m_localClientNum);
  if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 1098, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
    __debugbreak();
  return eType != ET_ACTOR && !CgEntitySystem::IsScriptedAgent(EntitySystem, &v9->nextState);
}

/*
==============
CgBallistics::StartWorkers
==============
*/
void CgBallistics::StartWorkers(CgBallistics *this, const bool processLocalBallisticInstances)
{
  int v4; 
  bool *p_isPlayerView; 
  bool v6; 
  volatile int *p_m_workerCountLocal; 
  LocalClientNum_t data; 
  bool *v9; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 640, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v4 = 0;
  if ( this->m_numTouchedSlots > 0 )
  {
    p_isPlayerView = &this->m_ballisticInstances[0].isPlayerView;
    do
    {
      if ( *(p_isPlayerView - 148) )
      {
        v6 = *p_isPlayerView;
        if ( processLocalBallisticInstances )
        {
          if ( v6 )
          {
            p_m_workerCountLocal = &this->m_workerCountLocal;
            goto LABEL_10;
          }
        }
        else if ( !v6 )
        {
          p_m_workerCountLocal = &this->m_workerCountRemote;
LABEL_10:
          if ( ((unsigned __int8)p_m_workerCountLocal & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_m_workerCountLocal) )
            __debugbreak();
          if ( _InterlockedIncrement(p_m_workerCountLocal) <= 50 )
          {
            data = this->m_localClientNum;
            v9 = p_isPlayerView - 425;
            Sys_AddWorkerCmd(WRKCMD_SIM_BALLISTICS, &data);
          }
          else
          {
            if ( ((unsigned __int8)p_m_workerCountLocal & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_m_workerCountLocal) )
              __debugbreak();
            _InterlockedDecrement(p_m_workerCountLocal);
          }
        }
      }
      ++v4;
      p_isPlayerView += 440;
    }
    while ( v4 < this->m_numTouchedSlots );
  }
}

/*
==============
CgBallistics::StopWhizby
==============
*/
void CgBallistics::StopWhizby(CgBallistics *this, CgBallisticInstance *ballisticInstance)
{
  unsigned int whizbyInPlayId; 
  unsigned int whizbyOutPlayId; 

  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 784, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  if ( ballisticInstance->whizbySfxPlayed )
  {
    whizbyInPlayId = ballisticInstance->soundData.whizbyInPlayId;
    if ( whizbyInPlayId )
      SND_StopVoiceById(whizbyInPlayId);
    whizbyOutPlayId = ballisticInstance->soundData.whizbyOutPlayId;
    if ( whizbyOutPlayId )
      SND_StopVoiceById(whizbyOutPlayId);
  }
}

/*
==============
CgBallistics::UpdateFoliage
==============
*/
void CgBallistics::UpdateFoliage(CgBallistics *this, CgBallisticInstance *ballisticInstance)
{
  int attackerEntNum; 
  const centity_t *Entity; 

  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 689, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  if ( ballisticInstance->needsToPlayFoliageSound )
  {
    attackerEntNum = ballisticInstance->attackerEntNum;
    ballisticInstance->needsToPlayFoliageSound = 0;
    Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, attackerEntNum);
    CG_Foliage_PlayBulletSound((const LocalClientNum_t)this->m_localClientNum, Entity, &ballisticInstance->foliageSoundPos, ballisticInstance->foliageSoundSurfaceTypeId);
  }
}

/*
==============
CgBallistics::UpdateTracerOnBallisticInstanceDestroyed
==============
*/
void CgBallistics::UpdateTracerOnBallisticInstanceDestroyed(CgBallistics *this, CgBallisticInstance *ballisticInstance, localEntity_s *tracer)
{
  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 937, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  if ( !tracer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 938, ASSERT_TYPE_ASSERT, "(tracer)", (const char *)&queryFormat, "tracer") )
    __debugbreak();
  CgBallistics::CopyBallisticDataToTracer(this, ballisticInstance, tracer);
  tracer->endTime = ballisticInstance->lastSimulationTime + 100;
  tracer->u.tracer.ballistics.ballisticInstance = NULL;
}

/*
==============
CgBallistics::UpdateWhizby
==============
*/
void CgBallistics::UpdateWhizby(CgBallistics *this, CgBallisticInstance *ballisticInstance)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v9; 
  const SndAliasList *whizbyCrackAlias; 
  const SndAliasList *whizbyInAlias; 
  const SndAliasList *whizbyOutAlias; 
  const dvar_t *v44; 
  int Int_Internal_DebugName; 
  int v70; 
  int v71; 
  float outPlayerDistanceToBulletPath; 
  float outPlayerProjLengthOnBulletPath; 
  vec3_t outSoundCenterPoint; 
  vec3_t outOrg; 
  vec3_t outBulletDirNormalized; 

  _RBX = ballisticInstance;
  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 706, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  CgBallistics::InitializeWhizby(this, _RBX);
  if ( _RBX->shouldPlayWhizbySfx )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 718, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( !_RBX->whizbySfxPlayed && LocalClientGlobals->time - _RBX->shootingTime >= _RBX->soundData.whizbyData.whizbyDelayMs )
    {
      _RBX->whizbySfxPlayed = 1;
      v9 = DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint;
      __asm { vmovaps [rsp+0E8h+var_68], xmm9 }
      if ( !DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBallisticWhizbyEnableRefPoint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.enabled )
      {
        _RBP = DCONST_DVARVEC3_cg_debugBallisticWhizbyRefPoint;
        if ( !DCONST_DVARVEC3_cg_debugBallisticWhizbyRefPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBallisticWhizbyRefPoint") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBP);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+28h]
          vmovss  xmm1, dword ptr [rbp+2Ch]
          vmovss  dword ptr [rsp+0E8h+outOrg], xmm0
          vmovss  xmm0, dword ptr [rbp+30h]
          vmovss  dword ptr [rsp+0E8h+outOrg+8], xmm0
          vmovss  dword ptr [rsp+0E8h+outOrg+4], xmm1
        }
      }
      else
      {
        RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      }
      __asm
      {
        vmovaps [rsp+0E8h+var_38], xmm6
        vmovaps [rsp+0E8h+var_48], xmm7
        vmovaps [rsp+0E8h+var_58], xmm8
        vmovss  xmm9, cs:__real@3f000000
      }
      if ( CgBallistics::GetWhizbySphere(this, &_RBX->shootingPos, &_RBX->tracerCurrentFinish, &outOrg, &outSoundCenterPoint, &outBulletDirNormalized, &outPlayerProjLengthOnBulletPath, &outPlayerDistanceToBulletPath) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+174h]
          vsubss  xmm3, xmm0, dword ptr [rbx+168h]
          vmovss  xmm1, dword ptr [rbx+178h]
          vsubss  xmm2, xmm1, dword ptr [rbx+16Ch]
          vmovss  xmm0, dword ptr [rbx+17Ch]
          vsubss  xmm4, xmm0, dword ptr [rbx+170h]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vmulss  xmm8, xmm1, xmm9
          vxorps  xmm3, xmm8, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm0, xmm3, dword ptr [rsp+0E8h+var_80]
          vaddss  xmm0, xmm0, dword ptr [rsp+0E8h+outSoundCenterPoint]
          vmulss  xmm1, xmm3, dword ptr [rsp+0E8h+var_80+4]
          vmulss  xmm2, xmm8, dword ptr [rsp+0E8h+var_80+4]
          vmovss  dword ptr [rbx+168h], xmm0
          vaddss  xmm0, xmm1, dword ptr [rsp+0E8h+outSoundCenterPoint+4]
          vmulss  xmm1, xmm3, dword ptr [rsp+0E8h+var_80+8]
          vmovss  dword ptr [rbx+16Ch], xmm0
          vaddss  xmm0, xmm1, dword ptr [rsp+0E8h+outSoundCenterPoint+8]
          vmulss  xmm1, xmm8, dword ptr [rsp+0E8h+var_80]
          vmovss  dword ptr [rbx+170h], xmm0
          vaddss  xmm0, xmm1, dword ptr [rsp+0E8h+outSoundCenterPoint]
          vaddss  xmm1, xmm2, dword ptr [rsp+0E8h+outSoundCenterPoint+4]
          vmovss  dword ptr [rbx+174h], xmm0
          vmulss  xmm0, xmm8, dword ptr [rsp+0E8h+var_80+8]
          vaddss  xmm2, xmm0, dword ptr [rsp+0E8h+outSoundCenterPoint+8]
          vmovss  dword ptr [rbx+17Ch], xmm2
          vmovss  dword ptr [rbx+178h], xmm1
        }
      }
      whizbyCrackAlias = _RBX->soundData.whizbyData.whizbyCrackAlias;
      if ( whizbyCrackAlias )
        SND_PlaySoundAlias(whizbyCrackAlias, (const LocalClientNum_t)this->m_localClientNum, 2046, &_RBX->soundData.whizbyData.whizbySndInPos, 0, SASYS_CGAME);
      whizbyInAlias = _RBX->soundData.whizbyData.whizbyInAlias;
      if ( whizbyInAlias )
        _RBX->soundData.whizbyInPlayId = SND_PlaySoundAlias(whizbyInAlias, (const LocalClientNum_t)this->m_localClientNum, 2046, &_RBX->soundData.whizbyData.whizbySndInPos, 0, SASYS_CGAME);
      whizbyOutAlias = _RBX->soundData.whizbyData.whizbyOutAlias;
      if ( whizbyOutAlias )
        _RBX->soundData.whizbyOutPlayId = SND_PlaySoundAlias(whizbyOutAlias, (const LocalClientNum_t)this->m_localClientNum, 2046, &_RBX->soundData.whizbyData.whizbySndOutPos, 0, SASYS_CGAME);
      v44 = DCONST_DVARBOOL_cg_debugBallisticWhizby;
      if ( !DCONST_DVARBOOL_cg_debugBallisticWhizby && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBallisticWhizby") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v44);
      if ( v44->current.enabled )
      {
        __asm
        {
          vmovss  xmm8, dword ptr [rbx+168h]
          vmovss  xmm6, dword ptr [rbx+16Ch]
          vmovss  xmm4, dword ptr [rbx+170h]
          vmovss  xmm0, dword ptr [rbx+174h]
          vsubss  xmm1, xmm0, xmm8
          vmovss  xmm0, dword ptr [rbx+178h]
          vmulss  xmm2, xmm1, xmm9
          vaddss  xmm7, xmm2, xmm8
          vsubss  xmm1, xmm0, xmm6
          vmovss  xmm0, dword ptr [rbx+17Ch]
          vmulss  xmm2, xmm1, xmm9
          vaddss  xmm5, xmm2, xmm6
          vsubss  xmm1, xmm0, xmm4
          vmulss  xmm2, xmm1, xmm9
          vaddss  xmm3, xmm2, xmm4
          vmovss  dword ptr [rsp+0E8h+outSoundCenterPoint], xmm7
          vsubss  xmm7, xmm7, xmm8
          vmovss  dword ptr [rsp+0E8h+outSoundCenterPoint+8], xmm3
          vsubss  xmm8, xmm3, xmm4
          vmovss  dword ptr [rsp+0E8h+outSoundCenterPoint+4], xmm5
          vsubss  xmm6, xmm5, xmm6
        }
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_debugBallisticWhizbyDrawFrameCount, "cg_debugBallisticWhizbyDrawFrameCount");
        __asm
        {
          vmulss  xmm1, xmm6, xmm6
          vmulss  xmm0, xmm7, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm8, xmm8
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm1, xmm2, xmm2; radius
        }
        CG_DebugSphere(&outSoundCenterPoint, *(float *)&_XMM1, &colorYellow, 1, Int_Internal_DebugName);
        v70 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_debugBallisticWhizbyDrawFrameCount, "cg_debugBallisticWhizbyDrawFrameCount");
        CG_DebugStar(&_RBX->soundData.whizbyData.whizbySndInPos, &colorBlue, 1, v70);
        v71 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_debugBallisticWhizbyDrawFrameCount, "cg_debugBallisticWhizbyDrawFrameCount");
        CG_DebugStar(&_RBX->soundData.whizbyData.whizbySndOutPos, &colorGreen, 1, v71);
      }
      __asm
      {
        vmovaps xmm8, [rsp+0E8h+var_58]
        vmovaps xmm7, [rsp+0E8h+var_48]
        vmovaps xmm6, [rsp+0E8h+var_38]
        vmovaps xmm9, [rsp+0E8h+var_68]
      }
    }
  }
}

/*
==============
CgBallistics::WaitForWorkers
==============
*/
void CgBallistics::WaitForWorkers(CgBallistics *this)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 975, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SIM_BALLISTICS);
}

