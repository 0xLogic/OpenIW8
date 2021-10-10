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
  bfx::Vector3 *Pos; 
  float m_y; 
  float m_x; 
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
      Pos = bfx::SpaceHandle::GetPos(&pSpace->hSpace, &result);
      m_y = Pos->m_y;
      m_x = Pos->m_x;
      parentEntNum = pSpace->parentEntNum;
      v1[2] = Pos->m_z;
      v1[0] = m_x;
      v1[1] = m_y;
      VecNCompareCustomEpsilon(g_entities[parentEntNum].r.currentOrigin.v, v1, 0.001, 3);
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
  __int128 v1; 
  __int128 v2; 
  char v3; 
  nav_obstacle_s *i; 
  __int64 id; 
  __int64 v7; 
  char v8; 
  int v9; 
  unsigned __int8 *v10; 
  const char *text; 
  __int128 v12; 
  nav_obstacle_s *FirstObstacle; 
  __int64 v14; 
  gentity_s *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  vec3_t outWorldPos; 
  vec4_t outWorldRot; 
  char v21[2048]; 
  __int128 v22; 

  v2 = LODWORD(FLOAT_330_0);
  v3 = 0;
  if ( g_NavData.obstaclePoolInfo.count > 384 )
    goto LABEL_13;
  v22 = v1;
  memset_0(v21, 0, sizeof(v21));
  for ( i = Nav_GetFirstObstacle(); i; i = Nav_GetNextObstacle(i) )
  {
    id = i->id;
    if ( (unsigned int)id < 0x800 && !i->m_bGlass )
    {
      v7 = (unsigned int)id;
      v8 = v21[id];
      if ( v8 != -1 )
        v21[v7] = v8 + 1;
    }
  }
  v9 = 0;
  v10 = (unsigned __int8 *)v21;
  do
  {
    if ( *v10 > 3u )
    {
      v3 = 1;
      text = j_va("%d obstacles for ent %d", *v10, (unsigned int)v9);
      G_Main_AddDebugString2D(100.0, *(float *)&v2, &colorRed, 1.25, text);
      v12 = v2;
      *(float *)&v12 = *(float *)&v2 + 14.0;
      v2 = v12;
    }
    ++v9;
    ++v10;
  }
  while ( v9 < 2048 );
  if ( v3 )
  {
LABEL_13:
    if ( bFirstCheck )
    {
      FirstObstacle = Nav_GetFirstObstacle();
      Com_Printf(18, "\nDumping Obstacle List...\n");
      for ( ; FirstObstacle; FirstObstacle = Nav_GetNextObstacle(FirstObstacle) )
      {
        v14 = FirstObstacle->id;
        if ( (unsigned int)v14 >= 0x800 )
        {
          Nav_SpaceConvertLocalToWorld(FirstObstacle->pSpace, &FirstObstacle->pos, &FirstObstacle->qRot, &outWorldPos, &outWorldRot);
          v18 = vtos(&outWorldPos);
          Com_Printf(18, "Obstacle with ID %d at pos %s\n", FirstObstacle->id, v18);
        }
        else
        {
          v15 = &g_entities[v14];
          v16 = SL_ConvertToString(v15->targetname);
          v17 = vtos(&v15->r.currentOrigin);
          Com_Printf(18, "Obstacle for Ent %d at pos %s with targetname %s \n", FirstObstacle->id, v17, v16);
        }
      }
      Com_Printf(18, "End Obstacle List...\n");
    }
    G_Main_AddDebugString2D(100.0, *(float *)&v2, &colorRed, 1.25, "Check console for obstacle dump.");
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
void Nav_CreateGlassObstacles(void)
{
  int v0; 
  nav_glass_bounds_s **glassBounds; 
  nav_glass_bounds_s *v2; 
  nav_space_s *MostLikelySpace; 
  unsigned int m_GlassPieceIndex; 
  int v5; 
  nav_glass_bounds_s **v6; 
  nav_glass_bounds_s *v7; 
  const vec3_t *p_m_Pos; 
  int m_NumBoundaries; 
  const nav_boundary_plane_s *m_Boundaries; 
  __int64 v11; 
  unsigned __int128 v12; 
  __m256i v13; 

  v0 = 0;
  if ( g_NavData.numGlassBounds > 0 )
  {
    glassBounds = g_NavData.glassBounds;
    do
    {
      v2 = *glassBounds;
      if ( G_Glass_IsPieceSolid((*glassBounds)->m_GlassPieceIndex - 1) )
      {
        MostLikelySpace = Nav_FindMostLikelySpace(&v2->m_Pos, NAV_LAYER_HUMAN, NULL);
        if ( !MostLikelySpace )
          MostLikelySpace = Nav_GetDefaultSpace();
        m_GlassPieceIndex = v2->m_GlassPieceIndex;
        if ( !MostLikelySpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 651, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
          __debugbreak();
        if ( !G_Glass_IsIndexValid(m_GlassPieceIndex - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 652, ASSERT_TYPE_ASSERT, "( G_Glass_IsIndexValid( navGlassPieceIndex - 1 ) )", (const char *)&queryFormat, "G_Glass_IsIndexValid( navGlassPieceIndex - 1 )") )
          __debugbreak();
        v5 = 0;
        if ( g_NavData.numGlassBounds <= 0 )
        {
LABEL_16:
          LODWORD(v11) = m_GlassPieceIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 674, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find glass bounds for glass %d.  Has nav-blocking func_glass changed without rebuilding navmesh?", v11) )
            __debugbreak();
        }
        else
        {
          v6 = g_NavData.glassBounds;
          while ( 1 )
          {
            v7 = *v6;
            if ( (*v6)->m_GlassPieceIndex == m_GlassPieceIndex )
              break;
            ++v5;
            ++v6;
            if ( v5 >= g_NavData.numGlassBounds )
              goto LABEL_16;
          }
          p_m_Pos = &v7->m_Pos;
          m_NumBoundaries = v7->m_NumBoundaries;
          m_Boundaries = v7->m_Boundaries;
          *((float *)&v12 + 2) = FLOAT_15_0;
          *(_QWORD *)&v12 = 0xFFFFFFFFi64;
          HIDWORD(v12) = -8065;
          v13 = (__m256i)v12;
          Nav_CreateObstacleNow(MostLikelySpace, p_m_Pos, &quat_identity, m_Boundaries, m_NumBoundaries, m_GlassPieceIndex, 1, (const bfx::ObstacleDat *)&v13);
        }
      }
      ++v0;
      ++glassBounds;
    }
    while ( v0 < g_NavData.numGlassBounds );
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
  int v4; 
  int *v5; 
  signed int v8; 
  nav_modifier_s **modifiers; 
  nav_modifier_s *v10; 
  scr_string_t m_Target; 
  unsigned int m_LayerFlags; 
  AINavLayer v13; 
  unsigned int v14; 
  nav_space_s *MostLikelySpace; 
  float m_Weight; 
  nav_space_s *v17; 
  double v18; 
  bfx::ObstacleDat v20; 

  numModifiers = g_NavData.numModifiers;
  v4 = 0;
  v5 = outModifierID;
  v8 = -1;
  if ( g_NavData.numModifiers > 0 )
  {
    modifiers = g_NavData.modifiers;
    do
    {
      v10 = *modifiers;
      if ( key == scr_const.target )
      {
        m_Target = v10->m_Target;
      }
      else if ( key == scr_const.targetname )
      {
        m_Target = v10->m_TargetName;
      }
      else if ( key == scr_const.script_noteworthy )
      {
        m_Target = v10->m_ScriptNoteworthy;
      }
      else
      {
        if ( key != scr_const.script_linkname )
          break;
        m_Target = v10->m_ScriptLinkName;
      }
      if ( m_Target == name && !v10->m_bActiveOnLoad )
      {
        v13 = NAV_LAYER_HUMAN;
        v14 = 0;
        while ( 1 )
        {
          m_LayerFlags = v10->m_LayerFlags;
          if ( _bittest((const int *)&m_LayerFlags, v14) )
            break;
          if ( (int)++v14 >= 3 )
            goto LABEL_18;
        }
        v13 = v14;
LABEL_18:
        MostLikelySpace = Nav_FindMostLikelySpace(&v10->m_Pos, v13, NULL);
        m_Weight = v10->m_Weight;
        v17 = MostLikelySpace;
        v20.m_obstacleName = NULL;
        v20.m_layerMask = v10->m_LayerFlags;
        v20.m_userData = v10->m_UserFlags;
        v18 = I_fclamp(m_Weight, 1.0, 15.0);
        v20.m_obstacleBehavior = OBSTACLE_BEHAVIOR_NOEFFECT_PENALTY;
        v20.m_obstacleBlockageFlags = -8065;
        v20.m_penaltyMult = *(float *)&v18;
        if ( v8 < 0 )
        {
          v8 = s_NavObstacleIDGen + 1;
          s_NavObstacleIDGen = v8;
          if ( (unsigned int)v8 >= 0xFFFFFFFE )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 36, ASSERT_TYPE_ASSERT, "( s_NavObstacleIDGen < 0xffffffff - 1 )", (const char *)&queryFormat, "s_NavObstacleIDGen < UINT_MAX - 1") )
              __debugbreak();
            v8 = s_NavObstacleIDGen;
          }
        }
        Nav_CreateObstacle(v17, &v10->m_Pos, &quat_identity, v10->m_Boundaries, v10->m_NumBoundaries, v8, 0, &v20);
        numModifiers = g_NavData.numModifiers;
      }
      ++v4;
      ++modifiers;
    }
    while ( v4 < numModifiers );
    v5 = outModifierID;
  }
  *v5 = v8;
  return v8 >= 0;
}

/*
==============
Nav_CreateModifiers
==============
*/
void Nav_CreateModifiers(void)
{
  int numModifiers; 
  int v1; 
  nav_modifier_s **modifiers; 
  nav_modifier_s *v3; 
  unsigned int m_LayerFlags; 
  AINavLayer v5; 
  unsigned int v6; 
  nav_space_s *MostLikelySpace; 
  double v8; 
  unsigned int v9; 
  const nav_boundary_plane_s *m_Boundaries; 
  int fmt; 
  bfx::ObstacleDat v12; 
  bfx::ObstacleDat v13; 

  numModifiers = g_NavData.numModifiers;
  v1 = 0;
  if ( g_NavData.numModifiers > 0 )
  {
    modifiers = g_NavData.modifiers;
    do
    {
      v3 = *modifiers;
      if ( (*modifiers)->m_bActiveOnLoad )
      {
        v5 = NAV_LAYER_HUMAN;
        v6 = 0;
        while ( 1 )
        {
          m_LayerFlags = v3->m_LayerFlags;
          if ( _bittest((const int *)&m_LayerFlags, v6) )
            break;
          if ( (int)++v6 >= 3 )
            goto LABEL_9;
        }
        v5 = v6;
LABEL_9:
        MostLikelySpace = Nav_FindMostLikelySpace(&v3->m_Pos, v5, NULL);
        v12.m_layerMask = v3->m_LayerFlags;
        *(_OWORD *)&v12.m_userData = v3->m_UserFlags;
        v8 = I_fclamp(v3->m_Weight, 1.0, 15.0);
        v9 = s_NavObstacleIDGen + 1;
        v12.m_obstacleBehavior = OBSTACLE_BEHAVIOR_NOEFFECT_PENALTY;
        v12.m_obstacleBlockageFlags = -8065;
        s_NavObstacleIDGen = v9;
        v12.m_penaltyMult = *(float *)&v8;
        if ( v9 >= 0xFFFFFFFE )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 36, ASSERT_TYPE_ASSERT, "( s_NavObstacleIDGen < 0xffffffff - 1 )", (const char *)&queryFormat, "s_NavObstacleIDGen < UINT_MAX - 1") )
            __debugbreak();
          v9 = s_NavObstacleIDGen;
        }
        m_Boundaries = v3->m_Boundaries;
        fmt = v3->m_NumBoundaries;
        v13 = v12;
        Nav_CreateObstacleNow(MostLikelySpace, &v3->m_Pos, &quat_identity, m_Boundaries, fmt, v9, 0, &v13);
        numModifiers = g_NavData.numModifiers;
      }
      ++v1;
      ++modifiers;
    }
    while ( v1 < numModifiers );
  }
}

/*
==============
Nav_CreateObstacle
==============
*/
bool Nav_CreateObstacle(nav_space_s *pSpace, const vec3_t *pos, const vec4_t *qRot, const nav_boundary_plane_s *pPlanes, int numPlanes, unsigned int id, bool bGlass, const bfx::ObstacleDat *obsData)
{
  nav_obstacle_s *v12; 
  bfx::ObstacleDat v14; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 253, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 254, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  v14 = *obsData;
  v12 = Nav_SetupObstacleByBoundaries(pSpace, pos, qRot, pPlanes, numPlanes, id, bGlass, &v14);
  if ( v12 )
  {
    Nav_QueueObstacleCreation(v12);
    LOBYTE(v12) = 1;
  }
  return (char)v12;
}

/*
==============
Nav_CreateObstacle
==============
*/
bool Nav_CreateObstacle(nav_space_s *pSpace, const vec3_t *pos, const vec4_t *qRot, const bfx::BoxExtents *extents, unsigned int id, bool bGlass, const bfx::ObstacleDat *obsData)
{
  double v11; 
  bfx::ObstacleDat v12; 
  nav_obstacle_s *v13; 
  bfx::BoxExtents v15; 
  bfx::ObstacleDat v16; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 165, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 166, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  v11 = *(double *)&extents->m_length;
  v12 = *obsData;
  v15.m_height = extents->m_height;
  v16 = v12;
  *(double *)&v15.m_length = v11;
  v13 = Nav_SetupObstacleByExtents(pSpace, pos, qRot, &v15, id, bGlass, &v16);
  if ( v13 )
  {
    Nav_QueueObstacleCreation(v13);
    LOBYTE(v13) = 1;
  }
  return (char)v13;
}

/*
==============
Nav_CreateObstacleByBounds
==============
*/
__int64 Nav_CreateObstacleByBounds(nav_space_s *pSpace, const Bounds *bounds, const vec3_t *angles, float penalty, unsigned int layerFlags, unsigned int blockageFlags)
{
  float v9; 
  float v10; 
  float v11; 
  unsigned int v12; 
  nav_obstacle_s *v13; 
  nav_obstacle_s *v14; 
  bfx::ObstacleDat v16; 
  vec4_t quat; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 519, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  v9 = 2.0 * bounds->halfSize.v[0];
  v10 = 2.0 * bounds->halfSize.v[1];
  v11 = 2.0 * bounds->halfSize.v[2];
  v16.m_layerMask = layerFlags;
  v16.m_obstacleBlockageFlags = blockageFlags;
  *(_OWORD *)&v16.m_userData = 0ui64;
  v16.m_obstacleBehavior = (blockageFlags & 0x2000) != 0 ? OBSTACLE_BEHAVIOR_PENALTY_IMPASSABLE : OBSTACLE_BEHAVIOR_AUTOMATIC;
  v16.m_penaltyMult = penalty;
  AnglesToQuat(angles, &quat);
  v12 = s_NavObstacleIDGen + 1;
  s_NavObstacleIDGen = v12;
  if ( v12 >= 0xFFFFFFFE )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 36, ASSERT_TYPE_ASSERT, "( s_NavObstacleIDGen < 0xffffffff - 1 )", (const char *)&queryFormat, "s_NavObstacleIDGen < UINT_MAX - 1") )
      __debugbreak();
    v12 = s_NavObstacleIDGen;
  }
  if ( v12 <= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 535, ASSERT_TYPE_ASSERT, "( id > ( 2048 ) )", (const char *)&queryFormat, "id > MAX_GENTITIES") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 165, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 166, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 94, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 95, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  v13 = Nav_AllocObstacle();
  v14 = v13;
  if ( v13 )
  {
    v13->id = v12;
    v13->obsData = v16;
    Nav_SpaceConvertWorldToLocal(pSpace, &bounds->midPoint, &quat, &v13->pos, &v13->qRot);
    v14->extents.v[0] = v9;
    v14->extents.v[1] = v10;
    v14->extents.v[2] = v11;
    v14->m_NumBoundaryPlanes = 0;
    *(_DWORD *)&v14->m_bUsesExtents = 16777217;
    v14->pSpace = pSpace;
    Nav_QueueObstacleCreation(v14);
  }
  return v12;
}

/*
==============
Nav_CreateObstacleByEnt
==============
*/
void Nav_CreateObstacleByEnt(nav_space_s *pSpace, const gentity_s *pEnt, float penalty, unsigned int layerFlags, unsigned int blockageFlags, bool bNow, unsigned int userDataFlags)
{
  __int64 v7; 
  const gentity_s *v8; 
  nav_space_s *v9; 
  int v10; 
  bool v11; 
  nav_obstacle_s *FirstObstacle; 
  __int64 v13; 
  nav_obstacle_s *v14; 
  nav_space_s *v15; 
  __int64 v16; 
  nav_space_s *v17; 
  unsigned int v18; 
  int v19; 
  __int64 brushModel; 
  unsigned __int16 navObstacleIdx; 
  int numObstacleBounds; 
  nav_obstacle_bounds_s *v23; 
  vec3_t *p_currentAngles; 
  __int64 v25; 
  nav_obstacle_hull_s *m_Hulls; 
  vec3_t *p_m_Offset; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  nav_obstacle_s *v33; 
  nav_obstacle_s *v34; 
  const nav_boundary_plane_s *m_Boundaries; 
  __m128 v36; 
  float v37; 
  unsigned int v38; 
  nav_obstacle_s *v39; 
  nav_obstacle_s *v40; 
  nav_obstacle_s *v41; 
  nav_obstacle_s *v42; 
  int fmt; 
  __int64 v44; 
  __int64 v45; 
  bool v46; 
  bool bShuttingDown; 
  int number; 
  int v49; 
  float v50; 
  double v51; 
  __int64 v52; 
  float v53; 
  __m256i v54; 
  __m256i v58; 
  vec3_t worldPos; 
  vec4_t quat; 
  __m128 v61; 
  __int64 v62; 
  tmat33_t<vec3_t> axis; 
  nav_space_s *pSpacea[32]; 

  v7 = 0i64;
  v8 = pEnt;
  v9 = pSpace;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 415, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 416, ASSERT_TYPE_ASSERT, "( pEnt )", (const char *)&queryFormat, "pEnt") )
    __debugbreak();
  if ( (((userDataFlags & 0xF7FFFFFF) != 0) & _bittest((const signed __int32 *)&userDataFlags, 0x1Bu)) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 417, ASSERT_TYPE_ASSERT, "(( ( userDataFlags & NAV_AREAMASK_PLAYER_OBSTACLE ) == 0 ) || ( ( userDataFlags & ~NAV_AREAMASK_PLAYER_OBSTACLE ) == 0 ))", "%s\n\tCan't set player obstacle user data flag when setting other user data flags", "( ( userDataFlags & NAV_AREAMASK_PLAYER_OBSTACLE ) == 0 ) || ( ( userDataFlags & ~NAV_AREAMASK_PLAYER_OBSTACLE ) == 0 )") )
    __debugbreak();
  if ( Nav_MeshLoaded() )
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 508, ASSERT_TYPE_ASSERT, "( pEnt )", (const char *)&queryFormat, "pEnt") )
      __debugbreak();
    number = v8->s.number;
    v10 = 0;
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Nav_DestroyObstacleByID");
    bShuttingDown = g_NavData.bShuttingDown;
    v11 = !g_NavData.bShuttingDown;
    v46 = !g_NavData.bShuttingDown;
    FirstObstacle = Nav_GetFirstObstacle();
    if ( FirstObstacle )
    {
      v13 = 0i64;
      do
      {
        v14 = FirstObstacle;
        FirstObstacle = Nav_GetNextObstacle(FirstObstacle);
        if ( v14->id == number && !v14->m_bGlass )
        {
          v15 = v14->pSpace;
          if ( v15 )
          {
            v16 = 0i64;
            if ( v13 <= 0 )
            {
LABEL_22:
              if ( v13 >= 32 )
              {
                LODWORD(v45) = 32;
                LODWORD(v44) = 32;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 626, ASSERT_TYPE_ASSERT, "(numSpaces < cMaxNumSpaces)", "%s\n\ta single ent produced more than %d obstacles spread across more than %d spaces? really?", "numSpaces < cMaxNumSpaces", v44, v45) )
                  __debugbreak();
              }
              ++v10;
              pSpacea[v13++] = v14->pSpace;
            }
            else
            {
              while ( pSpacea[v16] != v15 )
              {
                if ( ++v16 >= v13 )
                  goto LABEL_22;
              }
            }
          }
          v14->m_bDeleteMe = 1;
        }
      }
      while ( FirstObstacle );
      v9 = pSpace;
      v7 = 0i64;
      v11 = v46;
      v8 = pEnt;
    }
    if ( bShuttingDown && v10 > 0 )
    {
      do
      {
        v17 = pSpacea[v7];
        Nav_RemoveObstaclesMarkedForDeleteFromSpace(v17, v11);
        Nav_ClearCachedData(v17);
        ++v7;
      }
      while ( v7 < v10 );
    }
    Sys_ProfEndNamedEvent();
    v18 = v8->s.number;
    v54.m256i_i32[0] = layerFlags;
    v19 = 0;
    if ( blockageFlags == 0x2000 )
      v19 = 3;
    v54.m256i_i32[3] = blockageFlags;
    v54.m256i_i32[1] = v19;
    *(_OWORD *)&v54.m256i_u64[2] = userDataFlags;
    *(float *)&v54.m256i_i32[2] = penalty;
    if ( v8->r.modelType == 5 && (brushModel = v8->s.index.brushModel, (_DWORD)brushModel) && (navObstacleIdx = cm.mapEnts->cmodels[brushModel].navObstacleIdx, navObstacleIdx != 0xFFFF) )
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
          LODWORD(v45) = numObstacleBounds;
          LODWORD(v44) = navObstacleIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 64, ASSERT_TYPE_ASSERT, "(idx >= 0 && idx < g_NavData.numObstacleBounds)", "%s\n\tUnable to find nav obstacle bounds %d within %d. Brush indices out of sync with nav data. Can be caused by something like adding a vehicle + onlyents. This can usually be fixed by recompiling the bsp.", "idx >= 0 && idx < g_NavData.numObstacleBounds", v44, v45) )
            __debugbreak();
        }
      }
      v23 = g_NavData.obstacleBounds[navObstacleIdx];
      if ( v23 )
      {
        if ( v23->m_NumHulls > 0 )
        {
          p_currentAngles = &pEnt->r.currentAngles;
          AnglesToQuat(&pEnt->r.currentAngles, &quat);
          v49 = 0;
          if ( v23->m_NumHulls > 0 )
          {
            v25 = 0i64;
            do
            {
              m_Hulls = v23->m_Hulls;
              AnglesToAxis(p_currentAngles, &axis);
              p_m_Offset = &m_Hulls[v25].m_Offset;
              if ( p_m_Offset == &worldPos && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
                __debugbreak();
              worldPos.v[0] = (float)((float)(axis.m[0].v[0] * m_Hulls[v25].m_Offset.v[0]) + (float)(axis.m[1].v[0] * m_Hulls[v25].m_Offset.v[1])) + (float)(axis.m[2].v[0] * m_Hulls[v25].m_Offset.v[2]);
              v28 = worldPos.v[0] + pEnt->r.currentOrigin.v[0];
              v29 = (float)((float)((float)(axis.m[0].v[1] * m_Hulls[v25].m_Offset.v[0]) + (float)(axis.m[1].v[1] * m_Hulls[v25].m_Offset.v[1])) + (float)(axis.m[2].v[1] * m_Hulls[v25].m_Offset.v[2])) + pEnt->r.currentOrigin.v[1];
              worldPos.v[1] = (float)((float)(axis.m[0].v[1] * m_Hulls[v25].m_Offset.v[0]) + (float)(axis.m[1].v[1] * m_Hulls[v25].m_Offset.v[1])) + (float)(axis.m[2].v[1] * m_Hulls[v25].m_Offset.v[2]);
              v30 = m_Hulls[v25].m_Offset.v[1];
              v31 = m_Hulls[v25].m_Offset.v[2];
              v32 = p_m_Offset->v[0] * axis.m[0].v[2];
              worldPos.v[1] = v29;
              worldPos.v[2] = (float)((float)(v32 + (float)(v30 * axis.m[1].v[2])) + (float)(v31 * axis.m[2].v[2])) + pEnt->r.currentOrigin.v[2];
              worldPos.v[0] = v28;
              if ( m_Hulls[v25].m_bUseBounds )
              {
                *(float *)&v51 = 2.0 * m_Hulls[v25].m_BoundsX;
                *((float *)&v51 + 1) = 2.0 * m_Hulls[v25].m_BoundsY;
                if ( bNow )
                {
                  v61.m128_f32[2] = 2.0 * m_Hulls[v25].m_BoundsZ;
                  v58 = v54;
                  *(double *)v61.m128_u64 = v51;
                  Nav_CreateObstacleNow(v9, &worldPos, &quat, (const bfx::BoxExtents *)&v61, v18, 0, (const bfx::ObstacleDat *)&v58);
                }
                else
                {
                  v50 = 2.0 * m_Hulls[v25].m_BoundsZ;
                  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 165, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
                    __debugbreak();
                  if ( !bfx::SpaceHandle::IsValid(&v9->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 166, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
                    __debugbreak();
                  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 94, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
                    __debugbreak();
                  if ( !bfx::SpaceHandle::IsValid(&v9->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 95, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
                    __debugbreak();
                  v33 = Nav_AllocObstacle();
                  v34 = v33;
                  if ( v33 )
                  {
                    v33->id = v18;
                    v33->obsData = (bfx::ObstacleDat)v54;
                    Nav_SpaceConvertWorldToLocal(v9, &worldPos, &quat, &v33->pos, &v33->qRot);
                    *(double *)v34->extents.v = v51;
                    v34->extents.v[2] = v50;
                    v34->m_NumBoundaryPlanes = 0;
                    *(_DWORD *)&v34->m_bUsesExtents = 16777217;
                    v34->pSpace = v9;
                    Nav_QueueObstacleCreation(v34);
                  }
                }
              }
              else
              {
                m_Boundaries = m_Hulls[v25].m_Boundaries;
                fmt = m_Hulls[v25].m_NumBoundaries;
                v58 = v54;
                if ( bNow )
                  Nav_CreateObstacleNow(v9, &worldPos, &quat, m_Boundaries, fmt, v18, 0, (const bfx::ObstacleDat *)&v58);
                else
                  Nav_CreateObstacle(v9, &worldPos, &quat, m_Boundaries, fmt, v18, 0, (const bfx::ObstacleDat *)&v58);
              }
              ++v25;
              p_currentAngles = &pEnt->r.currentAngles;
              ++v49;
            }
            while ( v49 < v23->m_NumHulls );
          }
        }
      }
    }
    else
    {
      v36 = (__m128)*(unsigned __int64 *)&v8->r.box.halfSize.y;
      v61 = *(__m128 *)v8->r.box.midPoint.v;
      v62 = v36.m128_i64[0];
      v37 = v61.m128_f32[1] + v8->r.currentOrigin.v[1];
      worldPos.v[0] = v61.m128_f32[0] + v8->r.currentOrigin.v[0];
      worldPos.v[2] = (float)(_mm_shuffle_ps(v61, v61, 170).m128_f32[0] + -18.0) + v8->r.currentOrigin.v[2];
      *(float *)&v52 = 2.0 * v61.m128_f32[3];
      worldPos.v[1] = v37;
      v53 = (float)(_mm_shuffle_ps(v36, v36, 85).m128_f32[0] + 18.0) * 2.0;
      *((float *)&v52 + 1) = 2.0 * *(float *)&v62;
      AnglesToQuat(&v8->r.currentAngles, &quat);
      v38 = v8->s.number;
      if ( bNow )
      {
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 185, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
          __debugbreak();
        if ( !bfx::SpaceHandle::IsValid(&v9->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 186, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
          __debugbreak();
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 94, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
          __debugbreak();
        if ( !bfx::SpaceHandle::IsValid(&v9->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 95, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
          __debugbreak();
        v39 = Nav_AllocObstacle();
        v40 = v39;
        if ( v39 )
        {
          v39->id = v38;
          v39->obsData = (bfx::ObstacleDat)v54;
          Nav_SpaceConvertWorldToLocal(v9, &worldPos, &quat, &v39->pos, &v39->qRot);
          *(_QWORD *)v40->extents.v = v52;
          v40->extents.v[2] = v53;
          v40->m_NumBoundaryPlanes = 0;
          *(_DWORD *)&v40->m_bUsesExtents = 16777217;
          v40->pSpace = v9;
          Nav_CreateObstacleHandle(v40);
          if ( bfx::ObstacleHandle::IsValid(&v40->hObstacle) )
          {
            Nav_AddObstacleToSpace(v9, v40);
            Nav_ClearCachedData(v9);
          }
          else
          {
            bfx::ObstacleHandle::Release(&v40->hObstacle);
            Nav_FreeObstacle(v40);
          }
        }
      }
      else
      {
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 165, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
          __debugbreak();
        if ( !bfx::SpaceHandle::IsValid(&v9->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 166, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
          __debugbreak();
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 94, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
          __debugbreak();
        if ( !bfx::SpaceHandle::IsValid(&v9->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 95, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
          __debugbreak();
        v41 = Nav_AllocObstacle();
        v42 = v41;
        if ( v41 )
        {
          v41->id = v38;
          v41->obsData = (bfx::ObstacleDat)v54;
          Nav_SpaceConvertWorldToLocal(v9, &worldPos, &quat, &v41->pos, &v41->qRot);
          *(_QWORD *)v42->extents.v = v52;
          v42->extents.v[2] = v53;
          v42->m_NumBoundaryPlanes = 0;
          *(_DWORD *)&v42->m_bUsesExtents = 16777217;
          v42->pSpace = v9;
          Nav_QueueObstacleCreation(v42);
        }
      }
    }
  }
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
  __int64 v10; 
  unsigned __int128 v11; 
  __m256i v12; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 651, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !G_Glass_IsIndexValid(navGlassPieceIndex - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 652, ASSERT_TYPE_ASSERT, "( G_Glass_IsIndexValid( navGlassPieceIndex - 1 ) )", (const char *)&queryFormat, "G_Glass_IsIndexValid( navGlassPieceIndex - 1 )") )
    __debugbreak();
  v4 = 0;
  if ( g_NavData.numGlassBounds <= 0 )
  {
LABEL_11:
    LODWORD(v10) = navGlassPieceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 674, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find glass bounds for glass %d.  Has nav-blocking func_glass changed without rebuilding navmesh?", v10) )
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
    p_m_Pos = &v6->m_Pos;
    m_NumBoundaries = v6->m_NumBoundaries;
    m_Boundaries = v6->m_Boundaries;
    *((float *)&v11 + 2) = FLOAT_15_0;
    *(_QWORD *)&v11 = 0xFFFFFFFFi64;
    HIDWORD(v11) = -8065;
    v12 = (__m256i)v11;
    Nav_CreateObstacleNow(pSpace, p_m_Pos, &quat_identity, m_Boundaries, m_NumBoundaries, navGlassPieceIndex, 1, (const bfx::ObstacleDat *)&v12);
  }
}

/*
==============
Nav_CreateObstacleByShape
==============
*/
__int64 Nav_CreateObstacleByShape(nav_space_s *pSpace, const vec3_t *pos, __int64 numSides, float distFromCenter, float halfHeight, float penalty, unsigned int layerFlags, unsigned int blockageFlags, bool bNow, unsigned int userDataFlags)
{
  __int64 v10; 
  int v11; 
  int v14; 
  int v15; 
  __int64 v17; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int v22; 
  nav_obstacle_s *v23; 
  nav_obstacle_s *v24; 
  nav_obstacle_s *v25; 
  bfx::ObstacleDat v27; 
  __int128 v28; 
  nav_boundary_plane_s v29[12]; 

  v11 = numSides;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 546, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( v11 <= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 547, ASSERT_TYPE_ASSERT, "( numSides > 2 )", (const char *)&queryFormat, "numSides > 2") )
    __debugbreak();
  v14 = 10;
  if ( v11 <= 10 )
    v14 = v11;
  v15 = 0;
  if ( v14 > 0 )
  {
    _RBX = &v29[0].m_Normal.v[2];
    v17 = v14;
    do
    {
      *((_QWORD *)&_XMM0 + 1) = 0i64;
      *(double *)&_XMM0 = j___libm_sse2_sincosf_(pSpace, 0i64, numSides, v10);
      ++v15;
      *_RBX = 0.0;
      __asm { vextractps dword ptr [rbx-8], xmm0, 1 }
      *(_RBX - 1) = *(float *)&_XMM0;
      _RBX[1] = distFromCenter;
      _RBX += 4;
      --v17;
    }
    while ( v17 );
  }
  v19 = s_NavObstacleIDGen;
  v20 = v14;
  v27.m_obstacleBlockageFlags = blockageFlags;
  v27.m_obstacleName = NULL;
  *(_QWORD *)v29[v20].m_Normal.v = 0i64;
  v29[v20].m_Normal.v[2] = 1.0;
  v29[v20].m_DistFromCenter = halfHeight;
  v21 = v14 + 1i64;
  *(_QWORD *)v29[v21].m_Normal.v = 0i64;
  v29[v21].m_Normal.v[2] = -1.0;
  v29[v21].m_DistFromCenter = halfHeight;
  v27.m_layerMask = layerFlags;
  v27.m_penaltyMult = penalty;
  v22 = v19 + 1;
  s_NavObstacleIDGen = v22;
  v27.m_obstacleBehavior = (blockageFlags & 0x2000) != 0 ? OBSTACLE_BEHAVIOR_PENALTY_IMPASSABLE : OBSTACLE_BEHAVIOR_AUTOMATIC;
  v27.m_userData = userDataFlags;
  v28 = _xmm;
  if ( v22 >= 0xFFFFFFFE )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 36, ASSERT_TYPE_ASSERT, "( s_NavObstacleIDGen < 0xffffffff - 1 )", (const char *)&queryFormat, "s_NavObstacleIDGen < UINT_MAX - 1") )
      __debugbreak();
    v22 = s_NavObstacleIDGen;
  }
  if ( v22 <= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 578, ASSERT_TYPE_ASSERT, "( id > ( 2048 ) )", (const char *)&queryFormat, "id > MAX_GENTITIES") )
    __debugbreak();
  if ( bNow )
  {
    if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 273, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
      __debugbreak();
    if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 274, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
      __debugbreak();
    v23 = Nav_SetupObstacleByBoundaries(pSpace, pos, (const vec4_t *)&v28, v29, v14 + 2, v22, 0, &v27);
    v24 = v23;
    if ( v23 )
    {
      Nav_CreateObstacleHandle(v23);
      if ( bfx::ObstacleHandle::IsValid(&v24->hObstacle) )
      {
        Nav_AddObstacleToSpace(pSpace, v24);
        Nav_ClearCachedData(pSpace);
      }
      else
      {
        bfx::ObstacleHandle::Release(&v24->hObstacle);
        Nav_FreeObstacle(v24);
      }
    }
  }
  else
  {
    if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 253, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
      __debugbreak();
    if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 254, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
      __debugbreak();
    v25 = Nav_SetupObstacleByBoundaries(pSpace, pos, (const vec4_t *)&v28, v29, v14 + 2, v22, 0, &v27);
    if ( v25 )
      Nav_QueueObstacleCreation(v25);
  }
  return v22;
}

/*
==============
Nav_CreateObstacleHandle
==============
*/
void Nav_CreateObstacleHandle(nav_obstacle_s *pObstacle)
{
  float v2; 
  float v3; 
  const bfx::ObstacleHandle *v4; 
  bfx::BoundaryPlane *p_pPlanes; 
  __int64 v6; 
  int m_NumBoundaryPlanes; 
  float *v8; 
  __int64 v9; 
  const bfx::ObstacleHandle *v10; 
  bfx::Quaternion rot; 
  bfx::BoxExtents boxExtents; 
  bfx::Vector3 pos; 
  bfx::ObstacleHandle result; 
  __int64 v15; 
  vec4_t outWorldRot; 
  vec3_t outWorldPos; 
  bfx::BoundaryPlane pPlanes; 

  v15 = -2i64;
  if ( !pObstacle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 126, ASSERT_TYPE_ASSERT, "( pObstacle )", (const char *)&queryFormat, "pObstacle") )
    __debugbreak();
  if ( bfx::ObstacleHandle::IsValid(&pObstacle->hObstacle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 127, ASSERT_TYPE_ASSERT, "( !pObstacle->hObstacle.IsValid() )", (const char *)&queryFormat, "!pObstacle->hObstacle.IsValid()") )
    __debugbreak();
  Nav_SpaceConvertLocalToWorld(pObstacle->pSpace, &pObstacle->pos, &pObstacle->qRot, &outWorldPos, &outWorldRot);
  pos = (bfx::Vector3)outWorldPos;
  rot.m_x = outWorldRot.v[0];
  rot.m_y = outWorldRot.v[1];
  rot.m_z = outWorldRot.v[2];
  rot.m_w = outWorldRot.v[3];
  if ( pObstacle->m_bUsesExtents )
  {
    v2 = pObstacle->extents.v[2];
    v3 = pObstacle->extents.v[1];
    boxExtents.m_length = pObstacle->extents.v[0];
    boxExtents.m_width = v3;
    boxExtents.m_height = v2;
    v4 = bfx::CreateObstacle(&result, &pObstacle->pSpace->hSpace, &pos, &rot, &boxExtents, &pObstacle->obsData);
    bfx::ObstacleHandle::operator=(&pObstacle->hObstacle, v4);
    bfx::ObstacleHandle::~ObstacleHandle(&result);
  }
  else if ( pObstacle->m_NumBoundaryPlanes <= 0 )
  {
    bfx::ObstacleHandle::Release(&pObstacle->hObstacle);
  }
  else
  {
    p_pPlanes = &pPlanes;
    v6 = 12i64;
    do
    {
      bfx::BoundaryPlane::BoundaryPlane(p_pPlanes++);
      --v6;
    }
    while ( v6 );
    m_NumBoundaryPlanes = pObstacle->m_NumBoundaryPlanes;
    if ( m_NumBoundaryPlanes > 0 )
    {
      v8 = &pObstacle->m_BoundaryPlanes[0].m_Normal.v[2];
      v9 = (unsigned int)m_NumBoundaryPlanes;
      do
      {
        *(float *)((char *)v8 + (char *)&pPlanes - (char *)pObstacle - 108) = *(v8 - 2);
        *(float *)((char *)v8 + (char *)&pPlanes.m_normal.m_y - (char *)pObstacle - 108) = *(v8 - 1);
        *(float *)((char *)v8 + (char *)&pPlanes.m_normal.m_z - (char *)pObstacle - 108) = *v8;
        *(float *)((char *)v8 + (char *)&pPlanes.m_distFromCenter - (char *)pObstacle - 108) = v8[1];
        v8 += 4;
        --v9;
      }
      while ( v9 );
    }
    v10 = bfx::CreateObstacle(&result, &pObstacle->pSpace->hSpace, &pos, &rot, &pPlanes, m_NumBoundaryPlanes, &pObstacle->obsData);
    bfx::ObstacleHandle::operator=(&pObstacle->hObstacle, v10);
    bfx::ObstacleHandle::~ObstacleHandle(&result);
  }
  pObstacle->m_bPending = 0;
}

/*
==============
Nav_CreateObstacleNow
==============
*/
bool Nav_CreateObstacleNow(nav_space_s *pSpace, const vec3_t *pos, const vec4_t *qRot, const nav_boundary_plane_s *pPlanes, int numPlanes, unsigned int id, bool bGlass, const bfx::ObstacleDat *obsData)
{
  nav_obstacle_s *v12; 
  nav_obstacle_s *v13; 
  bfx::ObstacleDat v15; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 273, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 274, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  v15 = *obsData;
  v12 = Nav_SetupObstacleByBoundaries(pSpace, pos, qRot, pPlanes, numPlanes, id, bGlass, &v15);
  v13 = v12;
  if ( v12 )
  {
    Nav_CreateObstacleHandle(v12);
    if ( bfx::ObstacleHandle::IsValid(&v13->hObstacle) )
    {
      Nav_AddObstacleToSpace(pSpace, v13);
      Nav_ClearCachedData(pSpace);
    }
    else
    {
      bfx::ObstacleHandle::Release(&v13->hObstacle);
      Nav_FreeObstacle(v13);
    }
    LOBYTE(v12) = 1;
  }
  return (char)v12;
}

/*
==============
Nav_CreateObstacleNow
==============
*/
bool Nav_CreateObstacleNow(nav_space_s *pSpace, const vec3_t *pos, const vec4_t *qRot, const bfx::BoxExtents *extents, unsigned int id, bool bGlass, const bfx::ObstacleDat *obsData)
{
  double v11; 
  bfx::ObstacleDat v12; 
  nav_obstacle_s *v13; 
  nav_obstacle_s *v14; 
  bfx::BoxExtents v16; 
  bfx::ObstacleDat v17; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 185, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 186, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  v11 = *(double *)&extents->m_length;
  v12 = *obsData;
  v16.m_height = extents->m_height;
  v17 = v12;
  *(double *)&v16.m_length = v11;
  v13 = Nav_SetupObstacleByExtents(pSpace, pos, qRot, &v16, id, bGlass, &v17);
  v14 = v13;
  if ( v13 )
  {
    Nav_CreateObstacleHandle(v13);
    if ( bfx::ObstacleHandle::IsValid(&v14->hObstacle) )
    {
      Nav_AddObstacleToSpace(pSpace, v14);
      Nav_ClearCachedData(pSpace);
    }
    else
    {
      bfx::ObstacleHandle::Release(&v14->hObstacle);
      Nav_FreeObstacle(v14);
    }
    LOBYTE(v13) = 1;
  }
  return (char)v13;
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
  int v8; 
  _DWORD *v9; 
  char *v10; 
  nav_obstacle_s *v11; 
  vec3_t outWorldPos; 
  vec4_t outWorldRot; 

  if ( !pObstacle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 886, ASSERT_TYPE_ASSERT, "( pObstacle )", (const char *)&queryFormat, "pObstacle") )
    __debugbreak();
  if ( !pObstacle->pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 887, ASSERT_TYPE_ASSERT, "( pObstacle->pSpace )", (const char *)&queryFormat, "pObstacle->pSpace") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 888, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( pObstacle->m_bDeleteMe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 889, ASSERT_TYPE_ASSERT, "( !pObstacle->m_bDeleteMe )", (const char *)&queryFormat, "!pObstacle->m_bDeleteMe") )
    __debugbreak();
  v6 = pObstacle->pSpace;
  if ( pSpace != v6 )
  {
    if ( pObstacle->m_bPending )
    {
      Nav_SpaceConvertLocalToWorld(v6, &pObstacle->pos, &pObstacle->qRot, &outWorldPos, &outWorldRot);
      Nav_SpaceConvertWorldToLocal(pSpace, &outWorldPos, &outWorldRot, &pObstacle->pos, &pObstacle->qRot);
      pObstacle->pSpace = pSpace;
      return;
    }
    if ( pObstacle->m_bDeleteMe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 904, ASSERT_TYPE_ASSERT, "( !pObstacle->m_bDeleteMe )", (const char *)&queryFormat, "!pObstacle->m_bDeleteMe") )
      __debugbreak();
    if ( bPreserveOrderingInOldSpace )
    {
      pObstacle->m_bDeleteMe = 1;
      v7 = Nav_AllocObstacle();
      if ( !v7 )
        return;
      v8 = 0;
      v7->id = pObstacle->id;
      v7->pos.v[0] = pObstacle->pos.v[0];
      v7->pos.v[1] = pObstacle->pos.v[1];
      v7->pos.v[2] = pObstacle->pos.v[2];
      v7->qRot.v[0] = pObstacle->qRot.v[0];
      v7->qRot.v[1] = pObstacle->qRot.v[1];
      v7->qRot.v[2] = pObstacle->qRot.v[2];
      v7->qRot.v[3] = pObstacle->qRot.v[3];
      v7->obsData = pObstacle->obsData;
      v7->extents.v[0] = pObstacle->extents.v[0];
      v7->extents.v[1] = pObstacle->extents.v[1];
      v7->extents.v[2] = pObstacle->extents.v[2];
      v7->m_NumBoundaryPlanes = pObstacle->m_NumBoundaryPlanes;
      if ( pObstacle->m_NumBoundaryPlanes > 0 )
      {
        v9 = (_DWORD *)&v7->m_BoundaryPlanes[0].m_Normal.v[1];
        v10 = (char *)((char *)pObstacle - (char *)v7);
        do
        {
          ++v8;
          *(v9 - 1) = *(_DWORD *)((char *)v9 + (_QWORD)v10 - 4);
          *v9 = *(_DWORD *)((char *)v9 + (_QWORD)v10);
          v9[1] = *(_DWORD *)((char *)v9 + (_QWORD)v10 + 4);
          v9[2] = *(_DWORD *)((char *)v9 + (_QWORD)v10 + 8);
          v9 += 4;
        }
        while ( v8 < pObstacle->m_NumBoundaryPlanes );
      }
      v11 = v7;
      v7->m_bUsesExtents = pObstacle->m_bUsesExtents;
      v7->m_bGlass = pObstacle->m_bGlass;
      v7->m_bDeleteMe = 0;
      v7->pSpace = pObstacle->pSpace;
    }
    else
    {
      Nav_ClearCachedData(pObstacle->pSpace);
      Nav_RemoveObstacleFromSpace(pObstacle->pSpace, pObstacle, 0);
      bfx::DestroyObstacle(&pObstacle->hObstacle);
      bfx::ObstacleHandle::Release(&pObstacle->hObstacle);
      v11 = pObstacle;
      pObstacle->pSpace = pSpace;
    }
    Nav_QueueObstacleCreation(v11);
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
  nav_obstacle_s *v2; 
  double Float; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  float v13; 
  double v14; 
  float v15; 
  double v16; 
  float v17; 
  __int64 v18; 
  float *v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  char v24; 
  char v25; 
  char v26; 
  nav_obstacle_s *v27; 
  nav_obstacle_s *v28; 
  bfx::ObstacleDat v29; 
  nav_obstacle_s *result; 
  int v31; 
  int v32; 
  unsigned int p; 
  __m256i p_8; 
  __m256i v35; 
  vec3_t localPos; 
  vec4_t localRot; 
  vec3_t outWorldPos; 
  vec4_t outWorldRot; 
  nav_boundary_plane_s v40[12]; 

  v2 = NULL;
  p_8.m256i_i64[0] = 0xFFFFFFFFi64;
  p_8.m256i_i32[3] = -1;
  *(_OWORD *)&p_8.m256i_u64[2] = 0ui64;
  *(float *)&p_8.m256i_i32[2] = FLOAT_15_0;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1126, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1127, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  MemFile_ReadData(memFile, 4ui64, &p);
  Float = MemFile_ReadFloat(memFile);
  localPos.v[0] = *(float *)&Float;
  v6 = MemFile_ReadFloat(memFile);
  localPos.v[1] = *(float *)&v6;
  v7 = MemFile_ReadFloat(memFile);
  localPos.v[2] = *(float *)&v7;
  v8 = MemFile_ReadFloat(memFile);
  localRot.v[0] = *(float *)&v8;
  v9 = MemFile_ReadFloat(memFile);
  localRot.v[1] = *(float *)&v9;
  v10 = MemFile_ReadFloat(memFile);
  localRot.v[2] = *(float *)&v10;
  v11 = MemFile_ReadFloat(memFile);
  localRot.v[3] = *(float *)&v11;
  v12 = MemFile_ReadFloat(memFile);
  v13 = *(float *)&v12;
  v14 = MemFile_ReadFloat(memFile);
  v15 = *(float *)&v14;
  v16 = MemFile_ReadFloat(memFile);
  v17 = *(float *)&v16;
  MemFile_ReadData(memFile, 4ui64, &v32);
  v18 = v32;
  if ( v32 > 0 )
  {
    v19 = &v40[0].m_Normal.v[2];
    do
    {
      v20 = MemFile_ReadFloat(memFile);
      *(v19 - 2) = *(float *)&v20;
      v21 = MemFile_ReadFloat(memFile);
      *(v19 - 1) = *(float *)&v21;
      v22 = MemFile_ReadFloat(memFile);
      *v19 = *(float *)&v22;
      v23 = MemFile_ReadFloat(memFile);
      v19[1] = *(float *)&v23;
      v19 += 4;
      --v18;
    }
    while ( v18 );
  }
  MemFile_ReadData(memFile, 1ui64, &v31);
  v24 = v31;
  MemFile_ReadData(memFile, 1ui64, &v31);
  v25 = v31;
  MemFile_ReadData(memFile, 1ui64, &v31);
  v26 = v31;
  MemFile_ReadData(memFile, 0x20ui64, &p_8);
  Nav_SpaceConvertLocalToWorld(pSpace, &localPos, &localRot, &outWorldPos, &outWorldRot);
  v35 = p_8;
  if ( v32 > 0 )
  {
    v2 = Nav_SetupObstacleByBoundaries(pSpace, &outWorldPos, &outWorldRot, v40, v32, p, v24, (const bfx::ObstacleDat *)&v35);
    goto LABEL_20;
  }
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 94, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 95, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  v27 = Nav_AllocObstacle();
  v28 = v27;
  if ( v27 )
  {
    v29 = (bfx::ObstacleDat)v35;
    v27->id = p;
    v27->obsData = v29;
    Nav_SpaceConvertWorldToLocal(pSpace, &outWorldPos, &outWorldRot, &v27->pos, &v27->qRot);
    v28->extents.v[0] = v13;
    v28->extents.v[1] = v15;
    v28->extents.v[2] = v17;
    v28->m_NumBoundaryPlanes = 0;
    v2 = v28;
    v28->m_bUsesExtents = 1;
    v28->m_bGlass = v24;
    *(_WORD *)&v28->m_bDeleteMe = 256;
    v28->pSpace = pSpace;
LABEL_20:
    if ( v2 )
      goto LABEL_23;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1163, ASSERT_TYPE_ASSERT, "( pObstacle )", (const char *)&queryFormat, "pObstacle") )
    __debugbreak();
LABEL_23:
  v2->m_bDeleteMe = v25;
  result = v2;
  v2->m_bPending = v26;
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
  nav_obstacle_s *v13; 
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
  v13 = result;
  if ( result )
  {
    result->id = id;
    Nav_SpaceConvertWorldToLocal(pSpace, pos, qRot, &result->pos, &result->qRot);
    v14 = 0i64;
    if ( numPlanes >= 4i64 )
    {
      v15 = (char *)((char *)pPlanes - (char *)v13);
      v16 = ((unsigned __int64)(numPlanes - 4i64) >> 2) + 1;
      v17 = (_DWORD *)&v13->m_BoundaryPlanes[0].m_Normal.v[2];
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
      v18 = (char *)((char *)pPlanes - (char *)v13);
      v19 = numPlanes - v14;
      v20 = (_DWORD *)&v13->m_BoundaryPlanes[v14].m_Normal.v[2];
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
    v13->m_bGlass = bGlass;
    v13->m_NumBoundaryPlanes = numPlanes;
    v13->m_bUsesExtents = 0;
    *(_WORD *)&v13->m_bDeleteMe = 256;
    v13->obsData = *obsData;
    v13->pSpace = pSpace;
    return v13;
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
  nav_obstacle_s *v12; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 94, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 95, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  result = Nav_AllocObstacle();
  v12 = result;
  if ( result )
  {
    result->id = id;
    result->obsData = *obsData;
    Nav_SpaceConvertWorldToLocal(pSpace, pos, qRot, &result->pos, &result->qRot);
    v12->extents.v[0] = extents->m_length;
    v12->extents.v[1] = extents->m_width;
    v12->extents.v[2] = extents->m_height;
    v12->m_bGlass = bGlass;
    result = v12;
    v12->m_NumBoundaryPlanes = 0;
    v12->m_bUsesExtents = 1;
    *(_WORD *)&v12->m_bDeleteMe = 256;
    v12->pSpace = pSpace;
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
  float *p_m_DistFromCenter; 
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
    p_m_DistFromCenter = &pObstacle->m_BoundaryPlanes[0].m_DistFromCenter;
    do
    {
      MemFile_WriteData(memFile, 0xCui64, &pObstacle->m_BoundaryPlanes[v4]);
      MemFile_WriteFloat(memFile, *p_m_DistFromCenter);
      ++v4;
      p_m_DistFromCenter += 4;
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
  float *p_m_DistFromCenter; 
  __int64 v7; 
  __int64 v8; 
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
      LODWORD(v8) = MaxNumObstacles;
      LODWORD(v7) = curPendingObstacleIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_obstacle.cpp", 1196, ASSERT_TYPE_ASSERT, "(unsigned)( iPending ) < (unsigned)( cMaxObstacles )", "iPending doesn't index cMaxObstacles\n\t%i not in [0, %i)", v7, v8) )
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
        p_m_DistFromCenter = &v4->m_BoundaryPlanes[0].m_DistFromCenter;
        do
        {
          MemFile_WriteData(memFile, 0xCui64, &v4->m_BoundaryPlanes[v5]);
          MemFile_WriteFloat(memFile, *p_m_DistFromCenter);
          ++v5;
          p_m_DistFromCenter += 4;
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

