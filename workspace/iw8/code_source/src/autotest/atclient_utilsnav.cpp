/*
==============
ATClient_NavGetTileId
==============
*/

bool __fastcall ATClient_NavGetTileId(const LocalClientNum_t localClientNum, const vec3_t *pos, int *tileIdX, int *tileIdY)
{
  return ?ATClient_NavGetTileId@@YA_NW4LocalClientNum_t@@AEBTvec3_t@@PEAH2@Z(localClientNum, pos, tileIdX, tileIdY);
}

/*
==============
ATClient_NavIsClientInGulag
==============
*/

bool __fastcall ATClient_NavIsClientInGulag(const LocalClientNum_t localClientNum)
{
  return ?ATClient_NavIsClientInGulag@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_NavIsClientOutOfBounds
==============
*/

bool __fastcall ATClient_NavIsClientOutOfBounds(const LocalClientNum_t localClientNum)
{
  return ?ATClient_NavIsClientOutOfBounds@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_NavTeleport
==============
*/

void __fastcall ATClient_NavTeleport(const LocalClientNum_t localClientNum, const vec3_t *destination, const vec3_t *angles)
{
  ?ATClient_NavTeleport@@YAXW4LocalClientNum_t@@Tvec3_t@@1@Z(localClientNum, destination, angles);
}

/*
==============
ATClient_NavTeleportPre
==============
*/

bool __fastcall ATClient_NavTeleportPre(const LocalClientNum_t localClientNum, const vec3_t *destination, const vec3_t *angles)
{
  return ?ATClient_NavTeleportPre@@YA_NW4LocalClientNum_t@@Tvec3_t@@1@Z(localClientNum, destination, angles);
}

/*
==============
ATClient_NavGetClientID
==============
*/

const char *__fastcall ATClient_NavGetClientID(const LocalClientNum_t localClientNum)
{
  return ?ATClient_NavGetClientID@@YAPEBDW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_NavGetPointBelowPoint
==============
*/

bool __fastcall ATClient_NavGetPointBelowPoint(const vec3_t *pos, vec3_t *outPos)
{
  return ?ATClient_NavGetPointBelowPoint@@YA_NAEBTvec3_t@@PEAT1@@Z(pos, outPos);
}

/*
==============
ATCliet_NavIsClientOnGround
==============
*/

int __fastcall ATCliet_NavIsClientOnGround(const LocalClientNum_t localClientNum)
{
  return ?ATCliet_NavIsClientOnGround@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_NavGetLocalClientPosition
==============
*/

int __fastcall ATClient_NavGetLocalClientPosition(const LocalClientNum_t localClientNum, vec3_t *outPosition, vec3_t *outAngles)
{
  return ?ATClient_NavGetLocalClientPosition@@YAHW4LocalClientNum_t@@PEATvec3_t@@1@Z(localClientNum, outPosition, outAngles);
}

/*
==============
ATClient_NavGetPositionsRandom
==============
*/

int __fastcall ATClient_NavGetPositionsRandom(const vec3_t *origin, float radius, const int numPoints, int *outNumPoints, vec3_t *outPoint)
{
  return ?ATClient_NavGetPositionsRandom@@YAHTvec3_t@@MHPEAHPEAT1@@Z(origin, radius, numPoints, outNumPoints, outPoint);
}

/*
==============
ATClient_NavGetTileCollisionBounds
==============
*/

bool __fastcall ATClient_NavGetTileCollisionBounds(const LocalClientNum_t localClientNum, const vec3_t *pos, vec3_t *outMin, vec3_t *outMax, int *tileIdX, int *tileIdY)
{
  return ?ATClient_NavGetTileCollisionBounds@@YA_NW4LocalClientNum_t@@AEBTvec3_t@@PEAT2@2PEAH3@Z(localClientNum, pos, outMin, outMax, tileIdX, tileIdY);
}

/*
==============
ATClient_NavGetPerfTestBounds
==============
*/

bool __fastcall ATClient_NavGetPerfTestBounds(vec3_t *min, vec3_t *max)
{
  return ?ATClient_NavGetPerfTestBounds@@YA_NPEATvec3_t@@0@Z(min, max);
}

/*
==============
ATClient_NavIsNoClip
==============
*/

bool __fastcall ATClient_NavIsNoClip(const LocalClientNum_t localClientNum)
{
  return ?ATClient_NavIsNoClip@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_NavGetMeshBoundsMinMax
==============
*/

bool __fastcall ATClient_NavGetMeshBoundsMinMax(vec3_t *outBoundsMin, vec3_t *outBoundsMax, float *outRadius)
{
  return ?ATClient_NavGetMeshBoundsMinMax@@YA_NPEATvec3_t@@0PEAM@Z(outBoundsMin, outBoundsMax, outRadius);
}

/*
==============
ATClient_GetClosestVerticalPos
==============
*/

bool __fastcall ATClient_GetClosestVerticalPos(const vec3_t *pos, vec3_t *outPos)
{
  return ?ATClient_GetClosestVerticalPos@@YA_NAEBTvec3_t@@PEAT1@@Z(pos, outPos);
}

/*
==============
ATClient_NavTeleportPost
==============
*/

bool __fastcall ATClient_NavTeleportPost(const LocalClientNum_t localClientNum, const vec3_t *destination, const vec3_t *angles)
{
  return ?ATClient_NavTeleportPost@@YA_NW4LocalClientNum_t@@Tvec3_t@@1@Z(localClientNum, destination, angles);
}

/*
==============
ATCliet_NavIsClientAtRest
==============
*/

bool __fastcall ATCliet_NavIsClientAtRest(const LocalClientNum_t localClientNum)
{
  return ?ATCliet_NavIsClientAtRest@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_NavSetNoClip
==============
*/

bool __fastcall ATClient_NavSetNoClip(const LocalClientNum_t localClientNum, bool noClipOn)
{
  return ?ATClient_NavSetNoClip@@YA_NW4LocalClientNum_t@@_N@Z(localClientNum, noClipOn);
}

/*
==============
ATClient_NavForceTileCollisionLoad
==============
*/

void __fastcall ATClient_NavForceTileCollisionLoad(const LocalClientNum_t localClientNum, const int tileIdX, const int tileIdY)
{
  ?ATClient_NavForceTileCollisionLoad@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, tileIdX, tileIdY);
}

/*
==============
ATClient_NavGetCollisionTileSpan
==============
*/

bool __fastcall ATClient_NavGetCollisionTileSpan(const vec3_t *min, const vec3_t *max, int *tileIdX, int *tileIdY, int *tileSpanX, int *tileSpanY)
{
  return ?ATClient_NavGetCollisionTileSpan@@YA_NAEBTvec3_t@@0PEAH111@Z(min, max, tileIdX, tileIdY, tileSpanX, tileSpanY);
}

/*
==============
ATClient_NavGetPositionRandom
==============
*/

int __fastcall ATClient_NavGetPositionRandom(const vec3_t *origin, float radius, vec3_t *outPoint)
{
  return ?ATClient_NavGetPositionRandom@@YAHTvec3_t@@MPEAT1@@Z(origin, radius, outPoint);
}

/*
==============
ATClient_GetClosestVerticalPos
==============
*/
__int64 ATClient_GetClosestVerticalPos(const vec3_t *pos, vec3_t *outPos)
{
  unsigned __int8 v4; 
  bfx::AreaHandle pOutArea; 
  __int64 v7; 
  vec3_t outClosestPos; 

  v7 = -2i64;
  if ( !outPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 439, ASSERT_TYPE_ASSERT, "(outPos)", (const char *)&queryFormat, "outPos") )
    __debugbreak();
  bfx::AreaHandle::AreaHandle(&pOutArea);
  if ( Nav_GetClosestVerticalPosDefault(pos, &outClosestPos, &pOutArea) )
  {
    *outPos = outClosestPos;
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  bfx::AreaHandle::~AreaHandle(&pOutArea);
  return v4;
}

/*
==============
ATClient_NavForceTileCollisionLoad
==============
*/
void ATClient_NavForceTileCollisionLoad(const LocalClientNum_t localClientNum, const int tileIdX, const int tileIdY)
{
  __int32 v3; 
  unsigned int v6; 
  const CollisionTile **i; 
  const CollisionTile *v8; 
  unsigned int v9; 
  unsigned int v10; 
  __int32 v11; 
  int v12; 
  __int16 gridIdx; 
  __int16 v14; 

  v3 = 3 * localClientNum + 2;
  if ( (unsigned int)v3 >= 8 )
  {
    v12 = 8;
    v11 = 3 * localClientNum + 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 256, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v6 = 0;
  for ( i = g_worldCollision_CollisionTiles; ; ++i )
  {
    v8 = *i;
    if ( *i )
    {
      v9 = v8->gridId[0];
      if ( v9 == tileIdX )
      {
        v10 = v8->gridId[1];
        if ( v10 == tileIdY )
          break;
      }
    }
    if ( ++v6 >= 0x400 )
      return;
  }
  if ( !WorldCollision_HasCollisionTileCollision((const Physics_WorldId)v3, v9, v10) || (gridIdx = v8->gridId[0], v14 = v8->gridId[1], !WorldCollision_IsCollisionReadyAt((const Physics_WorldId)v3, (const vec2_t *)&v8->origin, &gridIdx)) )
    CL_TransientsCollisionMP_LoadIndividualTileTransient(v6, 0);
}

/*
==============
ATClient_NavGetClientID
==============
*/
char *ATClient_NavGetClientID(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const char *StringSafe; 
  int ControllerFromClient; 
  char *v4; 

  v1 = localClientNum;
  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 79, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( (int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 80, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  StringSafe = Dvar_GetStringSafe("PRSMLSKTP");
  if ( !StringSafe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 83, ASSERT_TYPE_ASSERT, "(userName)", (const char *)&queryFormat, "userName") )
    __debugbreak();
  if ( !*StringSafe )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    StringSafe = CL_GetUsernameForLocalClient(ControllerFromClient);
    if ( !StringSafe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 90, ASSERT_TYPE_ASSERT, "(userName)", (const char *)&queryFormat, "userName") )
      __debugbreak();
  }
  v4 = s_clientUID[v1];
  j_sprintf(v4, "atc-%s", StringSafe);
  return v4;
}

/*
==============
ATClient_NavGetCollisionTileSpan
==============
*/
bool ATClient_NavGetCollisionTileSpan(const vec3_t *min, const vec3_t *max, int *tileIdX, int *tileIdY, int *tileSpanX, int *tileSpanY)
{
  if ( !tileIdX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 64, ASSERT_TYPE_ASSERT, "(tileIdX)", (const char *)&queryFormat, "tileIdX") )
    __debugbreak();
  if ( !tileIdY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 65, ASSERT_TYPE_ASSERT, "(tileIdY)", (const char *)&queryFormat, "tileIdY") )
    __debugbreak();
  if ( !tileSpanX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 66, ASSERT_TYPE_ASSERT, "(tileSpanX)", (const char *)&queryFormat, "tileSpanX") )
    __debugbreak();
  if ( !tileSpanY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 67, ASSERT_TYPE_ASSERT, "(tileSpanY)", (const char *)&queryFormat, "tileSpanY") )
    __debugbreak();
  return 0;
}

/*
==============
ATClient_NavGetLocalClientPosition
==============
*/
__int64 ATClient_NavGetLocalClientPosition(const LocalClientNum_t localClientNum, vec3_t *outPosition, vec3_t *outAngles)
{
  ClActiveClientMP *ClientMP; 
  __int64 v7; 
  unsigned int clviewangles_aab; 
  __int128 v9; 
  __int128 v10; 
  float v11; 
  int v15[3]; 
  __int64 v16; 
  float v17; 

  v16 = -2i64;
  if ( !outPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 344, ASSERT_TYPE_ASSERT, "(outPosition)", (const char *)&queryFormat, "outPosition") )
    __debugbreak();
  if ( !outAngles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 345, ASSERT_TYPE_ASSERT, "(outAngles)", (const char *)&queryFormat, "outAngles") )
    __debugbreak();
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v7 = (__int64)ClientMP->GetPlayerState(ClientMP);
  *(double *)outPosition->v = *(double *)(v7 + 48);
  outPosition->v[2] = *(float *)(v7 + 56);
  clviewangles_aab = ClientMP->clviewangles_aab;
  v15[0] = LODWORD(ClientMP->clViewangles.clViewangles.v[0]) ^ ((((_DWORD)ClientMP + 428) ^ clviewangles_aab) * ((((_DWORD)ClientMP + 428) ^ clviewangles_aab) + 2));
  v15[1] = LODWORD(ClientMP->clViewangles.clViewangles.v[1]) ^ ((((_DWORD)ClientMP + 432) ^ clviewangles_aab) * ((((_DWORD)ClientMP + 432) ^ clviewangles_aab) + 2));
  v15[2] = ((((_DWORD)ClientMP + 436) ^ clviewangles_aab) * ((((_DWORD)ClientMP + 436) ^ clviewangles_aab) + 2)) ^ LODWORD(ClientMP->clViewangles.clViewangles.v[2]);
  v10 = (unsigned int)v15[0];
  *(float *)&v10 = *(float *)v15 + *(float *)(v7 + 180);
  v9 = v10;
  v11 = *(float *)&v15[1] + *(float *)(v7 + 184);
  *(float *)&v10 = *(float *)&v15[2] + *(float *)(v7 + 188);
  *(double *)&v9 = AngleNormalize360(*(const float *)&v9);
  _XMM8 = v9;
  AngleNormalize360(v11);
  *(double *)&v9 = AngleNormalize360(*(const float *)&v10);
  v17 = *(float *)&v9;
  __asm { vunpcklps xmm0, xmm8, xmm6 }
  *(double *)outAngles->v = *(double *)&_XMM0;
  outAngles->v[2] = v17;
  memset(v15, 0, sizeof(v15));
  return 1i64;
}

/*
==============
ATClient_NavGetMeshBoundsMinMax
==============
*/
bool ATClient_NavGetMeshBoundsMinMax(vec3_t *outBoundsMin, vec3_t *outBoundsMax, float *outRadius)
{
  bool result; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  Bounds pOutBounds; 

  if ( !outBoundsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 369, ASSERT_TYPE_ASSERT, "(outBoundsMax)", (const char *)&queryFormat, "outBoundsMax") )
    __debugbreak();
  if ( !outBoundsMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 370, ASSERT_TYPE_ASSERT, "(outBoundsMin)", (const char *)&queryFormat, "outBoundsMin") )
    __debugbreak();
  if ( !outRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 371, ASSERT_TYPE_ASSERT, "(outRadius)", (const char *)&queryFormat, "outRadius") )
    __debugbreak();
  result = Nav_GetBounds(&pOutBounds);
  if ( result )
  {
    v7 = pOutBounds.midPoint.v[0];
    v8 = pOutBounds.halfSize.v[1];
    v9 = pOutBounds.midPoint.v[1];
    v10 = pOutBounds.halfSize.v[2];
    v11 = pOutBounds.midPoint.v[2];
    result = 1;
    v12 = pOutBounds.halfSize.v[0];
    outBoundsMax->v[0] = pOutBounds.halfSize.v[0] + pOutBounds.midPoint.v[0];
    outBoundsMax->v[1] = v8 + v9;
    outBoundsMax->v[2] = v10 + v11;
    outBoundsMin->v[0] = v7 - v12;
    outBoundsMin->v[1] = v9 - v8;
    outBoundsMin->v[2] = v11 - v10;
    *outRadius = fsqrt((float)((float)(v8 * v8) + (float)(v12 * v12)) + (float)(v10 * v10));
  }
  return result;
}

/*
==============
ATClient_NavGetPerfTestBounds
==============
*/
bool ATClient_NavGetPerfTestBounds(vec3_t *min, vec3_t *max)
{
  const dvar_t *v4; 
  float value; 
  const dvar_t *v6; 
  float v7; 
  const dvar_t *v8; 
  float v9; 
  const dvar_t *v10; 
  float v11; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  bool result; 

  if ( !min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 35, ASSERT_TYPE_ASSERT, "(min)", (const char *)&queryFormat, "min") )
    __debugbreak();
  if ( !max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 36, ASSERT_TYPE_ASSERT, "(max)", (const char *)&queryFormat, "max") )
    __debugbreak();
  v4 = DVARFLT_ATClient_PerfClientMinX;
  if ( !DVARFLT_ATClient_PerfClientMinX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientMinX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  v6 = DVARFLT_ATClient_PerfClientMaxX;
  if ( !DVARFLT_ATClient_PerfClientMaxX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientMaxX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.value;
  if ( v7 < value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 40, ASSERT_TYPE_ASSERT, "(maxX >= minX)", (const char *)&queryFormat, "maxX >= minX") )
    __debugbreak();
  v8 = DVARFLT_ATClient_PerfClientMinY;
  if ( !DVARFLT_ATClient_PerfClientMinY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientMinY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.value;
  v10 = DVARFLT_ATClient_PerfClientMaxY;
  if ( !DVARFLT_ATClient_PerfClientMaxY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientMaxY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.value;
  if ( v11 < v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 44, ASSERT_TYPE_ASSERT, "(maxY >= minY)", (const char *)&queryFormat, "maxY >= minY") )
    __debugbreak();
  v12 = DVARFLT_ATClient_PerfClientMinZ;
  if ( !DVARFLT_ATClient_PerfClientMinZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientMinZ") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = v12->current.value;
  v14 = DVARFLT_ATClient_PerfClientMaxZ;
  if ( !DVARFLT_ATClient_PerfClientMaxZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientMaxZ") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v15 = v14->current.value;
  if ( v15 < v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 48, ASSERT_TYPE_ASSERT, "(maxZ >= minZ)", (const char *)&queryFormat, "maxZ >= minZ") )
    __debugbreak();
  result = 1;
  min->v[0] = value;
  min->v[1] = v9;
  min->v[2] = v13;
  max->v[0] = v7;
  max->v[1] = v11;
  max->v[2] = v15;
  return result;
}

/*
==============
ATClient_NavGetPointBelowPoint
==============
*/
__int64 ATClient_NavGetPointBelowPoint(const vec3_t *pos, vec3_t *outPos)
{
  nav_space_s *DefaultSpace; 
  bool Bounds; 
  __int128 v7; 
  bfx::SpaceHandle v9; 
  bool PointOnMeshBelowPoint; 
  unsigned __int8 v11; 
  bfx::SpaceHandle rhs; 
  bfx::SpaceHandle v14; 
  __int64 v15; 
  vec3_t outPoint; 
  Bounds pOutBounds; 

  v15 = -2i64;
  if ( !outPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 455, ASSERT_TYPE_ASSERT, "(outPos)", (const char *)&queryFormat, "outPos") )
    __debugbreak();
  DefaultSpace = Nav_GetDefaultSpace();
  bfx::SpaceHandle::SpaceHandle(&rhs, &DefaultSpace->hSpace);
  Bounds = Nav_GetBounds(&pOutBounds);
  if ( !Bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 460, ASSERT_TYPE_ASSERT, "(haveBounds)", (const char *)&queryFormat, "haveBounds") )
    __debugbreak();
  if ( pOutBounds.halfSize.v[0] == -3.4028235e38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 461, ASSERT_TYPE_ASSERT, "(navBounds.halfSize[0] != ( -3.402823466e+38F ))", (const char *)&queryFormat, "navBounds.halfSize[0] != BOUND_CLEAR_MIN") )
    __debugbreak();
  v7 = LODWORD(pOutBounds.halfSize.v[2]);
  *(float *)&v7 = pOutBounds.halfSize.v[2] * 2.0;
  _XMM1 = v7;
  __asm { vmaxss  xmm6, xmm1, cs:__real@42000000 }
  bfx::SpaceHandle::SpaceHandle(&v14, &rhs);
  PointOnMeshBelowPoint = Nav_TryFindPointOnMeshBelowPoint(v9, 0, pos, *(const float *)&_XMM6, &outPoint);
  if ( Bounds && PointOnMeshBelowPoint )
  {
    *outPos = outPoint;
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  bfx::SpaceHandle::~SpaceHandle(&rhs);
  return v11;
}

/*
==============
ATClient_NavGetPositionRandom
==============
*/
__int64 ATClient_NavGetPositionRandom(const vec3_t *origin, float radius, vec3_t *outPoint)
{
  nav_space_s *DefaultSpace; 
  float v6; 
  __int64 result; 
  float v8; 
  vec3_t outPoints; 
  bfx::PathSpec pathSpec; 

  pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  pathSpec.m_pathSharingPenalty = 0.0;
  pathSpec.m_maxPathSharingPenalty = 0.0;
  pathSpec.m_maxSearchDist = 0.0;
  DefaultSpace = Nav_GetDefaultSpace();
  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
  pathSpec.m_usePathSharingPenalty = 0;
  bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
  pathSpec.m_snapMode = SNAP_CLOSEST;
  if ( Nav_GetKindaRandomReachablePoints(DefaultSpace, origin, radius, 0, &pathSpec, 1, &outPoints) <= 0 )
  {
    v8 = origin->v[2];
    *(double *)outPoint->v = *(double *)origin->v;
    outPoint->v[2] = v8;
    return 0i64;
  }
  else
  {
    v6 = outPoints.v[2];
    result = 1i64;
    *(double *)outPoint->v = *(double *)outPoints.v;
    outPoint->v[2] = v6;
  }
  return result;
}

/*
==============
ATClient_NavGetPositionsRandom
==============
*/
int ATClient_NavGetPositionsRandom(const vec3_t *origin, float radius, const int numPoints, int *outNumPoints, vec3_t *outPoint)
{
  nav_space_s *DefaultSpace; 
  int result; 
  bfx::PathSpec pathSpec; 

  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  pathSpec.m_pathSharingPenalty = 0.0;
  pathSpec.m_maxPathSharingPenalty = 0.0;
  pathSpec.m_maxSearchDist = 0.0;
  DefaultSpace = Nav_GetDefaultSpace();
  *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
  pathSpec.m_usePathSharingPenalty = 0;
  bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
  pathSpec.m_snapMode = SNAP_CLOSEST;
  if ( !outPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 423, ASSERT_TYPE_ASSERT, "(outPoint)", (const char *)&queryFormat, "outPoint") )
    __debugbreak();
  if ( !outNumPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 424, ASSERT_TYPE_ASSERT, "(outNumPoints)", (const char *)&queryFormat, "outNumPoints") )
    __debugbreak();
  if ( *outNumPoints <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 425, ASSERT_TYPE_ASSERT, "(*outNumPoints > 1)", (const char *)&queryFormat, "*outNumPoints > 1") )
    __debugbreak();
  result = Nav_GetKindaRandomReachablePoints(DefaultSpace, origin, radius, 0, &pathSpec, numPoints, outPoint);
  if ( result <= 0 )
    return 0;
  *outNumPoints = result;
  return result;
}

/*
==============
ATClient_NavGetTileCollisionBounds
==============
*/
char ATClient_NavGetTileCollisionBounds(const LocalClientNum_t localClientNum, const vec3_t *pos, vec3_t *outMin, vec3_t *outMax, int *tileIdX, int *tileIdY)
{
  __int32 v10; 
  int v11; 
  const CollisionTile **i; 
  const CollisionTile *v13; 
  float v14; 
  int *v16; 
  __int64 v17; 
  __int16 gridIdx[4]; 
  int *v19; 

  v19 = tileIdY;
  if ( !outMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 292, ASSERT_TYPE_ASSERT, "(outMin)", (const char *)&queryFormat, "outMin") )
    __debugbreak();
  if ( !outMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 293, ASSERT_TYPE_ASSERT, "(outMax)", (const char *)&queryFormat, "outMax") )
    __debugbreak();
  v10 = 3 * localClientNum + 2;
  if ( (unsigned int)v10 >= 8 )
  {
    LODWORD(v17) = 3 * localClientNum + 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 296, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", v17, 8) )
      __debugbreak();
  }
  v11 = 0;
  for ( i = g_worldCollision_CollisionTiles; ; ++i )
  {
    v13 = *i;
    if ( *i )
    {
      if ( v13->havokTileShapeDataSize )
      {
        if ( WorldCollision_HasCollisionTileCollision((const Physics_WorldId)v10, v13->gridId[0], v13->gridId[1]) )
        {
          gridIdx[0] = v13->gridId[0];
          gridIdx[1] = v13->gridId[1];
          if ( WorldCollision_IsCollisionReadyAt((const Physics_WorldId)v10, (const vec2_t *)pos, gridIdx) )
          {
            v14 = v13->origin.v[0];
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(pos->v[0] - v14) & _xmm) < 4096.0 && COERCE_FLOAT(COERCE_UNSIGNED_INT(pos->v[1] - v13->origin.v[1]) & _xmm) < 4096.0 && COERCE_FLOAT(COERCE_UNSIGNED_INT(pos->v[2] - v13->origin.v[2]) & _xmm) < 4096.0 )
              break;
          }
        }
      }
    }
    if ( (unsigned int)++v11 >= 0x400 )
      return 0;
  }
  v16 = v19;
  outMax->v[0] = v14 + 4096.0;
  outMax->v[1] = v13->origin.v[1] + 4096.0;
  outMax->v[2] = v13->origin.v[2] + 4096.0;
  outMin->v[0] = v13->origin.v[0] - 4096.0;
  outMin->v[1] = v13->origin.v[1] - 4096.0;
  outMin->v[2] = v13->origin.v[2] - 4096.0;
  *tileIdX = v13->gridId[0];
  *v16 = v13->gridId[1];
  return 1;
}

/*
==============
ATClient_NavGetTileId
==============
*/
char ATClient_NavGetTileId(const LocalClientNum_t localClientNum, const vec3_t *pos, int *tileIdX, int *tileIdY)
{
  int v8; 
  int v9; 

  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 222, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 223, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  if ( ((LODWORD(pos->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(pos->v[1]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 224, ASSERT_TYPE_ASSERT, "(!IS_NAN( pos[0] ) && !IS_NAN( pos[1] ))", (const char *)&queryFormat, "!IS_NAN( pos[0] ) && !IS_NAN( pos[1] )") )
    __debugbreak();
  if ( !tileIdX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 226, ASSERT_TYPE_ASSERT, "(tileIdX)", (const char *)&queryFormat, "tileIdX") )
    __debugbreak();
  if ( !tileIdY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 227, ASSERT_TYPE_ASSERT, "(tileIdY)", (const char *)&queryFormat, "tileIdY") )
    __debugbreak();
  v8 = (int)(float)((float)(pos->v[0] - -131072.0) * 0.00012207031);
  v9 = (int)(float)((float)(pos->v[1] - -131072.0) * 0.00012207031);
  if ( (unsigned __int16)v8 > 0x1Fu || (unsigned __int16)v9 > 0x1Fu )
    return 0;
  *tileIdX = (__int16)v8;
  *tileIdY = (__int16)v9;
  return 1;
}

/*
==============
ATClient_NavIsClientInGulag
==============
*/
bool ATClient_NavIsClientInGulag(const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  __int64 v3; 

  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 158, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 159, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v3 = (__int64)ClientMP->GetPlayerState(ClientMP);
  return CG_Players_IsPlayerInGulag(localClientNum, *(_DWORD *)(v3 + 460));
}

/*
==============
ATClient_NavIsClientOutOfBounds
==============
*/
bool ATClient_NavIsClientOutOfBounds(const LocalClientNum_t localClientNum)
{
  int outResult; 

  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 169, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 170, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  outResult = -2;
  return ATClient_GetOmnvarValueInt32(localClientNum, "ui_out_of_bounds_type", -1, &outResult) && outResult == 2;
}

/*
==============
ATClient_NavIsNoClip
==============
*/
_BOOL8 ATClient_NavIsNoClip(const LocalClientNum_t localClientNum)
{
  __int64 v1; 

  v1 = localClientNum;
  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 189, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( (int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 190, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  return s_noclip[v1];
}

/*
==============
ATClient_NavSetNoClip
==============
*/
_BOOL8 ATClient_NavSetNoClip(const LocalClientNum_t localClientNum, bool noClipOn)
{
  __int64 v2; 
  _BOOL8 result; 
  bool *v5; 
  __int64 v6; 
  unsigned __int64 v7; 
  int v8; 
  int cmdsize; 
  int v10; 
  __int64 i; 
  char dest[16]; 

  v2 = localClientNum;
  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 139, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( (int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 140, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  result = s_noclip[v2];
  v5 = &s_noclip[v2];
  if ( noClipOn != result )
  {
    Com_sprintf(dest, 0x10ui64, "noclip\n");
    v6 = v2;
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v7 = -1i64;
    do
      ++v7;
    while ( dest[v7] );
    v8 = truncate_cast<int,unsigned __int64>(v7);
    cmdsize = s_cmd_textArray[v6].cmdsize;
    v10 = v8 + 1;
    if ( cmdsize + v8 + 1 <= s_cmd_textArray[v6].maxsize )
    {
      for ( i = cmdsize - 1; i >= 0; --i )
        s_cmd_textArray[v6].data[v10 + i] = s_cmd_textArray[v6].data[i];
      memcpy_0(s_cmd_textArray[v6].data, dest, v8);
      s_cmd_textArray[v6].data[v10 - 1] = 10;
      s_cmd_textArray[v6].cmdsize += v10;
    }
    else
    {
      Com_PrintError(1, "Cbuf_InsertText overflowed\n");
    }
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
    result = noClipOn;
    *v5 = noClipOn;
  }
  return result;
}

/*
==============
ATClient_NavTeleport
==============
*/
void ATClient_NavTeleport(const LocalClientNum_t localClientNum, const vec3_t *destination, const vec3_t *angles)
{
  __int64 v3; 
  __int64 v4; 
  unsigned __int64 v5; 
  int v6; 
  int cmdsize; 
  int v8; 
  __int64 i; 
  char dest[64]; 

  v3 = localClientNum;
  Com_sprintf(dest, 0x40ui64, "setviewpos %.2f %.2f %.2f %.2f %.2f\n", destination->v[0], destination->v[1], destination->v[2], angles->v[1], angles->v[0]);
  v4 = v3;
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v5 = -1i64;
  do
    ++v5;
  while ( dest[v5] );
  v6 = truncate_cast<int,unsigned __int64>(v5);
  cmdsize = s_cmd_textArray[v4].cmdsize;
  v8 = v6 + 1;
  if ( cmdsize + v6 + 1 <= s_cmd_textArray[v4].maxsize )
  {
    for ( i = cmdsize - 1; i >= 0; --i )
      s_cmd_textArray[v4].data[v8 + i] = s_cmd_textArray[v4].data[i];
    memcpy_0(s_cmd_textArray[v4].data, dest, v6);
    s_cmd_textArray[v4].data[v8 - 1] = 10;
    s_cmd_textArray[v4].cmdsize += v8;
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
}

/*
==============
ATClient_NavTeleportPost
==============
*/
char ATClient_NavTeleportPost(const LocalClientNum_t localClientNum, const vec3_t *destination, const vec3_t *angles)
{
  return 1;
}

/*
==============
ATClient_NavTeleportPre
==============
*/
char ATClient_NavTeleportPre(const LocalClientNum_t localClientNum, const vec3_t *destination, const vec3_t *angles)
{
  return 1;
}

/*
==============
ATCliet_NavIsClientAtRest
==============
*/
bool ATCliet_NavIsClientAtRest(const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  float *v3; 
  const dvar_t *v4; 

  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 101, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 102, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v3 = (float *)ClientMP->GetPlayerState(ClientMP);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = DVARFLT_ATClient_PerfSampleEpsAtRestSpeed;
  if ( !DVARFLT_ATClient_PerfSampleEpsAtRestSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfSampleEpsAtRestSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  return (float)((float)((float)(v3[15] * v3[15]) + (float)(v3[16] * v3[16])) + (float)(v3[17] * v3[17])) <= v4->current.value;
}

/*
==============
ATCliet_NavIsClientOnGround
==============
*/
__int64 ATCliet_NavIsClientOnGround(const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  __int64 v3; 
  __int16 v4; 
  __int64 result; 

  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 119, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 120, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v3 = (__int64)ClientMP->GetPlayerState(ClientMP);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 124, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = *(_WORD *)(v3 + 638);
  result = 2047i64;
  if ( v4 != 2047 )
    return (unsigned int)v4;
  return result;
}

