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
  char *fmt; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int *v34; 
  unsigned int cellBits[32]; 

  _R14 = collInfo;
  Profile_Begin(234);
  Sys_ProfBeginNamedEvent(0xFFF08080, "R_SetupSphereStaticGeo0");
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_collision.cpp", 184, ASSERT_TYPE_ASSERT, "(collInfo)", (const char *)&queryFormat, "collInfo") )
    __debugbreak();
  world = rgp.world;
  if ( rgp.world->dpvsPlanes.cellCount > 0x400 )
  {
    LODWORD(v29) = rgp.world->dpvsPlanes.cellCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_collision.cpp", 187, ASSERT_TYPE_ASSERT, "( ( worldDpvsPlanes->cellCount <= (1024) ) )", "( worldDpvsPlanes->cellCount ) = %i", v29) )
      __debugbreak();
  }
  v5 = (world->dpvsPlanes.cellCount + 31) >> 5;
  v33 = v5;
  memset_0(cellBits, 0, 4i64 * v5);
  R_SphereStaticGeo_r((const mnode_t *)world->dpvsPlanes.nodes, &_R14->sphere, cellBits);
  v6 = 0;
  v32 = 0;
  _R14->nodeCount = 0;
  if ( v5 )
  {
    v7 = cellBits;
    v34 = cellBits;
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
            LODWORD(v31) = s_world.dpvsPlanes.cellCount;
            LODWORD(v29) = v10 + v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( world->dpvsPlanes.cellCount )", "cellIndex doesn't index world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", v29, v31) )
              __debugbreak();
          }
          v12 = v11;
          cellTransientInfos = s_world.cellTransientInfos;
          transientZone = s_world.cellTransientInfos[v12].transientZone;
          if ( transientZone >= transientDrawContext->zoneCount )
          {
            LODWORD(v31) = transientDrawContext->zoneCount;
            LODWORD(v29) = s_world.cellTransientInfos[v12].transientZone;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v29, v31) )
              __debugbreak();
          }
          v15 = transientDrawContext->drawCellsPtrs[(unsigned __int16)transientZone];
          if ( v15 )
          {
            aabbTreeIndex = cellTransientInfos[v12].aabbTreeIndex;
            if ( aabbTreeIndex >= v15->cellCount )
            {
              LODWORD(v31) = v15->cellCount;
              LODWORD(v29) = aabbTreeIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 78, ASSERT_TYPE_ASSERT, "(unsigned)( aabbTreeIndex ) < (unsigned)( drawCells.cellCount )", "aabbTreeIndex doesn't index drawCells.cellCount\n\t%i not in [0, %i)", v29, v31) )
                __debugbreak();
            }
            aabbTree = v15->aabbTrees[(unsigned __int16)aabbTreeIndex].aabbTree;
            if ( aabbTree )
              R_AABBTreeStaticGeo_r(aabbTree, _R14);
          }
          v9 = __lzcnt(v8);
        }
        while ( v9 < 0x20 );
        v6 = v32;
        v5 = v33;
        v7 = v34;
      }
      ++v6;
      ++v7;
      v32 = v6;
      v34 = v7;
    }
    while ( v6 < v5 );
    if ( _R14->nodeCount > 0x800 )
    {
      if ( nextPrintTime_7 < Sys_Milliseconds() )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+4010h]
          vmovss  xmm3, dword ptr [r14+4008h]
          vmovss  xmm2, dword ptr [r14+4004h]
          vmovss  xmm1, dword ptr [r14+400Ch]
        }
        LODWORD(v31) = _R14->nodeCount;
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm2, xmm2, xmm2
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+118h+var_F0], xmm0
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovsd  [rsp+118h+fmt], xmm1
        }
        Com_PrintWarning(16, "R_SetupSphereStaticGeo query for sphere (%f,%f,%f,%f) returned too many GfxAabbTree nodes (%u) for MAX_NODES capacity (%u) - will be discarding results\n", _R8, _R9, fmt, v30, v31, 2048);
        nextPrintTime_7 = Sys_Milliseconds() + 2000;
      }
      _R14->nodeCount = 2048;
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
  unsigned int v8; 
  int v9; 
  bool v11; 
  bool v12; 
  bool v13; 
  __int64 v27; 
  __int64 v29; 
  __int64 v30; 

  _RSI = sphere;
  if ( rgp.world != &s_world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_collision.cpp", 54, ASSERT_TYPE_ASSERT, "(rgp.world == &s_world)", (const char *)&queryFormat, "rgp.world == &s_world") )
    __debugbreak();
  planeOrCellIndex = node->planeOrCellIndex;
  v8 = s_world.dpvsPlanes.cellCount + 1;
  v9 = planeOrCellIndex - (s_world.dpvsPlanes.cellCount + 1);
  if ( v9 >= 0 )
  {
    __asm
    {
      vmovaps [rsp+68h+var_28], xmm6
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    do
    {
      v11 = v9 < (unsigned int)s_world.dpvsPlanes.planeCount;
      v12 = v9 <= (unsigned int)s_world.dpvsPlanes.planeCount;
      if ( v9 >= (unsigned int)s_world.dpvsPlanes.planeCount )
      {
        LODWORD(v30) = s_world.dpvsPlanes.planeCount;
        LODWORD(v29) = v9;
        v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_collision.cpp", 66, ASSERT_TYPE_ASSERT, "(unsigned)( planeIndex ) < (unsigned)( s_world.dpvsPlanes.planeCount )", "planeIndex doesn't index s_world.dpvsPlanes.planeCount\n\t%i not in [0, %i)", v29, v30);
        v11 = 0;
        v12 = !v13;
        if ( v13 )
          __debugbreak();
      }
      _RCX = 5i64 * v9;
      _RAX = s_world.dpvsPlanes.planes;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+rcx*4+4]
        vmulss  xmm3, xmm0, dword ptr [rsi+4]
        vmovss  xmm1, dword ptr [rax+rcx*4]
        vmulss  xmm2, xmm1, dword ptr [rsi]
        vmovss  xmm0, dword ptr [rax+rcx*4+8]
        vmulss  xmm1, xmm0, dword ptr [rsi+8]
        vmovss  xmm0, dword ptr [rsi+0Ch]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vsubss  xmm3, xmm2, dword ptr [rax+rcx*4+0Ch]
        vcomiss xmm3, xmm0
      }
      if ( v11 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm6
          vcomiss xmm3, xmm0
        }
        if ( !v12 )
          R_SphereStaticGeo_r(node + 1, _RSI, cellBits);
        v27 = 2i64 * node->rightChildOffset;
      }
      else
      {
        v27 = 4i64;
      }
      node = (const mnode_t *)((char *)node + v27);
      planeOrCellIndex = node->planeOrCellIndex;
      v9 = planeOrCellIndex - v8;
    }
    while ( (int)(planeOrCellIndex - v8) >= 0 );
    __asm { vmovaps xmm6, [rsp+68h+var_28] }
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
  const R_CollInfo *v6; 
  __int64 v7; 
  Bounds *collectionBounds; 
  unsigned int nodeCount; 
  const ObfuscateErrorText *v10; 
  const R_CollInfo *v11; 
  __int64 v12; 
  const GfxAabbTree *v13; 
  unsigned int v14; 
  unsigned int smodelIndexCount; 
  __int64 v17; 
  __int64 v18; 
  Bounds *v45; 
  const R_CollInfo *v46; 
  __int64 v47; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 

  v6 = collInfo;
  Profile_Begin(236);
  Sys_ProfBeginNamedEvent(0xFFF08080, "R_SphereStaticModels");
  v7 = 0i64;
  collectionBounds = rgp.world->smodels.collectionBounds;
  nodeCount = v6->nodeCount;
  v45 = collectionBounds;
  if ( nodeCount )
  {
    v10 = &queryFormat;
    v11 = v6;
    v12 = nodeCount;
    __asm { vmovaps [rsp+108h+var_58], xmm6 }
    v46 = v6;
    v47 = v6->nodeCount;
    do
    {
      v13 = v11->nodes[0];
      v14 = 0;
      smodelIndexCount = v11->nodes[0]->smodelIndexCount;
      if ( v11->nodes[0]->smodelIndexCount )
      {
        _R15 = &v6->sphere;
        v17 = 0i64;
        __asm { vxorps  xmm6, xmm6, xmm6 }
        while ( 1 )
        {
          v18 = v13->smodelIndexes[v17];
          if ( !&collectionBounds[v18] )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1335, ASSERT_TYPE_ASSERT, "(b)", (const char *)&queryFormat, "b") )
              __debugbreak();
            v10 = &queryFormat;
          }
          if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1336, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
            __debugbreak();
          __asm { vmovss  xmm0, dword ptr [r15] }
          HIDWORD(v52) = 0;
          __asm
          {
            vmovups xmm5, xmmword ptr [rsp+70h]
            vmovss  xmm5, xmm5, xmm0
            vmovss  xmm0, dword ptr [r14]
            vinsertps xmm5, xmm5, dword ptr [r15+4], 10h
            vinsertps xmm5, xmm5, dword ptr [r15+8], 20h ; ' '
          }
          HIDWORD(v53) = 0;
          __asm
          {
            vmovups xmm4, xmmword ptr [rsp+80h]
            vmovss  xmm4, xmm4, xmm0
            vmovss  xmm0, dword ptr [r14+0Ch]
            vinsertps xmm4, xmm4, dword ptr [r14+4], 10h
            vinsertps xmm4, xmm4, dword ptr [r14+8], 20h ; ' '
          }
          HIDWORD(v54) = 0;
          __asm
          {
            vmovups xmm3, xmmword ptr [rsp+90h]
            vmovss  xmm3, xmm3, xmm0
            vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
            vinsertps xmm3, xmm3, dword ptr [r14+10h], 10h
            vinsertps xmm3, xmm3, dword ptr [r14+14h], 20h ; ' '
            vsubps  xmm1, xmm5, xmm4
            vandnps xmm2, xmm0, xmm1
            vsubps  xmm1, xmm2, xmm3
            vmaxps  xmm0, xmm1, xmm6
            vmulps  xmm2, xmm0, xmm0
            vhaddps xmm1, xmm2, xmm2
            vhaddps xmm0, xmm1, xmm1
            vcomiss xmm0, dword ptr [r15+10h]
            vmovups xmmword ptr [rsp+70h], xmm5
            vmovups xmmword ptr [rsp+80h], xmm4
            vmovups xmmword ptr [rsp+90h], xmm3
          }
          if ( ((unsigned int (__fastcall *)(_QWORD, void *, __int64, const ObfuscateErrorText *))allowSModel)((unsigned int)v18, callbackContext, v12, v10) )
          {
            if ( (_DWORD)v7 == smodelListSize )
              break;
            smodelList[v7] = v18;
            v7 = (unsigned int)(v7 + 1);
          }
          ++v14;
          ++v17;
          if ( v14 >= smodelIndexCount )
            break;
          collectionBounds = v45;
          v10 = &queryFormat;
        }
        collectionBounds = v45;
        v10 = &queryFormat;
        v11 = v46;
        v12 = v47;
        v6 = collInfo;
      }
      v11 = (const R_CollInfo *)((char *)v11 + 8);
      --v12;
      v46 = v11;
      v47 = v12;
    }
    while ( v12 );
    __asm { vmovaps xmm6, [rsp+108h+var_58] }
  }
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
  return (unsigned int)v7;
}

/*
==============
R_SphereSurfaces
==============
*/
__int64 R_SphereSurfaces(const R_CollInfo *collInfo, int (*const *allowSurf)(int, void *), void *callbackContext, GfxSurface ***surfLists, unsigned int surfListSize, unsigned int *surfCounts, unsigned int listCount)
{
  const R_CollInfo *v8; 
  unsigned int *sortedSurfIndex; 
  GfxSurfaceBounds *surfaceBounds; 
  unsigned int v11; 
  const R_CollInfo *v12; 
  const GfxAabbTree *v13; 
  unsigned int v14; 
  __int64 v16; 
  __int64 v41; 
  unsigned __int8 v42; 
  __int64 result; 
  unsigned int v45; 
  const R_CollInfo *v46; 
  const GfxAabbTree *v47; 
  unsigned int v48; 
  __int64 v49; 
  __int64 v75; 
  __int64 v76; 
  GfxSurface ***v77; 
  unsigned int v78; 
  unsigned int v79; 
  unsigned int v80; 
  unsigned int surfaceCount; 
  unsigned int v82; 
  unsigned int nodeCount; 
  unsigned int v84; 
  const R_CollInfo *v85; 
  Sphere *p_sphere; 
  unsigned int *v87; 
  GfxSurfaceBounds *v88; 
  const GfxAabbTree *v89; 
  const R_CollInfo *v90; 
  GfxSurface *surfaces; 
  __int128 v96; 
  __int128 v97; 
  __int128 v98; 
  const GfxAabbTree *v99; 
  __int128 v100; 

  __asm { vmovaps [rsp+130h+var_50], xmm6 }
  v8 = collInfo;
  Profile_Begin(235);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "R_SphereSurfaces");
  sortedSurfIndex = rgp.world->dpvs.sortedSurfIndex;
  v87 = sortedSurfIndex;
  surfaces = rgp.world->surfaces.surfaces;
  surfaceBounds = rgp.world->surfaces.surfaceBounds;
  v88 = surfaceBounds;
  *surfCounts = 0;
  if ( listCount == 1 )
  {
    nodeCount = v8->nodeCount;
    v11 = 0;
    v79 = 0;
    if ( nodeCount )
    {
      v12 = v8;
      v85 = v8;
      do
      {
        v13 = v12->nodes[0];
        v89 = v13;
        surfaceCount = v13->surfaceCount;
        v14 = 0;
        if ( surfaceCount )
        {
          _R13 = &v8->sphere;
          __asm { vxorps  xmm6, xmm6, xmm6 }
          do
          {
            v16 = sortedSurfIndex[v14 + v13->startSurfIndex];
            _R15 = &surfaceBounds[v16];
            if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1335, ASSERT_TYPE_ASSERT, "(b)", (const char *)&queryFormat, "b") )
              __debugbreak();
            if ( v8 == (const R_CollInfo *)-16388i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1336, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
              __debugbreak();
            __asm { vmovss  xmm0, dword ptr [r13+0] }
            HIDWORD(v98) = 0;
            __asm
            {
              vmovups xmm5, xmmword ptr [rbp-41h]
              vmovss  xmm5, xmm5, xmm0
              vinsertps xmm5, xmm5, dword ptr [r13+4], 10h
              vinsertps xmm5, xmm5, dword ptr [r13+8], 20h ; ' '
              vmovups xmmword ptr [rbp-41h], xmm5
              vmovss  xmm0, dword ptr [r15]
            }
            HIDWORD(v96) = 0;
            __asm
            {
              vmovups xmm4, xmmword ptr [rbp-61h]
              vmovss  xmm4, xmm4, xmm0
              vinsertps xmm4, xmm4, dword ptr [r15+4], 10h
              vinsertps xmm4, xmm4, dword ptr [r15+8], 20h ; ' '
              vmovups xmmword ptr [rbp-61h], xmm4
              vmovss  xmm0, dword ptr [r15+0Ch]
            }
            HIDWORD(v97) = 0;
            __asm
            {
              vmovups xmm3, xmmword ptr [rbp-51h]
              vmovss  xmm3, xmm3, xmm0
              vinsertps xmm3, xmm3, dword ptr [r15+10h], 10h
              vinsertps xmm3, xmm3, dword ptr [r15+14h], 20h ; ' '
              vmovups xmmword ptr [rbp-51h], xmm3
              vsubps  xmm1, xmm5, xmm4
              vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
              vandnps xmm1, xmm0, xmm1
              vsubps  xmm2, xmm1, xmm3
              vmaxps  xmm0, xmm2, xmm6
              vmulps  xmm1, xmm0, xmm0
              vhaddps xmm2, xmm1, xmm1
              vhaddps xmm0, xmm2, xmm2
              vcomiss xmm0, dword ptr [r13+10h]
            }
            if ( (*allowSurf)(v16, callbackContext) )
            {
              v41 = *surfCounts;
              if ( (_DWORD)v41 == surfListSize )
                goto LABEL_46;
              (*surfLists)[v41] = &surfaces[v16];
              ++*surfCounts;
            }
            ++v14;
            v13 = v89;
            sortedSurfIndex = v87;
            surfaceBounds = v88;
          }
          while ( v14 < surfaceCount );
          v11 = v79;
          v8 = collInfo;
        }
        v79 = ++v11;
        v12 = (const R_CollInfo *)&v85->nodes[1];
        v85 = (const R_CollInfo *)((char *)v85 + 8);
      }
      while ( v11 < nodeCount );
    }
  }
  else
  {
    if ( listCount != 2 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_collision.cpp", 135, ASSERT_TYPE_ASSERT, "(listCount == 2)", (const char *)&queryFormat, "listCount == 2") )
        __debugbreak();
      surfaceBounds = v88;
      sortedSurfIndex = v87;
    }
    surfCounts[1] = 0;
    v82 = v8->nodeCount;
    v45 = 0;
    v80 = 0;
    if ( v82 )
    {
      v46 = v8;
      v90 = v8;
      while ( 1 )
      {
        v47 = v46->nodes[0];
        v99 = v46->nodes[0];
        v84 = v46->nodes[0]->surfaceCount;
        v48 = 0;
        if ( v84 )
        {
          p_sphere = &v8->sphere;
          __asm { vxorps  xmm6, xmm6, xmm6 }
          while ( 1 )
          {
            v49 = sortedSurfIndex[v48 + v47->startSurfIndex];
            _R15 = &surfaceBounds[v49];
            if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1335, ASSERT_TYPE_ASSERT, "(b)", (const char *)&queryFormat, "b") )
              __debugbreak();
            _RAX = p_sphere;
            if ( !p_sphere )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1336, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
                __debugbreak();
              _RAX = NULL;
            }
            __asm { vmovss  xmm0, dword ptr [rax] }
            HIDWORD(v97) = 0;
            __asm
            {
              vmovups xmm5, xmmword ptr [rbp-51h]
              vmovss  xmm5, xmm5, xmm0
              vinsertps xmm5, xmm5, dword ptr [rax+4], 10h
              vinsertps xmm5, xmm5, dword ptr [rax+8], 20h ; ' '
              vmovups xmmword ptr [rbp-51h], xmm5
              vmovss  xmm0, dword ptr [r15]
            }
            HIDWORD(v96) = 0;
            __asm
            {
              vmovups xmm4, xmmword ptr [rbp-61h]
              vmovss  xmm4, xmm4, xmm0
              vinsertps xmm4, xmm4, dword ptr [r15+4], 10h
              vinsertps xmm4, xmm4, dword ptr [r15+8], 20h ; ' '
              vmovups xmmword ptr [rbp-61h], xmm4
              vmovss  xmm0, dword ptr [r15+0Ch]
            }
            HIDWORD(v100) = 0;
            __asm
            {
              vmovups xmm3, xmmword ptr [rbp-31h]
              vmovss  xmm3, xmm3, xmm0
              vinsertps xmm3, xmm3, dword ptr [r15+10h], 10h
              vinsertps xmm3, xmm3, dword ptr [r15+14h], 20h ; ' '
              vmovups xmmword ptr [rbp-31h], xmm3
              vsubps  xmm1, xmm5, xmm4
              vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
              vandnps xmm1, xmm0, xmm1
              vsubps  xmm2, xmm1, xmm3
              vmaxps  xmm0, xmm2, xmm6
              vmulps  xmm1, xmm0, xmm0
              vhaddps xmm2, xmm1, xmm1
              vhaddps xmm0, xmm2, xmm2
              vcomiss xmm0, dword ptr [rax+10h]
            }
            if ( (*allowSurf)(v49, callbackContext) )
            {
              v75 = *surfCounts;
              if ( (_DWORD)v75 == surfListSize )
                goto LABEL_46;
              v76 = v49;
              v77 = surfLists;
              (*surfLists)[v75] = &surfaces[v49];
              ++*surfCounts;
            }
            else
            {
              v76 = v49;
              v77 = surfLists;
            }
            if ( allowSurf[1](v49, callbackContext) )
            {
              v78 = surfCounts[1];
              if ( v78 == surfListSize )
              {
LABEL_46:
                v42 = 1;
                goto LABEL_19;
              }
              v77[1][v78] = &surfaces[v76];
              ++surfCounts[1];
            }
            ++v48;
            v47 = v99;
            sortedSurfIndex = v87;
            surfaceBounds = v88;
            if ( v48 >= v84 )
            {
              v45 = v80;
              v8 = collInfo;
              break;
            }
          }
        }
        v80 = ++v45;
        v46 = (const R_CollInfo *)&v90->nodes[1];
        v90 = (const R_CollInfo *)((char *)v90 + 8);
        if ( v45 >= v82 )
          break;
        sortedSurfIndex = v87;
        surfaceBounds = v88;
      }
    }
  }
  v42 = 0;
LABEL_19:
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
  result = v42;
  __asm { vmovaps xmm6, [rsp+130h+var_50] }
  return result;
}

