/*
==============
R_FrustumGridClustering_ClusterOBBs
==============
*/

void __fastcall R_FrustumGridClustering_ClusterOBBs(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxWrappedBuffer *obbBuffer, const GfxWrappedRWBuffer *maskClusterBuffer, unsigned int obbCount, bool farClip)
{
  ?R_FrustumGridClustering_ClusterOBBs@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@PEBUGfxWrappedBuffer@@PEBUGfxWrappedRWBuffer@@I_N@Z(state, viewInfo, data, obbBuffer, maskClusterBuffer, obbCount, farClip);
}

/*
==============
R_FrustumGridClustering_ClusterOBBs_Prebinned
==============
*/

void __fastcall R_FrustumGridClustering_ClusterOBBs_Prebinned(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxWrappedBuffer *obbBuffer, const GfxWrappedBuffer *prebinBuffer, const GfxWrappedRWBuffer *maskClusterBuffer, unsigned int obbCount, bool farClip)
{
  ?R_FrustumGridClustering_ClusterOBBs_Prebinned@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@PEBUGfxWrappedBuffer@@3PEBUGfxWrappedRWBuffer@@I_N@Z(state, viewInfo, data, obbBuffer, prebinBuffer, maskClusterBuffer, obbCount, farClip);
}

/*
==============
R_FrustumGridClustering_PrebinOBBs
==============
*/

void __fastcall R_FrustumGridClustering_PrebinOBBs(const GfxViewInfo *viewInfo, const GfxOrientedBoundingBox *obbs, unsigned int obbCount, unsigned int *binMask, unsigned int *zBin)
{
  ?R_FrustumGridClustering_PrebinOBBs@@YAXPEBUGfxViewInfo@@PEBUGfxOrientedBoundingBox@@IPEAI2@Z(viewInfo, obbs, obbCount, binMask, zBin);
}

/*
==============
R_FrustumGridClustering_AccumulateProjectedBounds
==============
*/
bool R_FrustumGridClustering_AccumulateProjectedBounds(const vec4_t *projPosition, vec3_t *mins, vec3_t *maxs)
{
  __int128 v4; 

  _XMM4 = LODWORD(projPosition->v[3]);
  v4 = LODWORD(FLOAT_1_0);
  *(float *)&v4 = (float)(1.0 / *(float *)&_XMM4) * projPosition->v[0];
  _XMM2 = v4;
  _XMM1 = LODWORD(mins->v[1]);
  __asm { vminss  xmm0, xmm2, dword ptr [rdx] }
  mins->v[0] = *(float *)&_XMM0;
  __asm { vminss  xmm0, xmm1, xmm3 }
  _XMM1 = LODWORD(mins->v[2]);
  mins->v[1] = *(float *)&_XMM0;
  __asm { vminss  xmm0, xmm1, xmm4 }
  mins->v[2] = *(float *)&_XMM0;
  _XMM0 = LODWORD(maxs->v[1]);
  __asm { vmaxss  xmm1, xmm2, dword ptr [r8] }
  maxs->v[0] = *(float *)&_XMM1;
  __asm
  {
    vmaxss  xmm1, xmm0, xmm3
    vmaxss  xmm0, xmm4, dword ptr [r8+8]
  }
  maxs->v[1] = *(float *)&_XMM1;
  maxs->v[2] = *(float *)&_XMM0;
  return *(float *)&_XMM4 < 0.0;
}

/*
==============
R_FrustumGridClustering_ClusterOBBs
==============
*/
void R_FrustumGridClustering_ClusterOBBs(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxWrappedBuffer *obbBuffer, const GfxWrappedRWBuffer *maskClusterBuffer, unsigned int obbCount, bool farClip)
{
  ID3D12Resource *buffers[2]; 
  int dataa[4]; 

  buffers[0] = data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(state, 7, 1, buffers);
  dataa[0] = obbCount;
  dataa[1] = ((unsigned __int64)obbCount + 31) >> 5;
  dataa[2] = farClip;
  R_UploadAndSetComputeConstants(state, 0, dataa, 0x10u, NULL);
  R_SetComputeShader(state, rgp.frustumGridClusteringComputeShader);
  buffers[0] = (ID3D12Resource *)&obbBuffer->view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)buffers);
  buffers[0] = (ID3D12Resource *)&maskClusterBuffer->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)buffers, NULL);
  R_Dispatch(state, ((unsigned __int64)viewInfo->frustumGrid.clusterCountX + 3) >> 2, ((unsigned __int64)viewInfo->frustumGrid.clusterCountY + 3) >> 2, 8u);
}

/*
==============
R_FrustumGridClustering_ClusterOBBs_Prebinned
==============
*/
void R_FrustumGridClustering_ClusterOBBs_Prebinned(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxWrappedBuffer *obbBuffer, const GfxWrappedBuffer *prebinBuffer, const GfxWrappedRWBuffer *maskClusterBuffer, unsigned int obbCount, bool farClip)
{
  ID3D12Resource *buffers[2]; 
  unsigned int dataa; 
  int v13; 
  BOOL v14; 

  buffers[0] = data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(state, 7, 1, buffers);
  dataa = obbCount;
  v13 = ((unsigned __int64)obbCount + 31) >> 5;
  v14 = farClip;
  R_UploadAndSetComputeConstants(state, 0, &dataa, 0x10u, NULL);
  R_SetComputeShader(state, rgp.frustumGridClusteringPrebinnedComputeShader);
  buffers[0] = (ID3D12Resource *)&obbBuffer->view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)buffers);
  buffers[0] = (ID3D12Resource *)&prebinBuffer->view;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)buffers);
  buffers[0] = (ID3D12Resource *)&maskClusterBuffer->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)buffers, NULL);
  R_Dispatch(state, ((unsigned __int64)viewInfo->frustumGrid.clusterCountX + 3) >> 2, ((unsigned __int64)viewInfo->frustumGrid.clusterCountY + 3) >> 2, 8 * v13);
}

/*
==============
R_FrustumGridClustering_GetProjectedBoundsNDC
==============
*/
bool R_FrustumGridClustering_GetProjectedBoundsNDC(const GfxViewParms *viewParms, const GfxOrientedBoundingBox *obb, vec3_t *mins, vec3_t *maxs)
{
  GfxMatrix *p_viewProjectionMatrix; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  __m128 v23; 
  __m128 v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v29; 
  __int128 v38; 
  __int128 v39; 
  __int128 v42; 
  __m128 v45; 
  __int128 v52; 
  __int128 v53; 
  __int128 v56; 
  __m128 v63; 
  float v66; 
  float v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v73; 
  float v81; 
  __int128 v82; 
  __int128 v83; 
  __int128 v87; 
  __m128 v97; 
  float v98; 
  __int128 v99; 
  __int128 v100; 
  __m128 v102; 
  __int128 v104; 
  __int128 v113; 
  __int128 v114; 
  __int128 v117; 
  bool v126; 
  char v127; 
  bool v128; 
  bool v138; 
  vec4_t out_8; 
  vec3_t pos; 
  vec3_t dir; 
  vec3_t v146; 
  vec3_t v147; 
  __m128 v148; 
  vec4_t v149; 
  vec4_t v150; 

  _XMM13 = LODWORD(FLOAT_1_0);
  _XMM11 = LODWORD(FLOAT_N1_0);
  __asm { vunpcklps xmm0, xmm13, xmm13 }
  *(double *)mins->v = *(double *)&_XMM0;
  pos.v[2] = FLOAT_3_4028235e38;
  p_viewProjectionMatrix = &viewParms->viewProjectionMatrix;
  mins->v[2] = FLOAT_3_4028235e38;
  __asm { vunpcklps xmm0, xmm11, xmm11 }
  *(double *)maxs->v = *(double *)&_XMM0;
  out_8.v[2] = FLOAT_N3_4028235e38;
  maxs->v[2] = FLOAT_N3_4028235e38;
  LODWORD(v11) = LODWORD(obb->halfSize.v[0]) ^ _xmm;
  LODWORD(v12) = LODWORD(obb->halfSize.v[2]) ^ _xmm;
  LODWORD(v13) = LODWORD(obb->halfSize.v[1]) ^ _xmm;
  v14 = obb->center.v[1] - viewParms->camera.origin.v[1];
  pos.v[0] = (float)((float)((float)(v11 * obb->xAxis.v[0]) + (float)(obb->center.v[0] - viewParms->camera.origin.v[0])) + (float)(v13 * obb->yAxis.v[0])) + (float)(v12 * obb->zAxis.v[0]);
  v15 = obb->center.v[2] - viewParms->camera.origin.v[2];
  *(float *)&_XMM0 = v11 * obb->xAxis.v[2];
  pos.v[1] = (float)((float)(v14 + (float)(v11 * obb->xAxis.v[1])) + (float)(v13 * obb->yAxis.v[1])) + (float)(v12 * obb->zAxis.v[1]);
  pos.v[2] = (float)((float)(v15 + *(float *)&_XMM0) + (float)(v13 * obb->yAxis.v[2])) + (float)(v12 * obb->zAxis.v[2]);
  MatrixTransformPos44(&pos, &viewParms->viewProjectionMatrix.m, &out_8);
  v17 = 2.0 * obb->halfSize.v[0];
  v18 = v17 * obb->xAxis.v[1];
  dir.v[0] = v17 * obb->xAxis.v[0];
  *(float *)&_XMM0 = v17 * obb->xAxis.v[2];
  v19 = 2.0 * obb->halfSize.v[1];
  dir.v[2] = *(float *)&_XMM0;
  v146.v[0] = v19 * obb->yAxis.v[0];
  *(float *)&_XMM0 = v19 * obb->yAxis.v[2];
  dir.v[1] = v18;
  v20 = v19 * obb->yAxis.v[1];
  v21 = 2.0 * obb->halfSize.v[2];
  v146.v[2] = *(float *)&_XMM0;
  v147.v[0] = v21 * obb->zAxis.v[0];
  *(float *)&_XMM0 = v21 * obb->zAxis.v[2];
  v146.v[1] = v20;
  v22 = v21 * obb->zAxis.v[1];
  v147.v[2] = *(float *)&_XMM0;
  v147.v[1] = v22;
  MatrixTransformDir44(&dir, &p_viewProjectionMatrix->m, (vec4_t *)&v148);
  MatrixTransformDir44(&v146, &p_viewProjectionMatrix->m, &v149);
  MatrixTransformDir44(&v147, &p_viewProjectionMatrix->m, &v150);
  v23 = v148;
  v24 = _mm128_add_ps(v148, (__m128)out_8);
  v26 = LODWORD(FLOAT_1_0);
  *(float *)&v26 = 1.0 / out_8.v[3];
  v25 = v26;
  *(float *)&v26 = (float)(1.0 / out_8.v[3]) * out_8.v[0];
  _XMM2 = v26;
  v29 = v25;
  *(float *)&v29 = *(float *)&v25 * out_8.v[1];
  _XMM3 = v29;
  __asm
  {
    vminss  xmm0, xmm2, dword ptr [rsi]
    vminss  xmm1, xmm3, dword ptr [rsi+4]
  }
  mins->v[0] = *(float *)&_XMM0;
  _XMM0 = LODWORD(mins->v[2]);
  mins->v[1] = *(float *)&_XMM1;
  __asm { vminss  xmm1, xmm0, xmm4 }
  mins->v[2] = *(float *)&_XMM1;
  __asm
  {
    vmaxss  xmm2, xmm2, dword ptr [r14]
    vmaxss  xmm0, xmm3, dword ptr [r14+4]
  }
  _XMM1 = LODWORD(maxs->v[2]);
  maxs->v[0] = *(float *)&_XMM2;
  maxs->v[1] = *(float *)&_XMM0;
  __asm { vmaxss  xmm0, xmm1, xmm4 }
  maxs->v[2] = *(float *)&_XMM0;
  v39 = LODWORD(FLOAT_1_0);
  *(float *)&v39 = 1.0 / _mm_shuffle_ps(v24, v24, 255).m128_f32[0];
  v38 = v39;
  *(float *)&v39 = *(float *)&v39 * _mm_shuffle_ps(v24, v24, 85).m128_f32[0];
  _XMM3 = v39;
  v42 = v38;
  *(float *)&v42 = *(float *)&v38 * v24.m128_f32[0];
  _XMM4 = v42;
  __asm
  {
    vminss  xmm0, xmm4, dword ptr [rsi]
    vminss  xmm1, xmm3, dword ptr [rsi+4]
  }
  v45 = _mm128_add_ps(v24, (__m128)v149);
  mins->v[0] = *(float *)&_XMM0;
  _XMM0 = LODWORD(mins->v[2]);
  mins->v[1] = *(float *)&_XMM1;
  __asm { vminss  xmm2, xmm0, xmm5 }
  mins->v[2] = *(float *)&_XMM2;
  __asm
  {
    vmaxss  xmm1, xmm4, dword ptr [r14]
    vmaxss  xmm0, xmm3, dword ptr [r14+4]
  }
  maxs->v[0] = *(float *)&_XMM1;
  _XMM1 = LODWORD(maxs->v[2]);
  maxs->v[1] = *(float *)&_XMM0;
  __asm { vmaxss  xmm2, xmm1, xmm5 }
  maxs->v[2] = *(float *)&_XMM2;
  v53 = LODWORD(FLOAT_1_0);
  *(float *)&v53 = 1.0 / _mm_shuffle_ps(v45, v45, 255).m128_f32[0];
  v52 = v53;
  *(float *)&v53 = *(float *)&v53 * v45.m128_f32[0];
  _XMM4 = v53;
  v56 = v52;
  *(float *)&v56 = *(float *)&v52 * _mm_shuffle_ps(v45, v45, 85).m128_f32[0];
  _XMM3 = v56;
  __asm
  {
    vminss  xmm0, xmm4, dword ptr [rsi]
    vminss  xmm1, xmm3, dword ptr [rsi+4]
  }
  mins->v[0] = *(float *)&_XMM0;
  _XMM0 = LODWORD(mins->v[2]);
  mins->v[1] = *(float *)&_XMM1;
  __asm { vminss  xmm2, xmm0, xmm5 }
  mins->v[2] = *(float *)&_XMM2;
  __asm
  {
    vmaxss  xmm1, xmm4, dword ptr [r14]
    vmaxss  xmm0, xmm3, dword ptr [r14+4]
  }
  v63 = _mm128_sub_ps(v45, v23);
  maxs->v[0] = *(float *)&_XMM1;
  _XMM1 = LODWORD(maxs->v[2]);
  __asm { vmaxss  xmm2, xmm1, xmm5 }
  maxs->v[2] = *(float *)&_XMM2;
  maxs->v[1] = *(float *)&_XMM0;
  out_8 = (vec4_t)v63;
  v66 = _mm_shuffle_ps(v63, v63, 255).m128_f32[0];
  v67 = _mm_shuffle_ps(v63, v63, 85).m128_f32[0];
  v69 = LODWORD(FLOAT_1_0);
  *(float *)&v69 = 1.0 / v66;
  v68 = v69;
  *(float *)&v69 = (float)(1.0 / v66) * v67;
  _XMM3 = v69;
  __asm { vminss  xmm1, xmm3, dword ptr [rsi+4] }
  mins->v[1] = *(float *)&_XMM1;
  v73 = v68;
  *(float *)&v73 = *(float *)&v68 * v63.m128_f32[0];
  _XMM4 = v73;
  __asm { vminss  xmm0, xmm4, dword ptr [rsi] }
  mins->v[0] = *(float *)&_XMM0;
  _XMM0 = LODWORD(mins->v[2]);
  __asm { vminss  xmm2, xmm0, xmm7 }
  mins->v[2] = *(float *)&_XMM2;
  __asm
  {
    vmaxss  xmm1, xmm4, dword ptr [r14]
    vmaxss  xmm0, xmm3, dword ptr [r14+4]
  }
  maxs->v[0] = *(float *)&_XMM1;
  _XMM1 = LODWORD(maxs->v[2]);
  maxs->v[1] = *(float *)&_XMM0;
  __asm { vmaxss  xmm2, xmm1, xmm7 }
  *(float *)&_XMM1 = v67 + v150.v[1];
  v81 = v66 + v150.v[3];
  maxs->v[2] = *(float *)&_XMM2;
  *(float *)&_XMM2 = v63.m128_f32[0] + v150.v[0];
  out_8.v[1] = *(float *)&_XMM1;
  v83 = LODWORD(FLOAT_1_0);
  *(float *)&v83 = 1.0 / v81;
  v82 = v83;
  *(float *)&v83 = (float)(1.0 / v81) * *(float *)&_XMM1;
  _XMM4 = v83;
  __asm { vminss  xmm1, xmm4, dword ptr [rsi+4] }
  mins->v[1] = *(float *)&_XMM1;
  v87 = v82;
  *(float *)&v87 = *(float *)&v82 * *(float *)&_XMM2;
  _XMM3 = v87;
  __asm { vminss  xmm0, xmm3, dword ptr [rsi] }
  mins->v[0] = *(float *)&_XMM0;
  _XMM0 = LODWORD(mins->v[2]);
  out_8.v[0] = *(float *)&_XMM2;
  __asm { vminss  xmm2, xmm0, xmm5 }
  mins->v[2] = *(float *)&_XMM2;
  __asm
  {
    vmaxss  xmm0, xmm4, dword ptr [r14+4]
    vmaxss  xmm1, xmm3, dword ptr [r14]
  }
  maxs->v[1] = *(float *)&_XMM0;
  maxs->v[0] = *(float *)&_XMM1;
  _XMM1 = LODWORD(maxs->v[2]);
  __asm { vmaxss  xmm2, xmm1, xmm5 }
  maxs->v[2] = *(float *)&_XMM2;
  out_8.v[3] = v81;
  _XMM0 = out_8;
  __asm { vinsertps xmm0, xmm0, xmm6, 20h ; ' ' }
  v97 = _mm128_add_ps(_XMM0, v23);
  v98 = _mm_shuffle_ps(v97, v97, 255).m128_f32[0];
  v100 = LODWORD(FLOAT_1_0);
  *(float *)&v100 = 1.0 / v98;
  v99 = v100;
  *(float *)&v100 = (float)(1.0 / v98) * v97.m128_f32[0];
  _XMM4 = v100;
  _XMM0.m128_f32[0] = _mm_shuffle_ps(v97, v97, 85).m128_f32[0];
  v102 = _mm128_sub_ps(v97, (__m128)v149);
  v104 = v99;
  *(float *)&v104 = *(float *)&v99 * _XMM0.m128_f32[0];
  _XMM3 = v104;
  __asm
  {
    vminss  xmm0, xmm4, dword ptr [rsi]
    vminss  xmm1, xmm3, dword ptr [rsi+4]
  }
  mins->v[0] = *(float *)&_XMM0;
  _XMM0 = LODWORD(mins->v[2]);
  mins->v[1] = *(float *)&_XMM1;
  __asm { vminss  xmm2, xmm0, xmm7 }
  mins->v[2] = *(float *)&_XMM2;
  __asm
  {
    vmaxss  xmm1, xmm4, dword ptr [r14]
    vmaxss  xmm0, xmm3, dword ptr [r14+4]
  }
  maxs->v[0] = *(float *)&_XMM1;
  _XMM1 = LODWORD(maxs->v[2]);
  maxs->v[1] = *(float *)&_XMM0;
  __asm { vmaxss  xmm2, xmm1, xmm7 }
  maxs->v[2] = *(float *)&_XMM2;
  v63.m128_f32[0] = _mm_shuffle_ps(v102, v102, 255).m128_f32[0];
  v114 = LODWORD(FLOAT_1_0);
  *(float *)&v114 = 1.0 / v63.m128_f32[0];
  v113 = v114;
  *(float *)&v114 = (float)(1.0 / v63.m128_f32[0]) * v102.m128_f32[0];
  _XMM4 = v114;
  v117 = v113;
  *(float *)&v117 = *(float *)&v113 * _mm_shuffle_ps(v102, v102, 85).m128_f32[0];
  _XMM3 = v117;
  __asm
  {
    vminss  xmm0, xmm4, dword ptr [rsi]
    vminss  xmm1, xmm3, dword ptr [rsi+4]
  }
  mins->v[0] = *(float *)&_XMM0;
  mins->v[1] = *(float *)&_XMM1;
  _XMM0 = LODWORD(mins->v[2]);
  __asm { vminss  xmm2, xmm0, xmm6 }
  mins->v[2] = *(float *)&_XMM2;
  __asm
  {
    vmaxss  xmm1, xmm4, dword ptr [r14]
    vmaxss  xmm0, xmm3, dword ptr [r14+4]
  }
  maxs->v[0] = *(float *)&_XMM1;
  _XMM1 = LODWORD(maxs->v[2]);
  maxs->v[1] = *(float *)&_XMM0;
  __asm { vmaxss  xmm2, xmm1, xmm6 }
  maxs->v[2] = *(float *)&_XMM2;
  out_8 = (vec4_t)_mm128_sub_ps(v102, v23);
  v126 = R_FrustumGridClustering_AccumulateProjectedBounds(&out_8, mins, maxs);
  _XMM0 = LODWORD(mins->v[0]);
  _XMM2 = LODWORD(mins->v[1]);
  __asm { vmaxss  xmm1, xmm0, xmm11 }
  mins->v[0] = *(float *)&_XMM1;
  _XMM1 = LODWORD(mins->v[2]);
  __asm { vmaxss  xmm0, xmm2, xmm11 }
  mins->v[1] = *(float *)&_XMM0;
  __asm { vmaxss  xmm2, xmm1, xmm12 }
  mins->v[2] = *(float *)&_XMM2;
  _XMM0 = LODWORD(maxs->v[0]);
  _XMM2 = LODWORD(maxs->v[1]);
  __asm { vminss  xmm1, xmm0, xmm13 }
  v138 = v63.m128_f32[0] < 0.0 || v126;
  __asm { vminss  xmm0, xmm2, xmm13 }
  maxs->v[0] = *(float *)&_XMM1;
  _XMM1 = LODWORD(maxs->v[2]);
  __asm { vminss  xmm2, xmm1, xmm14 }
  if ( v98 < 0.0 )
    v138 = v128;
  maxs->v[2] = *(float *)&_XMM2;
  maxs->v[1] = *(float *)&_XMM0;
  return v127 | v138;
}

/*
==============
R_FrustumGridClustering_PrebinOBBs
==============
*/
void R_FrustumGridClustering_PrebinOBBs(const GfxViewInfo *viewInfo, const GfxOrientedBoundingBox *obbs, unsigned int obbCount, unsigned int *binMask, unsigned int *zBin)
{
  __int64 v7; 
  const GfxViewInfo *v8; 
  int clusterCountX; 
  unsigned __int64 v12; 
  __int64 v13; 
  __m256i *v16; 
  unsigned int v17; 
  unsigned int v18; 
  bool ProjectedBoundsNDC; 
  float v20; 
  float v22; 
  float v24; 
  bool v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  unsigned int v40; 
  unsigned int v41; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  double v48; 
  float v49; 
  double v50; 
  float v51; 
  double v52; 
  float v53; 
  double v54; 
  unsigned int v55; 
  int i; 
  int v57; 
  int v58; 
  unsigned int v59; 
  unsigned int v61; 
  unsigned int v62; 
  __int64 v63; 
  unsigned int v65; 
  unsigned int v66; 
  unsigned int v67; 
  unsigned int v68; 
  unsigned int v69; 
  unsigned int v70; 
  __int64 v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  int clusterCountY; 
  int v77; 
  int v78; 
  unsigned int v79; 
  int v81; 
  unsigned int v82; 
  vec3_t mins; 
  vec3_t maxs; 

  v7 = obbCount;
  v8 = viewInfo;
  _XMM6 = obbCount;
  __asm { vpshufd xmm6, xmm6, 0 }
  if ( !binMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_grid_clustering.cpp", 125, ASSERT_TYPE_ASSERT, "(binMask)", (const char *)&queryFormat, "binMask") )
    __debugbreak();
  if ( !zBin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_grid_clustering.cpp", 126, ASSERT_TYPE_ASSERT, "(zBin)", (const char *)&queryFormat, "zBin") )
    __debugbreak();
  if ( (unsigned int)v7 >= 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_grid_clustering.cpp", 127, ASSERT_TYPE_ASSERT, "( obbCount ) < ( 65536 )", "%s < %s\n\t%i, %i", "obbCount", "65536", v7, 0x10000) )
    __debugbreak();
  clusterCountX = v8->frustumGrid.clusterCountX;
  v12 = (unsigned __int64)(v7 + 31) >> 5;
  clusterCountY = v8->frustumGrid.clusterCountY;
  v77 = clusterCountX;
  v82 = v12;
  v81 = clusterCountX + clusterCountY;
  memset_0(binMask, 0, 4i64 * (unsigned int)(v12 * (clusterCountX + clusterCountY + 32)));
  v13 = 512i64;
  __asm
  {
    vpslld  xmm1, xmm6, xmm0
    vinsertf128 ymm1, ymm1, xmm1, 1
  }
  v16 = (__m256i *)(zBin + 8);
  do
  {
    v16[-1] = _YMM1;
    *v16 = _YMM1;
    v16 += 2;
    --v13;
  }
  while ( v13 );
  v17 = 0;
  if ( (_DWORD)v12 )
  {
    v78 = 0;
LABEL_14:
    v18 = 32 * v17;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v7 )
        return;
      ProjectedBoundsNDC = R_FrustumGridClustering_GetProjectedBoundsNDC((const GfxViewParms *)v8, &obbs[v18], &mins, &maxs);
      v20 = maxs.v[0];
      _XMM12 = LODWORD(maxs.v[2]);
      v22 = maxs.v[1];
      _XMM13 = LODWORD(mins.v[2]);
      v24 = mins.v[1];
      v25 = !ProjectedBoundsNDC;
      if ( mins.v[0] > maxs.v[0] || mins.v[1] > maxs.v[1] || mins.v[2] > maxs.v[2] )
      {
        if ( !ProjectedBoundsNDC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_grid_clustering.cpp", 153, ASSERT_TYPE_ASSERT, "( !xyValid )", "R_FrustumGridClustering_GetProjectedBoundsNDC: projected obb in X=[%.3f,%.3f] Y=[%.3f,%.3f] Z=[%.3f,%.3f] is not valid", mins.v[0], maxs.v[0], mins.v[1], maxs.v[1], mins.v[2], maxs.v[2]) )
          __debugbreak();
        v25 = 0;
      }
      else if ( !ProjectedBoundsNDC )
      {
        v26 = clusterCountX - 1;
        v27 = (int)(float)((float)((float)((float)(mins.v[0] + 1.0) * 0.5) * v8->input.sceneConstants.sceneRenderTargetSize.v[0]) * v8->input.sceneConstants.frustumGridClusterSize.v[2]);
        if ( clusterCountX - 1 < 0 )
        {
          LODWORD(v72) = clusterCountX - 1;
          LODWORD(v71) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v71, v72) )
            __debugbreak();
        }
        if ( clusterCountX <= v27 )
          v27 = clusterCountX - 1;
        if ( v27 < 0 )
          v27 = 0;
        goto LABEL_33;
      }
      v26 = clusterCountX - 1;
      v27 = 0;
LABEL_33:
      if ( v25 )
      {
        v28 = (int)(float)((float)((float)((float)(v20 + 1.0) * 0.5) * v8->input.sceneConstants.sceneRenderTargetSize.v[0]) * v8->input.sceneConstants.frustumGridClusterSize.v[2]);
        if ( v26 < 0 )
        {
          LODWORD(v72) = v26;
          LODWORD(v71) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v71, v72) )
            __debugbreak();
        }
        if ( v26 < v28 )
          v28 = v26;
        if ( v28 < 0 )
          v28 = 0;
      }
      else
      {
        v28 = v26;
      }
      if ( v27 > v28 )
      {
        LODWORD(v74) = v28;
        LODWORD(v73) = v27;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_grid_clustering.cpp", 159, ASSERT_TYPE_ASSERT, "( minX ) <= ( maxX )", "%s <= %s\n\t%i, %i", "minX", "maxX", v73, v74) )
          __debugbreak();
      }
      v29 = clusterCountY - 1;
      if ( v25 )
      {
        v30 = (int)(float)((float)((float)(0.5 - (float)(v22 * 0.5)) * viewInfo->input.sceneConstants.sceneRenderTargetSize.v[1]) * viewInfo->input.sceneConstants.frustumGridClusterSize.v[3]);
        if ( v29 < 0 )
        {
          LODWORD(v72) = clusterCountY - 1;
          LODWORD(v71) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v71, v72) )
            __debugbreak();
        }
        if ( clusterCountY <= v30 )
          v30 = clusterCountY - 1;
        if ( v30 < 0 )
          v30 = 0;
      }
      else
      {
        v30 = 0;
      }
      if ( v25 )
      {
        v31 = (int)(float)((float)((float)(0.5 - (float)(v24 * 0.5)) * viewInfo->input.sceneConstants.sceneRenderTargetSize.v[1]) * viewInfo->input.sceneConstants.frustumGridClusterSize.v[3]);
        if ( v29 < 0 )
        {
          LODWORD(v72) = clusterCountY - 1;
          LODWORD(v71) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v71, v72) )
            __debugbreak();
        }
        if ( clusterCountY <= v31 )
          v31 = clusterCountY - 1;
        if ( v31 < 0 )
          v31 = 0;
      }
      else
      {
        v31 = clusterCountY - 1;
      }
      if ( v30 > v31 )
      {
        LODWORD(v74) = v31;
        LODWORD(v73) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_grid_clustering.cpp", 163, ASSERT_TYPE_ASSERT, "( minY ) <= ( maxY )", "%s <= %s\n\t%i, %i", "minY", "maxY", v73, v74) )
          __debugbreak();
      }
      __asm { vmaxss  xmm0, xmm13, xmm15 }
      v33 = viewInfo->input.sceneConstants.volumetricDepth.v[0];
      v34 = viewInfo->input.sceneConstants.volumetricDepth.v[2];
      v35 = (float)(*(float *)&_XMM0 - 4.0) - v33;
      v36 = v35 - viewInfo->input.sceneConstants.volumetricDepth.v[1];
      *(double *)&_XMM0 = I_fclamp((float)(*(float *)&_XMM0 - 4.0) / v33, 0.0, 1.0);
      v37 = *(float *)&_XMM0;
      *(double *)&_XMM0 = I_fclamp(v35 / viewInfo->input.sceneConstants.volumetricDepth.v[1], 0.0, 1.0);
      v38 = *(float *)&_XMM0;
      *(double *)&_XMM0 = I_fclamp(v36 / viewInfo->input.sceneConstants.volumetricDepth.v[2], 0.0, 1.0);
      v39 = *(float *)&_XMM0;
      *(double *)&_XMM0 = I_fclamp((float)(v36 - v34) / viewInfo->input.sceneConstants.volumetricDepth.v[3], 0.0, 1.0);
      v40 = (int)(float)((float)((float)(*(float *)&_XMM0 + (float)((float)(v38 + v37) + v39)) * 0.25) * 32.0);
      v41 = 31;
      __asm { vmaxss  xmm0, xmm12, xmm15 }
      v43 = *(float *)&_XMM0 - 4.0;
      if ( v40 < 0x1F )
        v41 = v40;
      v44 = viewInfo->input.sceneConstants.volumetricDepth.v[0];
      v45 = viewInfo->input.sceneConstants.volumetricDepth.v[2];
      v46 = v43 - v44;
      v47 = (float)(v43 - v44) - viewInfo->input.sceneConstants.volumetricDepth.v[1];
      v48 = I_fclamp((float)(*(float *)&_XMM0 - 4.0) / v44, 0.0, 1.0);
      v49 = *(float *)&v48;
      v50 = I_fclamp(v46 / viewInfo->input.sceneConstants.volumetricDepth.v[1], 0.0, 1.0);
      v51 = *(float *)&v50;
      v52 = I_fclamp(v47 / viewInfo->input.sceneConstants.volumetricDepth.v[2], 0.0, 1.0);
      v53 = *(float *)&v52;
      v54 = I_fclamp((float)(v47 - v45) / viewInfo->input.sceneConstants.volumetricDepth.v[3], 0.0, 1.0);
      v55 = 31;
      if ( (unsigned int)(int)(float)((float)((float)(*(float *)&v54 + (float)((float)(v51 + v49) + v53)) * 0.25) * 32.0) < 0x1F )
        v55 = (int)(float)((float)((float)(*(float *)&v54 + (float)((float)(v51 + v49) + v53)) * 0.25) * 32.0);
      v79 = v55;
      if ( v41 > v55 )
      {
        LODWORD(v74) = v55;
        LODWORD(v73) = v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_grid_clustering.cpp", 167, ASSERT_TYPE_ASSERT, "( minZ ) <= ( maxZ )", "%s <= %s\n\t%i, %i", "minZ", "maxZ", v73, v74) )
          __debugbreak();
        v55 = v79;
      }
      for ( i = __ROL4__(1, v18 + v78); v27 <= v28; binMask[v17 + v82 * v57] |= i )
        v57 = v27++;
      for ( clusterCountX = v77; v30 <= v31; binMask[v17 + v82 * v58] |= i )
      {
        v58 = v30 + v77;
        ++v30;
      }
      if ( v41 <= v55 )
      {
        do
        {
          v59 = v81 + v41++;
          binMask[v17 + v82 * v59] |= i;
        }
        while ( v41 <= v55 );
        clusterCountX = v77;
      }
      __asm { vmaxss  xmm0, xmm13, xmm15 }
      v61 = (unsigned int)(int)*(float *)&_XMM0 >> 5;
      v62 = 0x1FFF;
      v63 = 0x1FFFi64;
      __asm { vmaxss  xmm0, xmm12, xmm15 }
      if ( (unsigned int)(int)*(float *)&_XMM0 >> 5 < 0x1FFF )
        v62 = (unsigned int)(int)*(float *)&_XMM0 >> 5;
      if ( v61 < 0x1FFF )
        v63 = v61;
      for ( ; (unsigned int)v63 <= v62; v63 = (unsigned int)(v63 + 1) )
      {
        v65 = v18;
        v66 = zBin[v63];
        v67 = (unsigned __int16)v66;
        v68 = HIWORD(v66);
        v69 = v18;
        if ( v18 > v68 )
          v65 = v68;
        v70 = v65 << 16;
        if ( v67 > v18 )
          v69 = v67;
        zBin[v63] = v69 | v70;
      }
      v8 = viewInfo;
      ++v18;
      LODWORD(v7) = obbCount;
      if ( v78 + v18 >= 0x20 )
      {
        ++v17;
        v78 -= 32;
        if ( v17 < v82 )
          goto LABEL_14;
        return;
      }
    }
  }
}

