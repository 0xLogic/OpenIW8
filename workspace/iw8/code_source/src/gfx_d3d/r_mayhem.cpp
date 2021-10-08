/*
==============
R_Mayhem_SplineDecompressQuat<float4>
==============
*/

void __fastcall R_Mayhem_SplineDecompressQuat<float4>(const MayhemAnim *mayhemAnim, unsigned int numFrames, float t, unsigned __int16 absFrame, unsigned __int16 *frameIndices, const float4 *quatKeys, float4 *quatFrame)
{
  ??$R_Mayhem_SplineDecompressQuat@Ufloat4@@@@YAXPEBUMayhemAnim@@IMGPEIAGPEIBUfloat4@@PEIAU1@@Z(mayhemAnim, numFrames, t, absFrame, frameIndices, quatKeys, quatFrame);
}

/*
==============
RB_MayhemSelfVis_UpdateAnimBuffer
==============
*/

void __fastcall RB_MayhemSelfVis_UpdateAnimBuffer(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  ?RB_MayhemSelfVis_UpdateAnimBuffer@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@@Z(state, data);
}

/*
==============
R_MayhemSelfVis_ToggleSmpFrame
==============
*/

void __fastcall R_MayhemSelfVis_ToggleSmpFrame(unsigned int smpFrame)
{
  ?R_MayhemSelfVis_ToggleSmpFrame@@YAXI@Z(smpFrame);
}

/*
==============
R_Mayhem_RegisterCustomDataChannels
==============
*/

void __fastcall R_Mayhem_RegisterCustomDataChannels(const MayhemAnim *mayhemAnim, const DObj *obj, float t, unsigned int elemOffset)
{
  ?R_Mayhem_RegisterCustomDataChannels@@YAXPEBUMayhemAnim@@PEBUDObj@@MI@Z(mayhemAnim, obj, t, elemOffset);
}

/*
==============
R_InitMayhemChannelsConstantBuffers
==============
*/

void R_InitMayhemChannelsConstantBuffers(void)
{
  ?R_InitMayhemChannelsConstantBuffers@@YAXXZ();
}

/*
==============
R_AddMayhemChannelsComputeCmds
==============
*/

bool __fastcall R_AddMayhemChannelsComputeCmds(ComputeCmdList *cmdList, unsigned int numMayhemChannelVerts, unsigned __int8 *modelSurfs, unsigned int surfBufSize, unsigned __int16 surfaceCount, int objBufIndex)
{
  return ?R_AddMayhemChannelsComputeCmds@@YA_NPEAUComputeCmdList@@IPEIAEIGH@Z(cmdList, numMayhemChannelVerts, modelSurfs, surfBufSize, surfaceCount, objBufIndex);
}

/*
==============
R_Mayhem_ReleaseAnimResources
==============
*/

void __fastcall R_Mayhem_ReleaseAnimResources(MayhemAnim *mayhemAnims, unsigned int numAnims)
{
  ?R_Mayhem_ReleaseAnimResources@@YAXPEAUMayhemAnim@@I@Z(mayhemAnims, numAnims);
}

/*
==============
R_MayhemSelfVis_Init
==============
*/

void R_MayhemSelfVis_Init(void)
{
  ?R_MayhemSelfVis_Init@@YAXXZ();
}

/*
==============
R_MayhemSelfVis_ShutdownWorld
==============
*/

void __fastcall R_MayhemSelfVis_ShutdownWorld(GfxWorld *world)
{
  ?R_MayhemSelfVis_ShutdownWorld@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_Mayhem_SplineDecompressPos<vec3_t>
==============
*/

void __fastcall R_Mayhem_SplineDecompressPos<vec3_t>(const MayhemAnim *mayhemAnim, unsigned int numFrames, float t, unsigned __int16 absFrame, const float4 *transMin, const float4 *transSize, unsigned __int16 *frameIndices, const vec3_t *posKeys, float4 *posFrame)
{
  ??$R_Mayhem_SplineDecompressPos@Tvec3_t@@@@YAXPEBUMayhemAnim@@IMGAEIBUfloat4@@1PEAGPEIBTvec3_t@@PEIAU1@@Z(mayhemAnim, numFrames, t, absFrame, transMin, transSize, frameIndices, posKeys, posFrame);
}

/*
==============
R_Mayhem_SetCustomDataChannels
==============
*/

void __fastcall R_Mayhem_SetCustomDataChannels(int objBufIndex, ComputeCmdBufState *state, int startIndex)
{
  ?R_Mayhem_SetCustomDataChannels@@YAXHPEAUComputeCmdBufState@@H@Z(objBufIndex, state, startIndex);
}

/*
==============
R_Mayhem_ProcessAnim
==============
*/

void __fastcall R_Mayhem_ProcessAnim(const MayhemAnim *mayhemAnim, float t, DObjAnimMat *skel, const vec3_t *placementPos, const vec4_t *placementQuat)
{
  ?R_Mayhem_ProcessAnim@@YAXPEBUMayhemAnim@@MPEAUDObjAnimMat@@AEBTvec3_t@@AEBTvec4_t@@@Z(mayhemAnim, t, skel, placementPos, placementQuat);
}

/*
==============
R_MayhemSelfVis_GetPerModelData
==============
*/

bool __fastcall R_MayhemSelfVis_GetPerModelData(const GfxBackEndData *data, const GfxSceneEntity *sceneEnt, const DObj *obj, const XModel *model, const MayhemSelfVisChannel **outChannel, unsigned int *outAnimDataIndex)
{
  return ?R_MayhemSelfVis_GetPerModelData@@YA_NPEBUGfxBackEndData@@PEBUGfxSceneEntity@@PEBUDObj@@PEBUXModel@@PEAPEBUMayhemSelfVisChannel@@PEAI@Z(data, sceneEnt, obj, model, outChannel, outAnimDataIndex);
}

/*
==============
R_MayhemSelfVis_Shutdown
==============
*/

void R_MayhemSelfVis_Shutdown(void)
{
  ?R_MayhemSelfVis_Shutdown@@YAXXZ();
}

/*
==============
R_ShutdownMayhemChannelsConstantBuffers
==============
*/

void R_ShutdownMayhemChannelsConstantBuffers(void)
{
  ?R_ShutdownMayhemChannelsConstantBuffers@@YAXXZ();
}

/*
==============
R_ExecuteMayhemChannelsComputeCmds
==============
*/

void __fastcall R_ExecuteMayhemChannelsComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *cmd)
{
  ?R_ExecuteMayhemChannelsComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@@Z(cmdBufState, list, type, cmd);
}

/*
==============
R_Mayhem_SplineDecompressPos<vec3_t>
==============
*/

void __fastcall R_Mayhem_SplineDecompressPos<vec3_t>(const MayhemAnim *mayhemAnim, float4 *numFrames, double t, float4 *absFrame, const float4 *transMin, const float4 *transSize, unsigned __int16 *frameIndices, const vec3_t *posKeys, float4 *posFrame)
{
  float4 *v9; 
  unsigned __int16 v17; 
  int v19; 
  unsigned __int16 v27; 
  __int64 v81; 
  char *fmt; 
  float4 *v83; 
  double v84; 
  double v85; 
  int v86; 
  __int128 v87; 
  char v88; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  v17 = (unsigned __int16)absFrame;
  _R15 = posKeys;
  v19 = (int)numFrames;
  _RSI = posFrame;
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
    vmovaps xmm6, xmm2
    vcomiss xmm2, xmm9
  }
  if ( (unsigned __int64)&v81 != _security_cookie )
  {
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+0D8h+var_A0], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0D8h+var_A8], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+0D8h+var_B0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 198, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( t ) && ( t ) <= ( 1.0f )", "t not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&v83, v84, v85) )
      __debugbreak();
  }
  if ( v17 == mayhemAnim->numFrames )
  {
    v27 = v19 - 1;
  }
  else
  {
    v27 = R_Mayhem_FindFrame(frameIndices + 1, &frameIndices[v19 - 1], v17) + 1;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm9, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, xmm1
      vsubss  xmm3, xmm6, xmm2
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm1
      vsubss  xmm2, xmm1, xmm2
      vdivss  xmm9, xmm3, xmm2
    }
  }
  v83 = posFrame;
  _RAX = 9i64 * v27 - 9;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+rax*4]
    vmovss  xmm1, dword ptr [r15+rax*4+4]
    vmovss  xmm2, dword ptr [r15+rax*4+8]
  }
  HIDWORD(v87) = 0;
  _RAX = 9i64 * v27 - 6;
  __asm
  {
    vmovups xmm8, xmmword ptr [rsp+50h]
    vmovss  xmm8, xmm8, xmm0
    vmovss  xmm0, dword ptr [r15+rax*4]
    vinsertps xmm8, xmm8, xmm1, 10h
    vmovss  xmm1, dword ptr [r15+rax*4+4]
    vinsertps xmm8, xmm8, xmm2, 20h ; ' '
    vmovss  xmm2, dword ptr [r15+rax*4+8]
    vmovups xmmword ptr [rsp+50h], xmm8
  }
  HIDWORD(v87) = 0;
  _RAX = 9i64 * v27;
  __asm
  {
    vmovups xmm7, xmmword ptr [rsp+50h]
    vmovss  xmm7, xmm7, xmm0
    vmovss  xmm0, dword ptr [r15+rax*4-0Ch]
    vinsertps xmm7, xmm7, xmm1, 10h
    vmovss  xmm1, dword ptr [r15+rax*4-8]
    vinsertps xmm7, xmm7, xmm2, 20h ; ' '
    vmovss  xmm2, dword ptr [r15+rax*4-4]
    vmovups xmmword ptr [rsp+50h], xmm7
  }
  HIDWORD(v87) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+50h]
    vmovss  xmm5, dword ptr [r15+rax*4+4]
    vmovss  xmm6, dword ptr [r15+rax*4+8]
    vmovss  xmm3, xmm3, xmm0
    vmovss  xmm0, dword ptr [r15+rax*4]
    vinsertps xmm3, xmm3, xmm1, 10h
    vinsertps xmm3, xmm3, xmm2, 20h ; ' '
    vmovups xmmword ptr [rsp+50h], xmm3
  }
  HIDWORD(v87) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp+50h]
    vmovss  xmm4, xmm4, xmm0
    vinsertps xmm4, xmm4, xmm5, 10h
    vinsertps xmm4, xmm4, xmm6, 20h ; ' '
    vmovups xmm2, xmm7
    vmovups xmm1, xmm8
    vmovaps xmm0, xmm9
  }
  Float4EvalCubicBezierSpline(*(float *)&_XMM0, numFrames, v9, absFrame, (float4 *)fmt, posFrame);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v86 & 0x7F800000) == 2139095040 )
    goto LABEL_15;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v86 & 0x7F800000) == 2139095040 )
    goto LABEL_15;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v86 & 0x7F800000) == 2139095040 )
  {
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 228, ASSERT_TYPE_SANITY, "( !IS_NAN( ( *reinterpret_cast< vec3_t * >( posFrame ) )[0] ) && !IS_NAN( ( *reinterpret_cast< vec3_t * >( posFrame ) )[1] ) && !IS_NAN( ( *reinterpret_cast< vec3_t * >( posFrame ) )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( *reinterpret_cast< vec3_t * >( posFrame ) )[0] ) && !IS_NAN( ( *reinterpret_cast< vec3_t * >( posFrame ) )[1] ) && !IS_NAN( ( *reinterpret_cast< vec3_t * >( posFrame ) )[2] )") )
      __debugbreak();
  }
  _R11 = &v88;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
R_Mayhem_SplineDecompressQuat<float4>
==============
*/

void __fastcall R_Mayhem_SplineDecompressQuat<float4>(const MayhemAnim *mayhemAnim, unsigned int numFrames, double t, unsigned __int16 absFrame, unsigned __int16 *frameIndices, const float4 *quatKeys, float4 *quatFrame)
{
  int v61; 
  __int64 v68; 
  double v69; 
  double v70; 
  double v71; 
  int v72; 

  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps [rsp+0A8h+var_48], xmm7
    vmovaps [rsp+0A8h+var_58], xmm8
  }
  _RBX = quatFrame;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
    vmovaps xmm6, xmm2
    vcomiss xmm2, xmm7
  }
  if ( (unsigned __int64)&v68 != _security_cookie )
  {
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+0A8h+var_70], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0A8h+var_78], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+0A8h+var_80], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 114, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( t ) && ( t ) <= ( 1.0f )", "t not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v69, v70, v71) )
      __debugbreak();
  }
  if ( absFrame == mayhemAnim->numFrames )
  {
    __asm { vmovaps xmm8, xmm7 }
  }
  else
  {
    R_Mayhem_FindFrame(frameIndices + 1, &frameIndices[numFrames - 1], absFrame);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm7, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, xmm1
      vsubss  xmm3, xmm6, xmm2
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm1
      vsubss  xmm2, xmm1, xmm2
      vdivss  xmm8, xmm3, xmm2
    }
  }
  __asm
  {
    vmovups xmm5, cs:__xmm@40400000404000004040000040400000
    vmulss  xmm2, xmm8, xmm8
    vmovaps xmm0, xmm2
    vshufps xmm0, xmm0, xmm0, 0
    vmulss  xmm2, xmm2, xmm8
    vshufps xmm2, xmm2, xmm2, 0
    vsubss  xmm7, xmm7, xmm8
    vshufps xmm7, xmm7, xmm7, 0
    vmulps  xmm0, xmm0, xmm7
    vmulps  xmm6, xmm7, xmm7
    vmulps  xmm1, xmm5, xmmword ptr [r15+rcx*8-10h]
    vmulps  xmm3, xmm1, xmm0
    vmulps  xmm0, xmm2, xmmword ptr [r15+rcx*8]
    vmulps  xmm1, xmm5, xmmword ptr [r15+rcx*8-20h]
    vaddps  xmm4, xmm3, xmm0
    vmovaps xmm0, xmm8
    vshufps xmm0, xmm0, xmm0, 0
    vmulps  xmm0, xmm0, xmm6
    vmulps  xmm1, xmm1, xmm0
    vaddps  xmm2, xmm4, xmm1
    vmulps  xmm0, xmm6, xmm7
    vmulps  xmm1, xmm0, xmmword ptr [r15+rcx*8-30h]
    vaddps  xmm3, xmm2, xmm1
    vmulps  xmm0, xmm3, xmm3
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vsqrtps xmm1, xmm0
    vdivps  xmm2, xmm3, xmm1
    vmovss  [rsp+0A8h+var_68], xmm2
  }
  v61 = v72 & 0x7F800000;
  __asm { vmovups xmmword ptr [rbx], xmm2 }
  if ( v61 == 2139095040 )
    goto LABEL_16;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (v72 & 0x7F800000) == 2139095040 )
    goto LABEL_16;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (v72 & 0x7F800000) == 2139095040 )
    goto LABEL_16;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (v72 & 0x7F800000) == 2139095040 )
  {
LABEL_16:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 145, ASSERT_TYPE_SANITY, "( !IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[0] ) && !IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[1] ) && !IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[2] ) && !IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[0] ) && !IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[1] ) && !IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[2] ) && !IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[3] )") )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_48]
    vmovaps xmm8, [rsp+0A8h+var_58]
  }
}

/*
==============
RB_MayhemSelfVis_UpdateAnimBuffer
==============
*/
void RB_MayhemSelfVis_UpdateAnimBuffer(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  GfxWorld *world; 
  MayhemSelfVisFrameData *v4; 
  int selfVisAnimDataCount; 
  GfxShaderBufferView *views; 
  GfxShaderBufferRWView *p_rwView; 
  int dataa[4]; 

  world = rgp.world;
  if ( rgp.world )
  {
    if ( rgp.world->mayhemSelfVis.selfVisBufferSize )
    {
      v4 = &s_mayhemGlob.frameData[data->smpFrame];
      if ( v4->selfVisAnimDataCount > 0 )
      {
        R_ProfBeginNamedEvent(state, "Mayhem SelfVis");
        R_GPU_BeginTimer(GPU_TIMER_MAYHEM_SELFVIS);
        selfVisAnimDataCount = 256;
        if ( v4->selfVisAnimDataCount < 256 )
          selfVisAnimDataCount = v4->selfVisAnimDataCount;
        R_UpdateGfxWrappedBuffer(&s_mayhemGlob.selfVisAnimBuffer, v4, 4 * selfVisAnimDataCount);
        R_HW_AddResourceTransition(state, &world->mayhemSelfVis.selfVisBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(state);
        dataa[0] = selfVisAnimDataCount;
        R_UploadAndSetComputeConstants(state, 0, dataa, 0x10u, NULL);
        R_SetComputeShader(state, rgp.mayhemSelfVis);
        views = &s_mayhemGlob.selfVisAnimBuffer.view;
        R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
        p_rwView = &world->mayhemSelfVis.selfVisBuffer.rwView;
        R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
        R_Dispatch(state, (unsigned int)(selfVisAnimDataCount + 63) >> 6, 1u, 1u);
        R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
        R_HW_AddResourceTransition(state, &world->mayhemSelfVis.selfVisBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(state);
        R_GPU_EndTimer();
        R_ProfEndNamedEvent(state);
      }
    }
  }
}

/*
==============
R_AddMayhemChannelsComputeCmds
==============
*/
char R_AddMayhemChannelsComputeCmds(ComputeCmdList *cmdList, unsigned int numMayhemChannelVerts, unsigned __int8 *modelSurfs, unsigned int surfBufSize, unsigned __int16 surfaceCount, int objBufIndex)
{
  unsigned int v8; 
  GfxVertexBufferState *mayhemChannelsVb; 
  signed __int32 v10; 
  int *v12; 
  unsigned __int8 *v13; 
  unsigned int v14; 
  int v15; 
  unsigned __int8 *v16; 
  __int64 v17; 
  unsigned int v18; 
  int v19; 
  int *v20; 
  char v21; 
  __int64 v22; 
  __int64 v23; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 862, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( !frontEndDataOut->mayhemChannelsVb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 863, ASSERT_TYPE_ASSERT, "(frontEndDataOut->mayhemChannelsVb)", (const char *)&queryFormat, "frontEndDataOut->mayhemChannelsVb") )
    __debugbreak();
  v8 = 16 * numMayhemChannelVerts;
  mayhemChannelsVb = frontEndDataOut->mayhemChannelsVb;
  if ( ((unsigned __int8)mayhemChannelsVb & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", frontEndDataOut->mayhemChannelsVb) )
    __debugbreak();
  v10 = _InterlockedExchangeAdd(&mayhemChannelsVb->used, v8);
  if ( (signed __int32)(v10 + v8) <= mayhemChannelsVb->total )
  {
    Sys_EnterCriticalSection(CRITSECT_ADD_MAYHEM_COMPUTE_CMDS);
    v12 = NULL;
    v13 = modelSurfs;
    v14 = 0;
    if ( surfaceCount )
    {
      do
      {
        v15 = *(_DWORD *)v13;
        v16 = v13;
        if ( *(_DWORD *)v13 == -3 )
        {
          v13 += 4;
        }
        else
        {
          v17 = *((_QWORD *)v13 + 7);
          if ( v15 > -4 )
          {
            v13 += 136;
          }
          else
          {
            v18 = -3 - v15;
            if ( -3 - v15 > 128 )
            {
              LODWORD(v23) = 128;
              LODWORD(v22) = -3 - v15;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", v22, v23) )
                __debugbreak();
            }
            v13 += 32 * v18 + 76;
          }
          v19 = *((_DWORD *)v16 + 1);
          if ( v19 != -1 )
          {
            *((_DWORD *)v16 + 1) = v10 + 16 * v19;
            if ( !*(_QWORD *)(v17 + 176) )
            {
              v20 = (int *)R_AllocComputeCmdDataAligned(cmdList, 24, 8u);
              v12 = v20;
              if ( !v20 || (*((_QWORD *)v20 + 2) = v17, v20[1] = *((_DWORD *)v16 + 1), *v20 = -1, v20[2] = *((unsigned __int16 *)v16 + 20), !R_AddComputeCmd(cmdList, COMPUTECMD_MAYHEM_CHANNELS, v20)) )
              {
                v21 = 0;
                goto LABEL_32;
              }
            }
          }
        }
        ++v14;
      }
      while ( v14 < surfaceCount );
      if ( v12 )
        *v12 = objBufIndex;
    }
    if ( v13 - modelSurfs != surfBufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 852, ASSERT_TYPE_ASSERT, "(surfs - modelSurfs == surfBufSize)", (const char *)&queryFormat, "surfs - modelSurfs == surfBufSize") )
      __debugbreak();
    v21 = 1;
LABEL_32:
    Sys_LeaveCriticalSection(CRITSECT_ADD_MAYHEM_COMPUTE_CMDS);
    return v21;
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_MAYHEM_CHANNELS_VERTEX_BUFFER);
    return 0;
  }
}

/*
==============
R_ExecuteMayhemChannelsComputeCmds
==============
*/
void R_ExecuteMayhemChannelsComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *cmd)
{
  _QWORD *ComputeCmdData; 
  __int64 v8; 
  unsigned int v9; 
  ComputeShader *mayhemChannelsSkinnedComputeShader; 
  _DWORD *bufferData; 
  __int64 v14; 
  __int64 v15; 
  GfxShaderBufferView *views; 
  GfxConstantBufferDesc cbDesc; 
  GfxConstantBufferDesc result; 
  int data[4]; 

  do
  {
    ComputeCmdData = R_GetComputeCmdData(list, cmd);
    v8 = ComputeCmdData[2];
    if ( *(int *)ComputeCmdData >= 0 )
      R_Mayhem_SetCustomDataChannels(*(_DWORD *)ComputeCmdData, cmdBufState, 0);
    data[1] = *((_DWORD *)ComputeCmdData + 2);
    data[2] = *((_DWORD *)ComputeCmdData + 1);
    data[3] = R_UOB_GetBlendInfoVPageStart(*(_WORD *)(v8 + 10));
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
      views = &gfxBuf.unifiedOptBuffer.view;
      R_SetComputeViews(cmdBufState, 1, 1, (const GfxShaderBufferView *const *)&views);
      views = &gfxBuf.uobVirtPageTableBuffer.view;
      R_SetComputeViews(cmdBufState, 2, 1, (const GfxShaderBufferView *const *)&views);
      v9 = *(unsigned __int16 *)(v8 + 2);
      mayhemChannelsSkinnedComputeShader = rgp.mayhemChannelsSkinnedComputeShader;
      data[0] = v9;
    }
    else
    {
      v9 = *(unsigned __int8 *)(v8 + 8);
      data[0] = v9;
      _RAX = R_BeginComputeConstants(&result, cmdBufState, 1, 4 * v9);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rsp+0A8h+cbDesc.bufferData], xmm0
      }
      if ( v9 )
      {
        bufferData = cbDesc.bufferData;
        v14 = 0i64;
        v15 = v9;
        do
        {
          ++bufferData;
          v14 += 8i64;
          *(bufferData - 1) = *((_DWORD *)ComputeCmdData + 2) + *(unsigned __int16 *)(*(_QWORD *)(v8 + 88) + v14 - 8);
          --v15;
        }
        while ( v15 );
      }
      R_EndComputeConstants(cmdBufState, &cbDesc);
      mayhemChannelsSkinnedComputeShader = rgp.mayhemChannelsRigidComputeShader;
    }
    R_SetComputeShader(cmdBufState, mayhemChannelsSkinnedComputeShader);
    R_UploadAndSetComputeConstants(cmdBufState, 0, data, 0x10u, NULL);
    views = (GfxShaderBufferView *)&cmdBufState->data->mayhemChannelsVb->wrappedBuffer.rwView;
    R_SetComputeRWViewsWithCounters(cmdBufState, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    R_Dispatch(cmdBufState, (v9 + 63) >> 6, 1u, 1u);
    cmd = R_NextComputeCmdOfSameType(list, cmd);
  }
  while ( cmd );
}

/*
==============
R_InitMayhemChannelsConstantBuffers
==============
*/
void R_InitMayhemChannelsConstantBuffers(void)
{
  ;
}

/*
==============
R_MayhemSelfVis_GetPerModelData
==============
*/
char R_MayhemSelfVis_GetPerModelData(const GfxBackEndData *data, const GfxSceneEntity *sceneEnt, const DObj *obj, const XModel *model, const MayhemSelfVisChannel **outChannel, unsigned int *outAnimDataIndex)
{
  volatile signed __int32 *p_selfVisAnimDataCount; 
  unsigned int v17; 
  char v25; 
  bool v26; 
  MayhemSelfVisChannel *p_selfVisChannel; 
  double v46; 
  double v47; 
  double v48; 
  MayhemAnimInfo outAnimInfo; 

  if ( (model->flags & 0x8000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 1038, ASSERT_TYPE_ASSERT, "(model->flags & XMODEL_FLAG_HAS_MAYHEM_SELFVIS)", (const char *)&queryFormat, "model->flags & XMODEL_FLAG_HAS_MAYHEM_SELFVIS") )
    __debugbreak();
  if ( !Mayhem_GetAnimInfo(sceneEnt->info.pose->mayhemInstanceId, obj, model, &outAnimInfo) )
    return 0;
  _RSI = &s_mayhemGlob.frameData[data->smpFrame];
  p_selfVisAnimDataCount = &_RSI->selfVisAnimDataCount;
  if ( ((unsigned __int8)_RSI & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &_RSI->selfVisAnimDataCount) )
    __debugbreak();
  v17 = _InterlockedExchangeAdd(p_selfVisAnimDataCount, 1u);
  if ( v17 >= 0x100 )
  {
    R_WarnOncePerFrame(R_WARN_TOO_MANY_MAYHEM_SELFVIS_ANIM_DATA, *(unsigned int *)p_selfVisAnimDataCount);
    return 0;
  }
  _RAX = outAnimInfo.anim;
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovss  xmm7, cs:__real@3f800000
  }
  v26 = !outAnimInfo.anim->isLooping;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+14h]
    vmulss  xmm0, xmm0, [rsp+88h+outAnimInfo.curTime]; X
    vmovaps [rsp+88h+var_38], xmm8
    vxorps  xmm8, xmm8, xmm8
  }
  if ( v26 )
  {
    __asm
    {
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  else
  {
    __asm { vmovaps xmm1, xmm7; Y }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  }
  __asm
  {
    vcomiss xmm0, xmm8
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm6, xmm0
  }
  if ( v25 )
    goto LABEL_16;
  __asm { vcomiss xmm0, xmm7 }
  if ( !(v25 | v26) )
  {
LABEL_16:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+88h+var_50], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+88h+var_58], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+88h+var_60], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 1049, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( normalizedAnimTime ) && ( normalizedAnimTime ) <= ( 1.0f )", "normalizedAnimTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v46, v47, v48) )
      __debugbreak();
  }
  p_selfVisChannel = &outAnimInfo.anim->selfVisChannel;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm0, xmm0, rcx
    vsubss  xmm3, xmm0, xmm7
    vmovaps xmm7, [rsp+88h+var_28]
    vmulss  xmm1, xmm3, xmm6
    vroundss xmm2, xmm2, xmm1, 1
    vcvttss2si rax, xmm2
  }
  _RAX = v17;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vdivss  xmm1, xmm0, xmm3
    vsubss  xmm2, xmm6, xmm1
    vmovaps xmm6, [rsp+88h+var_18]
    vmulss  xmm3, xmm2, xmm3
    vmovss  dword ptr [rsi+rax*4], xmm3
  }
  *outChannel = p_selfVisChannel;
  *outAnimDataIndex = v17;
  return 1;
}

/*
==============
R_MayhemSelfVis_Init
==============
*/
void R_MayhemSelfVis_Init(void)
{
  R_CreateGfxWrappedBuffer(&s_mayhemGlob.selfVisAnimBuffer, GfxWrappedBuffer_Structured, 4, 0x100u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "mayhem selfvis anim buffer");
}

/*
==============
R_MayhemSelfVis_Shutdown
==============
*/
void R_MayhemSelfVis_Shutdown(void)
{
  R_ShutdownGfxWrappedBuffer(&s_mayhemGlob.selfVisAnimBuffer);
}

/*
==============
R_MayhemSelfVis_ShutdownWorld
==============
*/
void R_MayhemSelfVis_ShutdownWorld(GfxWorld *world)
{
  if ( world->mayhemSelfVis.selfVisBuffer.data )
    R_ShutdownGfxWrappedBuffer(&world->mayhemSelfVis.selfVisBuffer);
}

/*
==============
R_MayhemSelfVis_ToggleSmpFrame
==============
*/
void R_MayhemSelfVis_ToggleSmpFrame(unsigned int smpFrame)
{
  s_mayhemGlob.frameData[smpFrame].selfVisAnimDataCount = 0;
}

/*
==============
R_Mayhem_BeginSetupDataChannelBuffer
==============
*/
unsigned __int8 *R_Mayhem_BeginSetupDataChannelBuffer(ComputeCmdBufState *state, int elemSize, int elemCount, int *dstElemOffset)
{
  GfxComputeBufferState *mayhemChannelsBuffer; 
  unsigned int v8; 
  int v9; 
  char *fmt; 
  __int64 v12; 

  mayhemChannelsBuffer = state->data->mayhemChannelsBuffer;
  if ( elemCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 502, ASSERT_TYPE_ASSERT, "( ( elemCount > 0 ) )", "( elemCount ) = %i", elemCount) )
    __debugbreak();
  if ( elemSize <= 0 )
  {
    LODWORD(v12) = elemSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 503, ASSERT_TYPE_ASSERT, "( ( elemSize > 0 ) )", "( elemSize ) = %i", v12) )
      __debugbreak();
  }
  v8 = (elemCount * elemSize + 63) & 0xFFFFFFC0;
  if ( ((unsigned __int8)mayhemChannelsBuffer & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", mayhemChannelsBuffer) )
    __debugbreak();
  v9 = _InterlockedExchangeAdd(&mayhemChannelsBuffer->used, v8);
  if ( (signed int)(v9 + v8) > mayhemChannelsBuffer->total )
  {
    LODWORD(fmt) = mayhemChannelsBuffer->total;
    Com_PrintWarning(19, "Failed to allocate Mayhem channel buffer, request = %d, used = %d/%d.\n", v8, (unsigned int)mayhemChannelsBuffer->used, fmt);
    v9 = 0;
  }
  *dstElemOffset = v9;
  return (unsigned __int8 *)R_BeginWrappedBufferDataWrite(&mayhemChannelsBuffer->wrappedBuffer) + *dstElemOffset;
}

/*
==============
R_Mayhem_FindFrame
==============
*/
__int64 R_Mayhem_FindFrame(const unsigned __int16 *beginFrame, const unsigned __int16 *endFrame, unsigned __int16 tFrame)
{
  __int64 v3; 
  const unsigned __int16 *v4; 
  __int64 v5; 

  v3 = endFrame - beginFrame;
  v4 = beginFrame;
  while ( v3 > 0 )
  {
    if ( v4[v3 >> 1] >= tFrame )
    {
      v3 >>= 1;
    }
    else
    {
      v4 += (v3 >> 1) + 1;
      v3 += -1 - (v3 >> 1);
    }
  }
  v5 = v4 - beginFrame;
  if ( (v5 < 0 || (unsigned __int64)v5 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,__int64>(__int64)", "unsigned", (unsigned __int16)v5, "signed", v5) )
    __debugbreak();
  return (unsigned __int16)v5;
}

/*
==============
R_Mayhem_ProcessAnim
==============
*/
void R_Mayhem_ProcessAnim(const MayhemAnim *mayhemAnim, float t, DObjAnimMat *skel, const vec3_t *placementPos, const vec4_t *placementQuat)
{
  bool quantizeTrans; 

  if ( mayhemAnim->isSplineCompressed )
  {
    quantizeTrans = mayhemAnim->quantizeTrans;
    if ( mayhemAnim->quantizeQuats )
    {
      if ( quantizeTrans )
        R_Mayhem_ProcessSplineCompressedAnim_base_vec4_t_short__unsigned_short__3__(mayhemAnim, t, skel, placementPos, placementQuat);
      else
        R_Mayhem_ProcessSplineCompressedAnim_base_vec4_t_short__vec3_t_(mayhemAnim, t, skel, placementPos, placementQuat);
    }
    else if ( quantizeTrans )
    {
      R_Mayhem_ProcessSplineCompressedAnim_float4_unsigned_short__3__(mayhemAnim, t, skel, placementPos, placementQuat);
    }
    else
    {
      R_Mayhem_ProcessSplineCompressedAnim_float4_vec3_t_(mayhemAnim, t, skel, placementPos, placementQuat);
    }
  }
  else
  {
    R_Mayhem_ProcessUncompressedAnim(mayhemAnim, t, skel, placementPos, placementQuat);
  }
}

/*
==============
R_Mayhem_ProcessUncompressedAnim
==============
*/

void __fastcall R_Mayhem_ProcessUncompressedAnim(const MayhemAnim *mayhemAnim, double t, DObjAnimMat *skel, const vec3_t *placementPos, const vec4_t *placementQuat)
{
  DObjAnimMat *v17; 
  bool v23; 
  bool v24; 
  unsigned int numFrames; 
  __int64 v30; 
  unsigned int v36; 
  unsigned int v38; 
  unsigned int numBones; 
  unsigned int v44; 
  unsigned int v50; 
  MayhemAnimFramesSplineCompressed *splineCompressedFrames; 
  __int64 v70; 
  __int64 v146; 
  double v213; 
  double v214; 
  double v215; 
  vec3_t in; 
  vec3_t out; 
  __int128 v230; 
  __int128 v231; 
  __int128 v232; 
  char v240; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  v17 = skel;
  __asm
  {
    vmulss  xmm0, xmm1, dword ptr [rcx+14h]; X
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm10, xmm10, xmm10
  }
  if ( mayhemAnim->isLooping )
  {
    __asm { vmovaps xmm1, xmm7; Y }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  }
  else
  {
    __asm
    {
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  __asm
  {
    vcomiss xmm0, xmm10
    vmovaps xmm6, xmm0
  }
  if ( v23 )
    goto LABEL_31;
  __asm { vcomiss xmm0, xmm7 }
  if ( !v23 && !v24 )
  {
LABEL_31:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+1E0h+var_1A8], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+1E0h+var_1B0], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+1E0h+var_1B8], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 419, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( t ) && ( t ) <= ( 1.0f )", "t not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v213, v214, v215) )
      __debugbreak();
  }
  numFrames = mayhemAnim->numFrames;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm1, xmm1, xmm1
  }
  v30 = 0i64;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm3, xmm0, xmm6
    vroundss xmm2, xmm2, xmm3, 1
    vcvttss2si rax, xmm2
    vroundss xmm1, xmm1, xmm3, 2
  }
  v36 = (unsigned int)_RAX % numFrames;
  __asm { vcvttss2si rax, xmm1 }
  v38 = (unsigned int)_RAX % numFrames;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r13
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, r8
  }
  numBones = mayhemAnim->numBones;
  v44 = v38;
  __asm
  {
    vdivss  xmm1, xmm0, xmm3
    vsubss  xmm2, xmm6, xmm1
    vmulss  xmm4, xmm2, xmm3
    vmovaps xmm0, xmm4
    vshufps xmm0, xmm0, xmm0, 0
    vmovss  dword ptr [rsp+1E0h+var_1A0], xmm4
    vmovups [rbp+0E0h+var_150], xmm0
  }
  if ( numBones )
  {
    __asm { vmovaps xmmword ptr [rsp+1E0h+var_68+8], xmm8 }
    v50 = numBones;
    __asm
    {
      vmovaps [rsp+1E0h+var_78+8], xmm9
      vmovaps xmmword ptr [rsp+1E0h+var_98+8], xmm11
      vmovaps [rsp+1E0h+var_A8+8], xmm12
      vmovaps [rsp+1E0h+var_B8+8], xmm13
      vmovaps [rsp+1E0h+var_C8+8], xmm14
      vmovaps [rsp+1E0h+var_D8+8], xmm15
    }
    do
    {
      splineCompressedFrames = mayhemAnim->frames.splineCompressedFrames;
      if ( mayhemAnim->quantizeTrans )
      {
        _RAX = splineCompressedFrames->diskQuatFrames;
        _RCX = 3 * v30;
        HIDWORD(v230) = 0;
        __asm
        {
          vmovups xmm6, xmmword ptr [rbp-30h]
          vmovss  xmm0, dword ptr [rax+rcx*8]
          vmovss  xmm1, dword ptr [rax+rcx*8+10h]
          vmovss  xmm2, dword ptr [rax+rcx*8+14h]
          vmovss  xmm6, xmm6, xmm0
          vmovss  xmm0, dword ptr [rax+rcx*8+0Ch]
          vinsertps xmm6, xmm6, dword ptr [rax+rcx*8+4], 10h
          vinsertps xmm6, xmm6, dword ptr [rax+rcx*8+8], 20h ; ' '
        }
        _RCX = splineCompressedFrames->diskPos;
        HIDWORD(v231) = 0;
        __asm
        {
          vmovups xmm5, xmmword ptr [rbp-20h]
          vmovss  xmm5, xmm5, xmm0
          vinsertps xmm5, xmm5, xmm1, 10h
          vinsertps xmm5, xmm5, xmm2, 20h ; ' '
          vpxor   xmm3, xmm3, xmm3
          vmovups xmmword ptr [rbp-30h], xmm6
          vmovups xmmword ptr [rbp-20h], xmm5
        }
        _RAX = (unsigned int)v30 + v36 * numBones;
        _RDX = (unsigned int)_RAX;
        v70 = (unsigned int)v30 + v44 * numBones;
        _RAX *= 3i64;
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rcx+rax*2]
          vpunpcklwd xmm1, xmm0, xmm3
          vcvtdq2ps xmm2, xmm1
          vinsertps xmm4, xmm2, xmm2, 8
        }
        _RAX = 3 * v70;
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rcx+rax*2]
          vpunpcklwd xmm1, xmm0, xmm3
          vcvtdq2ps xmm2, xmm1
          vmulps  xmm0, xmm5, xmm4
          vaddps  xmm8, xmm0, xmm6
          vshufps xmm0, xmm8, xmm8, 55h ; 'U'
          vmovups [rsp+1E0h+var_188+8], xmm0
          vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
          vmovups [rbp+0E0h+var_160], xmm0
          vinsertps xmm3, xmm2, xmm2, 8
          vmulps  xmm1, xmm5, xmm3
          vaddps  xmm1, xmm1, xmm6
          vshufps xmm0, xmm1, xmm1, 55h ; 'U'
          vmovups [rsp+1E0h+var_178+8], xmm0
          vshufps xmm0, xmm1, xmm1, 0AAh ; 'ª'
          vmovups [rsp+1E0h+var_198+8], xmm1
        }
      }
      else
      {
        _RCX = splineCompressedFrames->diskPos;
        _RAX = (unsigned int)v30 + v36 * numBones;
        _RDX = (unsigned int)_RAX;
        v70 = (unsigned int)v30 + v44 * numBones;
        _RAX *= 3i64;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rax*4+4]
          vmovss  xmm8, dword ptr [rcx+rax*4]
          vmovups [rsp+1E0h+var_188+8], xmm0
          vmovss  xmm0, dword ptr [rcx+rax*4+8]
        }
        _RAX = 3 * v70;
        __asm
        {
          vmovups [rbp+0E0h+var_160], xmm0
          vmovss  xmm0, dword ptr [rcx+rax*4]
          vmovups [rsp+1E0h+var_198+8], xmm0
          vmovss  xmm0, dword ptr [rcx+rax*4+4]
          vmovups [rsp+1E0h+var_178+8], xmm0
          vmovss  xmm0, dword ptr [rcx+rax*4+8]
        }
      }
      v24 = !mayhemAnim->quantizeQuats;
      _RAX = splineCompressedFrames->diskQuat;
      __asm { vmovups [rbp+0E0h+var_F0], xmm0 }
      _R11 = (unsigned int)v70;
      if ( v24 )
      {
        _RDX = &_RAX[16 * _RDX];
        __asm
        {
          vmovss  xmm12, dword ptr [rdx]
          vmovss  xmm11, dword ptr [rdx+4]
          vmovss  xmm10, dword ptr [rdx+8]
          vmovss  xmm9, dword ptr [rdx+0Ch]
        }
        _RAX = (__int64)&splineCompressedFrames->diskQuat[16 * (unsigned int)v30 + 16 * v44 * v50];
        __asm
        {
          vmovaps xmm7, xmm12
          vinsertps xmm7, xmm7, xmm11, 10h
          vinsertps xmm7, xmm7, xmm10, 20h ; ' '
          vmovss  xmm0, dword ptr [rax]
          vmovss  xmm15, dword ptr [rax+4]
          vmovss  xmm14, dword ptr [rax+8]
          vmovss  xmm13, dword ptr [rax+0Ch]
          vmovaps xmm6, xmm0
          vinsertps xmm6, xmm6, xmm15, 10h
          vinsertps xmm6, xmm6, xmm14, 20h ; ' '
          vinsertps xmm7, xmm7, xmm9, 30h ; '0'
          vinsertps xmm6, xmm6, xmm13, 30h ; '0'
          vmovups [rbp+0E0h+var_140], xmm7
          vmovups [rbp+0E0h+var_140], xmm6
          vmovss  dword ptr [rsp+1E0h+var_1A0+4], xmm0
          vmovaps xmm3, xmm0
        }
      }
      else
      {
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rax+rdx*8]
          vpmovsxwd xmm1, xmm0
          vlddqu  xmm0, xmmword ptr [rax+r11*8]
          vcvtdq2ps xmm3, xmm1
          vmulps  xmm7, xmm3, cs:__xmm@38000100380001003800010038000100
          vmovups [rbp+0E0h+var_140], xmm7
          vmovss  xmm10, dword ptr [rbp+0E0h+var_140+8]
          vmovss  xmm11, dword ptr [rbp+0E0h+var_140+4]
          vmovss  xmm12, dword ptr [rbp+0E0h+var_140]
          vpmovsxwd xmm1, xmm0
          vcvtdq2ps xmm2, xmm1
          vmulps  xmm6, xmm2, cs:__xmm@38000100380001003800010038000100
          vmovups [rbp+0E0h+var_140], xmm6
          vmovss  xmm14, dword ptr [rbp+0E0h+var_140+8]
          vmovss  xmm15, dword ptr [rbp+0E0h+var_140+4]
          vmovss  xmm3, dword ptr [rbp+0E0h+var_140]
          vshufps xmm9, xmm7, xmm7, 0FFh
          vshufps xmm13, xmm6, xmm6, 0FFh
        }
      }
      __asm
      {
        vmovups xmm4, [rsp+1E0h+var_188+8]
        vmovups xmm0, [rsp+1E0h+var_198+8]
        vmovups xmm5, [rbp+0E0h+var_160]
        vsubss  xmm0, xmm0, xmm8
        vmulss  xmm1, xmm0, dword ptr [rsp+1E0h+var_1A0]
        vmovups xmm0, [rsp+1E0h+var_178+8]
        vsubss  xmm0, xmm0, xmm4
        vaddss  xmm2, xmm1, xmm8
        vmulss  xmm1, xmm0, dword ptr [rsp+1E0h+var_1A0]
        vmovups xmm0, [rbp+0E0h+var_F0]
        vsubss  xmm0, xmm0, xmm5
        vmovss  dword ptr [rbp+0E0h+in], xmm2
        vaddss  xmm2, xmm1, xmm4
        vmulss  xmm1, xmm0, dword ptr [rsp+1E0h+var_1A0]
        vmovss  dword ptr [rbp+0E0h+in+4], xmm2
        vaddss  xmm2, xmm1, xmm5
        vmulss  xmm3, xmm12, xmm3
        vmulss  xmm0, xmm11, xmm15
        vmulss  xmm1, xmm10, xmm14
      }
      v146 = (unsigned int)v30;
      v23 = __CFADD__(v146 * 32, v17);
      _RDI = &v17[v146];
      __asm
      {
        vmovss  dword ptr [rbp+0E0h+in+8], xmm2
        vaddss  xmm2, xmm3, xmm0
        vaddss  xmm4, xmm2, xmm1
        vmulss  xmm0, xmm9, xmm13
        vaddss  xmm3, xmm4, xmm0
        vxorps  xmm10, xmm10, xmm10
        vcomiss xmm3, xmm10
      }
      _RDI->transWeight = 2.0;
      if ( v23 )
      {
        __asm
        {
          vxorps  xmm6, xmm6, cs:__xmm@80000000800000008000000080000000
          vmovups [rbp+0E0h+var_140], xmm6
        }
      }
      QuatTransform(placementQuat, &in, &out);
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+0E0h+out+4]
        vsubps  xmm0, xmm6, xmm7
        vmulps  xmm1, xmm0, [rbp+0E0h+var_150]
        vmovss  xmm0, dword ptr [rbp+0E0h+out]
        vaddps  xmm6, xmm1, xmm7
        vaddss  xmm1, xmm0, dword ptr [r15]
        vmovss  dword ptr [rdi+10h], xmm1
        vaddss  xmm0, xmm2, dword ptr [r15+4]
        vmovss  xmm1, dword ptr [rbp+0E0h+out+8]
        vmovss  dword ptr [rdi+14h], xmm0
        vaddss  xmm2, xmm1, dword ptr [r15+8]
        vmulss  xmm0, xmm6, xmm6
        vmovss  dword ptr [rdi+18h], xmm2
        vshufps xmm7, xmm6, xmm6, 55h ; 'U'
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm2, xmm1, xmm0
        vshufps xmm8, xmm6, xmm6, 0AAh ; 'ª'
        vmulss  xmm0, xmm8, xmm8
        vaddss  xmm1, xmm2, xmm0
        vshufps xmm9, xmm6, xmm6, 0FFh
        vmulss  xmm0, xmm9, xmm9
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vucomiss xmm2, xmm10
      }
      if ( !v24 )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vdivss  xmm0, xmm0, xmm2
          vmulss  xmm6, xmm6, xmm0
          vmulss  xmm7, xmm7, xmm0
          vmulss  xmm8, xmm8, xmm0
          vmulss  xmm9, xmm9, xmm0
        }
      }
      if ( &v232 == (__int128 *)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      if ( placementQuat == (const vec4_t *)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
        __debugbreak();
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+0Ch]
        vmulss  xmm0, xmm9, dword ptr [rbx]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, dword ptr [rbx+4]
        vmulss  xmm0, xmm7, dword ptr [rbx+8]
        vaddss  xmm3, xmm2, xmm1
        vsubss  xmm1, xmm3, xmm0
        vmovss  dword ptr [rdi], xmm1
        vmulss  xmm2, xmm7, dword ptr [rbx+0Ch]
        vmulss  xmm0, xmm8, dword ptr [rbx]
        vmulss  xmm1, xmm9, dword ptr [rbx+4]
        vsubss  xmm3, xmm2, xmm0
        vmulss  xmm0, xmm6, dword ptr [rbx+8]
        vaddss  xmm4, xmm3, xmm1
        vaddss  xmm1, xmm4, xmm0
        vmovss  dword ptr [rdi+4], xmm1
        vmulss  xmm2, xmm8, dword ptr [rbx+0Ch]
        vmulss  xmm0, xmm7, dword ptr [rbx]
        vmulss  xmm1, xmm6, dword ptr [rbx+4]
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm0, xmm9, dword ptr [rbx+8]
        vsubss  xmm4, xmm3, xmm1
        vaddss  xmm1, xmm4, xmm0
        vmovss  dword ptr [rdi+8], xmm1
        vmulss  xmm0, xmm6, dword ptr [rbx]
        vmulss  xmm1, xmm7, dword ptr [rbx+4]
        vmulss  xmm2, xmm9, dword ptr [rbx+0Ch]
        vsubss  xmm3, xmm2, xmm0
        vmulss  xmm0, xmm8, dword ptr [rbx+8]
        vsubss  xmm4, xmm3, xmm1
        vsubss  xmm1, xmm4, xmm0
        vmovss  dword ptr [rdi+0Ch], xmm1
      }
      numBones = mayhemAnim->numBones;
      v30 = (unsigned int)(v30 + 1);
      v17 = skel;
      v50 = numBones;
    }
    while ( (unsigned int)v30 < numBones );
    __asm
    {
      vmovaps xmm15, [rsp+1E0h+var_D8+8]
      vmovaps xmm14, [rsp+1E0h+var_C8+8]
      vmovaps xmm13, [rsp+1E0h+var_B8+8]
      vmovaps xmm12, [rsp+1E0h+var_A8+8]
      vmovaps xmm11, xmmword ptr [rsp+1E0h+var_98+8]
      vmovaps xmm9, [rsp+1E0h+var_78+8]
      vmovaps xmm8, xmmword ptr [rsp+1E0h+var_68+8]
    }
  }
  _R11 = &v240;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
R_Mayhem_RegisterCustomDataChannels
==============
*/

void __fastcall R_Mayhem_RegisterCustomDataChannels(const MayhemAnim *mayhemAnim, const DObj *obj, double t, unsigned int elemOffset)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( mayhemAnim->dataChannelCount )
  {
    _RAX = Com_GetCustomDataChannelRecord(obj);
    __asm { vmovss  dword ptr [rax+10h], xmm6 }
    _RAX[2] = 0;
    *(_QWORD *)_RAX = mayhemAnim;
    _RAX[3] = elemOffset;
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
R_Mayhem_ReleaseAnimResources
==============
*/
void R_Mayhem_ReleaseAnimResources(MayhemAnim *mayhemAnims, unsigned int numAnims)
{
  __int64 v3; 
  MayhemFramesUnion v4; 
  GfxWrappedBaseBuffer *p_pos; 

  if ( numAnims )
  {
    v3 = numAnims;
    do
    {
      v4.splineCompressedFrames = (MayhemAnimFramesSplineCompressed *)mayhemAnims->frames;
      if ( mayhemAnims->isSplineCompressed )
      {
        R_ShutdownGfxWrappedBuffer(&v4.splineCompressedFrames->quat);
        p_pos = &mayhemAnims->frames.splineCompressedFrames->pos;
      }
      else
      {
        R_ShutdownGfxWrappedBuffer((GfxWrappedBaseBuffer *)&v4.splineCompressedFrames->diskPosFrames);
        p_pos = (GfxWrappedBaseBuffer *)&mayhemAnims->frames.splineCompressedFrames->transBounds;
      }
      R_ShutdownGfxWrappedBuffer(p_pos);
      ++mayhemAnims;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
R_Mayhem_SetCustomDataChannels
==============
*/
void R_Mayhem_SetCustomDataChannels(int objBufIndex, ComputeCmdBufState *state, int startIndex)
{
  int v7; 
  ComputeCmdBufState *v8; 
  int v9; 
  DObjCustomDataChannelRecord *v11; 
  const MayhemAnim *v12; 
  char v18; 
  bool v19; 
  __int64 v26; 
  __int64 v27; 
  MayhemDataChannelsUnion v28; 
  int numStreams; 
  unsigned int userUint; 
  unsigned __int16 v33; 
  unsigned __int16 *numKeys; 
  unsigned __int16 *keyFrames; 
  const base_vec4_t<short> *v36; 
  __int64 v37; 
  GfxComputeBufferState *mayhemChannelsBuffer; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned __int16 v44; 
  unsigned __int16 *v45; 
  unsigned __int16 *v46; 
  const vec4_t *v47; 
  __int64 v48; 
  ID3D12Resource *buffer; 
  const GfxShaderBufferView *p_view; 
  unsigned __int8 *data; 
  base_vec4_t<short> *keys; 
  base_vec4_t<short> *keysa; 
  float4 *frame; 
  double v58; 
  int dstElemOffset; 
  unsigned int bufferOffset; 
  int i; 
  const MayhemAnim **v62; 
  unsigned __int8 *v63; 
  GfxShaderBufferView *views; 

  v7 = startIndex;
  v8 = state;
  v9 = objBufIndex;
  _RAX = (const MayhemAnim **)Com_GetCustomDataChannelRecordFromIndex(objBufIndex);
  v11 = (DObjCustomDataChannelRecord *)_RAX;
  v62 = _RAX;
  v12 = *_RAX;
  if ( *_RAX )
  {
    v19 = v12->dataChannelCount == 0;
    __asm
    {
      vmovaps [rsp+0D8h+var_58], xmm6
      vmovss  xmm6, dword ptr [rax+10h]
      vmovaps [rsp+0D8h+var_78], xmm8
    }
    if ( v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 698, ASSERT_TYPE_ASSERT, "(mayhemAnim->dataChannelCount)", (const char *)&queryFormat, "mayhemAnim->dataChannelCount") )
      __debugbreak();
    v19 = !v12->isLooping;
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rsi+14h]; X
      vmovaps [rsp+0D8h+var_68], xmm7
      vmovss  xmm7, cs:__real@3f800000
      vxorps  xmm8, xmm8, xmm8
    }
    if ( v19 )
    {
      __asm
      {
        vmovaps xmm2, xmm7; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    }
    else
    {
      __asm { vmovaps xmm1, xmm7; Y }
      *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    }
    __asm
    {
      vcomiss xmm0, xmm8
      vmovaps xmm8, [rsp+0D8h+var_78]
      vmovaps xmm6, xmm0
    }
    if ( v18 )
      goto LABEL_37;
    __asm { vcomiss xmm0, xmm7 }
    if ( !(v18 | v19) )
    {
LABEL_37:
      __asm
      {
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovsd  [rsp+0D8h+var_A0], xmm0
        vxorpd  xmm1, xmm1, xmm1
        vmovsd  [rsp+0D8h+frame], xmm1
        vcvtss2sd xmm2, xmm6, xmm6
        vmovsd  [rsp+0D8h+keys], xmm2
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 700, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( t ) && ( t ) <= ( 1.0f )", "t not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&keysa, *(double *)&frame, v58) )
        __debugbreak();
    }
    __asm { vmovaps xmm7, [rsp+0D8h+var_68] }
    if ( v12->dataChannelCount != 1 )
    {
      LODWORD(keys) = v12->dataChannelCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 705, ASSERT_TYPE_ASSERT, "( ( mayhemAnim->dataChannelCount == 1 ) )", "( mayhemAnim->dataChannelCount ) = %i", keys) )
        __debugbreak();
    }
    v26 = 0i64;
    for ( i = 0; (unsigned int)v26 < v12->dataChannelCount; i = v26 )
    {
      if ( v12->isSplineCompressed )
      {
        v27 = v26;
        v28.splineCompressedKeys = (MayhemDataKeysSplineCompressed *)v12->dataChannels;
        numStreams = v28.splineCompressedKeys[v26].numStreams;
        if ( v12->quantizeChannels )
        {
          v63 = R_Mayhem_BeginSetupDataChannelBuffer(v8, 16, numStreams, &dstElemOffset);
          if ( ((unsigned __int8)v63 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 592, ASSERT_TYPE_ASSERT, "(( reinterpret_cast< uintptr_t >( bufStream ) & 0xf ) == 0)", (const char *)&queryFormat, "( reinterpret_cast< uintptr_t >( bufStream ) & 0xf ) == 0") )
            __debugbreak();
          userUint = v11->channel.userUint;
          __asm { vxorps  xmm0, xmm0, xmm0 }
          v11->channel.cacheOffset = dstElemOffset;
          __asm
          {
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm0, xmm0, xmm6; X
          }
          *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
          v33 = float_to_integral_cast<unsigned short,float>(*(float *)&_XMM0);
          numKeys = v28.splineCompressedKeys[v27].numKeys;
          keyFrames = v28.splineCompressedKeys[v27].keyFrames;
          v36 = (const base_vec4_t<short> *)v28.splineCompressedKeys[v27].keys;
          for ( LOWORD(views) = v33; userUint < v28.splineCompressedKeys[v27].numStreams; keyFrames += v37 )
          {
            v37 = *numKeys;
            __asm { vmovaps xmm2, xmm6; t }
            R_Mayhem_SplineDecompressVec4_base_vec4_t_short___(v12, *numKeys, *(float *)&_XMM2, v33, keyFrames, v36, (float4 *)&v63[16 * userUint++]);
            v36 += 3 * v37;
            v33 = (unsigned __int16)views;
            ++numKeys;
          }
          v8 = state;
          mayhemChannelsBuffer = state->data->mayhemChannelsBuffer;
          R_EndWrappedBufferDataWrite(&mayhemChannelsBuffer->wrappedBuffer);
          v40 = dstElemOffset;
        }
        else
        {
          v63 = R_Mayhem_BeginSetupDataChannelBuffer(v8, 16, numStreams, (int *)&bufferOffset);
          if ( ((unsigned __int8)v63 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 592, ASSERT_TYPE_ASSERT, "(( reinterpret_cast< uintptr_t >( bufStream ) & 0xf ) == 0)", (const char *)&queryFormat, "( reinterpret_cast< uintptr_t >( bufStream ) & 0xf ) == 0") )
            __debugbreak();
          v41 = v11->channel.userUint;
          __asm { vxorps  xmm0, xmm0, xmm0 }
          v11->channel.cacheOffset = bufferOffset;
          __asm
          {
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm0, xmm0, xmm6; X
          }
          *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
          v44 = float_to_integral_cast<unsigned short,float>(*(float *)&_XMM0);
          v45 = v28.splineCompressedKeys[v27].numKeys;
          v46 = v28.splineCompressedKeys[v27].keyFrames;
          v47 = (const vec4_t *)v28.splineCompressedKeys[v27].keys;
          for ( LOWORD(views) = v44; v41 < v28.splineCompressedKeys[v27].numStreams; v44 = (unsigned __int16)views )
          {
            v48 = *v45;
            __asm { vmovaps xmm2, xmm6; t }
            R_Mayhem_SplineDecompressVec4_vec4_t_(v12, *v45++, *(float *)&_XMM2, v44, v46, v47, (float4 *)&v63[16 * v41++]);
            v47 += 3 * v48;
            v46 += v48;
          }
          v8 = state;
          mayhemChannelsBuffer = state->data->mayhemChannelsBuffer;
          R_EndWrappedBufferDataWrite(&mayhemChannelsBuffer->wrappedBuffer);
          v40 = bufferOffset;
        }
        buffer = mayhemChannelsBuffer->wrappedBuffer.buffer;
        p_view = &mayhemChannelsBuffer->wrappedBuffer.view;
        data = (unsigned __int8 *)mayhemChannelsBuffer->wrappedBuffer.data;
        v7 = startIndex;
        R_SetComputeViewWithOffset(v8, startIndex, data, v40, 0x10u, p_view, buffer);
        v11 = (DObjCustomDataChannelRecord *)v62;
        v9 = objBufIndex;
      }
      else
      {
        __asm { vmovaps xmm3, xmm6; t }
        R_Mayhem_SetUncompressedCustomDataChannels(v12, v11, (const MayhemDataKeysUncompressed *)v12->dataChannels.splineCompressedKeys + (unsigned int)v26, *(float *)&_XMM3, v9, v8, v7);
      }
      v26 = (unsigned int)(i + 1);
    }
    __asm { vmovaps xmm6, [rsp+0D8h+var_58] }
  }
  else
  {
    views = &gfxBuf.dummyStructuredBuffer32.view;
    R_SetComputeViews(v8, v7, 1, (const GfxShaderBufferView *const *)&views);
  }
}

/*
==============
R_Mayhem_SetUncompressedCustomDataChannels
==============
*/

void __fastcall R_Mayhem_SetUncompressedCustomDataChannels(const MayhemAnim *mayhemAnim, DObjCustomDataChannelRecord *dobjChannelRecord, const MayhemDataKeysUncompressed *channel, double t, int objBufIndex, ComputeCmdBufState *state, int startIndex)
{
  unsigned int numFrames; 
  unsigned int v25; 
  unsigned __int8 *v33; 
  unsigned int userUint; 
  unsigned __int8 *v35; 
  int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v42; 
  __int64 v68; 
  GfxComputeBufferState *mayhemChannelsBuffer; 
  int dstElemOffset; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
  }
  numFrames = mayhemAnim->numFrames;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm0, xmm0, r9
    vmulss  xmm6, xmm0, xmm3
    vroundss xmm2, xmm2, xmm6, 1
    vcvttss2si rax, xmm2
    vmovaps xmm4, xmm3
  }
  v25 = (unsigned int)_RAX % numFrames;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rdi
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rbx
    vdivss  xmm1, xmm0, xmm3
    vsubss  xmm2, xmm4, xmm1
    vmulss  xmm7, xmm2, xmm3
  }
  v33 = R_Mayhem_BeginSetupDataChannelBuffer(state, 16, channel->numStreams, &dstElemOffset);
  userUint = dobjChannelRecord->channel.userUint;
  v35 = v33;
  v36 = dstElemOffset;
  dobjChannelRecord->channel.cacheOffset = dstElemOffset;
  v37 = mayhemAnim->numFrames * channel->keyStride;
  v38 = v25 * channel->keyStride;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm6, 2
    vcvttss2si rax, xmm1
  }
  v42 = channel->keyStride * ((unsigned int)_RAX % numFrames);
  if ( userUint < channel->numStreams )
  {
    __asm
    {
      vmovaps [rsp+0D8h+var_68], xmm8
      vmovaps [rsp+0D8h+var_78], xmm9
    }
    do
    {
      _R8 = &channel->keys[v42 + userUint * v37];
      _RDX = &channel->keys[v38 + userUint * v37];
      if ( mayhemAnim->quantizeChannels )
      {
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rdx]
          vpmovsxwd xmm1, xmm0
          vlddqu  xmm0, xmmword ptr [r8]
          vcvtdq2ps xmm3, xmm1
          vpmovsxwd xmm1, xmm0
          vmulps  xmm0, xmm3, cs:__xmm@38000100380001003800010038000100
          vmovups [rsp+0D8h+var_90], xmm0
          vmovss  xmm3, dword ptr [rsp+0D8h+var_90+8]
          vmovss  xmm4, dword ptr [rsp+0D8h+var_90+4]
          vcvtdq2ps xmm2, xmm1
          vmulps  xmm1, xmm2, cs:__xmm@38000100380001003800010038000100
          vmovss  xmm2, dword ptr [rsp+0D8h+var_90]
          vmovups [rsp+0D8h+var_90], xmm1
          vmovss  xmm8, dword ptr [rsp+0D8h+var_90+8]
          vmovss  xmm9, dword ptr [rsp+0D8h+var_90+4]
          vshufps xmm5, xmm0, xmm0, 0FFh
          vmovss  xmm0, dword ptr [rsp+0D8h+var_90]
          vshufps xmm6, xmm1, xmm1, 0FFh
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rdx]
          vmovss  xmm4, dword ptr [rdx+4]
          vmovss  xmm3, dword ptr [rdx+8]
          vmovss  xmm5, dword ptr [rdx+0Ch]
          vmovss  xmm0, dword ptr [r8]
          vmovss  xmm9, dword ptr [r8+4]
          vmovss  xmm8, dword ptr [r8+8]
          vmovss  xmm6, dword ptr [r8+0Ch]
        }
      }
      __asm
      {
        vsubss  xmm0, xmm0, xmm2
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm2, xmm1, xmm2
      }
      v68 = userUint++;
      _RAX = &v35[16 * v68];
      __asm
      {
        vsubss  xmm0, xmm9, xmm4
        vmulss  xmm1, xmm0, xmm7
        vsubss  xmm0, xmm8, xmm3
        vmovss  dword ptr [rax], xmm2
        vaddss  xmm2, xmm1, xmm4
        vmovss  dword ptr [rax+4], xmm2
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm2, xmm1, xmm3
        vmovss  dword ptr [rax+8], xmm2
        vsubss  xmm0, xmm6, xmm5
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm2, xmm1, xmm5
        vmovss  dword ptr [rax+0Ch], xmm2
      }
    }
    while ( userUint < channel->numStreams );
    __asm
    {
      vmovaps xmm9, [rsp+0D8h+var_78]
      vmovaps xmm8, [rsp+0D8h+var_68]
    }
  }
  mayhemChannelsBuffer = state->data->mayhemChannelsBuffer;
  R_EndWrappedBufferDataWrite(&mayhemChannelsBuffer->wrappedBuffer);
  R_SetComputeViewWithOffset(state, startIndex, (unsigned __int8 *)mayhemChannelsBuffer->wrappedBuffer.data, v36, 0x10u, &mayhemChannelsBuffer->wrappedBuffer.view, mayhemChannelsBuffer->wrappedBuffer.buffer);
  __asm
  {
    vmovaps xmm6, [rsp+0D8h+var_48]
    vmovaps xmm7, [rsp+0D8h+var_58]
  }
}

/*
==============
R_ShutdownMayhemChannelsConstantBuffers
==============
*/
void R_ShutdownMayhemChannelsConstantBuffers(void)
{
  ;
}

