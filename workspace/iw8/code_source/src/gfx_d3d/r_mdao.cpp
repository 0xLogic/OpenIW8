/*
==============
R_MDAO_ResetVolumesProcessed
==============
*/

void __fastcall R_MDAO_ResetVolumesProcessed(GfxBrushModel *brushModel)
{
  ?R_MDAO_ResetVolumesProcessed@@YAXPEAUGfxBrushModel@@@Z(brushModel);
}

/*
==============
R_InitMDAOFrameData
==============
*/

void __fastcall R_InitMDAOFrameData(MDAOFrameData *frameData)
{
  ?R_InitMDAOFrameData@@YAXPEAUMDAOFrameData@@@Z(frameData);
}

/*
==============
R_MDAO_AddBrushOccluder
==============
*/

void __fastcall R_MDAO_AddBrushOccluder(const GfxViewInfo *viewInfo, const GfxBrushModel *brushModel, MdaoVolume *volume)
{
  ?R_MDAO_AddBrushOccluder@@YAXPEBUGfxViewInfo@@PEBUGfxBrushModel@@PEAUMdaoVolume@@@Z(viewInfo, brushModel, volume);
}

/*
==============
R_MDAO_SetupGlobalFrameData
==============
*/

void __fastcall R_MDAO_SetupGlobalFrameData(const GfxViewInfo *viewInfo, float cullDistance, float fadeDistance, float boneSizeThreshold)
{
  ?R_MDAO_SetupGlobalFrameData@@YAXPEBUGfxViewInfo@@MMM@Z(viewInfo, cullDistance, fadeDistance, boneSizeThreshold);
}

/*
==============
R_MDAO_AddDynModelEntityOccluders
==============
*/

void __fastcall R_MDAO_AddDynModelEntityOccluders(const GfxViewInfo *viewInfo, DynEntityPose *dynEntPose, const XModel *model)
{
  ?R_MDAO_AddDynModelEntityOccluders@@YAXPEBUGfxViewInfo@@PEAUDynEntityPose@@PEBUXModel@@@Z(viewInfo, dynEntPose, model);
}

/*
==============
R_MDAO_AddModelOccluders
==============
*/

void __fastcall R_MDAO_AddModelOccluders(const GfxViewInfo *viewInfo, GfxSceneModel *sceneModel)
{
  ?R_MDAO_AddModelOccluders@@YAXPEBUGfxViewInfo@@PEAUGfxSceneModel@@@Z(viewInfo, sceneModel);
}

/*
==============
R_MDAO_ResetVolumesProcessed
==============
*/

void __fastcall R_MDAO_ResetVolumesProcessed(GfxSceneModel *sceneModel)
{
  ?R_MDAO_ResetVolumesProcessed@@YAXPEAUGfxSceneModel@@@Z(sceneModel);
}

/*
==============
R_MDAO_AddEntityOccluders
==============
*/

void __fastcall R_MDAO_AddEntityOccluders(const GfxViewInfo *viewInfo, const GfxSceneEntity *sceneEnt)
{
  ?R_MDAO_AddEntityOccluders@@YAXPEBUGfxViewInfo@@PEBUGfxSceneEntity@@@Z(viewInfo, sceneEnt);
}

/*
==============
R_MDAO_AddVolumeOccluders
==============
*/

void __fastcall R_MDAO_AddVolumeOccluders(const GfxViewInfo *viewInfo, const DObj *obj, const cpose_t *pose, const GfxSceneEntity *sceneEnt, const XModel *model, int numBones, float fadeoutFactor)
{
  ?R_MDAO_AddVolumeOccluders@@YAXPEBUGfxViewInfo@@PEBUDObj@@PEBUcpose_t@@PEBUGfxSceneEntity@@PEBUXModel@@HM@Z(viewInfo, obj, pose, sceneEnt, model, numBones, fadeoutFactor);
}

/*
==============
R_MDAO_ToggleFrame
==============
*/

unsigned int __fastcall R_MDAO_ToggleFrame()
{
  return ?R_MDAO_ToggleFrame@@YAIXZ();
}

/*
==============
R_MDAO_ResetEntityOcclusionState
==============
*/

void __fastcall R_MDAO_ResetEntityOcclusionState(const cpose_t *pose)
{
  ?R_MDAO_ResetEntityOcclusionState@@YAXPEBUcpose_t@@@Z(pose);
}

/*
==============
R_MDAO_ResetVolumesProcessed
==============
*/

void __fastcall R_MDAO_ResetVolumesProcessed(DynEntityPose *dynEntPose)
{
  ?R_MDAO_ResetVolumesProcessed@@YAXPEAUDynEntityPose@@@Z(dynEntPose);
}

/*
==============
R_MDAO_AddDynBrushEntityOccluder
==============
*/

void __fastcall R_MDAO_AddDynBrushEntityOccluder(const GfxViewInfo *viewInfo, DynEntityPose *dynBrushPose, const GfxBrushModel *brushModel, MdaoVolume *volume)
{
  ?R_MDAO_AddDynBrushEntityOccluder@@YAXPEBUGfxViewInfo@@PEAUDynEntityPose@@PEBUGfxBrushModel@@PEAUMdaoVolume@@@Z(viewInfo, dynBrushPose, brushModel, volume);
}

/*
==============
R_InitMDAO
==============
*/

void R_InitMDAO(void)
{
  ?R_InitMDAO@@YAXXZ();
}

/*
==============
R_InitMDAO
==============
*/
void R_InitMDAO(void)
{
  unsigned int v0; 

  v0 = (signed int)(vidConfig.sceneWidth + 15) / 16 * ((signed int)(vidConfig.sceneHeight + 15) / 16);
  R_CreateGfxWrappedBuffer(&mdaoGlob.tileBoundingBoxes, GfxWrappedBuffer_Structured, 32, v0, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, NULL, "mdao: bboxes for tiles");
  R_CreateGfxWrappedBuffer(&mdaoGlob.cullingResults, GfxWrappedBuffer_Structured, 132, v0, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, NULL, "mdao occluder culling results");
  R_InitMDAOFrameData(mdaoGlob.frameData);
  R_InitMDAOFrameData(&mdaoGlob.frameData[1]);
}

/*
==============
R_InitMDAOFrameData
==============
*/
void R_InitMDAOFrameData(MDAOFrameData *frameData)
{
  frameData->occluderCount = 0;
  *(_QWORD *)frameData->fadeParams = 0i64;
  *(_QWORD *)&frameData->capsuleMdaoStrength = 1065353216i64;
  frameData->volumeMdaoStrength = 1.0;
  frameData->influenceRadiusScale = 1.0;
  frameData->fadeoutRadiusScale = 1.0;
  *(_QWORD *)&frameData->fadeDistance = 0i64;
  R_CreateGfxWrappedBuffer(&frameData->mdaoConstants, GfxWrappedBuffer_Const, 176, 1u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "mdao constant buffer");
  R_CreateGfxWrappedBuffer(&frameData->capsuleOccluders, GfxWrappedBuffer_Structured, 48, 0x400u, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "mdao occluders");
}

/*
==============
R_MDAO_AddBrushOccluder
==============
*/
void R_MDAO_AddBrushOccluder(const GfxViewInfo *viewInfo, const GfxBrushModel *brushModel, MdaoVolume *volume)
{
  volatile __int32 *p_mdaoVolumeProcessed; 
  float v7; 
  double v8; 
  GfxImage *volumeData; 
  float volumeFadeoutFactor[4]; 
  vec3_t v11; 
  tmat33_t<vec3_t> axis; 

  p_mdaoVolumeProcessed = &brushModel->writable.mdaoVolumeProcessed;
  if ( (((_BYTE)brushModel + 52) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &brushModel->writable.mdaoVolumeProcessed) )
    __debugbreak();
  if ( _InterlockedExchange(p_mdaoVolumeProcessed, -1) != -1 && R_MDAO_OccludersVisible(viewInfo, &brushModel->writable.origin, mdaoGlob.frameData[mdaoGlob.frame].cullDistance, volumeFadeoutFactor) )
  {
    v7 = volumeFadeoutFactor[0];
    if ( volumeFadeoutFactor[0] < 1.0 )
    {
      QuatToAxis(&brushModel->writable.quat, &axis);
      v8 = *(double *)brushModel->writable.origin.v;
      v11.v[2] = brushModel->writable.origin.v[2];
      volumeData = volume->volumeData;
      *(double *)v11.v = v8;
      R_MDAO_AddVolumeOccluder(viewInfo, &v11, &axis, &volume->bounds, volume->cellCount, v7, volumeData);
    }
  }
}

/*
==============
R_MDAO_AddCapsuleOccluder
==============
*/
void R_MDAO_AddCapsuleOccluder(MDAOFrameData *frameData, const GfxViewInfo *viewInfo, const GfxMatrix *viewMatrix, const DObj *obj, const cpose_t *pose, int boneIndex, XBoneInfo **boneInfoArray, const Bounds *collBounds)
{
  __int128 v8; 
  DObjAnimMat *RotTransArray; 
  XBoneInfo *v14; 
  const vec4_t *p_quat; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v21; 
  __int64 v26; 
  float v27; 
  float v28; 
  int v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float occluderLength; 
  vec4_t *i; 
  int v37; 
  const vec3_t *v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  __int64 occluderRadius; 
  vec3_t positionWs; 
  vec3_t end; 
  vec3_t start; 
  tmat33_t<vec3_t> axis; 
  Bounds bounds; 
  __int128 v52; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 155, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !boneInfoArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 156, ASSERT_TYPE_ASSERT, "(boneInfoArray)", (const char *)&queryFormat, "boneInfoArray") )
    __debugbreak();
  if ( boneIndex >= (unsigned int)obj->numBones )
  {
    LODWORD(occluderRadius) = boneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 158, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( obj->numBones )", "boneIndex doesn't index obj->numBones\n\t%i not in [0, %i)", occluderRadius, obj->numBones) )
      __debugbreak();
  }
  if ( !DObjSkelIsBoneUpToDate(obj, boneIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 159, ASSERT_TYPE_ASSERT, "(DObjSkelIsBoneUpToDate( obj, boneIndex ))", (const char *)&queryFormat, "DObjSkelIsBoneUpToDate( obj, boneIndex )") )
    __debugbreak();
  RotTransArray = DObjGetRotTransArray(obj);
  if ( RotTransArray )
  {
    v14 = boneInfoArray[boneIndex];
    p_quat = &RotTransArray[boneIndex].quat;
    QuatToAxis(p_quat, &axis);
    v16 = p_quat[1].v[0] + g_activeRefDef->viewOffset.v[0];
    positionWs.v[0] = v16;
    v17 = p_quat[1].v[1] + g_activeRefDef->viewOffset.v[1];
    positionWs.v[1] = v17;
    v18 = p_quat[1].v[2] + g_activeRefDef->viewOffset.v[2];
    positionWs.v[2] = v18;
    if ( v14->bounds.halfSize.v[0] == 0.0 && v14->bounds.halfSize.v[1] == 0.0 && v14->bounds.halfSize.v[2] == 0.0 )
      v14 = (XBoneInfo *)collBounds;
    if ( v14 )
    {
      v19 = v14->bounds.halfSize.v[1];
      _XMM5 = LODWORD(v14->bounds.halfSize.v[0]);
      v21 = v14->bounds.halfSize.v[2];
      if ( (float)((float)((float)(*(float *)&_XMM5 * v19) * v21) * 8.0) >= frameData->boneSizeThreshold )
      {
        __asm
        {
          vmaxss  xmm0, xmm5, xmm4
          vmaxss  xmm7, xmm0, xmm3
          vminss  xmm0, xmm5, xmm4
        }
        v52 = v8;
        __asm { vminss  xmm13, xmm0, xmm3 }
        if ( *(float *)&_XMM7 == v19 )
        {
          v26 = 1i64;
        }
        else
        {
          v26 = 0i64;
          if ( *(float *)&_XMM7 == v21 )
            v26 = 2i64;
        }
        v27 = v14->bounds.midPoint.v[1];
        v28 = v14->bounds.midPoint.v[2];
        v29 = 0;
        v30 = (float)((float)((float)(v14->bounds.midPoint.v[0] * axis.m[0].v[0]) + v16) + (float)(v27 * axis.m[1].v[0])) + (float)(v28 * axis.m[2].v[0]);
        v31 = (float)((float)((float)(v14->bounds.midPoint.v[0] * axis.m[0].v[1]) + v17) + (float)(v27 * axis.m[1].v[1])) + (float)(v28 * axis.m[2].v[1]);
        v32 = v28 * axis.m[2].v[2];
        v33 = *(float *)&_XMM13 * 0.89999998;
        v34 = (float)((float)((float)(v14->bounds.midPoint.v[0] * axis.m[0].v[2]) + v18) + (float)(v27 * axis.m[1].v[2])) + v32;
        occluderLength = *(float *)&_XMM7 / (float)(*(float *)&_XMM13 * 0.89999998);
        positionWs.v[2] = v34;
        positionWs.v[0] = v30;
        positionWs.v[1] = v31;
        for ( i = viewInfo->frustumPlanes; (float)((float)((float)((float)((float)(v31 * i->v[1]) + (float)(v30 * i->v[0])) + (float)(v34 * i->v[2])) + i->v[3]) + (float)((float)(occluderLength + r_mdaoBoneInfluenceRadiusScale->current.value) * (float)(*(float *)&_XMM13 * 0.89999998))) > 0.0; ++i )
        {
          if ( ++v29 >= 4 )
          {
            v37 = Sys_InterlockedIncrement(&frameData->occluderCount) - 1;
            if ( v37 >= 1024 )
            {
              R_WarnOncePerFrame(R_WARN_MDAO_OCCLUDER_LIMIT);
            }
            else
            {
              v38 = &axis.m[v26];
              R_MDAO_ConstructCapsuleOccluder(viewMatrix, frameData->influenceRadiusScale, frameData->fadeoutRadiusScale, &positionWs, v38, v33, occluderLength, frameData->fadeParams[0], frameData->fadeParams[1], frameData->capsuleMdaoStrength, (MDAOOccluder *)frameData->capsuleOccluders.data + v37);
              if ( r_mdaoDrawOccluders->current.enabled )
              {
                LODWORD(v39) = COERCE_UNSIGNED_INT(occluderLength * v33) ^ _xmm;
                v40 = v39 * v38->v[1];
                start.v[0] = (float)(v39 * v38->v[0]) + positionWs.v[0];
                v41 = v40 + positionWs.v[1];
                v42 = v39 * v38->v[2];
                start.v[1] = v41;
                v43 = (float)((float)(occluderLength * v33) * v38->v[0]) + positionWs.v[0];
                start.v[2] = v42 + positionWs.v[2];
                v44 = (float)((float)(occluderLength * v33) * v38->v[1]) + positionWs.v[1];
                end.v[0] = v43;
                end.v[2] = (float)((float)(occluderLength * v33) * v38->v[2]) + positionWs.v[2];
                end.v[1] = v44;
                CG_DebugLine(&start, &end, &colorRed, 0, 0);
                v45 = v14->bounds.halfSize.v[1];
                bounds.halfSize.v[0] = v14->bounds.halfSize.v[0];
                bounds.halfSize.v[2] = v14->bounds.halfSize.v[2];
                bounds.halfSize.v[1] = v45;
                bounds.midPoint.v[0] = 0.0;
                bounds.midPoint.v[1] = 0.0;
                bounds.midPoint.v[2] = 0.0;
                CG_DebugBoxOriented(&positionWs, &bounds, &axis, &colorRed, 1, 0);
              }
            }
            return;
          }
        }
      }
    }
  }
}

/*
==============
R_MDAO_AddDynBrushEntityOccluder
==============
*/
void R_MDAO_AddDynBrushEntityOccluder(const GfxViewInfo *viewInfo, DynEntityPose *dynBrushPose, const GfxBrushModel *brushModel, MdaoVolume *volume)
{
  volatile __int32 *p_mdaoVolumesProcessed; 
  float v8; 
  double v9; 
  GfxImage *volumeData; 
  float volumeFadeoutFactor[4]; 
  vec3_t v12; 
  tmat33_t<vec3_t> axis; 

  p_mdaoVolumesProcessed = &dynBrushPose->mdaoVolumesProcessed;
  if ( (((_BYTE)dynBrushPose + 108) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &dynBrushPose->mdaoVolumesProcessed) )
    __debugbreak();
  if ( _InterlockedExchange(p_mdaoVolumesProcessed, -1) != -1 && R_MDAO_OccludersVisible(viewInfo, &brushModel->writable.origin, mdaoGlob.frameData[mdaoGlob.frame].cullDistance, volumeFadeoutFactor) )
  {
    v8 = volumeFadeoutFactor[0];
    if ( volumeFadeoutFactor[0] < 1.0 )
    {
      QuatToAxis(&brushModel->writable.quat, &axis);
      v9 = *(double *)brushModel->writable.origin.v;
      v12.v[2] = brushModel->writable.origin.v[2];
      volumeData = volume->volumeData;
      *(double *)v12.v = v9;
      R_MDAO_AddVolumeOccluder(viewInfo, &v12, &axis, &volume->bounds, volume->cellCount, v8, volumeData);
    }
  }
}

/*
==============
R_MDAO_AddDynModelEntityOccluders
==============
*/
void R_MDAO_AddDynModelEntityOccluders(const GfxViewInfo *viewInfo, DynEntityPose *dynEntPose, const XModel *model)
{
  vec3_t *p_origin; 
  float v7; 
  unsigned __int16 mdaoVolumeCount; 
  __int64 v9; 
  __int64 v10; 
  double v11; 
  MdaoVolume *v12; 
  float volumeFadeoutFactor[4]; 
  vec3_t v14; 
  tmat33_t<vec3_t> axis; 

  if ( !dynEntPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 732, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 733, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( (((_BYTE)dynEntPose + 108) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &dynEntPose->mdaoVolumesProcessed) )
    __debugbreak();
  if ( _InterlockedExchange(&dynEntPose->mdaoVolumesProcessed, -1) != -1 )
  {
    p_origin = &dynEntPose->pose.origin;
    if ( R_MDAO_OccludersVisible(viewInfo, &dynEntPose->pose.origin, mdaoGlob.frameData[mdaoGlob.frame].cullDistance, volumeFadeoutFactor) )
    {
      v7 = volumeFadeoutFactor[0];
      if ( volumeFadeoutFactor[0] < 1.0 )
      {
        mdaoVolumeCount = model->mdaoVolumeCount;
        QuatToAxis(&dynEntPose->pose.quat, &axis);
        v9 = 0i64;
        if ( mdaoVolumeCount )
        {
          v10 = mdaoVolumeCount;
          do
          {
            v11 = *(double *)p_origin->v;
            v12 = &model->mdaoVolumes[v9];
            v14.v[2] = p_origin->v[2];
            *(double *)v14.v = v11;
            R_MDAO_AddVolumeOccluder(viewInfo, &v14, &axis, &v12->bounds, v12->cellCount, v7, v12->volumeData);
            ++v9;
            --v10;
          }
          while ( v10 );
        }
      }
    }
  }
}

/*
==============
R_MDAO_AddEntityOccluders
==============
*/
void R_MDAO_AddEntityOccluders(const GfxViewInfo *viewInfo, const GfxSceneEntity *sceneEnt)
{
  signed __int64 v2; 
  void *v3; 
  const DObj *obj; 
  MDAOFrameData *v7; 
  GfxSceneEntityInfo v8; 
  volatile __int32 *p_mdaoCullIn; 
  __int64 NumModels; 
  int v11; 
  int v12; 
  __int64 v13; 
  float v14; 
  const XModel *Model; 
  int numBones; 
  int v17; 
  MDAOType mdaoType; 
  int i; 
  int v20; 
  float volumeFadeoutFactor; 
  __int64 v22; 
  __int64 v23; 
  vec3_t outOrigin; 
  __int64 v25; 
  vec3_t dir; 
  GfxMatrix viewMatrix; 
  XBoneInfo *boneInfo[4094]; 

  v3 = alloca(v2);
  v25 = -2i64;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 583, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( !sceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 584, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
    __debugbreak();
  obj = sceneEnt->obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 586, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v7 = &mdaoGlob.frameData[mdaoGlob.frame];
  v8.pose = (const cpose_t *)sceneEnt->info;
  if ( !v8.pose->isMayhem )
  {
    p_mdaoCullIn = &v8.pose->mdaoCullIn;
    if ( ((unsigned __int8)p_mdaoCullIn & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_mdaoCullIn) )
      __debugbreak();
    if ( _InterlockedExchange(p_mdaoCullIn, 1) != 1 )
    {
      GfxSceneEntity_GetPlacementOrigin(sceneEnt, &outOrigin);
      if ( R_MDAO_OccludersVisible(viewInfo, &outOrigin, v7->cullDistance, &volumeFadeoutFactor) )
      {
        Sys_ProfBeginNamedEvent(0xFFD2691E, "R_MDAO_AddEntityOccluders");
        viewMatrix = viewInfo->viewParmsSet.frames[0].viewParms.viewMatrix;
        LODWORD(dir.v[0]) = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0]) ^ _xmm;
        LODWORD(dir.v[1]) = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1]) ^ _xmm;
        LODWORD(dir.v[2]) = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2]) ^ _xmm;
        MatrixTransformDir44(&dir, (const tmat44_t<vec4_t> *)viewInfo, &viewMatrix.m.m[3]);
        NumModels = DObjGetNumModels(obj);
        R_MDAO_CalcPose(obj, sceneEnt);
        v11 = 0;
        v12 = 0;
        v20 = 0;
        v23 = NumModels;
        if ( (int)NumModels > 0 )
        {
          v13 = 0i64;
          v22 = 0i64;
          v14 = volumeFadeoutFactor;
          do
          {
            Model = DObjGetModel(obj, v12);
            if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 628, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
            if ( sceneEnt->lods[v13] != 6 && Model->mdaoType )
            {
              numBones = XModelNumBones(Model);
              v17 = numBones;
              mdaoType = Model->mdaoType;
              if ( mdaoType == MDAO_TYPE_VOLUME )
              {
                R_MDAO_AddVolumeOccluders(viewInfo, obj, sceneEnt->info.pose, sceneEnt, Model, numBones, v14);
              }
              else if ( mdaoType && v7->capsuleMdaoStrength > 0.0 )
              {
                DObjGetBoneInfo(obj, boneInfo);
                for ( i = 0; i < v17; ++v11 )
                {
                  if ( R_MDAO_IsBoneValid(Model, i) && (*((char *)sceneEnt + 1388) >= 0 || !FX_Dismemberment_IsBoneDismembered((LocalClientNum_t)viewInfo->input.data->localClientNum, obj, i, 1)) )
                    R_MDAO_AddCapsuleOccluder(v7, viewInfo, &viewMatrix, obj, sceneEnt->info.pose, v11, boneInfo, NULL);
                  ++i;
                }
                v13 = v22;
              }
            }
            v12 = ++v20;
            v22 = ++v13;
          }
          while ( v13 < v23 );
        }
        Sys_ProfEndNamedEvent();
      }
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
  }
}

/*
==============
R_MDAO_AddModelOccluders
==============
*/
void R_MDAO_AddModelOccluders(const GfxViewInfo *viewInfo, GfxSceneModel *sceneModel)
{
  __int64 v4; 
  volatile __int32 *p_mdaoVolumesProcessed; 
  float v6; 
  __int64 v7; 
  MdaoVolume *v8; 
  double v9; 
  GfxImage *volumeData; 
  float volumeFadeoutFactor[4]; 
  vec3_t v12; 
  tmat33_t<vec3_t> axis; 

  LOWORD(v4) = sceneModel->model->mdaoVolumeCount;
  if ( (_WORD)v4 )
  {
    p_mdaoVolumesProcessed = &sceneModel->mdaoVolumesProcessed;
    if ( (((_BYTE)sceneModel - 112) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &sceneModel->mdaoVolumesProcessed) )
      __debugbreak();
    if ( _InterlockedExchange(p_mdaoVolumesProcessed, -1) != -1 && R_MDAO_OccludersVisible(viewInfo, &sceneModel->placement.base.origin, mdaoGlob.frameData[mdaoGlob.frame].cullDistance, volumeFadeoutFactor) )
    {
      v6 = volumeFadeoutFactor[0];
      if ( volumeFadeoutFactor[0] < 1.0 )
      {
        v7 = 0i64;
        v4 = (unsigned __int16)v4;
        do
        {
          v8 = &sceneModel->model->mdaoVolumes[v7];
          QuatToAxis(&sceneModel->placement.base.quat, &axis);
          v9 = *(double *)sceneModel->placement.base.origin.v;
          v12.v[2] = sceneModel->placement.base.origin.v[2];
          volumeData = v8->volumeData;
          *(double *)v12.v = v9;
          R_MDAO_AddVolumeOccluder(viewInfo, &v12, &axis, &v8->bounds, v8->cellCount, v6, volumeData);
          ++v7;
          --v4;
        }
        while ( v4 );
      }
    }
  }
}

/*
==============
R_MDAO_AddVolumeOccluder
==============
*/
void R_MDAO_AddVolumeOccluder(const GfxViewInfo *viewInfo, const vec3_t *positionWs, const tmat33_t<vec3_t> *rotationWs, const ExtentBounds *bounds, const unsigned __int16 *cellCount, float fadeoutFactor, GfxImage *volumeData)
{
  MDAOFrameData *v9; 
  volatile signed __int32 *p_volumeOccluderCount; 
  int v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  float v17; 
  float v19; 
  float v20; 
  __int64 v21; 
  float v22; 
  __int128 v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  __m256i v35; 
  unsigned __int16 v36; 
  Bounds boundsa; 
  Bounds v42; 
  vec3_t in1; 
  vec3_t v44; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> mat; 
  tmat44_t<vec4_t> v47; 

  v9 = &mdaoGlob.frameData[mdaoGlob.frame];
  p_volumeOccluderCount = &v9->volumeOccluderCount;
  if ( (((_BYTE)v9 + 40) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v9->volumeOccluderCount) )
    __debugbreak();
  v13 = _InterlockedExchangeAdd(p_volumeOccluderCount, 1u);
  if ( v13 >= 128 )
  {
    *p_volumeOccluderCount = 128;
  }
  else
  {
    v14 = LODWORD(bounds->maxs.v[0]);
    v15 = v14;
    v16 = LODWORD(bounds->maxs.v[1]);
    v17 = bounds->maxs.v[2];
    *(float *)&v15 = (float)(*(float *)&v14 + bounds->mins.v[0]) * 0.5;
    _XMM9 = v15;
    v19 = (float)(*(float *)&v16 + bounds->mins.v[1]) * 0.5;
    in1.v[2] = (float)(v17 + bounds->mins.v[2]) * 0.5;
    v20 = v17 - in1.v[2];
    in1.v[0] = *(float *)&v15;
    in1.v[1] = v19;
    v21 = v13;
    v22 = *(float *)&v14 - *(float *)&v15;
    v24 = v16;
    *(float *)&v24 = *(float *)&v16 - v19;
    _XMM11 = v24;
    MatrixIdentity44(&out);
    MatrixTransformVector(&in1, rotationWs, &v44);
    v25 = v44.v[1] + positionWs->v[1];
    v26 = rotationWs->m[0].v[2];
    v27 = rotationWs->m[1].v[0];
    v28 = rotationWs->m[1].v[1];
    v29 = rotationWs->m[1].v[2];
    *(float *)&v16 = rotationWs->m[2].v[1];
    v30 = rotationWs->m[2].v[2];
    out.m[3].v[0] = (float)(v44.v[0] + positionWs->v[0]) - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
    v31 = v25 - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
    v32 = v44.v[2] + positionWs->v[2];
    *(__m256i *)mat.m[0].v = *(__m256i *)out.m[0].v;
    mat.m[0].v[0] = rotationWs->m[0].v[0];
    out.m[3].v[1] = v31;
    v33 = v32 - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
    out.m[0].v[0] = v22 * mat.m[0].v[0];
    out.m[3].v[2] = v33;
    v34 = rotationWs->m[2].v[0];
    *(__m256i *)mat.row2.v = *(__m256i *)out.row2.v;
    mat.m[0].v[1] = rotationWs->m[0].v[1];
    out.m[0].v[1] = mat.m[0].v[1] * v22;
    out.m[0].v[2] = v26 * v22;
    out.m[1].v[0] = v27 * *(float *)&v24;
    out.m[1].v[1] = v28 * *(float *)&v24;
    out.m[1].v[2] = v29 * *(float *)&v24;
    mat.m[0].v[2] = v26;
    mat.m[1].v[0] = v27;
    mat.m[1].v[1] = v28;
    mat.m[1].v[2] = v29;
    mat.m[2].v[0] = v34;
    mat.m[2].v[1] = *(float *)&v16;
    mat.m[2].v[2] = v30;
    out.m[2].v[0] = v34 * v20;
    out.m[2].v[1] = *(float *)&v16 * v20;
    out.m[2].v[2] = v30 * v20;
    MatrixMultiply44(&out, (const tmat44_t<vec4_t> *)viewInfo, &v47);
    MatrixInverse44(&mat, &v9->volumeOccluders[v21].worldToOccluderFrame.m);
    MatrixInverse44(&v47, &v9->volumeOccluders[v21].viewToOccluder.m);
    v35 = *(__m256i *)out.row2.v;
    *(__m256i *)v9->volumeOccluders[v21].worldMatrix.m.m[0].v = *(__m256i *)out.m[0].v;
    *(__m256i *)v9->volumeOccluders[v21].worldMatrix.m.row2.v = v35;
    v36 = cellCount[2];
    if ( v36 > cellCount[1] )
      v36 = cellCount[1];
    if ( v36 > *cellCount )
      v36 = *cellCount;
    v9->volumeOccluders[v21].fadeoutFactor = fadeoutFactor;
    v9->volumeOccluders[v21].volumeData = volumeData;
    v9->volumeOccluders[v21].shiftDistance = 1.0 / (float)v36;
    if ( r_mdaoDrawOccluders->current.enabled )
    {
      __asm
      {
        vunpcklps xmm0, xmm11, xmm12
        vinsertps xmm9, xmm9, xmm13, 10h
        vinsertps xmm9, xmm9, xmm14, 20h ; ' '
        vinsertps xmm9, xmm9, xmm10, 30h ; '0'
      }
      *(_OWORD *)boundsa.midPoint.v = _XMM9;
      boundsa.halfSize.v[0] = 0.0;
      *(_OWORD *)v42.midPoint.v = _XMM9;
      *(double *)&v42.halfSize.y = *(double *)&_XMM0;
      *(double *)&boundsa.halfSize.y = *(double *)&_XMM0;
      CG_DebugBoxOriented(positionWs, &boundsa, rotationWs, &colorRed, 0, 0);
      boundsa = v42;
      boundsa.halfSize.v[1] = 0.0;
      CG_DebugBoxOriented(positionWs, &boundsa, rotationWs, &colorGreen, 0, 0);
      boundsa = v42;
      boundsa.halfSize.v[2] = 0.0;
      CG_DebugBoxOriented(positionWs, &boundsa, rotationWs, &colorBlue, 0, 0);
      CG_DebugBoxOriented(positionWs, &v42, rotationWs, &colorOrange, 0, 0);
    }
  }
}

/*
==============
R_MDAO_AddVolumeOccluders
==============
*/
void R_MDAO_AddVolumeOccluders(const GfxViewInfo *viewInfo, const DObj *obj, const cpose_t *pose, const GfxSceneEntity *sceneEnt, const XModel *model, int numBones, float fadeoutFactor)
{
  __int64 v9; 
  __int64 v10; 
  unsigned __int16 parentBoneIndex; 
  __int64 v12; 
  float v13; 
  const GfxViewInfo *v14; 
  __int64 v15; 
  MdaoVolume *v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  unsigned __int16 v33; 
  __int128 v35; 
  float v37; 
  int v38; 
  float *v; 
  float v40; 
  float v41; 
  float v42; 
  __int64 v43; 
  double v45; 
  float v46; 
  vec3_t outOrigin; 
  const XModel *v48; 
  cpose_t *posea; 
  vec3_t v50; 
  __int64 v51; 
  vec3_t v52; 
  tmat33_t<vec3_t> v53; 
  vec3_t v54; 
  vec4_t quat; 
  vec4_t out; 
  vec4_t v57; 
  tmat33_t<vec3_t> axis; 
  DObjAnimMat outMat; 
  tmat33_t<vec3_t> outTagMat; 

  v51 = -2i64;
  posea = (cpose_t *)pose;
  v48 = model;
  LOWORD(v9) = model->mdaoVolumeCount;
  if ( (_WORD)v9 && fadeoutFactor < 1.0 )
  {
    GfxSceneEntity_GetPlacementOrigin(sceneEnt, &outOrigin);
    if ( !sceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene_api.h", 553, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
      __debugbreak();
    quat = sceneEnt->placement.placement.quat;
    QuatToAxis(&quat, &axis);
    v10 = 0i64;
    v43 = (unsigned __int16)v9;
    v9 = (unsigned __int16)v9;
    do
    {
      parentBoneIndex = model->mdaoVolumes[v10].parentBoneIndex;
      if ( (unsigned __int16)(parentBoneIndex - 254) > 1u && !DObjSkelIsBoneUpToDate(obj, parentBoneIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 464, ASSERT_TYPE_ASSERT, "(DObjSkelIsBoneUpToDate( obj, currVolume->parentBoneIndex ))", (const char *)&queryFormat, "DObjSkelIsBoneUpToDate( obj, currVolume->parentBoneIndex )") )
        __debugbreak();
      ++v10;
      --v9;
    }
    while ( v9 );
    v12 = 0i64;
    v13 = FLOAT_0_5;
    v14 = viewInfo;
    v15 = v43;
    while ( 1 )
    {
      v16 = &v48->mdaoVolumes[v12];
      v17 = v16->bounds.maxs.v[0];
      v46 = (float)(v17 + v16->bounds.mins.v[0]) * v13;
      v18 = v16->bounds.maxs.v[1];
      v19 = (float)(v18 + v16->bounds.mins.v[1]) * v13;
      v40 = v19;
      v20 = v16->bounds.maxs.v[2];
      v21 = (float)(v20 + v16->bounds.mins.v[2]) * v13;
      v42 = v21;
      v22 = fsqrt((float)((float)((float)(v18 - v40) * (float)(v18 - v40)) + (float)((float)(v17 - v46) * (float)(v17 - v46))) + (float)((float)(v20 - v21) * (float)(v20 - v21)));
      v23 = axis.m[0].v[0];
      v53 = axis;
      v24 = axis.m[0].v[1];
      v25 = axis.m[0].v[2];
      v26 = axis.m[1].v[0];
      v27 = axis.m[1].v[1];
      v28 = axis.m[1].v[2];
      v29 = axis.m[2].v[0];
      v30 = axis.m[2].v[1];
      v31 = axis.m[2].v[2];
      v45 = *(double *)outOrigin.v;
      v52 = outOrigin;
      v32 = outOrigin.v[2];
      v41 = outOrigin.v[2];
      v33 = v16->parentBoneIndex;
      if ( (unsigned __int16)(v33 - 254) <= 1u )
        goto LABEL_22;
      if ( *((char *)sceneEnt + 1388) >= 0 || !FX_Dismemberment_IsBoneDismembered((LocalClientNum_t)v14->input.data->localClientNum, obj, v33, 1) )
        break;
      v15 = v43;
LABEL_26:
      ++v12;
      v43 = --v15;
      v13 = FLOAT_0_5;
      if ( !v15 )
      {
        memset(&outOrigin, 0, sizeof(outOrigin));
        return;
      }
    }
    if ( DObjGetRotTransArray(obj) )
    {
      CG_DObjGetWorldBoneMatrix(posea, obj, v33, &outTagMat, &v54);
      AxisToQuat(&outTagMat, &out);
      DObjGetBasePoseMatrix(obj, v33, &outMat);
      v57.v[0] = (float)((float)((float)(COERCE_FLOAT(LODWORD(outMat.quat.v[0]) ^ _xmm) * out.v[3]) + (float)(out.v[0] * outMat.quat.v[3])) + (float)(COERCE_FLOAT(LODWORD(outMat.quat.v[2]) ^ _xmm) * out.v[1])) - (float)(COERCE_FLOAT(LODWORD(outMat.quat.v[1]) ^ _xmm) * out.v[2]);
      v57.v[1] = (float)((float)((float)(COERCE_FLOAT(LODWORD(outMat.quat.v[1]) ^ _xmm) * out.v[3]) - (float)(COERCE_FLOAT(LODWORD(outMat.quat.v[2]) ^ _xmm) * out.v[0])) + (float)(out.v[1] * outMat.quat.v[3])) + (float)(COERCE_FLOAT(LODWORD(outMat.quat.v[0]) ^ _xmm) * out.v[2]);
      v57.v[2] = (float)((float)((float)(COERCE_FLOAT(LODWORD(outMat.quat.v[1]) ^ _xmm) * out.v[0]) + (float)(COERCE_FLOAT(LODWORD(outMat.quat.v[2]) ^ _xmm) * out.v[3])) - (float)(COERCE_FLOAT(LODWORD(outMat.quat.v[0]) ^ _xmm) * out.v[1])) + (float)(out.v[2] * outMat.quat.v[3]);
      v57.v[3] = (float)((float)((float)(out.v[3] * outMat.quat.v[3]) - (float)(COERCE_FLOAT(LODWORD(outMat.quat.v[0]) ^ _xmm) * out.v[0])) - (float)(COERCE_FLOAT(LODWORD(outMat.quat.v[1]) ^ _xmm) * out.v[1])) - (float)(COERCE_FLOAT(LODWORD(outMat.quat.v[2]) ^ _xmm) * out.v[2]);
      QuatToAxis(&v57, &v53);
      v26 = v53.m[1].v[0];
      v23 = v53.m[0].v[0];
      v27 = v53.m[1].v[1];
      v24 = v53.m[0].v[1];
      v28 = v53.m[1].v[2];
      v25 = v53.m[0].v[2];
      v31 = v53.m[2].v[2];
      v52.v[2] = v54.v[2] - (float)((float)((float)(outMat.trans.v[1] * v53.m[1].v[2]) + (float)(outMat.trans.v[0] * v53.m[0].v[2])) + (float)(v53.m[2].v[2] * outMat.trans.v[2]));
      v32 = v52.v[2];
      v35 = *(unsigned __int64 *)v52.v;
      *(float *)&v35 = v54.v[0] - (float)((float)((float)(outMat.trans.v[1] * v53.m[1].v[0]) + (float)(outMat.trans.v[0] * v53.m[0].v[0])) + (float)(v53.m[2].v[0] * outMat.trans.v[2]));
      _XMM0 = v35;
      __asm { vinsertps xmm1, xmm0, xmm5, 10h }
      *(double *)v52.v = *(double *)&_XMM1;
      v45 = *(double *)&_XMM1;
      v29 = v53.m[2].v[0];
      v30 = v53.m[2].v[1];
    }
    else
    {
      v31 = v53.m[2].v[2];
      v30 = v53.m[2].v[1];
      v29 = v53.m[2].v[0];
      v28 = v53.m[1].v[2];
      v27 = v53.m[1].v[1];
      v26 = v53.m[1].v[0];
      v25 = v53.m[0].v[2];
      v24 = v53.m[0].v[1];
      v23 = v53.m[0].v[0];
      v32 = v41;
    }
    v15 = v43;
    v19 = v40;
LABEL_22:
    v37 = (float)((float)((float)(v19 * v26) + (float)(v23 * v46)) + (float)(v21 * v29)) + v52.v[0];
    v38 = 0;
    v = v14->frustumPlanes[0].v;
    while ( (float)((float)((float)((float)((float)((float)((float)((float)((float)(v19 * v27) + (float)(v24 * v46)) + (float)(v30 * v42)) + v52.v[1]) * v[1]) + (float)(v37 * *v)) + (float)((float)((float)((float)((float)(v28 * v40) + (float)(v25 * v46)) + (float)(v31 * v42)) + v52.v[2]) * v[2])) + v[3]) + v22) > 0.0 )
    {
      ++v38;
      v += 4;
      if ( v38 >= 4 )
      {
        *(double *)v50.v = v45;
        v50.v[2] = v32;
        R_MDAO_AddVolumeOccluder(v14, &v50, &v53, &v16->bounds, v16->cellCount, fadeoutFactor, v16->volumeData);
        goto LABEL_26;
      }
    }
    goto LABEL_26;
  }
}

/*
==============
R_MDAO_CalcPose
==============
*/
void R_MDAO_CalcPose(const DObj *obj, const GfxSceneEntity *sceneEnt)
{
  unsigned int v3; 
  const GfxSceneEntity *v4; 
  const DObj *v5; 
  DObjPartBits *p_partBits; 
  unsigned int v8; 
  __int64 NumModels; 
  int v10; 
  int v11; 
  __int64 v12; 
  const XModel *Model; 
  MDAOType mdaoType; 
  unsigned __int16 mdaoVolumeCount; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int16 parentBoneIndex; 
  unsigned __int64 v19; 
  int numBones; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  __int64 v27; 
  __int64 v29; 
  DObjPartBits partBits; 
  __int128 v31; 

  v3 = 0;
  v31 = _XMM6;
  v4 = sceneEnt;
  v5 = obj;
  p_partBits = &partBits;
  __asm { vpxor   xmm6, xmm6, xmm6 }
  do
  {
    *(_OWORD *)p_partBits->array = _XMM6;
    p_partBits = (DObjPartBits *)((char *)p_partBits + 16);
    ++v3;
  }
  while ( v3 < 2 );
  v8 = 0;
  NumModels = DObjGetNumModels(obj);
  if ( !CG_Pose_IsHierarchyFlattened(v4->info.pose) )
  {
    v10 = 0;
    v25 = 0;
    v29 = NumModels;
    if ( (int)NumModels > 0 )
    {
      v11 = 0;
      v12 = 0i64;
      v27 = 0i64;
      while ( 1 )
      {
        Model = DObjGetModel(v5, v10);
        if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 311, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        if ( v4->lods[v12] == 6 )
          goto LABEL_33;
        mdaoType = Model->mdaoType;
        if ( mdaoType == MDAO_TYPE_NONE )
          goto LABEL_33;
        if ( mdaoType != MDAO_TYPE_VOLUME )
          break;
        mdaoVolumeCount = Model->mdaoVolumeCount;
        if ( mdaoVolumeCount )
        {
          v16 = 0i64;
          v17 = mdaoVolumeCount;
          do
          {
            parentBoneIndex = Model->mdaoVolumes[v16].parentBoneIndex;
            if ( (unsigned __int16)(parentBoneIndex - 254) > 1u )
            {
              v19 = parentBoneIndex;
              if ( parentBoneIndex >= 0x100u )
              {
                LODWORD(v24) = 256;
                LODWORD(v23) = parentBoneIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v23, v24) )
                  __debugbreak();
              }
              partBits.array[v19 >> 5] |= 0x80000000 >> (v19 & 0x1F);
            }
            ++v16;
            --v17;
          }
          while ( v17 );
          v5 = obj;
          goto LABEL_31;
        }
LABEL_33:
        ++v10;
        ++v12;
        v25 = v10;
        v27 = v12;
        if ( v12 >= v29 )
          goto LABEL_34;
      }
      numBones = Model->numBones;
      if ( Model->numBones )
      {
        do
        {
          if ( R_MDAO_IsBoneValid(Model, v11) )
          {
            if ( v8 >= v5->numBones )
            {
              LODWORD(v22) = v5->numBones;
              LODWORD(v21) = v8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 345, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( obj->numBones )", "boneIndex doesn't index obj->numBones\n\t%i not in [0, %i)", v21, v22) )
                __debugbreak();
            }
            if ( v8 >= 0x100 )
            {
              LODWORD(v24) = 256;
              LODWORD(v23) = v8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v23, v24) )
                __debugbreak();
            }
            partBits.array[(unsigned __int64)v8 >> 5] |= 0x80000000 >> (v8 & 0x1F);
          }
          ++v11;
          ++v8;
        }
        while ( v11 < numBones );
LABEL_31:
        v10 = v25;
        v12 = v27;
      }
      v4 = sceneEnt;
      v11 = 0;
      goto LABEL_33;
    }
  }
LABEL_34:
  CG_LocationTraceDobjCalcPose(v5, v4->info.pose, &partBits);
}

/*
==============
R_MDAO_ConstructCapsuleOccluder
==============
*/
void R_MDAO_ConstructCapsuleOccluder(const GfxMatrix *viewMatrix, const float influenceRadiusScale, const float fadeoutRadiusScale, const vec3_t *positionWs, const vec3_t *axisWs, float occluderRadius, float occluderLength, float dFadeScale, float dFadeBias, float strength, MDAOOccluder *occluder)
{
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  vec3_t out; 

  if ( !viewMatrix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 122, ASSERT_TYPE_ASSERT, "(viewMatrix)", (const char *)&queryFormat, "viewMatrix") )
    __debugbreak();
  if ( !occluder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 123, ASSERT_TYPE_ASSERT, "(occluder)", (const char *)&queryFormat, "occluder") )
    __debugbreak();
  if ( occluderLength == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 124, ASSERT_TYPE_ASSERT, "(occluderLength)", (const char *)&queryFormat, "occluderLength") )
    __debugbreak();
  if ( positionWs == &out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1093, ASSERT_TYPE_ASSERT, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v13 = positionWs->v[1];
  v14 = positionWs->v[2];
  v15 = (float)((float)((float)(v13 * viewMatrix->m.m[1].v[0]) + (float)(positionWs->v[0] * viewMatrix->m.m[0].v[0])) + (float)(v14 * viewMatrix->m.m[2].v[0])) + viewMatrix->m.m[3].v[0];
  v16 = (float)((float)((float)(positionWs->v[0] * viewMatrix->m.m[0].v[1]) + (float)(v13 * viewMatrix->m.m[1].v[1])) + (float)(v14 * viewMatrix->m.m[2].v[1])) + viewMatrix->m.m[3].v[1];
  v17 = (float)((float)((float)(positionWs->v[0] * viewMatrix->m.m[0].v[2]) + (float)(v13 * viewMatrix->m.m[1].v[2])) + (float)(v14 * viewMatrix->m.m[2].v[2])) + viewMatrix->m.m[3].v[2];
  MatrixTransformDir44(axisWs, &viewMatrix->m, &out);
  v18 = LODWORD(out.v[0]);
  *(float *)&v18 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(out.v[1] * out.v[1])) + (float)(out.v[2] * out.v[2]));
  _XMM3 = v18;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm12, xmm0
  }
  v22 = out.v[0] * (float)(1.0 / *(float *)&_XMM0);
  v23 = out.v[2] * (float)(1.0 / *(float *)&_XMM0);
  v24 = out.v[1] * (float)(1.0 / *(float *)&_XMM0);
  v25 = (float)(influenceRadiusScale + occluderLength) * occluderRadius;
  *(double *)&_XMM0 = I_fclamp((float)(fsqrt((float)((float)(v15 * v15) + (float)(v16 * v16)) + (float)(v17 * v17)) * dFadeScale) + dFadeBias, 0.0, 1.0);
  occluder->positionRadius.v[0] = v15;
  occluder->positionRadius.v[1] = v16;
  occluder->positionRadius.v[2] = v17;
  occluder->positionRadius.v[3] = occluderRadius;
  occluder->axisLength.v[3] = occluderLength;
  occluder->axisLength.v[0] = v22;
  occluder->axisLength.v[1] = v24;
  occluder->axisLength.v[2] = v23;
  occluder->fadeoutParams.v[1] = 1.0 / (float)(v25 - (float)(v25 * fadeoutRadiusScale));
  occluder->fadeoutParams.v[0] = v25 * fadeoutRadiusScale;
  occluder->fadeoutParams.v[2] = *(float *)&_XMM0 * strength;
  occluder->fadeoutParams.v[3] = 0.0;
}

/*
==============
R_MDAO_IsBoneValid
==============
*/
char R_MDAO_IsBoneValid(const XModel *model, const int boneIndex)
{
  unsigned __int8 v3; 
  MDAOType mdaoType; 

  v3 = model->partClassification[boneIndex];
  if ( v3 >= 0x16u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 292, ASSERT_TYPE_ASSERT, "(unsigned)( modelBonePartClassification ) < (unsigned)( HITLOC_NUM )", "modelBonePartClassification doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v3, 22) )
    __debugbreak();
  mdaoType = model->mdaoType;
  if ( mdaoType == MDAO_TYPE_HITBOX_SKELETON )
  {
    if ( v3 )
      return 1;
  }
  else if ( mdaoType == MDAO_TYPE_BASE_SKELETON )
  {
    return 1;
  }
  return 0;
}

/*
==============
R_MDAO_OccludersVisible
==============
*/
bool R_MDAO_OccludersVisible(const GfxViewInfo *viewInfo, const vec3_t *position, float cullDistance, float *volumeFadeoutFactor)
{
  float v4; 
  float v5; 
  float v7; 
  bool result; 
  __int64 frame; 
  double v10; 

  v4 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1] - position->v[1];
  v5 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2] - position->v[2];
  v7 = (float)((float)(v4 * v4) + (float)((float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0] - position->v[0]) * (float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0] - position->v[0]))) + (float)(v5 * v5);
  if ( v7 > (float)(cullDistance * cullDistance) )
    return 0;
  frame = mdaoGlob.frame;
  v10 = I_fclamp((float)(mdaoGlob.frameData[frame].fadeDistance - fsqrt(v7)) * mdaoGlob.frameData[frame].fadeParams[0], 0.0, 1.0);
  result = 1;
  *volumeFadeoutFactor = 1.0 - (float)((float)(1.0 - *(float *)&v10) * mdaoGlob.frameData[frame].volumeMdaoStrength);
  return result;
}

/*
==============
R_MDAO_ResetEntityOcclusionState
==============
*/
void R_MDAO_ResetEntityOcclusionState(const cpose_t *pose)
{
  pose->mdaoCullIn = 0;
}

/*
==============
R_MDAO_ResetVolumesProcessed
==============
*/
void R_MDAO_ResetVolumesProcessed(DynEntityPose *dynEntPose)
{
  dynEntPose->mdaoVolumesProcessed = 0;
}

/*
==============
R_MDAO_ResetVolumesProcessed
==============
*/
void R_MDAO_ResetVolumesProcessed(GfxBrushModel *brushModel)
{
  brushModel->writable.mdaoVolumeProcessed = 0;
}

/*
==============
R_MDAO_ResetVolumesProcessed
==============
*/
void R_MDAO_ResetVolumesProcessed(GfxSceneModel *sceneModel)
{
  sceneModel->mdaoVolumesProcessed = 0;
}

/*
==============
R_MDAO_SetupGlobalFrameData
==============
*/

void __fastcall R_MDAO_SetupGlobalFrameData(const GfxViewInfo *viewInfo, double cullDistance, float fadeDistance, float boneSizeThreshold)
{
  __int64 frame; 
  float v6; 
  float value; 
  __int128 unsignedInt; 
  const dvar_t *v9; 
  __int128 v11; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  const dvar_t *v16; 
  GfxBackEndData *v17; 

  frame = mdaoGlob.frame;
  v6 = boneSizeThreshold;
  value = fadeDistance;
  unsignedInt = *(_OWORD *)&cullDistance;
  if ( fadeDistance == 0.0 )
    value = r_mdaoOccluderFadeOutStartDistance->current.value;
  if ( *(float *)&cullDistance == 0.0 )
    unsignedInt = r_mdaoOccluderCullDistance->current.unsignedInt;
  if ( boneSizeThreshold == 0.0 )
    v6 = r_mdaoMinBoneBoundsToOcclude->current.value;
  v9 = r_mdaoCapsuleStrength;
  v11 = unsignedInt;
  *(float *)&v11 = *(float *)&unsignedInt - value;
  _XMM0 = v11;
  __asm { vmaxss  xmm2, xmm0, cs:__real@3a83126f }
  mdaoGlob.frameData[frame].fadeParams[0] = -1.0 / *(float *)&_XMM2;
  mdaoGlob.frameData[frame].fadeParams[1] = 1.0 - (float)((float)(-1.0 / *(float *)&_XMM2) * value);
  v13 = v9->current.value;
  v14 = r_mdaoVolumeStrength;
  mdaoGlob.frameData[frame].capsuleMdaoStrength = v13;
  v15 = v14->current.value;
  v16 = r_mdaoBoneInfluenceRadiusScale;
  mdaoGlob.frameData[frame].volumeMdaoStrength = v15;
  LODWORD(mdaoGlob.frameData[frame].influenceRadiusScale) = v16->current.integer;
  v17 = frontEndDataOut;
  mdaoGlob.frameData[frame].cullDistance = *(float *)&unsignedInt;
  mdaoGlob.frameData[frame].fadeDistance = value;
  mdaoGlob.frameData[frame].boneSizeThreshold = v6;
  mdaoGlob.frameData[frame].fadeoutRadiusScale = 0.85000002;
  MatrixTransformDir44(&v17->sunShadow.lightDir, (const tmat44_t<vec4_t> *)viewInfo, &mdaoGlob.frameData[frame].sunDirVs);
}

/*
==============
R_MDAO_ToggleFrame
==============
*/
__int64 R_MDAO_ToggleFrame()
{
  const dvar_t *v0; 
  unsigned int frame; 
  vec3_t end; 
  vec3_t start; 
  vec4_t color; 

  mdaoGlob.frame = 1 - mdaoGlob.frame;
  mdaoGlob.frameData[mdaoGlob.frame].occluderCount = 0;
  v0 = r_mdaoDrawOccluders;
  mdaoGlob.frameData[mdaoGlob.frame].volumeOccluderCount = 0;
  frame = mdaoGlob.frame;
  if ( v0->current.enabled )
  {
    end.v[0] = 0.0;
    end.v[1] = 0.0;
    end.v[2] = 0.0;
    start.v[0] = 0.0;
    start.v[1] = 0.0;
    start.v[2] = 0.0;
    color = 0i64;
    CG_DebugLine(&start, &end, &color, 0, 0);
  }
  return frame;
}

