/*
==============
Nav_GetEntNumForModelIdx
==============
*/

int __fastcall Nav_GetEntNumForModelIdx(int modelIdx)
{
  return ?Nav_GetEntNumForModelIdx@@YAHH@Z(modelIdx);
}

/*
==============
Nav_GetSpaceByEntity
==============
*/

nav_space_s *__fastcall Nav_GetSpaceByEntity(const gentity_s *pEnt)
{
  return ?Nav_GetSpaceByEntity@@YAPEAUnav_space_s@@PEBUgentity_s@@@Z(pEnt);
}

/*
==============
Nav_AddResourceToNewSpace
==============
*/

void __fastcall Nav_AddResourceToNewSpace(nav_space_s *pSpace, nav_resource_s *pResource, const vec3_t *localOffsetPos, const vec4_t *localOffsetRot, int offsetLayer)
{
  ?Nav_AddResourceToNewSpace@@YAXPEAUnav_space_s@@PEAUnav_resource_s@@AEBTvec3_t@@AEBTvec4_t@@H@Z(pSpace, pResource, localOffsetPos, localOffsetRot, offsetLayer);
}

/*
==============
Nav_AddObstacleToSpace
==============
*/

void __fastcall Nav_AddObstacleToSpace(nav_space_s *pSpace, nav_obstacle_s *pObstacle)
{
  ?Nav_AddObstacleToSpace@@YAXPEAUnav_space_s@@PEAUnav_obstacle_s@@@Z(pSpace, pObstacle);
}

/*
==============
Nav_UpdateSpaces
==============
*/

void Nav_UpdateSpaces(void)
{
  ?Nav_UpdateSpaces@@YAXXZ();
}

/*
==============
Nav_RemoveObstacleFromSpace
==============
*/

void __fastcall Nav_RemoveObstacleFromSpace(nav_space_s *pSpace, nav_obstacle_s *pObstacle, bool bPreserveOrdering)
{
  ?Nav_RemoveObstacleFromSpace@@YAXPEAUnav_space_s@@PEAUnav_obstacle_s@@_N@Z(pSpace, pObstacle, bPreserveOrdering);
}

/*
==============
Nav_ClearResourcesFromSpace
==============
*/

void __fastcall Nav_ClearResourcesFromSpace(nav_space_s *pSpace)
{
  ?Nav_ClearResourcesFromSpace@@YAXPEAUnav_space_s@@@Z(pSpace);
}

/*
==============
Nav_GetClosestVerticalPosInMostLikelySpace
==============
*/

nav_space_s *__fastcall Nav_GetClosestVerticalPosInMostLikelySpace(const vec3_t *pos, AINavLayer layer, float radius, const bfx::PathSpec *pPathSpec, vec3_t *outPos, bfx::AreaHandle *pOutArea)
{
  return ?Nav_GetClosestVerticalPosInMostLikelySpace@@YAPEAUnav_space_s@@AEBTvec3_t@@W4AINavLayer@@MPEBVPathSpec@bfx@@AEAT2@PEAVAreaHandle@5@@Z(pos, layer, radius, pPathSpec, outPos, pOutArea);
}

/*
==============
Nav_CreateSpaceWithName
==============
*/

nav_space_s *__fastcall Nav_CreateSpaceWithName(const scr_string_t spaceName, int parentEntNum)
{
  return ?Nav_CreateSpaceWithName@@YAPEAUnav_space_s@@W4scr_string_t@@H@Z(spaceName, parentEntNum);
}

/*
==============
Nav_GetSpaceUp
==============
*/

void __fastcall Nav_GetSpaceUp(const nav_space_s *pSpace, vec3_t *outUp)
{
  ?Nav_GetSpaceUp@@YAXPEBUnav_space_s@@AEATvec3_t@@@Z(pSpace, outUp);
}

/*
==============
Nav_CleanupAndDestroySpace
==============
*/

void __fastcall Nav_CleanupAndDestroySpace(nav_space_s *pSpace)
{
  ?Nav_CleanupAndDestroySpace@@YAXPEAUnav_space_s@@@Z(pSpace);
}

/*
==============
Nav_GetEntNumForTargetName
==============
*/

int __fastcall Nav_GetEntNumForTargetName(scr_string_t targetName)
{
  return ?Nav_GetEntNumForTargetName@@YAHW4scr_string_t@@@Z(targetName);
}

/*
==============
Nav_FindMostLikelySpace
==============
*/

nav_space_s *__fastcall Nav_FindMostLikelySpace(const vec3_t *pos, const AINavLayer layer, nav_space_s *pIgnoreSpace)
{
  return ?Nav_FindMostLikelySpace@@YAPEAUnav_space_s@@AEBTvec3_t@@W4AINavLayer@@PEAU1@@Z(pos, layer, pIgnoreSpace);
}

/*
==============
Nav_ReadSpace
==============
*/

void __fastcall Nav_ReadSpace(MemoryFile *memFile)
{
  ?Nav_ReadSpace@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Nav_CreateSpace
==============
*/

nav_space_s *__fastcall Nav_CreateSpace(int parentEntNum)
{
  return ?Nav_CreateSpace@@YAPEAUnav_space_s@@H@Z(parentEntNum);
}

/*
==============
Nav_ClearSpace
==============
*/

void __fastcall Nav_ClearSpace(nav_space_s *pOldSpace, bool bDeleteAll, nav_space_s *pNewSpace)
{
  ?Nav_ClearSpace@@YAXPEAUnav_space_s@@_N0@Z(pOldSpace, bDeleteAll, pNewSpace);
}

/*
==============
Nav_SpaceConvertLocalToWorld
==============
*/

void __fastcall Nav_SpaceConvertLocalToWorld(nav_space_s *pSpace, const vec3_t *localPos, vec3_t *outWorldPos)
{
  ?Nav_SpaceConvertLocalToWorld@@YAXPEAUnav_space_s@@AEBTvec3_t@@AEAT2@@Z(pSpace, localPos, outWorldPos);
}

/*
==============
Nav_RemoveObstaclesMarkedForDeleteFromAllSpaces
==============
*/

void __fastcall Nav_RemoveObstaclesMarkedForDeleteFromAllSpaces(bool bPreserveOrdering)
{
  ?Nav_RemoveObstaclesMarkedForDeleteFromAllSpaces@@YAX_N@Z(bPreserveOrdering);
}

/*
==============
Nav_AddLinkToSpace
==============
*/

void __fastcall Nav_AddLinkToSpace(nav_space_s *pSpace, nav_link_s *pLink)
{
  ?Nav_AddLinkToSpace@@YAXPEAUnav_space_s@@PEAUnav_link_s@@@Z(pSpace, pLink);
}

/*
==============
Nav_TransferObjsToSpace
==============
*/

void __fastcall Nav_TransferObjsToSpace(nav_space_s *pNewSpace)
{
  ?Nav_TransferObjsToSpace@@YAXPEAUnav_space_s@@@Z(pNewSpace);
}

/*
==============
Nav_DestroyAllSpaces
==============
*/

void Nav_DestroyAllSpaces(void)
{
  ?Nav_DestroyAllSpaces@@YAXXZ();
}

/*
==============
Nav_SpaceConvertWorldToLocal
==============
*/

void __fastcall Nav_SpaceConvertWorldToLocal(nav_space_s *pSpace, const vec3_t *worldPos, vec3_t *outLocalPos)
{
  ?Nav_SpaceConvertWorldToLocal@@YAXPEAUnav_space_s@@AEBTvec3_t@@AEAT2@@Z(pSpace, worldPos, outLocalPos);
}

/*
==============
Nav_RemoveResourceFromSpace
==============
*/

void __fastcall Nav_RemoveResourceFromSpace(nav_space_s *pSpace, nav_resource_s *pResource)
{
  ?Nav_RemoveResourceFromSpace@@YAXPEAUnav_space_s@@PEAUnav_resource_s@@@Z(pSpace, pResource);
}

/*
==============
Nav_RemoveLinkFromSpace
==============
*/

void __fastcall Nav_RemoveLinkFromSpace(nav_space_s *pSpace, nav_link_s *pLink)
{
  ?Nav_RemoveLinkFromSpace@@YAXPEAUnav_space_s@@PEAUnav_link_s@@@Z(pSpace, pLink);
}

/*
==============
Nav_SpaceConvertWorldToLocal
==============
*/

void __fastcall Nav_SpaceConvertWorldToLocal(nav_space_s *pSpace, const vec3_t *worldPos, const vec4_t *worldRot, vec3_t *outLocalPos, vec4_t *outLocalRot)
{
  ?Nav_SpaceConvertWorldToLocal@@YAXPEAUnav_space_s@@AEBTvec3_t@@AEBTvec4_t@@AEAT2@AEAT3@@Z(pSpace, worldPos, worldRot, outLocalPos, outLocalRot);
}

/*
==============
Nav_AddRepulsorToSpace
==============
*/

void __fastcall Nav_AddRepulsorToSpace(nav_space_s *pSpace, nav_repulsor_s *pRepulsor)
{
  ?Nav_AddRepulsorToSpace@@YAXPEAUnav_space_s@@PEAUnav_repulsor_s@@@Z(pSpace, pRepulsor);
}

/*
==============
Nav_SpaceConvertLocalToWorld
==============
*/

void __fastcall Nav_SpaceConvertLocalToWorld(nav_space_s *pSpace, const vec3_t *localPos, const vec4_t *localRot, vec3_t *outWorldPos, vec4_t *outWorldRot)
{
  ?Nav_SpaceConvertLocalToWorld@@YAXPEAUnav_space_s@@AEBTvec3_t@@AEBTvec4_t@@AEAT2@AEAT3@@Z(pSpace, localPos, localRot, outWorldPos, outWorldRot);
}

/*
==============
Nav_GetDefaultSpace
==============
*/

nav_space_s *__fastcall Nav_GetDefaultSpace()
{
  return ?Nav_GetDefaultSpace@@YAPEAUnav_space_s@@XZ();
}

/*
==============
Nav_GetSpaceByEntNum
==============
*/

nav_space_s *__fastcall Nav_GetSpaceByEntNum(const int entNum)
{
  return ?Nav_GetSpaceByEntNum@@YAPEAUnav_space_s@@H@Z(entNum);
}

/*
==============
Nav_AddObstacleToList
==============
*/

void __fastcall Nav_AddObstacleToList(nav_obstacle_s *pList, nav_obstacle_s *pObstacle)
{
  ?Nav_AddObstacleToList@@YAXPEAUnav_obstacle_s@@0@Z(pList, pObstacle);
}

/*
==============
Nav_CreateDefaultSpace
==============
*/

int __fastcall Nav_CreateDefaultSpace()
{
  return ?Nav_CreateDefaultSpace@@YAHXZ();
}

/*
==============
Nav_AddResourceToOldSpace
==============
*/

void __fastcall Nav_AddResourceToOldSpace(nav_space_s *pSpace, nav_resource_s *pResource, const vec3_t *currentResourcePos, const vec4_t *qCurrentResourceRot, int offsetLayer)
{
  ?Nav_AddResourceToOldSpace@@YAXPEAUnav_space_s@@PEAUnav_resource_s@@AEBTvec3_t@@AEBTvec4_t@@H@Z(pSpace, pResource, currentResourcePos, qCurrentResourceRot, offsetLayer);
}

/*
==============
Nav_RemoveObstacleFromList
==============
*/

void __fastcall Nav_RemoveObstacleFromList(nav_obstacle_s *pList, nav_obstacle_s *pObstacle)
{
  ?Nav_RemoveObstacleFromList@@YAXPEAUnav_obstacle_s@@0@Z(pList, pObstacle);
}

/*
==============
Nav_FindMostLikelySpaceWithRadius
==============
*/

nav_space_s *__fastcall Nav_FindMostLikelySpaceWithRadius(const vec3_t *pos, float radius, const AINavLayer layer, nav_space_s *pIgnoreSpace)
{
  return ?Nav_FindMostLikelySpaceWithRadius@@YAPEAUnav_space_s@@AEBTvec3_t@@MW4AINavLayer@@PEAU1@@Z(pos, radius, layer, pIgnoreSpace);
}

/*
==============
Nav_UpdateSpace
==============
*/

void __fastcall Nav_UpdateSpace(nav_space_s *pSpace)
{
  ?Nav_UpdateSpace@@YAXPEAUnav_space_s@@@Z(pSpace);
}

/*
==============
Nav_RemoveObstaclesMarkedForDeleteFromSpace
==============
*/

void __fastcall Nav_RemoveObstaclesMarkedForDeleteFromSpace(nav_space_s *pSpace, bool bPreserveOrdering)
{
  ?Nav_RemoveObstaclesMarkedForDeleteFromSpace@@YAXPEAUnav_space_s@@_N@Z(pSpace, bPreserveOrdering);
}

/*
==============
Nav_GetSpaceByName
==============
*/

nav_space_s *__fastcall Nav_GetSpaceByName(const scr_string_t spaceName)
{
  return ?Nav_GetSpaceByName@@YAPEAUnav_space_s@@W4scr_string_t@@@Z(spaceName);
}

/*
==============
Nav_DestroySpace
==============
*/

void __fastcall Nav_DestroySpace(nav_space_s *pSpace)
{
  ?Nav_DestroySpace@@YAXPEAUnav_space_s@@@Z(pSpace);
}

/*
==============
Nav_RemoveRepulsorFromSpace
==============
*/

void __fastcall Nav_RemoveRepulsorFromSpace(nav_space_s *pSpace, nav_repulsor_s *pRepulsor)
{
  ?Nav_RemoveRepulsorFromSpace@@YAXPEAUnav_space_s@@PEAUnav_repulsor_s@@@Z(pSpace, pRepulsor);
}

/*
==============
Nav_WriteSpace
==============
*/

void __fastcall Nav_WriteSpace(MemoryFile *memFile, nav_space_s *pSpace)
{
  ?Nav_WriteSpace@@YAXPEAUMemoryFile@@PEAUnav_space_s@@@Z(memFile, pSpace);
}

/*
==============
Nav_AddLinkToSpace
==============
*/
void Nav_AddLinkToSpace(nav_space_s *pSpace, nav_link_s *pLink)
{
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 612, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 613, ASSERT_TYPE_ASSERT, "(pLink)", (const char *)&queryFormat, "pLink") )
    __debugbreak();
  if ( pSpace == (nav_space_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 584, ASSERT_TYPE_ASSERT, "(pHead)", (const char *)&queryFormat, "pHead") )
    __debugbreak();
  if ( !pLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 585, ASSERT_TYPE_ASSERT, "(pObj)", (const char *)&queryFormat, "pObj") )
    __debugbreak();
  if ( (pLink->pPrev || pLink->pNext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 586, ASSERT_TYPE_ASSERT, "(!pObj->pPrev && !pObj->pNext)", "%s\n\tpObj is already in a list.", "!pObj->pPrev && !pObj->pNext") )
    __debugbreak();
  if ( (!pSpace->linkList.pPrev || !pSpace->linkList.pNext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 587, ASSERT_TYPE_ASSERT, "(pHead->pPrev && pHead->pNext)", (const char *)&queryFormat, "pHead->pPrev && pHead->pNext") )
    __debugbreak();
  pLink->pPrev = &pSpace->linkList;
  pLink->pNext = pSpace->linkList.pNext;
  pSpace->linkList.pNext->pPrev = pLink;
  pSpace->linkList.pNext = pLink;
  ++pSpace->numLinks;
  pLink->pSpace = pSpace;
  if ( pSpace->numLinks > 2304 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 620, ASSERT_TYPE_ASSERT, "(pSpace->numLinks <= NAV_MAX_LINKS)", (const char *)&queryFormat, "pSpace->numLinks <= NAV_MAX_LINKS") )
    __debugbreak();
}

/*
==============
Nav_AddObstacleToList
==============
*/

void __fastcall Nav_AddObstacleToList(nav_obstacle_s *pList, nav_obstacle_s *pObstacle)
{
  Nav_AddObjToList_nav_obstacle_s_(pList, pObstacle);
}

/*
==============
Nav_AddObstacleToSpace
==============
*/
void Nav_AddObstacleToSpace(nav_space_s *pSpace, nav_obstacle_s *pObstacle)
{
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 624, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pObstacle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 625, ASSERT_TYPE_ASSERT, "(pObstacle)", (const char *)&queryFormat, "pObstacle") )
    __debugbreak();
  if ( pObstacle->m_bPending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 626, ASSERT_TYPE_ASSERT, "( !pObstacle->m_bPending )", (const char *)&queryFormat, "!pObstacle->m_bPending") )
    __debugbreak();
  Nav_AddObjToList_nav_obstacle_s_(&pSpace->obstacleList, pObstacle);
  ++pSpace->numObstacles;
  pObstacle->pSpace = pSpace;
  if ( pSpace->numObstacles > Nav_GetMaxNumObstacles() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 633, ASSERT_TYPE_ASSERT, "(pSpace->numObstacles <= Nav_GetMaxNumObstacles())", (const char *)&queryFormat, "pSpace->numObstacles <= Nav_GetMaxNumObstacles()") )
    __debugbreak();
}

/*
==============
Nav_AddRepulsorToSpace
==============
*/
void Nav_AddRepulsorToSpace(nav_space_s *pSpace, nav_repulsor_s *pRepulsor)
{
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 637, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pRepulsor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 638, ASSERT_TYPE_ASSERT, "(pRepulsor)", (const char *)&queryFormat, "pRepulsor") )
    __debugbreak();
  if ( pSpace == (nav_space_s *)-424i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 584, ASSERT_TYPE_ASSERT, "(pHead)", (const char *)&queryFormat, "pHead") )
    __debugbreak();
  if ( !pRepulsor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 585, ASSERT_TYPE_ASSERT, "(pObj)", (const char *)&queryFormat, "pObj") )
    __debugbreak();
  if ( (pRepulsor->pPrev || pRepulsor->pNext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 586, ASSERT_TYPE_ASSERT, "(!pObj->pPrev && !pObj->pNext)", "%s\n\tpObj is already in a list.", "!pObj->pPrev && !pObj->pNext") )
    __debugbreak();
  if ( (!pSpace->repulsorList.pPrev || !pSpace->repulsorList.pNext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 587, ASSERT_TYPE_ASSERT, "(pHead->pPrev && pHead->pNext)", (const char *)&queryFormat, "pHead->pPrev && pHead->pNext") )
    __debugbreak();
  pRepulsor->pPrev = &pSpace->repulsorList;
  pRepulsor->pNext = pSpace->repulsorList.pNext;
  pSpace->repulsorList.pNext->pPrev = pRepulsor;
  pSpace->repulsorList.pNext = pRepulsor;
  ++pSpace->numRepulsors;
  pRepulsor->pSpace = pSpace;
  if ( pSpace->numRepulsors > 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 645, ASSERT_TYPE_ASSERT, "(pSpace->numRepulsors <= NAV_MAX_REPULSORS)", (const char *)&queryFormat, "pSpace->numRepulsors <= NAV_MAX_REPULSORS") )
    __debugbreak();
}

/*
==============
Nav_AddResourceToNewSpace
==============
*/
void Nav_AddResourceToNewSpace(nav_space_s *pSpace, nav_resource_s *pResource, const vec3_t *localOffsetPos, const vec4_t *localOffsetRot, int offsetLayer)
{
  const char *v13; 
  bool v14; 
  unsigned __int8 *pGraphBuffer; 
  char v44; 
  bfx::ResourceOffset offset; 
  bfx::Quaternion result; 
  float v0[4]; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RDI = localOffsetRot;
  _RSI = localOffsetPos;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 827, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pResource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 828, ASSERT_TYPE_ASSERT, "( pResource )", (const char *)&queryFormat, "pResource") )
    __debugbreak();
  if ( pResource->pNext || pResource->pPrev )
  {
    v13 = SL_ConvertToString(pResource->targetName);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 829, ASSERT_TYPE_ASSERT, "(!pResource->pNext && !pResource->pPrev)", "%s\n\tresource %s is already in a space's list", "!pResource->pNext && !pResource->pPrev", v13) )
      __debugbreak();
  }
  v14 = !pResource->bDockable;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  [rsp+0E8h+offset.m_positionOffset.m_x], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+0E8h+offset.m_positionOffset.m_z], xmm0
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+0E8h+offset.m_positionOffset.m_y], xmm1
    vmovss  xmm1, dword ptr [rdi]
    vmovss  [rsp+0E8h+offset.m_rotationOffset.m_y], xmm0
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  [rsp+0E8h+offset.m_rotationOffset.m_x], xmm1
    vmovss  xmm1, dword ptr [rdi+8]
    vmovss  [rsp+0E8h+offset.m_rotationOffset.m_w], xmm0
    vmovss  [rsp+0E8h+offset.m_rotationOffset.m_z], xmm1
  }
  offset.m_layerOffset = offsetLayer;
  if ( v14 )
  {
    pGraphBuffer = pResource->pGraphBuffer;
  }
  else
  {
    if ( !pResource->pGraphBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 837, ASSERT_TYPE_ASSERT, "( pResource->pGraphBuffer )", (const char *)&queryFormat, "pResource->pGraphBuffer") )
      __debugbreak();
    memcpy_0(pResource->pWorkingGraph, pResource->pGraphBuffer, pResource->graphSize);
    pGraphBuffer = pResource->pWorkingGraph;
  }
  bfx::AddResource(&pSpace->hSpace, (char *)pGraphBuffer, &offset);
  pResource->pSpace = pSpace;
  _RAX = bfx::SpaceHandle::GetPos(&pSpace->hSpace, (bfx::Vector3 *)&result);
  __asm
  {
    vmovss  xmm6, dword ptr [rax]
    vmovss  xmm7, dword ptr [rax+4]
    vmovss  xmm8, dword ptr [rax+8]
  }
  _RAX = bfx::SpaceHandle::GetRot(&pSpace->hSpace, &result);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  xmm3, dword ptr [rax]
    vmovss  xmm2, dword ptr [rax+0Ch]
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  [rsp+0E8h+v0], xmm0
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vmovss  [rsp+0E8h+var_70], xmm2
    vmovss  [rsp+0E8h+var_74], xmm1
    vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
    vsubss  xmm2, xmm1, xmm7
    vmovss  [rsp+0E8h+var_6C], xmm3
    vsubss  xmm3, xmm0, xmm6
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
    vsubss  xmm4, xmm0, xmm8
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, cs:__real@3f800000; epsilon
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm0
    vcomiss xmm4, xmm2
  }
  if ( (!v44 || !VecNCompareCustomEpsilon(v0, quat_identity.v, *(float *)&_XMM2, 4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 854, ASSERT_TYPE_ASSERT, "( Vec3DistanceSq( spacePos, vec3_origin ) < 1.f && Vec4CompareCustomEpsilon( qSpaceRot, quat_identity, 1.f ) )", (const char *)&queryFormat, "Vec3DistanceSq( spacePos, vec3_origin ) < 1.f && Vec4CompareCustomEpsilon( qSpaceRot, quat_identity, 1.f )") )
    __debugbreak();
  pResource->localOffsetPos.v[0] = _RSI->v[0];
  pResource->localOffsetPos.v[1] = _RSI->v[1];
  pResource->localOffsetPos.v[2] = _RSI->v[2];
  pResource->localOffsetRot.v[0] = _RDI->v[0];
  pResource->localOffsetRot.v[1] = _RDI->v[1];
  pResource->localOffsetRot.v[2] = _RDI->v[2];
  pResource->localOffsetRot.v[3] = _RDI->v[3];
  pResource->offsetLayer = offsetLayer;
  Nav_AddObjToList_nav_resource_s_(&pSpace->resourceList, pResource);
  ++pSpace->numResources;
  pResource->pSpace = pSpace;
  _R11 = &v52;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
Nav_AddResourceToOldSpace
==============
*/
void Nav_AddResourceToOldSpace(nav_space_s *pSpace, nav_resource_s *pResource, const vec3_t *currentResourcePos, const vec4_t *qCurrentResourceRot, int offsetLayer)
{
  const char *v9; 
  unsigned __int8 *pWorkingGraph; 
  __int64 v38; 
  __int64 v39; 
  bfx::Quaternion rot; 
  bfx::ResourceOffset offset; 
  bfx::Vector3 result; 
  bfx::Quaternion v43; 
  vec4_t in2; 
  vec3_t in; 
  vec4_t quat; 

  _R12 = currentResourcePos;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 873, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pResource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 874, ASSERT_TYPE_ASSERT, "( pResource )", (const char *)&queryFormat, "pResource") )
    __debugbreak();
  if ( pResource->pNext || pResource->pPrev )
  {
    v9 = SL_ConvertToString(pResource->targetName);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 875, ASSERT_TYPE_ASSERT, "(!pResource->pNext && !pResource->pPrev)", "%s\n\tresource %s is already in a space's list", "!pResource->pNext && !pResource->pPrev", v9) )
      __debugbreak();
  }
  pResource->pSpace = pSpace;
  if ( pSpace->name )
  {
    if ( pSpace->parentEntNum >= 0x800u )
    {
      LODWORD(v39) = 2048;
      LODWORD(v38) = pSpace->parentEntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 891, ASSERT_TYPE_ASSERT, "(unsigned)( pSpace->parentEntNum ) < (unsigned)( ( 2048 ) )", "pSpace->parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v38, v39) )
        __debugbreak();
    }
    AnglesToQuat(&g_entities[pSpace->parentEntNum].r.currentAngles, &quat);
    __asm
    {
      vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rbp+4Fh+quat]
      vmovss  xmm2, dword ptr [rbp+4Fh+quat+4]
      vxorps  xmm1, xmm0, xmm3
      vmovss  dword ptr [rbp+4Fh+in2], xmm1
      vmovss  xmm1, dword ptr [rbp+4Fh+quat+8]
      vxorps  xmm0, xmm2, xmm3
      vmovss  dword ptr [rbp+4Fh+in2+4], xmm0
      vmovss  xmm0, dword ptr [rbp+4Fh+quat+0Ch]
      vxorps  xmm2, xmm1, xmm3
      vmovss  xmm1, dword ptr [r12]
      vmovss  dword ptr [rbp+4Fh+in2+8], xmm2
      vmovss  xmm2, dword ptr [r12+4]
      vmovss  dword ptr [rbp+4Fh+in2+0Ch], xmm0
      vsubss  xmm0, xmm1, dword ptr [rbx+130h]
      vmovss  dword ptr [rbp+4Fh+in], xmm0
      vsubss  xmm1, xmm2, dword ptr [rbx+134h]
      vmovss  xmm0, dword ptr [r12+8]
      vmovss  dword ptr [rbp+4Fh+in+4], xmm1
      vsubss  xmm2, xmm0, dword ptr [rbx+138h]
    }
    _R14 = &pResource->localOffsetPos;
    __asm { vmovss  dword ptr [rbp+4Fh+in+8], xmm2 }
    QuatTransform(&in2, &in, &pResource->localOffsetPos);
    _RBX = &pResource->localOffsetRot;
    QuatMultiply(qCurrentResourceRot, &in2, &pResource->localOffsetRot);
  }
  else
  {
    _RBX = &pResource->localOffsetRot;
    pResource->localOffsetPos.v[0] = _R12->v[0];
    _R14 = &pResource->localOffsetPos;
    pResource->localOffsetPos.v[1] = _R12->v[1];
    pResource->localOffsetPos.v[2] = _R12->v[2];
    pResource->localOffsetRot.v[0] = qCurrentResourceRot->v[0];
    pResource->localOffsetRot.v[1] = qCurrentResourceRot->v[1];
    pResource->localOffsetRot.v[2] = qCurrentResourceRot->v[2];
    pResource->localOffsetRot.v[3] = qCurrentResourceRot->v[3];
  }
  pResource->offsetLayer = offsetLayer;
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  xmm1, dword ptr [r14+4]
    vmovss  [rbp+4Fh+offset.m_positionOffset.m_x], xmm0
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rbp+4Fh+offset.m_positionOffset.m_z], xmm0
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rbp+4Fh+offset.m_positionOffset.m_y], xmm1
    vmovss  xmm1, dword ptr [rbx]
    vmovss  [rbp+4Fh+offset.m_rotationOffset.m_y], xmm0
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rbp+4Fh+offset.m_rotationOffset.m_x], xmm1
    vmovss  xmm1, dword ptr [rbx+8]
    vmovss  [rbp+4Fh+offset.m_rotationOffset.m_w], xmm0
    vmovss  [rbp+4Fh+offset.m_rotationOffset.m_z], xmm1
  }
  offset.m_layerOffset = offsetLayer;
  bfx::SpaceHandle::GetPos(&pSpace->hSpace, &result);
  bfx::SpaceHandle::GetRot(&pSpace->hSpace, &v43);
  __asm
  {
    vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
    vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4; vec4_t const quat_identity
    vmovss  [rbp+4Fh+rot.m_x], xmm0
    vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8; vec4_t const quat_identity
    vmovss  [rbp+4Fh+rot.m_y], xmm1
    vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch; vec4_t const quat_identity
    vmovss  [rbp+4Fh+rot.m_z], xmm0
    vmovss  [rbp+4Fh+rot.m_w], xmm1
  }
  bfx::SpaceHandle::SetPos(&pSpace->hSpace, &bfx::ZERO_VECTOR);
  bfx::SpaceHandle::SetRot(&pSpace->hSpace, &rot);
  if ( pResource->bDockable )
  {
    if ( !pResource->pGraphBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 917, ASSERT_TYPE_ASSERT, "( pResource->pGraphBuffer )", (const char *)&queryFormat, "pResource->pGraphBuffer") )
      __debugbreak();
    memcpy_0(pResource->pWorkingGraph, pResource->pGraphBuffer, pResource->graphSize);
    pWorkingGraph = pResource->pWorkingGraph;
  }
  else
  {
    pWorkingGraph = pResource->pGraphBuffer;
  }
  bfx::AddResource(&pSpace->hSpace, (char *)pWorkingGraph, &offset);
  bfx::SpaceHandle::SetPos(&pSpace->hSpace, &result);
  bfx::SpaceHandle::SetRot(&pSpace->hSpace, &v43);
  Nav_AddObjToList_nav_resource_s_(&pSpace->resourceList, pResource);
  ++pSpace->numResources;
  pResource->pSpace = pSpace;
}

/*
==============
Nav_CleanupAndDestroySpace
==============
*/
void Nav_CleanupAndDestroySpace(nav_space_s *pSpace)
{
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 571, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  Nav_ClearResourcesFromSpace(pSpace);
  Nav_ClearObstaclesFromSpace(pSpace, 0, NULL);
  Nav_ClearLinksFromSpace(pSpace, 0, NULL);
  Nav_ClearRepulsorsFromSpace(pSpace, 0, NULL);
  Nav_ClearNavigatorsFromSpace(pSpace, NULL);
  Nav_DestroySpace(pSpace);
}

/*
==============
Nav_ClearResourcesFromSpace
==============
*/
void Nav_ClearResourcesFromSpace(nav_space_s *pSpace)
{
  nav_resource_s *pNext; 
  nav_resource_s *i; 
  char *pWorkingGraph; 

  pNext = pSpace->resourceList.pNext;
  for ( i = &pSpace->resourceList; pNext != i; pNext = pSpace->resourceList.pNext )
  {
    if ( !pNext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 939, ASSERT_TYPE_ASSERT, "(pResource)", (const char *)&queryFormat, "pResource") )
      __debugbreak();
    if ( pNext->bDockable )
    {
      if ( !pNext->pWorkingGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 943, ASSERT_TYPE_ASSERT, "(pResource->pWorkingGraph)", (const char *)&queryFormat, "pResource->pWorkingGraph") )
        __debugbreak();
      pWorkingGraph = (char *)pNext->pWorkingGraph;
    }
    else
    {
      pWorkingGraph = (char *)pNext->pGraphBuffer;
    }
    bfx::RemoveResource(&pSpace->hSpace, pWorkingGraph);
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 599, ASSERT_TYPE_ASSERT, "(pHead)", (const char *)&queryFormat, "pHead") )
      __debugbreak();
    if ( (!pNext->pPrev || !pNext->pNext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 601, ASSERT_TYPE_ASSERT, "(pObj->pPrev && pObj->pNext)", "%s\n\tpObj is not in a list.", "pObj->pPrev && pObj->pNext") )
      __debugbreak();
    pNext->pPrev->pNext = pNext->pNext;
    pNext->pNext->pPrev = pNext->pPrev;
    pNext->pPrev = NULL;
    pNext->pNext = NULL;
    --pSpace->numResources;
    pNext->pSpace = NULL;
    if ( pSpace->numResources < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 956, ASSERT_TYPE_ASSERT, "(pSpace->numResources >= 0)", (const char *)&queryFormat, "pSpace->numResources >= 0") )
      __debugbreak();
  }
}

/*
==============
Nav_ClearSpace
==============
*/
void Nav_ClearSpace(nav_space_s *pOldSpace, bool bDeleteAll, nav_space_s *pNewSpace)
{
  Nav_ClearObstaclesFromSpace(pOldSpace, bDeleteAll, pNewSpace);
  Nav_ClearLinksFromSpace(pOldSpace, bDeleteAll, pNewSpace);
  Nav_ClearRepulsorsFromSpace(pOldSpace, bDeleteAll, pNewSpace);
  Nav_ClearNavigatorsFromSpace(pOldSpace, pNewSpace);
}

/*
==============
Nav_CreateDefaultSpace
==============
*/
__int64 Nav_CreateDefaultSpace()
{
  nav_space_s *v0; 
  const bfx::SpaceHandle *v1; 
  bfx::SpaceHandle result; 

  if ( g_NavData.spacePoolInfo.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 75, ASSERT_TYPE_ASSERT, "(g_NavData.spacePoolInfo.count == 0)", "%s\n\tdefault space should be the first space that is set up.", "g_NavData.spacePoolInfo.count == 0") )
    __debugbreak();
  v0 = Nav_AllocSpace();
  if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 78, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace", -2i64) )
    __debugbreak();
  v1 = bfx::CreateSpace(&result);
  bfx::SpaceHandle::operator=(&v0->hSpace, v1);
  bfx::SpaceHandle::~SpaceHandle(&result);
  *(_QWORD *)&v0->parentEntNum = 2047i64;
  v0->linkList.name = 0;
  v0->linkList.pSpace = NULL;
  v0->linkList.pPrev = &v0->linkList;
  v0->linkList.pNext = &v0->linkList;
  v0->numLinks = 0;
  v0->obstacleList.pSpace = NULL;
  *(_QWORD *)v0->obstacleList.pos.v = 0i64;
  *(_QWORD *)&v0->obstacleList.pos.z = 0i64;
  *(_QWORD *)&v0->obstacleList.qRot.xyz.y = 0i64;
  v0->obstacleList.qRot.v[3] = 0.0;
  v0->obstacleList.pPrev = &v0->obstacleList;
  v0->obstacleList.pNext = &v0->obstacleList;
  v0->numObstacles = 0;
  v0->repulsorList.pSpace = NULL;
  v0->repulsorList.pPrev = &v0->repulsorList;
  v0->repulsorList.pNext = &v0->repulsorList;
  v0->numRepulsors = 0;
  v0->resourceList.pSpace = NULL;
  v0->resourceList.pPrev = &v0->resourceList;
  v0->resourceList.pNext = &v0->resourceList;
  v0->numResources = 0;
  return 0i64;
}

/*
==============
Nav_CreateSpace
==============
*/
nav_space_s *Nav_CreateSpace(int parentEntNum)
{
  scr_string_t String; 
  nav_space_s *SpaceWithName; 
  char dest[32]; 

  Com_sprintf(dest, 0x20ui64, "_space%d", s_NavSpaceUniquifier);
  if ( ++s_NavSpaceUniquifier == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 28, ASSERT_TYPE_ASSERT, "(s_NavSpaceUniquifier < 0xffffffff)", (const char *)&queryFormat, "s_NavSpaceUniquifier < UINT_MAX") )
    __debugbreak();
  String = SL_GetString(dest, 0);
  SpaceWithName = Nav_CreateSpaceWithName(String, parentEntNum);
  if ( !SpaceWithName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 132, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  SL_RemoveRefToString(String);
  return SpaceWithName;
}

/*
==============
Nav_CreateSpaceWithName
==============
*/
nav_space_s *Nav_CreateSpaceWithName(const scr_string_t spaceName, int parentEntNum)
{
  int defaultSpaceIdx; 
  nav_space_s *DefaultSpace; 
  int firstUsed; 
  __int64 v8; 
  const char *v9; 
  nav_space_s *v10; 
  const bfx::SpaceHandle *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  bfx::SpaceHandle result; 

  if ( g_NavData.spacePoolInfo.count >= 128 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 96, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Exceeded max number of supported spaces (%d).", 128) )
      __debugbreak();
    defaultSpaceIdx = g_NavData.defaultSpaceIdx;
    if ( g_NavData.defaultSpaceIdx >= 0x80u )
    {
      LODWORD(v13) = g_NavData.defaultSpaceIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 97, ASSERT_TYPE_ASSERT, "(unsigned)( g_NavData.defaultSpaceIdx ) < (unsigned)( NAV_MAX_SPACES )", "g_NavData.defaultSpaceIdx doesn't index NAV_MAX_SPACES\n\t%i not in [0, %i)", v13, 128) )
        __debugbreak();
      defaultSpaceIdx = g_NavData.defaultSpaceIdx;
    }
    if ( !bfx::SpaceHandle::IsValid(&g_NavData.spaces[defaultSpaceIdx].hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 98, ASSERT_TYPE_ASSERT, "(g_NavData.spaces[ g_NavData.defaultSpaceIdx ].hSpace.IsValid())", "%s\n\tdefault space is not initialized.", "g_NavData.spaces[ g_NavData.defaultSpaceIdx ].hSpace.IsValid()") )
      __debugbreak();
    return Nav_GetDefaultSpace();
  }
  if ( Nav_GetSpaceByEntNum(parentEntNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 104, ASSERT_TYPE_ASSERT, "(!pSpace)", "%s\n\tSpace attached to this ent already exists: %d", "!pSpace", parentEntNum) )
    __debugbreak();
  if ( !spaceName )
  {
    DefaultSpace = Nav_GetDefaultSpace();
LABEL_25:
    if ( DefaultSpace )
    {
      v9 = SL_ConvertToString(spaceName);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 106, ASSERT_TYPE_ASSERT, "(!pSpace)", "%s\n\tSpace with this name already exists: %s", "!pSpace", v9) )
        __debugbreak();
    }
    goto LABEL_28;
  }
  firstUsed = g_NavData.spacePoolInfo.firstUsed;
  if ( g_NavData.spacePoolInfo.firstUsed >= 0 )
  {
    while ( 1 )
    {
      if ( (unsigned int)firstUsed >= 0x80 )
      {
        LODWORD(v14) = 128;
        LODWORD(v12) = firstUsed;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1021, ASSERT_TYPE_ASSERT, "(unsigned)( iSpace ) < (unsigned)( NAV_MAX_SPACES )", "iSpace doesn't index NAV_MAX_SPACES\n\t%i not in [0, %i)", v12, v14) )
          __debugbreak();
      }
      v8 = firstUsed;
      if ( g_NavData.spaces[v8].name == spaceName )
        break;
      firstUsed = g_NavData.spaces[v8].nextIdx;
      if ( firstUsed < 0 )
        goto LABEL_28;
    }
    DefaultSpace = &g_NavData.spaces[v8];
    goto LABEL_25;
  }
LABEL_28:
  v10 = Nav_AllocSpace();
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 110, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  v11 = bfx::CreateSpace(&result);
  bfx::SpaceHandle::operator=(&v10->hSpace, v11);
  bfx::SpaceHandle::~SpaceHandle(&result);
  if ( (unsigned int)parentEntNum >= 0x800 )
  {
    LODWORD(v14) = 2048;
    LODWORD(v12) = parentEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 114, ASSERT_TYPE_ASSERT, "(unsigned)( parentEntNum ) < (unsigned)( ( 2048 ) )", "parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  v10->parentEntNum = parentEntNum;
  Scr_SetString(&v10->name, spaceName);
  v10->linkList.name = 0;
  v10->linkList.pSpace = NULL;
  v10->linkList.pPrev = &v10->linkList;
  v10->linkList.pNext = &v10->linkList;
  v10->numLinks = 0;
  v10->obstacleList.pSpace = NULL;
  *(_QWORD *)v10->obstacleList.pos.v = 0i64;
  *(_QWORD *)&v10->obstacleList.pos.z = 0i64;
  *(_QWORD *)&v10->obstacleList.qRot.xyz.y = 0i64;
  v10->obstacleList.qRot.v[3] = 0.0;
  v10->obstacleList.pPrev = &v10->obstacleList;
  v10->obstacleList.pNext = &v10->obstacleList;
  v10->numObstacles = 0;
  v10->repulsorList.pSpace = NULL;
  v10->repulsorList.pPrev = &v10->repulsorList;
  v10->repulsorList.pNext = &v10->repulsorList;
  v10->numRepulsors = 0;
  v10->resourceList.pSpace = NULL;
  v10->resourceList.pPrev = &v10->resourceList;
  v10->resourceList.pNext = &v10->resourceList;
  v10->numResources = 0;
  return v10;
}

/*
==============
Nav_DestroyAllSpaces
==============
*/
void Nav_DestroyAllSpaces(void)
{
  unsigned int i; 
  nav_space_s *v1; 
  const char *v2; 
  const char *v3; 
  scr_string_t *p_name; 
  const char *v5; 
  const char *v6; 
  __int64 v7; 
  __int64 v8; 

  if ( g_NavData.bNavPowerInitialized )
  {
    for ( i = g_NavData.spacePoolInfo.firstUsed; g_NavData.spacePoolInfo.firstUsed >= 0; i = g_NavData.spacePoolInfo.firstUsed )
    {
      if ( i >= 0x80 )
      {
        LODWORD(v8) = 128;
        LODWORD(v7) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( iSpace ) < (unsigned)( NAV_MAX_SPACES )", "iSpace doesn't index NAV_MAX_SPACES\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      v1 = &g_NavData.spaces[i];
      if ( v1->resourceList.pNext != &v1->resourceList || v1->resourceList.pPrev != &v1->resourceList )
      {
        v2 = SL_ConvertToString(v1->name);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 142, ASSERT_TYPE_ASSERT, "(Nav_IsListEmpty<nav_resource_t>( &pSpace->resourceList ))", "%s\n\tSpace %s still has resources within it.", "Nav_IsListEmpty<nav_resource_t>( &pSpace->resourceList )", v2) )
          __debugbreak();
      }
      if ( v1->linkList.pNext != &v1->linkList || v1->linkList.pPrev != &v1->linkList )
      {
        v3 = SL_ConvertToString(v1->name);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 143, ASSERT_TYPE_ASSERT, "(Nav_IsListEmpty<nav_link_t>( &pSpace->linkList ))", "%s\n\tSpace %s still has links pointing to it.", "Nav_IsListEmpty<nav_link_t>( &pSpace->linkList )", v3) )
          __debugbreak();
      }
      if ( v1->obstacleList.pNext == &v1->obstacleList && v1->obstacleList.pPrev == &v1->obstacleList )
      {
        p_name = &v1->name;
      }
      else
      {
        p_name = &v1->name;
        v5 = SL_ConvertToString(v1->name);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 144, ASSERT_TYPE_ASSERT, "(Nav_IsListEmpty<nav_obstacle_t>( &pSpace->obstacleList ))", "%s\n\tSpace %s still has obstacles pointing to it.", "Nav_IsListEmpty<nav_obstacle_t>( &pSpace->obstacleList )", v5) )
          __debugbreak();
      }
      if ( v1->repulsorList.pNext != &v1->repulsorList || v1->repulsorList.pPrev != &v1->repulsorList )
      {
        p_name = &v1->name;
        v6 = SL_ConvertToString(v1->name);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 145, ASSERT_TYPE_ASSERT, "(Nav_IsListEmpty<nav_repulsor_t>( &pSpace->repulsorList ))", "%s\n\tSpace %s still has repulsors pointing to it.", "Nav_IsListEmpty<nav_repulsor_t>( &pSpace->repulsorList )", v6) )
          __debugbreak();
      }
      bfx::DestroySpace(&v1->hSpace);
      bfx::SpaceHandle::Release(&v1->hSpace);
      Scr_SetString(p_name, (scr_string_t)0);
      Nav_FreeSpace(v1);
    }
    if ( g_NavData.spacePoolInfo.count )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 172, ASSERT_TYPE_ASSERT, "( g_NavData.spacePoolInfo.count == 0 )", (const char *)&queryFormat, "g_NavData.spacePoolInfo.count == 0") )
        __debugbreak();
    }
  }
}

/*
==============
Nav_DestroySpace
==============
*/
void Nav_DestroySpace(nav_space_s *pSpace)
{
  const char *v2; 
  const char *v3; 
  scr_string_t *p_name; 
  const char *v5; 
  const char *v6; 

  if ( pSpace->resourceList.pNext != &pSpace->resourceList || pSpace->resourceList.pPrev != &pSpace->resourceList )
  {
    v2 = SL_ConvertToString(pSpace->name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 142, ASSERT_TYPE_ASSERT, "(Nav_IsListEmpty<nav_resource_t>( &pSpace->resourceList ))", "%s\n\tSpace %s still has resources within it.", "Nav_IsListEmpty<nav_resource_t>( &pSpace->resourceList )", v2) )
      __debugbreak();
  }
  if ( pSpace->linkList.pNext != &pSpace->linkList || pSpace->linkList.pPrev != &pSpace->linkList )
  {
    v3 = SL_ConvertToString(pSpace->name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 143, ASSERT_TYPE_ASSERT, "(Nav_IsListEmpty<nav_link_t>( &pSpace->linkList ))", "%s\n\tSpace %s still has links pointing to it.", "Nav_IsListEmpty<nav_link_t>( &pSpace->linkList )", v3) )
      __debugbreak();
  }
  if ( pSpace->obstacleList.pNext == &pSpace->obstacleList && pSpace->obstacleList.pPrev == &pSpace->obstacleList )
  {
    p_name = &pSpace->name;
  }
  else
  {
    p_name = &pSpace->name;
    v5 = SL_ConvertToString(pSpace->name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 144, ASSERT_TYPE_ASSERT, "(Nav_IsListEmpty<nav_obstacle_t>( &pSpace->obstacleList ))", "%s\n\tSpace %s still has obstacles pointing to it.", "Nav_IsListEmpty<nav_obstacle_t>( &pSpace->obstacleList )", v5) )
      __debugbreak();
  }
  if ( pSpace->repulsorList.pNext != &pSpace->repulsorList || pSpace->repulsorList.pPrev != &pSpace->repulsorList )
  {
    p_name = &pSpace->name;
    v6 = SL_ConvertToString(pSpace->name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 145, ASSERT_TYPE_ASSERT, "(Nav_IsListEmpty<nav_repulsor_t>( &pSpace->repulsorList ))", "%s\n\tSpace %s still has repulsors pointing to it.", "Nav_IsListEmpty<nav_repulsor_t>( &pSpace->repulsorList )", v6) )
      __debugbreak();
  }
  bfx::DestroySpace(&pSpace->hSpace);
  bfx::SpaceHandle::Release(&pSpace->hSpace);
  Scr_SetString(p_name, (scr_string_t)0);
  Nav_FreeSpace(pSpace);
}

/*
==============
Nav_FindMostLikelySpace
==============
*/
nav_space_s *Nav_FindMostLikelySpace(const vec3_t *pos, const AINavLayer layer, nav_space_s *pIgnoreSpace)
{
  vec3_t outPos; 

  __asm { vmovss  xmm1, cs:__real@bf800000; radius }
  return Nav_FindMostLikelySpaceCustom(pos, *(float *)&_XMM1, layer, pIgnoreSpace, NULL, &outPos, NULL);
}

/*
==============
Nav_FindMostLikelySpaceCustom
==============
*/

nav_space_s *__fastcall Nav_FindMostLikelySpaceCustom(const vec3_t *pos, double radius, const AINavLayer layer, const nav_space_s *pIgnoreSpace, const bfx::PathSpec *pPathSpec, vec3_t *outPos, bfx::AreaHandle *pOutArea)
{
  bfx::AreaHandle *v21; 
  int firstUsed; 
  __int64 v28; 
  nav_space_s *v29; 
  unsigned int parentEntNum; 
  __int64 v32; 
  nav_space_s *DefaultSpace; 
  nav_space_s *v72; 
  const char *v73; 
  nav_space_s *result; 
  vec3_t *outClosestPos; 
  bfx::AreaHandle *v87; 
  bfx::AreaHandle rhs; 
  vec3_t *v94; 
  bfx::AreaHandle *v95; 
  bfx::AreaHandle v96; 
  bfx::AreaHandle v97; 
  __int64 v98; 
  vec3_t up; 
  vec3_t v100; 
  bfx::PathSpec v101; 
  char v102; 
  void *retaddr; 

  _RAX = &retaddr;
  v98 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
    vmovss  [rsp+210h+var_1BC], xmm1
  }
  _R12 = pos;
  _RBX = pPathSpec;
  _R14 = outPos;
  v94 = outPos;
  v21 = pOutArea;
  v95 = pOutArea;
  __asm
  {
    vmovss  xmm7, cs:__real@7f7fffff
    vmovss  [rsp+210h+var_1C4], xmm7
  }
  bfx::AreaHandle::AreaHandle(&v97);
  __asm { vmovss  [rsp+210h+var_1CC], xmm7 }
  bfx::AreaHandle::AreaHandle(&v96);
  v101.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&v101.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&v101.m_areaPenaltyFlags = -1i64;
  v101.m_usePathSharingPenalty = 0;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rbp+110h+var_130.m_pathSharingPenalty], xmm6
    vmovss  [rbp+110h+var_130.m_maxPathSharingPenalty], xmm6
    vmovss  [rbp+110h+var_130.m_maxSearchDist], xmm6
  }
  bfx::PenaltyTable::PenaltyTable(&v101.m_penaltyTable);
  v101.m_snapMode = SNAP_CLOSEST;
  if ( pPathSpec )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rbp+110h+var_130.m_obstacleMode], ymm0
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups ymmword ptr [rbp+110h+var_130.m_maxSearchDist], ymm1
      vmovups xmm0, xmmword ptr [rbx+40h]
      vmovups xmmword ptr [rbp+20h], xmm0
    }
  }
  firstUsed = g_NavData.spacePoolInfo.firstUsed;
  if ( g_NavData.spacePoolInfo.firstUsed >= 0 )
  {
    do
    {
      v28 = firstUsed;
      v29 = &g_NavData.spaces[v28];
      if ( (unsigned int)firstUsed >= 0x80 )
      {
        LODWORD(v87) = 128;
        LODWORD(outClosestPos) = firstUsed;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 200, ASSERT_TYPE_ASSERT, "(unsigned)( iSpace ) < (unsigned)( NAV_MAX_SPACES )", "iSpace doesn't index NAV_MAX_SPACES\n\t%i not in [0, %i)", outClosestPos, v87) )
          __debugbreak();
      }
      if ( !bfx::SpaceHandle::IsValid(&v29->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 201, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
        __debugbreak();
      if ( g_NavData.spaces[v28].numResources && pIgnoreSpace != v29 )
      {
        parentEntNum = g_NavData.spaces[v28].parentEntNum;
        if ( parentEntNum == 2047 )
        {
          __asm
          {
            vmovss  dword ptr [rbp+110h+up], xmm6
            vmovss  dword ptr [rbp+110h+up+4], xmm6
            vmovss  xmm0, cs:__real@3f800000
            vmovss  dword ptr [rbp+110h+up+8], xmm0
          }
        }
        else
        {
          if ( parentEntNum >= 0x800 )
          {
            LODWORD(v87) = 2048;
            LODWORD(outClosestPos) = g_NavData.spaces[v28].parentEntNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 315, ASSERT_TYPE_ASSERT, "(unsigned)( pSpace->parentEntNum ) < (unsigned)( ( 2048 ) )", "pSpace->parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outClosestPos, v87) )
              __debugbreak();
          }
          v32 = g_NavData.spaces[v28].parentEntNum;
          if ( (unsigned int)v32 >= 0x800 )
          {
            LODWORD(v87) = 2048;
            LODWORD(outClosestPos) = g_NavData.spaces[v28].parentEntNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outClosestPos, v87) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[v32].r.isInUse != g_entityIsInUse[v32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 316, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pSpace->parentEntNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( pSpace->parentEntNum )") )
            __debugbreak();
          AngleVectors(&g_entities[g_NavData.spaces[v28].parentEntNum].r.currentAngles, NULL, NULL, &up);
        }
        bfx::AreaHandle::AreaHandle(&rhs);
        if ( Nav_GetClosestVerticalPos(_R12, &up, layer, &v29->hSpace, &v101, &v100, &rhs) )
        {
          __asm
          {
            vmovss  xmm6, dword ptr [r12]
            vmovss  xmm12, dword ptr [rbp+110h+var_148]
            vsubss  xmm2, xmm12, xmm6
            vmovss  xmm5, dword ptr [r12+4]
            vmovss  xmm13, dword ptr [rbp+110h+var_148+4]
            vsubss  xmm0, xmm13, xmm5
            vmovss  xmm4, dword ptr [r12+8]
            vmovss  xmm14, dword ptr [rbp+110h+var_148+8]
            vsubss  xmm3, xmm14, xmm4
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm15, xmm2, xmm1
            vsubss  xmm8, xmm6, xmm12
            vsubss  xmm9, xmm5, xmm13
            vsubss  xmm10, xmm4, xmm14
            vmulss  xmm1, xmm9, dword ptr [rbp+110h+up+4]
            vmulss  xmm0, xmm8, dword ptr [rbp+110h+up]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm10, dword ptr [rbp+110h+up+8]
            vaddss  xmm11, xmm2, xmm1
            vxorps  xmm3, xmm11, cs:__xmm@80000000800000008000000080000000
            vmulss  xmm0, xmm3, dword ptr [rbp+110h+up]
            vaddss  xmm5, xmm0, xmm8
            vmulss  xmm1, xmm3, dword ptr [rbp+110h+up+4]
            vaddss  xmm2, xmm1, xmm9
            vmulss  xmm0, xmm3, dword ptr [rbp+110h+up+8]
            vaddss  xmm4, xmm0, xmm10
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm5, xmm5
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm5, xmm3, xmm0
            vxorps  xmm6, xmm6, xmm6
            vmovss  xmm8, [rsp+210h+var_1BC]
            vcomiss xmm8, xmm6
            vmulss  xmm0, xmm8, xmm8
            vcomiss xmm5, xmm0
            vcomiss xmm15, [rsp+210h+var_1C4]
          }
        }
        bfx::AreaHandle::~AreaHandle(&rhs);
      }
      firstUsed = g_NavData.spaces[v28].nextIdx;
    }
    while ( firstUsed >= 0 );
    _R14 = v94;
    v21 = v95;
  }
  _R14->v[0] = _R12->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [r12+4]
    vmovss  dword ptr [r14+4], xmm0
    vmovss  xmm1, dword ptr [r12+8]
    vmovss  dword ptr [r14+8], xmm1
  }
  if ( v21 )
    bfx::AreaHandle::Release(v21);
  DefaultSpace = Nav_GetDefaultSpace();
  v72 = DefaultSpace;
  if ( DefaultSpace )
  {
    if ( DefaultSpace->numResources )
    {
      v73 = vtos(_R12);
      Com_PrintWarning(18, "FindMostLikelySpace: returning default, which is not considered valid for pos %s\n", v73);
    }
    else
    {
      Com_PrintWarning(18, "FindMostLikelySpace: returning default even though it is invalid.\n");
    }
  }
  else
  {
    v72 = NULL;
  }
  bfx::AreaHandle::~AreaHandle(&v96);
  bfx::AreaHandle::~AreaHandle(&v97);
  result = v72;
  _R11 = &v102;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
Nav_FindMostLikelySpaceWithRadius
==============
*/
nav_space_s *Nav_FindMostLikelySpaceWithRadius(const vec3_t *pos, double radius, const AINavLayer layer, nav_space_s *pIgnoreSpace)
{
  vec3_t outPos; 

  return Nav_FindMostLikelySpaceCustom(pos, radius, layer, pIgnoreSpace, NULL, &outPos, NULL);
}

/*
==============
Nav_GetClosestVerticalPosInMostLikelySpace
==============
*/

nav_space_s *__fastcall Nav_GetClosestVerticalPosInMostLikelySpace(const vec3_t *pos, AINavLayer layer, double radius, const bfx::PathSpec *pPathSpec, vec3_t *outPos, bfx::AreaHandle *pOutArea)
{
  __asm { vmovaps xmm1, xmm2; radius }
  return Nav_FindMostLikelySpaceCustom(pos, *(double *)&_XMM1, layer, NULL, pPathSpec, outPos, pOutArea);
}

/*
==============
Nav_GetDefaultSpace
==============
*/
nav_space_s *Nav_GetDefaultSpace()
{
  int defaultSpaceIdx; 
  int v2; 
  int v3; 

  defaultSpaceIdx = g_NavData.defaultSpaceIdx;
  if ( g_NavData.defaultSpaceIdx >= 0x80u )
  {
    v3 = 128;
    v2 = g_NavData.defaultSpaceIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( g_NavData.defaultSpaceIdx ) < (unsigned)( NAV_MAX_SPACES )", "g_NavData.defaultSpaceIdx doesn't index NAV_MAX_SPACES\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
    defaultSpaceIdx = g_NavData.defaultSpaceIdx;
  }
  if ( !bfx::SpaceHandle::IsValid(&g_NavData.spaces[defaultSpaceIdx].hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 66, ASSERT_TYPE_ASSERT, "( g_NavData.spaces[ g_NavData.defaultSpaceIdx ].hSpace.IsValid() )", (const char *)&queryFormat, "g_NavData.spaces[ g_NavData.defaultSpaceIdx ].hSpace.IsValid()") )
    __debugbreak();
  return &g_NavData.spaces[g_NavData.defaultSpaceIdx];
}

/*
==============
Nav_GetEntNumForModelIdx
==============
*/
__int64 Nav_GetEntNumForModelIdx(int modelIdx)
{
  unsigned int v2; 
  __int64 v3; 
  __int64 i; 
  entityState_t::<unnamed_type_index> v5; 
  __int64 v7; 
  __int64 v8; 

  if ( modelIdx < 0 )
    return 2047i64;
  v2 = 0;
  if ( level.num_entities <= 0 )
    return 2047i64;
  v3 = 0i64;
  for ( i = 0i64; ; ++i )
  {
    if ( v2 >= 0x800 )
    {
      LODWORD(v8) = 2048;
      LODWORD(v7) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[i].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v3] )
    {
      if ( g_entities[i].r.modelType == 5 )
      {
        v5.brushModel = (int)g_entities[i].s.index;
        if ( v5.brushModel )
        {
          if ( v5.brushModel == modelIdx )
            break;
        }
      }
    }
    ++v2;
    ++v3;
    if ( (int)v2 >= level.num_entities )
      return 2047i64;
  }
  return v2;
}

/*
==============
Nav_GetEntNumForTargetName
==============
*/
__int64 Nav_GetEntNumForTargetName(scr_string_t targetName)
{
  unsigned int v2; 
  __int64 v3; 
  __int64 v4; 
  const char *v5; 
  __int64 v7; 
  __int64 v8; 

  if ( !targetName )
    return 2047i64;
  v2 = 0;
  if ( level.num_entities <= 0 )
  {
LABEL_16:
    v5 = SL_ConvertToString(targetName);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 336, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find parent ent for space %s", v5) )
      __debugbreak();
    return 2047i64;
  }
  v3 = 0i64;
  v4 = 0i64;
  while ( 1 )
  {
    if ( v2 >= 0x800 )
    {
      LODWORD(v8) = 2048;
      LODWORD(v7) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v4].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v3] && g_entities[v4].targetname == targetName )
      return v2;
    ++v2;
    ++v3;
    ++v4;
    if ( (int)v2 >= level.num_entities )
      goto LABEL_16;
  }
}

/*
==============
Nav_GetSpaceByEntNum
==============
*/
nav_space_s *Nav_GetSpaceByEntNum(const int entNum)
{
  int firstUsed; 
  __int64 v3; 
  int defaultSpaceIdx; 
  __int64 v6; 
  __int64 v8; 
  int v9; 

  if ( (unsigned int)entNum >= 0x800 )
  {
    v9 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 990, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v9) )
      __debugbreak();
  }
  if ( (unsigned int)(entNum - 2046) <= 1 )
  {
    defaultSpaceIdx = g_NavData.defaultSpaceIdx;
    if ( g_NavData.defaultSpaceIdx >= 0x80u )
    {
      LODWORD(v8) = 128;
      LODWORD(v6) = g_NavData.defaultSpaceIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 993, ASSERT_TYPE_ASSERT, "(unsigned)( g_NavData.defaultSpaceIdx ) < (unsigned)( NAV_MAX_SPACES )", "g_NavData.defaultSpaceIdx doesn't index NAV_MAX_SPACES\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
      defaultSpaceIdx = g_NavData.defaultSpaceIdx;
    }
    return &g_NavData.spaces[defaultSpaceIdx];
  }
  else
  {
    firstUsed = g_NavData.spacePoolInfo.firstUsed;
    if ( g_NavData.spacePoolInfo.firstUsed < 0 )
    {
      return 0i64;
    }
    else
    {
      while ( 1 )
      {
        if ( (unsigned int)firstUsed >= 0x80 )
        {
          LODWORD(v8) = 128;
          LODWORD(v6) = firstUsed;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 999, ASSERT_TYPE_ASSERT, "(unsigned)( iSpace ) < (unsigned)( NAV_MAX_SPACES )", "iSpace doesn't index NAV_MAX_SPACES\n\t%i not in [0, %i)", v6, v8) )
            __debugbreak();
        }
        v3 = firstUsed;
        if ( g_NavData.spaces[v3].parentEntNum == entNum )
          break;
        firstUsed = g_NavData.spaces[v3].nextIdx;
        if ( firstUsed < 0 )
          return 0i64;
      }
      return &g_NavData.spaces[v3];
    }
  }
}

/*
==============
Nav_GetSpaceByEntity
==============
*/
nav_space_s *Nav_GetSpaceByEntity(const gentity_s *pEnt)
{
  int defaultSpaceIdx; 
  int firstUsed; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !g_NavData.bNavPowerInitialized )
    return 0i64;
  if ( !pEnt )
  {
    defaultSpaceIdx = g_NavData.defaultSpaceIdx;
    if ( g_NavData.defaultSpaceIdx >= 0x80u )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 969, ASSERT_TYPE_ASSERT, "(unsigned)( g_NavData.defaultSpaceIdx ) < (unsigned)( NAV_MAX_SPACES )", "g_NavData.defaultSpaceIdx doesn't index NAV_MAX_SPACES\n\t%i not in [0, %i)", g_NavData.defaultSpaceIdx, 128) )
        __debugbreak();
      defaultSpaceIdx = g_NavData.defaultSpaceIdx;
    }
    return &g_NavData.spaces[defaultSpaceIdx];
  }
  firstUsed = g_NavData.spacePoolInfo.firstUsed;
  if ( g_NavData.spacePoolInfo.firstUsed < 0 )
    return 0i64;
  while ( 1 )
  {
    if ( (unsigned int)firstUsed >= 0x80 )
    {
      LODWORD(v7) = 128;
      LODWORD(v6) = firstUsed;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 975, ASSERT_TYPE_ASSERT, "(unsigned)( iSpace ) < (unsigned)( NAV_MAX_SPACES )", "iSpace doesn't index NAV_MAX_SPACES\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    v5 = firstUsed;
    if ( g_NavData.spaces[v5].parentEntNum == pEnt->s.number )
      break;
    firstUsed = g_NavData.spaces[v5].nextIdx;
    if ( firstUsed < 0 )
      return 0i64;
  }
  return &g_NavData.spaces[v5];
}

/*
==============
Nav_GetSpaceByName
==============
*/
nav_space_s *Nav_GetSpaceByName(const scr_string_t spaceName)
{
  int firstUsed; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  if ( !spaceName )
    return Nav_GetDefaultSpace();
  firstUsed = g_NavData.spacePoolInfo.firstUsed;
  if ( g_NavData.spacePoolInfo.firstUsed < 0 )
    return 0i64;
  while ( 1 )
  {
    if ( (unsigned int)firstUsed >= 0x80 )
    {
      LODWORD(v6) = 128;
      LODWORD(v5) = firstUsed;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1021, ASSERT_TYPE_ASSERT, "(unsigned)( iSpace ) < (unsigned)( NAV_MAX_SPACES )", "iSpace doesn't index NAV_MAX_SPACES\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    v4 = firstUsed;
    if ( g_NavData.spaces[v4].name == spaceName )
      break;
    firstUsed = g_NavData.spaces[v4].nextIdx;
    if ( firstUsed < 0 )
      return 0i64;
  }
  return &g_NavData.spaces[v4];
}

/*
==============
Nav_GetSpaceUp
==============
*/
void Nav_GetSpaceUp(const nav_space_s *pSpace, vec3_t *outUp)
{
  unsigned int parentEntNum; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 307, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  parentEntNum = pSpace->parentEntNum;
  if ( parentEntNum == 2047 )
  {
    outUp->v[2] = 1.0;
    *(_QWORD *)outUp->v = 0i64;
  }
  else
  {
    if ( parentEntNum >= 0x800 )
    {
      LODWORD(v6) = pSpace->parentEntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 315, ASSERT_TYPE_ASSERT, "(unsigned)( pSpace->parentEntNum ) < (unsigned)( ( 2048 ) )", "pSpace->parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, 2048) )
        __debugbreak();
    }
    v5 = pSpace->parentEntNum;
    if ( (unsigned int)v5 >= 0x800 )
    {
      LODWORD(v7) = 2048;
      LODWORD(v6) = pSpace->parentEntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 316, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pSpace->parentEntNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( pSpace->parentEntNum )") )
      __debugbreak();
    AngleVectors(&g_entities[pSpace->parentEntNum].r.currentAngles, NULL, NULL, outUp);
  }
}

/*
==============
Nav_ReadSpace
==============
*/
void Nav_ReadSpace(MemoryFile *memFile)
{
  const char *CString; 
  scr_string_t String; 
  int v16; 
  nav_space_s *SpaceByEntNum; 
  __int64 v25; 
  nav_resource_s *ResourceByEntNum; 
  nav_space_s *pSpace; 
  char v32; 
  bool v33; 
  __int64 v37; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  int offsetLayer; 
  unsigned int p; 
  scr_string_t v51; 
  bfx::Vector3 pos; 
  bfx::Quaternion rot; 
  vec3_t localOffsetPos; 
  vec4_t localOffsetRot; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmmword ptr [r11-98h], xmm12
    vmovaps xmmword ptr [r11-0A8h], xmm13
    vmovaps xmmword ptr [r11-0B8h], xmm14
    vmovaps xmmword ptr [r11-0C8h], xmm15
  }
  CString = MemFile_ReadCString(memFile);
  if ( CString && *CString )
    String = SL_GetString(CString, 0);
  else
    String = 0;
  v51 = String;
  MemFile_ReadData(memFile, 4ui64, &p);
  v16 = p;
  SpaceByEntNum = Nav_GetSpaceByEntNum(p);
  if ( !SpaceByEntNum )
  {
    SpaceByEntNum = Nav_CreateSpaceWithName(String, v16);
    if ( !SpaceByEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1123, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
      __debugbreak();
  }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm9, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm10, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm11, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm12, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm13, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm14, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm15, xmm0 }
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( (int)p > 0 )
  {
    __asm { vmovaps [rsp+160h+var_38+8], xmm6 }
    v25 = p;
    __asm
    {
      vmovaps [rsp+160h+var_48+8], xmm7
      vmovaps [rsp+160h+var_58+8], xmm8
    }
    while ( 1 )
    {
      MemFile_ReadData(memFile, 4ui64, &p);
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm
      {
        vmovss  dword ptr [rsp+160h+localOffsetPos], xmm0
        vmovaps xmm8, xmm0
      }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm
      {
        vmovss  dword ptr [rsp+160h+localOffsetPos+4], xmm0
        vmovaps xmm6, xmm0
      }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm
      {
        vmovss  dword ptr [rsp+160h+localOffsetPos+8], xmm0
        vmovaps xmm7, xmm0
      }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rbp+60h+localOffsetRot], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rbp+60h+localOffsetRot+4], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rbp+60h+localOffsetRot+8], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rbp+60h+localOffsetRot+0Ch], xmm0 }
      MemFile_ReadData(memFile, 4ui64, &offsetLayer);
      ResourceByEntNum = Nav_GetResourceByEntNum(p);
      _RBX = ResourceByEntNum;
      if ( ResourceByEntNum )
      {
        if ( ResourceByEntNum->bDockable )
        {
          pSpace = ResourceByEntNum->pSpace;
          if ( pSpace == SpaceByEntNum )
            goto LABEL_26;
          if ( pSpace )
            Nav_RemoveResourceFromSpace(pSpace, ResourceByEntNum);
          Nav_AddResourceToNewSpace(SpaceByEntNum, _RBX, &localOffsetPos, &localOffsetRot, offsetLayer);
          __asm { vucomiss xmm8, dword ptr [rbx+1Ch] }
          if ( v32 )
          {
            __asm { vucomiss xmm6, dword ptr [rbx+20h] }
            if ( v32 )
            {
              __asm { vucomiss xmm7, dword ptr [rbx+24h] }
              if ( v32 )
                goto LABEL_26;
            }
          }
          v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1168, ASSERT_TYPE_ASSERT, "( Vec3Compare( pResource->localOffsetPos, localPos ) )", (const char *)&queryFormat, "Vec3Compare( pResource->localOffsetPos, localPos )");
          goto LABEL_24;
        }
        if ( !ResourceByEntNum->pNext || !ResourceByEntNum->pPrev || !ResourceByEntNum->pSpace )
        {
          v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1173, ASSERT_TYPE_ASSERT, "( pResource->pNext && pResource->pPrev && pResource->pSpace )", (const char *)&queryFormat, "pResource->pNext && pResource->pPrev && pResource->pSpace");
LABEL_24:
          if ( v33 )
            __debugbreak();
        }
      }
LABEL_26:
      if ( !--v25 )
      {
        String = v51;
        __asm
        {
          vmovaps xmm8, [rsp+160h+var_58+8]
          vmovaps xmm7, [rsp+160h+var_48+8]
          vmovaps xmm6, [rsp+160h+var_38+8]
        }
        break;
      }
    }
  }
  __asm
  {
    vmovss  [rsp+160h+pos.m_x], xmm9
    vmovss  [rsp+160h+pos.m_y], xmm10
    vmovss  [rsp+160h+pos.m_z], xmm11
    vmovss  [rsp+160h+rot.m_x], xmm12
    vmovss  [rsp+160h+rot.m_y], xmm13
    vmovss  [rsp+160h+rot.m_z], xmm14
    vmovss  [rsp+160h+rot.m_w], xmm15
  }
  bfx::SpaceHandle::SetPos(&SpaceByEntNum->hSpace, &pos);
  bfx::SpaceHandle::SetRot(&SpaceByEntNum->hSpace, &rot);
  MemFile_ReadData(memFile, 4ui64, &offsetLayer);
  v37 = (unsigned int)offsetLayer;
  __asm
  {
    vmovaps xmm15, [rsp+160h+var_C8+8]
    vmovaps xmm14, [rsp+160h+var_B8+8]
    vmovaps xmm13, [rsp+160h+var_A8+8]
    vmovaps xmm12, [rsp+160h+var_98+8]
    vmovaps xmm11, [rsp+160h+var_88+8]
    vmovaps xmm10, [rsp+160h+var_78+8]
    vmovaps xmm9, [rsp+160h+var_68+8]
  }
  if ( (unsigned int)offsetLayer >= 0x900 )
  {
    LODWORD(v47) = offsetLayer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1183, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( NAV_MAX_LINKS )", "count doesn't index NAV_MAX_LINKS\n\t%i not in [0, %i)", v47, 2304) )
      __debugbreak();
  }
  if ( (int)v37 > 0 )
  {
    do
    {
      Nav_ReadLink(memFile, SpaceByEntNum);
      --v37;
    }
    while ( v37 );
  }
  MemFile_ReadData(memFile, 4ui64, &offsetLayer);
  v45 = (unsigned int)offsetLayer;
  if ( (unsigned int)v45 >= Nav_GetMaxNumObstacles() )
  {
    LODWORD(v48) = Nav_GetMaxNumObstacles();
    LODWORD(v47) = v45;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1190, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( Nav_GetMaxNumObstacles() )", "count doesn't index Nav_GetMaxNumObstacles()\n\t%i not in [0, %i)", v47, v48) )
      __debugbreak();
  }
  if ( (int)v45 > 0 )
  {
    do
    {
      Nav_ReadAndCreateObstacle(memFile, SpaceByEntNum);
      --v45;
    }
    while ( v45 );
  }
  MemFile_ReadData(memFile, 4ui64, &offsetLayer);
  v46 = (unsigned int)offsetLayer;
  if ( (unsigned int)offsetLayer >= 0x100 )
  {
    LODWORD(v48) = 256;
    LODWORD(v47) = offsetLayer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1197, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( NAV_MAX_REPULSORS )", "count doesn't index NAV_MAX_REPULSORS\n\t%i not in [0, %i)", v47, v48) )
      __debugbreak();
  }
  if ( (int)v46 > 0 )
  {
    do
    {
      Nav_ReadRepulsor(memFile, SpaceByEntNum);
      --v46;
    }
    while ( v46 );
  }
  if ( String )
    SL_RemoveRefToString(String);
}

/*
==============
Nav_RemoveLinkFromSpace
==============
*/
void Nav_RemoveLinkFromSpace(nav_space_s *pSpace, nav_link_s *pLink)
{
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 650, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 651, ASSERT_TYPE_ASSERT, "(pLink)", (const char *)&queryFormat, "pLink") )
    __debugbreak();
  if ( pSpace == (nav_space_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 599, ASSERT_TYPE_ASSERT, "(pHead)", (const char *)&queryFormat, "pHead") )
    __debugbreak();
  if ( !pLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 600, ASSERT_TYPE_ASSERT, "(pObj)", (const char *)&queryFormat, "pObj") )
    __debugbreak();
  if ( (!pLink->pPrev || !pLink->pNext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 601, ASSERT_TYPE_ASSERT, "(pObj->pPrev && pObj->pNext)", "%s\n\tpObj is not in a list.", "pObj->pPrev && pObj->pNext") )
    __debugbreak();
  pLink->pPrev->pNext = pLink->pNext;
  pLink->pNext->pPrev = pLink->pPrev;
  pLink->pPrev = NULL;
  pLink->pNext = NULL;
  --pSpace->numLinks;
  pLink->pSpace = NULL;
  if ( pSpace->numLinks < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 658, ASSERT_TYPE_ASSERT, "(pSpace->numLinks >= 0)", (const char *)&queryFormat, "pSpace->numLinks >= 0") )
    __debugbreak();
}

/*
==============
Nav_RemoveObstacleFromList
==============
*/

void __fastcall Nav_RemoveObstacleFromList(nav_obstacle_s *pList, nav_obstacle_s *pObstacle)
{
  Nav_RemoveObjFromList_nav_obstacle_s_(pList, pObstacle);
}

/*
==============
Nav_RemoveObstacleFromSpace
==============
*/
void Nav_RemoveObstacleFromSpace(nav_space_s *pSpace, nav_obstacle_s *pObstacle, bool bPreserveOrdering)
{
  int numObstacles; 
  nav_obstacle_s *pNext; 
  nav_obstacle_s *v9; 
  nav_obstacle_s *v10; 
  nav_obstacle_s *v11; 
  nav_obstacle_s **p_pNext; 
  nav_obstacle_s v13; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 662, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pObstacle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 663, ASSERT_TYPE_ASSERT, "(pObstacle)", (const char *)&queryFormat, "pObstacle") )
    __debugbreak();
  if ( !pObstacle->pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 664, ASSERT_TYPE_ASSERT, "(pObstacle->pSpace)", (const char *)&queryFormat, "pObstacle->pSpace") )
    __debugbreak();
  if ( pObstacle->pSpace != pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 665, ASSERT_TYPE_ASSERT, "( pObstacle->pSpace == pSpace )", "attempting to remove obstacle from space it is not in.") )
    __debugbreak();
  if ( (!pObstacle->pPrev || !pObstacle->pNext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 667, ASSERT_TYPE_ASSERT, "( pObstacle->pPrev && pObstacle->pNext )", "obstacle is not in this or any nav space.") )
    __debugbreak();
  if ( pObstacle->pPrev && pObstacle->pNext )
  {
    numObstacles = pSpace->numObstacles;
    bfx::ObstacleHandle::ObstacleHandle(&v13.hObstacle);
    v13.obsData.m_layerMask = -1;
    v13.obsData.m_obstacleBehavior = OBSTACLE_BEHAVIOR_AUTOMATIC;
    __asm
    {
      vmovss  xmm0, cs:__real@41700000
      vmovss  [rsp+1D8h+var_158], xmm0
    }
    v13.obsData.m_obstacleBlockageFlags = -1;
    v13.obsData.m_userData = 0i64;
    v13.obsData.m_obstacleName = NULL;
    v13.pPrev = &v13;
    v13.pNext = &v13;
    if ( bPreserveOrdering )
    {
      pNext = pSpace->obstacleList.pNext;
      while ( pNext != &pSpace->obstacleList )
      {
        if ( pNext == pObstacle )
          break;
        v9 = pNext;
        pNext = pNext->pNext;
        Nav_RemoveObstacleFromSpace(pSpace, v9, 0);
        bfx::DestroyObstacle(&v9->hObstacle);
        bfx::ObstacleHandle::Release(&v9->hObstacle);
        Nav_AddObjToList_nav_obstacle_s_(&v13, v9);
      }
    }
    Nav_RemoveObjFromList_nav_obstacle_s_(&pSpace->obstacleList, pObstacle);
    --pSpace->numObstacles;
    if ( bPreserveOrdering )
    {
      v10 = v13.pNext;
      while ( v10 != &v13 )
      {
        v11 = v10;
        p_pNext = &v10->pNext;
        v10 = v10->pNext;
        if ( (!v11->pPrev || !v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 601, ASSERT_TYPE_ASSERT, "(pObj->pPrev && pObj->pNext)", "%s\n\tpObj is not in a list.", "pObj->pPrev && pObj->pNext") )
          __debugbreak();
        v11->pPrev->pNext = *p_pNext;
        (*p_pNext)->pPrev = v11->pPrev;
        v11->pPrev = NULL;
        *p_pNext = NULL;
        Nav_AddExistingObstacleToSpace(pSpace, v11);
      }
    }
    pObstacle->pSpace = NULL;
    if ( numObstacles - 1 != pSpace->numObstacles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 711, ASSERT_TYPE_ASSERT, "(numObstaclesInSpace - 1 == pSpace->numObstacles)", (const char *)&queryFormat, "numObstaclesInSpace - 1 == pSpace->numObstacles") )
      __debugbreak();
    if ( pSpace->numObstacles < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 712, ASSERT_TYPE_ASSERT, "(pSpace->numObstacles >= 0)", (const char *)&queryFormat, "pSpace->numObstacles >= 0") )
      __debugbreak();
    bfx::ObstacleHandle::~ObstacleHandle(&v13.hObstacle);
  }
}

/*
==============
Nav_RemoveObstaclesMarkedForDeleteFromAllSpaces
==============
*/
void Nav_RemoveObstaclesMarkedForDeleteFromAllSpaces(bool bPreserveOrdering)
{
  bool v3; 
  int firstUsed; 
  nav_space_s *v6; 
  char v7; 
  nav_obstacle_s *v8; 
  navdata_s *pNext; 
  navdata_s *v10; 
  nav_obstacle_s *v11; 
  nav_obstacle_s *v12; 
  nav_obstacle_s *v13; 
  nav_obstacle_s **p_pNext; 
  char v17; 
  __int64 v19; 
  nav_obstacle_s v20; 
  char v21; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v3 = bPreserveOrdering;
  firstUsed = g_NavData.spacePoolInfo.firstUsed;
  if ( g_NavData.spacePoolInfo.firstUsed >= 0 )
  {
    __asm { vmovss  xmm6, cs:__real@41700000 }
    do
    {
      v19 = firstUsed;
      v6 = &g_NavData.spaces[v19];
      if ( (navdata_s *)((char *)&g_NavData + v19 * 640) == (navdata_s *)-1056i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 717, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
        __debugbreak();
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Nav_RemoveObstaclesMarkedForDeleteFromSpace");
      v7 = 0;
      v17 = 0;
      bfx::ObstacleHandle::ObstacleHandle(&v20.hObstacle);
      v20.obsData.m_layerMask = -1;
      v20.obsData.m_obstacleBehavior = OBSTACLE_BEHAVIOR_AUTOMATIC;
      __asm { vmovss  [rsp+1E8h+var_158], xmm6 }
      v20.obsData.m_obstacleBlockageFlags = -1;
      v20.obsData.m_userData = 0i64;
      v20.obsData.m_obstacleName = NULL;
      v20.pPrev = &v20;
      v8 = &v20;
      v20.pNext = &v20;
      pNext = (navdata_s *)g_NavData.spaces[v19].obstacleList.pNext;
      v10 = pNext;
      if ( pNext != (navdata_s *)&g_NavData.spaces[v19].obstacleList )
      {
        do
        {
          v11 = (nav_obstacle_s *)v10;
          v10 = (navdata_s *)v10->resources[38];
          if ( v11->m_bDeleteMe )
          {
            if ( v3 )
            {
              Sys_ProfBeginNamedEvent(0xFFFFFFFF, "RemoveObstacles_PreserveOrdering");
              while ( pNext != (navdata_s *)v11 )
              {
                v12 = (nav_obstacle_s *)pNext;
                pNext = (navdata_s *)pNext->resources[38];
                Nav_RemoveObstacleFromSpace(v6, v12, 0);
                bfx::DestroyObstacle(&v12->hObstacle);
                bfx::ObstacleHandle::Release(&v12->hObstacle);
                Nav_AddObjToList_nav_obstacle_s_(&v20, v12);
              }
              Sys_ProfEndNamedEvent();
            }
            bfx::DestroyObstacle(&v11->hObstacle);
            bfx::ObstacleHandle::Release(&v11->hObstacle);
            Nav_RemoveObjFromList_nav_obstacle_s_(&g_NavData.spaces[v19].obstacleList, v11);
            --g_NavData.spaces[v19].numObstacles;
            v11->pSpace = NULL;
            Nav_FreeObstacle(v11);
            v7 = 1;
            pNext = v10;
          }
        }
        while ( v10 != (navdata_s *)&g_NavData.spaces[v19].obstacleList );
        v17 = v7;
        v8 = v20.pNext;
      }
      if ( v3 && v8 != &v20 )
      {
        do
        {
          v13 = v8;
          p_pNext = &v8->pNext;
          v8 = v8->pNext;
          if ( (!v13->pPrev || !v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 601, ASSERT_TYPE_ASSERT, "(pObj->pPrev && pObj->pNext)", "%s\n\tpObj is not in a list.", "pObj->pPrev && pObj->pNext") )
            __debugbreak();
          v13->pPrev->pNext = *p_pNext;
          (*p_pNext)->pPrev = v13->pPrev;
          v13->pPrev = NULL;
          *p_pNext = NULL;
          Nav_AddExistingObstacleToSpace(v6, v13);
        }
        while ( v8 != &v20 );
        v7 = v17;
        v3 = bPreserveOrdering;
      }
      if ( v7 )
        Nav_ClearCachedData(v6);
      if ( g_NavData.spaces[v19].numObstacles < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 786, ASSERT_TYPE_ASSERT, "(pSpace->numObstacles >= 0)", (const char *)&queryFormat, "pSpace->numObstacles >= 0") )
        __debugbreak();
      Sys_ProfEndNamedEvent();
      bfx::ObstacleHandle::~ObstacleHandle(&v20.hObstacle);
      firstUsed = g_NavData.spaces[v19].nextIdx;
    }
    while ( firstUsed >= 0 );
  }
  _R11 = &v21;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
Nav_RemoveObstaclesMarkedForDeleteFromSpace
==============
*/
void Nav_RemoveObstaclesMarkedForDeleteFromSpace(nav_space_s *pSpace, bool bPreserveOrdering)
{
  char v4; 
  nav_obstacle_s *v6; 
  nav_obstacle_s *pNext; 
  nav_obstacle_s *v8; 
  nav_obstacle_s *v9; 
  nav_obstacle_s *v10; 
  nav_obstacle_s *v11; 
  nav_obstacle_s **p_pNext; 
  nav_obstacle_s v13; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 717, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace", -2i64) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Nav_RemoveObstaclesMarkedForDeleteFromSpace");
  v4 = 0;
  bfx::ObstacleHandle::ObstacleHandle(&v13.hObstacle);
  v13.obsData.m_layerMask = -1;
  v13.obsData.m_obstacleBehavior = OBSTACLE_BEHAVIOR_AUTOMATIC;
  __asm
  {
    vmovss  xmm0, cs:__real@41700000
    vmovss  [rsp+1C8h+var_148], xmm0
  }
  v13.obsData.m_obstacleBlockageFlags = -1;
  v13.obsData.m_userData = 0i64;
  v13.obsData.m_obstacleName = NULL;
  v13.pPrev = &v13;
  v6 = &v13;
  v13.pNext = &v13;
  pNext = pSpace->obstacleList.pNext;
  v8 = pNext;
  if ( pNext != &pSpace->obstacleList )
  {
    do
    {
      v9 = v8;
      v8 = v8->pNext;
      if ( v9->m_bDeleteMe )
      {
        if ( bPreserveOrdering )
        {
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "RemoveObstacles_PreserveOrdering");
          while ( pNext != v9 )
          {
            v10 = pNext;
            pNext = pNext->pNext;
            Nav_RemoveObstacleFromSpace(pSpace, v10, 0);
            bfx::DestroyObstacle(&v10->hObstacle);
            bfx::ObstacleHandle::Release(&v10->hObstacle);
            Nav_AddObjToList_nav_obstacle_s_(&v13, v10);
          }
          Sys_ProfEndNamedEvent();
        }
        bfx::DestroyObstacle(&v9->hObstacle);
        bfx::ObstacleHandle::Release(&v9->hObstacle);
        Nav_RemoveObjFromList_nav_obstacle_s_(&pSpace->obstacleList, v9);
        --pSpace->numObstacles;
        v9->pSpace = NULL;
        Nav_FreeObstacle(v9);
        v4 = 1;
        pNext = v8;
      }
    }
    while ( v8 != &pSpace->obstacleList );
    v6 = v13.pNext;
  }
  if ( bPreserveOrdering && v6 != &v13 )
  {
    do
    {
      v11 = v6;
      p_pNext = &v6->pNext;
      v6 = v6->pNext;
      if ( (!v11->pPrev || !v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 601, ASSERT_TYPE_ASSERT, "(pObj->pPrev && pObj->pNext)", "%s\n\tpObj is not in a list.", "pObj->pPrev && pObj->pNext") )
        __debugbreak();
      v11->pPrev->pNext = *p_pNext;
      (*p_pNext)->pPrev = v11->pPrev;
      v11->pPrev = NULL;
      *p_pNext = NULL;
      Nav_AddExistingObstacleToSpace(pSpace, v11);
    }
    while ( v6 != &v13 );
  }
  if ( v4 )
    Nav_ClearCachedData(pSpace);
  if ( pSpace->numObstacles < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 786, ASSERT_TYPE_ASSERT, "(pSpace->numObstacles >= 0)", (const char *)&queryFormat, "pSpace->numObstacles >= 0") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
  bfx::ObstacleHandle::~ObstacleHandle(&v13.hObstacle);
}

/*
==============
Nav_RemoveRepulsorFromSpace
==============
*/
void Nav_RemoveRepulsorFromSpace(nav_space_s *pSpace, nav_repulsor_s *pRepulsor)
{
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 802, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pRepulsor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 803, ASSERT_TYPE_ASSERT, "(pRepulsor)", (const char *)&queryFormat, "pRepulsor") )
    __debugbreak();
  if ( pSpace == (nav_space_s *)-424i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 599, ASSERT_TYPE_ASSERT, "(pHead)", (const char *)&queryFormat, "pHead") )
    __debugbreak();
  if ( !pRepulsor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 600, ASSERT_TYPE_ASSERT, "(pObj)", (const char *)&queryFormat, "pObj") )
    __debugbreak();
  if ( (!pRepulsor->pPrev || !pRepulsor->pNext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 601, ASSERT_TYPE_ASSERT, "(pObj->pPrev && pObj->pNext)", "%s\n\tpObj is not in a list.", "pObj->pPrev && pObj->pNext") )
    __debugbreak();
  pRepulsor->pPrev->pNext = pRepulsor->pNext;
  pRepulsor->pNext->pPrev = pRepulsor->pPrev;
  pRepulsor->pPrev = NULL;
  pRepulsor->pNext = NULL;
  --pSpace->numRepulsors;
  pRepulsor->pSpace = NULL;
  if ( pSpace->numRepulsors < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 810, ASSERT_TYPE_ASSERT, "(pSpace->numRepulsors >= 0)", (const char *)&queryFormat, "pSpace->numRepulsors >= 0") )
    __debugbreak();
}

/*
==============
Nav_RemoveResourceFromSpace
==============
*/
void Nav_RemoveResourceFromSpace(nav_space_s *pSpace, nav_resource_s *pResource)
{
  unsigned __int8 *pWorkingGraph; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 938, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pResource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 939, ASSERT_TYPE_ASSERT, "(pResource)", (const char *)&queryFormat, "pResource") )
    __debugbreak();
  if ( pResource->bDockable )
  {
    if ( !pResource->pWorkingGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 943, ASSERT_TYPE_ASSERT, "(pResource->pWorkingGraph)", (const char *)&queryFormat, "pResource->pWorkingGraph") )
      __debugbreak();
    pWorkingGraph = pResource->pWorkingGraph;
  }
  else
  {
    pWorkingGraph = pResource->pGraphBuffer;
  }
  bfx::RemoveResource(&pSpace->hSpace, (char *)pWorkingGraph);
  if ( pSpace == (nav_space_s *)-520i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 599, ASSERT_TYPE_ASSERT, "(pHead)", (const char *)&queryFormat, "pHead") )
    __debugbreak();
  if ( (!pResource->pPrev || !pResource->pNext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 601, ASSERT_TYPE_ASSERT, "(pObj->pPrev && pObj->pNext)", "%s\n\tpObj is not in a list.", "pObj->pPrev && pObj->pNext") )
    __debugbreak();
  pResource->pPrev->pNext = pResource->pNext;
  pResource->pNext->pPrev = pResource->pPrev;
  pResource->pPrev = NULL;
  pResource->pNext = NULL;
  --pSpace->numResources;
  pResource->pSpace = NULL;
  if ( pSpace->numResources < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 956, ASSERT_TYPE_ASSERT, "(pSpace->numResources >= 0)", (const char *)&queryFormat, "pSpace->numResources >= 0") )
    __debugbreak();
}

/*
==============
Nav_SpaceConvertLocalToWorld
==============
*/
void Nav_SpaceConvertLocalToWorld(nav_space_s *pSpace, const vec3_t *localPos, vec3_t *outWorldPos)
{
  bfx::Quaternion result; 
  vec4_t quat; 

  _RBX = outWorldPos;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 492, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 493, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  if ( localPos == _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 494, ASSERT_TYPE_ASSERT, "( &localPos != &outWorldPos )", (const char *)&queryFormat, "&localPos != &outWorldPos") )
    __debugbreak();
  if ( pSpace == Nav_GetDefaultSpace() )
  {
    _RBX->v[0] = localPos->v[0];
    _RBX->v[1] = localPos->v[1];
    _RBX->v[2] = localPos->v[2];
  }
  else
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_28], xmm6
      vmovaps [rsp+0A8h+var_38], xmm7
      vmovaps [rsp+0A8h+var_48], xmm8
    }
    _RAX = bfx::SpaceHandle::GetPos(&pSpace->hSpace, (bfx::Vector3 *)&result);
    __asm
    {
      vmovss  xmm6, dword ptr [rax]
      vmovss  xmm7, dword ptr [rax+4]
      vmovss  xmm8, dword ptr [rax+8]
    }
    _RAX = bfx::SpaceHandle::GetRot(&pSpace->hSpace, &result);
    __asm
    {
      vmovss  xmm3, dword ptr [rax]
      vmovss  xmm2, dword ptr [rax+0Ch]
      vmovss  xmm1, dword ptr [rax+8]
      vmovss  xmm0, dword ptr [rax+4]
      vmovss  dword ptr [rsp+0A8h+quat], xmm0
      vmovss  dword ptr [rsp+0A8h+quat+4], xmm1
      vmovss  dword ptr [rsp+0A8h+quat+8], xmm2
      vmovss  dword ptr [rsp+0A8h+quat+0Ch], xmm3
    }
    QuatTransform(&quat, localPos, _RBX);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vaddss  xmm1, xmm7, dword ptr [rbx+4]
      vmovaps xmm7, [rsp+0A8h+var_38]
      vmovaps xmm6, [rsp+0A8h+var_28]
      vmovss  dword ptr [rbx], xmm0
      vaddss  xmm0, xmm8, dword ptr [rbx+8]
      vmovaps xmm8, [rsp+0A8h+var_48]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
  }
}

/*
==============
Nav_SpaceConvertLocalToWorld
==============
*/
void Nav_SpaceConvertLocalToWorld(nav_space_s *pSpace, const vec3_t *localPos, const vec4_t *localRot, vec3_t *outWorldPos, vec4_t *outWorldRot)
{
  bfx::Quaternion result; 
  vec4_t quat; 

  _RBX = outWorldPos;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 441, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 442, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  if ( localPos == _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 443, ASSERT_TYPE_ASSERT, "( &localPos != &outWorldPos )", (const char *)&queryFormat, "&localPos != &outWorldPos") )
    __debugbreak();
  if ( pSpace == Nav_GetDefaultSpace() )
  {
    _RBX->v[0] = localPos->v[0];
    _RBX->v[1] = localPos->v[1];
    _RBX->v[2] = localPos->v[2];
    *outWorldRot = *localRot;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+0C8h+var_48], xmm6
      vmovaps [rsp+0C8h+var_58], xmm7
      vmovaps [rsp+0C8h+var_68], xmm8
    }
    _RAX = bfx::SpaceHandle::GetPos(&pSpace->hSpace, (bfx::Vector3 *)&result);
    __asm
    {
      vmovss  xmm6, dword ptr [rax]
      vmovss  xmm7, dword ptr [rax+4]
      vmovss  xmm8, dword ptr [rax+8]
    }
    _RAX = bfx::SpaceHandle::GetRot(&pSpace->hSpace, &result);
    __asm
    {
      vmovss  xmm3, dword ptr [rax]
      vmovss  xmm2, dword ptr [rax+0Ch]
      vmovss  xmm1, dword ptr [rax+8]
      vmovss  xmm0, dword ptr [rax+4]
      vmovss  dword ptr [rsp+0C8h+quat], xmm0
      vmovss  dword ptr [rsp+0C8h+quat+4], xmm1
      vmovss  dword ptr [rsp+0C8h+quat+8], xmm2
      vmovss  dword ptr [rsp+0C8h+quat+0Ch], xmm3
    }
    QuatTransform(&quat, localPos, _RBX);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vaddss  xmm1, xmm7, dword ptr [rbx+4]
      vmovss  dword ptr [rbx], xmm0
      vaddss  xmm0, xmm8, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
    QuatMultiply(&quat, localRot, outWorldRot);
    __asm
    {
      vmovaps xmm8, [rsp+0C8h+var_68]
      vmovaps xmm7, [rsp+0C8h+var_58]
      vmovaps xmm6, [rsp+0C8h+var_48]
    }
  }
}

/*
==============
Nav_SpaceConvertWorldToLocal
==============
*/
void Nav_SpaceConvertWorldToLocal(nav_space_s *pSpace, const vec3_t *worldPos, vec3_t *outLocalPos)
{
  bfx::Quaternion result; 
  vec3_t in; 
  vec4_t quat; 

  _RBX = worldPos;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 467, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 468, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  if ( pSpace == Nav_GetDefaultSpace() )
  {
    outLocalPos->v[0] = _RBX->v[0];
    outLocalPos->v[1] = _RBX->v[1];
    outLocalPos->v[2] = _RBX->v[2];
  }
  else
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_28], xmm6
      vmovaps [rsp+0B8h+var_38], xmm7
      vmovaps [rsp+0B8h+var_48], xmm8
    }
    _RAX = bfx::SpaceHandle::GetPos(&pSpace->hSpace, (bfx::Vector3 *)&result);
    __asm
    {
      vmovss  xmm6, dword ptr [rax]
      vmovss  xmm7, dword ptr [rax+4]
      vmovss  xmm8, dword ptr [rax+8]
    }
    _RAX = bfx::SpaceHandle::GetRot(&pSpace->hSpace, &result);
    __asm
    {
      vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rax+4]
      vmovss  xmm1, dword ptr [rax+8]
      vmovss  xmm3, dword ptr [rax+0Ch]
      vmovss  xmm4, dword ptr [rax]
      vxorps  xmm0, xmm0, xmm2
      vxorps  xmm1, xmm1, xmm2
      vmovss  dword ptr [rsp+0B8h+quat], xmm0
      vxorps  xmm0, xmm3, xmm2
      vmovss  xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+0B8h+quat+4], xmm1
      vmovss  xmm1, dword ptr [rbx]
      vmovss  dword ptr [rsp+0B8h+quat+8], xmm0
      vsubss  xmm0, xmm1, xmm6
      vsubss  xmm1, xmm2, xmm7
      vmovss  dword ptr [rsp+0B8h+in], xmm0
      vmovss  xmm0, dword ptr [rbx+8]
      vsubss  xmm2, xmm0, xmm8
      vmovss  dword ptr [rsp+0B8h+in+8], xmm2
      vmovss  dword ptr [rsp+0B8h+quat+0Ch], xmm4
      vmovss  dword ptr [rsp+0B8h+in+4], xmm1
    }
    QuatTransform(&quat, &in, outLocalPos);
    __asm
    {
      vmovaps xmm8, [rsp+0B8h+var_48]
      vmovaps xmm7, [rsp+0B8h+var_38]
      vmovaps xmm6, [rsp+0B8h+var_28]
    }
  }
}

/*
==============
Nav_SpaceConvertWorldToLocal
==============
*/
void Nav_SpaceConvertWorldToLocal(nav_space_s *pSpace, const vec3_t *worldPos, const vec4_t *worldRot, vec3_t *outLocalPos, vec4_t *outLocalRot)
{
  bfx::Quaternion result; 
  vec4_t quat; 
  vec3_t in; 

  _R14 = worldPos;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 412, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 413, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  if ( worldRot == outLocalRot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 414, ASSERT_TYPE_ASSERT, "( &worldRot != &outLocalRot )", (const char *)&queryFormat, "&worldRot != &outLocalRot") )
    __debugbreak();
  if ( pSpace == Nav_GetDefaultSpace() )
  {
    outLocalPos->v[0] = _R14->v[0];
    outLocalPos->v[1] = _R14->v[1];
    outLocalPos->v[2] = _R14->v[2];
    *outLocalRot = *worldRot;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovaps [rsp+0C8h+var_48], xmm7
      vmovaps [rsp+0C8h+var_58], xmm8
    }
    _RAX = bfx::SpaceHandle::GetPos(&pSpace->hSpace, (bfx::Vector3 *)&result);
    __asm
    {
      vmovss  xmm6, dword ptr [rax]
      vmovss  xmm7, dword ptr [rax+4]
      vmovss  xmm8, dword ptr [rax+8]
    }
    _RAX = bfx::SpaceHandle::GetRot(&pSpace->hSpace, &result);
    __asm
    {
      vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rax+4]
      vmovss  xmm1, dword ptr [rax+8]
      vmovss  xmm3, dword ptr [rax+0Ch]
      vmovss  xmm4, dword ptr [rax]
      vxorps  xmm0, xmm0, xmm2
      vxorps  xmm1, xmm1, xmm2
      vmovss  dword ptr [rsp+0C8h+quat], xmm0
      vxorps  xmm0, xmm3, xmm2
      vmovss  xmm2, dword ptr [r14+4]
      vmovss  dword ptr [rsp+0C8h+quat+4], xmm1
      vmovss  xmm1, dword ptr [r14]
      vmovss  dword ptr [rsp+0C8h+quat+8], xmm0
      vsubss  xmm0, xmm1, xmm6
      vsubss  xmm1, xmm2, xmm7
      vmovss  dword ptr [rsp+0C8h+in], xmm0
      vmovss  xmm0, dword ptr [r14+8]
      vsubss  xmm2, xmm0, xmm8
      vmovss  dword ptr [rsp+0C8h+in+8], xmm2
      vmovss  dword ptr [rsp+0C8h+quat+0Ch], xmm4
      vmovss  dword ptr [rsp+0C8h+in+4], xmm1
    }
    QuatTransform(&quat, &in, outLocalPos);
    QuatMultiply(worldRot, &quat, outLocalRot);
    __asm
    {
      vmovaps xmm8, [rsp+0C8h+var_58]
      vmovaps xmm7, [rsp+0C8h+var_48]
      vmovaps xmm6, [rsp+0C8h+var_38]
    }
  }
}

/*
==============
Nav_TransferObjsToSpace
==============
*/
void Nav_TransferObjsToSpace(nav_space_s *pNewSpace)
{
  Nav_TransferLinksToSpace(pNewSpace);
  Nav_TransferRepulsorsToSpace(pNewSpace);
  Nav_TransferObstaclesToSpace(pNewSpace);
  Nav_TransferNavigatorsToSpace(pNewSpace);
}

/*
==============
Nav_UpdateSpace
==============
*/
void Nav_UpdateSpace(nav_space_s *pSpace)
{
  __int64 parentEntNum; 
  __int64 v11; 
  __int64 v12; 
  bfx::Vector3 pos; 
  bfx::Quaternion rot; 
  vec4_t quat; 

  if ( pSpace->parentEntNum >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 518, ASSERT_TYPE_ASSERT, "(unsigned)( pSpace->parentEntNum ) < (unsigned)( ( 2048 ) )", "pSpace->parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", pSpace->parentEntNum, 2048) )
    __debugbreak();
  parentEntNum = pSpace->parentEntNum;
  if ( (_DWORD)parentEntNum != 2047 )
  {
    if ( (unsigned int)parentEntNum >= 0x800 )
    {
      LODWORD(v12) = 2048;
      LODWORD(v11) = pSpace->parentEntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[parentEntNum].r.isInUse != g_entityIsInUse[parentEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[parentEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 523, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pSpace->parentEntNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( pSpace->parentEntNum )") )
      __debugbreak();
    _RCX = &g_entities[pSpace->parentEntNum];
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+130h]
      vmovss  [rsp+88h+pos.m_x], xmm0
      vmovss  xmm1, dword ptr [rcx+134h]
      vmovss  [rsp+88h+pos.m_y], xmm1
      vmovss  xmm0, dword ptr [rcx+138h]
      vmovss  [rsp+88h+pos.m_z], xmm0
    }
    AnglesToQuat(&_RCX->r.currentAngles, &quat);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+quat]
      vmovss  xmm1, dword ptr [rsp+88h+quat+4]
      vmovss  [rsp+88h+rot.m_x], xmm0
      vmovss  xmm0, dword ptr [rsp+88h+quat+8]
      vmovss  [rsp+88h+rot.m_y], xmm1
      vmovss  xmm1, dword ptr [rsp+88h+quat+0Ch]
      vmovss  [rsp+88h+rot.m_z], xmm0
      vmovss  [rsp+88h+rot.m_w], xmm1
    }
    bfx::SpaceHandle::SetPos(&pSpace->hSpace, &pos);
    bfx::SpaceHandle::SetRot(&pSpace->hSpace, &rot);
  }
}

/*
==============
Nav_UpdateSpaces
==============
*/
void Nav_UpdateSpaces(void)
{
  int firstUsed; 
  __int64 v1; 
  nav_space_s *v2; 
  __int64 parentEntNum; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v14; 
  __int64 v15; 
  bfx::Vector3 pos; 
  bfx::Quaternion rot; 
  vec4_t quat; 

  if ( Nav_MeshLoaded() )
  {
    firstUsed = g_NavData.spacePoolInfo.firstUsed;
    while ( firstUsed >= 0 )
    {
      v1 = firstUsed;
      firstUsed = g_NavData.spaces[v1].nextIdx;
      v2 = &g_NavData.spaces[v1];
      parentEntNum = g_NavData.spaces[v1].parentEntNum;
      if ( (_DWORD)parentEntNum != 2047 )
      {
        if ( (unsigned int)parentEntNum >= 0x800 )
        {
          LODWORD(v15) = 2048;
          LODWORD(v14) = g_NavData.spaces[v1].parentEntNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[parentEntNum].r.isInUse != g_entityIsInUse[parentEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[parentEntNum] )
          Nav_ClearResourcesFromSpace(v2);
      }
      v4 = v2->parentEntNum;
      if ( v2->numResources > 0 )
      {
        if ( v4 >= 0x800 )
        {
          LODWORD(v15) = 2048;
          LODWORD(v14) = v2->parentEntNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 518, ASSERT_TYPE_ASSERT, "(unsigned)( pSpace->parentEntNum ) < (unsigned)( ( 2048 ) )", "pSpace->parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        v5 = v2->parentEntNum;
        if ( (_DWORD)v5 != 2047 )
        {
          if ( (unsigned int)v5 >= 0x800 )
          {
            LODWORD(v15) = 2048;
            LODWORD(v14) = v2->parentEntNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v15) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 523, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pSpace->parentEntNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( pSpace->parentEntNum )") )
            __debugbreak();
          _RCX = &g_entities[v2->parentEntNum];
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+130h]
            vmovss  [rsp+0A8h+pos.m_x], xmm0
            vmovss  xmm1, dword ptr [rcx+134h]
            vmovss  [rsp+0A8h+pos.m_y], xmm1
            vmovss  xmm0, dword ptr [rcx+138h]
            vmovss  [rsp+0A8h+pos.m_z], xmm0
          }
          AnglesToQuat(&_RCX->r.currentAngles, &quat);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0A8h+quat]
            vmovss  xmm1, dword ptr [rsp+0A8h+quat+4]
            vmovss  [rsp+0A8h+rot.m_x], xmm0
            vmovss  xmm0, dword ptr [rsp+0A8h+quat+8]
            vmovss  [rsp+0A8h+rot.m_y], xmm1
            vmovss  xmm1, dword ptr [rsp+0A8h+quat+0Ch]
            vmovss  [rsp+0A8h+rot.m_z], xmm0
            vmovss  [rsp+0A8h+rot.m_w], xmm1
          }
          bfx::SpaceHandle::SetPos(&v2->hSpace, &pos);
          bfx::SpaceHandle::SetRot(&v2->hSpace, &rot);
        }
      }
      else
      {
        if ( v4 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 558, ASSERT_TYPE_ASSERT, "( pSpace->parentEntNum != ENTITYNUM_NONE )", (const char *)&queryFormat, "pSpace->parentEntNum != ENTITYNUM_NONE") )
          __debugbreak();
        Nav_ClearObstaclesFromSpace(v2, 0, NULL);
        Nav_ClearLinksFromSpace(v2, 0, NULL);
        Nav_ClearRepulsorsFromSpace(v2, 0, NULL);
        Nav_ClearNavigatorsFromSpace(v2, NULL);
        Nav_DestroySpace(v2);
      }
    }
  }
}

/*
==============
Nav_WriteSpace
==============
*/
void Nav_WriteSpace(MemoryFile *memFile, nav_space_s *pSpace)
{
  const char *v4; 
  nav_resource_s *i; 
  nav_link_s *j; 
  nav_obstacle_s *k; 
  nav_repulsor_s *pNext; 
  nav_repulsor_s *m; 
  int p; 
  bfx::Quaternion result; 
  int v21[4]; 
  int v22[4]; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1042, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1043, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  v4 = SL_ConvertToString(pSpace->name);
  MemFile_WriteCString(memFile, v4);
  p = pSpace->parentEntNum;
  MemFile_WriteData(memFile, 4ui64, &p);
  _RAX = bfx::SpaceHandle::GetPos(&pSpace->hSpace, (bfx::Vector3 *)&result);
  __asm
  {
    vmovss  xmm2, dword ptr [rax+8]
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  xmm0, dword ptr [rax]
    vmovss  [rbp+var_28], xmm0
    vmovss  [rbp+var_24], xmm1
    vmovss  [rbp+var_20], xmm2
  }
  _RAX = bfx::SpaceHandle::GetRot(&pSpace->hSpace, &result);
  __asm
  {
    vmovss  xmm3, dword ptr [rax]
    vmovss  xmm2, dword ptr [rax+0Ch]
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  [rbp+var_18], xmm0
    vmovss  [rbp+var_14], xmm1
    vmovss  [rbp+var_10], xmm2
    vmovss  [rbp+var_C], xmm3
  }
  MemFile_WriteData(memFile, 0xCui64, v21);
  MemFile_WriteData(memFile, 0x10ui64, v22);
  p = pSpace->numResources;
  MemFile_WriteData(memFile, 4ui64, &p);
  for ( i = pSpace->resourceList.pNext; i != &pSpace->resourceList; i = i->pNext )
  {
    p = i->targetEntNum;
    MemFile_WriteData(memFile, 4ui64, &p);
    MemFile_WriteData(memFile, 0xCui64, &i->localOffsetPos);
    MemFile_WriteData(memFile, 0x10ui64, &i->localOffsetRot);
    p = i->offsetLayer;
    MemFile_WriteData(memFile, 4ui64, &p);
  }
  p = pSpace->numLinks;
  MemFile_WriteData(memFile, 4ui64, &p);
  for ( j = pSpace->linkList.pNext; j != &pSpace->linkList; j = j->pNext )
    Nav_WriteLink(memFile, j);
  p = pSpace->numObstacles;
  MemFile_WriteData(memFile, 4ui64, &p);
  for ( k = pSpace->obstacleList.pPrev; k != &pSpace->obstacleList; k = k->pPrev )
    Nav_WriteObstacle(memFile, k);
  p = pSpace->numRepulsors;
  MemFile_WriteData(memFile, 4ui64, &p);
  pNext = pSpace->repulsorList.pNext;
  for ( m = &pSpace->repulsorList; pNext != m; pNext = pNext->pNext )
    Nav_WriteRepulsor(memFile, pNext);
}

