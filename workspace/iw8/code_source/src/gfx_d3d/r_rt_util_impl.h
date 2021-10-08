/*
==============
R_RT_GetHtileRWView
==============
*/

GfxShaderBufferRWView *__fastcall R_RT_GetHtileRWView(GfxShaderBufferRWView *result, R_RT_DepthHandle *depthRt)
{
  return ?R_RT_GetHtileRWView@@YA?AUGfxShaderBufferRWView@@VR_RT_DepthHandle@@@Z(result, depthRt);
}

/*
==============
R_RT_IsDepthFormat
==============
*/

bool __fastcall R_RT_IsDepthFormat(GfxPixelFormat format)
{
  return ?R_RT_IsDepthFormat@@YA_NW4GfxPixelFormat@@@Z(format);
}

/*
==============
R_RT_GetDepthAsFloatFormat
==============
*/

GfxPixelFormat __fastcall R_RT_GetDepthAsFloatFormat(GfxPixelFormat format)
{
  return ?R_RT_GetDepthAsFloatFormat@@YA?AW4GfxPixelFormat@@W41@@Z(format);
}

/*
==============
R_RT_GetHtileInfo
==============
*/

void __fastcall R_RT_GetHtileInfo(R_RT_DepthHandle *depthRt, unsigned int *isLinear, unsigned int *pitch)
{
  ?R_RT_GetHtileInfo@@YAXVR_RT_DepthHandle@@PEAI1@Z(depthRt, isLinear, pitch);
}

/*
==============
R_RT_GetHtileView
==============
*/

GfxShaderBufferView *__fastcall R_RT_GetHtileView(GfxShaderBufferView *result, R_RT_DepthHandle *depthRt)
{
  return ?R_RT_GetHtileView@@YA?AUGfxShaderBufferView@@VR_RT_DepthHandle@@@Z(result, depthRt);
}

/*
==============
R_RT_GetDepthView
==============
*/

GfxShaderTextureView *__fastcall R_RT_GetDepthView(GfxShaderTextureView *result, R_RT_DepthHandle *depthRt)
{
  return ?R_RT_GetDepthView@@YA?AUGfxShaderTextureView@@VR_RT_DepthHandle@@@Z(result, depthRt);
}

/*
==============
R_RT_BindCompressedDepthComputeView
==============
*/

void __fastcall R_RT_BindCompressedDepthComputeView(ComputeCmdBufState *state, R_RT_DepthHandle *depthRt, unsigned int slot)
{
  ?R_RT_BindCompressedDepthComputeView@@YAXPEAUComputeCmdBufState@@VR_RT_DepthHandle@@I@Z(state, depthRt, slot);
}

/*
==============
R_RT_GetDepthRWView
==============
*/

GfxShaderTextureRWView *__fastcall R_RT_GetDepthRWView(GfxShaderTextureRWView *result, R_RT_DepthHandle *depthRt)
{
  return ?R_RT_GetDepthRWView@@YA?AUGfxShaderTextureRWView@@VR_RT_DepthHandle@@@Z(result, depthRt);
}

/*
==============
R_RT_GetStencilFromDepthFormat
==============
*/

GfxPixelFormat __fastcall R_RT_GetStencilFromDepthFormat(GfxPixelFormat depthFormat)
{
  return ?R_RT_GetStencilFromDepthFormat@@YA?AW4GfxPixelFormat@@W41@@Z(depthFormat);
}

/*
==============
R_RT_GetDepthAsFloat4Format
==============
*/

GfxPixelFormat __fastcall R_RT_GetDepthAsFloat4Format(GfxPixelFormat format)
{
  return ?R_RT_GetDepthAsFloat4Format@@YA?AW4GfxPixelFormat@@W41@@Z(format);
}

/*
==============
R_RT_DepthFormatHasStencil
==============
*/

bool __fastcall R_RT_DepthFormatHasStencil(GfxPixelFormat format)
{
  return ?R_RT_DepthFormatHasStencil@@YA_NW4GfxPixelFormat@@@Z(format);
}

/*
==============
R_RT_GetMipCount
==============
*/

unsigned int __fastcall R_RT_GetMipCount(unsigned int width, unsigned int height, unsigned int mipLimit)
{
  return ?R_RT_GetMipCount@@YAIIII@Z(width, height, mipLimit);
}

/*
==============
R_RT_BindCompressedDepthComputeView
==============
*/
void R_RT_BindCompressedDepthComputeView(ComputeCmdBufState *state, R_RT_DepthHandle *depthRt, unsigned int slot)
{
  GfxShaderTextureView *views; 

  views = (GfxShaderTextureView *)R_RT_DepthHandle::XB3_GetDepthFloatView(depthRt);
  R_SetComputeTextureViews(state, slot, 1, (const GfxShaderTextureView *const *)&views);
}

/*
==============
R_RT_DepthFormatHasStencil
==============
*/
char R_RT_DepthFormatHasStencil(GfxPixelFormat format)
{
  if ( (unsigned int)format < GFX_PF_D16 )
    goto LABEL_6;
  if ( (unsigned int)format > GFX_PF_D32F )
  {
    if ( format == GFX_PF_D32F_S8 )
      return 1;
LABEL_6:
    CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_util_impl.h", 55, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
    JUMPOUT(0x142341943i64);
  }
  return 0;
}

/*
==============
R_RT_GetDepthAsFloat4Format
==============
*/
__int64 R_RT_GetDepthAsFloat4Format(GfxPixelFormat format)
{
  if ( format == GFX_PF_D16 )
    return 12i64;
  if ( (unsigned int)(format - 21) <= 1 )
    return 19i64;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_util_impl.h", 86, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_util_impl.h(86): unhandled case %d in switch statement", format) )
    __debugbreak();
  return (unsigned int)format;
}

/*
==============
R_RT_GetDepthAsFloatFormat
==============
*/
__int64 R_RT_GetDepthAsFloatFormat(GfxPixelFormat format)
{
  if ( format == GFX_PF_D16 )
    return 10i64;
  if ( (unsigned int)(format - 21) <= 1 )
    return 17i64;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_util_impl.h", 72, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_util_impl.h(72): unhandled case %d in switch statement", format) )
    __debugbreak();
  return (unsigned int)format;
}

/*
==============
R_RT_GetDepthRWView
==============
*/
GfxShaderTextureRWView *R_RT_GetDepthRWView(GfxShaderTextureRWView *result, R_RT_DepthHandle *depthRt)
{
  R_RT_Flags m_rtFlags; 
  const R_RT_Surface *Surface; 
  const char *v7; 
  int v8; 
  const char *v9; 
  GfxShaderTextureRWView *v12; 

  _RSI = result;
  m_rtFlags = R_RT_Handle::GetSurface(depthRt)->m_rtFlags;
  Surface = R_RT_Handle::GetSurface(depthRt);
  _RBX = Surface;
  if ( (m_rtFlags & 0x4000) != 0 )
  {
    if ( (Surface->m_rtFlagsInternal & 0x2010) != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 474, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth") )
      __debugbreak();
    if ( (_RBX->m_rtFlags & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 475, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlags & R_RT_Flag_MS_4xSwizzle ) == R_RT_Flag_MS_4xSwizzle)", (const char *)&queryFormat, "( surface->m_rtFlags & R_RT_Flag_MS_4xSwizzle ) == R_RT_Flag_MS_4xSwizzle") )
      __debugbreak();
    if ( (_RBX->m_depth.m_floatRWView.rwView & 0xFFFFFFFB) == 0 )
    {
      v7 = "!surface->m_depth.m_float4RWView.IsNull()";
      v8 = 477;
      v9 = "(!surface->m_depth.m_float4RWView.IsNull())";
      goto LABEL_18;
    }
  }
  else
  {
    if ( (Surface->m_rtFlagsInternal & 0x2010) != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 464, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth") )
      __debugbreak();
    if ( (_RBX->m_rtFlags & 0x4000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 465, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlags & R_RT_Flag_MS_4xSwizzle ) == 0)", (const char *)&queryFormat, "( surface->m_rtFlags & R_RT_Flag_MS_4xSwizzle ) == 0") )
      __debugbreak();
    if ( (_RBX->m_depth.m_floatRWView.rwView & 0xFFFFFFFB) == 0 )
    {
      v7 = "!surface->m_depth.m_floatRWView.IsNull()";
      v8 = 467;
      v9 = "(!surface->m_depth.m_floatRWView.IsNull())";
LABEL_18:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", v8, ASSERT_TYPE_ASSERT, v9, (const char *)&queryFormat, v7) )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+8C8h]
    vmovsd  xmm1, qword ptr [rbx+8D8h]
  }
  v12 = _RSI;
  __asm
  {
    vmovups xmmword ptr [rsi], xmm0
    vmovsd  qword ptr [rsi+10h], xmm1
  }
  return v12;
}

/*
==============
R_RT_GetDepthView
==============
*/
GfxShaderTextureView *R_RT_GetDepthView(GfxShaderTextureView *result, R_RT_DepthHandle *depthRt)
{
  _RBX = result;
  _RAX = R_RT_DepthHandle::XB3_GetDepthFloatView(depthRt);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbx], xmm0
  }
  return _RBX;
}

/*
==============
R_RT_GetHtileInfo
==============
*/
void R_RT_GetHtileInfo(R_RT_DepthHandle *depthRt, unsigned int *isLinear, unsigned int *pitch)
{
  unsigned int v6; 
  unsigned int v7; 
  int v8; 
  unsigned int v9; 
  const R_RT_Surface *Surface; 

  v6 = ((unsigned int)R_RT_Handle::GetSurface(depthRt)->m_image.m_base.width + 7) >> 3;
  v7 = 0;
  *isLinear = v6 * (((unsigned int)R_RT_Handle::GetSurface(depthRt)->m_image.m_base.height + 7) >> 3) <= 0x8000;
  if ( R_RT_Handle::GetSurface(depthRt)->m_image.m_base.numElements <= 1u )
    v7 = *isLinear;
  else
    *isLinear = 0;
  v8 = 4;
  v9 = 32;
  if ( g_dx.gpuMode == XB3_CONSOLE_SCORPIO )
    v8 = 8;
  if ( g_dx.gpuMode == XB3_CONSOLE_SCORPIO )
    v9 = 64;
  if ( v7 )
    v9 = v8;
  Surface = R_RT_Handle::GetSurface(depthRt);
  if ( (Surface->m_rtFlagsInternal & 0x2010) != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 441, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth") )
    __debugbreak();
  *pitch = AlignUp<unsigned int>(Surface->m_depth.m_mip0TileCountX, v9);
}

/*
==============
R_RT_GetHtileRWView
==============
*/
GfxShaderBufferRWView *R_RT_GetHtileRWView(GfxShaderBufferRWView *result, R_RT_DepthHandle *depthRt)
{
  unsigned int rwView; 
  GfxShaderBufferRWView *v7; 

  _RDI = result;
  _RBX = R_RT_Handle::GetSurface(depthRt);
  if ( (_RBX->m_rtFlagsInternal & 0x2010) != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 522, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth") )
    __debugbreak();
  rwView = _RBX->m_depth.m_htileBuffer.rwView.rwView;
  if ( (rwView == 3 || !rwView) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 524, ASSERT_TYPE_ASSERT, "(!surface->m_depth.m_htileBuffer.rwView.IsNull())", (const char *)&queryFormat, "!surface->m_depth.m_htileBuffer.rwView.IsNull()") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+858h]
    vmovsd  xmm1, qword ptr [rbx+868h]
  }
  v7 = _RDI;
  __asm
  {
    vmovups xmmword ptr [rdi], xmm0
    vmovsd  qword ptr [rdi+10h], xmm1
  }
  return v7;
}

/*
==============
R_RT_GetHtileView
==============
*/
GfxShaderBufferView *R_RT_GetHtileView(GfxShaderBufferView *result, R_RT_DepthHandle *depthRt)
{
  GfxShaderBufferView *v5; 

  _RDI = result;
  _RBX = R_RT_Handle::GetSurface(depthRt);
  if ( (_RBX->m_rtFlagsInternal & 0x2010) != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 513, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth") )
    __debugbreak();
  if ( _RBX->m_depth.m_htileBuffer.view.view <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 515, ASSERT_TYPE_ASSERT, "(!surface->m_depth.m_htileBuffer.view.IsNull())", (const char *)&queryFormat, "!surface->m_depth.m_htileBuffer.view.IsNull()") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rbx+840h] }
  v5 = _RDI;
  __asm { vmovups xmmword ptr [rdi], xmm0 }
  return v5;
}

/*
==============
R_RT_GetMipCount
==============
*/
unsigned int R_RT_GetMipCount(unsigned int width, unsigned int height, unsigned int mipLimit)
{
  unsigned int result; 

  if ( mipLimit == 1 )
    return 1;
  result = Image_CountMipmaps(width, height, 1u);
  if ( mipLimit )
  {
    if ( result > mipLimit )
      return mipLimit;
  }
  return result;
}

/*
==============
R_RT_GetStencilFromDepthFormat
==============
*/
__int64 R_RT_GetStencilFromDepthFormat(GfxPixelFormat depthFormat)
{
  if ( depthFormat != GFX_PF_D32F_S8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_util_impl.h", 18, ASSERT_TYPE_ASSERT, "(depthFormat == GFX_PF_D32F_S8)", (const char *)&queryFormat, "depthFormat == GFX_PF_D32F_S8") )
    __debugbreak();
  return 22i64;
}

/*
==============
R_RT_IsDepthFormat
==============
*/
bool R_RT_IsDepthFormat(GfxPixelFormat format)
{
  return (unsigned int)(format - 20) <= 2;
}

