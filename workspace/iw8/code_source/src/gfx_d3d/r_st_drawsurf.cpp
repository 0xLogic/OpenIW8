/*
==============
R_ST_EmitDrawSurfs
==============
*/

void __fastcall R_ST_EmitDrawSurfs(GfxViewInfo *viewInfo)
{
  ?R_ST_EmitDrawSurfs@@YAXAEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_ST_EmitSunShadowDrawSurfs
==============
*/

void __fastcall R_ST_EmitSunShadowDrawSurfs(GfxViewInfo *viewInfo, unsigned int partitionIndex)
{
  ?R_ST_EmitSunShadowDrawSurfs@@YAXAEAUGfxViewInfo@@I@Z(viewInfo, partitionIndex);
}

/*
==============
R_ST_EmitSunShadowCacheDrawSurfs
==============
*/

void __fastcall R_ST_EmitSunShadowCacheDrawSurfs(GfxViewInfo *viewInfo, const GfxSunShadow *sunShadow, unsigned int partitionIndex, unsigned int cellIndex, const GfxStDrawSurf *sourceSurfs, unsigned int sourceSurfCount)
{
  ?R_ST_EmitSunShadowCacheDrawSurfs@@YAXAEAUGfxViewInfo@@AEBUGfxSunShadow@@IIPEBUGfxStDrawSurf@@I@Z(viewInfo, sunShadow, partitionIndex, cellIndex, sourceSurfs, sourceSurfCount);
}

/*
==============
R_ST_EmitDrawSurfs
==============
*/
void R_ST_EmitDrawSurfs(GfxViewInfo *viewInfo)
{
  unsigned int superTerrainSurfCount; 
  GfxStDrawSurf *superTerrainSurfs; 

  superTerrainSurfCount = scene.superTerrainSurfCount;
  superTerrainSurfs = frontEndDataOut->superTerrainSurfs;
  viewInfo->drawList[3].superTerrainSurfList.surfs = frontEndDataOut->superTerrainSurfs;
  viewInfo->drawList[3].superTerrainSurfList.count = R_StableSortSurfs_All<GfxSortStDrawSurfsInterface,GfxStDrawSurf>(scene.superTerrainSurfs, superTerrainSurfCount, superTerrainSurfs);
}

/*
==============
R_ST_EmitSunShadowCacheDrawSurfs
==============
*/
void R_ST_EmitSunShadowCacheDrawSurfs(GfxViewInfo *viewInfo, const GfxSunShadow *sunShadow, unsigned int partitionIndex, unsigned int cellIndex, const GfxStDrawSurf *sourceSurfs, unsigned int sourceSurfCount)
{
  __int64 v6; 
  __int64 v10; 
  GfxStDrawSurf *v11; 

  v6 = cellIndex;
  if ( !sunShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 376, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
    __debugbreak();
  if ( !R_IsCachedSunShadowPartition(sunShadow, partitionIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 377, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
    __debugbreak();
  v10 = (int)(v6 + 10 * (partitionIndex - sunShadow->firstCachedSunShadowPartition)) + 45i64;
  v11 = frontEndDataOut->superTerrainCachedSunShadowSurfs[partitionIndex - rg.firstCachedSunShadowPartition][v6];
  viewInfo->drawList[v10].superTerrainSurfList.surfs = v11;
  viewInfo->drawList[v10].superTerrainSurfList.count = R_StableSortSurfs_All<GfxSortStDrawSurfsInterface,GfxStDrawSurf>(sourceSurfs, sourceSurfCount, v11);
}

/*
==============
R_ST_EmitSunShadowDrawSurfs
==============
*/
void R_ST_EmitSunShadowDrawSurfs(GfxViewInfo *viewInfo, unsigned int partitionIndex)
{
  __int64 v2; 
  __int64 v3; 
  unsigned int v4; 
  char *v5; 
  __int64 v6; 
  GfxStDrawSurf *v7; 

  v2 = partitionIndex;
  v3 = 152 * ((int)partitionIndex + 24i64);
  v4 = scene.superTerrainSunShadowSurfCount[partitionIndex];
  v5 = (char *)viewInfo + v3;
  v6 = v2;
  v7 = frontEndDataOut->superTerrainSunShadowSurfs[v2];
  *((_QWORD *)v5 + 1986) = v7;
  *((_DWORD *)v5 + 3974) = R_StableSortSurfs_All<GfxSortStDrawSurfsInterface,GfxStDrawSurf>(scene.superTerrainSurfsSunShadow[v6], v4, v7);
}

