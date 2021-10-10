/*
==============
R_AddDObjSurfacesCamera
==============
*/

int __fastcall R_AddDObjSurfacesCamera(const GfxViewInfo *viewInfo, const GfxSceneEntity *sceneEnt, const unsigned int sceneEntIndex, const GfxModelLightingProbeInfo *lightingInfo, GfxDrawSurf **drawSurfs, GfxDrawSurf **lastDrawSurfs)
{
  return ?R_AddDObjSurfacesCamera@@YAHPEIBUGfxViewInfo@@PEIBUGfxSceneEntity@@IPEBUGfxModelLightingProbeInfo@@QEAPEIATGfxDrawSurf@@3@Z(viewInfo, sceneEnt, sceneEntIndex, lightingInfo, drawSurfs, lastDrawSurfs);
}

/*
==============
R_AddXModelSurfacesCamera
==============
*/

int __fastcall R_AddXModelSurfacesCamera(const GfxViewInfo *viewInfo, const XModelDrawInfo *modelInfo, const XModel *model, const DObj *obj, const vec3_t *origin, const GfxModelLightingProbeInfo *lightingInfo, int depthHack, GfxDrawSurf **drawSurfs, GfxDrawSurf **lastDrawSurfs, const unsigned __int16 mapEntLookup, XModelThermalMode thermalMode, unsigned int renderFlags, unsigned __int16 baseGfxEntityDataID, const GfxModelDecalVolumeGridInfo *decalVolumeGridInfo)
{
  return ?R_AddXModelSurfacesCamera@@YAHPEIBUGfxViewInfo@@PEIBUXModelDrawInfo@@PEIBUXModel@@PEIBUDObj@@AEBTvec3_t@@PEBUGfxModelLightingProbeInfo@@HQEAPEIATGfxDrawSurf@@6GW4XModelThermalMode@@IGPEBUGfxModelDecalVolumeGridInfo@@@Z(viewInfo, modelInfo, model, obj, origin, lightingInfo, depthHack, drawSurfs, lastDrawSurfs, mapEntLookup, thermalMode, renderFlags, baseGfxEntityDataID, decalVolumeGridInfo);
}

/*
==============
R_AddXModelSurfaces
==============
*/

GfxDrawSurf *__fastcall R_AddXModelSurfaces(const XModelDrawInfo *modelInfo, const XModel *model, MaterialTechniqueType techType, GfxDrawSurf *drawSurf, GfxDrawSurf *lastDrawSurf, const vec3_t *origin, GfxSceneViewType sceneViewType)
{
  return ?R_AddXModelSurfaces@@YAPEATGfxDrawSurf@@PEIBUXModelDrawInfo@@PEIBUXModel@@W4MaterialTechniqueType@@PEIAT1@3AEBTvec3_t@@W4GfxSceneViewType@@@Z(modelInfo, model, techType, drawSurf, lastDrawSurf, origin, sceneViewType);
}

/*
==============
R_AddDObjSurfaces
==============
*/

GfxDrawSurf *__fastcall R_AddDObjSurfaces(const GfxSceneEntity *sceneEnt, MaterialTechniqueType techType, GfxDrawSurf *drawSurf, GfxDrawSurf *lastDrawSurf, GfxSceneViewType sceneViewType)
{
  return ?R_AddDObjSurfaces@@YAPEATGfxDrawSurf@@PEIBUGfxSceneEntity@@W4MaterialTechniqueType@@PEIAT1@2W4GfxSceneViewType@@@Z(sceneEnt, techType, drawSurf, lastDrawSurf, sceneViewType);
}

/*
==============
R_AddDObjSurfaces
==============
*/
GfxDrawSurf *R_AddDObjSurfaces(const GfxSceneEntity *sceneEnt, MaterialTechniqueType techType, GfxDrawSurf *drawSurf, GfxDrawSurf *lastDrawSurf, GfxSceneViewType sceneViewType)
{
  GfxDrawSurf *v5; 
  MaterialTechniqueType v6; 
  GfxModelRigidSurface *firstSurf; 
  const dvar_t *v9; 
  const GfxSceneEntity *v10; 
  const DObj *obj; 
  GfxSceneViewType v12; 
  unsigned __int32 v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  const XModel *Model; 
  const XModelLodInfo *LodInfo; 
  unsigned __int16 surfIndex; 
  unsigned __int16 numsurfs; 
  unsigned __int16 v22; 
  unsigned __int16 v23; 
  int v24; 
  Material **Skins; 
  const GfxModelRigidSurface *v26; 
  __int64 ModelRigidSurfaceSize; 
  const XSurface *xsurf; 
  surfaceType_t v29; 
  __int64 v30; 
  int v31; 
  Material *v32; 
  __int64 p1_low; 
  XAssetHeader v34; 
  int p1; 
  __int64 v36; 
  Material *v37; 
  const MaterialTechniqueSet *techniqueSet; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  unsigned __int64 v43; 
  unsigned __int64 v44; 
  unsigned int v45; 
  GfxDrawSurf *v46; 
  __int64 surfType; 
  Material **materialHandle; 
  __int64 v50; 
  __int64 v51; 
  bool enabled; 
  Material **v54; 
  int NumModels; 
  unsigned int v56; 
  unsigned int v57; 
  GfxModelRigidSurface *modelSurf; 
  unsigned int v60; 
  bitarray_base<bitarray<256> > *v61; 
  GfxDrawSurf *v62; 
  unsigned int v63; 
  int v64; 
  unsigned int v65; 
  __int64 v66; 
  GfxDrawSurfFields v67; 
  vec3_t outOrigin; 
  GfxDrawSurf *v69; 
  __int64 v70; 
  XSurface *surfs; 
  __int64 v72; 
  Bounds surfBounds; 
  Bounds accumulatedSurfBounds; 

  v72 = -2i64;
  v69 = lastDrawSurf;
  v5 = drawSurf;
  v62 = drawSurf;
  v6 = techType;
  Profile_Begin(97);
  firstSurf = (GfxModelRigidSurface *)sceneEnt->cull.skinnedSurfs.firstSurf;
  modelSurf = firstSurf;
  v9 = DVARBOOL_dobj_hide_models_with_root_meld_failure;
  if ( !DVARBOOL_dobj_hide_models_with_root_meld_failure && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dobj_hide_models_with_root_meld_failure") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  enabled = v9->current.enabled;
  if ( firstSurf )
  {
    v10 = sceneEnt;
    obj = sceneEnt->obj;
    v61 = (bitarray_base<bitarray<256> > *)obj;
    if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1305, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    NumModels = DObjGetNumModels(obj);
    v63 = *((_DWORD *)sceneEnt + 347) & 1;
    v64 = *((_DWORD *)sceneEnt + 346) & 0x3FF;
    v12 = sceneViewType;
    v13 = sceneViewType - 1;
    *(_OWORD *)accumulatedSurfBounds.midPoint.v = _xmm_ff7fffff000000000000000000000000;
    accumulatedSurfBounds.halfSize.v[1] = FLOAT_N3_4028235e38;
    accumulatedSurfBounds.halfSize.v[2] = FLOAT_N3_4028235e38;
    v14 = 0;
    v56 = 0;
    if ( NumModels )
    {
      v15 = 0i64;
      v70 = 0i64;
      v16 = NumModels;
      do
      {
        v17 = v10->lods[v15];
        if ( v17 != 6 )
        {
          Model = DObjGetModel(obj, v14);
          if ( !Model )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1337, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 296, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
          }
          LodInfo = XModelGetLodInfo(Model, v17);
          if ( !LodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 300, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
            __debugbreak();
          if ( LodInfo->numsurfs )
          {
            surfIndex = LodInfo->surfIndex;
            numsurfs = Model->numsurfs;
            v22 = numsurfs;
            if ( surfIndex >= numsurfs )
            {
              LODWORD(materialHandle) = numsurfs;
              LODWORD(surfType) = surfIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 303, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", surfType, materialHandle) )
                __debugbreak();
            }
            if ( LodInfo->numsurfs + (unsigned int)LodInfo->surfIndex > v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 304, ASSERT_TYPE_ASSERT, "(lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs)", (const char *)&queryFormat, "lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs") )
              __debugbreak();
            if ( !LodInfo->surfs )
            {
              LODWORD(v50) = v17;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 310, ASSERT_TYPE_ASSERT, "(lodInfo->surfs)", "%s\n\tModel missing surfs : %s,%u. Perhaps you need to check XModelIsLodUsable()?", "lodInfo->surfs", Model->name, v50) )
                __debugbreak();
            }
            if ( !LodInfo->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 311, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
              __debugbreak();
            surfs = LodInfo->surfs;
            v23 = LodInfo->numsurfs;
            v6 = techType;
          }
          else
          {
            surfs = NULL;
            v23 = 0;
          }
          v24 = v23;
          v65 = v23;
          if ( v17 < Model->shadowCutoffLod )
          {
            if ( !enabled || (v66 = 1i64, !bitarray_base<bitarray<256>>::testBit(v61 + 304, v14)) )
              v66 = 0i64;
          }
          else
          {
            if ( v6 != TECHNIQUE_BUILD_SHADOWMAP_DEPTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1345, ASSERT_TYPE_ASSERT, "(techType == TECHNIQUE_BUILD_SHADOWMAP_DEPTH)", (const char *)&queryFormat, "techType == TECHNIQUE_BUILD_SHADOWMAP_DEPTH") )
              __debugbreak();
            v66 = 1i64;
          }
          if ( v24 )
          {
            Skins = (Material **)XModelGetSkins(Model, v17);
            v54 = Skins;
            if ( !Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1366, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
              __debugbreak();
          }
          else
          {
            Skins = NULL;
            v54 = NULL;
          }
          v60 = 0;
          if ( v24 )
          {
            v26 = modelSurf;
            while ( 1 )
            {
              v57 = 15;
              if ( v26->base.skinnedCachedOffset <= -4 )
                break;
              if ( v26->base.skinnedCachedOffset != -3 )
              {
                xsurf = v26->xsurf;
                if ( v26->base.subdivLodLevel && R_SurfaceHasSubdivision(v26->xsurf) )
                {
                  v29 = SF_XMODEL_SKINNED_SUBDIV;
                  v57 = 11;
                  v30 = 11i64;
                  ModelRigidSurfaceSize = 136i64;
                }
                else
                {
                  v29 = SF_XMODEL_SKINNED;
                  v30 = 15i64;
                  ModelRigidSurfaceSize = 136i64;
                }
                goto LABEL_66;
              }
              ModelRigidSurfaceSize = 4i64;
LABEL_111:
              ++v60;
              v54 = ++Skins;
              v26 = (const GfxModelRigidSurface *)((char *)v26 + ModelRigidSurfaceSize);
              modelSurf = (GfxModelRigidSurface *)v26;
              if ( v60 >= v65 )
              {
                v14 = v56;
                goto LABEL_113;
              }
            }
            xsurf = v26->xsurf;
            if ( v26->base.subdivLodLevel && R_SurfaceHasSubdivision(v26->xsurf) )
            {
              v29 = SF_XMODEL_RIGID_SUBDIV;
              v57 = 10;
              ModelRigidSurfaceSize = R_GetModelRigidSurfaceSize(v26);
              v30 = 10i64;
            }
            else
            {
              v29 = SF_BEGIN_XMODEL;
              if ( v26->base.skinnedCachedOffset > -4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 226, ASSERT_TYPE_ASSERT, "(R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset ))", (const char *)&queryFormat, "R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset )") )
                __debugbreak();
              v31 = -3 - v26->base.skinnedCachedOffset;
              if ( v31 > 128 )
              {
                LODWORD(v51) = 128;
                LODWORD(v50) = -3 - v26->base.skinnedCachedOffset;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", v50, v51) )
                  __debugbreak();
              }
              ModelRigidSurfaceSize = 32i64 * (unsigned int)v31 + 76;
              v30 = 15i64;
            }
LABEL_66:
            v32 = *Skins;
            if ( !*Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1425, ASSERT_TYPE_ASSERT, "(*material)", (const char *)&queryFormat, "*material") )
              __debugbreak();
            p1_low = LOWORD(v32->drawSurf.packed.p1);
            if ( (unsigned int)p1_low >= rgp.materialCount )
            {
              LODWORD(materialHandle) = rgp.materialCount;
              LODWORD(surfType) = LOWORD(v32->drawSurf.packed.p1);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
              {
                __debugbreak();
                v32 = *v54;
              }
            }
            if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]) != v32 )
            {
              v34.physicsLibrary = DB_GetXAssetMasterDefaultHeader(ASSET_TYPE_MATERIAL).physicsLibrary;
              p1 = v32->drawSurf.packed.p1;
              if ( (unsigned __int16)p1 == (unsigned __int16)v34.physicsLibrary[2].name )
              {
                R_WarnOncePerFrame(R_WARN_UNSORTED_MATERIAL_INDEX, v32->name);
LABEL_110:
                Skins = v54;
                goto LABEL_111;
              }
              v36 = (unsigned __int16)p1;
              v37 = v32;
              if ( (unsigned __int16)p1 >= rgp.materialCount )
              {
                LODWORD(materialHandle) = rgp.materialCount;
                LODWORD(surfType) = (unsigned __int16)p1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
                {
                  __debugbreak();
                  v37 = *v54;
                }
              }
              v32 = v37;
              if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v36]) != v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1438, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( ( uint )( *material )->drawSurf.fields.materialSortedIndex ) == *material)", (const char *)&queryFormat, "R_GetSortedMaterial( ( uint )( *material )->drawSurf.fields.materialSortedIndex ) == *material") )
              {
                __debugbreak();
                v32 = *v54;
              }
              v26 = modelSurf;
            }
            if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 464, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
              __debugbreak();
            if ( !v32->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 465, ASSERT_TYPE_ASSERT, "( ( material->techniqueSet ) )", "( material->name ) = %s", v32->name) )
              __debugbreak();
            techniqueSet = v32->techniqueSet;
            if ( !techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 515, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
              __debugbreak();
            v6 = techType;
            if ( Material_TechSetHasTechnique(techniqueSet, techType) )
            {
              if ( v62 >= v69 )
              {
                R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddDObjSurfaces");
                v10 = sceneEnt;
                v14 = v56;
                goto LABEL_115;
              }
              if ( !v66 )
              {
                v39 = truncate_cast<unsigned __int64,__int64>((char *)v26 - (char *)frontEndDataOut - 1789440);
                if ( (v39 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1460, ASSERT_TYPE_ASSERT, "(!( surfId & 3 ))", (const char *)&queryFormat, "!( surfId & 3 )") )
                  __debugbreak();
                v40 = v39 >> 2;
                if ( (unsigned int)v40 >= 0x1000000 )
                {
                  LODWORD(materialHandle) = 0x1000000;
                  LODWORD(surfType) = v40;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1462, ASSERT_TYPE_ASSERT, "(unsigned)( surfId ) < (unsigned)( 1 << 24 )", "surfId doesn't index 1 << MTL_SORT_OBJECT_ID_BITS\n\t%i not in [0, %i)", surfType, materialHandle) )
                    __debugbreak();
                }
                _XMM0.fields = (GfxDrawSurfFields)(*v54)->drawSurf;
                __asm { vpextrq rcx, xmm0, 1 }
                v43 = _RCX & 0xFFFFFFFE007FFFFFui64 | ((unsigned __int64)(unsigned int)v29 << 23) | (_RCX - ((unsigned __int64)v63 << 27)) & 0x1F8000000i64 | 0x200000;
                *((_QWORD *)&v67 + 1) = v43;
                v44 = (*v54)->drawSurf.packed.p0 & 0xF000000003FFFFFFui64 | ((v40 & 0xFFFFFF) << 26) | -(__int64)(v64 != 0) & 0x4000000000000i64;
                *(_QWORD *)&v67 = v44;
                if ( R_UGB_UpdateXSurfDataFromXSurf(xsurf) )
                {
                  if ( techType == TECHNIQUE_BUILD_SHADOWMAP_DEPTH )
                  {
                    v45 = truncate_cast<unsigned int,unsigned __int64>(v40);
                    v10 = sceneEnt;
                    *(_QWORD *)&v67 = v44 & 0xFFFFFFFFFC0003FFui64 | ((unsigned __int64)R_AllocGPUBatchIndexXModel(1u, sceneViewType, sceneEnt, modelSurf, v45, v29, v54) << 10);
                  }
                  else
                  {
                    v10 = sceneEnt;
                  }
                  v62->fields = v67;
                  v46 = ++v62;
                  if ( v57 < 0xF )
                  {
                    if ( v46 >= v69 )
                    {
                      R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddDObjSurfaces");
                      v14 = v56;
                      goto LABEL_114;
                    }
                    *((_QWORD *)&v67 + 1) = v43 & 0xFFFFFFFFF87FFFFFui64 | (v30 << 23);
                    v46->fields = v67;
                    v62 = v46 + 1;
                  }
                  if ( (unsigned int)(sceneViewType - 1) <= 2 )
                  {
                    GfxSceneEntity_GetPlacementOrigin(v10, &outOrigin);
                    surfBounds.halfSize = xsurf->surfBounds.halfSize;
                    surfBounds.midPoint.v[0] = outOrigin.v[0] + xsurf->surfBounds.midPoint.v[0];
                    surfBounds.midPoint.v[1] = outOrigin.v[1] + xsurf->surfBounds.midPoint.v[1];
                    surfBounds.midPoint.v[2] = outOrigin.v[2] + xsurf->surfBounds.midPoint.v[2];
                    R_AccumulateSurfBounds(&surfBounds, &accumulatedSurfBounds);
                    memset(&outOrigin, 0, sizeof(outOrigin));
                  }
                }
                v26 = modelSurf;
              }
            }
            goto LABEL_110;
          }
LABEL_113:
          v10 = sceneEnt;
LABEL_114:
          v6 = techType;
LABEL_115:
          v16 = NumModels;
          obj = (const DObj *)v61;
        }
        v56 = ++v14;
        v15 = ++v70;
      }
      while ( v14 < v16 );
      v5 = v62;
      v13 = sceneViewType - 1;
      v12 = sceneViewType;
    }
    if ( v13 <= 2 )
      R_UpdateViewSurfaceBounds(&accumulatedSurfBounds, v12);
  }
  Profile_EndInternal(NULL);
  return v5;
}

/*
==============
R_AddDObjSurfacesCamera
==============
*/
__int64 R_AddDObjSurfacesCamera(const GfxViewInfo *viewInfo, const GfxSceneEntity *sceneEnt, const unsigned int sceneEntIndex, const GfxModelLightingProbeInfo *lightingInfo, GfxDrawSurf **drawSurfs, GfxDrawSurf **lastDrawSurfs)
{
  const GfxSceneEntity *v6; 
  const dvar_t *v7; 
  unsigned int v8; 
  _BYTE *firstSurf; 
  __int64 v10; 
  unsigned int v11; 
  const DObj *v12; 
  GfxSceneViewType v13; 
  unsigned int v14; 
  float v15; 
  unsigned int v16; 
  bool v17; 
  bool v18; 
  const XModel *Model; 
  const XModelLodInfo *LodInfo; 
  unsigned __int16 surfIndex; 
  unsigned __int16 numsurfs; 
  unsigned __int16 v23; 
  unsigned __int16 v24; 
  int v25; 
  Material **Skins; 
  __int64 v27; 
  Material **v28; 
  XModelMaterialOverride *modelMaterialOverrides; 
  int v30; 
  unsigned int materialOverrideCount; 
  __int64 v32; 
  __int64 v33; 
  Material *v34; 
  int v35; 
  __int64 v36; 
  unsigned int v37; 
  __int64 v38; 
  XSurface *ModelSurfaceXSurface; 
  surfaceType_t v40; 
  __int64 v41; 
  XSurface *v42; 
  int v43; 
  Material *v44; 
  __int64 p1_low; 
  XAssetHeader v46; 
  int p1; 
  __int64 v48; 
  Material *v49; 
  unsigned int cameraRegion; 
  bool v51; 
  const GfxModelLightingProbeInfo *v52; 
  unsigned __int64 v53; 
  unsigned __int64 v54; 
  const Material *v55; 
  unsigned __int64 v57; 
  __int64 v59; 
  unsigned __int64 v60; 
  unsigned int v61; 
  GfxModelDecalVolumeGridInfo *v62; 
  __int64 v63; 
  GfxDrawSurf *v64; 
  __int128 v65; 
  __int128 *v66; 
  const Material *v67; 
  unsigned __int8 ModelRootBoneIndex; 
  int integer; 
  const char *v70; 
  unsigned int v71; 
  const char *v72; 
  const vec4_t *v73; 
  __int64 v74; 
  const char *v75; 
  const dvar_t *v76; 
  __int64 surfType; 
  Material **materialHandle; 
  __int64 v80; 
  __int64 v81; 
  char v82; 
  signed int v83; 
  bool enabled; 
  GfxModelDecalVolumeGridInfo *modelSurf; 
  unsigned int lod; 
  DObj *obj; 
  int v89; 
  unsigned int v90; 
  unsigned int v91; 
  int v92; 
  unsigned int v93; 
  GfxViewMaterialRenderFeatures renderFeatures; 
  unsigned int v95; 
  GfxModelDecalVolumeGridInfo decalVolumeGridInfo; 
  unsigned int v97; 
  unsigned int v98; 
  GfxSceneViewType sceneViewType; 
  unsigned int v100; 
  Material **v101; 
  __int64 v102; 
  vec3_t origin; 
  int v104; 
  unsigned int dobjIndex; 
  XSurface *xsurf; 
  const XModel *v107; 
  unsigned int NumModels; 
  vec3_t outOrigin; 
  __int128 v110; 
  vec3_t v111; 
  vec3_t v112; 
  Material **v113; 
  GfxViewInfo *viewInfoa; 
  XSurface *surfs; 
  const GfxModelLightingProbeInfo *v116; 
  GfxDrawSurf **v117; 
  __int64 i; 
  __int64 v119; 
  Bounds surfBounds; 
  GfxPlacement placement; 
  Bounds accumulatedSurfBounds; 
  DObjAnimMat outMat; 
  int v124[96]; 
  Material *outPhysicalMaterial[97]; 

  v119 = -2i64;
  v116 = lightingInfo;
  dobjIndex = sceneEntIndex;
  v6 = sceneEnt;
  viewInfoa = (GfxViewInfo *)viewInfo;
  v117 = drawSurfs;
  Profile_Begin(97);
  v7 = DVARBOOL_dobj_hide_models_with_root_meld_failure;
  if ( !DVARBOOL_dobj_hide_models_with_root_meld_failure && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dobj_hide_models_with_root_meld_failure") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  enabled = v7->current.enabled;
  v8 = 0;
  v100 = 0;
  firstSurf = v6->cull.skinnedSurfs.firstSurf;
  modelSurf = (GfxModelDecalVolumeGridInfo *)firstSurf;
  if ( firstSurf )
  {
    v10 = 0i64;
    v92 = 0;
    v11 = 0;
    v93 = 0;
    v95 = 0;
    v12 = v6->obj;
    obj = (DObj *)v12;
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 887, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    NumModels = DObjGetNumModels(v12);
    v97 = *((_DWORD *)v6 + 347) & 1;
    v104 = *((_DWORD *)v6 + 346) & 0x3FF;
    *(_OWORD *)accumulatedSurfBounds.midPoint.v = _xmm_ff7fffff000000000000000000000000;
    accumulatedSurfBounds.halfSize.v[1] = FLOAT_N3_4028235e38;
    accumulatedSurfBounds.halfSize.v[2] = FLOAT_N3_4028235e38;
    renderFeatures = GFX_VIEW_MTL_FEAT_NONE;
    v13 = 32 * v97;
    sceneViewType = 32 * v97;
    v14 = 0;
    v83 = 0;
    if ( NumModels )
    {
      v102 = 0i64;
      while ( 1 )
      {
        if ( !enabled )
          goto LABEL_15;
        if ( v14 >= 0x100 )
        {
          LODWORD(materialHandle) = 256;
          LODWORD(surfType) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", surfType, materialHandle) )
            __debugbreak();
        }
        v82 = 1;
        if ( ((0x80000000 >> (v14 & 0x1F)) & v12->modelHasBadRootBoneMeld.array[(unsigned __int64)v14 >> 5]) == 0 )
LABEL_15:
          v82 = 0;
        lod = v6->lods[v10];
        if ( lod == 6 )
          goto LABEL_188;
        v15 = v6->materialLods[v10];
        v16 = (int)v15;
        v17 = v15 >= 0.0 && v15 <= 16777216.0;
        v18 = v15 >= 0.0 && v15 <= 4294967300.0;
        if ( (!v17 || !v18) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned int __cdecl float_to_integral_cast<unsigned int,float>(float)", v16, v15) )
          __debugbreak();
        if ( v16 > 1 )
        {
          LODWORD(v81) = 1;
          LODWORD(v80) = (int)v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 201, ASSERT_TYPE_ASSERT, "( retVal ) <= ( MAX_MATERIAL_LOD )", "%s <= %s\n\t%u, %u", "retVal", "MAX_MATERIAL_LOD", v80, v81) )
            __debugbreak();
        }
        Model = DObjGetModel(v12, v14);
        v107 = Model;
        if ( !Model )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 919, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 296, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
        }
        LodInfo = XModelGetLodInfo(Model, lod);
        if ( !LodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 300, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
          __debugbreak();
        if ( LodInfo->numsurfs )
        {
          surfIndex = LodInfo->surfIndex;
          numsurfs = Model->numsurfs;
          v23 = numsurfs;
          if ( surfIndex >= numsurfs )
          {
            LODWORD(materialHandle) = numsurfs;
            LODWORD(surfType) = surfIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 303, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", surfType, materialHandle) )
              __debugbreak();
          }
          if ( LodInfo->numsurfs + (unsigned int)LodInfo->surfIndex > v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 304, ASSERT_TYPE_ASSERT, "(lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs)", (const char *)&queryFormat, "lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs") )
            __debugbreak();
          if ( !LodInfo->surfs )
          {
            LODWORD(v80) = lod;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 310, ASSERT_TYPE_ASSERT, "(lodInfo->surfs)", "%s\n\tModel missing surfs : %s,%u. Perhaps you need to check XModelIsLodUsable()?", "lodInfo->surfs", Model->name, v80) )
              __debugbreak();
          }
          if ( !LodInfo->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 311, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
            __debugbreak();
          surfs = LodInfo->surfs;
          v24 = LodInfo->numsurfs;
          v6 = sceneEnt;
        }
        else
        {
          surfs = NULL;
          v24 = 0;
        }
        v91 = v24;
        if ( !v24 )
          goto LABEL_187;
        decalVolumeGridInfo.allocatedVolumeInfoSlot = 0xFFFF;
        v25 = v83;
        R_DecalVolumesGrid_PrepareVolumeInfo_SceneEnt(viewInfoa, dobjIndex, v6, v83, &decalVolumeGridInfo);
        Skins = (Material **)XModelGetSkins(Model, lod);
        v101 = Skins;
        if ( !Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 934, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
          __debugbreak();
        v98 = 0;
        if ( !v91 )
          goto LABEL_170;
        v27 = 16i64 * v83;
        for ( i = v27; ; v27 = i )
        {
          v28 = Skins;
          v113 = Skins;
          v89 = 96;
          if ( v12 )
          {
            modelMaterialOverrides = v12->modelMaterialOverrides;
            if ( modelMaterialOverrides )
            {
              v30 = 0;
              materialOverrideCount = modelMaterialOverrides[v102].materialOverrideCount;
              if ( materialOverrideCount )
              {
                v32 = *(__int64 *)((char *)&modelMaterialOverrides->materialOverride + v27);
                while ( 1 )
                {
                  v33 = *(_QWORD *)(v32 + 8i64 * (unsigned int)v30);
                  if ( v33 )
                  {
                    v34 = *(Material **)v33;
                    if ( *(Material **)v33 == *Skins )
                    {
                      v35 = *(_DWORD *)(v33 + 24);
                      if ( v35 != 3 )
                        break;
                    }
                  }
                  if ( ++v30 >= materialOverrideCount )
                    goto LABEL_78;
                }
                if ( v35 != 2 || (v36 = *(_QWORD *)(v33 + 8), v34->materialType == *(_DWORD *)(v36 + 20)) )
                {
                  v37 = R_CopyMaterialOverrideToPhysicalMaterialData((MaterialOverride *)v33, &outPhysicalMaterial[v30], &renderFeatures);
                  if ( v37 >= 0x800 )
                  {
                    v30 = 96;
                    R_WarnOncePerFrame(R_WARN_MATERIAL_OVERRIDE_OUT_OF_PHYSICAL_MATERIALS);
                  }
                  else
                  {
                    v124[v30] = rgp.physicalMaterialSortedIndex[v37];
                  }
                  v89 = v30;
                  if ( v30 < 96 )
                  {
                    v28 = &outPhysicalMaterial[v30];
                    v113 = v28;
                  }
                }
                else
                {
                  R_WarnOncePerFrame(R_WARN_MATERIAL_OVERRIDE_MISMATCHED_MATERIAL, v34->name, *(_QWORD *)v36);
                  v89 = 96;
                }
              }
            }
          }
LABEL_78:
          if ( !Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 951, ASSERT_TYPE_ASSERT, "(actualMaterial)", (const char *)&queryFormat, "actualMaterial") )
            __debugbreak();
          v90 = 15;
          if ( *(int *)firstSurf <= -4 )
          {
            v42 = (XSurface *)*((_QWORD *)firstSurf + 7);
            xsurf = v42;
            if ( firstSurf[54] && R_SurfaceHasSubdivision(v42) )
            {
              v40 = SF_XMODEL_RIGID_SUBDIV;
              v90 = 10;
              v41 = 10i64;
            }
            else
            {
              v40 = SF_BEGIN_XMODEL;
              v41 = 15i64;
            }
            if ( *(int *)firstSurf > -4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 226, ASSERT_TYPE_ASSERT, "(R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset ))", (const char *)&queryFormat, "R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset )") )
              __debugbreak();
            v43 = -3 - *(_DWORD *)firstSurf;
            if ( v43 > 128 )
            {
              LODWORD(v81) = 128;
              LODWORD(v80) = -3 - *(_DWORD *)firstSurf;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", v80, v81) )
                __debugbreak();
            }
            v38 = 32i64 * (unsigned int)v43 + 76;
          }
          else
          {
            if ( *(_DWORD *)firstSurf == -3 )
            {
              v38 = 4i64;
              goto LABEL_165;
            }
            ModelSurfaceXSurface = (XSurface *)R_GetModelSurfaceXSurface(firstSurf, SF_XMODEL_SKINNED);
            xsurf = ModelSurfaceXSurface;
            if ( firstSurf[54] && R_SurfaceHasSubdivision(ModelSurfaceXSurface) )
            {
              v40 = SF_XMODEL_SKINNED_SUBDIV;
              v90 = 11;
              v41 = 11i64;
              v38 = 136i64;
            }
            else
            {
              v40 = SF_XMODEL_SKINNED;
              v41 = 15i64;
              v38 = 136i64;
            }
          }
          v44 = *Skins;
          if ( !*Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1002, ASSERT_TYPE_ASSERT, "(*actualMaterial)", (const char *)&queryFormat, "*actualMaterial") )
            __debugbreak();
          p1_low = LOWORD(v44->drawSurf.packed.p1);
          if ( (unsigned int)p1_low >= rgp.materialCount )
          {
            LODWORD(materialHandle) = rgp.materialCount;
            LODWORD(surfType) = LOWORD(v44->drawSurf.packed.p1);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
            {
              __debugbreak();
              v44 = *Skins;
            }
          }
          if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]) != v44 )
          {
            v46.physicsLibrary = DB_GetXAssetMasterDefaultHeader(ASSET_TYPE_MATERIAL).physicsLibrary;
            p1 = v44->drawSurf.packed.p1;
            if ( (unsigned __int16)p1 == (unsigned __int16)v46.physicsLibrary[2].name )
            {
              R_WarnOncePerFrame(R_WARN_UNSORTED_MATERIAL_INDEX, v44->name);
              goto LABEL_164;
            }
            v48 = (unsigned __int16)p1;
            if ( (unsigned __int16)p1 >= rgp.materialCount )
            {
              LODWORD(materialHandle) = rgp.materialCount;
              LODWORD(surfType) = (unsigned __int16)p1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
              {
                __debugbreak();
                v44 = *Skins;
              }
            }
            if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v48]) != v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1014, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( ( uint )( *actualMaterial )->drawSurf.fields.materialSortedIndex ) == *actualMaterial)", (const char *)&queryFormat, "R_GetSortedMaterial( ( uint )( *actualMaterial )->drawSurf.fields.materialSortedIndex ) == *actualMaterial") )
              __debugbreak();
          }
          v49 = *v28;
          if ( SLOBYTE((*v28)->surfaceFlags) < 0 )
            goto LABEL_164;
          cameraRegion = v49->cameraRegion;
          if ( cameraRegion - 2 <= 1 && (unsigned int)(r_drawTransDecalSurfs->current.integer - 3) <= 1 )
            goto LABEL_164;
          if ( cameraRegion <= 1 && (unsigned int)(r_drawOpaqueSurfs->current.integer - 3) <= 1 || v82 )
            goto LABEL_164;
          v51 = 0;
          if ( !v97 )
            goto LABEL_210;
          if ( cameraRegion - 2 <= 1 )
          {
            cameraRegion = 6;
            goto LABEL_129;
          }
          if ( !v49->cameraRegion )
          {
            cameraRegion = 5;
            goto LABEL_129;
          }
          if ( cameraRegion == 1 )
          {
            cameraRegion = 7;
          }
          else
          {
LABEL_210:
            if ( (*((_BYTE *)sceneEnt + 1388) & 2) != 0 )
              v51 = (v49->drawSurf.packed.p1 & 0x180000) == 0x100000i64;
          }
LABEL_129:
          if ( (*((_BYTE *)sceneEnt + 1388) & 2) != 0 )
          {
            if ( cameraRegion )
            {
              switch ( cameraRegion )
              {
                case 5u:
                  cameraRegion = 8;
                  break;
                case 1u:
                  cameraRegion = 11;
                  break;
                case 7u:
                  cameraRegion = 9;
                  break;
              }
            }
            else
            {
              cameraRegion = 10;
            }
          }
          v52 = v116;
          if ( !v116 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1079, ASSERT_TYPE_ASSERT, "(lightingInfo)", (const char *)&queryFormat, "lightingInfo") )
            __debugbreak();
          modelSurf[5].allocatedVolumeInfoSlot = v52[v102].lgv.allocatedVolumeInfoSlot;
          modelSurf[6].allocatedVolumeInfoSlot = decalVolumeGridInfo.allocatedVolumeInfoSlot;
          v53 = truncate_cast<unsigned __int64,__int64>((char *)modelSurf - (char *)frontEndDataOut - 1789440);
          if ( (v53 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1087, ASSERT_TYPE_ASSERT, "(!( surfId & 3 ))", (const char *)&queryFormat, "!( surfId & 3 )") )
            __debugbreak();
          v54 = v53 >> 2;
          if ( (unsigned int)v54 >= 0x1000000 )
          {
            LODWORD(materialHandle) = 0x1000000;
            LODWORD(surfType) = v54;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1089, ASSERT_TYPE_ASSERT, "(unsigned)( surfId ) < (unsigned)( 1 << 24 )", "surfId doesn't index 1 << MTL_SORT_OBJECT_ID_BITS\n\t%i not in [0, %i)", surfType, materialHandle) )
              __debugbreak();
          }
          v55 = *Skins;
          _XMM0.fields = (GfxDrawSurfFields)(*Skins)->drawSurf;
          *(_QWORD *)&v110 = (*Skins)->drawSurf.packed.p0;
          v57 = (unsigned __int64)v97 << 27;
          __asm { vpextrq rcx, xmm0, 1 }
          *((_QWORD *)&v110 + 1) = _RCX & 0xFFFFFFFE005FFFFFui64 | (_RCX - v57) & 0x1F8000000i64 | ((v97 | (4i64 * (unsigned int)v40)) << 21);
          v59 = v110 & 0xE000000003FFFFFFui64 | ((v54 & 0xFFFFFF) << 26) | -(__int64)(v104 != 0) & 0x4000000000000i64;
          *(_QWORD *)&v110 = v59;
          if ( v89 < 96 )
          {
            v60 = _RCX & 0xFFFFFFFE005F0000ui64 | ((v97 | (4i64 * (unsigned int)v40)) << 21) & 0xFFFFFFFE07FF0000ui64 | outPhysicalMaterial[v89]->drawSurf.packed.p1 & 0x1F8000000i64 | LOWORD(v124[v89]);
            *((_QWORD *)&v110 + 1) = v60 ^ (v60 ^ (v60 - v57)) & 0x1F8000000i64;
          }
          if ( !rg.distortion && Material_HasDistortion(v55) || !R_UGB_UpdateXSurfDataFromXSurf(xsurf) )
          {
            Skins = v101;
LABEL_164:
            v12 = obj;
LABEL_165:
            v62 = modelSurf;
            goto LABEL_166;
          }
          v61 = truncate_cast<unsigned int,unsigned __int64>(v54);
          v62 = modelSurf;
          *(_QWORD *)&v110 = v59 & 0xFFFFFFFFFC0003FFui64 | ((unsigned __int64)R_AllocGPUBatchIndexXModel(0, sceneViewType, sceneEnt, modelSurf, v61, v40, v101) << 10);
          v63 = (__int64)v117;
          v64 = v117[cameraRegion];
          if ( v64 >= lastDrawSurfs[cameraRegion] )
            goto LABEL_168;
          v65 = v110;
          v64->fields = (GfxDrawSurfFields)v110;
          *(_QWORD *)(v63 + 8i64 * cameraRegion) += 16i64;
          if ( v51 )
          {
            *(_OWORD *)*(_QWORD *)(v63 + 96) = v65;
            *(_QWORD *)(v63 + 96) += 16i64;
          }
          v100 = 1;
          if ( v90 < 0xF )
            break;
LABEL_158:
          if ( r_showTriCounts->current.enabled )
          {
            v92 += R_GetModelSurfaceXSurface(modelSurf, v40)->triCount;
          }
          else if ( r_showVertCounts->current.enabled )
          {
            v93 += R_GetModelSurfaceXSurface(modelSurf, v40)->vertCount;
          }
          GfxSceneEntity_GetPlacementOrigin(sceneEnt, &outOrigin);
          surfBounds.halfSize = xsurf->surfBounds.halfSize;
          surfBounds.midPoint.v[0] = outOrigin.v[0] + xsurf->surfBounds.midPoint.v[0];
          surfBounds.midPoint.v[1] = outOrigin.v[1] + xsurf->surfBounds.midPoint.v[1];
          surfBounds.midPoint.v[2] = outOrigin.v[2] + xsurf->surfBounds.midPoint.v[2];
          R_AccumulateSurfBounds(&surfBounds, &accumulatedSurfBounds);
          v67 = Material_FromHandle(*v113);
          R_AccumulateMaterialRenderTechflags(v67, &renderFeatures, &outOrigin);
          memset(&outOrigin, 0, sizeof(outOrigin));
          Skins = v101;
          v12 = obj;
LABEL_166:
          ++v98;
          v101 = ++Skins;
          modelSurf = (GfxModelDecalVolumeGridInfo *)((char *)v62 + v38);
          firstSurf = (char *)v62 + v38;
          if ( v98 >= v91 )
            goto LABEL_169;
        }
        v66 = *(__int128 **)(v63 + 8i64 * cameraRegion);
        if ( v66 < (__int128 *)lastDrawSurfs[cameraRegion] )
        {
          *v66 = v65;
          *(_QWORD *)(*(_QWORD *)(v63 + 8i64 * cameraRegion) + 8i64) = *(_QWORD *)(*(_QWORD *)(v63 + 8i64 * cameraRegion) + 8i64) & 0xFFFFFFFFF87FFFFFui64 | (v41 << 23);
          *(_QWORD *)(v63 + 8i64 * cameraRegion) += 16i64;
          goto LABEL_158;
        }
LABEL_168:
        R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddDObjSurfacesCamera", cameraRegion);
        firstSurf = modelSurf;
LABEL_169:
        v6 = sceneEnt;
        Model = v107;
        v25 = v83;
LABEL_170:
        v95 += v91;
        if ( r_showModelNames->current.enabled || r_showModelLODs->current.integer || r_showModelLODOutDist->current.enabled )
        {
          GfxSceneEntity_GetPlacementOrigin(v6, &v111);
          v12 = obj;
          ModelRootBoneIndex = DObjGetModelRootBoneIndex(obj, v25);
          DObjGetBasePoseMatrix(obj, ModelRootBoneIndex, &outMat);
          origin.v[0] = outMat.trans.v[0] + v111.v[0];
          origin.v[1] = outMat.trans.v[1] + v111.v[1];
          origin.v[2] = outMat.trans.v[2] + v111.v[2];
          if ( r_showModelNames->current.enabled )
            R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, &origin, &colorCyan, Model->name);
          integer = r_showModelLODs->current.integer;
          if ( integer && 6 - integer >= lod )
          {
            v70 = j_va("%u", lod);
            R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, &origin, &colorCyan, v70);
          }
          if ( r_showModelLODOutDist->current.enabled )
          {
            v71 = Model->numLods - 1;
            v72 = j_va("[%u] %d", v71, (unsigned int)(int)Model->lodInfo[(unsigned __int64)v71].dist);
            v73 = &colorCyan;
            if ( lod == v71 )
              v73 = &colorYellow;
            R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, &origin, v73, v72);
          }
          memset(&v111, 0, sizeof(v111));
          memset(&origin, 0, sizeof(origin));
        }
        else
        {
          v12 = obj;
        }
        if ( (*((_BYTE *)v6 + 1388) & 9) == 0 )
        {
          GfxSceneEntity_GetPlacementOrigin(v6, &placement.origin);
          placement.quat = v6->placement.placement.quat;
          CG_DrawHits_OnDrawModel(viewInfoa->clientIndex, (*((_DWORD *)v6 + 346) >> 10) & 0xFFF, &placement, Model, lod);
        }
        v10 = v102;
LABEL_187:
        v14 = v83;
LABEL_188:
        v83 = ++v14;
        v102 = ++v10;
        if ( v14 >= NumModels )
        {
          LODWORD(v10) = v92;
          v11 = v93;
          v13 = sceneViewType;
          break;
        }
      }
    }
    if ( v13 == SCENE_VIEW_CAMERA_DEPTH_HACK )
      R_UpdateViewSurfaceBounds(&accumulatedSurfBounds, SCENE_VIEW_CAMERA_DEPTH_HACK);
    R_UpdateViewMaterialRenderTechflags(&renderFeatures);
    GfxSceneEntity_GetPlacementOrigin(v6, &v112);
    if ( r_showTriCounts->current.enabled && (_DWORD)v10 )
    {
      v74 = (unsigned int)v10;
    }
    else if ( r_showVertCounts->current.enabled && v11 )
    {
      v74 = v11;
    }
    else
    {
      if ( !r_showSurfCounts->current.enabled || !v95 )
        goto LABEL_202;
      v74 = v95;
    }
    v75 = j_va("%i", v74);
    R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, &v112, &colorCyan, v75);
LABEL_202:
    v76 = DVARINT_cg_drawFPS;
    if ( DVARINT_cg_drawFPS )
    {
      Dvar_CheckFrontendServerThread(DVARINT_cg_drawFPS);
      if ( v76->current.integer >= 3 )
      {
        if ( rg.stats )
          rg.stats->numXModelTriCount += v10;
      }
    }
    v8 = v100;
    memset(&v112, 0, sizeof(v112));
  }
  Profile_EndInternal(NULL);
  return v8;
}

/*
==============
R_AddXModelSurfaces
==============
*/
GfxDrawSurf *R_AddXModelSurfaces(const XModelDrawInfo *modelInfo, const XModel *model, MaterialTechniqueType techType, GfxDrawSurf *drawSurf, GfxDrawSurf *lastDrawSurf, const vec3_t *origin, GfxSceneViewType sceneViewType)
{
  GfxDrawSurf *v7; 
  const XModel *v8; 
  unsigned __int64 v10; 
  unsigned int v11; 
  const GfxModelRigidSurface *v12; 
  int v13; 
  Material *const *Skins; 
  unsigned __int32 v15; 
  unsigned int v16; 
  unsigned int v17; 
  int skinnedCachedOffset; 
  Material *v19; 
  __int64 p1_low; 
  XAssetHeader v21; 
  int p1; 
  __int64 v23; 
  const XSurface *xsurf; 
  surfaceType_t v25; 
  unsigned __int64 ModelRigidSurfaceSize; 
  __int64 v27; 
  Material *v28; 
  const MaterialTechniqueSet *techniqueSet; 
  unsigned __int64 v32; 
  unsigned __int64 v33; 
  unsigned int v34; 
  __int64 surfType; 
  Material **materialHandle; 
  __int64 v38; 
  __int64 v39; 
  int v40; 
  unsigned int v41; 
  GfxDrawSurf *v42; 
  unsigned int v45; 
  GfxDrawSurfFields v46; 
  XSurface *surfaces; 
  Bounds surfBounds; 
  Bounds accumulatedSurfBounds; 

  v7 = drawSurf;
  v42 = drawSurf;
  v8 = model;
  Profile_Begin(97);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 674, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  v10 = *((_DWORD *)modelInfo + 1) & 0xFFFFFF;
  v11 = *(_DWORD *)modelInfo;
  v45 = v11 & 1;
  v12 = (const GfxModelRigidSurface *)&frontEndDataOut->surfsBuffer[4 * v10];
  v13 = (v11 >> 1) & 0xF;
  v40 = XModelGetSurfaces(v8, &surfaces, v13);
  Skins = XModelGetSkins(v8, v13);
  if ( !Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 684, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  v15 = sceneViewType - 1;
  *(_OWORD *)accumulatedSurfBounds.midPoint.v = _xmm_ff7fffff000000000000000000000000;
  accumulatedSurfBounds.halfSize.v[1] = FLOAT_N3_4028235e38;
  accumulatedSurfBounds.halfSize.v[2] = FLOAT_N3_4028235e38;
  v16 = 0;
  v41 = 0;
  v17 = v40;
  if ( !v40 )
    goto LABEL_71;
  while ( 1 )
  {
    skinnedCachedOffset = v12->base.skinnedCachedOffset;
    if ( v12->base.skinnedCachedOffset != -3 )
      break;
    ++v10;
    v12 = (const GfxModelRigidSurface *)((char *)v12 + 4);
    v7 = v42;
LABEL_67:
    v41 = ++v16;
    ++Skins;
    if ( v16 >= v17 )
      goto LABEL_70;
  }
  if ( !*Skins )
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    LODWORD(v39) = v40;
    LODWORD(v38) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 704, ASSERT_TYPE_ASSERT, "(*material)", "%s\n\tR_AddXModelSurfaces failed with xmodel: %s - subMatIndex: %i, numsurfs: %i", "*material", v8->name, v38, v39) )
      __debugbreak();
    v17 = v40;
  }
  v19 = *Skins;
  p1_low = LOWORD((*Skins)->drawSurf.packed.p1);
  if ( (unsigned int)p1_low >= rgp.materialCount )
  {
    LODWORD(materialHandle) = rgp.materialCount;
    LODWORD(surfType) = LOWORD((*Skins)->drawSurf.packed.p1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
      __debugbreak();
  }
  if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]) != v19 )
  {
    v21.physicsLibrary = DB_GetXAssetMasterDefaultHeader(ASSET_TYPE_MATERIAL).physicsLibrary;
    p1 = v19->drawSurf.packed.p1;
    if ( (unsigned __int16)p1 == (unsigned __int16)v21.physicsLibrary[2].name )
    {
      R_WarnOncePerFrame(R_WARN_UNSORTED_MATERIAL_INDEX, v19->name);
      v7 = v42;
LABEL_66:
      v8 = model;
      goto LABEL_67;
    }
    v23 = (unsigned __int16)p1;
    if ( (unsigned __int16)p1 >= rgp.materialCount )
    {
      LODWORD(materialHandle) = rgp.materialCount;
      LODWORD(surfType) = (unsigned __int16)p1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
      {
        __debugbreak();
        v19 = *Skins;
      }
    }
    if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v23]) != v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 717, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( ( uint )( *material )->drawSurf.fields.materialSortedIndex ) == *material)", (const char *)&queryFormat, "R_GetSortedMaterial( ( uint )( *material )->drawSurf.fields.materialSortedIndex ) == *material") )
      __debugbreak();
  }
  xsurf = v12->xsurf;
  if ( v12->base.subdivLodLevel && R_SurfaceHasSubdivision(v12->xsurf) )
  {
    v25 = SF_XMODEL_RIGID_SUBDIV;
    if ( skinnedCachedOffset <= -4 )
      ModelRigidSurfaceSize = R_GetModelRigidSurfaceSize(v12);
    else
      ModelRigidSurfaceSize = 108i64;
  }
  else
  {
    v25 = SF_BEGIN_XMODEL;
    if ( v12->base.skinnedCachedOffset > -4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 226, ASSERT_TYPE_ASSERT, "(R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset ))", (const char *)&queryFormat, "R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset )") )
      __debugbreak();
    v27 = (unsigned int)(-3 - v12->base.skinnedCachedOffset);
    if ( (int)v27 > 128 )
    {
      LODWORD(v39) = 128;
      LODWORD(v38) = -3 - v12->base.skinnedCachedOffset;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", v38, v39) )
        __debugbreak();
    }
    ModelRigidSurfaceSize = 32 * v27 + 76;
  }
  v28 = *Skins;
  if ( !*Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 464, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !v28->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 465, ASSERT_TYPE_ASSERT, "( ( material->techniqueSet ) )", "( material->name ) = %s", v28->name) )
    __debugbreak();
  techniqueSet = v28->techniqueSet;
  if ( !techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 515, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
    __debugbreak();
  v7 = v42;
  if ( !Material_TechSetHasTechnique(techniqueSet, techType) )
  {
    v10 += ModelRigidSurfaceSize >> 2;
    v12 = (const GfxModelRigidSurface *)((char *)v12 + ModelRigidSurfaceSize);
LABEL_65:
    v17 = v40;
    v16 = v41;
    goto LABEL_66;
  }
  if ( v42 >= lastDrawSurf )
    goto LABEL_69;
  if ( (unsigned int)v10 >= 0x1000000 )
  {
    LODWORD(materialHandle) = 0x1000000;
    LODWORD(surfType) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 755, ASSERT_TYPE_ASSERT, "(unsigned)( surfId ) < (unsigned)( 1 << 24 )", "surfId doesn't index 1 << MTL_SORT_OBJECT_ID_BITS\n\t%i not in [0, %i)", surfType, materialHandle) )
      __debugbreak();
  }
  _XMM0.fields = (GfxDrawSurfFields)(*Skins)->drawSurf;
  __asm { vpextrq rax, xmm0, 1 }
  v32 = _RAX & 0xFFFFFFFFF87FFFFFui64 | ((unsigned __int64)(unsigned int)v25 << 23);
  *((_QWORD *)&v46 + 1) = v32;
  v33 = (*Skins)->drawSurf.packed.p0 & 0xF000000003FFFFFFui64 | ((v10 & 0xFFFFFF | ((unsigned __int64)v45 << 24)) << 26);
  *(_QWORD *)&v46 = v33;
  if ( !R_UGB_UpdateXSurfDataFromXSurf(xsurf) )
  {
    v10 += ModelRigidSurfaceSize >> 2;
    v12 = (const GfxModelRigidSurface *)((char *)v12 + ModelRigidSurfaceSize);
    v7 = v42;
    goto LABEL_65;
  }
  if ( techType == TECHNIQUE_BUILD_SHADOWMAP_DEPTH )
  {
    v34 = truncate_cast<unsigned int,unsigned __int64>(v10);
    *(_QWORD *)&v46 = v33 & 0xFFFFFFFFFC0003FFui64 | ((unsigned __int64)R_AllocGPUBatchIndexXModel(1u, sceneViewType, NULL, v12, v34, v25, Skins) << 10);
  }
  v42->fields = v46;
  v7 = ++v42;
  if ( v25 != SF_XMODEL_RIGID_SUBDIV )
  {
LABEL_63:
    v10 += ModelRigidSurfaceSize >> 2;
    v12 = (const GfxModelRigidSurface *)((char *)v12 + ModelRigidSurfaceSize);
    if ( (unsigned int)(sceneViewType - 1) <= 2 )
    {
      surfBounds.halfSize = xsurf->surfBounds.halfSize;
      surfBounds.midPoint.v[0] = origin->v[0] + xsurf->surfBounds.midPoint.v[0];
      surfBounds.midPoint.v[1] = xsurf->surfBounds.midPoint.v[1] + origin->v[1];
      surfBounds.midPoint.v[2] = xsurf->surfBounds.midPoint.v[2] + origin->v[2];
      R_AccumulateSurfBounds(&surfBounds, &accumulatedSurfBounds);
    }
    goto LABEL_65;
  }
  if ( v7 < lastDrawSurf )
  {
    *((_QWORD *)&v46 + 1) = v32 & 0xFFFFFFFFF87FFFFFui64 | 0x5000000;
    v7->fields = v46;
    v42 = ++v7;
    goto LABEL_63;
  }
LABEL_69:
  R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddXModelSurfaces");
LABEL_70:
  v15 = sceneViewType - 1;
LABEL_71:
  if ( v15 <= 2 )
    R_UpdateViewSurfaceBounds(&accumulatedSurfBounds, sceneViewType);
  Profile_EndInternal(NULL);
  return v7;
}

/*
==============
R_AddXModelSurfacesCamera
==============
*/
__int64 R_AddXModelSurfacesCamera(const GfxViewInfo *viewInfo, const XModelDrawInfo *modelInfo, const XModel *model, const DObj *obj, const vec3_t *origin, const GfxModelLightingProbeInfo *lightingInfo, int depthHack, GfxDrawSurf **drawSurfs, GfxDrawSurf **lastDrawSurfs, const unsigned __int16 mapEntLookup, XModelThermalMode thermalMode, unsigned int renderFlags, unsigned __int16 baseGfxEntityDataID, const GfxModelDecalVolumeGridInfo *decalVolumeGridInfo)
{
  const XModel *v14; 
  const vec3_t *v16; 
  unsigned __int64 v17; 
  unsigned int v18; 
  unsigned __int8 *v19; 
  unsigned int v20; 
  Material *const *Skins; 
  unsigned int v22; 
  int v23; 
  Material *v24; 
  __int64 p1_low; 
  XAssetHeader v26; 
  int p1; 
  __int64 v28; 
  Material **v29; 
  XModelMaterialOverride *modelMaterialOverrides; 
  __int64 v31; 
  unsigned int materialOverrideCount; 
  MaterialOverride **materialOverride; 
  MaterialOverride *v34; 
  Material *originalMaterial; 
  MaterialOverrideType overrideType; 
  const XSurface *v37; 
  surfaceType_t v38; 
  unsigned __int64 ModelRigidSurfaceSize; 
  Material *overrideMaterial; 
  unsigned int v41; 
  int v42; 
  Material *v43; 
  unsigned int cameraRegion; 
  bool v45; 
  const GfxModelLightingProbeInfo *v46; 
  const Material *v47; 
  GfxDrawSurf v48; 
  __int64 v49; 
  unsigned __int64 v50; 
  unsigned __int64 v51; 
  unsigned int v52; 
  __int64 v53; 
  GfxDrawSurf *v54; 
  __int128 v55; 
  unsigned int v56; 
  __int128 *v57; 
  const XSurface *ModelSurfaceXSurface; 
  const XSurface *v59; 
  const XSurface *v60; 
  vec3_t *v61; 
  const Material *v62; 
  int integer; 
  const char *v64; 
  unsigned int v65; 
  const char *v66; 
  const vec4_t *v67; 
  __int64 v68; 
  unsigned int v69; 
  const char *v70; 
  const dvar_t *v71; 
  __int64 surfType; 
  Material **materialHandle; 
  __int64 v75; 
  __int64 v76; 
  unsigned int v77; 
  unsigned __int64 val; 
  int v79; 
  unsigned int v80; 
  Material **v81; 
  int v82; 
  unsigned int v83; 
  GfxViewMaterialRenderFeatures renderFeatures; 
  unsigned int v85; 
  unsigned int v86; 
  GfxSceneViewType sceneViewType; 
  Material **v88; 
  vec3_t *v89; 
  unsigned int v90; 
  const XModel *v91; 
  DebugXModelStats *v92; 
  __int128 v93; 
  const DObj *v94; 
  GfxDrawSurf **v95; 
  DebugXModelStats xmodelStats; 
  __int64 v97; 
  XSurface *surfaces; 
  Bounds surfBounds; 
  Bounds accumulatedSurfBounds; 
  int v101[96]; 
  Material *outPhysicalMaterial[97]; 

  v97 = -2i64;
  v94 = obj;
  v14 = model;
  v91 = model;
  v16 = origin;
  v89 = (vec3_t *)origin;
  v95 = drawSurfs;
  Profile_Begin(97);
  if ( !lightingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 315, ASSERT_TYPE_ASSERT, "(lightingInfo)", (const char *)&queryFormat, "lightingInfo") )
    __debugbreak();
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 316, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  v80 = 0;
  v85 = 0;
  v92 = NULL;
  v79 = 0;
  v17 = *((_DWORD *)modelInfo + 1) & 0xFFFFFF;
  val = v17;
  v18 = *(_DWORD *)modelInfo;
  v90 = *(_DWORD *)modelInfo & 1;
  v19 = &frontEndDataOut->surfsBuffer[4 * v17];
  v20 = (v18 >> 1) & 0xF;
  v83 = v20;
  v86 = XModelGetSurfaces(v14, &surfaces, v20);
  Skins = XModelGetSkins(v14, v20);
  v81 = (Material **)Skins;
  if ( !Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 340, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  *(_OWORD *)accumulatedSurfBounds.midPoint.v = _xmm_ff7fffff000000000000000000000000;
  accumulatedSurfBounds.halfSize.v[1] = FLOAT_N3_4028235e38;
  accumulatedSurfBounds.halfSize.v[2] = FLOAT_N3_4028235e38;
  renderFeatures = GFX_VIEW_MTL_FEAT_NONE;
  sceneViewType = depthHack != 0 ? SCENE_VIEW_CAMERA_DEPTH_HACK : SCENE_VIEW_CAMERA;
  if ( !decalVolumeGridInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 355, ASSERT_TYPE_ASSERT, "(decalVolumeGridInfo)", (const char *)&queryFormat, "decalVolumeGridInfo") )
    __debugbreak();
  if ( rg.showXModelRanking && !depthHack && rg.showXModelRankingFilterMode != 1 )
    v92 = R_AddXModelToRankingStats(v14, v20, 1u);
  memset(&xmodelStats, 0, sizeof(xmodelStats));
  if ( rg.showXModelRemoteConsole && !depthHack && rg.showXModelRankingFilterMode != 1 )
    R_InitDebugXmodelStats(v14, 1u, v20, 1u, &xmodelStats);
  v77 = 0;
  if ( !v86 )
    goto LABEL_135;
  v22 = 0;
  while ( 1 )
  {
    v23 = *(_DWORD *)v19;
    if ( *(_DWORD *)v19 == -3 )
    {
      ++v17;
      v19 += 4;
      goto LABEL_129;
    }
    v24 = *Skins;
    if ( !*Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 383, ASSERT_TYPE_ASSERT, "(*material)", (const char *)&queryFormat, "*material") )
      __debugbreak();
    p1_low = LOWORD(v24->drawSurf.packed.p1);
    if ( (unsigned int)p1_low >= rgp.materialCount )
    {
      LODWORD(materialHandle) = rgp.materialCount;
      LODWORD(surfType) = LOWORD(v24->drawSurf.packed.p1);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
      {
        __debugbreak();
        v24 = *Skins;
      }
    }
    if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]) == v24 )
      break;
    v26.physicsLibrary = DB_GetXAssetMasterDefaultHeader(ASSET_TYPE_MATERIAL).physicsLibrary;
    p1 = v24->drawSurf.packed.p1;
    if ( (unsigned __int16)p1 != (unsigned __int16)v26.physicsLibrary[2].name )
    {
      v28 = (unsigned __int16)p1;
      if ( (unsigned __int16)p1 >= rgp.materialCount )
      {
        LODWORD(materialHandle) = rgp.materialCount;
        LODWORD(surfType) = (unsigned __int16)p1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
        {
          __debugbreak();
          v24 = *Skins;
        }
      }
      if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v28]) != v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 396, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( ( uint )( *material )->drawSurf.fields.materialSortedIndex ) == *material)", (const char *)&queryFormat, "R_GetSortedMaterial( ( uint )( *material )->drawSurf.fields.materialSortedIndex ) == *material") )
        __debugbreak();
      break;
    }
    R_WarnOncePerFrame(R_WARN_UNSORTED_MATERIAL_INDEX, v24->name);
LABEL_34:
    v22 = v77;
LABEL_130:
    v77 = ++v22;
    v81 = (Material **)++Skins;
    if ( v22 >= v86 )
      goto LABEL_134;
  }
  v29 = (Material **)Skins;
  v88 = (Material **)Skins;
  v82 = 96;
  if ( v94 )
  {
    modelMaterialOverrides = v94->modelMaterialOverrides;
    if ( modelMaterialOverrides )
    {
      v31 = 0i64;
      materialOverrideCount = modelMaterialOverrides->materialOverrideCount;
      if ( modelMaterialOverrides->materialOverrideCount )
      {
        materialOverride = modelMaterialOverrides->materialOverride;
        while ( 1 )
        {
          v34 = materialOverride[v31];
          if ( v34 )
          {
            originalMaterial = v34->originalMaterial;
            if ( v34->originalMaterial == *Skins )
            {
              overrideType = v34->overrideType;
              if ( overrideType != MATERIAL_OVERRIDETYPE_STICKER_REPLACE )
                break;
            }
          }
          v31 = (unsigned int)(v31 + 1);
          if ( (unsigned int)v31 >= materialOverrideCount )
            goto LABEL_49;
        }
        if ( overrideType != MATERIAL_OVERRIDETYPE_MATERIAL_REPLACE || (overrideMaterial = v34->overrideMaterial, originalMaterial->materialType == overrideMaterial->materialType) )
        {
          v41 = R_CopyMaterialOverrideToPhysicalMaterialData(v34, &outPhysicalMaterial[v31], &renderFeatures);
          if ( v41 >= 0x800 )
          {
            LODWORD(v31) = 96;
            R_WarnOncePerFrame(R_WARN_MATERIAL_OVERRIDE_OUT_OF_PHYSICAL_MATERIALS);
          }
          else
          {
            v101[v31] = rgp.physicalMaterialSortedIndex[v41];
          }
          v82 = v31;
          if ( (int)v31 < 96 )
          {
            v29 = &outPhysicalMaterial[(int)v31];
            v88 = v29;
          }
        }
        else
        {
          R_WarnOncePerFrame(R_WARN_MATERIAL_OVERRIDE_MISMATCHED_MATERIAL, originalMaterial->name, overrideMaterial->name);
          v82 = 96;
        }
      }
    }
  }
LABEL_49:
  v37 = (const XSurface *)*((_QWORD *)v19 + 7);
  if ( v19[54] && R_SurfaceHasSubdivision(*((const XSurface **)v19 + 7)) )
  {
    v38 = SF_XMODEL_RIGID_SUBDIV;
    if ( v23 <= -4 )
      ModelRigidSurfaceSize = R_GetModelRigidSurfaceSize((const GfxModelRigidSurface *)v19);
    else
      ModelRigidSurfaceSize = 108i64;
  }
  else
  {
    v38 = SF_BEGIN_XMODEL;
    if ( *(int *)v19 > -4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 226, ASSERT_TYPE_ASSERT, "(R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset ))", (const char *)&queryFormat, "R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset )") )
      __debugbreak();
    v42 = -3 - *(_DWORD *)v19;
    if ( v42 > 128 )
    {
      LODWORD(v76) = 128;
      LODWORD(v75) = -3 - *(_DWORD *)v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", v75, v76) )
        __debugbreak();
    }
    ModelRigidSurfaceSize = 32i64 * (unsigned int)v42 + 76;
  }
  v43 = *v29;
  if ( SLOBYTE((*v29)->surfaceFlags) < 0 )
    goto LABEL_128;
  cameraRegion = v43->cameraRegion;
  if ( cameraRegion - 2 <= 1 && (unsigned int)(r_drawTransDecalSurfs->current.integer - 3) <= 1 || cameraRegion <= 1 && (unsigned int)(r_drawOpaqueSurfs->current.integer - 3) <= 1 )
  {
    Skins = v81;
    goto LABEL_34;
  }
  v45 = 0;
  if ( !depthHack )
  {
LABEL_82:
    if ( (renderFlags & 2) != 0 )
    {
      v45 = (v43->drawSurf.packed.p1 & 0x180000) == 0x100000i64;
      goto LABEL_84;
    }
    goto LABEL_93;
  }
  if ( cameraRegion - 2 > 1 )
  {
    if ( !v43->cameraRegion )
    {
      cameraRegion = 5;
      goto LABEL_84;
    }
    if ( cameraRegion == 1 )
    {
      cameraRegion = 7;
      goto LABEL_84;
    }
    goto LABEL_82;
  }
  cameraRegion = 6;
LABEL_84:
  if ( (renderFlags & 2) != 0 )
  {
    if ( cameraRegion )
    {
      switch ( cameraRegion )
      {
        case 5u:
          cameraRegion = 8;
          break;
        case 1u:
          cameraRegion = 11;
          break;
        case 7u:
          cameraRegion = 9;
          break;
      }
    }
    else
    {
      cameraRegion = 10;
    }
  }
LABEL_93:
  v46 = lightingInfo;
  if ( !lightingInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 486, ASSERT_TYPE_ASSERT, "(lightingInfo)", (const char *)&queryFormat, "lightingInfo") )
      __debugbreak();
    v46 = NULL;
  }
  *((GfxModelLightingProbeInfo *)v19 + 5) = (GfxModelLightingProbeInfo)v46->lgv.allocatedVolumeInfoSlot;
  *((_WORD *)v19 + 9) = mapEntLookup;
  *((GfxModelDecalVolumeGridInfo *)v19 + 6) = (GfxModelDecalVolumeGridInfo)decalVolumeGridInfo->allocatedVolumeInfoSlot;
  if ( (unsigned int)val >= 0x1000000 )
  {
    LODWORD(materialHandle) = 0x1000000;
    LODWORD(surfType) = val;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 494, ASSERT_TYPE_ASSERT, "(unsigned)( surfId ) < (unsigned)( 1 << 24 )", "surfId doesn't index 1 << MTL_SORT_OBJECT_ID_BITS\n\t%i not in [0, %i)", surfType, materialHandle) )
      __debugbreak();
  }
  v47 = *v81;
  v48.fields = (GfxDrawSurfFields)(*v81)->drawSurf;
  *(_QWORD *)&v93 = v48.packed.p0;
  v49 = (__int64)depthHack << 27;
  v50 = v48.packed.p0 & 0xE000000003FFFFFFui64 | ((val & 0xFFFFFF | ((unsigned __int64)v90 << 24)) << 26);
  *((_QWORD *)&v93 + 1) = v48.packed.p1 & 0xFFFFFFFE005FFFFFui64 | (v48.packed.p1 - v49) & 0x1F8000000i64 | ((depthHack & 1 | (4i64 * (unsigned int)v38)) << 21);
  if ( v82 < 96 )
  {
    v51 = v48.packed.p1 & 0xFFFFFFFE005F0000ui64 | ((depthHack & 1 | (4i64 * (unsigned int)v38)) << 21) & 0xFFFFFFFE07FF0000ui64 | outPhysicalMaterial[v82]->drawSurf.packed.p1 & 0x1F8000000i64 | LOWORD(v101[v82]);
    *((_QWORD *)&v93 + 1) = v51 ^ (v51 ^ (v51 - v49)) & 0x1F8000000i64;
  }
  if ( !rg.distortion && Material_HasDistortion(v47) )
    goto LABEL_127;
  if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 524, ASSERT_TYPE_ASSERT, "(xsurf)", (const char *)&queryFormat, "xsurf") )
    __debugbreak();
  if ( !R_UGB_UpdateXSurfDataFromXSurf(v37) )
  {
LABEL_127:
    v17 = val;
LABEL_128:
    v17 += ModelRigidSurfaceSize >> 2;
    v22 = v77;
    Skins = v81;
    v19 += ModelRigidSurfaceSize;
LABEL_129:
    val = v17;
    goto LABEL_130;
  }
  v52 = truncate_cast<unsigned int,unsigned __int64>(val);
  *(_QWORD *)&v93 = v50 & 0xFFFFFFFFFC0003FFui64 | ((unsigned __int64)R_AllocGPUBatchIndexXModel(0, sceneViewType, NULL, v19, v52, v38, v81) << 10);
  v53 = (__int64)v95;
  v54 = v95[cameraRegion];
  if ( v54 < lastDrawSurfs[cameraRegion] )
  {
    v55 = v93;
    v54->fields = (GfxDrawSurfFields)v93;
    *(_QWORD *)(v53 + 8i64 * cameraRegion) += 16i64;
    if ( v45 )
    {
      *(_OWORD *)*(_QWORD *)(v53 + 96) = v55;
      *(_QWORD *)(v53 + 96) += 16i64;
    }
    v56 = 1;
    v79 = 1;
    if ( v38 == SF_XMODEL_RIGID_SUBDIV )
    {
      v57 = *(__int128 **)(v53 + 8i64 * cameraRegion);
      if ( v57 >= (__int128 *)lastDrawSurfs[cameraRegion] )
      {
        R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddXModelSurfacesCamera", cameraRegion);
        v20 = v83;
        v16 = v89;
        v14 = v91;
        goto LABEL_136;
      }
      *v57 = v55;
      *(_QWORD *)(*(_QWORD *)(v53 + 8i64 * cameraRegion) + 8i64) = *(_QWORD *)(*(_QWORD *)(v53 + 8i64 * cameraRegion) + 8i64) & 0xFFFFFFFFF87FFFFFui64 | 0x5000000;
      *(_QWORD *)(v53 + 8i64 * cameraRegion) += 16i64;
    }
    if ( r_showTriCounts->current.enabled )
    {
      v80 += R_GetModelSurfaceXSurface(v19, v38)->triCount;
    }
    else if ( r_showVertCounts->current.enabled )
    {
      ModelSurfaceXSurface = R_GetModelSurfaceXSurface(v19, v38);
      v85 += ModelSurfaceXSurface->vertCount;
    }
    if ( rg.showXModelRanking && !depthHack && rg.showXModelRankingFilterMode != 1 )
    {
      v59 = R_GetModelSurfaceXSurface(v19, v38);
      R_AddXSurfaceToXModelStats(v59, v92);
    }
    if ( rg.showXModelRemoteConsole && !depthHack && rg.showXModelRankingFilterMode != 1 )
    {
      v60 = R_GetModelSurfaceXSurface(v19, v38);
      R_AddXSurfaceToXModelStats(v60, &xmodelStats);
    }
    surfBounds.halfSize = v37->surfBounds.halfSize;
    v61 = v89;
    surfBounds.midPoint.v[0] = v89->v[0] + v37->surfBounds.midPoint.v[0];
    surfBounds.midPoint.v[1] = v89->v[1] + v37->surfBounds.midPoint.v[1];
    surfBounds.midPoint.v[2] = v89->v[2] + v37->surfBounds.midPoint.v[2];
    R_AccumulateSurfBounds(&surfBounds, &accumulatedSurfBounds);
    v62 = Material_FromHandle(*v88);
    R_AccumulateMaterialRenderTechflags(v62, &renderFeatures, v61);
    goto LABEL_127;
  }
  R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddXModelSurfacesCamera", cameraRegion);
LABEL_134:
  v14 = v91;
  v16 = v89;
  v20 = v83;
LABEL_135:
  v56 = v79;
LABEL_136:
  if ( rg.showXModelRemoteConsole )
  {
    if ( !depthHack )
    {
      if ( rg.showXModelRankingFilterMode != 1 )
        R_PrintDebugXModelStats(&xmodelStats);
      goto LABEL_140;
    }
LABEL_141:
    R_UpdateViewSurfaceBounds(&accumulatedSurfBounds, sceneViewType);
  }
  else
  {
LABEL_140:
    if ( depthHack )
      goto LABEL_141;
  }
  R_UpdateViewMaterialRenderTechflags(&renderFeatures);
  if ( r_showModelNames->current.enabled )
    R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, v16, &colorCyan, v14->name);
  integer = r_showModelLODs->current.integer;
  if ( integer && 6 - integer >= v20 )
  {
    v64 = j_va("%u", v20);
    R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, v16, &colorCyan, v64);
  }
  if ( r_showModelLODOutDist->current.enabled )
  {
    v65 = v14->numLods - 1;
    v66 = j_va("[%u] %d", v65, (unsigned int)(int)v14->lodInfo[(unsigned __int64)v65].dist);
    v67 = &colorCyan;
    if ( v20 == v65 )
      v67 = &colorYellow;
    R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, v16, v67, v66);
  }
  if ( r_showTriCounts->current.enabled && v80 )
  {
    v68 = v80;
    goto LABEL_159;
  }
  if ( r_showVertCounts->current.enabled && (v69 = v85) != 0 || r_showSurfCounts->current.enabled && (v69 = v86) != 0 )
  {
    v68 = v69;
LABEL_159:
    v70 = j_va("%i", v68);
    R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, v16, &colorCyan, v70);
  }
  v71 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v71);
  if ( v71->current.integer >= 3 && rg.stats )
    rg.stats->numXModelTriCount += v80;
  Profile_EndInternal(NULL);
  return v56;
}

/*
==============
R_CopyMaterialOverrideToPhysicalMaterialData
==============
*/
__int64 R_CopyMaterialOverrideToPhysicalMaterialData(MaterialOverride *materialOverride, Material **outPhysicalMaterial, GfxViewMaterialRenderFeatures *renderFeatures)
{
  Material **p_originalMaterial; 
  Material *v7; 
  const Material *v9; 
  unsigned __int32 v10; 
  const char *v11; 
  int v12; 
  const char *v13; 
  unsigned int v14; 
  Material *MaterialAtIndex; 
  Material *v16; 
  unsigned __int8 sortKey; 
  unsigned int textureCount; 
  signed __int32 v21; 
  __int64 v22; 
  MaterialTextureDef *v23; 

  if ( !materialOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 92, ASSERT_TYPE_ASSERT, "(materialOverride)", (const char *)&queryFormat, "materialOverride") )
    __debugbreak();
  if ( materialOverride->overrideType == MATERIAL_OVERRIDETYPE_CAMO || (p_originalMaterial = &materialOverride->overrideMaterial, materialOverride->overrideType != MATERIAL_OVERRIDETYPE_MATERIAL_REPLACE) )
    p_originalMaterial = &materialOverride->originalMaterial;
  v7 = *p_originalMaterial;
  if ( !v7 )
  {
    Com_Printf(8, "WARNING: Material override type of %d doesn't specify a valid material to instance.\n", (unsigned int)materialOverride->overrideType);
    return 2048i64;
  }
  if ( v7->materialType != materialOverride->originalMaterial->materialType )
  {
    Com_Printf(8, "WARNING: Trying to override material %s, with material %s, but the types don't match.\n", materialOverride->originalMaterial->name, v7->name);
    return 2048i64;
  }
  v9 = Material_FromHandle(v7);
  R_AccumulateMaterialRenderTechflags(v9, renderFeatures, &tmpOrg);
  if ( ((unsigned __int8)&rgp.materialOverridePhysicalMaterialIndex & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &rgp.materialOverridePhysicalMaterialIndex) )
    __debugbreak();
  v10 = _InterlockedExchangeAdd(&rgp.materialOverridePhysicalMaterialIndex, 1u);
  if ( v10 < 0x400 )
  {
    v14 = v10 + (rgp.materialOverridePhysicalBucketIndex << 10);
    if ( v14 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 145, ASSERT_TYPE_ASSERT, "(physicalMaterialIndex < MAX_OVERRIDE_PHYSICAL_MATERIALS)", (const char *)&queryFormat, "physicalMaterialIndex < MAX_OVERRIDE_PHYSICAL_MATERIALS") )
      __debugbreak();
    MaterialAtIndex = DB_GetMaterialAtIndex(v14);
    *outPhysicalMaterial = MaterialAtIndex;
    v16 = MaterialAtIndex;
    _XMM2.fields = (GfxDrawSurfFields)MaterialAtIndex->drawSurf;
    sortKey = MaterialAtIndex->sortKey;
    *MaterialAtIndex = *v7;
    textureCount = MaterialAtIndex->textureCount;
    MaterialAtIndex->sortKey = sortKey;
    __asm { vpextrq rax, xmm2, 1 }
    LOWORD(v16->drawSurf.packed.p1) = _RAX;
    if ( ((unsigned __int8)&rgp.materialOverrideTextureTableIndex & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &rgp.materialOverrideTextureTableIndex) )
      __debugbreak();
    v21 = _InterlockedExchangeAdd(&rgp.materialOverrideTextureTableIndex, textureCount);
    v22 = v16->textureCount;
    if ( (unsigned int)(v21 + v22) < 0x1800 )
    {
      v23 = &rgp.materialOverrideTextureTable[v21 + 6144 * rgp.materialOverrideTextureTableBucketIndex];
      v16->textureTable = v23;
      memcpy_0(v23, materialOverride->materialTextureDefClone, 16 * v22);
      return v14;
    }
    v11 = "textureTableUsedCount < MAX_OVERRIDE_TEXTURE_TABLE_ENTRIES_PER_BUFFER";
    v12 = 168;
    v13 = "(textureTableUsedCount < MAX_OVERRIDE_TEXTURE_TABLE_ENTRIES_PER_BUFFER)";
  }
  else
  {
    v11 = "materialOverrideCount < MAX_OVERRIDE_PHYSICAL_MATERIALS_PER_BUFFER";
    v12 = 137;
    v13 = "(materialOverrideCount < MAX_OVERRIDE_PHYSICAL_MATERIALS_PER_BUFFER)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", v12, ASSERT_TYPE_ASSERT, v13, (const char *)&queryFormat, v11) )
    __debugbreak();
  return 2048i64;
}

