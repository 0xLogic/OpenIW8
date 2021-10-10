/*
==============
R_DecalVolumesGrid_Init
==============
*/

void R_DecalVolumesGrid_Init(void)
{
  ?R_DecalVolumesGrid_Init@@YAXXZ();
}

/*
==============
RB_DecalVolumesGrid_WaitWorkerCmd
==============
*/

void __fastcall RB_DecalVolumesGrid_WaitWorkerCmd(unsigned int frame)
{
  ?RB_DecalVolumesGrid_WaitWorkerCmd@@YAXI@Z(frame);
}

/*
==============
R_DecalVolumesGrid_AddToGridRecurse
==============
*/

void __fastcall R_DecalVolumesGrid_AddToGridRecurse(const AddToGridContext *context, const unsigned int frame, const DecalVolumesGridVolumeInfo *volume, unsigned __int16 intDecalVolumeIndex, unsigned int w, unsigned int h, unsigned int d, const unsigned int xOffs, const unsigned int yOffs, const unsigned int zOffs, const Bounds *parentCellBounds, const Bounds *localIntDecalVolumeBounds)
{
  ?R_DecalVolumesGrid_AddToGridRecurse@@YAXAEBUAddToGridContext@@IAEBUDecalVolumesGridVolumeInfo@@GIIIIIIAEBUBounds@@2@Z(context, frame, volume, intDecalVolumeIndex, w, h, d, xOffs, yOffs, zOffs, parentCellBounds, localIntDecalVolumeBounds);
}

/*
==============
R_DecalVolumesGrid_CalcVolumeTransform
==============
*/

void __fastcall R_DecalVolumesGrid_CalcVolumeTransform(const Bounds *bounds, const vec3_t *pos, const tmat33_t<vec3_t> *axes, vec4_t *transform)
{
  ?R_DecalVolumesGrid_CalcVolumeTransform@@YAXPEBUBounds@@Tvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@QEATvec4_t@@@Z(bounds, pos, axes, transform);
}

/*
==============
R_DecalVolumesGrid_AddCommand
==============
*/

void __fastcall R_DecalVolumesGrid_AddCommand(const GfxViewInfo *viewInfo)
{
  ?R_DecalVolumesGrid_AddCommand@@YAXPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_DecalVolumesGrid_RegisterDvars
==============
*/

void R_DecalVolumesGrid_RegisterDvars(void)
{
  ?R_DecalVolumesGrid_RegisterDvars@@YAXXZ();
}

/*
==============
R_DecalVolumesGrid_UpdateGpuBuffers
==============
*/

void __fastcall R_DecalVolumesGrid_UpdateGpuBuffers(const GfxBackEndData *data)
{
  ?R_DecalVolumesGrid_UpdateGpuBuffers@@YAXPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_DecalVolumesGrid_PrepareVolumeInfo_SceneDynEnt
==============
*/

void __fastcall R_DecalVolumesGrid_PrepareVolumeInfo_SceneDynEnt(const GfxViewInfo *viewInfo, GfxSceneDynModel *sceneDynEnt, GfxModelDecalVolumeGridInfo *decalVolumeGridInfo)
{
  ?R_DecalVolumesGrid_PrepareVolumeInfo_SceneDynEnt@@YAXPEIBUGfxViewInfo@@PEAUGfxSceneDynModel@@PEAUGfxModelDecalVolumeGridInfo@@@Z(viewInfo, sceneDynEnt, decalVolumeGridInfo);
}

/*
==============
R_DecalVolumesGrid_DebugDrawEnabled
==============
*/

bool __fastcall R_DecalVolumesGrid_DebugDrawEnabled()
{
  return ?R_DecalVolumesGrid_DebugDrawEnabled@@YA_NXZ();
}

/*
==============
R_DecalVolumesGrid_PrepareVolumeInfo_SceneModel
==============
*/

void __fastcall R_DecalVolumesGrid_PrepareVolumeInfo_SceneModel(const GfxViewInfo *viewInfo, unsigned int modelIndex, const GfxSceneModel *const sceneModel, GfxModelDecalVolumeGridInfo *decalVolumeGridInfo)
{
  ?R_DecalVolumesGrid_PrepareVolumeInfo_SceneModel@@YAXPEIBUGfxViewInfo@@IQEBUGfxSceneModel@@PEAUGfxModelDecalVolumeGridInfo@@@Z(viewInfo, modelIndex, sceneModel, decalVolumeGridInfo);
}

/*
==============
R_DecalVolumesGrid_FillObjectSpaceBuffers
==============
*/

void __fastcall R_DecalVolumesGrid_FillObjectSpaceBuffers(const GfxViewInfo *viewInfo, unsigned int frame, ImageAtlasDrawingContext *drawingContext)
{
  ?R_DecalVolumesGrid_FillObjectSpaceBuffers@@YAXPEBUGfxViewInfo@@IAEAUImageAtlasDrawingContext@@@Z(viewInfo, frame, drawingContext);
}

/*
==============
R_DecalVolumesGrid_SetResources
==============
*/

void __fastcall R_DecalVolumesGrid_SetResources(GfxViewInfo *viewInfo)
{
  ?R_DecalVolumesGrid_SetResources@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_DecalVolumesGrid_DebugDrawOverlay
==============
*/

void __fastcall R_DecalVolumesGrid_DebugDrawOverlay(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float yOffsetText, unsigned int frame)
{
  ?R_DecalVolumesGrid_DebugDrawOverlay@@YAXW4LocalClientNum_t@@PEBUScreenPlacement@@MI@Z(localClientNum, scrPlace, yOffsetText, frame);
}

/*
==============
R_DecalVolumesGrid_DebugDraw
==============
*/

void __fastcall R_DecalVolumesGrid_DebugDraw(unsigned int frame, LocalClientNum_t localClientNum, const GfxViewParms *viewParms)
{
  ?R_DecalVolumesGrid_DebugDraw@@YAXIW4LocalClientNum_t@@AEBUGfxViewParms@@@Z(frame, localClientNum, viewParms);
}

/*
==============
R_DecalVolumesGrid_AddModelObjectSpace
==============
*/

void __fastcall R_DecalVolumesGrid_AddModelObjectSpace(unsigned int modelIndex, unsigned int frame, AddToGridContext *context, const DecalVolumesGridVolumeInfo *volume)
{
  ?R_DecalVolumesGrid_AddModelObjectSpace@@YAXIIAEAUAddToGridContext@@AEBUDecalVolumesGridVolumeInfo@@@Z(modelIndex, frame, context, volume);
}

/*
==============
R_DecalVolumesGrid_ToggleFrame
==============
*/

void __fastcall R_DecalVolumesGrid_ToggleFrame(unsigned int frame)
{
  ?R_DecalVolumesGrid_ToggleFrame@@YAXI@Z(frame);
}

/*
==============
R_DecalVolumeGrid_DecalVolumeDistanceToCameraApprox
==============
*/

double __fastcall R_DecalVolumeGrid_DecalVolumeDistanceToCameraApprox(const AddToGridContext *context, const vec3_t *worldOrigin, const vec3_t *halfSize)
{
  double result; 

  *(float *)&result = ?R_DecalVolumeGrid_DecalVolumeDistanceToCameraApprox@@YAMAEBUAddToGridContext@@AEBTvec3_t@@1@Z(context, worldOrigin, halfSize);
  return result;
}

/*
==============
R_DecalVolumesGrid_LinkDecalVolume
==============
*/

void __fastcall R_DecalVolumesGrid_LinkDecalVolume(unsigned int *cells, unsigned int cellIndex, unsigned int *decalIndices, unsigned int cellListIndex, unsigned __int16 intDecalVolumeIndex)
{
  ?R_DecalVolumesGrid_LinkDecalVolume@@YAXPEAII0IG@Z(cells, cellIndex, decalIndices, cellListIndex, intDecalVolumeIndex);
}

/*
==============
R_DecalVolumesGrid_DebugDraw3D
==============
*/

void __fastcall R_DecalVolumesGrid_DebugDraw3D(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, unsigned int frame)
{
  ?R_DecalVolumesGrid_DebugDraw3D@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@I@Z(gfxContext, viewInfo, data, frame);
}

/*
==============
R_DecalVolumesGrid_AddToGridBruteForce
==============
*/

void __fastcall R_DecalVolumesGrid_AddToGridBruteForce(const AddToGridContext *context, unsigned int frame, const DecalVolumesGridVolumeInfo *volume, unsigned __int16 intDecalVolumeIndex, const Bounds *localIntDecalVolumeBounds)
{
  ?R_DecalVolumesGrid_AddToGridBruteForce@@YAXAEBUAddToGridContext@@IAEBUDecalVolumesGridVolumeInfo@@GAEBUBounds@@@Z(context, frame, volume, intDecalVolumeIndex, localIntDecalVolumeBounds);
}

/*
==============
R_DecalVolumesGrid_PrepareVolumeInfo_SceneEnt
==============
*/

void __fastcall R_DecalVolumesGrid_PrepareVolumeInfo_SceneEnt(const GfxViewInfo *viewInfo, unsigned int dobjIndex, const GfxSceneEntity *sceneEnt, unsigned int modelIndex, GfxModelDecalVolumeGridInfo *decalVolumeGridInfo)
{
  ?R_DecalVolumesGrid_PrepareVolumeInfo_SceneEnt@@YAXPEIBUGfxViewInfo@@IPEBUGfxSceneEntity@@IPEAUGfxModelDecalVolumeGridInfo@@@Z(viewInfo, dobjIndex, sceneEnt, modelIndex, decalVolumeGridInfo);
}

/*
==============
R_DecalVolumesGrid_Shutdown
==============
*/

void R_DecalVolumesGrid_Shutdown(void)
{
  ?R_DecalVolumesGrid_Shutdown@@YAXXZ();
}

/*
==============
RB_DecalVolumesGrid_WaitWorkerCmd
==============
*/
void RB_DecalVolumesGrid_WaitWorkerCmd(unsigned int frame)
{
  if ( s_decalVolumesGrid.decalVolumeGridFrameData[frame].numVolumes )
    Sys_WaitWorkerCmdsOfType(WRKCMD_DECAL_VOLUMES_FILL_BUFFER_GRID);
}

/*
==============
R_AllocateCellListIndex
==============
*/
__int64 R_AllocateCellListIndex(unsigned int frame, unsigned int count)
{
  __int64 v2; 
  unsigned int numDecalIndices; 

  v2 = frame;
  numDecalIndices = s_decalVolumesGrid.decalVolumeGridFrameData[v2].numDecalIndices;
  s_decalVolumesGrid.decalVolumeGridFrameData[v2].numDecalIndices = numDecalIndices + count;
  if ( numDecalIndices + count <= 0x4000 )
    return numDecalIndices;
  R_WarnOncePerFrame(R_WARN_TOO_MANY_DECAL_VOLUMES_GRID_INDICES);
  return 0i64;
}

/*
==============
R_DecalVolumeGrid_CalculateMaxSize
==============
*/
__int64 R_DecalVolumeGrid_CalculateMaxSize(const GfxDecalVolumeMaterial *material, const GfxDecalVolumeMask *mask)
{
  GfxImage *v2; 
  unsigned __int16 height; 
  unsigned __int16 width; 
  GfxImage *v6; 
  GfxImage *v7; 
  GfxImage *v8; 
  GfxImage *v9; 
  GfxImage *v10; 
  GfxImage *blendMap; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 

  v2 = material->channels[0];
  height = 0;
  width = 0;
  if ( v2 )
  {
    width = 0;
    if ( v2->width )
      width = v2->width;
    if ( v2->height )
      height = v2->height;
  }
  v6 = material->channels[1];
  if ( v6 )
  {
    if ( v6->width > width )
      width = v6->width;
    if ( v6->height > height )
      height = v6->height;
  }
  v7 = material->channels[2];
  if ( v7 )
  {
    if ( v7->width > width )
      width = v7->width;
    if ( v7->height > height )
      height = v7->height;
  }
  v8 = material->channels[3];
  if ( v8 )
  {
    if ( v8->width > width )
      width = v8->width;
    if ( v8->height > height )
      height = v8->height;
  }
  v9 = material->channels[4];
  if ( v9 )
  {
    if ( v9->width > width )
      width = v9->width;
    if ( v9->height > height )
      height = v9->height;
  }
  v10 = material->channels[5];
  if ( v10 )
  {
    if ( v10->width > width )
      width = v10->width;
    if ( v10->height > height )
      height = v10->height;
  }
  if ( mask )
  {
    blendMap = mask->blendMap;
    if ( blendMap->width > width )
      width = blendMap->width;
    if ( blendMap->height > height )
      height = blendMap->height;
  }
  if ( width > height )
    height = width;
  v12 = height;
  if ( !height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  v13 = __lzcnt(v12);
  v14 = 31 - v13;
  if ( 31 - v13 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)(31 - v13), "unsigned", v14) )
    __debugbreak();
  if ( (unsigned __int8)v14 > 0xCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.h", 163, ASSERT_TYPE_ASSERT, "(res <= 12)", (const char *)&queryFormat, "res <= DECAL_VOLUMES_ATLAS_SLICE_SIZE_LOG2") )
    __debugbreak();
  return (unsigned __int8)v14;
}

/*
==============
R_DecalVolumeGrid_DecalVolumeDistanceToCameraApprox
==============
*/
float R_DecalVolumeGrid_DecalVolumeDistanceToCameraApprox(const AddToGridContext *context, const vec3_t *worldOrigin, const vec3_t *halfSize)
{
  __int128 v3; 
  float v4; 

  v3 = LODWORD(worldOrigin->v[1]);
  *(float *)&v3 = worldOrigin->v[1] - context->cameraOrigin.v[1];
  v4 = worldOrigin->v[2] - context->cameraOrigin.v[2];
  _XMM1 = LODWORD(halfSize->v[1]);
  __asm
  {
    vmaxss  xmm0, xmm1, dword ptr [r8]
    vmaxss  xmm2, xmm0, dword ptr [r8+8]
  }
  *(float *)&v3 = fsqrt((float)((float)(*(float *)&v3 * *(float *)&v3) + (float)((float)(worldOrigin->v[0] - context->cameraOrigin.v[0]) * (float)(worldOrigin->v[0] - context->cameraOrigin.v[0]))) + (float)(v4 * v4)) - *(float *)&_XMM2;
  _XMM3 = v3;
  __asm { vmaxss  xmm0, xmm3, xmm1 }
  return *(float *)&_XMM0;
}

/*
==============
R_DecalVolumesGrid_AddCommand
==============
*/
void R_DecalVolumesGrid_AddCommand(const GfxViewInfo *viewInfo)
{
  __int64 decalVolumeIndex; 
  const GfxViewInfo *data; 
  int v3; 

  decalVolumeIndex = viewInfo->input.data->decalVolumeIndex;
  if ( r_decalVolumes->current.enabled && r_decalVolumesObjSpaceModel->current.enabled )
  {
    if ( s_decalVolumesGrid.decalVolumeGridFrameData[decalVolumeIndex].numVolumes )
    {
      data = viewInfo;
      v3 = decalVolumeIndex;
      Sys_AddWorkerCmd(WRKCMD_DECAL_VOLUMES_FILL_BUFFER_GRID, &data);
    }
  }
}

/*
==============
R_DecalVolumesGrid_AddDobjModel
==============
*/
void R_DecalVolumesGrid_AddDobjModel(unsigned int dobjIndex, unsigned int modelIndex, unsigned int frame, AddToGridContext *context, const DecalVolumesGridVolumeInfo *volume)
{
  __int64 v5; 
  __int64 v6; 
  const DObj *obj; 
  int SkelTimeStamp; 
  __int64 v9; 
  int ModelRootBoneIndex; 
  const XModel *Model; 
  __int64 decalVolumesInfo; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int numDrawData; 
  XModelMaterialOverride *modelMaterialOverrides; 
  Material *overrideMaterial; 
  unsigned int v20; 
  __int64 v21; 
  MaterialOverride *v22; 
  GfxDecalVolumeMaterial *decalVolumeMaterial; 
  unsigned __int16 v24; 
  const DObjAnimMat *v25; 
  float v26; 
  float v27; 
  AddToGridContext *v28; 
  unsigned int v29; 
  float v33; 
  tmat33_t<vec3_t> *axis; 
  Material *dvMaterial; 
  int dvMateriala; 
  GfxDecalVolumeMask *blendMapOverride; 
  DecalVolumesNormalBlendMode normalBlendModeOverride; 
  unsigned __int8 color[4]; 
  int v40; 
  float outDecalScale; 
  int v42; 
  unsigned int framea; 
  DecalVolumeStreamingInfo outStreamingInfo; 
  __int64 v45; 
  AddToGridContext *contexta; 
  DecalVolumesGridVolumeInfo *v47; 
  DObjAnimMat *baseMat; 
  __int64 v49; 
  tmat43_t<vec3_t> in2; 
  vec2_t blendMapAdjust; 
  vec3_t worldOrigin; 
  tmat43_t<vec3_t> in1; 
  DObjSkelMat skelMat; 
  DObjSkelMat v55; 
  tmat33_t<vec3_t> v56; 
  tmat43_t<vec3_t> out; 
  DObjPartBits partBits; 
  DecalVolumeIntermediate dstDecalVolume; 

  v47 = (DecalVolumesGridVolumeInfo *)volume;
  v5 = frame;
  contexta = context;
  framea = frame;
  v6 = modelIndex;
  obj = scene.sceneDObj[dobjIndex].obj;
  SkelTimeStamp = CL_Pose_GetSkelTimeStamp();
  if ( DObjSkelExists(obj, SkelTimeStamp) )
  {
    v9 = v5;
    *(_DWORD *)color = -1;
    DObjLock(obj);
    DObjGetHidePartBits(obj, &partBits);
    if ( (unsigned int)v6 >= DObjGetNumModels(obj) )
    {
      dvMateriala = DObjGetNumModels(obj);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 2117, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( DObjGetNumModels( dobj ) )", "modelIndex doesn't index DObjGetNumModels( dobj )\n\t%i not in [0, %i)", v6, dvMateriala) )
        __debugbreak();
    }
    ModelRootBoneIndex = DObjGetModelRootBoneIndex(obj, v6);
    v40 = ModelRootBoneIndex;
    Model = DObjGetModel(obj, v6);
    decalVolumesInfo = (__int64)Model->decalVolumesInfo;
    v49 = decalVolumesInfo;
    if ( decalVolumesInfo )
    {
      v13 = 0;
      baseMat = Model->baseMat;
      if ( *(_DWORD *)(decalVolumesInfo + 8) )
      {
        v14 = 16 * v6;
        v45 = 16 * v6;
        do
        {
          v15 = *(_QWORD *)decalVolumesInfo + 112i64 * v13;
          v16 = ModelRootBoneIndex + *(_DWORD *)(v15 + 80);
          if ( v16 >= 0x100 )
          {
            LODWORD(dvMaterial) = 256;
            LODWORD(axis) = ModelRootBoneIndex + *(_DWORD *)(v15 + 80);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", axis, dvMaterial) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v16 & 0x1F)) & partBits.array[(unsigned __int64)v16 >> 5]) == 0 && DObjSkelIsBoneUpToDate(obj, v16) )
          {
            numDrawData = s_decalVolumesGrid.decalVolumeGridFrameData[v9].numDrawData;
            if ( numDrawData >= 0x800 )
              break;
            modelMaterialOverrides = obj->modelMaterialOverrides;
            overrideMaterial = *(Material **)(v15 + 64);
            if ( modelMaterialOverrides )
            {
              v20 = *(unsigned int *)((char *)&modelMaterialOverrides->materialOverrideCount + v14);
              v21 = 0i64;
              if ( v20 )
              {
                while ( 1 )
                {
                  v22 = (*(MaterialOverride ***)((char *)&modelMaterialOverrides->materialOverride + v14))[v21];
                  if ( v22 )
                  {
                    if ( v22->overrideType == MATERIAL_OVERRIDETYPE_STICKER_REPLACE && v22->originalMaterial == overrideMaterial )
                      break;
                  }
                  v21 = (unsigned int)(v21 + 1);
                  if ( (unsigned int)v21 >= v20 )
                    goto LABEL_22;
                }
                overrideMaterial = v22->overrideMaterial;
              }
            }
LABEL_22:
            decalVolumeMaterial = overrideMaterial->decalVolumeMaterial;
            if ( !decalVolumeMaterial || (decalVolumeMaterial->flags & 0x4000) == 0 )
            {
              v24 = truncate_cast<unsigned short,unsigned int>(numDrawData);
              ++s_decalVolumesGrid.decalVolumeGridFrameData[v9].numDrawData;
              v42 = *(_DWORD *)(v15 + 80);
              v25 = &obj->skel.mat[v16];
              if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 50, ASSERT_TYPE_ASSERT, "(boneMtx)", (const char *)&queryFormat, "boneMtx") )
                __debugbreak();
              LocalConvertQuatToSkelMat(v25, &skelMat);
              in2.m[0].v[0] = skelMat.axis.m[0].v[0];
              in2.m[0].v[1] = skelMat.axis.m[0].v[1];
              in2.m[0].v[2] = skelMat.axis.m[0].v[2];
              in2.m[1] = skelMat.axis.m[1].xyz;
              in2.m[2].v[0] = skelMat.axis.m[2].v[0];
              in2.m[2].v[1] = skelMat.axis.m[2].v[1];
              v26 = skelMat.origin.v[0] + contexta->viewOffset.v[0];
              in2.m[2].v[2] = skelMat.axis.m[2].v[2];
              v27 = skelMat.origin.v[1] + contexta->viewOffset.v[1];
              in2.m[3].v[0] = v26;
              in2.m[3].v[2] = skelMat.origin.v[2] + contexta->viewOffset.v[2];
              in2.m[3].v[1] = v27;
              LocalConvertQuatToInverseSkelMat(&baseMat[v42], &v55);
              in1.m[0].v[0] = v55.axis.m[0].v[0];
              in1.m[0].v[1] = v55.axis.m[0].v[1];
              in1.m[0].v[2] = v55.axis.m[0].v[2];
              in1.m[1] = v55.axis.m[1].xyz;
              in1.m[2] = v55.axis.m[2].xyz;
              in1.m[3] = v55.origin.xyz;
              MatrixMultiply43(&in1, &in2, &out);
              MatrixTransformVector43((const vec3_t *)v15, &out, &worldOrigin);
              MatrixTransformVector((const vec3_t *)(v15 + 12), (const tmat33_t<vec3_t> *)&out, v56.m);
              MatrixTransformVector((const vec3_t *)(v15 + 24), (const tmat33_t<vec3_t> *)&out, &v56.m[1]);
              MatrixTransformVector((const vec3_t *)(v15 + 36), (const tmat33_t<vec3_t> *)&out, &v56.m[2]);
              LOBYTE(normalBlendModeOverride) = 2;
              outDecalScale = FLOAT_1_0;
              blendMapOverride = *(GfxDecalVolumeMask **)(v15 + 72);
              v28 = contexta;
              blendMapAdjust.v[0] = FLOAT_1_0;
              blendMapAdjust.v[1] = 0.0;
              R_FillDecalVolumeGeneric(&dstDecalVolume, contexta, &worldOrigin, (const vec3_t *)v15, (const vec3_t *)(v15 + 48), (const tmat33_t<vec3_t> *)(v15 + 12), overrideMaterial, blendMapOverride, &blendMapAdjust, normalBlendModeOverride, (const vec2_t *)(v15 + 84), (const vec4_t *)(v15 + 92), color, -1, -100000.0, MODEL_DECAL_VOLUME, 0, 0);
              v29 = framea;
              R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace(framea, v24, v28, &dstDecalVolume, &worldOrigin, &v56, &outDecalScale, &outStreamingInfo);
              if ( outDecalScale >= 1.0 )
              {
                R_DecalVolumesGrid_SetDrawDataDebug(v29, v28, v24, &dstDecalVolume, &worldOrigin, &v56, &outStreamingInfo, NULL);
                if ( v28->numTotalCells == 1 )
                {
                  R_DecalVolumesGrid_AddTo1x1Grid(v29, v47, v24);
                }
                else
                {
                  _XMM0 = LODWORD(dstDecalVolume.halfSize.v[0]);
                  __asm
                  {
                    vmaxss  xmm1, xmm0, dword ptr [rbp+240h+dstDecalVolume.halfSize+4]
                    vmaxss  xmm3, xmm1, dword ptr [rbp+240h+dstDecalVolume.halfSize+8]
                  }
                  v33 = *(float *)v15;
                  LODWORD(_XMM0) = *(_DWORD *)(v15 + 4);
                  in2.m[0].v[2] = *(float *)(v15 + 8);
                  in2.m[0].v[0] = v33;
                  in2.m[0].v[1] = *(float *)&_XMM0;
                  in2.m[1].v[0] = *(float *)&_XMM3;
                  in2.m[1].v[1] = *(float *)&_XMM3;
                  in2.m[1].v[2] = *(float *)&_XMM3;
                  R_DecalVolumesGrid_AddToGridBruteForce(v28, v29, v47, v24, (const Bounds *)&in2);
                }
              }
              else
              {
                --s_decalVolumesGrid.decalVolumeGridFrameData[v9].numDrawData;
              }
              v14 = v45;
            }
            ModelRootBoneIndex = v40;
          }
          decalVolumesInfo = v49;
          ++v13;
        }
        while ( v13 < *(_DWORD *)(v49 + 8) );
      }
    }
    DObjUnlock(obj);
  }
}

/*
==============
R_DecalVolumesGrid_AddModelObjectSpace
==============
*/
void R_DecalVolumesGrid_AddModelObjectSpace(unsigned int modelIndex, unsigned int frame, AddToGridContext *context, const DecalVolumesGridVolumeInfo *volume)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  const DObj *obj; 
  __int64 v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  unsigned int numDrawData; 
  Material *v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  GfxDecalVolumeMaterial *decalVolumeMaterial; 
  float *v23; 
  AddToGridContext *v24; 
  unsigned int v25; 
  tmat33_t<vec3_t> *axis; 
  Material *dvMaterial; 
  GfxDecalVolumeMask *blendMapOverride; 
  DecalVolumesNormalBlendMode normalBlendModeOverride; 
  unsigned __int8 color[4]; 
  float outDecalScale; 
  unsigned int framea; 
  DecalVolumeStreamingInfo outStreamingInfo; 
  __int64 v34; 
  DecalVolumesGridVolumeInfo *volumea; 
  AddToGridContext *contexta; 
  __int64 v37; 
  tmat43_t<vec3_t> in2; 
  tmat33_t<vec3_t> mat; 
  vec2_t blendMapAdjust; 
  vec3_t out; 
  DecalVolumeIntermediate skelMat; 
  DObjPartBits partBits; 

  v4 = 152i64 * modelIndex;
  volumea = (DecalVolumesGridVolumeInfo *)volume;
  contexta = context;
  framea = frame;
  v5 = *(__int64 *)((char *)&scene.sceneModel[0].model + v4);
  v34 = v4;
  v6 = *(_QWORD *)(v5 + 672);
  v37 = v6;
  if ( v6 )
  {
    obj = scene.sceneModel[modelIndex].obj;
    *(_DWORD *)color = -1;
    v8 = frame;
    DObjGetHidePartBits(obj, &partBits);
    v9 = *(float *)((char *)&scene.sceneModel[0].placement.scale + v4);
    if ( v9 != 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 217, ASSERT_TYPE_ASSERT, "( ( placement->scale == 1.0f ) )", "( placement->scale ) = %g", v9) )
      __debugbreak();
    v10 = *(float *)((char *)scene.sceneModel[0].placement.base.origin.v + v4);
    *(vec4_t *)mat.m[0].v = *(vec4_t *)((char *)&scene.sceneModel[0].placement.base.quat + v4);
    mat.m[2].v[1] = FLOAT_2_0;
    v11 = *(float *)((char *)&scene.sceneModel[0].placement.base.origin.v[1] + v4);
    mat.m[1].v[1] = v10;
    v12 = *(float *)((char *)&scene.sceneModel[0].placement.base.origin.v[2] + v4);
    mat.m[1].v[2] = v11;
    mat.m[2].v[0] = v12;
    LocalConvertQuatToSkelMat((const DObjAnimMat *)&mat, (DObjSkelMat *)&skelMat);
    in2.m[0].v[0] = skelMat.origin.v[0];
    in2.m[0].v[1] = skelMat.origin.v[1];
    in2.m[0].v[2] = skelMat.origin.v[2];
    in2.m[1] = *(vec3_t *)((char *)skelMat.axis.m + 4);
    in2.m[2] = *(vec3_t *)((char *)&skelMat.axis.m[1] + 8);
    in2.m[3].v[0] = skelMat.halfSize.v[0] + 0.0;
    v13 = 0;
    in2.m[3].v[2] = skelMat.halfSize.v[2] + 0.0;
    in2.m[3].v[1] = skelMat.halfSize.v[1] + 0.0;
    if ( *(_DWORD *)(v6 + 8) )
    {
      do
      {
        v14 = *(_QWORD *)v6 + 112i64 * v13;
        v15 = *(unsigned int *)(v14 + 80);
        if ( (unsigned int)v15 >= 0x100 )
        {
          LODWORD(dvMaterial) = 256;
          LODWORD(axis) = *(_DWORD *)(v14 + 80);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", axis, dvMaterial) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v15 & 0x1F)) & partBits.array[v15 >> 5]) == 0 )
        {
          numDrawData = s_decalVolumesGrid.decalVolumeGridFrameData[v8].numDrawData;
          if ( numDrawData >= 0x800 )
            return;
          v17 = *(Material **)(v14 + 64);
          v18 = *(__int64 *)((char *)&scene.sceneModel[0].obj + v4);
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 272);
            if ( v19 )
            {
              v20 = 0i64;
              if ( *(_DWORD *)v19 )
              {
                while ( 1 )
                {
                  v21 = *(_QWORD *)(*(_QWORD *)(v19 + 8) + 8 * v20);
                  if ( v21 )
                  {
                    if ( *(_DWORD *)(v21 + 24) == 3 && *(Material **)v21 == v17 )
                      break;
                  }
                  v20 = (unsigned int)(v20 + 1);
                  if ( (unsigned int)v20 >= *(_DWORD *)v19 )
                    goto LABEL_20;
                }
                v17 = *(Material **)(v21 + 8);
              }
            }
          }
LABEL_20:
          decalVolumeMaterial = v17->decalVolumeMaterial;
          if ( !decalVolumeMaterial || (decalVolumeMaterial->flags & 0x4000) == 0 )
          {
            ++s_decalVolumesGrid.decalVolumeGridFrameData[v8].numDrawData;
            MatrixTransformVector43((const vec3_t *)v14, &in2, &out);
            if ( (tmat33_t<vec3_t> *)(v14 + 12) == &mat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
              __debugbreak();
            mat.m[0].v[0] = (float)((float)(in2.m[0].v[0] * *(float *)(v14 + 12)) + (float)(in2.m[1].v[0] * *(float *)(v14 + 16))) + (float)(in2.m[2].v[0] * *(float *)(v14 + 20));
            mat.m[0].v[1] = (float)((float)(in2.m[0].v[1] * *(float *)(v14 + 12)) + (float)(in2.m[1].v[1] * *(float *)(v14 + 16))) + (float)(in2.m[2].v[1] * *(float *)(v14 + 20));
            mat.m[0].v[2] = (float)((float)(in2.m[0].v[2] * *(float *)(v14 + 12)) + (float)(in2.m[1].v[2] * *(float *)(v14 + 16))) + (float)(in2.m[2].v[2] * *(float *)(v14 + 20));
            if ( (vec3_t *)(v14 + 24) == &mat.row1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
              __debugbreak();
            mat.m[1].v[0] = (float)((float)(in2.m[0].v[0] * *(float *)(v14 + 24)) + (float)(in2.m[1].v[0] * *(float *)(v14 + 28))) + (float)(in2.m[2].v[0] * *(float *)(v14 + 32));
            mat.m[1].v[1] = (float)((float)(in2.m[0].v[1] * *(float *)(v14 + 24)) + (float)(in2.m[1].v[1] * *(float *)(v14 + 28))) + (float)(in2.m[2].v[1] * *(float *)(v14 + 32));
            v23 = (float *)(v14 + 36);
            mat.m[1].v[2] = (float)((float)(in2.m[0].v[2] * *(float *)(v14 + 24)) + (float)(in2.m[1].v[2] * *(float *)(v14 + 28))) + (float)(in2.m[2].v[2] * *(float *)(v14 + 32));
            if ( (vec3_t *)(v14 + 36) == &mat.row2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
              __debugbreak();
            mat.m[2].v[0] = (float)((float)(in2.m[0].v[0] * *v23) + (float)(in2.m[1].v[0] * *(float *)(v14 + 40))) + (float)(in2.m[2].v[0] * *(float *)(v14 + 44));
            mat.m[2].v[1] = (float)((float)(in2.m[0].v[1] * *(float *)(v14 + 36)) + (float)(in2.m[1].v[1] * *(float *)(v14 + 40))) + (float)(in2.m[2].v[1] * *(float *)(v14 + 44));
            LOBYTE(normalBlendModeOverride) = 2;
            mat.m[2].v[2] = (float)((float)(in2.m[0].v[2] * *v23) + (float)(in2.m[1].v[2] * *(float *)(v14 + 40))) + (float)(in2.m[2].v[2] * *(float *)(v14 + 44));
            outDecalScale = FLOAT_1_0;
            blendMapOverride = *(GfxDecalVolumeMask **)(v14 + 72);
            v24 = contexta;
            blendMapAdjust.v[0] = FLOAT_1_0;
            blendMapAdjust.v[1] = 0.0;
            R_FillDecalVolumeGeneric(&skelMat, contexta, &out, (const vec3_t *)v14, (const vec3_t *)(v14 + 48), (const tmat33_t<vec3_t> *)(v14 + 12), v17, blendMapOverride, &blendMapAdjust, normalBlendModeOverride, (const vec2_t *)(v14 + 84), (const vec4_t *)(v14 + 92), color, -1, -100000.0, MODEL_DECAL_VOLUME, 0, 0);
            v25 = framea;
            R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace(framea, numDrawData, v24, &skelMat, &out, &mat, &outDecalScale, &outStreamingInfo);
            if ( outDecalScale >= 1.0 )
            {
              R_DecalVolumesGrid_SetDrawDataDebug(v25, v24, numDrawData, &skelMat, &out, &mat, &outStreamingInfo, NULL);
              if ( v24->numTotalCells == 1 )
                R_DecalVolumesGrid_AddTo1x1Grid(v25, volumea, numDrawData);
              else
                R_DecalVolumesGrid_AddToGridObject(v24, v25, volumea, (const vec3_t *)v14, &skelMat.halfSize, numDrawData);
              v4 = v34;
            }
            else
            {
              v4 = v34;
              --s_decalVolumesGrid.decalVolumeGridFrameData[v8].numDrawData;
            }
          }
        }
        v6 = v37;
        ++v13;
      }
      while ( v13 < *(_DWORD *)(v37 + 8) );
    }
  }
}

/*
==============
R_DecalVolumesGrid_AddTo1x1Grid
==============
*/
void R_DecalVolumesGrid_AddTo1x1Grid(unsigned int frame, const DecalVolumesGridVolumeInfo *volume, unsigned __int16 intDecalVolumeIndex)
{
  __int64 v3; 
  int numDecalIndices; 
  unsigned int v7; 

  v3 = frame;
  numDecalIndices = s_decalVolumesGrid.decalVolumeGridFrameData[v3].numDecalIndices;
  s_decalVolumesGrid.decalVolumeGridFrameData[v3].numDecalIndices = numDecalIndices + 1;
  if ( (unsigned int)(numDecalIndices + 1) > 0x4000 )
    R_WarnOncePerFrame(R_WARN_TOO_MANY_DECAL_VOLUMES_GRID_INDICES);
  v7 = 0;
  if ( (unsigned int)(numDecalIndices + 1) <= 0x4000 )
    v7 = numDecalIndices;
  if ( v7 )
    R_DecalVolumesGrid_LinkDecalVolume(s_decalVolumesGrid.decalVolumeGridFrameData[v3].volumeCells, volume->m_firstCellIndex, s_decalVolumesGrid.decalVolumeGridFrameData[v3].drawDataIndices, v7, intDecalVolumeIndex);
}

/*
==============
R_DecalVolumesGrid_AddToEntityDebugVolume
==============
*/
void R_DecalVolumesGrid_AddToEntityDebugVolume(unsigned int frame, int entNum, const DecalVolumesGridVolumeInfo *params)
{
  int integer; 
  DecalVolumesGridFrameData *v4; 

  integer = r_decalVolumesGridDebugDrawVolumeEnt->current.integer;
  if ( integer >= 0 && integer == entNum )
  {
    v4 = &s_decalVolumesGrid.decalVolumeGridFrameData[frame];
    v4->entityDebugVolumeIndices[v4->entityDebugVolumeIndexCount++] = params - v4->volumeInfos;
  }
}

/*
==============
R_DecalVolumesGrid_AddToGridBruteForce
==============
*/
void R_DecalVolumesGrid_AddToGridBruteForce(const AddToGridContext *context, unsigned int frame, const DecalVolumesGridVolumeInfo *volume, unsigned __int16 intDecalVolumeIndex, const Bounds *localIntDecalVolumeBounds)
{
  float v5; 
  float v6; 
  float v7; 
  unsigned int v9; 
  const AddToGridContext *v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  double v18; 
  float v19; 
  double v20; 
  float v21; 
  double v22; 
  unsigned int v27; 
  unsigned int v29; 
  __int128 v31; 
  unsigned int v34; 
  __int128 v35; 
  unsigned int v38; 
  __int128 v39; 
  __int128 v41; 
  __int128 v42; 
  __int128 v44; 
  __int128 v45; 
  unsigned int v46; 
  __int128 v48; 
  unsigned int v49; 
  __int128 v51; 
  __int128 v52; 
  unsigned int v53; 
  int v54; 
  unsigned int v55; 
  int v56; 
  __int64 v57; 
  int numDecalIndices; 
  unsigned int v59; 
  __int128 v60; 
  __int128 v61; 
  unsigned int v63; 
  int v65; 
  int v66; 
  unsigned int v68; 
  int v69; 
  unsigned int v70; 
  double v71; 

  v5 = context->volumeMinCorner.v[2];
  v6 = context->volumeMinCorner.v[0];
  v7 = context->volumeMinCorner.v[1];
  v9 = frame;
  v10 = context;
  v11 = localIntDecalVolumeBounds->midPoint.v[1];
  v12 = localIntDecalVolumeBounds->midPoint.v[2];
  v13 = (float)(v11 - localIntDecalVolumeBounds->halfSize.v[1]) - v7;
  v14 = (float)(v12 - localIntDecalVolumeBounds->halfSize.v[2]) - v5;
  v15 = (float)(localIntDecalVolumeBounds->midPoint.v[0] + localIntDecalVolumeBounds->halfSize.v[0]) - v6;
  v16 = (float)(v12 + localIntDecalVolumeBounds->halfSize.v[2]) - v5;
  v17 = (float)(v11 + localIntDecalVolumeBounds->halfSize.v[1]) - v7;
  I_fclamp((float)((float)(localIntDecalVolumeBounds->midPoint.v[0] - localIntDecalVolumeBounds->halfSize.v[0]) - v6) * context->volumeSizeRcp.v[0], 0.0, 1.0);
  I_fclamp(v13 * v10->volumeSizeRcp.v[1], 0.0, 1.0);
  I_fclamp(v14 * v10->volumeSizeRcp.v[2], 0.0, 1.0);
  v18 = I_fclamp(v15 * v10->volumeSizeRcp.v[0], 0.0, 1.0);
  v19 = *(float *)&v18;
  v20 = I_fclamp(v17 * v10->volumeSizeRcp.v[1], 0.0, 1.0);
  v21 = *(float *)&v20;
  v22 = I_fclamp(v16 * v10->volumeSizeRcp.v[2], 0.0, 1.0);
  _XMM6 = 0i64;
  _XMM8 = 0i64;
  __asm
  {
    vroundss xmm6, xmm6, xmm2, 1
    vroundss xmm8, xmm8, xmm1, 1
  }
  v27 = (int)*(float *)&_XMM6;
  _XMM3 = 0i64;
  v29 = (int)*(float *)&_XMM8;
  v69 = (int)*(float *)&_XMM6;
  __asm { vroundss xmm3, xmm3, xmm0, 1 }
  v66 = (int)*(float *)&_XMM8;
  v31 = LODWORD(v10->volumeGridSize.v[0]);
  *(float *)&v31 = (float)(v10->volumeGridSize.v[0] * v19) + 1.0;
  _XMM1 = v31;
  __asm { vminss  xmm2, xmm1, xmm4 }
  v34 = (int)*(float *)&_XMM2;
  v35 = LODWORD(v10->volumeGridSize.v[1]);
  *(float *)&v35 = (float)(v10->volumeGridSize.v[1] * v21) + 1.0;
  _XMM1 = v35;
  __asm { vminss  xmm2, xmm1, xmm5 }
  v38 = (int)*(float *)&_XMM2;
  v39 = LODWORD(v10->volumeGridSize.v[2]);
  *(float *)&v39 = (float)(*(float *)&v39 * *(float *)&v22) + 1.0;
  _XMM1 = v39;
  v42 = _XMM8;
  *(float *)&v42 = *(float *)&_XMM8 * v10->step.v[0];
  v41 = v42;
  __asm { vminss  xmm2, xmm1, xmm7 }
  v44 = _XMM6;
  *(float *)&v44 = (float)(*(float *)&_XMM6 * v10->step.v[1]) + v10->cellMinCorner.v[1];
  v45 = v44;
  v46 = (int)*(float *)&_XMM2;
  v48 = v41;
  *(float *)&v48 = *(float *)&v41 + v10->cellMinCorner.v[0];
  _XMM2 = v48;
  v49 = (int)*(float *)&_XMM3;
  v68 = v38;
  v70 = v46;
  v65 = (int)*(float *)&_XMM3;
  __asm { vunpcklps xmm2, xmm2, xmm8 }
  v71 = *(double *)&_XMM2;
  if ( (int)*(float *)&_XMM3 < v46 )
  {
    v51 = COERCE_UNSIGNED_INT((float)(*(float *)&_XMM3 * v10->step.v[2]) + v10->cellMinCorner.v[2]);
    v52 = HIDWORD(v71);
    while ( 1 )
    {
      v53 = v27;
      v63 = v27;
      v54 = v49 * volume->m_volumeSize[0] * volume->m_volumeSize[1];
      if ( v27 < v38 )
        break;
LABEL_15:
      v61 = v51;
      *(float *)&v61 = *(float *)&v51 + v10->step.v[2];
      v51 = v61;
      v65 = ++v49;
      v52 = v45;
      if ( v49 >= v46 )
        return;
    }
    while ( 1 )
    {
      v55 = v29;
      v56 = v53 * volume->m_volumeSize[0];
      if ( v29 < v34 )
        break;
LABEL_13:
      v60 = v52;
      *(float *)&v60 = *(float *)&v52 + v10->step.v[1];
      v52 = v60;
      v63 = ++v53;
      if ( v53 >= v38 )
      {
        v49 = v65;
        v27 = v69;
        v46 = v70;
        goto LABEL_15;
      }
    }
    v57 = v9;
    while ( 1 )
    {
      numDecalIndices = s_decalVolumesGrid.decalVolumeGridFrameData[v57].numDecalIndices;
      s_decalVolumesGrid.decalVolumeGridFrameData[v57].numDecalIndices = numDecalIndices + 1;
      if ( (unsigned int)(numDecalIndices + 1) > 0x4000 )
        R_WarnOncePerFrame(R_WARN_TOO_MANY_DECAL_VOLUMES_GRID_INDICES);
      v59 = 0;
      if ( (unsigned int)(numDecalIndices + 1) <= 0x4000 )
        v59 = numDecalIndices;
      if ( !v59 )
        break;
      R_DecalVolumesGrid_LinkDecalVolume(s_decalVolumesGrid.decalVolumeGridFrameData[v57].volumeCells, v54 + v56 + v55 + volume->m_firstCellIndex, s_decalVolumesGrid.decalVolumeGridFrameData[v57].drawDataIndices, v59, intDecalVolumeIndex);
      if ( ++v55 >= v34 )
      {
        v53 = v63;
        v29 = v66;
        v10 = context;
        v38 = v68;
        v9 = frame;
        goto LABEL_13;
      }
    }
  }
}

/*
==============
R_DecalVolumesGrid_AddToGridObject
==============
*/
void R_DecalVolumesGrid_AddToGridObject(const AddToGridContext *context, unsigned int frame, const DecalVolumesGridVolumeInfo *volume, const vec3_t *decalOrigin, const vec3_t *decalHalfSize, unsigned __int16 intDecalVolumeIndex)
{
  __int64 v9; 
  Bounds localIntDecalVolumeBounds; 

  localIntDecalVolumeBounds.midPoint.v[0] = decalOrigin->v[0];
  _XMM0 = LODWORD(decalHalfSize->v[1]);
  __asm
  {
    vmaxss  xmm1, xmm0, dword ptr [rax]
    vmaxss  xmm3, xmm1, dword ptr [rax+8]
  }
  v9 = *(_QWORD *)&decalOrigin->y;
  *(_QWORD *)&localIntDecalVolumeBounds.midPoint.y = v9;
  localIntDecalVolumeBounds.halfSize.v[0] = *(float *)&_XMM3;
  localIntDecalVolumeBounds.halfSize.v[1] = *(float *)&_XMM3;
  localIntDecalVolumeBounds.halfSize.v[2] = *(float *)&_XMM3;
  R_DecalVolumesGrid_AddToGridBruteForce(context, frame, volume, intDecalVolumeIndex, &localIntDecalVolumeBounds);
}

/*
==============
R_DecalVolumesGrid_AddToGridRecurse
==============
*/
void R_DecalVolumesGrid_AddToGridRecurse(const AddToGridContext *context, const unsigned int frame, const DecalVolumesGridVolumeInfo *volume, unsigned __int16 intDecalVolumeIndex, unsigned int w, unsigned int h, unsigned int d, const unsigned int xOffs, const unsigned int yOffs, const unsigned int zOffs, const Bounds *parentCellBounds, const Bounds *localIntDecalVolumeBounds)
{
  __int64 v14; 
  unsigned int v16; 
  unsigned int CellListIndex; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  unsigned int v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  unsigned int v46; 
  unsigned int v48; 
  Bounds v51; 

  v14 = frame;
  if ( !parentCellBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 607, ASSERT_TYPE_ASSERT, "(b0)", (const char *)&queryFormat, "b0") )
    __debugbreak();
  if ( !localIntDecalVolumeBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 608, ASSERT_TYPE_ASSERT, "(b1)", (const char *)&queryFormat, "b1") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(parentCellBounds->midPoint.v[0] - localIntDecalVolumeBounds->midPoint.v[0]) & _xmm) <= (float)(localIntDecalVolumeBounds->halfSize.v[0] + parentCellBounds->halfSize.v[0]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(parentCellBounds->midPoint.v[1] - localIntDecalVolumeBounds->midPoint.v[1]) & _xmm) <= (float)(localIntDecalVolumeBounds->halfSize.v[1] + parentCellBounds->halfSize.v[1]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(parentCellBounds->midPoint.v[2] - localIntDecalVolumeBounds->midPoint.v[2]) & _xmm) <= (float)(localIntDecalVolumeBounds->halfSize.v[2] + parentCellBounds->halfSize.v[2]) )
  {
    if ( w > 1 || h > 1 || d > 1 )
    {
      v18 = yOffs;
      v19 = 1;
      v20 = 1;
      v21 = zOffs;
      v22 = h + yOffs;
      v23 = 1;
      if ( w >> 1 > 1 )
        v20 = w >> 1;
      if ( h >> 1 > 1 )
        v23 = h >> 1;
      if ( d >> 1 > 1 )
        v19 = d >> 1;
      v24 = d + zOffs;
      v25 = w + xOffs;
      v46 = v19;
      if ( zOffs < d + zOffs )
      {
        do
        {
          v26 = v24 - v21;
          v27 = v19;
          if ( v19 > v26 )
            v27 = v26;
          v48 = v27;
          if ( !v27 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1432, ASSERT_TYPE_ASSERT, "(clampedD > 0)", (const char *)&queryFormat, "clampedD > 0") )
              __debugbreak();
            v19 = v46;
          }
          v28 = v18;
          if ( v18 < v22 )
          {
            do
            {
              v29 = v22;
              v30 = v23;
              v31 = v29 - v28;
              if ( v23 > v31 )
                v30 = v31;
              if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1437, ASSERT_TYPE_ASSERT, "(clampedH > 0)", (const char *)&queryFormat, "clampedH > 0") )
                __debugbreak();
              v32 = xOffs;
              if ( xOffs < v25 )
              {
                v35 = (float)v30;
                v36 = (float)v48;
                do
                {
                  v37 = v20;
                  if ( v20 > v25 - v32 )
                    v37 = v25 - v32;
                  if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1442, ASSERT_TYPE_ASSERT, "(clampedW > 0)", (const char *)&queryFormat, "clampedW > 0") )
                    __debugbreak();
                  v38 = context->step.v[0];
                  v39 = context->step.v[1];
                  v40 = context->step.v[2];
                  v41 = (float)v32;
                  v42 = (float)(v41 * v38) + context->volumeMinCorner.v[0];
                  v33 = (float)v28;
                  v43 = (float)(v39 * v33) + context->volumeMinCorner.v[1];
                  v34 = (float)v21;
                  v44 = (float)(v40 * v34) + context->volumeMinCorner.v[2];
                  v45 = (float)v37;
                  v51.halfSize.v[0] = (float)((float)((float)((float)(v45 * v38) + v42) + v42) * 0.5) - v42;
                  v51.halfSize.v[2] = (float)((float)((float)((float)(v36 * v40) + v44) + v44) * 0.5) - v44;
                  v51.midPoint.v[0] = (float)((float)((float)(v45 * v38) + v42) + v42) * 0.5;
                  v51.midPoint.v[1] = (float)((float)((float)(v35 * v39) + v43) + v43) * 0.5;
                  v51.midPoint.v[2] = (float)((float)((float)(v36 * v40) + v44) + v44) * 0.5;
                  v51.halfSize.v[1] = v51.midPoint.v[1] - v43;
                  R_DecalVolumesGrid_AddToGridRecurse(context, frame, volume, intDecalVolumeIndex, v20, v23, v46, v32, v28, v21, &v51, localIntDecalVolumeBounds);
                  v32 += v20;
                }
                while ( v32 < v25 );
              }
              v22 = h + yOffs;
              v28 += v23;
            }
            while ( v28 < h + yOffs );
            v19 = v46;
            v18 = yOffs;
          }
          v24 = d + zOffs;
          v21 += v19;
        }
        while ( v21 < d + zOffs );
      }
    }
    else
    {
      v16 = xOffs + volume->m_firstCellIndex + volume->m_volumeSize[0] * (yOffs + zOffs * volume->m_volumeSize[1]);
      CellListIndex = R_AllocateCellListIndex(v14, 1u);
      if ( CellListIndex )
        R_DecalVolumesGrid_LinkDecalVolume(s_decalVolumesGrid.decalVolumeGridFrameData[v14].volumeCells, v16, s_decalVolumesGrid.decalVolumeGridFrameData[v14].drawDataIndices, CellListIndex, intDecalVolumeIndex);
    }
  }
}

/*
==============
R_DecalVolumesGrid_AllocateVolumeCells
==============
*/
__int64 R_DecalVolumesGrid_AllocateVolumeCells(unsigned int frame, int count)
{
  volatile int *p_numVolumeCells; 
  unsigned __int32 v4; 

  p_numVolumeCells = &s_decalVolumesGrid.decalVolumeGridFrameData[frame].numVolumeCells;
  if ( ((unsigned __int8)p_numVolumeCells & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_decalVolumesGrid.decalVolumeGridFrameData[frame].numVolumeCells) )
    __debugbreak();
  v4 = _InterlockedExchangeAdd(p_numVolumeCells, count);
  if ( (int)(v4 + count) <= 20480 )
    return v4;
  R_WarnOncePerFrame(R_WARN_TOO_MANY_DECAL_VOLUMES_GRID_CELLS);
  return 0xFFFFFFFFi64;
}

/*
==============
R_DecalVolumesGrid_AllocateVolumeInfo
==============
*/
DecalVolumesGridVolumeInfo *R_DecalVolumesGrid_AllocateVolumeInfo(unsigned int frame, int *allocatedVolumeInfoSlot)
{
  DecalVolumesGridFrameData *v3; 
  unsigned int v4; 
  DecalVolumesGridVolumeInfo *volumeInfos; 

  v3 = &s_decalVolumesGrid.decalVolumeGridFrameData[frame];
  if ( (((_BYTE)v3 + 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v3->numVolumes) )
    __debugbreak();
  v4 = _InterlockedExchangeAdd(&v3->numVolumes, 1u);
  if ( v4 < 0x800 )
  {
    volumeInfos = v3->volumeInfos;
    *allocatedVolumeInfoSlot = v4;
    return &volumeInfos[v4];
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_TOO_MANY_DECAL_VOLUMES_GRID_VOLUMES);
    return 0i64;
  }
}

/*
==============
R_DecalVolumesGrid_CalcVolumeTransform
==============
*/
void R_DecalVolumesGrid_CalcVolumeTransform(const Bounds *bounds, const vec3_t *pos, const tmat33_t<vec3_t> *axes, vec4_t *transform)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 

  v4 = bounds->midPoint.v[1] - bounds->halfSize.v[1];
  v5 = bounds->halfSize.v[0];
  v6 = bounds->midPoint.v[0] - v5;
  v7 = bounds->midPoint.v[2] - bounds->halfSize.v[2];
  v8 = (float)((float)((float)(axes->m[0].v[0] * v6) + (float)(v4 * axes->m[1].v[0])) + (float)(v7 * axes->m[2].v[0])) + pos->v[0];
  v9 = (float)(v6 * axes->m[0].v[1]) + (float)(v4 * axes->m[1].v[1]);
  v10 = v4 * axes->m[1].v[2];
  v11 = FLOAT_1_0;
  v12 = (float)(v9 + (float)(v7 * axes->m[2].v[1])) + pos->v[1];
  v13 = (float)((float)((float)(v6 * axes->m[0].v[2]) + v10) + (float)(v7 * axes->m[2].v[2])) + pos->v[2];
  if ( v5 >= 0.001 )
    v14 = 0.5 / v5;
  else
    v14 = FLOAT_1_0;
  transform->v[0] = axes->m[0].v[0] * v14;
  transform->v[1] = v14 * axes->m[0].v[1];
  transform->v[2] = v14 * axes->m[0].v[2];
  v15 = bounds->halfSize.v[1];
  if ( v15 >= 0.001 )
    v16 = 0.5 / v15;
  else
    v16 = FLOAT_1_0;
  transform[1].v[0] = v16 * axes->m[1].v[0];
  transform[1].v[1] = v16 * axes->m[1].v[1];
  transform[1].v[2] = v16 * axes->m[1].v[2];
  v17 = bounds->halfSize.v[2];
  if ( v17 >= 0.001 )
    v11 = 0.5 / v17;
  transform[2].v[0] = v11 * axes->m[2].v[0];
  transform[2].v[1] = v11 * axes->m[2].v[1];
  transform[2].v[2] = v11 * axes->m[2].v[2];
  transform->v[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v12 * transform->v[1]) + (float)(v8 * transform->v[0])) + (float)(v13 * transform->v[2])) ^ _xmm);
  transform[1].v[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v12 * transform[1].v[1]) + (float)(v8 * transform[1].v[0])) + (float)(v13 * transform[1].v[2])) ^ _xmm);
  transform[2].v[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v12 * transform[2].v[1]) + (float)(v8 * transform[2].v[0])) + (float)(v13 * transform[2].v[2])) ^ _xmm);
}

/*
==============
R_DecalVolumesGrid_CalculateVolumeDensity
==============
*/
float R_DecalVolumesGrid_CalculateVolumeDensity(float distanceToCamera, const vec3_t *cameraOrigin)
{
  I_fclamp((float)(distanceToCamera - 100.0) * 0.00052631577, 0.0, 1.0);
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 2 }
  return *(float *)&_XMM3 * 16.0;
}

/*
==============
R_DecalVolumesGrid_DebugDraw3D
==============
*/
void R_DecalVolumesGrid_DebugDraw3D(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, unsigned int frame)
{
  GfxCmdBufContext v5; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int *p_hitCount; 
  unsigned int v11; 
  DecalVolumeDrawHits *p_drawHits; 
  char *v13; 
  __int64 v14; 
  unsigned __int8 flags; 
  __m256i v16; 
  __int128 v17; 
  GfxWrappedBuffer *p_decalVolumeMaterialInfoBuffer; 
  __int64 integer; 
  GfxCmdBufContext v20; 
  char dataa[52]; 
  char v22; 

  v5 = *gfxContext;
  if ( r_decalVolumesShowMaterialName->current.enabled )
  {
    v7 = 0;
    v8 = frame;
    v9 = frame;
    p_hitCount = &s_decalVolumesGrid.decalVolumeGridFrameData[v8].drawHits.hitCount;
    v11 = *p_hitCount;
    p_drawHits = &s_decalVolumesGrid.decalVolumeGridFrameData[v8].drawHits;
    if ( *p_hitCount )
    {
      v13 = &v22;
      v14 = v11;
      do
      {
        flags = p_drawHits->hits[0].flags;
        *((_DWORD *)v13 - 1) = 0;
        v13 += 56;
        v16 = *(__m256i *)p_drawHits->hits[0].dv.center.v;
        v17 = *(_OWORD *)&p_drawHits->hits[0].dv.y.z;
        p_drawHits = (DecalVolumeDrawHits *)((char *)p_drawHits + 88);
        *(__m256i *)(v13 - 108) = v16;
        *((_DWORD *)v13 - 14) = 2 - ((flags & 2) != 0);
        *(_OWORD *)(v13 - 76) = v17;
        --v14;
      }
      while ( v14 );
    }
    p_decalVolumeMaterialInfoBuffer = &s_decalVolumesGrid.decalVolumeGridBuffers[v9].decalVolumeMaterialInfoBuffer;
    R_UpdateGfxWrappedBuffer(p_decalVolumeMaterialInfoBuffer, dataa, 56 * v11);
    integer = r_decalVolumesShowMaterialSelect->current.integer;
    if ( *p_hitCount )
    {
      do
      {
        if ( integer == -1 || (_DWORD)integer == v7 )
        {
          v20 = v5;
          RB_DecalVolumes_DrawOBB(&v20, viewInfo, data, p_decalVolumeMaterialInfoBuffer, v7, v7);
        }
        ++v7;
      }
      while ( v7 < *p_hitCount );
    }
  }
}

/*
==============
R_DecalVolumesGrid_DebugDraw
==============
*/
void R_DecalVolumesGrid_DebugDraw(unsigned int frame, LocalClientNum_t localClientNum, const GfxViewParms *viewParms)
{
  GfxCamera *p_camera; 
  DecalVolumesGridFrameData *v4; 
  tmat33_t<vec3_t> *p_axis; 
  int volumeIndex; 
  __int64 v7; 
  int v8; 
  int *entityDebugVolumeIndices; 
  const GfxSceneEntity *debugSceneEnt; 
  const DObj *obj; 
  unsigned int NumModels; 
  unsigned int v13; 
  const XModel *Model; 
  unsigned __int8 ModelRootBoneIndex; 
  DebugGlobals *p_debugGlobals; 
  int integer; 
  char v18; 
  int v19; 
  __int64 numVolumes; 
  __int64 v21; 
  int v22; 
  const dvar_t *v23; 
  unsigned int numDrawData; 
  __int64 v25; 
  __int64 v26; 
  unsigned __int8 v27; 
  GfxDecalVolumeDrawDataDebug *drawDataDebug; 
  DecalVolumeInstanceDebug *decalVolumeDebug; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  unsigned __int8 flags; 
  const vec4_t *v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  LocalClientNum_t localClientNuma; 
  LocalClientNum_t localClientNumb; 
  int frameb; 
  tmat33_t<vec3_t> *cameraAxis; 
  vec3_t halfSize; 
  vec3_t v52; 
  vec3_t origin; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v56; 
  Bounds bounds; 
  tmat33_t<vec3_t> outTagMat; 

  p_camera = &viewParms->camera;
  localClientNuma = localClientNum;
  v4 = &s_decalVolumesGrid.decalVolumeGridFrameData[frame];
  p_axis = &viewParms->camera.axis;
  *(_QWORD *)halfSize.v = p_camera;
  cameraAxis = p_axis;
  *(_QWORD *)origin.v = v4;
  if ( r_decalVolumesGridDebugDrawVolumeSmodelId->current.integer > 0 )
  {
    volumeIndex = v4->smodelDebugVolumeIndex;
    if ( volumeIndex != -1 )
    {
      R_DecalVolumesGrid_DrawDebugVolume(frame, localClientNum, &p_camera->origin, p_axis, volumeIndex, 1, 1);
      localClientNum = localClientNuma;
      p_axis = cameraAxis;
    }
  }
  v7 = 0i64;
  if ( r_decalVolumesGridDebugDrawVolumeEnt->current.integer != -1 )
  {
    v8 = 0;
    if ( v4->entityDebugVolumeIndexCount > 0 )
    {
      entityDebugVolumeIndices = v4->entityDebugVolumeIndices;
      do
      {
        R_DecalVolumesGrid_DrawDebugVolume(frame, localClientNum, &p_camera->origin, p_axis, *entityDebugVolumeIndices, 1, 1);
        localClientNum = localClientNuma;
        ++entityDebugVolumeIndices;
        p_axis = cameraAxis;
        ++v8;
      }
      while ( v8 < v4->entityDebugVolumeIndexCount );
      v7 = 0i64;
    }
    debugSceneEnt = v4->debugSceneEnt;
    *(_QWORD *)v52.v = debugSceneEnt;
    if ( debugSceneEnt )
    {
      obj = debugSceneEnt->obj;
      NumModels = DObjGetNumModels(obj);
      v13 = 0;
      if ( NumModels )
      {
        do
        {
          Model = DObjGetModel(obj, v13);
          ModelRootBoneIndex = DObjGetModelRootBoneIndex(obj, v13);
          CG_DObjGetWorldBoneMatrix(*(const cpose_t **)(*(_QWORD *)v52.v + 1400i64), obj, ModelRootBoneIndex, &outTagMat, &outOrigin);
          XModelGetBounds(Model, &bounds);
          p_debugGlobals = &frontEndDataOut->debugGlobals;
          if ( r_decalVolumesGridDebugDrawVolumesDepthTest->current.enabled )
            R_AddDebugBoxOrientedDepthTest(p_debugGlobals, &outOrigin, &bounds, &outTagMat, &colorBlue);
          else
            R_AddDebugBoxOriented(p_debugGlobals, &outOrigin, &bounds, &outTagMat, &colorBlue);
          ++v13;
        }
        while ( v13 < NumModels );
        v4 = *(DecalVolumesGridFrameData **)origin.v;
        p_camera = *(GfxCamera **)halfSize.v;
      }
    }
  }
  integer = r_decalVolumesGridDebugDrawVolumes->current.integer;
  if ( integer )
  {
    switch ( integer )
    {
      case 1:
        v18 = -1;
        break;
      case 2:
        v18 = 1;
        break;
      case 3:
        v18 = 2;
        break;
      case 4:
        v18 = 4;
        break;
      default:
        v18 = 0;
        if ( integer == 5 )
          v18 = 8;
        break;
    }
    v19 = 0;
    numVolumes = v4->numVolumes;
    if ( (int)numVolumes > 0 )
    {
      v21 = 0i64;
      do
      {
        if ( ((unsigned __int8)v18 & v4->volumeInfos[v21].m_volumeType) != 0 )
          R_DecalVolumesGrid_DrawDebugVolume(frame, localClientNuma, &p_camera->origin, cameraAxis, v19, r_decalVolumesGridDebugDrawVolumesInfo->current.enabled, r_decalVolumesGridDebugDrawCells->current.enabled);
        ++v19;
        ++v21;
        --numVolumes;
      }
      while ( numVolumes );
      v7 = 0i64;
    }
  }
  if ( r_decalVolumes->current.enabled && r_decalVolumesObjSpaceModel->current.enabled )
  {
    frameb = r_decalVolumesGridDebug->current.integer;
    if ( frameb > 1 )
    {
      v22 = r_decalVolumesGridDebugType->current.integer;
      if ( v22 )
        localClientNumb = 1 << (v22 - 1);
      else
        LOBYTE(localClientNumb) = -1;
      v23 = DVARVEC3_r_decalVolumesScale;
      if ( !DVARVEC3_r_decalVolumesScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      numDrawData = v4->numDrawData;
      halfSize = *(vec3_t *)&v23->current.string;
      if ( numDrawData )
      {
        v25 = numDrawData;
        v26 = 0i64;
        v27 = localClientNumb;
        do
        {
          drawDataDebug = v4->drawDataDebug;
          decalVolumeDebug = v4->decalVolumeDebug;
          if ( (v27 & drawDataDebug[v26].flags) != 0 )
          {
            v30 = decalVolumeDebug[v7].dv.x.v[2];
            *(_QWORD *)axis.m[0].v = *(_QWORD *)decalVolumeDebug[v7].dv.x.v;
            *(_QWORD *)axis.row1.v = *(_QWORD *)decalVolumeDebug[v7].dv.y.v;
            *(_QWORD *)axis.row2.v = *(_QWORD *)decalVolumeDebug[v7].dv.z.v;
            v31 = decalVolumeDebug[v7].dv.center.v[1];
            origin.v[0] = p_camera->origin.v[0] + decalVolumeDebug[v7].dv.center.v[0];
            v32 = v31 + p_camera->origin.v[1];
            v33 = p_camera->origin.v[2];
            axis.m[0].v[2] = v30;
            v34 = decalVolumeDebug[v7].dv.y.v[2];
            origin.v[1] = v32;
            v35 = v33 + decalVolumeDebug[v7].dv.center.v[2];
            axis.m[1].v[2] = v34;
            v36 = decalVolumeDebug[v7].dv.z.v[2];
            origin.v[2] = v35;
            axis.m[2].v[2] = v36;
            R_DecalVolumes_DrawDebugAxis(&origin, &axis, &halfSize);
            if ( frameb > 2 )
            {
              flags = drawDataDebug[v26].flags;
              if ( (flags & 1) != 0 )
              {
                v38 = &colorGreen;
              }
              else
              {
                v38 = &colorCyan;
                if ( (flags & 2) != 0 )
                  v38 = &colorMagenta;
              }
              v39 = decalVolumeDebug[v7].dv.x.v[2];
              v40 = decalVolumeDebug[v7].dv.center.v[1];
              *(_QWORD *)v56.m[0].v = *(_QWORD *)decalVolumeDebug[v7].dv.x.v;
              *(_QWORD *)v56.row1.v = *(_QWORD *)decalVolumeDebug[v7].dv.y.v;
              *(_QWORD *)v56.row2.v = *(_QWORD *)decalVolumeDebug[v7].dv.z.v;
              v41 = p_camera->origin.v[0] + decalVolumeDebug[v7].dv.center.v[0];
              v42 = v40 + p_camera->origin.v[1];
              v56.m[0].v[2] = v39;
              v43 = decalVolumeDebug[v7].dv.y.v[2];
              v52.v[0] = v41;
              v44 = p_camera->origin.v[2] + decalVolumeDebug[v7].dv.center.v[2];
              v56.m[1].v[2] = v43;
              v45 = decalVolumeDebug[v7].dv.z.v[2];
              v52.v[2] = v44;
              v52.v[1] = v42;
              v56.m[2].v[2] = v45;
              R_DecalVolumes_DrawDebugOBB(&v52, &v56, &halfSize, v38);
            }
            v27 = localClientNumb;
          }
          ++v26;
          ++v7;
          --v25;
        }
        while ( v25 );
      }
    }
  }
}

/*
==============
R_DecalVolumesGrid_DebugDrawEnabled
==============
*/
bool R_DecalVolumesGrid_DebugDrawEnabled()
{
  return r_decalVolumes->current.enabled && r_decalVolumesObjSpaceModel->current.enabled && r_decalVolumesGridDebug->current.integer || r_decalVolumesGridDebugDrawVolumeSmodelId->current.integer > 0 || r_decalVolumesGridDebugDrawVolumeEnt->current.integer != -1 || r_decalVolumesGridDebugDrawVolumes->current.integer;
}

/*
==============
R_DecalVolumesGrid_DebugDrawOverlay
==============
*/
void R_DecalVolumesGrid_DebugDrawOverlay(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float yOffsetText, unsigned int frame)
{
  __int64 v4; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  unsigned int v11; 
  DecalVolumeDrawHits *p_drawHits; 
  DecalVolumeDrawHit *v13; 
  bool v14; 
  const char *markVfxName; 
  float distanceMetric; 
  vec4_t v17; 
  const GfxDecalVolumeMask *v18; 
  const GfxImage *blendMapOverride; 
  float yOffsetTexta[4]; 
  vec4_t materialColor; 
  MaterialDebugInfo debugInfo; 

  yOffsetTexta[0] = yOffsetText;
  v4 = frame;
  if ( r_decalVolumes->current.enabled && r_decalVolumesObjSpaceModel->current.enabled && r_decalVolumesGridDebug->current.integer > 0 )
  {
    CG_DrawStringExt(scrPlace, 0.0, yOffsetText, "Object space decals", &colorWhite, 0, 1, 12.0, 1);
    yOffsetTexta[0] = yOffsetTexta[0] + 14.0;
    v7 = j_va("Volumes %5u/%5u HWM %5u", s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.numFrameVolumes, 2048i64, s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.volumesHighWatermark);
    CG_DrawStringExt(scrPlace, 12.0, yOffsetTexta[0], v7, &colorWhite, 0, 1, 12.0, 1);
    yOffsetTexta[0] = yOffsetTexta[0] + 14.0;
    v8 = j_va("Cells   %5u/%5u HWM %5u", s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.numFrameCells, 20480i64, s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.cellsHighWatermark);
    CG_DrawStringExt(scrPlace, 12.0, yOffsetTexta[0], v8, &colorWhite, 0, 1, 12.0, 1);
    yOffsetTexta[0] = yOffsetTexta[0] + 14.0;
    v9 = j_va("Indices %5u/%5u HWM %5u", s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.numFrameIndices, 0x4000i64, s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.indicesHighWatermark);
    CG_DrawStringExt(scrPlace, 12.0, yOffsetTexta[0], v9, &colorWhite, 0, 1, 12.0, 1);
    yOffsetTexta[0] = yOffsetTexta[0] + 14.0;
    v10 = j_va("Decals  %5u/%5u HWM %5u", s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.numFrameDecals, 2048i64, s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.decalsHighWatermark);
    CG_DrawStringExt(scrPlace, 12.0, yOffsetTexta[0], v10, &colorWhite, 0, 1, 12.0, 1);
    yOffsetTexta[0] = yOffsetTexta[0] + 14.0;
  }
  if ( r_decalVolumesShowMaterialName->current.enabled )
  {
    v11 = 0;
    p_drawHits = &s_decalVolumesGrid.decalVolumeGridFrameData[v4].drawHits;
    if ( p_drawHits->hitCount )
    {
      do
      {
        v13 = &p_drawHits->hits[v11];
        memset_0(&debugInfo, 0, sizeof(debugInfo));
        v14 = (v13->flags & 2) == 0;
        markVfxName = NULL;
        distanceMetric = (float)v13->streamingInfo.distanceMetric;
        debugInfo.streamingData.material.distanceMetricQuantized = v13->streamingInfo.distanceMetric;
        debugInfo.streamingData.material.neededSize = v13->streamingInfo.neededSize;
        debugInfo.streamingData.material.distanceMetric = distanceMetric;
        if ( v14 )
        {
          debugInfo.decalType = 2;
        }
        else
        {
          markVfxName = v13->markVfxName;
          debugInfo.decalType = 1;
        }
        switch ( v11 & 7 )
        {
          case 0u:
            v17 = colorRed;
            break;
          case 1u:
            v17 = colorGreen;
            break;
          case 2u:
            v17 = colorBlue;
            break;
          case 3u:
            v17 = colorYellow;
            break;
          case 4u:
            v17 = colorMagenta;
            break;
          case 5u:
            v17 = colorCyan;
            break;
          case 6u:
            v17 = colorOrange;
            break;
          case 7u:
            v17 = colorTeal;
            break;
        }
        v18 = v13->blendMapOverride;
        materialColor = v17;
        if ( v18 )
          blendMapOverride = v18->blendMap;
        else
          blendMapOverride = NULL;
        R_DecalVolumes_DrawDebugMaterial(localClientNum, scrPlace, yOffsetTexta, v11++, &debugInfo, &materialColor, v13->material, blendMapOverride, markVfxName);
      }
      while ( v11 < p_drawHits->hitCount );
    }
  }
}

/*
==============
R_DecalVolumesGrid_DrawDebugVolume
==============
*/
void R_DecalVolumesGrid_DrawDebugVolume(unsigned int frame, LocalClientNum_t localClientNum, const vec3_t *cameraOrigin, const tmat33_t<vec3_t> *cameraAxis, int volumeIndex, bool drawInfo, bool drawCells)
{
  signed __int64 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  void *v17; 
  unsigned int v18; 
  const vec3_t *v19; 
  DecalVolumesGridFrameData *v21; 
  DecalVolumesGridVolumeInfo *v22; 
  DecalVolumesGridVolumeType m_volumeType; 
  vec4_t *v24; 
  float v25; 
  __int128 v26; 
  float v27; 
  float v28; 
  GfxScaledPlacement *p_placement; 
  float v30; 
  __int64 m_objectIndex; 
  const DObj *obj; 
  unsigned __int8 ModelRootBoneIndex; 
  unsigned __int16 v34; 
  DynEntityPose *PoseFromClientId; 
  int v36; 
  int v37; 
  int v38; 
  unsigned int m_firstCellIndex; 
  float v40; 
  float v41; 
  float v42; 
  unsigned int v44; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  __int64 v49; 
  int v50; 
  unsigned int *volumeCells; 
  unsigned int v52; 
  unsigned int v53; 
  __int64 v54; 
  unsigned int *drawDataIndices; 
  unsigned int v56; 
  __int64 v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  DebugGlobals *p_debugGlobals; 
  DecalVolumesGridVolumeType v68; 
  const char *v69; 
  float v70; 
  float v71; 
  __int64 duration; 
  unsigned int v73; 
  unsigned int v74; 
  vec4_t *v75; 
  unsigned int v76; 
  int v77; 
  unsigned int v78; 
  float v79; 
  float v80; 
  unsigned int v81; 
  float v82; 
  DecalVolumesGridVolumeInfo *v84; 
  vec3_t origin; 
  vec3_t pos; 
  Bounds bounds; 
  tmat33_t<vec3_t> axis; 
  vec3_t xyz; 
  vec3_t end; 
  vec3_t v91; 
  vec3_t v92; 
  vec4_t color; 
  char dest[2048]; 
  char text[2048]; 
  __int128 v96; 
  __int128 v97; 
  __int128 v98; 
  __int128 v99; 
  __int128 v100; 
  __int128 v101; 
  __int128 v102; 
  __int128 v103; 
  __int128 v104; 

  v17 = alloca(v7);
  v18 = volumeIndex;
  v19 = cameraOrigin;
  v104 = v8;
  v103 = v9;
  v102 = v10;
  v101 = v11;
  v100 = v12;
  v99 = v13;
  v98 = v14;
  v97 = v15;
  v96 = v16;
  v21 = &s_decalVolumesGrid.decalVolumeGridFrameData[frame];
  v22 = &v21->volumeInfos[volumeIndex];
  m_volumeType = v22->m_volumeType;
  v84 = v22;
  if ( m_volumeType == DECAL_VOLUMES_GRID_VOLUME_TYPE_SMODEL )
  {
    v24 = &colorWhite;
  }
  else if ( m_volumeType == DECAL_VOLUMES_GRID_VOLUME_TYPE_MODEL )
  {
    v24 = &colorTeal;
  }
  else
  {
    v24 = &colorRed;
    if ( m_volumeType == DECAL_VOLUMES_GRID_VOLUME_TYPE_DOBJ_MODEL )
      v24 = &colorMagenta;
  }
  v75 = v24;
  v26 = LODWORD(v22->m_volumeBounds.midPoint.v[0]);
  *(float *)&v26 = v22->m_volumeBounds.midPoint.v[0] - v22->m_volumeBounds.halfSize.v[0];
  v25 = *(float *)&v26;
  v27 = v22->m_volumeBounds.midPoint.v[1] - v22->m_volumeBounds.halfSize.v[1];
  v28 = v22->m_volumeBounds.midPoint.v[2] - v22->m_volumeBounds.halfSize.v[2];
  v82 = v27;
  switch ( m_volumeType )
  {
    case DECAL_VOLUMES_GRID_VOLUME_TYPE_MODEL:
      p_placement = &scene.sceneModel[v22->m_objectIndex].placement;
      UnitQuatToAxis(&p_placement->base.quat, &axis);
      v30 = p_placement->base.origin.v[2];
      *(_QWORD *)origin.v = *(_QWORD *)p_placement->base.origin.v;
      origin.v[2] = v30;
      break;
    case DECAL_VOLUMES_GRID_VOLUME_TYPE_DOBJ_MODEL:
      m_objectIndex = v22->m_objectIndex;
      obj = scene.sceneDObj[m_objectIndex].obj;
      ModelRootBoneIndex = DObjGetModelRootBoneIndex(obj, v22->m_modelIndex);
      CG_DObjGetWorldBoneMatrix(scene.sceneDObj[m_objectIndex].info.pose, obj, ModelRootBoneIndex, &axis, &origin);
      break;
    case DECAL_VOLUMES_GRID_VOLUME_TYPE_DYNMODEL:
      v34 = truncate_cast<unsigned short,unsigned int>(v22->m_modelIndex);
      PoseFromClientId = DynEnt_GetPoseFromClientId(localClientNum, v34, DYNENT_BASIS_MODEL);
      UnitQuatToAxis(&PoseFromClientId->pose.quat, &axis);
      origin = PoseFromClientId->pose.origin;
      break;
    default:
      MatrixIdentity33(&axis);
      origin.v[0] = 0.0;
      origin.v[1] = 0.0;
      origin.v[2] = 0.0;
      break;
  }
  if ( drawCells )
  {
    v36 = v22->m_volumeSize[2];
    v37 = v22->m_volumeSize[1];
    v38 = v22->m_volumeSize[0];
    m_firstCellIndex = v22->m_firstCellIndex;
    v40 = (float)(v22->m_volumeBounds.halfSize.v[1] / (float)v37) * 2.0;
    v41 = (float)(v22->m_volumeBounds.halfSize.v[2] / (float)v36) * 2.0;
    v42 = (float)(v22->m_volumeBounds.halfSize.v[0] / (float)v38) * 2.0;
    bounds.halfSize.v[1] = v40 * 0.5;
    bounds.halfSize.v[2] = v41 * 0.5;
    xyz.v[2] = v28 + (float)(v41 * 0.5);
    bounds.halfSize.v[0] = v42 * 0.5;
    *(float *)&v26 = *(float *)&v26 + (float)(v42 * 0.5);
    _XMM2 = v26;
    bounds.midPoint.v[2] = xyz.v[2];
    v44 = 0;
    v77 = v37;
    v81 = v36;
    v78 = m_firstCellIndex;
    v74 = 0;
    v80 = v27 + (float)(v40 * 0.5);
    __asm { vunpcklps xmm1, xmm2, xmm1 }
    v79 = v41;
    *(double *)bounds.midPoint.v = *(double *)&_XMM1;
    if ( v36 )
    {
      do
      {
        v46 = 0;
        v73 = 0;
        if ( v37 )
        {
          do
          {
            v47 = 0;
            if ( v38 )
            {
              v48 = m_firstCellIndex + v38 * (v46 + v37 * v44);
              v76 = v48;
              do
              {
                v49 = v47 + v48;
                v50 = 0;
                volumeCells = v21->volumeCells;
                color = colorWhite;
                v52 = volumeCells[v49];
                v53 = HIWORD(v52);
                v54 = HIWORD(v52);
                if ( HIWORD(v52) )
                {
                  do
                  {
                    LODWORD(v54) = HIWORD(v21->drawDataIndices[v54]);
                    ++v50;
                  }
                  while ( (_DWORD)v54 );
                }
                if ( v52 )
                {
                  drawDataIndices = v21->drawDataIndices;
                  v56 = 1;
                  if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 2821, ASSERT_TYPE_ASSERT, "(decalIndex)", (const char *)&queryFormat, "decalIndex") )
                    __debugbreak();
                  v57 = HIWORD(drawDataIndices[v53]);
                  if ( HIWORD(drawDataIndices[v53]) )
                  {
                    do
                    {
                      LODWORD(v57) = HIWORD(drawDataIndices[v57]);
                      ++v56;
                    }
                    while ( (_DWORD)v57 );
                  }
                  if ( v56 != v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 2830, ASSERT_TYPE_ASSERT, "(numDecalsInCell == numDecalsInCell0)", (const char *)&queryFormat, "numDecalsInCell == numDecalsInCell0") )
                    __debugbreak();
                  color = colorPink;
                  Com_sprintf(dest, 0x800ui64, "Num cell decals: %u", v56);
                  v19 = cameraOrigin;
                  v58 = (float)((float)((float)(bounds.midPoint.v[1] * axis.m[1].v[0]) + (float)(bounds.midPoint.v[0] * axis.m[0].v[0])) + (float)(bounds.midPoint.v[2] * axis.m[2].v[0])) + origin.v[0];
                  v59 = (float)((float)((float)(bounds.midPoint.v[1] * axis.m[1].v[1]) + (float)(bounds.midPoint.v[0] * axis.m[0].v[1])) + (float)(bounds.midPoint.v[2] * axis.m[2].v[1])) + origin.v[1];
                  v60 = (float)((float)((float)(bounds.midPoint.v[1] * axis.m[1].v[2]) + (float)(bounds.midPoint.v[0] * axis.m[0].v[2])) + (float)(bounds.midPoint.v[2] * axis.m[2].v[2])) + origin.v[2];
                  v61 = (float)((float)(v59 - cameraOrigin->v[1]) * (float)(v59 - cameraOrigin->v[1])) + (float)((float)(v58 - cameraOrigin->v[0]) * (float)(v58 - cameraOrigin->v[0]));
                  xyz.v[1] = v59;
                  v62 = (float)(unsigned int)(int)fsqrt(v61 + (float)((float)(v60 - cameraOrigin->v[2]) * (float)(v60 - cameraOrigin->v[2])));
                  xyz.v[0] = v58;
                  xyz.v[2] = v60;
                  if ( v62 >= 10.0 )
                    v63 = v62 * 0.00075000001;
                  else
                    v63 = FLOAT_0_025;
                  CL_AddDebugString(&xyz, &colorBlueHeat, v63, dest, 0, 1);
                  R_AddDebugStar(&frontEndDataOut->debugGlobals, &xyz, 2.0, &color);
                }
                R_AddDebugBoxOrientedDepthTest(&frontEndDataOut->debugGlobals, &origin, &bounds, &axis, &color);
                v48 = v76;
                ++v47;
                bounds.midPoint.v[0] = v42 + bounds.midPoint.v[0];
              }
              while ( v47 < v38 );
              v46 = v73;
              v37 = v77;
              v44 = v74;
              m_firstCellIndex = v78;
            }
            v73 = ++v46;
            bounds.midPoint.v[0] = v25 + (float)(v42 * 0.5);
            bounds.midPoint.v[1] = v40 + bounds.midPoint.v[1];
          }
          while ( v46 < v37 );
          v41 = v79;
        }
        ++v44;
        bounds.midPoint.v[1] = v80;
        bounds.midPoint.v[2] = v41 + bounds.midPoint.v[2];
        v74 = v44;
      }
      while ( v44 < v81 );
      v22 = v84;
      v18 = volumeIndex;
    }
  }
  v64 = v22->m_volumeBounds.halfSize.v[0];
  end.v[0] = (float)(v64 * axis.m[0].v[0]) + origin.v[0];
  end.v[1] = (float)(v64 * axis.m[0].v[1]) + origin.v[1];
  end.v[2] = (float)(v64 * axis.m[0].v[2]) + origin.v[2];
  v65 = v22->m_volumeBounds.halfSize.v[1];
  v91.v[0] = (float)(v65 * axis.m[1].v[0]) + origin.v[0];
  v91.v[1] = (float)(v65 * axis.m[1].v[1]) + origin.v[1];
  v91.v[2] = (float)(v65 * axis.m[1].v[2]) + origin.v[2];
  v66 = v22->m_volumeBounds.halfSize.v[2];
  v92.v[0] = (float)(v66 * axis.m[2].v[0]) + origin.v[0];
  v92.v[1] = (float)(v66 * axis.m[2].v[1]) + origin.v[1];
  v92.v[2] = (float)(v66 * axis.m[2].v[2]) + origin.v[2];
  pos.v[0] = (float)((float)((float)(axis.m[0].v[0] * v25) + (float)(v82 * axis.m[1].v[0])) + (float)(axis.m[2].v[0] * v28)) + origin.v[0];
  pos.v[1] = (float)((float)((float)(axis.m[0].v[1] * v25) + (float)(v82 * axis.m[1].v[1])) + (float)(axis.m[2].v[1] * v28)) + origin.v[1];
  pos.v[2] = (float)((float)((float)(axis.m[0].v[2] * v25) + (float)(v82 * axis.m[1].v[2])) + (float)(axis.m[2].v[2] * v28)) + origin.v[2];
  R_AddDebugStar(&frontEndDataOut->debugGlobals, &pos, 1.0, &colorYellow);
  p_debugGlobals = &frontEndDataOut->debugGlobals;
  if ( r_decalVolumesGridDebugDrawVolumesDepthTest->current.enabled )
  {
    R_AddDebugBoxOrientedDepthTest(p_debugGlobals, &origin, &v22->m_volumeBounds, &axis, v75);
    R_AddDebugLineDepthTest(&frontEndDataOut->debugGlobals, &origin, &end, &colorRed);
    R_AddDebugLineDepthTest(&frontEndDataOut->debugGlobals, &origin, &v91, &colorGreen);
    R_AddDebugLineDepthTest(&frontEndDataOut->debugGlobals, &origin, &v92, &colorBlue);
  }
  else
  {
    R_AddDebugBoxOriented(p_debugGlobals, &origin, &v22->m_volumeBounds, &axis, v75);
    R_AddDebugLine(&frontEndDataOut->debugGlobals, &origin, &end, &colorRed);
    R_AddDebugLine(&frontEndDataOut->debugGlobals, &origin, &v91, &colorGreen);
    R_AddDebugLine(&frontEndDataOut->debugGlobals, &origin, &v92, &colorBlue);
  }
  if ( drawInfo && (float)((float)((float)((float)(pos.v[1] - v19->v[1]) * (float)(pos.v[1] - v19->v[1])) + (float)((float)(pos.v[0] - v19->v[0]) * (float)(pos.v[0] - v19->v[0]))) + (float)((float)(pos.v[2] - v19->v[2]) * (float)(pos.v[2] - v19->v[2]))) < 250000.0 )
  {
    v68 = v22->m_volumeType;
    dest[0] = 0;
    if ( v68 == DECAL_VOLUMES_GRID_VOLUME_TYPE_SMODEL )
    {
      v69 = "S MODEL";
    }
    else if ( v68 == DECAL_VOLUMES_GRID_VOLUME_TYPE_MODEL )
    {
      v69 = "MODEL";
    }
    else
    {
      v69 = "INVALID";
      if ( v68 == DECAL_VOLUMES_GRID_VOLUME_TYPE_DOBJ_MODEL )
        v69 = "DOBJ";
    }
    LODWORD(duration) = v22->m_volumeSize[0];
    Com_sprintf(text, 0x800ui64, "Vol%i: %s size:(%ux%ux%u) %s", v18, v69, duration, v22->m_volumeSize[1], v22->m_volumeSize[2], dest);
    v70 = (float)(unsigned int)(int)fsqrt((float)((float)((float)(pos.v[1] - v19->v[1]) * (float)(pos.v[1] - v19->v[1])) + (float)((float)(pos.v[0] - v19->v[0]) * (float)(pos.v[0] - v19->v[0]))) + (float)((float)(pos.v[2] - v19->v[2]) * (float)(pos.v[2] - v19->v[2])));
    if ( v70 >= 10.0 )
      v71 = v70 * 0.00125;
    else
      v71 = FLOAT_0_050000001;
    CL_AddDebugString(&pos, v75, v71, text, 0, 1);
  }
}

/*
==============
R_DecalVolumesGrid_FillObjectSpaceBuffers
==============
*/
void R_DecalVolumesGrid_FillObjectSpaceBuffers(const GfxViewInfo *viewInfo, unsigned int frame, ImageAtlasDrawingContext *drawingContext)
{
  const GfxViewInfo *v3; 
  __int64 v5; 
  char *v6; 
  __int64 numVolumes; 
  DecalVolumeGridVolumeTransform *volumeTransforms; 
  DecalVolumesGridVolumeInfo *volumeInfos; 
  __m256i v10; 
  __m256i v11; 
  float v12; 
  __m256i v13; 
  float v14; 
  double v15; 
  __int64 width; 
  __int128 v17; 
  __int128 v18; 
  const dvar_t *v19; 
  __int128 v20; 
  float value; 
  __int128 v23; 
  __int128 v26; 
  float v28; 
  const DecalVolumeStreamViewInfo *StreamViewInfo; 
  StreamUpdateMultiView *p_multiView; 
  __int64 v31; 
  float4 v32; 
  float v33; 
  __m128 v35; 
  float v38; 
  __m128 v40; 
  float *v43; 
  __int64 v44; 
  float *v45; 
  float v46; 
  __int128 v47; 
  __m128 v49; 
  __m128 v54; 
  __int128 v56; 
  float v59; 
  int v60; 
  float v61; 
  int v62; 
  char v63; 
  unsigned int v64; 
  unsigned int numDrawData; 
  unsigned __int16 v66; 
  float v67; 
  unsigned __int16 v68; 
  double v69; 
  const char *v70; 
  unsigned int v74; 
  unsigned int v75; 
  unsigned __int16 v76; 
  float v77; 
  unsigned __int16 v78; 
  double v79; 
  const char *v80; 
  unsigned __int16 v84; 
  unsigned int v85; 
  unsigned __int16 v86; 
  float v87; 
  unsigned __int16 v88; 
  double v89; 
  const char *v90; 
  __int64 v94; 
  __int64 v95; 
  R_DecalVolumesGrid_FillObjectSpaceBuffers::__l38::DecalVolumeDrawHitComparer v96; 
  __int64 v97; 
  float outDecalScale; 
  float v99; 
  float v100; 
  DecalVolumeStreamingInfo outStreamingInfo; 
  DecalVolumeStreamingInfo streamingInfo; 
  DecalVolumeStreamingInfo v103; 
  const GfxViewInfo *v104; 
  char *v105; 
  AddToGridContext context; 
  FxMarkResult markResult; 
  __m128 v; 
  __m128 v109; 
  __m128 v110; 
  Bounds localIntDecalVolumeBounds; 
  Bounds v112; 
  Bounds v113; 
  __int128 v114; 
  FxDynEntModelMarkIterator v115; 
  FxDobjMarkIterator v116; 
  DecalVolumeIntermediate dstDecalVolume; 
  DecalVolumeIntermediate m; 
  DecalVolumeIntermediate v119; 
  FxModelMarkIterator markIterator; 

  v3 = viewInfo;
  v104 = viewInfo;
  v5 = frame;
  v6 = (char *)&s_decalVolumesGrid + v5 * 1408;
  v105 = v6;
  numVolumes = (unsigned int)s_decalVolumesGrid.decalVolumeGridFrameData[v5].numVolumes;
  volumeTransforms = s_decalVolumesGrid.decalVolumeGridFrameData[v5].volumeTransforms;
  volumeInfos = s_decalVolumesGrid.decalVolumeGridFrameData[v5].volumeInfos;
  v6[1388] = 1;
  *((_DWORD *)v6 + 10) = 0;
  v10 = *(__m256i *)v3->viewParms.viewProjectionMatrix.m.m[0].v;
  v11 = *(__m256i *)v3->viewParms.viewProjectionMatrix.m.row2.v;
  context.cameraAxis.m[2].v[2] = v3->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[2];
  v12 = v3->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
  *(__m256i *)context.cameraViewProjectionMatrix.m[0].v = v10;
  v13 = *(__m256i *)v3->viewParms.camera.axis.m[0].v;
  context.cameraOrigin.v[2] = v12;
  v14 = v3->sceneDef.viewOffset.v[2];
  *(__m256i *)context.cameraAxis.m[0].v = v13;
  v15 = *(double *)v3->viewParms.camera.origin.v;
  context.viewOffset.v[2] = v14;
  width = v3->sceneViewport.width;
  *(double *)context.cameraOrigin.v = v15;
  *(_QWORD *)context.viewOffset.v = *(_QWORD *)v3->sceneDef.viewOffset.v;
  *(__m256i *)context.cameraViewProjectionMatrix.row2.v = v11;
  v18 = 0i64;
  *(float *)&v18 = (float)width;
  v17 = v18;
  *(float *)&v18 = (float)v3->sceneViewport.height;
  context.sceneViewport.v[1] = *(float *)&v18;
  context.sceneViewport.v[0] = *(float *)&v17;
  context.drawingContext = drawingContext;
  context.curMarkHandle = -1;
  context.localClientNum = v3->clientIndex;
  *(double *)&v17 = R_DecalVolume_GetFarPlane(v3);
  v19 = DCONST_DVARFLT_r_decalVolumesFadeOutRange;
  v20 = v17;
  if ( !DCONST_DVARFLT_r_decalVolumesFadeOutRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesFadeOutRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  value = v19->current.value;
  if ( value <= 0.0 )
  {
    v28 = FLOAT_1_0;
    context.fadeOutBias = FLOAT_1_0;
    context.fadeOutScale = 0.0;
  }
  else
  {
    v23 = v20;
    *(float *)&v23 = *(float *)&v20 - value;
    _XMM0 = v23;
    __asm { vmaxss  xmm7, xmm0, xmm6 }
    v26 = v20;
    *(float *)&v26 = *(float *)&v20 - *(float *)&_XMM7;
    _XMM0 = v26;
    __asm { vmaxss  xmm8, xmm0, cs:__real@00800000 }
    if ( *(float *)&_XMM8 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 652, ASSERT_TYPE_SANITY, "( val != 0.0f )", (const char *)&queryFormat, "val != 0.0f") )
      __debugbreak();
    v28 = FLOAT_1_0;
    context.fadeOutBias = (float)(*(float *)&_XMM7 + 1.0) * (float)(1.0 / *(float *)&_XMM8);
    LODWORD(context.fadeOutScale) = COERCE_UNSIGNED_INT(1.0 / *(float *)&_XMM8) ^ _xmm;
  }
  StreamViewInfo = R_DecalVolumes_GetStreamViewInfo(frame);
  if ( StreamViewInfo->multiView.viewCount )
  {
    p_multiView = &context.multiView;
    v31 = 8i64;
    do
    {
      p_multiView = (StreamUpdateMultiView *)((char *)p_multiView + 128);
      v32.v = (__m128)StreamViewInfo->multiView.viewPos[0];
      StreamViewInfo = (const DecalVolumeStreamViewInfo *)((char *)StreamViewInfo + 128);
      *(float4 *)&p_multiView[-1].viewDistanceScaleSq[4] = (float4)v32.v;
      *(_OWORD *)&p_multiView[-1].viewDistanceScaleSq[8] = *(_OWORD *)&StreamViewInfo[-1].multiView.viewDistanceScaleSq[8];
      *(_OWORD *)&p_multiView[-1].viewDistanceScaleSq[12] = *(_OWORD *)&StreamViewInfo[-1].multiView.viewDistanceScaleSq[12];
      *(_OWORD *)p_multiView[-1].localClientIndex = *(_OWORD *)StreamViewInfo[-1].multiView.localClientIndex;
      *(_OWORD *)&p_multiView[-1].localClientIndex[4] = *(_OWORD *)&StreamViewInfo[-1].multiView.localClientIndex[4];
      *(_OWORD *)&p_multiView[-1].localClientIndex[8] = *(_OWORD *)&StreamViewInfo[-1].multiView.localClientIndex[8];
      *(_OWORD *)&p_multiView[-1].localClientIndex[12] = *(_OWORD *)&StreamViewInfo[-1].multiView.localClientIndex[12];
      *(_OWORD *)&p_multiView[-1].viewCount = *(_OWORD *)&StreamViewInfo[-1].multiView.viewCount;
      --v31;
    }
    while ( v31 );
    p_multiView->viewPos[0] = StreamViewInfo->multiView.viewPos[0];
    p_multiView->viewPos[1] = StreamViewInfo->multiView.viewPos[1];
    p_multiView->viewPos[2] = StreamViewInfo->multiView.viewPos[2];
    p_multiView->viewPos[3] = StreamViewInfo->multiView.viewPos[3];
    p_multiView->viewPos[4] = StreamViewInfo->multiView.viewPos[4];
  }
  else
  {
    v33 = v3->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
    context.multiView.viewCount = 1;
    v.m128_i32[3] = 0;
    v35 = v;
    v35.m128_f32[0] = v33;
    _XMM3 = v35;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [r13+104h], 10h
      vinsertps xmm3, xmm3, dword ptr [r13+108h], 20h ; ' '
    }
    v38 = v3->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[0];
    v = _XMM3.v;
    context.multiView.viewPos[0] = (float4)_XMM3.v;
    v109.m128_i32[3] = 0;
    v40 = v109;
    v40.m128_f32[0] = v38;
    _XMM3 = v40;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [r13+110h], 10h
      vinsertps xmm3, xmm3, dword ptr [r13+114h], 20h ; ' '
    }
    v109 = _XMM3.v;
    context.multiView.viewDir[0] = (float4)_XMM3.v;
    context.multiView.viewZoomFactors[0] = v28;
    context.multiView.viewCosFovLimit[0] = 0.0;
    context.multiView.viewDistanceScaleSq[0] = v28;
  }
  if ( (_DWORD)numVolumes )
  {
    v43 = &volumeInfos->m_volumeBounds.halfSize.v[2];
    v44 = numVolumes;
    v45 = &volumeTransforms->m_scale_firstCellIndex.v[2];
    v97 = numVolumes;
    do
    {
      v46 = *(v43 - 2);
      v47 = v114;
      v110.m128_i32[3] = 0;
      v49 = v110;
      v49.m128_f32[0] = v46;
      _XMM2 = v49;
      __asm
      {
        vinsertps xmm2, xmm2, dword ptr [r15-4], 10h
        vinsertps xmm2, xmm2, dword ptr [r15], 20h ; ' '
      }
      v110 = _XMM2;
      _XMM2 = _mm128_mul_ps((__m128)_xmm, _XMM2);
      __asm { vrcpps  xmm1, xmm2 }
      v54 = _mm128_sub_ps(_mm128_add_ps(_XMM1, _XMM1), _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM1), _XMM2));
      *(__m128 *)(v45 - 10) = v54;
      v56 = v47;
      *(float *)&v56 = *(v43 - 5) - *(v43 - 2);
      _XMM4 = v56;
      __asm
      {
        vinsertps xmm4, xmm4, xmm3, 10h
        vinsertps xmm4, xmm4, xmm1, 20h ; ' '
      }
      *(__m128 *)(v45 - 6) = _mm128_mul_ps(_XMM4, v54);
      v59 = v43[2];
      _XMM2.m128_f32[0] = (float)*((unsigned __int8 *)v43 + 6);
      v60 = *((unsigned __int8 *)v43 + 4);
      *(v45 - 1) = (float)*((unsigned __int8 *)v43 + 5);
      *v45 = _XMM2.m128_f32[0];
      v45[1] = v59;
      *(v45 - 2) = (float)v60;
      v61 = (float)*((unsigned __int8 *)v43 + 6);
      v62 = *((unsigned __int8 *)v43 + 4);
      context.volumeGridSize.v[1] = (float)*((unsigned __int8 *)v43 + 5);
      context.volumeGridSize.v[2] = v61;
      context.volumeGridSize.v[0] = (float)v62;
      v114 = (__int128)_XMM4;
      context.volumeSize.v[0] = 2.0 * *(v43 - 2);
      context.volumeSize.v[1] = 2.0 * *(v43 - 1);
      context.volumeSize.v[2] = 2.0 * *v43;
      context.volumeSizeRcp.v[0] = v28 / context.volumeSize.v[0];
      context.volumeSizeRcp.v[2] = v28 / context.volumeSize.v[2];
      context.volumeSizeRcp.v[1] = v28 / context.volumeSize.v[1];
      context.stepHalf.v[1] = (float)(context.volumeSize.v[1] / context.volumeGridSize.v[1]) * 0.5;
      context.step.v[0] = context.volumeSize.v[0] / (float)v62;
      context.step.v[1] = context.volumeSize.v[1] / context.volumeGridSize.v[1];
      context.step.v[2] = context.volumeSize.v[2] / v61;
      context.stepHalf.v[0] = context.step.v[0] * 0.5;
      context.stepHalf.v[2] = (float)(context.volumeSize.v[2] / v61) * 0.5;
      context.volumeMinCorner.v[0] = *(v43 - 5) - *(v43 - 2);
      context.volumeMinCorner.v[1] = *(v43 - 4) - *(v43 - 1);
      context.volumeMinCorner.v[2] = *(v43 - 3) - *v43;
      context.volumeMaxCorner.v[0] = *(v43 - 2) + *(v43 - 5);
      context.volumeMaxCorner.v[1] = *(v43 - 4) + *(v43 - 1);
      context.volumeMaxCorner.v[2] = *v43 + *(v43 - 3);
      context.cellMinCorner.v[0] = (float)(context.step.v[0] * 0.5) + context.volumeMinCorner.v[0];
      context.cellMinCorner.v[2] = context.stepHalf.v[2] + context.volumeMinCorner.v[2];
      context.cellMinCorner.v[1] = context.stepHalf.v[1] + context.volumeMinCorner.v[1];
      context.numTotalCells = *((unsigned __int8 *)v43 + 4) * *((unsigned __int8 *)v43 + 5) * *((unsigned __int8 *)v43 + 6);
      v63 = *((_BYTE *)v43 + 7);
      switch ( v63 )
      {
        case 2:
          v64 = *((_DWORD *)v43 + 3);
          R_DecalVolumesGrid_AddModelObjectSpace(v64, frame, &context, (const DecalVolumesGridVolumeInfo *)(v43 - 5));
          FX_BeginModelMarkIterator(&markIterator, v3->clientIndex, v64);
          while ( FX_GetModelMarkFromIterator(&markIterator, &markResult) )
          {
            context.curMarkHandle = markResult.markHandle;
            numDrawData = s_decalVolumesGrid.decalVolumeGridFrameData[v5].numDrawData;
            if ( numDrawData >= 0x800 )
              break;
            v66 = truncate_cast<unsigned short,unsigned int>(numDrawData);
            v67 = markResult.halfSize.v[0];
            v68 = v66;
            ++s_decalVolumesGrid.decalVolumeGridFrameData[v5].numDrawData;
            v69 = R_DecalVolumes_CalculateZFeatherRcp(0.050000001 * v67, v67);
            R_FillMarkDecalVolumeInternal(&dstDecalVolume, &context, &markResult.worldCenter, &markResult.center, &markResult.halfSize, &markResult.axis, markResult.color, markResult.material, markResult.atlasIndex, *(float *)&v69, markResult.skinned);
            outDecalScale = v28;
            R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace(frame, v68, &context, &dstDecalVolume, &markResult.worldCenter, &markResult.worldAxis, &outDecalScale, &outStreamingInfo);
            if ( outDecalScale >= v28 )
            {
              v70 = FX_MarkVfxName(context.localClientNum, markResult.markHandle);
              R_DecalVolumesGrid_SetDrawDataDebug(frame, &context, v68, &dstDecalVolume, &markResult.worldCenter, &markResult.worldAxis, &outStreamingInfo, v70);
              if ( context.numTotalCells == 1 )
              {
                R_DecalVolumesGrid_AddTo1x1Grid(frame, (const DecalVolumesGridVolumeInfo *)(v43 - 5), v68);
              }
              else
              {
                _XMM0 = LODWORD(dstDecalVolume.halfSize.v[0]);
                __asm
                {
                  vmaxss  xmm1, xmm0, dword ptr [rsp+0A28h+dstDecalVolume.halfSize+4]
                  vmaxss  xmm3, xmm1, dword ptr [rsp+0A28h+dstDecalVolume.halfSize+8]
                }
                localIntDecalVolumeBounds.midPoint.v[2] = markResult.center.v[2];
                localIntDecalVolumeBounds.midPoint.v[0] = markResult.center.v[0];
                localIntDecalVolumeBounds.midPoint.v[1] = markResult.center.v[1];
                localIntDecalVolumeBounds.halfSize.v[0] = *(float *)&_XMM3;
                localIntDecalVolumeBounds.halfSize.v[1] = *(float *)&_XMM3;
                localIntDecalVolumeBounds.halfSize.v[2] = *(float *)&_XMM3;
                R_DecalVolumesGrid_AddToGridBruteForce(&context, frame, (const DecalVolumesGridVolumeInfo *)(v43 - 5), v68, &localIntDecalVolumeBounds);
              }
            }
            else
            {
              --s_decalVolumesGrid.decalVolumeGridFrameData[v5].numDrawData;
            }
          }
          break;
        case 4:
          v74 = *((_DWORD *)v43 + 3);
          R_DecalVolumesGrid_AddDobjModel(v74, *((_DWORD *)v43 + 4), frame, &context, (const DecalVolumesGridVolumeInfo *)(v43 - 5));
          FX_BeginDobjMarkIterator(&v116, v3->clientIndex, v74, *((_DWORD *)v43 + 4), &context.viewOffset);
          if ( FX_GetDobjMarkFromIterator(&v116, &markResult) )
          {
            do
            {
              v75 = s_decalVolumesGrid.decalVolumeGridFrameData[v5].numDrawData;
              context.curMarkHandle = markResult.markHandle;
              if ( v75 >= 0x800 )
                break;
              v76 = truncate_cast<unsigned short,unsigned int>(v75);
              v77 = markResult.halfSize.v[0];
              ++s_decalVolumesGrid.decalVolumeGridFrameData[v5].numDrawData;
              v78 = v76;
              v79 = R_DecalVolumes_CalculateZFeatherRcp(0.050000001 * v77, v77);
              R_FillMarkDecalVolumeInternal(&m, &context, &markResult.worldCenter, &markResult.center, &markResult.halfSize, &markResult.axis, markResult.color, markResult.material, markResult.atlasIndex, *(float *)&v79, markResult.skinned);
              v99 = v28;
              R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace(frame, v78, &context, &m, &markResult.worldCenter, &markResult.worldAxis, &v99, &streamingInfo);
              if ( v99 >= v28 )
              {
                v80 = FX_MarkVfxName(context.localClientNum, markResult.markHandle);
                R_DecalVolumesGrid_SetDrawDataDebug(frame, &context, v78, &m, &markResult.worldCenter, &markResult.worldAxis, &streamingInfo, v80);
                if ( context.numTotalCells == 1 )
                {
                  R_DecalVolumesGrid_AddTo1x1Grid(frame, (const DecalVolumesGridVolumeInfo *)(v43 - 5), v78);
                }
                else
                {
                  _XMM0 = LODWORD(m.halfSize.v[0]);
                  __asm
                  {
                    vmaxss  xmm1, xmm0, dword ptr [rsp+0A28h+m.halfSize+4]
                    vmaxss  xmm3, xmm1, dword ptr [rsp+0A28h+m.halfSize+8]
                  }
                  v112.midPoint.v[2] = markResult.center.v[2];
                  v112.midPoint.v[0] = markResult.center.v[0];
                  v112.midPoint.v[1] = markResult.center.v[1];
                  v112.halfSize.v[0] = *(float *)&_XMM3;
                  v112.halfSize.v[1] = *(float *)&_XMM3;
                  v112.halfSize.v[2] = *(float *)&_XMM3;
                  R_DecalVolumesGrid_AddToGridBruteForce(&context, frame, (const DecalVolumesGridVolumeInfo *)(v43 - 5), v78, &v112);
                }
              }
              else
              {
                --s_decalVolumesGrid.decalVolumeGridFrameData[v5].numDrawData;
              }
            }
            while ( FX_GetDobjMarkFromIterator(&v116, &markResult) );
            v3 = v104;
          }
          FX_EndDobjMarkIterator(&v116);
          break;
        case 8:
          v84 = truncate_cast<unsigned short,unsigned int>(*((_DWORD *)v43 + 4));
          FX_BeginDynEntModelMarkIterator(&v115, v3->clientIndex, *((_DWORD *)v43 + 3), v84, &context.viewOffset);
          if ( !FX_GetDynEntModelMarkFromIterator(&v115, &markResult) )
            goto LABEL_49;
          do
          {
            v85 = s_decalVolumesGrid.decalVolumeGridFrameData[v5].numDrawData;
            context.curMarkHandle = markResult.markHandle;
            if ( v85 >= 0x800 )
              break;
            v86 = truncate_cast<unsigned short,unsigned int>(v85);
            v87 = markResult.halfSize.v[0];
            ++s_decalVolumesGrid.decalVolumeGridFrameData[v5].numDrawData;
            v88 = v86;
            v89 = R_DecalVolumes_CalculateZFeatherRcp(0.050000001 * v87, v87);
            R_FillMarkDecalVolumeInternal(&v119, &context, &markResult.worldCenter, &markResult.center, &markResult.halfSize, &markResult.axis, markResult.color, markResult.material, markResult.atlasIndex, *(float *)&v89, markResult.skinned);
            v100 = v28;
            R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace(frame, v88, &context, &v119, &markResult.worldCenter, &markResult.worldAxis, &v100, &v103);
            if ( v100 >= v28 )
            {
              v90 = FX_MarkVfxName(context.localClientNum, markResult.markHandle);
              R_DecalVolumesGrid_SetDrawDataDebug(frame, &context, v88, &v119, &markResult.worldCenter, &markResult.worldAxis, &v103, v90);
              if ( context.numTotalCells == 1 )
              {
                R_DecalVolumesGrid_AddTo1x1Grid(frame, (const DecalVolumesGridVolumeInfo *)(v43 - 5), v88);
              }
              else
              {
                _XMM0 = LODWORD(v119.halfSize.v[0]);
                __asm
                {
                  vmaxss  xmm1, xmm0, dword ptr [rsp+0A28h+var_1A8.halfSize+4]
                  vmaxss  xmm3, xmm1, dword ptr [rsp+0A28h+var_1A8.halfSize+8]
                }
                v113.midPoint.v[2] = markResult.center.v[2];
                v113.midPoint.v[0] = markResult.center.v[0];
                v113.midPoint.v[1] = markResult.center.v[1];
                v113.halfSize.v[0] = *(float *)&_XMM3;
                v113.halfSize.v[1] = *(float *)&_XMM3;
                v113.halfSize.v[2] = *(float *)&_XMM3;
                R_DecalVolumesGrid_AddToGridBruteForce(&context, frame, (const DecalVolumesGridVolumeInfo *)(v43 - 5), v88, &v113);
              }
            }
            else
            {
              --s_decalVolumesGrid.decalVolumeGridFrameData[v5].numDrawData;
            }
          }
          while ( FX_GetDynEntModelMarkFromIterator(&v115, &markResult) );
          v3 = v104;
          break;
        default:
          goto LABEL_49;
      }
      v44 = v97;
LABEL_49:
      v43 += 10;
      v45 += 12;
      v97 = --v44;
    }
    while ( v44 );
  }
  v94 = (__int64)v105;
  v95 = *((unsigned int *)v105 + 344);
  if ( (unsigned int)v95 > 1 )
    std::_Sort_unchecked_DecalVolumeDrawHit____R_DecalVolumesGrid_FillObjectSpaceBuffers_::_38_::DecalVolumeDrawHitComparer_((DecalVolumeDrawHit *)(v105 + 672), (DecalVolumeDrawHit *)&v105[88 * v95 + 672], 88 * v95 / 88, v96);
  *(_BYTE *)(v94 + 1389) = 1;
}

/*
==============
R_DecalVolumesGrid_Init
==============
*/
void R_DecalVolumesGrid_Init(void)
{
  volatile int *p_numVolumeCells; 
  __int64 v1; 
  bool v2; 
  char v3; 
  char v4; 
  bool v5; 
  __int64 v6; 
  GfxWrappedBuffer *p_drawDataIndicesGpuBuffer; 

  p_numVolumeCells = &s_decalVolumesGrid.decalVolumeGridFrameData[0].numVolumeCells;
  v1 = 2i64;
  do
  {
    *((_DWORD *)p_numVolumeCells - 1) = 0;
    *p_numVolumeCells = 0;
    *((_DWORD *)p_numVolumeCells - 6) = 1;
    *(_QWORD *)(p_numVolumeCells - 17) = PMem_Alloc(0x14000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "decal volumes grid info");
    *(_QWORD *)(p_numVolumeCells - 15) = PMem_Alloc(0x14000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "decal volumes grid cells");
    *(_QWORD *)(p_numVolumeCells - 13) = PMem_Alloc(0x10000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "decal volumes grid indices");
    *(_QWORD *)(p_numVolumeCells - 11) = PMem_Alloc(0x80000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "decal volumes draw data");
    *(_QWORD *)(p_numVolumeCells - 9) = PMem_Alloc(0x18000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "decal volumes grid transforms");
    *(_QWORD *)(p_numVolumeCells + 149) = PMem_Alloc(0xC000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "decal volumes grid draw data debug");
    *(_QWORD *)(p_numVolumeCells + 147) = PMem_Alloc(0x1C000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "decal volumes grid debug");
    **(_DWORD **)(p_numVolumeCells - 13) = 0;
    if ( r_decalVolumes->current.enabled && r_decalVolumesObjSpaceModel->current.enabled )
    {
      v2 = r_decalVolumesGridEnableModels == NULL;
      v3 = 1;
      *((_BYTE *)p_numVolumeCells + 1316) = 1;
      if ( !v2 )
      {
        *((_BYTE *)p_numVolumeCells + 1317) = 1;
        goto LABEL_8;
      }
    }
    else
    {
      v3 = 0;
      *((_BYTE *)p_numVolumeCells + 1316) = 0;
    }
    *((_BYTE *)p_numVolumeCells + 1317) = 0;
    if ( !v3 )
      goto LABEL_10;
LABEL_8:
    if ( !r_decalVolumesGridEnableDObj )
    {
LABEL_10:
      v4 = 0;
      goto LABEL_11;
    }
    v4 = 1;
LABEL_11:
    *((_BYTE *)p_numVolumeCells + 1318) = v4;
    v5 = v3 && r_decalVolumesGridEnableDynEnt;
    *((_BYTE *)p_numVolumeCells + 1319) = v5;
    p_numVolumeCells += 352;
    --v1;
  }
  while ( v1 );
  v6 = 2i64;
  p_drawDataIndicesGpuBuffer = &s_decalVolumesGrid.decalVolumeGridBuffers[0].drawDataIndicesGpuBuffer;
  do
  {
    R_CreateGfxWrappedBuffer(p_drawDataIndicesGpuBuffer - 2, GfxWrappedBuffer_Structured, 48, 0x800u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "decal volumes grid transforms buffer");
    R_CreateGfxWrappedBuffer(p_drawDataIndicesGpuBuffer - 1, GfxWrappedBuffer_Structured, 4, 0x5000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "decal volumes grid cells buffer");
    R_CreateGfxWrappedBuffer(p_drawDataIndicesGpuBuffer, GfxWrappedBuffer_Structured, 4, 0x4000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "decal volumes grid indices buffer");
    R_CreateGfxWrappedBuffer(p_drawDataIndicesGpuBuffer + 1, GfxWrappedBuffer_Structured, 256, 0x800u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "decal volumes draw data buffer");
    R_CreateGfxWrappedBuffer(p_drawDataIndicesGpuBuffer + 2, GfxWrappedBuffer_Structured, 56, 0x800u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "decal volumes grid debug buffer");
    R_CreateGfxWrappedBuffer(p_drawDataIndicesGpuBuffer + 3, GfxWrappedBuffer_Structured, 56, 8u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "decal volumes grid material info buffer");
    p_drawDataIndicesGpuBuffer += 6;
    --v6;
  }
  while ( v6 );
  Com_Printf(8, "D+ model used per frame mem: Cpu %u kB, Gpu %u kB\n", 1664i64, 1728i64);
}

/*
==============
R_DecalVolumesGrid_LinkDecalVolume
==============
*/
void R_DecalVolumesGrid_LinkDecalVolume(unsigned int *cells, unsigned int cellIndex, unsigned int *decalIndices, unsigned int cellListIndex, unsigned __int16 intDecalVolumeIndex)
{
  unsigned int v6; 
  unsigned int *v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 

  v6 = cells[cellIndex];
  v7 = &cells[cellIndex];
  v8 = cellListIndex;
  if ( v6 )
  {
    v9 = HIWORD(v6);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1359, ASSERT_TYPE_ASSERT, "(decalIndex)", (const char *)&queryFormat, "decalIndex") )
      __debugbreak();
    v10 = HIWORD(decalIndices[v9]);
    if ( HIWORD(decalIndices[v9]) )
    {
      do
      {
        v9 = v10;
        v10 = HIWORD(decalIndices[v10]);
      }
      while ( (_DWORD)v10 );
    }
    decalIndices[v9] |= (_DWORD)v8 << 16;
  }
  else
  {
    *v7 = cellListIndex << 16;
  }
  decalIndices[v8] = intDecalVolumeIndex;
}

/*
==============
R_DecalVolumesGrid_PrepareVolumeInfo_SceneDynEnt
==============
*/
void R_DecalVolumesGrid_PrepareVolumeInfo_SceneDynEnt(const GfxViewInfo *viewInfo, GfxSceneDynModel *sceneDynEnt, GfxModelDecalVolumeGridInfo *decalVolumeGridInfo)
{
  const GfxBackEndData *data; 
  __int64 decalVolumeIndex; 
  __int64 v8; 
  unsigned __int16 dynEntClientId; 
  __int64 localClientNum; 
  unsigned __int16 v11; 
  DynEntityClient *v12; 
  DynEntityPose *PoseFromClientId; 
  float v14; 
  double FarPlane; 
  int v16; 
  int v17; 
  int v18; 
  int v23; 
  int VolumeCells; 
  __int64 v27; 
  DecalVolumesGridVolumeInfo *v28; 
  int v29; 
  unsigned __int8 v30; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  int allocatedVolumeInfoSlot; 
  int v35; 
  int val; 
  int v37; 
  Bounds bounds; 
  Bounds rotatedBounds; 
  tmat33_t<vec3_t> axis; 

  data = viewInfo->input.data;
  decalVolumeGridInfo->allocatedVolumeInfoSlot = 0xFFFF;
  decalVolumeIndex = data->decalVolumeIndex;
  v8 = decalVolumeIndex;
  if ( s_decalVolumesGrid.decalVolumeGridFrameData[decalVolumeIndex].R_DecalVolumesGrid_FillObjectSpaceBuffers_started._My_val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1240, ASSERT_TYPE_ASSERT, "( ( !frameData->R_DecalVolumesGrid_FillObjectSpaceBuffers_started ) )", "( frame ) = %u", decalVolumeIndex) )
    __debugbreak();
  if ( s_decalVolumesGrid.decalVolumeGridFrameData[v8].objectSpaceDecalsDynEntEnabled )
  {
    dynEntClientId = sceneDynEnt->dynEntClientId;
    localClientNum = viewInfo->input.data->localClientNum;
    if ( (unsigned int)localClientNum >= 2 )
    {
      LODWORD(v32) = viewInfo->input.data->localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v32, 2) )
        __debugbreak();
    }
    v11 = g_dynEntClientEntsAllocCount[localClientNum][0];
    if ( dynEntClientId >= v11 )
    {
      LODWORD(v33) = v11;
      LODWORD(v32) = dynEntClientId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    if ( !g_dynEntClientLists[localClientNum][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
      __debugbreak();
    v12 = &g_dynEntClientLists[localClientNum][0][dynEntClientId];
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1250, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
      __debugbreak();
    if ( FX_DynEntModelHasMarks(v12) )
    {
      PoseFromClientId = DynEnt_GetPoseFromClientId((LocalClientNum_t)localClientNum, sceneDynEnt->dynEntClientId, DYNENT_BASIS_MODEL);
      XModelGetBounds(v12->activeModel, &bounds);
      UnitQuatToAxis(&PoseFromClientId->pose.quat, &axis);
      Bounds_Transform(&bounds, &PoseFromClientId->pose.origin, &axis, &rotatedBounds);
      v14 = fsqrt((float)((float)((float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1] - rotatedBounds.midPoint.v[1]) * (float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1] - rotatedBounds.midPoint.v[1])) + (float)((float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0] - rotatedBounds.midPoint.v[0]) * (float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0] - rotatedBounds.midPoint.v[0]))) + (float)((float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2] - rotatedBounds.midPoint.v[2]) * (float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2] - rotatedBounds.midPoint.v[2])));
      FarPlane = R_DecalVolume_GetFarPlane(viewInfo);
      if ( v14 <= *(float *)&FarPlane )
      {
        R_DecalVolumesGrid_CalculateVolumeDensity(v14, &viewInfo->viewParmsSet.frames[0].viewParms.camera.origin);
        v16 = 1;
        v17 = 1;
        v18 = 1;
        _XMM1 = 0i64;
        __asm { vroundss xmm1, xmm1, xmm2, 1 }
        _XMM2 = 0i64;
        if ( (int)*(float *)&_XMM1 > 1 )
          v17 = (int)*(float *)&_XMM1;
        __asm { vroundss xmm2, xmm2, xmm1, 1 }
        if ( v17 > 16 )
          v17 = 16;
        v23 = (int)*(float *)&_XMM2;
        val = v17;
        _XMM2 = 0i64;
        if ( v23 > 1 )
          v18 = v23;
        __asm { vroundss xmm2, xmm2, xmm1, 1 }
        if ( v18 > 16 )
          v18 = 16;
        v37 = v18;
        if ( (int)*(float *)&_XMM2 > 1 )
          v16 = (int)*(float *)&_XMM2;
        if ( v16 > 16 )
          v16 = 16;
        v35 = v17 * v18 * v16;
        VolumeCells = R_DecalVolumesGrid_AllocateVolumeCells(decalVolumeIndex, v35);
        v27 = VolumeCells;
        if ( VolumeCells >= 0 )
        {
          allocatedVolumeInfoSlot = 0;
          v28 = R_DecalVolumesGrid_AllocateVolumeInfo(decalVolumeIndex, &allocatedVolumeInfoSlot);
          if ( v28 )
          {
            R_DecalVolumesGrid_SetModelInfoIndex(decalVolumeGridInfo, allocatedVolumeInfoSlot);
            memset_0(&s_decalVolumesGrid.decalVolumeGridFrameData[v8].volumeCells[v27], 0, 4i64 * v35);
            v29 = val;
            v28->m_volumeBounds = bounds;
            v30 = truncate_cast<unsigned char,int>(v29);
            v31 = v37;
            v28->m_volumeSize[0] = v30;
            v28->m_volumeSize[1] = truncate_cast<unsigned char,int>(v31);
            v28->m_volumeSize[2] = truncate_cast<unsigned char,int>(v16);
            v28->m_volumeType = DECAL_VOLUMES_GRID_VOLUME_TYPE_DYNMODEL;
            v28->m_firstCellIndex = v27;
            v28->m_objectIndex = v12->dynEntDefId;
            v28->m_modelIndex = sceneDynEnt->dynEntClientId;
          }
        }
      }
    }
  }
}

/*
==============
R_DecalVolumesGrid_PrepareVolumeInfo_SceneEnt
==============
*/
void R_DecalVolumesGrid_PrepareVolumeInfo_SceneEnt(const GfxViewInfo *viewInfo, unsigned int dobjIndex, const GfxSceneEntity *sceneEnt, unsigned int modelIndex, GfxModelDecalVolumeGridInfo *decalVolumeGridInfo)
{
  __int64 decalVolumeIndex; 
  __int64 v9; 
  int v10; 
  const DObj *obj; 
  unsigned int HasMarks; 
  const XModel *Model; 
  XModelDecalVolumesInfo *decalVolumesInfo; 
  unsigned __int8 ModelRootBoneIndex; 
  float v16; 
  double FarPlane; 
  int v18; 
  int v19; 
  int v20; 
  int v25; 
  int VolumeCells; 
  __int64 v29; 
  DecalVolumesGridVolumeInfo *v30; 
  unsigned __int8 v31; 
  int v32; 
  __int64 v33; 
  int NumModels; 
  int allocatedVolumeInfoSlot; 
  int v36; 
  int val; 
  unsigned int v38; 
  GfxModelDecalVolumeGridInfo *outDecalVolumeGridInfo; 
  Bounds bounds; 
  vec3_t outOrigin; 
  Bounds rotatedBounds; 
  tmat33_t<vec3_t> outTagMat; 

  outDecalVolumeGridInfo = decalVolumeGridInfo;
  v38 = dobjIndex;
  decalVolumeGridInfo->allocatedVolumeInfoSlot = 0xFFFF;
  decalVolumeIndex = viewInfo->input.data->decalVolumeIndex;
  v9 = decalVolumeIndex;
  if ( s_decalVolumesGrid.decalVolumeGridFrameData[decalVolumeIndex].R_DecalVolumesGrid_FillObjectSpaceBuffers_started._My_val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1143, ASSERT_TYPE_ASSERT, "( ( !frameData->R_DecalVolumesGrid_FillObjectSpaceBuffers_started ) )", "( frame ) = %u", viewInfo->input.data->decalVolumeIndex) )
    __debugbreak();
  if ( s_decalVolumesGrid.decalVolumeGridFrameData[v9].objectSpaceDecalsDobjEnabled )
  {
    v10 = (*((_DWORD *)sceneEnt + 346) >> 10) & 0xFFF;
    if ( (unsigned int)(v10 - 2050) > 0x3F )
    {
      obj = sceneEnt->obj;
      HasMarks = FX_EntHasMarks((LocalClientNum_t)viewInfo->input.data->localClientNum, v10, modelIndex);
      if ( modelIndex >= DObjGetNumModels(obj) )
      {
        NumModels = DObjGetNumModels(obj);
        LODWORD(v33) = modelIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( DObjGetNumModels( obj ) )", "modelIndex doesn't index DObjGetNumModels( obj )\n\t%i not in [0, %i)", v33, NumModels) )
          __debugbreak();
      }
      Model = DObjGetModel(obj, modelIndex);
      decalVolumesInfo = Model->decalVolumesInfo;
      if ( decalVolumesInfo )
        LODWORD(decalVolumesInfo) = decalVolumesInfo->numDecalVolumes;
      if ( (_DWORD)decalVolumesInfo + HasMarks )
      {
        ModelRootBoneIndex = DObjGetModelRootBoneIndex(obj, modelIndex);
        CG_DObjGetWorldBoneMatrix(sceneEnt->info.pose, obj, ModelRootBoneIndex, &outTagMat, &outOrigin);
        XModelGetBounds(Model, &bounds);
        Bounds_Transform(&bounds, &outOrigin, &outTagMat, &rotatedBounds);
        v16 = fsqrt((float)((float)((float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1] - rotatedBounds.midPoint.v[1]) * (float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1] - rotatedBounds.midPoint.v[1])) + (float)((float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0] - rotatedBounds.midPoint.v[0]) * (float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0] - rotatedBounds.midPoint.v[0]))) + (float)((float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2] - rotatedBounds.midPoint.v[2]) * (float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2] - rotatedBounds.midPoint.v[2])));
        FarPlane = R_DecalVolume_GetFarPlane(viewInfo);
        if ( v16 <= *(float *)&FarPlane )
        {
          R_DecalVolumesGrid_CalculateVolumeDensity(v16, &viewInfo->viewParmsSet.frames[0].viewParms.camera.origin);
          v18 = 1;
          v19 = 1;
          v20 = 1;
          _XMM1 = 0i64;
          __asm { vroundss xmm1, xmm1, xmm2, 1 }
          _XMM2 = 0i64;
          if ( (int)*(float *)&_XMM1 > 1 )
            v20 = (int)*(float *)&_XMM1;
          __asm { vroundss xmm2, xmm2, xmm1, 1 }
          if ( v20 > 16 )
            v20 = 16;
          v25 = (int)*(float *)&_XMM2;
          _XMM2 = 0i64;
          if ( v25 > 1 )
            v19 = v25;
          __asm { vroundss xmm2, xmm2, xmm1, 1 }
          if ( v19 > 16 )
            v19 = 16;
          val = v19;
          if ( (int)*(float *)&_XMM2 > 1 )
            v18 = (int)*(float *)&_XMM2;
          if ( v18 > 16 )
            v18 = 16;
          v36 = v20 * v19 * v18;
          VolumeCells = R_DecalVolumesGrid_AllocateVolumeCells(decalVolumeIndex, v36);
          v29 = VolumeCells;
          if ( VolumeCells >= 0 )
          {
            allocatedVolumeInfoSlot = 0;
            v30 = R_DecalVolumesGrid_AllocateVolumeInfo(decalVolumeIndex, &allocatedVolumeInfoSlot);
            if ( v30 )
            {
              R_DecalVolumesGrid_SetModelInfoIndex(outDecalVolumeGridInfo, allocatedVolumeInfoSlot);
              memset_0(&s_decalVolumesGrid.decalVolumeGridFrameData[v9].volumeCells[v29], 0, 4i64 * v36);
              v30->m_volumeBounds = bounds;
              v31 = truncate_cast<unsigned char,int>(v20);
              v32 = val;
              v30->m_volumeSize[0] = v31;
              v30->m_volumeSize[1] = truncate_cast<unsigned char,int>(v32);
              v30->m_volumeSize[2] = truncate_cast<unsigned char,int>(v18);
              v30->m_objectIndex = v38;
              v30->m_volumeType = DECAL_VOLUMES_GRID_VOLUME_TYPE_DOBJ_MODEL;
              v30->m_firstCellIndex = v29;
              v30->m_modelIndex = modelIndex;
              R_DecalVolumesGrid_AddToEntityDebugVolume(decalVolumeIndex, (*((_DWORD *)sceneEnt + 346) >> 10) & 0xFFF, v30);
            }
          }
        }
      }
    }
  }
}

/*
==============
R_DecalVolumesGrid_PrepareVolumeInfo_SceneModel
==============
*/
void R_DecalVolumesGrid_PrepareVolumeInfo_SceneModel(const GfxViewInfo *viewInfo, unsigned int modelIndex, const GfxSceneModel *const sceneModel, GfxModelDecalVolumeGridInfo *decalVolumeGridInfo)
{
  const GfxBackEndData *data; 
  __int64 decalVolumeIndex; 
  __int64 v9; 
  XModelDecalVolumesInfo *decalVolumesInfo; 
  unsigned int v11; 
  float scale; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  double FarPlane; 
  int v20; 
  int v21; 
  int v22; 
  int v27; 
  int VolumeCells; 
  __int64 v31; 
  DecalVolumesGridVolumeInfo *v32; 
  unsigned __int8 v33; 
  int v34; 
  int allocatedVolumeInfoSlot; 
  int v36; 
  int val; 
  unsigned int v38; 
  Bounds bounds; 

  data = viewInfo->input.data;
  decalVolumeGridInfo->allocatedVolumeInfoSlot = 0xFFFF;
  v38 = modelIndex;
  decalVolumeIndex = data->decalVolumeIndex;
  v9 = decalVolumeIndex;
  if ( s_decalVolumesGrid.decalVolumeGridFrameData[decalVolumeIndex].R_DecalVolumesGrid_FillObjectSpaceBuffers_started._My_val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1057, ASSERT_TYPE_ASSERT, "( ( !frameData->R_DecalVolumesGrid_FillObjectSpaceBuffers_started ) )", "( frame ) = %u", decalVolumeIndex) )
    __debugbreak();
  if ( s_decalVolumesGrid.decalVolumeGridFrameData[v9].objectSpaceDecalsModelsEnabled )
  {
    decalVolumesInfo = sceneModel->model->decalVolumesInfo;
    v11 = decalVolumesInfo ? decalVolumesInfo->numDecalVolumes : 0;
    if ( v11 + FX_EntHasMarks((LocalClientNum_t)viewInfo->input.data->localClientNum, (*((_DWORD *)sceneModel + 30) >> 10) & 0xFFF) )
    {
      XModelGetBounds(sceneModel->model, &bounds);
      scale = sceneModel->placement.scale;
      bounds.halfSize.v[1] = scale * bounds.halfSize.v[1];
      bounds.halfSize.v[2] = scale * bounds.halfSize.v[2];
      v13 = scale * bounds.midPoint.v[2];
      bounds.halfSize.v[0] = scale * bounds.halfSize.v[0];
      v14 = scale * bounds.midPoint.v[0];
      bounds.midPoint.v[1] = scale * bounds.midPoint.v[1];
      v15 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0] - sceneModel->placement.base.origin.v[0];
      v16 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2] - sceneModel->placement.base.origin.v[2];
      bounds.midPoint.v[2] = v13;
      bounds.midPoint.v[0] = v14;
      v17 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1] - sceneModel->placement.base.origin.v[1];
      v18 = fsqrt((float)((float)(v17 * v17) + (float)(v15 * v15)) + (float)(v16 * v16));
      FarPlane = R_DecalVolume_GetFarPlane(viewInfo);
      if ( v18 <= *(float *)&FarPlane )
      {
        R_DecalVolumesGrid_CalculateVolumeDensity(v18, &viewInfo->viewParmsSet.frames[0].viewParms.camera.origin);
        v20 = 1;
        v21 = 1;
        v22 = 1;
        _XMM1 = 0i64;
        __asm { vroundss xmm1, xmm1, xmm2, 1 }
        _XMM2 = 0i64;
        if ( (int)*(float *)&_XMM1 > 1 )
          v22 = (int)*(float *)&_XMM1;
        __asm { vroundss xmm2, xmm2, xmm1, 1 }
        if ( v22 > 16 )
          v22 = 16;
        v27 = (int)*(float *)&_XMM2;
        _XMM2 = 0i64;
        if ( v27 > 1 )
          v21 = v27;
        __asm { vroundss xmm2, xmm2, xmm1, 1 }
        if ( v21 > 16 )
          v21 = 16;
        val = v21;
        if ( (int)*(float *)&_XMM2 > 1 )
          v20 = (int)*(float *)&_XMM2;
        if ( v20 > 16 )
          v20 = 16;
        v36 = v22 * v21 * v20;
        VolumeCells = R_DecalVolumesGrid_AllocateVolumeCells(decalVolumeIndex, v36);
        v31 = VolumeCells;
        if ( VolumeCells >= 0 )
        {
          allocatedVolumeInfoSlot = 0;
          v32 = R_DecalVolumesGrid_AllocateVolumeInfo(decalVolumeIndex, &allocatedVolumeInfoSlot);
          if ( v32 )
          {
            R_DecalVolumesGrid_SetModelInfoIndex(decalVolumeGridInfo, allocatedVolumeInfoSlot);
            memset_0(&s_decalVolumesGrid.decalVolumeGridFrameData[v9].volumeCells[v31], 0, 4i64 * v36);
            v32->m_volumeBounds = bounds;
            v33 = truncate_cast<unsigned char,int>(v22);
            v34 = val;
            v32->m_volumeSize[0] = v33;
            v32->m_volumeSize[1] = truncate_cast<unsigned char,int>(v34);
            v32->m_volumeSize[2] = truncate_cast<unsigned char,int>(v20);
            v32->m_objectIndex = v38;
            v32->m_volumeType = DECAL_VOLUMES_GRID_VOLUME_TYPE_MODEL;
            v32->m_firstCellIndex = v31;
            R_DecalVolumesGrid_AddToEntityDebugVolume(decalVolumeIndex, (*((_DWORD *)sceneModel + 30) >> 10) & 0xFFF, v32);
          }
        }
      }
    }
  }
}

/*
==============
R_DecalVolumesGrid_RegisterDvars
==============
*/
void R_DecalVolumesGrid_RegisterDvars(void)
{
  r_decalVolumesGridDebug = Dvar_RegisterEnum("LKKTOPQLSL", r_decalVolumesGridDebugNames, 0, 0, "Show debug volumes grid debug.");
  r_decalVolumesGridDebugType = Dvar_RegisterEnum("LKSNLSLLSL", r_decalVolumesGridDebugTypeNames, 0, 0, "Selects type of debug volumes to show.");
  r_decalVolumesGridDebugDrawVolumes = Dvar_RegisterEnum("MRRNNOMQPK", r_decalVolumesGridDebugDrawVolumesNames, 0, 0, "Selects type of debug volumes to show.");
  r_decalVolumesGridDebugDrawCells = Dvar_RegisterBool("NPKRQKPQSO", 0, 4u, "Draw debug decal volume grid cells");
  r_decalVolumesGridDebugDrawVolumesInfo = Dvar_RegisterBool("NNMSTLOTRQ", 0, 4u, "Draw debug decal volume grid info");
  r_decalVolumesGridDebugDrawVolumesDepthTest = Dvar_RegisterBool("QLLLNMQLR", 1, 4u, "Enable depth test for debug decal volume grid");
  r_decalVolumesGridDebugDrawVolumeSmodelId = Dvar_RegisterInt("MNPLPLSROS", 0, 0, 0x200000, 4u, "Draw decal volume grid volumes for a specific static models (0: all)");
  r_decalVolumesGridDebugDrawVolumeEnt = Dvar_RegisterInt("LQMKOKNQOQ", -1, -1, 0x2000, 4u, "Debug decal volume grid of certain entity");
  r_decalVolumesGridEnableSModels = Dvar_RegisterBool("NORROSNNSQ", 1, 4u, "Enable object space decals on static models");
  r_decalVolumesGridEnableDObj = Dvar_RegisterBool("NPMQQPRSKQ", 1, 4u, "Enable object space decals on dobj");
  r_decalVolumesGridEnableDynEnt = Dvar_RegisterBool("OONSTRNOP", 1, 4u, "Enable object space decals on dyn ents");
  r_decalVolumesGridEnableModels = Dvar_RegisterBool("MTRKQOKPNN", 1, 4u, "Enable object space decals on models");
  r_decalVolumesGridEnableDynModels = Dvar_RegisterBool("MPRSRQSRPS", 0, 4u, "Enable object space decals on dyn models");
}

/*
==============
R_DecalVolumesGrid_SetDrawDataDebug
==============
*/
void R_DecalVolumesGrid_SetDrawDataDebug(unsigned int frame, AddToGridContext *context, unsigned __int16 drawDataIndex, const DecalVolumeIntermediate *m, const vec3_t *worldPos, const tmat33_t<vec3_t> *worldAxis, const DecalVolumeStreamingInfo *streamingInfo, const char *markVfxName)
{
  __int64 v10; 
  GfxDecalVolumeDrawDataDebug *drawDataDebug; 
  __int64 v13; 
  DecalVolumeInstanceDebug *v14; 
  DecalVolumeDrawHits *p_drawHits; 
  float v16; 
  float v17; 
  float v18; 
  double v19; 
  DecalVolumeDrawHit *v20; 
  vec4_t result; 

  v10 = frame;
  drawDataDebug = s_decalVolumesGrid.decalVolumeGridFrameData[v10].drawDataDebug;
  v13 = drawDataIndex;
  v14 = &s_decalVolumesGrid.decalVolumeGridFrameData[v10].decalVolumeDebug[drawDataIndex];
  p_drawHits = &s_decalVolumesGrid.decalVolumeGridFrameData[v10].drawHits;
  v14->dv.center.v[0] = worldPos->v[0] - context->cameraOrigin.v[0];
  v14->dv.center.v[1] = worldPos->v[1] - context->cameraOrigin.v[1];
  v14->dv.center.v[2] = worldPos->v[2] - context->cameraOrigin.v[2];
  v16 = m->halfSize.v[0];
  v14->dv.x.v[0] = v16 * worldAxis->m[0].v[0];
  v14->dv.x.v[1] = v16 * worldAxis->m[0].v[1];
  v14->dv.x.v[2] = v16 * worldAxis->m[0].v[2];
  v17 = m->halfSize.v[1];
  v14->dv.y.v[0] = v17 * worldAxis->m[1].v[0];
  v14->dv.y.v[1] = v17 * worldAxis->m[1].v[1];
  v14->dv.y.v[2] = v17 * worldAxis->m[1].v[2];
  v18 = m->halfSize.v[2];
  v14->dv.z.v[0] = v18 * worldAxis->m[2].v[0];
  v14->dv.z.v[1] = v18 * worldAxis->m[2].v[1];
  v14->dv.z.v[2] = v18 * worldAxis->m[2].v[2];
  drawDataDebug[v13].flags = m->flags;
  drawDataDebug[v13].streamingInfo = *streamingInfo;
  drawDataDebug[v13].material = m->material;
  drawDataDebug[v13].blendMapOverride = m->blendMapOverride;
  if ( r_decalVolumesShowMaterialName->current.enabled && !r_decalVolumesShowMaterialLock->current.enabled && s_decalVolumesGrid.decalVolumeGridFrameData[v10].drawHits.hitCount < 8 )
  {
    v19 = RayObbIntersect(&context->cameraOrigin, context->cameraAxis.m, worldPos, worldAxis, &m->halfSize);
    if ( *(float *)&v19 > 0.0 )
    {
      result = *R_DecalVolume_GetHighlightColor(&result, p_drawHits->hitCount);
      R_DecalVolumes_DrawDebugOBB(&m->origin, &m->axis, &m->halfSize, &result);
      v20 = &p_drawHits->hits[p_drawHits->hitCount];
      *(__m256i *)v20->dv.center.v = *(__m256i *)v14->dv.center.v;
      *(_OWORD *)&v20->dv.y.z = *(_OWORD *)&v14->dv.y.z;
      v20->streamingInfo = *streamingInfo;
      v20->distFromCamera = *(float *)&v19;
      v20->decalIndex = drawDataIndex;
      v20->flags = m->flags;
      v20->material = m->material;
      v20->blendMapOverride = m->blendMapOverride;
      v20->markVfxName = markVfxName;
      ++p_drawHits->hitCount;
    }
  }
}

/*
==============
R_DecalVolumesGrid_SetResources
==============
*/
void R_DecalVolumesGrid_SetResources(GfxViewInfo *viewInfo)
{
  GfxCmdBufInput *p_input; 
  DecalVolumesGridBuffers *v2; 

  p_input = &viewInfo->input;
  v2 = &s_decalVolumesGrid.decalVolumeGridBuffers[viewInfo->input.data->decalVolumeIndex];
  if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[19] = &v2->volumeTransformsGpuBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[20] = &v2->volumeCellsGpuBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[21] = &v2->drawDataIndicesGpuBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[22] = &v2->drawDataGpuBuffer;
}

/*
==============
R_DecalVolumesGrid_Shutdown
==============
*/
void R_DecalVolumesGrid_Shutdown(void)
{
  __int64 v0; 
  int *p_numDecalIndices; 
  __int64 v2; 
  GfxWrappedBuffer *p_drawDataIndicesGpuBuffer; 

  v0 = 2i64;
  p_numDecalIndices = &s_decalVolumesGrid.decalVolumeGridFrameData[0].numDecalIndices;
  v2 = 2i64;
  do
  {
    *(p_numDecalIndices - 1) = 0;
    *p_numDecalIndices = 1;
    p_numDecalIndices[5] = 0;
    p_numDecalIndices[6] = 0;
    p_numDecalIndices += 352;
    --v2;
  }
  while ( v2 );
  p_drawDataIndicesGpuBuffer = &s_decalVolumesGrid.decalVolumeGridBuffers[0].drawDataIndicesGpuBuffer;
  do
  {
    R_ShutdownGfxWrappedBuffer(p_drawDataIndicesGpuBuffer - 2);
    R_ShutdownGfxWrappedBuffer(p_drawDataIndicesGpuBuffer - 1);
    R_ShutdownGfxWrappedBuffer(p_drawDataIndicesGpuBuffer);
    R_ShutdownGfxWrappedBuffer(p_drawDataIndicesGpuBuffer + 1);
    R_ShutdownGfxWrappedBuffer(p_drawDataIndicesGpuBuffer + 2);
    R_ShutdownGfxWrappedBuffer(p_drawDataIndicesGpuBuffer + 3);
    p_drawDataIndicesGpuBuffer += 6;
    --v0;
  }
  while ( v0 );
}

/*
==============
R_DecalVolumesGrid_ToggleFrame
==============
*/
void R_DecalVolumesGrid_ToggleFrame(unsigned int frame)
{
  __int64 v1; 
  unsigned int numVolumes; 
  unsigned int numVolumeCells; 
  unsigned int numDecalIndices; 
  unsigned int numDrawData; 
  const dvar_t *v6; 
  unsigned int *drawDataIndices; 
  bool v8; 
  bool v9; 
  bool v10; 
  bool v11; 

  v1 = frame;
  numVolumes = s_decalVolumesGrid.decalVolumeGridFrameData[v1].numVolumes;
  if ( s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.volumesHighWatermark > numVolumes )
    numVolumes = s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.volumesHighWatermark;
  s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.volumesHighWatermark = numVolumes;
  numVolumeCells = s_decalVolumesGrid.decalVolumeGridFrameData[v1].numVolumeCells;
  if ( s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.cellsHighWatermark > numVolumeCells )
    numVolumeCells = s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.cellsHighWatermark;
  s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.cellsHighWatermark = numVolumeCells;
  numDecalIndices = s_decalVolumesGrid.decalVolumeGridFrameData[v1].numDecalIndices;
  if ( s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.indicesHighWatermark > numDecalIndices )
    numDecalIndices = s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.indicesHighWatermark;
  s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.indicesHighWatermark = numDecalIndices;
  numDrawData = s_decalVolumesGrid.decalVolumeGridFrameData[v1].numDrawData;
  if ( s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.decalsHighWatermark > numDrawData )
    numDrawData = s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.decalsHighWatermark;
  s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.decalsHighWatermark = numDrawData;
  s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.numFrameVolumes = s_decalVolumesGrid.decalVolumeGridFrameData[v1].numVolumes;
  s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.numFrameCells = s_decalVolumesGrid.decalVolumeGridFrameData[v1].numVolumeCells;
  s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.numFrameIndices = s_decalVolumesGrid.decalVolumeGridFrameData[v1].numDecalIndices;
  s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.numFrameDecals = s_decalVolumesGrid.decalVolumeGridFrameData[v1].numDrawData;
  v6 = r_decalVolumesShowMaterialLock;
  s_decalVolumesGrid.decalVolumeGridFrameData[v1].smodelDebugVolumeIndex = -1;
  s_decalVolumesGrid.decalVolumeGridFrameData[v1].entityDebugVolumeIndexCount = 0;
  s_decalVolumesGrid.decalVolumeGridFrameData[v1].debugSceneEnt = NULL;
  if ( !v6->current.enabled )
    s_decalVolumesGrid.decalVolumeGridFrameData[v1].drawHits.hitCount = 0;
  drawDataIndices = s_decalVolumesGrid.decalVolumeGridFrameData[v1].drawDataIndices;
  s_decalVolumesGrid.decalVolumeGridFrameData[v1].numDrawData = 0;
  s_decalVolumesGrid.decalVolumeGridFrameData[v1].numVolumes = 0;
  s_decalVolumesGrid.decalVolumeGridFrameData[v1].numVolumeCells = 0;
  s_decalVolumesGrid.decalVolumeGridFrameData[v1].numDecalIndices = 1;
  *drawDataIndices = 0;
  v8 = r_decalVolumes->current.enabled && r_decalVolumesObjSpaceModel->current.enabled;
  s_decalVolumesGrid.decalVolumeGridFrameData[v1].objectSpaceDecalsEnabled = v8;
  v9 = v8 && r_decalVolumesGridEnableModels->current.enabled;
  s_decalVolumesGrid.decalVolumeGridFrameData[v1].objectSpaceDecalsModelsEnabled = v9;
  v10 = v8 && r_decalVolumesGridEnableDObj->current.enabled;
  s_decalVolumesGrid.decalVolumeGridFrameData[v1].objectSpaceDecalsDobjEnabled = v10;
  v11 = v8 && r_decalVolumesGridEnableDynEnt;
  s_decalVolumesGrid.decalVolumeGridFrameData[v1].objectSpaceDecalsDynEntEnabled = v11;
  s_decalVolumesGrid.decalVolumeGridFrameData[v1].R_DecalVolumesGrid_FillObjectSpaceBuffers_started._My_val = 0;
  s_decalVolumesGrid.decalVolumeGridFrameData[v1].R_DecalVolumesGrid_FillObjectSpaceBuffers_completed._My_val = 0;
}

/*
==============
R_DecalVolumesGrid_UpdateGpuBuffers
==============
*/
void R_DecalVolumesGrid_UpdateGpuBuffers(const GfxBackEndData *data)
{
  __int64 decalVolumeIndex; 
  __int64 v2; 
  __int64 v3; 
  DecalVolumesGridBuffers *v4; 
  volatile int numVolumes; 
  volatile int numVolumeCells; 
  signed int numDrawData; 
  int numDecalIndices; 

  decalVolumeIndex = data->decalVolumeIndex;
  v2 = decalVolumeIndex;
  v3 = decalVolumeIndex;
  if ( s_decalVolumesGrid.decalVolumeGridFrameData[decalVolumeIndex].numVolumes )
  {
    if ( !s_decalVolumesGrid.decalVolumeGridFrameData[v2].R_DecalVolumesGrid_FillObjectSpaceBuffers_completed._My_val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 2689, ASSERT_TYPE_ASSERT, "( ( frameData->R_DecalVolumesGrid_FillObjectSpaceBuffers_completed ) )", "( frame ) = %u", decalVolumeIndex) )
      __debugbreak();
    v4 = &s_decalVolumesGrid.decalVolumeGridBuffers[v3];
    numVolumes = s_decalVolumesGrid.decalVolumeGridFrameData[v2].numVolumes;
    numVolumeCells = s_decalVolumesGrid.decalVolumeGridFrameData[v2].numVolumeCells;
    numDrawData = s_decalVolumesGrid.decalVolumeGridFrameData[v2].numDrawData;
    numDecalIndices = s_decalVolumesGrid.decalVolumeGridFrameData[v2].numDecalIndices;
    if ( numDrawData > 2048 )
      numDrawData = 2048;
    if ( numVolumes > 2048 )
      numVolumes = 2048;
    R_UpdateGfxWrappedBuffer(&v4->volumeTransformsGpuBuffer, s_decalVolumesGrid.decalVolumeGridFrameData[v2].volumeTransforms, 48 * numVolumes);
    if ( numVolumeCells > 20480 )
      numVolumeCells = 20480;
    R_UpdateGfxWrappedBuffer(&v4->volumeCellsGpuBuffer, s_decalVolumesGrid.decalVolumeGridFrameData[v2].volumeCells, 4 * numVolumeCells);
    if ( numDecalIndices > 0x4000 )
      numDecalIndices = 0x4000;
    R_UpdateGfxWrappedBuffer(&v4->drawDataIndicesGpuBuffer, s_decalVolumesGrid.decalVolumeGridFrameData[v2].drawDataIndices, 4 * numDecalIndices);
    R_UpdateGfxWrappedBuffer(&v4->drawDataGpuBuffer, s_decalVolumesGrid.decalVolumeGridFrameData[v2].drawData, numDrawData << 8);
    R_UpdateGfxWrappedBuffer(&v4->decalVolumeDebugBuffer, s_decalVolumesGrid.decalVolumeGridFrameData[v2].decalVolumeDebug, 56 * numDrawData);
  }
}

/*
==============
R_FillDecalVolumeGeneric
==============
*/
void R_FillDecalVolumeGeneric(DecalVolumeIntermediate *dstDecalVolume, const AddToGridContext *context, const vec3_t *worldOrigin, const vec3_t *origin, const vec3_t *halfSize, const tmat33_t<vec3_t> *axis, Material *dvMaterial, const GfxDecalVolumeMask *blendMapOverride, const vec2_t *blendMapAdjust, DecalVolumesNormalBlendMode normalBlendModeOverride, const vec2_t *uvOffset, const vec4_t *uvMatrix, const unsigned __int8 *color, int atlasIndex, float zFeather, DecalVolumeIntermediateFlags type, unsigned int uid, bool skinned)
{
  GfxDecalVolumeMaterial *decalVolumeMaterial; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  unsigned __int8 v31; 
  __int128 v32; 
  float v33; 
  vec2_t v39; 

  decalVolumeMaterial = dvMaterial->decalVolumeMaterial;
  if ( !decalVolumeMaterial )
    decalVolumeMaterial = rgp.defaultDecalVolumeMaterial->decalVolumeMaterial;
  dstDecalVolume->origin = *origin;
  dstDecalVolume->halfSize = *halfSize;
  dstDecalVolume->axis = *axis;
  v22 = dstDecalVolume->axis.m[0].v[0];
  v23 = dstDecalVolume->axis.m[1].v[0];
  v24 = (float)((float)(v23 * v22) + (float)(dstDecalVolume->axis.m[1].v[1] * dstDecalVolume->axis.m[0].v[1])) + (float)(dstDecalVolume->axis.m[0].v[2] * dstDecalVolume->axis.m[1].v[2]);
  if ( COERCE_FLOAT(LODWORD(v24) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1668, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( dstDecalVolume.axis[0], dstDecalVolume.axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v22, dstDecalVolume->axis.m[0].v[1], dstDecalVolume->axis.m[0].v[2], v23, dstDecalVolume->axis.m[1].v[1], dstDecalVolume->axis.m[1].v[2], v24) )
    __debugbreak();
  v25 = dstDecalVolume->axis.m[2].v[0];
  v26 = dstDecalVolume->axis.m[0].v[0];
  v27 = (float)((float)(v25 * v26) + (float)(dstDecalVolume->axis.m[2].v[1] * dstDecalVolume->axis.m[0].v[1])) + (float)(dstDecalVolume->axis.m[2].v[2] * dstDecalVolume->axis.m[0].v[2]);
  if ( COERCE_FLOAT(LODWORD(v27) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1669, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( dstDecalVolume.axis[0], dstDecalVolume.axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v26, dstDecalVolume->axis.m[0].v[1], dstDecalVolume->axis.m[0].v[2], v25, dstDecalVolume->axis.m[2].v[1], dstDecalVolume->axis.m[2].v[2], v27) )
    __debugbreak();
  dstDecalVolume->uvOffset = *uvOffset;
  v28 = uvMatrix->v[3];
  LODWORD(v29) = LODWORD(uvMatrix->v[1]) ^ _xmm;
  v30 = uvMatrix->v[2];
  dstDecalVolume->uvMatrix.v[0] = uvMatrix->v[0];
  dstDecalVolume->uvMatrix.v[1] = COERCE_FLOAT(LODWORD(v30) ^ _xmm);
  dstDecalVolume->uvMatrix.v[2] = v29;
  dstDecalVolume->uvMatrix.v[3] = v28;
  v31 = type | (4 * skinned);
  *(_DWORD *)dstDecalVolume->color = *(_DWORD *)color;
  dstDecalVolume->material = decalVolumeMaterial;
  dstDecalVolume->flags = v31;
  if ( atlasIndex >= 0 )
  {
    dstDecalVolume->flags = v31 | 1;
    dstDecalVolume->atlasFrame = truncate_cast<unsigned short,int>(atlasIndex);
  }
  dstDecalVolume->zFeatherRcp = zFeather;
  dstDecalVolume->uid = uid;
  dstDecalVolume->normalBlendModeOverride[0] = normalBlendModeOverride;
  v32 = LODWORD(worldOrigin->v[1]);
  *(float *)&v32 = worldOrigin->v[1] - context->cameraOrigin.v[1];
  v33 = worldOrigin->v[2] - context->cameraOrigin.v[2];
  _XMM0 = LODWORD(halfSize->v[0]);
  __asm
  {
    vmaxss  xmm1, xmm0, dword ptr [r14+4]
    vmaxss  xmm2, xmm1, dword ptr [r14+8]
  }
  *(float *)&v32 = fsqrt((float)((float)(*(float *)&v32 * *(float *)&v32) + (float)((float)(worldOrigin->v[0] - context->cameraOrigin.v[0]) * (float)(worldOrigin->v[0] - context->cameraOrigin.v[0]))) + (float)(v33 * v33)) - *(float *)&_XMM2;
  _XMM3 = v32;
  __asm { vmaxss  xmm0, xmm3, xmm1 }
  *(double *)&_XMM0 = I_fclamp((float)(*(float *)&_XMM0 * context->fadeOutScale) + context->fadeOutBias, 0.0, 1.0);
  v39.v[1] = *(float *)&_XMM0 * blendMapAdjust->v[1];
  v39.v[0] = *(float *)&_XMM0 * blendMapAdjust->v[0];
  dstDecalVolume->blendMapAdjust = v39;
  dstDecalVolume->blendMapOverride = blendMapOverride;
}

/*
==============
R_FillMarkDecalVolumeInternal
==============
*/
void R_FillMarkDecalVolumeInternal(DecalVolumeIntermediate *dstDecalVolume, const AddToGridContext *context, const vec3_t *worldOrigin, const vec3_t *origin, const vec3_t *halfSize, const tmat33_t<vec3_t> *axis, const unsigned __int8 *color, Material *dvMaterial, int atlasIndex, float zFeatherRcp, bool skinned)
{
  GfxDecalVolumeMaterial *decalVolumeMaterial; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v22; 

  decalVolumeMaterial = dvMaterial->decalVolumeMaterial;
  if ( !decalVolumeMaterial )
    decalVolumeMaterial = rgp.defaultDecalVolumeMaterial->decalVolumeMaterial;
  dstDecalVolume->origin = *origin;
  dstDecalVolume->halfSize = *halfSize;
  *(_OWORD *)dstDecalVolume->axis.m[0].v = *(_OWORD *)axis->m[0].v;
  *(_QWORD *)&dstDecalVolume->axis.row1.y = *(_QWORD *)&axis->row1.y;
  dstDecalVolume->axis.m[2].v[0] = COERCE_FLOAT(LODWORD(axis->m[2].v[0]) ^ _xmm);
  dstDecalVolume->axis.m[2].v[1] = COERCE_FLOAT(LODWORD(axis->m[2].v[1]) ^ _xmm);
  dstDecalVolume->axis.m[2].v[2] = COERCE_FLOAT(LODWORD(axis->m[2].v[2]) ^ _xmm);
  v15 = dstDecalVolume->axis.m[0].v[0];
  v16 = dstDecalVolume->axis.m[1].v[0];
  v17 = (float)((float)(dstDecalVolume->axis.m[1].v[1] * dstDecalVolume->axis.m[0].v[1]) + (float)(v16 * v15)) + (float)(dstDecalVolume->axis.m[0].v[2] * dstDecalVolume->axis.m[1].v[2]);
  if ( COERCE_FLOAT(LODWORD(v17) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1620, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( dstDecalVolume.axis[0], dstDecalVolume.axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v15, dstDecalVolume->axis.m[0].v[1], dstDecalVolume->axis.m[0].v[2], v16, dstDecalVolume->axis.m[1].v[1], dstDecalVolume->axis.m[1].v[2], v17) )
    __debugbreak();
  v18 = dstDecalVolume->axis.m[2].v[0];
  v19 = dstDecalVolume->axis.m[0].v[0];
  v20 = (float)((float)(v18 * v19) + (float)(dstDecalVolume->axis.m[2].v[1] * dstDecalVolume->axis.m[0].v[1])) + (float)(dstDecalVolume->axis.m[0].v[2] * dstDecalVolume->axis.m[2].v[2]);
  if ( COERCE_FLOAT(LODWORD(v20) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1621, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( dstDecalVolume.axis[0], dstDecalVolume.axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v19, dstDecalVolume->axis.m[0].v[1], dstDecalVolume->axis.m[0].v[2], v18, dstDecalVolume->axis.m[2].v[1], dstDecalVolume->axis.m[2].v[2], v20) )
    __debugbreak();
  dstDecalVolume->uvOffset = 0i64;
  *(_QWORD *)dstDecalVolume->uvMatrix.v = 1065353216i64;
  dstDecalVolume->uvMatrix.v[2] = 0.0;
  dstDecalVolume->uvMatrix.v[3] = 1.0;
  *(_DWORD *)dstDecalVolume->color = *(_DWORD *)color;
  dstDecalVolume->material = decalVolumeMaterial;
  dstDecalVolume->flags = (4 * skinned) | 2;
  if ( atlasIndex >= 0 )
  {
    dstDecalVolume->flags = (4 * skinned) | 3;
    dstDecalVolume->atlasFrame = truncate_cast<unsigned short,int>(atlasIndex);
  }
  dstDecalVolume->zFeatherRcp = zFeatherRcp;
  dstDecalVolume->uid = 0;
  dstDecalVolume->normalBlendModeOverride[0] = 2;
  v21 = LODWORD(worldOrigin->v[1]);
  *(float *)&v21 = worldOrigin->v[1] - context->cameraOrigin.v[1];
  v22 = worldOrigin->v[2] - context->cameraOrigin.v[2];
  _XMM0 = LODWORD(halfSize->v[1]);
  __asm
  {
    vmaxss  xmm1, xmm0, dword ptr [r14]
    vmaxss  xmm2, xmm1, dword ptr [r14+8]
  }
  *(float *)&v21 = fsqrt((float)((float)(*(float *)&v21 * *(float *)&v21) + (float)((float)(worldOrigin->v[0] - context->cameraOrigin.v[0]) * (float)(worldOrigin->v[0] - context->cameraOrigin.v[0]))) + (float)(v22 * v22)) - *(float *)&_XMM2;
  _XMM3 = v21;
  __asm { vmaxss  xmm0, xmm3, xmm6 }
  *(double *)&_XMM0 = I_fclamp((float)(*(float *)&_XMM0 * context->fadeOutScale) + context->fadeOutBias, 0.0, 1.0);
  dstDecalVolume->blendMapAdjust = (vec2_t)(unsigned int)_XMM0;
  dstDecalVolume->blendMapOverride = NULL;
}

