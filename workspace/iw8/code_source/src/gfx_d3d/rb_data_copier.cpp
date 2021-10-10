/*
==============
RB_BackendDataCopier::GetNextCommandCost
==============
*/

unsigned int __fastcall RB_BackendDataCopier::GetNextCommandCost(RB_BackendDataCopier *this, unsigned int queueIndex)
{
  return ?GetNextCommandCost@RB_BackendDataCopier@@AEAAII@Z(this, queueIndex);
}

/*
==============
RB_BackendDataCopier::UpdateSingleQueue
==============
*/

bool __fastcall RB_BackendDataCopier::UpdateSingleQueue(RB_BackendDataCopier *this, ComputeCmdBufState *computeState, unsigned int queueIndex, bool forceAtLeastOne)
{
  return ?UpdateSingleQueue@RB_BackendDataCopier@@QEAA_NPEAUComputeCmdBufState@@I_N@Z(this, computeState, queueIndex, forceAtLeastOne);
}

/*
==============
RB_BackendDataCopier::CopyTexRect
==============
*/

void __fastcall RB_BackendDataCopier::CopyTexRect(RB_BackendDataCopier *this, unsigned int queueIndex, GfxTextureId srcTexture, unsigned int srcX, unsigned int srcY, unsigned int srcZ, unsigned int srcMip, unsigned int width, unsigned int height, unsigned int depth, GfxTextureId destTexture, unsigned int destX, unsigned int destY, unsigned int destZ, unsigned int destMip)
{
  ?CopyTexRect@RB_BackendDataCopier@@QEAAXIW4GfxTextureId@@IIIIIII0IIII@Z(this, queueIndex, srcTexture, srcX, srcY, srcZ, srcMip, width, height, depth, destTexture, destX, destY, destZ, destMip);
}

/*
==============
RB_BackendDataCopier::Update
==============
*/

void __fastcall RB_BackendDataCopier::Update(RB_BackendDataCopier *this, ComputeCmdBufState *computeState)
{
  ?Update@RB_BackendDataCopier@@QEAAXPEAUComputeCmdBufState@@@Z(this, computeState);
}

/*
==============
RB_BackendDataCopier::GetCopyDataPerFrameBudget
==============
*/

unsigned int __fastcall RB_BackendDataCopier::GetCopyDataPerFrameBudget(RB_BackendDataCopier *this)
{
  return ?GetCopyDataPerFrameBudget@RB_BackendDataCopier@@QEBAIXZ(this);
}

/*
==============
RB_BackendDataCopier::Init
==============
*/

void __fastcall RB_BackendDataCopier::Init(RB_BackendDataCopier *this)
{
  ?Init@RB_BackendDataCopier@@QEAAXXZ(this);
}

/*
==============
RB_BackendDataCopier::CopyTexRect
==============
*/

void __fastcall RB_BackendDataCopier::CopyTexRect(RB_BackendDataCopier *this, unsigned int queueIndex, GfxTextureId srcTexture, unsigned int srcX, unsigned int srcY, unsigned int width, unsigned int height, unsigned int srcMip, unsigned int srcSlice, GfxTextureId destTexture, unsigned int destX, unsigned int destY, unsigned int destMip, unsigned int destSlice)
{
  ?CopyTexRect@RB_BackendDataCopier@@QEAAXIW4GfxTextureId@@IIIIII0IIII@Z(this, queueIndex, srcTexture, srcX, srcY, width, height, srcMip, srcSlice, destTexture, destX, destY, destMip, destSlice);
}

/*
==============
RB_BackendDataCopier::GetPerFrameBudget
==============
*/

unsigned int __fastcall RB_BackendDataCopier::GetPerFrameBudget(RB_BackendDataCopier *this)
{
  return ?GetPerFrameBudget@RB_BackendDataCopier@@QEBAIXZ(this);
}

/*
==============
RB_BackendDataCopier::RemoveInPlaceCopyBuffer
==============
*/

bool __fastcall RB_BackendDataCopier::RemoveInPlaceCopyBuffer(RB_BackendDataCopier *this, unsigned int queueIndex, const GfxWrappedRWBuffer *buffer)
{
  return ?RemoveInPlaceCopyBuffer@RB_BackendDataCopier@@QEAA_NIPEBUGfxWrappedRWBuffer@@@Z(this, queueIndex, buffer);
}

/*
==============
RB_BackendDataCopier::CopyDataInPlace
==============
*/

void __fastcall RB_BackendDataCopier::CopyDataInPlace(RB_BackendDataCopier *this, unsigned int queueIndex, GfxWrappedRWBuffer *data, unsigned int srcDataOffset, unsigned int destDataOffset, unsigned int dataSize)
{
  ?CopyDataInPlace@RB_BackendDataCopier@@QEAAXIPEAUGfxWrappedRWBuffer@@III@Z(this, queueIndex, data, srcDataOffset, destDataOffset, dataSize);
}

/*
==============
RB_BackendDataCopier::RemoveRenderableCopyDest
==============
*/

bool __fastcall RB_BackendDataCopier::RemoveRenderableCopyDest(RB_BackendDataCopier *this, unsigned int queueIndex, GfxTextureId texture)
{
  return ?RemoveRenderableCopyDest@RB_BackendDataCopier@@QEAA_NIW4GfxTextureId@@@Z(this, queueIndex, texture);
}

/*
==============
RB_BackendDataCopier::TransitionCopyDestResourcesPre
==============
*/

void __fastcall RB_BackendDataCopier::TransitionCopyDestResourcesPre(RB_BackendDataCopier *this, ComputeCmdBufState *computeState, RB_BackendDataCopier::CopyDestResources *resources)
{
  ?TransitionCopyDestResourcesPre@RB_BackendDataCopier@@AEAAXPEAUComputeCmdBufState@@AEAUCopyDestResources@1@@Z(this, computeState, resources);
}

/*
==============
RB_BackendDataCopier::ToggleFrame
==============
*/

void __fastcall RB_BackendDataCopier::ToggleFrame(RB_BackendDataCopier *this)
{
  ?ToggleFrame@RB_BackendDataCopier@@QEAAXXZ(this);
}

/*
==============
RB_BackendDataCopier::FreeTempFence
==============
*/

void __fastcall RB_BackendDataCopier::FreeTempFence(RB_BackendDataCopier *this, unsigned int fenceId)
{
  ?FreeTempFence@RB_BackendDataCopier@@QEAAXI@Z(this, fenceId);
}

/*
==============
RB_BackendDataCopier::CheckTempFence
==============
*/

unsigned int __fastcall RB_BackendDataCopier::CheckTempFence(RB_BackendDataCopier *this, unsigned int fenceId)
{
  return ?CheckTempFence@RB_BackendDataCopier@@QEAAII@Z(this, fenceId);
}

/*
==============
RB_BackendDataCopier::AddInPlaceCopyBuffer
==============
*/

void __fastcall RB_BackendDataCopier::AddInPlaceCopyBuffer(RB_BackendDataCopier *this, unsigned int queueIndex, const GfxWrappedRWBuffer *buffer)
{
  ?AddInPlaceCopyBuffer@RB_BackendDataCopier@@QEAAXIPEBUGfxWrappedRWBuffer@@@Z(this, queueIndex, buffer);
}

/*
==============
RB_BackendDataCopier::ProcessNextCommand
==============
*/

bool __fastcall RB_BackendDataCopier::ProcessNextCommand(RB_BackendDataCopier *this, ComputeCmdBufState *computeState, unsigned int queueIndex)
{
  return ?ProcessNextCommand@RB_BackendDataCopier@@AEAA_NPEAUComputeCmdBufState@@I@Z(this, computeState, queueIndex);
}

/*
==============
RB_BackendDataCopier::RemoveRenderableCopyDest
==============
*/

bool __fastcall RB_BackendDataCopier::RemoveRenderableCopyDest(RB_BackendDataCopier *this, unsigned int queueIndex, const GfxWrappedBuffer *buffer)
{
  return ?RemoveRenderableCopyDest@RB_BackendDataCopier@@QEAA_NIPEBUGfxWrappedBuffer@@@Z(this, queueIndex, buffer);
}

/*
==============
RB_BackendDataCopier::CommitMem
==============
*/

void __fastcall RB_BackendDataCopier::CommitMem(RB_BackendDataCopier *this, unsigned int queueIndex, unsigned __int8 *vaStart, unsigned __int8 *vaEnd, StreamerMemLoan *outMemLoan, Mem_PageRange *outPageRange, const char *name)
{
  ?CommitMem@RB_BackendDataCopier@@QEAAXIPEAE0PEAUStreamerMemLoan@@PEAUMem_PageRange@@PEBD@Z(this, queueIndex, vaStart, vaEnd, outMemLoan, outPageRange, name);
}

/*
==============
RB_BackendDataCopier::AddRenderableCopyDest
==============
*/

void __fastcall RB_BackendDataCopier::AddRenderableCopyDest(RB_BackendDataCopier *this, unsigned int queueIndex, GfxTextureId texture)
{
  ?AddRenderableCopyDest@RB_BackendDataCopier@@QEAAXIW4GfxTextureId@@@Z(this, queueIndex, texture);
}

/*
==============
RB_BackendDataCopier::CopyData
==============
*/

void __fastcall RB_BackendDataCopier::CopyData(RB_BackendDataCopier *this, unsigned int queueIndex, const GfxWrappedBuffer *srcData, unsigned int srcDataOffset, GfxWrappedBuffer *destData, unsigned int destDataOffset, unsigned int dataSize)
{
  ?CopyData@RB_BackendDataCopier@@QEAAXIPEBUGfxWrappedBuffer@@IPEAU2@II@Z(this, queueIndex, srcData, srcDataOffset, destData, destDataOffset, dataSize);
}

/*
==============
RB_BackendDataCopier::Shutdown
==============
*/

void __fastcall RB_BackendDataCopier::Shutdown(RB_BackendDataCopier *this)
{
  ?Shutdown@RB_BackendDataCopier@@QEAAXXZ(this);
}

/*
==============
RB_BackendDataCopier::AllocAndInsertTempFence
==============
*/

unsigned int __fastcall RB_BackendDataCopier::AllocAndInsertTempFence(RB_BackendDataCopier *this, unsigned int queueIndex, unsigned int initialValue, unsigned int valueToWrite)
{
  return ?AllocAndInsertTempFence@RB_BackendDataCopier@@QEAAIIII@Z(this, queueIndex, initialValue, valueToWrite);
}

/*
==============
RB_BackendDataCopier::WaitForCopiesGPU
==============
*/

void __fastcall RB_BackendDataCopier::WaitForCopiesGPU(RB_BackendDataCopier *this, unsigned int queueIndex)
{
  ?WaitForCopiesGPU@RB_BackendDataCopier@@QEAAXI@Z(this, queueIndex);
}

/*
==============
RB_BackendDataCopier::AddRenderableCopyDest
==============
*/

void __fastcall RB_BackendDataCopier::AddRenderableCopyDest(RB_BackendDataCopier *this, unsigned int queueIndex, const GfxWrappedBuffer *buffer)
{
  ?AddRenderableCopyDest@RB_BackendDataCopier@@QEAAXIPEBUGfxWrappedBuffer@@@Z(this, queueIndex, buffer);
}

/*
==============
RB_BackendDataCopier::InsertCPUFence
==============
*/

void __fastcall RB_BackendDataCopier::InsertCPUFence(RB_BackendDataCopier *this, unsigned int queueIndex, unsigned int *address, unsigned int dataToWrite)
{
  ?InsertCPUFence@RB_BackendDataCopier@@QEAAXIPEAII@Z(this, queueIndex, address, dataToWrite);
}

/*
==============
RB_BackendDataCopier::ClearQueue
==============
*/

void __fastcall RB_BackendDataCopier::ClearQueue(RB_BackendDataCopier *this, unsigned int queueIndex)
{
  ?ClearQueue@RB_BackendDataCopier@@QEAAXI@Z(this, queueIndex);
}

/*
==============
RB_BackendDataCopier::TransitionCopyDestResourcesPost
==============
*/

void __fastcall RB_BackendDataCopier::TransitionCopyDestResourcesPost(RB_BackendDataCopier *this, ComputeCmdBufState *computeState, RB_BackendDataCopier::CopyDestResources *resources)
{
  ?TransitionCopyDestResourcesPost@RB_BackendDataCopier@@AEAAXPEAUComputeCmdBufState@@AEAUCopyDestResources@1@@Z(this, computeState, resources);
}

/*
==============
RB_BackendDataCopier::AddInPlaceCopyBuffer
==============
*/
void RB_BackendDataCopier::AddInPlaceCopyBuffer(RB_BackendDataCopier *this, unsigned int queueIndex, const GfxWrappedRWBuffer *buffer)
{
  __int64 v3; 
  __int64 m_numInplaceBuffers; 
  RB_BackendDataCopier::CopyDestResources *v5; 
  __int64 v6; 
  const GfxWrappedRWBuffer **m_inplaceBuffers; 

  v3 = queueIndex;
  m_numInplaceBuffers = this->m_copyDestResources[v3].m_numInplaceBuffers;
  v5 = &this->m_copyDestResources[v3];
  if ( (int)m_numInplaceBuffers <= 0 )
  {
LABEL_5:
    if ( (int)m_numInplaceBuffers < 8 )
    {
      v5->m_inplaceBuffers[m_numInplaceBuffers] = buffer;
      ++v5->m_numInplaceBuffers;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 235, ASSERT_TYPE_ASSERT, "(numBuffers < CopyDestResources::MAX_COPY_DEST_RESOURCES)", (const char *)&queryFormat, "numBuffers < CopyDestResources::MAX_COPY_DEST_RESOURCES") )
    {
      __debugbreak();
    }
  }
  else
  {
    v6 = 0i64;
    m_inplaceBuffers = v5->m_inplaceBuffers;
    while ( *m_inplaceBuffers != buffer )
    {
      ++v6;
      ++m_inplaceBuffers;
      if ( v6 >= m_numInplaceBuffers )
        goto LABEL_5;
    }
  }
}

/*
==============
RB_BackendDataCopier::AddRenderableCopyDest
==============
*/
void RB_BackendDataCopier::AddRenderableCopyDest(RB_BackendDataCopier *this, unsigned int queueIndex, const GfxWrappedBuffer *buffer)
{
  RB_BackendDataCopier::CopyDestResources *v3; 
  __int64 m_numBuffers; 
  __int64 v5; 

  v3 = &this->m_copyDestResources[queueIndex];
  m_numBuffers = this->m_copyDestResources[queueIndex].m_numBuffers;
  if ( (int)m_numBuffers <= 0 )
  {
LABEL_5:
    if ( (int)m_numBuffers < 8 )
    {
      v3->m_buffers[m_numBuffers] = buffer;
      ++v3->m_numBuffers;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 188, ASSERT_TYPE_ASSERT, "(numBuffers < CopyDestResources::MAX_COPY_DEST_RESOURCES)", (const char *)&queryFormat, "numBuffers < CopyDestResources::MAX_COPY_DEST_RESOURCES") )
    {
      __debugbreak();
    }
  }
  else
  {
    v5 = 0i64;
    while ( v3->m_buffers[v5] != buffer )
    {
      if ( ++v5 >= m_numBuffers )
        goto LABEL_5;
    }
  }
}

/*
==============
RB_BackendDataCopier::AddRenderableCopyDest
==============
*/
void RB_BackendDataCopier::AddRenderableCopyDest(RB_BackendDataCopier *this, unsigned int queueIndex, GfxTextureId texture)
{
  __int64 v3; 
  __int64 m_numTextures; 
  RB_BackendDataCopier::CopyDestResources *v5; 
  __int64 v6; 
  GfxTextureId *m_textures; 

  v3 = queueIndex;
  m_numTextures = this->m_copyDestResources[v3].m_numTextures;
  v5 = &this->m_copyDestResources[v3];
  if ( (int)m_numTextures <= 0 )
  {
LABEL_5:
    if ( (int)m_numTextures < 8 )
    {
      v5->m_textures[m_numTextures] = texture;
      ++v5->m_numTextures;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 212, ASSERT_TYPE_ASSERT, "(numTextures < CopyDestResources::MAX_COPY_DEST_RESOURCES)", (const char *)&queryFormat, "numTextures < CopyDestResources::MAX_COPY_DEST_RESOURCES") )
    {
      __debugbreak();
    }
  }
  else
  {
    v6 = 0i64;
    m_textures = v5->m_textures;
    while ( *m_textures != texture )
    {
      ++v6;
      ++m_textures;
      if ( v6 >= m_numTextures )
        goto LABEL_5;
    }
  }
}

/*
==============
RB_BackendDataCopier::AllocAndInsertTempFence
==============
*/
__int64 RB_BackendDataCopier::AllocAndInsertTempFence(RB_BackendDataCopier *this, unsigned int queueIndex, unsigned int initialValue, unsigned int valueToWrite)
{
  __int64 v4; 
  __int64 v5; 
  int v6; 
  bitarray<32> *p_m_tempFencesUsed; 
  unsigned int v11; 
  int v13; 
  int v14; 
  RB_BackendDataCopier::Cmd item; 

  LODWORD(v4) = 0;
  v5 = queueIndex;
  v6 = 0;
  p_m_tempFencesUsed = &this->m_tempFencesUsed;
  do
  {
    v11 = __lzcnt(~p_m_tempFencesUsed->array[0]);
    v4 = v11 + (unsigned int)v4;
    if ( v11 < 0x20 )
      break;
    ++v6;
    ++p_m_tempFencesUsed;
  }
  while ( !v6 );
  if ( (unsigned int)v4 >= 0x20 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 631, ASSERT_TYPE_ASSERT, "(index < MAX_TEMP_FENCES)", (const char *)&queryFormat, "index < MAX_TEMP_FENCES") )
      __debugbreak();
    v14 = 32;
    v13 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v14) )
      __debugbreak();
  }
  item.cmdType = CMD_CPU_FENCE;
  item.memcpyCmd.src = (const GfxWrappedBuffer *)&this->m_tempFences[v4];
  this->m_tempFencesUsed.array[(unsigned __int64)(unsigned int)v4 >> 5] |= 0x80000000 >> (v4 & 0x1F);
  this->m_tempFences[v4] = initialValue;
  item.memcpyCmd.srcDataOffset = valueToWrite;
  MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Push(&this->m_commands[v5], &item);
  return (unsigned int)v4;
}

/*
==============
RB_BackendDataCopier::CheckTempFence
==============
*/
__int64 RB_BackendDataCopier::CheckTempFence(RB_BackendDataCopier *this, unsigned int fenceId)
{
  return this->m_tempFences[fenceId];
}

/*
==============
RB_BackendDataCopier::ClearQueue
==============
*/
void RB_BackendDataCopier::ClearQueue(RB_BackendDataCopier *this, unsigned int queueIndex)
{
  __int64 v2; 
  void *retaddr; 

  v2 = queueIndex;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  this->m_commands[v2].m_allocPtr = 0;
  this->m_commands[v2].m_writePtr = 0;
  this->m_commands[v2].m_readPtr = 0;
  this->m_commands[v2].m_consumerThreadId = 0;
}

/*
==============
RB_BackendDataCopier::CommitMem
==============
*/
void RB_BackendDataCopier::CommitMem(RB_BackendDataCopier *this, unsigned int queueIndex, unsigned __int8 *vaStart, unsigned __int8 *vaEnd, StreamerMemLoan *outMemLoan, Mem_PageRange *outPageRange, const char *name)
{
  __int64 v7; 
  RB_BackendDataCopier::Cmd item; 

  v7 = queueIndex;
  Sys_ProfBeginNamedEvent(0xFF000080, "Prep StreamerMemLoan");
  item.memcpyCmd.dest = (GfxWrappedBuffer *)name;
  item.memCommitCmd.vaEnd = vaEnd;
  item.memCommitCmd.outPageRange = outPageRange;
  item.cmdType = CMD_MEM_COMMIT;
  item.memcpyCmd.src = (const GfxWrappedBuffer *)vaStart;
  item.memCommitCmd.outMemLoan = outMemLoan;
  StreamerMemLoan::TryGrow(outMemLoan, DODGE, vaEnd - vaStart);
  MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Push(&this->m_commands[v7], &item);
  Sys_ProfEndNamedEvent();
}

/*
==============
RB_BackendDataCopier::CopyData
==============
*/
void RB_BackendDataCopier::CopyData(RB_BackendDataCopier *this, unsigned int queueIndex, const GfxWrappedBuffer *srcData, unsigned int srcDataOffset, GfxWrappedBuffer *destData, unsigned int destDataOffset, unsigned int dataSize)
{
  RB_BackendDataCopier::Cmd item; 

  item.memcpyCmd.dest = destData;
  item.memCommitCmd.outPageRange = (Mem_PageRange *)__PAIR64__(dataSize, destDataOffset);
  item.cmdType = CMD_MEM_COPY;
  item.memcpyCmd.src = srcData;
  item.memcpyCmd.srcDataOffset = srcDataOffset;
  MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Push(&this->m_commands[queueIndex], &item);
}

/*
==============
RB_BackendDataCopier::CopyDataInPlace
==============
*/
void RB_BackendDataCopier::CopyDataInPlace(RB_BackendDataCopier *this, unsigned int queueIndex, GfxWrappedRWBuffer *data, unsigned int srcDataOffset, unsigned int destDataOffset, unsigned int dataSize)
{
  RB_BackendDataCopier::Cmd item; 

  item.memCommitCmd.outPageRange = (Mem_PageRange *)__PAIR64__(dataSize, destDataOffset);
  item.cmdType = CMD_MEM_COPY_INPLACE;
  item.memcpyCmd.src = NULL;
  item.memcpyCmd.dest = data;
  item.memcpyCmd.srcDataOffset = srcDataOffset;
  MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Push(&this->m_commands[queueIndex], &item);
}

/*
==============
RB_BackendDataCopier::CopyTexRect
==============
*/
void RB_BackendDataCopier::CopyTexRect(RB_BackendDataCopier *this, unsigned int queueIndex, GfxTextureId srcTexture, unsigned int srcX, unsigned int srcY, unsigned int width, unsigned int height, unsigned int srcMip, unsigned int srcSlice, GfxTextureId destTexture, unsigned int destX, unsigned int destY, unsigned int destMip, unsigned int destSlice)
{
  __int64 v15; 
  RB_BackendDataCopier::Cmd item; 

  v15 = queueIndex;
  if ( !R_Texture_IsResidentId(srcTexture) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 509, ASSERT_TYPE_ASSERT, "(R_Texture_IsResidentId( srcTexture ))", (const char *)&queryFormat, "R_Texture_IsResidentId( srcTexture )") )
    __debugbreak();
  if ( !R_Texture_IsResidentId(destTexture) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 510, ASSERT_TYPE_ASSERT, "(R_Texture_IsResidentId( destTexture ))", (const char *)&queryFormat, "R_Texture_IsResidentId( destTexture )") )
    __debugbreak();
  if ( R_Texture_IsDestroyed(srcTexture) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 511, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( srcTexture ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( srcTexture )") )
    __debugbreak();
  if ( R_Texture_IsDestroyed(destTexture) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 512, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( destTexture ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( destTexture )") )
    __debugbreak();
  item.cmdType = CMD_COPY_TEX_RECT;
  item.copyTexRectCmd.src = srcTexture;
  item.copyTexRectCmd.dest = destTexture;
  item.copyTexRectCmd.srcX = truncate_cast<unsigned short,unsigned int>(srcX);
  item.copyTexRectCmd.srcY = truncate_cast<unsigned short,unsigned int>(srcY);
  item.copyTexRectCmd.srcMip = truncate_cast<unsigned short,unsigned int>(srcMip);
  item.copyTexRectCmd.srcSlice = truncate_cast<unsigned short,unsigned int>(srcSlice);
  item.copyTexRectCmd.destX = truncate_cast<unsigned short,unsigned int>(destX);
  item.copyTexRectCmd.destY = truncate_cast<unsigned short,unsigned int>(destY);
  item.copyTexRectCmd.dstMip = truncate_cast<unsigned short,unsigned int>(destMip);
  item.copyTexRectCmd.dstSlice = truncate_cast<unsigned short,unsigned int>(destSlice);
  item.copyTexRectCmd.width = truncate_cast<unsigned short,unsigned int>(width);
  item.copyTexRectCmd.height = truncate_cast<unsigned short,unsigned int>(height);
  MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Push(&this->m_commands[v15], &item);
}

/*
==============
RB_BackendDataCopier::CopyTexRect
==============
*/
void RB_BackendDataCopier::CopyTexRect(RB_BackendDataCopier *this, unsigned int queueIndex, GfxTextureId srcTexture, unsigned int srcX, unsigned int srcY, unsigned int srcZ, unsigned int srcMip, unsigned int width, unsigned int height, unsigned int depth, GfxTextureId destTexture, unsigned int destX, unsigned int destY, unsigned int destZ, unsigned int destMip)
{
  __int64 v16; 
  RB_BackendDataCopier::Cmd item; 

  v16 = queueIndex;
  if ( !R_Texture_IsResidentId(srcTexture) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 535, ASSERT_TYPE_ASSERT, "(R_Texture_IsResidentId( srcTexture ))", (const char *)&queryFormat, "R_Texture_IsResidentId( srcTexture )") )
    __debugbreak();
  if ( !R_Texture_IsResidentId(destTexture) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 536, ASSERT_TYPE_ASSERT, "(R_Texture_IsResidentId( destTexture ))", (const char *)&queryFormat, "R_Texture_IsResidentId( destTexture )") )
    __debugbreak();
  if ( R_Texture_IsDestroyed(srcTexture) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 537, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( srcTexture ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( srcTexture )") )
    __debugbreak();
  if ( R_Texture_IsDestroyed(destTexture) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 538, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( destTexture ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( destTexture )") )
    __debugbreak();
  item.cmdType = CMD_COPY_TEX_BOX;
  item.copyTexRectCmd.src = srcTexture;
  item.copyTexRectCmd.dest = destTexture;
  item.copyTexRectCmd.srcX = truncate_cast<unsigned short,unsigned int>(srcX);
  item.copyTexRectCmd.srcY = truncate_cast<unsigned short,unsigned int>(srcY);
  item.copyTexRectCmd.srcMip = truncate_cast<unsigned short,unsigned int>(srcZ);
  item.copyTexRectCmd.srcSlice = truncate_cast<unsigned short,unsigned int>(srcMip);
  item.copyTexRectCmd.destX = truncate_cast<unsigned short,unsigned int>(destX);
  item.copyTexRectCmd.destY = truncate_cast<unsigned short,unsigned int>(destY);
  item.copyTexRectCmd.dstMip = truncate_cast<unsigned short,unsigned int>(destZ);
  item.copyTexRectCmd.dstSlice = truncate_cast<unsigned short,unsigned int>(destMip);
  item.copyTexRectCmd.width = truncate_cast<unsigned short,unsigned int>(width);
  item.copyTexRectCmd.height = truncate_cast<unsigned short,unsigned int>(height);
  item.copyTexBoxCmd.depth = truncate_cast<unsigned short,unsigned int>(depth);
  MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Push(&this->m_commands[v16], &item);
}

/*
==============
RB_BackendDataCopier::FreeTempFence
==============
*/
void RB_BackendDataCopier::FreeTempFence(RB_BackendDataCopier *this, unsigned int fenceId)
{
  unsigned __int64 v2; 
  bitarray<32> *p_m_tempFencesUsed; 
  int v5; 

  v2 = fenceId;
  p_m_tempFencesUsed = &this->m_tempFencesUsed;
  if ( fenceId >= 0x20 )
  {
    v5 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", fenceId, v5) )
      __debugbreak();
  }
  p_m_tempFencesUsed[v2 >> 5].array[0] &= ~(0x80000000 >> (v2 & 0x1F));
}

/*
==============
RB_BackendDataCopier::GetCopyDataPerFrameBudget
==============
*/
__int64 RB_BackendDataCopier::GetCopyDataPerFrameBudget(RB_BackendDataCopier *this)
{
  return (unsigned int)(int)(float)(r_gpuCopyPerFrameBudgetMB->current.value * 1048576.0) >> 1;
}

/*
==============
RB_BackendDataCopier::GetNextCommandCost
==============
*/
__int64 RB_BackendDataCopier::GetNextCommandCost(RB_BackendDataCopier *this, unsigned int queueIndex)
{
  __int64 v2; 
  MPSCQueue<RB_BackendDataCopier::Cmd,16384> *v4; 
  volatile int m_readPtr; 
  RB_BackendDataCopier::Cmd *v6; 
  __int64 result; 
  unsigned int height; 
  unsigned int width; 
  const GfxTexture *Resident; 
  const GfxTexture *v11; 
  GfxTextureId src; 
  unsigned int depth; 
  unsigned int v14; 
  unsigned int v15; 
  const GfxTexture *v16; 
  const GfxTexture *v17; 
  signed __int32 v18[8]; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int readCost; 
  unsigned int writeCost; 

  v2 = queueIndex;
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 135, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  v4 = &this->m_commands[v2];
  MPSCQueue<RB_BackendDataCopier::Cmd,16384>::CheckConsumerThread(v4);
  m_readPtr = v4->m_readPtr;
  _InterlockedOr(v18, 0);
  v6 = &v4->m_items[m_readPtr & 0x3FFF];
  switch ( v6->cmdType )
  {
    case CMD_MEM_COPY:
    case CMD_MEM_COPY_INPLACE:
      result = 2 * v6->memcpyCmd.dataSize;
      break;
    case CMD_COPY_TEX_RECT:
      height = v6->copyTexRectCmd.height;
      width = v6->copyTexRectCmd.width;
      Resident = R_Texture_GetResident(v6->copyTexRectCmd.src);
      v11 = R_Texture_GetResident(v6->copyTexRectCmd.dest);
      R_GetCopyTextureRectCost(v11, Resident, width, height, &readCost, &writeCost);
      result = readCost + writeCost;
      break;
    case CMD_COPY_TEX_BOX:
      src = v6->copyTexRectCmd.src;
      depth = v6->copyTexBoxCmd.depth;
      v14 = v6->copyTexRectCmd.height;
      v15 = v6->copyTexRectCmd.width;
      v19 = 0;
      v20 = 0;
      v16 = R_Texture_GetResident(src);
      v17 = R_Texture_GetResident(v6->copyTexRectCmd.dest);
      R_GetCopyTextureBoxCost(v17, v16, v15, v14, depth, &v19, &v20);
      result = v20 + v19;
      break;
    case CMD_GPU_WAIT_FOR_COPIES:
    case CMD_CPU_FENCE:
    case CMD_MEM_COMMIT:
      goto $LN7_13;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 168, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
$LN7_13:
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
RB_BackendDataCopier::GetPerFrameBudget
==============
*/
__int64 RB_BackendDataCopier::GetPerFrameBudget(RB_BackendDataCopier *this)
{
  return (unsigned int)(int)(float)(r_gpuCopyPerFrameBudgetMB->current.value * 1048576.0);
}

/*
==============
RB_BackendDataCopier::Init
==============
*/
void RB_BackendDataCopier::Init(RB_BackendDataCopier *this)
{
  unsigned int *m_numCommitWatFrames; 
  int *p_m_numBuffers; 
  volatile int *p_m_writePtr; 
  __int64 v4; 

  m_numCommitWatFrames = this->m_numCommitWatFrames;
  this->m_tempFencesUsed.array[0] = 0;
  p_m_numBuffers = &this->m_copyDestResources[0].m_numBuffers;
  p_m_writePtr = &this->m_commands[0].m_writePtr;
  v4 = 3i64;
  do
  {
    *((_DWORD *)p_m_writePtr - 1) = 0;
    ++m_numCommitWatFrames;
    *p_m_writePtr = 0;
    p_m_numBuffers += 44;
    *((_DWORD *)p_m_writePtr + 1) = 0;
    *((_DWORD *)p_m_writePtr + 2) = 0;
    p_m_writePtr += 196612;
    *(p_m_numBuffers - 17) = 0;
    *(p_m_numBuffers - 44) = 0;
    *(m_numCommitWatFrames - 1) = 0;
    --v4;
  }
  while ( v4 );
  *(_QWORD *)&this->m_copyBudget = 0i64;
  this->m_maxCommitWaitFrames = 20;
  this->m_currQueue = 0;
}

/*
==============
RB_BackendDataCopier::InsertCPUFence
==============
*/
void RB_BackendDataCopier::InsertCPUFence(RB_BackendDataCopier *this, unsigned int queueIndex, unsigned int *address, unsigned int dataToWrite)
{
  RB_BackendDataCopier::Cmd item; 

  item.cmdType = CMD_CPU_FENCE;
  item.memcpyCmd.src = (const GfxWrappedBuffer *)address;
  item.memcpyCmd.srcDataOffset = dataToWrite;
  MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Push(&this->m_commands[queueIndex], &item);
}

/*
==============
RB_BackendDataCopier::ProcessNextCommand
==============
*/
char RB_BackendDataCopier::ProcessNextCommand(RB_BackendDataCopier *this, ComputeCmdBufState *computeState, unsigned int queueIndex)
{
  int v3; 
  __int64 v4; 
  ComputeCmdBufState *v5; 
  __int64 v7; 
  char *v8; 
  char result; 
  int v10; 
  __int64 v11; 
  char v12; 
  const GfxTexture *Resident; 
  const GfxTexture *v14; 
  const GfxTexture *v15; 
  const GfxTexture *v16; 
  const GfxTexture *v17; 
  unsigned int v18; 
  unsigned int m_maxCommitWaitFrames; 
  StreamerMemLoan *v20; 
  _DWORD *v21; 
  bool v22; 
  signed __int32 v23[8]; 
  GfxWrappedBuffer *dst[4]; 
  unsigned int dstOffset[4]; 
  ComputeCmdBufState *state; 
  __int64 v27; 
  StreamerMemLoan other; 

  v27 = -2i64;
  v4 = queueIndex;
  v5 = computeState;
  state = computeState;
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 372, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  v7 = v4;
  v8 = (char *)this + 786448 * v4;
  if ( *((_DWORD *)v8 + 196613) == *((_DWORD *)v8 + 196614) )
    return 1;
  R_LockIfGfxImmediateContext(v5->device);
  MPSCQueue<RB_BackendDataCopier::Cmd,16384>::CheckConsumerThread((MPSCQueue<RB_BackendDataCopier::Cmd,16384> *)(v8 + 16));
  v10 = *((_DWORD *)v8 + 196614);
  _InterlockedOr(v23, 0);
  v11 = v10 & 0x3FFF;
  *(__m256i *)dst = *(__m256i *)&v8[48 * v11 + 16];
  *(_OWORD *)dstOffset = *(_OWORD *)&v8[48 * v11 + 48];
  v12 = 1;
  switch ( v3 )
  {
    case 0:
      R_CopyBufferData(v5, dst[3], dstOffset[0], dst[1], (unsigned int)dst[2], dstOffset[1]);
      goto LABEL_26;
    case 1:
      R_CopyBufferDataInPlace(v5, (const GfxWrappedRWBuffer *)dst[3], dstOffset[0], (unsigned int)dst[2], dstOffset[1]);
      goto LABEL_26;
    case 2:
      Resident = R_Texture_GetResident((GfxTextureId)dst[1]);
      v14 = R_Texture_GetResident(SHIDWORD(dst[2]));
      R_CopyTextureRect(v5, v14, Resident, LOWORD(dst[3]), WORD1(dst[3]), WORD2(dst[3]), HIWORD(dst[3]), WORD2(dst[1]), HIWORD(dst[1]), LOWORD(dst[2]), WORD1(dst[2]), LOWORD(dstOffset[0]), HIWORD(dstOffset[0]));
      v12 = 1;
      goto LABEL_26;
    case 3:
      v15 = R_Texture_GetResident((GfxTextureId)dst[1]);
      v16 = R_Texture_GetResident(SHIDWORD(dst[2]));
      v17 = v15;
      v5 = state;
      R_CopyTextureBox(state, v16, v17, LOWORD(dst[3]), WORD1(dst[3]), WORD2(dst[3]), HIWORD(dst[3]), WORD2(dst[1]), HIWORD(dst[1]), LOWORD(dst[2]), WORD1(dst[2]), LOWORD(dstOffset[0]), HIWORD(dstOffset[0]), LOWORD(dstOffset[1]));
      v12 = 1;
      goto LABEL_26;
    case 4:
      R_ComputeWaitForCompute(v5, PIPE_FLUSH_PARTIAL);
      goto LABEL_26;
    case 5:
      LODWORD(dst[1]->buffer) = dst[2];
      goto LABEL_26;
    case 6:
      v18 = this->m_numCommitWatFrames[v7];
      m_maxCommitWaitFrames = this->m_maxCommitWaitFrames;
      v20 = *(StreamerMemLoan **)&dstOffset[2];
      if ( StreamerMemLoan::Ready(*(StreamerMemLoan **)&dstOffset[2]) )
      {
        if ( v18 < m_maxCommitWaitFrames )
          goto LABEL_18;
      }
      else if ( v18 < m_maxCommitWaitFrames )
      {
        ++this->m_numCommitWatFrames[v7];
        v12 = 0;
        goto LABEL_30;
      }
      R_WarnOncePerFrame(R_WARN_FORCE_COMMIT_IN_DATA_COPIER, this->m_maxCommitWaitFrames);
LABEL_18:
      R_UnlockIfGfxImmediateContext(v5->device);
      Sys_ProfBeginNamedEvent(0xFF008008, "Mem_Paged_CommitMemory");
      v21 = *(_DWORD **)dstOffset;
      v22 = Mem_Paged_CommitMemoryPartial((unsigned __int8 *)dst[1], (unsigned __int8 *)dst[2], (unsigned __int8 *)dst[1], v20, *(Mem_PageRange **)dstOffset, (const char *)dst[3]);
      Sys_ProfEndNamedEvent();
      R_LockIfGfxImmediateContext(v5->device);
      *(&other.mCookie + 1) = 0;
      other.mUpdateID = 0i64;
      other.mPages = 0i64;
      other.mCookie = -1061110033;
      StreamerMemLoan::operator=(v20, &other);
      StreamerMemLoan::~StreamerMemLoan(&other);
      if ( (!v22 || *v21 == -1 || v21[1] == -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 443, ASSERT_TYPE_ASSERT, "(commited && ( cmd.memCommitCmd.outPageRange->firstPageID != MEM_PAGE_RANGE_INVALID.firstPageID ) && ( cmd.memCommitCmd.outPageRange->lastPageID != MEM_PAGE_RANGE_INVALID.lastPageID ))", (const char *)&queryFormat, "commited && ( cmd.memCommitCmd.outPageRange->firstPageID != MEM_PAGE_RANGE_INVALID.firstPageID ) && ( cmd.memCommitCmd.outPageRange->lastPageID != MEM_PAGE_RANGE_INVALID.lastPageID )") )
      {
        __debugbreak();
        this->m_numCommitWatFrames[v7] = 0;
        v12 = 1;
      }
      else
      {
        this->m_numCommitWatFrames[v7] = 0;
        v12 = 1;
      }
LABEL_26:
      MPSCQueue<RB_BackendDataCopier::Cmd,16384>::CheckConsumerThread((MPSCQueue<RB_BackendDataCopier::Cmd,16384> *)(v8 + 16));
      if ( *((_DWORD *)v8 + 196613) == *((_DWORD *)v8 + 196614) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 102, ASSERT_TYPE_ASSERT, "(!Empty())", (const char *)&queryFormat, "!Empty()") )
        __debugbreak();
      ++*((_DWORD *)v8 + 196614);
LABEL_30:
      R_UnlockIfGfxImmediateContext(v5->device);
      result = v12;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 465, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      goto LABEL_26;
  }
  return result;
}

/*
==============
RB_BackendDataCopier::RemoveInPlaceCopyBuffer
==============
*/
char RB_BackendDataCopier::RemoveInPlaceCopyBuffer(RB_BackendDataCopier *this, unsigned int queueIndex, const GfxWrappedRWBuffer *buffer)
{
  __int64 v3; 
  __int64 m_numInplaceBuffers; 
  RB_BackendDataCopier::CopyDestResources *v5; 
  int v6; 
  __int64 v7; 
  const GfxWrappedRWBuffer **i; 

  v3 = queueIndex;
  m_numInplaceBuffers = this->m_copyDestResources[v3].m_numInplaceBuffers;
  v5 = &this->m_copyDestResources[v3];
  v6 = 0;
  if ( (int)m_numInplaceBuffers <= 0 )
    return 0;
  v7 = 0i64;
  for ( i = v5->m_inplaceBuffers; *i != buffer; ++i )
  {
    ++v6;
    if ( ++v7 >= m_numInplaceBuffers )
      return 0;
  }
  if ( v6 < (int)m_numInplaceBuffers - 1 )
    v5->m_inplaceBuffers[v6] = (const GfxWrappedRWBuffer *)v5->m_buffers[m_numInplaceBuffers + 8];
  --v5->m_numInplaceBuffers;
  return 1;
}

/*
==============
RB_BackendDataCopier::RemoveRenderableCopyDest
==============
*/
char RB_BackendDataCopier::RemoveRenderableCopyDest(RB_BackendDataCopier *this, unsigned int queueIndex, const GfxWrappedBuffer *buffer)
{
  RB_BackendDataCopier::CopyDestResources *v3; 
  int v4; 
  __int64 m_numBuffers; 
  __int64 v6; 

  v3 = &this->m_copyDestResources[queueIndex];
  v4 = 0;
  m_numBuffers = v3->m_numBuffers;
  if ( (int)m_numBuffers <= 0 )
    return 0;
  v6 = 0i64;
  while ( v3->m_buffers[v6] != buffer )
  {
    ++v4;
    if ( ++v6 >= m_numBuffers )
      return 0;
  }
  if ( v4 < (int)m_numBuffers - 1 )
    v3->m_buffers[v4] = v3->m_buffers[m_numBuffers - 1];
  --v3->m_numBuffers;
  return 1;
}

/*
==============
RB_BackendDataCopier::RemoveRenderableCopyDest
==============
*/
char RB_BackendDataCopier::RemoveRenderableCopyDest(RB_BackendDataCopier *this, unsigned int queueIndex, GfxTextureId texture)
{
  __int64 v3; 
  __int64 m_numTextures; 
  RB_BackendDataCopier::CopyDestResources *v5; 
  int v6; 
  __int64 v7; 
  GfxTextureId *i; 

  v3 = queueIndex;
  m_numTextures = this->m_copyDestResources[v3].m_numTextures;
  v5 = &this->m_copyDestResources[v3];
  v6 = 0;
  if ( (int)m_numTextures <= 0 )
    return 0;
  v7 = 0i64;
  for ( i = v5->m_textures; *i != texture; ++i )
  {
    ++v6;
    if ( ++v7 >= m_numTextures )
      return 0;
  }
  if ( v6 < (int)m_numTextures - 1 )
    v5->m_textures[v6] = *((_DWORD *)&v5->m_inplaceBuffers[8] + m_numTextures);
  --v5->m_numTextures;
  return 1;
}

/*
==============
RB_BackendDataCopier::Shutdown
==============
*/
void RB_BackendDataCopier::Shutdown(RB_BackendDataCopier *this)
{
  ;
}

/*
==============
RB_BackendDataCopier::ToggleFrame
==============
*/
void RB_BackendDataCopier::ToggleFrame(RB_BackendDataCopier *this)
{
  this->m_copyBudget = (int)(float)(r_gpuCopyPerFrameBudgetMB->current.value * 1048576.0);
  this->m_commandsBudget = r_gpuCopyPerFrameCommandsBudget->current.unsignedInt;
}

/*
==============
RB_BackendDataCopier::TransitionCopyDestResourcesPost
==============
*/
void RB_BackendDataCopier::TransitionCopyDestResourcesPost(RB_BackendDataCopier *this, ComputeCmdBufState *computeState, RB_BackendDataCopier::CopyDestResources *resources)
{
  __int64 m_numBuffers; 
  __int64 m_numInplaceBuffers; 
  __int64 m_numTextures; 
  __int64 i; 
  __int64 v9; 
  const GfxWrappedBuffer **m_inplaceBuffers; 
  __int64 v11; 
  GfxTextureId *m_textures; 
  const GfxTexture *Resident; 

  m_numBuffers = resources->m_numBuffers;
  m_numInplaceBuffers = resources->m_numInplaceBuffers;
  m_numTextures = resources->m_numTextures;
  if ( m_numBuffers > 0 )
  {
    for ( i = 0i64; i < m_numBuffers; ++i )
      R_HW_AddResourceTransition(computeState, resources->m_buffers[i], 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  v9 = m_numInplaceBuffers;
  if ( m_numInplaceBuffers > 0 )
  {
    m_inplaceBuffers = resources->m_inplaceBuffers;
    do
    {
      R_HW_AddResourceTransition(computeState, *m_inplaceBuffers++, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      --v9;
    }
    while ( v9 );
  }
  v11 = m_numTextures;
  if ( m_numTextures > 0 )
  {
    m_textures = resources->m_textures;
    do
    {
      Resident = R_Texture_GetResident(*m_textures);
      R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      ++m_textures;
      --v11;
    }
    while ( v11 );
  }
  R_FlushResourceTransitions(computeState);
}

/*
==============
RB_BackendDataCopier::TransitionCopyDestResourcesPre
==============
*/
void RB_BackendDataCopier::TransitionCopyDestResourcesPre(RB_BackendDataCopier *this, ComputeCmdBufState *computeState, RB_BackendDataCopier::CopyDestResources *resources)
{
  __int64 m_numBuffers; 
  __int64 m_numInplaceBuffers; 
  __int64 m_numTextures; 
  __int64 i; 
  __int64 v9; 
  const GfxWrappedBuffer **m_inplaceBuffers; 
  __int64 v11; 
  GfxTextureId *m_textures; 
  const GfxTexture *Resident; 

  m_numBuffers = resources->m_numBuffers;
  m_numInplaceBuffers = resources->m_numInplaceBuffers;
  m_numTextures = resources->m_numTextures;
  if ( m_numBuffers > 0 )
  {
    for ( i = 0i64; i < m_numBuffers; ++i )
      R_HW_AddResourceTransition(computeState, resources->m_buffers[i], 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  v9 = m_numInplaceBuffers;
  if ( m_numInplaceBuffers > 0 )
  {
    m_inplaceBuffers = resources->m_inplaceBuffers;
    do
    {
      R_HW_AddResourceTransition(computeState, *m_inplaceBuffers++, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      --v9;
    }
    while ( v9 );
  }
  v11 = m_numTextures;
  if ( m_numTextures > 0 )
  {
    m_textures = resources->m_textures;
    do
    {
      Resident = R_Texture_GetResident(*m_textures);
      R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      ++m_textures;
      --v11;
    }
    while ( v11 );
  }
  R_FlushResourceTransitions(computeState);
}

/*
==============
RB_BackendDataCopier::Update
==============
*/
void RB_BackendDataCopier::Update(RB_BackendDataCopier *this, ComputeCmdBufState *computeState)
{
  unsigned int i; 
  bool updated; 

  R_ProfBeginNamedEvent(computeState, "RB_BackendDataCopier::Update");
  for ( i = 0; i < 3; ++i )
  {
    updated = RB_BackendDataCopier::UpdateSingleQueue(this, computeState, this->m_currQueue, 1);
    if ( ++this->m_currQueue == 3 )
      this->m_currQueue = 0;
    if ( updated )
      break;
  }
  R_ProfEndNamedEvent(computeState);
}

/*
==============
RB_BackendDataCopier::UpdateSingleQueue
==============
*/
__int64 RB_BackendDataCopier::UpdateSingleQueue(RB_BackendDataCopier *this, ComputeCmdBufState *computeState, unsigned int queueIndex, bool forceAtLeastOne)
{
  __int64 v6; 
  __int64 m_numInplaceBuffers; 
  RB_BackendDataCopier::CopyDestResources *v8; 
  __int64 m_numBuffers; 
  __int64 m_numTextures; 
  __int64 v11; 
  __int64 i; 
  __int64 v13; 
  const GfxWrappedBuffer **m_inplaceBuffers; 
  __int64 v15; 
  GfxTextureId *m_textures; 
  const GfxTexture *Resident; 
  char *v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  const GfxTexture *v25; 
  const GfxTexture *v26; 
  GfxTextureId v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  const GfxTexture *v31; 
  const GfxTexture *v32; 
  unsigned __int8 v33; 
  unsigned int m_copyBudget; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 j; 
  __int64 v39; 
  const GfxWrappedBuffer **v40; 
  __int64 v41; 
  GfxTextureId *v42; 
  const GfxTexture *v43; 
  signed __int32 v45[8]; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int writeCost; 
  unsigned int readCost; 
  char *v50; 
  int v51; 

  v6 = queueIndex;
  m_numInplaceBuffers = this->m_copyDestResources[v6].m_numInplaceBuffers;
  v8 = &this->m_copyDestResources[v6];
  m_numBuffers = this->m_copyDestResources[v6].m_numBuffers;
  m_numTextures = this->m_copyDestResources[v6].m_numTextures;
  v51 = 0;
  v11 = queueIndex;
  if ( m_numBuffers > 0 )
  {
    for ( i = 0i64; i < m_numBuffers; ++i )
      R_HW_AddResourceTransition(computeState, v8->m_buffers[i], 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  v13 = m_numInplaceBuffers;
  if ( (int)m_numInplaceBuffers > 0 )
  {
    m_inplaceBuffers = v8->m_inplaceBuffers;
    do
    {
      R_HW_AddResourceTransition(computeState, *m_inplaceBuffers++, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      --v13;
    }
    while ( v13 );
  }
  v15 = m_numTextures;
  if ( (int)m_numTextures > 0 )
  {
    m_textures = v8->m_textures;
    do
    {
      Resident = R_Texture_GetResident(*m_textures);
      R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      ++m_textures;
      --v15;
    }
    while ( v15 );
  }
  R_FlushResourceTransitions(computeState);
  v18 = (char *)this + 786448 * v11;
  v50 = v18;
  if ( *((_DWORD *)v18 + 196613) != *((_DWORD *)v18 + 196614) )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 135, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
        __debugbreak();
      MPSCQueue<RB_BackendDataCopier::Cmd,16384>::CheckConsumerThread((MPSCQueue<RB_BackendDataCopier::Cmd,16384> *)(v18 + 16));
      v20 = *((_DWORD *)v18 + 196614);
      _InterlockedOr(v45, 0);
      v21 = (__int64)&v18[48 * (v20 & 0x3FFF) + 16];
      switch ( *(_DWORD *)v21 )
      {
        case 0:
        case 1:
          v22 = 2 * *(_DWORD *)(v21 + 36);
          goto LABEL_20;
        case 2:
          v23 = *(unsigned __int16 *)(v21 + 34);
          v24 = *(unsigned __int16 *)(v21 + 32);
          v25 = R_Texture_GetResident((GfxTextureId)*(_DWORD *)(v21 + 8));
          v26 = R_Texture_GetResident((GfxTextureId)*(_DWORD *)(v21 + 20));
          R_GetCopyTextureRectCost(v26, v25, v24, v23, &readCost, &writeCost);
          v22 = writeCost + readCost;
          goto LABEL_19;
        case 3:
          v27 = *(_DWORD *)(v21 + 8);
          v28 = *(unsigned __int16 *)(v21 + 36);
          v29 = *(unsigned __int16 *)(v21 + 34);
          v30 = *(unsigned __int16 *)(v21 + 32);
          v46 = 0;
          v47 = 0;
          v31 = R_Texture_GetResident(v27);
          v32 = R_Texture_GetResident((GfxTextureId)*(_DWORD *)(v21 + 20));
          R_GetCopyTextureBoxCost(v32, v31, v30, v29, v28, &v46, &v47);
          v22 = v46 + v47;
LABEL_19:
          v18 = v50;
LABEL_20:
          if ( !v22 || v22 <= this->m_copyBudget && this->m_commandsBudget )
          {
            v19 = v51;
          }
          else if ( !forceAtLeastOne || (v19 = v51) != 0 )
          {
            v33 = 1;
            goto LABEL_40;
          }
LABEL_31:
          if ( v22 > this->m_copyBudget )
            R_WarnOncePerFrame(R_WARN_GPU_COPIER_BUDGET_TOO_SMALL, queueIndex);
          v51 = ++v19;
          if ( !RB_BackendDataCopier::ProcessNextCommand(this, computeState, queueIndex) )
            goto LABEL_39;
          m_copyBudget = this->m_copyBudget;
          if ( this->m_copyBudget > v22 )
            m_copyBudget = v22;
          this->m_copyBudget -= m_copyBudget;
          if ( v22 )
            --this->m_commandsBudget;
          if ( *((_DWORD *)v18 + 196613) == *((_DWORD *)v18 + 196614) )
            goto LABEL_39;
          break;
        case 4:
        case 5:
        case 6:
          v22 = 0;
          goto LABEL_31;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_data_copier.cpp", 168, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
            __debugbreak();
          v22 = 0;
          goto LABEL_31;
      }
    }
  }
LABEL_39:
  v33 = 0;
LABEL_40:
  v35 = v8->m_numBuffers;
  v36 = v8->m_numInplaceBuffers;
  v37 = v8->m_numTextures;
  if ( v35 > 0 )
  {
    for ( j = 0i64; j < v35; ++j )
      R_HW_AddResourceTransition(computeState, v8->m_buffers[j], 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  v39 = v36;
  if ( v36 > 0 )
  {
    v40 = v8->m_inplaceBuffers;
    do
    {
      R_HW_AddResourceTransition(computeState, *v40++, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      --v39;
    }
    while ( v39 );
  }
  v41 = v37;
  if ( v37 > 0 )
  {
    v42 = v8->m_textures;
    do
    {
      v43 = R_Texture_GetResident(*v42);
      R_HW_AddResourceTransition(computeState, v43, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      ++v42;
      --v41;
    }
    while ( v41 );
  }
  R_FlushResourceTransitions(computeState);
  return v33;
}

/*
==============
RB_BackendDataCopier::WaitForCopiesGPU
==============
*/
void RB_BackendDataCopier::WaitForCopiesGPU(RB_BackendDataCopier *this, unsigned int queueIndex)
{
  RB_BackendDataCopier::Cmd item; 

  item.cmdType = CMD_GPU_WAIT_FOR_COPIES;
  MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Push(&this->m_commands[queueIndex], &item);
}

