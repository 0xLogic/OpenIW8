/*
==============
GBallistics::FireBallistics
==============
*/

void __fastcall GBallistics::FireBallistics(GBallistics *this, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const unsigned int randSeed, const BulletFireParams *fireParams, const vec3_t *shootingAxisRight, const vec3_t *shootingAxisUp, const int attackerEntNum, const int shootingTime)
{
  ?FireBallistics@GBallistics@@QEAAXAEBUWeapon@@_NW4PlayerHandIndex@@IAEBUBulletFireParams@@AEBTvec3_t@@4HH@Z(this, r_weapon, isAlternate, hand, randSeed, fireParams, shootingAxisRight, shootingAxisUp, attackerEntNum, shootingTime);
}

/*
==============
GBallistics::UpdateBallistics
==============
*/

void __fastcall GBallistics::UpdateBallistics(GBallistics *this, const int serverTime)
{
  ?UpdateBallistics@GBallistics@@QEAAXH@Z(this, serverTime);
}

/*
==============
GBallistics::ShouldFireBallisticBullet
==============
*/

bool __fastcall GBallistics::ShouldFireBallisticBullet(GBallistics *this, const Weapon *weapon, const bool isAlternate, const int attackerEntNum)
{
  return ?ShouldFireBallisticBullet@GBallistics@@UEBA_NAEBUWeapon@@_NH@Z(this, weapon, isAlternate, attackerEntNum);
}

/*
==============
GBallistics::Simulate
==============
*/

void __fastcall GBallistics::Simulate(GBallistics *this, GBallisticInstance *ballisticInstance, const bool isFirstSimulation, const int serverTime)
{
  ?Simulate@GBallistics@@IEAAXPEAUGBallisticInstance@@_NH@Z(this, ballisticInstance, isFirstSimulation, serverTime);
}

/*
==============
GBallistics::SimulateSingleStep
==============
*/

bool __fastcall GBallistics::SimulateSingleStep(GBallistics *this, const bool isFirstSimulation, gentity_s *attacker, const playerState_s *attackerPs, const bitarray<64> *attackerPerks, const bool antiLagMainWorld, const int serverTime, GBallisticInstance *ballisticInstance)
{
  return ?SimulateSingleStep@GBallistics@@IEAA_N_NPEAUgentity_s@@PEBUplayerState_s@@AEBV?$bitarray@$0EA@@@0HPEAUGBallisticInstance@@@Z(this, isFirstSimulation, attacker, attackerPs, attackerPerks, antiLagMainWorld, serverTime, ballisticInstance);
}

/*
==============
GBallistics::FireBallistics
==============
*/
void GBallistics::FireBallistics(GBallistics *this, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const unsigned int randSeed, const BulletFireParams *fireParams, const vec3_t *shootingAxisRight, const vec3_t *shootingAxisUp, const int attackerEntNum, const int shootingTime)
{
  int v10; 
  const dvar_t *v11; 
  int v12; 
  const dvar_t *v17; 
  GBallisticInstance *ballisticInstance; 
  GBallisticInstance *nextFree; 
  __int64 m_numTouchedSlots; 

  v10 = shootingTime;
  v11 = DVARINT_sv_ballisticsMaxLatencyMs;
  v12 = level.time - shootingTime;
  if ( !DVARINT_sv_ballisticsMaxLatencyMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_ballisticsMaxLatencyMs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v12 > v11->current.integer )
  {
    v17 = DVARINT_sv_ballisticsMaxLatencyMs;
    if ( !DVARINT_sv_ballisticsMaxLatencyMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_ballisticsMaxLatencyMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v10 = level.time - v17->current.integer;
  }
  ballisticInstance = this->m_firstFree;
  if ( ballisticInstance )
  {
    nextFree = ballisticInstance->nextFree;
    this->m_firstFree = nextFree;
    if ( !nextFree )
      this->m_lastFree = NULL;
  }
  else
  {
    m_numTouchedSlots = this->m_numTouchedSlots;
    if ( (int)m_numTouchedSlots >= 600 )
    {
      Com_PrintError(1, "Reached the maximum number of ballistic instances. We might need to increase MAX_BALLISTIC_COUNT(%d) to handle more.", 600i64);
      return;
    }
    this->m_numTouchedSlots = m_numTouchedSlots + 1;
    ballisticInstance = &this->m_ballisticInstances[m_numTouchedSlots];
  }
  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 242, ASSERT_TYPE_ASSERT, "(newInstance)", (const char *)&queryFormat, "newInstance") )
    __debugbreak();
  memset_0(ballisticInstance, 0, sizeof(GBallisticInstance));
  ballisticInstance->isInUse = 1;
  ++this->m_numSlotsActive;
  BgBallistics<GBallisticInstance>::SetBallisticInstanceData(this, r_weapon, isAlternate, hand, fireParams, shootingAxisRight, shootingAxisUp, attackerEntNum, v10, randSeed, ballisticInstance);
  GBallistics::Simulate(this, ballisticInstance, 1, level.time);
}

/*
==============
GBallistics::ShouldFireBallisticBullet
==============
*/
bool GBallistics::ShouldFireBallisticBullet(GBallistics *this, const Weapon *weapon, const bool isAlternate, const int attackerEntNum)
{
  __int64 v4; 
  const BallisticInfo *BallisticInfo; 
  const dvar_t *v6; 
  gentity_s *v7; 
  actor_s *actor; 
  bool v9; 
  bool result; 

  v4 = attackerEntNum;
  BallisticInfo = BG_GetBallisticInfo(weapon, isAlternate);
  if ( !BallisticInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 420, ASSERT_TYPE_ASSERT, "(ballisticInfo)", (const char *)&queryFormat, "ballisticInfo") )
    __debugbreak();
  v6 = DCONST_DVARBOOL_bg_ballisticsEnabled;
  if ( !DCONST_DVARBOOL_bg_ballisticsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  result = 0;
  if ( v6->current.enabled && BallisticInfo->enableBallisticTrajectory && (unsigned int)v4 < 0x7FE )
  {
    v7 = &g_entities[v4];
    actor = v7->actor;
    v9 = Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && v7->agent && SV_Agent_IsScripted(v7->s.number);
    if ( !actor && !v9 )
      return 1;
  }
  return result;
}

/*
==============
GBallistics::Simulate
==============
*/
void GBallistics::Simulate(GBallistics *this, GBallisticInstance *ballisticInstance, const bool isFirstSimulation, const int serverTime)
{
  int v4; 
  __int64 attackerEntNum; 
  gentity_s *v8; 
  const playerState_s *EntityPlayerStateConst; 
  const BallisticInfo *BallisticInfo; 
  GCombat *v11; 
  int integer; 
  const dvar_t *v13; 
  int v14; 
  bool v15; 
  const dvar_t *v16; 
  int v17; 
  __int64 antiLagMainWorld; 
  bool v19; 
  gentity_s *v22; 
  const BallisticInfo *v23; 
  bitarray<64> perks; 

  v4 = serverTime;
  SV_Profile_BeginEvent(SVPROF_BALLISTICS_UPDATE);
  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.cpp", 91, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  attackerEntNum = ballisticInstance->attackerEntNum;
  if ( (unsigned int)attackerEntNum >= 0x800 )
  {
    LODWORD(antiLagMainWorld) = ballisticInstance->attackerEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", antiLagMainWorld, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[attackerEntNum].r.isInUse != g_entityIsInUse[attackerEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[attackerEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.cpp", 92, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( ballisticInstance->attackerEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( ballisticInstance->attackerEntNum )") )
    __debugbreak();
  v8 = &g_entities[ballisticInstance->attackerEntNum];
  v22 = v8;
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(v8);
  BallisticInfo = BG_GetBallisticInfo(&ballisticInstance->weapon, ballisticInstance->isAlternate);
  v23 = BallisticInfo;
  if ( (!BallisticInfo || !BallisticInfo->enableBallisticTrajectory) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.cpp", 98, ASSERT_TYPE_ASSERT, "( ballisticInfo && ballisticInfo->enableBallisticTrajectory )", (const char *)&queryFormat, "ballisticInfo && ballisticInfo->enableBallisticTrajectory") )
    __debugbreak();
  if ( EntityPlayerStateConst )
    perks = EntityPlayerStateConst->perks;
  else
    perks = 0i64;
  v19 = BG_WeaponBulletFire_ExplodeOnImpact(perks, &ballisticInstance->weapon, ballisticInstance->isAlternate);
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v11 = GCombat::ms_gCombatSystem;
  if ( isFirstSimulation )
  {
    integer = 1;
  }
  else
  {
    v13 = DVARINT_sv_ballisticsMaxSimStepsPerServerFrame;
    if ( !DVARINT_sv_ballisticsMaxSimStepsPerServerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_ballisticsMaxSimStepsPerServerFrame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    integer = v13->current.integer;
    v8 = v22;
  }
  v14 = 0;
  if ( ballisticInstance->lastSimulationTime <= v4 )
  {
    while ( 1 )
    {
      if ( !isFirstSimulation )
      {
        GCombat::SetQueuedDamageEnabled(v11, 1);
        G_Bullet_SetDeferNotifyActors(1);
      }
      v15 = GBallistics::SimulateSingleStep(this, isFirstSimulation, v8, EntityPlayerStateConst, &perks, v19, v4, ballisticInstance);
      if ( !isFirstSimulation )
      {
        G_Bullet_SetDeferNotifyActors(0);
        GCombat::SetQueuedDamageEnabled(v11, 0);
        GCombat::ProcessQueuedDamages(v11);
        G_Bullet_ProcessDeferredNotifyActors();
      }
      v16 = DCONST_DVARINT_bg_ballisticsSimTimeStepMs;
      if ( !DCONST_DVARINT_bg_ballisticsSimTimeStepMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsSimTimeStepMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      v17 = ballisticInstance->lastSimulationTime + v16->current.integer;
      ballisticInstance->lastSimulationTime = v17;
      if ( !v15 || v17 - ballisticInstance->shootingTime >= v23->lifeTimeMs )
        break;
      ++v14;
      if ( integer <= 0 || v14 < integer )
      {
        v4 = serverTime;
        v8 = v22;
        if ( v17 <= serverTime )
          continue;
      }
      goto LABEL_47;
    }
    BgBallistics<GBallisticInstance>::FreeBalisticInstance(this, ballisticInstance);
  }
LABEL_47:
  SV_Profile_EndEvent(SVPROF_BALLISTICS_UPDATE);
}

/*
==============
GBallistics::SimulateSingleStep
==============
*/
bool GBallistics::SimulateSingleStep(GBallistics *this, const bool isFirstSimulation, gentity_s *attacker, const playerState_s *attackerPs, const bitarray<64> *attackerPerks, const bool antiLagMainWorld, const int serverTime, GBallisticInstance *ballisticInstance)
{
  bool v14; 
  GAntiLag *v15; 
  bool isAlternate; 
  GWeaponMap *Instance; 
  bool updated; 
  bool v21; 
  const BallisticInfo *BallisticInfo; 
  const BallisticInfo *v23; 
  bool v24; 
  bool v25; 
  BallisticInfoCalculated *calculated; 
  bool v32; 
  bool v33; 
  bool result; 
  BOOL fmt; 
  float fmta; 
  BOOL rangeScale; 
  float rangeScalea; 
  float bulletRange; 
  float initialSimStep; 
  unsigned int randSeed; 
  playerState_s *ps; 
  BulletTraceResults br; 

  __asm { vmovaps [rsp+148h+var_48], xmm6 }
  _RDI = ballisticInstance;
  ps = (playerState_s *)attackerPs;
  v14 = !isFirstSimulation && ballisticInstance->lastSimulationTime < serverTime;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v15 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.cpp", (_DWORD)GAntiLag::ms_gAntiLagData + 46, ASSERT_TYPE_ASSERT, "( antiLag )", (const char *)&queryFormat, "antiLag") )
    __debugbreak();
  if ( v14 )
  {
    LOBYTE(rangeScale) = 0;
    LOBYTE(fmt) = 1;
    v15->RewindPositions(v15, ballisticInstance->lastSimulationTime, attacker, antiLagMainWorld, fmt, rangeScale, "Ballistics");
  }
  isAlternate = ballisticInstance->isAlternate;
  Instance = GWeaponMap::GetInstance();
  *(double *)&_XMM0 = BG_GetBulletTerminationRange(Instance, ps, &ballisticInstance->weapon, isAlternate);
  __asm
  {
    vmovaps xmm2, xmm0; terminationRange
    vmovaps xmm6, xmm0
  }
  updated = BgBallistics<GBallisticInstance>::UpdateBallisticPosition(this, ballisticInstance, *(const float *)&_XMM2);
  v21 = ballisticInstance->isAlternate;
  randSeed = ballisticInstance->randSeed;
  br.hitClientNum = -1;
  BallisticInfo = BG_GetBallisticInfo(&ballisticInstance->weapon, v21);
  v23 = BallisticInfo;
  if ( !BallisticInfo || (v24 = !BallisticInfo->enableBallisticTrajectory) )
  {
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.cpp", 62, ASSERT_TYPE_ASSERT, "( ballisticInfo && ballisticInfo->enableBallisticTrajectory )", (const char *)&queryFormat, "ballisticInfo && ballisticInfo->enableBallisticTrajectory");
    v24 = !v25;
    if ( v25 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v24 )
  {
    calculated = v23->calculated;
    _RCX = calculated->numDistanceEntries;
    _RAX = calculated->distances;
    __asm { vmovss  xmm6, dword ptr [rax+rcx*4-4] }
  }
  if ( BG_WeaponBulletFire_ShouldPenetrate(*attackerPerks, &ballisticInstance->weapon, ballisticInstance->isAlternate) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+90h]
      vmovss  xmm1, dword ptr [rdi+0D4h]
      vmovss  [rsp+148h+bulletRange], xmm6
      vmovss  [rsp+148h+rangeScale], xmm0
      vmovss  dword ptr [rsp+148h+fmt], xmm1
    }
    G_Debug_BulletDamage(&ballisticInstance->weapon, ballisticInstance->isAlternate, &ballisticInstance->fireParams.start, &ballisticInstance->fireParams.end, fmta, rangeScalea, bulletRange);
    v32 = G_Bullet_FirePenetrate(&randSeed, &ballisticInstance->fireParams, &br, &ballisticInstance->weapon, (const PlayerHandIndex)ballisticInstance->hand, ballisticInstance->isAlternate, attacker, ballisticInstance->lastSimulationTime, isFirstSimulation);
  }
  else
  {
    __asm { vmovss  dword ptr [rsp+148h+initialSimStep], xmm6 }
    v32 = G_Bullet_FireExtended(&randSeed, &ballisticInstance->fireParams, &br, &ballisticInstance->weapon, (const PlayerHandIndex)ballisticInstance->hand, ballisticInstance->isAlternate, attacker, attackerPerks, initialSimStep, ballisticInstance->lastSimulationTime, isFirstSimulation);
  }
  v33 = v32;
  if ( v14 )
    v15->RestorePositions(v15, attacker, "Ballistics");
  result = v33 && !updated;
  __asm { vmovaps xmm6, [rsp+148h+var_48] }
  return result;
}

/*
==============
GBallistics::UpdateBallistics
==============
*/
void GBallistics::UpdateBallistics(GBallistics *this, const int serverTime)
{
  const dvar_t *v4; 
  int v7; 
  GBallisticInstance *m_ballisticInstances; 
  __int64 attackerEntNum; 
  GBallisticInstance *m_firstFree; 
  __int64 v16; 
  __int64 v17; 

  v4 = DCONST_DVARBOOL_bg_ballisticsCompactArrays;
  if ( !DCONST_DVARBOOL_bg_ballisticsCompactArrays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsCompactArrays") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v7 = 0;
  if ( v4->current.enabled )
  {
    if ( this->m_numTouchedSlots < this->m_numSlotsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 283, ASSERT_TYPE_ASSERT, "(m_numTouchedSlots >= m_numSlotsActive)", (const char *)&queryFormat, "m_numTouchedSlots >= m_numSlotsActive") )
      __debugbreak();
    if ( this->m_numTouchedSlots )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rsi+29058h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm1, xmm1, xmm0
        vcomiss xmm1, cs:?IDEAL_MIN_FILL_RATE@?1??CompactStorage@?$BgBallistics@UGBallisticInstance@@@@IEAAXXZ@4MA; float `BgBallistics<GBallisticInstance>::CompactStorage(void)'::`2'::IDEAL_MIN_FILL_RATE
      }
    }
  }
  if ( this->m_numTouchedSlots > 0 )
  {
    m_ballisticInstances = this->m_ballisticInstances;
    do
    {
      if ( m_ballisticInstances->isInUse )
      {
        attackerEntNum = m_ballisticInstances->attackerEntNum;
        if ( (unsigned int)attackerEntNum >= 0x800 )
        {
          LODWORD(v17) = 2048;
          LODWORD(v16) = m_ballisticInstances->attackerEntNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[attackerEntNum].r.isInUse != g_entityIsInUse[attackerEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[attackerEntNum] )
        {
          GBallistics::Simulate(this, m_ballisticInstances, 0, serverTime);
        }
        else
        {
          if ( !m_ballisticInstances->isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 257, ASSERT_TYPE_ASSERT, "(ballisticInstance->isInUse)", (const char *)&queryFormat, "ballisticInstance->isInUse") )
            __debugbreak();
          if ( m_ballisticInstances->nextFree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 258, ASSERT_TYPE_ASSERT, "(!ballisticInstance->nextFree)", (const char *)&queryFormat, "!ballisticInstance->nextFree") )
            __debugbreak();
          memset_0(m_ballisticInstances, 0, sizeof(GBallisticInstance));
          m_firstFree = this->m_firstFree;
          this->m_firstFree = m_ballisticInstances;
          if ( m_firstFree )
          {
            m_ballisticInstances->nextFree = m_firstFree;
            --this->m_numSlotsActive;
          }
          else
          {
            --this->m_numSlotsActive;
            this->m_lastFree = m_ballisticInstances;
          }
        }
      }
      ++v7;
      ++m_ballisticInstances;
    }
    while ( v7 < this->m_numTouchedSlots );
  }
}

