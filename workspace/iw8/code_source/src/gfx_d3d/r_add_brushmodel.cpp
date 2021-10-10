/*
==============
R_AddBModelSurfacesCamera
==============
*/

int __fastcall R_AddBModelSurfacesCamera(const GfxViewInfo *viewInfo, const BModelDrawInfo *bmodelInfo, const GfxBrushModel *bmodel, GfxDrawSurf **drawSurfs, GfxDrawSurf **lastDrawSurfs, unsigned int renderFlags)
{
  return ?R_AddBModelSurfacesCamera@@YAHPEIBUGfxViewInfo@@PEIBUBModelDrawInfo@@PEIBUGfxBrushModel@@QEAPEIATGfxDrawSurf@@3I@Z(viewInfo, bmodelInfo, bmodel, drawSurfs, lastDrawSurfs, renderFlags);
}

/*
==============
R_AddBModelSurfaces
==============
*/

GfxDrawSurf *__fastcall R_AddBModelSurfaces(const BModelDrawInfo *bmodelInfo, const GfxBrushModel *bmodel, GfxSceneViewType sceneViewType, MaterialTechniqueType techType, GfxDrawSurf *drawSurf, GfxDrawSurf *lastDrawSurf)
{
  return ?R_AddBModelSurfaces@@YAPEATGfxDrawSurf@@PEIBUBModelDrawInfo@@PEIBUGfxBrushModel@@W4GfxSceneViewType@@W4MaterialTechniqueType@@PEIAT1@4@Z(bmodelInfo, bmodel, sceneViewType, techType, drawSurf, lastDrawSurf);
}

/*
==============
R_AddBModelSurfaces
==============
*/
GfxDrawSurf *R_AddBModelSurfaces(const BModelDrawInfo *bmodelInfo, const GfxBrushModel *bmodel, GfxSceneViewType sceneViewType, MaterialTechniqueType techType, GfxDrawSurf *drawSurf, GfxDrawSurf *lastDrawSurf)
{
  GfxSceneViewType v6; 
  const GfxBrushModel *v7; 
  unsigned int surfId; 
  unsigned __int8 *v11; 
  unsigned int v12; 
  __int64 v13; 
  GfxBackEndData *v14; 
  unsigned int v15; 
  const char **v16; 
  __int64 v17; 
  XAssetHeader v18; 
  const char *v19; 
  __int64 v20; 
  const MaterialTechniqueSet *v21; 
  __int128 v22; 
  unsigned __int64 v23; 
  unsigned __int64 v24; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v28; 
  __int64 v29; 
  unsigned int v31; 
  int offset; 
  GfxDrawSurf v33; 
  MaterialTechniqueType techTypea; 
  int v35; 
  unsigned int v36; 
  unsigned int surfaceCount; 
  const GfxBrushModel *v38; 
  __int64 v39; 
  GfxDrawSurf v40; 
  Bounds accumulatedSurfBounds; 

  v39 = -2i64;
  techTypea = techType;
  v6 = sceneViewType;
  v7 = bmodel;
  v38 = bmodel;
  Profile_Begin(96);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_brushmodel.cpp", 234, ASSERT_TYPE_ASSERT, "(bmodel)", (const char *)&queryFormat, "bmodel") )
    __debugbreak();
  surfId = bmodelInfo->surfId;
  v11 = &frontEndDataOut->surfsBuffer[4 * bmodelInfo->surfId];
  v35 = R_TestBModelSurfaceTessellationCutoff(v7);
  surfaceCount = v7->surfaceCount;
  v36 = v6 - 1;
  *(_OWORD *)accumulatedSurfBounds.midPoint.v = _xmm_ff7fffff000000000000000000000000;
  accumulatedSurfBounds.halfSize.v[1] = FLOAT_N3_4028235e38;
  accumulatedSurfBounds.halfSize.v[2] = FLOAT_N3_4028235e38;
  v12 = 0;
  v31 = 0;
  if ( !surfaceCount )
    goto LABEL_50;
  while ( drawSurf < lastDrawSurf )
  {
    v13 = *((_QWORD *)v11 + 1);
    v14 = frontEndDataOut;
    v15 = *(unsigned __int16 *)(v13 + 28);
    if ( v15 >= frontEndDataOut->transientDrawContext.zoneCount )
    {
      LODWORD(v29) = frontEndDataOut->transientDrawContext.zoneCount;
      LODWORD(v28) = *(unsigned __int16 *)(v13 + 28);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 42, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    if ( !v14->transientDrawContext.drawVertsPtr[(unsigned __int16)v15] )
      goto LABEL_46;
    v16 = *(const char ***)(v13 + 16);
    v17 = *((unsigned __int16 *)v16 + 24);
    if ( (unsigned int)v17 >= rgp.materialCount )
    {
      LODWORD(v29) = rgp.materialCount;
      LODWORD(v28) = *((unsigned __int16 *)v16 + 24);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v17]) != (Material *)v16 )
    {
      v18.physicsLibrary = DB_GetXAssetMasterDefaultHeader(ASSET_TYPE_MATERIAL).physicsLibrary;
      v19 = v16[6];
      if ( (unsigned __int16)v19 == (unsigned __int16)v18.physicsLibrary[2].name )
      {
        R_WarnOncePerFrame(R_WARN_UNSORTED_MATERIAL_INDEX, *v16);
        goto LABEL_46;
      }
      v20 = (unsigned __int16)v19;
      if ( (unsigned __int16)v19 >= rgp.materialCount )
      {
        LODWORD(v29) = rgp.materialCount;
        LODWORD(v28) = (unsigned __int16)v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v28, v29) )
          __debugbreak();
      }
      if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v20]) != (Material *)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_brushmodel.cpp", 280, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( material->drawSurf.fields.materialSortedIndex ) == material)", (const char *)&queryFormat, "R_GetSortedMaterial( material->drawSurf.fields.materialSortedIndex ) == material") )
        __debugbreak();
    }
    v21 = (const MaterialTechniqueSet *)v16[8];
    if ( !v21 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 465, ASSERT_TYPE_ASSERT, "( ( material->techniqueSet ) )", "( material->name ) = %s", *v16) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 515, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
        __debugbreak();
    }
    if ( !Material_TechSetHasTechnique(v21, techTypea) )
      goto LABEL_46;
    if ( surfId >= 0x1000000 )
    {
      LODWORD(v29) = 0x1000000;
      LODWORD(v28) = surfId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_brushmodel.cpp", 290, ASSERT_TYPE_ASSERT, "(unsigned)( surfId ) < (unsigned)( 1 << 24 )", "surfId doesn't index 1 << MTL_SORT_OBJECT_ID_BITS\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    v22 = *(_OWORD *)(v16 + 5);
    v33.packed.p1 = (unsigned __int64)v16[6];
    v33.packed.p0 = (v22 ^ ((unsigned __int64)surfId << 26)) & 0x3FFFFFC000000i64 ^ v22;
    v24 = v33.packed.p1 & 0xFFFFFFFFF87FFFFFui64 | 0x2800000;
    v33.packed.p1 = v24;
    if ( (v24 & 0x70000) == 196608 )
    {
      if ( v35 )
      {
        v24 = v24 & 0xFFFFFFFFFFF8FFFFui64 | 0x20000;
LABEL_36:
        v33.packed.p1 = v24;
        goto LABEL_37;
      }
      if ( !rg.enableNoTessBuckets )
      {
        v24 = v24 & 0xFFFFFFFFFFF8FFFFui64 | 0x10000;
        goto LABEL_36;
      }
    }
LABEL_37:
    if ( (((v24 & 0x70000) - 0x10000) & 0xFFFFFFFFFFFDFFFFui64) == 0 )
    {
      v25 = truncate_cast<unsigned int,__int64>((signed __int64)(v13 - (unsigned __int64)rgp.world->surfaces.surfaces) / 40);
      v26 = (v24 >> 16) & 7;
      if ( !R_AllocBspSurfIndirectArgs(&offset) )
        goto LABEL_49;
      v40.fields = v33.fields;
      if ( !R_AddBspSurfTessFactorsComputeCmd(frontEndDataOut, sceneViewType, *(const GfxPlacement **)v11, &v40, v25, 1u, offset, v26 == 3) )
        goto LABEL_49;
      v23 = (v22 ^ ((unsigned __int64)surfId << 26)) & 0x3FFFFFC000000i64 ^ v22;
      v33.packed.p0 = ((unsigned __int16)v23 ^ (unsigned __int16)offset) & 0x3FF ^ v23;
      if ( v26 == 3 )
      {
        drawSurf->fields = v33.fields;
        if ( ++drawSurf >= lastDrawSurf )
          break;
        v33.packed.p1 = v24 & 0xFFFFFFFFFFF8FFFFui64 | 0x40000;
      }
      v7 = v38;
      v12 = v31;
    }
    drawSurf->fields = v33.fields;
    ++drawSurf;
    if ( v36 <= 2 )
      R_AccumulateSurfBounds(&v7->bounds, &accumulatedSurfBounds);
LABEL_46:
    v31 = ++v12;
    v11 += 24;
    surfId += 6;
    if ( v12 >= surfaceCount )
      goto LABEL_49;
  }
  R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddBModelSurfaces");
LABEL_49:
  v6 = sceneViewType;
LABEL_50:
  if ( (unsigned int)(v6 - 1) <= 2 )
    R_UpdateViewSurfaceBounds(&accumulatedSurfBounds, v6);
  Profile_EndInternal(NULL);
  return drawSurf;
}

/*
==============
R_AddBModelSurfacesCamera
==============
*/
__int64 R_AddBModelSurfacesCamera(const GfxViewInfo *viewInfo, const BModelDrawInfo *bmodelInfo, const GfxBrushModel *bmodel, GfxDrawSurf **drawSurfs, GfxDrawSurf **lastDrawSurfs)
{
  GfxDrawSurf **v5; 
  unsigned int v8; 
  unsigned int surfId; 
  const GfxPlacement **v10; 
  unsigned int v11; 
  unsigned int v12; 
  const GfxPlacement *v13; 
  GfxBackEndData *v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  XAssetHeader v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned __int64 v24; 
  unsigned __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned int v28; 
  __int64 v30; 
  __int64 v31; 
  unsigned int surfaceCount; 
  int v33; 
  const GfxPlacement **v34; 
  unsigned int v35; 
  int offset; 
  GfxViewMaterialRenderFeatures renderFeatures; 
  GfxDrawSurf v38; 
  int v39; 
  __int64 v40; 
  GfxDrawSurf v41[5]; 
  unsigned int v42; 

  v40 = -2i64;
  v5 = drawSurfs;
  Profile_Begin(96);
  if ( !bmodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_brushmodel.cpp", 65, ASSERT_TYPE_ASSERT, "(bmodel)", (const char *)&queryFormat, "bmodel") )
    __debugbreak();
  v8 = 0;
  v33 = 0;
  surfId = bmodelInfo->surfId;
  v35 = bmodelInfo->surfId;
  v34 = (const GfxPlacement **)&frontEndDataOut->surfsBuffer[4 * bmodelInfo->surfId];
  surfaceCount = bmodel->surfaceCount;
  v39 = R_TestBModelSurfaceTessellationCutoff(bmodel);
  renderFeatures = GFX_VIEW_MTL_FEAT_NONE;
  v12 = 0;
  v42 = 0;
  if ( !v11 )
    goto LABEL_54;
  while ( 1 )
  {
    v13 = v10[1];
    v14 = frontEndDataOut;
    v15 = LOWORD(v13[1].quat.v[0]);
    if ( v15 >= frontEndDataOut->transientDrawContext.zoneCount )
    {
      LODWORD(v31) = frontEndDataOut->transientDrawContext.zoneCount;
      LODWORD(v30) = LOWORD(v13[1].quat.v[0]);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 42, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
      v11 = surfaceCount;
      v12 = v42;
      v10 = v34;
    }
    if ( !v14->transientDrawContext.drawVertsPtr[(unsigned __int16)v15] )
      goto LABEL_49;
    v16 = *(_QWORD *)v13->origin.v;
    v17 = *(unsigned __int16 *)(v16 + 48);
    if ( (unsigned int)v17 >= rgp.materialCount )
    {
      LODWORD(v31) = rgp.materialCount;
      LODWORD(v30) = *(unsigned __int16 *)(v16 + 48);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v17]) != (Material *)v16 )
    {
      v18.physicsLibrary = DB_GetXAssetMasterDefaultHeader(ASSET_TYPE_MATERIAL).physicsLibrary;
      v19 = *(_QWORD *)(v16 + 48);
      if ( (unsigned __int16)v19 == (unsigned __int16)v18.physicsLibrary[2].name )
      {
        R_WarnOncePerFrame(R_WARN_UNSORTED_MATERIAL_INDEX, *(_QWORD *)v16);
        goto LABEL_48;
      }
      v20 = (unsigned __int16)v19;
      if ( (unsigned __int16)v19 >= rgp.materialCount )
      {
        LODWORD(v31) = rgp.materialCount;
        LODWORD(v30) = (unsigned __int16)v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v30, v31) )
          __debugbreak();
      }
      if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v20]) != (Material *)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_brushmodel.cpp", 111, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( material->drawSurf.fields.materialSortedIndex ) == material)", (const char *)&queryFormat, "R_GetSortedMaterial( material->drawSurf.fields.materialSortedIndex ) == material") )
        __debugbreak();
    }
    if ( *(char *)(v16 + 12) < 0 )
      goto LABEL_48;
    v21 = *(unsigned __int8 *)(v16 + 24);
    if ( v5[v21] >= lastDrawSurfs[v21] )
      break;
    if ( surfId >= 0x1000000 )
    {
      LODWORD(v31) = 0x1000000;
      LODWORD(v30) = surfId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_brushmodel.cpp", 129, ASSERT_TYPE_ASSERT, "(unsigned)( surfId ) < (unsigned)( 1 << 24 )", "surfId doesn't index 1 << MTL_SORT_OBJECT_ID_BITS\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    _XMM0 = *(_OWORD *)(v16 + 40);
    v38.packed.p0 = *(_QWORD *)(v16 + 40);
    __asm { vpextrq rbx, xmm0, 1 }
    v24 = _RBX & 0xFFFFFFFFF87FFFFFui64 | 0x2800000;
    v38.packed.p1 = v24;
    v25 = v38.packed.p0 & 0xE004000003FFFFFFui64 | ((surfId & 0xFFFFFF | ((unsigned __int64)(HIWORD(v13[1].quat.x) & 0x1FF) << 25)) << 26);
    v38.packed.p0 = v25;
    if ( rg.distortion )
      goto LABEL_32;
    v26 = *(_QWORD *)(v16 + 64);
    if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 655, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
      __debugbreak();
    if ( (*(_QWORD *)(v26 + 8) & 0x800000000i64) == 0 )
    {
LABEL_32:
      if ( (v24 & 0x70000) == 196608 )
      {
        if ( v39 )
        {
          v24 = v24 & 0xFFFFFFFFFFF8FFFFui64 | 0x20000;
          goto LABEL_37;
        }
        if ( !rg.enableNoTessBuckets )
        {
          v24 = v24 & 0xFFFFFFFFFFF8FFFFui64 | 0x10000;
LABEL_37:
          v38.packed.p1 = v24;
        }
      }
      v27 = (v24 >> 16) & 7;
      if ( ((v27 - 1) & 0xFFFFFFFFFFFFFFFDui64) != 0 )
      {
        v5 = drawSurfs;
      }
      else
      {
        v28 = truncate_cast<unsigned int,__int64>(((char *)v13 - (char *)rgp.world->surfaces.surfaces) / 40);
        if ( !R_AllocBspSurfIndirectArgs(&offset) )
          goto LABEL_53;
        v41[0] = (GfxDrawSurf)v38.fields;
        if ( !R_AddBspSurfTessFactorsComputeCmd(frontEndDataOut, SCENE_VIEW_CAMERA, *v34, v41, v28, 1u, offset, v27 == 3) )
          goto LABEL_53;
        v38.packed.p0 = ((unsigned __int16)v25 ^ (unsigned __int16)offset) & 0x3FF ^ v25;
        v5 = drawSurfs;
        if ( v27 == 3 )
        {
          drawSurfs[v21]->fields = v38.fields;
          ++drawSurfs[v21];
          v8 = 1;
          if ( drawSurfs[v21] >= lastDrawSurfs[v21] )
          {
            R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddBModelSurfacesCamera", (unsigned int)v21);
            goto LABEL_54;
          }
          v38.packed.p1 = v24 & 0xFFFFFFFFFFF8FFFFui64 | 0x40000;
        }
        surfId = v35;
      }
      R_AccumulateMaterialRenderTechflags((const Material *)v16, &renderFeatures, &bmodel->bounds.midPoint);
      v5[v21]->fields = v38.fields;
      ++v5[v21];
      v33 = 1;
      goto LABEL_48;
    }
    v5 = drawSurfs;
LABEL_48:
    v11 = surfaceCount;
    v12 = v42;
    v10 = v34;
LABEL_49:
    v42 = ++v12;
    v10 += 3;
    v34 = v10;
    surfId += 6;
    v35 = surfId;
    if ( v12 >= v11 )
      goto LABEL_53;
  }
  R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddBModelSurfacesCamera", *(unsigned __int8 *)(v16 + 24));
LABEL_53:
  v8 = v33;
LABEL_54:
  R_UpdateViewMaterialRenderTechflags(&renderFeatures);
  Profile_EndInternal(NULL);
  return v8;
}

/*
==============
R_TestBModelSurfaceTessellationCutoff
==============
*/
_BOOL8 R_TestBModelSurfaceTessellationCutoff(const GfxBrushModel *bmodel)
{
  __int128 v2; 
  __m128 v6; 
  __m128 v10; 
  __int128 v21; 
  __m128 v22; 
  __m128 v23; 

  if ( rg.enableNoTessBuckets )
    return 1i64;
  if ( !rg.tessellation )
    return 1i64;
  if ( rg.tessellation == 2 )
    return 0i64;
  HIDWORD(v21) = 0;
  v2 = v21;
  *(float *)&v2 = rg.viewOrg.v[0];
  _XMM5 = v2;
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+4, 10h; r_globals_t rg
    vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+8, 20h ; ' '; r_globals_t rg
  }
  v22 = _XMM5;
  v22.m128_i32[3] = 0;
  v6 = v22;
  v6.m128_f32[0] = bmodel->writable.bounds.midPoint.v[0];
  _XMM4 = v6;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rcx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+8], 20h ; ' '
  }
  v23 = _XMM4;
  _mm128_sub_ps(_XMM5, _XMM4);
  v23.m128_i32[3] = 0;
  v10 = v23;
  v10.m128_f32[0] = bmodel->writable.bounds.halfSize.v[0];
  _XMM3 = v10;
  __asm { vinsertps xmm3, xmm3, dword ptr [rcx+10h], 10h }
  _XMM0 = g_negativeZero.v;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+14h], 20h ; ' '
    vandnps xmm2, xmm0, xmm1
  }
  _XMM3 = _mm128_sub_ps(_XMM2, _XMM3);
  __asm { vmaxps  xmm1, xmm3, xmm0 }
  _XMM2 = _mm128_mul_ps(_XMM1, _XMM1);
  __asm
  {
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
  }
  return *(float *)&_XMM1 >= rg.tessellationCutoffDistanceSq;
}

