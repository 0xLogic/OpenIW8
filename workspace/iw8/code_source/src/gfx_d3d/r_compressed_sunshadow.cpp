/*
==============
R_CompressedSunShadow_GetViewMatrix
==============
*/

void __fastcall R_CompressedSunShadow_GetViewMatrix(const vec3_t *sunDirection, tmat33_t<vec3_t> *outViewMatrix)
{
  ?R_CompressedSunShadow_GetViewMatrix@@YAXAEBTvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(sunDirection, outViewMatrix);
}

/*
==============
R_UpdateCssClipPlanes
==============
*/

void R_UpdateCssClipPlanes(void)
{
  ?R_UpdateCssClipPlanes@@YAXXZ();
}

/*
==============
GfxCompressedSunShadowAlgorithm::GetRootNodeOffset
==============
*/

unsigned int __fastcall GfxCompressedSunShadowAlgorithm::GetRootNodeOffset(GfxCompressedSunShadowAlgorithm *this, unsigned int nodeIndex)
{
  return ?GetRootNodeOffset@GfxCompressedSunShadowAlgorithm@@QEBAII@Z(this, nodeIndex);
}

/*
==============
R_CompressedSunShadow_StreamIn
==============
*/

bool __fastcall R_CompressedSunShadow_StreamIn(GfxCompressedSunShadowDataTemp *streamingData, DB_BackendCallbackContext *context)
{
  return ?R_CompressedSunShadow_StreamIn@@YA_NPEAUGfxCompressedSunShadowDataTemp@@PEAUDB_BackendCallbackContext@@@Z(streamingData, context);
}

/*
==============
R_CompressedSunShadow_GetCacheEntryClipPlanes
==============
*/

void __fastcall R_CompressedSunShadow_GetCacheEntryClipPlanes(const GfxSunShadow *sunShadow, int gridX, int gridY, float sampleSize, float *outNearClip, float *outFarClip)
{
  ?R_CompressedSunShadow_GetCacheEntryClipPlanes@@YAXPEBUGfxSunShadow@@HHMAEAM1@Z(sunShadow, gridX, gridY, sampleSize, outNearClip, outFarClip);
}

/*
==============
R_CompressedSunShadow_GetClipPlanesScaleBias
==============
*/

void __fastcall R_CompressedSunShadow_GetClipPlanesScaleBias(const GfxSunShadow *sunShadow, const float nearClip, const float farClip, float *outScale, float *outBias)
{
  ?R_CompressedSunShadow_GetClipPlanesScaleBias@@YAXPEBUGfxSunShadow@@MMAEAM1@Z(sunShadow, nearClip, farClip, outScale, outBias);
}

/*
==============
R_CompressedSunShadow_GetAlgorithmId
==============
*/

unsigned int __fastcall R_CompressedSunShadow_GetAlgorithmId(const void *compressedSunShadow)
{
  return ?R_CompressedSunShadow_GetAlgorithmId@@YAIPEBX@Z(compressedSunShadow);
}

/*
==============
R_CompressedSunShadow_GetAlgorithm
==============
*/

const GfxCompressedSunShadowAlgorithm *__fastcall R_CompressedSunShadow_GetAlgorithm(unsigned int algorithmId)
{
  return ?R_CompressedSunShadow_GetAlgorithm@@YAAEBVGfxCompressedSunShadowAlgorithm@@I@Z(algorithmId);
}

/*
==============
R_CompressedSunShadow_UpdateShadowBounds
==============
*/

void __fastcall R_CompressedSunShadow_UpdateShadowBounds(GfxBackEndData *data, unsigned int shadowMapResolution, const GfxSunShadowProjectionSetup *projSetup)
{
  ?R_CompressedSunShadow_UpdateShadowBounds@@YAXPEAUGfxBackEndData@@IPEBUGfxSunShadowProjectionSetup@@@Z(data, shadowMapResolution, projSetup);
}

/*
==============
R_CompressedSunShadow_GetDataSize
==============
*/

unsigned int __fastcall R_CompressedSunShadow_GetDataSize(const void *compressedSunShadow)
{
  return ?R_CompressedSunShadow_GetDataSize@@YAIPEBX@Z(compressedSunShadow);
}

/*
==============
R_CompressedSunShadow_GetSetup
==============
*/

const GfxCompressedSunShadowSetup *__fastcall R_CompressedSunShadow_GetSetup()
{
  return ?R_CompressedSunShadow_GetSetup@@YAPEBUGfxCompressedSunShadowSetup@@XZ();
}

/*
==============
R_CompressedSunShadow_GetBuffer
==============
*/

GfxWrappedBuffer *__fastcall R_CompressedSunShadow_GetBuffer()
{
  return ?R_CompressedSunShadow_GetBuffer@@YAPEAUGfxWrappedBuffer@@XZ();
}

/*
==============
R_CompressedSunShadow_GetShaderGlobals
==============
*/

void __fastcall R_CompressedSunShadow_GetShaderGlobals(const GfxViewInfo *viewInfo, const GfxSunShadow *sunShadow, vec4_t *outParams0, vec4_t *outParams1)
{
  ?R_CompressedSunShadow_GetShaderGlobals@@YAXPEBUGfxViewInfo@@PEBUGfxSunShadow@@AEATvec4_t@@2@Z(viewInfo, sunShadow, outParams0, outParams1);
}

/*
==============
R_CompressedSunShadow_CalcFilteringParams
==============
*/

void __fastcall R_CompressedSunShadow_CalcFilteringParams(unsigned int shadowMapResolution, const GfxSunShadowProjectionSetup *projSetup, GfxBackEndData *outData)
{
  ?R_CompressedSunShadow_CalcFilteringParams@@YAXIPEBUGfxSunShadowProjectionSetup@@PEAUGfxBackEndData@@@Z(shadowMapResolution, projSetup, outData);
}

/*
==============
R_CompressedSunShadow_InitStreaming
==============
*/

void __fastcall R_CompressedSunShadow_InitStreaming(GfxWorld *world)
{
  ?R_CompressedSunShadow_InitStreaming@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_CompressedSunShadow_SetupCompression
==============
*/

void __fastcall R_CompressedSunShadow_SetupCompression(unsigned int resolution, unsigned int downsampleRatio, unsigned int maxSize)
{
  ?R_CompressedSunShadow_SetupCompression@@YAXIII@Z(resolution, downsampleRatio, maxSize);
}

/*
==============
R_CompressedSunShadow_StreamOut
==============
*/

void __fastcall R_CompressedSunShadow_StreamOut(const XZoneHandleUnique *zone)
{
  ?R_CompressedSunShadow_StreamOut@@YAXAEBUXZoneHandleUnique@@@Z(zone);
}

/*
==============
GfxCompressedSunShadowAlgorithm::GetChildOffsetAndType
==============
*/

unsigned int __fastcall GfxCompressedSunShadowAlgorithm::GetChildOffsetAndType(GfxCompressedSunShadowAlgorithm *this, unsigned int childIndex, unsigned int combinedFlagsAndOffset, unsigned int *outChildType)
{
  return ?GetChildOffsetAndType@GfxCompressedSunShadowAlgorithm@@QEBAIIIAEAI@Z(this, childIndex, combinedFlagsAndOffset, outChildType);
}

/*
==============
GfxCompressedSunShadowAlgorithm::GetShaders
==============
*/

ComputeShader **__fastcall GfxCompressedSunShadowAlgorithm::GetShaders(GfxCompressedSunShadowAlgorithm *this)
{
  return ?GetShaders@GfxCompressedSunShadowAlgorithm@@QEBAPEAPEAUComputeShader@@XZ(this);
}

/*
==============
R_CompressedSunShadow_IsUsingGlobalBuffer
==============
*/

bool __fastcall R_CompressedSunShadow_IsUsingGlobalBuffer()
{
  return ?R_CompressedSunShadow_IsUsingGlobalBuffer@@YA_NXZ();
}

/*
==============
R_CompressedSunShadow_ProcessStreaming
==============
*/

void __fastcall R_CompressedSunShadow_ProcessStreaming(ComputeCmdBufState *computeState)
{
  ?R_CompressedSunShadow_ProcessStreaming@@YAXPEAUComputeCmdBufState@@@Z(computeState);
}

/*
==============
GfxCompressedSunShadowAlgorithm::GetChildOffset
==============
*/

unsigned int __fastcall GfxCompressedSunShadowAlgorithm::GetChildOffset(GfxCompressedSunShadowAlgorithm *this, unsigned int childIndex, unsigned int combinedFlagsAndOffset)
{
  return ?GetChildOffset@GfxCompressedSunShadowAlgorithm@@QEBAIII@Z(this, childIndex, combinedFlagsAndOffset);
}

/*
==============
R_CompressedSunShadow_GetClipPlanesBufferSize
==============
*/

unsigned int __fastcall R_CompressedSunShadow_GetClipPlanesBufferSize()
{
  return ?R_CompressedSunShadow_GetClipPlanesBufferSize@@YAIXZ();
}

/*
==============
GfxCompressedSunShadowAlgorithm::GfxCompressedSunShadowAlgorithm
==============
*/

void __fastcall GfxCompressedSunShadowAlgorithm::GfxCompressedSunShadowAlgorithm(GfxCompressedSunShadowAlgorithm *this, unsigned int algorithmId)
{
  ??0GfxCompressedSunShadowAlgorithm@@QEAA@I@Z(this, algorithmId);
}

/*
==============
GfxCompressedSunShadowAlgorithm::ReadRootDepth
==============
*/

vec2_t __fastcall GfxCompressedSunShadowAlgorithm::ReadRootDepth(GfxCompressedSunShadowAlgorithm *this, const unsigned __int8 *data, unsigned int rootIndex)
{
  return ?ReadRootDepth@GfxCompressedSunShadowAlgorithm@@QEBA?ATvec2_t@@PEBEI@Z(this, data, rootIndex);
}

/*
==============
R_CompressedSunShadow_ShutdownStreaming
==============
*/

void __fastcall R_CompressedSunShadow_ShutdownStreaming(GfxWorld *world)
{
  ?R_CompressedSunShadow_ShutdownStreaming@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_CompressedSunShadow_ShutdownWorld
==============
*/

void __fastcall R_CompressedSunShadow_ShutdownWorld(GfxWorld *world)
{
  ?R_CompressedSunShadow_ShutdownWorld@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_CompressedSunShadow_InitWorld
==============
*/

void __fastcall R_CompressedSunShadow_InitWorld(GfxWorld *world)
{
  ?R_CompressedSunShadow_InitWorld@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
GfxCompressedSunShadowAlgorithm::GetNodeSizeByType
==============
*/

unsigned int __fastcall GfxCompressedSunShadowAlgorithm::GetNodeSizeByType(GfxCompressedSunShadowAlgorithm *this, unsigned int nodeType)
{
  return ?GetNodeSizeByType@GfxCompressedSunShadowAlgorithm@@QEBAII@Z(this, nodeType);
}

/*
==============
R_CompressedSunShadow_DrawOverlay
==============
*/

void __fastcall R_CompressedSunShadow_DrawOverlay(const GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?R_CompressedSunShadow_DrawOverlay@@YAXAEBUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
R_CompressedSunShadow_ExtractClipPlanes
==============
*/

void __fastcall R_CompressedSunShadow_ExtractClipPlanes(ComputeCmdBufState *computeState, R_RT_BufferHandle *clipPlanesBuffer)
{
  ?R_CompressedSunShadow_ExtractClipPlanes@@YAXPEAUComputeCmdBufState@@VR_RT_BufferHandle@@@Z(computeState, clipPlanesBuffer);
}

/*
==============
R_CompressedSunShadow_GetLookupMatrix
==============
*/

const tmat44_t<vec4_t> *__fastcall R_CompressedSunShadow_GetLookupMatrix()
{
  return ?R_CompressedSunShadow_GetLookupMatrix@@YAPEBT?$tmat44_t@Tvec4_t@@@@XZ();
}

/*
==============
R_CompressedSunShadow_SetCompressionAlgorithm
==============
*/

void __fastcall R_CompressedSunShadow_SetCompressionAlgorithm(unsigned int algorithmId)
{
  ?R_CompressedSunShadow_SetCompressionAlgorithm@@YAXI@Z(algorithmId);
}

/*
==============
R_CompressedSunShadow_GetType
==============
*/

unsigned int __fastcall R_CompressedSunShadow_GetType()
{
  return ?R_CompressedSunShadow_GetType@@YAIXZ();
}

/*
==============
GfxCompressedSunShadowAlgorithm::GfxCompressedSunShadowAlgorithm
==============
*/
void GfxCompressedSunShadowAlgorithm::GfxCompressedSunShadowAlgorithm(GfxCompressedSunShadowAlgorithm *this, unsigned int algorithmId)
{
  this->m_id = algorithmId;
  if ( algorithmId )
  {
    if ( algorithmId == 1 )
    {
      this->CSM_NODE_TYPE_EMPTY = 1;
      this->CSM_NODE_TYPE_MISSING = 0;
      this->CSM_NODE_TYPE_LEAF = 2;
      this->CSM_NODE_TYPE_INTERNAL = 3;
      this->m_nodeSize[0] = 0;
      this->m_nodeSize[this->CSM_NODE_TYPE_EMPTY] = 4;
      this->m_nodeSize[this->CSM_NODE_TYPE_LEAF] = 2;
      this->m_nodeSize[this->CSM_NODE_TYPE_INTERNAL] = 6;
      this->CSM_ROOT_NODE_SIZE = 8;
      this->CSM_HEADER_AND_ROOTS_SIZE = 64;
    }
    else if ( algorithmId == 2 )
    {
      this->CSM_NODE_TYPE_EMPTY = 1;
      this->CSM_NODE_TYPE_MISSING = 0;
      this->CSM_NODE_TYPE_LEAF = 2;
      this->CSM_NODE_TYPE_INTERNAL = 3;
      this->m_nodeSize[0] = 0;
      this->m_nodeSize[this->CSM_NODE_TYPE_EMPTY] = 4;
      this->m_nodeSize[this->CSM_NODE_TYPE_LEAF] = 6;
      this->m_nodeSize[this->CSM_NODE_TYPE_INTERNAL] = 10;
      this->CSM_HEADER_AND_ROOTS_SIZE = 72;
      this->CSM_ROOT_NODE_SIZE = 10;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 159, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tUnknown CSM algorithm id: [%d].", "false", algorithmId) )
        __debugbreak();
      this->CSM_HEADER_AND_ROOTS_SIZE = 4 * this->CSM_ROOT_NODE_SIZE + 32;
    }
  }
  else
  {
    this->CSM_NODE_TYPE_EMPTY = 1;
    this->CSM_NODE_TYPE_MISSING = 0;
    this->CSM_NODE_TYPE_LEAF = 3;
    this->CSM_NODE_TYPE_INTERNAL = 2;
    this->m_nodeSize[0] = 0;
    this->m_nodeSize[this->CSM_NODE_TYPE_EMPTY] = 4;
    this->m_nodeSize[this->CSM_NODE_TYPE_LEAF] = 4;
    this->m_nodeSize[this->CSM_NODE_TYPE_INTERNAL] = 8;
    this->CSM_ROOT_NODE_SIZE = 12;
    this->CSM_HEADER_AND_ROOTS_SIZE = 80;
  }
}

/*
==============
GfxCompressedSunShadowAlgorithm::GetChildOffset
==============
*/
__int64 GfxCompressedSunShadowAlgorithm::GetChildOffset(GfxCompressedSunShadowAlgorithm *this, unsigned int childIndex, unsigned int combinedFlagsAndOffset)
{
  unsigned int v3; 
  unsigned int v4; 

  v3 = combinedFlagsAndOffset >> 8;
  v4 = combinedFlagsAndOffset & (255 >> (2 * (4 - childIndex)));
  if ( !this->m_id )
    return v3 + 4 * __popcnt(v4 ^ (v4 >> 1) & 0x55);
  if ( this->m_id == 1 )
    return v3 + 2 * (__popcnt(v4 & 0xAA) + 2 * __popcnt(v4 & 0x55));
  return v3 + 4 * __popcnt(v4 & 0x55) + 6 * __popcnt(v4 & 0xAA);
}

/*
==============
GfxCompressedSunShadowAlgorithm::GetChildOffsetAndType
==============
*/
__int64 GfxCompressedSunShadowAlgorithm::GetChildOffsetAndType(GfxCompressedSunShadowAlgorithm *this, unsigned int childIndex, unsigned int combinedFlagsAndOffset, unsigned int *outChildType)
{
  unsigned int m_id; 
  unsigned int v6; 
  unsigned int v7; 

  m_id = this->m_id;
  v6 = combinedFlagsAndOffset & (255 >> (8 - 2 * childIndex));
  v7 = combinedFlagsAndOffset >> 8;
  *outChildType = (combinedFlagsAndOffset >> (2 * childIndex)) & 3;
  if ( !m_id )
    return v7 + 4 * __popcnt(v6 ^ (v6 >> 1) & 0x55);
  if ( m_id == 1 )
    return v7 + 2 * (__popcnt(v6 & 0xAA) + 2 * __popcnt(v6 & 0x55));
  return v7 + 4 * __popcnt(v6 & 0x55) + 6 * __popcnt(v6 & 0xAA);
}

/*
==============
GfxCompressedSunShadowAlgorithm::GetNodeSizeByType
==============
*/
__int64 GfxCompressedSunShadowAlgorithm::GetNodeSizeByType(GfxCompressedSunShadowAlgorithm *this, unsigned int nodeType)
{
  return this->m_nodeSize[nodeType];
}

/*
==============
GfxCompressedSunShadowAlgorithm::GetRootNodeOffset
==============
*/
__int64 GfxCompressedSunShadowAlgorithm::GetRootNodeOffset(GfxCompressedSunShadowAlgorithm *this, unsigned int nodeIndex)
{
  return nodeIndex * this->CSM_ROOT_NODE_SIZE + 32;
}

/*
==============
GfxCompressedSunShadowAlgorithm::GetShaders
==============
*/
ComputeShader **GfxCompressedSunShadowAlgorithm::GetShaders(GfxCompressedSunShadowAlgorithm *this)
{
  ComputeShader **result; 

  if ( !this->m_id )
    return rgp.compressShadowMapIntervals;
  result = rgp.compressShadowMapIntervals2;
  if ( this->m_id != 1 )
    return rgp.compressShadowMapPlanes;
  return result;
}

/*
==============
R_AddCssCopyDataJob
==============
*/
void R_AddCssCopyDataJob(const GfxCompressedSunShadowDataTemp *data, unsigned int srcOffset, unsigned int dstOffset, unsigned int size, unsigned __int16 firstUpdateForestJob, unsigned __int16 updateForestJobsCount)
{
  __int64 v10; 

  if ( s_cssStreaming.m_defragmentationState == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 1656, ASSERT_TYPE_ASSERT, "(s_cssStreaming.m_defragmentationState != CssStreaming::Defragmentation_InProgress)", (const char *)&queryFormat, "s_cssStreaming.m_defragmentationState != CssStreaming::Defragmentation_InProgress") )
    __debugbreak();
  if ( s_cssStreaming.m_copyDataJobsCount < 0x200 )
  {
    v10 = s_cssStreaming.m_copyDataJobsCount++;
    s_cssStreaming.m_copyDataJobs[v10].m_firstUpdateForestJob = firstUpdateForestJob;
    s_cssStreaming.m_copyDataJobs[v10].m_updateForestJobsCount = updateForestJobsCount;
    s_cssStreaming.m_copyDataJobs[v10].m_data = data;
    s_cssStreaming.m_copyDataJobs[v10].m_srcOffset = srcOffset;
    s_cssStreaming.m_copyDataJobs[v10].m_dstOffset = dstOffset;
    s_cssStreaming.m_copyDataJobs[v10].m_size = size;
  }
  else
  {
    Com_PrintWarning(8, "Too many CSS copy data jobs. Increase the limit (%u).", 512i64);
  }
}

/*
==============
R_AddCssStreamOutJob
==============
*/
void R_AddCssStreamOutJob(unsigned int zoneId)
{
  volatile int m_readPtr; 
  signed __int32 v3; 

  m_readPtr = s_cssStreaming.m_streamOutJobs.m_readPtr;
  if ( ((unsigned __int8)&s_cssStreaming.m_streamOutJobs.m_allocPtr & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_cssStreaming.m_streamOutJobs.m_allocPtr) )
    __debugbreak();
  v3 = _InterlockedExchangeAdd(&s_cssStreaming.m_streamOutJobs.m_allocPtr, 1u);
  if ( (unsigned int)(v3 - m_readPtr) >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 85, ASSERT_TYPE_ASSERT, "(( writeSlot - readSlot ) < QUEUED_ITEMS_MAX)", (const char *)&queryFormat, "( writeSlot - readSlot ) < QUEUED_ITEMS_MAX") )
    __debugbreak();
  s_cssStreaming.m_streamOutJobs.m_items[v3 & 0x1FF].m_zoneId = zoneId;
  while ( 1 )
  {
    if ( ((unsigned __int64)&s_cssStreaming.m_streamOutJobs.m_writePtr & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_cssStreaming.m_streamOutJobs.m_writePtr) )
      __debugbreak();
    if ( v3 == _InterlockedCompareExchange(&s_cssStreaming.m_streamOutJobs.m_writePtr, v3 + 1, v3) )
      break;
    _mm_pause();
  }
}

/*
==============
R_AllocCssMemoryBlock
==============
*/
__int64 R_AllocCssMemoryBlock(unsigned int allocSize, unsigned __int16 transientIndex, bool *outNeedCopy)
{
  CssMemoryBlock *m_lruMemoryBlocks; 
  __int64 v7; 
  unsigned int v8; 
  CssMemoryBlock *v9; 
  __int64 result; 
  unsigned int m_offset; 
  unsigned int v12; 
  unsigned int m_defragmentationState; 

  if ( s_cssStreaming.m_defragmentationState == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 1425, ASSERT_TYPE_ASSERT, "(s_cssStreaming.m_defragmentationState != CssStreaming::Defragmentation_InProgress)", (const char *)&queryFormat, "s_cssStreaming.m_defragmentationState != CssStreaming::Defragmentation_InProgress") )
    __debugbreak();
  if ( (allocSize & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 1426, ASSERT_TYPE_ASSERT, "(( allocSize & ( CSS_BLOCK_ALIGNMENT - 1 ) ) == 0)", (const char *)&queryFormat, "( allocSize & ( CSS_BLOCK_ALIGNMENT - 1 ) ) == 0") )
    __debugbreak();
  m_lruMemoryBlocks = s_cssStreaming.m_lruMemoryBlocks;
  v7 = 0i64;
  v8 = 0;
  if ( s_cssStreaming.m_lruMemoryBlocksCount )
  {
    v9 = s_cssStreaming.m_lruMemoryBlocks;
    while ( v9->m_transientIndex != transientIndex )
    {
      ++v8;
      ++v9;
      if ( v8 >= s_cssStreaming.m_lruMemoryBlocksCount )
        goto LABEL_11;
    }
    if ( v9->m_size != allocSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 1437, ASSERT_TYPE_ASSERT, "(memoryBlock.m_size == allocSize)", (const char *)&queryFormat, "memoryBlock.m_size == allocSize") )
      __debugbreak();
    m_offset = v9->m_offset;
    *outNeedCopy = 0;
    memmove_0(&s_cssStreaming.m_lruMemoryBlocks[v8], &s_cssStreaming.m_lruMemoryBlocks[v8 + 1], 12i64 * (s_cssStreaming.m_lruMemoryBlocksCount - v8 - 1));
    --s_cssStreaming.m_lruMemoryBlocksCount;
    return m_offset;
  }
  else
  {
LABEL_11:
    if ( s_cssStreaming.m_firstFreeOffset + allocSize >= s_cssStreaming.m_streamedDataSize )
    {
      if ( s_cssStreaming.m_lruMemoryBlocksCount )
      {
        while ( m_lruMemoryBlocks->m_size < allocSize )
        {
          v7 = (unsigned int)(v7 + 1);
          ++m_lruMemoryBlocks;
          if ( (unsigned int)v7 >= s_cssStreaming.m_lruMemoryBlocksCount )
            goto LABEL_22;
        }
        v12 = m_lruMemoryBlocks->m_offset;
        *outNeedCopy = 1;
        memmove_0(&s_cssStreaming.m_lruMemoryBlocks[v7], &s_cssStreaming.m_lruMemoryBlocks[v7 + 1], 12i64 * (unsigned int)(s_cssStreaming.m_lruMemoryBlocksCount - v7 - 1));
        m_defragmentationState = s_cssStreaming.m_defragmentationState;
        --s_cssStreaming.m_lruMemoryBlocksCount;
        if ( !s_cssStreaming.m_defragmentationState )
          m_defragmentationState = 1;
        result = v12;
        s_cssStreaming.m_defragmentationState = m_defragmentationState;
      }
      else
      {
        if ( s_cssStreaming.m_defragmentationState == 1 )
LABEL_22:
          s_cssStreaming.m_defragmentationState = 2;
        return 0xFFFFFFFFi64;
      }
    }
    else
    {
      result = s_cssStreaming.m_firstFreeOffset + s_cssStreaming.m_alwaysLoadedDataSize;
      *outNeedCopy = 1;
      s_cssStreaming.m_firstFreeOffset += allocSize;
    }
  }
  return result;
}

/*
==============
R_CalculateCssClipPlanes
==============
*/
__int64 R_CalculateCssClipPlanes(float uMin, float uMax, float vMin, float vMax, float *outNearClip, float *outFarClip)
{
  unsigned int v6; 
  float *m_data; 
  float m_gridResolution; 
  double v9; 
  unsigned int v10; 
  unsigned int v11; 
  double v12; 
  double v13; 
  unsigned int v14; 
  unsigned int v15; 
  double v16; 
  unsigned __int8 i; 
  unsigned int v20; 
  int v21; 
  unsigned int v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v27; 
  __int64 v34; 
  __int64 v37; 
  int v43; 
  __int64 result; 
  unsigned int v47; 

  v6 = s_cssClipPlanes.m_forestResolution.v[0];
  m_data = s_cssClipPlanes.m_data;
  v47 = s_cssClipPlanes.m_forestResolution.v[1];
  m_gridResolution = (float)s_cssClipPlanes.m_gridResolution;
  v9 = I_fclamp(uMin, 0.0, 1.0);
  v10 = (int)(float)(*(float *)&v9 * m_gridResolution);
  v11 = v6 - 1;
  v12 = I_fclamp(uMax, 0.0, 1.0);
  if ( v6 - 1 > (int)(float)(*(float *)&v12 * m_gridResolution) )
    v11 = (int)(float)(*(float *)&v12 * m_gridResolution);
  v13 = I_fclamp(vMin, 0.0, 1.0);
  v14 = (int)(float)(*(float *)&v13 * m_gridResolution);
  v15 = v47 - 1;
  v16 = I_fclamp(vMax, 0.0, 1.0);
  *(float *)&_XMM2 = FLOAT_N3_4028235e38;
  *(float *)&_XMM1 = FLOAT_3_4028235e38;
  if ( v47 - 1 > (int)(float)(*(float *)&v16 * m_gridResolution) )
    v15 = (int)(float)(*(float *)&v16 * m_gridResolution);
  for ( i = 0; v14 <= v15; ++v14 )
  {
    v20 = v10;
    if ( v10 <= v11 )
    {
      if ( v11 - v10 + 1 >= 4 )
      {
        i = 1;
        v21 = v6 * v14 + v10 + 2;
        v22 = ((v11 - v10 - 3) >> 2) + 1;
        v23 = v22;
        v20 = v10 + 4 * v22;
        do
        {
          v24 = (unsigned int)(2 * v21 - 2);
          v25 = (unsigned int)(v24 + 1);
          _XMM0 = LODWORD(m_data[v24]);
          v27 = (unsigned int)(2 * v21);
          __asm { vminss  xmm1, xmm0, xmm1 }
          _XMM0 = LODWORD(m_data[v25]);
          __asm { vmaxss  xmm2, xmm0, xmm2 }
          _XMM0 = LODWORD(m_data[v27]);
          __asm { vminss  xmm3, xmm0, xmm1 }
          _XMM0 = LODWORD(m_data[(unsigned int)(v27 + 1)]);
          v34 = (unsigned int)(2 * v21 + 3);
          __asm { vmaxss  xmm1, xmm0, xmm2 }
          _XMM0 = LODWORD(m_data[2 * v21 + 2]);
          v37 = (unsigned int)(2 * v21 + 4);
          v21 += 4;
          __asm { vminss  xmm2, xmm0, xmm3 }
          _XMM0 = LODWORD(m_data[v34]);
          __asm { vmaxss  xmm3, xmm0, xmm1 }
          _XMM0 = LODWORD(m_data[v37]);
          __asm { vminss  xmm1, xmm0, xmm2 }
          _XMM0 = LODWORD(m_data[(unsigned int)(v37 + 1)]);
          __asm { vmaxss  xmm2, xmm0, xmm3 }
          --v23;
        }
        while ( v23 );
      }
      if ( v20 <= v11 )
      {
        i = 1;
        do
        {
          v43 = v6 * v14 + v20++;
          _XMM0 = LODWORD(m_data[2 * v43 + 2]);
          __asm { vminss  xmm1, xmm0, xmm1 }
          _XMM0 = LODWORD(m_data[2 * v43 + 3]);
          __asm { vmaxss  xmm2, xmm0, xmm2 }
        }
        while ( v20 <= v11 );
      }
    }
  }
  result = i;
  *outNearClip = *(float *)&_XMM1;
  *outFarClip = *(float *)&_XMM2;
  return result;
}

/*
==============
R_CompressedSunShadow_CalcFilteringParams
==============
*/
void R_CompressedSunShadow_CalcFilteringParams(unsigned int shadowMapResolution, const GfxSunShadowProjectionSetup *projSetup, GfxBackEndData *outData)
{
  __int64 v4; 
  float v7; 
  float value; 
  __int64 viewInfoIndex; 
  GfxViewInfo *viewInfo; 
  float v11; 
  float tanHalfFovX; 
  float width; 
  float v15; 
  float v20; 
  float v24; 
  float v25; 
  float sampleSize; 
  __int128 v27; 
  __int128 sampleSize_low; 
  __int128 v29; 
  __int128 v31; 

  v4 = shadowMapResolution;
  if ( rg.compressedSunShadowFiltering )
  {
    _XMM7 = LODWORD(rg.compressedSunShadowFilteringFarZ);
    _XMM6 = LODWORD(rg.compressedSunShadowFilteringMaxRadius);
    value = r_sunShadowParams->current.value;
    viewInfoIndex = outData->viewInfoIndex;
    viewInfo = outData->viewInfo;
    v11 = (float)v4;
    _XMM4 = 0i64;
    tanHalfFovX = viewInfo[viewInfoIndex].viewParmsSet.frames[0].viewParms.camera.tanHalfFovX;
    width = (float)viewInfo[viewInfoIndex].sceneViewport.width;
    v15 = v11 * projSetup->snappedShadowOrg[3].v[outData->sunShadow.opaqueCascadeCount + 1];
    v7 = (float)((float)(value - 1.0) / value) * v15;
    __asm
    {
      vcmpneqss xmm0, xmm7, xmm4
      vblendvps xmm1, xmm4, xmm14, xmm0
      vcmpneqss xmm0, xmm6, xmm4
      vblendvps xmm0, xmm4, xmm12, xmm0
    }
    v20 = *(float *)&_XMM1 + *(float *)&_XMM0;
    _XMM0 = rg.compressedSunShadowFiltering;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm4, xmm1, xmm2
    }
    v25 = v20 + *(float *)&_XMM0;
    v24 = v25;
    if ( s_cssFilteringSrcParams.v[0] == v15 && s_cssFilteringSrcParams.v[1] == value && s_cssFilteringSrcParams.v[2] == (float)(width * tanHalfFovX) && s_cssFilteringSrcParams.v[3] == v25 )
    {
      LODWORD(_XMM6) = r_compressedSunShadowFilteringMaxRadiusDebug->current.integer;
      LODWORD(_XMM7) = r_compressedSunShadowFilteringFarZDebug->current.integer;
    }
    else
    {
      sampleSize = rgp.world->draw.compressedSunShadowParams.sampleSize;
      if ( rg.compressedSunShadowFiltering == 1 )
      {
        sampleSize_low = LODWORD(rgp.world->draw.compressedSunShadowParams.sampleSize);
        *(float *)&sampleSize_low = (float)(sampleSize * tanHalfFovX) * width;
        v27 = sampleSize_low;
        if ( rg.compressedSunShadowFilteringMaxRadius == 0.0 )
          *(float *)&_XMM6 = *(float *)&sampleSize_low / v7;
      }
      else
      {
        v29 = LODWORD(FLOAT_1_0);
        *(float *)&v29 = (float)((float)((float)(1.0 / tanHalfFovX) * sampleSize) * width) * 0.71402502;
        v27 = v29;
        if ( rg.compressedSunShadowFilteringMaxRadius == 0.0 )
          *(float *)&_XMM6 = *(float *)&v29 / v7;
        else
          *(float *)&_XMM6 = (float)(rg.compressedSunShadowFilteringMaxRadius * 0.84500003) * (float)(1.0 / tanHalfFovX);
      }
      if ( rg.compressedSunShadowFilteringFarZ == 0.0 )
      {
        v31 = v27;
        *(float *)&v31 = *(float *)&v27 * 2.0;
        _XMM0 = v31;
        __asm { vmaxss  xmm7, xmm0, xmm8 }
      }
      s_cssFilteringSrcParams.v[0] = v15;
      s_cssFilteringSrcParams.v[1] = value;
      s_cssFilteringSrcParams.v[2] = width * tanHalfFovX;
      s_cssFilteringSrcParams.v[3] = v24;
      Dvar_SetFloat_Internal(r_compressedSunShadowFilteringMaxRadiusDebug, *(float *)&_XMM6);
      Dvar_SetFloat_Internal(r_compressedSunShadowFilteringFarZDebug, *(float *)&_XMM7);
    }
  }
  else
  {
    LODWORD(_XMM6) = 0;
    LODWORD(_XMM7) = 0;
    v7 = 0.0;
  }
  outData->sunShadow.csmFilteringNearZ = v7;
  outData->sunShadow.csmFilteringFarZ = *(float *)&_XMM7;
  outData->sunShadow.csmFilteringMaxRadius = *(float *)&_XMM6;
}

/*
==============
R_CompressedSunShadow_DrawOverlay
==============
*/

void __fastcall R_CompressedSunShadow_DrawOverlay(const GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, double _XMM2_8)
{
  GfxWorld *world; 
  const GfxCmdBufContext *v5; 
  int integer; 
  __int64 reserved_high; 
  unsigned int v9; 
  float height; 
  float v11; 
  float v12; 
  unsigned int v13; 
  float v14; 
  float v15; 
  unsigned int v16; 
  GfxCmdBufSourceState *source; 
  unsigned int v18; 
  GfxColor v19; 
  float v20; 
  float v21; 
  __int128 v22; 
  float v23; 
  GfxImage *blackImage; 
  GfxCmdBufInput *p_input; 
  int v26; 
  int v27; 
  int v28; 
  unsigned int forestSize; 
  unsigned int v30; 
  int *v31; 
  GfxColor v32; 
  float v33; 
  float v34; 
  int v35; 
  int v36; 
  int v37; 
  float v38; 
  float v39; 
  GfxColor v40; 
  const GfxCmdBufContext *v41; 
  unsigned int v42; 
  unsigned int v43; 
  int v44; 
  __int64 m_transientIndex; 
  int v46; 
  __int64 v47; 
  float v48; 
  __int64 v49; 
  unsigned int v50; 
  float v51; 
  __int64 m_tileIndex; 
  unsigned int v53; 
  unsigned int v54; 
  CssLodOverride *v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  unsigned int v61; 
  unsigned int m_copyDataJobsCount; 
  const GfxCmdBufContext *v63; 
  unsigned int v64; 
  unsigned int v65; 
  const GfxCompressedSunShadowDataTemp *m_data; 
  unsigned int v67; 
  unsigned int *tilesIndices; 
  float v69; 
  float v70; 
  float v71; 
  const char *v72; 
  unsigned int v73; 
  float v74; 
  __int128 v75; 
  __int128 v76; 
  __int128 v77; 
  unsigned int m_streamedDataSize; 
  unsigned int v79; 
  __int64 m_firstFreeOffset; 
  __int64 v81; 
  float v82; 
  float v83; 
  float v84; 
  int v85; 
  __int64 v88; 
  __int64 v94; 
  unsigned int *p_m_size; 
  __int64 v104; 
  unsigned int v105; 
  __int64 v106; 
  float v107; 
  float v108; 
  int v109; 
  __int64 v112; 
  __int64 v118; 
  unsigned int *v129; 
  __int64 v130; 
  __int64 v131; 
  float v132; 
  float v133; 
  unsigned int v134; 
  char *v135; 
  float v136; 
  float v137; 
  float v138; 
  __int128 v139; 
  float v140; 
  __int128 v144; 
  __int128 v145; 
  unsigned int v146; 
  float v147; 
  float m_size; 
  float v149; 
  float v150; 
  __int128 v153; 
  __int128 v160; 
  GfxCmdBufContext v163; 
  GfxCamera *p_camera; 
  float v165; 
  float v166; 
  float v167; 
  float resolution; 
  float v169; 
  float v170; 
  unsigned int v171; 
  float v172; 
  GfxCmdBufContext v173; 
  unsigned int v174; 
  float v175; 
  GfxCmdBufContext v176; 
  GfxColor v177; 
  char v178; 
  _QWORD v179[3]; 
  GfxColor v180; 
  GfxColor v181; 
  int v182; 
  int v183; 
  int v184; 
  GfxCmdBufSourceState *v185; 
  unsigned int v186; 
  int v187; 
  __int64 v188; 
  float v189; 
  float v190; 
  unsigned int v191; 
  unsigned int v192; 
  unsigned int v193; 
  const GfxCmdBufContext *v194; 
  const GfxViewInfo *v195; 
  GfxWorld *v196; 
  GfxCmdBufContext v197; 
  tmat33_t<vec3_t> outViewMatrix; 
  GfxPointVertex v199; 
  float v200; 
  float v201; 
  int v202; 
  _BYTE v203[72]; 
  char v204[64]; 
  int v205; 
  char v206[64]; 
  int v207; 
  char v208[64]; 
  int v209; 
  char v210[64]; 
  int v211; 
  char v212[64]; 
  int v213; 
  char v214[64]; 
  char dest[2][8]; 
  char v216[128]; 
  char v217[128]; 
  char v218[128]; 
  char v219[128]; 
  char v220[128]; 
  char v221[128]; 
  char v222[128]; 
  char v223[128]; 
  char v224[128]; 
  char v225[128]; 
  char v226[128]; 

  world = rgp.world;
  v195 = viewInfo;
  v5 = gfxContext;
  v194 = gfxContext;
  v196 = rgp.world;
  if ( rgp.world )
  {
    if ( r_compressedSunShadowOverlay )
    {
      integer = r_compressedSunShadowOverlay->current.integer;
      if ( integer )
      {
        reserved_high = HIWORD(rgp.world->draw.compressedSunShadowParams.reserved);
        v186 = reserved_high;
        if ( (_DWORD)reserved_high )
        {
          _XMM9 = LODWORD(FLOAT_30_0);
          v9 = rgp.world->draw.compressedSunShadowParams.forestSize / (unsigned int)reserved_high;
          height = (float)viewInfo->displayViewport.height;
          v11 = (float)(height * 0.25) + 64.0;
          v12 = (float)v9;
          v13 = v9;
          v14 = (float)reserved_high;
          v15 = v14 * 30.0;
          if ( (unsigned int)reserved_high > v9 )
            v13 = reserved_high;
          v193 = rgp.world->draw.compressedSunShadowParams.forestSize / (unsigned int)reserved_high;
          v189 = v12 * 30.0;
          v190 = v14 * 30.0;
          v16 = I_power2Ceil(v13);
          source = v5->source;
          v18 = 0;
          v181.packed = -1;
          v19.packed = -1;
          v192 = v16;
          v180.packed = -16777216;
          v178 = 0;
          v20 = FLOAT_40_0;
          if ( integer == 1 )
          {
            v21 = (float)v16;
            v22 = LODWORD(FLOAT_1_0);
            *(float *)&v22 = 1.0 / v21;
            _XMM1 = v22;
            v23 = (float)(1.0 / v21) * v14;
            R_SetCodeBuffer(source, 0x28u, &g_worldDraw->compressedSunShadowBuffer);
            R_SetCodeBuffer(source, 0x29u, &g_worldDraw->compressedSunShadowBuffer);
            R_SetCodeBuffer(source, 0x2Au, &g_worldDraw->compressedSunShadowBuffer);
            if ( 1.0 != source->input.consts[17].v[0] || source->input.consts[17].v[1] != 0.0 || source->input.consts[17].v[2] != 0.0 || source->input.consts[17].v[3] != 0.0 )
            {
              *(_QWORD *)source->input.consts[17].v = 1065353216i64;
              *(_QWORD *)&source->input.consts[17].xyz.z = 0i64;
              ++source->constVersions[17];
            }
            blackImage = rgp.blackImage;
            if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
              __debugbreak();
            p_input = &source->input;
            if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
              __debugbreak();
            p_input->codeImages[4] = blackImage;
            *(_OWORD *)&_XMM2_8 = LODWORD(FLOAT_30_0);
            v197 = *v5;
            RB_DrawStretchPic(&v197, rgp.shadowOverlayMaterial, 30.0, v11, v15, v12 * 30.0, 0.0, 0.0, v23, (float)(1.0 / v21) * v12, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
            v197 = *v5;
            RB_EndTessSurfaceInternal(&v197, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp(2561)");
            v178 = 1;
          }
          else if ( integer == 2 )
          {
            if ( !s_cssStreaming.m_initialized )
              return;
            if ( s_cssStreaming.m_enabled )
            {
              v184 = -16776961;
              v26 = -16776961;
              v182 = -16769024;
              v27 = -16769024;
              v183 = -16711681;
              v28 = -16711681;
              v185 = (GfxCmdBufSourceState *)0xFF00C000FF00FF00i64;
              v187 = -16744448;
              if ( s_cssStreaming.m_forestDataCopied )
              {
                forestSize = world->draw.compressedSunShadowParams.forestSize;
                v30 = 0;
                v191 = forestSize;
                if ( forestSize )
                {
                  v31 = (int *)((char *)s_cssStreaming.m_compressedSunShadowBuffer->data + 32);
                  do
                  {
                    v32.packed = -16776961;
                    if ( *v31 )
                    {
                      v32.packed = -16711681;
                      if ( *v31 < 0 )
                        v32.packed = -16769024;
                    }
                    v33 = (float)(v30 / v186);
                    v197 = *v5;
                    v34 = (float)(v30 % v186);
                    RB_DrawRect2D(&v197, (float)(v34 + 1.0) * 30.0, (float)(v33 * 30.0) + v11, 30.0, 30.0, v32);
                    ++v30;
                    ++v31;
                  }
                  while ( v30 < v191 );
                  v19 = v181;
                }
              }
              v35 = (int)v185;
              v36 = HIDWORD(v185);
              v197.source = v185;
              LODWORD(v197.state) = v187;
              *(_QWORD *)&dest[0][0] = 0i64;
              v37 = R_TextHeight(backEnd.debugFont);
              v38 = FLOAT_0_5;
              v39 = (float)(30.0 - (float)v37) * 0.5;
              if ( s_cssStreaming.m_zonesCount )
              {
                v40 = v180;
                v41 = v194;
                v42 = 0;
                v43 = v186;
                v44 = v37;
                do
                {
                  m_transientIndex = s_cssStreaming.m_zones[v42].m_transientIndex;
                  v188 = 5i64 * v42;
                  Com_sprintf<8>(dest, "%d", m_transientIndex);
                  v46 = R_TextWidth(dest[0], 8, backEnd.debugFont, v44);
                  v47 = v188;
                  v48 = 30.0 - (float)v46;
                  v49 = *(&s_cssStreaming.m_zones[0].m_firstTree + 2 * v188);
                  v50 = *(&s_cssStreaming.m_zones[0].m_lastTree + 2 * v188);
                  v180.packed = v49;
                  v51 = v48 * v38;
                  if ( (unsigned int)v49 <= v50 )
                  {
                    do
                    {
                      m_tileIndex = s_cssStreaming.m_trees[v49].m_tileIndex;
                      v53 = -1;
                      if ( (unsigned int)m_tileIndex < 0x400 )
                      {
                        v54 = 0;
                        v55 = &s_cssStreaming.m_lodOverrides[m_tileIndex];
                        while ( !v55->m_value[0] )
                        {
                          ++v54;
                          v55 = (CssLodOverride *)((char *)v55 + 4);
                          if ( v54 >= 3 )
                            goto LABEL_40;
                        }
                        v53 = v54;
                      }
LABEL_40:
                      if ( v53 == *(&s_cssStreaming.m_zones[0].m_lod + 2 * v47) )
                      {
                        v56 = (float)((unsigned int)m_tileIndex % v43);
                        v57 = (float)((unsigned int)m_tileIndex / v43);
                        v58 = (float)(v56 + 1.0) * 30.0;
                        v59 = (float)(v57 * 30.0) + v11;
                        *(GfxCmdBufContext *)&v179[1] = *v41;
                        RB_DrawRect2D((GfxCmdBufContext *)&v179[1], v58, v59, 30.0, 30.0, *(const GfxColor *)((char *)&v197.source + 4 * v53));
                        v60 = v59 + (float)(30.0 - v39);
                        *(GfxCmdBufContext *)&v179[1] = *v41;
                        RB_DrawText((GfxCmdBufContext *)&v179[1], dest[0], backEnd.debugFont, (float)(v58 + v51) + 1.0, v60 + 1.0, v40);
                        *(GfxCmdBufContext *)&v179[1] = *v41;
                        RB_DrawText((GfxCmdBufContext *)&v179[1], dest[0], backEnd.debugFont, v58 + v51, v60, v19);
                        v47 = v188;
                      }
                      v61 = *(&s_cssStreaming.m_zones[0].m_lastTree + 2 * v47);
                      v49 = v180.packed + 1;
                      v180.packed = v49;
                    }
                    while ( (unsigned int)v49 <= v61 );
                    v38 = FLOAT_0_5;
                  }
                  ++v42;
                }
                while ( v42 < s_cssStreaming.m_zonesCount );
                v27 = v182;
                v28 = v183;
                v26 = v184;
                v35 = (int)v185;
                v36 = HIDWORD(v185);
                v15 = v190;
              }
              m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
              LODWORD(v188) = 0;
              if ( s_cssStreaming.m_copyDataJobsCount )
              {
                v63 = v194;
                v64 = v188;
                v65 = v186;
                do
                {
                  m_data = s_cssStreaming.m_copyDataJobs[v64].m_data;
                  if ( m_data )
                  {
                    v67 = 0;
                    if ( m_data->tilesCount )
                    {
                      do
                      {
                        tilesIndices = m_data->tilesIndices;
                        *(GfxCmdBufContext *)&v179[1] = *v63;
                        v69 = (float)(tilesIndices[v67] / v65);
                        v70 = (float)(v69 * 30.0) + v11;
                        v71 = (float)(tilesIndices[v67] % v65);
                        RB_DrawRect2D((GfxCmdBufContext *)&v179[1], (float)(v71 + 1.0) * 30.0, v70, 30.0, 30.0, (const GfxColor)-8355840);
                        ++v67;
                      }
                      while ( v67 < m_data->tilesCount );
                      m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
                    }
                  }
                  ++v64;
                }
                while ( v64 < m_copyDataJobsCount );
                v19 = v181;
                v27 = v182;
                v28 = v183;
                v26 = v184;
                v35 = (int)v185;
                v36 = HIDWORD(v185);
              }
              *(_DWORD *)v203 = v26;
              Com_sprintf<64>((char (*)[64])&v203[4], "Missing tile");
              *(_DWORD *)&v203[68] = v28;
              Com_sprintf<64>((char (*)[64])v204, "Value tile");
              v205 = v27;
              Com_sprintf<64>((char (*)[64])v206, "Always loaded data");
              v207 = v35;
              Com_sprintf<64>((char (*)[64])v208, "Streamed LOD 0");
              v209 = v36;
              Com_sprintf<64>((char (*)[64])v210, "Streamed LOD 1");
              v211 = v187;
              Com_sprintf<64>((char (*)[64])v212, "Streamed LOD 2");
              v213 = -8355840;
              Com_sprintf<64>((char (*)[64])v214, "Copying");
              v72 = &v203[4];
              v5 = v194;
              v73 = 0;
              v74 = v15 + 40.0;
              do
              {
                v75 = 0i64;
                *(float *)&v75 = (float)v73;
                *(float *)&v75 = (float)(*(float *)&v75 * 30.0) + (float)(v11 + 360.0);
                v76 = v75;
                *(GfxCmdBufContext *)&v179[1] = *v5;
                RB_DrawRect2D((GfxCmdBufContext *)&v179[1], v74, *(float *)&v75, 30.0, 30.0, (const GfxColor)-1);
                v177 = *(GfxColor *)(v72 - 4);
                *(float *)&v75 = *(float *)&v75 + 1.0;
                *(_OWORD *)&_XMM2_8 = v75;
                *(GfxCmdBufContext *)&v179[1] = *v5;
                RB_DrawRect2D((GfxCmdBufContext *)&v179[1], v74 + 1.0, *(float *)&v75, 28.0, 28.0, v177);
                v77 = v76;
                *(float *)&v77 = *(float *)&v76 + 20.0;
                _XMM1 = v77;
                *(GfxCmdBufContext *)&v179[1] = *v5;
                RB_DrawText((GfxCmdBufContext *)&v179[1], v72, backEnd.debugFont, v74 + 40.0, *(float *)&v76 + 20.0, v19);
                ++v73;
                v72 += 68;
              }
              while ( v73 < 7 );
              *(GfxCmdBufContext *)&v179[1] = *v5;
              RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v179[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp(2709)");
              v20 = FLOAT_40_0;
              v15 = v190;
              LODWORD(reserved_high) = v186;
              v18 = 0;
              v178 = 1;
            }
          }
          if ( s_cssStreaming.m_initialized && s_cssStreaming.m_enabled )
          {
            m_streamedDataSize = s_cssStreaming.m_streamedDataSize;
            v79 = 0;
            m_firstFreeOffset = s_cssStreaming.m_firstFreeOffset;
            v81 = 0i64;
            v82 = (float)s_cssStreaming.m_streamedDataSize;
            v83 = (float)s_cssStreaming.m_firstFreeOffset;
            v84 = v83 / v82;
            if ( s_cssStreaming.m_lruMemoryBlocksCount )
            {
              if ( s_cssStreaming.m_lruMemoryBlocksCount >= 8 )
              {
                v85 = 2;
                __asm
                {
                  vpxor   xmm1, xmm1, xmm1
                  vpxor   xmm2, xmm2, xmm2
                }
                do
                {
                  v88 = v81;
                  v81 = (unsigned int)(v81 + 8);
                  _XMM0 = s_cssStreaming.m_lruMemoryBlocks[v88].m_size;
                  __asm
                  {
                    vpinsrd xmm0, xmm0, dword ptr [r13+rdx*4+18h], 1
                    vpinsrd xmm0, xmm0, dword ptr [r13+r8*4+18h], 2
                    vpinsrd xmm0, xmm0, dword ptr [r13+r9*4+18h], 3
                    vpaddd  xmm1, xmm0, xmm1
                  }
                  v94 = (unsigned int)(v85 + 2);
                  v85 += 8;
                  _XMM0 = s_cssStreaming.m_lruMemoryBlocks[v94].m_size;
                  __asm
                  {
                    vpinsrd xmm0, xmm0, dword ptr [r13+rdx*4+18h], 1
                    vpinsrd xmm0, xmm0, dword ptr [r13+r8*4+18h], 2
                    vpinsrd xmm0, xmm0, dword ptr [r13+r9*4+18h], 3
                    vpaddd  xmm2, xmm0, xmm2
                  }
                }
                while ( (unsigned int)v81 < (s_cssStreaming.m_lruMemoryBlocksCount & 0xFFFFFFF8) );
                m_streamedDataSize = s_cssStreaming.m_streamedDataSize;
                m_firstFreeOffset = s_cssStreaming.m_firstFreeOffset;
                __asm
                {
                  vpaddd  xmm1, xmm1, xmm2
                  vpsrldq xmm0, xmm1, 8
                  vpaddd  xmm2, xmm1, xmm0
                  vpsrldq xmm0, xmm2, 4
                  vpaddd  xmm0, xmm2, xmm0
                }
                v79 = _XMM0;
              }
              if ( (unsigned int)v81 < s_cssStreaming.m_lruMemoryBlocksCount )
              {
                p_m_size = &s_cssStreaming.m_lruMemoryBlocks[(unsigned int)v81].m_size;
                v104 = (unsigned int)(s_cssStreaming.m_lruMemoryBlocksCount - v81);
                do
                {
                  v79 += *p_m_size;
                  p_m_size += 3;
                  --v104;
                }
                while ( v104 );
              }
            }
            v105 = 0;
            v106 = 0i64;
            v107 = (float)v79;
            LODWORD(v188) = m_firstFreeOffset - v79;
            LODWORD(v179[0]) = m_streamedDataSize - (m_firstFreeOffset - v79);
            v108 = v107 / v82;
            if ( s_cssStreaming.m_zonesCount )
            {
              if ( s_cssStreaming.m_zonesCount >= 8 )
              {
                v109 = 2;
                __asm
                {
                  vpxor   xmm1, xmm1, xmm1
                  vpxor   xmm2, xmm2, xmm2
                }
                do
                {
                  v112 = v106;
                  v106 = (unsigned int)(v106 + 8);
                  _XMM0 = s_cssStreaming.m_zones[v112].m_size;
                  __asm
                  {
                    vpinsrd xmm0, xmm0, dword ptr [r15+rdx*4+1824h], 1
                    vpinsrd xmm0, xmm0, dword ptr [r15+r8*4+1824h], 2
                    vpinsrd xmm0, xmm0, dword ptr [r15+r9*4+1824h], 3
                    vpaddd  xmm1, xmm0, xmm1
                  }
                  v118 = (unsigned int)(v109 + 2);
                  v109 += 8;
                  _XMM0 = s_cssStreaming.m_zones[v118].m_size;
                  __asm
                  {
                    vpinsrd xmm0, xmm0, dword ptr [r15+rdx*4+1824h], 1
                    vpinsrd xmm0, xmm0, dword ptr [r15+r8*4+1824h], 2
                    vpinsrd xmm0, xmm0, dword ptr [r15+r9*4+1824h], 3
                    vpaddd  xmm2, xmm0, xmm2
                  }
                }
                while ( (unsigned int)v106 < (s_cssStreaming.m_zonesCount & 0xFFFFFFF8) );
                LODWORD(reserved_high) = v186;
                m_firstFreeOffset = s_cssStreaming.m_firstFreeOffset;
                __asm
                {
                  vpaddd  xmm1, xmm1, xmm2
                  vpsrldq xmm0, xmm1, 8
                  vpaddd  xmm2, xmm1, xmm0
                  vpsrldq xmm0, xmm2, 4
                  vpaddd  xmm0, xmm2, xmm0
                }
                v105 = _XMM0;
              }
              if ( (unsigned int)v106 < s_cssStreaming.m_zonesCount )
              {
                v129 = &s_cssStreaming.m_zones[(unsigned int)v106].m_size;
                v130 = (unsigned int)(s_cssStreaming.m_zonesCount - v106);
                do
                {
                  v105 += *v129;
                  v129 += 5;
                  --v130;
                }
                while ( v130 );
              }
            }
            Com_sprintf<128>((char (*)[128])v216, "Linearly allocated: %u (%f)", m_firstFreeOffset, v84);
            Com_sprintf<128>((char (*)[128])v217, "LRU Blocks count: %u, size: %u (%f)", s_cssStreaming.m_lruMemoryBlocksCount, v79, v108);
            v131 = (unsigned int)v188;
            Com_sprintf<128>((char (*)[128])v218, "Total allocated memory: %u", (unsigned int)v188);
            Com_sprintf<128>((char (*)[128])v219, "Free memory: %u", LODWORD(v179[0]));
            v132 = (float)v105;
            v133 = (float)v131;
            Com_sprintf<128>((char (*)[128])v220, "Used memory: %u (%f)", v105, (float)(v132 / v133));
            Com_sprintf<128>((char (*)[128])v221, "Stream-in jobs count: %u, copy jobs count %u", s_cssStreaming.m_streamInJobsCount, s_cssStreaming.m_copyDataJobsCount);
            Com_sprintf<128>((char (*)[128])v222, "Allocated zones: %u trees: %u", s_cssStreaming.m_zonesCount, s_cssStreaming.m_treesCount);
            Com_sprintf<128>((char (*)[128])v223, "Skipped zones LOD 0: %u", s_cssStreaming.m_skippedZones[0]);
            Com_sprintf<128>((char (*)[128])v224, "Skipped zones LOD 1: %u", s_cssStreaming.m_skippedZones[1]);
            Com_sprintf<128>((char (*)[128])v225, "Skipped zones LOD 2: %u", s_cssStreaming.m_skippedZones[2]);
            Com_sprintf<128>((char (*)[128])v226, "CssStreaming size: %u kB", 74i64);
            v134 = 0;
            v135 = v216;
            v136 = v15 + v20;
            do
            {
              v137 = (float)v134;
              *(GfxCmdBufContext *)&v179[1] = *v5;
              RB_DrawText((GfxCmdBufContext *)&v179[1], v135, backEnd.debugFont, v136, (float)((float)(v137 * 30.0) + v11) + 20.0, v19);
              ++v134;
              v135 += 128;
            }
            while ( v134 < 0xB );
            if ( s_cssStreaming.m_defragmentationState - 2 <= 1 )
            {
              *(GfxCmdBufContext *)&v179[1] = *v5;
              RB_DrawText((GfxCmdBufContext *)&v179[1], "DEFRAGMENTING", backEnd.debugFont, v136, v11 + 350.0, (const GfxColor)-16776961);
            }
            *(GfxCmdBufContext *)&v179[1] = *v5;
            RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v179[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp(2753)");
            v138 = v189;
            v139 = 0i64;
            *(float *)&v139 = (float)v195->displayViewport.width;
            v140 = (float)(v189 + v11) + 10.0;
            *(float *)&v139 = *(float *)&v139 - v20;
            _XMM0 = v139;
            __asm
            {
              vmaxss  xmm2, xmm0, xmm9
              vminss  xmm6, xmm2, xmm1
            }
            *(GfxCmdBufContext *)&v179[1] = *v5;
            RB_DrawRect2D((GfxCmdBufContext *)&v179[1], 30.0, v140, *(float *)&_XMM6, 30.0, (const GfxColor)-16711936);
            v144 = 0i64;
            *(float *)&v144 = (float)s_cssStreaming.m_firstFreeOffset;
            *(float *)&_XMM0 = (float)s_cssStreaming.m_streamedDataSize;
            *(float *)&v144 = (float)(*(float *)&v144 / *(float *)&_XMM0) * *(float *)&_XMM6;
            v145 = v144;
            *(GfxCmdBufContext *)&v179[1] = *v5;
            RB_DrawRect2D((GfxCmdBufContext *)&v179[1], 30.0, v140, *(float *)&v144, 30.0, (const GfxColor)-65536);
            v146 = 0;
            if ( s_cssStreaming.m_lruMemoryBlocksCount )
            {
              do
              {
                *(GfxCmdBufContext *)&v179[1] = *v5;
                v147 = (float)s_cssStreaming.m_streamedDataSize;
                m_size = (float)s_cssStreaming.m_lruMemoryBlocks[v146].m_size;
                v149 = (float)(m_size / v147) * *(float *)&_XMM6;
                v150 = (float)(s_cssStreaming.m_lruMemoryBlocks[v146].m_offset - s_cssStreaming.m_alwaysLoadedDataSize);
                RB_DrawRect2D((GfxCmdBufContext *)&v179[1], (float)((float)(v150 / v147) * *(float *)&_XMM6) + 30.0, v140, v149, 30.0, (const GfxColor)-16776961);
                ++v146;
              }
              while ( v146 < s_cssStreaming.m_lruMemoryBlocksCount );
              LODWORD(reserved_high) = v186;
              v18 = 0;
            }
            __asm { vunpcklps xmm0, xmm9, xmm7 }
            *(double *)v203 = *(double *)&_XMM0;
            v153 = _XMM6;
            *(float *)&v153 = *(float *)&_XMM6 + 30.0;
            _XMM2 = v153;
            __asm { vunpcklps xmm0, xmm2, xmm7 }
            *(double *)&v203[16] = *(double *)&_XMM0;
            __asm { vunpcklps xmm0, xmm9, xmm4 }
            *(double *)&v203[32] = *(double *)&_XMM0;
            __asm { vunpcklps xmm0, xmm2, xmm4 }
            *(double *)&v203[48] = *(double *)&_XMM0;
            __asm { vunpcklps xmm0, xmm9, xmm7 }
            *(double *)&v203[64] = *(double *)&_XMM0;
            *(_DWORD *)&v203[8] = 0;
            *(_DWORD *)&v203[24] = 0;
            __asm { vunpcklps xmm0, xmm9, xmm4 }
            *(double *)&v204[8] = *(double *)&_XMM0;
            v160 = v145;
            *(float *)&v160 = *(float *)&v145 + 30.0;
            _XMM3 = v160;
            __asm { vunpcklps xmm0, xmm3, xmm0 }
            *(double *)&v204[24] = *(double *)&_XMM0;
            *(_DWORD *)&v203[40] = 0;
            __asm { vunpcklps xmm0, xmm3, xmm0 }
            *(double *)&v204[40] = *(double *)&_XMM0;
            v163 = *v5;
            *(_DWORD *)&v203[12] = -1;
            *(_DWORD *)&v203[28] = -1;
            *(_DWORD *)&v203[44] = -1;
            *(_DWORD *)&v203[60] = -1;
            *(_DWORD *)&v204[4] = -1;
            *(_DWORD *)&v204[20] = -1;
            *(_DWORD *)&v204[36] = -1;
            *(_DWORD *)&v204[52] = -1;
            *(_DWORD *)v206 = -1;
            *(_DWORD *)&v206[16] = -1;
            *(GfxCmdBufContext *)&v179[1] = v163;
            *(_DWORD *)&v203[56] = 0;
            *(_DWORD *)v204 = 0;
            *(_DWORD *)&v204[16] = 0;
            *(_DWORD *)&v204[32] = 0;
            *(_DWORD *)&v204[48] = 0;
            RB_DrawLines2D((GfxCmdBufContext *)&v179[1], 10, 1, (const GfxPointVertex *)v203);
            *(GfxCmdBufContext *)&v179[1] = *v5;
            RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v179[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp(2792)");
          }
          else
          {
            v138 = v189;
          }
          if ( v178 )
          {
            outViewMatrix.m[0].v[0] = 0.0;
            memset(&outViewMatrix.row0.y, 0, 32);
            p_camera = &backEndData->viewInfo->viewParmsSet.frames[0].viewParms.camera;
            R_CompressedSunShadow_GetViewMatrix(&backEndData->sunShadow.lightDir, &outViewMatrix);
            if ( p_camera == (GfxCamera *)&v197 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
              __debugbreak();
            v165 = p_camera->origin.v[1];
            v166 = p_camera->origin.v[0];
            v167 = p_camera->origin.v[2];
            resolution = (float)v196->draw.compressedSunShadowParams.resolution;
            v169 = 1.0 / (float)(resolution * v196->draw.compressedSunShadowParams.sampleSize);
            *(GfxCmdBufContext *)&v179[1] = *v5;
            v170 = (float)v192;
            RB_DrawRect2D((GfxCmdBufContext *)&v179[1], (float)((float)((float)((float)((float)((float)((float)((float)(v165 * outViewMatrix.m[1].v[0]) + (float)(v166 * outViewMatrix.m[0].v[0])) + (float)(v167 * outViewMatrix.m[2].v[0])) - v196->draw.compressedSunShadowParams.centerX) * v169) + 0.5) * v170) * 30.0) + 25.0, (float)((float)((float)((float)(0.5 - (float)((float)((float)((float)((float)(v166 * outViewMatrix.m[0].v[1]) + (float)(v165 * outViewMatrix.m[1].v[1])) + (float)(v167 * outViewMatrix.m[2].v[1])) - v196->draw.compressedSunShadowParams.centerY) * v169)) * v170) * 30.0) + v11) - 5.0, 10.0, 10.0, (const GfxColor)-65281);
            v171 = 0;
            *(_DWORD *)v199.color = -1;
            v202 = -1;
            v199.xyz.v[1] = v11;
            v201 = v138 + v11;
            do
            {
              v172 = (float)v171;
              v173 = *v5;
              v200 = (float)(v172 + 1.0) * 30.0;
              v199.xyz.v[0] = v200;
              *(GfxCmdBufContext *)&v179[1] = v173;
              RB_DrawLines2D((GfxCmdBufContext *)&v179[1], 2, 1, &v199);
              ++v171;
            }
            while ( v171 <= (unsigned int)reserved_high );
            v174 = v193;
            v200 = v190 + 30.0;
            v199.xyz.v[0] = FLOAT_30_0;
            do
            {
              v175 = (float)v18;
              v176 = *v5;
              v201 = (float)(v175 * 30.0) + v11;
              v199.xyz.v[1] = v201;
              *(GfxCmdBufContext *)&v179[1] = v176;
              RB_DrawLines2D((GfxCmdBufContext *)&v179[1], 2, 1, &v199);
              ++v18;
            }
            while ( v18 <= v174 );
            *(GfxCmdBufContext *)&v179[1] = *v5;
            RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v179[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp(2831)");
          }
        }
      }
    }
  }
}

/*
==============
R_CompressedSunShadow_ExtractClipPlanes
==============
*/
void R_CompressedSunShadow_ExtractClipPlanes(ComputeCmdBufState *computeState, R_RT_BufferHandle *clipPlanesBuffer)
{
  unsigned int rwView; 
  __int64 m_bufferSize; 
  const GfxShaderBufferRWView *v6; 
  const R_RT_Surface *Surface; 
  const GfxShaderBufferRWView *v8; 
  unsigned int v9; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  GfxShaderBufferView *views; 

  if ( rg.useCompressedSunShadowClipPlanes )
  {
    if ( rgp.world )
    {
      if ( rgp.world->draw.compressedSunShadowSize )
      {
        rwView = rgp.world->draw.compressedSunShadowBuffer.rwView.rwView;
        if ( rwView != 3 && rwView && rgp.world->draw.compressedSunShadowBuffer.data && rgp.world->draw.compressedSunShadowBuffer.view.view >= 2 && s_cssClipPlanes.m_data && s_cssClipPlanes.m_taskState != Finished )
        {
          m_bufferSize = s_cssClipPlanes.m_bufferSize;
          if ( s_cssClipPlanes.m_taskState )
          {
            if ( s_cssClipPlanes.m_taskState == Dispatched_Wait )
            {
              s_cssClipPlanes.m_taskState = Dispatched;
            }
            else if ( s_cssClipPlanes.m_taskState == Dispatched )
            {
              v9 = (int)s_cssClipPlanes.m_data[1];
              v10 = (int)*s_cssClipPlanes.m_data;
              if ( v10 * v9 == s_cssClipPlanes.m_expectedForestSize )
              {
                views = (GfxShaderBufferView *)__PAIR64__(v9, v10);
                s_cssClipPlanes.m_forestResolution = (base_vec2_t<unsigned int>)__PAIR64__(v9, v10);
                v11 = I_power2Ceil(v9);
                v12 = I_power2Ceil(s_cssClipPlanes.m_forestResolution.v[0]);
                s_cssClipPlanes.m_taskState = Finished;
                s_cssClipPlanes.m_dataState = Extracted;
                if ( v12 > v11 )
                  v11 = v12;
                s_cssClipPlanes.m_gridResolution = v11;
              }
            }
          }
          else
          {
            R_SetComputeShader(computeState, rgp.csmExtractClipPlanes);
            views = &rgp.world->draw.compressedSunShadowBuffer.view;
            R_SetComputeViews(computeState, 0, 1, (const GfxShaderBufferView *const *)&views);
            views = (GfxShaderBufferView *)R_RT_BufferHandle::GetRWView(clipPlanesBuffer);
            R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
            R_Dispatch(computeState, ((unsigned __int64)s_cssClipPlanes.m_expectedForestSize + 63) >> 6, 1u, 1u);
            R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
            v6 = R_RT_BufferHandle::GetRWView(clipPlanesBuffer);
            R_HW_AddResourceTransition(computeState, v6, 0, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
            R_FlushResourceTransitions(computeState);
            Surface = R_RT_Handle::GetSurface(clipPlanesBuffer);
            if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 561, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
              __debugbreak();
            R_MemCpy(computeState, s_cssClipPlanes.m_data, Surface->m_buffer.m_wrappedBuffer.data, 4 * m_bufferSize, 1);
            v8 = R_RT_BufferHandle::GetRWView(clipPlanesBuffer);
            R_HW_AddResourceTransition(computeState, v8, 0, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
            R_FlushResourceTransitions(computeState);
            s_cssClipPlanes.m_taskState = Dispatched_Wait;
          }
        }
      }
    }
  }
}

/*
==============
R_CompressedSunShadow_GetAlgorithm
==============
*/
GfxCompressedSunShadowAlgorithm *R_CompressedSunShadow_GetAlgorithm(unsigned int algorithmId)
{
  return &s_csmAlgorithms[algorithmId];
}

/*
==============
R_CompressedSunShadow_GetAlgorithmId
==============
*/
__int64 R_CompressedSunShadow_GetAlgorithmId(const void *compressedSunShadow)
{
  return *((_DWORD *)compressedSunShadow + 1) >> 29;
}

/*
==============
R_CompressedSunShadow_GetBuffer
==============
*/
GfxWrappedRWBuffer *R_CompressedSunShadow_GetBuffer()
{
  if ( rg.useCompressedSunShadow - 1 > 1 )
    return (GfxWrappedRWBuffer *)&gfxBuf.dummyBuffer;
  else
    return &rgp.world->draw.compressedSunShadowBuffer;
}

/*
==============
R_CompressedSunShadow_GetCacheEntryClipPlanes
==============
*/
void R_CompressedSunShadow_GetCacheEntryClipPlanes(const GfxSunShadow *sunShadow, int gridX, int gridY, float sampleSize, float *outNearClip, float *outFarClip)
{
  GfxWorld *world; 
  float resolution; 
  float v11; 
  float v12; 
  unsigned int v13; 
  float v14; 
  float v15; 
  float v16; 
  unsigned __int8 v17; 
  float v19; 
  bool v20; 

  world = rgp.world;
  if ( !VecNCompareCustomEpsilon(sunShadow->lightDir.v, rgp.world->draw.compressedSunShadowParams.sunDirection.v, 0.001, 3) || s_cssClipPlanes.m_dataState != Extracted )
    goto LABEL_10;
  resolution = (float)world->draw.compressedSunShadowParams.resolution;
  v11 = 1.0 / (float)(resolution * world->draw.compressedSunShadowParams.sampleSize);
  v12 = (float)(R_SunShadow_GetMapSize() >> 1);
  v13 = (int)(float)(v12 * sampleSize);
  v14 = (float)((float)(_mm_cvtepi32_ps((__m128i)(gridX * v13)).m128_f32[0] - world->draw.compressedSunShadowParams.centerX) * v11) + 0.5;
  v15 = 0.5 - (float)((float)(_mm_cvtepi32_ps((__m128i)(gridY * v13)).m128_f32[0] - world->draw.compressedSunShadowParams.centerY) * v11);
  v16 = _mm_cvtepi32_ps((__m128i)v13).m128_f32[0] * v11;
  v17 = R_CalculateCssClipPlanes(v14, v16 + v14, v15 - v16, v15, outNearClip, outFarClip);
  _XMM2 = LODWORD(sunShadow->staticNearClip);
  v19 = *outNearClip;
  v20 = *outFarClip > *(float *)&_XMM2 && v19 < sunShadow->staticFarClip && v19 < *outFarClip;
  if ( (v20 & v17) != 0 )
  {
    __asm { vmaxss  xmm0, xmm2, xmm0 }
    *outNearClip = *(float *)&_XMM0;
    _XMM1 = LODWORD(sunShadow->staticFarClip);
    __asm { vminss  xmm2, xmm1, dword ptr [rdi] }
    *outFarClip = *(float *)&_XMM2;
  }
  else
  {
LABEL_10:
    *outNearClip = sunShadow->staticNearClip;
    *outFarClip = sunShadow->staticFarClip;
  }
}

/*
==============
R_CompressedSunShadow_GetClipPlanesBufferSize
==============
*/
__int64 R_CompressedSunShadow_GetClipPlanesBufferSize()
{
  return s_cssClipPlanes.m_bufferSize;
}

/*
==============
R_CompressedSunShadow_GetClipPlanesScaleBias
==============
*/
void R_CompressedSunShadow_GetClipPlanesScaleBias(const GfxSunShadow *sunShadow, const float nearClip, const float farClip, float *outScale, float *outBias)
{
  float v5; 
  float v7; 
  float v8; 

  v5 = sunShadow->nearClip;
  if ( nearClip == v5 && farClip == sunShadow->farClip )
  {
    *outBias = 0;
    *outScale = FLOAT_1_0;
  }
  else
  {
    v7 = sunShadow->farClip;
    v8 = 1.0 / (float)(v7 - v5);
    *outBias = (float)(v7 - farClip) * v8;
    *outScale = (float)(farClip - nearClip) * v8;
  }
}

/*
==============
R_CompressedSunShadow_GetDataSize
==============
*/
__int64 R_CompressedSunShadow_GetDataSize(const void *compressedSunShadow)
{
  return *(unsigned int *)compressedSunShadow;
}

/*
==============
R_CompressedSunShadow_GetLookupMatrix
==============
*/
tmat44_t<vec4_t> *R_CompressedSunShadow_GetLookupMatrix()
{
  return &s_cssLookupMatrix;
}

/*
==============
R_CompressedSunShadow_GetSetup
==============
*/
GfxCompressedSunShadowSetup *R_CompressedSunShadow_GetSetup()
{
  if ( !s_cssSetup.m_shadowMapResolution && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 485, ASSERT_TYPE_ASSERT, "(s_cssSetup.m_shadowMapResolution != 0)", (const char *)&queryFormat, "s_cssSetup.m_shadowMapResolution != 0") )
    __debugbreak();
  return &s_cssSetup;
}

/*
==============
R_CompressedSunShadow_GetShaderGlobals
==============
*/
void R_CompressedSunShadow_GetShaderGlobals(const GfxViewInfo *viewInfo, const GfxSunShadow *sunShadow, vec4_t *outParams0, vec4_t *outParams1)
{
  const dvar_t *v4; 
  unsigned int flags; 
  unsigned int v10; 
  int v11; 
  float useCompressedSunShadow; 
  float compressedSunShadowFiltering; 
  __int128 csmFilteringFarZ_low; 
  float csmFilteringMaxRadius; 

  v4 = DCONST_DVARBOOL_sm_sunvisPrepass;
  if ( !DCONST_DVARBOOL_sm_sunvisPrepass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_sunvisPrepass") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v4->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v4->name) )
      __debugbreak();
  }
  v10 = v4->current.color[0];
  v11 = frameIndex;
  _XMM7 = LODWORD(FLOAT_1_0);
  useCompressedSunShadow = (float)rg.useCompressedSunShadow;
  outParams0->v[0] = useCompressedSunShadow;
  outParams0->v[1] = (float)v11;
  outParams0->v[2] = rg.compressedSunShadowBiasScale;
  _XMM0 = v10;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  frameIndex = v11 + 1;
  compressedSunShadowFiltering = 0.0;
  __asm { vblendvps xmm0, xmm7, xmm6, xmm2 }
  outParams0->v[3] = *(float *)&_XMM0;
  if ( R_PostAAHasTemporalSupersampling(viewInfo->viewportFeatures.m_postAAMode) )
    compressedSunShadowFiltering = (float)rg.compressedSunShadowFiltering;
  outParams1->v[0] = compressedSunShadowFiltering;
  outParams1->v[1] = sunShadow->csmFilteringFarZ;
  csmFilteringFarZ_low = LODWORD(sunShadow->csmFilteringFarZ);
  *(float *)&csmFilteringFarZ_low = sunShadow->csmFilteringFarZ - sunShadow->csmFilteringNearZ;
  _XMM1 = csmFilteringFarZ_low;
  csmFilteringMaxRadius = sunShadow->csmFilteringMaxRadius;
  __asm { vmaxss  xmm3, xmm1, xmm7 }
  outParams1->v[3] = 0.0;
  outParams1->v[2] = csmFilteringMaxRadius / *(float *)&_XMM3;
}

/*
==============
R_CompressedSunShadow_GetType
==============
*/
__int64 R_CompressedSunShadow_GetType()
{
  unsigned int rwView; 
  __int64 result; 
  unsigned int v2; 
  unsigned int v3; 
  int integer; 
  unsigned int MapSize; 

  if ( rgp.world && rgp.world->draw.compressedSunShadowSize && (rwView = rgp.world->draw.compressedSunShadowBuffer.rwView.rwView, rwView != 3) && rwView && rgp.world->draw.compressedSunShadowBuffer.data && rgp.world->draw.compressedSunShadowBuffer.view.view >= 2 )
  {
    result = 1i64;
    v2 = 2;
  }
  else
  {
    result = 0i64;
    v2 = 0;
  }
  v3 = result;
  if ( !r_compressedSunShadowDebug )
    return (unsigned int)result;
  integer = r_compressedSunShadowDebug->current.integer;
  switch ( integer )
  {
    case 0:
      return (unsigned int)result;
    case 1:
      return v2;
    case 2:
      return 0i64;
    case 3:
      MapSize = R_SunShadow_GetMapSize();
      if ( ((MapSize - 1) & MapSize) == 0 )
        return 3;
      return v3;
  }
  return result;
}

/*
==============
R_CompressedSunShadow_GetViewMatrix
==============
*/
void R_CompressedSunShadow_GetViewMatrix(const vec3_t *sunDirection, tmat33_t<vec3_t> *outViewMatrix)
{
  float v2; 
  __int128 v4; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  vec3_t cross; 
  vec3_t v0; 
  vec3_t v1; 

  v2 = sunDirection->v[1];
  v1.v[0] = sunDirection->v[0];
  v1.v[2] = sunDirection->v[2];
  v0.v[1] = 0.0;
  v1.v[1] = v2;
  if ( COERCE_FLOAT(LODWORD(v1.v[2]) & _xmm) <= 0.89999998 )
  {
    v0.v[0] = 0.0;
    v0.v[2] = FLOAT_1_0;
  }
  else
  {
    v0.v[0] = FLOAT_1_0;
    v0.v[2] = 0.0;
  }
  Vec3Cross(&v0, &v1, &cross);
  v4 = LODWORD(cross.v[1]);
  *(float *)&v4 = fsqrt((float)((float)(*(float *)&v4 * *(float *)&v4) + (float)(cross.v[0] * cross.v[0])) + (float)(cross.v[2] * cross.v[2]));
  _XMM3 = v4;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  cross.v[0] = cross.v[0] * (float)(1.0 / *(float *)&_XMM0);
  cross.v[2] = cross.v[2] * (float)(1.0 / *(float *)&_XMM0);
  cross.v[1] = cross.v[1] * (float)(1.0 / *(float *)&_XMM0);
  Vec3Cross(&v1, &cross, &v0);
  v8 = cross.v[1];
  v9 = v1.v[1];
  outViewMatrix->m[0].v[0] = cross.v[0];
  *(float *)&_XMM0 = cross.v[2];
  outViewMatrix->m[1].v[0] = v8;
  v10 = v0.v[0];
  outViewMatrix->m[2].v[0] = *(float *)&_XMM0;
  *(float *)&_XMM0 = v0.v[1];
  outViewMatrix->m[0].v[1] = v10;
  v11 = v0.v[2];
  outViewMatrix->m[1].v[1] = *(float *)&_XMM0;
  *(float *)&_XMM0 = v1.v[0];
  outViewMatrix->m[2].v[1] = v11;
  outViewMatrix->m[0].v[2] = COERCE_FLOAT(_XMM0 ^ _xmm);
  LODWORD(_XMM0) = LODWORD(v9) ^ _xmm;
  LODWORD(v12) = LODWORD(v1.v[2]) ^ _xmm;
  outViewMatrix->m[1].v[2] = *(float *)&_XMM0;
  outViewMatrix->m[2].v[2] = v12;
}

/*
==============
R_CompressedSunShadow_InitStreaming
==============
*/
void R_CompressedSunShadow_InitStreaming(GfxWorld *world)
{
  bool v2; 
  GfxWrappedBuffer *m_updateForestJobsBuffer; 
  __int64 v4; 
  unsigned int forestSize; 

  memset_0(&s_cssStreaming, 0, sizeof(s_cssStreaming));
  v2 = (world->draw.compressedSunShadowParams.flags & 2) == 0;
  s_cssStreaming.m_enabled = (world->draw.compressedSunShadowParams.flags & 2) != 0;
  if ( !v2 )
  {
    s_cssStreaming.m_alwaysLoadedDataSize = LOBYTE(world->draw.compressedSunShadowParams.reserved) << 20;
    s_cssStreaming.m_streamedDataSize = BYTE1(world->draw.compressedSunShadowParams.reserved) << 20;
    s_cssStreaming.m_defragmentationState = 0;
    PMem_BeginAlloc("CssStreaming_updateForestJobs", PMEM_STACK_GAME);
    m_updateForestJobsBuffer = s_cssStreaming.m_updateForestJobsBuffer;
    v4 = 2i64;
    do
    {
      R_CreateGfxWrappedBuffer(m_updateForestJobsBuffer++, GfxWrappedBuffer_Structured, 8, 0x400u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "CssStreaming_updateForestJobs");
      --v4;
    }
    while ( v4 );
    forestSize = world->draw.compressedSunShadowParams.forestSize;
    s_cssStreaming.m_forestDataCopied = 0;
    s_cssStreaming.m_forestDataSize = (4 * forestSize + 95) & 0xFFFFFFC0;
    PMem_EndAlloc("CssStreaming_updateForestJobs", PMEM_STACK_GAME);
    s_cssStreaming.m_compressedSunShadowBuffer = &world->draw.compressedSunShadowBuffer;
    RB_BackendDataCopier::AddRenderableCopyDest(&rbBackendDataCopier, 2u, &world->draw.compressedSunShadowBuffer);
  }
  s_cssStreaming.m_initialized = 1;
}

/*
==============
R_CompressedSunShadow_InitWorld
==============
*/
void R_CompressedSunShadow_InitWorld(GfxWorld *world)
{
  unsigned int v2; 
  bool v3; 

  *(_OWORD *)&s_cssClipPlanes.m_bufferSize = 0ui64;
  s_cssClipPlanes.m_data = NULL;
  *(_QWORD *)&s_cssClipPlanes.m_gridResolution = 0i64;
  *(_QWORD *)&s_cssClipPlanes.m_dataState = 0i64;
  s_cssClipPlanes.m_expectedForestSize = world->draw.compressedSunShadowParams.forestSize;
  v2 = (2 * s_cssClipPlanes.m_expectedForestSize + 65) & 0xFFFFFFC0;
  *(_QWORD *)&s_cssClipPlanes.m_bufferSize = v2;
  v3 = PMem_AuxAllocationsEnabled();
  if ( v3 )
    PMem_PopAuxAllocations();
  PMem_BeginAlloc("cssClipPlanes", PMEM_STACK_GAME);
  s_cssClipPlanes.m_data = (float *)PMem_Alloc(4i64 * v2, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "cssClipPlanesData");
  PMem_EndAlloc("cssClipPlanes", PMEM_STACK_GAME);
  if ( v3 )
    PMem_PushAuxAllocations();
  memset_0(s_cssClipPlanes.m_data, 0, 4i64 * s_cssClipPlanes.m_bufferSize);
  R_InitCssLookupMatrix(world);
}

/*
==============
R_CompressedSunShadow_IsUsingGlobalBuffer
==============
*/
bool R_CompressedSunShadow_IsUsingGlobalBuffer()
{
  return rg.useCompressedSunShadow - 1 <= 1;
}

/*
==============
R_CompressedSunShadow_ProcessStreaming
==============
*/
void R_CompressedSunShadow_ProcessStreaming(ComputeCmdBufState *computeState)
{
  __int16 m_readPtr; 
  unsigned int v3; 
  bool v4; 
  unsigned int m_streamInJobsCount; 
  __int64 v6; 
  signed __int32 v7[8]; 
  CssStreamOutJob job; 

  if ( s_cssStreaming.m_initialized && s_cssStreaming.m_enabled )
  {
    if ( r_compressedSunShadowStreamingDebug && r_compressedSunShadowStreamingDebug->current.integer == 2 )
    {
      s_cssStreaming.m_defragmentationState = 2;
      Dvar_SetInt_Internal(r_compressedSunShadowStreamingDebug, 0);
    }
    R_DefragmentCss(computeState);
    if ( s_cssStreaming.m_defragmentationState - 2 > 1 )
    {
      while ( s_cssStreaming.m_streamOutJobs.m_writePtr != s_cssStreaming.m_streamOutJobs.m_readPtr )
      {
        if ( s_cssStreaming.m_streamOutJobs.m_consumerThreadId )
        {
          if ( s_cssStreaming.m_streamOutJobs.m_consumerThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 42, ASSERT_TYPE_ASSERT, "(m_consumerThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "m_consumerThreadId == Sys_GetCurrentThreadId()") )
            __debugbreak();
        }
        else
        {
          s_cssStreaming.m_streamOutJobs.m_consumerThreadId = Sys_GetCurrentThreadId();
        }
        if ( s_cssStreaming.m_streamOutJobs.m_writePtr == s_cssStreaming.m_streamOutJobs.m_readPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 113, ASSERT_TYPE_ASSERT, "(!Empty())", (const char *)&queryFormat, "!Empty()") )
          __debugbreak();
        m_readPtr = s_cssStreaming.m_streamOutJobs.m_readPtr;
        _InterlockedOr(v7, 0);
        job.m_zoneId = s_cssStreaming.m_streamOutJobs.m_items[m_readPtr & 0x1FF].m_zoneId;
        ++s_cssStreaming.m_streamOutJobs.m_readPtr;
        R_ProcessCssStreamOutJob(&job);
      }
      v3 = 0;
      if ( s_cssStreaming.m_streamInJobsCount )
      {
        do
        {
          if ( s_cssStreaming.m_defragmentationState - 2 <= 1 )
            break;
          v4 = !R_ProcessCssStreamInJob(v3);
          m_streamInJobsCount = s_cssStreaming.m_streamInJobsCount;
          if ( v4 )
          {
            ++v3;
          }
          else
          {
            v6 = s_cssStreaming.m_streamInJobsCount - 1;
            if ( v3 < (unsigned int)v6 )
            {
              s_cssStreaming.m_streamInJobs[v3] = s_cssStreaming.m_streamInJobs[v6];
              m_streamInJobsCount = s_cssStreaming.m_streamInJobsCount;
            }
            s_cssStreaming.m_streamInJobsCount = --m_streamInJobsCount;
          }
        }
        while ( v3 < m_streamInJobsCount );
      }
    }
    R_RunCssCopyDataJobs(computeState);
    R_RunCssUpdateForestJobs(computeState);
  }
}

/*
==============
R_CompressedSunShadow_SetCompressionAlgorithm
==============
*/
void R_CompressedSunShadow_SetCompressionAlgorithm(unsigned int algorithmId)
{
  s_cssSetup.m_algorithmId = algorithmId;
}

/*
==============
R_CompressedSunShadow_SetupCompression
==============
*/
void R_CompressedSunShadow_SetupCompression(unsigned int resolution, unsigned int downsampleRatio, unsigned int maxSize)
{
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  unsigned int v12; 
  unsigned int *m_layerNodesOffset; 

  if ( !downsampleRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 445, ASSERT_TYPE_ASSERT, "(downsampleRatio >= 1)", (const char *)&queryFormat, "downsampleRatio >= 1") )
    __debugbreak();
  v6 = resolution / downsampleRatio;
  if ( s_cssSetup.m_shadowMapResolution != resolution / downsampleRatio || s_cssSetup.m_downsampleRatio != downsampleRatio )
  {
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
      __debugbreak();
    v7 = 31 - __lzcnt(v6);
    if ( v7 > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 452, ASSERT_TYPE_ASSERT, "(layersCount <= COMPRESSED_SUN_SHADOW_LAYERS_MAX)", "%s\n\tCannot create shadow map quadtree of depth bigger than %d", "layersCount <= COMPRESSED_SUN_SHADOW_LAYERS_MAX", 32) )
      __debugbreak();
    v8 = v7 - 1;
    v9 = 0;
    v10 = v8;
    v11 = v6 * v6;
    s_cssSetup.m_layerNodesCount[v8] = v6 * v6;
    v12 = (v6 * v6) >> 2;
    s_cssSetup.m_layerNodesOffset[v8] = 0;
    if ( v7 != 1 )
    {
      m_layerNodesOffset = s_cssSetup.m_layerNodesOffset;
      do
      {
        *(m_layerNodesOffset - 32) = v12;
        *m_layerNodesOffset++ = v9;
        v9 += v12;
        v12 >>= 2;
        --v10;
      }
      while ( v10 );
    }
    s_cssSetup.m_shadowMapResolution = v6;
    s_cssSetup.m_layersCount = v7;
    if ( maxSize )
      v11 = maxSize;
    s_cssSetup.m_totalNodesCount = v9;
    s_cssSetup.m_compressedShadowMapMaxSize = v11;
    s_cssSetup.m_downsampleRatio = downsampleRatio;
  }
}

/*
==============
R_CompressedSunShadow_ShutdownStreaming
==============
*/
void R_CompressedSunShadow_ShutdownStreaming(GfxWorld *world)
{
  GfxWrappedBuffer *m_updateForestJobsBuffer; 
  __int64 v2; 
  StreamerMemLoan result; 

  if ( s_cssStreaming.m_enabled && s_cssStreaming.m_initialized )
  {
    m_updateForestJobsBuffer = s_cssStreaming.m_updateForestJobsBuffer;
    v2 = 2i64;
    do
    {
      R_ShutdownGfxWrappedBuffer(m_updateForestJobsBuffer++);
      --v2;
    }
    while ( v2 );
    PMem_Free(&result, "CssStreaming_updateForestJobs", PMEM_STACK_GAME);
    StreamerMemLoan::~StreamerMemLoan(&result);
  }
  RB_BackendDataCopier::ClearQueue(&rbBackendDataCopier, 2u);
  RB_BackendDataCopier::RemoveRenderableCopyDest(&rbBackendDataCopier, 2u, s_cssStreaming.m_compressedSunShadowBuffer);
  RB_BackendDataCopier::RemoveInPlaceCopyBuffer(&rbBackendDataCopier, 2u, s_cssStreaming.m_compressedSunShadowBuffer);
  memset_0(&s_cssStreaming, 0, sizeof(s_cssStreaming));
}

/*
==============
R_CompressedSunShadow_ShutdownWorld
==============
*/
void R_CompressedSunShadow_ShutdownWorld(GfxWorld *world)
{
  StreamerMemLoan result; 

  PMem_Free(&result, "cssClipPlanes", PMEM_STACK_GAME);
  StreamerMemLoan::~StreamerMemLoan(&result);
  s_cssClipPlanes.m_data = NULL;
  *(_OWORD *)&s_cssClipPlanes.m_bufferSize = 0ui64;
  *(_QWORD *)&s_cssClipPlanes.m_gridResolution = 0i64;
  *(_QWORD *)&s_cssClipPlanes.m_dataState = 0i64;
}

/*
==============
R_CompressedSunShadow_StreamIn
==============
*/
char R_CompressedSunShadow_StreamIn(GfxCompressedSunShadowDataTemp *streamingData, DB_BackendCallbackContext *context)
{
  __int64 v2; 
  int integer; 
  bool v6; 
  DB_BackendCallbackContext::CallbackType callbackType; 
  unsigned int m_packed; 
  unsigned __int16 zoneIndex; 
  __int16 v11; 
  unsigned int v12; 
  CssStreamInJob *v13; 
  CssStreamInJob *v14; 
  int v15; 
  unsigned int m_streamInJobsCount; 
  __int64 v17; 
  CssStreamInJob *m_streamInJobs; 
  __int64 v19; 
  unsigned int m_copyDataJobsCount; 
  unsigned int v21; 
  CssCopyDataJob *m_copyDataJobs; 
  __int64 v23; 
  __int64 v24; 

  v2 = 0i64;
  if ( r_compressedSunShadowStreamingDebug )
    integer = r_compressedSunShadowStreamingDebug->current.integer;
  else
    integer = 0;
  if ( !s_cssStreaming.m_initialized || (v6 = integer == 1, !s_cssStreaming.m_enabled) )
    v6 = 1;
  callbackType = context->callbackType;
  if ( v6 )
  {
    if ( callbackType == CALLBACK_TYPE_RELEASE )
    {
LABEL_9:
      R_ShutdownGfxWrappedBuffer(&streamingData->tilesDataBuffer);
      return 1;
    }
    return 1;
  }
  if ( callbackType )
  {
    if ( callbackType == CALLBACK_TYPE_RELEASE )
    {
      m_streamInJobsCount = s_cssStreaming.m_streamInJobsCount;
      v17 = 0i64;
      if ( s_cssStreaming.m_streamInJobsCount )
      {
        m_streamInJobs = s_cssStreaming.m_streamInJobs;
        while ( m_streamInJobs->m_data != streamingData )
        {
          v17 = (unsigned int)(v17 + 1);
          ++m_streamInJobs;
          if ( (unsigned int)v17 >= s_cssStreaming.m_streamInJobsCount )
            goto LABEL_42;
        }
        v19 = s_cssStreaming.m_streamInJobsCount - 1;
        if ( (unsigned int)v17 < (unsigned int)v19 )
        {
          s_cssStreaming.m_streamInJobs[v17] = s_cssStreaming.m_streamInJobs[v19];
          m_streamInJobsCount = s_cssStreaming.m_streamInJobsCount;
        }
        s_cssStreaming.m_streamInJobsCount = m_streamInJobsCount - 1;
      }
LABEL_42:
      if ( s_cssStreaming.m_defragmentationState != 3 )
      {
        m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
        v21 = 0;
        if ( s_cssStreaming.m_copyDataJobsCount )
        {
          m_copyDataJobs = s_cssStreaming.m_copyDataJobs;
          while ( m_copyDataJobs->m_data != streamingData )
          {
            ++v21;
            ++m_copyDataJobs;
            if ( v21 >= s_cssStreaming.m_copyDataJobsCount )
              goto LABEL_9;
          }
          if ( v21 >= s_cssStreaming.m_issuedCopyDataJobsCount )
          {
            v23 = s_cssStreaming.m_copyDataJobsCount - 1;
            if ( v21 < (unsigned int)v23 )
            {
              v24 = v21;
              *(_OWORD *)&s_cssStreaming.m_copyDataJobs[v24].m_data = *(_OWORD *)&s_cssStreaming.m_copyDataJobs[v23].m_data;
              *(double *)&s_cssStreaming.m_copyDataJobs[v24].m_size = *(double *)&s_cssStreaming.m_copyDataJobs[v23].m_size;
              m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
            }
            s_cssStreaming.m_copyDataJobsCount = m_copyDataJobsCount - 1;
          }
          else
          {
            s_cssStreaming.m_copyDataJobs[v21].m_updateForestJobsCount = 0;
          }
          R_AddCssStreamOutJob(context->zoneId.m_packed);
        }
      }
      goto LABEL_9;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 2448, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
      __debugbreak();
  }
  else if ( context->userData )
  {
    v15 = 0;
    if ( s_cssStreaming.m_streamInJobsCount )
    {
      while ( s_cssStreaming.m_streamInJobs[v15].m_data != streamingData )
      {
        if ( ++v15 >= s_cssStreaming.m_streamInJobsCount )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      if ( !s_cssStreaming.m_copyDataJobsCount )
        return 1;
      while ( s_cssStreaming.m_copyDataJobs[v2].m_data != streamingData )
      {
        v2 = (unsigned int)(v2 + 1);
        if ( (unsigned int)v2 >= s_cssStreaming.m_copyDataJobsCount )
          return 1;
      }
    }
  }
  else
  {
    m_packed = context->zoneId.m_packed;
    zoneIndex = streamingData->zoneIndex;
    if ( s_cssStreaming.m_streamInJobsCount >= 0x200 )
    {
      ++s_cssStreaming.m_skippedZones[(unsigned __int64)zoneIndex >> 14];
      Com_PrintWarning(8, "Too many CSS stream-in jobs. Increase the limit (%u).", 512i64);
      return 1;
    }
    v11 = zoneIndex & 0x3FFF;
    v12 = 0;
    if ( s_cssStreaming.m_zonesCount )
    {
      while ( s_cssStreaming.m_zones[v12].m_transientIndex != v11 )
      {
        if ( ++v12 >= s_cssStreaming.m_zonesCount )
          goto LABEL_17;
      }
      if ( (CssStreaming *)((char *)&s_cssStreaming + 20 * v12) != (CssStreaming *)-6168i64 )
      {
        s_cssStreaming.m_zones[v12].m_zoneId = m_packed;
        return 1;
      }
    }
LABEL_17:
    if ( s_cssStreaming.m_streamInJobsCount )
    {
      v13 = s_cssStreaming.m_streamInJobs;
      while ( v13->m_data != streamingData )
      {
        LODWORD(v2) = v2 + 1;
        ++v13;
        if ( (unsigned int)v2 >= s_cssStreaming.m_streamInJobsCount )
          goto LABEL_21;
      }
    }
    else
    {
LABEL_21:
      v14 = &s_cssStreaming.m_streamInJobs[s_cssStreaming.m_streamInJobsCount++];
      v14->m_data = streamingData;
      v14->m_zoneId = m_packed;
    }
    context->userData = 1i64;
  }
  return 0;
}

/*
==============
R_CompressedSunShadow_StreamOut
==============
*/
void R_CompressedSunShadow_StreamOut(const XZoneHandleUnique *zone)
{
  if ( (!r_compressedSunShadowStreamingDebug || r_compressedSunShadowStreamingDebug->current.integer != 1) && s_cssStreaming.m_initialized && s_cssStreaming.m_enabled )
    R_AddCssStreamOutJob(zone->m_packed);
}

/*
==============
R_CompressedSunShadow_UpdateShadowBounds
==============
*/
void R_CompressedSunShadow_UpdateShadowBounds(GfxBackEndData *data, unsigned int shadowMapResolution, const GfxSunShadowProjectionSetup *projSetup)
{
  GfxWorld *world; 
  __int64 v5; 
  float resolution; 
  __int64 v8; 
  float v9; 
  float v10; 
  __int64 v11; 
  float v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  unsigned int v17; 
  int v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  __int64 v29; 
  float v30; 
  float v31; 
  float v32; 
  bool v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  unsigned int MapSize; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  unsigned int i; 
  float v50; 
  float v51; 
  unsigned int j; 
  float v57; 
  __int128 v58; 
  __int128 v61; 
  GfxViewInfo *viewInfo; 
  unsigned int v65; 
  __int128 v66; 
  __int128 v67; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v80; 
  __int128 v85; 
  float outFarClip; 
  float outNearClip; 
  float t; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  vec3_t bbMax; 
  vec3_t bbMin; 
  vec3_t rayDir; 
  tmat33_t<vec3_t> outViewMatrix; 
  vec3_t rayOrigin; 

  world = rgp.world;
  v5 = shadowMapResolution;
  if ( VecNCompareCustomEpsilon(data->sunShadow.lightDir.v, rgp.world->draw.compressedSunShadowParams.sunDirection.v, 0.001, 3) && s_cssClipPlanes.m_dataState == Extracted )
  {
    resolution = (float)world->draw.compressedSunShadowParams.resolution;
    v8 = (unsigned int)data->sunShadow.opaqueCascadeCount - 1;
    v9 = 1.0 / (float)(resolution * world->draw.compressedSunShadowParams.sampleSize);
    v10 = projSetup->sampleSize[v8];
    v11 = (unsigned int)v8;
    if ( rg.useCachedSunShadow )
    {
      v12 = (float)(R_SunShadow_GetMapSize() >> 1);
      v13 = (int)(float)(v12 * v10);
      v14 = (int)(float)(projSetup->snappedShadowOrg[v11].v[0] - (float)(v10 * projSetup->shadowOrgPixelCenter[v11].v[0]));
      v15 = (int)(float)(projSetup->snappedShadowOrg[v11].v[1] - (float)(v10 * projSetup->shadowOrgPixelCenter[v11].v[1]));
      if ( v14 < 0 )
        v16 = -((v13 - v14 - 1) / v13);
      else
        v16 = v14 / v13;
      v17 = v13 * v16;
      if ( v15 < 0 )
        v18 = -((v13 - v15 - 1) / v13);
      else
        v18 = v15 / v13;
      v19 = FLOAT_0_5;
      v20 = (float)((float)(_mm_cvtepi32_ps((__m128i)v17).m128_f32[0] - world->draw.compressedSunShadowParams.centerX) * v9) + 0.5;
      v21 = _mm_cvtepi32_ps((__m128i)(unsigned int)(3 * v13)).m128_f32[0] * v9;
      v22 = 0.5 - (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)(v13 * v18)).m128_f32[0] - world->draw.compressedSunShadowParams.centerY) * v9);
      v23 = v22 - v21;
    }
    else
    {
      v19 = FLOAT_0_5;
      v20 = (float)((float)((float)(projSetup->snappedShadowOrg[v8].v[0] - world->draw.compressedSunShadowParams.centerX) * v9) + 0.5) - (float)((float)(v10 * projSetup->shadowOrgPixelCenter[v8].v[0]) * v9);
      v24 = (float)v5;
      v23 = (float)(0.5 - (float)((float)(projSetup->snappedShadowOrg[v8].v[1] - world->draw.compressedSunShadowParams.centerY) * v9)) - (float)((float)((float)(v24 - projSetup->shadowOrgPixelCenter[v8].v[1]) * v10) * v9);
      v21 = (float)(v24 * v10) * v9;
      v22 = v21 + v23;
    }
    data->sunShadow.overlaySetup.csmScale = (float)(v21 + v20) - v20;
    data->sunShadow.overlaySetup.csmUOffset = v20;
    data->sunShadow.overlaySetup.csmVOffset = v23;
    outNearClip = 0.0;
    outFarClip = 0.0;
    if ( (unsigned __int8)R_CalculateCssClipPlanes(v20, v21 + v20, v23, v22, &outNearClip, &outFarClip) )
    {
      if ( outFarClip > data->sunShadow.staticNearClip && outNearClip < data->sunShadow.staticFarClip && outNearClip < outFarClip )
      {
        _XMM0 = LODWORD(data->sunShadow.nearClip);
        __asm { vmaxss  xmm2, xmm0, xmm2 }
        _XMM0 = LODWORD(data->sunShadow.farClip);
        __asm { vminss  xmm1, xmm0, xmm1 }
        data->sunShadow.nearClip = *(float *)&_XMM2;
        data->sunShadow.farClip = *(float *)&_XMM1;
        if ( *(float *)&_XMM2 >= *(float *)&_XMM1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 1005, ASSERT_TYPE_ASSERT, "(sunShadow->nearClip < sunShadow->farClip)", (const char *)&queryFormat, "sunShadow->nearClip < sunShadow->farClip") )
          __debugbreak();
      }
    }
    v29 = v11;
    v30 = data->sunShadow.partition[v29].dynBounds.halfSize.v[0];
    if ( v30 > 0.0 )
    {
      v31 = data->sunShadow.partition[v29].dynBounds.halfSize.v[1];
      if ( v31 > 0.0 )
      {
        v32 = data->sunShadow.partition[v29].dynBounds.halfSize.v[2];
        if ( v32 > 0.0 )
        {
          v33 = (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(data->sunShadow.lightDir.v[0]) ^ _xmm) * data->sunShadow.partition[v29].dynBounds.midPoint.v[0]) - (float)(COERCE_FLOAT((LODWORD(data->sunShadow.lightDir.v[0]) ^ _xmm) & _xmm) * v30)) + (float)(COERCE_FLOAT(LODWORD(data->sunShadow.lightDir.v[1]) ^ _xmm) * data->sunShadow.partition[v29].dynBounds.midPoint.v[1])) - (float)(COERCE_FLOAT((LODWORD(data->sunShadow.lightDir.v[1]) ^ _xmm) & _xmm) * v31)) + (float)(COERCE_FLOAT(LODWORD(data->sunShadow.lightDir.v[2]) ^ _xmm) * data->sunShadow.partition[v29].dynBounds.midPoint.v[2])) - (float)(COERCE_FLOAT((LODWORD(data->sunShadow.lightDir.v[2]) ^ _xmm) & _xmm) * v32)) < data->sunShadow.nearClip;
          t = (float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(data->sunShadow.lightDir.v[0]) ^ _xmm) * data->sunShadow.partition[v29].dynBounds.midPoint.v[0]) - (float)(COERCE_FLOAT((LODWORD(data->sunShadow.lightDir.v[0]) ^ _xmm) & _xmm) * v30)) + (float)(COERCE_FLOAT(LODWORD(data->sunShadow.lightDir.v[1]) ^ _xmm) * data->sunShadow.partition[v29].dynBounds.midPoint.v[1])) - (float)(COERCE_FLOAT((LODWORD(data->sunShadow.lightDir.v[1]) ^ _xmm) & _xmm) * v31)) + (float)(COERCE_FLOAT(LODWORD(data->sunShadow.lightDir.v[2]) ^ _xmm) * data->sunShadow.partition[v29].dynBounds.midPoint.v[2])) - (float)(COERCE_FLOAT((LODWORD(data->sunShadow.lightDir.v[2]) ^ _xmm) & _xmm) * v32);
          if ( v33 )
          {
            R_CompressedSunShadow_GetViewMatrix(&data->sunShadow.lightDir, &outViewMatrix);
            v34 = data->sunShadow.partition[v29].dynBounds.midPoint.v[0];
            v35 = data->sunShadow.partition[v29].dynBounds.midPoint.v[1];
            v36 = data->sunShadow.partition[v29].dynBounds.halfSize.v[1];
            v37 = data->sunShadow.partition[v29].dynBounds.midPoint.v[2];
            v38 = data->sunShadow.partition[v29].dynBounds.halfSize.v[2];
            rayDir.v[0] = outViewMatrix.m[0].v[2];
            rayDir.v[2] = outViewMatrix.m[2].v[2];
            rayDir.v[1] = outViewMatrix.m[1].v[2];
            v39 = data->sunShadow.partition[v29].dynBounds.halfSize.v[0];
            bbMin.v[0] = v34 - v39;
            bbMin.v[1] = v35 - v36;
            bbMin.v[2] = v37 - v38;
            bbMax.v[0] = v39 + v34;
            bbMax.v[1] = v36 + v35;
            bbMax.v[2] = v38 + v37;
            MapSize = R_SunShadow_GetMapSize();
            v41 = projSetup->shadowOrg.v[0];
            v42 = projSetup->shadowOrg.v[1];
            v43 = (float)MapSize;
            v44 = (float)(v43 * v10) * v19;
            v96 = v43 * v10;
            outNearClip = outViewMatrix.m[2].v[0] * bbMin.v[2];
            outFarClip = outViewMatrix.m[2].v[1] * bbMin.v[2];
            v93 = outViewMatrix.m[2].v[0] * bbMax.v[2];
            v94 = outViewMatrix.m[2].v[1] * bbMax.v[2];
            for ( i = 0; i < 2; ++i )
            {
              _XMM0 = i;
              __asm { vpcmpeqd xmm2, xmm0, xmm1 }
              _XMM1 = LODWORD(bbMax.v[0]);
              __asm { vblendvps xmm6, xmm1, xmm0, xmm2 }
              v50 = *(float *)&_XMM6 * outViewMatrix.m[0].v[0];
              v51 = *(float *)&_XMM6 * outViewMatrix.m[0].v[1];
              v95 = *(float *)&_XMM6 * outViewMatrix.m[0].v[0];
              v92 = *(float *)&_XMM6 * outViewMatrix.m[0].v[1];
              for ( j = 0; j < 2; ++j )
              {
                _XMM0 = j;
                __asm { vpcmpeqd xmm2, xmm0, xmm1 }
                _XMM1 = LODWORD(bbMax.v[1]);
                __asm { vblendvps xmm4, xmm1, xmm0, xmm2 }
                v57 = (float)(*(float *)&_XMM4 * outViewMatrix.m[1].v[1]) + v51;
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&_XMM4 * outViewMatrix.m[1].v[0]) + v50) + outNearClip) - v41) & _xmm) <= v44 && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v57 + outFarClip) - v42) & _xmm) <= v44 )
                {
                  v58 = _XMM4;
                  *(float *)&v58 = (float)((float)(*(float *)&_XMM4 * rayDir.v[1]) + (float)(*(float *)&_XMM6 * rayDir.v[0])) + (float)(rayDir.v[2] * bbMin.v[2]);
                  _XMM2 = v58;
                  __asm { vminss  xmm7, xmm2, xmm7 }
                }
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&_XMM4 * outViewMatrix.m[1].v[0]) + v50) + v93) - v41) & _xmm) <= v44 && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v57 + v94) - v42) & _xmm) <= v44 )
                {
                  v61 = _XMM4;
                  *(float *)&v61 = (float)((float)(*(float *)&_XMM4 * rayDir.v[1]) + (float)(*(float *)&_XMM6 * rayDir.v[0])) + (float)(rayDir.v[2] * bbMax.v[2]);
                  _XMM2 = v61;
                  __asm { vminss  xmm7, xmm2, xmm7 }
                }
                v50 = v95;
                v51 = v92;
              }
            }
            viewInfo = data->viewInfo;
            v65 = 0;
            v67 = LODWORD(t);
            *(float *)&v67 = t - 1.0;
            v66 = v67;
            _XMM6 = LODWORD(FLOAT_N0_5);
            v69 = outViewMatrix.m[2].v[0];
            v70 = outViewMatrix.m[2].v[1];
            v71 = (float)(t - 1.0) - (float)((float)((float)(rayDir.v[0] * viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0]) + (float)(rayDir.v[1] * viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1])) + (float)(rayDir.v[2] * viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2]));
            v72 = (float)(v71 * rayDir.v[0]) + viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
            v73 = outViewMatrix.m[0].v[0];
            v74 = (float)(v71 * rayDir.v[1]) + viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
            v75 = outViewMatrix.m[1].v[0];
            v76 = (float)(v71 * rayDir.v[2]) + viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
            do
            {
              _XMM0 = v65 & 1;
              __asm
              {
                vpcmpeqd xmm2, xmm0, xmm1
                vblendvps xmm0, xmm6, xmm3, xmm2
              }
              v80 = *(float *)&_XMM0 * v96;
              _XMM0 = v65 & 2;
              __asm
              {
                vpcmpeqd xmm2, xmm0, xmm1
                vblendvps xmm0, xmm6, xmm3, xmm2
              }
              rayOrigin.v[0] = (float)((float)(v80 * v73) + v72) + (float)((float)(*(float *)&_XMM0 * v96) * outViewMatrix.m[0].v[1]);
              rayOrigin.v[1] = (float)((float)(v80 * v75) + v74) + (float)((float)(*(float *)&_XMM0 * v96) * outViewMatrix.m[1].v[1]);
              rayOrigin.v[2] = (float)((float)(v80 * v69) + v76) + (float)(v70 * (float)(*(float *)&_XMM0 * v96));
              if ( IntersectRayAABB(&rayOrigin, &rayDir, &bbMin, &bbMax, &t) )
              {
                v85 = v66;
                *(float *)&v85 = *(float *)&v66 + t;
                _XMM1 = v85;
                __asm { vminss  xmm7, xmm1, xmm7 }
              }
              ++v65;
            }
            while ( v65 < 4 );
            _XMM0 = LODWORD(data->sunShadow.nearClip);
            __asm { vminss  xmm1, xmm0, xmm7 }
            data->sunShadow.nearClip = *(float *)&_XMM1;
          }
        }
      }
    }
  }
  else
  {
    data->sunShadow.overlaySetup.csmScale = 0.0;
  }
}

/*
==============
R_DefragmentCss
==============
*/
void R_DefragmentCss(ComputeCmdBufState *computeState)
{
  unsigned __int16 v1; 
  size_t m_zonesCount; 
  char *v3; 
  __int64 v4; 
  size_t v5; 
  unsigned int m_alwaysLoadedDataSize; 
  char *v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned __int16 *p_m_lastTree; 
  unsigned __int16 firstUpdateForestJob; 
  unsigned __int16 updateForestJobsCount; 
  unsigned __int16 v15; 
  unsigned __int16 *p_m_lod; 
  unsigned __int16 v17; 
  unsigned __int16 *v18; 
  __int64 v19; 
  CssTreeDesc *v20; 
  unsigned int v21; 
  CssUpdateForestJob *v22; 
  int v23; 
  unsigned int CopyDataPerFrameBudget; 
  unsigned int m_copyDataJobsCount; 
  unsigned int v26; 
  __int64 v27; 
  unsigned int v28; 
  unsigned int v29; 
  __int64 v30; 
  unsigned int v31; 
  __int64 v32; 
  unsigned int m_dstOffset; 
  unsigned int m_size; 
  __int64 v35; 
  unsigned __int16 m_deferredUpdateForestJobsHead; 
  unsigned int v37; 
  unsigned __int16 *p_m_firstTree; 
  char Base[4]; 
  char v40; 

  if ( s_cssStreaming.m_defragmentationState - 2 <= 1 )
  {
    if ( s_cssStreaming.m_defragmentationState == 2 )
    {
      if ( s_cssStreaming.m_copyDataJobsCount || s_cssStreaming.m_updateForestJobsCount )
        return;
      v1 = 0;
      m_zonesCount = s_cssStreaming.m_zonesCount;
      if ( s_cssStreaming.m_zonesCount )
      {
        do
        {
          v3 = &Base[16 * v1];
          *((_WORD *)v3 + 6) = v1;
          v4 = v1;
          *((_DWORD *)v3 + 1) = 0;
          ++v1;
          *(_DWORD *)v3 = s_cssStreaming.m_zones[v4].m_offset;
          *((_DWORD *)v3 + 2) = s_cssStreaming.m_zones[v4].m_size;
        }
        while ( v1 < (unsigned int)m_zonesCount );
      }
      v5 = m_zonesCount;
      qsort(Base, m_zonesCount, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)R_DefragmentCss_::_8_::FragmentDesc::Compare);
      m_alwaysLoadedDataSize = s_cssStreaming.m_alwaysLoadedDataSize;
      if ( (_DWORD)m_zonesCount )
      {
        v7 = &v40;
        do
        {
          v8 = *((_DWORD *)v7 - 1);
          v9 = *((_DWORD *)v7 + 1);
          v10 = v8;
          if ( v8 - m_alwaysLoadedDataSize >= 0x8000 )
            v10 = m_alwaysLoadedDataSize;
          *(_DWORD *)v7 = v10;
          m_alwaysLoadedDataSize = v10 + v9;
          v37 = v10 + v9;
          if ( v8 != v10 )
          {
            v11 = *((unsigned __int16 *)v7 + 4);
            s_cssStreaming.m_zones[v11].m_offset = v10;
            p_m_lastTree = &s_cssStreaming.m_zones[v11].m_lastTree;
            firstUpdateForestJob = s_cssStreaming.m_deferredUpdateForestJobsHead;
            updateForestJobsCount = *p_m_lastTree - s_cssStreaming.m_zones[v11].m_firstTree + 1;
            p_m_firstTree = &s_cssStreaming.m_zones[v11].m_firstTree;
            m_deferredUpdateForestJobsHead = s_cssStreaming.m_deferredUpdateForestJobsHead;
            s_cssStreaming.m_deferredUpdateForestJobsHead = (LOWORD(s_cssStreaming.m_deferredUpdateForestJobsHead) + updateForestJobsCount) & 0x3FF;
            v15 = *p_m_firstTree;
            if ( *p_m_firstTree <= *p_m_lastTree )
            {
              p_m_lod = &s_cssStreaming.m_zones[v11].m_lod;
              v17 = firstUpdateForestJob;
              v18 = &s_cssStreaming.m_zones[v11].m_lastTree;
              do
              {
                v19 = v15++;
                v20 = &s_cssStreaming.m_trees[v19];
                v20->m_dataOffset -= v8 - v10;
                v21 = s_cssStreaming.m_trees[v19].m_dataOffset | 0x80000000;
                v22 = &s_cssStreaming.m_deferredUpdateForestJobs[((_WORD)v19 + v17 - *p_m_firstTree) & 0x3FF];
                v23 = v20->m_tileIndex & 0x3FFFFFFF | (*p_m_lod << 30);
                v22->m_value = v21;
                v22->m_tileIndex_lod = v23;
              }
              while ( v15 <= *v18 );
              v8 = *((_DWORD *)v7 - 1);
              v9 = *((_DWORD *)v7 + 1);
              firstUpdateForestJob = m_deferredUpdateForestJobsHead;
            }
            R_AddCssCopyDataJob(NULL, v8, v10, v9, firstUpdateForestJob, updateForestJobsCount);
            m_alwaysLoadedDataSize = v37;
          }
          v7 += 16;
          --v5;
        }
        while ( v5 );
      }
      if ( s_cssStreaming.m_copyDataJobsCount )
      {
        CopyDataPerFrameBudget = RB_BackendDataCopier::GetCopyDataPerFrameBudget(&rbBackendDataCopier);
        m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
        v26 = CopyDataPerFrameBudget >> 1;
        LODWORD(v27) = 0;
        v28 = 1;
        v29 = s_cssStreaming.m_copyDataJobsCount;
        if ( s_cssStreaming.m_copyDataJobsCount != 1 )
        {
          do
          {
            v30 = (unsigned int)v27;
            v31 = s_cssStreaming.m_copyDataJobs[v30].m_srcOffset - s_cssStreaming.m_copyDataJobs[v30].m_dstOffset;
            if ( v28 < m_copyDataJobsCount )
            {
              while ( 1 )
              {
                v32 = v28;
                m_dstOffset = s_cssStreaming.m_copyDataJobs[v32].m_dstOffset;
                if ( s_cssStreaming.m_copyDataJobs[v32].m_srcOffset - m_dstOffset != v31 )
                  break;
                m_size = s_cssStreaming.m_copyDataJobs[v30].m_size;
                if ( m_size + s_cssStreaming.m_copyDataJobs[v32].m_size >= v26 )
                  break;
                if ( m_size + s_cssStreaming.m_copyDataJobs[v30].m_dstOffset != m_dstOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 2323, ASSERT_TYPE_ASSERT, "(mergeToJob.m_dstOffset + mergeToJob.m_size == mergeFromJob.m_dstOffset)", (const char *)&queryFormat, "mergeToJob.m_dstOffset + mergeToJob.m_size == mergeFromJob.m_dstOffset") )
                  __debugbreak();
                if ( ((s_cssStreaming.m_copyDataJobs[v30].m_updateForestJobsCount + s_cssStreaming.m_copyDataJobs[v30].m_firstUpdateForestJob) & 0x3FF) != s_cssStreaming.m_copyDataJobs[v32].m_firstUpdateForestJob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 2324, ASSERT_TYPE_ASSERT, "(( ( mergeToJob.m_firstUpdateForestJob + mergeToJob.m_updateForestJobsCount ) % CSS_MAX_UPDATE_FOREST_JOBS ) == mergeFromJob.m_firstUpdateForestJob)", (const char *)&queryFormat, "( ( mergeToJob.m_firstUpdateForestJob + mergeToJob.m_updateForestJobsCount ) % CSS_MAX_UPDATE_FOREST_JOBS ) == mergeFromJob.m_firstUpdateForestJob") )
                  __debugbreak();
                --v29;
                s_cssStreaming.m_copyDataJobs[v30].m_size += s_cssStreaming.m_copyDataJobs[v32].m_size;
                ++v28;
                s_cssStreaming.m_copyDataJobs[v30].m_updateForestJobsCount += s_cssStreaming.m_copyDataJobs[v32].m_updateForestJobsCount;
                m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
                if ( v28 >= s_cssStreaming.m_copyDataJobsCount )
                  goto LABEL_34;
              }
              v27 = (unsigned int)(v27 + 1);
              if ( v28 != (_DWORD)v27 )
              {
                v35 = v27;
                *(_OWORD *)&s_cssStreaming.m_copyDataJobs[v35].m_data = *(_OWORD *)&s_cssStreaming.m_copyDataJobs[v28].m_data;
                *(double *)&s_cssStreaming.m_copyDataJobs[v35].m_size = *(double *)&s_cssStreaming.m_copyDataJobs[v28].m_size;
                m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
              }
              ++v28;
            }
LABEL_34:
            ;
          }
          while ( (unsigned int)v27 < v29 - 1 );
        }
        s_cssStreaming.m_copyDataJobsCount = v29;
      }
      RB_BackendDataCopier::RemoveRenderableCopyDest(&rbBackendDataCopier, 2u, s_cssStreaming.m_compressedSunShadowBuffer);
      RB_BackendDataCopier::AddInPlaceCopyBuffer(&rbBackendDataCopier, 2u, s_cssStreaming.m_compressedSunShadowBuffer);
      s_cssStreaming.m_firstFreeOffset = m_alwaysLoadedDataSize - s_cssStreaming.m_alwaysLoadedDataSize;
      s_cssStreaming.m_lruMemoryBlocksCount = 0;
      s_cssStreaming.m_defragmentationState = 3;
    }
    else if ( s_cssStreaming.m_defragmentationState != 3 )
    {
      return;
    }
    if ( !s_cssStreaming.m_copyDataJobsCount && !s_cssStreaming.m_updateForestJobsCount )
    {
      RB_BackendDataCopier::RemoveInPlaceCopyBuffer(&rbBackendDataCopier, 2u, s_cssStreaming.m_compressedSunShadowBuffer);
      RB_BackendDataCopier::AddRenderableCopyDest(&rbBackendDataCopier, 2u, s_cssStreaming.m_compressedSunShadowBuffer);
      s_cssStreaming.m_defragmentationState = 0;
    }
  }
}

/*
==============
R_InitCssLookupMatrix
==============
*/
void R_InitCssLookupMatrix(const GfxWorld *world)
{
  unsigned int rwView; 
  double v3; 
  float nearPlane; 
  float farPlane; 
  float v6; 
  float resolution; 
  float v8; 
  float v9; 
  vec3_t sunShadowLightDir; 
  tmat33_t<vec3_t> sunAxis; 
  tmat44_t<vec4_t> in1; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> in2; 

  if ( world && world->draw.compressedSunShadowSize && (rwView = world->draw.compressedSunShadowBuffer.rwView.rwView, rwView != 3) && rwView && world->draw.compressedSunShadowBuffer.data && world->draw.compressedSunShadowBuffer.view.view > 1 )
  {
    v3 = *(double *)world->draw.compressedSunShadowParams.sunDirection.v;
    sunShadowLightDir.v[2] = world->draw.compressedSunShadowParams.sunDirection.v[2];
    *(double *)sunShadowLightDir.v = v3;
    if ( *(float *)&v3 == 0.0 && sunShadowLightDir.v[1] == 0.0 && sunShadowLightDir.v[2] == 0.0 )
    {
      sunShadowLightDir.v[0] = 0.0;
      sunShadowLightDir.v[1] = 0.0;
      sunShadowLightDir.v[2] = FLOAT_1_0;
    }
    R_GetSunAxes(&sunShadowLightDir, &sunAxis);
    nearPlane = world->draw.compressedSunShadowParams.nearPlane;
    farPlane = world->draw.compressedSunShadowParams.farPlane;
    in1.m[0].v[0] = sunAxis.m[0].v[0];
    in1.m[2].v[0] = sunAxis.m[0].v[2];
    in1.m[1].v[0] = sunAxis.m[0].v[1];
    LODWORD(in1.m[3].v[0]) = LODWORD(world->draw.compressedSunShadowParams.centerX) ^ _xmm;
    in1.m[1].v[1] = sunAxis.m[1].v[1];
    LODWORD(v6) = LODWORD(world->draw.compressedSunShadowParams.centerY) ^ _xmm;
    in1.m[0].v[1] = sunAxis.m[1].v[0];
    in1.m[2].v[1] = sunAxis.m[1].v[2];
    in1.m[3].v[1] = v6;
    LODWORD(in1.m[0].v[2]) = LODWORD(sunAxis.m[2].v[0]) ^ _xmm;
    *(vec4_t *)((char *)&in2.row0 + 4) = 0ui64;
    *(vec4_t *)((char *)&in2.row1 + 8) = 0ui64;
    *(vec4_t *)((char *)&in2.row2 + 12) = 0ui64;
    resolution = (float)world->draw.compressedSunShadowParams.resolution;
    LODWORD(in1.m[1].v[2]) = LODWORD(sunAxis.m[2].v[1]) ^ _xmm;
    LODWORD(in1.m[2].v[2]) = LODWORD(sunAxis.m[2].v[2]) ^ _xmm;
    in2.m[0].v[0] = 2.0 / (float)(resolution * world->draw.compressedSunShadowParams.sampleSize);
    in2.m[1].v[1] = in2.m[0].v[0];
    in1.m[3].v[2] = 0.0;
    in1.m[0].v[3] = 0.0;
    in1.m[1].v[3] = 0.0;
    in1.m[2].v[3] = 0.0;
    in1.m[3].v[3] = FLOAT_1_0;
    if ( nearPlane == 0.0 && farPlane == 0.0 )
    {
      v8 = FLOAT_N1_0;
    }
    else
    {
      v9 = 1.0 / (float)(farPlane - nearPlane);
      LODWORD(v8) = LODWORD(v9) ^ _xmm;
      in2.m[3].v[2] = v9 * farPlane;
    }
    in2.m[2].v[2] = v8;
    in2.m[3].v[3] = FLOAT_1_0;
    MatrixMultiply44Aligned(&in1, &in2, &out);
    s_cssLookupMatrix.m[1].v[0] = (float)(0.5 * out.m[1].v[0]) + (float)(0.5 * out.m[1].v[3]);
    s_cssLookupMatrix.m[0].v[0] = (float)(0.5 * out.m[0].v[0]) + (float)(0.5 * out.m[0].v[3]);
    s_cssLookupMatrix.m[3].v[0] = (float)(0.5 * out.m[3].v[0]) + (float)(0.5 * out.m[3].v[3]);
    s_cssLookupMatrix.m[0].v[1] = (float)(0.5 * out.m[0].v[3]) - (float)(0.5 * out.m[0].v[1]);
    s_cssLookupMatrix.m[1].v[1] = (float)(0.5 * out.m[1].v[3]) - (float)(0.5 * out.m[1].v[1]);
    s_cssLookupMatrix.m[2].v[1] = (float)(0.5 * out.m[2].v[3]) - (float)(0.5 * out.m[2].v[1]);
    s_cssLookupMatrix.m[3].v[1] = (float)(0.5 * out.m[3].v[3]) - (float)(0.5 * out.m[3].v[1]);
    s_cssLookupMatrix.m[2].v[0] = (float)(0.5 * out.m[2].v[0]) + (float)(0.5 * out.m[2].v[3]);
    s_cssLookupMatrix.m[1].v[2] = out.m[1].v[2];
    s_cssLookupMatrix.m[0].v[2] = out.m[0].v[2];
    s_cssLookupMatrix.m[0].v[3] = 0.0;
    s_cssLookupMatrix.m[1].v[3] = 0.0;
    s_cssLookupMatrix.m[2].v[3] = 0.0;
    s_cssLookupMatrix.m[3].v[3] = FLOAT_1_0;
    s_cssLookupMatrix.m[3].v[2] = out.m[3].v[2];
    s_cssLookupMatrix.m[2].v[2] = out.m[2].v[2];
  }
  else
  {
    MatrixIdentity44(&s_cssLookupMatrix);
  }
}

/*
==============
R_ProcessCssStreamInJob
==============
*/
char R_ProcessCssStreamInJob(unsigned int jobIndex)
{
  CssStreamInJob *v1; 
  const GfxCompressedSunShadowDataTemp *m_data; 
  unsigned int tilesDataSize; 
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  unsigned int v6; 
  unsigned __int16 tilesCount; 
  unsigned int *tilesOffsets; 
  unsigned int *tilesIndices; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  unsigned __int16 m_treesCount; 
  CssTreeDesc *v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned int v17; 
  __int64 v18; 
  bool v19; 
  unsigned __int16 v20; 
  __int16 v21; 
  unsigned int m_tileIndex; 
  unsigned int v23; 
  __int64 v24; 
  CssUpdateForestJob *v25; 
  __int64 v27; 
  unsigned __int16 firstUpdateForestJob; 
  bool outNeedCopy; 
  int v30; 
  unsigned int m_zoneId; 

  v1 = &s_cssStreaming.m_streamInJobs[jobIndex];
  outNeedCopy = 0;
  m_data = v1->m_data;
  m_zoneId = v1->m_zoneId;
  tilesDataSize = m_data->tilesDataSize;
  v4 = m_data->zoneIndex & 0x3FFF;
  v5 = m_data->zoneIndex >> 14;
  v6 = R_AllocCssMemoryBlock(tilesDataSize, v4, &outNeedCopy);
  if ( v6 == -1 )
  {
    if ( s_cssStreaming.m_defragmentationState - 2 <= 1 )
    {
      return 0;
    }
    else
    {
      Com_PrintWarning(8, "No space to stream-in CSM tree. Increase the limit (%u).", s_cssStreaming.m_streamedDataSize);
      ++s_cssStreaming.m_skippedZones[v5];
      return 1;
    }
  }
  else
  {
    tilesCount = m_data->tilesCount;
    tilesOffsets = m_data->tilesOffsets;
    tilesIndices = m_data->tilesIndices;
    v10 = -1;
    v11 = -1;
    v30 = 0;
    v12 = 0;
    if ( !tilesCount )
      goto LABEL_25;
    m_treesCount = s_cssStreaming.m_treesCount;
    while ( m_treesCount < 0x400u )
    {
      v14 = &s_cssStreaming.m_trees[m_treesCount];
      v15 = v12;
      v14->m_tileIndex = tilesIndices[v15];
      v14->m_dataOffset = v6 + tilesOffsets[v15];
      v11 = s_cssStreaming.m_treesCount;
      if ( v10 == 0xFFFF )
        v10 = s_cssStreaming.m_treesCount;
      ++v12;
      m_treesCount = ++s_cssStreaming.m_treesCount;
      if ( v12 >= tilesCount )
        goto LABEL_10;
    }
    Com_PrintWarning(8, "Too many CSS streamed trees. Increase the limit (%u).", 1024i64);
LABEL_10:
    if ( v10 == 0xFFFF )
    {
LABEL_25:
      ++s_cssStreaming.m_skippedZones[v5];
      if ( s_cssStreaming.m_lruMemoryBlocksCount < 0x200 )
      {
        v27 = s_cssStreaming.m_lruMemoryBlocksCount++;
        s_cssStreaming.m_lruMemoryBlocks[v27].m_transientIndex = -1;
        s_cssStreaming.m_lruMemoryBlocks[v27].m_size = tilesDataSize;
        s_cssStreaming.m_lruMemoryBlocks[v27].m_offset = v6;
      }
    }
    else if ( s_cssStreaming.m_zonesCount < 0x200 )
    {
      v17 = m_zoneId;
      v18 = s_cssStreaming.m_zonesCount++;
      s_cssStreaming.m_zones[v18].m_transientIndex = v4;
      v19 = outNeedCopy;
      s_cssStreaming.m_zones[v18].m_zoneId = v17;
      s_cssStreaming.m_zones[v18].m_lod = v5;
      s_cssStreaming.m_zones[v18].m_offset = v6;
      s_cssStreaming.m_zones[v18].m_size = tilesDataSize;
      s_cssStreaming.m_zones[v18].m_firstTree = v10;
      s_cssStreaming.m_zones[v18].m_lastTree = v11;
      if ( v19 )
      {
        LOWORD(v30) = s_cssStreaming.m_deferredUpdateForestJobsHead;
        firstUpdateForestJob = s_cssStreaming.m_deferredUpdateForestJobsHead;
        s_cssStreaming.m_deferredUpdateForestJobsHead = (LOWORD(s_cssStreaming.m_deferredUpdateForestJobsHead) + v11 - v10 + 1) & 0x3FF;
        R_AddCssCopyDataJob(m_data, 0, v6, tilesDataSize, firstUpdateForestJob, v11 - v10 + 1);
      }
      v20 = v10;
      if ( v10 <= v11 )
      {
        v21 = v30;
        do
        {
          m_tileIndex = s_cssStreaming.m_trees[v20].m_tileIndex;
          v23 = s_cssStreaming.m_trees[v20].m_dataOffset | 0x80000000;
          if ( v19 )
          {
            v24 = (v20 + v21 - v10) & 0x3FF;
            s_cssStreaming.m_deferredUpdateForestJobs[v24].m_tileIndex_lod = m_tileIndex & 0x3FFFFFFF | (v5 << 30);
            s_cssStreaming.m_deferredUpdateForestJobs[v24].m_value = v23;
          }
          else if ( s_cssStreaming.m_updateForestJobsCount < 0x400 )
          {
            v25 = &s_cssStreaming.m_updateForestJobs[s_cssStreaming.m_updateForestJobsCount++];
            v25->m_value = v23;
            v25->m_tileIndex_lod = m_tileIndex & 0x3FFFFFFF | (v5 << 30);
          }
          else
          {
            Com_PrintWarning(8, "Too many CSS update forest jobs. Increase the limit (%u).", 1024i64);
          }
          ++v20;
        }
        while ( v20 <= v11 );
      }
    }
    else
    {
      Com_PrintWarning(8, "Too many CSS streamed zones. Increase the limit (%u).", 512i64);
      ++s_cssStreaming.m_skippedZones[v5];
      s_cssStreaming.m_treesCount = v10;
      if ( s_cssStreaming.m_lruMemoryBlocksCount < 0x200 )
      {
        v16 = s_cssStreaming.m_lruMemoryBlocksCount++;
        s_cssStreaming.m_lruMemoryBlocks[v16].m_transientIndex = -1;
        s_cssStreaming.m_lruMemoryBlocks[v16].m_size = tilesDataSize;
        s_cssStreaming.m_lruMemoryBlocks[v16].m_offset = v6;
      }
    }
    return 1;
  }
}

/*
==============
R_ProcessCssStreamOutJob
==============
*/
void R_ProcessCssStreamOutJob(const CssStreamOutJob *job)
{
  unsigned int m_zoneId; 
  unsigned int m_streamInJobsCount; 
  __int64 v4; 
  unsigned int *p_m_zoneId; 
  __int64 v6; 
  unsigned int v7; 
  CssZoneDesc *v8; 
  unsigned __int16 m_transientIndex; 
  unsigned __int16 m_lastTree; 
  unsigned __int16 m_firstTree; 
  unsigned __int16 i; 
  int m_lod; 
  unsigned int m_tileIndex; 
  __int64 v15; 
  unsigned int m_offset; 
  unsigned int m_copyDataJobsCount; 
  unsigned int v18; 
  unsigned int *p_m_dstOffset; 
  __int64 v20; 
  __int64 v21; 
  __int16 v22; 
  unsigned int v23; 
  unsigned int j; 
  unsigned __int16 v25; 
  unsigned int m_size; 
  unsigned int v27; 
  __int64 v28; 

  if ( s_cssStreaming.m_defragmentationState == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 1990, ASSERT_TYPE_ASSERT, "(s_cssStreaming.m_defragmentationState != CssStreaming::Defragmentation_InProgress)", (const char *)&queryFormat, "s_cssStreaming.m_defragmentationState != CssStreaming::Defragmentation_InProgress") )
    __debugbreak();
  m_zoneId = job->m_zoneId;
  if ( job->m_zoneId != -1 )
  {
    m_streamInJobsCount = s_cssStreaming.m_streamInJobsCount;
    v4 = 0i64;
    if ( s_cssStreaming.m_streamInJobsCount )
    {
      p_m_zoneId = &s_cssStreaming.m_streamInJobs[0].m_zoneId;
      while ( *p_m_zoneId != m_zoneId )
      {
        v4 = (unsigned int)(v4 + 1);
        p_m_zoneId += 4;
        if ( (unsigned int)v4 >= s_cssStreaming.m_streamInJobsCount )
          goto LABEL_13;
      }
      v6 = s_cssStreaming.m_streamInJobsCount - 1;
      if ( (unsigned int)v4 < (unsigned int)v6 )
      {
        s_cssStreaming.m_streamInJobs[v4] = s_cssStreaming.m_streamInJobs[v6];
        m_streamInJobsCount = s_cssStreaming.m_streamInJobsCount;
      }
      s_cssStreaming.m_streamInJobsCount = m_streamInJobsCount - 1;
    }
LABEL_13:
    v7 = 0;
    if ( s_cssStreaming.m_zonesCount )
    {
      while ( 1 )
      {
        v8 = &s_cssStreaming.m_zones[v7];
        if ( v8->m_zoneId == m_zoneId )
          break;
        if ( ++v7 >= s_cssStreaming.m_zonesCount )
          return;
      }
      if ( (CssStreaming *)((char *)&s_cssStreaming + 20 * v7) != (CssStreaming *)-6168i64 )
      {
        m_transientIndex = s_cssStreaming.m_zones[v7].m_transientIndex;
        m_lastTree = s_cssStreaming.m_zones[v7].m_lastTree;
        m_firstTree = s_cssStreaming.m_zones[v7].m_firstTree;
        for ( i = m_firstTree; i <= m_lastTree; ++i )
        {
          m_lod = v8->m_lod;
          m_tileIndex = s_cssStreaming.m_trees[i].m_tileIndex;
          if ( s_cssStreaming.m_updateForestJobsCount < 0x400 )
          {
            v15 = s_cssStreaming.m_updateForestJobsCount++;
            s_cssStreaming.m_updateForestJobs[v15] = (CssUpdateForestJob)((m_lod << 30) | m_tileIndex & 0x3FFFFFFF);
          }
          else
          {
            Com_PrintWarning(8, "Too many CSS update forest jobs. Increase the limit (%u).", 1024i64);
          }
        }
        m_offset = v8->m_offset;
        if ( s_cssStreaming.m_defragmentationState == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 1694, ASSERT_TYPE_ASSERT, "(s_cssStreaming.m_defragmentationState != CssStreaming::Defragmentation_InProgress)", (const char *)&queryFormat, "s_cssStreaming.m_defragmentationState != CssStreaming::Defragmentation_InProgress") )
          __debugbreak();
        m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
        v18 = 0;
        if ( s_cssStreaming.m_copyDataJobsCount )
        {
          p_m_dstOffset = &s_cssStreaming.m_copyDataJobs[0].m_dstOffset;
          while ( *p_m_dstOffset != m_offset )
          {
            ++v18;
            p_m_dstOffset += 6;
            if ( v18 >= s_cssStreaming.m_copyDataJobsCount )
              goto LABEL_36;
          }
          if ( v18 >= s_cssStreaming.m_issuedCopyDataJobsCount )
          {
            v20 = s_cssStreaming.m_copyDataJobsCount - 1;
            if ( v18 < (unsigned int)v20 )
            {
              v21 = v18;
              *(_OWORD *)&s_cssStreaming.m_copyDataJobs[v21].m_data = *(_OWORD *)&s_cssStreaming.m_copyDataJobs[v20].m_data;
              *(double *)&s_cssStreaming.m_copyDataJobs[v21].m_size = *(double *)&s_cssStreaming.m_copyDataJobs[v20].m_size;
              m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
            }
            s_cssStreaming.m_copyDataJobsCount = m_copyDataJobsCount - 1;
          }
          else
          {
            s_cssStreaming.m_copyDataJobs[v18].m_updateForestJobsCount = 0;
          }
        }
LABEL_36:
        v22 = m_lastTree - m_firstTree + 1;
        memmove_0(&s_cssStreaming.m_trees[m_firstTree], &s_cssStreaming.m_trees[m_lastTree + 1], 8i64 * (s_cssStreaming.m_treesCount - (unsigned int)m_lastTree - 1));
        s_cssStreaming.m_treesCount -= v22;
        v23 = 0;
        for ( j = s_cssStreaming.m_zonesCount; v23 < j; ++v23 )
        {
          v25 = s_cssStreaming.m_zones[v23].m_firstTree;
          if ( v25 > m_firstTree )
          {
            s_cssStreaming.m_zones[v23].m_lastTree -= v22;
            s_cssStreaming.m_zones[v23].m_firstTree = v25 - v22;
            j = s_cssStreaming.m_zonesCount;
          }
        }
        m_size = v8->m_size;
        v27 = v8->m_offset;
        if ( s_cssStreaming.m_lruMemoryBlocksCount < 0x200 )
        {
          v28 = s_cssStreaming.m_lruMemoryBlocksCount++;
          s_cssStreaming.m_lruMemoryBlocks[v28].m_offset = v27;
          s_cssStreaming.m_lruMemoryBlocks[v28].m_size = m_size;
          s_cssStreaming.m_lruMemoryBlocks[v28].m_transientIndex = m_transientIndex;
          j = s_cssStreaming.m_zonesCount;
        }
        if ( j )
          JUMPOUT(0x140AB7993i64);
      }
    }
  }
}

/*
==============
R_RunCssCopyDataJobs
==============
*/
void R_RunCssCopyDataJobs(ComputeCmdBufState *computeState)
{
  unsigned int m_issuedCopyDataJobsCount; 
  unsigned int v2; 
  unsigned int v3; 
  unsigned int m_size; 
  unsigned int m_updateForestJobsCount; 
  unsigned int v6; 
  unsigned __int16 m_firstUpdateForestJob; 
  __int64 v8; 
  __int16 v9; 
  unsigned int m_copyDataJobsCount; 
  int v11; 
  bool v12; 
  unsigned int v13; 
  GfxWrappedRWBuffer *m_compressedSunShadowBuffer; 
  __int64 v15; 
  unsigned int *p_m_size; 
  unsigned int *v17; 

  m_issuedCopyDataJobsCount = s_cssStreaming.m_issuedCopyDataJobsCount;
  v2 = 0;
  v3 = 0;
  if ( !s_cssStreaming.m_issuedCopyDataJobsCount )
    goto LABEL_16;
  do
  {
    m_size = s_cssStreaming.m_copyDataJobs[v3].m_size;
    if ( ((m_size + 1) & 0xFFFFFFFE) != 0 )
      break;
    ++v2;
    if ( m_size != -1 )
    {
      m_updateForestJobsCount = s_cssStreaming.m_copyDataJobs[v3].m_updateForestJobsCount;
      v6 = 0;
      m_firstUpdateForestJob = s_cssStreaming.m_copyDataJobs[v3].m_firstUpdateForestJob;
      if ( s_cssStreaming.m_copyDataJobs[v3].m_updateForestJobsCount )
      {
        v8 = s_cssStreaming.m_updateForestJobsCount;
        while ( (unsigned int)v8 < 0x400 )
        {
          v9 = v6++ + m_firstUpdateForestJob;
          s_cssStreaming.m_updateForestJobs[v8] = s_cssStreaming.m_deferredUpdateForestJobs[v9 & 0x3FF];
          v8 = ++s_cssStreaming.m_updateForestJobsCount;
          if ( v6 >= m_updateForestJobsCount )
            goto LABEL_10;
        }
        Com_PrintWarning(8, "Too many CSS update forest jobs. Increase the limit (%u).", 1024i64);
      }
LABEL_10:
      s_cssStreaming.m_copyDataJobs[v3].m_size = -1;
      m_issuedCopyDataJobsCount = s_cssStreaming.m_issuedCopyDataJobsCount;
    }
    ++v3;
  }
  while ( v3 < m_issuedCopyDataJobsCount );
  if ( v2 >= m_issuedCopyDataJobsCount )
  {
    if ( m_issuedCopyDataJobsCount )
    {
      m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
      if ( s_cssStreaming.m_copyDataJobsCount == m_issuedCopyDataJobsCount )
        goto LABEL_17;
      memmove_0(s_cssStreaming.m_copyDataJobs, &s_cssStreaming.m_copyDataJobs[m_issuedCopyDataJobsCount], 24i64 * (s_cssStreaming.m_copyDataJobsCount - m_issuedCopyDataJobsCount));
      m_issuedCopyDataJobsCount = s_cssStreaming.m_issuedCopyDataJobsCount;
    }
LABEL_16:
    m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
LABEL_17:
    v11 = m_copyDataJobsCount - m_issuedCopyDataJobsCount;
    s_cssStreaming.m_issuedCopyDataJobsCount = 0;
    s_cssStreaming.m_copyDataJobsCount = v11;
    v12 = s_cssStreaming.m_defragmentationState == 3;
    if ( v2 )
    {
      if ( s_cssStreaming.m_defragmentationState != 3 )
      {
        if ( s_cssClipPlanes.m_taskState == Finished )
        {
          s_cssClipPlanes.m_taskState = Requested;
          *s_cssClipPlanes.m_data = 0.0;
          *((_DWORD *)s_cssClipPlanes.m_data + 1) = 0;
          v11 = s_cssStreaming.m_copyDataJobsCount;
        }
        goto LABEL_21;
      }
    }
    else if ( s_cssStreaming.m_defragmentationState != 3 )
    {
LABEL_21:
      v13 = v11;
LABEL_22:
      if ( v13 )
      {
        m_compressedSunShadowBuffer = s_cssStreaming.m_compressedSunShadowBuffer;
        v15 = v13;
        if ( v12 )
        {
          p_m_size = &s_cssStreaming.m_copyDataJobs[0].m_size;
          do
          {
            RB_BackendDataCopier::CopyDataInPlace(&rbBackendDataCopier, 2u, m_compressedSunShadowBuffer, *(p_m_size - 2), *(p_m_size - 1), *p_m_size);
            RB_BackendDataCopier::InsertCPUFence(&rbBackendDataCopier, 2u, p_m_size, 0);
            p_m_size += 6;
            --v15;
          }
          while ( v15 );
        }
        else
        {
          v17 = &s_cssStreaming.m_copyDataJobs[0].m_size;
          do
          {
            RB_BackendDataCopier::CopyData(&rbBackendDataCopier, 2u, (const GfxWrappedBuffer *)(*((_QWORD *)v17 - 2) + 40i64), *(v17 - 2), m_compressedSunShadowBuffer, *(v17 - 1), *v17);
            RB_BackendDataCopier::InsertCPUFence(&rbBackendDataCopier, 2u, v17, 0);
            v17 += 6;
            --v15;
          }
          while ( v15 );
        }
        if ( s_cssStreaming.m_issuedCopyDataJobsCount )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 1786, ASSERT_TYPE_ASSERT, "(s_cssStreaming.m_issuedCopyDataJobsCount == 0)", (const char *)&queryFormat, "s_cssStreaming.m_issuedCopyDataJobsCount == 0") )
            __debugbreak();
        }
        s_cssStreaming.m_issuedCopyDataJobsCount = v13;
      }
      return;
    }
    v13 = 1;
    if ( v11 < 1 )
      v13 = v11;
    goto LABEL_22;
  }
}

/*
==============
R_RunCssUpdateForestJobs
==============
*/
void R_RunCssUpdateForestJobs(ComputeCmdBufState *computeState)
{
  unsigned int m_updateForestJobsCount; 
  bool m_forestDataCopied; 
  GfxWrappedBuffer *v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int *p_m_value; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  CssLodOverride *v13; 
  unsigned int v14; 
  unsigned __int16 v15; 
  __int64 v16; 
  GfxShaderBufferView *v17; 
  GfxShaderBufferView *views; 
  unsigned __int64 v19; 
  __int64 data; 
  char v21[8184]; 
  __int16 v22[1024]; 

  m_updateForestJobsCount = s_cssStreaming.m_updateForestJobsCount;
  m_forestDataCopied = s_cssStreaming.m_forestDataCopied;
  if ( !s_cssStreaming.m_forestDataCopied )
    m_forestDataCopied = 1;
  s_cssStreaming.m_forestDataCopied = m_forestDataCopied;
  if ( !s_cssStreaming.m_updateForestJobsCount )
    return;
  v4 = &s_cssStreaming.m_updateForestJobsBuffer[s_cssStreaming.m_updateForestFrame];
  s_cssStreaming.m_updateForestFrame = (s_cssStreaming.m_updateForestFrame - 1) & 1;
  memset_0(v22, 0, sizeof(v22));
  data = 0i64;
  memset_0(v21, 0, sizeof(v21));
  v5 = 0;
  v6 = 0;
  v7 = 1;
  p_m_value = &s_cssStreaming.m_updateForestJobs[0].m_value;
  while ( 1 )
  {
    v9 = *(p_m_value - 1);
    v10 = v9 >> 30;
    v11 = v9 & 0x3FFFFFFF;
    if ( (unsigned int)v11 >= 0x400 )
      break;
    v12 = *p_m_value;
    v13 = &s_cssStreaming.m_lodOverrides[v11];
    v14 = 0;
    v13->m_value[v10] = *p_m_value;
    if ( v12 )
    {
      if ( (_DWORD)v10 )
      {
        while ( !v13->m_value[0] )
        {
          ++v14;
          v13 = (CssLodOverride *)((char *)v13 + 4);
          if ( v14 >= (unsigned int)v10 )
            goto LABEL_14;
        }
        goto LABEL_21;
      }
    }
    else
    {
      while ( !v13->m_value[0] )
      {
        ++v14;
        v13 = (CssLodOverride *)((char *)v13 + 4);
        if ( v14 >= 3 )
          goto LABEL_14;
      }
      v12 = v13->m_value[0];
    }
LABEL_14:
    v15 = v22[v11];
    if ( v15 )
    {
      v16 = v15;
      v19 = __PAIR64__(v12, v11);
      v17 = (GfxShaderBufferView *)__PAIR64__(v12, v11);
    }
    else
    {
      if ( v7 >= 0x400 )
        goto LABEL_23;
      LODWORD(v19) = v11;
      ++v5;
      v22[v11] = v7;
      v16 = v7++;
      HIDWORD(v19) = v12;
      v17 = (GfxShaderBufferView *)v19;
    }
LABEL_20:
    *(_QWORD *)&v21[8 * v16 - 8] = v17;
LABEL_21:
    ++v6;
    p_m_value += 2;
    if ( v6 >= m_updateForestJobsCount )
      goto LABEL_24;
  }
  if ( v7 < 0x400 )
  {
    Com_PrintWarning(8, "Please increase CSS_MAX_FOREST_SIZE (%u) to properly handle LOD overrides.", 1024i64);
    ++v5;
    HIDWORD(views) = *p_m_value;
    LODWORD(views) = v11;
    v17 = views;
    v16 = v7++;
    goto LABEL_20;
  }
LABEL_23:
  Com_PrintWarning(8, "Too many update forest jobs. Increase the limit.");
LABEL_24:
  views = (GfxShaderBufferView *)v5;
  data = v5;
  if ( v5 )
  {
    R_UpdateGfxWrappedBuffer(v4, &data, 8 * v5 + 8);
    R_HW_AddResourceTransition(computeState, s_cssStreaming.m_compressedSunShadowBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(computeState);
    R_SetComputeShader(computeState, rgp.csmStreamingUpdateForest);
    views = &v4->view;
    R_SetComputeViews(computeState, 0, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferView *)&s_cssStreaming.m_compressedSunShadowBuffer->rwView;
    R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    R_LockIfGfxImmediateContext(computeState->device);
    R_Dispatch(computeState, ((unsigned __int64)v5 + 63) >> 6, 1u, 1u);
    R_UnlockIfGfxImmediateContext(computeState->device);
    R_HW_AddResourceTransition(computeState, s_cssStreaming.m_compressedSunShadowBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(computeState);
  }
  s_cssStreaming.m_updateForestJobsCount = 0;
}

/*
==============
R_UpdateCssClipPlanes
==============
*/
void R_UpdateCssClipPlanes(void)
{
  if ( s_cssClipPlanes.m_taskState == Finished )
  {
    s_cssClipPlanes.m_taskState = Requested;
    *s_cssClipPlanes.m_data = 0.0;
    *((_DWORD *)s_cssClipPlanes.m_data + 1) = 0;
  }
}

/*
==============
GfxCompressedSunShadowAlgorithm::ReadRootDepth
==============
*/
vec2_t GfxCompressedSunShadowAlgorithm::ReadRootDepth(GfxCompressedSunShadowAlgorithm *this, const unsigned __int8 *data, __int64 rootIndex, int a4)
{
  unsigned int v6; 
  float v7; 
  float v8; 

  *(_QWORD *)data = 0i64;
  if ( this->m_id )
  {
    if ( this->m_id == 1 )
    {
      v6 = *(_DWORD *)((unsigned int)(8 * a4 + 32) + rootIndex + 4);
      v7 = (float)(unsigned __int16)v6;
      *(float *)data = v7 * 0.000015259022;
      v8 = (float)HIWORD(v6);
      *((float *)data + 1) = v8 * 0.000015259022;
      return (vec2_t)data;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 253, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      return (vec2_t)data;
    }
  }
  else
  {
    *(_DWORD *)data = *(_DWORD *)((unsigned int)(12 * a4 + 32) + rootIndex + 4);
    *((_DWORD *)data + 1) = *(_DWORD *)((unsigned int)(12 * a4 + 32) + rootIndex + 8);
    return (vec2_t)data;
  }
}

