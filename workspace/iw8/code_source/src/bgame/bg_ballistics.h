/*
==============
BgBallistics<CgBallisticInstance>::UpdateBallisticPosition
==============
*/

bool __fastcall BgBallistics<CgBallisticInstance>::UpdateBallisticPosition(BgBallistics<CgBallisticInstance> *this, CgBallisticInstance *ballisticInstance, const float terminationRange)
{
  return ?UpdateBallisticPosition@?$BgBallistics@UCgBallisticInstance@@@@QEAA_NPEAUCgBallisticInstance@@M@Z(this, ballisticInstance, terminationRange);
}

/*
==============
BgBallistics<GBallisticInstance>::SetBallisticInstanceData
==============
*/

void __fastcall BgBallistics<GBallisticInstance>::SetBallisticInstanceData(BgBallistics<GBallisticInstance> *this, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const BulletFireParams *fireParams, const vec3_t *shootingAxisRight, const vec3_t *shootingAxisUp, const int attackerEntNum, const int shootingTime, const unsigned int randSeed, GBallisticInstance *ballisticInstance)
{
  ?SetBallisticInstanceData@?$BgBallistics@UGBallisticInstance@@@@IEAAXAEBUWeapon@@_NW4PlayerHandIndex@@AEBUBulletFireParams@@AEBTvec3_t@@4HHIPEAUGBallisticInstance@@@Z(this, r_weapon, isAlternate, hand, fireParams, shootingAxisRight, shootingAxisUp, attackerEntNum, shootingTime, randSeed, ballisticInstance);
}

/*
==============
BgBallistics<CgBallisticInstance>::ShouldFireBallisticBullet
==============
*/

bool __fastcall BgBallistics<CgBallisticInstance>::ShouldFireBallisticBullet(BgBallistics<CgBallisticInstance> *this, const Weapon *weapon, const bool isAlternate, const int attackerEntNum)
{
  return ?ShouldFireBallisticBullet@?$BgBallistics@UCgBallisticInstance@@@@UEBA_NAEBUWeapon@@_NH@Z(this, weapon, isAlternate, attackerEntNum);
}

/*
==============
BgBallistics<GBallisticInstance>::~BgBallistics<GBallisticInstance>
==============
*/

void __fastcall BgBallistics<GBallisticInstance>::~BgBallistics<GBallisticInstance>(BgBallistics<GBallisticInstance> *this)
{
  ??1?$BgBallistics@UGBallisticInstance@@@@UEAA@XZ(this);
}

/*
==============
BgBallistics<CgBallisticInstance>::CompactStorage
==============
*/

void __fastcall BgBallistics<CgBallisticInstance>::CompactStorage(BgBallistics<CgBallisticInstance> *this)
{
  ?CompactStorage@?$BgBallistics@UCgBallisticInstance@@@@IEAAXXZ(this);
}

/*
==============
BgBallistics<GBallisticInstance>::ShouldFireBallisticBullet
==============
*/

bool __fastcall BgBallistics<GBallisticInstance>::ShouldFireBallisticBullet(BgBallistics<GBallisticInstance> *this, const Weapon *weapon, const bool isAlternate, const int attackerEntNum)
{
  return ?ShouldFireBallisticBullet@?$BgBallistics@UGBallisticInstance@@@@UEBA_NAEBUWeapon@@_NH@Z(this, weapon, isAlternate, attackerEntNum);
}

/*
==============
BgBallistics<GBallisticInstance>::UpdateBallisticPosition
==============
*/

bool __fastcall BgBallistics<GBallisticInstance>::UpdateBallisticPosition(BgBallistics<GBallisticInstance> *this, GBallisticInstance *ballisticInstance, const float terminationRange)
{
  return ?UpdateBallisticPosition@?$BgBallistics@UGBallisticInstance@@@@QEAA_NPEAUGBallisticInstance@@M@Z(this, ballisticInstance, terminationRange);
}

/*
==============
BgBallistics<CgBallisticInstance>::~BgBallistics<CgBallisticInstance>
==============
*/

void __fastcall BgBallistics<CgBallisticInstance>::~BgBallistics<CgBallisticInstance>(BgBallistics<CgBallisticInstance> *this)
{
  ??1?$BgBallistics@UCgBallisticInstance@@@@UEAA@XZ(this);
}

/*
==============
BgBallistics<CgBallisticInstance>::SetBallisticInstanceData
==============
*/

void __fastcall BgBallistics<CgBallisticInstance>::SetBallisticInstanceData(BgBallistics<CgBallisticInstance> *this, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const BulletFireParams *fireParams, const vec3_t *shootingAxisRight, const vec3_t *shootingAxisUp, const int attackerEntNum, const int shootingTime, const unsigned int randSeed, CgBallisticInstance *ballisticInstance)
{
  ?SetBallisticInstanceData@?$BgBallistics@UCgBallisticInstance@@@@IEAAXAEBUWeapon@@_NW4PlayerHandIndex@@AEBUBulletFireParams@@AEBTvec3_t@@4HHIPEAUCgBallisticInstance@@@Z(this, r_weapon, isAlternate, hand, fireParams, shootingAxisRight, shootingAxisUp, attackerEntNum, shootingTime, randSeed, ballisticInstance);
}

/*
==============
BgBallistics<GBallisticInstance>::CompactStorage
==============
*/

void __fastcall BgBallistics<GBallisticInstance>::CompactStorage(BgBallistics<GBallisticInstance> *this)
{
  ?CompactStorage@?$BgBallistics@UGBallisticInstance@@@@IEAAXXZ(this);
}

/*
==============
BgBallistics<GBallisticInstance>::FreeBalisticInstance
==============
*/

void __fastcall BgBallistics<GBallisticInstance>::FreeBalisticInstance(BgBallistics<GBallisticInstance> *this, GBallisticInstance *ballisticInstance)
{
  ?FreeBalisticInstance@?$BgBallistics@UGBallisticInstance@@@@IEAAXPEAUGBallisticInstance@@@Z(this, ballisticInstance);
}

/*
==============
BgBallistics<CgBallisticInstance>::CompactStorage
==============
*/
void BgBallistics<CgBallisticInstance>::CompactStorage(BgBallistics<CgBallisticInstance> *this)
{
  int m_numTouchedSlots; 
  CgBallisticInstance *m_ballisticInstances; 
  CgBallisticInstance *v4; 
  CgBallisticInstance *v5; 
  CgBallisticInstance *v6; 
  CgBallisticInstance *v7; 
  CgBallisticInstance *v8; 
  __int64 v9; 
  __int128 v10; 

  if ( this->m_numTouchedSlots < this->m_numSlotsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 283, ASSERT_TYPE_ASSERT, "(m_numTouchedSlots >= m_numSlotsActive)", (const char *)&queryFormat, "m_numTouchedSlots >= m_numSlotsActive") )
    __debugbreak();
  m_numTouchedSlots = this->m_numTouchedSlots;
  if ( m_numTouchedSlots && (float)((float)this->m_numSlotsActive / (float)m_numTouchedSlots) < `BgBallistics<CgBallisticInstance>::CompactStorage'::`2'::IDEAL_MIN_FILL_RATE )
  {
    m_ballisticInstances = this->m_ballisticInstances;
    v4 = &this->m_ballisticInstances[m_numTouchedSlots - 1];
    if ( v4 > this->m_ballisticInstances )
    {
      do
      {
        v5 = m_ballisticInstances;
        if ( m_ballisticInstances >= v4 )
          break;
        while ( v5->isInUse )
        {
          if ( ++v5 >= v4 )
            goto LABEL_18;
        }
        v6 = v4;
        while ( 1 )
        {
          v4 = v6 - 1;
          if ( v6->isInUse )
            break;
          --v6;
          if ( v4 <= m_ballisticInstances )
            goto LABEL_18;
        }
        v7 = v5;
        v8 = v6;
        v9 = 3i64;
        do
        {
          v7 = (CgBallisticInstance *)((char *)v7 + 128);
          v10 = *(_OWORD *)&v8->weapon.weaponIdx;
          v8 = (CgBallisticInstance *)((char *)v8 + 128);
          *(_OWORD *)&v7[-1].bulletId = v10;
          *(_OWORD *)&v7[-1].tracerStart.y = *(_OWORD *)&v8[-1].tracerStart.y;
          *(_OWORD *)&v7[-1].foliageSoundPos.z = *(_OWORD *)&v8[-1].foliageSoundPos.z;
          *(_OWORD *)v7[-1].soundData.whizbyData.whizbySndInPos.v = *(_OWORD *)v8[-1].soundData.whizbyData.whizbySndInPos.v;
          *(_OWORD *)&v7[-1].soundData.whizbyData.whizbySndOutPos.y = *(_OWORD *)&v8[-1].soundData.whizbyData.whizbySndOutPos.y;
          *(_OWORD *)&v7[-1].soundData.whizbyData.whizbyOutAlias = *(_OWORD *)&v8[-1].soundData.whizbyData.whizbyOutAlias;
          *(_OWORD *)&v7[-1].soundData.whizbyData.whizbyDelayMs = *(_OWORD *)&v8[-1].soundData.whizbyData.whizbyDelayMs;
          *(_OWORD *)&v7[-1].foliageSoundSurfaceTypeId = *(_OWORD *)&v8[-1].foliageSoundSurfaceTypeId;
          --v9;
        }
        while ( v9 );
        *(_OWORD *)&v7->weapon.weaponIdx = *(_OWORD *)&v8->weapon.weaponIdx;
        *(_OWORD *)&v7->weapon.weaponAttachments[2] = *(_OWORD *)&v8->weapon.weaponAttachments[2];
        *(_OWORD *)&v7->weapon.attachmentVariationIndices[5] = *(_OWORD *)&v8->weapon.attachmentVariationIndices[5];
        *(_QWORD *)&v7->weapon.attachmentVariationIndices[21] = *(_QWORD *)&v8->weapon.attachmentVariationIndices[21];
        memset_0(v6, 0, sizeof(CgBallisticInstance));
        this->OnCompactOperation(this, v5);
        m_ballisticInstances = v5 + 1;
      }
      while ( v4 > &v5[1] );
    }
LABEL_18:
    this->m_firstFree = NULL;
    this->m_lastFree = NULL;
    this->m_numTouchedSlots = this->m_numSlotsActive;
  }
}

/*
==============
BgBallistics<CgBallisticInstance>::SetBallisticInstanceData
==============
*/
void BgBallistics<CgBallisticInstance>::SetBallisticInstanceData(BgBallistics<CgBallisticInstance> *this, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const BulletFireParams *fireParams, const vec3_t *shootingAxisRight, const vec3_t *shootingAxisUp, const int attackerEntNum, const int shootingTime, const unsigned int randSeed, CgBallisticInstance *ballisticInstance)
{
  __int128 v14; 
  const BallisticInfo *BallisticInfo; 
  const BallisticInfo *v16; 
  __int128 v17; 
  __int128 v18; 
  float zeroingAngle; 
  float v23; 
  double v24; 
  float v25; 
  double v26; 
  float v27; 
  __int128 v28; 
  float v29; 
  float v30; 
  __int128 v31; 
  vec3_t angles; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 

  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 165, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  *(__m256i *)&ballisticInstance->weapon.weaponIdx = *(__m256i *)&r_weapon->weaponIdx;
  *(_OWORD *)&ballisticInstance->weapon.attachmentVariationIndices[5] = *(_OWORD *)&r_weapon->attachmentVariationIndices[5];
  *(double *)&ballisticInstance->weapon.attachmentVariationIndices[21] = *(double *)&r_weapon->attachmentVariationIndices[21];
  *(_DWORD *)&ballisticInstance->weapon.weaponCamo = *(_DWORD *)&r_weapon->weaponCamo;
  ballisticInstance->isAlternate = isAlternate;
  ballisticInstance->hand = hand;
  *(_OWORD *)&ballisticInstance->fireParams.weaponEntIndex = *(_OWORD *)&fireParams->weaponEntIndex;
  *(_OWORD *)&ballisticInstance->fireParams.ignoreHitEntityQueue[3] = *(_OWORD *)&fireParams->ignoreHitEntityQueue[3];
  *(_OWORD *)&ballisticInstance->fireParams.ignoreHitEntityQueue[7] = *(_OWORD *)&fireParams->ignoreHitEntityQueue[7];
  *(_OWORD *)&ballisticInstance->fireParams.ignoreHitEntityQueue[11] = *(_OWORD *)&fireParams->ignoreHitEntityQueue[11];
  *(_OWORD *)&ballisticInstance->fireParams.ignoreHitEntityQueue[15] = *(_OWORD *)&fireParams->ignoreHitEntityQueue[15];
  *(_OWORD *)&ballisticInstance->fireParams.penetrationMultiplier = *(_OWORD *)&fireParams->penetrationMultiplier;
  *(_OWORD *)&ballisticInstance->fireParams.initialPos.y = *(_OWORD *)&fireParams->initialPos.y;
  *(_OWORD *)&ballisticInstance->fireParams.start.z = *(_OWORD *)&fireParams->start.z;
  *(_OWORD *)ballisticInstance->fireParams.dir.v = *(_OWORD *)fireParams->dir.v;
  v14 = *(_OWORD *)&fireParams->shotCount;
  ballisticInstance->attackerEntNum = attackerEntNum;
  ballisticInstance->shootingTime = shootingTime;
  ballisticInstance->lastSimulationTime = shootingTime;
  *(_OWORD *)&ballisticInstance->fireParams.shotCount = v14;
  ballisticInstance->randSeed = randSeed;
  ballisticInstance->fireParams.isBallistics = 1;
  ballisticInstance->shootingPos = fireParams->start;
  BallisticInfo = BG_GetBallisticInfo(r_weapon, isAlternate);
  v16 = BallisticInfo;
  if ( (!BallisticInfo || !BallisticInfo->calculated || !BallisticInfo->enableBallisticTrajectory) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 180, ASSERT_TYPE_ASSERT, "(ballisticInfo && ballisticInfo->calculated && ballisticInfo->enableBallisticTrajectory)", (const char *)&queryFormat, "ballisticInfo && ballisticInfo->calculated && ballisticInfo->enableBallisticTrajectory") )
    __debugbreak();
  v17 = LODWORD(ballisticInstance->fireParams.dir.v[0]);
  v18 = v17;
  *(float *)&v18 = fsqrt((float)((float)(*(float *)&v17 * *(float *)&v17) + (float)(ballisticInstance->fireParams.dir.v[1] * ballisticInstance->fireParams.dir.v[1])) + (float)(ballisticInstance->fireParams.dir.v[2] * ballisticInstance->fireParams.dir.v[2]));
  _XMM4 = v18;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm6, xmm0
  }
  ballisticInstance->fireParams.dir.v[0] = *(float *)&v17 * (float)(1.0 / *(float *)&_XMM0);
  ballisticInstance->fireParams.dir.v[1] = (float)(1.0 / *(float *)&_XMM0) * ballisticInstance->fireParams.dir.v[1];
  ballisticInstance->fireParams.dir.v[2] = (float)(1.0 / *(float *)&_XMM0) * ballisticInstance->fireParams.dir.v[2];
  ballisticInstance->originalShootingdir = ballisticInstance->fireParams.dir;
  zeroingAngle = v16->calculated->zeroingAngle;
  if ( COERCE_FLOAT(LODWORD(zeroingAngle) & _xmm) > 0.000001 )
  {
    angles.v[1] = 0.0;
    angles.v[2] = 0.0;
    LODWORD(angles.v[0]) = LODWORD(zeroingAngle) ^ _xmm;
    AnglesToAxis(&angles, &axis);
    v23 = ballisticInstance->fireParams.dir.v[2];
    *(_QWORD *)in2.m[0].v = *(_QWORD *)ballisticInstance->fireParams.dir.v;
    v24 = *(double *)shootingAxisRight->v;
    in2.m[0].v[2] = v23;
    v25 = shootingAxisRight->v[2];
    *(double *)in2.row1.v = v24;
    v26 = *(double *)shootingAxisUp->v;
    in2.m[1].v[2] = v25;
    v27 = shootingAxisUp->v[2];
    *(double *)in2.row2.v = v26;
    in2.m[2].v[2] = v27;
    MatrixMultiply(&axis, &in2, &out);
    v28 = LODWORD(out.m[0].v[1]);
    v29 = out.m[0].v[2];
    v30 = out.m[0].v[0];
    ballisticInstance->fireParams.dir.v[1] = out.m[0].v[1];
    v31 = v28;
    ballisticInstance->fireParams.dir.v[2] = v29;
    *(float *)&v31 = fsqrt((float)((float)(*(float *)&v28 * *(float *)&v28) + (float)(v30 * v30)) + (float)(v29 * v29));
    _XMM3 = v31;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm6, xmm0
    }
    ballisticInstance->fireParams.dir.v[0] = (float)(1.0 / *(float *)&_XMM0) * v30;
    ballisticInstance->fireParams.dir.v[1] = (float)(1.0 / *(float *)&_XMM0) * ballisticInstance->fireParams.dir.v[1];
    ballisticInstance->fireParams.dir.v[2] = (float)(1.0 / *(float *)&_XMM0) * ballisticInstance->fireParams.dir.v[2];
  }
}

/*
==============
BgBallistics<CgBallisticInstance>::ShouldFireBallisticBullet
==============
*/
bool BgBallistics<CgBallisticInstance>::ShouldFireBallisticBullet(BgBallistics<CgBallisticInstance> *this, const Weapon *weapon, const bool isAlternate, const int attackerEntNum)
{
  const BallisticInfo *BallisticInfo; 
  const dvar_t *v5; 

  BallisticInfo = BG_GetBallisticInfo(weapon, isAlternate);
  if ( !BallisticInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 420, ASSERT_TYPE_ASSERT, "(ballisticInfo)", (const char *)&queryFormat, "ballisticInfo") )
    __debugbreak();
  v5 = DCONST_DVARBOOL_bg_ballisticsEnabled;
  if ( !DCONST_DVARBOOL_bg_ballisticsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  return v5->current.enabled && BallisticInfo->enableBallisticTrajectory;
}

/*
==============
BgBallistics<CgBallisticInstance>::UpdateBallisticPosition
==============
*/
char BgBallistics<CgBallisticInstance>::UpdateBallisticPosition(BgBallistics<CgBallisticInstance> *this, CgBallisticInstance *ballisticInstance, const float terminationRange)
{
  const BallisticInfo *BallisticInfo; 
  const BallisticInfo *v6; 
  const dvar_t *v7; 
  int shootingTime; 
  int lifeTimeMs; 
  int lastSimulationTime; 
  int v11; 
  double BallisticMuzzleVelocityScale; 
  float travelDistance; 
  float v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  float v18; 
  float v19; 
  float v20; 
  vec3_t outDisplacement; 

  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 360, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  BallisticInfo = BG_GetBallisticInfo(&ballisticInstance->weapon, ballisticInstance->isAlternate);
  v6 = BallisticInfo;
  if ( (!BallisticInfo || !BallisticInfo->enableBallisticTrajectory) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 363, ASSERT_TYPE_ASSERT, "(ballisticInfo && ballisticInfo->enableBallisticTrajectory)", (const char *)&queryFormat, "ballisticInfo && ballisticInfo->enableBallisticTrajectory") )
    __debugbreak();
  v7 = DCONST_DVARINT_bg_ballisticsSimTimeStepMs;
  if ( !DCONST_DVARINT_bg_ballisticsSimTimeStepMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsSimTimeStepMs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  shootingTime = ballisticInstance->shootingTime;
  lifeTimeMs = v6->lifeTimeMs;
  lastSimulationTime = ballisticInstance->lastSimulationTime;
  v11 = lastSimulationTime + v7->current.integer - shootingTime;
  if ( lifeTimeMs <= v11 )
    v11 = lifeTimeMs - 1;
  if ( lastSimulationTime != shootingTime )
  {
    ballisticInstance->fireParams.start.v[0] = ballisticInstance->fireParams.end.v[0];
    ballisticInstance->fireParams.start.v[1] = ballisticInstance->fireParams.end.v[1];
    ballisticInstance->fireParams.start.v[2] = ballisticInstance->fireParams.end.v[2];
  }
  BallisticMuzzleVelocityScale = BG_GetBallisticMuzzleVelocityScale(&ballisticInstance->weapon, ballisticInstance->isAlternate);
  BG_Ballistics_CalculateDisplacement(v6, v11, *(const float *)&BallisticMuzzleVelocityScale, &ballisticInstance->fireParams.dir, &outDisplacement);
  if ( terminationRange <= 0.0 )
  {
    v19 = outDisplacement.v[2];
    v16 = outDisplacement.v[1];
    v14 = outDisplacement.v[0];
  }
  else
  {
    travelDistance = ballisticInstance->fireParams.travelDistance;
    if ( travelDistance >= terminationRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 383, ASSERT_TYPE_ASSERT, "( travelledDistance ) < ( terminationRange )", "%s < %s\n\t%i, %i", "travelledDistance", "terminationRange", (int)travelDistance, (int)terminationRange) )
      __debugbreak();
    v14 = outDisplacement.v[0];
    v15 = (float)(outDisplacement.v[0] + ballisticInstance->shootingPos.v[0]) - ballisticInstance->fireParams.start.v[0];
    v16 = outDisplacement.v[1];
    v17 = LODWORD(outDisplacement.v[1]);
    v18 = (float)(outDisplacement.v[1] + ballisticInstance->shootingPos.v[1]) - ballisticInstance->fireParams.start.v[1];
    v19 = outDisplacement.v[2];
    v20 = (float)(outDisplacement.v[2] + ballisticInstance->shootingPos.v[2]) - ballisticInstance->fireParams.start.v[2];
    *(float *)&v17 = fsqrt((float)((float)(v18 * v18) + (float)(v15 * v15)) + (float)(v20 * v20));
    _XMM2 = v17;
    if ( (float)(*(float *)&v17 + travelDistance) >= terminationRange )
    {
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm1, xmm0
      }
      ballisticInstance->fireParams.end.v[0] = (float)((float)(v15 * (float)(1.0 / *(float *)&_XMM0)) * (float)(terminationRange - travelDistance)) + ballisticInstance->fireParams.start.v[0];
      ballisticInstance->fireParams.end.v[1] = (float)((float)(v18 * (float)(1.0 / *(float *)&_XMM0)) * (float)(terminationRange - travelDistance)) + ballisticInstance->fireParams.start.v[1];
      ballisticInstance->fireParams.end.v[2] = (float)((float)(v20 * (float)(1.0 / *(float *)&_XMM0)) * (float)(terminationRange - travelDistance)) + ballisticInstance->fireParams.start.v[2];
      return 1;
    }
  }
  ballisticInstance->fireParams.end.v[0] = v14 + ballisticInstance->shootingPos.v[0];
  ballisticInstance->fireParams.end.v[1] = v16 + ballisticInstance->shootingPos.v[1];
  ballisticInstance->fireParams.end.v[2] = v19 + ballisticInstance->shootingPos.v[2];
  return 0;
}

/*
==============
BgBallistics<GBallisticInstance>::CompactStorage
==============
*/
void BgBallistics<GBallisticInstance>::CompactStorage(BgBallistics<GBallisticInstance> *this)
{
  int m_numTouchedSlots; 
  GBallisticInstance *m_ballisticInstances; 
  GBallisticInstance *v4; 
  GBallisticInstance *v5; 
  GBallisticInstance *v6; 
  GBallisticInstance *v7; 
  GBallisticInstance *v8; 
  __int64 v9; 
  __int128 v10; 

  if ( this->m_numTouchedSlots < this->m_numSlotsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 283, ASSERT_TYPE_ASSERT, "(m_numTouchedSlots >= m_numSlotsActive)", (const char *)&queryFormat, "m_numTouchedSlots >= m_numSlotsActive") )
    __debugbreak();
  m_numTouchedSlots = this->m_numTouchedSlots;
  if ( m_numTouchedSlots && (float)((float)this->m_numSlotsActive / (float)m_numTouchedSlots) < `BgBallistics<GBallisticInstance>::CompactStorage'::`2'::IDEAL_MIN_FILL_RATE )
  {
    m_ballisticInstances = this->m_ballisticInstances;
    v4 = &this->m_ballisticInstances[m_numTouchedSlots - 1];
    if ( v4 > this->m_ballisticInstances )
    {
      do
      {
        v5 = m_ballisticInstances;
        if ( m_ballisticInstances >= v4 )
          break;
        while ( v5->isInUse )
        {
          if ( ++v5 >= v4 )
            goto LABEL_18;
        }
        v6 = v4;
        while ( 1 )
        {
          v4 = v6 - 1;
          if ( v6->isInUse )
            break;
          --v6;
          if ( v4 <= m_ballisticInstances )
            goto LABEL_18;
        }
        v7 = v5;
        v8 = v6;
        v9 = 2i64;
        do
        {
          v7 = (GBallisticInstance *)((char *)v7 + 128);
          v10 = *(_OWORD *)&v8->weapon.weaponIdx;
          v8 = (GBallisticInstance *)((char *)v8 + 128);
          *(_OWORD *)&v7[-1].fireParams.penetrationMultiplier = v10;
          *(_OWORD *)&v7[-1].fireParams.initialPos.y = *(_OWORD *)&v8[-1].fireParams.initialPos.y;
          *(_OWORD *)&v7[-1].fireParams.start.z = *(_OWORD *)&v8[-1].fireParams.start.z;
          *(_OWORD *)v7[-1].fireParams.dir.v = *(_OWORD *)v8[-1].fireParams.dir.v;
          *(_OWORD *)&v7[-1].fireParams.shotCount = *(_OWORD *)&v8[-1].fireParams.shotCount;
          *(_OWORD *)v7[-1].shootingPos.v = *(_OWORD *)v8[-1].shootingPos.v;
          *(_OWORD *)&v7[-1].originalShootingdir.y = *(_OWORD *)&v8[-1].originalShootingdir.y;
          *(_OWORD *)&v7[-1].shootingTime = *(_OWORD *)&v8[-1].shootingTime;
          --v9;
        }
        while ( v9 );
        *(_OWORD *)&v7->weapon.weaponIdx = *(_OWORD *)&v8->weapon.weaponIdx;
        *(_QWORD *)&v7->weapon.weaponAttachments[2] = *(_QWORD *)&v8->weapon.weaponAttachments[2];
        memset_0(v6, 0, sizeof(GBallisticInstance));
        this->OnCompactOperation(this, v5);
        m_ballisticInstances = v5 + 1;
      }
      while ( v4 > &v5[1] );
    }
LABEL_18:
    this->m_firstFree = NULL;
    this->m_lastFree = NULL;
    this->m_numTouchedSlots = this->m_numSlotsActive;
  }
}

/*
==============
BgBallistics<GBallisticInstance>::FreeBalisticInstance
==============
*/
void BgBallistics<GBallisticInstance>::FreeBalisticInstance(BgBallistics<GBallisticInstance> *this, GBallisticInstance *ballisticInstance)
{
  GBallisticInstance *m_firstFree; 

  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 256, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  if ( !ballisticInstance->isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 257, ASSERT_TYPE_ASSERT, "(ballisticInstance->isInUse)", (const char *)&queryFormat, "ballisticInstance->isInUse") )
    __debugbreak();
  if ( ballisticInstance->nextFree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 258, ASSERT_TYPE_ASSERT, "(!ballisticInstance->nextFree)", (const char *)&queryFormat, "!ballisticInstance->nextFree") )
    __debugbreak();
  memset_0(ballisticInstance, 0, sizeof(GBallisticInstance));
  m_firstFree = this->m_firstFree;
  this->m_firstFree = ballisticInstance;
  if ( m_firstFree )
    ballisticInstance->nextFree = m_firstFree;
  else
    this->m_lastFree = ballisticInstance;
  --this->m_numSlotsActive;
}

/*
==============
BgBallistics<GBallisticInstance>::SetBallisticInstanceData
==============
*/
void BgBallistics<GBallisticInstance>::SetBallisticInstanceData(BgBallistics<GBallisticInstance> *this, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const BulletFireParams *fireParams, const vec3_t *shootingAxisRight, const vec3_t *shootingAxisUp, const int attackerEntNum, const int shootingTime, const unsigned int randSeed, GBallisticInstance *ballisticInstance)
{
  __int128 v14; 
  const BallisticInfo *BallisticInfo; 
  const BallisticInfo *v16; 
  __int128 v17; 
  __int128 v18; 
  float zeroingAngle; 
  float v23; 
  double v24; 
  float v25; 
  double v26; 
  float v27; 
  __int128 v28; 
  float v29; 
  float v30; 
  __int128 v31; 
  vec3_t angles; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 

  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 165, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  *(__m256i *)&ballisticInstance->weapon.weaponIdx = *(__m256i *)&r_weapon->weaponIdx;
  *(_OWORD *)&ballisticInstance->weapon.attachmentVariationIndices[5] = *(_OWORD *)&r_weapon->attachmentVariationIndices[5];
  *(double *)&ballisticInstance->weapon.attachmentVariationIndices[21] = *(double *)&r_weapon->attachmentVariationIndices[21];
  *(_DWORD *)&ballisticInstance->weapon.weaponCamo = *(_DWORD *)&r_weapon->weaponCamo;
  ballisticInstance->isAlternate = isAlternate;
  ballisticInstance->hand = hand;
  *(_OWORD *)&ballisticInstance->fireParams.weaponEntIndex = *(_OWORD *)&fireParams->weaponEntIndex;
  *(_OWORD *)&ballisticInstance->fireParams.ignoreHitEntityQueue[3] = *(_OWORD *)&fireParams->ignoreHitEntityQueue[3];
  *(_OWORD *)&ballisticInstance->fireParams.ignoreHitEntityQueue[7] = *(_OWORD *)&fireParams->ignoreHitEntityQueue[7];
  *(_OWORD *)&ballisticInstance->fireParams.ignoreHitEntityQueue[11] = *(_OWORD *)&fireParams->ignoreHitEntityQueue[11];
  *(_OWORD *)&ballisticInstance->fireParams.ignoreHitEntityQueue[15] = *(_OWORD *)&fireParams->ignoreHitEntityQueue[15];
  *(_OWORD *)&ballisticInstance->fireParams.penetrationMultiplier = *(_OWORD *)&fireParams->penetrationMultiplier;
  *(_OWORD *)&ballisticInstance->fireParams.initialPos.y = *(_OWORD *)&fireParams->initialPos.y;
  *(_OWORD *)&ballisticInstance->fireParams.start.z = *(_OWORD *)&fireParams->start.z;
  *(_OWORD *)ballisticInstance->fireParams.dir.v = *(_OWORD *)fireParams->dir.v;
  v14 = *(_OWORD *)&fireParams->shotCount;
  ballisticInstance->attackerEntNum = attackerEntNum;
  ballisticInstance->shootingTime = shootingTime;
  ballisticInstance->lastSimulationTime = shootingTime;
  *(_OWORD *)&ballisticInstance->fireParams.shotCount = v14;
  ballisticInstance->randSeed = randSeed;
  ballisticInstance->fireParams.isBallistics = 1;
  ballisticInstance->shootingPos = fireParams->start;
  BallisticInfo = BG_GetBallisticInfo(r_weapon, isAlternate);
  v16 = BallisticInfo;
  if ( (!BallisticInfo || !BallisticInfo->calculated || !BallisticInfo->enableBallisticTrajectory) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 180, ASSERT_TYPE_ASSERT, "(ballisticInfo && ballisticInfo->calculated && ballisticInfo->enableBallisticTrajectory)", (const char *)&queryFormat, "ballisticInfo && ballisticInfo->calculated && ballisticInfo->enableBallisticTrajectory") )
    __debugbreak();
  v17 = LODWORD(ballisticInstance->fireParams.dir.v[0]);
  v18 = v17;
  *(float *)&v18 = fsqrt((float)((float)(*(float *)&v17 * *(float *)&v17) + (float)(ballisticInstance->fireParams.dir.v[1] * ballisticInstance->fireParams.dir.v[1])) + (float)(ballisticInstance->fireParams.dir.v[2] * ballisticInstance->fireParams.dir.v[2]));
  _XMM4 = v18;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm6, xmm0
  }
  ballisticInstance->fireParams.dir.v[0] = *(float *)&v17 * (float)(1.0 / *(float *)&_XMM0);
  ballisticInstance->fireParams.dir.v[1] = (float)(1.0 / *(float *)&_XMM0) * ballisticInstance->fireParams.dir.v[1];
  ballisticInstance->fireParams.dir.v[2] = (float)(1.0 / *(float *)&_XMM0) * ballisticInstance->fireParams.dir.v[2];
  ballisticInstance->originalShootingdir = ballisticInstance->fireParams.dir;
  zeroingAngle = v16->calculated->zeroingAngle;
  if ( COERCE_FLOAT(LODWORD(zeroingAngle) & _xmm) > 0.000001 )
  {
    angles.v[1] = 0.0;
    angles.v[2] = 0.0;
    LODWORD(angles.v[0]) = LODWORD(zeroingAngle) ^ _xmm;
    AnglesToAxis(&angles, &axis);
    v23 = ballisticInstance->fireParams.dir.v[2];
    *(_QWORD *)in2.m[0].v = *(_QWORD *)ballisticInstance->fireParams.dir.v;
    v24 = *(double *)shootingAxisRight->v;
    in2.m[0].v[2] = v23;
    v25 = shootingAxisRight->v[2];
    *(double *)in2.row1.v = v24;
    v26 = *(double *)shootingAxisUp->v;
    in2.m[1].v[2] = v25;
    v27 = shootingAxisUp->v[2];
    *(double *)in2.row2.v = v26;
    in2.m[2].v[2] = v27;
    MatrixMultiply(&axis, &in2, &out);
    v28 = LODWORD(out.m[0].v[1]);
    v29 = out.m[0].v[2];
    v30 = out.m[0].v[0];
    ballisticInstance->fireParams.dir.v[1] = out.m[0].v[1];
    v31 = v28;
    ballisticInstance->fireParams.dir.v[2] = v29;
    *(float *)&v31 = fsqrt((float)((float)(*(float *)&v28 * *(float *)&v28) + (float)(v30 * v30)) + (float)(v29 * v29));
    _XMM3 = v31;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm6, xmm0
    }
    ballisticInstance->fireParams.dir.v[0] = (float)(1.0 / *(float *)&_XMM0) * v30;
    ballisticInstance->fireParams.dir.v[1] = (float)(1.0 / *(float *)&_XMM0) * ballisticInstance->fireParams.dir.v[1];
    ballisticInstance->fireParams.dir.v[2] = (float)(1.0 / *(float *)&_XMM0) * ballisticInstance->fireParams.dir.v[2];
  }
}

/*
==============
BgBallistics<GBallisticInstance>::ShouldFireBallisticBullet
==============
*/
bool BgBallistics<GBallisticInstance>::ShouldFireBallisticBullet(BgBallistics<GBallisticInstance> *this, const Weapon *weapon, const bool isAlternate, const int attackerEntNum)
{
  const BallisticInfo *BallisticInfo; 
  const dvar_t *v5; 

  BallisticInfo = BG_GetBallisticInfo(weapon, isAlternate);
  if ( !BallisticInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 420, ASSERT_TYPE_ASSERT, "(ballisticInfo)", (const char *)&queryFormat, "ballisticInfo") )
    __debugbreak();
  v5 = DCONST_DVARBOOL_bg_ballisticsEnabled;
  if ( !DCONST_DVARBOOL_bg_ballisticsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  return v5->current.enabled && BallisticInfo->enableBallisticTrajectory;
}

/*
==============
BgBallistics<GBallisticInstance>::UpdateBallisticPosition
==============
*/
char BgBallistics<GBallisticInstance>::UpdateBallisticPosition(BgBallistics<GBallisticInstance> *this, GBallisticInstance *ballisticInstance, const float terminationRange)
{
  const BallisticInfo *BallisticInfo; 
  const BallisticInfo *v6; 
  const dvar_t *v7; 
  int shootingTime; 
  int lifeTimeMs; 
  int lastSimulationTime; 
  int v11; 
  double BallisticMuzzleVelocityScale; 
  float travelDistance; 
  float v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  float v18; 
  float v19; 
  float v20; 
  vec3_t outDisplacement; 

  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 360, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  BallisticInfo = BG_GetBallisticInfo(&ballisticInstance->weapon, ballisticInstance->isAlternate);
  v6 = BallisticInfo;
  if ( (!BallisticInfo || !BallisticInfo->enableBallisticTrajectory) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 363, ASSERT_TYPE_ASSERT, "(ballisticInfo && ballisticInfo->enableBallisticTrajectory)", (const char *)&queryFormat, "ballisticInfo && ballisticInfo->enableBallisticTrajectory") )
    __debugbreak();
  v7 = DCONST_DVARINT_bg_ballisticsSimTimeStepMs;
  if ( !DCONST_DVARINT_bg_ballisticsSimTimeStepMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsSimTimeStepMs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  shootingTime = ballisticInstance->shootingTime;
  lifeTimeMs = v6->lifeTimeMs;
  lastSimulationTime = ballisticInstance->lastSimulationTime;
  v11 = lastSimulationTime + v7->current.integer - shootingTime;
  if ( lifeTimeMs <= v11 )
    v11 = lifeTimeMs - 1;
  if ( lastSimulationTime != shootingTime )
  {
    ballisticInstance->fireParams.start.v[0] = ballisticInstance->fireParams.end.v[0];
    ballisticInstance->fireParams.start.v[1] = ballisticInstance->fireParams.end.v[1];
    ballisticInstance->fireParams.start.v[2] = ballisticInstance->fireParams.end.v[2];
  }
  BallisticMuzzleVelocityScale = BG_GetBallisticMuzzleVelocityScale(&ballisticInstance->weapon, ballisticInstance->isAlternate);
  BG_Ballistics_CalculateDisplacement(v6, v11, *(const float *)&BallisticMuzzleVelocityScale, &ballisticInstance->fireParams.dir, &outDisplacement);
  if ( terminationRange <= 0.0 )
  {
    v19 = outDisplacement.v[2];
    v16 = outDisplacement.v[1];
    v14 = outDisplacement.v[0];
  }
  else
  {
    travelDistance = ballisticInstance->fireParams.travelDistance;
    if ( travelDistance >= terminationRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 383, ASSERT_TYPE_ASSERT, "( travelledDistance ) < ( terminationRange )", "%s < %s\n\t%i, %i", "travelledDistance", "terminationRange", (int)travelDistance, (int)terminationRange) )
      __debugbreak();
    v14 = outDisplacement.v[0];
    v15 = (float)(outDisplacement.v[0] + ballisticInstance->shootingPos.v[0]) - ballisticInstance->fireParams.start.v[0];
    v16 = outDisplacement.v[1];
    v17 = LODWORD(outDisplacement.v[1]);
    v18 = (float)(outDisplacement.v[1] + ballisticInstance->shootingPos.v[1]) - ballisticInstance->fireParams.start.v[1];
    v19 = outDisplacement.v[2];
    v20 = (float)(outDisplacement.v[2] + ballisticInstance->shootingPos.v[2]) - ballisticInstance->fireParams.start.v[2];
    *(float *)&v17 = fsqrt((float)((float)(v18 * v18) + (float)(v15 * v15)) + (float)(v20 * v20));
    _XMM2 = v17;
    if ( (float)(*(float *)&v17 + travelDistance) >= terminationRange )
    {
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm1, xmm0
      }
      ballisticInstance->fireParams.end.v[0] = (float)((float)(v15 * (float)(1.0 / *(float *)&_XMM0)) * (float)(terminationRange - travelDistance)) + ballisticInstance->fireParams.start.v[0];
      ballisticInstance->fireParams.end.v[1] = (float)((float)(v18 * (float)(1.0 / *(float *)&_XMM0)) * (float)(terminationRange - travelDistance)) + ballisticInstance->fireParams.start.v[1];
      ballisticInstance->fireParams.end.v[2] = (float)((float)(v20 * (float)(1.0 / *(float *)&_XMM0)) * (float)(terminationRange - travelDistance)) + ballisticInstance->fireParams.start.v[2];
      return 1;
    }
  }
  ballisticInstance->fireParams.end.v[0] = v14 + ballisticInstance->shootingPos.v[0];
  ballisticInstance->fireParams.end.v[1] = v16 + ballisticInstance->shootingPos.v[1];
  ballisticInstance->fireParams.end.v[2] = v19 + ballisticInstance->shootingPos.v[2];
  return 0;
}

/*
==============
BgBallistics<GBallisticInstance>::~BgBallistics<GBallisticInstance>
==============
*/
void BgBallistics<GBallisticInstance>::~BgBallistics<GBallisticInstance>(BgBallistics<GBallisticInstance> *this)
{
  this->__vftable = (BgBallistics<GBallisticInstance>_vtbl *)&BgBallistics<GBallisticInstance>::`vftable';
}

/*
==============
BgBallistics<CgBallisticInstance>::~BgBallistics<CgBallisticInstance>
==============
*/
void BgBallistics<CgBallisticInstance>::~BgBallistics<CgBallisticInstance>(BgBallistics<CgBallisticInstance> *this)
{
  this->__vftable = (BgBallistics<CgBallisticInstance>_vtbl *)&BgBallistics<CgBallisticInstance>::`vftable';
}

