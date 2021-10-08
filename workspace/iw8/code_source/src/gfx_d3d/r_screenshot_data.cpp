/*
==============
R_GetFloat32BufferData
==============
*/

int __fastcall R_GetFloat32BufferData(R_RT_DepthHandle *depthRt, int width, int height, int bytesPerPixel, unsigned __int8 *buffer)
{
  return ?R_GetFloat32BufferData@@YAHVR_RT_DepthHandle@@HHHPEAE@Z(depthRt, width, height, bytesPerPixel, buffer);
}

/*
==============
R_TakeResampledScreenshot
==============
*/

unsigned __int8 *__fastcall R_TakeResampledScreenshot(int width, int height, int bytesPerPixel, int headerSize)
{
  return ?R_TakeResampledScreenshot@@YAPEAEHHHH@Z(width, height, bytesPerPixel, headerSize);
}

/*
==============
R_UpsamplePixelData
==============
*/

void __fastcall R_UpsamplePixelData(int oldSize, int newSize, int stride, int bytesPerPixel, unsigned __int8 *src, unsigned __int8 *dst)
{
  ?R_UpsamplePixelData@@YAXHHHHPEAE0@Z(oldSize, newSize, stride, bytesPerPixel, src, dst);
}

/*
==============
R_ResampleImage
==============
*/

void __fastcall R_ResampleImage(int oldWidth, int oldHeight, int newWidth, int newHeight, int bytesPerPixel, unsigned __int8 *data)
{
  ?R_ResampleImage@@YAXHHHHHPEAE@Z(oldWidth, oldHeight, newWidth, newHeight, bytesPerPixel, data);
}

/*
==============
R_DownsamplePixelData
==============
*/

void __fastcall R_DownsamplePixelData(int oldSize, int newSize, int stride, int bytesPerPixel, unsigned __int8 *src, unsigned __int8 *dst)
{
  ?R_DownsamplePixelData@@YAXHHHHPEAE0@Z(oldSize, newSize, stride, bytesPerPixel, src, dst);
}

/*
==============
R_WriteClutIntoScreenshotDataTga
==============
*/

void __fastcall R_WriteClutIntoScreenshotDataTga(unsigned int width, unsigned __int8 *buffer, int bytesPerPixel)
{
  ?R_WriteClutIntoScreenshotDataTga@@YAXIPEAEH@Z(width, buffer, bytesPerPixel);
}

/*
==============
R_GetBufferData
==============
*/

int __fastcall R_GetBufferData(R_RT_ColorHandle *colorRt, int x, int y, int width, int height, int bytesPerPixel, unsigned __int8 *buffer)
{
  return ?R_GetBufferData@@YAHVR_RT_ColorHandle@@HHHHHPEAE@Z(colorRt, x, y, width, height, bytesPerPixel, buffer);
}

/*
==============
R_ConvertHalfToByte
==============
*/
unsigned __int8 R_ConvertHalfToByte(unsigned __int16 half)
{
  int v1; 
  int v2; 
  bool v5; 
  char v10; 
  char v11; 
  double v13; 
  unsigned int v14; 

  v1 = half & 0x3FF;
  if ( (half & 0x7C00) != 0 )
  {
    v2 = (half >> 10) & 0x1F;
  }
  else
  {
    if ( (half & 0x3FF) != 0 )
      return 0;
    v2 = -112;
  }
  __asm { vmovss  xmm2, cs:__real@437f0000 }
  v5 = ((v1 << 13) | ((v2 + 112) << 23) | (half << 16) & 0x80000000) == 0;
  v14 = (v1 << 13) | ((v2 + 112) << 23) | (half << 16) & 0x80000000;
  __asm
  {
    vmovss  xmm0, [rsp+48h+arg_0]
    vmulss  xmm1, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vcvttss2si ebx, xmm1
    vcomiss xmm1, cs:__real@4b800000
  }
  if ( v14 )
  {
    v10 = 0;
    v5 = 1;
  }
  else
  {
    v10 = 1;
  }
  __asm
  {
    vcomiss xmm1, xmm0
    vcomiss xmm1, xmm2
  }
  v11 = v5;
  if ( !v10 || !v11 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm1, xmm1
      vmovsd  [rsp+48h+var_10], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned char __cdecl float_to_integral_cast<unsigned char,float>(float)", (unsigned __int8)_EBX, v13) )
      __debugbreak();
  }
  return _EBX;
}

/*
==============
R_CreateDriverManagedResource
==============
*/
ID3D12Resource *R_CreateDriverManagedResource(D3D12_HEAP_TYPE heapType, const D3D12_RESOURCE_DESC *resourceDesc, D3D12_RESOURCE_STATES initState, D3D12_CLEAR_VALUE *clearValue)
{
  ID3D12Device *d3d12device; 
  HRESULT v10; 
  const char *v11; 
  __int64 v13; 
  __int128 v14; 
  __int128 v15; 
  int v16; 

  if ( !resourceDesc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 28, ASSERT_TYPE_ASSERT, "(resourceDesc)", (const char *)&queryFormat, "resourceDesc") )
    __debugbreak();
  d3d12device = g_dx.d3d12device;
  if ( !g_dx.d3d12device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", LODWORD(g_dx.d3d12device) + 31, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  v16 = 1;
  *(_QWORD *)((char *)&v14 + 4) = 0i64;
  LODWORD(v14) = heapType;
  HIDWORD(v14) = 1;
  __asm
  {
    vmovups xmm0, [rsp+0A8h+var_60]
    vmovups [rsp+0A8h+var_48], xmm0
  }
  v10 = ((__int64 (__fastcall *)(ID3D12Device *, __int128 *, _QWORD, const D3D12_RESOURCE_DESC *, D3D12_RESOURCE_STATES, D3D12_CLEAR_VALUE *, GUID *, __int64 *))d3d12device->m_pFunction[9].QueryInterface)(d3d12device, &v15, 0i64, resourceDesc, initState, clearValue, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &v13);
  if ( v10 < 0 )
  {
    v11 = R_ErrorDescription(v10);
    Sys_Error((const ObfuscateErrorText)&stru_1443C9B70, 34i64, v11);
  }
  return (ID3D12Resource *)v13;
}

/*
==============
R_DownsamplePixelData
==============
*/
void R_DownsamplePixelData(int oldSize, int newSize, int stride, int bytesPerPixel, unsigned __int8 *src, unsigned __int8 *dst)
{
  __int64 v11; 
  int v15; 
  int v16; 
  __int64 v20; 
  __int64 v23; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int i; 
  int v32; 

  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  v11 = (unsigned int)newSize;
  if ( newSize >= oldSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 91, ASSERT_TYPE_ASSERT, "(newSize < oldSize)", (const char *)&queryFormat, "newSize < oldSize") )
    __debugbreak();
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  v15 = bytesPerPixel * stride;
  v16 = v11;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r14d
    vdivss  xmm6, xmm0, xmm1
  }
  if ( (int)v11 > 0 )
  {
    v20 = v11;
    __asm
    {
      vmovaps [rsp+88h+var_48], xmm7
      vmovaps [rsp+88h+var_58], xmm8
      vmovss  xmm8, cs:__real@3f000000
    }
    v23 = v15;
    __asm { vxorps  xmm7, xmm7, xmm7 }
    do
    {
      if ( v16 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 99, ASSERT_TYPE_ASSERT, "(residual > 0)", (const char *)&queryFormat, "residual > 0") )
        __debugbreak();
      v26 = src[1];
      v27 = src[2];
      v28 = v11 + v16 - oldSize;
      v29 = v16 * *src;
      src += v23;
      v30 = v16 * v26;
      for ( i = v16 * v27; v28 <= 0; i += v32 )
      {
        v16 += v11;
        v28 += v11;
        v29 += v11 * *src;
        v30 += v11 * src[1];
        v32 = v11 * src[2];
        src += v23;
      }
      v16 += v11 - oldSize;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm3, xmm1, xmm8
        vroundss xmm1, xmm7, xmm3, 1
        vcvttss2si eax, xmm1
      }
      *dst = _EAX;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm3, xmm1, xmm8
        vroundss xmm1, xmm7, xmm3, 1
        vcvttss2si eax, xmm1
      }
      dst[1] = _EAX;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm3, xmm1, xmm8
        vroundss xmm1, xmm7, xmm3, 1
        vcvttss2si eax, xmm1
      }
      dst[2] = _EAX;
      dst += v23;
      --v20;
    }
    while ( v20 );
    __asm
    {
      vmovaps xmm8, [rsp+88h+var_58]
      vmovaps xmm7, [rsp+88h+var_48]
    }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
}

/*
==============
R_GetBufferData
==============
*/
__int64 R_GetBufferData(R_RT_ColorHandle *colorRt, int x, int y, int width, int height, int bytesPerPixel, unsigned __int8 *buffer)
{
  GfxPixelFormat image_format; 
  ID3D12Resource *D3DTextureResource; 
  const R_RT_Surface *Surface; 

  R_LockGfxImmediateContext();
  image_format = R_RT_Handle::GetSurface(colorRt)->m_image.m_base.format;
  D3DTextureResource = R_RT_Handle::GetD3DTextureResource(colorRt);
  Surface = R_RT_Handle::GetSurface(colorRt);
  LODWORD(colorRt) = R_GetBufferDataInternal(D3DTextureResource, x, y, width, height, bytesPerPixel, buffer, image_format, (D3D12_RESOURCE_STATES)(((Surface->m_rtFlagsInternal & 0x40) == 0) << 11));
  R_UnlockGfxImmediateContext();
  return (unsigned int)colorRt;
}

/*
==============
R_GetBufferDataInternal
==============
*/
__int64 R_GetBufferDataInternal(ID3D12Resource *sourceTexture, int x, int y, int width, int height, int bytesPerPixel, unsigned __int8 *buffer, GfxPixelFormat image_format, D3D12_RESOURCE_STATES sourceTextureBeforeState)
{
  int v9; 
  unsigned __int8 *v11; 
  __int64 v14; 
  int v19; 
  int v22; 
  D3D12_RESOURCE_STATES v28; 
  __int32 v29; 
  ID3D12Resource *v39; 
  __int64 result; 
  HRESULT v44; 
  const char *v45; 
  int v46; 
  unsigned __int64 v47; 
  int v48; 
  __int64 v49; 
  _WORD *v50; 
  __int64 v51; 
  int v52; 
  unsigned __int64 v53; 
  unsigned __int16 *v54; 
  __int64 v55; 
  int v56; 
  unsigned __int64 v57; 
  __int64 v58; 
  int *v59; 
  int v60; 
  unsigned int v61; 
  __int64 v62; 
  unsigned __int8 *v63; 
  unsigned __int8 *v64; 
  unsigned __int8 *v65; 
  int v66; 
  __int64 v67; 
  int v68; 
  int v69; 
  unsigned __int64 v70; 
  __int64 v71; 
  unsigned __int8 *v72; 
  __int64 v73; 
  __int64 v74; 
  int v75; 
  char *v76; 
  __int64 v77; 
  int v78; 
  unsigned int *v79; 
  __int64 v80; 
  unsigned int v81; 
  int v82; 
  unsigned __int8 *v83; 
  int v84; 
  __int64 v85; 
  char *v86; 
  int v87; 
  unsigned __int8 *v88; 
  size_t v89; 
  int v90; 
  __int64 v91; 
  __int64 v92; 
  int v94; 
  int v95; 
  __int64 v96; 
  __int64 v97; 
  unsigned __int16 *v98; 
  int v99; 
  unsigned int v100; 
  __int64 v101; 
  __int64 v105; 
  int v106; 
  __int64 v107; 
  __int64 v108; 
  int v110; 
  __int64 v111; 
  __int64 v120; 
  int v121; 
  int v122; 
  unsigned __int64 v123; 
  __int64 v124; 
  int v125; 
  _DWORD *v126; 
  __int64 v127; 
  int v128; 
  int v129; 
  int v130; 
  __int64 v131; 
  int fmt; 
  __int64 v133; 
  __int64 v134; 
  __int64 v135; 
  unsigned int v137; 
  unsigned int v138; 
  unsigned int v139; 
  unsigned int v140; 
  unsigned int v141; 
  __int64 v143; 
  unsigned __int64 fence; 
  int v145; 
  ID3D12Resource *v146; 
  __int64 v147; 
  unsigned __int64 v148; 
  int v149; 
  __int64 v150; 
  __m256i v151; 
  __m256i v154; 
  __int128 v155; 
  D3D12_RESOURCE_DESC resourceDesc; 
  __int64 v158[2]; 
  __int64 v159[2]; 

  v9 = bytesPerPixel;
  v11 = buffer;
  v149 = bytesPerPixel;
  v148 = (unsigned __int64)buffer;
  v14 = y;
  fence = (unsigned __int64)sourceTexture;
  if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  ((void (__fastcall *)(ID3D12Resource *, __m256i *))sourceTexture->m_pFunction[3].AddRef)(sourceTexture, &v151);
  __asm
  {
    vmovups ymm0, [rsp+1A8h+var_110]
    vmovups xmm1, [rsp+1A8h+var_F0]
    vmovups [rsp+1A8h+var_D8], ymm0
    vmovsd  xmm0, [rsp+1A8h+var_E0]
    vmovsd  [rsp+1A8h+var_A8], xmm0
    vmovups [rsp+1A8h+var_B8], xmm1
  }
  if ( width < 1 || width > v151.m256i_i32[4] )
  {
    LODWORD(v133) = width;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 374, ASSERT_TYPE_ASSERT, "( 1 ) <= ( width ) && ( width ) <= ( (int)dsc.Width )", "width not in [1, (int)dsc.Width]\n\t%i not in [%i, %i]", v133, 1, v151.m256i_i32[4]) )
      __debugbreak();
  }
  if ( height < 1 || height > v154.m256i_i32[6] )
  {
    LODWORD(v135) = v154.m256i_i32[6];
    LODWORD(v134) = 1;
    LODWORD(v133) = height;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 375, ASSERT_TYPE_ASSERT, "( 1 ) <= ( height ) && ( height ) <= ( (int)dsc.Height )", "height not in [1, (int)dsc.Height]\n\t%i not in [%i, %i]", v133, v134, v135) )
      __debugbreak();
  }
  __asm { vmovdqu ymm0, [rsp+1A8h+var_D8] }
  v19 = x + width;
  __asm
  {
    vextractf128 xmm1, ymm0, 1
    vmovd   ecx, xmm1
  }
  v145 = v19;
  if ( v19 >= _ECX + 1 )
  {
    LODWORD(v134) = _ECX + 1;
    LODWORD(v133) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 376, ASSERT_TYPE_ASSERT, "(unsigned)( x+width ) < (unsigned)( (int)dsc.Width+1 )", "x+width doesn't index (int)dsc.Width+1\n\t%i not in [0, %i)", v133, v134) )
      __debugbreak();
    _ECX = v154.m256i_u32[4];
  }
  v22 = v14 + height;
  if ( (int)v14 + height >= (unsigned int)(v154.m256i_i32[6] + 1) )
  {
    LODWORD(v134) = v154.m256i_i32[6] + 1;
    LODWORD(v133) = v14 + height;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 377, ASSERT_TYPE_ASSERT, "(unsigned)( y+height ) < (unsigned)( (int)dsc.Height+1 )", "y+height doesn't index (int)dsc.Height+1\n\t%i not in [0, %i)", v133, v134) )
      __debugbreak();
    _ECX = v154.m256i_u32[4];
  }
  if ( x >= _ECX )
  {
    LODWORD(v134) = _ECX;
    LODWORD(v133) = x;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 378, ASSERT_TYPE_ASSERT, "(unsigned)( x ) < (unsigned)( (int)dsc.Width )", "x doesn't index (int)dsc.Width\n\t%i not in [0, %i)", v133, v134) )
      __debugbreak();
  }
  if ( (unsigned int)v14 >= v154.m256i_i32[6] )
  {
    LODWORD(v134) = v154.m256i_i32[6];
    LODWORD(v133) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 379, ASSERT_TYPE_ASSERT, "(unsigned)( y ) < (unsigned)( (int)dsc.Height )", "y doesn't index (int)dsc.Height\n\t%i not in [0, %i)", v133, v134) )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, [rsp+1A8h+var_D8]
    vmovups xmm1, [rsp+1A8h+var_B8]
    vpextrd rax, xmm1, 1
    vmovups ymmword ptr [rsp+1A8h+resourceDesc.Dimension], ymm0
    vmovsd  xmm0, [rsp+1A8h+var_A8]
    vmovsd  qword ptr [rsp+1A8h+resourceDesc.Flags], xmm0
  }
  if ( (unsigned int)_RAX <= 1 )
  {
    __asm
    {
      vmovups xmm1, [rsp+1A8h+var_B8]
      vmovd   eax, xmm1
    }
    LOBYTE(fmt) = 0;
    if ( _EAX == 10 )
    {
      __asm { vmovups xmmword ptr [rsp+1A8h+resourceDesc.Format], xmm1 }
      resourceDesc.Format = _RT0;
      resourceDesc.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
      *(_QWORD *)&resourceDesc.Layout = 1i64;
      v146 = R_CreateDriverManagedResource(D3D12_HEAP_TYPE_READBACK, &resourceDesc, D3D12_RESOURCE_STATE_COPY_DEST, NULL);
      if ( !v146 )
        goto LABEL_36;
      v28 = sourceTextureBeforeState;
      v29 = sourceTextureBeforeState & 0x800;
      if ( (sourceTextureBeforeState & 0x800) == 0 )
      {
        v151.m256i_i64[3] = 2048i64;
        v151.m256i_i32[5] = sourceTextureBeforeState;
        v151.m256i_i64[0] = 0i64;
        v151.m256i_i64[1] = fence;
        v151.m256i_i32[4] = -1;
        __asm
        {
          vmovups ymm0, [rsp+1A8h+var_110]
          vmovups [rsp+1A8h+var_110], ymm0
        }
        ((void (__fastcall *)(GfxDevice *, _QWORD, __m256i *))g_dx.immediateContext->m_pFunction[8].Release)(g_dx.immediateContext, (unsigned int)(v29 + 1), &v151);
      }
    }
    else
    {
      __asm
      {
        vmovups xmm1, [rsp+1A8h+var_B8]
        vmovups xmmword ptr [rsp+1A8h+resourceDesc.Format], xmm1
      }
      *(_QWORD *)&resourceDesc.Layout = 1i64;
      v39 = R_CreateDriverManagedResource(D3D12_HEAP_TYPE_READBACK, &resourceDesc, D3D12_RESOURCE_STATE_COPY_DEST, NULL);
      v146 = v39;
      if ( !v39 )
        goto LABEL_36;
      v28 = sourceTextureBeforeState;
      v29 = sourceTextureBeforeState & 0x800;
      if ( (sourceTextureBeforeState & 0x800) == 0 )
      {
        v151.m256i_i64[3] = 2048i64;
        v151.m256i_i32[5] = sourceTextureBeforeState;
        v151.m256i_i64[0] = 0i64;
        v151.m256i_i64[1] = fence;
        v151.m256i_i32[4] = -1;
        __asm
        {
          vmovups ymm0, [rsp+1A8h+var_110]
          vmovups [rsp+1A8h+var_110], ymm0
        }
        ((void (__fastcall *)(GfxDevice *, _QWORD, __m256i *))g_dx.immediateContext->m_pFunction[8].Release)(g_dx.immediateContext, (unsigned int)(v29 + 1), &v151);
        v39 = v146;
      }
      PIXSetDebugName(v39, "Screenshot Staging");
    }
    ((void (__fastcall *)(GfxDevice *, ID3D12Resource *, unsigned __int64, _QWORD, int))g_dx.immediateContext->m_pFunction[28].QueryInterface)(g_dx.immediateContext, v146, fence, 0i64, fmt);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+1A8h+resourceDesc.Dimension]
      vmovups xmm1, xmmword ptr [rsp+1A8h+resourceDesc.Format]
      vmovups [rsp+1A8h+var_D8], ymm0
      vmovsd  xmm0, qword ptr [rsp+1A8h+resourceDesc.Flags]
    }
    goto LABEL_41;
  }
  __asm { vmovups xmmword ptr [rsp+1A8h+resourceDesc.Format], xmm1 }
  resourceDesc.Format = _RT0;
  v150 = 0i64;
  v143 = 0i64;
  resourceDesc.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
  *(_QWORD *)&resourceDesc.Layout = 1i64;
  v146 = R_CreateDriverManagedResource(D3D12_HEAP_TYPE_READBACK, &resourceDesc, D3D12_RESOURCE_STATE_COPY_DEST, NULL);
  if ( !v146 )
  {
LABEL_36:
    Com_PrintError(8, "ERROR: cannot take screenshot: R_CreateDriverManagedResource failed\n");
    return 0i64;
  }
  v28 = sourceTextureBeforeState;
  v29 = sourceTextureBeforeState & 0x800;
  if ( (sourceTextureBeforeState & 0x800) == 0 )
  {
    v151.m256i_i64[3] = 2048i64;
    v151.m256i_i32[5] = sourceTextureBeforeState;
    v151.m256i_i64[0] = 0i64;
    v151.m256i_i64[1] = fence;
    v151.m256i_i32[4] = -1;
    __asm
    {
      vmovups ymm0, [rsp+1A8h+var_110]
      vmovups [rsp+1A8h+var_110], ymm0
    }
    ((void (__fastcall *)(GfxDevice *, _QWORD, __m256i *))g_dx.immediateContext->m_pFunction[8].Release)(g_dx.immediateContext, (unsigned int)(v29 + 1), &v151);
  }
  ((void (__fastcall *)(GfxDevice *, ID3D12Resource *, _QWORD, unsigned __int64, _DWORD, _DWORD))g_dx.immediateContext->m_pFunction[6].AddRef)(g_dx.immediateContext, v146, 0i64, fence, 0, v155);
  ((void (__fastcall *)(ID3D12Resource *, __m256i *))v146->m_pFunction[3].AddRef)(v146, &v151);
  __asm
  {
    vmovups ymm0, [rsp+1A8h+var_110]
    vmovups xmm1, [rsp+1A8h+var_F0]
    vmovups [rsp+1A8h+var_D8], ymm0
    vmovsd  xmm0, [rsp+1A8h+var_E0]
  }
LABEL_41:
  __asm
  {
    vmovups [rsp+1A8h+var_B8], xmm1
    vmovsd  [rsp+1A8h+var_A8], xmm0
  }
  if ( !v29 )
  {
    v151.m256i_i64[0] = 0i64;
    v151.m256i_i64[1] = fence;
    v151.m256i_i64[3] = (unsigned int)v28;
    v151.m256i_i64[2] = 0x800FFFFFFFFi64;
    __asm
    {
      vmovups ymm0, [rsp+1A8h+var_110]
      vmovups [rsp+1A8h+var_110], ymm0
    }
    ((void (__fastcall *)(GfxDevice *, __int64, __m256i *))g_dx.immediateContext->m_pFunction[8].Release)(g_dx.immediateContext, 1i64, &v151);
  }
  fence = R_FlushImmediateContext();
  R_HW_WaitForFence(&fence);
  ((void (__fastcall *)(ID3D12Device *, __m256i *, _QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))g_dx.d3d12device->m_pFunction[12].Release)(g_dx.d3d12device, &v154, 0i64, 1i64, 0i64, 0i64, 0i64, &v143, &v150);
  v147 = 0i64;
  v158[0] = 0i64;
  v158[1] = v150;
  v44 = ((__int64 (__fastcall *)(ID3D12Resource *, _QWORD, __int64 *, __int64 *))v146->m_pFunction[2].Release)(v146, 0i64, v158, &v147);
  if ( v44 < 0 )
  {
    v45 = R_ErrorDescription(v44);
    Sys_Error((const ObfuscateErrorText)&stru_1443CA190, 578i64, v45);
  }
  switch ( (int)v155 )
  {
    case 10:
      v46 = x;
      v47 = v147 + v143 * v14 + 8i64 * x;
      if ( (unsigned __int64)bytesPerPixel < 6 )
      {
        if ( (unsigned int)(bytesPerPixel - 3) > 1 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 623, ASSERT_TYPE_ASSERT, "(bytesPerPixel == 3 || bytesPerPixel == 4)", (const char *)&queryFormat, "bytesPerPixel == 3 || bytesPerPixel == 4") )
            __debugbreak();
          v46 = x;
        }
        if ( (int)v14 < (int)v14 + height )
        {
          v52 = v145;
          v53 = (unsigned int)height;
          v148 = (unsigned int)height;
          do
          {
            v54 = (unsigned __int16 *)v47;
            if ( v46 < v52 )
            {
              v55 = width;
              do
              {
                *v11 = R_ConvertHalfToByte(v54[2]);
                v11[1] = R_ConvertHalfToByte(v54[1]);
                v11[2] = R_ConvertHalfToByte(*v54);
                if ( bytesPerPixel == 4 )
                  v11[3] = R_ConvertHalfToByte(v54[3]);
                v11 += bytesPerPixel;
                v54 += 4;
                --v55;
              }
              while ( v55 );
              v53 = v148;
            }
            v47 += v143;
            if ( (unsigned __int64)v54 > v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 642, ASSERT_TYPE_ASSERT, "((void*)srcPixel <= (void*)srcData)", (const char *)&queryFormat, "(void*)srcPixel <= (void*)srcData") )
              __debugbreak();
            v46 = x;
            v148 = --v53;
          }
          while ( v53 );
        }
      }
      else
      {
        if ( ((bytesPerPixel - 6) & 0xFFFFFFFD) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 597, ASSERT_TYPE_ASSERT, "(bytesPerPixel == 6 || bytesPerPixel == 8)", (const char *)&queryFormat, "bytesPerPixel == 6 || bytesPerPixel == 8") )
            __debugbreak();
          v46 = x;
        }
        if ( (int)v14 < (int)v14 + height )
        {
          v48 = v145;
          v49 = (unsigned int)height;
          do
          {
            v50 = (_WORD *)v47;
            if ( v46 < v48 )
            {
              v51 = width;
              do
              {
                *(_WORD *)v11 = v50[2];
                *((_WORD *)v11 + 1) = v50[1];
                *((_WORD *)v11 + 2) = *v50;
                if ( bytesPerPixel == 8 )
                  *((_WORD *)v11 + 3) = v50[3];
                v11 += 2 * ((unsigned __int64)bytesPerPixel >> 1);
                v50 += 4;
                --v51;
              }
              while ( v51 );
            }
            v47 += v143;
            if ( (unsigned __int64)v50 > v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 616, ASSERT_TYPE_ASSERT, "((void*)srcPixel <= (void*)srcData)", (const char *)&queryFormat, "(void*)srcPixel <= (void*)srcData") )
              __debugbreak();
            v46 = x;
            --v49;
          }
          while ( v49 );
        }
      }
      goto LABEL_210;
    case 24:
      if ( (unsigned int)(bytesPerPixel - 3) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 966, ASSERT_TYPE_ASSERT, "(bytesPerPixel == 3 || bytesPerPixel == 4)", (const char *)&queryFormat, "bytesPerPixel == 3 || bytesPerPixel == 4") )
        __debugbreak();
      v122 = x;
      v123 = v147 + v143 * v14 + 4i64 * x;
      if ( (int)v14 < v22 )
      {
        v124 = (unsigned int)height;
        v125 = v145;
        do
        {
          v126 = (_DWORD *)v123;
          if ( v122 < v125 )
          {
            v127 = width;
            do
            {
              v128 = (*v126 >> 10) & 0x3FF;
              v129 = *v126 & 0x3FF;
              v130 = *v126 >> 30;
              *v11 = 255 * ((*v126 >> 20) & 0x3FFu) / 0x3FF;
              v11[1] = 255 * v128 / 0x3FFu;
              v11[2] = 255 * v129 / 0x3FFu;
              if ( bytesPerPixel == 4 )
                v11[3] = 255 * v130 / 3u;
              v11 += bytesPerPixel;
              ++v126;
              --v127;
            }
            while ( v127 );
          }
          v123 += v143;
          if ( (unsigned __int64)v126 > v123 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 995, ASSERT_TYPE_ASSERT, "(( void* )srcPixel <= ( void* )srcData)", (const char *)&queryFormat, "( void* )srcPixel <= ( void* )srcData") )
            __debugbreak();
          v122 = x;
          --v124;
        }
        while ( v124 );
      }
      goto LABEL_210;
    case 26:
      v74 = v143;
      v75 = x;
      v76 = (char *)(v147 + v143 * v14 + 4i64 * x);
      if ( bytesPerPixel == 8 )
      {
        if ( (int)v14 < v22 )
        {
          v77 = (unsigned int)height;
          v78 = v145;
          do
          {
            v79 = (unsigned int *)v76;
            if ( v75 < v78 )
            {
              v80 = width;
              do
              {
                v81 = *v79++;
                *((_WORD *)v11 + 3) = 15360;
                *(_WORD *)v11 = 16 * (v81 & 0x7FF);
                *((_WORD *)v11 + 1) = 16 * ((v81 >> 11) & 0x7FF);
                *((_WORD *)v11 + 2) = 32 * (v81 >> 22);
                v11 += 8;
                --v80;
              }
              while ( v80 );
              v75 = x;
            }
            v76 += v74;
            --v77;
          }
          while ( v77 );
        }
        goto LABEL_210;
      }
      if ( bytesPerPixel != 4 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 876, ASSERT_TYPE_ASSERT, "(bytesPerPixel == 4)", (const char *)&queryFormat, "bytesPerPixel == 4") )
          __debugbreak();
        v74 = v143;
      }
      v82 = width;
      v83 = buffer;
      if ( (int)v14 >= v22 )
      {
        v84 = height;
      }
      else
      {
        v84 = height;
        v85 = (unsigned int)height;
        do
        {
          memcpy_0(v83, v76, 4 * width);
          v76 += v74;
          v83 += 4 * width;
          --v85;
        }
        while ( v85 );
        v11 = (unsigned __int8 *)v148;
        v82 = width;
      }
      if ( v83 - v11 != 4i64 * v84 * v82 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 888, ASSERT_TYPE_ASSERT, "(static_cast< size_t >( reinterpret_cast< byte * >( dstPixel ) - buffer ) == static_cast< size_t >( width * height * sizeof( uint32_t ) ))", (const char *)&queryFormat, "static_cast< size_t >( reinterpret_cast< byte * >( dstPixel ) - buffer ) == static_cast< size_t >( width * height * sizeof( uint32_t ) )") )
        goto LABEL_195;
      goto LABEL_210;
    case 27:
    case 28:
      if ( (unsigned int)(bytesPerPixel - 3) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 824, ASSERT_TYPE_ASSERT, "(bytesPerPixel == 3 || bytesPerPixel == 4)", (const char *)&queryFormat, "bytesPerPixel == 3 || bytesPerPixel == 4") )
        __debugbreak();
      v69 = x;
      v70 = v147 + v143 * v14 + 4i64 * x;
      if ( (int)v14 < v22 )
      {
        v71 = (unsigned int)height;
        do
        {
          v72 = (unsigned __int8 *)v70;
          if ( v69 < v19 )
          {
            v73 = width;
            do
            {
              *v11 = v72[2];
              v11[1] = v72[1];
              v11[2] = *v72;
              if ( bytesPerPixel == 4 )
                v11[3] = v72[3];
              v11 += bytesPerPixel;
              v72 += 4;
              --v73;
            }
            while ( v73 );
          }
          v70 += v143;
          if ( (unsigned __int64)v72 > v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 845, ASSERT_TYPE_ASSERT, "((void*)srcPixel <= (void*)srcData)", (const char *)&queryFormat, "(void*)srcPixel <= (void*)srcData") )
            __debugbreak();
          v69 = x;
          --v71;
        }
        while ( v71 );
      }
      goto LABEL_210;
    case 39:
      if ( image_format == GFX_PF_R32F )
      {
        v56 = x;
        v57 = v147 + v143 * v14 + 4i64 * x;
        if ( (int)v14 < v22 )
        {
          v58 = (unsigned int)height;
          do
          {
            v59 = (int *)v57;
            v60 = v56;
            if ( v56 < v19 )
            {
              if ( width >= 4 )
              {
                v61 = ((unsigned int)(v19 - v56 - 4) >> 2) + 1;
                v62 = v61;
                v60 = v56 + 4 * v61;
                do
                {
                  *(_DWORD *)v11 = *v59;
                  v63 = &v11[bytesPerPixel];
                  *(_DWORD *)v63 = v59[1];
                  v64 = &v63[bytesPerPixel];
                  *(_DWORD *)v64 = v59[2];
                  v65 = &v64[bytesPerPixel];
                  v66 = v59[3];
                  v59 += 4;
                  *(_DWORD *)v65 = v66;
                  v11 = &v65[bytesPerPixel];
                  --v62;
                }
                while ( v62 );
              }
              if ( v60 < v19 )
              {
                v67 = (unsigned int)(v19 - v60);
                do
                {
                  v68 = *v59++;
                  *(_DWORD *)v11 = v68;
                  v11 += bytesPerPixel;
                  --v67;
                }
                while ( v67 );
              }
            }
            v57 += v143;
            if ( (unsigned __int64)v59 > v57 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 810, ASSERT_TYPE_ASSERT, "((void*)srcPixel <= (void*)srcData)", (const char *)&queryFormat, "(void*)srcPixel <= (void*)srcData") )
                __debugbreak();
              v56 = x;
            }
            --v58;
          }
          while ( v58 );
        }
      }
      goto LABEL_210;
    case 53:
    case 54:
      if ( ((bytesPerPixel - 2) & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 898, ASSERT_TYPE_ASSERT, "(bytesPerPixel == 2 || bytesPerPixel == 4)", (const char *)&queryFormat, "bytesPerPixel == 2 || bytesPerPixel == 4") )
        __debugbreak();
      v86 = (char *)(v147 + 2i64 * x + v143 * v14);
      if ( bytesPerPixel == 2 )
      {
        v87 = width;
        v88 = buffer;
        v89 = 2i64 * width;
        if ( (int)v14 >= v22 )
        {
          v90 = height;
        }
        else
        {
          v90 = height;
          v91 = v143;
          v92 = (unsigned int)height;
          do
          {
            memcpy_0(v88, v86, v89);
            v86 += v91;
            v88 += v89;
            --v92;
          }
          while ( v92 );
          v11 = (unsigned __int8 *)v148;
          v87 = width;
        }
        if ( v88 - v11 != 2 * v90 * v87 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 915, ASSERT_TYPE_ASSERT, "(static_cast<size_t>( reinterpret_cast<byte *>( dstPixel ) - buffer ) == static_cast<size_t>( width * height * bytesPerPixel ))", (const char *)&queryFormat, "static_cast<size_t>( reinterpret_cast<byte *>( dstPixel ) - buffer ) == static_cast<size_t>( width * height * bytesPerPixel )") )
LABEL_195:
          __debugbreak();
      }
      else
      {
        if ( bytesPerPixel != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 919, ASSERT_TYPE_ASSERT, "(bytesPerPixel == 4)", (const char *)&queryFormat, "bytesPerPixel == 4") )
          __debugbreak();
        _R8 = buffer;
        if ( image_format == GFX_PF_R16F )
        {
          if ( (int)v14 >= v22 )
          {
            v94 = height;
          }
          else
          {
            v94 = height;
            v95 = x;
            v96 = (unsigned int)height;
            v97 = v143;
            do
            {
              v98 = (unsigned __int16 *)v86;
              v99 = v95;
              if ( v95 < v19 )
              {
                if ( width >= 4 )
                {
                  v100 = ((unsigned int)(v19 - v95 - 4) >> 2) + 1;
                  v101 = v100;
                  v99 = v95 + 4 * v100;
                  do
                  {
                    if ( *v98 )
                    {
                      v137 = ((*v98 & 0x8000) << 16) | (((((*v98 & 0x3FFF) << 14) - (~(*v98 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
                      __asm { vmovss  xmm0, [rsp+1A8h+var_158] }
                    }
                    else
                    {
                      __asm { vxorps  xmm0, xmm0, xmm0 }
                    }
                    __asm { vmovss  dword ptr [r8], xmm0 }
                    if ( v98[1] )
                    {
                      v138 = ((v98[1] & 0x8000) << 16) | (((((v98[1] & 0x3FFF) << 14) - (~(v98[1] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
                      __asm { vmovss  xmm0, [rsp+1A8h+var_158] }
                    }
                    else
                    {
                      __asm { vxorps  xmm0, xmm0, xmm0 }
                    }
                    __asm { vmovss  dword ptr [r8+4], xmm0 }
                    if ( v98[2] )
                    {
                      v139 = ((v98[2] & 0x8000) << 16) | (((((v98[2] & 0x3FFF) << 14) - (~(v98[2] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
                      __asm { vmovss  xmm0, [rsp+1A8h+var_158] }
                    }
                    else
                    {
                      __asm { vxorps  xmm0, xmm0, xmm0 }
                    }
                    __asm { vmovss  dword ptr [r8+8], xmm0 }
                    if ( v98[3] )
                    {
                      v140 = ((v98[3] & 0x8000) << 16) | (((((v98[3] & 0x3FFF) << 14) - (~(v98[3] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
                      __asm { vmovss  xmm0, [rsp+1A8h+var_158] }
                    }
                    else
                    {
                      __asm { vxorps  xmm0, xmm0, xmm0 }
                    }
                    __asm { vmovss  dword ptr [r8+0Ch], xmm0 }
                    _R8 += 16;
                    v98 += 4;
                    --v101;
                  }
                  while ( v101 );
                }
                if ( v99 < v19 )
                {
                  v105 = (unsigned int)(v19 - v99);
                  do
                  {
                    if ( *v98 )
                    {
                      v141 = ((*v98 & 0x8000) << 16) | (((((*v98 & 0x3FFF) << 14) - (~(*v98 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
                      __asm { vmovss  xmm0, [rsp+1A8h+var_158] }
                    }
                    else
                    {
                      __asm { vxorps  xmm0, xmm0, xmm0 }
                    }
                    __asm { vmovss  dword ptr [r8], xmm0 }
                    _R8 += 4;
                    ++v98;
                    --v105;
                  }
                  while ( v105 );
                }
                v97 = v143;
              }
              v86 += v97;
              --v96;
            }
            while ( v96 );
            v11 = (unsigned __int8 *)v148;
            v9 = v149;
          }
          if ( _R8 - v11 != v94 * width * v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 936, ASSERT_TYPE_ASSERT, "(static_cast<size_t>( reinterpret_cast<byte *>( dstPixel ) - buffer ) == static_cast<size_t>( width * height * bytesPerPixel ))", (const char *)&queryFormat, "static_cast<size_t>( reinterpret_cast<byte *>( dstPixel ) - buffer ) == static_cast<size_t>( width * height * bytesPerPixel )") )
            goto LABEL_195;
        }
        else
        {
          if ( (int)v14 >= v22 )
          {
            v106 = height;
          }
          else
          {
            v106 = height;
            v107 = (unsigned int)height;
            v108 = v143;
            do
            {
              _R9 = (unsigned __int16 *)v86;
              v110 = x;
              if ( x < v19 )
              {
                if ( (unsigned int)width >= 0x10 )
                {
                  v111 = v19 - 1;
                  if ( &_R8[4 * x] > (unsigned __int8 *)&v86[2 * v111] || &_R8[4 * v111] < (unsigned __int8 *)&v86[2 * x] )
                  {
                    do
                    {
                      __asm
                      {
                        vmovq   xmm0, qword ptr [r9]
                        vpmovzxwd xmm1, xmm0
                        vmovq   xmm0, qword ptr [r9+8]
                        vmovdqu xmmword ptr [r8], xmm1
                        vpmovzxwd xmm1, xmm0
                        vmovq   xmm0, qword ptr [r9+10h]
                        vmovdqu xmmword ptr [r8+10h], xmm1
                        vpmovzxwd xmm1, xmm0
                        vmovq   xmm0, qword ptr [r9+18h]
                        vmovdqu xmmword ptr [r8+20h], xmm1
                        vpmovzxwd xmm1, xmm0
                        vmovdqu xmmword ptr [r8+30h], xmm1
                      }
                      _R8 += 64;
                      _R9 += 16;
                      v110 += 16;
                    }
                    while ( v110 < v19 - width % 16 );
                  }
                }
                if ( v110 < v19 )
                {
                  v120 = (unsigned int)(v19 - v110);
                  do
                  {
                    v121 = *_R9++;
                    *(_DWORD *)_R8 = v121;
                    _R8 += 4;
                    --v120;
                  }
                  while ( v120 );
                }
                v108 = v143;
              }
              v86 += v108;
              --v107;
            }
            while ( v107 );
            v11 = (unsigned __int8 *)v148;
            v9 = v149;
          }
          if ( _R8 - v11 != v106 * width * v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 953, ASSERT_TYPE_ASSERT, "(static_cast<size_t>( reinterpret_cast<byte *>( dstPixel ) - buffer ) == static_cast<size_t>( width * height * bytesPerPixel ))", (const char *)&queryFormat, "static_cast<size_t>( reinterpret_cast<byte *>( dstPixel ) - buffer ) == static_cast<size_t>( width * height * bytesPerPixel )") )
            goto LABEL_195;
        }
      }
LABEL_210:
      v131 = (__int64)v146;
      v159[0] = 0i64;
      v159[1] = 0i64;
      v146->m_pFunction[3].QueryInterface(v146, NULL, (void **)v159);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v131 + 16i64))(v131);
      result = 1i64;
      break;
    default:
      CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 1002, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
      __debugbreak();
  }
  return result;
}

/*
==============
R_GetFloat32BufferData
==============
*/
__int64 R_GetFloat32BufferData(R_RT_DepthHandle *depthRt, int width, int height, int bytesPerPixel, unsigned __int8 *buffer)
{
  __int64 v7; 
  ID3D12Resource *D3DTextureResource; 
  ID3D12Resource *v16; 
  ID3D12Resource *v17; 
  HRESULT v19; 
  const char *v20; 
  char *v21; 
  size_t v22; 
  int fmt; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  void *Src; 
  size_t Size; 
  unsigned __int64 fence; 
  __int64 v30[2]; 
  __m256i v31; 
  D3D12_RESOURCE_DESC resourceDesc; 
  __m256i v35; 

  v7 = (unsigned int)height;
  D3DTextureResource = R_RT_Handle::GetD3DTextureResource(depthRt);
  if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  ((void (__fastcall *)(ID3D12Resource *, __m256i *))D3DTextureResource->m_pFunction[3].AddRef)(D3DTextureResource, &v35);
  __asm
  {
    vmovups ymm0, [rbp+60h+var_78]
    vmovups xmm1, [rbp+60h+var_58]
    vmovups [rsp+160h+var_E8], ymm0
    vmovsd  xmm0, [rbp+60h+var_48]
    vmovsd  [rbp+60h+var_B8], xmm0
    vmovups [rbp+60h+var_C8], xmm1
  }
  if ( width < 1 || width > v35.m256i_i32[4] )
  {
    LODWORD(v24) = width;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 280, ASSERT_TYPE_ASSERT, "( 1 ) <= ( width ) && ( width ) <= ( (int)dsc.Width )", "width not in [1, (int)dsc.Width]\n\t%i not in [%i, %i]", v24, 1, v35.m256i_i32[4]) )
      __debugbreak();
  }
  if ( (int)v7 < 1 || (int)v7 > v31.m256i_i32[6] )
  {
    LODWORD(v26) = v31.m256i_i32[6];
    LODWORD(v25) = 1;
    LODWORD(v24) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 281, ASSERT_TYPE_ASSERT, "( 1 ) <= ( height ) && ( height ) <= ( (int)dsc.Height )", "height not in [1, (int)dsc.Height]\n\t%i not in [%i, %i]", v24, v25, v26) )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, [rsp+160h+var_E8]
    vmovups xmm1, [rbp+60h+var_C8]
    vmovups ymmword ptr [rbp+60h+resourceDesc.Dimension], ymm0
    vmovsd  xmm0, [rbp+60h+var_B8]
    vmovsd  qword ptr [rbp+60h+resourceDesc.Flags], xmm0
  }
  *((_DWORD *)&resourceDesc.Flags + 1) = HIDWORD(_RT0);
  __asm { vmovups xmmword ptr [rbp+60h+resourceDesc.Format], xmm1 }
  resourceDesc.Flags = D3D12_RESOURCE_FLAG_NONE;
  resourceDesc.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
  LOBYTE(fmt) = 0;
  v16 = R_CreateDriverManagedResource(D3D12_HEAP_TYPE_READBACK, &resourceDesc, D3D12_RESOURCE_STATE_COPY_DEST, NULL);
  v17 = v16;
  if ( v16 )
  {
    PIXSetDebugName(v16, "ExtractBufferData");
    ((void (__fastcall *)(GfxDevice *, ID3D12Resource *, ID3D12Resource *, _QWORD, int))g_dx.immediateContext->m_pFunction[28].QueryInterface)(g_dx.immediateContext, v17, D3DTextureResource, 0i64, fmt);
    Src = NULL;
    v19 = ((__int64 (__fastcall *)(ID3D12Resource *, _QWORD, _QWORD, void **))v17->m_pFunction[2].Release)(v17, 0i64, 0i64, &Src);
    if ( v19 < 0 )
    {
      v20 = R_ErrorDescription(v19);
      Sys_Error((const ObfuscateErrorText)&stru_1443C9ED0, 327i64, v20);
    }
    ((void (__fastcall *)(ID3D12Device *, __m256i *, _QWORD, __int64, _QWORD, _QWORD, _QWORD, size_t *, _QWORD))g_dx.d3d12device->m_pFunction[12].Release)(g_dx.d3d12device, &v31, 0i64, 1i64, 0i64, 0i64, 0i64, &Size, 0i64);
    fence = R_FlushImmediateContext();
    R_HW_WaitForFence(&fence);
    v21 = (char *)Src;
    if ( (int)v7 > 0 )
    {
      v22 = Size;
      do
      {
        memcpy_0(buffer, v21, v22);
        v22 = Size;
        v21 += Size;
        buffer += Size;
        --v7;
      }
      while ( v7 );
    }
    v30[0] = 0i64;
    v30[1] = 0i64;
    v17->m_pFunction[3].QueryInterface(v17, NULL, (void **)v30);
    v17->m_pFunction->Release(v17);
    return 1i64;
  }
  else
  {
    Com_PrintError(8, "ERROR: cannot take screenshot: R_CreateDriverManagedResource failed\n");
    return 0i64;
  }
}

/*
==============
R_ResampleImage
==============
*/
void R_ResampleImage(int oldWidth, int oldHeight, int newWidth, int newHeight, int bytesPerPixel, unsigned __int8 *data)
{
  unsigned __int8 *v6; 
  int v7; 
  __int64 v9; 
  int v10; 
  unsigned __int8 *src; 
  unsigned __int8 *dst; 
  __int64 v13; 
  __int64 v14; 
  unsigned __int8 *v15; 
  unsigned __int8 *v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  unsigned __int8 *i; 

  v6 = data;
  v7 = newHeight;
  v9 = (unsigned int)newWidth;
  v10 = oldHeight;
  if ( oldWidth > newWidth )
  {
    src = data;
    dst = data;
    if ( oldHeight <= 0 )
      goto LABEL_11;
    v13 = (unsigned int)oldHeight;
    v14 = bytesPerPixel * oldWidth;
    do
    {
      R_DownsamplePixelData(oldWidth, v9, 1, bytesPerPixel, src, dst);
      src += v14;
      dst += bytesPerPixel * (int)v9;
      --v13;
    }
    while ( v13 );
    v10 = oldHeight;
    goto LABEL_10;
  }
  if ( oldWidth < newWidth )
  {
    v15 = &data[bytesPerPixel * oldWidth * (oldHeight - 1)];
    v16 = &data[bytesPerPixel * newWidth * (oldHeight - 1)];
    if ( oldHeight - 1 >= 0 )
    {
      v17 = oldHeight - 1;
      v18 = bytesPerPixel * oldWidth;
      do
      {
        R_UpsamplePixelData(oldWidth, v9, 1, bytesPerPixel, v15, v16);
        v16 -= bytesPerPixel * (int)v9;
        v15 -= v18;
        --v17;
      }
      while ( v17 >= 0 );
LABEL_10:
      v7 = newHeight;
      v6 = data;
    }
  }
LABEL_11:
  if ( v10 <= v7 )
  {
    if ( v10 < v7 )
    {
      v20 = v9 - 1;
      for ( i = &v6[bytesPerPixel * ((int)v9 - 1)]; v20 >= 0; --v20 )
      {
        R_UpsamplePixelData(v10, v7, v9, bytesPerPixel, i, i);
        i -= bytesPerPixel;
      }
    }
  }
  else if ( (int)v9 > 0 )
  {
    v19 = v9;
    do
    {
      R_DownsamplePixelData(v10, v7, v9, bytesPerPixel, v6, v6);
      v6 += bytesPerPixel;
      --v19;
    }
    while ( v19 );
  }
}

/*
==============
R_TakeResampledScreenshot
==============
*/
unsigned __int8 *R_TakeResampledScreenshot(int width, int height, int bytesPerPixel, int headerSize)
{
  unsigned int displayHeight; 
  int v5; 
  __int64 v6; 
  unsigned int displayWidth; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int8 *v10; 
  int v12; 
  int v13; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  ID3D12Resource *basemap; 
  const R_RT_Surface *v17; 
  int v19; 
  unsigned __int8 *v20; 
  int v21; 
  unsigned __int8 *v22; 
  unsigned __int8 *v23; 
  __int64 v24; 
  __int64 v25; 
  signed int v26; 
  unsigned __int8 *v27; 
  unsigned __int8 *v28; 
  __int64 v29; 
  __int64 v30; 
  int v31; 
  unsigned __int8 *i; 
  unsigned __int8 *buffer; 
  unsigned __int8 *v34; 
  R_RT_ColorHandle result; 
  GfxPixelFormat image_format; 
  unsigned int v37; 

  displayHeight = vidConfig.displayHeight;
  v5 = height;
  v6 = bytesPerPixel;
  displayWidth = vidConfig.displayWidth;
  v8 = headerSize;
  if ( width > (int)vidConfig.displayWidth )
    displayWidth = width;
  v9 = (unsigned int)width;
  if ( height > (int)vidConfig.displayHeight )
    displayHeight = height;
  buffer = (unsigned __int8 *)Mem_Virtual_Alloc((int)(headerSize + v6 * displayWidth * displayHeight), "R_TakeResampledScreenshot", TRACK_RENDERER_MISC);
  v10 = buffer;
  R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
  __asm { vmovups ymm0, ymmword ptr [rsp+0C8h+result.baseclass_0.m_surfaceID] }
  v12 = vidConfig.displayHeight;
  v13 = vidConfig.displayWidth;
  __asm { vmovups ymmword ptr [rsp+0C8h+result.baseclass_0.m_surfaceID], ymm0 }
  R_LockGfxImmediateContext();
  image_format = R_RT_Handle::GetSurface(&result)->m_image.m_base.format;
  Surface = R_RT_Handle::GetSurface(&result);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  if ( !Resident->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 300, ASSERT_TYPE_ASSERT, "(texture->map)", (const char *)&queryFormat, "texture->map") )
    __debugbreak();
  basemap = Resident->basemap;
  v17 = R_RT_Handle::GetSurface(&result);
  LODWORD(basemap) = R_GetBufferDataInternal(basemap, 0, 0, v13, v12, v6, buffer, image_format, (D3D12_RESOURCE_STATES)(((v17->m_rtFlagsInternal & 0x40) == 0) << 11));
  R_UnlockGfxImmediateContext();
  if ( !(_DWORD)basemap )
  {
    Mem_Virtual_Free(buffer);
    return 0i64;
  }
  v19 = vidConfig.displayHeight;
  v20 = &buffer[v8];
  v21 = vidConfig.displayWidth;
  v34 = v20;
  v37 = vidConfig.displayHeight;
  if ( (int)vidConfig.displayWidth > (int)v9 )
  {
    v22 = v20;
    v23 = v20;
    if ( (int)vidConfig.displayHeight <= 0 )
    {
LABEL_21:
      v10 = buffer;
      goto LABEL_22;
    }
    v24 = vidConfig.displayHeight;
    v25 = (int)v6 * vidConfig.displayWidth;
    do
    {
      R_DownsamplePixelData(v21, v9, 1, v6, v22, v23);
      v22 += v25;
      v23 += (int)v6 * (int)v9;
      --v24;
    }
    while ( v24 );
    goto LABEL_19;
  }
  if ( (int)vidConfig.displayWidth < (int)v9 )
  {
    v26 = vidConfig.displayHeight - 1;
    v27 = &v20[(int)v6 * vidConfig.displayWidth * (vidConfig.displayHeight - 1)];
    v28 = &v20[(int)v6 * (int)v9 * (vidConfig.displayHeight - 1)];
    if ( (signed int)(vidConfig.displayHeight - 1) < 0 )
    {
LABEL_20:
      v5 = height;
      goto LABEL_21;
    }
    v29 = (int)v6 * vidConfig.displayWidth;
    do
    {
      R_UpsamplePixelData(v21, v9, 1, v6, v27, v28);
      v27 -= v29;
      v28 -= (int)v6 * (int)v9;
      --v26;
    }
    while ( v26 >= 0 );
LABEL_19:
    v19 = v37;
    v20 = v34;
    goto LABEL_20;
  }
LABEL_22:
  if ( v19 <= v5 )
  {
    if ( v19 < v5 )
    {
      v31 = v9 - 1;
      for ( i = &v20[(int)v6 * ((int)v9 - 1)]; v31 >= 0; --v31 )
      {
        R_UpsamplePixelData(v19, v5, v9, v6, i, i);
        i -= v6;
      }
    }
  }
  else if ( (int)v9 > 0 )
  {
    v30 = v9;
    do
    {
      R_DownsamplePixelData(v19, v5, v9, v6, v20, v20);
      v20 += v6;
      --v30;
    }
    while ( v30 );
  }
  return v10;
}

/*
==============
R_UpsamplePixelData
==============
*/
void R_UpsamplePixelData(int oldSize, int newSize, int stride, int bytesPerPixel, unsigned __int8 *src, unsigned __int8 *dst)
{
  int v13; 
  int v15; 
  int v16; 
  int v17; 
  unsigned __int8 *v21; 
  unsigned __int8 *v22; 
  int v24; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( newSize <= oldSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 139, ASSERT_TYPE_ASSERT, "(newSize > oldSize)", (const char *)&queryFormat, "newSize > oldSize") )
    __debugbreak();
  v13 = oldSize + newSize;
  __asm { vmovss  xmm4, cs:__real@3f000000 }
  v15 = bytesPerPixel * stride;
  v16 = newSize - 1;
  v17 = newSize - oldSize;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r14d
    vdivss  xmm6, xmm4, xmm0
  }
  v21 = &src[v15 * (oldSize - 1)];
  v22 = &dst[v15 * (newSize - 1)];
  v21[v15] = *v21;
  v21[v15 + 1] = v21[1];
  v21[v15 + 2] = v21[2];
  if ( newSize - 1 >= 0 )
  {
    __asm { vxorps  xmm5, xmm5, xmm5 }
    v24 = 2 * oldSize;
    do
    {
      if ( v21 < src )
      {
        _EAX = (v13 + v17) * *src;
        __asm
        {
          vmovd   xmm0, eax
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm1, xmm0, xmm6
          vaddss  xmm3, xmm1, xmm4
          vroundss xmm1, xmm5, xmm3, 1
          vcvttss2si eax, xmm1
        }
        *v22 = _EAX;
        _EAX = (v13 + v17) * src[1];
        __asm
        {
          vmovd   xmm0, eax
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm1, xmm0, xmm6
          vaddss  xmm3, xmm1, xmm4
          vroundss xmm1, xmm5, xmm3, 1
          vcvttss2si eax, xmm1
        }
        v22[1] = _EAX;
        _EAX = (v13 + v17) * src[2];
        __asm
        {
          vmovd   xmm0, eax
          vcvtdq2ps xmm0, xmm0
        }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ecx
          vmulss  xmm1, xmm0, xmm6
          vaddss  xmm3, xmm1, xmm4
          vroundss xmm1, xmm5, xmm3, 1
          vcvttss2si eax, xmm1
        }
        *v22 = _EAX;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ecx
          vmulss  xmm1, xmm0, xmm6
          vaddss  xmm3, xmm1, xmm4
          vroundss xmm1, xmm5, xmm3, 1
          vcvttss2si eax, xmm1
        }
        v22[1] = _EAX;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ecx
        }
      }
      __asm
      {
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm3, xmm1, xmm4
        vroundss xmm1, xmm5, xmm3, 1
        vcvttss2si eax, xmm1
      }
      v22[2] = _EAX;
      v13 += v24;
      v22 -= v15;
      v17 -= v24;
      if ( v17 < 0 )
      {
        v13 -= 2 * newSize;
        v17 += 2 * newSize;
        v21 -= v15;
      }
      --v16;
    }
    while ( v16 >= 0 );
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
R_WriteClutIntoScreenshotDataTga
==============
*/
void R_WriteClutIntoScreenshotDataTga(unsigned int width, unsigned __int8 *buffer, int bytesPerPixel)
{
  unsigned __int8 i; 
  unsigned __int8 j; 
  unsigned __int8 v8; 
  char v9; 
  unsigned __int8 v10; 
  int v11; 
  __int64 v12; 

  for ( i = 0; i < 0x20u; ++i )
  {
    for ( j = 0; j < 0x20u; ++j )
    {
      v8 = 0;
      do
      {
        v9 = 8 * v8;
        v10 = v8;
        v11 = 32 * v8++;
        v12 = bytesPerPixel * (i + width * j + v11);
        buffer[v12] = v9 | (v10 >> 2);
        buffer[(unsigned int)(v12 + 1)] = (8 * j) | (j >> 2);
        buffer[(unsigned int)(v12 + 2)] = (8 * i) | (i >> 2);
      }
      while ( v8 < 0x20u );
    }
  }
}

