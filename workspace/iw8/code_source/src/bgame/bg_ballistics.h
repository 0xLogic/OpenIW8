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

void __fastcall BgBallistics<CgBallisticInstance>::CompactStorage(BgBallistics<CgBallisticInstance> *this, double _XMM1_8)
{
  if ( this->m_numTouchedSlots < this->m_numSlotsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 283, ASSERT_TYPE_ASSERT, "(m_numTouchedSlots >= m_numSlotsActive)", (const char *)&queryFormat, "m_numTouchedSlots >= m_numSlotsActive") )
    __debugbreak();
  if ( this->m_numTouchedSlots )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rsi+40758h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm1, xmm1, xmm0
      vcomiss xmm1, cs:?IDEAL_MIN_FILL_RATE@?1??CompactStorage@?$BgBallistics@UCgBallisticInstance@@@@IEAAXXZ@4MA; float `BgBallistics<CgBallisticInstance>::CompactStorage(void)'::`2'::IDEAL_MIN_FILL_RATE
    }
  }
}

/*
==============
BgBallistics<CgBallisticInstance>::SetBallisticInstanceData
==============
*/
void BgBallistics<CgBallisticInstance>::SetBallisticInstanceData(BgBallistics<CgBallisticInstance> *this, const Weapon *r_weapon, const bool isAlternate, const PlayerHandIndex hand, const BulletFireParams *fireParams, const vec3_t *shootingAxisRight, const vec3_t *shootingAxisUp, const int attackerEntNum, const int shootingTime, const unsigned int randSeed, CgBallisticInstance *ballisticInstance)
{
  const BallisticInfo *BallisticInfo; 
  const BallisticInfo *v33; 
  bool v34; 
  bool v35; 
  float v59; 
  float v61; 
  float v63; 
  vec3_t angles; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  char v86; 

  __asm { vmovaps [rsp+0F8h+var_38], xmm6 }
  _RBX = ballisticInstance;
  _R14 = shootingAxisRight;
  _R15 = shootingAxisUp;
  _RDI = r_weapon;
  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 165, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  __asm { vmovups ymm0, ymmword ptr [rdi] }
  _R8 = fireParams;
  __asm
  {
    vmovups ymmword ptr [rbx], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rbx+20h], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rbx+30h], xmm0
  }
  *(_DWORD *)&ballisticInstance->weapon.weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
  ballisticInstance->isAlternate = isAlternate;
  ballisticInstance->hand = hand;
  __asm
  {
    vmovups xmm0, xmmword ptr [r8]
    vmovups xmmword ptr [rbx+48h], xmm0
    vmovups xmm1, xmmword ptr [r8+10h]
    vmovups xmmword ptr [rbx+58h], xmm1
    vmovups xmm0, xmmword ptr [r8+20h]
    vmovups xmmword ptr [rbx+68h], xmm0
    vmovups xmm1, xmmword ptr [r8+30h]
    vmovups xmmword ptr [rbx+78h], xmm1
    vmovups xmm0, xmmword ptr [r8+40h]
    vmovups xmmword ptr [rbx+88h], xmm0
    vmovups xmm1, xmmword ptr [r8+50h]
    vmovups xmmword ptr [rbx+98h], xmm1
    vmovups xmm0, xmmword ptr [r8+60h]
    vmovups xmmword ptr [rbx+0A8h], xmm0
    vmovups xmm0, xmmword ptr [r8+70h]
    vmovups xmmword ptr [rbx+0B8h], xmm0
    vmovups xmm1, xmmword ptr [r8+80h]
    vmovups xmmword ptr [rbx+0C8h], xmm1
    vmovups xmm0, xmmword ptr [r8+90h]
  }
  ballisticInstance->attackerEntNum = attackerEntNum;
  ballisticInstance->shootingTime = shootingTime;
  ballisticInstance->lastSimulationTime = shootingTime;
  __asm { vmovups xmmword ptr [rbx+0D8h], xmm0 }
  ballisticInstance->randSeed = randSeed;
  ballisticInstance->fireParams.isBallistics = 1;
  ballisticInstance->shootingPos = fireParams->start;
  BallisticInfo = BG_GetBallisticInfo(_RDI, isAlternate);
  v33 = BallisticInfo;
  if ( !BallisticInfo || !BallisticInfo->calculated || (v34 = !BallisticInfo->enableBallisticTrajectory) )
  {
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 180, ASSERT_TYPE_ASSERT, "(ballisticInfo && ballisticInfo->calculated && ballisticInfo->enableBallisticTrajectory)", (const char *)&queryFormat, "ballisticInfo && ballisticInfo->calculated && ballisticInfo->enableBallisticTrajectory");
    v34 = !v35;
    if ( v35 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0CCh]
    vmovss  xmm5, dword ptr [rbx+0C8h]
    vmovss  xmm3, dword ptr [rbx+0D0h]
    vmovss  xmm6, cs:__real@3f800000
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm6, xmm0
    vdivss  xmm2, xmm6, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbx+0C8h], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+0CCh]
    vmovss  dword ptr [rbx+0CCh], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+0D0h]
    vmovss  dword ptr [rbx+0D0h], xmm0
  }
  ballisticInstance->originalShootingdir = ballisticInstance->fireParams.dir;
  _RAX = v33->calculated;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+8]
    vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( !v34 )
  {
    __asm
    {
      vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
      vxorps  xmm1, xmm1, xmm1
      vmovss  dword ptr [rsp+0F8h+angles+4], xmm1
      vmovss  dword ptr [rsp+0F8h+angles+8], xmm1
      vmovss  dword ptr [rsp+0F8h+angles], xmm0
    }
    AnglesToAxis(&angles, &axis);
    __asm { vmovsd  xmm0, qword ptr [rbx+0C8h] }
    v59 = ballisticInstance->fireParams.dir.v[2];
    __asm
    {
      vmovsd  qword ptr [rsp+0F8h+in2], xmm0
      vmovsd  xmm0, qword ptr [r14]
    }
    in2.m[0].v[2] = v59;
    v61 = shootingAxisRight->v[2];
    __asm
    {
      vmovsd  qword ptr [rsp+0F8h+in2+0Ch], xmm0
      vmovsd  xmm0, qword ptr [r15]
    }
    in2.m[1].v[2] = v61;
    v63 = shootingAxisUp->v[2];
    __asm { vmovsd  qword ptr [rsp+0F8h+in2+18h], xmm0 }
    in2.m[2].v[2] = v63;
    MatrixMultiply(&axis, &in2, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0F8h+out+4]
      vmovss  xmm3, dword ptr [rsp+0F8h+out+8]
      vmovss  xmm4, dword ptr [rsp+0F8h+out]
      vmovss  dword ptr [rbx+0CCh], xmm0
      vmulss  xmm1, xmm0, xmm0
      vmovss  dword ptr [rbx+0D0h], xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm6, xmm0
      vdivss  xmm2, xmm6, xmm0
      vmulss  xmm0, xmm2, xmm4
      vmovss  dword ptr [rbx+0C8h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx+0CCh]
      vmovss  dword ptr [rbx+0CCh], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+0D0h]
      vmovss  dword ptr [rbx+0D0h], xmm0
    }
  }
  _R11 = &v86;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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

bool __fastcall BgBallistics<CgBallisticInstance>::UpdateBallisticPosition(BgBallistics<CgBallisticInstance> *this, CgBallisticInstance *ballisticInstance, double terminationRange)
{
  const BallisticInfo *BallisticInfo; 
  const BallisticInfo *v13; 
  const dvar_t *v14; 
  int shootingTime; 
  int lifeTimeMs; 
  int lastSimulationTime; 
  int v18; 
  bool isAlternate; 
  char v21; 
  char v23; 
  bool v27; 
  bool result; 
  vec3_t outDisplacement; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-28h], xmm7 }
  _RBX = ballisticInstance;
  __asm { vmovaps xmm7, xmm2 }
  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 360, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  BallisticInfo = BG_GetBallisticInfo(&_RBX->weapon, _RBX->isAlternate);
  v13 = BallisticInfo;
  if ( (!BallisticInfo || !BallisticInfo->enableBallisticTrajectory) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 363, ASSERT_TYPE_ASSERT, "(ballisticInfo && ballisticInfo->enableBallisticTrajectory)", (const char *)&queryFormat, "ballisticInfo && ballisticInfo->enableBallisticTrajectory") )
    __debugbreak();
  v14 = DCONST_DVARINT_bg_ballisticsSimTimeStepMs;
  if ( !DCONST_DVARINT_bg_ballisticsSimTimeStepMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsSimTimeStepMs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  shootingTime = _RBX->shootingTime;
  lifeTimeMs = v13->lifeTimeMs;
  lastSimulationTime = _RBX->lastSimulationTime;
  v18 = lastSimulationTime + v14->current.integer - shootingTime;
  if ( lifeTimeMs <= v18 )
    v18 = lifeTimeMs - 1;
  if ( lastSimulationTime != shootingTime )
  {
    _RBX->fireParams.start.v[0] = _RBX->fireParams.end.v[0];
    _RBX->fireParams.start.v[1] = _RBX->fireParams.end.v[1];
    _RBX->fireParams.start.v[2] = _RBX->fireParams.end.v[2];
  }
  isAlternate = _RBX->isAlternate;
  __asm
  {
    vmovaps [rsp+0C8h+var_18], xmm6
    vmovaps [rsp+0C8h+var_38], xmm8
    vmovaps [rsp+0C8h+var_48], xmm9
    vmovaps [rsp+0C8h+var_58], xmm10
  }
  *(double *)&_XMM0 = BG_GetBallisticMuzzleVelocityScale(&_RBX->weapon, isAlternate);
  __asm { vmovaps xmm2, xmm0; scalar }
  BG_Ballistics_CalculateDisplacement(v13, v18, *(const float *)&_XMM2, &_RBX->fireParams.dir, &outDisplacement);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm7, xmm0
  }
  if ( v21 | v23 )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+0C8h+outDisplacement+8]
      vmovss  xmm4, dword ptr [rsp+0C8h+outDisplacement+4]
      vmovss  xmm3, dword ptr [rsp+0C8h+outDisplacement]
    }
LABEL_22:
    __asm
    {
      vaddss  xmm0, xmm3, dword ptr [rbx+0E8h]
      vmovss  dword ptr [rbx+0BCh], xmm0
      vaddss  xmm1, xmm4, dword ptr [rbx+0ECh]
      vmovss  dword ptr [rbx+0C0h], xmm1
      vaddss  xmm0, xmm5, dword ptr [rbx+0F0h]
      vmovss  dword ptr [rbx+0C4h], xmm0
    }
    result = 0;
    goto LABEL_23;
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+0D4h]
    vcomiss xmm6, xmm7
  }
  if ( !v21 )
  {
    __asm
    {
      vcvttss2si edx, xmm6
      vcvttss2si eax, xmm7
    }
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 383, ASSERT_TYPE_ASSERT, "( travelledDistance ) < ( terminationRange )", "%s < %s\n\t%i, %i", "travelledDistance", "terminationRange", _EDX, _EAX);
    v21 = 0;
    if ( v27 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rsp+0C8h+outDisplacement]
    vaddss  xmm0, xmm3, dword ptr [rbx+0E8h]
    vsubss  xmm8, xmm0, dword ptr [rbx+0B0h]
    vmovss  xmm4, dword ptr [rsp+0C8h+outDisplacement+4]
    vaddss  xmm0, xmm4, dword ptr [rbx+0ECh]
    vsubss  xmm9, xmm0, dword ptr [rbx+0B4h]
    vmovss  xmm5, dword ptr [rsp+0C8h+outDisplacement+8]
    vaddss  xmm0, xmm5, dword ptr [rbx+0F0h]
    vsubss  xmm10, xmm0, dword ptr [rbx+0B8h]
    vmulss  xmm0, xmm8, xmm8
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm2, xmm2, xmm2
    vaddss  xmm0, xmm2, xmm6
    vcomiss xmm0, xmm7
  }
  if ( v21 )
    goto LABEL_22;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm2, xmm1, xmm0
    vdivss  xmm3, xmm1, xmm0
    vsubss  xmm4, xmm7, xmm6
    vmulss  xmm0, xmm8, xmm3
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, dword ptr [rbx+0B0h]
    vmulss  xmm0, xmm9, xmm3
    vmulss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rbx+0BCh], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbx+0B4h]
    vmulss  xmm0, xmm10, xmm3
    vmulss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rbx+0C0h], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbx+0B8h]
    vmovss  dword ptr [rbx+0C4h], xmm2
  }
  result = 1;
LABEL_23:
  __asm
  {
    vmovaps xmm10, [rsp+0C8h+var_58]
    vmovaps xmm9, [rsp+0C8h+var_48]
    vmovaps xmm8, [rsp+0C8h+var_38]
    vmovaps xmm6, [rsp+0C8h+var_18]
    vmovaps xmm7, [rsp+0C8h+var_28]
  }
  return result;
}

/*
==============
BgBallistics<GBallisticInstance>::CompactStorage
==============
*/

void __fastcall BgBallistics<GBallisticInstance>::CompactStorage(BgBallistics<GBallisticInstance> *this, double _XMM1_8)
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
  const BallisticInfo *BallisticInfo; 
  const BallisticInfo *v33; 
  bool v34; 
  bool v35; 
  float v59; 
  float v61; 
  float v63; 
  vec3_t angles; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  char v86; 

  __asm { vmovaps [rsp+0F8h+var_38], xmm6 }
  _RBX = ballisticInstance;
  _R14 = shootingAxisRight;
  _R15 = shootingAxisUp;
  _RDI = r_weapon;
  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 165, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  __asm { vmovups ymm0, ymmword ptr [rdi] }
  _R8 = fireParams;
  __asm
  {
    vmovups ymmword ptr [rbx], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rbx+20h], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rbx+30h], xmm0
  }
  *(_DWORD *)&ballisticInstance->weapon.weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
  ballisticInstance->isAlternate = isAlternate;
  ballisticInstance->hand = hand;
  __asm
  {
    vmovups xmm0, xmmword ptr [r8]
    vmovups xmmword ptr [rbx+48h], xmm0
    vmovups xmm1, xmmword ptr [r8+10h]
    vmovups xmmword ptr [rbx+58h], xmm1
    vmovups xmm0, xmmword ptr [r8+20h]
    vmovups xmmword ptr [rbx+68h], xmm0
    vmovups xmm1, xmmword ptr [r8+30h]
    vmovups xmmword ptr [rbx+78h], xmm1
    vmovups xmm0, xmmword ptr [r8+40h]
    vmovups xmmword ptr [rbx+88h], xmm0
    vmovups xmm1, xmmword ptr [r8+50h]
    vmovups xmmword ptr [rbx+98h], xmm1
    vmovups xmm0, xmmword ptr [r8+60h]
    vmovups xmmword ptr [rbx+0A8h], xmm0
    vmovups xmm0, xmmword ptr [r8+70h]
    vmovups xmmword ptr [rbx+0B8h], xmm0
    vmovups xmm1, xmmword ptr [r8+80h]
    vmovups xmmword ptr [rbx+0C8h], xmm1
    vmovups xmm0, xmmword ptr [r8+90h]
  }
  ballisticInstance->attackerEntNum = attackerEntNum;
  ballisticInstance->shootingTime = shootingTime;
  ballisticInstance->lastSimulationTime = shootingTime;
  __asm { vmovups xmmword ptr [rbx+0D8h], xmm0 }
  ballisticInstance->randSeed = randSeed;
  ballisticInstance->fireParams.isBallistics = 1;
  ballisticInstance->shootingPos = fireParams->start;
  BallisticInfo = BG_GetBallisticInfo(_RDI, isAlternate);
  v33 = BallisticInfo;
  if ( !BallisticInfo || !BallisticInfo->calculated || (v34 = !BallisticInfo->enableBallisticTrajectory) )
  {
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 180, ASSERT_TYPE_ASSERT, "(ballisticInfo && ballisticInfo->calculated && ballisticInfo->enableBallisticTrajectory)", (const char *)&queryFormat, "ballisticInfo && ballisticInfo->calculated && ballisticInfo->enableBallisticTrajectory");
    v34 = !v35;
    if ( v35 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0CCh]
    vmovss  xmm5, dword ptr [rbx+0C8h]
    vmovss  xmm3, dword ptr [rbx+0D0h]
    vmovss  xmm6, cs:__real@3f800000
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm6, xmm0
    vdivss  xmm2, xmm6, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbx+0C8h], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+0CCh]
    vmovss  dword ptr [rbx+0CCh], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+0D0h]
    vmovss  dword ptr [rbx+0D0h], xmm0
  }
  ballisticInstance->originalShootingdir = ballisticInstance->fireParams.dir;
  _RAX = v33->calculated;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+8]
    vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( !v34 )
  {
    __asm
    {
      vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
      vxorps  xmm1, xmm1, xmm1
      vmovss  dword ptr [rsp+0F8h+angles+4], xmm1
      vmovss  dword ptr [rsp+0F8h+angles+8], xmm1
      vmovss  dword ptr [rsp+0F8h+angles], xmm0
    }
    AnglesToAxis(&angles, &axis);
    __asm { vmovsd  xmm0, qword ptr [rbx+0C8h] }
    v59 = ballisticInstance->fireParams.dir.v[2];
    __asm
    {
      vmovsd  qword ptr [rsp+0F8h+in2], xmm0
      vmovsd  xmm0, qword ptr [r14]
    }
    in2.m[0].v[2] = v59;
    v61 = shootingAxisRight->v[2];
    __asm
    {
      vmovsd  qword ptr [rsp+0F8h+in2+0Ch], xmm0
      vmovsd  xmm0, qword ptr [r15]
    }
    in2.m[1].v[2] = v61;
    v63 = shootingAxisUp->v[2];
    __asm { vmovsd  qword ptr [rsp+0F8h+in2+18h], xmm0 }
    in2.m[2].v[2] = v63;
    MatrixMultiply(&axis, &in2, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0F8h+out+4]
      vmovss  xmm3, dword ptr [rsp+0F8h+out+8]
      vmovss  xmm4, dword ptr [rsp+0F8h+out]
      vmovss  dword ptr [rbx+0CCh], xmm0
      vmulss  xmm1, xmm0, xmm0
      vmovss  dword ptr [rbx+0D0h], xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm6, xmm0
      vdivss  xmm2, xmm6, xmm0
      vmulss  xmm0, xmm2, xmm4
      vmovss  dword ptr [rbx+0C8h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx+0CCh]
      vmovss  dword ptr [rbx+0CCh], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+0D0h]
      vmovss  dword ptr [rbx+0D0h], xmm0
    }
  }
  _R11 = &v86;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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

bool __fastcall BgBallistics<GBallisticInstance>::UpdateBallisticPosition(BgBallistics<GBallisticInstance> *this, GBallisticInstance *ballisticInstance, double terminationRange)
{
  const BallisticInfo *BallisticInfo; 
  const BallisticInfo *v13; 
  const dvar_t *v14; 
  int shootingTime; 
  int lifeTimeMs; 
  int lastSimulationTime; 
  int v18; 
  bool isAlternate; 
  char v21; 
  char v23; 
  bool v27; 
  bool result; 
  vec3_t outDisplacement; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-28h], xmm7 }
  _RBX = ballisticInstance;
  __asm { vmovaps xmm7, xmm2 }
  if ( !ballisticInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 360, ASSERT_TYPE_ASSERT, "(ballisticInstance)", (const char *)&queryFormat, "ballisticInstance") )
    __debugbreak();
  BallisticInfo = BG_GetBallisticInfo(&_RBX->weapon, _RBX->isAlternate);
  v13 = BallisticInfo;
  if ( (!BallisticInfo || !BallisticInfo->enableBallisticTrajectory) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 363, ASSERT_TYPE_ASSERT, "(ballisticInfo && ballisticInfo->enableBallisticTrajectory)", (const char *)&queryFormat, "ballisticInfo && ballisticInfo->enableBallisticTrajectory") )
    __debugbreak();
  v14 = DCONST_DVARINT_bg_ballisticsSimTimeStepMs;
  if ( !DCONST_DVARINT_bg_ballisticsSimTimeStepMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsSimTimeStepMs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  shootingTime = _RBX->shootingTime;
  lifeTimeMs = v13->lifeTimeMs;
  lastSimulationTime = _RBX->lastSimulationTime;
  v18 = lastSimulationTime + v14->current.integer - shootingTime;
  if ( lifeTimeMs <= v18 )
    v18 = lifeTimeMs - 1;
  if ( lastSimulationTime != shootingTime )
  {
    _RBX->fireParams.start.v[0] = _RBX->fireParams.end.v[0];
    _RBX->fireParams.start.v[1] = _RBX->fireParams.end.v[1];
    _RBX->fireParams.start.v[2] = _RBX->fireParams.end.v[2];
  }
  isAlternate = _RBX->isAlternate;
  __asm
  {
    vmovaps [rsp+0C8h+var_18], xmm6
    vmovaps [rsp+0C8h+var_38], xmm8
    vmovaps [rsp+0C8h+var_48], xmm9
    vmovaps [rsp+0C8h+var_58], xmm10
  }
  *(double *)&_XMM0 = BG_GetBallisticMuzzleVelocityScale(&_RBX->weapon, isAlternate);
  __asm { vmovaps xmm2, xmm0; scalar }
  BG_Ballistics_CalculateDisplacement(v13, v18, *(const float *)&_XMM2, &_RBX->fireParams.dir, &outDisplacement);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm7, xmm0
  }
  if ( v21 | v23 )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+0C8h+outDisplacement+8]
      vmovss  xmm4, dword ptr [rsp+0C8h+outDisplacement+4]
      vmovss  xmm3, dword ptr [rsp+0C8h+outDisplacement]
    }
LABEL_22:
    __asm
    {
      vaddss  xmm0, xmm3, dword ptr [rbx+0E8h]
      vmovss  dword ptr [rbx+0BCh], xmm0
      vaddss  xmm1, xmm4, dword ptr [rbx+0ECh]
      vmovss  dword ptr [rbx+0C0h], xmm1
      vaddss  xmm0, xmm5, dword ptr [rbx+0F0h]
      vmovss  dword ptr [rbx+0C4h], xmm0
    }
    result = 0;
    goto LABEL_23;
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+0D4h]
    vcomiss xmm6, xmm7
  }
  if ( !v21 )
  {
    __asm
    {
      vcvttss2si edx, xmm6
      vcvttss2si eax, xmm7
    }
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.h", 383, ASSERT_TYPE_ASSERT, "( travelledDistance ) < ( terminationRange )", "%s < %s\n\t%i, %i", "travelledDistance", "terminationRange", _EDX, _EAX);
    v21 = 0;
    if ( v27 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rsp+0C8h+outDisplacement]
    vaddss  xmm0, xmm3, dword ptr [rbx+0E8h]
    vsubss  xmm8, xmm0, dword ptr [rbx+0B0h]
    vmovss  xmm4, dword ptr [rsp+0C8h+outDisplacement+4]
    vaddss  xmm0, xmm4, dword ptr [rbx+0ECh]
    vsubss  xmm9, xmm0, dword ptr [rbx+0B4h]
    vmovss  xmm5, dword ptr [rsp+0C8h+outDisplacement+8]
    vaddss  xmm0, xmm5, dword ptr [rbx+0F0h]
    vsubss  xmm10, xmm0, dword ptr [rbx+0B8h]
    vmulss  xmm0, xmm8, xmm8
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm2, xmm2, xmm2
    vaddss  xmm0, xmm2, xmm6
    vcomiss xmm0, xmm7
  }
  if ( v21 )
    goto LABEL_22;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm2, xmm1, xmm0
    vdivss  xmm3, xmm1, xmm0
    vsubss  xmm4, xmm7, xmm6
    vmulss  xmm0, xmm8, xmm3
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, dword ptr [rbx+0B0h]
    vmulss  xmm0, xmm9, xmm3
    vmulss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rbx+0BCh], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbx+0B4h]
    vmulss  xmm0, xmm10, xmm3
    vmulss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rbx+0C0h], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbx+0B8h]
    vmovss  dword ptr [rbx+0C4h], xmm2
  }
  result = 1;
LABEL_23:
  __asm
  {
    vmovaps xmm10, [rsp+0C8h+var_58]
    vmovaps xmm9, [rsp+0C8h+var_48]
    vmovaps xmm8, [rsp+0C8h+var_38]
    vmovaps xmm6, [rsp+0C8h+var_18]
    vmovaps xmm7, [rsp+0C8h+var_28]
  }
  return result;
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

