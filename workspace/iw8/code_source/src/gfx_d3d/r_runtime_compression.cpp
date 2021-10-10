/*
==============
R_RuntimeCompression_Shutdown
==============
*/

void R_RuntimeCompression_Shutdown(void)
{
  ?R_RuntimeCompression_Shutdown@@YAXXZ();
}

/*
==============
R_AddMipGenComputeCmd
==============
*/

bool __fastcall R_AddMipGenComputeCmd(ComputeCmdList *list, const MipGenComputeCmd *inCmd)
{
  return ?R_AddMipGenComputeCmd@@YA_NPEAUComputeCmdList@@AEBUMipGenComputeCmd@@@Z(list, inCmd);
}

/*
==============
R_RuntimeCompression_GenerateMips
==============
*/

void __fastcall R_RuntimeCompression_GenerateMips(ComputeCmdBufState *cmdBufState, const GfxTexture *srcTexture, unsigned int mipCount, unsigned int width)
{
  ?R_RuntimeCompression_GenerateMips@@YAXPEAUComputeCmdBufState@@PEBUGfxTexture@@II@Z(cmdBufState, srcTexture, mipCount, width);
}

/*
==============
R_RuntimeCompression_Compress
==============
*/

void __fastcall R_RuntimeCompression_Compress(ComputeCmdBufState *cmdBufState, const RuntimeCompressionComputeCmd *input)
{
  ?R_RuntimeCompression_Compress@@YAXPEAUComputeCmdBufState@@PEBURuntimeCompressionComputeCmd@@@Z(cmdBufState, input);
}

/*
==============
R_RuntimeCompression_Init
==============
*/

void R_RuntimeCompression_Init(void)
{
  ?R_RuntimeCompression_Init@@YAXXZ();
}

/*
==============
R_AddCompressionComputeCmd
==============
*/

bool __fastcall R_AddCompressionComputeCmd(ComputeCmdList *list, const RuntimeCompressionComputeCmd *inCmd)
{
  return ?R_AddCompressionComputeCmd@@YA_NPEAUComputeCmdList@@AEBURuntimeCompressionComputeCmd@@@Z(list, inCmd);
}

/*
==============
R_RuntimeCompression_ExecuteMipgenComputeCmd
==============
*/

void __fastcall R_RuntimeCompression_ExecuteMipgenComputeCmd(ComputeCmdBufState *cmdBufState, const MipGenComputeCmd *cmd)
{
  ?R_RuntimeCompression_ExecuteMipgenComputeCmd@@YAXPEAUComputeCmdBufState@@PEBUMipGenComputeCmd@@@Z(cmdBufState, cmd);
}

/*
==============
R_RuntimeCompression_ExecuteCompressionComputeCmds
==============
*/

void __fastcall R_RuntimeCompression_ExecuteCompressionComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  ?R_RuntimeCompression_ExecuteCompressionComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@@Z(cmdBufState, list, type, header);
}

/*
==============
R_RuntimeCompression_ExecuteMipgenComputeCmds
==============
*/

void __fastcall R_RuntimeCompression_ExecuteMipgenComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  ?R_RuntimeCompression_ExecuteMipgenComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@@Z(cmdBufState, list, type, header);
}

/*
==============
R_RuntimeCompression_ExecuteCompressionComputeCmd
==============
*/

void __fastcall R_RuntimeCompression_ExecuteCompressionComputeCmd(ComputeCmdBufState *cmdBufState, const RuntimeCompressionComputeCmd *cmd)
{
  ?R_RuntimeCompression_ExecuteCompressionComputeCmd@@YAXPEAUComputeCmdBufState@@PEBURuntimeCompressionComputeCmd@@@Z(cmdBufState, cmd);
}

/*
==============
R_AddCompressionComputeCmd
==============
*/
bool R_AddCompressionComputeCmd(ComputeCmdList *list, const RuntimeCompressionComputeCmd *inCmd)
{
  __m256i *v4; 

  v4 = (__m256i *)R_AllocComputeCmdData(list, 48);
  if ( v4 )
  {
    *v4 = *(__m256i *)&inCmd->srcTexture;
    *(_OWORD *)v4[1].m256i_i8 = *(_OWORD *)&inCmd->dstArraySlice;
    LOBYTE(v4) = R_AddComputeCmd(list, COMPUTECMD_COMPRESS_TEXTURE, v4);
  }
  return (char)v4;
}

/*
==============
R_AddMipGenComputeCmd
==============
*/
bool R_AddMipGenComputeCmd(ComputeCmdList *list, const MipGenComputeCmd *inCmd)
{
  MipGenComputeCmd *v4; 

  v4 = (MipGenComputeCmd *)R_AllocComputeCmdData(list, 16);
  if ( v4 )
  {
    *v4 = *inCmd;
    LOBYTE(v4) = R_AddComputeCmd(list, COMPUTECMD_GENERATE_MIPS, v4);
  }
  return (char)v4;
}

/*
==============
R_RuntimeCompression_Compress
==============
*/
void R_RuntimeCompression_Compress(ComputeCmdBufState *cmdBufState, const RuntimeCompressionComputeCmd *input)
{
  unsigned int LevelCount; 
  unsigned int v5; 
  unsigned int width; 
  GfxShaderTextureRWView *v7; 
  GfxShaderTextureView *v8; 
  const CompressorConfig *v9; 
  bool compressAllMips; 
  bool v11; 
  unsigned int numMips; 
  unsigned int numIntermediateMips; 
  const ComputeShader **compressTwoMipsShader; 
  __int64 v15; 
  unsigned int v16; 
  float v17; 
  unsigned int v18; 
  GfxShaderTextureRWView *v19; 
  GfxShaderTextureView *v20; 
  GfxShaderTextureView *v21; 
  GfxShaderTextureRWView *views; 
  GfxShaderTextureRWView *v23; 
  float data[8]; 
  GfxShaderTextureRWView v25; 
  GfxTexture outIntermediateTexture; 
  GfxTexture outIntermediate2x2Texture; 
  GfxTexture outIntermediate1x1Texture; 
  GfxShaderTextureRWView *v29[5]; 
  GfxShaderTextureRWView outRWView[12]; 
  GfxShaderTextureView outView[12]; 
  __int64 v32; 

  if ( input->width <= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 543, ASSERT_TYPE_ASSERT, "(input->width > 16)", (const char *)&queryFormat, "input->width > 16") )
    __debugbreak();
  if ( input->width > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 544, ASSERT_TYPE_ASSERT, "(input->width <= MAX_COMPRESSED_TEXTURE_WIDTH)", (const char *)&queryFormat, "input->width <= MAX_COMPRESSED_TEXTURE_WIDTH") )
    __debugbreak();
  LevelCount = R_Texture_GetLevelCount(input->srcTexture);
  v5 = R_Texture_GetLevelCount(input->dstTextureArray);
  if ( input->compressAllMips )
  {
    width = input->width;
    if ( !width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
      __debugbreak();
    if ( LevelCount != 32 - __lzcnt(width) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 549, ASSERT_TYPE_ASSERT, "(!input->compressAllMips || ( srcMipCount == I_log2Floor( input->width ) + 1 ))", (const char *)&queryFormat, "!input->compressAllMips || ( srcMipCount == I_log2Floor( input->width ) + 1 )") )
      __debugbreak();
    if ( input->compressAllMips && v5 != LevelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 550, ASSERT_TYPE_ASSERT, "(!input->compressAllMips || ( dstMipCount == srcMipCount ))", (const char *)&queryFormat, "!input->compressAllMips || ( dstMipCount == srcMipCount )") )
      __debugbreak();
  }
  v7 = outRWView;
  do
    R_AssignNullShaderTextureRWView(v7++);
  while ( v7 != (GfxShaderTextureRWView *)outView );
  v8 = outView;
  do
    R_AssignNullShaderTextureView(v8++);
  while ( v8 != (GfxShaderTextureView *)&v32 );
  v9 = &s_compressorConfigs[input->format];
  compressAllMips = input->compressAllMips;
  v11 = v9->compressTwoMips && compressAllMips;
  numMips = 1;
  if ( compressAllMips )
    numMips = LevelCount;
  if ( compressAllMips )
    numIntermediateMips = v5 - 2;
  else
    numIntermediateMips = 1;
  R_RuntimeCompression_CreateSourceMipViews(numMips, input->srcTexture, (GfxShaderTextureView (*)[12])outView);
  R_RuntimeCompression_CreateIntermediateTexturesAndMipUavs(input, v9, &outIntermediateTexture, &outIntermediate2x2Texture, &outIntermediate1x1Texture, (GfxShaderTextureRWView (*)[12])outRWView, numMips, numIntermediateMips);
  R_AssignNullShaderTextureRWView(&v25);
  if ( v11 )
    compressTwoMipsShader = (const ComputeShader **)v9->compressTwoMipsShader;
  else
    compressTwoMipsShader = (const ComputeShader **)v9->compressOneMipShader;
  R_SetComputeShader(cmdBufState, *compressTwoMipsShader);
  v15 = 0i64;
  if ( numIntermediateMips )
  {
    while ( 1 )
    {
      v16 = input->width >> v15;
      if ( v16 == 16 && v9->hasTailMipShader )
        break;
      if ( v11 && v16 < 0x200 )
      {
        v11 = 0;
        R_SetComputeShader(cmdBufState, *(const ComputeShader **)v9->compressOneMipShader);
      }
      v17 = (float)v16;
      data[4] = *(float *)&input->dstArraySlice;
      data[0] = 1.0 / v17;
      R_UploadAndSetComputeConstants(cmdBufState, 0, data, 0x20u, NULL);
      views = &outRWView[v15];
      if ( v11 )
        v23 = &outRWView[(unsigned int)(v15 + 1)];
      else
        v23 = &v25;
      R_SetComputeTextureRWViews(cmdBufState, 0, 2, (const GfxShaderTextureRWView *const *)&views);
      v21 = &outView[(unsigned int)v15];
      R_SetComputeTextureViews(cmdBufState, 0, 1, (const GfxShaderTextureView *const *)&v21);
      v18 = v16 >> 2 >> (v11 + 3);
      if ( !v18 )
        v18 = 1;
      R_Dispatch(cmdBufState, v18, v18, 1u);
      v15 = v11 + 1 + (unsigned int)v15;
      if ( (unsigned int)v15 >= numIntermediateMips )
        goto LABEL_48;
    }
    v29[0] = &outRWView[v15];
    v29[1] = &outRWView[(unsigned int)(v15 + 1)];
    v29[2] = &outRWView[(unsigned int)(v15 + 2)];
    v29[3] = &outRWView[(unsigned int)(v15 + 3)];
    v29[4] = &outRWView[(unsigned int)(v15 + 4)];
    R_SetComputeTextureRWViews(cmdBufState, 0, 5, (const GfxShaderTextureRWView *const *)v29);
    v21 = &outView[(unsigned int)v15];
    R_SetComputeTextureViews(cmdBufState, 0, 1, (const GfxShaderTextureView *const *)&v21);
    R_SetComputeShader(cmdBufState, *(const ComputeShader **)v9->compressTailMipsShader);
    R_Dispatch(cmdBufState, 1u, 1u, 1u);
  }
LABEL_48:
  v19 = outRWView;
  do
    R_ReleaseShaderTextureRWView(v19++);
  while ( v19 != (GfxShaderTextureRWView *)outView );
  v20 = outView;
  do
    R_ReleaseShaderTextureView(v20++);
  while ( v20 != (GfxShaderTextureView *)&v32 );
  R_Texture_DestroyResidentInPlace(&outIntermediateTexture);
  R_Texture_DestroyResidentInPlace(&outIntermediate2x2Texture);
  R_Texture_DestroyResidentInPlace(&outIntermediate1x1Texture);
}

/*
==============
R_RuntimeCompression_CreateIntermediateTexturesAndMipUavs
==============
*/
void R_RuntimeCompression_CreateIntermediateTexturesAndMipUavs(const RuntimeCompressionComputeCmd *input, const CompressorConfig *config, GfxTexture *outIntermediateTexture, GfxTexture *outIntermediate2x2Texture, GfxTexture *outIntermediate1x1Texture, GfxShaderTextureRWView (*outUavs)[12], unsigned int numMips, unsigned int numIntermediateMips)
{
  GfxShaderTextureRWView (*v10)[12]; 
  unsigned int v12; 
  const RuntimeCompressionComputeCmd *v13; 
  const GfxTexture *Null; 
  __int128 v15; 
  unsigned int width; 
  __int64 dstArraySliceCount; 
  unsigned int v19; 
  HRESULT v20; 
  const char *v21; 
  unsigned int v22; 
  GfxTexture *v24; 
  unsigned __int64 v25; 
  ID3D12Resource *basemap; 
  unsigned int freeSlot; 
  unsigned int *v28; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  __int64 v30; 
  unsigned int v31; 
  unsigned int v32; 
  HRESULT v34; 
  const char *v35; 
  unsigned __int64 v36; 
  HRESULT v37; 
  const char *v38; 
  struct XGTextureAddressComputer *v39; 
  __int64 v40; 
  ID3D12Resource **p_basemap; 
  __int64 v42; 
  HRESULT v43; 
  const char *v44; 
  struct XGTextureAddressComputer *v45; 
  ID3D12Resource **v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  struct XGTextureAddressComputer *v53; 
  unsigned int v54; 
  ID3D12DeviceChild *resource; 
  GfxTexture *v56; 
  const CompressorConfig *v57; 
  ID3D12DeviceChild *v58; 
  ID3D12DeviceChild *v59; 
  D3D12_UNORDERED_ACCESS_VIEW_DESC viewDesc; 
  unsigned int v61; 
  const RuntimeCompressionComputeCmd *v62; 
  GfxShaderTextureRWView (*v63)[12]; 
  GfxTexture *v64; 
  GfxTexture *v65; 
  unsigned __int64 v66; 
  __m256i v67; 
  __int128 v68; 
  double v69; 
  struct XG_TEXTURE2D_DESC v70; 
  __m256i v71; 
  __int128 v72; 
  double v73; 

  v10 = outUavs;
  v12 = numMips;
  v13 = input;
  v65 = outIntermediate1x1Texture;
  v63 = outUavs;
  v64 = outIntermediate2x2Texture;
  v56 = outIntermediateTexture;
  v57 = config;
  v62 = input;
  v54 = numMips;
  *outIntermediateTexture = *R_Texture_GetNull();
  *outIntermediate2x2Texture = *R_Texture_GetNull();
  Null = R_Texture_GetNull();
  *(__m256i *)&outIntermediate1x1Texture->basemap = *(__m256i *)&Null->basemap;
  v15 = *(_OWORD *)&Null->shaderRWView.rwCounterResource;
  v67.m256i_i32[0] = 3;
  *(_OWORD *)&outIntermediate1x1Texture->shaderRWView.rwCounterResource = v15;
  width = v13->width;
  dstArraySliceCount = v13->dstArraySliceCount;
  *(__int64 *)((char *)v67.m256i_i64 + 4) = 0i64;
  v67.m256i_i32[3] = 0;
  v69 = 0.0;
  v67.m256i_i64[2] = (unsigned __int64)width >> 2;
  v67.m256i_i32[6] = width >> 2;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v68 = _XMM0;
  if ( (unsigned int)dstArraySliceCount > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)dstArraySliceCount, "unsigned", dstArraySliceCount) )
    __debugbreak();
  v19 = numIntermediateMips;
  v67.m256i_i16[14] = dstArraySliceCount;
  if ( numIntermediateMips > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)numIntermediateMips, "unsigned", numIntermediateMips) )
    __debugbreak();
  v67.m256i_i16[15] = numIntermediateMips;
  LODWORD(v68) = R_D3D_GetDXGIFormatForPixelFormat(g_R_RT_renderTargetFmts[(unsigned __int8)v57->intermediateFormat]);
  HIDWORD(v68) = 264;
  *(_QWORD *)((char *)&v68 + 4) = 1i64;
  LODWORD(v69) = 4;
  v20 = ((__int64 (__fastcall *)(ID3D12Device *, void *, __m256i *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v13->dstPixelMem, &v67, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v20 < 0 )
  {
    v21 = R_ErrorDescription(v20);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v21);
  }
  PIXSetDebugName(resource, "compression_texture");
  outIntermediateTexture->basemap = (ID3D12Resource *)resource;
  v22 = 0;
  viewDesc.Format = v68;
  viewDesc.Buffer.NumElements = v13->dstArraySliceCount;
  viewDesc.Buffer.FirstElement = 0i64;
  *((_DWORD *)&viewDesc.Texture3D + 7) = 0;
  viewDesc.ViewDimension = D3D12_UAV_DIMENSION_TEXTURE2DARRAY;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)(&viewDesc.Texture3D + 1) = _XMM0;
  if ( numIntermediateMips )
  {
    v24 = v56;
    v25 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
    do
    {
      viewDesc.Texture1D.MipSlice = v22;
      if ( v22 >= 0xC )
      {
        LODWORD(v49) = 12;
        LODWORD(v47) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 261, ASSERT_TYPE_ASSERT, "(unsigned)( mipIndex ) < (unsigned)( ( sizeof( *array_counter( outUavs ) ) + 0 ) )", "mipIndex doesn't index ARRAY_COUNT( outUavs )\n\t%i not in [0, %i)", v47, v49) )
          __debugbreak();
      }
      basemap = v24->basemap;
      while ( 1 )
      {
        if ( v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
          break;
        Sys_Sleep(0);
      }
      freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      v19 = numIntermediateMips;
      v24 = v56;
      if ( !g_descriptorPools.shaderViewPool.freeSlot )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
          __debugbreak();
        freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      }
      v28 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
      g_descriptorPools.shaderViewPool.freeSlot = *v28;
      *v28 = 0;
      ++g_descriptorPools.shaderViewPool.handle.used;
      if ( v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
        __debugbreak();
      _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
      v61 = freeSlot;
      m_pFunction = g_dx.d3d12device->m_pFunction;
      v66 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot);
      ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, D3D12_UNORDERED_ACCESS_VIEW_DESC *, unsigned __int64))m_pFunction[6].AddRef)(g_dx.d3d12device, basemap, 0i64, &viewDesc, v66);
      (*v10)[0].rwView = freeSlot;
      (*v10)[0].rwSubresourceToTransition = v22;
      (*v10)[0].rwResource = basemap;
      ++v22;
      (*v10)[0].rwCounterResource = NULL;
      v10 = (GfxShaderTextureRWView (*)[12])((char *)v10 + 24);
    }
    while ( v22 < numIntermediateMips );
    v12 = v54;
    v13 = v62;
    v10 = v63;
  }
  if ( v13->compressAllMips )
  {
    if ( v12 < 2 )
    {
      LODWORD(v52) = 2;
      LODWORD(v51) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 267, ASSERT_TYPE_ASSERT, "( numMips ) >= ( 2 )", "%s >= %s\n\t%u, %u", "numMips", "2", v51, v52) )
        __debugbreak();
    }
    v30 = v12 - 2;
    if ( v19 != (_DWORD)v30 )
    {
      LODWORD(v52) = v12 - 2;
      LODWORD(v51) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 268, ASSERT_TYPE_ASSERT, "( numIntermediateMips ) == ( numMips - 2 )", "%s == %s\n\t%u, %u", "numIntermediateMips", "numMips - 2", v51, v52) )
        __debugbreak();
    }
    v31 = v13->dstArraySliceCount;
    v32 = v13->width;
    *(_QWORD *)&v70.Width = 0i64;
    *(_QWORD *)&v70.ArraySize = 0i64;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v70.Format = v57->compressedPixelFormat;
    v70.Usage = XG_USAGE_DEFAULT;
    *(_OWORD *)&v70.CPUAccessFlags = _XMM0;
    *(_QWORD *)&v70.TileMode = 0i64;
    v70.Width = v32;
    v70.Height = v32;
    v70.ArraySize = v31;
    v70.MipLevels = v12;
    v70.BindFlags = 8;
    v70.SampleDesc = (XG_SAMPLE_DESC)1i64;
    v70.TileMode = XGComputeOptimalTileMode(XG_RESOURCE_DIMENSION_TEXTURE2D, v70.Format, v32, v32, v31, 1u, 8u, 0);
    v53 = NULL;
    v34 = XGCreateTexture2DComputer(&v70, &v53);
    if ( v34 < 0 )
    {
      v35 = R_ErrorDescription(v34);
      Sys_Error((const ObfuscateErrorText)&stru_14437C2A0, 284i64, v35);
    }
    v71 = v67;
    v73 = v69;
    v72 = v68;
    v71.m256i_i64[2] = 1i64;
    v71.m256i_i32[6] = 1;
    v71.m256i_i16[15] = 1;
    v36 = v53->GetMipLevelOffsetBytes(v53, 0, v30);
    v37 = ((__int64 (__fastcall *)(ID3D12Device *, char *, __m256i *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, (char *)v13->dstPixelMem + v36, &v71, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &v58);
    if ( v37 < 0 )
    {
      v38 = R_ErrorDescription(v37);
      Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v38);
    }
    PIXSetDebugName(v58, "compression_texture_2x2mip");
    v39 = v53;
    v40 = v12 - 1;
    p_basemap = &v64->basemap;
    v64->basemap = (ID3D12Resource *)v58;
    v42 = (__int64)v13->dstPixelMem + v39->GetMipLevelOffsetBytes(v39, 0, v40);
    v43 = ((__int64 (__fastcall *)(ID3D12Device *, __int64, __m256i *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v42, &v71, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &v59);
    if ( v43 < 0 )
    {
      v44 = R_ErrorDescription(v43);
      Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v44);
    }
    PIXSetDebugName(v59, "compression_texture_1x1mip");
    v45 = v53;
    v46 = &v65->basemap;
    v65->basemap = (ID3D12Resource *)v59;
    v45->Release(v45);
    viewDesc.Texture1D.MipSlice = 0;
    if ( (unsigned int)v30 >= 0xC )
    {
      LODWORD(v50) = 12;
      LODWORD(v48) = v12 - 2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 302, ASSERT_TYPE_ASSERT, "(unsigned)( numMips - 2 ) < (unsigned)( ( sizeof( *array_counter( outUavs ) ) + 0 ) )", "numMips - 2 doesn't index ARRAY_COUNT( outUavs )\n\t%i not in [0, %i)", v48, v50) )
        __debugbreak();
    }
    R_HW_CreateUnorderedAccessView(*p_basemap, 0xFFFFFFFF, &viewDesc, &(*v10)[v30]);
    if ( (unsigned int)v40 >= 0xC )
    {
      LODWORD(v50) = 12;
      LODWORD(v48) = v12 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 305, ASSERT_TYPE_ASSERT, "(unsigned)( numMips - 1 ) < (unsigned)( ( sizeof( *array_counter( outUavs ) ) + 0 ) )", "numMips - 1 doesn't index ARRAY_COUNT( outUavs )\n\t%i not in [0, %i)", v48, v50) )
        __debugbreak();
    }
    R_HW_CreateUnorderedAccessView(*v46, 0xFFFFFFFF, &viewDesc, &(*v10)[v40]);
  }
}

/*
==============
R_RuntimeCompression_CreateSourceMipRWViews
==============
*/
void R_RuntimeCompression_CreateSourceMipRWViews(const unsigned int mipCount, const GfxTexture *const srcTexture, GfxShaderTextureRWView (*outMipRWViews)[12])
{
  const GfxTexture *v4; 
  unsigned int v6; 
  unsigned __int64 v7; 
  ID3D12Resource *basemap; 
  unsigned int freeSlot; 
  unsigned int *v10; 
  int v13[10]; 
  char v14[32]; 
  DXGI_FORMAT format; 

  v4 = srcTexture;
  if ( !srcTexture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 423, ASSERT_TYPE_ASSERT, "(srcTexture)", (const char *)&queryFormat, "srcTexture") )
    __debugbreak();
  ((void (__fastcall *)(ID3D12Resource *, char *))v4->basemap->m_pFunction[3].AddRef)(v4->basemap, v14);
  v6 = 0;
  v13[0] = R_D3D_MakeNonTypelessFormat(format);
  v13[1] = 4;
  v13[3] = 0;
  if ( mipCount )
  {
    v7 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
    do
    {
      basemap = v4->basemap;
      v13[2] = v6;
      while ( 1 )
      {
        if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
          break;
        Sys_Sleep(0);
      }
      freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      v4 = srcTexture;
      if ( !g_descriptorPools.shaderViewPool.freeSlot )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
          __debugbreak();
        freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      }
      v10 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
      g_descriptorPools.shaderViewPool.freeSlot = *v10;
      *v10 = 0;
      ++g_descriptorPools.shaderViewPool.handle.used;
      if ( v7 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
      }
      _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
      ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, int *, unsigned __int64))g_dx.d3d12device->m_pFunction[6].AddRef)(g_dx.d3d12device, basemap, 0i64, v13, g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot));
      (*outMipRWViews)[0].rwSubresourceToTransition = v6++;
      (*outMipRWViews)[0].rwView = freeSlot;
      (*outMipRWViews)[0].rwResource = basemap;
      (*outMipRWViews)[0].rwCounterResource = NULL;
      outMipRWViews = (GfxShaderTextureRWView (*)[12])((char *)outMipRWViews + 24);
    }
    while ( v6 < mipCount );
  }
}

/*
==============
R_RuntimeCompression_CreateSourceMipViews
==============
*/
void R_RuntimeCompression_CreateSourceMipViews(const unsigned int mipCount, const GfxTexture *const srcTexture, GfxShaderTextureView (*outMipViews)[12])
{
  const GfxTexture *v5; 
  unsigned int v8; 
  unsigned __int64 v9; 
  ID3D12Resource *basemap; 
  unsigned int freeSlot; 
  unsigned int *v12; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  int v16[6]; 
  __int128 v17; 
  unsigned __int64 v18; 
  char v19[32]; 
  DXGI_FORMAT format; 

  v5 = srcTexture;
  if ( !srcTexture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 397, ASSERT_TYPE_ASSERT, "(srcTexture)", (const char *)&queryFormat, "srcTexture") )
    __debugbreak();
  *(double *)&_XMM0 = ((double (__fastcall *)(ID3D12Resource *, char *))v5->basemap->m_pFunction[3].AddRef)(v5->basemap, v19);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v17 = _XMM0;
  v16[3] = 0;
  v8 = 0;
  v16[0] = R_D3D_MakeNonTypelessFormat(format);
  v16[1] = 4;
  v16[2] = 5768;
  if ( mipCount )
  {
    v9 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
    do
    {
      basemap = v5->basemap;
      v16[4] = v8;
      v16[5] = 1;
      while ( 1 )
      {
        if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
          break;
        Sys_Sleep(0);
      }
      freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      v5 = srcTexture;
      if ( !g_descriptorPools.shaderViewPool.freeSlot )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
          __debugbreak();
        freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      }
      v12 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
      g_descriptorPools.shaderViewPool.freeSlot = *v12;
      *v12 = 0;
      ++g_descriptorPools.shaderViewPool.handle.used;
      if ( v9 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
      }
      _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
      m_pFunction = g_dx.d3d12device->m_pFunction;
      v18 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot);
      m_pFunction[6].QueryInterface(g_dx.d3d12device, (const _GUID *)basemap, (void **)v16);
      *(&(*outMipViews)[0].view + 1) = 0;
      ++v8;
      (*outMipViews)[0].view = freeSlot;
      (*outMipViews)[0].resource = basemap;
      outMipViews = (GfxShaderTextureView (*)[12])((char *)outMipViews + 16);
    }
    while ( v8 < mipCount );
  }
}

/*
==============
R_RuntimeCompression_ExecuteCompressionComputeCmd
==============
*/
void R_RuntimeCompression_ExecuteCompressionComputeCmd(ComputeCmdBufState *cmdBufState, const RuntimeCompressionComputeCmd *cmd)
{
  Sys_ProfBeginNamedEvent(0xFF4169E1, "Runtime compression compute");
  R_ProfBeginNamedEvent(cmdBufState, "Runtime compression compute");
  R_RuntimeCompression_Compress(cmdBufState, cmd);
  R_ProfEndNamedEvent(cmdBufState);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_RuntimeCompression_ExecuteCompressionComputeCmds
==============
*/
void R_RuntimeCompression_ExecuteCompressionComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  const RuntimeCompressionComputeCmd *ComputeCmdData; 

  do
  {
    ComputeCmdData = (const RuntimeCompressionComputeCmd *)R_GetComputeCmdData(list, header);
    Sys_ProfBeginNamedEvent(0xFF4169E1, "Runtime compression compute");
    R_ProfBeginNamedEvent(cmdBufState, "Runtime compression compute");
    R_RuntimeCompression_Compress(cmdBufState, ComputeCmdData);
    R_ProfEndNamedEvent(cmdBufState);
    Sys_ProfEndNamedEvent();
    header = R_NextComputeCmdOfSameType(list, header);
  }
  while ( header );
}

/*
==============
R_RuntimeCompression_ExecuteMipgenComputeCmd
==============
*/
void R_RuntimeCompression_ExecuteMipgenComputeCmd(ComputeCmdBufState *cmdBufState, const MipGenComputeCmd *cmd)
{
  Sys_ProfBeginNamedEvent(0xFF4169E1, "Mipgen compute");
  R_ProfBeginNamedEvent(cmdBufState, "Mipgen compute");
  R_RuntimeCompression_GenerateMips(cmdBufState, cmd->srcTexture, cmd->mipCount, cmd->width);
  R_ProfEndNamedEvent(cmdBufState);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_RuntimeCompression_ExecuteMipgenComputeCmds
==============
*/
void R_RuntimeCompression_ExecuteMipgenComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  void *ComputeCmdData; 

  do
  {
    ComputeCmdData = R_GetComputeCmdData(list, header);
    Sys_ProfBeginNamedEvent(0xFF4169E1, "Mipgen compute");
    R_ProfBeginNamedEvent(cmdBufState, "Mipgen compute");
    R_RuntimeCompression_GenerateMips(cmdBufState, *(const GfxTexture **)ComputeCmdData, *((_DWORD *)ComputeCmdData + 2), *((_DWORD *)ComputeCmdData + 3));
    R_ProfEndNamedEvent(cmdBufState);
    Sys_ProfEndNamedEvent();
    header = R_NextComputeCmdOfSameType(list, header);
  }
  while ( header );
}

/*
==============
R_RuntimeCompression_GenerateMips
==============
*/
void R_RuntimeCompression_GenerateMips(ComputeCmdBufState *cmdBufState, const GfxTexture *srcTexture, unsigned int mipCount, unsigned int width)
{
  GfxShaderTextureView *v8; 
  GfxShaderTextureRWView *v9; 
  ComputeShader *RuntimeCompression_GenerateMip_ComputeShader; 
  unsigned int v11; 
  GfxShaderTextureRWView *v12; 
  GfxShaderTextureView *v13; 
  float v14; 
  unsigned int v15; 
  GfxShaderTextureView *v16; 
  GfxShaderTextureRWView *v17; 
  float data; 
  GfxShaderTextureRWView *views; 
  GfxShaderTextureView outView[12]; 
  GfxShaderTextureRWView outRWView[12]; 
  __int64 v22[2]; 

  if ( !width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  if ( mipCount > 32 - __lzcnt(width) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 699, ASSERT_TYPE_ASSERT, "(mipCount <= I_log2Floor( width ) + 1)", (const char *)&queryFormat, "mipCount <= I_log2Floor( width ) + 1") )
    __debugbreak();
  v8 = outView;
  do
    R_AssignNullShaderTextureView(v8++);
  while ( v8 != (GfxShaderTextureView *)outRWView );
  v9 = outRWView;
  do
    R_AssignNullShaderTextureRWView(v9++);
  while ( v9 != (GfxShaderTextureRWView *)v22 );
  R_RuntimeCompression_CreateSourceMipViews(mipCount, srcTexture, (GfxShaderTextureView (*)[12])outView);
  R_RuntimeCompression_CreateSourceMipRWViews(mipCount, srcTexture, (GfxShaderTextureRWView (*)[12])outRWView);
  RuntimeCompression_GenerateMip_ComputeShader = rgp.RuntimeCompression_GenerateMip_ComputeShader;
  v11 = 1;
  if ( mipCount > 1 )
  {
    v12 = &outRWView[1];
    v13 = outView;
    do
    {
      R_SetComputeShader(cmdBufState, RuntimeCompression_GenerateMip_ComputeShader);
      v14 = (float)(width >> v11);
      data = 1.0 / v14;
      R_UploadAndSetComputeConstants(cmdBufState, 0, &data, 4u, NULL);
      R_HW_AddResourceTransition(cmdBufState, v12, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(cmdBufState);
      views = v12;
      R_SetComputeTextureRWViews(cmdBufState, 0, 1, (const GfxShaderTextureRWView *const *)&views);
      views = (GfxShaderTextureRWView *)v13;
      R_SetComputeTextureViews(cmdBufState, 0, 1, (const GfxShaderTextureView *const *)&views);
      v15 = 1;
      if ( width >> v11 >> 3 > 1 )
        v15 = width >> v11 >> 3;
      R_Dispatch(cmdBufState, v15, v15, 1u);
      R_HW_AddResourceTransition(cmdBufState, v12, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(cmdBufState);
      ++v11;
      ++v12;
      ++v13;
    }
    while ( v11 < mipCount );
  }
  v16 = outView;
  do
    R_ReleaseShaderTextureView(v16++);
  while ( v16 != (GfxShaderTextureView *)outRWView );
  v17 = outRWView;
  do
    R_ReleaseShaderTextureRWView(v17++);
  while ( v17 != (GfxShaderTextureRWView *)v22 );
}

/*
==============
R_RuntimeCompression_Init
==============
*/
void R_RuntimeCompression_Init(void)
{
  ;
}

/*
==============
R_RuntimeCompression_Shutdown
==============
*/
void R_RuntimeCompression_Shutdown(void)
{
  ;
}

