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
  unsigned int v14; 
  __int64 v15; 
  GfxBackEndData *v16; 
  unsigned int v17; 
  __int64 p1_low; 
  XAssetHeader v20; 
  unsigned __int64 p1; 
  __int64 v22; 
  const MaterialTechniqueSet *techniqueSet; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  unsigned int v29; 
  __int64 v30; 
  __int64 v35; 
  __int64 v36; 
  unsigned int v38; 
  int offset; 
  __int128 v40; 
  MaterialTechniqueType techTypea; 
  int v42; 
  unsigned int v43; 
  unsigned int surfaceCount; 
  const GfxBrushModel *v45; 
  __int64 v46; 
  GfxDrawSurf v47; 
  Bounds accumulatedSurfBounds; 

  v46 = -2i64;
  techTypea = techType;
  v6 = sceneViewType;
  v7 = bmodel;
  v45 = bmodel;
  _R15 = drawSurf;
  Profile_Begin(96);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_brushmodel.cpp", 234, ASSERT_TYPE_ASSERT, "(bmodel)", (const char *)&queryFormat, "bmodel") )
    __debugbreak();
  surfId = bmodelInfo->surfId;
  v11 = &frontEndDataOut->surfsBuffer[4 * bmodelInfo->surfId];
  v42 = R_TestBModelSurfaceTessellationCutoff(v7);
  surfaceCount = v7->surfaceCount;
  v43 = v6 - 1;
  __asm
  {
    vmovups xmm0, cs:__xmm@ff7fffff000000000000000000000000
    vmovups xmmword ptr [rsp+108h+accumulatedSurfBounds.midPoint], xmm0
    vmovss  xmm1, cs:__real@ff7fffff
    vmovss  dword ptr [rsp+108h+accumulatedSurfBounds.halfSize+4], xmm1
    vmovss  dword ptr [rsp+108h+accumulatedSurfBounds.halfSize+8], xmm1
  }
  v14 = 0;
  v38 = 0;
  if ( !surfaceCount )
    goto LABEL_50;
  while ( _R15 < lastDrawSurf )
  {
    v15 = *((_QWORD *)v11 + 1);
    v16 = frontEndDataOut;
    v17 = *(unsigned __int16 *)(v15 + 28);
    if ( v17 >= frontEndDataOut->transientDrawContext.zoneCount )
    {
      LODWORD(v36) = frontEndDataOut->transientDrawContext.zoneCount;
      LODWORD(v35) = *(unsigned __int16 *)(v15 + 28);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 42, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v35, v36) )
        __debugbreak();
    }
    if ( !v16->transientDrawContext.drawVertsPtr[(unsigned __int16)v17] )
      goto LABEL_46;
    _RDI = *(Material **)(v15 + 16);
    p1_low = LOWORD(_RDI->drawSurf.packed.p1);
    if ( (unsigned int)p1_low >= rgp.materialCount )
    {
      LODWORD(v36) = rgp.materialCount;
      LODWORD(v35) = LOWORD(_RDI->drawSurf.packed.p1);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v35, v36) )
        __debugbreak();
    }
    if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]) != _RDI )
    {
      v20.physicsLibrary = DB_GetXAssetMasterDefaultHeader(ASSET_TYPE_MATERIAL).physicsLibrary;
      p1 = _RDI->drawSurf.packed.p1;
      if ( (unsigned __int16)p1 == (unsigned __int16)v20.physicsLibrary[2].name )
      {
        R_WarnOncePerFrame(R_WARN_UNSORTED_MATERIAL_INDEX, _RDI->name);
        goto LABEL_46;
      }
      v22 = (unsigned __int16)p1;
      if ( (unsigned __int16)p1 >= rgp.materialCount )
      {
        LODWORD(v36) = rgp.materialCount;
        LODWORD(v35) = (unsigned __int16)p1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v22]) != _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_brushmodel.cpp", 280, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( material->drawSurf.fields.materialSortedIndex ) == material)", (const char *)&queryFormat, "R_GetSortedMaterial( material->drawSurf.fields.materialSortedIndex ) == material") )
        __debugbreak();
    }
    techniqueSet = _RDI->techniqueSet;
    if ( !techniqueSet )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 465, ASSERT_TYPE_ASSERT, "( ( material->techniqueSet ) )", "( material->name ) = %s", _RDI->name) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 515, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
        __debugbreak();
    }
    if ( !Material_TechSetHasTechnique(techniqueSet, techTypea) )
      goto LABEL_46;
    if ( surfId >= 0x1000000 )
    {
      LODWORD(v36) = 0x1000000;
      LODWORD(v35) = surfId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_brushmodel.cpp", 290, ASSERT_TYPE_ASSERT, "(unsigned)( surfId ) < (unsigned)( 1 << 24 )", "surfId doesn't index 1 << MTL_SORT_OBJECT_ID_BITS\n\t%i not in [0, %i)", v35, v36) )
        __debugbreak();
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+28h]
      vmovups [rsp+108h+var_B8], xmm0
    }
    *((_QWORD *)&v40 + 1) = *((_QWORD *)&_RT0 + 1);
    __asm { vmovq   rdi, xmm0 }
    v27 = (_RDI ^ ((unsigned __int64)surfId << 26)) & 0x3FFFFFC000000i64 ^ _RDI;
    *(_QWORD *)&v40 = v27;
    v28 = *((_QWORD *)&v40 + 1) & 0xFFFFFFFFF87FFFFFui64 | 0x2800000;
    *((_QWORD *)&v40 + 1) = v28;
    if ( (v28 & 0x70000) == 196608 )
    {
      if ( v42 )
      {
        v28 = v28 & 0xFFFFFFFFFFF8FFFFui64 | 0x20000;
LABEL_36:
        *((_QWORD *)&v40 + 1) = v28;
        goto LABEL_37;
      }
      if ( !rg.enableNoTessBuckets )
      {
        v28 = v28 & 0xFFFFFFFFFFF8FFFFui64 | 0x10000;
        goto LABEL_36;
      }
    }
LABEL_37:
    if ( (((v28 & 0x70000) - 0x10000) & 0xFFFFFFFFFFFDFFFFui64) == 0 )
    {
      v29 = truncate_cast<unsigned int,__int64>((signed __int64)(v15 - (unsigned __int64)rgp.world->surfaces.surfaces) / 40);
      v30 = (v28 >> 16) & 7;
      if ( !R_AllocBspSurfIndirectArgs(&offset) )
        goto LABEL_49;
      __asm
      {
        vmovups xmm0, [rsp+108h+var_B8]
        vmovdqa [rsp+108h+var_88], xmm0
      }
      if ( !R_AddBspSurfTessFactorsComputeCmd(frontEndDataOut, sceneViewType, *(const GfxPlacement **)v11, &v47, v29, 1u, offset, v30 == 3) )
        goto LABEL_49;
      *(_QWORD *)&v40 = ((unsigned __int16)v27 ^ (unsigned __int16)offset) & 0x3FF ^ v27;
      if ( v30 == 3 )
      {
        __asm
        {
          vmovups xmm0, [rsp+108h+var_B8]
          vmovups xmmword ptr [r15], xmm0
        }
        if ( ++_R15 >= lastDrawSurf )
          break;
        *((_QWORD *)&v40 + 1) = v28 & 0xFFFFFFFFFFF8FFFFui64 | 0x40000;
      }
      v7 = v45;
      v14 = v38;
    }
    __asm
    {
      vmovups xmm0, [rsp+108h+var_B8]
      vmovups xmmword ptr [r15], xmm0
    }
    ++_R15;
    if ( v43 <= 2 )
      R_AccumulateSurfBounds(&v7->bounds, &accumulatedSurfBounds);
LABEL_46:
    v38 = ++v14;
    v11 += 24;
    surfId += 6;
    if ( v14 >= surfaceCount )
      goto LABEL_49;
  }
  R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddBModelSurfaces");
LABEL_49:
  v6 = sceneViewType;
LABEL_50:
  if ( (unsigned int)(v6 - 1) <= 2 )
    R_UpdateViewSurfaceBounds(&accumulatedSurfBounds, v6);
  Profile_EndInternal(NULL);
  return _R15;
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
  __int64 v17; 
  XAssetHeader v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned __int64 v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned int v29; 
  __int64 v36; 
  __int64 v37; 
  unsigned int surfaceCount; 
  int v39; 
  const GfxPlacement **v40; 
  unsigned int v41; 
  int offset; 
  GfxViewMaterialRenderFeatures renderFeatures; 
  __int128 v44; 
  int v45; 
  __int64 v46; 
  GfxDrawSurf v47[5]; 
  unsigned int v48; 

  v46 = -2i64;
  v5 = drawSurfs;
  Profile_Begin(96);
  if ( !bmodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_brushmodel.cpp", 65, ASSERT_TYPE_ASSERT, "(bmodel)", (const char *)&queryFormat, "bmodel") )
    __debugbreak();
  v8 = 0;
  v39 = 0;
  surfId = bmodelInfo->surfId;
  v41 = bmodelInfo->surfId;
  v40 = (const GfxPlacement **)&frontEndDataOut->surfsBuffer[4 * bmodelInfo->surfId];
  surfaceCount = bmodel->surfaceCount;
  v45 = R_TestBModelSurfaceTessellationCutoff(bmodel);
  renderFeatures = GFX_VIEW_MTL_FEAT_NONE;
  v12 = 0;
  v48 = 0;
  if ( !v11 )
    goto LABEL_54;
  while ( 1 )
  {
    v13 = v10[1];
    v14 = frontEndDataOut;
    v15 = LOWORD(v13[1].quat.v[0]);
    if ( v15 >= frontEndDataOut->transientDrawContext.zoneCount )
    {
      LODWORD(v37) = frontEndDataOut->transientDrawContext.zoneCount;
      LODWORD(v36) = LOWORD(v13[1].quat.v[0]);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 42, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v36, v37) )
        __debugbreak();
      v11 = surfaceCount;
      v12 = v48;
      v10 = v40;
    }
    if ( !v14->transientDrawContext.drawVertsPtr[(unsigned __int16)v15] )
      goto LABEL_49;
    _RSI = *(_QWORD *)v13->origin.v;
    v17 = *(unsigned __int16 *)(_RSI + 48);
    if ( (unsigned int)v17 >= rgp.materialCount )
    {
      LODWORD(v37) = rgp.materialCount;
      LODWORD(v36) = *(unsigned __int16 *)(_RSI + 48);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v36, v37) )
        __debugbreak();
    }
    if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v17]) != (Material *)_RSI )
    {
      v18.physicsLibrary = DB_GetXAssetMasterDefaultHeader(ASSET_TYPE_MATERIAL).physicsLibrary;
      v19 = *(_QWORD *)(_RSI + 48);
      if ( (unsigned __int16)v19 == (unsigned __int16)v18.physicsLibrary[2].name )
      {
        R_WarnOncePerFrame(R_WARN_UNSORTED_MATERIAL_INDEX, *(_QWORD *)_RSI);
        goto LABEL_48;
      }
      v20 = (unsigned __int16)v19;
      if ( (unsigned __int16)v19 >= rgp.materialCount )
      {
        LODWORD(v37) = rgp.materialCount;
        LODWORD(v36) = (unsigned __int16)v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v36, v37) )
          __debugbreak();
      }
      if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v20]) != (Material *)_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_brushmodel.cpp", 111, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( material->drawSurf.fields.materialSortedIndex ) == material)", (const char *)&queryFormat, "R_GetSortedMaterial( material->drawSurf.fields.materialSortedIndex ) == material") )
        __debugbreak();
    }
    if ( *(char *)(_RSI + 12) < 0 )
      goto LABEL_48;
    v21 = *(unsigned __int8 *)(_RSI + 24);
    if ( v5[v21] >= lastDrawSurfs[v21] )
      break;
    if ( surfId >= 0x1000000 )
    {
      LODWORD(v37) = 0x1000000;
      LODWORD(v36) = surfId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_brushmodel.cpp", 129, ASSERT_TYPE_ASSERT, "(unsigned)( surfId ) < (unsigned)( 1 << 24 )", "surfId doesn't index 1 << MTL_SORT_OBJECT_ID_BITS\n\t%i not in [0, %i)", v36, v37) )
        __debugbreak();
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+28h]
      vmovups [rsp+0D8h+var_78], xmm0
    }
    *(_QWORD *)&v44 = _RT0;
    __asm { vpextrq rbx, xmm0, 1 }
    v25 = _RBX & 0xFFFFFFFFF87FFFFFui64 | 0x2800000;
    *((_QWORD *)&v44 + 1) = v25;
    v26 = v44 & 0xE004000003FFFFFFui64 | ((surfId & 0xFFFFFF | ((unsigned __int64)(HIWORD(v13[1].quat.x) & 0x1FF) << 25)) << 26);
    *(_QWORD *)&v44 = v26;
    if ( rg.distortion )
      goto LABEL_32;
    v27 = *(_QWORD *)(_RSI + 64);
    if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 655, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
      __debugbreak();
    if ( (*(_QWORD *)(v27 + 8) & 0x800000000i64) == 0 )
    {
LABEL_32:
      if ( (v25 & 0x70000) == 196608 )
      {
        if ( v45 )
        {
          v25 = v25 & 0xFFFFFFFFFFF8FFFFui64 | 0x20000;
          goto LABEL_37;
        }
        if ( !rg.enableNoTessBuckets )
        {
          v25 = v25 & 0xFFFFFFFFFFF8FFFFui64 | 0x10000;
LABEL_37:
          *((_QWORD *)&v44 + 1) = v25;
        }
      }
      v28 = (v25 >> 16) & 7;
      if ( ((v28 - 1) & 0xFFFFFFFFFFFFFFFDui64) != 0 )
      {
        v5 = drawSurfs;
      }
      else
      {
        v29 = truncate_cast<unsigned int,__int64>(((char *)v13 - (char *)rgp.world->surfaces.surfaces) / 40);
        if ( !R_AllocBspSurfIndirectArgs(&offset) )
          goto LABEL_53;
        __asm
        {
          vmovups xmm0, [rsp+0D8h+var_78]
          vmovdqa xmmword ptr [rsp+0D8h+var_58], xmm0
        }
        if ( !R_AddBspSurfTessFactorsComputeCmd(frontEndDataOut, SCENE_VIEW_CAMERA, *v40, v47, v29, 1u, offset, v28 == 3) )
          goto LABEL_53;
        *(_QWORD *)&v44 = ((unsigned __int16)v26 ^ (unsigned __int16)offset) & 0x3FF ^ v26;
        v5 = drawSurfs;
        if ( v28 == 3 )
        {
          _RAX = drawSurfs[v21];
          __asm
          {
            vmovups xmm0, [rsp+0D8h+var_78]
            vmovups xmmword ptr [rax], xmm0
          }
          ++drawSurfs[v21];
          v8 = 1;
          if ( drawSurfs[v21] >= lastDrawSurfs[v21] )
          {
            R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddBModelSurfacesCamera", (unsigned int)v21);
            goto LABEL_54;
          }
          *((_QWORD *)&v44 + 1) = v25 & 0xFFFFFFFFFFF8FFFFui64 | 0x40000;
        }
        surfId = v41;
      }
      R_AccumulateMaterialRenderTechflags((const Material *)_RSI, &renderFeatures, &bmodel->bounds.midPoint);
      _RAX = v5[v21];
      __asm
      {
        vmovups xmm0, [rsp+0D8h+var_78]
        vmovups xmmword ptr [rax], xmm0
      }
      ++v5[v21];
      v39 = 1;
      goto LABEL_48;
    }
    v5 = drawSurfs;
LABEL_48:
    v11 = surfaceCount;
    v12 = v48;
    v10 = v40;
LABEL_49:
    v48 = ++v12;
    v10 += 3;
    v40 = v10;
    surfId += 6;
    v41 = surfId;
    if ( v12 >= v11 )
      goto LABEL_53;
  }
  R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddBModelSurfacesCamera", *(unsigned __int8 *)(_RSI + 24));
LABEL_53:
  v8 = v39;
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
__int64 R_TestBModelSurfaceTessellationCutoff(const GfxBrushModel *bmodel)
{
  __int128 v26; 
  __int128 v27; 
  __int128 v28; 

  if ( !rg.enableNoTessBuckets && rg.tessellation )
  {
    if ( rg.tessellation == 2 )
      return 0i64;
    __asm { vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg; r_globals_t rg }
    HIDWORD(v26) = 0;
    __asm
    {
      vmovups xmm5, xmmword ptr [rsp]
      vmovss  xmm5, xmm5, xmm0
      vmovss  xmm0, dword ptr [rcx]
      vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+4, 10h; r_globals_t rg
      vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+8, 20h ; ' '; r_globals_t rg
      vmovups xmmword ptr [rsp], xmm5
    }
    HIDWORD(v27) = 0;
    __asm
    {
      vmovups xmm4, xmmword ptr [rsp]
      vmovss  xmm4, xmm4, xmm0
      vmovss  xmm0, dword ptr [rcx+0Ch]
      vinsertps xmm4, xmm4, dword ptr [rcx+4], 10h
      vinsertps xmm4, xmm4, dword ptr [rcx+8], 20h ; ' '
      vmovups xmmword ptr [rsp], xmm4
      vsubps  xmm1, xmm5, xmm4
    }
    HIDWORD(v28) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rcx+10h], 10h
      vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
      vinsertps xmm3, xmm3, dword ptr [rcx+14h], 20h ; ' '
      vandnps xmm2, xmm0, xmm1
      vsubps  xmm3, xmm2, xmm3
      vxorps  xmm0, xmm0, xmm0
      vmaxps  xmm1, xmm3, xmm0
      vmulps  xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
      vcomiss xmm1, cs:?rg@@3Ur_globals_t@@A.tessellationCutoffDistanceSq; r_globals_t rg
    }
  }
  return 1i64;
}

