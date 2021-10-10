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
  bool v11; 
  GAntiLag *v12; 
  bool isAlternate; 
  GWeaponMap *Instance; 
  double BulletTerminationRange; 
  float bulletRange; 
  bool updated; 
  bool v18; 
  const BallisticInfo *BallisticInfo; 
  const BallisticInfo *v20; 
  bool v21; 
  bool v22; 
  BOOL fmt; 
  BOOL rangeScale; 
  unsigned int randSeed; 
  playerState_s *ps; 
  BulletTraceResults br; 

  ps = (playerState_s *)attackerPs;
  v11 = !isFirstSimulation && ballisticInstance->lastSimulationTime < serverTime;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v12 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.cpp", (_DWORD)GAntiLag::ms_gAntiLagData + 46, ASSERT_TYPE_ASSERT, "( antiLag )", (const char *)&queryFormat, "antiLag") )
    __debugbreak();
  if ( v11 )
  {
    LOBYTE(rangeScale) = 0;
    LOBYTE(fmt) = 1;
    v12->RewindPositions(v12, ballisticInstance->lastSimulationTime, attacker, antiLagMainWorld, fmt, rangeScale, "Ballistics");
  }
  isAlternate = ballisticInstance->isAlternate;
  Instance = GWeaponMap::GetInstance();
  BulletTerminationRange = BG_GetBulletTerminationRange(Instance, ps, &ballisticInstance->weapon, isAlternate);
  bulletRange = *(float *)&BulletTerminationRange;
  updated = BgBallistics<GBallisticInstance>::UpdateBallisticPosition(this, ballisticInstance, *(const float *)&BulletTerminationRange);
  v18 = ballisticInstance->isAlternate;
  randSeed = ballisticInstance->randSeed;
  br.hitClientNum = -1;
  BallisticInfo = BG_GetBallisticInfo(&ballisticInstance->weapon, v18);
  v20 = BallisticInfo;
  if ( (!BallisticInfo || !BallisticInfo->enableBallisticTrajectory) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.cpp", 62, ASSERT_TYPE_ASSERT, "( ballisticInfo && ballisticInfo->enableBallisticTrajectory )", (const char *)&queryFormat, "ballisticInfo && ballisticInfo->enableBallisticTrajectory") )
    __debugbreak();
  if ( *(float *)&BulletTerminationRange <= 0.0 )
    bulletRange = v20->calculated->distances[v20->calculated->numDistanceEntries - 1];
  if ( BG_WeaponBulletFire_ShouldPenetrate(*attackerPerks, &ballisticInstance->weapon, ballisticInstance->isAlternate) )
  {
    G_Debug_BulletDamage(&ballisticInstance->weapon, ballisticInstance->isAlternate, &ballisticInstance->fireParams.start, &ballisticInstance->fireParams.end, ballisticInstance->fireParams.travelDistance, ballisticInstance->fireParams.rangeScale, bulletRange);
    v21 = G_Bullet_FirePenetrate(&randSeed, &ballisticInstance->fireParams, &br, &ballisticInstance->weapon, (const PlayerHandIndex)ballisticInstance->hand, ballisticInstance->isAlternate, attacker, ballisticInstance->lastSimulationTime, isFirstSimulation);
  }
  else
  {
    v21 = G_Bullet_FireExtended(&randSeed, &ballisticInstance->fireParams, &br, &ballisticInstance->weapon, (const PlayerHandIndex)ballisticInstance->hand, ballisticInstance->isAlternate, attacker, attackerPerks, bulletRange, ballisticInstance->lastSimulationTime, isFirstSimulation);
  }
  v22 = v21;
  if ( v11 )
    v12->RestorePositions(v12, attacker, "Ballistics");
  return v22 && !updated;
}

/*
==============
GBallistics::UpdateBallistics
==============
*/
void GBallistics::UpdateBallistics(GBallistics *this, const int serverTime)
{
  const dvar_t *v2; 
  int v5; 
  int m_numTouchedSlots; 
  GBallisticInstance *m_ballisticInstances; 
  GBallisticInstance *v8; 
  GBallisticInstance *v9; 
  GBallisticInstance *v10; 
  GBallisticInstance *v11; 
  GBallisticInstance *v12; 
  __int64 v13; 
  __int128 v14; 
  GBallisticInstance *v15; 
  __int64 attackerEntNum; 
  GBallisticInstance *m_firstFree; 
  __int64 v18; 
  __int64 v19; 

  v2 = DCONST_DVARBOOL_bg_ballisticsCompactArrays;
  if ( !DCONST_DVARBOOL_bg_ballisticsCompactArrays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsCompactArrays") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v5 = 0;
  if ( v2->current.enabled )
  {
    if ( this->m_numTouchedSlots < this->m_numSlotsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 283, ASSERT_TYPE_ASSERT, "(m_numTouchedSlots >= m_numSlotsActive)", (const char *)&queryFormat, "m_numTouchedSlots >= m_numSlotsActive") )
      __debugbreak();
    m_numTouchedSlots = this->m_numTouchedSlots;
    if ( m_numTouchedSlots )
    {
      if ( (float)((float)this->m_numSlotsActive / (float)m_numTouchedSlots) < `BgBallistics<GBallisticInstance>::CompactStorage'::`2'::IDEAL_MIN_FILL_RATE )
      {
        m_ballisticInstances = this->m_ballisticInstances;
        v8 = &this->m_ballisticInstances[m_numTouchedSlots - 1];
        if ( v8 > this->m_ballisticInstances )
        {
          do
          {
            v9 = m_ballisticInstances;
            if ( m_ballisticInstances >= v8 )
              break;
            while ( v9->isInUse )
            {
              if ( ++v9 >= v8 )
                goto LABEL_22;
            }
            v10 = v8;
            while ( 1 )
            {
              v8 = v10 - 1;
              if ( v10->isInUse )
                break;
              --v10;
              if ( v8 <= m_ballisticInstances )
                goto LABEL_22;
            }
            v11 = v9;
            v12 = v10;
            v13 = 2i64;
            do
            {
              v11 = (GBallisticInstance *)((char *)v11 + 128);
              v14 = *(_OWORD *)&v12->weapon.weaponIdx;
              v12 = (GBallisticInstance *)((char *)v12 + 128);
              *(_OWORD *)&v11[-1].fireParams.penetrationMultiplier = v14;
              *(_OWORD *)&v11[-1].fireParams.initialPos.y = *(_OWORD *)&v12[-1].fireParams.initialPos.y;
              *(_OWORD *)&v11[-1].fireParams.start.z = *(_OWORD *)&v12[-1].fireParams.start.z;
              *(_OWORD *)v11[-1].fireParams.dir.v = *(_OWORD *)v12[-1].fireParams.dir.v;
              *(_OWORD *)&v11[-1].fireParams.shotCount = *(_OWORD *)&v12[-1].fireParams.shotCount;
              *(_OWORD *)v11[-1].shootingPos.v = *(_OWORD *)v12[-1].shootingPos.v;
              *(_OWORD *)&v11[-1].originalShootingdir.y = *(_OWORD *)&v12[-1].originalShootingdir.y;
              *(_OWORD *)&v11[-1].shootingTime = *(_OWORD *)&v12[-1].shootingTime;
              --v13;
            }
            while ( v13 );
            *(_OWORD *)&v11->weapon.weaponIdx = *(_OWORD *)&v12->weapon.weaponIdx;
            *(_QWORD *)&v11->weapon.weaponAttachments[2] = *(_QWORD *)&v12->weapon.weaponAttachments[2];
            memset_0(v10, 0, sizeof(GBallisticInstance));
            this->OnCompactOperation(this, v9);
            m_ballisticInstances = v9 + 1;
          }
          while ( v8 > &v9[1] );
        }
LABEL_22:
        this->m_numTouchedSlots = this->m_numSlotsActive;
        this->m_firstFree = NULL;
        this->m_lastFree = NULL;
      }
    }
  }
  if ( this->m_numTouchedSlots > 0 )
  {
    v15 = this->m_ballisticInstances;
    do
    {
      if ( v15->isInUse )
      {
        attackerEntNum = v15->attackerEntNum;
        if ( (unsigned int)attackerEntNum >= 0x800 )
        {
          LODWORD(v19) = 2048;
          LODWORD(v18) = v15->attackerEntNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[attackerEntNum].r.isInUse != g_entityIsInUse[attackerEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[attackerEntNum] )
        {
          GBallistics::Simulate(this, v15, 0, serverTime);
        }
        else
        {
          if ( !v15->isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 257, ASSERT_TYPE_ASSERT, "(ballisticInstance->isInUse)", (const char *)&queryFormat, "ballisticInstance->isInUse") )
            __debugbreak();
          if ( v15->nextFree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 258, ASSERT_TYPE_ASSERT, "(!ballisticInstance->nextFree)", (const char *)&queryFormat, "!ballisticInstance->nextFree") )
            __debugbreak();
          memset_0(v15, 0, sizeof(GBallisticInstance));
          m_firstFree = this->m_firstFree;
          this->m_firstFree = v15;
          if ( m_firstFree )
          {
            v15->nextFree = m_firstFree;
            --this->m_numSlotsActive;
          }
          else
          {
            --this->m_numSlotsActive;
            this->m_lastFree = v15;
          }
        }
      }
      ++v5;
      ++v15;
    }
    while ( v5 < this->m_numTouchedSlots );
  }
}

