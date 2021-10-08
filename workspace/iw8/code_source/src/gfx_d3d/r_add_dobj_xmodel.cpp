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
  unsigned int v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  const XModel *Model; 
  const XModelLodInfo *LodInfo; 
  unsigned __int16 surfIndex; 
  unsigned __int16 numsurfs; 
  unsigned __int16 v24; 
  unsigned __int16 v25; 
  int v26; 
  Material **Skins; 
  const GfxModelRigidSurface *v28; 
  __int64 ModelRigidSurfaceSize; 
  surfaceType_t v31; 
  __int64 v32; 
  int v33; 
  Material *v34; 
  __int64 p1_low; 
  XAssetHeader v36; 
  int p1; 
  __int64 v38; 
  Material *v39; 
  const MaterialTechniqueSet *techniqueSet; 
  unsigned __int64 v41; 
  unsigned __int64 v42; 
  unsigned __int64 v47; 
  unsigned __int64 v48; 
  unsigned int v49; 
  __int64 surfType; 
  Material **materialHandle; 
  __int64 v64; 
  __int64 v65; 
  bool enabled; 
  Material **v68; 
  int NumModels; 
  unsigned int v70; 
  unsigned int v71; 
  GfxModelRigidSurface *modelSurf; 
  unsigned int v74; 
  bitarray_base<bitarray<256> > *v75; 
  GfxDrawSurf *v76; 
  unsigned int v77; 
  int v78; 
  unsigned int v79; 
  __int64 v80; 
  __int64 v81; 
  __int128 v82; 
  vec3_t outOrigin; 
  GfxDrawSurf *v84; 
  __int64 v85; 
  XSurface *surfs; 
  __int64 v87; 
  Bounds surfBounds; 
  Bounds accumulatedSurfBounds; 

  v87 = -2i64;
  v84 = lastDrawSurf;
  v5 = drawSurf;
  v76 = drawSurf;
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
    v75 = (bitarray_base<bitarray<256> > *)obj;
    if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1305, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    NumModels = DObjGetNumModels(obj);
    v77 = *((_DWORD *)sceneEnt + 347) & 1;
    v78 = *((_DWORD *)sceneEnt + 346) & 0x3FF;
    v12 = sceneViewType;
    v13 = sceneViewType - 1;
    __asm
    {
      vmovups xmm0, cs:__xmm@ff7fffff000000000000000000000000
      vmovups xmmword ptr [rbp+60h+accumulatedSurfBounds.midPoint], xmm0
      vmovss  xmm1, cs:__real@ff7fffff
      vmovss  dword ptr [rbp+60h+accumulatedSurfBounds.halfSize+4], xmm1
      vmovss  dword ptr [rbp+60h+accumulatedSurfBounds.halfSize+8], xmm1
    }
    v16 = 0;
    v70 = 0;
    if ( NumModels )
    {
      v17 = 0i64;
      v85 = 0i64;
      v18 = NumModels;
      do
      {
        v19 = v10->lods[v17];
        if ( v19 != 6 )
        {
          Model = DObjGetModel(obj, v16);
          if ( !Model )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1337, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 296, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
          }
          LodInfo = XModelGetLodInfo(Model, v19);
          if ( !LodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 300, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
            __debugbreak();
          if ( LodInfo->numsurfs )
          {
            surfIndex = LodInfo->surfIndex;
            numsurfs = Model->numsurfs;
            v24 = numsurfs;
            if ( surfIndex >= numsurfs )
            {
              LODWORD(materialHandle) = numsurfs;
              LODWORD(surfType) = surfIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 303, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", surfType, materialHandle) )
                __debugbreak();
            }
            if ( LodInfo->numsurfs + (unsigned int)LodInfo->surfIndex > v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 304, ASSERT_TYPE_ASSERT, "(lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs)", (const char *)&queryFormat, "lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs") )
              __debugbreak();
            if ( !LodInfo->surfs )
            {
              LODWORD(v64) = v19;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 310, ASSERT_TYPE_ASSERT, "(lodInfo->surfs)", "%s\n\tModel missing surfs : %s,%u. Perhaps you need to check XModelIsLodUsable()?", "lodInfo->surfs", Model->name, v64) )
                __debugbreak();
            }
            if ( !LodInfo->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 311, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
              __debugbreak();
            surfs = LodInfo->surfs;
            v25 = LodInfo->numsurfs;
            v6 = techType;
          }
          else
          {
            surfs = NULL;
            v25 = 0;
          }
          v26 = v25;
          v79 = v25;
          if ( v19 < Model->shadowCutoffLod )
          {
            if ( !enabled || (v80 = 1i64, !bitarray_base<bitarray<256>>::testBit(v75 + 304, v16)) )
              v80 = 0i64;
          }
          else
          {
            if ( v6 != TECHNIQUE_BUILD_SHADOWMAP_DEPTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1345, ASSERT_TYPE_ASSERT, "(techType == TECHNIQUE_BUILD_SHADOWMAP_DEPTH)", (const char *)&queryFormat, "techType == TECHNIQUE_BUILD_SHADOWMAP_DEPTH") )
              __debugbreak();
            v80 = 1i64;
          }
          if ( v26 )
          {
            Skins = (Material **)XModelGetSkins(Model, v19);
            v68 = Skins;
            if ( !Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1366, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
              __debugbreak();
          }
          else
          {
            Skins = NULL;
            v68 = NULL;
          }
          v74 = 0;
          if ( v26 )
          {
            v28 = modelSurf;
            while ( 1 )
            {
              v71 = 15;
              if ( v28->base.skinnedCachedOffset <= -4 )
                break;
              if ( v28->base.skinnedCachedOffset != -3 )
              {
                _R13 = v28->xsurf;
                if ( v28->base.subdivLodLevel && R_SurfaceHasSubdivision(v28->xsurf) )
                {
                  v31 = SF_XMODEL_SKINNED_SUBDIV;
                  v71 = 11;
                  v32 = 11i64;
                  ModelRigidSurfaceSize = 136i64;
                }
                else
                {
                  v31 = SF_XMODEL_SKINNED;
                  v32 = 15i64;
                  ModelRigidSurfaceSize = 136i64;
                }
                goto LABEL_66;
              }
              ModelRigidSurfaceSize = 4i64;
LABEL_111:
              ++v74;
              v68 = ++Skins;
              v28 = (const GfxModelRigidSurface *)((char *)v28 + ModelRigidSurfaceSize);
              modelSurf = (GfxModelRigidSurface *)v28;
              if ( v74 >= v79 )
              {
                v16 = v70;
                goto LABEL_113;
              }
            }
            _R13 = v28->xsurf;
            if ( v28->base.subdivLodLevel && R_SurfaceHasSubdivision(v28->xsurf) )
            {
              v31 = SF_XMODEL_RIGID_SUBDIV;
              v71 = 10;
              ModelRigidSurfaceSize = R_GetModelRigidSurfaceSize(v28);
              v32 = 10i64;
            }
            else
            {
              v31 = SF_BEGIN_XMODEL;
              if ( v28->base.skinnedCachedOffset > -4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 226, ASSERT_TYPE_ASSERT, "(R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset ))", (const char *)&queryFormat, "R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset )") )
                __debugbreak();
              v33 = -3 - v28->base.skinnedCachedOffset;
              if ( v33 > 128 )
              {
                LODWORD(v65) = 128;
                LODWORD(v64) = -3 - v28->base.skinnedCachedOffset;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", v64, v65) )
                  __debugbreak();
              }
              ModelRigidSurfaceSize = 32i64 * (unsigned int)v33 + 76;
              v32 = 15i64;
            }
LABEL_66:
            v34 = *Skins;
            if ( !*Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1425, ASSERT_TYPE_ASSERT, "(*material)", (const char *)&queryFormat, "*material") )
              __debugbreak();
            p1_low = LOWORD(v34->drawSurf.packed.p1);
            if ( (unsigned int)p1_low >= rgp.materialCount )
            {
              LODWORD(materialHandle) = rgp.materialCount;
              LODWORD(surfType) = LOWORD(v34->drawSurf.packed.p1);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
              {
                __debugbreak();
                v34 = *v68;
              }
            }
            if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]) != v34 )
            {
              v36.physicsLibrary = DB_GetXAssetMasterDefaultHeader(ASSET_TYPE_MATERIAL).physicsLibrary;
              p1 = v34->drawSurf.packed.p1;
              if ( (unsigned __int16)p1 == (unsigned __int16)v36.physicsLibrary[2].name )
              {
                R_WarnOncePerFrame(R_WARN_UNSORTED_MATERIAL_INDEX, v34->name);
LABEL_110:
                Skins = v68;
                goto LABEL_111;
              }
              v38 = (unsigned __int16)p1;
              v39 = v34;
              if ( (unsigned __int16)p1 >= rgp.materialCount )
              {
                LODWORD(materialHandle) = rgp.materialCount;
                LODWORD(surfType) = (unsigned __int16)p1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
                {
                  __debugbreak();
                  v39 = *v68;
                }
              }
              v34 = v39;
              if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v38]) != v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1438, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( ( uint )( *material )->drawSurf.fields.materialSortedIndex ) == *material)", (const char *)&queryFormat, "R_GetSortedMaterial( ( uint )( *material )->drawSurf.fields.materialSortedIndex ) == *material") )
              {
                __debugbreak();
                v34 = *v68;
              }
              v28 = modelSurf;
            }
            if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 464, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
              __debugbreak();
            if ( !v34->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 465, ASSERT_TYPE_ASSERT, "( ( material->techniqueSet ) )", "( material->name ) = %s", v34->name) )
              __debugbreak();
            techniqueSet = v34->techniqueSet;
            if ( !techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 515, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
              __debugbreak();
            v6 = techType;
            if ( Material_TechSetHasTechnique(techniqueSet, techType) )
            {
              if ( v76 >= v84 )
              {
                R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddDObjSurfaces");
                v10 = sceneEnt;
                v16 = v70;
                goto LABEL_115;
              }
              if ( !v80 )
              {
                v41 = truncate_cast<unsigned __int64,__int64>((char *)v28 - (char *)frontEndDataOut - 1789440);
                if ( (v41 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1460, ASSERT_TYPE_ASSERT, "(!( surfId & 3 ))", (const char *)&queryFormat, "!( surfId & 3 )") )
                  __debugbreak();
                v42 = v41 >> 2;
                if ( (unsigned int)v42 >= 0x1000000 )
                {
                  LODWORD(materialHandle) = 0x1000000;
                  LODWORD(surfType) = v42;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1462, ASSERT_TYPE_ASSERT, "(unsigned)( surfId ) < (unsigned)( 1 << 24 )", "surfId doesn't index 1 << MTL_SORT_OBJECT_ID_BITS\n\t%i not in [0, %i)", surfType, materialHandle) )
                    __debugbreak();
                }
                _RAX = *v68;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rax+28h]
                  vmovups [rbp+60h+var_B0], xmm0
                }
                v81 = _RT0;
                __asm { vpextrq rcx, xmm0, 1 }
                v47 = _RCX & 0xFFFFFFFE007FFFFFui64 | ((unsigned __int64)(unsigned int)v31 << 23) | (_RCX - ((unsigned __int64)v77 << 27)) & 0x1F8000000i64 | 0x200000;
                *((_QWORD *)&v82 + 1) = v47;
                v48 = v81 & 0xF000000003FFFFFFui64 | ((v42 & 0xFFFFFF) << 26) | -(__int64)(v78 != 0) & 0x4000000000000i64;
                *(_QWORD *)&v82 = v48;
                if ( R_UGB_UpdateXSurfDataFromXSurf(_R13) )
                {
                  if ( techType == TECHNIQUE_BUILD_SHADOWMAP_DEPTH )
                  {
                    v49 = truncate_cast<unsigned int,unsigned __int64>(v42);
                    v10 = sceneEnt;
                    *(_QWORD *)&v82 = v48 & 0xFFFFFFFFFC0003FFui64 | ((unsigned __int64)R_AllocGPUBatchIndexXModel(1u, sceneViewType, sceneEnt, modelSurf, v49, v31, v68) << 10);
                  }
                  else
                  {
                    v10 = sceneEnt;
                  }
                  __asm { vmovups xmm0, [rbp+60h+var_B0] }
                  _R12 = v76;
                  __asm { vmovups xmmword ptr [r12], xmm0 }
                  _R12 = (unsigned __int64)&v76[1];
                  ++v76;
                  if ( v71 < 0xF )
                  {
                    if ( _R12 >= (unsigned __int64)v84 )
                    {
                      R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddDObjSurfaces");
                      v16 = v70;
                      goto LABEL_114;
                    }
                    *((_QWORD *)&v82 + 1) = v47 & 0xFFFFFFFFF87FFFFFui64 | (v32 << 23);
                    __asm
                    {
                      vmovups xmm0, [rbp+60h+var_B0]
                      vmovups xmmword ptr [r12], xmm0
                    }
                    v76 = (GfxDrawSurf *)(_R12 + 16);
                  }
                  if ( (unsigned int)(sceneViewType - 1) <= 2 )
                  {
                    GfxSceneEntity_GetPlacementOrigin(v10, &outOrigin);
                    __asm
                    {
                      vmovsd  xmm0, qword ptr [r13+9Ch]
                      vmovsd  qword ptr [rbp+60h+surfBounds.halfSize], xmm0
                    }
                    surfBounds.halfSize.v[2] = _R13->surfBounds.halfSize.v[2];
                    __asm
                    {
                      vmovss  xmm0, dword ptr [rbp+60h+outOrigin]
                      vaddss  xmm1, xmm0, dword ptr [r13+90h]
                      vmovss  dword ptr [rbp+60h+surfBounds.midPoint], xmm1
                      vmovss  xmm2, dword ptr [rbp+60h+outOrigin+4]
                      vaddss  xmm0, xmm2, dword ptr [r13+94h]
                      vmovss  dword ptr [rbp+60h+surfBounds.midPoint+4], xmm0
                      vmovss  xmm1, dword ptr [rbp+60h+outOrigin+8]
                      vaddss  xmm2, xmm1, dword ptr [r13+98h]
                      vmovss  dword ptr [rbp+60h+surfBounds.midPoint+8], xmm2
                    }
                    R_AccumulateSurfBounds(&surfBounds, &accumulatedSurfBounds);
                    memset(&outOrigin, 0, sizeof(outOrigin));
                  }
                }
                v28 = modelSurf;
              }
            }
            goto LABEL_110;
          }
LABEL_113:
          v10 = sceneEnt;
LABEL_114:
          v6 = techType;
LABEL_115:
          v18 = NumModels;
          obj = (const DObj *)v75;
        }
        v70 = ++v16;
        v17 = ++v85;
      }
      while ( v16 < v18 );
      v5 = v76;
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
  const dvar_t *v11; 
  unsigned int v12; 
  _BYTE *firstSurf; 
  unsigned int v15; 
  const DObj *v16; 
  GfxSceneViewType v19; 
  unsigned int v20; 
  unsigned int v24; 
  const XModelLodInfo *LodInfo; 
  unsigned __int16 surfIndex; 
  unsigned __int16 numsurfs; 
  unsigned __int16 v32; 
  unsigned __int16 v33; 
  int v34; 
  Material **Skins; 
  __int64 v36; 
  Material **v37; 
  XModelMaterialOverride *modelMaterialOverrides; 
  int v39; 
  unsigned int materialOverrideCount; 
  __int64 v41; 
  __int64 v42; 
  Material *v43; 
  int v44; 
  __int64 v45; 
  unsigned int v46; 
  __int64 v47; 
  XSurface *ModelSurfaceXSurface; 
  surfaceType_t v49; 
  __int64 v50; 
  XSurface *v51; 
  int v52; 
  Material *v53; 
  __int64 p1_low; 
  XAssetHeader v55; 
  int p1; 
  __int64 v57; 
  Material *v58; 
  unsigned int cameraRegion; 
  bool v60; 
  const GfxModelLightingProbeInfo *v61; 
  unsigned __int64 v62; 
  unsigned __int64 v63; 
  unsigned __int64 v67; 
  __int64 v69; 
  unsigned __int64 v70; 
  unsigned int v71; 
  GfxModelDecalVolumeGridInfo *v72; 
  __int64 v73; 
  const Material *v86; 
  unsigned __int8 ModelRootBoneIndex; 
  int integer; 
  const char *v96; 
  unsigned int v97; 
  const char *v99; 
  const vec4_t *v100; 
  __int64 v102; 
  const char *v103; 
  const dvar_t *v104; 
  __int64 result; 
  __int64 surfType; 
  Material **materialHandle; 
  double v112; 
  __int64 v113; 
  __int64 v114; 
  char v115; 
  signed int v116; 
  bool enabled; 
  GfxModelDecalVolumeGridInfo *modelSurf; 
  unsigned int lod; 
  DObj *obj; 
  int v122; 
  unsigned int v123; 
  unsigned int v124; 
  int v125; 
  unsigned int v126; 
  GfxViewMaterialRenderFeatures renderFeatures; 
  unsigned int v128; 
  GfxModelDecalVolumeGridInfo decalVolumeGridInfo; 
  unsigned int v130; 
  unsigned int v131; 
  GfxSceneViewType sceneViewType; 
  unsigned int v133; 
  Material **v134; 
  __int64 v135; 
  vec3_t origin; 
  int v137; 
  unsigned int dobjIndex; 
  XSurface *xsurf; 
  const XModel *v140; 
  unsigned int NumModels; 
  vec3_t outOrigin; 
  __int128 v143; 
  vec3_t v144; 
  vec3_t v145; 
  Material **v146; 
  GfxViewInfo *viewInfoa; 
  XSurface *surfs; 
  const GfxModelLightingProbeInfo *v149; 
  GfxDrawSurf **v150; 
  __int64 i; 
  __int64 v152; 
  Bounds surfBounds; 
  GfxPlacement placement; 
  Bounds accumulatedSurfBounds; 
  DObjAnimMat outMat; 
  int v157[96]; 
  Material *outPhysicalMaterial[97]; 
  char v159; 
  void *retaddr; 

  _RAX = &retaddr;
  v152 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v149 = lightingInfo;
  dobjIndex = sceneEntIndex;
  _RBX = sceneEnt;
  viewInfoa = (GfxViewInfo *)viewInfo;
  v150 = drawSurfs;
  Profile_Begin(97);
  v11 = DVARBOOL_dobj_hide_models_with_root_meld_failure;
  if ( !DVARBOOL_dobj_hide_models_with_root_meld_failure && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dobj_hide_models_with_root_meld_failure") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  enabled = v11->current.enabled;
  v12 = 0;
  v133 = 0;
  firstSurf = _RBX->cull.skinnedSurfs.firstSurf;
  modelSurf = (GfxModelDecalVolumeGridInfo *)firstSurf;
  if ( firstSurf )
  {
    _RSI = 0i64;
    v125 = 0;
    v15 = 0;
    v126 = 0;
    v128 = 0;
    v16 = _RBX->obj;
    obj = (DObj *)v16;
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 887, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    NumModels = DObjGetNumModels(v16);
    v130 = *((_DWORD *)_RBX + 347) & 1;
    v137 = *((_DWORD *)_RBX + 346) & 0x3FF;
    __asm
    {
      vmovups xmm0, cs:__xmm@ff7fffff000000000000000000000000
      vmovups xmmword ptr [rbp+5D0h+accumulatedSurfBounds.midPoint], xmm0
      vmovss  xmm1, cs:__real@ff7fffff
      vmovss  dword ptr [rbp+5D0h+accumulatedSurfBounds.halfSize+4], xmm1
      vmovss  dword ptr [rbp+5D0h+accumulatedSurfBounds.halfSize+8], xmm1
    }
    renderFeatures = GFX_VIEW_MTL_FEAT_NONE;
    v19 = 32 * v130;
    sceneViewType = 32 * v130;
    v20 = 0;
    v116 = 0;
    if ( NumModels )
    {
      v135 = 0i64;
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vmovss  xmm7, cs:__real@4b800000
        vmovss  xmm8, cs:__real@4f800000
      }
      while ( 1 )
      {
        if ( !enabled )
          goto LABEL_15;
        if ( v20 >= 0x100 )
        {
          LODWORD(materialHandle) = 256;
          LODWORD(surfType) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", surfType, materialHandle) )
            __debugbreak();
        }
        v115 = 1;
        if ( ((0x80000000 >> (v20 & 0x1F)) & v16->modelHasBadRootBoneMeld.array[(unsigned __int64)v20 >> 5]) == 0 )
LABEL_15:
          v115 = 0;
        v24 = _RBX->lods[_RSI];
        lod = v24;
        if ( v24 == 6 )
          goto LABEL_180;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+rsi*4+170h]
          vcvttss2si rdi, xmm0
          vcomiss xmm0, xmm6
        }
        if ( v24 >= 6 )
          __asm { vcomiss xmm0, xmm7 }
        __asm
        {
          vcomiss xmm0, xmm6
          vcomiss xmm0, xmm8
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+6D0h+var_698], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned int __cdecl float_to_integral_cast<unsigned int,float>(float)", (unsigned int)_RDI, v112) )
          __debugbreak();
        if ( (unsigned int)_RDI > 1 )
        {
          LODWORD(v114) = 1;
          LODWORD(v113) = _RDI;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 201, ASSERT_TYPE_ASSERT, "( retVal ) <= ( MAX_MATERIAL_LOD )", "%s <= %s\n\t%u, %u", "retVal", "MAX_MATERIAL_LOD", v113, v114) )
            __debugbreak();
        }
        _R14 = DObjGetModel(v16, v20);
        v140 = _R14;
        if ( !_R14 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 919, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 296, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
        }
        LodInfo = XModelGetLodInfo(_R14, lod);
        if ( !LodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 300, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
          __debugbreak();
        if ( LodInfo->numsurfs )
        {
          surfIndex = LodInfo->surfIndex;
          numsurfs = _R14->numsurfs;
          v32 = numsurfs;
          if ( surfIndex >= numsurfs )
          {
            LODWORD(materialHandle) = numsurfs;
            LODWORD(surfType) = surfIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 303, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", surfType, materialHandle) )
              __debugbreak();
          }
          if ( LodInfo->numsurfs + (unsigned int)LodInfo->surfIndex > v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 304, ASSERT_TYPE_ASSERT, "(lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs)", (const char *)&queryFormat, "lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs") )
            __debugbreak();
          if ( !LodInfo->surfs )
          {
            LODWORD(v113) = lod;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 310, ASSERT_TYPE_ASSERT, "(lodInfo->surfs)", "%s\n\tModel missing surfs : %s,%u. Perhaps you need to check XModelIsLodUsable()?", "lodInfo->surfs", _R14->name, v113) )
              __debugbreak();
          }
          if ( !LodInfo->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 311, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
            __debugbreak();
          surfs = LodInfo->surfs;
          v33 = LodInfo->numsurfs;
          _RBX = sceneEnt;
        }
        else
        {
          surfs = NULL;
          v33 = 0;
        }
        v124 = v33;
        if ( !v33 )
          goto LABEL_179;
        decalVolumeGridInfo.allocatedVolumeInfoSlot = 0xFFFF;
        v34 = v116;
        R_DecalVolumesGrid_PrepareVolumeInfo_SceneEnt(viewInfoa, dobjIndex, _RBX, v116, &decalVolumeGridInfo);
        Skins = (Material **)XModelGetSkins(_R14, lod);
        v134 = Skins;
        if ( !Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 934, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
          __debugbreak();
        v131 = 0;
        if ( !v124 )
          goto LABEL_162;
        v36 = 16i64 * v116;
        for ( i = v36; ; v36 = i )
        {
          v37 = Skins;
          v146 = Skins;
          v122 = 96;
          if ( v16 )
          {
            modelMaterialOverrides = v16->modelMaterialOverrides;
            if ( modelMaterialOverrides )
            {
              v39 = 0;
              materialOverrideCount = modelMaterialOverrides[v135].materialOverrideCount;
              if ( materialOverrideCount )
              {
                v41 = *(__int64 *)((char *)&modelMaterialOverrides->materialOverride + v36);
                while ( 1 )
                {
                  v42 = *(_QWORD *)(v41 + 8i64 * (unsigned int)v39);
                  if ( v42 )
                  {
                    v43 = *(Material **)v42;
                    if ( *(Material **)v42 == *Skins )
                    {
                      v44 = *(_DWORD *)(v42 + 24);
                      if ( v44 != 3 )
                        break;
                    }
                  }
                  if ( ++v39 >= materialOverrideCount )
                    goto LABEL_70;
                }
                if ( v44 != 2 || (v45 = *(_QWORD *)(v42 + 8), v43->materialType == *(_DWORD *)(v45 + 20)) )
                {
                  v46 = R_CopyMaterialOverrideToPhysicalMaterialData((MaterialOverride *)v42, &outPhysicalMaterial[v39], &renderFeatures);
                  if ( v46 >= 0x800 )
                  {
                    v39 = 96;
                    R_WarnOncePerFrame(R_WARN_MATERIAL_OVERRIDE_OUT_OF_PHYSICAL_MATERIALS);
                  }
                  else
                  {
                    v157[v39] = rgp.physicalMaterialSortedIndex[v46];
                  }
                  v122 = v39;
                  if ( v39 < 96 )
                  {
                    v37 = &outPhysicalMaterial[v39];
                    v146 = v37;
                  }
                }
                else
                {
                  R_WarnOncePerFrame(R_WARN_MATERIAL_OVERRIDE_MISMATCHED_MATERIAL, v43->name, *(_QWORD *)v45);
                  v122 = 96;
                }
              }
            }
          }
LABEL_70:
          if ( !Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 951, ASSERT_TYPE_ASSERT, "(actualMaterial)", (const char *)&queryFormat, "actualMaterial") )
            __debugbreak();
          v123 = 15;
          if ( *(int *)firstSurf <= -4 )
          {
            v51 = (XSurface *)*((_QWORD *)firstSurf + 7);
            xsurf = v51;
            if ( firstSurf[54] && R_SurfaceHasSubdivision(v51) )
            {
              v49 = SF_XMODEL_RIGID_SUBDIV;
              v123 = 10;
              v50 = 10i64;
            }
            else
            {
              v49 = SF_BEGIN_XMODEL;
              v50 = 15i64;
            }
            if ( *(int *)firstSurf > -4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 226, ASSERT_TYPE_ASSERT, "(R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset ))", (const char *)&queryFormat, "R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset )") )
              __debugbreak();
            v52 = -3 - *(_DWORD *)firstSurf;
            if ( v52 > 128 )
            {
              LODWORD(v114) = 128;
              LODWORD(v113) = -3 - *(_DWORD *)firstSurf;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", v113, v114) )
                __debugbreak();
            }
            v47 = 32i64 * (unsigned int)v52 + 76;
          }
          else
          {
            if ( *(_DWORD *)firstSurf == -3 )
            {
              v47 = 4i64;
              goto LABEL_157;
            }
            ModelSurfaceXSurface = (XSurface *)R_GetModelSurfaceXSurface(firstSurf, SF_XMODEL_SKINNED);
            xsurf = ModelSurfaceXSurface;
            if ( firstSurf[54] && R_SurfaceHasSubdivision(ModelSurfaceXSurface) )
            {
              v49 = SF_XMODEL_SKINNED_SUBDIV;
              v123 = 11;
              v50 = 11i64;
              v47 = 136i64;
            }
            else
            {
              v49 = SF_XMODEL_SKINNED;
              v50 = 15i64;
              v47 = 136i64;
            }
          }
          v53 = *Skins;
          if ( !*Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1002, ASSERT_TYPE_ASSERT, "(*actualMaterial)", (const char *)&queryFormat, "*actualMaterial") )
            __debugbreak();
          p1_low = LOWORD(v53->drawSurf.packed.p1);
          if ( (unsigned int)p1_low >= rgp.materialCount )
          {
            LODWORD(materialHandle) = rgp.materialCount;
            LODWORD(surfType) = LOWORD(v53->drawSurf.packed.p1);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
            {
              __debugbreak();
              v53 = *Skins;
            }
          }
          if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]) != v53 )
          {
            v55.physicsLibrary = DB_GetXAssetMasterDefaultHeader(ASSET_TYPE_MATERIAL).physicsLibrary;
            p1 = v53->drawSurf.packed.p1;
            if ( (unsigned __int16)p1 == (unsigned __int16)v55.physicsLibrary[2].name )
            {
              R_WarnOncePerFrame(R_WARN_UNSORTED_MATERIAL_INDEX, v53->name);
              goto LABEL_156;
            }
            v57 = (unsigned __int16)p1;
            if ( (unsigned __int16)p1 >= rgp.materialCount )
            {
              LODWORD(materialHandle) = rgp.materialCount;
              LODWORD(surfType) = (unsigned __int16)p1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
              {
                __debugbreak();
                v53 = *Skins;
              }
            }
            if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v57]) != v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1014, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( ( uint )( *actualMaterial )->drawSurf.fields.materialSortedIndex ) == *actualMaterial)", (const char *)&queryFormat, "R_GetSortedMaterial( ( uint )( *actualMaterial )->drawSurf.fields.materialSortedIndex ) == *actualMaterial") )
              __debugbreak();
          }
          v58 = *v37;
          if ( SLOBYTE((*v37)->surfaceFlags) < 0 )
            goto LABEL_156;
          cameraRegion = v58->cameraRegion;
          if ( cameraRegion - 2 <= 1 && (unsigned int)(r_drawTransDecalSurfs->current.integer - 3) <= 1 )
            goto LABEL_156;
          if ( cameraRegion <= 1 && (unsigned int)(r_drawOpaqueSurfs->current.integer - 3) <= 1 || v115 )
            goto LABEL_156;
          v60 = 0;
          if ( !v130 )
            goto LABEL_202;
          if ( cameraRegion - 2 <= 1 )
          {
            cameraRegion = 6;
            goto LABEL_121;
          }
          if ( !v58->cameraRegion )
          {
            cameraRegion = 5;
            goto LABEL_121;
          }
          if ( cameraRegion == 1 )
          {
            cameraRegion = 7;
          }
          else
          {
LABEL_202:
            if ( (*((_BYTE *)sceneEnt + 1388) & 2) != 0 )
              v60 = (v58->drawSurf.packed.p1 & 0x180000) == 0x100000i64;
          }
LABEL_121:
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
          v61 = v149;
          if ( !v149 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1079, ASSERT_TYPE_ASSERT, "(lightingInfo)", (const char *)&queryFormat, "lightingInfo") )
            __debugbreak();
          modelSurf[5].allocatedVolumeInfoSlot = v61[v135].lgv.allocatedVolumeInfoSlot;
          modelSurf[6].allocatedVolumeInfoSlot = decalVolumeGridInfo.allocatedVolumeInfoSlot;
          v62 = truncate_cast<unsigned __int64,__int64>((char *)modelSurf - (char *)frontEndDataOut - 1789440);
          if ( (v62 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1087, ASSERT_TYPE_ASSERT, "(!( surfId & 3 ))", (const char *)&queryFormat, "!( surfId & 3 )") )
            __debugbreak();
          v63 = v62 >> 2;
          if ( (unsigned int)v63 >= 0x1000000 )
          {
            LODWORD(materialHandle) = 0x1000000;
            LODWORD(surfType) = v63;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 1089, ASSERT_TYPE_ASSERT, "(unsigned)( surfId ) < (unsigned)( 1 << 24 )", "surfId doesn't index 1 << MTL_SORT_OBJECT_ID_BITS\n\t%i not in [0, %i)", surfType, materialHandle) )
              __debugbreak();
          }
          _R10 = *Skins;
          __asm
          {
            vmovups xmm0, xmmword ptr [r10+28h]
            vmovups [rbp+5D0h+var_5D0], xmm0
          }
          *(_QWORD *)&v143 = _RT0;
          v67 = (unsigned __int64)v130 << 27;
          __asm { vpextrq rcx, xmm0, 1 }
          *((_QWORD *)&v143 + 1) = _RCX & 0xFFFFFFFE005FFFFFui64 | (_RCX - v67) & 0x1F8000000i64 | ((v130 | (4i64 * (unsigned int)v49)) << 21);
          v69 = v143 & 0xE000000003FFFFFFui64 | ((v63 & 0xFFFFFF) << 26) | -(__int64)(v137 != 0) & 0x4000000000000i64;
          *(_QWORD *)&v143 = v69;
          if ( v122 < 96 )
          {
            v70 = _RCX & 0xFFFFFFFE005F0000ui64 | ((v130 | (4i64 * (unsigned int)v49)) << 21) & 0xFFFFFFFE07FF0000ui64 | outPhysicalMaterial[v122]->drawSurf.packed.p1 & 0x1F8000000i64 | LOWORD(v157[v122]);
            *((_QWORD *)&v143 + 1) = v70 ^ (v70 ^ (v70 - v67)) & 0x1F8000000i64;
          }
          if ( !rg.distortion && Material_HasDistortion(_R10) || !R_UGB_UpdateXSurfDataFromXSurf(xsurf) )
          {
            Skins = v134;
LABEL_156:
            v16 = obj;
LABEL_157:
            v72 = modelSurf;
            goto LABEL_158;
          }
          v71 = truncate_cast<unsigned int,unsigned __int64>(v63);
          v72 = modelSurf;
          *(_QWORD *)&v143 = v69 & 0xFFFFFFFFFC0003FFui64 | ((unsigned __int64)R_AllocGPUBatchIndexXModel(0, sceneViewType, sceneEnt, modelSurf, v71, v49, v134) << 10);
          v73 = (__int64)v150;
          _RAX = (unsigned __int64)v150[cameraRegion];
          if ( _RAX >= (unsigned __int64)lastDrawSurfs[cameraRegion] )
            goto LABEL_160;
          __asm
          {
            vmovups xmm0, [rbp+5D0h+var_5D0]
            vmovups xmmword ptr [rax], xmm0
          }
          *(_QWORD *)(v73 + 8i64 * cameraRegion) += 16i64;
          if ( v60 )
          {
            _RAX = *(_QWORD *)(v73 + 96);
            __asm { vmovups xmmword ptr [rax], xmm0 }
            *(_QWORD *)(v73 + 96) += 16i64;
          }
          v133 = 1;
          if ( v123 < 0xF )
            break;
LABEL_150:
          if ( r_showTriCounts->current.enabled )
          {
            v125 += R_GetModelSurfaceXSurface(modelSurf, v49)->triCount;
          }
          else if ( r_showVertCounts->current.enabled )
          {
            v126 += R_GetModelSurfaceXSurface(modelSurf, v49)->vertCount;
          }
          GfxSceneEntity_GetPlacementOrigin(sceneEnt, &outOrigin);
          _RCX = xsurf;
          __asm
          {
            vmovsd  xmm0, qword ptr [rcx+9Ch]
            vmovsd  qword ptr [rbp+5D0h+surfBounds.halfSize], xmm0
          }
          surfBounds.halfSize.v[2] = xsurf->surfBounds.halfSize.v[2];
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+5D0h+outOrigin]
            vaddss  xmm1, xmm0, dword ptr [rcx+90h]
            vmovss  dword ptr [rbp+5D0h+surfBounds.midPoint], xmm1
            vmovss  xmm2, dword ptr [rbp+5D0h+outOrigin+4]
            vaddss  xmm0, xmm2, dword ptr [rcx+94h]
            vmovss  dword ptr [rbp+5D0h+surfBounds.midPoint+4], xmm0
            vmovss  xmm1, dword ptr [rbp+5D0h+outOrigin+8]
            vaddss  xmm2, xmm1, dword ptr [rcx+98h]
            vmovss  dword ptr [rbp+5D0h+surfBounds.midPoint+8], xmm2
          }
          R_AccumulateSurfBounds(&surfBounds, &accumulatedSurfBounds);
          v86 = Material_FromHandle(*v146);
          R_AccumulateMaterialRenderTechflags(v86, &renderFeatures, &outOrigin);
          memset(&outOrigin, 0, sizeof(outOrigin));
          Skins = v134;
          v16 = obj;
LABEL_158:
          ++v131;
          v134 = ++Skins;
          modelSurf = (GfxModelDecalVolumeGridInfo *)((char *)v72 + v47);
          firstSurf = (char *)v72 + v47;
          if ( v131 >= v124 )
            goto LABEL_161;
        }
        _RAX = *(_QWORD *)(v73 + 8i64 * cameraRegion);
        if ( _RAX < (unsigned __int64)lastDrawSurfs[cameraRegion] )
        {
          __asm { vmovups xmmword ptr [rax], xmm0 }
          *(_QWORD *)(*(_QWORD *)(v73 + 8i64 * cameraRegion) + 8i64) = *(_QWORD *)(*(_QWORD *)(v73 + 8i64 * cameraRegion) + 8i64) & 0xFFFFFFFFF87FFFFFui64 | (v50 << 23);
          *(_QWORD *)(v73 + 8i64 * cameraRegion) += 16i64;
          goto LABEL_150;
        }
LABEL_160:
        R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddDObjSurfacesCamera", cameraRegion);
        firstSurf = modelSurf;
LABEL_161:
        _RBX = sceneEnt;
        _R14 = v140;
        v34 = v116;
LABEL_162:
        v128 += v124;
        if ( r_showModelNames->current.enabled || r_showModelLODs->current.integer || r_showModelLODOutDist->current.enabled )
        {
          GfxSceneEntity_GetPlacementOrigin(_RBX, &v144);
          v16 = obj;
          ModelRootBoneIndex = DObjGetModelRootBoneIndex(obj, v34);
          DObjGetBasePoseMatrix(obj, ModelRootBoneIndex, &outMat);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+5D0h+outMat.trans]
            vaddss  xmm1, xmm0, dword ptr [rbp+5D0h+var_5C0]
            vmovss  dword ptr [rbp+5D0h+origin], xmm1
            vmovss  xmm2, dword ptr [rbp+5D0h+outMat.trans+4]
            vaddss  xmm0, xmm2, dword ptr [rbp+5D0h+var_5C0+4]
            vmovss  dword ptr [rbp+5D0h+origin+4], xmm0
            vmovss  xmm1, dword ptr [rbp+5D0h+outMat.trans+8]
            vaddss  xmm2, xmm1, dword ptr [rbp+5D0h+var_5C0+8]
            vmovss  dword ptr [rbp+5D0h+origin+8], xmm2
          }
          if ( r_showModelNames->current.enabled )
            R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, &origin, &colorCyan, _R14->name);
          integer = r_showModelLODs->current.integer;
          if ( integer && 6 - integer >= lod )
          {
            v96 = j_va("%u", lod);
            R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, &origin, &colorCyan, v96);
          }
          if ( r_showModelLODOutDist->current.enabled )
          {
            v97 = _R14->numLods - 1;
            _RAX = (unsigned __int64)v97 << 6;
            __asm { vcvttss2si r8d, dword ptr [rax+r14+0F0h] }
            v99 = j_va("[%u] %d", v97, _R8);
            v100 = &colorCyan;
            if ( lod == v97 )
              v100 = &colorYellow;
            R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, &origin, v100, v99);
          }
          memset(&v144, 0, sizeof(v144));
          memset(&origin, 0, sizeof(origin));
        }
        else
        {
          v16 = obj;
        }
        if ( (*((_BYTE *)_RBX + 1388) & 9) == 0 )
        {
          GfxSceneEntity_GetPlacementOrigin(_RBX, &placement.origin);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx+0Ch]
            vmovups xmmword ptr [rbp+5D0h+placement.quat], xmm0
          }
          CG_DrawHits_OnDrawModel(viewInfoa->clientIndex, (*((_DWORD *)_RBX + 346) >> 10) & 0xFFF, &placement, _R14, lod);
        }
        _RSI = v135;
LABEL_179:
        v20 = v116;
LABEL_180:
        v116 = ++v20;
        v135 = ++_RSI;
        if ( v20 >= NumModels )
        {
          LODWORD(_RSI) = v125;
          v15 = v126;
          v19 = sceneViewType;
          break;
        }
      }
    }
    if ( v19 == SCENE_VIEW_CAMERA_DEPTH_HACK )
      R_UpdateViewSurfaceBounds(&accumulatedSurfBounds, SCENE_VIEW_CAMERA_DEPTH_HACK);
    R_UpdateViewMaterialRenderTechflags(&renderFeatures);
    GfxSceneEntity_GetPlacementOrigin(_RBX, &v145);
    if ( r_showTriCounts->current.enabled && (_DWORD)_RSI )
    {
      v102 = (unsigned int)_RSI;
    }
    else if ( r_showVertCounts->current.enabled && v15 )
    {
      v102 = v15;
    }
    else
    {
      if ( !r_showSurfCounts->current.enabled || !v128 )
        goto LABEL_194;
      v102 = v128;
    }
    v103 = j_va("%i", v102);
    R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, &v145, &colorCyan, v103);
LABEL_194:
    v104 = DVARINT_cg_drawFPS;
    if ( DVARINT_cg_drawFPS )
    {
      Dvar_CheckFrontendServerThread(DVARINT_cg_drawFPS);
      if ( v104->current.integer >= 3 )
      {
        if ( rg.stats )
          rg.stats->numXModelTriCount += _RSI;
      }
    }
    v12 = v133;
    memset(&v145, 0, sizeof(v145));
  }
  Profile_EndInternal(NULL);
  result = v12;
  _R11 = &v159;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
R_AddXModelSurfaces
==============
*/
GfxDrawSurf *R_AddXModelSurfaces(const XModelDrawInfo *modelInfo, const XModel *model, MaterialTechniqueType techType, GfxDrawSurf *drawSurf, GfxDrawSurf *lastDrawSurf, const vec3_t *origin, GfxSceneViewType sceneViewType)
{
  const XModel *v8; 
  unsigned __int64 v10; 
  unsigned int v11; 
  const GfxModelRigidSurface *v12; 
  int v13; 
  Material *const *Skins; 
  unsigned __int32 v15; 
  unsigned int v18; 
  unsigned int v19; 
  int skinnedCachedOffset; 
  Material *v21; 
  __int64 p1_low; 
  XAssetHeader v23; 
  int p1; 
  __int64 v25; 
  surfaceType_t v27; 
  unsigned __int64 ModelRigidSurfaceSize; 
  __int64 v29; 
  Material *v30; 
  const MaterialTechniqueSet *techniqueSet; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  unsigned int v38; 
  __int64 surfType; 
  Material **materialHandle; 
  __int64 v53; 
  __int64 v54; 
  int v55; 
  unsigned int v56; 
  GfxDrawSurf *v57; 
  unsigned int v60; 
  __int64 v61; 
  __int128 v62; 
  XSurface *surfaces; 
  Bounds surfBounds; 
  Bounds accumulatedSurfBounds; 

  _RSI = drawSurf;
  v57 = drawSurf;
  v8 = model;
  Profile_Begin(97);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 674, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  v10 = *((_DWORD *)modelInfo + 1) & 0xFFFFFF;
  v11 = *(_DWORD *)modelInfo;
  v60 = v11 & 1;
  v12 = (const GfxModelRigidSurface *)&frontEndDataOut->surfsBuffer[4 * v10];
  v13 = (v11 >> 1) & 0xF;
  v55 = XModelGetSurfaces(v8, &surfaces, v13);
  Skins = XModelGetSkins(v8, v13);
  if ( !Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 684, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  v15 = sceneViewType - 1;
  __asm
  {
    vmovups xmm0, cs:__xmm@ff7fffff000000000000000000000000
    vmovups xmmword ptr [rsp+128h+accumulatedSurfBounds.midPoint], xmm0
    vmovss  xmm1, cs:__real@ff7fffff
    vmovss  dword ptr [rsp+128h+accumulatedSurfBounds.halfSize+4], xmm1
    vmovss  dword ptr [rsp+128h+accumulatedSurfBounds.halfSize+8], xmm1
  }
  v18 = 0;
  v56 = 0;
  v19 = v55;
  if ( !v55 )
    goto LABEL_71;
  while ( 1 )
  {
    skinnedCachedOffset = v12->base.skinnedCachedOffset;
    if ( v12->base.skinnedCachedOffset != -3 )
      break;
    ++v10;
    v12 = (const GfxModelRigidSurface *)((char *)v12 + 4);
    _RSI = v57;
LABEL_67:
    v56 = ++v18;
    ++Skins;
    if ( v18 >= v19 )
      goto LABEL_70;
  }
  if ( !*Skins )
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    LODWORD(v54) = v55;
    LODWORD(v53) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 704, ASSERT_TYPE_ASSERT, "(*material)", "%s\n\tR_AddXModelSurfaces failed with xmodel: %s - subMatIndex: %i, numsurfs: %i", "*material", v8->name, v53, v54) )
      __debugbreak();
    v19 = v55;
  }
  v21 = *Skins;
  p1_low = LOWORD((*Skins)->drawSurf.packed.p1);
  if ( (unsigned int)p1_low >= rgp.materialCount )
  {
    LODWORD(materialHandle) = rgp.materialCount;
    LODWORD(surfType) = LOWORD((*Skins)->drawSurf.packed.p1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
      __debugbreak();
  }
  if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]) != v21 )
  {
    v23.physicsLibrary = DB_GetXAssetMasterDefaultHeader(ASSET_TYPE_MATERIAL).physicsLibrary;
    p1 = v21->drawSurf.packed.p1;
    if ( (unsigned __int16)p1 == (unsigned __int16)v23.physicsLibrary[2].name )
    {
      R_WarnOncePerFrame(R_WARN_UNSORTED_MATERIAL_INDEX, v21->name);
      _RSI = v57;
LABEL_66:
      v8 = model;
      goto LABEL_67;
    }
    v25 = (unsigned __int16)p1;
    if ( (unsigned __int16)p1 >= rgp.materialCount )
    {
      LODWORD(materialHandle) = rgp.materialCount;
      LODWORD(surfType) = (unsigned __int16)p1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
      {
        __debugbreak();
        v21 = *Skins;
      }
    }
    if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v25]) != v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 717, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( ( uint )( *material )->drawSurf.fields.materialSortedIndex ) == *material)", (const char *)&queryFormat, "R_GetSortedMaterial( ( uint )( *material )->drawSurf.fields.materialSortedIndex ) == *material") )
      __debugbreak();
  }
  _R13 = v12->xsurf;
  if ( v12->base.subdivLodLevel && R_SurfaceHasSubdivision(v12->xsurf) )
  {
    v27 = SF_XMODEL_RIGID_SUBDIV;
    if ( skinnedCachedOffset <= -4 )
      ModelRigidSurfaceSize = R_GetModelRigidSurfaceSize(v12);
    else
      ModelRigidSurfaceSize = 108i64;
  }
  else
  {
    v27 = SF_BEGIN_XMODEL;
    if ( v12->base.skinnedCachedOffset > -4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 226, ASSERT_TYPE_ASSERT, "(R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset ))", (const char *)&queryFormat, "R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset )") )
      __debugbreak();
    v29 = (unsigned int)(-3 - v12->base.skinnedCachedOffset);
    if ( (int)v29 > 128 )
    {
      LODWORD(v54) = 128;
      LODWORD(v53) = -3 - v12->base.skinnedCachedOffset;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", v53, v54) )
        __debugbreak();
    }
    ModelRigidSurfaceSize = 32 * v29 + 76;
  }
  v30 = *Skins;
  if ( !*Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 464, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !v30->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 465, ASSERT_TYPE_ASSERT, "( ( material->techniqueSet ) )", "( material->name ) = %s", v30->name) )
    __debugbreak();
  techniqueSet = v30->techniqueSet;
  if ( !techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 515, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
    __debugbreak();
  _RSI = v57;
  if ( !Material_TechSetHasTechnique(techniqueSet, techType) )
  {
    v10 += ModelRigidSurfaceSize >> 2;
    v12 = (const GfxModelRigidSurface *)((char *)v12 + ModelRigidSurfaceSize);
LABEL_65:
    v19 = v55;
    v18 = v56;
    goto LABEL_66;
  }
  if ( v57 >= lastDrawSurf )
    goto LABEL_69;
  if ( (unsigned int)v10 >= 0x1000000 )
  {
    LODWORD(materialHandle) = 0x1000000;
    LODWORD(surfType) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 755, ASSERT_TYPE_ASSERT, "(unsigned)( surfId ) < (unsigned)( 1 << 24 )", "surfId doesn't index 1 << MTL_SORT_OBJECT_ID_BITS\n\t%i not in [0, %i)", surfType, materialHandle) )
      __debugbreak();
  }
  _RAX = *Skins;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+28h]
    vmovups [rsp+128h+var_A8], xmm0
  }
  v61 = _RT0;
  __asm { vpextrq rax, xmm0, 1 }
  v36 = _RAX & 0xFFFFFFFFF87FFFFFui64 | ((unsigned __int64)(unsigned int)v27 << 23);
  *((_QWORD *)&v62 + 1) = v36;
  v37 = v61 & 0xF000000003FFFFFFui64 | ((v10 & 0xFFFFFF | ((unsigned __int64)v60 << 24)) << 26);
  *(_QWORD *)&v62 = v37;
  if ( !R_UGB_UpdateXSurfDataFromXSurf(_R13) )
  {
    v10 += ModelRigidSurfaceSize >> 2;
    v12 = (const GfxModelRigidSurface *)((char *)v12 + ModelRigidSurfaceSize);
    _RSI = v57;
    goto LABEL_65;
  }
  if ( techType == TECHNIQUE_BUILD_SHADOWMAP_DEPTH )
  {
    v38 = truncate_cast<unsigned int,unsigned __int64>(v10);
    *(_QWORD *)&v62 = v37 & 0xFFFFFFFFFC0003FFui64 | ((unsigned __int64)R_AllocGPUBatchIndexXModel(1u, sceneViewType, NULL, v12, v38, v27, Skins) << 10);
  }
  __asm { vmovups xmm0, [rsp+128h+var_A8] }
  _RSI = v57;
  __asm { vmovups xmmword ptr [rsi], xmm0 }
  _RSI = ++v57;
  if ( v27 != SF_XMODEL_RIGID_SUBDIV )
  {
LABEL_63:
    v10 += ModelRigidSurfaceSize >> 2;
    v12 = (const GfxModelRigidSurface *)((char *)v12 + ModelRigidSurfaceSize);
    if ( (unsigned int)(sceneViewType - 1) <= 2 )
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [r13+9Ch]
        vmovsd  qword ptr [rsp+128h+surfBounds.halfSize], xmm0
      }
      surfBounds.halfSize.v[2] = _R13->surfBounds.halfSize.v[2];
      _RAX = origin;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vaddss  xmm1, xmm0, dword ptr [r13+90h]
        vmovss  dword ptr [rsp+128h+surfBounds.midPoint], xmm1
        vmovss  xmm2, dword ptr [r13+94h]
        vaddss  xmm0, xmm2, dword ptr [rax+4]
        vmovss  dword ptr [rsp+128h+surfBounds.midPoint+4], xmm0
        vmovss  xmm1, dword ptr [r13+98h]
        vaddss  xmm2, xmm1, dword ptr [rax+8]
        vmovss  dword ptr [rsp+128h+surfBounds.midPoint+8], xmm2
      }
      R_AccumulateSurfBounds(&surfBounds, &accumulatedSurfBounds);
    }
    goto LABEL_65;
  }
  if ( _RSI < lastDrawSurf )
  {
    *((_QWORD *)&v62 + 1) = v36 & 0xFFFFFFFFF87FFFFFui64 | 0x5000000;
    __asm
    {
      vmovups xmm0, [rsp+128h+var_A8]
      vmovups xmmword ptr [rsi], xmm0
    }
    v57 = ++_RSI;
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
  return _RSI;
}

/*
==============
R_AddXModelSurfacesCamera
==============
*/
__int64 R_AddXModelSurfacesCamera(const GfxViewInfo *viewInfo, const XModelDrawInfo *modelInfo, const XModel *model, const DObj *obj, const vec3_t *origin, const GfxModelLightingProbeInfo *lightingInfo, int depthHack, GfxDrawSurf **drawSurfs, GfxDrawSurf **lastDrawSurfs, const unsigned __int16 mapEntLookup, XModelThermalMode thermalMode, unsigned int renderFlags, unsigned __int16 baseGfxEntityDataID, const GfxModelDecalVolumeGridInfo *decalVolumeGridInfo)
{
  const vec3_t *v16; 
  unsigned __int64 v17; 
  unsigned int v18; 
  unsigned __int8 *v19; 
  unsigned int v20; 
  Material *const *Skins; 
  unsigned int v24; 
  int v25; 
  Material *v26; 
  __int64 p1_low; 
  XAssetHeader v28; 
  int p1; 
  __int64 v30; 
  Material **v31; 
  XModelMaterialOverride *modelMaterialOverrides; 
  __int64 v33; 
  unsigned int materialOverrideCount; 
  MaterialOverride **materialOverride; 
  MaterialOverride *v36; 
  Material *originalMaterial; 
  MaterialOverrideType overrideType; 
  surfaceType_t v40; 
  unsigned __int64 ModelRigidSurfaceSize; 
  Material *overrideMaterial; 
  unsigned int v43; 
  int v44; 
  Material *v45; 
  unsigned int cameraRegion; 
  bool v47; 
  const GfxModelLightingProbeInfo *v48; 
  __int64 v51; 
  unsigned __int64 v53; 
  unsigned __int64 v54; 
  unsigned __int64 v55; 
  unsigned int v56; 
  __int64 v57; 
  unsigned int v61; 
  const XSurface *ModelSurfaceXSurface; 
  const XSurface *v64; 
  const XSurface *v65; 
  const Material *v74; 
  int integer; 
  const char *v77; 
  unsigned int v78; 
  const char *v80; 
  const vec4_t *v81; 
  __int64 v82; 
  unsigned int v83; 
  const char *v84; 
  const dvar_t *v85; 
  __int64 surfType; 
  Material **materialHandle; 
  __int64 v89; 
  __int64 v90; 
  unsigned int v91; 
  unsigned __int64 val; 
  int v93; 
  unsigned int v94; 
  Material **v95; 
  int v96; 
  unsigned int v97; 
  GfxViewMaterialRenderFeatures renderFeatures; 
  unsigned int v99; 
  unsigned int v100; 
  GfxSceneViewType sceneViewType; 
  Material **v102; 
  vec3_t *v103; 
  unsigned int v104; 
  const XModel *v105; 
  DebugXModelStats *v106; 
  __int128 v107; 
  const DObj *v108; 
  GfxDrawSurf **v109; 
  DebugXModelStats xmodelStats; 
  __int64 v111; 
  XSurface *surfaces; 
  Bounds surfBounds; 
  Bounds accumulatedSurfBounds; 
  int v115[96]; 
  Material *outPhysicalMaterial[97]; 

  v111 = -2i64;
  v108 = obj;
  _R13 = model;
  v105 = model;
  v16 = origin;
  v103 = (vec3_t *)origin;
  v109 = drawSurfs;
  Profile_Begin(97);
  if ( !lightingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 315, ASSERT_TYPE_ASSERT, "(lightingInfo)", (const char *)&queryFormat, "lightingInfo") )
    __debugbreak();
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 316, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  v94 = 0;
  v99 = 0;
  v106 = NULL;
  v93 = 0;
  v17 = *((_DWORD *)modelInfo + 1) & 0xFFFFFF;
  val = v17;
  v18 = *(_DWORD *)modelInfo;
  v104 = *(_DWORD *)modelInfo & 1;
  v19 = &frontEndDataOut->surfsBuffer[4 * v17];
  v20 = (v18 >> 1) & 0xF;
  v97 = v20;
  v100 = XModelGetSurfaces(_R13, &surfaces, v20);
  Skins = XModelGetSkins(_R13, v20);
  v95 = (Material **)Skins;
  if ( !Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 340, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, cs:__xmm@ff7fffff000000000000000000000000
    vmovups xmmword ptr [rbp+4F0h+accumulatedSurfBounds.midPoint], xmm0
    vmovss  xmm1, cs:__real@ff7fffff
    vmovss  dword ptr [rbp+4F0h+accumulatedSurfBounds.halfSize+4], xmm1
    vmovss  dword ptr [rbp+4F0h+accumulatedSurfBounds.halfSize+8], xmm1
  }
  renderFeatures = GFX_VIEW_MTL_FEAT_NONE;
  sceneViewType = depthHack != 0 ? SCENE_VIEW_CAMERA_DEPTH_HACK : SCENE_VIEW_CAMERA;
  if ( !decalVolumeGridInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 355, ASSERT_TYPE_ASSERT, "(decalVolumeGridInfo)", (const char *)&queryFormat, "decalVolumeGridInfo") )
    __debugbreak();
  if ( rg.showXModelRanking && !depthHack && rg.showXModelRankingFilterMode != 1 )
    v106 = R_AddXModelToRankingStats(_R13, v20, 1u);
  memset(&xmodelStats, 0, sizeof(xmodelStats));
  if ( rg.showXModelRemoteConsole && !depthHack && rg.showXModelRankingFilterMode != 1 )
    R_InitDebugXmodelStats(_R13, 1u, v20, 1u, &xmodelStats);
  v91 = 0;
  if ( !v100 )
    goto LABEL_135;
  v24 = 0;
  while ( 1 )
  {
    v25 = *(_DWORD *)v19;
    if ( *(_DWORD *)v19 == -3 )
    {
      ++v17;
      v19 += 4;
      goto LABEL_129;
    }
    v26 = *Skins;
    if ( !*Skins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 383, ASSERT_TYPE_ASSERT, "(*material)", (const char *)&queryFormat, "*material") )
      __debugbreak();
    p1_low = LOWORD(v26->drawSurf.packed.p1);
    if ( (unsigned int)p1_low >= rgp.materialCount )
    {
      LODWORD(materialHandle) = rgp.materialCount;
      LODWORD(surfType) = LOWORD(v26->drawSurf.packed.p1);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
      {
        __debugbreak();
        v26 = *Skins;
      }
    }
    if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]) == v26 )
      break;
    v28.physicsLibrary = DB_GetXAssetMasterDefaultHeader(ASSET_TYPE_MATERIAL).physicsLibrary;
    p1 = v26->drawSurf.packed.p1;
    if ( (unsigned __int16)p1 != (unsigned __int16)v28.physicsLibrary[2].name )
    {
      v30 = (unsigned __int16)p1;
      if ( (unsigned __int16)p1 >= rgp.materialCount )
      {
        LODWORD(materialHandle) = rgp.materialCount;
        LODWORD(surfType) = (unsigned __int16)p1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", surfType, materialHandle) )
        {
          __debugbreak();
          v26 = *Skins;
        }
      }
      if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v30]) != v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 396, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( ( uint )( *material )->drawSurf.fields.materialSortedIndex ) == *material)", (const char *)&queryFormat, "R_GetSortedMaterial( ( uint )( *material )->drawSurf.fields.materialSortedIndex ) == *material") )
        __debugbreak();
      break;
    }
    R_WarnOncePerFrame(R_WARN_UNSORTED_MATERIAL_INDEX, v26->name);
LABEL_34:
    v24 = v91;
LABEL_130:
    v91 = ++v24;
    v95 = (Material **)++Skins;
    if ( v24 >= v100 )
      goto LABEL_134;
  }
  v31 = (Material **)Skins;
  v102 = (Material **)Skins;
  v96 = 96;
  if ( v108 )
  {
    modelMaterialOverrides = v108->modelMaterialOverrides;
    if ( modelMaterialOverrides )
    {
      v33 = 0i64;
      materialOverrideCount = modelMaterialOverrides->materialOverrideCount;
      if ( modelMaterialOverrides->materialOverrideCount )
      {
        materialOverride = modelMaterialOverrides->materialOverride;
        while ( 1 )
        {
          v36 = materialOverride[v33];
          if ( v36 )
          {
            originalMaterial = v36->originalMaterial;
            if ( v36->originalMaterial == *Skins )
            {
              overrideType = v36->overrideType;
              if ( overrideType != MATERIAL_OVERRIDETYPE_STICKER_REPLACE )
                break;
            }
          }
          v33 = (unsigned int)(v33 + 1);
          if ( (unsigned int)v33 >= materialOverrideCount )
            goto LABEL_49;
        }
        if ( overrideType != MATERIAL_OVERRIDETYPE_MATERIAL_REPLACE || (overrideMaterial = v36->overrideMaterial, originalMaterial->materialType == overrideMaterial->materialType) )
        {
          v43 = R_CopyMaterialOverrideToPhysicalMaterialData(v36, &outPhysicalMaterial[v33], &renderFeatures);
          if ( v43 >= 0x800 )
          {
            LODWORD(v33) = 96;
            R_WarnOncePerFrame(R_WARN_MATERIAL_OVERRIDE_OUT_OF_PHYSICAL_MATERIALS);
          }
          else
          {
            v115[v33] = rgp.physicalMaterialSortedIndex[v43];
          }
          v96 = v33;
          if ( (int)v33 < 96 )
          {
            v31 = &outPhysicalMaterial[(int)v33];
            v102 = v31;
          }
        }
        else
        {
          R_WarnOncePerFrame(R_WARN_MATERIAL_OVERRIDE_MISMATCHED_MATERIAL, originalMaterial->name, overrideMaterial->name);
          v96 = 96;
        }
      }
    }
  }
LABEL_49:
  _R13 = (const XSurface *)*((_QWORD *)v19 + 7);
  if ( v19[54] && R_SurfaceHasSubdivision(*((const XSurface **)v19 + 7)) )
  {
    v40 = SF_XMODEL_RIGID_SUBDIV;
    if ( v25 <= -4 )
      ModelRigidSurfaceSize = R_GetModelRigidSurfaceSize((const GfxModelRigidSurface *)v19);
    else
      ModelRigidSurfaceSize = 108i64;
  }
  else
  {
    v40 = SF_BEGIN_XMODEL;
    if ( *(int *)v19 > -4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 226, ASSERT_TYPE_ASSERT, "(R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset ))", (const char *)&queryFormat, "R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset )") )
      __debugbreak();
    v44 = -3 - *(_DWORD *)v19;
    if ( v44 > 128 )
    {
      LODWORD(v90) = 128;
      LODWORD(v89) = -3 - *(_DWORD *)v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", v89, v90) )
        __debugbreak();
    }
    ModelRigidSurfaceSize = 32i64 * (unsigned int)v44 + 76;
  }
  v45 = *v31;
  if ( SLOBYTE((*v31)->surfaceFlags) < 0 )
    goto LABEL_128;
  cameraRegion = v45->cameraRegion;
  if ( cameraRegion - 2 <= 1 && (unsigned int)(r_drawTransDecalSurfs->current.integer - 3) <= 1 || cameraRegion <= 1 && (unsigned int)(r_drawOpaqueSurfs->current.integer - 3) <= 1 )
  {
    Skins = v95;
    goto LABEL_34;
  }
  v47 = 0;
  if ( !depthHack )
  {
LABEL_82:
    if ( (renderFlags & 2) != 0 )
    {
      v47 = (v45->drawSurf.packed.p1 & 0x180000) == 0x100000i64;
      goto LABEL_84;
    }
    goto LABEL_93;
  }
  if ( cameraRegion - 2 > 1 )
  {
    if ( !v45->cameraRegion )
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
  v48 = lightingInfo;
  if ( !lightingInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 486, ASSERT_TYPE_ASSERT, "(lightingInfo)", (const char *)&queryFormat, "lightingInfo") )
      __debugbreak();
    v48 = NULL;
  }
  *((GfxModelLightingProbeInfo *)v19 + 5) = (GfxModelLightingProbeInfo)v48->lgv.allocatedVolumeInfoSlot;
  *((_WORD *)v19 + 9) = mapEntLookup;
  *((GfxModelDecalVolumeGridInfo *)v19 + 6) = (GfxModelDecalVolumeGridInfo)decalVolumeGridInfo->allocatedVolumeInfoSlot;
  if ( (unsigned int)val >= 0x1000000 )
  {
    LODWORD(materialHandle) = 0x1000000;
    LODWORD(surfType) = val;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 494, ASSERT_TYPE_ASSERT, "(unsigned)( surfId ) < (unsigned)( 1 << 24 )", "surfId doesn't index 1 << MTL_SORT_OBJECT_ID_BITS\n\t%i not in [0, %i)", surfType, materialHandle) )
      __debugbreak();
  }
  _R10 = *v95;
  __asm
  {
    vmovups xmm0, xmmword ptr [r10+28h]
    vmovups [rbp+4F0h+var_540], xmm0
  }
  v51 = (__int64)depthHack << 27;
  __asm { vmovq   rax, xmm0 }
  v53 = _RAX & 0xE000000003FFFFFFui64 | ((val & 0xFFFFFF | ((unsigned __int64)v104 << 24)) << 26);
  v54 = *((_QWORD *)&v107 + 1) & 0xFFFFFFFE005FFFFFui64 | (*((_QWORD *)&v107 + 1) - v51) & 0x1F8000000i64 | ((depthHack & 1 | (4i64 * (unsigned int)v40)) << 21);
  *((_QWORD *)&v107 + 1) = v54;
  if ( v96 < 96 )
  {
    v55 = v54 & 0xFFFFFFFE07FF0000ui64 | outPhysicalMaterial[v96]->drawSurf.packed.p1 & 0x1F8000000i64 | LOWORD(v115[v96]);
    *((_QWORD *)&v107 + 1) = v55 ^ (v55 ^ (v55 - v51)) & 0x1F8000000i64;
  }
  if ( !rg.distortion && Material_HasDistortion(_R10) )
    goto LABEL_127;
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 524, ASSERT_TYPE_ASSERT, "(xsurf)", (const char *)&queryFormat, "xsurf") )
    __debugbreak();
  if ( !R_UGB_UpdateXSurfDataFromXSurf(_R13) )
  {
LABEL_127:
    v17 = val;
LABEL_128:
    v17 += ModelRigidSurfaceSize >> 2;
    v24 = v91;
    Skins = v95;
    v19 += ModelRigidSurfaceSize;
LABEL_129:
    val = v17;
    goto LABEL_130;
  }
  v56 = truncate_cast<unsigned int,unsigned __int64>(val);
  *(_QWORD *)&v107 = v53 & 0xFFFFFFFFFC0003FFui64 | ((unsigned __int64)R_AllocGPUBatchIndexXModel(0, sceneViewType, NULL, v19, v56, v40, v95) << 10);
  v57 = (__int64)v109;
  _RAX = (unsigned __int64)v109[cameraRegion];
  if ( _RAX < (unsigned __int64)lastDrawSurfs[cameraRegion] )
  {
    __asm
    {
      vmovups xmm0, [rbp+4F0h+var_540]
      vmovups xmmword ptr [rax], xmm0
    }
    *(_QWORD *)(v57 + 8i64 * cameraRegion) += 16i64;
    if ( v47 )
    {
      _RAX = *(_QWORD *)(v57 + 96);
      __asm { vmovups xmmword ptr [rax], xmm0 }
      *(_QWORD *)(v57 + 96) += 16i64;
    }
    v61 = 1;
    v93 = 1;
    if ( v40 == SF_XMODEL_RIGID_SUBDIV )
    {
      _RAX = *(_QWORD *)(v57 + 8i64 * cameraRegion);
      if ( _RAX >= (unsigned __int64)lastDrawSurfs[cameraRegion] )
      {
        R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddXModelSurfacesCamera", cameraRegion);
        v20 = v97;
        v16 = v103;
        _R13 = v105;
        goto LABEL_136;
      }
      __asm { vmovups xmmword ptr [rax], xmm0 }
      *(_QWORD *)(*(_QWORD *)(v57 + 8i64 * cameraRegion) + 8i64) = *(_QWORD *)(*(_QWORD *)(v57 + 8i64 * cameraRegion) + 8i64) & 0xFFFFFFFFF87FFFFFui64 | 0x5000000;
      *(_QWORD *)(v57 + 8i64 * cameraRegion) += 16i64;
    }
    if ( r_showTriCounts->current.enabled )
    {
      v94 += R_GetModelSurfaceXSurface(v19, v40)->triCount;
    }
    else if ( r_showVertCounts->current.enabled )
    {
      ModelSurfaceXSurface = R_GetModelSurfaceXSurface(v19, v40);
      v99 += ModelSurfaceXSurface->vertCount;
    }
    if ( rg.showXModelRanking && !depthHack && rg.showXModelRankingFilterMode != 1 )
    {
      v64 = R_GetModelSurfaceXSurface(v19, v40);
      R_AddXSurfaceToXModelStats(v64, v106);
    }
    if ( rg.showXModelRemoteConsole && !depthHack && rg.showXModelRankingFilterMode != 1 )
    {
      v65 = R_GetModelSurfaceXSurface(v19, v40);
      R_AddXSurfaceToXModelStats(v65, &xmodelStats);
    }
    __asm
    {
      vmovsd  xmm0, qword ptr [r13+9Ch]
      vmovsd  qword ptr [rbp+4F0h+surfBounds.halfSize], xmm0
    }
    surfBounds.halfSize.v[2] = _R13->surfBounds.halfSize.v[2];
    _RBX = v103;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vaddss  xmm1, xmm0, dword ptr [r13+90h]
      vmovss  dword ptr [rbp+4F0h+surfBounds.midPoint], xmm1
      vmovss  xmm2, dword ptr [rbx+4]
      vaddss  xmm0, xmm2, dword ptr [r13+94h]
      vmovss  dword ptr [rbp+4F0h+surfBounds.midPoint+4], xmm0
      vmovss  xmm1, dword ptr [rbx+8]
      vaddss  xmm2, xmm1, dword ptr [r13+98h]
      vmovss  dword ptr [rbp+4F0h+surfBounds.midPoint+8], xmm2
    }
    R_AccumulateSurfBounds(&surfBounds, &accumulatedSurfBounds);
    v74 = Material_FromHandle(*v102);
    R_AccumulateMaterialRenderTechflags(v74, &renderFeatures, _RBX);
    goto LABEL_127;
  }
  R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_AddXModelSurfacesCamera", cameraRegion);
LABEL_134:
  _R13 = v105;
  v16 = v103;
  v20 = v97;
LABEL_135:
  v61 = v93;
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
    R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, v16, &colorCyan, _R13->name);
  integer = r_showModelLODs->current.integer;
  if ( integer && 6 - integer >= v20 )
  {
    v77 = j_va("%u", v20);
    R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, v16, &colorCyan, v77);
  }
  if ( r_showModelLODOutDist->current.enabled )
  {
    v78 = _R13->numLods - 1;
    _RAX = (unsigned __int64)v78 << 6;
    __asm { vcvttss2si r8d, dword ptr [rax+r13+0F0h] }
    v80 = j_va("[%u] %d", v78, _R8);
    v81 = &colorCyan;
    if ( v20 == v78 )
      v81 = &colorYellow;
    R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, v16, v81, v80);
  }
  if ( r_showTriCounts->current.enabled && v94 )
  {
    v82 = v94;
    goto LABEL_159;
  }
  if ( r_showVertCounts->current.enabled && (v83 = v99) != 0 || r_showSurfCounts->current.enabled && (v83 = v100) != 0 )
  {
    v82 = v83;
LABEL_159:
    v84 = j_va("%i", v82);
    R_AddScaledDebugString(&frontEndDataOut->debugGlobals, &rg.debugViewParms->camera, v16, &colorCyan, v84);
  }
  v85 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v85);
  if ( v85->current.integer >= 3 && rg.stats )
    rg.stats->numXModelTriCount += v94;
  Profile_EndInternal(NULL);
  return v61;
}

/*
==============
R_CopyMaterialOverrideToPhysicalMaterialData
==============
*/
__int64 R_CopyMaterialOverrideToPhysicalMaterialData(MaterialOverride *materialOverride, Material **outPhysicalMaterial, GfxViewMaterialRenderFeatures *renderFeatures)
{
  Material **p_originalMaterial; 
  const Material *v9; 
  unsigned __int32 v10; 
  const char *v11; 
  int v12; 
  const char *v13; 
  unsigned int v14; 
  Material *v16; 
  unsigned __int8 sortKey; 
  unsigned int textureCount; 
  signed __int32 v26; 
  __int64 v27; 
  MaterialTextureDef *v28; 

  if ( !materialOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 92, ASSERT_TYPE_ASSERT, "(materialOverride)", (const char *)&queryFormat, "materialOverride") )
    __debugbreak();
  if ( materialOverride->overrideType == MATERIAL_OVERRIDETYPE_CAMO || (p_originalMaterial = &materialOverride->overrideMaterial, materialOverride->overrideType != MATERIAL_OVERRIDETYPE_MATERIAL_REPLACE) )
    p_originalMaterial = &materialOverride->originalMaterial;
  _RSI = *p_originalMaterial;
  if ( !_RSI )
  {
    Com_Printf(8, "WARNING: Material override type of %d doesn't specify a valid material to instance.\n", (unsigned int)materialOverride->overrideType);
    return 2048i64;
  }
  if ( _RSI->materialType != materialOverride->originalMaterial->materialType )
  {
    Com_Printf(8, "WARNING: Trying to override material %s, with material %s, but the types don't match.\n", materialOverride->originalMaterial->name, _RSI->name);
    return 2048i64;
  }
  v9 = Material_FromHandle(_RSI);
  R_AccumulateMaterialRenderTechflags(v9, renderFeatures, &tmpOrg);
  if ( ((unsigned __int8)&rgp.materialOverridePhysicalMaterialIndex & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &rgp.materialOverridePhysicalMaterialIndex) )
    __debugbreak();
  v10 = _InterlockedExchangeAdd(&rgp.materialOverridePhysicalMaterialIndex, 1u);
  if ( v10 < 0x400 )
  {
    v14 = v10 + (rgp.materialOverridePhysicalBucketIndex << 10);
    if ( v14 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_dobj_xmodel.cpp", 145, ASSERT_TYPE_ASSERT, "(physicalMaterialIndex < MAX_OVERRIDE_PHYSICAL_MATERIALS)", (const char *)&queryFormat, "physicalMaterialIndex < MAX_OVERRIDE_PHYSICAL_MATERIALS") )
      __debugbreak();
    _RAX = DB_GetMaterialAtIndex(v14);
    *outPhysicalMaterial = _RAX;
    v16 = _RAX;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi]
      vmovups xmm2, xmmword ptr [rax+28h]
    }
    sortKey = _RAX->sortKey;
    __asm
    {
      vmovups ymmword ptr [rax], ymm0
      vmovups ymm1, ymmword ptr [rsi+20h]
      vmovups ymmword ptr [rax+20h], ymm1
      vmovups ymm0, ymmword ptr [rsi+40h]
      vmovups ymmword ptr [rax+40h], ymm0
      vmovups xmm1, xmmword ptr [rsi+60h]
      vmovups xmmword ptr [rax+60h], xmm1
      vmovsd  xmm0, qword ptr [rsi+70h]
      vmovsd  qword ptr [rax+70h], xmm0
    }
    textureCount = _RAX->textureCount;
    _RAX->sortKey = sortKey;
    __asm { vpextrq rax, xmm2, 1 }
    LOWORD(v16->drawSurf.packed.p1) = _RAX;
    if ( ((unsigned __int8)&rgp.materialOverrideTextureTableIndex & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &rgp.materialOverrideTextureTableIndex) )
      __debugbreak();
    v26 = _InterlockedExchangeAdd(&rgp.materialOverrideTextureTableIndex, textureCount);
    v27 = v16->textureCount;
    if ( (unsigned int)(v26 + v27) < 0x1800 )
    {
      v28 = &rgp.materialOverrideTextureTable[v26 + 6144 * rgp.materialOverrideTextureTableBucketIndex];
      v16->textureTable = v28;
      memcpy_0(v28, materialOverride->materialTextureDefClone, 16 * v27);
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

