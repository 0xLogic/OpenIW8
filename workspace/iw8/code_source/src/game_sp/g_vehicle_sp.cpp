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
  const VehicleDef *ServerDef; 
  const dvar_t *v25; 
  const VehicleDef *v26; 
  int v28; 
  float *v29; 
  bool v30; 
  char v46; 
  bool v55; 
  const vec4_t *v67; 
  int number; 
  __int64 v81; 
  __int64 v82; 
  const dvar_t *v83; 
  const char *v108; 
  const char *v131; 
  const char *v156; 
  const char *v166; 
  const char *v176; 
  const char *v182; 
  const char *v184; 
  const char *v194; 
  const char *v204; 
  const char *v214; 
  const char *v224; 
  const char *v237; 
  char *fmt; 
  __int64 duration; 
  __int64 v249; 
  vec3_t center; 
  vec3_t end; 
  vec3_t start; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 
  char v258; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _R15 = self;
  misc_EntInfo(self, source);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 577, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r15+130h]
    vsubss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [r15+134h]
    vsubss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [r15+138h]
    vsubss  xmm4, xmm0, dword ptr [rbx+8]
  }
  _RBX = DVARFLT_g_entinfo_maxdist;
  __asm
  {
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm8, xmm2, xmm2
  }
  if ( !DVARFLT_g_entinfo_maxdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_maxdist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm7, dword ptr [rbx+28h]
  }
  if ( !v30 )
    goto LABEL_12;
  _RBX = DVARFLT_g_entinfo_maxdist;
  if ( !DVARFLT_g_entinfo_maxdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_maxdist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm8, dword ptr [rbx+28h] }
  if ( v30 || v55 )
  {
LABEL_12:
    _RBX = _R15->vehicle;
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 584, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
      __debugbreak();
    ServerDef = G_Vehicle_GetServerDef(_RBX->defIndex);
    v25 = DVARINT_bg_entinfo;
    v26 = ServerDef;
    if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
      __debugbreak();
    __asm { vmovaps xmmword ptr [rsp+110h+var_48+8], xmm6 }
    Dvar_CheckFrontendServerThread(v25);
    if ( v25->current.integer == 3 )
      goto LABEL_52;
    AngleVectors(&_R15->r.currentAngles, &forward, &right, &up);
    __asm { vmovss  xmm6, cs:__real@40a00000 }
    v28 = 0;
    v29 = &forward.v[2];
    v30 = 1;
    do
    {
      if ( !v30 )
      {
        LODWORD(v249) = 3;
        LODWORD(duration) = v28;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v249) )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [r14-8]
        vaddss  xmm2, xmm1, dword ptr [r15+130h]
        vmulss  xmm1, xmm6, dword ptr [r14-4]
        vmovss  dword ptr [rbp+57h+start], xmm2
        vaddss  xmm2, xmm1, dword ptr [r15+134h]
        vmulss  xmm1, xmm6, dword ptr [r14]
        vaddss  xmm1, xmm1, dword ptr [r15+138h]
        vmovss  dword ptr [rbp+57h+start+8], xmm1
        vmovss  dword ptr [rbp+57h+start+4], xmm2
      }
      if ( (unsigned int)v28 >= 3 )
      {
        LODWORD(v249) = 3;
        LODWORD(duration) = v28;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v249) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm1, dword ptr [r15+130h]
        vmulss  xmm3, xmm6, dword ptr [r14-4]
        vmulss  xmm2, xmm6, dword ptr [r14-8]
        vsubss  xmm2, xmm1, xmm2
        vmovss  xmm1, dword ptr [r15+134h]
        vmovss  dword ptr [rbp+57h+end], xmm2
        vsubss  xmm2, xmm1, xmm3
        vmulss  xmm3, xmm6, dword ptr [r14]
        vmovss  xmm1, dword ptr [r15+138h]
        vmovss  dword ptr [rbp+57h+end+4], xmm2
        vsubss  xmm2, xmm1, xmm3
        vmovss  dword ptr [rbp+57h+end+8], xmm2
      }
      G_DebugLine(&start, &end, &colorWhite, 0);
      ++v28;
      v29 += 3;
      v30 = (unsigned int)v28 < 3;
    }
    while ( v28 < 3 );
    v46 = v26->type - 4;
    if ( (v46 & 0xFB) != 0 )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+6ACh]
        vmovss  xmm0, dword ptr [rbx+6A8h]
        vmovss  xmm4, dword ptr [rbx+6A4h]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm0, xmm0
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vcomiss xmm3, xmm7
      }
      if ( (v46 & 0xFB) != 0 )
      {
        v55 = _RBX->drivingState == VEH_DRIVE_AI;
        __asm
        {
          vmovss  dword ptr [rbp+57h+center], xmm4
          vmovss  xmm0, dword ptr [rbx+6A8h]
          vmovss  dword ptr [rbp+57h+center+4], xmm0
          vmovss  xmm1, dword ptr [rbx+6ACh]
        }
LABEL_32:
        v67 = &colorBlack;
        if ( v55 )
          v67 = &colorMagenta;
        __asm { vmovss  dword ptr [rbp+57h+center+8], xmm1 }
        G_DebugLine(&_R15->r.currentOrigin, &center, v67, 0);
        __asm { vmovss  xmm1, cs:__real@42800000; radius }
        G_DebugCircle(&center, *(float *)&_XMM1, v67, 0, 1, 0);
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+340h]
        vmovss  xmm0, dword ptr [rbx+33Ch]
        vmovss  xmm4, dword ptr [rbx+338h]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm0, xmm0
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vcomiss xmm3, xmm7
      }
      if ( (v46 & 0xFB) != 0 )
      {
        v55 = _RBX->drivingState == VEH_DRIVE_AI;
        __asm
        {
          vmovss  dword ptr [rbp+57h+center], xmm4
          vmovss  xmm0, dword ptr [rbx+33Ch]
          vmovss  dword ptr [rbp+57h+center+4], xmm0
          vmovss  xmm1, dword ptr [rbx+340h]
        }
        goto LABEL_32;
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r15+130h]
      vaddss  xmm1, xmm0, dword ptr [rbx+138h]
      vmovss  xmm2, dword ptr [r15+134h]
      vmovss  dword ptr [rbp+57h+center], xmm1
      vaddss  xmm0, xmm2, dword ptr [rbx+13Ch]
      vmovss  xmm1, dword ptr [r15+138h]
      vmovss  dword ptr [rbp+57h+center+4], xmm0
      vaddss  xmm2, xmm1, dword ptr [rbx+140h]
      vmovss  dword ptr [rbp+57h+center+8], xmm2
    }
    G_DebugLine(&_R15->r.currentOrigin, &center, &colorBlue, 0);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rbx+150h]
      vaddss  xmm2, xmm1, dword ptr [r15+130h]
      vmovss  dword ptr [rbp+57h+center], xmm2
      vmulss  xmm1, xmm6, dword ptr [rbx+154h]
      vaddss  xmm2, xmm1, dword ptr [r15+134h]
      vmovss  dword ptr [rbp+57h+center+4], xmm2
      vmulss  xmm1, xmm6, dword ptr [rbx+158h]
      vaddss  xmm2, xmm1, dword ptr [r15+138h]
      vmovss  dword ptr [rbp+57h+center+8], xmm2
    }
    G_DebugLine(&_R15->r.currentOrigin, &center, &colorRed, 0);
    if ( EntHandle::isDefined(&_RBX->lookAtEnt) )
    {
      number = _RBX->lookAtEnt.number;
      if ( (unsigned int)(number - 1) >= 0x7FF )
      {
        LODWORD(v249) = 2047;
        LODWORD(duration) = number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", duration, v249) )
          __debugbreak();
      }
      v81 = _RBX->lookAtEnt.number;
      if ( (unsigned int)(v81 - 1) >= 0x800 )
      {
        LODWORD(v249) = 2048;
        LODWORD(duration) = v81 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v249) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v82 = v81 - 1;
      if ( g_entities[v82].r.isInUse != g_entityIsInUse[v82] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v82] )
      {
        LODWORD(v249) = _RBX->lookAtEnt.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v249) )
          __debugbreak();
      }
      G_DebugLine(&_R15->r.currentOrigin, &g_entities[_RBX->lookAtEnt.number - 1].r.currentOrigin, &colorWhite, 0);
    }
LABEL_52:
    v83 = DVARINT_bg_entinfo;
    if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v83);
    if ( v83->current.integer <= 3 )
    {
      __asm { vmovaps xmmword ptr [rsp+110h+var_78+8], xmm9 }
      *(double *)&_XMM0 = G_GetEntInfoScale();
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@3f400000
        vmovss  xmm0, dword ptr [r15+118h]
        vmovss  xmm7, cs:__real@3d68ba2f
        vmulss  xmm2, xmm1, xmm8
        vmulss  xmm9, xmm2, cs:__real@3b2aaaab
        vmovss  xmm1, dword ptr [r15+11Ch]
        vmulss  xmm8, xmm9, cs:__real@41400000
        vmovss  dword ptr [rbp+57h+center+4], xmm1
        vmovss  dword ptr [rbp+57h+center], xmm0
        vmovss  xmm0, dword ptr [r15+120h]
        vsubss  xmm1, xmm0, xmm8
        vmovss  dword ptr [rbp+57h+center+8], xmm1
        vmovss  xmm1, dword ptr [rbx+138h]
        vmovss  xmm4, dword ptr [rbx+13Ch]
        vmulss  xmm0, xmm7, dword ptr [rbx+61Ch]
        vmovss  xmm5, dword ptr [rbx+140h]
        vmulss  xmm3, xmm1, xmm1
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm4, xmm3, xmm1
        vcvtss2sd xmm2, xmm0, xmm0
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm3, xmm4, xmm0
        vsqrtss xmm1, xmm3, xmm3
        vmulss  xmm4, xmm1, xmm7
        vcvtss2sd xmm1, xmm4, xmm4
        vmovq   rdx, xmm1
        vmovq   r8, xmm2
      }
      v108 = j_va("speed cur: %0.1f, goal: %0.1f", _RDX, _R8);
      __asm { vmovaps xmm2, xmm9; scale }
      G_Main_AddDebugString(&center, &colorLtGrey, *(float *)&_XMM2, v108);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+620h]
        vmovss  xmm1, dword ptr [rbx+624h]
        vmulss  xmm6, xmm0, xmm7
        vmovss  xmm0, dword ptr [rbp+57h+center+8]
        vsubss  xmm2, xmm0, xmm8
        vmovss  dword ptr [rbp+57h+center+8], xmm2
        vmovss  xmm0, dword ptr [rbx+150h]
        vmovss  xmm4, dword ptr [rbx+154h]
        vmovss  xmm5, dword ptr [rbx+158h]
        vmulss  xmm3, xmm1, xmm7
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm4, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm4, xmm4, xmm1
        vsqrtss xmm0, xmm4, xmm4
        vcvtss2sd xmm1, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm6, xmm6
        vmovq   rdx, xmm1
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      v131 = j_va("accel: %0.1f maxAccel %0.1f maxDecel %0.1f", _RDX, _R8, _R9);
      __asm { vmovaps xmm2, xmm9; scale }
      G_Main_AddDebugString(&center, &colorLtGrey, *(float *)&_XMM2, v131);
      __asm
      {
        vmovss  xmm6, dword ptr [r15+130h]
        vmovss  xmm0, dword ptr [r15+134h]
        vmovss  xmm1, dword ptr [r15+138h]
      }
      if ( v26->type == VEH_HELICOPTER )
      {
        __asm
        {
          vsubss  xmm5, xmm6, dword ptr [rbx+338h]
          vsubss  xmm3, xmm0, dword ptr [rbx+33Ch]
          vsubss  xmm4, xmm1, dword ptr [rbx+340h]
        }
      }
      else
      {
        __asm
        {
          vsubss  xmm5, xmm6, dword ptr [rbx+6A4h]
          vsubss  xmm3, xmm0, dword ptr [rbx+6A8h]
          vsubss  xmm4, xmm1, dword ptr [rbx+6ACh]
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+center+8]
        vmulss  xmm1, xmm3, xmm3
        vsubss  xmm2, xmm0, xmm8
        vmovss  dword ptr [rbp+57h+center+8], xmm2
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vmovss  xmm2, dword ptr [r15+134h]
        vsqrtss xmm0, xmm3, xmm3
        vmovss  xmm3, dword ptr [r15+138h]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm1, xmm6, xmm6
        vcvtss2sd xmm4, xmm0, xmm0
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
        vmovsd  [rsp+110h+fmt], xmm4
      }
      v156 = j_va("<%0.1f %0.1f %0.1f> distToGoal: %0.1f", _RDX, _R8, _R9, fmt);
      __asm { vmovaps xmm2, xmm9; scale }
      G_Main_AddDebugString(&center, &colorLtGrey, *(float *)&_XMM2, v156);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+center+8]
        vsubss  xmm1, xmm0, xmm8
        vmovss  dword ptr [rbp+57h+center+8], xmm1
        vmovss  xmm2, dword ptr [rbx+568h]
        vmovss  xmm1, dword ptr [rbx+16Ch]
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v166 = j_va("yaw speed: %0.1f, goal: %0.1f", _RDX, _R8);
      __asm { vmovaps xmm2, xmm9; scale }
      G_Main_AddDebugString(&center, &colorLtGrey, *(float *)&_XMM2, v166);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+center+8]
        vsubss  xmm1, xmm0, xmm8
        vmovss  dword ptr [rbp+57h+center+8], xmm1
        vmovss  xmm2, dword ptr [rbx+574h]
        vmovss  xmm1, dword ptr [rbx+570h]
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v176 = j_va("yaw accel: %0.1f, decel: %0.1f", _RDX, _R8);
      __asm { vmovaps xmm2, xmm9; scale }
      G_Main_AddDebugString(&center, &colorLtGrey, *(float *)&_XMM2, v176);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+center+8]
        vsubss  xmm1, xmm0, xmm8
        vmovss  dword ptr [rbp+57h+center+8], xmm1
        vmovss  xmm1, dword ptr [rbx+560h]
        vcvtss2sd xmm1, xmm1, xmm1
      }
      v182 = (char *)&queryFormat.fmt + 3;
      __asm { vmovq   rdx, xmm1 }
      if ( _RBX->heliPathPos.yawSlowDown )
        v182 = ", slowdown";
      v184 = j_va("yaw overshoot: %0.1f%s", *(double *)&_XMM1, v182);
      __asm { vmovaps xmm2, xmm9; scale }
      G_Main_AddDebugString(&center, &colorLtGrey, *(float *)&_XMM2, v184);
      if ( _RBX->heliPathPos.hasTargetYaw )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+center+8]
          vsubss  xmm1, xmm0, xmm8
          vmovss  dword ptr [rbp+57h+center+8], xmm1
          vmovss  xmm2, dword ptr [rbx+10Ch]
          vmovss  xmm1, dword ptr [rbx+55Ch]
          vcvtss2sd xmm2, xmm2, xmm2
          vcvtss2sd xmm1, xmm1, xmm1
          vmovq   r8, xmm2
          vmovq   rdx, xmm1
        }
        v194 = j_va("targetyaw %0.1f, current %0.1f", _RDX, _R8);
        __asm { vmovaps xmm2, xmm9; scale }
        G_Main_AddDebugString(&center, &colorLtGrey, *(float *)&_XMM2, v194);
      }
      if ( _RBX->heliPathPos.hasGoalYaw )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+center+8]
          vsubss  xmm1, xmm0, xmm8
          vmovss  dword ptr [rbp+57h+center+8], xmm1
          vmovss  xmm2, dword ptr [rbx+10Ch]
          vmovss  xmm1, dword ptr [rbx+558h]
          vcvtss2sd xmm2, xmm2, xmm2
          vcvtss2sd xmm1, xmm1, xmm1
          vmovq   r8, xmm2
          vmovq   rdx, xmm1
        }
        v204 = j_va("goalyaw %0.1f, current %0.1f", _RDX, _R8);
        __asm { vmovaps xmm2, xmm9; scale }
        G_Main_AddDebugString(&center, &colorLtGrey, *(float *)&_XMM2, v204);
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+center+8]
        vsubss  xmm1, xmm0, xmm8
        vmovss  dword ptr [rbp+57h+center+8], xmm1
        vmovss  xmm2, dword ptr [rbx+110h]
        vmovss  xmm1, dword ptr [rbx+108h]
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v214 = j_va("cur pitch: %0.1f cur roll: %0.1f", _RDX, _R8);
      __asm { vmovaps xmm2, xmm9; scale }
      G_Main_AddDebugString(&center, &colorLtGrey, *(float *)&_XMM2, v214);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+center+8]
        vsubss  xmm1, xmm0, xmm8
        vmovss  dword ptr [rbp+57h+center+8], xmm1
        vmovss  xmm2, dword ptr [rbx+57Ch]
        vmovss  xmm1, dword ptr [rbx+578h]
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v224 = j_va("max pitch: %0.1f max roll: %0.1f", _RDX, _R8);
      __asm { vmovaps xmm2, xmm9; scale }
      G_Main_AddDebugString(&center, &colorLtGrey, *(float *)&_XMM2, v224);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+center+8]
        vsubss  xmm1, xmm0, xmm8
        vmovss  dword ptr [rbp+57h+center+8], xmm1
        vmovss  xmm3, dword ptr [rbx+2E4h]
        vmovss  xmm2, dword ptr [rbx+2E0h]
        vmovss  xmm1, dword ptr [rbx+2DCh]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v237 = j_va("hover radius: %0.1f, speed: %0.1f, accel: %0.1f", _RDX, _R8, _R9);
      __asm { vmovaps xmm2, xmm9; scale }
      G_Main_AddDebugString(&center, &colorLtGrey, *(float *)&_XMM2, v237);
      if ( _RBX->heliPathPos.stopAtGoal )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+center+8]
          vsubss  xmm1, xmm0, xmm8
          vmovaps xmm2, xmm9; scale
          vmovss  dword ptr [rbp+57h+center+8], xmm1
        }
        G_Main_AddDebugString(&center, &colorLtGrey, *(float *)&_XMM2, "stopAtGoal");
      }
      __asm { vmovaps xmm9, xmmword ptr [rsp+110h+var_78+8] }
    }
    __asm { vmovaps xmm6, xmmword ptr [rsp+110h+var_48+8] }
  }
  _R11 = &v258;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
G_VehicleSP_FinishAnimatedFrameExtras
==============
*/

void __fastcall G_VehicleSP_FinishAnimatedFrameExtras(Vehicle *veh, bool waitNodeHit, double prevSpeed)
{
  const gentity_s *ent; 
  bool IsEndOfPath; 
  char v10; 
  bool v11; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = veh;
  __asm { vmovaps xmm6, xmm2 }
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 191, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 192, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
    __debugbreak();
  ent = _RBX->ent;
  G_Vehicle_CalcPhysVelFromPrevState(_RBX);
  if ( waitNodeHit && _RBX->waitNode > -1 )
    GScr_Notify(ent, scr_const.reached_wait_node, 0);
  IsEndOfPath = G_VehiclePath_IsEndOfPath(&_RBX->pathPos);
  v10 = 0;
  v11 = !IsEndOfPath;
  if ( IsEndOfPath )
    GScr_Notify(ent, scr_const.reached_end_node, 0);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+5A0h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( !v10 )
  {
    __asm { vcomiss xmm6, xmm1 }
    if ( v10 | v11 )
    {
      __asm { vcomiss xmm1, dword ptr [rbx+58Ch] }
      if ( v10 | v11 )
      {
LABEL_17:
        GScr_Notify(ent, scr_const.reached_wait_speed, 0);
        goto LABEL_18;
      }
      __asm { vcomiss xmm6, xmm1 }
    }
    __asm { vcomiss xmm1, dword ptr [rbx+58Ch] }
    goto LABEL_17;
  }
LABEL_18:
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
G_VehicleSP_Init
==============
*/
void G_VehicleSP_Init(gentity_s *pSelf)
{
  const VehicleDef *ServerDef; 
  int *wheel; 
  int i; 
  VehicleType type; 
  __int64 v33; 
  int v34; 
  int v36; 
  VehicleType v49; 
  vec3_t outOrigin; 
  vec3_t outPos; 
  float v1[4]; 

  _RSI = pSelf;
  _R15 = pSelf->vehicle;
  __asm { vmovaps [rsp+0B8h+var_48], xmm7 }
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 733, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@3a83126f; epsilon
    vxorps  xmm7, xmm7, xmm7
  }
  _RDI = &_R15->phys;
  ServerDef = G_Vehicle_GetServerDef(_R15->defIndex);
  __asm
  {
    vmovss  [rsp+0B8h+v1], xmm7
    vmovss  [rsp+0B8h+var_64], xmm7
    vmovss  [rsp+0B8h+var_60], xmm7
  }
  if ( VecNCompareCustomEpsilon(_R15->phys.bounds.halfSize.v, v1, *(float *)&_XMM2, 3) )
  {
    if ( (unsigned __int8)(ServerDef->type - 1) > 2u )
    {
      __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
      wheel = _R15->boneIndex.wheel;
      __asm { vxorps  xmm6, xmm6, xmm6 }
      for ( i = 0; i < 12; ++i )
      {
        if ( *wheel >= 0 )
        {
          G_Vehicle_GetWheelOrigin(_RSI, i, &outOrigin);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin]
            vmovss  xmm1, dword ptr [rsp+0B8h+outOrigin+4]
            vmulss  xmm2, xmm1, xmm1
            vmulss  xmm3, xmm0, xmm0
            vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin+8]
            vmulss  xmm1, xmm0, xmm0
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vmaxss  xmm6, xmm2, xmm6
          }
        }
        ++wheel;
      }
      __asm { vcomiss xmm6, xmm7 }
      type = ServerDef->type;
      if ( (unsigned int)i <= 0xC )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+110h]
          vminss  xmm1, xmm0, dword ptr [rsi+10Ch]
          vminss  xmm2, xmm1, dword ptr [rsi+114h]
        }
        *(_QWORD *)_R15->phys.bounds.midPoint.v = 0i64;
        _R15->phys.bounds.midPoint.v[2] = 0.0;
        __asm
        {
          vmovss  dword ptr [rdi+3Ch], xmm2
          vmovss  dword ptr [rdi+40h], xmm2
          vmovss  dword ptr [rdi+44h], xmm2
        }
      }
      else
      {
        __asm
        {
          vsqrtss xmm0, xmm6, xmm6
          vaddss  xmm1, xmm0, cs:__real@3f800000
          vshufps xmm1, xmm1, xmm1, 0
        }
        if ( type == VEH_WHEELS_4 || type == VEH_TREADED )
        {
          *(_QWORD *)_R15->phys.bounds.midPoint.v = 0i64;
          __asm { vmovups xmmword ptr [rdi+38h], xmm1 }
        }
        else if ( type == VEH_HELICOPTER )
        {
          *(_QWORD *)_R15->phys.bounds.midPoint.v = 0i64;
          _R15->phys.bounds.midPoint.v[2] = 0.0;
          __asm
          {
            vmovss  dword ptr [rdi+3Ch], xmm1
            vmovss  dword ptr [rdi+40h], xmm1
            vmovss  dword ptr [rdi+44h], xmm1
          }
        }
      }
      __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
    }
    if ( ServerDef->type == VEH_BOAT )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+110h]
        vminss  xmm1, xmm0, dword ptr [rsi+10Ch]
        vaddss  xmm0, xmm1, cs:__real@3c23d70a
        vmovss  dword ptr [rdi+38h], xmm0
      }
      *(_QWORD *)_R15->phys.bounds.midPoint.v = 0i64;
      __asm
      {
        vmovss  dword ptr [rdi+3Ch], xmm1
        vmovss  dword ptr [rdi+40h], xmm1
        vmovss  dword ptr [rdi+44h], xmm1
      }
    }
  }
  __asm { vmovaps xmm7, [rsp+0B8h+var_48] }
  _RBX = _R15->phys.wheelZPos;
  v33 = 12i64;
  do
  {
    v34 = *((_DWORD *)_RBX + 340);
    if ( v34 >= 0 )
    {
      G_Utils_DObjGetWorldBoneIndexPos(_RSI, v34, &outPos);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0B8h+outPos+8]
        vmovss  dword ptr [rbx], xmm0
      }
    }
    ++_RBX;
    --v33;
  }
  while ( v33 );
  v36 = _R15->boneIndex.flash[0];
  if ( v36 >= 0 && _R15->boneIndex.barrel >= 0 )
  {
    G_Utils_DObjGetWorldBoneIndexPos(_RSI, v36, &outOrigin);
    G_Utils_DObjGetWorldBoneIndexPos(_RSI, _R15->boneIndex.barrel, &outPos);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin]
      vsubss  xmm3, xmm0, dword ptr [rsp+0B8h+outPos]
      vmovss  xmm1, dword ptr [rsp+0B8h+outOrigin+4]
      vsubss  xmm2, xmm1, dword ptr [rsp+0B8h+outPos+4]
      vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin+8]
      vsubss  xmm4, xmm0, dword ptr [rsp+0B8h+outPos+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vmovss  dword ptr [r15+5B8h], xmm1
    }
  }
  v49 = ServerDef->type;
  if ( v49 == VEH_WHEELS_4 || v49 == VEH_TREADED )
    G_Vehicle_GroundPlant(_RSI, _RDI, 0);
  G_Vehicle_SetPosition(_RSI, &_R15->phys.origin, &_R15->phys.vel, &_R15->phys.angles, 1);
  _R15->phys.prevOrigin.v[0] = _R15->phys.origin.v[0];
  _R15->phys.prevOrigin.v[1] = _R15->phys.origin.v[1];
  _R15->phys.prevOrigin.v[2] = _R15->phys.origin.v[2];
  _R15->phys.prevAngles.v[0] = _R15->phys.angles.v[0];
  _R15->phys.prevAngles.v[1] = _R15->phys.angles.v[1];
  _R15->phys.prevAngles.v[2] = _R15->phys.angles.v[2];
  G_Vehicle_TouchEntities(_RSI);
  G_ActiveSP_TouchTriggers(_RSI);
  if ( _RSI->handler != 25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 819, ASSERT_TYPE_ASSERT, "(pSelf->handler == ENT_HANDLER_VEHICLE_INIT)", (const char *)&queryFormat, "pSelf->handler == ENT_HANDLER_VEHICLE_INIT") )
    __debugbreak();
  _RSI->handler = 24;
  _RSI->nextthink = G_Vehicle_GetNextThinkTime();
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
  char v15; 
  char v16; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 141, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  scripted = veh->ent->scripted;
  if ( !scripted || !scripted->anim )
    return 0i64;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 147, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
    __debugbreak();
  EntAnimTree = G_Utils_GetEntAnimTree(veh->ent);
  if ( !EntAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 150, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
    __debugbreak();
  Anims = XAnimGetAnims(EntAnimTree);
  if ( !Anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 153, ASSERT_TYPE_ASSERT, "( anims )", (const char *)&queryFormat, "anims") )
    __debugbreak();
  *(double *)&_XMM0 = XAnimGetTime(EntAnimTree, 0, XANIM_SUBTREE_DEFAULT, scripted->anim);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = XAnimGetLength(Anims, scripted->anim);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vsubss  xmm2, xmm1, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vmulss  xmm3, xmm0, xmm2
    vcomiss xmm7, xmm3
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return v15 | v16 || XAnimIsLooped(Anims, scripted->anim);
}

/*
==============
G_VehicleSP_OrientTo_Init
==============
*/

void __fastcall G_VehicleSP_OrientTo_Init(Vehicle *veh, const vec3_t *tgtOrigin, const vec3_t *tgtAngles, double tgtSpeed, float tgtAngleSpeed)
{
  float speed; 
  bool v24; 
  bool v39; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
  }
  _RBX = veh;
  __asm { vmovaps xmm6, xmm3 }
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 294, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  _RBX->orientToOrigin.current.v[0] = _RBX->phys.origin.v[0];
  _RBX->orientToOrigin.current.v[1] = _RBX->phys.origin.v[1];
  _RBX->orientToOrigin.current.v[2] = _RBX->phys.origin.v[2];
  __asm { vmulss  xmm0, xmm6, cs:__real@418ccccd }
  _RBX->orientToOrigin.target.v[0] = tgtOrigin->v[0];
  _RBX->orientToOrigin.target.v[1] = tgtOrigin->v[1];
  _RBX->orientToOrigin.target.v[2] = tgtOrigin->v[2];
  speed = _RBX->speed;
  __asm { vmovss  dword ptr [rbx+648h], xmm0 }
  _RBX->orientToOrigin.speed = speed;
  _RBX->orientToAngles.current.v[0] = _RBX->phys.angles.v[0];
  _RBX->orientToAngles.current.v[1] = _RBX->phys.angles.v[1];
  _RBX->orientToAngles.current.v[2] = _RBX->phys.angles.v[2];
  _RBX->orientToAngles.target.v[0] = tgtAngles->v[0];
  _RBX->orientToAngles.target.v[1] = tgtAngles->v[1];
  _RBX->orientToAngles.target.v[2] = tgtAngles->v[2];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+168h]
    vmovss  xmm2, dword ptr [rbx+16Ch]
    vmovss  xmm3, dword ptr [rbx+170h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, [rsp+68h+tgtAngleSpeed]
    vmovss  dword ptr [rbx+668h], xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmovss  dword ptr [rbx+664h], xmm0
  }
  v24 = level.frameDuration == 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+638h]
    vsubss  xmm2, xmm0, dword ptr [rbx+62Ch]
    vmovss  xmm1, dword ptr [rbx+63Ch]
    vsubss  xmm3, xmm1, dword ptr [rbx+630h]
    vmovss  xmm0, dword ptr [rbx+640h]
    vsubss  xmm4, xmm0, dword ptr [rbx+634h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, dword ptr [rbx+648h]
    vaddss  xmm6, xmm1, dword ptr [rbx+644h]
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm8, xmm2, xmm2
  }
  if ( !level.frameDuration )
  {
    v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration");
    v24 = !v39;
    if ( v39 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm7, xmm0, cs:__real@3a83126f
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
  }
  if ( v24 )
  {
    __asm
    {
      vmovss  dword ptr [rbx+66Ch], xmm7
      vmovss  dword ptr [rbx+670h], xmm7
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm8, cs:__real@40000000
      vdivss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rbx+66Ch], xmm1
    }
    *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+66Ch]
      vmovaps xmm1, xmm0; Y
      vmovaps xmm0, xmm6; X
    }
    fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vsubss  xmm1, xmm6, xmm0
      vmaxss  xmm2, xmm1, xmm7
      vmovss  dword ptr [rbx+66Ch], xmm2
      vmovss  dword ptr [rbx+670h], xmm2
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
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

void __fastcall G_VehicleSP_Think(gentity_s *pSelf, double _XMM1_8)
{
  gentity_s *Player; 
  gentity_s *v10; 
  bool v11; 
  gclient_s *client; 
  unsigned int number; 
  int NextThinkTime; 
  Vehicle *vehicle; 
  double v45; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 392, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  _RBX = pSelf->vehicle;
  _RBP = G_Vehicle_GetServerDef(_RBX->defIndex);
  G_Vehicle_SetEntityStateTeam(pSelf, (team_t)_RBX->team);
  Player = G_Vehicle_GetPlayer(pSelf);
  v10 = Player;
  v11 = 0;
  if ( Player && (client = Player->client, number = pSelf->s.number, v11 = client->ps.vehicleState.entity < number, client->ps.vehicleState.entity == number) )
  {
    G_ActiveSP_TouchTriggers(pSelf);
    NextThinkTime = G_Vehicle_GetNextThinkTime();
    vehicle = pSelf->vehicle;
    pSelf->nextthink = NextThinkTime;
    G_Vehicle_UpdateCameraState(vehicle);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+588h]
      vmovaps [rsp+88h+var_18], xmm6
      vmovaps [rsp+88h+var_28], xmm7
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm0, xmm6
      vmovaps [rsp+88h+var_38], xmm8
      vmovaps [rsp+88h+var_48], xmm9
    }
    if ( v11 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+88h+var_58], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 413, ASSERT_TYPE_ASSERT, "( ( vehicle->speed >= 0.0f ) )", "%s\n\t( vehicle->speed ) = %g", "( vehicle->speed >= 0.0f )", v45) )
        __debugbreak();
    }
    pSelf->s.lerp.u.anonymous.data[1] &= ~2u;
    __asm
    {
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm8, cs:__real@3a83126f
    }
    if ( !BGVehicles::PhysicsIsValid(_RBX->physicsVehicle) )
      goto LABEL_15;
    if ( _RBX->ent->scripted )
      goto LABEL_15;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+66Ch]
      vandps  xmm0, xmm0, xmm7
      vcomiss xmm0, xmm8
    }
    if ( _RBX->ent->scripted || pSelf->tagInfo )
    {
LABEL_15:
      if ( _RBX->drivingState == VEH_DRIVE_PATH_CONSTRAINED )
        _RBX->speed = _RBX->pathSpeed;
    }
    else
    {
      G_Vehicle_UpdatePhysics(pSelf, v10);
    }
    G_Vehicle_UpdatePhysicsLinkEntity(pSelf);
    G_Vehicle_UpdatePosition(pSelf, v10);
    G_ActiveSP_TouchTriggers(pSelf);
    G_Vehicle_DrawDebugOrigin(_RBP, &_RBX->phys);
    _RBX->turret.barrelBlocked = 0;
    G_Vehicle_UpdatePlayerControlledWeapon(pSelf);
    G_Vehicle_UpdateAim(pSelf);
    G_Vehicle_UpdateBody(_RBX);
    G_Vehicle_UpdateSteering(pSelf);
    G_Vehicle_UpdateSounds(pSelf);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+66Ch]
      vandps  xmm0, xmm0, xmm7
      vcomiss xmm0, xmm8
    }
    if ( G_VehicleSP_IsVehicleScriptedAnimRunning(_RBX) )
    {
      __asm { vxorps  xmm1, xmm1, xmm1 }
      _RAX = _RBX->ent;
      __asm
      {
        vmulss  xmm0, xmm1, dword ptr [rax+68h]
        vmovss  dword ptr [rax+68h], xmm0
        vmulss  xmm0, xmm1, dword ptr [rax+60h]
        vmovss  dword ptr [rax+60h], xmm0
        vmulss  xmm0, xmm1, dword ptr [rax+64h]
        vmovss  dword ptr [rax+64h], xmm0
        vmulss  xmm0, xmm1, dword ptr [rbx+144h]
        vmovss  dword ptr [rbx+144h], xmm0
        vmulss  xmm0, xmm1, dword ptr [rbx+148h]
        vmovss  dword ptr [rbx+148h], xmm0
        vmulss  xmm0, xmm1, dword ptr [rbx+14Ch]
        vmovss  dword ptr [rbx+14Ch], xmm0
        vmulss  xmm0, xmm1, dword ptr [rbx+15Ch]
        vmovss  dword ptr [rbx+15Ch], xmm0
        vmulss  xmm0, xmm1, dword ptr [rbx+160h]
        vmovss  dword ptr [rbx+160h], xmm0
        vmulss  xmm0, xmm1, dword ptr [rbx+164h]
        vmovss  dword ptr [rbx+164h], xmm0
      }
    }
    __asm
    {
      vmovss  xmm9, dword ptr [rbx+66Ch]
      vandps  xmm0, xmm9, xmm7
      vcomiss xmm0, xmm8
      vmovss  xmm0, dword ptr [rbp+2E4h]
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si eax, xmm1
    }
    pSelf->s.time2 = _EAX;
    __asm
    {
      vmovaps xmm9, [rsp+88h+var_48]
      vmovaps xmm8, [rsp+88h+var_38]
      vmovaps xmm7, [rsp+88h+var_28]
      vmovaps xmm6, [rsp+88h+var_18]
    }
    pSelf->nextthink = G_Vehicle_GetNextThinkTime();
  }
}

/*
==============
G_VehicleSP_UpdateAnimatedSubState
==============
*/
__int64 G_VehicleSP_UpdateAnimatedSubState(Vehicle *veh, VehiclePathPos *nextVpp, bool *waitNodeHit)
{
  gentity_s *ent; 
  bool v12; 
  int v18; 
  bool v20; 
  vec3_t *p_angles; 
  const vec3_t *v33; 
  gentity_s *v34; 
  __int64 pathDir; 
  __int64 v50; 

  _RSI = nextVpp;
  _R14 = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 223, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 224, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
    __debugbreak();
  ent = _R14->ent;
  v12 = (_R14->ent->s.lerp.u.anonymous.data[1] & 0xFFFFFF7F) == 0;
  _R14->ent->s.lerp.u.anonymous.data[1] &= ~0x80u;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+66Ch]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v12 )
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_38], xmm6
      vmovaps [rsp+0B8h+var_48], xmm7
      vmovaps [rsp+0B8h+var_58], xmm8
      vmovaps [rsp+0B8h+var_68], xmm9
      vmovaps [rsp+0B8h+var_78], xmm10
    }
    G_VehicleSP_UpdateOrientToVelocity(_R14, &_R14->orientToOrigin, 0);
    _R14->phys.origin.v[0] = _R14->orientToOrigin.current.v[0];
    _R14->phys.origin.v[1] = _R14->orientToOrigin.current.v[1];
    _R14->phys.origin.v[2] = _R14->orientToOrigin.current.v[2];
    G_VehicleSP_UpdateOrientToVelocity(_R14, &_R14->orientToAngles, 1);
    __asm
    {
      vmovss  xmm8, cs:__real@3b360b61
      vmovss  xmm9, cs:__real@3f000000
      vmovss  xmm10, cs:__real@43b40000
    }
    v18 = 0;
    _RDI = &_R14->orientToAngles;
    v20 = 1;
    __asm { vxorps  xmm7, xmm7, xmm7 }
    do
    {
      if ( !v20 )
      {
        LODWORD(v50) = 3;
        LODWORD(pathDir) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", pathDir, v50) )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm4, xmm8, dword ptr [rdi]
        vaddss  xmm2, xmm4, xmm9
        vroundss xmm3, xmm7, xmm2, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm6, xmm1, xmm10
      }
      if ( (unsigned int)v18 >= 3 )
      {
        LODWORD(v50) = 3;
        LODWORD(pathDir) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", pathDir, v50) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rdi], xmm6 }
      _RDI = (VehicleOrientTo *)((char *)_RDI + 4);
      v20 = (unsigned int)++v18 < 3;
    }
    while ( v18 < 3 );
    p_angles = &_R14->phys.angles;
    __asm
    {
      vmovaps xmm10, [rsp+0B8h+var_78]
      vmovaps xmm9, [rsp+0B8h+var_68]
      vmovaps xmm8, [rsp+0B8h+var_58]
      vmovaps xmm7, [rsp+0B8h+var_48]
      vmovaps xmm6, [rsp+0B8h+var_38]
    }
    _R14->phys.angles.v[0] = _R14->orientToAngles.current.v[0];
    _R14->phys.angles.v[1] = _R14->orientToAngles.current.v[1];
    _R14->phys.angles.v[2] = _R14->orientToAngles.current.v[2];
LABEL_21:
    if ( _RSI )
    {
      v33 = p_angles;
      if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 170, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
        __debugbreak();
      v34 = _R14->ent;
      G_VehiclePath_UpdatePathPosAnimated(_RSI, &_R14->phys.origin, v33);
      *waitNodeHit = G_VehiclePath_UpdatePathPosNotifies(&_R14->pathPos, _RSI, v34->s.number, _R14->waitNode, VEH_PATH_NOTIFY_SCRIPT, VEH_PATH_FORWARD);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [r14+10h], xmm0
        vmovups xmm1, xmmword ptr [rsi+10h]
        vmovups xmmword ptr [r14+20h], xmm1
        vmovups xmm0, xmmword ptr [rsi+20h]
        vmovups xmmword ptr [r14+30h], xmm0
        vmovups xmm1, xmmword ptr [rsi+30h]
        vmovups xmmword ptr [r14+40h], xmm1
        vmovups xmm0, xmmword ptr [rsi+40h]
        vmovups xmmword ptr [r14+50h], xmm0
        vmovups xmm1, xmmword ptr [rsi+50h]
        vmovups xmmword ptr [r14+60h], xmm1
        vmovups xmm0, xmmword ptr [rsi+60h]
        vmovups xmmword ptr [r14+70h], xmm0
        vmovups xmm1, xmmword ptr [rsi+70h]
        vmovups xmmword ptr [r14+80h], xmm1
        vmovups xmm0, xmmword ptr [rsi+80h]
        vmovups xmmword ptr [r14+90h], xmm0
        vmovups xmm1, xmmword ptr [rsi+90h]
        vmovups xmmword ptr [r14+0A0h], xmm1
        vmovups xmm0, xmmword ptr [rsi+0A0h]
        vmovups xmmword ptr [r14+0B0h], xmm0
        vmovups xmm1, xmmword ptr [rsi+0B0h]
        vmovups xmmword ptr [r14+0C0h], xmm1
        vmovups xmm0, xmmword ptr [rsi+0C0h]
        vmovups xmmword ptr [r14+0D0h], xmm0
      }
      *(_QWORD *)&_R14->pathPos.switchNode[1].length = *(_QWORD *)&_RSI->switchNode[1].length;
      *(_DWORD *)&_R14->pathPos.switchNode[1].notifyIdx = *(_DWORD *)&_RSI->switchNode[1].notifyIdx;
      _R14->manualTime = 0.0;
      if ( G_VehiclePath_IsEndOfPath(&_R14->pathPos) )
        _R14->pathSpeed = 0.0;
    }
    return 1i64;
  }
  if ( G_VehicleSP_IsVehicleScriptedAnimRunning(_R14) )
  {
    G_Animscripted_Think(ent);
    p_angles = &_R14->phys.angles;
    _R14->phys.origin.v[0] = ent->r.currentOrigin.v[0];
    _R14->phys.origin.v[1] = ent->r.currentOrigin.v[1];
    _R14->phys.origin.v[2] = ent->r.currentOrigin.v[2];
    _R14->phys.angles.v[0] = ent->r.currentAngles.v[0];
    _R14->phys.angles.v[1] = ent->r.currentAngles.v[1];
    _R14->phys.angles.v[2] = ent->r.currentAngles.v[2];
    ent->s.lerp.u.anonymous.data[1] |= 0x80u;
    if ( _RSI )
    {
      if ( G_VehiclePath_IsEndOfPath(_RSI) )
        _RSI->flags |= 2u;
      goto LABEL_21;
    }
    return 1i64;
  }
  if ( _RSI && (_RSI->flags & 2) != 0 )
  {
    if ( G_VehiclePath_IsEndOfPath(_RSI) )
      return 1i64;
    _RSI->flags &= ~2u;
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
  bool v10; 
  bool v11; 
  vec3_t v3; 
  char v69; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
  }
  _RBX = orientTo;
  _RDI = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 76, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  v10 = _RBX == NULL;
  if ( !_RBX )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 77, ASSERT_TYPE_ASSERT, "(orientTo)", (const char *)&queryFormat, "orientTo");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+670h]
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1; min
    vcomiss xmm2, xmm1
  }
  if ( v10 )
  {
    __asm { vmovaps xmm1, xmm7 }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+66Ch]
      vdivss  xmm0, xmm0, xmm2; val
      vmovaps xmm2, xmm7; max
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vsubss  xmm1, xmm7, xmm0 }
  }
  __asm
  {
    vmulss  xmm0, xmm1, cs:__real@3f333333
    vaddss  xmm8, xmm0, cs:__real@3e99999a
  }
  if ( angles )
  {
    AnglesSubtract(&_RBX->target, &_RBX->current, &v3);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+88h+v3+8]
      vmovss  xmm5, dword ptr [rsp+88h+v3+4]
      vmovss  xmm6, dword ptr [rsp+88h+v3]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0Ch]
      vsubss  xmm6, xmm0, dword ptr [rbx]
      vmovss  xmm0, dword ptr [rbx+14h]
      vmovss  xmm1, dword ptr [rbx+10h]
      vsubss  xmm4, xmm0, dword ptr [rbx+8]
      vsubss  xmm5, xmm1, dword ptr [rbx+4]
    }
  }
  __asm
  {
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm1, xmm7, xmm0
    vmulss  xmm0, xmm3, cs:__real@40000000
    vmulss  xmm6, xmm6, xmm1
    vmulss  xmm5, xmm5, xmm1
    vmulss  xmm4, xmm4, xmm1
    vdivss  xmm1, xmm0, dword ptr [rdi+66Ch]
    vsubss  xmm2, xmm1, dword ptr [rbx+1Ch]
    vsubss  xmm0, xmm7, xmm8
    vmulss  xmm1, xmm0, dword ptr [rbx+18h]
    vmulss  xmm3, xmm2, xmm8
    vaddss  xmm2, xmm3, xmm1
    vmovss  dword ptr [rbx+18h], xmm2
    vmovss  dword ptr [rsp+88h+v3], xmm6
    vmovss  dword ptr [rsp+88h+v3+4], xmm5
    vmovss  dword ptr [rsp+88h+v3+8], xmm4
    vmulss  xmm6, xmm6, xmm2
    vmulss  xmm7, xmm5, xmm2
    vmulss  xmm8, xmm4, xmm2
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, cs:__real@3a83126f
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm0, xmm4, xmm6
    vmulss  xmm0, xmm0, xmm3
    vaddss  xmm1, xmm0, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm1
    vmulss  xmm0, xmm4, xmm7
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm2
    vmulss  xmm0, xmm4, xmm8
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm2, xmm1, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm2
  }
  _R11 = &v69;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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
  _RBX = DVARFLT_vehBoatRockingScale;
  if ( !DVARFLT_vehBoatRockingScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehBoatRockingScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  return *(float *)&_XMM0;
}

/*
==============
GVehiclesSP::GetVehicleHeliPlayerMove
==============
*/
void GVehiclesSP::GetVehicleHeliPlayerMove(GVehiclesSP *this, const Vehicle *veh, gentity_s *player, char *outMove)
{
  char v8; 
  const dvar_t *v15; 
  int integer; 
  int v17; 
  int v18; 
  __int16 buttons; 
  __int16 v20; 
  __int16 v21; 
  const dvar_t *v22; 
  usercmd_s outUserCmd; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 966, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 967, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 968, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 969, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL )") )
    __debugbreak();
  _RSI = G_Vehicle_GetServerDef(veh->defIndex);
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
    _RAX = player->client;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+0C84h]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rax+5ED0h], xmm1
    }
    player->client->link_viewClamp.max.goal.v[1] = _RSI->turretHorizSpanLeft;
    _RAX = player->client;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+0C88h]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rax+5ECCh], xmm1
    }
    player->client->link_viewClamp.max.goal.v[0] = _RSI->turretVertSpanDown;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
    {
      player->client->link_viewClamp.resistMin.goal.v[1] = _RSI->turretHorizResistLeft;
      player->client->link_viewClamp.resistMax.goal.v[1] = _RSI->turretHorizResistRight;
      player->client->link_viewClamp.resistMin.goal.v[0] = _RSI->turretVertResistDown;
      player->client->link_viewClamp.resistMax.goal.v[0] = _RSI->turretVertResistUp;
    }
    G_SnapToViewAngleClampGoal(&player->client->link_viewClamp);
    v15 = DVARINT_vehHelicopterControlsAltitude;
    if ( !DVARINT_vehHelicopterControlsAltitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterControlsAltitude") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    integer = v15->current.integer;
    if ( integer )
    {
      v17 = integer - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 == 1 )
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
          v20 = outUserCmd.buttons;
          if ( (outUserCmd.buttons & 0x2000) != 0 )
            outMove[2] = 127;
          if ( (v20 & 0x200) != 0 )
            outMove[2] -= 127;
        }
      }
      else
      {
        v21 = outUserCmd.buttons;
        if ( (outUserCmd.buttons & 0x1000) != 0 )
          outMove[2] = 127;
        if ( (v21 & 0x2000) != 0 )
          outMove[2] -= 127;
      }
    }
    else
    {
      outMove[2] = outUserCmd.pitchmove;
    }
    v22 = DVARBOOL_vehHelicopterInvertUpDown;
    if ( !DVARBOOL_vehHelicopterInvertUpDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterInvertUpDown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled )
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, cs:__real@3c010204
  }
  return *(float *)&_XMM0;
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
  const gentity_s *ent; 
  bool IsEndOfPath; 
  char v8; 
  bool v9; 
  bool waitNodeHit; 

  _RBX = veh;
  G_VehicleHeli_PathFromVeh(&veh->heliPathPos, veh);
  if ( G_VehicleSP_UpdateAnimatedSubState(_RBX, NULL, &waitNodeHit) )
  {
    __asm
    {
      vmovaps [rsp+48h+var_18], xmm6
      vmovss  xmm6, dword ptr [rbx+58Ch]
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 192, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    ent = _RBX->ent;
    G_Vehicle_CalcPhysVelFromPrevState(_RBX);
    if ( waitNodeHit && _RBX->waitNode > -1 )
      GScr_Notify(ent, scr_const.reached_wait_node, 0);
    IsEndOfPath = G_VehiclePath_IsEndOfPath(&_RBX->pathPos);
    v8 = 0;
    v9 = !IsEndOfPath;
    if ( IsEndOfPath )
      GScr_Notify(ent, scr_const.reached_end_node, 0);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+5A0h]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm1, xmm0
    }
    if ( v8 )
      goto LABEL_16;
    __asm { vcomiss xmm6, xmm1 }
    if ( v8 | v9 )
    {
      __asm { vcomiss xmm1, dword ptr [rbx+58Ch] }
      if ( v8 | v9 )
      {
LABEL_15:
        GScr_Notify(ent, scr_const.reached_wait_speed, 0);
LABEL_16:
        __asm { vmovaps xmm6, [rsp+48h+var_18] }
        _RBX->heliPathPos.origin.v[0] = _RBX->phys.origin.v[0];
        _RBX->heliPathPos.origin.v[1] = _RBX->phys.origin.v[1];
        _RBX->heliPathPos.origin.v[2] = _RBX->phys.origin.v[2];
        _RBX->heliPathPos.angles.v[0] = _RBX->phys.angles.v[0];
        _RBX->heliPathPos.angles.v[1] = _RBX->phys.angles.v[1];
        _RBX->heliPathPos.angles.v[2] = _RBX->phys.angles.v[2];
        _RBX->heliPathPos.vel.v[0] = _RBX->phys.vel.v[0];
        _RBX->heliPathPos.vel.v[1] = _RBX->phys.vel.v[1];
        _RBX->heliPathPos.vel.v[2] = _RBX->phys.vel.v[2];
        _RBX->heliPathPos.rotVel.v[0] = _RBX->phys.rotVel.v[0];
        _RBX->heliPathPos.rotVel.v[1] = _RBX->phys.rotVel.v[1];
        _RBX->heliPathPos.rotVel.v[2] = _RBX->phys.rotVel.v[2];
        _RBX->heliPathPos.accel.v[0] = _RBX->phys.accel.v[0];
        _RBX->heliPathPos.accel.v[1] = _RBX->phys.accel.v[1];
        _RBX->heliPathPos.accel.v[2] = _RBX->phys.accel.v[2];
        _RBX->heliPathPos.speed = _RBX->speed;
        return;
      }
      __asm { vcomiss xmm6, xmm1 }
    }
    __asm { vcomiss xmm1, dword ptr [rbx+58Ch] }
    goto LABEL_15;
  }
  G_VehicleHeli_UpdateAiMoveInternal(&_RBX->heliPathPos);
  _RBX->phys.origin.v[0] = _RBX->heliPathPos.origin.v[0];
  _RBX->phys.origin.v[1] = _RBX->heliPathPos.origin.v[1];
  _RBX->phys.origin.v[2] = _RBX->heliPathPos.origin.v[2];
  _RBX->phys.angles.v[0] = _RBX->heliPathPos.angles.v[0];
  _RBX->phys.angles.v[1] = _RBX->heliPathPos.angles.v[1];
  _RBX->phys.angles.v[2] = _RBX->heliPathPos.angles.v[2];
  _RBX->phys.vel.v[0] = _RBX->heliPathPos.vel.v[0];
  _RBX->phys.vel.v[1] = _RBX->heliPathPos.vel.v[1];
  _RBX->phys.vel.v[2] = _RBX->heliPathPos.vel.v[2];
  _RBX->phys.rotVel.v[0] = _RBX->heliPathPos.rotVel.v[0];
  _RBX->phys.rotVel.v[1] = _RBX->heliPathPos.rotVel.v[1];
  _RBX->phys.rotVel.v[2] = _RBX->heliPathPos.rotVel.v[2];
  _RBX->phys.accel.v[0] = _RBX->heliPathPos.accel.v[0];
  _RBX->phys.accel.v[1] = _RBX->heliPathPos.accel.v[1];
  _RBX->phys.accel.v[2] = _RBX->heliPathPos.accel.v[2];
  _RBX->speed = _RBX->heliPathPos.speed;
}

/*
==============
GVehiclesSP::UpdatePathConstrainedMove
==============
*/
void GVehiclesSP::UpdatePathConstrainedMove(GVehiclesSP *this, Vehicle *veh)
{
  unsigned int defIndex; 
  __int64 v8; 
  char v17; 
  char v18; 
  bool updated; 
  bool waitNodeHit; 
  VehiclePathPos nextVpp; 

  _RBX = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 827, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(_RBX->physicsVehicle) )
  {
    defIndex = _RBX->defIndex;
    __asm { vmovaps [rsp+148h+var_18], xmm6 }
    G_Vehicle_GetServerDef(defIndex);
    if ( !_RBX->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 467, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+10h]
      vmovups ymm1, ymmword ptr [rbx+90h]
    }
    v8 = *(_QWORD *)&_RBX->pathPos.switchNode[1].length;
    _RDX = &nextVpp;
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+58Ch]
      vmovups ymmword ptr [rdx], ymm0
      vmovups ymm0, ymmword ptr [rbx+30h]
      vmovups ymmword ptr [rdx+20h], ymm0
      vmovups ymm0, ymmword ptr [rbx+50h]
      vmovups ymmword ptr [rdx+40h], ymm0
      vmovups ymm0, ymmword ptr [rbx+70h]
      vmovups ymmword ptr [rdx+60h], ymm0
      vmovups ymmword ptr [rdx+80h], ymm1
      vmovups ymm1, ymmword ptr [rbx+0B0h]
      vmovups ymmword ptr [rdx+0A0h], ymm1
      vmovups xmm1, xmmword ptr [rbx+0D0h]
      vmovups xmmword ptr [rdx+0C0h], xmm1
    }
    *(_QWORD *)&nextVpp.switchNode[1].length = v8;
    *(_DWORD *)&nextVpp.switchNode[1].notifyIdx = *(_DWORD *)&_RBX->pathPos.switchNode[1].notifyIdx;
    waitNodeHit = 0;
    if ( nextVpp.nodeIdx >= 0 )
    {
      G_Vehicle_UpdatePathSpeed(_RBX);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [rbx+58Ch]
      }
      if ( !(v17 | v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_sp.cpp", 478, ASSERT_TYPE_ASSERT, "(veh->pathSpeed >= 0.0f)", (const char *)&queryFormat, "veh->pathSpeed >= 0.0f") )
        __debugbreak();
      if ( G_VehicleSP_UpdateAnimatedSubState(_RBX, &nextVpp, &waitNodeHit) )
        updated = waitNodeHit;
      else
        updated = G_Vehicle_UpdatePathPosition(_RBX);
      G_Vehicle_DrawDebugLookahead(_RBX);
      G_Vehicle_CalcPhysVelFromPrevState(_RBX);
      __asm { vmovaps xmm1, xmm6; prevSpeed }
      G_Vehicle_UpdatePathScript(_RBX, *(float *)&_XMM1, updated);
    }
    __asm { vmovaps xmm6, [rsp+148h+var_18] }
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

