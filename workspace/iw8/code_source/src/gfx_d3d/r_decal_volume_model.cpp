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
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm3, xmm0, dword ptr [rcx+64h]
    vmovss  xmm1, dword ptr [rdx+4]
    vsubss  xmm2, xmm1, dword ptr [rcx+68h]
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm4, xmm0, dword ptr [rcx+6Ch]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, dword ptr [r8+4]
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vmaxss  xmm0, xmm1, dword ptr [r8]
    vsqrtss xmm5, xmm2, xmm2
    vmaxss  xmm2, xmm0, dword ptr [r8+8]
    vsubss  xmm3, xmm5, xmm2
    vxorps  xmm1, xmm1, xmm1
    vmaxss  xmm0, xmm3, xmm1
  }
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
  __int64 v8; 
  __int64 v9; 
  const DObj *obj; 
  int SkelTimeStamp; 
  __int64 v12; 
  int ModelRootBoneIndex; 
  const XModel *Model; 
  __int64 decalVolumesInfo; 
  unsigned int v16; 
  __int64 v19; 
  unsigned int v22; 
  unsigned int numDrawData; 
  XModelMaterialOverride *modelMaterialOverrides; 
  Material *overrideMaterial; 
  unsigned int v26; 
  __int64 v27; 
  MaterialOverride *v28; 
  GfxDecalVolumeMaterial *decalVolumeMaterial; 
  unsigned __int16 v30; 
  const DObjAnimMat *v31; 
  AddToGridContext *v59; 
  unsigned int v60; 
  char v62; 
  tmat33_t<vec3_t> *axis; 
  Material *dvMaterial; 
  int dvMateriala; 
  GfxDecalVolumeMask *blendMapOverride; 
  DecalVolumesNormalBlendMode normalBlendModeOverride; 
  float v77; 
  unsigned __int8 color[4]; 
  int v79; 
  float outDecalScale; 
  int v81; 
  unsigned int framea; 
  DecalVolumeStreamingInfo outStreamingInfo; 
  __int64 v84; 
  AddToGridContext *contexta; 
  DecalVolumesGridVolumeInfo *v86; 
  DObjAnimMat *baseMat; 
  __int64 v88; 
  tmat43_t<vec3_t> in2; 
  vec2_t blendMapAdjust; 
  vec3_t worldOrigin; 
  tmat43_t<vec3_t> in1; 
  DObjSkelMat skelMat; 
  DObjSkelMat v94; 
  tmat33_t<vec3_t> v95; 
  tmat43_t<vec3_t> out; 
  DObjPartBits partBits; 
  DecalVolumeIntermediate dstDecalVolume; 

  v86 = (DecalVolumesGridVolumeInfo *)volume;
  v8 = frame;
  contexta = context;
  framea = frame;
  v9 = modelIndex;
  obj = scene.sceneDObj[dobjIndex].obj;
  SkelTimeStamp = CL_Pose_GetSkelTimeStamp();
  if ( DObjSkelExists(obj, SkelTimeStamp) )
  {
    v12 = v8;
    *(_DWORD *)color = -1;
    DObjLock(obj);
    DObjGetHidePartBits(obj, &partBits);
    if ( (unsigned int)v9 >= DObjGetNumModels(obj) )
    {
      dvMateriala = DObjGetNumModels(obj);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 2117, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( DObjGetNumModels( dobj ) )", "modelIndex doesn't index DObjGetNumModels( dobj )\n\t%i not in [0, %i)", v9, dvMateriala) )
        __debugbreak();
    }
    __asm
    {
      vmovaps [rsp+350h+var_50], xmm6
      vmovaps [rsp+350h+var_60], xmm7
      vmovaps [rsp+350h+var_70], xmm8
    }
    ModelRootBoneIndex = DObjGetModelRootBoneIndex(obj, v9);
    v79 = ModelRootBoneIndex;
    Model = DObjGetModel(obj, v9);
    decalVolumesInfo = (__int64)Model->decalVolumesInfo;
    v88 = decalVolumesInfo;
    if ( decalVolumesInfo )
    {
      v16 = 0;
      baseMat = Model->baseMat;
      if ( *(_DWORD *)(decalVolumesInfo + 8) )
      {
        __asm
        {
          vmovss  xmm6, cs:__real@3f800000
          vmovss  xmm8, cs:__real@c7c35000
        }
        v19 = 16 * v9;
        v84 = 16 * v9;
        __asm { vxorps  xmm7, xmm7, xmm7 }
        do
        {
          _RDI = *(_QWORD *)decalVolumesInfo + 112i64 * v16;
          v22 = ModelRootBoneIndex + *(_DWORD *)(_RDI + 80);
          if ( v22 >= 0x100 )
          {
            LODWORD(dvMaterial) = 256;
            LODWORD(axis) = ModelRootBoneIndex + *(_DWORD *)(_RDI + 80);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", axis, dvMaterial) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v22 & 0x1F)) & partBits.array[(unsigned __int64)v22 >> 5]) == 0 && DObjSkelIsBoneUpToDate(obj, v22) )
          {
            numDrawData = s_decalVolumesGrid.decalVolumeGridFrameData[v12].numDrawData;
            if ( numDrawData >= 0x800 )
              break;
            modelMaterialOverrides = obj->modelMaterialOverrides;
            overrideMaterial = *(Material **)(_RDI + 64);
            if ( modelMaterialOverrides )
            {
              v26 = *(unsigned int *)((char *)&modelMaterialOverrides->materialOverrideCount + v19);
              v27 = 0i64;
              if ( v26 )
              {
                while ( 1 )
                {
                  v28 = (*(MaterialOverride ***)((char *)&modelMaterialOverrides->materialOverride + v19))[v27];
                  if ( v28 )
                  {
                    if ( v28->overrideType == MATERIAL_OVERRIDETYPE_STICKER_REPLACE && v28->originalMaterial == overrideMaterial )
                      break;
                  }
                  v27 = (unsigned int)(v27 + 1);
                  if ( (unsigned int)v27 >= v26 )
                    goto LABEL_22;
                }
                overrideMaterial = v28->overrideMaterial;
              }
            }
LABEL_22:
            decalVolumeMaterial = overrideMaterial->decalVolumeMaterial;
            if ( !decalVolumeMaterial || (decalVolumeMaterial->flags & 0x4000) == 0 )
            {
              v30 = truncate_cast<unsigned short,unsigned int>(numDrawData);
              ++s_decalVolumesGrid.decalVolumeGridFrameData[v12].numDrawData;
              v81 = *(_DWORD *)(_RDI + 80);
              v31 = &obj->skel.mat[v22];
              if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 50, ASSERT_TYPE_ASSERT, "(boneMtx)", (const char *)&queryFormat, "boneMtx") )
                __debugbreak();
              LocalConvertQuatToSkelMat(v31, &skelMat);
              __asm
              {
                vmovss  xmm1, dword ptr [rbp+240h+skelMat.axis+4]
                vmovss  xmm0, dword ptr [rbp+240h+skelMat.axis]
                vmovss  dword ptr [rbp+240h+in2], xmm0
                vmovss  xmm0, dword ptr [rbp+240h+skelMat.axis+8]
                vmovss  dword ptr [rbp+240h+in2+4], xmm1
                vmovss  xmm1, dword ptr [rbp+240h+skelMat.axis+10h]
                vmovss  dword ptr [rbp+240h+in2+8], xmm0
                vmovss  xmm0, dword ptr [rbp+240h+skelMat.axis+14h]
                vmovss  dword ptr [rbp+240h+in2+0Ch], xmm1
                vmovss  xmm1, dword ptr [rbp+240h+skelMat.axis+18h]
                vmovss  dword ptr [rbp+240h+in2+10h], xmm0
                vmovss  xmm0, dword ptr [rbp+240h+skelMat.axis+20h]
                vmovss  dword ptr [rbp+240h+in2+14h], xmm1
                vmovss  xmm1, dword ptr [rbp+240h+skelMat.axis+24h]
                vmovss  dword ptr [rbp+240h+in2+18h], xmm0
                vmovss  xmm0, dword ptr [rbp+240h+skelMat.axis+28h]
                vmovss  dword ptr [rbp+240h+in2+1Ch], xmm1
                vmovss  xmm1, dword ptr [rbp+240h+skelMat.origin]
                vaddss  xmm2, xmm1, dword ptr [rax+70h]
                vmovss  dword ptr [rbp+240h+in2+20h], xmm0
                vmovss  xmm0, dword ptr [rbp+240h+skelMat.origin+4]
                vaddss  xmm1, xmm0, dword ptr [rax+74h]
                vmovss  dword ptr [rbp+240h+in2+24h], xmm2
                vmovss  xmm2, dword ptr [rbp+240h+skelMat.origin+8]
                vaddss  xmm0, xmm2, dword ptr [rax+78h]
                vmovss  dword ptr [rbp+240h+in2+2Ch], xmm0
                vmovss  dword ptr [rbp+240h+in2+28h], xmm1
              }
              LocalConvertQuatToInverseSkelMat(&baseMat[v81], &v94);
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+240h+var_1C0.axis]
                vmovss  xmm1, dword ptr [rbp+240h+var_1C0.axis+4]
                vmovss  dword ptr [rbp+240h+in1], xmm0
                vmovss  xmm0, dword ptr [rbp+240h+var_1C0.axis+8]
                vmovss  dword ptr [rbp+240h+in1+4], xmm1
                vmovss  xmm1, dword ptr [rbp+240h+var_1C0.axis+10h]
                vmovss  dword ptr [rbp+240h+in1+8], xmm0
                vmovss  xmm0, dword ptr [rbp+240h+var_1C0.axis+14h]
                vmovss  dword ptr [rbp+240h+in1+0Ch], xmm1
                vmovss  xmm1, dword ptr [rbp+240h+var_1C0.axis+18h]
                vmovss  dword ptr [rbp+240h+in1+10h], xmm0
                vmovss  xmm0, dword ptr [rbp+240h+var_1C0.axis+20h]
                vmovss  dword ptr [rbp+240h+in1+14h], xmm1
                vmovss  xmm1, dword ptr [rbp+240h+var_1C0.axis+24h]
                vmovss  dword ptr [rbp+240h+in1+18h], xmm0
                vmovss  xmm0, dword ptr [rbp+240h+var_1C0.axis+28h]
                vmovss  dword ptr [rbp+240h+in1+1Ch], xmm1
                vmovss  xmm1, dword ptr [rbp+240h+var_1C0.origin]
                vmovss  dword ptr [rbp+240h+in1+20h], xmm0
                vmovss  xmm0, dword ptr [rbp+240h+var_1C0.origin+4]
                vmovss  dword ptr [rbp+240h+in1+24h], xmm1
                vmovss  xmm1, dword ptr [rbp+240h+var_1C0.origin+8]
                vmovss  dword ptr [rbp+240h+in1+28h], xmm0
                vmovss  dword ptr [rbp+240h+in1+2Ch], xmm1
              }
              MatrixMultiply43(&in1, &in2, &out);
              MatrixTransformVector43((const vec3_t *)_RDI, &out, &worldOrigin);
              MatrixTransformVector((const vec3_t *)(_RDI + 12), (const tmat33_t<vec3_t> *)&out, v95.m);
              MatrixTransformVector((const vec3_t *)(_RDI + 24), (const tmat33_t<vec3_t> *)&out, &v95.m[1]);
              MatrixTransformVector((const vec3_t *)(_RDI + 36), (const tmat33_t<vec3_t> *)&out, &v95.m[2]);
              __asm { vmovss  [rsp+350h+var_2E0], xmm8 }
              LOBYTE(normalBlendModeOverride) = 2;
              __asm { vmovss  [rbp+240h+outDecalScale], xmm6 }
              blendMapOverride = *(GfxDecalVolumeMask **)(_RDI + 72);
              v59 = contexta;
              __asm
              {
                vmovss  dword ptr [rbp+240h+var_250], xmm6
                vmovss  dword ptr [rbp+240h+var_250+4], xmm7
              }
              R_FillDecalVolumeGeneric(&dstDecalVolume, contexta, &worldOrigin, (const vec3_t *)_RDI, (const vec3_t *)(_RDI + 48), (const tmat33_t<vec3_t> *)(_RDI + 12), overrideMaterial, blendMapOverride, &blendMapAdjust, normalBlendModeOverride, (const vec2_t *)(_RDI + 84), (const vec4_t *)(_RDI + 92), color, -1, v77, MODEL_DECAL_VOLUME, 0, 0);
              v60 = framea;
              R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace(framea, v30, v59, &dstDecalVolume, &worldOrigin, &v95, &outDecalScale, &outStreamingInfo);
              __asm
              {
                vmovss  xmm0, [rbp+240h+outDecalScale]
                vcomiss xmm0, xmm6
              }
              if ( v62 )
              {
                --s_decalVolumesGrid.decalVolumeGridFrameData[v12].numDrawData;
              }
              else
              {
                R_DecalVolumesGrid_SetDrawDataDebug(v60, v59, v30, &dstDecalVolume, &worldOrigin, &v95, &outStreamingInfo, NULL);
                if ( v59->numTotalCells == 1 )
                {
                  R_DecalVolumesGrid_AddTo1x1Grid(v60, v86, v30);
                }
                else
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+240h+dstDecalVolume.halfSize]
                    vmaxss  xmm1, xmm0, dword ptr [rbp+240h+dstDecalVolume.halfSize+4]
                    vmaxss  xmm3, xmm1, dword ptr [rbp+240h+dstDecalVolume.halfSize+8]
                    vmovss  xmm1, dword ptr [rdi+8]
                    vmovss  xmm2, dword ptr [rdi]
                    vmovss  xmm0, dword ptr [rdi+4]
                    vmovss  dword ptr [rbp+240h+in2+8], xmm1
                    vmovss  dword ptr [rbp+240h+in2], xmm2
                    vmovss  dword ptr [rbp+240h+in2+4], xmm0
                    vmovss  dword ptr [rbp+240h+in2+0Ch], xmm3
                    vmovss  dword ptr [rbp+240h+in2+10h], xmm3
                    vmovss  dword ptr [rbp+240h+in2+14h], xmm3
                  }
                  R_DecalVolumesGrid_AddToGridBruteForce(v59, v60, v86, v30, (const Bounds *)&in2);
                }
              }
              v19 = v84;
            }
            ModelRootBoneIndex = v79;
          }
          decalVolumesInfo = v88;
          ++v16;
        }
        while ( v16 < *(_DWORD *)(v88 + 8) );
      }
    }
    DObjUnlock(obj);
    __asm
    {
      vmovaps xmm7, [rsp+350h+var_60]
      vmovaps xmm6, [rsp+350h+var_50]
      vmovaps xmm8, [rsp+350h+var_70]
    }
  }
}

/*
==============
R_DecalVolumesGrid_AddModelObjectSpace
==============
*/
void R_DecalVolumesGrid_AddModelObjectSpace(unsigned int modelIndex, unsigned int frame, AddToGridContext *context, const DecalVolumesGridVolumeInfo *volume)
{
  __int64 v10; 
  __int64 v11; 
  const DObj *obj; 
  __int64 v13; 
  char v16; 
  unsigned int v38; 
  __int64 v41; 
  unsigned __int64 v42; 
  unsigned int numDrawData; 
  Material *v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  GfxDecalVolumeMaterial *decalVolumeMaterial; 
  AddToGridContext *v122; 
  unsigned int v123; 
  char v125; 
  tmat33_t<vec3_t> *axis; 
  tmat33_t<vec3_t> *axisa; 
  Material *dvMaterial; 
  GfxDecalVolumeMask *blendMapOverride; 
  DecalVolumesNormalBlendMode normalBlendModeOverride; 
  float v134; 
  unsigned __int8 color[4]; 
  float outDecalScale; 
  unsigned int framea; 
  DecalVolumeStreamingInfo outStreamingInfo; 
  __int64 v139; 
  DecalVolumesGridVolumeInfo *volumea; 
  AddToGridContext *contexta; 
  __int64 v142; 
  tmat43_t<vec3_t> in2; 
  tmat33_t<vec3_t> mat; 
  vec2_t blendMapAdjust; 
  vec3_t out; 
  DecalVolumeIntermediate skelMat; 
  DObjPartBits partBits; 
  void *retaddr; 

  _R11 = &retaddr;
  _R14 = 0x140000000ui64;
  _RDI = 152i64 * modelIndex;
  volumea = (DecalVolumesGridVolumeInfo *)volume;
  contexta = context;
  framea = frame;
  v10 = *(__int64 *)((char *)&scene.sceneModel[0].model + _RDI);
  v139 = _RDI;
  v11 = *(_QWORD *)(v10 + 672);
  v142 = v11;
  if ( v11 )
  {
    obj = scene.sceneModel[modelIndex].obj;
    __asm { vmovaps xmmword ptr [r11-58h], xmm6 }
    *(_DWORD *)color = -1;
    v13 = frame;
    DObjGetHidePartBits(obj, &partBits);
    __asm
    {
      vmovss  xmm0, rva ?scene@@3UGfxScene@@A.sceneModel.placement.scale[r14+rdi]; GfxScene scene
      vmovss  xmm6, cs:__real@3f800000
      vucomiss xmm0, xmm6
    }
    if ( !v16 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+260h+axis], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 217, ASSERT_TYPE_ASSERT, "( ( placement->scale == 1.0f ) )", "( placement->scale ) = %g", *(double *)&axisa) )
        __debugbreak();
    }
    __asm
    {
      vmovups xmm0, xmmword ptr rva ?scene@@3UGfxScene@@A.sceneModel.placement.base.quat[r14+rdi]; GfxScene scene
      vmovss  xmm1, dword ptr rva ?scene@@3UGfxScene@@A.sceneModel.placement.base.origin[r14+rdi]; GfxScene scene
      vmovaps xmmword ptr [rbp+150h+mat.quat], xmm0
      vmovss  xmm0, cs:__real@40000000
      vmovss  [rbp+150h+mat.transWeight], xmm0
      vmovss  xmm0, dword ptr (rva ?scene@@3UGfxScene@@A.sceneModel.placement.base.origin+4)[r14+rdi]; GfxScene scene
      vmovss  dword ptr [rbp+150h+mat.trans], xmm1
      vmovss  xmm1, dword ptr (rva ?scene@@3UGfxScene@@A.sceneModel.placement.base.origin+8)[r14+rdi]; GfxScene scene
      vmovss  dword ptr [rbp+150h+mat.trans+4], xmm0
      vmovss  dword ptr [rbp+150h+mat.trans+8], xmm1
    }
    LocalConvertQuatToSkelMat((const DObjAnimMat *)&mat, (DObjSkelMat *)&skelMat);
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+150h+skelMat+4]
      vmovss  xmm0, dword ptr [rbp+150h+skelMat]
      vmovss  dword ptr [rbp+150h+in2], xmm0
      vmovss  xmm0, dword ptr [rbp+150h+skelMat+8]
      vmovss  dword ptr [rbp+150h+in2+4], xmm1
      vmovss  xmm1, dword ptr [rbp+150h+skelMat+10h]
      vmovss  dword ptr [rbp+150h+in2+8], xmm0
      vmovss  xmm0, dword ptr [rbp+150h+skelMat+14h]
      vmovss  dword ptr [rbp+150h+in2+0Ch], xmm1
      vmovss  xmm1, dword ptr [rbp+150h+skelMat+18h]
      vmovss  dword ptr [rbp+150h+in2+10h], xmm0
      vmovss  xmm0, dword ptr [rbp+150h+skelMat+20h]
      vmovss  dword ptr [rbp+150h+in2+14h], xmm1
      vmovss  xmm1, dword ptr [rbp+150h+skelMat+24h]
      vmovss  dword ptr [rbp+150h+in2+18h], xmm0
      vmovss  xmm0, dword ptr [rbp+150h+skelMat+28h]
      vmovss  dword ptr [rbp+150h+in2+1Ch], xmm1
      vmovss  xmm1, dword ptr [rbp+150h+skelMat+30h]
      vaddss  xmm2, xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
      vmovss  dword ptr [rbp+150h+in2+20h], xmm0
      vmovss  xmm0, dword ptr [rbp+150h+skelMat+34h]
      vaddss  xmm1, xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
      vmovss  dword ptr [rbp+150h+in2+24h], xmm2
      vmovss  xmm2, dword ptr [rbp+150h+skelMat+38h]
      vaddss  xmm0, xmm2, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
    }
    v38 = 0;
    __asm
    {
      vmovss  dword ptr [rbp+150h+in2+2Ch], xmm0
      vmovss  dword ptr [rbp+150h+in2+28h], xmm1
    }
    if ( *(_DWORD *)(v11 + 8) )
    {
      __asm
      {
        vmovaps [rsp+260h+var_68+8], xmm7
        vmovaps [rsp+260h+var_78+8], xmm8
        vmovss  xmm8, cs:__real@c7c35000
        vxorps  xmm7, xmm7, xmm7
      }
      do
      {
        v41 = *(_QWORD *)v11 + 112i64 * v38;
        v42 = *(unsigned int *)(v41 + 80);
        if ( (unsigned int)v42 >= 0x100 )
        {
          LODWORD(dvMaterial) = 256;
          LODWORD(axis) = *(_DWORD *)(v41 + 80);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", axis, dvMaterial) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v42 & 0x1F)) & partBits.array[v42 >> 5]) == 0 )
        {
          numDrawData = s_decalVolumesGrid.decalVolumeGridFrameData[v13].numDrawData;
          if ( numDrawData >= 0x800 )
            break;
          v44 = *(Material **)(v41 + 64);
          v45 = *(__int64 *)((char *)&scene.sceneModel[0].obj + _RDI);
          if ( v45 )
          {
            v46 = *(_QWORD *)(v45 + 272);
            if ( v46 )
            {
              v47 = 0i64;
              if ( *(_DWORD *)v46 )
              {
                while ( 1 )
                {
                  v48 = *(_QWORD *)(*(_QWORD *)(v46 + 8) + 8 * v47);
                  if ( v48 )
                  {
                    if ( *(_DWORD *)(v48 + 24) == 3 && *(Material **)v48 == v44 )
                      break;
                  }
                  v47 = (unsigned int)(v47 + 1);
                  if ( (unsigned int)v47 >= *(_DWORD *)v46 )
                    goto LABEL_21;
                }
                v44 = *(Material **)(v48 + 8);
              }
            }
          }
LABEL_21:
          decalVolumeMaterial = v44->decalVolumeMaterial;
          if ( !decalVolumeMaterial || (decalVolumeMaterial->flags & 0x4000) == 0 )
          {
            ++s_decalVolumesGrid.decalVolumeGridFrameData[v13].numDrawData;
            MatrixTransformVector43((const vec3_t *)v41, &in2, &out);
            if ( (tmat33_t<vec3_t> *)(v41 + 12) == &mat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
              __debugbreak();
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+150h+in2]
              vmulss  xmm3, xmm0, dword ptr [rbx]
              vmovss  xmm1, dword ptr [rbp+150h+in2+0Ch]
              vmulss  xmm2, xmm1, dword ptr [rbx+4]
              vmovss  xmm0, dword ptr [rbp+150h+in2+18h]
              vmulss  xmm1, xmm0, dword ptr [rbx+8]
              vmovss  xmm0, dword ptr [rbp+150h+in2+4]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vmovss  xmm1, dword ptr [rbp+150h+in2+10h]
              vmovss  dword ptr [rbp+150h+mat.quat], xmm2
              vmulss  xmm3, xmm0, dword ptr [rbx]
              vmulss  xmm2, xmm1, dword ptr [rbx+4]
              vmovss  xmm0, dword ptr [rbp+150h+in2+1Ch]
              vmulss  xmm1, xmm0, dword ptr [rbx+8]
              vmovss  xmm0, dword ptr [rbp+150h+in2+8]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vmovss  xmm1, dword ptr [rbp+150h+in2+14h]
              vmovss  dword ptr [rbp+150h+mat.quat+4], xmm2
              vmulss  xmm2, xmm1, dword ptr [rbx+4]
              vmulss  xmm3, xmm0, dword ptr [rbx]
              vmovss  xmm0, dword ptr [rbp+150h+in2+20h]
              vmulss  xmm1, xmm0, dword ptr [rbx+8]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vmovss  dword ptr [rbp+150h+mat.quat+8], xmm2
            }
            if ( (vec3_t *)(v41 + 24) == &mat.row1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
              __debugbreak();
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+150h+in2]
              vmulss  xmm3, xmm0, dword ptr [rdi]
              vmovss  xmm1, dword ptr [rbp+150h+in2+0Ch]
              vmulss  xmm2, xmm1, dword ptr [rdi+4]
              vmovss  xmm0, dword ptr [rbp+150h+in2+18h]
              vmulss  xmm1, xmm0, dword ptr [rdi+8]
              vmovss  xmm0, dword ptr [rbp+150h+in2+4]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vmovss  xmm1, dword ptr [rbp+150h+in2+10h]
              vmovss  dword ptr [rbp+150h+mat.quat+0Ch], xmm2
              vmulss  xmm3, xmm0, dword ptr [rdi]
              vmulss  xmm2, xmm1, dword ptr [rdi+4]
              vmovss  xmm0, dword ptr [rbp+150h+in2+1Ch]
              vmulss  xmm1, xmm0, dword ptr [rdi+8]
              vmovss  xmm0, dword ptr [rbp+150h+in2+8]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vmovss  xmm1, dword ptr [rbp+150h+in2+14h]
              vmovss  dword ptr [rbp+150h+mat.trans], xmm2
              vmulss  xmm2, xmm1, dword ptr [rdi+4]
              vmulss  xmm3, xmm0, dword ptr [rdi]
              vmovss  xmm0, dword ptr [rbp+150h+in2+20h]
              vmulss  xmm1, xmm0, dword ptr [rdi+8]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vmovss  dword ptr [rbp+150h+mat.trans+4], xmm2
            }
            if ( (vec3_t *)(v41 + 36) == &mat.row2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
              __debugbreak();
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+150h+in2]
              vmulss  xmm3, xmm0, dword ptr [rdi]
              vmovss  xmm1, dword ptr [rbp+150h+in2+0Ch]
              vmulss  xmm2, xmm1, dword ptr [rdi+4]
              vmovss  xmm0, dword ptr [rbp+150h+in2+18h]
              vmulss  xmm1, xmm0, dword ptr [rdi+8]
              vmovss  xmm0, dword ptr [rbp+150h+in2+4]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vmovss  xmm1, dword ptr [rbp+150h+in2+10h]
              vmovss  dword ptr [rbp+150h+mat.trans+8], xmm2
              vmulss  xmm3, xmm0, dword ptr [rdi]
              vmulss  xmm2, xmm1, dword ptr [rdi+4]
              vmovss  xmm0, dword ptr [rbp+150h+in2+1Ch]
              vmulss  xmm1, xmm0, dword ptr [rdi+8]
              vmovss  xmm0, dword ptr [rbp+150h+in2+8]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vmovss  xmm1, dword ptr [rbp+150h+in2+14h]
              vmovss  [rbp+150h+mat.transWeight], xmm2
              vmulss  xmm2, xmm1, dword ptr [rdi+4]
              vmulss  xmm3, xmm0, dword ptr [rdi]
              vmovss  xmm0, dword ptr [rbp+150h+in2+20h]
              vmulss  xmm1, xmm0, dword ptr [rdi+8]
              vmovss  dword ptr [rsp+260h+var_1F0], xmm8
            }
            LOBYTE(normalBlendModeOverride) = 2;
            __asm
            {
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vmovss  [rbp+150h+var_150], xmm2
              vmovss  [rbp+150h+outDecalScale], xmm6
            }
            blendMapOverride = *(GfxDecalVolumeMask **)(v41 + 72);
            v122 = contexta;
            __asm
            {
              vmovss  dword ptr [rbp+150h+var_140], xmm6
              vmovss  dword ptr [rbp+150h+var_140+4], xmm7
            }
            R_FillDecalVolumeGeneric(&skelMat, contexta, &out, (const vec3_t *)v41, (const vec3_t *)(v41 + 48), (const tmat33_t<vec3_t> *)(v41 + 12), v44, blendMapOverride, &blendMapAdjust, normalBlendModeOverride, (const vec2_t *)(v41 + 84), (const vec4_t *)(v41 + 92), color, -1, v134, MODEL_DECAL_VOLUME, 0, 0);
            v123 = framea;
            R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace(framea, numDrawData, v122, &skelMat, &out, &mat, &outDecalScale, &outStreamingInfo);
            __asm
            {
              vmovss  xmm0, [rbp+150h+outDecalScale]
              vcomiss xmm0, xmm6
            }
            if ( v125 )
            {
              _RDI = v139;
              --s_decalVolumesGrid.decalVolumeGridFrameData[v13].numDrawData;
            }
            else
            {
              R_DecalVolumesGrid_SetDrawDataDebug(v123, v122, numDrawData, &skelMat, &out, &mat, &outStreamingInfo, NULL);
              if ( v122->numTotalCells == 1 )
                R_DecalVolumesGrid_AddTo1x1Grid(v123, volumea, numDrawData);
              else
                R_DecalVolumesGrid_AddToGridObject(v122, v123, volumea, (const vec3_t *)v41, &skelMat.halfSize, numDrawData);
              _RDI = v139;
            }
          }
        }
        v11 = v142;
        ++v38;
      }
      while ( v38 < *(_DWORD *)(v142 + 8) );
      __asm
      {
        vmovaps xmm7, [rsp+260h+var_68+8]
        vmovaps xmm8, [rsp+260h+var_78+8]
      }
    }
    __asm { vmovaps xmm6, xmmword ptr [rsp+260h+var_58+8] }
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
  unsigned int v19; 
  unsigned int v104; 
  int v105; 
  int v106; 
  int v107; 
  __int64 v108; 
  int numDecalIndices; 
  unsigned int v110; 
  unsigned int v116; 
  int v118; 
  int v119; 
  int v120; 
  int v121; 
  int v122; 
  int v123; 
  int v125; 
  char v132; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm2, dword ptr [rcx+0D4h]
    vmovss  xmm4, dword ptr [rcx+0CCh]
    vmovss  xmm3, dword ptr [rcx+0D0h]
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v19 = frame;
  __asm { vmovaps xmmword ptr [rax-68h], xmm8 }
  _RBX = context;
  __asm
  {
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
  }
  _RAX = localIntDecalVolumeBounds;
  __asm
  {
    vmovss  xmm14, cs:__real@3f800000
    vmovss  xmm9, dword ptr [rax]
    vmovss  xmm10, dword ptr [rax+4]
    vsubss  xmm0, xmm9, dword ptr [rax+0Ch]
    vsubss  xmm1, xmm10, dword ptr [rax+10h]
    vmovss  xmm11, dword ptr [rax+8]
    vsubss  xmm5, xmm0, xmm4
    vsubss  xmm0, xmm11, dword ptr [rax+14h]
    vsubss  xmm12, xmm1, xmm3
    vaddss  xmm1, xmm9, dword ptr [rax+0Ch]
    vsubss  xmm13, xmm0, xmm2
    vaddss  xmm0, xmm10, dword ptr [rax+10h]
    vsubss  xmm9, xmm1, xmm4
    vaddss  xmm1, xmm11, dword ptr [rax+14h]
    vsubss  xmm11, xmm1, xmm2
    vsubss  xmm10, xmm0, xmm3
    vmulss  xmm0, xmm5, dword ptr [rcx+0A8h]; val
    vmovaps xmm2, xmm14; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm8, xmm0
    vmulss  xmm0, xmm12, dword ptr [rbx+0ACh]; val
    vmovaps xmm2, xmm14; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm7, xmm0
    vmulss  xmm0, xmm13, dword ptr [rbx+0B0h]; val
    vmovaps xmm2, xmm14; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vmulss  xmm0, xmm9, dword ptr [rbx+0A8h]; val
    vmovaps xmm2, xmm14; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm12, xmm0
    vmulss  xmm0, xmm10, dword ptr [rbx+0ACh]; val
    vmovaps xmm2, xmm14; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm10, xmm0
    vmulss  xmm0, xmm11, dword ptr [rbx+0B0h]; val
    vmovaps xmm2, xmm14; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+94h]
    vmovss  xmm4, dword ptr [rbx+90h]
    vmulss  xmm2, xmm5, xmm7
    vmovss  xmm7, dword ptr [rbx+98h]
    vmulss  xmm1, xmm4, xmm8
    vmovaps xmm9, xmm0
    vmulss  xmm0, xmm6, xmm7
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm8, xmm8, xmm8
    vroundss xmm6, xmm6, xmm2, 1
    vroundss xmm8, xmm8, xmm1, 1
    vcvttss2si r9, xmm6
    vxorps  xmm3, xmm3, xmm3
    vcvttss2si rcx, xmm8
  }
  v122 = _R9;
  __asm { vroundss xmm3, xmm3, xmm0, 1 }
  v120 = _RCX;
  __asm
  {
    vmovaps xmm13, [rsp+158h+var_B8]
    vmovaps xmm11, [rsp+158h+var_98]
    vmulss  xmm0, xmm4, xmm12
    vmovaps xmm12, [rsp+158h+var_A8]
    vaddss  xmm1, xmm0, xmm14
    vminss  xmm2, xmm1, xmm4
    vcvttss2si r13, xmm2
    vmulss  xmm0, xmm5, xmm10
    vmovaps xmm10, [rsp+158h+var_88]
    vaddss  xmm1, xmm0, xmm14
    vminss  xmm2, xmm1, xmm5
    vcvttss2si rdx, xmm2
    vmulss  xmm0, xmm7, xmm9
    vmovaps xmm9, [rsp+158h+var_78]
    vaddss  xmm1, xmm0, xmm14
    vmulss  xmm0, xmm8, dword ptr [rbx+0B4h]
    vmovaps xmm14, [rsp+158h+var_C8]
    vminss  xmm2, xmm1, xmm7
    vmulss  xmm1, xmm6, dword ptr [rbx+0B8h]
    vaddss  xmm8, xmm1, dword ptr [rbx+0E8h]
    vcvttss2si r10, xmm2
    vaddss  xmm2, xmm0, dword ptr [rbx+0E4h]
    vmulss  xmm0, xmm3, dword ptr [rbx+0BCh]
    vaddss  xmm1, xmm0, dword ptr [rbx+0ECh]
    vcvttss2si r8, xmm3
  }
  v121 = _RDX;
  v123 = _R10;
  v118 = _R8;
  __asm { vmovss  [rsp+158h+var_110], xmm1 }
  v125 = v119;
  __asm
  {
    vunpcklps xmm2, xmm2, xmm8
    vmovsd  [rsp+158h+var_E0], xmm2
  }
  if ( (unsigned int)_R8 < (unsigned int)_R10 )
  {
    __asm
    {
      vmovss  xmm7, [rsp+158h+var_D8]
      vmovss  xmm6, dword ptr [rsp+158h+var_E0+4]
    }
    while ( 1 )
    {
      v104 = _R9;
      v116 = _R9;
      v105 = _R8 * volume->m_volumeSize[0] * volume->m_volumeSize[1];
      if ( (unsigned int)_R9 < (unsigned int)_RDX )
        break;
LABEL_15:
      __asm { vaddss  xmm7, xmm7, dword ptr [rbx+0BCh] }
      LODWORD(_R8) = _R8 + 1;
      v118 = _R8;
      __asm { vmovaps xmm6, xmm8 }
      if ( (unsigned int)_R8 >= (unsigned int)_R10 )
        goto LABEL_16;
    }
    while ( 1 )
    {
      v106 = _RCX;
      v107 = v104 * volume->m_volumeSize[0];
      if ( (unsigned int)_RCX < (unsigned int)_R13 )
        break;
LABEL_13:
      __asm { vaddss  xmm6, xmm6, dword ptr [rbx+0B8h] }
      v116 = ++v104;
      if ( v104 >= (unsigned int)_RDX )
      {
        LODWORD(_R8) = v118;
        LODWORD(_R9) = v122;
        LODWORD(_R10) = v123;
        goto LABEL_15;
      }
    }
    v108 = v19;
    while ( 1 )
    {
      numDecalIndices = s_decalVolumesGrid.decalVolumeGridFrameData[v108].numDecalIndices;
      s_decalVolumesGrid.decalVolumeGridFrameData[v108].numDecalIndices = numDecalIndices + 1;
      if ( (unsigned int)(numDecalIndices + 1) > 0x4000 )
        R_WarnOncePerFrame(R_WARN_TOO_MANY_DECAL_VOLUMES_GRID_INDICES);
      v110 = 0;
      if ( (unsigned int)(numDecalIndices + 1) <= 0x4000 )
        v110 = numDecalIndices;
      if ( !v110 )
        break;
      R_DecalVolumesGrid_LinkDecalVolume(s_decalVolumesGrid.decalVolumeGridFrameData[v108].volumeCells, v105 + v107 + v106 + volume->m_firstCellIndex, s_decalVolumesGrid.decalVolumeGridFrameData[v108].drawDataIndices, v110, intDecalVolumeIndex);
      if ( ++v106 >= (unsigned int)_R13 )
      {
        v104 = v116;
        LODWORD(_RCX) = v120;
        LODWORD(_RDX) = v121;
        v19 = frame;
        goto LABEL_13;
      }
    }
  }
LABEL_16:
  _R11 = &v132;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-28h]
    vmovaps xmm7, xmmword ptr [r11-38h]
    vmovaps xmm8, xmmword ptr [r11-48h]
  }
}

/*
==============
R_DecalVolumesGrid_AddToGridObject
==============
*/
void R_DecalVolumesGrid_AddToGridObject(const AddToGridContext *context, unsigned int frame, const DecalVolumesGridVolumeInfo *volume, const vec3_t *decalOrigin, const vec3_t *decalHalfSize, unsigned __int16 intDecalVolumeIndex)
{
  Bounds localIntDecalVolumeBounds; 

  _RAX = decalHalfSize;
  __asm
  {
    vmovss  xmm2, dword ptr [r9]
    vmovss  dword ptr [rsp+58h+var_28.midPoint], xmm2
    vmovss  xmm0, dword ptr [rax+4]
    vmaxss  xmm1, xmm0, dword ptr [rax]
    vmaxss  xmm3, xmm1, dword ptr [rax+8]
    vmovss  xmm1, dword ptr [r9+8]
    vmovss  xmm0, dword ptr [r9+4]
    vmovss  dword ptr [rsp+58h+var_28.midPoint+8], xmm1
    vmovss  dword ptr [rsp+58h+var_28.midPoint+4], xmm0
    vmovss  dword ptr [rsp+58h+var_28.halfSize], xmm3
    vmovss  dword ptr [rsp+58h+var_28.halfSize+4], xmm3
    vmovss  dword ptr [rsp+58h+var_28.halfSize+8], xmm3
  }
  R_DecalVolumesGrid_AddToGridBruteForce(context, frame, volume, intDecalVolumeIndex, &localIntDecalVolumeBounds);
}

/*
==============
R_DecalVolumesGrid_AddToGridRecurse
==============
*/
void R_DecalVolumesGrid_AddToGridRecurse(const AddToGridContext *context, const unsigned int frame, const DecalVolumesGridVolumeInfo *volume, unsigned __int16 intDecalVolumeIndex, unsigned int w, unsigned int h, unsigned int d, const unsigned int xOffs, const unsigned int yOffs, const unsigned int zOffs, const Bounds *parentCellBounds, const Bounds *localIntDecalVolumeBounds)
{
  __int64 v25; 
  bool v27; 
  bool v28; 
  unsigned int v45; 
  unsigned int CellListIndex; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned int v53; 
  unsigned int v54; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int v59; 
  unsigned int v60; 
  unsigned int v61; 
  unsigned int v62; 
  unsigned int v67; 
  unsigned int v104; 
  Bounds v108; 

  _RBX = parentCellBounds;
  _R12 = context;
  _RDI = localIntDecalVolumeBounds;
  v25 = frame;
  if ( !parentCellBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 607, ASSERT_TYPE_ASSERT, "(b0)", (const char *)&queryFormat, "b0") )
    __debugbreak();
  v27 = localIntDecalVolumeBounds == NULL;
  if ( !localIntDecalVolumeBounds )
  {
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 608, ASSERT_TYPE_ASSERT, "(b1)", (const char *)&queryFormat, "b1");
    v27 = !v28;
    if ( v28 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm2, xmm0, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm1, xmm0, dword ptr [rbx+0Ch]
    vandps  xmm2, xmm2, xmm3
    vcomiss xmm2, xmm1
  }
  if ( v27 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vsubss  xmm2, xmm0, dword ptr [rdi+4]
      vmovss  xmm1, dword ptr [rdi+10h]
      vaddss  xmm0, xmm1, dword ptr [rbx+10h]
      vandps  xmm2, xmm2, xmm3
      vcomiss xmm2, xmm0
    }
    if ( v27 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+8]
        vsubss  xmm2, xmm0, dword ptr [rdi+8]
        vmovss  xmm1, dword ptr [rdi+14h]
        vaddss  xmm0, xmm1, dword ptr [rbx+14h]
        vandps  xmm2, xmm2, xmm3
        vcomiss xmm2, xmm0
      }
      if ( v27 )
      {
        if ( w > 1 || h > 1 || d > 1 )
        {
          v47 = yOffs;
          v48 = 1;
          v49 = 1;
          v50 = zOffs;
          v51 = h + yOffs;
          v52 = 1;
          if ( w >> 1 > 1 )
            v49 = w >> 1;
          if ( h >> 1 > 1 )
            v52 = h >> 1;
          if ( d >> 1 > 1 )
            v48 = d >> 1;
          v53 = d + zOffs;
          v54 = w + xOffs;
          v104 = v48;
          if ( zOffs < d + zOffs )
          {
            __asm
            {
              vmovaps [rsp+188h+var_58], xmm6
              vmovaps [rsp+188h+var_68], xmm7
              vmovaps [rsp+188h+var_78], xmm8
              vmovaps [rsp+188h+var_88], xmm9
              vmovaps [rsp+188h+var_98], xmm10
              vmovaps [rsp+188h+var_A8], xmm11
              vmovaps [rsp+188h+var_B8], xmm12
              vmovaps [rsp+188h+var_C8], xmm13
              vmovaps [rsp+188h+var_D8], xmm14
              vmovss  xmm14, cs:__real@3f000000
            }
            do
            {
              v56 = v53 - v50;
              v57 = v48;
              if ( v48 > v56 )
                v57 = v56;
              if ( !v57 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1432, ASSERT_TYPE_ASSERT, "(clampedD > 0)", (const char *)&queryFormat, "clampedD > 0") )
                  __debugbreak();
                v48 = v104;
              }
              v58 = v47;
              if ( v47 < v51 )
              {
                do
                {
                  v59 = v51;
                  v60 = v52;
                  v61 = v59 - v58;
                  if ( v52 > v61 )
                    v60 = v61;
                  if ( !v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1437, ASSERT_TYPE_ASSERT, "(clampedH > 0)", (const char *)&queryFormat, "clampedH > 0") )
                    __debugbreak();
                  v62 = xOffs;
                  if ( xOffs < v54 )
                  {
                    __asm
                    {
                      vxorps  xmm10, xmm10, xmm10
                      vcvtsi2ss xmm10, xmm10, rax
                      vxorps  xmm11, xmm11, xmm11
                      vcvtsi2ss xmm11, xmm11, rax
                      vxorps  xmm12, xmm12, xmm12
                      vcvtsi2ss xmm12, xmm12, rax
                      vxorps  xmm13, xmm13, xmm13
                      vcvtsi2ss xmm13, xmm13, rax
                    }
                    do
                    {
                      v67 = v49;
                      if ( v49 > v54 - v62 )
                        v67 = v54 - v62;
                      if ( !v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1442, ASSERT_TYPE_ASSERT, "(clampedW > 0)", (const char *)&queryFormat, "clampedW > 0") )
                        __debugbreak();
                      __asm
                      {
                        vmovss  xmm2, dword ptr [r12+0B4h]
                        vmovss  xmm4, dword ptr [r12+0B8h]
                        vmovss  xmm6, dword ptr [r12+0BCh]
                        vxorps  xmm0, xmm0, xmm0
                        vcvtsi2ss xmm0, xmm0, rax
                        vmulss  xmm1, xmm0, xmm2
                        vaddss  xmm9, xmm1, dword ptr [r12+0CCh]
                        vmulss  xmm0, xmm4, xmm10
                        vaddss  xmm8, xmm0, dword ptr [r12+0D0h]
                        vxorps  xmm0, xmm0, xmm0
                        vmulss  xmm1, xmm6, xmm11
                        vaddss  xmm7, xmm1, dword ptr [r12+0D4h]
                        vcvtsi2ss xmm0, xmm0, rax
                        vmulss  xmm1, xmm0, xmm2
                        vaddss  xmm2, xmm1, xmm9
                        vaddss  xmm3, xmm2, xmm9
                        vmulss  xmm0, xmm12, xmm4
                        vaddss  xmm1, xmm0, xmm8
                        vaddss  xmm2, xmm1, xmm8
                        vmulss  xmm4, xmm2, xmm14
                        vmulss  xmm5, xmm3, xmm14
                        vmulss  xmm0, xmm13, xmm6
                        vaddss  xmm1, xmm0, xmm7
                        vaddss  xmm2, xmm1, xmm7
                        vsubss  xmm0, xmm5, xmm9
                        vmulss  xmm3, xmm2, xmm14
                        vmovss  dword ptr [rsp+188h+var_100.halfSize], xmm0
                        vsubss  xmm0, xmm3, xmm7
                        vsubss  xmm1, xmm4, xmm8
                        vmovss  dword ptr [rsp+188h+var_100.halfSize+8], xmm0
                        vmovss  dword ptr [rsp+188h+var_100.midPoint], xmm5
                        vmovss  dword ptr [rsp+188h+var_100.midPoint+4], xmm4
                        vmovss  dword ptr [rsp+188h+var_100.midPoint+8], xmm3
                        vmovss  dword ptr [rsp+188h+var_100.halfSize+4], xmm1
                      }
                      R_DecalVolumesGrid_AddToGridRecurse(_R12, frame, volume, intDecalVolumeIndex, v49, v52, v104, v62, v58, v50, &v108, localIntDecalVolumeBounds);
                      v62 += v49;
                    }
                    while ( v62 < v54 );
                  }
                  v51 = h + yOffs;
                  v58 += v52;
                }
                while ( v58 < h + yOffs );
                v48 = v104;
                v47 = yOffs;
              }
              v53 = d + zOffs;
              v50 += v48;
            }
            while ( v50 < d + zOffs );
            __asm
            {
              vmovaps xmm14, [rsp+188h+var_D8]
              vmovaps xmm13, [rsp+188h+var_C8]
              vmovaps xmm12, [rsp+188h+var_B8]
              vmovaps xmm11, [rsp+188h+var_A8]
              vmovaps xmm10, [rsp+188h+var_98]
              vmovaps xmm9, [rsp+188h+var_88]
              vmovaps xmm8, [rsp+188h+var_78]
              vmovaps xmm7, [rsp+188h+var_68]
              vmovaps xmm6, [rsp+188h+var_58]
            }
          }
        }
        else
        {
          v45 = xOffs + volume->m_firstCellIndex + volume->m_volumeSize[0] * (yOffs + zOffs * volume->m_volumeSize[1]);
          CellListIndex = R_AllocateCellListIndex(v25, 1u);
          if ( CellListIndex )
            R_DecalVolumesGrid_LinkDecalVolume(s_decalVolumesGrid.decalVolumeGridFrameData[v25].volumeCells, v45, s_decalVolumesGrid.decalVolumeGridFrameData[v25].drawDataIndices, CellListIndex, intDecalVolumeIndex);
        }
      }
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
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vsubss  xmm3, xmm1, dword ptr [rcx+10h]
    vmovaps [rsp+58h+var_18], xmm6
    vmovss  xmm6, dword ptr [rcx+0Ch]
    vsubss  xmm4, xmm0, xmm6
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm5, xmm0, dword ptr [rcx+14h]
    vmulss  xmm0, xmm3, dword ptr [r8+0Ch]
    vmovaps [rsp+58h+var_28], xmm7
    vmovss  xmm7, dword ptr [r8]
    vmulss  xmm1, xmm7, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [r8+18h]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm1, xmm4, dword ptr [r8+4]
    vmovaps [rsp+58h+var_38], xmm8
    vaddss  xmm8, xmm0, dword ptr [rdx]
    vmulss  xmm0, xmm3, dword ptr [r8+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [r8+1Ch]
    vmulss  xmm0, xmm3, dword ptr [r8+14h]
    vmovss  xmm3, cs:__real@3f800000
    vmovaps [rsp+58h+var_48], xmm9
    vmovaps [rsp+58h+var_58], xmm10
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm4, dword ptr [r8+8]
    vaddss  xmm9, xmm2, dword ptr [rdx+4]
    vmovss  xmm4, cs:__real@3f000000
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [r8+20h]
    vmovss  xmm5, cs:__real@3a83126f
    vcomiss xmm6, xmm5
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm10, xmm0, dword ptr [rdx+8]
    vdivss  xmm2, xmm4, xmm6
    vmulss  xmm0, xmm7, xmm2
    vmovss  dword ptr [r9], xmm0
    vmulss  xmm1, xmm2, dword ptr [r8+4]
    vmovss  dword ptr [r9+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [r8+8]
    vmovss  dword ptr [r9+8], xmm0
    vmovss  xmm1, dword ptr [rcx+10h]
    vcomiss xmm1, xmm5
    vdivss  xmm2, xmm4, xmm1
    vmulss  xmm0, xmm2, dword ptr [r8+0Ch]
    vmovss  dword ptr [r9+10h], xmm0
    vmulss  xmm1, xmm2, dword ptr [r8+10h]
    vmovss  dword ptr [r9+14h], xmm1
    vmulss  xmm0, xmm2, dword ptr [r8+14h]
    vmovss  dword ptr [r9+18h], xmm0
    vmovss  xmm1, dword ptr [rcx+14h]
    vcomiss xmm1, xmm5
    vdivss  xmm3, xmm4, xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+18h]
    vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovss  dword ptr [r9+20h], xmm0
    vmulss  xmm1, xmm3, dword ptr [r8+1Ch]
    vmovss  dword ptr [r9+24h], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+20h]
    vmovss  dword ptr [r9+28h], xmm0
    vmulss  xmm1, xmm8, dword ptr [r9]
    vmulss  xmm2, xmm9, dword ptr [r9+4]
    vmulss  xmm0, xmm10, dword ptr [r9+8]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm4, xmm3, xmm0
    vxorps  xmm1, xmm4, xmm5
    vmovss  dword ptr [r9+0Ch], xmm1
    vmulss  xmm1, xmm9, dword ptr [r9+14h]
    vmulss  xmm0, xmm8, dword ptr [r9+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, dword ptr [r9+18h]
    vaddss  xmm0, xmm2, xmm1
    vxorps  xmm2, xmm0, xmm5
    vmovss  dword ptr [r9+1Ch], xmm2
    vmulss  xmm1, xmm9, dword ptr [r9+24h]
    vmulss  xmm0, xmm8, dword ptr [r9+20h]
    vmovaps xmm8, [rsp+58h+var_38]
    vmovaps xmm9, [rsp+58h+var_48]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, dword ptr [r9+28h]
    vmovaps xmm10, [rsp+58h+var_58]
    vaddss  xmm0, xmm2, xmm1
    vxorps  xmm2, xmm0, xmm5
    vmovss  dword ptr [r9+2Ch], xmm2
  }
}

/*
==============
R_DecalVolumesGrid_CalculateVolumeDensity
==============
*/

float __fastcall R_DecalVolumesGrid_CalculateVolumeDensity(double distanceToCamera, const vec3_t *cameraOrigin, __int64 a3, double _XMM3_8)
{
  __asm
  {
    vsubss  xmm1, xmm0, cs:__real@42c80000
    vmulss  xmm0, xmm1, cs:__real@3a09f874; val
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@40800000
    vaddss  xmm2, xmm1, cs:__real@3f000000
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm2, 2
    vmulss  xmm0, xmm3, cs:__real@41800000
  }
  return *(float *)&_XMM0;
}

/*
==============
R_DecalVolumesGrid_DebugDraw3D
==============
*/
void R_DecalVolumesGrid_DebugDraw3D(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, unsigned int frame)
{
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int *p_hitCount; 
  unsigned int v13; 
  __int64 v16; 
  unsigned __int8 flags; 
  GfxWrappedBuffer *p_decalVolumeMaterialInfoBuffer; 
  __int64 integer; 
  GfxCmdBufContext v23; 
  char dataa[52]; 
  char v25; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovups xmm6, xmmword ptr [rcx]
  }
  if ( r_decalVolumesShowMaterialName->current.enabled )
  {
    v9 = 0;
    v10 = frame;
    v11 = frame;
    p_hitCount = &s_decalVolumesGrid.decalVolumeGridFrameData[v10].drawHits.hitCount;
    v13 = *p_hitCount;
    _RDX = &s_decalVolumesGrid.decalVolumeGridFrameData[v10].drawHits;
    if ( *p_hitCount )
    {
      _RCX = &v25;
      v16 = v13;
      do
      {
        flags = _RDX->hits[0].flags;
        *((_DWORD *)_RCX - 1) = 0;
        _RCX += 56;
        __asm
        {
          vmovups ymm0, ymmword ptr [rdx]
          vmovups xmm1, xmmword ptr [rdx+20h]
        }
        _RDX = (DecalVolumeDrawHits *)((char *)_RDX + 88);
        __asm { vmovups ymmword ptr [rcx-6Ch], ymm0 }
        *((_DWORD *)_RCX - 14) = 2 - ((flags & 2) != 0);
        __asm { vmovups xmmword ptr [rcx-4Ch], xmm1 }
        --v16;
      }
      while ( v16 );
    }
    p_decalVolumeMaterialInfoBuffer = &s_decalVolumesGrid.decalVolumeGridBuffers[v11].decalVolumeMaterialInfoBuffer;
    R_UpdateGfxWrappedBuffer(p_decalVolumeMaterialInfoBuffer, dataa, 56 * v13);
    integer = r_decalVolumesShowMaterialSelect->current.integer;
    if ( *p_hitCount )
    {
      do
      {
        if ( integer == -1 || (_DWORD)integer == v9 )
        {
          __asm { vmovdqa [rsp+258h+var_228], xmm6 }
          RB_DecalVolumes_DrawOBB(&v23, viewInfo, data, p_decalVolumeMaterialInfoBuffer, v9, v9);
        }
        ++v9;
      }
      while ( v9 < *p_hitCount );
    }
  }
  __asm { vmovaps xmm6, [rsp+258h+var_48] }
}

/*
==============
R_DecalVolumesGrid_DebugDraw
==============
*/
void R_DecalVolumesGrid_DebugDraw(unsigned int frame, LocalClientNum_t localClientNum, const GfxViewParms *viewParms)
{
  DecalVolumesGridFrameData *v4; 
  tmat33_t<vec3_t> *p_axis; 
  int volumeIndex; 
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
  unsigned int numDrawData; 
  __int64 v28; 
  __int64 v29; 
  unsigned __int8 v30; 
  GfxDecalVolumeDrawDataDebug *drawDataDebug; 
  float v34; 
  float v42; 
  float v44; 
  unsigned __int8 flags; 
  const vec4_t *v46; 
  float v48; 
  float v55; 
  float v58; 
  LocalClientNum_t localClientNuma; 
  LocalClientNum_t localClientNumb; 
  int frameb; 
  tmat33_t<vec3_t> *cameraAxis; 
  vec3_t halfSize; 
  vec3_t v65; 
  vec3_t origin; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v69; 
  Bounds bounds; 
  tmat33_t<vec3_t> outTagMat; 

  _R13 = &viewParms->camera;
  localClientNuma = localClientNum;
  v4 = &s_decalVolumesGrid.decalVolumeGridFrameData[frame];
  p_axis = &viewParms->camera.axis;
  *(_QWORD *)halfSize.v = _R13;
  cameraAxis = p_axis;
  *(_QWORD *)origin.v = v4;
  if ( r_decalVolumesGridDebugDrawVolumeSmodelId->current.integer > 0 )
  {
    volumeIndex = v4->smodelDebugVolumeIndex;
    if ( volumeIndex != -1 )
    {
      R_DecalVolumesGrid_DrawDebugVolume(frame, localClientNum, &_R13->origin, p_axis, volumeIndex, 1, 1);
      localClientNum = localClientNuma;
      p_axis = cameraAxis;
    }
  }
  _RDI = 0i64;
  if ( r_decalVolumesGridDebugDrawVolumeEnt->current.integer != -1 )
  {
    v8 = 0;
    if ( v4->entityDebugVolumeIndexCount > 0 )
    {
      entityDebugVolumeIndices = v4->entityDebugVolumeIndices;
      do
      {
        R_DecalVolumesGrid_DrawDebugVolume(frame, localClientNum, &_R13->origin, p_axis, *entityDebugVolumeIndices, 1, 1);
        localClientNum = localClientNuma;
        ++entityDebugVolumeIndices;
        p_axis = cameraAxis;
        ++v8;
      }
      while ( v8 < v4->entityDebugVolumeIndexCount );
      _RDI = 0i64;
    }
    debugSceneEnt = v4->debugSceneEnt;
    *(_QWORD *)v65.v = debugSceneEnt;
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
          CG_DObjGetWorldBoneMatrix(*(const cpose_t **)(*(_QWORD *)v65.v + 1400i64), obj, ModelRootBoneIndex, &outTagMat, &outOrigin);
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
        _R13 = *(GfxCamera **)halfSize.v;
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
          R_DecalVolumesGrid_DrawDebugVolume(frame, localClientNuma, &_R13->origin, cameraAxis, v19, r_decalVolumesGridDebugDrawVolumesInfo->current.enabled, r_decalVolumesGridDebugDrawCells->current.enabled);
        ++v19;
        ++v21;
        --numVolumes;
      }
      while ( numVolumes );
      _RDI = 0i64;
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
      _RBX = DVARVEC3_r_decalVolumesScale;
      if ( !DVARVEC3_r_decalVolumesScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
      numDrawData = v4->numDrawData;
      __asm
      {
        vmovss  dword ptr [rsp+160h+halfSize], xmm0
        vmovss  xmm1, dword ptr [rbx+2Ch]
        vmovss  dword ptr [rsp+160h+halfSize+4], xmm1
        vmovss  xmm0, dword ptr [rbx+30h]
        vmovss  dword ptr [rsp+160h+halfSize+8], xmm0
      }
      if ( numDrawData )
      {
        v28 = numDrawData;
        v29 = 0i64;
        v30 = localClientNumb;
        do
        {
          drawDataDebug = v4->drawDataDebug;
          _R14 = v4->decalVolumeDebug;
          if ( (v30 & drawDataDebug[v29].flags) != 0 )
          {
            __asm { vmovsd  xmm0, qword ptr [rdi+r14+0Ch] }
            v34 = _R14[_RDI].dv.x.v[2];
            __asm
            {
              vmovsd  qword ptr [rbp+60h+axis], xmm0
              vmovsd  xmm0, qword ptr [rdi+r14+18h]
              vmovsd  qword ptr [rbp+60h+axis+0Ch], xmm0
              vmovsd  xmm0, qword ptr [rdi+r14+24h]
              vmovsd  qword ptr [rbp+60h+axis+18h], xmm0
              vmovss  xmm0, dword ptr [r13+0]
              vaddss  xmm1, xmm0, dword ptr [rdi+r14]
              vmovss  xmm0, dword ptr [rdi+r14+4]
              vmovss  dword ptr [rsp+160h+origin], xmm1
              vaddss  xmm1, xmm0, dword ptr [r13+4]
              vmovss  xmm0, dword ptr [r13+8]
            }
            axis.m[0].v[2] = v34;
            v42 = _R14[_RDI].dv.y.v[2];
            __asm
            {
              vmovss  dword ptr [rsp+160h+origin+4], xmm1
              vaddss  xmm1, xmm0, dword ptr [rdi+r14+8]
            }
            axis.m[1].v[2] = v42;
            v44 = _R14[_RDI].dv.z.v[2];
            __asm { vmovss  dword ptr [rsp+160h+origin+8], xmm1 }
            axis.m[2].v[2] = v44;
            R_DecalVolumes_DrawDebugAxis(&origin, &axis, &halfSize);
            if ( frameb > 2 )
            {
              flags = drawDataDebug[v29].flags;
              if ( (flags & 1) != 0 )
              {
                v46 = &colorGreen;
              }
              else
              {
                v46 = &colorCyan;
                if ( (flags & 2) != 0 )
                  v46 = &colorMagenta;
              }
              __asm { vmovsd  xmm0, qword ptr [rdi+r14+0Ch] }
              v48 = _R14[_RDI].dv.x.v[2];
              __asm
              {
                vmovss  xmm2, dword ptr [rdi+r14+4]
                vmovsd  qword ptr [rbp+60h+var_A8], xmm0
                vmovsd  xmm0, qword ptr [rdi+r14+18h]
                vmovsd  qword ptr [rbp+60h+var_A8+0Ch], xmm0
                vmovsd  xmm0, qword ptr [rdi+r14+24h]
                vmovsd  qword ptr [rbp+60h+var_A8+18h], xmm0
                vmovss  xmm0, dword ptr [r13+0]
                vaddss  xmm1, xmm0, dword ptr [rdi+r14]
                vaddss  xmm0, xmm2, dword ptr [r13+4]
              }
              v69.m[0].v[2] = v48;
              v55 = _R14[_RDI].dv.y.v[2];
              __asm
              {
                vmovss  dword ptr [rsp+160h+var_100], xmm1
                vmovss  xmm1, dword ptr [r13+8]
                vaddss  xmm2, xmm1, dword ptr [rdi+r14+8]
              }
              v69.m[1].v[2] = v55;
              v58 = _R14[_RDI].dv.z.v[2];
              __asm
              {
                vmovss  dword ptr [rsp+160h+var_100+8], xmm2
                vmovss  dword ptr [rsp+160h+var_100+4], xmm0
              }
              v69.m[2].v[2] = v58;
              R_DecalVolumes_DrawDebugOBB(&v65, &v69, &halfSize, v46);
            }
            v30 = localClientNumb;
          }
          ++v29;
          ++_RDI;
          --v28;
        }
        while ( v28 );
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

void __fastcall R_DecalVolumesGrid_DebugDrawOverlay(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double yOffsetText, unsigned int frame)
{
  __int64 v8; 
  const char *v15; 
  const char *v19; 
  const char *v23; 
  const char *v27; 
  unsigned int v33; 
  DecalVolumeDrawHits *p_drawHits; 
  DecalVolumeDrawHit *v35; 
  bool v36; 
  const char *markVfxName; 
  const GfxDecalVolumeMask *v40; 
  const GfxImage *blendMap; 
  float blendMapOverride; 
  float blendMapOverridea; 
  float blendMapOverrideb; 
  float blendMapOverridec; 
  float blendMapOverrided; 
  float yOffsetTexta[4]; 
  vec4_t materialColor; 
  MaterialDebugInfo debugInfo; 

  __asm { vmovss  [rsp+190h+yOffsetText], xmm2 }
  v8 = frame;
  if ( r_decalVolumes->current.enabled && r_decalVolumesObjSpaceModel->current.enabled && r_decalVolumesGridDebug->current.integer > 0 )
  {
    __asm
    {
      vmovaps [rsp+190h+var_50], xmm6
      vmovaps [rsp+190h+var_60], xmm7
      vmovss  xmm7, cs:__real@41400000
      vmovss  dword ptr [rsp+190h+blendMapOverride], xmm7
      vxorps  xmm1, xmm1, xmm1; x
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&yOffsetText, "Object space decals", &colorWhite, 0, 1, blendMapOverride, 1);
    __asm
    {
      vmovss  xmm6, cs:__real@41600000
      vaddss  xmm1, xmm6, [rsp+190h+yOffsetText]
      vmovss  [rsp+190h+yOffsetText], xmm1
    }
    v15 = j_va("Volumes %5u/%5u HWM %5u", s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.numFrameVolumes, 2048i64, s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.volumesHighWatermark);
    __asm
    {
      vmovss  xmm2, [rsp+190h+yOffsetText]; y
      vmovss  dword ptr [rsp+190h+blendMapOverride], xmm7
      vmovaps xmm1, xmm7; x
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v15, &colorWhite, 0, 1, blendMapOverridea, 1);
    __asm
    {
      vaddss  xmm1, xmm6, [rsp+190h+yOffsetText]
      vmovss  [rsp+190h+yOffsetText], xmm1
    }
    v19 = j_va("Cells   %5u/%5u HWM %5u", s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.numFrameCells, 20480i64, s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.cellsHighWatermark);
    __asm
    {
      vmovss  xmm2, [rsp+190h+yOffsetText]; y
      vmovss  dword ptr [rsp+190h+blendMapOverride], xmm7
      vmovaps xmm1, xmm7; x
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v19, &colorWhite, 0, 1, blendMapOverrideb, 1);
    __asm
    {
      vaddss  xmm1, xmm6, [rsp+190h+yOffsetText]
      vmovss  [rsp+190h+yOffsetText], xmm1
    }
    v23 = j_va("Indices %5u/%5u HWM %5u", s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.numFrameIndices, 0x4000i64, s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.indicesHighWatermark);
    __asm
    {
      vmovss  xmm2, [rsp+190h+yOffsetText]; y
      vmovss  dword ptr [rsp+190h+blendMapOverride], xmm7
      vmovaps xmm1, xmm7; x
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v23, &colorWhite, 0, 1, blendMapOverridec, 1);
    __asm
    {
      vaddss  xmm1, xmm6, [rsp+190h+yOffsetText]
      vmovss  [rsp+190h+yOffsetText], xmm1
    }
    v27 = j_va("Decals  %5u/%5u HWM %5u", s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.numFrameDecals, 2048i64, s_decalVolumesGrid.decalVolumeGridVolumeMaxUsageStats.decalsHighWatermark);
    __asm
    {
      vmovss  xmm2, [rsp+190h+yOffsetText]; y
      vmovss  dword ptr [rsp+190h+blendMapOverride], xmm7
      vmovaps xmm1, xmm7; x
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v27, &colorWhite, 0, 1, blendMapOverrided, 1);
    __asm
    {
      vaddss  xmm1, xmm6, [rsp+190h+yOffsetText]
      vmovaps xmm7, [rsp+190h+var_60]
      vmovaps xmm6, [rsp+190h+var_50]
      vmovss  [rsp+190h+yOffsetText], xmm1
    }
  }
  if ( r_decalVolumesShowMaterialName->current.enabled )
  {
    v33 = 0;
    p_drawHits = &s_decalVolumesGrid.decalVolumeGridFrameData[v8].drawHits;
    if ( p_drawHits->hitCount )
    {
      do
      {
        v35 = &p_drawHits->hits[v33];
        memset_0(&debugInfo, 0, sizeof(debugInfo));
        v36 = (v35->flags & 2) == 0;
        markVfxName = NULL;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
        }
        debugInfo.streamingData.material.distanceMetricQuantized = v35->streamingInfo.distanceMetric;
        debugInfo.streamingData.material.neededSize = v35->streamingInfo.neededSize;
        __asm { vmovss  [rbp+90h+debugInfo.streamingData.material.distanceMetric], xmm0 }
        if ( v36 )
        {
          debugInfo.decalType = 2;
        }
        else
        {
          markVfxName = v35->markVfxName;
          debugInfo.decalType = 1;
        }
        switch ( v33 & 7 )
        {
          case 0u:
            __asm { vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; jumptable 00000001420BEF1F case 0 }
            break;
          case 1u:
            __asm { vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; jumptable 00000001420BEF1F case 1 }
            break;
          case 2u:
            __asm { vmovups xmm0, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; jumptable 00000001420BEF1F case 2 }
            break;
          case 3u:
            __asm { vmovups xmm0, xmmword ptr cs:?colorYellow@@3Tvec4_t@@B; jumptable 00000001420BEF1F case 3 }
            break;
          case 4u:
            __asm { vmovups xmm0, xmmword ptr cs:?colorMagenta@@3Tvec4_t@@B; jumptable 00000001420BEF1F case 4 }
            break;
          case 5u:
            __asm { vmovups xmm0, xmmword ptr cs:?colorCyan@@3Tvec4_t@@B; jumptable 00000001420BEF1F case 5 }
            break;
          case 6u:
            __asm { vmovups xmm0, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; jumptable 00000001420BEF1F case 6 }
            break;
          case 7u:
            __asm { vmovups xmm0, xmmword ptr cs:?colorTeal@@3Tvec4_t@@B; jumptable 00000001420BEF1F case 7 }
            break;
        }
        v40 = v35->blendMapOverride;
        __asm { vmovdqa xmmword ptr [rsp+190h+materialColor], xmm0 }
        if ( v40 )
          blendMap = v40->blendMap;
        else
          blendMap = NULL;
        R_DecalVolumes_DrawDebugMaterial(localClientNum, scrPlace, yOffsetTexta, v33++, &debugInfo, &materialColor, v35->material, blendMap, markVfxName);
      }
      while ( v33 < p_drawHits->hitCount );
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
  void *v19; 
  DecalVolumesGridFrameData *v21; 
  char v23; 
  vec4_t *v24; 
  float v33; 
  __int64 v34; 
  const DObj *obj; 
  unsigned __int8 ModelRootBoneIndex; 
  unsigned __int16 v37; 
  unsigned int v43; 
  unsigned int v45; 
  unsigned int v46; 
  int v47; 
  unsigned int v69; 
  unsigned int v73; 
  unsigned int v74; 
  int v75; 
  __int64 v77; 
  int v78; 
  unsigned int *volumeCells; 
  unsigned int v80; 
  unsigned int v81; 
  __int64 v82; 
  unsigned int *drawDataIndices; 
  unsigned int v84; 
  __int64 v85; 
  char v120; 
  DebugGlobals *p_debugGlobals; 
  int v200; 
  unsigned int v201; 
  vec4_t *v204; 
  int v205; 
  unsigned int v206; 
  int v207; 
  unsigned int v211; 
  __int64 v213; 
  vec3_t origin; 
  vec3_t pos; 
  Bounds bounds; 
  tmat33_t<vec3_t> axis; 
  vec3_t xyz; 
  vec3_t end; 
  vec3_t v220; 
  vec3_t v221; 
  vec4_t color; 
  char dest[2048]; 

  v19 = alloca(v7);
  __asm
  {
    vmovaps [rsp+1230h+var_D0], xmm15
    vmovaps [rsp+1230h+var_40], xmm6
    vmovaps [rsp+1230h+var_50], xmm7
    vmovaps [rsp+1230h+var_60], xmm8
    vmovaps [rsp+1230h+var_70], xmm9
    vmovaps [rsp+1230h+var_80], xmm10
    vmovaps [rsp+1230h+var_90], xmm11
    vmovaps [rsp+1230h+var_A0], xmm12
    vmovaps [rsp+1230h+var_B0], xmm13
    vmovaps [rsp+1230h+var_C0], xmm14
  }
  v21 = &s_decalVolumesGrid.decalVolumeGridFrameData[frame];
  _R14 = (__int64)&v21->volumeInfos[volumeIndex];
  v23 = *(_BYTE *)(_R14 + 27);
  v213 = _R14;
  if ( v23 == 1 )
  {
    v24 = &colorWhite;
  }
  else if ( v23 == 2 )
  {
    v24 = &colorTeal;
  }
  else
  {
    v24 = &colorRed;
    if ( v23 == 4 )
      v24 = &colorMagenta;
  }
  v204 = v24;
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vsubss  xmm6, xmm0, dword ptr [r14+0Ch]
    vmovss  xmm0, dword ptr [r14+4]
    vsubss  xmm7, xmm0, dword ptr [r14+10h]
    vmovss  xmm0, dword ptr [r14+8]
    vsubss  xmm8, xmm0, dword ptr [r14+14h]
    vmovss  [rsp+1230h+var_11D4], xmm8
    vmovss  [rsp+1230h+var_11D8], xmm6
    vmovss  [rbp+1130h+var_11A8], xmm7
  }
  switch ( v23 )
  {
    case 2:
      _RBX = &scene.sceneModel[*(unsigned int *)(_R14 + 32)].placement;
      UnitQuatToAxis(&_RBX->base.quat, &axis);
      __asm { vmovsd  xmm0, qword ptr [rbx+10h] }
      v33 = _RBX->base.origin.v[2];
      __asm { vmovsd  qword ptr [rbp+1130h+origin], xmm0 }
      origin.v[2] = v33;
      break;
    case 4:
      v34 = *(unsigned int *)(_R14 + 32);
      obj = scene.sceneDObj[v34].obj;
      ModelRootBoneIndex = DObjGetModelRootBoneIndex(obj, *(_DWORD *)(_R14 + 36));
      CG_DObjGetWorldBoneMatrix(scene.sceneDObj[v34].info.pose, obj, ModelRootBoneIndex, &axis, &origin);
      break;
    case 8:
      v37 = truncate_cast<unsigned short,unsigned int>(*(_DWORD *)(_R14 + 36));
      _RBX = DynEnt_GetPoseFromClientId(localClientNum, v37, DYNENT_BASIS_MODEL);
      UnitQuatToAxis(&_RBX->pose.quat, &axis);
      __asm
      {
        vmovsd  xmm0, qword ptr [rbx+4Ch]
        vmovsd  qword ptr [rbp+1130h+origin], xmm0
      }
      origin.v[2] = _RBX->pose.origin.v[2];
      break;
    default:
      MatrixIdentity33(&axis);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rbp+1130h+origin], xmm0
        vmovss  dword ptr [rbp+1130h+origin+4], xmm0
        vmovss  dword ptr [rbp+1130h+origin+8], xmm0
      }
      break;
  }
  __asm { vmovss  xmm15, cs:__real@41200000 }
  if ( drawCells )
  {
    __asm { vmovss  xmm13, cs:__real@40000000 }
    v43 = *(unsigned __int8 *)(_R14 + 26);
    __asm { vmovss  xmm0, dword ptr [r14+0Ch] }
    v45 = *(unsigned __int8 *)(_R14 + 25);
    v46 = *(unsigned __int8 *)(_R14 + 24);
    v47 = *(_DWORD *)(_R14 + 28);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, r13d
      vdivss  xmm2, xmm0, xmm1
      vmovss  xmm0, dword ptr [r14+10h]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, edx
      vdivss  xmm1, xmm0, xmm1
      vmovss  xmm0, dword ptr [r14+14h]
      vmulss  xmm14, xmm1, xmm13
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ecx
      vdivss  xmm1, xmm0, xmm1
      vmovss  xmm0, cs:__real@3f000000
      vmulss  xmm3, xmm1, xmm13
      vmulss  xmm1, xmm14, xmm0
      vmulss  xmm12, xmm2, xmm13
      vmulss  xmm2, xmm12, xmm0
      vmulss  xmm0, xmm3, xmm0
      vmovss  dword ptr [rbp+1130h+bounds.halfSize+4], xmm1
      vaddss  xmm1, xmm7, xmm1
      vmovss  dword ptr [rbp+1130h+bounds.halfSize+8], xmm0
      vaddss  xmm0, xmm8, xmm0
      vmovss  dword ptr [rbp+1130h+xyz+8], xmm0
      vmovss  dword ptr [rbp+1130h+bounds.halfSize], xmm2
      vaddss  xmm2, xmm6, xmm2
    }
    bounds.midPoint.v[2] = xyz.v[2];
    v69 = 0;
    v206 = v45;
    v211 = v43;
    v207 = v47;
    v201 = 0;
    __asm
    {
      vmovss  [rsp+1230h+var_11B4], xmm1
      vunpcklps xmm1, xmm2, xmm1
      vmovss  [rsp+1230h+var_11B8], xmm3
      vmovss  [rsp+1230h+var_11BC], xmm2
      vmovsd  qword ptr [rbp+1130h+bounds.midPoint], xmm1
    }
    if ( v43 )
    {
      __asm
      {
        vmovss  xmm10, cs:__real@3ccccccd
        vmovss  xmm11, cs:__real@3a449ba6
      }
      do
      {
        v73 = 0;
        v200 = 0;
        if ( v45 )
        {
          do
          {
            v74 = 0;
            if ( v46 )
            {
              v75 = v47 + v46 * (v73 + v45 * v69);
              v205 = v75;
              do
              {
                __asm { vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite }
                v77 = v74 + v75;
                v78 = 0;
                volumeCells = v21->volumeCells;
                __asm { vmovups xmmword ptr [rbp+1130h+color], xmm0 }
                v80 = volumeCells[v77];
                v81 = HIWORD(v80);
                v82 = HIWORD(v80);
                if ( HIWORD(v80) )
                {
                  do
                  {
                    LODWORD(v82) = HIWORD(v21->drawDataIndices[v82]);
                    ++v78;
                  }
                  while ( (_DWORD)v82 );
                }
                if ( v80 )
                {
                  drawDataIndices = v21->drawDataIndices;
                  v84 = 1;
                  if ( !v81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 2821, ASSERT_TYPE_ASSERT, "(decalIndex)", (const char *)&queryFormat, "decalIndex") )
                    __debugbreak();
                  v85 = HIWORD(drawDataIndices[v81]);
                  if ( HIWORD(drawDataIndices[v81]) )
                  {
                    do
                    {
                      LODWORD(v85) = HIWORD(drawDataIndices[v85]);
                      ++v84;
                    }
                    while ( (_DWORD)v85 );
                  }
                  if ( v84 != v78 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 2830, ASSERT_TYPE_ASSERT, "(numDecalsInCell == numDecalsInCell0)", (const char *)&queryFormat, "numDecalsInCell == numDecalsInCell0") )
                    __debugbreak();
                  __asm
                  {
                    vmovups xmm0, xmmword ptr cs:?colorPink@@3Tvec4_t@@B; vec4_t const colorPink
                    vmovups xmmword ptr [rbp+1130h+color], xmm0
                  }
                  Com_sprintf(dest, 0x800ui64, "Num cell decals: %u", v84);
                  __asm
                  {
                    vmovss  xmm9, dword ptr [rbp+1130h+bounds.midPoint+4]
                    vmovss  xmm8, dword ptr [rbp+1130h+bounds.midPoint]
                    vmovss  xmm6, dword ptr [rbp+1130h+bounds.midPoint+8]
                    vmulss  xmm2, xmm9, dword ptr [rbp+1130h+axis+0Ch]
                    vmulss  xmm0, xmm8, dword ptr [rbp+1130h+axis]
                    vmulss  xmm1, xmm6, dword ptr [rbp+1130h+axis+1Ch]
                    vaddss  xmm3, xmm2, xmm0
                    vmulss  xmm0, xmm6, dword ptr [rbp+1130h+axis+18h]
                    vaddss  xmm2, xmm3, xmm0
                    vaddss  xmm7, xmm2, dword ptr [rbp+1130h+origin]
                    vmulss  xmm2, xmm8, dword ptr [rbp+1130h+axis+4]
                    vmulss  xmm3, xmm9, dword ptr [rbp+1130h+axis+10h]
                    vaddss  xmm4, xmm3, xmm2
                    vmulss  xmm3, xmm9, dword ptr [rbp+1130h+axis+14h]
                    vaddss  xmm2, xmm4, xmm1
                    vaddss  xmm5, xmm2, dword ptr [rbp+1130h+origin+4]
                    vsubss  xmm0, xmm5, dword ptr [rsi+4]
                    vmulss  xmm2, xmm8, dword ptr [rbp+1130h+axis+8]
                    vmulss  xmm1, xmm6, dword ptr [rbp+1130h+axis+20h]
                    vaddss  xmm4, xmm3, xmm2
                    vaddss  xmm2, xmm4, xmm1
                    vaddss  xmm3, xmm2, dword ptr [rbp+1130h+origin+8]
                    vsubss  xmm4, xmm7, dword ptr [rsi]
                    vmulss  xmm1, xmm0, xmm0
                    vmulss  xmm0, xmm4, xmm4
                    vaddss  xmm2, xmm1, xmm0
                    vmovss  dword ptr [rbp+1130h+xyz+4], xmm5
                    vsubss  xmm5, xmm3, dword ptr [rsi+8]
                    vmulss  xmm1, xmm5, xmm5
                    vaddss  xmm2, xmm2, xmm1
                    vsqrtss xmm0, xmm2, xmm2
                    vcvttss2si rcx, xmm0
                    vxorps  xmm1, xmm1, xmm1
                    vcvtsi2ss xmm1, xmm1, rcx
                    vcomiss xmm1, xmm15
                    vmovss  dword ptr [rbp+1130h+xyz], xmm7
                    vmovss  dword ptr [rbp+1130h+xyz+8], xmm3
                  }
                  if ( v120 )
                    __asm { vmovaps xmm2, xmm10 }
                  else
                    __asm { vmulss  xmm2, xmm1, xmm11; scale }
                  CL_AddDebugString(&xyz, &colorBlueHeat, *(float *)&_XMM2, dest, 0, 1);
                  __asm { vmovaps xmm2, xmm13; size }
                  R_AddDebugStar(&frontEndDataOut->debugGlobals, &xyz, *(const float *)&_XMM2, &color);
                }
                R_AddDebugBoxOrientedDepthTest(&frontEndDataOut->debugGlobals, &origin, &bounds, &axis, &color);
                __asm { vaddss  xmm1, xmm12, dword ptr [rbp+1130h+bounds.midPoint] }
                v75 = v205;
                ++v74;
                __asm { vmovss  dword ptr [rbp+1130h+bounds.midPoint], xmm1 }
              }
              while ( v74 < v46 );
              v73 = v200;
              v45 = v206;
              v69 = v201;
              v47 = v207;
            }
            __asm
            {
              vmovss  xmm0, [rsp+1230h+var_11BC]
              vaddss  xmm1, xmm14, dword ptr [rbp+1130h+bounds.midPoint+4]
            }
            v200 = ++v73;
            __asm
            {
              vmovss  dword ptr [rbp+1130h+bounds.midPoint], xmm0
              vmovss  dword ptr [rbp+1130h+bounds.midPoint+4], xmm1
            }
          }
          while ( v73 < v45 );
          __asm { vmovss  xmm3, [rsp+1230h+var_11B8] }
        }
        __asm
        {
          vmovss  xmm0, [rsp+1230h+var_11B4]
          vaddss  xmm1, xmm3, dword ptr [rbp+1130h+bounds.midPoint+8]
        }
        ++v69;
        __asm
        {
          vmovss  dword ptr [rbp+1130h+bounds.midPoint+4], xmm0
          vmovss  dword ptr [rbp+1130h+bounds.midPoint+8], xmm1
        }
        v201 = v69;
      }
      while ( v69 < v211 );
      _R14 = v213;
    }
  }
  __asm
  {
    vmovss  xmm2, dword ptr [r14+0Ch]
    vmovss  xmm11, dword ptr [rbp+1130h+origin]
    vmovss  xmm13, dword ptr [rbp+1130h+origin+4]
    vmovss  xmm14, dword ptr [rbp+1130h+origin+8]
    vmovss  xmm9, dword ptr [rbp+1130h+axis]
    vmovss  xmm10, dword ptr [rbp+1130h+axis+4]
    vmovss  xmm12, dword ptr [rbp+1130h+axis+8]
    vmovss  xmm4, dword ptr [rbp+1130h+axis+18h]
    vmovss  xmm5, dword ptr [rbp+1130h+axis+1Ch]
    vmovss  xmm6, dword ptr [rbp+1130h+axis+20h]
    vmulss  xmm0, xmm2, xmm9
    vaddss  xmm0, xmm0, xmm11
    vmovss  dword ptr [rbp+1130h+end], xmm0
    vmulss  xmm1, xmm2, xmm10
    vaddss  xmm0, xmm1, xmm13
    vmovss  dword ptr [rbp+1130h+end+4], xmm0
    vmulss  xmm1, xmm2, xmm12
    vaddss  xmm0, xmm1, xmm14
    vmovss  dword ptr [rbp+1130h+end+8], xmm0
    vmovss  xmm2, dword ptr [r14+10h]
    vmulss  xmm0, xmm2, dword ptr [rbp+1130h+axis+0Ch]
    vaddss  xmm1, xmm0, xmm11
    vmulss  xmm0, xmm2, dword ptr [rbp+1130h+axis+10h]
    vmovss  dword ptr [rbp+1130h+var_1110], xmm1
    vaddss  xmm1, xmm0, xmm13
    vmulss  xmm0, xmm2, dword ptr [rbp+1130h+axis+14h]
    vmovss  dword ptr [rbp+1130h+var_1110+4], xmm1
    vaddss  xmm1, xmm0, xmm14
    vmovss  dword ptr [rbp+1130h+var_1110+8], xmm1
    vmovss  xmm2, dword ptr [r14+14h]
    vmulss  xmm0, xmm2, xmm4
    vaddss  xmm1, xmm0, xmm11
    vmulss  xmm0, xmm2, xmm5
    vmovss  dword ptr [rbp+1130h+var_1100], xmm1
    vaddss  xmm1, xmm0, xmm13
    vmulss  xmm0, xmm2, xmm6
    vmulss  xmm2, xmm9, [rsp+1230h+var_11D8]
    vmovss  xmm9, [rbp+1130h+var_11A8]
    vmovss  dword ptr [rbp+1130h+var_1100+4], xmm1
    vaddss  xmm1, xmm0, xmm14
    vmulss  xmm0, xmm9, dword ptr [rbp+1130h+axis+0Ch]
    vaddss  xmm3, xmm2, xmm0
    vmovss  dword ptr [rbp+1130h+var_1100+8], xmm1
    vmulss  xmm1, xmm4, [rsp+1230h+var_11D4]
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm3, xmm10, [rsp+1230h+var_11D8]
    vmulss  xmm1, xmm9, dword ptr [rbp+1130h+axis+10h]
    vaddss  xmm0, xmm2, xmm11
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm3, xmm12, [rsp+1230h+var_11D8]
    vmovss  dword ptr [rbp+1130h+pos], xmm0
    vmulss  xmm0, xmm5, [rsp+1230h+var_11D4]
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm0, xmm9, dword ptr [rbp+1130h+axis+14h]
    vaddss  xmm1, xmm2, xmm13
    vaddss  xmm2, xmm3, xmm0
    vmovss  dword ptr [rbp+1130h+pos+4], xmm1
    vmulss  xmm1, xmm6, [rsp+1230h+var_11D4]
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm0, xmm2, xmm14
    vmovss  xmm2, cs:__real@3f800000; size
    vmovss  dword ptr [rbp+1130h+pos+8], xmm0
  }
  R_AddDebugStar(&frontEndDataOut->debugGlobals, &pos, *(const float *)&_XMM2, &colorYellow);
  __asm
  {
    vmovaps xmm14, [rsp+1230h+var_C0]
    vmovaps xmm13, [rsp+1230h+var_B0]
    vmovaps xmm12, [rsp+1230h+var_A0]
    vmovaps xmm11, [rsp+1230h+var_90]
    vmovaps xmm10, [rsp+1230h+var_80]
    vmovaps xmm9, [rsp+1230h+var_70]
    vmovaps xmm8, [rsp+1230h+var_60]
    vmovaps xmm7, [rsp+1230h+var_50]
    vmovaps xmm6, [rsp+1230h+var_40]
  }
  p_debugGlobals = &frontEndDataOut->debugGlobals;
  if ( r_decalVolumesGridDebugDrawVolumesDepthTest->current.enabled )
  {
    R_AddDebugBoxOrientedDepthTest(p_debugGlobals, &origin, (const Bounds *)_R14, &axis, v204);
    R_AddDebugLineDepthTest(&frontEndDataOut->debugGlobals, &origin, &end, &colorRed);
    R_AddDebugLineDepthTest(&frontEndDataOut->debugGlobals, &origin, &v220, &colorGreen);
    R_AddDebugLineDepthTest(&frontEndDataOut->debugGlobals, &origin, &v221, &colorBlue);
  }
  else
  {
    R_AddDebugBoxOriented(p_debugGlobals, &origin, (const Bounds *)_R14, &axis, v204);
    R_AddDebugLine(&frontEndDataOut->debugGlobals, &origin, &end, &colorRed);
    R_AddDebugLine(&frontEndDataOut->debugGlobals, &origin, &v220, &colorGreen);
    R_AddDebugLine(&frontEndDataOut->debugGlobals, &origin, &v221, &colorBlue);
  }
  if ( drawInfo )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+1130h+pos]
      vsubss  xmm3, xmm0, dword ptr [rsi]
      vmovss  xmm1, dword ptr [rbp+1130h+pos+4]
      vsubss  xmm2, xmm1, dword ptr [rsi+4]
      vmovss  xmm0, dword ptr [rbp+1130h+pos+8]
      vsubss  xmm4, xmm0, dword ptr [rsi+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@48742400
    }
  }
  __asm { vmovaps xmm15, [rsp+1230h+var_D0] }
}

/*
==============
R_DecalVolumesGrid_FillObjectSpaceBuffers
==============
*/
void R_DecalVolumesGrid_FillObjectSpaceBuffers(const GfxViewInfo *viewInfo, unsigned int frame, ImageAtlasDrawingContext *drawingContext)
{
  __int64 v15; 
  char *v16; 
  __int64 numVolumes; 
  DecalVolumeGridVolumeTransform *volumeTransforms; 
  DecalVolumesGridVolumeInfo *volumeInfos; 
  float v22; 
  float v24; 
  char v33; 
  char v36; 
  __int64 v47; 
  __int64 v73; 
  char v139; 
  unsigned int v140; 
  unsigned int numDrawData; 
  unsigned __int16 v142; 
  unsigned __int16 v144; 
  const char *v147; 
  unsigned int v154; 
  unsigned int v155; 
  unsigned __int16 v156; 
  unsigned __int16 v158; 
  const char *v161; 
  unsigned __int16 v168; 
  unsigned int v169; 
  unsigned __int16 v170; 
  unsigned __int16 v172; 
  const char *v175; 
  __int64 v186; 
  __int64 v190; 
  float v192; 
  float v193; 
  float v194; 
  R_DecalVolumesGrid_FillObjectSpaceBuffers::__l38::DecalVolumeDrawHitComparer v195; 
  __int64 v196; 
  float outDecalScale; 
  float v198; 
  float v199; 
  DecalVolumeStreamingInfo outStreamingInfo; 
  DecalVolumeStreamingInfo streamingInfo; 
  DecalVolumeStreamingInfo v202; 
  const GfxViewInfo *v203; 
  char *v204; 
  AddToGridContext context; 
  FxMarkResult markResult; 
  __int128 v207; 
  __int128 v208; 
  __int128 v209; 
  Bounds localIntDecalVolumeBounds; 
  Bounds v211; 
  Bounds v212; 
  FxDynEntModelMarkIterator v214; 
  FxDobjMarkIterator v215; 
  DecalVolumeIntermediate dstDecalVolume; 
  DecalVolumeIntermediate m; 
  DecalVolumeIntermediate v218; 
  FxModelMarkIterator markIterator; 
  void *retaddr; 

  _R11 = &retaddr;
  _R13 = viewInfo;
  v203 = viewInfo;
  v15 = frame;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-68h], xmm8
  }
  v16 = (char *)&s_decalVolumesGrid + v15 * 1408;
  v204 = v16;
  numVolumes = (unsigned int)s_decalVolumesGrid.decalVolumeGridFrameData[v15].numVolumes;
  volumeTransforms = s_decalVolumesGrid.decalVolumeGridFrameData[v15].volumeTransforms;
  volumeInfos = s_decalVolumesGrid.decalVolumeGridFrameData[v15].volumeInfos;
  v16[1388] = 1;
  *((_DWORD *)v16 + 10) = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+80h]
    vmovups ymm1, ymmword ptr [r13+0A0h]
  }
  context.cameraAxis.m[2].v[2] = _R13->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[2];
  v22 = _R13->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
  __asm
  {
    vmovups ymmword ptr [rsp+0A28h+context.cameraViewProjectionMatrix], ymm0
    vmovups ymm0, ymmword ptr [r13+10Ch]
  }
  context.cameraOrigin.v[2] = v22;
  v24 = _R13->sceneDef.viewOffset.v[2];
  __asm
  {
    vmovups ymmword ptr [rsp+0A28h+context.cameraAxis], ymm0
    vmovsd  xmm0, qword ptr [r13+100h]
  }
  context.viewOffset.v[2] = v24;
  __asm
  {
    vmovsd  qword ptr [rsp+0A28h+context.cameraOrigin], xmm0
    vmovsd  xmm0, qword ptr [r13+5B8h]
    vmovsd  qword ptr [rsp+0A28h+context.viewOffset], xmm0
    vmovups ymmword ptr [rsp+0A28h+context.cameraViewProjectionMatrix+20h], ymm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  dword ptr [rsp+0A28h+context.sceneViewport+4], xmm1
    vmovss  dword ptr [rsp+0A28h+context.sceneViewport], xmm0
  }
  context.drawingContext = drawingContext;
  context.curMarkHandle = -1;
  context.localClientNum = _R13->clientIndex;
  *(double *)&_XMM0 = R_DecalVolume_GetFarPlane(_R13);
  _RBX = DCONST_DVARFLT_r_decalVolumesFadeOutRange;
  __asm { vmovaps xmm8, xmm0 }
  if ( !DCONST_DVARFLT_r_decalVolumesFadeOutRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesFadeOutRange") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0A28h+var_58], xmm7
    vmovaps [rsp+0A28h+var_78], xmm9
  }
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
  }
  if ( v36 | v33 )
  {
    __asm
    {
      vmovss  xmm9, cs:__real@3f800000
      vmovss  [rsp+0A28h+context.fadeOutBias], xmm9
      vmovss  [rsp+0A28h+context.fadeOutScale], xmm6
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm8, xmm0
      vmaxss  xmm7, xmm0, xmm6
      vsubss  xmm0, xmm8, xmm7
      vmaxss  xmm8, xmm0, cs:__real@00800000
      vucomiss xmm8, xmm6
    }
    if ( v33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 652, ASSERT_TYPE_SANITY, "( val != 0.0f )", (const char *)&queryFormat, "val != 0.0f") )
      __debugbreak();
    __asm
    {
      vmovss  xmm9, cs:__real@3f800000
      vdivss  xmm2, xmm9, xmm8
      vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000
      vaddss  xmm1, xmm7, xmm9
      vmulss  xmm2, xmm1, xmm2
      vmovss  [rsp+0A28h+context.fadeOutBias], xmm2
      vmovss  [rsp+0A28h+context.fadeOutScale], xmm0
    }
  }
  _RAX = R_DecalVolumes_GetStreamViewInfo(frame);
  if ( _RAX->multiView.viewCount )
  {
    _RCX = &context.multiView;
    v47 = 8i64;
    do
    {
      _RCX = (StreamUpdateMultiView *)((char *)_RCX + 128);
      __asm { vmovups xmm0, xmmword ptr [rax] }
      _RAX = (const DecalVolumeStreamViewInfo *)((char *)_RAX + 128);
      __asm
      {
        vmovups xmmword ptr [rcx-80h], xmm0
        vmovups xmm1, xmmword ptr [rax-70h]
        vmovups xmmword ptr [rcx-70h], xmm1
        vmovups xmm0, xmmword ptr [rax-60h]
        vmovups xmmword ptr [rcx-60h], xmm0
        vmovups xmm1, xmmword ptr [rax-50h]
        vmovups xmmword ptr [rcx-50h], xmm1
        vmovups xmm0, xmmword ptr [rax-40h]
        vmovups xmmword ptr [rcx-40h], xmm0
        vmovups xmm1, xmmword ptr [rax-30h]
        vmovups xmmword ptr [rcx-30h], xmm1
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmm1, xmmword ptr [rax-10h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v47;
    }
    while ( v47 );
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
    }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [r13+100h] }
    context.multiView.viewCount = 1;
    HIDWORD(v207) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+680h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [r13+104h], 10h
      vinsertps xmm3, xmm3, dword ptr [r13+108h], 20h ; ' '
      vmovss  xmm0, dword ptr [r13+10Ch]
      vmovups xmmword ptr [rsp+680h], xmm3
      vmovups xmmword ptr [rsp+0A28h+context.multiView.viewPos.v], xmm3
    }
    HIDWORD(v208) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+690h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [r13+110h], 10h
      vinsertps xmm3, xmm3, dword ptr [r13+114h], 20h ; ' '
      vmovups xmmword ptr [rsp+690h], xmm3
      vmovups xmmword ptr [rsp+0A28h+context.multiView.viewDir.v], xmm3
      vmovss  [rsp+0A28h+context.multiView.viewZoomFactors], xmm9
      vmovss  [rsp+0A28h+context.multiView.viewCosFovLimit], xmm6
      vmovss  [rsp+0A28h+context.multiView.viewDistanceScaleSq], xmm9
    }
  }
  if ( (_DWORD)numVolumes )
  {
    __asm { vmovaps [rsp+0A28h+var_88], xmm10 }
    _R15 = &volumeInfos->m_volumeBounds.halfSize.v[2];
    __asm
    {
      vmovss  xmm10, cs:__real@3d4ccccd
      vmovaps [rsp+0A28h+var_98], xmm11
    }
    v73 = numVolumes;
    __asm
    {
      vmovss  xmm11, cs:__real@40000000
      vmovaps [rsp+0A28h+var_A8], xmm12
    }
    _R12 = &volumeTransforms->m_scale_firstCellIndex.v[2];
    __asm
    {
      vmovss  xmm12, cs:__real@3f000000
      vmovaps [rsp+0A28h+var_B8], xmm13
      vmovups xmm13, cs:__xmm@40000000400000004000000040000000
    }
    v196 = numVolumes;
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r15-8]
        vmovups xmm4, [rsp+0A28h+var_328]
      }
      _R14 = _R15 - 5;
      HIDWORD(v209) = 0;
      __asm
      {
        vmovups xmm2, xmmword ptr [rsp+6A0h]
        vmovss  xmm2, xmm2, xmm0
        vinsertps xmm2, xmm2, dword ptr [r15-4], 10h
        vinsertps xmm2, xmm2, dword ptr [r15], 20h ; ' '
        vmovups xmmword ptr [rsp+6A0h], xmm2
        vmulps  xmm2, xmm13, xmm2
        vrcpps  xmm1, xmm2
        vmulps  xmm0, xmm1, xmm1
        vmulps  xmm2, xmm0, xmm2
        vaddps  xmm1, xmm1, xmm1
        vsubps  xmm5, xmm1, xmm2
        vmovups xmmword ptr [r12-28h], xmm5
        vmovss  xmm0, dword ptr [r14]
        vsubss  xmm2, xmm0, dword ptr [r15-8]
        vmovss  xmm1, dword ptr [r15-10h]
        vsubss  xmm3, xmm1, dword ptr [r15-4]
        vmovss  xmm0, dword ptr [r15-0Ch]
        vsubss  xmm1, xmm0, dword ptr [r15]
        vmovss  xmm4, xmm4, xmm2
        vinsertps xmm4, xmm4, xmm3, 10h
        vinsertps xmm4, xmm4, xmm1, 20h ; ' '
        vmulps  xmm0, xmm4, xmm5
        vmovups xmmword ptr [r12-18h], xmm0
        vmovss  xmm3, dword ptr [r15+8]
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, eax
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmovss  dword ptr [r12-4], xmm1
        vmovss  dword ptr [r12], xmm2
        vmovss  dword ptr [r12+4], xmm3
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [r12-8], xmm0
        vxorps  xmm7, xmm7, xmm7
        vcvtsi2ss xmm7, xmm7, eax
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, eax
        vmovss  dword ptr [rsp+0A28h+context.volumeGridSize+4], xmm6
        vmovss  dword ptr [rsp+0A28h+context.volumeGridSize+8], xmm7
        vxorps  xmm5, xmm5, xmm5
        vcvtsi2ss xmm5, xmm5, eax
        vmovss  dword ptr [rsp+0A28h+context.volumeGridSize], xmm5
        vmovups [rsp+0A28h+var_328], xmm4
        vmulss  xmm4, xmm11, dword ptr [r15-8]
        vmovss  dword ptr [rsp+0A28h+context.volumeSize], xmm4
        vmulss  xmm3, xmm11, dword ptr [r15-4]
        vmovss  dword ptr [rsp+0A28h+context.volumeSize+4], xmm3
        vmulss  xmm2, xmm11, dword ptr [r15]
        vmovss  dword ptr [rsp+0A28h+context.volumeSize+8], xmm2
        vdivss  xmm0, xmm9, xmm4
        vmovss  dword ptr [rsp+0A28h+context.volumeSizeRcp], xmm0
        vdivss  xmm0, xmm9, xmm2
        vmovss  dword ptr [rsp+0A28h+context.volumeSizeRcp+8], xmm0
        vdivss  xmm0, xmm3, xmm6
        vdivss  xmm2, xmm2, xmm7
        vdivss  xmm1, xmm9, xmm3
        vmovss  dword ptr [rsp+0A28h+context.volumeSizeRcp+4], xmm1
        vdivss  xmm1, xmm4, xmm5
        vmulss  xmm7, xmm0, xmm12
        vmovss  dword ptr [rsp+0A28h+context.stepHalf+4], xmm7
        vmovss  dword ptr [rsp+0A28h+context.step], xmm1
        vmovss  dword ptr [rsp+0A28h+context.step+4], xmm0
        vmovss  dword ptr [rsp+0A28h+context.step+8], xmm2
        vmulss  xmm6, xmm1, xmm12
        vmovss  dword ptr [rsp+0A28h+context.stepHalf], xmm6
        vmulss  xmm8, xmm2, xmm12
        vmovss  dword ptr [rsp+0A28h+context.stepHalf+8], xmm8
        vmovss  xmm0, dword ptr [r14]
        vsubss  xmm5, xmm0, dword ptr [r15-8]
        vmovss  dword ptr [rsp+0A28h+context.volumeMinCorner], xmm5
        vmovss  xmm1, dword ptr [r15-10h]
        vsubss  xmm4, xmm1, dword ptr [r15-4]
        vmovss  dword ptr [rsp+0A28h+context.volumeMinCorner+4], xmm4
        vmovss  xmm0, dword ptr [r15-0Ch]
        vsubss  xmm3, xmm0, dword ptr [r15]
        vmovss  dword ptr [rsp+0A28h+context.volumeMinCorner+8], xmm3
        vmovss  xmm1, dword ptr [r15-8]
        vaddss  xmm0, xmm1, dword ptr [r14]
        vmovss  dword ptr [rsp+0A28h+context.volumeMaxCorner], xmm0
        vmovss  xmm2, dword ptr [r15-10h]
        vaddss  xmm1, xmm2, dword ptr [r15-4]
        vmovss  dword ptr [rsp+0A28h+context.volumeMaxCorner+4], xmm1
        vmovss  xmm0, dword ptr [r15]
        vaddss  xmm2, xmm0, dword ptr [r15-0Ch]
        vmovss  dword ptr [rsp+0A28h+context.volumeMaxCorner+8], xmm2
        vaddss  xmm1, xmm6, xmm5
        vmovss  dword ptr [rsp+0A28h+context.cellMinCorner], xmm1
        vaddss  xmm1, xmm8, xmm3
        vmovss  dword ptr [rsp+0A28h+context.cellMinCorner+8], xmm1
        vaddss  xmm0, xmm7, xmm4
        vmovss  dword ptr [rsp+0A28h+context.cellMinCorner+4], xmm0
      }
      context.numTotalCells = *((unsigned __int8 *)_R15 + 4) * *((unsigned __int8 *)_R15 + 5) * *((unsigned __int8 *)_R15 + 6);
      v139 = *((_BYTE *)_R15 + 7);
      switch ( v139 )
      {
        case 2:
          v140 = *((_DWORD *)_R15 + 3);
          R_DecalVolumesGrid_AddModelObjectSpace(v140, frame, &context, (const DecalVolumesGridVolumeInfo *)(_R15 - 5));
          FX_BeginModelMarkIterator(&markIterator, _R13->clientIndex, v140);
          while ( FX_GetModelMarkFromIterator(&markIterator, &markResult) )
          {
            context.curMarkHandle = markResult.markHandle;
            numDrawData = s_decalVolumesGrid.decalVolumeGridFrameData[v15].numDrawData;
            if ( numDrawData >= 0x800 )
              break;
            v142 = truncate_cast<unsigned short,unsigned int>(numDrawData);
            __asm { vmovss  xmm1, dword ptr [rsp+0A28h+markResult.halfSize]; decalHalfDepth }
            v144 = v142;
            ++s_decalVolumesGrid.decalVolumeGridFrameData[v15].numDrawData;
            __asm { vmulss  xmm0, xmm10, xmm1; zFeatherIn }
            *(double *)&_XMM0 = R_DecalVolumes_CalculateZFeatherRcp(*(float *)&_XMM0, *(float *)&_XMM1);
            __asm { vmovss  [rsp+0A28h+var_9E0], xmm0 }
            R_FillMarkDecalVolumeInternal(&dstDecalVolume, &context, &markResult.worldCenter, &markResult.center, &markResult.halfSize, &markResult.axis, markResult.color, markResult.material, markResult.atlasIndex, v192, markResult.skinned);
            __asm { vmovss  [rsp+0A28h+outDecalScale], xmm9 }
            R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace(frame, v144, &context, &dstDecalVolume, &markResult.worldCenter, &markResult.worldAxis, &outDecalScale, &outStreamingInfo);
            __asm
            {
              vmovss  xmm0, [rsp+0A28h+outDecalScale]
              vcomiss xmm0, xmm9
            }
            if ( v36 )
            {
              --s_decalVolumesGrid.decalVolumeGridFrameData[v15].numDrawData;
            }
            else
            {
              v147 = FX_MarkVfxName(context.localClientNum, markResult.markHandle);
              R_DecalVolumesGrid_SetDrawDataDebug(frame, &context, v144, &dstDecalVolume, &markResult.worldCenter, &markResult.worldAxis, &outStreamingInfo, v147);
              if ( context.numTotalCells == 1 )
              {
                R_DecalVolumesGrid_AddTo1x1Grid(frame, (const DecalVolumesGridVolumeInfo *)(_R15 - 5), v144);
              }
              else
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+0A28h+dstDecalVolume.halfSize]
                  vmaxss  xmm1, xmm0, dword ptr [rsp+0A28h+dstDecalVolume.halfSize+4]
                  vmaxss  xmm3, xmm1, dword ptr [rsp+0A28h+dstDecalVolume.halfSize+8]
                  vmovss  xmm1, dword ptr [rsp+0A28h+markResult.center+8]
                  vmovss  xmm2, dword ptr [rsp+0A28h+markResult.center]
                  vmovss  xmm0, dword ptr [rsp+0A28h+markResult.center+4]
                  vmovss  dword ptr [rsp+0A28h+localIntDecalVolumeBounds.midPoint+8], xmm1
                  vmovss  dword ptr [rsp+0A28h+localIntDecalVolumeBounds.midPoint], xmm2
                  vmovss  dword ptr [rsp+0A28h+localIntDecalVolumeBounds.midPoint+4], xmm0
                  vmovss  dword ptr [rsp+0A28h+localIntDecalVolumeBounds.halfSize], xmm3
                  vmovss  dword ptr [rsp+0A28h+localIntDecalVolumeBounds.halfSize+4], xmm3
                  vmovss  dword ptr [rsp+0A28h+localIntDecalVolumeBounds.halfSize+8], xmm3
                }
                R_DecalVolumesGrid_AddToGridBruteForce(&context, frame, (const DecalVolumesGridVolumeInfo *)(_R15 - 5), v144, &localIntDecalVolumeBounds);
              }
            }
          }
          break;
        case 4:
          v154 = *((_DWORD *)_R15 + 3);
          R_DecalVolumesGrid_AddDobjModel(v154, *((_DWORD *)_R15 + 4), frame, &context, (const DecalVolumesGridVolumeInfo *)(_R15 - 5));
          FX_BeginDobjMarkIterator(&v215, _R13->clientIndex, v154, *((_DWORD *)_R15 + 4), &context.viewOffset);
          if ( FX_GetDobjMarkFromIterator(&v215, &markResult) )
          {
            do
            {
              v155 = s_decalVolumesGrid.decalVolumeGridFrameData[v15].numDrawData;
              context.curMarkHandle = markResult.markHandle;
              if ( v155 >= 0x800 )
                break;
              v156 = truncate_cast<unsigned short,unsigned int>(v155);
              __asm { vmovss  xmm1, dword ptr [rsp+0A28h+markResult.halfSize]; decalHalfDepth }
              ++s_decalVolumesGrid.decalVolumeGridFrameData[v15].numDrawData;
              v158 = v156;
              __asm { vmulss  xmm0, xmm10, xmm1; zFeatherIn }
              *(double *)&_XMM0 = R_DecalVolumes_CalculateZFeatherRcp(*(float *)&_XMM0, *(float *)&_XMM1);
              __asm { vmovss  [rsp+0A28h+var_9E0], xmm0 }
              R_FillMarkDecalVolumeInternal(&m, &context, &markResult.worldCenter, &markResult.center, &markResult.halfSize, &markResult.axis, markResult.color, markResult.material, markResult.atlasIndex, v193, markResult.skinned);
              __asm { vmovss  [rsp+0A28h+var_9B4], xmm9 }
              R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace(frame, v158, &context, &m, &markResult.worldCenter, &markResult.worldAxis, &v198, &streamingInfo);
              __asm
              {
                vmovss  xmm0, [rsp+0A28h+var_9B4]
                vcomiss xmm0, xmm9
              }
              if ( v36 )
              {
                --s_decalVolumesGrid.decalVolumeGridFrameData[v15].numDrawData;
              }
              else
              {
                v161 = FX_MarkVfxName(context.localClientNum, markResult.markHandle);
                R_DecalVolumesGrid_SetDrawDataDebug(frame, &context, v158, &m, &markResult.worldCenter, &markResult.worldAxis, &streamingInfo, v161);
                if ( context.numTotalCells == 1 )
                {
                  R_DecalVolumesGrid_AddTo1x1Grid(frame, (const DecalVolumesGridVolumeInfo *)(_R15 - 5), v158);
                }
                else
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+0A28h+m.halfSize]
                    vmaxss  xmm1, xmm0, dword ptr [rsp+0A28h+m.halfSize+4]
                    vmaxss  xmm3, xmm1, dword ptr [rsp+0A28h+m.halfSize+8]
                    vmovss  xmm1, dword ptr [rsp+0A28h+markResult.center+8]
                    vmovss  xmm2, dword ptr [rsp+0A28h+markResult.center]
                    vmovss  xmm0, dword ptr [rsp+0A28h+markResult.center+4]
                    vmovss  dword ptr [rsp+0A28h+var_360.midPoint+8], xmm1
                    vmovss  dword ptr [rsp+0A28h+var_360.midPoint], xmm2
                    vmovss  dword ptr [rsp+0A28h+var_360.midPoint+4], xmm0
                    vmovss  dword ptr [rsp+0A28h+var_360.halfSize], xmm3
                    vmovss  dword ptr [rsp+0A28h+var_360.halfSize+4], xmm3
                    vmovss  dword ptr [rsp+0A28h+var_360.halfSize+8], xmm3
                  }
                  R_DecalVolumesGrid_AddToGridBruteForce(&context, frame, (const DecalVolumesGridVolumeInfo *)(_R15 - 5), v158, &v211);
                }
              }
            }
            while ( FX_GetDobjMarkFromIterator(&v215, &markResult) );
            _R13 = v203;
          }
          FX_EndDobjMarkIterator(&v215);
          break;
        case 8:
          v168 = truncate_cast<unsigned short,unsigned int>(*((_DWORD *)_R15 + 4));
          FX_BeginDynEntModelMarkIterator(&v214, _R13->clientIndex, *((_DWORD *)_R15 + 3), v168, &context.viewOffset);
          if ( !FX_GetDynEntModelMarkFromIterator(&v214, &markResult) )
            goto LABEL_49;
          do
          {
            v169 = s_decalVolumesGrid.decalVolumeGridFrameData[v15].numDrawData;
            context.curMarkHandle = markResult.markHandle;
            if ( v169 >= 0x800 )
              break;
            v170 = truncate_cast<unsigned short,unsigned int>(v169);
            __asm { vmovss  xmm1, dword ptr [rsp+0A28h+markResult.halfSize]; decalHalfDepth }
            ++s_decalVolumesGrid.decalVolumeGridFrameData[v15].numDrawData;
            v172 = v170;
            __asm { vmulss  xmm0, xmm10, xmm1; zFeatherIn }
            *(double *)&_XMM0 = R_DecalVolumes_CalculateZFeatherRcp(*(float *)&_XMM0, *(float *)&_XMM1);
            __asm { vmovss  [rsp+0A28h+var_9E0], xmm0 }
            R_FillMarkDecalVolumeInternal(&v218, &context, &markResult.worldCenter, &markResult.center, &markResult.halfSize, &markResult.axis, markResult.color, markResult.material, markResult.atlasIndex, v194, markResult.skinned);
            __asm { vmovss  [rsp+0A28h+var_9B0], xmm9 }
            R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace(frame, v172, &context, &v218, &markResult.worldCenter, &markResult.worldAxis, &v199, &v202);
            __asm
            {
              vmovss  xmm0, [rsp+0A28h+var_9B0]
              vcomiss xmm0, xmm9
            }
            if ( v36 )
            {
              --s_decalVolumesGrid.decalVolumeGridFrameData[v15].numDrawData;
            }
            else
            {
              v175 = FX_MarkVfxName(context.localClientNum, markResult.markHandle);
              R_DecalVolumesGrid_SetDrawDataDebug(frame, &context, v172, &v218, &markResult.worldCenter, &markResult.worldAxis, &v202, v175);
              if ( context.numTotalCells == 1 )
              {
                R_DecalVolumesGrid_AddTo1x1Grid(frame, (const DecalVolumesGridVolumeInfo *)(_R15 - 5), v172);
              }
              else
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+0A28h+var_1A8.halfSize]
                  vmaxss  xmm1, xmm0, dword ptr [rsp+0A28h+var_1A8.halfSize+4]
                  vmaxss  xmm3, xmm1, dword ptr [rsp+0A28h+var_1A8.halfSize+8]
                  vmovss  xmm1, dword ptr [rsp+0A28h+markResult.center+8]
                  vmovss  xmm2, dword ptr [rsp+0A28h+markResult.center]
                  vmovss  xmm0, dword ptr [rsp+0A28h+markResult.center+4]
                  vmovss  dword ptr [rsp+0A28h+var_348.midPoint+8], xmm1
                  vmovss  dword ptr [rsp+0A28h+var_348.midPoint], xmm2
                  vmovss  dword ptr [rsp+0A28h+var_348.midPoint+4], xmm0
                  vmovss  dword ptr [rsp+0A28h+var_348.halfSize], xmm3
                  vmovss  dword ptr [rsp+0A28h+var_348.halfSize+4], xmm3
                  vmovss  dword ptr [rsp+0A28h+var_348.halfSize+8], xmm3
                }
                R_DecalVolumesGrid_AddToGridBruteForce(&context, frame, (const DecalVolumesGridVolumeInfo *)(_R15 - 5), v172, &v212);
              }
            }
          }
          while ( FX_GetDynEntModelMarkFromIterator(&v214, &markResult) );
          _R13 = v203;
          break;
        default:
          goto LABEL_49;
      }
      v73 = v196;
LABEL_49:
      _R15 += 10;
      _R12 += 12;
      v196 = --v73;
      if ( !v73 )
      {
        __asm
        {
          vmovaps xmm13, [rsp+0A28h+var_B8]
          vmovaps xmm12, [rsp+0A28h+var_A8]
          vmovaps xmm11, [rsp+0A28h+var_98]
          vmovaps xmm10, [rsp+0A28h+var_88]
        }
        break;
      }
    }
  }
  v186 = (__int64)v204;
  __asm
  {
    vmovaps xmm9, [rsp+0A28h+var_78]
    vmovaps xmm8, [rsp+0A28h+var_68]
    vmovaps xmm7, [rsp+0A28h+var_58]
  }
  v190 = *((unsigned int *)v204 + 344);
  __asm { vmovaps xmm6, [rsp+0A28h+var_48] }
  if ( (unsigned int)v190 > 1 )
    std::_Sort_unchecked_DecalVolumeDrawHit____R_DecalVolumesGrid_FillObjectSpaceBuffers_::_38_::DecalVolumeDrawHitComparer_((DecalVolumeDrawHit *)(v204 + 672), (DecalVolumeDrawHit *)&v204[88 * v190 + 672], 88 * v190 / 88, v195);
  *(_BYTE *)(v186 + 1389) = 1;
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
  __int64 v9; 
  unsigned __int16 dynEntClientId; 
  __int64 localClientNum; 
  unsigned __int16 v12; 
  DynEntityClient *v13; 
  unsigned __int16 v14; 
  DynEntityPose *PoseFromClientId; 
  __int64 v28; 
  char v29; 
  char v30; 
  int v33; 
  int v36; 
  int v37; 
  int VolumeCells; 
  __int64 v50; 
  int v53; 
  unsigned __int8 v55; 
  int v56; 
  __int64 v58; 
  __int64 v59; 
  int allocatedVolumeInfoSlot; 
  int v61; 
  int val; 
  int v63; 
  Bounds bounds; 
  Bounds rotatedBounds; 
  tmat33_t<vec3_t> axis; 

  data = viewInfo->input.data;
  decalVolumeGridInfo->allocatedVolumeInfoSlot = 0xFFFF;
  _RBP = viewInfo;
  decalVolumeIndex = data->decalVolumeIndex;
  v9 = decalVolumeIndex;
  if ( s_decalVolumesGrid.decalVolumeGridFrameData[decalVolumeIndex].R_DecalVolumesGrid_FillObjectSpaceBuffers_started._My_val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1240, ASSERT_TYPE_ASSERT, "( ( !frameData->R_DecalVolumesGrid_FillObjectSpaceBuffers_started ) )", "( frame ) = %u", decalVolumeIndex) )
    __debugbreak();
  if ( s_decalVolumesGrid.decalVolumeGridFrameData[v9].objectSpaceDecalsDynEntEnabled )
  {
    dynEntClientId = sceneDynEnt->dynEntClientId;
    localClientNum = _RBP->input.data->localClientNum;
    if ( (unsigned int)localClientNum >= 2 )
    {
      LODWORD(v58) = _RBP->input.data->localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v58, 2) )
        __debugbreak();
    }
    v12 = g_dynEntClientEntsAllocCount[localClientNum][0];
    if ( dynEntClientId >= v12 )
    {
      LODWORD(v59) = v12;
      LODWORD(v58) = dynEntClientId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v58, v59) )
        __debugbreak();
    }
    if ( !g_dynEntClientLists[localClientNum][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
      __debugbreak();
    v13 = &g_dynEntClientLists[localClientNum][0][dynEntClientId];
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1250, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
      __debugbreak();
    if ( FX_DynEntModelHasMarks(v13) )
    {
      v14 = sceneDynEnt->dynEntClientId;
      __asm { vmovaps [rsp+0F8h+var_48], xmm6 }
      PoseFromClientId = DynEnt_GetPoseFromClientId((LocalClientNum_t)localClientNum, v14, DYNENT_BASIS_MODEL);
      XModelGetBounds(v13->activeModel, &bounds);
      UnitQuatToAxis(&PoseFromClientId->pose.quat, &axis);
      Bounds_Transform(&bounds, &PoseFromClientId->pose.origin, &axis, &rotatedBounds);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+100h]
        vsubss  xmm3, xmm0, dword ptr [rsp+0F8h+rotatedBounds.midPoint]
        vmovss  xmm1, dword ptr [rbp+104h]
        vsubss  xmm2, xmm1, dword ptr [rsp+0F8h+rotatedBounds.midPoint+4]
        vmovss  xmm0, dword ptr [rbp+108h]
        vsubss  xmm4, xmm0, dword ptr [rsp+0F8h+rotatedBounds.midPoint+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm6, xmm2, xmm2
      }
      *(double *)&_XMM0 = R_DecalVolume_GetFarPlane(_RBP);
      __asm { vcomiss xmm6, xmm0 }
      if ( v29 | v30 )
      {
        __asm { vmovaps xmm0, xmm6; distanceToCamera }
        R_DecalVolumesGrid_CalculateVolumeDensity(*(double *)&_XMM0, &_RBP->viewParmsSet.frames[0].viewParms.camera.origin, v28, *(double *)&_XMM3);
        __asm { vmovss  xmm1, cs:__real@40000000 }
        v33 = 1;
        __asm
        {
          vdivss  xmm3, xmm1, xmm0
          vmulss  xmm2, xmm3, dword ptr [rsp+0F8h+bounds.halfSize]
        }
        v36 = 1;
        v37 = 1;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vroundss xmm1, xmm1, xmm2, 1
          vcvttss2si eax, xmm1
          vmulss  xmm1, xmm3, dword ptr [rsp+0F8h+bounds.halfSize+4]
          vxorps  xmm2, xmm2, xmm2
        }
        if ( _EAX > 1 )
          v36 = _EAX;
        __asm
        {
          vroundss xmm2, xmm2, xmm1, 1
          vmulss  xmm1, xmm3, dword ptr [rsp+0F8h+bounds.halfSize+8]
        }
        if ( v36 > 16 )
          v36 = 16;
        __asm { vcvttss2si eax, xmm2 }
        val = v36;
        __asm { vxorps  xmm2, xmm2, xmm2 }
        if ( _EAX > 1 )
          v37 = _EAX;
        __asm { vroundss xmm2, xmm2, xmm1, 1 }
        if ( v37 > 16 )
          v37 = 16;
        __asm { vcvttss2si eax, xmm2 }
        v63 = v37;
        if ( _EAX > 1 )
          v33 = _EAX;
        if ( v33 > 16 )
          v33 = 16;
        v61 = v36 * v37 * v33;
        VolumeCells = R_DecalVolumesGrid_AllocateVolumeCells(decalVolumeIndex, v61);
        v50 = VolumeCells;
        if ( VolumeCells >= 0 )
        {
          allocatedVolumeInfoSlot = 0;
          _RBX = R_DecalVolumesGrid_AllocateVolumeInfo(decalVolumeIndex, &allocatedVolumeInfoSlot);
          if ( _RBX )
          {
            R_DecalVolumesGrid_SetModelInfoIndex(decalVolumeGridInfo, allocatedVolumeInfoSlot);
            memset_0(&s_decalVolumesGrid.decalVolumeGridFrameData[v9].volumeCells[v50], 0, 4i64 * v61);
            __asm { vmovups xmm0, xmmword ptr [rsp+0F8h+bounds.midPoint] }
            v53 = val;
            __asm
            {
              vmovups xmmword ptr [rbx], xmm0
              vmovsd  xmm1, qword ptr [rsp+0F8h+bounds.halfSize+4]
              vmovsd  qword ptr [rbx+10h], xmm1
            }
            v55 = truncate_cast<unsigned char,int>(v53);
            v56 = v63;
            _RBX->m_volumeSize[0] = v55;
            _RBX->m_volumeSize[1] = truncate_cast<unsigned char,int>(v56);
            _RBX->m_volumeSize[2] = truncate_cast<unsigned char,int>(v33);
            _RBX->m_volumeType = DECAL_VOLUMES_GRID_VOLUME_TYPE_DYNMODEL;
            _RBX->m_firstCellIndex = v50;
            _RBX->m_objectIndex = v13->dynEntDefId;
            _RBX->m_modelIndex = sceneDynEnt->dynEntClientId;
          }
        }
      }
      __asm { vmovaps xmm6, [rsp+0F8h+var_48] }
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
  __int64 v10; 
  int v11; 
  const DObj *obj; 
  unsigned int HasMarks; 
  const XModel *Model; 
  XModelDecalVolumesInfo *decalVolumesInfo; 
  unsigned __int8 ModelRootBoneIndex; 
  __int64 v29; 
  char v30; 
  char v31; 
  int v34; 
  int v37; 
  int v38; 
  int VolumeCells; 
  __int64 v51; 
  unsigned __int8 v55; 
  int v56; 
  __int64 v58; 
  int NumModels; 
  int allocatedVolumeInfoSlot; 
  int v61; 
  int val; 
  unsigned int v63; 
  GfxModelDecalVolumeGridInfo *outDecalVolumeGridInfo; 
  Bounds bounds; 
  vec3_t outOrigin; 
  Bounds rotatedBounds; 
  tmat33_t<vec3_t> outTagMat; 

  outDecalVolumeGridInfo = decalVolumeGridInfo;
  v63 = dobjIndex;
  _R14 = viewInfo;
  decalVolumeGridInfo->allocatedVolumeInfoSlot = 0xFFFF;
  decalVolumeIndex = viewInfo->input.data->decalVolumeIndex;
  v10 = decalVolumeIndex;
  if ( s_decalVolumesGrid.decalVolumeGridFrameData[decalVolumeIndex].R_DecalVolumesGrid_FillObjectSpaceBuffers_started._My_val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1143, ASSERT_TYPE_ASSERT, "( ( !frameData->R_DecalVolumesGrid_FillObjectSpaceBuffers_started ) )", "( frame ) = %u", viewInfo->input.data->decalVolumeIndex) )
    __debugbreak();
  if ( s_decalVolumesGrid.decalVolumeGridFrameData[v10].objectSpaceDecalsDobjEnabled )
  {
    v11 = (*((_DWORD *)sceneEnt + 346) >> 10) & 0xFFF;
    if ( (unsigned int)(v11 - 2050) > 0x3F )
    {
      obj = sceneEnt->obj;
      HasMarks = FX_EntHasMarks((LocalClientNum_t)_R14->input.data->localClientNum, v11, modelIndex);
      if ( modelIndex >= DObjGetNumModels(obj) )
      {
        NumModels = DObjGetNumModels(obj);
        LODWORD(v58) = modelIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( DObjGetNumModels( obj ) )", "modelIndex doesn't index DObjGetNumModels( obj )\n\t%i not in [0, %i)", v58, NumModels) )
          __debugbreak();
      }
      Model = DObjGetModel(obj, modelIndex);
      decalVolumesInfo = Model->decalVolumesInfo;
      if ( decalVolumesInfo )
        LODWORD(decalVolumesInfo) = decalVolumesInfo->numDecalVolumes;
      if ( (_DWORD)decalVolumesInfo + HasMarks )
      {
        __asm { vmovaps [rsp+128h+var_58], xmm6 }
        ModelRootBoneIndex = DObjGetModelRootBoneIndex(obj, modelIndex);
        CG_DObjGetWorldBoneMatrix(sceneEnt->info.pose, obj, ModelRootBoneIndex, &outTagMat, &outOrigin);
        XModelGetBounds(Model, &bounds);
        Bounds_Transform(&bounds, &outOrigin, &outTagMat, &rotatedBounds);
        __asm
        {
          vmovss  xmm0, dword ptr [r14+100h]
          vsubss  xmm3, xmm0, dword ptr [rsp+128h+rotatedBounds.midPoint]
          vmovss  xmm1, dword ptr [r14+104h]
          vsubss  xmm2, xmm1, dword ptr [rsp+128h+rotatedBounds.midPoint+4]
          vmovss  xmm0, dword ptr [r14+108h]
          vsubss  xmm4, xmm0, dword ptr [rsp+128h+rotatedBounds.midPoint+8]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm6, xmm2, xmm2
        }
        *(double *)&_XMM0 = R_DecalVolume_GetFarPlane(_R14);
        __asm { vcomiss xmm6, xmm0 }
        if ( v30 | v31 )
        {
          __asm { vmovaps xmm0, xmm6; distanceToCamera }
          R_DecalVolumesGrid_CalculateVolumeDensity(*(double *)&_XMM0, &_R14->viewParmsSet.frames[0].viewParms.camera.origin, v29, *(double *)&_XMM3);
          __asm { vmovss  xmm1, cs:__real@40000000 }
          v34 = 1;
          __asm
          {
            vdivss  xmm3, xmm1, xmm0
            vmulss  xmm2, xmm3, dword ptr [rsp+128h+bounds.halfSize]
          }
          v37 = 1;
          v38 = 1;
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vroundss xmm1, xmm1, xmm2, 1
            vcvttss2si eax, xmm1
            vmulss  xmm1, xmm3, dword ptr [rsp+128h+bounds.halfSize+4]
            vxorps  xmm2, xmm2, xmm2
          }
          if ( _EAX > 1 )
            v38 = _EAX;
          __asm
          {
            vroundss xmm2, xmm2, xmm1, 1
            vmulss  xmm1, xmm3, dword ptr [rsp+128h+bounds.halfSize+8]
          }
          if ( v38 > 16 )
            v38 = 16;
          __asm
          {
            vcvttss2si eax, xmm2
            vxorps  xmm2, xmm2, xmm2
          }
          if ( _EAX > 1 )
            v37 = _EAX;
          __asm { vroundss xmm2, xmm2, xmm1, 1 }
          if ( v37 > 16 )
            v37 = 16;
          __asm { vcvttss2si eax, xmm2 }
          val = v37;
          if ( _EAX > 1 )
            v34 = _EAX;
          if ( v34 > 16 )
            v34 = 16;
          v61 = v38 * v37 * v34;
          VolumeCells = R_DecalVolumesGrid_AllocateVolumeCells(decalVolumeIndex, v61);
          v51 = VolumeCells;
          if ( VolumeCells >= 0 )
          {
            allocatedVolumeInfoSlot = 0;
            _RBX = R_DecalVolumesGrid_AllocateVolumeInfo(decalVolumeIndex, &allocatedVolumeInfoSlot);
            if ( _RBX )
            {
              R_DecalVolumesGrid_SetModelInfoIndex(outDecalVolumeGridInfo, allocatedVolumeInfoSlot);
              memset_0(&s_decalVolumesGrid.decalVolumeGridFrameData[v10].volumeCells[v51], 0, 4i64 * v61);
              __asm
              {
                vmovups xmm0, xmmword ptr [rsp+128h+bounds.midPoint]
                vmovups xmmword ptr [rbx], xmm0
                vmovsd  xmm1, qword ptr [rsp+128h+bounds.halfSize+4]
                vmovsd  qword ptr [rbx+10h], xmm1
              }
              v55 = truncate_cast<unsigned char,int>(v38);
              v56 = val;
              _RBX->m_volumeSize[0] = v55;
              _RBX->m_volumeSize[1] = truncate_cast<unsigned char,int>(v56);
              _RBX->m_volumeSize[2] = truncate_cast<unsigned char,int>(v34);
              _RBX->m_objectIndex = v63;
              _RBX->m_volumeType = DECAL_VOLUMES_GRID_VOLUME_TYPE_DOBJ_MODEL;
              _RBX->m_firstCellIndex = v51;
              _RBX->m_modelIndex = modelIndex;
              R_DecalVolumesGrid_AddToEntityDebugVolume(decalVolumeIndex, (*((_DWORD *)sceneEnt + 346) >> 10) & 0xFFF, _RBX);
            }
          }
        }
        __asm { vmovaps xmm6, [rsp+128h+var_58] }
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
  __int64 v10; 
  XModelDecalVolumesInfo *decalVolumesInfo; 
  unsigned int v12; 
  const XModel *model; 
  __int64 v33; 
  char v34; 
  char v35; 
  int v38; 
  int v41; 
  int v42; 
  int VolumeCells; 
  __int64 v55; 
  unsigned __int8 v59; 
  int v60; 
  int allocatedVolumeInfoSlot; 
  int v63; 
  int val; 
  unsigned int v65; 
  Bounds bounds; 

  data = viewInfo->input.data;
  decalVolumeGridInfo->allocatedVolumeInfoSlot = 0xFFFF;
  _RDI = sceneModel;
  v65 = modelIndex;
  _RBX = viewInfo;
  decalVolumeIndex = data->decalVolumeIndex;
  v10 = decalVolumeIndex;
  if ( s_decalVolumesGrid.decalVolumeGridFrameData[decalVolumeIndex].R_DecalVolumesGrid_FillObjectSpaceBuffers_started._My_val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1057, ASSERT_TYPE_ASSERT, "( ( !frameData->R_DecalVolumesGrid_FillObjectSpaceBuffers_started ) )", "( frame ) = %u", decalVolumeIndex) )
    __debugbreak();
  if ( s_decalVolumesGrid.decalVolumeGridFrameData[v10].objectSpaceDecalsModelsEnabled )
  {
    decalVolumesInfo = _RDI->model->decalVolumesInfo;
    v12 = decalVolumesInfo ? decalVolumesInfo->numDecalVolumes : 0;
    if ( v12 + FX_EntHasMarks((LocalClientNum_t)_RBX->input.data->localClientNum, (*((_DWORD *)_RDI + 30) >> 10) & 0xFFF) )
    {
      model = _RDI->model;
      __asm { vmovaps [rsp+0B8h+var_58], xmm6 }
      XModelGetBounds(model, &bounds);
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+54h]
        vmulss  xmm0, xmm3, dword ptr [rsp+0B8h+bounds.halfSize+4]
        vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+bounds.halfSize]
        vmulss  xmm2, xmm3, dword ptr [rsp+0B8h+bounds.halfSize+8]
        vmovss  dword ptr [rsp+0B8h+bounds.halfSize+4], xmm0
        vmulss  xmm0, xmm3, dword ptr [rsp+0B8h+bounds.midPoint+4]
        vmovss  dword ptr [rsp+0B8h+bounds.halfSize+8], xmm2
        vmulss  xmm2, xmm3, dword ptr [rsp+0B8h+bounds.midPoint+8]
        vmovss  dword ptr [rsp+0B8h+bounds.halfSize], xmm1
        vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+bounds.midPoint]
        vmovss  dword ptr [rsp+0B8h+bounds.midPoint+4], xmm0
        vmovss  xmm0, dword ptr [rbx+100h]
        vsubss  xmm3, xmm0, dword ptr [rdi+48h]
        vmovss  xmm0, dword ptr [rbx+108h]
        vsubss  xmm4, xmm0, dword ptr [rdi+50h]
        vmovss  dword ptr [rsp+0B8h+bounds.midPoint+8], xmm2
        vmovss  dword ptr [rsp+0B8h+bounds.midPoint], xmm1
        vmovss  xmm1, dword ptr [rbx+104h]
        vsubss  xmm2, xmm1, dword ptr [rdi+4Ch]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm6, xmm2, xmm2
      }
      *(double *)&_XMM0 = R_DecalVolume_GetFarPlane(_RBX);
      __asm { vcomiss xmm6, xmm0 }
      if ( v34 | v35 )
      {
        __asm { vmovaps xmm0, xmm6; distanceToCamera }
        R_DecalVolumesGrid_CalculateVolumeDensity(*(double *)&_XMM0, &_RBX->viewParmsSet.frames[0].viewParms.camera.origin, v33, *(double *)&_XMM3);
        __asm { vmovss  xmm1, cs:__real@40000000 }
        v38 = 1;
        __asm
        {
          vdivss  xmm3, xmm1, xmm0
          vmulss  xmm2, xmm3, dword ptr [rsp+0B8h+bounds.halfSize]
        }
        v41 = 1;
        v42 = 1;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vroundss xmm1, xmm1, xmm2, 1
          vcvttss2si eax, xmm1
          vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+bounds.halfSize+4]
          vxorps  xmm2, xmm2, xmm2
        }
        if ( _EAX > 1 )
          v42 = _EAX;
        __asm
        {
          vroundss xmm2, xmm2, xmm1, 1
          vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+bounds.halfSize+8]
        }
        if ( v42 > 16 )
          v42 = 16;
        __asm
        {
          vcvttss2si eax, xmm2
          vxorps  xmm2, xmm2, xmm2
        }
        if ( _EAX > 1 )
          v41 = _EAX;
        __asm { vroundss xmm2, xmm2, xmm1, 1 }
        if ( v41 > 16 )
          v41 = 16;
        __asm { vcvttss2si eax, xmm2 }
        val = v41;
        if ( _EAX > 1 )
          v38 = _EAX;
        if ( v38 > 16 )
          v38 = 16;
        v63 = v42 * v41 * v38;
        VolumeCells = R_DecalVolumesGrid_AllocateVolumeCells(decalVolumeIndex, v63);
        v55 = VolumeCells;
        if ( VolumeCells >= 0 )
        {
          allocatedVolumeInfoSlot = 0;
          _RBX = R_DecalVolumesGrid_AllocateVolumeInfo(decalVolumeIndex, &allocatedVolumeInfoSlot);
          if ( _RBX )
          {
            R_DecalVolumesGrid_SetModelInfoIndex(decalVolumeGridInfo, allocatedVolumeInfoSlot);
            memset_0(&s_decalVolumesGrid.decalVolumeGridFrameData[v10].volumeCells[v55], 0, 4i64 * v63);
            __asm
            {
              vmovups xmm0, xmmword ptr [rsp+0B8h+bounds.midPoint]
              vmovups xmmword ptr [rbx], xmm0
              vmovsd  xmm1, qword ptr [rsp+0B8h+bounds.halfSize+4]
              vmovsd  qword ptr [rbx+10h], xmm1
            }
            v59 = truncate_cast<unsigned char,int>(v42);
            v60 = val;
            _RBX->m_volumeSize[0] = v59;
            _RBX->m_volumeSize[1] = truncate_cast<unsigned char,int>(v60);
            _RBX->m_volumeSize[2] = truncate_cast<unsigned char,int>(v38);
            _RBX->m_objectIndex = v65;
            _RBX->m_volumeType = DECAL_VOLUMES_GRID_VOLUME_TYPE_MODEL;
            _RBX->m_firstCellIndex = v55;
            R_DecalVolumesGrid_AddToEntityDebugVolume(decalVolumeIndex, (*((_DWORD *)_RDI + 30) >> 10) & 0xFFF, _RBX);
          }
        }
      }
      __asm { vmovaps xmm6, [rsp+0B8h+var_58] }
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
  __int64 v11; 
  __int64 v12; 
  GfxDecalVolumeDrawDataDebug *drawDataDebug; 
  __int64 v16; 
  DecalVolumeDrawHits *p_drawHits; 
  char v39; 
  char v40; 
  vec4_t result; 

  _RDI = m;
  v11 = frame;
  v12 = drawDataIndex;
  _RBP = &_RDI->halfSize;
  _R8 = worldPos;
  drawDataDebug = s_decalVolumesGrid.decalVolumeGridFrameData[v11].drawDataDebug;
  v16 = v12;
  _RSI = &s_decalVolumesGrid.decalVolumeGridFrameData[v11].decalVolumeDebug[v12];
  p_drawHits = &s_decalVolumesGrid.decalVolumeGridFrameData[v11].drawHits;
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm1, xmm0, dword ptr [r14+64h]
    vmovss  dword ptr [rsi], xmm1
    vmovss  xmm2, dword ptr [r8+4]
    vsubss  xmm0, xmm2, dword ptr [r14+68h]
    vmovss  dword ptr [rsi+4], xmm0
    vmovss  xmm1, dword ptr [r8+8]
    vsubss  xmm2, xmm1, dword ptr [r14+6Ch]
    vmovss  dword ptr [rsi+8], xmm2
    vmovss  xmm3, dword ptr [rbp+0]
    vmulss  xmm0, xmm3, dword ptr [r10]
    vmovss  dword ptr [rsi+0Ch], xmm0
    vmulss  xmm1, xmm3, dword ptr [r10+4]
    vmovss  dword ptr [rsi+10h], xmm1
    vmulss  xmm0, xmm3, dword ptr [r10+8]
    vmovss  dword ptr [rsi+14h], xmm0
    vmovss  xmm2, dword ptr [rdi+34h]
    vmulss  xmm0, xmm2, dword ptr [r10+0Ch]
    vmovss  dword ptr [rsi+18h], xmm0
    vmulss  xmm1, xmm2, dword ptr [r10+10h]
    vmovss  dword ptr [rsi+1Ch], xmm1
    vmulss  xmm0, xmm2, dword ptr [r10+14h]
    vmovss  dword ptr [rsi+20h], xmm0
    vmovss  xmm2, dword ptr [rdi+38h]
    vmulss  xmm0, xmm2, dword ptr [r10+18h]
    vmovss  dword ptr [rsi+24h], xmm0
    vmulss  xmm1, xmm2, dword ptr [r10+1Ch]
    vmovss  dword ptr [rsi+28h], xmm1
    vmulss  xmm0, xmm2, dword ptr [r10+20h]
    vmovss  dword ptr [rsi+2Ch], xmm0
  }
  drawDataDebug[v16].flags = _RDI->flags;
  drawDataDebug[v16].streamingInfo = *streamingInfo;
  drawDataDebug[v16].material = _RDI->material;
  drawDataDebug[v16].blendMapOverride = _RDI->blendMapOverride;
  if ( r_decalVolumesShowMaterialName->current.enabled && !r_decalVolumesShowMaterialLock->current.enabled && s_decalVolumesGrid.decalVolumeGridFrameData[v11].drawHits.hitCount < 8 )
  {
    __asm { vmovaps [rsp+98h+var_48], xmm6 }
    *(double *)&_XMM0 = RayObbIntersect(&context->cameraOrigin, context->cameraAxis.m, worldPos, worldAxis, &_RDI->halfSize);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
      vmovaps xmm6, xmm0
    }
    if ( !(v39 | v40) )
    {
      _RAX = R_DecalVolume_GetHighlightColor(&result, p_drawHits->hitCount);
      __asm
      {
        vmovups xmm1, xmmword ptr [rax]
        vmovups xmmword ptr [rsp+98h+result], xmm1
      }
      R_DecalVolumes_DrawDebugOBB(&_RDI->origin, &_RDI->axis, &_RDI->halfSize, &result);
      __asm { vmovups ymm0, ymmword ptr [rsi] }
      _RCX = (DecalVolumeStreamingInfo *)&p_drawHits->hits[p_drawHits->hitCount];
      __asm
      {
        vmovups ymmword ptr [rcx], ymm0
        vmovups xmm1, xmmword ptr [rsi+20h]
        vmovups xmmword ptr [rcx+20h], xmm1
      }
      _RCX[12] = *streamingInfo;
      __asm { vmovss  dword ptr [rcx+38h], xmm6 }
      _RCX[13] = (DecalVolumeStreamingInfo)(unsigned __int16)v12;
      _RCX[15].neededSize = _RDI->flags;
      *(_QWORD *)&_RCX[16].neededSize = _RDI->material;
      *(_QWORD *)&_RCX[18].neededSize = _RDI->blendMapOverride;
      *(_QWORD *)&_RCX[20].neededSize = markVfxName;
      ++p_drawHits->hitCount;
    }
    __asm { vmovaps xmm6, [rsp+98h+var_48] }
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
  unsigned __int8 v77; 
  double v102; 
  double v103; 
  double v104; 
  double v105; 
  double v106; 
  double v107; 
  double v108; 
  double v109; 
  double v110; 
  double v111; 
  double v112; 
  double v113; 
  double v114; 
  double v115; 
  vec2_t v116; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBP = worldOrigin;
  _RBX = dstDecalVolume;
  __asm { vmovaps xmmword ptr [r11-38h], xmm7 }
  decalVolumeMaterial = dvMaterial->decalVolumeMaterial;
  __asm { vmovaps xmmword ptr [r11-48h], xmm8 }
  if ( !decalVolumeMaterial )
    decalVolumeMaterial = rgp.defaultDecalVolumeMaterial->decalVolumeMaterial;
  _R14 = halfSize;
  dstDecalVolume->origin = *origin;
  dstDecalVolume->halfSize = *halfSize;
  __asm { vmovaps [rsp+0B8h+var_28], xmm6 }
  dstDecalVolume->axis = *axis;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmulss  xmm1, xmm0, dword ptr [rbx+10h]
    vmovss  xmm7, dword ptr [rbx+0Ch]
    vmovss  xmm8, dword ptr [rbx+18h]
    vmulss  xmm2, xmm8, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, dword ptr [rbx+14h]
    vmulss  xmm0, xmm2, dword ptr [rbx+20h]
    vaddss  xmm2, xmm3, xmm0
    vandps  xmm1, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3a83126f
    vmovss  xmm3, dword ptr [rbx+20h]
    vmovss  xmm4, dword ptr [rbx+1Ch]
    vmovss  xmm5, dword ptr [rbx+14h]
    vmovss  xmm6, dword ptr [rbx+10h]
    vcvtss2sd xmm0, xmm2, xmm2
    vmovsd  [rsp+0B8h+var_60], xmm0
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+0B8h+var_68], xmm3
    vcvtss2sd xmm4, xmm4, xmm4
    vmovsd  [rsp+0B8h+var_70], xmm4
    vcvtss2sd xmm1, xmm8, xmm8
    vmovsd  [rsp+0B8h+var_78], xmm1
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+0B8h+var_80], xmm5
    vcvtss2sd xmm2, xmm7, xmm7
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  [rsp+0B8h+var_88], xmm6
    vmovsd  [rsp+0B8h+var_90], xmm2
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1668, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( dstDecalVolume.axis[0], dstDecalVolume.axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v102, v104, v106, v108, v110, v112, v114) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, dword ptr [rbx+10h]
    vmovss  xmm7, dword ptr [rbx+24h]
    vmovss  xmm8, dword ptr [rbx+0Ch]
    vmulss  xmm2, xmm7, xmm8
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, dword ptr [rbx+2Ch]
    vmulss  xmm0, xmm2, dword ptr [rbx+14h]
    vaddss  xmm2, xmm3, xmm0
    vandps  xmm1, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3a83126f
    vmovss  xmm3, dword ptr [rbx+2Ch]
    vmovss  xmm4, dword ptr [rbx+28h]
    vmovss  xmm5, dword ptr [rbx+14h]
    vmovss  xmm6, dword ptr [rbx+10h]
    vcvtss2sd xmm0, xmm2, xmm2
    vmovsd  [rsp+0B8h+var_60], xmm0
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+0B8h+var_68], xmm3
    vcvtss2sd xmm4, xmm4, xmm4
    vmovsd  [rsp+0B8h+var_70], xmm4
    vcvtss2sd xmm1, xmm7, xmm7
    vmovsd  [rsp+0B8h+var_78], xmm1
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+0B8h+var_80], xmm5
    vcvtss2sd xmm2, xmm8, xmm8
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  [rsp+0B8h+var_88], xmm6
    vmovsd  [rsp+0B8h+var_90], xmm2
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1669, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( dstDecalVolume.axis[0], dstDecalVolume.axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v103, v105, v107, v109, v111, v113, v115) )
    __debugbreak();
  __asm
  {
    vmovaps xmm8, [rsp+0B8h+var_48]
    vmovaps xmm7, [rsp+0B8h+var_38]
    vmovaps xmm6, [rsp+0B8h+var_28]
  }
  _RBX->uvOffset = *uvOffset;
  _RAX = uvMatrix;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  xmm4, dword ptr [rax+0Ch]
    vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rax+8]
    vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
  }
  _RBX->uvMatrix.v[0] = uvMatrix->v[0];
  __asm
  {
    vmovss  dword ptr [rbx+48h], xmm2
    vmovss  dword ptr [rbx+4Ch], xmm3
    vmovss  dword ptr [rbx+50h], xmm4
  }
  v77 = type | (4 * skinned);
  *(_DWORD *)_RBX->color = *(_DWORD *)color;
  _RBX->material = decalVolumeMaterial;
  _RBX->flags = v77;
  if ( atlasIndex >= 0 )
  {
    _RBX->flags = v77 | 1;
    _RBX->atlasFrame = truncate_cast<unsigned short,int>(atlasIndex);
  }
  __asm
  {
    vmovss  xmm0, [rsp+0B8h+zFeather]
    vmovss  dword ptr [rbx+64h], xmm0
  }
  _RBX->uid = uid;
  _RBX->normalBlendModeOverride[0] = normalBlendModeOverride;
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+0]
    vsubss  xmm3, xmm1, dword ptr [rsi+64h]
    vmovss  xmm0, dword ptr [rbp+4]
    vsubss  xmm2, xmm0, dword ptr [rsi+68h]
    vmovss  xmm1, dword ptr [rbp+8]
    vsubss  xmm4, xmm1, dword ptr [rsi+6Ch]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm0, dword ptr [r14]
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm1
    vmaxss  xmm1, xmm0, dword ptr [r14+4]
    vsqrtss xmm5, xmm2, xmm2
    vmaxss  xmm2, xmm1, dword ptr [r14+8]
    vsubss  xmm3, xmm5, xmm2
    vxorps  xmm1, xmm1, xmm1; min
    vmaxss  xmm0, xmm3, xmm1
    vmulss  xmm2, xmm0, dword ptr [rsi+0F4h]
    vaddss  xmm0, xmm2, dword ptr [rsi+0F8h]; val
    vmovss  xmm2, cs:__real@3f800000; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rax]
    vmulss  xmm0, xmm0, dword ptr [rax+4]
    vmovss  dword ptr [rsp+0B8h+var_58+4], xmm0
    vmovss  dword ptr [rsp+0B8h+var_58], xmm1
  }
  _RBX->blendMapAdjust = v116;
  _RBX->blendMapOverride = blendMapOverride;
}

/*
==============
R_FillMarkDecalVolumeInternal
==============
*/
void R_FillMarkDecalVolumeInternal(DecalVolumeIntermediate *dstDecalVolume, const AddToGridContext *context, const vec3_t *worldOrigin, const vec3_t *origin, const vec3_t *halfSize, const tmat33_t<vec3_t> *axis, const unsigned __int8 *color, Material *dvMaterial, int atlasIndex, float zFeatherRcp, bool skinned)
{
  GfxDecalVolumeMaterial *decalVolumeMaterial; 
  double v96; 
  double v97; 
  double v98; 
  double v99; 
  double v100; 
  double v101; 
  double v102; 
  double v103; 
  double v104; 
  double v105; 
  double v106; 
  double v107; 
  double v108; 
  double v109; 
  vec2_t v110; 
  char v111; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RBP = worldOrigin;
  _RBX = dstDecalVolume;
  decalVolumeMaterial = dvMaterial->decalVolumeMaterial;
  if ( !decalVolumeMaterial )
    decalVolumeMaterial = rgp.defaultDecalVolumeMaterial->decalVolumeMaterial;
  __asm { vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000 }
  _R14 = halfSize;
  dstDecalVolume->origin = *origin;
  dstDecalVolume->halfSize = *halfSize;
  _RCX = axis;
  *(_OWORD *)_RBX->axis.m[0].v = *(_OWORD *)axis->m[0].v;
  *(_QWORD *)&_RBX->axis.row1.y = *(_QWORD *)&axis->row1.y;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+18h]
    vxorps  xmm0, xmm0, xmm2
    vmovss  dword ptr [rbx+24h], xmm0
    vmovss  xmm1, dword ptr [rcx+1Ch]
    vxorps  xmm0, xmm1, xmm2
    vmovss  dword ptr [rbx+28h], xmm0
    vmovss  xmm1, dword ptr [rcx+20h]
    vxorps  xmm0, xmm1, xmm2
    vmovss  dword ptr [rbx+2Ch], xmm0
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmulss  xmm2, xmm0, dword ptr [rbx+10h]
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  xmm7, dword ptr [rbx+0Ch]
    vmovss  xmm8, dword ptr [rbx+18h]
    vmulss  xmm1, xmm8, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm0, dword ptr [rbx+20h]
    vaddss  xmm0, xmm3, xmm2
    vandps  xmm1, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3a83126f
    vmovss  xmm3, dword ptr [rbx+20h]
    vmovss  xmm4, dword ptr [rbx+1Ch]
    vmovss  xmm5, dword ptr [rbx+14h]
    vmovss  xmm6, dword ptr [rbx+10h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+0B8h+var_60], xmm0
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+0B8h+var_68], xmm3
    vcvtss2sd xmm4, xmm4, xmm4
    vmovsd  [rsp+0B8h+var_70], xmm4
    vcvtss2sd xmm1, xmm8, xmm8
    vmovsd  [rsp+0B8h+var_78], xmm1
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+0B8h+var_80], xmm5
    vcvtss2sd xmm2, xmm7, xmm7
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  [rsp+0B8h+var_88], xmm6
    vmovsd  [rsp+0B8h+var_90], xmm2
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1620, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( dstDecalVolume.axis[0], dstDecalVolume.axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v96, v98, v100, v102, v104, v106, v108) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, dword ptr [rbx+10h]
    vmovss  xmm7, dword ptr [rbx+24h]
    vmovss  xmm8, dword ptr [rbx+0Ch]
    vmulss  xmm2, xmm7, xmm8
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, dword ptr [rbx+14h]
    vmulss  xmm0, xmm2, dword ptr [rbx+2Ch]
    vaddss  xmm2, xmm3, xmm0
    vandps  xmm1, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3a83126f
    vmovss  xmm3, dword ptr [rbx+2Ch]
    vmovss  xmm4, dword ptr [rbx+28h]
    vmovss  xmm5, dword ptr [rbx+14h]
    vmovss  xmm6, dword ptr [rbx+10h]
    vcvtss2sd xmm0, xmm2, xmm2
    vmovsd  [rsp+0B8h+var_60], xmm0
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+0B8h+var_68], xmm3
    vcvtss2sd xmm4, xmm4, xmm4
    vmovsd  [rsp+0B8h+var_70], xmm4
    vcvtss2sd xmm1, xmm7, xmm7
    vmovsd  [rsp+0B8h+var_78], xmm1
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+0B8h+var_80], xmm5
    vcvtss2sd xmm2, xmm8, xmm8
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  [rsp+0B8h+var_88], xmm6
    vmovsd  [rsp+0B8h+var_90], xmm2
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_model.cpp", 1621, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( dstDecalVolume.axis[0], dstDecalVolume.axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v97, v99, v101, v103, v105, v107, v109) )
    __debugbreak();
  _RBX->uvOffset = 0i64;
  *(_QWORD *)_RBX->uvMatrix.v = 1065353216i64;
  _RBX->uvMatrix.v[2] = 0.0;
  _RBX->uvMatrix.v[3] = 1.0;
  *(_DWORD *)_RBX->color = *(_DWORD *)color;
  _RBX->material = decalVolumeMaterial;
  _RBX->flags = (4 * skinned) | 2;
  if ( atlasIndex >= 0 )
  {
    _RBX->flags = (4 * skinned) | 3;
    _RBX->atlasFrame = truncate_cast<unsigned short,int>(atlasIndex);
  }
  __asm
  {
    vmovss  xmm0, [rsp+0B8h+zFeatherRcp]
    vmovss  dword ptr [rbx+64h], xmm0
  }
  _RBX->uid = 0;
  _RBX->normalBlendModeOverride[0] = 2;
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+0]
    vsubss  xmm3, xmm1, dword ptr [rsi+64h]
    vmovss  xmm0, dword ptr [rbp+4]
    vsubss  xmm2, xmm0, dword ptr [rsi+68h]
    vmovss  xmm1, dword ptr [rbp+8]
    vsubss  xmm4, xmm1, dword ptr [rsi+6Ch]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm0, dword ptr [r14+4]
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm1
    vmaxss  xmm1, xmm0, dword ptr [r14]
    vsqrtss xmm5, xmm2, xmm2
    vmaxss  xmm2, xmm1, dword ptr [r14+8]
    vsubss  xmm3, xmm5, xmm2
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm6, xmm6, xmm6
    vmaxss  xmm0, xmm3, xmm6
    vmulss  xmm1, xmm0, dword ptr [rsi+0F4h]
    vaddss  xmm0, xmm1, dword ptr [rsi+0F8h]; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+0B8h+var_58], xmm0
    vmovss  dword ptr [rsp+0B8h+var_58+4], xmm6
  }
  _RBX->blendMapAdjust = v110;
  _RBX->blendMapOverride = NULL;
  _R11 = &v111;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

