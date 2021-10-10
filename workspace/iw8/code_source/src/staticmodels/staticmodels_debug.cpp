/*
==============
StaticModels_Debug_AddTileSimulationShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_AddTileSimulationShapeInstanceCount(const unsigned __int8 *gridId, const unsigned int instanceCount)
{
  ?StaticModels_Debug_AddTileSimulationShapeInstanceCount@@YAXQEBEI@Z(gridId, instanceCount);
}

/*
==============
StaticModels_Debug_AddDetailShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_AddDetailShapeInstanceCount(const unsigned int staticModelZoneIdx, const unsigned int instanceCount)
{
  ?StaticModels_Debug_AddDetailShapeInstanceCount@@YAXII@Z(staticModelZoneIdx, instanceCount);
}

/*
==============
StaticModels_Debug_Draw
==============
*/

void __fastcall StaticModels_Debug_Draw(const ScreenPlacement *scrPlace)
{
  ?StaticModels_Debug_Draw@@YAXPEBUScreenPlacement@@@Z(scrPlace);
}

/*
==============
StaticModels_Debug_AddSimulationShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_AddSimulationShapeInstanceCount(const unsigned int staticModelZoneIdx, const unsigned int instanceCount)
{
  ?StaticModels_Debug_AddSimulationShapeInstanceCount@@YAXII@Z(staticModelZoneIdx, instanceCount);
}

/*
==============
StaticModels_Debug_GetNameForShape
==============
*/

const char *__fastcall StaticModels_Debug_GetNameForShape(const hknpShape *shape)
{
  return ?StaticModels_Debug_GetNameForShape@@YAPEBDPEBVhknpShape@@@Z(shape);
}

/*
==============
StaticModels_Debug_ResetTileSimulationShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_ResetTileSimulationShapeInstanceCount(const unsigned __int8 *gridId)
{
  ?StaticModels_Debug_ResetTileSimulationShapeInstanceCount@@YAXQEBE@Z(gridId);
}

/*
==============
StaticModels_Debug_ResetTileDetailShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_ResetTileDetailShapeInstanceCount(const unsigned __int8 *gridId)
{
  ?StaticModels_Debug_ResetTileDetailShapeInstanceCount@@YAXQEBE@Z(gridId);
}

/*
==============
StaticModels_Debug_ResetSimulationShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_ResetSimulationShapeInstanceCount(const unsigned int staticModelZoneIdx)
{
  ?StaticModels_Debug_ResetSimulationShapeInstanceCount@@YAXI@Z(staticModelZoneIdx);
}

/*
==============
StaticModels_Debug_AddTileDetailShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_AddTileDetailShapeInstanceCount(const unsigned __int8 *gridId, const unsigned int instanceCount)
{
  ?StaticModels_Debug_AddTileDetailShapeInstanceCount@@YAXQEBEI@Z(gridId, instanceCount);
}

/*
==============
StaticModels_Debug_ResetDetailShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_ResetDetailShapeInstanceCount(const unsigned int staticModelZoneIdx)
{
  ?StaticModels_Debug_ResetDetailShapeInstanceCount@@YAXI@Z(staticModelZoneIdx);
}

/*
==============
StaticModels_Debug_AddDetailShapeInstanceCount
==============
*/
void StaticModels_Debug_AddDetailShapeInstanceCount(const unsigned int staticModelZoneIdx, const unsigned int instanceCount)
{
  __int64 v2; 
  int v5; 

  v2 = staticModelZoneIdx;
  if ( staticModelZoneIdx >= 0x20 )
  {
    v5 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 85, ASSERT_TYPE_ASSERT, "(unsigned)( staticModelZoneIdx ) < (unsigned)( STATICMODELS_MAX_ZONES )", "staticModelZoneIdx doesn't index STATICMODELS_MAX_ZONES\n\t%i not in [0, %i)", staticModelZoneIdx, v5) )
      __debugbreak();
  }
  s_staticModels_Debug_NumShapeDetailInstances[v2] += instanceCount;
}

/*
==============
StaticModels_Debug_AddSimulationShapeInstanceCount
==============
*/
void StaticModels_Debug_AddSimulationShapeInstanceCount(const unsigned int staticModelZoneIdx, const unsigned int instanceCount)
{
  __int64 v2; 
  int v5; 

  v2 = staticModelZoneIdx;
  if ( staticModelZoneIdx >= 0x20 )
  {
    v5 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( staticModelZoneIdx ) < (unsigned)( STATICMODELS_MAX_ZONES )", "staticModelZoneIdx doesn't index STATICMODELS_MAX_ZONES\n\t%i not in [0, %i)", staticModelZoneIdx, v5) )
      __debugbreak();
  }
  s_staticModels_Debug_NumShapeSimulationInstances[v2] += instanceCount;
}

/*
==============
StaticModels_Debug_AddTileDetailShapeInstanceCount
==============
*/
void StaticModels_Debug_AddTileDetailShapeInstanceCount(const unsigned __int8 *gridId, const unsigned int instanceCount)
{
  unsigned __int8 v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 

  if ( *gridId >= 0x20u )
  {
    v9 = 32;
    v7 = *gridId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 120, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v4 = gridId[1];
  if ( v4 >= 0x20u )
  {
    LODWORD(v8) = 32;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 121, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v5 = gridId[1] + 32i64 * *gridId;
  s_staticModels_Debug_NumTileShapeDetailInstances[0][v5] += instanceCount;
}

/*
==============
StaticModels_Debug_AddTileSimulationShapeInstanceCount
==============
*/
void StaticModels_Debug_AddTileSimulationShapeInstanceCount(const unsigned __int8 *gridId, const unsigned int instanceCount)
{
  unsigned __int8 v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 

  if ( *gridId >= 0x20u )
  {
    v9 = 32;
    v7 = *gridId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 111, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v4 = gridId[1];
  if ( v4 >= 0x20u )
  {
    LODWORD(v8) = 32;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 112, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v5 = gridId[1] + 32i64 * *gridId;
  s_staticModels_Debug_NumTileShapeSimulationInstances[0][v5] += instanceCount;
}

/*
==============
StaticModels_Debug_Draw
==============
*/
void StaticModels_Debug_Draw(const ScreenPlacement *scrPlace)
{
  const dvar_t *v2; 
  float integer; 
  const dvar_t *v4; 
  float v5; 
  float v6; 
  const dvar_t *v7; 
  char v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  float v13; 
  int v14; 
  const char *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  float x; 
  float y; 

  v2 = DVARINT_staticModels_debugDisplayOffsetX;
  if ( !DVARINT_staticModels_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugDisplayOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = (float)v2->current.integer;
  v4 = DVARINT_staticModels_debugDisplayOffsetY;
  v5 = integer + 8.0;
  x = integer + 8.0;
  if ( !DVARINT_staticModels_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugDisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v6 = (float)v4->current.integer;
  v7 = DVARBOOL_staticModels_debugArchiveFullDetails;
  v8 = 0;
  y = v6 + 8.0;
  if ( !DVARBOOL_staticModels_debugArchiveFullDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugArchiveFullDetails") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    StaticModels_Debug_Draw_Archive_Summary(scrPlace, &x, &y);
    v8 = 1;
    x = v5 + 6.0;
    StaticModels_Debug_Draw_Archive_SectionSummary(scrPlace, &x, &y);
    StaticModels_Debug_Draw_Archive_FullDetails(scrPlace, &x, &y);
LABEL_17:
    v5 = x + -6.0;
    x = x + -6.0;
    goto LABEL_23;
  }
  v9 = DVARBOOL_staticModels_debugArchiveSectionSummary;
  if ( !DVARBOOL_staticModels_debugArchiveSectionSummary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugArchiveSectionSummary") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    StaticModels_Debug_Draw_Archive_Summary(scrPlace, &x, &y);
    v8 = 1;
    x = v5 + 6.0;
    StaticModels_Debug_Draw_Archive_SectionSummary(scrPlace, &x, &y);
    goto LABEL_17;
  }
  v10 = DVARBOOL_staticModels_debugArchiveSummary;
  if ( !DVARBOOL_staticModels_debugArchiveSummary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugArchiveSummary") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    StaticModels_Debug_Draw_Archive_Summary(scrPlace, &x, &y);
    v8 = 1;
  }
LABEL_23:
  v11 = DVARBOOL_staticModels_debugInstances;
  if ( !DVARBOOL_staticModels_debugInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugInstances") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    if ( !v8 )
    {
      StaticModels_Debug_Draw_Archive_Summary(scrPlace, &x, &y);
      v8 = 1;
    }
    v12 = DVARINT_staticModels_debugTileIdx;
    v13 = v5 + 6.0;
    if ( !DVARINT_staticModels_debugTileIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugTileIdx") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v14 = v12->current.integer;
    v15 = j_va("Each tile has a shape instance budget of %iK for sim and %iK for detail", 8i64, 8i64);
    StaticModels_Debug_DrawString(scrPlace, v13, y, v15, &colorWhite);
    y = y + 6.0;
    x = v13 + 6.0;
    StaticModels_Debug_Draw_InstancesHeatmap(scrPlace, &x, &y, v14);
    if ( v14 < 0 || (unsigned int)v14 >= 0x400 )
    {
      StaticModels_Debug_Draw_OverlyExpensiveInstances(scrPlace, &x, &y);
      StaticModels_Debug_Draw_NotRootTransformInstances(scrPlace, &x, &y);
    }
    else
    {
      StaticModels_Debug_Draw_InstancesForTile(scrPlace, &x, &y, v14);
    }
    v5 = (float)(x - 6.0) - 6.0;
    x = v5;
  }
  v16 = DVARBOOL_staticModels_debugMemory;
  if ( !DVARBOOL_staticModels_debugMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugMemory") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled )
  {
    if ( !v8 )
      StaticModels_Debug_Draw_Archive_Summary(scrPlace, &x, &y);
    x = v5 + 6.0;
    StaticModels_Debug_Draw_Memory(scrPlace, &x, &y);
  }
  v17 = DVARBOOL_staticModels_debugDump;
  if ( !DVARBOOL_staticModels_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled )
    Dvar_SetBool_Internal(DVARBOOL_staticModels_debugDump, 0);
}

/*
==============
StaticModels_Debug_DrawString
==============
*/

void __fastcall StaticModels_Debug_DrawString(const ScreenPlacement *scrPlace, double x, float y, const char *string, const vec4_t *setColor)
{
  __int128 v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  float v9; 
  __int128 v10; 

  v6 = *(_OWORD *)&x;
  if ( y > 0.0 && y < 1080.0 )
    CG_DrawStringExt(scrPlace, *(float *)&x, y, string, setColor, 0, 1, 6.0, 0);
  v7 = DVARBOOL_staticModels_debugDump;
  if ( !DVARBOOL_staticModels_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    v8 = DVARINT_staticModels_debugDisplayOffsetX;
    if ( !DVARINT_staticModels_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugDisplayOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = (float)v8->current.integer + 8.0;
    if ( *(float *)&x > v9 )
    {
      do
      {
        Com_Printf(14, " ");
        v10 = v6;
        *(float *)&v10 = *(float *)&v6 + -6.0;
        v6 = v10;
      }
      while ( *(float *)&v10 > v9 );
    }
    Com_Printf(14, (const char *)&queryFormat, string);
    Com_Printf(14, "\n");
  }
}

/*
==============
StaticModels_Debug_Draw_Archive_FullDetails
==============
*/
void StaticModels_Debug_Draw_Archive_FullDetails(const ScreenPlacement *scrPlace, float *x, float *y)
{
  float *v3; 
  int v5; 
  const ScreenPlacement *v6; 
  StaticModelCollisionModelList *staticModelCollisionModelLists; 
  __int64 numStaticModelCollisionModelLists; 
  bool v9; 
  int v10; 
  int v11; 
  const CollisionTile **v12; 
  __int64 v13; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  unsigned int numModels; 
  int v16; 
  const char *v17; 
  float v18; 
  float v19; 
  unsigned int v20; 
  StaticModelCollisionModelList *v21; 
  unsigned int v22; 
  float v23; 
  __int64 v24; 
  bool IsClipmapZoneLoaded; 
  vec4_t *v26; 
  const char *v27; 
  __int64 v28; 
  StaticModelCollisionModel *models; 
  const PhysicsAsset *physicsAsset; 
  unsigned int numInstances; 
  int PhysicsAssetBodyCount; 
  const XModelDetailCollision *detailCollision; 
  int DetailCollisionShapeCount; 
  const char *v35; 
  const char *v36; 
  const char *v37; 
  const char *v38; 
  const char *v39; 
  vec4_t *setColor; 
  bool (__fastcall *hasCollisionFn)(const int); 
  int staticModelZoneIdx; 
  int v43; 
  unsigned int v44; 
  __int64 v45; 
  vec4_t v48; 
  char zoneName[272]; 

  v3 = y;
  v5 = 0;
  v6 = scrPlace;
  if ( cm.numStaticModelCollisionModelLists )
  {
    staticModelCollisionModelLists = cm.staticModelCollisionModelLists;
    numStaticModelCollisionModelLists = cm.numStaticModelCollisionModelLists;
    do
    {
      v9 = staticModelCollisionModelLists->numModels == 0;
      v10 = v5 + 1;
      ++staticModelCollisionModelLists;
      if ( v9 )
        v10 = v5;
      v5 = v10;
      --numStaticModelCollisionModelLists;
    }
    while ( numStaticModelCollisionModelLists );
  }
  v11 = 0;
  v12 = g_staticModels_CollisionTiles;
  v13 = 1024i64;
  do
  {
    if ( *v12 )
    {
      staticModelCollision = (*v12)->staticModelCollision;
      if ( staticModelCollision )
      {
        numModels = staticModelCollision->numModels;
        v16 = v11 + 1;
        if ( !numModels )
          v16 = v11;
        v11 = v16;
        if ( numModels )
          v11 = v16;
      }
    }
    ++v12;
    --v13;
  }
  while ( v13 );
  v43 = v11;
  if ( v5 )
  {
    v17 = "Zones";
    if ( v5 == 1 )
      v17 = "Zone";
    StaticModels_Debug_DrawString(v6, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *v3, v17, &colorWhite);
    *v3 = *v3 + 6.0;
    v18 = *x;
    v19 = *x + 6.0;
    *x = v19;
    v20 = cm.numStaticModelCollisionModelLists;
    v21 = cm.staticModelCollisionModelLists;
    v44 = cm.numStaticModelCollisionModelLists;
    staticModelZoneIdx = 0;
    if ( cm.numStaticModelCollisionModelLists )
    {
      v22 = 0;
      v23 = v18 + 6.0;
      do
      {
        v24 = v21->numModels;
        v19 = v23;
        if ( (_DWORD)v24 )
        {
          IsClipmapZoneLoaded = StaticModels_Debug_IsClipmapZoneLoaded(v22);
          v26 = &colorRed;
          if ( IsClipmapZoneLoaded )
            v26 = &colorWhite;
          v48 = *v26;
          StaticModels_Debug_GetClipmapZoneName(v22, zoneName);
          v27 = j_va((const char *)&queryFormat, zoneName);
          StaticModels_Debug_DrawString(v6, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *v3, v27, &v48);
          v28 = 0i64;
          *v3 = *v3 + 6.0;
          *x = *x + 6.0;
          v45 = v24;
          do
          {
            models = v21->models;
            physicsAsset = models[v28].physicsAsset;
            numInstances = models[v28].numInstances;
            if ( physicsAsset )
              PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(physicsAsset);
            else
              PhysicsAssetBodyCount = 0;
            detailCollision = models[v28].detailCollision;
            if ( detailCollision )
              DetailCollisionShapeCount = Physics_GetDetailCollisionShapeCount(detailCollision);
            else
              DetailCollisionShapeCount = PhysicsAssetBodyCount;
            v35 = SL_ConvertToString(models[v28].name);
            LODWORD(hasCollisionFn) = DetailCollisionShapeCount;
            LODWORD(setColor) = PhysicsAssetBodyCount;
            v36 = (char *)&queryFormat.fmt + 3;
            if ( numInstances != 1 )
              v36 = "s";
            v37 = j_va("%i instance%s of %s (Shape cost per instance: %i:Physics Asset %i:ColLod)", numInstances, v36, v35, setColor, hasCollisionFn);
            v3 = y;
            StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v37, &v48);
            ++v28;
            v9 = v45-- == 1;
            *y = *y + 6.0;
          }
          while ( !v9 );
          v22 = staticModelZoneIdx;
          v6 = scrPlace;
          v20 = v44;
          v19 = *x - 6.0;
          *x = v19;
          v23 = v19;
        }
        ++v22;
        ++v21;
        staticModelZoneIdx = v22;
      }
      while ( v22 < v20 );
      v11 = v43;
    }
    *x = v19 - 6.0;
  }
  if ( v11 )
  {
    v38 = "Tiles";
    if ( v11 == 1 )
      v38 = "Tile";
    StaticModels_Debug_DrawString(v6, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *v3, v38, &colorWhite);
    *v3 = *v3 + 6.0;
    v39 = j_va("Tile Details");
    StaticModels_Debug_DrawString(v6, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *v3, v39, &colorWhite);
    *v3 = *v3 + 6.0;
    *x = *x + 6.0;
    StaticModels_Debug_Draw_CollisionTileDetails(v6, x, v3, 0x400u, g_staticModels_CollisionTiles, StaticModels_Debug_IsCollisionTileLoaded, StaticModels_Debug_GetCollisionTileName);
    *x = *x - 6.0;
  }
}

/*
==============
StaticModels_Debug_Draw_Archive_SectionSummary
==============
*/
void StaticModels_Debug_Draw_Archive_SectionSummary(const ScreenPlacement *scrPlace, float *x, float *y)
{
  int v3; 
  int v7; 
  StaticModelCollisionModelList *staticModelCollisionModelLists; 
  __int64 numStaticModelCollisionModelLists; 
  bool v10; 
  int v11; 
  __int64 v12; 
  const CollisionTile **v13; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  unsigned int numModels; 
  int v16; 
  const char *v17; 
  const char *v18; 

  v3 = 0;
  v7 = 0;
  if ( cm.numStaticModelCollisionModelLists )
  {
    staticModelCollisionModelLists = cm.staticModelCollisionModelLists;
    numStaticModelCollisionModelLists = cm.numStaticModelCollisionModelLists;
    do
    {
      v10 = staticModelCollisionModelLists->numModels == 0;
      v11 = v7 + 1;
      ++staticModelCollisionModelLists;
      if ( v10 )
        v11 = v7;
      v7 = v11;
      --numStaticModelCollisionModelLists;
    }
    while ( numStaticModelCollisionModelLists );
  }
  v12 = 1024i64;
  v13 = g_staticModels_CollisionTiles;
  do
  {
    if ( *v13 )
    {
      staticModelCollision = (*v13)->staticModelCollision;
      if ( staticModelCollision )
      {
        numModels = staticModelCollision->numModels;
        v16 = v3 + 1;
        if ( !numModels )
          v16 = v3;
        v3 = v16;
        if ( numModels )
          v3 = v16;
      }
    }
    ++v13;
    --v12;
  }
  while ( v12 );
  if ( v7 )
  {
    v17 = "Zones";
    if ( v7 == 1 )
      v17 = "Zone";
    StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v17, &colorWhite);
    *y = *y + 6.0;
    *x = *x + 6.0;
    StaticModels_Debug_Draw_ClipmapZoneSummary(scrPlace, x, y, cm.numStaticModelCollisionModelLists, cm.staticModelCollisionModelLists, StaticModels_Debug_IsClipmapZoneLoaded, StaticModels_Debug_GetClipmapZoneName);
    *x = *x - 6.0;
  }
  if ( v3 )
  {
    v18 = "Tiles";
    if ( v3 == 1 )
      v18 = "Tile";
    StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v18, &colorWhite);
    *y = *y + 6.0;
    *x = *x + 6.0;
    StaticModels_Debug_Draw_CollisionTileSummary(scrPlace, x, y, 0x400u, g_staticModels_CollisionTiles, StaticModels_Debug_IsCollisionTileLoaded, StaticModels_Debug_GetCollisionTileName);
    *x = *x - 6.0;
  }
}

/*
==============
StaticModels_Debug_Draw_Archive_Summary
==============
*/
void StaticModels_Debug_Draw_Archive_Summary(const ScreenPlacement *scrPlace, float *x, float *y)
{
  unsigned int v5; 
  int v6; 
  int v7; 
  StaticModelCollisionModelList *staticModelCollisionModelLists; 
  __int64 numStaticModelCollisionModelLists; 
  unsigned int numModels; 
  unsigned int v13; 
  __int64 v14; 
  StaticModelCollisionModel *models; 
  int v16; 
  __int64 v17; 
  __int64 v23; 
  int v28; 
  int v29; 
  StaticModelCollisionModel *v30; 
  __int64 v31; 
  unsigned int v32; 
  __int64 v33; 
  int v37; 
  const CollisionTile **v38; 
  int v39; 
  __int64 v40; 
  int v41; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  unsigned int v45; 
  int v46; 
  unsigned int v47; 
  StaticModelCollisionCompressedModel *v48; 
  int v49; 
  __int64 v50; 
  __int64 v56; 
  int v61; 
  int v62; 
  StaticModelCollisionCompressedModel *v63; 
  __int64 v64; 
  unsigned int v65; 
  __int64 v66; 
  const char *v72; 
  unsigned int v73; 
  unsigned int v74; 
  int v75; 
  int v76; 
  __int64 v77; 
  int v81; 

  v5 = 0;
  v6 = 0;
  v73 = 0;
  v7 = 0;
  v81 = 0;
  if ( cm.numStaticModelCollisionModelLists )
  {
    staticModelCollisionModelLists = cm.staticModelCollisionModelLists;
    numStaticModelCollisionModelLists = cm.numStaticModelCollisionModelLists;
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    do
    {
      numModels = staticModelCollisionModelLists->numModels;
      v13 = v5 + 1;
      if ( !staticModelCollisionModelLists->numModels )
        v13 = v5;
      v14 = 0i64;
      v74 = v13;
      v75 = numModels + v6;
      v5 = v13;
      if ( numModels >= 8 )
      {
        models = staticModelCollisionModelLists->models;
        v16 = 2;
        do
        {
          v17 = v14;
          v14 = (unsigned int)(v14 + 8);
          _XMM0 = models[v17].numInstances;
          __asm
          {
            vpinsrd xmm0, xmm0, dword ptr [rsi+rdx*8+18h], 1
            vpinsrd xmm0, xmm0, dword ptr [rsi+r8*8+18h], 2
            vpinsrd xmm0, xmm0, dword ptr [rsi+r10*8+18h], 3
            vpaddd  xmm1, xmm0, xmm1
          }
          v23 = (unsigned int)(v16 + 2);
          v16 += 8;
          _XMM0 = models[v23].numInstances;
          __asm
          {
            vpinsrd xmm0, xmm0, dword ptr [rsi+rdx*8+18h], 1
            vpinsrd xmm0, xmm0, dword ptr [rsi+r8*8+18h], 2
            vpinsrd xmm0, xmm0, dword ptr [rsi+r9*8+18h], 3
            vpaddd  xmm2, xmm0, xmm2
          }
        }
        while ( (unsigned int)v14 < (numModels & 0xFFFFFFF8) );
        v7 = v81;
        v5 = v74;
      }
      v28 = 0;
      v29 = 0;
      if ( (unsigned int)v14 < numModels )
      {
        if ( numModels - (unsigned int)v14 >= 2 )
        {
          v30 = staticModelCollisionModelLists->models;
          v31 = v14;
          v32 = ((numModels - (unsigned int)v14 - 2) >> 1) + 1;
          v33 = v32;
          v14 = (unsigned int)v14 + 2 * v32;
          do
          {
            v28 += v30[v31].numInstances;
            v29 += v30[v31 + 1].numInstances;
            v31 += 2i64;
            --v33;
          }
          while ( v33 );
        }
        if ( (unsigned int)v14 < numModels )
          v7 += staticModelCollisionModelLists->models[v14].numInstances;
        v7 += v29 + v28;
        v81 = v7;
      }
      v6 = v75;
      ++staticModelCollisionModelLists;
      --numStaticModelCollisionModelLists;
    }
    while ( numStaticModelCollisionModelLists );
    __asm
    {
      vpaddd  xmm1, xmm2, xmm1
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
    }
    v73 = v5;
  }
  v37 = 0;
  v38 = g_staticModels_CollisionTiles;
  v39 = 0;
  v40 = 1024i64;
  v41 = 0;
  v77 = 1024i64;
  __asm
  {
    vpxor   xmm1, xmm1, xmm1
    vpxor   xmm2, xmm2, xmm2
  }
  do
  {
    if ( *v38 )
    {
      staticModelCollision = (*v38)->staticModelCollision;
      if ( staticModelCollision )
      {
        v45 = staticModelCollision->numModels;
        v46 = v37 + 1;
        if ( !staticModelCollision->numModels )
          v46 = v37;
        v47 = 0;
        v76 = v45 + v39;
        v37 = v46;
        if ( v45 >= 8 )
        {
          v48 = staticModelCollision->models;
          v49 = 2;
          do
          {
            v50 = v47;
            v47 += 8;
            _XMM0 = v48[v50].numInstances;
            __asm
            {
              vpinsrd xmm0, xmm0, dword ptr [rdx+rsi+2Ch], 1
              vpinsrd xmm0, xmm0, dword ptr [r8+rsi+2Ch], 2
              vpinsrd xmm0, xmm0, dword ptr [r10+rsi+2Ch], 3
              vpaddd  xmm1, xmm0, xmm1
            }
            v56 = (unsigned int)(v49 + 2);
            v49 += 8;
            _XMM0 = v48[v56].numInstances;
            __asm
            {
              vpinsrd xmm0, xmm0, dword ptr [rdx+rsi+2Ch], 1
              vpinsrd xmm0, xmm0, dword ptr [r8+rsi+2Ch], 2
              vpinsrd xmm0, xmm0, dword ptr [r9+rsi+2Ch], 3
              vpaddd  xmm2, xmm0, xmm2
            }
          }
          while ( v47 < (v45 & 0xFFFFFFF8) );
          v40 = v77;
        }
        v61 = 0;
        v62 = 0;
        if ( v47 < v45 )
        {
          if ( v45 - v47 >= 2 )
          {
            v63 = staticModelCollision->models;
            v64 = v47;
            v65 = ((v45 - v47 - 2) >> 1) + 1;
            v66 = v65;
            v47 += 2 * v65;
            do
            {
              v61 += v63[v64].numInstances;
              v62 += v63[v64 + 1].numInstances;
              v64 += 2i64;
              --v66;
            }
            while ( v66 );
          }
          if ( v47 < v45 )
            v41 += staticModelCollision->models[v47].numInstances;
          v41 += v62 + v61;
        }
        v39 = v76;
      }
    }
    ++v38;
    v77 = --v40;
  }
  while ( v40 );
  __asm
  {
    vpaddd  xmm1, xmm2, xmm1
    vpsrldq xmm0, xmm1, 8
    vpaddd  xmm2, xmm1, xmm0
    vpsrldq xmm0, xmm2, 4
    vpaddd  xmm0, xmm2, xmm0
  }
  v72 = j_va("Static Models - %i zone%s with %i instance%s of %i unique model%s - %i tile%s with %i instance%s of %i unique model%s", v73);
  StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v72, &colorWhite);
  *y = *y + 6.0;
}

/*
==============
StaticModels_Debug_Draw_ClipmapZoneMemory
==============
*/
void StaticModels_Debug_Draw_ClipmapZoneMemory(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int numZones, const StaticModelCollisionModelList *zones, bool (*hasCollisionFn)(const int), void (*zoneNameFn)(const int, char *), const bool drawTotals)
{
  signed __int64 v8; 
  void *v9; 
  unsigned int v10; 
  float *v11; 
  bool (__fastcall *v12)(const int); 
  const ScreenPlacement *v13; 
  float *v14; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  StaticModelCollisionModel **p_models; 
  unsigned int v21; 
  bool v22; 
  unsigned int v23; 
  vec4_t *v24; 
  StaticModelCollisionModel *v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 physicsAsset; 
  unsigned int v30; 
  __int64 *v31; 
  unsigned int v32; 
  __int64 *v33; 
  __int64 v34; 
  __int64 detailCollision; 
  unsigned int v36; 
  __int64 *v37; 
  unsigned int v38; 
  __int64 *v39; 
  __int64 v40; 
  unsigned int v41; 
  __int64 *v42; 
  __int64 v43; 
  __int64 *v44; 
  __int64 v45; 
  const char *v46; 
  __int64 *v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 *v50; 
  __int64 v51; 
  __int64 v52; 
  const char *v53; 
  unsigned int v54; 
  vec4_t setColor; 
  __int64 v59[15000]; 
  __int64 v60[15000]; 
  __int64 v61[16312]; 
  __int64 v62[16312]; 
  char v63[272]; 

  v9 = alloca(v8);
  v10 = 0;
  v11 = x;
  v12 = hasCollisionFn;
  v13 = scrPlace;
  v14 = y;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v54 = 0;
  v19 = 0;
  if ( numZones )
  {
    p_models = &zones->models;
    do
    {
      v21 = *((_DWORD *)p_models - 2);
      if ( v21 )
      {
        v22 = v12(v19);
        v23 = *((_DWORD *)p_models + 2);
        v24 = &colorRed;
        v25 = *p_models;
        v26 = 0i64;
        if ( v22 )
          v24 = &colorWhite;
        v27 = 0i64;
        v54 += v23;
        v28 = v21;
        setColor = *v24;
        do
        {
          physicsAsset = (__int64)v25->physicsAsset;
          if ( physicsAsset )
          {
            v30 = 0;
            if ( (_DWORD)v26 )
            {
              v31 = v59;
              while ( *v31 != physicsAsset )
              {
                ++v30;
                ++v31;
                if ( v30 >= (unsigned int)v26 )
                  goto LABEL_12;
              }
            }
            else
            {
LABEL_12:
              v59[v26] = physicsAsset;
              v26 = (unsigned int)(v26 + 1);
            }
            v32 = 0;
            if ( v17 )
            {
              v33 = v60;
              while ( *v33 != physicsAsset )
              {
                ++v32;
                ++v33;
                if ( v32 >= v17 )
                  goto LABEL_17;
              }
            }
            else
            {
LABEL_17:
              v34 = v17++;
              v60[v34] = physicsAsset;
            }
          }
          detailCollision = (__int64)v25->detailCollision;
          if ( detailCollision )
          {
            v36 = 0;
            if ( (_DWORD)v27 )
            {
              v37 = v61;
              while ( *v37 != detailCollision )
              {
                ++v36;
                ++v37;
                if ( v36 >= (unsigned int)v27 )
                  goto LABEL_23;
              }
            }
            else
            {
LABEL_23:
              v61[v27] = detailCollision;
              v27 = (unsigned int)(v27 + 1);
            }
            v38 = 0;
            if ( v18 )
            {
              v39 = v62;
              while ( *v39 != detailCollision )
              {
                ++v38;
                ++v39;
                if ( v38 >= v18 )
                  goto LABEL_28;
              }
            }
            else
            {
LABEL_28:
              v40 = v18++;
              v62[v40] = detailCollision;
            }
          }
          ++v25;
          --v28;
        }
        while ( v28 );
        v41 = 0;
        if ( (_DWORD)v26 )
        {
          v42 = v59;
          do
          {
            v43 = *v42++;
            v41 += *(_DWORD *)(v43 + 16) + 88;
            --v26;
          }
          while ( v26 );
        }
        if ( (_DWORD)v27 )
        {
          v44 = v61;
          do
          {
            v45 = *v44++;
            v41 += *(_DWORD *)(v45 + 8) + 40;
            --v27;
          }
          while ( v27 );
        }
        zoneNameFn(v19, v63);
        v46 = j_va("%s %i bytes of Structure, referencing %i bytes in assets", v63, v23, v41);
        v14 = y;
        v11 = x;
        StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v46, &setColor);
        v12 = hasCollisionFn;
        *y = *y + 6.0;
      }
      else
      {
        v14 = y;
      }
      ++v19;
      p_models += 3;
    }
    while ( v19 < numZones );
    v16 = v54;
    v13 = scrPlace;
  }
  if ( drawTotals )
  {
    if ( v17 )
    {
      v47 = v60;
      v48 = v17;
      do
      {
        v49 = *v47++;
        v10 += *(_DWORD *)(v49 + 16) + 88;
        --v48;
      }
      while ( v48 );
    }
    if ( v18 )
    {
      v50 = v62;
      v51 = v18;
      do
      {
        v52 = *v50++;
        v10 += *(_DWORD *)(v52 + 8) + 40;
        --v51;
      }
      while ( v51 );
    }
    v53 = j_va("Zone Total %i bytes of Structure, referencing %i bytes in assets", v16, v10);
    StaticModels_Debug_DrawString(v13, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)v11), *v14, v53, &colorWhite);
    *v14 = *v14 + 6.0;
  }
}

/*
==============
StaticModels_Debug_Draw_ClipmapZoneSummary
==============
*/
void StaticModels_Debug_Draw_ClipmapZoneSummary(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int numZones, const StaticModelCollisionModelList *zones, bool (*hasCollisionFn)(const int), void (*zoneNameFn)(const int, char *))
{
  bool (__fastcall *v8)(const int); 
  unsigned int v9; 
  float *v12; 
  const ScreenPlacement *v13; 
  unsigned int numModels; 
  unsigned int numInstances; 
  __int64 v17; 
  StaticModelCollisionModel *models; 
  int v20; 
  __int64 v21; 
  __int64 v27; 
  __int64 v32; 
  __int64 v33; 
  StaticModelCollisionModel *v34; 
  __int64 v35; 
  unsigned int v36; 
  __int64 v37; 
  unsigned int v43; 
  char v44; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  const char *v48; 
  const vec4_t *setColor; 
  __int64 v50; 
  char v54[272]; 
  __int128 v55; 

  v8 = hasCollisionFn;
  v9 = 0;
  v12 = y;
  v13 = scrPlace;
  if ( numZones )
  {
    v55 = _XMM6;
    __asm { vpxor   xmm6, xmm6, xmm6 }
    do
    {
      numModels = zones->numModels;
      numInstances = 0;
      v17 = 0i64;
      _XMM2 = _XMM6;
      if ( zones->numModels >= 8 )
      {
        models = zones->models;
        v20 = 2;
        do
        {
          v21 = v17;
          v17 = (unsigned int)(v17 + 8);
          _XMM0 = models[v21].numInstances;
          __asm
          {
            vpinsrd xmm0, xmm0, dword ptr [rsi+rdx*8+18h], 1
            vpinsrd xmm0, xmm0, dword ptr [rsi+r8*8+18h], 2
            vpinsrd xmm0, xmm0, dword ptr [rsi+r10*8+18h], 3
            vpaddd  xmm1, xmm0, xmm1
          }
          v27 = (unsigned int)(v20 + 2);
          v20 += 8;
          _XMM0 = models[v27].numInstances;
          __asm
          {
            vpinsrd xmm0, xmm0, dword ptr [rsi+rdx*8+18h], 1
            vpinsrd xmm0, xmm0, dword ptr [rsi+r8*8+18h], 2
            vpinsrd xmm0, xmm0, dword ptr [rsi+r9*8+18h], 3
            vpaddd  xmm2, xmm0, xmm2
          }
        }
        while ( (unsigned int)v17 < (numModels & 0xFFFFFFF8) );
        v12 = y;
        v13 = scrPlace;
        v8 = hasCollisionFn;
      }
      v32 = 0i64;
      v33 = 0i64;
      if ( (unsigned int)v17 < numModels )
      {
        if ( numModels - (unsigned int)v17 >= 2 )
        {
          v34 = zones->models;
          v35 = v17;
          v36 = ((numModels - (unsigned int)v17 - 2) >> 1) + 1;
          v37 = v36;
          v17 = (unsigned int)v17 + 2 * v36;
          do
          {
            v32 = (unsigned int)(v34[v35].numInstances + v32);
            v33 = (unsigned int)(v34[v35 + 1].numInstances + v33);
            v35 += 2i64;
            --v37;
          }
          while ( v37 );
        }
        if ( (unsigned int)v17 < numModels )
          numInstances = zones->models[v17].numInstances;
        numInstances += v33 + v32;
      }
      __asm
      {
        vpaddd  xmm1, xmm2, xmm1
        vpsrldq xmm0, xmm1, 8
        vpaddd  xmm2, xmm1, xmm0
        vpsrldq xmm0, xmm2, 4
        vpaddd  xmm0, xmm2, xmm0
      }
      v43 = _XMM0 + numInstances;
      if ( numModels )
      {
        v44 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))v8)(v9, v32, v33);
        zoneNameFn(v9, v54);
        v45 = (char *)&queryFormat.fmt + 3;
        if ( numModels != 1 )
          v45 = "s";
        v46 = (char *)&queryFormat.fmt + 3;
        v47 = "Unloaded";
        LODWORD(v50) = numModels;
        if ( v43 != 1 )
          v46 = "s";
        if ( v44 )
          v47 = "Loaded";
        v48 = j_va("%s (%s) has %i instance%s of %i unique model%s", v54, v47, v43, v46, v50, v45);
        setColor = &colorRed;
        if ( v44 )
          setColor = &colorWhite;
        StaticModels_Debug_DrawString(v13, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *v12, v48, setColor);
        *v12 = *v12 + 6.0;
      }
      v8 = hasCollisionFn;
      ++v9;
      ++zones;
    }
    while ( v9 < numZones );
  }
}

/*
==============
StaticModels_Debug_Draw_CollisionTileDetails
==============
*/
void StaticModels_Debug_Draw_CollisionTileDetails(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int numTiles, const CollisionTile **collisionTiles, bool (*hasCollisionFn)(const int), void (*tileNameFn)(const int, char *))
{
  const CollisionTile **v7; 
  unsigned int v8; 
  void (__fastcall *v9)(const int, char *); 
  bool (__fastcall *v11)(const int); 
  const ScreenPlacement *v13; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  __int64 numModels; 
  bool v16; 
  vec4_t *v17; 
  const char *v18; 
  __int64 v19; 
  StaticModelCollisionCompressedModel *models; 
  const PhysicsAsset *physicsAsset; 
  unsigned int numInstances; 
  int PhysicsAssetBodyCount; 
  const XModelDetailCollision *detailCollision; 
  int DetailCollisionShapeCount; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  bool v29; 
  vec4_t *setColor; 
  __int64 v31; 
  unsigned int i; 
  unsigned int v33; 
  __int64 v34; 
  const CollisionTile **v35; 
  vec4_t v37; 
  char v38[272]; 

  v7 = collisionTiles;
  v8 = 0;
  v9 = tileNameFn;
  v11 = hasCollisionFn;
  v13 = scrPlace;
  v33 = numTiles;
  v35 = collisionTiles;
  for ( i = 0; v8 < numTiles; v35 = v7 )
  {
    if ( *v7 )
    {
      staticModelCollision = (*v7)->staticModelCollision;
      if ( staticModelCollision )
      {
        numModels = staticModelCollision->numModels;
        if ( (_DWORD)numModels )
        {
          v16 = v11(v8);
          v17 = &colorRed;
          if ( v16 )
            v17 = &colorWhite;
          v37 = *v17;
          v9(v8, v38);
          v18 = j_va((const char *)&queryFormat, v38);
          StaticModels_Debug_DrawString(v13, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v18, &v37);
          *y = *y + 6.0;
          *x = *x + 6.0;
          v19 = 0i64;
          v34 = numModels;
          do
          {
            models = staticModelCollision->models;
            physicsAsset = models[v19].physicsAsset;
            numInstances = models[v19].numInstances;
            if ( physicsAsset )
              PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(physicsAsset);
            else
              PhysicsAssetBodyCount = 0;
            detailCollision = models[v19].detailCollision;
            if ( detailCollision )
              DetailCollisionShapeCount = Physics_GetDetailCollisionShapeCount(detailCollision);
            else
              DetailCollisionShapeCount = PhysicsAssetBodyCount;
            v26 = SL_ConvertToString(models[v19].name);
            LODWORD(v31) = DetailCollisionShapeCount;
            LODWORD(setColor) = PhysicsAssetBodyCount;
            v27 = (char *)&queryFormat.fmt + 3;
            if ( numInstances != 1 )
              v27 = "s";
            v28 = j_va("%i instance%s of %s (Shape cost per instance: %i:Physics Asset %i:ColLod)", numInstances, v27, v26, setColor, v31);
            v13 = scrPlace;
            StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v28, &v37);
            ++v19;
            v29 = v34-- == 1;
            *y = *y + 6.0;
          }
          while ( !v29 );
          v8 = i;
          v7 = v35;
          numTiles = v33;
          v11 = hasCollisionFn;
          v9 = tileNameFn;
          *x = *x - 6.0;
        }
      }
    }
    ++v8;
    ++v7;
    i = v8;
  }
}

/*
==============
StaticModels_Debug_Draw_CollisionTileMemory
==============
*/
void StaticModels_Debug_Draw_CollisionTileMemory(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int numTiles, const CollisionTile **collisionTiles, bool (*hasCollisionFn)(const int), void (*tileNameFn)(const int, char *), const bool drawTotals)
{
  signed __int64 v8; 
  void *v9; 
  unsigned int v11; 
  float *v12; 
  bool (__fastcall *v13)(const int); 
  const ScreenPlacement *v14; 
  unsigned int v15; 
  float *v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  unsigned int numModels; 
  bool v23; 
  __int64 v24; 
  __int64 v25; 
  vec4_t *v26; 
  __int64 v27; 
  unsigned int structureMemoryCost; 
  StaticModelCollisionCompressedModel *models; 
  __int64 physicsAsset; 
  unsigned int v31; 
  __int64 *v32; 
  unsigned int v33; 
  __int64 *v34; 
  __int64 v35; 
  __int64 detailCollision; 
  unsigned int v37; 
  __int64 *v38; 
  unsigned int v39; 
  __int64 *v40; 
  __int64 v41; 
  unsigned int v42; 
  __int64 *v43; 
  __int64 v44; 
  __int64 *v45; 
  __int64 v46; 
  const char *v47; 
  __int64 *v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 *v51; 
  __int64 v52; 
  __int64 v53; 
  const char *v54; 
  unsigned int v55; 
  vec4_t setColor; 
  __int64 v61[15000]; 
  __int64 v62[15000]; 
  __int64 v63[16312]; 
  __int64 v64[16312]; 
  char v65[272]; 

  v9 = alloca(v8);
  v11 = 0;
  v12 = x;
  v13 = hasCollisionFn;
  v14 = scrPlace;
  v15 = numTiles;
  v16 = y;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v55 = 0;
  if ( numTiles )
  {
    while ( 1 )
    {
      if ( *collisionTiles )
      {
        staticModelCollision = (*collisionTiles)->staticModelCollision;
        if ( staticModelCollision )
        {
          numModels = staticModelCollision->numModels;
          if ( staticModelCollision->numModels )
          {
            v23 = !v13(v20);
            v24 = 0i64;
            v25 = 0i64;
            v26 = &colorRed;
            v27 = numModels;
            if ( !v23 )
              v26 = &colorWhite;
            setColor = *v26;
            structureMemoryCost = staticModelCollision->structureMemoryCost;
            v55 += structureMemoryCost;
            models = staticModelCollision->models;
            do
            {
              physicsAsset = (__int64)models->physicsAsset;
              if ( physicsAsset )
              {
                v31 = 0;
                if ( (_DWORD)v24 )
                {
                  v32 = v61;
                  while ( *v32 != physicsAsset )
                  {
                    ++v31;
                    ++v32;
                    if ( v31 >= (unsigned int)v24 )
                      goto LABEL_13;
                  }
                }
                else
                {
LABEL_13:
                  v61[v24] = physicsAsset;
                  v24 = (unsigned int)(v24 + 1);
                }
                v33 = 0;
                if ( v18 )
                {
                  v34 = v62;
                  while ( *v34 != physicsAsset )
                  {
                    ++v33;
                    ++v34;
                    if ( v33 >= v18 )
                      goto LABEL_18;
                  }
                }
                else
                {
LABEL_18:
                  v35 = v18++;
                  v62[v35] = physicsAsset;
                }
              }
              detailCollision = (__int64)models->detailCollision;
              if ( detailCollision )
              {
                v37 = 0;
                if ( (_DWORD)v25 )
                {
                  v38 = v63;
                  while ( *v38 != detailCollision )
                  {
                    ++v37;
                    ++v38;
                    if ( v37 >= (unsigned int)v25 )
                      goto LABEL_24;
                  }
                }
                else
                {
LABEL_24:
                  v63[v25] = detailCollision;
                  v25 = (unsigned int)(v25 + 1);
                }
                v39 = 0;
                if ( v19 )
                {
                  v40 = v64;
                  while ( *v40 != detailCollision )
                  {
                    ++v39;
                    ++v40;
                    if ( v39 >= v19 )
                      goto LABEL_29;
                  }
                }
                else
                {
LABEL_29:
                  v41 = v19++;
                  v64[v41] = detailCollision;
                }
              }
              ++models;
              --v27;
            }
            while ( v27 );
            v42 = 0;
            if ( (_DWORD)v24 )
            {
              v43 = v61;
              do
              {
                v44 = *v43++;
                v42 += *(_DWORD *)(v44 + 16) + 88;
                --v24;
              }
              while ( v24 );
            }
            if ( (_DWORD)v25 )
            {
              v45 = v63;
              do
              {
                v46 = *v45++;
                v42 += *(_DWORD *)(v46 + 8) + 40;
                --v25;
              }
              while ( v25 );
            }
            tileNameFn(v20, v65);
            v47 = j_va("%s %i bytes of Structure, referencing %i bytes in assets", v65, structureMemoryCost, v42);
            v16 = y;
            v12 = x;
            v14 = scrPlace;
            StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v47, &setColor);
            v15 = numTiles;
            v13 = hasCollisionFn;
            *y = *y + 6.0;
            goto LABEL_40;
          }
          v14 = scrPlace;
        }
      }
      v16 = y;
LABEL_40:
      ++v20;
      ++collisionTiles;
      if ( v20 >= v15 )
      {
        v17 = v55;
        break;
      }
    }
  }
  if ( drawTotals )
  {
    if ( v18 )
    {
      v48 = v62;
      v49 = v18;
      do
      {
        v50 = *v48++;
        v11 += *(_DWORD *)(v50 + 16) + 88;
        --v49;
      }
      while ( v49 );
    }
    if ( v19 )
    {
      v51 = v64;
      v52 = v19;
      do
      {
        v53 = *v51++;
        v11 += *(_DWORD *)(v53 + 8) + 40;
        --v52;
      }
      while ( v52 );
    }
    v54 = j_va("Tile Total %i bytes of Structure, referencing %i bytes in assets", v17, v11);
    StaticModels_Debug_DrawString(v14, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)v12), *v16, v54, &colorWhite);
    *v16 = *v16 + 6.0;
  }
}

/*
==============
StaticModels_Debug_Draw_CollisionTileSummary
==============
*/
void StaticModels_Debug_Draw_CollisionTileSummary(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int numTiles, const CollisionTile **collisionTiles, bool (*hasCollisionFn)(const int), void (*tileNameFn)(const int, char *))
{
  bool (__fastcall *v9)(const int); 
  unsigned int v10; 
  unsigned int v11; 
  float *i; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  unsigned int numModels; 
  unsigned int numInstances; 
  unsigned int v17; 
  StaticModelCollisionCompressedModel *models; 
  int v21; 
  __int64 v22; 
  __int64 v28; 
  __int64 v33; 
  __int64 v34; 
  StaticModelCollisionCompressedModel *v35; 
  __int64 v36; 
  unsigned int v37; 
  __int64 v38; 
  unsigned int v42; 
  char v43; 
  const char *v44; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  const vec4_t *setColor; 
  __int128 v49; 
  __int64 v50; 
  char v55[272]; 

  v9 = hasCollisionFn;
  v10 = 0;
  v11 = numTiles;
  for ( i = y; v10 < v11; ++collisionTiles )
  {
    if ( *collisionTiles )
    {
      staticModelCollision = (*collisionTiles)->staticModelCollision;
      if ( staticModelCollision )
      {
        numModels = staticModelCollision->numModels;
        numInstances = 0;
        v17 = 0;
        __asm
        {
          vpxor   xmm1, xmm1, xmm1
          vpxor   xmm2, xmm2, xmm2
        }
        if ( staticModelCollision->numModels >= 8 )
        {
          models = staticModelCollision->models;
          v21 = 2;
          do
          {
            v22 = v17;
            v17 += 8;
            _XMM0 = models[v22].numInstances;
            __asm
            {
              vpinsrd xmm0, xmm0, dword ptr [rdx+rsi+2Ch], 1
              vpinsrd xmm0, xmm0, dword ptr [r8+rsi+2Ch], 2
              vpinsrd xmm0, xmm0, dword ptr [r10+rsi+2Ch], 3
              vpaddd  xmm1, xmm0, xmm1
            }
            v28 = (unsigned int)(v21 + 2);
            v21 += 8;
            _XMM0 = models[v28].numInstances;
            __asm
            {
              vpinsrd xmm0, xmm0, dword ptr [rdx+rsi+2Ch], 1
              vpinsrd xmm0, xmm0, dword ptr [r8+rsi+2Ch], 2
              vpinsrd xmm0, xmm0, dword ptr [r9+rsi+2Ch], 3
              vpaddd  xmm2, xmm0, xmm2
            }
          }
          while ( v17 < (numModels & 0xFFFFFFF8) );
          v11 = numTiles;
          i = y;
          v9 = hasCollisionFn;
        }
        v33 = 0i64;
        v34 = 0i64;
        if ( v17 < numModels )
        {
          if ( numModels - v17 >= 2 )
          {
            v35 = staticModelCollision->models;
            v36 = v17;
            v37 = ((numModels - v17 - 2) >> 1) + 1;
            v38 = v37;
            v17 += 2 * v37;
            do
            {
              v33 = (unsigned int)(v35[v36].numInstances + v33);
              v34 = (unsigned int)(v35[v36 + 1].numInstances + v34);
              v36 += 2i64;
              --v38;
            }
            while ( v38 );
          }
          if ( v17 < numModels )
            numInstances = staticModelCollision->models[v17].numInstances;
          numInstances += v34 + v33;
        }
        __asm
        {
          vpaddd  xmm1, xmm2, xmm1
          vpsrldq xmm0, xmm1, 8
          vpaddd  xmm2, xmm1, xmm0
          vpsrldq xmm0, xmm2, 4
          vpaddd  xmm0, xmm2, xmm0
        }
        v42 = _XMM0 + numInstances;
        if ( numModels )
        {
          v43 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))v9)(v10, v33, v34);
          tileNameFn(v10, v55);
          v44 = (char *)&queryFormat.fmt + 3;
          if ( numModels != 1 )
            v44 = "s";
          v45 = (char *)&queryFormat.fmt + 3;
          v46 = "Unloaded";
          LODWORD(v50) = numModels;
          if ( v42 != 1 )
            v45 = "s";
          if ( v43 )
            v46 = "Loaded";
          v47 = j_va("%s (%s) has %i instance%s of %i unique model%s", v55, v46, v42, v45, v50, v44);
          _XMM2 = *(unsigned int *)i;
          setColor = &colorRed;
          if ( v43 )
            setColor = &colorWhite;
          StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *(float *)&_XMM2, v47, setColor);
          v49 = LODWORD(FLOAT_6_0);
          *(float *)&v49 = *i + 6.0;
          _XMM1 = v49;
          *i = *(float *)&v49;
        }
      }
    }
    v9 = hasCollisionFn;
    ++v10;
  }
}

/*
==============
StaticModels_Debug_Draw_GetTileColor
==============
*/
void StaticModels_Debug_Draw_GetTileColor(int tileIdx, vec4_t *color)
{
  const CollisionTile *v2; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  float v6; 

  v2 = g_staticModels_CollisionTiles[tileIdx];
  if ( v2 )
  {
    v4 = v2->gridId[1] + 32i64 * v2->gridId[0];
    v5 = s_staticModels_Debug_NumTileShapeSimulationInstances[0][v4];
    v3 = s_staticModels_Debug_NumTileShapeDetailInstances[0][v4];
    if ( v5 > v3 )
      v3 = v5;
  }
  else
  {
    v3 = 0;
  }
  color->v[0] = colorMdGreen.v[0];
  color->v[1] = colorMdGreen.v[1];
  color->v[2] = colorMdGreen.v[2];
  if ( v3 <= 0x2000 )
  {
    v6 = (float)v3;
    if ( v6 <= 7372.7998 )
    {
      if ( v6 > 6144.0 )
      {
        color->v[0] = colorGreen.v[0];
        color->v[1] = colorGreen.v[1];
        color->v[2] = colorGreen.v[2];
      }
    }
    else
    {
      color->v[0] = colorYellow.v[0];
      color->v[1] = colorYellow.v[1];
      color->v[2] = colorYellow.v[2];
    }
  }
  else
  {
    color->v[0] = colorRed.v[0];
    color->v[1] = colorRed.v[1];
    color->v[2] = colorRed.v[2];
  }
}

/*
==============
StaticModels_Debug_Draw_InstancesForTile
==============
*/
void StaticModels_Debug_Draw_InstancesForTile(const ScreenPlacement *scrPlace, float *x, float *y, int tileIdx)
{
  float *v7; 
  const ScreenPlacement *v9; 
  const CollisionTile *v10; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  int v12; 
  __int64 numModels; 
  unsigned int v14; 
  StaticModelCollisionCompressedModel *models; 
  int v16; 
  __int64 v19; 
  __int64 v25; 
  int v36; 
  int v37; 
  StaticModelCollisionCompressedModel *v38; 
  __int64 v39; 
  unsigned int v40; 
  __int64 v41; 
  const char *v42; 
  const char *v43; 
  float v44; 
  __int64 v45; 
  StaticModelCollisionCompressedModel *v46; 
  const char *v47; 
  const PhysicsAsset *physicsAsset; 
  unsigned int PhysicsAssetBodyCount; 
  const XModelDetailCollision *detailCollision; 
  unsigned int DetailCollisionShapeCount; 
  char v52; 
  char v53; 
  bool v54; 
  const XModelDetailCollision *v55; 
  bool v56; 
  unsigned int v57; 
  bool v58; 
  vec4_t *v59; 
  const char *v60; 
  vec4_t v61; 
  const char *v62; 
  const char *v63; 
  bool v64; 
  __int64 v65; 
  unsigned int numInstances; 
  __int64 v69; 
  const char *v70; 
  vec3_t bodyPosition; 
  vec3_t shapePosition; 
  vec4_t bodyOrientationAsQuat; 
  vec4_t shapeOrientationAsQuat; 
  vec4_t setColor; 

  v7 = y;
  v9 = scrPlace;
  v10 = g_staticModels_CollisionTiles[tileIdx];
  if ( v10 )
  {
    staticModelCollision = v10->staticModelCollision;
    if ( staticModelCollision )
    {
      v12 = 0;
      numModels = staticModelCollision->numModels;
      v14 = 0;
      if ( (unsigned int)numModels >= 8 )
      {
        models = staticModelCollision->models;
        v16 = 2;
        __asm
        {
          vpxor   xmm1, xmm1, xmm1
          vpxor   xmm2, xmm2, xmm2
        }
        do
        {
          v19 = v14;
          v14 += 8;
          _XMM0 = models[v19].numInstances;
          __asm
          {
            vpinsrd xmm0, xmm0, dword ptr [rdx+rsi+2Ch], 1
            vpinsrd xmm0, xmm0, dword ptr [r8+rsi+2Ch], 2
            vpinsrd xmm0, xmm0, dword ptr [r10+rsi+2Ch], 3
            vpaddd  xmm1, xmm0, xmm1
          }
          v25 = (unsigned int)(v16 + 2);
          v16 += 8;
          _XMM0 = models[v25].numInstances;
          __asm
          {
            vpinsrd xmm0, xmm0, dword ptr [rdx+rsi+2Ch], 1
            vpinsrd xmm0, xmm0, dword ptr [r8+rsi+2Ch], 2
            vpinsrd xmm0, xmm0, dword ptr [r9+rsi+2Ch], 3
            vpaddd  xmm2, xmm0, xmm2
          }
        }
        while ( v14 < ((unsigned int)numModels & 0xFFFFFFF8) );
        v7 = y;
        v9 = scrPlace;
        __asm
        {
          vpaddd  xmm1, xmm2, xmm1
          vpsrldq xmm0, xmm1, 8
          vpaddd  xmm2, xmm1, xmm0
          vpsrldq xmm0, xmm2, 4
          vpaddd  xmm0, xmm2, xmm0
        }
        v12 = _XMM0;
      }
      v36 = 0;
      v37 = 0;
      if ( v14 < (unsigned int)numModels )
      {
        if ( (unsigned int)numModels - v14 >= 2 )
        {
          v38 = staticModelCollision->models;
          v39 = v14;
          v40 = (((unsigned int)numModels - v14 - 2) >> 1) + 1;
          v41 = v40;
          v14 += 2 * v40;
          do
          {
            v36 += v38[v39].numInstances;
            v37 += v38[v39 + 1].numInstances;
            v39 += 2i64;
            --v41;
          }
          while ( v41 );
        }
        if ( v14 < (unsigned int)numModels )
          v12 += staticModelCollision->models[v14].numInstances;
        v12 += v37 + v36;
      }
      v42 = j_va("Tile %i at position %.2f, %.2f has %i instances of %i models", (unsigned int)tileIdx, v10->origin.v[0], v10->origin.v[1], v12, numModels);
      StaticModels_Debug_DrawString(v9, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *v7, v42, &colorWhite);
      *v7 = *v7 + 6.0;
      v43 = j_va("We list models that generate more than one shape instance or don't have origin as their collision root transform in red - these should be fixed");
      StaticModels_Debug_DrawString(v9, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *v7, v43, &colorRed);
      *v7 = *v7 + 6.0;
      v44 = *x + 6.0;
      *x = v44;
      if ( (_DWORD)numModels )
      {
        v45 = 0i64;
        v69 = numModels;
        do
        {
          v46 = staticModelCollision->models;
          numInstances = v46[v45].numInstances;
          v47 = SL_ConvertToString(v46[v45].name);
          physicsAsset = v46[v45].physicsAsset;
          v70 = v47;
          if ( physicsAsset )
            PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(physicsAsset);
          else
            PhysicsAssetBodyCount = 0;
          detailCollision = v46[v45].detailCollision;
          if ( detailCollision )
            DetailCollisionShapeCount = Physics_GetDetailCollisionShapeCount(detailCollision);
          else
            DetailCollisionShapeCount = PhysicsAssetBodyCount;
          v52 = 1;
          v53 = 1;
          if ( PhysicsAssetBodyCount )
          {
            Physics_GetPhysicsAssetBodyTransform(v46[v45].physicsAsset, 0, &bodyPosition, &bodyOrientationAsQuat);
            v54 = VecNCompareCustomEpsilon(bodyPosition.v, vec3_origin.v, 0.1, 3);
            v52 = VecNCompareCustomEpsilon(bodyOrientationAsQuat.v, quat_identity.v, 0.001, 4) && v54;
          }
          v55 = v46[v45].detailCollision;
          if ( v55 && DetailCollisionShapeCount )
          {
            Physics_GetDetailCollisionShapeTransform(v55, 0, &shapePosition, &shapeOrientationAsQuat);
            v56 = VecNCompareCustomEpsilon(shapePosition.v, vec3_origin.v, 0.1, 3);
            v53 = VecNCompareCustomEpsilon(shapeOrientationAsQuat.v, quat_identity.v, 0.001, 4) && v56;
          }
          v57 = DetailCollisionShapeCount;
          if ( PhysicsAssetBodyCount > DetailCollisionShapeCount )
            v57 = PhysicsAssetBodyCount;
          v58 = v57 > 1 || !v52 || !v53;
          v59 = &colorWhite;
          if ( v58 )
            v59 = &colorRed;
          v60 = "isn't";
          if ( v53 )
            v60 = "is";
          v61 = *v59;
          v62 = "isn't";
          if ( v52 )
            v62 = "is";
          LODWORD(v65) = DetailCollisionShapeCount;
          setColor = v61;
          v63 = j_va("%i instances of %s, using %i physics asset shape instances (root: %s origin) and %i detail shape instances (root: %s origin)", numInstances, v70, PhysicsAssetBodyCount, v62, v65, v60);
          StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v63, &setColor);
          ++v45;
          v64 = v69-- == 1;
          *y = *y + 6.0;
        }
        while ( !v64 );
        v44 = *x;
      }
      *x = v44 - 6.0;
    }
  }
}

/*
==============
StaticModels_Debug_Draw_InstancesHeatmap
==============
*/
void StaticModels_Debug_Draw_InstancesHeatmap(const ScreenPlacement *scrPlace, float *x, float *y, int selectedTileIdx)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  cg_t *LocalClientGlobals; 
  float v15; 
  float v16; 
  unsigned int i; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  const CollisionTile *v22; 
  __int64 v23; 
  unsigned int v24; 
  unsigned int j; 
  float v26; 
  double v27; 
  double v28; 
  float v29; 
  const CollisionTile *v30; 
  __int64 v31; 
  unsigned int v32; 
  int v33; 
  vec4_t *p_color; 
  const char *v35; 
  cg_t *v36; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  vec4_t color; 
  vec4_t setColor; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 

  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  if ( LocalClientGlobals )
  {
    v15 = *y;
    v16 = *x;
    v47 = v4;
    v46 = v5;
    v45 = v6;
    v44 = v7;
    v43 = v8;
    v42 = v9;
    UI_FillRect(scrPlace, v16, v15, 384.0, 384.0, 1, 1, &colorBlack);
    if ( LocalClientGlobals->compassMapMaterial )
      CL_DrawRotatedStretchPicWithoutSplitScreenScaling(scrPlace, (float)((float)(0.0014648438 * LocalClientGlobals->compassMapUpperLeft.v[0]) + 192.0) + *x, (float)(192.0 - (float)(0.0014648438 * LocalClientGlobals->compassMapUpperLeft.v[1])) + *y, 0.0014648438 * LocalClientGlobals->compassMapWorldSize.v[0], 0.0014648438 * LocalClientGlobals->compassMapWorldSize.v[1], 1, 1, 0.0, 0.0, 1.0, 1.0, 0.0, 0, &colorWhite, LocalClientGlobals->compassMapMaterial);
    for ( i = 0; i < 0x400; ++i )
    {
      v18 = (float)(i & 0x1F);
      v19 = (float)(v18 * 12.0) + *x;
      v20 = (float)(31 - (i >> 5));
      v21 = (float)(v20 * 12.0) + *y;
      v22 = g_staticModels_CollisionTiles[i];
      if ( v22 )
      {
        v23 = v22->gridId[1] + 32i64 * v22->gridId[0];
        v24 = s_staticModels_Debug_NumTileShapeDetailInstances[0][v23];
        if ( s_staticModels_Debug_NumTileShapeSimulationInstances[0][v23] > v24 )
          v24 = s_staticModels_Debug_NumTileShapeSimulationInstances[0][v23];
        if ( v24 )
          goto LABEL_10;
      }
      if ( i == selectedTileIdx )
      {
LABEL_10:
        color.v[3] = FLOAT_0_30000001;
        StaticModels_Debug_Draw_GetTileColor(i, &color);
        if ( i == selectedTileIdx )
          UI_FillRect(scrPlace, v19, v21, 12.0, 12.0, 1, 1, &colorWhite);
        UI_FillRect(scrPlace, v19 + 0.5, v21 + 0.5, 11.0, 11.0, 1, 1, &color);
      }
    }
    for ( j = 0; j < 0x400; ++j )
    {
      HIDWORD(v28) = 0;
      v26 = (float)(j & 0x1F);
      *(float *)&v28 = (float)(v26 * 12.0) + *x;
      v27 = v28;
      *(float *)&v28 = (float)(31 - (j >> 5));
      v29 = (float)(*(float *)&v28 * 12.0) + *y;
      v30 = g_staticModels_CollisionTiles[j];
      if ( v30 )
      {
        v31 = v30->gridId[1] + 32i64 * v30->gridId[0];
        v32 = s_staticModels_Debug_NumTileShapeDetailInstances[0][v31];
        if ( s_staticModels_Debug_NumTileShapeSimulationInstances[0][v31] > v32 )
          v32 = s_staticModels_Debug_NumTileShapeSimulationInstances[0][v31];
        if ( v32 )
          goto LABEL_20;
      }
      if ( j == selectedTileIdx )
      {
LABEL_20:
        color.v[3] = FLOAT_1_0;
        StaticModels_Debug_Draw_GetTileColor(j, &color);
        p_color = &color;
        if ( j == selectedTileIdx )
          p_color = &colorWhite;
        setColor = *p_color;
        v35 = j_va("%iK", (unsigned int)(v33 + 1023) >> 10);
        StaticModels_Debug_DrawString(scrPlace, v27, v29, v35, &setColor);
      }
    }
    v36 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    p_view = &v36->refdef.view;
    if ( v36 == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = p_view->refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(color.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    LODWORD(color.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    UI_FillRect(scrPlace, (float)((float)((float)((float)(0.00012207031 * color.v[0]) * 12.0) + 192.0) + *x) - 2.0, (float)((float)(192.0 - (float)((float)(0.00012207031 * color.v[1]) * 12.0)) + *y) - 2.0, 4.0, 4.0, 1, 1, &colorBlue);
    *y = *y + 384.0;
  }
}

/*
==============
StaticModels_Debug_Draw_Memory
==============
*/
void StaticModels_Debug_Draw_Memory(const ScreenPlacement *scrPlace, float *x, float *y)
{
  unsigned int v3; 
  unsigned int v7; 
  StaticModelCollisionModelList *staticModelCollisionModelLists; 
  __int64 numStaticModelCollisionModelLists; 
  bool v10; 
  unsigned int v11; 
  __int64 v12; 
  const CollisionTile **v13; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  unsigned int numModels; 
  unsigned int v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 

  v3 = 0;
  v7 = 0;
  if ( cm.numStaticModelCollisionModelLists )
  {
    staticModelCollisionModelLists = cm.staticModelCollisionModelLists;
    numStaticModelCollisionModelLists = cm.numStaticModelCollisionModelLists;
    do
    {
      v10 = staticModelCollisionModelLists->numModels == 0;
      v11 = v7 + 1;
      ++staticModelCollisionModelLists;
      if ( v10 )
        v11 = v7;
      v7 = v11;
      --numStaticModelCollisionModelLists;
    }
    while ( numStaticModelCollisionModelLists );
  }
  v12 = 1024i64;
  v13 = g_staticModels_CollisionTiles;
  do
  {
    if ( *v13 )
    {
      staticModelCollision = (*v13)->staticModelCollision;
      if ( staticModelCollision )
      {
        numModels = staticModelCollision->numModels;
        v16 = v3 + 1;
        if ( !numModels )
          v16 = v3;
        v3 = v16;
        if ( numModels )
          v3 = v16;
      }
    }
    ++v13;
    --v12;
  }
  while ( v12 );
  if ( v7 )
  {
    v17 = "Zones";
    if ( v7 == 1 )
      v17 = "Zone";
    StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v17, &colorWhite);
    *y = *y + 6.0;
    *x = *x + 6.0;
    StaticModels_Debug_Draw_ClipmapZoneMemory(scrPlace, x, y, cm.numStaticModelCollisionModelLists, cm.staticModelCollisionModelLists, StaticModels_Debug_IsClipmapZoneLoaded, StaticModels_Debug_GetClipmapZoneName, v7 > 1);
    *x = *x - 6.0;
  }
  if ( v3 )
  {
    v18 = "Tiles";
    if ( v3 == 1 )
      v18 = "Tile";
    StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v18, &colorWhite);
    *y = *y + 6.0;
    v19 = j_va("Tile Details");
    StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v19, &colorWhite);
    *y = *y + 6.0;
    *x = *x + 6.0;
    StaticModels_Debug_Draw_CollisionTileMemory(scrPlace, x, y, 0x400u, g_staticModels_CollisionTiles, StaticModels_Debug_IsCollisionTileLoaded, StaticModels_Debug_GetCollisionTileName, v3 > 1);
    *x = *x - 6.0;
  }
}

/*
==============
StaticModels_Debug_Draw_NotRootTransformInstances
==============
*/
void StaticModels_Debug_Draw_NotRootTransformInstances(const ScreenPlacement *scrPlace, float *x, float *y)
{
  signed __int64 v3; 
  void *v4; 
  __int64 v5; 
  unsigned int v6; 
  const CollisionTile **v7; 
  __int64 v8; 
  const CollisionTile *v9; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  __int64 v11; 
  StaticModelCollisionCompressedModel *models; 
  const PhysicsAsset *physicsAsset; 
  int PhysicsAssetBodyCount; 
  const XModelDetailCollision *detailCollision; 
  int DetailCollisionShapeCount; 
  char v17; 
  char v18; 
  bool v19; 
  const XModelDetailCollision *v20; 
  bool v21; 
  int v22; 
  __int64 v23; 
  const char *v24; 
  const char *v25; 
  __int64 v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  const char *v30; 
  __int64 numModels; 
  const CollisionTile **v32; 
  __int64 v33; 
  StaticModelCollisionCompressedModelList *v34; 
  vec3_t bodyPosition; 
  vec3_t shapePosition; 
  vec4_t bodyOrientationAsQuat; 
  vec4_t shapeOrientationAsQuat; 
  int v42[24576]; 
  scr_string_t stringValue[24576]; 
  char v44[24576]; 
  char v45[24576]; 

  v4 = alloca(v3);
  v5 = 0i64;
  v6 = 0;
  memset_0(stringValue, 0, sizeof(stringValue));
  memset_0(v42, 0, sizeof(v42));
  memset_0(v45, 0, sizeof(v45));
  memset_0(v44, 0, sizeof(v44));
  v7 = g_staticModels_CollisionTiles;
  v8 = 1024i64;
  v32 = g_staticModels_CollisionTiles;
  v33 = 1024i64;
  do
  {
    v9 = *v7;
    if ( v9 )
    {
      staticModelCollision = v9->staticModelCollision;
      v34 = staticModelCollision;
      if ( staticModelCollision )
      {
        if ( staticModelCollision->numModels )
        {
          v11 = 0i64;
          numModels = staticModelCollision->numModels;
          do
          {
            models = staticModelCollision->models;
            physicsAsset = models[v11].physicsAsset;
            if ( physicsAsset )
              PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(physicsAsset);
            else
              PhysicsAssetBodyCount = 0;
            detailCollision = models[v11].detailCollision;
            if ( detailCollision )
              DetailCollisionShapeCount = Physics_GetDetailCollisionShapeCount(detailCollision);
            else
              DetailCollisionShapeCount = PhysicsAssetBodyCount;
            v17 = 1;
            v18 = 1;
            if ( PhysicsAssetBodyCount )
            {
              Physics_GetPhysicsAssetBodyTransform(models[v11].physicsAsset, 0, &bodyPosition, &bodyOrientationAsQuat);
              v19 = VecNCompareCustomEpsilon(bodyPosition.v, vec3_origin.v, 0.1, 3);
              v17 = VecNCompareCustomEpsilon(bodyOrientationAsQuat.v, quat_identity.v, 0.001, 4) && v19;
            }
            v20 = models[v11].detailCollision;
            if ( v20 && DetailCollisionShapeCount )
            {
              Physics_GetDetailCollisionShapeTransform(v20, 0, &shapePosition, &shapeOrientationAsQuat);
              v21 = VecNCompareCustomEpsilon(shapePosition.v, vec3_origin.v, 0.1, 3);
              v18 = VecNCompareCustomEpsilon(shapeOrientationAsQuat.v, quat_identity.v, 0.001, 4) && v21;
            }
            if ( !v17 || !v18 )
            {
              v22 = 0;
              if ( v6 )
              {
                while ( stringValue[v22] != models[v11].name )
                {
                  if ( ++v22 >= v6 )
                    goto LABEL_22;
                }
                v42[v22] += models[v11].numInstances;
              }
              else
              {
LABEL_22:
                if ( v6 >= 0x6000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 1469, ASSERT_TYPE_ASSERT, "(numBadModels < (24064 + 512))", (const char *)&queryFormat, "numBadModels < XMODEL_POOL_SIZE") )
                  __debugbreak();
                v23 = v6++;
                stringValue[v23] = models[v11].name;
                v42[v23] = models[v11].numInstances;
                v45[v23] = v17 ^ 1;
                v44[v23] = v18 ^ 1;
              }
            }
            staticModelCollision = v34;
            ++v11;
            --numModels;
          }
          while ( numModels );
          v8 = v33;
        }
      }
    }
    v7 = v32 + 1;
    --v8;
    ++v32;
    v33 = v8;
  }
  while ( v8 );
  if ( v6 )
  {
    v24 = j_va("%i static models have collision data at offset transforms", v6);
    StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v24, &colorRed);
    *y = *y + 6.0;
    v25 = j_va("Assets flagged as bad normally have their root pivot not at the origin in Max/Maya.");
    StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v25, &colorRed);
    *y = *y + 6.0;
    *x = *x + 6.0;
    v26 = v6;
    do
    {
      v27 = SL_ConvertToString(stringValue[v5]);
      v28 = "Good";
      v29 = "Good";
      if ( v44[v5] )
        v28 = "Bad";
      if ( v45[v5] )
        v29 = "Bad";
      v30 = j_va("%i instances of %s, where physics asset is %s and detail collision is %s", (unsigned int)v42[v5], v27, v29, v28);
      StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v30, &colorRed);
      ++v5;
      *y = *y + 6.0;
      --v26;
    }
    while ( v26 );
    *x = *x - 6.0;
  }
}

/*
==============
StaticModels_Debug_Draw_OverlyExpensiveInstances
==============
*/
void StaticModels_Debug_Draw_OverlyExpensiveInstances(const ScreenPlacement *scrPlace, float *x, float *y)
{
  __int64 v3; 
  __int64 v4; 
  const CollisionTile **v5; 
  __int64 v6; 
  const CollisionTile *v7; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  __int64 v9; 
  __int64 numModels; 
  StaticModelCollisionCompressedModel *models; 
  const PhysicsAsset *physicsAsset; 
  unsigned int PhysicsAssetBodyCount; 
  const XModelDetailCollision *detailCollision; 
  unsigned int DetailCollisionShapeCount; 
  unsigned int v16; 
  int v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  char *fmt; 
  const CollisionTile **v24; 
  __int64 v25; 
  int v29[24576]; 
  scr_string_t stringValue[24576]; 
  int v31[24576]; 
  int v32[24576]; 

  v3 = 0i64;
  v4 = 0i64;
  memset_0(stringValue, 0, sizeof(stringValue));
  memset_0(v29, 0, sizeof(v29));
  memset_0(v32, 0, sizeof(v32));
  memset_0(v31, 0, sizeof(v31));
  v5 = g_staticModels_CollisionTiles;
  v6 = 1024i64;
  v24 = g_staticModels_CollisionTiles;
  v25 = 1024i64;
  do
  {
    v7 = *v5;
    if ( v7 )
    {
      staticModelCollision = v7->staticModelCollision;
      if ( staticModelCollision )
      {
        if ( staticModelCollision->numModels )
        {
          v9 = 0i64;
          numModels = staticModelCollision->numModels;
          do
          {
            models = staticModelCollision->models;
            physicsAsset = models[v9].physicsAsset;
            if ( physicsAsset )
              PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(physicsAsset);
            else
              PhysicsAssetBodyCount = 0;
            detailCollision = models[v9].detailCollision;
            if ( detailCollision )
              DetailCollisionShapeCount = Physics_GetDetailCollisionShapeCount(detailCollision);
            else
              DetailCollisionShapeCount = PhysicsAssetBodyCount;
            v16 = DetailCollisionShapeCount;
            if ( PhysicsAssetBodyCount > DetailCollisionShapeCount )
              v16 = PhysicsAssetBodyCount;
            if ( v16 > 1 )
            {
              v17 = 0;
              if ( (_DWORD)v4 )
              {
                while ( stringValue[v17] != models[v9].name )
                {
                  if ( ++v17 >= (unsigned int)v4 )
                    goto LABEL_18;
                }
                v29[v17] += models[v9].numInstances;
              }
              else
              {
LABEL_18:
                if ( (unsigned int)v4 >= 0x6000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 1334, ASSERT_TYPE_ASSERT, "(numBadModels < (24064 + 512))", (const char *)&queryFormat, "numBadModels < XMODEL_POOL_SIZE") )
                  __debugbreak();
                stringValue[v4] = models[v9].name;
                v29[v4] = models[v9].numInstances;
                v32[v4] = PhysicsAssetBodyCount;
                v31[v4] = DetailCollisionShapeCount;
                v4 = (unsigned int)(v4 + 1);
              }
            }
            ++v9;
            --numModels;
          }
          while ( numModels );
          v6 = v25;
        }
      }
    }
    v5 = v24 + 1;
    --v6;
    ++v24;
    v25 = v6;
  }
  while ( v6 );
  if ( (_DWORD)v4 )
  {
    v18 = j_va("%i static models are creating more shape instances than they need to", (unsigned int)v4);
    StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v18, &colorRed);
    *y = *y + 6.0;
    v19 = j_va("Physics Asset counts above 1 indicate that there is >1 rigid body and this was not intended to be a static model.");
    StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v19, &colorRed);
    *y = *y + 6.0;
    v20 = j_va("XModel Detail collision counts above 1 indicate that this model was intended to be animated.");
    StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v20, &colorRed);
    *y = *y + 6.0;
    *x = *x + 6.0;
    do
    {
      v21 = SL_ConvertToString(stringValue[v3]);
      LODWORD(fmt) = v31[v3];
      v22 = j_va("%i instances of %s, using %i physics asset shape instances and %i detail shape instances", (unsigned int)v29[v3], v21, (unsigned int)v32[v3], fmt);
      StaticModels_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v22, &colorRed);
      ++v3;
      *y = *y + 6.0;
      --v4;
    }
    while ( v4 );
    *x = *x - 6.0;
  }
}

/*
==============
StaticModels_Debug_GetClipmapZoneName
==============
*/
void StaticModels_Debug_GetClipmapZoneName(const int staticModelZoneIdx, char *zoneName, __int64 a3, __int64 a4, __int64 a5)
{
  const char *WorldTransientName; 

  if ( !staticModelZoneIdx )
    Com_sprintf(zoneName, 0x104ui64, "Main");
  WorldTransientName = DB_Transients_GetWorldTransientName(staticModelZoneIdx);
  Com_sprintf(zoneName, 0x104ui64, (const char *)&queryFormat, WorldTransientName, a5);
}

/*
==============
StaticModels_Debug_GetCollisionTileName
==============
*/
void StaticModels_Debug_GetCollisionTileName(const int tileIdx, char *tileName)
{
  const CollisionTile *v4; 
  char *fmt; 
  __int64 v6; 
  unsigned int index; 

  v4 = g_staticModels_CollisionTiles[tileIdx];
  if ( v4->index != tileIdx )
  {
    index = v4->index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 355, ASSERT_TYPE_ASSERT, "( collisionTile->index ) == ( static_cast<uint>(tileIdx) )", "%s == %s\n\t%u, %u", "collisionTile->index", "static_cast<uint>(tileIdx)", index, tileIdx) )
      __debugbreak();
  }
  LODWORD(v6) = v4->gridId[1];
  LODWORD(fmt) = v4->gridId[0];
  Com_sprintf(tileName, 0x104ui64, "Tile %i at Grid %i,%i", (unsigned int)tileIdx, fmt, v6);
}

/*
==============
StaticModels_Debug_GetNameForShape
==============
*/
const char *StaticModels_Debug_GetNameForShape(const hknpShape *shape)
{
  const char *NameForShape_Internal; 

  DB_LockTableForRead();
  NameForShape_Internal = StaticModels_Debug_GetNameForShape_Internal(shape);
  DB_UnlockTableForRead();
  return NameForShape_Internal;
}

/*
==============
StaticModels_Debug_GetNameForShape_Internal
==============
*/
const char *StaticModels_Debug_GetNameForShape_Internal(const hknpShape *shape)
{
  __int64 v1; 
  StaticModelCollisionModelList *v3; 
  int ZoneIndexFromWorldTransientIndex; 
  unsigned int v5; 
  __int64 v6; 
  StaticModelCollisionModel *v7; 
  const PhysicsAsset *v8; 
  int v9; 
  unsigned int v10; 
  const hknpShape *v11; 
  const XModelDetailCollision *modelDetailCollision; 
  bool IsXAssetTransient; 
  int v14; 
  unsigned int v15; 
  const hknpShape *v16; 
  unsigned int v17; 
  const CollisionTile **v18; 
  const CollisionTile *v19; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  unsigned int v21; 
  __int64 v22; 
  StaticModelCollisionCompressedModel *v23; 
  const PhysicsAsset *physicsAsset; 
  int v25; 
  unsigned int PhysicsAssetBodyCount; 
  const hknpShape *PhysicsAssetShape; 
  const XModelDetailCollision *detailCollision; 
  int v29; 
  unsigned int DetailCollisionShapeCount; 
  const hknpShape *DetailCollisionShape; 
  int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int numModels; 
  StaticModelCollisionModelList *v37; 
  const CollisionTile **i; 

  v1 = 0i64;
  if ( !cm.numStaticModelCollisionModelLists )
  {
LABEL_26:
    v17 = 0;
    v18 = g_staticModels_CollisionTiles;
    v34 = 0;
    for ( i = g_staticModels_CollisionTiles; ; ++i )
    {
      v19 = *v18;
      if ( v19 )
      {
        staticModelCollision = v19->staticModelCollision;
        if ( staticModelCollision )
        {
          if ( StaticModels_HasCollisionTileShapeData(v19->gridId[0], v19->gridId[1]) )
          {
            v21 = 0;
            numModels = staticModelCollision->numModels;
            if ( staticModelCollision->numModels )
              break;
          }
        }
      }
LABEL_44:
      ++v17;
      v18 = i + 1;
      v34 = v17;
      if ( v17 >= 0x400 )
        return 0i64;
    }
    v22 = 0i64;
    while ( 1 )
    {
      v23 = &staticModelCollision->models[v22];
      physicsAsset = v23->physicsAsset;
      if ( physicsAsset )
      {
        v25 = 0;
        PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(v23->physicsAsset);
        if ( PhysicsAssetBodyCount )
          break;
      }
LABEL_37:
      detailCollision = v23->detailCollision;
      if ( detailCollision )
      {
        v29 = 0;
        DetailCollisionShapeCount = Physics_GetDetailCollisionShapeCount(v23->detailCollision);
        if ( DetailCollisionShapeCount )
        {
          do
          {
            DetailCollisionShape = Physics_GetDetailCollisionShape(detailCollision, v29);
            if ( DetailCollisionShape == shape || Physics_IsChildOfShape(DetailCollisionShape, shape) )
              return SL_ConvertToString(v23->name);
          }
          while ( ++v29 < DetailCollisionShapeCount );
        }
      }
      ++v21;
      ++v22;
      if ( v21 >= numModels )
      {
        v17 = v34;
        goto LABEL_44;
      }
    }
    while ( 1 )
    {
      PhysicsAssetShape = Physics_GetPhysicsAssetShape(physicsAsset, v25);
      if ( PhysicsAssetShape == shape || Physics_IsChildOfShape(PhysicsAssetShape, shape) )
        return SL_ConvertToString(v23->name);
      if ( ++v25 >= PhysicsAssetBodyCount )
        goto LABEL_37;
    }
  }
  while ( 1 )
  {
    if ( StaticModels_HasClipmapZoneShapeData(v1) )
    {
      v3 = &cm.staticModelCollisionModelLists[v1];
      v37 = v3;
      ZoneIndexFromWorldTransientIndex = DB_Zones_GetZoneIndexFromWorldTransientIndex(v1);
      v33 = ZoneIndexFromWorldTransientIndex;
      v5 = 0;
      v35 = v3->numModels;
      if ( v3->numModels )
        break;
    }
LABEL_25:
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= cm.numStaticModelCollisionModelLists )
      goto LABEL_26;
  }
  v6 = 0i64;
  while ( 1 )
  {
    v7 = &v3->models[v6];
    v8 = v7->physicsAsset;
    if ( !v8 )
      goto LABEL_14;
    if ( DB_IsXAssetTransientNonLocking(ASSET_TYPE_PHYSICSASSET, v8->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 158, ASSERT_TYPE_ASSERT, "(!DB_IsXAssetTransientNonLocking( ASSET_TYPE_PHYSICSASSET, physicsAsset->name ))", (const char *)&queryFormat, "!DB_IsXAssetTransientNonLocking( ASSET_TYPE_PHYSICSASSET, physicsAsset->name )") )
      __debugbreak();
    v9 = 0;
    v10 = Physics_GetPhysicsAssetBodyCount(v8);
    if ( v10 )
      break;
LABEL_13:
    ZoneIndexFromWorldTransientIndex = v33;
LABEL_14:
    modelDetailCollision = v7->detailCollision;
    if ( modelDetailCollision )
    {
      IsXAssetTransient = DB_IsXAssetTransient(ASSET_TYPE_XMODEL_DETAIL_COLLISION, modelDetailCollision->name);
      modelDetailCollision = v7->detailCollision;
    }
    else
    {
      IsXAssetTransient = 0;
    }
    if ( IsXAssetTransient )
      modelDetailCollision = DB_GetXAssetHeaderZoneSpecificNonLocking(ASSET_TYPE_XMODEL_DETAIL_COLLISION, modelDetailCollision->name, ZoneIndexFromWorldTransientIndex).modelDetailCollision;
    if ( modelDetailCollision )
    {
      v14 = 0;
      v15 = Physics_GetDetailCollisionShapeCount(modelDetailCollision);
      if ( v15 )
      {
        do
        {
          v16 = Physics_GetDetailCollisionShape(modelDetailCollision, v14);
          if ( v16 == shape || Physics_IsChildOfShape(v16, shape) )
            return SL_ConvertToString(v7->name);
        }
        while ( ++v14 < v15 );
      }
    }
    v3 = v37;
    ++v5;
    ZoneIndexFromWorldTransientIndex = v33;
    ++v6;
    if ( v5 >= v35 )
      goto LABEL_25;
  }
  while ( 1 )
  {
    v11 = Physics_GetPhysicsAssetShape(v8, v9);
    if ( v11 == shape || Physics_IsChildOfShape(v11, shape) )
      return SL_ConvertToString(v7->name);
    if ( ++v9 >= v10 )
      goto LABEL_13;
  }
}

/*
==============
StaticModels_Debug_IsClipmapZoneLoaded
==============
*/
bool StaticModels_Debug_IsClipmapZoneLoaded(const int staticModelZoneIdx)
{
  bool HasClipmapZoneCollision; 
  bool result; 

  HasClipmapZoneCollision = StaticModels_HasClipmapZoneCollision(PHYSICS_WORLD_ID_CLIENT_FIRST, staticModelZoneIdx);
  result = StaticModels_HasClipmapZoneCollision(PHYSICS_WORLD_ID_CLIENT0_DETAIL, staticModelZoneIdx);
  if ( HasClipmapZoneCollision || result )
    return 1;
  return result;
}

/*
==============
StaticModels_Debug_IsCollisionTileLoaded
==============
*/
char StaticModels_Debug_IsCollisionTileLoaded(const int tileIdx)
{
  unsigned int index; 

  if ( g_staticModels_CollisionTiles[tileIdx]->index != tileIdx )
  {
    index = g_staticModels_CollisionTiles[tileIdx]->index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 346, ASSERT_TYPE_ASSERT, "( collisionTile->index ) == ( static_cast<uint>(tileIdx) )", "%s == %s\n\t%u, %u", "collisionTile->index", "static_cast<uint>(tileIdx)", index, tileIdx) )
      __debugbreak();
  }
  return 1;
}

/*
==============
StaticModels_Debug_ResetDetailShapeInstanceCount
==============
*/
void StaticModels_Debug_ResetDetailShapeInstanceCount(const unsigned int staticModelZoneIdx)
{
  __int64 v1; 
  int v3; 

  v1 = staticModelZoneIdx;
  if ( staticModelZoneIdx >= 0x20 )
  {
    v3 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 69, ASSERT_TYPE_ASSERT, "(unsigned)( staticModelZoneIdx ) < (unsigned)( STATICMODELS_MAX_ZONES )", "staticModelZoneIdx doesn't index STATICMODELS_MAX_ZONES\n\t%i not in [0, %i)", staticModelZoneIdx, v3) )
      __debugbreak();
  }
  s_staticModels_Debug_NumShapeDetailInstances[v1] = 0;
}

/*
==============
StaticModels_Debug_ResetSimulationShapeInstanceCount
==============
*/
void StaticModels_Debug_ResetSimulationShapeInstanceCount(const unsigned int staticModelZoneIdx)
{
  __int64 v1; 
  int v3; 

  v1 = staticModelZoneIdx;
  if ( staticModelZoneIdx >= 0x20 )
  {
    v3 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 61, ASSERT_TYPE_ASSERT, "(unsigned)( staticModelZoneIdx ) < (unsigned)( STATICMODELS_MAX_ZONES )", "staticModelZoneIdx doesn't index STATICMODELS_MAX_ZONES\n\t%i not in [0, %i)", staticModelZoneIdx, v3) )
      __debugbreak();
  }
  s_staticModels_Debug_NumShapeSimulationInstances[v1] = 0;
}

/*
==============
StaticModels_Debug_ResetTileDetailShapeInstanceCount
==============
*/
void StaticModels_Debug_ResetTileDetailShapeInstanceCount(const unsigned __int8 *gridId)
{
  unsigned __int8 v2; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  int v6; 

  if ( *gridId >= 0x20u )
  {
    v6 = 32;
    v4 = *gridId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 102, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  v2 = gridId[1];
  if ( v2 >= 0x20u )
  {
    LODWORD(v5) = 32;
    LODWORD(v3) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 103, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v3, v5) )
      __debugbreak();
  }
  s_staticModels_Debug_NumTileShapeDetailInstances[*gridId][gridId[1]] = 0;
}

/*
==============
StaticModels_Debug_ResetTileSimulationShapeInstanceCount
==============
*/
void StaticModels_Debug_ResetTileSimulationShapeInstanceCount(const unsigned __int8 *gridId)
{
  unsigned __int8 v2; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  int v6; 

  if ( *gridId >= 0x20u )
  {
    v6 = 32;
    v4 = *gridId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 93, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  v2 = gridId[1];
  if ( v2 >= 0x20u )
  {
    LODWORD(v5) = 32;
    LODWORD(v3) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 94, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v3, v5) )
      __debugbreak();
  }
  s_staticModels_Debug_NumTileShapeSimulationInstances[*gridId][gridId[1]] = 0;
}

