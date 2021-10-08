/*
==============
BgHandler::DebugString
==============
*/

void __fastcall BgHandler::DebugString(BgHandler *this, const vec3_t *point, const vec4_t *color, float scale, const char *text, int duration)
{
  ?DebugString@BgHandler@@UEBAXAEBTvec3_t@@AEBTvec4_t@@MPEBDH@Z(this, point, color, scale, text, duration);
}

/*
==============
BgHandler::EntUnlink
==============
*/

void __fastcall BgHandler::EntUnlink(BgHandler *this, LocalClientNum_t localClientNum, int entIndex)
{
  ?EntUnlink@BgHandler@@UEAAXW4LocalClientNum_t@@H@Z(this, localClientNum, entIndex);
}

/*
==============
BgHandler::DebugBoxOriented
==============
*/

void __fastcall BgHandler::DebugBoxOriented(BgHandler *this, const vec3_t *origin, const Bounds *bounds, const tmat33_t<vec3_t> *axis, const vec4_t *color, int depthTest, int duration)
{
  ?DebugBoxOriented@BgHandler@@UEBAXAEBTvec3_t@@PEBUBounds@@AEBT?$tmat33_t@Tvec3_t@@@@AEBTvec4_t@@HH@Z(this, origin, bounds, axis, color, depthTest, duration);
}

/*
==============
BgHandler::DebugBox
==============
*/

void __fastcall BgHandler::DebugBox(BgHandler *this, const vec3_t *origin, const Bounds *bounds, float yaw, const vec4_t *color, int depthTest, int duration)
{
  ?DebugBox@BgHandler@@UEBAXAEBTvec3_t@@PEBUBounds@@MAEBTvec4_t@@HH@Z(this, origin, bounds, yaw, color, depthTest, duration);
}

/*
==============
BgHandler::IsPointInVolume
==============
*/

int __fastcall BgHandler::IsPointInVolume(BgHandler *this, const vec3_t *point, int entNum)
{
  return ?IsPointInVolume@BgHandler@@UEBAHAEBTvec3_t@@H@Z(this, point, entNum);
}

/*
==============
BgHandler::FindBestConeTarget
==============
*/

bool __fastcall BgHandler::FindBestConeTarget(BgHandler *this, LocalClientNum_t localClientNum, int attackerentIndex, const vec3_t *origin, const vec3_t *dir, float range, float angle, unsigned int hitMask, int time, int *outentIndex, ConeTargetHitInfo *outHitInfo)
{
  return ?FindBestConeTarget@BgHandler@@UEBA_NW4LocalClientNum_t@@HAEBTvec3_t@@1MMIHPEAHPEAUConeTargetHitInfo@@@Z(this, localClientNum, attackerentIndex, origin, dir, range, angle, hitMask, time, outentIndex, outHitInfo);
}

/*
==============
BgHandler::DebugSphereAll
==============
*/

void __fastcall BgHandler::DebugSphereAll(BgHandler *this, const vec3_t *center, float radius, const vec4_t *colorServer, const vec4_t *colorClient, int depthTest, int duration)
{
  ?DebugSphereAll@BgHandler@@UEBAXAEBTvec3_t@@MAEBTvec4_t@@1HH@Z(this, center, radius, colorServer, colorClient, depthTest, duration);
}

/*
==============
BgHandler::IsServer
==============
*/

bool __fastcall BgHandler::IsServer(BgHandler *this)
{
  return ?IsServer@BgHandler@@UEBA_NXZ(this);
}

/*
==============
BgHandler::DebugCapsule
==============
*/

void __fastcall BgHandler::DebugCapsule(BgHandler *this, const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, int depthTest, int duration)
{
  ?DebugCapsule@BgHandler@@UEBAXAEBTvec3_t@@0MAEBTvec4_t@@HH@Z(this, start, end, radius, color, depthTest, duration);
}

/*
==============
BgHandler::GetOmnvarDataAtPmoveTime
==============
*/

void __fastcall BgHandler::GetOmnvarDataAtPmoveTime(BgHandler *this, unsigned int clientEntNum, unsigned int omnInx, int pmoveTime, OmnvarData *outData)
{
  ?GetOmnvarDataAtPmoveTime@BgHandler@@UEBAXIIHPEAUOmnvarData@@@Z(this, clientEntNum, omnInx, pmoveTime, outData);
}

/*
==============
BgHandler::DebugCone
==============
*/

void __fastcall BgHandler::DebugCone(BgHandler *this, const vec3_t *origin, const vec3_t *direction, float radius, float length, const vec4_t *color, int depthTest, int duration)
{
  ?DebugCone@BgHandler@@UEBAXAEBTvec3_t@@0MMAEBTvec4_t@@HH@Z(this, origin, direction, radius, length, color, depthTest, duration);
}

/*
==============
BgHandler::DebugLine
==============
*/

void __fastcall BgHandler::DebugLine(BgHandler *this, const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest, int duration)
{
  ?DebugLine@BgHandler@@UEBAXAEBTvec3_t@@0AEBTvec4_t@@HH@Z(this, start, end, color, depthTest, duration);
}

/*
==============
BgHandler::GetPhysicsRelationshipSystemFlag
==============
*/

Physics_RelationshipSystem __fastcall BgHandler::GetPhysicsRelationshipSystemFlag(BgHandler *this, Physics_RefSystem refSystem, entityType_s entType, entityType_s parentType)
{
  return ?GetPhysicsRelationshipSystemFlag@BgHandler@@QEAA?AW4Physics_RelationshipSystem@@W4Physics_RefSystem@@W4entityType_s@@1@Z(this, refSystem, entType, parentType);
}

/*
==============
BgHandler::DebugStar
==============
*/

void __fastcall BgHandler::DebugStar(BgHandler *this, const vec3_t *point, const vec4_t *color, int duration)
{
  ?DebugStar@BgHandler@@UEBAXAEBTvec3_t@@AEBTvec4_t@@H@Z(this, point, color, duration);
}

/*
==============
BgHandler::BotStuckCheck
==============
*/

void __fastcall BgHandler::BotStuckCheck(BgHandler *this, const vec3_t *startVel, const vec3_t *startOrigin, const playerState_s *ps, float frametime, bool body)
{
  ?BotStuckCheck@BgHandler@@UEBAXAEBTvec3_t@@0PEBUplayerState_s@@M_N@Z(this, startVel, startOrigin, ps, frametime, body);
}

/*
==============
BgHandler::IsClient
==============
*/

bool __fastcall BgHandler::IsClient(BgHandler *this)
{
  return ?IsClient@BgHandler@@UEBA_NXZ(this);
}

/*
==============
BgHandler::DebugLineAll
==============
*/

void __fastcall BgHandler::DebugLineAll(BgHandler *this, const vec3_t *start, const vec3_t *end, const vec4_t *colorServer, const vec4_t *colorClient, int depthTest, int duration)
{
  ?DebugLineAll@BgHandler@@UEBAXAEBTvec3_t@@0AEBTvec4_t@@1HH@Z(this, start, end, colorServer, colorClient, depthTest, duration);
}

/*
==============
BgHandler::BotSetAlmostGroundPlane
==============
*/

void __fastcall BgHandler::BotSetAlmostGroundPlane(BgHandler *this, const playerState_s *ps, bool newValue)
{
  ?BotSetAlmostGroundPlane@BgHandler@@UEBAXPEBUplayerState_s@@_N@Z(this, ps, newValue);
}

/*
==============
BgHandler::DebugSphere
==============
*/

void __fastcall BgHandler::DebugSphere(BgHandler *this, const vec3_t *center, float radius, const vec4_t *color, int depthTest, int duration)
{
  ?DebugSphere@BgHandler@@UEBAXAEBTvec3_t@@MAEBTvec4_t@@HH@Z(this, center, radius, color, depthTest, duration);
}

/*
==============
BgHandler::DebugCylinder
==============
*/

void __fastcall BgHandler::DebugCylinder(BgHandler *this, const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, int depthTest, int duration)
{
  ?DebugCylinder@BgHandler@@UEBAXAEBTvec3_t@@0MAEBTvec4_t@@HH@Z(this, start, end, radius, color, depthTest, duration);
}

/*
==============
BgHandler::DebugEdgeQueryResults
==============
*/

void __fastcall BgHandler::DebugEdgeQueryResults(BgHandler *this, unsigned __int64 edgeCount, const EdgeId *edgeIdPool, const float *edgeFractionPool, const float *edgeDistPool, float maxQueryDistance, int edgeFlagIndex)
{
  ?DebugEdgeQueryResults@BgHandler@@UEBAX_KQEBUEdgeId@@QEBM2MH@Z(this, edgeCount, edgeIdPool, edgeFractionPool, edgeDistPool, maxQueryDistance, edgeFlagIndex);
}

/*
==============
BgHandler::OnMountCancel
==============
*/

void __fastcall BgHandler::OnMountCancel(BgHandler *this, int clientIndex, int startTime, int endTime, int type, const vec3_t *pos, const vec3_t *angles)
{
  ?OnMountCancel@BgHandler@@UEBAXHHHHAEBTvec3_t@@0@Z(this, clientIndex, startTime, endTime, type, pos, angles);
}

/*
==============
BgHandler::BotSetAlmostGroundPlane
==============
*/
void BgHandler::BotSetAlmostGroundPlane(BgHandler *this, const playerState_s *ps, bool newValue)
{
  ;
}

/*
==============
BgHandler::BotStuckCheck
==============
*/
void BgHandler::BotStuckCheck(BgHandler *this, const vec3_t *startVel, const vec3_t *startOrigin, const playerState_s *ps)
{
  ;
}

/*
==============
BgHandler::DebugBox
==============
*/
void BgHandler::DebugBox(BgHandler *this, const vec3_t *origin, const Bounds *bounds, float yaw)
{
  ;
}

/*
==============
BgHandler::DebugBoxOriented
==============
*/
void BgHandler::DebugBoxOriented(BgHandler *this, const vec3_t *origin, const Bounds *bounds, const tmat33_t<vec3_t> *axis)
{
  ;
}

/*
==============
BgHandler::DebugCapsule
==============
*/
void BgHandler::DebugCapsule(BgHandler *this, const vec3_t *start, const vec3_t *end, float radius)
{
  ;
}

/*
==============
BgHandler::DebugCone
==============
*/
void BgHandler::DebugCone(BgHandler *this, const vec3_t *origin, const vec3_t *direction, float radius)
{
  ;
}

/*
==============
BgHandler::DebugCylinder
==============
*/
void BgHandler::DebugCylinder(BgHandler *this, const vec3_t *start, const vec3_t *end, float radius)
{
  ;
}

/*
==============
BgHandler::DebugEdgeQueryResults
==============
*/
void BgHandler::DebugEdgeQueryResults(BgHandler *this, unsigned __int64 edgeCount, const EdgeId *edgeIdPool, const float *edgeFractionPool)
{
  ;
}

/*
==============
BgHandler::DebugLine
==============
*/
void BgHandler::DebugLine(BgHandler *this, const vec3_t *start, const vec3_t *end, const vec4_t *color)
{
  ;
}

/*
==============
BgHandler::DebugLineAll
==============
*/
void BgHandler::DebugLineAll(BgHandler *this, const vec3_t *start, const vec3_t *end, const vec4_t *colorServer)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_handler.cpp", 67, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "DebugLineAll not implemented for entity") )
    __debugbreak();
}

/*
==============
BgHandler::DebugSphere
==============
*/
void BgHandler::DebugSphere(BgHandler *this, const vec3_t *center, float radius, const vec4_t *color)
{
  ;
}

/*
==============
BgHandler::DebugSphereAll
==============
*/
void BgHandler::DebugSphereAll(BgHandler *this, const vec3_t *center, float radius, const vec4_t *colorServer)
{
  ;
}

/*
==============
BgHandler::DebugStar
==============
*/
void BgHandler::DebugStar(BgHandler *this, const vec3_t *point, const vec4_t *color, int duration)
{
  ;
}

/*
==============
BgHandler::DebugString
==============
*/
void BgHandler::DebugString(BgHandler *this, const vec3_t *point, const vec4_t *color, float scale)
{
  ;
}

/*
==============
BgHandler::EntUnlink
==============
*/
void BgHandler::EntUnlink(BgHandler *this, LocalClientNum_t localClientNum, int entIndex)
{
  ;
}

/*
==============
BgHandler::FindBestConeTarget
==============
*/
bool BgHandler::FindBestConeTarget(BgHandler *this, LocalClientNum_t localClientNum, int attackerentIndex, const vec3_t *origin)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_handler.cpp", 44, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "FindBestConeTarget not implemented for entity") )
    __debugbreak();
  return 0;
}

/*
==============
BgHandler::GetOmnvarDataAtPmoveTime
==============
*/
void BgHandler::GetOmnvarDataAtPmoveTime(BgHandler *this, unsigned int clientEntNum, unsigned int omnInx, int pmoveTime)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_handler.cpp", 52, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "GetOmnvarDataAtPmoveTime not implemented for entity") )
    __debugbreak();
}

/*
==============
BgHandler::GetPhysicsRelationshipSystemFlag
==============
*/
__int64 BgHandler::GetPhysicsRelationshipSystemFlag(BgHandler *this, Physics_RefSystem refSystem, entityType_s entType, entityType_s parentType)
{
  bool v4; 

  if ( ((refSystem - 2) & 0xFFFFFFFD) != 0 )
    return 0i64;
  if ( entType != ET_TURRET )
  {
    v4 = entType == ET_VEHICLE;
    goto LABEL_7;
  }
  if ( parentType == ET_VEHICLE )
    return 1i64;
  if ( refSystem == Physics_RefSystem_CEntities )
  {
    v4 = parentType == ET_FIRST;
LABEL_7:
    if ( v4 )
      return 1i64;
  }
  return 0i64;
}

/*
==============
BgHandler::IsClient
==============
*/
bool BgHandler::IsClient(BgHandler *this)
{
  return 0;
}

/*
==============
BgHandler::IsPointInVolume
==============
*/
__int64 BgHandler::IsPointInVolume(BgHandler *this, const vec3_t *point, int entNum)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_handler.cpp", 37, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "IsPointInVolume not implemented for entity") )
    __debugbreak();
  return 0i64;
}

/*
==============
BgHandler::IsServer
==============
*/
bool BgHandler::IsServer(BgHandler *this)
{
  return 0;
}

/*
==============
BgHandler::OnMountCancel
==============
*/
void BgHandler::OnMountCancel(BgHandler *this, int clientIndex, int startTime, int endTime)
{
  ;
}

