/*
==============
R_SetPreciseWorldMatrixForShader
==============
*/

void __fastcall R_SetPreciseWorldMatrixForShader(const tmat44_t<vec4_t> *worldMat, tmat44_t<vec4_t> *shaderWorldMat)
{
  ?R_SetPreciseWorldMatrixForShader@@YAXAEBT?$tmat44_t@Tvec4_t@@@@AEAT1@@Z(worldMat, shaderWorldMat);
}

/*
==============
R_SetCodeConstantFromVec4
==============
*/

void __fastcall R_SetCodeConstantFromVec4(GfxCmdBufSourceState *source, unsigned int constant, const vec4_t *value)
{
  ?R_SetCodeConstantFromVec4@@YAXPEAUGfxCmdBufSourceState@@IAEBTvec4_t@@@Z(source, constant, value);
}

/*
==============
R_SetDepthBoundsDisable
==============
*/

void __fastcall R_SetDepthBoundsDisable(GfxCmdBufState *state)
{
  ?R_SetDepthBoundsDisable@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_SetCodeBuffer
==============
*/

void __fastcall R_SetCodeBuffer(GfxCmdBufSourceState *source, unsigned int codeBuffer, const GfxWrappedBuffer *buffer)
{
  ?R_SetCodeBuffer@@YAXPEAUGfxCmdBufSourceState@@IPEBUGfxWrappedBuffer@@@Z(source, codeBuffer, buffer);
}

/*
==============
R_SetCodeImageTextureInternal
==============
*/

void __fastcall R_SetCodeImageTextureInternal(GfxCmdBufSourceState *source, unsigned int codeTexture, const GfxImage *image, const char *fileAndLine)
{
  ?R_SetCodeImageTextureInternal@@YAXPEAUGfxCmdBufSourceState@@IPEBUGfxImage@@PEBD@Z(source, codeTexture, image, fileAndLine);
}

/*
==============
R_SetRenderTargetSize
==============
*/

void __fastcall R_SetRenderTargetSize(GfxCmdBufSourceState *source, unsigned int width, unsigned int height, GfxViewportBehavior viewportBehavior)
{
  ?R_SetRenderTargetSize@@YAXPEAUGfxCmdBufSourceState@@IIW4GfxViewportBehavior@@@Z(source, width, height, viewportBehavior);
}

/*
==============
R_GetCodePersistentBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_GetCodePersistentBuffer(const GfxCmdBufSourceState *source, unsigned int codePersistentBuffer)
{
  return ?R_GetCodePersistentBuffer@@YAPEBUGfxWrappedBuffer@@PEBUGfxCmdBufSourceState@@I@Z(source, codePersistentBuffer);
}

/*
==============
R_ConstantBufferDiffers
==============
*/

bool __fastcall R_ConstantBufferDiffers(const GfxConstantBuffer *lhs, const GfxConstantBuffer *rhs)
{
  return ?R_ConstantBufferDiffers@@YA_NPEBUGfxConstantBuffer@@0@Z(lhs, rhs);
}

/*
==============
R_SetPreciseCodeConstantFromVec4
==============
*/

void __fastcall R_SetPreciseCodeConstantFromVec4(GfxCmdBufSourceState *source, unsigned int constant, const vec4_t *value)
{
  ?R_SetPreciseCodeConstantFromVec4@@YAXPEAUGfxCmdBufSourceState@@IAEBTvec4_t@@@Z(source, constant, value);
}

/*
==============
R_SetInputCodePersistentImageTextureInternal
==============
*/

void __fastcall R_SetInputCodePersistentImageTextureInternal(GfxCmdBufInput *input, unsigned int codePersistentTexture, const GfxImage *image, const char *__formal)
{
  ?R_SetInputCodePersistentImageTextureInternal@@YAXPEAUGfxCmdBufInput@@IPEBUGfxImage@@PEBD@Z(input, codePersistentTexture, image, __formal);
}

/*
==============
R_ClearIfRequired
==============
*/

void __fastcall R_ClearIfRequired(GfxCmdBufState *state, bool forceWritable, unsigned __int8 stencil)
{
  ?R_ClearIfRequired@@YAXPEAUGfxCmdBufState@@_NE@Z(state, forceWritable, stencil);
}

/*
==============
R_DSSetConstantBuffer
==============
*/

bool __fastcall R_DSSetConstantBuffer(GfxCmdBufState *state, unsigned int slot, const GfxConstantBuffer *constant)
{
  return ?R_DSSetConstantBuffer@@YA_NPEAUGfxCmdBufState@@IPEBUGfxConstantBuffer@@@Z(state, slot, constant);
}

/*
==============
R_SetRenderTargetsInternal_ColorOnly
==============
*/

void __fastcall R_SetRenderTargetsInternal_ColorOnly(GfxCmdBufContext *context, R_RT_ColorHandle *colorRt, const char *location)
{
  ?R_SetRenderTargetsInternal_ColorOnly@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@PEBD@Z(context, colorRt, location);
}

/*
==============
R_GetCodePersistentImageTexture
==============
*/

const GfxImage *__fastcall R_GetCodePersistentImageTexture(const GfxCmdBufSourceState *source, unsigned int codePersistentTexture)
{
  return ?R_GetCodePersistentImageTexture@@YAPEBUGfxImage@@PEBUGfxCmdBufSourceState@@I@Z(source, codePersistentTexture);
}

/*
==============
R_DirtyCodeConstant
==============
*/

void __fastcall R_DirtyCodeConstant(GfxCmdBufSourceState *source, unsigned int constant)
{
  ?R_DirtyCodeConstant@@YAXPEAUGfxCmdBufSourceState@@I@Z(source, constant);
}

/*
==============
R_SetRenderTargetsInternal_ColorDepth
==============
*/

void __fastcall R_SetRenderTargetsInternal_ColorDepth(GfxCmdBufContext *context, R_RT_ColorHandle *colorRt, R_RT_DepthHandle *depthRt, const char *location)
{
  ?R_SetRenderTargetsInternal_ColorDepth@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@VR_RT_DepthHandle@@PEBD@Z(context, colorRt, depthRt, location);
}

/*
==============
R_SetDepthBoundsEnable
==============
*/

void __fastcall R_SetDepthBoundsEnable(GfxCmdBufState *state, const float depthBoundsMin, const float depthBoundsMax)
{
  ?R_SetDepthBoundsEnable@@YAXPEAUGfxCmdBufState@@MM@Z(state, depthBoundsMin, depthBoundsMax);
}

/*
==============
R_SetStreamSource
==============
*/

void __fastcall R_SetStreamSource(GfxCmdBufState *state, GfxVertexStream slot, ID3D12Resource *buffer, unsigned int offset, unsigned int stride)
{
  ?R_SetStreamSource@@YAXPEAUGfxCmdBufState@@W4GfxVertexStream@@PEAUID3D12Resource@@II@Z(state, slot, buffer, offset, stride);
}

/*
==============
R_VSSetConstantBuffer
==============
*/

bool __fastcall R_VSSetConstantBuffer(GfxCmdBufState *state, unsigned int slot, const GfxConstantBuffer *constant)
{
  return ?R_VSSetConstantBuffer@@YA_NPEAUGfxCmdBufState@@IPEBUGfxConstantBuffer@@@Z(state, slot, constant);
}

/*
==============
R_HSSetConstantBuffer
==============
*/

bool __fastcall R_HSSetConstantBuffer(GfxCmdBufState *state, unsigned int slot, const GfxConstantBuffer *constant)
{
  return ?R_HSSetConstantBuffer@@YA_NPEAUGfxCmdBufState@@IPEBUGfxConstantBuffer@@@Z(state, slot, constant);
}

/*
==============
R_PSSetConstantBuffer
==============
*/

bool __fastcall R_PSSetConstantBuffer(GfxCmdBufState *state, unsigned int slot, const GfxConstantBuffer *constant)
{
  return ?R_PSSetConstantBuffer@@YA_NPEAUGfxCmdBufState@@IPEBUGfxConstantBuffer@@@Z(state, slot, constant);
}

/*
==============
R_HW_SetRenderTargets
==============
*/

void __fastcall R_HW_SetRenderTargets(GfxCmdBufState *state, unsigned int colorRtCount, const R_RT_ColorHandle *colorRts, R_RT_DepthHandle *depthRt)
{
  ?R_HW_SetRenderTargets@@YAXPEAUGfxCmdBufState@@IPEBVR_RT_ColorHandle@@VR_RT_DepthHandle@@@Z(state, colorRtCount, colorRts, depthRt);
}

/*
==============
R_SetRenderTargetSize
==============
*/

void __fastcall R_SetRenderTargetSize(GfxCmdBufSourceState *source, const R_RT_Group *rtGroup, GfxViewportBehavior viewportBehavior)
{
  ?R_SetRenderTargetSize@@YAXPEAUGfxCmdBufSourceState@@AEBUR_RT_Group@@W4GfxViewportBehavior@@@Z(source, rtGroup, viewportBehavior);
}

/*
==============
R_ShutdownLocalCmdBufState
==============
*/

void __fastcall R_ShutdownLocalCmdBufState(GfxCmdBufState *state, GfxCmdBufInput *input)
{
  ?R_ShutdownLocalCmdBufState@@YAXPEAUGfxCmdBufState@@PEAUGfxCmdBufInput@@@Z(state, input);
}

/*
==============
R_SetIndicesWithType
==============
*/

void __fastcall R_SetIndicesWithType(GfxCmdBufState *state, ID3D12Resource *indexBuffer, DXGI_FORMAT indexType)
{
  ?R_SetIndicesWithType@@YAXPEAUGfxCmdBufState@@PEAUID3D12Resource@@W4DXGI_FORMAT@@@Z(state, indexBuffer, indexType);
}

/*
==============
R_SetRenderTargetsInternal_None
==============
*/

void __fastcall R_SetRenderTargetsInternal_None(GfxCmdBufContext *context, const char *location)
{
  ?R_SetRenderTargetsInternal_None@@YAXUGfxCmdBufContext@@PEBD@Z(context, location);
}

/*
==============
R_InitLocalCmdBufState
==============
*/

void __fastcall R_InitLocalCmdBufState(GfxCmdBufState *state, GfxCmdBufInput *input)
{
  ?R_InitLocalCmdBufState@@YAXPEAUGfxCmdBufState@@PEAUGfxCmdBufInput@@@Z(state, input);
}

/*
==============
R_SetInputCodeImageTextureInternal
==============
*/

void __fastcall R_SetInputCodeImageTextureInternal(GfxCmdBufInput *input, unsigned int codeTexture, const GfxImage *image, const char *__formal)
{
  ?R_SetInputCodeImageTextureInternal@@YAXPEAUGfxCmdBufInput@@IPEBUGfxImage@@PEBD@Z(input, codeTexture, image, __formal);
}

/*
==============
R_SetRenderTargetsInternal_DepthOnly
==============
*/

void __fastcall R_SetRenderTargetsInternal_DepthOnly(GfxCmdBufContext *context, R_RT_DepthHandle *depthRt, const char *location)
{
  ?R_SetRenderTargetsInternal_DepthOnly@@YAXUGfxCmdBufContext@@VR_RT_DepthHandle@@PEBD@Z(context, depthRt, location);
}

/*
==============
R_SetRenderTargetAspect
==============
*/

void __fastcall R_SetRenderTargetAspect(GfxCmdBufSourceState *source, float aspect)
{
  ?R_SetRenderTargetAspect@@YAXPEAUGfxCmdBufSourceState@@M@Z(source, aspect);
}

/*
==============
R_GetCodeBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_GetCodeBuffer(const GfxCmdBufSourceState *source, unsigned int codeBuffer)
{
  return ?R_GetCodeBuffer@@YAPEBUGfxWrappedBuffer@@PEBUGfxCmdBufSourceState@@I@Z(source, codeBuffer);
}

/*
==============
R_GetCodeImageTexture
==============
*/

const GfxImage *__fastcall R_GetCodeImageTexture(const GfxCmdBufSourceState *source, unsigned int codeTexture)
{
  return ?R_GetCodeImageTexture@@YAPEBUGfxImage@@PEBUGfxCmdBufSourceState@@I@Z(source, codeTexture);
}

/*
==============
R_RT_DestroyAndClearGroup
==============
*/

void __fastcall R_RT_DestroyAndClearGroup(GfxCmdBufContext *context, R_RT_Group *rtGroup)
{
  ?R_RT_DestroyAndClearGroup@@YAXUGfxCmdBufContext@@PEAUR_RT_Group@@@Z(context, rtGroup);
}

/*
==============
R_UpdateCodeConstant
==============
*/

void __fastcall R_UpdateCodeConstant(GfxCmdBufSourceState *source, unsigned int constant, float x, float y, float z, float w)
{
  ?R_UpdateCodeConstant@@YAXPEAUGfxCmdBufSourceState@@IMMMM@Z(source, constant, x, y, z, w);
}

/*
==============
R_SetIndices
==============
*/

void __fastcall R_SetIndices(GfxCmdBufState *state, ID3D12Resource *indexBuffer)
{
  ?R_SetIndices@@YAXPEAUGfxCmdBufState@@PEAUID3D12Resource@@@Z(state, indexBuffer);
}

/*
==============
R_SetCodeBuffer
==============
*/
void R_SetCodeBuffer(GfxCmdBufSourceState *source, unsigned int codeBuffer, const GfxWrappedBuffer *buffer)
{
  GfxCmdBufInput *p_input; 
  __int64 v4; 
  __int64 v6; 
  int v7; 

  p_input = &source->input;
  v4 = codeBuffer;
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x34 )
  {
    v7 = 52;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1495, ASSERT_TYPE_ASSERT, "(unsigned)( codeBuffer ) < (unsigned)( BUFFER_SRC_CODE_COUNT )", "codeBuffer doesn't index BUFFER_SRC_CODE_COUNT\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  p_input->codeBuffers[v4] = buffer;
}

/*
==============
R_SetRenderTargetsInternal_ColorOnly
==============
*/
void R_SetRenderTargetsInternal_ColorOnly(GfxCmdBufContext *context, R_RT_ColorHandle *colorRt, const char *location)
{
  unsigned __int16 m_surfaceID; 
  GfxCmdBufContext v9; 
  R_RT_Handle v10; 
  R_RT_Handle v11; 
  R_RT_Handle v12; 
  _BYTE v13[64]; 
  __m256i v14; 
  __m256i v15; 
  _BYTE v16[64]; 
  const char *v17; 
  R_RT_Group v18; 

  m_surfaceID = _XMM0;
  v11 = colorRt->R_RT_Handle;
  v10 = v11;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v10);
    LODWORD(_RBX) = v10.m_tracking.m_allocCounter;
    m_surfaceID = v10.m_surfaceID;
    v11 = v10;
  }
  else
  {
    __asm { vpextrd rbx, xmm0, 2 }
    if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  v13[0] = 1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v10.m_surfaceID = 0;
  v10.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v10.m_tracking.m_name = _XMM0;
  v12 = v11;
  if ( m_surfaceID )
  {
    R_RT_Handle::GetSurface(&v12);
  }
  else
  {
    if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  *(R_RT_Handle *)&v13[8] = v11;
  *(R_RT_Handle *)&v16[8] = v10;
  *(__m256i *)&v18.m_colorRtCount = *(__m256i *)v13;
  *(__m256i *)&v18.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v13[32];
  *(__m256i *)&v18.m_colorRts[1].m_tracking.m_location = v14;
  *(__m256i *)&v18.m_colorRts[2].m_tracking.m_location = v15;
  v9 = *context;
  *(__m256i *)&v18.m_colorRts[3].m_tracking.m_location = *(__m256i *)v16;
  *(__m256i *)&v18.m_depthRt.m_tracking.m_location = *(__m256i *)&v16[32];
  v18.m_vrsRt.m_tracking.m_location = v17;
  *(GfxCmdBufContext *)&v10.m_surfaceID = v9;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v10, &v18, location);
}

/*
==============
R_SetIndicesWithType
==============
*/
void R_SetIndicesWithType(GfxCmdBufState *state, ID3D12Resource *indexBuffer, DXGI_FORMAT indexType)
{
  GfxDevice *device; 
  __int64 v7; 
  int v8; 
  unsigned int *m_pCurrent; 
  __int64 v10; 
  int v11; 
  DXGI_FORMAT v12; 
  char v13[16]; 
  unsigned __int64 v14; 

  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( state->indexBuffer != indexBuffer || state->indexType != indexType || !state->isIndexBufferBound )
  {
    device = state->device;
    if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1645, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
      __debugbreak();
    state->indexBuffer = indexBuffer;
    state->indexType = indexType;
    v12 = indexType;
    if ( indexBuffer )
    {
      ((void (__fastcall *)(ID3D12Resource *, char *))indexBuffer->m_pFunction[3].AddRef)(indexBuffer, v13);
      if ( v14 >= 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1658, ASSERT_TYPE_ASSERT, "(ibDesc.Width < 0xffffffff)", (const char *)&queryFormat, "ibDesc.Width < UINT_MAX") )
        __debugbreak();
      v7 = ((__int64 (__fastcall *)(ID3D12Resource *))indexBuffer->m_pFunction[3].Release)(indexBuffer);
      v8 = v14;
      v10 = v7;
      if ( v14 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v14, "unsigned", v14) )
        __debugbreak();
      v11 = v8;
      indexType = v12;
    }
    else
    {
      v10 = 0i64;
      v11 = 0;
    }
    m_pCurrent = device->m_Putter.m_pCurrent;
    if ( m_pCurrent >= device->m_Putter.m_pLimit_Api )
    {
      ((void (__fastcall *)(GfxDevice *, __int64 *))device->m_pFunction[15].Release)(device, &v10);
    }
    else
    {
      *m_pCurrent = indexType + 1073854208;
      *(_QWORD *)(m_pCurrent + 1) = v10;
      device->m_Putter.m_pCurrent = m_pCurrent + 3;
    }
    state->isIndexBufferBound = indexBuffer != NULL;
  }
}

/*
==============
R_InitLocalCmdBufState
==============
*/
void R_InitLocalCmdBufState(GfxCmdBufState *state, GfxCmdBufInput *input)
{
  GfxCmdBufContext result; 

  if ( (*((_BYTE *)input + 7920) & 1) != 0 )
  {
    R_LockIfGfxImmediateContext(state->device);
    R_InitCmdBufState(state);
  }
  else
  {
    R_LockGfxImmediateContext();
    _XMM0 = (__int128)*RB_GetBackendCmdBufContext(&result);
    __asm { vpextrq rdx, xmm0, 1; in }
    if ( state != _RDX )
      GfxCmdBufState::Copy(state, _RDX);
  }
  memset_0(state->perPrimConstantState, 255, sizeof(state->perPrimConstantState));
  memset_0(state->perObjectConstantState, 255, sizeof(state->perObjectConstantState));
  memset_0(state->stableConstantState, 255, sizeof(state->stableConstantState));
  state->data = input->data;
}

/*
==============
R_ShutdownLocalCmdBufState
==============
*/
void R_ShutdownLocalCmdBufState(GfxCmdBufState *state, GfxCmdBufInput *input)
{
  GfxCmdBufContext result; 

  R_ResetRenderTargets(state);
  if ( (*((_BYTE *)input + 7920) & 1) != 0 )
  {
    R_ShutdownCmdBufState(state);
    R_UnlockIfGfxImmediateContext(state->device);
  }
  else
  {
    _XMM0 = (__int128)*RB_GetBackendCmdBufContext(&result);
    __asm { vpextrq rcx, xmm0, 1; out }
    if ( state != _RCX )
    {
      GfxCmdBufState::Copy(_RCX, state);
      R_FlushImmediateContext();
    }
    R_UnlockGfxImmediateContext();
  }
}

/*
==============
R_DirtyCodeConstant
==============
*/
void R_DirtyCodeConstant(GfxCmdBufSourceState *source, unsigned int constant)
{
  __int64 v2; 
  int v5; 

  v2 = constant;
  if ( constant >= 0xAE )
  {
    v5 = 174;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( constant ) < (unsigned)( ( sizeof( *array_counter( source->constVersions ) ) + 0 ) )", "constant doesn't index ARRAY_COUNT( source->constVersions )\n\t%i not in [0, %i)", constant, v5) )
      __debugbreak();
  }
  ++source->constVersions[v2];
}

/*
==============
R_SetRenderTargetsInternal_None
==============
*/
void R_SetRenderTargetsInternal_None(GfxCmdBufContext *context, const char *location)
{
  GfxCmdBufContext v4; 
  GfxCmdBufContext v5; 
  __m256i v6; 
  __m256i v7; 
  __m256i v8; 
  __m256i v9; 
  _BYTE v10[72]; 
  R_RT_Group v11; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v10[24] = _XMM0;
  *(_OWORD *)&v10[56] = _XMM0;
  v6.m256i_i8[0] = 0;
  *(_WORD *)&v10[8] = 0;
  *(_DWORD *)&v10[16] = 0;
  *(_WORD *)&v10[40] = 0;
  *(_DWORD *)&v10[48] = 0;
  *(__m256i *)&v11.m_colorRtCount = v6;
  *(__m256i *)&v11.m_colorRts[0].m_tracking.m_location = v7;
  *(__m256i *)&v11.m_colorRts[1].m_tracking.m_location = v8;
  *(__m256i *)&v11.m_colorRts[2].m_tracking.m_location = v9;
  v4 = *context;
  *(__m256i *)&v11.m_colorRts[3].m_tracking.m_location = *(__m256i *)v10;
  *(__m256i *)&v11.m_depthRt.m_tracking.m_location = *(__m256i *)&v10[32];
  v11.m_vrsRt.m_tracking.m_location = *(const char **)&v10[64];
  v5 = v4;
  R_SetRenderTargetsInternal(&v5, &v11, location);
}

/*
==============
R_SetCodeImageTextureInternal
==============
*/
void R_SetCodeImageTextureInternal(GfxCmdBufSourceState *source, unsigned int codeTexture, const GfxImage *image, const char *fileAndLine)
{
  __int64 v4; 
  GfxCmdBufInput *p_input; 
  __int64 v8; 

  v4 = codeTexture;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x56 )
  {
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1471, ASSERT_TYPE_ASSERT, "(unsigned)( codeTexture ) < (unsigned)( TEXTURE_SRC_CODE_COUNT )", "codeTexture doesn't index TEXTURE_SRC_CODE_COUNT\n\t%i not in [0, %i)", v8, 86) )
      __debugbreak();
  }
  p_input->codeImages[v4] = image;
}

/*
==============
R_SetIndices
==============
*/
void R_SetIndices(GfxCmdBufState *state, ID3D12Resource *indexBuffer)
{
  GfxDevice *device; 
  int v5; 
  unsigned int *m_pCurrent; 
  __int64 v7; 
  unsigned int v8; 
  int v9; 
  char v10[16]; 
  unsigned __int64 val; 

  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( state->indexBuffer != indexBuffer || state->indexType != DXGI_FORMAT_R16_UINT || !state->isIndexBufferBound )
  {
    device = state->device;
    if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1645, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
      __debugbreak();
    state->indexBuffer = indexBuffer;
    v5 = 57;
    state->indexType = DXGI_FORMAT_R16_UINT;
    v9 = 57;
    if ( indexBuffer )
    {
      ((void (__fastcall *)(ID3D12Resource *, char *))indexBuffer->m_pFunction[3].AddRef)(indexBuffer, v10);
      if ( val >= 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1658, ASSERT_TYPE_ASSERT, "(ibDesc.Width < 0xffffffff)", (const char *)&queryFormat, "ibDesc.Width < UINT_MAX") )
        __debugbreak();
      v7 = ((__int64 (__fastcall *)(ID3D12Resource *))indexBuffer->m_pFunction[3].Release)(indexBuffer);
      v8 = truncate_cast<unsigned int,unsigned __int64>(val);
      v5 = v9;
    }
    else
    {
      v7 = 0i64;
      v8 = 0;
    }
    m_pCurrent = device->m_Putter.m_pCurrent;
    if ( m_pCurrent >= device->m_Putter.m_pLimit_Api )
    {
      ((void (__fastcall *)(GfxDevice *, __int64 *))device->m_pFunction[15].Release)(device, &v7);
    }
    else
    {
      *m_pCurrent = v5 + 1073854208;
      *(_QWORD *)(m_pCurrent + 1) = v7;
      device->m_Putter.m_pCurrent = m_pCurrent + 3;
    }
    state->isIndexBufferBound = indexBuffer != NULL;
  }
}

/*
==============
R_SetStreamSource
==============
*/
void R_SetStreamSource(GfxCmdBufState *state, GfxVertexStream slot, ID3D12Resource *buffer, unsigned int offset, unsigned int stride)
{
  __int64 v5; 

  v5 = slot;
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1810, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( state->streams[v5].buffer != buffer || state->streams[v5].offset != offset || state->streams[v5].stride != stride )
  {
    state->streams[v5].buffer = buffer;
    state->streams[v5].offset = offset;
    state->streams[v5].stride = stride;
    ++state->streamVersions[v5];
  }
}

/*
==============
R_SetRenderTargetsInternal_DepthOnly
==============
*/
void R_SetRenderTargetsInternal_DepthOnly(GfxCmdBufContext *context, R_RT_DepthHandle *depthRt, const char *location)
{
  __m256i v7; 
  GfxCmdBufContext v8; 
  R_RT_Handle v9; 
  R_RT_Handle v10; 
  __m256i v11; 
  __m256i v12; 
  __m256i v13; 
  __m256i v14; 
  _BYTE v15[64]; 
  const char *v16; 
  R_RT_Group v17; 

  v10 = depthRt->R_RT_Handle;
  v9 = v10;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v9);
    v7 = (__m256i)v9;
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
      __debugbreak();
    v7 = (__m256i)v10;
  }
  *(__m256i *)&v15[8] = v7;
  v11.m256i_i8[0] = 0;
  *(__m256i *)&v17.m_colorRtCount = v11;
  *(__m256i *)&v17.m_colorRts[0].m_tracking.m_location = v12;
  *(__m256i *)&v17.m_colorRts[1].m_tracking.m_location = v13;
  *(__m256i *)&v17.m_colorRts[2].m_tracking.m_location = v14;
  v8 = *context;
  *(__m256i *)&v17.m_colorRts[3].m_tracking.m_location = *(__m256i *)v15;
  *(__m256i *)&v17.m_depthRt.m_tracking.m_location = *(__m256i *)&v15[32];
  v17.m_vrsRt.m_tracking.m_location = v16;
  *(GfxCmdBufContext *)&v9.m_surfaceID = v8;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v9, &v17, location);
}

/*
==============
R_SetDepthBoundsEnable
==============
*/
void R_SetDepthBoundsEnable(GfxCmdBufState *state, const float depthBoundsMin, const float depthBoundsMax)
{
  __asm { vxorpd  xmm11, xmm11, xmm11 }
  if ( (depthBoundsMin < 0.0 || depthBoundsMin > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2279, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( depthBoundsMin ) && ( depthBoundsMin ) <= ( 1.0f )", "depthBoundsMin not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", depthBoundsMin, *(double *)&_XMM11, DOUBLE_1_0) )
    __debugbreak();
  if ( (depthBoundsMax < 0.0 || depthBoundsMax > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2280, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( depthBoundsMax ) && ( depthBoundsMax ) <= ( 1.0f )", "depthBoundsMax not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", depthBoundsMax, *(double *)&_XMM11, DOUBLE_1_0) )
    __debugbreak();
  if ( depthBoundsMin > depthBoundsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2281, ASSERT_TYPE_ASSERT, "( depthBoundsMin ) <= ( depthBoundsMax )", "%s <= %s\n\t%g, %g", "depthBoundsMin", "depthBoundsMax", depthBoundsMin, depthBoundsMax) )
    __debugbreak();
  if ( depthBoundsMin != state->depthBoundsMin || depthBoundsMax != state->depthBoundsMax )
  {
    state->depthBoundsMin = depthBoundsMin;
    state->depthBoundsMax = depthBoundsMax;
    if ( (depthBoundsMin < 0.0 || depthBoundsMin > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1012, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( minZ ) && ( minZ ) <= ( 1.0f )", "minZ not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", depthBoundsMin, *(double *)&_XMM11, DOUBLE_1_0) )
      __debugbreak();
    if ( (depthBoundsMax < 0.0 || depthBoundsMax > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1013, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( maxZ ) && ( maxZ ) <= ( 1.0f )", "maxZ not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", depthBoundsMax, *(double *)&_XMM11, DOUBLE_1_0) )
      __debugbreak();
    if ( depthBoundsMin > depthBoundsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1014, ASSERT_TYPE_ASSERT, "(minZ <= maxZ)", (const char *)&queryFormat, "minZ <= maxZ") )
      __debugbreak();
    if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
      __debugbreak();
    state->device->m_pFunction[22].Release(state->device);
  }
}

/*
==============
R_SetResourceInternal
==============
*/
void R_SetResourceInternal(GfxCmdBufState *state, GfxShaderImageSetStage imageSetID, unsigned int resourceIndex, const GfxShaderBufferView *view)
{
  __int64 v4; 
  unsigned __int64 v5; 

  v4 = resourceIndex + 40i64 * (unsigned __int8)imageSetID;
  if ( state->shaderResourceViews[0][v4].buffer.view != view->view || state->shaderResourceViews[0][v4].buffer.resource != view->resource || (v5 = state->resourcesClear[(unsigned __int8)imageSetID], !_bittest64((const __int64 *)&v5, resourceIndex)) )
  {
    state->resourcesDirty[(unsigned __int8)imageSetID] |= 1i64 << resourceIndex;
    state->resourcesClear[(unsigned __int8)imageSetID] |= 1i64 << resourceIndex;
    state->shaderResourceViews[0][v4].buffer = *view;
  }
}

/*
==============
R_SetInputCodeImageTextureInternal
==============
*/
void R_SetInputCodeImageTextureInternal(GfxCmdBufInput *input, unsigned int codeTexture, const GfxImage *image, const char *__formal)
{
  __int64 v4; 
  __int64 v7; 

  v4 = codeTexture;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x56 )
  {
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1471, ASSERT_TYPE_ASSERT, "(unsigned)( codeTexture ) < (unsigned)( TEXTURE_SRC_CODE_COUNT )", "codeTexture doesn't index TEXTURE_SRC_CODE_COUNT\n\t%i not in [0, %i)", v7, 86) )
      __debugbreak();
  }
  input->codeImages[v4] = image;
}

/*
==============
R_SetInputCodePersistentImageTextureInternal
==============
*/
void R_SetInputCodePersistentImageTextureInternal(GfxCmdBufInput *input, unsigned int codePersistentTexture, const GfxImage *image, const char *__formal)
{
  __int64 v4; 
  __int64 v7; 

  v4 = codePersistentTexture;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x2A )
  {
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1483, ASSERT_TYPE_ASSERT, "(unsigned)( codePersistentTexture ) < (unsigned)( TEXTURE_SRC_CODE_PERSISTENT_COUNT )", "codePersistentTexture doesn't index TEXTURE_SRC_CODE_PERSISTENT_COUNT\n\t%i not in [0, %i)", v7, 42) )
      __debugbreak();
  }
  input->codePersistentImages[v4] = image;
}

/*
==============
R_ConstantBufferDiffers
==============
*/
bool R_ConstantBufferDiffers(const GfxConstantBuffer *lhs, const GfxConstantBuffer *rhs)
{
  if ( !rhs->bufferData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2101, ASSERT_TYPE_ASSERT, "(rhs->bufferData != 0)", (const char *)&queryFormat, "rhs->bufferData != NULL") )
    __debugbreak();
  return lhs->bufferData != rhs->bufferData || lhs->bufferSize != rhs->bufferSize;
}

/*
==============
R_DSSetConstantBuffer
==============
*/
char R_DSSetConstantBuffer(GfxCmdBufState *state, unsigned int slot, const GfxConstantBuffer *constant)
{
  char v3; 
  GfxConstantBuffer *v6; 

  v3 = slot;
  v6 = &state->constants[3][slot];
  if ( !R_ConstantBufferDiffers(v6, constant) )
    return 0;
  v6->GfxConstantBufferDesc = constant->GfxConstantBufferDesc;
  v6->buffer = constant->buffer;
  state->constantsDirty[3] |= 1 << v3;
  return 1;
}

/*
==============
R_GetCodeBuffer
==============
*/
const GfxWrappedBuffer *R_GetCodeBuffer(const GfxCmdBufSourceState *source, unsigned int codeBuffer)
{
  __int64 v2; 
  GfxCmdBufInput *p_input; 
  __int64 v6; 

  v2 = codeBuffer;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1552, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1441, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x34 )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1442, ASSERT_TYPE_ASSERT, "(unsigned)( codeBuffer ) < (unsigned)( BUFFER_SRC_CODE_COUNT )", "codeBuffer doesn't index BUFFER_SRC_CODE_COUNT\n\t%i not in [0, %i)", v6, 52) )
      __debugbreak();
  }
  return p_input->codeBuffers[v2];
}

/*
==============
R_GetCodeImageTexture
==============
*/
const GfxImage *R_GetCodeImageTexture(const GfxCmdBufSourceState *source, unsigned int codeTexture)
{
  __int64 v2; 
  GfxCmdBufInput *p_input; 
  __int64 v6; 

  v2 = codeTexture;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1538, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1425, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x56 )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1426, ASSERT_TYPE_ASSERT, "(unsigned)( codeTexture ) < (unsigned)( TEXTURE_SRC_CODE_COUNT )", "codeTexture doesn't index TEXTURE_SRC_CODE_COUNT\n\t%i not in [0, %i)", v6, 86) )
      __debugbreak();
  }
  return p_input->codeImages[v2];
}

/*
==============
R_GetCodePersistentBuffer
==============
*/
const GfxWrappedBuffer *R_GetCodePersistentBuffer(const GfxCmdBufSourceState *source, unsigned int codePersistentBuffer)
{
  __int64 v2; 
  GfxCmdBufInput *p_input; 
  __int64 v6; 

  v2 = codePersistentBuffer;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1559, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1449, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x29 )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1450, ASSERT_TYPE_ASSERT, "(unsigned)( codePersistentBuffer ) < (unsigned)( BUFFER_SRC_CODE_PERSISTENT_COUNT )", "codePersistentBuffer doesn't index BUFFER_SRC_CODE_PERSISTENT_COUNT\n\t%i not in [0, %i)", v6, 41) )
      __debugbreak();
  }
  return p_input->codePersistentBuffers[v2];
}

/*
==============
R_GetCodePersistentImageTexture
==============
*/
const GfxImage *R_GetCodePersistentImageTexture(const GfxCmdBufSourceState *source, unsigned int codePersistentTexture)
{
  __int64 v2; 
  GfxCmdBufInput *p_input; 
  __int64 v6; 

  v2 = codePersistentTexture;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1545, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1433, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x2A )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1434, ASSERT_TYPE_ASSERT, "(unsigned)( codePersistentTexture ) < (unsigned)( TEXTURE_SRC_CODE_PERSISTENT_COUNT )", "codePersistentTexture doesn't index TEXTURE_SRC_CODE_PERSISTENT_COUNT\n\t%i not in [0, %i)", v6, 42) )
      __debugbreak();
  }
  return p_input->codePersistentImages[v2];
}

/*
==============
R_HSSetConstantBuffer
==============
*/
char R_HSSetConstantBuffer(GfxCmdBufState *state, unsigned int slot, const GfxConstantBuffer *constant)
{
  char v3; 
  GfxConstantBuffer *v6; 

  v3 = slot;
  v6 = &state->constants[2][slot];
  if ( !R_ConstantBufferDiffers(v6, constant) )
    return 0;
  v6->GfxConstantBufferDesc = constant->GfxConstantBufferDesc;
  v6->buffer = constant->buffer;
  state->constantsDirty[2] |= 1 << v3;
  return 1;
}

/*
==============
R_PSSetConstantBuffer
==============
*/
char R_PSSetConstantBuffer(GfxCmdBufState *state, unsigned int slot, const GfxConstantBuffer *constant)
{
  char v3; 
  GfxConstantBuffer *v6; 

  v3 = slot;
  v6 = &state->constants[1][slot];
  if ( !R_ConstantBufferDiffers(v6, constant) )
    return 0;
  v6->GfxConstantBufferDesc = constant->GfxConstantBufferDesc;
  v6->buffer = constant->buffer;
  state->constantsDirty[1] |= 1 << v3;
  return 1;
}

/*
==============
R_VSSetConstantBuffer
==============
*/
char R_VSSetConstantBuffer(GfxCmdBufState *state, unsigned int slot, const GfxConstantBuffer *constant)
{
  char v3; 
  GfxConstantBuffer *v6; 

  v3 = slot;
  v6 = &state->constants[0][slot];
  if ( !R_ConstantBufferDiffers(v6, constant) )
    return 0;
  v6->GfxConstantBufferDesc = constant->GfxConstantBufferDesc;
  v6->buffer = constant->buffer;
  state->constantsDirty[0] |= 1 << v3;
  return 1;
}

/*
==============
R_HW_SetRenderTargets
==============
*/
void R_HW_SetRenderTargets(GfxCmdBufState *state, unsigned int colorRtCount, const R_RT_ColorHandle *colorRts, R_RT_DepthHandle *depthRt)
{
  GfxDevice *device; 
  unsigned int DepthTargetView; 
  unsigned int v11; 
  __int64 v12; 
  const R_RT_Surface *Surface; 
  unsigned int m_targetView; 
  const R_RT_Surface *v15; 
  unsigned int v16; 
  float depthBoundsMin; 
  float depthBoundsMax; 
  GfxDevice *v20; 
  R_RT_DepthHandle v21; 
  unsigned int rtvs[2]; 

  *(_QWORD *)rtvs = colorRts;
  if ( colorRtCount > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1866, ASSERT_TYPE_ASSERT, "(colorRtCount <= 4)", (const char *)&queryFormat, "colorRtCount <= R_MAX_RENDER_TARGETS") )
    __debugbreak();
  device = state->device;
  v20 = device;
  if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1868, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  v21 = *depthRt;
  R_ProfMarkRenderTargets(state, colorRtCount, colorRts, &v21);
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  DepthTargetView = 0;
  v11 = 0;
  if ( colorRtCount )
  {
    v12 = *(_QWORD *)rtvs;
    do
    {
      Surface = R_RT_Handle::GetSurface((R_RT_Handle *)(v12 + 32i64 * v11));
      if ( (Surface->m_rtFlagsInternal & 0x2010) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 339, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_None)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_None") )
        __debugbreak();
      m_targetView = Surface->m_targetView;
      if ( !m_targetView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 341, ASSERT_TYPE_ASSERT, "(colorTargetView)", (const char *)&queryFormat, "colorTargetView") )
        __debugbreak();
      rtvs[v11] = m_targetView;
      state->deviceState.colorRtViews[v11] = m_targetView;
      if ( R_RT_Handle::IsValid(depthRt) )
      {
        v15 = R_RT_Handle::GetSurface(depthRt);
        if ( (v15->m_rtFlagsInternal & 0x2010) != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 429, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth") )
          __debugbreak();
        v16 = v15->m_targetView;
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 431, ASSERT_TYPE_ASSERT, "(depthTargetView)", (const char *)&queryFormat, "depthTargetView") )
          __debugbreak();
      }
      else
      {
        v16 = 0;
      }
      ++v11;
      state->deviceState.depthRtView = v16;
    }
    while ( v11 != colorRtCount );
    device = v20;
  }
  state->deviceState.numRenderTargets = colorRtCount;
  if ( R_RT_Handle::IsValid(depthRt) )
    DepthTargetView = R_RT_DepthHandle::DX_GetDepthTargetView(depthRt);
  R_HW_SetRenderTargetsDX(device, state->descState, colorRtCount, rtvs, DepthTargetView);
  depthBoundsMin = state->depthBoundsMin;
  depthBoundsMax = state->depthBoundsMax;
  __asm { vxorpd  xmm11, xmm11, xmm11 }
  if ( (depthBoundsMin < 0.0 || depthBoundsMin > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1012, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( minZ ) && ( minZ ) <= ( 1.0f )", "minZ not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", depthBoundsMin, *(double *)&_XMM11, DOUBLE_1_0) )
    __debugbreak();
  if ( (depthBoundsMax < 0.0 || depthBoundsMax > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1013, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( maxZ ) && ( maxZ ) <= ( 1.0f )", "maxZ not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", depthBoundsMax, *(double *)&_XMM11, DOUBLE_1_0) )
    __debugbreak();
  if ( depthBoundsMin > depthBoundsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1014, ASSERT_TYPE_ASSERT, "(minZ <= maxZ)", (const char *)&queryFormat, "minZ <= maxZ") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  state->device->m_pFunction[22].Release(state->device);
}

/*
==============
R_SetPreciseWorldMatrixForShader
==============
*/
void R_SetPreciseWorldMatrixForShader(const tmat44_t<vec4_t> *worldMat, tmat44_t<vec4_t> *shaderWorldMat)
{
  __m256i v2; 
  tmat44_t<vec4_t> in; 

  v2 = *(__m256i *)worldMat->m[0].v;
  *(__m256i *)in.row2.v = *(__m256i *)worldMat->row2.v;
  *(__m256i *)in.m[0].v = v2;
  __asm { vextractf128 xmm0, ymm1, 1 }
  LODWORD(in.m[3].v[0]) = (int)(float)(*(float *)&_XMM0 * 4096.0);
  LODWORD(in.m[3].v[1]) = (int)(float)(4096.0 * in.m[3].v[1]);
  LODWORD(in.m[3].v[2]) = (int)(float)(4096.0 * in.m[3].v[2]);
  MatrixTranspose44Aligned(&in, shaderWorldMat);
}

/*
==============
R_SetRenderTargetSize
==============
*/
void R_SetRenderTargetSize(GfxCmdBufSourceState *source, unsigned int width, unsigned int height, GfxViewportBehavior viewportBehavior)
{
  __int64 v8; 

  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2684, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( viewportBehavior == GFX_USE_VIEWPORT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2685, ASSERT_TYPE_ASSERT, "(viewportBehavior != GFX_USE_VIEWPORT_INVALID)", (const char *)&queryFormat, "viewportBehavior != GFX_USE_VIEWPORT_INVALID") )
    __debugbreak();
  if ( !width )
  {
    LODWORD(v8) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2686, ASSERT_TYPE_ASSERT, "( ( width > 0 ) )", "( width ) = %i", v8) )
      __debugbreak();
  }
  if ( !height )
  {
    LODWORD(v8) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2687, ASSERT_TYPE_ASSERT, "( ( height > 0 ) )", "( height ) = %i", v8) )
      __debugbreak();
  }
  source->viewportBehavior = viewportBehavior;
  source->renderTargetWidth = width;
  source->renderTargetHeight = height;
  source->pixelAspect = 1.0;
}

/*
==============
R_SetCodeConstantFromVec4
==============
*/
void R_SetCodeConstantFromVec4(GfxCmdBufSourceState *source, unsigned int constant, const vec4_t *value)
{
  __int64 v3; 
  float *v; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v3 = constant;
  if ( constant >= 0xA0 )
  {
    v10 = 160;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1362, ASSERT_TYPE_ASSERT, "(unsigned)( constant ) < (unsigned)( CONST_SRC_CODE_COUNT_FLOAT4 )", "constant doesn't index CONST_SRC_CODE_COUNT_FLOAT4\n\t%i not in [0, %i)", constant, v10) )
      __debugbreak();
  }
  v = source->input.consts[v3].v;
  *v = value->v[0];
  v[1] = value->v[1];
  v[2] = value->v[2];
  v[3] = value->v[3];
  if ( (unsigned int)v3 >= 0xAE )
  {
    LODWORD(v9) = 174;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( constant ) < (unsigned)( ( sizeof( *array_counter( source->constVersions ) ) + 0 ) )", "constant doesn't index ARRAY_COUNT( source->constVersions )\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  ++source->constVersions[v3];
}

/*
==============
R_SetPreciseCodeConstantFromVec4
==============
*/
void R_SetPreciseCodeConstantFromVec4(GfxCmdBufSourceState *source, unsigned int constant, const vec4_t *value)
{
  float v6; 
  int v7; 
  float v8; 
  float v9; 
  int v11; 
  vec4_t valuea; 

  if ( constant >= 0xA0 )
  {
    v11 = 160;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1415, ASSERT_TYPE_ASSERT, "(unsigned)( constant ) < (unsigned)( CONST_SRC_CODE_COUNT_FLOAT4 )", "constant doesn't index CONST_SRC_CODE_COUNT_FLOAT4\n\t%i not in [0, %i)", constant, v11) )
      __debugbreak();
  }
  v6 = 4096.0 * value->v[1];
  LODWORD(valuea.v[0]) = (int)(float)(4096.0 * value->v[0]);
  v7 = (int)v6;
  v8 = 4096.0 * value->v[2];
  LODWORD(valuea.v[1]) = v7;
  v9 = 4096.0 * value->v[3];
  LODWORD(valuea.v[2]) = (int)v8;
  LODWORD(valuea.v[3]) = (int)v9;
  R_SetCodeConstantFromVec4(source, constant, &valuea);
}

/*
==============
R_ClearIfRequired
==============
*/
void R_ClearIfRequired(GfxCmdBufState *state, bool forceWritable, unsigned __int8 stencil)
{
  R_RT_Group *p_result; 
  __m256i v6; 
  const char *m_location; 
  unsigned __int8 RequiredClearFlags; 
  R_RT_Group result; 
  R_RT_Group rtGroup; 

  if ( forceWritable )
  {
    R_RT_Group::As(&state->rtGroup, &result, 0);
    p_result = &result;
  }
  else
  {
    v6 = *(__m256i *)&state->rtGroup.m_colorRts[3].m_tracking.m_location;
    m_location = state->rtGroup.m_vrsRt.m_tracking.m_location;
    *(__m256i *)&rtGroup.m_colorRtCount = *(__m256i *)&state->rtGroup.m_colorRtCount;
    *(__m256i *)&rtGroup.m_colorRts[0].m_tracking.m_location = *(__m256i *)&state->rtGroup.m_colorRts[0].m_tracking.m_location;
    *(__m256i *)&rtGroup.m_colorRts[1].m_tracking.m_location = *(__m256i *)&state->rtGroup.m_colorRts[1].m_tracking.m_location;
    *(__m256i *)&rtGroup.m_colorRts[2].m_tracking.m_location = *(__m256i *)&state->rtGroup.m_colorRts[2].m_tracking.m_location;
    *(__m256i *)&rtGroup.m_colorRts[3].m_tracking.m_location = v6;
    *(__m256i *)&rtGroup.m_depthRt.m_tracking.m_location = *(__m256i *)&state->rtGroup.m_depthRt.m_tracking.m_location;
    rtGroup.m_vrsRt.m_tracking.m_location = m_location;
    p_result = &rtGroup;
  }
  RequiredClearFlags = R_GetRequiredClearFlags(p_result);
  if ( RequiredClearFlags )
    R_ClearScreen(state, RequiredClearFlags, stencil);
}

/*
==============
R_SetRenderTargetAspect
==============
*/
void R_SetRenderTargetAspect(GfxCmdBufSourceState *source, float aspect)
{
  float renderTargetHeight; 
  float v3; 
  float renderTargetWidth; 

  renderTargetHeight = (float)source->renderTargetHeight;
  v3 = renderTargetHeight * aspect;
  renderTargetWidth = (float)source->renderTargetWidth;
  source->pixelAspect = v3 / renderTargetWidth;
  if ( (float)(v3 / renderTargetWidth) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1176, ASSERT_TYPE_ASSERT, "(source->pixelAspect > 0.0f)", (const char *)&queryFormat, "source->pixelAspect > 0.0f") )
    __debugbreak();
}

/*
==============
R_SetRenderTargetsInternal_ColorDepth
==============
*/
void R_SetRenderTargetsInternal_ColorDepth(GfxCmdBufContext *context, R_RT_ColorHandle *colorRt, R_RT_DepthHandle *depthRt, const char *location)
{
  __m256i v5; 
  R_RT_Handle v10; 
  GfxCmdBufContext v11; 
  R_RT_Handle v12; 
  R_RT_Handle v13; 
  __m256i v14; 
  _BYTE v15[64]; 
  __m256i v16; 
  __m256i v17; 
  _BYTE v18[64]; 
  const char *v19; 
  R_RT_Group v20; 

  v5 = *(__m256i *)colorRt;
  v13 = depthRt->R_RT_Handle;
  v12 = v13;
  v14 = v5;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v12);
    v13 = v12;
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
      __debugbreak();
  }
  v10 = colorRt->R_RT_Handle;
  v15[0] = 1;
  v12 = v10;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v12);
  }
  else
  {
    if ( v14.m256i_i32[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v12.m_surfaceID, *(_QWORD *)&v12.m_tracking.m_allocCounter, v12.m_tracking.m_name, v12.m_tracking.m_location) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  *(__m256i *)&v15[8] = *(__m256i *)colorRt;
  *(R_RT_Handle *)&v18[8] = v13;
  *(__m256i *)&v20.m_colorRtCount = *(__m256i *)v15;
  *(__m256i *)&v20.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v15[32];
  *(__m256i *)&v20.m_colorRts[1].m_tracking.m_location = v16;
  *(__m256i *)&v20.m_colorRts[2].m_tracking.m_location = v17;
  v11 = *context;
  *(__m256i *)&v20.m_colorRts[3].m_tracking.m_location = *(__m256i *)v18;
  *(__m256i *)&v20.m_depthRt.m_tracking.m_location = *(__m256i *)&v18[32];
  v20.m_vrsRt.m_tracking.m_location = v19;
  *(GfxCmdBufContext *)&v12.m_surfaceID = v11;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v12, &v20, location);
}

/*
==============
R_RT_DestroyAndClearGroup
==============
*/
void R_RT_DestroyAndClearGroup(GfxCmdBufContext *context, R_RT_Group *rtGroup)
{
  __int64 v2; 
  unsigned __int8 *v5; 
  GfxCmdBufContext v6; 
  GfxCmdBufContext v7; 
  GfxCmdBufContext v8; 
  R_RT_DepthHandle m_depthRt; 

  v2 = rtGroup->m_colorRtCount - 1i64;
  if ( v2 >= 0 )
  {
    v5 = &rtGroup->m_colorRtCount + 32 * rtGroup->m_colorRtCount;
    do
    {
      v6 = *context;
      m_depthRt = *(R_RT_DepthHandle *)(v5 - 24);
      v8 = v6;
      R_RT_Destroy(&v8, (R_RT_ColorHandle *)&m_depthRt);
      --v2;
      *((_WORD *)v5 - 12) = 0;
      *((_DWORD *)v5 - 4) = 0;
      *((_QWORD *)v5 - 1) = 0i64;
      *(_QWORD *)v5 = 0i64;
      v5 -= 32;
    }
    while ( v2 >= 0 );
  }
  v7 = *context;
  m_depthRt = rtGroup->m_depthRt;
  v8 = v7;
  R_RT_Destroy(&v8, &m_depthRt);
  rtGroup->m_colorRtCount = 0;
  rtGroup->m_depthRt.m_surfaceID = 0;
  rtGroup->m_depthRt.m_tracking.m_allocCounter = 0;
  rtGroup->m_depthRt.m_tracking.m_name = NULL;
  rtGroup->m_depthRt.m_tracking.m_location = NULL;
  rtGroup->m_vrsRt.m_surfaceID = 0;
  rtGroup->m_vrsRt.m_tracking.m_allocCounter = 0;
  rtGroup->m_vrsRt.m_tracking.m_name = NULL;
  rtGroup->m_vrsRt.m_tracking.m_location = NULL;
}

/*
==============
R_SetRenderTargetSize
==============
*/
void R_SetRenderTargetSize(GfxCmdBufSourceState *source, const R_RT_Group *rtGroup, GfxViewportBehavior viewportBehavior)
{
  unsigned int height; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v7; 
  R_RT_Handle result; 

  v7 = *R_RT_Group::GetValidRt((R_RT_Group *)rtGroup, &result);
  height = R_RT_Handle::GetSurface(&v7)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v7);
  R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, viewportBehavior);
}

/*
==============
R_SetDepthBoundsDisable
==============
*/
void R_SetDepthBoundsDisable(GfxCmdBufState *state)
{
  state->depthBoundsMin = 0.0;
  state->depthBoundsMax = 1.0;
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  state->device->m_pFunction[22].Release(state->device);
}

/*
==============
R_UpdateCodeConstant
==============
*/
void R_UpdateCodeConstant(GfxCmdBufSourceState *source, unsigned int constant, float x, float y, float z, float w)
{
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  v7 = constant;
  v8 = constant + 112i64;
  if ( x != source->input.consts[constant].v[0] || y != source->input.consts[constant].v[1] || z != source->input.consts[constant].v[2] || w != source->input.consts[constant].v[3] )
  {
    if ( constant >= 0xA0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1320, ASSERT_TYPE_ASSERT, "(unsigned)( constant ) < (unsigned)( CONST_SRC_CODE_COUNT_FLOAT4 )", "constant doesn't index CONST_SRC_CODE_COUNT_FLOAT4\n\t%i not in [0, %i)", constant, 160) )
      __debugbreak();
    source->matrices.matrix[0].m.m[v8].v[0] = x;
    source->matrices.matrix[0].m.m[v8].v[1] = y;
    source->matrices.matrix[0].m.m[v8].v[2] = z;
    source->matrices.matrix[0].m.m[v8].v[3] = w;
    if ( (unsigned int)v7 >= 0xAE )
    {
      LODWORD(v10) = 174;
      LODWORD(v9) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( constant ) < (unsigned)( ( sizeof( *array_counter( source->constVersions ) ) + 0 ) )", "constant doesn't index ARRAY_COUNT( source->constVersions )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    ++source->constVersions[v7];
  }
}

