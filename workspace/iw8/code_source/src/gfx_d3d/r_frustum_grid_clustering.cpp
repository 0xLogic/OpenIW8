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
  char v3; 

  __asm
  {
    vmovss  xmm4, dword ptr [rcx+0Ch]
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm1, xmm0, xmm4
    vmulss  xmm2, xmm1, dword ptr [rcx]
    vmulss  xmm3, xmm1, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rdx+4]
    vminss  xmm0, xmm2, dword ptr [rdx]
    vmovss  dword ptr [rdx], xmm0
    vminss  xmm0, xmm1, xmm3
    vmovss  xmm1, dword ptr [rdx+8]
    vmovss  dword ptr [rdx+4], xmm0
    vminss  xmm0, xmm1, xmm4
    vmovss  dword ptr [rdx+8], xmm0
    vmovss  xmm0, dword ptr [r8+4]
    vmaxss  xmm1, xmm2, dword ptr [r8]
    vmovss  dword ptr [r8], xmm1
    vmaxss  xmm1, xmm0, xmm3
    vmaxss  xmm0, xmm4, dword ptr [r8+8]
    vmovss  dword ptr [r8+4], xmm1
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm4, xmm1
    vmovss  dword ptr [r8+8], xmm0
  }
  return v3;
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
  bool v170; 
  char v180; 
  char v184; 
  bool result; 
  vec4_t out_8; 
  vec3_t pos; 
  vec3_t dir; 
  vec3_t v199; 
  vec3_t v200; 
  vec4_t v201; 
  vec4_t v202; 
  vec4_t v203; 
  char v204; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovss  xmm1, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm13, cs:__real@3f800000
    vmovss  xmm14, cs:__real@7f7fffff
    vmovss  xmm11, cs:__real@bf800000
    vmovss  xmm12, cs:__real@ff7fffff
    vunpcklps xmm0, xmm13, xmm13
    vmovsd  qword ptr [r8], xmm0
    vmovss  dword ptr [rsp+160h+pos+8], xmm14
  }
  p_viewProjectionMatrix = &viewParms->viewProjectionMatrix;
  mins->v[2] = pos.v[2];
  _RSI = mins;
  __asm
  {
    vunpcklps xmm0, xmm11, xmm11
    vmovsd  qword ptr [r9], xmm0
    vmovss  [rsp+160h+var_138], xmm12
  }
  maxs->v[2] = out_8.v[2];
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+30h]
    vxorps  xmm5, xmm0, xmm1
    vmovss  xmm0, dword ptr [rdx+38h]
    vmulss  xmm2, xmm5, dword ptr [rdx+0Ch]
    vxorps  xmm6, xmm0, xmm1
    vmovss  xmm0, dword ptr [rdx+34h]
    vxorps  xmm4, xmm0, xmm1
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm1, xmm0, dword ptr [rcx+100h]
    vmulss  xmm0, xmm4, dword ptr [rdx+18h]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm6, dword ptr [rdx+24h]
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm0, xmm2, xmm1
    vmovss  xmm2, dword ptr [rdx+4]
    vsubss  xmm1, xmm2, dword ptr [rcx+104h]
    vmovss  dword ptr [rsp+160h+pos], xmm0
    vmulss  xmm0, xmm5, dword ptr [rdx+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rdx+1Ch]
    vmulss  xmm0, xmm6, dword ptr [rdx+28h]
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, dword ptr [rdx+8]
    vaddss  xmm1, xmm3, xmm0
    vsubss  xmm3, xmm2, dword ptr [rcx+108h]
    vmulss  xmm0, xmm5, dword ptr [rdx+14h]
    vmovss  dword ptr [rsp+160h+pos+4], xmm1
    vmulss  xmm1, xmm4, dword ptr [rdx+20h]
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm6, dword ptr [rdx+2Ch]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rsp+160h+pos+8], xmm1
  }
  _R14 = maxs;
  MatrixTransformPos44(&pos, &viewParms->viewProjectionMatrix.m, &out_8);
  __asm
  {
    vmovss  xmm3, cs:__real@40000000
    vmulss  xmm2, xmm3, dword ptr [rdi+30h]
    vmulss  xmm0, xmm2, dword ptr [rdi+0Ch]
    vmulss  xmm1, xmm2, dword ptr [rdi+10h]
    vmovss  dword ptr [rsp+160h+dir], xmm0
    vmulss  xmm0, xmm2, dword ptr [rdi+14h]
    vmulss  xmm2, xmm3, dword ptr [rdi+34h]
    vmovss  dword ptr [rsp+160h+dir+8], xmm0
    vmulss  xmm0, xmm2, dword ptr [rdi+18h]
    vmovss  dword ptr [rsp+160h+var_10C], xmm0
    vmulss  xmm0, xmm2, dword ptr [rdi+20h]
    vmovss  dword ptr [rsp+160h+dir+4], xmm1
    vmulss  xmm1, xmm2, dword ptr [rdi+1Ch]
    vmulss  xmm2, xmm3, dword ptr [rdi+38h]
    vmovss  dword ptr [rsp+160h+var_10C+8], xmm0
    vmulss  xmm0, xmm2, dword ptr [rdi+24h]
    vmovss  dword ptr [rsp+160h+var_100], xmm0
    vmulss  xmm0, xmm2, dword ptr [rdi+2Ch]
    vmovss  dword ptr [rsp+160h+var_10C+4], xmm1
    vmulss  xmm1, xmm2, dword ptr [rdi+28h]
    vmovss  dword ptr [rsp+160h+var_100+8], xmm0
    vmovss  dword ptr [rsp+160h+var_100+4], xmm1
  }
  MatrixTransformDir44(&dir, &p_viewProjectionMatrix->m, &v201);
  MatrixTransformDir44(&v199, &p_viewProjectionMatrix->m, &v202);
  MatrixTransformDir44(&v200, &p_viewProjectionMatrix->m, &v203);
  __asm
  {
    vmovss  xmm4, [rsp+160h+var_134]
    vmovups xmm9, [rsp+160h+anonymous_0]
    vaddps  xmm6, xmm9, xmmword ptr [rsp+160h+out+8]
    vshufps xmm5, xmm6, xmm6, 0FFh
    vdivss  xmm0, xmm13, xmm4
    vmulss  xmm2, xmm0, dword ptr [rsp+160h+out+8]
    vmulss  xmm3, xmm0, dword ptr [rsp+160h+out+0Ch]
    vminss  xmm0, xmm2, dword ptr [rsi]
    vminss  xmm1, xmm3, dword ptr [rsi+4]
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsi+4], xmm1
    vminss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rsi+8], xmm1
    vmaxss  xmm2, xmm2, dword ptr [r14]
    vmaxss  xmm0, xmm3, dword ptr [r14+4]
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  dword ptr [r14], xmm2
    vmovss  dword ptr [r14+4], xmm0
    vmaxss  xmm0, xmm1, xmm4
    vmovss  dword ptr [r14+8], xmm0
    vdivss  xmm1, xmm13, xmm5
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vmulss  xmm3, xmm1, xmm0
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm4, xmm10
    vmulss  xmm4, xmm1, xmm6
    vminss  xmm0, xmm4, dword ptr [rsi]
    vminss  xmm1, xmm3, dword ptr [rsi+4]
    vaddps  xmm6, xmm6, xmmword ptr [rbp+60h+var_E0]
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsi+4], xmm1
    vminss  xmm2, xmm0, xmm5
    vmovss  dword ptr [rsi+8], xmm2
    vmaxss  xmm1, xmm4, dword ptr [r14]
    vmaxss  xmm0, xmm3, dword ptr [r14+4]
    vmovss  dword ptr [r14], xmm1
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  dword ptr [r14+4], xmm0
    vmaxss  xmm2, xmm1, xmm5
    vmovss  dword ptr [r14+8], xmm2
    vcomiss xmm5, xmm10
    vshufps xmm5, xmm6, xmm6, 0FFh
    vdivss  xmm1, xmm13, xmm5
    vmulss  xmm4, xmm1, xmm6
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vmulss  xmm3, xmm1, xmm0
    vminss  xmm0, xmm4, dword ptr [rsi]
    vminss  xmm1, xmm3, dword ptr [rsi+4]
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsi+4], xmm1
    vminss  xmm2, xmm0, xmm5
    vmovss  dword ptr [rsi+8], xmm2
    vmaxss  xmm1, xmm4, dword ptr [r14]
    vmaxss  xmm0, xmm3, dword ptr [r14+4]
    vsubps  xmm6, xmm6, xmm9
    vmovss  dword ptr [r14], xmm1
    vmovss  xmm1, dword ptr [r14+8]
    vcomiss xmm5, xmm10
    vmaxss  xmm2, xmm1, xmm5
    vmovss  dword ptr [r14+8], xmm2
    vmovss  dword ptr [r14+4], xmm0
    vmovups xmmword ptr [rsp+160h+out+8], xmm6
    vshufps xmm7, xmm6, xmm6, 0FFh
    vshufps xmm5, xmm6, xmm6, 55h ; 'U'
    vdivss  xmm0, xmm13, xmm7
    vmulss  xmm3, xmm0, xmm5
    vminss  xmm1, xmm3, dword ptr [rsi+4]
    vmovss  dword ptr [rsi+4], xmm1
    vmulss  xmm4, xmm0, xmm6
    vminss  xmm0, xmm4, dword ptr [rsi]
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
    vminss  xmm2, xmm0, xmm7
    vmovss  dword ptr [rsi+8], xmm2
    vmaxss  xmm1, xmm4, dword ptr [r14]
    vmaxss  xmm0, xmm3, dword ptr [r14+4]
    vmovss  dword ptr [r14], xmm1
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  dword ptr [r14+4], xmm0
    vmovss  xmm0, [rsp+160h+var_138]
    vmaxss  xmm2, xmm1, xmm7
    vaddss  xmm1, xmm5, dword ptr [rbp+60h+var_D0+4]
    vaddss  xmm5, xmm7, dword ptr [rbp+60h+var_D0+0Ch]
    vmovss  dword ptr [r14+8], xmm2
    vaddss  xmm2, xmm6, dword ptr [rbp+60h+var_D0]
    vaddss  xmm6, xmm0, dword ptr [rbp+60h+var_D0+8]
    vmovss  dword ptr [rsp+160h+out+0Ch], xmm1
    vdivss  xmm0, xmm13, xmm5
    vmulss  xmm4, xmm0, xmm1
    vminss  xmm1, xmm4, dword ptr [rsi+4]
    vmovss  dword ptr [rsi+4], xmm1
    vmulss  xmm3, xmm0, xmm2
    vminss  xmm0, xmm3, dword ptr [rsi]
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+160h+out+8], xmm2
    vminss  xmm2, xmm0, xmm5
    vmovss  dword ptr [rsi+8], xmm2
    vmaxss  xmm0, xmm4, dword ptr [r14+4]
    vmaxss  xmm1, xmm3, dword ptr [r14]
    vmovss  dword ptr [r14+4], xmm0
    vmovss  dword ptr [r14], xmm1
    vmovss  xmm1, dword ptr [r14+8]
    vmaxss  xmm2, xmm1, xmm5
    vmovss  dword ptr [r14+8], xmm2
    vcomiss xmm7, xmm10
    vmovss  [rsp+160h+var_134], xmm5
    vmovups xmm0, xmmword ptr [rsp+160h+out+8]
    vinsertps xmm0, xmm0, xmm6, 20h ; ' '
    vcomiss xmm5, xmm10
    vaddps  xmm5, xmm0, xmm9
    vshufps xmm7, xmm5, xmm5, 0FFh
    vdivss  xmm1, xmm13, xmm7
    vmulss  xmm4, xmm1, xmm5
    vshufps xmm0, xmm5, xmm5, 55h ; 'U'
    vsubps  xmm5, xmm5, xmmword ptr [rbp+60h+var_E0]
    vmulss  xmm3, xmm1, xmm0
    vminss  xmm0, xmm4, dword ptr [rsi]
    vminss  xmm1, xmm3, dword ptr [rsi+4]
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsi+4], xmm1
    vminss  xmm2, xmm0, xmm7
    vmovss  dword ptr [rsi+8], xmm2
    vmaxss  xmm1, xmm4, dword ptr [r14]
    vmaxss  xmm0, xmm3, dword ptr [r14+4]
    vmovss  dword ptr [r14], xmm1
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  dword ptr [r14+4], xmm0
    vmaxss  xmm2, xmm1, xmm7
    vmovss  dword ptr [r14+8], xmm2
    vshufps xmm0, xmm5, xmm5, 55h ; 'U'
    vshufps xmm6, xmm5, xmm5, 0FFh
    vdivss  xmm1, xmm13, xmm6
    vmulss  xmm4, xmm1, xmm5
    vmulss  xmm3, xmm1, xmm0
    vminss  xmm0, xmm4, dword ptr [rsi]
    vminss  xmm1, xmm3, dword ptr [rsi+4]
    vmovss  dword ptr [rsi], xmm0
    vmovss  dword ptr [rsi+4], xmm1
    vmovss  xmm0, dword ptr [rsi+8]
    vminss  xmm2, xmm0, xmm6
    vmovss  dword ptr [rsi+8], xmm2
    vmaxss  xmm1, xmm4, dword ptr [r14]
    vmaxss  xmm0, xmm3, dword ptr [r14+4]
    vmovss  dword ptr [r14], xmm1
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  dword ptr [r14+4], xmm0
    vmaxss  xmm2, xmm1, xmm6
    vsubps  xmm0, xmm5, xmm9
    vmovss  dword ptr [r14+8], xmm2
    vmovups xmmword ptr [rsp+160h+out+8], xmm0
  }
  v170 = R_FrustumGridClustering_AccumulateProjectedBounds(&out_8, _RSI, _R14);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm2, dword ptr [rsi+4]
    vmaxss  xmm1, xmm0, xmm11
    vmovss  dword ptr [rsi], xmm1
    vmovss  xmm1, dword ptr [rsi+8]
    vmaxss  xmm0, xmm2, xmm11
    vmovss  dword ptr [rsi+4], xmm0
    vmaxss  xmm2, xmm1, xmm12
    vmovss  dword ptr [rsi+8], xmm2
    vmovss  xmm0, dword ptr [r14]
    vmovss  xmm2, dword ptr [r14+4]
    vcomiss xmm6, xmm10
    vminss  xmm1, xmm0, xmm13
    vcomiss xmm7, xmm10
    vminss  xmm0, xmm2, xmm13
    vmovss  dword ptr [r14], xmm1
    vmovss  xmm1, dword ptr [r14+8]
    vminss  xmm2, xmm1, xmm14
    vmovss  dword ptr [r14+8], xmm2
    vmovss  dword ptr [r14+4], xmm0
  }
  result = v184 | v180 | v170;
  _R11 = &v204;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
  return result;
}

/*
==============
R_FrustumGridClustering_PrebinOBBs
==============
*/
void R_FrustumGridClustering_PrebinOBBs(const GfxViewInfo *viewInfo, const GfxOrientedBoundingBox *obbs, unsigned int obbCount, unsigned int *binMask, unsigned int *zBin)
{
  const GfxViewInfo *v18; 
  int clusterCountX; 
  unsigned __int64 v22; 
  __int64 v24; 
  unsigned int v29; 
  unsigned int v33; 
  bool ProjectedBoundsNDC; 
  bool v41; 
  int v46; 
  int v53; 
  unsigned int v93; 
  unsigned int v119; 
  int i; 
  int v125; 
  int v126; 
  unsigned int v127; 
  unsigned int v130; 
  unsigned int v131; 
  __int64 v132; 
  unsigned int v135; 
  unsigned int v136; 
  unsigned int v137; 
  unsigned int v138; 
  unsigned int v139; 
  unsigned int v140; 
  unsigned int v141; 
  __int64 v152; 
  __int64 v153; 
  __int64 v154; 
  __int64 v155; 
  int clusterCountY; 
  int v158; 
  int v159; 
  unsigned int v160; 
  int v161; 
  int v162; 
  unsigned int v163; 
  vec3_t mins; 
  vec3_t maxs; 

  __asm { vmovaps [rsp+1A8h+var_58], xmm6 }
  _R15 = obbCount;
  v18 = viewInfo;
  v161 = _R15;
  __asm
  {
    vmovd   xmm6, r15d
    vpshufd xmm6, xmm6, 0
  }
  if ( !binMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_grid_clustering.cpp", 125, ASSERT_TYPE_ASSERT, "(binMask)", (const char *)&queryFormat, "binMask") )
    __debugbreak();
  if ( !zBin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_grid_clustering.cpp", 126, ASSERT_TYPE_ASSERT, "(zBin)", (const char *)&queryFormat, "zBin") )
    __debugbreak();
  if ( (unsigned int)_R15 >= 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_grid_clustering.cpp", 127, ASSERT_TYPE_ASSERT, "( obbCount ) < ( 65536 )", "%s < %s\n\t%i, %i", "obbCount", "65536", _R15, 0x10000) )
    __debugbreak();
  clusterCountX = v18->frustumGrid.clusterCountX;
  v22 = (unsigned __int64)(_R15 + 31) >> 5;
  clusterCountY = v18->frustumGrid.clusterCountY;
  v158 = clusterCountX;
  v163 = v22;
  v162 = clusterCountX + clusterCountY;
  memset_0(binMask, 0, 4i64 * (unsigned int)(v22 * (clusterCountX + clusterCountY + 32)));
  _EAX = 16;
  v24 = 512i64;
  __asm
  {
    vmovd   xmm0, eax
    vpslld  xmm1, xmm6, xmm0
    vinsertf128 ymm1, ymm1, xmm1, 1
  }
  _RAX = zBin + 8;
  do
  {
    __asm
    {
      vmovups ymmword ptr [rax-20h], ymm1
      vmovups ymmword ptr [rax], ymm1
    }
    _RAX += 16;
    --v24;
  }
  while ( v24 );
  v29 = 0;
  if ( (_DWORD)v22 )
  {
    __asm
    {
      vmovaps [rsp+1A8h+var_68], xmm7
      vmovaps [rsp+1A8h+var_78], xmm8
      vmovaps [rsp+1A8h+var_88], xmm9
      vmovaps [rsp+1A8h+var_98], xmm10
      vmovaps [rsp+1A8h+var_A8], xmm11
      vmovss  xmm11, cs:__real@3f000000
      vmovaps [rsp+1A8h+var_B8], xmm12
      vmovaps [rsp+1A8h+var_C8], xmm13
      vmovaps [rsp+1A8h+var_D8], xmm14
      vmovss  xmm14, cs:__real@3f800000
      vmovaps [rsp+1A8h+var_E8], xmm15
      vxorps  xmm15, xmm15, xmm15
    }
    v159 = 0;
LABEL_14:
    v33 = 32 * v29;
    while ( v33 < (unsigned int)_R15 )
    {
      ProjectedBoundsNDC = R_FrustumGridClustering_GetProjectedBoundsNDC((const GfxViewParms *)v18, &obbs[v33], &mins, &maxs);
      __asm
      {
        vmovss  xmm5, dword ptr [rsp+1A8h+mins]
        vmovss  xmm6, dword ptr [rsp+1A8h+maxs]
        vmovss  xmm12, dword ptr [rsp+1A8h+maxs+8]
        vmovss  xmm7, dword ptr [rsp+1A8h+maxs+4]
        vmovss  xmm13, dword ptr [rsp+1A8h+mins+8]
        vmovss  xmm8, dword ptr [rsp+1A8h+mins+4]
      }
      v41 = !ProjectedBoundsNDC;
      __asm { vcomiss xmm5, xmm6 }
      if ( ProjectedBoundsNDC )
      {
        v41 = 0;
        v46 = clusterCountX - 1;
        _EDI = 0;
      }
      else
      {
        __asm
        {
          vcomiss xmm8, xmm7
          vcomiss xmm13, xmm12
          vaddss  xmm0, xmm5, xmm14
          vmulss  xmm1, xmm0, xmm11
          vmulss  xmm2, xmm1, dword ptr [r14+1C10h]
          vmulss  xmm3, xmm2, dword ptr [r14+1BD8h]
        }
        v46 = clusterCountX - 1;
        __asm { vcvttss2si edi, xmm3 }
        if ( clusterCountX - 1 < 0 )
        {
          LODWORD(v153) = clusterCountX - 1;
          LODWORD(v152) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v152, v153) )
            __debugbreak();
        }
        if ( clusterCountX <= _EDI )
          _EDI = clusterCountX - 1;
        if ( _EDI < 0 )
          _EDI = 0;
      }
      if ( v41 )
      {
        __asm
        {
          vaddss  xmm0, xmm6, xmm14
          vmulss  xmm1, xmm0, xmm11
          vmulss  xmm2, xmm1, dword ptr [r14+1C10h]
          vmulss  xmm3, xmm2, dword ptr [r14+1BD8h]
          vcvttss2si r12d, xmm3
        }
        if ( v46 < 0 )
        {
          LODWORD(v153) = v46;
          LODWORD(v152) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v152, v153) )
            __debugbreak();
        }
        if ( v46 < _ER12 )
          _ER12 = v46;
        if ( _ER12 < 0 )
          _ER12 = 0;
      }
      else
      {
        _ER12 = v46;
      }
      if ( _EDI > _ER12 )
      {
        LODWORD(v155) = _ER12;
        LODWORD(v154) = _EDI;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_grid_clustering.cpp", 159, ASSERT_TYPE_ASSERT, "( minX ) <= ( maxX )", "%s <= %s\n\t%i, %i", "minX", "maxX", v154, v155) )
          __debugbreak();
      }
      v53 = clusterCountY - 1;
      if ( v41 )
      {
        __asm
        {
          vmulss  xmm0, xmm7, xmm11
          vsubss  xmm0, xmm11, xmm0
          vmulss  xmm1, xmm0, dword ptr [rax+1C14h]
          vmulss  xmm2, xmm1, dword ptr [rax+1BDCh]
          vcvttss2si ebx, xmm2
        }
        if ( v53 < 0 )
        {
          LODWORD(v153) = clusterCountY - 1;
          LODWORD(v152) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v152, v153) )
            __debugbreak();
        }
        if ( clusterCountY <= _EBX )
          _EBX = clusterCountY - 1;
        if ( _EBX < 0 )
          _EBX = 0;
      }
      else
      {
        _EBX = 0;
      }
      if ( v41 )
      {
        __asm
        {
          vmulss  xmm0, xmm8, xmm11
          vsubss  xmm0, xmm11, xmm0
          vmulss  xmm1, xmm0, dword ptr [rax+1C14h]
          vmulss  xmm2, xmm1, dword ptr [rax+1BDCh]
          vcvttss2si r15d, xmm2
        }
        if ( v53 < 0 )
        {
          LODWORD(v153) = clusterCountY - 1;
          LODWORD(v152) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v152, v153) )
            __debugbreak();
        }
        if ( clusterCountY <= _ER15 )
          _ER15 = clusterCountY - 1;
        if ( _ER15 < 0 )
          _ER15 = 0;
      }
      else
      {
        _ER15 = clusterCountY - 1;
      }
      if ( _EBX > _ER15 )
      {
        LODWORD(v155) = _ER15;
        LODWORD(v154) = _EBX;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_grid_clustering.cpp", 163, ASSERT_TYPE_ASSERT, "( minY ) <= ( maxY )", "%s <= %s\n\t%i, %i", "minY", "maxY", v154, v155) )
          __debugbreak();
      }
      _R14 = viewInfo;
      __asm
      {
        vmaxss  xmm0, xmm13, xmm15
        vsubss  xmm2, xmm0, cs:__real@40800000
        vmovss  xmm1, dword ptr [r14+1BB0h]
        vmovss  xmm8, dword ptr [r14+1BB8h]
        vsubss  xmm6, xmm2, xmm1
        vsubss  xmm9, xmm6, dword ptr [r14+1BB4h]
        vdivss  xmm0, xmm2, xmm1; val
        vmovaps xmm2, xmm14; max
        vmovaps xmm1, xmm15; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm10, xmm0
        vdivss  xmm0, xmm6, dword ptr [r14+1BB4h]; val
        vmovaps xmm2, xmm14; max
        vmovaps xmm1, xmm15; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm7, xmm0
        vdivss  xmm0, xmm9, dword ptr [r14+1BB8h]; val
        vmovaps xmm2, xmm14; max
        vmovaps xmm1, xmm15; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm9, xmm8
        vmovaps xmm6, xmm0
        vdivss  xmm0, xmm1, dword ptr [r14+1BBCh]; val
        vmovaps xmm1, xmm15; min
        vmovaps xmm2, xmm14; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vaddss  xmm1, xmm7, xmm10
        vaddss  xmm2, xmm1, xmm6
        vaddss  xmm0, xmm0, xmm2
        vmulss  xmm3, xmm0, cs:__real@3e800000
        vmulss  xmm1, xmm3, cs:__real@42000000
        vcvttss2si rax, xmm1
      }
      v93 = 31;
      __asm
      {
        vmaxss  xmm0, xmm12, xmm15
        vsubss  xmm2, xmm0, cs:__real@40800000
      }
      if ( (unsigned int)_RAX < 0x1F )
        v93 = _RAX;
      _RAX = viewInfo;
      __asm
      {
        vmovss  xmm1, dword ptr [rax+1BB0h]
        vmovss  xmm8, dword ptr [rax+1BB8h]
        vsubss  xmm6, xmm2, xmm1
        vsubss  xmm9, xmm6, dword ptr [rax+1BB4h]
        vdivss  xmm0, xmm2, xmm1; val
        vmovaps xmm2, xmm14; max
        vmovaps xmm1, xmm15; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm10, xmm0
        vmovaps xmm2, xmm14; max
        vmovaps xmm1, xmm15; min
        vdivss  xmm0, xmm6, dword ptr [rax+1BB4h]; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm7, xmm0
        vmovaps xmm2, xmm14; max
        vmovaps xmm1, xmm15; min
        vdivss  xmm0, xmm9, dword ptr [rax+1BB8h]; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm9, xmm8
        vmovaps xmm6, xmm0
        vmovaps xmm2, xmm14; max
        vdivss  xmm0, xmm1, dword ptr [rax+1BBCh]; val
        vmovaps xmm1, xmm15; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vaddss  xmm1, xmm7, xmm10
        vaddss  xmm2, xmm1, xmm6
      }
      v119 = 31;
      __asm
      {
        vaddss  xmm0, xmm0, xmm2
        vmulss  xmm3, xmm0, cs:__real@3e800000
        vmulss  xmm1, xmm3, cs:__real@42000000
        vcvttss2si rax, xmm1
      }
      if ( (unsigned int)_RAX < 0x1F )
        v119 = _RAX;
      v160 = v119;
      if ( v93 > v119 )
      {
        LODWORD(v155) = v119;
        LODWORD(v154) = v93;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_grid_clustering.cpp", 167, ASSERT_TYPE_ASSERT, "( minZ ) <= ( maxZ )", "%s <= %s\n\t%i, %i", "minZ", "maxZ", v154, v155) )
          __debugbreak();
        v119 = v160;
      }
      for ( i = __ROL4__(1, v33 + v159); _EDI <= _ER12; binMask[v29 + v163 * v125] |= i )
        v125 = _EDI++;
      for ( clusterCountX = v158; _EBX <= _ER15; binMask[v29 + v163 * v126] |= i )
      {
        v126 = _EBX + v158;
        ++_EBX;
      }
      if ( v93 <= v119 )
      {
        do
        {
          v127 = v162 + v93++;
          binMask[v29 + v163 * v127] |= i;
        }
        while ( v93 <= v119 );
        clusterCountX = v158;
      }
      __asm
      {
        vmaxss  xmm0, xmm13, xmm15
        vcvttss2si rcx, xmm0
      }
      v130 = (unsigned int)_RCX >> 5;
      v131 = 0x1FFF;
      v132 = 0x1FFFi64;
      __asm
      {
        vmaxss  xmm0, xmm12, xmm15
        vcvttss2si rax, xmm0
      }
      v135 = (unsigned int)_RAX >> 5;
      if ( v135 < 0x1FFF )
        v131 = v135;
      if ( v130 < 0x1FFF )
        v132 = v130;
      for ( ; (unsigned int)v132 <= v131; v132 = (unsigned int)(v132 + 1) )
      {
        v136 = v33;
        v137 = zBin[v132];
        v138 = (unsigned __int16)v137;
        v139 = HIWORD(v137);
        v140 = v33;
        if ( v33 > v139 )
          v136 = v139;
        v141 = v136 << 16;
        if ( v138 > v33 )
          v140 = v138;
        zBin[v132] = v140 | v141;
      }
      v18 = viewInfo;
      ++v33;
      LODWORD(_R15) = v161;
      if ( v159 + v33 >= 0x20 )
      {
        ++v29;
        v159 -= 32;
        if ( v29 < v163 )
          goto LABEL_14;
        break;
      }
    }
    __asm
    {
      vmovaps xmm14, [rsp+1A8h+var_D8]
      vmovaps xmm13, [rsp+1A8h+var_C8]
      vmovaps xmm12, [rsp+1A8h+var_B8]
      vmovaps xmm11, [rsp+1A8h+var_A8]
      vmovaps xmm10, [rsp+1A8h+var_98]
      vmovaps xmm9, [rsp+1A8h+var_88]
      vmovaps xmm8, [rsp+1A8h+var_78]
      vmovaps xmm7, [rsp+1A8h+var_68]
      vmovaps xmm15, [rsp+1A8h+var_E8]
    }
  }
  __asm { vmovaps xmm6, [rsp+1A8h+var_58] }
}

