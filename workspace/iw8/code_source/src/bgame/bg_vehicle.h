/*
==============
BGVehicles::PathInit
==============
*/

void __fastcall BGVehicles::PathInit(BGVehicles *this, __int16 nodeIndex, VehiclePathPos *vpp)
{
  ?PathInit@BGVehicles@@UEBAXFPEAUVehiclePathPos@@@Z(this, nodeIndex, vpp);
}

/*
==============
BGVehicles::IsClient
==============
*/

bool __fastcall BGVehicles::IsClient(BGVehicles *this)
{
  return ?IsClient@BGVehicles@@UEBA_NXZ(this);
}

/*
==============
BGVehicles::PathCountNodes
==============
*/

__int16 __fastcall BGVehicles::PathCountNodes(BGVehicles *this, __int16 nodeIndex)
{
  return ?PathCountNodes@BGVehicles@@UEBAFF@Z(this, nodeIndex);
}

/*
==============
BGVehicles::PathReset
==============
*/

void __fastcall BGVehicles::PathReset(BGVehicles *this, VehiclePathPos *vpp)
{
  ?PathReset@BGVehicles@@UEBAXPEAUVehiclePathPos@@@Z(this, vpp);
}

/*
==============
BGVehicles::PathGetNode
==============
*/

const VehiclePathNode *__fastcall BGVehicles::PathGetNode(BGVehicles *this, __int16 nodeIndex)
{
  return ?PathGetNode@BGVehicles@@UEBAPEBUVehiclePathNode@@F@Z(this, nodeIndex);
}

/*
==============
BGVehicles::BgIsDobjValidForVehicle
==============
*/

bool __fastcall BGVehicles::BgIsDobjValidForVehicle(BGVehicles *this, const DObj *dobj)
{
  return ?BgIsDobjValidForVehicle@BGVehicles@@UEBA_NPEBUDObj@@@Z(this, dobj);
}

/*
==============
BGVehicles::PathComputeLookAhead
==============
*/

void __fastcall BGVehicles::PathComputeLookAhead(BGVehicles *this, const float manualSpeed, const VehiclePathPos *vpp, const float manualTime, vec3_t *outLookAheadOrigin, vec3_t *outLookAheadAngles)
{
  ?PathComputeLookAhead@BGVehicles@@UEBAXMPEBUVehiclePathPos@@MAEATvec3_t@@1@Z(this, manualSpeed, vpp, manualTime, outLookAheadOrigin, outLookAheadAngles);
}

/*
==============
BGVehicles::PhysicsDrawDebugVehicle
==============
*/

void __fastcall BGVehicles::PhysicsDrawDebugVehicle(BGVehicles *this, const BgVehiclePhysics *vehObj)
{
  ?PhysicsDrawDebugVehicle@BGVehicles@@UEAAXPEBVBgVehiclePhysics@@@Z(this, vehObj);
}

/*
==============
BGVehicles::PhysicsGetPlayerPositionsOnTheVehicle
==============
*/

unsigned int __fastcall BGVehicles::PhysicsGetPlayerPositionsOnTheVehicle(BGVehicles *this, int vehEntNum, int *playerNums, vec3_t *positionsWs, float *factors, unsigned __int8 *seats, unsigned int maxPlayers)
{
  return ?PhysicsGetPlayerPositionsOnTheVehicle@BGVehicles@@UEAAIHPEAHPEATvec3_t@@PEAMPEAEI@Z(this, vehEntNum, playerNums, positionsWs, factors, seats, maxPlayers);
}

/*
==============
BGVehicles::PathUpdatePos
==============
*/

void __fastcall BGVehicles::PathUpdatePos(BGVehicles *this, const int entNum, const float deltaTime, const float manualSpeed, VehiclePathPos *vpp, float *inOutManualTime, vec3_t *outNextOrigin, vec3_t *outNextAngles)
{
  ?PathUpdatePos@BGVehicles@@UEBAXHMMPEAUVehiclePathPos@@AEAMAEATvec3_t@@2@Z(this, entNum, deltaTime, manualSpeed, vpp, inOutManualTime, outNextOrigin, outNextAngles);
}

/*
==============
BGVehicles::PathIsEnd
==============
*/

bool __fastcall BGVehicles::PathIsEnd(BGVehicles *this, VehiclePathPos *vpp)
{
  return ?PathIsEnd@BGVehicles@@UEBA_NPEAUVehiclePathPos@@@Z(this, vpp);
}

/*
==============
BGVehicles::PathComputeLookAhead
==============
*/

void __fastcall BGVehicles::PathComputeLookAhead(BGVehicles *this, __int16 nodeIndex, const vec3_t *curPos, float lookAheadDist, vec3_t *outLookAhead)
{
  ?PathComputeLookAhead@BGVehicles@@UEBAXFAEBTvec3_t@@MAEAT2@@Z(this, nodeIndex, curPos, lookAheadDist, outLookAhead);
}

/*
==============
BGVehicles::BgIsDobjValidForVehicle
==============
*/
char BGVehicles::BgIsDobjValidForVehicle(BGVehicles *this, const DObj *dobj)
{
  return 1;
}

/*
==============
BGVehicles::IsClient
==============
*/
bool BGVehicles::IsClient(BGVehicles *this)
{
  return 0;
}

/*
==============
BGVehicles::PathComputeLookAhead
==============
*/
void BGVehicles::PathComputeLookAhead(BGVehicles *this, __int16 nodeIndex, const vec3_t *curPos, float lookAheadDist)
{
  ;
}

/*
==============
BGVehicles::PathComputeLookAhead
==============
*/
void BGVehicles::PathComputeLookAhead(BGVehicles *this, const float manualSpeed, const VehiclePathPos *vpp, const float manualTime)
{
  ;
}

/*
==============
BGVehicles::PathCountNodes
==============
*/
__int64 BGVehicles::PathCountNodes(BGVehicles *this, __int16 nodeIndex)
{
  return 0i64;
}

/*
==============
BGVehicles::PathGetNode
==============
*/
const VehiclePathNode *BGVehicles::PathGetNode(BGVehicles *this, __int16 nodeIndex)
{
  return 0i64;
}

/*
==============
BGVehicles::PathInit
==============
*/
void BGVehicles::PathInit(BGVehicles *this, __int16 nodeIndex, VehiclePathPos *vpp)
{
  ;
}

/*
==============
BGVehicles::PathIsEnd
==============
*/
bool BGVehicles::PathIsEnd(BGVehicles *this, VehiclePathPos *vpp)
{
  return 0;
}

/*
==============
BGVehicles::PathReset
==============
*/
void BGVehicles::PathReset(BGVehicles *this, VehiclePathPos *vpp)
{
  ;
}

/*
==============
BGVehicles::PathUpdatePos
==============
*/
void BGVehicles::PathUpdatePos(BGVehicles *this, const int entNum, const float deltaTime, const float manualSpeed)
{
  ;
}

/*
==============
BGVehicles::PhysicsDrawDebugVehicle
==============
*/
void BGVehicles::PhysicsDrawDebugVehicle(BGVehicles *this, const BgVehiclePhysics *vehObj)
{
  ;
}

/*
==============
BGVehicles::PhysicsGetPlayerPositionsOnTheVehicle
==============
*/
__int64 BGVehicles::PhysicsGetPlayerPositionsOnTheVehicle(BGVehicles *this, int vehEntNum, int *playerNums, vec3_t *positionsWs)
{
  return 0i64;
}

