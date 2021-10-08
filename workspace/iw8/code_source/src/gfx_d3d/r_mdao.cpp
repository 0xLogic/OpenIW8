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
  float volumeFadeoutFactor[4]; 

  p_mdaoVolumeProcessed = &brushModel->writable.mdaoVolumeProcessed;
  if ( (((_BYTE)brushModel + 52) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &brushModel->writable.mdaoVolumeProcessed) )
    __debugbreak();
  if ( _InterlockedExchange(p_mdaoVolumeProcessed, -1) != -1 )
  {
    _RCX = 26752i64 * mdaoGlob.frame;
    _RAX = &mdaoGlob.frameData[0].cullDistance;
    __asm { vmovss  xmm2, dword ptr [rcx+rax]; cullDistance }
    if ( R_MDAO_OccludersVisible(viewInfo, &brushModel->writable.origin, *(float *)&_XMM2, volumeFadeoutFactor) )
    {
      __asm
      {
        vmovaps [rsp+0B8h+var_28], xmm6
        vmovss  xmm6, [rsp+0B8h+volumeFadeoutFactor]
        vcomiss xmm6, cs:__real@3f800000
        vmovaps xmm6, [rsp+0B8h+var_28]
      }
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
  DObjAnimMat *RotTransArray; 
  char v21; 
  __int64 occluderRadius; 
  tmat33_t<vec3_t> axis; 

  _RSI = frameData;
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
    __asm
    {
      vmovaps [rsp+190h+var_60], xmm8
      vmovaps [rsp+190h+var_80], xmm10
    }
    _RDI = boneInfoArray[boneIndex];
    _RBX = &RotTransArray[boneIndex].quat;
    __asm
    {
      vmovaps [rsp+190h+var_90], xmm11
      vmovaps [rsp+190h+var_A0], xmm12
    }
    QuatToAxis(_RBX, &axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+10h]
      vxorps  xmm10, xmm10, xmm10
      vaddss  xmm8, xmm0, dword ptr [rax+7Ch]
      vmovss  dword ptr [rsp+190h+positionWs], xmm8
      vmovss  xmm0, dword ptr [rbx+14h]
      vaddss  xmm11, xmm0, dword ptr [rax+80h]
      vmovss  dword ptr [rsp+190h+positionWs+4], xmm11
      vmovss  xmm0, dword ptr [rbx+18h]
      vaddss  xmm12, xmm0, dword ptr [rax+84h]
      vmovss  dword ptr [rsp+190h+positionWs+8], xmm12
      vucomiss xmm10, dword ptr [rdi+0Ch]
    }
    if ( v21 )
    {
      __asm { vucomiss xmm10, dword ptr [rdi+10h] }
      if ( v21 )
      {
        __asm { vucomiss xmm10, dword ptr [rdi+14h] }
        if ( v21 )
          _RDI = (XBoneInfo *)collBounds;
      }
    }
    if ( _RDI )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rdi+10h]
        vmovss  xmm5, dword ptr [rdi+0Ch]
        vmovss  xmm3, dword ptr [rdi+14h]
        vmulss  xmm0, xmm5, xmm4
        vmulss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, cs:__real@41000000
        vcomiss xmm2, dword ptr [rsi+20h]
        vmovaps [rsp+190h+var_40], xmm6
        vmovaps [rsp+190h+var_50], xmm7
        vmaxss  xmm0, xmm5, xmm4
        vmaxss  xmm7, xmm0, xmm3
        vucomiss xmm7, xmm4
        vminss  xmm0, xmm5, xmm4
        vmovaps [rsp+190h+var_70], xmm9
        vmovaps [rsp+190h+var_B0], xmm13
        vminss  xmm13, xmm0, xmm3
        vmovss  xmm4, dword ptr [rdi]
        vmovss  xmm5, dword ptr [rdi+4]
        vmovss  xmm6, dword ptr [rdi+8]
        vmulss  xmm0, xmm4, dword ptr [rbp+90h+axis]
        vmulss  xmm1, xmm5, dword ptr [rbp+90h+axis+0Ch]
        vaddss  xmm2, xmm0, xmm8
        vmulss  xmm0, xmm6, dword ptr [rbp+90h+axis+18h]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm1, xmm4, dword ptr [rbp+90h+axis+4]
        vaddss  xmm9, xmm3, xmm0
        vmulss  xmm0, xmm5, dword ptr [rbp+90h+axis+10h]
        vaddss  xmm2, xmm1, xmm11
        vmulss  xmm1, xmm6, dword ptr [rbp+90h+axis+1Ch]
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm0, xmm4, dword ptr [rbp+90h+axis+8]
        vaddss  xmm8, xmm3, xmm1
        vmulss  xmm1, xmm5, dword ptr [rbp+90h+axis+14h]
        vaddss  xmm2, xmm0, xmm12
        vmulss  xmm0, xmm6, dword ptr [rbp+90h+axis+20h]
        vmulss  xmm6, xmm13, cs:__real@3f666666
        vmovaps xmm13, [rsp+190h+var_B0]
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm4, xmm3, xmm0
        vdivss  xmm7, xmm7, xmm6
        vmovss  dword ptr [rsp+190h+positionWs+8], xmm4
        vmovss  dword ptr [rsp+190h+positionWs], xmm9
        vmovss  dword ptr [rsp+190h+positionWs+4], xmm8
        vaddss  xmm0, xmm7, dword ptr [rax+28h]
        vmulss  xmm5, xmm0, xmm6
        vmulss  xmm1, xmm8, dword ptr [rax+4]
        vmulss  xmm0, xmm9, dword ptr [rax]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [rax+8]
        vaddss  xmm0, xmm2, xmm1
        vaddss  xmm2, xmm0, dword ptr [rax+0Ch]
        vaddss  xmm3, xmm2, xmm5
        vcomiss xmm3, xmm10
        vmovaps xmm7, [rsp+190h+var_50]
        vmovaps xmm9, [rsp+190h+var_70]
        vmovaps xmm6, [rsp+190h+var_40]
      }
    }
    __asm
    {
      vmovaps xmm8, [rsp+190h+var_60]
      vmovaps xmm10, [rsp+190h+var_80]
      vmovaps xmm11, [rsp+190h+var_90]
      vmovaps xmm12, [rsp+190h+var_A0]
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
  float volumeFadeoutFactor[4]; 

  p_mdaoVolumesProcessed = &dynBrushPose->mdaoVolumesProcessed;
  if ( (((_BYTE)dynBrushPose + 108) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &dynBrushPose->mdaoVolumesProcessed) )
    __debugbreak();
  if ( _InterlockedExchange(p_mdaoVolumesProcessed, -1) != -1 )
  {
    _RCX = 26752i64 * mdaoGlob.frame;
    _RAX = &mdaoGlob.frameData[0].cullDistance;
    __asm { vmovss  xmm2, dword ptr [rcx+rax]; cullDistance }
    if ( R_MDAO_OccludersVisible(viewInfo, &brushModel->writable.origin, *(float *)&_XMM2, volumeFadeoutFactor) )
    {
      __asm
      {
        vmovaps [rsp+0C8h+var_38], xmm6
        vmovss  xmm6, [rsp+0C8h+volumeFadeoutFactor]
        vcomiss xmm6, cs:__real@3f800000
        vmovaps xmm6, [rsp+0C8h+var_38]
      }
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
  float volumeFadeoutFactor[4]; 

  if ( !dynEntPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 732, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 733, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( (((_BYTE)dynEntPose + 108) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &dynEntPose->mdaoVolumesProcessed) )
    __debugbreak();
  if ( _InterlockedExchange(&dynEntPose->mdaoVolumesProcessed, -1) != -1 )
  {
    _RCX = 26752i64 * mdaoGlob.frame;
    _RAX = &mdaoGlob.frameData[0].cullDistance;
    __asm { vmovss  xmm2, dword ptr [rcx+rax]; cullDistance }
    if ( R_MDAO_OccludersVisible(viewInfo, &dynEntPose->pose.origin, *(float *)&_XMM2, volumeFadeoutFactor) )
    {
      __asm
      {
        vmovaps [rsp+0C8h+var_38], xmm6
        vmovss  xmm6, [rsp+0C8h+volumeFadeoutFactor]
        vcomiss xmm6, cs:__real@3f800000
        vmovaps xmm6, [rsp+0C8h+var_38]
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
  void *v5; 
  const DObj *obj; 
  GfxSceneEntityInfo v10; 
  volatile __int32 *p_mdaoCullIn; 
  __int64 NumModels; 
  int v23; 
  __int64 v24; 
  const XModel *Model; 
  int numBones; 
  MDAOType mdaoType; 
  float boneInfoArray; 
  int v34; 
  float volumeFadeoutFactor; 
  __int64 v36; 
  __int64 v37; 
  vec3_t outOrigin; 
  __int64 v39; 
  vec3_t dir; 
  GfxMatrix viewMatrix; 
  char v44; 

  v5 = alloca(v2);
  v39 = -2i64;
  __asm
  {
    vmovaps [rsp+8118h+var_48], xmm6
    vmovaps [rsp+8118h+var_58], xmm7
  }
  _R13 = viewInfo;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 583, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( !sceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 584, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
    __debugbreak();
  obj = sceneEnt->obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 586, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  _R12 = &mdaoGlob.frameData[mdaoGlob.frame];
  v10.pose = (const cpose_t *)sceneEnt->info;
  if ( !v10.pose->isMayhem )
  {
    p_mdaoCullIn = &v10.pose->mdaoCullIn;
    if ( ((unsigned __int8)p_mdaoCullIn & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_mdaoCullIn) )
      __debugbreak();
    if ( _InterlockedExchange(p_mdaoCullIn, 1) != 1 )
    {
      GfxSceneEntity_GetPlacementOrigin(sceneEnt, &outOrigin);
      __asm { vmovss  xmm2, dword ptr [r12+18h]; cullDistance }
      if ( R_MDAO_OccludersVisible(_R13, &outOrigin, *(float *)&_XMM2, &volumeFadeoutFactor) )
      {
        Sys_ProfBeginNamedEvent(0xFFD2691E, "R_MDAO_AddEntityOccluders");
        __asm
        {
          vmovups ymm0, ymmword ptr [r13+0]
          vmovups ymmword ptr [rsp+8118h+viewMatrix.m], ymm0
          vmovups ymm1, ymmword ptr [r13+20h]
          vmovups ymmword ptr [rsp+8118h+viewMatrix.m+20h], ymm1
          vmovss  xmm0, dword ptr [r13+100h]
          vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
          vxorps  xmm0, xmm0, xmm3
          vmovss  dword ptr [rsp+8118h+dir], xmm0
          vmovss  xmm1, dword ptr [r13+104h]
          vxorps  xmm2, xmm1, xmm3
          vmovss  dword ptr [rsp+8118h+dir+4], xmm2
          vmovss  xmm0, dword ptr [r13+108h]
          vxorps  xmm1, xmm0, xmm3
          vmovss  dword ptr [rsp+8118h+dir+8], xmm1
        }
        MatrixTransformDir44(&dir, (const tmat44_t<vec4_t> *)_R13, &viewMatrix.m.m[3]);
        NumModels = DObjGetNumModels(obj);
        R_MDAO_CalcPose(obj, sceneEnt);
        v23 = 0;
        v34 = 0;
        v37 = NumModels;
        if ( (int)NumModels > 0 )
        {
          v24 = 0i64;
          v36 = 0i64;
          __asm
          {
            vmovss  xmm7, [rsp+8118h+volumeFadeoutFactor]
            vxorps  xmm6, xmm6, xmm6
          }
          do
          {
            Model = DObjGetModel(obj, v23);
            if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 628, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
            if ( sceneEnt->lods[v24] != 6 && Model->mdaoType )
            {
              numBones = XModelNumBones(Model);
              mdaoType = Model->mdaoType;
              if ( mdaoType == MDAO_TYPE_VOLUME )
              {
                __asm { vmovss  dword ptr [rsp+8118h+boneInfoArray], xmm7 }
                R_MDAO_AddVolumeOccluders(_R13, obj, sceneEnt->info.pose, sceneEnt, Model, numBones, boneInfoArray);
              }
              else if ( mdaoType )
              {
                __asm { vcomiss xmm6, dword ptr [r12+14h] }
              }
            }
            v23 = ++v34;
            v36 = ++v24;
          }
          while ( v24 < v37 );
        }
        Sys_ProfEndNamedEvent();
      }
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
  }
  _R11 = &v44;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
R_MDAO_AddModelOccluders
==============
*/
void R_MDAO_AddModelOccluders(const GfxViewInfo *viewInfo, GfxSceneModel *sceneModel)
{
  volatile __int32 *p_mdaoVolumesProcessed; 
  float volumeFadeoutFactor[4]; 

  if ( sceneModel->model->mdaoVolumeCount )
  {
    p_mdaoVolumesProcessed = &sceneModel->mdaoVolumesProcessed;
    if ( (((_BYTE)sceneModel - 112) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &sceneModel->mdaoVolumesProcessed) )
      __debugbreak();
    if ( _InterlockedExchange(p_mdaoVolumesProcessed, -1) != -1 )
    {
      _RCX = 26752i64 * mdaoGlob.frame;
      _RAX = &mdaoGlob.frameData[0].cullDistance;
      __asm { vmovss  xmm2, dword ptr [rcx+rax]; cullDistance }
      if ( R_MDAO_OccludersVisible(viewInfo, &sceneModel->placement.base.origin, *(float *)&_XMM2, volumeFadeoutFactor) )
      {
        __asm
        {
          vmovaps [rsp+0C8h+var_38], xmm6
          vmovss  xmm6, [rsp+0C8h+volumeFadeoutFactor]
          vcomiss xmm6, cs:__real@3f800000
          vmovaps xmm6, [rsp+0C8h+var_38]
        }
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
  volatile signed __int32 *p_volumeOccluderCount; 
  int v22; 
  Bounds boundsa; 
  Bounds v94; 
  vec3_t in1; 
  vec3_t v96; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> mat; 
  tmat44_t<vec4_t> v99; 

  _R15 = bounds;
  _RDI = rotationWs;
  _RSI = &mdaoGlob.frameData[mdaoGlob.frame];
  p_volumeOccluderCount = &_RSI->volumeOccluderCount;
  if ( (((_BYTE)_RSI + 40) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &_RSI->volumeOccluderCount) )
    __debugbreak();
  v22 = _InterlockedExchangeAdd(p_volumeOccluderCount, 1u);
  if ( v22 >= 128 )
  {
    *p_volumeOccluderCount = 128;
  }
  else
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f000000
      vmovss  xmm4, dword ptr [r15+0Ch]
      vaddss  xmm0, xmm4, dword ptr [r15]
      vmovss  xmm3, dword ptr [r15+10h]
      vmovss  xmm1, dword ptr [r15+14h]
      vmovaps [rsp+210h+var_40], xmm6
      vmovaps [rsp+210h+var_50], xmm7
      vmovaps [rsp+210h+var_60], xmm8
      vmovaps [rsp+210h+var_70], xmm9
      vmovaps [rsp+210h+var_80], xmm10
      vmulss  xmm9, xmm0, xmm2
      vaddss  xmm0, xmm3, dword ptr [r15+4]
      vmovaps [rsp+210h+var_90], xmm11
      vmovaps [rsp+210h+var_A0], xmm12
      vmovaps [rsp+210h+var_B0], xmm13
      vmulss  xmm13, xmm0, xmm2
      vaddss  xmm0, xmm1, dword ptr [r15+8]
      vmovaps [rsp+210h+var_C0], xmm14
      vmulss  xmm14, xmm0, xmm2
      vmovss  dword ptr [rsp+210h+in1+8], xmm14
      vsubss  xmm12, xmm1, xmm14
      vmovss  dword ptr [rsp+210h+in1], xmm9
      vmovss  dword ptr [rsp+210h+in1+4], xmm13
    }
    _RBX = v22;
    __asm
    {
      vsubss  xmm10, xmm4, xmm9
      vsubss  xmm11, xmm3, xmm13
    }
    MatrixIdentity44(&out);
    MatrixTransformVector(&in1, _RDI, &v96);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+210h+var_1A0]
      vaddss  xmm1, xmm0, dword ptr [r14]
      vsubss  xmm2, xmm1, dword ptr [r12+100h]
      vmovss  xmm0, dword ptr [rsp+210h+var_1A0+4]
      vaddss  xmm1, xmm0, dword ptr [r14+4]
      vmovss  xmm0, dword ptr [rsp+210h+var_1A0+8]
      vmovss  xmm8, dword ptr [rdi+8]
      vmovss  xmm5, dword ptr [rdi+0Ch]
      vmovss  xmm6, dword ptr [rdi+10h]
      vmovss  xmm7, dword ptr [rdi+14h]
      vmovss  xmm3, dword ptr [rdi+1Ch]
      vmovss  xmm4, dword ptr [rdi+20h]
      vmovss  dword ptr [rbp+110h+out+30h], xmm2
      vsubss  xmm2, xmm1, dword ptr [r12+104h]
      vaddss  xmm1, xmm0, dword ptr [r14+8]
      vmovups ymm0, ymmword ptr [rbp+110h+out]
      vmovups ymmword ptr [rbp+110h+mat], ymm0
      vmovss  xmm0, dword ptr [rdi]
      vmovss  dword ptr [rbp+110h+mat], xmm0
      vmulss  xmm0, xmm10, xmm0
      vmovss  dword ptr [rbp+110h+out+34h], xmm2
      vsubss  xmm2, xmm1, dword ptr [r12+108h]
      vmovss  dword ptr [rbp+110h+out], xmm0
      vmovss  dword ptr [rbp+110h+out+38h], xmm2
      vmovups ymm1, ymmword ptr [rbp-60h]
      vmovss  xmm2, dword ptr [rdi+18h]
      vmovups ymmword ptr [rbp+110h+mat+20h], ymm1
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rbp+110h+mat+4], xmm1
      vmulss  xmm1, xmm1, xmm10
      vmulss  xmm0, xmm8, xmm10
      vmovss  dword ptr [rbp+110h+out+4], xmm1
      vmovss  dword ptr [rbp+110h+out+8], xmm0
      vmulss  xmm1, xmm5, xmm11
      vmulss  xmm0, xmm6, xmm11
      vmovss  dword ptr [rbp+110h+out+10h], xmm1
      vmovss  dword ptr [rbp+110h+out+14h], xmm0
      vmulss  xmm1, xmm7, xmm11
      vmulss  xmm0, xmm2, xmm12
      vmovss  dword ptr [rbp+110h+out+18h], xmm1
      vmovss  dword ptr [rbp+110h+mat+8], xmm8
      vmovss  dword ptr [rbp+110h+mat+10h], xmm5
      vmovss  dword ptr [rbp+110h+mat+14h], xmm6
      vmovss  dword ptr [rbp+110h+mat+18h], xmm7
      vmovss  dword ptr [rbp+110h+mat+20h], xmm2
      vmovss  dword ptr [rbp+110h+mat+24h], xmm3
      vmovss  dword ptr [rbp+110h+mat+28h], xmm4
      vmovss  dword ptr [rbp+110h+out+20h], xmm0
      vmulss  xmm1, xmm3, xmm12
      vmulss  xmm0, xmm4, xmm12
      vmovss  dword ptr [rbp+110h+out+24h], xmm1
      vmovss  dword ptr [rbp+110h+out+28h], xmm0
    }
    MatrixMultiply44(&out, (const tmat44_t<vec4_t> *)viewInfo, &v99);
    MatrixInverse44(&mat, &_RSI->volumeOccluders[_RBX].worldToOccluderFrame.m);
    MatrixInverse44(&v99, &_RSI->volumeOccluders[_RBX].viewToOccluder.m);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+110h+out]
      vmovups ymm1, ymmword ptr [rbp+110h+out+20h]
      vmovss  xmm2, [rbp+110h+arg_28]
      vmovaps xmm8, [rsp+210h+var_60]
      vmovaps xmm7, [rsp+210h+var_50]
      vmovups ymmword ptr [rbx+rsi+30h], ymm0
      vmovss  xmm0, cs:__real@3f800000
      vmovups ymmword ptr [rbx+rsi+50h], ymm1
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmovss  dword ptr [rbx+rsi+0FCh], xmm2
    }
    _RSI->volumeOccluders[_RBX].volumeData = volumeData;
    __asm
    {
      vdivss  xmm1, xmm0, xmm1
      vmovss  dword ptr [rbx+rsi+0F8h], xmm1
    }
    if ( r_mdaoDrawOccluders->current.enabled )
    {
      __asm
      {
        vunpcklps xmm0, xmm11, xmm12
        vinsertps xmm9, xmm9, xmm13, 10h
        vinsertps xmm9, xmm9, xmm14, 20h ; ' '
        vinsertps xmm9, xmm9, xmm10, 30h ; '0'
        vmovups xmmword ptr [rsp+210h+bounds.midPoint], xmm9
        vxorps  xmm6, xmm6, xmm6
        vmovss  dword ptr [rsp+210h+bounds.halfSize], xmm6
        vmovups xmmword ptr [rsp+210h+var_1C8.midPoint], xmm9
        vmovsd  qword ptr [rsp+210h+var_1C8.halfSize+4], xmm0
        vmovsd  qword ptr [rsp+210h+bounds.halfSize+4], xmm0
      }
      CG_DebugBoxOriented(positionWs, &boundsa, _RDI, &colorRed, 0, 0);
      __asm
      {
        vmovsd  xmm1, qword ptr [rsp+210h+var_1C8.halfSize+4]
        vmovups xmm0, xmmword ptr [rsp+210h+var_1C8.midPoint]
        vmovsd  qword ptr [rsp+210h+bounds.halfSize+4], xmm1
      }
      boundsa.halfSize.v[2] = *((float *)&_RT0 + 1);
      __asm
      {
        vmovss  dword ptr [rsp+210h+bounds.halfSize+4], xmm6
        vmovups xmmword ptr [rsp+210h+bounds.midPoint], xmm0
      }
      CG_DebugBoxOriented(positionWs, &boundsa, _RDI, &colorGreen, 0, 0);
      __asm
      {
        vmovsd  xmm1, qword ptr [rsp+210h+var_1C8.halfSize+4]
        vmovups xmm0, xmmword ptr [rsp+210h+var_1C8.midPoint]
        vmovsd  qword ptr [rsp+210h+bounds.halfSize+4], xmm1
      }
      LODWORD(boundsa.halfSize.v[1]) = _RT0;
      __asm
      {
        vmovss  dword ptr [rsp+210h+bounds.halfSize+8], xmm6
        vmovups xmmword ptr [rsp+210h+bounds.midPoint], xmm0
      }
      CG_DebugBoxOriented(positionWs, &boundsa, _RDI, &colorBlue, 0, 0);
      CG_DebugBoxOriented(positionWs, &v94, _RDI, &colorOrange, 0, 0);
    }
    __asm
    {
      vmovaps xmm13, [rsp+210h+var_B0]
      vmovaps xmm12, [rsp+210h+var_A0]
      vmovaps xmm11, [rsp+210h+var_90]
      vmovaps xmm10, [rsp+210h+var_80]
      vmovaps xmm9, [rsp+210h+var_70]
      vmovaps xmm6, [rsp+210h+var_40]
      vmovaps xmm14, [rsp+210h+var_C0]
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
  char v30; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  if ( model->mdaoVolumeCount )
  {
    __asm
    {
      vmovss  xmm0, [rbp+180h+fadeoutFactor]
      vcomiss xmm0, cs:__real@3f800000
    }
  }
  _R11 = &v30;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
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
  unsigned int v8; 
  __int64 NumModels; 
  bool IsHierarchyFlattened; 
  int v12; 
  int v13; 
  __int64 v14; 
  const XModel *Model; 
  MDAOType mdaoType; 
  unsigned __int16 mdaoVolumeCount; 
  __int64 v18; 
  __int64 v19; 
  unsigned __int16 parentBoneIndex; 
  unsigned __int64 v21; 
  int numBones; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  int v27; 
  __int64 v29; 
  __int64 v31; 
  DObjPartBits partBits; 

  v3 = 0;
  __asm { vmovaps [rsp+0E8h+var_48], xmm6 }
  v4 = sceneEnt;
  v5 = obj;
  _RDI = &partBits;
  __asm { vpxor   xmm6, xmm6, xmm6 }
  do
  {
    __asm { vmovdqu xmmword ptr [rdi], xmm6 }
    _RDI = (DObjPartBits *)((char *)_RDI + 16);
    ++v3;
  }
  while ( v3 < 2 );
  v8 = 0;
  NumModels = DObjGetNumModels(obj);
  IsHierarchyFlattened = CG_Pose_IsHierarchyFlattened(v4->info.pose);
  __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
  if ( !IsHierarchyFlattened )
  {
    v12 = 0;
    v27 = 0;
    v31 = NumModels;
    if ( (int)NumModels > 0 )
    {
      v13 = 0;
      v14 = 0i64;
      v29 = 0i64;
      while ( 1 )
      {
        Model = DObjGetModel(v5, v12);
        if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 311, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        if ( v4->lods[v14] == 6 )
          goto LABEL_33;
        mdaoType = Model->mdaoType;
        if ( mdaoType == MDAO_TYPE_NONE )
          goto LABEL_33;
        if ( mdaoType != MDAO_TYPE_VOLUME )
          break;
        mdaoVolumeCount = Model->mdaoVolumeCount;
        if ( mdaoVolumeCount )
        {
          v18 = 0i64;
          v19 = mdaoVolumeCount;
          do
          {
            parentBoneIndex = Model->mdaoVolumes[v18].parentBoneIndex;
            if ( (unsigned __int16)(parentBoneIndex - 254) > 1u )
            {
              v21 = parentBoneIndex;
              if ( parentBoneIndex >= 0x100u )
              {
                LODWORD(v26) = 256;
                LODWORD(v25) = parentBoneIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
                  __debugbreak();
              }
              partBits.array[v21 >> 5] |= 0x80000000 >> (v21 & 0x1F);
            }
            ++v18;
            --v19;
          }
          while ( v19 );
          v5 = obj;
          goto LABEL_31;
        }
LABEL_33:
        ++v12;
        ++v14;
        v27 = v12;
        v29 = v14;
        if ( v14 >= v31 )
          goto LABEL_34;
      }
      numBones = Model->numBones;
      if ( Model->numBones )
      {
        do
        {
          if ( R_MDAO_IsBoneValid(Model, v13) )
          {
            if ( v8 >= v5->numBones )
            {
              LODWORD(v24) = v5->numBones;
              LODWORD(v23) = v8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 345, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( obj->numBones )", "boneIndex doesn't index obj->numBones\n\t%i not in [0, %i)", v23, v24) )
                __debugbreak();
            }
            if ( v8 >= 0x100 )
            {
              LODWORD(v26) = 256;
              LODWORD(v25) = v8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
                __debugbreak();
            }
            partBits.array[(unsigned __int64)v8 >> 5] |= 0x80000000 >> (v8 & 0x1F);
          }
          ++v13;
          ++v8;
        }
        while ( v13 < numBones );
LABEL_31:
        v12 = v27;
        v14 = v29;
      }
      v4 = sceneEnt;
      v13 = 0;
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

void __fastcall R_MDAO_ConstructCapsuleOccluder(const GfxMatrix *viewMatrix, double influenceRadiusScale, double fadeoutRadiusScale, const vec3_t *positionWs, const vec3_t *axisWs, float occluderRadius, float occluderLength, float dFadeScale, float dFadeBias, float strength, MDAOOccluder *occluder)
{
  bool v27; 
  bool v28; 
  int v97; 
  vec3_t out; 
  char v102; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0F8h+var_88], xmm13
    vmovaps [rsp+0F8h+var_98], xmm14
    vmovaps [rsp+0F8h+var_A8], xmm15
  }
  _RSI = (vec3_t *)positionWs;
  _RBX = occluder;
  __asm
  {
    vmovss  [rsp+0F8h+var_C8], xmm2
    vmovaps xmm11, xmm1
  }
  if ( !viewMatrix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 122, ASSERT_TYPE_ASSERT, "(viewMatrix)", (const char *)&queryFormat, "viewMatrix", v97) )
    __debugbreak();
  v27 = occluder == NULL;
  if ( !occluder )
  {
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 123, ASSERT_TYPE_ASSERT, "(occluder)", (const char *)&queryFormat, "occluder");
    v27 = !v28;
    if ( v28 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm10, [rsp+0F8h+occluderLength]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm10, xmm0
  }
  if ( v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mdao.cpp", 124, ASSERT_TYPE_ASSERT, "(occluderLength)", (const char *)&queryFormat, "occluderLength") )
    __debugbreak();
  if ( _RSI == &out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1093, ASSERT_TYPE_ASSERT, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, dword ptr [rsi+4]
    vmovss  xmm3, dword ptr [rsi]
    vmovss  xmm5, dword ptr [rsi+8]
    vmulss  xmm1, xmm4, dword ptr [rdi+10h]
    vmulss  xmm0, xmm3, dword ptr [rdi]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rdi+20h]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm15, xmm0, dword ptr [rdi+30h]
    vmulss  xmm0, xmm4, dword ptr [rdi+14h]
    vmulss  xmm1, xmm3, dword ptr [rdi+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rdi+24h]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm14, xmm0, dword ptr [rdi+34h]
    vmulss  xmm0, xmm4, dword ptr [rdi+18h]
    vmulss  xmm1, xmm3, dword ptr [rdi+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rdi+28h]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm13, xmm0, dword ptr [rdi+38h]
  }
  MatrixTransformDir44(axisWs, &viewMatrix->m, &out);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+0F8h+out+8]
    vmovss  xmm5, dword ptr [rsp+0F8h+out+4]
    vmovss  xmm6, dword ptr [rsp+0F8h+out]
    vmovss  xmm12, cs:__real@3f800000
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm12, xmm0
    vdivss  xmm2, xmm12, xmm0
    vmulss  xmm7, xmm6, xmm2
    vmovss  xmm6, [rsp+0F8h+occluderRadius]
    vmulss  xmm9, xmm4, xmm2
    vmulss  xmm8, xmm5, xmm2
    vaddss  xmm0, xmm11, xmm10
    vmulss  xmm11, xmm0, xmm6
    vmulss  xmm10, xmm11, [rsp+0F8h+var_C8]
    vmulss  xmm2, xmm15, xmm15
    vmulss  xmm0, xmm14, xmm14
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm2, xmm13, xmm13
    vaddss  xmm3, xmm3, xmm2
    vsqrtss xmm0, xmm3, xmm3
    vmulss  xmm4, xmm0, [rsp+0F8h+dFadeScale]
    vaddss  xmm0, xmm4, [rsp+0F8h+dFadeBias]; val
    vmovaps xmm2, xmm12; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, [rsp+0F8h+strength]
    vmovss  xmm0, [rsp+0F8h+occluderLength]
    vmovss  dword ptr [rbx], xmm15
    vmovss  dword ptr [rbx+4], xmm14
    vmovss  dword ptr [rbx+8], xmm13
    vmovss  dword ptr [rbx+0Ch], xmm6
    vmovss  dword ptr [rbx+1Ch], xmm0
    vmovss  dword ptr [rbx+10h], xmm7
    vmovss  dword ptr [rbx+14h], xmm8
    vmovss  dword ptr [rbx+18h], xmm9
    vsubss  xmm0, xmm11, xmm10
    vdivss  xmm0, xmm12, xmm0
    vmovss  dword ptr [rbx+24h], xmm0
    vmovss  dword ptr [rbx+20h], xmm10
    vmovss  dword ptr [rbx+28h], xmm1
  }
  occluder->fadeoutParams.v[3] = 0.0;
  _R11 = &v102;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+0F8h+var_98]
    vmovaps xmm15, [rsp+0F8h+var_A8]
  }
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

bool __fastcall R_MDAO_OccludersVisible(const GfxViewInfo *viewInfo, const vec3_t *position, double cullDistance, float *volumeFadeoutFactor)
{
  bool result; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+100h]
    vsubss  xmm5, xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rcx+104h]
    vsubss  xmm3, xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+108h]
    vsubss  xmm4, xmm0, dword ptr [rdx+8]
    vmulss  xmm1, xmm5, xmm5
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
    vmulss  xmm3, xmm3, xmm3
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm5, xmm2, xmm0
    vmulss  xmm1, xmm6, xmm6
    vcomiss xmm5, xmm1
  }
  result = 0;
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
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

void __fastcall R_MDAO_SetupGlobalFrameData(const GfxViewInfo *viewInfo, double cullDistance, double fadeDistance, double boneSizeThreshold)
{
  char v7; 
  const dvar_t *v17; 
  float value; 
  const dvar_t *v26; 
  float v27; 
  const dvar_t *v28; 
  GfxBackEndData *v29; 

  _RDX = mdaoGlob.frame;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm2, xmm0
    vmovaps xmm6, xmm3
    vmovaps xmm5, xmm2
    vmovaps xmm4, xmm1
  }
  if ( v7 )
  {
    _RAX = r_mdaoOccluderFadeOutStartDistance;
    __asm { vmovss  xmm5, dword ptr [rax+28h] }
  }
  __asm { vucomiss xmm1, xmm0 }
  if ( v7 )
  {
    _RAX = r_mdaoOccluderCullDistance;
    __asm { vmovss  xmm4, dword ptr [rax+28h] }
  }
  __asm { vucomiss xmm3, xmm0 }
  if ( v7 )
  {
    _RAX = r_mdaoMinBoneBoundsToOcclude;
    __asm { vmovss  xmm6, dword ptr [rax+28h] }
  }
  __asm { vmovss  xmm1, cs:__real@bf800000 }
  v17 = r_mdaoCapsuleStrength;
  _R8 = &mdaoGlob;
  __asm
  {
    vsubss  xmm0, xmm4, xmm5
    vmaxss  xmm2, xmm0, cs:__real@3a83126f
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm3, xmm1, xmm2
    vmovss  dword ptr [rdx+r8+1Ch], xmm3
    vmulss  xmm1, xmm3, xmm5
    vsubss  xmm2, xmm0, xmm1
    vmovss  dword ptr [rdx+r8+20h], xmm2
  }
  value = v17->current.value;
  v26 = r_mdaoVolumeStrength;
  mdaoGlob.frameData[_RDX].capsuleMdaoStrength = value;
  v27 = v26->current.value;
  v28 = r_mdaoBoneInfluenceRadiusScale;
  mdaoGlob.frameData[_RDX].volumeMdaoStrength = v27;
  LODWORD(mdaoGlob.frameData[_RDX].influenceRadiusScale) = v28->current.integer;
  v29 = frontEndDataOut;
  __asm
  {
    vmovss  dword ptr [rdx+r8+28h], xmm4
    vmovss  dword ptr [rdx+r8+2Ch], xmm5
    vmovss  dword ptr [rdx+r8+30h], xmm6
  }
  mdaoGlob.frameData[_RDX].fadeoutRadiusScale = 0.85000002;
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  MatrixTransformDir44(&v29->sunShadow.lightDir, (const tmat44_t<vec4_t> *)viewInfo, &mdaoGlob.frameData[_RDX].sunDirVs);
}

/*
==============
R_MDAO_ToggleFrame
==============
*/

__int64 __fastcall R_MDAO_ToggleFrame(double _XMM0_8, double _XMM1_8)
{
  const dvar_t *v2; 
  unsigned int frame; 
  vec3_t end; 
  vec3_t start; 
  vec4_t color; 

  mdaoGlob.frame = 1 - mdaoGlob.frame;
  mdaoGlob.frameData[mdaoGlob.frame].occluderCount = 0;
  v2 = r_mdaoDrawOccluders;
  mdaoGlob.frameData[mdaoGlob.frame].volumeOccluderCount = 0;
  frame = mdaoGlob.frame;
  if ( v2->current.enabled )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+78h+end], xmm1
      vmovss  dword ptr [rsp+78h+end+4], xmm1
      vmovss  dword ptr [rsp+78h+end+8], xmm1
      vmovss  dword ptr [rsp+78h+start], xmm1
      vmovss  dword ptr [rsp+78h+start+4], xmm1
      vmovss  dword ptr [rsp+78h+start+8], xmm1
      vmovups xmmword ptr [rsp+78h+color], xmm0
    }
    CG_DebugLine(&start, &end, &color, 0, 0);
  }
  return frame;
}

