/*
==============
CgMissileMP::ShouldImpactBounceCopySurfaceFlags
==============
*/

bool __fastcall CgMissileMP::ShouldImpactBounceCopySurfaceFlags(CgMissileMP *this, const int entNum)
{
  return ?ShouldImpactBounceCopySurfaceFlags@CgMissileMP@@UEBA_NH@Z(this, entNum);
}

/*
==============
CgMissileMP::AddMissileTrajectoryEvent
==============
*/

void __fastcall CgMissileMP::AddMissileTrajectoryEvent(CgMissileMP *this, BgEntityData *entityData, const vec3_t *hitPos, const unsigned __int16 hitEntNum, const scr_string_t hitPartName)
{
  ?AddMissileTrajectoryEvent@CgMissileMP@@MEBAXPEAVBgEntityData@@AEBTvec3_t@@GW4scr_string_t@@@Z(this, entityData, hitPos, hitEntNum, hitPartName);
}

/*
==============
CgMissileMP::CgMissileMP
==============
*/

void __fastcall CgMissileMP::CgMissileMP(CgMissileMP *this, const LocalClientNum_t localClientNum)
{
  ??0CgMissileMP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgMissileMP::CgMissileMP
==============
*/
void CgMissileMP::CgMissileMP(CgMissileMP *this, const LocalClientNum_t localClientNum)
{
  BgMissile::BgMissile(this);
  this->m_localClientNum = localClientNum;
  this->__vftable = (CgMissileMP_vtbl *)&CgMissileMP::`vftable';
  *(_DWORD *)&this->CgMissile::m_grenadeLinkToMovingPlatformUsesTag = 65793;
  this->m_setProjectileModel = 0;
  this->CgMissile::m_changeEntityTypeOnImpact = 0;
  this->CgMissile::m_javelinOffsetRight = 2.5;
}

/*
==============
CgMissileMP::AddMissileTrajectoryEvent
==============
*/
void CgMissileMP::AddMissileTrajectoryEvent(CgMissileMP *this, BgEntityData *entityData, const vec3_t *hitPos, const unsigned __int16 hitEntNum)
{
  if ( Com_GameMode_SupportsFeature(WEAPON_OFFHAND_HOLD_PRIMED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_missile_mp.cpp", 31, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::EVENT_MISSILE_TRAJECTORY ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::EVENT_MISSILE_TRAJECTORY )") )
    __debugbreak();
}

/*
==============
CgMissileMP::ShouldImpactBounceCopySurfaceFlags
==============
*/

bool __fastcall CgMissileMP::ShouldImpactBounceCopySurfaceFlags(CgMissileMP *this, const int entNum)
{
  return CgMissile::IsEntityClient(this, entNum);
}

