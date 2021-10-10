/*
==============
R_MemTextureRect
==============
*/

void __fastcall R_MemTextureRect(ComputeCmdBufState *state, const GfxTexture *textureDst, const GfxTexture *textureSrc, unsigned int dstX, unsigned int dstY, unsigned int srcX, unsigned int srcY, unsigned int width, unsigned int height, const vec4_t *color, float scale, float bias)
{
  ?R_MemTextureRect@@YAXPEAUComputeCmdBufState@@PEBUGfxTexture@@1IIIIIIAEBTvec4_t@@MM@Z(state, textureDst, textureSrc, dstX, dstY, srcX, srcY, width, height, color, scale, bias);
}

/*
==============
R_MemCpy
==============
*/

void __fastcall R_MemCpy(ComputeCmdBufState *state, void *dst, const void *src, unsigned __int64 size, bool waitForCopy)
{
  ?R_MemCpy@@YAXPEAUComputeCmdBufState@@PEAXPEBX_K_N@Z(state, dst, src, size, waitForCopy);
}

/*
==============
R_CopyBufferData
==============
*/

void __fastcall R_CopyBufferData(ComputeCmdBufState *state, const GfxWrappedBuffer *dst, unsigned int dstOffset, const GfxWrappedBuffer *src, unsigned int srcOffset, unsigned int size)
{
  ?R_CopyBufferData@@YAXPEAUComputeCmdBufState@@PEBUGfxWrappedBuffer@@I1II@Z(state, dst, dstOffset, src, srcOffset, size);
}

/*
==============
R_CopyTexture
==============
*/

void __fastcall R_CopyTexture(ComputeCmdBufState *state, const GfxTexture *textureDst, const GfxTexture *textureSrc)
{
  ?R_CopyTexture@@YAXPEAUComputeCmdBufState@@PEBUGfxTexture@@1@Z(state, textureDst, textureSrc);
}

/*
==============
R_SetTextureRect
==============
*/

void __fastcall R_SetTextureRect(ComputeCmdBufState *state, const GfxTexture *textureDst, const vec4_t *color, unsigned int dstX, unsigned int dstY, unsigned int width, unsigned int height)
{
  ?R_SetTextureRect@@YAXPEAUComputeCmdBufState@@PEBUGfxTexture@@AEBTvec4_t@@IIII@Z(state, textureDst, color, dstX, dstY, width, height);
}

/*
==============
R_CopyTextureBox
==============
*/

void __fastcall R_CopyTextureBox(ComputeCmdBufState *state, const GfxTexture *textureDst, const GfxTexture *textureSrc, unsigned int dstX, unsigned int dstY, unsigned int dstZ, unsigned int dstMip, unsigned int srcX, unsigned int srcY, unsigned int srcZ, unsigned int srcMip, unsigned int width, unsigned int height, unsigned int depth)
{
  ?R_CopyTextureBox@@YAXPEAUComputeCmdBufState@@PEBUGfxTexture@@1IIIIIIIIIII@Z(state, textureDst, textureSrc, dstX, dstY, dstZ, dstMip, srcX, srcY, srcZ, srcMip, width, height, depth);
}

/*
==============
R_CopyBufferDataInPlace
==============
*/

void __fastcall R_CopyBufferDataInPlace(ComputeCmdBufState *state, const GfxWrappedRWBuffer *buffer, unsigned int dstOffset, unsigned int srcOffset, unsigned int size)
{
  ?R_CopyBufferDataInPlace@@YAXPEAUComputeCmdBufState@@PEBUGfxWrappedRWBuffer@@III@Z(state, buffer, dstOffset, srcOffset, size);
}

/*
==============
R_CopyTextureRect
==============
*/

void __fastcall R_CopyTextureRect(ComputeCmdBufState *state, R_RT_Handle *dstRt, R_RT_Handle *srcRt, unsigned int dstX, unsigned int dstY, unsigned int dstMip, unsigned int dstSlice, unsigned int srcX, unsigned int srcY, unsigned int srcMip, unsigned int srcSlice, unsigned int width, unsigned int height)
{
  ?R_CopyTextureRect@@YAXPEAUComputeCmdBufState@@VR_RT_Handle@@1IIIIIIIIII@Z(state, dstRt, srcRt, dstX, dstY, dstMip, dstSlice, srcX, srcY, srcMip, srcSlice, width, height);
}

/*
==============
R_CopyTextureRect
==============
*/

void __fastcall R_CopyTextureRect(ComputeCmdBufState *state, const GfxTexture *textureDst, const GfxTexture *textureSrc, unsigned int dstX, unsigned int dstY, unsigned int dstMip, unsigned int dstSlice, unsigned int srcX, unsigned int srcY, unsigned int srcMip, unsigned int srcSlice, unsigned int width, unsigned int height)
{
  ?R_CopyTextureRect@@YAXPEAUComputeCmdBufState@@PEBUGfxTexture@@1IIIIIIIIII@Z(state, textureDst, textureSrc, dstX, dstY, dstMip, dstSlice, srcX, srcY, srcMip, srcSlice, width, height);
}

/*
==============
R_CopyCompressedDepthRectList
==============
*/

void __fastcall R_CopyCompressedDepthRectList(ComputeCmdBufState *state, R_RT_DepthHandle *srcDepthRt, R_RT_Handle *dstRt, base_vec4_t<unsigned int> *rectOffsets, unsigned int rectCount, unsigned int rectWidth, unsigned int rectHeight, float bias, float scale, bool decompress)
{
  ?R_CopyCompressedDepthRectList@@YAXPEAUComputeCmdBufState@@VR_RT_DepthHandle@@VR_RT_Handle@@PEAT?$base_vec4_t@I@@IIIMM_N@Z(state, srcDepthRt, dstRt, rectOffsets, rectCount, rectWidth, rectHeight, bias, scale, decompress);
}

/*
==============
R_CopyTextureRect
==============
*/

void __fastcall R_CopyTextureRect(ComputeCmdBufState *state, const GfxTexture *textureDst, const GfxTexture *textureSrc, unsigned int dstX, unsigned int dstY, unsigned int srcX, unsigned int srcY, unsigned int width, unsigned int height, float scale, float bias)
{
  ?R_CopyTextureRect@@YAXPEAUComputeCmdBufState@@PEBUGfxTexture@@1IIIIIIMM@Z(state, textureDst, textureSrc, dstX, dstY, srcX, srcY, width, height, scale, bias);
}

/*
==============
R_CopyCompressedDepthRect
==============
*/

void __fastcall R_CopyCompressedDepthRect(ComputeCmdBufState *state, R_RT_DepthHandle *srcDepthRt, R_RT_Handle *dstRt, unsigned int srcX, unsigned int srcY, unsigned int dstX, unsigned int dstY, unsigned int rectWidth, unsigned int rectHeight, float bias, float scale, bool decompress)
{
  ?R_CopyCompressedDepthRect@@YAXPEAUComputeCmdBufState@@VR_RT_DepthHandle@@VR_RT_Handle@@IIIIIIMM_N@Z(state, srcDepthRt, dstRt, srcX, srcY, dstX, dstY, rectWidth, rectHeight, bias, scale, decompress);
}

/*
==============
R_GetCopyTextureBoxCost
==============
*/

void __fastcall R_GetCopyTextureBoxCost(const GfxTexture *textureDst, const GfxTexture *textureSrc, unsigned int width, unsigned int height, unsigned int depth, unsigned int *readCost, unsigned int *writeCost)
{
  ?R_GetCopyTextureBoxCost@@YAXPEBUGfxTexture@@0IIIAEAI1@Z(textureDst, textureSrc, width, height, depth, readCost, writeCost);
}

/*
==============
R_GetCopyTextureRectCost
==============
*/

void __fastcall R_GetCopyTextureRectCost(const GfxTexture *textureDst, const GfxTexture *textureSrc, unsigned int width, unsigned int height, unsigned int *readCost, unsigned int *writeCost)
{
  ?R_GetCopyTextureRectCost@@YAXPEBUGfxTexture@@0IIAEAI1@Z(textureDst, textureSrc, width, height, readCost, writeCost);
}

/*
==============
R_CopyBufferData
==============
*/
void R_CopyBufferData(ComputeCmdBufState *state, const GfxWrappedBuffer *dst, unsigned int dstOffset, const GfxWrappedBuffer *src, unsigned int srcOffset, unsigned int size)
{
  __int64 v6; 

  v6 = dstOffset;
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1308, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( !dst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1309, ASSERT_TYPE_ASSERT, "(dst)", (const char *)&queryFormat, "dst") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  ((void (__fastcall *)(GfxDevice *, ID3D12Resource *, __int64, ID3D12Resource *, _QWORD, _QWORD))state->device->m_pFunction[5].QueryInterface)(state->device, dst->buffer, v6, src->buffer, srcOffset, size);
}

/*
==============
R_CopyBufferDataInPlace
==============
*/
void R_CopyBufferDataInPlace(ComputeCmdBufState *state, const GfxWrappedRWBuffer *buffer, unsigned int dstOffset, unsigned int srcOffset, unsigned int size)
{
  ComputeShader *memcpyInPlaceComputeShader; 
  char v10; 
  unsigned int v11; 
  GfxShaderBufferRWView *views; 
  int data[4]; 

  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1343, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( (size & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1347, ASSERT_TYPE_ASSERT, "(size % ( 4 * sizeof( uint32_t ) ) == 0)", (const char *)&queryFormat, "size % ( 4 * sizeof( uint32_t ) ) == 0") )
    __debugbreak();
  if ( srcOffset + size <= dstOffset || srcOffset >= dstOffset + size )
  {
    memcpyInPlaceComputeShader = rgp.memcpyInPlaceComputeShader;
    v10 = 1;
  }
  else
  {
    memcpyInPlaceComputeShader = rgp.memmoveDstLowInPlaceComputeShader;
    v10 = 0;
    if ( srcOffset < dstOffset )
      memcpyInPlaceComputeShader = rgp.memmoveSrcLowInPlaceComputeShader;
  }
  if ( !memcpyInPlaceComputeShader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1362, ASSERT_TYPE_ASSERT, "(memcpyShader)", (const char *)&queryFormat, "memcpyShader") )
    __debugbreak();
  R_SetComputeShader(state, memcpyInPlaceComputeShader);
  views = &gfxBuf.dummyRWBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  views = &gfxBuf.dummyRWBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  views = &buffer->rwView;
  R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  data[0] = size >> 4;
  data[1] = srcOffset;
  data[2] = dstOffset;
  data[3] = 0;
  R_UploadAndSetComputeConstants(state, 0, data, 0x10u, NULL);
  if ( v10 )
    v11 = ((size >> 4) + 63) >> 6;
  else
    v11 = 1;
  R_Dispatch(state, v11, 1u, 1u);
}

/*
==============
R_CopyCompressedDepthRect
==============
*/
void R_CopyCompressedDepthRect(ComputeCmdBufState *state, R_RT_DepthHandle *srcDepthRt, R_RT_Handle *dstRt, unsigned int srcX, unsigned int srcY, unsigned int dstX, unsigned int dstY, unsigned int rectWidth, unsigned int rectHeight, float bias, float scale, bool decompress)
{
  R_RT_Handle v12; 
  R_RT_DepthHandle v13; 
  base_vec4_t<unsigned int> v14; 
  R_RT_Handle v15; 
  __m256i v16; 

  v12 = *dstRt;
  v13 = *srcDepthRt;
  *(_QWORD *)v14.v = __PAIR64__(srcY, srcX);
  *((_QWORD *)&v14.xyz.xy + 1) = __PAIR64__(dstY, dstX);
  v15 = v12;
  v16 = (__m256i)v13;
  R_CopyCompressedDepthRectList(state, (R_RT_DepthHandle *)&v16, &v15, &v14, 1u, rectWidth, rectHeight, bias, scale, decompress);
}

/*
==============
R_CopyCompressedDepthRectList
==============
*/
void R_CopyCompressedDepthRectList(ComputeCmdBufState *state, R_RT_DepthHandle *srcDepthRt, R_RT_Handle *dstRt, base_vec4_t<unsigned int> *rectOffsets, unsigned int rectCount, unsigned int rectWidth, unsigned int rectHeight, float bias, float scale, bool decompress)
{
  BOOL v13; 
  int v14; 
  int v15; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  GfxPixelFormat format; 
  int v18; 
  unsigned int v19; 
  __int64 v20; 
  float *bufferData; 
  R_RT_Handle v23; 
  bool v25; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v27; 
  R_RT_Handle v28; 
  bool v30; 
  const R_RT_Surface *v31; 
  float m_clearDepth; 
  bool v34; 
  const R_RT_Surface *v35; 
  unsigned int v36; 
  void *v37; 
  __int64 v38; 
  GfxShaderBufferRWView *p_result; 
  GfxShaderBufferRWView *DepthView; 
  R_RT_Handle *HtileRWView; 
  R_RT_Handle v43; 
  bool v45; 
  R_RT_Handle v46; 
  bool v48; 
  const R_RT_Surface *v49; 
  void *Src; 
  unsigned int zCount; 
  R_RT_Handle v52; 
  R_RT_Handle v53; 
  GfxConstantBufferDesc cbDesc; 
  R_RT_Handle v55; 
  GfxShaderBufferRWView result; 

  zCount = rectCount;
  Src = rectOffsets;
  if ( (rectWidth & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1388, ASSERT_TYPE_ASSERT, "( !(rectWidth % 8) )", "compressed depth copy rects must be multiples of 8x8 tiles") )
    __debugbreak();
  if ( (rectHeight & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1389, ASSERT_TYPE_ASSERT, "( !(rectHeight % 8) )", "compressed depth copy rects must be multiples of 8x8 tiles") )
    __debugbreak();
  if ( (R_RT_Handle::GetSurface(srcDepthRt)->m_rtFlags & 0x4000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1390, ASSERT_TYPE_ASSERT, "( !srcDepthRt.IsMultisampled() )", "todo: copy compressed msaa depth") )
    __debugbreak();
  if ( (R_RT_Handle::GetSurface(srcDepthRt)->m_rtFlags & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1391, ASSERT_TYPE_ASSERT, "( !(srcDepthRt.GetFlags() & R_RT_Flag_HtileDisabled) )", "todo: fall back to standard texture copy") )
    __debugbreak();
  if ( (R_RT_Handle::GetSurface(srcDepthRt)->m_rtFlags & 0x80) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1392, ASSERT_TYPE_ASSERT, "( !(srcDepthRt.HasStencil()) )", "todo: add support for stencil") )
    __debugbreak();
  v13 = Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO;
  v14 = v13 | 2;
  if ( R_RT_Handle::GetSurface(srcDepthRt)->m_image.m_base.format != GFX_PF_D16 )
    v14 = v13;
  v15 = v14 | 4;
  m_rtFlagsInternal = R_RT_Handle::GetSurface(dstRt)->m_rtFlagsInternal;
  format = R_RT_Handle::GetSurface(dstRt)->m_image.m_base.format;
  if ( (m_rtFlagsInternal & 0x10) != 0 )
  {
    if ( format != GFX_PF_D16 )
      v15 = v14;
    v18 = v15 | 8;
    if ( (((unsigned __int16)*(_DWORD *)&dstRt->m_surfaceID ^ (unsigned __int16)*(_DWORD *)&srcDepthRt->m_surfaceID) & 0xFFFF7FFF) != 0 )
      v18 = v15;
    v19 = v18 | 0x10;
    if ( !decompress )
      v19 = v18;
    v20 = v19 | 0x30;
    if ( (R_RT_Handle::GetSurface(dstRt)->m_rtFlags & 0x100) == 0 )
      v20 = v19;
  }
  else
  {
    if ( format != GFX_PF_R16 )
      v15 = v14;
    v20 = v15 | 0x30u;
  }
  if ( (v20 & 0x28) == 40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1434, ASSERT_TYPE_ASSERT, "( (cdtIndex & (CDT_INPLACE | CDT_NO_WRITE_HTILE)) != (CDT_INPLACE | CDT_NO_WRITE_HTILE) )", "cannot decompress in place without writing htile") )
    __debugbreak();
  if ( !rgp.copyDepthTexComputeShader[v20] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1436, ASSERT_TYPE_ASSERT, "( rgp.copyDepthTexComputeShader[cdtIndex] )", "missing cs_copydepthtex variant - please add this to zone_source/code/ps4.csv and zone_source/code/xb3.csv") )
    __debugbreak();
  R_SetComputeShader(state, rgp.copyDepthTexComputeShader[v20]);
  if ( zCount > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1440, ASSERT_TYPE_ASSERT, "( rectCount <= 64 )", "increase CD_MAX_RECTS and rebuild code_post_gfx") )
    __debugbreak();
  _XMM0 = *R_BeginComputeConstants((GfxConstantBufferDesc *)&result, state, 0, 16 * (zCount + 2));
  cbDesc = _XMM0;
  bufferData = (float *)_XMM0.bufferData;
  v52 = srcDepthRt->R_RT_Handle;
  R_RT_GetHtileInfo((R_RT_DepthHandle *)&v52, (unsigned int *)cbDesc.bufferData, (unsigned int *)cbDesc.bufferData + 1);
  if ( (R_RT_Handle::GetSurface(dstRt)->m_rtFlagsInternal & 0x10) != 0 )
  {
    v23 = *dstRt;
    v53 = v23;
    v55 = v23;
    if ( LOWORD(_XMM0.bufferData) )
    {
      R_RT_Handle::GetSurface(&v55);
      if ( (R_RT_Handle::GetSurface(&v55)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
      {
        v23 = v55;
      }
      else
      {
        v23 = v55;
        __debugbreak();
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v23 = v53;
        if ( v25 )
          __debugbreak();
      }
    }
    v52 = v23;
    R_RT_GetHtileInfo((R_RT_DepthHandle *)&v52, (unsigned int *)_XMM0.bufferData + 2, (unsigned int *)_XMM0.bufferData + 3);
  }
  Surface = R_RT_Handle::GetSurface(srcDepthRt);
  if ( (Surface->m_rtFlagsInternal & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 400, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth") )
    __debugbreak();
  *((_DWORD *)_XMM0.bufferData + 4) = LODWORD(Surface->m_depth.m_clearDepth);
  v27 = R_RT_Handle::GetSurface(dstRt);
  v28 = *dstRt;
  v53 = v28;
  v55 = v28;
  if ( (v27->m_rtFlagsInternal & 0x10) != 0 )
  {
    if ( LOWORD(_XMM0.bufferData) )
    {
      R_RT_Handle::GetSurface(&v55);
      if ( (R_RT_Handle::GetSurface(&v55)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
      {
        v28 = v55;
      }
      else
      {
        v28 = v55;
        __debugbreak();
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v28 = v53;
        if ( v30 )
          __debugbreak();
      }
    }
    v52 = v28;
    v31 = R_RT_Handle::GetSurface(&v52);
    if ( (v31->m_rtFlagsInternal & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 400, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth") )
      __debugbreak();
    m_clearDepth = v31->m_depth.m_clearDepth;
  }
  else
  {
    if ( LOWORD(_XMM0.bufferData) )
    {
      R_RT_Handle::GetSurface(&v55);
      if ( (R_RT_Handle::GetSurface(&v55)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v28 = v55;
        __debugbreak();
      }
      else
      {
        v28 = v55;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v28 = v53;
        if ( v34 )
          __debugbreak();
      }
    }
    v52 = v28;
    v35 = R_RT_Handle::GetSurface(&v52);
    if ( (v35->m_rtFlagsInternal & 0x10) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 324, ASSERT_TYPE_ASSERT, "(!( surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth ))", (const char *)&queryFormat, "!( surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth )") )
      __debugbreak();
    m_clearDepth = v35->m_color.m_clearColor.v[0];
  }
  v36 = zCount;
  v37 = Src;
  v38 = zCount;
  bufferData[5] = m_clearDepth;
  _XMM0 = LODWORD(bias);
  bufferData[6] = bias;
  bufferData[7] = scale;
  memcpy_0(bufferData + 8, v37, 16 * v38);
  R_EndComputeConstants(state, &cbDesc);
  if ( (v20 & 8) != 0 )
  {
    _XMM0 = (__int128)gfxBuf.dummyBuffer.view;
    *(GfxShaderBufferView *)&result.rwResource = gfxBuf.dummyBuffer.view;
    p_result = &result;
  }
  else
  {
    v52 = srcDepthRt->R_RT_Handle;
    p_result = (GfxShaderBufferRWView *)R_RT_GetHtileView((GfxShaderBufferView *)&v55, (R_RT_DepthHandle *)&v52);
  }
  Src = p_result;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&Src);
  if ( (v20 & 8) != 0 )
  {
    _XMM0 = (__int128)R_Texture_GetResident(rgp.blackImage->textureId)->shaderView;
    *(_OWORD *)&result.rwResource = _XMM0;
    DepthView = &result;
  }
  else
  {
    v52 = srcDepthRt->R_RT_Handle;
    DepthView = (GfxShaderBufferRWView *)R_RT_GetDepthView((GfxShaderTextureView *)&v55, (R_RT_DepthHandle *)&v52);
  }
  Src = DepthView;
  R_SetComputeTextureViews(state, 1, 1, (const GfxShaderTextureView *const *)&Src);
  if ( (v20 & 0x20) != 0 )
  {
    _XMM0 = *(_OWORD *)&gfxBuf.dummyRWBuffer.rwView.rwResource;
    *(_OWORD *)&v55.m_surfaceID = *(_OWORD *)&gfxBuf.dummyRWBuffer.rwView.rwResource;
    v55.m_tracking.m_name = *(const char **)&gfxBuf.dummyRWBuffer.rwView.rwView;
    HtileRWView = &v55;
  }
  else
  {
    v43 = *dstRt;
    v52 = v43;
    v53 = v43;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v53);
      if ( (R_RT_Handle::GetSurface(&v53)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
      {
        v43 = v53;
      }
      else
      {
        v43 = v53;
        __debugbreak();
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v45 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v43 = v52;
        if ( v45 )
          __debugbreak();
      }
    }
    v52 = v43;
    HtileRWView = (R_RT_Handle *)R_RT_GetHtileRWView(&result, (R_RT_DepthHandle *)&v52);
  }
  Src = HtileRWView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&Src, NULL);
  if ( (R_RT_Handle::GetSurface(dstRt)->m_rtFlagsInternal & 0x10) != 0 )
  {
    v46 = *dstRt;
    v52 = v46;
    v53 = v46;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v53);
      if ( (R_RT_Handle::GetSurface(&v53)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
      {
        v46 = v53;
      }
      else
      {
        v46 = v53;
        __debugbreak();
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v48 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v46 = v52;
        if ( v48 )
          __debugbreak();
      }
    }
    v52 = v46;
    Src = R_RT_GetDepthRWView((GfxShaderTextureRWView *)&v55, (R_RT_DepthHandle *)&v52);
    R_SetComputeTextureRWViews(state, 1, 1, (const GfxShaderTextureRWView *const *)&Src);
  }
  else
  {
    v49 = R_RT_Handle::GetSurface(dstRt);
    Src = (void *)R_Texture_GetResident(v49->m_image.m_base.textureId);
    R_SetComputeRWTextures(state, 1, 1, (const GfxTexture *const *)&Src);
  }
  R_Dispatch(state, rectWidth >> 3, rectHeight >> 3, v36);
}

/*
==============
R_CopyTexture
==============
*/
void R_CopyTexture(ComputeCmdBufState *state, const GfxTexture *textureDst, const GfxTexture *textureSrc)
{
  R_HW_CopyTexture(state->device, textureDst->basemap, textureSrc->basemap);
}

/*
==============
R_CopyTextureBox
==============
*/
void R_CopyTextureBox(ComputeCmdBufState *state, const GfxTexture *textureDst, const GfxTexture *textureSrc, unsigned int dstX, unsigned int dstY, unsigned int dstZ, unsigned int dstMip, unsigned int srcX, unsigned int srcY, unsigned int srcZ, unsigned int srcMip, unsigned int width, unsigned int height, unsigned int depth)
{
  ID3D12Resource *basemap; 
  GfxDevice *device; 
  GfxDevice *v19; 
  ID3D12Resource *v21; 
  int v22; 
  unsigned int v23[8]; 
  ID3D12Resource *v24; 
  int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  int v33[4]; 
  unsigned __int64 v34; 
  unsigned int v35; 
  unsigned __int16 v36; 
  int v37[4]; 
  __int64 v38; 
  int v39; 
  unsigned __int16 v40; 

  if ( !textureSrc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1011, ASSERT_TYPE_ASSERT, "(textureSrc)", (const char *)&queryFormat, "textureSrc") )
    __debugbreak();
  if ( !textureDst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1012, ASSERT_TYPE_ASSERT, "(textureDst)", (const char *)&queryFormat, "textureDst") )
    __debugbreak();
  if ( R_Texture_IsDestroyed(textureSrc) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1013, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( textureSrc ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( textureSrc )") )
    __debugbreak();
  if ( R_Texture_IsDestroyed(textureDst) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1014, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( textureDst ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( textureDst )") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  basemap = textureSrc->basemap;
  v27 = srcX;
  v30 = width + srcX;
  v28 = srcY;
  v31 = height + srcY;
  v29 = srcZ;
  v32 = depth + srcZ;
  ((void (__fastcall *)(ID3D12Resource *, int *))basemap->m_pFunction[3].AddRef)(basemap, v37);
  ((void (__fastcall *)(ID3D12Resource *, int *))textureDst->basemap->m_pFunction[3].AddRef)(textureDst->basemap, v33);
  if ( v34 >> dstMip < width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1056, ASSERT_TYPE_ASSERT, "(( dstDesc.Width >> dstMip ) >= width)", (const char *)&queryFormat, "( dstDesc.Width >> dstMip ) >= width") )
    __debugbreak();
  if ( v35 >> dstMip < height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1057, ASSERT_TYPE_ASSERT, "(( dstDesc.Height >> dstMip ) >= height)", (const char *)&queryFormat, "( dstDesc.Height >> dstMip ) >= height") )
    __debugbreak();
  if ( v36 >> dstMip < (int)depth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1058, ASSERT_TYPE_ASSERT, "(( dstDesc.DepthOrArraySize >> dstMip ) >= (int)depth)", (const char *)&queryFormat, "( dstDesc.DepthOrArraySize >> dstMip ) >= (int)depth") )
    __debugbreak();
  v24 = textureSrc->basemap;
  v26 = srcMip;
  v21 = textureDst->basemap;
  v25 = 0;
  if ( v37[0] == v33[0] )
  {
    v22 = 0;
    v23[0] = dstMip;
  }
  else
  {
    v22 = 1;
    ((void (__fastcall *)(ID3D12Device *, int *, _QWORD, __int64, _QWORD, unsigned int *, _QWORD, _QWORD, _QWORD))g_dx.d3d12device->m_pFunction[12].Release)(g_dx.d3d12device, v37, 0i64, 1i64, 0i64, v23, 0i64, 0i64, 0i64);
  }
  if ( R_Texture_IsStreamed(textureSrc) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1086, ASSERT_TYPE_ASSERT, "(!R_Texture_IsStreamed( textureSrc ))", (const char *)&queryFormat, "!R_Texture_IsStreamed( textureSrc )") )
    __debugbreak();
  if ( srcX || dstX || srcY || dstY || width != v38 || height != v39 || width != v34 || height != v35 || depth == v36 && depth == v40 )
  {
    ((void (__fastcall *)(GfxDevice *, ID3D12Resource **, _QWORD, _QWORD, unsigned int, ID3D12Resource **, unsigned int *, _DWORD))state->device->m_pFunction[27].Release)(state->device, &v21, dstX, dstY, dstZ, &v24, &v27, 0);
  }
  else
  {
    device = state->device;
    v31 = height >> 1;
    ((void (__fastcall *)(GfxDevice *, ID3D12Resource **, _QWORD, _QWORD, unsigned int, ID3D12Resource **, unsigned int *, _DWORD))device->m_pFunction[27].Release)(device, &v21, 0i64, 0i64, dstZ, &v24, &v27, 0);
    v19 = state->device;
    v28 = height >> 1;
    v31 = height;
    ((void (__fastcall *)(GfxDevice *, ID3D12Resource **, _QWORD, _QWORD, unsigned int, ID3D12Resource **, unsigned int *, _DWORD))v19->m_pFunction[27].Release)(v19, &v21, 0i64, height >> 1, dstZ, &v24, &v27, 0);
  }
}

/*
==============
R_CopyTextureRect
==============
*/
void R_CopyTextureRect(ComputeCmdBufState *state, const GfxTexture *textureDst, const GfxTexture *textureSrc, unsigned int dstX, unsigned int dstY, unsigned int dstMip, unsigned int dstSlice, unsigned int srcX, unsigned int srcY, unsigned int srcMip, unsigned int srcSlice, unsigned int width, unsigned int height)
{
  ID3D12Resource *basemap; 
  int *v17; 
  ID3D12Resource *v20; 
  int v21; 
  unsigned int v22[8]; 
  ID3D12Resource *v23; 
  int v24; 
  unsigned int v25; 
  int v26[6]; 
  int v27[4]; 
  unsigned __int64 v28; 
  unsigned int v29; 
  unsigned __int16 v30; 
  int v31[4]; 
  unsigned __int64 v32; 
  unsigned int v33; 
  unsigned __int16 v34; 

  if ( !textureSrc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 701, ASSERT_TYPE_ASSERT, "(textureSrc)", (const char *)&queryFormat, "textureSrc") )
    __debugbreak();
  if ( !textureDst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 702, ASSERT_TYPE_ASSERT, "(textureDst)", (const char *)&queryFormat, "textureDst") )
    __debugbreak();
  if ( R_Texture_IsDestroyed(textureSrc) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 703, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( textureSrc ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( textureSrc )") )
    __debugbreak();
  if ( R_Texture_IsDestroyed(textureDst) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 704, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( textureDst ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( textureDst )") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  basemap = textureSrc->basemap;
  v26[0] = srcX;
  v26[1] = srcY;
  v26[2] = 0;
  v26[3] = srcX + width;
  v26[4] = srcY + height;
  v26[5] = 1;
  ((void (__fastcall *)(ID3D12Resource *, int *))basemap->m_pFunction[3].AddRef)(basemap, v27);
  ((void (__fastcall *)(ID3D12Resource *, int *))textureDst->basemap->m_pFunction[3].AddRef)(textureDst->basemap, v31);
  if ( v32 >> dstMip < width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 755, ASSERT_TYPE_ASSERT, "(( dstDesc.Width >> dstMip ) >= width)", (const char *)&queryFormat, "( dstDesc.Width >> dstMip ) >= width") )
    __debugbreak();
  if ( v33 >> dstMip < height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 756, ASSERT_TYPE_ASSERT, "(( dstDesc.Height >> dstMip ) >= height)", (const char *)&queryFormat, "( dstDesc.Height >> dstMip ) >= height") )
    __debugbreak();
  v23 = textureSrc->basemap;
  v24 = 0;
  v25 = srcMip + srcSlice * v30;
  v20 = textureDst->basemap;
  if ( v27[0] == v31[0] )
  {
    v21 = 0;
    v22[0] = dstMip + dstSlice * v34;
  }
  else
  {
    v21 = 1;
    ((void (__fastcall *)(ID3D12Device *, int *, _QWORD, __int64, _QWORD, unsigned int *, _QWORD, _QWORD, _QWORD))g_dx.d3d12device->m_pFunction[12].Release)(g_dx.d3d12device, v27, 0i64, 1i64, 0i64, v22, 0i64, 0i64, 0i64);
  }
  if ( srcX || srcY || width != v28 >> srcMip || (v17 = NULL, height != v29 >> srcMip) )
    v17 = v26;
  if ( R_Texture_IsStreamed(textureSrc) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 788, ASSERT_TYPE_ASSERT, "(!R_Texture_IsStreamed( textureSrc ))", (const char *)&queryFormat, "!R_Texture_IsStreamed( textureSrc )") )
    __debugbreak();
  ((void (__fastcall *)(GfxDevice *, ID3D12Resource **, _QWORD, _QWORD, _DWORD, ID3D12Resource **, int *, _DWORD))state->device->m_pFunction[27].Release)(state->device, &v20, dstX, dstY, 0, &v23, v17, 0);
}

/*
==============
R_CopyTextureRect
==============
*/
void R_CopyTextureRect(ComputeCmdBufState *state, const GfxTexture *textureDst, const GfxTexture *textureSrc, unsigned int dstX, unsigned int dstY, unsigned int srcX, unsigned int srcY, unsigned int width, unsigned int height, float scale, float bias)
{
  vec4_t color; 

  color = 0i64;
  R_MemTextureRect(state, textureDst, textureSrc, dstX, dstY, srcX, srcY, width, height, &color, scale, bias);
}

/*
==============
R_CopyTextureRect
==============
*/
void R_CopyTextureRect(ComputeCmdBufState *state, R_RT_Handle *dstRt, R_RT_Handle *srcRt, unsigned int dstX, unsigned int dstY, unsigned int dstMip, unsigned int dstSlice, unsigned int srcX, unsigned int srcY, unsigned int srcMip, unsigned int srcSlice, unsigned int width, unsigned int height)
{
  R_RT_Handle *ViewInternal; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v20; 
  const GfxTexture *v21; 
  const R_RT_Surface *BaseSurface; 
  const unsigned __int8 *ResidentPixels; 
  const unsigned __int8 *v24; 
  const R_RT_Surface *v25; 
  const unsigned __int8 *v26; 
  const R_RT_Surface *v27; 
  unsigned __int16 m_surfaceID; 
  const unsigned __int8 *v29; 
  unsigned __int16 v30; 
  unsigned __int16 *v31; 
  int v32; 
  unsigned __int16 v33; 
  unsigned __int16 v34; 
  unsigned __int16 *v35; 
  int v36; 
  unsigned __int16 v37; 
  unsigned __int16 v38; 
  unsigned __int16 *v39; 
  int v40; 
  int v41; 
  unsigned __int16 v42; 
  unsigned __int16 v43; 
  unsigned __int16 *v44; 
  int v45; 
  __int64 m_htileSize; 
  __int64 dstSlicea; 
  __int64 srcXa; 
  __int64 srcYa; 
  R_RT_Handle v50; 
  ID3D12Resource *m_floatTexture; 
  int v52; 
  unsigned int m_subresourceToTransition; 
  R_RT_Handle v54; 

  if ( (R_RT_Handle::GetSurface(dstRt)->m_rtFlagsInternal & 0x10) != 0 )
  {
    *(_DWORD *)&v54.m_surfaceID = srcX;
    *(&v54.m_tracking.m_allocCounter + 1) = width + srcX;
    *((_DWORD *)&v54.m_surfaceID + 1) = srcY;
    LODWORD(v54.m_tracking.m_name) = height + srcY;
    v54.m_tracking.m_allocCounter = 0;
    HIDWORD(v54.m_tracking.m_name) = 1;
    *(_QWORD *)&v50.m_surfaceID = R_RT_Handle::GetSurface(srcRt)->m_depth.m_floatTexture;
    v50.m_tracking.m_allocCounter = 0;
    if ( R_RT_Handle::GetSurface(srcRt)->m_subresourceToTransition == -1 )
      LODWORD(v50.m_tracking.m_name) = 0;
    else
      LODWORD(v50.m_tracking.m_name) = R_RT_Handle::GetSurface(srcRt)->m_subresourceToTransition;
    m_floatTexture = R_RT_Handle::GetSurface(dstRt)->m_depth.m_floatTexture;
    v52 = 0;
    if ( R_RT_Handle::GetSurface(dstRt)->m_subresourceToTransition == -1 )
      m_subresourceToTransition = 0;
    else
      m_subresourceToTransition = R_RT_Handle::GetSurface(dstRt)->m_subresourceToTransition;
    ((void (__fastcall *)(GfxDevice *, ID3D12Resource **, _QWORD, _QWORD, _DWORD, R_RT_Handle *, R_RT_Handle *, _DWORD))state->device->m_pFunction[27].Release)(state->device, &m_floatTexture, dstX, dstY, 0, &v50, &v54, 0);
  }
  else
  {
    v54 = *dstRt;
    ViewInternal = R_RT_GetViewInternal(&v50, &v54, 0, 0);
    Surface = R_RT_Handle::GetSurface(ViewInternal);
    Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
    v20 = R_RT_Handle::GetSurface(srcRt);
    v21 = R_Texture_GetResident(v20->m_image.m_base.textureId);
    R_CopyTextureRect(state, Resident, v21, dstX, dstY, dstMip, dstSlice, srcX, srcY, srcMip, srcSlice, width, height);
  }
  if ( (R_RT_Handle::GetSurface(dstRt)->m_rtFlagsInternal & 0x10) != 0 && (R_RT_Handle::GetSurface(dstRt)->m_rtFlags & 0x100) == 0 )
  {
    BaseSurface = R_RT_Handle::GetBaseSurface(dstRt);
    ResidentPixels = R_Image_GetResidentPixels(&BaseSurface->m_image.m_base);
    v24 = &ResidentPixels[R_RT_Handle::GetSurface(dstRt)->m_htileOffset];
    v25 = R_RT_Handle::GetBaseSurface(srcRt);
    v26 = R_Image_GetResidentPixels(&v25->m_image.m_base);
    v27 = R_RT_Handle::GetSurface(srcRt);
    m_surfaceID = srcRt->m_surfaceID;
    v29 = &v26[v27->m_htileOffset];
    if ( !srcRt->m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
      __debugbreak();
    v30 = (m_surfaceID & 0x7FFF) - 1;
    if ( v30 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
      __debugbreak();
    v31 = &g_R_RT_ManagerSurfaceAllocator->headFreeBlockIndex + 1184 * v30;
    if ( *((_DWORD *)v31 + 572) != srcRt->m_tracking.m_allocCounter )
    {
      LODWORD(srcXa) = srcRt->m_tracking.m_allocCounter;
      LODWORD(dstSlicea) = *((_DWORD *)v31 + 572);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", dstSlicea, srcXa, srcRt->m_tracking.m_name, srcRt->m_tracking.m_location) )
        __debugbreak();
    }
    v32 = *((_DWORD *)v31 + 4);
    if ( (v32 & 0x3000) != 4096 && (v32 & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
      __debugbreak();
    v33 = dstRt->m_surfaceID;
    if ( !dstRt->m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
      __debugbreak();
    v34 = (v33 & 0x7FFF) - 1;
    if ( v34 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
      __debugbreak();
    v35 = &g_R_RT_ManagerSurfaceAllocator->headFreeBlockIndex + 1184 * v34;
    if ( *((_DWORD *)v35 + 572) != dstRt->m_tracking.m_allocCounter )
    {
      LODWORD(srcXa) = dstRt->m_tracking.m_allocCounter;
      LODWORD(dstSlicea) = *((_DWORD *)v35 + 572);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", dstSlicea, srcXa, dstRt->m_tracking.m_name, dstRt->m_tracking.m_location) )
        __debugbreak();
    }
    v36 = *((_DWORD *)v35 + 4);
    if ( (v36 & 0x3000) != 4096 && (v36 & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
      __debugbreak();
    if ( *((_DWORD *)v31 + 264) != *((_DWORD *)v35 + 264) )
    {
      v37 = dstRt->m_surfaceID;
      if ( !dstRt->m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
        __debugbreak();
      v38 = (v37 & 0x7FFF) - 1;
      if ( v38 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
        __debugbreak();
      v39 = &g_R_RT_ManagerSurfaceAllocator->headFreeBlockIndex + 1184 * v38;
      if ( *((_DWORD *)v39 + 572) != dstRt->m_tracking.m_allocCounter )
      {
        LODWORD(srcXa) = dstRt->m_tracking.m_allocCounter;
        LODWORD(dstSlicea) = *((_DWORD *)v39 + 572);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", dstSlicea, srcXa, dstRt->m_tracking.m_name, dstRt->m_tracking.m_location) )
          __debugbreak();
      }
      v40 = *((_DWORD *)v39 + 4);
      if ( (v40 & 0x3000) != 4096 && (v40 & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
        __debugbreak();
      v41 = *((_DWORD *)v39 + 264);
      v42 = srcRt->m_surfaceID;
      if ( !srcRt->m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
        __debugbreak();
      v43 = (v42 & 0x7FFF) - 1;
      if ( v43 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
        __debugbreak();
      v44 = &g_R_RT_ManagerSurfaceAllocator->headFreeBlockIndex + 1184 * v43;
      if ( *((_DWORD *)v44 + 572) != srcRt->m_tracking.m_allocCounter )
      {
        LODWORD(srcXa) = srcRt->m_tracking.m_allocCounter;
        LODWORD(dstSlicea) = *((_DWORD *)v44 + 572);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", dstSlicea, srcXa, srcRt->m_tracking.m_name, srcRt->m_tracking.m_location) )
          __debugbreak();
      }
      v45 = *((_DWORD *)v44 + 4);
      if ( (v45 & 0x3000) != 4096 && (v45 & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
        __debugbreak();
      LODWORD(srcYa) = v41;
      LODWORD(srcXa) = *((_DWORD *)v44 + 264);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 996, ASSERT_TYPE_ASSERT, "( srcRt.GetSurface()->m_htileSize ) == ( dstRt.GetSurface()->m_htileSize )", "%s == %s\n\t%i, %i", "srcRt.GetSurface()->m_htileSize", "dstRt.GetSurface()->m_htileSize", srcXa, srcYa) )
        __debugbreak();
    }
    m_htileSize = R_RT_Handle::GetSurface(srcRt)->m_htileSize;
    if ( (((unsigned __int8)v24 | (unsigned __int8)v29) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 519, ASSERT_TYPE_ASSERT, "(((reinterpret_cast<uint64_t>(dst) & 3) == 0) && ((reinterpret_cast<uint64_t>(src) & 3) == 0))", (const char *)&queryFormat, "((reinterpret_cast<uint64_t>(dst) & 3) == 0) && ((reinterpret_cast<uint64_t>(src) & 3) == 0)") )
      __debugbreak();
    if ( Mem_Paged_IsInPoolVARange(MEM_POOL_GPU_CPU_READ_ONLY, v24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 522, ASSERT_TYPE_ASSERT, "(!Mem_Paged_IsGpuCachedMemory( dst ))", (const char *)&queryFormat, "!Mem_Paged_IsGpuCachedMemory( dst )") )
      __debugbreak();
    if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
      __debugbreak();
    ((void (__fastcall *)(GfxDevice *, const unsigned __int8 *, const unsigned __int8 *, __int64, _DWORD))state->device->m_pFunction[20].QueryInterface)(state->device, v24, v29, m_htileSize, 0);
    R_RT_Handle::ClearAuxDirty(dstRt);
  }
}

/*
==============
R_GetCopyTextureBoxCost
==============
*/
void R_GetCopyTextureBoxCost(const GfxTexture *textureDst, const GfxTexture *textureSrc, unsigned int width, unsigned int height, unsigned int depth, unsigned int *readCost, unsigned int *writeCost)
{
  DXGI_FORMAT v11; 
  DXGI_FORMAT v12; 
  bool IsCompressedDXGIFormat; 
  unsigned int DXGIFormatBytesPerPixel; 
  unsigned int v15; 
  unsigned int v16; 
  int v17; 
  bool v18; 
  unsigned int v19; 
  int v20; 
  char v21[32]; 
  DXGI_FORMAT format; 
  char v23[32]; 
  DXGI_FORMAT v24; 

  if ( !textureDst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1246, ASSERT_TYPE_ASSERT, "(textureDst)", (const char *)&queryFormat, "textureDst") )
    __debugbreak();
  if ( !textureSrc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1247, ASSERT_TYPE_ASSERT, "(textureSrc)", (const char *)&queryFormat, "textureSrc") )
    __debugbreak();
  if ( R_Texture_IsDestroyed(textureDst) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1248, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( textureDst ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( textureDst )") )
    __debugbreak();
  if ( R_Texture_IsDestroyed(textureSrc) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 1249, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( textureSrc ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( textureSrc )") )
    __debugbreak();
  ((void (__fastcall *)(ID3D12Resource *, char *))textureSrc->basemap->m_pFunction[3].AddRef)(textureSrc->basemap, v21);
  ((void (__fastcall *)(ID3D12Resource *, char *))textureDst->basemap->m_pFunction[3].AddRef)(textureDst->basemap, v23);
  v11 = format;
  v12 = v24;
  IsCompressedDXGIFormat = R_D3D_IsCompressedDXGIFormat(format);
  DXGIFormatBytesPerPixel = R_D3D_GetDXGIFormatBytesPerPixel(v11);
  v15 = width >> 2;
  v16 = height >> 2;
  if ( IsCompressedDXGIFormat )
    v17 = v15 * v16 * DXGIFormatBytesPerPixel;
  else
    v17 = height * width * DXGIFormatBytesPerPixel;
  *readCost = depth * v17;
  v18 = R_D3D_IsCompressedDXGIFormat(v12);
  v19 = R_D3D_GetDXGIFormatBytesPerPixel(v12);
  if ( v18 )
    v20 = v15 * v16 * v19;
  else
    v20 = height * width * v19;
  *writeCost = depth * v20;
}

/*
==============
R_GetCopyTextureRectCost
==============
*/
void R_GetCopyTextureRectCost(const GfxTexture *textureDst, const GfxTexture *textureSrc, unsigned int width, unsigned int height, unsigned int *readCost, unsigned int *writeCost)
{
  DXGI_FORMAT v10; 
  DXGI_FORMAT v11; 
  bool IsCompressedDXGIFormat; 
  unsigned int DXGIFormatBytesPerPixel; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  bool v17; 
  unsigned int v18; 
  unsigned int v19; 
  char v20[32]; 
  DXGI_FORMAT format; 
  char v22[32]; 
  DXGI_FORMAT v23; 

  if ( !textureDst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 640, ASSERT_TYPE_ASSERT, "(textureDst)", (const char *)&queryFormat, "textureDst") )
    __debugbreak();
  if ( !textureSrc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 641, ASSERT_TYPE_ASSERT, "(textureSrc)", (const char *)&queryFormat, "textureSrc") )
    __debugbreak();
  if ( R_Texture_IsDestroyed(textureDst) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 642, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( textureDst ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( textureDst )") )
    __debugbreak();
  if ( R_Texture_IsDestroyed(textureSrc) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 643, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( textureSrc ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( textureSrc )") )
    __debugbreak();
  ((void (__fastcall *)(ID3D12Resource *, char *))textureSrc->basemap->m_pFunction[3].AddRef)(textureSrc->basemap, v20);
  ((void (__fastcall *)(ID3D12Resource *, char *))textureDst->basemap->m_pFunction[3].AddRef)(textureDst->basemap, v22);
  v10 = format;
  v11 = v23;
  IsCompressedDXGIFormat = R_D3D_IsCompressedDXGIFormat(format);
  DXGIFormatBytesPerPixel = R_D3D_GetDXGIFormatBytesPerPixel(v10);
  v14 = width >> 2;
  v15 = height >> 2;
  if ( IsCompressedDXGIFormat )
    v16 = v14 * v15 * DXGIFormatBytesPerPixel;
  else
    v16 = height * width * DXGIFormatBytesPerPixel;
  *readCost = v16;
  v17 = R_D3D_IsCompressedDXGIFormat(v11);
  v18 = R_D3D_GetDXGIFormatBytesPerPixel(v11);
  if ( v17 )
    v19 = v14 * v15 * v18;
  else
    v19 = height * width * v18;
  *writeCost = v19;
}

/*
==============
R_MemCpy
==============
*/
void R_MemCpy(ComputeCmdBufState *state, void *dst, const void *src, unsigned __int64 size, bool waitForCopy)
{
  if ( (((unsigned __int8)src | (unsigned __int8)dst) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 519, ASSERT_TYPE_ASSERT, "(((reinterpret_cast<uint64_t>(dst) & 3) == 0) && ((reinterpret_cast<uint64_t>(src) & 3) == 0))", (const char *)&queryFormat, "((reinterpret_cast<uint64_t>(dst) & 3) == 0) && ((reinterpret_cast<uint64_t>(src) & 3) == 0)") )
    __debugbreak();
  if ( Mem_Paged_IsInPoolVARange(MEM_POOL_GPU_CPU_READ_ONLY, dst) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 522, ASSERT_TYPE_ASSERT, "(!Mem_Paged_IsGpuCachedMemory( dst ))", (const char *)&queryFormat, "!Mem_Paged_IsGpuCachedMemory( dst )") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  ((void (__fastcall *)(GfxDevice *, void *, const void *, unsigned __int64, _DWORD))state->device->m_pFunction[20].QueryInterface)(state->device, dst, src, size, 0);
  if ( waitForCopy )
    R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
}

/*
==============
R_MemTextureRect
==============
*/
void R_MemTextureRect(ComputeCmdBufState *state, const GfxTexture *textureDst, const GfxTexture *textureSrc, unsigned int dstX, unsigned int dstY, unsigned int srcX, unsigned int srcY, unsigned int width, unsigned int height, const vec4_t *color, float scale, float bias)
{
  unsigned int v12; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  ComputeShader **setRect2DComputeShader; 
  ComputeShader **copyRect2DComputeShader; 
  unsigned int v27; 
  unsigned int v29; 
  GfxTexture *v30; 
  GfxTexture *textures; 
  int data[8]; 
  vec4_t v33; 
  char v34[16]; 
  unsigned __int64 val; 
  unsigned int v36; 
  char v37[16]; 
  unsigned __int64 v38; 
  unsigned int v39; 

  v12 = 0x4000;
  if ( (width > 0x4000 || height > 0x4000) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 360, ASSERT_TYPE_ASSERT, "(width <= 16384 && height <= 16384)", (const char *)&queryFormat, "width <= R_MAX_TEXTURE_SIZE && height <= R_MAX_TEXTURE_SIZE") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v16 = 0x4000;
  if ( !textureDst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 378, ASSERT_TYPE_ASSERT, "(textureDst != 0)", (const char *)&queryFormat, "textureDst != 0") )
    __debugbreak();
  ((void (__fastcall *)(ID3D12Resource *, char *))textureDst->basemap->m_pFunction[3].AddRef)(textureDst->basemap, v34);
  v29 = truncate_cast<unsigned int,unsigned __int64>(val);
  v17 = v29;
  v27 = v36;
  if ( textureSrc )
  {
    ((void (__fastcall *)(ID3D12Resource *, char *))textureSrc->basemap->m_pFunction[3].AddRef)(textureSrc->basemap, v37);
    v18 = truncate_cast<unsigned int,unsigned __int64>(v38);
    v17 = v29;
    v12 = v18;
    v16 = v39;
  }
  v19 = v17;
  if ( v12 > srcX + width )
    v12 = srcX + width;
  if ( v16 > srcY + height )
    v16 = srcY + height;
  if ( v17 > dstX + width )
    v19 = dstX + width;
  v20 = v27;
  if ( v27 > dstY + height )
    v20 = dstY + height;
  if ( srcX < v12 && srcY < v16 && dstX < v19 && dstY < v20 )
  {
    v21 = v19 - dstX;
    v22 = v12 - srcX;
    if ( v21 > v22 )
      v21 = v22;
    v23 = v20 - dstY;
    v24 = v16 - srcY;
    if ( v23 > v24 )
      v23 = v24;
    if ( textureSrc )
    {
      if ( v17 < v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 436, ASSERT_TYPE_ASSERT, "(!isCopy || ( dstWidth >= width ))", (const char *)&queryFormat, "!isCopy || ( dstWidth >= width )") )
        __debugbreak();
      if ( v27 < v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cs_utils.cpp", 437, ASSERT_TYPE_ASSERT, "(!isCopy || ( dstHeight >= height ))", (const char *)&queryFormat, "!isCopy || ( dstHeight >= height )") )
        __debugbreak();
    }
    v30 = (GfxTexture *)textureSrc;
    textures = (GfxTexture *)textureDst;
    if ( !textureSrc || scale == 1.0 && bias == 0.0 )
    {
      setRect2DComputeShader = rgp.setRect2DComputeShader;
      copyRect2DComputeShader = rgp.copyRect2DComputeShader;
    }
    else
    {
      setRect2DComputeShader = rgp.copyRect2DComputeShader;
      copyRect2DComputeShader = &rgp.copyRect2DComputeShader[2];
    }
    R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&textures);
    if ( textureSrc )
      R_SetComputeTextures(state, 0, 1, (const GfxTexture *const *)&v30);
    else
      copyRect2DComputeShader = setRect2DComputeShader;
    R_SetComputeShader(state, *copyRect2DComputeShader);
    data[3] = dstY;
    data[4] = srcX;
    data[5] = srcY;
    data[2] = dstX;
    *(float *)&data[6] = scale;
    *(float *)&data[7] = bias;
    v33 = *color;
    data[0] = v21;
    data[1] = v23;
    R_UploadAndSetComputeConstants(state, 0, data, 0x30u, NULL);
    R_Dispatch(state, (v21 + 7) >> 3, (v23 + 7) >> 3, 1u);
    R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  }
}

/*
==============
R_SetTextureRect
==============
*/
void R_SetTextureRect(ComputeCmdBufState *state, const GfxTexture *textureDst, const vec4_t *color, unsigned int dstX, unsigned int dstY, unsigned int width, unsigned int height)
{
  R_MemTextureRect(state, textureDst, NULL, dstX, dstY, 0, 0, width, height, color, 1.0, 0.0);
}

