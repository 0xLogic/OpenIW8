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
  unsigned __int64 *v3; 
  GfxBufferCreationContext v4; 

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
  v4.objectName = "GPU Sort Access Label A";
  v4.zoneName = (char *)&queryFormat.fmt + 3;
  v3 = (unsigned __int64 *)R_AllocGfxBufferMemory(8u, &v4);
  v4.zoneName = (char *)&queryFormat.fmt + 3;
  s_gpuSorterGlob.accessLabelA = v3;
  v4.objectName = "GPU Sort Access Label B";
  s_gpuSorterGlob.accessLabelB = (unsigned __int64 *)R_AllocGfxBufferMemory(8u, &v4);
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
  __int64 v10; 
  unsigned int v12; 
  const char *v13; 
  const char *v14; 
  unsigned int v15; 
  unsigned int v18; 
  unsigned int v21; 
  unsigned int v22; 
  __int64 v23; 
  unsigned int i; 
  __int64 v25; 
  unsigned int v26; 
  __int64 v27; 
  unsigned int v28; 
  GfxWrappedBuffer *p_stageBuffer; 
  _DWORD *v30; 
  int v31; 
  ComputeCmdBufState *v32; 
  unsigned int j; 
  unsigned int v34; 
  unsigned int v35; 
  int *v36; 
  __int64 v37; 
  unsigned int v38; 
  unsigned int v39; 
  int v40; 
  __int64 v41; 
  unsigned int v42; 
  int v47; 
  __int64 v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  __int64 v53; 
  unsigned int v54; 
  unsigned int v55; 
  int v56; 
  unsigned int v57; 
  bool v58; 
  bool v59; 
  unsigned int v60; 
  unsigned int v61; 
  int v62; 
  __int64 v63; 
  int v64; 
  int v65; 
  bool v66; 
  int v67; 
  unsigned int v68; 
  __int64 v69; 
  int v70; 
  __int128 v77; 
  __int128 v78; 
  int v79; 
  bool v80; 
  unsigned int v81; 
  unsigned int v82; 
  unsigned int v83; 
  unsigned int stageBufferOffset; 
  unsigned int v85; 
  GfxShaderBufferView *views; 
  unsigned int v87; 
  unsigned int xCount; 
  __int128 v89; 
  __int128 v90; 
  __int128 data; 
  __int128 v92; 
  int v93; 
  int v94; 
  unsigned int v95; 
  BOOL v96; 
  int v97[1536]; 

  v87 = elementCount;
  v10 = frame;
  *(_QWORD *)&v89 = computeState;
  if ( elementCount < 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", 150, ASSERT_TYPE_ASSERT, "( elementCount ) >= ( 1024 )", "%s >= %s\n\t%u, %u", "elementCount", "1024", elementCount, 1024) )
    __debugbreak();
  v12 = s_GfxGpuSorterDataTypeSize[dataType];
  v13 = j_va("R_GPUSorter_SortBitonic BYTE%u CNT:%u", v12, elementCount);
  Sys_ProfBeginNamedEvent(0xFF800000, v13);
  v14 = j_va("R_GPUSorter_SortBitonic BYTE%u CNT:%u", v12, elementCount);
  R_ProfBeginNamedEvent(computeState, v14);
  if ( ((computeState->computeContextType - 1) & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", 158, ASSERT_TYPE_ASSERT, "((computeState->computeContextType == COMPUTE_CONTEXT_TYPE_GFX) || (computeState->computeContextType == COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND))", "%s\n\tStage data allocation buffer is currently implemented only for backend thread processing.", "(computeState->computeContextType == COMPUTE_CONTEXT_TYPE_GFX) || (computeState->computeContextType == COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND)") )
    __debugbreak();
  if ( elementCount >= 0x80000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", 159, ASSERT_TYPE_ASSERT, "(elementCount < ( 1 << 31 ))", "%s\n\tCount too large for sorter. Supported up to 1073741823 (2^31) elements.", "elementCount < ( 1 << 31 )") )
    __debugbreak();
  if ( __popcnt(elementCount) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", 162, ASSERT_TYPE_ASSERT, "(CountBitsEnabled( elementCount ) == 1)", (const char *)&queryFormat, "CountBitsEnabled( elementCount ) == 1") )
    __debugbreak();
  v15 = 0x40 / v12 - 1;
  _EAX = 512;
  __asm { tzcnt   eax, eax }
  v85 = v15;
  v82 = _EAX + 1;
  v18 = 0x80000000 >> __lzcnt(v87);
  _EDI = 2 * v18;
  if ( v18 == v87 )
    _EDI = v18;
  if ( _EDI < 0x80 )
    _EDI = 128;
  v83 = _EDI;
  xCount = _EDI >> 10;
  if ( !(_EDI >> 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", 179, ASSERT_TYPE_ASSERT, "(groupCount > 0)", (const char *)&queryFormat, "groupCount > 0") )
    __debugbreak();
  __asm { tzcnt   eax, edi }
  v21 = (unsigned int)(_EAX * (_EAX + 1)) >> 1;
  v81 = v21;
  if ( v21 >= 0x200 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", 183, ASSERT_TYPE_ASSERT, "(stageCount < 512)", "%s\n\tstage count required for sorting of the array, exceeds supported SORT_NUM_MAX_STAGES. Please extend accordingly.", "stageCount < SORT_NUM_MAX_STAGES") )
      __debugbreak();
    v21 = v81;
  }
  v22 = 1;
  LODWORD(v23) = 0;
  do
  {
    v97[(unsigned int)v23 + 512] = 2 * v22 - 1;
    for ( i = v22; i; i >>= 1 )
    {
      v25 = (unsigned int)v23;
      v23 = (unsigned int)(v23 + 1);
      v97[v25] = i;
      if ( i != 1 )
        v97[v23 + 512] = 0;
    }
    v22 *= 2;
  }
  while ( v22 < _EDI );
  v26 = v15;
  v27 = v10;
  v28 = 0;
  stageBufferOffset = s_gpuSorterGlob.frameData[v27].stageBufferOffset;
  s_gpuSorterGlob.frameData[v27].stageBufferOffset = v21 + stageBufferOffset;
  if ( v21 + stageBufferOffset >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", 217, ASSERT_TYPE_ASSERT, "(stageOffset + stageCount < 8 * 512)", "%s\n\tFrame uses to many GPUSorter stages. Please change GPU_SORTER_FRAME_MAX_SORT_STAGES accordingly", "stageOffset + stageCount < GPU_SORTER_FRAME_MAX_SORT_STAGES") )
    __debugbreak();
  p_stageBuffer = &s_gpuSorterGlob.frameData[v27].stageBuffer;
  *(_QWORD *)&v90 = p_stageBuffer;
  v30 = R_BeginWrappedBufferDataWrite(p_stageBuffer);
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
      v31 = 242;
    }
    else
    {
      v31 = 245;
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
    v31 = 231;
LABEL_50:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_sort.cpp", v31, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
      __debugbreak();
    goto LABEL_52;
  }
  R_SetComputeShader(computeState, rgp.sortBitonicUintLe);
LABEL_52:
  views = &p_stageBuffer->view;
  R_SetComputeViews(computeState, 0, 1, (const GfxShaderBufferView *const *)&views);
  views = (GfxShaderBufferView *)&ioData->rwView;
  v32 = computeState;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  j = v81;
  v34 = 0;
  if ( !v81 )
    goto LABEL_77;
  v35 = v81 - 1;
  LODWORD(views) = v81 - 1;
  v36 = v97;
  do
  {
    v26 |= *v36;
    if ( v34 == v35 )
    {
      v38 = v82;
    }
    else
    {
      v37 = v34 + 1;
      v38 = v82;
      if ( __popcnt(v26 | v97[v37]) <= v82 )
        goto LABEL_75;
    }
    v39 = __popcnt(v26);
    v40 = 1;
    if ( v39 < v38 )
    {
      v41 = v38 - v39;
      do
      {
        for ( ; (v40 & v26) != 0; v40 *= 2 )
          ;
        v26 |= v40;
        --v41;
      }
      while ( v41 );
    }
    v42 = v28;
    _EAX = ~(v26 | (2 * v83));
    __asm { tzcnt   ecx, eax }
    _EAX = (v26 | (2 * v83)) & (-1 << _ECX);
    __asm { tzcnt   edx, eax }
    if ( v28 <= v34 )
    {
      v47 = __ROL4__(1, _EDX) - 1;
      do
      {
        v48 = v42;
        v49 = v97[v48 + 512];
        if ( v49 )
          v50 = v26 & v49;
        else
          v50 = v97[v42];
        ++v42;
        v97[v48 + 1024] = v47 & v50 | ((~v47 & (unsigned int)v50) >> (_EDX - _ECX));
      }
      while ( v42 <= v34 );
      for ( j = v81; v28 <= v34; v30[v53] = v52 | (v51 << 31) )
      {
        v51 = 0;
        v52 = v97[v28 + 1024];
        if ( v52 == 16 && v28 + 4 <= v34 )
          v51 = 1;
        v53 = v28 + stageBufferOffset;
        ++v28;
      }
    }
    v26 = v85;
    LODWORD(v37) = v34 + 1;
    v28 = v34 + 1;
LABEL_75:
    v35 = (unsigned int)views;
    ++v36;
    v34 = v37;
  }
  while ( (unsigned int)v37 < j );
  v32 = (ComputeCmdBufState *)v89;
  p_stageBuffer = (GfxWrappedBuffer *)v90;
LABEL_77:
  R_EndWrappedBufferDataWrite(p_stageBuffer);
  v54 = v85;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = v83 <= 0x4000 || dispatchType == GFX_GPU_SORTER_DISPATCH_INTERLEAVED;
  v80 = v58;
  v59 = v58;
  if ( j )
  {
    v60 = v83 >> 1;
    v61 = 1 - stageBufferOffset;
    LODWORD(views) = v83 >> 1;
    v62 = stageBufferOffset;
    do
    {
      v63 = v62 - stageBufferOffset;
      v64 = v97[v63];
      v54 |= v64;
      v65 = v97[v63 + 512];
      v66 = v65 == 0;
      if ( v65 )
      {
        v57 = (unsigned int)(v65 + 1) >> 1;
        v66 = v65 == 0;
      }
      if ( v66 )
        v65 = v56;
      v56 = v65;
      if ( v64 == v60 )
        v59 = 0;
      if ( (_DWORD)v63 == v81 - 1 || __popcnt(v54 | v97[v61 + v62]) > v82 )
      {
        v67 = 1;
        v68 = __popcnt(v54);
        if ( v68 < v82 )
        {
          v69 = v82 - v68;
          do
          {
            for ( ; (v67 & v54) != 0; v67 *= 2 )
              ;
            v54 |= v67;
            --v69;
          }
          while ( v69 );
        }
        *(_QWORD *)((char *)&v89 + 4) = __PAIR64__(v87, v57);
        v93 = v62;
        v70 = v54 | (2 * v83);
        _ER8 = ~v70;
        LODWORD(v89) = v56 & ~v54;
        __asm { tzcnt   ecx, r8d }
        _EAX = v70 & (-1 << _ECX);
        LODWORD(v90) = _ECX;
        __asm { tzcnt   edx, eax }
        DWORD2(v90) = _EDX;
        DWORD1(v90) = _EDX - _ECX;
        _EAX = _ER8 & (-1 << _EDX);
        v94 = 0;
        __asm { tzcnt   eax, eax }
        HIDWORD(v90) = _EAX - _EDX;
        HIDWORD(v89) = v55 + stageBufferOffset;
        v96 = v55 == 0;
        if ( v59 )
        {
          v77 = v90;
          v78 = v89;
          data = v90;
          v92 = v89;
          v95 = offset;
          R_UploadAndSetComputeConstants(v32, 0, &data, 0x30u, NULL);
          R_GPULabel_Wait(v32, s_gpuSorterGlob.accessLabelA, 0, GFX_LABEL_COMPARE_FUNC_EQUAL);
          R_GPULabel_Set(v32, s_gpuSorterGlob.accessLabelA, 1u, 1);
          v79 = xCount >> 1;
          R_Dispatch(v32, xCount >> 1, 1u, 1u);
          R_GPULabel_Signal(v32, s_gpuSorterGlob.accessLabelA, 0);
          v93 = v62;
          v94 = v79;
          v95 = offset;
          v96 = v55 == 0;
          data = v77;
          v92 = v78;
          R_UploadAndSetComputeConstants(v32, 0, &data, 0x30u, NULL);
          R_GPULabel_Wait(v32, s_gpuSorterGlob.accessLabelB, 0, GFX_LABEL_COMPARE_FUNC_EQUAL);
          R_GPULabel_Set(v32, s_gpuSorterGlob.accessLabelB, 1u, 1);
          R_Dispatch(v32, v79, 1u, 1u);
        }
        else
        {
          data = v90;
          v92 = v89;
          v95 = offset;
          R_UploadAndSetComputeConstants(v32, 0, &data, 0x30u, NULL);
          R_GPULabel_Wait(v32, s_gpuSorterGlob.accessLabelA, 0, GFX_LABEL_COMPARE_FUNC_EQUAL);
          R_GPULabel_Wait(v32, s_gpuSorterGlob.accessLabelB, 0, GFX_LABEL_COMPARE_FUNC_EQUAL);
          R_GPULabel_Set(v32, s_gpuSorterGlob.accessLabelA, 1u, 1);
          R_GPULabel_Set(v32, s_gpuSorterGlob.accessLabelB, 1u, 1);
          R_Dispatch(v32, xCount, 1u, 1u);
          R_GPULabel_Signal(v32, s_gpuSorterGlob.accessLabelA, 0);
        }
        R_GPULabel_Signal(v32, s_gpuSorterGlob.accessLabelB, 0);
        v54 = v85;
        v55 = v61 + v62;
        v59 = v80;
        v60 = (unsigned int)views;
        v56 = 0;
        v57 = 0;
      }
      ++v62;
    }
    while ( v62 - stageBufferOffset != v81 );
  }
  R_ProfEndNamedEvent(v32);
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

