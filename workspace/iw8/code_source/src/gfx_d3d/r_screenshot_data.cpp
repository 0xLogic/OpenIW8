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
  float v3; 
  bool v4; 
  bool v5; 
  float v6; 

  if ( (half & 0x7C00) != 0 )
  {
    v1 = (half >> 10) & 0x1F;
  }
  else
  {
    if ( (half & 0x3FF) != 0 )
      return 0;
    v1 = -112;
  }
  LODWORD(v6) = ((half & 0x3FF) << 13) | ((v1 + 112) << 23) | (half << 16) & 0x80000000;
  v3 = v6 * 255.0;
  v4 = (float)(v6 * 255.0) >= 0.0 && v3 <= 16777216.0;
  v5 = v3 >= 0.0 && v3 <= 255.0;
  if ( (!v4 || !v5) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned char __cdecl float_to_integral_cast<unsigned char,float>(float)", (unsigned __int8)(int)(float)(v6 * 255.0), (float)(v6 * 255.0)) )
    __debugbreak();
  return (int)(float)(v6 * 255.0);
}

/*
==============
R_CreateDriverManagedResource
==============
*/
ID3D12Resource *R_CreateDriverManagedResource(D3D12_HEAP_TYPE heapType, const D3D12_RESOURCE_DESC *resourceDesc, D3D12_RESOURCE_STATES initState, D3D12_CLEAR_VALUE *clearValue)
{
  ID3D12Device *d3d12device; 
  HRESULT v9; 
  const char *v10; 
  __int64 v12; 
  __int128 v13; 
  __int128 v14; 
  int v15; 

  if ( !resourceDesc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 28, ASSERT_TYPE_ASSERT, "(resourceDesc)", (const char *)&queryFormat, "resourceDesc") )
    __debugbreak();
  d3d12device = g_dx.d3d12device;
  if ( !g_dx.d3d12device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", LODWORD(g_dx.d3d12device) + 31, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  v15 = 1;
  *(_QWORD *)((char *)&v13 + 4) = 0i64;
  LODWORD(v13) = heapType;
  HIDWORD(v13) = 1;
  v14 = v13;
  v9 = ((__int64 (__fastcall *)(ID3D12Device *, __int128 *, _QWORD, const D3D12_RESOURCE_DESC *, D3D12_RESOURCE_STATES, D3D12_CLEAR_VALUE *, GUID *, __int64 *))d3d12device->m_pFunction[9].QueryInterface)(d3d12device, &v14, 0i64, resourceDesc, initState, clearValue, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &v12);
  if ( v9 < 0 )
  {
    v10 = R_ErrorDescription(v9);
    Sys_Error((const ObfuscateErrorText)&stru_1443C9B70, 34i64, v10);
  }
  return (ID3D12Resource *)v12;
}

/*
==============
R_DownsamplePixelData
==============
*/
void R_DownsamplePixelData(int oldSize, int newSize, int stride, int bytesPerPixel, unsigned __int8 *src, unsigned __int8 *dst)
{
  __int64 v7; 
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 v14; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int i; 
  int v23; 

  v7 = (unsigned int)newSize;
  if ( newSize >= oldSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 91, ASSERT_TYPE_ASSERT, "(newSize < oldSize)", (const char *)&queryFormat, "newSize < oldSize") )
    __debugbreak();
  v10 = bytesPerPixel * stride;
  v11 = v7;
  if ( (int)v7 > 0 )
  {
    v12 = v7;
    v14 = v10;
    _XMM7 = 0i64;
    do
    {
      if ( v11 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 99, ASSERT_TYPE_ASSERT, "(residual > 0)", (const char *)&queryFormat, "residual > 0") )
        __debugbreak();
      v17 = src[1];
      v18 = src[2];
      v19 = v7 + v11 - oldSize;
      v20 = v11 * *src;
      src += v14;
      v21 = v11 * v17;
      for ( i = v11 * v18; v19 <= 0; i += v23 )
      {
        v11 += v7;
        v19 += v7;
        v20 += v7 * *src;
        v21 += v7 * src[1];
        v23 = v7 * src[2];
        src += v14;
      }
      v11 += v7 - oldSize;
      __asm { vroundss xmm1, xmm7, xmm3, 1 }
      *dst = (int)*(float *)&_XMM1;
      __asm { vroundss xmm1, xmm7, xmm3, 1 }
      dst[1] = (int)*(float *)&_XMM1;
      __asm { vroundss xmm1, xmm7, xmm3, 1 }
      dst[2] = (int)*(float *)&_XMM1;
      dst += v14;
      --v12;
    }
    while ( v12 );
  }
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
  int v16; 
  unsigned int v18; 
  int v19; 
  D3D12_RESOURCE_STATES v22; 
  __int32 v23; 
  __int128 v24; 
  double v25; 
  ID3D12Resource *v26; 
  __int64 result; 
  HRESULT v28; 
  const char *v29; 
  int v30; 
  unsigned __int64 v31; 
  int v32; 
  __int64 v33; 
  _WORD *v34; 
  __int64 v35; 
  int v36; 
  unsigned __int64 v37; 
  unsigned __int16 *v38; 
  __int64 v39; 
  int v40; 
  unsigned __int64 v41; 
  __int64 v42; 
  int *v43; 
  int v44; 
  unsigned int v45; 
  __int64 v46; 
  unsigned __int8 *v47; 
  unsigned __int8 *v48; 
  unsigned __int8 *v49; 
  int v50; 
  __int64 v51; 
  int v52; 
  int v53; 
  unsigned __int64 v54; 
  __int64 v55; 
  unsigned __int8 *v56; 
  __int64 v57; 
  __int64 v58; 
  int v59; 
  char *v60; 
  __int64 v61; 
  int v62; 
  unsigned int *v63; 
  __int64 v64; 
  unsigned int v65; 
  int v66; 
  unsigned __int8 *v67; 
  int v68; 
  __int64 v69; 
  char *v70; 
  int v71; 
  unsigned __int8 *v72; 
  size_t v73; 
  int v74; 
  __int64 v75; 
  __int64 v76; 
  unsigned __int8 *v77; 
  int v78; 
  __int64 v79; 
  __int64 v80; 
  unsigned __int16 *v81; 
  int v82; 
  unsigned int v83; 
  __int64 v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  __int64 v89; 
  float v90; 
  int v91; 
  __int64 v92; 
  __int64 v93; 
  unsigned __int64 *v94; 
  int v95; 
  __int64 v96; 
  __int64 v105; 
  int v106; 
  int v107; 
  unsigned __int64 v108; 
  __int64 v109; 
  int v110; 
  _DWORD *v111; 
  __int64 v112; 
  int v113; 
  int v114; 
  int v115; 
  __int64 v116; 
  int fmt; 
  __int64 v118; 
  __int64 v119; 
  __int64 v120; 
  __int64 v123; 
  unsigned __int64 fence; 
  int v125; 
  ID3D12Resource *v126; 
  __int64 v127; 
  unsigned __int64 v128; 
  int v129; 
  __int64 v130; 
  __m256i v131; 
  __int128 v132; 
  double v133; 
  __m256i v134; 
  __int128 v135; 
  double v136; 
  D3D12_RESOURCE_DESC resourceDesc; 
  __int64 v138[2]; 
  __int64 v139[2]; 

  v9 = bytesPerPixel;
  v11 = buffer;
  v129 = bytesPerPixel;
  v128 = (unsigned __int64)buffer;
  v14 = y;
  fence = (unsigned __int64)sourceTexture;
  if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  ((void (__fastcall *)(ID3D12Resource *, __m256i *))sourceTexture->m_pFunction[3].AddRef)(sourceTexture, &v131);
  v134 = v131;
  v136 = v133;
  v135 = v132;
  if ( width < 1 || width > v131.m256i_i32[4] )
  {
    LODWORD(v118) = width;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 374, ASSERT_TYPE_ASSERT, "( 1 ) <= ( width ) && ( width ) <= ( (int)dsc.Width )", "width not in [1, (int)dsc.Width]\n\t%i not in [%i, %i]", v118, 1, v131.m256i_i32[4]) )
      __debugbreak();
  }
  if ( height < 1 || height > v134.m256i_i32[6] )
  {
    LODWORD(v120) = v134.m256i_i32[6];
    LODWORD(v119) = 1;
    LODWORD(v118) = height;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 375, ASSERT_TYPE_ASSERT, "( 1 ) <= ( height ) && ( height ) <= ( (int)dsc.Height )", "height not in [1, (int)dsc.Height]\n\t%i not in [%i, %i]", v118, v119, v120) )
      __debugbreak();
  }
  _YMM0 = v134;
  v16 = x + width;
  __asm { vextractf128 xmm1, ymm0, 1 }
  v18 = _XMM1;
  v125 = v16;
  if ( v16 >= (unsigned int)(_XMM1 + 1) )
  {
    LODWORD(v119) = _XMM1 + 1;
    LODWORD(v118) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 376, ASSERT_TYPE_ASSERT, "(unsigned)( x+width ) < (unsigned)( (int)dsc.Width+1 )", "x+width doesn't index (int)dsc.Width+1\n\t%i not in [0, %i)", v118, v119) )
      __debugbreak();
    v18 = v134.m256i_u32[4];
  }
  v19 = v14 + height;
  if ( (int)v14 + height >= (unsigned int)(v134.m256i_i32[6] + 1) )
  {
    LODWORD(v119) = v134.m256i_i32[6] + 1;
    LODWORD(v118) = v14 + height;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 377, ASSERT_TYPE_ASSERT, "(unsigned)( y+height ) < (unsigned)( (int)dsc.Height+1 )", "y+height doesn't index (int)dsc.Height+1\n\t%i not in [0, %i)", v118, v119) )
      __debugbreak();
    v18 = v134.m256i_u32[4];
  }
  if ( x >= v18 )
  {
    LODWORD(v119) = v18;
    LODWORD(v118) = x;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 378, ASSERT_TYPE_ASSERT, "(unsigned)( x ) < (unsigned)( (int)dsc.Width )", "x doesn't index (int)dsc.Width\n\t%i not in [0, %i)", v118, v119) )
      __debugbreak();
  }
  if ( (unsigned int)v14 >= v134.m256i_i32[6] )
  {
    LODWORD(v119) = v134.m256i_i32[6];
    LODWORD(v118) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 379, ASSERT_TYPE_ASSERT, "(unsigned)( y ) < (unsigned)( (int)dsc.Height )", "y doesn't index (int)dsc.Height\n\t%i not in [0, %i)", v118, v119) )
      __debugbreak();
  }
  _XMM1 = v135;
  __asm { vpextrd rax, xmm1, 1 }
  *(__m256i *)&resourceDesc.Dimension = v134;
  *(double *)&resourceDesc.Flags = v136;
  if ( (unsigned int)_RAX <= 1 )
  {
    LOBYTE(fmt) = 0;
    if ( (_DWORD)v135 == 10 )
    {
      resourceDesc.Format = DXGI_FORMAT_R16G16B16A16_FLOAT;
      resourceDesc.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
      *(_QWORD *)&resourceDesc.Layout = 1i64;
      v126 = R_CreateDriverManagedResource(D3D12_HEAP_TYPE_READBACK, &resourceDesc, D3D12_RESOURCE_STATE_COPY_DEST, NULL);
      if ( !v126 )
        goto LABEL_36;
      v22 = sourceTextureBeforeState;
      v23 = sourceTextureBeforeState & 0x800;
      if ( (sourceTextureBeforeState & 0x800) == 0 )
      {
        v131.m256i_i64[3] = 2048i64;
        v131.m256i_i32[5] = sourceTextureBeforeState;
        v131.m256i_i64[0] = 0i64;
        v131.m256i_i64[1] = fence;
        v131.m256i_i32[4] = -1;
        ((void (__fastcall *)(GfxDevice *, _QWORD, __m256i *))g_dx.immediateContext->m_pFunction[8].Release)(g_dx.immediateContext, (unsigned int)(v23 + 1), &v131);
      }
    }
    else
    {
      *(_OWORD *)&resourceDesc.Format = v135;
      *(_QWORD *)&resourceDesc.Layout = 1i64;
      v26 = R_CreateDriverManagedResource(D3D12_HEAP_TYPE_READBACK, &resourceDesc, D3D12_RESOURCE_STATE_COPY_DEST, NULL);
      v126 = v26;
      if ( !v26 )
        goto LABEL_36;
      v22 = sourceTextureBeforeState;
      v23 = sourceTextureBeforeState & 0x800;
      if ( (sourceTextureBeforeState & 0x800) == 0 )
      {
        v131.m256i_i64[3] = 2048i64;
        v131.m256i_i32[5] = sourceTextureBeforeState;
        v131.m256i_i64[0] = 0i64;
        v131.m256i_i64[1] = fence;
        v131.m256i_i32[4] = -1;
        ((void (__fastcall *)(GfxDevice *, _QWORD, __m256i *))g_dx.immediateContext->m_pFunction[8].Release)(g_dx.immediateContext, (unsigned int)(v23 + 1), &v131);
        v26 = v126;
      }
      PIXSetDebugName(v26, "Screenshot Staging");
    }
    ((void (__fastcall *)(GfxDevice *, ID3D12Resource *, unsigned __int64, _QWORD, int))g_dx.immediateContext->m_pFunction[28].QueryInterface)(g_dx.immediateContext, v126, fence, 0i64, fmt);
    v24 = *(_OWORD *)&resourceDesc.Format;
    v134 = *(__m256i *)&resourceDesc.Dimension;
    v25 = *(double *)&resourceDesc.Flags;
    goto LABEL_41;
  }
  resourceDesc.Format = v135;
  v130 = 0i64;
  v123 = 0i64;
  resourceDesc.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
  *(_QWORD *)&resourceDesc.Layout = 1i64;
  v126 = R_CreateDriverManagedResource(D3D12_HEAP_TYPE_READBACK, &resourceDesc, D3D12_RESOURCE_STATE_COPY_DEST, NULL);
  if ( !v126 )
  {
LABEL_36:
    Com_PrintError(8, "ERROR: cannot take screenshot: R_CreateDriverManagedResource failed\n");
    return 0i64;
  }
  v22 = sourceTextureBeforeState;
  v23 = sourceTextureBeforeState & 0x800;
  if ( (sourceTextureBeforeState & 0x800) == 0 )
  {
    v131.m256i_i64[3] = 2048i64;
    v131.m256i_i32[5] = sourceTextureBeforeState;
    v131.m256i_i64[0] = 0i64;
    v131.m256i_i64[1] = fence;
    v131.m256i_i32[4] = -1;
    ((void (__fastcall *)(GfxDevice *, _QWORD, __m256i *))g_dx.immediateContext->m_pFunction[8].Release)(g_dx.immediateContext, (unsigned int)(v23 + 1), &v131);
  }
  ((void (__fastcall *)(GfxDevice *, ID3D12Resource *, _QWORD, unsigned __int64, _DWORD, _DWORD))g_dx.immediateContext->m_pFunction[6].AddRef)(g_dx.immediateContext, v126, 0i64, fence, 0, v135);
  ((void (__fastcall *)(ID3D12Resource *, __m256i *))v126->m_pFunction[3].AddRef)(v126, &v131);
  v24 = v132;
  v134 = v131;
  v25 = v133;
LABEL_41:
  v135 = v24;
  v136 = v25;
  if ( !v23 )
  {
    v131.m256i_i64[0] = 0i64;
    v131.m256i_i64[1] = fence;
    v131.m256i_i64[3] = (unsigned int)v22;
    v131.m256i_i64[2] = 0x800FFFFFFFFi64;
    ((void (__fastcall *)(GfxDevice *, __int64, __m256i *))g_dx.immediateContext->m_pFunction[8].Release)(g_dx.immediateContext, 1i64, &v131);
  }
  fence = R_FlushImmediateContext();
  R_HW_WaitForFence(&fence);
  ((void (__fastcall *)(ID3D12Device *, __m256i *, _QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))g_dx.d3d12device->m_pFunction[12].Release)(g_dx.d3d12device, &v134, 0i64, 1i64, 0i64, 0i64, 0i64, &v123, &v130);
  v127 = 0i64;
  v138[0] = 0i64;
  v138[1] = v130;
  v28 = ((__int64 (__fastcall *)(ID3D12Resource *, _QWORD, __int64 *, __int64 *))v126->m_pFunction[2].Release)(v126, 0i64, v138, &v127);
  if ( v28 < 0 )
  {
    v29 = R_ErrorDescription(v28);
    Sys_Error((const ObfuscateErrorText)&stru_1443CA190, 578i64, v29);
  }
  switch ( (int)v135 )
  {
    case 10:
      v30 = x;
      v31 = v127 + v123 * v14 + 8i64 * x;
      if ( (unsigned __int64)bytesPerPixel < 6 )
      {
        if ( (unsigned int)(bytesPerPixel - 3) > 1 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 623, ASSERT_TYPE_ASSERT, "(bytesPerPixel == 3 || bytesPerPixel == 4)", (const char *)&queryFormat, "bytesPerPixel == 3 || bytesPerPixel == 4") )
            __debugbreak();
          v30 = x;
        }
        if ( (int)v14 < (int)v14 + height )
        {
          v36 = v125;
          v37 = (unsigned int)height;
          v128 = (unsigned int)height;
          do
          {
            v38 = (unsigned __int16 *)v31;
            if ( v30 < v36 )
            {
              v39 = width;
              do
              {
                *v11 = R_ConvertHalfToByte(v38[2]);
                v11[1] = R_ConvertHalfToByte(v38[1]);
                v11[2] = R_ConvertHalfToByte(*v38);
                if ( bytesPerPixel == 4 )
                  v11[3] = R_ConvertHalfToByte(v38[3]);
                v11 += bytesPerPixel;
                v38 += 4;
                --v39;
              }
              while ( v39 );
              v37 = v128;
            }
            v31 += v123;
            if ( (unsigned __int64)v38 > v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 642, ASSERT_TYPE_ASSERT, "((void*)srcPixel <= (void*)srcData)", (const char *)&queryFormat, "(void*)srcPixel <= (void*)srcData") )
              __debugbreak();
            v30 = x;
            v128 = --v37;
          }
          while ( v37 );
        }
      }
      else
      {
        if ( ((bytesPerPixel - 6) & 0xFFFFFFFD) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 597, ASSERT_TYPE_ASSERT, "(bytesPerPixel == 6 || bytesPerPixel == 8)", (const char *)&queryFormat, "bytesPerPixel == 6 || bytesPerPixel == 8") )
            __debugbreak();
          v30 = x;
        }
        if ( (int)v14 < (int)v14 + height )
        {
          v32 = v125;
          v33 = (unsigned int)height;
          do
          {
            v34 = (_WORD *)v31;
            if ( v30 < v32 )
            {
              v35 = width;
              do
              {
                *(_WORD *)v11 = v34[2];
                *((_WORD *)v11 + 1) = v34[1];
                *((_WORD *)v11 + 2) = *v34;
                if ( bytesPerPixel == 8 )
                  *((_WORD *)v11 + 3) = v34[3];
                v11 += 2 * ((unsigned __int64)bytesPerPixel >> 1);
                v34 += 4;
                --v35;
              }
              while ( v35 );
            }
            v31 += v123;
            if ( (unsigned __int64)v34 > v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 616, ASSERT_TYPE_ASSERT, "((void*)srcPixel <= (void*)srcData)", (const char *)&queryFormat, "(void*)srcPixel <= (void*)srcData") )
              __debugbreak();
            v30 = x;
            --v33;
          }
          while ( v33 );
        }
      }
      goto LABEL_210;
    case 24:
      if ( (unsigned int)(bytesPerPixel - 3) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 966, ASSERT_TYPE_ASSERT, "(bytesPerPixel == 3 || bytesPerPixel == 4)", (const char *)&queryFormat, "bytesPerPixel == 3 || bytesPerPixel == 4") )
        __debugbreak();
      v107 = x;
      v108 = v127 + v123 * v14 + 4i64 * x;
      if ( (int)v14 < v19 )
      {
        v109 = (unsigned int)height;
        v110 = v125;
        do
        {
          v111 = (_DWORD *)v108;
          if ( v107 < v110 )
          {
            v112 = width;
            do
            {
              v113 = (*v111 >> 10) & 0x3FF;
              v114 = *v111 & 0x3FF;
              v115 = *v111 >> 30;
              *v11 = 255 * ((*v111 >> 20) & 0x3FFu) / 0x3FF;
              v11[1] = 255 * v113 / 0x3FFu;
              v11[2] = 255 * v114 / 0x3FFu;
              if ( bytesPerPixel == 4 )
                v11[3] = 255 * v115 / 3u;
              v11 += bytesPerPixel;
              ++v111;
              --v112;
            }
            while ( v112 );
          }
          v108 += v123;
          if ( (unsigned __int64)v111 > v108 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 995, ASSERT_TYPE_ASSERT, "(( void* )srcPixel <= ( void* )srcData)", (const char *)&queryFormat, "( void* )srcPixel <= ( void* )srcData") )
            __debugbreak();
          v107 = x;
          --v109;
        }
        while ( v109 );
      }
      goto LABEL_210;
    case 26:
      v58 = v123;
      v59 = x;
      v60 = (char *)(v127 + v123 * v14 + 4i64 * x);
      if ( bytesPerPixel == 8 )
      {
        if ( (int)v14 < v19 )
        {
          v61 = (unsigned int)height;
          v62 = v125;
          do
          {
            v63 = (unsigned int *)v60;
            if ( v59 < v62 )
            {
              v64 = width;
              do
              {
                v65 = *v63++;
                *((_WORD *)v11 + 3) = 15360;
                *(_WORD *)v11 = 16 * (v65 & 0x7FF);
                *((_WORD *)v11 + 1) = 16 * ((v65 >> 11) & 0x7FF);
                *((_WORD *)v11 + 2) = 32 * (v65 >> 22);
                v11 += 8;
                --v64;
              }
              while ( v64 );
              v59 = x;
            }
            v60 += v58;
            --v61;
          }
          while ( v61 );
        }
        goto LABEL_210;
      }
      if ( bytesPerPixel != 4 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 876, ASSERT_TYPE_ASSERT, "(bytesPerPixel == 4)", (const char *)&queryFormat, "bytesPerPixel == 4") )
          __debugbreak();
        v58 = v123;
      }
      v66 = width;
      v67 = buffer;
      if ( (int)v14 >= v19 )
      {
        v68 = height;
      }
      else
      {
        v68 = height;
        v69 = (unsigned int)height;
        do
        {
          memcpy_0(v67, v60, 4 * width);
          v60 += v58;
          v67 += 4 * width;
          --v69;
        }
        while ( v69 );
        v11 = (unsigned __int8 *)v128;
        v66 = width;
      }
      if ( v67 - v11 != 4i64 * v68 * v66 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 888, ASSERT_TYPE_ASSERT, "(static_cast< size_t >( reinterpret_cast< byte * >( dstPixel ) - buffer ) == static_cast< size_t >( width * height * sizeof( uint32_t ) ))", (const char *)&queryFormat, "static_cast< size_t >( reinterpret_cast< byte * >( dstPixel ) - buffer ) == static_cast< size_t >( width * height * sizeof( uint32_t ) )") )
        goto LABEL_195;
      goto LABEL_210;
    case 27:
    case 28:
      if ( (unsigned int)(bytesPerPixel - 3) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 824, ASSERT_TYPE_ASSERT, "(bytesPerPixel == 3 || bytesPerPixel == 4)", (const char *)&queryFormat, "bytesPerPixel == 3 || bytesPerPixel == 4") )
        __debugbreak();
      v53 = x;
      v54 = v127 + v123 * v14 + 4i64 * x;
      if ( (int)v14 < v19 )
      {
        v55 = (unsigned int)height;
        do
        {
          v56 = (unsigned __int8 *)v54;
          if ( v53 < v16 )
          {
            v57 = width;
            do
            {
              *v11 = v56[2];
              v11[1] = v56[1];
              v11[2] = *v56;
              if ( bytesPerPixel == 4 )
                v11[3] = v56[3];
              v11 += bytesPerPixel;
              v56 += 4;
              --v57;
            }
            while ( v57 );
          }
          v54 += v123;
          if ( (unsigned __int64)v56 > v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 845, ASSERT_TYPE_ASSERT, "((void*)srcPixel <= (void*)srcData)", (const char *)&queryFormat, "(void*)srcPixel <= (void*)srcData") )
            __debugbreak();
          v53 = x;
          --v55;
        }
        while ( v55 );
      }
      goto LABEL_210;
    case 39:
      if ( image_format == GFX_PF_R32F )
      {
        v40 = x;
        v41 = v127 + v123 * v14 + 4i64 * x;
        if ( (int)v14 < v19 )
        {
          v42 = (unsigned int)height;
          do
          {
            v43 = (int *)v41;
            v44 = v40;
            if ( v40 < v16 )
            {
              if ( width >= 4 )
              {
                v45 = ((unsigned int)(v16 - v40 - 4) >> 2) + 1;
                v46 = v45;
                v44 = v40 + 4 * v45;
                do
                {
                  *(_DWORD *)v11 = *v43;
                  v47 = &v11[bytesPerPixel];
                  *(_DWORD *)v47 = v43[1];
                  v48 = &v47[bytesPerPixel];
                  *(_DWORD *)v48 = v43[2];
                  v49 = &v48[bytesPerPixel];
                  v50 = v43[3];
                  v43 += 4;
                  *(_DWORD *)v49 = v50;
                  v11 = &v49[bytesPerPixel];
                  --v46;
                }
                while ( v46 );
              }
              if ( v44 < v16 )
              {
                v51 = (unsigned int)(v16 - v44);
                do
                {
                  v52 = *v43++;
                  *(_DWORD *)v11 = v52;
                  v11 += bytesPerPixel;
                  --v51;
                }
                while ( v51 );
              }
            }
            v41 += v123;
            if ( (unsigned __int64)v43 > v41 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 810, ASSERT_TYPE_ASSERT, "((void*)srcPixel <= (void*)srcData)", (const char *)&queryFormat, "(void*)srcPixel <= (void*)srcData") )
                __debugbreak();
              v40 = x;
            }
            --v42;
          }
          while ( v42 );
        }
      }
      goto LABEL_210;
    case 53:
    case 54:
      if ( ((bytesPerPixel - 2) & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 898, ASSERT_TYPE_ASSERT, "(bytesPerPixel == 2 || bytesPerPixel == 4)", (const char *)&queryFormat, "bytesPerPixel == 2 || bytesPerPixel == 4") )
        __debugbreak();
      v70 = (char *)(v127 + 2i64 * x + v123 * v14);
      if ( bytesPerPixel == 2 )
      {
        v71 = width;
        v72 = buffer;
        v73 = 2i64 * width;
        if ( (int)v14 >= v19 )
        {
          v74 = height;
        }
        else
        {
          v74 = height;
          v75 = v123;
          v76 = (unsigned int)height;
          do
          {
            memcpy_0(v72, v70, v73);
            v70 += v75;
            v72 += v73;
            --v76;
          }
          while ( v76 );
          v11 = (unsigned __int8 *)v128;
          v71 = width;
        }
        if ( v72 - v11 != 2 * v74 * v71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 915, ASSERT_TYPE_ASSERT, "(static_cast<size_t>( reinterpret_cast<byte *>( dstPixel ) - buffer ) == static_cast<size_t>( width * height * bytesPerPixel ))", (const char *)&queryFormat, "static_cast<size_t>( reinterpret_cast<byte *>( dstPixel ) - buffer ) == static_cast<size_t>( width * height * bytesPerPixel )") )
LABEL_195:
          __debugbreak();
      }
      else
      {
        if ( bytesPerPixel != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 919, ASSERT_TYPE_ASSERT, "(bytesPerPixel == 4)", (const char *)&queryFormat, "bytesPerPixel == 4") )
          __debugbreak();
        v77 = buffer;
        if ( image_format == GFX_PF_R16F )
        {
          if ( (int)v14 >= v19 )
          {
            v78 = height;
          }
          else
          {
            v78 = height;
            v79 = (unsigned int)height;
            v80 = v123;
            do
            {
              v81 = (unsigned __int16 *)v70;
              v82 = x;
              if ( x < v16 )
              {
                if ( width >= 4 )
                {
                  v83 = ((unsigned int)(v16 - x - 4) >> 2) + 1;
                  v84 = v83;
                  v82 = x + 4 * v83;
                  do
                  {
                    if ( *v81 )
                      LODWORD(v85) = ((*v81 & 0x8000) << 16) | (((((*v81 & 0x3FFF) << 14) - (~(*v81 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
                    else
                      v85 = 0.0;
                    *(float *)v77 = v85;
                    if ( v81[1] )
                      LODWORD(v86) = ((v81[1] & 0x8000) << 16) | (((((v81[1] & 0x3FFF) << 14) - (~(v81[1] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
                    else
                      v86 = 0.0;
                    *((float *)v77 + 1) = v86;
                    if ( v81[2] )
                      LODWORD(v87) = ((v81[2] & 0x8000) << 16) | (((((v81[2] & 0x3FFF) << 14) - (~(v81[2] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
                    else
                      v87 = 0.0;
                    *((float *)v77 + 2) = v87;
                    if ( v81[3] )
                      LODWORD(v88) = ((v81[3] & 0x8000) << 16) | (((((v81[3] & 0x3FFF) << 14) - (~(v81[3] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
                    else
                      v88 = 0.0;
                    *((float *)v77 + 3) = v88;
                    v77 += 16;
                    v81 += 4;
                    --v84;
                  }
                  while ( v84 );
                }
                if ( v82 < v16 )
                {
                  v89 = (unsigned int)(v16 - v82);
                  do
                  {
                    if ( *v81 )
                      LODWORD(v90) = ((*v81 & 0x8000) << 16) | (((((*v81 & 0x3FFF) << 14) - (~(*v81 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
                    else
                      v90 = 0.0;
                    *(float *)v77 = v90;
                    v77 += 4;
                    ++v81;
                    --v89;
                  }
                  while ( v89 );
                }
                v80 = v123;
              }
              v70 += v80;
              --v79;
            }
            while ( v79 );
            v11 = (unsigned __int8 *)v128;
            v9 = v129;
          }
          if ( v77 - v11 != v78 * width * v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 936, ASSERT_TYPE_ASSERT, "(static_cast<size_t>( reinterpret_cast<byte *>( dstPixel ) - buffer ) == static_cast<size_t>( width * height * bytesPerPixel ))", (const char *)&queryFormat, "static_cast<size_t>( reinterpret_cast<byte *>( dstPixel ) - buffer ) == static_cast<size_t>( width * height * bytesPerPixel )") )
            goto LABEL_195;
        }
        else
        {
          if ( (int)v14 >= v19 )
          {
            v91 = height;
          }
          else
          {
            v91 = height;
            v92 = (unsigned int)height;
            v93 = v123;
            do
            {
              v94 = (unsigned __int64 *)v70;
              v95 = x;
              if ( x < v16 )
              {
                if ( (unsigned int)width >= 0x10 )
                {
                  v96 = v16 - 1;
                  if ( &v77[4 * x] > (unsigned __int8 *)&v70[2 * v96] || &v77[4 * v96] < (unsigned __int8 *)&v70[2 * x] )
                  {
                    do
                    {
                      _XMM0 = *v94;
                      __asm { vpmovzxwd xmm1, xmm0 }
                      _XMM0 = v94[1];
                      *(_OWORD *)v77 = _XMM1;
                      __asm { vpmovzxwd xmm1, xmm0 }
                      _XMM0 = v94[2];
                      *((_OWORD *)v77 + 1) = _XMM1;
                      __asm { vpmovzxwd xmm1, xmm0 }
                      _XMM0 = v94[3];
                      *((_OWORD *)v77 + 2) = _XMM1;
                      __asm { vpmovzxwd xmm1, xmm0 }
                      *((_OWORD *)v77 + 3) = _XMM1;
                      v77 += 64;
                      v94 += 4;
                      v95 += 16;
                    }
                    while ( v95 < v16 - width % 16 );
                  }
                }
                if ( v95 < v16 )
                {
                  v105 = (unsigned int)(v16 - v95);
                  do
                  {
                    v106 = *(unsigned __int16 *)v94;
                    v94 = (unsigned __int64 *)((char *)v94 + 2);
                    *(_DWORD *)v77 = v106;
                    v77 += 4;
                    --v105;
                  }
                  while ( v105 );
                }
                v93 = v123;
              }
              v70 += v93;
              --v92;
            }
            while ( v92 );
            v11 = (unsigned __int8 *)v128;
            v9 = v129;
          }
          if ( v77 - v11 != v91 * width * v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 953, ASSERT_TYPE_ASSERT, "(static_cast<size_t>( reinterpret_cast<byte *>( dstPixel ) - buffer ) == static_cast<size_t>( width * height * bytesPerPixel ))", (const char *)&queryFormat, "static_cast<size_t>( reinterpret_cast<byte *>( dstPixel ) - buffer ) == static_cast<size_t>( width * height * bytesPerPixel )") )
            goto LABEL_195;
        }
      }
LABEL_210:
      v116 = (__int64)v126;
      v139[0] = 0i64;
      v139[1] = 0i64;
      v126->m_pFunction[3].QueryInterface(v126, NULL, (void **)v139);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v116 + 16i64))(v116);
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
  ID3D12Resource *v9; 
  ID3D12Resource *v10; 
  HRESULT v12; 
  const char *v13; 
  char *v14; 
  size_t v15; 
  int fmt; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  void *Src; 
  size_t Size; 
  unsigned __int64 fence; 
  __int64 v23[2]; 
  __m256i v24; 
  __int128 v25; 
  double v26; 
  D3D12_RESOURCE_DESC resourceDesc; 
  __m256i v28; 
  __int128 v29; 
  double v30; 

  v7 = (unsigned int)height;
  D3DTextureResource = R_RT_Handle::GetD3DTextureResource(depthRt);
  if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  ((void (__fastcall *)(ID3D12Resource *, __m256i *))D3DTextureResource->m_pFunction[3].AddRef)(D3DTextureResource, &v28);
  v24 = v28;
  v26 = v30;
  v25 = v29;
  if ( width < 1 || width > v28.m256i_i32[4] )
  {
    LODWORD(v17) = width;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 280, ASSERT_TYPE_ASSERT, "( 1 ) <= ( width ) && ( width ) <= ( (int)dsc.Width )", "width not in [1, (int)dsc.Width]\n\t%i not in [%i, %i]", v17, 1, v28.m256i_i32[4]) )
      __debugbreak();
  }
  if ( (int)v7 < 1 || (int)v7 > v24.m256i_i32[6] )
  {
    LODWORD(v19) = v24.m256i_i32[6];
    LODWORD(v18) = 1;
    LODWORD(v17) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 281, ASSERT_TYPE_ASSERT, "( 1 ) <= ( height ) && ( height ) <= ( (int)dsc.Height )", "height not in [1, (int)dsc.Height]\n\t%i not in [%i, %i]", v17, v18, v19) )
      __debugbreak();
  }
  *(__m256i *)&resourceDesc.Dimension = v24;
  *(double *)&resourceDesc.Flags = v26;
  *(_OWORD *)&resourceDesc.Format = v25;
  resourceDesc.Flags = D3D12_RESOURCE_FLAG_NONE;
  resourceDesc.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
  LOBYTE(fmt) = 0;
  v9 = R_CreateDriverManagedResource(D3D12_HEAP_TYPE_READBACK, &resourceDesc, D3D12_RESOURCE_STATE_COPY_DEST, NULL);
  v10 = v9;
  if ( v9 )
  {
    PIXSetDebugName(v9, "ExtractBufferData");
    ((void (__fastcall *)(GfxDevice *, ID3D12Resource *, ID3D12Resource *, _QWORD, int))g_dx.immediateContext->m_pFunction[28].QueryInterface)(g_dx.immediateContext, v10, D3DTextureResource, 0i64, fmt);
    Src = NULL;
    v12 = ((__int64 (__fastcall *)(ID3D12Resource *, _QWORD, _QWORD, void **))v10->m_pFunction[2].Release)(v10, 0i64, 0i64, &Src);
    if ( v12 < 0 )
    {
      v13 = R_ErrorDescription(v12);
      Sys_Error((const ObfuscateErrorText)&stru_1443C9ED0, 327i64, v13);
    }
    ((void (__fastcall *)(ID3D12Device *, __m256i *, _QWORD, __int64, _QWORD, _QWORD, _QWORD, size_t *, _QWORD))g_dx.d3d12device->m_pFunction[12].Release)(g_dx.d3d12device, &v24, 0i64, 1i64, 0i64, 0i64, 0i64, &Size, 0i64);
    fence = R_FlushImmediateContext();
    R_HW_WaitForFence(&fence);
    v14 = (char *)Src;
    if ( (int)v7 > 0 )
    {
      v15 = Size;
      do
      {
        memcpy_0(buffer, v14, v15);
        v15 = Size;
        v14 += Size;
        buffer += Size;
        --v7;
      }
      while ( v7 );
    }
    v23[0] = 0i64;
    v23[1] = 0i64;
    v10->m_pFunction[3].QueryInterface(v10, NULL, (void **)v23);
    v10->m_pFunction->Release(v10);
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
  int v11; 
  int v12; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  ID3D12Resource *basemap; 
  const R_RT_Surface *v16; 
  int v18; 
  unsigned __int8 *v19; 
  int v20; 
  unsigned __int8 *v21; 
  unsigned __int8 *v22; 
  __int64 v23; 
  __int64 v24; 
  signed int v25; 
  unsigned __int8 *v26; 
  unsigned __int8 *v27; 
  __int64 v28; 
  __int64 v29; 
  int v30; 
  unsigned __int8 *i; 
  unsigned __int8 *buffer; 
  unsigned __int8 *v33; 
  R_RT_ColorHandle result; 
  GfxPixelFormat image_format; 
  unsigned int v36; 

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
  v11 = vidConfig.displayHeight;
  v12 = vidConfig.displayWidth;
  R_LockGfxImmediateContext();
  image_format = R_RT_Handle::GetSurface(&result)->m_image.m_base.format;
  Surface = R_RT_Handle::GetSurface(&result);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  if ( !Resident->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 300, ASSERT_TYPE_ASSERT, "(texture->map)", (const char *)&queryFormat, "texture->map") )
    __debugbreak();
  basemap = Resident->basemap;
  v16 = R_RT_Handle::GetSurface(&result);
  LODWORD(basemap) = R_GetBufferDataInternal(basemap, 0, 0, v12, v11, v6, buffer, image_format, (D3D12_RESOURCE_STATES)(((v16->m_rtFlagsInternal & 0x40) == 0) << 11));
  R_UnlockGfxImmediateContext();
  if ( !(_DWORD)basemap )
  {
    Mem_Virtual_Free(buffer);
    return 0i64;
  }
  v18 = vidConfig.displayHeight;
  v19 = &buffer[v8];
  v20 = vidConfig.displayWidth;
  v33 = v19;
  v36 = vidConfig.displayHeight;
  if ( (int)vidConfig.displayWidth > (int)v9 )
  {
    v21 = v19;
    v22 = v19;
    if ( (int)vidConfig.displayHeight <= 0 )
    {
LABEL_21:
      v10 = buffer;
      goto LABEL_22;
    }
    v23 = vidConfig.displayHeight;
    v24 = (int)v6 * vidConfig.displayWidth;
    do
    {
      R_DownsamplePixelData(v20, v9, 1, v6, v21, v22);
      v21 += v24;
      v22 += (int)v6 * (int)v9;
      --v23;
    }
    while ( v23 );
    goto LABEL_19;
  }
  if ( (int)vidConfig.displayWidth < (int)v9 )
  {
    v25 = vidConfig.displayHeight - 1;
    v26 = &v19[(int)v6 * vidConfig.displayWidth * (vidConfig.displayHeight - 1)];
    v27 = &v19[(int)v6 * (int)v9 * (vidConfig.displayHeight - 1)];
    if ( (signed int)(vidConfig.displayHeight - 1) < 0 )
    {
LABEL_20:
      v5 = height;
      goto LABEL_21;
    }
    v28 = (int)v6 * vidConfig.displayWidth;
    do
    {
      R_UpsamplePixelData(v20, v9, 1, v6, v26, v27);
      v26 -= v28;
      v27 -= (int)v6 * (int)v9;
      --v25;
    }
    while ( v25 >= 0 );
LABEL_19:
    v18 = v36;
    v19 = v33;
    goto LABEL_20;
  }
LABEL_22:
  if ( v18 <= v5 )
  {
    if ( v18 < v5 )
    {
      v30 = v9 - 1;
      for ( i = &v19[(int)v6 * ((int)v9 - 1)]; v30 >= 0; --v30 )
      {
        R_UpsamplePixelData(v18, v5, v9, v6, i, i);
        i -= v6;
      }
    }
  }
  else if ( (int)v9 > 0 )
  {
    v29 = v9;
    do
    {
      R_DownsamplePixelData(v18, v5, v9, v6, v19, v19);
      v19 += v6;
      --v29;
    }
    while ( v29 );
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
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  unsigned __int8 *v14; 
  unsigned __int8 *v15; 
  int v17; 

  if ( newSize <= oldSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_data.cpp", 139, ASSERT_TYPE_ASSERT, "(newSize > oldSize)", (const char *)&queryFormat, "newSize > oldSize") )
    __debugbreak();
  v10 = oldSize + newSize;
  v11 = bytesPerPixel * stride;
  v12 = newSize - 1;
  v13 = newSize - oldSize;
  v14 = &src[v11 * (oldSize - 1)];
  v15 = &dst[v11 * (newSize - 1)];
  v14[v11] = *v14;
  v14[v11 + 1] = v14[1];
  v14[v11 + 2] = v14[2];
  if ( newSize - 1 >= 0 )
  {
    _XMM5 = 0i64;
    v17 = 2 * oldSize;
    do
    {
      if ( v14 < src )
      {
        _mm_cvtepi32_ps((__m128i)((v10 + v13) * (unsigned int)*src));
        __asm { vroundss xmm1, xmm5, xmm3, 1 }
        *v15 = (int)*(float *)&_XMM1;
        _mm_cvtepi32_ps((__m128i)((v10 + v13) * (unsigned int)src[1]));
        __asm { vroundss xmm1, xmm5, xmm3, 1 }
        v15[1] = (int)*(float *)&_XMM1;
        _mm_cvtepi32_ps((__m128i)((v10 + v13) * (unsigned int)src[2]));
      }
      else
      {
        __asm { vroundss xmm1, xmm5, xmm3, 1 }
        *v15 = (int)*(float *)&_XMM1;
        __asm { vroundss xmm1, xmm5, xmm3, 1 }
        v15[1] = (int)*(float *)&_XMM1;
      }
      __asm { vroundss xmm1, xmm5, xmm3, 1 }
      v15[2] = (int)*(float *)&_XMM1;
      v10 += v17;
      v15 -= v11;
      v13 -= v17;
      if ( v13 < 0 )
      {
        v10 -= 2 * newSize;
        v13 += 2 * newSize;
        v14 -= v11;
      }
      --v12;
    }
    while ( v12 >= 0 );
  }
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

