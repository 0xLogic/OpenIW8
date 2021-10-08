/*
==============
GfxLightGridVolumeAtlas::FreeOldTexture
==============
*/

void __fastcall GfxLightGridVolumeAtlas::FreeOldTexture(GfxLightGridVolumeAtlas *this)
{
  ?FreeOldTexture@GfxLightGridVolumeAtlas@@AEAAXXZ(this);
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::MarkUsed
==============
*/

void __fastcall GfxLightGridVolumeAtlas::ParamsAllocator::MarkUsed(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int first, unsigned int last)
{
  ?MarkUsed@ParamsAllocator@GfxLightGridVolumeAtlas@@QEAAXII@Z(this, first, last);
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::FindRange
==============
*/

unsigned int __fastcall GfxLightGridVolumeAtlas::ParamsAllocator::FindRange(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int pos)
{
  return ?FindRange@ParamsAllocator@GfxLightGridVolumeAtlas@@AEBAII@Z(this, pos);
}

/*
==============
GfxLightGridVolumeAtlas::UpdateCopying
==============
*/

void __fastcall GfxLightGridVolumeAtlas::UpdateCopying(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *state)
{
  ?UpdateCopying@GfxLightGridVolumeAtlas@@AEAAXPEAUComputeCmdBufState@@@Z(this, state);
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::CommitAlloc
==============
*/

void __fastcall GfxLightGridVolumeAtlas::TextureAllocator::CommitAlloc(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int widthHeight, unsigned int depth, unsigned int X, unsigned int Y, unsigned int Z)
{
  ?CommitAlloc@TextureAllocator@GfxLightGridVolumeAtlas@@QEAAXIIIII@Z(this, widthHeight, depth, X, Y, Z);
}

/*
==============
R_IsLightGridVolumesAtlasEmpty
==============
*/

bool __fastcall R_IsLightGridVolumesAtlasEmpty(const GfxBackEndData *data)
{
  return ?R_IsLightGridVolumesAtlasEmpty@@YA_NPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_GetLightGridCommitTotal
==============
*/

unsigned __int64 __fastcall R_GetLightGridCommitTotal()
{
  return ?R_GetLightGridCommitTotal@@YA_KXZ();
}

/*
==============
R_GetLightGridVolumesAtlasTransientPackingBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_GetLightGridVolumesAtlasTransientPackingBuffer(const GfxBackEndData *data)
{
  return ?R_GetLightGridVolumesAtlasTransientPackingBuffer@@YAPEBUGfxWrappedBuffer@@PEBUGfxBackEndData@@@Z(data);
}

/*
==============
GfxLightGridVolumeAtlas::TryPackLGVBlock
==============
*/

bool __fastcall GfxLightGridVolumeAtlas::TryPackLGVBlock(GfxLightGridVolumeAtlas *this, GfxLightGridVolumeAtlas::AtlasState *state, unsigned int blockIndex, unsigned int *outX, unsigned int *outY, unsigned int *outDepth, unsigned int *outOffset)
{
  return ?TryPackLGVBlock@GfxLightGridVolumeAtlas@@AEBA_NAEAUAtlasState@1@IAEAI111@Z(this, state, blockIndex, outX, outY, outDepth, outOffset);
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::Init
==============
*/

void __fastcall GfxLightGridVolumeAtlas::ParamsAllocator::Init(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int size)
{
  ?Init@ParamsAllocator@GfxLightGridVolumeAtlas@@QEAAXI@Z(this, size);
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::AllUsed
==============
*/

bool __fastcall GfxLightGridVolumeAtlas::TextureAllocator::AllUsed(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int first, unsigned int last)
{
  return ?AllUsed@TextureAllocator@GfxLightGridVolumeAtlas@@QEBA_NII@Z(this, first, last);
}

/*
==============
GfxLightGridVolumeAtlas::PrepareForCopyToActiveAtlas
==============
*/

void __fastcall GfxLightGridVolumeAtlas::PrepareForCopyToActiveAtlas(GfxLightGridVolumeAtlas *this, GfxLightGridVolumeAtlas::AtlasState *targetState)
{
  ?PrepareForCopyToActiveAtlas@GfxLightGridVolumeAtlas@@AEAAXAEAUAtlasState@1@@Z(this, targetState);
}

/*
==============
GfxLightGridVolumeAtlas::ScheduleCopies
==============
*/

void __fastcall GfxLightGridVolumeAtlas::ScheduleCopies(GfxLightGridVolumeAtlas *this, const GfxLightGridVolumeAtlas::LGVBlock *lgvBlocks, const bitarray<1536> *lgvBlocksUsed, const GfxLightGridVolumeAtlas::AtlasState *oldState, GfxLightGridVolumeAtlas::AtlasState *newState)
{
  ?ScheduleCopies@GfxLightGridVolumeAtlas@@AEBAXPEBULGVBlock@1@AEBV?$bitarray@$0GAA@@@AEBUAtlasState@1@AEAU41@@Z(this, lgvBlocks, lgvBlocksUsed, oldState, newState);
}

/*
==============
GfxLightGridVolumeAtlas::UpdatePackingBuffer
==============
*/

void __fastcall GfxLightGridVolumeAtlas::UpdatePackingBuffer(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *state)
{
  ?UpdatePackingBuffer@GfxLightGridVolumeAtlas@@AEAAXPEAUComputeCmdBufState@@@Z(this, state);
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::CommitInPartialAllocSlice
==============
*/

void __fastcall GfxLightGridVolumeAtlas::TextureAllocator::CommitInPartialAllocSlice(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int partialSliceIndex, unsigned int size, unsigned int X, unsigned int Y)
{
  ?CommitInPartialAllocSlice@TextureAllocator@GfxLightGridVolumeAtlas@@QEAAXIIII@Z(this, partialSliceIndex, size, X, Y);
}

/*
==============
R_GetLightGridVolumesAtlasTransformParamsBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_GetLightGridVolumesAtlasTransformParamsBuffer(const GfxBackEndData *data)
{
  return ?R_GetLightGridVolumesAtlasTransformParamsBuffer@@YAPEBUGfxWrappedBuffer@@PEBUGfxBackEndData@@@Z(data);
}

/*
==============
GfxLightGridVolumeAtlas::PrepareRenderResources
==============
*/

void __fastcall GfxLightGridVolumeAtlas::PrepareRenderResources(GfxLightGridVolumeAtlas *this, const GfxBackEndData *data)
{
  ?PrepareRenderResources@GfxLightGridVolumeAtlas@@AEAAXPEBUGfxBackEndData@@@Z(this, data);
}

/*
==============
R_UpdateLightGridVolumesAtlas
==============
*/

void __fastcall R_UpdateLightGridVolumesAtlas(const GfxBackEndData *data, ComputeCmdBufState *state)
{
  ?R_UpdateLightGridVolumesAtlas@@YAXPEBUGfxBackEndData@@PEAUComputeCmdBufState@@@Z(data, state);
}

/*
==============
R_GetLightGridVolumesAtlasTextureDepth
==============
*/

unsigned int __fastcall R_GetLightGridVolumesAtlasTextureDepth(const GfxBackEndData *data)
{
  return ?R_GetLightGridVolumesAtlasTextureDepth@@YAIPEBUGfxBackEndData@@@Z(data);
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::CombineFreeRanges
==============
*/

void __fastcall GfxLightGridVolumeAtlas::ParamsAllocator::CombineFreeRanges(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int startIndex)
{
  ?CombineFreeRanges@ParamsAllocator@GfxLightGridVolumeAtlas@@AEAAXI@Z(this, startIndex);
}

/*
==============
GfxLightGridVolumeAtlas::ScheduleStackedTextureCopy
==============
*/

void __fastcall GfxLightGridVolumeAtlas::ScheduleStackedTextureCopy(GfxTextureId srcTexture, unsigned int srcX, unsigned int srcY, unsigned int srcZ, unsigned int width, unsigned int height, unsigned int depth, GfxTextureId destTexture, unsigned int dstX, unsigned int dstY, unsigned int dstZ, unsigned int srcTextureBaseWidth, unsigned int srcTextureBaseHeight, unsigned int srcTextureBaseDepth, unsigned int dstTextureBaseWidth, unsigned int dstTextureBaseHeight, unsigned int destTextureBaseDepth, unsigned int numSplitsX, unsigned int numSplitsY, unsigned int numSplitsZ)
{
  ?ScheduleStackedTextureCopy@GfxLightGridVolumeAtlas@@CAXW4GfxTextureId@@IIIIII0IIIIIIIIIIII@Z(srcTexture, srcX, srcY, srcZ, width, height, depth, destTexture, dstX, dstY, dstZ, srcTextureBaseWidth, srcTextureBaseHeight, srcTextureBaseDepth, dstTextureBaseWidth, dstTextureBaseHeight, destTextureBaseDepth, numSplitsX, numSplitsY, numSplitsZ);
}

/*
==============
GfxLightGridVolumeAtlas::Shutdown
==============
*/

void __fastcall GfxLightGridVolumeAtlas::Shutdown(GfxLightGridVolumeAtlas *this)
{
  ?Shutdown@GfxLightGridVolumeAtlas@@QEAAXXZ(this);
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::Preallocate
==============
*/

bool __fastcall GfxLightGridVolumeAtlas::ParamsAllocator::Preallocate(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int allocSize, unsigned int *outOffset)
{
  return ?Preallocate@ParamsAllocator@GfxLightGridVolumeAtlas@@QEBA_NIAEAI@Z(this, allocSize, outOffset);
}

/*
==============
RB_IsLightGridVolumesAtlasIdle
==============
*/

bool __fastcall RB_IsLightGridVolumesAtlasIdle()
{
  return ?RB_IsLightGridVolumesAtlasIdle@@YA_NXZ();
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::FromMorton
==============
*/

void __fastcall GfxLightGridVolumeAtlas::TextureAllocator::FromMorton(unsigned int index, unsigned int *outX, unsigned int *outY)
{
  ?FromMorton@TextureAllocator@GfxLightGridVolumeAtlas@@SAXIAEAI0@Z(index, outX, outY);
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::InsertRange
==============
*/

void __fastcall GfxLightGridVolumeAtlas::ParamsAllocator::InsertRange(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int where)
{
  ?InsertRange@ParamsAllocator@GfxLightGridVolumeAtlas@@AEAAXI@Z(this, where);
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::AreFree
==============
*/

bool __fastcall GfxLightGridVolumeAtlas::TextureAllocator::AreFree(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int first, unsigned int last)
{
  return ?AreFree@TextureAllocator@GfxLightGridVolumeAtlas@@QEBA_NII@Z(this, first, last);
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::Preallocate
==============
*/

bool __fastcall GfxLightGridVolumeAtlas::TextureAllocator::Preallocate(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int allocWidthHeight, unsigned int allocDepth, unsigned int *outX, unsigned int *outY, unsigned int *outDepth)
{
  return ?Preallocate@TextureAllocator@GfxLightGridVolumeAtlas@@QEAA_NIIAEAI00@Z(this, allocWidthHeight, allocDepth, outX, outY, outDepth);
}

/*
==============
R_ToggleLightGridVolumesAtlasFrame
==============
*/

unsigned int __fastcall R_ToggleLightGridVolumesAtlasFrame()
{
  return ?R_ToggleLightGridVolumesAtlasFrame@@YAIXZ();
}

/*
==============
GfxLightGridVolumeAtlas::PostCopy
==============
*/

void __fastcall GfxLightGridVolumeAtlas::PostCopy(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *computeState, GfxLightGridVolumeAtlas::AtlasState *targetState)
{
  ?PostCopy@GfxLightGridVolumeAtlas@@AEAAXPEAUComputeCmdBufState@@PEAUAtlasState@1@@Z(this, computeState, targetState);
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::PreallocateDepthUnits
==============
*/

bool __fastcall GfxLightGridVolumeAtlas::TextureAllocator::PreallocateDepthUnits(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int numDepthUnits, unsigned int *outDepth)
{
  return ?PreallocateDepthUnits@TextureAllocator@GfxLightGridVolumeAtlas@@QEBA_NIAEAI@Z(this, numDepthUnits, outDepth);
}

/*
==============
GfxLightGridVolumeAtlas::AddLGVBlock
==============
*/

bool __fastcall GfxLightGridVolumeAtlas::AddLGVBlock(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *computeState, GfxLightGridVolumeAtlasDataTemp *newBlock, XZoneHandleUnique transientZone, unsigned int *copyDoneFence)
{
  return ?AddLGVBlock@GfxLightGridVolumeAtlas@@QEAA_NPEAUComputeCmdBufState@@PEAUGfxLightGridVolumeAtlasDataTemp@@UXZoneHandleUnique@@AEAI@Z(this, computeState, newBlock, transientZone, copyDoneFence);
}

/*
==============
GfxLightGridVolumeAtlas::UpdateIdle
==============
*/

void __fastcall GfxLightGridVolumeAtlas::UpdateIdle(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *state)
{
  ?UpdateIdle@GfxLightGridVolumeAtlas@@AEAAXPEAUComputeCmdBufState@@@Z(this, state);
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::ToMorton
==============
*/

unsigned int __fastcall GfxLightGridVolumeAtlas::TextureAllocator::ToMorton(unsigned int x, unsigned int y)
{
  return ?ToMorton@TextureAllocator@GfxLightGridVolumeAtlas@@SAIII@Z(x, y);
}

/*
==============
R_GetLightGridVolumesAtlasPackingParamsBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_GetLightGridVolumesAtlasPackingParamsBuffer(const GfxBackEndData *data)
{
  return ?R_GetLightGridVolumesAtlasPackingParamsBuffer@@YAPEBUGfxWrappedBuffer@@PEBUGfxBackEndData@@@Z(data);
}

/*
==============
GfxLightGridVolumeAtlas::ShouldDefragment
==============
*/

bool __fastcall GfxLightGridVolumeAtlas::ShouldDefragment(GfxLightGridVolumeAtlas *this)
{
  return ?ShouldDefragment@GfxLightGridVolumeAtlas@@AEBA_NXZ(this);
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::Init
==============
*/

void __fastcall GfxLightGridVolumeAtlas::TextureAllocator::Init(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int depth)
{
  ?Init@TextureAllocator@GfxLightGridVolumeAtlas@@QEAAXI@Z(this, depth);
}

/*
==============
GfxLightGridVolumeAtlas::FlipActiveState
==============
*/

void __fastcall GfxLightGridVolumeAtlas::FlipActiveState(GfxLightGridVolumeAtlas *this)
{
  ?FlipActiveState@GfxLightGridVolumeAtlas@@AEAAXXZ(this);
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::GetUtilization
==============
*/

double __fastcall GfxLightGridVolumeAtlas::TextureAllocator::GetUtilization(GfxLightGridVolumeAtlas::TextureAllocator *this)
{
  double result; 

  *(float *)&result = ?GetUtilization@TextureAllocator@GfxLightGridVolumeAtlas@@QEBAMXZ(this);
  return result;
}

/*
==============
GfxLightGridVolumeAtlas::ApplyLGVBlockPacking
==============
*/

void __fastcall GfxLightGridVolumeAtlas::ApplyLGVBlockPacking(GfxLightGridVolumeAtlas *this, GfxLightGridVolumeAtlas::AtlasState *state, unsigned int blockIndex, unsigned int packedX, unsigned int packedY, unsigned int packDepth, unsigned int packOffset)
{
  ?ApplyLGVBlockPacking@GfxLightGridVolumeAtlas@@AEBAXAEAUAtlasState@1@IIIII@Z(this, state, blockIndex, packedX, packedY, packDepth, packOffset);
}

/*
==============
GfxLightGridVolumeAtlas::CheckTexturePacking
==============
*/

void __fastcall GfxLightGridVolumeAtlas::CheckTexturePacking(GfxLightGridVolumeAtlas *this, const GfxLightGridVolumeAtlas::AtlasState *state)
{
  ?CheckTexturePacking@GfxLightGridVolumeAtlas@@AEBAXAEBUAtlasState@1@@Z(this, state);
}

/*
==============
GfxLightGridVolumeAtlas::ProcessRemovedBlocks
==============
*/

void __fastcall GfxLightGridVolumeAtlas::ProcessRemovedBlocks(GfxLightGridVolumeAtlas *this)
{
  ?ProcessRemovedBlocks@GfxLightGridVolumeAtlas@@AEAAXXZ(this);
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::CreatePartialAllocSlice
==============
*/

unsigned int __fastcall GfxLightGridVolumeAtlas::TextureAllocator::CreatePartialAllocSlice(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int depthSlice)
{
  return ?CreatePartialAllocSlice@TextureAllocator@GfxLightGridVolumeAtlas@@QEAAII@Z(this, depthSlice);
}

/*
==============
GfxLightGridVolumeAtlas::PrepareForCopy
==============
*/

void __fastcall GfxLightGridVolumeAtlas::PrepareForCopy(GfxLightGridVolumeAtlas *this, GfxLightGridVolumeAtlas::AtlasState *targetState)
{
  ?PrepareForCopy@GfxLightGridVolumeAtlas@@AEAAXAEAUAtlasState@1@@Z(this, targetState);
}

/*
==============
GfxLightGridVolumeAtlas::RemoveLGVBlock
==============
*/

void __fastcall GfxLightGridVolumeAtlas::RemoveLGVBlock(GfxLightGridVolumeAtlas *this, XZoneHandleUnique transientZone)
{
  ?RemoveLGVBlock@GfxLightGridVolumeAtlas@@QEAAXUXZoneHandleUnique@@@Z(this, transientZone);
}

/*
==============
R_GetLightGridVolumeAtlasTexture
==============
*/

const GfxImage *__fastcall R_GetLightGridVolumeAtlasTexture(const GfxBackEndData *data, GfxLightGridVolumeAtlasTextures textureType)
{
  return ?R_GetLightGridVolumeAtlasTexture@@YAPEBUGfxImage@@PEBUGfxBackEndData@@W4GfxLightGridVolumeAtlasTextures@@@Z(data, textureType);
}

/*
==============
RB_ProcessGfxLightGridVolumeAtlasData
==============
*/

bool __fastcall RB_ProcessGfxLightGridVolumeAtlasData(GfxLightGridVolumeAtlasDataTemp *tempData, DB_BackendCallbackContext *context)
{
  return ?RB_ProcessGfxLightGridVolumeAtlasData@@YA_NPEAUGfxLightGridVolumeAtlasDataTemp@@PEAUDB_BackendCallbackContext@@@Z(tempData, context);
}

/*
==============
GfxLightGridVolumeAtlas::Defragment
==============
*/

void __fastcall GfxLightGridVolumeAtlas::Defragment(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *state)
{
  ?Defragment@GfxLightGridVolumeAtlas@@AEAAXPEAUComputeCmdBufState@@@Z(this, state);
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::PreallocateInPartialAllocSlice
==============
*/

bool __fastcall GfxLightGridVolumeAtlas::TextureAllocator::PreallocateInPartialAllocSlice(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int partialSliceIndex, unsigned int size, unsigned int *outX, unsigned int *outY)
{
  return ?PreallocateInPartialAllocSlice@TextureAllocator@GfxLightGridVolumeAtlas@@QEBA_NIIAEAI0@Z(this, partialSliceIndex, size, outX, outY);
}

/*
==============
GfxLightGridVolumeAtlas::PrepareCopyDestAndFlush
==============
*/

void __fastcall GfxLightGridVolumeAtlas::PrepareCopyDestAndFlush(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *computeState, GfxLightGridVolumeAtlas::AtlasState *targetState, bool targetStateActive)
{
  ?PrepareCopyDestAndFlush@GfxLightGridVolumeAtlas@@AEAAXPEAUComputeCmdBufState@@PEAUAtlasState@1@_N@Z(this, computeState, targetState, targetStateActive);
}

/*
==============
GfxLightGridVolumeAtlas::PrepareCopySource
==============
*/

void __fastcall GfxLightGridVolumeAtlas::PrepareCopySource(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *computeState, GfxLightGridVolumeAtlasDataTemp *lgvBlock)
{
  ?PrepareCopySource@GfxLightGridVolumeAtlas@@AEAAXPEAUComputeCmdBufState@@PEAUGfxLightGridVolumeAtlasDataTemp@@@Z(this, computeState, lgvBlock);
}

/*
==============
GfxLightGridVolumeAtlas::Update
==============
*/

void __fastcall GfxLightGridVolumeAtlas::Update(GfxLightGridVolumeAtlas *this, const GfxBackEndData *data, ComputeCmdBufState *state)
{
  ?Update@GfxLightGridVolumeAtlas@@QEAAXPEBUGfxBackEndData@@PEAUComputeCmdBufState@@@Z(this, data, state);
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::GetTotalSize
==============
*/

unsigned int __fastcall GfxLightGridVolumeAtlas::ParamsAllocator::GetTotalSize(GfxLightGridVolumeAtlas::ParamsAllocator *this)
{
  return ?GetTotalSize@ParamsAllocator@GfxLightGridVolumeAtlas@@QEBAIXZ(this);
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::CheckConsistency
==============
*/

bool __fastcall GfxLightGridVolumeAtlas::ParamsAllocator::CheckConsistency(GfxLightGridVolumeAtlas::ParamsAllocator *this)
{
  return ?CheckConsistency@ParamsAllocator@GfxLightGridVolumeAtlas@@QEBA_NXZ(this);
}

/*
==============
R_ShutdownLightGridVolumesAtlas
==============
*/

void R_ShutdownLightGridVolumesAtlas(void)
{
  ?R_ShutdownLightGridVolumesAtlas@@YAXXZ();
}

/*
==============
GfxLightGridVolumeAtlas::UpdateWaitForTextureFree
==============
*/

void __fastcall GfxLightGridVolumeAtlas::UpdateWaitForTextureFree(GfxLightGridVolumeAtlas *this)
{
  ?UpdateWaitForTextureFree@GfxLightGridVolumeAtlas@@AEAAXXZ(this);
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::FreeInPartialAllocSlice
==============
*/

void __fastcall GfxLightGridVolumeAtlas::TextureAllocator::FreeInPartialAllocSlice(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int partialSliceIndex, unsigned int size, unsigned int X, unsigned int Y)
{
  ?FreeInPartialAllocSlice@TextureAllocator@GfxLightGridVolumeAtlas@@QEAAXIIII@Z(this, partialSliceIndex, size, X, Y);
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::ShrinkToDepth
==============
*/

void __fastcall GfxLightGridVolumeAtlas::TextureAllocator::ShrinkToDepth(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int depth)
{
  ?ShrinkToDepth@TextureAllocator@GfxLightGridVolumeAtlas@@QEAAXI@Z(this, depth);
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::Free
==============
*/

void __fastcall GfxLightGridVolumeAtlas::TextureAllocator::Free(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int widthHeight, unsigned int depth, unsigned int X, unsigned int Y, unsigned int Z)
{
  ?Free@TextureAllocator@GfxLightGridVolumeAtlas@@QEAAXIIIII@Z(this, widthHeight, depth, X, Y, Z);
}

/*
==============
GfxLightGridVolumeAtlas::Init
==============
*/

void __fastcall GfxLightGridVolumeAtlas::Init(GfxLightGridVolumeAtlas *this)
{
  ?Init@GfxLightGridVolumeAtlas@@QEAAXXZ(this);
}

/*
==============
R_RemoveZoneLightGridVolumesFromAtlas
==============
*/

void __fastcall R_RemoveZoneLightGridVolumesFromAtlas(XZoneHandleUnique transientZone)
{
  ?R_RemoveZoneLightGridVolumesFromAtlas@@YAXUXZoneHandleUnique@@@Z(transientZone);
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::FreePartialAllocSlice
==============
*/

void __fastcall GfxLightGridVolumeAtlas::TextureAllocator::FreePartialAllocSlice(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int partialSliceIndex)
{
  ?FreePartialAllocSlice@TextureAllocator@GfxLightGridVolumeAtlas@@QEAAXI@Z(this, partialSliceIndex);
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::GetUtilization
==============
*/

double __fastcall GfxLightGridVolumeAtlas::ParamsAllocator::GetUtilization(GfxLightGridVolumeAtlas::ParamsAllocator *this)
{
  double result; 

  *(float *)&result = ?GetUtilization@ParamsAllocator@GfxLightGridVolumeAtlas@@QEBAMXZ(this);
  return result;
}

/*
==============
GfxLightGridVolumeAtlas::ScheduleWaitForCopies
==============
*/

void __fastcall GfxLightGridVolumeAtlas::ScheduleWaitForCopies(GfxLightGridVolumeAtlas *this)
{
  ?ScheduleWaitForCopies@GfxLightGridVolumeAtlas@@AEAAXXZ(this);
}

/*
==============
GfxLightGridVolumeAtlas::InitAtlasState
==============
*/

void __fastcall GfxLightGridVolumeAtlas::InitAtlasState(GfxLightGridVolumeAtlas *this, GfxLightGridVolumeAtlas::AtlasState *state)
{
  ?InitAtlasState@GfxLightGridVolumeAtlas@@AEBAXAEAUAtlasState@1@@Z(this, state);
}

/*
==============
GfxLightGridVolumeAtlas::AllocLGVBlock
==============
*/

unsigned int __fastcall GfxLightGridVolumeAtlas::AllocLGVBlock(GfxLightGridVolumeAtlas *this, unsigned int widthHeight, unsigned int depth, unsigned int numVolumes, XZoneHandleUnique transientZone, unsigned __int16 worldTransient)
{
  return ?AllocLGVBlock@GfxLightGridVolumeAtlas@@AEAAIIIIUXZoneHandleUnique@@G@Z(this, widthHeight, depth, numVolumes, transientZone, worldTransient);
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::MarkFree
==============
*/

void __fastcall GfxLightGridVolumeAtlas::ParamsAllocator::MarkFree(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int first, unsigned int last)
{
  ?MarkFree@ParamsAllocator@GfxLightGridVolumeAtlas@@QEAAXII@Z(this, first, last);
}

/*
==============
GfxLightGridVolumeAtlas::Pack
==============
*/

void __fastcall GfxLightGridVolumeAtlas::Pack(GfxLightGridVolumeAtlas *this, const GfxLightGridVolumeAtlas::LGVBlock *blocksToPack, const bitarray<1536> *blocksUsed, GfxLightGridVolumeAtlas::AtlasState *targetState)
{
  ?Pack@GfxLightGridVolumeAtlas@@AEBAXPEBULGVBlock@1@AEBV?$bitarray@$0GAA@@@AEAUAtlasState@1@@Z(this, blocksToPack, blocksUsed, targetState);
}

/*
==============
R_InitLightGridVolumesAtlas
==============
*/

void R_InitLightGridVolumesAtlas(void)
{
  ?R_InitLightGridVolumesAtlas@@YAXXZ();
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::ShrinkToLength
==============
*/

void __fastcall GfxLightGridVolumeAtlas::ParamsAllocator::ShrinkToLength(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int size)
{
  ?ShrinkToLength@ParamsAllocator@GfxLightGridVolumeAtlas@@QEAAXI@Z(this, size);
}

/*
==============
GfxLightGridVolumeAtlas::AddLGVBlock
==============
*/
char GfxLightGridVolumeAtlas::AddLGVBlock(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *computeState, GfxLightGridVolumeAtlasDataTemp *newBlock, XZoneHandleUnique transientZone, unsigned int *copyDoneFence)
{
  bool v8; 
  int m_numVolumes; 
  __int64 m_activeAtlasState; 
  GfxLightGridVolumeAtlas::AtlasState *v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  bool v15; 
  unsigned int m_numRanges; 
  unsigned int v17; 
  GfxLightGridVolumeAtlas::ParamsAllocator *p_m_paramsAllocator; 
  unsigned int v19; 
  unsigned __int16 *p_height; 
  unsigned int dstX; 
  GfxTextureId *v22; 
  unsigned int dstY; 
  GfxTextureId *v24; 
  unsigned int dstZ; 
  int v26; 
  unsigned int paramsOffset; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned __int64 v31; 
  GfxTextureId *p_textureId; 
  __int64 v33; 
  unsigned __int16 worldTransientb; 
  __int64 worldTransient; 
  __int64 worldTransienta; 
  __int64 depth; 
  bool v38; 
  unsigned int v39; 
  unsigned int outDepth; 
  unsigned int outY; 
  unsigned int outX; 
  unsigned __int64 v43; 
  unsigned int m_depth; 
  unsigned int width; 
  int v46; 
  unsigned __int64 v47; 
  __int64 v48; 
  unsigned int *v49; 
  char v52; 

  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 932, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( this->m_zonePendingAdd.m_zoneIndex != 0xFFFF && this->m_zonePendingAdd.m_packed != transientZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 934, ASSERT_TYPE_ASSERT, "(( m_zonePendingAdd.m_zoneIndex == INVALID_ZONE_INDEX ) || ( m_zonePendingAdd.m_packed == transientZone.m_packed ))", (const char *)&queryFormat, "( m_zonePendingAdd.m_zoneIndex == INVALID_ZONE_INDEX ) || ( m_zonePendingAdd.m_packed == transientZone.m_packed )") )
    __debugbreak();
  v8 = this->m_state == IDLE;
  this->m_zonePendingAdd = transientZone;
  if ( !v8 )
    return 0;
  if ( this->m_flipTexturePending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 943, ASSERT_TYPE_ASSERT, "(!m_flipTexturePending)", (const char *)&queryFormat, "!m_flipTexturePending") )
    __debugbreak();
  GfxLightGridVolumeAtlas::ProcessRemovedBlocks(this);
  m_numVolumes = newBlock->m_numVolumes;
  m_activeAtlasState = this->m_activeAtlasState;
  worldTransientb = newBlock->m_worldTransient;
  width = newBlock->m_widthAndHeight;
  v46 = m_numVolumes;
  v12 = &this->m_atlasState[m_activeAtlasState];
  m_depth = newBlock->m_depth;
  v13 = GfxLightGridVolumeAtlas::AllocLGVBlock(this, width, m_depth, m_numVolumes, transientZone, worldTransientb);
  outX = -1;
  outY = -1;
  outDepth = -1;
  this->m_zonePendingAdd.m_zoneIndex = -1;
  v52 = 0;
  v38 = 0;
  if ( (unsigned int)v13 >= 0x600 )
  {
    LODWORD(worldTransient) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", worldTransient, 1536) )
      __debugbreak();
  }
  v39 = 0x80000000 >> (v13 & 0x1F);
  v47 = v13;
  v49 = &this->m_lgvBlocksUsed.array[v13 >> 5];
  if ( (v39 & *v49) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1307, ASSERT_TYPE_ASSERT, "(m_lgvBlocksUsed.testBit( blockIndex ))", (const char *)&queryFormat, "m_lgvBlocksUsed.testBit( blockIndex )") )
    __debugbreak();
  v14 = 16 * v13;
  v43 = 16 * v13;
  v15 = GfxLightGridVolumeAtlas::TextureAllocator::Preallocate(&v12->m_textureAllocator, this->m_lgvBlocks[v13].widthHeight, this->m_lgvBlocks[v13].depth, &outX, &outY, &outDepth);
  v48 = 2i64;
  if ( v15 && (m_numRanges = v12->m_paramsAllocator.m_numRanges, v17 = 0, m_numRanges) )
  {
    p_m_paramsAllocator = &v12->m_paramsAllocator;
    while ( 1 )
    {
      if ( (*(_DWORD *)p_m_paramsAllocator->m_ranges & 1) == 0 )
      {
        v19 = *(_DWORD *)p_m_paramsAllocator->m_ranges >> 1;
        if ( p_m_paramsAllocator->m_ranges[0].end - v19 >= *(unsigned int *)((char *)&this->m_lgvBlocks[0].numVolumes + v14) )
          break;
      }
      ++v17;
      p_m_paramsAllocator = (GfxLightGridVolumeAtlas::ParamsAllocator *)((char *)p_m_paramsAllocator + 8);
      if ( v17 >= m_numRanges )
        goto LABEL_25;
    }
    v28 = outDepth;
    v29 = outY;
    if ( (unsigned int)v13 >= 0x600 )
    {
      LODWORD(depth) = 1536;
      LODWORD(worldTransienta) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", worldTransienta, depth) )
        __debugbreak();
    }
    if ( (v39 & *v49) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1316, ASSERT_TYPE_ASSERT, "(m_lgvBlocksUsed.testBit( blockIndex ))", (const char *)&queryFormat, "m_lgvBlocksUsed.testBit( blockIndex )") )
      __debugbreak();
    v30 = outX;
    GfxLightGridVolumeAtlas::TextureAllocator::CommitAlloc(&v12->m_textureAllocator, this->m_lgvBlocks[v43 / 0x10].widthHeight, this->m_lgvBlocks[v43 / 0x10].depth, outX, v29, v28);
    v31 = v43;
    v12->m_packing[v43 / 0x10].textureY = v29;
    v14 = v43;
    *(unsigned int *)((char *)&v12->m_packing[0].textureX + v31) = v30;
    v12->m_packing[v47].textureDepth = v28;
    GfxLightGridVolumeAtlas::ParamsAllocator::MarkUsed(&v12->m_paramsAllocator, v19, v19 + *(unsigned int *)((char *)&this->m_lgvBlocks[0].numVolumes + v14));
    *(unsigned int *)((char *)&v12->m_packing[0].paramsOffset + v14) = v19;
    if ( rbBackendDataCopier.m_commands[1].m_writePtr != rbBackendDataCopier.m_commands[1].m_readPtr || (v52 = 1, !Sys_IsBackendOwnerThread()) )
      v52 = 0;
    p_textureId = &v12->m_texture[0].textureId;
    v33 = 2i64;
    do
    {
      RB_BackendDataCopier::AddRenderableCopyDest(&rbBackendDataCopier, 1u, *p_textureId);
      p_textureId += 58;
      --v33;
    }
    while ( v33 );
    RB_BackendDataCopier::AddRenderableCopyDest(&rbBackendDataCopier, 1u, &v12->m_lgvTransformParams);
    RB_BackendDataCopier::AddRenderableCopyDest(&rbBackendDataCopier, 1u, &v12->m_lgvPackingParams);
    v38 = 1;
  }
  else
  {
LABEL_25:
    GfxLightGridVolumeAtlas::PrepareForCopy(this, &this->m_atlasState[1 - this->m_activeAtlasState]);
    GfxLightGridVolumeAtlas::ScheduleCopies(this, this->m_lgvBlocks, &this->m_lgvBlocksUsed, &this->m_atlasState[this->m_activeAtlasState], &this->m_atlasState[1 - this->m_activeAtlasState]);
    v12 = &this->m_atlasState[1 - this->m_activeAtlasState];
  }
  p_height = &this->m_textureDescs[0].height;
  dstX = *(unsigned int *)((char *)&v12->m_packing[0].textureX + v14);
  v22 = &newBlock->m_textures[0].textureId;
  dstY = *(unsigned int *)((char *)&v12->m_packing[0].textureY + v14);
  v24 = &v12->m_texture[0].textureId;
  dstZ = v12->m_packing[v47].textureDepth;
  do
  {
    GfxLightGridVolumeAtlas::ScheduleStackedTextureCopy(*v22, 0, 0, 0, width, width, m_depth, *v24, dstX, dstY, dstZ, newBlock->m_widthAndHeight, newBlock->m_widthAndHeight, newBlock->m_depth, 0x40u, 0x40u, v12->m_depth, *(p_height - 1), *p_height, p_height[1]);
    v8 = v48-- == 1;
    p_height += 12;
    v24 += 58;
    v22 += 10;
  }
  while ( !v8 );
  v26 = v46;
  paramsOffset = v12->m_packing[v43 / 0x10].paramsOffset;
  RB_BackendDataCopier::CopyData(&rbBackendDataCopier, 1u, &newBlock->m_transformParamsBuffer, 0, &v12->m_lgvTransformParams, paramsOffset << 6, v46 << 6);
  RB_BackendDataCopier::CopyData(&rbBackendDataCopier, 1u, &newBlock->m_packingParamsBuffer, 0, &v12->m_lgvPackingParams, 32 * paramsOffset, 32 * v26);
  this->m_copyingFence = 0;
  RB_BackendDataCopier::InsertCPUFence(&rbBackendDataCopier, 1u, &this->m_copyingFence, 1u);
  this->m_state = INITIALIZING;
  this->m_numWaitFrames = 0;
  *copyDoneFence = RB_BackendDataCopier::AllocAndInsertTempFence(&rbBackendDataCopier, 1u, 0, 1u);
  R_HW_AddResourceTransition(computeState, &newBlock->m_transformParamsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_AddResourceTransition(computeState, &newBlock->m_packingParamsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  GfxLightGridVolumeAtlas::PrepareCopyDestAndFlush(this, computeState, v12, v38);
  if ( v52 )
  {
    if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1016, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
      __debugbreak();
    RB_BackendDataCopier::UpdateSingleQueue(&rbBackendDataCopier, computeState, 1u, 0);
    if ( this->m_copyingFence == 1 )
    {
      if ( RB_BackendDataCopier::CheckTempFence(&rbBackendDataCopier, *copyDoneFence) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1024, ASSERT_TYPE_ASSERT, "(rbBackendDataCopier.CheckTempFence( copyDoneFence ) == FENCE_DONE)", (const char *)&queryFormat, "rbBackendDataCopier.CheckTempFence( copyDoneFence ) == FENCE_DONE") )
        __debugbreak();
      GfxLightGridVolumeAtlas::PostCopy(this, computeState, v12);
      this->m_state = IDLE;
      GfxLightGridVolumeAtlas::UpdatePackingBuffer(this, computeState);
    }
  }
  return 1;
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::AllUsed
==============
*/
bool GfxLightGridVolumeAtlas::TextureAllocator::AllUsed(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int first, unsigned int last)
{
  int v3; 
  unsigned int v4; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int *v8; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  v3 = 0;
  v4 = first >> 2;
  v10 = 0i64;
  v6 = (last >> 2) - v4;
  v11 = 0i64;
  v12 = 0i64;
  v13 = 0i64;
  v14 = 0i64;
  v15 = 0i64;
  v16 = 0i64;
  v17 = 0i64;
  bitarray_base<bitarray<512>>::setBits((bitarray_base<bitarray<512> > *)&v10, v4, v6);
  v7 = 16i64;
  v10 &= *(_QWORD *)this->m_allocationUnits.array;
  v11 &= *(_QWORD *)&this->m_allocationUnits.array[2];
  v12 &= *(_QWORD *)&this->m_allocationUnits.array[4];
  v13 &= *(_QWORD *)&this->m_allocationUnits.array[6];
  v14 &= *(_QWORD *)&this->m_allocationUnits.array[8];
  v15 &= *(_QWORD *)&this->m_allocationUnits.array[10];
  v16 &= *(_QWORD *)&this->m_allocationUnits.array[12];
  v17 &= *(_QWORD *)&this->m_allocationUnits.array[14];
  v8 = (unsigned int *)&v10;
  do
  {
    v3 += __popcnt(*v8++);
    --v7;
  }
  while ( v7 );
  return v3 == v6;
}

/*
==============
GfxLightGridVolumeAtlas::AllocLGVBlock
==============
*/
__int64 GfxLightGridVolumeAtlas::AllocLGVBlock(GfxLightGridVolumeAtlas *this, unsigned int widthHeight, unsigned int depth, unsigned int numVolumes, XZoneHandleUnique transientZone, unsigned __int16 worldTransient)
{
  bitarray<1536> *p_m_lgvBlocksUsed; 
  unsigned int v11; 
  unsigned int v12; 
  bitarray<1536> *v13; 
  unsigned int v14; 
  GfxLightGridVolumeAtlas::LGVBlock *v15; 
  __int64 result; 
  unsigned int v17; 
  int v18; 

  if ( (widthHeight & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1285, ASSERT_TYPE_ASSERT, "(( widthHeight & TextureAllocator::WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( widthHeight & TextureAllocator::WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  if ( (depth & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1286, ASSERT_TYPE_ASSERT, "(( depth & TextureAllocator::DEPTH_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( depth & TextureAllocator::DEPTH_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  if ( worldTransient >= 0x600u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1287, ASSERT_TYPE_ASSERT, "(worldTransient < MAX_MAP_TRANSIENT_ZONES)", (const char *)&queryFormat, "worldTransient < MAX_MAP_TRANSIENT_ZONES") )
    __debugbreak();
  p_m_lgvBlocksUsed = &this->m_lgvBlocksUsed;
  v11 = 0;
  v12 = 0;
  v13 = &this->m_lgvBlocksUsed;
  do
  {
    v14 = __lzcnt(~v13->array[0]);
    v11 += v14;
    if ( v14 < 0x20 )
      break;
    ++v12;
    v13 = (bitarray<1536> *)((char *)v13 + 4);
  }
  while ( v12 < 0x30 );
  if ( v11 >= 0x600 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1290, ASSERT_TYPE_ASSERT, "(newBlockIndex < MAX_ATLASED_LGV_BLOCKS)", (const char *)&queryFormat, "newBlockIndex < MAX_ATLASED_LGV_BLOCKS") )
    __debugbreak();
  v15 = &this->m_lgvBlocks[v11];
  v15->widthHeight = truncate_cast<unsigned short,unsigned int>(widthHeight);
  v15->depth = truncate_cast<unsigned short,unsigned int>(depth);
  v15->transientZone = transientZone;
  v15->numVolumes = numVolumes;
  v15->worldTransient = worldTransient;
  if ( v11 >= 0x600 )
  {
    v18 = 1536;
    v17 = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v17, v18) )
      __debugbreak();
  }
  result = v11;
  p_m_lgvBlocksUsed->array[(unsigned __int64)v11 >> 5] |= 0x80000000 >> (v11 & 0x1F);
  return result;
}

/*
==============
GfxLightGridVolumeAtlas::ApplyLGVBlockPacking
==============
*/
void GfxLightGridVolumeAtlas::ApplyLGVBlockPacking(GfxLightGridVolumeAtlas *this, GfxLightGridVolumeAtlas::AtlasState *state, unsigned int blockIndex, unsigned int packedX, unsigned int packedY, unsigned int packDepth, unsigned int packOffset)
{
  unsigned __int64 v7; 
  int v12; 

  v7 = blockIndex;
  if ( blockIndex >= 0x600 )
  {
    v12 = 1536;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", blockIndex, v12) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v7 & 0x1F)) & this->m_lgvBlocksUsed.array[v7 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1316, ASSERT_TYPE_ASSERT, "(m_lgvBlocksUsed.testBit( blockIndex ))", (const char *)&queryFormat, "m_lgvBlocksUsed.testBit( blockIndex )") )
    __debugbreak();
  GfxLightGridVolumeAtlas::TextureAllocator::CommitAlloc(&state->m_textureAllocator, this->m_lgvBlocks[v7].widthHeight, this->m_lgvBlocks[v7].depth, packedX, packedY, packDepth);
  state->m_packing[v7].textureY = packedY;
  state->m_packing[v7].textureX = packedX;
  state->m_packing[v7].textureDepth = packDepth;
  GfxLightGridVolumeAtlas::ParamsAllocator::MarkUsed(&state->m_paramsAllocator, packOffset, packOffset + this->m_lgvBlocks[v7].numVolumes);
  state->m_packing[v7].paramsOffset = packOffset;
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::AreFree
==============
*/
bool GfxLightGridVolumeAtlas::TextureAllocator::AreFree(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int first, unsigned int last)
{
  int v3; 
  __int64 v5; 
  unsigned int *v6; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  v3 = 0;
  v8 = 0i64;
  v9 = 0i64;
  v10 = 0i64;
  v11 = 0i64;
  v12 = 0i64;
  v13 = 0i64;
  v14 = 0i64;
  v15 = 0i64;
  bitarray_base<bitarray<512>>::setBits((bitarray_base<bitarray<512> > *)&v8, first >> 2, (last >> 2) - (first >> 2));
  v5 = 16i64;
  v8 &= *(_QWORD *)this->m_allocationUnits.array;
  v9 &= *(_QWORD *)&this->m_allocationUnits.array[2];
  v10 &= *(_QWORD *)&this->m_allocationUnits.array[4];
  v11 &= *(_QWORD *)&this->m_allocationUnits.array[6];
  v12 &= *(_QWORD *)&this->m_allocationUnits.array[8];
  v13 &= *(_QWORD *)&this->m_allocationUnits.array[10];
  v14 &= *(_QWORD *)&this->m_allocationUnits.array[12];
  v15 &= *(_QWORD *)&this->m_allocationUnits.array[14];
  v6 = (unsigned int *)&v8;
  do
  {
    v3 += __popcnt(*v6++);
    --v5;
  }
  while ( v5 );
  return v3 == 0;
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::CheckConsistency
==============
*/
char GfxLightGridVolumeAtlas::ParamsAllocator::CheckConsistency(GfxLightGridVolumeAtlas::ParamsAllocator *this)
{
  unsigned int m_numRanges; 
  int v2; 
  GfxLightGridVolumeAtlas::ParamsAllocator::Range *i; 
  __int64 v5; 
  unsigned int end; 
  unsigned int v7; 
  unsigned int v8; 

  m_numRanges = this->m_numRanges;
  v2 = 1;
  if ( m_numRanges <= 1 )
    return 1;
  for ( i = &this->m_ranges[1]; ; ++i )
  {
    v5 = (unsigned int)(v2 - 1);
    end = this->m_ranges[v5].end;
    v7 = *(_DWORD *)i >> 1;
    if ( end != v7 )
      break;
    if ( v7 >= i->end )
      break;
    v8 = (unsigned int)this->m_ranges[v5];
    if ( v8 >> 1 >= end || (v8 & 1) == 0 && (*(_DWORD *)i & 1) == 0 )
      break;
    if ( ++v2 >= m_numRanges )
      return 1;
  }
  return 0;
}

/*
==============
GfxLightGridVolumeAtlas::CheckTexturePacking
==============
*/
void GfxLightGridVolumeAtlas::CheckTexturePacking(GfxLightGridVolumeAtlas *this, const GfxLightGridVolumeAtlas::AtlasState *state)
{
  unsigned int m_depth; 
  __int64 v5; 
  signed int v6; 
  unsigned int *p_m_depthSlice; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  __int64 Z; 
  __int64 v12; 
  GfxLightGridVolumeAtlas::TextureAllocator v13; 

  m_depth = state->m_depth;
  if ( (state->m_depth & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1337, ASSERT_TYPE_ASSERT, "(( depth & DEPTH_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( depth & DEPTH_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  v13.m_numUnits = m_depth >> 2;
  bitarray_base<bitarray<512>>::resetBits((bitarray_base<bitarray<512> > *)&v13, 0, m_depth >> 2);
  LODWORD(v5) = 0;
  v13.m_numPartialAllocSlices = 0;
  memset_0(v13.m_partialSliceIndex, 255, sizeof(v13.m_partialSliceIndex));
  v6 = 0;
  if ( (int)state->m_textureAllocator.m_numPartialAllocSlices > 0 )
  {
    p_m_depthSlice = &state->m_textureAllocator.m_partialAllocSlices[0].m_depthSlice;
    do
    {
      GfxLightGridVolumeAtlas::TextureAllocator::CreatePartialAllocSlice(&v13, *p_m_depthSlice);
      ++v6;
      p_m_depthSlice += 3;
    }
    while ( v6 < (signed int)state->m_textureAllocator.m_numPartialAllocSlices );
  }
  v8 = this->m_lgvBlocksUsed.array[0];
  while ( v8 )
  {
LABEL_11:
    v9 = __lzcnt(v8);
    if ( v9 >= 0x20 )
    {
      LODWORD(v12) = 32;
      LODWORD(Z) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", Z, v12) )
        __debugbreak();
    }
    if ( (v8 & (0x80000000 >> v9)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v8 &= ~(0x80000000 >> v9);
    v10 = v9 + 32 * v5;
    GfxLightGridVolumeAtlas::TextureAllocator::CommitAlloc(&v13, this->m_lgvBlocks[v10].widthHeight, this->m_lgvBlocks[v10].depth, state->m_packing[v10].textureX, state->m_packing[v10].textureY, state->m_packing[v10].textureDepth);
  }
  while ( 1 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0x30 )
      break;
    v8 = this->m_lgvBlocksUsed.array[v5];
    if ( v8 )
      goto LABEL_11;
  }
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::CombineFreeRanges
==============
*/
void GfxLightGridVolumeAtlas::ParamsAllocator::CombineFreeRanges(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int startIndex)
{
  __int64 v3; 
  unsigned int m_numRanges; 
  unsigned int i; 
  unsigned int v6; 
  GfxLightGridVolumeAtlas::ParamsAllocator::Range *v7; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 

  v3 = startIndex;
  m_numRanges = this->m_numRanges;
  for ( i = startIndex; i < m_numRanges; ++i )
  {
    if ( (*(_BYTE *)&this->m_ranges[i] & 1) != 0 )
      break;
  }
  v6 = startIndex + 1;
  if ( i == m_numRanges )
  {
    this->m_ranges[startIndex].end = this->m_ranges[m_numRanges - 1].end;
    this->m_numRanges = v6;
  }
  else
  {
    v7 = &this->m_ranges[i];
    v8 = *(_DWORD *)v7 >> 1;
    if ( i <= v6 )
    {
      if ( this->m_ranges[startIndex].end != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1905, ASSERT_TYPE_ASSERT, "(m_ranges[startIndex].end == m_ranges[currIndex].start)", (const char *)&queryFormat, "m_ranges[startIndex].end == m_ranges[currIndex].start") )
        __debugbreak();
    }
    else
    {
      if ( this->m_ranges[i - 1].end != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1888, ASSERT_TYPE_ASSERT, "(m_ranges[currIndex - 1].end == m_ranges[currIndex].start)", (const char *)&queryFormat, "m_ranges[currIndex - 1].end == m_ranges[currIndex].start") )
        __debugbreak();
      v9 = i;
      this->m_ranges[v3].end = *(_DWORD *)v7 >> 1;
      v10 = this->m_numRanges;
      if ( i < v10 )
      {
        do
        {
          v11 = v9;
          v12 = (_DWORD)v3 - i + v9++ + 1;
          this->m_ranges[v12] = this->m_ranges[v11];
          v10 = this->m_numRanges;
        }
        while ( v9 < v10 );
      }
      this->m_numRanges = v10 - i + v3 + 1;
    }
  }
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::CommitAlloc
==============
*/
void GfxLightGridVolumeAtlas::TextureAllocator::CommitAlloc(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int widthHeight, unsigned int depth, unsigned int X, unsigned int Y, unsigned int Z)
{
  __int64 v8; 
  unsigned int v10; 
  int v11; 
  unsigned int *v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  v8 = Z >> 2;
  v10 = ((depth + Z) >> 2) - v8;
  if ( widthHeight < 0x40 )
  {
    if ( v10 != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1626, ASSERT_TYPE_ASSERT, "(( lastUnit - firstUnit ) == PARTIAL_ALLOC_NUM_SLICES)", (const char *)&queryFormat, "( lastUnit - firstUnit ) == PARTIAL_ALLOC_NUM_SLICES") )
      __debugbreak();
    v14 = this->m_partialSliceIndex[v8];
    if ( v14 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1629, ASSERT_TYPE_ASSERT, "(partialSliceIndex != 0xFFFFFFFF)", (const char *)&queryFormat, "partialSliceIndex != 0xFFFFFFFF") )
      __debugbreak();
    if ( v14 >= this->m_numPartialAllocSlices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1630, ASSERT_TYPE_ASSERT, "(partialSliceIndex < m_numPartialAllocSlices)", (const char *)&queryFormat, "partialSliceIndex < m_numPartialAllocSlices") )
      __debugbreak();
    GfxLightGridVolumeAtlas::TextureAllocator::CommitInPartialAllocSlice(this, v14, widthHeight, X, Y);
  }
  else
  {
    v11 = 0;
    v15 = 0i64;
    v16 = 0i64;
    v17 = 0i64;
    v18 = 0i64;
    v19 = 0i64;
    v20 = 0i64;
    v21 = 0i64;
    v22 = 0i64;
    bitarray_base<bitarray<512>>::setBits((bitarray_base<bitarray<512> > *)&v15, v8, v10);
    v12 = (unsigned int *)&v15;
    v15 &= *(_QWORD *)this->m_allocationUnits.array;
    v13 = 16i64;
    v16 &= *(_QWORD *)&this->m_allocationUnits.array[2];
    v17 &= *(_QWORD *)&this->m_allocationUnits.array[4];
    v18 &= *(_QWORD *)&this->m_allocationUnits.array[6];
    v19 &= *(_QWORD *)&this->m_allocationUnits.array[8];
    v20 &= *(_QWORD *)&this->m_allocationUnits.array[10];
    v21 &= *(_QWORD *)&this->m_allocationUnits.array[12];
    v22 &= *(_QWORD *)&this->m_allocationUnits.array[14];
    do
    {
      v11 += __popcnt(*v12++);
      --v13;
    }
    while ( v13 );
    if ( v11 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1620, ASSERT_TYPE_ASSERT, "(AreFree( Z, Z + depth ))", (const char *)&queryFormat, "AreFree( Z, Z + depth )", v15, v16, v17, v18, v19, v20, v21, v22) )
        __debugbreak();
    }
    bitarray_base<bitarray<512>>::setBits((bitarray_base<bitarray<512> > *)this, v8, v10);
  }
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::CommitInPartialAllocSlice
==============
*/
void GfxLightGridVolumeAtlas::TextureAllocator::CommitInPartialAllocSlice(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int partialSliceIndex, unsigned int size, unsigned int X, unsigned int Y)
{
  __int64 v5; 
  unsigned int v9; 
  GfxLightGridVolumeAtlas::TextureAllocator::PartialAllocSlice *v10; 
  int v11; 
  int v12; 
  __int64 v13; 

  v5 = partialSliceIndex;
  if ( (size & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1506, ASSERT_TYPE_ASSERT, "(( size & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( size & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  if ( (X & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1507, ASSERT_TYPE_ASSERT, "(( X & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( X & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  if ( (Y & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1508, ASSERT_TYPE_ASSERT, "(( Y & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( Y & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  v9 = GfxLightGridVolumeAtlas::TextureAllocator::ToMorton(X >> 3, Y >> 3);
  v10 = &this->m_partialAllocSlices[v5];
  v13 = 0i64;
  bitarray_base<bitarray<64>>::setBits((bitarray_base<bitarray<64> > *)&v13, v9, (size >> 3) * (size >> 3));
  v11 = HIDWORD(v13);
  v12 = v13;
  if ( (v13 & *(_QWORD *)&v10->m_used) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1524, ASSERT_TYPE_ASSERT, "(!partialSlice.m_used.testAnyBits( allocMask ))", (const char *)&queryFormat, "!partialSlice.m_used.testAnyBits( allocMask )") )
    __debugbreak();
  v10->m_used.array[0] |= v12;
  v10->m_used.array[1] |= v11;
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::CreatePartialAllocSlice
==============
*/

__int64 __fastcall GfxLightGridVolumeAtlas::TextureAllocator::CreatePartialAllocSlice(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int depthSlice, double _XMM2_8, double _XMM3_8)
{
  __int64 v4; 
  int v5; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  _DWORD *v14; 
  __int64 v17; 
  GfxLightGridVolumeAtlas::TextureAllocator *v32; 
  __int64 v33; 
  __int64 m_numPartialAllocSlices; 
  __int64 v43; 
  __int64 result; 
  __int128 v45; 
  __int128 v46[2]; 
  __int128 v47; 

  v4 = depthSlice;
  v5 = 512;
  v45 = 0ui64;
  _RBX = this;
  memset(v46, 0, sizeof(v46));
  v47 = 0ui64;
  if ( depthSlice >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 315, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", depthSlice, 512) )
    __debugbreak();
  if ( (unsigned int)(v4 + 4) < 0x200 )
    v5 = v4 + 4;
  v7 = (unsigned int)v4 >> 5;
  v8 = 0xFFFFFFFF >> (v4 & 0x1F);
  v9 = (unsigned int)(v5 - 1) >> 5;
  v10 = *((_DWORD *)&v46[-1] + v7);
  v11 = -1 << (31 - ((v5 - 1) & 0x1F));
  if ( (_DWORD)v7 == (_DWORD)v9 )
  {
    *((_DWORD *)&v46[-1] + v7) = v10 | v8 & v11;
  }
  else
  {
    v12 = (unsigned int)(v7 + 1);
    *((_DWORD *)&v46[-1] + v7) = v8 | v10;
    if ( (unsigned int)v12 < (unsigned int)v9 )
    {
      v13 = (unsigned int)(v9 - v12);
      v14 = (_DWORD *)&v46[-1] + v12;
      while ( v13 )
      {
        *v14++ = -1;
        --v13;
      }
    }
    *((_DWORD *)&v46[-1] + v9) |= v11;
  }
  _RCX = (char *)_RBX - (char *)v46;
  _RAX = v46;
  v17 = 2i64;
  __asm
  {
    vpxor   xmm2, xmm2, xmm2
    vpxor   xmm3, xmm3, xmm3
  }
  do
  {
    __asm
    {
      vmovdqu xmm1, xmmword ptr [rcx+rax]
      vpand   xmm1, xmm1, xmmword ptr [rax-10h]
    }
    _RAX += 2;
    __asm
    {
      vpor    xmm2, xmm1, xmm2
      vmovdqu xmm1, xmmword ptr [rcx+rax-10h]
      vpand   xmm1, xmm1, xmmword ptr [rax-20h]
      vpor    xmm3, xmm1, xmm3
    }
    --v17;
  }
  while ( v17 );
  __asm
  {
    vpor    xmm1, xmm2, xmm3
    vpsrldq xmm0, xmm1, 8
    vpor    xmm2, xmm1, xmm0
    vpsrldq xmm0, xmm2, 4
    vpor    xmm0, xmm2, xmm0
    vmovd   eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1385, ASSERT_TYPE_ASSERT, "(!m_allocationUnits.testAnyBits( allocMask ))", (const char *)&queryFormat, "!m_allocationUnits.testAnyBits( allocMask )") )
    __debugbreak();
  if ( _RBX > (GfxLightGridVolumeAtlas::TextureAllocator *)((char *)&v47 + 12) || &_RBX->m_allocationUnits.array[15] < (unsigned int *)&v45 )
  {
    __asm
    {
      vmovdqu xmm1, xmmword ptr [rbx]
      vpor    xmm2, xmm1, [rbp+57h+var_70]
      vmovdqu xmmword ptr [rbx], xmm2
      vmovdqu xmm1, xmmword ptr [rbx+10h]
      vpor    xmm2, xmm1, [rbp+57h+var_60]
      vmovdqu xmmword ptr [rbx+10h], xmm2
      vmovdqu xmm0, xmmword ptr [rbx+20h]
      vpor    xmm1, xmm0, [rbp+57h+var_50]
      vmovdqu xmmword ptr [rbx+20h], xmm1
      vmovdqu xmm1, xmmword ptr [rbx+30h]
      vpor    xmm2, xmm1, [rbp+57h+var_40]
      vmovdqu xmmword ptr [rbx+30h], xmm2
    }
  }
  else
  {
    v32 = _RBX;
    v33 = 16i64;
    do
    {
      v32->m_allocationUnits.array[0] |= *(unsigned int *)((char *)v32->m_allocationUnits.array + (char *)&v45 - (char *)_RBX);
      v32 = (GfxLightGridVolumeAtlas::TextureAllocator *)((char *)v32 + 4);
      --v33;
    }
    while ( v33 );
  }
  if ( _RBX->m_numPartialAllocSlices >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1389, ASSERT_TYPE_ASSERT, "(m_numPartialAllocSlices < MAX_PARTIAL_ALLOC_SLICES)", (const char *)&queryFormat, "m_numPartialAllocSlices < MAX_PARTIAL_ALLOC_SLICES") )
    __debugbreak();
  m_numPartialAllocSlices = _RBX->m_numPartialAllocSlices;
  v43 = 3 * m_numPartialAllocSlices + 18;
  *(_QWORD *)&_RBX->m_allocationUnits.array[v43] = 0i64;
  _RBX->m_allocationUnits.array[v43 + 2] = v4;
  if ( _RBX->m_partialSliceIndex[v4] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1397, ASSERT_TYPE_ASSERT, "(m_partialSliceIndex[depthSlice] == 0xFFFFFFFF)", (const char *)&queryFormat, "m_partialSliceIndex[depthSlice] == 0xFFFFFFFF") )
    __debugbreak();
  _RBX->m_partialSliceIndex[v4] = m_numPartialAllocSlices;
  result = (unsigned int)m_numPartialAllocSlices;
  ++_RBX->m_numPartialAllocSlices;
  return result;
}

/*
==============
GfxLightGridVolumeAtlas::Defragment
==============
*/
void GfxLightGridVolumeAtlas::Defragment(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *state)
{
  int v4; 
  bitarray<1536> *i; 

  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 709, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( this->m_state )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 711, ASSERT_TYPE_ASSERT, "(m_state == State::IDLE)", (const char *)&queryFormat, "m_state == State::IDLE") )
      __debugbreak();
  }
  v4 = 0;
  for ( i = &this->m_lgvBlocksUsed; !i->array[0]; i = (bitarray<1536> *)((char *)i + 4) )
  {
    if ( (unsigned int)++v4 >= 0x30 )
      return;
  }
  GfxLightGridVolumeAtlas::PrepareForCopy(this, &this->m_atlasState[1 - this->m_activeAtlasState]);
  GfxLightGridVolumeAtlas::PrepareCopyDestAndFlush(this, state, &this->m_atlasState[1 - this->m_activeAtlasState], 0);
  GfxLightGridVolumeAtlas::ScheduleCopies(this, this->m_lgvBlocks, &this->m_lgvBlocksUsed, &this->m_atlasState[this->m_activeAtlasState], &this->m_atlasState[1 - this->m_activeAtlasState]);
  this->m_copyingFence = 0;
  RB_BackendDataCopier::InsertCPUFence(&rbBackendDataCopier, 1u, &this->m_copyingFence, 1u);
  this->m_state = INITIALIZING;
  this->m_numWaitFrames = 0;
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::FindRange
==============
*/
__int64 GfxLightGridVolumeAtlas::ParamsAllocator::FindRange(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int pos)
{
  __int64 m_numRanges; 
  GfxLightGridVolumeAtlas::ParamsAllocator *v3; 
  __int64 v4; 

  m_numRanges = this->m_numRanges;
  v3 = this;
  if ( this->m_numRanges )
  {
    do
    {
      v4 = m_numRanges >> 1;
      if ( v3->m_ranges[m_numRanges >> 1].end > pos )
      {
        m_numRanges >>= 1;
      }
      else
      {
        v3 = (GfxLightGridVolumeAtlas::ParamsAllocator *)((char *)v3 + 8 * v4 + 8);
        m_numRanges += -1 - v4;
      }
    }
    while ( m_numRanges > 0 );
  }
  return (unsigned int)(((char *)v3 - (char *)this) >> 3);
}

/*
==============
GfxLightGridVolumeAtlas::FlipActiveState
==============
*/
void GfxLightGridVolumeAtlas::FlipActiveState(GfxLightGridVolumeAtlas *this)
{
  this->m_activeAtlasState = 1 - this->m_activeAtlasState;
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::Free
==============
*/
void GfxLightGridVolumeAtlas::TextureAllocator::Free(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int widthHeight, unsigned int depth, unsigned int X, unsigned int Y, unsigned int Z)
{
  __int64 v8; 
  unsigned int v10; 
  int v11; 
  unsigned int *v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  v8 = Z >> 2;
  v10 = ((depth + Z) >> 2) - v8;
  if ( widthHeight < 0x40 )
  {
    if ( v10 != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1652, ASSERT_TYPE_ASSERT, "(( lastUnit - firstUnit ) == PARTIAL_ALLOC_NUM_SLICES)", (const char *)&queryFormat, "( lastUnit - firstUnit ) == PARTIAL_ALLOC_NUM_SLICES") )
      __debugbreak();
    v14 = this->m_partialSliceIndex[v8];
    if ( v14 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1655, ASSERT_TYPE_ASSERT, "(partialSliceIndex != 0xFFFFFFFF)", (const char *)&queryFormat, "partialSliceIndex != 0xFFFFFFFF") )
      __debugbreak();
    if ( v14 >= this->m_numPartialAllocSlices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1656, ASSERT_TYPE_ASSERT, "(partialSliceIndex < m_numPartialAllocSlices)", (const char *)&queryFormat, "partialSliceIndex < m_numPartialAllocSlices") )
      __debugbreak();
    GfxLightGridVolumeAtlas::TextureAllocator::FreeInPartialAllocSlice(this, v14, widthHeight, X, Y);
  }
  else
  {
    v11 = 0;
    v15 = 0i64;
    v16 = 0i64;
    v17 = 0i64;
    v18 = 0i64;
    v19 = 0i64;
    v20 = 0i64;
    v21 = 0i64;
    v22 = 0i64;
    bitarray_base<bitarray<512>>::setBits((bitarray_base<bitarray<512> > *)&v15, v8, v10);
    v12 = (unsigned int *)&v15;
    v15 &= *(_QWORD *)this->m_allocationUnits.array;
    v13 = 16i64;
    v16 &= *(_QWORD *)&this->m_allocationUnits.array[2];
    v17 &= *(_QWORD *)&this->m_allocationUnits.array[4];
    v18 &= *(_QWORD *)&this->m_allocationUnits.array[6];
    v19 &= *(_QWORD *)&this->m_allocationUnits.array[8];
    v20 &= *(_QWORD *)&this->m_allocationUnits.array[10];
    v21 &= *(_QWORD *)&this->m_allocationUnits.array[12];
    v22 &= *(_QWORD *)&this->m_allocationUnits.array[14];
    do
    {
      v11 += __popcnt(*v12++);
      --v13;
    }
    while ( v13 );
    if ( v11 != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1646, ASSERT_TYPE_ASSERT, "(AllUsed( Z, Z + depth ))", (const char *)&queryFormat, "AllUsed( Z, Z + depth )", v15, v16, v17, v18, v19, v20, v21, v22) )
      __debugbreak();
    bitarray_base<bitarray<512>>::resetBits((bitarray_base<bitarray<512> > *)this, v8, v10);
  }
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::FreeInPartialAllocSlice
==============
*/
void GfxLightGridVolumeAtlas::TextureAllocator::FreeInPartialAllocSlice(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int partialSliceIndex, unsigned int size, unsigned int X, unsigned int Y)
{
  __int64 v5; 
  unsigned int v9; 
  GfxLightGridVolumeAtlas::TextureAllocator::PartialAllocSlice *v10; 
  unsigned int v11; 
  __int64 *v12; 
  unsigned int v13; 
  __int64 v14; 

  v5 = partialSliceIndex;
  if ( (size & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1533, ASSERT_TYPE_ASSERT, "(( size & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( size & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  if ( (X & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1534, ASSERT_TYPE_ASSERT, "(( X & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( X & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  if ( (Y & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1535, ASSERT_TYPE_ASSERT, "(( Y & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( Y & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  v9 = GfxLightGridVolumeAtlas::TextureAllocator::ToMorton(X >> 3, Y >> 3);
  v10 = &this->m_partialAllocSlices[v5];
  v11 = 0;
  v14 = 0i64;
  bitarray_base<bitarray<64>>::setBits((bitarray_base<bitarray<64> > *)&v14, v9, (size >> 3) * (size >> 3));
  v12 = &v14;
  v13 = 0;
  while ( (~*(_DWORD *)((char *)v12 + (char *)v10 - (char *)&v14) & *(_DWORD *)v12) == 0 )
  {
    ++v13;
    v12 = (__int64 *)((char *)v12 + 4);
    if ( v13 >= 2 )
      goto LABEL_16;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1551, ASSERT_TYPE_ASSERT, "(allocMask.testAllBits( partialSlice.m_used ))", (const char *)&queryFormat, "allocMask.testAllBits( partialSlice.m_used )") )
    __debugbreak();
LABEL_16:
  *(_QWORD *)&v10->m_used &= ~v14;
  while ( !v10->m_used.array[0] )
  {
    ++v11;
    v10 = (GfxLightGridVolumeAtlas::TextureAllocator::PartialAllocSlice *)((char *)v10 + 4);
    if ( v11 >= 2 )
    {
      GfxLightGridVolumeAtlas::TextureAllocator::FreePartialAllocSlice(this, v5);
      return;
    }
  }
}

/*
==============
GfxLightGridVolumeAtlas::FreeOldTexture
==============
*/
void GfxLightGridVolumeAtlas::FreeOldTexture(GfxLightGridVolumeAtlas *this)
{
  signed int v1; 
  GfxLightGridVolumeAtlas::AtlasState *v2; 
  unsigned __int64 m_textureMemSize; 
  unsigned __int8 *m_textureMem; 
  unsigned int v5; 
  Mem_PageRange inoutPageRange; 
  StreamerMemLoan result; 

  v1 = 0;
  v2 = &this->m_atlasState[1 - this->m_activeAtlasState];
  do
  {
    if ( !Image_IsReleased(&v2->m_texture[v1]) )
      Image_Release(&v2->m_texture[v1]);
    ++v1;
  }
  while ( (unsigned int)v1 < 2 );
  R_ShutdownGfxWrappedBuffer(&v2->m_lgvTransformParams);
  R_ShutdownGfxWrappedBuffer(&v2->m_lgvPackingParams);
  if ( v2->m_textureMem )
  {
    if ( !v2->m_textureMemSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 865, ASSERT_TYPE_ASSERT, "(prevAtlasState.m_textureMemSize != 0)", (const char *)&queryFormat, "prevAtlasState.m_textureMemSize != 0") )
      __debugbreak();
    m_textureMemSize = v2->m_textureMemSize;
    m_textureMem = v2->m_textureMem;
    inoutPageRange = v2->m_texturePageRange;
    Mem_Paged_DecommitMemoryPartial(&result, m_textureMem, &m_textureMem[m_textureMemSize], m_textureMem, &inoutPageRange);
    StreamerMemLoan::~StreamerMemLoan(&result);
    v5 = -LODWORD(v2->m_textureMemSize);
    if ( ((unsigned __int8)&s_lightgridCommitTotal & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_lightgridCommitTotal) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_lightgridCommitTotal, v5);
  }
  v2->m_texturePageRange = MEM_PAGE_RANGE_INVALID;
  v2->m_textureMem = NULL;
  v2->m_textureMemSize = 0i64;
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::FreePartialAllocSlice
==============
*/
void GfxLightGridVolumeAtlas::TextureAllocator::FreePartialAllocSlice(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int partialSliceIndex)
{
  unsigned int v2; 
  __int64 v3; 
  int v4; 
  __int64 m_depthSlice; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  _DWORD *v14; 
  unsigned int v15; 
  __int64 v16; 
  __int128 *v17; 
  GfxLightGridVolumeAtlas::TextureAllocator *v18; 
  __int64 v19; 
  int v20; 
  unsigned int m_numPartialAllocSlices; 
  __int64 v35; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 

  v2 = 0;
  v3 = partialSliceIndex;
  v4 = 512;
  v39 = 0ui64;
  _RSI = this;
  v40 = 0ui64;
  m_depthSlice = this->m_partialAllocSlices[partialSliceIndex].m_depthSlice;
  v41 = 0ui64;
  v42 = 0ui64;
  if ( (unsigned int)m_depthSlice >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 315, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", m_depthSlice, 512) )
    __debugbreak();
  if ( (unsigned int)(m_depthSlice + 4) < 0x200 )
    v4 = m_depthSlice + 4;
  v7 = (unsigned int)m_depthSlice >> 5;
  v8 = 0xFFFFFFFF >> (m_depthSlice & 0x1F);
  v9 = (unsigned int)(v4 - 1) >> 5;
  v10 = *((_DWORD *)&v39 + v7);
  v11 = -1 << (31 - ((v4 - 1) & 0x1F));
  if ( (_DWORD)v7 == (_DWORD)v9 )
  {
    *((_DWORD *)&v39 + v7) = v10 | v8 & v11;
  }
  else
  {
    v12 = (unsigned int)(v7 + 1);
    *((_DWORD *)&v39 + v7) = v8 | v10;
    if ( (unsigned int)v12 < (unsigned int)v9 )
    {
      v13 = (unsigned int)(v9 - v12);
      v14 = (_DWORD *)&v39 + v12;
      while ( v13 )
      {
        *v14++ = -1;
        --v13;
      }
    }
    *((_DWORD *)&v39 + v9) |= v11;
  }
  v15 = 0;
  v16 = 0i64;
  while ( !_RSI->m_partialAllocSlices[0].m_used.array[2 * v3 + v16 + v3] )
  {
    ++v15;
    ++v16;
    if ( v15 >= 2 )
      goto LABEL_19;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1414, ASSERT_TYPE_ASSERT, "(m_partialAllocSlices[partialSliceIndex].m_used.noBitsOn())", (const char *)&queryFormat, "m_partialAllocSlices[partialSliceIndex].m_used.noBitsOn()") )
    __debugbreak();
LABEL_19:
  v17 = &v39;
  while ( (~*(_DWORD *)((char *)v17 + (char *)_RSI - (char *)&v39) & *(_DWORD *)v17) == 0 )
  {
    ++v2;
    v17 = (__int128 *)((char *)v17 + 4);
    if ( v2 >= 0x10 )
      goto LABEL_25;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1415, ASSERT_TYPE_ASSERT, "(allocMask.testAllBits( m_allocationUnits ))", (const char *)&queryFormat, "allocMask.testAllBits( m_allocationUnits )") )
    __debugbreak();
LABEL_25:
  if ( _RSI->m_partialSliceIndex[m_depthSlice] != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1416, ASSERT_TYPE_ASSERT, "(m_partialSliceIndex[depthSlice] == partialSliceIndex)", (const char *)&queryFormat, "m_partialSliceIndex[depthSlice] == partialSliceIndex") )
    __debugbreak();
  if ( _RSI > (GfxLightGridVolumeAtlas::TextureAllocator *)((char *)&v42 + 12) || &_RSI->m_allocationUnits.array[15] < (unsigned int *)&v39 )
  {
    __asm
    {
      vmovdqu xmm3, cs:__xmm@ffffffffffffffffffffffffffffffff
      vmovdqu xmm0, [rbp+57h+var_80]
      vpandn  xmm2, xmm0, xmm3
      vpand   xmm0, xmm2, xmmword ptr [rsi]
      vmovdqu xmmword ptr [rsi], xmm0
      vmovdqu xmm0, [rbp+57h+var_70]
      vpandn  xmm2, xmm0, xmm3
      vpand   xmm0, xmm2, xmmword ptr [rsi+10h]
      vmovdqu xmmword ptr [rsi+10h], xmm0
      vmovdqu xmm0, [rbp+57h+var_60]
      vpandn  xmm2, xmm0, xmm3
      vpand   xmm0, xmm2, xmmword ptr [rsi+20h]
      vmovdqu xmmword ptr [rsi+20h], xmm0
      vmovdqu xmm0, [rbp+57h+var_50]
      vpandn  xmm2, xmm0, xmm3
      vpand   xmm0, xmm2, xmmword ptr [rsi+30h]
      vmovdqu xmmword ptr [rsi+30h], xmm0
    }
  }
  else
  {
    v18 = _RSI;
    v19 = 16i64;
    do
    {
      v20 = *(unsigned int *)((char *)v18->m_allocationUnits.array + (char *)&v39 - (char *)_RSI);
      v18 = (GfxLightGridVolumeAtlas::TextureAllocator *)((char *)v18 + 4);
      v18[-1].m_partialSliceIndex[511] &= ~v20;
      --v19;
    }
    while ( v19 );
  }
  _RSI->m_partialSliceIndex[m_depthSlice] = -1;
  m_numPartialAllocSlices = _RSI->m_numPartialAllocSlices;
  v35 = m_numPartialAllocSlices - 1;
  if ( (_DWORD)v3 == (_DWORD)v35 )
  {
    _RSI->m_numPartialAllocSlices = m_numPartialAllocSlices - 1;
  }
  else
  {
    if ( _RSI->m_partialSliceIndex[_RSI->m_partialAllocSlices[v35].m_depthSlice] != (_DWORD)v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1423, ASSERT_TYPE_ASSERT, "(m_partialSliceIndex[m_partialAllocSlices[m_numPartialAllocSlices - 1].m_depthSlice] == m_numPartialAllocSlices - 1)", (const char *)&queryFormat, "m_partialSliceIndex[m_partialAllocSlices[m_numPartialAllocSlices - 1].m_depthSlice] == m_numPartialAllocSlices - 1") )
      __debugbreak();
    _RSI->m_partialSliceIndex[_RSI->m_partialAllocSlices[_RSI->m_numPartialAllocSlices - 1].m_depthSlice] = v3;
    _RDX = 3i64 * (_RSI->m_numPartialAllocSlices - 1) + 18;
    __asm { vmovsd  xmm0, qword ptr [rsi+rdx*4] }
    _RCX = &_RSI->m_partialAllocSlices[v3];
    __asm { vmovsd  qword ptr [rcx], xmm0 }
    _RCX->m_depthSlice = _RSI->m_allocationUnits.array[_RDX + 2];
    --_RSI->m_numPartialAllocSlices;
  }
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::FromMorton
==============
*/
void GfxLightGridVolumeAtlas::TextureAllocator::FromMorton(unsigned int index, unsigned int *outX, unsigned int *outY)
{
  char v6; 

  if ( index >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1435, ASSERT_TYPE_ASSERT, "(index < NUM_PARTIAL_ALLOC_UNITS_PER_SLICE)", (const char *)&queryFormat, "index < NUM_PARTIAL_ALLOC_UNITS_PER_SLICE") )
    __debugbreak();
  v6 = (index >> 1) & 0x15 ^ (((index >> 1) & 0x15) >> 1);
  *outX = ((index & 0x15 ^ ((unsigned __int8)(index & 0x15) >> 1)) & 0x33 ^ ((unsigned __int8)((index & 0x15 ^ ((unsigned __int8)(index & 0x15) >> 1)) & 0x33) >> 2)) & 7;
  *outY = (v6 & 0x33 ^ ((unsigned __int8)(v6 & 0x33) >> 2)) & 7;
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::GetTotalSize
==============
*/
__int64 GfxLightGridVolumeAtlas::ParamsAllocator::GetTotalSize(GfxLightGridVolumeAtlas::ParamsAllocator *this)
{
  __int64 result; 

  result = this->m_numRanges;
  if ( (_DWORD)result )
    return this->m_ranges[(unsigned int)(result - 1)].end;
  return result;
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::GetUtilization
==============
*/

float __fastcall GfxLightGridVolumeAtlas::ParamsAllocator::GetUtilization(GfxLightGridVolumeAtlas::ParamsAllocator *this, double _XMM1_8)
{
  unsigned int m_numRanges; 
  int v4; 
  __int64 v5; 

  m_numRanges = this->m_numRanges;
  if ( m_numRanges && (v4 = 0, this->m_ranges[m_numRanges - 1].end) )
  {
    v5 = m_numRanges;
    do
    {
      if ( (*(_DWORD *)this->m_ranges & 1) != 0 )
        v4 += (*(_DWORD *)this->m_ranges >> 1) - this->m_ranges[0].end;
      this = (GfxLightGridVolumeAtlas::ParamsAllocator *)((char *)this + 8);
      --v5;
    }
    while ( v5 );
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vcvtsi2ss xmm0, xmm0, r10
      vdivss  xmm0, xmm1, xmm0
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::GetUtilization
==============
*/

float __fastcall GfxLightGridVolumeAtlas::TextureAllocator::GetUtilization(GfxLightGridVolumeAtlas::TextureAllocator *this, double _XMM1_8)
{
  unsigned int m_numUnits; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned __int64 *v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  __int64 v30; 
  unsigned int *v31; 
  int v37; 
  unsigned __int64 v38; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  __int64 v41; 
  unsigned __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  unsigned int v45; 

  m_numUnits = this->m_numUnits;
  if ( m_numUnits )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v38 = 0i64;
    v12 = 0;
    v39 = 0i64;
    v13 = 0;
    v40 = 0i64;
    v41 = 0i64;
    v42 = 0i64;
    v43 = 0i64;
    v44 = 0i64;
    v45 = 0;
    v14 = 512;
    if ( m_numUnits < 0x200 )
      v14 = m_numUnits;
    v15 = -1 << (31 - ((v14 - 1) & 0x1F));
    v16 = (unsigned int)(v14 - 1) >> 5;
    if ( v16 )
    {
      v37 = -1;
      if ( v16 > 1 )
      {
        v17 = v16 - 1;
        v18 = &v38;
        while ( v17 )
        {
          *(_DWORD *)v18 = -1;
          v18 = (unsigned __int64 *)((char *)v18 + 4);
          --v17;
        }
      }
      *(&v37 + v16) |= v15;
      v13 = v41;
      v12 = HIDWORD(v40);
      v11 = v40;
      v10 = HIDWORD(v39);
      v9 = v39;
      v8 = HIDWORD(v38);
      v7 = v38;
      v15 = v37;
    }
    v19 = this->m_allocationUnits.array[1] & v7;
    v20 = this->m_allocationUnits.array[2] & v8;
    v21 = this->m_allocationUnits.array[3] & v9;
    v22 = this->m_allocationUnits.array[4] & v10;
    v23 = this->m_allocationUnits.array[5] & v11;
    v24 = this->m_allocationUnits.array[6] & v12;
    v25 = this->m_allocationUnits.array[7] & v13;
    v26 = this->m_allocationUnits.array[9] & v42;
    v27 = this->m_allocationUnits.array[0] & v15;
    v28 = this->m_allocationUnits.array[10] & HIDWORD(v42);
    HIDWORD(v41) &= this->m_allocationUnits.array[8];
    v43 &= *(_QWORD *)&this->m_allocationUnits.array[11];
    v44 &= *(_QWORD *)&this->m_allocationUnits.array[13];
    v29 = this->m_allocationUnits.array[15] & v45;
    v38 = __PAIR64__(v20, v19);
    v30 = 16i64;
    v39 = __PAIR64__(v22, v21);
    v40 = __PAIR64__(v24, v23);
    LODWORD(v41) = v25;
    v42 = __PAIR64__(v28, v26);
    v31 = (unsigned int *)&v37;
    v45 = v29;
    v37 = v27;
    do
    {
      v6 += __popcnt(*v31++);
      --v30;
    }
    while ( v30 );
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vcvtsi2ss xmm0, xmm0, r9d
      vdivss  xmm0, xmm1, xmm0
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
GfxLightGridVolumeAtlas::Init
==============
*/
void GfxLightGridVolumeAtlas::Init(GfxLightGridVolumeAtlas *this)
{
  unsigned int v2; 

  this->m_textureDescs[0].format = g_R_RT_renderTargetFmts[54];
  *(_QWORD *)&this->m_textureDescs[0].flags = 8454146i64;
  this->m_textureDescs[0].levelCount = 1;
  *(_DWORD *)&this->m_textureDescs[0].width = 65537;
  v2 = 0;
  *(_DWORD *)&this->m_textureDescs[0].depth = 65537;
  this->m_textureDescs[1].format = g_R_RT_renderTargetFmts[55];
  *(_QWORD *)&this->m_textureDescs[1].flags = 8454146i64;
  *(_DWORD *)&this->m_textureDescs[1].width = 196610;
  *(_DWORD *)&this->m_textureDescs[1].depth = 65537;
  this->m_textureDescs[1].levelCount = 1;
  *(_QWORD *)this->m_lgvBlocksUsed.array = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[2] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[4] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[6] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[8] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[10] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[12] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[14] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[16] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[18] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[20] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[22] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[24] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[26] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[28] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[30] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[32] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[34] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[36] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[38] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[40] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[42] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[44] = 0i64;
  *(_QWORD *)&this->m_lgvBlocksUsed.array[46] = 0i64;
  do
    R_CreateGfxWrappedBuffer(&this->m_packingBuffer[v2++], GfxWrappedBuffer_Structured, 8, 0x600u, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "LGV atlas transform params");
  while ( v2 < 2 );
  *(_QWORD *)&this->m_activePackingBuffer = 0i64;
  this->m_activeAtlasState = 0;
  *(_QWORD *)&this->m_renderPackingBuffer[1] = 0i64;
  this->m_renderAtlasState[1] = 0;
  this->m_state = IDLE;
  *(_QWORD *)&this->m_numExtraCopyWaitFrames = 3i64;
  this->m_defragmentationUtilizationThreshold = 0.40000001;
  *(_QWORD *)&this->m_repackExtraVolumeSlotsAlloc = 1024i64;
  this->m_repackExtraSlicesAlloc = 16;
  this->m_zonePendingAdd.m_packed = -65536;
  this->m_flipTexturePending = 0;
  this->m_textureVARangeAllocOffset = 0i64;
  this->m_textureVARangeWrapFrame = 0;
  this->m_textureVARangeSize = 0x40000000i64;
  this->m_textureVARangeStart = (unsigned __int8 *)Mem_Paged_ReserveVirtualAddressRange(MEM_POOL_GPU_PRIVATE, 0x40000000ui64, "LGV atlas va range");
  GfxLightGridVolumeAtlas::InitAtlasState(this, this->m_atlasState);
  this->m_zonesToFree.m_allocPtr = 0;
  this->m_zonesToFree.m_writePtr = 0;
  this->m_zonesToFree.m_readPtr = 0;
  this->m_zonesToFree.m_consumerThreadId = 0;
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::Init
==============
*/
void GfxLightGridVolumeAtlas::ParamsAllocator::Init(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int size)
{
  this->m_numRanges = 1;
  *(_DWORD *)this->m_ranges = 0;
  this->m_ranges[0].end = size;
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::Init
==============
*/
void GfxLightGridVolumeAtlas::TextureAllocator::Init(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int depth)
{
  if ( (depth & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1337, ASSERT_TYPE_ASSERT, "(( depth & DEPTH_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( depth & DEPTH_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  this->m_numUnits = depth >> 2;
  bitarray_base<bitarray<512>>::resetBits((bitarray_base<bitarray<512> > *)this, 0, depth >> 2);
  this->m_numPartialAllocSlices = 0;
  memset_0(this->m_partialSliceIndex, 255, sizeof(this->m_partialSliceIndex));
}

/*
==============
GfxLightGridVolumeAtlas::InitAtlasState
==============
*/
void GfxLightGridVolumeAtlas::InitAtlasState(GfxLightGridVolumeAtlas *this, GfxLightGridVolumeAtlas::AtlasState *state)
{
  unsigned int i; 
  StreamerMemLoan other; 

  for ( i = 0; i < 2; ++i )
    Image_AllocInPlace(&state->m_texture[i], "$lgv_set", IMG_CATEGORY_LIGHTMAP, TS_FUNCTION);
  memset_0(state->m_packing, 255, sizeof(state->m_packing));
  state->m_textureAllocator.m_numUnits = 0;
  bitarray_base<bitarray<512>>::resetBits((bitarray_base<bitarray<512> > *)&state->m_textureAllocator, 0, 0);
  state->m_textureAllocator.m_numPartialAllocSlices = 0;
  memset_0(state->m_textureAllocator.m_partialSliceIndex, 255, sizeof(state->m_textureAllocator.m_partialSliceIndex));
  state->m_paramsAllocator.m_numRanges = 1;
  state->m_paramsAllocator.m_ranges[0] = 0i64;
  *(_QWORD *)&state->m_depth = 0i64;
  state->m_textureMem = NULL;
  state->m_textureMemSize = 0i64;
  state->m_texturePageRange = MEM_PAGE_RANGE_INVALID;
  *(&other.mCookie + 1) = 0;
  other.mUpdateID = 0i64;
  other.mPages = 0i64;
  other.mCookie = -1061110033;
  StreamerMemLoan::operator=(&state->m_streamerMemLoan, &other);
  StreamerMemLoan::~StreamerMemLoan(&other);
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::InsertRange
==============
*/
void GfxLightGridVolumeAtlas::ParamsAllocator::InsertRange(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int where)
{
  signed int v2; 
  __int64 v3; 
  __int64 v4; 
  GfxLightGridVolumeAtlas::ParamsAllocator::Range *v5; 

  v2 = this->m_numRanges++;
  if ( v2 > (int)where )
  {
    v3 = v2;
    v4 = v2 - where;
    v5 = &this->m_ranges[v3];
    do
    {
      *v5 = v5[-1];
      --v5;
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::MarkFree
==============
*/
void GfxLightGridVolumeAtlas::ParamsAllocator::MarkFree(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int first, unsigned int last)
{
  unsigned int m_numRanges; 
  GfxLightGridVolumeAtlas::ParamsAllocator *v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  GfxLightGridVolumeAtlas::ParamsAllocator::Range *v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int i; 
  unsigned int v15; 
  GfxLightGridVolumeAtlas::ParamsAllocator::Range *v16; 
  int v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 

  m_numRanges = this->m_numRanges;
  v7 = this;
  v8 = m_numRanges;
  if ( m_numRanges )
  {
    do
    {
      v9 = v8 >> 1;
      if ( v7->m_ranges[v8 >> 1].end > first )
      {
        v8 >>= 1;
      }
      else
      {
        v7 = (GfxLightGridVolumeAtlas::ParamsAllocator *)((char *)v7 + 8 * v9 + 8);
        v8 += -1 - v9;
      }
    }
    while ( v8 > 0 );
  }
  v10 = ((char *)v7 - (char *)this) >> 3;
  if ( (unsigned int)v10 > m_numRanges && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1803, ASSERT_TYPE_ASSERT, "(rangeIndex <= m_numRanges)", (const char *)&queryFormat, "rangeIndex <= m_numRanges") )
    __debugbreak();
  v11 = &this->m_ranges[(unsigned int)v10];
  if ( *(_DWORD *)v11 >> 1 != first && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1807, ASSERT_TYPE_ASSERT, "(currRange.start == first)", (const char *)&queryFormat, "currRange.start == first") )
    __debugbreak();
  if ( v11->end != last && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1808, ASSERT_TYPE_ASSERT, "(currRange.end == last)", (const char *)&queryFormat, "currRange.end == last") )
    __debugbreak();
  if ( (*(_BYTE *)v11 & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1809, ASSERT_TYPE_ASSERT, "(currRange.used)", (const char *)&queryFormat, "currRange.used") )
    __debugbreak();
  *(_DWORD *)v11 &= ~1u;
  if ( !(_DWORD)v10 || (v12 = (unsigned int)(v10 - 1), (*(_BYTE *)&this->m_ranges[v12] & 1) != 0) )
    LODWORD(v12) = v10;
  v13 = this->m_numRanges;
  for ( i = v12; i < v13; ++i )
  {
    if ( (*(_BYTE *)&this->m_ranges[i] & 1) != 0 )
      break;
  }
  v15 = v12 + 1;
  if ( i == v13 )
  {
    this->m_ranges[(unsigned int)v12].end = this->m_ranges[v13 - 1].end;
    this->m_numRanges = v15;
  }
  else
  {
    v16 = &this->m_ranges[i];
    v17 = *(_DWORD *)v16 >> 1;
    if ( i <= v15 )
    {
      if ( this->m_ranges[(unsigned int)v12].end != v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1905, ASSERT_TYPE_ASSERT, "(m_ranges[startIndex].end == m_ranges[currIndex].start)", (const char *)&queryFormat, "m_ranges[startIndex].end == m_ranges[currIndex].start") )
        __debugbreak();
    }
    else
    {
      if ( this->m_ranges[i - 1].end != v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1888, ASSERT_TYPE_ASSERT, "(m_ranges[currIndex - 1].end == m_ranges[currIndex].start)", (const char *)&queryFormat, "m_ranges[currIndex - 1].end == m_ranges[currIndex].start") )
        __debugbreak();
      v18 = i;
      this->m_ranges[(unsigned int)v12].end = *(_DWORD *)v16 >> 1;
      v19 = this->m_numRanges;
      if ( i < v19 )
      {
        do
        {
          v20 = v18;
          v21 = (_DWORD)v12 - i + v18++ + 1;
          this->m_ranges[v21] = this->m_ranges[v20];
          v19 = this->m_numRanges;
        }
        while ( v18 < v19 );
      }
      this->m_numRanges = v19 - i + v12 + 1;
    }
  }
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::MarkUsed
==============
*/
void GfxLightGridVolumeAtlas::ParamsAllocator::MarkUsed(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int first, unsigned int last)
{
  GfxLightGridVolumeAtlas::ParamsAllocator *v4; 
  __int64 m_numRanges; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  GfxLightGridVolumeAtlas::ParamsAllocator::Range *v11; 
  unsigned int end; 
  __int64 v13; 
  __int64 v14; 
  __int64 i; 

  v4 = this;
  m_numRanges = this->m_numRanges;
  v8 = (unsigned int)m_numRanges;
  if ( m_numRanges )
  {
    do
    {
      v9 = v8 >> 1;
      if ( v4->m_ranges[v8 >> 1].end > first )
      {
        v8 >>= 1;
      }
      else
      {
        v4 = (GfxLightGridVolumeAtlas::ParamsAllocator *)((char *)v4 + 8 * v9 + 8);
        v8 += -1 - v9;
      }
    }
    while ( v8 > 0 );
  }
  v10 = ((char *)v4 - (char *)this) >> 3;
  if ( (unsigned int)v10 > (unsigned int)m_numRanges && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1771, ASSERT_TYPE_ASSERT, "(rangeIndex <= m_numRanges)", (const char *)&queryFormat, "rangeIndex <= m_numRanges") )
    __debugbreak();
  v11 = &this->m_ranges[(unsigned int)v10];
  if ( *(_DWORD *)v11 >> 1 > first && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1775, ASSERT_TYPE_ASSERT, "(currRange.start <= first)", (const char *)&queryFormat, "currRange.start <= first") )
    __debugbreak();
  if ( v11->end < last && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1776, ASSERT_TYPE_ASSERT, "(currRange.end >= last)", (const char *)&queryFormat, "currRange.end >= last") )
    __debugbreak();
  if ( (*(_BYTE *)v11 & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1777, ASSERT_TYPE_ASSERT, "(!currRange.used)", (const char *)&queryFormat, "!currRange.used") )
    __debugbreak();
  *(_DWORD *)v11 |= 1u;
  end = v11->end;
  if ( end > last )
  {
    v11->end = last;
    v13 = (unsigned int)(v10 + 1);
    v14 = this->m_numRanges++;
    for ( i = (int)v10 + 1i64; v14 > i; --v14 )
      this->m_ranges[v14] = this->m_ranges[v14 - 1];
    this->m_ranges[v13].end = end;
    *(_DWORD *)&this->m_ranges[v13] = 2 * last;
  }
}

/*
==============
GfxLightGridVolumeAtlas::Pack
==============
*/
void GfxLightGridVolumeAtlas::Pack(GfxLightGridVolumeAtlas *this, const GfxLightGridVolumeAtlas::LGVBlock *blocksToPack, const bitarray<1536> *blocksUsed, GfxLightGridVolumeAtlas::AtlasState *targetState)
{
  unsigned int v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v9; 
  GfxLightGridVolumeAtlas::AtlasState *v10; 
  GfxLightGridVolumeAtlas::TextureAllocator *p_m_textureAllocator; 
  bitarray_base<bitarray<512> > *v12; 
  unsigned int v13; 
  GfxLightGridVolumeAtlas::ParamsAllocator *p_m_paramsAllocator; 
  unsigned int v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned __int16 v25; 
  int v26; 
  GfxLightGridVolumeAtlas::AtlasState *v27; 
  __int64 v28; 
  unsigned int PartialAllocSlice; 
  int v30; 
  __int64 v31; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  GfxLightGridVolumeAtlas::AtlasState *v39; 
  unsigned int *v40; 
  int v41; 
  GfxLightGridVolumeAtlas *v42; 
  GfxLightGridVolumeAtlas::AtlasState *v43; 
  int v44; 
  unsigned int m_numVolumes; 
  __int64 Z; 
  __int64 v47; 
  unsigned int first; 
  unsigned int outX; 
  unsigned int outY; 
  __int64 v51; 
  GfxLightGridVolumeAtlas::AtlasState *v52; 
  GfxLightGridVolumeAtlas::Pack::__l2::<lambda_dd302e57db63eae9ed8bbe4dad8daf6e> _Pred; 
  GfxLightGridVolumeAtlas::TextureAllocator *v54; 
  __int128 v55; 
  GfxLightGridVolumeAtlas *v56; 
  int _Last[1536]; 

  v4 = blocksUsed->array[0];
  v5 = 0;
  LODWORD(v6) = 0;
  v52 = targetState;
  v7 = 0i64;
  _Pred.blocksToPack = blocksToPack;
  v56 = this;
  while ( v4 )
  {
LABEL_5:
    v9 = __lzcnt(v4);
    if ( v9 >= 0x20 )
    {
      LODWORD(v47) = 32;
      LODWORD(Z) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", Z, v47) )
        __debugbreak();
    }
    if ( ((0x80000000 >> v9) & v4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    _Last[v7] = v9 + 32 * v6;
    v4 &= ~(0x80000000 >> v9);
    ++v5;
    ++v7;
  }
  while ( 1 )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 0x30 )
      break;
    v4 = blocksUsed->array[v6];
    if ( v4 )
      goto LABEL_5;
  }
  v51 = v7;
  std::_Sort_unchecked_int____lambda_dd302e57db63eae9ed8bbe4dad8daf6e___(_Last, &_Last[v5], v5, _Pred);
  v10 = v52;
  p_m_textureAllocator = &v52->m_textureAllocator;
  v12 = (bitarray_base<bitarray<512> > *)&v52->m_textureAllocator;
  v54 = &v52->m_textureAllocator;
  v52->m_textureAllocator.m_numUnits = 512;
  bitarray_base<bitarray<512>>::resetBits(v12, 0, 0x200u);
  v13 = 2048;
  p_m_textureAllocator->m_numPartialAllocSlices = 0;
  memset_0(p_m_textureAllocator->m_partialSliceIndex, 255, sizeof(p_m_textureAllocator->m_partialSliceIndex));
  p_m_paramsAllocator = &v10->m_paramsAllocator;
  v15 = 0;
  v10->m_paramsAllocator.m_numRanges = 1;
  v16 = 0;
  *(_DWORD *)v10->m_paramsAllocator.m_ranges = 0;
  LODWORD(v17) = 0;
  v18 = v51;
  v10->m_paramsAllocator.m_ranges[0].end = 1572864;
  first = 0;
  if ( v18 > 0 )
  {
    v19 = 0i64;
    do
    {
      v20 = _Last[v19];
      _RCX = _Pred.blocksToPack;
      _RAX = 2 * v20;
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx+rax*8]
        vmovq   rax, xmm0
        vmovups [rsp+18D8h+var_1868], xmm0
      }
      if ( (unsigned __int16)_RAX < 0x40u )
        break;
      if ( (_RAX & 0x30000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1188, ASSERT_TYPE_ASSERT, "(( blockToPack.depth & TextureAllocator::DEPTH_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( blockToPack.depth & TextureAllocator::DEPTH_ALLOCATION_UNIT_MASK ) == 0") )
        __debugbreak();
      v25 = WORD1(v55);
      if ( v16 + WORD1(v55) > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1189, ASSERT_TYPE_ASSERT, "(packedDepth + blockToPack.depth <= MAX_ATLAS_DEPTH)", (const char *)&queryFormat, "packedDepth + blockToPack.depth <= MAX_ATLAS_DEPTH") )
        __debugbreak();
      v26 = DWORD1(v55);
      if ( DWORD1(v55) + first > 0x180000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1190, ASSERT_TYPE_ASSERT, "(packedOffset + blockToPack.numVolumes <= MAX_ATLASED_VOLUMES)", (const char *)&queryFormat, "packedOffset + blockToPack.numVolumes <= MAX_ATLASED_VOLUMES") )
        __debugbreak();
      v27 = v52;
      v28 = v20;
      v52->m_packing[v20].textureX = 0;
      v27->m_packing[v28].textureY = 0;
      v27->m_packing[v20].textureDepth = v16;
      v15 = first + v26;
      v27->m_packing[v28].paramsOffset = first;
      GfxLightGridVolumeAtlas::ParamsAllocator::MarkUsed(p_m_paramsAllocator, first, v15);
      v16 += v25;
      first = v15;
      LODWORD(v17) = v17 + 1;
      ++v19;
    }
    while ( v19 < v51 );
    p_m_textureAllocator = v54;
    v18 = v51;
  }
  if ( (v16 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1205, ASSERT_TYPE_ASSERT, "(( packedDepth & TextureAllocator::DEPTH_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( packedDepth & TextureAllocator::DEPTH_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  GfxLightGridVolumeAtlas::TextureAllocator::CommitAlloc(p_m_textureAllocator, 0x40u, v16, 0, 0, 0);
  v17 = (int)v17;
  PartialAllocSlice = -1;
  if ( (int)v17 < v18 )
  {
    v30 = -1;
    do
    {
      v31 = _Last[v17];
      _RCX = _Pred.blocksToPack;
      _RAX = 2 * v31;
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx+rax*8]
        vmovd   ebx, xmm0
        vmovups [rsp+18D8h+var_1868], xmm0
      }
      if ( (unsigned __int16)_EBX >= 0x40u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1217, ASSERT_TYPE_ASSERT, "(blockToPack.widthHeight < ATLAS_WIDTH)", (const char *)&queryFormat, "blockToPack.widthHeight < ATLAS_WIDTH") )
        __debugbreak();
      outX = 0;
      outY = 0;
      if ( PartialAllocSlice == -1 || !GfxLightGridVolumeAtlas::TextureAllocator::PreallocateInPartialAllocSlice(p_m_textureAllocator, PartialAllocSlice, (unsigned __int16)_EBX, &outX, &outY) )
      {
        PartialAllocSlice = GfxLightGridVolumeAtlas::TextureAllocator::CreatePartialAllocSlice(p_m_textureAllocator, v16 >> 2);
        v30 = v16;
        v16 += 16;
        if ( !GfxLightGridVolumeAtlas::TextureAllocator::PreallocateInPartialAllocSlice(p_m_textureAllocator, PartialAllocSlice, (unsigned __int16)_EBX, &outX, &outY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1232, ASSERT_TYPE_ASSERT, "(packedToNew)", (const char *)&queryFormat, "packedToNew") )
          __debugbreak();
      }
      v36 = outY;
      v37 = (unsigned __int16)_EBX;
      v38 = outX;
      GfxLightGridVolumeAtlas::TextureAllocator::CommitInPartialAllocSlice(v54, PartialAllocSlice, v37, outX, outY);
      v39 = v52;
      v40 = &v52->m_depth + 4 * v31;
      v40[134] = v38;
      v41 = DWORD1(v55);
      v40[135] = v36;
      v39->m_packing[v31].textureDepth = v30;
      v15 = first + v41;
      v40[137] = first;
      GfxLightGridVolumeAtlas::ParamsAllocator::MarkUsed(p_m_paramsAllocator, first, v15);
      p_m_textureAllocator = v54;
      ++v17;
      first = v15;
    }
    while ( v17 < v51 );
    v13 = 2048;
  }
  v42 = v56;
  v43 = v52;
  v44 = 1572864;
  if ( (int)(v16 + v56->m_repackExtraSlicesAlloc) < 2048 )
    v13 = v16 + v56->m_repackExtraSlicesAlloc;
  v52->m_depth = v13;
  if ( (int)(v15 + v42->m_repackExtraVolumeSlotsAlloc) < 1572864 )
    v44 = v15 + v42->m_repackExtraVolumeSlotsAlloc;
  v43->m_numVolumes = v44;
  if ( (v13 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1351, ASSERT_TYPE_ASSERT, "(( depth & DEPTH_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( depth & DEPTH_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  v43->m_textureAllocator.m_numUnits = v13 >> 2;
  m_numVolumes = v43->m_numVolumes;
  if ( !p_m_paramsAllocator->m_numRanges && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1718, ASSERT_TYPE_ASSERT, "(m_numRanges > 0)", (const char *)&queryFormat, "m_numRanges > 0") )
    __debugbreak();
  if ( p_m_paramsAllocator->m_ranges[p_m_paramsAllocator->m_numRanges - 1].end < m_numVolumes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1719, ASSERT_TYPE_ASSERT, "(m_ranges[m_numRanges - 1].end >= size)", (const char *)&queryFormat, "m_ranges[m_numRanges - 1].end >= size") )
    __debugbreak();
  if ( (*(_BYTE *)&p_m_paramsAllocator->m_ranges[p_m_paramsAllocator->m_numRanges - 1] & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1720, ASSERT_TYPE_ASSERT, "(!m_ranges[m_numRanges - 1].used)", (const char *)&queryFormat, "!m_ranges[m_numRanges - 1].used") )
    __debugbreak();
  p_m_paramsAllocator->m_ranges[p_m_paramsAllocator->m_numRanges - 1].end = m_numVolumes;
}

/*
==============
GfxLightGridVolumeAtlas::PostCopy
==============
*/
void GfxLightGridVolumeAtlas::PostCopy(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *computeState, GfxLightGridVolumeAtlas::AtlasState *targetState)
{
  GfxTextureId *p_textureId; 
  __int64 v6; 
  const GfxTexture *Resident; 

  p_textureId = &targetState->m_texture[0].textureId;
  v6 = 2i64;
  do
  {
    if ( !RB_BackendDataCopier::RemoveRenderableCopyDest(&rbBackendDataCopier, 1u, *p_textureId) )
    {
      Resident = R_Texture_GetResident(*p_textureId);
      R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    p_textureId += 58;
    --v6;
  }
  while ( v6 );
  if ( !RB_BackendDataCopier::RemoveRenderableCopyDest(&rbBackendDataCopier, 1u, &targetState->m_lgvTransformParams) )
    R_HW_AddResourceTransition(computeState, &targetState->m_lgvTransformParams, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  if ( !RB_BackendDataCopier::RemoveRenderableCopyDest(&rbBackendDataCopier, 1u, &targetState->m_lgvPackingParams) )
    R_HW_AddResourceTransition(computeState, &targetState->m_lgvPackingParams, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::Preallocate
==============
*/
char GfxLightGridVolumeAtlas::ParamsAllocator::Preallocate(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int allocSize, unsigned int *outOffset)
{
  unsigned int m_numRanges; 
  unsigned int v4; 
  int v5; 

  m_numRanges = this->m_numRanges;
  v4 = 0;
  if ( !m_numRanges )
    return 0;
  while ( 1 )
  {
    if ( (*(_DWORD *)this->m_ranges & 1) == 0 )
    {
      v5 = *(_DWORD *)this->m_ranges >> 1;
      if ( this->m_ranges[0].end - v5 >= allocSize )
        break;
    }
    ++v4;
    this = (GfxLightGridVolumeAtlas::ParamsAllocator *)((char *)this + 8);
    if ( v4 >= m_numRanges )
      return 0;
  }
  *outOffset = v5;
  return 1;
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::Preallocate
==============
*/
bool GfxLightGridVolumeAtlas::TextureAllocator::Preallocate(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int allocWidthHeight, unsigned int allocDepth, unsigned int *outX, unsigned int *outY, unsigned int *outDepth)
{
  unsigned int v10; 
  unsigned int *v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int PartialAllocSlice; 
  unsigned int *v16; 
  unsigned int *v17; 
  unsigned int v18; 

  if ( (allocDepth & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1564, ASSERT_TYPE_ASSERT, "(( allocDepth & DEPTH_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( allocDepth & DEPTH_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  if ( (allocWidthHeight & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1565, ASSERT_TYPE_ASSERT, "(( allocWidthHeight & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( allocWidthHeight & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  v10 = allocDepth >> 2;
  if ( allocWidthHeight >= 0x40 )
  {
    v16 = outY;
    v17 = outDepth;
    *outX = 0;
    *v16 = 0;
    return GfxLightGridVolumeAtlas::TextureAllocator::PreallocateDepthUnits(this, v10, v17);
  }
  else
  {
    if ( v10 != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1570, ASSERT_TYPE_ASSERT, "(!isPartialAlloc || ( numDepthUnits == PARTIAL_ALLOC_NUM_SLICES ))", (const char *)&queryFormat, "!isPartialAlloc || ( numDepthUnits == PARTIAL_ALLOC_NUM_SLICES )") )
      __debugbreak();
    if ( allocDepth != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1581, ASSERT_TYPE_ASSERT, "(allocDepth == PARTIAL_ALLOC_NUM_SLICES * DEPTH_ALLOCATION_UNIT)", (const char *)&queryFormat, "allocDepth == PARTIAL_ALLOC_NUM_SLICES * DEPTH_ALLOCATION_UNIT") )
      __debugbreak();
    v11 = outY;
    v12 = 0;
    if ( this->m_numPartialAllocSlices )
    {
      while ( !GfxLightGridVolumeAtlas::TextureAllocator::PreallocateInPartialAllocSlice(this, v12, allocWidthHeight, outX, v11) )
      {
        if ( ++v12 >= this->m_numPartialAllocSlices )
          goto LABEL_17;
      }
      *outDepth = 4 * this->m_partialAllocSlices[v12].m_depthSlice;
      return 1;
    }
    else
    {
LABEL_17:
      v18 = 0;
      if ( GfxLightGridVolumeAtlas::TextureAllocator::PreallocateDepthUnits(this, 4u, &v18) )
      {
        v13 = v18;
        PartialAllocSlice = GfxLightGridVolumeAtlas::TextureAllocator::CreatePartialAllocSlice(this, v18 >> 2);
        *outDepth = v13;
        return GfxLightGridVolumeAtlas::TextureAllocator::PreallocateInPartialAllocSlice(this, PartialAllocSlice, allocWidthHeight, outX, v11);
      }
      else
      {
        return 0;
      }
    }
  }
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::PreallocateDepthUnits
==============
*/
char GfxLightGridVolumeAtlas::TextureAllocator::PreallocateDepthUnits(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int numDepthUnits, unsigned int *outDepth)
{
  int v3; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int m_numUnits; 
  int v10; 
  unsigned int *v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  int v15; 
  unsigned int v16; 
  int v17; 
  unsigned int *v18; 
  unsigned int v19; 
  unsigned int v20; 
  int v21; 
  __int64 v23; 
  __int64 v24; 

  v3 = 0;
  if ( (int)(this->m_numUnits - numDepthUnits) < 0 )
    return 0;
  while ( 1 )
  {
    if ( (unsigned int)v3 >= 0x200 )
    {
      LODWORD(v24) = 512;
      LODWORD(v23) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 514, ASSERT_TYPE_ASSERT, "(unsigned)( pos ) < (unsigned)( wordCount * BITS_PER_WORD )", "pos doesn't index wordCount * BITS_PER_WORD\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    v7 = (unsigned int)v3 >> 5;
    if ( (v3 & 0x1F) != 0 )
    {
      v8 = __lzcnt((0xFFFFFFFF >> (v3 & 0x1F)) & this->m_allocationUnits.array[v7]);
      if ( v8 < 0x20 )
      {
        m_numUnits = v8 + 32 * v7;
        goto LABEL_15;
      }
      if ( (_DWORD)v7 == 15 )
      {
        m_numUnits = 512;
        goto LABEL_15;
      }
      v7 = (unsigned int)(v7 + 1);
    }
    v10 = 0;
    v11 = &this->m_allocationUnits.array[v7];
    v12 = 0;
    if ( (_DWORD)v7 != 16 )
    {
      do
      {
        v13 = __lzcnt(*v11);
        v10 += v13;
        if ( v13 < 0x20 )
          break;
        ++v12;
        ++v11;
      }
      while ( v12 < 16 - (int)v7 );
    }
    m_numUnits = v10 + 32 * v7;
LABEL_15:
    if ( this->m_numUnits < (signed int)m_numUnits )
      m_numUnits = this->m_numUnits;
    if ( (int)(m_numUnits - v3) >= (int)numDepthUnits )
      break;
    if ( m_numUnits >= 0x200 )
    {
      LODWORD(v24) = 512;
      LODWORD(v23) = m_numUnits;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 514, ASSERT_TYPE_ASSERT, "(unsigned)( pos ) < (unsigned)( wordCount * BITS_PER_WORD )", "pos doesn't index wordCount * BITS_PER_WORD\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    v14 = m_numUnits >> 5;
    v15 = m_numUnits & 0x1F;
    if ( !v15 )
      goto LABEL_27;
    v16 = __lzcnt((0xFFFFFFFF >> v15) & ~this->m_allocationUnits.array[v14]);
    if ( v16 >= 0x20 )
    {
      if ( (_DWORD)v14 != 15 )
      {
        v14 = (unsigned int)(v14 + 1);
LABEL_27:
        v17 = 0;
        v18 = &this->m_allocationUnits.array[v14];
        v19 = 0;
        if ( (_DWORD)v14 != 16 )
        {
          do
          {
            v20 = __lzcnt(~*v18);
            v17 += v20;
            if ( v20 < 0x20 )
              break;
            ++v19;
            ++v18;
          }
          while ( v19 < 16 - (int)v14 );
        }
        v3 = v17 + 32 * v14;
        goto LABEL_31;
      }
      v3 = 512;
    }
    else
    {
      v3 = v16 + 32 * v14;
    }
LABEL_31:
    v21 = this->m_numUnits;
    if ( v21 < v3 )
      v3 = this->m_numUnits;
    if ( v3 > (int)(v21 - numDepthUnits) )
      return 0;
  }
  *outDepth = 4 * v3;
  return 1;
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::PreallocateInPartialAllocSlice
==============
*/
char GfxLightGridVolumeAtlas::TextureAllocator::PreallocateInPartialAllocSlice(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int partialSliceIndex, unsigned int size, unsigned int *outX, unsigned int *outY)
{
  __int64 v6; 
  unsigned int v9; 
  GfxLightGridVolumeAtlas::TextureAllocator::PartialAllocSlice *v10; 
  unsigned int v11; 
  int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  _DWORD *v21; 
  __int64 v23; 

  v6 = partialSliceIndex;
  if ( (size & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1467, ASSERT_TYPE_ASSERT, "(( size & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( size & WIDTH_HEIGHT_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  v9 = (size >> 3) * (size >> 3);
  if ( ((v9 - 1) & v9) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1473, ASSERT_TYPE_ASSERT, "(( numAllocUnits & ( numAllocUnits - 1 ) ) == 0)", (const char *)&queryFormat, "( numAllocUnits & ( numAllocUnits - 1 ) ) == 0") )
    __debugbreak();
  if ( (((_BYTE)v9 - 1) & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1474, ASSERT_TYPE_ASSERT, "(( NUM_PARTIAL_ALLOC_UNITS_PER_SLICE & ( numAllocUnits - 1 ) ) == 0)", (const char *)&queryFormat, "( NUM_PARTIAL_ALLOC_UNITS_PER_SLICE & ( numAllocUnits - 1 ) ) == 0") )
    __debugbreak();
  v10 = &this->m_partialAllocSlices[v6];
  v11 = 0;
  while ( 1 )
  {
    v23 = 0i64;
    if ( v9 )
    {
      v12 = 64;
      if ( v11 + v9 < 0x40 )
        v12 = v11 + v9;
      v13 = 0xFFFFFFFF >> (v11 & 0x1F);
      v14 = v11 >> 5;
      v15 = (unsigned int)(v12 - 1) >> 5;
      v16 = *((_DWORD *)&v23 + v14);
      v17 = -1 << (31 - ((v12 - 1) & 0x1F));
      if ( (_DWORD)v14 == (_DWORD)v15 )
      {
        *((_DWORD *)&v23 + v14) = v16 | v13 & v17;
      }
      else
      {
        v18 = v13 | v16;
        v19 = (unsigned int)(v14 + 1);
        *((_DWORD *)&v23 + v14) = v18;
        if ( (unsigned int)v19 < (unsigned int)v15 )
        {
          v20 = (unsigned int)(v15 - v19);
          v21 = (_DWORD *)&v23 + v19;
          while ( v20 )
          {
            *v21++ = -1;
            --v20;
          }
        }
        *((_DWORD *)&v23 + v15) |= v17;
      }
    }
    if ( (v23 & *(_QWORD *)&v10->m_used) == 0 )
      break;
    v11 += v9;
    if ( v11 >= 0x40 )
      return 0;
  }
  *outX = 8 * (((v11 & 0x15 ^ ((unsigned __int8)(v11 & 0x15) >> 1)) & 0x33 ^ ((unsigned __int8)((v11 & 0x15 ^ ((unsigned __int8)(v11 & 0x15) >> 1)) & 0x33) >> 2)) & 7);
  *outY = 8 * ((((v11 >> 1) & 0x15 ^ (((v11 >> 1) & 0x15) >> 1)) & 0x33 ^ ((unsigned __int8)(((v11 >> 1) & 0x15 ^ (((v11 >> 1) & 0x15) >> 1)) & 0x33) >> 2)) & 7);
  return 1;
}

/*
==============
GfxLightGridVolumeAtlas::PrepareCopyDestAndFlush
==============
*/
void GfxLightGridVolumeAtlas::PrepareCopyDestAndFlush(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *computeState, GfxLightGridVolumeAtlas::AtlasState *targetState, bool targetStateActive)
{
  GfxTextureId *p_textureId; 
  __int64 v7; 
  const GfxTexture *Resident; 

  if ( !targetStateActive )
  {
    p_textureId = &targetState->m_texture[0].textureId;
    v7 = 2i64;
    do
    {
      Resident = R_Texture_GetResident(*p_textureId);
      R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      p_textureId += 58;
      --v7;
    }
    while ( v7 );
    R_HW_AddResourceTransition(computeState, &targetState->m_lgvTransformParams, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(computeState, &targetState->m_lgvPackingParams, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  R_FlushResourceTransitions(computeState);
}

/*
==============
GfxLightGridVolumeAtlas::PrepareCopySource
==============
*/
void GfxLightGridVolumeAtlas::PrepareCopySource(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *computeState, GfxLightGridVolumeAtlasDataTemp *lgvBlock)
{
  R_HW_AddResourceTransition(computeState, &lgvBlock->m_transformParamsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_AddResourceTransition(computeState, &lgvBlock->m_packingParamsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
}

/*
==============
GfxLightGridVolumeAtlas::PrepareForCopy
==============
*/
void GfxLightGridVolumeAtlas::PrepareForCopy(GfxLightGridVolumeAtlas *this, GfxLightGridVolumeAtlas::AtlasState *targetState)
{
  __int64 v4; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  char *v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  unsigned int v16; 
  unsigned int CardMemoryAmount; 
  __int64 v20; 
  unsigned __int64 m_textureVARangeAllocOffset; 
  unsigned __int8 *initialData; 
  char *v23; 
  int v24; 
  unsigned int v25; 
  unsigned int v26; 
  int v27; 
  unsigned int v29; 
  int v33; 
  unsigned int v36; 
  __int64 v37; 
  unsigned int i; 
  unsigned int numElems; 
  unsigned __int8 *v40; 
  __m256i v41; 
  __m256i v42; 
  Image_SetupParams v45; 
  Image_SetupParams params; 
  Image_SetupParams v47; 
  char v48; 
  char v49; 
  char v50; 
  char v51; 

  if ( this->m_state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 743, ASSERT_TYPE_ASSERT, "(m_state == State::IDLE)", (const char *)&queryFormat, "m_state == State::IDLE") )
    __debugbreak();
  GfxLightGridVolumeAtlas::InitAtlasState(this, targetState);
  GfxLightGridVolumeAtlas::Pack(this, this->m_lgvBlocks, &this->m_lgvBlocksUsed, targetState);
  v4 = 2i64;
  _RBX = &v50;
  _R13 = (char *)this - &v48;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx+r13-0Ch]
      vmovsd  xmm1, qword ptr [rbx+r13+4]
      vmovups xmmword ptr [rbx-0Ch], xmm0
      vmovsd  qword ptr [rbx+4], xmm1
    }
    v9 = *(unsigned __int16 *)_RBX << 6;
    if ( v9 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v9, "signed", v9) )
      __debugbreak();
    *(_WORD *)_RBX = v9;
    v10 = *((unsigned __int16 *)_RBX + 1) << 6;
    if ( v10 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v10, "signed", v10) )
      __debugbreak();
    *((_WORD *)_RBX + 1) = v10;
    v11 = targetState->m_depth * *((unsigned __int16 *)_RBX + 2);
    if ( v11 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v11, "unsigned", v11) )
      __debugbreak();
    *((_WORD *)_RBX + 2) = v11;
    _RBX += 24;
    --v4;
  }
  while ( v4 );
  v12 = &v51;
  v13 = 2i64;
  numElems = targetState->m_numVolumes;
  v14 = 0;
  do
  {
    v15 = (unsigned __int8)v12[6];
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+0E0h+var_160+8], xmm0
    }
    v41.m256i_i32[0] = *((unsigned __int16 *)v12 - 1);
    v41.m256i_i32[1] = *(unsigned __int16 *)v12;
    v41.m256i_i32[2] = *((unsigned __int16 *)v12 + 1);
    v41.m256i_i32[3] = *((unsigned __int16 *)v12 + 2);
    v42.m256i_i64[0] = 0i64;
    v42.m256i_i32[6] = -1;
    v16 = Image_CountMipmaps(v41.m256i_u32[0], v41.m256i_u32[1], v41.m256i_u32[2]);
    __asm { vmovups ymm1, [rbp+0E0h+var_160] }
    v41.m256i_i32[5] = *(_DWORD *)(v12 - 10);
    if ( v16 == v15 )
      v15 = 0;
    v41.m256i_i32[6] = *(_DWORD *)(v12 - 14);
    v41.m256i_i32[4] = v15;
    __asm
    {
      vmovups ymm0, [rsp+1E0h+var_180]
      vmovups ymmword ptr [rbp+0E0h+params.width], ymm0
      vmovups ymmword ptr [rbp+0E0h+params.customAllocFunc], ymm1
    }
    CardMemoryAmount = Image_GetCardMemoryAmount(&params);
    if ( (_BYTE)CardMemoryAmount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 766, ASSERT_TYPE_ASSERT, "(IsAligned( size, R_IMAGE_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( size, R_IMAGE_ALIGNMENT )") )
      __debugbreak();
    v14 += CardMemoryAmount;
    v12 += 24;
    --v13;
  }
  while ( v13 );
  v20 = (96 * numElems + 0xFFFF + v14) & 0xFFFF0000;
  if ( (unsigned int)v20 > this->m_textureVARangeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 773, ASSERT_TYPE_ASSERT, "( vaSize ) <= ( m_textureVARangeSize )", "%s <= %s\n\t%llu, %llu", "vaSize", "m_textureVARangeSize", (unsigned int)v20, this->m_textureVARangeSize) )
    __debugbreak();
  m_textureVARangeAllocOffset = this->m_textureVARangeAllocOffset;
  if ( m_textureVARangeAllocOffset + v20 > this->m_textureVARangeSize )
  {
    if ( g_gpuSwapFrame - this->m_textureVARangeWrapFrame < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 779, ASSERT_TYPE_ASSERT, "(g_gpuSwapFrame - m_textureVARangeWrapFrame >= 3)", (const char *)&queryFormat, "g_gpuSwapFrame - m_textureVARangeWrapFrame >= 3") )
      __debugbreak();
    this->m_textureVARangeAllocOffset = 0i64;
    m_textureVARangeAllocOffset = this->m_textureVARangeAllocOffset;
    this->m_textureVARangeWrapFrame = g_gpuSwapFrame;
  }
  initialData = &this->m_textureVARangeStart[m_textureVARangeAllocOffset];
  v40 = initialData;
  RB_BackendDataCopier::CommitMem(&rbBackendDataCopier, 1u, initialData, &initialData[v20], &targetState->m_streamerMemLoan, &targetState->m_texturePageRange, "lgv atlas");
  if ( ((unsigned __int8)&s_lightgridCommitTotal & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_lightgridCommitTotal) )
    __debugbreak();
  _InterlockedExchangeAdd(&s_lightgridCommitTotal, v20);
  targetState->m_textureMem = initialData;
  v23 = &v49;
  targetState->m_textureMemSize = (unsigned int)v20;
  this->m_textureVARangeAllocOffset += (unsigned int)v20;
  for ( i = 0; i < 2; ++i )
  {
    v24 = *(_DWORD *)v23;
    if ( (*(_DWORD *)v23 & 0x10000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 808, ASSERT_TYPE_ASSERT, "(desc.flags & IMG_DISK_FLAG_MAPTYPE_3D)", (const char *)&queryFormat, "desc.flags & IMG_DISK_FLAG_MAPTYPE_3D") )
      __debugbreak();
    v25 = *((unsigned __int16 *)v23 + 5);
    v26 = *((unsigned __int16 *)v23 + 6);
    v27 = *((_DWORD *)v23 - 1);
    v41.m256i_i32[5] = v24 | 0x10000;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+0E0h+var_160+8], xmm0
    }
    v42.m256i_i64[0] = 0i64;
    v29 = *((unsigned __int16 *)v23 + 4);
    v42.m256i_i32[6] = -1;
    __asm
    {
      vmovups ymm1, [rbp+0E0h+var_160]
      vmovups ymmword ptr [rbp+0E0h+var_130.customAllocFunc], ymm1
    }
    *(_OWORD *)&v45.customLayout = *(_OWORD *)&_RT0.m256i_u64[2];
    v45.customAllocFunc = lambda_88778504a5b7e76e23af5feb0e5be0e9_::_lambda_invoker_cdecl_;
    *(__int64 *)((char *)&v41.m256i_i64[1] + 4) = 1i64;
    v41.m256i_i64[0] = __PAIR64__(v25, v29);
    v41.m256i_i32[2] = v26;
    v41.m256i_i32[6] = v27;
    __asm
    {
      vmovups ymm0, [rsp+1E0h+var_180]
      vmovups ymmword ptr [rbp+0E0h+var_130.width], ymm0
    }
    v45.customAllocUserData = initialData;
    Image_Setup(&targetState->m_texture[i], &v45);
    v33 = (unsigned __int8)v23[16];
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v41.m256i_i32[3] = *((unsigned __int16 *)v23 + 7);
    __asm { vmovdqu xmmword ptr [rbp+0E0h+var_160+8], xmm0 }
    v42.m256i_i64[0] = 0i64;
    v42.m256i_i32[6] = -1;
    v41.m256i_i64[0] = __PAIR64__(v25, v29);
    v41.m256i_i32[2] = v26;
    __asm { vmovups ymm1, [rbp+0E0h+var_160] }
    v41.m256i_i32[5] = v24;
    v41.m256i_i32[6] = v27;
    if ( Image_CountMipmaps(v29, v25, v26) == v33 )
      v33 = 0;
    v41.m256i_i32[4] = v33;
    __asm
    {
      vmovups ymm0, [rsp+1E0h+var_180]
      vmovups ymmword ptr [rbp+0E0h+var_B0.width], ymm0
      vmovups ymmword ptr [rbp+0E0h+var_B0.customAllocFunc], ymm1
    }
    v36 = Image_GetCardMemoryAmount(&v47);
    v37 = v36;
    if ( (_BYTE)v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 820, ASSERT_TYPE_ASSERT, "(IsAligned( textureAllocSize, R_IMAGE_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( textureAllocSize, R_IMAGE_ALIGNMENT )") )
      __debugbreak();
    v23 += 24;
    initialData = &v40[v37];
    v40 = initialData;
  }
  R_CreateGfxWrappedBuffer(&targetState->m_lgvTransformParams, GfxWrappedBuffer_Structured, 64, numElems, GFX_DATA_FORMAT_R32_UINT, 8u, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, initialData, "LGV atlas transform params");
  R_CreateGfxWrappedBuffer(&targetState->m_lgvPackingParams, GfxWrappedBuffer_Structured, 32, numElems, GFX_DATA_FORMAT_R32_UINT, 8u, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, &initialData[64 * (unsigned __int64)numElems], "LGV atlas packing params");
  this->m_flipTexturePending = 1;
}

/*
==============
GfxLightGridVolumeAtlas::PrepareForCopyToActiveAtlas
==============
*/
void GfxLightGridVolumeAtlas::PrepareForCopyToActiveAtlas(GfxLightGridVolumeAtlas *this, GfxLightGridVolumeAtlas::AtlasState *targetState)
{
  GfxTextureId *p_textureId; 
  __int64 v4; 

  p_textureId = &targetState->m_texture[0].textureId;
  v4 = 2i64;
  do
  {
    RB_BackendDataCopier::AddRenderableCopyDest(&rbBackendDataCopier, 1u, *p_textureId);
    p_textureId += 58;
    --v4;
  }
  while ( v4 );
  RB_BackendDataCopier::AddRenderableCopyDest(&rbBackendDataCopier, 1u, &targetState->m_lgvTransformParams);
  RB_BackendDataCopier::AddRenderableCopyDest(&rbBackendDataCopier, 1u, &targetState->m_lgvPackingParams);
}

/*
==============
GfxLightGridVolumeAtlas::PrepareRenderResources
==============
*/
void GfxLightGridVolumeAtlas::PrepareRenderResources(GfxLightGridVolumeAtlas *this, const GfxBackEndData *data)
{
  __int64 v2; 

  v2 = ((unsigned __int8)data->lightGridVolumesAtlasIndex - 1) & 1;
  this->m_renderAtlasState[v2] = this->m_activeAtlasState;
  this->m_renderPackingBuffer[v2] = this->m_activePackingBuffer;
}

/*
==============
GfxLightGridVolumeAtlas::ProcessRemovedBlocks
==============
*/
void GfxLightGridVolumeAtlas::ProcessRemovedBlocks(GfxLightGridVolumeAtlas *this)
{
  GfxLightGridVolumeAtlas *v1; 
  volatile int m_writePtr; 
  volatile int m_readPtr; 
  threadId_t m_consumerThreadId; 
  threadId_t CurrentThreadId; 
  volatile int v6; 
  unsigned int m_packed; 
  char v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  int m_activeAtlasState; 
  __int64 v15; 
  int *v16; 
  unsigned __int64 v17; 
  unsigned int v18; 
  unsigned int *v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int textureDepth; 
  unsigned int paramsOffset; 
  unsigned int textureX; 
  unsigned int textureY; 
  GfxLightGridVolumeAtlas *v26; 
  __int64 v27; 
  bool v28; 
  signed __int32 v29[8]; 
  unsigned int Z[2]; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  char v34; 
  GfxLightGridVolumeAtlas *v35; 
  int *v36; 
  __int64 v37; 
  GfxLightGridVolumeAtlas::AtlasState *v38; 
  GfxLightGridVolumeAtlas::ParamsAllocator *p_m_paramsAllocator; 
  GfxLightGridVolumeAtlas::TextureAllocator *p_m_textureAllocator; 
  int v41[1536]; 

  v1 = this;
  v35 = this;
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1044, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  m_writePtr = v1->m_zonesToFree.m_writePtr;
  m_readPtr = v1->m_zonesToFree.m_readPtr;
  v34 = 0;
  if ( m_writePtr != m_readPtr )
  {
    do
    {
      m_consumerThreadId = v1->m_zonesToFree.m_consumerThreadId;
      CurrentThreadId = Sys_GetCurrentThreadId();
      if ( m_consumerThreadId )
      {
        if ( v1->m_zonesToFree.m_consumerThreadId != CurrentThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 42, ASSERT_TYPE_ASSERT, "(m_consumerThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "m_consumerThreadId == Sys_GetCurrentThreadId()") )
          __debugbreak();
      }
      else
      {
        v1->m_zonesToFree.m_consumerThreadId = CurrentThreadId;
      }
      if ( v1->m_zonesToFree.m_writePtr == v1->m_zonesToFree.m_readPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 113, ASSERT_TYPE_ASSERT, "(!Empty())", (const char *)&queryFormat, "!Empty()") )
        __debugbreak();
      v6 = v1->m_zonesToFree.m_readPtr;
      _InterlockedOr(v29, 0);
      m_packed = v1->m_zonesToFree.m_items[v6 & 0x3FF].m_packed;
      ++v1->m_zonesToFree.m_readPtr;
      if ( m_packed == v1->m_zonePendingAdd.m_packed )
      {
        v8 = 1;
        v34 = 1;
      }
      else
      {
        v9 = v1->m_lgvBlocksUsed.array[0];
        v10 = 0i64;
        LODWORD(v11) = 0;
        while ( v9 )
        {
LABEL_19:
          v12 = __lzcnt(v9);
          v13 = v12 + 32 * v11;
          if ( v12 >= 0x20 )
          {
            LODWORD(v31) = 32;
            Z[0] = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", *(_QWORD *)Z, v31) )
              __debugbreak();
          }
          if ( (v9 & (0x80000000 >> v12)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
            __debugbreak();
          v9 &= ~(0x80000000 >> v12);
          v1 = v35;
          if ( v35->m_lgvBlocks[v13].transientZone.m_packed == m_packed )
          {
            v41[v10] = v13;
            v10 = (unsigned int)(v10 + 1);
          }
        }
        while ( 1 )
        {
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= 0x30 )
            break;
          v9 = v1->m_lgvBlocksUsed.array[v11];
          if ( v9 )
            goto LABEL_19;
        }
        if ( v1->m_state == INITIALIZING && v1->m_flipTexturePending )
          m_activeAtlasState = 1 - v1->m_activeAtlasState;
        else
          m_activeAtlasState = v1->m_activeAtlasState;
        v15 = m_activeAtlasState;
        v38 = &v1->m_atlasState[v15];
        if ( (int)v10 > 0 )
        {
          p_m_paramsAllocator = &v1->m_atlasState[v15].m_paramsAllocator;
          p_m_textureAllocator = &v1->m_atlasState[v15].m_textureAllocator;
          v16 = v41;
          v36 = v41;
          v37 = (unsigned int)v10;
          do
          {
            v17 = (unsigned int)*v16;
            if ( (unsigned int)v17 >= 0x600 )
            {
              LODWORD(v31) = 1536;
              Z[0] = v17;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", *(_QWORD *)Z, v31) )
                __debugbreak();
            }
            v18 = 0x80000000 >> (v17 & 0x1F);
            v19 = &v1->m_lgvBlocksUsed.array[v17 >> 5];
            if ( (v18 & *v19) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1080, ASSERT_TYPE_ASSERT, "(m_lgvBlocksUsed.testBit( blockIndex ))", (const char *)&queryFormat, "m_lgvBlocksUsed.testBit( blockIndex )") )
              __debugbreak();
            if ( v1->m_lgvBlocks[v17].transientZone.m_packed != m_packed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1081, ASSERT_TYPE_ASSERT, "(m_lgvBlocks[blockIndex].transientZone.m_packed == zoneToFree.m_packed)", (const char *)&queryFormat, "m_lgvBlocks[blockIndex].transientZone.m_packed == zoneToFree.m_packed") )
              __debugbreak();
            v20 = (__int64)v38;
            v21 = 2 * v17;
            textureDepth = v38->m_packing[v17].textureDepth;
            paramsOffset = v38->m_packing[v17].paramsOffset;
            textureX = v38->m_packing[v17].textureX;
            textureY = v38->m_packing[v17].textureY;
            v38->m_packing[v17].textureDepth = -1;
            v26 = v35;
            *(_QWORD *)(v20 + 8 * v21 + 536) = -1i64;
            *(_DWORD *)(v20 + 8 * v21 + 548) = -1;
            GfxLightGridVolumeAtlas::ParamsAllocator::MarkFree(p_m_paramsAllocator, paramsOffset, paramsOffset + v26->m_lgvBlocks[v17].numVolumes);
            GfxLightGridVolumeAtlas::TextureAllocator::Free(p_m_textureAllocator, v35->m_lgvBlocks[v17].widthHeight, v35->m_lgvBlocks[v17].depth, textureX, textureY, textureDepth);
            if ( (unsigned int)v17 >= 0x600 )
            {
              LODWORD(v33) = 1536;
              LODWORD(v32) = v17;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v32, v33) )
                __debugbreak();
            }
            v27 = (__int64)v36;
            *v19 &= ~v18;
            v16 = (int *)(v27 + 4);
            v28 = v37-- == 1;
            v1 = v35;
            v36 = v16;
          }
          while ( !v28 );
        }
        v8 = v34;
      }
    }
    while ( v1->m_zonesToFree.m_writePtr != v1->m_zonesToFree.m_readPtr );
    if ( v8 )
    {
      if ( v1->m_zonePendingAdd.m_zoneIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1105, ASSERT_TYPE_ASSERT, "(m_zonePendingAdd.m_zoneIndex != INVALID_ZONE_INDEX)", (const char *)&queryFormat, "m_zonePendingAdd.m_zoneIndex != INVALID_ZONE_INDEX") )
        __debugbreak();
      GfxLightGridVolumeAtlas::RemoveLGVBlock(v1, v1->m_zonePendingAdd);
    }
  }
}

/*
==============
RB_IsLightGridVolumesAtlasIdle
==============
*/
bool RB_IsLightGridVolumesAtlasIdle()
{
  return g_lightGridVolumesAtlas.m_state == IDLE;
}

/*
==============
RB_ProcessGfxLightGridVolumeAtlasData
==============
*/
char RB_ProcessGfxLightGridVolumeAtlasData(GfxLightGridVolumeAtlasDataTemp *tempData, DB_BackendCallbackContext *context)
{
  DB_BackendCallbackContext::CallbackType callbackType; 
  unsigned int m_packed; 
  ComputeCmdBufState *computeState; 
  unsigned __int64 userData; 
  unsigned int i; 
  unsigned int copyDoneFence; 

  callbackType = context->callbackType;
  if ( callbackType == CALLBACK_TYPE_PROCESS )
  {
    if ( !context->userData )
    {
      m_packed = context->zoneId.m_packed;
      computeState = context->computeState;
      copyDoneFence = -1;
      if ( GfxLightGridVolumeAtlas::AddLGVBlock(&g_lightGridVolumesAtlas, computeState, tempData, (XZoneHandleUnique)m_packed, &copyDoneFence) )
        context->userData = copyDoneFence | 0xFFFFFFFF00000000ui64;
    }
    userData = context->userData;
    if ( userData && RB_BackendDataCopier::CheckTempFence(&rbBackendDataCopier, userData) )
    {
      RB_BackendDataCopier::FreeTempFence(&rbBackendDataCopier, userData);
      RB_DynamicLightsets_ForceTransientUpdate(tempData->m_worldTransient);
      return 1;
    }
    return 0;
  }
  if ( callbackType != CALLBACK_TYPE_RELEASE )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 2046, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
      __debugbreak();
    return 0;
  }
  for ( i = 0; i < 2; ++i )
    ImageRaw_Release(&tempData->m_textures[i]);
  R_ShutdownGfxWrappedBuffer(&tempData->m_transformParamsBuffer);
  R_ShutdownGfxWrappedBuffer(&tempData->m_packingParamsBuffer);
  return 1;
}

/*
==============
R_GetLightGridCommitTotal
==============
*/
unsigned __int64 R_GetLightGridCommitTotal()
{
  return s_lightgridCommitTotal;
}

/*
==============
R_GetLightGridVolumeAtlasTexture
==============
*/
GfxImage *R_GetLightGridVolumeAtlasTexture(const GfxBackEndData *data, GfxLightGridVolumeAtlasTextures textureType)
{
  GfxImage *result; 

  result = &g_lightGridVolumesAtlas.m_atlasState[g_lightGridVolumesAtlas.m_renderAtlasState[data->lightGridVolumesAtlasIndex & 1]].m_texture[textureType];
  if ( !result || result->textureId == NULLID )
    return rgp.whiteImage3D;
  return result;
}

/*
==============
R_GetLightGridVolumesAtlasPackingParamsBuffer
==============
*/
const GfxWrappedBuffer *R_GetLightGridVolumesAtlasPackingParamsBuffer(const GfxBackEndData *data)
{
  const GfxWrappedBuffer *result; 

  result = &g_lightGridVolumesAtlas.m_atlasState[g_lightGridVolumesAtlas.m_renderAtlasState[data->lightGridVolumesAtlasIndex & 1]].m_lgvPackingParams;
  if ( result->view.view < 2 )
    return &gfxBuf.dummyStructuredBuffer32;
  return result;
}

/*
==============
R_GetLightGridVolumesAtlasTextureDepth
==============
*/
__int64 R_GetLightGridVolumesAtlasTextureDepth(const GfxBackEndData *data)
{
  return g_lightGridVolumesAtlas.m_atlasState[g_lightGridVolumesAtlas.m_renderAtlasState[data->lightGridVolumesAtlasIndex & 1]].m_depth;
}

/*
==============
R_GetLightGridVolumesAtlasTransformParamsBuffer
==============
*/
const GfxWrappedBuffer *R_GetLightGridVolumesAtlasTransformParamsBuffer(const GfxBackEndData *data)
{
  const GfxWrappedBuffer *result; 

  result = &g_lightGridVolumesAtlas.m_atlasState[g_lightGridVolumesAtlas.m_renderAtlasState[data->lightGridVolumesAtlasIndex & 1]].m_lgvTransformParams;
  if ( result->view.view < 2 )
    return &gfxBuf.dummyStructuredBuffer64;
  return result;
}

/*
==============
R_GetLightGridVolumesAtlasTransientPackingBuffer
==============
*/
GfxWrappedBuffer *R_GetLightGridVolumesAtlasTransientPackingBuffer(const GfxBackEndData *data)
{
  GfxWrappedBuffer *result; 

  result = &g_lightGridVolumesAtlas.m_packingBuffer[g_lightGridVolumesAtlas.m_renderPackingBuffer[data->lightGridVolumesAtlasIndex & 1]];
  if ( result->view.view < 2 )
    return &gfxBuf.dummyBuffer;
  return result;
}

/*
==============
R_InitLightGridVolumesAtlas
==============
*/
void R_InitLightGridVolumesAtlas(void)
{
  GfxLightGridVolumeAtlas::Init(&g_lightGridVolumesAtlas);
}

/*
==============
R_IsLightGridVolumesAtlasEmpty
==============
*/
bool R_IsLightGridVolumesAtlasEmpty(const GfxBackEndData *data)
{
  return g_lightGridVolumesAtlas.m_atlasState[g_lightGridVolumesAtlas.m_renderAtlasState[data->lightGridVolumesAtlasIndex & 1]].m_depth == 0;
}

/*
==============
R_RemoveZoneLightGridVolumesFromAtlas
==============
*/
void R_RemoveZoneLightGridVolumesFromAtlas(XZoneHandleUnique transientZone)
{
  GfxLightGridVolumeAtlas::RemoveLGVBlock(&g_lightGridVolumesAtlas, transientZone);
}

/*
==============
R_ShutdownLightGridVolumesAtlas
==============
*/
void R_ShutdownLightGridVolumesAtlas(void)
{
  unsigned int i; 
  GfxLightGridVolumeAtlas::AtlasState *v1; 
  signed int j; 

  for ( i = 0; i < 2; ++i )
  {
    v1 = &g_lightGridVolumesAtlas.m_atlasState[i];
    for ( j = 0; (unsigned int)j < 2; ++j )
    {
      if ( !Image_IsReleased(&v1->m_texture[j]) )
        Image_Release(&v1->m_texture[j]);
    }
    R_ShutdownGfxWrappedBuffer(&v1->m_lgvTransformParams);
    R_ShutdownGfxWrappedBuffer(&v1->m_lgvPackingParams);
    R_ShutdownGfxWrappedBuffer(&g_lightGridVolumesAtlas.m_packingBuffer[i]);
  }
}

/*
==============
R_ToggleLightGridVolumesAtlasFrame
==============
*/
__int64 R_ToggleLightGridVolumesAtlasFrame()
{
  return ++GfxLightGridVolumeAtlas::sm_atlasFrame;
}

/*
==============
R_UpdateLightGridVolumesAtlas
==============
*/
void R_UpdateLightGridVolumesAtlas(const GfxBackEndData *data, ComputeCmdBufState *state)
{
  GfxLightGridVolumeAtlas::Update(&g_lightGridVolumesAtlas, data, state);
}

/*
==============
GfxLightGridVolumeAtlas::RemoveLGVBlock
==============
*/
void GfxLightGridVolumeAtlas::RemoveLGVBlock(GfxLightGridVolumeAtlas *this, XZoneHandleUnique transientZone)
{
  volatile int m_readPtr; 
  MPSCQueue<XZoneHandleUnique,1024> *p_m_zonesToFree; 
  volatile int *p_m_allocPtr; 
  signed __int32 v6; 
  volatile int *p_m_writePtr; 

  m_readPtr = this->m_zonesToFree.m_readPtr;
  p_m_zonesToFree = &this->m_zonesToFree;
  p_m_allocPtr = &this->m_zonesToFree.m_allocPtr;
  if ( (((_BYTE)this - 96) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_zonesToFree.m_allocPtr) )
    __debugbreak();
  v6 = _InterlockedExchangeAdd(p_m_allocPtr, 1u);
  if ( (unsigned int)(v6 - m_readPtr) >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 85, ASSERT_TYPE_ASSERT, "(( writeSlot - readSlot ) < QUEUED_ITEMS_MAX)", (const char *)&queryFormat, "( writeSlot - readSlot ) < QUEUED_ITEMS_MAX") )
    __debugbreak();
  p_m_zonesToFree->m_items[v6 & 0x3FF] = transientZone;
  p_m_writePtr = &p_m_zonesToFree->m_writePtr;
  while ( 1 )
  {
    if ( (((_BYTE)p_m_zonesToFree + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_writePtr) )
      __debugbreak();
    if ( v6 == _InterlockedCompareExchange(p_m_writePtr, v6 + 1, v6) )
      break;
    _mm_pause();
  }
}

/*
==============
GfxLightGridVolumeAtlas::ScheduleCopies
==============
*/
void GfxLightGridVolumeAtlas::ScheduleCopies(GfxLightGridVolumeAtlas *this, const GfxLightGridVolumeAtlas::LGVBlock *lgvBlocks, const bitarray<1536> *lgvBlocksUsed, const GfxLightGridVolumeAtlas::AtlasState *oldState, GfxLightGridVolumeAtlas::AtlasState *newState)
{
  unsigned int v5; 
  const GfxLightGridVolumeAtlas::LGVBlock *v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  GfxLightGridVolumeAtlas::AtlasState *v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned int widthHeight; 
  unsigned int *v16; 
  unsigned int v17; 
  unsigned int *v18; 
  unsigned int numVolumes; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  __int64 height; 
  __int64 depth; 
  unsigned int dstY; 
  unsigned int dstX; 
  unsigned int srcY; 
  unsigned int v28; 
  unsigned int width; 
  unsigned int srcX; 
  unsigned int dstZ; 

  v5 = lgvBlocksUsed->array[0];
  v8 = lgvBlocks;
  LODWORD(v9) = 0;
  while ( v5 )
  {
LABEL_5:
    v10 = __lzcnt(v5);
    v11 = v10 + 32 * v9;
    if ( v10 >= 0x20 )
    {
      LODWORD(depth) = 32;
      LODWORD(height) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", height, depth) )
        __debugbreak();
    }
    if ( (v5 & (0x80000000 >> v10)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v12 = newState;
    v5 &= ~(0x80000000 >> v10);
    v13 = v11;
    v14 = 2 * (v11 + 34i64);
    widthHeight = v8[v11].widthHeight;
    v16 = &oldState->m_depth + 4 * v11;
    v17 = v8[v11].depth;
    v18 = &newState->m_depth + 4 * v11;
    numVolumes = v8[v13].numVolumes;
    v20 = *(&oldState->m_depth + 2 * v14);
    dstX = v18[134];
    dstY = v18[135];
    width = widthHeight;
    v28 = v17;
    srcX = v16[134];
    srcY = v16[135];
    dstZ = *(&newState->m_depth + 2 * v14);
    if ( v20 != -1 )
    {
      GfxLightGridVolumeAtlas::ScheduleStackedTextureCopy(oldState->m_texture[0].textureId, v16[134], srcY, v20, widthHeight, widthHeight, v17, newState->m_texture[0].textureId, dstX, dstY, dstZ, 0x40u, 0x40u, oldState->m_depth, 0x40u, 0x40u, newState->m_depth, this->m_textureDescs[0].width, this->m_textureDescs[0].height, this->m_textureDescs[0].depth);
      GfxLightGridVolumeAtlas::ScheduleStackedTextureCopy(oldState->m_texture[1].textureId, srcX, srcY, v20, width, width, v28, newState->m_texture[1].textureId, dstX, dstY, dstZ, 0x40u, 0x40u, oldState->m_depth, 0x40u, 0x40u, newState->m_depth, this->m_textureDescs[1].width, this->m_textureDescs[1].height, this->m_textureDescs[1].depth);
      v12 = newState;
    }
    v21 = v16[137];
    v22 = v18[137];
    v8 = lgvBlocks;
    if ( v21 != -1 )
    {
      RB_BackendDataCopier::CopyData(&rbBackendDataCopier, 1u, &oldState->m_lgvTransformParams, v21 << 6, &v12->m_lgvTransformParams, v22 << 6, numVolumes << 6);
      RB_BackendDataCopier::CopyData(&rbBackendDataCopier, 1u, &oldState->m_lgvPackingParams, 32 * v21, &newState->m_lgvPackingParams, 32 * v22, 32 * numVolumes);
    }
  }
  while ( 1 )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 0x30 )
      break;
    v5 = lgvBlocksUsed->array[v9];
    if ( v5 )
      goto LABEL_5;
  }
}

/*
==============
GfxLightGridVolumeAtlas::ScheduleStackedTextureCopy
==============
*/
void GfxLightGridVolumeAtlas::ScheduleStackedTextureCopy(GfxTextureId srcTexture, unsigned int srcX, unsigned int srcY, unsigned int srcZ, unsigned int width, unsigned int height, unsigned int depth, GfxTextureId destTexture, unsigned int dstX, unsigned int dstY, unsigned int dstZ, unsigned int srcTextureBaseWidth, unsigned int srcTextureBaseHeight, unsigned int srcTextureBaseDepth, unsigned int dstTextureBaseWidth, unsigned int dstTextureBaseHeight, unsigned int destTextureBaseDepth, unsigned int numSplitsX, unsigned int numSplitsY, unsigned int numSplitsZ)
{
  unsigned int v20; 
  GfxTextureId v24; 
  signed int v25; 

  v20 = 0;
  v24 = srcTexture;
  v25 = numSplitsZ * numSplitsY * numSplitsX;
  if ( v25 > 0 )
  {
    do
    {
      RB_BackendDataCopier::CopyTexRect(&rbBackendDataCopier, 1u, v24, srcX + srcTextureBaseWidth * (v20 % numSplitsX), srcY + srcTextureBaseHeight * (v20 / numSplitsX % numSplitsY), srcZ + srcTextureBaseDepth * (v20 / numSplitsX / numSplitsY % numSplitsZ), 0, width, height, depth, destTexture, dstX + dstTextureBaseWidth * (v20 % numSplitsX), dstY + dstTextureBaseHeight * (v20 / numSplitsX % numSplitsY), dstZ + destTextureBaseDepth * (v20 / numSplitsX / numSplitsY % numSplitsZ), 0);
      v24 = srcTexture;
      ++v20;
    }
    while ( (int)v20 < v25 );
  }
}

/*
==============
GfxLightGridVolumeAtlas::ScheduleWaitForCopies
==============
*/
void GfxLightGridVolumeAtlas::ScheduleWaitForCopies(GfxLightGridVolumeAtlas *this)
{
  this->m_copyingFence = 0;
  RB_BackendDataCopier::InsertCPUFence(&rbBackendDataCopier, 1u, &this->m_copyingFence, 1u);
  this->m_state = INITIALIZING;
  this->m_numWaitFrames = 0;
}

/*
==============
GfxLightGridVolumeAtlas::ShouldDefragment
==============
*/

bool __fastcall GfxLightGridVolumeAtlas::ShouldDefragment(GfxLightGridVolumeAtlas *this, double _XMM1_8)
{
  int v3; 
  __int64 m_activeAtlasState; 
  unsigned int m_numUnits; 
  GfxLightGridVolumeAtlas::AtlasState *v7; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  __int64 v19; 
  unsigned __int64 *v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  __int64 v32; 
  unsigned int *v33; 
  unsigned int m_numRanges; 
  GfxLightGridVolumeAtlas::ParamsAllocator *p_m_paramsAllocator; 
  bool v38; 
  unsigned int v39; 
  __int64 v40; 
  bool v41; 
  int v48; 
  unsigned __int64 v49; 
  unsigned __int64 v50; 
  unsigned __int64 v51; 
  int v52; 
  int v53; 
  int v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 

  v3 = 0;
  __asm { vmovss  xmm2, cs:__real@3f800000 }
  m_activeAtlasState = this->m_activeAtlasState;
  m_numUnits = this->m_atlasState[m_activeAtlasState].m_textureAllocator.m_numUnits;
  v7 = &this->m_atlasState[m_activeAtlasState];
  _R10 = this;
  if ( m_numUnits )
  {
    v10 = 0;
    v11 = 0;
    v49 = 0i64;
    v12 = 0;
    v50 = 0i64;
    v13 = 0;
    v51 = 0i64;
    v14 = 0;
    v52 = 0;
    v15 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0i64;
    v56 = 0i64;
    v57 = 0i64;
    v16 = 512;
    if ( m_numUnits < 0x200 )
      v16 = m_numUnits;
    v17 = -1 << (31 - ((v16 - 1) & 0x1F));
    v18 = (unsigned int)(v16 - 1) >> 5;
    if ( v18 )
    {
      v48 = -1;
      if ( v18 > 1 )
      {
        v19 = v18 - 1;
        v20 = &v49;
        while ( v19 )
        {
          *(_DWORD *)v20 = -1;
          v20 = (unsigned __int64 *)((char *)v20 + 4);
          --v19;
        }
      }
      *(&v48 + v18) |= v17;
      v15 = HIDWORD(v51);
      v14 = v51;
      v11 = HIDWORD(v50);
      v13 = v50;
      v12 = HIDWORD(v49);
      v10 = v49;
      v17 = v48;
    }
    v21 = v7->m_textureAllocator.m_allocationUnits.array[0] & v17;
    v22 = v7->m_textureAllocator.m_allocationUnits.array[1] & v10;
    v23 = v7->m_textureAllocator.m_allocationUnits.array[2] & v12;
    v24 = v7->m_textureAllocator.m_allocationUnits.array[3] & v13;
    v25 = v7->m_textureAllocator.m_allocationUnits.array[4] & v11;
    v26 = v7->m_textureAllocator.m_allocationUnits.array[5] & v14;
    v27 = v7->m_textureAllocator.m_allocationUnits.array[6] & v15;
    v28 = v7->m_textureAllocator.m_allocationUnits.array[8] & v53;
    v29 = v7->m_textureAllocator.m_allocationUnits.array[9] & v54;
    v52 &= v7->m_textureAllocator.m_allocationUnits.array[7];
    v55 &= *(_QWORD *)&v7->m_textureAllocator.m_allocationUnits.array[10];
    v56 &= *(_QWORD *)&v7->m_textureAllocator.m_allocationUnits.array[12];
    LODWORD(v57) = v7->m_textureAllocator.m_allocationUnits.array[14] & v57;
    v30 = v7->m_textureAllocator.m_allocationUnits.array[15] & HIDWORD(v57);
    v48 = v21;
    v31 = 0;
    v49 = __PAIR64__(v23, v22);
    v32 = 16i64;
    v50 = __PAIR64__(v25, v24);
    v51 = __PAIR64__(v27, v26);
    v53 = v28;
    v33 = (unsigned int *)&v48;
    v54 = v29;
    HIDWORD(v57) = v30;
    do
    {
      v31 += __popcnt(*v33++);
      --v32;
    }
    while ( v32 );
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, rax
      vcvtsi2ss xmm0, xmm0, r11d
      vdivss  xmm3, xmm1, xmm0
    }
  }
  else
  {
    __asm { vmovaps xmm3, xmm2 }
  }
  m_numRanges = v7->m_paramsAllocator.m_numRanges;
  p_m_paramsAllocator = &v7->m_paramsAllocator;
  v38 = m_numRanges == 0;
  if ( m_numRanges )
  {
    v39 = v7->m_textureAllocator.m_partialSliceIndex[2 * m_numRanges + 511];
    v38 = v39 == 0;
    if ( v39 )
    {
      v40 = m_numRanges;
      do
      {
        if ( (*(_DWORD *)p_m_paramsAllocator->m_ranges & 1) != 0 )
          v3 += (*(_DWORD *)p_m_paramsAllocator->m_ranges >> 1) - p_m_paramsAllocator->m_ranges[0].end;
        p_m_paramsAllocator = (GfxLightGridVolumeAtlas::ParamsAllocator *)((char *)p_m_paramsAllocator + 8);
        v41 = v40-- == 0;
        v38 = v41 || v40 == 0;
      }
      while ( v40 );
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vdivss  xmm2, xmm1, xmm0
      }
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r10+8Ch]
    vcomiss xmm3, xmm0
  }
  if ( !v38 )
  {
    __asm { vcomiss xmm2, xmm0 }
    if ( !v38 )
      return 0;
  }
  return v7->m_depth > 2 * _R10->m_repackExtraSlicesAlloc;
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::ShrinkToDepth
==============
*/
void GfxLightGridVolumeAtlas::TextureAllocator::ShrinkToDepth(GfxLightGridVolumeAtlas::TextureAllocator *this, unsigned int depth)
{
  if ( (depth & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1351, ASSERT_TYPE_ASSERT, "(( depth & DEPTH_ALLOCATION_UNIT_MASK ) == 0)", (const char *)&queryFormat, "( depth & DEPTH_ALLOCATION_UNIT_MASK ) == 0") )
    __debugbreak();
  this->m_numUnits = depth >> 2;
}

/*
==============
GfxLightGridVolumeAtlas::ParamsAllocator::ShrinkToLength
==============
*/
void GfxLightGridVolumeAtlas::ParamsAllocator::ShrinkToLength(GfxLightGridVolumeAtlas::ParamsAllocator *this, unsigned int size)
{
  if ( !this->m_numRanges && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1718, ASSERT_TYPE_ASSERT, "(m_numRanges > 0)", (const char *)&queryFormat, "m_numRanges > 0") )
    __debugbreak();
  if ( this->m_ranges[this->m_numRanges - 1].end < size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1719, ASSERT_TYPE_ASSERT, "(m_ranges[m_numRanges - 1].end >= size)", (const char *)&queryFormat, "m_ranges[m_numRanges - 1].end >= size") )
    __debugbreak();
  if ( (*(_BYTE *)&this->m_ranges[this->m_numRanges - 1] & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1720, ASSERT_TYPE_ASSERT, "(!m_ranges[m_numRanges - 1].used)", (const char *)&queryFormat, "!m_ranges[m_numRanges - 1].used") )
    __debugbreak();
  this->m_ranges[this->m_numRanges - 1].end = size;
}

/*
==============
GfxLightGridVolumeAtlas::Shutdown
==============
*/
void GfxLightGridVolumeAtlas::Shutdown(GfxLightGridVolumeAtlas *this)
{
  unsigned int i; 
  signed int v3; 
  GfxLightGridVolumeAtlas::AtlasState *v4; 

  for ( i = 0; i < 2; ++i )
  {
    v3 = 0;
    v4 = &this->m_atlasState[i];
    do
    {
      if ( !Image_IsReleased(&v4->m_texture[v3]) )
        Image_Release(&v4->m_texture[v3]);
      ++v3;
    }
    while ( (unsigned int)v3 < 2 );
    R_ShutdownGfxWrappedBuffer(&this->m_atlasState[i].m_lgvTransformParams);
    R_ShutdownGfxWrappedBuffer(&this->m_atlasState[i].m_lgvPackingParams);
    R_ShutdownGfxWrappedBuffer(&this->m_packingBuffer[i]);
  }
}

/*
==============
GfxLightGridVolumeAtlas::TextureAllocator::ToMorton
==============
*/
__int64 GfxLightGridVolumeAtlas::TextureAllocator::ToMorton(unsigned int x, unsigned int y)
{
  __int64 v2; 
  __int64 v3; 

  v2 = y;
  v3 = x;
  if ( x >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1456, ASSERT_TYPE_ASSERT, "(x < NUM_PARTIAL_ALLOC_UNITS_X)", (const char *)&queryFormat, "x < NUM_PARTIAL_ALLOC_UNITS_X") )
    __debugbreak();
  if ( (unsigned int)v2 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1457, ASSERT_TYPE_ASSERT, "(y < NUM_PARTIAL_ALLOC_UNITS_Y)", (const char *)&queryFormat, "y < NUM_PARTIAL_ALLOC_UNITS_Y") )
    __debugbreak();
  return split2Lookup[v3] | (2 * split2Lookup[v2]);
}

/*
==============
GfxLightGridVolumeAtlas::TryPackLGVBlock
==============
*/
char GfxLightGridVolumeAtlas::TryPackLGVBlock(GfxLightGridVolumeAtlas *this, GfxLightGridVolumeAtlas::AtlasState *state, unsigned int blockIndex, unsigned int *outX, unsigned int *outY, unsigned int *outDepth, unsigned int *outOffset)
{
  unsigned __int64 v7; 
  unsigned int m_numRanges; 
  GfxLightGridVolumeAtlas::ParamsAllocator *p_m_paramsAllocator; 
  unsigned int v13; 
  unsigned int v14; 
  int v17; 

  v7 = blockIndex;
  if ( blockIndex >= 0x600 )
  {
    v17 = 1536;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", blockIndex, v17) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v7 & 0x1F)) & this->m_lgvBlocksUsed.array[v7 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 1307, ASSERT_TYPE_ASSERT, "(m_lgvBlocksUsed.testBit( blockIndex ))", (const char *)&queryFormat, "m_lgvBlocksUsed.testBit( blockIndex )") )
    __debugbreak();
  if ( !GfxLightGridVolumeAtlas::TextureAllocator::Preallocate(&state->m_textureAllocator, this->m_lgvBlocks[v7].widthHeight, this->m_lgvBlocks[v7].depth, outX, outY, outDepth) )
    return 0;
  m_numRanges = state->m_paramsAllocator.m_numRanges;
  p_m_paramsAllocator = &state->m_paramsAllocator;
  v13 = 0;
  if ( !m_numRanges )
    return 0;
  while ( 1 )
  {
    if ( (*(_DWORD *)p_m_paramsAllocator->m_ranges & 1) == 0 )
    {
      v14 = *(_DWORD *)p_m_paramsAllocator->m_ranges >> 1;
      if ( p_m_paramsAllocator->m_ranges[0].end - v14 >= this->m_lgvBlocks[v7].numVolumes )
        break;
    }
    ++v13;
    p_m_paramsAllocator = (GfxLightGridVolumeAtlas::ParamsAllocator *)((char *)p_m_paramsAllocator + 8);
    if ( v13 >= m_numRanges )
      return 0;
  }
  *outOffset = v14;
  return 1;
}

/*
==============
GfxLightGridVolumeAtlas::Update
==============
*/
void GfxLightGridVolumeAtlas::Update(GfxLightGridVolumeAtlas *this, const GfxBackEndData *data, ComputeCmdBufState *state)
{
  GfxLightGridVolumeAtlas::State m_state; 
  __int32 v7; 
  signed int v8; 
  GfxLightGridVolumeAtlas::AtlasState *v9; 
  unsigned __int64 m_textureMemSize; 
  unsigned __int8 *m_textureMem; 
  unsigned int v12; 
  GfxLightGridVolumeAtlas::State v13; 
  int v14; 
  bitarray<1536> *p_m_lgvBlocksUsed; 
  unsigned int v16; 
  __int64 v17; 
  Mem_PageRange inoutPageRange; 
  StreamerMemLoan result; 

  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 455, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  GfxLightGridVolumeAtlas::ProcessRemovedBlocks(this);
  m_state = this->m_state;
  if ( m_state )
  {
    v7 = m_state - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        if ( !this->m_flipTexturePending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 516, ASSERT_TYPE_ASSERT, "(m_flipTexturePending)", (const char *)&queryFormat, "m_flipTexturePending") )
          __debugbreak();
        if ( ++this->m_numWaitFrames >= 3u )
        {
          v8 = 0;
          v9 = &this->m_atlasState[1 - this->m_activeAtlasState];
          do
          {
            if ( !Image_IsReleased(&v9->m_texture[v8]) )
              Image_Release(&v9->m_texture[v8]);
            ++v8;
          }
          while ( (unsigned int)v8 < 2 );
          R_ShutdownGfxWrappedBuffer(&v9->m_lgvTransformParams);
          R_ShutdownGfxWrappedBuffer(&v9->m_lgvPackingParams);
          if ( v9->m_textureMem )
          {
            if ( !v9->m_textureMemSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 865, ASSERT_TYPE_ASSERT, "(prevAtlasState.m_textureMemSize != 0)", (const char *)&queryFormat, "prevAtlasState.m_textureMemSize != 0") )
              __debugbreak();
            m_textureMemSize = v9->m_textureMemSize;
            m_textureMem = v9->m_textureMem;
            inoutPageRange = v9->m_texturePageRange;
            Mem_Paged_DecommitMemoryPartial(&result, m_textureMem, &m_textureMem[m_textureMemSize], m_textureMem, &inoutPageRange);
            StreamerMemLoan::~StreamerMemLoan(&result);
            v12 = -LODWORD(v9->m_textureMemSize);
            if ( ((unsigned __int8)&s_lightgridCommitTotal & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_lightgridCommitTotal) )
              __debugbreak();
            _InterlockedExchangeAdd(&s_lightgridCommitTotal, v12);
          }
          v9->m_texturePageRange = MEM_PAGE_RANGE_INVALID;
          v9->m_textureMem = NULL;
          v9->m_textureMemSize = 0i64;
          this->m_state = IDLE;
          this->m_flipTexturePending = 0;
        }
      }
    }
    else if ( this->m_copyingFence )
    {
      if ( this->m_flipTexturePending )
      {
        if ( this->m_numWaitFrames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 495, ASSERT_TYPE_ASSERT, "(m_numWaitFrames == 0)", (const char *)&queryFormat, "m_numWaitFrames == 0") )
          __debugbreak();
        v13 = SEARCHING;
        v14 = 1 - this->m_activeAtlasState;
        ++this->m_numWaitFrames;
        this->m_activeAtlasState = v14;
      }
      else
      {
        v13 = IDLE;
      }
      this->m_state = v13;
      GfxLightGridVolumeAtlas::UpdatePackingBuffer(this, state);
      GfxLightGridVolumeAtlas::PostCopy(this, state, &this->m_atlasState[this->m_activeAtlasState]);
    }
  }
  else if ( GfxLightGridVolumeAtlas::ShouldDefragment(this) )
  {
    if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 709, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
      __debugbreak();
    if ( this->m_state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 711, ASSERT_TYPE_ASSERT, "(m_state == State::IDLE)", (const char *)&queryFormat, "m_state == State::IDLE") )
      __debugbreak();
    p_m_lgvBlocksUsed = &this->m_lgvBlocksUsed;
    v16 = 0;
    while ( !p_m_lgvBlocksUsed->array[0] )
    {
      ++v16;
      p_m_lgvBlocksUsed = (bitarray<1536> *)((char *)p_m_lgvBlocksUsed + 4);
      if ( v16 >= 0x30 )
        goto LABEL_44;
    }
    GfxLightGridVolumeAtlas::PrepareForCopy(this, &this->m_atlasState[1 - this->m_activeAtlasState]);
    GfxLightGridVolumeAtlas::PrepareCopyDestAndFlush(this, state, &this->m_atlasState[1 - this->m_activeAtlasState], 0);
    GfxLightGridVolumeAtlas::ScheduleCopies(this, this->m_lgvBlocks, &this->m_lgvBlocksUsed, &this->m_atlasState[this->m_activeAtlasState], &this->m_atlasState[1 - this->m_activeAtlasState]);
    this->m_copyingFence = 0;
    RB_BackendDataCopier::InsertCPUFence(&rbBackendDataCopier, 1u, &this->m_copyingFence, 1u);
    this->m_state = INITIALIZING;
    this->m_numWaitFrames = 0;
  }
LABEL_44:
  v17 = ((unsigned __int8)data->lightGridVolumesAtlasIndex - 1) & 1;
  this->m_renderAtlasState[v17] = this->m_activeAtlasState;
  this->m_renderPackingBuffer[v17] = this->m_activePackingBuffer;
}

/*
==============
GfxLightGridVolumeAtlas::UpdateCopying
==============
*/
void GfxLightGridVolumeAtlas::UpdateCopying(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *state)
{
  int v4; 
  GfxLightGridVolumeAtlas::State v5; 

  if ( this->m_copyingFence )
  {
    if ( this->m_flipTexturePending )
    {
      if ( this->m_numWaitFrames )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 495, ASSERT_TYPE_ASSERT, "(m_numWaitFrames == 0)", (const char *)&queryFormat, "m_numWaitFrames == 0") )
          __debugbreak();
      }
      v4 = 1 - this->m_activeAtlasState;
      ++this->m_numWaitFrames;
      this->m_activeAtlasState = v4;
      v5 = SEARCHING;
    }
    else
    {
      v5 = IDLE;
    }
    this->m_state = v5;
    GfxLightGridVolumeAtlas::UpdatePackingBuffer(this, state);
    GfxLightGridVolumeAtlas::PostCopy(this, state, &this->m_atlasState[this->m_activeAtlasState]);
  }
}

/*
==============
GfxLightGridVolumeAtlas::UpdateIdle
==============
*/
void GfxLightGridVolumeAtlas::UpdateIdle(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *state)
{
  int v4; 
  bitarray<1536> *i; 

  if ( GfxLightGridVolumeAtlas::ShouldDefragment(this) )
  {
    if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 709, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
      __debugbreak();
    if ( this->m_state )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 711, ASSERT_TYPE_ASSERT, "(m_state == State::IDLE)", (const char *)&queryFormat, "m_state == State::IDLE") )
        __debugbreak();
    }
    v4 = 0;
    for ( i = &this->m_lgvBlocksUsed; !i->array[0]; i = (bitarray<1536> *)((char *)i + 4) )
    {
      if ( (unsigned int)++v4 >= 0x30 )
        return;
    }
    GfxLightGridVolumeAtlas::PrepareForCopy(this, &this->m_atlasState[1 - this->m_activeAtlasState]);
    GfxLightGridVolumeAtlas::PrepareCopyDestAndFlush(this, state, &this->m_atlasState[1 - this->m_activeAtlasState], 0);
    GfxLightGridVolumeAtlas::ScheduleCopies(this, this->m_lgvBlocks, &this->m_lgvBlocksUsed, &this->m_atlasState[this->m_activeAtlasState], &this->m_atlasState[1 - this->m_activeAtlasState]);
    this->m_copyingFence = 0;
    RB_BackendDataCopier::InsertCPUFence(&rbBackendDataCopier, 1u, &this->m_copyingFence, 1u);
    this->m_state = INITIALIZING;
    this->m_numWaitFrames = 0;
  }
}

/*
==============
GfxLightGridVolumeAtlas::UpdatePackingBuffer
==============
*/
void GfxLightGridVolumeAtlas::UpdatePackingBuffer(GfxLightGridVolumeAtlas *this, ComputeCmdBufState *state)
{
  GfxLightGridVolumeAtlas *v2; 
  __int64 v3; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned __int16 *v8; 
  __int64 v9; 
  unsigned int *v10; 
  _DWORD *v11; 
  bool v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  int v17; 
  int v18; 
  char *v19; 
  int v20; 
  unsigned int v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned __int16 v25; 
  char *data; 

  v2 = this;
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 540, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  v3 = ((unsigned __int8)v2->m_activePackingBuffer - 1) & 1;
  v2->m_activePackingBuffer = v3;
  data = (char *)v2->m_packingBuffer[v3].data;
  memset_0(data, 0, 0x3000ui64);
  v4 = v2->m_lgvBlocksUsed.array[0];
  LODWORD(v5) = 0;
  while ( v4 )
  {
LABEL_8:
    v6 = __lzcnt(v4);
    v7 = v6 + 32 * (_DWORD)v5;
    if ( v6 >= 0x20 )
    {
      LODWORD(v23) = 32;
      LODWORD(v22) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    if ( (v4 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v4 &= ~(0x80000000 >> v6);
    v8 = (unsigned __int16 *)((char *)v2 + 16 * (unsigned int)v7);
    v25 = v8[90];
    v9 = (__int64)&v2->m_atlasState[v2->m_activeAtlasState];
    v10 = (unsigned int *)(v9 + 16 * (v7 + 34));
    v11 = (_DWORD *)(v9 + 16i64 * (unsigned int)v7);
    if ( *v10 == -1 )
    {
      if ( v11[134] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 560, ASSERT_TYPE_ASSERT, "(atlasState.m_packing[blockIndex].textureX == 0xFFFFFFFF)", (const char *)&queryFormat, "atlasState.m_packing[blockIndex].textureX == 0xFFFFFFFF") )
        __debugbreak();
      if ( v11[135] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 561, ASSERT_TYPE_ASSERT, "(atlasState.m_packing[blockIndex].textureY == 0xFFFFFFFF)", (const char *)&queryFormat, "atlasState.m_packing[blockIndex].textureY == 0xFFFFFFFF") )
        __debugbreak();
      v12 = v11[137] == -1;
      v2 = this;
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 562, ASSERT_TYPE_ASSERT, "(atlasState.m_packing[blockIndex].paramsOffset == 0xFFFFFFFF)", (const char *)&queryFormat, "atlasState.m_packing[blockIndex].paramsOffset == 0xFFFFFFFF") )
        __debugbreak();
    }
    else
    {
      if ( (v11[137] & 0xFFFFFF) != v11[137] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 566, ASSERT_TYPE_ASSERT, "(( atlasState.m_packing[blockIndex].paramsOffset & ( ( 1 << 24 ) - 1 ) ) == atlasState.m_packing[blockIndex].paramsOffset)", (const char *)&queryFormat, "( atlasState.m_packing[blockIndex].paramsOffset & LIGHTGRID_VOLUMES_ATLAS_PARAMS_OFFSET_MASK ) == atlasState.m_packing[blockIndex].paramsOffset") )
        __debugbreak();
      v13 = v8[84];
      if ( !v8[84] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
        __debugbreak();
      v14 = 31 - __lzcnt(v13);
      if ( (v14 < 3 || v14 > 31 - __lzcnt(0x40u)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 569, ASSERT_TYPE_ASSERT, "(( blockSizeLog2 >= 3 ) && ( blockSizeLog2 <= I_log2Floor( 64 ) ))", (const char *)&queryFormat, "( blockSizeLog2 >= LIGHTGRID_VOLUMES_STATIC_TEXTURE_MIN_SIZE_LOG_2 ) && ( blockSizeLog2 <= I_log2Floor( LIGHTGRID_VOLUMES_STATIC_TEXTURE_WIDTH ) )") )
        __debugbreak();
      v15 = v14 - 3;
      if ( (((_BYTE)v14 - 3) & 3) != v14 - 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 572, ASSERT_TYPE_ASSERT, "(( blockSizePacked & ( ( 1 << 2 ) - 1 ) ) == blockSizePacked)", (const char *)&queryFormat, "( blockSizePacked & LIGHTGRID_VOLUMES_ATLAS_BLOCK_SIZE_MASK ) == blockSizePacked") )
        __debugbreak();
      if ( (v11[134] & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 574, ASSERT_TYPE_ASSERT, "(( atlasState.m_packing[blockIndex].textureX & ( ( 1 << 3 ) - 1 ) ) == 0)", (const char *)&queryFormat, "( atlasState.m_packing[blockIndex].textureX & ( LIGHTGRID_VOLUMES_STATIC_TEXTURE_MIN_SIZE - 1 ) ) == 0") )
        __debugbreak();
      if ( (v11[135] & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 575, ASSERT_TYPE_ASSERT, "(( atlasState.m_packing[blockIndex].textureY & ( ( 1 << 3 ) - 1 ) ) == 0)", (const char *)&queryFormat, "( atlasState.m_packing[blockIndex].textureY & ( LIGHTGRID_VOLUMES_STATIC_TEXTURE_MIN_SIZE - 1 ) ) == 0") )
        __debugbreak();
      v16 = v11[134] >> 3;
      v17 = v11[135] >> 3;
      if ( (v16 & 7) != v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 580, ASSERT_TYPE_ASSERT, "(( blockPosXPacked & ( ( 1 << 3 ) - 1 ) ) == blockPosXPacked)", (const char *)&queryFormat, "( blockPosXPacked & LIGHTGRID_VOLUMES_ATLAS_BLOCK_POS_MASK ) == blockPosXPacked") )
        __debugbreak();
      if ( (v17 & 7) != v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 581, ASSERT_TYPE_ASSERT, "(( blockPosYPacked & ( ( 1 << 3 ) - 1 ) ) == blockPosYPacked)", (const char *)&queryFormat, "( blockPosYPacked & LIGHTGRID_VOLUMES_ATLAS_BLOCK_POS_MASK ) == blockPosYPacked") )
        __debugbreak();
      v18 = v15 | (4 * (v16 | (8 * v17)));
      v19 = &data[8 * v25];
      v20 = v11[137] | (v18 << 24);
      *((_WORD *)v19 + 1) = v8[85];
      v21 = *v10;
      if ( *v10 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v21, "unsigned", *v10) )
        __debugbreak();
      v2 = this;
      *(_WORD *)v19 = v21;
      *((_DWORD *)v19 + 1) = v20;
    }
  }
  while ( 1 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0x30 )
      break;
    v4 = v2->m_lgvBlocksUsed.array[v5];
    if ( v4 )
      goto LABEL_8;
  }
}

/*
==============
GfxLightGridVolumeAtlas::UpdateWaitForTextureFree
==============
*/
void GfxLightGridVolumeAtlas::UpdateWaitForTextureFree(GfxLightGridVolumeAtlas *this)
{
  signed int v2; 
  GfxLightGridVolumeAtlas::AtlasState *v3; 
  unsigned __int64 m_textureMemSize; 
  unsigned __int8 *m_textureMem; 
  unsigned int v6; 
  Mem_PageRange inoutPageRange; 
  StreamerMemLoan result; 

  if ( !this->m_flipTexturePending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 516, ASSERT_TYPE_ASSERT, "(m_flipTexturePending)", (const char *)&queryFormat, "m_flipTexturePending") )
    __debugbreak();
  if ( ++this->m_numWaitFrames >= 3u )
  {
    v2 = 0;
    v3 = &this->m_atlasState[1 - this->m_activeAtlasState];
    do
    {
      if ( !Image_IsReleased(&v3->m_texture[v2]) )
        Image_Release(&v3->m_texture[v2]);
      ++v2;
    }
    while ( (unsigned int)v2 < 2 );
    R_ShutdownGfxWrappedBuffer(&v3->m_lgvTransformParams);
    R_ShutdownGfxWrappedBuffer(&v3->m_lgvPackingParams);
    if ( v3->m_textureMem )
    {
      if ( !v3->m_textureMemSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_atlas.cpp", 865, ASSERT_TYPE_ASSERT, "(prevAtlasState.m_textureMemSize != 0)", (const char *)&queryFormat, "prevAtlasState.m_textureMemSize != 0") )
        __debugbreak();
      m_textureMemSize = v3->m_textureMemSize;
      m_textureMem = v3->m_textureMem;
      inoutPageRange = v3->m_texturePageRange;
      Mem_Paged_DecommitMemoryPartial(&result, m_textureMem, &m_textureMem[m_textureMemSize], m_textureMem, &inoutPageRange);
      StreamerMemLoan::~StreamerMemLoan(&result);
      v6 = -LODWORD(v3->m_textureMemSize);
      if ( ((unsigned __int8)&s_lightgridCommitTotal & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_lightgridCommitTotal) )
        __debugbreak();
      _InterlockedExchangeAdd(&s_lightgridCommitTotal, v6);
    }
    v3->m_texturePageRange = MEM_PAGE_RANGE_INVALID;
    v3->m_textureMem = NULL;
    v3->m_textureMemSize = 0i64;
    this->m_state = IDLE;
    this->m_flipTexturePending = 0;
  }
}

