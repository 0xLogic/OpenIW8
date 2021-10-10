/*
==============
GTurret::Fire
==============
*/

void __fastcall GTurret::Fire(GTurret *this, gentity_s *self, const int gameTime)
{
  ?Fire@GTurret@@QEAAXPEAUgentity_s@@H@Z(this, self, gameTime);
}

/*
==============
GTurret::AimAtSentient
==============
*/

bool __fastcall GTurret::AimAtSentient(GTurret *this, gentity_s *self, gentity_s *enemy, const vec3_t *enemyOffset, int bShoot, int missTime)
{
  return ?AimAtSentient@GTurret@@QEAA_NPEAUgentity_s@@0AEBTvec3_t@@HH@Z(this, self, enemy, enemyOffset, bShoot, missTime);
}

/*
==============
G_Turret_SetSentryOwner
==============
*/

void __fastcall G_Turret_SetSentryOwner(gentity_s *self, const gentity_s *owner)
{
  ?G_Turret_SetSentryOwner@@YAXPEAUgentity_s@@PEBU1@@Z(self, owner);
}

/*
==============
GTurret::AimAtVector
==============
*/

bool __fastcall GTurret::AimAtVector(GTurret *this, gentity_s *self, const vec3_t *origin, const int bShoot, vec2_t *out_localTargetAngles)
{
  return ?AimAtVector@GTurret@@QEAA_NPEAUgentity_s@@AEBTvec3_t@@HAEATvec2_t@@@Z(this, self, origin, bShoot, out_localTargetAngles);
}

/*
==============
G_Turret_ScrShoot
==============
*/

void __fastcall G_Turret_ScrShoot(gentity_s *self, const scr_string_t tagName, int lockStrength)
{
  ?G_Turret_ScrShoot@@YAXPEAUgentity_s@@W4scr_string_t@@H@Z(self, tagName, lockStrength);
}

/*
==============
G_Turret_CanTargetPoint
==============
*/

bool __fastcall G_Turret_CanTargetPoint(const gentity_s *self, const vec3_t *vPoint, vec3_t *out_sourcePosition, vec2_t *out_localAngles)
{
  return ?G_Turret_CanTargetPoint@@YA_NPEBUgentity_s@@AEBTvec3_t@@AEAT2@AEATvec2_t@@@Z(self, vPoint, out_sourcePosition, out_localAngles);
}

/*
==============
G_Turret_IsUsable
==============
*/

bool __fastcall G_Turret_IsUsable(const gentity_s *self, const gentity_s *owner)
{
  return ?G_Turret_IsUsable@@YA_NPEBUgentity_s@@0@Z(self, owner);
}

/*
==============
G_Turret_SetMode
==============
*/

void __fastcall G_Turret_SetMode(gentity_s *self, int inFlags)
{
  ?G_Turret_SetMode@@YAXPEAUgentity_s@@H@Z(self, inFlags);
}

/*
==============
G_Turret_SetAutoRotationStopDelay
==============
*/

void __fastcall G_Turret_SetAutoRotationStopDelay(gentity_s *self, int delayMS)
{
  ?G_Turret_SetAutoRotationStopDelay@@YAXPEAUgentity_s@@H@Z(self, delayMS);
}

/*
==============
GTurret::SetupFireParams
==============
*/

void __fastcall GTurret::SetupFireParams(GTurret *this, const gentity_s *const self, const int gametime, BgWeaponParms *const outParams)
{
  ?SetupFireParams@GTurret@@QEAAXQEBUgentity_s@@HQEAUBgWeaponParms@@@Z(this, self, gametime, outParams);
}

/*
==============
G_Turret_RestoreDefaultDropPitch
==============
*/

void __fastcall G_Turret_RestoreDefaultDropPitch(gentity_s *self)
{
  ?G_Turret_RestoreDefaultDropPitch@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
G_Turret_CanTargetSentient_GetTargetPosInternal
==============
*/

double __fastcall G_Turret_CanTargetSentient_GetTargetPosInternal(GTurret *turret, const gentity_s *targetEnt, const vec3_t *targetEntOffset, const tmat43_t<vec3_t> *turretAxis, const int targetHead, vec3_t *out_targetPosition, vec2_t *out_localAngles)
{
  double result; 

  *(float *)&result = ?G_Turret_CanTargetSentient_GetTargetPosInternal@@YAMPEAVGTurret@@PEBUgentity_s@@AEBTvec3_t@@AEBT?$tmat43_t@Tvec3_t@@@@HAEAT3@AEATvec2_t@@@Z(turret, targetEnt, targetEntOffset, turretAxis, targetHead, out_targetPosition, out_localAngles);
  return result;
}

/*
==============
G_Turret_Think_Init
==============
*/

void __fastcall G_Turret_Think_Init(gentity_s *self)
{
  ?G_Turret_Think_Init@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
G_Turret_CanShoot
==============
*/

int __fastcall G_Turret_CanShoot(gentity_s *self)
{
  return ?G_Turret_CanShoot@@YAHPEAUgentity_s@@@Z(self);
}

/*
==============
GTurret::GetEnemyHeightOffset
==============
*/

void __fastcall GTurret::GetEnemyHeightOffset(GTurret *this, const gentity_s *enemy, vec3_t *outResultOffset)
{
  ?GetEnemyHeightOffset@GTurret@@QEAAXPEBUgentity_s@@AEATvec3_t@@@Z(this, enemy, outResultOffset);
}

/*
==============
GTurret::SetTargetEnt
==============
*/

void __fastcall GTurret::SetTargetEnt(GTurret *this, const gentity_s *ent, const vec3_t *entOffset)
{
  ?SetTargetEnt@GTurret@@QEAAXPEBUgentity_s@@AEBTvec3_t@@@Z(this, ent, entOffset);
}

/*
==============
GTurret::Aim
==============
*/

void __fastcall GTurret::Aim(GTurret *this, gentity_s *turretEnt, gentity_s *playerEnt)
{
  ?Aim@GTurret@@UEAAXPEAUgentity_s@@0@Z(this, turretEnt, playerEnt);
}

/*
==============
GTurret::FireEnd
==============
*/

void __fastcall GTurret::FireEnd(GTurret *this, gentity_s *self)
{
  ?FireEnd@GTurret@@QEAAXPEAUgentity_s@@@Z(this, self);
}

/*
==============
G_Turret_Controller
==============
*/

void __fastcall G_Turret_Controller(const gentity_s *self, DObjPartBits *partBits)
{
  ?G_Turret_Controller@@YAXPEBUgentity_s@@PEAUDObjPartBits@@@Z(self, partBits);
}

/*
==============
G_Turret_ScrSetSentryCarrier
==============
*/

void __fastcall G_Turret_ScrSetSentryCarrier(gentity_s *self, const gentity_s *carrier)
{
  ?G_Turret_ScrSetSentryCarrier@@YAXPEAUgentity_s@@PEBU1@@Z(self, carrier);
}

/*
==============
G_Turret_CanUse
==============
*/

bool __fastcall G_Turret_CanUse(const gentity_s *self, const gentity_s *owner)
{
  return ?G_Turret_CanUse@@YA_NPEBUgentity_s@@0@Z(self, owner);
}

/*
==============
G_Turret_SetDObjTransferFlag
==============
*/

void __fastcall G_Turret_SetDObjTransferFlag(gentity_s *turretEnt)
{
  ?G_Turret_SetDObjTransferFlag@@YAXPEAUgentity_s@@@Z(turretEnt);
}

/*
==============
G_Turret_ScrUse
==============
*/

bool __fastcall G_Turret_ScrUse(scrContext_t *scrContext, gentity_s *self, gentity_s *owner, bool remoteUse)
{
  return ?G_Turret_ScrUse@@YA_NAEAUscrContext_t@@PEAUgentity_s@@1_N@Z(scrContext, self, owner, remoteUse);
}

/*
==============
G_Turret_GetBarrelSpinRate
==============
*/

double __fastcall G_Turret_GetBarrelSpinRate(gentity_s *self)
{
  double result; 

  *(float *)&result = ?G_Turret_GetBarrelSpinRate@@YAMPEAUgentity_s@@@Z(self);
  return result;
}

/*
==============
G_Turret_GetAimAngleAndPosition_Internal
==============
*/

bool __fastcall G_Turret_GetAimAngleAndPosition_Internal(const gentity_s *self, const vec3_t *vPoint, vec3_t *out_sourcePosition, vec2_t *out_localAngles, bool doClampToAimCone)
{
  return ?G_Turret_GetAimAngleAndPosition_Internal@@YA_NPEBUgentity_s@@AEBTvec3_t@@AEAT2@AEATvec2_t@@_N@Z(self, vPoint, out_sourcePosition, out_localAngles, doClampToAimCone);
}

/*
==============
GTurret::Think_ManualInternal
==============
*/

bool __fastcall GTurret::Think_ManualInternal(GTurret *this, gentity_s *self, gentity_s **outTargetEnt)
{
  return ?Think_ManualInternal@GTurret@@QEAA_NPEAUgentity_s@@PEAPEAU2@@Z(this, self, outTargetEnt);
}

/*
==============
G_Turret_GetCommonSaveFields
==============
*/

const saveField_t *__fastcall G_Turret_GetCommonSaveFields()
{
  return ?G_Turret_GetCommonSaveFields@@YAPEBUsaveField_t@@XZ();
}

/*
==============
G_Turret_IsFiring
==============
*/

bool __fastcall G_Turret_IsFiring(gentity_s *self)
{
  return ?G_Turret_IsFiring@@YA_NPEAUgentity_s@@@Z(self);
}

/*
==============
G_Turret_ClientStopUsingTurret
==============
*/

void __fastcall G_Turret_ClientStopUsingTurret(gentity_s *self)
{
  ?G_Turret_ClientStopUsingTurret@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
G_Turret_DeactivateTurret
==============
*/

void __fastcall G_Turret_DeactivateTurret(gentity_s *self)
{
  ?G_Turret_DeactivateTurret@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
G_Turret_ClearTargetEnt
==============
*/

void __fastcall G_Turret_ClearTargetEnt(gentity_s *self)
{
  ?G_Turret_ClearTargetEnt@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
GTurret::UpdateTargetAngles
==============
*/

bool __fastcall GTurret::UpdateTargetAngles(GTurret *this, gentity_s *self, const vec2_t *desiredAngles, const bool bManned)
{
  return ?UpdateTargetAngles@GTurret@@QEAA_NPEAUgentity_s@@AEBTvec2_t@@_N@Z(this, self, desiredAngles, bManned);
}

/*
==============
G_Turret_ClampTargetPointWithinArc
==============
*/

bool __fastcall G_Turret_ClampTargetPointWithinArc(const gentity_s *self, const vec3_t *vPoint, vec3_t *out_sourcePosition, vec2_t *out_localAngles)
{
  return ?G_Turret_ClampTargetPointWithinArc@@YA_NPEBUgentity_s@@AEBTvec3_t@@AEAT2@AEATvec2_t@@@Z(self, vPoint, out_sourcePosition, out_localAngles);
}

/*
==============
G_Turret_ScrStopUse
==============
*/

void __fastcall G_Turret_ScrStopUse(gentity_s *self, gentity_s *owner)
{
  ?G_Turret_ScrStopUse@@YAXPEAUgentity_s@@0@Z(self, owner);
}

/*
==============
GTurret::AimAtVectorClamped
==============
*/

bool __fastcall GTurret::AimAtVectorClamped(GTurret *this, gentity_s *self, const vec3_t *origin, const int bShoot, vec2_t *out_localTargetAngles)
{
  return ?AimAtVectorClamped@GTurret@@QEAA_NPEAUgentity_s@@AEBTvec3_t@@HAEATvec2_t@@@Z(this, self, origin, bShoot, out_localTargetAngles);
}

/*
==============
GTurret::CanSpawnTurret
==============
*/

bool __fastcall GTurret::CanSpawnTurret()
{
  return ?CanSpawnTurret@GTurret@@SA_NXZ();
}

/*
==============
G_Turret_Spawn
==============
*/

void __fastcall G_Turret_Spawn(scrContext_t *scrContext, gentity_s *self, const Weapon *r_weapon, const int useDropPitch)
{
  ?G_Turret_Spawn@@YAXAEAUscrContext_t@@PEAUgentity_s@@AEBUWeapon@@H@Z(scrContext, self, r_weapon, useDropPitch);
}

/*
==============
G_IsTurretKeepingOrientationOnExit
==============
*/

bool __fastcall G_IsTurretKeepingOrientationOnExit(entityState_t *es)
{
  return ?G_IsTurretKeepingOrientationOnExit@@YA_NPEAUentityState_t@@@Z(es);
}

/*
==============
G_Turret_SetDefaultDropPitch
==============
*/

void __fastcall G_Turret_SetDefaultDropPitch(gentity_s *self, float pitch)
{
  ?G_Turret_SetDefaultDropPitch@@YAXPEAUgentity_s@@M@Z(self, pitch);
}

/*
==============
GTurret::InitTurrets
==============
*/

void GTurret::InitTurrets(void)
{
  ?InitTurrets@GTurret@@SAXXZ();
}

/*
==============
G_Turret_SpawnFromString
==============
*/

void __fastcall G_Turret_SpawnFromString(gentity_s *self)
{
  ?G_Turret_SpawnFromString@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
G_Turret_SetManualSpinning
==============
*/

void __fastcall G_Turret_SetManualSpinning(gentity_s *self, int spinning)
{
  ?G_Turret_SetManualSpinning@@YAXPEAUgentity_s@@H@Z(self, spinning);
}

/*
==============
GTurret::ReturnToDefaultPos
==============
*/

bool __fastcall GTurret::ReturnToDefaultPos(GTurret *this, gentity_s *self, bool bManned)
{
  return ?ReturnToDefaultPos@GTurret@@QEAA_NPEAUgentity_s@@_N@Z(this, self, bManned);
}

/*
==============
G_Turret_ScrStopRemoteUse
==============
*/

void __fastcall G_Turret_ScrStopRemoteUse(gentity_s *self, gentity_s *owner)
{
  ?G_Turret_ScrStopRemoteUse@@YAXPEAUgentity_s@@0@Z(self, owner);
}

/*
==============
G_Turret_SightTrace
==============
*/

bool __fastcall G_Turret_SightTrace(const vec3_t *start, const vec3_t *end, int passEnt1, int passEnt2)
{
  return ?G_Turret_SightTrace@@YA_NAEBTvec3_t@@0HH@Z(start, end, passEnt1, passEnt2);
}

/*
==============
GTurret::FireWithParams
==============
*/

void __fastcall GTurret::FireWithParams(GTurret *this, gentity_s *const self, const int gameTime, const BgWeaponParms *const params)
{
  ?FireWithParams@GTurret@@QEAAXQEAUgentity_s@@HQEBUBgWeaponParms@@@Z(this, self, gameTime, params);
}

/*
==============
GTurret::Think_ClientInternal
==============
*/

void __fastcall GTurret::Think_ClientInternal(GTurret *this, gentity_s *self, gentity_s *owner, bool clientActive)
{
  ?Think_ClientInternal@GTurret@@QEAAXPEAUgentity_s@@0_N@Z(this, self, owner, clientActive);
}

/*
==============
G_Turret_ScrSnapToTarget
==============
*/

void __fastcall G_Turret_ScrSnapToTarget(scrContext_t *scrContext, gentity_s *self)
{
  ?G_Turret_ScrSnapToTarget@@YAXAEAUscrContext_t@@PEAUgentity_s@@@Z(scrContext, self);
}

/*
==============
G_Turret_CanTargetSentient
==============
*/

bool __fastcall G_Turret_CanTargetSentient(const gentity_s *turretEnt, const gentity_s *targetEnt, const vec3_t *targetEntOffset, vec3_t *out_targetPosition, vec3_t *out_sourcePosition, vec2_t *out_localAngles)
{
  return ?G_Turret_CanTargetSentient@@YA_NPEBUgentity_s@@0AEBTvec3_t@@AEAT2@2AEATvec2_t@@@Z(turretEnt, targetEnt, targetEntOffset, out_targetPosition, out_sourcePosition, out_localAngles);
}

/*
==============
GTurret::GetFreeTurretHandle
==============
*/

bool __fastcall GTurret::GetFreeTurretHandle(BgObjectHandle<GTurret> *outHandle)
{
  return ?GetFreeTurretHandle@GTurret@@SA_NPEAV?$BgObjectHandle@VGTurret@@@@@Z(outHandle);
}

/*
==============
G_Turret_Use
==============
*/

void __fastcall G_Turret_Use(gentity_s *self, gentity_s *owner, gentity_s *activator)
{
  ?G_Turret_Use@@YAXPEAUgentity_s@@00@Z(self, owner, activator);
}

/*
==============
G_Turret_Think
==============
*/

void __fastcall G_Turret_Think(gentity_s *self)
{
  ?G_Turret_Think@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
GTurret::AimAtEntity
==============
*/

bool __fastcall GTurret::AimAtEntity(GTurret *this, gentity_s *self, const gentity_s *ent, const vec3_t *entOffset, const int bShoot)
{
  return ?AimAtEntity@GTurret@@QEAA_NPEAUgentity_s@@PEBU2@AEBTvec3_t@@H@Z(this, self, ent, entOffset, bShoot);
}

/*
==============
G_Turret_IsMountedOnVehicle
==============
*/

bool __fastcall G_Turret_IsMountedOnVehicle(const gentity_s *turretEnt)
{
  return ?G_Turret_IsMountedOnVehicle@@YA_NPEBUgentity_s@@@Z(turretEnt);
}

/*
==============
GTurret::GetRemainingConvergenceTime
==============
*/

int __fastcall GTurret::GetRemainingConvergenceTime(GTurret *this, int type)
{
  return ?GetRemainingConvergenceTime@GTurret@@QEAAHH@Z(this, type);
}

/*
==============
G_Turret_ScrRemoteUse
==============
*/

bool __fastcall G_Turret_ScrRemoteUse(scrContext_t *scrContext, gentity_s *self, gentity_s *owner)
{
  return ?G_Turret_ScrRemoteUse@@YA_NAEAUscrContext_t@@PEAUgentity_s@@1@Z(scrContext, self, owner);
}

/*
==============
GTurret::Aim
==============
*/
void GTurret::Aim(GTurret *this, gentity_s *turretEnt, gentity_s *playerEnt)
{
  unsigned __int16 number; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  gclient_s *client; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  int v18; 
  float v21; 
  float v22; 
  float v24; 
  float v25; 
  float v26; 
  bool v27; 
  bool v28; 
  int v29; 
  int v30; 
  unsigned int v31; 
  GVehicles *v32; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  float v38; 
  double v39; 
  float v41; 
  double v42; 
  int flags; 
  __int64 v44; 
  __int64 v45; 

  if ( !turretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 474, ASSERT_TYPE_ASSERT, "(turretEnt)", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 475, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !turretEnt->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 477, ASSERT_TYPE_ASSERT, "( turretEnt->active )", (const char *)&queryFormat, "turretEnt->active") )
    __debugbreak();
  number = turretEnt->r.ownerNum.number;
  if ( !number )
    goto LABEL_76;
  v7 = number;
  v8 = number - 1;
  if ( v8 >= 0x800 )
  {
    LODWORD(v44) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v44, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v9 = v7 - 1;
  if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v9] )
  {
    LODWORD(v45) = turretEnt->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v45) )
      __debugbreak();
  }
  if ( !turretEnt->r.ownerNum.number )
  {
LABEL_76:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 478, ASSERT_TYPE_ASSERT, "( turretEnt->r.ownerNum.isDefined() )", (const char *)&queryFormat, "turretEnt->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v10 = turretEnt->r.ownerNum.number;
  if ( (unsigned int)(v10 - 1) >= 0x7FF )
  {
    LODWORD(v45) = 2047;
    LODWORD(v44) = v10 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v44, v45) )
      __debugbreak();
  }
  v11 = turretEnt->r.ownerNum.number;
  if ( (unsigned int)(v11 - 1) >= 0x800 )
  {
    LODWORD(v45) = 2048;
    LODWORD(v44) = v11 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v44, v45) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v12 = v11 - 1;
  if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v12] )
  {
    LODWORD(v45) = turretEnt->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v45) )
      __debugbreak();
  }
  if ( &g_entities[turretEnt->r.ownerNum.number - 1] != playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 479, ASSERT_TYPE_ASSERT, "( turretEnt->r.ownerNum.ent() == playerEnt )", (const char *)&queryFormat, "turretEnt->r.ownerNum.ent() == playerEnt") )
    __debugbreak();
  client = playerEnt->client;
  client->ps.viewlocked_entNum = turretEnt->s.number;
  v14 = client->ps.viewangles.v[1];
  v15 = (float)(v14 - this->m_data.playerYaw) * 0.0027777778;
  this->m_data.playerYaw = v14;
  v16 = client->ps.viewangles.v[0];
  v17 = (float)(v16 - this->m_data.playerPitch) * 0.0027777778;
  this->m_data.playerPitch = v16;
  v18 = client->ps.commandTime - this->m_data.playerCmdTime;
  _XMM9 = 0i64;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  this->m_data.playerCmdTime = client->ps.commandTime;
  if ( v18 < 1 )
    v18 = 1;
  v21 = 1.0 / _mm_cvtepi32_ps((__m128i)(unsigned int)v18).m128_f32[0];
  v22 = (float)((float)(v15 - *(float *)&_XMM2) * 360.0) * v21;
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  v24 = (float)((float)(v17 - *(float *)&_XMM3) * 360.0) * v21;
  v25 = v21 * smoothDurationMs;
  if ( v25 > 1.0 )
    v22 = (float)(this->m_data.playerYawSpeedSmooth - (float)(this->m_data.playerYawSpeedSmooth * (float)(1.0 / v25))) + (float)((float)(1.0 / v25) * v22);
  this->m_data.playerYawSpeedSmooth = v22;
  if ( v25 > 1.0 )
    v24 = (float)(this->m_data.playerPitchSpeedSmooth - (float)(this->m_data.playerPitchSpeedSmooth * (float)(1.0 / v25))) + (float)((float)(1.0 / v25) * v24);
  v26 = threshold_3;
  v27 = COERCE_FLOAT(LODWORD(v22) & _xmm) <= threshold_3;
  this->m_data.playerPitchSpeedSmooth = v24;
  v28 = !v27 || COERCE_FLOAT(LODWORD(v24) & _xmm) > v26;
  v29 = turretEnt->s.lerp.u.anonymous.data[5];
  v30 = v29 | 0x20;
  v31 = v29 & 0xFFFFFFDF;
  if ( !v28 )
    v30 = v31;
  turretEnt->s.lerp.u.anonymous.data[5] = v30;
  if ( !G_Turret_IsMountedOnVehicle(turretEnt) )
    goto LABEL_77;
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v32 = GVehicles::ms_gVehiclesSystem;
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 519, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &turretEnt->s);
  if ( !v32->AimTurret(v32, WeaponForEntity, turretEnt->s.number) )
  {
LABEL_77:
    if ( !G_GameInterface_Turret_AimTurret(&client->ps, turretEnt) )
    {
      if ( BG_IsRemoteTurretActive(&client->ps) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 534, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
          __debugbreak();
        __asm { vroundss xmm3, xmm9, xmm2, 1 }
        turretEnt->s.lerp.u.turret.gunAngles.v[0] = (float)((float)(0.0027777778 * client->ps.viewangles.v[0]) - *(float *)&_XMM3) * 360.0;
        __asm { vroundss xmm2, xmm9, xmm1, 1 }
        turretEnt->s.lerp.u.turret.gunAngles.v[1] = (float)((float)(0.0027777778 * client->ps.viewangles.v[1]) - *(float *)&_XMM2) * 360.0;
      }
      else
      {
        __asm { vroundss xmm3, xmm9, xmm2, 1 }
        v38 = (float)((float)((float)(client->ps.viewangles.v[0] - turretEnt->r.currentAngles.v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
        turretEnt->s.lerp.u.turret.gunAngles.v[0] = v38;
        v39 = I_fclamp(v38, this->m_data.arcmin.v[0], this->m_data.arcmax.v[0]);
        turretEnt->s.lerp.u.turret.gunAngles.v[0] = *(float *)&v39;
        __asm { vroundss xmm2, xmm9, xmm3, 1 }
        v41 = (float)((float)((float)(client->ps.viewangles.v[1] - turretEnt->r.currentAngles.v[1]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
        turretEnt->s.lerp.u.turret.gunAngles.v[1] = v41;
        v42 = I_fclamp(v41, this->m_data.arcmin.v[1], this->m_data.arcmax.v[1]);
        turretEnt->s.lerp.u.turret.gunAngles.v[1] = *(float *)&v42;
      }
    }
    turretEnt->s.lerp.u.anonymous.data[2] = 0;
  }
  flags = this->m_data.flags;
  if ( (flags & 1) != 0 )
    this->m_data.flags = flags & 0xFFFFFFFE;
}

/*
==============
GTurret::AimAtEntity
==============
*/
char GTurret::AimAtEntity(GTurret *this, gentity_s *self, const gentity_s *ent, const vec3_t *entOffset, const int bShoot)
{
  float v9; 
  GTurret *Turret; 
  vec3_t vPoint; 
  vec2_t out_localAngles; 
  vec3_t out_sourcePosition; 

  GTurret::SetTargetEnt(this, ent, entOffset);
  v9 = ent->r.currentOrigin.v[1] + entOffset->v[1];
  vPoint.v[0] = entOffset->v[0] + ent->r.currentOrigin.v[0];
  vPoint.v[2] = ent->r.currentOrigin.v[2] + entOffset->v[2];
  vPoint.v[1] = v9;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2239, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( G_Turret_GetAimAngleAndPosition_Internal(self, &vPoint, &out_sourcePosition, &out_localAngles, 0) )
  {
    if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2223, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
      __debugbreak();
    Turret = GTurret::GetTurret(&self->turretHandle);
    G_Turret_UpdateShootingState(self, bShoot, &out_localAngles);
    Turret->m_data.flags |= 0x20u;
    Turret->m_data.targetPos = vPoint;
    GTurret::UpdateTargetAngles(this, self, &out_localAngles, 1);
    return 1;
  }
  else
  {
    this->m_data.flags &= ~0x20u;
    G_Turret_UpdateShootingState(self, bShoot, &out_localAngles);
    return 0;
  }
}

/*
==============
GTurret::AimAtSentient
==============
*/
bool GTurret::AimAtSentient(GTurret *this, gentity_s *self, gentity_s *enemy, const vec3_t *enemyOffset, int bShoot, int missTime)
{
  bool result; 
  vec2_t desiredAngles; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2489, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2490, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2491, ASSERT_TYPE_ASSERT, "( enemy->sentient )", (const char *)&queryFormat, "enemy->sentient") )
    __debugbreak();
  result = G_Turret_AimAtSentient_Internal(self, enemy, enemyOffset, bShoot, missTime, &desiredAngles);
  if ( result )
  {
    GTurret::UpdateTargetAngles(this, self, &desiredAngles, 1);
    return 1;
  }
  return result;
}

/*
==============
GTurret::AimAtVector
==============
*/
char GTurret::AimAtVector(GTurret *this, gentity_s *self, const vec3_t *origin, const int bShoot, vec2_t *out_localTargetAngles)
{
  vec3_t out_sourcePosition; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2239, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( G_Turret_GetAimAngleAndPosition_Internal(self, origin, &out_sourcePosition, out_localTargetAngles, 0) )
  {
    G_Turret_AimAtVector_Internal(self, origin, bShoot, out_localTargetAngles);
    return 1;
  }
  else
  {
    this->m_data.flags &= ~0x20u;
    G_Turret_UpdateShootingState(self, bShoot, out_localTargetAngles);
    return 0;
  }
}

/*
==============
GTurret::AimAtVectorClamped
==============
*/
char GTurret::AimAtVectorClamped(GTurret *this, gentity_s *self, const vec3_t *origin, const int bShoot, vec2_t *out_localTargetAngles)
{
  vec3_t out_sourcePosition; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2259, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  G_Turret_GetAimAngleAndPosition_Internal(self, origin, &out_sourcePosition, out_localTargetAngles, 1);
  G_Turret_AimAtVector_Internal(self, origin, bShoot, out_localTargetAngles);
  return 1;
}

/*
==============
GTurret::CanSpawnTurret
==============
*/
char GTurret::CanSpawnTurret()
{
  int v0; 
  GTurret **i; 
  GTurret *v2; 

  if ( !(_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 219, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  v0 = 0;
  for ( i = GTurret::ms_turretArray; ; ++i )
  {
    v2 = *i;
    if ( !*i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 224, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
      __debugbreak();
    if ( !v2->m_inuse )
      break;
    if ( (unsigned int)++v0 >= 0x80 )
      return 0;
  }
  return 1;
}

/*
==============
GTurret::Fire
==============
*/
void GTurret::Fire(GTurret *this, gentity_s *self, const int gameTime)
{
  unsigned __int16 number; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  const gentity_s *v10; 
  unsigned __int16 v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  gentity_s *v15; 
  __int64 v16; 
  unsigned int v17; 
  __int64 v18; 
  int v19; 
  BgWeaponParms params; 

  number = self->r.ownerNum.number;
  if ( !number )
    goto LABEL_39;
  v7 = number;
  v8 = number - 1;
  if ( v8 >= 0x800 )
  {
    v19 = 2048;
    v17 = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v17, v19) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v9 = v7 - 1;
  if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v9] )
  {
    LODWORD(v18) = self->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v18) )
      __debugbreak();
  }
  if ( !self->r.ownerNum.number )
  {
LABEL_39:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1531, ASSERT_TYPE_ASSERT, "(self->r.ownerNum.isDefined())", "%s\n\tGTurret::Fire(): expected turret to have a valid owner.", "self->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v10 = EntHandle::ent(&self->r.ownerNum);
  G_Turret_SetupFireParams(self, v10, (const scr_string_t)scr_const.tag_aim, &params);
  if ( !EntHandle::ent(&self->r.ownerNum)->client && (this->m_data.flags & 0x20) != 0 )
    this->FireLead_UpdateAccuracy(this, self, &params);
  v11 = self->r.ownerNum.number;
  if ( !v11 )
    goto LABEL_40;
  v12 = v11;
  v13 = v11 - 1;
  if ( v13 >= 0x800 )
  {
    LODWORD(v18) = 2048;
    LODWORD(v16) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v14 = v12 - 1;
  if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v14] )
  {
    LODWORD(v18) = self->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v18) )
      __debugbreak();
  }
  if ( !self->r.ownerNum.number )
  {
LABEL_40:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1541, ASSERT_TYPE_ASSERT, "(self->r.ownerNum.isDefined())", "%s\n\tGTurret::Fire(): expected turret to have a valid owner.", "self->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v15 = EntHandle::ent(&self->r.ownerNum);
  G_Turret_Shoot_internal(self, v15, 0, gameTime, &params);
  this->m_data.triggerDown = 1;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&self->s.lerp.eFlags, ACTIVE, 0xAu);
}

/*
==============
GTurret::FireEnd
==============
*/
void GTurret::FireEnd(GTurret *this, gentity_s *self)
{
  this->m_data.triggerDown = 0;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&self->s.lerp.eFlags, ACTIVE, 0xAu);
  G_Utils_AddEvent(self, 0x26u, 0);
}

/*
==============
GTurret::FireWithParams
==============
*/
void GTurret::FireWithParams(GTurret *this, gentity_s *const self, const int gameTime, const BgWeaponParms *const params)
{
  unsigned __int16 number; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  gentity_s *v12; 
  unsigned int v13; 
  __int64 v14; 
  int v15; 

  number = self->r.ownerNum.number;
  if ( !number )
    goto LABEL_20;
  v9 = number;
  v10 = number - 1;
  if ( v10 >= 0x800 )
  {
    v15 = 2048;
    v13 = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v11 = v9 - 1;
  if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v11] )
  {
    LODWORD(v14) = self->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v14) )
      __debugbreak();
  }
  if ( !self->r.ownerNum.number )
  {
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1541, ASSERT_TYPE_ASSERT, "(self->r.ownerNum.isDefined())", "%s\n\tGTurret::Fire(): expected turret to have a valid owner.", "self->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v12 = EntHandle::ent(&self->r.ownerNum);
  G_Turret_Shoot_internal(self, v12, 0, gameTime, params);
  this->m_data.triggerDown = 1;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&self->s.lerp.eFlags, ACTIVE, 0xAu);
}

/*
==============
G_HandlePositionAndBlendForIKTurret
==============
*/
char G_HandlePositionAndBlendForIKTurret(gentity_s *playerEnt, characterInfo_t *ci, const gentity_s *turretEnt, const Weapon *turretWeapon)
{
  playerState_s *EntityPlayerState; 
  float v10; 
  GWeaponMap *Instance; 
  float v12; 
  float v13; 
  float v14; 
  scr_string_t v15; 
  float v16; 
  float v17; 
  scr_string_t v18; 
  float v19; 
  float v20; 
  vec3_t out; 
  vec3_t angles; 
  tmat43_t<vec3_t> outTagMat; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v25; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 809, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 810, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !turretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 811, ASSERT_TYPE_ASSERT, "(turretEnt)", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  if ( !BG_TurretWeaponUses3pIK(turretWeapon, 0) )
    return 0;
  if ( G_Utils_DObjGetWorldTagMatrix(turretEnt, scr_const.tag_gunner, &outTagMat) )
  {
    EntityPlayerState = G_GetEntityPlayerState(playerEnt);
    v10 = fsqrt((float)((float)(turretEnt->r.currentOrigin.v[1] - outTagMat.m[3].v[1]) * (float)(turretEnt->r.currentOrigin.v[1] - outTagMat.m[3].v[1])) + (float)((float)(turretEnt->r.currentOrigin.v[0] - outTagMat.m[3].v[0]) * (float)(turretEnt->r.currentOrigin.v[0] - outTagMat.m[3].v[0])));
    if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1200, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    EntityPlayerState->turretOffset = MSG_PackUnsignedFloat(v10, 200.0, 6u);
    Instance = GWeaponMap::GetInstance();
    if ( !BG_Turret_HasPmoveMovement(Instance, EntityPlayerState) )
    {
      v12 = outTagMat.m[3].v[2];
      v13 = outTagMat.m[3].v[0];
      playerEnt->r.currentOrigin.v[1] = outTagMat.m[3].v[1];
      playerEnt->r.currentOrigin.v[2] = v12;
      playerEnt->r.currentOrigin.v[0] = v13;
      EntityPlayerState->origin.v[0] = v13;
      EntityPlayerState->origin.v[1] = outTagMat.m[3].v[1];
      EntityPlayerState->origin.v[2] = outTagMat.m[3].v[2];
      AxisToAngles((const tmat33_t<vec3_t> *)&outTagMat, &playerEnt->r.currentAngles);
    }
    BG_Turret_UpdateAnimParams(ci, &EntityPlayerState->origin, &EntityPlayerState->viewangles, &turretEnt->r.currentOrigin, &turretEnt->r.currentAngles);
    AnglesToAxis(&playerEnt->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
    v14 = playerEnt->r.currentOrigin.v[1];
    axis.m[3].v[0] = playerEnt->r.currentOrigin.v[0];
    axis.m[3].v[2] = playerEnt->r.currentOrigin.v[2];
    axis.m[3].v[1] = v14;
    v15 = XAnimIKGetLocatorTagName(XANIM_IK_ACTOR_RIGHT_HAND);
    if ( G_Utils_DObjGetWorldTagMatrix(turretEnt, v15, &v25) )
    {
      MatrixTransposeTransformVector43(&v25.m[3], &axis, &out);
      v16 = out.v[1];
      ci->IKHandPos[1].v[0] = out.v[0];
      ci->IKHandPos[1].v[2] = out.v[2];
      ci->IKHandPos[1].v[1] = v16;
      AxisToAngles((const tmat33_t<vec3_t> *)&v25, &angles);
      v17 = angles.v[1];
      ci->IKHandAng[1].v[0] = angles.v[0];
      ci->IKHandAng[1].v[2] = angles.v[2];
      ci->IKHandAng[1].v[1] = v17;
    }
    v18 = XAnimIKGetLocatorTagName(XANIM_IK_ACTOR_LEFT_HAND);
    if ( G_Utils_DObjGetWorldTagMatrix(turretEnt, v18, &v25) )
    {
      MatrixTransposeTransformVector43(&v25.m[3], &axis, &out);
      v19 = out.v[1];
      ci->IKHandPos[0].v[0] = out.v[0];
      ci->IKHandPos[0].v[2] = out.v[2];
      ci->IKHandPos[0].v[1] = v19;
      AxisToAngles((const tmat33_t<vec3_t> *)&v25, &angles);
      v20 = angles.v[1];
      ci->IKHandAng[0].v[0] = angles.v[0];
      ci->IKHandAng[0].v[2] = angles.v[2];
      ci->IKHandAng[0].v[1] = v20;
    }
    return 1;
  }
  else
  {
    Com_PrintWarning(17, "WARNING: aborting player positioning on turret since 'tag_gunner' does not exist, turrets that use 3p IK position the player on tag_gunner.\n");
    return 1;
  }
}

/*
==============
G_IsTurretKeepingOrientationOnExit
==============
*/
bool G_IsTurretKeepingOrientationOnExit(entityState_t *es)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v4; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3788, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, es);
  v4 = BG_WeaponDef(WeaponForEntity, 0);
  if ( !v4 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3792, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    return 0;
  }
  return v4->keepOrientationOnExit;
}

/*
==============
G_Turret_AimAtSentient_Internal
==============
*/
char G_Turret_AimAtSentient_Internal(gentity_s *self, gentity_s *enemy, const vec3_t *enemyOffset, int bShoot, int missTime, vec2_t *out_localTargetAngles)
{
  GTurret *Turret; 
  float convergenceHeightPercent; 
  bool v13; 
  float v14; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  int CanConvergeOnHeadOffset; 
  float v21; 
  float v22; 
  int targetTime; 
  int flags; 
  __int128 v26; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  __int128 v35; 
  float v36; 
  float v37; 
  __int128 v38; 
  float v39; 
  __int128 v40; 
  __int128 v44; 
  float v45; 
  float v46; 
  float v47; 
  vec3_t targetEntOffset; 
  vec3_t origin; 
  vec3_t out_targetPosition; 
  vec3_t v51; 
  vec3_t v52; 
  tmat43_t<vec3_t> outTagMat; 
  vec3_t out_sourcePosition; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2394, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2395, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2396, ASSERT_TYPE_ASSERT, "( enemy->sentient )", (const char *)&queryFormat, "enemy->sentient") )
    __debugbreak();
  if ( missTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2397, ASSERT_TYPE_ASSERT, "( missTime >= 0 )", (const char *)&queryFormat, "missTime >= 0") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  GTurret::SetTargetEnt(Turret, enemy, enemyOffset);
  convergenceHeightPercent = Turret->m_data.convergenceHeightPercent;
  v13 = convergenceHeightPercent < 1.0 && enemy->sentient;
  if ( Turret->m_data.state == INITIALIZING && v13 )
  {
    v14 = 0.0;
    if ( convergenceHeightPercent < 0.0 || convergenceHeightPercent > 1.0 )
    {
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 458, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( m_data.convergenceHeightPercent ) && ( m_data.convergenceHeightPercent ) <= ( 1.f )", "m_data.convergenceHeightPercent not in [0.f, 1.f]\n\t%g not in [%g, %g]", convergenceHeightPercent, *(double *)&_XMM1, DOUBLE_1_0) )
        __debugbreak();
    }
    Turret->GetTargetEyePosition(Turret, enemy, &v51);
    v16 = 1.0 - Turret->m_data.convergenceHeightPercent;
    v17 = (float)(enemy->r.currentOrigin.v[0] - v51.v[0]) * v16;
    v18 = (float)(enemy->r.currentOrigin.v[1] - v51.v[1]) * v16;
    v19 = (float)(enemy->r.currentOrigin.v[2] - v51.v[2]) * v16;
    targetEntOffset.v[2] = v19;
    targetEntOffset.v[0] = v17;
    targetEntOffset.v[1] = v18;
  }
  else
  {
    v14 = 0.0;
    targetEntOffset.v[0] = 0.0;
    targetEntOffset.v[1] = 0.0;
    targetEntOffset.v[2] = 0.0;
    v17 = 0.0;
    v18 = 0.0;
    v19 = 0.0;
  }
  CanConvergeOnHeadOffset = G_Turret_CanConvergeOnHeadOffset(self, enemy, &targetEntOffset);
  v21 = enemyOffset->v[1];
  v22 = enemyOffset->v[2];
  if ( CanConvergeOnHeadOffset )
  {
    targetEntOffset.v[0] = v17 + enemyOffset->v[0];
    targetEntOffset.v[2] = v22 + v19;
    v21 = v18 + v21;
  }
  else
  {
    targetEntOffset.v[0] = enemyOffset->v[0];
    targetEntOffset.v[2] = v22;
  }
  targetEntOffset.v[1] = v21;
  if ( !G_Turret_CanTargetSentient(self, enemy, &targetEntOffset, &out_targetPosition, &out_sourcePosition, out_localTargetAngles) )
  {
    Turret->m_data.flags &= ~0x20u;
    G_Turret_UpdateShootingState(self, bShoot, out_localTargetAngles);
    return 0;
  }
  targetTime = Turret->m_data.targetTime;
  if ( targetTime + Turret->m_data.convergenceTime[1] - level.time <= 0 )
    goto LABEL_46;
  flags = Turret->m_data.flags;
  if ( (flags & 0x40) != 0 )
  {
    if ( missTime > 0 )
      v14 = (float)(missTime + targetTime - level.time) / (float)missTime;
    v45 = Turret->m_data.missOffsetNormalized.v[2];
    v46 = (float)(v14 * 30.0) + 33.0;
    v47 = (float)(v46 * Turret->m_data.missOffsetNormalized.v[1]) + out_targetPosition.v[1];
    v52.v[0] = (float)(v46 * Turret->m_data.missOffsetNormalized.v[0]) + out_targetPosition.v[0];
    v52.v[2] = (float)(v46 * v45) + out_targetPosition.v[2];
    v52.v[1] = v47;
    if ( GTurret::AimAtVector(Turret, self, &v52, bShoot, out_localTargetAngles) )
      return 1;
    goto LABEL_46;
  }
  Turret->m_data.flags = flags | 0x40;
  if ( !G_Utils_DObjGetWorldTagMatrix(self, scr_const.tag_aim, &outTagMat) )
    return 0;
  v26 = LODWORD(outTagMat.m[3].v[0]);
  *(float *)&v26 = fsqrt((float)((float)(outTagMat.m[3].v[0] - out_targetPosition.v[0]) * (float)(outTagMat.m[3].v[0] - out_targetPosition.v[0])) + (float)((float)(out_targetPosition.v[1] - outTagMat.m[3].v[1]) * (float)(out_targetPosition.v[1] - outTagMat.m[3].v[1])));
  _XMM3 = v26;
  __asm
  {
    vcmpless xmm0, xmm3, xmm10
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  v30 = (float)((float)(1.0 / *(float *)&_XMM0) * (float)(outTagMat.m[3].v[0] - out_targetPosition.v[0])) * 63.0;
  v31 = (float)((float)(1.0 / *(float *)&_XMM0) * (float)(out_targetPosition.v[1] - outTagMat.m[3].v[1])) * 63.0;
  if ( (float)((float)(v30 * outTagMat.m[0].v[1]) + (float)(v31 * outTagMat.m[0].v[0])) < 0.0 )
  {
    v32 = out_targetPosition.v[0] - v31;
    v33 = out_targetPosition.v[1] - v30;
  }
  else
  {
    v32 = v31 + out_targetPosition.v[0];
    v33 = v30 + out_targetPosition.v[1];
  }
  origin.v[0] = v32;
  origin.v[1] = v33;
  origin.v[2] = targetEntOffset.v[2] + enemy->r.currentOrigin.v[2];
  if ( !GTurret::AimAtVector(Turret, self, &origin, bShoot, out_localTargetAngles) )
  {
    origin.v[2] = out_targetPosition.v[2];
    if ( GTurret::AimAtVector(Turret, self, &origin, bShoot, out_localTargetAngles) )
    {
      v34 = origin.v[0] - out_targetPosition.v[0];
      Turret->m_data.missOffsetNormalized.v[0] = origin.v[0] - out_targetPosition.v[0];
      v44 = LODWORD(origin.v[1]);
      *(float *)&v44 = origin.v[1] - out_targetPosition.v[1];
      Turret->m_data.missOffsetNormalized.v[1] = origin.v[1] - out_targetPosition.v[1];
      v37 = origin.v[2] - out_targetPosition.v[2];
      *(float *)&v44 = *(float *)&v44 * *(float *)&v44;
      v38 = v44;
      v39 = v34 * v34;
      goto LABEL_39;
    }
    *(_QWORD *)Turret->m_data.missOffsetNormalized.v = 0i64;
    Turret->m_data.missOffsetNormalized.v[2] = 0.0;
LABEL_46:
    G_Turret_AimAtVector_Internal(self, &out_targetPosition, bShoot, out_localTargetAngles);
    return 1;
  }
  v35 = LODWORD(origin.v[0]);
  v34 = origin.v[0] - out_targetPosition.v[0];
  Turret->m_data.missOffsetNormalized.v[0] = origin.v[0] - out_targetPosition.v[0];
  v36 = origin.v[1] - out_targetPosition.v[1];
  Turret->m_data.missOffsetNormalized.v[1] = origin.v[1] - out_targetPosition.v[1];
  v37 = origin.v[2] - out_targetPosition.v[2];
  *(float *)&v35 = v34 * v34;
  v38 = v35;
  v39 = v36 * v36;
LABEL_39:
  v40 = v38;
  Turret->m_data.missOffsetNormalized.v[2] = v37;
  *(float *)&v40 = fsqrt((float)(*(float *)&v38 + v39) + (float)(v37 * v37));
  _XMM3 = v40;
  __asm
  {
    vcmpless xmm0, xmm3, xmm10
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  Turret->m_data.missOffsetNormalized.v[0] = v34 * (float)(1.0 / *(float *)&_XMM0);
  Turret->m_data.missOffsetNormalized.v[1] = (float)(1.0 / *(float *)&_XMM0) * Turret->m_data.missOffsetNormalized.v[1];
  Turret->m_data.missOffsetNormalized.v[2] = (float)(1.0 / *(float *)&_XMM0) * Turret->m_data.missOffsetNormalized.v[2];
  return 1;
}

/*
==============
G_Turret_AimAtVector_Internal
==============
*/
void G_Turret_AimAtVector_Internal(gentity_s *self, const vec3_t *origin, int bShoot, const vec2_t *localTargetAngles)
{
  GTurret *Turret; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2223, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  G_Turret_UpdateShootingState(self, bShoot, localTargetAngles);
  Turret->m_data.flags |= 0x20u;
  Turret->m_data.targetPos = *origin;
}

/*
==============
G_Turret_ApplyKickBackOnFire
==============
*/
void G_Turret_ApplyKickBackOnFire(gentity_s *ent, const Weapon *r_weapon, const BgWeaponParms *r_wp)
{
  const gentity_s *RootParent; 
  const gentity_s *v6; 
  const WeaponDef *v7; 
  const WeaponDef *weapDef; 
  GVehicles *VehicleSystem; 
  __int128 v10; 
  __int128 v11; 
  BGVehicles *v15; 
  Vehicle *vehicle; 
  vec3_t dirWs; 

  RootParent = GUtils::GetRootParent(ent);
  v6 = RootParent;
  if ( RootParent )
  {
    if ( RootParent->vehicle )
    {
      v7 = BG_WeaponDef(r_weapon, 0);
      weapDef = v7;
      if ( v7 )
      {
        if ( v7->kickBackForceMultiplier != 0.0 )
        {
          VehicleSystem = GVehicles::GetVehicleSystem();
          v10 = LODWORD(r_wp->forward.v[1]);
          v11 = v10;
          *(float *)&v11 = fsqrt((float)(*(float *)&v10 * *(float *)&v10) + (float)(r_wp->forward.v[0] * r_wp->forward.v[0]));
          _XMM2 = v11;
          __asm
          {
            vcmpless xmm0, xmm2, cs:__real@80000000
            vblendvps xmm0, xmm2, xmm1, xmm0
          }
          *(float *)&v11 = r_wp->forward.v[0] * (float)(1.0 / *(float *)&_XMM0);
          v15 = VehicleSystem;
          vehicle = v6->vehicle;
          dirWs.v[1] = *(float *)&v10 * (float)(1.0 / *(float *)&_XMM0);
          dirWs.v[0] = *(float *)&v11;
          dirWs.v[2] = 0.0;
          BGVehicles::PhysicsFireWeapon(v15, vehicle->physicsVehicle, &dirWs, &r_wp->muzzleTrace, weapDef);
        }
      }
    }
  }
}

/*
==============
G_Turret_CalculateConvergenceAngularVelocity
==============
*/
void G_Turret_CalculateConvergenceAngularVelocity(const gentity_s *self, const vec2_t *desiredAngles, vec2_t *outAngularVelocity)
{
  GTurret *Turret; 
  int time; 
  GTurret *v8; 
  int v9; 
  int v10; 
  int stateChangeTime; 
  int v12; 
  int v13; 
  float v16; 
  float v17; 
  float v19; 
  float v20; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1678, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  time = level.time;
  v8 = Turret;
  v9 = Turret->m_data.targetTime + Turret->m_data.convergenceTime[1] - level.time;
  v10 = Turret->m_data.targetTime + Turret->m_data.convergenceTime[0] - level.time;
  if ( Turret->m_data.state == INITIALIZING )
  {
    stateChangeTime = Turret->m_data.stateChangeTime;
    if ( stateChangeTime > level.time )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1689, ASSERT_TYPE_ASSERT, "( turretData->stateChangeTime ) <= ( level.time )", "%s <= %s\n\t%i, %i", "turretData->stateChangeTime", "level.time", stateChangeTime, level.time) )
        __debugbreak();
      time = level.time;
    }
    v12 = v8->m_data.stateChangeTime - time + 1500;
    if ( v10 > v12 )
      v12 = v10;
    v10 = v12;
  }
  v13 = self->nextthink - time;
  _XMM9 = 0i64;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  v16 = _mm_cvtepi32_ps((__m128i)(unsigned int)v13).m128_f32[0];
  LODWORD(v17) = COERCE_UNSIGNED_INT((float)((float)((float)(self->s.lerp.u.turret.gunAngles.v[0] - desiredAngles->v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0) & _xmm;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  v19 = (float)(v17 * 1000.0) * (float)(1.0 / v16);
  v20 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(self->s.lerp.u.turret.gunAngles.v[1] - desiredAngles->v[1]) * 0.0027777778) - *(float *)&_XMM2) * 360.0) & _xmm) * 1000.0) * (float)(1.0 / v16);
  outAngularVelocity->v[1] = v20;
  outAngularVelocity->v[0] = v19;
  if ( v9 > 0 && v13 < v9 )
    outAngularVelocity->v[1] = (float)(v16 / (float)v9) * v20;
  if ( v10 > 0 && v13 < v10 )
    outAngularVelocity->v[0] = (float)(v16 / (float)v10) * v19;
}

/*
==============
G_Turret_CanConvergeOnHeadOffset
==============
*/
_BOOL8 G_Turret_CanConvergeOnHeadOffset(gentity_s *self, gentity_s *enemy, const vec3_t *targetEntOffset)
{
  GTurret *Turret; 
  float v7; 
  const char *v8; 
  int number; 
  const char *v10; 
  bool v11; 
  const dvar_t *v12; 
  bool v13; 
  char *fmt; 
  vec3_t end; 
  vec3_t v17; 
  vec3_t outPos; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2335, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2336, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( Turret->m_data.state != INITIALIZING || Turret->m_data.convergenceHeightPercent >= 1.0 )
    return 0i64;
  Turret->GetTargetEyePosition(Turret, enemy, &v17);
  v7 = v17.v[1] + targetEntOffset->v[1];
  end.v[0] = v17.v[0] + targetEntOffset->v[0];
  end.v[2] = v17.v[2] + targetEntOffset->v[2];
  end.v[1] = v7;
  if ( !G_Utils_DObjGetWorldTagPos(self, scr_const.tag_aim, &outPos) )
  {
    v8 = SL_ConvertToString(self->classname);
    number = self->s.number;
    v10 = SL_ConvertToStringSafe(scr_const.tag_aim);
    LODWORD(fmt) = number;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2F330, 846i64, v10, fmt, v8);
  }
  v11 = G_Turret_SightTrace(&outPos, &end, self->s.number, enemy->s.number);
  v12 = DVARBOOL_turretConvergenceHeightDebug;
  v13 = v11;
  if ( !DVARBOOL_turretConvergenceHeightDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretConvergenceHeightDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    if ( !v13 )
    {
      G_DebugLineWithDuration(&outPos, &end, &colorRed, 0, 25);
      end = v17;
      G_DebugLineWithDuration(&enemy->r.currentOrigin, &end, &colorRed, 0, 25);
      return 0i64;
    }
    G_DebugLine(&enemy->r.currentOrigin, &end, &colorLtGreen, 0);
  }
  return v13;
}

/*
==============
G_Turret_CanShoot
==============
*/
_BOOL8 G_Turret_CanShoot(gentity_s *self)
{
  GTurret *Turret; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v5; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 687, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( (Turret->m_data.flags & 2) != 0 )
    return 0i64;
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  v5 = BG_WeaponDef(WeaponForEntity, 0);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 697, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  return level.time >= Turret->m_data.heatPenaltyEndTime && (!v5->turretBarrelSpinEnabled || Turret->m_data.barrelRollRate >= 1.0);
}

/*
==============
G_Turret_CanTargetPoint
==============
*/
bool G_Turret_CanTargetPoint(const gentity_s *self, const vec3_t *vPoint, vec3_t *out_sourcePosition, vec2_t *out_localAngles)
{
  return G_Turret_GetAimAngleAndPosition_Internal(self, vPoint, out_sourcePosition, out_localAngles, 0);
}

/*
==============
G_Turret_CanTargetSentient
==============
*/
char G_Turret_CanTargetSentient(const gentity_s *turretEnt, const gentity_s *targetEnt, const vec3_t *targetEntOffset, vec3_t *out_targetPosition, vec3_t *out_sourcePosition, vec2_t *out_localAngles)
{
  GTurret *Turret; 
  const playerState_s *EntityPlayerStateConst; 
  const playerState_s *v12; 
  float v13; 
  double TargetPosInternal; 
  float v15; 
  float v16; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  GWeaponMap *v19; 
  double ADSDamageRangeScale; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  int outMinDamage; 
  float minDamageRange; 
  GTurretState state; 
  int outMaxDamage; 
  float maxDamageRange; 
  tmat43_t<vec3_t> axis; 

  if ( !turretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2105, ASSERT_TYPE_ASSERT, "( turretEnt )", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2106, ASSERT_TYPE_ASSERT, "( targetEnt )", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( !G_Utils_DObjGetWorldTagPos(turretEnt, scr_const.tag_aim, out_sourcePosition) )
    return 0;
  Turret = GTurret::GetTurret(&turretEnt->turretHandle);
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(targetEnt);
  v12 = EntityPlayerStateConst;
  if ( EntityPlayerStateConst )
  {
    if ( !Turret->CanTargetSentient_CheckPlayerState(Turret, EntityPlayerStateConst) )
      return 0;
  }
  AnglesToAxis(&turretEnt->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
  v13 = out_sourcePosition->v[1];
  axis.m[3].v[0] = out_sourcePosition->v[0];
  axis.m[3].v[2] = out_sourcePosition->v[2];
  axis.m[3].v[1] = v13;
  state = Turret->m_data.state;
  TargetPosInternal = G_Turret_CanTargetSentient_GetTargetPosInternal(Turret, targetEnt, targetEntOffset, &axis, state == INITIALIZING, out_targetPosition, out_localAngles);
  v15 = out_localAngles->v[1];
  v16 = *(float *)&TargetPosInternal;
  if ( v15 > Turret->m_data.arcmax.v[1] || v15 < Turret->m_data.arcmin.v[1] )
    return 0;
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &turretEnt->s);
  BG_GetMinMaxDamage(WEAP_DMG_CALC_TYPE_AI_TO_PLAYER, WeaponForEntity, 0, &outMinDamage, &outMaxDamage);
  if ( v12 )
  {
    if ( outMinDamage )
      goto LABEL_17;
LABEL_16:
    v19 = GWeaponMap::GetInstance();
    ADSDamageRangeScale = BG_GetADSDamageRangeScale(v19, v12, WeaponForEntity, 0);
    BG_GetDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, WeaponForEntity, 0, *(float *)&ADSDamageRangeScale, &minDamageRange, &maxDamageRange);
    if ( v16 >= (float)(minDamageRange * minDamageRange) )
      return 0;
    goto LABEL_17;
  }
  if ( !BG_GetMinDamage(WEAP_DMG_CALC_TYPE_DEFAULT, WeaponForEntity, 0) )
    goto LABEL_16;
LABEL_17:
  v21 = out_localAngles->v[0];
  if ( out_localAngles->v[0] >= Turret->m_data.arcmin.v[0] && v21 <= Turret->m_data.arcmax.v[0] )
    return 1;
  v22 = Turret->m_data.arcmax.v[0];
  G_Turret_CanTargetSentient_GetTargetPosInternal(Turret, targetEnt, targetEntOffset, &axis, state != INITIALIZING, out_targetPosition, out_localAngles);
  v23 = out_localAngles->v[1];
  if ( v23 <= Turret->m_data.arcmax.v[1] && v23 >= Turret->m_data.arcmin.v[1] )
  {
    v24 = out_localAngles->v[0];
    v25 = Turret->m_data.arcmax.v[0];
    if ( out_localAngles->v[0] <= v25 && v24 >= Turret->m_data.arcmin.v[0] )
      return 1;
    if ( v21 > v22 != v24 > v25 )
    {
      out_localAngles->v[0] = 0.0;
      out_targetPosition->v[2] = out_sourcePosition->v[2];
      return 1;
    }
  }
  return 0;
}

/*
==============
G_Turret_CanTargetSentient_GetTargetPosInternal
==============
*/
float G_Turret_CanTargetSentient_GetTargetPosInternal(GTurret *turret, const gentity_s *targetEnt, const vec3_t *targetEntOffset, const tmat43_t<vec3_t> *turretAxis, const int targetHead, vec3_t *out_targetPosition, vec2_t *out_localAngles)
{
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  vec3_t out; 
  vec3_t angles; 

  if ( !turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2067, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2068, ASSERT_TYPE_ASSERT, "( targetEnt )", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( targetHead )
  {
    turret->GetTargetEyePosition(turret, targetEnt, out_targetPosition);
    v11 = out_targetPosition->v[1];
    out_targetPosition->v[0] = out_targetPosition->v[0] + targetEntOffset->v[0];
    v12 = out_targetPosition->v[2];
    out_targetPosition->v[1] = v11 + targetEntOffset->v[1];
    out_targetPosition->v[2] = v12 + targetEntOffset->v[2];
  }
  else
  {
    out_targetPosition->v[0] = targetEntOffset->v[0] + targetEnt->r.currentOrigin.v[0];
    out_targetPosition->v[1] = targetEnt->r.currentOrigin.v[1] + targetEntOffset->v[1];
    out_targetPosition->v[2] = (float)(targetEnt->r.currentOrigin.v[2] + targetEntOffset->v[2]) + 2.0;
  }
  MatrixTransposeTransformVector43(out_targetPosition, turretAxis, &out);
  vectosignedangles(&out, &angles);
  v13 = angles.v[1];
  out_localAngles->v[0] = angles.v[0];
  v14 = out.v[0] * out.v[0];
  v15 = out.v[2];
  out_localAngles->v[1] = v13;
  return (float)(v14 + (float)(out.v[1] * out.v[1])) + (float)(v15 * v15);
}

/*
==============
G_Turret_CanUse
==============
*/
bool G_Turret_CanUse(const gentity_s *self, const gentity_s *owner)
{
  GTurret *Turret; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3163, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3164, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( (owner->client->flags & 4) != 0 )
    return 0;
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( !Turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3170, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  return (Turret->m_data.flags & 0x200) == 0 && !self->active;
}

/*
==============
G_Turret_ClampTargetPointWithinArc
==============
*/
bool G_Turret_ClampTargetPointWithinArc(const gentity_s *self, const vec3_t *vPoint, vec3_t *out_sourcePosition, vec2_t *out_localAngles)
{
  return G_Turret_GetAimAngleAndPosition_Internal(self, vPoint, out_sourcePosition, out_localAngles, 1);
}

/*
==============
G_Turret_ClearTargetEnt
==============
*/
void G_Turret_ClearTargetEnt(gentity_s *self)
{
  GTurret *Turret; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1877, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  EntHandle::setEnt(&Turret->m_data.target, NULL);
  Turret->m_data.flags &= 0xFFFFFF9F;
  *(_QWORD *)Turret->m_data.targetOffset.v = 0i64;
  Turret->m_data.targetOffset.v[2] = 0.0;
  G_Turret_SetState(self, IDLE);
}

/*
==============
G_Turret_ClientStopUsingTurret
==============
*/
void G_Turret_ClientStopUsingTurret(gentity_s *self)
{
  GTurret *Turret; 
  unsigned __int16 number; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  gentity_s *v7; 
  playerState_s *p_ps; 
  const SuitDef *SuitDef; 
  int prevStance; 
  unsigned int v11; 
  int ProneViewHeight; 
  unsigned int v13; 
  unsigned int v14; 
  const scrContext_t *v15; 
  GHandler *Handler; 
  GWeaponMap *Instance; 
  __int64 v18; 
  __int64 v19; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1397, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1398, ASSERT_TYPE_ASSERT, "(self->r.isInUse)", (const char *)&queryFormat, "self->r.isInUse") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  number = self->r.ownerNum.number;
  if ( !number )
    goto LABEL_57;
  v4 = number;
  v5 = number - 1;
  if ( v5 >= 0x800 )
  {
    LODWORD(v18) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v6 = v4 - 1;
  if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v6] )
  {
    LODWORD(v19) = self->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v19) )
      __debugbreak();
  }
  if ( !self->r.ownerNum.number )
  {
LABEL_57:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1403, ASSERT_TYPE_ASSERT, "( self->r.ownerNum.isDefined() )", (const char *)&queryFormat, "self->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v7 = EntHandle::ent(&self->r.ownerNum);
  if ( !v7->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1405, ASSERT_TYPE_ASSERT, "( owner->client )", (const char *)&queryFormat, "owner->client") )
    __debugbreak();
  p_ps = &v7->client->ps;
  SuitDef = BG_GetSuitDef(p_ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1409, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  Turret->m_data.fireSndDelay = 0;
  self->s.loopSound = 0;
  prevStance = Turret->m_data.prevStance;
  if ( prevStance != -1 )
  {
    if ( *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) )
    {
      v11 = p_ps->pm_flags.m_flags[0];
      if ( prevStance == 2 )
      {
        p_ps->pm_flags.m_flags[0] = v11 & 0xFFFFFFFC | 1;
        ProneViewHeight = BG_Suit_GetProneViewHeight(SuitDef);
        v13 = 12;
      }
      else
      {
        v14 = v11 & 0xFFFFFFFE;
        p_ps->pm_flags.m_flags[0] = v14;
        p_ps->pm_flags.m_flags[1] &= ~0x400000u;
        if ( prevStance == 1 )
        {
          v13 = 11;
          p_ps->pm_flags.m_flags[0] = v14 | 2;
          ProneViewHeight = SuitDef->viewheight_crouch;
        }
        else
        {
          v13 = 10;
          p_ps->pm_flags.m_flags[0] = v14 & 0xFFFFFFFD;
          ProneViewHeight = SuitDef->viewheight_stand;
        }
      }
      p_ps->viewHeightTarget = ProneViewHeight;
      G_Utils_AddEvent(v7, v13, 0);
    }
    Turret->m_data.prevStance = -1;
  }
  if ( !G_Turret_IsMountedOnVehicle(self) )
  {
    if ( !GClientSystem::ms_gClientSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 423, ASSERT_TYPE_ASSERT, "( ms_gClientSystem )", (const char *)&queryFormat, "ms_gClientSystem") )
      __debugbreak();
    GClientSystem::ms_gClientSystem->TeleportPlayer(GClientSystem::ms_gClientSystem, v7, &Turret->m_data.userOrigin, &v7->r.currentAngles);
  }
  if ( BG_IsRemoteTurretActiveFlags(&p_ps->eFlags) && G_IsTurretKeepingOrientationOnExit(&self->s) )
    self->s.lerp.u.turret.gunAngles.v[1] = self->s.lerp.u.turret.gunAngles.v[1] - self->r.currentAngles.v[1];
  BG_Turret_ClearPlayerstateOwnedTurret(p_ps);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v7->client->ps.otherFlags, ACTIVE, 0x17u) )
  {
    Turret->m_data.triggerDown = 0;
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&self->s.lerp.eFlags, ACTIVE, 0xAu);
    G_Utils_AddEvent(self, 0x26u, 0);
  }
  v7->active = 0;
  Turret->StopUseVirtual(Turret, self, v7);
  if ( self == (gentity_s *)-12i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2062, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&self->s.lerp.eFlags, ACTIVE, 5u);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&self->s.lerp.eFlags, ACTIVE, 6u);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&self->s.lerp.eFlags, ACTIVE, 7u);
  if ( self->active == 1 )
  {
    v15 = ScriptContext_Server();
    if ( Scr_IsSystemActive(v15, 1u) )
      GScr_Notify(self, scr_const.turret_deactivate, 0);
  }
  self->active = 0;
  EntHandle::setEnt(&self->r.ownerNum, NULL);
  self->s.lerp.u.anonymous.data[5] &= ~0x20u;
  self->s.lerp.u.anonymous.data[6] = 2047;
  Turret->m_data.flags &= ~1u;
  Handler = GHandler::getHandler();
  Instance = GWeaponMap::GetInstance();
  PM_ResetWeaponState(Instance, p_ps, Handler);
  GScr_Notify(self, scr_const.turretownerchange, 0);
}

/*
==============
G_Turret_Controller
==============
*/
void G_Turret_Controller(const gentity_s *self, DObjPartBits *partBits)
{
  const DObj *ServerDObjForEnt; 
  float v5; 
  float v6; 
  unsigned __int8 v7; 
  float v8; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t v11; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v16; 

  if ( self->s.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3038, ASSERT_TYPE_ASSERT, "( self->s.eType == ET_TURRET )", (const char *)&queryFormat, "self->s.eType == ET_TURRET") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(self);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3041, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
  angles.v[2] = 0.0;
  if ( BG_IsRemoteTurretActiveFlags(&self->s.lerp.eFlags) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3052, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    v5 = self->s.lerp.u.turret.gunAngles.v[1];
    LODWORD(angles.v[0]) = self->s.lerp.u.anonymous.data[0];
    angles.v[1] = v5;
    AnglesToAxis(&self->r.currentAngles, &axis);
    AnglesToAxis(&angles, &in1);
    MatrixTranspose(&axis, &out);
    MatrixMultiply(&in1, &out, &v16);
    AxisToAngles(&v16, &angles);
    v6 = angles.v[1];
  }
  else
  {
    v6 = self->s.lerp.u.turret.gunAngles.v[1];
    angles.v[0] = self->s.lerp.u.turret.gunAngles.v[0] - self->s.lerp.u.turret.gunAngles.v[2];
    angles.v[1] = v6;
  }
  inOutIndex[0] = -2;
  v11.v[0] = 0.0;
  v11.v[2] = 0.0;
  v11.v[1] = v6;
  DObjGetBoneIndexInternal_11(ServerDObjForEnt, scr_const.tag_aim_pivot, inOutIndex, &modelIndex);
  v7 = inOutIndex[0];
  if ( inOutIndex[0] != 0xFF )
  {
    if ( inOutIndex[0] == 0xFE )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3078, ASSERT_TYPE_ASSERT, "( boneIndex != 254 )", (const char *)&queryFormat, "boneIndex != UNDEFINED_BONEINDEX") )
        __debugbreak();
      v7 = inOutIndex[0];
    }
    DObjSetLocalTag(ServerDObjForEnt, partBits, v7, &vec3_origin, &v11);
    v11.v[1] = 0.0;
  }
  inOutIndex[0] = -2;
  v11.v[0] = angles.v[0];
  DObjGetBoneIndexInternal_11(ServerDObjForEnt, scr_const.tag_aim, inOutIndex, &modelIndex);
  DObjSetLocalTag(ServerDObjForEnt, partBits, inOutIndex[0], &vec3_origin, &v11);
  inOutIndex[0] = -2;
  DObjGetBoneIndexInternal_11(ServerDObjForEnt, scr_const.tag_aim_animated, inOutIndex, &modelIndex);
  DObjSetLocalTag(ServerDObjForEnt, partBits, inOutIndex[0], &vec3_origin, &v11);
  v8 = self->s.lerp.u.turret.gunAngles.v[2];
  inOutIndex[0] = -2;
  v11.v[0] = v8;
  v11.v[1] = 0.0;
  DObjGetBoneIndexInternal_11(ServerDObjForEnt, scr_const.tag_flash, inOutIndex, &modelIndex);
  DObjSetLocalTag(ServerDObjForEnt, partBits, inOutIndex[0], &vec3_origin, &v11);
}

/*
==============
G_Turret_DeactivateTurret
==============
*/
void G_Turret_DeactivateTurret(gentity_s *self)
{
  const scrContext_t *v2; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3228, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( self->active == 1 )
  {
    v2 = ScriptContext_Server();
    if ( Scr_IsSystemActive(v2, 1u) )
      GScr_Notify(self, scr_const.turret_deactivate, 0);
  }
  self->active = 0;
}

/*
==============
G_Turret_FillWeaponParms
==============
*/
void G_Turret_FillWeaponParms(const gentity_s *ent, const gentity_s *activator, BgWeaponParms *wp, const scr_string_t tagName)
{
  const char *v8; 
  int number; 
  const char *v10; 
  const char *v11; 
  gclient_s *client; 
  gclient_s *v13; 
  GWeaponMap *Instance; 
  bool IsThirdPersonMode; 
  gclient_s *v16; 
  float fGunYaw; 
  vec3_t *p_up; 
  vec3_t *p_right; 
  GWeaponMap *v20; 
  const char *v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  GHandler *handler; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  scr_string_t TagForFiringMuzzle; 
  float v36; 
  const dvar_t *v37; 
  int v38; 
  float value; 
  double v40; 
  float v41; 
  float v42; 
  float v43; 
  gclient_s *v44; 
  __int16 remoteControlEnt; 
  __int128 v46; 
  float v47; 
  float v48; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  __int128 v56; 
  __int128 v60; 
  __int128 v64; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  tmat33_t<vec3_t> vec2; 
  vec3_t outOrigin; 
  vec3_t start; 
  vec3_t angles; 
  vec3_t end; 
  vec3_t outPos; 
  tmat43_t<vec3_t> outTagMat; 
  vec4_t quat; 
  vec3_t center; 
  tmat33_t<vec3_t> axes; 
  tmat33_t<vec3_t> out; 
  tmat43_t<vec3_t> v100; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  trace_t results; 

  if ( !G_Utils_DObjGetWorldTagMatrix(ent, tagName, &outTagMat) )
  {
    v8 = SL_ConvertToString(ent->classname);
    number = ent->s.number;
    v10 = v8;
    v11 = SL_ConvertToStringSafe(tagName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2F330, 842i64, v11, number, v10);
  }
  client = activator->client;
  if ( !client )
  {
    AnglesToAxis(&ent->r.currentAngles, &axis);
    v83 = ent->s.lerp.u.turret.gunAngles.v[1];
    LODWORD(angles.v[0]) = ent->s.lerp.u.anonymous.data[0];
    angles.v[2] = 0.0;
    angles.v[1] = v83;
    AnglesToAxis(&angles, &in1);
    MatrixMultiply(&in1, &axis, &out);
    v84 = outTagMat.m[0].v[0];
    *(tmat33_t<vec3_t> *)wp->forward.v = out;
    v85 = outTagMat.m[0].v[1];
    wp->gunForward.v[0] = v84;
    v86 = outTagMat.m[0].v[2];
    wp->gunForward.v[1] = v85;
    v87 = outTagMat.m[3].v[0];
    wp->gunForward.v[2] = v86;
    v88 = outTagMat.m[3].v[1];
    wp->muzzleTrace.v[0] = v87;
    wp->muzzleTrace.v[2] = outTagMat.m[3].v[2];
    wp->muzzleTrace.v[1] = v88;
    return;
  }
  G_Client_GetViewOrigin(&client->ps, &outOrigin);
  v13 = activator->client;
  Instance = GWeaponMap::GetInstance();
  IsThirdPersonMode = BG_IsThirdPersonMode(Instance, &v13->ps);
  v16 = activator->client;
  if ( IsThirdPersonMode )
  {
    angles.v[0] = v16->fGunPitch;
    fGunYaw = v16->fGunYaw;
    p_up = &wp->up;
    p_right = &wp->right;
    angles.v[1] = fGunYaw;
    angles.v[2] = 0.0;
    AngleVectors(&angles, &wp->forward, &wp->right, &wp->up);
  }
  else
  {
    v20 = GWeaponMap::GetInstance();
    if ( BG_IsUsingTurretViewarms(v20, &v16->ps) )
    {
      if ( !G_Utils_DObjGetWorldTagMatrix(ent, scr_const.tag_player, &outTagMat) )
      {
        v21 = SL_ConvertToString(ent->classname);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2F390, 843i64, (unsigned int)ent->s.number, v21);
      }
      v22 = outTagMat.m[0].v[1];
      v23 = outTagMat.m[3].v[0];
      v24 = outTagMat.m[3].v[1];
      v25 = outTagMat.m[3].v[2];
      wp->forward.v[0] = outTagMat.m[0].v[0];
      wp->forward.v[2] = outTagMat.m[0].v[2];
      v26 = outTagMat.m[1].v[0];
      wp->forward.v[1] = v22;
      v27 = outTagMat.m[1].v[1];
      p_right = &wp->right;
      wp->right.v[0] = v26;
      wp->right.v[2] = outTagMat.m[1].v[2];
      v28 = outTagMat.m[2].v[0];
      wp->right.v[1] = v27;
      v29 = outTagMat.m[2].v[1];
      p_up = &wp->up;
      wp->up.v[0] = v28;
      wp->up.v[2] = outTagMat.m[2].v[2];
      wp->up.v[1] = v29;
      outOrigin.v[0] = v23;
      outOrigin.v[1] = v24;
      outOrigin.v[2] = v25;
      goto LABEL_12;
    }
    handler = GHandler::getHandler();
    p_up = &wp->up;
    p_right = &wp->right;
    BG_GetPlayerViewDirection(&activator->client->ps, &wp->forward, &wp->right, &wp->up, handler, 0);
  }
  v23 = outOrigin.v[0];
  v24 = outOrigin.v[1];
  v25 = outOrigin.v[2];
LABEL_12:
  v31 = v24 - outTagMat.m[3].v[1];
  v32 = v23 - outTagMat.m[3].v[0];
  v33 = v25 - outTagMat.m[3].v[2];
  wp->gunForward.v[0] = wp->forward.v[0];
  wp->gunForward.v[1] = wp->forward.v[1];
  wp->gunForward.v[2] = wp->forward.v[2];
  v34 = fsqrt((float)((float)(v31 * v31) + (float)(v32 * v32)) + (float)(v33 * v33));
  wp->muzzleTrace.v[0] = (float)(v34 * wp->forward.v[0]) + v23;
  wp->muzzleTrace.v[1] = (float)(v34 * wp->forward.v[1]) + v24;
  wp->muzzleTrace.v[2] = (float)(v34 * wp->forward.v[2]) + v25;
  if ( wp->weapon.weaponIdx && BG_TurretSpawnsProjectileAtMuzzle(&wp->weapon, 0) )
  {
    TagForFiringMuzzle = BG_turretGetTagForFiringMuzzle(&ent->s, &wp->weapon);
    if ( G_Utils_DObjGetWorldTagMatrix(ent, TagForFiringMuzzle, &v100) )
    {
      v36 = v100.m[3].v[1];
      wp->muzzleTrace.v[0] = v100.m[3].v[0];
      wp->muzzleTrace.v[2] = v100.m[3].v[2];
      wp->muzzleTrace.v[1] = v36;
    }
    if ( BG_TurretUsesBulletCorrection(&wp->weapon, 0) )
    {
      v37 = DCONST_DVARMPSPFLT_g_turretCorrectionFocusDistance;
      v38 = 2047;
      if ( !DCONST_DVARMPSPFLT_g_turretCorrectionFocusDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_turretCorrectionFocusDistance") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      value = v37->current.value;
      v40 = BG_TurretMaxCorrectionAngle(&wp->weapon, 0);
      v41 = *(float *)&v40;
      G_Client_AdjustEyePosForRemoteTurretVehicle(&outOrigin, &activator->client->ps, &outPos, &wp->forward);
      *(float *)&v40 = value * wp->forward.v[1];
      *(double *)start.v = *(double *)outPos.v;
      v42 = (float)(value * wp->forward.v[0]) + outPos.v[0];
      v43 = value * wp->forward.v[2];
      start.v[2] = outPos.v[2];
      v44 = activator->client;
      end.v[1] = *(float *)&v40 + outPos.v[1];
      end.v[2] = v43 + outPos.v[2];
      end.v[0] = v42;
      if ( v44 )
      {
        remoteControlEnt = v44->ps.remoteControlEnt;
        if ( remoteControlEnt != 2047 )
          v38 = remoteControlEnt;
      }
      G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, v38, 41969969);
      v46 = LODWORD(end.v[0]);
      v47 = (float)((float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0]) - v100.m[3].v[0];
      v48 = (float)((float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2]) - v100.m[3].v[2];
      center.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
      center.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
      *(float *)&v46 = fsqrt((float)((float)(v47 * v47) + (float)((float)(center.v[1] - v100.m[3].v[1]) * (float)(center.v[1] - v100.m[3].v[1]))) + (float)(v48 * v48));
      _XMM3 = v46;
      __asm { vcmpless xmm0, xmm3, xmm9 }
      center.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
      __asm { vblendvps xmm0, xmm3, xmm7, xmm0 }
      v52 = 1.0 / *(float *)&_XMM0;
      v53 = (float)(1.0 / *(float *)&_XMM0) * v47;
      *(float *)&_XMM0 = (float)(1.0 / *(float *)&_XMM0) * (float)(center.v[1] - v100.m[3].v[1]);
      *(float *)&_XMM3 = v52 * v48;
      *(float *)&v46 = *(float *)&_XMM0 * wp->forward.v[1];
      vec2.m[0].v[1] = *(float *)&_XMM0;
      *(float *)&_XMM0 = v53 * wp->forward.v[0];
      vec2.m[0].v[0] = v53;
      v54 = (float)(v52 * v48) * wp->forward.v[2];
      vec2.m[0].v[2] = *(float *)&_XMM3;
      v55 = acosf_0((float)(*(float *)&v46 + *(float *)&_XMM0) + v54) * 57.295776;
      if ( COERCE_FLOAT(LODWORD(v55) & _xmm) > 0.001 && COERCE_FLOAT(LODWORD(v55) & _xmm) <= 90.0 )
      {
        if ( v55 > v41 )
        {
          CalcRotationQuatFromVectors(&wp->forward, vec2.m, &quat);
          QuatSlerp(&quat_identity, &quat, v41 / v55, &result);
          QuatTransform(&result, &wp->forward, vec2.m);
          v56 = LODWORD(vec2.m[0].v[1]);
          *(float *)&v56 = fsqrt((float)((float)(*(float *)&v56 * *(float *)&v56) + (float)(vec2.m[0].v[0] * vec2.m[0].v[0])) + (float)(vec2.m[0].v[2] * vec2.m[0].v[2]));
          _XMM3 = v56;
          __asm
          {
            vcmpless xmm0, xmm3, xmm9
            vblendvps xmm0, xmm3, xmm7, xmm0
          }
          vec2.m[0].v[0] = vec2.m[0].v[0] * (float)(1.0 / *(float *)&_XMM0);
          vec2.m[0].v[2] = vec2.m[0].v[2] * (float)(1.0 / *(float *)&_XMM0);
          vec2.m[0].v[1] = vec2.m[0].v[1] * (float)(1.0 / *(float *)&_XMM0);
        }
        Vec3Cross(vec2.m, p_up, &vec2.m[1]);
        v60 = LODWORD(vec2.m[1].v[0]);
        *(float *)&v60 = fsqrt((float)((float)(*(float *)&v60 * *(float *)&v60) + (float)(vec2.m[1].v[1] * vec2.m[1].v[1])) + (float)(vec2.m[1].v[2] * vec2.m[1].v[2]));
        _XMM3 = v60;
        __asm
        {
          vcmpless xmm0, xmm3, xmm9
          vblendvps xmm0, xmm3, xmm7, xmm0
        }
        vec2.m[1].v[0] = vec2.m[1].v[0] * (float)(1.0 / *(float *)&_XMM0);
        vec2.m[1].v[2] = vec2.m[1].v[2] * (float)(1.0 / *(float *)&_XMM0);
        vec2.m[1].v[1] = vec2.m[1].v[1] * (float)(1.0 / *(float *)&_XMM0);
        Vec3Cross(&vec2.m[1], vec2.m, &vec2.m[2]);
        v64 = LODWORD(vec2.m[2].v[0]);
        *(float *)&v64 = fsqrt((float)((float)(*(float *)&v64 * *(float *)&v64) + (float)(vec2.m[2].v[1] * vec2.m[2].v[1])) + (float)(vec2.m[2].v[2] * vec2.m[2].v[2]));
        _XMM3 = v64;
        __asm
        {
          vcmpless xmm0, xmm3, xmm9
          vblendvps xmm0, xmm3, xmm7, xmm0
        }
        vec2.m[2].v[0] = vec2.m[2].v[0] * (float)(1.0 / *(float *)&_XMM0);
        vec2.m[2].v[2] = vec2.m[2].v[2] * (float)(1.0 / *(float *)&_XMM0);
        vec2.m[2].v[1] = vec2.m[2].v[1] * (float)(1.0 / *(float *)&_XMM0);
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_g_turretBulletCorrectionDebug, "g_turretBulletCorrectionDebug") )
        {
          v68 = wp->forward.v[0];
          v69 = p_right->v[1];
          v70 = wp->forward.v[1];
          v71 = wp->forward.v[2];
          axes.m[1].v[0] = p_right->v[0];
          v72 = p_right->v[2];
          axes.m[1].v[1] = v69;
          v73 = p_up->v[0];
          axes.m[1].v[2] = v72;
          v74 = p_up->v[1];
          axes.m[2].v[0] = v73;
          v75 = p_up->v[2];
          axes.m[0].v[0] = v68;
          axes.m[2].v[1] = v74;
          axes.m[2].v[2] = v75;
          quat.v[0] = (float)(v68 * 5.0) + start.v[0];
          quat.v[2] = (float)(v71 * 5.0) + start.v[2];
          axes.m[0].v[1] = v70;
          axes.m[0].v[2] = v71;
          quat.v[1] = (float)(v70 * 5.0) + start.v[1];
          G_DebugAxis(&axes, (const vec3_t *)&quat, 4.0, 0, 100);
          G_DebugAxis(&vec2, (const vec3_t *)&quat, 4.0, 0, 100);
          G_DebugSphere(&center, 3.0, &colorBlue, 0, 100);
          G_DebugLineWithDuration(&start, &center, &colorBlue, 0, 100);
        }
        v76 = vec2.m[0].v[1];
        wp->forward.v[0] = vec2.m[0].v[0];
        v77 = vec2.m[0].v[2];
        wp->forward.v[1] = v76;
        v78 = vec2.m[1].v[0];
        wp->forward.v[2] = v77;
        v79 = vec2.m[1].v[1];
        p_right->v[0] = v78;
        v80 = vec2.m[1].v[2];
        p_right->v[1] = v79;
        v81 = vec2.m[2].v[0];
        p_right->v[2] = v80;
        v82 = vec2.m[2].v[1];
        p_up->v[0] = v81;
        p_up->v[2] = vec2.m[2].v[2];
        p_up->v[1] = v82;
      }
    }
  }
}

/*
==============
G_Turret_FindBestTarget
==============
*/
gentity_s *G_Turret_FindBestTarget(gentity_s *self, vec3_t *out_targetOffset)
{
  GTurret *Turret; 
  gentity_s *v5; 
  gentity_s *v6; 
  sentient_s *sentient; 
  GTurret *v8; 
  int *v9; 
  bool v10; 
  const bitarray<224> *AllCombatTeamFlags; 
  unsigned int v12; 
  __int64 v13; 
  sentient_s *v14; 
  sentient_s *v15; 
  gentity_s *ent; 
  sentient_s *v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float distSqr; 
  vec3_t targetOffset; 
  bitarray<224> result; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2677, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( (Turret->m_data.flags & 8) != 0 && self->s.otherEntityNum == 2047 )
  {
    Com_PrintWarning(17, "WARNING: Sentry turret %i has no owner ent set but is running its think/targeting sequence. must be set from script first through setSentryOwner()\n", (unsigned int)self->s.number);
LABEL_7:
    *(_QWORD *)out_targetOffset->v = 0i64;
    v5 = NULL;
    out_targetOffset->v[2] = 0.0;
    return v5;
  }
  if ( !Turret->FindBestTarget_ValidateTeam(Turret) )
  {
    Com_PrintWarning(17, "WARNING: Sentry turret %i has an invalid team set, it will not be able to target anyone when neutral. Must call setTurretTeam() from script\n", (unsigned int)self->s.number);
    goto LABEL_7;
  }
  v6 = NULL;
  if ( (Turret->m_data.flags & 0x20) != 0 && EntHandle::isDefined(&Turret->m_data.target) && Turret->FindBestTarget_ValidateTargetEnt(Turret) )
  {
    v6 = EntHandle::ent(&Turret->m_data.target);
    targetOffset = Turret->m_data.targetOffset;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2706, ASSERT_TYPE_ASSERT, "( oldTarget )", (const char *)&queryFormat, "oldTarget") )
      __debugbreak();
    sentient = v6->sentient;
    if ( sentient && sentient->bIgnoreMe )
    {
      v6 = NULL;
    }
    else if ( G_Turret_IsTargetVisible(self, v6, &targetOffset, &distSqr) )
    {
      if ( level.time <= Turret->m_data.targetTime + 4000 )
      {
LABEL_50:
        v22 = targetOffset.v[1];
        out_targetOffset->v[0] = targetOffset.v[0];
        out_targetOffset->v[2] = targetOffset.v[2];
        out_targetOffset->v[1] = v22;
        return v6;
      }
    }
    else
    {
      v6 = NULL;
    }
  }
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2642, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  v8 = GTurret::GetTurret(&self->turretHandle);
  v9 = (int *)v8;
  if ( level.teammode == TEAMMODE_FFA )
  {
    v10 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
    *(_OWORD *)result.array = *(_OWORD *)AllCombatTeamFlags->array;
    *(_QWORD *)&result.array[4] = *(_QWORD *)&AllCombatTeamFlags->array[4];
    v12 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
    if ( v10 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v12 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, v8->m_data.eTeam);
  }
  v13 = v9[31];
  if ( (int)v13 <= -1 )
    v14 = Sentient_FirstSentient(&result);
  else
    v14 = Sentient_NextSentient(&level.sentients[v13], &result);
  v15 = v14;
  if ( !v14 )
    goto LABEL_49;
  do
  {
    if ( (*(unsigned __int8 (__fastcall **)(int *, gentity_s *, sentient_s *))(*(_QWORD *)v9 + 56i64))(v9, self, v15) )
      break;
    v15 = Sentient_NextSentient(v15, &result);
  }
  while ( v15 );
  if ( !v15 )
  {
LABEL_49:
    v9[31] = -1;
    goto LABEL_50;
  }
  v9[31] = v15 - level.sentients;
  ent = v15->ent;
  if ( !ent )
    goto LABEL_50;
  v17 = ent->sentient;
  if ( v17 )
  {
    if ( v17->bIgnoreMe )
      goto LABEL_50;
  }
  if ( !G_Turret_IsTargetVisible(self, ent, &vec3_origin, &distSqr) )
    goto LABEL_50;
  if ( v6 )
  {
    v18 = (float)(targetOffset.v[0] + v6->r.currentOrigin.v[0]) - self->r.currentOrigin.v[0];
    v19 = targetOffset.v[1];
    v20 = targetOffset.v[2];
    v21 = (float)(targetOffset.v[2] + v6->r.currentOrigin.v[2]) - self->r.currentOrigin.v[2];
    if ( distSqr >= (float)((float)((float)((float)((float)(targetOffset.v[1] + v6->r.currentOrigin.v[1]) - self->r.currentOrigin.v[1]) * (float)((float)(targetOffset.v[1] + v6->r.currentOrigin.v[1]) - self->r.currentOrigin.v[1])) + (float)(v18 * v18)) + (float)(v21 * v21)) )
    {
      out_targetOffset->v[0] = targetOffset.v[0];
      out_targetOffset->v[1] = v19;
      out_targetOffset->v[2] = v20;
      return v6;
    }
    else
    {
      *(_QWORD *)out_targetOffset->v = 0i64;
      v5 = ent;
      out_targetOffset->v[2] = 0.0;
    }
  }
  else
  {
    *(_QWORD *)out_targetOffset->v = 0i64;
    v5 = ent;
    out_targetOffset->v[2] = 0.0;
  }
  return v5;
}

/*
==============
G_Turret_FireLead
==============
*/
void G_Turret_FireLead(gentity_s *ent, gentity_s *activator, const int lockStrength, const int gameTime, const BgWeaponParms *const wp)
{
  GTurret *Turret; 
  gentity_s *v9; 
  GTurret *v10; 
  const gentity_s *v11; 
  double v12; 
  gentity_s *v13; 
  float v14; 
  int number; 
  float v16; 
  bool isAlternate; 
  int v18; 
  unsigned int v19; 
  scrContext_t *v20; 
  BgMissileFireParms fireParms; 

  if ( !activator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 584, ASSERT_TYPE_ASSERT, "( activator )", (const char *)&queryFormat, "activator") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 585, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 586, ASSERT_TYPE_ASSERT, "( wp )", (const char *)&queryFormat, "wp") )
    __debugbreak();
  Profile_Begin(298);
  Turret = GTurret::GetTurret(&ent->turretHandle);
  v9 = ent;
  v10 = Turret;
  if ( activator != &g_entities[2047] )
    v9 = activator;
  Turret->m_data.flags &= ~0x10000u;
  v11 = NULL;
  if ( BG_GetWeaponType(&wp->weapon, wp->isAlternate) == WEAPTYPE_BULLET )
  {
    v12 = ((double (__fastcall *)(GTurret *, gentity_s *))v10->FireLead_GetSpread)(v10, activator);
    G_Bullet_Fire(v9, *(float *)&v12, wp, ent, WEAPON_HAND_DEFAULT, gameTime);
  }
  else
  {
    if ( BG_GetWeaponType(&wp->weapon, wp->isAlternate) == WEAPTYPE_GRENADE )
    {
      v11 = G_Weapon_GrenadeLauncher_Fire(ent, &wp->weapon, WEAPON_HAND_DEFAULT, gameTime, wp);
      goto LABEL_26;
    }
    memset(&fireParms, 0, sizeof(fireParms));
    fireParms.lockon = (v10->m_data.flags & 0x8000000) != 0;
    if ( EntHandle::isDefined(&v10->m_data.target) )
    {
      v13 = EntHandle::ent(&v10->m_data.target);
      v14 = v10->m_data.targetOffset.v[1];
      number = v13->s.number;
      fireParms.targetPosOrOffset.v[0] = v10->m_data.targetOffset.v[0];
      v16 = v10->m_data.targetOffset.v[2];
      fireParms.targetEntNum = number;
    }
    else
    {
      v14 = v10->m_data.targetPos.v[1];
      fireParms.targetPosOrOffset.v[0] = v10->m_data.targetPos.v[0];
      v16 = v10->m_data.targetPos.v[2];
    }
    fireParms.targetPosOrOffset.v[2] = v16;
    fireParms.targetPosOrOffset.v[1] = v14;
    if ( lockStrength + 13 > 19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 625, ASSERT_TYPE_ASSERT, "( TR_FIRST_TRACK_LOCK + lockStrength - 1 <= TR_TRACK_FULL_LOCK )", (const char *)&queryFormat, "TR_FIRST_TRACK_LOCK + lockStrength - 1 <= TR_TRACK_FULL_LOCK") )
      __debugbreak();
    isAlternate = wp->isAlternate;
    if ( lockStrength > 0 )
      LODWORD(v11) = lockStrength + 13;
    fireParms.trackingTrajectory = (int)v11;
    v11 = G_Weapon_RocketLauncher_Fire(ent, &wp->weapon, isAlternate, WEAPON_HAND_DEFAULT, 0.0, wp, &vec3_origin, gameTime, &fireParms, 0);
  }
  G_Turret_ApplyKickBackOnFire(ent, &wp->weapon, wp);
LABEL_26:
  if ( G_Utils_IsClientOrActor(activator) )
  {
    v18 = v9->s.number;
    v19 = 90;
  }
  else
  {
    v19 = 91;
    v18 = BYTE2(v10->m_data.flags) & 1;
  }
  G_Utils_AddEvent(ent, v19, v18);
  if ( v11 )
  {
    GScr_AddEntity(v11);
  }
  else
  {
    v20 = ScriptContext_Server();
    Scr_AddUndefined(v20);
  }
  GScr_Notify(ent, scr_const.turret_fire, 1u);
  Profile_EndInternal(NULL);
}

/*
==============
G_Turret_GetAimAngleAndPosition_Internal
==============
*/
char G_Turret_GetAimAngleAndPosition_Internal(const gentity_s *self, const vec3_t *vPoint, vec3_t *out_sourcePosition, vec2_t *out_localAngles, bool doClampToAimCone)
{
  float v9; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  double ADSDamageRangeScale; 
  GTurret *Turret; 
  unsigned int v14; 
  GTurret *v15; 
  __int64 v16; 
  __int64 v17; 
  bool v18; 
  float *v19; 
  float v20; 
  float v21; 
  double v22; 
  float v23; 
  float *maxDamageRange; 
  __int64 v26; 
  float minDamageRange; 
  float v28; 
  vec3_t out; 
  vec3_t angles; 
  tmat43_t<vec3_t> axis; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1998, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !G_Utils_DObjGetWorldTagPos(self, scr_const.tag_aim, out_sourcePosition) )
    return 0;
  AnglesToAxis(&self->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
  v9 = out_sourcePosition->v[1];
  axis.m[3].v[0] = out_sourcePosition->v[0];
  axis.m[3].v[2] = out_sourcePosition->v[2];
  axis.m[3].v[1] = v9;
  MatrixTransposeTransformVector43(vPoint, &axis, &out);
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  if ( !BG_GetMinDamage(WEAP_DMG_CALC_TYPE_DEFAULT, WeaponForEntity, 0) )
  {
    ADSDamageRangeScale = BG_GetADSDamageRangeScale(NULL, NULL, WeaponForEntity, 0);
    BG_GetDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, WeaponForEntity, 0, *(float *)&ADSDamageRangeScale, &minDamageRange, &v28);
    if ( (float)((float)((float)(out.v[0] * out.v[0]) + (float)(out.v[1] * out.v[1])) + (float)(out.v[2] * out.v[2])) >= (float)(minDamageRange * minDamageRange) )
      return 0;
  }
  vectosignedangles(&out, &angles);
  Turret = GTurret::GetTurret(&self->turretHandle);
  v14 = 0;
  v15 = Turret;
  v16 = 0i64;
  v17 = (char *)&Turret->m_data.arcmax - (char *)&angles;
  v18 = 1;
  do
  {
    if ( !v18 )
    {
      LODWORD(v26) = 2;
      LODWORD(maxDamageRange) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v26) )
        __debugbreak();
    }
    if ( v14 >= 3 )
    {
      LODWORD(v26) = 3;
      LODWORD(maxDamageRange) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v26) )
        __debugbreak();
    }
    v19 = &angles.v[v16];
    if ( *(float *)((char *)&angles.v[v16] + v17) < angles.v[v16] )
      goto LABEL_22;
    if ( v14 >= 2 )
    {
      LODWORD(v26) = 2;
      LODWORD(maxDamageRange) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v26) )
        __debugbreak();
    }
    if ( v14 >= 3 )
    {
      LODWORD(v26) = 3;
      LODWORD(maxDamageRange) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v26) )
        __debugbreak();
    }
    if ( v15->m_data.arcmin.v[v16] > *v19 )
    {
LABEL_22:
      if ( !doClampToAimCone )
        return 0;
      if ( v14 >= 2 )
      {
        LODWORD(v26) = 2;
        LODWORD(maxDamageRange) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v26) )
          __debugbreak();
      }
      v20 = *(float *)((char *)v19 + v17);
      if ( v14 >= 2 )
      {
        LODWORD(v26) = 2;
        LODWORD(maxDamageRange) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v26) )
          __debugbreak();
      }
      v21 = v15->m_data.arcmin.v[v16];
      if ( v14 >= 3 )
      {
        LODWORD(v26) = 3;
        LODWORD(maxDamageRange) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v26) )
          __debugbreak();
      }
      v22 = I_fclamp(*v19, v21, v20);
      if ( v14 >= 3 )
      {
        LODWORD(v26) = 3;
        LODWORD(maxDamageRange) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v26) )
          __debugbreak();
      }
      *v19 = *(float *)&v22;
    }
    ++v14;
    ++v16;
    v18 = v14 < 2;
  }
  while ( (int)v14 < 2 );
  v23 = angles.v[1];
  out_localAngles->v[0] = angles.v[0];
  out_localAngles->v[1] = v23;
  return 1;
}

/*
==============
G_Turret_GetBarrelSpinRate
==============
*/
float G_Turret_GetBarrelSpinRate(gentity_s *self)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3346, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  return GTurret::GetTurret(&self->turretHandle)->m_data.barrelRollRate;
}

/*
==============
G_Turret_GetCommonSaveFields
==============
*/
const saveField_t *G_Turret_GetCommonSaveFields()
{
  return s_turret_fields;
}

/*
==============
G_Turret_IsBehind
==============
*/
_BOOL8 G_Turret_IsBehind(const gentity_s *self, const gentity_s *other)
{
  GTurret *Turret; 
  float v5; 
  float v6; 
  float v7; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  float v18; 
  float v19; 
  __int128 v20; 
  vec3_t forward; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3109, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3110, ASSERT_TYPE_ASSERT, "( other )", (const char *)&queryFormat, "other") )
    __debugbreak();
  if ( !G_Utils_IsClientOrActorOrAgent(other) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3111, ASSERT_TYPE_ASSERT, "( G_Utils_IsClientOrActorOrAgent( other ) )", (const char *)&queryFormat, "G_Utils_IsClientOrActorOrAgent( other )") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  v5 = Turret->m_data.arcmin.v[1];
  v6 = (float)(COERCE_FLOAT(LODWORD(Turret->m_data.arcmax.v[1]) & _xmm) + COERCE_FLOAT(LODWORD(v5) & _xmm)) * 0.5;
  v7 = (float)((float)(v5 + self->r.currentAngles.v[1]) + v6) * 0.0027777778;
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm2, 1 }
  YawVectors((float)(v7 - *(float *)&_XMM4) * 360.0, &forward, NULL);
  v10 = LODWORD(forward.v[0]);
  *(float *)&v10 = (float)(*(float *)&v10 * *(float *)&v10) + (float)(forward.v[1] * forward.v[1]);
  v11 = v10;
  v13 = LODWORD(self->r.currentOrigin.v[1]);
  *(float *)&v13 = self->r.currentOrigin.v[1] - other->r.currentOrigin.v[1];
  v12 = v13;
  v14 = v11;
  *(float *)&v14 = fsqrt(*(float *)&v11 + (float)(forward.v[2] * forward.v[2]));
  _XMM4 = v14;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm9, xmm0
  }
  v18 = 1.0 / *(float *)&_XMM0;
  v19 = self->r.currentOrigin.v[0] - other->r.currentOrigin.v[0];
  v20 = v12;
  *(float *)&v20 = fsqrt((float)(*(float *)&v12 * *(float *)&v12) + (float)(v19 * v19));
  _XMM3 = v20;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
  }
  return (float)(acosf_0((float)((float)(forward.v[1] * v18) * (float)((float)(1.0 / *(float *)&_XMM0) * *(float *)&v12)) + (float)((float)(forward.v[0] * v18) * (float)((float)(1.0 / *(float *)&_XMM0) * v19))) * 57.295776) <= v6;
}

/*
==============
G_Turret_IsFiring
==============
*/
bool G_Turret_IsFiring(gentity_s *self)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1853, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  return GTurret::GetTurret(&self->turretHandle)->m_data.state != IDLE;
}

/*
==============
G_Turret_IsMountedOnVehicle
==============
*/
bool G_Turret_IsMountedOnVehicle(const gentity_s *turretEnt)
{
  EntityTagInfo *tagInfo; 
  gentity_s *parent; 
  bool result; 

  if ( !turretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3801, ASSERT_TYPE_ASSERT, "(turretEnt)", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  tagInfo = turretEnt->tagInfo;
  result = 0;
  if ( tagInfo )
  {
    parent = tagInfo->parent;
    if ( parent )
    {
      if ( parent->s.eType == ET_VEHICLE && parent->vehicle )
        return 1;
    }
  }
  return result;
}

/*
==============
G_Turret_IsTargetVisible
==============
*/
char G_Turret_IsTargetVisible(gentity_s *self, const gentity_s *target, const vec3_t *targetOffset, float *distSqr)
{
  GTurret *Turret; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  vec3_t out_targetPosition; 
  vec3_t out_sourcePosition; 
  vec2_t out_localAngles; 

  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2592, ASSERT_TYPE_ASSERT, "( target )", (const char *)&queryFormat, "target") )
    __debugbreak();
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2593, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( !Turret->IsTargetVisibleStateChecks(Turret, target) )
    return 0;
  v9 = target->r.currentOrigin.v[1] + targetOffset->v[1];
  v10 = target->r.currentOrigin.v[2] + targetOffset->v[2];
  v11 = v9 - self->r.currentOrigin.v[1];
  out_targetPosition.v[0] = target->r.currentOrigin.v[0] + targetOffset->v[0];
  v12 = out_targetPosition.v[0] - self->r.currentOrigin.v[0];
  out_targetPosition.v[2] = v10;
  out_targetPosition.v[1] = v9;
  v13 = (float)((float)(v11 * v11) + (float)(v12 * v12)) + (float)((float)(v10 - self->r.currentOrigin.v[2]) * (float)(v10 - self->r.currentOrigin.v[2]));
  if ( v13 >= Turret->m_data.maxRangeSquared )
    return 0;
  if ( !target->sentient )
  {
    if ( G_Turret_GetAimAngleAndPosition_Internal(self, &out_targetPosition, &out_sourcePosition, &out_localAngles, 0) )
    {
      v14 = target->r.currentOrigin.v[1];
      out_targetPosition.v[0] = targetOffset->v[0] + target->r.currentOrigin.v[0];
      v15 = target->r.currentOrigin.v[2];
      goto LABEL_14;
    }
    return 0;
  }
  if ( !G_Turret_CanTargetSentient(self, target, targetOffset, &out_targetPosition, &out_sourcePosition, &out_localAngles) )
    return 0;
  Turret->GetTargetEyePosition(Turret, target, &out_targetPosition);
  v14 = out_targetPosition.v[1];
  out_targetPosition.v[0] = out_targetPosition.v[0] + targetOffset->v[0];
  v15 = out_targetPosition.v[2];
LABEL_14:
  v16 = v14 + targetOffset->v[1];
  out_targetPosition.v[2] = v15 + targetOffset->v[2];
  out_targetPosition.v[1] = v16;
  if ( Turret->IsTargetTooCloseToPlayer(Turret, &out_sourcePosition, target, targetOffset) || !G_Turret_SightTrace(&out_sourcePosition, &out_targetPosition, self->s.number, target->s.number) )
    return 0;
  if ( distSqr )
    *distSqr = v13;
  return 1;
}

/*
==============
G_Turret_IsUsable
==============
*/
bool G_Turret_IsUsable(const gentity_s *self, const gentity_s *owner)
{
  GTurret *Turret; 
  __int16 otherEntityNum; 
  const playerState_s *EntityPlayerStateConst; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3190, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3191, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !G_Turret_CanUse(self, owner) )
    return 0;
  if ( (self->flags.m_flags[0] & 0x20000000) == 0 )
    return 0;
  if ( (float)(self->r.currentOrigin.v[2] + 16.0) < owner->r.currentOrigin.v[2] )
    return 0;
  if ( !G_Turret_IsBehind(self, owner) )
    return 0;
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( (Turret->m_data.flags & 8) != 0 && Turret->RestrictUsageToOwner(Turret) )
  {
    otherEntityNum = self->s.otherEntityNum;
    if ( otherEntityNum == 2047 || otherEntityNum != owner->s.number )
      return 0;
  }
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(owner);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3211, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return !EntityPlayerStateConst->grenadeTimeLeft && EntityPlayerStateConst->groundEntityNum != 2047 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->otherFlags, ACTIVE, 0xBu);
}

/*
==============
G_Turret_PlayerPositionAndBlend
==============
*/
void G_Turret_PlayerPositionAndBlend(gentity_s *playerEnt, gentity_s *turretEnt)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int64 v9; 
  unsigned int number; 
  __int64 v11; 
  characterInfo_t *v12; 
  unsigned int Animset; 
  unsigned int animationNumber; 
  GWeaponMap *v15; 
  const Weapon *WeaponForEntity; 
  const PlayerAnimEntry *animation; 
  const BgAnimStatic *v18; 
  const Weapon *v19; 
  bool v20; 
  const XAnim_s *Anims; 
  int XAnimIndex; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  unsigned int v24; 
  float transWeight; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  int NumChildren; 
  float v45; 
  float v46; 
  const char *AnimDebugName; 
  int v48; 
  unsigned int ChildAt; 
  int v50; 
  const char *v51; 
  __int128 v53; 
  float v55; 
  float v56; 
  float v57; 
  unsigned int v58; 
  unsigned int v59; 
  unsigned int v60; 
  unsigned int v61; 
  unsigned int v62; 
  double v63; 
  float v64; 
  float v65; 
  gclient_s *v66; 
  vec3_t *p_viewangles; 
  float v68; 
  float v69; 
  float v70; 
  gclient_s *v71; 
  const SuitDef *SuitDef; 
  float v73; 
  float v74; 
  int ProneViewHeight; 
  int v76; 
  float v77; 
  GHandler *v78; 
  gclient_s *v79; 
  float v80; 
  gclient_s *client; 
  float v82; 
  float v83; 
  GHandler *Handler; 
  gclient_s *v85; 
  const BgHandler *v86; 
  GWeaponMap *Instance; 
  gclient_s *v88; 
  void *objID; 
  int childIndex; 
  unsigned int animIndex; 
  unsigned int v92; 
  unsigned int v93; 
  const WeaponDef *v94; 
  DObj *obj; 
  XAnimTree *tree; 
  DObjAnimMat *LocalTagMatrix; 
  GWeaponMap *weaponMap; 
  vec3_t trans; 
  vec3_t end; 
  vec3_t angles; 
  vec3_t start; 
  vec4_t rot; 
  tmat33_t<vec3_t> vec; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v108; 
  tmat33_t<vec3_t> in1; 
  trace_t results; 
  __int128 v111; 
  __int128 v112; 
  __int128 v113; 
  __int128 v114; 
  __int128 v115; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    v80 = turretEnt->r.currentAngles.v[1] + turretEnt->s.lerp.u.turret.gunAngles.v[1];
    angles.v[0] = turretEnt->r.currentAngles.v[0] + turretEnt->s.lerp.u.turret.gunAngles.v[0];
    angles.v[2] = turretEnt->r.currentAngles.v[2];
    angles.v[1] = v80;
    AngleVectors(&angles, &end, NULL, NULL);
    client = playerEnt->client;
    v82 = playerEnt->r.currentOrigin.v[2];
    v83 = turretEnt->r.currentOrigin.v[0] - (float)(34.0 * end.v[0]);
    client->ps.origin.v[1] = turretEnt->r.currentOrigin.v[1] - (float)(34.0 * end.v[1]);
    client->ps.origin.v[0] = v83;
    client->ps.origin.v[2] = v82;
    Handler = GHandler::getHandler();
    v85 = playerEnt->client;
    v86 = Handler;
    Instance = GWeaponMap::GetInstance();
    BG_PlayerStateToEntityState(Instance, &v85->ps, &playerEnt->s, 1, v86);
    v88 = playerEnt->client;
    playerEnt->r.currentOrigin.v[0] = v88->ps.origin.v[0];
    playerEnt->r.currentOrigin.v[1] = v88->ps.origin.v[1];
    playerEnt->r.currentOrigin.v[2] = v88->ps.origin.v[2];
    SV_LinkEntity(playerEnt);
    return;
  }
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v9 = *(_QWORD *)&GStatic::ms_gameStatics;
  number = playerEnt->s.number;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(objID) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 928, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", objID, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 224i64))(v9, number);
  v12 = (characterInfo_t *)v11;
  if ( (!v11 || !*(_DWORD *)(v11 + 4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 931, ASSERT_TYPE_ASSERT, "( ci && ci->infoValid )", (const char *)&queryFormat, "ci && ci->infoValid") )
    __debugbreak();
  obj = Com_GetServerDObjForEnt(playerEnt);
  if ( obj )
  {
    if ( PlayerASM_IsEnabled() )
    {
      Animset = BG_PlayerASM_GetAnimset(v12);
      animationNumber = v12->legs.animationNumber;
      if ( !animationNumber || !BG_PlayerASM_IsTurretAlias(animationNumber, Animset) )
      {
        v15 = GWeaponMap::GetInstance();
        WeaponForEntity = BG_GetWeaponForEntity(v15, &turretEnt->s);
        G_HandlePositionAndBlendForIKTurret(playerEnt, v12, turretEnt, WeaponForEntity);
        return;
      }
    }
    else
    {
      if ( !v12->legs.animationNumber )
        return;
      animation = v12->legs.animation;
      if ( !animation || (animation->flags & 4) == 0 )
        return;
    }
    v18 = (const BgAnimStatic *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 958, ASSERT_TYPE_ASSERT, "( bgameAnim )", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    weaponMap = GWeaponMap::GetInstance();
    v19 = BG_GetWeaponForEntity(weaponMap, &turretEnt->s);
    if ( !G_HandlePositionAndBlendForIKTurret(playerEnt, v12, turretEnt, v19) )
    {
      LocalTagMatrix = G_Utils_DObjGetLocalTagMatrix(turretEnt, scr_const.tag_weapon);
      if ( LocalTagMatrix )
      {
        v20 = v19->weaponIdx == 0;
        v115 = v2;
        v114 = v3;
        v113 = v4;
        v112 = v5;
        v111 = v6;
        if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 976, ASSERT_TYPE_ASSERT, "( r_turretWeapon.weaponIdx )", (const char *)&queryFormat, "r_turretWeapon.weaponIdx") )
          __debugbreak();
        v94 = BG_WeaponDef(v19, 0);
        if ( BG_GetWeaponClass(v19, 0) != WEAPCLASS_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 978, ASSERT_TYPE_ASSERT, "( BG_GetWeaponClass( r_turretWeapon, false ) == WEAPCLASS_TURRET )", (const char *)&queryFormat, "BG_GetWeaponClass( r_turretWeapon, false ) == WEAPCLASS_TURRET") )
          __debugbreak();
        if ( v94->fAnimHorRotateInc == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 979, ASSERT_TYPE_ASSERT, "( weapDef->fAnimHorRotateInc )", (const char *)&queryFormat, "weapDef->fAnimHorRotateInc") )
          __debugbreak();
        tree = v12->pXAnimTree;
        if ( PlayerASM_IsEnabled() )
        {
          Anims = BG_PlayerASM_GetAnims(v12->legs.animsetIndex);
          XAnimIndex = BG_PlayerASM_GetXAnimIndex(v12->legs.animsetIndex, v12->legs.animationNumber);
        }
        else
        {
          SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(v12);
          Anims = v18->animScriptData.animTree.anims;
          XAnimIndex = BG_AnimationMP_GetXAnimIndex(v18, SuitAnimIndexFromCharacter, v12->legs.animationNumber & 0xFFFFEFFF);
        }
        v24 = XAnimIndex;
        animIndex = XAnimIndex;
        if ( ((LODWORD(LocalTagMatrix->quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(LocalTagMatrix->quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(LocalTagMatrix->quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(LocalTagMatrix->quat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
          __debugbreak();
        if ( (LODWORD(LocalTagMatrix->transWeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
          __debugbreak();
        transWeight = LocalTagMatrix->transWeight;
        v26 = transWeight * LocalTagMatrix->quat.v[0];
        v27 = LocalTagMatrix->quat.v[1];
        v28 = LocalTagMatrix->quat.v[2];
        v29 = v26 * LocalTagMatrix->quat.v[0];
        v30 = v27 * transWeight;
        v31 = v28 * transWeight;
        v32 = LocalTagMatrix->quat.v[3];
        v33 = v27 * v30;
        v34 = v28 * v30;
        v35 = v32 * v30;
        vec.m[0].v[1] = (float)(v32 * v31) + (float)(v27 * v26);
        vec.m[1].v[0] = (float)(v27 * v26) - (float)(v32 * v31);
        vec.m[0].v[0] = 1.0 - (float)((float)(v28 * v31) + v33);
        vec.m[0].v[2] = (float)(v28 * v26) - v35;
        vec.m[1].v[1] = 1.0 - (float)((float)(v28 * v31) + v29);
        vec.m[2].v[0] = v35 + (float)(v28 * v26);
        vec.m[1].v[2] = v34 + (float)(v32 * v26);
        vec.m[2].v[2] = 1.0 - (float)(v33 + v29);
        vec.m[2].v[1] = v34 - (float)(v32 * v26);
        vectosignedyaw((const vec2_t *)&vec);
        v36 = 1.0 - (float)(v33 + v29);
        AnglesToAxis(&turretEnt->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
        v37 = turretEnt->r.currentOrigin.v[0];
        v38 = playerEnt->r.currentOrigin.v[1];
        v39 = playerEnt->r.currentOrigin.v[0];
        v40 = turretEnt->r.currentOrigin.v[2];
        axis.m[3].v[1] = turretEnt->r.currentOrigin.v[1];
        v41 = (float)(v39 - v37) * axis.m[2].v[0];
        v42 = playerEnt->r.currentOrigin.v[2];
        axis.m[3].v[0] = v37;
        axis.m[3].v[2] = v40;
        v43 = (float)((float)((float)((float)(v38 - axis.m[3].v[1]) * axis.m[2].v[1]) + v41) + (float)((float)(v42 - v40) * axis.m[2].v[2])) - LocalTagMatrix->trans.v[2];
        childIndex = 0;
        NumChildren = XAnimGetNumChildren(Anims, v24);
        v92 = 0;
        v45 = 0.0;
        v46 = 0.0;
        if ( !NumChildren )
        {
          AnimDebugName = XAnimGetAnimDebugName(Anims, v24);
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2FBB8, 844i64, AnimDebugName);
        }
        v48 = 0;
        do
        {
          ChildAt = XAnimGetChildAt(Anims, animIndex, NumChildren - v48 - 1);
          v50 = XAnimGetNumChildren(Anims, ChildAt);
          if ( !v50 )
          {
            v51 = XAnimGetAnimDebugName(Anims, ChildAt);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2FBB8, 845i64, v51);
          }
          v53 = 0i64;
          *(float *)&v53 = (float)(v50 - 1);
          _XMM2 = v53;
          if ( (float)((float)(v36 / v94->fAnimHorRotateInc) + (float)(*(float *)&v53 * 0.5)) >= 0.0 )
            __asm { vminss  xmm1, xmm2, xmm3 }
          else
            LODWORD(_XMM1) = 0;
          v55 = *(float *)&_XMM1 - (float)(int)*(float *)&_XMM1;
          v93 = XAnimGetChildAt(Anims, ChildAt, (int)*(float *)&_XMM1);
          XAnimGetAbsDelta(Anims, v93, &rot, &trans, 0.0);
          if ( v55 == 0.0 )
          {
            v56 = trans.v[2];
          }
          else
          {
            v92 = XAnimGetChildAt(Anims, ChildAt, (int)*(float *)&_XMM1 + 1);
            XAnimGetAbsDelta(Anims, v92, &rot, &angles, 0.0);
            trans.v[0] = (float)((float)(angles.v[0] - trans.v[0]) * v55) + trans.v[0];
            trans.v[1] = (float)((float)(angles.v[1] - trans.v[1]) * v55) + trans.v[1];
            v56 = trans.v[2] + (float)((float)(angles.v[2] - trans.v[2]) * v55);
            trans.v[2] = v56;
          }
          if ( v56 >= v43 )
            break;
          ++v48;
          childIndex = (int)*(float *)&_XMM1;
          v45 = v56;
          v46 = *(float *)&_XMM1 - (float)(int)*(float *)&_XMM1;
        }
        while ( v48 < NumChildren );
        XAnimClearTreeGoalWeightsStrict(tree, 0, XANIM_SUBTREE_DEFAULT, animIndex, 0.0, obj, LINEAR);
        XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v93, 1.0 - v55, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
        if ( v55 != 0.0 )
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v92, v55, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
        if ( !v48 || v48 == NumChildren )
        {
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, ChildAt, 1.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
          v59 = animIndex;
        }
        else
        {
          if ( (float)(trans.v[2] - v45) == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1068, ASSERT_TYPE_ASSERT, "( trans[2] - fPrevTransZ )", (const char *)&queryFormat, "trans[2] - fPrevTransZ") )
            __debugbreak();
          v57 = (float)(v43 - v45) / (float)(trans.v[2] - v45);
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, ChildAt, v57, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
          v58 = NumChildren - v48;
          v59 = animIndex;
          v60 = XAnimGetChildAt(Anims, animIndex, v58);
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v60, 1.0 - v57, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
          v61 = XAnimGetChildAt(Anims, v60, childIndex);
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v61, 1.0 - v46, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
          if ( v46 != 0.0 )
          {
            v62 = XAnimGetChildAt(Anims, v60, childIndex + 1);
            XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v62, v46, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
          }
        }
        XAnimCalcAbsDelta(obj, 0, XANIM_SUBTREE_DEFAULT, v59, &rot, &trans);
        VectorAngleMultiply((vec2_t *)&trans, v36);
        v108.m[3].v[0] = trans.v[0] + LocalTagMatrix->trans.v[0];
        v108.m[3].v[1] = trans.v[1] + LocalTagMatrix->trans.v[1];
        v108.m[3].v[2] = trans.v[2] + LocalTagMatrix->trans.v[2];
        QuatToAxis(&rot, &in1);
        v63 = vectoyaw((const vec2_t *)&in1);
        YawToAxis(*(float *)&v63 + v36, (tmat33_t<vec3_t> *)&v108);
        MatrixMultiply43(&v108, &axis, &out);
        v64 = out.m[3].v[2];
        v65 = out.m[3].v[0];
        playerEnt->r.currentOrigin.v[1] = out.m[3].v[1];
        playerEnt->r.currentOrigin.v[2] = v64;
        playerEnt->r.currentOrigin.v[0] = v65;
        v66 = playerEnt->client;
        v66->ps.origin.v[0] = v65;
        v66->ps.origin.v[1] = out.m[3].v[1];
        v66->ps.origin.v[2] = out.m[3].v[2];
        AxisToAngles((const tmat33_t<vec3_t> *)&out, &playerEnt->r.currentAngles);
        playerEnt->s.lerp.apos.trBase.v[0] = playerEnt->r.currentAngles.v[0];
        playerEnt->s.lerp.apos.trBase.v[1] = playerEnt->r.currentAngles.v[1];
        playerEnt->s.lerp.apos.trBase.v[2] = playerEnt->r.currentAngles.v[2];
        MatrixMultiply(&in1, &vec, (tmat33_t<vec3_t> *)&out);
        p_viewangles = &playerEnt->client->ps.viewangles;
        v68 = p_viewangles->v[0];
        v69 = playerEnt->client->ps.viewangles.v[1];
        v70 = playerEnt->client->ps.viewangles.v[2];
        AxisToAngles((const tmat33_t<vec3_t> *)&out, p_viewangles);
        v71 = playerEnt->client;
        *(_QWORD *)start.v = *(_QWORD *)v71->ps.origin.v;
        end = v71->ps.origin;
        SuitDef = BG_GetSuitDef(v71->ps.suitIndex);
        if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1120, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
          __debugbreak();
        if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
        {
          v73 = turretEnt->r.currentOrigin.v[2];
          v74 = v73 + 18.0;
        }
        else
        {
          ProneViewHeight = BG_Suit_GetProneViewHeight(SuitDef);
          v73 = turretEnt->r.currentOrigin.v[2];
          v74 = v73 - (float)ProneViewHeight;
        }
        v76 = playerEnt->s.number;
        start.v[2] = v74;
        end.v[2] = v73 - (float)SuitDef->viewheight_stand;
        G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, v76, 65553);
        if ( results.fraction < 1.0 )
        {
          v77 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
          playerEnt->r.currentOrigin.v[2] = v77;
          playerEnt->client->ps.origin.v[2] = v77;
        }
        v78 = GHandler::getHandler();
        BG_PlayerStateToEntityState(weaponMap, &playerEnt->client->ps, &playerEnt->s, 1, v78);
        v79 = playerEnt->client;
        v79->ps.viewangles.v[0] = v68;
        v79->ps.viewangles.v[1] = v69;
        v79->ps.viewangles.v[2] = v70;
        SV_LinkEntity(playerEnt);
      }
      else
      {
        Com_PrintWarning(17, "WARNING: aborting player positioning on turret since 'tag_weapon' does not exist\n");
      }
    }
  }
}

/*
==============
G_Turret_RestoreDefaultDropPitch
==============
*/
void G_Turret_RestoreDefaultDropPitch(gentity_s *self)
{
  GTurret *Turret; 
  DObjAnimMat *LocalTagMatrix; 
  DObjAnimMat *v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  int v9; 
  unsigned __int8 *priorityMap; 
  vec3_t in1; 
  vec3_t angles; 
  tmat33_t<vec3_t> v13; 
  vec3_t end; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 
  trace_t results; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1927, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  LocalTagMatrix = G_Utils_DObjGetLocalTagMatrix(self, scr_const.tag_aim);
  if ( LocalTagMatrix )
  {
    v4 = G_Utils_DObjGetLocalTagMatrix(self, scr_const.tag_butt);
    if ( v4 )
    {
      AnglesToAxis(&self->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
      v5 = self->r.currentOrigin.v[1];
      axis.m[3].v[0] = self->r.currentOrigin.v[0];
      axis.m[3].v[2] = self->r.currentOrigin.v[2];
      axis.m[3].v[1] = v5;
      v6 = v4->trans.v[0] - LocalTagMatrix->trans.v[0];
      v7 = v4->trans.v[2] - LocalTagMatrix->trans.v[2];
      v8 = v4->trans.v[1] - LocalTagMatrix->trans.v[1];
      MatrixTransformVector43(&LocalTagMatrix->trans, &axis, &out);
      v9 = 0;
      while ( 1 )
      {
        angles.v[0] = (float)v9 * -3.0;
        angles.v[1] = 0.0;
        angles.v[2] = 0.0;
        AnglesToAxis(&angles, &v13);
        in1.v[0] = (float)((float)(v8 * v13.m[1].v[0]) + (float)(v6 * v13.m[0].v[0])) + (float)(v7 * v13.m[2].v[0]);
        in1.v[1] = (float)((float)(v8 * v13.m[1].v[1]) + (float)(v6 * v13.m[0].v[1])) + (float)(v7 * v13.m[2].v[1]);
        in1.v[2] = (float)((float)(v8 * v13.m[1].v[2]) + (float)(v6 * v13.m[0].v[2])) + (float)(v7 * v13.m[2].v[2]);
        in1.v[0] = in1.v[0] + LocalTagMatrix->trans.v[0];
        in1.v[1] = in1.v[1] + LocalTagMatrix->trans.v[1];
        in1.v[2] = in1.v[2] + LocalTagMatrix->trans.v[2];
        MatrixTransformVector43(&in1, &axis, &end);
        priorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
        G_Main_LocationalTrace(&results, &out, &end, self->s.number, 8390673, priorityMap);
        if ( results.fraction < 1.0 )
          break;
        if ( ++v9 > 30 )
          return;
      }
      Turret->m_data.dropPitch = angles.v[0] + self->s.lerp.u.turret.gunAngles.v[0];
    }
  }
}

/*
==============
G_Turret_ScanForEnemies
==============
*/
void G_Turret_ScanForEnemies(gentity_s *self)
{
  GTurret *Turret; 
  GTurret *v3; 
  double FrameDurationInSeconds; 
  float v5; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v8; 
  double v9; 
  int flags; 
  __int128 v11; 
  __int128 packedColorB_Fov; 
  float v13; 
  __int128 v14; 
  __int128 scanSpeed_low; 
  __int128 v18; 
  float scanSpeed; 
  float v22; 
  float v23; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1608, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  v3 = Turret;
  if ( (Turret->m_data.flags & 0x4000000) != 0 )
  {
    G_Turret_ScanStop(&Turret->m_data);
    return;
  }
  FrameDurationInSeconds = G_Level_GetFrameDurationInSeconds();
  v5 = *(float *)&FrameDurationInSeconds;
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  v8 = BG_WeaponDef(WeaponForEntity, 0);
  if ( v8->scanSpeed <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1625, ASSERT_TYPE_ASSERT, "( weapDef->scanSpeed > 0.0f )", (const char *)&queryFormat, "weapDef->scanSpeed > 0.0f") )
    __debugbreak();
  if ( v8->scanAccel <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1626, ASSERT_TYPE_ASSERT, "( weapDef->scanAccel > 0.0f )", (const char *)&queryFormat, "weapDef->scanAccel > 0.0f") )
    __debugbreak();
  v9 = LinearTrackAngle(0.0, self->s.lerp.u.turret.gunAngles.v[0], v8->scanSpeed, *(float *)&FrameDurationInSeconds);
  self->s.lerp.u.turret.gunAngles.v[0] = *(float *)&v9;
  flags = v3->m_data.flags;
  if ( (flags & 0x100) != 0 )
  {
    packedColorB_Fov = self->s.lerp.u.primaryLight.packedColorB_Fov;
    *(float *)&packedColorB_Fov = self->s.lerp.u.turret.gunAngles.v[1] - v3->m_data.arcmin.v[1];
    v11 = packedColorB_Fov;
    v13 = FLOAT_N1_0;
  }
  else
  {
    v14 = LODWORD(v3->m_data.arcmax.v[1]);
    *(float *)&v14 = v3->m_data.arcmax.v[1] - self->s.lerp.u.turret.gunAngles.v[1];
    v11 = v14;
    v13 = FLOAT_1_0;
  }
  if ( (flags & 0x80u) == 0 )
  {
    if ( v8->scanSpeed <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1572, ASSERT_TYPE_ASSERT, "( weapDef->scanSpeed > 0.0f )", (const char *)&queryFormat, "weapDef->scanSpeed > 0.0f") )
      __debugbreak();
    if ( v8->scanAccel <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1573, ASSERT_TYPE_ASSERT, "( weapDef->scanAccel > 0.0f )", (const char *)&queryFormat, "weapDef->scanAccel > 0.0f") )
      __debugbreak();
    v3->m_data.flags |= 0x80u;
    v3->m_data.scanSpeed = 0.0;
    v3->m_data.scanPauseTime = level.time + v8->scanPauseTime;
    scanSpeed_low = LODWORD(v8->scanSpeed);
    *(float *)&scanSpeed_low = (float)(v8->scanSpeed * v8->scanSpeed) * (float)(0.5 / v8->scanAccel);
    _XMM4 = scanSpeed_low;
    v18 = v11;
    *(float *)&v18 = *(float *)&v11 * 0.5;
    _XMM3 = v18;
    __asm
    {
      vcmpltss xmm0, xmm3, xmm4
      vblendvps xmm0, xmm4, xmm3, xmm0
    }
    v3->m_data.scanDecelYaw = *(float *)&_XMM0;
  }
  if ( level.time >= v3->m_data.scanPauseTime )
  {
    scanSpeed = v3->m_data.scanSpeed;
    if ( *(float *)&v11 >= v3->m_data.scanDecelYaw )
    {
      v23 = (float)(v5 * v8->scanAccel) + scanSpeed;
      v3->m_data.scanSpeed = v23;
      v22 = v8->scanSpeed;
      if ( v23 < v22 )
        v22 = v23;
      else
        v3->m_data.scanSpeed = v22;
    }
    else
    {
      v22 = scanSpeed - (float)(v5 * v8->scanAccel);
      v3->m_data.scanSpeed = v22;
      if ( v22 <= 0.0 )
      {
        G_Turret_ScanStop(&v3->m_data);
        return;
      }
    }
    self->s.lerp.u.turret.gunAngles.v[1] = (float)((float)(v22 * v5) * v13) + self->s.lerp.u.turret.gunAngles.v[1];
  }
}

/*
==============
G_Turret_ScanStop
==============
*/
void G_Turret_ScanStop(GTurretData *turretData)
{
  if ( !turretData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1591, ASSERT_TYPE_ASSERT, "( turretData )", (const char *)&queryFormat, "turretData") )
    __debugbreak();
  turretData->flags = turretData->flags & 0xFFFFFF7F ^ 0x100;
  *(_QWORD *)&turretData->scanSpeed = 0i64;
  turretData->scanPauseTime = 0;
}

/*
==============
G_Turret_ScrRemoteUse
==============
*/
bool G_Turret_ScrRemoteUse(scrContext_t *scrContext, gentity_s *self, gentity_s *owner)
{
  return G_Turret_ScrUse(scrContext, self, owner, 1);
}

/*
==============
G_Turret_ScrSetSentryCarrier
==============
*/
void G_Turret_ScrSetSentryCarrier(gentity_s *self, const gentity_s *carrier)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3271, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( carrier )
    self->s.staticState.player.stowedWeaponHandle.m_mapEntryId = carrier->s.number;
  else
    self->s.staticState.player.stowedWeaponHandle.m_mapEntryId = 2047;
}

/*
==============
G_Turret_ScrShoot
==============
*/
void G_Turret_ScrShoot(gentity_s *self, const scr_string_t tagName, int lockStrength)
{
  GTurret *Turret; 
  gentity_s *v7; 
  bool v8; 
  BgWeaponParms params; 

  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( EntHandle::isDefined(&self->r.ownerNum) )
    v7 = EntHandle::ent(&self->r.ownerNum);
  else
    v7 = g_entities + 2047;
  v8 = !v7->client && (Turret->m_data.flags & 0x20) != 0;
  G_Turret_SetupFireParams(self, v7, tagName, &params);
  if ( v8 )
    Turret->FireLead_UpdateAccuracy(Turret, self, &params);
  G_Turret_Shoot_internal(self, v7, lockStrength, level.time, &params);
}

/*
==============
G_Turret_ScrSnapToTarget
==============
*/
void G_Turret_ScrSnapToTarget(scrContext_t *scrContext, gentity_s *self)
{
  GTurret *Turret; 
  const gentity_s *v6; 
  unsigned int v7; 
  float *p_number; 
  GTurret *v9; 
  float v10; 
  unsigned int v11; 
  DObjPartBits *p_partBits; 
  DObj *ServerDObjForEnt; 
  unsigned __int8 v15; 
  unsigned __int64 v16; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t vPoint; 
  vec3_t out_sourcePosition; 
  vec2_t out_localAngles; 
  DObjPartBits partBits; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2530, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( self->s.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2531, ASSERT_TYPE_ASSERT, "( self->s.eType == ET_TURRET )", (const char *)&queryFormat, "self->s.eType == ET_TURRET") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( !EntHandle::isDefined(&Turret->m_data.manualTarget) )
    Scr_Error(COM_ERR_3332, scrContext, "turret manual target not defined");
  v6 = EntHandle::ent(&Turret->m_data.manualTarget);
  v7 = (unsigned int)Turret->m_data.flags >> 4;
  p_number = (float *)&v6->s.number;
  GTurret::SetTargetEnt(Turret, v6, &Turret->m_data.manualTargetOffset);
  vPoint.v[0] = Turret->m_data.manualTargetOffset.v[0] + p_number[76];
  vPoint.v[1] = Turret->m_data.manualTargetOffset.v[1] + p_number[77];
  vPoint.v[2] = Turret->m_data.manualTargetOffset.v[2] + p_number[78];
  if ( !G_Turret_GetAimAngleAndPosition_Internal(self, &vPoint, &out_sourcePosition, &out_localAngles, 0) )
    Scr_Error(COM_ERR_3333, scrContext, "turretData cannot point at target");
  v9 = GTurret::GetTurret(&self->turretHandle);
  G_Turret_UpdateShootingState(self, v7 & 1, &out_localAngles);
  v9->m_data.flags |= 0x20u;
  v9->m_data.targetPos.v[0] = out_sourcePosition.v[0];
  v9->m_data.targetPos.v[1] = out_sourcePosition.v[1];
  v10 = out_localAngles.v[0];
  v9->m_data.targetPos.v[2] = out_sourcePosition.v[2];
  v11 = 0;
  self->s.lerp.u.turret.gunAngles.v[1] = out_localAngles.v[1];
  self->s.lerp.u.anonymous.data[2] = 0;
  self->s.lerp.u.turret.gunAngles.v[0] = v10;
  p_partBits = &partBits;
  ServerDObjForEnt = Com_GetServerDObjForEnt(self);
  __asm { vpxor   xmm6, xmm6, xmm6 }
  do
  {
    *(_OWORD *)p_partBits->array = _XMM6;
    p_partBits = (DObjPartBits *)((char *)p_partBits + 16);
    ++v11;
  }
  while ( v11 < 2 );
  inOutIndex[0] = -2;
  if ( !DObjGetBoneIndexInternal_11(ServerDObjForEnt, scr_const.tag_aim, inOutIndex, &modelIndex) )
    Scr_Error(COM_ERR_3334, scrContext, "'tag_aim' bone not found on turret");
  G_Utils_DObjClearBoneSetBit(ServerDObjForEnt, inOutIndex[0]);
  v15 = inOutIndex[0];
  v16 = inOutIndex[0];
  inOutIndex[0] = -2;
  partBits.array[v16 >> 5] |= 0x80000000 >> (v15 & 0x1F);
  if ( DObjGetBoneIndexInternal_11(ServerDObjForEnt, scr_const.tag_aim_animated, inOutIndex, &modelIndex) )
  {
    G_Utils_DObjClearBoneSetBit(ServerDObjForEnt, inOutIndex[0]);
    partBits.array[(unsigned __int64)inOutIndex[0] >> 5] |= 0x80000000 >> (inOutIndex[0] & 0x1F);
  }
  DObjCompleteHierarchyBits(ServerDObjForEnt, &partBits);
  G_Utils_DObjCalcPose(self, &partBits);
}

/*
==============
G_Turret_ScrStopRemoteUse
==============
*/
void G_Turret_ScrStopRemoteUse(gentity_s *self, gentity_s *owner)
{
  gclient_s *client; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3529, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( self->s.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3530, ASSERT_TYPE_ASSERT, "( self->s.eType == ET_TURRET )", (const char *)&queryFormat, "self->s.eType == ET_TURRET") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3531, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3533, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !owner->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3534, ASSERT_TYPE_ASSERT, "( owner->client )", (const char *)&queryFormat, "owner->client") )
    __debugbreak();
  client = owner->client;
  if ( EntHandle::isDefined(&self->r.ownerNum) && EntHandle::ent(&self->r.ownerNum) == owner )
    G_Turret_ClientStopUsingTurret(self);
  else
    Com_PrintWarning(34, "WARNING: Stop turret remote use but its owner is not defined or does not match entity, some flags and states won't be cleared from client.\n");
  client->ps.remoteTurretEnt = 2047;
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2409, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x18u);
}

/*
==============
G_Turret_ScrStopUse
==============
*/
void G_Turret_ScrStopUse(gentity_s *self, gentity_s *owner)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3556, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( self->s.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3557, ASSERT_TYPE_ASSERT, "( self->s.eType == ET_TURRET )", (const char *)&queryFormat, "self->s.eType == ET_TURRET") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3559, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !owner->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3560, ASSERT_TYPE_ASSERT, "( owner->client )", (const char *)&queryFormat, "owner->client") )
    __debugbreak();
  if ( EntHandle::isDefined(&self->r.ownerNum) )
  {
    if ( EntHandle::ent(&self->r.ownerNum) == owner )
      G_Turret_ClientStopUsingTurret(self);
  }
}

/*
==============
G_Turret_ScrUse
==============
*/
bool G_Turret_ScrUse(scrContext_t *scrContext, gentity_s *self, gentity_s *owner, bool remoteUse)
{
  bool result; 
  GTurret *Turret; 
  gclient_s *client; 
  float v11; 
  float v12; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v15; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3453, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( self->s.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3454, ASSERT_TYPE_ASSERT, "( self->s.eType == ET_TURRET )", (const char *)&queryFormat, "self->s.eType == ET_TURRET") )
    __debugbreak();
  result = G_Turret_CanUse(self, owner);
  if ( result )
  {
    Turret = GTurret::GetTurret(&self->turretHandle);
    if ( !Turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3463, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
      __debugbreak();
    if ( (Turret->m_data.flags & 0x200) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3464, ASSERT_TYPE_ASSERT, "( 0 == (turret->m_data.flags & TURRET_INOPERABLE) )", (const char *)&queryFormat, "0 == (turret->m_data.flags & TURRET_INOPERABLE)") )
      __debugbreak();
    if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3466, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
      __debugbreak();
    if ( !owner->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3467, ASSERT_TYPE_ASSERT, "( owner->client )", (const char *)&queryFormat, "owner->client") )
      __debugbreak();
    if ( owner->s.number >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3468, ASSERT_TYPE_ASSERT, "( owner->s.number < level.maxclients )", (const char *)&queryFormat, "owner->s.number < level.maxclients") )
      __debugbreak();
    client = owner->client;
    if ( (client->flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3473, ASSERT_TYPE_ASSERT, "( 0 == (owner->client->flags & (1<<2)) )", (const char *)&queryFormat, "0 == (owner->client->flags & CL_FLAG_FROZEN)") )
      __debugbreak();
    if ( G_IsTurretKeepingOrientationOnExit(&self->s) )
    {
      v11 = self->s.lerp.u.turret.gunAngles.v[1] + self->r.currentAngles.v[1];
      v12 = self->s.lerp.u.turret.gunAngles.v[0];
    }
    else
    {
      v12 = self->r.currentAngles.v[0];
      v11 = self->r.currentAngles.v[1];
    }
    G_Turret_Use(self, owner, NULL);
    if ( remoteUse )
    {
      Instance = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
      v15 = BG_WeaponDef(WeaponForEntity, 0);
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3494, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
        __debugbreak();
      if ( v15->useTurretViewmodelAnims )
        Scr_Error(COM_ERR_3335, scrContext, "useTurretViewmodelAnims is not supported with remote turrets.");
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3500, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
      if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2173, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2174, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&client->ps.eFlags, ACTIVE, 7u);
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&client->ps.otherFlags, ACTIVE, 0x18u);
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2110, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&self->s.lerp.eFlags, ACTIVE, 7u);
    }
    self->s.lerp.u.turret.gunAngles.v[0] = v12;
    self->s.lerp.u.turret.gunAngles.v[1] = v11;
    _XMM9 = 0i64;
    __asm
    {
      vroundss xmm2, xmm9, xmm1, 1
      vroundss xmm1, xmm9, xmm2, 1
      vroundss xmm2, xmm9, xmm1, 1
    }
    client->ps.delta_angles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM2) * 360.0;
    __asm
    {
      vroundss xmm2, xmm9, xmm1, 1
      vroundss xmm2, xmm9, xmm4, 1
    }
    result = 1;
    __asm { vroundss xmm3, xmm9, xmm2, 1 }
    client->ps.delta_angles.v[0] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM2).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    client->ps.viewangles.v[0] = v12;
    client->ps.viewangles.v[1] = v11;
  }
  return result;
}

/*
==============
G_Turret_SetAutoRotationStopDelay
==============
*/
void G_Turret_SetAutoRotationStopDelay(gentity_s *self, int delayMS)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3315, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( delayMS < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3316, ASSERT_TYPE_ASSERT, "( delayMS >= 0 )", (const char *)&queryFormat, "delayMS >= 0") )
    __debugbreak();
  GTurret::GetTurret(&self->turretHandle)->m_data.autoRotationStopDelay = delayMS;
}

/*
==============
G_Turret_SetDObjTransferFlag
==============
*/
void G_Turret_SetDObjTransferFlag(gentity_s *turretEnt)
{
  DObj *ServerDObjForEnt; 
  unsigned __int8 flags; 

  if ( !turretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2941, ASSERT_TYPE_ASSERT, "(turretEnt)", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  if ( turretEnt->s.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2942, ASSERT_TYPE_ASSERT, "(turretEnt->s.eType == ET_TURRET)", (const char *)&queryFormat, "turretEnt->s.eType == ET_TURRET") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(turretEnt);
  if ( ServerDObjForEnt )
  {
    flags = ServerDObjForEnt->flags;
    if ( ServerDObjForEnt->tree )
      ServerDObjForEnt->flags = flags & 0xFE;
    else
      ServerDObjForEnt->flags = flags | 1;
  }
}

/*
==============
G_Turret_SetDefaultDropPitch
==============
*/
void G_Turret_SetDefaultDropPitch(gentity_s *self, float pitch)
{
  GTurret *Turret; 
  GTurret_vtbl *v4; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1907, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  v4 = Turret->__vftable;
  Turret->m_data.dropPitch = pitch;
  ((void (__fastcall *)(GTurret *, gentity_s *))v4->SetDefaultDropPitchVirtual)(Turret, self);
}

/*
==============
G_Turret_SetManualSpinning
==============
*/
void G_Turret_SetManualSpinning(gentity_s *self, int spinning)
{
  GTurret *Turret; 
  int flags; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3326, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  flags = Turret->m_data.flags;
  if ( spinning )
  {
    Turret->m_data.flags = flags | 0x1000;
  }
  else
  {
    Turret->m_data.flags = flags & 0xFFFFEFFF;
    Turret->m_data.lastAutoRotationRequestTime = 0;
  }
}

/*
==============
G_Turret_SetMode
==============
*/
void G_Turret_SetMode(gentity_s *self, int inFlags)
{
  GTurret *Turret; 
  unsigned int v5; 
  int v6; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3287, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( (inFlags & 0xFFFF73F3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3294, ASSERT_TYPE_ASSERT, "((inFlags & ~modeFlags) == 0)", "%s\n\tCan only set the m_data.flags in the list above", "(inFlags & ~modeFlags) == 0") )
    __debugbreak();
  v5 = inFlags | Turret->m_data.flags & 0xFFFF73F3;
  Turret->m_data.flags = v5;
  v6 = self->s.lerp.u.anonymous.data[5] | 0x80;
  if ( (v5 & 0xC) != 12 )
    v6 = self->s.lerp.u.anonymous.data[5] & 0xFFFFFF7F;
  self->s.lerp.u.anonymous.data[5] = v6;
  GTurret::GetTurret(&self->turretHandle)->m_data.modeChangeTime = level.time;
}

/*
==============
G_Turret_SetSentryOwner
==============
*/
void G_Turret_SetSentryOwner(gentity_s *self, const gentity_s *owner)
{
  GTurret *Turret; 
  __int16 otherEntityNum; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3248, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( owner )
  {
    otherEntityNum = self->s.otherEntityNum;
    if ( otherEntityNum != 2047 && owner->s.number != otherEntityNum && Turret->RestrictUsageToOwner(Turret) )
      Com_PrintWarning(17, "WARNING: Sentry owner ent has been set while there was already another owner ( %i => %i )\n", (unsigned int)self->s.otherEntityNum, (unsigned int)owner->s.number);
    self->s.otherEntityNum = owner->s.number;
  }
  else
  {
    self->s.otherEntityNum = 2047;
  }
}

/*
==============
G_Turret_SetState
==============
*/
void G_Turret_SetState(gentity_s *self, GTurretState state)
{
  GTurret *Turret; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1862, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1853, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( (GTurret::GetTurret(&self->turretHandle)->m_data.state != IDLE) != (state != IDLE) )
    GScr_Notify(self, scr_const.turretstatechange, 0);
  Turret->m_data.state = state;
  Turret->m_data.stateChangeTime = level.time;
}

/*
==============
G_Turret_SetupAnimtreeForGDTAnims
==============
*/
void G_Turret_SetupAnimtreeForGDTAnims(gentity_s *self, const Weapon *r_turretWeapon)
{
  DObj *ServerDObjForEnt; 
  const DObj *v5; 
  DObj *v6; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  XAnim_s *AnimsForTurretWeap; 
  XAnimTree *SmallTree; 
  double Weight; 
  int turretAnimIndexArrayOut[6]; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2918, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(self);
  v5 = ServerDObjForEnt;
  if ( ServerDObjForEnt )
  {
    if ( !ServerDObjForEnt->tree )
    {
      v6 = Com_GetServerDObjForEnt(&g_entities[self->s.number]);
      Instance = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
      AnimsForTurretWeap = BG_Turret_GetAnimsForTurretWeap(WeaponForEntity, 1);
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2899, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
        __debugbreak();
      if ( v6->tree )
      {
        Com_XAnimFreeSmallTree(v6->tree);
        v6->tree = NULL;
      }
      SmallTree = Com_XAnimCreateSmallTree(AnimsForTurretWeap, MOVEMENT);
      if ( !SmallTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2908, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
        __debugbreak();
      self->pAnimTree = SmallTree;
      DObjSetTree(v6, SmallTree);
    }
    BG_TurretAnim_GetAnimIndices(v5, r_turretWeapon, turretAnimIndexArrayOut);
    Weight = XAnimGetWeight(v5->tree, 0, XANIM_SUBTREE_DEFAULT, turretAnimIndexArrayOut[0]);
    if ( *(float *)&Weight == 0.0 )
      XAnimSetGoalWeight(v5, 0, XANIM_SUBTREE_DEFAULT, turretAnimIndexArrayOut[0], 1.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
  }
}

/*
==============
G_Turret_SetupFireParams
==============
*/
void G_Turret_SetupFireParams(const gentity_s *const self, const gentity_s *const other, const scr_string_t tagName, BgWeaponParms *const params)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 721, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 722, ASSERT_TYPE_ASSERT, "( other )", (const char *)&queryFormat, "other") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  memset_0(params, 0, sizeof(BgWeaponParms));
  params->weapon = *WeaponForEntity;
  params->weapDef = BG_WeaponDef(WeaponForEntity, 0);
  G_Turret_FillWeaponParms(self, other, params, tagName);
}

/*
==============
G_Turret_Shoot_internal
==============
*/
void G_Turret_Shoot_internal(gentity_s *self, gentity_s *other, const int lockStrength, const int gameTime, const BgWeaponParms *const wp)
{
  const BgWeaponParms *v9; 
  GTurret *Turret; 
  GTurret *v11; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v14; 
  GWeaponMap *v15; 
  GWeaponMap *v16; 
  const Weapon *v17; 
  gclient_s *client; 
  int weaponState; 
  double v20; 
  int fireDelay; 
  float outDissipationPerSecond[3]; 
  int fireTime; 
  float outAccumulationPerShot; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 741, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 742, ASSERT_TYPE_ASSERT, "( other )", (const char *)&queryFormat, "other") )
    __debugbreak();
  v9 = wp;
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 743, ASSERT_TYPE_ASSERT, "( wp )", (const char *)&queryFormat, "wp") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 687, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  v11 = GTurret::GetTurret(&self->turretHandle);
  if ( (v11->m_data.flags & 2) == 0 )
  {
    Instance = GWeaponMap::GetInstance();
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
    v14 = BG_WeaponDef(WeaponForEntity, 0);
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 697, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    if ( level.time >= v11->m_data.heatPenaltyEndTime && (!v14->turretBarrelSpinEnabled || v11->m_data.barrelRollRate >= 1.0) )
    {
      v15 = GWeaponMap::GetInstance();
      v16 = GWeaponMap::GetInstance();
      v17 = BG_GetWeaponForEntity(v16, &self->s);
      BG_GetFireTime(NULL, NULL, v17, 0, 0, 0, &fireTime, &fireDelay);
      Turret->m_data.fireSndDelay = 3 * fireTime;
      Turret->m_data.fireTimestamp = level.time;
      if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 711, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
        __debugbreak();
      if ( self->s.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 712, ASSERT_TYPE_ASSERT, "(self->s.eType == ET_TURRET)", (const char *)&queryFormat, "self->s.eType == ET_TURRET") )
        __debugbreak();
      self->s.lerp.u.anonymous.data[7] = (self->s.lerp.u.anonymous.data[7] + 1) % 16;
      client = other->client;
      if ( !client || !BG_IsUsingTurretViewarms(v15, &client->ps) || (weaponState = other->client->ps.weapState[0].weaponState, (unsigned int)(weaponState - 16) <= 1) || (unsigned int)(weaponState - 22) <= 2 )
      {
        G_Turret_FireLead(self, other, lockStrength, gameTime, v9);
        BG_GetHeatProperties(v17, 0, &outAccumulationPerShot, outDissipationPerSecond);
        v20 = I_fclamp(outAccumulationPerShot + Turret->m_data.heatLevel, 0.0, 1.0);
        Turret->m_data.heatLevel = *(float *)&v20;
      }
    }
  }
}

/*
==============
G_Turret_SightTrace
==============
*/
_BOOL8 G_Turret_SightTrace(const vec3_t *start, const vec3_t *end, int passEnt1, int passEnt2)
{
  int LegacySightTrace; 
  bool v9; 
  double ClientVisibility; 
  float v11; 
  double FxVisibility; 

  Profile_Begin(297);
  LegacySightTrace = PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, start, end, &bounds_origin, passEnt1, passEnt2, 8394755);
  v9 = LegacySightTrace != 0;
  if ( !LegacySightTrace && (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
  {
    if ( SV_IsDemoPlaying() )
    {
      FxVisibility = SV_DemoSP_GetFxVisibility();
      v11 = *(float *)&FxVisibility;
    }
    else
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api_inline.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
        __debugbreak();
      ClientVisibility = FX_GetClientVisibility(fx_serverVisClient, start, end);
      v11 = *(float *)&ClientVisibility;
      SV_DemoSP_RecordFxVisibility(*(float *)&ClientVisibility);
    }
    if ( v11 < 0.2 )
      v9 = 1;
  }
  Profile_EndInternal(NULL);
  return !v9;
}

/*
==============
G_Turret_Spawn
==============
*/
void G_Turret_Spawn(scrContext_t *scrContext, gentity_s *self, const Weapon *r_weapon, const int useDropPitch)
{
  __int128 v4; 
  GWeaponMap *Instance; 
  const char *WeaponName; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  BgObjectHandle<GTurret> *p_turretHandle; 
  unsigned int v15; 
  GTurret **v16; 
  GTurret *v17; 
  GTurret *Turret; 
  const WeaponDef *v19; 
  WeaponSFXPackage *sfxPackage; 
  GConfigStrings *v21; 
  unsigned __int16 v22; 
  float leftArc; 
  float v28; 
  float v29; 
  double v30; 
  float bottomArc; 
  float maxRange; 
  float v43; 
  float playerSpread; 
  unsigned __int16 number; 
  __int64 v46; 
  unsigned int v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  float out; 
  float v52[3]; 
  char output[512]; 
  __int128 v54; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Turret_Spawn");
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3578, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 447, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 448, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Instance->SetWeapon(Instance, &self->s.weaponHandle, r_weapon);
  if ( r_weapon->weaponIdx )
  {
    v54 = v4;
    if ( BG_GetWeaponClass(r_weapon, 0) != WEAPCLASS_TURRET )
    {
      WeaponName = BG_GetWeaponName(r_weapon, output, 0x200u);
      v11 = j_va("G_Turret_Spawn: weapon '%s' isn't a turret. This usually indicates that the weapon failed to load.", WeaponName);
      Scr_Error(COM_ERR_3337, scrContext, v11);
    }
    if ( !level.initializing && !r_weapon->weaponIdx )
    {
      v12 = BG_GetWeaponName(r_weapon, output, 0x200u);
      v13 = j_va("G_Turret_Spawn: '%s' not precached", v12);
      Scr_Error(COM_ERR_3338, scrContext, v13);
    }
    p_turretHandle = &self->turretHandle;
    if ( self == (gentity_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 236, ASSERT_TYPE_ASSERT, "( outHandle )", (const char *)&queryFormat, "outHandle") )
      __debugbreak();
    if ( p_turretHandle->m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 237, ASSERT_TYPE_ASSERT, "( !outHandle->IsDefined() )", (const char *)&queryFormat, "!outHandle->IsDefined()") )
      __debugbreak();
    if ( !(_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 238, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    v15 = 0;
    v16 = GTurret::ms_turretArray;
    while ( 1 )
    {
      v17 = *v16;
      if ( !*v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 243, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
        __debugbreak();
      if ( !v17->m_inuse )
        break;
      ++v15;
      ++v16;
      if ( v15 >= 0x80 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E308D0, 847i64);
        goto LABEL_34;
      }
    }
    p_turretHandle->m_objIndex = v15 + 1;
LABEL_34:
    Turret = GTurret::GetTurret(&self->turretHandle);
    if ( Turret->m_inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3617, ASSERT_TYPE_ASSERT, "( !turret->m_inuse )", (const char *)&queryFormat, "!turret->m_inuse") )
      __debugbreak();
    Turret->m_inuse = 1;
    memset_0(&Turret->m_data, 0, sizeof(Turret->m_data));
    Turret->SpawnVirtual(Turret, self);
    v19 = BG_WeaponDef(r_weapon, 0);
    Turret->m_data.stance = v19->stance;
    Turret->m_data.prevStance = -1;
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    sfxPackage = v19->sfxPackage;
    v21 = GConfigStrings::ms_gConfigStrings;
    if ( sfxPackage )
    {
      if ( sfxPackage->sounds->fireLoopSound.name )
      {
        Turret->m_data.fireLoopSnd = ((__int64 (__fastcall *)(GConfigStrings *))GConfigStrings::ms_gConfigStrings->GetLoopingSoundAliasIndex)(GConfigStrings::ms_gConfigStrings);
        sfxPackage = v19->sfxPackage;
      }
      if ( sfxPackage )
      {
        if ( sfxPackage->sounds->fireLoopSoundPlayer.name )
        {
          Turret->m_data.fireLoopSndPlayer = ((__int64 (__fastcall *)(GConfigStrings *))v21->GetLoopingSoundAliasIndex)(v21);
          sfxPackage = v19->sfxPackage;
        }
        if ( sfxPackage )
        {
          if ( sfxPackage->sounds->fireStopSound.name )
          {
            Turret->m_data.stopSnd = ((__int64 (__fastcall *)(GConfigStrings *))v21->GetSoundAliasIndex)(v21);
            sfxPackage = v19->sfxPackage;
          }
          if ( sfxPackage )
          {
            if ( sfxPackage->sounds->fireStopSoundPlayer.name )
            {
              Turret->m_data.stopSndPlayer = ((__int64 (__fastcall *)(GConfigStrings *))v21->GetSoundAliasIndex)(v21);
              sfxPackage = v19->sfxPackage;
            }
            if ( sfxPackage )
            {
              if ( sfxPackage->sounds->scanSound.name )
              {
                v22 = ((__int64 (__fastcall *)(GConfigStrings *))v21->GetLoopingSoundAliasIndex)(v21);
                Turret->m_data.scanLoopSnd = v22;
                if ( v22 >= 0x200u )
                {
                  LODWORD(v49) = v22;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3650, ASSERT_TYPE_ASSERT, "(unsigned)( turretData->scanLoopSnd ) < (unsigned)( 512 )", "turretData->scanLoopSnd doesn't index MAX_SOUNDALIASES\n\t%i not in [0, %i)", v49, 512) )
                    __debugbreak();
                }
              }
            }
          }
        }
      }
    }
    if ( !level.spawnVar.spawnVarsValid || !G_SpawnFloat(0x329u, (const char *)&queryFormat.fmt + 3, (float *)&Turret->m_data.arcmin + 1) )
      Turret->m_data.arcmin.v[1] = v19->rightArc;
    _XMM0 = LODWORD(Turret->m_data.arcmin.v[1]);
    _XMM1 = _XMM0 ^ _xmm;
    __asm
    {
      vcmpltss xmm0, xmm0, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm6, xmm0
    }
    Turret->m_data.arcmin.v[1] = *(float *)&_XMM0;
    if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x23Cu, (const char *)&queryFormat.fmt + 3, (float *)&Turret->m_data.arcmax + 1) )
    {
      leftArc = Turret->m_data.arcmax.v[1];
    }
    else
    {
      leftArc = v19->leftArc;
      Turret->m_data.arcmax.v[1] = leftArc;
    }
    if ( leftArc < 0.0 )
      Turret->m_data.arcmax.v[1] = 0.0;
    v28 = Turret->m_data.arcmin.v[1];
    Turret->m_data.initialYawmin = v28;
    v29 = Turret->m_data.arcmax.v[1];
    Turret->m_data.initialYawmax = v29;
    Turret->m_data.forwardAngleDot = v29 - v28;
    v30 = I_fclamp(v29 - v28, 90.0, 180.0);
    Turret->m_data.forwardAngleDot = cosf_0(*(float *)&v30 * 0.017453292);
    if ( !level.spawnVar.spawnVarsValid || !G_SpawnFloat(0x445u, (const char *)&queryFormat.fmt + 3, (float *)&Turret->m_data.arcmin) )
      Turret->m_data.arcmin.v[0] = v19->topArc;
    _XMM0 = LODWORD(Turret->m_data.arcmin.v[0]);
    _XMM2 = _XMM0 ^ _xmm;
    __asm
    {
      vcmpltss xmm1, xmm0, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm6, xmm1
    }
    Turret->m_data.arcmin.v[0] = *(float *)&_XMM0;
    if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x8Fu, (const char *)&queryFormat.fmt + 3, (float *)&Turret->m_data.arcmax) )
    {
      bottomArc = Turret->m_data.arcmax.v[0];
    }
    else
    {
      bottomArc = v19->bottomArc;
      Turret->m_data.arcmax.v[0] = bottomArc;
    }
    if ( bottomArc < 0.0 )
      Turret->m_data.arcmax.v[0] = 0.0;
    if ( level.spawnVar.spawnVarsValid && (G_SpawnFloat(0x4B2u, (const char *)&queryFormat.fmt + 3, &out) || level.spawnVar.spawnVarsValid && G_SpawnFloat(0xFDu, (const char *)&queryFormat.fmt + 3, &out)) )
      _XMM1 = LODWORD(out);
    else
      _XMM1 = LODWORD(v19->yawConvergenceTime);
    __asm
    {
      vcmpltss xmm0, xmm1, xmm6
      vblendvps xmm1, xmm1, xmm6, xmm0
    }
    out = *(float *)&_XMM1;
    Turret->m_data.convergenceTime[1] = (int)(float)((float)(*(float *)&_XMM1 * 1000.0) + 0.5);
    if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x2E8u, (const char *)&queryFormat.fmt + 3, &out) )
      _XMM1 = LODWORD(out);
    else
      _XMM1 = LODWORD(v19->pitchConvergenceTime);
    __asm
    {
      vcmpltss xmm0, xmm1, xmm6
      vblendvps xmm1, xmm1, xmm6, xmm0
    }
    out = *(float *)&_XMM1;
    Turret->m_data.convergenceTime[0] = (int)(float)((float)(*(float *)&_XMM1 * 1000.0) + 0.5);
    Turret->m_data.convergenceHeightPercent = 1.0;
    if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x262u, (const char *)&queryFormat.fmt + 3, v52) )
    {
      maxRange = v52[0];
    }
    else
    {
      maxRange = v19->maxRange;
      v52[0] = maxRange;
    }
    if ( maxRange <= 0.0 )
      v43 = FLOAT_3_4028235e38;
    else
      v43 = maxRange * maxRange;
    Turret->m_data.maxRangeSquared = v43;
    if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x2EBu, "1", &Turret->m_data.playerSpread) )
    {
      playerSpread = Turret->m_data.playerSpread;
    }
    else
    {
      playerSpread = v19->playerSpread;
      Turret->m_data.playerSpread = playerSpread;
    }
    if ( playerSpread < 0.0 )
      Turret->m_data.playerSpread = 0.0;
    Turret->m_data.dropPitch = -90.0;
    if ( !self->health )
      self->health = 100;
    Turret->m_data.state = IDLE;
    Turret->m_data.prevTargetIndex = -1;
    Turret->m_data.modeChangeTime = 0;
    self->s.eType = ET_TURRET;
    self->clipmask = 1;
    self->r.svFlags = 0;
    *(_QWORD *)&self->hint.hintString = 0i64;
    self->flags.m_flags[0] |= 0x200u;
    G_PlayerUse_SetEntityUsable(self, 1);
    *(_QWORD *)self->r.box.midPoint.v = 0i64;
    self->r.box.midPoint.v[2] = 28.0;
    self->r.box.halfSize.v[0] = 32.0;
    self->r.box.halfSize.v[1] = 32.0;
    self->r.box.halfSize.v[2] = 28.0;
    G_SetOriginAndAngle(self, &self->r.currentOrigin, &self->r.currentAngles, 1, 1);
    *(_QWORD *)self->s.lerp.u.anonymous.data = 0i64;
    self->s.lerp.u.anonymous.data[2] = 0;
    if ( useDropPitch )
      self->s.lerp.u.anonymous.data[0] = LODWORD(Turret->m_data.dropPitch);
    *(_QWORD *)&Turret->m_data.heatPenaltyEndTime = 0i64;
    Turret->m_data.heatLevel = 0.0;
    *(_QWORD *)&Turret->m_data.autoRotationStopDelay = 1000i64;
    self->s.staticState.player.stowedWeaponHandle.m_mapEntryId = 2047;
    self->handler = 18;
    self->nextthink = level.time + G_Level_GetFrameDuration();
    self->s.lerp.apos.trType = TR_LINEAR_STOP;
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&self->s.lerp.eFlags, ACTIVE, 0x10u);
    self->s.lerp.u.anonymous.data[6] = 2047;
    GTurret::GetTurret(&self->turretHandle);
    self->s.otherEntityNum = 2047;
    number = self->r.ownerNum.number;
    if ( number )
    {
      v46 = number;
      v47 = number - 1;
      if ( v47 >= 0x800 )
      {
        LODWORD(v50) = 2048;
        LODWORD(v49) = v47;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v49, v50) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v48 = v46 - 1;
      if ( g_entities[v48].r.isInUse != g_entityIsInUse[v48] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v48] )
      {
        LODWORD(v50) = self->r.ownerNum.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v50) )
          __debugbreak();
      }
      if ( self->r.ownerNum.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3755, ASSERT_TYPE_ASSERT, "( !self->r.ownerNum.isDefined() )", (const char *)&queryFormat, "!self->r.ownerNum.isDefined()") )
        __debugbreak();
    }
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    GUtils::ms_gUtils->DObjUpdate(GUtils::ms_gUtils, self, 1);
    G_Turret_SetDObjTransferFlag(self);
    Sys_ProfEndNamedEvent();
  }
  else
  {
    Scr_Error(COM_ERR_3336, scrContext, "G_Turret_Spawn: Bad weapon specified for turret. It likely needs to be precached in script.");
  }
}

/*
==============
G_Turret_SpawnFromString
==============
*/
void G_Turret_SpawnFromString(gentity_s *self)
{
  scrContext_t *v2; 
  char *out; 
  Weapon result; 
  Weapon r_weapon; 

  if ( !G_LevelSpawnString(0x4A6u, (const char *)&queryFormat.fmt + 3, (const char **)&out) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E30A50, 848i64);
  v2 = ScriptContext_Server();
  r_weapon = *GScr_Main_GetWeaponForName(&result, v2, out);
  G_Turret_Spawn(v2, self, &r_weapon, 0);
}

/*
==============
G_Turret_Think
==============
*/
void G_Turret_Think(gentity_s *self)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const dvar_t *v4; 
  GTurret *Turret; 
  gentity_s *v6; 
  LerpEntityState *p_lerp; 

  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_Turret_Think");
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2973, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  v4 = DVARBOOL_turret_draw_locations;
  if ( !DVARBOOL_turret_draw_locations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turret_draw_locations") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
    G_DebugSphere(&self->r.currentOrigin, 120.0, &colorGreen, 0, 0);
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  self->nextthink = level.time + level.frameDuration;
  self->s.lerp.u.anonymous.data[2] = 0;
  if ( self->tagInfo )
    G_GeneralLink(self);
  if ( EntHandle::isDefined(&self->r.ownerNum) )
    v6 = EntHandle::ent(&self->r.ownerNum);
  else
    v6 = g_entities + 2047;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF && BG_TurretAnim_IsAnyAssigned(WeaponForEntity) )
    G_Turret_SetupAnimtreeForGDTAnims(self, WeaponForEntity);
  G_Turret_SetDObjTransferFlag(self);
  if ( !v6->client )
  {
    G_Turret_UpdateBarrelRotation(self, v6);
    G_Turret_UpdateHeat(self, v6);
    G_Turret_UpdateSound(self);
    p_lerp = &self->s.lerp;
    if ( Turret->m_data.fireTimestamp == level.time )
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&p_lerp->eFlags, ACTIVE, 0xAu);
    else
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&p_lerp->eFlags, ACTIVE, 0xAu);
    if ( (Turret->m_data.flags & 0x8004) == 4 )
      G_Turret_Think_Auto_NonAI(self);
    else
      Turret->ThinkVirtual(Turret, self, v6);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Turret_Think_Auto_NonAI
==============
*/
void G_Turret_Think_Auto_NonAI(gentity_s *self)
{
  GTurret *Turret; 
  GTurret *v3; 
  gentity_s *v4; 
  int modeChangeTime; 
  gentity_s *BestTarget; 
  gentity_s *v7; 
  bool v8; 
  vec3_t out_targetOffset; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2805, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2787, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  v3 = GTurret::GetTurret(&self->turretHandle);
  v4 = NULL;
  if ( (v3->m_data.flags & 0x4000) != 0 )
  {
    modeChangeTime = v3->m_data.modeChangeTime;
    if ( modeChangeTime > 0 && level.time < modeChangeTime + 500 )
    {
      G_Turret_ClearTargetEnt(self);
      if ( !GTurret::ReturnToDefaultPos(Turret, self, 1) )
        return;
      if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2767, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
        __debugbreak();
      GTurret::GetTurret(&self->turretHandle)->m_data.modeChangeTime = 0;
    }
  }
  if ( EntHandle::isDefined(&Turret->m_data.manualTarget) )
    v4 = EntHandle::ent(&Turret->m_data.manualTarget);
  if ( (Turret->m_data.flags & 0x800) != 0 )
    goto LABEL_21;
  BestTarget = G_Turret_FindBestTarget(self, &out_targetOffset);
  v7 = BestTarget;
  if ( !BestTarget )
    goto LABEL_21;
  if ( GTurret::AimAtSentient(Turret, self, BestTarget, &out_targetOffset, 1, Turret->m_data.convergenceTime[1]) )
    return;
  if ( v4 != v7 )
  {
LABEL_21:
    if ( v4 )
    {
      if ( !v4->sentient )
      {
        v8 = GTurret::AimAtEntity(Turret, self, v4, &Turret->m_data.manualTargetOffset, 1);
LABEL_26:
        if ( v8 )
          return;
        goto LABEL_27;
      }
      if ( G_Turret_IsTargetVisible(self, v4, &Turret->m_data.manualTargetOffset, NULL) )
      {
        v8 = GTurret::AimAtSentient(Turret, self, v4, &Turret->m_data.manualTargetOffset, 1, Turret->m_data.convergenceTime[1]);
        goto LABEL_26;
      }
    }
  }
LABEL_27:
  G_Turret_ClearTargetEnt(self);
  if ( (Turret->m_data.flags & 0x408) == 8 )
    G_Turret_ScanForEnemies(self);
  else
    GTurret::ReturnToDefaultPos(Turret, self, 1);
}

/*
==============
G_Turret_Think_Init
==============
*/
void G_Turret_Think_Init(gentity_s *self)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1970, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( self->handler != 18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1971, ASSERT_TYPE_ASSERT, "( self->handler == ENT_HANDLER_TURRET_INIT )", (const char *)&queryFormat, "self->handler == ENT_HANDLER_TURRET_INIT") )
    __debugbreak();
  self->handler = 19;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  self->nextthink = level.time + level.frameDuration;
  self->s.lerp.u.anonymous.data[2] = 0;
  if ( self->tagInfo )
    G_GeneralLink(self);
  if ( -90.0 == GTurret::GetTurret(&self->turretHandle)->m_data.dropPitch )
    G_Turret_RestoreDefaultDropPitch(self);
}

/*
==============
G_Turret_Track
==============
*/
void G_Turret_Track(gentity_s *self, gentity_s *other)
{
  unsigned __int16 number; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  GTurret *Turret; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  bool v14; 
  playerState_s *EntityPlayerState; 
  int v16; 
  GTurret *v17; 
  __int64 shotCount; 
  int *fireTime; 
  int v20; 
  int fireDelay; 

  if ( !self->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1296, ASSERT_TYPE_ASSERT, "( self->active )", (const char *)&queryFormat, "self->active") )
    __debugbreak();
  number = self->r.ownerNum.number;
  if ( !number )
    goto LABEL_65;
  v5 = number;
  v6 = number - 1;
  if ( v6 >= 0x800 )
  {
    LODWORD(shotCount) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", shotCount, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v7 = v5 - 1;
  if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v7] )
  {
    LODWORD(fireTime) = self->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", fireTime) )
      __debugbreak();
  }
  if ( !self->r.ownerNum.number )
  {
LABEL_65:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1297, ASSERT_TYPE_ASSERT, "( self->r.ownerNum.isDefined() )", (const char *)&queryFormat, "self->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v8 = self->r.ownerNum.number;
  if ( (unsigned int)(v8 - 1) >= 0x7FF )
  {
    LODWORD(fireTime) = 2047;
    LODWORD(shotCount) = v8 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", shotCount, fireTime) )
      __debugbreak();
  }
  v9 = self->r.ownerNum.number;
  if ( (unsigned int)(v9 - 1) >= 0x800 )
  {
    LODWORD(fireTime) = 2048;
    LODWORD(shotCount) = v9 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", shotCount, fireTime) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v10 = v9 - 1;
  if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v10] )
  {
    LODWORD(fireTime) = self->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", fireTime) )
      __debugbreak();
  }
  if ( &g_entities[self->r.ownerNum.number - 1] != other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1298, ASSERT_TYPE_ASSERT, "( self->r.ownerNum.ent() == other )", (const char *)&queryFormat, "self->r.ownerNum.ent() == other") )
    __debugbreak();
  if ( !other->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1299, ASSERT_TYPE_ASSERT, "( other->client )", (const char *)&queryFormat, "other->client") )
    __debugbreak();
  if ( self->s.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 672, ASSERT_TYPE_ASSERT, "( self->s.eType == ET_TURRET )", (const char *)&queryFormat, "self->s.eType == ET_TURRET") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( !other->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 677, ASSERT_TYPE_ASSERT, "( other->client )", (const char *)&queryFormat, "other->client") )
    __debugbreak();
  Turret->Aim(Turret, self, other);
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) )
    goto LABEL_58;
  if ( self == (gentity_s *)-12i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&self->s.lerp.eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&self->s.lerp.eFlags, ACTIVE, 6u) )
  {
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&self->s.lerp.eFlags, ACTIVE, 7u) )
      goto LABEL_59;
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
  }
  if ( !BG_IsRemoteTurretActiveEntity(&self->s) )
LABEL_58:
    G_Turret_PlayerPositionAndBlend(other, self);
LABEL_59:
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  BG_GetFireTime(NULL, NULL, WeaponForEntity, 0, 0, 0, &v20, &fireDelay);
  v14 = BG_GetWeaponFireType(WeaponForEntity, 0) == WEAPON_FIRETYPE_SINGLESHOT;
  EntityPlayerState = G_GetEntityPlayerState(other);
  v16 = v20 + EntityPlayerState->turretLastFireTime;
  LODWORD(WeaponForEntity) = EntityPlayerState->serverTime;
  v17 = GTurret::GetTurret(&self->turretHandle);
  if ( (int)WeaponForEntity >= v16 )
  {
    v17->m_data.triggerDown = 0;
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&self->s.lerp.eFlags, ACTIVE, 0xAu);
    EntityPlayerState->viewlocked = PLAYERVIEWLOCK_FULL;
  }
  else
  {
    v17->m_data.triggerDown = 1;
    if ( !v14 )
      EntityPlayerState->viewlocked = PLAYERVIEWLOCK_WEAPONJITTER;
  }
}

/*
==============
G_Turret_UpdateBarrelRotation
==============
*/
void G_Turret_UpdateBarrelRotation(gentity_s *self, gentity_s *owner)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v6; 
  GTurret *Turret; 
  char v8; 
  gclient_s *client; 
  int lastAutoRotationRequestTime; 
  double v11; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1181, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1182, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  v6 = BG_WeaponDef(WeaponForEntity, 0);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1187, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( v6->turretBarrelSpinEnabled )
  {
    Turret = GTurret::GetTurret(&self->turretHandle);
    v8 = *((_BYTE *)&self->s.lerp.u.infoVolumeGrapple + 20) & 1;
    if ( (Turret->m_data.flags & 0x2000) != 0 )
      goto LABEL_12;
    client = owner->client;
    if ( !client )
    {
      self->s.lerp.u.anonymous.data[5] &= ~1u;
      if ( G_Turret_IsFiring(self) || (Turret->m_data.flags & 0x1010) != 0 )
      {
        self->s.lerp.u.anonymous.data[5] |= 1u;
        Turret->m_data.lastAutoRotationRequestTime = level.time;
      }
      else
      {
        lastAutoRotationRequestTime = Turret->m_data.lastAutoRotationRequestTime;
        if ( lastAutoRotationRequestTime > 0 && Turret->m_data.autoRotationStopDelay + lastAutoRotationRequestTime >= level.time )
          self->s.lerp.u.anonymous.data[5] |= 1u;
      }
      goto LABEL_23;
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 0x10u) || (owner->client->buttons & 0x201) == 0 )
LABEL_12:
      self->s.lerp.u.anonymous.data[5] &= ~1u;
    else
      self->s.lerp.u.anonymous.data[5] |= 1u;
LABEL_23:
    if ( v8 != (*((_BYTE *)&self->s.lerp.u.infoVolumeGrapple + 20) & 1) )
    {
      self->s.lerp.u.anonymous.data[3] = level.time;
      self->s.lerp.u.anonymous.data[4] = (int)(float)(Turret->m_data.barrelRollRate * 65535.0);
    }
    v11 = BG_Turret_ComputeBarrelSpinRate(v6, (const LerpEntityStateTurret *)&self->s.lerp.u, level.time);
    Turret->m_data.barrelRollRate = *(float *)&v11;
  }
}

/*
==============
G_Turret_UpdateHeat
==============
*/
void G_Turret_UpdateHeat(gentity_s *self, gentity_s *owner)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v6; 
  GTurret *Turret; 
  GTurret *v8; 
  int heatPenaltyEndTime; 
  int v10; 
  unsigned int v11; 
  int v12; 
  __int128 v13; 
  __int128 heatLevel_low; 
  float outAccumulationPerShot; 
  float outDissipationPerSecond; 
  float v22; 
  float v23; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1243, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1244, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  v6 = BG_WeaponDef(WeaponForEntity, 0);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1249, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  BG_GetHeatProperties(WeaponForEntity, 0, &outAccumulationPerShot, &outDissipationPerSecond);
  if ( outAccumulationPerShot > 0.0 && outDissipationPerSecond > 0.0 )
  {
    Turret = GTurret::GetTurret(&self->turretHandle);
    v8 = Turret;
    if ( (Turret->m_data.flags & 0x10000000) != 0 )
    {
      *(_QWORD *)&Turret->m_data.heatLevel = 0i64;
      self->s.lerp.u.anonymous.data[5] &= ~2u;
      BG_GameInterface_TurretUpdateHeat((LerpEntityStateTurret *)&self->s.lerp.u, 0.0);
    }
    else
    {
      if ( Turret->m_data.heatLevel < 0.94999999 )
      {
        heatPenaltyEndTime = Turret->m_data.heatPenaltyEndTime;
      }
      else
      {
        heatPenaltyEndTime = level.time - (int)(float)(v6->turretOverheatPenalty * -1000.0);
        Turret->m_data.heatPenaltyEndTime = heatPenaltyEndTime;
      }
      v10 = self->s.lerp.u.anonymous.data[5];
      v11 = v10 & 0xFFFFFFFD;
      v12 = v10 | 2;
      if ( heatPenaltyEndTime >= level.time )
        v11 = v12;
      self->s.lerp.u.anonymous.data[5] = v11;
      BG_GetHeatProperties(WeaponForEntity, 0, &v23, &v22);
      v13 = 0i64;
      *(float *)&v13 = (float)((float)G_Level_GetFrameDuration() * 0.001) * v22;
      _XMM2 = v13;
      __asm { vmaxss  xmm3, xmm2, xmm6 }
      heatLevel_low = LODWORD(v8->m_data.heatLevel);
      *(float *)&heatLevel_low = v8->m_data.heatLevel - *(float *)&_XMM3;
      _XMM1 = heatLevel_low;
      __asm
      {
        vmaxss  xmm1, xmm1, xmm6
        vminss  xmm0, xmm1, cs:__real@3f800000
      }
      v8->m_data.heatLevel = *(float *)&_XMM0;
    }
  }
}

/*
==============
G_Turret_UpdateShootingState
==============
*/
void G_Turret_UpdateShootingState(gentity_s *self, const int bShoot, const vec2_t *desiredAngles)
{
  GTurret *Turret; 
  int v7; 
  GTurretState state; 
  GTurretState v12; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2181, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( !bShoot )
  {
    v12 = IDLE;
LABEL_15:
    G_Turret_SetState(self, v12);
    return;
  }
  v7 = Turret->m_data.targetTime + Turret->m_data.convergenceTime[1] - level.time;
  state = Turret->m_data.state;
  if ( state )
  {
    if ( state != SEARCHING )
      return;
    goto LABEL_12;
  }
  if ( level.time >= Turret->m_data.targetTime + 250 )
    goto LABEL_11;
  _XMM5 = 0i64;
  __asm { vroundss xmm2, xmm5, xmm1, 1 }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(self->s.lerp.u.turret.gunAngles.v[0] - desiredAngles->v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0) & _xmm) < 5.0 )
  {
    __asm { vroundss xmm3, xmm5, xmm2, 1 }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(self->s.lerp.u.turret.gunAngles.v[1] - desiredAngles->v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) & _xmm) < 5.0 )
    {
LABEL_11:
      G_Turret_SetState(self, SEARCHING);
LABEL_12:
      if ( v7 > 0 )
        return;
      v12 = INITIALIZING;
      goto LABEL_15;
    }
  }
}

/*
==============
G_Turret_UpdateSound
==============
*/
void G_Turret_UpdateSound(gentity_s *self)
{
  GTurret *Turret; 
  GTurret *v3; 
  bool v4; 
  gentity_s *v5; 
  __int16 v6; 
  unsigned int v7; 
  gentity_s *v8; 
  bitarray_base<bitarray<224> > *p_clientMask; 
  __int16 v10; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1340, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  v3 = Turret;
  self->s.loopSound = 0;
  if ( Turret->m_data.fireSndDelay <= 0 )
  {
    if ( (Turret->m_data.flags & 8) != 0 && Turret->m_data.scanSpeed > 0.0 )
      self->s.loopSound = Turret->m_data.scanLoopSnd;
  }
  else
  {
    v4 = EntHandle::isDefined(&self->r.ownerNum) && EntHandle::ent(&self->r.ownerNum)->client;
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    v3->m_data.fireSndDelay -= level.frameDuration;
    if ( v3->m_data.fireSndDelay <= 0 && v3->m_data.stopSnd )
    {
      self->s.loopSound = 0;
      if ( v3->m_data.stopSnd )
      {
        v5 = G_Utils_SpawnEventEntity(&self->r.currentOrigin, 3);
        v5->s.eventParm = v3->m_data.stopSnd;
        v5->s.otherEntityNum = self->s.number;
        v5->s.index.brushModel = self->s.index.brushModel;
        *(_QWORD *)v5->clientMask.array = 0i64;
        *(_QWORD *)&v5->clientMask.array[2] = 0i64;
        *(_QWORD *)&v5->clientMask.array[4] = 0i64;
        v5->clientMask.array[6] = 0;
        if ( v4 )
        {
          if ( v3->m_data.stopSndPlayer )
          {
            v6 = EntHandle::entnum(&self->r.ownerNum);
            v7 = v6;
            if ( (unsigned int)v6 >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v6, 224) )
              __debugbreak();
            v5->clientMask.array[(unsigned __int64)v7 >> 5] |= 0x80000000 >> (v7 & 0x1F);
            v8 = G_Utils_SpawnEventEntity(&self->r.currentOrigin, 3);
            v8->s.eventParm = v3->m_data.stopSndPlayer;
            p_clientMask = &v8->clientMask;
            v8->s.otherEntityNum = self->s.number;
            v8->s.index.brushModel = self->s.index.brushModel;
            v8->clientMask.array[0] = -1;
            *(_QWORD *)&v8->clientMask.array[1] = -1i64;
            *(_QWORD *)&v8->clientMask.array[3] = -1i64;
            *(_QWORD *)&v8->clientMask.array[5] = -1i64;
            v10 = EntHandle::entnum(&self->r.ownerNum);
            bitarray_base<bitarray<224>>::resetBit(p_clientMask, v10);
          }
        }
      }
    }
    else
    {
      self->s.loopSound = v3->m_data.fireLoopSnd;
    }
  }
}

/*
==============
G_Turret_Use
==============
*/
void G_Turret_Use(gentity_s *self, gentity_s *owner, gentity_s *activator)
{
  GTurret *Turret; 
  gclient_s *client; 
  int stance; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  float v11; 
  double v12; 
  float v13; 
  double v15; 
  float v16; 
  double v17; 
  float v18; 
  double v19; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3357, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( self->s.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3358, ASSERT_TYPE_ASSERT, "( self->s.eType == ET_TURRET )", (const char *)&queryFormat, "self->s.eType == ET_TURRET") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( !Turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3361, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3364, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !owner->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3365, ASSERT_TYPE_ASSERT, "( owner->client )", (const char *)&queryFormat, "owner->client") )
    __debugbreak();
  if ( owner->s.number >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3366, ASSERT_TYPE_ASSERT, "( owner->s.number < level.maxclients )", (const char *)&queryFormat, "owner->s.number < level.maxclients") )
    __debugbreak();
  if ( !G_Turret_CanUse(self, owner) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3367, ASSERT_TYPE_ASSERT, "( G_Turret_CanUse( self, owner ) )", (const char *)&queryFormat, "G_Turret_CanUse( self, owner )") )
    __debugbreak();
  client = owner->client;
  owner->active = 1;
  self->active = 1;
  EntHandle::setEnt(&self->r.ownerNum, owner);
  self->s.lerp.u.anonymous.data[6] = owner->s.number;
  client->ps.viewlocked = PLAYERVIEWLOCK_FULL;
  client->ps.viewlocked_entNum = self->s.number;
  Turret->UseVirtual(Turret, self, owner);
  Turret->m_data.flags |= 1u;
  Turret->m_data.startUseTime = level.time;
  Turret->m_data.userOrigin.v[0] = owner->r.currentOrigin.v[0];
  Turret->m_data.userOrigin.v[1] = owner->r.currentOrigin.v[1];
  Turret->m_data.userOrigin.v[2] = owner->r.currentOrigin.v[2];
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 0) )
    Turret->m_data.prevStance = 2;
  else
    Turret->m_data.prevStance = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 1u);
  stance = Turret->m_data.stance;
  p_eFlags = &client->ps.eFlags;
  if ( stance == 2 )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(p_eFlags, ACTIVE, 5u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&client->ps.eFlags, ACTIVE, 6u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&self->s.lerp.eFlags, ACTIVE, 5u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&self->s.lerp.eFlags, ACTIVE, 6u);
  }
  else if ( stance == 1 )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(p_eFlags, ACTIVE, 6u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&client->ps.eFlags, ACTIVE, 5u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&self->s.lerp.eFlags, ACTIVE, 6u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&self->s.lerp.eFlags, ACTIVE, 5u);
  }
  else
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(p_eFlags, ACTIVE, 5u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&client->ps.eFlags, ACTIVE, 6u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&self->s.lerp.eFlags, ACTIVE, 5u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&self->s.lerp.eFlags, ACTIVE, 6u);
  }
  _XMM8 = 0i64;
  __asm { vroundss xmm2, xmm8, xmm1, 1 }
  v11 = (float)((float)((float)(client->ps.viewangles.v[0] - self->r.currentAngles.v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  self->s.lerp.u.turret.gunAngles.v[0] = v11;
  v12 = I_fclamp(v11, Turret->m_data.arcmin.v[0], Turret->m_data.arcmax.v[0]);
  self->s.lerp.u.turret.gunAngles.v[0] = *(float *)&v12;
  if ( G_IsTurretKeepingOrientationOnExit(&self->s) )
  {
    v13 = self->s.lerp.u.turret.gunAngles.v[1] + self->r.currentAngles.v[1];
  }
  else
  {
    __asm { vroundss xmm3, xmm8, xmm2, 1 }
    v13 = (float)((float)((float)(client->ps.viewangles.v[1] - self->r.currentAngles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  }
  self->s.lerp.u.turret.gunAngles.v[1] = v13;
  v15 = I_fclamp(v13, Turret->m_data.arcmin.v[1], Turret->m_data.arcmax.v[1]);
  self->s.lerp.u.turret.gunAngles.v[1] = *(float *)&v15;
  self->s.lerp.u.anonymous.data[2] = 0;
  client->ps.viewAngleClampRange.v[0] = (float)(Turret->m_data.arcmax.v[0] - Turret->m_data.arcmin.v[0]) * 0.5;
  v16 = self->r.currentAngles.v[0] + Turret->m_data.arcmax.v[0];
  client->ps.viewAngleClampBase.v[0] = v16;
  v17 = AngleNormalize360(v16 - client->ps.viewAngleClampRange.v[0]);
  client->ps.viewAngleClampBase.v[0] = *(float *)&v17;
  client->ps.viewAngleClampRange.v[1] = (float)(Turret->m_data.arcmax.v[1] - Turret->m_data.arcmin.v[1]) * 0.5;
  v18 = self->r.currentAngles.v[1] + Turret->m_data.arcmax.v[1];
  client->ps.viewAngleClampBase.v[1] = v18;
  v19 = AngleNormalize360(v18 - client->ps.viewAngleClampRange.v[1]);
  client->ps.viewAngleClampBase.v[1] = *(float *)&v19;
  GScr_Notify(self, scr_const.turretownerchange, 0);
}

/*
==============
GTurret::GetEnemyHeightOffset
==============
*/
void GTurret::GetEnemyHeightOffset(GTurret *this, const gentity_s *enemy, vec3_t *outResultOffset)
{
  bool v7; 
  double v8; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  int v17[4]; 

  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 449, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  _XMM1 = LODWORD(this->m_data.convergenceHeightPercent);
  v7 = *(float *)&_XMM1 < 1.0 && enemy->sentient;
  if ( this->m_data.state == INITIALIZING && v7 )
  {
    if ( *(float *)&_XMM1 < 0.0 || *(float *)&_XMM1 > 1.0 )
    {
      v8 = *(float *)&_XMM1;
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 458, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( m_data.convergenceHeightPercent ) && ( m_data.convergenceHeightPercent ) <= ( 1.f )", "m_data.convergenceHeightPercent not in [0.f, 1.f]\n\t%g not in [%g, %g]", v8, *(double *)&_XMM1, DOUBLE_1_0) )
        __debugbreak();
    }
    this->GetTargetEyePosition(this, enemy, (vec3_t *)v17);
    v10 = enemy->r.currentOrigin.v[0] - *(float *)v17;
    outResultOffset->v[0] = v10;
    v11 = enemy->r.currentOrigin.v[1] - *(float *)&v17[1];
    outResultOffset->v[1] = v11;
    v12 = enemy->r.currentOrigin.v[2] - *(float *)&v17[2];
    outResultOffset->v[2] = v12;
    v13 = 1.0 - this->m_data.convergenceHeightPercent;
    v14 = v12 * v13;
    v15 = v10 * v13;
    v16 = v11 * v13;
  }
  else
  {
    v14 = 0.0;
    v16 = 0.0;
    v15 = 0.0;
  }
  outResultOffset->v[0] = v15;
  outResultOffset->v[1] = v16;
  outResultOffset->v[2] = v14;
}

/*
==============
GTurret::GetFreeTurretHandle
==============
*/
char GTurret::GetFreeTurretHandle(BgObjectHandle<GTurret> *outHandle)
{
  int v2; 
  GTurret **i; 
  GTurret *v4; 

  if ( !outHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 236, ASSERT_TYPE_ASSERT, "( outHandle )", (const char *)&queryFormat, "outHandle") )
    __debugbreak();
  if ( outHandle->m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 237, ASSERT_TYPE_ASSERT, "( !outHandle->IsDefined() )", (const char *)&queryFormat, "!outHandle->IsDefined()") )
    __debugbreak();
  if ( !(_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 238, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  v2 = 0;
  for ( i = GTurret::ms_turretArray; ; ++i )
  {
    v4 = *i;
    if ( !*i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 243, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
      __debugbreak();
    if ( !v4->m_inuse )
      break;
    if ( (unsigned int)++v2 >= 0x80 )
      return 0;
  }
  outHandle->m_objIndex = v2 + 1;
  return 1;
}

/*
==============
GTurret::GetRemainingConvergenceTime
==============
*/
__int64 GTurret::GetRemainingConvergenceTime(GTurret *this, int type)
{
  __int64 v2; 

  v2 = type;
  if ( (unsigned int)type > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 441, ASSERT_TYPE_ASSERT, "( type == PITCH || type == YAW )", (const char *)&queryFormat, "type == PITCH || type == YAW") )
    __debugbreak();
  return (unsigned int)(this->m_data.targetTime + this->m_data.convergenceTime[v2] - level.time);
}

/*
==============
GTurret::InitTurrets
==============
*/
void GTurret::InitTurrets(void)
{
  GTurret **v0; 
  __int64 v1; 
  GTurret *v2; 

  if ( !(_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 206, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  v0 = GTurret::ms_turretArray;
  v1 = 128i64;
  do
  {
    v2 = *v0;
    if ( !*v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 211, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
      __debugbreak();
    ++v0;
    v2->m_inuse = 0;
    --v1;
  }
  while ( v1 );
}

/*
==============
GTurret::ReturnToDefaultPos
==============
*/
bool GTurret::ReturnToDefaultPos(GTurret *this, gentity_s *self, bool bManned)
{
  float dropPitch; 
  vec2_t desiredAngles; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1894, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( bManned )
    dropPitch = 0.0;
  else
    dropPitch = this->m_data.dropPitch;
  desiredAngles.v[0] = dropPitch;
  desiredAngles.v[1] = 0.0;
  G_Turret_SetState(self, IDLE);
  return GTurret::UpdateTargetAngles(this, self, &desiredAngles, bManned);
}

/*
==============
GTurret::SetTargetEnt
==============
*/
void GTurret::SetTargetEnt(GTurret *this, const gentity_s *ent, const vec3_t *entOffset)
{
  const gentity_s *v6; 
  float v7; 
  float v8; 
  int time; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2273, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( EntHandle::isDefined(&this->m_data.target) )
    v6 = EntHandle::ent(&this->m_data.target);
  else
    v6 = NULL;
  if ( v6 != ent || (v7 = entOffset->v[1] - this->m_data.targetOffset.v[1], v8 = entOffset->v[2] - this->m_data.targetOffset.v[2], (float)((float)((float)(v7 * v7) + (float)((float)(entOffset->v[0] - this->m_data.targetOffset.v[0]) * (float)(entOffset->v[0] - this->m_data.targetOffset.v[0]))) + (float)(v8 * v8)) > 0.001) )
  {
    EntHandle::setEnt(&this->m_data.target, ent);
    time = level.time;
    this->m_data.flags &= ~0x40u;
    this->m_data.targetTime = time;
    this->m_data.targetOffset.v[0] = entOffset->v[0];
    this->m_data.targetOffset.v[1] = entOffset->v[1];
    this->m_data.targetOffset.v[2] = entOffset->v[2];
  }
}

/*
==============
GTurret::SetupFireParams
==============
*/
void GTurret::SetupFireParams(GTurret *this, const gentity_s *const self, const int gametime, BgWeaponParms *const outParams)
{
  unsigned __int16 number; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  const gentity_s *v10; 
  unsigned int v11; 
  __int64 v12; 
  int v13; 

  number = self->r.ownerNum.number;
  if ( !number )
    goto LABEL_20;
  v7 = number;
  v8 = number - 1;
  if ( v8 >= 0x800 )
  {
    v13 = 2048;
    v11 = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v9 = v7 - 1;
  if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v9] )
  {
    LODWORD(v12) = self->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v12) )
      __debugbreak();
  }
  if ( !self->r.ownerNum.number )
  {
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1531, ASSERT_TYPE_ASSERT, "(self->r.ownerNum.isDefined())", "%s\n\tGTurret::Fire(): expected turret to have a valid owner.", "self->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v10 = EntHandle::ent(&self->r.ownerNum);
  G_Turret_SetupFireParams(self, v10, (const scr_string_t)scr_const.tag_aim, outParams);
}

/*
==============
GTurret::Think_ClientInternal
==============
*/
void GTurret::Think_ClientInternal(GTurret *this, gentity_s *self, gentity_s *owner, bool clientActive)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1490, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1491, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !owner->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1492, ASSERT_TYPE_ASSERT, "( owner->client )", (const char *)&queryFormat, "owner->client") )
    __debugbreak();
  if ( clientActive )
  {
    if ( !self->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1496, ASSERT_TYPE_ASSERT, "( self->active )", (const char *)&queryFormat, "self->active") )
      __debugbreak();
    G_Turret_Track(self, owner);
    G_Turret_UpdateBarrelRotation(self, owner);
    G_Turret_UpdateHeat(self, owner);
    G_Turret_UpdateSound(self);
  }
  else if ( EntHandle::isDefined(&self->r.ownerNum) && EntHandle::ent(&self->r.ownerNum) == owner )
  {
    G_Turret_ClientStopUsingTurret(self);
  }
}

/*
==============
GTurret::Think_ManualInternal
==============
*/
char GTurret::Think_ManualInternal(GTurret *this, gentity_s *self, gentity_s **outTargetEnt)
{
  unsigned int v4; 
  gentity_s *v7; 
  vec3_t *p_manualTargetOffset; 
  float v9; 
  float v10; 
  float v11; 
  int bShoot; 

  v4 = (unsigned int)this->m_data.flags >> 4;
  if ( EntHandle::isDefined(&this->m_data.manualTarget) )
    v7 = EntHandle::ent(&this->m_data.manualTarget);
  else
    v7 = NULL;
  if ( outTargetEnt )
    *outTargetEnt = v7;
  if ( v7 )
  {
    p_manualTargetOffset = &this->m_data.manualTargetOffset;
    v9 = v7->r.currentOrigin.v[1] + this->m_data.manualTargetOffset.v[1];
    v10 = (float)(v7->r.currentOrigin.v[0] + this->m_data.manualTargetOffset.v[0]) - self->r.currentOrigin.v[0];
    v11 = (float)(v7->r.currentOrigin.v[2] + this->m_data.manualTargetOffset.v[2]) - self->r.currentOrigin.v[2];
    if ( (float)((float)((float)((float)(v9 - self->r.currentOrigin.v[1]) * (float)(v9 - self->r.currentOrigin.v[1])) + (float)(v10 * v10)) + (float)(v11 * v11)) < this->m_data.maxRangeSquared )
    {
      bShoot = v4 & 1;
      if ( !v7->sentient )
      {
        GTurret::AimAtEntity(this, self, v7, p_manualTargetOffset, bShoot);
        return 1;
      }
      if ( GTurret::AimAtSentient(this, self, v7, p_manualTargetOffset, bShoot, 0) )
        return 1;
    }
  }
  return 0;
}

/*
==============
GTurret::UpdateTargetAngles
==============
*/
char GTurret::UpdateTargetAngles(GTurret *this, gentity_s *self, const vec2_t *desiredAngles, const bool bManned)
{
  GTurret *Turret; 
  GTurretData *p_m_data; 
  char v10; 
  char v11; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v14; 
  const dvar_t *v15; 
  vec2_t *p_outAngularVelocity; 
  unsigned int v26; 
  signed __int64 v27; 
  float frameDuration; 
  float v30; 
  float v31; 
  float v33; 
  float v34; 
  float v35; 
  gentity_s *v36; 
  EntHandle *v37; 
  __int64 v38; 
  float v39; 
  float v41; 
  float v42; 
  int v43; 
  float v44; 
  float v45; 
  __int64 v46; 
  __int64 v47; 
  bool v48; 
  float v50; 
  gentity_s *ent; 
  EntHandle *v52; 
  GTurret *v53; 
  vec2_t outAngularVelocity; 

  ent = self;
  v53 = this;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1724, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  p_m_data = &Turret->m_data;
  v52 = (EntHandle *)&Turret->m_data;
  if ( Turret == (GTurret *)-12i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1728, ASSERT_TYPE_ASSERT, "(turretData)", (const char *)&queryFormat, "turretData") )
    __debugbreak();
  G_Turret_ScanStop(p_m_data);
  if ( (Turret->m_data.flags & 0x4000000) != 0 )
  {
    Turret->m_data.targetTime = level.time;
    return 0;
  }
  v10 = 1;
  v11 = 1;
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  v14 = BG_WeaponDef(WeaponForEntity, 0);
  v48 = Turret->UpdateTargetAngles_GetStartingPitch(Turret, self, &v50);
  G_Turret_CalculateConvergenceAngularVelocity(self, desiredAngles, &outAngularVelocity);
  v15 = DCONST_DVARMPBOOL_turret_enableLegacyManualTurretTracking;
  if ( !DCONST_DVARMPBOOL_turret_enableLegacyManualTurretTracking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turret_enableLegacyManualTurretTracking") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
    goto LABEL_18;
  if ( !bManned )
  {
LABEL_19:
    if ( (p_m_data->flags & 0x2000000) == 0 )
    {
      _XMM3 = LODWORD(FLOAT_200_0);
      outAngularVelocity.v[1] = FLOAT_200_0;
      goto LABEL_22;
    }
LABEL_21:
    _XMM0 = LODWORD(v14->maxTurnSpeed[0]);
    __asm { vminss  xmm1, xmm0, dword ptr [rsp+158h+outAngularVelocity] }
    _XMM2 = LODWORD(v14->maxTurnSpeed[1]);
    __asm
    {
      vminss  xmm0, xmm2, dword ptr [rsp+158h+outAngularVelocity+4]
      vmaxss  xmm3, xmm1, dword ptr [rbx+0C70h]
      vmaxss  xmm1, xmm0, dword ptr [rbx+0C74h]
    }
    outAngularVelocity.v[1] = *(float *)&_XMM1;
    goto LABEL_22;
  }
  if ( v48 || level.time <= p_m_data->startUseTime + 250 || p_m_data->state )
  {
LABEL_18:
    if ( bManned )
      goto LABEL_21;
    goto LABEL_19;
  }
  _XMM3 = LODWORD(v14->aiReturnToDefaultSpeed[0]);
  outAngularVelocity.v[1] = v14->aiReturnToDefaultSpeed[1];
LABEL_22:
  p_outAngularVelocity = &outAngularVelocity;
  _XMM0 = this->m_data.flags & 0x300000;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm11, xmm2
  }
  v26 = 0;
  v27 = (char *)&self->s.lerp.u - (char *)&outAngularVelocity;
  outAngularVelocity.v[0] = *(float *)&_XMM0;
  _XMM12 = 0i64;
  do
  {
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    frameDuration = (float)level.frameDuration;
    if ( v26 >= 2 )
    {
      LODWORD(v47) = 2;
      LODWORD(v46) = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v46, v47) )
        __debugbreak();
    }
    v30 = (float)(frameDuration * p_outAngularVelocity->v[0]) * 0.001;
    p_outAngularVelocity->v[0] = v30;
    if ( v26 >= 2 )
    {
      LODWORD(v47) = 2;
      LODWORD(v46) = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v46, v47) )
        __debugbreak();
    }
    if ( v30 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1779, ASSERT_TYPE_ASSERT, "( fSpeed[i] > 0 )", (const char *)&queryFormat, "fSpeed[i] > 0") )
      __debugbreak();
    if ( v26 >= 3 )
    {
      LODWORD(v47) = 3;
      LODWORD(v46) = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v46, v47) )
        __debugbreak();
    }
    v31 = *(float *)((char *)p_outAngularVelocity->v + v27);
    if ( v26 >= 2 )
    {
      LODWORD(v47) = 2;
      LODWORD(v46) = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v46, v47) )
        __debugbreak();
    }
    __asm { vroundss xmm3, xmm12, xmm2, 1 }
    v34 = (float)((float)((float)(*(float *)((char *)p_outAngularVelocity->v + (char *)desiredAngles - (char *)&outAngularVelocity) - v31) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    v33 = v34;
    if ( COERCE_FLOAT(LODWORD(v34) & _xmm) > 5.0 )
      v11 = 0;
    if ( v26 >= 2 )
    {
      LODWORD(v47) = 2;
      LODWORD(v46) = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v46, v47) )
        __debugbreak();
    }
    v35 = p_outAngularVelocity->v[0];
    if ( v34 <= p_outAngularVelocity->v[0] )
    {
      if ( v26 >= 2 )
      {
        LODWORD(v47) = 2;
        LODWORD(v46) = v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v46, v47) )
          __debugbreak();
      }
      if ( v34 < COERCE_FLOAT(LODWORD(v35) ^ _xmm) )
      {
        v10 = 0;
        if ( v26 >= 2 )
        {
          LODWORD(v47) = 2;
          LODWORD(v46) = v26;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v46, v47) )
          {
            __debugbreak();
            v35 = p_outAngularVelocity->v[0];
          }
        }
        LODWORD(v33) = LODWORD(v35) ^ _xmm;
      }
    }
    else
    {
      v10 = 0;
      v33 = p_outAngularVelocity->v[0];
      if ( v26 >= 2 )
      {
        LODWORD(v47) = 2;
        LODWORD(v46) = v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v46, v47) )
        {
          __debugbreak();
          v33 = v35;
        }
      }
    }
    if ( v26 >= 3 )
    {
      LODWORD(v47) = 3;
      LODWORD(v46) = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v46, v47) )
        __debugbreak();
    }
    *(float *)((char *)p_outAngularVelocity->v + v27) = v33 + *(float *)((char *)p_outAngularVelocity->v + v27);
    p_outAngularVelocity = (vec2_t *)((char *)p_outAngularVelocity + 4);
    ++v26;
  }
  while ( (int)v26 < 2 );
  v36 = ent;
  v37 = v52;
  v38 = (__int64)v53;
  if ( v48 )
  {
    v39 = v50;
    ent->s.lerp.u.anonymous.data[2] = ent->s.lerp.u.anonymous.data[0];
    __asm { vroundss xmm3, xmm12, xmm2, 1 }
    v42 = (float)((float)((float)(v36->s.lerp.u.turret.gunAngles.v[0] - v39) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    v41 = v42;
    if ( v42 <= outAngularVelocity.v[0] )
    {
      if ( v42 >= COERCE_FLOAT(LODWORD(outAngularVelocity.v[0]) ^ _xmm) )
      {
LABEL_68:
        v36->s.lerp.u.turret.gunAngles.v[0] = v41 + v39;
        v36->s.lerp.u.turret.gunAngles.v[2] = v36->s.lerp.u.turret.gunAngles.v[2] - (float)(v41 + v39);
        goto LABEL_69;
      }
      LODWORD(v41) = LODWORD(outAngularVelocity.v[0]) ^ _xmm;
    }
    else
    {
      v41 = outAngularVelocity.v[0];
    }
    v10 = 0;
    goto LABEL_68;
  }
LABEL_69:
  v43 = *(_DWORD *)(v38 + 16);
  if ( (v43 & 0x200000) != 0 )
  {
    v44 = v36->s.lerp.u.turret.gunAngles.v[0];
    v45 = *(float *)(v38 + 180);
    if ( (v43 & 0x400000) != 0 )
    {
      if ( v44 >= v45 )
        goto LABEL_72;
    }
    else if ( v44 <= v45 )
    {
LABEL_72:
      *(_DWORD *)(v38 + 16) = v43 & 0xFFEFFFFF;
      goto LABEL_73;
    }
    v36->s.lerp.u.turret.gunAngles.v[2] = v44 - v45;
  }
LABEL_73:
  if ( v11 )
  {
    if ( EntHandle::isDefined(v37 + 16) )
      GScr_Notify(v36, scr_const.turret_on_target, 0);
  }
  return v10;
}

