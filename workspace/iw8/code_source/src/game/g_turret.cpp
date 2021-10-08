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
  __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  bool v35; 
  char v62; 
  int v63; 
  int v64; 
  unsigned int v65; 
  GVehicles *v66; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  int flags; 
  __int64 v105; 
  __int64 v106; 
  char v108; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RBX = turretEnt;
  __asm { vmovaps xmmword ptr [rax-58h], xmm8 }
  _RDI = this;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0C8h+var_88], xmm11
  }
  if ( !turretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 474, ASSERT_TYPE_ASSERT, "(turretEnt)", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 475, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !_RBX->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 477, ASSERT_TYPE_ASSERT, "( turretEnt->active )", (const char *)&queryFormat, "turretEnt->active") )
    __debugbreak();
  number = _RBX->r.ownerNum.number;
  if ( !number )
    goto LABEL_77;
  v14 = number;
  v15 = number - 1;
  if ( v15 >= 0x800 )
  {
    LODWORD(v105) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v105, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v16 = v14 - 1;
  if ( g_entities[v16].r.isInUse != g_entityIsInUse[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v16] )
  {
    LODWORD(v106) = _RBX->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v106) )
      __debugbreak();
  }
  if ( !_RBX->r.ownerNum.number )
  {
LABEL_77:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 478, ASSERT_TYPE_ASSERT, "( turretEnt->r.ownerNum.isDefined() )", (const char *)&queryFormat, "turretEnt->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v17 = _RBX->r.ownerNum.number;
  if ( (unsigned int)(v17 - 1) >= 0x7FF )
  {
    LODWORD(v106) = 2047;
    LODWORD(v105) = v17 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v105, v106) )
      __debugbreak();
  }
  v18 = _RBX->r.ownerNum.number;
  if ( (unsigned int)(v18 - 1) >= 0x800 )
  {
    LODWORD(v106) = 2048;
    LODWORD(v105) = v18 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v105, v106) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v19 = v18 - 1;
  if ( g_entities[v19].r.isInUse != g_entityIsInUse[v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v19] )
  {
    LODWORD(v106) = _RBX->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v106) )
      __debugbreak();
  }
  if ( &g_entities[_RBX->r.ownerNum.number - 1] != playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 479, ASSERT_TYPE_ASSERT, "( turretEnt->r.ownerNum.ent() == playerEnt )", (const char *)&queryFormat, "turretEnt->r.ownerNum.ent() == playerEnt") )
    __debugbreak();
  _R14 = playerEnt->client;
  __asm
  {
    vmovss  xmm8, cs:__real@3b360b61
    vmovss  xmm10, cs:__real@3f000000
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm11, cs:__real@43b40000
  }
  _R14->ps.viewlocked_entNum = _RBX->s.number;
  __asm
  {
    vmovss  xmm1, dword ptr [r14+1DCh]
    vsubss  xmm0, xmm1, dword ptr [rdi+0D8h]
    vmulss  xmm3, xmm0, xmm8
    vmovss  dword ptr [rdi+0D8h], xmm1
    vmovss  xmm1, dword ptr [r14+1D8h]
    vsubss  xmm0, xmm1, dword ptr [rdi+0E0h]
    vmulss  xmm5, xmm0, xmm8
    vmovss  dword ptr [rdi+0E0h], xmm1
  }
  _ECX = _R14->ps.commandTime - _RDI->m_data.playerCmdTime;
  __asm
  {
    vaddss  xmm1, xmm3, xmm10
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm2, xmm9, xmm1, 1
  }
  _RDI->m_data.playerCmdTime = _R14->ps.commandTime;
  v35 = (unsigned int)_ECX <= 1;
  if ( _ECX < 1 )
    _ECX = 1;
  __asm
  {
    vmovd   xmm0, ecx
    vcvtdq2ps xmm0, xmm0
    vdivss  xmm4, xmm7, xmm0
    vsubss  xmm0, xmm3, xmm2
    vaddss  xmm2, xmm5, xmm10
    vmulss  xmm0, xmm0, xmm11
    vmulss  xmm6, xmm0, xmm4
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm1, xmm5, xmm3
    vmulss  xmm0, xmm1, xmm11
    vmulss  xmm5, xmm0, xmm4
    vmulss  xmm4, xmm4, cs:smoothDurationMs
    vcomiss xmm4, xmm7
  }
  if ( !v35 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+0DCh]
      vdivss  xmm3, xmm7, xmm4
      vmulss  xmm0, xmm1, xmm3
      vsubss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm6
      vaddss  xmm6, xmm2, xmm1
    }
  }
  __asm { vmovss  dword ptr [rdi+0DCh], xmm6 }
  if ( !v35 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+0E4h]
      vdivss  xmm3, xmm7, xmm4
      vmulss  xmm0, xmm1, xmm3
      vsubss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm5
      vaddss  xmm5, xmm2, xmm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm1, cs:threshold_3
    vandps  xmm6, xmm6, xmm0
    vcomiss xmm6, xmm1
    vmovss  dword ptr [rdi+0E4h], xmm5
  }
  if ( !v35 )
    goto LABEL_53;
  __asm
  {
    vandps  xmm5, xmm5, xmm0
    vcomiss xmm5, xmm1
  }
  if ( v35 )
    v62 = 0;
  else
LABEL_53:
    v62 = 1;
  v63 = _RBX->s.lerp.u.anonymous.data[5];
  v64 = v63 | 0x20;
  v65 = v63 & 0xFFFFFFDF;
  if ( !v62 )
    v64 = v65;
  _RBX->s.lerp.u.anonymous.data[5] = v64;
  if ( !G_Turret_IsMountedOnVehicle(_RBX) )
    goto LABEL_78;
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v66 = GVehicles::ms_gVehiclesSystem;
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 519, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &_RBX->s);
  if ( !v66->AimTurret(v66, WeaponForEntity, _RBX->s.number) )
  {
LABEL_78:
    if ( !G_GameInterface_Turret_AimTurret(&_R14->ps, _RBX) )
    {
      if ( BG_IsRemoteTurretActive(&_R14->ps) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 534, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
          __debugbreak();
        __asm
        {
          vmulss  xmm4, xmm8, dword ptr [r14+1D8h]
          vaddss  xmm2, xmm4, xmm10
          vroundss xmm3, xmm9, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm11
          vmovss  dword ptr [rbx+58h], xmm0
          vmulss  xmm3, xmm8, dword ptr [r14+1DCh]
          vaddss  xmm1, xmm3, xmm10
          vroundss xmm2, xmm9, xmm1, 1
          vsubss  xmm0, xmm3, xmm2
          vmulss  xmm1, xmm0, xmm11
          vmovss  dword ptr [rbx+5Ch], xmm1
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+1D8h]
          vsubss  xmm1, xmm0, dword ptr [rbx+13Ch]
          vmulss  xmm4, xmm1, xmm8
          vaddss  xmm2, xmm4, xmm10
          vroundss xmm3, xmm9, xmm2, 1
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm0, xmm0, xmm11; val
          vmovss  dword ptr [rbx+58h], xmm0
          vmovss  xmm2, dword ptr [rdi+24h]; max
          vmovss  xmm1, dword ptr [rdi+1Ch]; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rbx+58h], xmm0
          vmovss  xmm1, dword ptr [r14+1DCh]
          vsubss  xmm2, xmm1, dword ptr [rbx+140h]
          vmulss  xmm4, xmm2, xmm8
          vaddss  xmm3, xmm4, xmm10
          vroundss xmm2, xmm9, xmm3, 1
          vsubss  xmm0, xmm4, xmm2
          vmulss  xmm0, xmm0, xmm11; val
          vmovss  dword ptr [rbx+5Ch], xmm0
          vmovss  xmm2, dword ptr [rdi+28h]; max
          vmovss  xmm1, dword ptr [rdi+20h]; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovss  dword ptr [rbx+5Ch], xmm0 }
      }
    }
    _RBX->s.lerp.u.anonymous.data[2] = 0;
  }
  flags = _RDI->m_data.flags;
  if ( (flags & 1) != 0 )
    _RDI->m_data.flags = flags & 0xFFFFFFFE;
  _R11 = &v108;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
GTurret::AimAtEntity
==============
*/
char GTurret::AimAtEntity(GTurret *this, gentity_s *self, const gentity_s *ent, const vec3_t *entOffset, const int bShoot)
{
  vec3_t vPoint; 
  vec2_t out_localAngles; 
  vec3_t out_sourcePosition; 

  _RBX = ent;
  _RDI = entOffset;
  GTurret::SetTargetEnt(this, ent, entOffset);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vaddss  xmm1, xmm0, dword ptr [rbx+130h]
    vmovss  xmm2, dword ptr [rbx+134h]
    vaddss  xmm0, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+78h+vPoint], xmm1
    vmovss  xmm1, dword ptr [rbx+138h]
    vaddss  xmm2, xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+78h+vPoint+8], xmm2
    vmovss  dword ptr [rsp+78h+vPoint+4], xmm0
  }
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2239, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( G_Turret_GetAimAngleAndPosition_Internal(self, &vPoint, &out_sourcePosition, &out_localAngles, 0) )
  {
    if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2223, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
      __debugbreak();
    _RBX = GTurret::GetTurret(&self->turretHandle);
    G_Turret_UpdateShootingState(self, bShoot, &out_localAngles);
    _RBX->m_data.flags |= 0x20u;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+78h+vPoint]
      vmovss  dword ptr [rbx+90h], xmm0
      vmovss  xmm1, dword ptr [rsp+78h+vPoint+4]
      vmovss  dword ptr [rbx+94h], xmm1
      vmovss  xmm0, dword ptr [rsp+78h+vPoint+8]
      vmovss  dword ptr [rbx+98h], xmm0
    }
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
  GWeaponMap *Instance; 
  bool HasPmoveMovement; 
  scr_string_t v32; 
  scr_string_t v39; 
  vec3_t out; 
  vec3_t angles; 
  tmat43_t<vec3_t> outTagMat; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v50; 

  _RSI = turretEnt;
  _RBX = ci;
  _RDI = playerEnt;
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 809, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 810, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 811, ASSERT_TYPE_ASSERT, "(turretEnt)", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  if ( !BG_TurretWeaponUses3pIK(turretWeapon, 0) )
    return 0;
  if ( G_Utils_DObjGetWorldTagMatrix(_RSI, scr_const.tag_gunner, &outTagMat) )
  {
    __asm { vmovaps [rsp+140h+var_50], xmm6 }
    _R13 = G_GetEntityPlayerState(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+130h]
      vmovss  xmm1, dword ptr [rsi+134h]
      vsubss  xmm2, xmm1, dword ptr [rsp+140h+outTagMat+28h]
      vsubss  xmm4, xmm0, dword ptr [rsp+140h+outTagMat+24h]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vsqrtss xmm6, xmm1, xmm1
    }
    if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1200, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    __asm
    {
      vmovss  xmm1, cs:__real@43480000; maxAbsValueSize
      vmovaps xmm0, xmm6; value
    }
    _R13->turretOffset = MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 6u);
    Instance = GWeaponMap::GetInstance();
    HasPmoveMovement = BG_Turret_HasPmoveMovement(Instance, _R13);
    __asm { vmovaps xmm6, [rsp+140h+var_50] }
    if ( !HasPmoveMovement )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+outTagMat+28h]
        vmovss  xmm1, dword ptr [rsp+140h+outTagMat+2Ch]
        vmovss  xmm2, dword ptr [rsp+140h+outTagMat+24h]
        vmovss  dword ptr [rdi+134h], xmm0
        vmovss  dword ptr [rdi+138h], xmm1
        vmovss  dword ptr [rdi+130h], xmm2
        vmovss  dword ptr [r13+30h], xmm2
        vmovss  xmm0, dword ptr [rsp+140h+outTagMat+28h]
        vmovss  dword ptr [r13+34h], xmm0
        vmovss  xmm1, dword ptr [rsp+140h+outTagMat+2Ch]
        vmovss  dword ptr [r13+38h], xmm1
      }
      AxisToAngles((const tmat33_t<vec3_t> *)&outTagMat, &_RDI->r.currentAngles);
    }
    BG_Turret_UpdateAnimParams(_RBX, &_R13->origin, &_R13->viewangles, &_RSI->r.currentOrigin, &_RSI->r.currentAngles);
    AnglesToAxis(&_RDI->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+130h]
      vmovss  xmm1, dword ptr [rdi+134h]
      vmovss  [rbp+40h+var_9C], xmm0
      vmovss  xmm0, dword ptr [rdi+138h]
      vmovss  [rbp+40h+var_94], xmm0
      vmovss  [rbp+40h+var_98], xmm1
    }
    v32 = XAnimIKGetLocatorTagName(XANIM_IK_ACTOR_RIGHT_HAND);
    if ( G_Utils_DObjGetWorldTagMatrix(_RSI, v32, &v50) )
    {
      MatrixTransposeTransformVector43(&v50.m[3], &axis, &out);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+out]
        vmovss  xmm1, dword ptr [rsp+140h+out+4]
        vmovss  dword ptr [rbx+38B0h], xmm0
        vmovss  xmm0, dword ptr [rsp+140h+out+8]
        vmovss  dword ptr [rbx+38B8h], xmm0
        vmovss  dword ptr [rbx+38B4h], xmm1
      }
      AxisToAngles((const tmat33_t<vec3_t> *)&v50, &angles);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+angles]
        vmovss  xmm1, dword ptr [rsp+140h+angles+4]
        vmovss  dword ptr [rbx+38C8h], xmm0
        vmovss  xmm0, dword ptr [rsp+140h+angles+8]
        vmovss  dword ptr [rbx+38D0h], xmm0
        vmovss  dword ptr [rbx+38CCh], xmm1
      }
    }
    v39 = XAnimIKGetLocatorTagName(XANIM_IK_ACTOR_LEFT_HAND);
    if ( G_Utils_DObjGetWorldTagMatrix(_RSI, v39, &v50) )
    {
      MatrixTransposeTransformVector43(&v50.m[3], &axis, &out);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+out]
        vmovss  xmm1, dword ptr [rsp+140h+out+4]
        vmovss  dword ptr [rbx+38A4h], xmm0
        vmovss  xmm0, dword ptr [rsp+140h+out+8]
        vmovss  dword ptr [rbx+38ACh], xmm0
        vmovss  dword ptr [rbx+38A8h], xmm1
      }
      AxisToAngles((const tmat33_t<vec3_t> *)&v50, &angles);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+angles]
        vmovss  xmm1, dword ptr [rsp+140h+angles+4]
        vmovss  dword ptr [rbx+38BCh], xmm0
        vmovss  xmm0, dword ptr [rsp+140h+angles+8]
        vmovss  dword ptr [rbx+38C4h], xmm0
        vmovss  dword ptr [rbx+38C0h], xmm1
      }
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
bool G_Turret_AimAtSentient_Internal(gentity_s *self, gentity_s *enemy, const vec3_t *enemyOffset, int bShoot, int missTime, vec2_t *out_localTargetAngles)
{
  char v20; 
  bool v21; 
  bool v22; 
  int CanConvergeOnHeadOffset; 
  bool result; 
  int flags; 
  vec2_t *out_localAngles; 
  double v113; 
  double v114; 
  vec3_t targetEntOffset; 
  vec3_t origin; 
  vec3_t out_targetPosition; 
  vec3_t v118; 
  vec3_t v119; 
  tmat43_t<vec3_t> outTagMat; 
  vec3_t out_sourcePosition; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-58h], xmm7 }
  _R13 = enemyOffset;
  _RSI = enemy;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2394, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2395, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !_RSI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2396, ASSERT_TYPE_ASSERT, "( enemy->sentient )", (const char *)&queryFormat, "enemy->sentient") )
    __debugbreak();
  if ( missTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2397, ASSERT_TYPE_ASSERT, "( missTime >= 0 )", (const char *)&queryFormat, "missTime >= 0") )
    __debugbreak();
  _RBX = GTurret::GetTurret(&self->turretHandle);
  GTurret::SetTargetEnt(_RBX, _RSI, _R13);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8Ch]
    vmovss  xmm7, cs:__real@3f800000
    vcomiss xmm0, xmm7
  }
  v21 = v20 && _RSI->sentient;
  v22 = _RBX->m_data.state == INITIALIZING;
  __asm
  {
    vmovaps xmmword ptr [rsp+160h+var_48+8], xmm6
    vmovaps [rsp+160h+var_68+8], xmm8
    vmovaps [rsp+160h+var_78+8], xmm9
    vmovaps [rsp+160h+var_88+8], xmm10
  }
  if ( v22 && v21 )
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm0, xmm6
      vcomiss xmm0, xmm7
      vcvtss2sd xmm2, xmm0, xmm0
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  qword ptr [rsp+160h+var_128], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+160h+var_130], xmm1
      vmovsd  [rsp+160h+out_localAngles], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 458, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( m_data.convergenceHeightPercent ) && ( m_data.convergenceHeightPercent ) <= ( 1.f )", "m_data.convergenceHeightPercent not in [0.f, 1.f]\n\t%g not in [%g, %g]", *(double *)&out_localAngles, v113, v114) )
      __debugbreak();
    _RBX->GetTargetEyePosition(_RBX, _RSI, &v118);
    __asm
    {
      vsubss  xmm2, xmm7, dword ptr [rbx+8Ch]
      vmovss  xmm0, dword ptr [rsi+130h]
      vsubss  xmm1, xmm0, dword ptr [rsp+160h+var_F0]
      vmovss  xmm0, dword ptr [rsi+134h]
      vmulss  xmm8, xmm1, xmm2
      vsubss  xmm1, xmm0, dword ptr [rsp+160h+var_F0+4]
      vmovss  xmm0, dword ptr [rsi+138h]
      vmulss  xmm9, xmm1, xmm2
      vsubss  xmm1, xmm0, dword ptr [rsp+160h+var_F0+8]
      vmulss  xmm10, xmm1, xmm2
      vmovss  dword ptr [rsp+160h+targetEntOffset+8], xmm10
      vmovss  dword ptr [rsp+160h+targetEntOffset], xmm8
      vmovss  dword ptr [rsp+160h+targetEntOffset+4], xmm9
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  dword ptr [rsp+160h+targetEntOffset], xmm6
      vmovss  dword ptr [rsp+160h+targetEntOffset+4], xmm6
      vmovss  dword ptr [rsp+160h+targetEntOffset+8], xmm6
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm9, xmm9, xmm9
      vxorps  xmm10, xmm10, xmm10
    }
  }
  CanConvergeOnHeadOffset = G_Turret_CanConvergeOnHeadOffset(self, _RSI, &targetEntOffset);
  __asm
  {
    vmovss  xmm0, dword ptr [r13+0]
    vmovss  xmm1, dword ptr [r13+4]
    vmovss  xmm2, dword ptr [r13+8]
  }
  if ( CanConvergeOnHeadOffset )
  {
    __asm
    {
      vaddss  xmm0, xmm8, xmm0
      vmovss  dword ptr [rsp+160h+targetEntOffset], xmm0
      vaddss  xmm0, xmm2, xmm10
      vmovss  dword ptr [rsp+160h+targetEntOffset+8], xmm0
      vaddss  xmm1, xmm9, xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rsp+160h+targetEntOffset], xmm0
      vmovss  dword ptr [rsp+160h+targetEntOffset+8], xmm2
    }
  }
  __asm { vmovss  dword ptr [rsp+160h+targetEntOffset+4], xmm1 }
  if ( G_Turret_CanTargetSentient(self, _RSI, &targetEntOffset, &out_targetPosition, &out_sourcePosition, out_localTargetAngles) )
  {
    if ( _RBX->m_data.targetTime + _RBX->m_data.convergenceTime[1] - level.time > 0 )
    {
      flags = _RBX->m_data.flags;
      if ( (flags & 0x40) != 0 )
      {
        if ( missTime > 0 )
        {
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm1, xmm1, ecx
            vcvtsi2ss xmm0, xmm0, r15d
            vdivss  xmm6, xmm1, xmm0
          }
        }
        __asm
        {
          vmovss  xmm3, dword ptr [rbx+0A0h]
          vmovss  xmm5, dword ptr [rbx+0A4h]
          vmulss  xmm0, xmm6, cs:__real@41f00000
          vaddss  xmm4, xmm0, cs:__real@42040000
          vmulss  xmm1, xmm4, dword ptr [rbx+9Ch]
          vaddss  xmm2, xmm1, dword ptr [rsp+160h+out_targetPosition]
          vmulss  xmm0, xmm4, xmm3
          vaddss  xmm1, xmm0, dword ptr [rsp+160h+out_targetPosition+4]
          vmovss  dword ptr [rbp+60h+var_E0], xmm2
          vmulss  xmm2, xmm4, xmm5
          vaddss  xmm0, xmm2, dword ptr [rsp+160h+out_targetPosition+8]
          vmovss  dword ptr [rbp+60h+var_E0+8], xmm0
          vmovss  dword ptr [rbp+60h+var_E0+4], xmm1
        }
        if ( GTurret::AimAtVector(_RBX, self, &v119, bShoot, out_localTargetAngles) )
          goto LABEL_43;
      }
      else
      {
        _RBX->m_data.flags = flags | 0x40;
        if ( !G_Utils_DObjGetWorldTagMatrix(self, scr_const.tag_aim, &outTagMat) )
          goto LABEL_29;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+60h+outTagMat+24h]
          vmovss  xmm8, dword ptr [rsp+160h+out_targetPosition+4]
          vsubss  xmm4, xmm8, dword ptr [rbp+60h+outTagMat+28h]
          vmovss  xmm9, dword ptr [rsp+160h+out_targetPosition]
          vmovss  xmm10, cs:__real@80000000
          vsubss  xmm5, xmm0, xmm9
          vmulss  xmm2, xmm5, xmm5
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm0, xmm2, xmm1
          vsqrtss xmm3, xmm0, xmm0
          vcmpless xmm0, xmm3, xmm10
          vblendvps xmm0, xmm3, xmm7, xmm0
          vdivss  xmm3, xmm7, xmm0
          vmulss  xmm0, xmm3, xmm5
          vmulss  xmm5, xmm0, cs:__real@427c0000
          vmulss  xmm1, xmm3, xmm4
          vmulss  xmm4, xmm1, cs:__real@427c0000
          vmulss  xmm3, xmm5, dword ptr [rbp+60h+outTagMat+4]
          vmulss  xmm0, xmm4, dword ptr [rbp+60h+outTagMat]
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, xmm6
          vaddss  xmm0, xmm4, xmm9
          vaddss  xmm1, xmm5, xmm8
          vmovss  dword ptr [rsp+160h+origin], xmm0
          vmovss  xmm0, dword ptr [rsp+160h+targetEntOffset+8]
          vmovss  dword ptr [rsp+160h+origin+4], xmm1
          vaddss  xmm1, xmm0, dword ptr [rsi+138h]
          vmovss  dword ptr [rsp+160h+origin+8], xmm1
        }
        if ( GTurret::AimAtVector(_RBX, self, &origin, bShoot, out_localTargetAngles) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+160h+origin]
            vsubss  xmm4, xmm0, dword ptr [rsp+160h+out_targetPosition]
            vmovss  dword ptr [rbx+9Ch], xmm4
            vmovss  xmm0, dword ptr [rsp+160h+origin+4]
            vsubss  xmm2, xmm0, dword ptr [rsp+160h+out_targetPosition+4]
            vmovss  dword ptr [rbx+0A0h], xmm2
            vmovss  xmm1, dword ptr [rsp+160h+origin+8]
            vsubss  xmm3, xmm1, dword ptr [rsp+160h+out_targetPosition+8]
            vmulss  xmm1, xmm4, xmm4
            vmulss  xmm0, xmm2, xmm2
          }
LABEL_35:
          __asm
          {
            vaddss  xmm2, xmm1, xmm0
            vmovss  dword ptr [rbx+0A4h], xmm3
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm3, xmm2, xmm2
            vcmpless xmm0, xmm3, xmm10
            vblendvps xmm0, xmm3, xmm7, xmm0
            vdivss  xmm2, xmm7, xmm0
            vmulss  xmm0, xmm4, xmm2
            vmovss  dword ptr [rbx+9Ch], xmm0
            vmulss  xmm1, xmm2, dword ptr [rbx+0A0h]
            vmovss  dword ptr [rbx+0A0h], xmm1
            vmulss  xmm0, xmm2, dword ptr [rbx+0A4h]
            vmovss  dword ptr [rbx+0A4h], xmm0
          }
LABEL_43:
          result = 1;
          goto LABEL_44;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+160h+out_targetPosition+8]
          vmovss  dword ptr [rsp+160h+origin+8], xmm0
        }
        if ( GTurret::AimAtVector(_RBX, self, &origin, bShoot, out_localTargetAngles) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+160h+origin]
            vsubss  xmm4, xmm0, dword ptr [rsp+160h+out_targetPosition]
            vmovss  dword ptr [rbx+9Ch], xmm4
            vmovss  xmm0, dword ptr [rsp+160h+origin+4]
            vsubss  xmm2, xmm0, dword ptr [rsp+160h+out_targetPosition+4]
            vmovss  dword ptr [rbx+0A0h], xmm2
            vmovss  xmm1, dword ptr [rsp+160h+origin+8]
            vsubss  xmm3, xmm1, dword ptr [rsp+160h+out_targetPosition+8]
            vmulss  xmm1, xmm2, xmm2
            vmulss  xmm0, xmm4, xmm4
          }
          goto LABEL_35;
        }
        *(_QWORD *)_RBX->m_data.missOffsetNormalized.v = 0i64;
        _RBX->m_data.missOffsetNormalized.v[2] = 0.0;
      }
    }
    G_Turret_AimAtVector_Internal(self, &out_targetPosition, bShoot, out_localTargetAngles);
    goto LABEL_43;
  }
  _RBX->m_data.flags &= ~0x20u;
  G_Turret_UpdateShootingState(self, bShoot, out_localTargetAngles);
LABEL_29:
  result = 0;
LABEL_44:
  __asm
  {
    vmovaps xmm10, [rsp+160h+var_88+8]
    vmovaps xmm9, [rsp+160h+var_78+8]
    vmovaps xmm8, [rsp+160h+var_68+8]
    vmovaps xmm6, xmmword ptr [rsp+160h+var_48+8]
    vmovaps xmm7, [rsp+160h+var_58+8]
  }
  return result;
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
  const gentity_s *v7; 
  const WeaponDef *weapDef; 
  GVehicles *VehicleSystem; 
  BGVehicles *v23; 
  Vehicle *vehicle; 
  vec3_t dirWs; 

  _RSI = r_wp;
  RootParent = GUtils::GetRootParent(ent);
  v7 = RootParent;
  if ( RootParent )
  {
    if ( RootParent->vehicle )
    {
      _RAX = BG_WeaponDef(r_weapon, 0);
      weapDef = _RAX;
      if ( _RAX )
      {
        __asm
        {
          vmovaps [rsp+78h+var_28], xmm6
          vxorps  xmm6, xmm6, xmm6
          vucomiss xmm6, dword ptr [rax+1E8h]
        }
        VehicleSystem = GVehicles::GetVehicleSystem();
        __asm
        {
          vmovss  xmm3, dword ptr [rsi]
          vmovss  xmm4, dword ptr [rsi+4]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vmovss  xmm1, cs:__real@3f800000
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm0, xmm2, xmm1, xmm0
          vdivss  xmm1, xmm1, xmm0
          vmulss  xmm0, xmm3, xmm1
        }
        v23 = VehicleSystem;
        vehicle = v7->vehicle;
        __asm
        {
          vmulss  xmm1, xmm4, xmm1
          vmovss  dword ptr [rsp+78h+dirWs+4], xmm1
          vmovss  dword ptr [rsp+78h+dirWs], xmm0
          vmovss  dword ptr [rsp+78h+dirWs+8], xmm6
        }
        BGVehicles::PhysicsFireWeapon(v23, vehicle->physicsVehicle, &dirWs, &_RSI->muzzleTrace, weapDef);
        __asm { vmovaps xmm6, [rsp+78h+var_28] }
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
  GTurret *v13; 
  int v14; 
  int v15; 
  int stateChangeTime; 
  int v17; 
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm7 }
  _R14 = outAngularVelocity;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  _RBP = self;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1678, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&_RBP->turretHandle);
  time = level.time;
  v13 = Turret;
  v14 = Turret->m_data.targetTime + Turret->m_data.convergenceTime[1] - level.time;
  v15 = Turret->m_data.targetTime + Turret->m_data.convergenceTime[0] - level.time;
  if ( Turret->m_data.state == INITIALIZING )
  {
    stateChangeTime = Turret->m_data.stateChangeTime;
    if ( stateChangeTime > level.time )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1689, ASSERT_TYPE_ASSERT, "( turretData->stateChangeTime ) <= ( level.time )", "%s <= %s\n\t%i, %i", "turretData->stateChangeTime", "level.time", stateChangeTime, level.time) )
        __debugbreak();
      time = level.time;
    }
    v17 = v13->m_data.stateChangeTime - time + 1500;
    if ( v15 > v17 )
      v17 = v15;
    v15 = v17;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+58h]
    vsubss  xmm1, xmm0, dword ptr [r15]
    vmulss  xmm3, xmm1, cs:__real@3b360b61
    vmovss  xmm0, dword ptr [rbp+5Ch]
    vsubss  xmm1, xmm0, dword ptr [r15+4]
    vmulss  xmm7, xmm1, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vmovss  xmm0, cs:__real@3f800000
  }
  _EAX = _RBP->nextthink - time;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm2, xmm9, xmm1, 1
    vmovd   xmm10, eax
    vcvtdq2ps xmm10, xmm10
    vdivss  xmm8, xmm0, xmm10
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm1, cs:__real@447a0000
    vaddss  xmm1, xmm7, cs:__real@3f000000
    vroundss xmm2, xmm9, xmm1, 1
    vmulss  xmm11, xmm0, xmm8
    vsubss  xmm0, xmm7, xmm2
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm1, cs:__real@447a0000
    vmulss  xmm2, xmm1, xmm8
    vmovss  dword ptr [r14+4], xmm2
    vmovss  dword ptr [r14], xmm11
  }
  if ( v14 > 0 && _EAX < v14 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vdivss  xmm1, xmm10, xmm0
      vmulss  xmm2, xmm1, xmm2
      vmovss  dword ptr [r14+4], xmm2
    }
  }
  if ( v15 > 0 && _EAX < v15 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vdivss  xmm1, xmm10, xmm0
      vmulss  xmm2, xmm1, xmm11
      vmovss  dword ptr [r14], xmm2
    }
  }
  _R11 = &v57;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
  }
}

/*
==============
G_Turret_CanConvergeOnHeadOffset
==============
*/
_BOOL8 G_Turret_CanConvergeOnHeadOffset(gentity_s *self, gentity_s *enemy, const vec3_t *targetEntOffset)
{
  const char *v13; 
  int number; 
  const char *v15; 
  bool v16; 
  const dvar_t *v17; 
  bool v18; 
  char *fmt; 
  vec3_t end; 
  __int64 v23; 
  float v24; 
  vec3_t outPos; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2335, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2336, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  _RAX = GTurret::GetTurret(&self->turretHandle);
  if ( _RAX->m_data.state != INITIALIZING )
    return 0i64;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm0, dword ptr [rax+8Ch]
  }
  if ( _RAX->m_data.state <= (unsigned int)INITIALIZING )
    return 0i64;
  _RAX->GetTargetEyePosition(_RAX, enemy, (vec3_t *)&v23);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+var_48]
    vaddss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rsp+98h+var_48+4]
    vaddss  xmm0, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+98h+end], xmm1
    vmovss  xmm1, [rsp+98h+var_40]
    vaddss  xmm2, xmm1, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+98h+end+8], xmm2
    vmovss  dword ptr [rsp+98h+end+4], xmm0
  }
  if ( !G_Utils_DObjGetWorldTagPos(self, scr_const.tag_aim, &outPos) )
  {
    v13 = SL_ConvertToString(self->classname);
    number = self->s.number;
    v15 = SL_ConvertToStringSafe(scr_const.tag_aim);
    LODWORD(fmt) = number;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2F330, 846i64, v15, fmt, v13);
  }
  v16 = G_Turret_SightTrace(&outPos, &end, self->s.number, enemy->s.number);
  v17 = DVARBOOL_turretConvergenceHeightDebug;
  v18 = v16;
  if ( !DVARBOOL_turretConvergenceHeightDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretConvergenceHeightDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled )
  {
    if ( !v18 )
    {
      G_DebugLineWithDuration(&outPos, &end, &colorRed, 0, 25);
      __asm { vmovsd  xmm0, [rsp+98h+var_48] }
      end.v[2] = v24;
      __asm { vmovsd  qword ptr [rsp+98h+end], xmm0 }
      G_DebugLineWithDuration(&enemy->r.currentOrigin, &end, &colorRed, 0, 25);
      return 0i64;
    }
    G_DebugLine(&enemy->r.currentOrigin, &end, &colorLtGreen, 0);
  }
  return v18;
}

/*
==============
G_Turret_CanShoot
==============
*/
_BOOL8 G_Turret_CanShoot(gentity_s *self)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v5; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 687, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  _RBX = GTurret::GetTurret(&self->turretHandle);
  if ( (_RBX->m_data.flags & 2) != 0 )
    return 0i64;
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  v5 = BG_WeaponDef(WeaponForEntity, 0);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 697, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( level.time < _RBX->m_data.heatPenaltyEndTime )
    return 0i64;
  if ( !v5->turretBarrelSpinEnabled )
    return 1i64;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm0, dword ptr [rbx+0C0h]
  }
  return !v5->turretBarrelSpinEnabled;
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
bool G_Turret_CanTargetSentient(const gentity_s *turretEnt, const gentity_s *targetEnt, const vec3_t *targetEntOffset, vec3_t *out_targetPosition, vec3_t *out_sourcePosition, vec2_t *out_localAngles)
{
  const playerState_s *EntityPlayerStateConst; 
  const playerState_s *v16; 
  char v19; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  char v25; 
  bool v26; 
  int MinDamage; 
  GWeaponMap *v28; 
  char v34; 
  char v35; 
  bool result; 
  int outMinDamage; 
  float minDamageRange; 
  GTurretState state; 
  int outMaxDamage; 
  float maxDamageRange; 
  tmat43_t<vec3_t> axis; 

  _R15 = out_sourcePosition;
  _RDI = out_localAngles;
  if ( !turretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2105, ASSERT_TYPE_ASSERT, "( turretEnt )", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2106, ASSERT_TYPE_ASSERT, "( targetEnt )", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0F8h+var_58], xmm6
    vmovaps [rsp+0F8h+var_68], xmm7
  }
  if ( !G_Utils_DObjGetWorldTagPos(turretEnt, scr_const.tag_aim, out_sourcePosition) )
    goto LABEL_25;
  _RBX = GTurret::GetTurret(&turretEnt->turretHandle);
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(targetEnt);
  v16 = EntityPlayerStateConst;
  if ( EntityPlayerStateConst )
  {
    if ( !_RBX->CanTargetSentient_CheckPlayerState(_RBX, EntityPlayerStateConst) )
      goto LABEL_25;
  }
  AnglesToAxis(&turretEnt->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  xmm1, dword ptr [r15+4]
    vmovss  [rsp+0F8h+var_7C], xmm0
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  [rsp+0F8h+var_74], xmm0
    vmovss  [rsp+0F8h+var_78], xmm1
  }
  state = _RBX->m_data.state;
  *(double *)&_XMM0 = G_Turret_CanTargetSentient_GetTargetPosInternal(_RBX, targetEnt, targetEntOffset, &axis, state == INITIALIZING, out_targetPosition, out_localAngles);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4]
    vcomiss xmm1, dword ptr [rbx+28h]
    vmovaps xmm6, xmm0
  }
  if ( !(v19 | v26) )
    goto LABEL_25;
  __asm { vcomiss xmm1, dword ptr [rbx+20h] }
  if ( v19 )
    goto LABEL_25;
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &turretEnt->s);
  BG_GetMinMaxDamage(WEAP_DMG_CALC_TYPE_AI_TO_PLAYER, WeaponForEntity, 0, &outMinDamage, &outMaxDamage);
  if ( v16 )
  {
    v25 = 0;
    v26 = outMinDamage == 0;
    if ( outMinDamage )
      goto LABEL_17;
  }
  else
  {
    MinDamage = BG_GetMinDamage(WEAP_DMG_CALC_TYPE_DEFAULT, WeaponForEntity, 0);
    v25 = 0;
    v26 = MinDamage == 0;
    if ( MinDamage )
      goto LABEL_17;
  }
  v28 = GWeaponMap::GetInstance();
  *(double *)&_XMM0 = BG_GetADSDamageRangeScale(v28, v16, WeaponForEntity, 0);
  __asm { vmovaps xmm3, xmm0; rangeScale }
  BG_GetDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, WeaponForEntity, 0, *(float *)&_XMM3, &minDamageRange, &maxDamageRange);
  __asm
  {
    vmovss  xmm0, [rsp+0F8h+minDamageRange]
    vmulss  xmm1, xmm0, xmm0
    vcomiss xmm6, xmm1
  }
  if ( !v25 )
  {
LABEL_25:
    result = 0;
    goto LABEL_26;
  }
LABEL_17:
  __asm
  {
    vmovss  xmm6, dword ptr [rdi]
    vcomiss xmm6, dword ptr [rbx+1Ch]
  }
  if ( v25 )
    goto LABEL_29;
  __asm { vcomiss xmm6, dword ptr [rbx+24h] }
  if ( !(v25 | v26) )
  {
LABEL_29:
    __asm { vmovss  xmm7, dword ptr [rbx+24h] }
    G_Turret_CanTargetSentient_GetTargetPosInternal(_RBX, targetEnt, targetEntOffset, &axis, state != INITIALIZING, out_targetPosition, out_localAngles);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4]
      vcomiss xmm0, dword ptr [rbx+28h]
    }
    if ( !(v34 | v35) )
      goto LABEL_25;
    __asm { vcomiss xmm0, dword ptr [rbx+20h] }
    if ( v34 )
      goto LABEL_25;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  xmm1, dword ptr [rbx+24h]
      vcomiss xmm0, xmm1
    }
    if ( !(v34 | v35) )
      goto LABEL_23;
    __asm { vcomiss xmm0, dword ptr [rbx+1Ch] }
    if ( v34 )
    {
LABEL_23:
      __asm
      {
        vcomiss xmm6, xmm7
        vcomiss xmm0, xmm1
      }
      goto LABEL_25;
    }
  }
  result = 1;
LABEL_26:
  __asm
  {
    vmovaps xmm7, [rsp+0F8h+var_68]
    vmovaps xmm6, [rsp+0F8h+var_58]
  }
  return result;
}

/*
==============
G_Turret_CanTargetSentient_GetTargetPosInternal
==============
*/
float G_Turret_CanTargetSentient_GetTargetPosInternal(GTurret *turret, const gentity_s *targetEnt, const vec3_t *targetEntOffset, const tmat43_t<vec3_t> *turretAxis, const int targetHead, vec3_t *out_targetPosition, vec2_t *out_localAngles)
{
  vec3_t out; 
  vec3_t angles; 

  _RBX = out_targetPosition;
  _RBP = out_localAngles;
  _RSI = targetEntOffset;
  _RDI = targetEnt;
  if ( !turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2067, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2068, ASSERT_TYPE_ASSERT, "( targetEnt )", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( targetHead )
  {
    turret->GetTargetEyePosition(turret, _RDI, out_targetPosition);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vaddss  xmm1, xmm0, dword ptr [rsi]
      vmovss  xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rbx], xmm1
      vaddss  xmm0, xmm2, dword ptr [rsi+4]
      vmovss  xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+4], xmm0
      vaddss  xmm2, xmm1, dword ptr [rsi+8]
      vmovss  dword ptr [rbx+8], xmm2
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vaddss  xmm1, xmm0, dword ptr [rdi+130h]
      vmovss  dword ptr [rbx], xmm1
      vmovss  xmm2, dword ptr [rdi+134h]
      vaddss  xmm0, xmm2, dword ptr [rsi+4]
      vmovss  dword ptr [rbx+4], xmm0
      vmovss  xmm1, dword ptr [rdi+138h]
      vaddss  xmm2, xmm1, dword ptr [rsi+8]
      vaddss  xmm0, xmm2, cs:__real@40000000
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
  MatrixTransposeTransformVector43(out_targetPosition, turretAxis, &out);
  vectosignedangles(&out, &angles);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+angles]
    vmovss  xmm1, dword ptr [rsp+98h+angles+4]
    vmovss  dword ptr [rbp+0], xmm0
    vmovss  xmm0, dword ptr [rsp+98h+out]
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rsp+98h+out+8]
    vmovss  dword ptr [rbp+4], xmm1
    vmovss  xmm1, dword ptr [rsp+98h+out+4]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm1, xmm0, xmm0
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm4, xmm1
  }
  return *(float *)&_XMM0;
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
  const scrContext_t *v17; 
  GHandler *Handler; 
  GWeaponMap *Instance; 
  __int64 v20; 
  __int64 v21; 

  _RDI = self;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1397, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !_RDI->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1398, ASSERT_TYPE_ASSERT, "(self->r.isInUse)", (const char *)&queryFormat, "self->r.isInUse") )
    __debugbreak();
  Turret = GTurret::GetTurret(&_RDI->turretHandle);
  number = _RDI->r.ownerNum.number;
  if ( !number )
    goto LABEL_57;
  v4 = number;
  v5 = number - 1;
  if ( v5 >= 0x800 )
  {
    LODWORD(v20) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v6 = v4 - 1;
  if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v6] )
  {
    LODWORD(v21) = _RDI->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v21) )
      __debugbreak();
  }
  if ( !_RDI->r.ownerNum.number )
  {
LABEL_57:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1403, ASSERT_TYPE_ASSERT, "( self->r.ownerNum.isDefined() )", (const char *)&queryFormat, "self->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v7 = EntHandle::ent(&_RDI->r.ownerNum);
  if ( !v7->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1405, ASSERT_TYPE_ASSERT, "( owner->client )", (const char *)&queryFormat, "owner->client") )
    __debugbreak();
  p_ps = &v7->client->ps;
  SuitDef = BG_GetSuitDef(p_ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1409, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  Turret->m_data.fireSndDelay = 0;
  _RDI->s.loopSound = 0;
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
  if ( !G_Turret_IsMountedOnVehicle(_RDI) )
  {
    if ( !GClientSystem::ms_gClientSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 423, ASSERT_TYPE_ASSERT, "( ms_gClientSystem )", (const char *)&queryFormat, "ms_gClientSystem") )
      __debugbreak();
    GClientSystem::ms_gClientSystem->TeleportPlayer(GClientSystem::ms_gClientSystem, v7, &Turret->m_data.userOrigin, &v7->r.currentAngles);
  }
  if ( BG_IsRemoteTurretActiveFlags(&p_ps->eFlags) && G_IsTurretKeepingOrientationOnExit(&_RDI->s) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+5Ch]
      vsubss  xmm1, xmm0, dword ptr [rdi+140h]
      vmovss  dword ptr [rdi+5Ch], xmm1
    }
  }
  BG_Turret_ClearPlayerstateOwnedTurret(p_ps);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v7->client->ps.otherFlags, ACTIVE, 0x17u) )
  {
    Turret->m_data.triggerDown = 0;
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RDI->s.lerp.eFlags, ACTIVE, 0xAu);
    G_Utils_AddEvent(_RDI, 0x26u, 0);
  }
  v7->active = 0;
  Turret->StopUseVirtual(Turret, _RDI, v7);
  if ( _RDI == (gentity_s *)-12i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2062, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RDI->s.lerp.eFlags, ACTIVE, 5u);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RDI->s.lerp.eFlags, ACTIVE, 6u);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RDI->s.lerp.eFlags, ACTIVE, 7u);
  if ( _RDI->active == 1 )
  {
    v17 = ScriptContext_Server();
    if ( Scr_IsSystemActive(v17, 1u) )
      GScr_Notify(_RDI, scr_const.turret_deactivate, 0);
  }
  _RDI->active = 0;
  EntHandle::setEnt(&_RDI->r.ownerNum, NULL);
  _RDI->s.lerp.u.anonymous.data[5] &= ~0x20u;
  _RDI->s.lerp.u.anonymous.data[6] = 2047;
  Turret->m_data.flags &= ~1u;
  Handler = GHandler::getHandler();
  Instance = GWeaponMap::GetInstance();
  PM_ResetWeaponState(Instance, p_ps, Handler);
  GScr_Notify(_RDI, scr_const.turretownerchange, 0);
}

/*
==============
G_Turret_Controller
==============
*/
void G_Turret_Controller(const gentity_s *self, DObjPartBits *partBits)
{
  const DObj *ServerDObjForEnt; 
  unsigned __int8 v13; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t v20; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v25; 
  __int64 v26; 
  char v27; 

  _RBP = &v26;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RBX = self;
  if ( self->s.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3038, ASSERT_TYPE_ASSERT, "( self->s.eType == ET_TURRET )", (const char *)&queryFormat, "self->s.eType == ET_TURRET") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(_RBX);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3041, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rsp+120h+angles+8], xmm6
  }
  if ( BG_IsRemoteTurretActiveFlags(&_RBX->s.lerp.eFlags) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3052, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+58h]
      vmovss  xmm1, dword ptr [rbx+5Ch]
      vmovss  dword ptr [rsp+120h+angles], xmm0
      vmovss  dword ptr [rsp+120h+angles+4], xmm1
    }
    AnglesToAxis(&_RBX->r.currentAngles, &axis);
    AnglesToAxis(&angles, &in1);
    MatrixTranspose(&axis, &out);
    MatrixMultiply(&in1, &out, &v25);
    AxisToAngles(&v25, &angles);
    __asm { vmovss  xmm2, dword ptr [rsp+120h+angles+4] }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+58h]
      vsubss  xmm1, xmm0, dword ptr [rbx+60h]
      vmovss  xmm2, dword ptr [rbx+5Ch]
      vmovss  dword ptr [rsp+120h+angles], xmm1
      vmovss  dword ptr [rsp+120h+angles+4], xmm2
    }
  }
  inOutIndex[0] = -2;
  __asm
  {
    vmovss  dword ptr [rsp+120h+var_E8], xmm6
    vmovss  dword ptr [rsp+120h+var_E8+8], xmm6
    vmovss  dword ptr [rsp+120h+var_E8+4], xmm2
  }
  DObjGetBoneIndexInternal_11(ServerDObjForEnt, scr_const.tag_aim_pivot, inOutIndex, &modelIndex);
  v13 = inOutIndex[0];
  if ( inOutIndex[0] != 0xFF )
  {
    if ( inOutIndex[0] == 0xFE )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3078, ASSERT_TYPE_ASSERT, "( boneIndex != 254 )", (const char *)&queryFormat, "boneIndex != UNDEFINED_BONEINDEX") )
        __debugbreak();
      v13 = inOutIndex[0];
    }
    DObjSetLocalTag(ServerDObjForEnt, partBits, v13, &vec3_origin, &v20);
    __asm { vmovss  dword ptr [rsp+120h+var_E8+4], xmm6 }
  }
  __asm { vmovss  xmm0, dword ptr [rsp+120h+angles] }
  inOutIndex[0] = -2;
  __asm { vmovss  dword ptr [rsp+120h+var_E8], xmm0 }
  DObjGetBoneIndexInternal_11(ServerDObjForEnt, scr_const.tag_aim, inOutIndex, &modelIndex);
  DObjSetLocalTag(ServerDObjForEnt, partBits, inOutIndex[0], &vec3_origin, &v20);
  inOutIndex[0] = -2;
  DObjGetBoneIndexInternal_11(ServerDObjForEnt, scr_const.tag_aim_animated, inOutIndex, &modelIndex);
  DObjSetLocalTag(ServerDObjForEnt, partBits, inOutIndex[0], &vec3_origin, &v20);
  __asm { vmovss  xmm0, dword ptr [rbx+60h] }
  inOutIndex[0] = -2;
  __asm
  {
    vmovss  dword ptr [rsp+120h+var_E8], xmm0
    vmovss  dword ptr [rsp+120h+var_E8+4], xmm6
  }
  DObjGetBoneIndexInternal_11(ServerDObjForEnt, scr_const.tag_flash, inOutIndex, &modelIndex);
  DObjSetLocalTag(ServerDObjForEnt, partBits, inOutIndex[0], &vec3_origin, &v20);
  _R11 = &v27;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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
  const char *v12; 
  int number; 
  const char *v14; 
  const char *v15; 
  gclient_s *client; 
  gclient_s *v17; 
  GWeaponMap *Instance; 
  bool IsThirdPersonMode; 
  GWeaponMap *v26; 
  const char *v27; 
  GHandler *handler; 
  scr_string_t TagForFiringMuzzle; 
  int v60; 
  gclient_s *v69; 
  __int16 remoteControlEnt; 
  char v107; 
  char v108; 
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
  tmat43_t<vec3_t> v211; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  trace_t results; 

  _RSI = wp;
  _R14 = ent;
  if ( !G_Utils_DObjGetWorldTagMatrix(ent, tagName, &outTagMat) )
  {
    v12 = SL_ConvertToString(_R14->classname);
    number = _R14->s.number;
    v14 = v12;
    v15 = SL_ConvertToStringSafe(tagName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2F330, 842i64, v15, number, v14);
  }
  client = activator->client;
  if ( !client )
  {
    AnglesToAxis(&_R14->r.currentAngles, &axis);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+58h]
      vmovss  xmm1, dword ptr [r14+5Ch]
      vmovss  dword ptr [rbp+1E0h+angles], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rbp+1E0h+angles+8], xmm0
      vmovss  dword ptr [rbp+1E0h+angles+4], xmm1
    }
    AnglesToAxis(&angles, &in1);
    MatrixMultiply(&in1, &axis, &out);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+1E0h+out]
      vmovss  xmm1, dword ptr [rbp+1E0h+outTagMat]
      vmovups ymmword ptr [rsi], ymm0
      vmovss  xmm0, dword ptr [rbp+1E0h+out+20h]
      vmovss  dword ptr [rsi+20h], xmm0
      vmovss  xmm0, dword ptr [rbp+1E0h+outTagMat+4]
      vmovss  dword ptr [rsi+30h], xmm1
      vmovss  xmm1, dword ptr [rbp+1E0h+outTagMat+8]
      vmovss  dword ptr [rsi+34h], xmm0
      vmovss  xmm0, dword ptr [rbp+1E0h+outTagMat+24h]
      vmovss  dword ptr [rsi+38h], xmm1
      vmovss  xmm1, dword ptr [rbp+1E0h+outTagMat+28h]
      vmovss  dword ptr [rsi+24h], xmm0
      vmovss  xmm0, dword ptr [rbp+1E0h+outTagMat+2Ch]
      vmovss  dword ptr [rsi+2Ch], xmm0
      vmovss  dword ptr [rsi+28h], xmm1
    }
    return;
  }
  __asm
  {
    vmovaps [rsp+2E0h+var_50], xmm6
    vmovaps [rsp+2E0h+var_60], xmm7
  }
  G_Client_GetViewOrigin(&client->ps, &outOrigin);
  v17 = activator->client;
  Instance = GWeaponMap::GetInstance();
  IsThirdPersonMode = BG_IsThirdPersonMode(Instance, &v17->ps);
  _RBX = activator->client;
  if ( IsThirdPersonMode )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+5E4Ch]
      vmovss  dword ptr [rbp+1E0h+angles], xmm0
      vmovss  xmm1, dword ptr [rbx+5E50h]
      vxorps  xmm0, xmm0, xmm0
    }
    _RBX = &_RSI->up;
    _RDI = &_RSI->right;
    __asm
    {
      vmovss  dword ptr [rbp+1E0h+angles+4], xmm1
      vmovss  dword ptr [rbp+1E0h+angles+8], xmm0
    }
    AngleVectors(&angles, &_RSI->forward, &_RSI->right, &_RSI->up);
  }
  else
  {
    v26 = GWeaponMap::GetInstance();
    if ( BG_IsUsingTurretViewarms(v26, &_RBX->ps) )
    {
      if ( !G_Utils_DObjGetWorldTagMatrix(_R14, scr_const.tag_player, &outTagMat) )
      {
        v27 = SL_ConvertToString(_R14->classname);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2F390, 843i64, (unsigned int)_R14->s.number, v27);
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1E0h+outTagMat]
        vmovss  xmm1, dword ptr [rbp+1E0h+outTagMat+4]
        vmovss  xmm7, dword ptr [rbp+1E0h+outTagMat+24h]
        vmovss  xmm6, dword ptr [rbp+1E0h+outTagMat+28h]
        vmovss  xmm5, dword ptr [rbp+1E0h+outTagMat+2Ch]
        vmovss  dword ptr [rsi], xmm0
        vmovss  xmm0, dword ptr [rbp+1E0h+outTagMat+8]
        vmovss  dword ptr [rsi+8], xmm0
        vmovss  xmm0, dword ptr [rbp+1E0h+outTagMat+0Ch]
        vmovss  dword ptr [rsi+4], xmm1
        vmovss  xmm1, dword ptr [rbp+1E0h+outTagMat+10h]
      }
      _RDI = &_RSI->right;
      __asm
      {
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm0, dword ptr [rbp+1E0h+outTagMat+14h]
        vmovss  dword ptr [rdi+8], xmm0
        vmovss  xmm0, dword ptr [rbp+1E0h+outTagMat+18h]
        vmovss  dword ptr [rdi+4], xmm1
        vmovss  xmm1, dword ptr [rbp+1E0h+outTagMat+1Ch]
      }
      _RBX = &_RSI->up;
      __asm
      {
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm0, dword ptr [rbp+1E0h+outTagMat+20h]
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  dword ptr [rsp+2E0h+outOrigin], xmm7
        vmovss  dword ptr [rsp+2E0h+outOrigin+4], xmm6
        vmovss  dword ptr [rsp+2E0h+outOrigin+8], xmm5
      }
      goto LABEL_12;
    }
    handler = GHandler::getHandler();
    _RBX = &_RSI->up;
    _RDI = &_RSI->right;
    BG_GetPlayerViewDirection(&activator->client->ps, &_RSI->forward, &_RSI->right, &_RSI->up, handler, 0);
  }
  __asm
  {
    vmovss  xmm7, dword ptr [rsp+2E0h+outOrigin]
    vmovss  xmm6, dword ptr [rsp+2E0h+outOrigin+4]
    vmovss  xmm5, dword ptr [rsp+2E0h+outOrigin+8]
  }
LABEL_12:
  __asm
  {
    vsubss  xmm0, xmm6, dword ptr [rbp+1E0h+outTagMat+28h]
    vsubss  xmm2, xmm7, dword ptr [rbp+1E0h+outTagMat+24h]
    vsubss  xmm3, xmm5, dword ptr [rbp+1E0h+outTagMat+2Ch]
  }
  _RSI->gunForward.v[0] = _RSI->forward.v[0];
  _RSI->gunForward.v[1] = _RSI->forward.v[1];
  _RSI->gunForward.v[2] = _RSI->forward.v[2];
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vmulss  xmm0, xmm4, dword ptr [rsi]
    vaddss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rsi+24h], xmm1
    vmulss  xmm0, xmm4, dword ptr [rsi+4]
    vaddss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rsi+28h], xmm1
    vmulss  xmm0, xmm4, dword ptr [rsi+8]
    vaddss  xmm1, xmm0, xmm5
    vmovss  dword ptr [rsi+2Ch], xmm1
  }
  if ( _RSI->weapon.weaponIdx && BG_TurretSpawnsProjectileAtMuzzle(&_RSI->weapon, 0) )
  {
    TagForFiringMuzzle = BG_turretGetTagForFiringMuzzle(&_R14->s, &_RSI->weapon);
    if ( G_Utils_DObjGetWorldTagMatrix(_R14, TagForFiringMuzzle, &v211) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1E0h+var_188+24h]
        vmovss  xmm1, dword ptr [rbp+1E0h+var_188+28h]
        vmovss  dword ptr [rsi+24h], xmm0
        vmovss  xmm0, dword ptr [rbp+1E0h+var_188+2Ch]
        vmovss  dword ptr [rsi+2Ch], xmm0
        vmovss  dword ptr [rsi+28h], xmm1
      }
    }
    if ( BG_TurretUsesBulletCorrection(&_RSI->weapon, 0) )
    {
      _R14 = DCONST_DVARMPSPFLT_g_turretCorrectionFocusDistance;
      v60 = 2047;
      __asm
      {
        vmovaps [rsp+2E0h+var_70], xmm8
        vmovaps [rsp+2E0h+var_80], xmm9
      }
      if ( !DCONST_DVARMPSPFLT_g_turretCorrectionFocusDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_turretCorrectionFocusDistance") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R14);
      __asm { vmovss  xmm6, dword ptr [r14+28h] }
      *(double *)&_XMM0 = BG_TurretMaxCorrectionAngle(&_RSI->weapon, 0);
      __asm { vmovaps xmm8, xmm0 }
      G_Client_AdjustEyePosForRemoteTurretVehicle(&outOrigin, &activator->client->ps, &outPos, &_RSI->forward);
      __asm
      {
        vmovsd  xmm1, qword ptr [rbp+1E0h+outPos]
        vmulss  xmm0, xmm6, dword ptr [rsi+4]
        vmovsd  qword ptr [rsp+2E0h+start], xmm1
        vmulss  xmm1, xmm6, dword ptr [rsi]
        vaddss  xmm2, xmm1, dword ptr [rbp+1E0h+outPos]
        vaddss  xmm1, xmm0, dword ptr [rbp+1E0h+outPos+4]
        vmulss  xmm0, xmm6, dword ptr [rsi+8]
      }
      start.v[2] = outPos.v[2];
      v69 = activator->client;
      __asm
      {
        vmovss  dword ptr [rbp+1E0h+end+4], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbp+1E0h+outPos+8]
        vmovss  dword ptr [rbp+1E0h+end+8], xmm1
        vmovss  dword ptr [rbp+1E0h+end], xmm2
      }
      if ( v69 )
      {
        remoteControlEnt = v69->ps.remoteControlEnt;
        if ( remoteControlEnt != 2047 )
          v60 = remoteControlEnt;
      }
      G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, v60, 41969969);
      __asm
      {
        vmovss  xmm6, [rbp+1E0h+results.fraction]
        vmovss  xmm0, dword ptr [rbp+1E0h+end]
        vsubss  xmm1, xmm0, dword ptr [rsp+2E0h+start]
        vmovss  xmm0, dword ptr [rbp+1E0h+end+4]
        vmovss  xmm9, cs:__real@80000000
        vmulss  xmm1, xmm1, xmm6
        vaddss  xmm7, xmm1, dword ptr [rsp+2E0h+start]
        vsubss  xmm1, xmm0, dword ptr [rsp+2E0h+start+4]
        vsubss  xmm4, xmm7, dword ptr [rbp+1E0h+var_188+24h]
        vmovss  xmm0, dword ptr [rbp+1E0h+end+8]
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, dword ptr [rbp+1E0h+start+8]
        vaddss  xmm5, xmm2, dword ptr [rsp+2E0h+start+4]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rbp+1E0h+start+8]
        vsubss  xmm6, xmm3, dword ptr [rbp+1E0h+var_188+2Ch]
        vmulss  xmm1, xmm4, xmm4
        vmovss  dword ptr [rbp+1E0h+center+8], xmm3
        vmovss  dword ptr [rbp+1E0h+center+4], xmm5
        vsubss  xmm5, xmm5, dword ptr [rbp+1E0h+var_188+28h]
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, xmm9
        vmovss  dword ptr [rbp+1E0h+center], xmm7
        vmovss  xmm7, cs:__real@3f800000
        vblendvps xmm0, xmm3, xmm7, xmm0
        vdivss  xmm1, xmm7, xmm0
        vmulss  xmm2, xmm1, xmm4
        vmulss  xmm0, xmm1, xmm5
        vmulss  xmm3, xmm1, xmm6
        vmulss  xmm1, xmm0, dword ptr [rsi+4]
        vmovss  dword ptr [rsp+2E0h+vec2+4], xmm0
        vmulss  xmm0, xmm2, dword ptr [rsi]
        vmovss  dword ptr [rsp+2E0h+vec2], xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, dword ptr [rsi+8]
        vaddss  xmm0, xmm2, xmm1; X
        vmovss  dword ptr [rsp+2E0h+vec2+8], xmm3
      }
      *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm6, xmm0, cs:__real@42652ee0
        vandps  xmm1, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm1, cs:__real@3a83126f
      }
      if ( !(v107 | v108) )
      {
        __asm { vcomiss xmm1, cs:__real@42b40000 }
        if ( v107 | v108 )
        {
          __asm { vcomiss xmm6, xmm8 }
          if ( !(v107 | v108) )
          {
            CalcRotationQuatFromVectors(&_RSI->forward, vec2.m, &quat);
            __asm { vdivss  xmm2, xmm8, xmm6; frac }
            QuatSlerp(&quat_identity, &quat, *(float *)&_XMM2, &result);
            QuatTransform(&result, &_RSI->forward, vec2.m);
            __asm
            {
              vmovss  xmm4, dword ptr [rsp+2E0h+vec2]
              vmovss  xmm6, dword ptr [rsp+2E0h+vec2+4]
              vmovss  xmm5, dword ptr [rsp+2E0h+vec2+8]
              vmulss  xmm0, xmm4, xmm4
              vmulss  xmm1, xmm6, xmm6
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm5, xmm5
              vaddss  xmm0, xmm2, xmm1
              vsqrtss xmm3, xmm0, xmm0
              vcmpless xmm0, xmm3, xmm9
              vblendvps xmm0, xmm3, xmm7, xmm0
              vdivss  xmm2, xmm7, xmm0
              vmulss  xmm0, xmm4, xmm2
              vmovss  dword ptr [rsp+2E0h+vec2], xmm0
              vmulss  xmm0, xmm5, xmm2
              vmulss  xmm1, xmm6, xmm2
              vmovss  dword ptr [rsp+2E0h+vec2+8], xmm0
              vmovss  dword ptr [rsp+2E0h+vec2+4], xmm1
            }
          }
          Vec3Cross(vec2.m, _RBX, &vec2.m[1]);
          __asm
          {
            vmovss  xmm5, dword ptr [rsp+2E0h+cross]
            vmovss  xmm6, dword ptr [rsp+2E0h+cross+4]
            vmovss  xmm4, dword ptr [rsp+2E0h+cross+8]
            vmulss  xmm1, xmm5, xmm5
            vmulss  xmm0, xmm6, xmm6
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm0, xmm2, xmm1
            vsqrtss xmm3, xmm0, xmm0
            vcmpless xmm0, xmm3, xmm9
            vblendvps xmm0, xmm3, xmm7, xmm0
            vdivss  xmm2, xmm7, xmm0
            vmulss  xmm0, xmm5, xmm2
            vmovss  dword ptr [rsp+2E0h+cross], xmm0
            vmulss  xmm0, xmm4, xmm2
            vmulss  xmm1, xmm6, xmm2
            vmovss  dword ptr [rsp+2E0h+cross+8], xmm0
            vmovss  dword ptr [rsp+2E0h+cross+4], xmm1
          }
          Vec3Cross(&vec2.m[1], vec2.m, &vec2.m[2]);
          __asm
          {
            vmovss  xmm5, dword ptr [rsp+2E0h+var_288]
            vmovss  xmm6, dword ptr [rsp+2E0h+var_288+4]
            vmovss  xmm4, dword ptr [rsp+2E0h+var_288+8]
            vmulss  xmm1, xmm5, xmm5
            vmulss  xmm0, xmm6, xmm6
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm0, xmm2, xmm1
            vsqrtss xmm3, xmm0, xmm0
            vcmpless xmm0, xmm3, xmm9
            vblendvps xmm0, xmm3, xmm7, xmm0
            vdivss  xmm2, xmm7, xmm0
            vmulss  xmm0, xmm5, xmm2
            vmovss  dword ptr [rsp+2E0h+var_288], xmm0
            vmulss  xmm0, xmm4, xmm2
            vmulss  xmm1, xmm6, xmm2
            vmovss  dword ptr [rsp+2E0h+var_288+8], xmm0
            vmovss  dword ptr [rsp+2E0h+var_288+4], xmm1
          }
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_g_turretBulletCorrectionDebug, "g_turretBulletCorrectionDebug") )
          {
            __asm
            {
              vmovss  xmm2, dword ptr [rsi]
              vmovss  xmm3, cs:__real@40a00000
              vmovss  xmm0, dword ptr [rdi]
              vmovss  xmm1, dword ptr [rdi+4]
              vmovss  xmm4, dword ptr [rsi+4]
              vmovss  xmm5, dword ptr [rsi+8]
              vmovss  dword ptr [rbp+1E0h+axes+0Ch], xmm0
              vmovss  xmm0, dword ptr [rdi+8]
              vmovss  dword ptr [rbp+1E0h+axes+10h], xmm1
              vmovss  xmm1, dword ptr [rbx]
              vmovss  dword ptr [rbp+1E0h+axes+14h], xmm0
              vmovss  xmm0, dword ptr [rbx+4]
              vmovss  dword ptr [rbp+1E0h+axes+18h], xmm1
              vmovss  xmm1, dword ptr [rbx+8]
              vmovss  dword ptr [rbp+1E0h+axes], xmm2
              vmovss  dword ptr [rbp+1E0h+axes+1Ch], xmm0
              vmulss  xmm0, xmm2, xmm3
              vmovss  dword ptr [rbp+1E0h+axes+20h], xmm1
              vaddss  xmm1, xmm0, dword ptr [rsp+2E0h+start]
              vmulss  xmm2, xmm4, xmm3
              vaddss  xmm0, xmm2, dword ptr [rsp+2E0h+start+4]
              vmovss  dword ptr [rbp+1E0h+quat], xmm1
              vmulss  xmm1, xmm5, xmm3
              vaddss  xmm2, xmm1, dword ptr [rbp+1E0h+start+8]
              vmovss  dword ptr [rbp+1E0h+quat+8], xmm2
              vmovss  xmm2, cs:__real@40800000; length
              vmovss  dword ptr [rbp+1E0h+axes+4], xmm4
              vmovss  dword ptr [rbp+1E0h+axes+8], xmm5
              vmovss  dword ptr [rbp+1E0h+quat+4], xmm0
            }
            G_DebugAxis(&axes, (const vec3_t *)&quat, *(float *)&_XMM2, 0, 100);
            __asm { vmovss  xmm2, cs:__real@40800000; length }
            G_DebugAxis(&vec2, (const vec3_t *)&quat, *(float *)&_XMM2, 0, 100);
            __asm { vmovss  xmm1, cs:__real@40400000; radius }
            G_DebugSphere(&center, *(float *)&_XMM1, &colorBlue, 0, 100);
            G_DebugLineWithDuration(&start, &center, &colorBlue, 0, 100);
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+2E0h+vec2]
            vmovss  xmm1, dword ptr [rsp+2E0h+vec2+4]
            vmovss  dword ptr [rsi], xmm0
            vmovss  xmm0, dword ptr [rsp+2E0h+vec2+8]
            vmovss  dword ptr [rsi+4], xmm1
            vmovss  xmm1, dword ptr [rsp+2E0h+cross]
            vmovss  dword ptr [rsi+8], xmm0
            vmovss  xmm0, dword ptr [rsp+2E0h+cross+4]
            vmovss  dword ptr [rdi], xmm1
            vmovss  xmm1, dword ptr [rsp+2E0h+cross+8]
            vmovss  dword ptr [rdi+4], xmm0
            vmovss  xmm0, dword ptr [rsp+2E0h+var_288]
            vmovss  dword ptr [rdi+8], xmm1
            vmovss  xmm1, dword ptr [rsp+2E0h+var_288+4]
            vmovss  dword ptr [rbx], xmm0
            vmovss  xmm0, dword ptr [rsp+2E0h+var_288+8]
            vmovss  dword ptr [rbx+8], xmm0
            vmovss  dword ptr [rbx+4], xmm1
          }
        }
      }
      __asm
      {
        vmovaps xmm8, [rsp+2E0h+var_70]
        vmovaps xmm9, [rsp+2E0h+var_80]
      }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+2E0h+var_50]
    vmovaps xmm7, [rsp+2E0h+var_60]
  }
}

/*
==============
G_Turret_FindBestTarget
==============
*/
gentity_s *G_Turret_FindBestTarget(gentity_s *self, vec3_t *out_targetOffset)
{
  gentity_s *v6; 
  gentity_s *v7; 
  sentient_s *sentient; 
  GTurret *Turret; 
  int *v13; 
  bool v14; 
  unsigned int v18; 
  __int64 v19; 
  sentient_s *v20; 
  sentient_s *v21; 
  gentity_s *ent; 
  sentient_s *v23; 
  float distSqr; 
  vec3_t targetOffset; 
  bitarray<224> result; 

  _RBX = out_targetOffset;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2677, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  _RDI = GTurret::GetTurret(&self->turretHandle);
  if ( (_RDI->m_data.flags & 8) != 0 && self->s.otherEntityNum == 2047 )
  {
    Com_PrintWarning(17, "WARNING: Sentry turret %i has no owner ent set but is running its think/targeting sequence. must be set from script first through setSentryOwner()\n", (unsigned int)self->s.number);
LABEL_7:
    *(_QWORD *)_RBX->v = 0i64;
    v6 = NULL;
    _RBX->v[2] = 0.0;
    return v6;
  }
  if ( !_RDI->FindBestTarget_ValidateTeam(_RDI) )
  {
    Com_PrintWarning(17, "WARNING: Sentry turret %i has an invalid team set, it will not be able to target anyone when neutral. Must call setTurretTeam() from script\n", (unsigned int)self->s.number);
    goto LABEL_7;
  }
  v7 = NULL;
  if ( (_RDI->m_data.flags & 0x20) != 0 && EntHandle::isDefined(&_RDI->m_data.target) && _RDI->FindBestTarget_ValidateTargetEnt(_RDI) )
  {
    v7 = EntHandle::ent(&_RDI->m_data.target);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+50h]
      vmovss  dword ptr [rbp+57h+targetOffset], xmm0
      vmovss  xmm1, dword ptr [rdi+54h]
      vmovss  dword ptr [rbp+57h+targetOffset+4], xmm1
      vmovss  xmm0, dword ptr [rdi+58h]
      vmovss  dword ptr [rbp+57h+targetOffset+8], xmm0
    }
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2706, ASSERT_TYPE_ASSERT, "( oldTarget )", (const char *)&queryFormat, "oldTarget") )
      __debugbreak();
    sentient = v7->sentient;
    if ( sentient && sentient->bIgnoreMe )
    {
      v7 = NULL;
    }
    else if ( G_Turret_IsTargetVisible(self, v7, &targetOffset, &distSqr) )
    {
      if ( level.time <= _RDI->m_data.targetTime + 4000 )
      {
LABEL_48:
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+targetOffset]
          vmovss  xmm1, dword ptr [rbp+57h+targetOffset+4]
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm0, dword ptr [rbp+57h+targetOffset+8]
          vmovss  dword ptr [rbx+8], xmm0
          vmovss  dword ptr [rbx+4], xmm1
        }
        return v7;
      }
    }
    else
    {
      v7 = NULL;
    }
  }
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2642, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  v13 = (int *)Turret;
  if ( level.teammode == TEAMMODE_FFA )
  {
    v14 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      _RAX = Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbp+57h+result.array], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rbp+57h+result.array+10h], xmm1
    }
    v18 = _RAX->array[6] & 0xFFEFFFFF;
    if ( v14 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v18 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, Turret->m_data.eTeam);
  }
  v19 = v13[31];
  if ( (int)v19 <= -1 )
    v20 = Sentient_FirstSentient(&result);
  else
    v20 = Sentient_NextSentient(&level.sentients[v19], &result);
  v21 = v20;
  if ( !v20 )
    goto LABEL_47;
  do
  {
    if ( (*(unsigned __int8 (__fastcall **)(int *, gentity_s *, sentient_s *))(*(_QWORD *)v13 + 56i64))(v13, self, v21) )
      break;
    v21 = Sentient_NextSentient(v21, &result);
  }
  while ( v21 );
  if ( !v21 )
  {
LABEL_47:
    v13[31] = -1;
    goto LABEL_48;
  }
  v13[31] = v21 - level.sentients;
  ent = v21->ent;
  if ( !ent )
    goto LABEL_48;
  v23 = ent->sentient;
  if ( v23 )
  {
    if ( v23->bIgnoreMe )
      goto LABEL_48;
  }
  if ( !G_Turret_IsTargetVisible(self, ent, &vec3_origin, &distSqr) )
    goto LABEL_48;
  if ( v7 )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+57h+targetOffset]
      vaddss  xmm0, xmm4, dword ptr [r13+130h]
      vsubss  xmm2, xmm0, dword ptr [r15+130h]
      vmovss  xmm5, dword ptr [rbp+57h+targetOffset+4]
      vaddss  xmm0, xmm5, dword ptr [r13+134h]
      vsubss  xmm1, xmm0, dword ptr [r15+134h]
      vmulss  xmm1, xmm1, xmm1
      vmovaps [rsp+0B0h+var_40], xmm6
      vmovss  xmm6, dword ptr [rbp+57h+targetOffset+8]
      vaddss  xmm0, xmm6, dword ptr [r13+138h]
      vsubss  xmm3, xmm0, dword ptr [r15+138h]
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm0, [rbp+57h+distSqr]
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vcomiss xmm0, xmm3
      vmovss  dword ptr [rbx], xmm4
      vmovss  dword ptr [rbx+4], xmm5
      vmovss  dword ptr [rbx+8], xmm6
    }
    v6 = v7;
    __asm { vmovaps xmm6, [rsp+0B0h+var_40] }
  }
  else
  {
    *(_QWORD *)_RBX->v = 0i64;
    v6 = ent;
    _RBX->v[2] = 0.0;
  }
  return v6;
}

/*
==============
G_Turret_FireLead
==============
*/
void G_Turret_FireLead(gentity_s *ent, gentity_s *activator, const int lockStrength, const int gameTime, const BgWeaponParms *const wp)
{
  GTurret *Turret; 
  gentity_s *v10; 
  const gentity_s *v12; 
  gentity_s *v14; 
  int number; 
  bool isAlternate; 
  int v22; 
  unsigned int v23; 
  scrContext_t *v24; 
  float fmt; 
  BgMissileFireParms fireParms; 

  if ( !activator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 584, ASSERT_TYPE_ASSERT, "( activator )", (const char *)&queryFormat, "activator") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 585, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 586, ASSERT_TYPE_ASSERT, "( wp )", (const char *)&queryFormat, "wp") )
    __debugbreak();
  Profile_Begin(298);
  Turret = GTurret::GetTurret(&ent->turretHandle);
  v10 = ent;
  _RBX = Turret;
  if ( activator != &g_entities[2047] )
    v10 = activator;
  Turret->m_data.flags &= ~0x10000u;
  v12 = NULL;
  if ( BG_GetWeaponType(&wp->weapon, wp->isAlternate) == WEAPTYPE_BULLET )
  {
    *(double *)&_XMM0 = ((double (__fastcall *)(GTurret *, gentity_s *))_RBX->FireLead_GetSpread)(_RBX, activator);
    __asm { vmovaps xmm1, xmm0; spread }
    G_Bullet_Fire(v10, *(float *)&_XMM1, wp, ent, WEAPON_HAND_DEFAULT, gameTime);
  }
  else
  {
    if ( BG_GetWeaponType(&wp->weapon, wp->isAlternate) == WEAPTYPE_GRENADE )
    {
      v12 = G_Weapon_GrenadeLauncher_Fire(ent, &wp->weapon, WEAPON_HAND_DEFAULT, gameTime, wp);
      goto LABEL_26;
    }
    memset(&fireParms, 0, sizeof(fireParms));
    fireParms.lockon = (_RBX->m_data.flags & 0x8000000) != 0;
    if ( EntHandle::isDefined(&_RBX->m_data.target) )
    {
      v14 = EntHandle::ent(&_RBX->m_data.target);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+50h]
        vmovss  xmm1, dword ptr [rbx+54h]
      }
      number = v14->s.number;
      __asm
      {
        vmovss  dword ptr [rsp+0C8h+var_70.targetPosOrOffset], xmm0
        vmovss  xmm0, dword ptr [rbx+58h]
      }
      fireParms.targetEntNum = number;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+90h]
        vmovss  xmm1, dword ptr [rbx+94h]
        vmovss  dword ptr [rsp+0C8h+var_70.targetPosOrOffset], xmm0
        vmovss  xmm0, dword ptr [rbx+98h]
      }
    }
    __asm
    {
      vmovss  dword ptr [rsp+0C8h+var_70.targetPosOrOffset+8], xmm0
      vmovss  dword ptr [rsp+0C8h+var_70.targetPosOrOffset+4], xmm1
    }
    if ( lockStrength + 13 > 19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 625, ASSERT_TYPE_ASSERT, "( TR_FIRST_TRACK_LOCK + lockStrength - 1 <= TR_TRACK_FULL_LOCK )", (const char *)&queryFormat, "TR_FIRST_TRACK_LOCK + lockStrength - 1 <= TR_TRACK_FULL_LOCK") )
      __debugbreak();
    isAlternate = wp->isAlternate;
    if ( lockStrength > 0 )
      LODWORD(v12) = lockStrength + 13;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+0C8h+fmt], xmm0
    }
    fireParms.trackingTrajectory = (int)v12;
    v12 = G_Weapon_RocketLauncher_Fire(ent, &wp->weapon, isAlternate, WEAPON_HAND_DEFAULT, fmt, wp, &vec3_origin, gameTime, &fireParms, 0);
  }
  G_Turret_ApplyKickBackOnFire(ent, &wp->weapon, wp);
LABEL_26:
  if ( G_Utils_IsClientOrActor(activator) )
  {
    v22 = v10->s.number;
    v23 = 90;
  }
  else
  {
    v23 = 91;
    v22 = BYTE2(_RBX->m_data.flags) & 1;
  }
  G_Utils_AddEvent(ent, v23, v22);
  if ( v12 )
  {
    GScr_AddEntity(v12);
  }
  else
  {
    v24 = ScriptContext_Server();
    Scr_AddUndefined(v24);
  }
  GScr_Notify(ent, scr_const.turret_fire, 1u);
  Profile_EndInternal(NULL);
}

/*
==============
G_Turret_GetAimAngleAndPosition_Internal
==============
*/
bool G_Turret_GetAimAngleAndPosition_Internal(const gentity_s *self, const vec3_t *vPoint, vec3_t *out_sourcePosition, vec2_t *out_localAngles, bool doClampToAimCone)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  GTurret *Turret; 
  unsigned int v28; 
  bool v32; 
  bool v33; 
  bool v34; 
  bool v37; 
  bool v38; 
  bool result; 
  float *maxDamageRange; 
  __int64 v52; 
  float minDamageRange; 
  float v54; 
  vec3_t out; 
  vec3_t angles; 
  tmat43_t<vec3_t> axis; 

  _R12 = out_localAngles;
  _RDI = out_sourcePosition;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1998, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+108h+var_58], xmm6
    vmovaps [rsp+108h+var_68], xmm7
  }
  if ( !G_Utils_DObjGetWorldTagPos(self, scr_const.tag_aim, _RDI) )
    goto LABEL_38;
  AnglesToAxis(&self->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  [rsp+108h+var_7C], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+108h+var_74], xmm0
    vmovss  [rsp+108h+var_78], xmm1
  }
  MatrixTransposeTransformVector43(vPoint, &axis, &out);
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  if ( BG_GetMinDamage(WEAP_DMG_CALC_TYPE_DEFAULT, WeaponForEntity, 0) )
    goto LABEL_7;
  *(double *)&_XMM0 = BG_GetADSDamageRangeScale(NULL, NULL, WeaponForEntity, 0);
  __asm { vmovaps xmm3, xmm0; rangeScale }
  BG_GetDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, WeaponForEntity, 0, *(float *)&_XMM3, &minDamageRange, &v54);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+108h+out]
    vmovss  xmm1, dword ptr [rsp+108h+out+4]
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rsp+108h+out+8]
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, [rsp+108h+minDamageRange]
    vmulss  xmm1, xmm0, xmm0
    vaddss  xmm3, xmm4, xmm1
    vmulss  xmm0, xmm2, xmm2
    vcomiss xmm3, xmm0
  }
  if ( v32 )
  {
LABEL_7:
    vectosignedangles(&out, &angles);
    Turret = GTurret::GetTurret(&self->turretHandle);
    v28 = 0;
    _RBP = Turret;
    _RSI = 0i64;
    _R14 = (char *)&Turret->m_data.arcmax - (char *)&angles;
    v32 = 1;
    do
    {
      if ( !v32 )
      {
        LODWORD(v52) = 2;
        LODWORD(maxDamageRange) = v28;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v52) )
          __debugbreak();
      }
      v33 = v28 < 3;
      if ( v28 >= 3 )
      {
        LODWORD(v52) = 3;
        LODWORD(maxDamageRange) = v28;
        v34 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v52);
        v33 = 0;
        if ( v34 )
          __debugbreak();
      }
      _RDI = (char *)&angles + _RSI;
      __asm
      {
        vmovss  xmm0, dword ptr [r14+rdi]
        vcomiss xmm0, dword ptr [rdi]
      }
      if ( v33 )
        goto LABEL_22;
      if ( v28 >= 2 )
      {
        LODWORD(v52) = 2;
        LODWORD(maxDamageRange) = v28;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v52) )
          __debugbreak();
      }
      v37 = v28 <= 3;
      if ( v28 >= 3 )
      {
        LODWORD(v52) = 3;
        LODWORD(maxDamageRange) = v28;
        v38 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v52);
        v37 = !v38;
        if ( v38 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+rbp+1Ch]
        vcomiss xmm0, dword ptr [rdi]
      }
      if ( !v37 )
      {
LABEL_22:
        if ( !doClampToAimCone )
          goto LABEL_38;
        if ( v28 >= 2 )
        {
          LODWORD(v52) = 2;
          LODWORD(maxDamageRange) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v52) )
            __debugbreak();
        }
        __asm { vmovss  xmm7, dword ptr [r14+rdi] }
        if ( v28 >= 2 )
        {
          LODWORD(v52) = 2;
          LODWORD(maxDamageRange) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v52) )
            __debugbreak();
        }
        __asm { vmovss  xmm6, dword ptr [rsi+rbp+1Ch] }
        if ( v28 >= 3 )
        {
          LODWORD(v52) = 3;
          LODWORD(maxDamageRange) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v52) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]; val
          vmovaps xmm2, xmm7; max
          vmovaps xmm1, xmm6; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm6, xmm0 }
        if ( v28 >= 3 )
        {
          LODWORD(v52) = 3;
          LODWORD(maxDamageRange) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", maxDamageRange, v52) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rdi], xmm6 }
      }
      ++v28;
      _RSI += 4i64;
      v32 = v28 < 2;
    }
    while ( (int)v28 < 2 );
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+108h+angles]
      vmovss  xmm1, dword ptr [rsp+108h+angles+4]
      vmovss  dword ptr [r12], xmm0
      vmovss  dword ptr [r12+4], xmm1
    }
    result = 1;
  }
  else
  {
LABEL_38:
    result = 0;
  }
  __asm
  {
    vmovaps xmm7, [rsp+108h+var_68]
    vmovaps xmm6, [rsp+108h+var_58]
  }
  return result;
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
  _RAX = GTurret::GetTurret(&self->turretHandle);
  __asm { vmovss  xmm0, dword ptr [rax+0C0h] }
  return *(float *)&_XMM0;
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
__int64 G_Turret_IsBehind(const gentity_s *self, const gentity_s *other)
{
  __int64 result; 
  vec3_t forward; 
  char v67; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm8
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovaps xmmword ptr [rax-68h], xmm12
  }
  _RDI = self;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3109, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3110, ASSERT_TYPE_ASSERT, "( other )", (const char *)&queryFormat, "other") )
    __debugbreak();
  if ( !G_Utils_IsClientOrActorOrAgent(other) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3111, ASSERT_TYPE_ASSERT, "( G_Utils_IsClientOrActorOrAgent( other ) )", (const char *)&queryFormat, "G_Utils_IsClientOrActorOrAgent( other )") )
    __debugbreak();
  _RAX = GTurret::GetTurret(&_RDI->turretHandle);
  __asm
  {
    vmovss  xmm4, dword ptr [rax+20h]
    vandps  xmm0, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm2, dword ptr [rax+28h]
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm1, xmm2, xmm0
    vaddss  xmm0, xmm4, dword ptr [rdi+140h]
    vmulss  xmm12, xmm1, cs:__real@3f000000
    vaddss  xmm1, xmm0, xmm12
    vmulss  xmm5, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm2, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm0, xmm0, cs:__real@43b40000; yaw
  }
  YawVectors(*(float *)&_XMM0, &forward, NULL);
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm11, dword ptr [rsp+0B8h+forward]
    vmovss  xmm10, dword ptr [rsp+0B8h+forward+4]
    vmulss  xmm1, xmm11, xmm11
    vmulss  xmm0, xmm10, xmm10
    vaddss  xmm3, xmm1, xmm0
    vmovss  xmm1, dword ptr [rsp+0B8h+forward+8]
    vmulss  xmm2, xmm1, xmm1
    vmovss  xmm1, dword ptr [rdi+134h]
    vsubss  xmm5, xmm1, dword ptr [rbx+134h]
    vaddss  xmm0, xmm3, xmm2
    vsqrtss xmm4, xmm0, xmm0
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm9, xmm0
    vdivss  xmm8, xmm9, xmm0
    vmovss  xmm0, dword ptr [rdi+130h]
    vsubss  xmm6, xmm0, dword ptr [rbx+130h]
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm0
    vsqrtss xmm3, xmm1, xmm1
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
    vdivss  xmm4, xmm9, xmm0
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm1, xmm10, xmm8
    vmulss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm6
    vmulss  xmm2, xmm11, xmm8
    vmulss  xmm0, xmm2, xmm1
    vaddss  xmm0, xmm3, xmm0; X
  }
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42652ee0
    vcomiss xmm1, xmm12
  }
  result = 1i64;
  _R11 = &v67;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
  }
  return result;
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
bool G_Turret_IsTargetVisible(gentity_s *self, const gentity_s *target, const vec3_t *targetOffset, float *distSqr)
{
  bool result; 

  _RBX = target;
  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2592, ASSERT_TYPE_ASSERT, "( target )", (const char *)&queryFormat, "target") )
    __debugbreak();
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2593, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  _R14 = GTurret::GetTurret(&self->turretHandle);
  if ( _R14->IsTargetVisibleStateChecks(_R14, _RBX) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vaddss  xmm2, xmm0, dword ptr [rdi]
      vmovss  xmm0, dword ptr [rbx+134h]
      vaddss  xmm3, xmm0, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [rbx+138h]
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vsubss  xmm0, xmm3, dword ptr [rsi+134h]
      vmovss  dword ptr [rsp+0A8h+out_targetPosition], xmm2
      vsubss  xmm2, xmm2, dword ptr [rsi+130h]
      vmovss  dword ptr [rsp+0A8h+out_targetPosition+8], xmm1
      vmovss  dword ptr [rsp+0A8h+out_targetPosition+4], xmm3
      vsubss  xmm3, xmm1, dword ptr [rsi+138h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm6, xmm2, xmm1
      vcomiss xmm6, dword ptr [r14+78h]
    }
  }
  result = 0;
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  return result;
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

  _RDI = owner;
  _RBX = self;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3190, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3191, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !G_Turret_CanUse(_RBX, _RDI) )
    return 0;
  if ( (_RBX->flags.m_flags[0] & 0x20000000) == 0 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+138h]
    vaddss  xmm1, xmm0, cs:__real@41800000
    vcomiss xmm1, dword ptr [rdi+138h]
  }
  if ( !(unsigned int)G_Turret_IsBehind(_RBX, _RDI) )
    return 0;
  Turret = GTurret::GetTurret(&_RBX->turretHandle);
  if ( (Turret->m_data.flags & 8) != 0 && Turret->RestrictUsageToOwner(Turret) )
  {
    otherEntityNum = _RBX->s.otherEntityNum;
    if ( otherEntityNum == 2047 || otherEntityNum != _RDI->s.number )
      return 0;
  }
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(_RDI);
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
  __int64 v13; 
  unsigned int number; 
  __int64 v15; 
  characterInfo_t *v16; 
  unsigned int Animset; 
  unsigned int animationNumber; 
  GWeaponMap *v19; 
  const Weapon *WeaponForEntity; 
  const PlayerAnimEntry *animation; 
  const BgAnimStatic *v22; 
  const Weapon *v23; 
  weapClass_t WeaponClass; 
  bool v27; 
  bool v28; 
  const XAnim_s *Anims; 
  int XAnimIndex; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  unsigned int v34; 
  int NumChildren; 
  int v86; 
  const char *AnimDebugName; 
  int v91; 
  unsigned int ChildAt; 
  int v93; 
  char v94; 
  const char *v95; 
  char v105; 
  unsigned int v128; 
  unsigned int v129; 
  unsigned int v130; 
  unsigned int v132; 
  unsigned int v134; 
  const SuitDef *SuitDef; 
  const SuitDef *v161; 
  int v168; 
  GHandler *v179; 
  GHandler *Handler; 
  const playerState_s *p_ps; 
  const BgHandler *v200; 
  GWeaponMap *Instance; 
  gclient_s *client; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  void *objID; 
  float objIDa; 
  float objIDb; 
  float objIDc; 
  float objIDd; 
  float objIDe; 
  float objIDf; 
  float objIDg; 
  float curveID; 
  float curveIDa; 
  float curveIDb; 
  float curveIDc; 
  float curveIDd; 
  float curveIDe; 
  float curveIDf; 
  unsigned int childIndexa; 
  unsigned int childIndexb; 
  unsigned int childIndexc; 
  unsigned int childIndexd; 
  unsigned int childIndexe; 
  unsigned int childIndex; 
  unsigned int animIndex; 
  unsigned int v235; 
  unsigned int v236; 
  DObj *obj; 
  XAnimTree *tree; 
  GWeaponMap *weaponMap; 
  vec3_t trans; 
  vec3_t end; 
  vec3_t angles; 
  vec3_t start; 
  vec4_t rot; 
  tmat33_t<vec3_t> vec; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v249; 
  tmat33_t<vec3_t> in1; 
  trace_t results; 

  _RSI = playerEnt;
  _R13 = turretEnt;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r13+13Ch]
      vaddss  xmm1, xmm0, dword ptr [r13+58h]
      vmovss  xmm2, dword ptr [r13+140h]
      vaddss  xmm0, xmm2, dword ptr [r13+5Ch]
      vmovss  dword ptr [rbp+210h+angles], xmm1
      vmovss  xmm1, dword ptr [r13+144h]
      vmovss  dword ptr [rbp+210h+angles+8], xmm1
      vmovss  dword ptr [rbp+210h+angles+4], xmm0
    }
    AngleVectors(&angles, &end, NULL, NULL);
    __asm { vmovss  xmm1, dword ptr [r13+130h] }
    _RAX = _RSI->client;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+138h]
      vmovss  xmm3, cs:__real@42080000
      vmulss  xmm2, xmm3, dword ptr [rbp+210h+end]
      vmulss  xmm3, xmm3, dword ptr [rbp+210h+end+4]
      vsubss  xmm4, xmm1, xmm2
      vmovss  xmm1, dword ptr [r13+134h]
      vsubss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rax+34h], xmm2
      vmovss  dword ptr [rax+30h], xmm4
      vmovss  dword ptr [rax+38h], xmm0
    }
    Handler = GHandler::getHandler();
    p_ps = &_RSI->client->ps;
    v200 = Handler;
    Instance = GWeaponMap::GetInstance();
    BG_PlayerStateToEntityState(Instance, p_ps, &_RSI->s, 1, v200);
    client = _RSI->client;
    _RSI->r.currentOrigin.v[0] = client->ps.origin.v[0];
    _RSI->r.currentOrigin.v[1] = client->ps.origin.v[1];
    _RSI->r.currentOrigin.v[2] = client->ps.origin.v[2];
    SV_LinkEntity(_RSI);
    return;
  }
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v13 = *(_QWORD *)&GStatic::ms_gameStatics;
  number = _RSI->s.number;
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
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 224i64))(v13, number);
  v16 = (characterInfo_t *)v15;
  if ( (!v15 || !*(_DWORD *)(v15 + 4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 931, ASSERT_TYPE_ASSERT, "( ci && ci->infoValid )", (const char *)&queryFormat, "ci && ci->infoValid") )
    __debugbreak();
  obj = Com_GetServerDObjForEnt(_RSI);
  if ( obj )
  {
    if ( PlayerASM_IsEnabled() )
    {
      Animset = BG_PlayerASM_GetAnimset(v16);
      animationNumber = v16->legs.animationNumber;
      if ( !animationNumber || !BG_PlayerASM_IsTurretAlias(animationNumber, Animset) )
      {
        v19 = GWeaponMap::GetInstance();
        WeaponForEntity = BG_GetWeaponForEntity(v19, &_R13->s);
        G_HandlePositionAndBlendForIKTurret(_RSI, v16, _R13, WeaponForEntity);
        return;
      }
    }
    else
    {
      if ( !v16->legs.animationNumber )
        return;
      animation = v16->legs.animation;
      if ( !animation || (animation->flags & 4) == 0 )
        return;
    }
    v22 = (const BgAnimStatic *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 958, ASSERT_TYPE_ASSERT, "( bgameAnim )", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    weaponMap = GWeaponMap::GetInstance();
    v23 = BG_GetWeaponForEntity(weaponMap, &_R13->s);
    if ( !G_HandlePositionAndBlendForIKTurret(_RSI, v16, _R13, v23) )
    {
      if ( G_Utils_DObjGetLocalTagMatrix(_R13, scr_const.tag_weapon) )
      {
        v27 = v23->weaponIdx == 0;
        __asm
        {
          vmovaps [rsp+310h+var_40], xmm6
          vmovaps [rsp+310h+var_50], xmm7
          vmovaps [rsp+310h+var_60], xmm8
          vmovaps [rsp+310h+var_70], xmm9
          vmovaps [rsp+310h+var_80], xmm10
          vmovaps [rsp+310h+var_90], xmm11
          vmovaps [rsp+310h+var_A0], xmm12
          vmovaps [rsp+310h+var_B0], xmm13
          vmovaps [rsp+310h+var_C0], xmm14
        }
        if ( v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 976, ASSERT_TYPE_ASSERT, "( r_turretWeapon.weaponIdx )", (const char *)&queryFormat, "r_turretWeapon.weaponIdx") )
          __debugbreak();
        _R12 = BG_WeaponDef(v23, 0);
        WeaponClass = BG_GetWeaponClass(v23, 0);
        v27 = WeaponClass == WEAPCLASS_TURRET;
        if ( WeaponClass != WEAPCLASS_TURRET )
        {
          v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 978, ASSERT_TYPE_ASSERT, "( BG_GetWeaponClass( r_turretWeapon, false ) == WEAPCLASS_TURRET )", (const char *)&queryFormat, "BG_GetWeaponClass( r_turretWeapon, false ) == WEAPCLASS_TURRET");
          v27 = !v28;
          if ( v28 )
            __debugbreak();
        }
        __asm
        {
          vxorps  xmm13, xmm13, xmm13
          vucomiss xmm13, dword ptr [r12+0C9Ch]
        }
        if ( v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 979, ASSERT_TYPE_ASSERT, "( weapDef->fAnimHorRotateInc )", (const char *)&queryFormat, "weapDef->fAnimHorRotateInc") )
          __debugbreak();
        tree = v16->pXAnimTree;
        if ( PlayerASM_IsEnabled() )
        {
          Anims = BG_PlayerASM_GetAnims(v16->legs.animsetIndex);
          XAnimIndex = BG_PlayerASM_GetXAnimIndex(v16->legs.animsetIndex, v16->legs.animationNumber);
        }
        else
        {
          SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(v16);
          Anims = v22->animScriptData.animTree.anims;
          XAnimIndex = BG_AnimationMP_GetXAnimIndex(v22, SuitAnimIndexFromCharacter, v16->legs.animationNumber & 0xFFFFEFFF);
        }
        __asm { vmovss  xmm0, dword ptr [r14] }
        v34 = XAnimIndex;
        animIndex = XAnimIndex;
        __asm { vmovss  [rsp+310h+childIndex], xmm0 }
        if ( (childIndexa & 0x7F800000) == 2139095040 )
          goto LABEL_89;
        __asm
        {
          vmovss  xmm0, dword ptr [r14+4]
          vmovss  [rsp+310h+childIndex], xmm0
        }
        if ( (childIndexb & 0x7F800000) == 2139095040 )
          goto LABEL_89;
        __asm
        {
          vmovss  xmm0, dword ptr [r14+8]
          vmovss  [rsp+310h+childIndex], xmm0
        }
        if ( (childIndexc & 0x7F800000) == 2139095040 )
          goto LABEL_89;
        __asm
        {
          vmovss  xmm0, dword ptr [r14+0Ch]
          vmovss  [rsp+310h+childIndex], xmm0
        }
        if ( (childIndexd & 0x7F800000) == 2139095040 )
        {
LABEL_89:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [r14+1Ch]
          vmovss  [rsp+310h+childIndex], xmm0
        }
        if ( (childIndexe & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [r14+1Ch]
          vmulss  xmm2, xmm0, dword ptr [r14]
          vmovss  xmm3, dword ptr [r14+4]
          vmovss  xmm5, dword ptr [r14+8]
          vmulss  xmm12, xmm2, dword ptr [r14]
          vmovss  xmm14, cs:__real@3f800000
          vmulss  xmm4, xmm3, xmm0
          vmulss  xmm6, xmm5, xmm0
          vmovss  xmm0, dword ptr [r14+0Ch]
          vmulss  xmm10, xmm0, xmm2
          vmulss  xmm7, xmm3, xmm2
          vmulss  xmm11, xmm3, xmm4
          vmulss  xmm9, xmm5, xmm2
          vmulss  xmm2, xmm0, xmm6
          vmulss  xmm8, xmm5, xmm4
          vmulss  xmm4, xmm0, xmm4
          vmulss  xmm3, xmm5, xmm6
          vaddss  xmm1, xmm2, xmm7
          vmovss  dword ptr [rbp+210h+vec+4], xmm1
          vsubss  xmm1, xmm7, xmm2
          vmovss  [rbp+210h+var_20C], xmm1
          vaddss  xmm1, xmm8, xmm10
          vaddss  xmm0, xmm3, xmm11
          vsubss  xmm0, xmm14, xmm0
          vmovss  dword ptr [rbp+210h+vec], xmm0
          vsubss  xmm0, xmm9, xmm4
          vmovss  [rbp+210h+var_210], xmm0
          vaddss  xmm0, xmm3, xmm12
          vsubss  xmm0, xmm14, xmm0
          vmovss  [rbp+210h+var_208], xmm0
          vaddss  xmm0, xmm4, xmm9
          vmovss  [rbp+210h+var_200], xmm0
          vmovss  [rbp+210h+var_204], xmm1
          vsubss  xmm1, xmm8, xmm10
          vaddss  xmm0, xmm11, xmm12
          vsubss  xmm0, xmm14, xmm0
          vmovss  [rbp+210h+var_1F8], xmm0
          vmovss  [rbp+210h+var_1FC], xmm1
        }
        *(double *)&_XMM0 = vectosignedyaw((const vec2_t *)&vec);
        __asm { vmovaps xmm11, xmm0 }
        AnglesToAxis(&_R13->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
        __asm
        {
          vmovss  xmm4, dword ptr [r13+130h]
          vmovss  xmm2, dword ptr [r13+134h]
          vmovss  xmm1, dword ptr [rsi+134h]
          vmovss  xmm0, dword ptr [rsi+130h]
          vmovss  xmm5, dword ptr [r13+138h]
          vmovss  [rbp+210h+var_190], xmm2
          vsubss  xmm2, xmm1, xmm2
          vmulss  xmm3, xmm2, dword ptr [rbp+210h+axis+1Ch]
          vsubss  xmm1, xmm0, xmm4
          vmulss  xmm2, xmm1, dword ptr [rbp+210h+axis+18h]
          vmovss  xmm0, dword ptr [rsi+138h]
          vmovss  [rbp+210h+var_194], xmm4
          vaddss  xmm4, xmm3, xmm2
          vsubss  xmm1, xmm0, xmm5
          vmulss  xmm2, xmm1, dword ptr [rbp+210h+axis+20h]
          vaddss  xmm3, xmm4, xmm2
          vmovss  [rbp+210h+var_18C], xmm5
          vsubss  xmm10, xmm3, dword ptr [r14+18h]
        }
        NumChildren = XAnimGetNumChildren(Anims, v34);
        __asm { vmovaps xmm12, [rsp+310h+var_A0] }
        childIndex = 0;
        v86 = NumChildren;
        v235 = 0;
        __asm
        {
          vxorps  xmm7, xmm7, xmm7
          vxorps  xmm8, xmm8, xmm8
        }
        if ( !NumChildren )
        {
          AnimDebugName = XAnimGetAnimDebugName(Anims, v34);
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2FBB8, 844i64, AnimDebugName);
        }
        __asm { vmovss  xmm9, cs:__real@3f000000 }
        v91 = 0;
        do
        {
          ChildAt = XAnimGetChildAt(Anims, animIndex, v86 - v91 - 1);
          v93 = XAnimGetNumChildren(Anims, ChildAt);
          v94 = 0;
          if ( !v93 )
          {
            v95 = XAnimGetAnimDebugName(Anims, ChildAt);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2FBB8, 845i64, v95);
          }
          __asm
          {
            vxorps  xmm2, xmm2, xmm2
            vcvtsi2ss xmm2, xmm2, eax
            vmulss  xmm0, xmm2, xmm9
            vdivss  xmm1, xmm11, dword ptr [rax+0C9Ch]
            vaddss  xmm3, xmm1, xmm0
            vcomiss xmm3, xmm13
          }
          if ( v94 )
            __asm { vmovaps xmm1, xmm13 }
          else
            __asm { vminss  xmm1, xmm2, xmm3 }
          __asm
          {
            vcvttss2si r15d, xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, r15d
            vsubss  xmm6, xmm1, xmm0
          }
          v236 = XAnimGetChildAt(Anims, ChildAt, _ER15);
          __asm { vmovss  dword ptr [rsp+310h+fmt], xmm13 }
          XAnimGetAbsDelta(Anims, v236, &rot, &trans, fmt);
          __asm { vucomiss xmm6, xmm13 }
          if ( v27 )
          {
            __asm { vmovss  xmm3, dword ptr [rbp+210h+trans+8] }
          }
          else
          {
            v235 = XAnimGetChildAt(Anims, ChildAt, _ER15 + 1);
            __asm { vmovss  dword ptr [rsp+310h+fmt], xmm13 }
            XAnimGetAbsDelta(Anims, v235, &rot, &angles, fmta);
            __asm
            {
              vmovss  xmm5, dword ptr [rbp+210h+trans+8]
              vmovss  xmm0, dword ptr [rbp+210h+angles]
              vsubss  xmm1, xmm0, dword ptr [rbp+210h+trans]
              vmovss  xmm0, dword ptr [rbp+210h+angles+4]
              vmulss  xmm2, xmm1, xmm6
              vsubss  xmm1, xmm0, dword ptr [rbp+210h+trans+4]
              vaddss  xmm3, xmm2, dword ptr [rbp+210h+trans]
              vmovss  xmm0, dword ptr [rbp+210h+angles+8]
              vmulss  xmm2, xmm1, xmm6
              vmovss  dword ptr [rbp+210h+trans], xmm3
              vaddss  xmm3, xmm2, dword ptr [rbp+210h+trans+4]
              vsubss  xmm1, xmm0, xmm5
              vmulss  xmm2, xmm1, xmm6
              vmovss  dword ptr [rbp+210h+trans+4], xmm3
              vaddss  xmm3, xmm5, xmm2
              vmovss  dword ptr [rbp+210h+trans+8], xmm3
            }
          }
          __asm { vcomiss xmm3, xmm10 }
          if ( !v105 )
            break;
          ++v91;
          childIndex = _ER15;
          __asm
          {
            vmovaps xmm7, xmm3
            vmovaps xmm8, xmm6
          }
        }
        while ( v91 < v86 );
        __asm { vmovss  dword ptr [rsp+310h+fmt], xmm13 }
        XAnimClearTreeGoalWeightsStrict(tree, 0, XANIM_SUBTREE_DEFAULT, animIndex, fmtb, obj, LINEAR);
        __asm
        {
          vmovss  dword ptr [rsp+310h+curveID], xmm14
          vsubss  xmm0, xmm14, xmm6
          vmovss  dword ptr [rsp+310h+objID], xmm13
          vmovss  dword ptr [rsp+310h+fmt], xmm0
        }
        XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v236, fmtc, objIDa, curveID, (scr_string_t)0, 0, 0, LINEAR, NULL);
        __asm
        {
          vucomiss xmm6, xmm13
          vmovaps xmm9, [rsp+310h+var_70]
        }
        _R13 = turretEnt;
        if ( !v27 )
        {
          __asm
          {
            vmovss  dword ptr [rsp+310h+curveID], xmm14
            vmovss  dword ptr [rsp+310h+objID], xmm13
            vmovss  dword ptr [rsp+310h+fmt], xmm6
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v235, fmtd, objIDb, curveIDa, (scr_string_t)0, 0, 0, LINEAR, NULL);
        }
        if ( !v91 || v91 == v86 )
        {
          __asm
          {
            vmovss  dword ptr [rsp+310h+curveID], xmm14
            vmovss  dword ptr [rsp+310h+objID], xmm13
            vmovss  dword ptr [rsp+310h+fmt], xmm14
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, ChildAt, fmti, objIDg, curveIDf, (scr_string_t)0, 0, 0, LINEAR, NULL);
          v129 = animIndex;
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+210h+trans+8]
            vsubss  xmm1, xmm0, xmm7
            vucomiss xmm1, xmm13
          }
          if ( v91 == v86 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1068, ASSERT_TYPE_ASSERT, "( trans[2] - fPrevTransZ )", (const char *)&queryFormat, "trans[2] - fPrevTransZ") )
            __debugbreak();
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+210h+trans+8]
            vsubss  xmm2, xmm10, xmm7
            vsubss  xmm1, xmm0, xmm7
            vmovss  dword ptr [rsp+310h+curveID], xmm14
            vdivss  xmm6, xmm2, xmm1
            vmovss  dword ptr [rsp+310h+objID], xmm13
            vmovss  dword ptr [rsp+310h+fmt], xmm6
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, ChildAt, fmte, objIDc, curveIDb, (scr_string_t)0, 0, 0, LINEAR, NULL);
          v128 = v86 - v91;
          v129 = animIndex;
          v130 = XAnimGetChildAt(Anims, animIndex, v128);
          __asm
          {
            vmovss  dword ptr [rsp+310h+curveID], xmm14
            vsubss  xmm0, xmm14, xmm6
            vmovss  dword ptr [rsp+310h+objID], xmm13
            vmovss  dword ptr [rsp+310h+fmt], xmm0
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v130, fmtf, objIDd, curveIDc, (scr_string_t)0, 0, 0, LINEAR, NULL);
          v132 = XAnimGetChildAt(Anims, v130, childIndex);
          __asm
          {
            vmovss  dword ptr [rsp+310h+curveID], xmm14
            vsubss  xmm0, xmm14, xmm8
            vmovss  dword ptr [rsp+310h+objID], xmm13
            vmovss  dword ptr [rsp+310h+fmt], xmm0
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v132, fmtg, objIDe, curveIDd, (scr_string_t)0, 0, 0, LINEAR, NULL);
          __asm { vucomiss xmm8, xmm13 }
          if ( !v27 )
          {
            v134 = XAnimGetChildAt(Anims, v130, childIndex + 1);
            __asm
            {
              vmovss  dword ptr [rsp+310h+curveID], xmm14
              vmovss  dword ptr [rsp+310h+objID], xmm13
              vmovss  dword ptr [rsp+310h+fmt], xmm8
            }
            XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v134, fmth, objIDf, curveIDe, (scr_string_t)0, 0, 0, LINEAR, NULL);
          }
        }
        XAnimCalcAbsDelta(obj, 0, XANIM_SUBTREE_DEFAULT, v129, &rot, &trans);
        __asm { vmovaps xmm1, xmm11; angle }
        VectorAngleMultiply((vec2_t *)&trans, *(float *)&_XMM1);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+210h+trans]
          vmovss  xmm2, dword ptr [rbp+210h+trans+4]
          vaddss  xmm1, xmm0, dword ptr [rax+10h]
          vmovss  [rbp+210h+var_164], xmm1
          vaddss  xmm0, xmm2, dword ptr [rax+14h]
          vmovss  xmm1, dword ptr [rbp+210h+trans+8]
          vmovss  [rbp+210h+var_160], xmm0
          vaddss  xmm2, xmm1, dword ptr [rax+18h]
          vmovss  [rbp+210h+var_15C], xmm2
        }
        QuatToAxis(&rot, &in1);
        *(double *)&_XMM0 = vectoyaw((const vec2_t *)&in1);
        __asm { vaddss  xmm0, xmm0, xmm11; yaw }
        YawToAxis(*(float *)&_XMM0, (tmat33_t<vec3_t> *)&v249);
        MatrixMultiply43(&v249, &axis, &out);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+210h+out+28h]
          vmovss  xmm1, dword ptr [rbp+210h+out+2Ch]
          vmovss  xmm2, dword ptr [rbp+210h+out+24h]
          vmovss  dword ptr [rsi+134h], xmm0
          vmovss  dword ptr [rsi+138h], xmm1
          vmovss  dword ptr [rsi+130h], xmm2
        }
        _RAX = _RSI->client;
        __asm
        {
          vmovss  dword ptr [rax+30h], xmm2
          vmovss  xmm0, dword ptr [rbp+210h+out+28h]
          vmovss  dword ptr [rax+34h], xmm0
          vmovss  xmm1, dword ptr [rbp+210h+out+2Ch]
          vmovss  dword ptr [rax+38h], xmm1
        }
        AxisToAngles((const tmat33_t<vec3_t> *)&out, &_RSI->r.currentAngles);
        _RSI->s.lerp.apos.trBase.v[0] = _RSI->r.currentAngles.v[0];
        _RSI->s.lerp.apos.trBase.v[1] = _RSI->r.currentAngles.v[1];
        _RSI->s.lerp.apos.trBase.v[2] = _RSI->r.currentAngles.v[2];
        MatrixMultiply(&in1, &vec, (tmat33_t<vec3_t> *)&out);
        _RDX = &_RSI->client->ps.viewangles;
        __asm
        {
          vmovss  xmm6, dword ptr [rdx]
          vmovss  xmm7, dword ptr [rdx+4]
          vmovss  xmm8, dword ptr [rdx+8]
        }
        AxisToAngles((const tmat33_t<vec3_t> *)&out, _RDX);
        _RAX = _RSI->client;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+30h]
          vmovss  dword ptr [rbp+210h+start], xmm0
          vmovss  xmm1, dword ptr [rax+34h]
          vmovss  dword ptr [rbp+210h+start+4], xmm1
          vmovss  xmm0, dword ptr [rax+30h]
          vmovss  dword ptr [rbp+210h+end], xmm0
          vmovss  xmm1, dword ptr [rax+34h]
          vmovss  dword ptr [rbp+210h+end+4], xmm1
          vmovss  xmm0, dword ptr [rax+38h]
          vmovss  dword ptr [rbp+210h+end+8], xmm0
        }
        SuitDef = BG_GetSuitDef(_RAX->ps.suitIndex);
        __asm { vmovaps xmm13, [rsp+310h+var_B0] }
        v161 = SuitDef;
        __asm
        {
          vmovaps xmm11, [rsp+310h+var_90]
          vmovaps xmm10, [rsp+310h+var_80]
        }
        if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1120, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
          __debugbreak();
        if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r13+138h]
            vaddss  xmm0, xmm1, cs:__real@41900000
          }
        }
        else
        {
          BG_Suit_GetProneViewHeight(v161);
          __asm
          {
            vmovss  xmm1, dword ptr [r13+138h]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vsubss  xmm0, xmm1, xmm0
          }
        }
        v168 = _RSI->s.number;
        __asm
        {
          vmovss  dword ptr [rbp+210h+start+8], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+200h]
          vsubss  xmm1, xmm1, xmm0
          vmovss  dword ptr [rbp+210h+end+8], xmm1
        }
        G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, v168, 65553);
        __asm
        {
          vmovss  xmm2, [rbp+210h+results.fraction]
          vcomiss xmm2, xmm14
          vmovaps xmm14, [rsp+310h+var_C0]
        }
        if ( v94 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+210h+end+8]
            vsubss  xmm1, xmm0, dword ptr [rbp+210h+start+8]
            vmulss  xmm2, xmm1, xmm2
            vaddss  xmm3, xmm2, dword ptr [rbp+210h+start+8]
            vmovss  dword ptr [rsi+138h], xmm3
          }
          _RAX = _RSI->client;
          __asm { vmovss  dword ptr [rax+38h], xmm3 }
        }
        v179 = GHandler::getHandler();
        BG_PlayerStateToEntityState(weaponMap, &_RSI->client->ps, &_RSI->s, 1, v179);
        _RAX = _RSI->client;
        __asm
        {
          vmovss  dword ptr [rax+1D8h], xmm6
          vmovss  dword ptr [rax+1DCh], xmm7
          vmovss  dword ptr [rax+1E0h], xmm8
        }
        SV_LinkEntity(_RSI);
        __asm
        {
          vmovaps xmm8, [rsp+310h+var_60]
          vmovaps xmm7, [rsp+310h+var_50]
          vmovaps xmm6, [rsp+310h+var_40]
        }
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
  DObjAnimMat *LocalTagMatrix; 
  int v23; 
  unsigned __int8 *priorityMap; 
  char v50; 
  vec3_t in1; 
  vec3_t angles; 
  tmat33_t<vec3_t> v62; 
  vec3_t end; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 
  trace_t results; 

  _RDI = self;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1927, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  _R14 = GTurret::GetTurret(&_RDI->turretHandle);
  LocalTagMatrix = G_Utils_DObjGetLocalTagMatrix(_RDI, scr_const.tag_aim);
  if ( LocalTagMatrix )
  {
    if ( G_Utils_DObjGetLocalTagMatrix(_RDI, scr_const.tag_butt) )
    {
      __asm
      {
        vmovaps [rsp+1C0h+var_20], xmm6
        vmovaps [rsp+1C0h+var_30], xmm7
        vmovaps [rsp+1C0h+var_40], xmm8
        vmovaps [rsp+1C0h+var_50], xmm9
        vmovaps [rsp+1C0h+var_60], xmm10
        vmovaps [rsp+1C0h+var_70], xmm11
        vmovaps [rsp+1C0h+var_80], xmm12
      }
      AnglesToAxis(&_RDI->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+130h]
        vmovss  xmm1, dword ptr [rdi+134h]
        vmovss  [rbp+0C0h+var_104], xmm0
        vmovss  xmm0, dword ptr [rdi+138h]
        vmovss  [rbp+0C0h+var_FC], xmm0
        vmovss  [rbp+0C0h+var_100], xmm1
        vmovss  xmm0, dword ptr [rbx+10h]
        vsubss  xmm7, xmm0, dword ptr [rsi+10h]
        vmovss  xmm0, dword ptr [rbx+18h]
        vmovss  xmm1, dword ptr [rbx+14h]
        vsubss  xmm9, xmm0, dword ptr [rsi+18h]
        vsubss  xmm8, xmm1, dword ptr [rsi+14h]
      }
      MatrixTransformVector43(&LocalTagMatrix->trans, &axis, &out);
      __asm
      {
        vmovss  xmm11, cs:__real@c0400000
        vmovss  xmm12, cs:__real@3f800000
      }
      v23 = 0;
      __asm { vxorps  xmm10, xmm10, xmm10 }
      while ( 1 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebx
          vmulss  xmm1, xmm0, xmm11
          vmovss  dword ptr [rsp+1C0h+angles], xmm1
          vmovss  dword ptr [rsp+1C0h+angles+4], xmm10
          vmovss  dword ptr [rsp+1C0h+angles+8], xmm10
        }
        AnglesToAxis(&angles, &v62);
        __asm
        {
          vmulss  xmm3, xmm8, dword ptr [rsp+1C0h+var_170+0Ch]
          vmulss  xmm2, xmm7, dword ptr [rsp+1C0h+var_170]
          vmulss  xmm1, xmm9, dword ptr [rsp+1C0h+var_170+18h]
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm3, xmm8, dword ptr [rsp+1C0h+var_170+10h]
          vmulss  xmm2, xmm7, dword ptr [rsp+1C0h+var_170+4]
          vaddss  xmm6, xmm4, xmm1
          vmulss  xmm1, xmm9, dword ptr [rsp+1C0h+var_170+1Ch]
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm2, xmm7, dword ptr [rsp+1C0h+var_170+8]
          vmulss  xmm3, xmm8, dword ptr [rsp+1C0h+var_170+14h]
          vaddss  xmm5, xmm4, xmm1
          vmulss  xmm1, xmm9, dword ptr [rsp+1C0h+var_170+20h]
          vmovss  dword ptr [rsp+1C0h+in1], xmm6
          vmovss  dword ptr [rsp+1C0h+in1+4], xmm5
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vmovss  dword ptr [rsp+1C0h+in1+8], xmm2
          vaddss  xmm0, xmm6, dword ptr [rsi+10h]
          vmovss  dword ptr [rsp+1C0h+in1], xmm0
          vaddss  xmm1, xmm5, dword ptr [rsi+14h]
          vmovss  dword ptr [rsp+1C0h+in1+4], xmm1
          vaddss  xmm0, xmm2, dword ptr [rsi+18h]
          vmovss  dword ptr [rsp+1C0h+in1+8], xmm0
        }
        MatrixTransformVector43(&in1, &axis, &end);
        priorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
        G_Main_LocationalTrace(&results, &out, &end, _RDI->s.number, 8390673, priorityMap);
        __asm
        {
          vmovss  xmm0, [rbp+0C0h+results.fraction]
          vcomiss xmm0, xmm12
        }
        if ( v50 )
          break;
        if ( ++v23 > 30 )
          goto LABEL_11;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1C0h+angles]
        vaddss  xmm1, xmm0, dword ptr [rdi+58h]
        vmovss  dword ptr [r14+2Ch], xmm1
      }
LABEL_11:
      __asm
      {
        vmovaps xmm11, [rsp+1C0h+var_70]
        vmovaps xmm10, [rsp+1C0h+var_60]
        vmovaps xmm9, [rsp+1C0h+var_50]
        vmovaps xmm8, [rsp+1C0h+var_40]
        vmovaps xmm7, [rsp+1C0h+var_30]
        vmovaps xmm6, [rsp+1C0h+var_20]
        vmovaps xmm12, [rsp+1C0h+var_80]
      }
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
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  char v13; 
  bool v15; 
  int flags; 
  unsigned int scanPauseTime; 
  bool v35; 
  bool v36; 

  _RDI = self;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1608, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&_RDI->turretHandle);
  _RBX = Turret;
  if ( (Turret->m_data.flags & 0x4000000) != 0 )
  {
    G_Turret_ScanStop(&Turret->m_data);
    return;
  }
  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_48], xmm8
  }
  *(double *)&_XMM0 = G_Level_GetFrameDurationInSeconds();
  __asm { vmovaps xmm8, xmm0 }
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &_RDI->s);
  __asm { vxorps  xmm6, xmm6, xmm6 }
  _RSI = BG_WeaponDef(WeaponForEntity, 0);
  __asm { vcomiss xmm6, dword ptr [rax+0CDCh] }
  if ( !v13 )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1625, ASSERT_TYPE_ASSERT, "( weapDef->scanSpeed > 0.0f )", (const char *)&queryFormat, "weapDef->scanSpeed > 0.0f");
    v13 = 0;
    if ( v15 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, dword ptr [rsi+0CE0h] }
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1626, ASSERT_TYPE_ASSERT, "( weapDef->scanAccel > 0.0f )", (const char *)&queryFormat, "weapDef->scanAccel > 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+0CDCh]; rate
    vmovss  xmm1, dword ptr [rdi+58h]; cur
    vmovaps [rsp+88h+var_38], xmm7
    vmovaps xmm3, xmm8; deltaTime
    vxorps  xmm0, xmm0, xmm0; tgt
    vmovaps [rsp+88h+var_58], xmm9
  }
  *(double *)&_XMM0 = LinearTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm { vmovss  dword ptr [rdi+58h], xmm0 }
  flags = _RBX->m_data.flags;
  if ( (flags & 0x100) != 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+5Ch]
      vsubss  xmm9, xmm0, dword ptr [rbx+20h]
      vmovss  xmm7, cs:__real@bf800000
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vsubss  xmm9, xmm0, dword ptr [rdi+5Ch]
      vmovss  xmm7, cs:__real@3f800000
    }
  }
  if ( (flags & 0x80u) == 0 )
  {
    __asm { vcomiss xmm6, dword ptr [rsi+0CDCh] }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1572, ASSERT_TYPE_ASSERT, "( weapDef->scanSpeed > 0.0f )", (const char *)&queryFormat, "weapDef->scanSpeed > 0.0f") )
      __debugbreak();
    __asm { vcomiss xmm6, dword ptr [rsi+0CE0h] }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1573, ASSERT_TYPE_ASSERT, "( weapDef->scanAccel > 0.0f )", (const char *)&queryFormat, "weapDef->scanAccel > 0.0f") )
      __debugbreak();
    _RBX->m_data.flags |= 0x80u;
    __asm { vmovss  xmm2, cs:__real@3f000000 }
    _RBX->m_data.scanSpeed = 0.0;
    _RBX->m_data.scanPauseTime = level.time + _RSI->scanPauseTime;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+0CDCh]
      vmulss  xmm1, xmm0, xmm0
      vdivss  xmm0, xmm2, dword ptr [rsi+0CE0h]
      vmulss  xmm4, xmm1, xmm0
      vmulss  xmm3, xmm9, xmm2
      vcmpltss xmm0, xmm3, xmm4
      vblendvps xmm0, xmm4, xmm3, xmm0
      vmovss  dword ptr [rbx+0ACh], xmm0
    }
  }
  scanPauseTime = _RBX->m_data.scanPauseTime;
  v35 = level.time < scanPauseTime;
  v36 = level.time <= scanPauseTime;
  if ( level.time >= (int)scanPauseTime )
  {
    __asm
    {
      vcomiss xmm9, dword ptr [rbx+0ACh]
      vmulss  xmm0, xmm8, dword ptr [rsi+0CE0h]
      vmovss  xmm1, dword ptr [rbx+0A8h]
    }
    if ( level.time >= scanPauseTime )
    {
      __asm
      {
        vaddss  xmm1, xmm0, xmm1
        vmovss  dword ptr [rbx+0A8h], xmm1
        vmovss  xmm0, dword ptr [rsi+0CDCh]
        vcomiss xmm1, xmm0
      }
      if ( v35 )
        __asm { vmovaps xmm0, xmm1 }
      else
        __asm { vmovss  dword ptr [rbx+0A8h], xmm0 }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm1, xmm0
        vcomiss xmm0, xmm6
        vmovss  dword ptr [rbx+0A8h], xmm0
      }
      if ( v36 )
      {
        G_Turret_ScanStop(&_RBX->m_data);
        goto LABEL_29;
      }
    }
    __asm
    {
      vmulss  xmm0, xmm0, xmm8
      vmulss  xmm1, xmm0, xmm7
      vaddss  xmm2, xmm1, dword ptr [rdi+5Ch]
      vmovss  dword ptr [rdi+5Ch], xmm2
    }
  }
LABEL_29:
  __asm
  {
    vmovaps xmm7, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_58]
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_48]
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
  const gentity_s *v6; 
  unsigned int v7; 
  unsigned int v20; 
  DObj *ServerDObjForEnt; 
  unsigned __int8 v24; 
  unsigned __int64 v25; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t vPoint; 
  vec3_t out_sourcePosition; 
  vec2_t out_localAngles; 
  DObjPartBits partBits; 

  __asm { vmovaps [rsp+0E0h+var_40], xmm6 }
  _RSI = self;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2530, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( _RSI->s.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2531, ASSERT_TYPE_ASSERT, "( self->s.eType == ET_TURRET )", (const char *)&queryFormat, "self->s.eType == ET_TURRET") )
    __debugbreak();
  _R14 = GTurret::GetTurret(&_RSI->turretHandle);
  if ( !EntHandle::isDefined(&_R14->m_data.manualTarget) )
    Scr_Error(COM_ERR_3332, scrContext, "turret manual target not defined");
  v6 = EntHandle::ent(&_R14->m_data.manualTarget);
  v7 = (unsigned int)_R14->m_data.flags >> 4;
  GTurret::SetTargetEnt(_R14, v6, &_R14->m_data.manualTargetOffset);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+60h]
    vaddss  xmm1, xmm0, dword ptr [rdi+130h]
    vmovss  dword ptr [rbp+57h+vPoint], xmm1
    vmovss  xmm2, dword ptr [r14+64h]
    vaddss  xmm0, xmm2, dword ptr [rdi+134h]
    vmovss  dword ptr [rbp+57h+vPoint+4], xmm0
    vmovss  xmm1, dword ptr [r14+68h]
    vaddss  xmm2, xmm1, dword ptr [rdi+138h]
    vmovss  dword ptr [rbp+57h+vPoint+8], xmm2
  }
  if ( !G_Turret_GetAimAngleAndPosition_Internal(_RSI, &vPoint, &out_sourcePosition, &out_localAngles, 0) )
    Scr_Error(COM_ERR_3333, scrContext, "turretData cannot point at target");
  _RBX = GTurret::GetTurret(&_RSI->turretHandle);
  G_Turret_UpdateShootingState(_RSI, v7 & 1, &out_localAngles);
  _RBX->m_data.flags |= 0x20u;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+out_sourcePosition]
    vmovss  dword ptr [rbx+90h], xmm0
    vmovss  xmm1, dword ptr [rbp+57h+out_sourcePosition+4]
    vmovss  dword ptr [rbx+94h], xmm1
    vmovss  xmm0, dword ptr [rbp+57h+out_sourcePosition+8]
    vmovss  xmm1, dword ptr [rbp+57h+out_localAngles]
    vmovss  dword ptr [rbx+98h], xmm0
    vmovss  xmm0, dword ptr [rbp+57h+out_localAngles+4]
  }
  v20 = 0;
  __asm { vmovss  dword ptr [rsi+5Ch], xmm0 }
  _RSI->s.lerp.u.anonymous.data[2] = 0;
  __asm { vmovss  dword ptr [rsi+58h], xmm1 }
  _RDI = &partBits;
  ServerDObjForEnt = Com_GetServerDObjForEnt(_RSI);
  __asm { vpxor   xmm6, xmm6, xmm6 }
  do
  {
    __asm { vmovdqu xmmword ptr [rdi], xmm6 }
    _RDI = (DObjPartBits *)((char *)_RDI + 16);
    ++v20;
  }
  while ( v20 < 2 );
  inOutIndex[0] = -2;
  if ( !DObjGetBoneIndexInternal_11(ServerDObjForEnt, scr_const.tag_aim, inOutIndex, &modelIndex) )
    Scr_Error(COM_ERR_3334, scrContext, "'tag_aim' bone not found on turret");
  G_Utils_DObjClearBoneSetBit(ServerDObjForEnt, inOutIndex[0]);
  v24 = inOutIndex[0];
  v25 = inOutIndex[0];
  inOutIndex[0] = -2;
  partBits.array[v25 >> 5] |= 0x80000000 >> (v24 & 0x1F);
  if ( DObjGetBoneIndexInternal_11(ServerDObjForEnt, scr_const.tag_aim_animated, inOutIndex, &modelIndex) )
  {
    G_Utils_DObjClearBoneSetBit(ServerDObjForEnt, inOutIndex[0]);
    partBits.array[(unsigned __int64)inOutIndex[0] >> 5] |= 0x80000000 >> (inOutIndex[0] & 0x1F);
  }
  DObjCompleteHierarchyBits(ServerDObjForEnt, &partBits);
  G_Utils_DObjCalcPose(_RSI, &partBits);
  __asm { vmovaps xmm6, [rsp+0E0h+var_40] }
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
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v21; 

  _RBX = self;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3453, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( _RBX->s.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3454, ASSERT_TYPE_ASSERT, "( self->s.eType == ET_TURRET )", (const char *)&queryFormat, "self->s.eType == ET_TURRET") )
    __debugbreak();
  result = G_Turret_CanUse(_RBX, owner);
  if ( result )
  {
    __asm
    {
      vmovaps [rsp+98h+var_28], xmm7
      vmovaps [rsp+98h+var_38], xmm8
      vmovaps [rsp+98h+var_48], xmm9
      vmovaps [rsp+98h+var_58], xmm10
      vmovaps [rsp+98h+var_68], xmm11
    }
    Turret = GTurret::GetTurret(&_RBX->turretHandle);
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
    _RSI = owner->client;
    if ( (_RSI->flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3473, ASSERT_TYPE_ASSERT, "( 0 == (owner->client->flags & (1<<2)) )", (const char *)&queryFormat, "0 == (owner->client->flags & CL_FLAG_FROZEN)") )
      __debugbreak();
    if ( G_IsTurretKeepingOrientationOnExit(&_RBX->s) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+5Ch]
        vaddss  xmm11, xmm0, dword ptr [rbx+140h]
        vmovss  xmm10, dword ptr [rbx+58h]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm10, dword ptr [rbx+13Ch]
        vmovss  xmm11, dword ptr [rbx+140h]
      }
    }
    G_Turret_Use(_RBX, owner, NULL);
    if ( remoteUse )
    {
      Instance = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &_RBX->s);
      v21 = BG_WeaponDef(WeaponForEntity, 0);
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3494, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
        __debugbreak();
      if ( v21->useTurretViewmodelAnims )
        Scr_Error(COM_ERR_3335, scrContext, "useTurretViewmodelAnims is not supported with remote turrets.");
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3500, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2173, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2174, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RSI->ps.eFlags, ACTIVE, 7u);
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&_RSI->ps.otherFlags, ACTIVE, 0x18u);
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2110, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 7u);
    }
    __asm
    {
      vmovss  xmm8, cs:__real@3f000000
      vmovss  xmm7, cs:__real@43b40000
      vmovss  dword ptr [rbx+58h], xmm10
      vmovss  dword ptr [rbx+5Ch], xmm11
      vsubss  xmm0, xmm11, dword ptr [rsi+1DCh]
      vmulss  xmm3, xmm0, cs:__real@3b360b61
      vaddss  xmm1, xmm3, xmm8
      vxorps  xmm9, xmm9, xmm9
      vroundss xmm2, xmm9, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, xmm7
      vaddss  xmm1, xmm0, dword ptr [rsi+0B8h]
      vmulss  xmm1, xmm1, cs:__real@43360b61
      vaddss  xmm2, xmm1, xmm8
      vroundss xmm1, xmm9, xmm2, 1
      vcvttss2si eax, xmm1
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm3, xmm0, cs:__real@37800000
      vaddss  xmm1, xmm3, xmm8
      vroundss xmm2, xmm9, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rsi+0B8h], xmm1
      vsubss  xmm0, xmm10, dword ptr [rsi+1D8h]
      vmulss  xmm3, xmm0, cs:__real@3b360b61
      vaddss  xmm1, xmm3, xmm8
      vroundss xmm2, xmm9, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm0, xmm7
      vaddss  xmm2, xmm1, dword ptr [rsi+0B4h]
      vmulss  xmm3, xmm2, cs:__real@43360b61
      vaddss  xmm4, xmm3, xmm8
      vroundss xmm2, xmm9, xmm4, 1
      vcvttss2si eax, xmm2
    }
    _ECX = (unsigned __int16)_EAX;
    result = 1;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, cs:__real@37800000
      vaddss  xmm2, xmm4, xmm8
      vmovaps xmm8, [rsp+98h+var_38]
      vroundss xmm3, xmm9, xmm2, 1
      vmovaps xmm9, [rsp+98h+var_48]
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, xmm7
      vmovaps xmm7, [rsp+98h+var_28]
      vmovss  dword ptr [rsi+0B4h], xmm0
      vmovss  dword ptr [rsi+1D8h], xmm10
      vmovaps xmm10, [rsp+98h+var_58]
      vmovss  dword ptr [rsi+1DCh], xmm11
      vmovaps xmm11, [rsp+98h+var_68]
    }
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

void __fastcall G_Turret_SetDefaultDropPitch(gentity_s *self, double pitch)
{
  GTurret_vtbl *v7; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1907, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  _RAX = GTurret::GetTurret(&self->turretHandle);
  __asm { vmovaps xmm2, xmm6 }
  v7 = _RAX->__vftable;
  __asm
  {
    vmovss  dword ptr [rax+2Ch], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  ((void (__fastcall *)(GTurret *, gentity_s *))v7->SetDefaultDropPitchVirtual)(_RAX, self);
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
  const DObj *v7; 
  DObj *v8; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  XAnim_s *AnimsForTurretWeap; 
  XAnimTree *SmallTree; 
  char v14; 
  float fmt; 
  float goalTime; 
  float v18; 
  int turretAnimIndexArrayOut[6]; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2918, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(self);
  v7 = ServerDObjForEnt;
  if ( ServerDObjForEnt )
  {
    if ( !ServerDObjForEnt->tree )
    {
      v8 = Com_GetServerDObjForEnt(&g_entities[self->s.number]);
      Instance = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
      AnimsForTurretWeap = BG_Turret_GetAnimsForTurretWeap(WeaponForEntity, 1);
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2899, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
        __debugbreak();
      if ( v8->tree )
      {
        Com_XAnimFreeSmallTree(v8->tree);
        v8->tree = NULL;
      }
      SmallTree = Com_XAnimCreateSmallTree(AnimsForTurretWeap, MOVEMENT);
      if ( !SmallTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2908, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
        __debugbreak();
      self->pAnimTree = SmallTree;
      DObjSetTree(v8, SmallTree);
    }
    BG_TurretAnim_GetAnimIndices(v7, r_turretWeapon, turretAnimIndexArrayOut);
    *(double *)&_XMM0 = XAnimGetWeight(v7->tree, 0, XANIM_SUBTREE_DEFAULT, turretAnimIndexArrayOut[0]);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm0, xmm1
    }
    if ( v14 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovss  [rsp+0A8h+var_78], xmm0
        vmovss  [rsp+0A8h+goalTime], xmm1
        vmovss  dword ptr [rsp+0A8h+fmt], xmm0
      }
      XAnimSetGoalWeight(v7, 0, XANIM_SUBTREE_DEFAULT, turretAnimIndexArrayOut[0], fmt, goalTime, v18, (scr_string_t)0, 0, 0, LINEAR, NULL);
    }
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

  _RSI = params;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 721, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 722, ASSERT_TYPE_ASSERT, "( other )", (const char *)&queryFormat, "other") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  _RBX = BG_GetWeaponForEntity(Instance, &self->s);
  memset_0(_RSI, 0, sizeof(BgWeaponParms));
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rsi+48h], ymm0
    vmovups xmm1, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rsi+68h], xmm1
    vmovsd  xmm0, qword ptr [rbx+30h]
    vmovsd  qword ptr [rsi+78h], xmm0
  }
  *(_DWORD *)&_RSI->weapon.weaponCamo = *(_DWORD *)&_RBX->weaponCamo;
  _RSI->weapDef = BG_WeaponDef(_RBX, 0);
  G_Turret_FillWeaponParms(self, other, _RSI, tagName);
}

/*
==============
G_Turret_Shoot_internal
==============
*/
void G_Turret_Shoot_internal(gentity_s *self, gentity_s *other, const int lockStrength, const int gameTime, const BgWeaponParms *const wp)
{
  const BgWeaponParms *v11; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v16; 
  bool v17; 
  GWeaponMap *v19; 
  GWeaponMap *v20; 
  const Weapon *v21; 
  gclient_s *client; 
  int weaponState; 
  int fireDelay; 
  float outDissipationPerSecond[3]; 
  int fireTime; 
  float outAccumulationPerShot; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 741, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 742, ASSERT_TYPE_ASSERT, "( other )", (const char *)&queryFormat, "other") )
    __debugbreak();
  v11 = wp;
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 743, ASSERT_TYPE_ASSERT, "( wp )", (const char *)&queryFormat, "wp") )
    __debugbreak();
  _R15 = GTurret::GetTurret(&self->turretHandle);
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 687, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  _RDI = GTurret::GetTurret(&self->turretHandle);
  if ( (_RDI->m_data.flags & 2) == 0 )
  {
    Instance = GWeaponMap::GetInstance();
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
    v16 = BG_WeaponDef(WeaponForEntity, 0);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 697, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    if ( level.time >= _RDI->m_data.heatPenaltyEndTime )
    {
      v17 = !v16->turretBarrelSpinEnabled;
      __asm
      {
        vmovaps [rsp+98h+var_48], xmm6
        vmovss  xmm6, cs:__real@3f800000
      }
      if ( v17 )
        goto LABEL_20;
      __asm { vcomiss xmm6, dword ptr [rdi+0C0h] }
      if ( v17 )
      {
LABEL_20:
        v19 = GWeaponMap::GetInstance();
        v20 = GWeaponMap::GetInstance();
        v21 = BG_GetWeaponForEntity(v20, &self->s);
        BG_GetFireTime(NULL, NULL, v21, 0, 0, 0, &fireTime, &fireDelay);
        _R15->m_data.fireSndDelay = 3 * fireTime;
        _R15->m_data.fireTimestamp = level.time;
        if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 711, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
          __debugbreak();
        if ( self->s.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 712, ASSERT_TYPE_ASSERT, "(self->s.eType == ET_TURRET)", (const char *)&queryFormat, "self->s.eType == ET_TURRET") )
          __debugbreak();
        self->s.lerp.u.anonymous.data[7] = (self->s.lerp.u.anonymous.data[7] + 1) % 16;
        client = other->client;
        if ( !client || !BG_IsUsingTurretViewarms(v19, &client->ps) || (weaponState = other->client->ps.weapState[0].weaponState, (unsigned int)(weaponState - 16) <= 1) || (unsigned int)(weaponState - 22) <= 2 )
        {
          G_Turret_FireLead(self, other, lockStrength, gameTime, v11);
          BG_GetHeatProperties(v21, 0, &outAccumulationPerShot, outDissipationPerSecond);
          __asm
          {
            vmovss  xmm0, [rsp+98h+outAccumulationPerShot]
            vaddss  xmm0, xmm0, dword ptr [r15+0B8h]; val
            vmovaps xmm2, xmm6; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovss  dword ptr [r15+0B8h], xmm0 }
        }
      }
      __asm { vmovaps xmm6, [rsp+98h+var_48] }
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
  bool v11; 
  char v13; 

  Profile_Begin(297);
  LegacySightTrace = PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, start, end, &bounds_origin, passEnt1, passEnt2, 8394755);
  v11 = LegacySightTrace != 0;
  if ( !LegacySightTrace && (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
  {
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    if ( SV_IsDemoPlaying() )
    {
      *(double *)&_XMM0 = SV_DemoSP_GetFxVisibility();
      __asm { vmovaps xmm6, xmm0 }
    }
    else
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api_inline.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
        __debugbreak();
      *(double *)&_XMM0 = FX_GetClientVisibility(fx_serverVisClient, start, end);
      __asm { vmovaps xmm6, xmm0 }
      SV_DemoSP_RecordFxVisibility(*(float *)&_XMM0);
    }
    __asm
    {
      vcomiss xmm6, cs:__real@3e4ccccd
      vmovaps xmm6, [rsp+58h+var_18]
    }
    if ( v13 )
      v11 = 1;
  }
  Profile_EndInternal(NULL);
  return !v11;
}

/*
==============
G_Turret_Spawn
==============
*/
void G_Turret_Spawn(scrContext_t *scrContext, gentity_s *self, const Weapon *r_weapon, const int useDropPitch)
{
  GWeaponMap *Instance; 
  const char *WeaponName; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  BgObjectHandle<GTurret> *p_turretHandle; 
  unsigned int v15; 
  GTurret **v16; 
  GTurret *v17; 
  WeaponSFXPackage *sfxPackage; 
  GConfigStrings *v21; 
  unsigned __int16 v22; 
  bool v52; 
  int v53; 
  unsigned __int16 number; 
  __int64 v59; 
  unsigned int v60; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  float out; 
  float v65[3]; 
  char output[512]; 

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
    __asm { vmovaps [rsp+2A8h+var_48], xmm6 }
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
    _R15 = GTurret::GetTurret(&self->turretHandle);
    if ( _R15->m_inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3617, ASSERT_TYPE_ASSERT, "( !turret->m_inuse )", (const char *)&queryFormat, "!turret->m_inuse") )
      __debugbreak();
    _R15->m_inuse = 1;
    memset_0(&_R15->m_data, 0, sizeof(_R15->m_data));
    _R15->SpawnVirtual(_R15, self);
    _RBP = BG_WeaponDef(r_weapon, 0);
    _R15->m_data.stance = _RBP->stance;
    _R15->m_data.prevStance = -1;
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    sfxPackage = _RBP->sfxPackage;
    v21 = GConfigStrings::ms_gConfigStrings;
    if ( sfxPackage )
    {
      if ( sfxPackage->sounds->fireLoopSound.name )
      {
        _R15->m_data.fireLoopSnd = ((__int64 (__fastcall *)(GConfigStrings *))GConfigStrings::ms_gConfigStrings->GetLoopingSoundAliasIndex)(GConfigStrings::ms_gConfigStrings);
        sfxPackage = _RBP->sfxPackage;
      }
      if ( sfxPackage )
      {
        if ( sfxPackage->sounds->fireLoopSoundPlayer.name )
        {
          _R15->m_data.fireLoopSndPlayer = ((__int64 (__fastcall *)(GConfigStrings *))v21->GetLoopingSoundAliasIndex)(v21);
          sfxPackage = _RBP->sfxPackage;
        }
        if ( sfxPackage )
        {
          if ( sfxPackage->sounds->fireStopSound.name )
          {
            _R15->m_data.stopSnd = ((__int64 (__fastcall *)(GConfigStrings *))v21->GetSoundAliasIndex)(v21);
            sfxPackage = _RBP->sfxPackage;
          }
          if ( sfxPackage )
          {
            if ( sfxPackage->sounds->fireStopSoundPlayer.name )
            {
              _R15->m_data.stopSndPlayer = ((__int64 (__fastcall *)(GConfigStrings *))v21->GetSoundAliasIndex)(v21);
              sfxPackage = _RBP->sfxPackage;
            }
            if ( sfxPackage )
            {
              if ( sfxPackage->sounds->scanSound.name )
              {
                v22 = ((__int64 (__fastcall *)(GConfigStrings *))v21->GetLoopingSoundAliasIndex)(v21);
                _R15->m_data.scanLoopSnd = v22;
                if ( v22 >= 0x200u )
                {
                  LODWORD(v62) = v22;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3650, ASSERT_TYPE_ASSERT, "(unsigned)( turretData->scanLoopSnd ) < (unsigned)( 512 )", "turretData->scanLoopSnd doesn't index MAX_SOUNDALIASES\n\t%i not in [0, %i)", v62, 512) )
                    __debugbreak();
                }
              }
            }
          }
        }
      }
    }
    if ( !level.spawnVar.spawnVarsValid || !G_SpawnFloat(0x329u, (const char *)&queryFormat.fmt + 3, (float *)&_R15->m_data.arcmin + 1) )
      _R15->m_data.arcmin.v[1] = _RBP->rightArc;
    __asm
    {
      vmovss  xmm0, dword ptr [r15+20h]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vcmpltss xmm0, xmm0, cs:__real@80000000
      vxorps  xmm6, xmm6, xmm6
      vblendvps xmm0, xmm1, xmm6, xmm0
      vmovss  dword ptr [r15+20h], xmm0
    }
    if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x23Cu, (const char *)&queryFormat.fmt + 3, (float *)&_R15->m_data.arcmax + 1) )
    {
      __asm { vmovss  xmm0, dword ptr [r15+28h] }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0C48h]
        vmovss  dword ptr [r15+28h], xmm0
      }
    }
    __asm
    {
      vcomiss xmm0, xmm6
      vmovss  xmm1, dword ptr [r15+20h]
      vmovss  xmm2, cs:__real@43340000; max
      vmovss  dword ptr [r15+0D0h], xmm1
      vmovss  xmm0, dword ptr [r15+28h]
      vmovss  dword ptr [r15+0D4h], xmm0
      vsubss  xmm0, xmm0, xmm1; val
      vmovss  xmm1, cs:__real@42b40000; min
      vmovss  dword ptr [r15+0CCh], xmm0
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; X }
    *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
    __asm { vmovss  dword ptr [r15+0CCh], xmm0 }
    if ( !level.spawnVar.spawnVarsValid || !G_SpawnFloat(0x445u, (const char *)&queryFormat.fmt + 3, (float *)&_R15->m_data.arcmin) )
      _R15->m_data.arcmin.v[0] = _RBP->topArc;
    __asm
    {
      vmovss  xmm0, dword ptr [r15+1Ch]
      vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
      vcmpltss xmm1, xmm0, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm6, xmm1
      vmovss  dword ptr [r15+1Ch], xmm0
    }
    if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x8Fu, (const char *)&queryFormat.fmt + 3, (float *)&_R15->m_data.arcmax) )
    {
      __asm { vmovss  xmm0, dword ptr [r15+24h] }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0C54h]
        vmovss  dword ptr [r15+24h], xmm0
      }
    }
    __asm { vcomiss xmm0, xmm6 }
    if ( level.spawnVar.spawnVarsValid && (G_SpawnFloat(0x4B2u, (const char *)&queryFormat.fmt + 3, &out) || level.spawnVar.spawnVarsValid && G_SpawnFloat(0xFDu, (const char *)&queryFormat.fmt + 3, &out)) )
      __asm { vmovss  xmm1, [rsp+2A8h+out] }
    else
      __asm { vmovss  xmm1, dword ptr [rbp+0C84h] }
    __asm
    {
      vcmpltss xmm0, xmm1, xmm6
      vblendvps xmm1, xmm1, xmm6, xmm0
      vmulss  xmm0, xmm1, cs:__real@447a0000
      vaddss  xmm0, xmm0, cs:__real@3f000000
      vcvttss2si eax, xmm0
      vmovss  [rsp+2A8h+out], xmm1
    }
    _R15->m_data.convergenceTime[1] = _EAX;
    if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x2E8u, (const char *)&queryFormat.fmt + 3, &out) )
      __asm { vmovss  xmm1, [rsp+2A8h+out] }
    else
      __asm { vmovss  xmm1, dword ptr [rbp+0C80h] }
    __asm
    {
      vcmpltss xmm0, xmm1, xmm6
      vblendvps xmm1, xmm1, xmm6, xmm0
      vmulss  xmm0, xmm1, cs:__real@447a0000
      vmovss  [rsp+2A8h+out], xmm1
      vaddss  xmm1, xmm0, cs:__real@3f000000
      vcvttss2si eax, xmm1
    }
    _R15->m_data.convergenceTime[0] = _EAX;
    _R15->m_data.convergenceHeightPercent = 1.0;
    v52 = !level.spawnVar.spawnVarsValid;
    if ( level.spawnVar.spawnVarsValid && (v53 = G_SpawnFloat(0x262u, (const char *)&queryFormat.fmt + 3, v65), v52 = v53 == 0, v53) )
    {
      __asm { vmovss  xmm0, [rsp+2A8h+var_264] }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0C98h]
        vmovss  [rsp+2A8h+var_264], xmm0
      }
    }
    __asm { vcomiss xmm0, xmm6 }
    if ( v52 )
      __asm { vmovss  xmm1, cs:__real@7f7fffff }
    else
      __asm { vmulss  xmm1, xmm0, xmm0 }
    __asm { vmovss  dword ptr [r15+78h], xmm1 }
    if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x2EBu, "1", &_R15->m_data.playerSpread) )
    {
      __asm { vmovss  xmm0, dword ptr [r15+48h] }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0C6Ch]
        vmovss  dword ptr [r15+48h], xmm0
      }
    }
    __asm
    {
      vcomiss xmm0, xmm6
      vmovaps xmm6, [rsp+2A8h+var_48]
    }
    _R15->m_data.dropPitch = -90.0;
    if ( !self->health )
      self->health = 100;
    _R15->m_data.state = IDLE;
    _R15->m_data.prevTargetIndex = -1;
    _R15->m_data.modeChangeTime = 0;
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
      self->s.lerp.u.anonymous.data[0] = LODWORD(_R15->m_data.dropPitch);
    *(_QWORD *)&_R15->m_data.heatPenaltyEndTime = 0i64;
    _R15->m_data.heatLevel = 0.0;
    *(_QWORD *)&_R15->m_data.autoRotationStopDelay = 1000i64;
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
      v59 = number;
      v60 = number - 1;
      if ( v60 >= 0x800 )
      {
        LODWORD(v63) = 2048;
        LODWORD(v62) = v60;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v62, v63) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v61 = v59 - 1;
      if ( g_entities[v61].r.isInUse != g_entityIsInUse[v61] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v61] )
      {
        LODWORD(v63) = self->r.ownerNum.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v63) )
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
  _RAX = GScr_Main_GetWeaponForName(&result, v2, out);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0B8h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
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
  gentity_s *v7; 
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
  {
    __asm { vmovss  xmm1, cs:__real@42f00000; radius }
    G_DebugSphere(&self->r.currentOrigin, *(float *)&_XMM1, &colorGreen, 0, 0);
  }
  Turret = GTurret::GetTurret(&self->turretHandle);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  self->nextthink = level.time + level.frameDuration;
  self->s.lerp.u.anonymous.data[2] = 0;
  if ( self->tagInfo )
    G_GeneralLink(self);
  if ( EntHandle::isDefined(&self->r.ownerNum) )
    v7 = EntHandle::ent(&self->r.ownerNum);
  else
    v7 = g_entities + 2047;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF && BG_TurretAnim_IsAnyAssigned(WeaponForEntity) )
    G_Turret_SetupAnimtreeForGDTAnims(self, WeaponForEntity);
  G_Turret_SetDObjTransferFlag(self);
  if ( !v7->client )
  {
    G_Turret_UpdateBarrelRotation(self, v7);
    G_Turret_UpdateHeat(self, v7);
    G_Turret_UpdateSound(self);
    p_lerp = &self->s.lerp;
    if ( Turret->m_data.fireTimestamp == level.time )
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&p_lerp->eFlags, ACTIVE, 0xAu);
    else
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&p_lerp->eFlags, ACTIVE, 0xAu);
    if ( (Turret->m_data.flags & 0x8004) == 4 )
      G_Turret_Think_Auto_NonAI(self);
    else
      Turret->ThinkVirtual(Turret, self, v7);
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
  char v4; 

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
  _RAX = GTurret::GetTurret(&self->turretHandle);
  __asm
  {
    vmovss  xmm0, cs:__real@c2b40000
    vucomiss xmm0, dword ptr [rax+2Ch]
  }
  if ( v4 )
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
  const WeaponDef *v7; 
  char v9; 
  gclient_s *client; 
  int lastAutoRotationRequestTime; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1181, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1182, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  v7 = BG_WeaponDef(WeaponForEntity, 0);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1187, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( v7->turretBarrelSpinEnabled )
  {
    _RDI = GTurret::GetTurret(&self->turretHandle);
    v9 = *((_BYTE *)&self->s.lerp.u.infoVolumeGrapple + 20) & 1;
    if ( (_RDI->m_data.flags & 0x2000) != 0 )
      goto LABEL_12;
    client = owner->client;
    if ( !client )
    {
      self->s.lerp.u.anonymous.data[5] &= ~1u;
      if ( G_Turret_IsFiring(self) || (_RDI->m_data.flags & 0x1010) != 0 )
      {
        self->s.lerp.u.anonymous.data[5] |= 1u;
        _RDI->m_data.lastAutoRotationRequestTime = level.time;
      }
      else
      {
        lastAutoRotationRequestTime = _RDI->m_data.lastAutoRotationRequestTime;
        if ( lastAutoRotationRequestTime > 0 && _RDI->m_data.autoRotationStopDelay + lastAutoRotationRequestTime >= level.time )
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
    if ( v9 != (*((_BYTE *)&self->s.lerp.u.infoVolumeGrapple + 20) & 1) )
    {
      self->s.lerp.u.anonymous.data[3] = level.time;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+0C0h]
        vmulss  xmm1, xmm0, cs:__real@477fff00
        vcvttss2si eax, xmm1
      }
      self->s.lerp.u.anonymous.data[4] = _EAX;
    }
    *(double *)&_XMM0 = BG_Turret_ComputeBarrelSpinRate(v7, (const LerpEntityStateTurret *)&self->s.lerp.u, level.time);
    __asm { vmovss  dword ptr [rdi+0C0h], xmm0 }
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
  char v9; 
  char v10; 
  int heatPenaltyEndTime; 
  int v22; 
  unsigned int v23; 
  int v24; 
  float outAccumulationPerShot; 
  float outDissipationPerSecond; 
  float v38; 
  float v39; 

  __asm { vmovaps [rsp+68h+var_38], xmm6 }
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1243, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1244, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  _RBP = BG_WeaponDef(WeaponForEntity, 0);
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1249, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  BG_GetHeatProperties(WeaponForEntity, 0, &outAccumulationPerShot, &outDissipationPerSecond);
  __asm
  {
    vmovss  xmm0, [rsp+68h+outAccumulationPerShot]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
  }
  if ( !(v9 | v10) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+68h+outDissipationPerSecond]
      vcomiss xmm0, xmm6
    }
    if ( !(v9 | v10) )
    {
      _RAX = GTurret::GetTurret(&self->turretHandle);
      _RBX = _RAX;
      if ( (_RAX->m_data.flags & 0x10000000) != 0 )
      {
        *(_QWORD *)&_RAX->m_data.heatLevel = 0i64;
        self->s.lerp.u.anonymous.data[5] &= ~2u;
        __asm { vxorps  xmm1, xmm1, xmm1; turretHeatLevel }
        BG_GameInterface_TurretUpdateHeat((LerpEntityStateTurret *)&self->s.lerp.u, *(float *)&_XMM1);
        __asm { vmovaps xmm6, [rsp+68h+var_38] }
        return;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3f733333
        vcomiss xmm0, dword ptr [rax+0B8h]
      }
      if ( (_RAX->m_data.flags & 0x10000000) != 0 )
      {
        heatPenaltyEndTime = _RAX->m_data.heatPenaltyEndTime;
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0DCCh]
          vmulss  xmm1, xmm0, cs:__real@c47a0000
          vcvttss2si eax, xmm1
        }
        heatPenaltyEndTime = level.time - _EAX;
        _RBX->m_data.heatPenaltyEndTime = level.time - _EAX;
      }
      v22 = self->s.lerp.u.anonymous.data[5];
      v23 = v22 & 0xFFFFFFFD;
      v24 = v22 | 2;
      if ( heatPenaltyEndTime >= level.time )
        v23 = v24;
      self->s.lerp.u.anonymous.data[5] = v23;
      BG_GetHeatProperties(WeaponForEntity, 0, &v39, &v38);
      G_Level_GetFrameDuration();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3a83126f
        vmulss  xmm2, xmm1, [rsp+68h+arg_10]
        vmovss  xmm0, dword ptr [rbx+0B8h]
        vmaxss  xmm3, xmm2, xmm6
        vsubss  xmm1, xmm0, xmm3
        vmaxss  xmm1, xmm1, xmm6
        vminss  xmm0, xmm1, cs:__real@3f800000
        vmovss  dword ptr [rbx+0B8h], xmm0
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_38] }
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
  unsigned int v9; 
  GTurretState v28; 

  _RBX = self;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2181, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&_RBX->turretHandle);
  if ( !bShoot )
  {
    v28 = IDLE;
LABEL_15:
    G_Turret_SetState(_RBX, v28);
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
  v9 = Turret->m_data.targetTime + 250;
  if ( level.time >= (int)v9 )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+58h]
    vsubss  xmm1, xmm0, dword ptr [rsi]
    vmovss  xmm4, cs:__real@3b360b61
    vmulss  xmm3, xmm1, xmm4
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vxorps  xmm5, xmm5, xmm5
    vroundss xmm2, xmm5, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@40a00000
  }
  if ( level.time < v9 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+5Ch]
      vsubss  xmm1, xmm0, dword ptr [rsi+4]
      vmulss  xmm4, xmm1, xmm4
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vroundss xmm3, xmm5, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm1, cs:__real@40a00000
    }
    if ( level.time < v9 )
    {
LABEL_11:
      G_Turret_SetState(_RBX, SEARCHING);
LABEL_12:
      if ( v7 > 0 )
        return;
      v28 = INITIALIZING;
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
  GTurret *v4; 
  bool v5; 
  gentity_s *v6; 
  __int16 v7; 
  unsigned int v8; 
  gentity_s *v9; 
  bitarray_base<bitarray<224> > *p_clientMask; 
  __int16 v11; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1340, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  _RAX = GTurret::GetTurret(&self->turretHandle);
  v4 = _RAX;
  self->s.loopSound = 0;
  if ( _RAX->m_data.fireSndDelay <= 0 )
  {
    if ( (_RAX->m_data.flags & 8) != 0 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [rax+0A8h]
      }
    }
  }
  else
  {
    v5 = EntHandle::isDefined(&self->r.ownerNum) && EntHandle::ent(&self->r.ownerNum)->client;
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    v4->m_data.fireSndDelay -= level.frameDuration;
    if ( v4->m_data.fireSndDelay <= 0 && v4->m_data.stopSnd )
    {
      self->s.loopSound = 0;
      if ( v4->m_data.stopSnd )
      {
        v6 = G_Utils_SpawnEventEntity(&self->r.currentOrigin, 3);
        v6->s.eventParm = v4->m_data.stopSnd;
        v6->s.otherEntityNum = self->s.number;
        v6->s.index.brushModel = self->s.index.brushModel;
        *(_QWORD *)v6->clientMask.array = 0i64;
        *(_QWORD *)&v6->clientMask.array[2] = 0i64;
        *(_QWORD *)&v6->clientMask.array[4] = 0i64;
        v6->clientMask.array[6] = 0;
        if ( v5 )
        {
          if ( v4->m_data.stopSndPlayer )
          {
            v7 = EntHandle::entnum(&self->r.ownerNum);
            v8 = v7;
            if ( (unsigned int)v7 >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v7, 224) )
              __debugbreak();
            v6->clientMask.array[(unsigned __int64)v8 >> 5] |= 0x80000000 >> (v8 & 0x1F);
            v9 = G_Utils_SpawnEventEntity(&self->r.currentOrigin, 3);
            v9->s.eventParm = v4->m_data.stopSndPlayer;
            p_clientMask = &v9->clientMask;
            v9->s.otherEntityNum = self->s.number;
            v9->s.index.brushModel = self->s.index.brushModel;
            v9->clientMask.array[0] = -1;
            *(_QWORD *)&v9->clientMask.array[1] = -1i64;
            *(_QWORD *)&v9->clientMask.array[3] = -1i64;
            *(_QWORD *)&v9->clientMask.array[5] = -1i64;
            v11 = EntHandle::entnum(&self->r.ownerNum);
            bitarray_base<bitarray<224>>::resetBit(p_clientMask, v11);
          }
        }
      }
    }
    else
    {
      self->s.loopSound = v4->m_data.fireLoopSnd;
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
  int stance; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmmword ptr [r11-28h], xmm8
  }
  _RBX = self;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3357, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( _RBX->s.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3358, ASSERT_TYPE_ASSERT, "( self->s.eType == ET_TURRET )", (const char *)&queryFormat, "self->s.eType == ET_TURRET") )
    __debugbreak();
  _RDI = GTurret::GetTurret(&_RBX->turretHandle);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3361, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3364, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !owner->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3365, ASSERT_TYPE_ASSERT, "( owner->client )", (const char *)&queryFormat, "owner->client") )
    __debugbreak();
  if ( owner->s.number >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3366, ASSERT_TYPE_ASSERT, "( owner->s.number < level.maxclients )", (const char *)&queryFormat, "owner->s.number < level.maxclients") )
    __debugbreak();
  if ( !G_Turret_CanUse(_RBX, owner) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 3367, ASSERT_TYPE_ASSERT, "( G_Turret_CanUse( self, owner ) )", (const char *)&queryFormat, "G_Turret_CanUse( self, owner )") )
    __debugbreak();
  _R14 = owner->client;
  owner->active = 1;
  _RBX->active = 1;
  EntHandle::setEnt(&_RBX->r.ownerNum, owner);
  _RBX->s.lerp.u.anonymous.data[6] = owner->s.number;
  _R14->ps.viewlocked = PLAYERVIEWLOCK_FULL;
  _R14->ps.viewlocked_entNum = _RBX->s.number;
  _RDI->UseVirtual(_RDI, _RBX, owner);
  _RDI->m_data.flags |= 1u;
  _RDI->m_data.startUseTime = level.time;
  _RDI->m_data.userOrigin.v[0] = owner->r.currentOrigin.v[0];
  _RDI->m_data.userOrigin.v[1] = owner->r.currentOrigin.v[1];
  _RDI->m_data.userOrigin.v[2] = owner->r.currentOrigin.v[2];
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->ps.pm_flags, ACTIVE, 0) )
    _RDI->m_data.prevStance = 2;
  else
    _RDI->m_data.prevStance = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->ps.pm_flags, ACTIVE, 1u);
  stance = _RDI->m_data.stance;
  p_eFlags = &_R14->ps.eFlags;
  if ( stance == 2 )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(p_eFlags, ACTIVE, 5u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_R14->ps.eFlags, ACTIVE, 6u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 5u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 6u);
  }
  else if ( stance == 1 )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(p_eFlags, ACTIVE, 6u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_R14->ps.eFlags, ACTIVE, 5u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 6u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 5u);
  }
  else
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(p_eFlags, ACTIVE, 5u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_R14->ps.eFlags, ACTIVE, 6u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 5u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 6u);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14+1D8h]
    vsubss  xmm1, xmm0, dword ptr [rbx+13Ch]
    vmulss  xmm3, xmm1, cs:__real@3b360b61
    vmovss  xmm6, cs:__real@3f000000
    vaddss  xmm1, xmm3, xmm6
    vxorps  xmm8, xmm8, xmm8
    vroundss xmm2, xmm8, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, cs:__real@43b40000; val
    vmovss  dword ptr [rbx+58h], xmm0
    vmovss  xmm2, dword ptr [rdi+24h]; max
    vmovss  xmm1, dword ptr [rdi+1Ch]; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [rbx+58h], xmm0 }
  if ( G_IsTurretKeepingOrientationOnExit(&_RBX->s) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+5Ch]
      vaddss  xmm0, xmm0, dword ptr [rbx+140h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r14+1DCh]
      vsubss  xmm1, xmm0, dword ptr [rbx+140h]
      vmulss  xmm4, xmm1, cs:__real@3b360b61
      vaddss  xmm2, xmm4, xmm6
      vroundss xmm3, xmm8, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm0, xmm0, cs:__real@43b40000; val
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+5Ch], xmm0
    vmovss  xmm2, dword ptr [rdi+28h]; max
    vmovss  xmm1, dword ptr [rdi+20h]; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [rbx+5Ch], xmm0 }
  _RBX->s.lerp.u.anonymous.data[2] = 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+24h]
    vsubss  xmm1, xmm0, dword ptr [rdi+1Ch]
    vmulss  xmm2, xmm1, xmm6
    vmovss  dword ptr [r14+200h], xmm2
    vmovss  xmm0, dword ptr [rbx+13Ch]
    vaddss  xmm1, xmm0, dword ptr [rdi+24h]
    vmovss  dword ptr [r14+1F8h], xmm1
    vsubss  xmm0, xmm1, dword ptr [r14+200h]; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [r14+1F8h], xmm0
    vmovss  xmm1, dword ptr [rdi+28h]
    vsubss  xmm0, xmm1, dword ptr [rdi+20h]
    vmulss  xmm2, xmm0, xmm6
    vmovss  dword ptr [r14+204h], xmm2
    vmovss  xmm1, dword ptr [rbx+140h]
    vaddss  xmm0, xmm1, dword ptr [rdi+28h]
    vmovss  dword ptr [r14+1FCh], xmm0
    vsubss  xmm0, xmm0, dword ptr [r14+204h]; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [r14+1FCh], xmm0
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm8, [rsp+58h+var_28]
  }
  GScr_Notify(_RBX, scr_const.turretownerchange, 0);
}

/*
==============
GTurret::GetEnemyHeightOffset
==============
*/
void GTurret::GetEnemyHeightOffset(GTurret *this, const gentity_s *enemy, vec3_t *outResultOffset)
{
  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  _RBX = outResultOffset;
  _RSI = this;
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 449, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+8Ch]
    vmovss  xmm6, cs:__real@3f800000
    vcomiss xmm1, xmm6
    vxorps  xmm4, xmm4, xmm4
    vxorps  xmm5, xmm5, xmm5
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [rbx], xmm1
    vmovss  dword ptr [rbx+4], xmm5
    vmovss  dword ptr [rbx+8], xmm4
    vmovaps xmm6, [rsp+88h+var_28]
  }
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
  vec2_t desiredAngles; 

  _RSI = this;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1894, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( bManned )
    __asm { vxorps  xmm1, xmm1, xmm1 }
  else
    __asm { vmovss  xmm1, dword ptr [rsi+2Ch] }
  __asm
  {
    vmovss  dword ptr [rsp+48h+desiredAngles], xmm1
    vmovss  dword ptr [rsp+48h+desiredAngles+4], xmm0
  }
  G_Turret_SetState(self, IDLE);
  return GTurret::UpdateTargetAngles(_RSI, self, &desiredAngles, bManned);
}

/*
==============
GTurret::SetTargetEnt
==============
*/
void GTurret::SetTargetEnt(GTurret *this, const gentity_s *ent, const vec3_t *entOffset)
{
  const gentity_s *v6; 
  int time; 

  _RSI = entOffset;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 2273, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( EntHandle::isDefined(&this->m_data.target) )
    v6 = EntHandle::ent(&this->m_data.target);
  else
    v6 = NULL;
  if ( v6 != ent )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm3, xmm0, dword ptr [rbx+50h]
    vmovss  xmm1, dword ptr [rsi+4]
    vsubss  xmm2, xmm1, dword ptr [rbx+54h]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm4, xmm0, dword ptr [rbx+58h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@3a83126f
  }
  if ( v6 > ent )
  {
LABEL_9:
    EntHandle::setEnt(&this->m_data.target, ent);
    time = level.time;
    this->m_data.flags &= ~0x40u;
    this->m_data.targetTime = time;
    this->m_data.targetOffset.v[0] = _RSI->v[0];
    this->m_data.targetOffset.v[1] = _RSI->v[1];
    this->m_data.targetOffset.v[2] = _RSI->v[2];
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
bool GTurret::Think_ManualInternal(GTurret *this, gentity_s *self, gentity_s **outTargetEnt)
{
  _RDI = this;
  if ( EntHandle::isDefined(&this->m_data.manualTarget) )
    _RAX = EntHandle::ent(&_RDI->m_data.manualTarget);
  else
    _RAX = NULL;
  if ( outTargetEnt )
    *outTargetEnt = _RAX;
  if ( _RAX )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+130h]
      vmovss  xmm2, dword ptr [rax+134h]
      vaddss  xmm1, xmm0, dword ptr [r9]
      vaddss  xmm0, xmm2, dword ptr [r9+4]
      vsubss  xmm5, xmm1, dword ptr [rbp+130h]
      vmovss  xmm1, dword ptr [rax+138h]
      vaddss  xmm2, xmm1, dword ptr [r9+8]
      vsubss  xmm4, xmm2, dword ptr [rbp+138h]
      vsubss  xmm3, xmm0, dword ptr [rbp+134h]
      vmulss  xmm3, xmm3, xmm3
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, dword ptr [rdi+78h]
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
  char v20; 
  char v21; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const dvar_t *v25; 
  unsigned int v47; 
  bool v55; 
  bool v56; 
  bool v58; 
  bool v59; 
  bool v68; 
  bool v69; 
  bool v70; 
  bool v71; 
  EntHandle *v80; 
  int v95; 
  char v103; 
  __int64 v105; 
  __int64 v106; 
  bool v107; 
  int v109; 
  gentity_s *ent; 
  EntHandle *v111; 
  GTurret *v112; 
  vec2_t outAngularVelocity; 

  ent = self;
  v112 = this;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1724, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  p_m_data = &Turret->m_data;
  v111 = (EntHandle *)&Turret->m_data;
  if ( Turret == (GTurret *)-12i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1728, ASSERT_TYPE_ASSERT, "(turretData)", (const char *)&queryFormat, "turretData") )
    __debugbreak();
  G_Turret_ScanStop(p_m_data);
  if ( (Turret->m_data.flags & 0x4000000) != 0 )
  {
    Turret->m_data.targetTime = level.time;
    return 0;
  }
  v20 = 1;
  __asm { vmovaps [rsp+158h+var_48], xmm6 }
  v21 = 1;
  __asm
  {
    vmovaps [rsp+158h+var_58], xmm7
    vmovaps [rsp+158h+var_68], xmm8
    vmovaps [rsp+158h+var_78], xmm9
    vmovaps [rsp+158h+var_88], xmm10
    vmovaps [rsp+158h+var_98], xmm11
    vmovaps [rsp+158h+var_A8], xmm12
    vmovaps [rsp+158h+var_B8], xmm13
    vmovaps [rsp+158h+var_C8], xmm14
    vmovaps [rsp+158h+var_D8], xmm15
  }
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  _RBX = BG_WeaponDef(WeaponForEntity, 0);
  v107 = Turret->UpdateTargetAngles_GetStartingPitch(Turret, self, (float *)&v109);
  G_Turret_CalculateConvergenceAngularVelocity(self, desiredAngles, &outAngularVelocity);
  v25 = DCONST_DVARMPBOOL_turret_enableLegacyManualTurretTracking;
  if ( !DCONST_DVARMPBOOL_turret_enableLegacyManualTurretTracking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turret_enableLegacyManualTurretTracking") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( v25->current.enabled )
    goto LABEL_18;
  if ( !bManned )
  {
LABEL_19:
    if ( (p_m_data->flags & 0x2000000) == 0 )
    {
      __asm
      {
        vmovss  xmm3, cs:__real@43480000
        vmovss  dword ptr [rsp+158h+outAngularVelocity+4], xmm3
      }
      goto LABEL_22;
    }
LABEL_21:
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0C78h]
      vminss  xmm1, xmm0, dword ptr [rsp+158h+outAngularVelocity]
      vmovss  xmm2, dword ptr [rbx+0C7Ch]
      vminss  xmm0, xmm2, dword ptr [rsp+158h+outAngularVelocity+4]
      vmaxss  xmm3, xmm1, dword ptr [rbx+0C70h]
      vmaxss  xmm1, xmm0, dword ptr [rbx+0C74h]
      vmovss  dword ptr [rsp+158h+outAngularVelocity+4], xmm1
    }
    goto LABEL_22;
  }
  if ( v107 || level.time <= p_m_data->startUseTime + 250 || p_m_data->state )
  {
LABEL_18:
    if ( bManned )
      goto LABEL_21;
    goto LABEL_19;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0C94h]
    vmovss  xmm3, dword ptr [rbx+0C90h]
    vmovss  dword ptr [rsp+158h+outAngularVelocity+4], xmm0
  }
LABEL_22:
  __asm
  {
    vmovss  xmm11, cs:__real@43b40000
    vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm15, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm10, cs:__real@3a83126f
    vmovss  xmm13, cs:__real@3b360b61
    vmovss  xmm14, cs:__real@3f000000
  }
  _ECX = 3145728;
  _RDI = &outAngularVelocity;
  _EAX = this->m_data.flags & 0x300000;
  __asm
  {
    vmovd   xmm1, ecx
    vmovd   xmm0, eax
  }
  _R14 = (char *)desiredAngles - (char *)&outAngularVelocity;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm11, xmm2
  }
  v47 = 0;
  _RSI = (char *)&self->s.lerp.u - (char *)&outAngularVelocity;
  __asm
  {
    vmovss  dword ptr [rsp+158h+outAngularVelocity], xmm0
    vxorps  xmm12, xmm12, xmm12
    vxorps  xmm9, xmm9, xmm9
  }
  do
  {
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    }
    if ( v47 >= 2 )
    {
      LODWORD(v106) = 2;
      LODWORD(v105) = v47;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v105, v106) )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rdi]
      vmulss  xmm6, xmm0, xmm10
      vmovss  dword ptr [rdi], xmm6
    }
    v55 = v47 <= 2;
    if ( v47 >= 2 )
    {
      LODWORD(v106) = 2;
      LODWORD(v105) = v47;
      v56 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v105, v106);
      v55 = !v56;
      if ( v56 )
        __debugbreak();
    }
    __asm { vcomiss xmm6, xmm9 }
    if ( v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.cpp", 1779, ASSERT_TYPE_ASSERT, "( fSpeed[i] > 0 )", (const char *)&queryFormat, "fSpeed[i] > 0") )
      __debugbreak();
    if ( v47 >= 3 )
    {
      LODWORD(v106) = 3;
      LODWORD(v105) = v47;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v105, v106) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [rsi+rdi] }
    v58 = v47 <= 2;
    if ( v47 >= 2 )
    {
      LODWORD(v106) = 2;
      LODWORD(v105) = v47;
      v59 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v105, v106);
      v58 = !v59;
      if ( v59 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r14+rdi]
      vsubss  xmm1, xmm0, xmm6
      vmulss  xmm4, xmm1, xmm13
      vaddss  xmm2, xmm4, xmm14
      vroundss xmm3, xmm12, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm7, xmm0, xmm11
      vandps  xmm1, xmm7, xmm15
      vcomiss xmm1, cs:__real@40a00000
    }
    if ( !v58 )
      v21 = 0;
    v68 = v47 <= 2;
    if ( v47 >= 2 )
    {
      LODWORD(v106) = 2;
      LODWORD(v105) = v47;
      v69 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v105, v106);
      v68 = !v69;
      if ( v69 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rdi]
      vcomiss xmm7, xmm6
    }
    if ( v68 )
    {
      v70 = v47 < 2;
      if ( v47 >= 2 )
      {
        LODWORD(v106) = 2;
        LODWORD(v105) = v47;
        v71 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v105, v106);
        v70 = 0;
        if ( v71 )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm6, xmm8
        vcomiss xmm7, xmm0
      }
      if ( v70 )
      {
        v20 = 0;
        if ( v47 >= 2 )
        {
          LODWORD(v106) = 2;
          LODWORD(v105) = v47;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v105, v106) )
          {
            __debugbreak();
            __asm { vmovss  xmm6, dword ptr [rdi] }
          }
        }
        __asm { vxorps  xmm7, xmm6, xmm8 }
      }
    }
    else
    {
      v20 = 0;
      __asm { vmovaps xmm7, xmm6 }
      if ( v47 >= 2 )
      {
        LODWORD(v106) = 2;
        LODWORD(v105) = v47;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v105, v106) )
        {
          __debugbreak();
          __asm { vmovaps xmm7, xmm6 }
        }
      }
    }
    if ( v47 >= 3 )
    {
      LODWORD(v106) = 3;
      LODWORD(v105) = v47;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v105, v106) )
        __debugbreak();
    }
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [rsi+rdi]
      vmovss  dword ptr [rsi+rdi], xmm0
    }
    _RDI = (vec2_t *)((char *)_RDI + 4);
    ++v47;
  }
  while ( (int)v47 < 2 );
  __asm
  {
    vmovaps xmm15, [rsp+158h+var_D8]
    vmovaps xmm10, [rsp+158h+var_88]
    vmovaps xmm9, [rsp+158h+var_78]
    vmovaps xmm7, [rsp+158h+var_58]
    vmovaps xmm6, [rsp+158h+var_48]
  }
  _RBP = ent;
  v80 = v111;
  _R13 = (__int64)v112;
  if ( v107 )
  {
    __asm { vmovss  xmm5, [rsp+158h+var_108] }
    ent->s.lerp.u.anonymous.data[2] = ent->s.lerp.u.anonymous.data[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+58h]
      vsubss  xmm0, xmm0, xmm5
      vmulss  xmm4, xmm0, xmm13
      vaddss  xmm2, xmm4, xmm14
      vroundss xmm3, xmm12, xmm2, 1
      vmovss  xmm2, dword ptr [rsp+158h+outAngularVelocity]
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, xmm11
      vcomiss xmm0, xmm2
      vmovaps xmm0, xmm2
    }
    v20 = 0;
    __asm
    {
      vaddss  xmm1, xmm0, xmm5
      vmovss  dword ptr [rbp+58h], xmm1
      vmovss  xmm0, dword ptr [rbp+60h]
      vsubss  xmm1, xmm0, xmm1
      vmovss  dword ptr [rbp+60h], xmm1
    }
  }
  v95 = *(_DWORD *)(_R13 + 16);
  __asm
  {
    vmovaps xmm14, [rsp+158h+var_C8]
    vmovaps xmm13, [rsp+158h+var_B8]
    vmovaps xmm12, [rsp+158h+var_A8]
    vmovaps xmm11, [rsp+158h+var_98]
    vmovaps xmm8, [rsp+158h+var_68]
  }
  if ( (v95 & 0x200000) == 0 )
    goto LABEL_68;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+58h]
    vmovss  xmm1, dword ptr [r13+0B4h]
  }
  if ( (v95 & 0x400000) != 0 )
  {
    __asm { vcomiss xmm0, xmm1 }
    if ( (v95 & 0x400000) == 0 )
      goto LABEL_67;
LABEL_73:
    __asm
    {
      vsubss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rbp+60h], xmm0
    }
    goto LABEL_68;
  }
  __asm { vcomiss xmm0, xmm1 }
  if ( !(((v95 & 0x400000) != 0) | v103) )
    goto LABEL_73;
LABEL_67:
  *(_DWORD *)(_R13 + 16) = v95 & 0xFFEFFFFF;
LABEL_68:
  if ( v21 )
  {
    if ( EntHandle::isDefined(v80 + 16) )
      GScr_Notify(_RBP, scr_const.turret_on_target, 0);
  }
  return v20;
}

