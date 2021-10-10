/*
==============
R_SphereStaticModels
==============
*/

unsigned int __fastcall R_SphereStaticModels(const R_CollInfo *collInfo, int (__fastcall *allowSModel)(int, void *), void *callbackContext, unsigned __int16 *smodelList, unsigned int smodelListSize)
{
  return ?R_SphereStaticModels@@YAIPEBUR_CollInfo@@P6AHHPEAX@Z1PEAGI@Z(collInfo, allowSModel, callbackContext, smodelList, smodelListSize);
}

/*
==============
R_SetupSphereStaticGeo
==============
*/

void __fastcall R_SetupSphereStaticGeo(R_CollInfo *collInfo, const GfxWorldTransientDrawContext *transientDrawContext)
{
  ?R_SetupSphereStaticGeo@@YAXPEAUR_CollInfo@@AEBUGfxWorldTransientDrawContext@@@Z(collInfo, transientDrawContext);
}

/*
==============
R_SphereSurfaces
==============
*/

bool __fastcall R_SphereSurfaces(const R_CollInfo *collInfo, int (__fastcall *const *allowSurf)(int, void *), void *callbackContext, GfxSurface ***surfLists, unsigned int surfListSize, unsigned int *surfCounts, unsigned int listCount)
{
  return ?R_SphereSurfaces@@YA_NPEBUR_CollInfo@@PEBQ6AHHPEAX@Z1QEAPEAPEAUGfxSurface@@IQEAII@Z(collInfo, allowSurf, callbackContext, surfLists, surfListSize, surfCounts, listCount);
}

/*
==============
R_AABBTreeStaticGeo_r
==============
*/
void R_AABBTreeStaticGeo_r(const GfxAabbTree *tree, R_CollInfo *collInfo)
{
  unsigned int planeCount; 
  char *v5; 
  __int64 v6; 
  __int64 nodeCount; 

  if ( Sphere_OverlapOrTouch(&tree->bounds, &collInfo->sphere) )
  {
    planeCount = collInfo->planeCount;
    if ( !planeCount )
      goto LABEL_18;
    if ( planeCount != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_collision.cpp", 25, ASSERT_TYPE_ASSERT, "(6 == collInfo->planeCount)", (const char *)&queryFormat, "SPOT_LIGHT_PLANES == collInfo->planeCount") )
      __debugbreak();
    if ( R_BoxInPlanes((const vec4_t (*)[6])collInfo->planes, &tree->bounds) )
    {
LABEL_18:
      if ( tree->childCount )
      {
        v5 = (char *)tree + tree->childrenOffset;
        v6 = 0i64;
        do
        {
          R_AABBTreeStaticGeo_r((const GfxAabbTree *)&v5[48 * v6], collInfo);
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < tree->childCount );
      }
      else if ( tree->surfaceCount || tree->smodelIndexCount )
      {
        nodeCount = collInfo->nodeCount;
        if ( (unsigned int)nodeCount < 0x800 )
        {
          collInfo->nodes[nodeCount] = tree;
          LODWORD(nodeCount) = collInfo->nodeCount;
        }
        collInfo->nodeCount = nodeCount + 1;
      }
    }
  }
}

/*
==============
R_SetupSphereStaticGeo
==============
*/
void R_SetupSphereStaticGeo(R_CollInfo *collInfo, const GfxWorldTransientDrawContext *transientDrawContext)
{
  GfxWorld *world; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int *v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  unsigned int v11; 
  __int64 v12; 
  GfxCellTransientInfo *cellTransientInfos; 
  unsigned int transientZone; 
  GfxWorldDrawCells *v15; 
  unsigned int aabbTreeIndex; 
  const GfxAabbTree *aabbTree; 
  __int64 v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int *v22; 
  unsigned int cellBits[32]; 

  Profile_Begin(234);
  Sys_ProfBeginNamedEvent(0xFFF08080, "R_SetupSphereStaticGeo0");
  if ( !collInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_collision.cpp", 184, ASSERT_TYPE_ASSERT, "(collInfo)", (const char *)&queryFormat, "collInfo") )
    __debugbreak();
  world = rgp.world;
  if ( rgp.world->dpvsPlanes.cellCount > 0x400 )
  {
    LODWORD(v18) = rgp.world->dpvsPlanes.cellCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_collision.cpp", 187, ASSERT_TYPE_ASSERT, "( ( worldDpvsPlanes->cellCount <= (1024) ) )", "( worldDpvsPlanes->cellCount ) = %i", v18) )
      __debugbreak();
  }
  v5 = (world->dpvsPlanes.cellCount + 31) >> 5;
  v21 = v5;
  memset_0(cellBits, 0, 4i64 * v5);
  R_SphereStaticGeo_r((const mnode_t *)world->dpvsPlanes.nodes, &collInfo->sphere, cellBits);
  v6 = 0;
  v20 = 0;
  collInfo->nodeCount = 0;
  if ( v5 )
  {
    v7 = cellBits;
    v22 = cellBits;
    do
    {
      v8 = *v7;
      v9 = __lzcnt(*v7);
      if ( v9 < 0x20 )
      {
        v10 = 32 * v6;
        do
        {
          v11 = v10 + v9;
          if ( ((0x80000000 >> v9) & v8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_collision.cpp", 211, ASSERT_TYPE_ASSERT, "(bits & bit)", (const char *)&queryFormat, "bits & bit") )
            __debugbreak();
          v8 &= ~(0x80000000 >> v9);
          if ( v11 >= s_world.dpvsPlanes.cellCount )
          {
            LODWORD(v19) = s_world.dpvsPlanes.cellCount;
            LODWORD(v18) = v10 + v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( world->dpvsPlanes.cellCount )", "cellIndex doesn't index world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          v12 = v11;
          cellTransientInfos = s_world.cellTransientInfos;
          transientZone = s_world.cellTransientInfos[v12].transientZone;
          if ( transientZone >= transientDrawContext->zoneCount )
          {
            LODWORD(v19) = transientDrawContext->zoneCount;
            LODWORD(v18) = s_world.cellTransientInfos[v12].transientZone;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          v15 = transientDrawContext->drawCellsPtrs[(unsigned __int16)transientZone];
          if ( v15 )
          {
            aabbTreeIndex = cellTransientInfos[v12].aabbTreeIndex;
            if ( aabbTreeIndex >= v15->cellCount )
            {
              LODWORD(v19) = v15->cellCount;
              LODWORD(v18) = aabbTreeIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 78, ASSERT_TYPE_ASSERT, "(unsigned)( aabbTreeIndex ) < (unsigned)( drawCells.cellCount )", "aabbTreeIndex doesn't index drawCells.cellCount\n\t%i not in [0, %i)", v18, v19) )
                __debugbreak();
            }
            aabbTree = v15->aabbTrees[(unsigned __int16)aabbTreeIndex].aabbTree;
            if ( aabbTree )
              R_AABBTreeStaticGeo_r(aabbTree, collInfo);
          }
          v9 = __lzcnt(v8);
        }
        while ( v9 < 0x20 );
        v6 = v20;
        v5 = v21;
        v7 = v22;
      }
      ++v6;
      ++v7;
      v20 = v6;
      v22 = v7;
    }
    while ( v6 < v5 );
    if ( collInfo->nodeCount > 0x800 )
    {
      if ( nextPrintTime_7 < Sys_Milliseconds() )
      {
        LODWORD(v19) = collInfo->nodeCount;
        Com_PrintWarning(16, "R_SetupSphereStaticGeo query for sphere (%f,%f,%f,%f) returned too many GfxAabbTree nodes (%u) for MAX_NODES capacity (%u) - will be discarding results\n", collInfo->sphere.origin.v[0], collInfo->sphere.origin.v[1], collInfo->sphere.origin.v[2], collInfo->sphere.radius, v19, 2048);
        nextPrintTime_7 = Sys_Milliseconds() + 2000;
      }
      collInfo->nodeCount = 2048;
    }
  }
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
}

/*
==============
R_SphereStaticGeo_r
==============
*/
void R_SphereStaticGeo_r(const mnode_t *node, const Sphere *sphere, unsigned int *cellBits)
{
  unsigned int planeOrCellIndex; 
  unsigned int v7; 
  int v8; 
  float radius; 
  float v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  if ( rgp.world != &s_world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_collision.cpp", 54, ASSERT_TYPE_ASSERT, "(rgp.world == &s_world)", (const char *)&queryFormat, "rgp.world == &s_world") )
    __debugbreak();
  planeOrCellIndex = node->planeOrCellIndex;
  v7 = s_world.dpvsPlanes.cellCount + 1;
  v8 = planeOrCellIndex - (s_world.dpvsPlanes.cellCount + 1);
  if ( v8 >= 0 )
  {
    do
    {
      if ( v8 >= (unsigned int)s_world.dpvsPlanes.planeCount )
      {
        LODWORD(v13) = s_world.dpvsPlanes.planeCount;
        LODWORD(v12) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_collision.cpp", 66, ASSERT_TYPE_ASSERT, "(unsigned)( planeIndex ) < (unsigned)( s_world.dpvsPlanes.planeCount )", "planeIndex doesn't index s_world.dpvsPlanes.planeCount\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      radius = sphere->radius;
      v10 = (float)((float)((float)(s_world.dpvsPlanes.planes[v8].normal.v[1] * sphere->origin.v[1]) + (float)(s_world.dpvsPlanes.planes[v8].normal.v[0] * sphere->origin.v[0])) + (float)(s_world.dpvsPlanes.planes[v8].normal.v[2] * sphere->origin.v[2])) - s_world.dpvsPlanes.planes[v8].dist;
      if ( v10 >= radius )
      {
        v11 = 4i64;
      }
      else
      {
        if ( v10 > COERCE_FLOAT(LODWORD(radius) ^ _xmm) )
          R_SphereStaticGeo_r(node + 1, sphere, cellBits);
        v11 = 2i64 * node->rightChildOffset;
      }
      node = (const mnode_t *)((char *)node + v11);
      planeOrCellIndex = node->planeOrCellIndex;
      v8 = planeOrCellIndex - v7;
    }
    while ( (int)(planeOrCellIndex - v7) >= 0 );
  }
  if ( planeOrCellIndex )
    cellBits[(planeOrCellIndex - 1i64) >> 5] |= 0x80000000 >> ((planeOrCellIndex - 1) & 0x1F);
}

/*
==============
R_SphereStaticModels
==============
*/
__int64 R_SphereStaticModels(const R_CollInfo *collInfo, int (*allowSModel)(int, void *), void *callbackContext, unsigned __int16 *smodelList, unsigned int smodelListSize)
{
  const R_CollInfo *v5; 
  __int64 v6; 
  Bounds *collectionBounds; 
  unsigned int nodeCount; 
  const ObfuscateErrorText *v9; 
  const R_CollInfo *v10; 
  __int64 v11; 
  const GfxAabbTree *v12; 
  unsigned int v13; 
  unsigned int smodelIndexCount; 
  float *v; 
  __int64 v16; 
  __int64 v17; 
  float *v18; 
  __m128 v20; 
  __m128 v24; 
  __m128 v28; 
  Bounds *v39; 
  const R_CollInfo *v40; 
  __int64 v41; 
  __m128 v46; 
  __m128 v47; 
  __m128 v48; 

  v5 = collInfo;
  Profile_Begin(236);
  Sys_ProfBeginNamedEvent(0xFFF08080, "R_SphereStaticModels");
  v6 = 0i64;
  collectionBounds = rgp.world->smodels.collectionBounds;
  nodeCount = v5->nodeCount;
  v39 = collectionBounds;
  if ( nodeCount )
  {
    v9 = &queryFormat;
    v10 = v5;
    v11 = nodeCount;
    v40 = v5;
    v41 = v5->nodeCount;
    do
    {
      v12 = v10->nodes[0];
      v13 = 0;
      smodelIndexCount = v10->nodes[0]->smodelIndexCount;
      if ( v10->nodes[0]->smodelIndexCount )
      {
        v = v5->sphere.origin.v;
        v16 = 0i64;
        while ( 1 )
        {
          v17 = v12->smodelIndexes[v16];
          v18 = collectionBounds[v17].midPoint.v;
          if ( !v18 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1335, ASSERT_TYPE_ASSERT, "(b)", (const char *)&queryFormat, "b") )
              __debugbreak();
            v9 = &queryFormat;
          }
          if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1336, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
            __debugbreak();
          v46.m128_i32[3] = 0;
          v20 = v46;
          v20.m128_f32[0] = *v;
          _XMM5 = v20;
          __asm
          {
            vinsertps xmm5, xmm5, dword ptr [r15+4], 10h
            vinsertps xmm5, xmm5, dword ptr [r15+8], 20h ; ' '
          }
          v47.m128_i32[3] = 0;
          v24 = v47;
          v24.m128_f32[0] = *v18;
          _XMM4 = v24;
          __asm
          {
            vinsertps xmm4, xmm4, dword ptr [r14+4], 10h
            vinsertps xmm4, xmm4, dword ptr [r14+8], 20h ; ' '
          }
          v48.m128_i32[3] = 0;
          v28 = v48;
          v28.m128_f32[0] = v18[3];
          _XMM3 = v28;
          _XMM0 = g_negativeZero.v;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [r14+10h], 10h
            vinsertps xmm3, xmm3, dword ptr [r14+14h], 20h ; ' '
          }
          _mm128_sub_ps(_XMM5, _XMM4);
          __asm { vandnps xmm2, xmm0, xmm1 }
          _XMM1 = _mm128_sub_ps(_XMM2, _XMM3);
          __asm { vmaxps  xmm0, xmm1, xmm6 }
          _XMM2 = _mm128_mul_ps(_XMM0, _XMM0);
          __asm
          {
            vhaddps xmm1, xmm2, xmm2
            vhaddps xmm0, xmm1, xmm1
          }
          v46 = _XMM5;
          v47 = _XMM4;
          v48 = _XMM3;
          if ( *(float *)&_XMM0 <= v[4] && ((unsigned int (__fastcall *)(_QWORD, void *, __int64, const ObfuscateErrorText *))allowSModel)((unsigned int)v17, callbackContext, v11, v9) )
          {
            if ( (_DWORD)v6 == smodelListSize )
              break;
            smodelList[v6] = v17;
            v6 = (unsigned int)(v6 + 1);
          }
          ++v13;
          ++v16;
          if ( v13 >= smodelIndexCount )
            break;
          collectionBounds = v39;
          v9 = &queryFormat;
        }
        collectionBounds = v39;
        v9 = &queryFormat;
        v10 = v40;
        v11 = v41;
        v5 = collInfo;
      }
      v10 = (const R_CollInfo *)((char *)v10 + 8);
      --v11;
      v40 = v10;
      v41 = v11;
    }
    while ( v11 );
  }
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
  return (unsigned int)v6;
}

/*
==============
R_SphereSurfaces
==============
*/
__int64 R_SphereSurfaces(const R_CollInfo *collInfo, int (*const *allowSurf)(int, void *), void *callbackContext, GfxSurface ***surfLists, unsigned int surfListSize, unsigned int *surfCounts, unsigned int listCount)
{
  const R_CollInfo *v7; 
  unsigned int *sortedSurfIndex; 
  GfxSurfaceBounds *surfaceBounds; 
  unsigned int v10; 
  const R_CollInfo *v11; 
  const GfxAabbTree *v12; 
  unsigned int v13; 
  __int64 v14; 
  float *v; 
  __m128 v17; 
  __m128 v21; 
  __m128 v25; 
  __int64 v35; 
  unsigned __int8 v36; 
  unsigned int v38; 
  const R_CollInfo *v39; 
  const GfxAabbTree *v40; 
  unsigned int v41; 
  __int64 v42; 
  float *v43; 
  float *v44; 
  __m128 v46; 
  __m128 v50; 
  __m128 v54; 
  __int64 v64; 
  __int64 v65; 
  GfxSurface ***v66; 
  unsigned int v67; 
  unsigned int v68; 
  unsigned int v69; 
  unsigned int surfaceCount; 
  unsigned int v71; 
  unsigned int nodeCount; 
  unsigned int v73; 
  const R_CollInfo *v74; 
  Sphere *p_sphere; 
  unsigned int *v76; 
  GfxSurfaceBounds *v77; 
  const GfxAabbTree *v78; 
  const R_CollInfo *v79; 
  GfxSurface *surfaces; 
  __m128 v85; 
  __m128 v86; 
  __m128 v87; 
  const GfxAabbTree *v88; 
  __m128 v89; 

  v7 = collInfo;
  Profile_Begin(235);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "R_SphereSurfaces");
  sortedSurfIndex = rgp.world->dpvs.sortedSurfIndex;
  v76 = sortedSurfIndex;
  surfaces = rgp.world->surfaces.surfaces;
  surfaceBounds = rgp.world->surfaces.surfaceBounds;
  v77 = surfaceBounds;
  *surfCounts = 0;
  if ( listCount == 1 )
  {
    nodeCount = v7->nodeCount;
    v10 = 0;
    v68 = 0;
    if ( nodeCount )
    {
      v11 = v7;
      v74 = v7;
      do
      {
        v12 = v11->nodes[0];
        v78 = v12;
        surfaceCount = v12->surfaceCount;
        v13 = 0;
        if ( surfaceCount )
        {
          do
          {
            v14 = sortedSurfIndex[v13 + v12->startSurfIndex];
            v = surfaceBounds[v14].bounds.midPoint.v;
            if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1335, ASSERT_TYPE_ASSERT, "(b)", (const char *)&queryFormat, "b") )
              __debugbreak();
            if ( v7 == (const R_CollInfo *)-16388i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1336, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
              __debugbreak();
            v87.m128_i32[3] = 0;
            v17 = v87;
            v17.m128_f32[0] = v7->sphere.origin.v[0];
            _XMM5 = v17;
            __asm
            {
              vinsertps xmm5, xmm5, dword ptr [r13+4], 10h
              vinsertps xmm5, xmm5, dword ptr [r13+8], 20h ; ' '
            }
            v87 = _XMM5;
            v85.m128_i32[3] = 0;
            v21 = v85;
            v21.m128_f32[0] = *v;
            _XMM4 = v21;
            __asm
            {
              vinsertps xmm4, xmm4, dword ptr [r15+4], 10h
              vinsertps xmm4, xmm4, dword ptr [r15+8], 20h ; ' '
            }
            v85 = _XMM4;
            v86.m128_i32[3] = 0;
            v25 = v86;
            v25.m128_f32[0] = v[3];
            _XMM3 = v25;
            __asm
            {
              vinsertps xmm3, xmm3, dword ptr [r15+10h], 10h
              vinsertps xmm3, xmm3, dword ptr [r15+14h], 20h ; ' '
            }
            v86 = _XMM3;
            _mm128_sub_ps(_XMM5, _XMM4);
            _XMM0 = g_negativeZero.v;
            __asm { vandnps xmm1, xmm0, xmm1 }
            _XMM2 = _mm128_sub_ps(_XMM1, _XMM3);
            __asm { vmaxps  xmm0, xmm2, xmm6 }
            _XMM1 = _mm128_mul_ps(_XMM0, _XMM0);
            __asm
            {
              vhaddps xmm2, xmm1, xmm1
              vhaddps xmm0, xmm2, xmm2
            }
            if ( *(float *)&_XMM0 <= v7->sphere.radiusSq && (*allowSurf)(v14, callbackContext) )
            {
              v35 = *surfCounts;
              if ( (_DWORD)v35 == surfListSize )
                goto LABEL_47;
              (*surfLists)[v35] = &surfaces[v14];
              ++*surfCounts;
            }
            ++v13;
            v12 = v78;
            sortedSurfIndex = v76;
            surfaceBounds = v77;
          }
          while ( v13 < surfaceCount );
          v10 = v68;
          v7 = collInfo;
        }
        v68 = ++v10;
        v11 = (const R_CollInfo *)&v74->nodes[1];
        v74 = (const R_CollInfo *)((char *)v74 + 8);
      }
      while ( v10 < nodeCount );
    }
  }
  else
  {
    if ( listCount != 2 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_collision.cpp", 135, ASSERT_TYPE_ASSERT, "(listCount == 2)", (const char *)&queryFormat, "listCount == 2") )
        __debugbreak();
      surfaceBounds = v77;
      sortedSurfIndex = v76;
    }
    surfCounts[1] = 0;
    v71 = v7->nodeCount;
    v38 = 0;
    v69 = 0;
    if ( v71 )
    {
      v39 = v7;
      v79 = v7;
      while ( 1 )
      {
        v40 = v39->nodes[0];
        v88 = v39->nodes[0];
        v73 = v39->nodes[0]->surfaceCount;
        v41 = 0;
        if ( v73 )
        {
          p_sphere = &v7->sphere;
          while ( 1 )
          {
            v42 = sortedSurfIndex[v41 + v40->startSurfIndex];
            v43 = surfaceBounds[v42].bounds.midPoint.v;
            if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1335, ASSERT_TYPE_ASSERT, "(b)", (const char *)&queryFormat, "b") )
              __debugbreak();
            v44 = (float *)p_sphere;
            if ( !p_sphere )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1336, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
                __debugbreak();
              v44 = NULL;
            }
            v86.m128_i32[3] = 0;
            v46 = v86;
            v46.m128_f32[0] = *v44;
            _XMM5 = v46;
            __asm
            {
              vinsertps xmm5, xmm5, dword ptr [rax+4], 10h
              vinsertps xmm5, xmm5, dword ptr [rax+8], 20h ; ' '
            }
            v86 = _XMM5;
            v85.m128_i32[3] = 0;
            v50 = v85;
            v50.m128_f32[0] = *v43;
            _XMM4 = v50;
            __asm
            {
              vinsertps xmm4, xmm4, dword ptr [r15+4], 10h
              vinsertps xmm4, xmm4, dword ptr [r15+8], 20h ; ' '
            }
            v85 = _XMM4;
            v89.m128_i32[3] = 0;
            v54 = v89;
            v54.m128_f32[0] = v43[3];
            _XMM3 = v54;
            __asm
            {
              vinsertps xmm3, xmm3, dword ptr [r15+10h], 10h
              vinsertps xmm3, xmm3, dword ptr [r15+14h], 20h ; ' '
            }
            v89 = _XMM3;
            _mm128_sub_ps(_XMM5, _XMM4);
            _XMM0 = g_negativeZero.v;
            __asm { vandnps xmm1, xmm0, xmm1 }
            _XMM2 = _mm128_sub_ps(_XMM1, _XMM3);
            __asm { vmaxps  xmm0, xmm2, xmm6 }
            _XMM1 = _mm128_mul_ps(_XMM0, _XMM0);
            __asm
            {
              vhaddps xmm2, xmm1, xmm1
              vhaddps xmm0, xmm2, xmm2
            }
            if ( *(float *)&_XMM0 <= v44[4] )
            {
              if ( (*allowSurf)(v42, callbackContext) )
              {
                v64 = *surfCounts;
                if ( (_DWORD)v64 == surfListSize )
                  goto LABEL_47;
                v65 = v42;
                v66 = surfLists;
                (*surfLists)[v64] = &surfaces[v42];
                ++*surfCounts;
              }
              else
              {
                v65 = v42;
                v66 = surfLists;
              }
              if ( allowSurf[1](v42, callbackContext) )
              {
                v67 = surfCounts[1];
                if ( v67 == surfListSize )
                {
LABEL_47:
                  v36 = 1;
                  goto LABEL_19;
                }
                v66[1][v67] = &surfaces[v65];
                ++surfCounts[1];
              }
            }
            ++v41;
            v40 = v88;
            sortedSurfIndex = v76;
            surfaceBounds = v77;
            if ( v41 >= v73 )
            {
              v38 = v69;
              v7 = collInfo;
              break;
            }
          }
        }
        v69 = ++v38;
        v39 = (const R_CollInfo *)&v79->nodes[1];
        v79 = (const R_CollInfo *)((char *)v79 + 8);
        if ( v38 >= v71 )
          break;
        sortedSurfIndex = v76;
        surfaceBounds = v77;
      }
    }
  }
  v36 = 0;
LABEL_19:
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
  return v36;
}

