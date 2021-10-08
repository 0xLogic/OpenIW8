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

__int64 __fastcall R_CalculateCssClipPlanes(double uMin, double uMax, double vMin, double vMax, float *outNearClip, float *outFarClip)
{
  base_vec2_t<unsigned int> m_forestResolution; 
  unsigned int v27; 
  unsigned int v38; 
  unsigned __int8 i; 
  unsigned int v44; 
  int v45; 
  unsigned int v46; 
  __int64 v47; 
  int v70; 
  __int64 result; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  m_forestResolution = s_cssClipPlanes.m_forestResolution;
  _RDI = s_cssClipPlanes.m_data;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm1
    vxorps  xmm9, xmm9, xmm9
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
    vcvtsi2ss xmm9, xmm9, rax
    vmovaps xmm10, xmm3
  }
  uMin = I_fclamp(*(float *)&uMin, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm9
    vcvttss2si rbp, xmm1
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm7; max
    vmovaps xmm0, xmm6; val
  }
  v27 = m_forestResolution.v[0] - 1;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm9
    vcvttss2si rax, xmm1
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm8; val
  }
  if ( m_forestResolution.v[0] - 1 > (unsigned int)_RAX )
    v27 = _RAX;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm3, xmm0, xmm9
    vmovaps xmm0, xmm10; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
    vcvttss2si r14, xmm3
  }
  v38 = m_forestResolution.v[1] - 1;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@ff7fffff
    vmulss  xmm1, xmm0, xmm9
    vcvttss2si rax, xmm1
    vmovss  xmm1, cs:__real@7f7fffff
  }
  if ( m_forestResolution.v[1] - 1 > (unsigned int)_RAX )
    v38 = _RAX;
  for ( i = 0; (unsigned int)_R14 <= v38; LODWORD(_R14) = _R14 + 1 )
  {
    v44 = _RBP;
    if ( (unsigned int)_RBP <= v27 )
    {
      if ( v27 - (unsigned int)_RBP + 1 >= 4 )
      {
        i = 1;
        v45 = m_forestResolution.v[0] * _R14 + _RBP + 2;
        v46 = ((v27 - (unsigned int)_RBP - 3) >> 2) + 1;
        v47 = v46;
        v44 = _RBP + 4 * v46;
        do
        {
          _RCX = (unsigned int)(2 * v45 - 2);
          _RAX = (unsigned int)(_RCX + 1);
          __asm { vmovss  xmm0, dword ptr [rdi+rcx*4] }
          _RCX = (unsigned int)(2 * v45);
          __asm
          {
            vminss  xmm1, xmm0, xmm1
            vmovss  xmm0, dword ptr [rdi+rax*4]
          }
          _RAX = (unsigned int)(_RCX + 1);
          __asm
          {
            vmaxss  xmm2, xmm0, xmm2
            vmovss  xmm0, dword ptr [rdi+rcx*4]
          }
          _RCX = (unsigned int)(2 * v45 + 2);
          __asm
          {
            vminss  xmm3, xmm0, xmm1
            vmovss  xmm0, dword ptr [rdi+rax*4]
          }
          _RAX = (unsigned int)(2 * v45 + 3);
          __asm
          {
            vmaxss  xmm1, xmm0, xmm2
            vmovss  xmm0, dword ptr [rdi+rcx*4]
          }
          _RCX = (unsigned int)(2 * v45 + 4);
          v45 += 4;
          __asm
          {
            vminss  xmm2, xmm0, xmm3
            vmovss  xmm0, dword ptr [rdi+rax*4]
          }
          _RAX = (unsigned int)(_RCX + 1);
          __asm
          {
            vmaxss  xmm3, xmm0, xmm1
            vmovss  xmm0, dword ptr [rdi+rcx*4]
            vminss  xmm1, xmm0, xmm2
            vmovss  xmm0, dword ptr [rdi+rax*4]
            vmaxss  xmm2, xmm0, xmm3
          }
          --v47;
        }
        while ( v47 );
      }
      if ( v44 <= v27 )
      {
        i = 1;
        do
        {
          v70 = m_forestResolution.v[0] * _R14 + v44++;
          _RCX = (unsigned int)(2 * v70 + 2);
          _RAX = (unsigned int)(2 * v70 + 3);
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+rcx*4]
            vminss  xmm1, xmm0, xmm1
            vmovss  xmm0, dword ptr [rdi+rax*4]
            vmaxss  xmm2, xmm0, xmm2
          }
        }
        while ( v44 <= v27 );
      }
    }
  }
  _RCX = outNearClip;
  _R11 = &v86;
  result = i;
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [rcx], xmm1
  }
  _RCX = outFarClip;
  __asm { vmovss  dword ptr [rcx], xmm2 }
  return result;
}

/*
==============
R_CompressedSunShadow_CalcFilteringParams
==============
*/
void R_CompressedSunShadow_CalcFilteringParams(unsigned int shadowMapResolution, const GfxSunShadowProjectionSetup *projSetup, GfxBackEndData *outData)
{
  char v81; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = outData;
  _ER8 = rg.compressedSunShadowFiltering;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  if ( _ER8 )
  {
    _RAX = r_sunShadowParams;
    __asm
    {
      vmovss  xmm7, cs:?rg@@3Ur_globals_t@@A.compressedSunShadowFilteringFarZ; r_globals_t rg
      vmovss  xmm6, cs:?rg@@3Ur_globals_t@@A.compressedSunShadowFilteringMaxRadius; r_globals_t rg
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm5, dword ptr [rax+28h]
    }
    _RCX = 25744i64 * _RBX->viewInfoIndex;
    __asm
    {
      vmovaps [rsp+0B8h+var_48], xmm9
      vmovaps [rsp+0B8h+var_58], xmm10
      vmovaps [rsp+0B8h+var_68], xmm11
      vmovaps [rsp+0B8h+var_78], xmm12
    }
    _RAX = _RBX->viewInfo;
    __asm
    {
      vmovss  xmm12, cs:__real@3f800000
      vcvtsi2ss xmm0, xmm0, r9
      vxorps  xmm4, xmm4, xmm4
      vmovss  xmm9, dword ptr [rcx+rax+130h]
      vmovaps [rsp+0B8h+var_88], xmm13
      vxorps  xmm10, xmm10, xmm10
      vcvtsi2ss xmm10, xmm10, rax
      vmovaps [rsp+0B8h+var_98], xmm14
      vmovss  xmm14, cs:__real@40000000
      vmulss  xmm11, xmm10, xmm9
      vmulss  xmm13, xmm0, dword ptr [rdx+rax*4+6Ch]
      vsubss  xmm0, xmm5, xmm12
      vdivss  xmm1, xmm0, xmm5
      vmulss  xmm8, xmm1, xmm13
      vcmpneqss xmm0, xmm7, xmm4
      vblendvps xmm1, xmm4, xmm14, xmm0
      vcmpneqss xmm0, xmm6, xmm4
      vblendvps xmm0, xmm4, xmm12, xmm0
      vaddss  xmm3, xmm1, xmm0
      vmovd   xmm0, r8d
    }
    LODWORD(_RAX) = 1;
    __asm
    {
      vmovd   xmm1, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@40800000
      vblendvps xmm0, xmm4, xmm1, xmm2
      vmovss  xmm1, dword ptr cs:s_cssFilteringSrcParams
      vucomiss xmm1, xmm13
      vaddss  xmm3, xmm3, xmm0
    }
    if ( _RBX->sunShadow.opaqueCascadeCount != 1 )
      goto LABEL_8;
    __asm
    {
      vmovss  xmm0, dword ptr cs:s_cssFilteringSrcParams+4
      vucomiss xmm0, xmm5
    }
    if ( _RBX->sunShadow.opaqueCascadeCount != 1 )
      goto LABEL_8;
    __asm
    {
      vmovss  xmm0, dword ptr cs:s_cssFilteringSrcParams+8
      vucomiss xmm0, xmm11
    }
    if ( _RBX->sunShadow.opaqueCascadeCount != 1 )
      goto LABEL_8;
    __asm
    {
      vmovss  xmm0, dword ptr cs:s_cssFilteringSrcParams+0Ch
      vucomiss xmm0, xmm3
    }
    if ( _RBX->sunShadow.opaqueCascadeCount == 1 )
    {
      _RAX = r_compressedSunShadowFilteringMaxRadiusDebug;
      __asm { vmovss  xmm6, dword ptr [rax+28h] }
      _RAX = r_compressedSunShadowFilteringFarZDebug;
      __asm { vmovss  xmm7, dword ptr [rax+28h] }
    }
    else
    {
LABEL_8:
      _RAX = rgp.world;
      __asm { vmovss  xmm0, dword ptr [rax+3670h] }
      if ( _ER8 == 1 )
      {
        __asm
        {
          vucomiss xmm6, xmm4
          vmulss  xmm0, xmm0, xmm9
          vmulss  xmm1, xmm0, xmm10
          vdivss  xmm6, xmm1, xmm8
        }
      }
      else
      {
        __asm
        {
          vucomiss xmm6, xmm4
          vdivss  xmm2, xmm12, xmm9
          vmulss  xmm0, xmm2, xmm0
          vmulss  xmm1, xmm0, xmm10
          vmulss  xmm1, xmm1, cs:__real@3f36ca58
          vmulss  xmm0, xmm6, cs:__real@3f5851ec
          vmulss  xmm6, xmm0, xmm2
        }
      }
      __asm { vucomiss xmm7, xmm4 }
      if ( _ER8 == 1 )
      {
        __asm
        {
          vmulss  xmm0, xmm1, xmm14
          vmaxss  xmm7, xmm0, xmm8
        }
      }
      __asm
      {
        vmovaps xmm1, xmm6; value
        vmovss  dword ptr cs:s_cssFilteringSrcParams, xmm13
        vmovss  dword ptr cs:s_cssFilteringSrcParams+4, xmm5
        vmovss  dword ptr cs:s_cssFilteringSrcParams+8, xmm11
        vmovss  dword ptr cs:s_cssFilteringSrcParams+0Ch, xmm3
      }
      Dvar_SetFloat_Internal(r_compressedSunShadowFilteringMaxRadiusDebug, *(float *)&_XMM1);
      __asm { vmovaps xmm1, xmm7; value }
      Dvar_SetFloat_Internal(r_compressedSunShadowFilteringFarZDebug, *(float *)&_XMM1);
    }
    __asm
    {
      vmovaps xmm13, [rsp+0B8h+var_88]
      vmovaps xmm12, [rsp+0B8h+var_78]
      vmovaps xmm11, [rsp+0B8h+var_68]
      vmovaps xmm10, [rsp+0B8h+var_58]
      vmovaps xmm9, [rsp+0B8h+var_48]
      vmovaps xmm14, [rsp+0B8h+var_98]
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm8, xmm8, xmm8
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+0E2780h], xmm8
    vmovss  dword ptr [rbx+0E2784h], xmm7
  }
  _R11 = &v81;
  __asm
  {
    vmovss  dword ptr [rbx+0E2788h], xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
R_CompressedSunShadow_DrawOverlay
==============
*/

void __fastcall R_CompressedSunShadow_DrawOverlay(const GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, double _XMM2_8, double _XMM3_8)
{
  GfxWorld *world; 
  int integer; 
  unsigned int reserved_high; 
  unsigned int forestSize; 
  unsigned int v23; 
  unsigned int v31; 
  unsigned int v35; 
  unsigned int v37; 
  GfxColor v38; 
  char v45; 
  GfxImage *blackImage; 
  GfxCmdBufInput *p_input; 
  int v50; 
  int v51; 
  int v52; 
  unsigned int v53; 
  unsigned int v54; 
  int *v55; 
  GfxColor v56; 
  int v65; 
  int v66; 
  int v67; 
  GfxColor v73; 
  unsigned int v75; 
  int v76; 
  __int64 m_transientIndex; 
  __int64 v78; 
  __int64 v81; 
  unsigned int v82; 
  __int64 m_tileIndex; 
  unsigned int v85; 
  unsigned int v86; 
  CssLodOverride *v87; 
  unsigned int v107; 
  unsigned int m_copyDataJobsCount; 
  unsigned int v111; 
  const GfxCompressedSunShadowDataTemp *m_data; 
  unsigned int v113; 
  const char *v124; 
  unsigned int v126; 
  unsigned int m_streamedDataSize; 
  __int64 m_firstFreeOffset; 
  __int64 v144; 
  int v151; 
  unsigned int *p_m_size; 
  __int64 v169; 
  __int64 v171; 
  int v176; 
  unsigned int *v195; 
  __int64 v196; 
  unsigned int v207; 
  char *v208; 
  unsigned int v241; 
  unsigned int v304; 
  unsigned int v311; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  char *fmti; 
  float fmtj; 
  float fmtk; 
  float fmtl; 
  float fmtm; 
  float fmtn; 
  float fmto; 
  float v343; 
  GfxColor v344; 
  float v345; 
  float v346; 
  float v347; 
  float v348; 
  char v349; 
  _QWORD v350[3]; 
  GfxColor v351; 
  GfxColor v352; 
  int v353; 
  int v354; 
  int v355; 
  GfxCmdBufSourceState *v356; 
  unsigned int v357; 
  int v358; 
  __int64 v359; 
  unsigned int v362; 
  unsigned int v363; 
  unsigned int v364; 
  const GfxCmdBufContext *v365; 
  const GfxViewInfo *v366; 
  GfxWorld *v367; 
  GfxCmdBufContext v368; 
  tmat33_t<vec3_t> outViewMatrix; 
  GfxPointVertex v370; 
  int v373; 
  _BYTE v374[72]; 
  char v375[64]; 
  int v376; 
  char v377[64]; 
  int v378; 
  char v379[64]; 
  int v380; 
  char v381[64]; 
  int v382; 
  char v383[64]; 
  int v384; 
  char v385[64]; 
  char dest[2][8]; 
  char v387[128]; 
  char v388[128]; 
  char v389[128]; 
  char v390[128]; 
  char v391[128]; 
  char v392[128]; 
  char v393[128]; 
  char v394[128]; 
  char v395[128]; 
  char v396[128]; 
  char v397[128]; 
  void *retaddr; 

  _R11 = &retaddr;
  world = rgp.world;
  v366 = viewInfo;
  _R12 = gfxContext;
  v365 = gfxContext;
  v367 = rgp.world;
  if ( rgp.world )
  {
    if ( r_compressedSunShadowOverlay )
    {
      integer = r_compressedSunShadowOverlay->current.integer;
      if ( integer )
      {
        reserved_high = HIWORD(rgp.world->draw.compressedSunShadowParams.reserved);
        v357 = reserved_high;
        if ( reserved_high )
        {
          forestSize = rgp.world->draw.compressedSunShadowParams.forestSize;
          __asm
          {
            vmovaps xmmword ptr [r11-48h], xmm6
            vmovaps xmmword ptr [r11-58h], xmm7
            vmovaps xmmword ptr [r11-68h], xmm8
            vmovaps xmmword ptr [r11-78h], xmm9
            vmovss  xmm9, cs:__real@41f00000
          }
          v23 = forestSize / reserved_high;
          __asm
          {
            vmovaps xmmword ptr [r11-88h], xmm10
            vmovaps xmmword ptr [r11-98h], xmm11
            vmovaps xmmword ptr [r11-0A8h], xmm12
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rcx
            vmulss  xmm0, xmm0, cs:__real@3e800000
            vaddss  xmm11, xmm0, cs:__real@42800000
            vmovaps xmmword ptr [r11-0B8h], xmm13
            vmovaps xmmword ptr [r11-0C8h], xmm14
            vxorps  xmm6, xmm6, xmm6
            vxorps  xmm7, xmm7, xmm7
            vcvtsi2ss xmm7, xmm7, rcx
          }
          v31 = v23;
          __asm
          {
            vmovaps xmmword ptr [r11-0D8h], xmm15
            vcvtsi2ss xmm6, xmm6, r15
            vmulss  xmm12, xmm7, xmm9
            vmulss  xmm8, xmm6, xmm9
          }
          if ( reserved_high > v23 )
            v31 = reserved_high;
          v364 = v23;
          __asm
          {
            vmovss  [rbp+8A0h+var_8F0], xmm12
            vmovss  [rbp+8A0h+var_8EC], xmm8
          }
          v35 = I_power2Ceil(v31);
          _RSI = _R12->source;
          v37 = 0;
          v352.packed = -1;
          v38.packed = -1;
          v363 = v35;
          v351.packed = -16777216;
          v349 = 0;
          __asm
          {
            vmovss  xmm10, cs:__real@3f800000
            vmovss  xmm14, cs:__real@42200000
            vmovss  xmm15, cs:__real@41a00000
          }
          if ( integer == 1 )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rax
              vdivss  xmm1, xmm10, xmm0
              vmulss  xmm6, xmm1, xmm6
              vmulss  xmm7, xmm1, xmm7
            }
            R_SetCodeBuffer(_RSI, 0x28u, &g_worldDraw->compressedSunShadowBuffer);
            R_SetCodeBuffer(_RSI, 0x29u, &g_worldDraw->compressedSunShadowBuffer);
            R_SetCodeBuffer(_RSI, 0x2Au, &g_worldDraw->compressedSunShadowBuffer);
            __asm
            {
              vucomiss xmm10, dword ptr [rsi+810h]
              vxorps  xmm13, xmm13, xmm13
            }
            if ( !v45 )
              goto LABEL_12;
            __asm { vucomiss xmm13, dword ptr [rsi+814h] }
            if ( !v45 )
              goto LABEL_12;
            __asm { vucomiss xmm13, dword ptr [rsi+818h] }
            if ( !v45 )
              goto LABEL_12;
            __asm { vucomiss xmm13, dword ptr [rsi+81Ch] }
            if ( !v45 )
            {
LABEL_12:
              *(_QWORD *)_RSI->input.consts[17].v = 1065353216i64;
              *(_QWORD *)&_RSI->input.consts[17].xyz.z = 0i64;
              ++_RSI->constVersions[17];
            }
            blackImage = rgp.blackImage;
            if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
              __debugbreak();
            p_input = &_RSI->input;
            if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
              __debugbreak();
            __asm
            {
              vmovss  [rsp+9A0h+var_958], xmm7
              vmovss  [rsp+9A0h+var_960], xmm6
              vmovss  [rsp+9A0h+var_968], xmm13
            }
            p_input->codeImages[4] = blackImage;
            __asm
            {
              vmovups xmm0, xmmword ptr [r12]
              vmovss  [rsp+9A0h+var_970], xmm13
              vmovss  [rsp+9A0h+var_978], xmm12
              vmovaps xmm3, xmm11
              vmovaps xmm2, xmm9
              vmovss  dword ptr [rsp+9A0h+fmt], xmm8
              vmovups [rbp+8A0h+var_8B0], xmm0
            }
            RB_DrawStretchPic(&v368, rgp.shadowOverlayMaterial, *(float *)&_XMM2_8, *(float *)&_XMM3_8, fmt, v343, v345, v346, v347, v348, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
            __asm
            {
              vmovups xmm0, xmmword ptr [r12]
              vmovups [rbp+8A0h+var_8B0], xmm0
            }
            RB_EndTessSurfaceInternal(&v368, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp(2561)");
            v349 = 1;
          }
          else
          {
            if ( integer == 2 )
            {
              if ( !s_cssStreaming.m_initialized )
              {
LABEL_94:
                __asm
                {
                  vmovaps xmm14, [rsp+9A0h+var_C8+8]
                  vmovaps xmm13, [rsp+9A0h+var_B8+8]
                  vmovaps xmm12, [rsp+9A0h+var_A8+8]
                  vmovaps xmm11, [rsp+9A0h+var_98+8]
                  vmovaps xmm10, [rsp+9A0h+var_88+8]
                  vmovaps xmm9, [rsp+9A0h+var_78+8]
                  vmovaps xmm8, [rsp+9A0h+var_68+8]
                  vmovaps xmm7, [rsp+9A0h+var_58+8]
                  vmovaps xmm6, [rsp+9A0h+var_48+8]
                  vmovaps xmm15, [rsp+9A0h+var_D8+8]
                }
                return;
              }
              if ( s_cssStreaming.m_enabled )
              {
                v355 = -16776961;
                v50 = -16776961;
                v353 = -16769024;
                v51 = -16769024;
                v354 = -16711681;
                v52 = -16711681;
                v356 = (GfxCmdBufSourceState *)0xFF00C000FF00FF00i64;
                v358 = -16744448;
                if ( s_cssStreaming.m_forestDataCopied )
                {
                  v53 = world->draw.compressedSunShadowParams.forestSize;
                  v54 = 0;
                  v362 = v53;
                  if ( v53 )
                  {
                    v55 = (int *)((char *)s_cssStreaming.m_compressedSunShadowBuffer->data + 32);
                    do
                    {
                      v56.packed = -16776961;
                      if ( *v55 )
                      {
                        v56.packed = -16711681;
                        if ( *v55 < 0 )
                          v56.packed = -16769024;
                      }
                      __asm
                      {
                        vmovups xmm0, xmmword ptr [r12]
                        vxorps  xmm1, xmm1, xmm1
                        vcvtsi2ss xmm1, xmm1, rax
                        vmovups [rbp+8A0h+var_8B0], xmm0
                        vmulss  xmm0, xmm1, xmm9
                        vxorps  xmm1, xmm1, xmm1
                        vcvtsi2ss xmm1, xmm1, rax
                        vaddss  xmm2, xmm0, xmm11
                        vaddss  xmm0, xmm1, xmm10
                        vmulss  xmm1, xmm0, xmm9
                        vmovaps xmm3, xmm9
                        vmovss  dword ptr [rsp+9A0h+fmt], xmm9
                      }
                      RB_DrawRect2D(&v368, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v56);
                      ++v54;
                      ++v55;
                    }
                    while ( v54 < v362 );
                    v38 = v352;
                  }
                }
                v65 = (int)v356;
                v66 = HIDWORD(v356);
                v368.source = v356;
                LODWORD(v368.state) = v358;
                *(_QWORD *)&dest[0][0] = 0i64;
                v67 = R_TextHeight(backEnd.debugFont);
                __asm
                {
                  vmovss  xmm6, cs:__real@3f000000
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                  vsubss  xmm0, xmm9, xmm0
                  vmulss  xmm12, xmm0, xmm6
                }
                if ( s_cssStreaming.m_zonesCount )
                {
                  v73 = v351;
                  _RSI = v365;
                  v75 = 0;
                  v76 = v67;
                  do
                  {
                    m_transientIndex = s_cssStreaming.m_zones[v75].m_transientIndex;
                    v359 = 5i64 * v75;
                    Com_sprintf<8>(dest, "%d", m_transientIndex);
                    R_TextWidth(dest[0], 8, backEnd.debugFont, v76);
                    v78 = v359;
                    __asm
                    {
                      vxorps  xmm0, xmm0, xmm0
                      vcvtsi2ss xmm0, xmm0, eax
                      vsubss  xmm0, xmm9, xmm0
                    }
                    v81 = *(&s_cssStreaming.m_zones[0].m_firstTree + 2 * v359);
                    v82 = *(&s_cssStreaming.m_zones[0].m_lastTree + 2 * v359);
                    v351.packed = v81;
                    __asm { vmulss  xmm8, xmm0, xmm6 }
                    if ( (unsigned int)v81 <= v82 )
                    {
                      do
                      {
                        m_tileIndex = s_cssStreaming.m_trees[v81].m_tileIndex;
                        v85 = -1;
                        if ( (unsigned int)m_tileIndex < 0x400 )
                        {
                          v86 = 0;
                          v87 = &s_cssStreaming.m_lodOverrides[m_tileIndex];
                          while ( !v87->m_value[0] )
                          {
                            ++v86;
                            v87 = (CssLodOverride *)((char *)v87 + 4);
                            if ( v86 >= 3 )
                              goto LABEL_40;
                          }
                          v85 = v86;
                        }
LABEL_40:
                        if ( v85 == *(&s_cssStreaming.m_zones[0].m_lod + 2 * v78) )
                        {
                          __asm
                          {
                            vxorps  xmm0, xmm0, xmm0
                            vmovaps xmm3, xmm9
                            vcvtsi2ss xmm0, xmm0, rcx
                            vaddss  xmm1, xmm0, xmm10
                            vxorps  xmm0, xmm0, xmm0
                            vcvtsi2ss xmm0, xmm0, rdx
                            vmulss  xmm7, xmm1, xmm9
                            vmulss  xmm1, xmm0, xmm9
                            vmovups xmm0, xmmword ptr [rsi]
                            vaddss  xmm6, xmm1, xmm11
                            vmovaps xmm2, xmm6
                            vmovaps xmm1, xmm7
                            vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
                            vmovss  dword ptr [rsp+9A0h+fmt], xmm9
                          }
                          RB_DrawRect2D((GfxCmdBufContext *)&v350[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, *(const GfxColor *)((char *)&v368.source + 4 * v85));
                          __asm
                          {
                            vmovups xmm1, xmmword ptr [rsi]
                            vsubss  xmm0, xmm9, xmm12
                            vaddss  xmm6, xmm6, xmm0
                            vaddss  xmm0, xmm6, xmm10
                            vaddss  xmm7, xmm7, xmm8
                            vaddss  xmm3, xmm7, xmm10
                            vmovss  dword ptr [rsp+9A0h+fmt], xmm0
                            vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm1
                          }
                          RB_DrawText((GfxCmdBufContext *)&v350[1], dest[0], backEnd.debugFont, *(float *)&_XMM3, fmtc, v73);
                          __asm
                          {
                            vmovups xmm0, xmmword ptr [rsi]
                            vmovaps xmm3, xmm7
                            vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
                            vmovss  dword ptr [rsp+9A0h+fmt], xmm6
                          }
                          RB_DrawText((GfxCmdBufContext *)&v350[1], dest[0], backEnd.debugFont, *(float *)&_XMM3, fmtd, v38);
                          v78 = v359;
                        }
                        v107 = *(&s_cssStreaming.m_zones[0].m_lastTree + 2 * v78);
                        v81 = v351.packed + 1;
                        v351.packed = v81;
                      }
                      while ( (unsigned int)v81 <= v107 );
                      __asm { vmovss  xmm6, cs:__real@3f000000 }
                    }
                    ++v75;
                  }
                  while ( v75 < s_cssStreaming.m_zonesCount );
                  v51 = v353;
                  v52 = v354;
                  v50 = v355;
                  v65 = (int)v356;
                  v66 = HIDWORD(v356);
                  __asm { vmovss  xmm8, [rbp+8A0h+var_8EC] }
                }
                m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
                LODWORD(v359) = 0;
                if ( s_cssStreaming.m_copyDataJobsCount )
                {
                  _R12 = v365;
                  v111 = v359;
                  do
                  {
                    m_data = s_cssStreaming.m_copyDataJobs[v111].m_data;
                    if ( m_data )
                    {
                      v113 = 0;
                      if ( m_data->tilesCount )
                      {
                        do
                        {
                          __asm
                          {
                            vmovups xmm0, xmmword ptr [r12]
                            vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
                            vxorps  xmm0, xmm0, xmm0
                            vmovaps xmm3, xmm9
                            vmovss  dword ptr [rsp+9A0h+fmt], xmm9
                            vcvtsi2ss xmm0, xmm0, rcx
                            vmulss  xmm1, xmm0, xmm9
                            vaddss  xmm2, xmm1, xmm11
                            vxorps  xmm0, xmm0, xmm0
                            vcvtsi2ss xmm0, xmm0, r8
                            vaddss  xmm1, xmm0, xmm10
                            vmulss  xmm1, xmm1, xmm9
                          }
                          RB_DrawRect2D((GfxCmdBufContext *)&v350[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, (const GfxColor)-8355840);
                          ++v113;
                        }
                        while ( v113 < m_data->tilesCount );
                        m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
                      }
                    }
                    ++v111;
                  }
                  while ( v111 < m_copyDataJobsCount );
                  v38 = v352;
                  v51 = v353;
                  v52 = v354;
                  v50 = v355;
                  v65 = (int)v356;
                  v66 = HIDWORD(v356);
                }
                *(_DWORD *)v374 = v50;
                Com_sprintf<64>((char (*)[64])&v374[4], "Missing tile");
                *(_DWORD *)&v374[68] = v52;
                Com_sprintf<64>((char (*)[64])v375, "Value tile");
                v376 = v51;
                Com_sprintf<64>((char (*)[64])v377, "Always loaded data");
                v378 = v65;
                Com_sprintf<64>((char (*)[64])v379, "Streamed LOD 0");
                v380 = v66;
                Com_sprintf<64>((char (*)[64])v381, "Streamed LOD 1");
                v382 = v358;
                Com_sprintf<64>((char (*)[64])v383, "Streamed LOD 2");
                v384 = -8355840;
                Com_sprintf<64>((char (*)[64])v385, "Copying");
                __asm { vaddss  xmm12, xmm11, cs:__real@43b40000 }
                v124 = &v374[4];
                __asm { vmovss  xmm7, cs:__real@41e00000 }
                _R12 = v365;
                v126 = 0;
                __asm
                {
                  vaddss  xmm8, xmm8, xmm14
                  vaddss  xmm13, xmm8, xmm10
                  vaddss  xmm14, xmm8, xmm14
                }
                do
                {
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, rax
                    vmulss  xmm1, xmm0, xmm9
                    vmovups xmm0, xmmword ptr [r12]
                    vaddss  xmm6, xmm1, xmm12
                    vmovaps xmm2, xmm6
                    vmovaps xmm3, xmm9
                    vmovaps xmm1, xmm8
                    vmovss  dword ptr [rsp+9A0h+fmt], xmm9
                    vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
                  }
                  RB_DrawRect2D((GfxCmdBufContext *)&v350[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, (const GfxColor)-1);
                  __asm { vmovups xmm0, xmmword ptr [r12] }
                  v344 = *(GfxColor *)(v124 - 4);
                  __asm
                  {
                    vaddss  xmm2, xmm6, xmm10
                    vmovaps xmm3, xmm7
                    vmovaps xmm1, xmm13
                    vmovss  dword ptr [rsp+9A0h+fmt], xmm7
                    vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
                  }
                  RB_DrawRect2D((GfxCmdBufContext *)&v350[1], *(float *)&_XMM1, *(float *)&_XMM2_8, *(float *)&_XMM3, fmtg, v344);
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [r12]
                    vaddss  xmm1, xmm6, xmm15
                    vmovaps xmm3, xmm14
                    vmovss  dword ptr [rsp+9A0h+fmt], xmm1
                    vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
                  }
                  RB_DrawText((GfxCmdBufContext *)&v350[1], v124, backEnd.debugFont, *(float *)&_XMM3_8, fmth, v38);
                  ++v126;
                  v124 += 68;
                }
                while ( v126 < 7 );
                __asm
                {
                  vmovups xmm0, xmmword ptr [r12]
                  vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
                }
                RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v350[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp(2709)");
                __asm
                {
                  vmovss  xmm14, cs:__real@42200000
                  vmovss  xmm8, [rbp+8A0h+var_8EC]
                }
                reserved_high = v357;
                v37 = 0;
                v349 = 1;
              }
            }
            __asm { vxorps  xmm13, xmm13, xmm13 }
          }
          __asm { vmovss  xmm12, cs:__real@41200000 }
          if ( s_cssStreaming.m_initialized && s_cssStreaming.m_enabled )
          {
            m_streamedDataSize = s_cssStreaming.m_streamedDataSize;
            _ESI = 0;
            m_firstFreeOffset = s_cssStreaming.m_firstFreeOffset;
            v144 = 0i64;
            __asm
            {
              vxorps  xmm3, xmm3, xmm3
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm3, xmm3, rdx
              vcvtsi2ss xmm0, xmm0, r8
              vdivss  xmm4, xmm0, xmm3
            }
            if ( s_cssStreaming.m_lruMemoryBlocksCount )
            {
              _R13 = &s_cssStreaming;
              if ( s_cssStreaming.m_lruMemoryBlocksCount >= 8 )
              {
                v151 = 2;
                __asm
                {
                  vpxor   xmm1, xmm1, xmm1
                  vpxor   xmm2, xmm2, xmm2
                }
                do
                {
                  _RCX = 3 * v144;
                  v144 = (unsigned int)(v144 + 8);
                  __asm
                  {
                    vmovd   xmm0, dword ptr [r13+rcx*4+18h]
                    vpinsrd xmm0, xmm0, dword ptr [r13+rdx*4+18h], 1
                    vpinsrd xmm0, xmm0, dword ptr [r13+r8*4+18h], 2
                    vpinsrd xmm0, xmm0, dword ptr [r13+r9*4+18h], 3
                    vpaddd  xmm1, xmm0, xmm1
                  }
                  _RAX = (unsigned int)(v151 + 2);
                  v151 += 8;
                  _RAX *= 3i64;
                  __asm
                  {
                    vmovd   xmm0, dword ptr [r13+rax*4+18h]
                    vpinsrd xmm0, xmm0, dword ptr [r13+rdx*4+18h], 1
                    vpinsrd xmm0, xmm0, dword ptr [r13+r8*4+18h], 2
                    vpinsrd xmm0, xmm0, dword ptr [r13+r9*4+18h], 3
                    vpaddd  xmm2, xmm0, xmm2
                  }
                }
                while ( (unsigned int)v144 < (s_cssStreaming.m_lruMemoryBlocksCount & 0xFFFFFFF8) );
                m_streamedDataSize = s_cssStreaming.m_streamedDataSize;
                m_firstFreeOffset = s_cssStreaming.m_firstFreeOffset;
                __asm
                {
                  vpaddd  xmm1, xmm1, xmm2
                  vpsrldq xmm0, xmm1, 8
                  vpaddd  xmm2, xmm1, xmm0
                  vpsrldq xmm0, xmm2, 4
                  vpaddd  xmm0, xmm2, xmm0
                  vmovd   esi, xmm0
                }
              }
              if ( (unsigned int)v144 < s_cssStreaming.m_lruMemoryBlocksCount )
              {
                p_m_size = &s_cssStreaming.m_lruMemoryBlocks[(unsigned int)v144].m_size;
                v169 = (unsigned int)(s_cssStreaming.m_lruMemoryBlocksCount - v144);
                do
                {
                  _ESI += *p_m_size;
                  p_m_size += 3;
                  --v169;
                }
                while ( v169 );
              }
            }
            _ER14 = 0;
            v171 = 0i64;
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rax
            }
            LODWORD(v359) = m_firstFreeOffset - _ESI;
            LODWORD(v350[0]) = m_streamedDataSize - (m_firstFreeOffset - _ESI);
            __asm { vdivss  xmm6, xmm0, xmm3 }
            if ( s_cssStreaming.m_zonesCount )
            {
              if ( s_cssStreaming.m_zonesCount >= 8 )
              {
                _R15 = &s_cssStreaming;
                v176 = 2;
                __asm
                {
                  vpxor   xmm1, xmm1, xmm1
                  vpxor   xmm2, xmm2, xmm2
                }
                do
                {
                  _RCX = 5 * v171;
                  v171 = (unsigned int)(v171 + 8);
                  __asm
                  {
                    vmovd   xmm0, dword ptr [r15+rcx*4+1824h]
                    vpinsrd xmm0, xmm0, dword ptr [r15+rdx*4+1824h], 1
                    vpinsrd xmm0, xmm0, dword ptr [r15+r8*4+1824h], 2
                    vpinsrd xmm0, xmm0, dword ptr [r15+r9*4+1824h], 3
                    vpaddd  xmm1, xmm0, xmm1
                  }
                  _RAX = (unsigned int)(v176 + 2);
                  v176 += 8;
                  _RAX *= 5i64;
                  __asm
                  {
                    vmovd   xmm0, dword ptr [r15+rax*4+1824h]
                    vpinsrd xmm0, xmm0, dword ptr [r15+rdx*4+1824h], 1
                    vpinsrd xmm0, xmm0, dword ptr [r15+r8*4+1824h], 2
                    vpinsrd xmm0, xmm0, dword ptr [r15+r9*4+1824h], 3
                    vpaddd  xmm2, xmm0, xmm2
                  }
                }
                while ( (unsigned int)v171 < (s_cssStreaming.m_zonesCount & 0xFFFFFFF8) );
                reserved_high = v357;
                m_firstFreeOffset = s_cssStreaming.m_firstFreeOffset;
                __asm
                {
                  vpaddd  xmm1, xmm1, xmm2
                  vpsrldq xmm0, xmm1, 8
                  vpaddd  xmm2, xmm1, xmm0
                  vpsrldq xmm0, xmm2, 4
                  vpaddd  xmm0, xmm2, xmm0
                  vmovd   r14d, xmm0
                }
              }
              if ( (unsigned int)v171 < s_cssStreaming.m_zonesCount )
              {
                v195 = &s_cssStreaming.m_zones[(unsigned int)v171].m_size;
                v196 = (unsigned int)(s_cssStreaming.m_zonesCount - v171);
                do
                {
                  _ER14 += *v195;
                  v195 += 5;
                  --v196;
                }
                while ( v196 );
              }
            }
            __asm
            {
              vcvtss2sd xmm3, xmm4, xmm4
              vmovq   r9, xmm3
            }
            Com_sprintf<128>((char (*)[128])v387, "Linearly allocated: %u (%f)", m_firstFreeOffset, *(double *)&_XMM3);
            __asm
            {
              vcvtss2sd xmm0, xmm6, xmm6
              vmovsd  [rsp+9A0h+fmt], xmm0
            }
            Com_sprintf<128>((char (*)[128])v388, "LRU Blocks count: %u, size: %u (%f)", s_cssStreaming.m_lruMemoryBlocksCount, _ESI, *(double *)&fmti);
            Com_sprintf<128>((char (*)[128])v389, "Total allocated memory: %u", (unsigned int)v359);
            Com_sprintf<128>((char (*)[128])v390, "Free memory: %u", LODWORD(v350[0]));
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, rax
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rsi
              vdivss  xmm1, xmm1, xmm0
              vcvtss2sd xmm3, xmm1, xmm1
              vmovq   r9, xmm3
            }
            Com_sprintf<128>((char (*)[128])v391, "Used memory: %u (%f)", _ER14, *(double *)&_XMM3);
            Com_sprintf<128>((char (*)[128])v392, "Stream-in jobs count: %u, copy jobs count %u", s_cssStreaming.m_streamInJobsCount, s_cssStreaming.m_copyDataJobsCount);
            Com_sprintf<128>((char (*)[128])v393, "Allocated zones: %u trees: %u", s_cssStreaming.m_zonesCount, s_cssStreaming.m_treesCount);
            Com_sprintf<128>((char (*)[128])v394, "Skipped zones LOD 0: %u", s_cssStreaming.m_skippedZones[0]);
            Com_sprintf<128>((char (*)[128])v395, "Skipped zones LOD 1: %u", s_cssStreaming.m_skippedZones[1]);
            Com_sprintf<128>((char (*)[128])v396, "Skipped zones LOD 2: %u", s_cssStreaming.m_skippedZones[2]);
            Com_sprintf<128>((char (*)[128])v397, "CssStreaming size: %u kB", 74i64);
            v207 = 0;
            v208 = v387;
            __asm { vaddss  xmm6, xmm8, xmm14 }
            do
            {
              __asm
              {
                vmovups xmm0, xmmword ptr [r12]
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2ss xmm1, xmm1, rax
                vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
                vmulss  xmm0, xmm1, xmm9
                vaddss  xmm2, xmm0, xmm11
                vaddss  xmm3, xmm2, xmm15
                vmovss  dword ptr [rsp+9A0h+fmt], xmm3
                vmovaps xmm3, xmm6
              }
              RB_DrawText((GfxCmdBufContext *)&v350[1], v208, backEnd.debugFont, *(float *)&_XMM3, fmtj, v38);
              ++v207;
              v208 += 128;
            }
            while ( v207 < 0xB );
            if ( s_cssStreaming.m_defragmentationState - 2 <= 1 )
            {
              __asm
              {
                vmovups xmm0, xmmword ptr [r12]
                vaddss  xmm1, xmm11, cs:__real@43af0000
                vmovaps xmm3, xmm6
                vmovss  dword ptr [rsp+9A0h+fmt], xmm1
                vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
              }
              RB_DrawText((GfxCmdBufContext *)&v350[1], "DEFRAGMENTING", backEnd.debugFont, *(float *)&_XMM3, fmtk, (const GfxColor)-16776961);
            }
            __asm
            {
              vmovups xmm0, xmmword ptr [r12]
              vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
            }
            RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v350[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp(2753)");
            __asm
            {
              vmovss  xmm15, [rbp+8A0h+var_8F0]
              vxorps  xmm1, xmm1, xmm1
              vaddss  xmm0, xmm15, xmm11
              vcvtsi2ss xmm1, xmm1, rax
              vaddss  xmm7, xmm0, xmm12
              vsubss  xmm0, xmm1, xmm14
              vmulss  xmm1, xmm1, cs:__real@3e800000
              vmaxss  xmm2, xmm0, xmm9
              vmovups xmm0, xmmword ptr [r12]
              vminss  xmm6, xmm2, xmm1
              vmovaps xmm3, xmm6
              vmovaps xmm2, xmm7
              vmovaps xmm1, xmm9
              vmovss  dword ptr [rsp+9A0h+fmt], xmm9
              vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
            }
            RB_DrawRect2D((GfxCmdBufContext *)&v350[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtl, (const GfxColor)-16711936);
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, rax
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rax
              vdivss  xmm1, xmm1, xmm0
              vmovups xmm0, xmmword ptr [r12]
              vmulss  xmm8, xmm1, xmm6
              vmovaps xmm3, xmm8
              vmovaps xmm2, xmm7
              vmovaps xmm1, xmm9
              vmovss  dword ptr [rsp+9A0h+fmt], xmm9
              vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
            }
            RB_DrawRect2D((GfxCmdBufContext *)&v350[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtm, (const GfxColor)-65536);
            v241 = 0;
            if ( s_cssStreaming.m_lruMemoryBlocksCount )
            {
              do
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr [r12]
                  vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
                  vxorps  xmm2, xmm2, xmm2
                  vxorps  xmm0, xmm0, xmm0
                  vmovss  dword ptr [rsp+9A0h+fmt], xmm9
                  vcvtsi2ss xmm2, xmm2, rax
                  vcvtsi2ss xmm0, xmm0, rax
                  vdivss  xmm1, xmm0, xmm2
                  vmulss  xmm3, xmm1, xmm6
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, rax
                  vdivss  xmm1, xmm0, xmm2
                  vmulss  xmm2, xmm1, xmm6
                  vaddss  xmm1, xmm2, xmm9
                  vmovaps xmm2, xmm7
                }
                RB_DrawRect2D((GfxCmdBufContext *)&v350[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtn, (const GfxColor)-16776961);
                ++v241;
              }
              while ( v241 < s_cssStreaming.m_lruMemoryBlocksCount );
              reserved_high = v357;
              v37 = 0;
            }
            __asm
            {
              vaddss  xmm4, xmm7, xmm9
              vunpcklps xmm0, xmm9, xmm7
              vmovsd  qword ptr [rbp+8A0h+var_850], xmm0
              vaddss  xmm2, xmm6, xmm9
              vunpcklps xmm0, xmm2, xmm7
              vmovsd  qword ptr [rbp+8A0h+var_850+10h], xmm0
              vunpcklps xmm0, xmm9, xmm4
              vmovsd  qword ptr [rbp+8A0h+var_850+20h], xmm0
              vunpcklps xmm0, xmm2, xmm4
              vmovsd  qword ptr [rbp+8A0h+var_850+30h], xmm0
              vunpcklps xmm0, xmm9, xmm7
              vmovsd  qword ptr [rbp+90h], xmm0
            }
            *(_DWORD *)&v374[8] = 0;
            *(_DWORD *)&v374[24] = 0;
            __asm
            {
              vunpcklps xmm0, xmm9, xmm4
              vmovsd  qword ptr [rbp+8A0h+var_808+8], xmm0
              vsubss  xmm0, xmm7, cs:__real@41700000
              vaddss  xmm3, xmm8, xmm9
              vunpcklps xmm0, xmm3, xmm0
              vmovsd  qword ptr [rbp+8A0h+var_808+18h], xmm0
              vaddss  xmm0, xmm4, cs:__real@41700000
            }
            *(_DWORD *)&v374[40] = 0;
            __asm
            {
              vunpcklps xmm0, xmm3, xmm0
              vmovsd  qword ptr [rbp+8A0h+var_808+28h], xmm0
              vmovups xmm0, xmmword ptr [r12]
            }
            *(_DWORD *)&v374[12] = -1;
            *(_DWORD *)&v374[28] = -1;
            *(_DWORD *)&v374[44] = -1;
            *(_DWORD *)&v374[60] = -1;
            *(_DWORD *)&v375[4] = -1;
            *(_DWORD *)&v375[20] = -1;
            *(_DWORD *)&v375[36] = -1;
            *(_DWORD *)&v375[52] = -1;
            *(_DWORD *)v377 = -1;
            *(_DWORD *)&v377[16] = -1;
            __asm { vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0 }
            *(_DWORD *)&v374[56] = 0;
            *(_DWORD *)v375 = 0;
            *(_DWORD *)&v375[16] = 0;
            *(_DWORD *)&v375[32] = 0;
            *(_DWORD *)&v375[48] = 0;
            RB_DrawLines2D((GfxCmdBufContext *)&v350[1], 10, 1, (const GfxPointVertex *)v374);
            __asm
            {
              vmovups xmm0, xmmword ptr [r12]
              vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
            }
            RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v350[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp(2792)");
          }
          else
          {
            __asm { vmovss  xmm15, [rbp+8A0h+var_8F0] }
          }
          if ( v349 )
          {
            __asm { vmovss  dword ptr [rbp+8A0h+outViewMatrix], xmm13 }
            memset(&outViewMatrix.row0.y, 0, 32);
            _RDI = &backEndData->viewInfo->viewParmsSet.frames[0].viewParms.camera;
            R_CompressedSunShadow_GetViewMatrix(&backEndData->sunShadow.lightDir, &outViewMatrix);
            if ( _RDI == (GfxCamera *)&v368 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
              __debugbreak();
            __asm
            {
              vmovss  xmm4, dword ptr [rdi+4]
              vmovss  xmm7, dword ptr [rdi]
              vmovss  xmm8, dword ptr [rdi+8]
              vmovss  xmm13, cs:__real@3f000000
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rax
              vmulss  xmm1, xmm0, dword ptr [rcx+3670h]
              vmovups xmm0, xmmword ptr [r12]
              vdivss  xmm5, xmm10, xmm1
              vmulss  xmm1, xmm7, dword ptr [rbp+8A0h+outViewMatrix+4]
              vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
              vmulss  xmm0, xmm4, dword ptr [rbp+8A0h+outViewMatrix+10h]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm8, dword ptr [rbp+8A0h+outViewMatrix+1Ch]
              vaddss  xmm2, xmm2, xmm1
              vsubss  xmm0, xmm2, dword ptr [rcx+366Ch]
              vmulss  xmm3, xmm0, xmm5
              vsubss  xmm1, xmm13, xmm3
              vxorps  xmm6, xmm6, xmm6
              vcvtsi2ss xmm6, xmm6, rax
              vmulss  xmm0, xmm1, xmm6
              vmulss  xmm1, xmm4, dword ptr [rbp+8A0h+outViewMatrix+0Ch]
              vmulss  xmm2, xmm0, xmm9
              vmulss  xmm0, xmm7, dword ptr [rbp+8A0h+outViewMatrix]
              vaddss  xmm4, xmm1, xmm0
              vmulss  xmm1, xmm8, dword ptr [rbp+8A0h+outViewMatrix+18h]
              vaddss  xmm4, xmm4, xmm1
              vsubss  xmm0, xmm4, dword ptr [rcx+3668h]
              vmulss  xmm5, xmm0, xmm5
              vaddss  xmm1, xmm5, xmm13
              vmulss  xmm4, xmm1, xmm6
              vaddss  xmm3, xmm2, xmm11
              vsubss  xmm2, xmm3, cs:__real@40a00000
              vmulss  xmm0, xmm4, xmm9
              vaddss  xmm1, xmm0, cs:__real@41c80000
              vmovaps xmm3, xmm12
              vmovss  dword ptr [rsp+9A0h+fmt], xmm12
            }
            RB_DrawRect2D((GfxCmdBufContext *)&v350[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmto, (const GfxColor)-65281);
            v304 = 0;
            __asm { vaddss  xmm0, xmm15, xmm11 }
            *(_DWORD *)v370.color = -1;
            v373 = -1;
            __asm
            {
              vmovss  [rbp+8A0h+var_874], xmm11
              vmovss  [rbp+8A0h+var_864], xmm0
            }
            do
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, rax
                vaddss  xmm1, xmm0, xmm10
                vmovups xmm0, xmmword ptr [r12]
                vmulss  xmm2, xmm1, xmm9
                vmovss  [rbp+8A0h+var_868], xmm2
                vmovss  [rbp+8A0h+var_878], xmm2
                vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
              }
              RB_DrawLines2D((GfxCmdBufContext *)&v350[1], 2, 1, &v370);
              ++v304;
            }
            while ( v304 <= reserved_high );
            __asm { vaddss  xmm0, xmm9, [rbp+8A0h+var_8EC] }
            v311 = v364;
            __asm
            {
              vmovss  [rbp+8A0h+var_868], xmm0
              vmovss  [rbp+8A0h+var_878], xmm9
            }
            do
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, rax
                vmulss  xmm1, xmm0, xmm9
                vmovups xmm0, xmmword ptr [r12]
                vaddss  xmm2, xmm1, xmm11
                vmovss  [rbp+8A0h+var_864], xmm2
                vmovss  [rbp+8A0h+var_874], xmm2
                vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
              }
              RB_DrawLines2D((GfxCmdBufContext *)&v350[1], 2, 1, &v370);
              ++v37;
            }
            while ( v37 <= v311 );
            __asm
            {
              vmovups xmm0, xmmword ptr [r12]
              vmovups xmmword ptr [rsp+9A0h+var_938+8], xmm0
            }
            RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v350[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp(2831)");
          }
          goto LABEL_94;
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
  const GfxShaderBufferRWView *v7; 
  const R_RT_Surface *Surface; 
  const GfxShaderBufferRWView *v9; 
  unsigned int v12; 
  unsigned int v13; 
  GfxShaderBufferView *views; 

  if ( rg.useCompressedSunShadowClipPlanes )
  {
    if ( rgp.world )
    {
      if ( rgp.world->draw.compressedSunShadowSize )
      {
        rwView = rgp.world->draw.compressedSunShadowBuffer.rwView.rwView;
        if ( rwView != 3 )
        {
          if ( rwView )
          {
            if ( rgp.world->draw.compressedSunShadowBuffer.data )
            {
              if ( rgp.world->draw.compressedSunShadowBuffer.view.view >= 2 )
              {
                _RDX = s_cssClipPlanes.m_data;
                if ( s_cssClipPlanes.m_data )
                {
                  if ( s_cssClipPlanes.m_taskState != Finished )
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
                        __asm
                        {
                          vcvttss2si r8, dword ptr [rdx+4]
                          vcvttss2si rcx, dword ptr [rdx]
                        }
                        if ( (_DWORD)_RCX * (_DWORD)_R8 == s_cssClipPlanes.m_expectedForestSize )
                        {
                          views = (GfxShaderBufferView *)__PAIR64__(_R8, _RCX);
                          s_cssClipPlanes.m_forestResolution = (base_vec2_t<unsigned int>)__PAIR64__(_R8, _RCX);
                          v12 = I_power2Ceil(_R8);
                          v13 = I_power2Ceil(s_cssClipPlanes.m_forestResolution.v[0]);
                          s_cssClipPlanes.m_taskState = Finished;
                          s_cssClipPlanes.m_dataState = Extracted;
                          if ( v13 > v12 )
                            v12 = v13;
                          s_cssClipPlanes.m_gridResolution = v12;
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
                      v7 = R_RT_BufferHandle::GetRWView(clipPlanesBuffer);
                      R_HW_AddResourceTransition(computeState, v7, 0, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
                      R_FlushResourceTransitions(computeState);
                      Surface = R_RT_Handle::GetSurface(clipPlanesBuffer);
                      if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 561, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
                        __debugbreak();
                      R_MemCpy(computeState, s_cssClipPlanes.m_data, Surface->m_buffer.m_wrappedBuffer.data, 4 * m_bufferSize, 1);
                      v9 = R_RT_BufferHandle::GetRWView(clipPlanesBuffer);
                      R_HW_AddResourceTransition(computeState, v9, 0, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
                      R_FlushResourceTransitions(computeState);
                      s_cssClipPlanes.m_taskState = Dispatched_Wait;
                    }
                  }
                }
              }
            }
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

void __fastcall R_CompressedSunShadow_GetCacheEntryClipPlanes(const GfxSunShadow *sunShadow, int gridX, int gridY, double sampleSize, float *outNearClip, float *outFarClip)
{
  char v43; 
  unsigned __int8 v44; 
  char v49; 
  char v50; 

  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  _RDI = outFarClip;
  _RBX = sunShadow;
  __asm
  {
    vmovaps [rsp+68h+var_38], xmm7
    vmovaps xmm7, xmm3
  }
  _RSI = outNearClip;
  if ( !VecNCompareCustomEpsilon(sunShadow->lightDir.v, rgp.world->draw.compressedSunShadowParams.sunDirection.v, *(float *)&_XMM2, 3) || s_cssClipPlanes.m_dataState != Extracted )
    goto LABEL_10;
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm2, xmm0, dword ptr [rbp+3670h]
    vmovaps [rsp+68h+var_28], xmm6
    vdivss  xmm6, xmm1, xmm2
  }
  R_SunShadow_GetMapSize();
  __asm
  {
    vmovss  xmm4, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm7
    vcvttss2si ecx, xmm1
  }
  _EAX = gridX * _ECX;
  __asm
  {
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vsubss  xmm1, xmm0, dword ptr [rbp+3668h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm0, xmm2, xmm4; uMin
  }
  _EAX = gridY * _ECX;
  __asm
  {
    vmovd   xmm1, eax
    vcvtdq2ps xmm1, xmm1
    vsubss  xmm2, xmm1, dword ptr [rbp+366Ch]
    vmulss  xmm3, xmm2, xmm6
    vsubss  xmm3, xmm4, xmm3; vMax
    vmovd   xmm1, ecx
    vcvtdq2ps xmm1, xmm1
    vmulss  xmm4, xmm1, xmm6
    vsubss  xmm2, xmm3, xmm4; vMin
    vaddss  xmm1, xmm4, xmm0; uMax
  }
  v44 = R_CalculateCssClipPlanes(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, outNearClip, outFarClip);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi]
    vmovss  xmm2, dword ptr [rbx+4F84h]
    vcomiss xmm1, xmm2
    vmovss  xmm0, dword ptr [rsi]
    vmovaps xmm6, [rsp+68h+var_28]
  }
  if ( v43 | v49 )
    goto LABEL_7;
  __asm { vcomiss xmm0, dword ptr [rbx+4F88h] }
  if ( !v43 )
    goto LABEL_7;
  __asm { vcomiss xmm0, xmm1 }
  if ( v43 )
    v50 = 1;
  else
LABEL_7:
    v50 = 0;
  if ( ((unsigned __int8)v50 & v44) != 0 )
  {
    __asm
    {
      vmaxss  xmm0, xmm2, xmm0
      vmovss  dword ptr [rsi], xmm0
      vmovss  xmm1, dword ptr [rbx+4F88h]
      vminss  xmm2, xmm1, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm2
    }
  }
  else
  {
LABEL_10:
    *outNearClip = _RBX->staticNearClip;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4F88h]
      vmovss  dword ptr [rdi], xmm0
    }
  }
  __asm { vmovaps xmm7, [rsp+68h+var_38] }
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

void __fastcall R_CompressedSunShadow_GetClipPlanesScaleBias(const GfxSunShadow *sunShadow, double nearClip, double farClip, float *outScale, float *outBias)
{
  char v5; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4F7Ch]
    vucomiss xmm1, xmm0
    vmovaps xmm5, xmm2
    vmovaps xmm3, xmm1
  }
  if ( !v5 )
    goto LABEL_4;
  __asm { vucomiss xmm2, dword ptr [rcx+4F80h] }
  if ( v5 )
  {
    __asm { vmovss  xmm1, cs:__real@3f800000 }
    _RAX = outBias;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rax], xmm0
      vmovss  dword ptr [r9], xmm1
    }
  }
  else
  {
LABEL_4:
    __asm { vmovss  xmm4, dword ptr [rcx+4F80h] }
    _RAX = outBias;
    __asm
    {
      vsubss  xmm1, xmm4, xmm0
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm2, xmm0, xmm1
      vsubss  xmm1, xmm5, xmm3
      vmulss  xmm3, xmm1, xmm2
      vsubss  xmm0, xmm4, xmm5
      vmulss  xmm2, xmm0, xmm2
      vmovss  dword ptr [rax], xmm2
      vmovss  dword ptr [r9], xmm3
    }
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
  const dvar_t *v7; 
  unsigned int flags; 
  unsigned __int8 v15; 

  v7 = DCONST_DVARBOOL_sm_sunvisPrepass;
  _RBX = outParams1;
  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RBP = outParams0;
  __asm { vmovaps [rsp+68h+var_28], xmm7 }
  _RDI = sunShadow;
  if ( !DCONST_DVARBOOL_sm_sunvisPrepass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_sunvisPrepass") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v7->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v7->name) )
      __debugbreak();
  }
  _EDX = v7->current.color[0];
  _ESI = 0;
  v15 = frameIndex;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [rbp+0], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmovss  dword ptr [rbp+4], xmm0
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.compressedSunShadowBiasScale; r_globals_t rg
    vmovss  dword ptr [rbp+8], xmm0
    vmovd   xmm0, edx
    vmovd   xmm1, esi
    vpcmpeqd xmm2, xmm0, xmm1
  }
  frameIndex = v15 + 1;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vblendvps xmm0, xmm7, xmm6, xmm2
    vmovss  dword ptr [rbp+0Ch], xmm0
  }
  if ( R_PostAAHasTemporalSupersampling(viewInfo->viewportFeatures.m_postAAMode) )
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, rax
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx], xmm6
    vmovaps xmm6, [rsp+68h+var_18]
  }
  _RBX->v[1] = _RDI->csmFilteringFarZ;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+84h]
    vsubss  xmm1, xmm0, dword ptr [rdi+80h]
    vmovss  xmm2, dword ptr [rdi+88h]
    vmaxss  xmm3, xmm1, xmm7
    vmovaps xmm7, [rsp+68h+var_28]
  }
  _RBX->v[3] = 0.0;
  __asm
  {
    vdivss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rbx+8], xmm0
  }
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
  __int64 v41; 
  vec3_t cross; 
  vec3_t v0; 
  vec3_t v1; 

  __asm
  {
    vmovaps [rsp+70h+var_10], xmm6
    vmovaps [rsp+70h+var_20], xmm7
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  xmm7, cs:__real@3f800000
    vmovss  dword ptr [rbp+v1], xmm0
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rbp+v1+8], xmm0
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3f666666
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbp+v0+4], xmm0
    vmovss  dword ptr [rbp+v1+4], xmm1
  }
  _RBX = outViewMatrix;
  if ( (unsigned __int64)&v41 != _security_cookie )
  {
    __asm
    {
      vmovss  dword ptr [rbp+v0], xmm7
      vmovss  dword ptr [rbp+v0+8], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rbp+v0], xmm0
      vmovss  dword ptr [rbp+v0+8], xmm7
    }
  }
  Vec3Cross(&v0, &v1, &cross);
  __asm
  {
    vmovss  xmm4, dword ptr [rbp+cross]
    vmovss  xmm6, dword ptr [rbp+cross+4]
    vmovss  xmm5, dword ptr [rbp+cross+8]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbp+cross], xmm0
    vmulss  xmm0, xmm5, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbp+cross+8], xmm0
    vmovss  dword ptr [rbp+cross+4], xmm1
  }
  Vec3Cross(&v1, &cross, &v0);
  __asm
  {
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rbp+cross]
    vmovss  xmm1, dword ptr [rbp+cross+4]
    vmovss  xmm2, dword ptr [rbp+v1+4]
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm0, dword ptr [rbp+cross+8]
    vmovss  dword ptr [rbx+0Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+v0]
    vmovss  dword ptr [rbx+18h], xmm0
    vmovss  xmm0, dword ptr [rbp+v0+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmovss  xmm1, dword ptr [rbp+v0+8]
    vmovss  dword ptr [rbx+10h], xmm0
    vmovss  xmm0, dword ptr [rbp+v1]
    vmovss  dword ptr [rbx+1Ch], xmm1
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rbx+8], xmm1
    vmovss  xmm1, dword ptr [rbp+v1+8]
    vxorps  xmm0, xmm2, xmm3
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rbx+14h], xmm0
    vmovss  dword ptr [rbx+20h], xmm2
    vmovaps xmm6, [rsp+70h+var_10]
    vmovaps xmm7, [rsp+70h+var_20]
  }
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
  unsigned int v4; 
  bool v5; 
  unsigned int m_streamInJobsCount; 
  __int64 v7; 
  signed __int32 v11[8]; 
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
      _RSI = &s_cssStreaming;
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
        _InterlockedOr(v11, 0);
        job.m_zoneId = s_cssStreaming.m_streamOutJobs.m_items[m_readPtr & 0x1FF].m_zoneId;
        ++s_cssStreaming.m_streamOutJobs.m_readPtr;
        R_ProcessCssStreamOutJob(&job);
      }
      v4 = 0;
      if ( s_cssStreaming.m_streamInJobsCount )
      {
        do
        {
          if ( s_cssStreaming.m_defragmentationState - 2 <= 1 )
            break;
          v5 = !R_ProcessCssStreamInJob(v4);
          m_streamInJobsCount = s_cssStreaming.m_streamInJobsCount;
          if ( v5 )
          {
            ++v4;
          }
          else
          {
            v7 = s_cssStreaming.m_streamInJobsCount - 1;
            if ( v4 < (unsigned int)v7 )
            {
              _RCX = 2 * v7;
              _RAX = 2i64 * v4;
              __asm
              {
                vmovups xmm0, xmmword ptr [rsi+rcx*8+6020h]
                vmovups xmmword ptr [rsi+rax*8+6020h], xmm0
              }
              m_streamInJobsCount = s_cssStreaming.m_streamInJobsCount;
            }
            s_cssStreaming.m_streamInJobsCount = --m_streamInJobsCount;
          }
        }
        while ( v4 < m_streamInJobsCount );
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
  __int64 v18; 
  CssStreamInJob *m_streamInJobs; 
  __int64 v20; 
  unsigned int m_copyDataJobsCount; 
  unsigned int v25; 
  CssCopyDataJob *m_copyDataJobs; 
  __int64 v27; 

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
      _R9 = &s_cssStreaming;
      v18 = 0i64;
      if ( s_cssStreaming.m_streamInJobsCount )
      {
        m_streamInJobs = s_cssStreaming.m_streamInJobs;
        while ( m_streamInJobs->m_data != streamingData )
        {
          v18 = (unsigned int)(v18 + 1);
          ++m_streamInJobs;
          if ( (unsigned int)v18 >= s_cssStreaming.m_streamInJobsCount )
            goto LABEL_42;
        }
        v20 = s_cssStreaming.m_streamInJobsCount - 1;
        if ( (unsigned int)v18 < (unsigned int)v20 )
        {
          _RCX = 2 * v20;
          _RAX = 16 * v18;
          __asm
          {
            vmovups xmm0, xmmword ptr [r9+rcx*8+6020h]
            vmovups xmmword ptr [rax+r9+6020h], xmm0
          }
          m_streamInJobsCount = s_cssStreaming.m_streamInJobsCount;
        }
        s_cssStreaming.m_streamInJobsCount = m_streamInJobsCount - 1;
      }
LABEL_42:
      if ( s_cssStreaming.m_defragmentationState != 3 )
      {
        m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
        v25 = 0;
        if ( s_cssStreaming.m_copyDataJobsCount )
        {
          m_copyDataJobs = s_cssStreaming.m_copyDataJobs;
          while ( m_copyDataJobs->m_data != streamingData )
          {
            ++v25;
            ++m_copyDataJobs;
            if ( v25 >= s_cssStreaming.m_copyDataJobsCount )
              goto LABEL_9;
          }
          if ( v25 >= s_cssStreaming.m_issuedCopyDataJobsCount )
          {
            v27 = s_cssStreaming.m_copyDataJobsCount - 1;
            if ( v25 < (unsigned int)v27 )
            {
              _RDX = 3 * v27;
              __asm { vmovups xmm0, xmmword ptr [r9+rdx*8+0C840h] }
              _RCX = 3i64 * v25;
              __asm
              {
                vmovups xmmword ptr [r9+rcx*8+0C840h], xmm0
                vmovsd  xmm1, qword ptr [r9+rdx*8+0C850h]
                vmovsd  qword ptr [r9+rcx*8+0C850h], xmm1
              }
              m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
            }
            s_cssStreaming.m_copyDataJobsCount = m_copyDataJobsCount - 1;
          }
          else
          {
            s_cssStreaming.m_copyDataJobs[v25].m_updateForestJobsCount = 0;
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
  int v38; 
  int v40; 
  bool v82; 
  char v83; 
  char v84; 
  __int128 v86; 
  bool v135; 
  unsigned int v192; 
  float outFarClip; 
  float outNearClip; 
  float t; 
  vec3_t bbMax; 
  vec3_t bbMin; 
  vec3_t rayDir; 
  tmat33_t<vec3_t> outViewMatrix; 
  vec3_t rayOrigin; 

  _RDI = data;
  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  _RSI = projSetup;
  if ( VecNCompareCustomEpsilon(data->sunShadow.lightDir.v, rgp.world->draw.compressedSunShadowParams.sunDirection.v, *(float *)&_XMM2, 3) && s_cssClipPlanes.m_dataState == Extracted )
  {
    __asm
    {
      vmovaps [rsp+1A0h+var_40], xmm6
      vmovaps [rsp+1A0h+var_70], xmm9
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, dword ptr [r14+3670h]
      vmovss  xmm0, cs:__real@3f800000
    }
    _RAX = (unsigned int)_RDI->sunShadow.opaqueCascadeCount - 1;
    __asm
    {
      vmovaps [rsp+1A0h+var_90], xmm11
      vmovaps [rsp+1A0h+var_A0], xmm12
      vdivss  xmm6, xmm0, xmm1
      vmovss  xmm9, dword ptr [rsi+rax*4+6Ch]
    }
    _RBX = (unsigned int)_RAX;
    if ( rg.useCachedSunShadow )
    {
      R_SunShadow_GetMapSize();
      __asm
      {
        vmulss  xmm2, xmm9, dword ptr [rsi+rbx*8+2Ch]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm9
        vmovss  xmm0, dword ptr [rsi+rbx*8+4Ch]
        vcvttss2si ecx, xmm1
        vsubss  xmm1, xmm0, xmm2
        vmulss  xmm2, xmm9, dword ptr [rsi+rbx*8+30h]
        vmovss  xmm0, dword ptr [rsi+rbx*8+50h]
        vcvttss2si edx, xmm1
        vsubss  xmm1, xmm0, xmm2
        vcvttss2si r9d, xmm1
      }
      if ( _EDX < 0 )
        v38 = -((_ECX - _EDX - 1) / _ECX);
      else
        v38 = _EDX / _ECX;
      _ER8 = _ECX * v38;
      if ( _ER9 < 0 )
        v40 = -((_ECX - _ER9 - 1) / _ECX);
      else
        v40 = _ER9 / _ECX;
      __asm { vmovss  xmm12, cs:__real@3f000000 }
      _EAX = _ECX * v40;
      __asm
      {
        vmovd   xmm0, r8d
        vcvtdq2ps xmm0, xmm0
        vsubss  xmm1, xmm0, dword ptr [r14+3668h]
        vmulss  xmm2, xmm1, xmm6
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
        vsubss  xmm1, xmm0, dword ptr [r14+366Ch]
        vaddss  xmm5, xmm2, xmm12
        vmulss  xmm2, xmm1, xmm6
      }
      _EAX = 3 * _ECX;
      __asm
      {
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm1, xmm0, xmm6
        vsubss  xmm3, xmm12, xmm2
        vsubss  xmm2, xmm3, xmm1
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+rax*8+4Ch]
        vsubss  xmm1, xmm0, dword ptr [r14+3668h]
        vmovss  xmm12, cs:__real@3f000000
        vmulss  xmm0, xmm9, dword ptr [rsi+rax*8+2Ch]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm12
        vmulss  xmm1, xmm0, xmm6
        vmovss  xmm0, dword ptr [rsi+rax*8+50h]
        vsubss  xmm5, xmm3, xmm1
        vsubss  xmm1, xmm0, dword ptr [r14+366Ch]
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm3, xmm12, xmm2
        vxorps  xmm4, xmm4, xmm4
        vcvtsi2ss xmm4, xmm4, r15
        vsubss  xmm0, xmm4, dword ptr [rsi+rax*8+30h]
        vmulss  xmm1, xmm0, xmm9
        vmulss  xmm2, xmm1, xmm6
        vmulss  xmm0, xmm4, xmm9
        vsubss  xmm2, xmm3, xmm2; vMin
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm3, xmm1, xmm2; vMax
      }
    }
    __asm
    {
      vaddss  xmm0, xmm1, xmm5
      vsubss  xmm4, xmm0, xmm5
      vxorps  xmm6, xmm6, xmm6
      vmovaps xmm1, xmm0; uMax
      vmovaps xmm0, xmm5; uMin
      vmovss  dword ptr [rdi+0E7628h], xmm4
      vmovss  dword ptr [rdi+0E762Ch], xmm5
      vmovss  dword ptr [rdi+0E7630h], xmm2
      vmovss  [rsp+1A0h+var_16C], xmm6
      vmovss  [rsp+1A0h+var_170], xmm6
    }
    if ( (unsigned __int8)R_CalculateCssClipPlanes(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, &outNearClip, &outFarClip) )
    {
      __asm
      {
        vmovss  xmm1, [rsp+1A0h+var_170]
        vcomiss xmm1, dword ptr [rdi+0E7684h]
        vmovss  xmm2, [rsp+1A0h+var_16C]
        vcomiss xmm2, dword ptr [rdi+0E7688h]
      }
    }
    v86 = 544 * (__int128)_RBX;
    _RBX = 544 * _RBX;
    v82 = *((_QWORD *)&v86 + 1) != 0i64;
    v84 = (*((_QWORD *)&v86 + 1) != 0i64) | v83;
    __asm
    {
      vmovss  xmm11, dword ptr [rbx+rdi+0E2A44h]
      vcomiss xmm11, xmm6
    }
    if ( !v84 )
    {
      __asm
      {
        vmovaps [rsp+1A0h+var_50], xmm7
        vmovss  xmm7, dword ptr [rbx+rdi+0E2A48h]
        vcomiss xmm7, xmm6
      }
      if ( !v84 )
      {
        __asm
        {
          vmovaps [rsp+1A0h+var_80], xmm10
          vmovss  xmm10, dword ptr [rbx+rdi+0E2A4Ch]
          vcomiss xmm10, xmm6
          vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
          vmovss  xmm0, dword ptr [rdi+0E766Ch]
          vmovss  xmm1, dword ptr [rdi+0E7674h]
          vxorps  xmm3, xmm0, xmm2
          vmovss  xmm0, dword ptr [rdi+0E7670h]
          vxorps  xmm4, xmm0, xmm2
          vxorps  xmm5, xmm1, xmm2
          vmulss  xmm1, xmm3, dword ptr [rbx+rdi+0E2A38h]
          vmovaps [rsp+1A0h+var_60], xmm8
          vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vandps  xmm3, xmm3, xmm8
          vmulss  xmm0, xmm3, xmm11
          vsubss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm4, dword ptr [rbx+rdi+0E2A3Ch]
          vandps  xmm4, xmm4, xmm8
          vmulss  xmm0, xmm4, xmm7
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm1, xmm5, dword ptr [rbx+rdi+0E2A40h]
          vsubss  xmm2, xmm3, xmm0
          vandps  xmm5, xmm5, xmm8
          vaddss  xmm4, xmm2, xmm1
          vmulss  xmm0, xmm5, xmm10
          vsubss  xmm0, xmm4, xmm0
          vcomiss xmm0, dword ptr [rdi+0E767Ch]
          vmovss  [rsp+1A0h+t], xmm0
        }
        if ( v82 )
        {
          __asm
          {
            vmovss  xmm7, cs:__real@7f7fffff
            vmovaps [rsp+1A0h+var_B0], xmm13
            vmovaps [rsp+1A0h+var_C0], xmm14
            vmovaps [rsp+1A0h+var_D0], xmm15
          }
          R_CompressedSunShadow_GetViewMatrix(&_RDI->sunShadow.lightDir, &outViewMatrix);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+0A0h+outViewMatrix+8]
            vmovss  xmm1, dword ptr [rbp+0A0h+outViewMatrix+14h]
            vmovss  xmm6, dword ptr [rbx+rdi+0E2A38h]
            vmovss  xmm5, dword ptr [rbx+rdi+0E2A3Ch]
            vmovss  xmm4, dword ptr [rbx+rdi+0E2A48h]
            vmovss  xmm3, dword ptr [rbx+rdi+0E2A40h]
            vmovss  xmm2, dword ptr [rbx+rdi+0E2A4Ch]
            vmovss  dword ptr [rsp+1A0h+rayDir], xmm0
            vmovss  xmm0, dword ptr [rbp+0A0h+outViewMatrix+20h]
            vmovss  dword ptr [rbp+0A0h+rayDir+8], xmm0
            vmovss  dword ptr [rsp+1A0h+rayDir+4], xmm1
            vmovss  xmm1, dword ptr [rbx+rdi+0E2A44h]
            vsubss  xmm0, xmm6, xmm1
            vmovss  dword ptr [rsp+1A0h+bbMin], xmm0
            vsubss  xmm0, xmm5, xmm4
            vmovss  dword ptr [rsp+1A0h+bbMin+4], xmm0
            vsubss  xmm0, xmm3, xmm2
            vaddss  xmm1, xmm1, xmm6
            vmovss  dword ptr [rsp+1A0h+bbMin+8], xmm0
            vmovss  dword ptr [rsp+1A0h+bbMax], xmm1
            vaddss  xmm0, xmm4, xmm5
            vaddss  xmm1, xmm2, xmm3
            vmovss  dword ptr [rsp+1A0h+bbMax+4], xmm0
            vmovss  dword ptr [rsp+1A0h+bbMax+8], xmm1
          }
          R_SunShadow_GetMapSize();
          __asm
          {
            vmovss  xmm2, dword ptr [rbp+0A0h+outViewMatrix+18h]
            vmovss  xmm3, dword ptr [rbp+0A0h+outViewMatrix+1Ch]
            vmovss  xmm14, dword ptr [rsi+24h]
            vmovss  xmm15, dword ptr [rsi+28h]
            vmovss  xmm11, dword ptr [rbp+0A0h+rayDir+8]
            vmovss  xmm13, dword ptr [rsp+1A0h+rayDir]
            vxorps  xmm0, xmm0, xmm0
          }
          v135 = 1;
          _ER14 = 0;
          __asm
          {
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm1, xmm0, xmm9
            vmulss  xmm0, xmm3, dword ptr [rsp+1A0h+bbMin+8]
            vmulss  xmm5, xmm1, xmm12
            vmovss  xmm12, dword ptr [rsp+1A0h+rayDir+4]
            vmovss  [rsp+1A0h+var_154], xmm1
            vmulss  xmm1, xmm2, dword ptr [rsp+1A0h+bbMin+8]
            vmovss  [rsp+1A0h+var_16C], xmm1
            vmulss  xmm1, xmm2, dword ptr [rsp+1A0h+bbMax+8]
            vmovss  [rsp+1A0h+var_170], xmm0
            vmulss  xmm0, xmm3, dword ptr [rsp+1A0h+bbMax+8]
            vmovss  [rsp+1A0h+var_160], xmm1
            vmovss  [rsp+1A0h+var_15C], xmm0
          }
          for ( _ECX = 0; _ECX < 2; v135 = _ECX <= 2 )
          {
            __asm
            {
              vmovd   xmm1, r14d
              vmovd   xmm0, ecx
              vpcmpeqd xmm2, xmm0, xmm1
              vmovss  xmm0, dword ptr [rsp+1A0h+bbMin]
              vmovss  xmm1, dword ptr [rsp+1A0h+bbMax]
              vblendvps xmm6, xmm1, xmm0, xmm2
              vmulss  xmm3, xmm6, dword ptr [rbp+0A0h+outViewMatrix]
              vmulss  xmm10, xmm6, dword ptr [rbp+0A0h+outViewMatrix+4]
              vmovss  [rsp+1A0h+var_164], xmm6
              vmovss  [rsp+1A0h+var_158], xmm3
              vmovss  [rsp+1A0h+var_164], xmm10
            }
            for ( _EAX = 0; _EAX < 2; v135 = _EAX <= 2 )
            {
              __asm
              {
                vmovd   xmm1, r14d
                vmovd   xmm0, eax
                vpcmpeqd xmm2, xmm0, xmm1
                vmovss  xmm0, dword ptr [rsp+1A0h+bbMin+4]
                vmovss  xmm1, dword ptr [rsp+1A0h+bbMax+4]
                vblendvps xmm4, xmm1, xmm0, xmm2
                vmulss  xmm0, xmm4, dword ptr [rbp+0A0h+outViewMatrix+0Ch]
                vmulss  xmm1, xmm4, dword ptr [rbp+0A0h+outViewMatrix+10h]
                vaddss  xmm9, xmm0, xmm3
                vaddss  xmm0, xmm9, [rsp+1A0h+var_16C]
                vsubss  xmm2, xmm0, xmm14
                vaddss  xmm10, xmm1, xmm10
                vaddss  xmm1, xmm10, [rsp+1A0h+var_170]
                vandps  xmm2, xmm2, xmm8
                vcomiss xmm2, xmm5
                vsubss  xmm3, xmm1, xmm15
              }
              if ( v135 )
              {
                __asm
                {
                  vandps  xmm3, xmm3, xmm8
                  vcomiss xmm3, xmm5
                }
                if ( v135 )
                {
                  __asm
                  {
                    vmulss  xmm1, xmm4, xmm12
                    vmulss  xmm0, xmm6, xmm13
                    vaddss  xmm2, xmm1, xmm0
                    vmulss  xmm1, xmm11, dword ptr [rsp+1A0h+bbMin+8]
                    vaddss  xmm2, xmm2, xmm1
                    vminss  xmm7, xmm2, xmm7
                  }
                }
              }
              __asm
              {
                vaddss  xmm0, xmm9, [rsp+1A0h+var_160]
                vaddss  xmm1, xmm10, [rsp+1A0h+var_15C]
                vsubss  xmm2, xmm0, xmm14
                vandps  xmm2, xmm2, xmm8
                vcomiss xmm2, xmm5
                vsubss  xmm3, xmm1, xmm15
              }
              if ( v135 )
              {
                __asm
                {
                  vandps  xmm3, xmm3, xmm8
                  vcomiss xmm3, xmm5
                }
                if ( v135 )
                {
                  __asm
                  {
                    vmulss  xmm1, xmm4, xmm12
                    vmulss  xmm0, xmm6, xmm13
                    vaddss  xmm2, xmm1, xmm0
                    vmulss  xmm1, xmm11, dword ptr [rsp+1A0h+bbMax+8]
                    vaddss  xmm2, xmm2, xmm1
                    vminss  xmm7, xmm2, xmm7
                  }
                }
              }
              __asm
              {
                vmovss  xmm3, [rsp+1A0h+var_158]
                vmovss  xmm10, [rsp+1A0h+var_164]
              }
              ++_EAX;
            }
            ++_ECX;
          }
          v192 = 0;
          __asm
          {
            vmovss  xmm0, [rsp+1A0h+t]
            vsubss  xmm8, xmm0, cs:__real@3f800000
            vmovss  xmm6, cs:__real@bf000000
            vmulss  xmm1, xmm13, dword ptr [rax+100h]
            vmulss  xmm0, xmm12, dword ptr [rax+104h]
            vmovss  xmm14, dword ptr [rbp+0A0h+outViewMatrix+18h]
            vmovss  xmm15, dword ptr [rbp+0A0h+outViewMatrix+1Ch]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm11, dword ptr [rax+108h]
            vaddss  xmm2, xmm2, xmm1
            vsubss  xmm3, xmm8, xmm2
            vmulss  xmm0, xmm3, xmm13
            vaddss  xmm9, xmm0, dword ptr [rax+100h]
            vmovss  xmm13, dword ptr [rbp+0A0h+outViewMatrix]
            vmulss  xmm1, xmm3, xmm12
            vaddss  xmm10, xmm1, dword ptr [rax+104h]
            vmovss  xmm12, dword ptr [rbp+0A0h+outViewMatrix+0Ch]
            vmulss  xmm0, xmm3, xmm11
            vaddss  xmm11, xmm0, dword ptr [rax+108h]
          }
          do
          {
            __asm
            {
              vmovss  xmm3, cs:__real@3f000000
              vmovd   xmm1, r14d
            }
            _EAX = v192 & 1;
            __asm
            {
              vmovd   xmm0, eax
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm0, xmm6, xmm3, xmm2
              vmulss  xmm5, xmm0, [rsp+1A0h+var_154]
              vmovd   xmm1, r14d
            }
            _EAX = v192 & 2;
            __asm
            {
              vmovd   xmm0, eax
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm0, xmm6, xmm3, xmm2
              vmulss  xmm4, xmm0, [rsp+1A0h+var_154]
              vmulss  xmm0, xmm4, dword ptr [rbp+0A0h+outViewMatrix+4]
              vmulss  xmm1, xmm5, xmm13
              vaddss  xmm2, xmm1, xmm9
              vaddss  xmm2, xmm2, xmm0
              vmulss  xmm0, xmm4, dword ptr [rbp+0A0h+outViewMatrix+10h]
              vmulss  xmm1, xmm5, xmm12
              vaddss  xmm3, xmm1, xmm10
              vmovss  dword ptr [rbp+0A0h+rayOrigin], xmm2
              vaddss  xmm2, xmm3, xmm0
              vmulss  xmm1, xmm5, xmm14
              vaddss  xmm3, xmm1, xmm11
              vmulss  xmm0, xmm15, xmm4
              vmovss  dword ptr [rbp+0A0h+rayOrigin+4], xmm2
              vaddss  xmm2, xmm3, xmm0
              vmovss  dword ptr [rbp+0A0h+rayOrigin+8], xmm2
            }
            if ( IntersectRayAABB(&rayOrigin, &rayDir, &bbMin, &bbMax, &t) )
            {
              __asm
              {
                vaddss  xmm1, xmm8, [rsp+1A0h+t]
                vminss  xmm7, xmm1, xmm7
              }
            }
            ++v192;
          }
          while ( v192 < 4 );
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+0E767Ch]
            vmovaps xmm15, [rsp+1A0h+var_D0]
            vmovaps xmm14, [rsp+1A0h+var_C0]
            vmovaps xmm13, [rsp+1A0h+var_B0]
            vminss  xmm1, xmm0, xmm7
            vmovss  dword ptr [rdi+0E767Ch], xmm1
          }
        }
        __asm
        {
          vmovaps xmm8, [rsp+1A0h+var_60]
          vmovaps xmm10, [rsp+1A0h+var_80]
        }
      }
      __asm { vmovaps xmm7, [rsp+1A0h+var_50] }
    }
    __asm
    {
      vmovaps xmm9, [rsp+1A0h+var_70]
      vmovaps xmm11, [rsp+1A0h+var_90]
      vmovaps xmm6, [rsp+1A0h+var_40]
      vmovaps xmm12, [rsp+1A0h+var_A0]
    }
  }
  else
  {
    _RDI->sunShadow.overlaySetup.csmScale = 0.0;
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
  __int64 v31; 
  unsigned int v32; 
  __int64 v33; 
  unsigned int m_dstOffset; 
  unsigned int m_size; 
  unsigned __int16 m_deferredUpdateForestJobsHead; 
  unsigned int v41; 
  unsigned __int16 *p_m_firstTree; 
  char Base[4]; 
  char v44; 

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
        v7 = &v44;
        do
        {
          v8 = *((_DWORD *)v7 - 1);
          v9 = *((_DWORD *)v7 + 1);
          v10 = v8;
          if ( v8 - m_alwaysLoadedDataSize >= 0x8000 )
            v10 = m_alwaysLoadedDataSize;
          *(_DWORD *)v7 = v10;
          m_alwaysLoadedDataSize = v10 + v9;
          v41 = v10 + v9;
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
            m_alwaysLoadedDataSize = v41;
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
          _R11 = &s_cssStreaming;
          do
          {
            v31 = (unsigned int)v27;
            v32 = s_cssStreaming.m_copyDataJobs[v31].m_srcOffset - s_cssStreaming.m_copyDataJobs[v31].m_dstOffset;
            if ( v28 < m_copyDataJobsCount )
            {
              while ( 1 )
              {
                v33 = v28;
                m_dstOffset = s_cssStreaming.m_copyDataJobs[v33].m_dstOffset;
                if ( s_cssStreaming.m_copyDataJobs[v33].m_srcOffset - m_dstOffset != v32 )
                  break;
                m_size = s_cssStreaming.m_copyDataJobs[v31].m_size;
                if ( m_size + s_cssStreaming.m_copyDataJobs[v33].m_size >= v26 )
                  break;
                if ( m_size + s_cssStreaming.m_copyDataJobs[v31].m_dstOffset != m_dstOffset )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 2323, ASSERT_TYPE_ASSERT, "(mergeToJob.m_dstOffset + mergeToJob.m_size == mergeFromJob.m_dstOffset)", (const char *)&queryFormat, "mergeToJob.m_dstOffset + mergeToJob.m_size == mergeFromJob.m_dstOffset") )
                    __debugbreak();
                  _R11 = &s_cssStreaming;
                }
                if ( ((s_cssStreaming.m_copyDataJobs[v31].m_updateForestJobsCount + s_cssStreaming.m_copyDataJobs[v31].m_firstUpdateForestJob) & 0x3FF) != s_cssStreaming.m_copyDataJobs[v33].m_firstUpdateForestJob )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 2324, ASSERT_TYPE_ASSERT, "(( ( mergeToJob.m_firstUpdateForestJob + mergeToJob.m_updateForestJobsCount ) % CSS_MAX_UPDATE_FOREST_JOBS ) == mergeFromJob.m_firstUpdateForestJob)", (const char *)&queryFormat, "( ( mergeToJob.m_firstUpdateForestJob + mergeToJob.m_updateForestJobsCount ) % CSS_MAX_UPDATE_FOREST_JOBS ) == mergeFromJob.m_firstUpdateForestJob") )
                    __debugbreak();
                  _R11 = &s_cssStreaming;
                }
                --v29;
                s_cssStreaming.m_copyDataJobs[v31].m_size += s_cssStreaming.m_copyDataJobs[v33].m_size;
                ++v28;
                s_cssStreaming.m_copyDataJobs[v31].m_updateForestJobsCount += s_cssStreaming.m_copyDataJobs[v33].m_updateForestJobsCount;
                m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
                if ( v28 >= s_cssStreaming.m_copyDataJobsCount )
                  goto LABEL_37;
              }
              v27 = (unsigned int)(v27 + 1);
              if ( v28 != (_DWORD)v27 )
              {
                _RDX = 3i64 * v28;
                __asm { vmovups xmm0, xmmword ptr [r11+rdx*8+0C840h] }
                _RCX = 3 * v27;
                __asm
                {
                  vmovups xmmword ptr [r11+rcx*8+0C840h], xmm0
                  vmovsd  xmm1, qword ptr [r11+rdx*8+0C850h]
                  vmovsd  qword ptr [r11+rcx*8+0C850h], xmm1
                }
                m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
              }
              ++v28;
            }
LABEL_37:
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
  bool v8; 
  float v10; 
  vec3_t sunShadowLightDir; 
  tmat33_t<vec3_t> sunAxis; 
  tmat44_t<vec4_t> in1; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> in2; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = world;
  if ( world && world->draw.compressedSunShadowSize && (rwView = world->draw.compressedSunShadowBuffer.rwView.rwView, rwView != 3) && rwView && world->draw.compressedSunShadowBuffer.data && (v8 = world->draw.compressedSunShadowBuffer.view.view == 1, world->draw.compressedSunShadowBuffer.view.view > 1) )
  {
    __asm { vmovsd  xmm0, qword ptr [rcx+3658h] }
    v10 = world->draw.compressedSunShadowParams.sunDirection.v[2];
    __asm
    {
      vmovaps xmmword ptr [r11-18h], xmm6
      vmovaps xmmword ptr [r11-28h], xmm7
      vmovaps xmmword ptr [r11-38h], xmm8
      vxorps  xmm8, xmm8, xmm8
      vucomiss xmm0, xmm8
      vmovaps xmmword ptr [r11-48h], xmm9
      vmovss  xmm9, cs:__real@3f800000
    }
    sunShadowLightDir.v[2] = v10;
    __asm { vmovsd  qword ptr [rsp+170h+sunShadowLightDir], xmm0 }
    if ( v8 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+170h+sunShadowLightDir+4]
        vucomiss xmm0, xmm8
      }
      if ( v8 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+170h+sunShadowLightDir+8]
          vucomiss xmm0, xmm8
        }
        if ( v8 )
        {
          __asm
          {
            vmovss  dword ptr [rsp+170h+sunShadowLightDir], xmm8
            vmovss  dword ptr [rsp+170h+sunShadowLightDir+4], xmm8
            vmovss  dword ptr [rsp+170h+sunShadowLightDir+8], xmm9
          }
        }
      }
    }
    R_GetSunAxes(&sunShadowLightDir, &sunAxis);
    __asm
    {
      vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rsp+170h+sunAxis]
      vmovss  xmm1, dword ptr [rsp+170h+sunAxis+4]
      vmovss  xmm6, dword ptr [rbx+3674h]
      vmovss  xmm4, dword ptr [rbx+3678h]
      vmovss  dword ptr [rsp+170h+in1], xmm0
      vmovss  xmm0, dword ptr [rsp+170h+sunAxis+8]
      vucomiss xmm6, xmm8
      vmovss  dword ptr [rbp+70h+in1+20h], xmm0
      vmovss  dword ptr [rsp+170h+in1+10h], xmm1
      vmovss  xmm1, dword ptr [rbx+3668h]
      vxorps  xmm0, xmm1, xmm5
      vmovss  xmm1, dword ptr [rsp+170h+sunAxis+0Ch]
      vmovss  dword ptr [rbp+70h+in1+30h], xmm0
      vmovss  xmm0, dword ptr [rsp+170h+sunAxis+10h]
      vmovss  dword ptr [rsp+170h+in1+14h], xmm0
      vmovss  xmm0, dword ptr [rbx+366Ch]
      vxorps  xmm2, xmm0, xmm5
      vmovss  dword ptr [rsp+170h+in1+4], xmm1
      vmovss  xmm1, dword ptr [rsp+170h+sunAxis+14h]
      vmovss  dword ptr [rbp+70h+in1+24h], xmm1
      vmovss  xmm1, dword ptr [rsp+170h+sunAxis+18h]
      vxorps  xmm0, xmm1, xmm5
      vmovss  dword ptr [rbp+70h+in1+34h], xmm2
      vmovss  xmm2, dword ptr [rsp+170h+sunAxis+1Ch]
      vxorps  xmm1, xmm2, xmm5
      vmovss  dword ptr [rsp+170h+in1+8], xmm0
      vmovss  xmm0, dword ptr [rsp+170h+sunAxis+20h]
      vxorps  xmm2, xmm0, xmm5
    }
    *(vec4_t *)((char *)&in2.row0 + 4) = 0ui64;
    *(vec4_t *)((char *)&in2.row1 + 8) = 0ui64;
    *(vec4_t *)((char *)&in2.row2 + 12) = 0ui64;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmovss  dword ptr [rsp+170h+in1+18h], xmm1
      vmovss  xmm1, cs:__real@40000000
      vmovss  dword ptr [rbp+70h+in1+28h], xmm2
      vmulss  xmm2, xmm0, dword ptr [rbx+3670h]
      vdivss  xmm3, xmm1, xmm2
      vmovss  dword ptr [rbp+70h+in2], xmm3
      vmovss  dword ptr [rbp+70h+in2+14h], xmm3
      vmovss  dword ptr [rbp+70h+in1+38h], xmm8
      vmovss  dword ptr [rsp+170h+in1+0Ch], xmm8
      vmovss  dword ptr [rsp+170h+in1+1Ch], xmm8
      vmovss  dword ptr [rbp+70h+in1+2Ch], xmm8
      vmovss  dword ptr [rbp+70h+in1+3Ch], xmm9
      vucomiss xmm4, xmm8
      vmovss  xmm0, cs:__real@bf800000
      vmovss  dword ptr [rbp+70h+in2+28h], xmm0
      vmovss  dword ptr [rbp+70h+in2+3Ch], xmm9
    }
    MatrixMultiply44Aligned(&in1, &in2, &out);
    __asm
    {
      vmovss  xmm7, cs:__real@3f000000
      vmulss  xmm6, xmm7, dword ptr [rbp+70h+out+0Ch]
      vmulss  xmm2, xmm7, dword ptr [rbp+70h+out]
      vmulss  xmm5, xmm7, dword ptr [rbp+70h+out+1Ch]
      vmulss  xmm4, xmm7, dword ptr [rbp+70h+out+2Ch]
      vmulss  xmm3, xmm7, dword ptr [rbp+70h+out+3Ch]
      vaddss  xmm0, xmm2, xmm6
      vmulss  xmm2, xmm7, dword ptr [rbp+70h+out+10h]
      vaddss  xmm1, xmm2, xmm5
      vmulss  xmm2, xmm7, dword ptr [rbp+70h+out+20h]
      vmovss  dword ptr cs:s_cssLookupMatrix+10h, xmm1
      vmovss  dword ptr cs:s_cssLookupMatrix, xmm0
      vaddss  xmm0, xmm2, xmm4
      vmulss  xmm2, xmm7, dword ptr [rbp+70h+out+30h]
      vaddss  xmm1, xmm2, xmm3
      vmulss  xmm2, xmm7, dword ptr [rbp+70h+out+4]
      vmovss  dword ptr cs:s_cssLookupMatrix+30h, xmm1
      vsubss  xmm1, xmm6, xmm2
      vmulss  xmm2, xmm7, dword ptr [rbp+70h+out+14h]
      vmovaps xmm6, xmmword ptr [rsp+170h+var_18+8]
      vmovss  dword ptr cs:s_cssLookupMatrix+4, xmm1
      vsubss  xmm1, xmm5, xmm2
      vmulss  xmm2, xmm7, dword ptr [rbp+70h+out+24h]
      vmovss  dword ptr cs:s_cssLookupMatrix+14h, xmm1
      vsubss  xmm1, xmm4, xmm2
      vmulss  xmm2, xmm7, dword ptr [rbp+70h+out+34h]
      vmovaps xmm7, [rsp+170h+var_28+8]
      vmovss  dword ptr cs:s_cssLookupMatrix+24h, xmm1
      vsubss  xmm1, xmm3, xmm2
      vmovss  dword ptr cs:s_cssLookupMatrix+34h, xmm1
      vmovss  xmm1, dword ptr [rbp+70h+out+18h]
      vmovss  dword ptr cs:s_cssLookupMatrix+20h, xmm0
      vmovss  xmm0, dword ptr [rbp+70h+out+8]
      vmovss  dword ptr cs:s_cssLookupMatrix+18h, xmm1
      vmovss  xmm1, dword ptr [rbp+70h+out+38h]
      vmovss  dword ptr cs:s_cssLookupMatrix+8, xmm0
      vmovss  xmm0, dword ptr [rbp+70h+out+28h]
      vmovss  dword ptr cs:s_cssLookupMatrix+0Ch, xmm8
      vmovss  dword ptr cs:s_cssLookupMatrix+1Ch, xmm8
      vmovss  dword ptr cs:s_cssLookupMatrix+2Ch, xmm8
      vmovaps xmm8, [rsp+170h+var_38+8]
      vmovss  dword ptr cs:s_cssLookupMatrix+3Ch, xmm9
      vmovaps xmm9, [rsp+170h+var_48+8]
      vmovss  dword ptr cs:s_cssLookupMatrix+38h, xmm1
      vmovss  dword ptr cs:s_cssLookupMatrix+28h, xmm0
    }
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
  __int64 v5; 
  unsigned int *p_m_zoneId; 
  __int64 v7; 
  unsigned int v11; 
  CssZoneDesc *v12; 
  unsigned __int16 m_transientIndex; 
  unsigned __int16 m_lastTree; 
  unsigned __int16 m_firstTree; 
  unsigned __int16 i; 
  int m_lod; 
  unsigned int m_tileIndex; 
  __int64 v19; 
  unsigned int m_offset; 
  unsigned int m_copyDataJobsCount; 
  unsigned int v22; 
  unsigned int *p_m_dstOffset; 
  __int64 v24; 
  __int16 v29; 
  unsigned int v30; 
  unsigned int j; 
  unsigned __int16 v32; 
  unsigned int m_size; 
  unsigned int v34; 
  __int64 v35; 

  if ( s_cssStreaming.m_defragmentationState == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 1990, ASSERT_TYPE_ASSERT, "(s_cssStreaming.m_defragmentationState != CssStreaming::Defragmentation_InProgress)", (const char *)&queryFormat, "s_cssStreaming.m_defragmentationState != CssStreaming::Defragmentation_InProgress") )
    __debugbreak();
  m_zoneId = job->m_zoneId;
  if ( job->m_zoneId != -1 )
  {
    m_streamInJobsCount = s_cssStreaming.m_streamInJobsCount;
    _R13 = &s_cssStreaming;
    v5 = 0i64;
    if ( s_cssStreaming.m_streamInJobsCount )
    {
      p_m_zoneId = &s_cssStreaming.m_streamInJobs[0].m_zoneId;
      while ( *p_m_zoneId != m_zoneId )
      {
        v5 = (unsigned int)(v5 + 1);
        p_m_zoneId += 4;
        if ( (unsigned int)v5 >= s_cssStreaming.m_streamInJobsCount )
          goto LABEL_13;
      }
      v7 = s_cssStreaming.m_streamInJobsCount - 1;
      if ( (unsigned int)v5 < (unsigned int)v7 )
      {
        _RCX = 2 * v7;
        _RAX = 2 * v5;
        __asm
        {
          vmovups xmm0, xmmword ptr [r13+rcx*8+6020h]
          vmovups xmmword ptr [r13+rax*8+6020h], xmm0
        }
        m_streamInJobsCount = s_cssStreaming.m_streamInJobsCount;
      }
      s_cssStreaming.m_streamInJobsCount = m_streamInJobsCount - 1;
    }
LABEL_13:
    v11 = 0;
    if ( s_cssStreaming.m_zonesCount )
    {
      while ( 1 )
      {
        v12 = &s_cssStreaming.m_zones[v11];
        if ( v12->m_zoneId == m_zoneId )
          break;
        if ( ++v11 >= s_cssStreaming.m_zonesCount )
          return;
      }
      if ( (CssStreaming *)((char *)&s_cssStreaming + 20 * v11) != (CssStreaming *)-6168i64 )
      {
        m_transientIndex = s_cssStreaming.m_zones[v11].m_transientIndex;
        m_lastTree = s_cssStreaming.m_zones[v11].m_lastTree;
        m_firstTree = s_cssStreaming.m_zones[v11].m_firstTree;
        for ( i = m_firstTree; i <= m_lastTree; ++i )
        {
          m_lod = v12->m_lod;
          m_tileIndex = s_cssStreaming.m_trees[i].m_tileIndex;
          if ( s_cssStreaming.m_updateForestJobsCount < 0x400 )
          {
            v19 = s_cssStreaming.m_updateForestJobsCount++;
            s_cssStreaming.m_updateForestJobs[v19] = (CssUpdateForestJob)((m_lod << 30) | m_tileIndex & 0x3FFFFFFF);
          }
          else
          {
            Com_PrintWarning(8, "Too many CSS update forest jobs. Increase the limit (%u).", 1024i64);
          }
        }
        m_offset = v12->m_offset;
        if ( s_cssStreaming.m_defragmentationState == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 1694, ASSERT_TYPE_ASSERT, "(s_cssStreaming.m_defragmentationState != CssStreaming::Defragmentation_InProgress)", (const char *)&queryFormat, "s_cssStreaming.m_defragmentationState != CssStreaming::Defragmentation_InProgress") )
          __debugbreak();
        m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
        v22 = 0;
        if ( s_cssStreaming.m_copyDataJobsCount )
        {
          p_m_dstOffset = &s_cssStreaming.m_copyDataJobs[0].m_dstOffset;
          while ( *p_m_dstOffset != m_offset )
          {
            ++v22;
            p_m_dstOffset += 6;
            if ( v22 >= s_cssStreaming.m_copyDataJobsCount )
              goto LABEL_36;
          }
          if ( v22 >= s_cssStreaming.m_issuedCopyDataJobsCount )
          {
            v24 = s_cssStreaming.m_copyDataJobsCount - 1;
            if ( v22 < (unsigned int)v24 )
            {
              _RDX = 3 * v24;
              __asm { vmovups xmm0, xmmword ptr [r13+rdx*8+0C840h] }
              _RCX = 3i64 * v22;
              __asm
              {
                vmovups xmmword ptr [r13+rcx*8+0C840h], xmm0
                vmovsd  xmm1, qword ptr [r13+rdx*8+0C850h]
                vmovsd  qword ptr [r13+rcx*8+0C850h], xmm1
              }
              m_copyDataJobsCount = s_cssStreaming.m_copyDataJobsCount;
            }
            s_cssStreaming.m_copyDataJobsCount = m_copyDataJobsCount - 1;
          }
          else
          {
            s_cssStreaming.m_copyDataJobs[v22].m_updateForestJobsCount = 0;
          }
        }
LABEL_36:
        v29 = m_lastTree - m_firstTree + 1;
        memmove_0(&s_cssStreaming.m_trees[m_firstTree], &s_cssStreaming.m_trees[m_lastTree + 1], 8i64 * (s_cssStreaming.m_treesCount - (unsigned int)m_lastTree - 1));
        s_cssStreaming.m_treesCount -= v29;
        v30 = 0;
        for ( j = s_cssStreaming.m_zonesCount; v30 < j; ++v30 )
        {
          v32 = s_cssStreaming.m_zones[v30].m_firstTree;
          if ( v32 > m_firstTree )
          {
            s_cssStreaming.m_zones[v30].m_lastTree -= v29;
            s_cssStreaming.m_zones[v30].m_firstTree = v32 - v29;
            j = s_cssStreaming.m_zonesCount;
          }
        }
        m_size = v12->m_size;
        v34 = v12->m_offset;
        if ( s_cssStreaming.m_lruMemoryBlocksCount < 0x200 )
        {
          v35 = s_cssStreaming.m_lruMemoryBlocksCount++;
          s_cssStreaming.m_lruMemoryBlocks[v35].m_offset = v34;
          s_cssStreaming.m_lruMemoryBlocks[v35].m_size = m_size;
          s_cssStreaming.m_lruMemoryBlocks[v35].m_transientIndex = m_transientIndex;
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
  _RBX = data;
  *(_QWORD *)data = 0i64;
  if ( this->m_id )
  {
    if ( this->m_id == 1 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm0, xmm0, cs:__real@37800080
        vmovss  dword ptr [rbx], xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, cs:__real@37800080
        vmovss  dword ptr [rbx+4], xmm1
      }
      return (vec2_t)data;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compressed_sunshadow.cpp", 253, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      return (vec2_t)_RBX;
    }
  }
  else
  {
    *(_DWORD *)data = *(_DWORD *)((unsigned int)(12 * a4 + 32) + rootIndex + 4);
    *((_DWORD *)data + 1) = *(_DWORD *)((unsigned int)(12 * a4 + 32) + rootIndex + 8);
    return (vec2_t)data;
  }
}

