/*
==============
GMissileMP::UpdateBoltTeamFromParent
==============
*/

void __fastcall GMissileMP::UpdateBoltTeamFromParent(GMissileMP *this, gentity_s *bolt, gentity_s *parent)
{
  ?UpdateBoltTeamFromParent@GMissileMP@@UEBAXPEAUgentity_s@@0@Z(this, bolt, parent);
}

/*
==============
GMissileMP::NotifyEntity
==============
*/

void __fastcall GMissileMP::NotifyEntity(GMissileMP *this, const gentity_s *const missileEntity, const gentity_s *const notifyEntity)
{
  ?NotifyEntity@GMissileMP@@UEAAXQEBUgentity_s@@0@Z(this, missileEntity, notifyEntity);
}

/*
==============
GMissileMP::GMissileMP
==============
*/

void __fastcall GMissileMP::GMissileMP(GMissileMP *this)
{
  ??0GMissileMP@@QEAA@XZ(this);
}

/*
==============
GMissileMP::IsRemoteEyesForMovingPlatformTracking
==============
*/

bool __fastcall GMissileMP::IsRemoteEyesForMovingPlatformTracking(GMissileMP *this, const playerState_s *ps)
{
  return ?IsRemoteEyesForMovingPlatformTracking@GMissileMP@@UEBA_NPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
GMissileMP::FinalizeGrenadeSpawn
==============
*/

void __fastcall GMissileMP::FinalizeGrenadeSpawn(GMissileMP *this, BgEntityData *entityData, const int parentEntNum, const WeaponDef *weapDef)
{
  ?FinalizeGrenadeSpawn@GMissileMP@@UEBAXPEAVBgEntityData@@HPEBUWeaponDef@@@Z(this, entityData, parentEntNum, weapDef);
}

/*
==============
GMissileMP::ShouldImpactBounceCopySurfaceFlags
==============
*/

bool __fastcall GMissileMP::ShouldImpactBounceCopySurfaceFlags(GMissileMP *this, const int entNum)
{
  return ?ShouldImpactBounceCopySurfaceFlags@GMissileMP@@UEBA_NH@Z(this, entNum);
}

/*
==============
GMissileMP::GMissileMP
==============
*/
void GMissileMP::GMissileMP(GMissileMP *this)
{
  BgMissile::BgMissile(this);
  *(_DWORD *)&this->m_grenadeLinkToMovingPlatformUsesTag = 65793;
  this->__vftable = (GMissileMP_vtbl *)&GMissileMP::`vftable';
  *(_WORD *)&this->m_remoteCameraCollisionPrediction = 0;
  this->m_javelinOffsetRight = 2.5;
}

/*
==============
GMissileMP::FinalizeGrenadeSpawn
==============
*/
void GMissileMP::FinalizeGrenadeSpawn(GMissileMP *this, BgEntityData *entityData, const int parentEntNum, const WeaponDef *weapDef)
{
  __int64 v4; 
  gentity_s *Entity; 
  const gentity_s *v7; 
  __int64 v8; 

  v4 = parentEntNum;
  GMissile::FinalizeGrenadeSpawn(this, entityData, parentEntNum, weapDef);
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_missile_mp.cpp", 36, ASSERT_TYPE_ASSERT, "( entityData )", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Entity = GEntityData::GetEntity((GEntityData *)entityData);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_missile_mp.cpp", 40, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v7 = NULL;
  if ( (_DWORD)v4 != 2047 )
  {
    if ( (unsigned int)v4 >= 0x800 )
    {
      LODWORD(v8) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_missile_mp.cpp", 45, ASSERT_TYPE_ASSERT, "(unsigned)( parentEntNum ) < (unsigned)( ( 2048 ) )", "parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, 2048) )
        __debugbreak();
    }
    v7 = &g_entities[v4];
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  if ( v7 )
    Entity->c.missile.team = (__int64)GUtils::ms_gUtils->GetEntityTeam(GUtils::ms_gUtils, v7);
  else
    Entity->c.missile.team = TEAM_ZERO;
}

/*
==============
GMissileMP::IsRemoteEyesForMovingPlatformTracking
==============
*/
bool GMissileMP::IsRemoteEyesForMovingPlatformTracking(GMissileMP *this, const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_missile_mp.cpp", 69, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 1u);
}

/*
==============
GMissileMP::NotifyEntity
==============
*/
void GMissileMP::NotifyEntity(GMissileMP *this, const gentity_s *const missileEntity, const gentity_s *const notifyEntity)
{
  if ( !SV_EntityWorkersMP_AddEntityNotify(missileEntity->s.number, notifyEntity->s.number) )
  {
    GScr_AddEntity(notifyEntity);
    GScr_Notify(missileEntity, scr_const.trigger_grenade, 1u);
  }
}

/*
==============
GMissileMP::ShouldImpactBounceCopySurfaceFlags
==============
*/

bool __fastcall GMissileMP::ShouldImpactBounceCopySurfaceFlags(GMissileMP *this, const int entNum)
{
  return GMissile::IsEntityClient(this, entNum);
}

/*
==============
GMissileMP::UpdateBoltTeamFromParent
==============
*/
void GMissileMP::UpdateBoltTeamFromParent(GMissileMP *this, gentity_s *bolt, gentity_s *parent)
{
  gclient_s *client; 

  if ( !bolt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_missile_mp.cpp", 56, ASSERT_TYPE_ASSERT, "( bolt )", (const char *)&queryFormat, "bolt") )
    __debugbreak();
  if ( !parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_missile_mp.cpp", 57, ASSERT_TYPE_ASSERT, "( parent )", (const char *)&queryFormat, "parent") )
    __debugbreak();
  client = parent->client;
  if ( client )
    bolt->c.missile.team = client->sess.cs.team;
  else
    bolt->c.missile.team = TEAM_ZERO;
}

