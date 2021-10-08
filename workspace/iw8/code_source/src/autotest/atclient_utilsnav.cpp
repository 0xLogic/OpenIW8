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
  unsigned __int8 v5; 
  bfx::AreaHandle pOutArea; 
  __int64 v8; 
  vec3_t outClosestPos; 

  v8 = -2i64;
  _RBX = outPos;
  if ( !outPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 439, ASSERT_TYPE_ASSERT, "(outPos)", (const char *)&queryFormat, "outPos") )
    __debugbreak();
  bfx::AreaHandle::AreaHandle(&pOutArea);
  if ( Nav_GetClosestVerticalPosDefault(pos, &outClosestPos, &pOutArea) )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+68h+outClosestPos]
      vmovsd  qword ptr [rbx], xmm0
    }
    _RBX->v[2] = outClosestPos.v[2];
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  bfx::AreaHandle::~AreaHandle(&pOutArea);
  return v5;
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
  unsigned int clviewangles_aab; 
  __int64 result; 
  int v30[3]; 
  __int64 v31; 
  float v32; 
  char v34; 
  void *retaddr; 

  _RAX = &retaddr;
  v31 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RSI = outAngles;
  _RDI = outPosition;
  if ( !outPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 344, ASSERT_TYPE_ASSERT, "(outPosition)", (const char *)&queryFormat, "outPosition") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 345, ASSERT_TYPE_ASSERT, "(outAngles)", (const char *)&queryFormat, "outAngles") )
    __debugbreak();
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  _RAX = (__int64)ClientMP->GetPlayerState(ClientMP);
  __asm
  {
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rdi], xmm0
  }
  _RDI->v[2] = *(float *)(_RAX + 56);
  clviewangles_aab = ClientMP->clviewangles_aab;
  v30[0] = LODWORD(ClientMP->clViewangles.clViewangles.v[0]) ^ ((((_DWORD)ClientMP + 428) ^ clviewangles_aab) * ((((_DWORD)ClientMP + 428) ^ clviewangles_aab) + 2));
  v30[1] = LODWORD(ClientMP->clViewangles.clViewangles.v[1]) ^ ((((_DWORD)ClientMP + 432) ^ clviewangles_aab) * ((((_DWORD)ClientMP + 432) ^ clviewangles_aab) + 2));
  v30[2] = ((((_DWORD)ClientMP + 436) ^ clviewangles_aab) * ((((_DWORD)ClientMP + 436) ^ clviewangles_aab) + 2)) ^ LODWORD(ClientMP->clViewangles.clViewangles.v[2]);
  __asm
  {
    vmovss  xmm0, [rsp+0A8h+var_78]
    vaddss  xmm0, xmm0, dword ptr [r8+0B4h]; angle
    vmovss  xmm1, [rsp+0A8h+var_74]
    vaddss  xmm6, xmm1, dword ptr [r8+0B8h]
    vmovss  xmm2, [rsp+0A8h+var_70]
    vaddss  xmm7, xmm2, dword ptr [r8+0BCh]
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm6; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm7; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovss  [rsp+0A8h+var_58], xmm0
    vunpcklps xmm0, xmm8, xmm6
    vmovsd  qword ptr [rsi], xmm0
  }
  _RSI->v[2] = v32;
  memset(v30, 0, sizeof(v30));
  result = 1i64;
  _R11 = &v34;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0A8h+var_38]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
ATClient_NavGetMeshBoundsMinMax
==============
*/
bool ATClient_NavGetMeshBoundsMinMax(vec3_t *outBoundsMin, vec3_t *outBoundsMax, float *outRadius)
{
  bool result; 
  Bounds pOutBounds; 

  _RSI = outRadius;
  _RDI = outBoundsMax;
  _RBX = outBoundsMin;
  if ( !outBoundsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 369, ASSERT_TYPE_ASSERT, "(outBoundsMax)", (const char *)&queryFormat, "outBoundsMax") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 370, ASSERT_TYPE_ASSERT, "(outBoundsMin)", (const char *)&queryFormat, "outBoundsMin") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 371, ASSERT_TYPE_ASSERT, "(outRadius)", (const char *)&queryFormat, "outRadius") )
    __debugbreak();
  result = Nav_GetBounds(&pOutBounds);
  if ( result )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+78h+pOutBounds.midPoint]
      vmovss  xmm5, dword ptr [rsp+78h+pOutBounds.halfSize+4]
      vmovss  xmm3, dword ptr [rsp+78h+pOutBounds.midPoint+4]
      vmovss  xmm4, dword ptr [rsp+78h+pOutBounds.halfSize+8]
      vmovss  xmm2, dword ptr [rsp+78h+pOutBounds.midPoint+8]
      vmovaps [rsp+78h+var_28], xmm6
    }
    result = 1;
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+78h+pOutBounds.halfSize]
      vaddss  xmm0, xmm6, xmm1
      vmovss  dword ptr [rdi], xmm0
      vsubss  xmm1, xmm1, xmm6
      vaddss  xmm0, xmm5, xmm3
      vmovss  dword ptr [rdi+4], xmm0
      vaddss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rdi+8], xmm0
      vsubss  xmm0, xmm3, xmm5
      vmovss  dword ptr [rbx], xmm1
      vsubss  xmm1, xmm2, xmm4
      vmovss  dword ptr [rbx+4], xmm0
      vmulss  xmm0, xmm6, xmm6
      vmovaps xmm6, [rsp+78h+var_28]
      vmulss  xmm2, xmm5, xmm5
      vmovss  dword ptr [rbx+8], xmm1
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vmovss  dword ptr [rsi], xmm0
    }
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
  char v15; 
  bool result; 
  char v32; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RDI = max;
  __asm { vmovaps xmmword ptr [rax-38h], xmm7 }
  _RSI = min;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  if ( !min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 35, ASSERT_TYPE_ASSERT, "(min)", (const char *)&queryFormat, "min") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 36, ASSERT_TYPE_ASSERT, "(max)", (const char *)&queryFormat, "max") )
    __debugbreak();
  _RBX = DVARFLT_ATClient_PerfClientMinX;
  if ( !DVARFLT_ATClient_PerfClientMinX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientMinX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm11, dword ptr [rbx+28h] }
  _RBX = DVARFLT_ATClient_PerfClientMaxX;
  if ( !DVARFLT_ATClient_PerfClientMaxX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientMaxX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm10, dword ptr [rbx+28h]
    vcomiss xmm10, xmm11
  }
  if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 40, ASSERT_TYPE_ASSERT, "(maxX >= minX)", (const char *)&queryFormat, "maxX >= minX") )
    __debugbreak();
  _RBX = DVARFLT_ATClient_PerfClientMinY;
  if ( !DVARFLT_ATClient_PerfClientMinY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientMinY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm9, dword ptr [rbx+28h] }
  _RBX = DVARFLT_ATClient_PerfClientMaxY;
  if ( !DVARFLT_ATClient_PerfClientMaxY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientMaxY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm8, dword ptr [rbx+28h]
    vcomiss xmm8, xmm9
  }
  if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 44, ASSERT_TYPE_ASSERT, "(maxY >= minY)", (const char *)&queryFormat, "maxY >= minY") )
    __debugbreak();
  _RBX = DVARFLT_ATClient_PerfClientMinZ;
  if ( !DVARFLT_ATClient_PerfClientMinZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientMinZ") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  _RBX = DVARFLT_ATClient_PerfClientMaxZ;
  if ( !DVARFLT_ATClient_PerfClientMaxZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientMaxZ") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+28h]
    vcomiss xmm6, xmm7
  }
  if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 48, ASSERT_TYPE_ASSERT, "(maxZ >= minZ)", (const char *)&queryFormat, "maxZ >= minZ") )
    __debugbreak();
  _R11 = &v32;
  result = 1;
  __asm
  {
    vmovss  dword ptr [rsi], xmm11
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovss  dword ptr [rsi+4], xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovss  dword ptr [rsi+8], xmm7
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovss  dword ptr [rdi], xmm10
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [rdi+4], xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovss  dword ptr [rdi+8], xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
  }
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
  bool v8; 
  bool v9; 
  bfx::SpaceHandle v15; 
  bool PointOnMeshBelowPoint; 
  unsigned __int8 v18; 
  __int64 result; 
  bfx::SpaceHandle rhs; 
  bfx::SpaceHandle v22; 
  __int64 v23; 
  vec3_t outPoint; 
  Bounds pOutBounds; 
  void *retaddr; 

  _RAX = &retaddr;
  v23 = -2i64;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RBX = outPos;
  if ( !outPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 455, ASSERT_TYPE_ASSERT, "(outPos)", (const char *)&queryFormat, "outPos") )
    __debugbreak();
  DefaultSpace = Nav_GetDefaultSpace();
  bfx::SpaceHandle::SpaceHandle(&rhs, &DefaultSpace->hSpace);
  Bounds = Nav_GetBounds(&pOutBounds);
  v8 = !Bounds;
  if ( !Bounds )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 460, ASSERT_TYPE_ASSERT, "(haveBounds)", (const char *)&queryFormat, "haveBounds");
    v8 = !v9;
    if ( v9 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+pOutBounds.halfSize]
    vucomiss xmm0, cs:__real@ff7fffff
  }
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 461, ASSERT_TYPE_ASSERT, "(navBounds.halfSize[0] != ( -3.402823466e+38F ))", (const char *)&queryFormat, "navBounds.halfSize[0] != BOUND_CLEAR_MIN") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+pOutBounds.halfSize+8]
    vmulss  xmm1, xmm0, cs:__real@40000000
    vmaxss  xmm6, xmm1, cs:__real@42000000
  }
  bfx::SpaceHandle::SpaceHandle(&v22, &rhs);
  __asm { vmovaps xmm3, xmm6; probeDistance }
  PointOnMeshBelowPoint = Nav_TryFindPointOnMeshBelowPoint(v15, 0, pos, *(const float *)&_XMM3, &outPoint);
  if ( Bounds && PointOnMeshBelowPoint )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+0A8h+outPoint]
      vmovsd  qword ptr [rbx], xmm0
    }
    _RBX->v[2] = outPoint.v[2];
    v18 = 1;
  }
  else
  {
    v18 = 0;
  }
  bfx::SpaceHandle::~SpaceHandle(&rhs);
  result = v18;
  __asm { vmovaps xmm6, [rsp+0A8h+var_28] }
  return result;
}

/*
==============
ATClient_NavGetPositionRandom
==============
*/

__int64 __fastcall ATClient_NavGetPositionRandom(const vec3_t *origin, double radius, vec3_t *outPoint)
{
  nav_space_s *DefaultSpace; 
  float v12; 
  __int64 result; 
  float v14; 
  vec3_t outPoints; 
  bfx::PathSpec pathSpec; 

  __asm { vmovaps [rsp+0D8h+var_28], xmm6 }
  _RDI = outPoint;
  _RSI = origin;
  __asm
  {
    vmovaps xmm6, xmm1
    vxorps  xmm0, xmm0, xmm0
  }
  pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  __asm
  {
    vmovss  [rsp+0D8h+var_88.m_pathSharingPenalty], xmm0
    vmovss  [rsp+0D8h+var_88.m_maxPathSharingPenalty], xmm0
    vmovss  [rsp+0D8h+var_88.m_maxSearchDist], xmm0
  }
  DefaultSpace = Nav_GetDefaultSpace();
  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
  pathSpec.m_usePathSharingPenalty = 0;
  bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
  pathSpec.m_snapMode = SNAP_CLOSEST;
  __asm { vmovaps xmm2, xmm6; radius }
  if ( Nav_GetKindaRandomReachablePoints(DefaultSpace, _RSI, *(float *)&_XMM2, 0, &pathSpec, 1, &outPoints) <= 0 )
  {
    v14 = _RSI->v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rsi]
      vmovsd  qword ptr [rdi], xmm0
    }
    _RDI->v[2] = v14;
    result = 0i64;
  }
  else
  {
    __asm { vmovsd  xmm0, qword ptr [rsp+0D8h+var_98] }
    v12 = outPoints.v[2];
    result = 1i64;
    __asm { vmovsd  qword ptr [rdi], xmm0 }
    _RDI->v[2] = v12;
  }
  __asm { vmovaps xmm6, [rsp+0D8h+var_28] }
  return result;
}

/*
==============
ATClient_NavGetPositionsRandom
==============
*/

int __fastcall ATClient_NavGetPositionsRandom(const vec3_t *origin, double radius, const int numPoints, int *outNumPoints, vec3_t *outPoint)
{
  nav_space_s *DefaultSpace; 
  int result; 
  bfx::PathSpec pathSpec; 

  __asm
  {
    vmovaps [rsp+0E8h+var_48], xmm6
    vmovaps xmm6, xmm1
    vxorps  xmm0, xmm0, xmm0
  }
  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  __asm
  {
    vmovss  [rsp+0E8h+pathSpec.m_pathSharingPenalty], xmm0
    vmovss  [rsp+0E8h+pathSpec.m_maxPathSharingPenalty], xmm0
    vmovss  [rsp+0E8h+pathSpec.m_maxSearchDist], xmm0
  }
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
  __asm { vmovaps xmm2, xmm6; radius }
  result = Nav_GetKindaRandomReachablePoints(DefaultSpace, origin, *(float *)&_XMM2, 0, &pathSpec, numPoints, outPoint);
  if ( result <= 0 )
    result = 0;
  else
    *outNumPoints = result;
  __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
  return result;
}

/*
==============
ATClient_NavGetTileCollisionBounds
==============
*/
bool ATClient_NavGetTileCollisionBounds(const LocalClientNum_t localClientNum, const vec3_t *pos, vec3_t *outMin, vec3_t *outMax, int *tileIdX, int *tileIdY)
{
  __int32 v11; 
  unsigned int v14; 
  const CollisionTile **v15; 
  bool result; 
  __int64 v24; 
  __int16 gridIdx[4]; 
  int *v26; 

  __asm { vmovaps [rsp+0B8h+var_58], xmm6 }
  _RBP = (const vec2_t *)pos;
  v26 = tileIdY;
  __asm { vmovaps [rsp+0B8h+var_68], xmm7 }
  if ( !outMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 292, ASSERT_TYPE_ASSERT, "(outMin)", (const char *)&queryFormat, "outMin") )
    __debugbreak();
  if ( !outMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 293, ASSERT_TYPE_ASSERT, "(outMax)", (const char *)&queryFormat, "outMax") )
    __debugbreak();
  v11 = 3 * localClientNum + 2;
  if ( (unsigned int)v11 >= 8 )
  {
    LODWORD(v24) = 3 * localClientNum + 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 296, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", v24, 8) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm6, cs:__real@45800000
  }
  v14 = 0;
  v15 = g_worldCollision_CollisionTiles;
  do
  {
    _RBX = *v15;
    if ( *v15 )
    {
      if ( _RBX->havokTileShapeDataSize )
      {
        if ( WorldCollision_HasCollisionTileCollision((const Physics_WorldId)v11, _RBX->gridId[0], _RBX->gridId[1]) )
        {
          gridIdx[0] = _RBX->gridId[0];
          gridIdx[1] = _RBX->gridId[1];
          if ( WorldCollision_IsCollisionReadyAt((const Physics_WorldId)v11, _RBP, gridIdx) )
          {
            __asm
            {
              vmovss  xmm2, dword ptr [rbx+10h]
              vmovss  xmm0, dword ptr [rbp+0]
              vsubss  xmm1, xmm0, xmm2
              vandps  xmm1, xmm1, xmm7
              vcomiss xmm1, xmm6
            }
          }
        }
      }
    }
    ++v14;
    ++v15;
  }
  while ( v14 < 0x400 );
  result = 0;
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_58]
    vmovaps xmm7, [rsp+0B8h+var_68]
  }
  return result;
}

/*
==============
ATClient_NavGetTileId
==============
*/
char ATClient_NavGetTileId(const LocalClientNum_t localClientNum, const vec3_t *pos, int *tileIdX, int *tileIdY)
{
  int v19; 
  int v20; 

  _RDI = pos;
  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 222, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 223, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
  {
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 224, ASSERT_TYPE_ASSERT, "(!IS_NAN( pos[0] ) && !IS_NAN( pos[1] ))", (const char *)&queryFormat, "!IS_NAN( pos[0] ) && !IS_NAN( pos[1] )") )
      __debugbreak();
  }
  if ( !tileIdX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 226, ASSERT_TYPE_ASSERT, "(tileIdX)", (const char *)&queryFormat, "tileIdX") )
    __debugbreak();
  if ( !tileIdY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 227, ASSERT_TYPE_ASSERT, "(tileIdY)", (const char *)&queryFormat, "tileIdY") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm1, xmm0, cs:__real@c8000000
    vmulss  xmm0, xmm1, cs:__real@39000000
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm2, xmm1, cs:__real@c8000000
    vcvttss2si eax, xmm0
    vmulss  xmm0, xmm2, cs:__real@39000000
    vcvttss2si ecx, xmm0
  }
  if ( (unsigned __int16)_EAX > 0x1Fu || (unsigned __int16)_ECX > 0x1Fu )
    return 0;
  *tileIdX = (__int16)_EAX;
  *tileIdY = (__int16)_ECX;
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
  __int64 v12; 
  __int64 v15; 
  unsigned __int64 v16; 
  int v17; 
  int cmdsize; 
  int v19; 
  __int64 i; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  char dest[64]; 

  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm1, dword ptr [r8+4]
    vmovss  xmm2, dword ptr [rdx+8]
    vmovss  xmm3, dword ptr [rdx]
    vmovss  xmm4, dword ptr [rdx+4]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+0A8h+var_70], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+0A8h+var_78], xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm3, xmm3, xmm3
  }
  v12 = localClientNum;
  __asm
  {
    vcvtss2sd xmm4, xmm4, xmm4
    vmovsd  [rsp+0A8h+var_80], xmm2
    vmovq   r9, xmm3
    vmovsd  [rsp+0A8h+var_88], xmm4
  }
  Com_sprintf(dest, 0x40ui64, "setviewpos %.2f %.2f %.2f %.2f %.2f\n", *(double *)&_XMM3, v21, v22, v23, v24);
  v15 = v12;
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v16 = -1i64;
  do
    ++v16;
  while ( dest[v16] );
  v17 = truncate_cast<int,unsigned __int64>(v16);
  cmdsize = s_cmd_textArray[v15].cmdsize;
  v19 = v17 + 1;
  if ( cmdsize + v17 + 1 <= s_cmd_textArray[v15].maxsize )
  {
    for ( i = cmdsize - 1; i >= 0; --i )
      s_cmd_textArray[v15].data[v19 + i] = s_cmd_textArray[v15].data[i];
    memcpy_0(s_cmd_textArray[v15].data, dest, v17);
    s_cmd_textArray[v15].data[v19 - 1] = 10;
    s_cmd_textArray[v15].cmdsize += v19;
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
  char v13; 
  char v14; 

  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 101, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 102, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  _RDI = (__int64)ClientMP->GetPlayerState(ClientMP);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsnav.cpp", 106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = DVARFLT_ATClient_PerfSampleEpsAtRestSpeed;
  if ( !DVARFLT_ATClient_PerfSampleEpsAtRestSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfSampleEpsAtRestSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+3Ch]
    vmovss  xmm2, dword ptr [rdi+40h]
    vmovss  xmm3, dword ptr [rdi+44h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, dword ptr [rbx+28h]
  }
  return v13 | v14;
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

