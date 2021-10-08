/*
==============
R_GetSortedBspSurfListIndirect
==============
*/

void __fastcall R_GetSortedBspSurfListIndirect(GfxSurface **surfArray, unsigned int surfArraySize, GfxBspSurfListOut *out)
{
  ?R_GetSortedBspSurfListIndirect@@YAXPEIAPEAUGfxSurface@@IPEIAUGfxBspSurfListOut@@@Z(surfArray, surfArraySize, out);
}

/*
==============
R_AddAllBspDrawSurfacesCamera
==============
*/

void __fastcall R_AddAllBspDrawSurfacesCamera(const void *const cmd)
{
  ?R_AddAllBspDrawSurfacesCamera@@YAXQEBX@Z(cmd);
}

/*
==============
GfxGetBspSurfListBitIteratorInterface<GfxGetBspSurfListCameraLitData>::InitIterator
==============
*/

void __fastcall GfxGetBspSurfListBitIteratorInterface<GfxGetBspSurfListCameraLitData>::InitIterator(GfxGetBspSurfListCameraLitData *userData, unsigned int iterBegin, unsigned int iterEnd)
{
  ?InitIterator@?$GfxGetBspSurfListBitIteratorInterface@UGfxGetBspSurfListCameraLitData@@@@SAXAEAUGfxGetBspSurfListCameraLitData@@II@Z(userData, iterBegin, iterEnd);
}

/*
==============
R_AddAllBspDrawSurfacesSpotShadow
==============
*/

void __fastcall R_AddAllBspDrawSurfacesSpotShadow(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex, unsigned int primaryLightIndex)
{
  ?R_AddAllBspDrawSurfacesSpotShadow@@YAXPEAUGfxViewInfo@@II@Z(viewInfo, spotShadowUpdateIndex, primaryLightIndex);
}

/*
==============
R_AddAllBspDrawSurfacesCameraNonlit
==============
*/

void __fastcall R_AddAllBspDrawSurfacesCameraNonlit(unsigned int beginSurface, unsigned int endSurface, GfxBspSurfListOut *out)
{
  ?R_AddAllBspDrawSurfacesCameraNonlit@@YAXIIPEAUGfxBspSurfListOut@@@Z(beginSurface, endSurface, out);
}

/*
==============
R_AddAllBspDrawSurfacesSunShadow
==============
*/

void __fastcall R_AddAllBspDrawSurfacesSunShadow(const void *const cmd)
{
  ?R_AddAllBspDrawSurfacesSunShadow@@YAXQEBX@Z(cmd);
}

/*
==============
GfxGetBspSurfListBitIteratorInterface<GfxGetSunShadowBspSurfListData>::InitIterator
==============
*/

void __fastcall GfxGetBspSurfListBitIteratorInterface<GfxGetSunShadowBspSurfListData>::InitIterator(GfxGetSunShadowBspSurfListData *userData, unsigned int iterBegin, unsigned int iterEnd)
{
  ?InitIterator@?$GfxGetBspSurfListBitIteratorInterface@UGfxGetSunShadowBspSurfListData@@@@SAXAEAUGfxGetSunShadowBspSurfListData@@II@Z(userData, iterBegin, iterEnd);
}

/*
==============
GfxGetBspSurfListBitIteratorInterface<GfxGetBspSurfListCameraLitData>::InitIterator
==============
*/
void GfxGetBspSurfListBitIteratorInterface<GfxGetBspSurfListCameraLitData>::InitIterator(GfxGetBspSurfListCameraLitData *userData, unsigned int iterBegin, unsigned int iterEnd)
{
  __int64 v3; 
  unsigned int v5; 
  unsigned int v7; 
  const unsigned int *v8; 

  v3 = iterBegin >> 5;
  v5 = 32 * (iterBegin >> 5);
  v7 = (iterEnd >> 5) - v3 + 1;
  v8 = &userData->surfaceVisData[v3];
  if ( iterEnd >> 5 < (unsigned int)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_bsp.cpp", 382, ASSERT_TYPE_ASSERT, "(surfEndDWord >= surfBeginDWord)", (const char *)&queryFormat, "surfEndDWord >= surfBeginDWord") )
    __debugbreak();
  if ( iterBegin < v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_bsp.cpp", 383, ASSERT_TYPE_ASSERT, "(iterBegin >= surfVisDataBeginIndex)", (const char *)&queryFormat, "iterBegin >= surfVisDataBeginIndex") )
    __debugbreak();
  userData->bspSurfIter.wordCount = v7;
  userData->bspSurfIter.wordIndex = 0;
  userData->bspSurfIter.bitArray = v8;
  userData->bspSurfIter.bits = 0;
  if ( v7 )
    userData->bspSurfIter.bits = *v8;
  userData->visDataBeginIndex = v5;
  userData->surfBegin = iterBegin;
  userData->surfEnd = iterEnd;
}

/*
==============
GfxGetBspSurfListBitIteratorInterface<GfxGetSunShadowBspSurfListData>::InitIterator
==============
*/
void GfxGetBspSurfListBitIteratorInterface<GfxGetSunShadowBspSurfListData>::InitIterator(GfxGetSunShadowBspSurfListData *userData, unsigned int iterBegin, unsigned int iterEnd)
{
  __int64 v3; 
  unsigned int v5; 
  unsigned int v7; 
  const unsigned int *v8; 

  v3 = iterBegin >> 5;
  v5 = 32 * (iterBegin >> 5);
  v7 = (iterEnd >> 5) - v3 + 1;
  v8 = &userData->surfaceVisData[v3];
  if ( iterEnd >> 5 < (unsigned int)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_bsp.cpp", 382, ASSERT_TYPE_ASSERT, "(surfEndDWord >= surfBeginDWord)", (const char *)&queryFormat, "surfEndDWord >= surfBeginDWord") )
    __debugbreak();
  if ( iterBegin < v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_bsp.cpp", 383, ASSERT_TYPE_ASSERT, "(iterBegin >= surfVisDataBeginIndex)", (const char *)&queryFormat, "iterBegin >= surfVisDataBeginIndex") )
    __debugbreak();
  userData->bspSurfIter.wordCount = v7;
  userData->bspSurfIter.wordIndex = 0;
  userData->bspSurfIter.bitArray = v8;
  userData->bspSurfIter.bits = 0;
  if ( v7 )
    userData->bspSurfIter.bits = *v8;
  userData->visDataBeginIndex = v5;
  userData->surfBegin = iterBegin;
  userData->surfEnd = iterEnd;
}

/*
==============
R_AddAllBspDrawSurfacesCamera
==============
*/
void R_AddAllBspDrawSurfacesCamera(const void *const cmd)
{
  __int64 v2; 
  GfxWorld *world; 
  int integer; 
  const dvar_t *v8; 
  int v9; 
  int v13; 
  GfxBspSurfListOut v17; 
  __m256i v18; 
  __m256i v19; 
  unsigned int *surfaceCastsSunShadow; 
  GfxGetBspSurfListCameraLitData v21; 
  __int64 v22; 

  v22 = -2i64;
  Profile_Begin(545);
  v2 = *(_QWORD *)cmd;
  world = rgp.world;
  v18.m256i_i64[0] = (__int64)rgp.world->dpvs.surfaceVisData[0];
  v19.m256i_i32[6] = sm_debugFastSunShadow->current.color[0];
  surfaceCastsSunShadow = g_worldDpvs->surfaceCastsSunShadow;
  integer = r_drawOpaqueSurfs->current.integer;
  if ( integer != 1 && integer != 4 )
  {
    *(_QWORD *)&v17.missingTransient = 0i64;
    v17.bspSurfList = (GfxBspSurfList *)(v2 + 16208);
    v17.drawlistType = DRAWLIST_LIT_OPAQUE;
    __asm
    {
      vmovups ymm0, [rbp+57h+var_B0]
      vmovups [rbp+57h+var_60], ymm0
      vmovups ymm0, ymmword ptr [rbp-39h]
      vmovups [rbp+57h+var_40], ymm0
      vmovsd  xmm0, [rbp+57h+var_70]
      vmovsd  [rbp+57h+var_20], xmm0
    }
    R_AddBspSurfaces_GfxGetBspSurfListCameraLitInterface_GfxGetBspSurfListCameraLitData_1_1_(&v21, rgp.world->surfaces.litOpaqueSurfsBegin, rgp.world->surfaces.litOpaqueSurfsEnd, &v17);
    world = rgp.world;
  }
  v8 = r_drawTransDecalSurfs;
  v9 = r_drawTransDecalSurfs->current.integer;
  if ( v9 != 1 && v9 != 4 )
  {
    *(_QWORD *)&v17.missingTransient = 0i64;
    v17.bspSurfList = (GfxBspSurfList *)(v2 + 17424);
    v17.drawlistType = DRAWLIST_LIT_DECAL;
    __asm
    {
      vmovups ymm0, [rbp+57h+var_B0]
      vmovups [rbp+57h+var_60], ymm0
      vmovups ymm0, ymmword ptr [rbp-39h]
      vmovups [rbp+57h+var_40], ymm0
      vmovsd  xmm0, [rbp+57h+var_70]
      vmovsd  [rbp+57h+var_20], xmm0
    }
    R_AddBspSurfaces_GfxGetBspSurfListCameraLitInterface_GfxGetBspSurfListCameraLitData_1_0_(&v21, world->surfaces.litDecalSurfsBegin, world->surfaces.litDecalSurfsEnd, &v17);
    world = rgp.world;
    v8 = r_drawTransDecalSurfs;
  }
  v13 = v8->current.integer;
  if ( v13 != 1 && v13 != 4 )
  {
    *(_QWORD *)&v17.missingTransient = 0i64;
    v17.bspSurfList = (GfxBspSurfList *)(v2 + 17576);
    v17.drawlistType = DRAWLIST_LIT_TRANS;
    __asm
    {
      vmovups ymm0, [rbp+57h+var_B0]
      vmovups [rbp+57h+var_60], ymm0
      vmovups ymm0, ymmword ptr [rbp-39h]
      vmovups [rbp+57h+var_40], ymm0
      vmovsd  xmm0, [rbp+57h+var_70]
      vmovsd  [rbp+57h+var_20], xmm0
    }
    R_AddBspSurfaces_GfxGetBspSurfListCameraLitInterface_GfxGetBspSurfListCameraLitData_1_0_(&v21, world->surfaces.litTransSurfsBegin, world->surfaces.litTransSurfsEnd, &v17);
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_AddAllBspDrawSurfacesCameraNonlit
==============
*/
void R_AddAllBspDrawSurfacesCameraNonlit(unsigned int beginSurface, unsigned int endSurface, GfxBspSurfListOut *out)
{
  GfxGetBspSurfListCameraNonlitData userData; 

  userData.surfaceVisData = rgp.world->dpvs.surfaceVisData[0];
  R_AddBspSurfaces_GfxAddBspSurfacesCameraNonlitInterface_GfxGetBspSurfListCameraNonlitData___0_0_(&userData, beginSurface, endSurface, out);
}

/*
==============
R_AddAllBspDrawSurfacesSpotShadow
==============
*/
void R_AddAllBspDrawSurfacesSpotShadow(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex, unsigned int primaryLightIndex)
{
  __int64 v3; 
  GfxShadowGeometry *shadowGeomOptimized; 
  GfxShadowGeometry *v6; 
  GfxSpotShadowUpdate *v7; 
  unsigned int surfaceCount; 
  unsigned int v12; 
  GfxBspSurfListOut v14; 
  __int128 v15; 
  __int64 v16; 
  GfxGetSpotShadowBspSurfListData v17; 

  v3 = spotShadowUpdateIndex;
  *(_QWORD *)&v14.missingTransient = 0i64;
  v14.bspSurfList = NULL;
  v14.drawlistType = DRAWLIST_BACKEND_COUNT;
  shadowGeomOptimized = rgp.world->shadowGeomOptimized;
  if ( shadowGeomOptimized )
  {
    v6 = &shadowGeomOptimized[primaryLightIndex];
    *((_QWORD *)&v15 + 1) = v6;
    LODWORD(v16) = v3 + 4;
    v7 = &frontEndDataOut->spotShadowUpdates[v3];
    if ( frontEndDataOut->spotShadowUpdates[v3].needsDynamicShadows )
    {
      __asm { vmovups xmm0, [rsp+78h+var_40] }
      surfaceCount = v6->surfaceCount;
      __asm
      {
        vmovups [rsp+78h+var_28], xmm0
        vmovsd  xmm0, [rsp+78h+var_30]
        vmovsd  [rsp+78h+var_18], xmm0
      }
      v14.bspSurfList = &viewInfo->drawList[(int)v3 + 37].bspSurfList;
      v14.drawlistType = v3 + 37;
      R_AddBspSurfaces_GfxGetSpotShadowBspSurfListInterface_AnimatedVerts_GfxGetSpotShadowBspSurfListData_0_0_(&v17, 0, surfaceCount, &v14);
    }
    if ( R_SpotShadow_NeedsBSPSurfs(v7) )
    {
      __asm { vmovups xmm0, [rsp+78h+var_40] }
      v12 = v6->surfaceCount;
      __asm
      {
        vmovups [rsp+78h+var_28], xmm0
        vmovsd  xmm0, [rsp+78h+var_30]
      }
      v14.drawlistType = v3 + 29;
      __asm { vmovsd  [rsp+78h+var_18], xmm0 }
      v14.bspSurfList = &viewInfo->drawList[(int)v3 + 29].bspSurfList;
      R_AddBspSurfaces_GfxGetSpotShadowBspSurfListInterface_NonAnimatedVerts_GfxGetSpotShadowBspSurfListData_0_0_(&v17, 0, v12, &v14);
    }
    v7->missingTransientBSP = v14.missingTransient;
  }
}

/*
==============
R_AddAllBspDrawSurfacesSunShadow
==============
*/
void R_AddAllBspDrawSurfacesSunShadow(const void *const cmd)
{
  unsigned int v1; 
  __int64 v2; 
  unsigned int emissiveSurfsEnd; 
  int hasApproxSunDirChanged; 
  bool enabled; 
  unsigned int *surfaceCastsSunShadowOpt; 
  unsigned int activePrimarySunLight; 
  unsigned int sunShadowOptCount; 
  unsigned int *surfaceCastsSunShadow; 
  void (__fastcall *v10)(GfxGetSunShadowBspSurfListData *, unsigned int, unsigned int, GfxBspSurfListOut *); 
  void (__fastcall *v11)(GfxGetSunShadowBspSurfListData *, unsigned int, unsigned int, GfxBspSurfListOut *); 
  unsigned int v12; 
  GfxSunShadow *p_sunShadow; 
  unsigned int firstCachedSunShadowPartition; 
  GfxSunShadow *v15; 
  __int64 v16; 
  GfxSunShadow *v17; 
  int v18; 
  GfxSunShadow *v19; 
  GfxDrawListType v20; 
  __int32 v21; 
  int v22; 
  __int64 v23; 
  _DWORD *v24; 
  _DWORD *v25; 
  __int64 v26; 
  __int64 v27; 
  GfxBspSurfListOut out; 
  void (__fastcall *v29)(GfxGetSunShadowBspSurfListData *, unsigned int, unsigned int, GfxBspSurfListOut *); 
  GfxGetSunShadowBspSurfListData userData; 
  __int64 v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int iterBegin; 
  int v35; 
  unsigned int i; 

  v31 = -2i64;
  v1 = 0;
  *(_QWORD *)&out.missingTransient = 0i64;
  out.bspSurfList = NULL;
  out.drawlistType = DRAWLIST_BACKEND_COUNT;
  v2 = *(_QWORD *)cmd;
  Profile_Begin(546);
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_bsp.cpp", 1112, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( rgp.world->surfaces.litOpaqueSurfsEnd != rgp.world->surfaces.litDecalSurfsBegin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_bsp.cpp", 1114, ASSERT_TYPE_ASSERT, "(rgp.world->surfaces.litOpaqueSurfsEnd == rgp.world->surfaces.litDecalSurfsBegin)", (const char *)&queryFormat, "rgp.world->surfaces.litOpaqueSurfsEnd == rgp.world->surfaces.litDecalSurfsBegin") )
    __debugbreak();
  if ( rgp.world->surfaces.litDecalSurfsEnd != rgp.world->surfaces.litTransSurfsBegin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_bsp.cpp", 1115, ASSERT_TYPE_ASSERT, "(rgp.world->surfaces.litDecalSurfsEnd == rgp.world->surfaces.litTransSurfsBegin)", (const char *)&queryFormat, "rgp.world->surfaces.litDecalSurfsEnd == rgp.world->surfaces.litTransSurfsBegin") )
    __debugbreak();
  if ( rgp.world->surfaces.litTransSurfsEnd != rgp.world->surfaces.emissiveSurfsBegin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_bsp.cpp", 1116, ASSERT_TYPE_ASSERT, "(rgp.world->surfaces.litTransSurfsEnd == rgp.world->surfaces.emissiveSurfsBegin)", (const char *)&queryFormat, "rgp.world->surfaces.litTransSurfsEnd == rgp.world->surfaces.emissiveSurfsBegin") )
    __debugbreak();
  iterBegin = rgp.world->surfaces.litOpaqueSurfsBegin;
  emissiveSurfsEnd = rgp.world->surfaces.emissiveSurfsEnd;
  v33 = emissiveSurfsEnd;
  if ( iterBegin >= rgp.world->models->surfaceCount + 1 )
  {
    LODWORD(v26) = rgp.world->surfaces.litOpaqueSurfsBegin;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_bsp.cpp", 1119, ASSERT_TYPE_ASSERT, "(unsigned)( beginSurface ) < (unsigned)( rgp.world->models[0].surfaceCount + 1 )", "beginSurface doesn't index rgp.world->models[0].surfaceCount + 1\n\t%i not in [0, %i)", v26, rgp.world->models->surfaceCount + 1) )
      __debugbreak();
  }
  if ( emissiveSurfsEnd >= rgp.world->models->surfaceCount + 1 )
  {
    LODWORD(v27) = rgp.world->models->surfaceCount + 1;
    LODWORD(v26) = emissiveSurfsEnd;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_bsp.cpp", 1120, ASSERT_TYPE_ASSERT, "(unsigned)( endSurface ) < (unsigned)( rgp.world->models[0].surfaceCount + 1 )", "endSurface doesn't index rgp.world->models[0].surfaceCount + 1\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_bsp.cpp", 1122, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  hasApproxSunDirChanged = frontEndDataOut->hasApproxSunDirChanged;
  v35 = hasApproxSunDirChanged;
  enabled = sm_fastSunShadow->current.enabled;
  if ( r_useShadowGeomOpt->current.enabled && (surfaceCastsSunShadowOpt = g_worldDpvs->surfaceCastsSunShadowOpt) != NULL && (activePrimarySunLight = frontEndDataOut->activePrimarySunLight, activePrimarySunLight <= rgp.world->lastSunPrimaryLightIndex) )
  {
    sunShadowOptCount = g_worldDpvs->sunShadowOptCount;
    if ( sunShadowOptCount > activePrimarySunLight )
      sunShadowOptCount = frontEndDataOut->activePrimarySunLight;
    surfaceCastsSunShadow = &surfaceCastsSunShadowOpt[(sunShadowOptCount - 1) * g_worldDpvs->sunSurfVisDataCount];
  }
  else
  {
    surfaceCastsSunShadow = g_worldDpvs->surfaceCastsSunShadow;
  }
  userData.surfaceCastsSunShadow = surfaceCastsSunShadow;
  v29 = R_AddBspSurfaces_GfxGetSunShadowBspSurfListInterface_FastShadow_NonAnimatedVerts_GfxGetSunShadowBspSurfListData___0_0_;
  if ( *(_DWORD *)(v2 + 15424) )
  {
    if ( hasApproxSunDirChanged || (v10 = R_AddBspSurfaces_GfxGetSunShadowBspSurfListInterface_FastShadow_GfxGetSunShadowBspSurfListData___0_0_, !enabled) )
      v10 = R_AddBspSurfaces_GfxGetSunShadowBspSurfListInterface_SlowShadow_GfxGetSunShadowBspSurfListData___0_0_;
  }
  else if ( hasApproxSunDirChanged || !enabled )
  {
    v10 = R_AddBspSurfaces_GfxGetSunShadowBspSurfListInterface_SlowShadow_NonAnimatedVerts_GfxGetSunShadowBspSurfListData___0_0_;
  }
  else
  {
    v10 = R_AddBspSurfaces_GfxGetSunShadowBspSurfListInterface_FastShadow_NonAnimatedVerts_GfxGetSunShadowBspSurfListData___0_0_;
  }
  if ( *(_DWORD *)(v2 + 15416) )
  {
    if ( hasApproxSunDirChanged || !enabled )
      v11 = R_AddBspSurfaces_GfxGetSunShadowBspSurfListInterface_SlowShadow_AnimatedVerts_GfxGetSunShadowBspSurfListData___0_0_;
    else
      v11 = R_AddBspSurfaces_GfxGetSunShadowBspSurfListInterface_FastShadow_AnimatedVerts_GfxGetSunShadowBspSurfListData___0_0_;
  }
  else
  {
    v11 = v10;
  }
  v12 = emissiveSurfsEnd;
  do
  {
    userData.sceneViewType = v1 + 1;
    userData.surfaceVisData = g_worldDpvs->surfaceVisData[v1 + 1];
    out.bspSurfList = (GfxBspSurfList *)(152i64 * (int)v1 + v2 + 19400);
    out.drawlistType = v1 + 24;
    p_sunShadow = &frontEndDataOut->sunShadow;
    if ( frontEndDataOut->sunShadow.firstCachedSunShadowPartition > v1 || v1 > frontEndDataOut->sunShadow.lastCachedSunShadowPartition )
      goto LABEL_55;
    if ( frontEndDataOut == (GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 383, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
      __debugbreak();
    if ( !R_IsCachedSunShadowPartition(p_sunShadow, v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
      __debugbreak();
    if ( p_sunShadow->partitionCache[v1 - p_sunShadow->firstCachedSunShadowPartition].gfxCachedSunShadowOverlapCount )
    {
      if ( *(_DWORD *)(v2 + 15424) )
        v11(&userData, iterBegin, v12, &out);
    }
    else
    {
LABEL_55:
      v10(&userData, iterBegin, v12, &out);
    }
    ++v1;
  }
  while ( v1 < 3 );
  if ( *(_DWORD *)(v2 + 15416) )
  {
    if ( v35 || !enabled )
      v29 = R_AddBspSurfaces_GfxGetSunShadowBspSurfListInterface_SlowShadow_NonAnimatedVerts_GfxGetSunShadowBspSurfListData___0_0_;
    firstCachedSunShadowPartition = frontEndDataOut->sunShadow.firstCachedSunShadowPartition;
    v32 = firstCachedSunShadowPartition;
    for ( i = frontEndDataOut->sunShadow.lastCachedSunShadowPartition; firstCachedSunShadowPartition <= i; v32 = firstCachedSunShadowPartition )
    {
      v15 = &frontEndDataOut->sunShadow;
      if ( frontEndDataOut == (GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 383, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
        __debugbreak();
      if ( !R_IsCachedSunShadowPartition(v15, firstCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
        __debugbreak();
      v16 = (__int64)&v15->partitionCache[firstCachedSunShadowPartition - v15->firstCachedSunShadowPartition];
      v17 = &frontEndDataOut->sunShadow;
      if ( frontEndDataOut == (GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 368, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
        __debugbreak();
      if ( !R_IsCachedSunShadowPartition(v17, firstCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 369, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
        __debugbreak();
      v18 = 10 * (firstCachedSunShadowPartition - v17->firstCachedSunShadowPartition) + 12;
      v19 = &frontEndDataOut->sunShadow;
      if ( frontEndDataOut == (GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 376, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
        __debugbreak();
      if ( !R_IsCachedSunShadowPartition(v19, firstCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 377, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
        __debugbreak();
      v20 = 10 * (firstCachedSunShadowPartition - v19->firstCachedSunShadowPartition) + 45;
      if ( *(_DWORD *)(v16 + 4) )
      {
        v21 = v18 - v20;
        v22 = -v20;
        do
        {
          v23 = v16 + 864i64 * (unsigned int)(v22 + v20);
          if ( *(_BYTE *)(v23 + 44) )
          {
            if ( *(_BYTE *)(v23 + 45) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_bsp.cpp", 1235, ASSERT_TYPE_ASSERT, "(!partitionCache->gfxCachedSunShadowOverlap[cellIndex].skipUpdate)", (const char *)&queryFormat, "!partitionCache->gfxCachedSunShadowOverlap[cellIndex].skipUpdate") )
              __debugbreak();
            userData.sceneViewType = v21 + v20;
            userData.surfaceVisData = (&rgp.world->dpvs.surfaceVisData[v21])[v20];
            out.bspSurfList = (GfxBspSurfList *)(152i64 * (int)v20 + v2 + 15752);
            out.drawlistType = v20;
            v29(&userData, iterBegin, v33, &out);
            v24 = *(_DWORD **)(v23 + 16);
            v24[141] = frontEndDataOut->frameCount;
            v24[143] = out.bspSurfList->count;
            v24[145] = out.missingTransient;
            v25 = *(_DWORD **)(v23 + 24);
            if ( v25 )
            {
              v25[141] = frontEndDataOut->frameCount;
              v25[143] = out.bspSurfList->count;
              v25[145] = out.missingTransient;
            }
          }
          ++v20;
        }
        while ( (unsigned int)(v22 + v20) < *(_DWORD *)(v16 + 4) );
        firstCachedSunShadowPartition = v32;
      }
      ++firstCachedSunShadowPartition;
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_BeginBspSurfList
==============
*/
bool R_BeginBspSurfList(GfxBspSurfListBuild *bspSurfList, GfxBspSurfListOut *outSurfList, unsigned int *startIndex)
{
  unsigned int dataLimit; 
  volatile int *p_bspSurfDataUsed; 
  unsigned int v8; 
  __int64 v9; 
  bool result; 
  unsigned int v11; 
  signed int v12; 
  unsigned __int64 *v13; 
  char *fmt; 

  dataLimit = outSurfList->dataLimit;
  p_bspSurfDataUsed = &frontEndDataOut->bspSurfDataUsed;
  if ( (((_BYTE)frontEndDataOut - 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_bspSurfDataUsed) )
    __debugbreak();
  v8 = _InterlockedExchangeAdd(p_bspSurfDataUsed, dataLimit);
  *startIndex = v8;
  v9 = v8 + outSurfList->dataLimit;
  if ( (unsigned int)v9 > 0x10000 )
  {
    LODWORD(fmt) = 0x10000;
    Com_Printf(8, "ERROR: R_AddBspSurfaces: range %d-%d exceeds R_BSPSURF_DATA_LIMIT_TOTAL = %d. Not all BSP surfaces will be rendered.\n", v8, v9, fmt);
    v8 = *startIndex;
    if ( *startIndex >= 0x10000 )
      return 0;
  }
  v11 = 0x10000 - v8;
  if ( 0x10000 - v8 > outSurfList->dataLimit )
    v11 = outSurfList->dataLimit;
  v12 = v11 - 1;
  outSurfList->dataLimit = v12;
  v13 = &frontEndDataOut->bspSurfData[*startIndex];
  bspSurfList->start = v13;
  bspSurfList->pos = v13;
  result = 1;
  bspSurfList->end = &v13[v12];
  return result;
}

/*
==============
R_CopyNoTessBspSurfs
==============
*/
void R_CopyNoTessBspSurfs(unsigned __int64 *noTessSurfListStart, GfxBspSurfListBuild *bspSurfListBuild)
{
  unsigned __int64 *pos; 
  unsigned __int64 *v5; 
  unsigned __int64 *v6; 
  unsigned __int64 v7; 
  unsigned __int64 *v8; 
  __int64 v9; 

  pos = bspSurfListBuild->pos;
  v5 = noTessSurfListStart;
  if ( noTessSurfListStart != pos )
  {
    v6 = bspSurfListBuild->pos;
    while ( v6 < bspSurfListBuild->end )
    {
      v7 = *v5;
      if ( ((*v5 >> 54) & 0xF) != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_bsp.cpp", 203, ASSERT_TYPE_ASSERT, "(noTessHeader.fields.tessellation == TESSELLATION_TESS_BUCKET)", (const char *)&queryFormat, "noTessHeader.fields.tessellation == TESSELLATION_TESS_BUCKET") )
        __debugbreak();
      v8 = bspSurfListBuild->pos;
      v9 = 0xD00000000000000i64;
      if ( v5 != noTessSurfListStart )
        v9 = 0x100000000000000i64;
      ++v5;
      *v8 = v7 & 0xFD3FFFFFFFFFFFFFui64 | v9;
      v6 = v8 + 1;
      bspSurfListBuild->pos = v6;
      if ( v5 == pos )
        return;
    }
    R_WarnOncePerFrame(R_WARN_BSPSURF_DATA_LIMIT, 0x100000000000000i64, 0xFD3FFFFFFFFFFFFFui64);
  }
}

/*
==============
R_GetSortedBspSurfListIndirect
==============
*/
void R_GetSortedBspSurfListIndirect(GfxSurface **surfArray, unsigned int surfArraySize, GfxBspSurfListOut *out)
{
  __int64 v3; 
  GfxGetSortedBspSurfListData v7; 
  std::less<void> v8; 

  v3 = surfArraySize;
  Sys_ProfBeginNamedEvent(0xFF708090, "bsp surf list indirect");
  v7.surfArray = surfArray;
  std::_Sort_unchecked<GfxSurface * *,std::less<void>>(surfArray, &surfArray[v3], (unsigned int)v3, v8);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+20h]
    vmovdqa xmmword ptr [rsp+38h+var_18.baseclass_0.iter], xmm0
  }
  R_AddBspSurfaces_GfxGetSortedBspSurfListInterface_GfxGetSortedBspSurfListData_0_0_(&v7, 0, v3, out);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_ShouldDrawTransientZoneSurface
==============
*/
char R_ShouldDrawTransientZoneSurface(const unsigned int surfIndex, unsigned int *missingTransient)
{
  GfxBackEndData *v2; 
  __int64 v4; 
  GfxSurface *surfaces; 
  unsigned __int64 transientZone; 
  GfxSurface *v7; 
  unsigned int v8; 
  unsigned __int64 v9; 
  char v10; 
  GfxBackEndData *v11; 
  unsigned int v12; 
  __int64 v14; 
  __int64 v15; 
  int v16; 

  v2 = frontEndDataOut;
  v4 = surfIndex;
  surfaces = rgp.world->surfaces.surfaces;
  transientZone = surfaces[v4].transientZone;
  v7 = &surfaces[v4];
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( (unsigned int)transientZone >= 0x600 )
  {
    v16 = 1536;
    LODWORD(v14) = transientZone;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v14, v16) )
      __debugbreak();
  }
  v8 = v7->transientZone;
  v9 = transientZone >> 5;
  v10 = transientZone;
  v11 = frontEndDataOut;
  v12 = v2->transientVisibility.array[v9] & (0x80000000 >> (v10 & 0x1F));
  if ( v8 >= frontEndDataOut->transientDrawContext.zoneCount )
  {
    LODWORD(v15) = frontEndDataOut->transientDrawContext.zoneCount;
    LODWORD(v14) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 42, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( v12 && v11->transientDrawContext.drawVertsPtr[(unsigned __int16)v8] )
    return 1;
  if ( missingTransient )
    ++*missingTransient;
  return 0;
}

/*
==============
R_SurfaceHasTessellationCutoff
==============
*/
__int64 R_SurfaceHasTessellationCutoff(GfxSceneViewType sceneViewType, unsigned int surfIndex)
{
  __int64 v2; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 

  v2 = surfIndex;
  if ( !rg.tessellation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_bsp.cpp", 267, ASSERT_TYPE_ASSERT, "(rg.tessellation != R_TESSELLATION_OFF)", (const char *)&queryFormat, "rg.tessellation != R_TESSELLATION_OFF") )
    __debugbreak();
  if ( rg.enableNoTessBuckets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_bsp.cpp", 271, ASSERT_TYPE_ASSERT, "(!rg.enableNoTessBuckets)", (const char *)&queryFormat, "!rg.enableNoTessBuckets") )
    __debugbreak();
  if ( sceneViewType || rg.tessellation != 1 )
    return 0i64;
  _RDX = 3 * v2;
  __asm { vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg; r_globals_t rg }
  _RCX = rgp.world->surfaces.surfaceBounds;
  HIDWORD(v31) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp+30h]
    vmovss  xmm5, xmm5, xmm0
    vmovss  xmm0, dword ptr [rcx+rdx*8]
    vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+4, 10h; r_globals_t rg
    vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+8, 20h ; ' '; r_globals_t rg
    vmovups xmmword ptr [rsp+30h], xmm5
  }
  HIDWORD(v32) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp+30h]
    vmovss  xmm4, xmm4, xmm0
    vmovss  xmm0, dword ptr [rcx+rdx*8+0Ch]
    vinsertps xmm4, xmm4, dword ptr [rcx+rdx*8+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+rdx*8+8], 20h ; ' '
    vmovups xmmword ptr [rsp+30h], xmm4
    vsubps  xmm1, xmm5, xmm4
  }
  HIDWORD(v33) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+30h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+rdx*8+10h], 10h
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vinsertps xmm3, xmm3, dword ptr [rcx+rdx*8+14h], 20h ; ' '
    vandnps xmm2, xmm0, xmm1
    vsubps  xmm3, xmm2, xmm3
    vxorps  xmm0, xmm0, xmm0
    vmaxps  xmm1, xmm3, xmm0
    vmulps  xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vcomiss xmm1, cs:?rg@@3Ur_globals_t@@A.tessellationCutoffDistanceSq; r_globals_t rg
  }
  return 1i64;
}

