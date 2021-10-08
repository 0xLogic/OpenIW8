/*
==============
GMissileSP::UpdateBoltTeamFromParent
==============
*/

void __fastcall GMissileSP::UpdateBoltTeamFromParent(GMissileSP *this, gentity_s *bolt, gentity_s *parent)
{
  ?UpdateBoltTeamFromParent@GMissileSP@@UEBAXPEAUgentity_s@@0@Z(this, bolt, parent);
}

/*
==============
GMissileSP::GMissileSP
==============
*/

void __fastcall GMissileSP::GMissileSP(GMissileSP *this)
{
  ??0GMissileSP@@QEAA@XZ(this);
}

/*
==============
GMissileSP::FinalizeGrenadeSpawn
==============
*/

void __fastcall GMissileSP::FinalizeGrenadeSpawn(GMissileSP *this, BgEntityData *entityData, const int parentEntNum, const WeaponDef *weapDef)
{
  ?FinalizeGrenadeSpawn@GMissileSP@@UEBAXPEAVBgEntityData@@HPEBUWeaponDef@@@Z(this, entityData, parentEntNum, weapDef);
}

/*
==============
GMissileSP::IsRemoteEyesForMovingPlatformTracking
==============
*/

bool __fastcall GMissileSP::IsRemoteEyesForMovingPlatformTracking(GMissileSP *this, const playerState_s *ps)
{
  return ?IsRemoteEyesForMovingPlatformTracking@GMissileSP@@UEBA_NPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
GMissileSP::ShouldImpactBounceCopySurfaceFlags
==============
*/

bool __fastcall GMissileSP::ShouldImpactBounceCopySurfaceFlags(GMissileSP *this, const int entNum)
{
  return ?ShouldImpactBounceCopySurfaceFlags@GMissileSP@@UEBA_NH@Z(this, entNum);
}

/*
==============
GMissileSP::NotifyEntity
==============
*/

void __fastcall GMissileSP::NotifyEntity(GMissileSP *this, const gentity_s *const missileEntity, const gentity_s *const notifyEntity)
{
  ?NotifyEntity@GMissileSP@@UEAAXQEBUgentity_s@@0@Z(this, missileEntity, notifyEntity);
}

/*
==============
GMissileSP::AllowBoltForVehicles
==============
*/

bool __fastcall GMissileSP::AllowBoltForVehicles(GMissileSP *this)
{
  return ?AllowBoltForVehicles@GMissileSP@@UEBA_NXZ(this);
}

/*
==============
GMissileSP::GMissileSP
==============
*/
void GMissileSP::GMissileSP(GMissileSP *this)
{
  BgMissile::BgMissile(this);
  *(_DWORD *)&this->m_grenadeLinkToMovingPlatformUsesTag = 0x1000000;
  this->__vftable = (GMissileSP_vtbl *)&GMissileSP::`vftable';
  *(_WORD *)&this->m_remoteCameraCollisionPrediction = 257;
  this->m_javelinOffsetRight = 10.0;
}

/*
==============
GMissileSP::AllowBoltForVehicles
==============
*/
__int64 GMissileSP::AllowBoltForVehicles(GMissileSP *this)
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
GMissileSP::FinalizeGrenadeSpawn
==============
*/
void GMissileSP::FinalizeGrenadeSpawn(GMissileSP *this, BgEntityData *entityData, const int parentEntNum, const WeaponDef *weapDef)
{
  __int64 v4; 
  gentity_s *Entity; 
  gentity_s *v7; 
  sentient_s *sentient; 
  __int64 v9; 

  v4 = parentEntNum;
  GMissile::FinalizeGrenadeSpawn(this, entityData, parentEntNum, weapDef);
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_missile_sp.cpp", 50, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_missile_sp.cpp", 54, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v7 = NULL;
  if ( (_DWORD)v4 != 2047 )
  {
    if ( (unsigned int)v4 >= 0x800 )
    {
      LODWORD(v9) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_missile_sp.cpp", 59, ASSERT_TYPE_ASSERT, "(unsigned)( parentEntNum ) < (unsigned)( ( 2048 ) )", "parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, 2048) )
        __debugbreak();
    }
    v7 = &g_entities[v4];
  }
  Entity->c.item[0].ammoCount = level.time;
  if ( v7 && (sentient = v7->sentient) != NULL )
    Entity->c.missile.team = sentient->eTeam;
  else
    Entity->c.missile.team = TEAM_ZERO;
}

/*
==============
GMissileSP::IsRemoteEyesForMovingPlatformTracking
==============
*/
bool GMissileSP::IsRemoteEyesForMovingPlatformTracking(GMissileSP *this, const playerState_s *ps)
{
  return 0;
}

/*
==============
GMissileSP::NotifyEntity
==============
*/
void GMissileSP::NotifyEntity(GMissileSP *this, const gentity_s *const missileEntity, const gentity_s *const notifyEntity)
{
  GScr_AddEntity(notifyEntity);
  GScr_Notify(missileEntity, scr_const.trigger_grenade, 1u);
}

/*
==============
GMissileSP::ShouldImpactBounceCopySurfaceFlags
==============
*/
bool GMissileSP::ShouldImpactBounceCopySurfaceFlags(GMissileSP *this, const int entNum)
{
  __int64 v2; 
  int v5; 

  v2 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v5 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_missile_sp.cpp", 37, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v5) )
      __debugbreak();
  }
  return g_entities[v2].sentient != NULL;
}

/*
==============
GMissileSP::UpdateBoltTeamFromParent
==============
*/
void GMissileSP::UpdateBoltTeamFromParent(GMissileSP *this, gentity_s *bolt, gentity_s *parent)
{
  sentient_s *sentient; 

  if ( !bolt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_missile_sp.cpp", 78, ASSERT_TYPE_ASSERT, "( bolt )", (const char *)&queryFormat, "bolt") )
    __debugbreak();
  if ( !parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_missile_sp.cpp", 79, ASSERT_TYPE_ASSERT, "( parent )", (const char *)&queryFormat, "parent") )
    __debugbreak();
  sentient = parent->sentient;
  if ( sentient )
    bolt->c.missile.team = sentient->eTeam;
  else
    bolt->c.missile.team = TEAM_ZERO;
}

