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
  _RDI = inCmd;
  _RAX = R_AllocComputeCmdData(list, 48);
  if ( _RAX )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rax], ymm0
      vmovups xmm1, xmmword ptr [rdi+20h]
      vmovups xmmword ptr [rax+20h], xmm1
    }
    LOBYTE(_RAX) = R_AddComputeCmd(list, COMPUTECMD_COMPRESS_TEXTURE, _RAX);
  }
  return (char)_RAX;
}

/*
==============
R_AddMipGenComputeCmd
==============
*/
bool R_AddMipGenComputeCmd(ComputeCmdList *list, const MipGenComputeCmd *inCmd)
{
  _RDI = inCmd;
  _RAX = R_AllocComputeCmdData(list, 16);
  if ( _RAX )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rax], xmm0
    }
    LOBYTE(_RAX) = R_AddComputeCmd(list, COMPUTECMD_GENERATE_MIPS, _RAX);
  }
  return (char)_RAX;
}

/*
==============
R_RuntimeCompression_Compress
==============
*/
void R_RuntimeCompression_Compress(ComputeCmdBufState *cmdBufState, const RuntimeCompressionComputeCmd *input)
{
  unsigned int LevelCount; 
  unsigned int v7; 
  unsigned int width; 
  GfxShaderTextureRWView *v9; 
  GfxShaderTextureView *v10; 
  const CompressorConfig *v11; 
  bool compressAllMips; 
  bool v13; 
  unsigned int numMips; 
  unsigned int numIntermediateMips; 
  const ComputeShader **compressTwoMipsShader; 
  __int64 v17; 
  unsigned int v19; 
  unsigned int v22; 
  GfxShaderTextureRWView *v24; 
  GfxShaderTextureView *v25; 
  GfxShaderTextureView *v26; 
  GfxShaderTextureRWView *views; 
  GfxShaderTextureRWView *v28; 
  _DWORD data[8]; 
  GfxShaderTextureRWView v30; 
  GfxTexture outIntermediateTexture; 
  GfxTexture outIntermediate2x2Texture; 
  GfxTexture outIntermediate1x1Texture; 
  GfxShaderTextureRWView *v34[5]; 
  GfxShaderTextureRWView outRWView[12]; 
  GfxShaderTextureView outView[12]; 
  __int64 v37; 

  if ( input->width <= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 543, ASSERT_TYPE_ASSERT, "(input->width > 16)", (const char *)&queryFormat, "input->width > 16") )
    __debugbreak();
  if ( input->width > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 544, ASSERT_TYPE_ASSERT, "(input->width <= MAX_COMPRESSED_TEXTURE_WIDTH)", (const char *)&queryFormat, "input->width <= MAX_COMPRESSED_TEXTURE_WIDTH") )
    __debugbreak();
  LevelCount = R_Texture_GetLevelCount(input->srcTexture);
  v7 = R_Texture_GetLevelCount(input->dstTextureArray);
  if ( input->compressAllMips )
  {
    width = input->width;
    if ( !width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
      __debugbreak();
    if ( LevelCount != 32 - __lzcnt(width) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 549, ASSERT_TYPE_ASSERT, "(!input->compressAllMips || ( srcMipCount == I_log2Floor( input->width ) + 1 ))", (const char *)&queryFormat, "!input->compressAllMips || ( srcMipCount == I_log2Floor( input->width ) + 1 )") )
      __debugbreak();
    if ( input->compressAllMips && v7 != LevelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 550, ASSERT_TYPE_ASSERT, "(!input->compressAllMips || ( dstMipCount == srcMipCount ))", (const char *)&queryFormat, "!input->compressAllMips || ( dstMipCount == srcMipCount )") )
      __debugbreak();
  }
  v9 = outRWView;
  do
    R_AssignNullShaderTextureRWView(v9++);
  while ( v9 != (GfxShaderTextureRWView *)outView );
  v10 = outView;
  do
    R_AssignNullShaderTextureView(v10++);
  while ( v10 != (GfxShaderTextureView *)&v37 );
  v11 = &s_compressorConfigs[input->format];
  compressAllMips = input->compressAllMips;
  v13 = v11->compressTwoMips && compressAllMips;
  numMips = 1;
  if ( compressAllMips )
    numMips = LevelCount;
  if ( compressAllMips )
    numIntermediateMips = v7 - 2;
  else
    numIntermediateMips = 1;
  R_RuntimeCompression_CreateSourceMipViews(numMips, input->srcTexture, (GfxShaderTextureView (*)[12])outView);
  R_RuntimeCompression_CreateIntermediateTexturesAndMipUavs(input, v11, &outIntermediateTexture, &outIntermediate2x2Texture, &outIntermediate1x1Texture, (GfxShaderTextureRWView (*)[12])outRWView, numMips, numIntermediateMips);
  R_AssignNullShaderTextureRWView(&v30);
  if ( v13 )
    compressTwoMipsShader = (const ComputeShader **)v11->compressTwoMipsShader;
  else
    compressTwoMipsShader = (const ComputeShader **)v11->compressOneMipShader;
  R_SetComputeShader(cmdBufState, *compressTwoMipsShader);
  v17 = 0i64;
  if ( numIntermediateMips )
  {
    __asm
    {
      vmovaps [rsp+380h+var_48+8], xmm6
      vmovss  xmm6, cs:__real@3f800000
    }
    while ( 1 )
    {
      v19 = input->width >> v17;
      if ( v19 == 16 && v11->hasTailMipShader )
        break;
      if ( v13 && v19 < 0x200 )
      {
        v13 = 0;
        R_SetComputeShader(cmdBufState, *(const ComputeShader **)v11->compressOneMipShader);
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vdivss  xmm0, xmm6, xmm0
      }
      data[4] = input->dstArraySlice;
      __asm { vmovss  dword ptr [rsp+380h+data], xmm0 }
      R_UploadAndSetComputeConstants(cmdBufState, 0, data, 0x20u, NULL);
      views = &outRWView[v17];
      if ( v13 )
        v28 = &outRWView[(unsigned int)(v17 + 1)];
      else
        v28 = &v30;
      R_SetComputeTextureRWViews(cmdBufState, 0, 2, (const GfxShaderTextureRWView *const *)&views);
      v26 = &outView[(unsigned int)v17];
      R_SetComputeTextureViews(cmdBufState, 0, 1, (const GfxShaderTextureView *const *)&v26);
      v22 = v19 >> 2 >> (v13 + 3);
      if ( !v22 )
        v22 = 1;
      R_Dispatch(cmdBufState, v22, v22, 1u);
      v17 = v13 + 1 + (unsigned int)v17;
      if ( (unsigned int)v17 >= numIntermediateMips )
        goto LABEL_49;
    }
    v34[0] = &outRWView[v17];
    v34[1] = &outRWView[(unsigned int)(v17 + 1)];
    v34[2] = &outRWView[(unsigned int)(v17 + 2)];
    v34[3] = &outRWView[(unsigned int)(v17 + 3)];
    v34[4] = &outRWView[(unsigned int)(v17 + 4)];
    R_SetComputeTextureRWViews(cmdBufState, 0, 5, (const GfxShaderTextureRWView *const *)v34);
    v26 = &outView[(unsigned int)v17];
    R_SetComputeTextureViews(cmdBufState, 0, 1, (const GfxShaderTextureView *const *)&v26);
    R_SetComputeShader(cmdBufState, *(const ComputeShader **)v11->compressTailMipsShader);
    R_Dispatch(cmdBufState, 1u, 1u, 1u);
LABEL_49:
    __asm { vmovaps xmm6, [rsp+380h+var_48+8] }
  }
  v24 = outRWView;
  do
    R_ReleaseShaderTextureRWView(v24++);
  while ( v24 != (GfxShaderTextureRWView *)outView );
  v25 = outView;
  do
    R_ReleaseShaderTextureView(v25++);
  while ( v25 != (GfxShaderTextureView *)&v37 );
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
  GfxShaderTextureRWView (*v11)[12]; 
  unsigned int v13; 
  const RuntimeCompressionComputeCmd *v14; 
  unsigned int width; 
  __int64 dstArraySliceCount; 
  unsigned int v27; 
  HRESULT v28; 
  const char *v29; 
  unsigned int v30; 
  GfxTexture *v32; 
  unsigned __int64 v33; 
  ID3D12Resource *basemap; 
  unsigned int freeSlot; 
  unsigned int *v36; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  __int64 v38; 
  unsigned int v39; 
  unsigned int v40; 
  HRESULT v42; 
  const char *v43; 
  unsigned __int64 v47; 
  HRESULT v48; 
  const char *v49; 
  struct XGTextureAddressComputer *v50; 
  __int64 v51; 
  ID3D12Resource **p_basemap; 
  __int64 v53; 
  HRESULT v54; 
  const char *v55; 
  struct XGTextureAddressComputer *v56; 
  ID3D12Resource **v57; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  struct XGTextureAddressComputer *v64; 
  unsigned int v65; 
  ID3D12DeviceChild *resource; 
  GfxTexture *v67; 
  const CompressorConfig *v68; 
  ID3D12DeviceChild *v69; 
  ID3D12DeviceChild *v70; 
  D3D12_UNORDERED_ACCESS_VIEW_DESC viewDesc; 
  unsigned int v72; 
  const RuntimeCompressionComputeCmd *v73; 
  GfxShaderTextureRWView (*v74)[12]; 
  GfxTexture *v75; 
  GfxTexture *v76; 
  unsigned __int64 v77; 
  __m256i v78; 
  __int128 v79; 
  __int64 v80; 
  struct XG_TEXTURE2D_DESC v81; 
  __m256i v82; 

  _RBX = outIntermediate1x1Texture;
  _RSI = outIntermediate2x2Texture;
  v11 = outUavs;
  _RDI = outIntermediateTexture;
  v13 = numMips;
  v14 = input;
  v76 = outIntermediate1x1Texture;
  v74 = outUavs;
  v75 = outIntermediate2x2Texture;
  v67 = outIntermediateTexture;
  v68 = config;
  v73 = input;
  v65 = numMips;
  _RAX = R_Texture_GetNull();
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rdi], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rdi+20h], xmm1
  }
  _RAX = R_Texture_GetNull();
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsi], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsi+20h], xmm1
  }
  _RAX = R_Texture_GetNull();
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
  }
  v78.m256i_i32[0] = 3;
  __asm { vmovups xmmword ptr [rbx+20h], xmm1 }
  width = v14->width;
  dstArraySliceCount = v14->dstArraySliceCount;
  *(__int64 *)((char *)v78.m256i_i64 + 4) = 0i64;
  v78.m256i_i32[3] = 0;
  v80 = 0i64;
  v78.m256i_i64[2] = (unsigned __int64)width >> 2;
  v78.m256i_i32[6] = width >> 2;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rbp+0E0h+var_E0], xmm0
  }
  if ( (unsigned int)dstArraySliceCount > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)dstArraySliceCount, "unsigned", dstArraySliceCount) )
    __debugbreak();
  v27 = numIntermediateMips;
  v78.m256i_i16[14] = dstArraySliceCount;
  if ( numIntermediateMips > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)numIntermediateMips, "unsigned", numIntermediateMips) )
    __debugbreak();
  v78.m256i_i16[15] = numIntermediateMips;
  LODWORD(v79) = R_D3D_GetDXGIFormatForPixelFormat(g_R_RT_renderTargetFmts[(unsigned __int8)v68->intermediateFormat]);
  HIDWORD(v79) = 264;
  *(_QWORD *)((char *)&v79 + 4) = 1i64;
  LODWORD(v80) = 4;
  v28 = ((__int64 (__fastcall *)(ID3D12Device *, void *, __m256i *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v14->dstPixelMem, &v78, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v28 < 0 )
  {
    v29 = R_ErrorDescription(v28);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v29);
  }
  PIXSetDebugName(resource, "compression_texture");
  _RDI->basemap = (ID3D12Resource *)resource;
  v30 = 0;
  viewDesc.Format = v79;
  viewDesc.Buffer.NumElements = v14->dstArraySliceCount;
  viewDesc.Buffer.FirstElement = 0i64;
  *((_DWORD *)&viewDesc.Texture3D + 7) = 0;
  viewDesc.ViewDimension = D3D12_UAV_DIMENSION_TEXTURE2DARRAY;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+0E0h+viewDesc.___u2+0Ch], xmm0
  }
  if ( numIntermediateMips )
  {
    v32 = v67;
    v33 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
    do
    {
      viewDesc.Texture1D.MipSlice = v30;
      if ( v30 >= 0xC )
      {
        LODWORD(v60) = 12;
        LODWORD(v58) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 261, ASSERT_TYPE_ASSERT, "(unsigned)( mipIndex ) < (unsigned)( ( sizeof( *array_counter( outUavs ) ) + 0 ) )", "mipIndex doesn't index ARRAY_COUNT( outUavs )\n\t%i not in [0, %i)", v58, v60) )
          __debugbreak();
      }
      basemap = v32->basemap;
      while ( 1 )
      {
        if ( v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
          break;
        Sys_Sleep(0);
      }
      freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      v27 = numIntermediateMips;
      v32 = v67;
      if ( !g_descriptorPools.shaderViewPool.freeSlot )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
          __debugbreak();
        freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      }
      v36 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
      g_descriptorPools.shaderViewPool.freeSlot = *v36;
      *v36 = 0;
      ++g_descriptorPools.shaderViewPool.handle.used;
      if ( v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
        __debugbreak();
      _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
      v72 = freeSlot;
      m_pFunction = g_dx.d3d12device->m_pFunction;
      v77 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot);
      ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, D3D12_UNORDERED_ACCESS_VIEW_DESC *, unsigned __int64))m_pFunction[6].AddRef)(g_dx.d3d12device, basemap, 0i64, &viewDesc, v77);
      (*v11)[0].rwView = freeSlot;
      (*v11)[0].rwSubresourceToTransition = v30;
      (*v11)[0].rwResource = basemap;
      ++v30;
      (*v11)[0].rwCounterResource = NULL;
      v11 = (GfxShaderTextureRWView (*)[12])((char *)v11 + 24);
    }
    while ( v30 < numIntermediateMips );
    v13 = v65;
    v14 = v73;
    v11 = v74;
  }
  if ( v14->compressAllMips )
  {
    if ( v13 < 2 )
    {
      LODWORD(v63) = 2;
      LODWORD(v62) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 267, ASSERT_TYPE_ASSERT, "( numMips ) >= ( 2 )", "%s >= %s\n\t%u, %u", "numMips", "2", v62, v63) )
        __debugbreak();
    }
    v38 = v13 - 2;
    if ( v27 != (_DWORD)v38 )
    {
      LODWORD(v63) = v13 - 2;
      LODWORD(v62) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 268, ASSERT_TYPE_ASSERT, "( numIntermediateMips ) == ( numMips - 2 )", "%s == %s\n\t%u, %u", "numIntermediateMips", "numMips - 2", v62, v63) )
        __debugbreak();
    }
    v39 = v14->dstArraySliceCount;
    v40 = v14->width;
    *(_QWORD *)&v81.Width = 0i64;
    *(_QWORD *)&v81.ArraySize = 0i64;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v81.Format = v68->compressedPixelFormat;
    v81.Usage = XG_USAGE_DEFAULT;
    __asm { vmovdqu xmmword ptr [rbp+0E0h+var_C8.CPUAccessFlags], xmm0 }
    *(_QWORD *)&v81.TileMode = 0i64;
    v81.Width = v40;
    v81.Height = v40;
    v81.ArraySize = v39;
    v81.MipLevels = v13;
    v81.BindFlags = 8;
    v81.SampleDesc = (XG_SAMPLE_DESC)1i64;
    v81.TileMode = XGComputeOptimalTileMode(XG_RESOURCE_DIMENSION_TEXTURE2D, v81.Format, v40, v40, v39, 1u, 8u, 0);
    v64 = NULL;
    v42 = XGCreateTexture2DComputer(&v81, &v64);
    if ( v42 < 0 )
    {
      v43 = R_ErrorDescription(v42);
      Sys_Error((const ObfuscateErrorText)&stru_14437C2A0, 284i64, v43);
    }
    __asm
    {
      vmovups ymm0, [rbp+0E0h+var_100]
      vmovups xmm1, [rbp+0E0h+var_E0]
      vmovups [rbp+0E0h+var_88], ymm0
      vmovsd  xmm0, [rbp+0E0h+var_D0]
      vmovsd  [rbp+0E0h+var_58], xmm0
      vmovups [rbp+0E0h+var_68], xmm1
    }
    v82.m256i_i64[2] = 1i64;
    v82.m256i_i32[6] = 1;
    v82.m256i_i16[15] = 1;
    v47 = v64->GetMipLevelOffsetBytes(v64, 0, v38);
    v48 = ((__int64 (__fastcall *)(ID3D12Device *, char *, __m256i *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, (char *)v14->dstPixelMem + v47, &v82, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &v69);
    if ( v48 < 0 )
    {
      v49 = R_ErrorDescription(v48);
      Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v49);
    }
    PIXSetDebugName(v69, "compression_texture_2x2mip");
    v50 = v64;
    v51 = v13 - 1;
    p_basemap = &v75->basemap;
    v75->basemap = (ID3D12Resource *)v69;
    v53 = (__int64)v14->dstPixelMem + v50->GetMipLevelOffsetBytes(v50, 0, v51);
    v54 = ((__int64 (__fastcall *)(ID3D12Device *, __int64, __m256i *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v53, &v82, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &v70);
    if ( v54 < 0 )
    {
      v55 = R_ErrorDescription(v54);
      Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v55);
    }
    PIXSetDebugName(v70, "compression_texture_1x1mip");
    v56 = v64;
    v57 = &v76->basemap;
    v76->basemap = (ID3D12Resource *)v70;
    v56->Release(v56);
    viewDesc.Texture1D.MipSlice = 0;
    if ( (unsigned int)v38 >= 0xC )
    {
      LODWORD(v61) = 12;
      LODWORD(v59) = v13 - 2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 302, ASSERT_TYPE_ASSERT, "(unsigned)( numMips - 2 ) < (unsigned)( ( sizeof( *array_counter( outUavs ) ) + 0 ) )", "numMips - 2 doesn't index ARRAY_COUNT( outUavs )\n\t%i not in [0, %i)", v59, v61) )
        __debugbreak();
    }
    R_HW_CreateUnorderedAccessView(*p_basemap, 0xFFFFFFFF, &viewDesc, &(*v11)[v38]);
    if ( (unsigned int)v51 >= 0xC )
    {
      LODWORD(v61) = 12;
      LODWORD(v59) = v13 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 305, ASSERT_TYPE_ASSERT, "(unsigned)( numMips - 1 ) < (unsigned)( ( sizeof( *array_counter( outUavs ) ) + 0 ) )", "numMips - 1 doesn't index ARRAY_COUNT( outUavs )\n\t%i not in [0, %i)", v59, v61) )
        __debugbreak();
    }
    R_HW_CreateUnorderedAccessView(*v57, 0xFFFFFFFF, &viewDesc, &(*v11)[v51]);
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
  unsigned __int64 v18; 
  char v19[32]; 
  DXGI_FORMAT format; 

  v5 = srcTexture;
  if ( !srcTexture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 397, ASSERT_TYPE_ASSERT, "(srcTexture)", (const char *)&queryFormat, "srcTexture") )
    __debugbreak();
  *(double *)&_XMM0 = ((double (__fastcall *)(ID3D12Resource *, char *))v5->basemap->m_pFunction[3].AddRef)(v5->basemap, v19);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rsp+0E8h+var_90], xmm0
  }
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
  GfxShaderTextureView *v10; 
  GfxShaderTextureRWView *v11; 
  ComputeShader *RuntimeCompression_GenerateMip_ComputeShader; 
  unsigned int v13; 
  GfxShaderTextureRWView *v14; 
  GfxShaderTextureView *v15; 
  unsigned int v19; 
  GfxShaderTextureView *v21; 
  GfxShaderTextureRWView *v22; 
  int data; 
  GfxShaderTextureRWView *views; 
  GfxShaderTextureView outView[12]; 
  GfxShaderTextureRWView outRWView[12]; 
  __int64 v27[2]; 

  if ( !width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  if ( mipCount > 32 - __lzcnt(width) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_runtime_compression.cpp", 699, ASSERT_TYPE_ASSERT, "(mipCount <= I_log2Floor( width ) + 1)", (const char *)&queryFormat, "mipCount <= I_log2Floor( width ) + 1") )
    __debugbreak();
  v10 = outView;
  do
    R_AssignNullShaderTextureView(v10++);
  while ( v10 != (GfxShaderTextureView *)outRWView );
  v11 = outRWView;
  do
    R_AssignNullShaderTextureRWView(v11++);
  while ( v11 != (GfxShaderTextureRWView *)v27 );
  R_RuntimeCompression_CreateSourceMipViews(mipCount, srcTexture, (GfxShaderTextureView (*)[12])outView);
  R_RuntimeCompression_CreateSourceMipRWViews(mipCount, srcTexture, (GfxShaderTextureRWView (*)[12])outRWView);
  RuntimeCompression_GenerateMip_ComputeShader = rgp.RuntimeCompression_GenerateMip_ComputeShader;
  v13 = 1;
  if ( mipCount > 1 )
  {
    v14 = &outRWView[1];
    __asm { vmovaps [rsp+278h+var_48], xmm6 }
    v15 = outView;
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    do
    {
      R_SetComputeShader(cmdBufState, RuntimeCompression_GenerateMip_ComputeShader);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vdivss  xmm0, xmm6, xmm0
        vmovss  [rsp+278h+data], xmm0
      }
      R_UploadAndSetComputeConstants(cmdBufState, 0, &data, 4u, NULL);
      R_HW_AddResourceTransition(cmdBufState, v14, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(cmdBufState);
      views = v14;
      R_SetComputeTextureRWViews(cmdBufState, 0, 1, (const GfxShaderTextureRWView *const *)&views);
      views = (GfxShaderTextureRWView *)v15;
      R_SetComputeTextureViews(cmdBufState, 0, 1, (const GfxShaderTextureView *const *)&views);
      v19 = 1;
      if ( width >> v13 >> 3 > 1 )
        v19 = width >> v13 >> 3;
      R_Dispatch(cmdBufState, v19, v19, 1u);
      R_HW_AddResourceTransition(cmdBufState, v14, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(cmdBufState);
      ++v13;
      ++v14;
      ++v15;
    }
    while ( v13 < mipCount );
    __asm { vmovaps xmm6, [rsp+278h+var_48] }
  }
  v21 = outView;
  do
    R_ReleaseShaderTextureView(v21++);
  while ( v21 != (GfxShaderTextureView *)outRWView );
  v22 = outRWView;
  do
    R_ReleaseShaderTextureRWView(v22++);
  while ( v22 != (GfxShaderTextureRWView *)v27 );
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

