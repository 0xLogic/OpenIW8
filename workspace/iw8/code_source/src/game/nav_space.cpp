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
  const char *v9; 
  bool v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  unsigned __int8 *pGraphBuffer; 
  bfx::Vector3 *Pos; 
  float m_x; 
  float m_y; 
  float m_z; 
  bfx::Quaternion *Rot; 
  float m_w; 
  float v23; 
  float v24; 
  bfx::ResourceOffset offset; 
  bfx::Quaternion result; 
  float v0[4]; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 827, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pResource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 828, ASSERT_TYPE_ASSERT, "( pResource )", (const char *)&queryFormat, "pResource") )
    __debugbreak();
  if ( pResource->pNext || pResource->pPrev )
  {
    v9 = SL_ConvertToString(pResource->targetName);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 829, ASSERT_TYPE_ASSERT, "(!pResource->pNext && !pResource->pPrev)", "%s\n\tresource %s is already in a space's list", "!pResource->pNext && !pResource->pPrev", v9) )
      __debugbreak();
  }
  v10 = !pResource->bDockable;
  v11 = localOffsetPos->v[1];
  offset.m_positionOffset.m_x = localOffsetPos->v[0];
  offset.m_positionOffset.m_z = localOffsetPos->v[2];
  v12 = localOffsetRot->v[1];
  offset.m_positionOffset.m_y = v11;
  v13 = localOffsetRot->v[0];
  offset.m_rotationOffset.m_y = v12;
  v14 = localOffsetRot->v[3];
  offset.m_rotationOffset.m_x = v13;
  v15 = localOffsetRot->v[2];
  offset.m_rotationOffset.m_w = v14;
  offset.m_rotationOffset.m_z = v15;
  offset.m_layerOffset = offsetLayer;
  if ( v10 )
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
  Pos = bfx::SpaceHandle::GetPos(&pSpace->hSpace, (bfx::Vector3 *)&result);
  m_x = Pos->m_x;
  m_y = Pos->m_y;
  m_z = Pos->m_z;
  Rot = bfx::SpaceHandle::GetRot(&pSpace->hSpace, &result);
  m_w = Rot->m_w;
  v23 = Rot->m_z;
  v24 = Rot->m_y;
  v0[0] = Rot->m_x;
  v0[2] = v23;
  v0[1] = v24;
  v0[3] = m_w;
  if ( ((float)((float)((float)((float)(0.0 - m_y) * (float)(0.0 - m_y)) + (float)((float)(0.0 - m_x) * (float)(0.0 - m_x))) + (float)((float)(0.0 - m_z) * (float)(0.0 - m_z))) >= 1.0 || !VecNCompareCustomEpsilon(v0, quat_identity.v, 1.0, 4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 854, ASSERT_TYPE_ASSERT, "( Vec3DistanceSq( spacePos, vec3_origin ) < 1.f && Vec4CompareCustomEpsilon( qSpaceRot, quat_identity, 1.f ) )", (const char *)&queryFormat, "Vec3DistanceSq( spacePos, vec3_origin ) < 1.f && Vec4CompareCustomEpsilon( qSpaceRot, quat_identity, 1.f )") )
    __debugbreak();
  pResource->localOffsetPos.v[0] = localOffsetPos->v[0];
  pResource->localOffsetPos.v[1] = localOffsetPos->v[1];
  pResource->localOffsetPos.v[2] = localOffsetPos->v[2];
  pResource->localOffsetRot.v[0] = localOffsetRot->v[0];
  pResource->localOffsetRot.v[1] = localOffsetRot->v[1];
  pResource->localOffsetRot.v[2] = localOffsetRot->v[2];
  pResource->localOffsetRot.v[3] = localOffsetRot->v[3];
  pResource->offsetLayer = offsetLayer;
  Nav_AddObjToList_nav_resource_s_(&pSpace->resourceList, pResource);
  ++pSpace->numResources;
  pResource->pSpace = pSpace;
}

/*
==============
Nav_AddResourceToOldSpace
==============
*/
void Nav_AddResourceToOldSpace(nav_space_s *pSpace, nav_resource_s *pResource, const vec3_t *currentResourcePos, const vec4_t *qCurrentResourceRot, int offsetLayer)
{
  const char *v9; 
  vec4_t *p_localOffsetRot; 
  vec3_t *p_localOffsetPos; 
  gentity_s *v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  unsigned __int8 *pWorkingGraph; 
  __int64 v22; 
  __int64 v23; 
  bfx::Quaternion rot; 
  bfx::ResourceOffset offset; 
  bfx::Vector3 result; 
  bfx::Quaternion v27; 
  vec4_t in2; 
  vec3_t in; 
  vec4_t quat; 

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
      LODWORD(v23) = 2048;
      LODWORD(v22) = pSpace->parentEntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 891, ASSERT_TYPE_ASSERT, "(unsigned)( pSpace->parentEntNum ) < (unsigned)( ( 2048 ) )", "pSpace->parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v12 = &g_entities[pSpace->parentEntNum];
    AnglesToQuat(&v12->r.currentAngles, &quat);
    LODWORD(in2.v[0]) = LODWORD(quat.v[0]) ^ _xmm;
    LODWORD(in2.v[1]) = LODWORD(quat.v[1]) ^ _xmm;
    v13 = currentResourcePos->v[0];
    LODWORD(in2.v[2]) = LODWORD(quat.v[2]) ^ _xmm;
    v14 = currentResourcePos->v[1];
    in2.v[3] = quat.v[3];
    in.v[0] = v13 - v12->r.currentOrigin.v[0];
    v15 = currentResourcePos->v[2];
    in.v[1] = v14 - v12->r.currentOrigin.v[1];
    p_localOffsetPos = &pResource->localOffsetPos;
    in.v[2] = v15 - v12->r.currentOrigin.v[2];
    QuatTransform(&in2, &in, &pResource->localOffsetPos);
    p_localOffsetRot = &pResource->localOffsetRot;
    QuatMultiply(qCurrentResourceRot, &in2, &pResource->localOffsetRot);
  }
  else
  {
    p_localOffsetRot = &pResource->localOffsetRot;
    pResource->localOffsetPos.v[0] = currentResourcePos->v[0];
    p_localOffsetPos = &pResource->localOffsetPos;
    pResource->localOffsetPos.v[1] = currentResourcePos->v[1];
    pResource->localOffsetPos.v[2] = currentResourcePos->v[2];
    pResource->localOffsetRot.v[0] = qCurrentResourceRot->v[0];
    pResource->localOffsetRot.v[1] = qCurrentResourceRot->v[1];
    pResource->localOffsetRot.v[2] = qCurrentResourceRot->v[2];
    pResource->localOffsetRot.v[3] = qCurrentResourceRot->v[3];
  }
  pResource->offsetLayer = offsetLayer;
  v16 = p_localOffsetPos->v[1];
  offset.m_positionOffset.m_x = p_localOffsetPos->v[0];
  offset.m_positionOffset.m_z = p_localOffsetPos->v[2];
  v17 = p_localOffsetRot->v[1];
  offset.m_positionOffset.m_y = v16;
  v18 = p_localOffsetRot->v[0];
  offset.m_rotationOffset.m_y = v17;
  v19 = p_localOffsetRot->v[3];
  offset.m_rotationOffset.m_x = v18;
  v20 = p_localOffsetRot->v[2];
  offset.m_rotationOffset.m_w = v19;
  offset.m_rotationOffset.m_z = v20;
  offset.m_layerOffset = offsetLayer;
  bfx::SpaceHandle::GetPos(&pSpace->hSpace, &result);
  bfx::SpaceHandle::GetRot(&pSpace->hSpace, &v27);
  rot.m_x = quat_identity.v[0];
  rot.m_y = quat_identity.v[1];
  rot.m_z = quat_identity.v[2];
  rot.m_w = quat_identity.v[3];
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
  bfx::SpaceHandle::SetRot(&pSpace->hSpace, &v27);
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

  return Nav_FindMostLikelySpaceCustom(pos, -1.0, layer, pIgnoreSpace, NULL, &outPos, NULL);
}

/*
==============
Nav_FindMostLikelySpaceCustom
==============
*/
nav_space_s *Nav_FindMostLikelySpaceCustom(const vec3_t *pos, float radius, const AINavLayer layer, const nav_space_s *pIgnoreSpace, const bfx::PathSpec *pPathSpec, vec3_t *outPos, bfx::AreaHandle *pOutArea)
{
  vec3_t *v8; 
  bfx::AreaHandle *v9; 
  int v10; 
  int firstUsed; 
  const nav_space_s *v12; 
  unsigned int v13; 
  __int64 v14; 
  nav_space_s *v15; 
  unsigned int parentEntNum; 
  __int64 v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  bfx::AreaHandle *v26; 
  nav_space_s *v27; 
  nav_space_s *DefaultSpace; 
  const char *v29; 
  vec3_t *outClosestPos; 
  bfx::AreaHandle *v32; 
  float v34; 
  int v35; 
  float v36; 
  int v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  bfx::AreaHandle rhs; 
  vec3_t *v44; 
  bfx::AreaHandle *v45; 
  bfx::AreaHandle v46; 
  bfx::AreaHandle v47; 
  __int64 v48; 
  vec3_t up; 
  vec3_t v50; 
  bfx::PathSpec v51; 

  v48 = -2i64;
  v8 = outPos;
  v44 = outPos;
  v9 = pOutArea;
  v45 = pOutArea;
  v36 = FLOAT_3_4028235e38;
  v10 = -1;
  v37 = -1;
  bfx::AreaHandle::AreaHandle(&v47);
  v34 = FLOAT_3_4028235e38;
  v35 = -1;
  bfx::AreaHandle::AreaHandle(&v46);
  v51.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&v51.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&v51.m_areaPenaltyFlags = -1i64;
  v51.m_usePathSharingPenalty = 0;
  v51.m_pathSharingPenalty = 0.0;
  v51.m_maxPathSharingPenalty = 0.0;
  v51.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&v51.m_penaltyTable);
  v51.m_snapMode = SNAP_CLOSEST;
  if ( pPathSpec )
    v51 = *pPathSpec;
  firstUsed = g_NavData.spacePoolInfo.firstUsed;
  if ( g_NavData.spacePoolInfo.firstUsed >= 0 )
  {
    v12 = pIgnoreSpace;
    v13 = layer;
    do
    {
      v14 = firstUsed;
      v15 = &g_NavData.spaces[v14];
      if ( (unsigned int)firstUsed >= 0x80 )
      {
        LODWORD(v32) = 128;
        LODWORD(outClosestPos) = firstUsed;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 200, ASSERT_TYPE_ASSERT, "(unsigned)( iSpace ) < (unsigned)( NAV_MAX_SPACES )", "iSpace doesn't index NAV_MAX_SPACES\n\t%i not in [0, %i)", outClosestPos, v32) )
          __debugbreak();
      }
      if ( !bfx::SpaceHandle::IsValid(&v15->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 201, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
        __debugbreak();
      if ( g_NavData.spaces[v14].numResources && v12 != v15 )
      {
        parentEntNum = g_NavData.spaces[v14].parentEntNum;
        if ( parentEntNum == 2047 )
        {
          up.v[0] = 0.0;
          up.v[1] = 0.0;
          up.v[2] = FLOAT_1_0;
        }
        else
        {
          if ( parentEntNum >= 0x800 )
          {
            LODWORD(v32) = 2048;
            LODWORD(outClosestPos) = g_NavData.spaces[v14].parentEntNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 315, ASSERT_TYPE_ASSERT, "(unsigned)( pSpace->parentEntNum ) < (unsigned)( ( 2048 ) )", "pSpace->parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outClosestPos, v32) )
              __debugbreak();
          }
          v17 = g_NavData.spaces[v14].parentEntNum;
          if ( (unsigned int)v17 >= 0x800 )
          {
            LODWORD(v32) = 2048;
            LODWORD(outClosestPos) = g_NavData.spaces[v14].parentEntNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outClosestPos, v32) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[v17].r.isInUse != g_entityIsInUse[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 316, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pSpace->parentEntNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( pSpace->parentEntNum )") )
            __debugbreak();
          AngleVectors(&g_entities[g_NavData.spaces[v14].parentEntNum].r.currentAngles, NULL, NULL, &up);
          v10 = v35;
        }
        bfx::AreaHandle::AreaHandle(&rhs);
        if ( Nav_GetClosestVerticalPos(pos, &up, v13, &v15->hSpace, &v51, &v50, &rhs) )
        {
          v18 = v50.v[0];
          v19 = pos->v[1];
          v20 = v50.v[1];
          v21 = pos->v[2];
          v22 = v50.v[2];
          v23 = (float)((float)((float)(v50.v[1] - v19) * (float)(v50.v[1] - v19)) + (float)((float)(v50.v[0] - pos->v[0]) * (float)(v50.v[0] - pos->v[0]))) + (float)((float)(v50.v[2] - v21) * (float)(v50.v[2] - v21));
          v24 = pos->v[0] - v50.v[0];
          v25 = (float)((float)((float)(v19 - v50.v[1]) * up.v[1]) + (float)(v24 * up.v[0])) + (float)((float)(v21 - v50.v[2]) * up.v[2]);
          if ( radius > 0.0 && (float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(v25) ^ _xmm) * up.v[1]) + (float)(v19 - v50.v[1])) * (float)((float)(COERCE_FLOAT(LODWORD(v25) ^ _xmm) * up.v[1]) + (float)(v19 - v50.v[1]))) + (float)((float)((float)(COERCE_FLOAT(LODWORD(v25) ^ _xmm) * up.v[0]) + v24) * (float)((float)(COERCE_FLOAT(LODWORD(v25) ^ _xmm) * up.v[0]) + v24))) + (float)((float)((float)(COERCE_FLOAT(LODWORD(v25) ^ _xmm) * up.v[2]) + (float)(v21 - v50.v[2])) * (float)((float)(COERCE_FLOAT(LODWORD(v25) ^ _xmm) * up.v[2]) + (float)(v21 - v50.v[2])))) < (float)(radius * radius) && v25 > -12.0 && v25 < 128.0 && COERCE_FLOAT(LODWORD(v25) & _xmm) <= v34 )
          {
            LODWORD(v34) = LODWORD(v25) & _xmm;
            v10 = firstUsed;
            v35 = firstUsed;
            layer = SLODWORD(v50.v[0]);
            v38 = v50.v[1];
            v39 = v50.v[2];
            bfx::AreaHandle::operator=(&v46, &rhs);
            v22 = v50.v[2];
            v20 = v50.v[1];
            v18 = v50.v[0];
          }
          if ( v23 < v36 )
          {
            v36 = v23;
            v37 = firstUsed;
            v40 = v18;
            v41 = v20;
            *(float *)&pIgnoreSpace = v22;
            bfx::AreaHandle::operator=(&v47, &rhs);
          }
        }
        bfx::AreaHandle::~AreaHandle(&rhs);
      }
      firstUsed = g_NavData.spaces[v14].nextIdx;
    }
    while ( firstUsed >= 0 );
    v8 = v44;
    v9 = v45;
    if ( v10 >= 0 )
    {
      v44->v[0] = *(float *)&layer;
      v8->v[1] = v38;
      v8->v[2] = v39;
      if ( v9 )
      {
        v26 = &v46;
LABEL_48:
        bfx::AreaHandle::operator=(v9, v26);
        goto LABEL_49;
      }
      goto LABEL_49;
    }
    v10 = v37;
    if ( v37 >= 0 )
    {
      v44->v[0] = v40;
      v8->v[1] = v41;
      v8->v[2] = *(float *)&pIgnoreSpace;
      if ( v9 )
      {
        v26 = &v47;
        goto LABEL_48;
      }
LABEL_49:
      v27 = &g_NavData.spaces[v10];
      goto LABEL_57;
    }
  }
  v8->v[0] = pos->v[0];
  v8->v[1] = pos->v[1];
  v8->v[2] = pos->v[2];
  if ( v9 )
    bfx::AreaHandle::Release(v9);
  DefaultSpace = Nav_GetDefaultSpace();
  v27 = DefaultSpace;
  if ( DefaultSpace )
  {
    if ( DefaultSpace->numResources )
    {
      v29 = vtos(pos);
      Com_PrintWarning(18, "FindMostLikelySpace: returning default, which is not considered valid for pos %s\n", v29);
    }
    else
    {
      Com_PrintWarning(18, "FindMostLikelySpace: returning default even though it is invalid.\n");
    }
  }
  else
  {
    v27 = NULL;
  }
LABEL_57:
  bfx::AreaHandle::~AreaHandle(&v46);
  bfx::AreaHandle::~AreaHandle(&v47);
  return v27;
}

/*
==============
Nav_FindMostLikelySpaceWithRadius
==============
*/
nav_space_s *Nav_FindMostLikelySpaceWithRadius(const vec3_t *pos, float radius, const AINavLayer layer, nav_space_s *pIgnoreSpace)
{
  vec3_t outPos; 

  return Nav_FindMostLikelySpaceCustom(pos, radius, layer, pIgnoreSpace, NULL, &outPos, NULL);
}

/*
==============
Nav_GetClosestVerticalPosInMostLikelySpace
==============
*/
nav_space_s *Nav_GetClosestVerticalPosInMostLikelySpace(const vec3_t *pos, AINavLayer layer, float radius, const bfx::PathSpec *pPathSpec, vec3_t *outPos, bfx::AreaHandle *pOutArea)
{
  return Nav_FindMostLikelySpaceCustom(pos, radius, layer, NULL, pPathSpec, outPos, pOutArea);
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
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  const char *CString; 
  scr_string_t String; 
  int v14; 
  nav_space_s *SpaceByEntNum; 
  double Float; 
  float v17; 
  double v18; 
  float v19; 
  double v20; 
  float v21; 
  double v22; 
  float v23; 
  double v24; 
  float v25; 
  double v26; 
  float v27; 
  double v28; 
  float v29; 
  __int64 v30; 
  double v31; 
  float v32; 
  double v33; 
  float v34; 
  double v35; 
  float v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 
  nav_resource_s *ResourceByEntNum; 
  nav_resource_s *v42; 
  nav_space_s *pSpace; 
  bool v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  int offsetLayer; 
  unsigned int p; 
  scr_string_t v52; 
  bfx::Vector3 pos; 
  bfx::Quaternion rot; 
  vec3_t localOffsetPos; 
  vec4_t localOffsetRot; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 
  __int128 v63; 
  __int128 v64; 
  __int128 v65; 
  __int128 v66; 

  v63 = v4;
  v62 = v5;
  v61 = v6;
  v60 = v7;
  v59 = v8;
  v58 = v9;
  v57 = v10;
  CString = MemFile_ReadCString(memFile);
  if ( CString && *CString )
    String = SL_GetString(CString, 0);
  else
    String = 0;
  v52 = String;
  MemFile_ReadData(memFile, 4ui64, &p);
  v14 = p;
  SpaceByEntNum = Nav_GetSpaceByEntNum(p);
  if ( !SpaceByEntNum )
  {
    SpaceByEntNum = Nav_CreateSpaceWithName(String, v14);
    if ( !SpaceByEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1123, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
      __debugbreak();
  }
  Float = MemFile_ReadFloat(memFile);
  v17 = *(float *)&Float;
  v18 = MemFile_ReadFloat(memFile);
  v19 = *(float *)&v18;
  v20 = MemFile_ReadFloat(memFile);
  v21 = *(float *)&v20;
  v22 = MemFile_ReadFloat(memFile);
  v23 = *(float *)&v22;
  v24 = MemFile_ReadFloat(memFile);
  v25 = *(float *)&v24;
  v26 = MemFile_ReadFloat(memFile);
  v27 = *(float *)&v26;
  v28 = MemFile_ReadFloat(memFile);
  v29 = *(float *)&v28;
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( (int)p > 0 )
  {
    v66 = v1;
    v30 = p;
    v65 = v2;
    v64 = v3;
    while ( 1 )
    {
      MemFile_ReadData(memFile, 4ui64, &p);
      v31 = MemFile_ReadFloat(memFile);
      localOffsetPos.v[0] = *(float *)&v31;
      v32 = *(float *)&v31;
      v33 = MemFile_ReadFloat(memFile);
      localOffsetPos.v[1] = *(float *)&v33;
      v34 = *(float *)&v33;
      v35 = MemFile_ReadFloat(memFile);
      localOffsetPos.v[2] = *(float *)&v35;
      v36 = *(float *)&v35;
      v37 = MemFile_ReadFloat(memFile);
      localOffsetRot.v[0] = *(float *)&v37;
      v38 = MemFile_ReadFloat(memFile);
      localOffsetRot.v[1] = *(float *)&v38;
      v39 = MemFile_ReadFloat(memFile);
      localOffsetRot.v[2] = *(float *)&v39;
      v40 = MemFile_ReadFloat(memFile);
      localOffsetRot.v[3] = *(float *)&v40;
      MemFile_ReadData(memFile, 4ui64, &offsetLayer);
      ResourceByEntNum = Nav_GetResourceByEntNum(p);
      v42 = ResourceByEntNum;
      if ( ResourceByEntNum )
      {
        if ( ResourceByEntNum->bDockable )
        {
          pSpace = ResourceByEntNum->pSpace;
          if ( pSpace == SpaceByEntNum )
            goto LABEL_26;
          if ( pSpace )
            Nav_RemoveResourceFromSpace(pSpace, ResourceByEntNum);
          Nav_AddResourceToNewSpace(SpaceByEntNum, v42, &localOffsetPos, &localOffsetRot, offsetLayer);
          if ( v32 == v42->localOffsetPos.v[0] && v34 == v42->localOffsetPos.v[1] && v36 == v42->localOffsetPos.v[2] )
            goto LABEL_26;
          v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1168, ASSERT_TYPE_ASSERT, "( Vec3Compare( pResource->localOffsetPos, localPos ) )", (const char *)&queryFormat, "Vec3Compare( pResource->localOffsetPos, localPos )");
          goto LABEL_24;
        }
        if ( !ResourceByEntNum->pNext || !ResourceByEntNum->pPrev || !ResourceByEntNum->pSpace )
        {
          v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1173, ASSERT_TYPE_ASSERT, "( pResource->pNext && pResource->pPrev && pResource->pSpace )", (const char *)&queryFormat, "pResource->pNext && pResource->pPrev && pResource->pSpace");
LABEL_24:
          if ( v44 )
            __debugbreak();
        }
      }
LABEL_26:
      if ( !--v30 )
      {
        String = v52;
        break;
      }
    }
  }
  pos.m_x = v17;
  pos.m_y = v19;
  pos.m_z = v21;
  rot.m_x = v23;
  rot.m_y = v25;
  rot.m_z = v27;
  rot.m_w = v29;
  bfx::SpaceHandle::SetPos(&SpaceByEntNum->hSpace, &pos);
  bfx::SpaceHandle::SetRot(&SpaceByEntNum->hSpace, &rot);
  MemFile_ReadData(memFile, 4ui64, &offsetLayer);
  v45 = (unsigned int)offsetLayer;
  if ( (unsigned int)offsetLayer >= 0x900 )
  {
    LODWORD(v48) = offsetLayer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1183, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( NAV_MAX_LINKS )", "count doesn't index NAV_MAX_LINKS\n\t%i not in [0, %i)", v48, 2304) )
      __debugbreak();
  }
  if ( (int)v45 > 0 )
  {
    do
    {
      Nav_ReadLink(memFile, SpaceByEntNum);
      --v45;
    }
    while ( v45 );
  }
  MemFile_ReadData(memFile, 4ui64, &offsetLayer);
  v46 = (unsigned int)offsetLayer;
  if ( (unsigned int)v46 >= Nav_GetMaxNumObstacles() )
  {
    LODWORD(v49) = Nav_GetMaxNumObstacles();
    LODWORD(v48) = v46;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1190, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( Nav_GetMaxNumObstacles() )", "count doesn't index Nav_GetMaxNumObstacles()\n\t%i not in [0, %i)", v48, v49) )
      __debugbreak();
  }
  if ( (int)v46 > 0 )
  {
    do
    {
      Nav_ReadAndCreateObstacle(memFile, SpaceByEntNum);
      --v46;
    }
    while ( v46 );
  }
  MemFile_ReadData(memFile, 4ui64, &offsetLayer);
  v47 = (unsigned int)offsetLayer;
  if ( (unsigned int)offsetLayer >= 0x100 )
  {
    LODWORD(v49) = 256;
    LODWORD(v48) = offsetLayer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1197, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( NAV_MAX_REPULSORS )", "count doesn't index NAV_MAX_REPULSORS\n\t%i not in [0, %i)", v48, v49) )
      __debugbreak();
  }
  if ( (int)v47 > 0 )
  {
    do
    {
      Nav_ReadRepulsor(memFile, SpaceByEntNum);
      --v47;
    }
    while ( v47 );
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
  nav_obstacle_s *v8; 
  nav_obstacle_s *v9; 
  nav_obstacle_s *v10; 
  nav_obstacle_s **p_pNext; 
  nav_obstacle_s v12; 

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
    bfx::ObstacleHandle::ObstacleHandle(&v12.hObstacle);
    v12.obsData.m_layerMask = -1;
    v12.obsData.m_obstacleBehavior = OBSTACLE_BEHAVIOR_AUTOMATIC;
    v12.obsData.m_penaltyMult = FLOAT_15_0;
    v12.obsData.m_obstacleBlockageFlags = -1;
    v12.obsData.m_userData = 0i64;
    v12.obsData.m_obstacleName = NULL;
    v12.pPrev = &v12;
    v12.pNext = &v12;
    if ( bPreserveOrdering )
    {
      pNext = pSpace->obstacleList.pNext;
      while ( pNext != &pSpace->obstacleList )
      {
        if ( pNext == pObstacle )
          break;
        v8 = pNext;
        pNext = pNext->pNext;
        Nav_RemoveObstacleFromSpace(pSpace, v8, 0);
        bfx::DestroyObstacle(&v8->hObstacle);
        bfx::ObstacleHandle::Release(&v8->hObstacle);
        Nav_AddObjToList_nav_obstacle_s_(&v12, v8);
      }
    }
    Nav_RemoveObjFromList_nav_obstacle_s_(&pSpace->obstacleList, pObstacle);
    --pSpace->numObstacles;
    if ( bPreserveOrdering )
    {
      v9 = v12.pNext;
      while ( v9 != &v12 )
      {
        v10 = v9;
        p_pNext = &v9->pNext;
        v9 = v9->pNext;
        if ( (!v10->pPrev || !v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 601, ASSERT_TYPE_ASSERT, "(pObj->pPrev && pObj->pNext)", "%s\n\tpObj is not in a list.", "pObj->pPrev && pObj->pNext") )
          __debugbreak();
        v10->pPrev->pNext = *p_pNext;
        (*p_pNext)->pPrev = v10->pPrev;
        v10->pPrev = NULL;
        *p_pNext = NULL;
        Nav_AddExistingObstacleToSpace(pSpace, v10);
      }
    }
    pObstacle->pSpace = NULL;
    if ( numObstacles - 1 != pSpace->numObstacles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 711, ASSERT_TYPE_ASSERT, "(numObstaclesInSpace - 1 == pSpace->numObstacles)", (const char *)&queryFormat, "numObstaclesInSpace - 1 == pSpace->numObstacles") )
      __debugbreak();
    if ( pSpace->numObstacles < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 712, ASSERT_TYPE_ASSERT, "(pSpace->numObstacles >= 0)", (const char *)&queryFormat, "pSpace->numObstacles >= 0") )
      __debugbreak();
    bfx::ObstacleHandle::~ObstacleHandle(&v12.hObstacle);
  }
}

/*
==============
Nav_RemoveObstaclesMarkedForDeleteFromAllSpaces
==============
*/
void Nav_RemoveObstaclesMarkedForDeleteFromAllSpaces(bool bPreserveOrdering)
{
  bool v1; 
  int i; 
  nav_space_s *v3; 
  char v4; 
  nav_obstacle_s *v5; 
  navdata_s *pNext; 
  navdata_s *v7; 
  nav_obstacle_s *v8; 
  nav_obstacle_s *v9; 
  nav_obstacle_s *v10; 
  nav_obstacle_s **p_pNext; 
  char v12; 
  __int64 v14; 
  nav_obstacle_s v15; 

  v1 = bPreserveOrdering;
  for ( i = g_NavData.spacePoolInfo.firstUsed; i >= 0; i = g_NavData.spaces[v14].nextIdx )
  {
    v14 = i;
    v3 = &g_NavData.spaces[v14];
    if ( (navdata_s *)((char *)&g_NavData + v14 * 640) == (navdata_s *)-1056i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 717, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Nav_RemoveObstaclesMarkedForDeleteFromSpace");
    v4 = 0;
    v12 = 0;
    bfx::ObstacleHandle::ObstacleHandle(&v15.hObstacle);
    v15.obsData.m_layerMask = -1;
    v15.obsData.m_obstacleBehavior = OBSTACLE_BEHAVIOR_AUTOMATIC;
    v15.obsData.m_penaltyMult = FLOAT_15_0;
    v15.obsData.m_obstacleBlockageFlags = -1;
    v15.obsData.m_userData = 0i64;
    v15.obsData.m_obstacleName = NULL;
    v15.pPrev = &v15;
    v5 = &v15;
    v15.pNext = &v15;
    pNext = (navdata_s *)g_NavData.spaces[v14].obstacleList.pNext;
    v7 = pNext;
    if ( pNext != (navdata_s *)&g_NavData.spaces[v14].obstacleList )
    {
      do
      {
        v8 = (nav_obstacle_s *)v7;
        v7 = (navdata_s *)v7->resources[38];
        if ( v8->m_bDeleteMe )
        {
          if ( v1 )
          {
            Sys_ProfBeginNamedEvent(0xFFFFFFFF, "RemoveObstacles_PreserveOrdering");
            while ( pNext != (navdata_s *)v8 )
            {
              v9 = (nav_obstacle_s *)pNext;
              pNext = (navdata_s *)pNext->resources[38];
              Nav_RemoveObstacleFromSpace(v3, v9, 0);
              bfx::DestroyObstacle(&v9->hObstacle);
              bfx::ObstacleHandle::Release(&v9->hObstacle);
              Nav_AddObjToList_nav_obstacle_s_(&v15, v9);
            }
            Sys_ProfEndNamedEvent();
          }
          bfx::DestroyObstacle(&v8->hObstacle);
          bfx::ObstacleHandle::Release(&v8->hObstacle);
          Nav_RemoveObjFromList_nav_obstacle_s_(&g_NavData.spaces[v14].obstacleList, v8);
          --g_NavData.spaces[v14].numObstacles;
          v8->pSpace = NULL;
          Nav_FreeObstacle(v8);
          v4 = 1;
          pNext = v7;
        }
      }
      while ( v7 != (navdata_s *)&g_NavData.spaces[v14].obstacleList );
      v12 = v4;
      v5 = v15.pNext;
    }
    if ( v1 && v5 != &v15 )
    {
      do
      {
        v10 = v5;
        p_pNext = &v5->pNext;
        v5 = v5->pNext;
        if ( (!v10->pPrev || !v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 601, ASSERT_TYPE_ASSERT, "(pObj->pPrev && pObj->pNext)", "%s\n\tpObj is not in a list.", "pObj->pPrev && pObj->pNext") )
          __debugbreak();
        v10->pPrev->pNext = *p_pNext;
        (*p_pNext)->pPrev = v10->pPrev;
        v10->pPrev = NULL;
        *p_pNext = NULL;
        Nav_AddExistingObstacleToSpace(v3, v10);
      }
      while ( v5 != &v15 );
      v4 = v12;
      v1 = bPreserveOrdering;
    }
    if ( v4 )
      Nav_ClearCachedData(v3);
    if ( g_NavData.spaces[v14].numObstacles < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 786, ASSERT_TYPE_ASSERT, "(pSpace->numObstacles >= 0)", (const char *)&queryFormat, "pSpace->numObstacles >= 0") )
      __debugbreak();
    Sys_ProfEndNamedEvent();
    bfx::ObstacleHandle::~ObstacleHandle(&v15.hObstacle);
  }
}

/*
==============
Nav_RemoveObstaclesMarkedForDeleteFromSpace
==============
*/
void Nav_RemoveObstaclesMarkedForDeleteFromSpace(nav_space_s *pSpace, bool bPreserveOrdering)
{
  char v4; 
  nav_obstacle_s *v5; 
  nav_obstacle_s *pNext; 
  nav_obstacle_s *v7; 
  nav_obstacle_s *v8; 
  nav_obstacle_s *v9; 
  nav_obstacle_s *v10; 
  nav_obstacle_s **p_pNext; 
  nav_obstacle_s v12; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 717, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace", -2i64) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Nav_RemoveObstaclesMarkedForDeleteFromSpace");
  v4 = 0;
  bfx::ObstacleHandle::ObstacleHandle(&v12.hObstacle);
  v12.obsData.m_layerMask = -1;
  v12.obsData.m_obstacleBehavior = OBSTACLE_BEHAVIOR_AUTOMATIC;
  v12.obsData.m_penaltyMult = FLOAT_15_0;
  v12.obsData.m_obstacleBlockageFlags = -1;
  v12.obsData.m_userData = 0i64;
  v12.obsData.m_obstacleName = NULL;
  v12.pPrev = &v12;
  v5 = &v12;
  v12.pNext = &v12;
  pNext = pSpace->obstacleList.pNext;
  v7 = pNext;
  if ( pNext != &pSpace->obstacleList )
  {
    do
    {
      v8 = v7;
      v7 = v7->pNext;
      if ( v8->m_bDeleteMe )
      {
        if ( bPreserveOrdering )
        {
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "RemoveObstacles_PreserveOrdering");
          while ( pNext != v8 )
          {
            v9 = pNext;
            pNext = pNext->pNext;
            Nav_RemoveObstacleFromSpace(pSpace, v9, 0);
            bfx::DestroyObstacle(&v9->hObstacle);
            bfx::ObstacleHandle::Release(&v9->hObstacle);
            Nav_AddObjToList_nav_obstacle_s_(&v12, v9);
          }
          Sys_ProfEndNamedEvent();
        }
        bfx::DestroyObstacle(&v8->hObstacle);
        bfx::ObstacleHandle::Release(&v8->hObstacle);
        Nav_RemoveObjFromList_nav_obstacle_s_(&pSpace->obstacleList, v8);
        --pSpace->numObstacles;
        v8->pSpace = NULL;
        Nav_FreeObstacle(v8);
        v4 = 1;
        pNext = v7;
      }
    }
    while ( v7 != &pSpace->obstacleList );
    v5 = v12.pNext;
  }
  if ( bPreserveOrdering && v5 != &v12 )
  {
    do
    {
      v10 = v5;
      p_pNext = &v5->pNext;
      v5 = v5->pNext;
      if ( (!v10->pPrev || !v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 601, ASSERT_TYPE_ASSERT, "(pObj->pPrev && pObj->pNext)", "%s\n\tpObj is not in a list.", "pObj->pPrev && pObj->pNext") )
        __debugbreak();
      v10->pPrev->pNext = *p_pNext;
      (*p_pNext)->pPrev = v10->pPrev;
      v10->pPrev = NULL;
      *p_pNext = NULL;
      Nav_AddExistingObstacleToSpace(pSpace, v10);
    }
    while ( v5 != &v12 );
  }
  if ( v4 )
    Nav_ClearCachedData(pSpace);
  if ( pSpace->numObstacles < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 786, ASSERT_TYPE_ASSERT, "(pSpace->numObstacles >= 0)", (const char *)&queryFormat, "pSpace->numObstacles >= 0") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
  bfx::ObstacleHandle::~ObstacleHandle(&v12.hObstacle);
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
  bfx::Vector3 *Pos; 
  float m_x; 
  float m_y; 
  float m_z; 
  bfx::Quaternion *Rot; 
  float m_w; 
  float v12; 
  float v13; 
  float v14; 
  bfx::Quaternion result; 
  vec4_t quat; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 492, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 493, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  if ( localPos == outWorldPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 494, ASSERT_TYPE_ASSERT, "( &localPos != &outWorldPos )", (const char *)&queryFormat, "&localPos != &outWorldPos") )
    __debugbreak();
  if ( pSpace == Nav_GetDefaultSpace() )
  {
    outWorldPos->v[0] = localPos->v[0];
    outWorldPos->v[1] = localPos->v[1];
    outWorldPos->v[2] = localPos->v[2];
  }
  else
  {
    Pos = bfx::SpaceHandle::GetPos(&pSpace->hSpace, (bfx::Vector3 *)&result);
    m_x = Pos->m_x;
    m_y = Pos->m_y;
    m_z = Pos->m_z;
    Rot = bfx::SpaceHandle::GetRot(&pSpace->hSpace, &result);
    m_w = Rot->m_w;
    v12 = Rot->m_z;
    v13 = Rot->m_y;
    quat.v[0] = Rot->m_x;
    quat.v[1] = v13;
    quat.v[2] = v12;
    quat.v[3] = m_w;
    QuatTransform(&quat, localPos, outWorldPos);
    v14 = m_y + outWorldPos->v[1];
    outWorldPos->v[0] = m_x + outWorldPos->v[0];
    outWorldPos->v[2] = m_z + outWorldPos->v[2];
    outWorldPos->v[1] = v14;
  }
}

/*
==============
Nav_SpaceConvertLocalToWorld
==============
*/
void Nav_SpaceConvertLocalToWorld(nav_space_s *pSpace, const vec3_t *localPos, const vec4_t *localRot, vec3_t *outWorldPos, vec4_t *outWorldRot)
{
  bfx::Vector3 *Pos; 
  float m_x; 
  float m_y; 
  float m_z; 
  bfx::Quaternion *Rot; 
  float m_w; 
  float v15; 
  float v16; 
  float v17; 
  bfx::Quaternion result; 
  vec4_t quat; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 441, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 442, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  if ( localPos == outWorldPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 443, ASSERT_TYPE_ASSERT, "( &localPos != &outWorldPos )", (const char *)&queryFormat, "&localPos != &outWorldPos") )
    __debugbreak();
  if ( pSpace == Nav_GetDefaultSpace() )
  {
    outWorldPos->v[0] = localPos->v[0];
    outWorldPos->v[1] = localPos->v[1];
    outWorldPos->v[2] = localPos->v[2];
    *outWorldRot = *localRot;
  }
  else
  {
    Pos = bfx::SpaceHandle::GetPos(&pSpace->hSpace, (bfx::Vector3 *)&result);
    m_x = Pos->m_x;
    m_y = Pos->m_y;
    m_z = Pos->m_z;
    Rot = bfx::SpaceHandle::GetRot(&pSpace->hSpace, &result);
    m_w = Rot->m_w;
    v15 = Rot->m_z;
    v16 = Rot->m_y;
    quat.v[0] = Rot->m_x;
    quat.v[1] = v16;
    quat.v[2] = v15;
    quat.v[3] = m_w;
    QuatTransform(&quat, localPos, outWorldPos);
    v17 = m_y + outWorldPos->v[1];
    outWorldPos->v[0] = m_x + outWorldPos->v[0];
    outWorldPos->v[2] = m_z + outWorldPos->v[2];
    outWorldPos->v[1] = v17;
    QuatMultiply(&quat, localRot, outWorldRot);
  }
}

/*
==============
Nav_SpaceConvertWorldToLocal
==============
*/
void Nav_SpaceConvertWorldToLocal(nav_space_s *pSpace, const vec3_t *worldPos, vec3_t *outLocalPos)
{
  bfx::Vector3 *Pos; 
  float m_x; 
  float m_y; 
  float m_z; 
  bfx::Quaternion *Rot; 
  float v11; 
  float m_w; 
  float v13; 
  float v14; 
  float v15; 
  bfx::Quaternion result; 
  vec3_t in; 
  vec4_t quat; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 467, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 468, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  if ( pSpace == Nav_GetDefaultSpace() )
  {
    outLocalPos->v[0] = worldPos->v[0];
    outLocalPos->v[1] = worldPos->v[1];
    outLocalPos->v[2] = worldPos->v[2];
  }
  else
  {
    Pos = bfx::SpaceHandle::GetPos(&pSpace->hSpace, (bfx::Vector3 *)&result);
    m_x = Pos->m_x;
    m_y = Pos->m_y;
    m_z = Pos->m_z;
    Rot = bfx::SpaceHandle::GetRot(&pSpace->hSpace, &result);
    v11 = Rot->m_z;
    m_w = Rot->m_w;
    LODWORD(v13) = LODWORD(Rot->m_y) ^ _xmm;
    LODWORD(quat.v[0]) = LODWORD(Rot->m_x) ^ _xmm;
    v14 = worldPos->v[1];
    quat.v[1] = v13;
    v15 = worldPos->v[0];
    LODWORD(quat.v[2]) = LODWORD(v11) ^ _xmm;
    in.v[0] = v15 - m_x;
    in.v[2] = worldPos->v[2] - m_z;
    quat.v[3] = m_w;
    in.v[1] = v14 - m_y;
    QuatTransform(&quat, &in, outLocalPos);
  }
}

/*
==============
Nav_SpaceConvertWorldToLocal
==============
*/
void Nav_SpaceConvertWorldToLocal(nav_space_s *pSpace, const vec3_t *worldPos, const vec4_t *worldRot, vec3_t *outLocalPos, vec4_t *outLocalRot)
{
  bfx::Vector3 *Pos; 
  float m_x; 
  float m_y; 
  float m_z; 
  bfx::Quaternion *Rot; 
  float v14; 
  float m_w; 
  float v16; 
  float v17; 
  float v18; 
  bfx::Quaternion result; 
  vec4_t quat; 
  vec3_t in; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 412, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 413, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  if ( worldRot == outLocalRot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 414, ASSERT_TYPE_ASSERT, "( &worldRot != &outLocalRot )", (const char *)&queryFormat, "&worldRot != &outLocalRot") )
    __debugbreak();
  if ( pSpace == Nav_GetDefaultSpace() )
  {
    outLocalPos->v[0] = worldPos->v[0];
    outLocalPos->v[1] = worldPos->v[1];
    outLocalPos->v[2] = worldPos->v[2];
    *outLocalRot = *worldRot;
  }
  else
  {
    Pos = bfx::SpaceHandle::GetPos(&pSpace->hSpace, (bfx::Vector3 *)&result);
    m_x = Pos->m_x;
    m_y = Pos->m_y;
    m_z = Pos->m_z;
    Rot = bfx::SpaceHandle::GetRot(&pSpace->hSpace, &result);
    v14 = Rot->m_z;
    m_w = Rot->m_w;
    LODWORD(v16) = LODWORD(Rot->m_y) ^ _xmm;
    LODWORD(quat.v[0]) = LODWORD(Rot->m_x) ^ _xmm;
    v17 = worldPos->v[1];
    quat.v[1] = v16;
    v18 = worldPos->v[0];
    LODWORD(quat.v[2]) = LODWORD(v14) ^ _xmm;
    in.v[0] = v18 - m_x;
    in.v[2] = worldPos->v[2] - m_z;
    quat.v[3] = m_w;
    in.v[1] = v17 - m_y;
    QuatTransform(&quat, &in, outLocalPos);
    QuatMultiply(worldRot, &quat, outLocalRot);
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
  gentity_s *v3; 
  __int64 v4; 
  __int64 v5; 
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
      LODWORD(v5) = 2048;
      LODWORD(v4) = pSpace->parentEntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[parentEntNum].r.isInUse != g_entityIsInUse[parentEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[parentEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 523, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pSpace->parentEntNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( pSpace->parentEntNum )") )
      __debugbreak();
    v3 = &g_entities[pSpace->parentEntNum];
    pos = (bfx::Vector3)v3->r.currentOrigin;
    AnglesToQuat(&v3->r.currentAngles, &quat);
    rot.m_x = quat.v[0];
    rot.m_y = quat.v[1];
    rot.m_z = quat.v[2];
    rot.m_w = quat.v[3];
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
  gentity_s *v6; 
  __int64 v7; 
  __int64 v8; 
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
          LODWORD(v8) = 2048;
          LODWORD(v7) = g_NavData.spaces[v1].parentEntNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
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
          LODWORD(v8) = 2048;
          LODWORD(v7) = v2->parentEntNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 518, ASSERT_TYPE_ASSERT, "(unsigned)( pSpace->parentEntNum ) < (unsigned)( ( 2048 ) )", "pSpace->parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        v5 = v2->parentEntNum;
        if ( (_DWORD)v5 != 2047 )
        {
          if ( (unsigned int)v5 >= 0x800 )
          {
            LODWORD(v8) = 2048;
            LODWORD(v7) = v2->parentEntNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 523, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pSpace->parentEntNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( pSpace->parentEntNum )") )
            __debugbreak();
          v6 = &g_entities[v2->parentEntNum];
          pos = (bfx::Vector3)v6->r.currentOrigin;
          AnglesToQuat(&v6->r.currentAngles, &quat);
          rot.m_x = quat.v[0];
          rot.m_y = quat.v[1];
          rot.m_z = quat.v[2];
          rot.m_w = quat.v[3];
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
  bfx::Vector3 *Pos; 
  float m_z; 
  float m_y; 
  bfx::Quaternion *Rot; 
  float m_w; 
  float v10; 
  float v11; 
  nav_resource_s *i; 
  nav_link_s *j; 
  nav_obstacle_s *k; 
  nav_repulsor_s *pNext; 
  nav_repulsor_s *m; 
  int p; 
  bfx::Quaternion result; 
  int v19[4]; 
  int v20[4]; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1042, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_space.cpp", 1043, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  v4 = SL_ConvertToString(pSpace->name);
  MemFile_WriteCString(memFile, v4);
  p = pSpace->parentEntNum;
  MemFile_WriteData(memFile, 4ui64, &p);
  Pos = bfx::SpaceHandle::GetPos(&pSpace->hSpace, (bfx::Vector3 *)&result);
  m_z = Pos->m_z;
  m_y = Pos->m_y;
  v19[0] = LODWORD(Pos->m_x);
  *(float *)&v19[1] = m_y;
  *(float *)&v19[2] = m_z;
  Rot = bfx::SpaceHandle::GetRot(&pSpace->hSpace, &result);
  m_w = Rot->m_w;
  v10 = Rot->m_z;
  v11 = Rot->m_y;
  v20[0] = LODWORD(Rot->m_x);
  *(float *)&v20[1] = v11;
  *(float *)&v20[2] = v10;
  *(float *)&v20[3] = m_w;
  MemFile_WriteData(memFile, 0xCui64, v19);
  MemFile_WriteData(memFile, 0x10ui64, v20);
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

