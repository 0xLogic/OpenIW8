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
  const char *v23; 
  R_RT_Handle v24; 
  R_RT_Handle v26; 
  char v27; 
  const char *v30; 
  R_RT_Group v31; 

  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovd   edi, xmm0
  }
  _RSI = context;
  __asm
  {
    vmovups [rsp+278h+var_228], ymm0
    vmovups ymmword ptr [rsp+278h+var_248.m_surfaceID], ymm0
  }
  if ( (_WORD)_EDI )
  {
    R_RT_Handle::GetSurface(&v24);
    __asm { vmovups ymm0, ymmword ptr [rsp+278h+var_248.m_surfaceID] }
    LODWORD(_RBX) = v24.m_tracking.m_allocCounter;
    LOWORD(_EDI) = v24.m_surfaceID;
    __asm { vmovups [rsp+278h+var_228], ymm0 }
  }
  else
  {
    __asm { vpextrd rbx, xmm0, 2 }
    if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  v27 = 1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v24.m_surfaceID = 0;
  v24.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovdqu xmmword ptr [rsp+278h+var_248.m_tracking.m_name], xmm0
    vmovups ymm0, [rsp+278h+var_228]
    vmovups ymmword ptr [rsp+278h+var_208.m_surfaceID], ymm0
  }
  if ( (_WORD)_EDI )
  {
    R_RT_Handle::GetSurface(&v26);
  }
  else
  {
    if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, [rsp+278h+var_228]
    vmovups [rsp+278h+var_1E0], ymm0
    vmovups ymm0, ymmword ptr [rsp+278h+var_248.m_surfaceID]
    vmovups [rsp+278h+var_160], ymm0
  }
  _RCX = &v31;
  _RAX = &v27;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymm1, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups xmm0, xmmword ptr [rsi]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
  }
  v23 = v30;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v31.m_vrsRt.m_tracking.m_location = v23;
  __asm { vmovups xmmword ptr [rsp+278h+var_248.m_surfaceID], xmm0 }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v24, &v31, location);
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
    _RAX = RB_GetBackendCmdBufContext(&result);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vpextrq rdx, xmm0, 1; in
    }
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
    _RAX = RB_GetBackendCmdBufContext(&result);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vpextrq rcx, xmm0, 1; out
    }
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
  const char *v15; 
  GfxCmdBufContext v16; 
  char v17; 
  __int16 v18; 
  int v19; 
  __int16 v21; 
  int v22; 
  __int128 v23; 
  R_RT_Group v24; 

  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rsp+1E8h+var_120], xmm0
    vmovdqu [rsp+1E8h+var_100], xmm0
  }
  v17 = 0;
  v18 = 0;
  v19 = 0;
  _RDX = context;
  v21 = 0;
  _RCX = &v24;
  v22 = 0;
  _RAX = &v17;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymm1, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups xmm0, xmmword ptr [rdx]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
  }
  v15 = (const char *)*((_QWORD *)&v23 + 1);
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v24.m_vrsRt.m_tracking.m_location = v15;
  __asm { vmovups [rsp+1E8h+var_1C8], xmm0 }
  R_SetRenderTargetsInternal(&v16, &v24, location);
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
  const char *v19; 
  R_RT_Handle v20; 
  char v22; 
  const char *v24; 
  R_RT_Group v25; 

  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovd   eax, xmm0
  }
  _RBX = context;
  __asm
  {
    vmovups [rsp+238h+var_1E8], ymm0
    vmovups ymmword ptr [rsp+238h+var_208.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v20);
    __asm { vmovups ymm0, ymmword ptr [rsp+238h+var_208.m_surfaceID] }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
      __debugbreak();
    __asm { vmovups ymm0, [rsp+238h+var_1E8] }
  }
  __asm { vmovups [rsp+238h+var_140], ymm0 }
  _RCX = &v25;
  v22 = 0;
  _RAX = &v22;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymm1, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups xmm0, xmmword ptr [rbx]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
  }
  v19 = v24;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v25.m_vrsRt.m_tracking.m_location = v19;
  __asm { vmovups xmmword ptr [rsp+238h+var_208.m_surfaceID], xmm0 }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v20, &v25, location);
}

/*
==============
R_SetDepthBoundsEnable
==============
*/

void __fastcall R_SetDepthBoundsEnable(GfxCmdBufState *state, double depthBoundsMin, double depthBoundsMax)
{
  bool v18; 
  bool v19; 
  bool v21; 
  bool v24; 
  bool v26; 
  bool v28; 
  double v38; 
  double v39; 
  double v40; 
  double v41; 
  double v42; 
  double v43; 
  double v44; 
  double v45; 
  double v46; 
  double v47; 
  double v48; 
  double v49; 
  double v50; 
  double v51; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = state;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovsd  xmm10, cs:__real@3ff0000000000000
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm1, xmm9
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
    vxorpd  xmm11, xmm11, xmm11
    vcomiss xmm1, xmm8
    vmovsd  [rsp+0B8h+var_80], xmm10
    vcvtss2sd xmm0, xmm7, xmm7
    vmovsd  [rsp+0B8h+var_88], xmm11
    vmovsd  [rsp+0B8h+var_90], xmm0
  }
  v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2279, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( depthBoundsMin ) && ( depthBoundsMin ) <= ( 1.0f )", "depthBoundsMin not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v38, v42, v46);
  v19 = !v18;
  if ( v18 )
    __debugbreak();
  __asm
  {
    vcomiss xmm6, xmm9
    vcomiss xmm6, xmm8
  }
  if ( v18 )
  {
    __asm
    {
      vmovsd  [rsp+0B8h+var_80], xmm10
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0B8h+var_88], xmm11
      vmovsd  [rsp+0B8h+var_90], xmm0
    }
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2280, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( depthBoundsMax ) && ( depthBoundsMax ) <= ( 1.0f )", "depthBoundsMax not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v39, v43, v47);
    v19 = !v21;
    if ( v21 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm6 }
  if ( !v19 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0B8h+var_78], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0B8h+var_80], xmm1
    }
    v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2281, ASSERT_TYPE_ASSERT, "( depthBoundsMin ) <= ( depthBoundsMax )", "%s <= %s\n\t%g, %g", "depthBoundsMin", "depthBoundsMax", v48, v51);
    v19 = !v24;
    if ( v24 )
      __debugbreak();
  }
  __asm { vucomiss xmm7, dword ptr [rbx+9FCh] }
  if ( !v19 )
    goto LABEL_11;
  __asm { vucomiss xmm6, dword ptr [rbx+0A00h] }
  if ( !v19 )
  {
LABEL_11:
    __asm
    {
      vcomiss xmm7, xmm9
      vmovss  dword ptr [rbx+9FCh], xmm7
      vmovss  dword ptr [rbx+0A00h], xmm6
      vcomiss xmm7, xmm8
    }
    if ( !v19 )
    {
      __asm
      {
        vmovsd  [rsp+0B8h+var_80], xmm10
        vcvtss2sd xmm0, xmm7, xmm7
        vmovsd  [rsp+0B8h+var_88], xmm11
        vmovsd  [rsp+0B8h+var_90], xmm0
      }
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1012, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( minZ ) && ( minZ ) <= ( 1.0f )", "minZ not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v40, v44, v49);
      v19 = !v26;
      if ( v26 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm6, xmm9
      vcomiss xmm6, xmm8
    }
    if ( !v19 )
    {
      __asm
      {
        vmovsd  [rsp+0B8h+var_80], xmm10
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+0B8h+var_88], xmm11
        vmovsd  [rsp+0B8h+var_90], xmm0
      }
      v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1013, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( maxZ ) && ( maxZ ) <= ( 1.0f )", "maxZ not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v41, v45, v50);
      v19 = !v28;
      if ( v28 )
        __debugbreak();
    }
    __asm { vcomiss xmm7, xmm6 }
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1014, ASSERT_TYPE_ASSERT, "(minZ <= maxZ)", (const char *)&queryFormat, "minZ <= maxZ") )
      __debugbreak();
    if ( !R_IsLockedIfGfxImmediateContext(_RBX->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
      __debugbreak();
    __asm
    {
      vmovaps xmm2, xmm6
      vmovaps xmm1, xmm7
    }
    _RBX->device->m_pFunction[22].Release(_RBX->device);
  }
  _R11 = &v52;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
R_SetResourceInternal
==============
*/
void R_SetResourceInternal(GfxCmdBufState *state, GfxShaderImageSetStage imageSetID, unsigned int resourceIndex, const GfxShaderBufferView *view)
{
  __int64 v5; 
  unsigned __int64 v6; 

  _R10 = state;
  v5 = resourceIndex + 40i64 * (unsigned __int8)imageSetID;
  if ( state->shaderResourceViews[0][v5].buffer.view != view->view || state->shaderResourceViews[0][v5].buffer.resource != view->resource || (v6 = state->resourcesClear[(unsigned __int8)imageSetID], !_bittest64((const __int64 *)&v6, resourceIndex)) )
  {
    state->resourcesDirty[(unsigned __int8)imageSetID] |= 1i64 << resourceIndex;
    state->resourcesClear[(unsigned __int8)imageSetID] |= 1i64 << resourceIndex;
    __asm { vmovups xmm0, xmmword ptr [r9] }
    _RAX = 2 * (v5 + 420);
    __asm { vmovups xmmword ptr [r10+rax*8], xmm0 }
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

  v3 = slot;
  _RBX = constant;
  _RSI = &state->constants[3][slot];
  if ( !R_ConstantBufferDiffers(_RSI, constant) )
    return 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rsi], xmm0
    vmovsd  xmm1, qword ptr [rbx+10h]
    vmovsd  qword ptr [rsi+10h], xmm1
  }
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

  v3 = slot;
  _RBX = constant;
  _RSI = &state->constants[2][slot];
  if ( !R_ConstantBufferDiffers(_RSI, constant) )
    return 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rsi], xmm0
    vmovsd  xmm1, qword ptr [rbx+10h]
    vmovsd  qword ptr [rsi+10h], xmm1
  }
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

  v3 = slot;
  _RBX = constant;
  _RSI = &state->constants[1][slot];
  if ( !R_ConstantBufferDiffers(_RSI, constant) )
    return 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rsi], xmm0
    vmovsd  xmm1, qword ptr [rbx+10h]
    vmovsd  qword ptr [rsi+10h], xmm1
  }
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

  v3 = slot;
  _RBX = constant;
  _RSI = &state->constants[0][slot];
  if ( !R_ConstantBufferDiffers(_RSI, constant) )
    return 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rsi], xmm0
    vmovsd  xmm1, qword ptr [rbx+10h]
    vmovsd  qword ptr [rsi+10h], xmm1
  }
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
  unsigned int v17; 
  __int64 v18; 
  const R_RT_Surface *Surface; 
  unsigned int m_targetView; 
  const R_RT_Surface *v21; 
  unsigned int v22; 
  char v23; 
  bool v24; 
  bool v31; 
  bool v33; 
  double v42; 
  double v43; 
  double v44; 
  double v45; 
  double v46; 
  double v47; 
  GfxDevice *v48; 
  R_RT_DepthHandle v49; 
  unsigned int rtvs[2]; 
  char v51; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  *(_QWORD *)rtvs = colorRts;
  _R15 = depthRt;
  _RDI = state;
  if ( colorRtCount > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1866, ASSERT_TYPE_ASSERT, "(colorRtCount <= 4)", (const char *)&queryFormat, "colorRtCount <= R_MAX_RENDER_TARGETS") )
    __debugbreak();
  device = _RDI->device;
  v48 = device;
  if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1868, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups [rsp+128h+var_D8], ymm0
  }
  R_ProfMarkRenderTargets(_RDI, colorRtCount, colorRts, &v49);
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  DepthTargetView = 0;
  v17 = 0;
  if ( colorRtCount )
  {
    v18 = *(_QWORD *)rtvs;
    do
    {
      Surface = R_RT_Handle::GetSurface((R_RT_Handle *)(v18 + 32i64 * v17));
      if ( (Surface->m_rtFlagsInternal & 0x2010) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 339, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_None)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_None") )
        __debugbreak();
      m_targetView = Surface->m_targetView;
      if ( !m_targetView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 341, ASSERT_TYPE_ASSERT, "(colorTargetView)", (const char *)&queryFormat, "colorTargetView") )
        __debugbreak();
      rtvs[v17] = m_targetView;
      _RDI->deviceState.colorRtViews[v17] = m_targetView;
      if ( R_RT_Handle::IsValid(_R15) )
      {
        v21 = R_RT_Handle::GetSurface(_R15);
        if ( (v21->m_rtFlagsInternal & 0x2010) != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 429, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth") )
          __debugbreak();
        v22 = v21->m_targetView;
        if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 431, ASSERT_TYPE_ASSERT, "(depthTargetView)", (const char *)&queryFormat, "depthTargetView") )
          __debugbreak();
      }
      else
      {
        v22 = 0;
      }
      ++v17;
      _RDI->deviceState.depthRtView = v22;
    }
    while ( v17 != colorRtCount );
    device = v48;
  }
  _RDI->deviceState.numRenderTargets = colorRtCount;
  if ( R_RT_Handle::IsValid(_R15) )
    DepthTargetView = R_RT_DepthHandle::DX_GetDepthTargetView(_R15);
  R_HW_SetRenderTargetsDX(device, _RDI->descState, colorRtCount, rtvs, DepthTargetView);
  __asm
  {
    vmovss  xmm7, dword ptr [rdi+9FCh]
    vmovss  xmm6, dword ptr [rdi+0A00h]
    vmovsd  xmm10, cs:__real@3ff0000000000000
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm7, xmm9
    vxorpd  xmm11, xmm11, xmm11
  }
  if ( v23 )
    goto LABEL_47;
  __asm { vcomiss xmm7, cs:__real@3f800000 }
  if ( !(v23 | v24) )
  {
LABEL_47:
    __asm
    {
      vmovsd  [rsp+128h+var_F0], xmm10
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+128h+var_F8], xmm11
      vmovsd  [rsp+128h+var_100], xmm0
    }
    v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1012, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( minZ ) && ( minZ ) <= ( 1.0f )", "minZ not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v42, v44, v46);
    v23 = 0;
    v24 = !v31;
    if ( v31 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm6, xmm9
    vcomiss xmm6, cs:__real@3f800000
  }
  if ( !(v23 | v24) )
  {
    __asm
    {
      vmovsd  [rsp+128h+var_F0], xmm10
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+128h+var_F8], xmm11
      vmovsd  [rsp+128h+var_100], xmm0
    }
    v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1013, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( maxZ ) && ( maxZ ) <= ( 1.0f )", "maxZ not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v43, v45, v47);
    v23 = 0;
    v24 = !v33;
    if ( v33 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm6 }
  if ( !(v23 | v24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1014, ASSERT_TYPE_ASSERT, "(minZ <= maxZ)", (const char *)&queryFormat, "minZ <= maxZ") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(_RDI->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  __asm
  {
    vmovaps xmm2, xmm6
    vmovaps xmm1, xmm7
  }
  _RDI->device->m_pFunction[22].Release(_RDI->device);
  _R11 = &v51;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm9, xmmword ptr [r11-38h]
    vmovaps xmm10, xmmword ptr [r11-48h]
    vmovaps xmm11, xmmword ptr [r11-58h]
  }
}

/*
==============
R_SetPreciseWorldMatrixForShader
==============
*/
void R_SetPreciseWorldMatrixForShader(const tmat44_t<vec4_t> *worldMat, tmat44_t<vec4_t> *shaderWorldMat)
{
  tmat44_t<vec4_t> in; 

  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymm1, ymmword ptr [rcx+20h]
    vmovss  xmm2, cs:__real@45800000
    vmovups ymmword ptr [rsp+78h+in+20h], ymm1
    vmovups ymmword ptr [rsp+78h+in], ymm0
    vextractf128 xmm0, ymm1, 1
    vmulss  xmm0, xmm0, xmm2
    vcvttss2si eax, xmm0
    vmulss  xmm0, xmm2, dword ptr [rsp+78h+in+34h]
  }
  in.m[3].v[0] = _EAX;
  __asm
  {
    vcvttss2si eax, xmm0
    vmulss  xmm0, xmm2, dword ptr [rsp+78h+in+38h]
  }
  in.m[3].v[1] = _EAX;
  __asm { vcvttss2si eax, xmm0 }
  in.m[3].v[2] = _EAX;
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
  int v15; 
  vec4_t valuea; 

  if ( constant >= 0xA0 )
  {
    v15 = 160;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1415, ASSERT_TYPE_ASSERT, "(unsigned)( constant ) < (unsigned)( CONST_SRC_CODE_COUNT_FLOAT4 )", "constant doesn't index CONST_SRC_CODE_COUNT_FLOAT4\n\t%i not in [0, %i)", constant, v15) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, cs:__real@45800000
    vmulss  xmm0, xmm2, dword ptr [rdi]
    vcvttss2si eax, xmm0
    vmulss  xmm0, xmm2, dword ptr [rdi+4]
  }
  valuea.v[0] = _EAX;
  __asm
  {
    vcvttss2si eax, xmm0
    vmulss  xmm0, xmm2, dword ptr [rdi+8]
  }
  valuea.v[1] = _EAX;
  __asm
  {
    vcvttss2si eax, xmm0
    vmulss  xmm0, xmm2, dword ptr [rdi+0Ch]
  }
  valuea.v[2] = _EAX;
  __asm { vcvttss2si eax, xmm0 }
  valuea.v[3] = _EAX;
  R_SetCodeConstantFromVec4(source, constant, &valuea);
}

/*
==============
R_ClearIfRequired
==============
*/
void R_ClearIfRequired(GfxCmdBufState *state, bool forceWritable, unsigned __int8 stencil)
{
  GfxCmdBufState *v4; 
  R_RT_Group *p_result; 
  const char *m_location; 
  unsigned __int8 RequiredClearFlags; 
  R_RT_Group result; 
  R_RT_Group rtGroup; 

  v4 = state;
  if ( forceWritable )
  {
    R_RT_Group::As(&state->rtGroup, &result, 0);
    p_result = &result;
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+0A28h]
      vmovups ymm1, ymmword ptr [rcx+0AA8h]
    }
    m_location = state->rtGroup.m_vrsRt.m_tracking.m_location;
    _RDX = &rtGroup;
    __asm
    {
      vmovups ymmword ptr [rdx], ymm0
      vmovups ymm0, ymmword ptr [rcx+0A48h]
      vmovups ymmword ptr [rdx+20h], ymm0
      vmovups ymm0, ymmword ptr [rcx+0A68h]
      vmovups ymmword ptr [rdx+40h], ymm0
      vmovups ymm0, ymmword ptr [rcx+0A88h]
      vmovups ymmword ptr [rdx+60h], ymm0
      vmovups ymmword ptr [rdx+80h], ymm1
      vmovups ymm1, ymmword ptr [rcx+0AC8h]
      vmovups ymmword ptr [rdx+0A0h], ymm1
    }
    rtGroup.m_vrsRt.m_tracking.m_location = m_location;
    p_result = &rtGroup;
  }
  RequiredClearFlags = R_GetRequiredClearFlags(p_result);
  if ( RequiredClearFlags )
    R_ClearScreen(v4, RequiredClearFlags, stencil);
}

/*
==============
R_SetRenderTargetAspect
==============
*/

void __fastcall R_SetRenderTargetAspect(GfxCmdBufSourceState *source, double aspect)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm2, xmm0, xmm1
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vdivss  xmm3, xmm2, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm3, xmm0
    vmovss  dword ptr [rcx+2D9Ch], xmm3
  }
}

/*
==============
R_SetRenderTargetsInternal_ColorDepth
==============
*/
void R_SetRenderTargetsInternal_ColorDepth(GfxCmdBufContext *context, R_RT_ColorHandle *colorRt, R_RT_DepthHandle *depthRt, const char *location)
{
  const char *v26; 
  R_RT_Handle v27; 
  __m256i v29; 
  char v30; 
  const char *v33; 
  R_RT_Group v34; 

  __asm
  {
    vmovups ymm0, ymmword ptr [r8]
    vmovups ymm1, ymmword ptr [rdx]
    vmovd   eax, xmm0
  }
  _RBX = colorRt;
  _RDI = context;
  __asm
  {
    vmovups [rsp+268h+var_218], ymm0
    vmovups ymmword ptr [rsp+268h+var_238.m_surfaceID], ymm0
    vmovups [rsp+268h+var_1F8], ymm1
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v27);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+268h+var_238.m_surfaceID]
      vmovups [rsp+268h+var_218], ymm0
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovd   eax, xmm0
  }
  v30 = 1;
  __asm { vmovups ymmword ptr [rsp+268h+var_238.m_surfaceID], ymm0 }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v27);
  }
  else
  {
    if ( v29.m256i_i32[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v27.m_surfaceID, *(_QWORD *)&v27.m_tracking.m_allocCounter, v27.m_tracking.m_name, v27.m_tracking.m_location) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups [rsp+268h+var_1D0], ymm0
    vmovups ymm0, [rsp+268h+var_218]
    vmovups [rsp+268h+var_150], ymm0
  }
  _RCX = &v34;
  _RAX = &v30;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymm1, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups xmm0, xmmword ptr [rdi]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
  }
  v26 = v33;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v34.m_vrsRt.m_tracking.m_location = v26;
  __asm { vmovups xmmword ptr [rsp+268h+var_238.m_surfaceID], xmm0 }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v27, &v34, location);
}

/*
==============
R_RT_DestroyAndClearGroup
==============
*/
void R_RT_DestroyAndClearGroup(GfxCmdBufContext *context, R_RT_Group *rtGroup)
{
  __int64 v2; 
  GfxCmdBufContext v10; 
  R_RT_DepthHandle v11; 

  v2 = rtGroup->m_colorRtCount - 1i64;
  _RSI = rtGroup;
  _RBP = context;
  if ( v2 >= 0 )
  {
    _RBX = &rtGroup->m_colorRtCount + 32 * rtGroup->m_colorRtCount;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx-18h]
        vmovups xmm1, xmmword ptr [rbp+0]
        vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0
        vmovups [rsp+58h+var_38], xmm1
      }
      R_RT_Destroy(&v10, (R_RT_ColorHandle *)&v11);
      --v2;
      *((_WORD *)_RBX - 12) = 0;
      *((_DWORD *)_RBX - 4) = 0;
      *((_QWORD *)_RBX - 1) = 0i64;
      *(_QWORD *)_RBX = 0i64;
      _RBX -= 32;
    }
    while ( v2 >= 0 );
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+88h]
    vmovups xmm1, xmmword ptr [rbp+0]
    vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0
    vmovups [rsp+58h+var_38], xmm1
  }
  R_RT_Destroy(&v10, &v11);
  _RSI->m_colorRtCount = 0;
  _RSI->m_depthRt.m_surfaceID = 0;
  _RSI->m_depthRt.m_tracking.m_allocCounter = 0;
  _RSI->m_depthRt.m_tracking.m_name = NULL;
  _RSI->m_depthRt.m_tracking.m_location = NULL;
  _RSI->m_vrsRt.m_surfaceID = 0;
  _RSI->m_vrsRt.m_tracking.m_allocCounter = 0;
  _RSI->m_vrsRt.m_tracking.m_name = NULL;
  _RSI->m_vrsRt.m_tracking.m_location = NULL;
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
  R_RT_Handle v9; 
  R_RT_Handle result; 

  _RAX = R_RT_Group::GetValidRt((R_RT_Group *)rtGroup, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+68h+var_48.m_surfaceID], ymm0
  }
  height = R_RT_Handle::GetSurface(&v9)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v9);
  R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, viewportBehavior);
}

/*
==============
R_SetDepthBoundsDisable
==============
*/

void __fastcall R_SetDepthBoundsDisable(GfxCmdBufState *state, double _XMM1_8)
{
  state->depthBoundsMin = 0.0;
  state->depthBoundsMax = 1.0;
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
  }
  state->device->m_pFunction[22].Release(state->device);
}

/*
==============
R_UpdateCodeConstant
==============
*/

void __fastcall R_UpdateCodeConstant(GfxCmdBufSourceState *source, unsigned int constant, double x, double y, float z, float w)
{
  __int64 v14; 
  __int64 v17; 
  bool v18; 
  __int64 v25; 
  __int64 v26; 
  char v29; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = source;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, [rsp+88h+w]
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, [rsp+88h+z]
  }
  v14 = constant;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm6, xmm3
    vmovaps xmm9, xmm2
  }
  v17 = constant + 112i64;
  v18 = 2 * v17 == 0;
  _RDI = 2 * v17;
  __asm { vucomiss xmm2, dword ptr [rcx+rdi*8] }
  if ( !v18 )
    goto LABEL_15;
  __asm { vucomiss xmm3, dword ptr [rcx+rdi*8+4] }
  if ( !v18 )
    goto LABEL_15;
  __asm { vucomiss xmm8, dword ptr [rcx+rdi*8+8] }
  if ( !v18 )
    goto LABEL_15;
  __asm { vucomiss xmm7, dword ptr [rcx+rdi*8+0Ch] }
  if ( !v18 )
  {
LABEL_15:
    if ( constant >= 0xA0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1320, ASSERT_TYPE_ASSERT, "(unsigned)( constant ) < (unsigned)( CONST_SRC_CODE_COUNT_FLOAT4 )", "constant doesn't index CONST_SRC_CODE_COUNT_FLOAT4\n\t%i not in [0, %i)", constant, 160) )
      __debugbreak();
    __asm
    {
      vmovss  dword ptr [rbx+rdi*8], xmm9
      vmovss  dword ptr [rbx+rdi*8+4], xmm6
      vmovss  dword ptr [rbx+rdi*8+8], xmm8
      vmovss  dword ptr [rbx+rdi*8+0Ch], xmm7
    }
    if ( (unsigned int)v14 >= 0xAE )
    {
      LODWORD(v26) = 174;
      LODWORD(v25) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( constant ) < (unsigned)( ( sizeof( *array_counter( source->constVersions ) ) + 0 ) )", "constant doesn't index ARRAY_COUNT( source->constVersions )\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    ++_RBX->constVersions[v14];
  }
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
  _R11 = &v29;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+88h+var_28]
  }
}

