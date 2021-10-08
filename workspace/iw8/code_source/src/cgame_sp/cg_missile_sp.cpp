/*
==============
CgMissileSP::AllowBoltForVehicles
==============
*/

bool __fastcall CgMissileSP::AllowBoltForVehicles(CgMissileSP *this)
{
  return ?AllowBoltForVehicles@CgMissileSP@@UEBA_NXZ(this);
}

/*
==============
CgMissileSP::ShouldImpactBounceCopySurfaceFlags
==============
*/

bool __fastcall CgMissileSP::ShouldImpactBounceCopySurfaceFlags(CgMissileSP *this, const int entNum)
{
  return ?ShouldImpactBounceCopySurfaceFlags@CgMissileSP@@UEBA_NH@Z(this, entNum);
}

/*
==============
CgMissileSP::AddMissileTrajectoryEvent
==============
*/

void __fastcall CgMissileSP::AddMissileTrajectoryEvent(CgMissileSP *this, BgEntityData *entityData, const vec3_t *hitPos, const unsigned __int16 hitEntNum, const scr_string_t hitPartName)
{
  ?AddMissileTrajectoryEvent@CgMissileSP@@MEBAXPEAVBgEntityData@@AEBTvec3_t@@GW4scr_string_t@@@Z(this, entityData, hitPos, hitEntNum, hitPartName);
}

/*
==============
CgMissileSP::CgMissileSP
==============
*/

void __fastcall CgMissileSP::CgMissileSP(CgMissileSP *this, const LocalClientNum_t localClientNum)
{
  ??0CgMissileSP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgMissileSP::CgMissileSP
==============
*/
void CgMissileSP::CgMissileSP(CgMissileSP *this, const LocalClientNum_t localClientNum)
{
  BgMissile::BgMissile(this);
  this->m_localClientNum = localClientNum;
  this->__vftable = (CgMissileSP_vtbl *)&CgMissileSP::`vftable';
  *(_DWORD *)&this->CgMissile::m_grenadeLinkToMovingPlatformUsesTag = 0x1000000;
  this->m_setProjectileModel = 1;
  this->CgMissile::m_changeEntityTypeOnImpact = 1;
  this->CgMissile::m_javelinOffsetRight = 10.0;
}

/*
==============
CgMissileSP::AddMissileTrajectoryEvent
==============
*/
void CgMissileSP::AddMissileTrajectoryEvent(CgMissileSP *this, BgEntityData *entityData, const vec3_t *hitPos, const unsigned __int16 hitEntNum)
{
  ;
}

/*
==============
CgMissileSP::AllowBoltForVehicles
==============
*/
__int64 CgMissileSP::AllowBoltForVehicles(CgMissileSP *this)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_bg_missileAutoboltExplosionsToVehicles;
  if ( !DVARBOOL_bg_missileAutoboltExplosionsToVehicles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileAutoboltExplosionsToVehicles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.color[0];
}

/*
==============
CgMissileSP::ShouldImpactBounceCopySurfaceFlags
==============
*/
bool CgMissileSP::ShouldImpactBounceCopySurfaceFlags(CgMissileSP *this, const int entNum)
{
  __int64 v2; 
  __int64 m_localClientNum; 
  CgEntitySystem *v5; 
  entityType_s eType; 
  bool result; 
  __int64 v8; 
  __int64 v10; 
  int v11; 

  v2 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v11 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_missile_sp.cpp", 37, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v11) )
      __debugbreak();
  }
  m_localClientNum = this->m_localClientNum;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
  {
    LODWORD(v10) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v10) )
      __debugbreak();
  }
  if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v10) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v8) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
  {
    LODWORD(v10) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v10) )
      __debugbreak();
  }
  v5 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
  if ( (unsigned int)v2 >= 0x800 )
  {
    LODWORD(v10) = 2048;
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  result = 0;
  if ( (CgEntitySystem *)((char *)v5 + 760 * v2) != (CgEntitySystem *)-16i64 && (v5->m_entities[v2].flags & 1) != 0 )
  {
    eType = v5->m_entities[v2].nextState.eType;
    if ( eType == ET_PLAYER || eType == ET_ACTOR )
      return 1;
  }
  return result;
}

