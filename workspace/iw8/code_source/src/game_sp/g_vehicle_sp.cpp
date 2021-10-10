/*
==============
G_VehicleSP_FinishAnimatedFrameExtras
==============
*/

void __fastcall G_VehicleSP_FinishAnimatedFrameExtras(Vehicle *veh, bool waitNodeHit, float prevSpeed)
{
  ?G_VehicleSP_FinishAnimatedFrameExtras@@YAXPEAUVehicle@@_NM@Z(veh, waitNodeHit, prevSpeed);
}

/*
==============
GVehiclesSP::GetVehicleViewlockAngles
==============
*/

void __fastcall GVehiclesSP::GetVehicleViewlockAngles(GVehiclesSP *this, const gentity_s *playerEnt, const VehicleDef *vehDef, vec3_t *outAngles)
{
  ?GetVehicleViewlockAngles@GVehiclesSP@@UEAAXPEBUgentity_s@@PEBUVehicleDef@@AEATvec3_t@@@Z(this, playerEnt, vehDef, outAngles);
}

/*
==============
G_VehicleSP_ReadSaveGame
==============
*/

void __fastcall G_VehicleSP_ReadSaveGame(SaveGame *save)
{
  ?G_VehicleSP_ReadSaveGame@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
GVehiclesSP::GetVehicleBoatRockingScale
==============
*/

double __fastcall GVehiclesSP::GetVehicleBoatRockingScale(GVehiclesSP *this)
{
  double result; 

  *(float *)&result = ?GetVehicleBoatRockingScale@GVehiclesSP@@UEAAMXZ(this);
  return result;
}

/*
==============
GVehiclesSP::FinishVehicleDamage
==============
*/

void __fastcall GVehiclesSP::FinishVehicleDamage(GVehiclesSP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset)
{
  ?FinishVehicleDamage@GVehiclesSP@@UEAAXPEAUgentity_s@@PEBU2@0AEBTvec3_t@@2HHHAEBUWeapon@@_NW4hitLocation_t@@IW4scr_string_t@@H@Z(this, targ, inflictor, attacker, dir, point, damage, dFlags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset);
}

/*
==============
GVehiclesSP::SetVehicleType
==============
*/

void __fastcall GVehiclesSP::SetVehicleType(GVehiclesSP *this, gentity_s *ent, const VehicleDef *vehDef)
{
  ?SetVehicleType@GVehiclesSP@@UEAAXPEAUgentity_s@@PEBUVehicleDef@@@Z(this, ent, vehDef);
}

/*
==============
GVehiclesSP::UpdateHelicopterAIMove
==============
*/

void __fastcall GVehiclesSP::UpdateHelicopterAIMove(GVehiclesSP *this, Vehicle *veh)
{
  ?UpdateHelicopterAIMove@GVehiclesSP@@UEAAXPEAUVehicle@@@Z(this, veh);
}

/*
==============
G_VehicleSP_UpdateAnimatedSubState
==============
*/

int __fastcall G_VehicleSP_UpdateAnimatedSubState(Vehicle *veh, VehiclePathPos *nextVpp, bool *waitNodeHit)
{
  return ?G_VehicleSP_UpdateAnimatedSubState@@YAHPEAUVehicle@@PEAUVehiclePathPos@@PEA_N@Z(veh, nextVpp, waitNodeHit);
}

/*
==============
GVehiclesSP::SetIgnoreDObjTransfer
==============
*/

void __fastcall GVehiclesSP::SetIgnoreDObjTransfer(GVehiclesSP *this, DObj *obj, bool hasPlayerState)
{
  ?SetIgnoreDObjTransfer@GVehiclesSP@@UEAAXPEAUDObj@@_N@Z(this, obj, hasPlayerState);
}

/*
==============
GVehiclesSP::UpdateSpaceshipAnimscriptedMove
==============
*/

bool __fastcall GVehiclesSP::UpdateSpaceshipAnimscriptedMove(GVehiclesSP *this, Vehicle *veh)
{
  return ?UpdateSpaceshipAnimscriptedMove@GVehiclesSP@@UEBA_NPEAUVehicle@@@Z(this, veh);
}

/*
==============
GVehiclesSP::GetVehicleTankPlayerThrottle
==============
*/

double __fastcall GVehiclesSP::GetVehicleTankPlayerThrottle(GVehiclesSP *this, const usercmd_s *cmd)
{
  double result; 

  *(float *)&result = ?GetVehicleTankPlayerThrottle@GVehiclesSP@@UEAAMPEBUusercmd_s@@@Z(this, cmd);
  return result;
}

/*
==============
G_VehicleSP_Think
==============
*/

void __fastcall G_VehicleSP_Think(gentity_s *pSelf)
{
  ?G_VehicleSP_Think@@YAXPEAUgentity_s@@@Z(pSelf);
}

/*
==============
GVehiclesSP::GetVehicleHeliPlayerMove
==============
*/

void __fastcall GVehiclesSP::GetVehicleHeliPlayerMove(GVehiclesSP *this, const Vehicle *veh, gentity_s *player, char *outMove)
{
  ?GetVehicleHeliPlayerMove@GVehiclesSP@@UEAAXPEBUVehicle@@PEAUgentity_s@@QEAD@Z(this, veh, player, outMove);
}

/*
==============
GVehiclesSP::UpdatePathConstrainedMove
==============
*/

void __fastcall GVehiclesSP::UpdatePathConstrainedMove(GVehiclesSP *this, Vehicle *veh)
{
  ?UpdatePathConstrainedMove@GVehiclesSP@@UEAAXPEAUVehicle@@@Z(this, veh);
}

/*
==============
G_VehicleSP_CancelAIMove
==============
*/

void __fastcall G_VehicleSP_CancelAIMove(gentity_s *ent)
{
  ?G_VehicleSP_CancelAIMove@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GVehiclesSP::UpdatePathFollowMove
==============
*/

void __fastcall GVehiclesSP::UpdatePathFollowMove(GVehiclesSP *this, Vehicle *veh)
{
  ?UpdatePathFollowMove@GVehiclesSP@@UEAAXPEAUVehicle@@@Z(this, veh);
}

/*
==============
GVehiclesSP::SetPlayerVehicleType
==============
*/

void __fastcall GVehiclesSP::SetPlayerVehicleType(GVehiclesSP *this, playerState_s *ps, VehicleType vehType)
{
  ?SetPlayerVehicleType@GVehiclesSP@@UEAAXPEAUplayerState_s@@W4VehicleType@@@Z(this, ps, vehType);
}

/*
==============
GVehiclesSP::UpdateUGVPlayerMove
==============
*/

void __fastcall GVehiclesSP::UpdateUGVPlayerMove(GVehiclesSP *this, Vehicle *veh)
{
  ?UpdateUGVPlayerMove@GVehiclesSP@@UEAAXPEAUVehicle@@@Z(this, veh);
}

/*
==============
GVehiclesSP::GetVehicleSubPlayerMove
==============
*/

void __fastcall GVehiclesSP::GetVehicleSubPlayerMove(GVehiclesSP *this, const usercmd_s *cmd, char *move)
{
  ?GetVehicleSubPlayerMove@GVehiclesSP@@UEAAXPEBUusercmd_s@@QEAD@Z(this, cmd, move);
}

/*
==============
G_VehicleSP_OrientTo_Init
==============
*/

void __fastcall G_VehicleSP_OrientTo_Init(Vehicle *veh, const vec3_t *tgtOrigin, const vec3_t *tgtAngles, float tgtSpeed, float tgtAngleSpeed)
{
  ?G_VehicleSP_OrientTo_Init@@YAXPEAUVehicle@@AEBTvec3_t@@1MM@Z(veh, tgtOrigin, tgtAngles, tgtSpeed, tgtAngleSpeed);
}

/*
==============
GVehiclesSP::SetVehiclePosition
==============
*/

void __fastcall GVehiclesSP::SetVehiclePosition(GVehiclesSP *this, gentity_s *ent, const vec3_t *origin, const vec3_t *angles, const vec3_t *velocity, const bool warpPhysics)
{
  ?SetVehiclePosition@GVehiclesSP@@UEAAXPEAUgentity_s@@AEBTvec3_t@@11_N@Z(this, ent, origin, angles, velocity, warpPhysics);
}

/*
==============
GVehiclesSP::ResetMouseSensitivity
==============
*/

void __fastcall GVehiclesSP::ResetMouseSensitivity(GVehiclesSP *this)
{
  ?ResetMouseSensitivity@GVehiclesSP@@UEAAXXZ(this);
}

/*
==============
G_VehicleSP_EntInfo
==============
*/

void __fastcall G_VehicleSP_EntInfo(gentity_s *self, const vec3_t *source)
{
  ?G_VehicleSP_EntInfo@@YAXPEAUgentity_s@@AEBTvec3_t@@@Z(self, source);
}

/*
==============
GVehiclesSP::UpdateSubmarinePlayerMove
==============
*/

void __fastcall GVehiclesSP::UpdateSubmarinePlayerMove(GVehiclesSP *this, Vehicle *veh)
{
  ?UpdateSubmarinePlayerMove@GVehiclesSP@@UEAAXPEAUVehicle@@@Z(this, veh);
}

/*
==============
G_VehicleSP_Init
==============
*/

void __fastcall G_VehicleSP_Init(gentity_s *pSelf)
{
  ?G_VehicleSP_Init@@YAXPEAUgentity_s@@@Z(pSelf);
}

/*
==============
GVehiclesSP::GetVehicleTurretTrace
==============
*/

void __fastcall GVehiclesSP::GetVehicleTurretTrace(GVehiclesSP *this, const gentity_s *vehicleEnt, const gentity_s *owner, vec3_t *outOrigin, vec3_t *outDirection, int *outTurretEnt)
{
  ?GetVehicleTurretTrace@GVehiclesSP@@UEAAXPEBUgentity_s@@0AEATvec3_t@@1PEAH@Z(this, vehicleEnt, owner, outOrigin, outDirection, outTurretEnt);
}

/*
==============
GVehiclesSP::FreeVehicle
==============
*/

void __fastcall GVehiclesSP::FreeVehicle(GVehiclesSP *this, gentity_s *ent)
{
  ?FreeVehicle@GVehiclesSP@@UEAAXPEAUgentity_s@@@Z(this, ent);
}

/*
==============
G_VehicleSP_WriteSaveGame
==============
*/

void __fastcall G_VehicleSP_WriteSaveGame(MemoryFile *memFile)
{
  ?G_VehicleSP_WriteSaveGame@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
GVehiclesSP::FinishVehicleDamage
==============
*/
void GVehiclesSP::FinishVehicleDamage(GVehiclesSP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset)
{
  G_Vehicle_FinishDamage(targ, inflictor, attacker, dir, point, damage, dFlags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset);
}

/*
==============
GVehiclesSP::FreeVehicle
==============
*/
void GVehiclesSP::FreeVehicle(GVehiclesSP *this, gentity_s *ent)
{
  if ( ent )
  {
    ent->handler = 26;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 894, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    MEMORY[0x418] = 26;
  }
}

/*
==============
G_VehicleSP_CancelAIMove
==============
*/
void G_VehicleSP_CancelAIMove(gentity_s *ent)
{
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 500, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 501, ASSERT_TYPE_ASSERT, "(ent->vehicle)", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  vehicle = ent->vehicle;
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  vehicle->drivingState = VEH_DRIVE_NONE;
  if ( ServerDef->type == VEH_HELICOPTER )
    G_VehicleHeli_CancelAiMove(ent);
}

/*
==============
G_VehicleSP_EntInfo
==============
*/
void G_VehicleSP_EntInfo(gentity_s *self, const vec3_t *source)
{
  float v4; 
  float v5; 
  float v6; 
  const dvar_t *v7; 
  float v8; 
  float v9; 
  const dvar_t *v10; 
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  const dvar_t *v13; 
  const VehicleDef *v14; 
  int v15; 
  float *v16; 
  bool v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  bool v25; 
  float v26; 
  const vec4_t *v27; 
  float v28; 
  float v29; 
  int number; 
  __int64 v31; 
  __int64 v32; 
  const dvar_t *v33; 
  double EntInfoScale; 
  float v35; 
  float v36; 
  float v37; 
  const char *v38; 
  float manualDecel; 
  float v40; 
  const char *v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  const char *v48; 
  const char *v49; 
  const char *v50; 
  const char *v51; 
  const char *v52; 
  const char *v53; 
  const char *v54; 
  const char *v55; 
  const char *v56; 
  const char *v57; 
  __int64 duration; 
  __int64 v59; 
  vec3_t center; 
  vec3_t end; 
  vec3_t start; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 

  misc_EntInfo(self, source);
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 577, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  v4 = self->r.currentOrigin.v[0] - source->v[0];
  v5 = self->r.currentOrigin.v[1] - source->v[1];
  v6 = self->r.currentOrigin.v[2] - source->v[2];
  v7 = DVARFLT_g_entinfo_maxdist;
  v9 = fsqrt((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6));
  v8 = v9;
  if ( !DVARFLT_g_entinfo_maxdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_maxdist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.value <= 0.0 )
    goto LABEL_12;
  v10 = DVARFLT_g_entinfo_maxdist;
  if ( !DVARFLT_g_entinfo_maxdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_maxdist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v9 <= v10->current.value )
  {
LABEL_12:
    vehicle = self->vehicle;
    if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 584, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
      __debugbreak();
    ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
    v13 = DVARINT_bg_entinfo;
    v14 = ServerDef;
    if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.integer == 3 )
      goto LABEL_52;
    AngleVectors(&self->r.currentAngles, &forward, &right, &up);
    v15 = 0;
    v16 = &forward.v[2];
    v17 = 1;
    do
    {
      if ( !v17 )
      {
        LODWORD(v59) = 3;
        LODWORD(duration) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v59) )
          __debugbreak();
      }
      v18 = 5.0 * *(v16 - 1);
      start.v[0] = (float)(5.0 * *(v16 - 2)) + self->r.currentOrigin.v[0];
      v19 = v18 + self->r.currentOrigin.v[1];
      start.v[2] = (float)(5.0 * *v16) + self->r.currentOrigin.v[2];
      start.v[1] = v19;
      if ( (unsigned int)v15 >= 3 )
      {
        LODWORD(v59) = 3;
        LODWORD(duration) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v59) )
          __debugbreak();
      }
      v20 = 5.0 * *(v16 - 1);
      v21 = self->r.currentOrigin.v[1];
      end.v[0] = self->r.currentOrigin.v[0] - (float)(5.0 * *(v16 - 2));
      v22 = v21 - v20;
      v23 = 5.0 * *v16;
      v24 = self->r.currentOrigin.v[2];
      end.v[1] = v22;
      end.v[2] = v24 - v23;
      G_DebugLine(&start, &end, &colorWhite, 0);
      ++v15;
      v16 += 3;
      v17 = (unsigned int)v15 < 3;
    }
    while ( v15 < 3 );
    if ( ((v14->type - 4) & 0xFB) != 0 )
    {
      if ( (float)((float)((float)(vehicle->goalPosition.v[0] * vehicle->goalPosition.v[0]) + (float)(vehicle->goalPosition.v[1] * vehicle->goalPosition.v[1])) + (float)(vehicle->goalPosition.v[2] * vehicle->goalPosition.v[2])) > 0.0 )
      {
        v25 = vehicle->drivingState == VEH_DRIVE_AI;
        *(_QWORD *)center.v = *(_QWORD *)vehicle->goalPosition.v;
        v26 = vehicle->goalPosition.v[2];
LABEL_32:
        v27 = &colorBlack;
        if ( v25 )
          v27 = &colorMagenta;
        center.v[2] = v26;
        G_DebugLine(&self->r.currentOrigin, &center, v27, 0);
        G_DebugCircle(&center, 64.0, v27, 0, 1, 0);
      }
    }
    else if ( (float)((float)((float)(vehicle->heliPathPos.goalPosition.v[0] * vehicle->heliPathPos.goalPosition.v[0]) + (float)(vehicle->heliPathPos.goalPosition.v[1] * vehicle->heliPathPos.goalPosition.v[1])) + (float)(vehicle->heliPathPos.goalPosition.v[2] * vehicle->heliPathPos.goalPosition.v[2])) > 0.0 )
    {
      v25 = vehicle->drivingState == VEH_DRIVE_AI;
      *(_QWORD *)center.v = *(_QWORD *)vehicle->heliPathPos.goalPosition.v;
      v26 = vehicle->heliPathPos.goalPosition.v[2];
      goto LABEL_32;
    }
    v28 = self->r.currentOrigin.v[1];
    center.v[0] = self->r.currentOrigin.v[0] + vehicle->phys.vel.v[0];
    v29 = self->r.currentOrigin.v[2];
    center.v[1] = v28 + vehicle->phys.vel.v[1];
    center.v[2] = v29 + vehicle->phys.vel.v[2];
    G_DebugLine(&self->r.currentOrigin, &center, &colorBlue, 0);
    center.v[0] = (float)(5.0 * vehicle->phys.accel.v[0]) + self->r.currentOrigin.v[0];
    center.v[1] = (float)(5.0 * vehicle->phys.accel.v[1]) + self->r.currentOrigin.v[1];
    center.v[2] = (float)(5.0 * vehicle->phys.accel.v[2]) + self->r.currentOrigin.v[2];
    G_DebugLine(&self->r.currentOrigin, &center, &colorRed, 0);
    if ( EntHandle::isDefined(&vehicle->lookAtEnt) )
    {
      number = vehicle->lookAtEnt.number;
      if ( (unsigned int)(number - 1) >= 0x7FF )
      {
        LODWORD(v59) = 2047;
        LODWORD(duration) = number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", duration, v59) )
          __debugbreak();
      }
      v31 = vehicle->lookAtEnt.number;
      if ( (unsigned int)(v31 - 1) >= 0x800 )
      {
        LODWORD(v59) = 2048;
        LODWORD(duration) = v31 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v59) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v32 = v31 - 1;
      if ( g_entities[v32].r.isInUse != g_entityIsInUse[v32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v32] )
      {
        LODWORD(v59) = vehicle->lookAtEnt.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v59) )
          __debugbreak();
      }
      G_DebugLine(&self->r.currentOrigin, &g_entities[vehicle->lookAtEnt.number - 1].r.currentOrigin, &colorWhite, 0);
    }
LABEL_52:
    v33 = DVARINT_bg_entinfo;
    if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    if ( v33->current.integer <= 3 )
    {
      EntInfoScale = G_GetEntInfoScale();
      v35 = *(float *)&EntInfoScale * 0.75;
      *(float *)&EntInfoScale = self->r.absBox.midPoint.v[0];
      v36 = (float)(v35 * v8) * 0.0026041667;
      v37 = v36 * 12.0;
      center.v[1] = self->r.absBox.midPoint.v[1];
      center.v[0] = *(float *)&EntInfoScale;
      center.v[2] = self->r.absBox.midPoint.v[2] - (float)(v36 * 12.0);
      v38 = j_va("speed cur: %0.1f, goal: %0.1f", (float)(fsqrt((float)((float)(vehicle->phys.vel.v[0] * vehicle->phys.vel.v[0]) + (float)(vehicle->phys.vel.v[1] * vehicle->phys.vel.v[1])) + (float)(vehicle->phys.vel.v[2] * vehicle->phys.vel.v[2])) * 0.056818184), (float)(0.056818184 * vehicle->manualSpeed));
      G_Main_AddDebugString(&center, &colorLtGrey, v36, v38);
      manualDecel = vehicle->manualDecel;
      v40 = vehicle->manualAccel * 0.056818184;
      center.v[2] = center.v[2] - (float)(v36 * 12.0);
      v41 = j_va("accel: %0.1f maxAccel %0.1f maxDecel %0.1f", fsqrt((float)((float)(vehicle->phys.accel.v[0] * vehicle->phys.accel.v[0]) + (float)(vehicle->phys.accel.v[1] * vehicle->phys.accel.v[1])) + (float)(vehicle->phys.accel.v[2] * vehicle->phys.accel.v[2])), v40, (float)(manualDecel * 0.056818184));
      G_Main_AddDebugString(&center, &colorLtGrey, v36, v41);
      v42 = self->r.currentOrigin.v[0];
      v43 = self->r.currentOrigin.v[1];
      v44 = self->r.currentOrigin.v[2];
      if ( v14->type == VEH_HELICOPTER )
      {
        v45 = v42 - vehicle->heliPathPos.goalPosition.v[0];
        v46 = v43 - vehicle->heliPathPos.goalPosition.v[1];
        v47 = v44 - vehicle->heliPathPos.goalPosition.v[2];
      }
      else
      {
        v45 = v42 - vehicle->goalPosition.v[0];
        v46 = v43 - vehicle->goalPosition.v[1];
        v47 = v44 - vehicle->goalPosition.v[2];
      }
      center.v[2] = center.v[2] - v37;
      v48 = j_va("<%0.1f %0.1f %0.1f> distToGoal: %0.1f", v42, self->r.currentOrigin.v[1], self->r.currentOrigin.v[2], fsqrt((float)((float)(v46 * v46) + (float)(v45 * v45)) + (float)(v47 * v47)));
      G_Main_AddDebugString(&center, &colorLtGrey, v36, v48);
      center.v[2] = center.v[2] - v37;
      v49 = j_va("yaw speed: %0.1f, goal: %0.1f", vehicle->phys.rotVel.v[1], vehicle->heliPathPos.maxAngleVel.v[1]);
      G_Main_AddDebugString(&center, &colorLtGrey, v36, v49);
      center.v[2] = center.v[2] - v37;
      v50 = j_va("yaw accel: %0.1f, decel: %0.1f", vehicle->heliPathPos.yawAccel, vehicle->heliPathPos.yawDecel);
      G_Main_AddDebugString(&center, &colorLtGrey, v36, v50);
      center.v[2] = center.v[2] - v37;
      v51 = (char *)&queryFormat.fmt + 3;
      if ( vehicle->heliPathPos.yawSlowDown )
        v51 = ", slowdown";
      v52 = j_va("yaw overshoot: %0.1f%s", vehicle->heliPathPos.yawOverShoot, v51);
      G_Main_AddDebugString(&center, &colorLtGrey, v36, v52);
      if ( vehicle->heliPathPos.hasTargetYaw )
      {
        center.v[2] = center.v[2] - v37;
        v53 = j_va("targetyaw %0.1f, current %0.1f", vehicle->heliPathPos.targetYaw, vehicle->phys.angles.v[1]);
        G_Main_AddDebugString(&center, &colorLtGrey, v36, v53);
      }
      if ( vehicle->heliPathPos.hasGoalYaw )
      {
        center.v[2] = center.v[2] - v37;
        v54 = j_va("goalyaw %0.1f, current %0.1f", vehicle->heliPathPos.goalYaw, vehicle->phys.angles.v[1]);
        G_Main_AddDebugString(&center, &colorLtGrey, v36, v54);
      }
      center.v[2] = center.v[2] - v37;
      v55 = j_va("cur pitch: %0.1f cur roll: %0.1f", vehicle->phys.angles.v[0], vehicle->phys.angles.v[2]);
      G_Main_AddDebugString(&center, &colorLtGrey, v36, v55);
      center.v[2] = center.v[2] - v37;
      v56 = j_va("max pitch: %0.1f max roll: %0.1f", vehicle->heliPathPos.maxPitchAngle, vehicle->heliPathPos.maxRollAngle);
      G_Main_AddDebugString(&center, &colorLtGrey, v36, v56);
      center.v[2] = center.v[2] - v37;
      v57 = j_va("hover radius: %0.1f, speed: %0.1f, accel: %0.1f", vehicle->heliPathPos.hover.hoverRadius, vehicle->heliPathPos.hover.hoverSpeed, vehicle->heliPathPos.hover.hoverAccel);
      G_Main_AddDebugString(&center, &colorLtGrey, v36, v57);
      if ( vehicle->heliPathPos.stopAtGoal )
      {
        center.v[2] = center.v[2] - v37;
        G_Main_AddDebugString(&center, &colorLtGrey, v36, "stopAtGoal");
      }
    }
  }
}

/*
==============
G_VehicleSP_FinishAnimatedFrameExtras
==============
*/
void G_VehicleSP_FinishAnimatedFrameExtras(Vehicle *veh, bool waitNodeHit, float prevSpeed)
{
  gentity_s *ent; 
  float waitSpeed; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 191, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 192, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
    __debugbreak();
  ent = veh->ent;
  G_Vehicle_CalcPhysVelFromPrevState(veh);
  if ( waitNodeHit && veh->waitNode > -1 )
    GScr_Notify(ent, scr_const.reached_wait_node, 0);
  if ( G_VehiclePath_IsEndOfPath(&veh->pathPos) )
    GScr_Notify(ent, scr_const.reached_end_node, 0);
  waitSpeed = veh->waitSpeed;
  if ( waitSpeed >= 0.0 )
  {
    if ( prevSpeed <= waitSpeed )
    {
      if ( waitSpeed <= veh->pathSpeed )
      {
LABEL_17:
        GScr_Notify(ent, scr_const.reached_wait_speed, 0);
        return;
      }
      if ( prevSpeed < waitSpeed )
        return;
    }
    if ( waitSpeed < veh->pathSpeed )
      return;
    goto LABEL_17;
  }
}

/*
==============
G_VehicleSP_Init
==============
*/
void G_VehicleSP_Init(gentity_s *pSelf)
{
  __int128 xmm6_0; 
  __int128 v2; 
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  int *wheel; 
  int i; 
  __int128 v9; 
  VehicleType type; 
  __m128 v12; 
  __m128 v13; 
  float *wheelZPos; 
  __int64 v20; 
  int v21; 
  int v22; 
  VehicleType v23; 
  vec3_t outOrigin; 
  vec3_t outPos; 
  float v1[4]; 
  __int128 v27; 
  __int128 v28; 

  vehicle = pSelf->vehicle;
  v27 = v2;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 733, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  v1[0] = 0.0;
  v1[1] = 0.0;
  v1[2] = 0.0;
  if ( VecNCompareCustomEpsilon(vehicle->phys.bounds.halfSize.v, v1, 0.001, 3) )
  {
    if ( (unsigned __int8)(ServerDef->type - 1) > 2u )
    {
      v28 = xmm6_0;
      wheel = vehicle->boneIndex.wheel;
      _XMM6 = 0i64;
      for ( i = 0; i < 12; ++i )
      {
        if ( *wheel >= 0 )
        {
          G_Vehicle_GetWheelOrigin(pSelf, i, &outOrigin);
          v9 = LODWORD(outOrigin.v[0]);
          *(float *)&v9 = (float)((float)(outOrigin.v[0] * outOrigin.v[0]) + (float)(outOrigin.v[1] * outOrigin.v[1])) + (float)(outOrigin.v[2] * outOrigin.v[2]);
          _XMM2 = v9;
          __asm { vmaxss  xmm6, xmm2, xmm6 }
        }
        ++wheel;
      }
      type = ServerDef->type;
      if ( _XMM6.m128_f32[0] <= 0.0 )
      {
        _XMM0 = LODWORD(pSelf->r.box.halfSize.v[1]);
        __asm
        {
          vminss  xmm1, xmm0, dword ptr [rsi+10Ch]
          vminss  xmm2, xmm1, dword ptr [rsi+114h]
        }
        *(_QWORD *)vehicle->phys.bounds.midPoint.v = 0i64;
        vehicle->phys.bounds.midPoint.v[2] = 0.0;
        vehicle->phys.bounds.halfSize.v[0] = *(float *)&_XMM2;
        vehicle->phys.bounds.halfSize.v[1] = *(float *)&_XMM2;
        vehicle->phys.bounds.halfSize.v[2] = *(float *)&_XMM2;
      }
      else
      {
        v12 = _XMM6;
        v12.m128_f32[0] = fsqrt(_XMM6.m128_f32[0]) + 1.0;
        v13 = _mm_shuffle_ps(v12, v12, 0);
        if ( type == VEH_WHEELS_4 || type == VEH_TREADED )
        {
          *(_QWORD *)vehicle->phys.bounds.midPoint.v = 0i64;
          *(__m128 *)&vehicle->phys.bounds.midPoint.z = v13;
        }
        else if ( type == VEH_HELICOPTER )
        {
          *(_QWORD *)vehicle->phys.bounds.midPoint.v = 0i64;
          vehicle->phys.bounds.midPoint.v[2] = 0.0;
          vehicle->phys.bounds.halfSize.v[0] = v13.m128_f32[0];
          vehicle->phys.bounds.halfSize.v[1] = v13.m128_f32[0];
          vehicle->phys.bounds.halfSize.v[2] = v13.m128_f32[0];
        }
      }
    }
    if ( ServerDef->type == VEH_BOAT )
    {
      _XMM0 = LODWORD(pSelf->r.box.halfSize.v[1]);
      __asm { vminss  xmm1, xmm0, dword ptr [rsi+10Ch] }
      vehicle->phys.bounds.midPoint.v[2] = *(float *)&_XMM1 + 0.0099999998;
      *(_QWORD *)vehicle->phys.bounds.midPoint.v = 0i64;
      vehicle->phys.bounds.halfSize.v[0] = *(float *)&_XMM1;
      vehicle->phys.bounds.halfSize.v[1] = *(float *)&_XMM1;
      vehicle->phys.bounds.halfSize.v[2] = *(float *)&_XMM1;
    }
  }
  wheelZPos = vehicle->phys.wheelZPos;
  v20 = 12i64;
  do
  {
    v21 = *((_DWORD *)wheelZPos + 340);
    if ( v21 >= 0 )
    {
      G_Utils_DObjGetWorldBoneIndexPos(pSelf, v21, &outPos);
      *wheelZPos = outPos.v[2];
    }
    ++wheelZPos;
    --v20;
  }
  while ( v20 );
  v22 = vehicle->boneIndex.flash[0];
  if ( v22 >= 0 && vehicle->boneIndex.barrel >= 0 )
  {
    G_Utils_DObjGetWorldBoneIndexPos(pSelf, v22, &outOrigin);
    G_Utils_DObjGetWorldBoneIndexPos(pSelf, vehicle->boneIndex.barrel, &outPos);
    vehicle->turret.barrelOffset = fsqrt((float)((float)((float)(outOrigin.v[1] - outPos.v[1]) * (float)(outOrigin.v[1] - outPos.v[1])) + (float)((float)(outOrigin.v[0] - outPos.v[0]) * (float)(outOrigin.v[0] - outPos.v[0]))) + (float)((float)(outOrigin.v[2] - outPos.v[2]) * (float)(outOrigin.v[2] - outPos.v[2])));
  }
  v23 = ServerDef->type;
  if ( v23 == VEH_WHEELS_4 || v23 == VEH_TREADED )
    G_Vehicle_GroundPlant(pSelf, &vehicle->phys, 0);
  G_Vehicle_SetPosition(pSelf, &vehicle->phys.origin, &vehicle->phys.vel, &vehicle->phys.angles, 1);
  vehicle->phys.prevOrigin.v[0] = vehicle->phys.origin.v[0];
  vehicle->phys.prevOrigin.v[1] = vehicle->phys.origin.v[1];
  vehicle->phys.prevOrigin.v[2] = vehicle->phys.origin.v[2];
  vehicle->phys.prevAngles.v[0] = vehicle->phys.angles.v[0];
  vehicle->phys.prevAngles.v[1] = vehicle->phys.angles.v[1];
  vehicle->phys.prevAngles.v[2] = vehicle->phys.angles.v[2];
  G_Vehicle_TouchEntities(pSelf);
  G_ActiveSP_TouchTriggers(pSelf);
  if ( pSelf->handler != 25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 819, ASSERT_TYPE_ASSERT, "(pSelf->handler == ENT_HANDLER_VEHICLE_INIT)", (const char *)&queryFormat, "pSelf->handler == ENT_HANDLER_VEHICLE_INIT") )
    __debugbreak();
  pSelf->handler = 24;
  pSelf->nextthink = G_Vehicle_GetNextThinkTime();
}

/*
==============
G_VehicleSP_IsVehicleScriptedAnimRunning
==============
*/
_BOOL8 G_VehicleSP_IsVehicleScriptedAnimRunning(Vehicle *veh)
{
  EntityAnimScript *scripted; 
  const XAnimTree *EntAnimTree; 
  const XAnim_s *Anims; 
  double Time; 
  float v6; 
  double DeltaTime; 
  float v8; 
  double Length; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 141, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  scripted = veh->ent->scripted;
  if ( !scripted || !scripted->anim )
    return 0i64;
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 147, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
    __debugbreak();
  EntAnimTree = G_Utils_GetEntAnimTree(veh->ent);
  if ( !EntAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 150, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
    __debugbreak();
  Anims = XAnimGetAnims(EntAnimTree);
  if ( !Anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 153, ASSERT_TYPE_ASSERT, "( anims )", (const char *)&queryFormat, "anims") )
    __debugbreak();
  Time = XAnimGetTime(EntAnimTree, 0, XANIM_SUBTREE_DEFAULT, scripted->anim);
  v6 = *(float *)&Time;
  DeltaTime = G_Vehicle_GetDeltaTime();
  v8 = *(float *)&DeltaTime;
  Length = XAnimGetLength(Anims, scripted->anim);
  return v8 <= (float)(*(float *)&Length * (float)(1.0 - v6)) || XAnimIsLooped(Anims, scripted->anim);
}

/*
==============
G_VehicleSP_OrientTo_Init
==============
*/
void G_VehicleSP_OrientTo_Init(Vehicle *veh, const vec3_t *tgtOrigin, const vec3_t *tgtAngles, float tgtSpeed, float tgtAngleSpeed)
{
  float speed; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  double DeltaTime; 
  __int128 orientToTime_low; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 294, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  veh->orientToOrigin.current.v[0] = veh->phys.origin.v[0];
  veh->orientToOrigin.current.v[1] = veh->phys.origin.v[1];
  veh->orientToOrigin.current.v[2] = veh->phys.origin.v[2];
  veh->orientToOrigin.target.v[0] = tgtOrigin->v[0];
  veh->orientToOrigin.target.v[1] = tgtOrigin->v[1];
  veh->orientToOrigin.target.v[2] = tgtOrigin->v[2];
  speed = veh->speed;
  veh->orientToOrigin.tgtSpeed = tgtSpeed * 17.6;
  veh->orientToOrigin.speed = speed;
  veh->orientToAngles.current.v[0] = veh->phys.angles.v[0];
  veh->orientToAngles.current.v[1] = veh->phys.angles.v[1];
  veh->orientToAngles.current.v[2] = veh->phys.angles.v[2];
  veh->orientToAngles.target.v[0] = tgtAngles->v[0];
  veh->orientToAngles.target.v[1] = tgtAngles->v[1];
  veh->orientToAngles.target.v[2] = tgtAngles->v[2];
  v9 = (float)((float)(veh->phys.rotVel.v[0] * veh->phys.rotVel.v[0]) + (float)(veh->phys.rotVel.v[1] * veh->phys.rotVel.v[1])) + (float)(veh->phys.rotVel.v[2] * veh->phys.rotVel.v[2]);
  veh->orientToAngles.tgtSpeed = tgtAngleSpeed;
  veh->orientToAngles.speed = fsqrt(v9);
  v10 = veh->orientToOrigin.target.v[0] - veh->orientToOrigin.current.v[0];
  v11 = veh->orientToOrigin.target.v[1] - veh->orientToOrigin.current.v[1];
  v12 = veh->orientToOrigin.target.v[2] - veh->orientToOrigin.current.v[2];
  v13 = veh->orientToOrigin.tgtSpeed + veh->orientToOrigin.speed;
  v14 = fsqrt((float)((float)(v10 * v10) + (float)(v11 * v11)) + (float)(v12 * v12));
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v15 = (float)level.frameDuration * 0.001;
  if ( v13 == 0.0 )
  {
    veh->orientToTime = v15;
    veh->orientToStartTime = v15;
  }
  else
  {
    veh->orientToTime = (float)(v14 * 2.0) / v13;
    DeltaTime = G_Vehicle_GetDeltaTime();
    orientToTime_low = LODWORD(veh->orientToTime);
    *(float *)&orientToTime_low = *(float *)&orientToTime_low - fmodf_0(veh->orientToTime, *(float *)&DeltaTime);
    _XMM1 = orientToTime_low;
    __asm { vmaxss  xmm2, xmm1, xmm7 }
    veh->orientToTime = *(float *)&_XMM2;
    veh->orientToStartTime = *(float *)&_XMM2;
  }
}

/*
==============
G_VehicleSP_ReadSaveGame
==============
*/
void G_VehicleSP_ReadSaveGame(SaveGame *save)
{
  unsigned int i; 
  Vehicle *v3; 
  Vehicle *v4; 
  int buffer; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 543, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  for ( i = 0; i < 0x80; ++i )
  {
    v3 = G_Vehicle_Get(i);
    buffer = 0;
    v4 = v3;
    SaveMemory_LoadRead(&buffer, 4, save);
    if ( buffer )
    {
      G_SaveSP_ReadVehicleStruct(save, SP_VEHICLE_SAVE_FIELDS, v4);
      G_Vehicle_ReadVehiclePhysics(save, v4);
    }
  }
}

/*
==============
G_VehicleSP_Think
==============
*/
void G_VehicleSP_Think(gentity_s *pSelf)
{
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  gentity_s *Player; 
  gentity_s *v5; 
  int NextThinkTime; 
  Vehicle *v7; 
  float speed; 
  BOOL v9; 
  float orientToStartTime; 
  float v11; 
  float v12; 
  float *p_number; 
  __int128 orientToTime_low; 
  double DeltaTime; 
  __int128 v17; 
  const gentity_s *ent; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 392, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  vehicle = pSelf->vehicle;
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  G_Vehicle_SetEntityStateTeam(pSelf, (team_t)vehicle->team);
  Player = G_Vehicle_GetPlayer(pSelf);
  v5 = Player;
  if ( Player && Player->client->ps.vehicleState.entity == pSelf->s.number )
  {
    G_ActiveSP_TouchTriggers(pSelf);
    NextThinkTime = G_Vehicle_GetNextThinkTime();
    v7 = pSelf->vehicle;
    pSelf->nextthink = NextThinkTime;
    G_Vehicle_UpdateCameraState(v7);
    return;
  }
  speed = vehicle->speed;
  if ( speed < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 413, ASSERT_TYPE_ASSERT, "( ( vehicle->speed >= 0.0f ) )", "%s\n\t( vehicle->speed ) = %g", "( vehicle->speed >= 0.0f )", speed) )
    __debugbreak();
  pSelf->s.lerp.u.anonymous.data[1] &= ~2u;
  if ( !BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) || vehicle->ent->scripted || COERCE_FLOAT(LODWORD(vehicle->orientToTime) & _xmm) > 0.001 || pSelf->tagInfo )
  {
    if ( vehicle->drivingState == VEH_DRIVE_PATH_CONSTRAINED )
      vehicle->speed = vehicle->pathSpeed;
  }
  else
  {
    G_Vehicle_UpdatePhysics(pSelf, v5);
  }
  G_Vehicle_UpdatePhysicsLinkEntity(pSelf);
  G_Vehicle_UpdatePosition(pSelf, v5);
  G_ActiveSP_TouchTriggers(pSelf);
  G_Vehicle_DrawDebugOrigin(ServerDef, &vehicle->phys);
  vehicle->turret.barrelBlocked = 0;
  G_Vehicle_UpdatePlayerControlledWeapon(pSelf);
  G_Vehicle_UpdateAim(pSelf);
  G_Vehicle_UpdateBody(vehicle);
  G_Vehicle_UpdateSteering(pSelf);
  G_Vehicle_UpdateSounds(pSelf);
  v9 = COERCE_FLOAT(LODWORD(vehicle->orientToTime) & _xmm) > 0.001;
  if ( G_VehicleSP_IsVehicleScriptedAnimRunning(vehicle) )
  {
    if ( !v9 )
      goto LABEL_23;
    goto LABEL_21;
  }
  if ( v9 )
  {
LABEL_21:
    orientToStartTime = vehicle->orientToStartTime;
    if ( orientToStartTime > 0.0 )
    {
      v11 = vehicle->orientToTime / orientToStartTime;
      I_fclamp(v11, 0.0, 1.0);
      v12 = v11;
LABEL_24:
      p_number = (float *)&vehicle->ent->s.number;
      p_number[26] = v12 * vehicle->ent->s.lerp.u.actor.impactVector.v[1];
      p_number[24] = v12 * p_number[24];
      p_number[25] = v12 * p_number[25];
      vehicle->phys.bodyVel.v[0] = v12 * vehicle->phys.bodyVel.v[0];
      vehicle->phys.bodyVel.v[1] = v12 * vehicle->phys.bodyVel.v[1];
      vehicle->phys.bodyVel.v[2] = v12 * vehicle->phys.bodyVel.v[2];
      vehicle->phys.bodyAccel.v[0] = v12 * vehicle->phys.bodyAccel.v[0];
      vehicle->phys.bodyAccel.v[1] = v12 * vehicle->phys.bodyAccel.v[1];
      vehicle->phys.bodyAccel.v[2] = v12 * vehicle->phys.bodyAccel.v[2];
      goto LABEL_25;
    }
LABEL_23:
    v12 = 0.0;
    goto LABEL_24;
  }
LABEL_25:
  orientToTime_low = LODWORD(vehicle->orientToTime);
  if ( COERCE_FLOAT(orientToTime_low & _xmm) > 0.001 )
  {
    DeltaTime = G_Vehicle_GetDeltaTime();
    v17 = orientToTime_low;
    *(float *)&v17 = *(float *)&orientToTime_low - *(float *)&DeltaTime;
    _XMM1 = v17;
    __asm { vmaxss  xmm2, xmm1, xmm6 }
    vehicle->orientToTime = *(float *)&_XMM2;
    if ( COERCE_FLOAT(_XMM2 & _xmm) <= 0.001 )
    {
      ent = vehicle->ent;
      vehicle->orientToTime = 0.0;
      GScr_Notify(ent, scr_const.orientto_complete, 0);
    }
  }
  pSelf->s.time2 = (int)(float)(ServerDef->vehiclePhysicsDef.suspensionTravel * 1000.0);
  pSelf->nextthink = G_Vehicle_GetNextThinkTime();
}

/*
==============
G_VehicleSP_UpdateAnimatedSubState
==============
*/
__int64 G_VehicleSP_UpdateAnimatedSubState(Vehicle *veh, VehiclePathPos *nextVpp, bool *waitNodeHit)
{
  gentity_s *ent; 
  int v7; 
  VehicleOrientTo *p_orientToAngles; 
  bool v9; 
  float v12; 
  vec3_t *p_angles; 
  const vec3_t *v14; 
  gentity_s *v15; 
  __int64 pathDir; 
  __int64 v18; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 223, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 224, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
    __debugbreak();
  ent = veh->ent;
  veh->ent->s.lerp.u.anonymous.data[1] &= ~0x80u;
  if ( COERCE_FLOAT(LODWORD(veh->orientToTime) & _xmm) > 0.001 )
  {
    G_VehicleSP_UpdateOrientToVelocity(veh, &veh->orientToOrigin, 0);
    veh->phys.origin.v[0] = veh->orientToOrigin.current.v[0];
    veh->phys.origin.v[1] = veh->orientToOrigin.current.v[1];
    veh->phys.origin.v[2] = veh->orientToOrigin.current.v[2];
    G_VehicleSP_UpdateOrientToVelocity(veh, &veh->orientToAngles, 1);
    v7 = 0;
    p_orientToAngles = &veh->orientToAngles;
    v9 = 1;
    _XMM7 = 0i64;
    do
    {
      if ( !v9 )
      {
        LODWORD(v18) = 3;
        LODWORD(pathDir) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", pathDir, v18) )
          __debugbreak();
      }
      __asm { vroundss xmm3, xmm7, xmm2, 1 }
      v12 = (float)((float)(0.0027777778 * p_orientToAngles->current.v[0]) - *(float *)&_XMM3) * 360.0;
      if ( (unsigned int)v7 >= 3 )
      {
        LODWORD(v18) = 3;
        LODWORD(pathDir) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", pathDir, v18) )
          __debugbreak();
      }
      p_orientToAngles->current.v[0] = v12;
      p_orientToAngles = (VehicleOrientTo *)((char *)p_orientToAngles + 4);
      v9 = (unsigned int)++v7 < 3;
    }
    while ( v7 < 3 );
    p_angles = &veh->phys.angles;
    veh->phys.angles.v[0] = veh->orientToAngles.current.v[0];
    veh->phys.angles.v[1] = veh->orientToAngles.current.v[1];
    veh->phys.angles.v[2] = veh->orientToAngles.current.v[2];
LABEL_21:
    if ( nextVpp )
    {
      v14 = p_angles;
      if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 170, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
        __debugbreak();
      v15 = veh->ent;
      G_VehiclePath_UpdatePathPosAnimated(nextVpp, &veh->phys.origin, v14);
      *waitNodeHit = G_VehiclePath_UpdatePathPosNotifies(&veh->pathPos, nextVpp, v15->s.number, veh->waitNode, VEH_PATH_NOTIFY_SCRIPT, VEH_PATH_FORWARD);
      *(_OWORD *)&veh->pathPos.nodeIdx = *(_OWORD *)&nextVpp->nodeIdx;
      *(_OWORD *)&veh->pathPos.lookAhead = *(_OWORD *)&nextVpp->lookAhead;
      *(_OWORD *)veh->pathPos.angles.v = *(_OWORD *)nextVpp->angles.v;
      *(_OWORD *)&veh->pathPos.lookPos.y = *(_OWORD *)&nextVpp->lookPos.y;
      *(_OWORD *)&veh->pathPos.driftOffset.z = *(_OWORD *)&nextVpp->driftOffset.z;
      *(_OWORD *)&veh->pathPos.switchNode[0].script_noteworthy = *(_OWORD *)&nextVpp->switchNode[0].script_noteworthy;
      *(_OWORD *)veh->pathPos.switchNode[0].origin.v = *(_OWORD *)nextVpp->switchNode[0].origin.v;
      *(_OWORD *)&veh->pathPos.switchNode[0].dir.y = *(_OWORD *)&nextVpp->switchNode[0].dir.y;
      *(_OWORD *)&veh->pathPos.switchNode[0].angles.z = *(_OWORD *)&nextVpp->switchNode[0].angles.z;
      *(_OWORD *)&veh->pathPos.switchNode[1].name = *(_OWORD *)&nextVpp->switchNode[1].name;
      *(_OWORD *)&veh->pathPos.switchNode[1].index = *(_OWORD *)&nextVpp->switchNode[1].index;
      *(_OWORD *)&veh->pathPos.switchNode[1].origin.y = *(_OWORD *)&nextVpp->switchNode[1].origin.y;
      *(_OWORD *)&veh->pathPos.switchNode[1].dir.z = *(_OWORD *)&nextVpp->switchNode[1].dir.z;
      *(_QWORD *)&veh->pathPos.switchNode[1].length = *(_QWORD *)&nextVpp->switchNode[1].length;
      *(_DWORD *)&veh->pathPos.switchNode[1].notifyIdx = *(_DWORD *)&nextVpp->switchNode[1].notifyIdx;
      veh->manualTime = 0.0;
      if ( G_VehiclePath_IsEndOfPath(&veh->pathPos) )
        veh->pathSpeed = 0.0;
    }
    return 1i64;
  }
  if ( G_VehicleSP_IsVehicleScriptedAnimRunning(veh) )
  {
    G_Animscripted_Think(ent);
    p_angles = &veh->phys.angles;
    veh->phys.origin.v[0] = ent->r.currentOrigin.v[0];
    veh->phys.origin.v[1] = ent->r.currentOrigin.v[1];
    veh->phys.origin.v[2] = ent->r.currentOrigin.v[2];
    veh->phys.angles.v[0] = ent->r.currentAngles.v[0];
    veh->phys.angles.v[1] = ent->r.currentAngles.v[1];
    veh->phys.angles.v[2] = ent->r.currentAngles.v[2];
    ent->s.lerp.u.anonymous.data[1] |= 0x80u;
    if ( nextVpp )
    {
      if ( G_VehiclePath_IsEndOfPath(nextVpp) )
        nextVpp->flags |= 2u;
      goto LABEL_21;
    }
    return 1i64;
  }
  if ( nextVpp && (nextVpp->flags & 2) != 0 )
  {
    if ( G_VehiclePath_IsEndOfPath(nextVpp) )
      return 1i64;
    nextVpp->flags &= ~2u;
  }
  return 0i64;
}

/*
==============
G_VehicleSP_UpdateOrientToVelocity
==============
*/
void G_VehicleSP_UpdateOrientToVelocity(Vehicle *veh, VehicleOrientTo *orientTo, int angles)
{
  float orientToStartTime; 
  double v7; 
  float v8; 
  float v9; 
  __int128 v10; 
  float v11; 
  __int128 v12; 
  __int128 v13; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float frameDuration; 
  vec3_t v3; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 76, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !orientTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 77, ASSERT_TYPE_ASSERT, "(orientTo)", (const char *)&queryFormat, "orientTo") )
    __debugbreak();
  orientToStartTime = veh->orientToStartTime;
  if ( orientToStartTime <= 0.0 )
  {
    v8 = FLOAT_1_0;
  }
  else
  {
    v7 = I_fclamp(veh->orientToTime / orientToStartTime, 0.0, 1.0);
    v8 = 1.0 - *(float *)&v7;
  }
  if ( angles )
  {
    AnglesSubtract(&orientTo->target, &orientTo->current, &v3);
    v9 = v3.v[2];
    v10 = LODWORD(v3.v[1]);
    v11 = v3.v[0];
  }
  else
  {
    v11 = orientTo->target.v[0] - orientTo->current.v[0];
    v9 = orientTo->target.v[2] - orientTo->current.v[2];
    v12 = LODWORD(orientTo->target.v[1]);
    *(float *)&v12 = orientTo->target.v[1] - orientTo->current.v[1];
    v10 = v12;
  }
  v13 = v10;
  *(float *)&v13 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v11 * v11)) + (float)(v9 * v9));
  _XMM3 = v13;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  v17 = (float)((float)((float)((float)(*(float *)&v13 * 2.0) / veh->orientToTime) - orientTo->tgtSpeed) * (float)((float)(v8 * 0.69999999) + 0.30000001)) + (float)((float)(1.0 - (float)((float)(v8 * 0.69999999) + 0.30000001)) * orientTo->speed);
  orientTo->speed = v17;
  v3.v[0] = v11 * (float)(1.0 / *(float *)&_XMM0);
  v3.v[1] = *(float *)&v10 * (float)(1.0 / *(float *)&_XMM0);
  v3.v[2] = v9 * (float)(1.0 / *(float *)&_XMM0);
  v18 = v3.v[0] * v17;
  v19 = v3.v[1] * v17;
  v20 = v3.v[2] * v17;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  frameDuration = (float)level.frameDuration;
  orientTo->current.v[0] = (float)((float)(frameDuration * v18) * 0.001) + orientTo->current.v[0];
  orientTo->current.v[1] = (float)((float)(frameDuration * v19) * 0.001) + orientTo->current.v[1];
  orientTo->current.v[2] = (float)((float)(frameDuration * v20) * 0.001) + orientTo->current.v[2];
}

/*
==============
G_VehicleSP_WriteSaveGame
==============
*/
void G_VehicleSP_WriteSaveGame(MemoryFile *memFile)
{
  unsigned int i; 
  Vehicle *v3; 
  BOOL p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 515, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  for ( i = 0; i < 0x80; ++i )
  {
    v3 = G_Vehicle_Get(i);
    p = v3->ent != NULL;
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( p )
    {
      G_SaveSP_WriteVehicleStruct(memFile, SP_VEHICLE_SAVE_FIELDS, v3);
      G_Vehicle_WriteVehiclePhysics(memFile, v3);
    }
  }
}

/*
==============
GVehiclesSP::GetVehicleBoatRockingScale
==============
*/
float GVehiclesSP::GetVehicleBoatRockingScale(GVehiclesSP *this)
{
  const dvar_t *v1; 

  v1 = DVARFLT_vehBoatRockingScale;
  if ( !DVARFLT_vehBoatRockingScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehBoatRockingScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.value;
}

/*
==============
GVehiclesSP::GetVehicleHeliPlayerMove
==============
*/
void GVehiclesSP::GetVehicleHeliPlayerMove(GVehiclesSP *this, const Vehicle *veh, gentity_s *player, char *outMove)
{
  const VehicleDef *ServerDef; 
  char v8; 
  const dvar_t *v9; 
  int integer; 
  int v11; 
  int v12; 
  __int16 buttons; 
  __int16 v14; 
  __int16 v15; 
  const dvar_t *v16; 
  usercmd_s outUserCmd; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 966, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 967, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 968, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 969, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL )") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(veh->defIndex);
  G_Utils_GetClientCommonUserCommand(player->client, &outUserCmd);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&player->client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
  player->client->linkAnglesFrac = 0.0;
  if ( EntHandle::isDefined(&veh->ent->remoteControlledOwner) )
  {
    *outMove = outUserCmd.remoteControlMove[0];
    outMove[1] = outUserCmd.remoteControlMove[1];
    v8 = outUserCmd.remoteControlMove[2];
LABEL_44:
    outMove[2] = v8;
    return;
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&player->client->ps.pm_flags, ACTIVE, 0x10u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&player->client->ps.pm_flags, ACTIVE, 0xFu) )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&player->client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
    *outMove = outUserCmd.forwardmove;
    outMove[1] = outUserCmd.rightmove;
    player->client->link_viewClamp.min.goal.v[1] = COERCE_FLOAT(LODWORD(ServerDef->turretHorizSpanRight) ^ _xmm);
    player->client->link_viewClamp.max.goal.v[1] = ServerDef->turretHorizSpanLeft;
    player->client->link_viewClamp.min.goal.v[0] = COERCE_FLOAT(LODWORD(ServerDef->turretVertSpanUp) ^ _xmm);
    player->client->link_viewClamp.max.goal.v[0] = ServerDef->turretVertSpanDown;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
    {
      player->client->link_viewClamp.resistMin.goal.v[1] = ServerDef->turretHorizResistLeft;
      player->client->link_viewClamp.resistMax.goal.v[1] = ServerDef->turretHorizResistRight;
      player->client->link_viewClamp.resistMin.goal.v[0] = ServerDef->turretVertResistDown;
      player->client->link_viewClamp.resistMax.goal.v[0] = ServerDef->turretVertResistUp;
    }
    G_SnapToViewAngleClampGoal(&player->client->link_viewClamp);
    v9 = DVARINT_vehHelicopterControlsAltitude;
    if ( !DVARINT_vehHelicopterControlsAltitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterControlsAltitude") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    integer = v9->current.integer;
    if ( integer )
    {
      v11 = integer - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
          {
            buttons = outUserCmd.buttons;
            if ( (outUserCmd.buttons & 0x100) != 0 )
              outMove[2] = 127;
            if ( (buttons & 0x4C0) != 0 )
              outMove[2] -= 127;
          }
        }
        else
        {
          v14 = outUserCmd.buttons;
          if ( (outUserCmd.buttons & 0x2000) != 0 )
            outMove[2] = 127;
          if ( (v14 & 0x200) != 0 )
            outMove[2] -= 127;
        }
      }
      else
      {
        v15 = outUserCmd.buttons;
        if ( (outUserCmd.buttons & 0x1000) != 0 )
          outMove[2] = 127;
        if ( (v15 & 0x2000) != 0 )
          outMove[2] -= 127;
      }
    }
    else
    {
      outMove[2] = outUserCmd.pitchmove;
    }
    v16 = DVARBOOL_vehHelicopterInvertUpDown;
    if ( !DVARBOOL_vehHelicopterInvertUpDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterInvertUpDown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled )
    {
      v8 = -outMove[2];
      goto LABEL_44;
    }
  }
}

/*
==============
GVehiclesSP::GetVehicleSubPlayerMove
==============
*/
void GVehiclesSP::GetVehicleSubPlayerMove(GVehiclesSP *this, const usercmd_s *cmd, char *move)
{
  const dvar_t *v5; 
  int integer; 
  int v7; 
  char forwardmove; 
  unsigned __int64 buttons; 
  bool v10; 
  unsigned __int64 v11; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 1055, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( !move && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 1056, ASSERT_TYPE_ASSERT, "( move )", (const char *)&queryFormat, "move") )
    __debugbreak();
  v5 = DVARINT_vehSubmarineControls;
  if ( !DVARINT_vehSubmarineControls && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineControls") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  integer = v5->current.integer;
  if ( integer )
  {
    v7 = integer - 1;
    if ( !v7 )
    {
      *move = cmd->forwardmove;
      move[1] = cmd->rightmove;
      move[2] = cmd->upmove;
      buttons = cmd->buttons;
      if ( (cmd->buttons & 0x1000) != 0 )
      {
        move[3] = 127;
        buttons = cmd->buttons;
      }
      v10 = (buttons & 0x2000) == 0;
      goto LABEL_21;
    }
    if ( v7 != 1 )
      return;
    *move = cmd->pitchmove;
    move[1] = -cmd->yawmove;
    forwardmove = cmd->forwardmove;
  }
  else
  {
    *move = cmd->forwardmove;
    move[1] = cmd->rightmove;
    forwardmove = cmd->upmove;
  }
  move[2] = forwardmove;
  v11 = cmd->buttons;
  if ( (cmd->buttons & 0x2000) != 0 )
  {
    move[3] = 127;
    v11 = cmd->buttons;
  }
  v10 = (v11 & 0x200) == 0;
LABEL_21:
  if ( !v10 )
    move[3] -= 127;
}

/*
==============
GVehiclesSP::GetVehicleTankPlayerThrottle
==============
*/
float GVehiclesSP::GetVehicleTankPlayerThrottle(GVehiclesSP *this, const usercmd_s *cmd)
{
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 1107, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  return (float)cmd->upmove * 0.0078740157;
}

/*
==============
GVehiclesSP::GetVehicleTurretTrace
==============
*/
void GVehiclesSP::GetVehicleTurretTrace(GVehiclesSP *this, const gentity_s *vehicleEnt, const gentity_s *owner, vec3_t *outOrigin, vec3_t *outDirection, int *outTurretEnt)
{
  Vehicle *vehicle; 
  gclient_s *client; 
  const VehicleDef *ServerDef; 
  const dvar_t *v12; 

  if ( !vehicleEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 1115, ASSERT_TYPE_ASSERT, "( vehicleEnt )", (const char *)&queryFormat, "vehicleEnt") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 1116, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !outTurretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 1117, ASSERT_TYPE_ASSERT, "( outTurretEnt )", (const char *)&queryFormat, "outTurretEnt") )
    __debugbreak();
  vehicle = vehicleEnt->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 1120, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  client = owner->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 1123, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( EntHandle::isDefined(&vehicleEnt->remoteControlledOwner) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 1128, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL )") )
      __debugbreak();
    G_Utils_DObjGetWorldBoneIndexPos(vehicleEnt, vehicle->boneIndex.player, outOrigin);
    AngleVectors(&vehicleEnt->r.currentAngles, outDirection, NULL, NULL);
    *outTurretEnt = vehicleEnt->s.number;
  }
  else
  {
    ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
    if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 1136, ASSERT_TYPE_ASSERT, "( vehDef )", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    G_Client_GetViewOrigin(&client->ps, outOrigin);
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu) )
      goto LABEL_31;
    v12 = DVARBOOL_vehHelicopterHeadSwayDontSwayTheTurret;
    if ( !DVARBOOL_vehHelicopterHeadSwayDontSwayTheTurret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterHeadSwayDontSwayTheTurret") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled && ServerDef->type == VEH_HELICOPTER )
      AngleVectors(&vehicleEnt->r.currentAngles, outDirection, NULL, NULL);
    else
LABEL_31:
      G_Client_GetViewDirection(owner, outDirection, NULL, NULL);
    *outTurretEnt = owner->s.number;
  }
}

/*
==============
GVehiclesSP::GetVehicleViewlockAngles
==============
*/
void GVehiclesSP::GetVehicleViewlockAngles(GVehiclesSP *this, const gentity_s *playerEnt, const VehicleDef *vehDef, vec3_t *outAngles)
{
  const playerState_s *EntityPlayerStateConst; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 945, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(playerEnt);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 948, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&EntityPlayerStateConst->eFlags, GameModeFlagValues::ms_spValue, 0x1Cu) && vehDef->type != VEH_HELICOPTER )
    outAngles->v[1] = EntityPlayerStateConst->viewangles.v[1];
}

/*
==============
GVehiclesSP::ResetMouseSensitivity
==============
*/
void GVehiclesSP::ResetMouseSensitivity(GVehiclesSP *this)
{
  const dvar_t *v1; 

  v1 = DVARFLT_m_vehMouseSteerSensitivity;
  if ( !DVARFLT_m_vehMouseSteerSensitivity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v1, DVAR_SOURCE_INTERNAL);
}

/*
==============
GVehiclesSP::SetIgnoreDObjTransfer
==============
*/
void GVehiclesSP::SetIgnoreDObjTransfer(GVehiclesSP *this, DObj *obj, bool hasPlayerState)
{
  unsigned __int8 flags; 
  unsigned __int8 v6; 
  unsigned __int8 v7; 

  BGVehicles::SetIgnoreDObjTransfer(this, obj, hasPlayerState);
  flags = obj->flags;
  v6 = flags | 1;
  v7 = flags & 0xFE;
  if ( !hasPlayerState )
    v6 = v7;
  obj->flags = v6;
}

/*
==============
GVehiclesSP::SetPlayerVehicleType
==============
*/
void GVehiclesSP::SetPlayerVehicleType(GVehiclesSP *this, playerState_s *ps, VehicleType vehType)
{
  if ( ps )
  {
    ps->vehicleType = vehType;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 937, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    MEMORY[0x2C0] = vehType;
  }
}

/*
==============
GVehiclesSP::SetVehiclePosition
==============
*/
void GVehiclesSP::SetVehiclePosition(GVehiclesSP *this, gentity_s *ent, const vec3_t *origin, const vec3_t *angles, const vec3_t *velocity, const bool warpPhysics)
{
  Sys_ProfBeginNamedEvent(0xFFFF0000, "GVehiclesSP SetVehiclePosition");
  if ( !ent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 903, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
  }
  if ( ((ent->s.eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 904, ASSERT_TYPE_ASSERT, "( BG_IsVehicleEntity( &ent->s ) )", (const char *)&queryFormat, "BG_IsVehicleEntity( &ent->s )") )
    __debugbreak();
  G_SetOriginAndAngle(ent, origin, angles, warpPhysics, 0);
  ent->s.lerp.pos.trType = TR_INTERPOLATE;
  ent->s.lerp.apos.trType = TR_INTERPOLATE;
  ent->s.lerp.pos.trDelta = *velocity;
  SV_LinkEntity(ent);
  Sys_ProfEndNamedEvent();
}

/*
==============
GVehiclesSP::SetVehicleType
==============
*/
void GVehiclesSP::SetVehicleType(GVehiclesSP *this, gentity_s *ent, const VehicleDef *vehDef)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 924, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  ent->s.eType = ET_VEHICLE;
  ent->flags.m_flags[0] |= 0x80000240;
  ent->handler = 25;
}

/*
==============
GVehiclesSP::UpdateHelicopterAIMove
==============
*/
void GVehiclesSP::UpdateHelicopterAIMove(GVehiclesSP *this, Vehicle *veh)
{
  float pathSpeed; 
  gentity_s *ent; 
  float waitSpeed; 
  bool waitNodeHit; 

  G_VehicleHeli_PathFromVeh(&veh->heliPathPos, veh);
  if ( G_VehicleSP_UpdateAnimatedSubState(veh, NULL, &waitNodeHit) )
  {
    pathSpeed = veh->pathSpeed;
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 192, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    ent = veh->ent;
    G_Vehicle_CalcPhysVelFromPrevState(veh);
    if ( waitNodeHit && veh->waitNode > -1 )
      GScr_Notify(ent, scr_const.reached_wait_node, 0);
    if ( G_VehiclePath_IsEndOfPath(&veh->pathPos) )
      GScr_Notify(ent, scr_const.reached_end_node, 0);
    waitSpeed = veh->waitSpeed;
    if ( waitSpeed < 0.0 )
      goto LABEL_16;
    if ( pathSpeed > waitSpeed )
      goto LABEL_14;
    if ( waitSpeed <= veh->pathSpeed )
    {
LABEL_15:
      GScr_Notify(ent, scr_const.reached_wait_speed, 0);
      goto LABEL_16;
    }
    if ( pathSpeed >= waitSpeed )
    {
LABEL_14:
      if ( waitSpeed >= veh->pathSpeed )
        goto LABEL_15;
    }
LABEL_16:
    veh->heliPathPos.origin.v[0] = veh->phys.origin.v[0];
    veh->heliPathPos.origin.v[1] = veh->phys.origin.v[1];
    veh->heliPathPos.origin.v[2] = veh->phys.origin.v[2];
    veh->heliPathPos.angles.v[0] = veh->phys.angles.v[0];
    veh->heliPathPos.angles.v[1] = veh->phys.angles.v[1];
    veh->heliPathPos.angles.v[2] = veh->phys.angles.v[2];
    veh->heliPathPos.vel.v[0] = veh->phys.vel.v[0];
    veh->heliPathPos.vel.v[1] = veh->phys.vel.v[1];
    veh->heliPathPos.vel.v[2] = veh->phys.vel.v[2];
    veh->heliPathPos.rotVel.v[0] = veh->phys.rotVel.v[0];
    veh->heliPathPos.rotVel.v[1] = veh->phys.rotVel.v[1];
    veh->heliPathPos.rotVel.v[2] = veh->phys.rotVel.v[2];
    veh->heliPathPos.accel.v[0] = veh->phys.accel.v[0];
    veh->heliPathPos.accel.v[1] = veh->phys.accel.v[1];
    veh->heliPathPos.accel.v[2] = veh->phys.accel.v[2];
    veh->heliPathPos.speed = veh->speed;
    return;
  }
  G_VehicleHeli_UpdateAiMoveInternal(&veh->heliPathPos);
  veh->phys.origin.v[0] = veh->heliPathPos.origin.v[0];
  veh->phys.origin.v[1] = veh->heliPathPos.origin.v[1];
  veh->phys.origin.v[2] = veh->heliPathPos.origin.v[2];
  veh->phys.angles.v[0] = veh->heliPathPos.angles.v[0];
  veh->phys.angles.v[1] = veh->heliPathPos.angles.v[1];
  veh->phys.angles.v[2] = veh->heliPathPos.angles.v[2];
  veh->phys.vel.v[0] = veh->heliPathPos.vel.v[0];
  veh->phys.vel.v[1] = veh->heliPathPos.vel.v[1];
  veh->phys.vel.v[2] = veh->heliPathPos.vel.v[2];
  veh->phys.rotVel.v[0] = veh->heliPathPos.rotVel.v[0];
  veh->phys.rotVel.v[1] = veh->heliPathPos.rotVel.v[1];
  veh->phys.rotVel.v[2] = veh->heliPathPos.rotVel.v[2];
  veh->phys.accel.v[0] = veh->heliPathPos.accel.v[0];
  veh->phys.accel.v[1] = veh->heliPathPos.accel.v[1];
  veh->phys.accel.v[2] = veh->heliPathPos.accel.v[2];
  veh->speed = veh->heliPathPos.speed;
}

/*
==============
GVehiclesSP::UpdatePathConstrainedMove
==============
*/
void GVehiclesSP::UpdatePathConstrainedMove(GVehiclesSP *this, Vehicle *veh)
{
  __m256i v3; 
  __int64 v4; 
  float pathSpeed; 
  bool updated; 
  bool waitNodeHit; 
  VehiclePathPos nextVpp; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 827, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(veh->physicsVehicle) )
  {
    G_Vehicle_GetServerDef(veh->defIndex);
    if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 467, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    v3 = *(__m256i *)&veh->pathPos.switchNode[0].angles.z;
    v4 = *(_QWORD *)&veh->pathPos.switchNode[1].length;
    pathSpeed = veh->pathSpeed;
    *(__m256i *)&nextVpp.nodeIdx = *(__m256i *)&veh->pathPos.nodeIdx;
    *(__m256i *)nextVpp.angles.v = *(__m256i *)veh->pathPos.angles.v;
    *(__m256i *)&nextVpp.driftOffset.z = *(__m256i *)&veh->pathPos.driftOffset.z;
    *(__m256i *)nextVpp.switchNode[0].origin.v = *(__m256i *)veh->pathPos.switchNode[0].origin.v;
    *(__m256i *)&nextVpp.switchNode[0].angles.z = v3;
    *(__m256i *)&nextVpp.switchNode[1].index = *(__m256i *)&veh->pathPos.switchNode[1].index;
    *(_OWORD *)&nextVpp.switchNode[1].dir.z = *(_OWORD *)&veh->pathPos.switchNode[1].dir.z;
    *(_QWORD *)&nextVpp.switchNode[1].length = v4;
    *(_DWORD *)&nextVpp.switchNode[1].notifyIdx = *(_DWORD *)&veh->pathPos.switchNode[1].notifyIdx;
    waitNodeHit = 0;
    if ( nextVpp.nodeIdx >= 0 )
    {
      G_Vehicle_UpdatePathSpeed(veh);
      if ( veh->pathSpeed < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 478, ASSERT_TYPE_ASSERT, "(veh->pathSpeed >= 0.0f)", (const char *)&queryFormat, "veh->pathSpeed >= 0.0f") )
        __debugbreak();
      if ( G_VehicleSP_UpdateAnimatedSubState(veh, &nextVpp, &waitNodeHit) )
        updated = waitNodeHit;
      else
        updated = G_Vehicle_UpdatePathPosition(veh);
      G_Vehicle_DrawDebugLookahead(veh);
      G_Vehicle_CalcPhysVelFromPrevState(veh);
      G_Vehicle_UpdatePathScript(veh, pathSpeed, updated);
    }
  }
}

/*
==============
GVehiclesSP::UpdatePathFollowMove
==============
*/
void GVehiclesSP::UpdatePathFollowMove(GVehiclesSP *this, Vehicle *veh)
{
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 839, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  BGVehicles::PhysicsIsValid(veh->physicsVehicle);
}

/*
==============
GVehiclesSP::UpdateSpaceshipAnimscriptedMove
==============
*/
bool GVehiclesSP::UpdateSpaceshipAnimscriptedMove(GVehiclesSP *this, Vehicle *veh)
{
  gentity_s *ent; 
  bool result; 

  ent = veh->ent;
  ent->s.lerp.u.anonymous.data[1] &= ~0x80u;
  if ( !ent->scripted )
    return 0;
  G_Animscripted_Think(ent);
  veh->phys.origin.v[0] = ent->r.currentOrigin.v[0];
  veh->phys.origin.v[1] = ent->r.currentOrigin.v[1];
  veh->phys.origin.v[2] = ent->r.currentOrigin.v[2];
  veh->phys.angles.v[0] = ent->r.currentAngles.v[0];
  veh->phys.angles.v[1] = ent->r.currentAngles.v[1];
  veh->phys.angles.v[2] = ent->r.currentAngles.v[2];
  result = 1;
  ent->s.lerp.u.anonymous.data[1] |= 0x80u;
  return result;
}

/*
==============
GVehiclesSP::UpdateSubmarinePlayerMove
==============
*/
void GVehiclesSP::UpdateSubmarinePlayerMove(GVehiclesSP *this, Vehicle *veh)
{
  G_VehicleSubmarine_UpdatePlayerMove(veh);
}

/*
==============
GVehiclesSP::UpdateUGVPlayerMove
==============
*/
void GVehiclesSP::UpdateUGVPlayerMove(GVehiclesSP *this, Vehicle *veh)
{
  G_VehicleUGV_UpdatePlayerMove(veh);
}

