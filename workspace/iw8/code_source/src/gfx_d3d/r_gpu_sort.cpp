/*
==============
R_GPUSorter_SortBitonic_Internal
==============
*/

void __fastcall R_GPUSorter_SortBitonic_Internal(ComputeCmdBufState *computeState, unsigned int frame, const GfxWrappedRWBuffer *ioData, unsigned int elementCount, unsigned int offset, GfxGpuSorterDataType dataType, GfxGPUSorterDirection direction, GfxGPUSorterDispatchType dispatchType)
{
  ?R_GPUSorter_SortBitonic_Internal@@YAXPEAUComputeCmdBufState@@IPEBUGfxWrappedRWBuffer@@IIW4GfxGpuSorterDataType@@W4GfxGPUSorterDirection@@W4GfxGPUSorterDispatchType@@@Z(computeState, frame, ioData, elementCount, offset, dataType, direction, dispatchType);
}

/*
==============
R_GPUSorter_ToggleFrame
==============
*/

void __fastcall R_GPUSorter_ToggleFrame(unsigned int smpFrame)
{
  ?R_GPUSorter_ToggleFrame@@YAXI@Z(smpFrame);
}

/*
==============
R_GPUSorter_Shutdown
==============
*/

void R_GPUSorter_Shutdown(void)
{
  ?R_GPUSorter_Shutdown@@YAXXZ();
}

/*
==============
R_GPUSorter_SortBitonic
==============
*/

void __fastcall R_GPUSorter_SortBitonic(ComputeCmdBufState *computeState, const GfxWrappedRWBuffer *ioData, unsigned int elementCount, unsigned int offset, unsigned int frame, GfxGpuSorterDataType dataType, GfxGPUSorterDirection direction)
{
  ?R_GPUSorter_SortBitonic@@YAXPEAUComputeCmdBufState@@PEBUGfxWrappedRWBuffer@@IIIW4GfxGpuSorterDataType@@W4GfxGPUSorterDirection@@@Z(computeState, ioData, elementCount, offset, frame, dataType, direction);
}

/*
==============
R_GPUSorter_Init
==============
*/

void R_GPUSorter_Init(void)
{
  ?R_GPUSorter_Init@@YAXXZ();
}

/*
==============
R_GPUSorter_Init
==============
*/
void R_GPUSorter_Init(void)
{
  __int64 v0; 
  GPUSorterFrameData *frameData; 
  GfxWrappedBuffer *p_stageBuffer; 
  unsigned __int64 *v4; 
  GfxBufferCreationContext v6; 

  v0 = 2i64;
  frameData = s_gpuSorterGlob.frameData;
  p_stageBuffer = &s_gpuSorterGlob.frameData[0].stageBuffer;
  do
  {
    frameData->stageBufferOffset = 0;
    R_CreateGfxWrappedBuffer(p_stageBuffer, GfxWrappedBuffer_Structured, 4, 0x1000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "GPU sorter stage argument buffer");
    p_stageBuffer = (GfxWrappedBuffer *)((char *)p_stageBuffer + 40);
    ++frameData;
    --v0;
  }
  while ( v0 );
  v6.objectName = "GPU Sort Access Label A";
  v6.zoneName = (char *)&queryFormat.fmt + 3;
  __asm
  {
    vmovups xmm0, [rsp+78h+var_28]
    vmovdqa [rsp+78h+var_28], xmm0
  }
  v4 = (unsigned __int64 *)R_AllocGfxBufferMemory(8u, &v6);
  v6.zoneName = (char *)&queryFormat.fmt + 3;
  s_gpuSorterGlob.accessLabelA = v4;
  v6.objectName = "GPU Sort Access Label B";
  __asm
  {
    vmovups xmm0, [rsp+78h+var_28]
    vmovdqa [rsp+78h+var_28], xmm0
  }
  s_gpuSorterGlob.accessLabelB = (unsigned __int64 *)R_AllocGfxBufferMemory(8u, &v6);
  PIXSetDebugFenceName(s_gpuSorterGlob.accessLabelA, "GPU Sort A");
  PIXSetDebugFenceName(s_gpuSorterGlob.accessLabelB, "GPU Sort B");
  R_GPULabel_SetCPU(s_gpuSorterGlob.accessLabelA, 0);
  R_GPULabel_SetCPU(s_gpuSorterGlob.accessLabelB, 0);
}

/*
==============
R_GPUSorter_Shutdown
==============
*/
void R_GPUSorter_Shutdown(void)
{
  GfxWrappedBuffer *p_stageBuffer; 
  __int64 v1; 

  p_stageBuffer = &s_gpuSorterGlob.frameData[0].stageBuffer;
  v1 = 2i64;
  do
  {
    R_ShutdownGfxWrappedBuffer(p_stageBuffer);
    p_stageBuffer = (GfxWrappedBuffer *)((char *)p_stageBuffer + 40);
    --v1;
  }
  while ( v1 );
}

/*
==============
R_GPUSorter_SortBitonic
==============
*/
void R_GPUSorter_SortBitonic(ComputeCmdBufState *computeState, const GfxWrappedRWBuffer *ioData, unsigned int elementCount, unsigned int offset, unsigned int frame, GfxGpuSorterDataType dataType, GfxGPUSorterDirection direction)
{
  R_GPUSorter_SortBitonic_Internal(computeState, frame, ioData, elementCount, offset, dataType, direction, GFX_GPU_SORTER_DISPATCH_INTERLEAVED);
}

/*
==============
R_GPUSorter_SortBitonic_Internal
==============
*/
void R_GPUSorter_SortBitonic_Internal(ComputeCmdBufState *computeState, unsigned int frame, const GfxWrappedRWBuffer *ioData, unsigned int elementCount, unsigned int offset, GfxGpuSorterDataType dataType, GfxGPUSorterDirection direction, GfxGPUSorterDispatchType dispatchType)
{
  __int64 v12; 
  unsigned int v14; 
  const char *v15; 
  const char *v16; 
  unsigned int v17; 
  unsigned int v20; 
  unsigned int v23; 
  unsigned int v24; 
  __int64 v25; 
  unsigned int i; 
  __int64 v27; 
  unsigned int v28; 
  __int64 v29; 
  unsigned int v30; 
  GfxWrappedBuffer *p_stageBuffer; 
  _DWORD *v32; 
  int v33; 
  ComputeCmdBufState *v34; 
  unsigned int j; 
  unsigned int v36; 
  unsigned int v37; 
  int *v38; 
  __int64 v39; 
  unsigned int v40; 
  unsigned int v41; 
  int v42; 
  __int64 v43; 
  unsigned int v44; 
  int v49; 
  __int64 v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  __int64 v55; 
  unsigned int v56; 
  unsigned int v57; 
  int v58; 
  unsigned int v59; 
  bool v60; 
  bool v61; 
  unsigned int v62; 
  unsigned int v63; 
  int v64; 
  __int64 v65; 
  int v66; 
  int v67; 
  bool v68; 
  int v69; 
  unsigned int v70; 
  __int64 v71; 
  int v72; 
  int v81; 
  bool v86; 
  unsigned int v87; 
  unsigned int v88; 
  unsigned int v89; 
  unsigned int stageBufferOffset; 
  unsigned int v91; 
  GfxShaderBufferView *views; 
  unsigned int v93; 
  unsigned int xCount; 
  __int128 v95; 
  __int128 v96; 
  __int128 data; 
  int v99; 
  int v100; 
  unsigned int v101; 
  BOOL v102; 
  int v103[1536]; 

  v93 = elementCount;
  v12 = frame;
  *(_QWORD *)&v95 = computeState;
  if ( elementCount < 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", 150, ASSERT_TYPE_ASSERT, "( elementCount ) >= ( 1024 )", "%s >= %s\n\t%u, %u", "elementCount", "1024", elementCount, 1024) )
    __debugbreak();
  v14 = s_GfxGpuSorterDataTypeSize[dataType];
  v15 = j_va("R_GPUSorter_SortBitonic BYTE%u CNT:%u", v14, elementCount);
  Sys_ProfBeginNamedEvent(0xFF800000, v15);
  v16 = j_va("R_GPUSorter_SortBitonic BYTE%u CNT:%u", v14, elementCount);
  R_ProfBeginNamedEvent(computeState, v16);
  if ( ((computeState->computeContextType - 1) & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", 158, ASSERT_TYPE_ASSERT, "((computeState->computeContextType == COMPUTE_CONTEXT_TYPE_GFX) || (computeState->computeContextType == COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND))", "%s\n\tStage data allocation buffer is currently implemented only for backend thread processing.", "(computeState->computeContextType == COMPUTE_CONTEXT_TYPE_GFX) || (computeState->computeContextType == COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND)") )
    __debugbreak();
  if ( elementCount >= 0x80000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", 159, ASSERT_TYPE_ASSERT, "(elementCount < ( 1 << 31 ))", "%s\n\tCount too large for sorter. Supported up to 1073741823 (2^31) elements.", "elementCount < ( 1 << 31 )") )
    __debugbreak();
  if ( __popcnt(elementCount) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", 162, ASSERT_TYPE_ASSERT, "(CountBitsEnabled( elementCount ) == 1)", (const char *)&queryFormat, "CountBitsEnabled( elementCount ) == 1") )
    __debugbreak();
  v17 = 0x40 / v14 - 1;
  _EAX = 512;
  __asm { tzcnt   eax, eax }
  v91 = v17;
  v88 = _EAX + 1;
  v20 = 0x80000000 >> __lzcnt(v93);
  _EDI = 2 * v20;
  if ( v20 == v93 )
    _EDI = v20;
  if ( _EDI < 0x80 )
    _EDI = 128;
  v89 = _EDI;
  xCount = _EDI >> 10;
  if ( !(_EDI >> 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", 179, ASSERT_TYPE_ASSERT, "(groupCount > 0)", (const char *)&queryFormat, "groupCount > 0") )
    __debugbreak();
  __asm { tzcnt   eax, edi }
  v23 = (unsigned int)(_EAX * (_EAX + 1)) >> 1;
  v87 = v23;
  if ( v23 >= 0x200 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", 183, ASSERT_TYPE_ASSERT, "(stageCount < 512)", "%s\n\tstage count required for sorting of the array, exceeds supported SORT_NUM_MAX_STAGES. Please extend accordingly.", "stageCount < SORT_NUM_MAX_STAGES") )
      __debugbreak();
    v23 = v87;
  }
  v24 = 1;
  LODWORD(v25) = 0;
  do
  {
    v103[(unsigned int)v25 + 512] = 2 * v24 - 1;
    for ( i = v24; i; i >>= 1 )
    {
      v27 = (unsigned int)v25;
      v25 = (unsigned int)(v25 + 1);
      v103[v27] = i;
      if ( i != 1 )
        v103[v25 + 512] = 0;
    }
    v24 *= 2;
  }
  while ( v24 < _EDI );
  v28 = v17;
  v29 = v12;
  v30 = 0;
  stageBufferOffset = s_gpuSorterGlob.frameData[v29].stageBufferOffset;
  s_gpuSorterGlob.frameData[v29].stageBufferOffset = v23 + stageBufferOffset;
  if ( v23 + stageBufferOffset >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", 217, ASSERT_TYPE_ASSERT, "(stageOffset + stageCount < 8 * 512)", "%s\n\tFrame uses to many GPUSorter stages. Please change GPU_SORTER_FRAME_MAX_SORT_STAGES accordingly", "stageOffset + stageCount < GPU_SORTER_FRAME_MAX_SORT_STAGES") )
    __debugbreak();
  p_stageBuffer = &s_gpuSorterGlob.frameData[v29].stageBuffer;
  *(_QWORD *)&v96 = p_stageBuffer;
  v32 = R_BeginWrappedBufferDataWrite(p_stageBuffer);
  if ( direction )
  {
    if ( direction == GFX_GPU_SORTER_DIRECTON_DESCENDING )
    {
      switch ( dataType )
      {
        case GFX_GPU_SORTER_DATA_U16_U16:
          R_SetComputeShader(computeState, rgp.sortBitonicUintGe);
          goto LABEL_52;
        case GFX_GPU_SORTER_DATA_U32_U32:
          R_SetComputeShader(computeState, rgp.sortBitonicUint2Ge);
          goto LABEL_52;
        case GFX_GPU_SORTER_DATA_U32:
          R_SetComputeShader(computeState, rgp.sortBitonicUint1Ge);
          goto LABEL_52;
      }
      v33 = 242;
    }
    else
    {
      v33 = 245;
    }
    goto LABEL_50;
  }
  if ( dataType )
  {
    if ( dataType == GFX_GPU_SORTER_DATA_U32_U32 )
    {
      R_SetComputeShader(computeState, rgp.sortBitonicUint2Le);
      goto LABEL_52;
    }
    if ( dataType == GFX_GPU_SORTER_DATA_U32 )
    {
      R_SetComputeShader(computeState, rgp.sortBitonicUint1Le);
      goto LABEL_52;
    }
    v33 = 231;
LABEL_50:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", v33, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
      __debugbreak();
    goto LABEL_52;
  }
  R_SetComputeShader(computeState, rgp.sortBitonicUintLe);
LABEL_52:
  views = &p_stageBuffer->view;
  R_SetComputeViews(computeState, 0, 1, (const GfxShaderBufferView *const *)&views);
  views = (GfxShaderBufferView *)&ioData->rwView;
  v34 = computeState;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  j = v87;
  v36 = 0;
  if ( !v87 )
    goto LABEL_77;
  v37 = v87 - 1;
  LODWORD(views) = v87 - 1;
  v38 = v103;
  do
  {
    v28 |= *v38;
    if ( v36 == v37 )
    {
      v40 = v88;
    }
    else
    {
      v39 = v36 + 1;
      v40 = v88;
      if ( __popcnt(v28 | v103[v39]) <= v88 )
        goto LABEL_75;
    }
    v41 = __popcnt(v28);
    v42 = 1;
    if ( v41 < v40 )
    {
      v43 = v40 - v41;
      do
      {
        for ( ; (v42 & v28) != 0; v42 *= 2 )
          ;
        v28 |= v42;
        --v43;
      }
      while ( v43 );
    }
    v44 = v30;
    _EAX = ~(v28 | (2 * v89));
    __asm { tzcnt   ecx, eax }
    _EAX = (v28 | (2 * v89)) & (-1 << _ECX);
    __asm { tzcnt   edx, eax }
    if ( v30 <= v36 )
    {
      v49 = __ROL4__(1, _EDX) - 1;
      do
      {
        v50 = v44;
        v51 = v103[v50 + 512];
        if ( v51 )
          v52 = v28 & v51;
        else
          v52 = v103[v44];
        ++v44;
        v103[v50 + 1024] = v49 & v52 | ((~v49 & (unsigned int)v52) >> (_EDX - _ECX));
      }
      while ( v44 <= v36 );
      for ( j = v87; v30 <= v36; v32[v55] = v54 | (v53 << 31) )
      {
        v53 = 0;
        v54 = v103[v30 + 1024];
        if ( v54 == 16 && v30 + 4 <= v36 )
          v53 = 1;
        v55 = v30 + stageBufferOffset;
        ++v30;
      }
    }
    v28 = v91;
    LODWORD(v39) = v36 + 1;
    v30 = v36 + 1;
LABEL_75:
    v37 = (unsigned int)views;
    ++v38;
    v36 = v39;
  }
  while ( (unsigned int)v39 < j );
  v34 = (ComputeCmdBufState *)v95;
  p_stageBuffer = (GfxWrappedBuffer *)v96;
LABEL_77:
  R_EndWrappedBufferDataWrite(p_stageBuffer);
  v56 = v91;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = v89 <= 0x4000 || dispatchType == GFX_GPU_SORTER_DISPATCH_INTERLEAVED;
  v86 = v60;
  v61 = v60;
  if ( j )
  {
    v62 = v89 >> 1;
    v63 = 1 - stageBufferOffset;
    __asm { vmovaps [rsp+1940h+var_50], xmm6 }
    LODWORD(views) = v89 >> 1;
    __asm { vmovaps [rsp+1940h+var_60], xmm7 }
    v64 = stageBufferOffset;
    do
    {
      v65 = v64 - stageBufferOffset;
      v66 = v103[v65];
      v56 |= v66;
      v67 = v103[v65 + 512];
      v68 = v67 == 0;
      if ( v67 )
      {
        v59 = (unsigned int)(v67 + 1) >> 1;
        v68 = v67 == 0;
      }
      if ( v68 )
        v67 = v58;
      v58 = v67;
      if ( v66 == v62 )
        v61 = 0;
      if ( (_DWORD)v65 == v87 - 1 || __popcnt(v56 | v103[v63 + v64]) > v88 )
      {
        v69 = 1;
        v70 = __popcnt(v56);
        if ( v70 < v88 )
        {
          v71 = v88 - v70;
          do
          {
            for ( ; (v69 & v56) != 0; v69 *= 2 )
              ;
            v56 |= v69;
            --v71;
          }
          while ( v71 );
        }
        *(_QWORD *)((char *)&v95 + 4) = __PAIR64__(v93, v59);
        v99 = v64;
        v72 = v56 | (2 * v89);
        _ER8 = ~v72;
        LODWORD(v95) = v58 & ~v56;
        __asm { tzcnt   ecx, r8d }
        _EAX = v72 & (-1 << _ECX);
        LODWORD(v96) = _ECX;
        __asm { tzcnt   edx, eax }
        DWORD2(v96) = _EDX;
        DWORD1(v96) = _EDX - _ECX;
        _EAX = _ER8 & (-1 << _EDX);
        v100 = 0;
        __asm { tzcnt   eax, eax }
        HIDWORD(v96) = _EAX - _EDX;
        HIDWORD(v95) = v57 + stageBufferOffset;
        v102 = v57 == 0;
        if ( v61 )
        {
          __asm
          {
            vmovups xmm7, [rbp+1840h+var_18B0]
            vmovups xmm6, [rbp+1840h+var_18C0]
            vmovdqa [rbp+1840h+data], xmm7
            vmovdqa [rbp+1840h+var_1890], xmm6
          }
          v101 = offset;
          R_UploadAndSetComputeConstants(v34, 0, &data, 0x30u, NULL);
          R_GPULabel_Wait(v34, s_gpuSorterGlob.accessLabelA, 0, GFX_LABEL_COMPARE_FUNC_EQUAL);
          R_GPULabel_Set(v34, s_gpuSorterGlob.accessLabelA, 1u, 1);
          v81 = xCount >> 1;
          R_Dispatch(v34, xCount >> 1, 1u, 1u);
          R_GPULabel_Signal(v34, s_gpuSorterGlob.accessLabelA, 0);
          v99 = v64;
          v100 = v81;
          v101 = offset;
          v102 = v57 == 0;
          __asm
          {
            vmovdqa [rbp+1840h+data], xmm7
            vmovdqa [rbp+1840h+var_1890], xmm6
          }
          R_UploadAndSetComputeConstants(v34, 0, &data, 0x30u, NULL);
          R_GPULabel_Wait(v34, s_gpuSorterGlob.accessLabelB, 0, GFX_LABEL_COMPARE_FUNC_EQUAL);
          R_GPULabel_Set(v34, s_gpuSorterGlob.accessLabelB, 1u, 1);
          R_Dispatch(v34, v81, 1u, 1u);
        }
        else
        {
          __asm
          {
            vmovups xmm0, [rbp+1840h+var_18B0]
            vmovups xmm1, [rbp+1840h+var_18C0]
            vmovdqa [rbp+1840h+data], xmm0
            vmovdqa [rbp+1840h+var_1890], xmm1
          }
          v101 = offset;
          R_UploadAndSetComputeConstants(v34, 0, &data, 0x30u, NULL);
          R_GPULabel_Wait(v34, s_gpuSorterGlob.accessLabelA, 0, GFX_LABEL_COMPARE_FUNC_EQUAL);
          R_GPULabel_Wait(v34, s_gpuSorterGlob.accessLabelB, 0, GFX_LABEL_COMPARE_FUNC_EQUAL);
          R_GPULabel_Set(v34, s_gpuSorterGlob.accessLabelA, 1u, 1);
          R_GPULabel_Set(v34, s_gpuSorterGlob.accessLabelB, 1u, 1);
          R_Dispatch(v34, xCount, 1u, 1u);
          R_GPULabel_Signal(v34, s_gpuSorterGlob.accessLabelA, 0);
        }
        R_GPULabel_Signal(v34, s_gpuSorterGlob.accessLabelB, 0);
        v56 = v91;
        v57 = v63 + v64;
        v61 = v86;
        v62 = (unsigned int)views;
        v58 = 0;
        v59 = 0;
      }
      ++v64;
    }
    while ( v64 - stageBufferOffset != v87 );
    __asm
    {
      vmovaps xmm7, [rsp+1940h+var_60]
      vmovaps xmm6, [rsp+1940h+var_50]
    }
  }
  R_ProfEndNamedEvent(v34);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_GPUSorter_ToggleFrame
==============
*/
void R_GPUSorter_ToggleFrame(unsigned int smpFrame)
{
  s_gpuSorterGlob.frameData[smpFrame].stageBufferOffset = 0;
}

