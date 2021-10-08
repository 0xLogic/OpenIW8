/*
==============
GVehiclesMP::GetVehicleBoatRockingScale
==============
*/

double __fastcall GVehiclesMP::GetVehicleBoatRockingScale(GVehiclesMP *this)
{
  double result; 

  *(float *)&result = ?GetVehicleBoatRockingScale@GVehiclesMP@@UEAAMXZ(this);
  return result;
}

/*
==============
GVehiclesMP::FinishVehicleDamage
==============
*/

void __fastcall GVehiclesMP::FinishVehicleDamage(GVehiclesMP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset)
{
  ?FinishVehicleDamage@GVehiclesMP@@UEAAXPEAUgentity_s@@PEBU2@0AEBTvec3_t@@2HHHAEBUWeapon@@_NW4hitLocation_t@@IW4scr_string_t@@H@Z(this, targ, inflictor, attacker, dir, point, damage, dFlags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset);
}

/*
==============
G_VehicleMP_ReadSaveGame
==============
*/

void __fastcall G_VehicleMP_ReadSaveGame(SaveGame *save)
{
  ?G_VehicleMP_ReadSaveGame@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
GVehiclesMP::SetVehiclePosition
==============
*/

void __fastcall GVehiclesMP::SetVehiclePosition(GVehiclesMP *this, gentity_s *ent, const vec3_t *origin, const vec3_t *angles, const vec3_t *velocity, const bool warpPhysics)
{
  ?SetVehiclePosition@GVehiclesMP@@UEAAXPEAUgentity_s@@AEBTvec3_t@@11_N@Z(this, ent, origin, angles, velocity, warpPhysics);
}

/*
==============
GVehiclesMP::FreeVehicle
==============
*/

void __fastcall GVehiclesMP::FreeVehicle(GVehiclesMP *this, gentity_s *ent)
{
  ?FreeVehicle@GVehiclesMP@@UEAAXPEAUgentity_s@@@Z(this, ent);
}

/*
==============
G_VehicleMP_UpdatePathMove_NonPhysics
==============
*/

void __fastcall G_VehicleMP_UpdatePathMove_NonPhysics(Vehicle *veh)
{
  ?G_VehicleMP_UpdatePathMove_NonPhysics@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
GVehiclesMP::GetVehicleViewlockAngles
==============
*/

void __fastcall GVehiclesMP::GetVehicleViewlockAngles(GVehiclesMP *this, const gentity_s *playerEnt, const VehicleDef *vehDef, vec3_t *outAngles)
{
  ?GetVehicleViewlockAngles@GVehiclesMP@@UEAAXPEBUgentity_s@@PEBUVehicleDef@@AEATvec3_t@@@Z(this, playerEnt, vehDef, outAngles);
}

/*
==============
G_VehicleMP_Think
==============
*/

void __fastcall G_VehicleMP_Think(gentity_s *pSelf)
{
  ?G_VehicleMP_Think@@YAXPEAUgentity_s@@@Z(pSelf);
}

/*
==============
GVehiclesMP::UpdateSubmarinePlayerMove
==============
*/

void __fastcall GVehiclesMP::UpdateSubmarinePlayerMove(GVehiclesMP *this, Vehicle *veh)
{
  ?UpdateSubmarinePlayerMove@GVehiclesMP@@UEAAXPEAUVehicle@@@Z(this, veh);
}

/*
==============
GVehiclesMP::SetVehicleType
==============
*/

void __fastcall GVehiclesMP::SetVehicleType(GVehiclesMP *this, gentity_s *ent, const VehicleDef *vehDef)
{
  ?SetVehicleType@GVehiclesMP@@UEAAXPEAUgentity_s@@PEBUVehicleDef@@@Z(this, ent, vehDef);
}

/*
==============
GVehiclesMP::UpdateHelicopterAIMove
==============
*/

void __fastcall GVehiclesMP::UpdateHelicopterAIMove(GVehiclesMP *this, Vehicle *veh)
{
  ?UpdateHelicopterAIMove@GVehiclesMP@@UEAAXPEAUVehicle@@@Z(this, veh);
}

/*
==============
GVehiclesMP::UpdateUGVPlayerMove
==============
*/

void __fastcall GVehiclesMP::UpdateUGVPlayerMove(GVehiclesMP *this, Vehicle *veh)
{
  ?UpdateUGVPlayerMove@GVehiclesMP@@UEAAXPEAUVehicle@@@Z(this, veh);
}

/*
==============
GVehiclesMP::GetVehicleTurretTrace
==============
*/

void __fastcall GVehiclesMP::GetVehicleTurretTrace(GVehiclesMP *this, const gentity_s *vehicleEnt, const gentity_s *owner, vec3_t *outOrigin, vec3_t *outDirection, int *outTurretEnt)
{
  ?GetVehicleTurretTrace@GVehiclesMP@@UEAAXPEBUgentity_s@@0AEATvec3_t@@1PEAH@Z(this, vehicleEnt, owner, outOrigin, outDirection, outTurretEnt);
}

/*
==============
GVehiclesMP::ResetMouseSensitivity
==============
*/

void __fastcall GVehiclesMP::ResetMouseSensitivity(GVehiclesMP *this)
{
  ?ResetMouseSensitivity@GVehiclesMP@@UEAAXXZ(this);
}

/*
==============
GVehiclesMP::UpdatePathFollowMove
==============
*/

void __fastcall GVehiclesMP::UpdatePathFollowMove(GVehiclesMP *this, Vehicle *veh)
{
  ?UpdatePathFollowMove@GVehiclesMP@@UEAAXPEAUVehicle@@@Z(this, veh);
}

/*
==============
GVehiclesMP::SetPlayerVehicleType
==============
*/

void __fastcall GVehiclesMP::SetPlayerVehicleType(GVehiclesMP *this, playerState_s *ps, VehicleType vehType)
{
  ?SetPlayerVehicleType@GVehiclesMP@@UEAAXPEAUplayerState_s@@W4VehicleType@@@Z(this, ps, vehType);
}

/*
==============
GVehiclesMP::UpdatePathConstrainedMove
==============
*/

void __fastcall GVehiclesMP::UpdatePathConstrainedMove(GVehiclesMP *this, Vehicle *veh)
{
  ?UpdatePathConstrainedMove@GVehiclesMP@@UEAAXPEAUVehicle@@@Z(this, veh);
}

/*
==============
G_VehicleMP_WriteSaveGame
==============
*/

void __fastcall G_VehicleMP_WriteSaveGame(MemoryFile *memFile)
{
  ?G_VehicleMP_WriteSaveGame@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
GVehiclesMP::GetVehicleTankPlayerThrottle
==============
*/

double __fastcall GVehiclesMP::GetVehicleTankPlayerThrottle(GVehiclesMP *this, const usercmd_s *cmd)
{
  double result; 

  *(float *)&result = ?GetVehicleTankPlayerThrottle@GVehiclesMP@@UEAAMPEBUusercmd_s@@@Z(this, cmd);
  return result;
}

/*
==============
GVehiclesMP::GetVehicleHeliPlayerMove
==============
*/

void __fastcall GVehiclesMP::GetVehicleHeliPlayerMove(GVehiclesMP *this, const Vehicle *veh, gentity_s *playerEnt, char *outMove)
{
  ?GetVehicleHeliPlayerMove@GVehiclesMP@@UEAAXPEBUVehicle@@PEAUgentity_s@@QEAD@Z(this, veh, playerEnt, outMove);
}

/*
==============
GVehiclesMP::GetVehicleSubPlayerMove
==============
*/

void __fastcall GVehiclesMP::GetVehicleSubPlayerMove(GVehiclesMP *this, const usercmd_s *cmd, char *move)
{
  ?GetVehicleSubPlayerMove@GVehiclesMP@@UEAAXPEBUusercmd_s@@QEAD@Z(this, cmd, move);
}

/*
==============
GVehiclesMP::FinishVehicleDamage
==============
*/
void GVehiclesMP::FinishVehicleDamage(GVehiclesMP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset)
{
  scrContext_t *v18; 
  int v19; 
  scr_string_t v20; 
  scr_string_t HitLocationString; 
  unsigned int v22; 

  v18 = ScriptContext_Server();
  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 423, ASSERT_TYPE_ASSERT, "( targ )", (const char *)&queryFormat, "targ") )
    __debugbreak();
  if ( !targ->vehicle && !G_Vehicle_IsSuspended(targ) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 424, ASSERT_TYPE_ASSERT, "( targ->vehicle || G_Vehicle_IsSuspended( targ ) )", (const char *)&queryFormat, "targ->vehicle || G_Vehicle_IsSuspended( targ )") )
    __debugbreak();
  if ( !inflictor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 425, ASSERT_TYPE_ASSERT, "( inflictor )", (const char *)&queryFormat, "inflictor") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 426, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  v19 = G_Combat_DamageNotify_BuildId(attacker);
  Scr_AddInt(v18, v19);
  v20 = partName;
  if ( !partName )
    v20 = scr_const._;
  Scr_AddConstString(v18, v20);
  Scr_AddInt(v18, modelIndex);
  Scr_AddInt(v18, timeOffset);
  HitLocationString = G_Combat_GetHitLocationString(hitLoc);
  Scr_AddConstString(v18, HitLocationString);
  Scr_AddVector(v18, dir->v);
  Scr_AddVector(v18, point->v);
  GScr_Weapon_AddParam(v18, r_weapon, isAlternate);
  if ( (unsigned int)mod > 0x18 )
    Scr_AddString(v18, "badMOD");
  else
    Scr_AddConstString(v18, *g_combat_modNames[mod]);
  Scr_AddInt(v18, dFlags);
  Scr_AddInt(v18, damage);
  GScr_AddEntityAllowUndefined(attacker);
  GScr_AddEntityAllowUndefined(inflictor);
  if ( (_BYTE)GameScriptData::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_data_mp.h", 82, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
    __debugbreak();
  if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  v22 = GScr_ExecEntThread(targ, GameScriptData::ms_gScriptData[2].bt_getfunction, 0xDu);
  Scr_FreeThread(v18, v22);
}

/*
==============
GVehiclesMP::FreeVehicle
==============
*/
void GVehiclesMP::FreeVehicle(GVehiclesMP *this, gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 290, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 291, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  EntHandle::setEnt(&ent->vehicle->droneTarget, NULL);
}

/*
==============
G_VehicleMP_ReadSaveGame
==============
*/
void G_VehicleMP_ReadSaveGame(SaveGame *save)
{
  int i; 
  Vehicle *v3; 
  unsigned __int8 *v4; 
  int buffer; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 192, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  for ( i = 0; i < 128; ++i )
  {
    v3 = G_Vehicle_Get(i);
    buffer = 0;
    v4 = (unsigned __int8 *)v3;
    SaveMemory_LoadRead(&buffer, 4, save);
    if ( buffer )
    {
      G_SaveFieldMP_ReadStruct(MP_VEHICLE_SAVE_FIELDS, v4, 2248, save);
      G_Vehicle_ReadVehiclePhysics(save, (Vehicle *)v4);
    }
  }
}

/*
==============
G_VehicleMP_Think
==============
*/
void G_VehicleMP_Think(gentity_s *pSelf)
{
  gentity_s *Player; 
  gentity_s *v6; 
  bool v7; 
  gclient_s *client; 
  unsigned int number; 
  bool NoBroadphaseQueriesAllowed; 
  double v17; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 53, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  _RDI = pSelf->vehicle;
  _RBP = G_Vehicle_GetServerDef(_RDI->defIndex);
  Player = G_Vehicle_GetPlayer(pSelf);
  v6 = Player;
  v7 = 0;
  if ( Player && (client = Player->client, number = pSelf->s.number, v7 = client->ps.vehicleState.entity < number, client->ps.vehicleState.entity == number) )
  {
    G_Vehicle_UpdateCameraState(pSelf->vehicle);
    NoBroadphaseQueriesAllowed = Physics_GetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_FIRST);
    if ( NoBroadphaseQueriesAllowed )
    {
      Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_FIRST, 0);
      Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_SERVER_DETAIL, 0);
    }
    G_Vehicle_TouchEntities(pSelf);
    if ( NoBroadphaseQueriesAllowed )
    {
      Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_FIRST, 1);
      Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+588h]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm1, xmm0
    }
    if ( v7 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm1, xmm1
        vmovsd  [rsp+48h+var_18], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 83, ASSERT_TYPE_ASSERT, "( ( vehicle->speed >= 0.0f ) )", "%s\n\t( vehicle->speed ) = %g", "( vehicle->speed >= 0.0f )", v17) )
        __debugbreak();
    }
    pSelf->s.lerp.u.anonymous.data[1] &= ~2u;
    if ( !BGVehicles::PhysicsIsValid(_RDI->physicsVehicle) || _RDI->ent->scripted )
    {
      if ( _RDI->drivingState == VEH_DRIVE_PATH_CONSTRAINED )
        _RDI->speed = _RDI->pathSpeed;
    }
    else
    {
      G_Vehicle_UpdatePhysics(pSelf, v6);
    }
    G_Vehicle_UpdatePosition(pSelf, v6);
    G_Vehicle_DrawDebugOrigin(_RBP, &_RDI->phys);
    _RDI->turret.barrelBlocked = 0;
    G_Vehicle_UpdatePlayerControlledWeapon(pSelf);
    G_Vehicle_UpdateAim(pSelf);
    G_Vehicle_UpdateBody(_RDI);
    G_Vehicle_UpdateSteering(pSelf);
    G_Vehicle_UpdateSounds(pSelf);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+2E4h]
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si eax, xmm1
    }
    pSelf->s.time2 = _EAX;
  }
  pSelf->nextthink = G_Vehicle_GetNextThinkTime();
}

/*
==============
G_VehicleMP_UpdatePathMove_NonPhysics
==============
*/
void G_VehicleMP_UpdatePathMove_NonPhysics(Vehicle *veh)
{
  __int64 v6; 
  char v15; 
  char v16; 
  bool updated; 
  __int16 v20; 
  __int64 v21; 
  int v22; 

  __asm { vmovaps [rsp+128h+var_18], xmm6 }
  _RDI = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 124, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  G_Vehicle_GetServerDef(_RDI->defIndex);
  if ( !_RDI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 130, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+10h]
    vmovups ymm1, ymmword ptr [rdi+90h]
  }
  v6 = *(_QWORD *)&_RDI->pathPos.switchNode[1].length;
  _RDX = &v20;
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+58Ch]
    vmovups ymmword ptr [rdx], ymm0
    vmovups ymm0, ymmword ptr [rdi+30h]
    vmovups ymmword ptr [rdx+20h], ymm0
    vmovups ymm0, ymmword ptr [rdi+50h]
    vmovups ymmword ptr [rdx+40h], ymm0
    vmovups ymm0, ymmword ptr [rdi+70h]
    vmovups ymmword ptr [rdx+60h], ymm0
    vmovups ymmword ptr [rdx+80h], ymm1
    vmovups ymm1, ymmword ptr [rdi+0B0h]
    vmovups ymmword ptr [rdx+0A0h], ymm1
    vmovups xmm1, xmmword ptr [rdi+0D0h]
    vmovups xmmword ptr [rdx+0C0h], xmm1
  }
  v21 = v6;
  v22 = *(_DWORD *)&_RDI->pathPos.switchNode[1].notifyIdx;
  if ( v20 >= 0 )
  {
    G_Vehicle_UpdatePathSpeed(_RDI);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdi+58Ch]
    }
    if ( !(v15 | v16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 141, ASSERT_TYPE_ASSERT, "(veh->pathSpeed >= 0.0f)", (const char *)&queryFormat, "veh->pathSpeed >= 0.0f") )
      __debugbreak();
    updated = G_Vehicle_UpdatePathPosition(_RDI);
    G_Vehicle_DrawDebugLookahead(_RDI);
    G_Vehicle_CalcPhysVelFromPrevState(_RDI);
    __asm { vmovaps xmm1, xmm6; prevSpeed }
    G_Vehicle_UpdatePathScript(_RDI, *(float *)&_XMM1, updated);
  }
  __asm { vmovaps xmm6, [rsp+128h+var_18] }
}

/*
==============
G_VehicleMP_WriteSaveGame
==============
*/
void G_VehicleMP_WriteSaveGame(MemoryFile *memFile)
{
  int i; 
  Vehicle *v3; 
  BOOL p[4]; 
  unsigned __int8 dest[1456]; 
  VehicleTurret v6; 

  VehicleTurret::VehicleTurret(&v6);
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 163, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  for ( i = 0; i < 128; ++i )
  {
    v3 = G_Vehicle_Get(i);
    memcpy_0(dest, v3, 0x8C8ui64);
    p[0] = v3->ent != NULL;
    MemFile_WriteData(memFile, 4ui64, p);
    if ( p[0] )
    {
      G_SaveFieldMP_WriteStruct(MP_VEHICLE_SAVE_FIELDS, (const unsigned __int8 *)v3, dest, 2248, memFile);
      G_Vehicle_WriteVehiclePhysics(memFile, v3);
    }
  }
}

/*
==============
GVehiclesMP::GetVehicleBoatRockingScale
==============
*/
float GVehiclesMP::GetVehicleBoatRockingScale(GVehiclesMP *this)
{
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

/*
==============
GVehiclesMP::GetVehicleHeliPlayerMove
==============
*/
void GVehiclesMP::GetVehicleHeliPlayerMove(GVehiclesMP *this, const Vehicle *veh, gentity_s *playerEnt, char *outMove)
{
  usercmd_s outUserCmd; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 352, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 353, ASSERT_TYPE_ASSERT, "( veh->ent )", (const char *)&queryFormat, "veh->ent") )
    __debugbreak();
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 354, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 355, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL )") )
    __debugbreak();
  G_Utils_GetClientCommonUserCommand(playerEnt->client, &outUserCmd);
  if ( EntHandle::isDefined(&veh->ent->remoteControlledOwner) )
  {
    *outMove = outUserCmd.remoteControlMove[0];
    outMove[1] = outUserCmd.remoteControlMove[1];
    outMove[2] = outUserCmd.remoteControlMove[2];
  }
}

/*
==============
GVehiclesMP::GetVehicleSubPlayerMove
==============
*/
void GVehiclesMP::GetVehicleSubPlayerMove(GVehiclesMP *this, const usercmd_s *cmd, char *move)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 370, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Submarine vehicles are not supported in MP") )
    __debugbreak();
}

/*
==============
GVehiclesMP::GetVehicleTankPlayerThrottle
==============
*/

float __fastcall GVehiclesMP::GetVehicleTankPlayerThrottle(GVehiclesMP *this, const usercmd_s *cmd, double _XMM2_8)
{
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 376, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  _RAX = cmd->buttons & 0x1000000;
  __asm { vmovq   xmm0, rax }
  _RCX = 0i64;
  __asm
  {
    vmovq   xmm1, rcx
    vpcmpeqq xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm2, xmm2, xmm2
    vblendvps xmm0, xmm1, xmm2, xmm3
  }
  return *(float *)&_XMM0;
}

/*
==============
GVehiclesMP::GetVehicleTurretTrace
==============
*/
void GVehiclesMP::GetVehicleTurretTrace(GVehiclesMP *this, const gentity_s *vehicleEnt, const gentity_s *owner, vec3_t *outOrigin, vec3_t *outDirection, int *outTurretEnt)
{
  Vehicle *vehicle; 
  gclient_s *client; 
  int number; 

  if ( !vehicleEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 384, ASSERT_TYPE_ASSERT, "( vehicleEnt )", (const char *)&queryFormat, "vehicleEnt") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 385, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !outTurretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 386, ASSERT_TYPE_ASSERT, "( outTurretEnt )", (const char *)&queryFormat, "outTurretEnt") )
    __debugbreak();
  vehicle = vehicleEnt->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 389, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  client = owner->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 392, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( EntHandle::isDefined(&vehicleEnt->remoteControlledOwner) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 396, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL )") )
      __debugbreak();
    G_Utils_DObjGetWorldBoneIndexPos(vehicleEnt, vehicle->boneIndex.player, outOrigin);
    AngleVectors(&vehicleEnt->r.currentAngles, outDirection, NULL, NULL);
    number = vehicleEnt->s.number;
  }
  else
  {
    G_Client_GetViewOrigin(&client->ps, outOrigin);
    G_Client_GetViewDirection(owner, outDirection, NULL, NULL);
    number = owner->s.number;
  }
  *outTurretEnt = number;
}

/*
==============
GVehiclesMP::GetVehicleViewlockAngles
==============
*/
void GVehiclesMP::GetVehicleViewlockAngles(GVehiclesMP *this, const gentity_s *playerEnt, const VehicleDef *vehDef, vec3_t *outAngles)
{
  ;
}

/*
==============
GVehiclesMP::ResetMouseSensitivity
==============
*/
void GVehiclesMP::ResetMouseSensitivity(GVehiclesMP *this)
{
  ;
}

/*
==============
GVehiclesMP::SetPlayerVehicleType
==============
*/
void GVehiclesMP::SetPlayerVehicleType(GVehiclesMP *this, playerState_s *ps, VehicleType vehType)
{
  ;
}

/*
==============
GVehiclesMP::SetVehiclePosition
==============
*/
void GVehiclesMP::SetVehiclePosition(GVehiclesMP *this, gentity_s *ent, const vec3_t *origin, const vec3_t *angles, const vec3_t *velocity, const bool warpPhysics)
{
  if ( !ent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 300, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
  }
  if ( ((ent->s.eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 301, ASSERT_TYPE_ASSERT, "( BG_IsVehicleEntity( &ent->s ) )", (const char *)&queryFormat, "BG_IsVehicleEntity( &ent->s )") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "GVehiclesMP SetVehiclePosition");
  G_SetOriginAndAngle(ent, origin, angles, warpPhysics, 0);
  ent->s.lerp.pos.trType = TR_INTERPOLATE;
  ent->s.lerp.apos.trType = TR_INTERPOLATE;
  SV_LinkEntity(ent);
  Sys_ProfEndNamedEvent();
}

/*
==============
GVehiclesMP::SetVehicleType
==============
*/
void GVehiclesMP::SetVehicleType(GVehiclesMP *this, gentity_s *ent, const VehicleDef *vehDef)
{
  entityType_s v5; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 316, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 317, ASSERT_TYPE_ASSERT, "( vehDef )", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  ent->flags.m_flags[0] |= 0x80000000;
  v5 = ET_HELICOPTER;
  if ( vehDef->type != VEH_HELICOPTER )
    v5 = ET_VEHICLE;
  ent->s.eType = v5;
  ent->handler = 24;
}

/*
==============
GVehiclesMP::UpdateHelicopterAIMove
==============
*/
void GVehiclesMP::UpdateHelicopterAIMove(GVehiclesMP *this, Vehicle *veh)
{
  unsigned int defIndex; 
  float s; 
  float c; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RDI = veh;
  G_VehicleHeli_PathFromVeh(&veh->heliPathPos, veh);
  if ( _RDI->useDroneLogic )
    G_VehicleHeliMP_DroneUpdateMoveInternal(_RDI, &_RDI->heliPathPos);
  else
    G_VehicleHeli_UpdateAiMoveInternal(&_RDI->heliPathPos);
  _RDI->phys.origin.v[0] = _RDI->heliPathPos.origin.v[0];
  _RDI->phys.origin.v[1] = _RDI->heliPathPos.origin.v[1];
  _RDI->phys.origin.v[2] = _RDI->heliPathPos.origin.v[2];
  _RDI->phys.angles.v[0] = _RDI->heliPathPos.angles.v[0];
  _RDI->phys.angles.v[1] = _RDI->heliPathPos.angles.v[1];
  _RDI->phys.angles.v[2] = _RDI->heliPathPos.angles.v[2];
  _RDI->phys.vel.v[0] = _RDI->heliPathPos.vel.v[0];
  _RDI->phys.vel.v[1] = _RDI->heliPathPos.vel.v[1];
  _RDI->phys.vel.v[2] = _RDI->heliPathPos.vel.v[2];
  _RDI->phys.rotVel.v[0] = _RDI->heliPathPos.rotVel.v[0];
  _RDI->phys.rotVel.v[1] = _RDI->heliPathPos.rotVel.v[1];
  _RDI->phys.rotVel.v[2] = _RDI->heliPathPos.rotVel.v[2];
  _RDI->phys.accel.v[0] = _RDI->heliPathPos.accel.v[0];
  _RDI->phys.accel.v[1] = _RDI->heliPathPos.accel.v[1];
  _RDI->phys.accel.v[2] = _RDI->heliPathPos.accel.v[2];
  defIndex = _RDI->defIndex;
  _RDI->speed = _RDI->heliPathPos.speed;
  G_Vehicle_GetServerDef(defIndex);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+10Ch]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+108h]
    vsubss  xmm1, xmm0, dword ptr [rbx+604h]
    vdivss  xmm6, xmm1, dword ptr [rbx+650h]
    vmovss  xmm2, dword ptr [rdi+110h]
    vdivss  xmm5, xmm2, dword ptr [rbx+654h]
    vmulss  xmm0, xmm6, [rsp+38h+c]
    vmulss  xmm1, xmm5, [rsp+38h+s]
    vmulss  xmm2, xmm6, [rsp+38h+s]
    vmovaps xmm6, [rsp+38h+var_18]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm5, [rsp+38h+c]
    vmovss  dword ptr [rdi+26Ch], xmm1
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rdi+270h], xmm1
  }
}

/*
==============
GVehiclesMP::UpdatePathConstrainedMove
==============
*/
void GVehiclesMP::UpdatePathConstrainedMove(GVehiclesMP *this, Vehicle *veh)
{
  unsigned int defIndex; 
  __int64 v8; 
  char v17; 
  char v18; 
  bool updated; 
  __int16 v22; 
  __int64 v23; 
  int v24; 

  _RDI = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 216, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(_RDI->physicsVehicle) )
  {
    defIndex = _RDI->defIndex;
    __asm { vmovaps [rsp+128h+var_18], xmm6 }
    G_Vehicle_GetServerDef(defIndex);
    if ( !_RDI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 130, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+10h]
      vmovups ymm1, ymmword ptr [rdi+90h]
    }
    v8 = *(_QWORD *)&_RDI->pathPos.switchNode[1].length;
    _RDX = &v22;
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+58Ch]
      vmovups ymmword ptr [rdx], ymm0
      vmovups ymm0, ymmword ptr [rdi+30h]
      vmovups ymmword ptr [rdx+20h], ymm0
      vmovups ymm0, ymmword ptr [rdi+50h]
      vmovups ymmword ptr [rdx+40h], ymm0
      vmovups ymm0, ymmword ptr [rdi+70h]
      vmovups ymmword ptr [rdx+60h], ymm0
      vmovups ymmword ptr [rdx+80h], ymm1
      vmovups ymm1, ymmword ptr [rdi+0B0h]
      vmovups ymmword ptr [rdx+0A0h], ymm1
      vmovups xmm1, xmmword ptr [rdi+0D0h]
      vmovups xmmword ptr [rdx+0C0h], xmm1
    }
    v23 = v8;
    v24 = *(_DWORD *)&_RDI->pathPos.switchNode[1].notifyIdx;
    if ( v22 >= 0 )
    {
      G_Vehicle_UpdatePathSpeed(_RDI);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [rdi+58Ch]
      }
      if ( !(v17 | v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 141, ASSERT_TYPE_ASSERT, "(veh->pathSpeed >= 0.0f)", (const char *)&queryFormat, "veh->pathSpeed >= 0.0f") )
        __debugbreak();
      updated = G_Vehicle_UpdatePathPosition(_RDI);
      G_Vehicle_DrawDebugLookahead(_RDI);
      G_Vehicle_CalcPhysVelFromPrevState(_RDI);
      __asm { vmovaps xmm1, xmm6; prevSpeed }
      G_Vehicle_UpdatePathScript(_RDI, *(float *)&_XMM1, updated);
    }
    __asm { vmovaps xmm6, [rsp+128h+var_18] }
  }
}

/*
==============
GVehiclesMP::UpdatePathFollowMove
==============
*/
void GVehiclesMP::UpdatePathFollowMove(GVehiclesMP *this, Vehicle *veh)
{
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 228, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(veh->physicsVehicle) )
    G_Vehicle_UpdatePathFollowMove_Physics(veh);
}

/*
==============
GVehiclesMP::UpdateSubmarinePlayerMove
==============
*/
void GVehiclesMP::UpdateSubmarinePlayerMove(GVehiclesMP *this, Vehicle *veh)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 278, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Submarine vehicles are not supported in MP") )
    __debugbreak();
}

/*
==============
GVehiclesMP::UpdateUGVPlayerMove
==============
*/
void GVehiclesMP::UpdateUGVPlayerMove(GVehiclesMP *this, Vehicle *veh)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_mp.cpp", 284, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "UGV vehicles are not supported in MP") )
    __debugbreak();
}

