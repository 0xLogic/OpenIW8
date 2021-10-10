/*
==============
SV_EntitiesPartitioning_DrawDebug
==============
*/

void SV_EntitiesPartitioning_DrawDebug(void)
{
  ?SV_EntitiesPartitioning_DrawDebug@@YAXXZ();
}

/*
==============
SV_EntitiesPartitioning_AddEntity
==============
*/

void __fastcall SV_EntitiesPartitioning_AddEntity(const __int16 entityNum)
{
  ?SV_EntitiesPartitioning_AddEntity@@YAXF@Z(entityNum);
}

/*
==============
SV_EntitiesPartitioning_ShouldUpdatePositionDirtyFlag
==============
*/

bool __fastcall SV_EntitiesPartitioning_ShouldUpdatePositionDirtyFlag()
{
  return ?SV_EntitiesPartitioning_ShouldUpdatePositionDirtyFlag@@YA_NXZ();
}

/*
==============
SV_EntitiesPartitioning_SetDirtyFlag
==============
*/

void __fastcall SV_EntitiesPartitioning_SetDirtyFlag(const __int16 entityNum)
{
  ?SV_EntitiesPartitioning_SetDirtyFlag@@YAXF@Z(entityNum);
}

/*
==============
SV_EntitiesPartitioning_UpdateDirtyEntities
==============
*/

void SV_EntitiesPartitioning_UpdateDirtyEntities(void)
{
  ?SV_EntitiesPartitioning_UpdateDirtyEntities@@YAXXZ();
}

/*
==============
SV_EntitiesPartitioning_Shutdown
==============
*/

void SV_EntitiesPartitioning_Shutdown(void)
{
  ?SV_EntitiesPartitioning_Shutdown@@YAXXZ();
}

/*
==============
SV_EntitiesPartitioning_GetNearbyEntities
==============
*/

unsigned int __fastcall SV_EntitiesPartitioning_GetNearbyEntities(const __int16 baseEntityNum, __int16 *nearbyEntities)
{
  return ?SV_EntitiesPartitioning_GetNearbyEntities@@YAIFQEAF@Z(baseEntityNum, nearbyEntities);
}

/*
==============
SV_EntitiesPartitioning_RemoveEntity
==============
*/

void __fastcall SV_EntitiesPartitioning_RemoveEntity(const __int16 entityNum)
{
  ?SV_EntitiesPartitioning_RemoveEntity@@YAXF@Z(entityNum);
}

/*
==============
SV_EntitiesPartitioning_Init
==============
*/

void __fastcall SV_EntitiesPartitioning_Init(const char *const mapName, HunkUser *const hunkUser)
{
  ?SV_EntitiesPartitioning_Init@@YAXQEBDQEAUHunkUser@@@Z(mapName, hunkUser);
}

/*
==============
SV_EntitiesPartitioning_ProcessNewEntityQueue
==============
*/

void SV_EntitiesPartitioning_ProcessNewEntityQueue(void)
{
  ?SV_EntitiesPartitioning_ProcessNewEntityQueue@@YAXXZ();
}

/*
==============
SV_EntitiesPartitioning_AddEntity
==============
*/
void SV_EntitiesPartitioning_AddEntity(const __int16 entityNum)
{
  unsigned int v2; 

  if ( entityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 113, ASSERT_TYPE_ASSERT, "( entityNum != ENTITYNUM_NONE )", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( SV_EntitiesLoD_UseDynamicLoD() )
  {
    v2 = s_newEntityCount;
    if ( s_newEntityCount >= 0x800 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 125, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Too many entries in entity-partitioning queue") )
        __debugbreak();
    }
    else
    {
      s_newEntityList[s_newEntityCount] = entityNum;
      s_newEntityCount = v2 + 1;
    }
  }
}

/*
==============
SV_EntitiesPartitioning_AddEntityToGrid
==============
*/
void SV_EntitiesPartitioning_AddEntityToGrid(const __int16 entityNum)
{
  gentity_s *v2; 
  unsigned __int16 v3; 
  vec2_t pos; 
  vec3_t trBase; 

  if ( entityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 134, ASSERT_TYPE_ASSERT, "( entityNum != ENTITYNUM_NONE )", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( SV_EntitiesLoD_UseDynamicLoD() )
  {
    if ( !s_entitiesPartitioningInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 138, ASSERT_TYPE_ASSERT, "( s_entitiesPartitioningInitialized )", (const char *)&queryFormat, "s_entitiesPartitioningInitialized") )
      __debugbreak();
    v2 = SV_GentityNum(entityNum);
    Trajectory_GetTrBase(&v2->s.lerp.pos, &trBase);
    pos.v[0] = trBase.v[0];
    pos.v[1] = trBase.v[1];
    v3 = DenseGrid::Insert(&s_entitiesGrid, entityNum, &pos);
    if ( v3 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 146, ASSERT_TYPE_ASSERT, "(cellIndex != DenseGrid::INVALID_CELL_INDEX)", "%s\n\tFailed to add entity %d to the grid\n", "cellIndex != DenseGrid::INVALID_CELL_INDEX", entityNum) )
      __debugbreak();
    s_entitiesCellIndex[entityNum] = v3;
  }
}

/*
==============
SV_EntitiesPartitioning_DrawDebug
==============
*/
void SV_EntitiesPartitioning_DrawDebug(void)
{
  const dvar_t *v0; 

  v0 = DCONST_DVARBOOL_sv_entitiesPartitioningDrawOverlay;
  if ( !DCONST_DVARBOOL_sv_entitiesPartitioningDrawOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_entitiesPartitioningDrawOverlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    G_DebugDrawDenseGrid(&s_entitiesGrid);
}

/*
==============
SV_EntitiesPartitioning_GetNearbyEntities
==============
*/
__int64 SV_EntitiesPartitioning_GetNearbyEntities(const __int16 baseEntityNum, __int16 *nearbyEntities)
{
  __int128 v2; 
  __int64 v5; 
  gentity_s *v6; 
  const dvar_t *v7; 
  float value; 
  const dvar_t *v9; 
  float v10; 
  vec2_t v11; 
  unsigned int Keys; 
  unsigned int *v13; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v17; 
  __int64 v18; 
  DenseGrid::PageIterator iter; 
  DenseGrid::CellIterator outIter; 
  vec2_t max; 
  vec2_t min; 
  vec3_t trBase; 
  unsigned int outKeys[32]; 
  __int128 v25; 

  v25 = v2;
  if ( !SV_EntitiesLoD_UseDynamicLoD() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 267, ASSERT_TYPE_ASSERT, "( SV_EntitiesLoD_UseDynamicLoD() )", (const char *)&queryFormat, "SV_EntitiesLoD_UseDynamicLoD()") )
    __debugbreak();
  if ( !s_entitiesPartitioningInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 268, ASSERT_TYPE_ASSERT, "( s_entitiesPartitioningInitialized )", (const char *)&queryFormat, "s_entitiesPartitioningInitialized") )
    __debugbreak();
  v5 = 0i64;
  v6 = SV_GentityNum(baseEntityNum);
  Trajectory_GetTrBase(&v6->s.lerp.pos, &trBase);
  v7 = DVARFLT_sv_entitiesPartitioningNearbyRangeX;
  if ( !DVARFLT_sv_entitiesPartitioningNearbyRangeX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_entitiesPartitioningNearbyRangeX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  value = v7->current.value;
  v9 = DVARFLT_sv_entitiesPartitioningNearbyRangeY;
  if ( !DVARFLT_sv_entitiesPartitioningNearbyRangeY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_entitiesPartitioningNearbyRangeY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.value;
  max.v[0] = trBase.v[0] - value;
  max.v[1] = trBase.v[1] - v10;
  v11 = max;
  max.v[0] = trBase.v[0] + value;
  max.v[1] = trBase.v[1] + v10;
  min = v11;
  DenseGrid::FindInAABB(&s_entitiesGrid, &min, &max, &outIter);
  while ( DenseGrid::CellIterator::Advance(&outIter) )
  {
    DenseGrid::PageIterator::Init(&iter, &s_entitiesGrid, outIter.m_currentCellIndex);
    while ( DenseGrid::PageIterator::Advance(&iter) )
    {
      Keys = DenseGrid::PageIterator::GetKeys(&iter, 0x20u, outKeys);
      if ( Keys )
      {
        v13 = outKeys;
        v14 = Keys;
        do
        {
          if ( (unsigned int)v5 >= 0x800 )
          {
            LODWORD(v18) = 2048;
            LODWORD(v17) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 305, ASSERT_TYPE_ASSERT, "(unsigned)( numNearbyEntities ) < (unsigned)( ( 2048 ) )", "numNearbyEntities doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
          }
          v15 = *v13;
          if ( (*v13 > 0x7FFFFFFF || v15 + 0x8000 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)v15, "unsigned", v15) )
            __debugbreak();
          nearbyEntities[v5] = v15;
          ++v13;
          v5 = (unsigned int)(v5 + 1);
          --v14;
        }
        while ( v14 );
      }
    }
  }
  return (unsigned int)v5;
}

/*
==============
SV_EntitiesPartitioning_Init
==============
*/
void SV_EntitiesPartitioning_Init(const char *const mapName, HunkUser *const hunkUser)
{
  unsigned __int16 *v2; 
  __int64 v3; 
  DenseGridConfig config; 

  config.worldMin = *(vec2_t *)cm.broadphaseMin.v;
  config.worldMax = *(vec2_t *)cm.broadphaseMax.v;
  s_numDirtyEntities = 0;
  config.populationMax = 2048;
  DenseGrid::Init(&s_entitiesGrid, &config, 0, hunkUser);
  s_newEntityCount = 0;
  v2 = s_entitiesCellIndex;
  v3 = 2048i64;
  s_entitiesPartitioningInitialized = 1;
  while ( v3 )
  {
    *v2++ = -1;
    --v3;
  }
}

/*
==============
SV_EntitiesPartitioning_ProcessNewEntityQueue
==============
*/
void SV_EntitiesPartitioning_ProcessNewEntityQueue(void)
{
  unsigned int i; 
  __int16 v1; 
  gentity_s *v2; 
  unsigned __int16 v3; 
  __int64 v4; 
  vec2_t v5; 
  vec2_t pos; 
  vec3_t trBase; 

  for ( i = 0; i < s_newEntityCount; ++i )
  {
    v1 = s_newEntityList[i];
    if ( v1 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 134, ASSERT_TYPE_ASSERT, "( entityNum != ENTITYNUM_NONE )", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
      __debugbreak();
    if ( SV_EntitiesLoD_UseDynamicLoD() )
    {
      if ( !s_entitiesPartitioningInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 138, ASSERT_TYPE_ASSERT, "( s_entitiesPartitioningInitialized )", (const char *)&queryFormat, "s_entitiesPartitioningInitialized") )
        __debugbreak();
      v2 = SV_GentityNum(v1);
      Trajectory_GetTrBase(&v2->s.lerp.pos, &trBase);
      v5.v[0] = trBase.v[0];
      v5.v[1] = trBase.v[1];
      pos = v5;
      v3 = DenseGrid::Insert(&s_entitiesGrid, v1, &pos);
      if ( v3 == 0xFFFF )
      {
        LODWORD(v4) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 146, ASSERT_TYPE_ASSERT, "(cellIndex != DenseGrid::INVALID_CELL_INDEX)", "%s\n\tFailed to add entity %d to the grid\n", "cellIndex != DenseGrid::INVALID_CELL_INDEX", v4) )
          __debugbreak();
      }
      s_entitiesCellIndex[v1] = v3;
    }
  }
  s_newEntityCount = 0;
}

/*
==============
SV_EntitiesPartitioning_RemoveEntity
==============
*/
void SV_EntitiesPartitioning_RemoveEntity(const __int16 entityNum)
{
  unsigned __int16 v2; 
  unsigned int v3; 
  __int64 i; 

  if ( entityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 184, ASSERT_TYPE_ASSERT, "( entityNum != ENTITYNUM_NONE )", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( SV_EntitiesLoD_UseDynamicLoD() )
  {
    if ( !s_entitiesPartitioningInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 188, ASSERT_TYPE_ASSERT, "( s_entitiesPartitioningInitialized )", (const char *)&queryFormat, "s_entitiesPartitioningInitialized") )
      __debugbreak();
    v2 = s_entitiesCellIndex[entityNum];
    if ( v2 != 0xFFFF )
    {
      DenseGrid::Remove(&s_entitiesGrid, entityNum, v2);
      s_entitiesCellIndex[entityNum] = -1;
    }
    v3 = s_newEntityCount;
    for ( i = 0i64; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
    {
      if ( s_newEntityList[i] == entityNum )
      {
        s_newEntityCount = --v3;
        s_newEntityList[i] = s_newEntityList[v3];
      }
    }
  }
}

/*
==============
SV_EntitiesPartitioning_SetDirtyFlag
==============
*/
void SV_EntitiesPartitioning_SetDirtyFlag(const __int16 entityNum)
{
  bool v2; 
  unsigned __int16 *v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  if ( Sys_IsServerThread() && SV_EntitiesLoD_UseDynamicLoD() )
  {
    if ( s_entitiesPartitioningInitialized )
      goto LABEL_8;
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 106, ASSERT_TYPE_ASSERT, "( s_entitiesPartitioningInitialized )", (const char *)&queryFormat, "s_entitiesPartitioningInitialized");
  }
  else
  {
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 209, ASSERT_TYPE_ASSERT, "( SV_EntitiesPartitioning_ShouldUpdatePositionDirtyFlag() )", (const char *)&queryFormat, "SV_EntitiesPartitioning_ShouldUpdatePositionDirtyFlag()");
  }
  if ( v2 )
    __debugbreak();
LABEL_8:
  if ( entityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 210, ASSERT_TYPE_ASSERT, "( entityNum != ENTITYNUM_NONE )", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( s_numDirtyEntities >= 0x800 )
  {
    LODWORD(v5) = s_numDirtyEntities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 211, ASSERT_TYPE_ASSERT, "(unsigned)( s_numDirtyEntities ) < (unsigned)( ( sizeof( *array_counter( s_dirtyEntities ) ) + 0 ) )", "s_numDirtyEntities doesn't index ARRAY_COUNT( s_dirtyEntities )\n\t%i not in [0, %i)", v5, 2048) )
      __debugbreak();
  }
  if ( !s_entitiesPartitioningInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 212, ASSERT_TYPE_ASSERT, "( s_entitiesPartitioningInitialized )", (const char *)&queryFormat, "s_entitiesPartitioningInitialized") )
    __debugbreak();
  v3 = &s_entitiesCellIndex[entityNum];
  if ( *v3 == 0xFFFF )
  {
    SV_EntitiesPartitioning_AddEntityToGrid(entityNum);
    if ( *v3 == 0xFFFF )
    {
      LODWORD(v6) = entityNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 219, ASSERT_TYPE_ASSERT, "(s_entitiesCellIndex[entityNum] != DenseGrid::INVALID_CELL_INDEX)", "%s\n\tEntity %d is moving but is not in the grid\n", "s_entitiesCellIndex[entityNum] != DenseGrid::INVALID_CELL_INDEX", v6) )
        __debugbreak();
    }
  }
  v4 = s_numDirtyEntities++;
  s_dirtyEntities[v4] = entityNum;
}

/*
==============
SV_EntitiesPartitioning_ShouldUpdatePositionDirtyFlag
==============
*/
char SV_EntitiesPartitioning_ShouldUpdatePositionDirtyFlag()
{
  if ( !Sys_IsServerThread() || !SV_EntitiesLoD_UseDynamicLoD() )
    return 0;
  if ( !s_entitiesPartitioningInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 106, ASSERT_TYPE_ASSERT, "( s_entitiesPartitioningInitialized )", (const char *)&queryFormat, "s_entitiesPartitioningInitialized") )
    __debugbreak();
  return 1;
}

/*
==============
SV_EntitiesPartitioning_Shutdown
==============
*/
void SV_EntitiesPartitioning_Shutdown(void)
{
  s_numDirtyEntities = 0;
  DenseGrid::Destroy(&s_entitiesGrid);
  DebugWipe(s_entitiesCellIndex, 0x1000ui64);
  s_entitiesPartitioningInitialized = 0;
}

/*
==============
SV_EntitiesPartitioning_UpdateDirtyEntities
==============
*/
void SV_EntitiesPartitioning_UpdateDirtyEntities(void)
{
  unsigned int i; 
  __int16 v1; 
  unsigned __int16 v2; 
  vec2_t pos; 

  if ( !s_entitiesPartitioningInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_partitioning.cpp", 235, ASSERT_TYPE_ASSERT, "( s_entitiesPartitioningInitialized )", (const char *)&queryFormat, "s_entitiesPartitioningInitialized") )
    __debugbreak();
  for ( i = 0; i < s_numDirtyEntities; s_entitiesCellIndex[v1] = DenseGrid::Update(&s_entitiesGrid, v1, v2, &pos) )
  {
    v1 = s_dirtyEntities[i];
    if ( !(_BYTE)SvGameGlobals::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
      __debugbreak();
    v2 = s_entitiesCellIndex[v1];
    pos = *(vec2_t *)SvGameGlobals::ms_svGameGlobals->gentities[v1].r.currentOrigin.v;
    ++i;
  }
  s_numDirtyEntities = 0;
}

