/*
==============
Nav_ReadPendingObstacles
==============
*/

void __fastcall Nav_ReadPendingObstacles(MemoryFile *memFile)
{
  ?Nav_ReadPendingObstacles@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Nav_CreateModifiers
==============
*/

void Nav_CreateModifiers(void)
{
  ?Nav_CreateModifiers@@YAXXZ();
}

/*
==============
Nav_DestroyAllObstacles
==============
*/

void Nav_DestroyAllObstacles(void)
{
  ?Nav_DestroyAllObstacles@@YAXXZ();
}

/*
==============
Nav_CreateObstacleByShape
==============
*/

unsigned int __fastcall Nav_CreateObstacleByShape(nav_space_s *pSpace, const vec3_t *pos, int numSides, float distFromCenter, float halfHeight, float penalty, unsigned int layerFlags, unsigned int blockageFlags, bool bNow, unsigned int userDataFlags)
{
  return ?Nav_CreateObstacleByShape@@YAIPEAUnav_space_s@@AEBTvec3_t@@HMMMII_NI@Z(pSpace, pos, numSides, distFromCenter, halfHeight, penalty, layerFlags, blockageFlags, bNow, userDataFlags);
}

/*
==============
Nav_ReadAndCreateObstacle
==============
*/

void __fastcall Nav_ReadAndCreateObstacle(MemoryFile *memFile, nav_space_s *pSpace)
{
  ?Nav_ReadAndCreateObstacle@@YAXPEAUMemoryFile@@PEAUnav_space_s@@@Z(memFile, pSpace);
}

/*
==============
Nav_DestroyObstacleByGlass
==============
*/

void __fastcall Nav_DestroyObstacleByGlass(unsigned int glassPieceIndex)
{
  ?Nav_DestroyObstacleByGlass@@YAXI@Z(glassPieceIndex);
}

/*
==============
Nav_CreateObstacleByBounds
==============
*/

unsigned int __fastcall Nav_CreateObstacleByBounds(nav_space_s *pSpace, const Bounds *bounds, const vec3_t *angles, float penalty, unsigned int layerFlags, unsigned int blockageFlags)
{
  return ?Nav_CreateObstacleByBounds@@YAIPEAUnav_space_s@@AEBUBounds@@AEBTvec3_t@@MII@Z(pSpace, bounds, angles, penalty, layerFlags, blockageFlags);
}

/*
==============
Nav_DestroyObstacleByID
==============
*/

void __fastcall Nav_DestroyObstacleByID(unsigned int id)
{
  ?Nav_DestroyObstacleByID@@YAXI@Z(id);
}

/*
==============
Nav_CreateObstacleNow
==============
*/

bool __fastcall Nav_CreateObstacleNow(nav_space_s *pSpace, const vec3_t *pos, const vec4_t *qRot, const bfx::BoxExtents *extents, unsigned int id, bool bGlass, const bfx::ObstacleDat *obsData)
{
  return ?Nav_CreateObstacleNow@@YA_NPEAUnav_space_s@@AEBTvec3_t@@AEBTvec4_t@@VBoxExtents@bfx@@I_NVObstacleDat@5@@Z(pSpace, pos, qRot, extents, id, bGlass, obsData);
}

/*
==============
Nav_GetObstacleBlockageFlagsFromTeamFlags
==============
*/

unsigned int __fastcall Nav_GetObstacleBlockageFlagsFromTeamFlags(const bitarray<224> *teamflags)
{
  return ?Nav_GetObstacleBlockageFlagsFromTeamFlags@@YAIAEBV?$bitarray@$0OA@@@@Z(teamflags);
}

/*
==============
Nav_GetObstacleByID
==============
*/

nav_obstacle_s *__fastcall Nav_GetObstacleByID(unsigned int id)
{
  return ?Nav_GetObstacleByID@@YAPEAUnav_obstacle_s@@I@Z(id);
}

/*
==============
Nav_AddExistingObstacleToSpace
==============
*/

void __fastcall Nav_AddExistingObstacleToSpace(nav_space_s *pSpace, nav_obstacle_s *pObstacle)
{
  ?Nav_AddExistingObstacleToSpace@@YAXPEAUnav_space_s@@PEAUnav_obstacle_s@@@Z(pSpace, pObstacle);
}

/*
==============
Nav_DumpObstaclesInfo
==============
*/

void Nav_DumpObstaclesInfo(void)
{
  ?Nav_DumpObstaclesInfo@@YAXXZ();
}

/*
==============
Nav_WritePendingObstacles
==============
*/

void __fastcall Nav_WritePendingObstacles(MemoryFile *memFile)
{
  ?Nav_WritePendingObstacles@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Nav_CreateObstacle
==============
*/

bool __fastcall Nav_CreateObstacle(nav_space_s *pSpace, const vec3_t *pos, const vec4_t *qRot, const bfx::BoxExtents *extents, unsigned int id, bool bGlass, const bfx::ObstacleDat *obsData)
{
  return ?Nav_CreateObstacle@@YA_NPEAUnav_space_s@@AEBTvec3_t@@AEBTvec4_t@@VBoxExtents@bfx@@I_NVObstacleDat@5@@Z(pSpace, pos, qRot, extents, id, bGlass, obsData);
}

/*
==============
Nav_CreateObstacleNow
==============
*/

bool __fastcall Nav_CreateObstacleNow(nav_space_s *pSpace, const vec3_t *pos, const vec4_t *qRot, const nav_boundary_plane_s *pPlanes, int numPlanes, unsigned int id, bool bGlass, const bfx::ObstacleDat *obsData)
{
  return ?Nav_CreateObstacleNow@@YA_NPEAUnav_space_s@@AEBTvec3_t@@AEBTvec4_t@@PEBUnav_boundary_plane_s@@HI_NVObstacleDat@bfx@@@Z(pSpace, pos, qRot, pPlanes, numPlanes, id, bGlass, obsData);
}

/*
==============
Nav_CreateModifierByName
==============
*/

bool __fastcall Nav_CreateModifierByName(const scr_string_t key, const scr_string_t name, int *outModifierID)
{
  return ?Nav_CreateModifierByName@@YA_NW4scr_string_t@@0AEAH@Z(key, name, outModifierID);
}

/*
==============
Nav_SetupObstacleByBoundaries
==============
*/

nav_obstacle_s *__fastcall Nav_SetupObstacleByBoundaries(nav_space_s *pSpace, const vec3_t *pos, const vec4_t *qRot, const nav_boundary_plane_s *pPlanes, int numPlanes, unsigned int id, bool bGlass, const bfx::ObstacleDat *obsData)
{
  return ?Nav_SetupObstacleByBoundaries@@YAPEAUnav_obstacle_s@@PEAUnav_space_s@@AEBTvec3_t@@AEBTvec4_t@@PEBUnav_boundary_plane_s@@HI_NVObstacleDat@bfx@@@Z(pSpace, pos, qRot, pPlanes, numPlanes, id, bGlass, obsData);
}

/*
==============
Nav_GetNumObstacleBounds
==============
*/

int __fastcall Nav_GetNumObstacleBounds()
{
  return ?Nav_GetNumObstacleBounds@@YAHXZ();
}

/*
==============
Nav_BadObstaclesCheck
==============
*/

void __fastcall Nav_BadObstaclesCheck(bool bFirstCheck)
{
  ?Nav_BadObstaclesCheck@@YAX_N@Z(bFirstCheck);
}

/*
==============
Nav_ClearObstaclesFromSpace
==============
*/

void __fastcall Nav_ClearObstaclesFromSpace(nav_space_s *pSpace, bool bDeleteAll, nav_space_s *pNewSpace)
{
  ?Nav_ClearObstaclesFromSpace@@YAXPEAUnav_space_s@@_N0@Z(pSpace, bDeleteAll, pNewSpace);
}

/*
==============
Nav_GetObstacleBounds
==============
*/

nav_obstacle_bounds_s *__fastcall Nav_GetObstacleBounds(int idx)
{
  return ?Nav_GetObstacleBounds@@YAPEAUnav_obstacle_bounds_s@@H@Z(idx);
}

/*
==============
Nav_TransferObstaclesToSpace
==============
*/

void __fastcall Nav_TransferObstaclesToSpace(nav_space_s *pNewSpace)
{
  ?Nav_TransferObstaclesToSpace@@YAXPEAUnav_space_s@@@Z(pNewSpace);
}

/*
==============
Nav_DestroyObstacleByEnt
==============
*/

void __fastcall Nav_DestroyObstacleByEnt(const gentity_s *pEnt)
{
  ?Nav_DestroyObstacleByEnt@@YAXPEBUgentity_s@@@Z(pEnt);
}

/*
==============
Nav_CreateObstacle
==============
*/

bool __fastcall Nav_CreateObstacle(nav_space_s *pSpace, const vec3_t *pos, const vec4_t *qRot, const nav_boundary_plane_s *pPlanes, int numPlanes, unsigned int id, bool bGlass, const bfx::ObstacleDat *obsData)
{
  return ?Nav_CreateObstacle@@YA_NPEAUnav_space_s@@AEBTvec3_t@@AEBTvec4_t@@PEBUnav_boundary_plane_s@@HI_NVObstacleDat@bfx@@@Z(pSpace, pos, qRot, pPlanes, numPlanes, id, bGlass, obsData);
}

/*
==============
Nav_CreateObstacleByEnt
==============
*/

void __fastcall Nav_CreateObstacleByEnt(nav_space_s *pSpace, const gentity_s *pEnt, float penalty, unsigned int layerFlags, unsigned int blockageFlags, bool bNow, unsigned int userDataFlags)
{
  ?Nav_CreateObstacleByEnt@@YAXPEAUnav_space_s@@PEBUgentity_s@@MII_NI@Z(pSpace, pEnt, penalty, layerFlags, blockageFlags, bNow, userDataFlags);
}

/*
==============
Nav_CreateGlassObstacles
==============
*/

void Nav_CreateGlassObstacles(void)
{
  ?Nav_CreateGlassObstacles@@YAXXZ();
}

/*
==============
Nav_ReadObstacle
==============
*/

nav_obstacle_s *__fastcall Nav_ReadObstacle(MemoryFile *memFile, nav_space_s *pSpace)
{
  return ?Nav_ReadObstacle@@YAPEAUnav_obstacle_s@@PEAUMemoryFile@@PEAUnav_space_s@@@Z(memFile, pSpace);
}

/*
==============
Nav_WriteObstacle
==============
*/

void __fastcall Nav_WriteObstacle(MemoryFile *memFile, nav_obstacle_s *pObstacle)
{
  ?Nav_WriteObstacle@@YAXPEAUMemoryFile@@PEAUnav_obstacle_s@@@Z(memFile, pObstacle);
}

/*
==============
Nav_ProcessPendingObstacleCreation
==============
*/

void Nav_ProcessPendingObstacleCreation(void)
{
  ?Nav_ProcessPendingObstacleCreation@@YAXXZ();
}

/*
==============
Nav_CreateObstacleByGlass
==============
*/

void __fastcall Nav_CreateObstacleByGlass(nav_space_s *pSpace, unsigned int navGlassPieceIndex)
{
  ?Nav_CreateObstacleByGlass@@YAXPEAUnav_space_s@@I@Z(pSpace, navGlassPieceIndex);
}

/*
==============
Nav_GetUniqueObstacleID
==============
*/

unsigned int __fastcall Nav_GetUniqueObstacleID()
{
  return ?Nav_GetUniqueObstacleID@@YAIXZ();
}

/*
==============
Nav_AddExistingObstacleToSpace
==============
*/
void Nav_AddExistingObstacleToSpace(nav_space_s *pSpace, nav_obstacle_s *pObstacle)
{
  __int64 parentEntNum; 
  bfx::Vector3 result; 
  float v1[4]; 

  if ( !pObstacle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 847, ASSERT_TYPE_ASSERT, "( pObstacle )", (const char *)&queryFormat, "pObstacle") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 848, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 849, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  if ( pSpace != pObstacle->pSpace )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Nav_AddExistingObstacleToSpace");
    bfx::DestroyObstacle(&pObstacle->hObstacle);
    if ( pSpace != Nav_GetDefaultSpace() )
    {
      _RAX = bfx::SpaceHandle::GetPos(&pSpace->hSpace, &result);
      __asm
      {
        vmovss  xmm2, dword ptr [rax+8]
        vmovss  xmm1, dword ptr [rax+4]
        vmovss  xmm0, dword ptr [rax]
      }
      parentEntNum = pSpace->parentEntNum;
      __asm
      {
        vmovss  [rsp+68h+var_20], xmm2
        vmovss  xmm2, cs:__real@3a83126f; epsilon
        vmovss  [rsp+68h+v1], xmm0
        vmovss  [rsp+68h+var_24], xmm1
      }
      VecNCompareCustomEpsilon(g_entities[parentEntNum].r.currentOrigin.v, v1, *(float *)&_XMM2, 3);
    }
    if ( (pObstacle->pNext || pObstacle->pPrev) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 870, ASSERT_TYPE_ASSERT, "(!pObstacle->pNext && !pObstacle->pPrev)", "%s\n\tobstacle has not yet been removed from previous space.", "!pObstacle->pNext && !pObstacle->pPrev") )
      __debugbreak();
    pObstacle->pSpace = pSpace;
    Nav_CreateObstacleHandle(pObstacle);
    Nav_AddObstacleToSpace(pSpace, pObstacle);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
Nav_BadObstaclesCheck
==============
*/
void Nav_BadObstaclesCheck(bool bFirstCheck)
{
  char v9; 
  nav_obstacle_s *i; 
  __int64 id; 
  __int64 v13; 
  char v14; 
  int v16; 
  unsigned __int8 *v17; 
  const char *text; 
  nav_obstacle_s *FirstObstacle; 
  __int64 v24; 
  gentity_s *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  vec3_t outWorldPos; 
  vec4_t outWorldRot; 
  char v38[2048]; 
  char v40; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovss  xmm6, cs:__real@43a50000
    vmovss  xmm8, cs:__real@3fa00000
    vmovss  xmm9, cs:__real@42c80000
  }
  v9 = 0;
  if ( g_NavData.obstaclePoolInfo.count > 384 )
    goto LABEL_13;
  __asm { vmovaps xmmword ptr [r11-28h], xmm7 }
  memset_0(v38, 0, sizeof(v38));
  for ( i = Nav_GetFirstObstacle(); i; i = Nav_GetNextObstacle(i) )
  {
    id = i->id;
    if ( (unsigned int)id < 0x800 && !i->m_bGlass )
    {
      v13 = (unsigned int)id;
      v14 = v38[id];
      if ( v14 != -1 )
        v38[v13] = v14 + 1;
    }
  }
  __asm { vmovss  xmm7, cs:__real@41600000 }
  v16 = 0;
  v17 = (unsigned __int8 *)v38;
  do
  {
    if ( *v17 > 3u )
    {
      v9 = 1;
      text = j_va("%d obstacles for ent %d", *v17, (unsigned int)v16);
      __asm
      {
        vmovaps xmm3, xmm8; scale
        vmovaps xmm1, xmm6; y
        vmovaps xmm0, xmm9; x
      }
      G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorRed, *(float *)&_XMM3, text);
      __asm { vaddss  xmm6, xmm6, xmm7 }
    }
    ++v16;
    ++v17;
  }
  while ( v16 < 2048 );
  __asm { vmovaps xmm7, [rsp+8A8h+var_28] }
  if ( v9 )
  {
LABEL_13:
    if ( bFirstCheck )
    {
      FirstObstacle = Nav_GetFirstObstacle();
      Com_Printf(18, "\nDumping Obstacle List...\n");
      for ( ; FirstObstacle; FirstObstacle = Nav_GetNextObstacle(FirstObstacle) )
      {
        v24 = FirstObstacle->id;
        if ( (unsigned int)v24 >= 0x800 )
        {
          Nav_SpaceConvertLocalToWorld(FirstObstacle->pSpace, &FirstObstacle->pos, &FirstObstacle->qRot, &outWorldPos, &outWorldRot);
          v28 = vtos(&outWorldPos);
          Com_Printf(18, "Obstacle with ID %d at pos %s\n", FirstObstacle->id, v28);
        }
        else
        {
          v25 = &g_entities[v24];
          v26 = SL_ConvertToString(v25->targetname);
          v27 = vtos(&v25->r.currentOrigin);
          Com_Printf(18, "Obstacle for Ent %d at pos %s with targetname %s \n", FirstObstacle->id, v27, v26);
        }
      }
      Com_Printf(18, "End Obstacle List...\n");
    }
    __asm
    {
      vmovaps xmm3, xmm8; scale
      vmovaps xmm1, xmm6; y
      vmovaps xmm0, xmm9; x
    }
    G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorRed, *(float *)&_XMM3, "Check console for obstacle dump.");
  }
  _R11 = &v40;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
Nav_ClearObstaclesFromSpace
==============
*/
void Nav_ClearObstaclesFromSpace(nav_space_s *pSpace, bool bDeleteAll, nav_space_s *pNewSpace)
{
  int MaxNumObstacles; 
  nav_obstacle_s *pNext; 
  int v8; 
  nav_space_s *MostLikelySpace; 
  int i; 
  nav_obstacle_s *v11; 
  nav_space_s *v12; 
  nav_space_s *v13; 
  int v14; 
  bfx::ObstacleDat result; 
  vec3_t outWorldPos; 
  vec4_t outWorldRot; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 975, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  MaxNumObstacles = Nav_GetMaxNumObstacles();
  pNext = pSpace->obstacleList.pNext;
  v14 = MaxNumObstacles;
  v8 = MaxNumObstacles;
  if ( pNext != &pSpace->obstacleList )
  {
    do
    {
      if ( bDeleteAll || pNext->m_bDeleteMe )
      {
        Nav_DestroyObstacle(pNext, 0);
      }
      else
      {
        if ( pNewSpace )
        {
          MostLikelySpace = pNewSpace;
        }
        else
        {
          Nav_SpaceConvertLocalToWorld(pNext->pSpace, &pNext->pos, &pNext->qRot, &outWorldPos, &outWorldRot);
          bfx::ObstacleHandle::GetObstacleDat(&pNext->hObstacle, &result);
          while ( (result.m_layerMask & 1) == 0 )
            ;
          MostLikelySpace = Nav_FindMostLikelySpace(&outWorldPos, NAV_LAYER_HUMAN, pNext->pSpace);
        }
        if ( !MostLikelySpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 998, ASSERT_TYPE_ASSERT, "( pSpaceToAddTo )", (const char *)&queryFormat, "pSpaceToAddTo") )
          __debugbreak();
        Nav_MoveObstacleToSpace(pNext, MostLikelySpace, 0);
      }
      pNext = pSpace->obstacleList.pNext;
    }
    while ( pNext != &pSpace->obstacleList );
    v8 = v14;
  }
  for ( i = g_NavData.curPendingObstacleIdx; i != g_NavData.nextFreePendingObstacleIdx; i = (i + 1) % v8 )
  {
    v11 = g_NavData.pendingObstacles[i];
    if ( v11 )
    {
      v12 = v11->pSpace;
      if ( v12 == pSpace )
      {
        if ( v11->m_bDeleteMe )
        {
          Nav_DestroyObstacle(g_NavData.pendingObstacles[i], 0);
        }
        else
        {
          if ( pNewSpace )
          {
            v13 = pNewSpace;
          }
          else
          {
            Nav_SpaceConvertLocalToWorld(v12, &v11->pos, &v11->qRot, &outWorldPos, &outWorldRot);
            bfx::ObstacleHandle::GetObstacleDat(&v11->hObstacle, &result);
            while ( (result.m_layerMask & 1) == 0 )
              ;
            v13 = Nav_FindMostLikelySpace(&outWorldPos, NAV_LAYER_HUMAN, v11->pSpace);
          }
          if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1028, ASSERT_TYPE_ASSERT, "( pSpaceToAddTo )", (const char *)&queryFormat, "pSpaceToAddTo") )
            __debugbreak();
          Nav_MoveObstacleToSpace(v11, v13, 0);
        }
      }
    }
  }
}

/*
==============
Nav_CreateGlassObstacles
==============
*/
void Nav_CreateGlassObstacles()
{
  int v2; 
  nav_glass_bounds_s **glassBounds; 
  nav_glass_bounds_s *v5; 
  nav_space_s *MostLikelySpace; 
  unsigned int m_GlassPieceIndex; 
  int v8; 
  nav_glass_bounds_s **v9; 
  nav_glass_bounds_s *v10; 
  const vec3_t *p_m_Pos; 
  int m_NumBoundaries; 
  const nav_boundary_plane_s *m_Boundaries; 
  __int64 v16; 
  __m256i v17; 
  bfx::ObstacleDat v18; 
  void *retaddr; 

  _RAX = &retaddr;
  v2 = 0;
  if ( g_NavData.numGlassBounds > 0 )
  {
    __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
    glassBounds = g_NavData.glassBounds;
    __asm { vmovss  xmm6, cs:__real@41700000 }
    do
    {
      v5 = *glassBounds;
      if ( G_Glass_IsPieceSolid((*glassBounds)->m_GlassPieceIndex - 1) )
      {
        MostLikelySpace = Nav_FindMostLikelySpace(&v5->m_Pos, NAV_LAYER_HUMAN, NULL);
        if ( !MostLikelySpace )
          MostLikelySpace = Nav_GetDefaultSpace();
        m_GlassPieceIndex = v5->m_GlassPieceIndex;
        if ( !MostLikelySpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 651, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
          __debugbreak();
        if ( !G_Glass_IsIndexValid(m_GlassPieceIndex - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 652, ASSERT_TYPE_ASSERT, "( G_Glass_IsIndexValid( navGlassPieceIndex - 1 ) )", (const char *)&queryFormat, "G_Glass_IsIndexValid( navGlassPieceIndex - 1 )") )
          __debugbreak();
        v8 = 0;
        if ( g_NavData.numGlassBounds <= 0 )
        {
LABEL_16:
          LODWORD(v16) = m_GlassPieceIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 674, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find glass bounds for glass %d.  Has nav-blocking func_glass changed without rebuilding navmesh?", v16) )
            __debugbreak();
        }
        else
        {
          v9 = g_NavData.glassBounds;
          while ( 1 )
          {
            v10 = *v9;
            if ( (*v9)->m_GlassPieceIndex == m_GlassPieceIndex )
              break;
            ++v8;
            ++v9;
            if ( v8 >= g_NavData.numGlassBounds )
              goto LABEL_16;
          }
          *(_OWORD *)&v17.m256i_u64[2] = 0ui64;
          p_m_Pos = &v10->m_Pos;
          m_NumBoundaries = v10->m_NumBoundaries;
          m_Boundaries = v10->m_Boundaries;
          __asm { vmovss  dword ptr [rsp+0B8h+var_78+8], xmm6 }
          v17.m256i_i64[0] = 0xFFFFFFFFi64;
          v17.m256i_i32[3] = -8065;
          __asm
          {
            vmovups ymm0, [rsp+0B8h+var_78]
            vmovups [rsp+0B8h+var_58], ymm0
          }
          Nav_CreateObstacleNow(MostLikelySpace, p_m_Pos, &quat_identity, m_Boundaries, m_NumBoundaries, m_GlassPieceIndex, 1, &v18);
        }
      }
      ++v2;
      ++glassBounds;
    }
    while ( v2 < g_NavData.numGlassBounds );
    __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
  }
}

/*
==============
Nav_CreateModifierByName
==============
*/
_BOOL8 Nav_CreateModifierByName(const scr_string_t key, const scr_string_t name, int *outModifierID)
{
  int numModifiers; 
  int v6; 
  int *v7; 
  signed int v10; 
  nav_modifier_s **modifiers; 
  scr_string_t m_Target; 
  unsigned int m_LayerFlags; 
  AINavLayer v17; 
  unsigned int v18; 
  nav_space_s *MostLikelySpace; 
  nav_space_s *v21; 
  const nav_boundary_plane_s *m_Boundaries; 
  int fmt; 
  bfx::ObstacleDat v30; 

  numModifiers = g_NavData.numModifiers;
  v6 = 0;
  v7 = outModifierID;
  v10 = -1;
  if ( g_NavData.numModifiers > 0 )
  {
    modifiers = g_NavData.modifiers;
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovss  xmm6, cs:__real@41700000
      vmovaps [rsp+0A8h+var_48], xmm7
      vmovss  xmm7, cs:__real@3f800000
    }
    do
    {
      _RDI = *modifiers;
      if ( key == scr_const.target )
      {
        m_Target = _RDI->m_Target;
      }
      else if ( key == scr_const.targetname )
      {
        m_Target = _RDI->m_TargetName;
      }
      else if ( key == scr_const.script_noteworthy )
      {
        m_Target = _RDI->m_ScriptNoteworthy;
      }
      else
      {
        if ( key != scr_const.script_linkname )
          break;
        m_Target = _RDI->m_ScriptLinkName;
      }
      if ( m_Target == name && !_RDI->m_bActiveOnLoad )
      {
        v17 = NAV_LAYER_HUMAN;
        v18 = 0;
        while ( 1 )
        {
          m_LayerFlags = _RDI->m_LayerFlags;
          if ( _bittest((const int *)&m_LayerFlags, v18) )
            break;
          if ( (int)++v18 >= 3 )
            goto LABEL_18;
        }
        v17 = v18;
LABEL_18:
        MostLikelySpace = Nav_FindMostLikelySpace(&_RDI->m_Pos, v17, NULL);
        __asm { vmovss  xmm0, dword ptr [rdi+30h]; val }
        v21 = MostLikelySpace;
        v30.m_obstacleName = NULL;
        v30.m_layerMask = _RDI->m_LayerFlags;
        __asm
        {
          vmovaps xmm2, xmm6; max
          vmovaps xmm1, xmm7; min
        }
        v30.m_userData = _RDI->m_UserFlags;
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        v30.m_obstacleBehavior = OBSTACLE_BEHAVIOR_NOEFFECT_PENALTY;
        v30.m_obstacleBlockageFlags = -8065;
        __asm { vmovss  dword ptr [rsp+0A8h+var_68+8], xmm0 }
        if ( v10 < 0 )
        {
          v10 = s_NavObstacleIDGen + 1;
          s_NavObstacleIDGen = v10;
          if ( (unsigned int)v10 >= 0xFFFFFFFE )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 36, ASSERT_TYPE_ASSERT, "( s_NavObstacleIDGen < 0xffffffff - 1 )", (const char *)&queryFormat, "s_NavObstacleIDGen < UINT_MAX - 1") )
              __debugbreak();
            v10 = s_NavObstacleIDGen;
          }
        }
        __asm { vmovups ymm0, [rsp+0A8h+var_68] }
        m_Boundaries = _RDI->m_Boundaries;
        fmt = _RDI->m_NumBoundaries;
        __asm { vmovups [rsp+0A8h+var_68], ymm0 }
        Nav_CreateObstacle(v21, &_RDI->m_Pos, &quat_identity, m_Boundaries, fmt, v10, 0, &v30);
        numModifiers = g_NavData.numModifiers;
      }
      ++v6;
      ++modifiers;
    }
    while ( v6 < numModifiers );
    v7 = outModifierID;
    __asm
    {
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm6, [rsp+0A8h+var_38]
    }
  }
  *v7 = v10;
  return v10 >= 0;
}

/*
==============
Nav_CreateModifiers
==============
*/
void Nav_CreateModifiers()
{
  int numModifiers; 
  int v4; 
  nav_modifier_s **modifiers; 
  unsigned int m_LayerFlags; 
  AINavLayer v10; 
  unsigned int v11; 
  nav_space_s *MostLikelySpace; 
  unsigned int v16; 
  const nav_boundary_plane_s *m_Boundaries; 
  int fmt; 
  __m256i v22; 
  bfx::ObstacleDat v23; 
  void *retaddr; 

  _R11 = &retaddr;
  numModifiers = g_NavData.numModifiers;
  v4 = 0;
  if ( g_NavData.numModifiers > 0 )
  {
    modifiers = g_NavData.modifiers;
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovss  xmm6, cs:__real@41700000
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovss  xmm7, cs:__real@3f800000
    }
    do
    {
      _RBX = *modifiers;
      if ( (*modifiers)->m_bActiveOnLoad )
      {
        v10 = NAV_LAYER_HUMAN;
        v11 = 0;
        while ( 1 )
        {
          m_LayerFlags = _RBX->m_LayerFlags;
          if ( _bittest((const int *)&m_LayerFlags, v11) )
            break;
          if ( (int)++v11 >= 3 )
            goto LABEL_9;
        }
        v10 = v11;
LABEL_9:
        MostLikelySpace = Nav_FindMostLikelySpace(&_RBX->m_Pos, v10, NULL);
        __asm { vmovss  xmm0, dword ptr [rbx+30h]; val }
        v22.m256i_i32[0] = _RBX->m_LayerFlags;
        __asm
        {
          vmovaps xmm2, xmm6; max
          vmovaps xmm1, xmm7; min
        }
        *(_OWORD *)&v22.m256i_u64[2] = _RBX->m_UserFlags;
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        v16 = s_NavObstacleIDGen + 1;
        v22.m256i_i32[1] = 1;
        v22.m256i_i32[3] = -8065;
        s_NavObstacleIDGen = v16;
        __asm { vmovss  dword ptr [rsp+0C8h+var_88+8], xmm0 }
        if ( v16 >= 0xFFFFFFFE )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 36, ASSERT_TYPE_ASSERT, "( s_NavObstacleIDGen < 0xffffffff - 1 )", (const char *)&queryFormat, "s_NavObstacleIDGen < UINT_MAX - 1") )
            __debugbreak();
          v16 = s_NavObstacleIDGen;
        }
        __asm { vmovups ymm0, [rsp+0C8h+var_88] }
        m_Boundaries = _RBX->m_Boundaries;
        fmt = _RBX->m_NumBoundaries;
        __asm { vmovups [rsp+0C8h+var_68], ymm0 }
        Nav_CreateObstacleNow(MostLikelySpace, &_RBX->m_Pos, &quat_identity, m_Boundaries, fmt, v16, 0, &v23);
        numModifiers = g_NavData.numModifiers;
      }
      ++v4;
      ++modifiers;
    }
    while ( v4 < numModifiers );
    __asm
    {
      vmovaps xmm7, [rsp+0C8h+var_48]
      vmovaps xmm6, [rsp+0C8h+var_38]
    }
  }
}

/*
==============
Nav_CreateObstacle
==============
*/
bool Nav_CreateObstacle(nav_space_s *pSpace, const vec3_t *pos, const vec4_t *qRot, const nav_boundary_plane_s *pPlanes, int numPlanes, unsigned int id, bool bGlass, const bfx::ObstacleDat *obsData)
{
  nav_obstacle_s *v14; 
  bfx::ObstacleDat v16; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 253, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 254, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  _RAX = obsData;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+68h+var_28], ymm0
  }
  v14 = Nav_SetupObstacleByBoundaries(pSpace, pos, qRot, pPlanes, numPlanes, id, bGlass, &v16);
  if ( v14 )
  {
    Nav_QueueObstacleCreation(v14);
    LOBYTE(v14) = 1;
  }
  return (char)v14;
}

/*
==============
Nav_CreateObstacle
==============
*/
bool Nav_CreateObstacle(nav_space_s *pSpace, const vec3_t *pos, const vec4_t *qRot, const bfx::BoxExtents *extents, unsigned int id, bool bGlass, const bfx::ObstacleDat *obsData)
{
  nav_obstacle_s *v14; 
  bfx::BoxExtents v16; 
  bfx::ObstacleDat v17; 

  _RDI = extents;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 165, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 166, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  _RAX = obsData;
  __asm
  {
    vmovsd  xmm1, qword ptr [rdi]
    vmovups ymm0, ymmword ptr [rax]
  }
  v16.m_height = _RDI->m_height;
  __asm
  {
    vmovups [rsp+78h+var_28], ymm0
    vmovsd  [rsp+78h+var_38], xmm1
  }
  v14 = Nav_SetupObstacleByExtents(pSpace, pos, qRot, &v16, id, bGlass, &v17);
  if ( v14 )
  {
    Nav_QueueObstacleCreation(v14);
    LOBYTE(v14) = 1;
  }
  return (char)v14;
}

/*
==============
Nav_CreateObstacleByBounds
==============
*/

__int64 __fastcall Nav_CreateObstacleByBounds(nav_space_s *pSpace, const Bounds *bounds, const vec3_t *angles, double penalty, unsigned int layerFlags, unsigned int blockageFlags)
{
  unsigned int v19; 
  __int64 result; 
  __m256i v29; 
  vec4_t quat; 
  char v31; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmm6, xmm3
  }
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 519, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@40000000
    vmulss  xmm7, xmm2, dword ptr [rbp+0Ch]
    vmulss  xmm8, xmm2, dword ptr [rbp+10h]
    vmulss  xmm9, xmm2, dword ptr [rbp+14h]
  }
  v29.m256i_i32[0] = layerFlags;
  v29.m256i_i32[3] = blockageFlags;
  *(_OWORD *)&v29.m256i_u64[2] = 0ui64;
  v29.m256i_i32[1] = (blockageFlags & 0x2000) != 0 ? 3 : 0;
  __asm { vmovss  dword ptr [rsp+0D8h+var_A8+8], xmm6 }
  AnglesToQuat(angles, &quat);
  v19 = s_NavObstacleIDGen + 1;
  s_NavObstacleIDGen = v19;
  if ( v19 >= 0xFFFFFFFE )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 36, ASSERT_TYPE_ASSERT, "( s_NavObstacleIDGen < 0xffffffff - 1 )", (const char *)&queryFormat, "s_NavObstacleIDGen < UINT_MAX - 1") )
      __debugbreak();
    v19 = s_NavObstacleIDGen;
  }
  if ( v19 <= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 535, ASSERT_TYPE_ASSERT, "( id > ( 2048 ) )", (const char *)&queryFormat, "id > MAX_GENTITIES") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 165, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 166, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 94, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 95, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  _RAX = Nav_AllocObstacle();
  _RBX = _RAX;
  if ( _RAX )
  {
    __asm { vmovups ymm0, [rsp+0D8h+var_A8] }
    _RAX->id = v19;
    __asm { vmovups ymmword ptr [rax+38h], ymm0 }
    Nav_SpaceConvertWorldToLocal(pSpace, &bounds->midPoint, &quat, &_RAX->pos, &_RAX->qRot);
    __asm
    {
      vmovss  dword ptr [rbx+58h], xmm7
      vmovss  dword ptr [rbx+5Ch], xmm8
      vmovss  dword ptr [rbx+60h], xmm9
    }
    _RBX->m_NumBoundaryPlanes = 0;
    *(_DWORD *)&_RBX->m_bUsesExtents = 16777217;
    _RBX->pSpace = pSpace;
    Nav_QueueObstacleCreation(_RBX);
  }
  result = v19;
  _R11 = &v31;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
Nav_CreateObstacleByEnt
==============
*/

void __fastcall Nav_CreateObstacleByEnt(nav_space_s *pSpace, const gentity_s *pEnt, double penalty, unsigned int layerFlags, unsigned int blockageFlags, bool bNow, unsigned int userDataFlags)
{
  __int64 v12; 
  nav_space_s *v14; 
  int v16; 
  bool v17; 
  nav_obstacle_s *FirstObstacle; 
  __int64 v19; 
  nav_obstacle_s *v20; 
  nav_space_s *v21; 
  __int64 v22; 
  nav_space_s *v23; 
  unsigned int v24; 
  int v25; 
  __int64 brushModel; 
  unsigned __int16 navObstacleIdx; 
  int numObstacleBounds; 
  nav_obstacle_bounds_s *v29; 
  vec3_t *p_currentAngles; 
  __int64 v32; 
  nav_obstacle_hull_s *m_Hulls; 
  const nav_boundary_plane_s *m_Boundaries; 
  unsigned int v92; 
  int fmt; 
  __int64 v110; 
  __int64 v111; 
  bool v112; 
  bool bShuttingDown; 
  int number; 
  int v115; 
  int v118; 
  int v119; 
  int v122; 
  int v123; 
  __m256i v124; 
  bfx::ObstacleDat v129; 
  vec3_t worldPos; 
  vec4_t quat; 
  __int128 v132; 
  tmat33_t<vec3_t> axis; 
  nav_space_s *pSpacea[32]; 

  __asm
  {
    vmovaps [rsp+2D0h+var_50], xmm6
    vmovss  xmm0, cs:__real@41700000
  }
  v12 = 0i64;
  _R13 = pEnt;
  v14 = pSpace;
  __asm
  {
    vmovss  dword ptr [rsp+2D0h+var_260+8], xmm0
    vmovaps xmm6, xmm2
  }
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 415, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 416, ASSERT_TYPE_ASSERT, "( pEnt )", (const char *)&queryFormat, "pEnt") )
    __debugbreak();
  if ( (((userDataFlags & 0xF7FFFFFF) != 0) & _bittest((const signed __int32 *)&userDataFlags, 0x1Bu)) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 417, ASSERT_TYPE_ASSERT, "(( ( userDataFlags & NAV_AREAMASK_PLAYER_OBSTACLE ) == 0 ) || ( ( userDataFlags & ~NAV_AREAMASK_PLAYER_OBSTACLE ) == 0 ))", "%s\n\tCan't set player obstacle user data flag when setting other user data flags", "( ( userDataFlags & NAV_AREAMASK_PLAYER_OBSTACLE ) == 0 ) || ( ( userDataFlags & ~NAV_AREAMASK_PLAYER_OBSTACLE ) == 0 )") )
    __debugbreak();
  if ( Nav_MeshLoaded() )
  {
    if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 508, ASSERT_TYPE_ASSERT, "( pEnt )", (const char *)&queryFormat, "pEnt") )
      __debugbreak();
    number = _R13->s.number;
    v16 = 0;
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Nav_DestroyObstacleByID");
    bShuttingDown = g_NavData.bShuttingDown;
    v17 = !g_NavData.bShuttingDown;
    v112 = !g_NavData.bShuttingDown;
    FirstObstacle = Nav_GetFirstObstacle();
    if ( FirstObstacle )
    {
      v19 = 0i64;
      do
      {
        v20 = FirstObstacle;
        FirstObstacle = Nav_GetNextObstacle(FirstObstacle);
        if ( v20->id == number && !v20->m_bGlass )
        {
          v21 = v20->pSpace;
          if ( v21 )
          {
            v22 = 0i64;
            if ( v19 <= 0 )
            {
LABEL_22:
              if ( v19 >= 32 )
              {
                LODWORD(v111) = 32;
                LODWORD(v110) = 32;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 626, ASSERT_TYPE_ASSERT, "(numSpaces < cMaxNumSpaces)", "%s\n\ta single ent produced more than %d obstacles spread across more than %d spaces? really?", "numSpaces < cMaxNumSpaces", v110, v111) )
                  __debugbreak();
              }
              ++v16;
              pSpacea[v19++] = v20->pSpace;
            }
            else
            {
              while ( pSpacea[v22] != v21 )
              {
                if ( ++v22 >= v19 )
                  goto LABEL_22;
              }
            }
          }
          v20->m_bDeleteMe = 1;
        }
      }
      while ( FirstObstacle );
      v14 = pSpace;
      v12 = 0i64;
      v17 = v112;
      _R13 = pEnt;
    }
    if ( bShuttingDown && v16 > 0 )
    {
      do
      {
        v23 = pSpacea[v12];
        Nav_RemoveObstaclesMarkedForDeleteFromSpace(v23, v17);
        Nav_ClearCachedData(v23);
        ++v12;
      }
      while ( v12 < v16 );
    }
    __asm
    {
      vmovaps [rsp+2D0h+var_60], xmm7
      vmovaps [rsp+2D0h+var_70], xmm8
    }
    Sys_ProfEndNamedEvent();
    v24 = _R13->s.number;
    v124.m256i_i32[0] = layerFlags;
    v25 = 0;
    if ( blockageFlags == 0x2000 )
      v25 = 3;
    v124.m256i_i32[3] = blockageFlags;
    v124.m256i_i32[1] = v25;
    *(_OWORD *)&v124.m256i_u64[2] = userDataFlags;
    __asm { vmovss  dword ptr [rsp+2D0h+var_260+8], xmm6 }
    if ( _R13->r.modelType == 5 && (brushModel = _R13->s.index.brushModel, (_DWORD)brushModel) && (navObstacleIdx = cm.mapEnts->cmodels[brushModel].navObstacleIdx, navObstacleIdx != 0xFFFF) )
    {
      numObstacleBounds = g_NavData.numObstacleBounds;
      if ( navObstacleIdx >= g_NavData.numObstacleBounds )
      {
        if ( g_NavData.numResources <= 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 63, ASSERT_TYPE_ASSERT, "(g_NavData.numResources > 0)", "%s\n\tUnable to create nav obstacle from brushmodel.  Unable to find any nav data.  If MP, was this map compiled without connectpaths?  If SP, have you seeded the navmesh properly?", "g_NavData.numResources > 0") )
            __debugbreak();
          numObstacleBounds = g_NavData.numObstacleBounds;
        }
        if ( navObstacleIdx >= numObstacleBounds )
        {
          LODWORD(v111) = numObstacleBounds;
          LODWORD(v110) = navObstacleIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 64, ASSERT_TYPE_ASSERT, "(idx >= 0 && idx < g_NavData.numObstacleBounds)", "%s\n\tUnable to find nav obstacle bounds %d within %d. Brush indices out of sync with nav data. Can be caused by something like adding a vehicle + onlyents. This can usually be fixed by recompiling the bsp.", "idx >= 0 && idx < g_NavData.numObstacleBounds", v110, v111) )
            __debugbreak();
        }
      }
      v29 = g_NavData.obstacleBounds[navObstacleIdx];
      if ( v29 )
      {
        if ( v29->m_NumHulls > 0 )
        {
          p_currentAngles = &pEnt->r.currentAngles;
          AnglesToQuat(&pEnt->r.currentAngles, &quat);
          v115 = 0;
          if ( v29->m_NumHulls > 0 )
          {
            __asm
            {
              vmovaps [rsp+2D0h+var_80], xmm9
              vmovss  xmm9, cs:__real@40000000
            }
            v32 = 0i64;
            do
            {
              m_Hulls = v29->m_Hulls;
              AnglesToAxis(p_currentAngles, &axis);
              _R14 = &m_Hulls[v32].m_Offset;
              if ( _R14 == &worldPos && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
                __debugbreak();
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+1D0h+axis]
                vmulss  xmm3, xmm0, dword ptr [r14]
                vmovss  xmm1, dword ptr [rbp+1D0h+axis+0Ch]
                vmulss  xmm2, xmm1, dword ptr [r14+4]
                vmovss  xmm0, dword ptr [rbp+1D0h+axis+18h]
                vmulss  xmm1, xmm0, dword ptr [r14+8]
                vmovss  xmm0, dword ptr [rbp+1D0h+axis+4]
                vaddss  xmm4, xmm3, xmm2
                vaddss  xmm7, xmm4, xmm1
                vmovss  xmm1, dword ptr [rbp+1D0h+axis+10h]
                vmovss  dword ptr [rbp+1D0h+worldPos], xmm7
                vmulss  xmm2, xmm1, dword ptr [r14+4]
                vmulss  xmm3, xmm0, dword ptr [r14]
                vmovss  xmm0, dword ptr [rbp+1D0h+axis+1Ch]
                vmulss  xmm1, xmm0, dword ptr [r14+8]
                vaddss  xmm0, xmm7, dword ptr [rax+130h]
                vaddss  xmm4, xmm3, xmm2
                vaddss  xmm2, xmm4, xmm1
                vaddss  xmm1, xmm2, dword ptr [rax+134h]
                vmovss  dword ptr [rbp+1D0h+worldPos+4], xmm2
                vmovss  xmm5, dword ptr [r14+4]
                vmovss  xmm3, dword ptr [r14]
                vmovss  xmm6, dword ptr [r14+8]
                vmulss  xmm3, xmm3, dword ptr [rbp+1D0h+axis+8]
                vmulss  xmm2, xmm5, dword ptr [rbp+1D0h+axis+14h]
                vmovss  dword ptr [rbp+1D0h+worldPos+4], xmm1
                vmulss  xmm1, xmm6, dword ptr [rbp+1D0h+axis+20h]
                vaddss  xmm4, xmm3, xmm2
                vaddss  xmm2, xmm4, xmm1
                vaddss  xmm3, xmm2, dword ptr [rax+138h]
                vmovss  dword ptr [rbp+1D0h+worldPos+8], xmm3
                vmovss  dword ptr [rbp+1D0h+worldPos], xmm0
              }
              if ( m_Hulls[v32].m_bUseBounds )
              {
                __asm
                {
                  vmulss  xmm2, xmm9, dword ptr [rsi+rbx+14h]
                  vmulss  xmm1, xmm9, dword ptr [rsi+rbx+0Ch]
                  vmulss  xmm0, xmm9, dword ptr [rsi+rbx+10h]
                  vmovss  [rsp+2D0h+var_268], xmm2
                  vmovss  dword ptr [rsp+2D0h+var_270], xmm1
                  vmovss  dword ptr [rsp+2D0h+var_270+4], xmm0
                }
                if ( bNow )
                {
                  __asm { vmovups ymm0, [rsp+2D0h+var_260] }
                  DWORD2(v132) = v122;
                  __asm
                  {
                    vmovups [rbp+1D0h+var_220], ymm0
                    vmovsd  xmm0, [rsp+2D0h+var_270]
                    vmovsd  qword ptr [rbp+1D0h+var_1E0], xmm0
                  }
                  Nav_CreateObstacleNow(v14, &worldPos, &quat, (const bfx::BoxExtents *)&v132, v24, 0, &v129);
                }
                else
                {
                  v118 = v122;
                  __asm
                  {
                    vmovsd  xmm0, [rsp+2D0h+var_270]
                    vmovsd  [rsp+2D0h+var_280], xmm0
                  }
                  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 165, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
                    __debugbreak();
                  if ( !bfx::SpaceHandle::IsValid(&v14->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 166, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
                    __debugbreak();
                  __asm
                  {
                    vmovss  xmm6, dword ptr [rsp+2D0h+var_280]
                    vmovss  xmm7, dword ptr [rsp+2D0h+var_280+4]
                    vmovss  xmm8, [rsp+2D0h+var_278]
                  }
                  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 94, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
                    __debugbreak();
                  if ( !bfx::SpaceHandle::IsValid(&v14->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 95, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
                    __debugbreak();
                  _RAX = Nav_AllocObstacle();
                  _RBX = _RAX;
                  if ( _RAX )
                  {
                    __asm { vmovups ymm0, [rsp+2D0h+var_260] }
                    _RAX->id = v24;
                    __asm { vmovups ymmword ptr [rax+38h], ymm0 }
                    Nav_SpaceConvertWorldToLocal(v14, &worldPos, &quat, &_RAX->pos, &_RAX->qRot);
                    __asm
                    {
                      vmovss  dword ptr [rbx+58h], xmm6
                      vmovss  dword ptr [rbx+5Ch], xmm7
                      vmovss  dword ptr [rbx+60h], xmm8
                    }
                    _RBX->m_NumBoundaryPlanes = 0;
                    *(_DWORD *)&_RBX->m_bUsesExtents = 16777217;
                    _RBX->pSpace = v14;
                    Nav_QueueObstacleCreation(_RBX);
                  }
                }
              }
              else
              {
                __asm { vmovups ymm0, [rsp+2D0h+var_260] }
                m_Boundaries = m_Hulls[v32].m_Boundaries;
                fmt = m_Hulls[v32].m_NumBoundaries;
                __asm { vmovups [rbp+1D0h+var_220], ymm0 }
                if ( bNow )
                  Nav_CreateObstacleNow(v14, &worldPos, &quat, m_Boundaries, fmt, v24, 0, &v129);
                else
                  Nav_CreateObstacle(v14, &worldPos, &quat, m_Boundaries, fmt, v24, 0, &v129);
              }
              ++v32;
              p_currentAngles = &pEnt->r.currentAngles;
              ++v115;
            }
            while ( v115 < v29->m_NumHulls );
            __asm { vmovaps xmm9, [rsp+2D0h+var_80] }
          }
        }
      }
    }
    else
    {
      __asm
      {
        vmovsd  xmm1, qword ptr [r13+110h]
        vmovups xmm0, xmmword ptr [r13+100h]
        vmovups [rbp+1D0h+var_1E0], xmm0
        vmovss  xmm2, dword ptr [rbp+1D0h+var_1E0+4]
        vshufps xmm0, xmm0, xmm0, 0AAh ; 'ª'
        vaddss  xmm3, xmm0, cs:__real@c1900000
        vshufps xmm0, xmm1, xmm1, 55h ; 'U'
        vaddss  xmm4, xmm0, cs:__real@41900000
        vmovss  xmm0, dword ptr [rbp+1D0h+var_1E0]
        vmovsd  [rbp+1D0h+var_1D0], xmm1
        vaddss  xmm1, xmm0, dword ptr [r13+130h]
        vaddss  xmm0, xmm2, dword ptr [r13+134h]
        vmovss  dword ptr [rbp+1D0h+worldPos], xmm1
        vaddss  xmm1, xmm3, dword ptr [r13+138h]
        vmovss  xmm3, cs:__real@40000000
        vmovss  dword ptr [rbp+1D0h+worldPos+8], xmm1
        vmulss  xmm1, xmm3, dword ptr [rbp+1D0h+var_1E0+0Ch]
        vmovss  dword ptr [rsp+2D0h+var_270], xmm1
        vmovss  dword ptr [rbp+1D0h+worldPos+4], xmm0
        vmulss  xmm0, xmm3, dword ptr [rbp+1D0h+var_1D0]
        vmulss  xmm1, xmm4, xmm3
        vmovss  [rsp+2D0h+var_268], xmm1
        vmovss  dword ptr [rsp+2D0h+var_270+4], xmm0
      }
      AnglesToQuat(&_R13->r.currentAngles, &quat);
      v92 = _R13->s.number;
      __asm
      {
        vmovsd  xmm0, [rsp+2D0h+var_270]
        vmovsd  [rsp+2D0h+var_280], xmm0
      }
      v119 = v123;
      if ( bNow )
      {
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 185, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
          __debugbreak();
        if ( !bfx::SpaceHandle::IsValid(&v14->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 186, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
          __debugbreak();
        __asm
        {
          vmovss  xmm6, dword ptr [rsp+2D0h+var_280]
          vmovss  xmm7, dword ptr [rsp+2D0h+var_280+4]
          vmovss  xmm8, [rsp+2D0h+var_278]
        }
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 94, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
          __debugbreak();
        if ( !bfx::SpaceHandle::IsValid(&v14->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 95, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
          __debugbreak();
        _RAX = Nav_AllocObstacle();
        _RBX = _RAX;
        if ( _RAX )
        {
          __asm { vmovups ymm0, [rsp+2D0h+var_260] }
          _RAX->id = v92;
          __asm { vmovups ymmword ptr [rax+38h], ymm0 }
          Nav_SpaceConvertWorldToLocal(v14, &worldPos, &quat, &_RAX->pos, &_RAX->qRot);
          __asm
          {
            vmovss  dword ptr [rbx+58h], xmm6
            vmovss  dword ptr [rbx+5Ch], xmm7
            vmovss  dword ptr [rbx+60h], xmm8
          }
          _RBX->m_NumBoundaryPlanes = 0;
          *(_DWORD *)&_RBX->m_bUsesExtents = 16777217;
          _RBX->pSpace = v14;
          Nav_CreateObstacleHandle(_RBX);
          if ( bfx::ObstacleHandle::IsValid(&_RBX->hObstacle) )
          {
            Nav_AddObstacleToSpace(v14, _RBX);
            Nav_ClearCachedData(v14);
          }
          else
          {
            bfx::ObstacleHandle::Release(&_RBX->hObstacle);
            Nav_FreeObstacle(_RBX);
          }
        }
      }
      else
      {
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 165, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
          __debugbreak();
        if ( !bfx::SpaceHandle::IsValid(&v14->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 166, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
          __debugbreak();
        __asm
        {
          vmovss  xmm6, dword ptr [rsp+2D0h+var_280]
          vmovss  xmm7, dword ptr [rsp+2D0h+var_280+4]
          vmovss  xmm8, [rsp+2D0h+var_278]
        }
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 94, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
          __debugbreak();
        if ( !bfx::SpaceHandle::IsValid(&v14->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 95, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
          __debugbreak();
        _RAX = Nav_AllocObstacle();
        _RBX = _RAX;
        if ( _RAX )
        {
          __asm { vmovups ymm0, [rsp+2D0h+var_260] }
          _RAX->id = v92;
          __asm { vmovups ymmword ptr [rax+38h], ymm0 }
          Nav_SpaceConvertWorldToLocal(v14, &worldPos, &quat, &_RAX->pos, &_RAX->qRot);
          __asm
          {
            vmovss  dword ptr [rbx+58h], xmm6
            vmovss  dword ptr [rbx+5Ch], xmm7
            vmovss  dword ptr [rbx+60h], xmm8
          }
          _RBX->m_NumBoundaryPlanes = 0;
          *(_DWORD *)&_RBX->m_bUsesExtents = 16777217;
          _RBX->pSpace = v14;
          Nav_QueueObstacleCreation(_RBX);
        }
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+2D0h+var_60]
      vmovaps xmm8, [rsp+2D0h+var_70]
    }
  }
  __asm { vmovaps xmm6, [rsp+2D0h+var_50] }
}

/*
==============
Nav_CreateObstacleByGlass
==============
*/
void Nav_CreateObstacleByGlass(nav_space_s *pSpace, unsigned int navGlassPieceIndex)
{
  int v4; 
  nav_glass_bounds_s **glassBounds; 
  nav_glass_bounds_s *v6; 
  const vec3_t *p_m_Pos; 
  int m_NumBoundaries; 
  const nav_boundary_plane_s *m_Boundaries; 
  __int64 v12; 
  __m256i v13; 
  bfx::ObstacleDat v14; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 651, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !G_Glass_IsIndexValid(navGlassPieceIndex - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 652, ASSERT_TYPE_ASSERT, "( G_Glass_IsIndexValid( navGlassPieceIndex - 1 ) )", (const char *)&queryFormat, "G_Glass_IsIndexValid( navGlassPieceIndex - 1 )") )
    __debugbreak();
  v4 = 0;
  if ( g_NavData.numGlassBounds <= 0 )
  {
LABEL_11:
    LODWORD(v12) = navGlassPieceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 674, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find glass bounds for glass %d.  Has nav-blocking func_glass changed without rebuilding navmesh?", v12) )
      __debugbreak();
  }
  else
  {
    glassBounds = g_NavData.glassBounds;
    while ( 1 )
    {
      v6 = *glassBounds;
      if ( (*glassBounds)->m_GlassPieceIndex == navGlassPieceIndex )
        break;
      ++v4;
      ++glassBounds;
      if ( v4 >= g_NavData.numGlassBounds )
        goto LABEL_11;
    }
    __asm { vmovss  xmm0, cs:__real@41700000 }
    *(_OWORD *)&v13.m256i_u64[2] = 0ui64;
    p_m_Pos = &v6->m_Pos;
    m_NumBoundaries = v6->m_NumBoundaries;
    m_Boundaries = v6->m_Boundaries;
    __asm { vmovss  dword ptr [rsp+88h+var_48+8], xmm0 }
    v13.m256i_i64[0] = 0xFFFFFFFFi64;
    v13.m256i_i32[3] = -8065;
    __asm
    {
      vmovups ymm0, [rsp+88h+var_48]
      vmovups [rsp+88h+var_28], ymm0
    }
    Nav_CreateObstacleNow(pSpace, p_m_Pos, &quat_identity, m_Boundaries, m_NumBoundaries, navGlassPieceIndex, 1, &v14);
  }
}

/*
==============
Nav_CreateObstacleByShape
==============
*/

__int64 __fastcall Nav_CreateObstacleByShape(nav_space_s *pSpace, const vec3_t *pos, __int64 numSides, double distFromCenter, float halfHeight, float penalty, unsigned int layerFlags, unsigned int blockageFlags, bool bNow, unsigned int userDataFlags)
{
  __int64 v10; 
  int v15; 
  int v20; 
  int v22; 
  __int64 v26; 
  unsigned int v30; 
  unsigned int v35; 
  nav_obstacle_s *v37; 
  nav_obstacle_s *v38; 
  nav_obstacle_s *v40; 
  __int64 result; 
  bfx::ObstacleDat v45; 
  vec4_t v46; 
  nav_boundary_plane_s v47[12]; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v15 = numSides;
  __asm { vmovaps xmm7, xmm3 }
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 546, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( v15 <= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 547, ASSERT_TYPE_ASSERT, "( numSides > 2 )", (const char *)&queryFormat, "numSides > 2") )
    __debugbreak();
  __asm { vmovss  xmm0, cs:__real@40c90fdb }
  v20 = 10;
  __asm { vxorps  xmm1, xmm1, xmm1 }
  if ( v15 <= 10 )
    v20 = v15;
  v22 = 0;
  __asm
  {
    vcvtsi2ss xmm1, xmm1, r14d
    vdivss  xmm6, xmm0, xmm1
  }
  if ( v20 > 0 )
  {
    _RBX = &v47[0].m_Normal.v[2];
    v26 = v20;
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vmulss  xmm0, xmm0, xmm6
      }
      *(double *)&_XMM0 = j___libm_sse2_sincosf_(pSpace, 0i64, numSides, v10);
      ++v22;
      *_RBX = 0.0;
      __asm
      {
        vextractps dword ptr [rbx-8], xmm0, 1
        vmovss  dword ptr [rbx-4], xmm0
        vmovss  dword ptr [rbx+4], xmm7
      }
      _RBX += 4;
      --v26;
    }
    while ( v26 );
  }
  __asm { vmovss  xmm0, [rsp+198h+halfHeight] }
  v30 = s_NavObstacleIDGen;
  _RAX = v20;
  v45.m_obstacleBlockageFlags = blockageFlags;
  v45.m_obstacleName = NULL;
  *(_QWORD *)v47[_RAX].m_Normal.v = 0i64;
  v47[_RAX].m_Normal.v[2] = 1.0;
  __asm { vmovss  [rsp+rax*8+198h+var_11C], xmm0 }
  _RAX = v20 + 1i64;
  *(_QWORD *)v47[_RAX].m_Normal.v = 0i64;
  v47[_RAX].m_Normal.v[2] = -1.0;
  __asm
  {
    vmovss  [rsp+rax*8+198h+var_11C], xmm0
    vmovss  xmm0, [rsp+198h+penalty]
  }
  v45.m_layerMask = layerFlags;
  __asm
  {
    vmovss  dword ptr [rsp+198h+var_158+8], xmm0
    vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
  }
  v35 = v30 + 1;
  s_NavObstacleIDGen = v35;
  v45.m_obstacleBehavior = (blockageFlags & 0x2000) != 0 ? OBSTACLE_BEHAVIOR_PENALTY_IMPASSABLE : OBSTACLE_BEHAVIOR_AUTOMATIC;
  v45.m_userData = userDataFlags;
  __asm { vmovups [rsp+198h+var_138], xmm0 }
  if ( v35 >= 0xFFFFFFFE )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 36, ASSERT_TYPE_ASSERT, "( s_NavObstacleIDGen < 0xffffffff - 1 )", (const char *)&queryFormat, "s_NavObstacleIDGen < UINT_MAX - 1") )
      __debugbreak();
    v35 = s_NavObstacleIDGen;
  }
  if ( v35 <= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 578, ASSERT_TYPE_ASSERT, "( id > ( 2048 ) )", (const char *)&queryFormat, "id > MAX_GENTITIES") )
    __debugbreak();
  if ( bNow )
  {
    if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 273, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
      __debugbreak();
    if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 274, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, [rsp+198h+var_158]
      vmovups [rsp+198h+var_158], ymm0
    }
    v37 = Nav_SetupObstacleByBoundaries(pSpace, pos, &v46, v47, v20 + 2, v35, 0, &v45);
    v38 = v37;
    if ( v37 )
    {
      Nav_CreateObstacleHandle(v37);
      if ( bfx::ObstacleHandle::IsValid(&v38->hObstacle) )
      {
        Nav_AddObstacleToSpace(pSpace, v38);
        Nav_ClearCachedData(pSpace);
      }
      else
      {
        bfx::ObstacleHandle::Release(&v38->hObstacle);
        Nav_FreeObstacle(v38);
      }
    }
  }
  else
  {
    if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 253, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
      __debugbreak();
    if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 254, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, [rsp+198h+var_158]
      vmovups [rsp+198h+var_158], ymm0
    }
    v40 = Nav_SetupObstacleByBoundaries(pSpace, pos, &v46, v47, v20 + 2, v35, 0, &v45);
    if ( v40 )
      Nav_QueueObstacleCreation(v40);
  }
  result = v35;
  _R11 = &v48;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
Nav_CreateObstacleHandle
==============
*/
void Nav_CreateObstacleHandle(nav_obstacle_s *pObstacle)
{
  const bfx::ObstacleHandle *v10; 
  bfx::BoundaryPlane *p_pPlanes; 
  __int64 v12; 
  int m_NumBoundaryPlanes; 
  float *v14; 
  __int64 v15; 
  const bfx::ObstacleHandle *v16; 
  bfx::Quaternion rot; 
  bfx::BoxExtents boxExtents; 
  bfx::Vector3 pos; 
  bfx::ObstacleHandle result; 
  __int64 v21; 
  vec4_t outWorldRot; 
  vec3_t outWorldPos; 
  bfx::BoundaryPlane pPlanes; 

  v21 = -2i64;
  _RBX = pObstacle;
  if ( !pObstacle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 126, ASSERT_TYPE_ASSERT, "( pObstacle )", (const char *)&queryFormat, "pObstacle") )
    __debugbreak();
  if ( bfx::ObstacleHandle::IsValid(&_RBX->hObstacle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 127, ASSERT_TYPE_ASSERT, "( !pObstacle->hObstacle.IsValid() )", (const char *)&queryFormat, "!pObstacle->hObstacle.IsValid()") )
    __debugbreak();
  Nav_SpaceConvertLocalToWorld(_RBX->pSpace, &_RBX->pos, &_RBX->qRot, &outWorldPos, &outWorldRot);
  __asm
  {
    vmovsd  xmm0, qword ptr [rbp+80h+outWorldPos]
    vmovsd  qword ptr [rsp+180h+pos.m_x], xmm0
  }
  pos.m_z = outWorldPos.v[2];
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+80h+outWorldRot]
    vmovss  [rsp+180h+rot.m_x], xmm0
    vmovss  xmm1, dword ptr [rbp+80h+outWorldRot+4]
    vmovss  [rsp+180h+rot.m_y], xmm1
    vmovss  xmm0, dword ptr [rbp+80h+outWorldRot+8]
    vmovss  [rsp+180h+rot.m_z], xmm0
    vmovss  xmm1, dword ptr [rbp+80h+outWorldRot+0Ch]
    vmovss  [rsp+180h+rot.m_w], xmm1
  }
  if ( _RBX->m_bUsesExtents )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+60h]
      vmovss  xmm1, dword ptr [rbx+5Ch]
      vmovss  xmm0, dword ptr [rbx+58h]
      vmovss  [rsp+180h+boxExtents.m_length], xmm0
      vmovss  [rsp+180h+boxExtents.m_width], xmm1
      vmovss  [rsp+180h+boxExtents.m_height], xmm2
    }
    v10 = bfx::CreateObstacle(&result, &_RBX->pSpace->hSpace, &pos, &rot, &boxExtents, &_RBX->obsData);
    bfx::ObstacleHandle::operator=(&_RBX->hObstacle, v10);
    bfx::ObstacleHandle::~ObstacleHandle(&result);
  }
  else if ( _RBX->m_NumBoundaryPlanes <= 0 )
  {
    bfx::ObstacleHandle::Release(&_RBX->hObstacle);
  }
  else
  {
    p_pPlanes = &pPlanes;
    v12 = 12i64;
    do
    {
      bfx::BoundaryPlane::BoundaryPlane(p_pPlanes++);
      --v12;
    }
    while ( v12 );
    m_NumBoundaryPlanes = _RBX->m_NumBoundaryPlanes;
    if ( m_NumBoundaryPlanes > 0 )
    {
      v14 = &_RBX->m_BoundaryPlanes[0].m_Normal.v[2];
      v15 = (unsigned int)m_NumBoundaryPlanes;
      do
      {
        *(float *)((char *)v14 + (char *)&pPlanes - (char *)_RBX - 108) = *(v14 - 2);
        *(float *)((char *)v14 + (char *)&pPlanes.m_normal.m_y - (char *)_RBX - 108) = *(v14 - 1);
        *(float *)((char *)v14 + (char *)&pPlanes.m_normal.m_z - (char *)_RBX - 108) = *v14;
        *(float *)((char *)v14 + (char *)&pPlanes.m_distFromCenter - (char *)_RBX - 108) = v14[1];
        v14 += 4;
        --v15;
      }
      while ( v15 );
    }
    v16 = bfx::CreateObstacle(&result, &_RBX->pSpace->hSpace, &pos, &rot, &pPlanes, m_NumBoundaryPlanes, &_RBX->obsData);
    bfx::ObstacleHandle::operator=(&_RBX->hObstacle, v16);
    bfx::ObstacleHandle::~ObstacleHandle(&result);
  }
  _RBX->m_bPending = 0;
}

/*
==============
Nav_CreateObstacleNow
==============
*/
bool Nav_CreateObstacleNow(nav_space_s *pSpace, const vec3_t *pos, const vec4_t *qRot, const nav_boundary_plane_s *pPlanes, int numPlanes, unsigned int id, bool bGlass, const bfx::ObstacleDat *obsData)
{
  nav_obstacle_s *v14; 
  nav_obstacle_s *v15; 
  bfx::ObstacleDat v17; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 273, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 274, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  _RAX = obsData;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+68h+var_28], ymm0
  }
  v14 = Nav_SetupObstacleByBoundaries(pSpace, pos, qRot, pPlanes, numPlanes, id, bGlass, &v17);
  v15 = v14;
  if ( v14 )
  {
    Nav_CreateObstacleHandle(v14);
    if ( bfx::ObstacleHandle::IsValid(&v15->hObstacle) )
    {
      Nav_AddObstacleToSpace(pSpace, v15);
      Nav_ClearCachedData(pSpace);
    }
    else
    {
      bfx::ObstacleHandle::Release(&v15->hObstacle);
      Nav_FreeObstacle(v15);
    }
    LOBYTE(v14) = 1;
  }
  return (char)v14;
}

/*
==============
Nav_CreateObstacleNow
==============
*/
bool Nav_CreateObstacleNow(nav_space_s *pSpace, const vec3_t *pos, const vec4_t *qRot, const bfx::BoxExtents *extents, unsigned int id, bool bGlass, const bfx::ObstacleDat *obsData)
{
  nav_obstacle_s *v14; 
  nav_obstacle_s *v15; 
  bfx::BoxExtents v17; 
  bfx::ObstacleDat v18; 

  _RBX = extents;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 185, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 186, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  _RAX = obsData;
  __asm
  {
    vmovsd  xmm1, qword ptr [rbx]
    vmovups ymm0, ymmword ptr [rax]
  }
  v17.m_height = _RBX->m_height;
  __asm
  {
    vmovups [rsp+78h+var_28], ymm0
    vmovsd  [rsp+78h+var_38], xmm1
  }
  v14 = Nav_SetupObstacleByExtents(pSpace, pos, qRot, &v17, id, bGlass, &v18);
  v15 = v14;
  if ( v14 )
  {
    Nav_CreateObstacleHandle(v14);
    if ( bfx::ObstacleHandle::IsValid(&v15->hObstacle) )
    {
      Nav_AddObstacleToSpace(pSpace, v15);
      Nav_ClearCachedData(pSpace);
    }
    else
    {
      bfx::ObstacleHandle::Release(&v15->hObstacle);
      Nav_FreeObstacle(v15);
    }
    LOBYTE(v14) = 1;
  }
  return (char)v14;
}

/*
==============
Nav_DestroyAllObstacles
==============
*/
void Nav_DestroyAllObstacles(void)
{
  nav_obstacle_s *i; 
  __int64 v1; 
  __int64 v2; 

  for ( i = Nav_GetFirstObstacle(); i; i = &g_NavData.obstacles[g_NavData.obstaclePoolInfo.firstUsed] )
  {
    Nav_DestroyObstacle(i, 0);
    if ( g_NavData.obstaclePoolInfo.firstUsed < 0 )
      break;
    if ( g_NavData.obstaclePoolInfo.firstUsed >= (unsigned int)Nav_GetMaxNumObstacles() )
    {
      LODWORD(v2) = Nav_GetMaxNumObstacles();
      LODWORD(v1) = g_NavData.obstaclePoolInfo.firstUsed;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 45, ASSERT_TYPE_ASSERT, "(unsigned)( g_NavData.obstaclePoolInfo.firstUsed ) < (unsigned)( Nav_GetMaxNumObstacles() )", "g_NavData.obstaclePoolInfo.firstUsed doesn't index Nav_GetMaxNumObstacles()\n\t%i not in [0, %i)", v1, v2) )
        __debugbreak();
    }
  }
  *(_QWORD *)&g_NavData.curPendingObstacleIdx = 0i64;
  if ( g_NavData.obstaclePoolInfo.count )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 819, ASSERT_TYPE_ASSERT, "( g_NavData.obstaclePoolInfo.count == 0 )", (const char *)&queryFormat, "g_NavData.obstaclePoolInfo.count == 0") )
      __debugbreak();
  }
}

/*
==============
Nav_DestroyObstacle
==============
*/
void Nav_DestroyObstacle(nav_obstacle_s *pObs, bool bPreserveOrdering)
{
  nav_space_s *pSpace; 
  int MaxNumObstacles; 
  int curPendingObstacleIdx; 

  if ( !pObs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 374, ASSERT_TYPE_ASSERT, "( pObs )", (const char *)&queryFormat, "pObs") )
    __debugbreak();
  if ( pObs->m_bPending )
  {
    MaxNumObstacles = Nav_GetMaxNumObstacles();
    curPendingObstacleIdx = g_NavData.curPendingObstacleIdx;
    if ( g_NavData.curPendingObstacleIdx != g_NavData.nextFreePendingObstacleIdx )
    {
      while ( g_NavData.pendingObstacles[curPendingObstacleIdx] != pObs )
      {
        curPendingObstacleIdx = (curPendingObstacleIdx + 1) % MaxNumObstacles;
        if ( curPendingObstacleIdx == g_NavData.nextFreePendingObstacleIdx )
          goto LABEL_11;
      }
      g_NavData.pendingObstacles[curPendingObstacleIdx] = NULL;
    }
LABEL_11:
    Nav_FreeObstacle(pObs);
  }
  else
  {
    bfx::DestroyObstacle(&pObs->hObstacle);
    bfx::ObstacleHandle::Release(&pObs->hObstacle);
    pSpace = pObs->pSpace;
    Nav_RemoveObstacleFromSpace(pSpace, pObs, bPreserveOrdering);
    pObs->pSpace = NULL;
    Nav_ClearCachedData(pSpace);
    Nav_FreeObstacle(pObs);
  }
}

/*
==============
Nav_DestroyObstacleByEnt
==============
*/
void Nav_DestroyObstacleByEnt(const gentity_s *pEnt)
{
  int number; 
  __int64 v3; 
  int v4; 
  bool bShuttingDown; 
  bool v6; 
  nav_obstacle_s *FirstObstacle; 
  __int64 v8; 
  nav_obstacle_s *v9; 
  nav_space_s *v10; 
  __int64 v11; 
  nav_space_s *v12; 
  __int64 v13; 
  __int64 v14; 
  bool v15; 
  bool v16; 
  nav_space_s *pSpace[32]; 

  if ( !pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 508, ASSERT_TYPE_ASSERT, "( pEnt )", (const char *)&queryFormat, "pEnt") )
    __debugbreak();
  number = pEnt->s.number;
  v3 = 0i64;
  v4 = 0;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Nav_DestroyObstacleByID");
  bShuttingDown = g_NavData.bShuttingDown;
  v16 = g_NavData.bShuttingDown;
  v6 = !g_NavData.bShuttingDown;
  v15 = !g_NavData.bShuttingDown;
  FirstObstacle = Nav_GetFirstObstacle();
  if ( FirstObstacle )
  {
    v8 = 0i64;
    do
    {
      v9 = FirstObstacle;
      FirstObstacle = Nav_GetNextObstacle(FirstObstacle);
      if ( v9->id == number && !v9->m_bGlass )
      {
        v10 = v9->pSpace;
        if ( v10 )
        {
          v11 = 0i64;
          if ( v8 <= 0 )
          {
LABEL_12:
            if ( v8 >= 32 )
            {
              LODWORD(v14) = 32;
              LODWORD(v13) = 32;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 626, ASSERT_TYPE_ASSERT, "(numSpaces < cMaxNumSpaces)", "%s\n\ta single ent produced more than %d obstacles spread across more than %d spaces? really?", "numSpaces < cMaxNumSpaces", v13, v14) )
                __debugbreak();
            }
            ++v4;
            pSpace[v8++] = v9->pSpace;
          }
          else
          {
            while ( pSpace[v11] != v10 )
            {
              if ( ++v11 >= v8 )
                goto LABEL_12;
            }
          }
        }
        v9->m_bDeleteMe = 1;
      }
    }
    while ( FirstObstacle );
    v6 = v15;
    bShuttingDown = v16;
  }
  if ( bShuttingDown && v4 > 0 )
  {
    do
    {
      v12 = pSpace[v3];
      Nav_RemoveObstaclesMarkedForDeleteFromSpace(v12, v6);
      Nav_ClearCachedData(v12);
      ++v3;
    }
    while ( v3 < v4 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Nav_DestroyObstacleByGlass
==============
*/
void Nav_DestroyObstacleByGlass(unsigned int glassPieceIndex)
{
  bool v2; 
  nav_obstacle_s *FirstObstacle; 

  if ( !G_Glass_IsIndexValid(glassPieceIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 680, ASSERT_TYPE_ASSERT, "( G_Glass_IsIndexValid( glassPieceIndex ) )", (const char *)&queryFormat, "G_Glass_IsIndexValid( glassPieceIndex )") )
    __debugbreak();
  v2 = !g_NavData.bShuttingDown;
  FirstObstacle = Nav_GetFirstObstacle();
  if ( FirstObstacle )
  {
    while ( !FirstObstacle->m_bGlass || FirstObstacle->id - 1 != glassPieceIndex )
    {
      FirstObstacle = Nav_GetNextObstacle(FirstObstacle);
      if ( !FirstObstacle )
        return;
    }
    if ( v2 )
      FirstObstacle->m_bDeleteMe = 1;
    else
      Nav_DestroyObstacle(FirstObstacle, 0);
  }
}

/*
==============
Nav_DestroyObstacleByID
==============
*/
void Nav_DestroyObstacleByID(unsigned int id)
{
  __int64 v1; 
  int v3; 
  bool bShuttingDown; 
  bool v5; 
  nav_obstacle_s *FirstObstacle; 
  __int64 v7; 
  nav_obstacle_s *v8; 
  nav_space_s *v9; 
  __int64 v10; 
  nav_space_s *v11; 
  __int64 v12; 
  __int64 v13; 
  bool v14; 
  bool v15; 
  nav_space_s *pSpace[32]; 

  v1 = 0i64;
  v3 = 0;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Nav_DestroyObstacleByID");
  bShuttingDown = g_NavData.bShuttingDown;
  v15 = g_NavData.bShuttingDown;
  v5 = !g_NavData.bShuttingDown;
  v14 = !g_NavData.bShuttingDown;
  FirstObstacle = Nav_GetFirstObstacle();
  if ( FirstObstacle )
  {
    v7 = 0i64;
    do
    {
      v8 = FirstObstacle;
      FirstObstacle = Nav_GetNextObstacle(FirstObstacle);
      if ( v8->id == id && !v8->m_bGlass )
      {
        v9 = v8->pSpace;
        if ( v9 )
        {
          v10 = 0i64;
          if ( v7 <= 0 )
          {
LABEL_9:
            if ( v7 >= 32 )
            {
              LODWORD(v13) = 32;
              LODWORD(v12) = 32;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 626, ASSERT_TYPE_ASSERT, "(numSpaces < cMaxNumSpaces)", "%s\n\ta single ent produced more than %d obstacles spread across more than %d spaces? really?", "numSpaces < cMaxNumSpaces", v12, v13) )
                __debugbreak();
            }
            ++v3;
            pSpace[v7++] = v8->pSpace;
          }
          else
          {
            while ( pSpace[v10] != v9 )
            {
              if ( ++v10 >= v7 )
                goto LABEL_9;
            }
          }
        }
        v8->m_bDeleteMe = 1;
      }
    }
    while ( FirstObstacle );
    v5 = v14;
    bShuttingDown = v15;
  }
  if ( bShuttingDown && v3 > 0 )
  {
    do
    {
      v11 = pSpace[v1];
      Nav_RemoveObstaclesMarkedForDeleteFromSpace(v11, v5);
      Nav_ClearCachedData(v11);
      ++v1;
    }
    while ( v1 < v3 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Nav_DumpObstaclesInfo
==============
*/
void Nav_DumpObstaclesInfo(void)
{
  nav_obstacle_s *FirstObstacle; 
  __int64 id; 
  gentity_s *v2; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  vec3_t outWorldPos; 
  vec4_t outWorldRot; 

  FirstObstacle = Nav_GetFirstObstacle();
  Com_Printf(18, "\nDumping Obstacle List...\n");
  for ( ; FirstObstacle; FirstObstacle = Nav_GetNextObstacle(FirstObstacle) )
  {
    id = FirstObstacle->id;
    if ( (unsigned int)id >= 0x800 )
    {
      Nav_SpaceConvertLocalToWorld(FirstObstacle->pSpace, &FirstObstacle->pos, &FirstObstacle->qRot, &outWorldPos, &outWorldRot);
      v5 = vtos(&outWorldPos);
      Com_Printf(18, "Obstacle with ID %d at pos %s\n", FirstObstacle->id, v5);
    }
    else
    {
      v2 = &g_entities[id];
      v3 = SL_ConvertToString(v2->targetname);
      v4 = vtos(&v2->r.currentOrigin);
      Com_Printf(18, "Obstacle for Ent %d at pos %s with targetname %s \n", FirstObstacle->id, v4, v3);
    }
  }
  Com_Printf(18, "End Obstacle List...\n");
}

/*
==============
Nav_GetFirstObstacle
==============
*/
nav_obstacle_s *Nav_GetFirstObstacle()
{
  int firstUsed; 
  int MaxNumObstacles; 

  if ( g_NavData.obstaclePoolInfo.firstUsed < 0 )
    return 0i64;
  if ( g_NavData.obstaclePoolInfo.firstUsed >= (unsigned int)Nav_GetMaxNumObstacles() )
  {
    MaxNumObstacles = Nav_GetMaxNumObstacles();
    firstUsed = g_NavData.obstaclePoolInfo.firstUsed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 45, ASSERT_TYPE_ASSERT, "(unsigned)( g_NavData.obstaclePoolInfo.firstUsed ) < (unsigned)( Nav_GetMaxNumObstacles() )", "g_NavData.obstaclePoolInfo.firstUsed doesn't index Nav_GetMaxNumObstacles()\n\t%i not in [0, %i)", firstUsed, MaxNumObstacles) )
      __debugbreak();
  }
  return &g_NavData.obstacles[g_NavData.obstaclePoolInfo.firstUsed];
}

/*
==============
Nav_GetNextObstacle
==============
*/
nav_obstacle_s *Nav_GetNextObstacle(nav_obstacle_s *pObstacle)
{
  __int64 v3; 
  int MaxNumObstacles; 

  if ( !pObstacle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 51, ASSERT_TYPE_ASSERT, "( pObstacle )", (const char *)&queryFormat, "pObstacle") )
    __debugbreak();
  if ( pObstacle->nextIdx < 0 )
    return 0i64;
  if ( pObstacle->nextIdx >= (unsigned int)Nav_GetMaxNumObstacles() )
  {
    MaxNumObstacles = Nav_GetMaxNumObstacles();
    LODWORD(v3) = pObstacle->nextIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 54, ASSERT_TYPE_ASSERT, "(unsigned)( pObstacle->nextIdx ) < (unsigned)( Nav_GetMaxNumObstacles() )", "pObstacle->nextIdx doesn't index Nav_GetMaxNumObstacles()\n\t%i not in [0, %i)", v3, MaxNumObstacles) )
      __debugbreak();
  }
  return &g_NavData.obstacles[pObstacle->nextIdx];
}

/*
==============
Nav_GetNumObstacleBounds
==============
*/
__int64 Nav_GetNumObstacleBounds()
{
  return (unsigned int)g_NavData.numObstacleBounds;
}

/*
==============
Nav_GetObstacleBlockageFlagsFromTeamFlags
==============
*/
__int64 Nav_GetObstacleBlockageFlagsFromTeamFlags(const bitarray<224> *teamflags)
{
  unsigned int v1; 
  unsigned int v2; 
  int v3; 
  int v4; 
  int v5; 
  unsigned int v6; 
  __int64 result; 

  v1 = teamflags->array[0];
  v2 = 2 * ((teamflags->array[0] >> 29) & 1);
  v3 = v2 | 4;
  if ( (v1 & 0x40000000) == 0 )
    v3 = v2;
  v4 = v3 | 8;
  if ( (v1 & 0x10000000) == 0 )
    v4 = v3;
  v5 = v4 | 0x10;
  if ( (v1 & 0x8000000) == 0 )
    v5 = v4;
  v6 = v5 | 0x20;
  if ( (v1 & 0x4000000) == 0 )
    v6 = v5;
  result = v6 | 0x40;
  if ( (v1 & 0x2000000) == 0 )
    return v6;
  return result;
}

/*
==============
Nav_GetObstacleBounds
==============
*/
nav_obstacle_bounds_s *Nav_GetObstacleBounds(int idx)
{
  int numObstacleBounds; 
  __int64 v2; 

  numObstacleBounds = g_NavData.numObstacleBounds;
  v2 = idx;
  if ( idx < 0 || idx >= g_NavData.numObstacleBounds )
  {
    if ( g_NavData.numResources <= 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 63, ASSERT_TYPE_ASSERT, "(g_NavData.numResources > 0)", "%s\n\tUnable to create nav obstacle from brushmodel.  Unable to find any nav data.  If MP, was this map compiled without connectpaths?  If SP, have you seeded the navmesh properly?", "g_NavData.numResources > 0") )
        __debugbreak();
      numObstacleBounds = g_NavData.numObstacleBounds;
    }
    if ( ((int)v2 < 0 || (int)v2 >= numObstacleBounds) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 64, ASSERT_TYPE_ASSERT, "(idx >= 0 && idx < g_NavData.numObstacleBounds)", "%s\n\tUnable to find nav obstacle bounds %d within %d. Brush indices out of sync with nav data. Can be caused by something like adding a vehicle + onlyents. This can usually be fixed by recompiling the bsp.", "idx >= 0 && idx < g_NavData.numObstacleBounds", v2, numObstacleBounds) )
      __debugbreak();
  }
  return g_NavData.obstacleBounds[v2];
}

/*
==============
Nav_GetObstacleByID
==============
*/
nav_obstacle_s *Nav_GetObstacleByID(unsigned int id)
{
  nav_obstacle_s *result; 

  result = Nav_GetFirstObstacle();
  if ( !result )
    return 0i64;
  while ( result->id != id || result->m_bGlass )
  {
    result = Nav_GetNextObstacle(result);
    if ( !result )
      return 0i64;
  }
  return result;
}

/*
==============
Nav_GetUniqueObstacleID
==============
*/
__int64 Nav_GetUniqueObstacleID()
{
  __int64 result; 

  result = s_NavObstacleIDGen + 1;
  s_NavObstacleIDGen = result;
  if ( (unsigned int)result >= 0xFFFFFFFE )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 36, ASSERT_TYPE_ASSERT, "( s_NavObstacleIDGen < 0xffffffff - 1 )", (const char *)&queryFormat, "s_NavObstacleIDGen < UINT_MAX - 1") )
      __debugbreak();
    return s_NavObstacleIDGen;
  }
  return result;
}

/*
==============
Nav_MoveObstacleToSpace
==============
*/
void Nav_MoveObstacleToSpace(nav_obstacle_s *pObstacle, nav_space_s *pSpace, bool bPreserveOrderingInOldSpace)
{
  nav_space_s *v6; 
  nav_obstacle_s *v7; 
  int v9; 
  _DWORD *v11; 
  signed __int64 v12; 
  nav_obstacle_s *v13; 
  vec3_t outWorldPos; 
  vec4_t outWorldRot; 

  _RSI = pObstacle;
  if ( !pObstacle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 886, ASSERT_TYPE_ASSERT, "( pObstacle )", (const char *)&queryFormat, "pObstacle") )
    __debugbreak();
  if ( !_RSI->pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 887, ASSERT_TYPE_ASSERT, "( pObstacle->pSpace )", (const char *)&queryFormat, "pObstacle->pSpace") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 888, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( _RSI->m_bDeleteMe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 889, ASSERT_TYPE_ASSERT, "( !pObstacle->m_bDeleteMe )", (const char *)&queryFormat, "!pObstacle->m_bDeleteMe") )
    __debugbreak();
  v6 = _RSI->pSpace;
  if ( pSpace != v6 )
  {
    if ( _RSI->m_bPending )
    {
      Nav_SpaceConvertLocalToWorld(v6, &_RSI->pos, &_RSI->qRot, &outWorldPos, &outWorldRot);
      Nav_SpaceConvertWorldToLocal(pSpace, &outWorldPos, &outWorldRot, &_RSI->pos, &_RSI->qRot);
      _RSI->pSpace = pSpace;
      return;
    }
    if ( _RSI->m_bDeleteMe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 904, ASSERT_TYPE_ASSERT, "( !pObstacle->m_bDeleteMe )", (const char *)&queryFormat, "!pObstacle->m_bDeleteMe") )
      __debugbreak();
    if ( bPreserveOrderingInOldSpace )
    {
      _RSI->m_bDeleteMe = 1;
      v7 = Nav_AllocObstacle();
      _R8 = v7;
      if ( !v7 )
        return;
      v9 = 0;
      v7->id = _RSI->id;
      v7->pos.v[0] = _RSI->pos.v[0];
      v7->pos.v[1] = _RSI->pos.v[1];
      v7->pos.v[2] = _RSI->pos.v[2];
      v7->qRot.v[0] = _RSI->qRot.v[0];
      v7->qRot.v[1] = _RSI->qRot.v[1];
      v7->qRot.v[2] = _RSI->qRot.v[2];
      v7->qRot.v[3] = _RSI->qRot.v[3];
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi+38h]
        vmovups ymmword ptr [r8+38h], ymm0
      }
      v7->extents.v[0] = _RSI->extents.v[0];
      v7->extents.v[1] = _RSI->extents.v[1];
      v7->extents.v[2] = _RSI->extents.v[2];
      v7->m_NumBoundaryPlanes = _RSI->m_NumBoundaryPlanes;
      if ( _RSI->m_NumBoundaryPlanes > 0 )
      {
        v11 = (_DWORD *)&v7->m_BoundaryPlanes[0].m_Normal.v[1];
        v12 = (char *)_RSI - (char *)v7;
        do
        {
          ++v9;
          *(v11 - 1) = *(_DWORD *)((char *)v11 + v12 - 4);
          *v11 = *(_DWORD *)((char *)v11 + v12);
          v11[1] = *(_DWORD *)((char *)v11 + v12 + 4);
          v11[2] = *(_DWORD *)((char *)v11 + v12 + 8);
          v11 += 4;
        }
        while ( v9 < _RSI->m_NumBoundaryPlanes );
      }
      v13 = v7;
      v7->m_bUsesExtents = _RSI->m_bUsesExtents;
      v7->m_bGlass = _RSI->m_bGlass;
      v7->m_bDeleteMe = 0;
      v7->pSpace = _RSI->pSpace;
    }
    else
    {
      Nav_ClearCachedData(_RSI->pSpace);
      Nav_RemoveObstacleFromSpace(_RSI->pSpace, _RSI, 0);
      bfx::DestroyObstacle(&_RSI->hObstacle);
      bfx::ObstacleHandle::Release(&_RSI->hObstacle);
      v13 = _RSI;
      _RSI->pSpace = pSpace;
    }
    Nav_QueueObstacleCreation(v13);
  }
}

/*
==============
Nav_ProcessPendingObstacleCreation
==============
*/
void Nav_ProcessPendingObstacleCreation(void)
{
  __int64 v0; 
  int v1; 
  int MaxNumObstacles; 
  int v3; 
  __int64 v4; 
  int curPendingObstacleIdx; 
  nav_obstacle_s *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  nav_space_s *pSpace[33]; 

  v9 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "Nav_PendingObstacleCreate");
  v0 = 0i64;
  v1 = 0;
  MaxNumObstacles = Nav_GetMaxNumObstacles();
  v3 = 0;
  if ( MaxNumObstacles > 0 )
  {
    v4 = 0i64;
    curPendingObstacleIdx = g_NavData.curPendingObstacleIdx;
    do
    {
      if ( curPendingObstacleIdx == g_NavData.nextFreePendingObstacleIdx )
        break;
      v6 = g_NavData.pendingObstacles[curPendingObstacleIdx];
      if ( v6 )
      {
        if ( !v6->m_bPending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 314, ASSERT_TYPE_ASSERT, "( pObstacle->m_bPending )", (const char *)&queryFormat, "pObstacle->m_bPending", v9) )
          __debugbreak();
        if ( v6->m_bDeleteMe )
        {
          if ( bfx::ObstacleHandle::IsValid(&v6->hObstacle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 318, ASSERT_TYPE_ASSERT, "( !pObstacle->hObstacle.IsValid() )", (const char *)&queryFormat, "!pObstacle->hObstacle.IsValid()") )
            __debugbreak();
          if ( (v6->pNext || v6->pPrev) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 319, ASSERT_TYPE_ASSERT, "( !pObstacle->pNext && !pObstacle->pPrev )", (const char *)&queryFormat, "!pObstacle->pNext && !pObstacle->pPrev") )
            __debugbreak();
          *(_WORD *)&v6->m_bDeleteMe = 0;
          v6->pSpace = NULL;
          Nav_FreeObstacle(v6);
        }
        else
        {
          Nav_CreateObstacleHandle(v6);
          if ( bfx::ObstacleHandle::IsValid(&v6->hObstacle) )
          {
            Nav_AddObstacleToSpace(v6->pSpace, v6);
            v7 = 0i64;
            if ( v4 <= 0 )
            {
LABEL_22:
              if ( v4 < 32 )
              {
                pSpace[v4] = v6->pSpace;
                ++v1;
                ++v4;
              }
              else
              {
                LODWORD(v8) = 32;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 349, ASSERT_TYPE_ASSERT, "( numSpacesToUpdate < cMaxSpacesToUpdate )", "really? you added obstacles to %d different spaces in a single frame?", v8) )
                  __debugbreak();
              }
            }
            else
            {
              while ( pSpace[v7] != v6->pSpace )
              {
                if ( ++v7 >= v4 )
                  goto LABEL_22;
              }
            }
          }
          else
          {
            bfx::ObstacleHandle::Release(&v6->hObstacle);
            Nav_FreeObstacle(v6);
          }
          ++v3;
        }
        curPendingObstacleIdx = g_NavData.curPendingObstacleIdx;
      }
      curPendingObstacleIdx = (curPendingObstacleIdx + 1) % MaxNumObstacles;
      g_NavData.curPendingObstacleIdx = curPendingObstacleIdx;
    }
    while ( v3 < MaxNumObstacles );
  }
  if ( v1 > 0 )
  {
    do
      Nav_ClearCachedData(pSpace[v0++]);
    while ( v0 < v1 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Nav_QueueObstacleCreation
==============
*/
void Nav_QueueObstacleCreation(nav_obstacle_s *pObstacle)
{
  if ( !pObstacle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 79, ASSERT_TYPE_ASSERT, "( pObstacle )", (const char *)&queryFormat, "pObstacle") )
    __debugbreak();
  if ( bfx::ObstacleHandle::IsValid(&pObstacle->hObstacle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 80, ASSERT_TYPE_ASSERT, "(!pObstacle->hObstacle.IsValid())", "%s\n\tobstacle already created and/or needs to be cleaned up first.", "!pObstacle->hObstacle.IsValid()") )
    __debugbreak();
  if ( (pObstacle->pNext || pObstacle->pPrev) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 81, ASSERT_TYPE_ASSERT, "(!pObstacle->pNext && !pObstacle->pPrev)", "%s\n\tobstacle already in space and/or needs to be cleaned up first.", "!pObstacle->pNext && !pObstacle->pPrev") )
    __debugbreak();
  if ( !pObstacle->pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 82, ASSERT_TYPE_ASSERT, "(pObstacle->pSpace)", "%s\n\tobstacle needs to know what space it wants to be added to.", "pObstacle->pSpace") )
    __debugbreak();
  g_NavData.pendingObstacles[g_NavData.nextFreePendingObstacleIdx] = pObstacle;
  g_NavData.nextFreePendingObstacleIdx = (g_NavData.nextFreePendingObstacleIdx + 1) % Nav_GetMaxNumObstacles();
  pObstacle->m_bPending = 1;
  if ( g_NavData.nextFreePendingObstacleIdx == g_NavData.curPendingObstacleIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 87, ASSERT_TYPE_ASSERT, "( g_NavData.nextFreePendingObstacleIdx != g_NavData.curPendingObstacleIdx )", (const char *)&queryFormat, "g_NavData.nextFreePendingObstacleIdx != g_NavData.curPendingObstacleIdx") )
    __debugbreak();
}

/*
==============
Nav_ReadAndCreateObstacle
==============
*/
void Nav_ReadAndCreateObstacle(MemoryFile *memFile, nav_space_s *pSpace)
{
  nav_obstacle_s *Obstacle; 

  Obstacle = Nav_ReadObstacle(memFile, pSpace);
  if ( Obstacle->m_bPending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1177, ASSERT_TYPE_ASSERT, "( !pObstacle->m_bPending )", (const char *)&queryFormat, "!pObstacle->m_bPending") )
    __debugbreak();
  Nav_CreateObstacleHandle(Obstacle);
  Nav_AddObstacleToSpace(Obstacle->pSpace, Obstacle);
}

/*
==============
Nav_ReadObstacle
==============
*/
nav_obstacle_s *Nav_ReadObstacle(MemoryFile *memFile, nav_space_s *pSpace)
{
  nav_obstacle_s *v7; 
  __int64 v13; 
  char v15; 
  char v16; 
  char v17; 
  nav_obstacle_s *v19; 
  nav_obstacle_s *result; 
  int v27; 
  int v28; 
  unsigned int p; 
  __m256i p_8; 
  bfx::ObstacleDat v31; 
  vec3_t localPos; 
  vec4_t localRot; 
  vec3_t outWorldPos; 
  vec4_t outWorldRot; 
  nav_boundary_plane_s v36[12]; 
  char v37; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovss  xmm0, cs:__real@41700000
  }
  v7 = NULL;
  p_8.m256i_i64[0] = 0xFFFFFFFFi64;
  p_8.m256i_i32[3] = -1;
  *(_OWORD *)&p_8.m256i_u64[2] = 0ui64;
  __asm { vmovss  dword ptr [rsp+200h+p+10h], xmm0 }
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1126, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1127, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  MemFile_ReadData(memFile, 4ui64, &p);
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+100h+localPos], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+100h+localPos+4], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+100h+localPos+8], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+100h+localRot], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+100h+localRot+4], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+100h+localRot+8], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+100h+localRot+0Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm8, xmm0 }
  MemFile_ReadData(memFile, 4ui64, &v28);
  v13 = v28;
  if ( v28 > 0 )
  {
    _RBX = &v36[0].m_Normal.v[2];
    do
    {
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rbx-8], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rbx-4], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rbx], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rbx+4], xmm0 }
      _RBX += 4;
      --v13;
    }
    while ( v13 );
  }
  MemFile_ReadData(memFile, 1ui64, &v27);
  v15 = v27;
  MemFile_ReadData(memFile, 1ui64, &v27);
  v16 = v27;
  MemFile_ReadData(memFile, 1ui64, &v27);
  v17 = v27;
  MemFile_ReadData(memFile, 0x20ui64, &p_8);
  Nav_SpaceConvertLocalToWorld(pSpace, &localPos, &localRot, &outWorldPos, &outWorldRot);
  __asm
  {
    vmovups ymm0, [rsp+200h+p+8]
    vmovups ymmword ptr [rsp+200h+var_198+8], ymm0
  }
  if ( v28 > 0 )
  {
    v7 = Nav_SetupObstacleByBoundaries(pSpace, &outWorldPos, &outWorldRot, v36, v28, p, v15, &v31);
    goto LABEL_20;
  }
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 94, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 95, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  v19 = Nav_AllocObstacle();
  _RBX = v19;
  if ( v19 )
  {
    __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_198+8] }
    v19->id = p;
    __asm { vmovups ymmword ptr [rbx+38h], ymm0 }
    Nav_SpaceConvertWorldToLocal(pSpace, &outWorldPos, &outWorldRot, &v19->pos, &v19->qRot);
    __asm
    {
      vmovss  dword ptr [rbx+58h], xmm6
      vmovss  dword ptr [rbx+5Ch], xmm7
      vmovss  dword ptr [rbx+60h], xmm8
    }
    _RBX->m_NumBoundaryPlanes = 0;
    v7 = _RBX;
    _RBX->m_bUsesExtents = 1;
    _RBX->m_bGlass = v15;
    *(_WORD *)&_RBX->m_bDeleteMe = 256;
    _RBX->pSpace = pSpace;
LABEL_20:
    if ( v7 )
      goto LABEL_23;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1163, ASSERT_TYPE_ASSERT, "( pObstacle )", (const char *)&queryFormat, "pObstacle") )
    __debugbreak();
LABEL_23:
  v7->m_bDeleteMe = v16;
  result = v7;
  v7->m_bPending = v17;
  _R11 = &v37;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
Nav_ReadPendingObstacles
==============
*/
void Nav_ReadPendingObstacles(MemoryFile *memFile)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  nav_space_s *SpaceByEntNum; 
  nav_obstacle_s *Obstacle; 
  __int64 v8; 
  __int64 v9; 
  unsigned int p; 

  MemFile_ReadData(memFile, 4ui64, &p);
  v2 = (int)p;
  if ( (int)v2 > Nav_GetMaxNumObstacles() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1217, ASSERT_TYPE_ASSERT, "( numObstacles <= Nav_GetMaxNumObstacles() )", (const char *)&queryFormat, "numObstacles <= Nav_GetMaxNumObstacles()") )
    __debugbreak();
  g_NavData.nextFreePendingObstacleIdx = v2;
  g_NavData.curPendingObstacleIdx = 0;
  v3 = v2;
  if ( (int)v2 > 0 )
  {
    v4 = 0i64;
    do
    {
      MemFile_ReadData(memFile, 4ui64, &p);
      v5 = p;
      if ( p == 12345678 )
      {
        g_NavData.pendingObstacles[v4] = NULL;
      }
      else
      {
        if ( p >= 0x800 )
        {
          LODWORD(v9) = 2048;
          LODWORD(v8) = p;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1231, ASSERT_TYPE_ASSERT, "(unsigned)( spaceEntNum ) < (unsigned)( ( 2048 ) )", "spaceEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v9) )
            __debugbreak();
        }
        SpaceByEntNum = Nav_GetSpaceByEntNum(v5);
        if ( !SpaceByEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1234, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
          __debugbreak();
        Obstacle = Nav_ReadObstacle(memFile, SpaceByEntNum);
        if ( !Obstacle->m_bPending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1237, ASSERT_TYPE_ASSERT, "( pObstacle->m_bPending )", (const char *)&queryFormat, "pObstacle->m_bPending") )
          __debugbreak();
        Obstacle->pSpace = SpaceByEntNum;
        g_NavData.pendingObstacles[v4] = Obstacle;
      }
      ++v4;
    }
    while ( v4 < v3 );
  }
}

/*
==============
Nav_SetupObstacleByBoundaries
==============
*/
nav_obstacle_s *Nav_SetupObstacleByBoundaries(nav_space_s *pSpace, const vec3_t *pos, const vec4_t *qRot, const nav_boundary_plane_s *pPlanes, int numPlanes, unsigned int id, bool bGlass, const bfx::ObstacleDat *obsData)
{
  nav_obstacle_s *result; 
  __int64 v14; 
  char *v15; 
  unsigned __int64 v16; 
  _DWORD *v17; 
  char *v18; 
  __int64 v19; 
  _DWORD *v20; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 216, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 217, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  if ( numPlanes > 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 219, ASSERT_TYPE_ASSERT, "(numPlanes <= cMaxNumBoundaryPlanes)", "%s\n\tattempting to create obstacle that exceeds max number of allowable planes (%d).", "numPlanes <= cMaxNumBoundaryPlanes", 12) )
    __debugbreak();
  result = Nav_AllocObstacle();
  _RDI = result;
  if ( result )
  {
    result->id = id;
    Nav_SpaceConvertWorldToLocal(pSpace, pos, qRot, &result->pos, &result->qRot);
    v14 = 0i64;
    if ( numPlanes >= 4i64 )
    {
      v15 = (char *)((char *)pPlanes - (char *)_RDI);
      v16 = ((unsigned __int64)(numPlanes - 4i64) >> 2) + 1;
      v17 = (_DWORD *)&_RDI->m_BoundaryPlanes[0].m_Normal.v[2];
      v14 = 4 * v16;
      do
      {
        *(v17 - 2) = *(_DWORD *)&v15[(_QWORD)v17 - 108];
        *(v17 - 1) = *(_DWORD *)&v15[(_QWORD)v17 - 104];
        *v17 = *(_DWORD *)&v15[(_QWORD)v17 - 100];
        v17[1] = *(_DWORD *)&v15[(_QWORD)v17 - 96];
        v17[2] = *(_DWORD *)&v15[(_QWORD)v17 - 92];
        v17[3] = *(_DWORD *)&v15[(_QWORD)v17 - 88];
        v17[4] = *(_DWORD *)&v15[(_QWORD)v17 - 84];
        v17[5] = *(_DWORD *)&v15[(_QWORD)v17 - 80];
        v17[6] = *(_DWORD *)&v15[(_QWORD)v17 - 76];
        v17[7] = *(_DWORD *)&v15[(_QWORD)v17 - 72];
        v17[8] = *(_DWORD *)&v15[(_QWORD)v17 - 68];
        v17[9] = *(_DWORD *)&v15[(_QWORD)v17 - 64];
        v17[10] = *(_DWORD *)&v15[(_QWORD)v17 - 60];
        v17[11] = *(_DWORD *)&v15[(_QWORD)v17 - 56];
        v17[12] = *(_DWORD *)&v15[(_QWORD)v17 - 52];
        v17[13] = *(_DWORD *)&v15[(_QWORD)v17 - 48];
        v17 += 16;
        --v16;
      }
      while ( v16 );
    }
    if ( v14 < numPlanes )
    {
      v18 = (char *)((char *)pPlanes - (char *)_RDI);
      v19 = numPlanes - v14;
      v20 = (_DWORD *)&_RDI->m_BoundaryPlanes[v14].m_Normal.v[2];
      do
      {
        *(v20 - 2) = *(_DWORD *)&v18[(_QWORD)v20 - 108];
        *(v20 - 1) = *(_DWORD *)&v18[(_QWORD)v20 - 104];
        *v20 = *(_DWORD *)&v18[(_QWORD)v20 - 100];
        v20[1] = *(_DWORD *)&v18[(_QWORD)v20 - 96];
        v20 += 4;
        --v19;
      }
      while ( v19 );
    }
    _RDI->m_bGlass = bGlass;
    _RAX = obsData;
    _RDI->m_NumBoundaryPlanes = numPlanes;
    _RDI->m_bUsesExtents = 0;
    *(_WORD *)&_RDI->m_bDeleteMe = 256;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rdi+38h], ymm0
    }
    _RDI->pSpace = pSpace;
    return _RDI;
  }
  return result;
}

/*
==============
Nav_SetupObstacleByExtents
==============
*/
nav_obstacle_s *Nav_SetupObstacleByExtents(nav_space_s *pSpace, const vec3_t *pos, const vec4_t *qRot, const bfx::BoxExtents *extents, unsigned int id, bool bGlass, const bfx::ObstacleDat *obsData)
{
  nav_obstacle_s *result; 
  vec3_t *p_pos; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 94, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 95, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  result = Nav_AllocObstacle();
  _RBX = result;
  if ( result )
  {
    p_pos = &result->pos;
    result->id = id;
    _RAX = obsData;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbx+38h], ymm0
    }
    Nav_SpaceConvertWorldToLocal(pSpace, pos, qRot, p_pos, &_RBX->qRot);
    _RBX->extents.v[0] = extents->m_length;
    _RBX->extents.v[1] = extents->m_width;
    _RBX->extents.v[2] = extents->m_height;
    _RBX->m_bGlass = bGlass;
    result = _RBX;
    _RBX->m_NumBoundaryPlanes = 0;
    _RBX->m_bUsesExtents = 1;
    *(_WORD *)&_RBX->m_bDeleteMe = 256;
    _RBX->pSpace = pSpace;
  }
  return result;
}

/*
==============
Nav_TransferObstaclesToSpace
==============
*/
void Nav_TransferObstaclesToSpace(nav_space_s *pNewSpace)
{
  int i; 
  nav_obstacle_s *v3; 
  nav_space_s *pSpace; 
  bfx::ObstacleDat result; 
  vec3_t outWorldPos; 
  vec4_t outWorldRot; 

  if ( !pNewSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1040, ASSERT_TYPE_ASSERT, "( pNewSpace )", (const char *)&queryFormat, "pNewSpace") )
    __debugbreak();
  for ( i = g_NavData.obstaclePoolInfo.firstUsed; i >= 0; i = v3->nextIdx )
  {
    v3 = &g_NavData.obstacles[i];
    if ( !v3->m_bDeleteMe )
    {
      pSpace = v3->pSpace;
      if ( pSpace != pNewSpace )
      {
        Nav_SpaceConvertLocalToWorld(pSpace, &v3->pos, &v3->qRot, &outWorldPos, &outWorldRot);
        bfx::ObstacleHandle::GetObstacleDat(&v3->hObstacle, &result);
        while ( (result.m_layerMask & 1) == 0 )
          ;
        if ( Nav_FindMostLikelySpace(&outWorldPos, NAV_LAYER_HUMAN, NULL) == pNewSpace )
          Nav_MoveObstacleToSpace(v3, pNewSpace, 1);
      }
    }
  }
}

/*
==============
Nav_WriteObstacle
==============
*/
void Nav_WriteObstacle(MemoryFile *memFile, nav_obstacle_s *pObstacle)
{
  int v4; 
  bfx::ObstacleDat result; 
  unsigned int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1087, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !pObstacle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1088, ASSERT_TYPE_ASSERT, "( pObstacle )", (const char *)&queryFormat, "pObstacle") )
    __debugbreak();
  bfx::ObstacleHandle::GetObstacleDat(&pObstacle->hObstacle, &result);
  p = pObstacle->id;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteData(memFile, 0xCui64, &pObstacle->pos);
  MemFile_WriteData(memFile, 0x10ui64, &pObstacle->qRot);
  MemFile_WriteData(memFile, 0xCui64, &pObstacle->extents);
  p = pObstacle->m_NumBoundaryPlanes;
  MemFile_WriteData(memFile, 4ui64, &p);
  v4 = 0;
  if ( pObstacle->m_NumBoundaryPlanes > 0 )
  {
    _RBP = &pObstacle->m_BoundaryPlanes[0].m_DistFromCenter;
    do
    {
      MemFile_WriteData(memFile, 0xCui64, &pObstacle->m_BoundaryPlanes[v4]);
      __asm { vmovss  xmm1, dword ptr [rbp+0]; value }
      MemFile_WriteFloat(memFile, *(float *)&_XMM1);
      ++v4;
      _RBP += 4;
    }
    while ( v4 < pObstacle->m_NumBoundaryPlanes );
  }
  LOBYTE(p) = pObstacle->m_bGlass;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = pObstacle->m_bDeleteMe;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = pObstacle->m_bPending;
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteData(memFile, 0x20ui64, &result);
}

/*
==============
Nav_WritePendingObstacles
==============
*/
void Nav_WritePendingObstacles(MemoryFile *memFile)
{
  unsigned int curPendingObstacleIdx; 
  int MaxNumObstacles; 
  nav_obstacle_s *v4; 
  int v5; 
  __int64 v8; 
  __int64 v9; 
  bfx::ObstacleDat result; 
  int p; 
  int parentEntNum; 

  curPendingObstacleIdx = g_NavData.curPendingObstacleIdx;
  MaxNumObstacles = Nav_GetMaxNumObstacles();
  p = (MaxNumObstacles + g_NavData.nextFreePendingObstacleIdx - g_NavData.curPendingObstacleIdx) % MaxNumObstacles;
  MemFile_WriteData(memFile, 4ui64, &p);
  for ( ; curPendingObstacleIdx != g_NavData.nextFreePendingObstacleIdx; curPendingObstacleIdx = (int)(curPendingObstacleIdx + 1) % MaxNumObstacles )
  {
    if ( curPendingObstacleIdx >= MaxNumObstacles )
    {
      LODWORD(v9) = MaxNumObstacles;
      LODWORD(v8) = curPendingObstacleIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1196, ASSERT_TYPE_ASSERT, "(unsigned)( iPending ) < (unsigned)( cMaxObstacles )", "iPending doesn't index cMaxObstacles\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v4 = g_NavData.pendingObstacles[curPendingObstacleIdx];
    if ( v4 )
    {
      parentEntNum = v4->pSpace->parentEntNum;
      MemFile_WriteData(memFile, 4ui64, &parentEntNum);
      if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1087, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
        __debugbreak();
      bfx::ObstacleHandle::GetObstacleDat(&v4->hObstacle, &result);
      p = v4->id;
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteData(memFile, 0xCui64, &v4->pos);
      MemFile_WriteData(memFile, 0x10ui64, &v4->qRot);
      MemFile_WriteData(memFile, 0xCui64, &v4->extents);
      p = v4->m_NumBoundaryPlanes;
      MemFile_WriteData(memFile, 4ui64, &p);
      v5 = 0;
      if ( v4->m_NumBoundaryPlanes > 0 )
      {
        _RBP = &v4->m_BoundaryPlanes[0].m_DistFromCenter;
        do
        {
          MemFile_WriteData(memFile, 0xCui64, &v4->m_BoundaryPlanes[v5]);
          __asm { vmovss  xmm1, dword ptr [rbp+0]; value }
          MemFile_WriteFloat(memFile, *(float *)&_XMM1);
          ++v5;
          _RBP += 4;
        }
        while ( v5 < v4->m_NumBoundaryPlanes );
      }
      LOBYTE(p) = v4->m_bGlass;
      MemFile_WriteData(memFile, 1ui64, &p);
      LOBYTE(p) = v4->m_bDeleteMe;
      MemFile_WriteData(memFile, 1ui64, &p);
      LOBYTE(p) = v4->m_bPending;
      MemFile_WriteData(memFile, 1ui64, &p);
      MemFile_WriteData(memFile, 0x20ui64, &result);
    }
    else
    {
      p = 12345678;
      MemFile_WriteData(memFile, 4ui64, &p);
    }
  }
}

