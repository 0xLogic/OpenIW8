/*
==============
R_ReflectionProbeCompression_GetCompressedImage
==============
*/

const GfxImage *__fastcall R_ReflectionProbeCompression_GetCompressedImage()
{
  return ?R_ReflectionProbeCompression_GetCompressedImage@@YAPEBUGfxImage@@XZ();
}

/*
==============
R_ReflectionProbeCompression_Shutdown
==============
*/

void R_ReflectionProbeCompression_Shutdown(void)
{
  ?R_ReflectionProbeCompression_Shutdown@@YAXXZ();
}

/*
==============
ReflectionProbeCompressionMaxResolution
==============
*/

int __fastcall ReflectionProbeCompressionMaxResolution()
{
  return ?ReflectionProbeCompressionMaxResolution@@YAHXZ();
}

/*
==============
R_ReflectionProbeCompression_MainMipLevelCount_Octahedron
==============
*/

unsigned int __fastcall R_ReflectionProbeCompression_MainMipLevelCount_Octahedron()
{
  return ?R_ReflectionProbeCompression_MainMipLevelCount_Octahedron@@YAIXZ();
}

/*
==============
RB_ReflectionProbeCompression_CopyResultToCubemapArrayTexture
==============
*/

void __fastcall RB_ReflectionProbeCompression_CopyResultToCubemapArrayTexture(ComputeCmdBufState *computeState, const GfxImage *dstCubemapArrayImage, const unsigned int dstElementIndex)
{
  ?RB_ReflectionProbeCompression_CopyResultToCubemapArrayTexture@@YAXPEAUComputeCmdBufState@@PEBUGfxImage@@I@Z(computeState, dstCubemapArrayImage, dstElementIndex);
}

/*
==============
R_ReflectionProbeCompression_CompressImage_Octahedron
==============
*/

bool __fastcall R_ReflectionProbeCompression_CompressImage_Octahedron(ComputeCmdBufState *state, const GfxShaderTextureView *const *mipMapViews, const unsigned int mipCount, const bool highQuality, const bool asyncCompress)
{
  return ?R_ReflectionProbeCompression_CompressImage_Octahedron@@YA_NPEAUComputeCmdBufState@@PEBQEBUGfxShaderTextureView@@I_N2@Z(state, mipMapViews, mipCount, highQuality, asyncCompress);
}

/*
==============
ReflectionProbeCompressionMaxResolution_Octahedron
==============
*/

int __fastcall ReflectionProbeCompressionMaxResolution_Octahedron()
{
  return ?ReflectionProbeCompressionMaxResolution_Octahedron@@YAHXZ();
}

/*
==============
R_ReflectionProbeCompression_Startup
==============
*/

void R_ReflectionProbeCompression_Startup(void)
{
  ?R_ReflectionProbeCompression_Startup@@YAXXZ();
}

/*
==============
R_ReflectionProbeCompression_ExecuteComputeCmds
==============
*/

void __fastcall R_ReflectionProbeCompression_ExecuteComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  ?R_ReflectionProbeCompression_ExecuteComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@@Z(cmdBufState, list, type, header);
}

/*
==============
R_ReflectionProbeCompression_ExecuteComputeCmd
==============
*/

void __fastcall R_ReflectionProbeCompression_ExecuteComputeCmd(ComputeCmdBufState *cmdBufState, const ReflectionProbeCompressionComputeCmd *cmd)
{
  ?R_ReflectionProbeCompression_ExecuteComputeCmd@@YAXPEAUComputeCmdBufState@@PEBUReflectionProbeCompressionComputeCmd@@@Z(cmdBufState, cmd);
}

/*
==============
RB_ReflectionProbeCompression_CopyResult_Octahedron
==============
*/

void __fastcall RB_ReflectionProbeCompression_CopyResult_Octahedron(ComputeCmdBufState *computeState, const GfxImage *dstImage, const unsigned int dstElementIndex)
{
  ?RB_ReflectionProbeCompression_CopyResult_Octahedron@@YAXPEAUComputeCmdBufState@@PEBUGfxImage@@I@Z(computeState, dstImage, dstElementIndex);
}

/*
==============
ReflectionProbeCompressionMainMipLevels
==============
*/

unsigned int __fastcall ReflectionProbeCompressionMainMipLevels()
{
  return ?ReflectionProbeCompressionMainMipLevels@@YAIXZ();
}

/*
==============
R_ReflectionProbeCompression_AddComputeCmd
==============
*/

bool __fastcall R_ReflectionProbeCompression_AddComputeCmd(ComputeCmdList *list, ReflectionProbeCompressionComputeCmd *inCmd)
{
  return ?R_ReflectionProbeCompression_AddComputeCmd@@YA_NPEAUComputeCmdList@@PEAUReflectionProbeCompressionComputeCmd@@@Z(list, inCmd);
}

/*
==============
R_ReflectionProbeCompression_CompressImage
==============
*/

bool __fastcall R_ReflectionProbeCompression_CompressImage(ComputeCmdBufState *state, const GfxShaderTextureView *const *mipMapViews, const unsigned int mipCount, const bool highQuality, const bool asyncCompress)
{
  return ?R_ReflectionProbeCompression_CompressImage@@YA_NPEAUComputeCmdBufState@@PEBQEBUGfxShaderTextureView@@I_N2@Z(state, mipMapViews, mipCount, highQuality, asyncCompress);
}

/*
==============
R_ReflectionProbeCompression_GetCompressedImage_Octahedron
==============
*/

const GfxImage *__fastcall R_ReflectionProbeCompression_GetCompressedImage_Octahedron()
{
  return ?R_ReflectionProbeCompression_GetCompressedImage_Octahedron@@YAPEBUGfxImage@@XZ();
}

/*
==============
RB_ReflectionProbeCompression_CopyResult
==============
*/
void RB_ReflectionProbeCompression_CopyResult(ComputeCmdBufState *computeState, const GfxImage *dstCubemapArrayImage, const unsigned int dstElementIndex, const GfxImage *srcCubemapImage, const unsigned int faceCount)
{
  ComputeCmdBufState *v7; 
  const GfxTexture *v8; 
  int levelCount; 
  const GfxTexture *v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  ID3D12Resource *basemap; 
  int v22; 
  int v23; 
  const GfxTexture *Resident; 

  v7 = computeState;
  R_ProfBeginNamedEvent(computeState, "CopyCompressedReflectionProbe");
  Resident = R_Texture_GetResident(srcCubemapImage->textureId);
  v8 = R_Texture_Get(v7->data, dstCubemapArrayImage->textureId);
  levelCount = dstCubemapArrayImage->levelCount;
  v10 = v8;
  v11 = srcCubemapImage->levelCount;
  if ( levelCount != v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_compression.cpp", 254, ASSERT_TYPE_ASSERT, "( dstMipLevels ) == ( srcMipLevels )", "%s == %s\n\t%u, %u", "dstMipLevels", "srcMipLevels", dstCubemapArrayImage->levelCount, srcCubemapImage->levelCount) )
    __debugbreak();
  R_HW_AddResourceTransition(v7, v10, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v7);
  v12 = 0;
  if ( v11 )
  {
    v13 = faceCount;
    do
    {
      if ( v13 )
      {
        v14 = v13;
        v15 = v12;
        v16 = v12 + v13 * dstElementIndex * levelCount;
        do
        {
          basemap = v10->basemap;
          v17 = (__int64)Resident->basemap;
          v22 = 0;
          v19 = 0;
          v18 = v17;
          v23 = v16;
          v20 = v15;
          ((void (__fastcall *)(GfxDevice *, ID3D12Resource **, _QWORD, _QWORD, _DWORD, __int64 *, _QWORD, _DWORD))g_dx.immediateContext->m_pFunction[27].Release)(g_dx.immediateContext, &basemap, 0i64, 0i64, 0, &v18, 0i64, 0);
          v16 += levelCount;
          v15 += v11;
          --v14;
        }
        while ( v14 );
        v13 = faceCount;
      }
      ++v12;
    }
    while ( v12 < v11 );
    v7 = computeState;
  }
  R_HW_AddResourceTransition(v7, v10, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v7);
  R_ProfEndNamedEvent(v7);
}

/*
==============
RB_ReflectionProbeCompression_CopyResultToCubemapArrayTexture
==============
*/
void RB_ReflectionProbeCompression_CopyResultToCubemapArrayTexture(ComputeCmdBufState *computeState, const GfxImage *dstCubemapArrayImage, const unsigned int dstElementIndex)
{
  RB_ReflectionProbeCompression_CopyResult(computeState, dstCubemapArrayImage, dstElementIndex, s_reflectionProbeCompressionStaticData.m_compressedImage.m_image, 6u);
}

/*
==============
RB_ReflectionProbeCompression_CopyResult_Octahedron
==============
*/
void RB_ReflectionProbeCompression_CopyResult_Octahedron(ComputeCmdBufState *computeState, const GfxImage *dstImage, const unsigned int dstElementIndex)
{
  RB_ReflectionProbeCompression_CopyResult(computeState, dstImage, dstElementIndex, s_reflectionProbeCompressionStaticData.m_compressedImageOctahedron.m_image, 1u);
}

/*
==============
R_ReflectionProbeCompression_AddComputeCmd
==============
*/
bool R_ReflectionProbeCompression_AddComputeCmd(ComputeCmdList *list, ReflectionProbeCompressionComputeCmd *inCmd)
{
  double *v4; 

  v4 = (double *)R_AllocComputeCmdDataAligned(list, 24, 8u);
  if ( v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)&inCmd->src2DArrayView;
    v4[2] = *(double *)&inCmd->imageSize;
    LOBYTE(v4) = R_AddComputeCmd(list, COMPUTECMD_REFLECTION_PROBE_COMPRESS, v4);
  }
  return (char)v4;
}

/*
==============
R_ReflectionProbeCompression_CompressImage
==============
*/
char R_ReflectionProbeCompression_CompressImage(ComputeCmdBufState *state, const GfxShaderTextureView *const *mipMapViews, const unsigned int mipCount, const bool highQuality, const bool asyncCompress)
{
  unsigned int v8; 
  __int64 v9; 
  unsigned int v10; 
  ComputeCmdList *cmdList; 
  double *v12; 
  double v13; 
  ReflectionProbeCompressionComputeCmd cmd; 

  v8 = 1 << (Dvar_GetInt_Internal_DebugName(DVARINT_r_reflectionProbeCompressionMaxMipLevels, "r_reflectionProbeCompressionMaxMipLevels") - 1);
  v9 = 0i64;
  v10 = ReflectionProbeCompressionMainMipLevels();
  if ( v10 )
  {
    do
    {
      cmd.imageSize = v8;
      cmd.highQuality = highQuality;
      cmd.numSlices = 6;
      cmd.dst2DArrayRWView = &s_reflectionProbeCompressionStaticData.m_compressedImage.m_imageMipRWView[v9];
      cmd.src2DArrayView = *mipMapViews;
      if ( asyncCompress )
      {
        cmdList = frontEndDataOut->compute.cmdList;
        v12 = (double *)R_AllocComputeCmdDataAligned(cmdList, 24, 8u);
        if ( !v12 )
          return 0;
        v13 = *(double *)&cmd.imageSize;
        *(_OWORD *)v12 = *(_OWORD *)&cmd.src2DArrayView;
        v12[2] = v13;
        if ( !R_AddComputeCmd(cmdList, COMPUTECMD_REFLECTION_PROBE_COMPRESS, v12) )
          return 0;
      }
      else
      {
        R_ReflectionProbeCompression_ExecuteGfxComputeCmd(state, &cmd);
      }
      v8 >>= 1;
      v9 = (unsigned int)(v9 + 1);
      ++mipMapViews;
    }
    while ( (unsigned int)v9 < v10 );
  }
  return 1;
}

/*
==============
R_ReflectionProbeCompression_CompressImage_Octahedron
==============
*/
char R_ReflectionProbeCompression_CompressImage_Octahedron(ComputeCmdBufState *state, const GfxShaderTextureView *const *mipMapViews, const unsigned int mipCount, const bool highQuality, const bool asyncCompress)
{
  unsigned int v9; 
  int Int_Internal_DebugName; 
  int v11; 
  __int64 i; 
  ComputeCmdList *cmdList; 
  double *v14; 
  double v15; 
  __int64 v17; 
  __int64 v18; 
  ReflectionProbeCompressionComputeCmd cmd; 

  v9 = 2 * (1 << (Dvar_GetInt_Internal_DebugName(DVARINT_r_reflectionProbeCompressionMaxMipLevels, "r_reflectionProbeCompressionMaxMipLevels") - 1));
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_r_reflectionProbeCompressionMaxMipLevels, "r_reflectionProbeCompressionMaxMipLevels");
  v11 = Int_Internal_DebugName;
  if ( Int_Internal_DebugName < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,int>(int)", "unsigned", (unsigned int)Int_Internal_DebugName, "signed", Int_Internal_DebugName) )
    __debugbreak();
  if ( v11 - 2 != mipCount )
  {
    LODWORD(v18) = mipCount;
    LODWORD(v17) = ReflectionProbeCompressionMainMipLevels();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_compression.cpp", 212, ASSERT_TYPE_ASSERT, "( R_ReflectionProbeCompression_MainMipLevelCount_Octahedron() ) == ( mipCount )", "%s == %s\n\t%u, %u", "R_ReflectionProbeCompression_MainMipLevelCount_Octahedron()", "mipCount", v17, v18) )
      __debugbreak();
  }
  for ( i = 0i64; (unsigned int)i < mipCount; ++mipMapViews )
  {
    cmd.imageSize = v9;
    cmd.highQuality = highQuality;
    cmd.numSlices = 1;
    cmd.dst2DArrayRWView = &s_reflectionProbeCompressionStaticData.m_compressedImageOctahedron.m_imageMipRWView[i];
    cmd.src2DArrayView = *mipMapViews;
    if ( asyncCompress )
    {
      cmdList = frontEndDataOut->compute.cmdList;
      v14 = (double *)R_AllocComputeCmdDataAligned(cmdList, 24, 8u);
      if ( !v14 )
        return 0;
      v15 = *(double *)&cmd.imageSize;
      *(_OWORD *)v14 = *(_OWORD *)&cmd.src2DArrayView;
      v14[2] = v15;
      if ( !R_AddComputeCmd(cmdList, COMPUTECMD_REFLECTION_PROBE_COMPRESS, v14) )
        return 0;
    }
    else
    {
      R_ReflectionProbeCompression_ExecuteGfxComputeCmd(state, &cmd);
    }
    v9 >>= 1;
    i = (unsigned int)(i + 1);
  }
  return 1;
}

/*
==============
R_ReflectionProbeCompression_ExecuteComputeCmd
==============
*/
void R_ReflectionProbeCompression_ExecuteComputeCmd(ComputeCmdBufState *cmdBufState, const ReflectionProbeCompressionComputeCmd *cmd)
{
  ComputeShader *ReflectionProbeCompression_ComputeShader; 
  float imageSize; 
  GfxShaderTextureView *views[2]; 
  float data[8]; 

  ReflectionProbeCompression_ComputeShader = rgp.ReflectionProbeCompression_ComputeShader;
  if ( cmd->highQuality )
    ReflectionProbeCompression_ComputeShader = rgp.ReflectionProbeCompressionHQ_ComputeShader;
  R_SetComputeShader(cmdBufState, ReflectionProbeCompression_ComputeShader);
  R_HW_AddResourceTransition(cmdBufState, cmd->dst2DArrayRWView, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(cmdBufState);
  views[0] = (GfxShaderTextureView *)cmd->src2DArrayView;
  R_SetComputeTextureViews(cmdBufState, 0, 1, (const GfxShaderTextureView *const *)views);
  views[0] = (GfxShaderTextureView *)cmd->dst2DArrayRWView;
  R_SetComputeTextureRWViews(cmdBufState, 0, 1, (const GfxShaderTextureRWView *const *)views);
  imageSize = (float)cmd->imageSize;
  data[0] = 1.0 / imageSize;
  R_UploadAndSetComputeConstants(cmdBufState, 0, data, 0x20u, NULL);
  R_Dispatch(cmdBufState, (cmd->imageSize + 7) >> 3, (cmd->imageSize + 7) >> 3, cmd->numSlices);
  R_HW_AddResourceTransition(cmdBufState, cmd->dst2DArrayRWView, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(cmdBufState);
}

/*
==============
R_ReflectionProbeCompression_ExecuteComputeCmds
==============
*/
void R_ReflectionProbeCompression_ExecuteComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  const GfxShaderTextureRWView **ComputeCmdData; 
  ComputeShader *ReflectionProbeCompression_ComputeShader; 
  const GfxShaderTextureRWView **v9; 
  float v10; 
  GfxShaderTextureView *views[2]; 
  float data[8]; 

  do
  {
    ComputeCmdData = (const GfxShaderTextureRWView **)R_GetComputeCmdData(list, header);
    ReflectionProbeCompression_ComputeShader = rgp.ReflectionProbeCompression_ComputeShader;
    v9 = ComputeCmdData;
    if ( *((_BYTE *)ComputeCmdData + 20) )
      ReflectionProbeCompression_ComputeShader = rgp.ReflectionProbeCompressionHQ_ComputeShader;
    R_SetComputeShader(cmdBufState, ReflectionProbeCompression_ComputeShader);
    R_HW_AddResourceTransition(cmdBufState, v9[1], 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(cmdBufState);
    views[0] = (GfxShaderTextureView *)*v9;
    R_SetComputeTextureViews(cmdBufState, 0, 1, (const GfxShaderTextureView *const *)views);
    views[0] = (GfxShaderTextureView *)v9[1];
    R_SetComputeTextureRWViews(cmdBufState, 0, 1, (const GfxShaderTextureRWView *const *)views);
    v10 = (float)*((unsigned int *)v9 + 4);
    data[0] = 1.0 / v10;
    R_UploadAndSetComputeConstants(cmdBufState, 0, data, 0x20u, NULL);
    R_Dispatch(cmdBufState, (unsigned int)(*((_DWORD *)v9 + 4) + 7) >> 3, (unsigned int)(*((_DWORD *)v9 + 4) + 7) >> 3, *((unsigned __int8 *)v9 + 21));
    R_HW_AddResourceTransition(cmdBufState, v9[1], 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(cmdBufState);
    header = R_NextComputeCmdOfSameType(list, header);
  }
  while ( header );
}

/*
==============
R_ReflectionProbeCompression_ExecuteGfxComputeCmd
==============
*/
void R_ReflectionProbeCompression_ExecuteGfxComputeCmd(ComputeCmdBufState *cmdBufState, const ReflectionProbeCompressionComputeCmd *cmd)
{
  ComputeShader *ReflectionProbeCompression_ComputeShader; 
  float imageSize; 
  GfxShaderTextureView *views[2]; 
  float data[8]; 

  R_ProfBeginNamedEvent(cmdBufState, "ReflectionProbeCompression");
  R_ComputeWaitForCompute(cmdBufState, PIPE_FLUSH_PARTIAL);
  ReflectionProbeCompression_ComputeShader = rgp.ReflectionProbeCompression_ComputeShader;
  if ( cmd->highQuality )
    ReflectionProbeCompression_ComputeShader = rgp.ReflectionProbeCompressionHQ_ComputeShader;
  R_SetComputeShader(cmdBufState, ReflectionProbeCompression_ComputeShader);
  views[0] = (GfxShaderTextureView *)cmd->src2DArrayView;
  R_SetComputeTextureViews(cmdBufState, 0, 1, (const GfxShaderTextureView *const *)views);
  views[0] = (GfxShaderTextureView *)cmd->dst2DArrayRWView;
  R_SetComputeTextureRWViews(cmdBufState, 0, 1, (const GfxShaderTextureRWView *const *)views);
  imageSize = (float)cmd->imageSize;
  data[0] = 1.0 / imageSize;
  R_UploadAndSetComputeConstants(cmdBufState, 0, data, 0x20u, NULL);
  R_Dispatch(cmdBufState, (cmd->imageSize + 7) >> 3, (cmd->imageSize + 7) >> 3, cmd->numSlices);
  R_ProfEndNamedEvent(cmdBufState);
}

/*
==============
R_ReflectionProbeCompression_GetCompressedImage
==============
*/
GfxImage *R_ReflectionProbeCompression_GetCompressedImage()
{
  return s_reflectionProbeCompressionStaticData.m_compressedImage.m_image;
}

/*
==============
R_ReflectionProbeCompression_GetCompressedImage_Octahedron
==============
*/
GfxImage *R_ReflectionProbeCompression_GetCompressedImage_Octahedron()
{
  return s_reflectionProbeCompressionStaticData.m_compressedImageOctahedron.m_image;
}

/*
==============
R_ReflectionProbeCompression_MainMipLevelCount_Octahedron
==============
*/

unsigned int __fastcall R_ReflectionProbeCompression_MainMipLevelCount_Octahedron()
{
  return ReflectionProbeCompressionMainMipLevels();
}

/*
==============
R_ReflectionProbeCompression_SetupImageViews
==============
*/
void R_ReflectionProbeCompression_SetupImageViews(GfxReflectionProbeCompressionImageData *imageData)
{
  GfxReflectionProbeCompressionImageData *v2; 
  unsigned int v3; 
  unsigned __int64 v4; 
  GfxShaderTextureView *m_imageMipView; 
  GfxShaderTextureRWView *m_imageMipRWView; 
  unsigned int freeSlot; 
  unsigned int *v8; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  int v10; 
  unsigned int v11; 
  unsigned int *v12; 
  GraphicsUnknown_Function_Table *v13; 
  unsigned int v14; 
  ID3D12Resource *resource; 
  int v17[2]; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  int v23[5]; 
  __int128 v24; 
  int v25; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  char v28[32]; 
  int v29; 

  v2 = imageData;
  v3 = 0;
  v14 = ReflectionProbeCompressionMainMipLevels();
  if ( v14 )
  {
    v4 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
    m_imageMipView = v2->m_imageMipView;
    m_imageMipRWView = v2->m_imageMipRWView;
    do
    {
      resource = R_Texture_GetResident(v2->m_image->textureId)->basemap;
      *(double *)&_XMM0 = ((double (__fastcall *)(ID3D12Resource *, char *))resource->m_pFunction[3].AddRef)(resource, v28);
      v23[0] = v29;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      v24 = _XMM0;
      v25 = 0;
      v23[1] = 5;
      v23[2] = v3;
      v23[3] = 0;
      v23[4] = 6;
      while ( 1 )
      {
        if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
          break;
        Sys_Sleep(0);
      }
      freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      if ( !g_descriptorPools.shaderViewPool.freeSlot )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
          __debugbreak();
        freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      }
      v8 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
      g_descriptorPools.shaderViewPool.freeSlot = *v8;
      *v8 = 0;
      ++g_descriptorPools.shaderViewPool.handle.used;
      if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
        __debugbreak();
      _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
      m_pFunction = g_dx.d3d12device->m_pFunction;
      v26 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot);
      ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, int *, unsigned __int64))m_pFunction[6].AddRef)(g_dx.d3d12device, resource, 0i64, v23, v26);
      v10 = v29;
      m_imageMipRWView->rwView = freeSlot;
      m_imageMipRWView->rwResource = resource;
      m_imageMipRWView->rwCounterResource = NULL;
      v22 = 0i64;
      v20 = 1i64;
      m_imageMipRWView->rwSubresourceToTransition = v3;
      v18 = 5768i64;
      v17[0] = v10;
      v17[1] = 5;
      v19 = v3;
      v21 = 6;
      while ( 1 )
      {
        if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
          break;
        Sys_Sleep(0);
      }
      v11 = g_descriptorPools.shaderViewPool.freeSlot;
      v2 = imageData;
      if ( !g_descriptorPools.shaderViewPool.freeSlot )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
          __debugbreak();
        v11 = g_descriptorPools.shaderViewPool.freeSlot;
      }
      v12 = &g_descriptorPools.shaderViewPool.nextSlot[v11];
      g_descriptorPools.shaderViewPool.freeSlot = *v12;
      *v12 = 0;
      ++g_descriptorPools.shaderViewPool.handle.used;
      if ( v4 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
      }
      _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
      v13 = g_dx.d3d12device->m_pFunction;
      v27 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (v11 + g_descriptorPools.shaderViewPool.handle.startSlot);
      v13[6].QueryInterface(g_dx.d3d12device, (const _GUID *)resource, (void **)v17);
      *(&m_imageMipView->view + 1) = 0;
      m_imageMipView->view = v11;
      m_imageMipView->resource = resource;
      PIXSetDebugName(resource, imageData->m_image->name);
      ++v3;
      ++m_imageMipRWView;
      ++m_imageMipView;
    }
    while ( v3 < v14 );
  }
}

/*
==============
R_ReflectionProbeCompression_SetupImageViews_Octahedron
==============
*/
void R_ReflectionProbeCompression_SetupImageViews_Octahedron(GfxReflectionProbeCompressionImageData *imageData)
{
  unsigned int v2; 
  GfxReflectionProbeCompressionImageData *v3; 
  unsigned __int64 v4; 
  GfxShaderTextureRWView *m_imageMipRWView; 
  GfxShaderTextureView *m_imageMipView; 
  unsigned int freeSlot; 
  unsigned int *v8; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  int v10; 
  unsigned int v11; 
  unsigned int *v12; 
  GraphicsUnknown_Function_Table *v13; 
  unsigned int levelCount; 
  ID3D12Resource *basemap; 
  int v17[2]; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  int v23[5]; 
  __int128 v24; 
  int v25; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  char v28[32]; 
  int v29; 

  v2 = 0;
  v3 = imageData;
  levelCount = imageData->m_image->levelCount;
  if ( imageData->m_image->levelCount )
  {
    v4 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
    m_imageMipRWView = imageData->m_imageMipRWView;
    m_imageMipView = imageData->m_imageMipView;
    do
    {
      basemap = R_Texture_GetResident(v3->m_image->textureId)->basemap;
      *(double *)&_XMM0 = ((double (__fastcall *)(ID3D12Resource *, char *))basemap->m_pFunction[3].AddRef)(basemap, v28);
      v23[0] = v29;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      v24 = _XMM0;
      v25 = 0;
      v23[1] = 5;
      v23[2] = v2;
      v23[3] = 0;
      v23[4] = 1;
      while ( 1 )
      {
        if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
          break;
        Sys_Sleep(0);
      }
      freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      if ( !g_descriptorPools.shaderViewPool.freeSlot )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
          __debugbreak();
        freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      }
      v8 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
      g_descriptorPools.shaderViewPool.freeSlot = *v8;
      *v8 = 0;
      ++g_descriptorPools.shaderViewPool.handle.used;
      if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
        __debugbreak();
      _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
      m_pFunction = g_dx.d3d12device->m_pFunction;
      v26 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot);
      ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, int *, unsigned __int64))m_pFunction[6].AddRef)(g_dx.d3d12device, basemap, 0i64, v23, v26);
      v10 = v29;
      m_imageMipRWView->rwView = freeSlot;
      m_imageMipRWView->rwResource = basemap;
      m_imageMipRWView->rwCounterResource = NULL;
      v22 = 0i64;
      v20 = 1i64;
      v21 = 1;
      m_imageMipRWView->rwSubresourceToTransition = v2;
      v18 = 5768i64;
      v17[0] = v10;
      v17[1] = 5;
      v19 = v2;
      while ( 1 )
      {
        if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
          break;
        Sys_Sleep(0);
      }
      v11 = g_descriptorPools.shaderViewPool.freeSlot;
      v3 = imageData;
      if ( !g_descriptorPools.shaderViewPool.freeSlot )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
          __debugbreak();
        v11 = g_descriptorPools.shaderViewPool.freeSlot;
      }
      v12 = &g_descriptorPools.shaderViewPool.nextSlot[v11];
      g_descriptorPools.shaderViewPool.freeSlot = *v12;
      *v12 = 0;
      ++g_descriptorPools.shaderViewPool.handle.used;
      if ( v4 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
      }
      _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
      v13 = g_dx.d3d12device->m_pFunction;
      v27 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (v11 + g_descriptorPools.shaderViewPool.handle.startSlot);
      v13[6].QueryInterface(g_dx.d3d12device, (const _GUID *)basemap, (void **)v17);
      *(&m_imageMipView->view + 1) = 0;
      m_imageMipView->view = v11;
      m_imageMipView->resource = basemap;
      PIXSetDebugName(basemap, imageData->m_image->name);
      ++v2;
      ++m_imageMipRWView;
      ++m_imageMipView;
    }
    while ( v2 < levelCount );
  }
}

/*
==============
R_ReflectionProbeCompression_Shutdown
==============
*/
void R_ReflectionProbeCompression_Shutdown(void)
{
  R_ReflectionProbeCompression_ShutdownImage(&s_reflectionProbeCompressionStaticData.m_compressedImage);
  R_ReflectionProbeCompression_ShutdownImage(&s_reflectionProbeCompressionStaticData.m_compressedImageOctahedron);
}

/*
==============
R_ReflectionProbeCompression_ShutdownImage
==============
*/
void R_ReflectionProbeCompression_ShutdownImage(GfxReflectionProbeCompressionImageData *imageData)
{
  GfxImage *m_image; 
  unsigned __int8 levelCount; 
  GfxShaderTextureRWView *m_imageMipRWView; 
  GfxShaderTextureView *m_imageMipView; 
  __int64 v6; 

  m_image = imageData->m_image;
  levelCount = imageData->m_image->levelCount;
  if ( levelCount )
  {
    m_imageMipRWView = imageData->m_imageMipRWView;
    m_imageMipView = imageData->m_imageMipView;
    v6 = levelCount;
    do
    {
      R_ReleaseShaderTextureView(m_imageMipView);
      R_ReleaseShaderTextureRWView(m_imageMipRWView);
      ++m_imageMipView;
      ++m_imageMipRWView;
      --v6;
    }
    while ( v6 );
    m_image = imageData->m_image;
  }
  if ( !m_image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_compression.cpp", 621, ASSERT_TYPE_ASSERT, "(imageData->m_image)", (const char *)&queryFormat, "imageData->m_image") )
    __debugbreak();
  Image_Release(imageData->m_image);
  imageData->m_image = NULL;
}

/*
==============
R_ReflectionProbeCompression_Startup
==============
*/

void __fastcall R_ReflectionProbeCompression_Startup(double _XMM0_8)
{
  __m256i v3; 
  __m256i v4; 
  Image_SetupParams params; 

  s_reflectionProbeCompressionStaticData.m_compressedImage.m_image = Image_AllocProg(IMAGE_PROG_COMPRESS_REFLECTION_PROBES, IMG_CATEGORY_RAW, TS_FUNCTION);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v4.m256i_u64[1] = _XMM0;
  v3.m256i_i32[2] = 1;
  *(__int64 *)((char *)&v3.m256i_i64[1] + 4) = 1i64;
  v4.m256i_i64[0] = 0i64;
  v4.m256i_i32[6] = -1;
  v3.m256i_i32[5] = 8421376;
  v3.m256i_i32[0] = (1 << (Dvar_GetInt_Internal_DebugName(DVARINT_r_reflectionProbeCompressionMaxMipLevels, "r_reflectionProbeCompressionMaxMipLevels") - 1)) / 4;
  v3.m256i_i32[1] = v3.m256i_i32[0];
  v3.m256i_i32[6] = 27;
  *(__m256i *)&params.width = v3;
  *(__m256i *)&params.customAllocFunc = v4;
  Image_Setup(s_reflectionProbeCompressionStaticData.m_compressedImage.m_image, &params);
  R_ReflectionProbeCompression_SetupImageViews(&s_reflectionProbeCompressionStaticData.m_compressedImage);
  s_reflectionProbeCompressionStaticData.m_compressedImageOctahedron.m_image = Image_AllocProg(IMAGE_PROG_COMPRESS_REFLECTION_PROBES_OCTAHEDRON, IMG_CATEGORY_RAW, TS_FUNCTION);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v4.m256i_u64[1] = _XMM0;
  v3.m256i_i32[2] = 1;
  *(__int64 *)((char *)&v3.m256i_i64[1] + 4) = 1i64;
  v4.m256i_i64[0] = 0i64;
  v4.m256i_i32[6] = -1;
  v3.m256i_i32[5] = 0x800000;
  v3.m256i_i32[6] = 27;
  v3.m256i_i32[0] = (2 << (Dvar_GetInt_Internal_DebugName(DVARINT_r_reflectionProbeCompressionMaxMipLevels, "r_reflectionProbeCompressionMaxMipLevels") - 1)) / 4;
  v3.m256i_i32[1] = v3.m256i_i32[0];
  *(__m256i *)&params.width = v3;
  *(__m256i *)&params.customAllocFunc = v4;
  params.maxLevelCount = ReflectionProbeCompressionMainMipLevels();
  Image_Setup(s_reflectionProbeCompressionStaticData.m_compressedImageOctahedron.m_image, &params);
  R_ReflectionProbeCompression_SetupImageViews_Octahedron(&s_reflectionProbeCompressionStaticData.m_compressedImageOctahedron);
}

/*
==============
ReflectionProbeCompressionMainMipLevels
==============
*/
__int64 ReflectionProbeCompressionMainMipLevels()
{
  int Int_Internal_DebugName; 
  int v1; 

  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_r_reflectionProbeCompressionMaxMipLevels, "r_reflectionProbeCompressionMaxMipLevels");
  v1 = Int_Internal_DebugName;
  if ( Int_Internal_DebugName < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,int>(int)", "unsigned", (unsigned int)Int_Internal_DebugName, "signed", Int_Internal_DebugName) )
    __debugbreak();
  return (unsigned int)(v1 - 2);
}

/*
==============
ReflectionProbeCompressionMaxResolution
==============
*/
__int64 ReflectionProbeCompressionMaxResolution()
{
  return (unsigned int)(1 << (Dvar_GetInt_Internal_DebugName(DVARINT_r_reflectionProbeCompressionMaxMipLevels, "r_reflectionProbeCompressionMaxMipLevels") - 1));
}

/*
==============
ReflectionProbeCompressionMaxResolution_Octahedron
==============
*/
__int64 ReflectionProbeCompressionMaxResolution_Octahedron()
{
  return (unsigned int)(2 << (Dvar_GetInt_Internal_DebugName(DVARINT_r_reflectionProbeCompressionMaxMipLevels, "r_reflectionProbeCompressionMaxMipLevels") - 1));
}

