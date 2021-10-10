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
void R_Mayhem_SplineDecompressPos<vec3_t>(const MayhemAnim *mayhemAnim, float4 *numFrames, float t, float4 *absFrame, const float4 *transMin, const float4 *transSize, unsigned __int16 *frameIndices, const vec3_t *posKeys, float4 *posFrame)
{
  float4 *v9; 
  unsigned __int16 v11; 
  int v12; 
  float v14; 
  unsigned __int16 v17; 
  __int64 v18; 
  float v19; 
  float v20; 
  __int128 v22; 
  __int128 v26; 
  __int128 v30; 
  __int128 v34; 
  float4 *fmt; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 

  v11 = (unsigned __int16)absFrame;
  v12 = (int)numFrames;
  v14 = FLOAT_1_0;
  if ( t < 0.0 || t > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 198, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( t ) && ( t ) <= ( 1.0f )", "t not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", t, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( v11 == mayhemAnim->numFrames )
  {
    v17 = v12 - 1;
  }
  else
  {
    v18 = (unsigned __int16)(R_Mayhem_FindFrame(frameIndices + 1, &frameIndices[v12 - 1], v11) + 1);
    v17 = v18;
    v19 = (float)(mayhemAnim->numFrames - 1);
    v20 = (float)frameIndices[v18 - 1] * (float)(1.0 / v19);
    v14 = (float)(t - v20) / (float)((float)((float)frameIndices[v18] * (float)(1.0 / v19)) - v20);
  }
  HIDWORD(v38) = 0;
  v22 = v38;
  *(float *)&v22 = posKeys[3 * v17 - 3].v[0];
  _XMM8 = v22;
  __asm
  {
    vinsertps xmm8, xmm8, xmm1, 10h
    vinsertps xmm8, xmm8, xmm2, 20h ; ' '
  }
  v39 = _XMM8;
  HIDWORD(v39) = 0;
  v26 = v39;
  *(float *)&v26 = posKeys[3 * v17 - 2].v[0];
  _XMM7 = v26;
  __asm
  {
    vinsertps xmm7, xmm7, xmm1, 10h
    vinsertps xmm7, xmm7, xmm2, 20h ; ' '
  }
  v40 = _XMM7;
  HIDWORD(v40) = 0;
  v30 = v40;
  *(float *)&v30 = posKeys[3 * v17 - 1].v[0];
  _XMM3 = v30;
  __asm
  {
    vinsertps xmm3, xmm3, xmm1, 10h
    vinsertps xmm3, xmm3, xmm2, 20h ; ' '
  }
  v41 = _XMM3;
  HIDWORD(v41) = 0;
  v34 = v41;
  *(float *)&v34 = posKeys[3 * v17].v[0];
  _XMM4 = v34;
  __asm
  {
    vinsertps xmm4, xmm4, xmm5, 10h
    vinsertps xmm4, xmm4, xmm6, 20h ; ' '
  }
  Float4EvalCubicBezierSpline(v14, numFrames, v9, absFrame, fmt, posFrame);
  if ( ((posFrame->v.m128_i32[0] & 0x7F800000) == 2139095040 || (posFrame->v.m128_i32[1] & 0x7F800000) == 2139095040 || (posFrame->v.m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 228, ASSERT_TYPE_SANITY, "( !IS_NAN( ( *reinterpret_cast< vec3_t * >( posFrame ) )[0] ) && !IS_NAN( ( *reinterpret_cast< vec3_t * >( posFrame ) )[1] ) && !IS_NAN( ( *reinterpret_cast< vec3_t * >( posFrame ) )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( *reinterpret_cast< vec3_t * >( posFrame ) )[0] ) && !IS_NAN( ( *reinterpret_cast< vec3_t * >( posFrame ) )[1] ) && !IS_NAN( ( *reinterpret_cast< vec3_t * >( posFrame ) )[2] )") )
    __debugbreak();
}

/*
==============
R_Mayhem_SplineDecompressQuat<float4>
==============
*/

void __fastcall R_Mayhem_SplineDecompressQuat<float4>(const MayhemAnim *mayhemAnim, unsigned int numFrames, double t, unsigned __int16 absFrame, unsigned __int16 *frameIndices, const float4 *quatKeys, float4 *quatFrame)
{
  __m128 v11; 
  unsigned __int16 v13; 
  __m128 v14; 
  __int64 v15; 
  float v16; 
  float v17; 
  __m128 v18; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  float4 v29; 

  v11 = *(__m128 *)&t;
  if ( *(float *)&t < 0.0 || *(float *)&t > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 114, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( t ) && ( t ) <= ( 1.0f )", "t not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&t, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( absFrame == mayhemAnim->numFrames )
  {
    v13 = numFrames - 1;
    v14 = (__m128)LODWORD(FLOAT_1_0);
  }
  else
  {
    v15 = (unsigned __int16)(R_Mayhem_FindFrame(frameIndices + 1, &frameIndices[numFrames - 1], absFrame) + 1);
    v13 = v15;
    v16 = (float)(mayhemAnim->numFrames - 1);
    v17 = (float)frameIndices[v15 - 1] * (float)(1.0 / v16);
    v18 = v11;
    v18.m128_f32[0] = (float)(v11.m128_f32[0] - v17) / (float)((float)((float)frameIndices[v15] * (float)(1.0 / v16)) - v17);
    v14 = v18;
  }
  v19 = v14;
  v19.m128_f32[0] = v14.m128_f32[0] * v14.m128_f32[0];
  v20 = _mm_shuffle_ps(v19, v19, 0);
  v19.m128_f32[0] = (float)(v14.m128_f32[0] * v14.m128_f32[0]) * v14.m128_f32[0];
  v21 = _mm_shuffle_ps(v19, v19, 0);
  v22 = (__m128)LODWORD(FLOAT_1_0);
  v22.m128_f32[0] = 1.0 - v14.m128_f32[0];
  v23 = _mm_shuffle_ps(v22, v22, 0);
  v24 = _mm128_mul_ps(v23, v23);
  v25 = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps((__m128)_xmm, quatKeys[3 * v13 - 1].v), _mm128_mul_ps(v20, v23)), _mm128_mul_ps(v21, quatKeys[3 * v13].v)), _mm128_mul_ps(_mm128_mul_ps((__m128)_xmm, quatKeys[3 * v13 - 2].v), _mm128_mul_ps(_mm_shuffle_ps(v14, v14, 0), v24))), _mm128_mul_ps(_mm128_mul_ps(v24, v23), quatKeys[3 * v13 - 3].v));
  _XMM0 = _mm128_mul_ps(v25, v25);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
  }
  v29.v = _mm128_div_ps(v25, _mm_sqrt_ps(_XMM0));
  *quatFrame = (float4)v29.v;
  if ( ((v29.v.m128_i32[0] & 0x7F800000) == 2139095040 || (quatFrame->v.m128_i32[1] & 0x7F800000) == 2139095040 || (quatFrame->v.m128_i32[2] & 0x7F800000) == 2139095040 || (quatFrame->v.m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 145, ASSERT_TYPE_SANITY, "( !IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[0] ) && !IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[1] ) && !IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[2] ) && !IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[0] ) && !IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[1] ) && !IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[2] ) && !IS_NAN( ( *reinterpret_cast< vec4_t * >( quatFrame ) )[3] )") )
    __debugbreak();
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
  __int64 v12; 
  __int64 v13; 
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
      cbDesc = *R_BeginComputeConstants(&result, cmdBufState, 1, 4 * v9);
      if ( v9 )
      {
        bufferData = cbDesc.bufferData;
        v12 = 0i64;
        v13 = v9;
        do
        {
          ++bufferData;
          v12 += 8i64;
          *(bufferData - 1) = *((_DWORD *)ComputeCmdData + 2) + *(unsigned __int16 *)(*(_QWORD *)(v8 + 88) + v12 - 8);
          --v13;
        }
        while ( v13 );
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
  __int128 v6; 
  MayhemSelfVisFrameData *v11; 
  volatile signed __int32 *p_selfVisAnimDataCount; 
  unsigned int v13; 
  bool v15; 
  float v16; 
  double v18; 
  float v19; 
  MayhemSelfVisChannel *p_selfVisChannel; 
  __int64 numFrames; 
  float v24; 
  float v26; 
  MayhemAnimInfo outAnimInfo; 
  __int128 v28; 

  if ( (model->flags & 0x8000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 1038, ASSERT_TYPE_ASSERT, "(model->flags & XMODEL_FLAG_HAS_MAYHEM_SELFVIS)", (const char *)&queryFormat, "model->flags & XMODEL_FLAG_HAS_MAYHEM_SELFVIS") )
    __debugbreak();
  if ( !Mayhem_GetAnimInfo(sceneEnt->info.pose->mayhemInstanceId, obj, model, &outAnimInfo) )
    return 0;
  v11 = &s_mayhemGlob.frameData[data->smpFrame];
  p_selfVisAnimDataCount = &v11->selfVisAnimDataCount;
  if ( ((unsigned __int8)v11 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v11->selfVisAnimDataCount) )
    __debugbreak();
  v13 = _InterlockedExchangeAdd(p_selfVisAnimDataCount, 1u);
  if ( v13 >= 0x100 )
  {
    R_WarnOncePerFrame(R_WARN_TOO_MANY_MAYHEM_SELFVIS_ANIM_DATA, *(unsigned int *)p_selfVisAnimDataCount);
    return 0;
  }
  v15 = !outAnimInfo.anim->isLooping;
  v16 = outAnimInfo.anim->frequency * outAnimInfo.curTime;
  v28 = v6;
  if ( v15 )
  {
    _XMM1 = 0i64;
    v18 = I_fclamp(v16, 0.0, 1.0);
  }
  else
  {
    _XMM1 = LODWORD(FLOAT_1_0);
    *(float *)&v18 = fmodf_0(v16, 1.0);
  }
  v19 = *(float *)&v18;
  if ( *(float *)&v18 < 0.0 || *(float *)&v18 > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 1049, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( normalizedAnimTime ) && ( normalizedAnimTime ) <= ( 1.0f )", "normalizedAnimTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&v18, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  p_selfVisChannel = &outAnimInfo.anim->selfVisChannel;
  _XMM2 = 0i64;
  numFrames = outAnimInfo.anim->selfVisChannel.numFrames;
  v24 = (float)numFrames;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  v26 = (float)((int)*(float *)&_XMM2 % (unsigned int)numFrames);
  v11->selfVisAnimData[v13].lerpValue = (float)(v19 - (float)(v26 / (float)(v24 - 1.0))) * (float)(v24 - 1.0);
  *outChannel = p_selfVisChannel;
  *outAnimDataIndex = v13;
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
  DObjAnimMat *v6; 
  __m128 v7; 
  __m128 v8; 
  __m128 v11; 
  __int64 numFrames; 
  __int64 v16; 
  __int64 v19; 
  unsigned int v20; 
  float v21; 
  __m128 v23; 
  unsigned int numBones; 
  unsigned int v25; 
  __m128 v26; 
  unsigned int v27; 
  MayhemAnimFramesSplineCompressed *splineCompressedFrames; 
  unsigned __int16 *diskQuatFrames; 
  __m128 v31; 
  float v32; 
  __m128 v37; 
  __int64 v43; 
  __m128 v52; 
  __m128 v54; 
  __m128 v55; 
  unsigned __int8 *diskPos; 
  __int64 v57; 
  bool v58; 
  float v65; 
  float v66; 
  float v67; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float *v75; 
  float *v76; 
  DObjAnimMat *v83; 
  float v84; 
  __m128 v85; 
  float v86; 
  float v87; 
  float v88; 
  __m128 v89; 
  float v90; 
  __m128 v91; 
  __m128 v92; 
  float v93; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  __m128 v99; 
  vec3_t in; 
  vec3_t out; 
  __m128 v102; 
  __m128 v103; 
  __m128 v104; 

  v6 = skel;
  v8 = *(__m128 *)&t;
  v8.m128_f32[0] = *(float *)&t * mayhemAnim->frequency;
  v7 = v8;
  if ( mayhemAnim->isLooping )
  {
    _XMM1 = LODWORD(FLOAT_1_0);
    v7.m128_f32[0] = fmodf_0(v8.m128_f32[0], 1.0);
  }
  else
  {
    _XMM1 = 0i64;
    *(double *)v7.m128_u64 = I_fclamp(v8.m128_f32[0], 0.0, 1.0);
  }
  v11 = v7;
  if ( v7.m128_f32[0] < 0.0 || v7.m128_f32[0] > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 419, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( t ) && ( t ) <= ( 1.0f )", "t not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v7.m128_f32[0], *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  numFrames = mayhemAnim->numFrames;
  _XMM2 = 0i64;
  _XMM1 = 0i64;
  v16 = 0i64;
  __asm
  {
    vroundss xmm2, xmm2, xmm3, 1
    vroundss xmm1, xmm1, xmm3, 2
  }
  v19 = (int)*(float *)&_XMM2 % (unsigned int)numFrames;
  v20 = (int)*(float *)&_XMM1 % (unsigned int)numFrames;
  v21 = (float)v19;
  v23 = 0i64;
  v23.m128_f32[0] = (float)numFrames;
  _XMM3 = v23;
  numBones = mayhemAnim->numBones;
  v25 = v20;
  *(float *)&_XMM1 = v21 / v23.m128_f32[0];
  v26 = v11;
  v26.m128_f32[0] = (float)(v11.m128_f32[0] - *(float *)&_XMM1) * _XMM3.m128_f32[0];
  v93 = v26.m128_f32[0];
  v99 = _mm_shuffle_ps(v26, v26, 0);
  if ( numBones )
  {
    v27 = mayhemAnim->numBones;
    do
    {
      splineCompressedFrames = mayhemAnim->frames.splineCompressedFrames;
      if ( mayhemAnim->quantizeTrans )
      {
        diskQuatFrames = splineCompressedFrames->diskQuatFrames;
        v102.m128_i32[3] = 0;
        v31 = v102;
        v31.m128_f32[0] = *(float *)&diskQuatFrames[12 * v16];
        _XMM6 = v31;
        v32 = *(float *)&diskQuatFrames[12 * v16 + 6];
        __asm
        {
          vinsertps xmm6, xmm6, dword ptr [rax+rcx*8+4], 10h
          vinsertps xmm6, xmm6, dword ptr [rax+rcx*8+8], 20h ; ' '
        }
        _RCX = splineCompressedFrames->diskPos;
        v103.m128_i32[3] = 0;
        v37 = v103;
        v37.m128_f32[0] = v32;
        _XMM5 = v37;
        __asm
        {
          vinsertps xmm5, xmm5, xmm1, 10h
          vinsertps xmm5, xmm5, xmm2, 20h ; ' '
          vpxor   xmm3, xmm3, xmm3
        }
        v102 = _XMM6;
        v103 = _XMM5;
        _RAX = (unsigned int)v16 + (_DWORD)v19 * numBones;
        _RDX = (unsigned int)_RAX;
        v43 = (unsigned int)v16 + v25 * numBones;
        _RAX *= 3i64;
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rcx+rax*2]
          vpunpcklwd xmm1, xmm0, xmm3
        }
        _XMM2 = _mm_cvtepi32_ps(_XMM1);
        __asm { vinsertps xmm4, xmm2, xmm2, 8 }
        _RAX = 3 * v43;
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rcx+rax*2]
          vpunpcklwd xmm1, xmm0, xmm3
        }
        _XMM2 = _mm_cvtepi32_ps(_XMM1);
        v52 = _mm128_add_ps(_mm128_mul_ps(_XMM5, _XMM4), _XMM6);
        LODWORD(v96) = _mm_shuffle_ps(v52, v52, 85).m128_u32[0];
        LODWORD(v98) = _mm_shuffle_ps(v52, v52, 170).m128_u32[0];
        __asm { vinsertps xmm3, xmm2, xmm2, 8 }
        v54 = _mm128_add_ps(_mm128_mul_ps(_XMM5, _XMM3), _XMM6);
        LODWORD(v97) = _mm_shuffle_ps(v54, v54, 85).m128_u32[0];
        v55 = _mm_shuffle_ps(v54, v54, 170);
        v95 = v54.m128_f32[0];
      }
      else
      {
        diskPos = splineCompressedFrames->diskPos;
        v57 = (unsigned int)v16 + (_DWORD)v19 * numBones;
        _RDX = (unsigned int)v57;
        v43 = (unsigned int)v16 + v25 * numBones;
        v57 *= 3i64;
        v52.m128_i32[0] = *(_DWORD *)&diskPos[4 * v57];
        v96 = *(float *)&diskPos[4 * v57 + 4];
        v98 = *(float *)&diskPos[4 * v57 + 8];
        v95 = *(float *)&diskPos[12 * v43];
        v97 = *(float *)&diskPos[12 * v43 + 4];
        v55 = (__m128)*(unsigned int *)&diskPos[12 * v43 + 8];
      }
      v58 = !mayhemAnim->quantizeQuats;
      _RAX = splineCompressedFrames->diskQuat;
      v104 = v55;
      _R11 = (unsigned int)v43;
      if ( v58 )
      {
        v75 = (float *)&_RAX[16 * _RDX];
        v67 = *v75;
        v66 = v75[1];
        v65 = v75[2];
        v73 = v75[3];
        v76 = (float *)&splineCompressedFrames->diskQuat[16 * (unsigned int)v16 + 16 * v25 * v27];
        _XMM7 = *(unsigned int *)v75;
        __asm
        {
          vinsertps xmm7, xmm7, xmm11, 10h
          vinsertps xmm7, xmm7, xmm10, 20h ; ' '
        }
        v71 = v76[1];
        v70 = v76[2];
        v74 = v76[3];
        _XMM6 = *(unsigned int *)v76;
        __asm
        {
          vinsertps xmm6, xmm6, xmm15, 10h
          vinsertps xmm6, xmm6, xmm14, 20h ; ' '
          vinsertps xmm7, xmm7, xmm9, 30h ; '0'
          vinsertps xmm6, xmm6, xmm13, 30h ; '0'
        }
        v72 = *v76;
      }
      else
      {
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rax+rdx*8]
          vpmovsxwd xmm1, xmm0
          vlddqu  xmm0, xmmword ptr [rax+r11*8]
        }
        _XMM7 = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
        v65 = _XMM7.m128_f32[2];
        v66 = _XMM7.m128_f32[1];
        v67 = _XMM7.m128_f32[0];
        __asm { vpmovsxwd xmm1, xmm0 }
        _XMM6 = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
        v70 = _XMM6.m128_f32[2];
        v71 = _XMM6.m128_f32[1];
        v72 = _XMM6.m128_f32[0];
        LODWORD(v73) = _mm_shuffle_ps(_XMM7, _XMM7, 255).m128_u32[0];
        LODWORD(v74) = _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_u32[0];
      }
      in.v[0] = (float)((float)(v95 - v52.m128_f32[0]) * v93) + v52.m128_f32[0];
      in.v[1] = (float)((float)(v97 - v96) * v93) + v96;
      v83 = &v6[(unsigned int)v16];
      in.v[2] = (float)((float)(v104.m128_f32[0] - v98) * v93) + v98;
      v83->transWeight = 2.0;
      if ( (float)((float)((float)((float)(v67 * v72) + (float)(v66 * v71)) + (float)(v65 * v70)) + (float)(v73 * v74)) < 0.0 )
        *(_OWORD *)&_XMM6 ^= _xmm;
      QuatTransform(placementQuat, &in, &out);
      v84 = out.v[1];
      v85 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM6, _XMM7), v99), _XMM7);
      v83->trans.v[0] = out.v[0] + placementPos->v[0];
      v86 = out.v[2];
      v83->trans.v[1] = v84 + placementPos->v[1];
      v83->trans.v[2] = v86 + placementPos->v[2];
      v87 = _mm_shuffle_ps(v85, v85, 85).m128_f32[0];
      v88 = _mm_shuffle_ps(v85, v85, 170).m128_f32[0];
      v89 = _mm_shuffle_ps(v85, v85, 255);
      v90 = fsqrt((float)((float)((float)(v87 * v87) + (float)(v85.m128_f32[0] * v85.m128_f32[0])) + (float)(v88 * v88)) + (float)(v89.m128_f32[0] * v89.m128_f32[0]));
      if ( v90 != 0.0 )
      {
        v85.m128_f32[0] = v85.m128_f32[0] * (float)(1.0 / v90);
        v87 = v87 * (float)(1.0 / v90);
        v88 = v88 * (float)(1.0 / v90);
        v91 = v89;
        v91.m128_f32[0] = v89.m128_f32[0] * (float)(1.0 / v90);
        v89 = v91;
      }
      if ( &v104 == (__m128 *)v83 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      if ( placementQuat == (const vec4_t *)v83 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
        __debugbreak();
      v83->quat.v[0] = (float)((float)((float)(v85.m128_f32[0] * placementQuat->v[3]) + (float)(v89.m128_f32[0] * placementQuat->v[0])) + (float)(v88 * placementQuat->v[1])) - (float)(v87 * placementQuat->v[2]);
      v83->quat.v[1] = (float)((float)((float)(v87 * placementQuat->v[3]) - (float)(v88 * placementQuat->v[0])) + (float)(v89.m128_f32[0] * placementQuat->v[1])) + (float)(v85.m128_f32[0] * placementQuat->v[2]);
      v83->quat.v[2] = (float)((float)((float)(v88 * placementQuat->v[3]) + (float)(v87 * placementQuat->v[0])) - (float)(v85.m128_f32[0] * placementQuat->v[1])) + (float)(v89.m128_f32[0] * placementQuat->v[2]);
      v92 = v89;
      v92.m128_f32[0] = (float)(v89.m128_f32[0] * placementQuat->v[3]) - (float)(v85.m128_f32[0] * placementQuat->v[0]);
      _XMM3 = v92;
      v83->quat.v[3] = (float)(v92.m128_f32[0] - (float)(v87 * placementQuat->v[1])) - (float)(v88 * placementQuat->v[2]);
      numBones = mayhemAnim->numBones;
      v16 = (unsigned int)(v16 + 1);
      v6 = skel;
      v27 = numBones;
    }
    while ( (unsigned int)v16 < numBones );
  }
}

/*
==============
R_Mayhem_RegisterCustomDataChannels
==============
*/
void R_Mayhem_RegisterCustomDataChannels(const MayhemAnim *mayhemAnim, const DObj *obj, float t, unsigned int elemOffset)
{
  float *CustomDataChannelRecord; 

  if ( mayhemAnim->dataChannelCount )
  {
    CustomDataChannelRecord = (float *)Com_GetCustomDataChannelRecord(obj);
    CustomDataChannelRecord[4] = t;
    CustomDataChannelRecord[2] = 0.0;
    *(_QWORD *)CustomDataChannelRecord = mayhemAnim;
    *((_DWORD *)CustomDataChannelRecord + 3) = elemOffset;
  }
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
  __int128 v3; 
  __int128 v4; 
  int v5; 
  ComputeCmdBufState *v6; 
  int v7; 
  DObjCustomDataChannelRecord *CustomDataChannelRecordFromIndex; 
  DObjCustomDataChannelRecord *v9; 
  const MayhemAnim *userDataPtr; 
  bool v11; 
  float userFloat; 
  float v13; 
  double v15; 
  float v16; 
  __int64 v18; 
  __int64 v19; 
  MayhemDataChannelsUnion v20; 
  int numStreams; 
  unsigned int userUint; 
  float numFrames; 
  float v24; 
  unsigned __int16 v25; 
  unsigned __int16 *numKeys; 
  unsigned __int16 *keyFrames; 
  const base_vec4_t<short> *v28; 
  __int64 v29; 
  GfxComputeBufferState *mayhemChannelsBuffer; 
  unsigned int v31; 
  unsigned int v32; 
  float v33; 
  float v34; 
  unsigned __int16 v35; 
  unsigned __int16 *v36; 
  unsigned __int16 *v37; 
  const vec4_t *v38; 
  __int64 v39; 
  ID3D12Resource *buffer; 
  const GfxShaderBufferView *p_view; 
  unsigned __int8 *data; 
  base_vec4_t<short> *keys; 
  int dstElemOffset; 
  unsigned int bufferOffset; 
  int i; 
  DObjCustomDataChannelRecord *v47; 
  unsigned __int8 *v48; 
  __int128 v49; 
  __int128 v50; 
  GfxShaderBufferView *views; 

  v5 = startIndex;
  v6 = state;
  v7 = objBufIndex;
  CustomDataChannelRecordFromIndex = (DObjCustomDataChannelRecord *)Com_GetCustomDataChannelRecordFromIndex(objBufIndex);
  v9 = CustomDataChannelRecordFromIndex;
  v47 = CustomDataChannelRecordFromIndex;
  userDataPtr = (const MayhemAnim *)CustomDataChannelRecordFromIndex->channel.userDataPtr;
  if ( CustomDataChannelRecordFromIndex->channel.userDataPtr )
  {
    v11 = userDataPtr->dataChannelCount == 0;
    userFloat = CustomDataChannelRecordFromIndex->channel.userFloat;
    v49 = v4;
    if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 698, ASSERT_TYPE_ASSERT, "(mayhemAnim->dataChannelCount)", (const char *)&queryFormat, "mayhemAnim->dataChannelCount") )
      __debugbreak();
    v11 = !userDataPtr->isLooping;
    v13 = userFloat * userDataPtr->frequency;
    v50 = v3;
    if ( v11 )
    {
      _XMM1 = 0i64;
      v15 = I_fclamp(v13, 0.0, 1.0);
    }
    else
    {
      _XMM1 = LODWORD(FLOAT_1_0);
      *(float *)&v15 = fmodf_0(v13, 1.0);
    }
    v16 = *(float *)&v15;
    if ( *(float *)&v15 < 0.0 || *(float *)&v15 > 1.0 )
    {
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 700, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( t ) && ( t ) <= ( 1.0f )", "t not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&v15, *(double *)&_XMM1, DOUBLE_1_0) )
        __debugbreak();
    }
    if ( userDataPtr->dataChannelCount != 1 )
    {
      LODWORD(keys) = userDataPtr->dataChannelCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 705, ASSERT_TYPE_ASSERT, "( ( mayhemAnim->dataChannelCount == 1 ) )", "( mayhemAnim->dataChannelCount ) = %i", keys) )
        __debugbreak();
    }
    v18 = 0i64;
    for ( i = 0; (unsigned int)v18 < userDataPtr->dataChannelCount; i = v18 )
    {
      if ( userDataPtr->isSplineCompressed )
      {
        v19 = v18;
        v20.splineCompressedKeys = (MayhemDataKeysSplineCompressed *)userDataPtr->dataChannels;
        numStreams = v20.splineCompressedKeys[v18].numStreams;
        if ( userDataPtr->quantizeChannels )
        {
          v48 = R_Mayhem_BeginSetupDataChannelBuffer(v6, 16, numStreams, &dstElemOffset);
          if ( ((unsigned __int8)v48 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 592, ASSERT_TYPE_ASSERT, "(( reinterpret_cast< uintptr_t >( bufStream ) & 0xf ) == 0)", (const char *)&queryFormat, "( reinterpret_cast< uintptr_t >( bufStream ) & 0xf ) == 0") )
            __debugbreak();
          userUint = v9->channel.userUint;
          v9->channel.cacheOffset = dstElemOffset;
          numFrames = (float)userDataPtr->numFrames;
          v24 = roundf(numFrames * v16);
          v25 = float_to_integral_cast<unsigned short,float>(v24);
          numKeys = v20.splineCompressedKeys[v19].numKeys;
          keyFrames = v20.splineCompressedKeys[v19].keyFrames;
          v28 = (const base_vec4_t<short> *)v20.splineCompressedKeys[v19].keys;
          for ( LOWORD(views) = v25; userUint < v20.splineCompressedKeys[v19].numStreams; keyFrames += v29 )
          {
            v29 = *numKeys;
            R_Mayhem_SplineDecompressVec4_base_vec4_t_short___(userDataPtr, *numKeys, v16, v25, keyFrames, v28, (float4 *)&v48[16 * userUint++]);
            v28 += 3 * v29;
            v25 = (unsigned __int16)views;
            ++numKeys;
          }
          v6 = state;
          mayhemChannelsBuffer = state->data->mayhemChannelsBuffer;
          R_EndWrappedBufferDataWrite(&mayhemChannelsBuffer->wrappedBuffer);
          v31 = dstElemOffset;
        }
        else
        {
          v48 = R_Mayhem_BeginSetupDataChannelBuffer(v6, 16, numStreams, (int *)&bufferOffset);
          if ( ((unsigned __int8)v48 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_mayhem.cpp", 592, ASSERT_TYPE_ASSERT, "(( reinterpret_cast< uintptr_t >( bufStream ) & 0xf ) == 0)", (const char *)&queryFormat, "( reinterpret_cast< uintptr_t >( bufStream ) & 0xf ) == 0") )
            __debugbreak();
          v32 = v9->channel.userUint;
          v9->channel.cacheOffset = bufferOffset;
          v33 = (float)userDataPtr->numFrames;
          v34 = roundf(v33 * v16);
          v35 = float_to_integral_cast<unsigned short,float>(v34);
          v36 = v20.splineCompressedKeys[v19].numKeys;
          v37 = v20.splineCompressedKeys[v19].keyFrames;
          v38 = (const vec4_t *)v20.splineCompressedKeys[v19].keys;
          for ( LOWORD(views) = v35; v32 < v20.splineCompressedKeys[v19].numStreams; v35 = (unsigned __int16)views )
          {
            v39 = *v36;
            R_Mayhem_SplineDecompressVec4_vec4_t_(userDataPtr, *v36++, v16, v35, v37, v38, (float4 *)&v48[16 * v32++]);
            v38 += 3 * v39;
            v37 += v39;
          }
          v6 = state;
          mayhemChannelsBuffer = state->data->mayhemChannelsBuffer;
          R_EndWrappedBufferDataWrite(&mayhemChannelsBuffer->wrappedBuffer);
          v31 = bufferOffset;
        }
        buffer = mayhemChannelsBuffer->wrappedBuffer.buffer;
        p_view = &mayhemChannelsBuffer->wrappedBuffer.view;
        data = (unsigned __int8 *)mayhemChannelsBuffer->wrappedBuffer.data;
        v5 = startIndex;
        R_SetComputeViewWithOffset(v6, startIndex, data, v31, 0x10u, p_view, buffer);
        v9 = v47;
        v7 = objBufIndex;
      }
      else
      {
        R_Mayhem_SetUncompressedCustomDataChannels(userDataPtr, v9, (const MayhemDataKeysUncompressed *)userDataPtr->dataChannels.splineCompressedKeys + (unsigned int)v18, v16, v7, v6, v5);
      }
      v18 = (unsigned int)(i + 1);
    }
  }
  else
  {
    views = &gfxBuf.dummyStructuredBuffer32.view;
    R_SetComputeViews(v6, v5, 1, (const GfxShaderBufferView *const *)&views);
  }
}

/*
==============
R_Mayhem_SetUncompressedCustomDataChannels
==============
*/
void R_Mayhem_SetUncompressedCustomDataChannels(const MayhemAnim *mayhemAnim, DObjCustomDataChannelRecord *dobjChannelRecord, const MayhemDataKeysUncompressed *channel, float t, int objBufIndex, ComputeCmdBufState *state, int startIndex)
{
  __int64 numFrames; 
  __int64 v14; 
  float v15; 
  float v16; 
  float v17; 
  unsigned __int8 *v18; 
  unsigned int userUint; 
  unsigned __int8 *v20; 
  int v21; 
  unsigned int v22; 
  int v23; 
  unsigned int i; 
  __m128 v32; 
  __m128 v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  __int64 v43; 
  float *v44; 
  GfxComputeBufferState *mayhemChannelsBuffer; 
  int dstElemOffset; 
  __m128 v47; 

  numFrames = mayhemAnim->numFrames;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm6, 1 }
  v14 = (int)*(float *)&_XMM2 % (unsigned int)numFrames;
  v15 = (float)numFrames;
  v16 = (float)v14;
  v17 = (float)(t - (float)(v16 / v15)) * v15;
  v18 = R_Mayhem_BeginSetupDataChannelBuffer(state, 16, channel->numStreams, &dstElemOffset);
  userUint = dobjChannelRecord->channel.userUint;
  v20 = v18;
  v21 = dstElemOffset;
  dobjChannelRecord->channel.cacheOffset = dstElemOffset;
  v22 = mayhemAnim->numFrames * channel->keyStride;
  v23 = v14 * channel->keyStride;
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm6, 2 }
  for ( i = channel->keyStride * ((int)*(float *)&_XMM1 % (unsigned int)numFrames); userUint < channel->numStreams; v44[3] = (float)((float)(v42 - v40) * v17) + v40 )
  {
    _R8 = (float *)&channel->keys[i + userUint * v22];
    _RDX = (float *)&channel->keys[v23 + userUint * v22];
    if ( mayhemAnim->quantizeChannels )
    {
      __asm
      {
        vlddqu  xmm0, xmmword ptr [rdx]
        vpmovsxwd xmm1, xmm0
        vlddqu  xmm0, xmmword ptr [r8]
      }
      v32 = _mm_cvtepi32_ps(_XMM1);
      __asm { vpmovsxwd xmm1, xmm0 }
      v34 = _mm128_mul_ps(v32, (__m128)_xmm);
      v35 = v34.m128_f32[2];
      v36 = v34.m128_f32[1];
      v37 = v34.m128_f32[0];
      v47 = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
      v38 = v47.m128_f32[2];
      v39 = v47.m128_f32[1];
      LODWORD(v40) = _mm_shuffle_ps(v34, v34, 255).m128_u32[0];
      v41 = v47.m128_f32[0];
      LODWORD(v42) = _mm_shuffle_ps(v47, v47, 255).m128_u32[0];
    }
    else
    {
      v37 = *_RDX;
      v36 = _RDX[1];
      v35 = _RDX[2];
      v40 = _RDX[3];
      v41 = *_R8;
      v39 = _R8[1];
      v38 = _R8[2];
      v42 = _R8[3];
    }
    v43 = userUint++;
    v44 = (float *)&v20[16 * v43];
    *v44 = (float)((float)(v41 - v37) * v17) + v37;
    v44[1] = (float)((float)(v39 - v36) * v17) + v36;
    v44[2] = (float)((float)(v38 - v35) * v17) + v35;
  }
  mayhemChannelsBuffer = state->data->mayhemChannelsBuffer;
  R_EndWrappedBufferDataWrite(&mayhemChannelsBuffer->wrappedBuffer);
  R_SetComputeViewWithOffset(state, startIndex, (unsigned __int8 *)mayhemChannelsBuffer->wrappedBuffer.data, v21, 0x10u, &mayhemChannelsBuffer->wrappedBuffer.view, mayhemChannelsBuffer->wrappedBuffer.buffer);
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

