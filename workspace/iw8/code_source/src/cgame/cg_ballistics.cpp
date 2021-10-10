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
void CG_Ballistics_AdjustDistance(const float maxDistance, const bool increment, const float inputRatio)
{
  int distAdjustScaleIndex; 
  __int128 v5; 
  __int128 currentDistance_low; 

  distAdjustScaleIndex = s_debugOverlayInputState.distAdjustScaleIndex;
  if ( s_debugOverlayInputState.distAdjustScaleIndex >= 5u )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 57, ASSERT_TYPE_ASSERT, "(unsigned)( s_debugOverlayInputState.distAdjustScaleIndex ) < (unsigned)( (5) )", "s_debugOverlayInputState.distAdjustScaleIndex doesn't index MAX_DIST_ADJUST_SCALE\n\t%i not in [0, %i)", s_debugOverlayInputState.distAdjustScaleIndex, 5) )
      __debugbreak();
    distAdjustScaleIndex = s_debugOverlayInputState.distAdjustScaleIndex;
  }
  v5 = LODWORD(DIST_ADJUSTMENT);
  if ( increment )
  {
    *(float *)&v5 = (float)((float)(DIST_ADJUSTMENT * distAdjustScales[distAdjustScaleIndex]) * inputRatio) + s_debugOverlayInputState.currentDistance;
    _XMM3 = v5;
    __asm { vminss  xmm0, xmm3, xmm7 }
    s_debugOverlayInputState.currentDistance = *(float *)&_XMM0;
  }
  else
  {
    currentDistance_low = LODWORD(s_debugOverlayInputState.currentDistance);
    *(float *)&currentDistance_low = s_debugOverlayInputState.currentDistance - (float)((float)(DIST_ADJUSTMENT * distAdjustScales[distAdjustScaleIndex]) * inputRatio);
    _XMM4 = currentDistance_low;
    __asm { vmaxss  xmm1, xmm4, xmm0 }
    s_debugOverlayInputState.currentDistance = *(float *)&_XMM1;
  }
}

/*
==============
CG_Ballistics_ExecuteWorkerThread
==============
*/
void CG_Ballistics_ExecuteWorkerThread(const void *const cmdInfo)
{
  __int64 v1; 
  CgWeaponMap *v3; 
  cg_t *LocalClientGlobals; 
  __int64 v5; 
  CgBallistics *v6; 
  double BulletTerminationRange; 
  const dvar_t *v8; 
  float v9; 
  int v10; 
  int integer; 
  bool updated; 
  int v13; 
  int v14; 
  bool shouldSpawnTracer; 
  _DWORD *v16; 
  float v17; 
  float v18; 
  bool v19; 
  float v20; 
  float v21; 
  const dvar_t *v22; 
  char v23; 
  centity_t *inflictorEnt; 
  bitarray<64> *r_attackerPerks; 
  bool shouldDeferEvents; 
  unsigned __int8 outHitSurfaceTypeId[7]; 
  centity_t *Entity; 
  CgWeaponSystem *v29; 
  playerState_s *p_predictedPlayerState; 
  CgBallistics *v31; 
  vec3_t outLastBulletPos; 
  vec3_t outHitPos; 

  v1 = *(int *)cmdInfo;
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v3 = CgWeaponMap::ms_instance[v1];
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 1111, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  v5 = *((_QWORD *)cmdInfo + 1);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", v1) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(r_attackerPerks) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(inflictorEnt) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", inflictorEnt, r_attackerPerks) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v1] )
  {
    LODWORD(r_attackerPerks) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", r_attackerPerks) )
      __debugbreak();
  }
  v29 = CgWeaponSystem::ms_weaponSystemArray[v1];
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 1119, ASSERT_TYPE_ASSERT, "(weaponSystem)", (const char *)&queryFormat, "weaponSystem") )
    __debugbreak();
  if ( !(_BYTE)CgBallistics::ms_allocatedType )
  {
    LODWORD(r_attackerPerks) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 195, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the ballistics system for localClientNum %d but the ballistics system type is not known\n", "ms_allocatedType != GameModeType::NONE", r_attackerPerks) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgBallistics::ms_allocatedCount )
  {
    LODWORD(r_attackerPerks) = CgBallistics::ms_allocatedCount;
    LODWORD(inflictorEnt) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 196, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", inflictorEnt, r_attackerPerks) )
      __debugbreak();
  }
  if ( !CgBallistics::ms_systemsArray[v1] )
  {
    LODWORD(r_attackerPerks) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 197, ASSERT_TYPE_ASSERT, "(ms_systemsArray[localClientNum])", "%s\n\tTrying to access unallocated ballistics system for localClientNum %d\n", "ms_systemsArray[localClientNum]", r_attackerPerks) )
      __debugbreak();
  }
  v6 = CgBallistics::ms_systemsArray[v1];
  v31 = v6;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 1122, ASSERT_TYPE_ASSERT, "(balisticsSystem)", (const char *)&queryFormat, "balisticsSystem") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)v1, *(_DWORD *)(v5 + 260));
  if ( (Entity->flags & 1) == 0 )
  {
    *(_BYTE *)(v5 + 426) = 0;
    return;
  }
  shouldDeferEvents = !Sys_IsMainThread();
  BulletTerminationRange = BG_GetBulletTerminationRange(v3, &LocalClientGlobals->predictedPlayerState, (const Weapon *)v5, *(_BYTE *)(v5 + 276));
  v8 = DVARINT_cg_ballisticsMaxSimStepsPerServerFrame;
  v9 = *(float *)&BulletTerminationRange;
  if ( !DVARINT_cg_ballisticsMaxSimStepsPerServerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ballisticsMaxSimStepsPerServerFrame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v10 = 0;
  integer = v8->current.integer;
  if ( *(_DWORD *)(v5 + 268) <= LocalClientGlobals->time )
  {
    while ( 1 )
    {
      updated = BgBallistics<CgBallisticInstance>::UpdateBallisticPosition(v6, (CgBallisticInstance *)v5, v9);
      v13 = *(_DWORD *)(v5 + 268);
      v14 = *(_DWORD *)(v5 + 264);
      shouldSpawnTracer = *(_BYTE *)(v5 + 427) && v13 == v14;
      v16 = *(_DWORD **)(v5 + 280);
      if ( v13 == v14 )
      {
        *(_DWORD *)(v5 + 288) = *(_DWORD *)(v5 + 176);
        *(_DWORD *)(v5 + 292) = *(_DWORD *)(v5 + 180);
        v17 = *(float *)(v5 + 184);
      }
      else
      {
        *(_DWORD *)(v5 + 288) = *(_DWORD *)(v5 + 300);
        *(_DWORD *)(v5 + 292) = *(_DWORD *)(v5 + 304);
        v17 = *(float *)(v5 + 308);
      }
      *(float *)(v5 + 296) = v17;
      if ( v16 )
      {
        v16[26] = *(_DWORD *)(v5 + 288);
        v16[27] = *(_DWORD *)(v5 + 292);
        v16[28] = *(_DWORD *)(v5 + 296);
      }
      *(_DWORD *)(v5 + 220) = *(_DWORD *)(v5 + 268);
      ++v10;
      *(_BYTE *)(v5 + 426) = CgWeaponSystem::SimulateBulletFire_DoBulletPathSim(v29, (BulletFireParams *)(v5 + 72), *(_DWORD *)(v5 + 312), (const Weapon *)v5, *(_BYTE *)(v5 + 276), Entity, (const bitarray<64> *)(v5 + 316), -1, 2047, (const scr_string_t)0, (const vec3_t *)(v5 + 324), 0.0, *(_BYTE *)(v5 + 425), *(PlayerHandIndex *)(v5 + 256), *(const TagPair *)(v5 + 348), 0, shouldSpawnTracer, 0, shouldDeferEvents, *(_BYTE *)(v5 + 433), &outLastBulletPos);
      if ( updated )
        *(_BYTE *)(v5 + 426) = 0;
      v18 = outLastBulletPos.v[1];
      *(float *)(v5 + 300) = outLastBulletPos.v[0];
      *(float *)(v5 + 308) = outLastBulletPos.v[2];
      *(float *)(v5 + 304) = v18;
      if ( !*(_BYTE *)(v5 + 432) && p_predictedPlayerState->clientNum != *(_DWORD *)(v5 + 260) )
      {
        v19 = CG_Foliage_BulletTrace((const LocalClientNum_t)v1, (const vec3_t *)(v5 + 176), (const vec3_t *)(v5 + 300), &outHitPos, outHitSurfaceTypeId);
        *(_BYTE *)(v5 + 432) = v19;
        if ( v19 )
        {
          v20 = outHitPos.v[0];
          v21 = outHitPos.v[1];
          *(_BYTE *)(v5 + 424) = outHitSurfaceTypeId[0];
          *(float *)(v5 + 336) = v20;
          *(float *)(v5 + 344) = outHitPos.v[2];
          *(float *)(v5 + 340) = v21;
        }
      }
      v22 = DCONST_DVARINT_bg_ballisticsSimTimeStepMs;
      if ( !DCONST_DVARINT_bg_ballisticsSimTimeStepMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsSimTimeStepMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      *(_DWORD *)(v5 + 268) += v22->current.integer;
      v23 = *(_BYTE *)(v5 + 426);
      if ( v16 )
      {
        v16[29] = *(_DWORD *)(v5 + 300);
        v16[30] = *(_DWORD *)(v5 + 304);
        v16[31] = *(_DWORD *)(v5 + 308);
        v16[35] = *(_DWORD *)(v5 + 220);
        v16[36] = *(_DWORD *)(v5 + 224);
        if ( !v23 )
        {
          v16[15] = *(_DWORD *)(v5 + 268) + 100;
          return;
        }
      }
      else if ( !v23 )
      {
        return;
      }
      if ( integer > 0 && v10 >= integer || *(_DWORD *)(v5 + 268) > LocalClientGlobals->time )
        return;
      v6 = v31;
    }
  }
}

/*
==============
CG_Ballistics_UpdateDebugOverlayInput
==============
*/
void CG_Ballistics_UpdateDebugOverlayInput(const float maxDistance)
{
  int frametime; 
  double Axis; 
  float v4; 
  bool IsButtonDown; 
  bool v6; 
  int buttonHoldTime; 
  bool v8; 
  int v9; 
  int *v10; 

  frametime = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->frametime;
  Axis = CG_DrawDebugInput_GetAxis(DRAW_DEBUG_INPUT_AXIS_RIGHT_X);
  v4 = *(float *)&Axis;
  if ( ENABLE_ANALOG_INPUT && COERCE_FLOAT(LODWORD(Axis) & _xmm) > 0.000001 )
  {
    if ( *(float *)&Axis <= 0.0 )
    {
      LODWORD(v4) = LODWORD(Axis) ^ _xmm;
      if ( COERCE_FLOAT(LODWORD(Axis) ^ _xmm) <= 0.0 )
      {
LABEL_5:
        *(_QWORD *)&s_debugOverlayInputState.distDirection = 0i64;
        s_debugOverlayInputState.lastProcessedTime = 0;
LABEL_6:
        s_debugOverlayInputState.distAdjustScaleIndex = 0;
        return;
      }
LABEL_9:
      if ( s_debugOverlayInputState.distDirection != CG_BALLISTIC_DIST_INPUT_DIR_LEFT )
      {
        CG_Ballistics_AdjustDistance(maxDistance, 0, v4);
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
        v8 = 0;
        goto LABEL_19;
      }
      goto LABEL_20;
    }
  }
  else
  {
    IsButtonDown = CG_DrawDebugInput_IsButtonDown(DRAW_DEBUG_INPUT_BUTTON_LEFT);
    v6 = CG_DrawDebugInput_IsButtonDown(DRAW_DEBUG_INPUT_BUTTON_RIGHT);
    if ( IsButtonDown )
    {
      v4 = FLOAT_1_0;
      goto LABEL_9;
    }
    if ( !v6 )
      goto LABEL_5;
    v4 = FLOAT_1_0;
  }
  if ( s_debugOverlayInputState.distDirection != CG_BALLISTIC_DIST_INPUT_DIR_RIGHT )
  {
    CG_Ballistics_AdjustDistance(maxDistance, 1, v4);
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
    v8 = 1;
LABEL_19:
    CG_Ballistics_AdjustDistance(maxDistance, v8, v4);
    buttonHoldTime = s_debugOverlayInputState.buttonHoldTime;
    s_debugOverlayInputState.lastProcessedTime = s_debugOverlayInputState.buttonHoldTime;
    if ( s_debugOverlayInputState.distDirection == CG_BALLISTIC_DIST_INPUT_DIR_NONE )
      goto LABEL_6;
  }
LABEL_20:
  v9 = 3;
  v10 = &distAdjustScaleTimes[3];
  while ( buttonHoldTime < *v10 )
  {
    --v9;
    if ( (__int64)--v10 < (__int64)distAdjustScaleTimes )
      return;
  }
  s_debugOverlayInputState.distAdjustScaleIndex = v9 + 1;
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
  __int128 v2; 
  __int128 v3; 
  void *v4; 
  __int64 v6; 
  bool v7; 
  const ScreenPlacement *v8; 
  __int64 m_localClientNum; 
  CgWeaponMap *v10; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  const Weapon *CurrentWeaponForPlayer; 
  __int64 p_weapFlags; 
  char isAlternate; 
  const BallisticInfo *BallisticInfo; 
  centity_t *Entity; 
  bool v18; 
  __int64 v20; 
  const dvar_t *v21; 
  BallisticInfoCalculated *calculated; 
  int numDistanceEntries; 
  int v24; 
  float v25; 
  float v29; 
  float v30; 
  double BallisticMuzzleVelocityScale; 
  const char *v32; 
  float v34; 
  __int64 numDataEntries; 
  float *v36; 
  float v37; 
  float v38; 
  float v39; 
  double v40; 
  float v41; 
  float v44; 
  __int64 v45; 
  float v46; 
  float v47; 
  int v50; 
  int v51; 
  unsigned __int64 v52; 
  int v53; 
  BallisticInfoCalculated *v54; 
  int v55; 
  int v56; 
  BallisticInfoCalculated *v57; 
  int v58; 
  int v59; 
  BallisticInfoCalculated *v60; 
  int v61; 
  int v62; 
  BallisticInfoCalculated *v63; 
  int v64; 
  int v65; 
  BallisticInfoCalculated *v66; 
  int v67; 
  int v68; 
  unsigned __int64 v69; 
  __int64 v71; 
  float v72; 
  float v76; 
  float v77; 
  float v78; 
  double currentDistance; 
  float v80; 
  Weapon *r_weapon; 
  bool v82; 
  char v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  GfxFont *font; 
  float data[84]; 
  float v91[152]; 
  char output[1024]; 
  char dest[6144]; 
  __int128 v94; 

  v4 = alloca(v1);
  v6 = tls_index;
  if ( dword_148C1103C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_148C1103C);
    if ( dword_148C1103C == -1 )
    {
      SECTION_BULLET_DROP_GRAPH_Y_OFFSET = GRAPH_HEIGHT + 20.0;
      j__Init_thread_footer(&dword_148C1103C);
    }
  }
  if ( dword_148C11044 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v6) + 1772i64) )
  {
    j__Init_thread_header(&dword_148C11044);
    if ( dword_148C11044 == -1 )
    {
      SECTION_BULLET_TRAVEL_GRAPH_Y_OFFSET = GRAPH_HEIGHT + 20.0;
      j__Init_thread_footer(&dword_148C11044);
    }
  }
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v8 = &scrPlaceViewDisplay[this->m_localClientNum];
      goto LABEL_14;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v7 )
      __debugbreak();
  }
  v8 = &scrPlaceFull;
LABEL_14:
  font = UI_GetFontHandle(v8, 6, MY_SCALE);
  memset_0(dest, 0, sizeof(dest));
  m_localClientNum = this->m_localClientNum;
  if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v10 = CgWeaponMap::ms_instance[m_localClientNum];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 284, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 287, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v10, p_predictedPlayerState);
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
    isAlternate = 0;
    goto LABEL_34;
  }
LABEL_32:
  isAlternate = 1;
LABEL_34:
  BallisticInfo = BG_GetBallisticInfo(CurrentWeaponForPlayer, isAlternate);
  if ( !BallisticInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 295, ASSERT_TYPE_ASSERT, "(ballisticInfo)", (const char *)&queryFormat, "ballisticInfo") )
    __debugbreak();
  BG_GetWeaponName(CurrentWeaponForPlayer, output, 0x400u);
  v82 = BG_GetWeaponType(CurrentWeaponForPlayer, isAlternate) == WEAPTYPE_BULLET;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, p_predictedPlayerState->clientNum);
  if ( !Entity )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 303, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    Entity = NULL;
  }
  v18 = v82;
  if ( v82 )
  {
    *(double *)&v2 = BG_GetBulletRange<CgBallisticInstance>(v10, this, p_predictedPlayerState, &Entity->nextState, &p_predictedPlayerState->perks, CurrentWeaponForPlayer, isAlternate);
    v18 = v82;
    _XMM6 = v2;
  }
  else
  {
    _XMM6 = 0i64;
  }
  v20 = 0i64;
  if ( BallisticInfo->enableBallisticTrajectory )
  {
    v21 = DCONST_DVARINT_bg_ballisticsSimTimeStepMs;
    if ( !DCONST_DVARINT_bg_ballisticsSimTimeStepMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsSimTimeStepMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    calculated = BallisticInfo->calculated;
    numDistanceEntries = calculated->numDistanceEntries;
    v24 = numDistanceEntries - 1;
    if ( v21->current.integer >> 3 < numDistanceEntries )
      v24 = v21->current.integer >> 3;
    v20 = 0i64;
    v25 = calculated->distances[v24];
  }
  else
  {
    _XMM0 = v18;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm6, xmm7, xmm2
    }
    v25 = *(float *)&_XMM0;
  }
  v29 = BASE_X_OFFSET;
  v30 = BASE_Y_OFFSET;
  v87 = BASE_X_OFFSET;
  BallisticMuzzleVelocityScale = BG_GetBallisticMuzzleVelocityScale(CurrentWeaponForPlayer, isAlternate);
  v32 = "no";
  if ( BallisticInfo->enableBallisticTrajectory )
    v32 = "yes";
  Com_sprintf(dest, 0x1800ui64, "^7=== BALLISTICS ===\n^3Use D-PAD Left-Right (or keyboard left-right arrows for PC) to adjust the distance\n^7Weapon: ^5%s\n^7Uses Ballistic: ^5%s\n^7Max Range: ^5%.2f inches (%.2f meters)\n^7Hit Scan Range: ^5%.2f inches (%.2f meters)\n^7Muzzle Vel. Scalar: ^5%.2f\n", output, v32, *(float *)&_XMM6, (float)(*(float *)&_XMM6 * 0.0254), v25, (float)(v25 * 0.0254), *(float *)&BallisticMuzzleVelocityScale);
  UI_DrawText(v8, dest, 6144, font, v29, v30, 1, 1, MY_SCALE, &colorWhite, 3);
  if ( v82 && BallisticInfo->enableBallisticTrajectory )
  {
    v86 = v30 + SECTION_BALLISTIC_Y_OFFSET;
    _XMM0 = LODWORD(FLOAT_40000_0);
    v94 = v3;
    CG_Ballistics_UpdateDebugOverlayInput(40000.0);
    v34 = 0.0;
    numDataEntries = 0i64;
    v36 = data;
    do
    {
      v37 = (float)v20;
      *(double *)&_XMM0 = BG_Ballistics_TravelTimeForDistance(CurrentWeaponForPlayer, isAlternate, v37);
      if ( *(float *)&_XMM0 == -3.4028235e38 )
        break;
      *((_QWORD *)&_XMM0 + 1) = 0i64;
      *v36++ = (float)((float)(193.0 * BallisticInfo->gravityFactor) * *(float *)&_XMM0) * *(float *)&_XMM0;
      ++numDataEntries;
      v20 += 500i64;
      v34 = v37;
    }
    while ( (unsigned __int64)v20 < 0x9E34 );
    if ( !numDataEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 387, ASSERT_TYPE_ASSERT, "(bulletDropActualSampleCount > 0)", (const char *)&queryFormat, "bulletDropActualSampleCount > 0") )
      __debugbreak();
    v38 = data[numDataEntries - 1];
    v83 = 0;
    v85 = v38;
    v84 = 0.0;
    v39 = 0.0;
    v40 = BG_Ballistics_TravelTimeForDistance(CurrentWeaponForPlayer, isAlternate, s_debugOverlayInputState.currentDistance);
    v41 = *(float *)&v40;
    if ( *(float *)&v40 == -3.4028235e38 )
    {
      v83 = 1;
    }
    else
    {
      _XMM0 = LODWORD(s_debugOverlayInputState.currentDistance);
      __asm { vminss  xmm2, xmm0, xmm8; dist }
      *(double *)&_XMM0 = I_fdistnormalized(0.0, v34, *(float *)&_XMM2);
      v84 = *(float *)&_XMM0;
      v44 = (float)((float)(193.0 * BallisticInfo->gravityFactor) * v41) * v41;
      I_fclamp(v44, 0.0, v38);
      v45 = 0i64;
      v39 = v44;
      if ( numDataEntries != 1 )
      {
        while ( 1 )
        {
          v46 = data[v45];
          v47 = data[v45 + 1];
          if ( v45 == numDataEntries - 2 || v44 >= v46 && v44 <= v47 )
            break;
          if ( ++v45 >= (unsigned __int64)(numDataEntries - 1) )
            goto LABEL_71;
        }
        I_fdistnormalized(v46, v47, v44);
      }
LABEL_71:
      _XMM0 = 0i64;
      I_fdistnormalized(0.0, v38, v44);
    }
    *(double *)&_XMM0 = BG_Ballistics_TravelTimeForDistance(CurrentWeaponForPlayer, isAlternate, 40000.0);
    __asm
    {
      vcmpeqss xmm2, xmm0, xmm11
      vblendvps xmm10, xmm0, xmm1, xmm2
    }
    v50 = 0;
    v51 = (int)(float)(*(float *)&_XMM10 * 1000.0) / 40;
    if ( (unsigned __int64)v51 > 0x96 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 453, ASSERT_TYPE_ASSERT, "(sampleCountBasedOnDistance <= GRAPH_SAMPLE_COUNT_MAX)", (const char *)&queryFormat, "sampleCountBasedOnDistance <= GRAPH_SAMPLE_COUNT_MAX") )
      __debugbreak();
    v52 = 0i64;
    if ( (unsigned __int64)v51 >= 4 )
    {
      v53 = 80;
      do
      {
        v54 = BallisticInfo->calculated;
        v55 = v54->numDistanceEntries;
        v56 = v55 - 1;
        if ( v50 >> 3 < v55 )
          v56 = v50 >> 3;
        v91[v52] = v54->distances[v56];
        v57 = BallisticInfo->calculated;
        v58 = v57->numDistanceEntries;
        v59 = v58 - 1;
        if ( (v53 - 40) >> 3 < v58 )
          v59 = (v53 - 40) >> 3;
        v91[v52 + 1] = v57->distances[v59];
        v60 = BallisticInfo->calculated;
        v61 = v60->numDistanceEntries;
        v62 = v61 - 1;
        if ( v53 >> 3 < v61 )
          v62 = v53 >> 3;
        v91[v52 + 2] = v60->distances[v62];
        v63 = BallisticInfo->calculated;
        v64 = v63->numDistanceEntries;
        v65 = v64 - 1;
        if ( (v53 + 40) >> 3 < v64 )
          v65 = (v53 + 40) >> 3;
        v50 += 160;
        v53 += 160;
        v91[v52 + 3] = v63->distances[v65];
        v52 += 4i64;
      }
      while ( v52 < v51 - 3i64 );
    }
    for ( ; v52 < v51; ++v52 )
    {
      v66 = BallisticInfo->calculated;
      v67 = v66->numDistanceEntries;
      v68 = v67 - 1;
      if ( v50 >> 3 < v67 )
        v68 = v50 >> 3;
      v50 += 40;
      v91[v52] = v66->distances[v68];
    }
    v69 = v51 - 1i64;
    _XMM9 = LODWORD(v91[v69]);
    if ( v83 )
    {
      Com_sprintf(dest, 0x1800ui64, "^7=== BULLET DROP FOR DISTANCE ===\n^7Distance: ^5%.2f inches (%.2f meters)\n^7Drop: ^5Out of Range\n", s_debugOverlayInputState.currentDistance, (float)(s_debugOverlayInputState.currentDistance * 0.0254));
    }
    else
    {
      I_fdistnormalized(0.0, *(float *)&_XMM10, v41);
      v71 = 0i64;
      if ( v51 != 1i64 )
      {
        while ( 1 )
        {
          v72 = v91[v71];
          _XMM3 = LODWORD(v91[v71 + 1]);
          if ( v71 == v51 - 2 || s_debugOverlayInputState.currentDistance >= v72 && s_debugOverlayInputState.currentDistance <= *(float *)&_XMM3 )
            break;
          if ( ++v71 >= v69 )
            goto LABEL_98;
        }
        __asm { vminss  xmm2, xmm3, xmm1; dist }
        I_fdistnormalized(v72, v91[v71 + 1], *(float *)&_XMM2);
      }
LABEL_98:
      __asm { vminss  xmm2, xmm9, xmm1; dist }
      I_fdistnormalized(0.0, *(float *)&_XMM9, *(float *)&_XMM2);
      Com_sprintf(dest, 0x1800ui64, "^7=== BULLET DROP FOR DISTANCE ===\n^7Distance: ^5%.2f inches (%.2f meters)\n^7Drop: ^5%.2f inches (%.2f meters)\n", s_debugOverlayInputState.currentDistance, (float)(s_debugOverlayInputState.currentDistance * 0.0254), v39, (float)(v39 * 0.0254));
    }
    UI_DrawText(v8, dest, 6144, font, v87, v86, 1, 1, MY_SCALE, &colorWhite, 3);
    v76 = v86 + SECTION_BULLET_DROP_TEXT_Y_OFFSET;
    CG_DebugGraphs_DrawAxes(v8, v87, v86 + SECTION_BULLET_DROP_TEXT_Y_OFFSET, GRAPH_WIDTH, GRAPH_HEIGHT, &colorWhite);
    CG_DebugGraphs_DrawAxisLabelX(v8, v87, v76, AXIS_LABEL_CHAR_HEIGHT, GRAPH_WIDTH, GRAPH_HEIGHT, "Distance", &colorWhite);
    CG_DebugGraphs_DrawAxisLabelY(v8, v87, v76, AXIS_LABEL_CHAR_HEIGHT, GRAPH_HEIGHT, "Drop", &colorWhite);
    CG_DebugGraphs_DrawGraphData(v8, v87, v76, GRAPH_WIDTH, GRAPH_HEIGHT, 0.0, v85, data, numDataEntries, 0, &colorGreen);
    CG_DebugGraphs_DrawGraphDatapoint(v8, v87, v76, GRAPH_WIDTH, GRAPH_HEIGHT, v84, 0.0, &colorYellow);
    v78 = v76 + SECTION_BULLET_DROP_GRAPH_Y_OFFSET;
    v77 = v78;
    currentDistance = s_debugOverlayInputState.currentDistance;
    if ( v83 )
    {
      Com_sprintf(dest, 0x1800ui64, "^7=== TRAVEL DISTANCE FOR TIME ===\n^7Distance: ^5%.2f inches (%.2f meters)\n^7Travel Time: Out of Range\n", currentDistance, (float)(s_debugOverlayInputState.currentDistance * 0.0254));
    }
    else
    {
      LODWORD(r_weapon) = (int)(float)(v41 * 1000.0);
      Com_sprintf(dest, 0x1800ui64, "^7=== TRAVEL DISTANCE FOR TIME ===\n^7Distance: ^5%.2f inches (%.2f meters)\n^7Travel Time: ^5%d milliseconds\n", currentDistance, (float)(s_debugOverlayInputState.currentDistance * 0.0254), r_weapon);
    }
    UI_DrawText(v8, dest, 6144, font, v87, v78, 1, 1, MY_SCALE, &colorWhite, 3);
    v80 = v78 + SECTION_BULLET_TRAVEL_TEXT_Y_OFFSET;
    CG_DebugGraphs_DrawAxes(v8, v87, v77 + SECTION_BULLET_TRAVEL_TEXT_Y_OFFSET, GRAPH_WIDTH, GRAPH_HEIGHT, &colorWhite);
    CG_DebugGraphs_DrawAxisLabelX(v8, v87, v80, AXIS_LABEL_CHAR_HEIGHT, GRAPH_WIDTH, GRAPH_HEIGHT, "Time", &colorWhite);
    CG_DebugGraphs_DrawAxisLabelY(v8, v87, v80, AXIS_LABEL_CHAR_HEIGHT, GRAPH_HEIGHT, "Distance", &colorWhite);
    CG_DebugGraphs_DrawGraphData(v8, v87, v80, GRAPH_WIDTH, GRAPH_HEIGHT, 0.0, *(float *)&_XMM9, v91, v51, 0, &colorGreen);
    CG_DebugGraphs_DrawGraphDatapoint(v8, v87, v80, GRAPH_WIDTH, GRAPH_HEIGHT, 0.0, 0.0, &colorYellow);
  }
}

/*
==============
CgBallistics::FinishFrame
==============
*/
void CgBallistics::FinishFrame(CgBallistics *this)
{
  int v2; 
  CgBallisticInstance *m_ballisticInstances; 
  localEntity_s *tracer; 
  CgBallisticInstance *m_firstFree; 
  volatile int m_ballisticInstanceEntryIndexNext; 
  __int64 v7; 
  CgBallisticInstance *m_ballisticInstancesCurrentFrame; 
  CgBallisticInstance *v9; 
  CgBallisticInstance *nextFree; 
  __int64 m_numTouchedSlots; 
  CgBallisticInstance *v12; 
  __int64 v13; 
  __int128 v14; 
  unsigned int whizbyInPlayId; 
  unsigned int whizbyOutPlayId; 
  localEntity_s *TracerLocalEntityByBulletId; 
  const dvar_t *v18; 
  int v19; 
  CgBallisticInstance *v20; 
  CgBallisticInstance *v21; 
  CgBallisticInstance *v22; 
  CgBallisticInstance *v23; 
  CgBallisticInstance *v24; 
  CgBallisticInstance *v25; 
  __int64 v26; 
  __int128 v27; 
  int v28; 
  bool *p_tracerSearched; 
  int v30; 
  localEntity_s *v31; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 985, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = 0;
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
      ++v2;
      ++m_ballisticInstances;
    }
    while ( v2 < this->m_numTouchedSlots );
  }
  m_ballisticInstanceEntryIndexNext = 50;
  if ( this->m_ballisticInstanceEntryIndexNext < 50 )
    m_ballisticInstanceEntryIndexNext = this->m_ballisticInstanceEntryIndexNext;
  v7 = m_ballisticInstanceEntryIndexNext;
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
      v9 = this->m_firstFree;
      if ( v9 )
        break;
      m_numTouchedSlots = this->m_numTouchedSlots;
      if ( (int)m_numTouchedSlots < 600 )
      {
        this->m_numTouchedSlots = m_numTouchedSlots + 1;
        v9 = &this->m_ballisticInstances[m_numTouchedSlots];
LABEL_32:
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 242, ASSERT_TYPE_ASSERT, "(newInstance)", (const char *)&queryFormat, "newInstance") )
          __debugbreak();
        memset_0(v9, 0, sizeof(CgBallisticInstance));
        v9->isInUse = 1;
        ++this->m_numSlotsActive;
        if ( m_ballisticInstancesCurrentFrame->nextFree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 1030, ASSERT_TYPE_ASSERT, "(!ballisticInstance->nextFree)", (const char *)&queryFormat, "!ballisticInstance->nextFree") )
          __debugbreak();
        v12 = m_ballisticInstancesCurrentFrame;
        v13 = 3i64;
        do
        {
          v9 = (CgBallisticInstance *)((char *)v9 + 128);
          v14 = *(_OWORD *)&v12->weapon.weaponIdx;
          v12 = (CgBallisticInstance *)((char *)v12 + 128);
          *(_OWORD *)&v9[-1].bulletId = v14;
          *(_OWORD *)&v9[-1].tracerStart.y = *(_OWORD *)&v12[-1].tracerStart.y;
          *(_OWORD *)&v9[-1].foliageSoundPos.z = *(_OWORD *)&v12[-1].foliageSoundPos.z;
          *(_OWORD *)v9[-1].soundData.whizbyData.whizbySndInPos.v = *(_OWORD *)v12[-1].soundData.whizbyData.whizbySndInPos.v;
          *(_OWORD *)&v9[-1].soundData.whizbyData.whizbySndOutPos.y = *(_OWORD *)&v12[-1].soundData.whizbyData.whizbySndOutPos.y;
          *(_OWORD *)&v9[-1].soundData.whizbyData.whizbyOutAlias = *(_OWORD *)&v12[-1].soundData.whizbyData.whizbyOutAlias;
          *(_OWORD *)&v9[-1].soundData.whizbyData.whizbyDelayMs = *(_OWORD *)&v12[-1].soundData.whizbyData.whizbyDelayMs;
          *(_OWORD *)&v9[-1].foliageSoundSurfaceTypeId = *(_OWORD *)&v12[-1].foliageSoundSurfaceTypeId;
          --v13;
        }
        while ( v13 );
        *(_OWORD *)&v9->weapon.weaponIdx = *(_OWORD *)&v12->weapon.weaponIdx;
        *(_OWORD *)&v9->weapon.weaponAttachments[2] = *(_OWORD *)&v12->weapon.weaponAttachments[2];
        *(_OWORD *)&v9->weapon.attachmentVariationIndices[5] = *(_OWORD *)&v12->weapon.attachmentVariationIndices[5];
        *(_QWORD *)&v9->weapon.attachmentVariationIndices[21] = *(_QWORD *)&v12->weapon.attachmentVariationIndices[21];
        goto LABEL_51;
      }
      Com_PrintError(1, "Reached the maximum number of ballistic instances. We might need to increase MAX_BALLISTIC_COUNT(%d) to handle more.", 600i64);
LABEL_51:
      ++m_ballisticInstancesCurrentFrame;
      if ( !--v7 )
        goto LABEL_52;
    }
    nextFree = v9->nextFree;
    this->m_firstFree = nextFree;
    if ( !nextFree )
      this->m_lastFree = NULL;
    goto LABEL_32;
  }
LABEL_52:
  v18 = DCONST_DVARBOOL_bg_ballisticsCompactArrays;
  if ( !DCONST_DVARBOOL_bg_ballisticsCompactArrays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsCompactArrays") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.enabled )
  {
    if ( this->m_numTouchedSlots < this->m_numSlotsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 283, ASSERT_TYPE_ASSERT, "(m_numTouchedSlots >= m_numSlotsActive)", (const char *)&queryFormat, "m_numTouchedSlots >= m_numSlotsActive") )
      __debugbreak();
    v19 = this->m_numTouchedSlots;
    if ( v19 )
    {
      if ( (float)((float)this->m_numSlotsActive / (float)v19) < `BgBallistics<CgBallisticInstance>::CompactStorage'::`2'::IDEAL_MIN_FILL_RATE )
      {
        v20 = this->m_ballisticInstances;
        v21 = &this->m_ballisticInstances[v19 - 1];
        if ( v21 > this->m_ballisticInstances )
        {
          do
          {
            v22 = v20;
            if ( v20 >= v21 )
              break;
            while ( v22->isInUse )
            {
              if ( ++v22 >= v21 )
                goto LABEL_73;
            }
            v23 = v21;
            while ( 1 )
            {
              v21 = v23 - 1;
              if ( v23->isInUse )
                break;
              --v23;
              if ( v21 <= v20 )
                goto LABEL_73;
            }
            v24 = v22;
            v25 = v23;
            v26 = 3i64;
            do
            {
              v24 = (CgBallisticInstance *)((char *)v24 + 128);
              v27 = *(_OWORD *)&v25->weapon.weaponIdx;
              v25 = (CgBallisticInstance *)((char *)v25 + 128);
              *(_OWORD *)&v24[-1].bulletId = v27;
              *(_OWORD *)&v24[-1].tracerStart.y = *(_OWORD *)&v25[-1].tracerStart.y;
              *(_OWORD *)&v24[-1].foliageSoundPos.z = *(_OWORD *)&v25[-1].foliageSoundPos.z;
              *(_OWORD *)v24[-1].soundData.whizbyData.whizbySndInPos.v = *(_OWORD *)v25[-1].soundData.whizbyData.whizbySndInPos.v;
              *(_OWORD *)&v24[-1].soundData.whizbyData.whizbySndOutPos.y = *(_OWORD *)&v25[-1].soundData.whizbyData.whizbySndOutPos.y;
              *(_OWORD *)&v24[-1].soundData.whizbyData.whizbyOutAlias = *(_OWORD *)&v25[-1].soundData.whizbyData.whizbyOutAlias;
              *(_OWORD *)&v24[-1].soundData.whizbyData.whizbyDelayMs = *(_OWORD *)&v25[-1].soundData.whizbyData.whizbyDelayMs;
              *(_OWORD *)&v24[-1].foliageSoundSurfaceTypeId = *(_OWORD *)&v25[-1].foliageSoundSurfaceTypeId;
              --v26;
            }
            while ( v26 );
            *(_OWORD *)&v24->weapon.weaponIdx = *(_OWORD *)&v25->weapon.weaponIdx;
            *(_OWORD *)&v24->weapon.weaponAttachments[2] = *(_OWORD *)&v25->weapon.weaponAttachments[2];
            *(_OWORD *)&v24->weapon.attachmentVariationIndices[5] = *(_OWORD *)&v25->weapon.attachmentVariationIndices[5];
            *(_QWORD *)&v24->weapon.attachmentVariationIndices[21] = *(_QWORD *)&v25->weapon.attachmentVariationIndices[21];
            memset_0(v23, 0, sizeof(CgBallisticInstance));
            this->OnCompactOperation(this, v22);
            v20 = v22 + 1;
          }
          while ( v21 > &v22[1] );
        }
LABEL_73:
        this->m_numTouchedSlots = this->m_numSlotsActive;
        this->m_firstFree = NULL;
        this->m_lastFree = NULL;
      }
    }
  }
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 950, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v28 = 0;
  if ( this->m_numTouchedSlots > 0 )
  {
    p_tracerSearched = &this->m_ballisticInstances[0].tracerSearched;
    do
    {
      if ( *(p_tracerSearched - 151) && !*(_QWORD *)(p_tracerSearched - 148) && !*p_tracerSearched )
      {
        v30 = *((_DWORD *)p_tracerSearched - 29);
        *p_tracerSearched = 1;
        v31 = CG_GetTracerLocalEntityByBulletId((const LocalClientNum_t)this->m_localClientNum, v30);
        *(_QWORD *)(p_tracerSearched - 148) = v31;
        if ( v31 )
          CgBallistics::CopyBallisticDataToTracer(this, (CgBallisticInstance *)(p_tracerSearched - 428), v31);
      }
      ++v28;
      p_tracerSearched += 440;
    }
    while ( v28 < this->m_numTouchedSlots );
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
char CgBallistics::GetWhizbySphere(CgBallistics *this, const vec3_t *bulletStartPos, const vec3_t *bulletEndPos, const vec3_t *localPlayerViewPos, vec3_t *outSoundCenterPoint, vec3_t *outBulletDirNormalized, float *outPlayerProjLengthOnBulletPath, float *outPlayerDistanceToBulletPath)
{
  __int128 v10; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v1[4]; 

  outBulletDirNormalized->v[0] = bulletEndPos->v[0] - bulletStartPos->v[0];
  outBulletDirNormalized->v[1] = bulletEndPos->v[1] - bulletStartPos->v[1];
  outBulletDirNormalized->v[2] = bulletEndPos->v[2] - bulletStartPos->v[2];
  v1[0] = 0.0;
  v1[1] = 0.0;
  v1[2] = 0.0;
  if ( VecNCompareCustomEpsilon(outBulletDirNormalized->v, v1, 0.001, 3) )
    return 0;
  v10 = LODWORD(outBulletDirNormalized->v[0]);
  *(float *)&v10 = (float)((float)(outBulletDirNormalized->v[0] * outBulletDirNormalized->v[0]) + (float)(outBulletDirNormalized->v[1] * outBulletDirNormalized->v[1])) + (float)(outBulletDirNormalized->v[2] * outBulletDirNormalized->v[2]);
  if ( *(float *)&v10 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
    __debugbreak();
  _XMM1 = v10;
  __asm { vrsqrtss xmm2, xmm1, xmm7 }
  outBulletDirNormalized->v[0] = *(float *)&_XMM2 * outBulletDirNormalized->v[0];
  outBulletDirNormalized->v[1] = *(float *)&_XMM2 * outBulletDirNormalized->v[1];
  v13 = *(float *)&_XMM2 * outBulletDirNormalized->v[2];
  outBulletDirNormalized->v[2] = v13;
  v15 = (float)((float)((float)(localPlayerViewPos->v[1] - bulletStartPos->v[1]) * outBulletDirNormalized->v[1]) + (float)((float)(localPlayerViewPos->v[0] - bulletStartPos->v[0]) * outBulletDirNormalized->v[0])) + (float)((float)(localPlayerViewPos->v[2] - bulletStartPos->v[2]) * v13);
  v14 = v15;
  *outPlayerProjLengthOnBulletPath = v15;
  if ( v15 < 0.0 )
    return 0;
  v16 = (float)(v15 * outBulletDirNormalized->v[0]) + bulletStartPos->v[0];
  outSoundCenterPoint->v[0] = v16;
  v17 = (float)(v15 * outBulletDirNormalized->v[1]) + bulletStartPos->v[1];
  outSoundCenterPoint->v[1] = v17;
  v18 = (float)(v14 * outBulletDirNormalized->v[2]) + bulletStartPos->v[2];
  outSoundCenterPoint->v[2] = v18;
  *outPlayerDistanceToBulletPath = fsqrt((float)((float)((float)(v17 - localPlayerViewPos->v[1]) * (float)(v17 - localPlayerViewPos->v[1])) + (float)((float)(v16 - localPlayerViewPos->v[0]) * (float)(v16 - localPlayerViewPos->v[0]))) + (float)((float)(v18 - localPlayerViewPos->v[2]) * (float)(v18 - localPlayerViewPos->v[2])));
  return 1;
}

/*
==============
CgBallistics::InitializeWhizby
==============
*/
void CgBallistics::InitializeWhizby(CgBallistics *this, CgBallisticInstance *ballisticInstance)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v5; 
  const WeaponSFXPackage *SfxPackage; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  double v9; 
  float v10; 
  const BallisticInfo *BallisticInfo; 
  double BallisticMuzzleVelocityScale; 
  float v13; 
  int Int_Internal_DebugName; 
  int v15; 
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
    v5 = DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint;
    if ( !DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBallisticWhizbyEnableRefPoint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled || ballisticInstance->attackerEntNum != LocalClientGlobals->predictedPlayerState.clientNum )
    {
      SfxPackage = BG_GetSfxPackage(&ballisticInstance->weapon, ballisticInstance->isAlternate);
      if ( SND_GetWhizby(SfxPackage) )
      {
        v7 = DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint;
        if ( !DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBallisticWhizbyEnableRefPoint") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        if ( v7->current.enabled )
        {
          v8 = DCONST_DVARVEC3_cg_debugBallisticWhizbyRefPoint;
          if ( !DCONST_DVARVEC3_cg_debugBallisticWhizbyRefPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBallisticWhizbyRefPoint") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v8);
          outOrg = *(vec3_t *)&v8->current.string;
        }
        else
        {
          RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
        }
        v9 = BG_Ballistics_HorizontalTravelTimeToTarget(&ballisticInstance->weapon, ballisticInstance->isAlternate, &ballisticInstance->shootingPos, &ballisticInstance->fireParams.dir, &outOrg);
        v10 = *(float *)&v9;
        BallisticInfo = BG_GetBallisticInfo(&ballisticInstance->weapon, ballisticInstance->isAlternate);
        if ( !BallisticInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 892, ASSERT_TYPE_ASSERT, "(ballisticInfo)", (const char *)&queryFormat, "ballisticInfo") )
          __debugbreak();
        if ( *(float *)&v9 > 0.0 && *(float *)&v9 <= (float)((float)BallisticInfo->lifeTimeMs * 0.001) )
        {
          BallisticMuzzleVelocityScale = BG_GetBallisticMuzzleVelocityScale(&ballisticInstance->weapon, ballisticInstance->isAlternate);
          BG_Ballistics_CalculateDisplacement(BallisticInfo, (int)(float)(v10 * 1000.0), *(const float *)&BallisticMuzzleVelocityScale, &ballisticInstance->fireParams.dir, &outDisplacement);
          *(float *)&BallisticMuzzleVelocityScale = outDisplacement.v[1] + ballisticInstance->shootingPos.v[1];
          bulletEndPos.v[0] = outDisplacement.v[0] + ballisticInstance->shootingPos.v[0];
          v13 = outDisplacement.v[2] + ballisticInstance->shootingPos.v[2];
          bulletEndPos.v[1] = *(float *)&BallisticMuzzleVelocityScale;
          bulletEndPos.v[2] = v13;
          if ( CgBallistics::GetWhizbySphere(this, &ballisticInstance->shootingPos, &bulletEndPos, &outOrg, &outSoundCenterPoint, &inBulletDir, &ballisticTimeSecToTarget, &radius) )
          {
            ballisticInstance->shouldPlayWhizbySfx = SND_GetWhizbyData((const LocalClientNum_t)this->m_localClientNum, SfxPackage, &outSoundCenterPoint, &inBulletDir, ballisticTimeSecToTarget, 1, v10, radius, &ballisticInstance->soundData.whizbyData);
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_debugBallisticWhizby, "cg_debugBallisticWhizby") )
            {
              Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_debugBallisticWhizbyDrawFrameCount, "cg_debugBallisticWhizbyDrawFrameCount");
              CG_DebugLine(&ballisticInstance->shootingPos, &bulletEndPos, &colorRed, 1, Int_Internal_DebugName);
              v15 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_debugBallisticWhizbyDrawFrameCount, "cg_debugBallisticWhizbyDrawFrameCount");
              CG_DebugLine(&ballisticInstance->shootingPos, &outOrg, &colorGreen, 1, v15);
            }
          }
        }
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
  const dvar_t *v5; 
  const dvar_t *v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  const SndAliasList *whizbyCrackAlias; 
  const SndAliasList *whizbyInAlias; 
  const SndAliasList *whizbyOutAlias; 
  const dvar_t *v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  int Int_Internal_DebugName; 
  int v33; 
  int v34; 
  float outPlayerDistanceToBulletPath; 
  float outPlayerProjLengthOnBulletPath; 
  vec3_t outSoundCenterPoint; 
  vec3_t outOrg; 
  vec3_t outBulletDirNormalized; 

  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 706, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  CgBallistics::InitializeWhizby(this, ballisticInstance);
  if ( ballisticInstance->shouldPlayWhizbySfx )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.cpp", 718, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( !ballisticInstance->whizbySfxPlayed && LocalClientGlobals->time - ballisticInstance->shootingTime >= ballisticInstance->soundData.whizbyData.whizbyDelayMs )
    {
      ballisticInstance->whizbySfxPlayed = 1;
      v5 = DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint;
      if ( !DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBallisticWhizbyEnableRefPoint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( v5->current.enabled )
      {
        v6 = DCONST_DVARVEC3_cg_debugBallisticWhizbyRefPoint;
        if ( !DCONST_DVARVEC3_cg_debugBallisticWhizbyRefPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBallisticWhizbyRefPoint") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v6);
        v7 = v6->current.vector.v[1];
        LODWORD(outOrg.v[0]) = v6->current.integer;
        outOrg.v[2] = v6->current.vector.v[2];
        outOrg.v[1] = v7;
      }
      else
      {
        RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      }
      if ( CgBallistics::GetWhizbySphere(this, &ballisticInstance->shootingPos, &ballisticInstance->tracerCurrentFinish, &outOrg, &outSoundCenterPoint, &outBulletDirNormalized, &outPlayerProjLengthOnBulletPath, &outPlayerDistanceToBulletPath) )
      {
        v8 = ballisticInstance->soundData.whizbyData.whizbySndOutPos.v[0] - ballisticInstance->soundData.whizbyData.whizbySndInPos.v[0];
        v9 = ballisticInstance->soundData.whizbyData.whizbySndOutPos.v[1] - ballisticInstance->soundData.whizbyData.whizbySndInPos.v[1];
        v10 = ballisticInstance->soundData.whizbyData.whizbySndOutPos.v[2] - ballisticInstance->soundData.whizbyData.whizbySndInPos.v[2];
        v11 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10)) * 0.5;
        v12 = COERCE_FLOAT(LODWORD(v11) ^ _xmm) * outBulletDirNormalized.v[1];
        v13 = v11 * outBulletDirNormalized.v[1];
        ballisticInstance->soundData.whizbyData.whizbySndInPos.v[0] = (float)(COERCE_FLOAT(LODWORD(v11) ^ _xmm) * outBulletDirNormalized.v[0]) + outSoundCenterPoint.v[0];
        v14 = v12 + outSoundCenterPoint.v[1];
        v15 = COERCE_FLOAT(LODWORD(v11) ^ _xmm) * outBulletDirNormalized.v[2];
        ballisticInstance->soundData.whizbyData.whizbySndInPos.v[1] = v14;
        v16 = v15 + outSoundCenterPoint.v[2];
        v17 = v11 * outBulletDirNormalized.v[0];
        ballisticInstance->soundData.whizbyData.whizbySndInPos.v[2] = v16;
        v18 = v17 + outSoundCenterPoint.v[0];
        v19 = v13 + outSoundCenterPoint.v[1];
        ballisticInstance->soundData.whizbyData.whizbySndOutPos.v[0] = v18;
        ballisticInstance->soundData.whizbyData.whizbySndOutPos.v[2] = (float)(v11 * outBulletDirNormalized.v[2]) + outSoundCenterPoint.v[2];
        ballisticInstance->soundData.whizbyData.whizbySndOutPos.v[1] = v19;
      }
      whizbyCrackAlias = ballisticInstance->soundData.whizbyData.whizbyCrackAlias;
      if ( whizbyCrackAlias )
        SND_PlaySoundAlias(whizbyCrackAlias, (const LocalClientNum_t)this->m_localClientNum, 2046, &ballisticInstance->soundData.whizbyData.whizbySndInPos, 0, SASYS_CGAME);
      whizbyInAlias = ballisticInstance->soundData.whizbyData.whizbyInAlias;
      if ( whizbyInAlias )
        ballisticInstance->soundData.whizbyInPlayId = SND_PlaySoundAlias(whizbyInAlias, (const LocalClientNum_t)this->m_localClientNum, 2046, &ballisticInstance->soundData.whizbyData.whizbySndInPos, 0, SASYS_CGAME);
      whizbyOutAlias = ballisticInstance->soundData.whizbyData.whizbyOutAlias;
      if ( whizbyOutAlias )
        ballisticInstance->soundData.whizbyOutPlayId = SND_PlaySoundAlias(whizbyOutAlias, (const LocalClientNum_t)this->m_localClientNum, 2046, &ballisticInstance->soundData.whizbyData.whizbySndOutPos, 0, SASYS_CGAME);
      v23 = DCONST_DVARBOOL_cg_debugBallisticWhizby;
      if ( !DCONST_DVARBOOL_cg_debugBallisticWhizby && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBallisticWhizby") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      if ( v23->current.enabled )
      {
        v24 = ballisticInstance->soundData.whizbyData.whizbySndInPos.v[0];
        v25 = ballisticInstance->soundData.whizbyData.whizbySndInPos.v[1];
        v26 = ballisticInstance->soundData.whizbyData.whizbySndInPos.v[2];
        v27 = (float)((float)(ballisticInstance->soundData.whizbyData.whizbySndOutPos.v[1] - v25) * 0.5) + v25;
        v28 = (float)((float)(ballisticInstance->soundData.whizbyData.whizbySndOutPos.v[2] - v26) * 0.5) + v26;
        outSoundCenterPoint.v[0] = (float)((float)(ballisticInstance->soundData.whizbyData.whizbySndOutPos.v[0] - v24) * 0.5) + v24;
        v29 = outSoundCenterPoint.v[0] - v24;
        outSoundCenterPoint.v[2] = v28;
        v30 = v28 - v26;
        outSoundCenterPoint.v[1] = v27;
        v31 = v27 - v25;
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_debugBallisticWhizbyDrawFrameCount, "cg_debugBallisticWhizbyDrawFrameCount");
        CG_DebugSphere(&outSoundCenterPoint, fsqrt((float)((float)(v31 * v31) + (float)(v29 * v29)) + (float)(v30 * v30)), &colorYellow, 1, Int_Internal_DebugName);
        v33 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_debugBallisticWhizbyDrawFrameCount, "cg_debugBallisticWhizbyDrawFrameCount");
        CG_DebugStar(&ballisticInstance->soundData.whizbyData.whizbySndInPos, &colorBlue, 1, v33);
        v34 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_debugBallisticWhizbyDrawFrameCount, "cg_debugBallisticWhizbyDrawFrameCount");
        CG_DebugStar(&ballisticInstance->soundData.whizbyData.whizbySndOutPos, &colorGreen, 1, v34);
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

