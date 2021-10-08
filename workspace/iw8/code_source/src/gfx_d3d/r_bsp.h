/*
==============
R_GetCellAabbTreeFromContext
==============
*/

GfxAabbTree *__fastcall R_GetCellAabbTreeFromContext(GfxWorld *world, const GfxWorldTransientDrawContext *worldTransientContext, unsigned int cellIndex)
{
  return ?R_GetCellAabbTreeFromContext@@YAPEAUGfxAabbTree@@PEAUGfxWorld@@AEBUGfxWorldTransientDrawContext@@I@Z(world, worldTransientContext, cellIndex);
}

/*
==============
R_GetWorldDrawVertsFromSurface
==============
*/

GfxWorldDrawVerts *__fastcall R_GetWorldDrawVertsFromSurface(const GfxSurface *surf, const GfxWorldTransientDrawContext *worldTransientContext)
{
  return ?R_GetWorldDrawVertsFromSurface@@YAPEAUGfxWorldDrawVerts@@PEBUGfxSurface@@AEBUGfxWorldTransientDrawContext@@@Z(surf, worldTransientContext);
}

/*
==============
R_IsCellTransientZoneLoaded
==============
*/

bool __fastcall R_IsCellTransientZoneLoaded(const GfxWorld *world, const GfxWorldTransientDrawContext *worldTransientContext, unsigned int cellIndex)
{
  return ?R_IsCellTransientZoneLoaded@@YA_NPEBUGfxWorld@@AEBUGfxWorldTransientDrawContext@@I@Z(world, worldTransientContext, cellIndex);
}

/*
==============
R_GetCellAabbTreeFromContext
==============
*/
GfxAabbTree *R_GetCellAabbTreeFromContext(GfxWorld *world, const GfxWorldTransientDrawContext *worldTransientContext, unsigned int cellIndex)
{
  __int64 v3; 
  GfxCellTransientInfo *cellTransientInfos; 
  unsigned int transientZone; 
  GfxCellTransientInfo *v8; 
  GfxWorldDrawCells *v9; 
  unsigned int aabbTreeIndex; 
  __int64 v12; 
  __int64 v13; 

  v3 = cellIndex;
  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 111, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( (unsigned int)v3 >= world->dpvsPlanes.cellCount )
  {
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( world->dpvsPlanes.cellCount )", "cellIndex doesn't index world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", v12, world->dpvsPlanes.cellCount) )
      __debugbreak();
  }
  cellTransientInfos = world->cellTransientInfos;
  transientZone = cellTransientInfos[v3].transientZone;
  v8 = &cellTransientInfos[v3];
  if ( transientZone >= worldTransientContext->zoneCount )
  {
    LODWORD(v13) = worldTransientContext->zoneCount;
    LODWORD(v12) = transientZone;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v9 = worldTransientContext->drawCellsPtrs[(unsigned __int16)transientZone];
  if ( !v9 )
    return 0i64;
  aabbTreeIndex = v8->aabbTreeIndex;
  if ( aabbTreeIndex >= v9->cellCount )
  {
    LODWORD(v13) = v9->cellCount;
    LODWORD(v12) = aabbTreeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 78, ASSERT_TYPE_ASSERT, "(unsigned)( aabbTreeIndex ) < (unsigned)( drawCells.cellCount )", "aabbTreeIndex doesn't index drawCells.cellCount\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  return v9->aabbTrees[(unsigned __int16)aabbTreeIndex].aabbTree;
}

/*
==============
R_IsCellTransientZoneLoaded
==============
*/
bool R_IsCellTransientZoneLoaded(const GfxWorld *world, const GfxWorldTransientDrawContext *worldTransientContext, unsigned int cellIndex)
{
  __int64 v4; 
  unsigned int transientZone; 
  __int64 v8; 
  __int64 v9; 

  v4 = cellIndex;
  if ( cellIndex >= world->dpvsPlanes.cellCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 65, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( world->dpvsPlanes.cellCount )", "cellIndex doesn't index world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", cellIndex, world->dpvsPlanes.cellCount) )
    __debugbreak();
  transientZone = world->cellTransientInfos[v4].transientZone;
  if ( transientZone >= worldTransientContext->zoneCount )
  {
    LODWORD(v9) = worldTransientContext->zoneCount;
    LODWORD(v8) = transientZone;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 68, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  return worldTransientContext->drawCellsPtrs[(unsigned __int16)transientZone] != NULL;
}

/*
==============
R_GetWorldDrawVertsFromSurface
==============
*/
GfxWorldDrawVerts *R_GetWorldDrawVertsFromSurface(const GfxSurface *surf, const GfxWorldTransientDrawContext *worldTransientContext)
{
  unsigned int transientZone; 
  int v5; 
  unsigned int zoneCount; 

  transientZone = surf->transientZone;
  if ( transientZone < worldTransientContext->zoneCount )
    return worldTransientContext->drawVertsPtr[(unsigned __int16)transientZone];
  zoneCount = worldTransientContext->zoneCount;
  v5 = surf->transientZone;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 42, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v5, zoneCount) )
    __debugbreak();
  return worldTransientContext->drawVertsPtr[(unsigned __int16)transientZone];
}

