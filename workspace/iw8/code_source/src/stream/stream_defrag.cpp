/*
==============
StreamDefrag::LockDefrag
==============
*/

bool __fastcall StreamDefrag::LockDefrag(StreamDefrag *this, streamer_handle_t handle)
{
  return ?LockDefrag@StreamDefrag@@QEAA_NUstreamer_handle_t@@@Z(this, handle);
}

/*
==============
StreamDefrag::InsertCopyFenceWaitOnGfxDevice
==============
*/

void __fastcall StreamDefrag::InsertCopyFenceWaitOnGfxDevice(StreamDefrag *this, GfxCmdBufContext *gfxContext)
{
  ?InsertCopyFenceWaitOnGfxDevice@StreamDefrag@@AEAAXUGfxCmdBufContext@@@Z(this, gfxContext);
}

/*
==============
Stream_Defrag_UnlockHandle
==============
*/

void __fastcall Stream_Defrag_UnlockHandle(streamer_handle_t handle)
{
  ?Stream_Defrag_UnlockHandle@@YAXUstreamer_handle_t@@@Z(handle);
}

/*
==============
StreamDefrag::InsertCommand<1>
==============
*/

void __fastcall StreamDefrag::InsertCommand<1>(StreamDefrag *this, StreamDefragCommand *command)
{
  ??$InsertCommand@$00@StreamDefrag@@AEAAXPEAUStreamDefragCommand@@@Z(this, command);
}

/*
==============
StreamDefrag::IssueCopies
==============
*/

void __fastcall StreamDefrag::IssueCopies(StreamDefrag *this, GfxCmdBufContext *gfxContext)
{
  ?IssueCopies@StreamDefrag@@QEAAXUGfxCmdBufContext@@@Z(this, gfxContext);
}

/*
==============
Stream_Defrag_DBPatchStreamKey
==============
*/

void __fastcall Stream_Defrag_DBPatchStreamKey(StreamKey *streamKey, unsigned int newAssetIndex)
{
  ?Stream_Defrag_DBPatchStreamKey@@YAXPEAUStreamKey@@I@Z(streamKey, newAssetIndex);
}

/*
==============
StreamDefrag::InsertCommand<0>
==============
*/

void __fastcall StreamDefrag::InsertCommand<0>(StreamDefrag *this, StreamDefragCommand *command)
{
  ??$InsertCommand@$0A@@StreamDefrag@@AEAAXPEAUStreamDefragCommand@@@Z(this, command);
}

/*
==============
StreamDefrag::IsAsyncCopyFinished
==============
*/

bool __fastcall StreamDefrag::IsAsyncCopyFinished(StreamDefrag *this, const GfxBackEndData *data)
{
  return ?IsAsyncCopyFinished@StreamDefrag@@AEBA_NPEBUGfxBackEndData@@@Z(this, data);
}

/*
==============
Stream_Defrag_FrameFlush
==============
*/

void __fastcall Stream_Defrag_FrameFlush(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  ?Stream_Defrag_FrameFlush@@YAXUGfxCmdBufContext@@PEBUGfxBackEndData@@@Z(gfxContext, data);
}

/*
==============
StreamDefrag::DefragStep3_UnmapOldAddress
==============
*/

void __fastcall StreamDefrag::DefragStep3_UnmapOldAddress(StreamDefrag *this, const GfxBackEndData *data)
{
  ?DefragStep3_UnmapOldAddress@StreamDefrag@@AEAAXPEBUGfxBackEndData@@@Z(this, data);
}

/*
==============
StreamDefrag::FlushAsyncCPUMemCpy
==============
*/

void __fastcall StreamDefrag::FlushAsyncCPUMemCpy(StreamDefrag *this, StreamDefrag::FlushAsyncType type, bool fastForward)
{
  ?FlushAsyncCPUMemCpy@StreamDefrag@@QEAAXW4FlushAsyncType@1@_N@Z(this, type, fastForward);
}

/*
==============
Stream_AddressSpace_Shutdown
==============
*/

void Stream_AddressSpace_Shutdown(void)
{
  ?Stream_AddressSpace_Shutdown@@YAXXZ();
}

/*
==============
StreamDefragRegion<0>::AssignAndFixup
==============
*/

unsigned __int64 __fastcall StreamDefragRegion<0>::AssignAndFixup(StreamDefragRegion<0> *this, const GfxBackEndData *data, StreamDefragAllocNode *node, unsigned __int64 allocSize, unsigned __int64 alignment)
{
  return ?AssignAndFixup@?$StreamDefragRegion@$0A@@@QEAA_KPEBUGfxBackEndData@@PEAUStreamDefragAllocNode@@_K2@Z(this, data, node, allocSize, alignment);
}

/*
==============
StreamDefrag::ReserveHandle
==============
*/

streamer_handle_t __fastcall StreamDefrag::ReserveHandle(StreamDefrag *this, StreamItemType type, int assetIndex)
{
  return ?ReserveHandle@StreamDefrag@@QEAA?AUstreamer_handle_t@@W4StreamItemType@@H@Z(this, type, assetIndex);
}

/*
==============
StreamDefragRegion<1>::GetVASizeFragmentation
==============
*/

unsigned __int64 __fastcall StreamDefragRegion<1>::GetVASizeFragmentation(StreamDefragRegion<1> *this)
{
  return ?GetVASizeFragmentation@?$StreamDefragRegion@$00@@QEBA_KXZ(this);
}

/*
==============
Stream_AddressSpace_FreeImageHandle
==============
*/

void __fastcall Stream_AddressSpace_FreeImageHandle(GfxImage *image)
{
  ?Stream_AddressSpace_FreeImageHandle@@YAXPEAUGfxImage@@@Z(image);
}

/*
==============
StreamDefrag::QueueFlushAsyncCPUMemCpy
==============
*/

void __fastcall StreamDefrag::QueueFlushAsyncCPUMemCpy(StreamDefrag *this)
{
  ?QueueFlushAsyncCPUMemCpy@StreamDefrag@@AEAAXXZ(this);
}

/*
==============
StreamDefrag::DefragFrameBegin
==============
*/

void __fastcall StreamDefrag::DefragFrameBegin(StreamDefrag *this, GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  ?DefragFrameBegin@StreamDefrag@@QEAAXUGfxCmdBufContext@@PEBUGfxBackEndData@@@Z(this, gfxContext, data);
}

/*
==============
StreamDefrag::HarvestRegions
==============
*/

void __fastcall StreamDefrag::HarvestRegions(StreamDefrag *this, const GfxBackEndData *data)
{
  ?HarvestRegions@StreamDefrag@@AEAAXPEBUGfxBackEndData@@@Z(this, data);
}

/*
==============
StreamDefrag::OnBackendQueueUpdate
==============
*/

void __fastcall StreamDefrag::OnBackendQueueUpdate(StreamDefrag *this)
{
  ?OnBackendQueueUpdate@StreamDefrag@@QEAAXXZ(this);
}

/*
==============
StreamDefragRegion<1>::MoveTailAddressForward
==============
*/

void __fastcall StreamDefragRegion<1>::MoveTailAddressForward(StreamDefragRegion<1> *this, unsigned __int64 newTailAddr)
{
  ?MoveTailAddressForward@?$StreamDefragRegion@$00@@QEAAX_K@Z(this, newTailAddr);
}

/*
==============
StreamDefrag::DefragStep2_PtrFixup
==============
*/

void __fastcall StreamDefrag::DefragStep2_PtrFixup(StreamDefrag *this, const GfxBackEndData *data)
{
  ?DefragStep2_PtrFixup@StreamDefrag@@AEAAXPEBUGfxBackEndData@@@Z(this, data);
}

/*
==============
StreamDefragRegion<1>::Assign
==============
*/

unsigned __int64 __fastcall StreamDefragRegion<1>::Assign(StreamDefragRegion<1> *this, StreamDefragAllocNode *node, unsigned __int64 allocSize, unsigned __int64 alignment, unsigned int *startOverlap)
{
  return ?Assign@?$StreamDefragRegion@$00@@QEAA_KPEAUStreamDefragAllocNode@@_K1PEAI@Z(this, node, allocSize, alignment, startOverlap);
}

/*
==============
StreamDefrag::DefragStep1_IssueCopies
==============
*/

void __fastcall StreamDefrag::DefragStep1_IssueCopies(StreamDefrag *this, GfxCmdBufContext *gfxContext)
{
  ?DefragStep1_IssueCopies@StreamDefrag@@AEAAXUGfxCmdBufContext@@@Z(this, gfxContext);
}

/*
==============
StreamDefrag::TrackCommitParts
==============
*/

void __fastcall StreamDefrag::TrackCommitParts(StreamDefrag *this, const StreamDefragCommand *command, unsigned __int64 addressOffset, unsigned int partBits)
{
  ?TrackCommitParts@StreamDefrag@@AEAAXPEBUStreamDefragCommand@@_KI@Z(this, command, addressOffset, partBits);
}

/*
==============
Stream_Defrag_GetRegionStats
==============
*/

void __fastcall Stream_Defrag_GetRegionStats(StreamMemPool pool, StreamDefragRegionStats *outFixedRegionStats, StreamDefragRegionStats *outMoveableRegionStats)
{
  ?Stream_Defrag_GetRegionStats@@YAXW4StreamMemPool@@AEAUStreamDefragRegionStats@@1@Z(pool, outFixedRegionStats, outMoveableRegionStats);
}

/*
==============
StreamDefrag::ValidateRegionsEmptyVAReserve
==============
*/

void __fastcall StreamDefrag::ValidateRegionsEmptyVAReserve(StreamDefrag *this)
{
  ?ValidateRegionsEmptyVAReserve@StreamDefrag@@QEAAXXZ(this);
}

/*
==============
StreamDefragRegion<1>::OnDefragCopyDone
==============
*/

void __fastcall StreamDefragRegion<1>::OnDefragCopyDone(StreamDefragRegion<1> *this)
{
  ?OnDefragCopyDone@?$StreamDefragRegion@$00@@QEAAXXZ(this);
}

/*
==============
StreamDefragRegion<1>::RemoveNode
==============
*/

void __fastcall StreamDefragRegion<1>::RemoveNode(StreamDefragRegion<1> *this, StreamDefragAllocNode *node)
{
  ?RemoveNode@?$StreamDefragRegion@$00@@AEAAXPEAUStreamDefragAllocNode@@@Z(this, node);
}

/*
==============
StreamDefrag::DecommitParts
==============
*/

unsigned __int64 __fastcall StreamDefrag::DecommitParts(StreamDefrag *this, const StreamDefragCommand *command, unsigned __int64 addressOffset, unsigned int partBits, StreamerMemPageCounts *unmappedPages)
{
  return ?DecommitParts@StreamDefrag@@AEAA_KPEBUStreamDefragCommand@@_KIAEAUStreamerMemPageCounts@@@Z(this, command, addressOffset, partBits, unmappedPages);
}

/*
==============
StreamDefrag::ValidateRegions
==============
*/

void __fastcall StreamDefrag::ValidateRegions(StreamDefrag *this)
{
  ?ValidateRegions@StreamDefrag@@QEAAXXZ(this);
}

/*
==============
StreamDefrag::StreamDefrag
==============
*/

void __fastcall StreamDefrag::StreamDefrag(StreamDefrag *this)
{
  ??0StreamDefrag@@QEAA@XZ(this);
}

/*
==============
Stream_Defrag_LockDefragCount
==============
*/

void Stream_Defrag_LockDefragCount(void)
{
  ?Stream_Defrag_LockDefragCount@@YAXXZ();
}

/*
==============
Stream_AddressSpace_FreeGenericHandle
==============
*/

void __fastcall Stream_AddressSpace_FreeGenericHandle(StreamKey *streamKey)
{
  ?Stream_AddressSpace_FreeGenericHandle@@YAXPEAUStreamKey@@@Z(streamKey);
}

/*
==============
Stream_AddressSpace_FreeMeshHandle
==============
*/

void __fastcall Stream_AddressSpace_FreeMeshHandle(XModelSurfs *mesh)
{
  ?Stream_AddressSpace_FreeMeshHandle@@YAXPEAUXModelSurfs@@@Z(mesh);
}

/*
==============
StreamDefragRegion<0>::AssertValidAddressRange
==============
*/

void __fastcall StreamDefragRegion<0>::AssertValidAddressRange(StreamDefragRegion<0> *this, const unsigned __int8 *addrBegin, const unsigned __int8 *addrEnd)
{
  ?AssertValidAddressRange@?$StreamDefragRegion@$0A@@@QEBAXPEBE0@Z(this, addrBegin, addrEnd);
}

/*
==============
StreamDefrag::BackendFlushProtection
==============
*/

StreamDefragCommand *__fastcall StreamDefrag::BackendFlushProtection(StreamDefrag *this, const StreamDefragAllocNode *node)
{
  return ?BackendFlushProtection@StreamDefrag@@AEAAPEAUStreamDefragCommand@@PEBUStreamDefragAllocNode@@@Z(this, node);
}

/*
==============
StreamDefrag::InsertCommand<2>
==============
*/

void __fastcall StreamDefrag::InsertCommand<2>(StreamDefrag *this, StreamDefragCommand *command)
{
  ??$InsertCommand@$01@StreamDefrag@@AEAAXPEAUStreamDefragCommand@@@Z(this, command);
}

/*
==============
StreamDefragRegion<1>::Validate
==============
*/

void __fastcall StreamDefragRegion<1>::Validate(StreamDefragRegion<1> *this)
{
  ?Validate@?$StreamDefragRegion@$00@@QEBAXXZ(this);
}

/*
==============
Stream_Defrag_DBPatchMesh
==============
*/

void __fastcall Stream_Defrag_DBPatchMesh(XModelSurfs *mesh, unsigned int newAssetIndex)
{
  ?Stream_Defrag_DBPatchMesh@@YAXPEAUXModelSurfs@@I@Z(mesh, newAssetIndex);
}

/*
==============
StreamDefrag::DefragFrameFlush
==============
*/

void __fastcall StreamDefrag::DefragFrameFlush(StreamDefrag *this, GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  ?DefragFrameFlush@StreamDefrag@@QEAAXUGfxCmdBufContext@@PEBUGfxBackEndData@@@Z(this, gfxContext, data);
}

/*
==============
Stream_Defrag_FrameEnd
==============
*/

void __fastcall Stream_Defrag_FrameEnd(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  ?Stream_Defrag_FrameEnd@@YAXUGfxCmdBufContext@@PEBUGfxBackEndData@@@Z(gfxContext, data);
}

/*
==============
StreamDefrag::DefragStep0_StartCommandsAndMapNewAddresses
==============
*/

void __fastcall StreamDefrag::DefragStep0_StartCommandsAndMapNewAddresses(StreamDefrag *this, const GfxBackEndData *data)
{
  ?DefragStep0_StartCommandsAndMapNewAddresses@StreamDefrag@@AEAAXPEBUGfxBackEndData@@@Z(this, data);
}

/*
==============
Stream_AddressSpace_ResolveAddrMap
==============
*/

unsigned __int8 *__fastcall Stream_AddressSpace_ResolveAddrMap(const GfxBackEndData *data, StreamMapCmdData *streamMap)
{
  return ?Stream_AddressSpace_ResolveAddrMap@@YAPEAEPEBUGfxBackEndData@@PEAUStreamMapCmdData@@@Z(data, streamMap);
}

/*
==============
StreamDefrag::MapAsync
==============
*/

bool __fastcall StreamDefrag::MapAsync(StreamDefrag *this, StreamDefragCommand *command)
{
  return ?MapAsync@StreamDefrag@@AEAA_NPEAUStreamDefragCommand@@@Z(this, command);
}

/*
==============
StreamDefragRegion<0>::Assign
==============
*/

unsigned __int64 __fastcall StreamDefragRegion<0>::Assign(StreamDefragRegion<0> *this, StreamDefragAllocNode *node, unsigned __int64 allocSize, unsigned __int64 alignment, unsigned int *startOverlap)
{
  return ?Assign@?$StreamDefragRegion@$0A@@@QEAA_KPEAUStreamDefragAllocNode@@_K1PEAI@Z(this, node, allocSize, alignment, startOverlap);
}

/*
==============
Stream_Defrag_IssueCopies
==============
*/

void __fastcall Stream_Defrag_IssueCopies(GfxCmdBufContext *gfxContext)
{
  ?Stream_Defrag_IssueCopies@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
Stream_Defrag_Validate
==============
*/

void Stream_Defrag_Validate(void)
{
  ?Stream_Defrag_Validate@@YAXXZ();
}

/*
==============
StreamDefragRegion<0>::DecreaseVASizeUsedInternal
==============
*/

void __fastcall StreamDefragRegion<0>::DecreaseVASizeUsedInternal(StreamDefragRegion<0> *this, const StreamDefragAllocNode *node, unsigned int vAddrOffset, unsigned int vaSize, unsigned int vAddrEndAlignLog2)
{
  ?DecreaseVASizeUsedInternal@?$StreamDefragRegion@$0A@@@AEAAXPEBUStreamDefragAllocNode@@III@Z(this, node, vAddrOffset, vaSize, vAddrEndAlignLog2);
}

/*
==============
Stream_Defrag_OnBackendQueueUpdate
==============
*/

void Stream_Defrag_OnBackendQueueUpdate(void)
{
  ?Stream_Defrag_OnBackendQueueUpdate@@YAXXZ();
}

/*
==============
StreamDefragRegion<1>::PushBack
==============
*/

void __fastcall StreamDefragRegion<1>::PushBack(StreamDefragRegion<1> *this, StreamDefragAllocNode *node)
{
  ?PushBack@?$StreamDefragRegion@$00@@QEAAXPEAUStreamDefragAllocNode@@@Z(this, node);
}

/*
==============
StreamDefragRegion<1>::GetVASizeAllocated
==============
*/

unsigned __int64 __fastcall StreamDefragRegion<1>::GetVASizeAllocated(StreamDefragRegion<1> *this)
{
  return ?GetVASizeAllocated@?$StreamDefragRegion@$00@@QEBA_KXZ(this);
}

/*
==============
StreamDefrag::OnUnloadItem
==============
*/

void __fastcall StreamDefrag::OnUnloadItem(StreamDefrag *this, StreamItemType itemType, unsigned int itemPartIndex, streamer_handle_t handle)
{
  ?OnUnloadItem@StreamDefrag@@QEAAXW4StreamItemType@@IUstreamer_handle_t@@@Z(this, itemType, itemPartIndex, handle);
}

/*
==============
StreamDefrag::CPUMemCpyAsync
==============
*/

bool __fastcall StreamDefrag::CPUMemCpyAsync(StreamDefrag *this, StreamDefragCommand *command)
{
  return ?CPUMemCpyAsync@StreamDefrag@@AEAA_NPEAUStreamDefragCommand@@@Z(this, command);
}

/*
==============
Stream_Defrag_PostLevelUnload
==============
*/

void __fastcall Stream_Defrag_PostLevelUnload(const GfxBackEndData *data)
{
  ?Stream_Defrag_PostLevelUnload@@YAXPEBUGfxBackEndData@@@Z(data);
}

/*
==============
Stream_Defrag_DBPatchImage
==============
*/

void __fastcall Stream_Defrag_DBPatchImage(GfxImage *image, unsigned int newAssetIndex)
{
  ?Stream_Defrag_DBPatchImage@@YAXPEAUGfxImage@@I@Z(image, newAssetIndex);
}

/*
==============
Stream_Defrag_FrameBegin
==============
*/

void __fastcall Stream_Defrag_FrameBegin(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  ?Stream_Defrag_FrameBegin@@YAXUGfxCmdBufContext@@PEBUGfxBackEndData@@@Z(gfxContext, data);
}

/*
==============
StreamDefragRegion<0>::OnDecommit
==============
*/

void __fastcall StreamDefragRegion<0>::OnDecommit(StreamDefragRegion<0> *this, const unsigned __int8 *start, const unsigned __int8 *end)
{
  ?OnDecommit@?$StreamDefragRegion@$0A@@@QEAAXPEBE0@Z(this, start, end);
}

/*
==============
Stream_AddressSpace_GenericHandle
==============
*/

streamer_handle_t __fastcall Stream_AddressSpace_GenericHandle(StreamKey *streamKey)
{
  return ?Stream_AddressSpace_GenericHandle@@YA?AUstreamer_handle_t@@PEAUStreamKey@@@Z(streamKey);
}

/*
==============
StreamDefragRegion<1>::OnDefragMoveDone
==============
*/

void __fastcall StreamDefragRegion<1>::OnDefragMoveDone(StreamDefragRegion<1> *this)
{
  ?OnDefragMoveDone@?$StreamDefragRegion@$00@@QEAAXXZ(this);
}

/*
==============
StreamDefrag::GetFrameDefragCommandCount
==============
*/

unsigned int __fastcall StreamDefrag::GetFrameDefragCommandCount(StreamDefrag *this, StreamMemPool pool)
{
  return ?GetFrameDefragCommandCount@StreamDefrag@@AEBAIW4StreamMemPool@@@Z(this, pool);
}

/*
==============
Stream_Logger_MakeItem
==============
*/

Stream_Logger_Item *__fastcall Stream_Logger_MakeItem(Stream_Logger_Item *result, const streamer_handle_t *handle)
{
  return ?Stream_Logger_MakeItem@@YA?AUStream_Logger_Item@@AEBUstreamer_handle_t@@@Z(result, handle);
}

/*
==============
StreamDefrag::ResolveNewAddr
==============
*/

unsigned __int8 *__fastcall StreamDefrag::ResolveNewAddr(StreamDefrag *this, const GfxBackEndData *data, StreamDefragAllocNode *node)
{
  return ?ResolveNewAddr@StreamDefrag@@AEAAPEAEPEBUGfxBackEndData@@PEAUStreamDefragAllocNode@@@Z(this, data, node);
}

/*
==============
StreamDefrag::GivePages
==============
*/

void __fastcall StreamDefrag::GivePages(StreamDefrag *this, StreamerMemPageCounts *pageAdjust)
{
  ?GivePages@StreamDefrag@@QEAAXAEAUStreamerMemPageCounts@@@Z(this, pageAdjust);
}

/*
==============
StreamDefrag::ResolveUnmap
==============
*/

unsigned __int8 *__fastcall StreamDefrag::ResolveUnmap(StreamDefrag *this, const StreamUnmapCmdData *streamUnmap)
{
  return ?ResolveUnmap@StreamDefrag@@QEAAPEAEPEBUStreamUnmapCmdData@@@Z(this, streamUnmap);
}

/*
==============
StreamDefrag::CommitParts
==============
*/

unsigned __int64 __fastcall StreamDefrag::CommitParts(StreamDefrag *this, const StreamDefragCommand *command, unsigned __int64 addressOffset, unsigned int partBits, StreamerMemPageCounts *reservedPages)
{
  return ?CommitParts@StreamDefrag@@AEAA_KPEBUStreamDefragCommand@@_KIAEAUStreamerMemPageCounts@@@Z(this, command, addressOffset, partBits, reservedPages);
}

/*
==============
StreamDefrag::UpdateNewTailAddressBeforeMove
==============
*/

bool __fastcall StreamDefrag::UpdateNewTailAddressBeforeMove(StreamDefrag *this, StreamDefragAllocNode *node)
{
  return ?UpdateNewTailAddressBeforeMove@StreamDefrag@@AEAA_NPEAUStreamDefragAllocNode@@@Z(this, node);
}

/*
==============
StreamDefragRegion<0>::GetVASizeAllocated
==============
*/

unsigned __int64 __fastcall StreamDefragRegion<0>::GetVASizeAllocated(StreamDefragRegion<0> *this)
{
  return ?GetVASizeAllocated@?$StreamDefragRegion@$0A@@@QEBA_KXZ(this);
}

/*
==============
StreamDefragRegion<1>::OnDecommit
==============
*/

void __fastcall StreamDefragRegion<1>::OnDecommit(StreamDefragRegion<1> *this, const unsigned __int8 *start, const unsigned __int8 *end)
{
  ?OnDecommit@?$StreamDefragRegion@$00@@QEAAXPEBE0@Z(this, start, end);
}

/*
==============
StreamDefrag::ValidateDefragSteps
==============
*/

void __fastcall StreamDefrag::ValidateDefragSteps(StreamDefrag *this)
{
  ?ValidateDefragSteps@StreamDefrag@@QEBAXXZ(this);
}

/*
==============
StreamDefrag::FreeHandle
==============
*/

void __fastcall StreamDefrag::FreeHandle(StreamDefrag *this, streamer_handle_t *handle)
{
  ?FreeHandle@StreamDefrag@@QEAAXAEAUstreamer_handle_t@@@Z(this, handle);
}

/*
==============
StreamDefragRegion<1>::InvalidateNode
==============
*/

void __fastcall StreamDefragRegion<1>::InvalidateNode(StreamDefragRegion<1> *this, StreamDefragAllocNode *node)
{
  ?InvalidateNode@?$StreamDefragRegion@$00@@QEAAXPEAUStreamDefragAllocNode@@@Z(this, node);
}

/*
==============
StreamDefrag::FlagSkippedNonTailVAResizeMoves
==============
*/

void __fastcall StreamDefrag::FlagSkippedNonTailVAResizeMoves(StreamDefrag *this, StreamMemPool pool, unsigned __int64 currentTailAddress, unsigned __int64 newTailAddress, unsigned int unmapFrame)
{
  ?FlagSkippedNonTailVAResizeMoves@StreamDefrag@@AEAAXW4StreamMemPool@@_K1I@Z(this, pool, currentTailAddress, newTailAddress, unmapFrame);
}

/*
==============
Stream_AddressSpace_Init
==============
*/

void Stream_AddressSpace_Init(void)
{
  ?Stream_AddressSpace_Init@@YAXXZ();
}

/*
==============
StreamDefragRegion<0>::InvalidateNode
==============
*/

void __fastcall StreamDefragRegion<0>::InvalidateNode(StreamDefragRegion<0> *this, StreamDefragAllocNode *node)
{
  ?InvalidateNode@?$StreamDefragRegion@$0A@@@QEAAXPEAUStreamDefragAllocNode@@@Z(this, node);
}

/*
==============
Stream_AddressSpace_ImageHandle
==============
*/

streamer_handle_t __fastcall Stream_AddressSpace_ImageHandle(GfxImage *image)
{
  return ?Stream_AddressSpace_ImageHandle@@YA?AUstreamer_handle_t@@PEAUGfxImage@@@Z(image);
}

/*
==============
StreamDefrag::UnlockDefrag
==============
*/

void __fastcall StreamDefrag::UnlockDefrag(StreamDefrag *this, streamer_handle_t handle)
{
  ?UnlockDefrag@StreamDefrag@@QEAAXUstreamer_handle_t@@@Z(this, handle);
}

/*
==============
StreamDefrag::~StreamDefrag
==============
*/

void __fastcall StreamDefrag::~StreamDefrag(StreamDefrag *this)
{
  ??1StreamDefrag@@QEAA@XZ(this);
}

/*
==============
StreamDefragRegion<0>::Validate
==============
*/

void __fastcall StreamDefragRegion<0>::Validate(StreamDefragRegion<0> *this)
{
  ?Validate@?$StreamDefragRegion@$0A@@@QEBAXXZ(this);
}

/*
==============
StreamDefragRegion<1>::GetVASizeNotAllocated
==============
*/

unsigned __int64 __fastcall StreamDefragRegion<1>::GetVASizeNotAllocated(StreamDefragRegion<1> *this)
{
  return ?GetVASizeNotAllocated@?$StreamDefragRegion@$00@@QEBA_KXZ(this);
}

/*
==============
StreamDefrag::NeedsVAResize
==============
*/

bool __fastcall StreamDefrag::NeedsVAResize(StreamDefrag *this, const StreamDefragAllocNode *node)
{
  return ?NeedsVAResize@StreamDefrag@@AEBA_NPEBUStreamDefragAllocNode@@@Z(this, node);
}

/*
==============
StreamDefrag::Map
==============
*/

unsigned __int64 __fastcall StreamDefrag::Map(StreamDefrag *this, StreamDefragCommand *command)
{
  return ?Map@StreamDefrag@@AEAA_KPEAUStreamDefragCommand@@@Z(this, command);
}

/*
==============
Stream_Defrag_GivePages
==============
*/

void __fastcall Stream_Defrag_GivePages(StreamerMemPageCounts *pageAdjust)
{
  ?Stream_Defrag_GivePages@@YAXAEAUStreamerMemPageCounts@@@Z(pageAdjust);
}

/*
==============
StreamDefrag::DefragFrameEnd
==============
*/

void __fastcall StreamDefrag::DefragFrameEnd(StreamDefrag *this, GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  ?DefragFrameEnd@StreamDefrag@@QEAAXUGfxCmdBufContext@@PEBUGfxBackEndData@@@Z(this, gfxContext, data);
}

/*
==============
StreamDefrag::HarvestUnusedNode
==============
*/

void __fastcall StreamDefrag::HarvestUnusedNode(StreamDefrag *this, StreamDefragAllocNode *node)
{
  ?HarvestUnusedNode@StreamDefrag@@AEAAXPEAUStreamDefragAllocNode@@@Z(this, node);
}

/*
==============
Stream_AddressSpace_MeshHandle
==============
*/

streamer_handle_t __fastcall Stream_AddressSpace_MeshHandle(XModelSurfs *mesh)
{
  return ?Stream_AddressSpace_MeshHandle@@YA?AUstreamer_handle_t@@PEAUXModelSurfs@@@Z(mesh);
}

/*
==============
StreamDefragRegion<0>::RemoveNode
==============
*/

void __fastcall StreamDefragRegion<0>::RemoveNode(StreamDefragRegion<0> *this, StreamDefragAllocNode *node)
{
  ?RemoveNode@?$StreamDefragRegion@$0A@@@AEAAXPEAUStreamDefragAllocNode@@@Z(this, node);
}

/*
==============
StreamDefragRegion<1>::AssertValidAddressRange
==============
*/

void __fastcall StreamDefragRegion<1>::AssertValidAddressRange(StreamDefragRegion<1> *this, const unsigned __int8 *addrBegin, const unsigned __int8 *addrEnd)
{
  ?AssertValidAddressRange@?$StreamDefragRegion@$00@@QEBAXPEBE0@Z(this, addrBegin, addrEnd);
}

/*
==============
StreamDefrag::UnmapAsync
==============
*/

void __fastcall StreamDefrag::UnmapAsync(StreamDefrag *this, StreamDefragCommand **command, StreamerMemPageCounts *unmappedPages)
{
  ?UnmapAsync@StreamDefrag@@AEAAXAEAPEAUStreamDefragCommand@@AEAUStreamerMemPageCounts@@@Z(this, command, unmappedPages);
}

/*
==============
StreamDefragRegion<1>::CircularAddressDistance
==============
*/

unsigned __int64 __fastcall StreamDefragRegion<1>::CircularAddressDistance(StreamDefragRegion<1> *this, unsigned __int64 a, unsigned __int64 b)
{
  return ?CircularAddressDistance@?$StreamDefragRegion@$00@@QEBA_K_K0@Z(this, a, b);
}

/*
==============
StreamDefrag::ValidateNodes
==============
*/

void __fastcall StreamDefrag::ValidateNodes(StreamDefrag *this)
{
  ?ValidateNodes@StreamDefrag@@QEBAXXZ(this);
}

/*
==============
Stream_Defrag_FlushVA
==============
*/

void __fastcall Stream_Defrag_FlushVA(const void *const data)
{
  ?Stream_Defrag_FlushVA@@YAXQEBX@Z(data);
}

/*
==============
StreamDefrag::LockDefragCount
==============
*/

void __fastcall StreamDefrag::LockDefragCount(StreamDefrag *this)
{
  ?LockDefragCount@StreamDefrag@@QEAAXXZ(this);
}

/*
==============
StreamDefrag::FastForwardDefragSteps
==============
*/

void __fastcall StreamDefrag::FastForwardDefragSteps(StreamDefrag *this, StreamDefragStep step, StreamDefragCommand *removedCmd, StreamDefragAllocNode *node, StreamerMemPageCounts *unmappedPages)
{
  ?FastForwardDefragSteps@StreamDefrag@@AEAAXW4StreamDefragStep@@PEAUStreamDefragCommand@@PEAUStreamDefragAllocNode@@AEAUStreamerMemPageCounts@@@Z(this, step, removedCmd, node, unmappedPages);
}

/*
==============
StreamDefrag::OnLoadItem
==============
*/

void __fastcall StreamDefrag::OnLoadItem(StreamDefrag *this, StreamItemType itemType, unsigned int itemPartIndex, streamer_handle_t handle)
{
  ?OnLoadItem@StreamDefrag@@QEAAXW4StreamItemType@@IUstreamer_handle_t@@@Z(this, itemType, itemPartIndex, handle);
}

/*
==============
StreamDefrag::QueueFlushAsyncVA
==============
*/

void __fastcall StreamDefrag::QueueFlushAsyncVA(StreamDefrag *this)
{
  ?QueueFlushAsyncVA@StreamDefrag@@AEAAXXZ(this);
}

/*
==============
StreamDefrag::GetRegionStats
==============
*/

void __fastcall StreamDefrag::GetRegionStats(StreamDefrag *this, StreamMemPool pool, StreamDefragRegionStats *outFixedRegionStats, StreamDefragRegionStats *outMoveableRegionStats)
{
  ?GetRegionStats@StreamDefrag@@QEBAXW4StreamMemPool@@AEAUStreamDefragRegionStats@@1@Z(this, pool, outFixedRegionStats, outMoveableRegionStats);
}

/*
==============
StreamDefrag::FlushAsyncVA
==============
*/

void __fastcall StreamDefrag::FlushAsyncVA(StreamDefrag *this, StreamDefrag::FlushAsyncType type, StreamDefrag::FlushAsyncVAOp op, bool fastForward)
{
  ?FlushAsyncVA@StreamDefrag@@QEAAXW4FlushAsyncType@1@W4FlushAsyncVAOp@1@_N@Z(this, type, op, fastForward);
}

/*
==============
StreamDefragRegion<1>::OnCommit
==============
*/

void __fastcall StreamDefragRegion<1>::OnCommit(StreamDefragRegion<1> *this, const unsigned __int8 *start, const unsigned __int8 *end)
{
  ?OnCommit@?$StreamDefragRegion@$00@@QEAAXPEBE0@Z(this, start, end);
}

/*
==============
StreamDefragRegion<1>::ReleaseVAReserve
==============
*/

void __fastcall StreamDefragRegion<1>::ReleaseVAReserve(StreamDefragRegion<1> *this, StreamDefragAllocNode *node)
{
  ?ReleaseVAReserve@?$StreamDefragRegion@$00@@QEAAXPEAUStreamDefragAllocNode@@@Z(this, node);
}

/*
==============
Stream_AddressSpace_LockFrontendAddr
==============
*/

unsigned __int8 *__fastcall Stream_AddressSpace_LockFrontendAddr(streamer_handle_t handle, unsigned int part)
{
  return ?Stream_AddressSpace_LockFrontendAddr@@YAPEAEUstreamer_handle_t@@I@Z(handle, part);
}

/*
==============
Stream_Defrag_FlushCPUMemCpy
==============
*/

void __fastcall Stream_Defrag_FlushCPUMemCpy(const void *const data)
{
  ?Stream_Defrag_FlushCPUMemCpy@@YAXQEBX@Z(data);
}

/*
==============
StreamDefragRegion<1>::OnUnmapOldAddress
==============
*/

void __fastcall StreamDefragRegion<1>::OnUnmapOldAddress(StreamDefragRegion<1> *this, const StreamDefragCommand *command, bool fastForward)
{
  ?OnUnmapOldAddress@?$StreamDefragRegion@$00@@QEAAXPEBUStreamDefragCommand@@_N@Z(this, command, fastForward);
}

/*
==============
StreamDefrag::GPUFaultProtection
==============
*/

void __fastcall StreamDefrag::GPUFaultProtection(StreamDefrag *this, const GfxBackEndData *data)
{
  ?GPUFaultProtection@StreamDefrag@@AEBAXPEBUGfxBackEndData@@@Z(this, data);
}

/*
==============
Stream_Defrag_LockHandle
==============
*/

bool __fastcall Stream_Defrag_LockHandle(streamer_handle_t handle)
{
  return ?Stream_Defrag_LockHandle@@YA_NUstreamer_handle_t@@@Z(handle);
}

/*
==============
StreamDefrag::ResolveMap
==============
*/

unsigned __int8 *__fastcall StreamDefrag::ResolveMap(StreamDefrag *this, const GfxBackEndData *data, StreamMapCmdData *streamMap)
{
  return ?ResolveMap@StreamDefrag@@QEAAPEAEPEBUGfxBackEndData@@PEAUStreamMapCmdData@@@Z(this, data, streamMap);
}

/*
==============
StreamDefragRegion<1>::DecreaseVASizeUsedForNodeWriteOffset
==============
*/

void __fastcall StreamDefragRegion<1>::DecreaseVASizeUsedForNodeWriteOffset(StreamDefragRegion<1> *this, const StreamDefragAllocNode *node)
{
  ?DecreaseVASizeUsedForNodeWriteOffset@?$StreamDefragRegion@$00@@AEAAXPEBUStreamDefragAllocNode@@@Z(this, node);
}

/*
==============
Stream_Defrag_OnLoadItem
==============
*/

void __fastcall Stream_Defrag_OnLoadItem(StreamItemType itemType, unsigned int itemPartIndex, streamer_handle_t handle)
{
  ?Stream_Defrag_OnLoadItem@@YAXW4StreamItemType@@IUstreamer_handle_t@@@Z(itemType, itemPartIndex, handle);
}

/*
==============
Stream_Defrag_OnUnloadItem
==============
*/

void __fastcall Stream_Defrag_OnUnloadItem(StreamItemType itemType, unsigned int itemPartIndex, streamer_handle_t handle)
{
  ?Stream_Defrag_OnUnloadItem@@YAXW4StreamItemType@@IUstreamer_handle_t@@@Z(itemType, itemPartIndex, handle);
}

/*
==============
StreamDefrag::TrackDecommitParts
==============
*/

void __fastcall StreamDefrag::TrackDecommitParts(StreamDefrag *this, const StreamDefragCommand *command, unsigned __int64 addressOffset, unsigned int partBits)
{
  ?TrackDecommitParts@StreamDefrag@@AEAAXPEBUStreamDefragCommand@@_KI@Z(this, command, addressOffset, partBits);
}

/*
==============
StreamDefrag::Unmap
==============
*/

unsigned __int64 __fastcall StreamDefrag::Unmap(StreamDefrag *this, StreamDefragCommand **command, StreamerMemPageCounts *unmappedPages)
{
  return ?Unmap@StreamDefrag@@AEAA_KAEAPEAUStreamDefragCommand@@AEAUStreamerMemPageCounts@@@Z(this, command, unmappedPages);
}

/*
==============
StreamDefrag::AddPagesToDefragPageSurplus
==============
*/

void __fastcall StreamDefrag::AddPagesToDefragPageSurplus(StreamDefrag *this, const StreamerMemPageCounts *pages)
{
  ?AddPagesToDefragPageSurplus@StreamDefrag@@AEAAXAEBUStreamerMemPageCounts@@@Z(this, pages);
}

/*
==============
Stream_AddressSpace_ResolveHandle
==============
*/

unsigned __int8 *__fastcall Stream_AddressSpace_ResolveHandle(const streamer_handle_t *handle)
{
  return ?Stream_AddressSpace_ResolveHandle@@YAPEAEAEBUstreamer_handle_t@@@Z(handle);
}

/*
==============
StreamDefrag::IsIdle
==============
*/

bool __fastcall StreamDefrag::IsIdle(StreamDefrag *this)
{
  return ?IsIdle@StreamDefrag@@AEBA_NXZ(this);
}

/*
==============
StreamDefragRegion<1>::DecreaseVASizeUsedInternal
==============
*/

void __fastcall StreamDefragRegion<1>::DecreaseVASizeUsedInternal(StreamDefragRegion<1> *this, const StreamDefragAllocNode *node, unsigned int vAddrOffset, unsigned int vaSize, unsigned int vAddrEndAlignLog2)
{
  ?DecreaseVASizeUsedInternal@?$StreamDefragRegion@$00@@AEAAXPEBUStreamDefragAllocNode@@III@Z(this, node, vAddrOffset, vaSize, vAddrEndAlignLog2);
}

/*
==============
Stream_Defrag_UnlockDefragCount
==============
*/

void Stream_Defrag_UnlockDefragCount(void)
{
  ?Stream_Defrag_UnlockDefragCount@@YAXXZ();
}

/*
==============
StreamDefrag::UnlockDefragCount
==============
*/

void __fastcall StreamDefrag::UnlockDefragCount(StreamDefrag *this)
{
  ?UnlockDefragCount@StreamDefrag@@QEAAXXZ(this);
}

/*
==============
StreamDefrag::ValidateNextTailAddresses
==============
*/

void __fastcall StreamDefrag::ValidateNextTailAddresses(StreamDefrag *this)
{
  ?ValidateNextTailAddresses@StreamDefrag@@QEBAXXZ(this);
}

/*
==============
Stream_AddressSpace_ResolveAddrUnmap
==============
*/

unsigned __int8 *__fastcall Stream_AddressSpace_ResolveAddrUnmap(const StreamUnmapCmdData *streamUnmap)
{
  return ?Stream_AddressSpace_ResolveAddrUnmap@@YAPEAEPEBUStreamUnmapCmdData@@@Z(streamUnmap);
}

/*
==============
StreamDefrag::PostLevelUnload
==============
*/

void __fastcall StreamDefrag::PostLevelUnload(StreamDefrag *this, const GfxBackEndData *data)
{
  ?PostLevelUnload@StreamDefrag@@QEAAXPEBUGfxBackEndData@@@Z(this, data);
}

/*
==============
Stream_AddressSpace_UnlockFrontendAddr
==============
*/

void __fastcall Stream_AddressSpace_UnlockFrontendAddr(streamer_handle_t handle, unsigned int part)
{
  ?Stream_AddressSpace_UnlockFrontendAddr@@YAXUstreamer_handle_t@@I@Z(handle, part);
}

/*
==============
Stream_AddressSpace_ResolveFrontendAddr
==============
*/

unsigned __int8 *__fastcall Stream_AddressSpace_ResolveFrontendAddr(streamer_handle_t handle)
{
  return ?Stream_AddressSpace_ResolveFrontendAddr@@YAPEAEUstreamer_handle_t@@@Z(handle);
}

/*
==============
StreamDefragRegion<1>::DecreaseVASizeUsedForUnmapCommand
==============
*/

void __fastcall StreamDefragRegion<1>::DecreaseVASizeUsedForUnmapCommand(StreamDefragRegion<1> *this, const StreamDefragCommand *unmapCmd)
{
  ?DecreaseVASizeUsedForUnmapCommand@?$StreamDefragRegion@$00@@AEAAXPEBUStreamDefragCommand@@@Z(this, unmapCmd);
}

/*
==============
StreamDefrag::InsertCommand<1>
==============
*/
void StreamDefrag::InsertCommand<1>(StreamDefrag *this, StreamDefragCommand *command)
{
  RSList<StreamDefragCommand> *v2; 
  StreamDefragCommand *mHead; 
  int v5; 
  Stream_Logger_Item v6; 
  StreamDefragAllocNode *node; 
  unsigned int size; 
  const unsigned __int8 *v9; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 

  v2 = &this->mDefragSteps[1];
  mHead = this->mDefragSteps[1].mHead;
  if ( mHead )
  {
    while ( 1 )
    {
      v5 = (int)(*((_DWORD *)mHead + 13) << 21) >> 21;
      if ( mHead->node == command->node )
        break;
      if ( v5 )
      {
        mHead += v5;
        if ( mHead )
          continue;
      }
      goto LABEL_8;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4317, ASSERT_TYPE_ASSERT, "(DefragStepCommands( STEP ).FindIf( [command]( const StreamDefragCommand *otherCommand ) { return otherCommand->node == command->node; } ) == nullptr)", (const char *)&queryFormat, "DefragStepCommands( STEP ).FindIf( [command]( const StreamDefragCommand *otherCommand ) { return otherCommand->node == command->node; } ) == nullptr") )
      __debugbreak();
  }
LABEL_8:
  if ( (*((_DWORD *)command->node + 4) & 0xC00000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4328, ASSERT_TYPE_ASSERT, "(command->node->defragRefCount > 0)", (const char *)&queryFormat, "command->node->defragRefCount > 0") )
    __debugbreak();
  RSList<StreamDefragCommand>::PushBack(v2, command);
  v6 = *Stream_Logger_MakeItem(&result, command->node);
  node = command->node;
  size = command->partSize[0] + command->partSize[1] + command->partSize[2] + command->partSize[3];
  item = v6;
  v9 = StrmOffsetToAddress((StreamMemPool)((*(_DWORD *)node >> 19) & 1), *((unsigned int *)node + 2));
  Stream_Logger_OnInsertDefragCommand("StreamDefrag::InsertCommand", NULL, &item, DODGE, v9, size);
}

/*
==============
StreamDefrag::InsertCommand<2>
==============
*/
void StreamDefrag::InsertCommand<2>(StreamDefrag *this, StreamDefragCommand *command)
{
  Stream_Logger_Item v4; 
  StreamDefragAllocNode *node; 
  unsigned __int64 v6; 
  unsigned int size; 
  const unsigned __int8 *v8; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 

  if ( (*((_DWORD *)command->node + 4) & 0xC00000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4328, ASSERT_TYPE_ASSERT, "(command->node->defragRefCount > 0)", (const char *)&queryFormat, "command->node->defragRefCount > 0") )
    __debugbreak();
  RSList<StreamDefragCommand>::PushBack(&this->mDefragSteps[2], command);
  v4 = *Stream_Logger_MakeItem(&result, command->node);
  node = command->node;
  v6 = *((unsigned int *)command + 11);
  size = command->partSize[0] + command->partSize[1] + command->partSize[2] + command->partSize[3];
  item = v4;
  v8 = StrmOffsetToAddress((StreamMemPool)((*(_DWORD *)node >> 19) & 1), v6);
  Stream_Logger_OnInsertDefragCommand("StreamDefrag::InsertCommand", NULL, &item, COUNT, v8, size);
}

/*
==============
StreamDefrag::InsertCommand<0>
==============
*/
void StreamDefrag::InsertCommand<0>(StreamDefrag *this, StreamDefragCommand *command)
{
  RSList<StreamDefragCommand> *mDefragSteps; 
  StreamDefragCommand *mHead; 
  StreamDefragAllocNode *node; 
  int v6; 
  StreamDefragCommand *v7; 
  int v8; 
  Stream_Logger_Item v9; 
  StreamDefragAllocNode *v10; 
  unsigned int size; 
  const unsigned __int8 *v12; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 

  mDefragSteps = this->mDefragSteps;
  mHead = this->mDefragSteps[0].mHead;
  if ( mHead )
  {
    node = command->node;
    while ( 1 )
    {
      v6 = (int)(*((_DWORD *)mHead + 13) << 21) >> 21;
      if ( mHead->node == node )
        break;
      if ( v6 )
      {
        mHead += v6;
        if ( mHead )
          continue;
      }
      goto LABEL_9;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4317, ASSERT_TYPE_ASSERT, "(DefragStepCommands( STEP ).FindIf( [command]( const StreamDefragCommand *otherCommand ) { return otherCommand->node == command->node; } ) == nullptr)", (const char *)&queryFormat, "DefragStepCommands( STEP ).FindIf( [command]( const StreamDefragCommand *otherCommand ) { return otherCommand->node == command->node; } ) == nullptr") )
      __debugbreak();
  }
LABEL_9:
  if ( (*((_DWORD *)command->node + 4) & 0x380000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4322, ASSERT_TYPE_ASSERT, "(command->node->defragLockCount == 0)", (const char *)&queryFormat, "command->node->defragLockCount == 0") )
    __debugbreak();
  if ( (*((_DWORD *)command->node + 4) & 0xC00000u) >= 0xC00000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4323, ASSERT_TYPE_ASSERT, "(command->node->defragRefCount < MAX_DEFRAG_REFCOUNT)", (const char *)&queryFormat, "command->node->defragRefCount < MAX_DEFRAG_REFCOUNT") )
    __debugbreak();
  v7 = mDefragSteps->mHead;
  if ( mDefragSteps->mHead )
  {
    while ( 1 )
    {
      v8 = (int)(*((_DWORD *)v7 + 13) << 21) >> 21;
      if ( v7->node == command->node )
        break;
      if ( v8 )
      {
        v7 += v8;
        if ( v7 )
          continue;
      }
      goto LABEL_22;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4324, ASSERT_TYPE_ASSERT, "(!DefragStepCommands( StreamDefragStep::COPY ).FindIf( [command]( const StreamDefragCommand *cmd ) { return cmd->node == command->node; } ))", (const char *)&queryFormat, "!DefragStepCommands( StreamDefragStep::COPY ).FindIf( [command]( const StreamDefragCommand *cmd ) { return cmd->node == command->node; } )") )
      __debugbreak();
  }
LABEL_22:
  *((_DWORD *)command->node + 4) ^= (*((_DWORD *)command->node + 4) ^ (*((_DWORD *)command->node + 4) + 0x400000)) & 0xC00000;
  if ( (*((_DWORD *)command->node + 4) & 0xC00000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4328, ASSERT_TYPE_ASSERT, "(command->node->defragRefCount > 0)", (const char *)&queryFormat, "command->node->defragRefCount > 0") )
    __debugbreak();
  RSList<StreamDefragCommand>::PushBack(mDefragSteps, command);
  v9 = *Stream_Logger_MakeItem(&result, command->node);
  v10 = command->node;
  size = command->partSize[0] + command->partSize[1] + command->partSize[2] + command->partSize[3];
  item = v9;
  v12 = StrmOffsetToAddress((StreamMemPool)((*(_DWORD *)v10 >> 19) & 1), *((unsigned int *)v10 + 2));
  Stream_Logger_OnInsertDefragCommand("StreamDefrag::InsertCommand", NULL, &item, MOVEMENT, v12, size);
}

/*
==============
StreamDefrag::StreamDefrag
==============
*/
void StreamDefrag::StreamDefrag(StreamDefrag *this)
{
  StreamDefragAllocNode *mNodePool; 
  StreamDefragAllocNode *v3; 
  __int64 v4; 
  StreamDefrag::AddressSpace *mAddressSpaces; 
  __int64 v6; 
  __int64 v7; 
  RList<StreamNextTailAddress> *mNextTailAddresses; 
  _DWORD *v9; 
  __int64 v10; 
  RSList<StreamDefragCommand> *mDefragSteps; 
  __int64 v12; 
  const dvar_t *v13; 
  __int64 v14; 
  unsigned __int64 i; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  _DWORD *v22; 
  unsigned int v23; 
  __int64 v24; 
  unsigned __int64 j; 
  unsigned __int64 mAddrTail; 
  StreamNextTailAddress *mHead; 
  __int16 v28; 
  StreamNextTailAddress *v29; 
  unsigned int v30; 
  StreamAddressSpace v31; 

  mNodePool = this->mFreePool.mNodePool;
  memset_0(this->mFreePool.mNodePool, 0, sizeof(this->mFreePool.mNodePool));
  this->mFreePool.mHead = mNodePool;
  v3 = mNodePool;
  v4 = 164863i64;
  do
  {
    *(_DWORD *)v3 &= 0xFFF80001;
    *(_DWORD *)v3++ |= 1u;
    --v4;
  }
  while ( v4 );
  *(_DWORD *)&mNodePool[164863] &= 0xFFF80000;
  mAddressSpaces = this->mAddressSpaces;
  v6 = 2i64;
  v7 = 2i64;
  do
  {
    StreamDefrag::AddressSpace::AddressSpace(mAddressSpaces++);
    --v7;
  }
  while ( v7 );
  memset_0(this->mNextTailAddressPool.mNodePool, 0, sizeof(this->mNextTailAddressPool.mNodePool));
  this->mNextTailAddressPool.mHead = this->mNextTailAddressPool.mNodePool;
  *((_WORD *)this->mNextTailAddressPool.mNodePool + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[1] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[2] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[3] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[4] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[5] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[6] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[7] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[8] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[9] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[10] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[11] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[12] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[13] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[14] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[15] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[16] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[17] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[18] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[19] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[20] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[21] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[22] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[23] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[24] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[25] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[26] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[27] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[28] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[29] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[30] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[31] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[32] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[33] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[34] + 8) = 1;
  *((_WORD *)&this->mNextTailAddressPool.mNodePool[35] + 8) = 0;
  mNextTailAddresses = this->mNextTailAddresses;
  do
  {
    RList<StreamNextTailAddress>::RList<StreamNextTailAddress>(mNextTailAddresses++);
    --v6;
  }
  while ( v6 );
  memset_0(this->mDefragPool.mNodePool, 0, sizeof(this->mDefragPool.mNodePool));
  this->mDefragPool.mHead = this->mDefragPool.mNodePool;
  v9 = (_DWORD *)((char *)&this->mDefragPool.mNodePool[1] + 52);
  v10 = 341i64;
  do
  {
    *(v9 - 14) &= 0xFFFFF801;
    *(v9 - 14) |= 1u;
    *v9 &= 0xFFFFF801;
    *v9 |= 1u;
    v9[14] &= 0xFFFFF801;
    v9[14] |= 1u;
    v9 += 42;
    --v10;
  }
  while ( v10 );
  *((_DWORD *)&this->mDefragPool.mNodePool[1023] + 13) &= 0xFFFFF800;
  mDefragSteps = this->mDefragSteps;
  v12 = 3i64;
  do
  {
    RSList<StreamDefragCommand>::RSList<StreamDefragCommand>(mDefragSteps++);
    --v12;
  }
  while ( v12 );
  this->mAsyncVAMaps.mHead = NULL;
  this->mAsyncVAUnmaps.mHead = NULL;
  this->mAsyncCPUMemCopies.mHead = NULL;
  this->mCopyMode = 5;
  this->mGPUCopyFenceCounter = 0;
  this->mDMACopyFence = 0i64;
  this->mDefragPages.mUpdateID = 0i64;
  this->mDefragPages.mPages = 0i64;
  this->mDefragPages.mCookie = -1061110033;
  *(_QWORD *)this->mDefragPageSurplus = 0i64;
  this->mDefragFrameIndex = 1;
  v13 = DCONST_DVARINT_stream_defragFrameDepth;
  if ( !DCONST_DVARINT_stream_defragFrameDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragFrameDepth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  this->mDefragUnmapFrameDepth = v13->current.unsignedInt;
  *(_WORD *)&this->mAsyncVAProcess = 257;
  this->mFrameOpen = 0;
  this->mDefragLockCriticalSection.readCount = 0;
  this->mDefragLockCriticalSection.writeCount = 0;
  this->mDefragLockCriticalSection.tempPriority.threadHandle = NULL;
  *(_QWORD *)&this->mDefragLockCriticalSection.tempPriority.oldPriority = 0i64;
  this->mDefragLockCriticalSection.writeThreadId = 0;
  this->mDefragLockCountCriticalSection.readCount = 0;
  this->mDefragLockCountCriticalSection.writeCount = 0;
  this->mDefragLockCountCriticalSection.tempPriority.threadHandle = NULL;
  *(_QWORD *)&this->mDefragLockCountCriticalSection.tempPriority.oldPriority = 0i64;
  this->mDefragLockCountCriticalSection.writeThreadId = 0;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2507, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v14 = 0i64;
  for ( i = 0i64; i < 2; ++i )
  {
    v31 = s_streamAddressManager->m_addressSpaces[(unsigned int)v14];
    __asm { vpextrq r15, xmm0, 1 }
    if ( _R15 <= MOVEABLE_REGION_SIZE[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2514, ASSERT_TYPE_ASSERT, "(addressSpace.size > MOVEABLE_REGION_SIZE[i])", (const char *)&queryFormat, "addressSpace.size > MOVEABLE_REGION_SIZE[i]") )
      __debugbreak();
    if ( MOVEABLE_REGION_SIZE[v14] >= STREAM_MEM_RESERVE_SIZE[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2515, ASSERT_TYPE_ASSERT, "(MOVEABLE_REGION_SIZE[i] < STREAM_MEM_RESERVE_SIZE[i])", (const char *)&queryFormat, "MOVEABLE_REGION_SIZE[i] < STREAM_MEM_RESERVE_SIZE[i]") )
      __debugbreak();
    v17 = MOVEABLE_REGION_SIZE[v14];
    if ( this->mAddressSpaces[i].mMoveableRegion.mAddrBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1104, ASSERT_TYPE_ASSERT, "(mAddrBase == 0ull)", (const char *)&queryFormat, "mAddrBase == 0ull") )
      __debugbreak();
    if ( !v31.base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1105, ASSERT_TYPE_ASSERT, "(base != 0ull)", (const char *)&queryFormat, "base != 0ull") )
      __debugbreak();
    if ( LOWORD(v31.base) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1106, ASSERT_TYPE_ASSERT, "(IsAligned( base, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( base, MEM_PHYSICAL_PAGE_SIZE )") )
      __debugbreak();
    if ( (_WORD)v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1107, ASSERT_TYPE_ASSERT, "(IsAligned( size, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( size, MEM_PHYSICAL_PAGE_SIZE )") )
      __debugbreak();
    this->mAddressSpaces[i].mMoveableRegion.mPool = v14;
    this->mAddressSpaces[i].mMoveableRegion.mAddrBase = v31.base;
    this->mAddressSpaces[i].mMoveableRegion.mAddrEnd = v31.base + v17;
    v18 = v31.base + ((9 * (v17 / 0xA)) & 0xFFFFFFFFFFFF0000ui64);
    this->mAddressSpaces[i].mMoveableRegion.mAddrHead = v18;
    this->mAddressSpaces[i].mMoveableRegion.mAddrTail = v18;
    this->mAddressSpaces[i].mMoveableRegion.mDefragSteps = (const RSList<StreamDefragCommand> (*)[3])this->mDefragSteps;
    this->mAddressSpaces[i].mMoveableRegion.mNextTailAddresses = (const RList<StreamNextTailAddress> (*)[2])this->mNextTailAddresses;
    v19 = MOVEABLE_REGION_SIZE[v14];
    v20 = _R15 - v19;
    v21 = v19 + v31.base;
    if ( this->mAddressSpaces[i].mFixedRegion.mAddrBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1104, ASSERT_TYPE_ASSERT, "(mAddrBase == 0ull)", (const char *)&queryFormat, "mAddrBase == 0ull") )
      __debugbreak();
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1105, ASSERT_TYPE_ASSERT, "(base != 0ull)", (const char *)&queryFormat, "base != 0ull") )
      __debugbreak();
    if ( (_WORD)v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1106, ASSERT_TYPE_ASSERT, "(IsAligned( base, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( base, MEM_PHYSICAL_PAGE_SIZE )") )
      __debugbreak();
    if ( (_WORD)v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1107, ASSERT_TYPE_ASSERT, "(IsAligned( size, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( size, MEM_PHYSICAL_PAGE_SIZE )") )
      __debugbreak();
    this->mAddressSpaces[i].mFixedRegion.mPool = v14;
    this->mAddressSpaces[i].mFixedRegion.mAddrBase = v21;
    this->mAddressSpaces[i].mFixedRegion.mAddrEnd = v21 + v20;
    this->mAddressSpaces[i].mFixedRegion.mAddrHead = v21;
    this->mAddressSpaces[i].mFixedRegion.mAddrTail = v21;
    this->mAddressSpaces[i].mFixedRegion.mDefragSteps = (const RSList<StreamDefragCommand> (*)[3])this->mDefragSteps;
    this->mAddressSpaces[i].mFixedRegion.mNextTailAddresses = (const RList<StreamNextTailAddress> (*)[2])this->mNextTailAddresses;
    ++v14;
  }
  if ( !StreamerMemLoan::MakeReady(&this->mDefragPages, DODGE, 0x1080000ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2523, ASSERT_TYPE_ASSERT, "(mDefragPages.MakeReady( StreamMemPool::GPU, DEFRAG_PAGE_COUNT * MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "mDefragPages.MakeReady( StreamMemPool::GPU, DEFRAG_PAGE_COUNT * MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  if ( StreamerMemLoan::TotalPages(&this->mDefragPages) != 264 )
  {
    v30 = StreamerMemLoan::TotalPages(&this->mDefragPages);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2524, ASSERT_TYPE_ASSERT, "( mDefragPages.TotalPages() ) == ( DEFRAG_PAGE_COUNT )", "%s == %s\n\t%u, %u", "mDefragPages.TotalPages()", "DEFRAG_PAGE_COUNT", v30, 264) )
      __debugbreak();
  }
  if ( this->mFreePool.mNodePool != (StreamDefragAllocNode *)this->mAddressSpaces )
  {
    v22 = (_DWORD *)((char *)this->mFreePool.mNodePool + 4);
    do
    {
      *v22 |= 3u;
      v22 += 5;
    }
    while ( v22 - 1 != (_DWORD *)this->mAddressSpaces );
  }
  v23 = this->mDefragUnmapFrameDepth + this->mDefragFrameIndex + 1;
  v24 = 0i64;
  for ( j = 3298672i64; j < 0x325590; j += 16i64 )
  {
    mAddrTail = this->mAddressSpaces[v24].mMoveableRegion.mAddrTail;
    mHead = this->mNextTailAddressPool.mHead;
    if ( mHead )
    {
      v28 = *((_WORD *)mHead + 8);
      if ( v28 )
        v29 = &mHead[v28];
      else
        v29 = NULL;
      this->mNextTailAddressPool.mHead = v29;
      *((_WORD *)mHead + 8) = 0;
    }
    else
    {
      mHead = NULL;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2538, ASSERT_TYPE_ASSERT, "(nextTailAddress)", (const char *)&queryFormat, "nextTailAddress") )
        __debugbreak();
    }
    mHead->vAddrCurTail = mAddrTail;
    mHead->vAddrNextTail = mAddrTail;
    mHead->unmapFrame = v23;
    RList<StreamNextTailAddress>::PushBack((RList<StreamNextTailAddress> *)((char *)this + j), mHead);
    ++v24;
  }
  this->mGPUCopyFenceAddr = (unsigned __int64 *)PMem_Alloc(8ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "Stream Defrag Fence");
}

/*
==============
StreamDefrag::~StreamDefrag
==============
*/
void StreamDefrag::~StreamDefrag(StreamDefrag *this)
{
  R_SyncRenderThread();
  StreamDefrag::FlushAsyncVA(this, Block, MapsOnly, 0);
  StreamDefrag::FlushAsyncCPUMemCpy(this, Block, 0);
  StreamDefrag::FlushAsyncVA(this, Block, UnmapsOnly, 0);
  StreamerMemLoan::~StreamerMemLoan(&this->mDefragPages);
}

/*
==============
StreamDefrag::AddPagesToDefragPageSurplus
==============
*/
void StreamDefrag::AddPagesToDefragPageSurplus(StreamDefrag *this, const StreamerMemPageCounts *pages)
{
  unsigned __int64 v4; 
  volatile int *mDefragPageSurplus; 
  __int64 v6; 
  Mem_Pool MemPoolFromStreamMemPool; 
  unsigned int FreePageCountForCommit; 
  Mem_Pool v9; 
  __int64 v10; 
  __int64 v11; 

  v4 = 0i64;
  mDefragPageSurplus = this->mDefragPageSurplus;
  do
  {
    v6 = (int)pages->pages[(unsigned int)v4];
    if ( (_DWORD)v6 )
    {
      if ( (unsigned int)v6 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", v6, "unsigned", (unsigned int)v6) )
        __debugbreak();
      if ( ((unsigned __int8)mDefragPageSurplus & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)mDefragPageSurplus) )
        __debugbreak();
      _InterlockedExchangeAdd(mDefragPageSurplus, v6);
      MemPoolFromStreamMemPool = Stream_Alloc_GetMemPoolFromStreamMemPool((StreamMemPool)v4);
      FreePageCountForCommit = Mem_Paged_GetFreePageCountForCommit(MemPoolFromStreamMemPool);
      if ( (unsigned int)v6 + StreamerMemLoan::PagesForPool(&this->mDefragPages, (StreamMemPool)v4) > FreePageCountForCommit )
      {
        v9 = Stream_Alloc_GetMemPoolFromStreamMemPool((StreamMemPool)v4);
        LODWORD(v11) = Mem_Paged_GetFreePageCountForCommit(v9);
        LODWORD(v10) = v6 + StreamerMemLoan::PagesForPool(&this->mDefragPages, (StreamMemPool)v4);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4453, ASSERT_TYPE_ASSERT, "( mDefragPages.PagesForPool( pool ) + pageCount ) <= ( Mem_Paged_GetFreePageCountForCommit( Stream_Alloc_GetMemPoolFromStreamMemPool( pool ) ) )", "%s <= %s\n\t%u, %u", "mDefragPages.PagesForPool( pool ) + pageCount", "Mem_Paged_GetFreePageCountForCommit( Stream_Alloc_GetMemPoolFromStreamMemPool( pool ) )", v10, v11) )
          __debugbreak();
      }
    }
    ++v4;
    ++mDefragPageSurplus;
  }
  while ( v4 < 2 );
}

/*
==============
StreamDefragRegion<1>::AssertValidAddressRange
==============
*/
void StreamDefragRegion<1>::AssertValidAddressRange(StreamDefragRegion<1> *this, const unsigned __int8 *addrBegin, const unsigned __int8 *addrEnd)
{
  unsigned __int64 mAddrTail; 
  const unsigned __int8 *mAddrHead; 
  int v8; 
  bool v9; 

  if ( ((unsigned __int8)addrBegin & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1333, ASSERT_TYPE_ASSERT, "(IsAligned( addrBegin, MIN_DEFRAG_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( addrBegin, MIN_DEFRAG_ALIGNMENT )") )
    __debugbreak();
  if ( ((unsigned __int8)addrEnd & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1334, ASSERT_TYPE_ASSERT, "(IsAligned( addrEnd, MIN_DEFRAG_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( addrEnd, MIN_DEFRAG_ALIGNMENT )") )
    __debugbreak();
  if ( addrBegin > addrEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1335, ASSERT_TYPE_ASSERT, "( addrBegin ) <= ( addrEnd )", "%s <= %s\n\t%p, %p", "addrBegin", "addrEnd", addrBegin, addrEnd) )
    __debugbreak();
  mAddrTail = this->mAddrTail;
  if ( mAddrTail >= this->mAddrHead )
  {
    if ( (unsigned __int64)addrBegin >= mAddrTail )
    {
      if ( (unsigned __int64)addrEnd <= this->mAddrEnd )
        return;
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1345, ASSERT_TYPE_ASSERT, "( addrEnd ) <= ( reinterpret_cast<const byte *>( mAddrEnd ) )", "%s <= %s\n\t%p, %p", "addrEnd", "reinterpret_cast<const byte *>( mAddrEnd )", addrEnd, (const void *)this->mAddrEnd);
      goto LABEL_25;
    }
    if ( (unsigned __int64)addrBegin < this->mAddrBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1349, ASSERT_TYPE_ASSERT, "( addrBegin ) >= ( reinterpret_cast<const byte *>( mAddrBase ) )", "%s >= %s\n\t%p, %p", "addrBegin", "reinterpret_cast<const byte *>( mAddrBase )", addrBegin, (const void *)this->mAddrBase) )
      __debugbreak();
    mAddrHead = (const unsigned __int8 *)this->mAddrHead;
    if ( addrEnd > mAddrHead )
    {
      v8 = 1350;
      goto LABEL_24;
    }
  }
  else
  {
    if ( (unsigned __int64)addrBegin < mAddrTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1338, ASSERT_TYPE_ASSERT, "( addrBegin ) >= ( reinterpret_cast<const byte *>( mAddrTail ) )", "%s >= %s\n\t%p, %p", "addrBegin", "reinterpret_cast<const byte *>( mAddrTail )", addrBegin, (const void *)this->mAddrTail) )
      __debugbreak();
    mAddrHead = (const unsigned __int8 *)this->mAddrHead;
    if ( addrEnd > mAddrHead )
    {
      v8 = 1339;
LABEL_24:
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", v8, ASSERT_TYPE_ASSERT, "( addrEnd ) <= ( reinterpret_cast<const byte *>( mAddrHead ) )", "%s <= %s\n\t%p, %p", "addrEnd", "reinterpret_cast<const byte *>( mAddrHead )", addrEnd, mAddrHead);
LABEL_25:
      if ( v9 )
        __debugbreak();
    }
  }
}

/*
==============
StreamDefragRegion<0>::AssertValidAddressRange
==============
*/
void StreamDefragRegion<0>::AssertValidAddressRange(StreamDefragRegion<0> *this, const unsigned __int8 *addrBegin, const unsigned __int8 *addrEnd)
{
  if ( ((unsigned __int8)addrBegin & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1333, ASSERT_TYPE_ASSERT, "(IsAligned( addrBegin, MIN_DEFRAG_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( addrBegin, MIN_DEFRAG_ALIGNMENT )") )
    __debugbreak();
  if ( ((unsigned __int8)addrEnd & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1334, ASSERT_TYPE_ASSERT, "(IsAligned( addrEnd, MIN_DEFRAG_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( addrEnd, MIN_DEFRAG_ALIGNMENT )") )
    __debugbreak();
  if ( addrBegin > addrEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1335, ASSERT_TYPE_ASSERT, "( addrBegin ) <= ( addrEnd )", "%s <= %s\n\t%p, %p", "addrBegin", "addrEnd", addrBegin, addrEnd) )
    __debugbreak();
  if ( (unsigned __int64)addrBegin < this->mAddrTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1338, ASSERT_TYPE_ASSERT, "( addrBegin ) >= ( reinterpret_cast<const byte *>( mAddrTail ) )", "%s >= %s\n\t%p, %p", "addrBegin", "reinterpret_cast<const byte *>( mAddrTail )", addrBegin, (const void *)this->mAddrTail) )
    __debugbreak();
  if ( (unsigned __int64)addrEnd > this->mAddrHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1339, ASSERT_TYPE_ASSERT, "( addrEnd ) <= ( reinterpret_cast<const byte *>( mAddrHead ) )", "%s <= %s\n\t%p, %p", "addrEnd", "reinterpret_cast<const byte *>( mAddrHead )", addrEnd, (const void *)this->mAddrHead) )
    __debugbreak();
}

/*
==============
StreamDefragRegion<1>::Assign
==============
*/
unsigned __int64 StreamDefragRegion<1>::Assign(StreamDefragRegion<1> *this, StreamDefragAllocNode *node, unsigned __int64 allocSize, unsigned __int64 alignment, unsigned int *startOverlap)
{
  unsigned __int64 v9; 
  unsigned __int64 mAddrHead; 
  unsigned __int64 mAddrTail; 
  StreamDefragAllocNode *mTail; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 mAddrEnd; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int8 *v19; 
  unsigned __int64 v20; 
  unsigned __int64 mAddrBase; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  unsigned __int64 v24; 
  int v25; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  char v29; 
  unsigned __int64 mVaSizeUsed; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  unsigned int v36; 

  Stream_Defrag_CheckLocks();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1708, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !allocSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1709, ASSERT_TYPE_ASSERT, "(allocSize > 0)", (const char *)&queryFormat, "allocSize > 0") )
    __debugbreak();
  if ( allocSize >= this->mAddrEnd - this->mAddrBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1710, ASSERT_TYPE_ASSERT, "(allocSize < GetVASizeTotal())", (const char *)&queryFormat, "allocSize < GetVASizeTotal()") )
    __debugbreak();
  if ( (allocSize & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1711, ASSERT_TYPE_ASSERT, "(allocSize % MEM_SUB_PAGE_SIZE == 0)", (const char *)&queryFormat, "allocSize % MEM_SUB_PAGE_SIZE == 0") )
    __debugbreak();
  if ( alignment < 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1712, ASSERT_TYPE_ASSERT, "( alignment ) >= ( REGION_DEFAULT_ALIGNMENT )", "%s >= %s\n\t%zu, %zu", "alignment", "REGION_DEFAULT_ALIGNMENT", alignment, 0x10ui64) )
    __debugbreak();
  if ( alignment > 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1713, ASSERT_TYPE_ASSERT, "( alignment ) <= ( MAX_DEFRAG_ALIGNMENT )", "%s <= %s\n\t%zu, %zu", "alignment", "MAX_DEFRAG_ALIGNMENT", alignment, 0x10000ui64) )
    __debugbreak();
  v9 = alignment & (alignment - 1);
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1714, ASSERT_TYPE_ASSERT, "(IsPowerOf2( alignment ))", (const char *)&queryFormat, "IsPowerOf2( alignment )") )
    __debugbreak();
  mAddrHead = this->mAddrHead;
  if ( (mAddrHead < this->mAddrBase || mAddrHead > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1716, ASSERT_TYPE_ASSERT, "(mAddrHead >= mAddrBase && mAddrHead <= mAddrEnd)", (const char *)&queryFormat, "mAddrHead >= mAddrBase && mAddrHead <= mAddrEnd") )
    __debugbreak();
  mAddrTail = this->mAddrTail;
  if ( (mAddrTail < this->mAddrBase || mAddrTail > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1717, ASSERT_TYPE_ASSERT, "(mAddrTail >= mAddrBase && mAddrTail <= mAddrEnd)", (const char *)&queryFormat, "mAddrTail >= mAddrBase && mAddrTail <= mAddrEnd") )
    __debugbreak();
  if ( this->mAddrTail == this->mAddrHead && this->mAllocations.mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1718, ASSERT_TYPE_ASSERT, "(mAddrTail != mAddrHead || mAllocations.Empty())", (const char *)&queryFormat, "mAddrTail != mAddrHead || mAllocations.Empty()") )
    __debugbreak();
  if ( this->mInvalidNodes.mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1719, ASSERT_TYPE_ASSERT, "(mInvalidNodes.Empty())", (const char *)&queryFormat, "mInvalidNodes.Empty()") )
    __debugbreak();
  mTail = this->mAllocations.mTail;
  if ( mTail == node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1722, ASSERT_TYPE_ASSERT, "(headNode != node)", (const char *)&queryFormat, "headNode != node") )
    __debugbreak();
  v13 = this->mAddrHead;
  v36 = 0;
  if ( startOverlap )
  {
    v14 = *startOverlap;
    v36 = v14;
    v15 = (unsigned int)v14;
    if ( allocSize <= v14 )
    {
      LODWORD(v35) = *startOverlap;
      LODWORD(v34) = allocSize;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1730, ASSERT_TYPE_ASSERT, "( allocSize ) > ( overlapToUse )", "%s > %s\n\t%u, %u", "allocSize", "overlapToUse", v34, v35) )
        __debugbreak();
    }
    if ( (!alignment || v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
      __debugbreak();
    if ( ((alignment - 1) & v15) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1731, ASSERT_TYPE_ASSERT, "(IsAligned( overlapToUse, alignment ))", (const char *)&queryFormat, "IsAligned( overlapToUse, alignment )") )
      __debugbreak();
    if ( this->mAddrHead - this->mAddrBase < v15 )
    {
      v36 = 0;
      *startOverlap = 0;
    }
    else
    {
      v13 = this->mAddrHead - v15;
    }
  }
  if ( (!alignment || v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 679, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  mAddrEnd = this->mAddrEnd;
  v17 = ~(alignment - 1) & (alignment + v13 - 1);
  v18 = v17 - v13;
  v19 = (unsigned __int8 *)(v17 + allocSize);
  v20 = v17 + allocSize;
  if ( v17 + allocSize <= mAddrEnd )
  {
    v26 = this->mAddrTail;
    v27 = this->mAddrHead;
    if ( v26 > v27 && v26 < (unsigned __int64)v19 )
    {
      Com_PrintError(0, "Streamer is out of virtual address space in the moveable region (pool: %d, address range [0x%zx, 0x%zx], used: %zu, committed: %zu) trying to alloc %zu bytes; alloc caused head to catch up with tail overwriting existing memory: tail=0x%zx, head=0x%zx, newHead=0x%zx\n", (unsigned int)this->mPool, this->mAddrBase, mAddrEnd, this->mVaSizeUsed, this->mVaSizeCommitted, allocSize, v26, v27, v17 + allocSize);
      Stream_Logger_Dump(NULL);
      LODWORD(v33) = this->mPool;
      Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x10, "StreamDefragRegion<1>::Assign", "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1795, "Streamer is out of virtual address space in the moveable region (pool: %d, address range [0x%zx, 0x%zx], used: %zu, committed: %zu) trying to alloc %zu bytes; alloc caused head to catch up with tail overwriting existing memory: tail=0x%zx, head=0x%zx, newHead=0x%zx\n", v33, this->mAddrBase, this->mAddrEnd, this->mVaSizeUsed, this->mVaSizeCommitted, allocSize, this->mAddrTail, this->mAddrHead, v17 + allocSize);
    }
    if ( mTail )
    {
      v28 = *((unsigned int *)mTail + 1);
      if ( (v28 & 0x7800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1800, ASSERT_TYPE_ASSERT, "( headNode->vAddrEndAlignLog2 ) == ( 0 )", "%s == %s\n\t%llu, %llu", "headNode->vAddrEndAlignLog2", "0", (v28 >> 23) & 0xF, 0i64) )
        __debugbreak();
      v29 = BitEncodeAlignment(alignment);
      *((_DWORD *)mTail + 1) &= 0xF87FFFFF;
      *((_DWORD *)mTail + 1) |= (v29 & 0xF) << 23;
    }
  }
  else
  {
    if ( !mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1759, ASSERT_TYPE_ASSERT, "(headNode)", (const char *)&queryFormat, "headNode") )
      __debugbreak();
    mAddrBase = this->mAddrBase;
    if ( (!alignment || (alignment & (alignment - 1)) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
      __debugbreak();
    if ( ((alignment - 1) & mAddrBase) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1762, ASSERT_TYPE_ASSERT, "(IsAligned( mAddrBase, alignment ))", (const char *)&queryFormat, "IsAligned( mAddrBase, alignment )") )
      __debugbreak();
    v17 = this->mAddrBase;
    v18 = 0i64;
    v22 = this->mAddrTail;
    v23 = this->mAddrHead;
    v19 = (unsigned __int8 *)(v17 + allocSize);
    v20 = v17 + allocSize;
    if ( v22 > v23 && v22 < this->mAddrEnd || v22 >= v17 && v22 < (unsigned __int64)v19 )
    {
      Com_PrintError(0, "Streamer is out of virtual address space in the moveable region (pool: %d, address range [0x%zx, 0x%zx], used: %zu, committed: %zu) trying to alloc %zu bytes; alloc caused head to catch up with tail overwriting existing memory: tail=0x%zx, head=0x%zx, newHead=0x%zx\n", (unsigned int)this->mPool, v17, this->mAddrEnd, this->mVaSizeUsed, this->mVaSizeCommitted, allocSize, v22, v23, v17 + allocSize);
      Stream_Logger_Dump(NULL);
      LODWORD(v32) = this->mPool;
      Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x10, "StreamDefragRegion<1>::Assign", "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1771, "Streamer is out of virtual address space in the moveable region (pool: %d, address range [0x%zx, 0x%zx], used: %zu, committed: %zu) trying to alloc %zu bytes; alloc caused head to catch up with tail overwriting existing memory: tail=0x%zx, head=0x%zx, newHead=0x%zx\n", v32, this->mAddrBase, this->mAddrEnd, this->mVaSizeUsed, this->mVaSizeCommitted, allocSize, this->mAddrTail, this->mAddrHead, v17 + allocSize);
    }
    v24 = *((unsigned int *)mTail + 1);
    if ( (v24 & 0x7800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1780, ASSERT_TYPE_ASSERT, "( headNode->vAddrEndAlignLog2 ) == ( 0 )", "%s == %s\n\t%llu, %llu", "headNode->vAddrEndAlignLog2", "0", (v24 >> 23) & 0xF, 0i64) )
      __debugbreak();
    v25 = __lzcnt(0x10ui64) ^ 0x3F;
    if ( (~(1i64 << v25) & 0x10) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 570, ASSERT_TYPE_ASSERT, "( ( v & ~( uint64_t( 1 ) << ret ) ) == 0 )", "iLog2: %llu, 0x%llx is not power of 2", 16i64, 16i64) )
      __debugbreak();
    *((_DWORD *)mTail + 1) &= 0xF87FFFFF;
    *((_DWORD *)mTail + 1) |= ((v25 - (unsigned int)compileTimeLog2(8ui64)) << 23) & 0x7800000;
  }
  this->mVaSizeAlignWaste += v18;
  this->mVaSizeUsed += allocSize + v18 - v36;
  if ( (this->mVaSizeUsed & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1807, ASSERT_TYPE_ASSERT, "(mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  mVaSizeUsed = this->mVaSizeUsed;
  if ( mVaSizeUsed > this->mAddrEnd - this->mAddrBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1808, ASSERT_TYPE_ASSERT, "( mVaSizeUsed ) <= ( GetVASizeTotal() )", "%s <= %s\n\t%zu, %zu", "mVaSizeUsed", "GetVASizeTotal()", mVaSizeUsed, this->mAddrEnd - this->mAddrBase) )
    __debugbreak();
  this->mAddrHead = v20;
  if ( (v20 < this->mAddrBase || v20 > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1811, ASSERT_TYPE_ASSERT, "(mAddrHead >= mAddrBase && mAddrHead <= mAddrEnd)", (const char *)&queryFormat, "mAddrHead >= mAddrBase && mAddrHead <= mAddrEnd") )
    __debugbreak();
  if ( this->mAddrHead == this->mAddrTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1812, ASSERT_TYPE_ASSERT, "(mAddrHead != mAddrTail)", (const char *)&queryFormat, "mAddrHead != mAddrTail") )
    __debugbreak();
  Mem_Paged_CheckUnaliasedDecommittedSubPageMemory((unsigned __int8 *)(v36 + v17), v19);
  return StrmAddressToOffset(this->mPool, v17);
}

/*
==============
StreamDefragRegion<0>::Assign
==============
*/
unsigned __int64 StreamDefragRegion<0>::Assign(StreamDefragRegion<0> *this, StreamDefragAllocNode *node, unsigned __int64 allocSize, unsigned __int64 alignment, unsigned int *startOverlap)
{
  unsigned __int64 v9; 
  unsigned __int64 mAddrHead; 
  unsigned __int64 mAddrTail; 
  StreamDefragAllocNode *mTail; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 mAddrEnd; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  char v20; 
  unsigned __int64 mVaSizeUsed; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 

  Stream_Defrag_CheckLocks();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1708, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !allocSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1709, ASSERT_TYPE_ASSERT, "(allocSize > 0)", (const char *)&queryFormat, "allocSize > 0") )
    __debugbreak();
  if ( allocSize >= this->mAddrEnd - this->mAddrBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1710, ASSERT_TYPE_ASSERT, "(allocSize < GetVASizeTotal())", (const char *)&queryFormat, "allocSize < GetVASizeTotal()") )
    __debugbreak();
  if ( (allocSize & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1711, ASSERT_TYPE_ASSERT, "(allocSize % MEM_SUB_PAGE_SIZE == 0)", (const char *)&queryFormat, "allocSize % MEM_SUB_PAGE_SIZE == 0") )
    __debugbreak();
  if ( alignment < 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1712, ASSERT_TYPE_ASSERT, "( alignment ) >= ( REGION_DEFAULT_ALIGNMENT )", "%s >= %s\n\t%zu, %zu", "alignment", "REGION_DEFAULT_ALIGNMENT", alignment, 0x10000ui64) )
    __debugbreak();
  if ( alignment > 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1713, ASSERT_TYPE_ASSERT, "( alignment ) <= ( MAX_DEFRAG_ALIGNMENT )", "%s <= %s\n\t%zu, %zu", "alignment", "MAX_DEFRAG_ALIGNMENT", alignment, 0x10000ui64) )
    __debugbreak();
  v9 = alignment & (alignment - 1);
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1714, ASSERT_TYPE_ASSERT, "(IsPowerOf2( alignment ))", (const char *)&queryFormat, "IsPowerOf2( alignment )") )
    __debugbreak();
  if ( alignment != 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1715, ASSERT_TYPE_ASSERT, "(LOOPS_BACK || alignment == REGION_DEFAULT_ALIGNMENT)", (const char *)&queryFormat, "LOOPS_BACK || alignment == REGION_DEFAULT_ALIGNMENT") )
    __debugbreak();
  mAddrHead = this->mAddrHead;
  if ( (mAddrHead < this->mAddrBase || mAddrHead > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1716, ASSERT_TYPE_ASSERT, "(mAddrHead >= mAddrBase && mAddrHead <= mAddrEnd)", (const char *)&queryFormat, "mAddrHead >= mAddrBase && mAddrHead <= mAddrEnd") )
    __debugbreak();
  mAddrTail = this->mAddrTail;
  if ( (mAddrTail < this->mAddrBase || mAddrTail > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1717, ASSERT_TYPE_ASSERT, "(mAddrTail >= mAddrBase && mAddrTail <= mAddrEnd)", (const char *)&queryFormat, "mAddrTail >= mAddrBase && mAddrTail <= mAddrEnd") )
    __debugbreak();
  if ( this->mAddrTail == this->mAddrHead && this->mAllocations.mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1718, ASSERT_TYPE_ASSERT, "(mAddrTail != mAddrHead || mAllocations.Empty())", (const char *)&queryFormat, "mAddrTail != mAddrHead || mAllocations.Empty()") )
    __debugbreak();
  if ( this->mInvalidNodes.mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1719, ASSERT_TYPE_ASSERT, "(mInvalidNodes.Empty())", (const char *)&queryFormat, "mInvalidNodes.Empty()") )
    __debugbreak();
  mTail = this->mAllocations.mTail;
  if ( mTail == node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1722, ASSERT_TYPE_ASSERT, "(headNode != node)", (const char *)&queryFormat, "headNode != node") )
    __debugbreak();
  v13 = this->mAddrHead;
  v14 = 0i64;
  if ( startOverlap )
  {
    v14 = *startOverlap;
    if ( allocSize <= v14 )
    {
      LODWORD(v25) = *startOverlap;
      LODWORD(v24) = allocSize;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1730, ASSERT_TYPE_ASSERT, "( allocSize ) > ( overlapToUse )", "%s > %s\n\t%u, %u", "allocSize", "overlapToUse", v24, v25) )
        __debugbreak();
    }
    if ( (!alignment || v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
      __debugbreak();
    if ( (v14 & (alignment - 1)) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1731, ASSERT_TYPE_ASSERT, "(IsAligned( overlapToUse, alignment ))", (const char *)&queryFormat, "IsAligned( overlapToUse, alignment )") )
      __debugbreak();
    if ( this->mAddrHead - this->mAddrBase < v14 )
    {
      v14 = 0i64;
      *startOverlap = 0;
    }
    else
    {
      v13 = this->mAddrHead - v14;
      if ( (_DWORD)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1748, ASSERT_TYPE_ASSERT, "(LOOPS_BACK || overlapToUse == 0)", (const char *)&queryFormat, "LOOPS_BACK || overlapToUse == 0") )
        __debugbreak();
    }
  }
  if ( (!alignment || v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 679, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  mAddrEnd = this->mAddrEnd;
  v16 = ~(alignment - 1) & (alignment + v13 - 1);
  v17 = v16 - v13;
  v18 = v16 + allocSize;
  if ( v16 + allocSize <= mAddrEnd )
  {
    if ( mTail )
    {
      v19 = *((unsigned int *)mTail + 1);
      if ( (v19 & 0x7800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1800, ASSERT_TYPE_ASSERT, "( headNode->vAddrEndAlignLog2 ) == ( 0 )", "%s == %s\n\t%llu, %llu", "headNode->vAddrEndAlignLog2", "0", (v19 >> 23) & 0xF, 0i64) )
        __debugbreak();
      v20 = BitEncodeAlignment(alignment);
      *((_DWORD *)mTail + 1) &= 0xF87FFFFF;
      *((_DWORD *)mTail + 1) |= (v20 & 0xF) << 23;
    }
  }
  else
  {
    Com_PrintError(0, "Streamer is out of virtual address space in the fixed region (pool: %d, address range [0x%zx, 0x%zx], used: %zu, committed: %zu) trying to allocate %zu bytes: head=0x%zx, newHead=0x%zx\n", (unsigned int)this->mPool, this->mAddrBase, mAddrEnd, this->mVaSizeUsed, this->mVaSizeCommitted, allocSize, this->mAddrHead, v16 + allocSize);
    Stream_Logger_Dump(NULL);
    LODWORD(v23) = this->mPool;
    Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x10, "StreamDefragRegion<0>::Assign", "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1786, "Streamer is out of virtual address space in the fixed region (pool: %d, address range [0x%zx, 0x%zx], used: %zu, committed: %zu) trying to allocate %zu bytes: head=0x%zx, newHead=0x%zx\n", v23, this->mAddrBase, this->mAddrEnd, this->mVaSizeUsed, this->mVaSizeCommitted, allocSize, this->mAddrHead, v16 + allocSize);
  }
  this->mVaSizeAlignWaste += v17;
  this->mVaSizeUsed += allocSize + v17 - (unsigned int)v14;
  if ( (this->mVaSizeUsed & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1807, ASSERT_TYPE_ASSERT, "(mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  mVaSizeUsed = this->mVaSizeUsed;
  if ( mVaSizeUsed > this->mAddrEnd - this->mAddrBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1808, ASSERT_TYPE_ASSERT, "( mVaSizeUsed ) <= ( GetVASizeTotal() )", "%s <= %s\n\t%zu, %zu", "mVaSizeUsed", "GetVASizeTotal()", mVaSizeUsed, this->mAddrEnd - this->mAddrBase) )
    __debugbreak();
  this->mAddrHead = v18;
  if ( (v18 < this->mAddrBase || v18 > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1811, ASSERT_TYPE_ASSERT, "(mAddrHead >= mAddrBase && mAddrHead <= mAddrEnd)", (const char *)&queryFormat, "mAddrHead >= mAddrBase && mAddrHead <= mAddrEnd") )
    __debugbreak();
  if ( this->mAddrHead == this->mAddrTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1812, ASSERT_TYPE_ASSERT, "(mAddrHead != mAddrTail)", (const char *)&queryFormat, "mAddrHead != mAddrTail") )
    __debugbreak();
  Mem_Paged_CheckUnaliasedDecommittedSubPageMemory((unsigned __int8 *)(v14 + v16), (unsigned __int8 *)(v16 + allocSize));
  return StrmAddressToOffset(this->mPool, v16);
}

/*
==============
StreamDefragRegion<0>::AssignAndFixup
==============
*/
unsigned __int64 StreamDefragRegion<0>::AssignAndFixup(StreamDefragRegion<0> *this, const GfxBackEndData *data, StreamDefragAllocNode *node, unsigned __int64 allocSize, unsigned __int64 alignment)
{
  int v9; 
  int v10; 
  unsigned int v11; 
  const unsigned __int8 *v12; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 

  Stream_Defrag_CheckLocks();
  if ( (*((_DWORD *)node + 4) & 0x380000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1681, ASSERT_TYPE_ASSERT, "(node->defragLockCount == 0)", (const char *)&queryFormat, "node->defragLockCount == 0") )
    __debugbreak();
  if ( (*(_DWORD *)node & 0x400000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1683, ASSERT_TYPE_ASSERT, "(!node->isVaResizing)", (const char *)&queryFormat, "!node->isVaResizing") )
    __debugbreak();
  if ( (*((_DWORD *)node + 1) & 0x7800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1685, ASSERT_TYPE_ASSERT, "(node->vAddrEndAlignLog2 == 0)", (const char *)&queryFormat, "node->vAddrEndAlignLog2 == 0") )
    __debugbreak();
  v9 = StreamDefragRegion<0>::Assign(this, node, allocSize, alignment, NULL);
  v10 = (*(_DWORD *)node >> 19) & 1;
  *((_DWORD *)node + 3) = v9;
  *((_DWORD *)node + 2) = v9;
  if ( v10 != this->mPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1690, ASSERT_TYPE_ASSERT, "(pool == mPool)", (const char *)&queryFormat, "pool == mPool") )
    __debugbreak();
  item = *Stream_Logger_MakeItem(&result, node);
  v11 = truncate_cast<unsigned int,unsigned __int64>(allocSize);
  v12 = StrmOffsetToAddress((StreamMemPool)v10, *((unsigned int *)node + 2));
  Stream_Logger_OnAddressAssigned("StreamDefragRegion<0>::AssignAndFixup", data, &item, v12, v11);
  if ( ((*(_DWORD *)node >> 19) & 1) != this->mPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2249, ASSERT_TYPE_ASSERT, "(static_cast<StreamMemPool>( node->memPool ) == mPool)", (const char *)&queryFormat, "static_cast<StreamMemPool>( node->memPool ) == mPool", item.m_image, *(_QWORD *)&item.m_type) )
    __debugbreak();
  v13 = StrmOffsetToAddress(this->mPool, *((unsigned int *)node + 3));
  v14 = v13;
  if ( ((unsigned __int64)v13 < this->mAddrBase || (unsigned __int64)v13 >= this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2252, ASSERT_TYPE_ASSERT, "(addrWrite >= mAddrBase && addrWrite < mAddrEnd)", (const char *)&queryFormat, "addrWrite >= mAddrBase && addrWrite < mAddrEnd") )
    __debugbreak();
  if ( (unsigned __int8 *)this->mAddrHead != &v14[NodeGetMaxVaSize(node)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2253, ASSERT_TYPE_ASSERT, "(mAddrHead == addrWrite + NodeGetMaxVaSize( node ))", (const char *)&queryFormat, "mAddrHead == addrWrite + NodeGetMaxVaSize( node )") )
    __debugbreak();
  if ( *((_DWORD *)node + 2) != *((_DWORD *)node + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2265, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead == node->vAddrOffsetWrite)", (const char *)&queryFormat, "node->vAddrOffsetRead == node->vAddrOffsetWrite") )
    __debugbreak();
  RList<StreamDefragAllocNode>::PushBack(&this->mAllocations, node);
  Node_PtrFixup(data, node, 1);
  return *((unsigned int *)node + 2);
}

/*
==============
StreamDefrag::BackendFlushProtection
==============
*/
StreamDefragCommand *StreamDefrag::BackendFlushProtection(StreamDefrag *this, const StreamDefragAllocNode *node)
{
  StreamDefragCommand *mHead; 
  const unsigned __int8 *v6; 
  StreamDefragCommand *v7; 

  Stream_Defrag_CheckLocks();
  if ( *((_DWORD *)node + 2) != *((_DWORD *)node + 3) )
  {
    if ( (*((_DWORD *)node + 4) & 0xC00000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4409, ASSERT_TYPE_ASSERT, "(node->defragRefCount > 0)", (const char *)&queryFormat, "node->defragRefCount > 0") )
      __debugbreak();
    mHead = this->mDefragSteps[0].mHead;
    v7 = NULL;
    if ( mHead )
    {
      do
      {
        if ( (*((_DWORD *)mHead->node + 4) & 0xC00000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4419, ASSERT_TYPE_ASSERT, "(command->node->defragRefCount > 0)", (const char *)&queryFormat, "command->node->defragRefCount > 0") )
          __debugbreak();
        if ( mHead->node == node )
          v7 = mHead;
        if ( v7 )
          break;
        if ( !(*((_DWORD *)mHead + 13) << 21) )
          break;
        mHead += (__int64)(int)(*((_DWORD *)mHead + 13) << 21) >> 21;
      }
      while ( mHead );
      if ( v7 )
      {
        StreamDefrag::FlushAsyncVA(this, Block, MapsOnly, 0);
        return v7;
      }
    }
    v6 = StrmOffsetToAddress((StreamMemPool)((*(_DWORD *)node >> 19) & 1), *((unsigned int *)node + 3));
    Stream_Logger_Dump(v6);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4439, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "BackendFlushProtection failed to find node!") )
      __debugbreak();
  }
  return 0i64;
}

/*
==============
BitDecodeAlignment
==============
*/
__int64 BitDecodeAlignment(unsigned __int64 encodedAlignLog2)
{
  unsigned __int64 v2; 
  __int64 v3; 

  if ( !encodedAlignLog2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 278, ASSERT_TYPE_ASSERT, "(encodedAlignLog2 > 0)", (const char *)&queryFormat, "encodedAlignLog2 > 0") )
    __debugbreak();
  compileTimeLog2(0x10ui64);
  v2 = compileTimeLog2(0x10000ui64);
  if ( encodedAlignLog2 > v2 + v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 279, ASSERT_TYPE_ASSERT, "(encodedAlignLog2 <= compileTimeLog2( MAX_DEFRAG_ALIGNMENT ) - compileTimeLog2( MIN_DEFRAG_ALIGNMENT ) + 1)", (const char *)&queryFormat, "encodedAlignLog2 <= compileTimeLog2( MAX_DEFRAG_ALIGNMENT ) - compileTimeLog2( MIN_DEFRAG_ALIGNMENT ) + 1") )
    __debugbreak();
  return 1i64 << ((unsigned __int8)encodedAlignLog2 + (unsigned __int8)compileTimeLog2(8ui64));
}

/*
==============
BitEncodeAlignment
==============
*/
unsigned __int64 BitEncodeAlignment(unsigned __int64 alignment)
{
  __int64 v2; 

  if ( alignment < 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 270, ASSERT_TYPE_ASSERT, "(alignment >= MIN_DEFRAG_ALIGNMENT)", (const char *)&queryFormat, "alignment >= MIN_DEFRAG_ALIGNMENT") )
    __debugbreak();
  if ( alignment > 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 271, ASSERT_TYPE_ASSERT, "(alignment <= MAX_DEFRAG_ALIGNMENT)", (const char *)&queryFormat, "alignment <= MAX_DEFRAG_ALIGNMENT") )
    __debugbreak();
  if ( ((alignment - 1) & alignment) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 272, ASSERT_TYPE_ASSERT, "(IsPowerOf2( alignment ))", (const char *)&queryFormat, "IsPowerOf2( alignment )") )
    __debugbreak();
  v2 = (unsigned int)__lzcnt(alignment) ^ 0x3Fi64;
  if ( (alignment & ~(1i64 << v2)) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 570, ASSERT_TYPE_ASSERT, "( ( v & ~( uint64_t( 1 ) << ret ) ) == 0 )", "iLog2: %llu, 0x%llx is not power of 2", alignment, alignment) )
    __debugbreak();
  return v2 - compileTimeLog2(8ui64);
}

/*
==============
StreamDefrag::CPUMemCpyAsync
==============
*/
char StreamDefrag::CPUMemCpyAsync(StreamDefrag *this, StreamDefragCommand *command)
{
  const dvar_t *v4; 
  StreamDefragCommand *v5; 

  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4687, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  if ( !command->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4688, ASSERT_TYPE_ASSERT, "(command->node)", (const char *)&queryFormat, "command->node") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4690, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  v4 = DCONST_DVARBOOL_stream_defragAsyncCPUMemCpy;
  if ( !DCONST_DVARBOOL_stream_defragAsyncCPUMemCpy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragAsyncCPUMemCpy") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && Stream_IsEnabled() && !Stream_BackendQueue_IsInForcedFlush() && streamFrontendGlob->levelInit.state == 4 && (v5 = RStackThreadSafe<StreamDefragCommand>::Pop(&this->mDefragPool)) != NULL )
  {
    *(__m256i *)&v5->node = *(__m256i *)&command->node;
    *(_OWORD *)&v5->partOffset[2] = *(_OWORD *)&command->partOffset[2];
    *((double *)v5 + 6) = *((double *)command + 6);
    RStackThreadSafe<StreamDefragCommand>::Push(&this->mAsyncCPUMemCopies, v5);
    return 1;
  }
  else
  {
    if ( this->mAsyncCPUMemCopies.mHead )
      StreamDefrag::FlushAsyncCPUMemCpy(this, Block, 0);
    Stream_Defrag_MemCpy(CPUMemCpy, NULL, command);
    return 0;
  }
}

/*
==============
StreamDefragRegion<1>::CircularAddressDistance
==============
*/
unsigned __int64 StreamDefragRegion<1>::CircularAddressDistance(StreamDefragRegion<1> *this, unsigned __int64 a, unsigned __int64 b)
{
  __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 

  if ( (a < this->mAddrBase || a > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1143, ASSERT_TYPE_ASSERT, "(a >= mAddrBase && a <= mAddrEnd)", (const char *)&queryFormat, "a >= mAddrBase && a <= mAddrEnd") )
    __debugbreak();
  if ( (b < this->mAddrBase || b > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1144, ASSERT_TYPE_ASSERT, "(b >= mAddrBase && b <= mAddrEnd)", (const char *)&queryFormat, "b >= mAddrBase && b <= mAddrEnd") )
    __debugbreak();
  v6 = truncate_cast<__int64,unsigned __int64>(a - this->mAddrBase);
  v7 = truncate_cast<__int64,unsigned __int64>(b - this->mAddrBase);
  v8 = this->mAddrEnd - this->mAddrBase;
  v9 = v7 - v6;
  if ( v9 < 0 )
    v9 += v8;
  return truncate_cast<unsigned __int64,__int64>(v9 % v8);
}

/*
==============
CommandSetPartInfo
==============
*/
void CommandSetPartInfo(StreamDefragCommand *command)
{
  unsigned int v2; 
  int v3; 
  StreamKey *StreamKeyAtIndex; 
  unsigned int v5; 
  unsigned __int64 v6; 
  char v7; 
  unsigned int v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !command->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 762, ASSERT_TYPE_ASSERT, "(command->node)", (const char *)&queryFormat, "command->node") )
    __debugbreak();
  v2 = *((_DWORD *)command->node + 1);
  if ( (v2 & 3) != 0 )
  {
    if ( (*((_DWORD *)command->node + 1) & 3) == 1 )
    {
      v9 = (v2 >> 2) & 0x3FFFF;
      v10 = __lzcnt(0x10ui64) ^ 0x3F;
      command->partSize[0] = DB_GetXModelSurfsAtIndex(v9)->shared->dataSize;
      command->partOffset[0] = 0;
      if ( (~(1i64 << v10) & 0x10) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 570, ASSERT_TYPE_ASSERT, "( ( v & ~( uint64_t( 1 ) << ret ) ) == 0 )", "iLog2: %llu, 0x%llx is not power of 2", 16i64, 16i64) )
        __debugbreak();
      *((_DWORD *)command + 13) &= 0xFFC3FFFF;
      *((_DWORD *)command + 13) |= ((v10 - (unsigned int)compileTimeLog2(8ui64)) << 18) & 0x3C0000;
      v11 = *((_DWORD *)command + 13) & 0xFFFFFFF | (StreamableBits::CheckInUse(&streamFrontendGlob->meshBits, v9) ? 0x10000000 : 0);
      *((_DWORD *)command + 13) = v11 ^ (v11 ^ (v11 >> 4)) & 0xF000000;
    }
    else if ( (*((_DWORD *)command->node + 1) & 3) == 2 )
    {
      v3 = (v2 >> 2) & 0x3FFFF;
      StreamKeyAtIndex = DB_GetStreamKeyAtIndex(v3);
      command->partSize[0] = StreamKeyAtIndex->dataSize;
      command->partOffset[0] = 0;
      v5 = StreamKey_UserAlignment(StreamKeyAtIndex);
      v6 = v5;
      if ( v5 < 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 752, ASSERT_TYPE_ASSERT, "( alignment ) >= ( MIN_DEFRAG_ALIGNMENT )", "%s >= %s\n\t%u, %u", "alignment", "MIN_DEFRAG_ALIGNMENT", v5, 16) )
        __debugbreak();
      if ( (unsigned int)v6 > 0x10000 )
      {
        LODWORD(v14) = 0x10000;
        LODWORD(v13) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 753, ASSERT_TYPE_ASSERT, "( alignment ) <= ( MAX_DEFRAG_ALIGNMENT )", "%s <= %s\n\t%u, %u", "alignment", "MAX_DEFRAG_ALIGNMENT", v13, v14) )
          __debugbreak();
      }
      v7 = BitEncodeAlignment(v6);
      *((_DWORD *)command + 13) &= 0xFFC3FFFF;
      *((_DWORD *)command + 13) |= (v7 & 0xF) << 18;
      v8 = *((_DWORD *)command + 13) & 0xFFFFFFF | (StreamableBits::CheckInUse(&streamFrontendGlob->genericBits, v3) ? 0x10000000 : 0);
      *((_DWORD *)command + 13) = v8 ^ (v8 ^ (v8 >> 4)) & 0xF000000;
    }
    else
    {
      LODWORD(v12) = *((_DWORD *)command->node + 1) & 3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 775, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid asset type %u", v12) )
        __debugbreak();
    }
  }
  else
  {
    ImagePartInfo(command);
  }
}

/*
==============
Command_MaxPageCount
==============
*/
void Command_MaxPageCount(const StreamDefragCommand *command, unsigned int *maxPages)
{
  int v4; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int *partSize; 
  int v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  int v12; 

  *maxPages = 0;
  v4 = *((_DWORD *)command->node + 1) & 3;
  if ( v4 )
  {
    if ( v4 == 1 || v4 == 2 )
    {
      if ( (*((_DWORD *)command + 13) & 0xE000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 664, ASSERT_TYPE_ASSERT, "(command->copyParts == 0 || command->copyParts == 1)", (const char *)&queryFormat, "command->copyParts == 0 || command->copyParts == 1") )
        __debugbreak();
      if ( (*((_DWORD *)command + 13) & 0xF000000) == 0x1000000 )
        *maxPages = Stream_Alloc_DetermineMaxPages(command->partSize[0]);
    }
    else
    {
      v8 = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 671, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid asset type %u", v8) )
        __debugbreak();
    }
  }
  else
  {
    v5 = __lzcnt(*((_BYTE *)command + 55) & 0xF);
    v6 = 32 - v5;
    if ( (unsigned int)v6 > 4 )
    {
      v12 = 4;
      v10 = 32 - v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 651, ASSERT_TYPE_ASSERT, "( highestUsedPartCount ) <= ( IMAGE_STREAM_COUNT )", "%s <= %s\n\t%u, %u", "highestUsedPartCount", "IMAGE_STREAM_COUNT", v10, v12) )
        __debugbreak();
    }
    if ( (unsigned int)v6 > ((*((_DWORD *)command->node + 1) >> 20) & 7u) )
    {
      LODWORD(v11) = (*((_DWORD *)command->node + 1) >> 20) & 7;
      LODWORD(v9) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 652, ASSERT_TYPE_ASSERT, "( highestUsedPartCount ) <= ( command->node->vaReservedPartCount )", "%s <= %s\n\t%u, %u", "highestUsedPartCount", "command->node->vaReservedPartCount", v9, v11) )
        __debugbreak();
    }
    if ( (_DWORD)v6 )
    {
      partSize = command->partSize;
      do
      {
        *maxPages += Stream_Alloc_DetermineMaxPages(*partSize++);
        --v6;
      }
      while ( v6 );
    }
  }
}

/*
==============
StreamDefrag::CommitParts
==============
*/
__int64 StreamDefrag::CommitParts(StreamDefrag *this, const StreamDefragCommand *command, unsigned __int64 addressOffset, unsigned int partBits, StreamerMemPageCounts *reservedPages)
{
  __int64 v5; 
  __int64 v8; 
  signed int v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int *v12; 
  unsigned __int8 *v13; 
  __int64 v14; 
  unsigned __int8 *end; 
  unsigned int v16; 
  StreamerMemPageCounts *v17; 
  __int64 v19; 
  __int64 v20; 
  unsigned int outPageDeficitOrCommitCount; 
  unsigned __int8 *v22; 
  __int64 v23; 
  StreamerMemPageCounts *pagesTaken; 
  __int64 v25; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 
  StreamerMemLoan optionalLoan; 

  v25 = -2i64;
  v5 = partBits;
  pagesTaken = reservedPages;
  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4461, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  if ( !command->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4462, ASSERT_TYPE_ASSERT, "(command->node)", (const char *)&queryFormat, "command->node") )
    __debugbreak();
  if ( !addressOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4463, ASSERT_TYPE_ASSERT, "(addressOffset != 0)", (const char *)&queryFormat, "addressOffset != 0") )
    __debugbreak();
  v22 = StrmOffsetToAddress((StreamMemPool)((*(_DWORD *)command->node >> 19) & 1), addressOffset);
  optionalLoan.mUpdateID = 0i64;
  optionalLoan.mPages = 0i64;
  optionalLoan.mCookie = -1061110033;
  StreamerMemLoan::GivePages(&optionalLoan, reservedPages);
  if ( !StreamerMemLoan::Ready(&optionalLoan) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4471, ASSERT_TYPE_ASSERT, "(reservedPagesLoan.Ready())", (const char *)&queryFormat, "reservedPagesLoan.Ready()") )
    __debugbreak();
  v8 = 0i64;
  v9 = 3;
  v10 = 8i64;
  v11 = v5;
  v12 = &command->partSize[3];
  do
  {
    if ( (v11 & v10) != 0 )
    {
      v13 = &v22[v12[4]];
      v14 = *v12;
      end = &v13[v14];
      v23 = v14 + v8;
      Mem_Paged_CheckUnaliasedDecommittedSubPageMemory(v13, &v13[v14]);
      item = *Stream_Logger_MakeItem(&result, command->node);
      Stream_Logger_OnMemoryMapped("StreamDefrag::CommitParts", NULL, &item, v9, v13, end);
      outPageDeficitOrCommitCount = 0;
      v16 = StreamerMemLoan::TotalPages(&optionalLoan);
      if ( !Mem_Paged_BatchCommitSubPageMemory(v13, end, &optionalLoan, &outPageDeficitOrCommitCount, "StreamerDefrag") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4493, ASSERT_TYPE_ASSERT, "(Mem_Paged_BatchCommitSubPageMemory( dataStart, dataEnd, &reservedPagesLoan, &commitPageCount , \"StreamerDefrag\" ))", (const char *)&queryFormat, "Mem_Paged_BatchCommitSubPageMemory( dataStart, dataEnd, &reservedPagesLoan, &commitPageCount MEM_TRACK_ARGS( \"StreamerDefrag\" ) )") )
        __debugbreak();
      if ( v16 < outPageDeficitOrCommitCount )
      {
        LODWORD(v20) = outPageDeficitOrCommitCount;
        LODWORD(v19) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4494, ASSERT_TYPE_ASSERT, "( reservedBeforeCommitPageCount ) >= ( commitPageCount )", "%s >= %s\n\t%u, %u", "reservedBeforeCommitPageCount", "commitPageCount", v19, v20) )
          __debugbreak();
      }
      v8 = v23;
    }
    v10 = __ROR8__(v10, 1);
    --v12;
    --v9;
  }
  while ( v9 >= 0 );
  v17 = pagesTaken;
  *pagesTaken = 0i64;
  StreamerMemLoan::TakeAllPages(&optionalLoan, v17);
  StreamerMemLoan::~StreamerMemLoan(&optionalLoan);
  return v8;
}

/*
==============
StreamDefrag::DecommitParts
==============
*/
__int64 StreamDefrag::DecommitParts(StreamDefrag *this, const StreamDefragCommand *command, unsigned __int64 addressOffset, unsigned int partBits, StreamerMemPageCounts *unmappedPages)
{
  __int64 v5; 
  unsigned __int8 *v8; 
  __int64 v9; 
  signed int v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int *v13; 
  unsigned __int8 *v14; 
  __int64 v15; 
  unsigned __int8 *end; 
  StreamerMemLoan *v17; 
  __int64 v19; 
  unsigned __int8 *v20; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 
  StreamerMemLoan v23; 
  StreamerMemLoan v24; 

  v5 = partBits;
  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4533, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  if ( !command->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4534, ASSERT_TYPE_ASSERT, "(command->node)", (const char *)&queryFormat, "command->node") )
    __debugbreak();
  if ( !addressOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4535, ASSERT_TYPE_ASSERT, "(addressOffset != 0)", (const char *)&queryFormat, "addressOffset != 0") )
    __debugbreak();
  v8 = StrmOffsetToAddress((StreamMemPool)((*(_DWORD *)command->node >> 19) & 1), addressOffset);
  v20 = v8;
  v9 = 0i64;
  v10 = 3;
  v11 = 8i64;
  v12 = v5;
  v13 = &command->partSize[3];
  do
  {
    if ( (v12 & v11) != 0 )
    {
      v14 = &v8[v13[4]];
      v15 = *v13;
      end = &v14[v15];
      v19 = v15 + v9;
      item = *Stream_Logger_MakeItem(&result, command->node);
      Stream_Logger_OnMemoryUnmapped("StreamDefrag::DecommitParts", NULL, &item, v10, v14, end);
      v17 = Mem_Paged_BatchDecommitSubPageMemory(&v24, v14, end);
      StreamerMemLoan::StreamerMemLoan(&v23, v17);
      StreamerMemLoan::~StreamerMemLoan(&v24);
      if ( !StreamerMemLoan::Ready(&v23) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4557, ASSERT_TYPE_ASSERT, "(loan.Ready())", (const char *)&queryFormat, "loan.Ready()") )
        __debugbreak();
      StreamerMemLoan::TakeAllPages(&v23, unmappedPages);
      StreamerMemLoan::~StreamerMemLoan(&v23);
      v9 = v19;
      v8 = v20;
    }
    v11 = __ROR8__(v11, 1);
    --v13;
    --v10;
  }
  while ( v10 >= 0 );
  return v9;
}

/*
==============
StreamDefragRegion<1>::DecreaseVASizeUsedForNodeWriteOffset
==============
*/
void StreamDefragRegion<1>::DecreaseVASizeUsedForNodeWriteOffset(StreamDefragRegion<1> *this, const StreamDefragAllocNode *node)
{
  unsigned int VaSizeForParts; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1851, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  VaSizeForParts = NodeGetVaSizeForParts(node, (*((_DWORD *)node + 1) >> 20) & 7);
  StreamDefragRegion<1>::DecreaseVASizeUsedInternal(this, node, *((_DWORD *)node + 3), VaSizeForParts, (*((_DWORD *)node + 1) >> 23) & 0xF);
}

/*
==============
StreamDefragRegion<1>::DecreaseVASizeUsedForUnmapCommand
==============
*/
void StreamDefragRegion<1>::DecreaseVASizeUsedForUnmapCommand(StreamDefragRegion<1> *this, const StreamDefragCommand *unmapCmd)
{
  StreamDefragAllocNode *node; 
  int v5; 
  __int64 v6; 
  int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int *v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int MaxVaSize; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int8 *v18; 
  unsigned __int8 *v19; 
  unsigned __int8 *v20; 
  unsigned __int64 v21; 
  unsigned __int64 mVaSizeAlignWaste; 
  unsigned __int64 v23; 
  unsigned __int64 v24; 
  unsigned __int64 mVaSizeUsed; 

  if ( !unmapCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1858, ASSERT_TYPE_ASSERT, "(unmapCmd)", (const char *)&queryFormat, "unmapCmd") )
    __debugbreak();
  node = unmapCmd->node;
  if ( !unmapCmd->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1861, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v5 = 0;
  v6 = 0i64;
  v7 = 0;
  v8 = (*((_DWORD *)unmapCmd + 13) >> 11) & 7;
  v9 = 0;
  if ( v8 >= 2 )
  {
    v10 = &unmapCmd->partSize[1];
    v11 = ((v8 - 2) >> 1) + 1;
    v6 = (unsigned int)(2 * v11);
    do
    {
      v5 += *(v10 - 1);
      v7 += *v10;
      v10 += 2;
      --v11;
    }
    while ( v11 );
  }
  if ( (unsigned int)v6 < v8 )
    v9 = unmapCmd->partSize[v6];
  v12 = *((unsigned int *)unmapCmd + 11);
  v13 = (*((_DWORD *)unmapCmd + 13) >> 14) & 0xF;
  v14 = v7 + v5 + v9;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1824, ASSERT_TYPE_ASSERT, "(vaSize > 0)", (const char *)&queryFormat, "vaSize > 0") )
    __debugbreak();
  MaxVaSize = NodeGetMaxVaSize(node);
  v16 = MaxVaSize;
  if ( MaxVaSize < v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1828, ASSERT_TYPE_ASSERT, "( vaMaxSize ) >= ( vaSize )", "%s >= %s\n\t%u, %u", "vaMaxSize", "vaSize", MaxVaSize, v14) )
    __debugbreak();
  if ( v13 )
    v17 = BitDecodeAlignment(v13);
  else
    v17 = 16i64;
  v18 = StrmOffsetToAddress(this->mPool, v12);
  v19 = &v18[v16 - v14];
  v20 = &v18[v16];
  v21 = AlignUp<unsigned __int64>((unsigned __int64)&v18[v16], v17);
  mVaSizeAlignWaste = this->mVaSizeAlignWaste;
  v23 = v21 - (_QWORD)v20;
  if ( mVaSizeAlignWaste < v21 - (unsigned __int64)v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1840, ASSERT_TYPE_ASSERT, "( mVaSizeAlignWaste ) >= ( alignWaste )", "%s >= %s\n\t%zu, %zu", "mVaSizeAlignWaste", "alignWaste", mVaSizeAlignWaste, v23) )
    __debugbreak();
  this->mVaSizeAlignWaste -= v23;
  v24 = v21 - (_QWORD)v19;
  mVaSizeUsed = this->mVaSizeUsed;
  if ( mVaSizeUsed < v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1844, ASSERT_TYPE_ASSERT, "( mVaSizeUsed ) >= ( vaSizeAligned )", "%s >= %s\n\t%zu, %zu", "mVaSizeUsed", "vaSizeAligned", mVaSizeUsed, v24) )
    __debugbreak();
  this->mVaSizeUsed -= v24;
  if ( (this->mVaSizeUsed & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1846, ASSERT_TYPE_ASSERT, "(mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
}

/*
==============
StreamDefragRegion<1>::DecreaseVASizeUsedInternal
==============
*/
void StreamDefragRegion<1>::DecreaseVASizeUsedInternal(StreamDefragRegion<1> *this, const StreamDefragAllocNode *node, unsigned int vAddrOffset, unsigned int vaSize, unsigned int vAddrEndAlignLog2)
{
  __int64 v5; 
  unsigned __int64 v7; 
  unsigned int MaxVaSize; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int8 *v12; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  unsigned __int64 v15; 
  unsigned __int64 mVaSizeAlignWaste; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 mVaSizeUsed; 

  v5 = vaSize;
  v7 = vAddrOffset;
  if ( !vaSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1824, ASSERT_TYPE_ASSERT, "(vaSize > 0)", (const char *)&queryFormat, "vaSize > 0") )
    __debugbreak();
  MaxVaSize = NodeGetMaxVaSize(node);
  v10 = MaxVaSize;
  if ( MaxVaSize < (unsigned int)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1828, ASSERT_TYPE_ASSERT, "( vaMaxSize ) >= ( vaSize )", "%s >= %s\n\t%u, %u", "vaMaxSize", "vaSize", MaxVaSize, v5) )
    __debugbreak();
  if ( vAddrEndAlignLog2 )
    v11 = BitDecodeAlignment(vAddrEndAlignLog2);
  else
    v11 = 16i64;
  v12 = StrmOffsetToAddress(this->mPool, v7);
  v13 = &v12[v10 - v5];
  v14 = &v12[v10];
  v15 = AlignUp<unsigned __int64>((unsigned __int64)&v12[v10], v11);
  mVaSizeAlignWaste = this->mVaSizeAlignWaste;
  v17 = v15 - (_QWORD)v14;
  if ( mVaSizeAlignWaste < v15 - (unsigned __int64)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1840, ASSERT_TYPE_ASSERT, "( mVaSizeAlignWaste ) >= ( alignWaste )", "%s >= %s\n\t%zu, %zu", "mVaSizeAlignWaste", "alignWaste", mVaSizeAlignWaste, v17) )
    __debugbreak();
  this->mVaSizeAlignWaste -= v17;
  v18 = v15 - (_QWORD)v13;
  mVaSizeUsed = this->mVaSizeUsed;
  if ( mVaSizeUsed < v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1844, ASSERT_TYPE_ASSERT, "( mVaSizeUsed ) >= ( vaSizeAligned )", "%s >= %s\n\t%zu, %zu", "mVaSizeUsed", "vaSizeAligned", mVaSizeUsed, v18) )
    __debugbreak();
  this->mVaSizeUsed -= v18;
  if ( (this->mVaSizeUsed & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1846, ASSERT_TYPE_ASSERT, "(mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
}

/*
==============
StreamDefragRegion<0>::DecreaseVASizeUsedInternal
==============
*/
void StreamDefragRegion<0>::DecreaseVASizeUsedInternal(StreamDefragRegion<0> *this, const StreamDefragAllocNode *node, unsigned int vAddrOffset, unsigned int vaSize, unsigned int vAddrEndAlignLog2)
{
  __int64 v5; 
  unsigned __int64 v7; 
  unsigned int MaxVaSize; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int8 *v12; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  unsigned __int64 v15; 
  unsigned __int64 mVaSizeAlignWaste; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 mVaSizeUsed; 

  v5 = vaSize;
  v7 = vAddrOffset;
  if ( !vaSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1824, ASSERT_TYPE_ASSERT, "(vaSize > 0)", (const char *)&queryFormat, "vaSize > 0") )
    __debugbreak();
  MaxVaSize = NodeGetMaxVaSize(node);
  v10 = MaxVaSize;
  if ( MaxVaSize < (unsigned int)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1828, ASSERT_TYPE_ASSERT, "( vaMaxSize ) >= ( vaSize )", "%s >= %s\n\t%u, %u", "vaMaxSize", "vaSize", MaxVaSize, v5) )
    __debugbreak();
  if ( vAddrEndAlignLog2 )
    v11 = BitDecodeAlignment(vAddrEndAlignLog2);
  else
    v11 = 16i64;
  v12 = StrmOffsetToAddress(this->mPool, v7);
  v13 = &v12[v10 - v5];
  v14 = &v12[v10];
  v15 = AlignUp<unsigned __int64>((unsigned __int64)&v12[v10], v11);
  mVaSizeAlignWaste = this->mVaSizeAlignWaste;
  v17 = v15 - (_QWORD)v14;
  if ( mVaSizeAlignWaste < v15 - (unsigned __int64)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1840, ASSERT_TYPE_ASSERT, "( mVaSizeAlignWaste ) >= ( alignWaste )", "%s >= %s\n\t%zu, %zu", "mVaSizeAlignWaste", "alignWaste", mVaSizeAlignWaste, v17) )
    __debugbreak();
  this->mVaSizeAlignWaste -= v17;
  v18 = v15 - (_QWORD)v13;
  mVaSizeUsed = this->mVaSizeUsed;
  if ( mVaSizeUsed < v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1844, ASSERT_TYPE_ASSERT, "( mVaSizeUsed ) >= ( vaSizeAligned )", "%s >= %s\n\t%zu, %zu", "mVaSizeUsed", "vaSizeAligned", mVaSizeUsed, v18) )
    __debugbreak();
  this->mVaSizeUsed -= v18;
  if ( (this->mVaSizeUsed & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1846, ASSERT_TYPE_ASSERT, "(mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
}

/*
==============
StreamDefrag::DefragFrameBegin
==============
*/
void StreamDefrag::DefragFrameBegin(StreamDefrag *this, GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  InternalStreamerMemLoan *p_mDefragPages; 
  unsigned __int64 v6; 
  volatile int *mDefragPageSurplus; 
  Mem_Pool MemPoolFromStreamMemPool; 
  unsigned int FreePageCountForCommit; 
  Mem_Pool v10; 
  const dvar_t *v11; 
  __int64 v12; 
  __int64 v13; 
  GfxCmdBufContext state; 
  StreamDefrag *v18; 

  Stream_Defrag_CheckLocks();
  StreamDefrag::ValidateRegions(this);
  if ( this->mFrameOpen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3094, ASSERT_TYPE_ASSERT, "(!mFrameOpen)", (const char *)&queryFormat, "!mFrameOpen") )
    __debugbreak();
  this->mFrameOpen = 1;
  Stream_Logger_OnDefragFrame("StreamDefrag::DefragFrameBegin", data, 1);
  StreamDefrag::FlushAsyncVA(this, Block, UnmapsOnly, 0);
  p_mDefragPages = &this->mDefragPages;
  v6 = 0i64;
  mDefragPageSurplus = this->mDefragPageSurplus;
  do
  {
    if ( ((unsigned __int8)mDefragPageSurplus & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)mDefragPageSurplus) )
      __debugbreak();
    StreamerMemLoan::GivePages(p_mDefragPages, (StreamMemPool)v6, _InterlockedExchange(mDefragPageSurplus, 0));
    MemPoolFromStreamMemPool = Stream_Alloc_GetMemPoolFromStreamMemPool((StreamMemPool)v6);
    FreePageCountForCommit = Mem_Paged_GetFreePageCountForCommit(MemPoolFromStreamMemPool);
    if ( StreamerMemLoan::PagesForPool(p_mDefragPages, (StreamMemPool)v6) > FreePageCountForCommit )
    {
      v10 = Stream_Alloc_GetMemPoolFromStreamMemPool((StreamMemPool)v6);
      LODWORD(v13) = Mem_Paged_GetFreePageCountForCommit(v10);
      LODWORD(v12) = StreamerMemLoan::PagesForPool(p_mDefragPages, (StreamMemPool)v6);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3109, ASSERT_TYPE_ASSERT, "( mDefragPages.PagesForPool( pool ) ) <= ( Mem_Paged_GetFreePageCountForCommit( Stream_Alloc_GetMemPoolFromStreamMemPool( pool ) ) )", "%s <= %s\n\t%u, %u", "mDefragPages.PagesForPool( pool )", "Mem_Paged_GetFreePageCountForCommit( Stream_Alloc_GetMemPoolFromStreamMemPool( pool ) )", v12, v13) )
        __debugbreak();
    }
    ++v6;
    ++mDefragPageSurplus;
  }
  while ( v6 < 2 );
  v11 = DCONST_DVARBOOL_stream_defragEnable;
  if ( !DCONST_DVARBOOL_stream_defragEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled && Stream_IsEnabled() && !Stream_BackendQueue_IsInForcedFlush() && streamFrontendGlob->levelInit.state == 4 && !this->mDefragSteps[0].mTail )
  {
    StreamDefrag::DefragStep0_StartCommandsAndMapNewAddresses(this, data);
    if ( this->mAsyncVAProcess && (this->mAsyncVAMaps.mHead || this->mAsyncVAUnmaps.mHead) )
    {
      v18 = this;
      Sys_AddWorkerCmd(WRKCMD_STREAM_DEFRAG_FLUSH_VA, &v18);
    }
  }
  state = *gfxContext;
  if ( this->mCopyMode != 5 && this->mGPUCopyFenceCounter >= 2 )
  {
    R_LockGfxImmediateContext();
    R_GPU_BeginTimer(GPU_TIMER_STREAMER_DEFRAG_WAIT);
    R_GPULabel_Wait(state.state, this->mGPUCopyFenceAddr, this->mGPUCopyFenceCounter - 2, GFX_LABEL_COMPARE_FUNC_GREATEREQUAL);
    R_GPU_EndTimer();
    R_UnlockGfxImmediateContext();
  }
}

/*
==============
StreamDefrag::DefragFrameEnd
==============
*/
void StreamDefrag::DefragFrameEnd(StreamDefrag *this, GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  Stream_Defrag_CheckLocks(this, gfxContext);
  Stream_Logger_OnDefragFrame("StreamDefrag::DefragFrameEnd", data, this->mFrameOpen);
  StreamDefrag::ValidateRegions(this);
  if ( this->mFrameOpen )
  {
    this->mFrameOpen = 0;
    StreamDefrag::DefragStep3_UnmapOldAddress(this, data);
    StreamDefrag::ValidateRegions(this);
    if ( Stream_BackendQueue_IsInForcedFlush() && !StreamDefrag::IsAsyncCopyFinished(this, data) )
      Com_PrintWarning(35, "Stream defrag GPU copy incomplete before pointer fixup! Texture corruption likely!\n");
    StreamDefrag::DefragStep2_PtrFixup(this, data);
    StreamDefrag::ValidateRegions(this);
  }
}

/*
==============
StreamDefrag::DefragFrameFlush
==============
*/
void StreamDefrag::DefragFrameFlush(StreamDefrag *this, GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  const dvar_t *v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  int v9; 
  char v10; 
  StreamDefragCopyMode mCopyMode; 
  int v12; 
  unsigned __int64 mDMACopyFence; 
  bool v14; 
  __int64 v15; 
  unsigned int mDefragFrameIndex; 
  const char *CurrentThreadContextName; 

  Stream_Defrag_CheckLocks(this, gfxContext);
  if ( !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3222, ASSERT_TYPE_ASSERT, "(Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Stream_BackendQueue_IsInForcedFlush()") )
    __debugbreak();
  Stream_Logger_OnDefragFrame("StreamDefrag::DefragFrameFlush", data, this->mFrameOpen);
  if ( !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4366, ASSERT_TYPE_ASSERT, "(Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Stream_BackendQueue_IsInForcedFlush()") )
    __debugbreak();
  v5 = DCONST_DVARINT_stream_defragGPUFaultProtectionMS;
  if ( !DCONST_DVARINT_stream_defragGPUFaultProtectionMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragGPUFaultProtectionMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v8 = 2 * v5->current.integer;
  if ( v8 && !StreamDefrag::IsAsyncCopyFinished(this, data) )
  {
    v9 = Sys_Milliseconds();
    v10 = 0;
    while ( 1 )
    {
      mCopyMode = this->mCopyMode;
      if ( mCopyMode == MOVEMENT )
        break;
      if ( mCopyMode == 5 )
      {
        v12 = R_DefragDMACommandListFencePending(&this->mDMACopyFence);
        mDMACopyFence = this->mDMACopyFence;
        v14 = v12 == 0;
      }
      else
      {
        mDMACopyFence = this->mGPUCopyFenceCounter;
        v14 = mDMACopyFence <= *this->mGPUCopyFenceAddr;
      }
      Stream_Logger_OnCopyFinishedFenceCheck("StreamDefrag::IsAsyncCopyFinished", data, mDMACopyFence);
      if ( v14 )
        break;
      if ( Sys_Milliseconds() > (int)(v9 + v8) )
      {
        v10 = 1;
        break;
      }
    }
    v15 = (unsigned int)(Sys_Milliseconds() - v9);
    if ( v10 )
      Com_PrintWarning(35, "Stream defrag GPUFaultProtection waited %d ms, which is more than the max wait time %d. Wait aborted!\n", v15, v8);
    else
      Com_PrintWarning(35, "Stream defrag GPUFaultProtection waited %d ms\n", v15);
  }
  if ( this->mFrameOpen )
  {
    Stream_Defrag_CheckLocks(v7, v6);
    Stream_Logger_OnDefragFrame("StreamDefrag::DefragFrameEnd", data, this->mFrameOpen);
    StreamDefrag::ValidateRegions(this);
    if ( this->mFrameOpen )
    {
      this->mFrameOpen = 0;
      StreamDefrag::DefragStep3_UnmapOldAddress(this, data);
      StreamDefrag::ValidateRegions(this);
      if ( Stream_BackendQueue_IsInForcedFlush() && !StreamDefrag::IsAsyncCopyFinished(this, data) )
        Com_PrintWarning(35, "Stream defrag GPU copy incomplete before pointer fixup! Texture corruption likely!\n");
      StreamDefrag::DefragStep2_PtrFixup(this, data);
      StreamDefrag::ValidateRegions(this);
    }
    mDefragFrameIndex = this->mDefragFrameIndex;
    CurrentThreadContextName = Sys_GetCurrentThreadContextName();
    Com_Printf(35, "Streamer forced flush on %s thread closed open defrag frame. Defrag frame index is now %u.\n", CurrentThreadContextName, mDefragFrameIndex);
  }
  else
  {
    StreamDefrag::DefragStep2_PtrFixup(this, data);
  }
  if ( this->mDefragSteps[1].mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3246, ASSERT_TYPE_ASSERT, "(DefragStepCommands( StreamDefragStep::PTR_FIXUP ).Empty())", (const char *)&queryFormat, "DefragStepCommands( StreamDefragStep::PTR_FIXUP ).Empty()") )
    __debugbreak();
  StreamDefrag::FlushAsyncVA(this, Block, MapsAndUnmaps, 0);
  if ( this->mFrameOpen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3251, ASSERT_TYPE_ASSERT, "(!mFrameOpen)", (const char *)&queryFormat, "!mFrameOpen") )
    __debugbreak();
}

/*
==============
StreamDefrag::DefragStep0_StartCommandsAndMapNewAddresses
==============
*/
void StreamDefrag::DefragStep0_StartCommandsAndMapNewAddresses(StreamDefrag *this, const GfxBackEndData *data)
{
  bool v2; 
  const GfxBackEndData *v3; 
  StreamDefrag *v4; 
  char v5; 
  char v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  StreamDefragRegion<1> *p_mMoveableRegion; 
  StreamDefragAllocNode *mHead; 
  int v11; 
  RStackThreadSafe<StreamDefragCommand> *p_mDefragPool; 
  StreamDefragCommand *v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  unsigned __int64 v19; 
  unsigned int *v20; 
  unsigned int v21; 
  unsigned int v22; 
  GfxImage *GfxImageAtIndex; 
  unsigned int v24; 
  int v25; 
  int v26; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned __int64 v32; 
  __int64 v33; 
  unsigned __int64 v34; 
  __int64 v35; 
  Stream_Logger_Item *v36; 
  const unsigned __int8 *v37; 
  const unsigned __int8 *v38; 
  unsigned int v39; 
  __int64 v40; 
  __int64 v41; 
  const dvar_t *v42; 
  StreamDefragCommand *v43; 
  char v44; 
  __int64 v45; 
  __int64 v46; 
  char v47; 
  unsigned int maxPages; 
  unsigned int FrameDefragCommandCount; 
  unsigned int startOverlap; 
  unsigned int v51; 
  GfxBackEndData *dataa; 
  StreamDefragRegion<1> *v53; 
  unsigned __int64 v54; 
  RStackThreadSafe<StreamDefragCommand> *v55; 
  StreamMemPool pool[2]; 
  StreamDefrag *v57; 
  FastCriticalSection *critSect; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  __int128 v63; 
  __int64 v64; 
  Stream_Logger_Item item; 
  Stream_Logger_Item v66; 
  Stream_Logger_Item result; 
  Stream_Logger_Item v68; 
  StreamerMemPageCounts pagesTaken; 

  v2 = this->mDefragSteps[0].mTail == NULL;
  v3 = data;
  dataa = (GfxBackEndData *)data;
  v4 = this;
  v57 = this;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4765, ASSERT_TYPE_ASSERT, "(DefragStepCommands( StreamDefragStep::COPY ).Empty())", (const char *)&queryFormat, "DefragStepCommands( StreamDefragStep::COPY ).Empty()") )
    __debugbreak();
  critSect = &v4->mDefragLockCriticalSection;
  Sys_LockWrite(&v4->mDefragLockCriticalSection);
  Stream_Logger_OnDefragOp("StreamDefrag::DefragStep0_StartCommandsAndMapNewAddresses", v3);
  v5 = 0;
  v47 = 0;
  v51 = v4->mDefragUnmapFrameDepth + v4->mDefragFrameIndex + 1;
  v6 = startPoolIndex + 1;
  LOBYTE(v7) = 0;
  ++startPoolIndex;
  v54 = 0i64;
  while ( 1 )
  {
    v8 = (v6 + (_BYTE)v7) & 1;
    *(_QWORD *)pool = v8;
    p_mMoveableRegion = &v4->mAddressSpaces[v8].mMoveableRegion;
    v53 = p_mMoveableRegion;
    FrameDefragCommandCount = StreamDefrag::GetFrameDefragCommandCount(v4, (StreamMemPool)v8);
    if ( FrameDefragCommandCount )
    {
      do
      {
        mHead = p_mMoveableRegion->mAllocations.mHead;
        if ( !p_mMoveableRegion->mAllocations.mHead )
          break;
        if ( !NodeIsValid(p_mMoveableRegion->mAllocations.mHead) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4798, ASSERT_TYPE_ASSERT, "(NodeIsValid( node ))", (const char *)&queryFormat, "NodeIsValid( node )") )
          __debugbreak();
        if ( ((*(_DWORD *)mHead >> 19) & 1) != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4799, ASSERT_TYPE_ASSERT, "(node->memPool == poolIndex)", (const char *)&queryFormat, "node->memPool == poolIndex") )
          __debugbreak();
        if ( (*((_DWORD *)mHead + 4) & 0xC00000) != 0 )
          break;
        if ( !*((_DWORD *)mHead + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4807, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead != 0)", (const char *)&queryFormat, "node->vAddrOffsetRead != 0") )
          __debugbreak();
        if ( *((_DWORD *)mHead + 2) != *((_DWORD *)mHead + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4808, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead == node->vAddrOffsetWrite)", (const char *)&queryFormat, "node->vAddrOffsetRead == node->vAddrOffsetWrite") )
          __debugbreak();
        if ( (*(_DWORD *)mHead & 0x400000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4810, ASSERT_TYPE_ASSERT, "(node->isVaResizing == 0)", (const char *)&queryFormat, "node->isVaResizing == 0") )
          __debugbreak();
        if ( (*((_DWORD *)mHead + 4) & 0x380000) != 0 || Stream_Defrag_IsPriming(mHead) )
          break;
        if ( (*(_DWORD *)mHead & 0x7800000) != 0 )
        {
          p_mDefragPool = &v4->mDefragPool;
          v55 = &v4->mDefragPool;
          v13 = RStackThreadSafe<StreamDefragCommand>::Pop(&v4->mDefragPool);
          if ( !v13 )
            break;
          v59 = 0i64;
          v60 = 0i64;
          v61 = 0i64;
          v62 = 0i64;
          *(__m256i *)&v13->node = (__m256i)0;
          v63 = 0ui64;
          *(_OWORD *)&v13->partOffset[2] = 0ui64;
          v64 = 0i64;
          *((double *)v13 + 6) = 0i64;
          v13->node = mHead;
          CommandSetPartInfo(v13);
          if ( (*((_DWORD *)v13 + 13) & 0xF000000) != ((*((_DWORD *)v13 + 13) >> 4) & 0xF000000) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4854, ASSERT_TYPE_ASSERT, "(command->copyParts == command->unmapParts)", (const char *)&queryFormat, "command->copyParts == command->unmapParts") )
            __debugbreak();
          v14 = *(_DWORD *)mHead >> 23;
          v15 = HIBYTE(*((_DWORD *)v13 + 13)) & 0xF;
          if ( v15 != (v14 & 0xF) )
            goto LABEL_87;
          v16 = (*(_DWORD *)mHead >> 27) & 0xF;
          if ( v15 != v16 )
            goto LABEL_87;
          v17 = (unsigned __int8)HIBYTE(*((_DWORD *)v13 + 13)) & (unsigned __int8)v14 & 0xF;
          if ( v17 != v16 )
          {
            LODWORD(v46) = (*(_DWORD *)mHead >> 27) & 0xF;
            LODWORD(v45) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4864, ASSERT_TYPE_ASSERT, "( ( command->copyParts & node->mappedParts ) ) == ( node->inuseParts )", "%s == %s\n\t%u, %u", "( command->copyParts & node->mappedParts )", "node->inuseParts", v45, v46) )
              __debugbreak();
          }
          maxPages = 0;
          Command_MaxPageCount(v13, &maxPages);
          v18 = StreamerMemLoan::TotalPages(&v4->mDefragPages);
          if ( maxPages > v18 )
          {
LABEL_87:
            RStackThreadSafe<StreamDefragCommand>::Push(&v4->mDefragPool, v13);
            break;
          }
          v19 = *((unsigned int *)mHead + 1);
          if ( (v19 & 0x78000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4877, ASSERT_TYPE_ASSERT, "( node->vAddrOffsetWriteLockParts ) == ( 0 )", "%s == %s\n\t%llu, %llu", "node->vAddrOffsetWriteLockParts", "0", (v19 >> 27) & 0xF, 0i64) )
            __debugbreak();
          if ( !StreamDefrag::UpdateNewTailAddressBeforeMove(v4, mHead) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4879, ASSERT_TYPE_ASSERT, "(UpdateNewTailAddressBeforeMove( node ))", (const char *)&queryFormat, "UpdateNewTailAddressBeforeMove( node )") )
            __debugbreak();
          v20 = &v13->partSize[1];
          *((_DWORD *)v13 + 13) ^= (*((_DWORD *)v13 + 13) ^ (*((_DWORD *)mHead + 1) >> 9)) & 0x3800;
          *((_DWORD *)v13 + 11) = *((_DWORD *)mHead + 2);
          *((_DWORD *)v13 + 13) ^= (*((_DWORD *)v13 + 13) ^ (*((_DWORD *)mHead + 1) >> 9)) & 0x3C000;
          v13->unmapFrame = v51;
          v21 = v13->partSize[1] + v13->partSize[0] + v13->partSize[2] + v13->partSize[3];
          if ( v21 != NodeGetMaxVaSize(mHead) )
          {
            LODWORD(v46) = NodeGetMaxVaSize(mHead);
            LODWORD(v45) = v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4891, ASSERT_TYPE_ASSERT, "( totalSize ) == ( NodeGetMaxVaSize( node ) )", "%s == %s\n\t%u, %u", "totalSize", "NodeGetMaxVaSize( node )", v45, v46) )
              __debugbreak();
          }
          if ( RList<StreamDefragAllocNode>::PopFront(&p_mMoveableRegion->mAllocations) != mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4894, ASSERT_TYPE_ASSERT, "((moveableRegion.PopFront()) == (node))", (const char *)&queryFormat, "moveableRegion.PopFront() == node") )
            __debugbreak();
          v22 = *((_DWORD *)mHead + 1);
          if ( (v22 & 3) != 0 )
          {
            v35 = BitDecodeAlignment((*((_DWORD *)v13 + 13) >> 18) & 0xF);
            v34 = StreamDefragRegion<1>::Assign(p_mMoveableRegion, mHead, v21, v35, NULL);
          }
          else
          {
            GfxImageAtIndex = DB_GetGfxImageAtIndex((v22 >> 2) & 0x3FFFF);
            v24 = 32 - __lzcnt((*(_DWORD *)mHead >> 23) & 0xF);
            if ( v24 > GfxImageAtIndex->streamedPartCount )
            {
              LODWORD(v46) = GfxImageAtIndex->streamedPartCount;
              LODWORD(v45) = v24;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4909, ASSERT_TYPE_ASSERT, "( minReservedPartCount ) <= ( image->streamedPartCount )", "%s <= %s\n\t%u, %u", "minReservedPartCount", "image->streamedPartCount", v45, v46) )
                __debugbreak();
            }
            v25 = 0;
            v26 = 0;
            v27 = 0;
            v28 = 0i64;
            if ( v24 >= 2 )
            {
              v29 = ((v24 - 2) >> 1) + 1;
              v28 = (unsigned int)(2 * v29);
              do
              {
                v25 += *(v20 - 1);
                v26 += *v20;
                v20 += 2;
                --v29;
              }
              while ( v29 );
            }
            if ( (unsigned int)v28 < v24 )
              v27 = v13->partSize[v28];
            v30 = v25 + v26 + v27;
            if ( v21 < v30 )
            {
              LODWORD(v46) = v30;
              LODWORD(v45) = v21;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4916, ASSERT_TYPE_ASSERT, "( totalSize ) >= ( minReservedSize )", "%s >= %s\n\t%u, %u", "totalSize", "minReservedSize", v45, v46) )
                __debugbreak();
            }
            v31 = v21 - v30;
            v32 = (*((_DWORD *)v13 + 13) >> 18) & 0xF;
            startOverlap = v21 - v30;
            v33 = BitDecodeAlignment(v32);
            v34 = StreamDefragRegion<1>::Assign(v53, mHead, v21, v33, &startOverlap);
            if ( startOverlap != v31 )
              LOBYTE(v24) = GfxImageAtIndex->streamedPartCount;
            *((_DWORD *)mHead + 1) &= 0xFF8FFFFF;
            p_mMoveableRegion = v53;
            *((_DWORD *)mHead + 1) |= (v24 & 7) << 20;
            p_mDefragPool = v55;
          }
          v36 = Stream_Logger_MakeItem(&v68, mHead);
          v8 = *(_QWORD *)pool;
          v66 = *v36;
          v37 = StrmOffsetToAddress(pool[0], v34);
          v38 = StrmOffsetToAddress((StreamMemPool)v8, *((unsigned int *)mHead + 3));
          Stream_Logger_OnVAddrOffsetWriteChanged("StreamDefrag::DefragStep0_StartCommandsAndMapNewAddresses", dataa, &v66, v38, v37);
          *((_DWORD *)mHead + 1) &= 0xF87FFFFF;
          v39 = maxPages;
          *((_DWORD *)mHead + 3) = v34;
          v4 = v57;
          pagesTaken = 0i64;
          StreamerMemLoan::TakePages(&v57->mDefragPages, (StreamMemPool)v8, v39, &pagesTaken);
          if ( !v13->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4596, ASSERT_TYPE_ASSERT, "(command->node)", (const char *)&queryFormat, "command->node") )
            __debugbreak();
          Stream_Defrag_CheckLocks(v41, v40);
          StreamDefrag::TrackCommitParts(v4, v13, *((unsigned int *)v13->node + 3), *((_BYTE *)v13 + 55) & 0xF);
          v42 = DCONST_DVARBOOL_stream_defragAsyncMapping;
          if ( !DCONST_DVARBOOL_stream_defragAsyncMapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragAsyncMapping") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v42);
          if ( v42->current.enabled && Stream_IsEnabled() && !Stream_BackendQueue_IsInForcedFlush() && streamFrontendGlob->levelInit.state == 4 && (v43 = RStackThreadSafe<StreamDefragCommand>::Pop(p_mDefragPool)) != NULL )
          {
            *(__m256i *)&v43->node = *(__m256i *)&v13->node;
            *(_OWORD *)&v43->partOffset[2] = *(_OWORD *)&v13->partOffset[2];
            *((double *)v43 + 6) = *((double *)v13 + 6);
            RStackThreadSafe<StreamDefragCommand>::Push(&v4->mAsyncVAMaps, v43);
            v44 = 0;
          }
          else
          {
            if ( v4->mAsyncVAMaps.mHead || v4->mAsyncVAUnmaps.mHead )
              StreamDefrag::FlushAsyncVA(v4, Block, MapsAndUnmaps, 0);
            StreamDefrag::Map(v4, v13);
            v44 = 1;
          }
          v5 = v44 | v47;
          v47 |= v44;
          if ( (*((_DWORD *)mHead + 4) & 0xC00000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4941, ASSERT_TYPE_ASSERT, "(node->defragRefCount == 0)", (const char *)&queryFormat, "node->defragRefCount == 0") )
            __debugbreak();
          StreamDefrag::InsertCommand<0>(v4, v13);
          StreamDefragRegion<1>::PushBack(p_mMoveableRegion, mHead);
          v3 = dataa;
          v11 = --FrameDefragCommandCount;
        }
        else
        {
          StreamDefrag::UpdateNewTailAddressBeforeMove(v4, mHead);
          StreamDefragRegion<1>::ReleaseVAReserve(p_mMoveableRegion, mHead);
          item = *Stream_Logger_MakeItem(&result, mHead);
          Stream_Logger_OnVirtualAddressReleased("StreamDefrag::DefragStep0_StartCommandsAndMapNewAddresses", v3, &item);
          *((_DWORD *)mHead + 1) &= 0xF80FFFFF;
          *((_QWORD *)mHead + 1) = 0i64;
          v11 = FrameDefragCommandCount;
        }
      }
      while ( v11 );
    }
    StreamDefragRegion<1>::Validate(p_mMoveableRegion);
    v7 = v54 + 1;
    v54 = v7;
    if ( v7 >= 2 )
      break;
    v6 = startPoolIndex;
    v3 = dataa;
  }
  Sys_UnlockWrite(critSect);
  if ( v5 )
    Mem_Paged_BatchFlush();
}

/*
==============
StreamDefrag::DefragStep1_IssueCopies
==============
*/
void StreamDefrag::DefragStep1_IssueCopies(StreamDefrag *this, GfxCmdBufContext *gfxContext)
{
  const dvar_t *v4; 
  GfxCmdBufState *p_state; 
  StreamDefragCopyMode integer; 
  char v7; 
  unsigned __int8 v8; 
  unsigned __int8 v9; 
  StreamDefragCommand *mHead; 
  StreamDefragCommand *mTail; 
  StreamDefragAllocNode *node; 
  StreamDefragCommand *v13; 
  int v14; 
  Stream_Logger_Item v15; 
  StreamDefragAllocNode *v16; 
  unsigned int size; 
  const unsigned __int8 *v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  StreamDefragCopyMode mCopyMode; 
  __int64 v24; 
  __int64 v25; 
  void *data; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 
  ComputeCmdBufState state; 

  data = gfxContext;
  Stream_Defrag_CheckLocks(this, gfxContext);
  if ( this->mDefragSteps[1].mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4968, ASSERT_TYPE_ASSERT, "(DefragStepCommands( StreamDefragStep::PTR_FIXUP ).Empty())", (const char *)&queryFormat, "DefragStepCommands( StreamDefragStep::PTR_FIXUP ).Empty()") )
    __debugbreak();
  Stream_Logger_OnDefragOp("StreamDefrag::DefragStep1_IssueCopies", gfxContext->source->input.data);
  if ( this->mDefragSteps[0].mTail )
  {
    v4 = DVARINT_stream_defragCopyMode;
    p_state = gfxContext->state;
    if ( !DVARINT_stream_defragCopyMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragCopyMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    integer = v4->current.integer;
    this->mCopyMode = integer;
    if ( (unsigned int)(integer - 1) <= 1 )
    {
      R_InitComputeCmdBufState(&state, (GfxBackEndData *)p_state->data, COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND);
      p_state = (GfxCmdBufState *)&state;
    }
    else if ( (unsigned int)(integer - 3) <= 1 )
    {
      R_LockGfxImmediateContext();
      R_GPU_BeginTimer(GPU_TIMER_STREAMER_DEFRAG);
    }
    R_ProfBeginNamedEvent(p_state, "StreamerDefrag");
    v7 = 0;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      mHead = this->mDefragSteps[0].mHead;
      if ( !mHead )
        break;
      if ( *((_DWORD *)mHead + 13) << 21 )
      {
        this->mDefragSteps[0].mHead = &mHead[(__int64)(int)(*((_DWORD *)mHead + 13) << 21) >> 21];
        *((_DWORD *)mHead + 13) &= 0xFFFFF800;
        mTail = this->mDefragSteps[0].mTail;
        if ( mTail && (*((_DWORD *)mTail + 13) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 113, ASSERT_TYPE_ASSERT, "(mTail == nullptr || mTail->next == 0)", (const char *)&queryFormat, "mTail == nullptr || mTail->next == 0") )
          __debugbreak();
      }
      else
      {
        if ( this->mDefragSteps[0].mTail != mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 103, ASSERT_TYPE_ASSERT, "(mTail == mHead)", (const char *)&queryFormat, "mTail == mHead") )
          __debugbreak();
        this->mDefragSteps[0].mHead = NULL;
        this->mDefragSteps[0].mTail = NULL;
      }
      if ( !mHead->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5005, ASSERT_TYPE_ASSERT, "(command->node)", (const char *)&queryFormat, "command->node") )
        __debugbreak();
      if ( (*((_DWORD *)mHead->node + 4) & 0xC00000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5006, ASSERT_TYPE_ASSERT, "(command->node->defragRefCount > 0)", (const char *)&queryFormat, "command->node->defragRefCount > 0") )
        __debugbreak();
      if ( mHead->unmapFrame != this->mDefragUnmapFrameDepth + this->mDefragFrameIndex + 1 )
      {
        LODWORD(v25) = this->mDefragUnmapFrameDepth + this->mDefragFrameIndex + 1;
        LODWORD(v24) = mHead->unmapFrame;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5011, ASSERT_TYPE_ASSERT, "( command->unmapFrame ) == ( mDefragFrameIndex + mDefragUnmapFrameDepth + 1 )", "%s == %s\n\t%u, %u", "command->unmapFrame", "mDefragFrameIndex + mDefragUnmapFrameDepth + 1", v24, v25) )
          __debugbreak();
      }
      node = mHead->node;
      *((_DWORD *)mHead + 12) = *((_DWORD *)mHead->node + 3);
      switch ( this->mCopyMode )
      {
        case 0:
          goto $LN45_22;
        case 1:
        case 3:
          goto $LN46_21;
        case 2:
        case 4:
          if ( (*(_DWORD *)node & 0x80000) != 0 )
$LN46_21:
            v8 |= Stream_Defrag_MemCpy(GPUMemCpyAsync, p_state, mHead) != 0;
          else
$LN45_22:
            v7 |= StreamDefrag::CPUMemCpyAsync(this, mHead);
          break;
        case 5:
          v9 |= Stream_Defrag_MemCpy(DMAMemCpyAsync, p_state, mHead) != 0;
          break;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5056, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
            __debugbreak();
          break;
      }
      v13 = this->mDefragSteps[1].mHead;
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = (int)(*((_DWORD *)v13 + 13) << 21) >> 21;
          if ( v13->node == mHead->node )
            break;
          if ( v14 )
          {
            v13 += v14;
            if ( v13 )
              continue;
          }
          goto LABEL_47;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4317, ASSERT_TYPE_ASSERT, "(DefragStepCommands( STEP ).FindIf( [command]( const StreamDefragCommand *otherCommand ) { return otherCommand->node == command->node; } ) == nullptr)", (const char *)&queryFormat, "DefragStepCommands( STEP ).FindIf( [command]( const StreamDefragCommand *otherCommand ) { return otherCommand->node == command->node; } ) == nullptr") )
          __debugbreak();
      }
LABEL_47:
      if ( (*((_DWORD *)mHead->node + 4) & 0xC00000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4328, ASSERT_TYPE_ASSERT, "(command->node->defragRefCount > 0)", (const char *)&queryFormat, "command->node->defragRefCount > 0") )
        __debugbreak();
      RSList<StreamDefragCommand>::PushBack(&this->mDefragSteps[1], mHead);
      v15 = *Stream_Logger_MakeItem(&result, mHead->node);
      v16 = mHead->node;
      size = mHead->partSize[0] + mHead->partSize[1] + mHead->partSize[2] + mHead->partSize[3];
      item = v15;
      v18 = StrmOffsetToAddress((StreamMemPool)((*(_DWORD *)v16 >> 19) & 1), *((unsigned int *)v16 + 2));
      Stream_Logger_OnInsertDefragCommand("StreamDefrag::InsertCommand", NULL, &item, DODGE, v18, size);
    }
    v19 = (__int64)data;
    if ( this->mDefragSteps[0].mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 97, ASSERT_TYPE_ASSERT, "(mTail == nullptr)", (const char *)&queryFormat, "mTail == nullptr") )
      __debugbreak();
    R_ProfEndNamedEvent(p_state);
    if ( v7 && this->mAsyncCPUMemCpyProcess && this->mAsyncCPUMemCopies.mHead )
    {
      data = this;
      Sys_AddWorkerCmd(WRKCMD_STREAM_DEFRAG_FLUSH_CPU_MEMCPY, &data);
    }
    if ( v8 )
    {
      v20 = ++this->mGPUCopyFenceCounter;
      R_GPULabel_Signal(p_state, this->mGPUCopyFenceAddr, v20);
      R_FlushCompute(p_state);
      v21 = v20;
    }
    else
    {
      if ( !v9 )
        goto LABEL_63;
      v22 = R_FlushDefragDMACommandList();
      this->mDMACopyFence = v22;
      v21 = v22;
    }
    Stream_Logger_OnInsertCopyFinishedFence("StreamDefrag::DefragStep1_IssueCopies", *(const GfxBackEndData **)(*(_QWORD *)v19 + 9728i64), v21);
LABEL_63:
    if ( v8 + (unsigned int)v9 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5087, ASSERT_TYPE_ASSERT, "(issuedAsyncGPUCopies + issuedAsyncDMACopies <= 1)", (const char *)&queryFormat, "issuedAsyncGPUCopies + issuedAsyncDMACopies <= 1") )
      __debugbreak();
    mCopyMode = this->mCopyMode;
    if ( (unsigned int)(mCopyMode - 1) <= 1 )
    {
      R_ShutdownComputeCmdBufState(p_state);
    }
    else if ( (unsigned int)(mCopyMode - 3) <= 1 )
    {
      R_GPU_EndTimer();
      R_UnlockGfxImmediateContext();
    }
  }
}

/*
==============
StreamDefrag::DefragStep2_PtrFixup
==============
*/
void StreamDefrag::DefragStep2_PtrFixup(StreamDefrag *this, const GfxBackEndData *data)
{
  const GfxBackEndData *v2; 
  StreamDefrag *v3; 
  char v4; 
  unsigned int v5; 
  StreamDefragCommand *mHead; 
  StreamDefragCommand *mTail; 
  __int64 v8; 
  StreamDefragCopyMode mCopyMode; 
  const dvar_t *v10; 
  int integer; 
  __int64 v12; 
  unsigned int *partSize; 
  unsigned __int64 v14; 
  __int64 v15; 
  unsigned __int8 *v16; 
  const unsigned __int8 *v17; 
  bool v18; 
  bool v19; 
  StreamDefragCopyMode v20; 
  int v21; 
  unsigned __int64 mDMACopyFence; 
  bool v23; 
  const unsigned __int8 *v24; 
  Stream_Logger_Item v25; 
  const StreamDefragAllocNode *node; 
  const unsigned __int8 *v27; 
  const unsigned __int8 *v28; 
  __int64 v29; 
  Stream_Logger_Item v30; 
  StreamDefragAllocNode *v31; 
  unsigned __int64 v32; 
  unsigned int size; 
  const unsigned __int8 *v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 pool; 
  __int64 v38; 
  unsigned int *v39; 
  Stream_Logger_Item item; 
  Stream_Logger_Item v41; 
  Stream_Logger_Item result; 
  Stream_Logger_Item v43; 
  char v46; 
  int v47; 

  v2 = data;
  v3 = this;
  Stream_Defrag_CheckLocks(this, data);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5107, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  Stream_Logger_OnDefragOp("StreamDefrag::DefragStep2_PtrFixup", v2);
  StreamDefrag::FlushAsyncCPUMemCpy(v3, Block, 0);
  v4 = 0;
  v46 = 0;
  v5 = 0;
  while ( 1 )
  {
    mHead = v3->mDefragSteps[1].mHead;
    if ( !mHead )
      break;
    if ( *((_DWORD *)mHead + 13) << 21 )
    {
      v3->mDefragSteps[1].mHead = &mHead[(__int64)(int)(*((_DWORD *)mHead + 13) << 21) >> 21];
      *((_DWORD *)mHead + 13) &= 0xFFFFF800;
      mTail = v3->mDefragSteps[1].mTail;
      if ( mTail && (*((_DWORD *)mTail + 13) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 113, ASSERT_TYPE_ASSERT, "(mTail == nullptr || mTail->next == 0)", (const char *)&queryFormat, "mTail == nullptr || mTail->next == 0") )
        __debugbreak();
    }
    else
    {
      if ( v3->mDefragSteps[1].mTail != mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 103, ASSERT_TYPE_ASSERT, "(mTail == mHead)", (const char *)&queryFormat, "mTail == mHead") )
        __debugbreak();
      v3->mDefragSteps[1].mHead = NULL;
      v3->mDefragSteps[1].mTail = NULL;
    }
    if ( !mHead->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5128, ASSERT_TYPE_ASSERT, "(command->node)", (const char *)&queryFormat, "command->node") )
      __debugbreak();
    if ( (*((_DWORD *)mHead->node + 4) & 0xC00000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5129, ASSERT_TYPE_ASSERT, "(command->node->defragRefCount > 0)", (const char *)&queryFormat, "command->node->defragRefCount > 0") )
      __debugbreak();
    if ( (*(_DWORD *)mHead->node & 0x200000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5130, ASSERT_TYPE_ASSERT, "(command->node->moveable)", (const char *)&queryFormat, "command->node->moveable") )
      __debugbreak();
    v8 = (*(_DWORD *)mHead->node >> 19) & 1;
    pool = v8;
    if ( *((_DWORD *)mHead + 12) != *((_DWORD *)mHead->node + 3) )
    {
      LODWORD(v36) = *((_DWORD *)mHead->node + 3);
      LODWORD(v35) = *((_DWORD *)mHead + 12);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5135, ASSERT_TYPE_ASSERT, "( command->vAddrOffsetWrite ) == ( command->node->vAddrOffsetWrite )", "%s == %s\n\t%u, %u", "command->vAddrOffsetWrite", "command->node->vAddrOffsetWrite", v35, v36) )
        __debugbreak();
    }
    if ( !v4 )
    {
      mCopyMode = v3->mCopyMode;
      if ( ((mCopyMode - 1) & 0xFFFFFFFD) != 0 )
      {
        if ( mCopyMode == 5 )
          R_WaitDefragDMACommandListFence(v3->mDMACopyFence);
      }
      else
      {
        while ( 1 )
        {
          v20 = v3->mCopyMode;
          if ( v20 == MOVEMENT )
            break;
          if ( v20 == 5 )
          {
            v21 = R_DefragDMACommandListFencePending(&v3->mDMACopyFence);
            mDMACopyFence = v3->mDMACopyFence;
            v23 = v21 == 0;
          }
          else
          {
            mDMACopyFence = v3->mGPUCopyFenceCounter;
            v23 = mDMACopyFence <= *v3->mGPUCopyFenceAddr;
          }
          Stream_Logger_OnCopyFinishedFenceCheck("StreamDefrag::IsAsyncCopyFinished", v2, mDMACopyFence);
          if ( v23 )
            break;
          Sys_Sleep(0);
        }
      }
      v46 = 1;
    }
    v10 = DCONST_DVARINT_stream_defragValidationMode;
    if ( !DCONST_DVARINT_stream_defragValidationMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragValidationMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    integer = v10->current.integer;
    v47 = integer;
    if ( integer )
    {
      v12 = 1i64;
      partSize = mHead->partSize;
      v38 = 1i64;
      v39 = mHead->partSize;
      while ( ((unsigned __int8)v12 & (unsigned __int8)HIBYTE(*((_DWORD *)mHead + 13)) & 0xF) == 0 )
      {
LABEL_55:
        ++v39;
        ++v5;
        partSize = v39;
        v12 = __ROL8__(v12, 1);
        v38 = v12;
        if ( v5 >= 4 )
        {
          v3 = this;
          v2 = data;
          v5 = 0;
          goto LABEL_57;
        }
      }
      v14 = *partSize;
      v15 = partSize[4];
      v16 = StrmOffsetToAddress((StreamMemPool)v8, *((unsigned int *)mHead->node + 2));
      v17 = &v16[v15];
      if ( integer == 2 )
        ValidateDataHashAgainstXPakEntry(&v16[v15], (unsigned int)v14, v5, mHead->node);
      if ( this->mCopyMode == 5 )
      {
        v18 = R_DefragDMACommandListFencePending(&this->mDMACopyFence) == 0;
        Stream_Logger_OnCopyFinishedFenceCheck("StreamDefrag::IsAsyncCopyFinished", data, this->mDMACopyFence);
        v19 = !v18;
        v12 = v38;
        if ( v19 )
        {
          integer = v47;
LABEL_54:
          v8 = pool;
          goto LABEL_55;
        }
      }
      else if ( (_DWORD)pool && !StreamDefrag::IsAsyncCopyFinished(this, data) )
      {
        goto LABEL_54;
      }
      v24 = &StrmOffsetToAddress((StreamMemPool)pool, *((unsigned int *)mHead->node + 3))[v15];
      if ( v47 == 2 )
      {
        ValidateDataHashAgainstXPakEntry(v24, v14, v5, mHead->node);
      }
      else
      {
        if ( (unsigned int)v14 < 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5199, ASSERT_TYPE_ASSERT, "(partSize >= sizeof( uint64_t ))", (const char *)&queryFormat, "partSize >= sizeof( uint64_t )") )
          __debugbreak();
        if ( v47 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5200, ASSERT_TYPE_ASSERT, "(validationMode == StreamDefragValidationMode::QuickValidation)", (const char *)&queryFormat, "validationMode == StreamDefragValidationMode::QuickValidation") )
          __debugbreak();
        if ( *(_QWORD *)v24 != *(_QWORD *)v17 )
        {
          ValidateDataHashAgainstXPakEntry(v17, (unsigned int)v14, v5, mHead->node);
          ValidateDataHashAgainstXPakEntry(v24, (unsigned int)v14, v5, mHead->node);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5207, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Expected %llu but got %llu", *(_QWORD *)v24, *(_QWORD *)v17) )
            __debugbreak();
        }
      }
      integer = v47;
      goto LABEL_54;
    }
LABEL_57:
    if ( *((_DWORD *)mHead + 11) != *((_DWORD *)mHead->node + 2) )
    {
      LODWORD(v36) = *((_DWORD *)mHead->node + 2);
      LODWORD(v35) = *((_DWORD *)mHead + 11);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5216, ASSERT_TYPE_ASSERT, "( command->vAddrOffsetUnmap ) == ( command->node->vAddrOffsetRead )", "%s == %s\n\t%u, %u", "command->vAddrOffsetUnmap", "command->node->vAddrOffsetRead", v35, v36) )
        __debugbreak();
    }
    if ( mHead->unmapFrame != v3->mDefragFrameIndex + v3->mDefragUnmapFrameDepth )
    {
      LODWORD(v36) = v3->mDefragFrameIndex + v3->mDefragUnmapFrameDepth;
      LODWORD(v35) = mHead->unmapFrame;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5217, ASSERT_TYPE_ASSERT, "( command->unmapFrame ) == ( mDefragFrameIndex + mDefragUnmapFrameDepth )", "%s == %s\n\t%u, %u", "command->unmapFrame", "mDefragFrameIndex + mDefragUnmapFrameDepth", v35, v36) )
        __debugbreak();
    }
    v25 = *Stream_Logger_MakeItem(&result, mHead->node);
    node = mHead->node;
    item = v25;
    v27 = StrmOffsetToAddress((StreamMemPool)v8, *((unsigned int *)node + 3));
    v28 = StrmOffsetToAddress((StreamMemPool)v8, *((unsigned int *)mHead->node + 2));
    Stream_Logger_OnVAddrOffsetReadChanged("StreamDefrag::DefragStep2_PtrFixup", v2, &item, v28, v27);
    v29 = v8 << 8;
    if ( !*(unsigned int *)((char *)&v3->mAddressSpaces[0].mMoveableRegion.mDefragInFlightCopyCount + v29) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2010, ASSERT_TYPE_ASSERT, "(mDefragInFlightCopyCount > 0)", (const char *)&queryFormat, "mDefragInFlightCopyCount > 0") )
      __debugbreak();
    --*(unsigned int *)((char *)&v3->mAddressSpaces[0].mMoveableRegion.mDefragInFlightCopyCount + v29);
    if ( *((_DWORD *)mHead->node + 2) == *((_DWORD *)mHead->node + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5225, ASSERT_TYPE_ASSERT, "(command->node->vAddrOffsetRead != command->node->vAddrOffsetWrite)", (const char *)&queryFormat, "command->node->vAddrOffsetRead != command->node->vAddrOffsetWrite") )
      __debugbreak();
    *((_DWORD *)mHead->node + 2) = *((_DWORD *)mHead->node + 3);
    *(_DWORD *)mHead->node &= ~0x400000u;
    Node_PtrFixup(v2, mHead->node, 0);
    if ( (*((_DWORD *)mHead->node + 4) & 0xC00000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4328, ASSERT_TYPE_ASSERT, "(command->node->defragRefCount > 0)", (const char *)&queryFormat, "command->node->defragRefCount > 0") )
      __debugbreak();
    RSList<StreamDefragCommand>::PushBack(&v3->mDefragSteps[2], mHead);
    v30 = *Stream_Logger_MakeItem(&v43, mHead->node);
    v31 = mHead->node;
    v32 = *((unsigned int *)mHead + 11);
    size = mHead->partSize[0] + mHead->partSize[1] + mHead->partSize[2] + mHead->partSize[3];
    v41 = v30;
    v34 = StrmOffsetToAddress((StreamMemPool)((*(_DWORD *)v31 >> 19) & 1), v32);
    Stream_Logger_OnInsertDefragCommand("StreamDefrag::InsertCommand", NULL, &v41, COUNT, v34, size);
    v4 = v46;
  }
  if ( v3->mDefragSteps[1].mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 97, ASSERT_TYPE_ASSERT, "(mTail == nullptr)", (const char *)&queryFormat, "mTail == nullptr") )
    __debugbreak();
}

/*
==============
StreamDefrag::DefragStep3_UnmapOldAddress
==============
*/
void StreamDefrag::DefragStep3_UnmapOldAddress(StreamDefrag *this, const GfxBackEndData *data)
{
  const GfxBackEndData *v2; 
  StreamDefragCommand *mHead; 
  StreamDefragCommand *mTail; 
  unsigned __int64 v6; 
  unsigned int mDefragFrameIndex; 
  unsigned int unmapFrame; 
  __int64 v9; 
  char *v10; 
  Stream_Logger_Item *v11; 
  unsigned __int64 v12; 
  const unsigned __int8 *v13; 
  StreamNextTailAddress *v14; 
  __int64 MaxVaSize; 
  __int64 VaSizeForParts; 
  unsigned __int8 *v17; 
  __int64 v18; 
  unsigned __int64 vAddrCurTail; 
  unsigned __int8 *v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned __int64 v23; 
  __int64 v24; 
  unsigned __int64 v25; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  unsigned __int64 v31; 
  __int64 v32; 
  unsigned __int64 v33; 
  bool v34; 
  const StreamKey *StreamKeyAtIndex; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  const dvar_t *v40; 
  __int64 v41; 
  StreamDefragCommand *v42; 
  StreamDefragCommand *v43; 
  signed __int64 v44; 
  int v45; 
  __int64 v46; 
  bool v47; 
  __int64 v48; 
  __int64 v49; 
  StreamerMemPageCounts *p_unmappedPages; 
  int v51; 
  __int64 v52; 
  StreamDefrag::AddressSpace *mAddressSpaces; 
  StreamNextTailAddress **p_mTail; 
  StreamNextTailAddress *v55; 
  const char *v56; 
  const char *v57; 
  const char *v58; 
  int v59; 
  __int16 v60; 
  StreamNextTailAddress *v61; 
  unsigned __int64 mAddrTail; 
  unsigned __int64 vAddrNextTail; 
  StreamNextTailAddress *v64; 
  signed __int64 v65; 
  __int64 v66; 
  __int64 v67; 
  __int64 v68; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 
  StreamerMemPageCounts unmappedPages; 
  StreamerMemPageCounts v73; 

  v2 = data;
  Stream_Defrag_CheckLocks(this, data);
  if ( this->mDefragFrameIndex >= this->mDefragUnmapFrameDepth + 2 )
  {
    Stream_Logger_OnDefragOp("StreamDefrag::DefragStep3_UnmapOldAddress", v2);
    unmappedPages = 0i64;
    while ( 1 )
    {
      mHead = this->mDefragSteps[2].mHead;
      if ( !mHead )
      {
        if ( this->mDefragSteps[2].mTail )
        {
          v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 97, ASSERT_TYPE_ASSERT, "(mTail == nullptr)", (const char *)&queryFormat, "mTail == nullptr");
          goto LABEL_107;
        }
LABEL_109:
        v48 = 2i64;
        v49 = 2i64;
        p_unmappedPages = &unmappedPages;
        v51 = 0;
        if ( &unmappedPages > &v73 )
          v49 = 0i64;
        v52 = 0i64;
        if ( &unmappedPages <= &v73 )
        {
          do
          {
            v51 += p_unmappedPages->pages[0];
            ++v52;
            p_unmappedPages = (StreamerMemPageCounts *)((char *)p_unmappedPages + 4);
          }
          while ( v52 != v49 );
          if ( v51 )
          {
            Mem_Paged_BatchFlush();
            StreamDefrag::AddPagesToDefragPageSurplus(this, &unmappedPages);
          }
        }
        StreamDefrag::ValidateNextTailAddresses(this);
        mAddressSpaces = this->mAddressSpaces;
        p_mTail = &this->mNextTailAddresses[0].mTail;
        while ( 2 )
        {
          v55 = *(p_mTail - 1);
          if ( v55 )
          {
            v60 = *((_WORD *)v55 + 8);
            if ( v60 )
            {
              v61 = &v55[v60];
              *(p_mTail - 1) = v61;
              *((_WORD *)v61 + 9) = 0;
              *((_DWORD *)v55 + 4) = 0;
              if ( *p_mTail && *((_WORD *)*p_mTail + 8) )
              {
                v58 = "mTail == nullptr || mTail->next == 0";
                v59 = 425;
                v56 = "(mTail == nullptr || mTail->next == 0)";
                v57 = "c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h";
                goto LABEL_132;
              }
            }
            else
            {
              if ( *p_mTail != v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 412, ASSERT_TYPE_ASSERT, "(mTail == mHead)", (const char *)&queryFormat, "mTail == mHead") )
                __debugbreak();
              if ( (*((_DWORD *)v55 + 4) & 0xFFFF0000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 413, ASSERT_TYPE_ASSERT, "(node->prev == 0)", (const char *)&queryFormat, "node->prev == 0") )
                __debugbreak();
              *(p_mTail - 1) = NULL;
              *p_mTail = NULL;
            }
          }
          else
          {
            if ( *p_mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 406, ASSERT_TYPE_ASSERT, "(mTail == nullptr)", (const char *)&queryFormat, "mTail == nullptr") )
              __debugbreak();
            v56 = "(nextTailAddress)";
            v55 = NULL;
            v57 = "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp";
            v58 = "nextTailAddress";
            v59 = 5342;
LABEL_132:
            if ( CoreAssert_Handler(v57, v59, ASSERT_TYPE_ASSERT, v56, (const char *)&queryFormat, v58) )
              __debugbreak();
          }
          if ( v55->unmapFrame != this->mDefragFrameIndex )
          {
            LODWORD(v68) = this->mDefragFrameIndex;
            LODWORD(v67) = v55->unmapFrame;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5343, ASSERT_TYPE_ASSERT, "( nextTailAddress->unmapFrame ) == ( mDefragFrameIndex )", "%s == %s\n\t%u, %u", "nextTailAddress->unmapFrame", "mDefragFrameIndex", v67, v68) )
              __debugbreak();
          }
          mAddrTail = mAddressSpaces->mMoveableRegion.mAddrTail;
          if ( mAddrTail != v55->vAddrCurTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5344, ASSERT_TYPE_ASSERT, "( moveableRegion.GetTail() ) == ( nextTailAddress->vAddrCurTail )", "%s == %s\n\t%llx, %llx", "moveableRegion.GetTail()", "nextTailAddress->vAddrCurTail", mAddrTail, v55->vAddrCurTail) )
            __debugbreak();
          vAddrNextTail = v55->vAddrNextTail;
          if ( v55->vAddrCurTail != vAddrNextTail )
            StreamDefragRegion<1>::MoveTailAddressForward(&mAddressSpaces->mMoveableRegion, vAddrNextTail);
          if ( *((_WORD *)v55 + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 652, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
            __debugbreak();
          v64 = this->mNextTailAddressPool.mHead;
          if ( v64 )
          {
            v65 = (char *)v64 - (char *)v55;
            v66 = v65 / 24;
            *((_WORD *)v55 + 8) = v65 / 24;
            if ( (__int16)v66 != v66 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 659, ASSERT_TYPE_ASSERT, "( node->next ) == ( curHead - node )", "%s == %s\n\t%lli, %lli", "node->next", "curHead - node", (__int16)v66, v65 / 24) )
              __debugbreak();
          }
          else
          {
            *((_WORD *)v55 + 8) = 0;
          }
          p_mTail += 2;
          this->mNextTailAddressPool.mHead = v55;
          ++mAddressSpaces;
          if ( !--v48 )
            return;
          continue;
        }
      }
      if ( *((_DWORD *)mHead + 13) << 21 )
      {
        this->mDefragSteps[2].mHead = &mHead[(__int64)(int)(*((_DWORD *)mHead + 13) << 21) >> 21];
        *((_DWORD *)mHead + 13) &= 0xFFFFF800;
        mTail = this->mDefragSteps[2].mTail;
        if ( mTail && (*((_DWORD *)mTail + 13) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 113, ASSERT_TYPE_ASSERT, "(mTail == nullptr || mTail->next == 0)", (const char *)&queryFormat, "mTail == nullptr || mTail->next == 0") )
          __debugbreak();
      }
      else
      {
        if ( this->mDefragSteps[2].mTail != mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 103, ASSERT_TYPE_ASSERT, "(mTail == mHead)", (const char *)&queryFormat, "mTail == mHead") )
          __debugbreak();
        this->mDefragSteps[2].mHead = NULL;
        this->mDefragSteps[2].mTail = NULL;
      }
      if ( !mHead->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5262, ASSERT_TYPE_ASSERT, "(command->node)", (const char *)&queryFormat, "command->node") )
        __debugbreak();
      if ( (*((_DWORD *)mHead->node + 4) & 0xC00000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5263, ASSERT_TYPE_ASSERT, "(command->node->defragRefCount > 0)", (const char *)&queryFormat, "command->node->defragRefCount > 0") )
        __debugbreak();
      if ( (*(_DWORD *)mHead->node & 0x200000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5264, ASSERT_TYPE_ASSERT, "(command->node->moveable)", (const char *)&queryFormat, "command->node->moveable") )
        __debugbreak();
      if ( !mHead->unmapFrame )
      {
        LODWORD(v68) = 1;
        LODWORD(v67) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5265, ASSERT_TYPE_ASSERT, "( command->unmapFrame ) >= ( 1 )", "%s >= %s\n\t%u, %u", "command->unmapFrame", "1", v67, v68) )
          __debugbreak();
      }
      if ( (*(_DWORD *)mHead->node & 0x400000) != 0 )
      {
        v6 = *((unsigned int *)mHead->node + 4);
        if ( (v6 & 0xC00000) != 0x800000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5268, ASSERT_TYPE_ASSERT, "( ( command->node->isVaResizing == 0 || command->node->defragRefCount == 2 ) )", "( command->node->defragRefCount ) = %llu", (v6 >> 22) & 3) )
          __debugbreak();
      }
      mDefragFrameIndex = this->mDefragFrameIndex;
      unmapFrame = mHead->unmapFrame;
      if ( unmapFrame > mDefragFrameIndex )
      {
        if ( (*((_DWORD *)mHead + 13) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 69, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
          __debugbreak();
        v42 = this->mDefragSteps[2].mTail;
        if ( v42 && (*((_DWORD *)v42 + 13) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 70, ASSERT_TYPE_ASSERT, "(mTail == nullptr || mTail->next == 0)", (const char *)&queryFormat, "mTail == nullptr || mTail->next == 0") )
          __debugbreak();
        v43 = this->mDefragSteps[2].mHead;
        if ( !this->mDefragSteps[2].mTail )
        {
          if ( v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 76, ASSERT_TYPE_ASSERT, "(mHead == nullptr)", (const char *)&queryFormat, "mHead == nullptr") )
            __debugbreak();
          this->mDefragSteps[2].mTail = mHead;
        }
        this->mDefragSteps[2].mHead = mHead;
        if ( v43 )
        {
          v44 = (char *)v43 - (char *)mHead;
          v45 = *((_DWORD *)mHead + 13) ^ (*((_DWORD *)mHead + 13) ^ (v44 / 56)) & 0x7FF;
          *((_DWORD *)mHead + 13) = v45;
          v46 = (__int64)(v45 << 21) >> 21;
          if ( v46 != v44 / 56 )
          {
            v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 87, ASSERT_TYPE_ASSERT, "( node->next ) == ( oldHead - node )", "%s == %s\n\t%lli, %lli", "node->next", "oldHead - node", v46, v44 / 56);
LABEL_107:
            if ( v47 )
              __debugbreak();
          }
        }
        goto LABEL_109;
      }
      v9 = (*(_DWORD *)mHead->node >> 19) & 1;
      v10 = (char *)this + 256 * v9;
      if ( unmapFrame != mDefragFrameIndex )
      {
        LODWORD(v68) = this->mDefragFrameIndex;
        LODWORD(v67) = mHead->unmapFrame;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5281, ASSERT_TYPE_ASSERT, "( command->unmapFrame ) == ( mDefragFrameIndex )", "%s == %s\n\t%u, %u", "command->unmapFrame", "mDefragFrameIndex", v67, v68) )
          __debugbreak();
      }
      v11 = Stream_Logger_MakeItem(&result, mHead->node);
      v12 = *((unsigned int *)mHead + 11);
      item = *v11;
      v13 = StrmOffsetToAddress((StreamMemPool)v9, v12);
      Stream_Logger_OnDefragUnmapAsync("StreamDefrag::DefragStep3_UnmapOldAddress", v2, &item, v13);
      v14 = this->mNextTailAddresses[v9].mHead;
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5287, ASSERT_TYPE_ASSERT, "(nextTailAddress)", (const char *)&queryFormat, "nextTailAddress") )
        __debugbreak();
      if ( v14->unmapFrame != this->mDefragFrameIndex )
      {
        LODWORD(v68) = this->mDefragFrameIndex;
        LODWORD(v67) = v14->unmapFrame;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5288, ASSERT_TYPE_ASSERT, "( nextTailAddress->unmapFrame ) == ( mDefragFrameIndex )", "%s == %s\n\t%u, %u", "nextTailAddress->unmapFrame", "mDefragFrameIndex", v67, v68) )
          __debugbreak();
      }
      if ( v14->vAddrCurTail != *((_QWORD *)v10 + 412167) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5289, ASSERT_TYPE_ASSERT, "( nextTailAddress->vAddrCurTail ) == ( moveableRegion.GetTail() )", "%s == %s\n\t%llx, %llx", "nextTailAddress->vAddrCurTail", "moveableRegion.GetTail()", v14->vAddrCurTail, *((_QWORD *)v10 + 412167)) )
        __debugbreak();
      MaxVaSize = NodeGetMaxVaSize(mHead->node);
      VaSizeForParts = NodeGetVaSizeForParts(mHead->node, (*((_DWORD *)mHead + 13) >> 11) & 7);
      v17 = StrmOffsetToAddress((StreamMemPool)v9, *((unsigned int *)mHead + 11));
      v18 = MaxVaSize - VaSizeForParts;
      vAddrCurTail = v14->vAddrCurTail;
      v20 = &v17[v18];
      if ( (v14->vAddrCurTail < *((_QWORD *)v10 + 412165) || vAddrCurTail > *((_QWORD *)v10 + 412166)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1143, ASSERT_TYPE_ASSERT, "(a >= mAddrBase && a <= mAddrEnd)", (const char *)&queryFormat, "a >= mAddrBase && a <= mAddrEnd") )
        __debugbreak();
      if ( ((unsigned __int64)v20 < *((_QWORD *)v10 + 412165) || (unsigned __int64)v20 > *((_QWORD *)v10 + 412166)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1144, ASSERT_TYPE_ASSERT, "(b >= mAddrBase && b <= mAddrEnd)", (const char *)&queryFormat, "b >= mAddrBase && b <= mAddrEnd") )
        __debugbreak();
      v21 = truncate_cast<__int64,unsigned __int64>(vAddrCurTail - *((_QWORD *)v10 + 412165));
      v22 = truncate_cast<__int64,unsigned __int64>((unsigned __int64)&v20[-*((_QWORD *)v10 + 412165)]);
      v23 = *((_QWORD *)v10 + 412166) - *((_QWORD *)v10 + 412165);
      v24 = v22 - v21;
      if ( v24 < 0 )
        v24 += v23;
      v25 = truncate_cast<unsigned __int64,__int64>(v24 % v23);
      v26 = v14->vAddrCurTail;
      v27 = v25;
      v28 = v14->vAddrNextTail;
      if ( (v14->vAddrCurTail < *((_QWORD *)v10 + 412165) || v26 > *((_QWORD *)v10 + 412166)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1143, ASSERT_TYPE_ASSERT, "(a >= mAddrBase && a <= mAddrEnd)", (const char *)&queryFormat, "a >= mAddrBase && a <= mAddrEnd") )
        __debugbreak();
      if ( (v28 < *((_QWORD *)v10 + 412165) || v28 > *((_QWORD *)v10 + 412166)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1144, ASSERT_TYPE_ASSERT, "(b >= mAddrBase && b <= mAddrEnd)", (const char *)&queryFormat, "b >= mAddrBase && b <= mAddrEnd") )
        __debugbreak();
      v29 = truncate_cast<__int64,unsigned __int64>(v26 - *((_QWORD *)v10 + 412165));
      v30 = truncate_cast<__int64,unsigned __int64>(v28 - *((_QWORD *)v10 + 412165));
      v31 = *((_QWORD *)v10 + 412166) - *((_QWORD *)v10 + 412165);
      v32 = v30 - v29;
      if ( v32 < 0 )
        v32 += v31;
      v33 = truncate_cast<unsigned __int64,__int64>(v32 % v31);
      if ( (*((_DWORD *)mHead + 13) & 0x800000) != 0 )
      {
        if ( v27 >= v33 )
          goto LABEL_69;
        v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5303, ASSERT_TYPE_ASSERT, "( distCurTailToUnmap ) >= ( distCurTailToNextTail )", "%s >= %s\n\t%llx, %llx", "distCurTailToUnmap", "distCurTailToNextTail", v27, v33);
      }
      else
      {
        if ( v27 < v33 )
          goto LABEL_69;
        v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5308, ASSERT_TYPE_ASSERT, "( distCurTailToUnmap ) < ( distCurTailToNextTail )", "%s < %s\n\t%llx, %llx", "distCurTailToUnmap", "distCurTailToNextTail", v27, v33);
      }
      if ( v34 )
        __debugbreak();
LABEL_69:
      *((_DWORD *)mHead->node + 4) ^= (*((_DWORD *)mHead->node + 4) ^ (((*((_DWORD *)mHead->node + 4) >> 22) - 1) << 22)) & 0xC00000;
      if ( (*((_DWORD *)mHead->node + 1) & 3) == 2 )
      {
        StreamKeyAtIndex = DB_GetStreamKeyAtIndex((*((_DWORD *)mHead->node + 1) >> 2) & 0x3FFFF);
        StreamKey_UserUnmapOldAddressBackend(StreamKeyAtIndex);
      }
      StreamDefrag::TrackDecommitParts(this, mHead, *((unsigned int *)mHead + 11), *((_DWORD *)mHead + 13) >> 28);
      if ( (*((_DWORD *)mHead + 13) & 0x3800) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1921, ASSERT_TYPE_ASSERT, "(command->vaReservedPartCountUnmap > 0)", (const char *)&queryFormat, "command->vaReservedPartCountUnmap > 0") )
        __debugbreak();
      Stream_Defrag_CheckLocks(v37, v36);
      StreamDefragRegion<1>::DecreaseVASizeUsedForUnmapCommand((StreamDefragRegion<1> *)(v10 + 3297288), mHead);
      if ( !*((_DWORD *)v10 + 824346) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2003, ASSERT_TYPE_ASSERT, "(mDefragInFlightNodeCount > 0)", (const char *)&queryFormat, "mDefragInFlightNodeCount > 0") )
        __debugbreak();
      --*((_DWORD *)v10 + 824346);
      if ( !mHead->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4627, ASSERT_TYPE_ASSERT, "(command->node)", (const char *)&queryFormat, "command->node") )
        __debugbreak();
      Stream_Defrag_CheckLocks(v39, v38);
      v40 = DCONST_DVARBOOL_stream_defragAsyncMapping;
      if ( !DCONST_DVARBOOL_stream_defragAsyncMapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragAsyncMapping") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v40);
      if ( v40->current.enabled && Stream_IsEnabled() && !Stream_BackendQueue_IsInForcedFlush() && streamFrontendGlob->levelInit.state == 4 )
      {
        v41 = 3356112i64;
      }
      else
      {
        StreamDefrag::DecommitParts(this, mHead, *((unsigned int *)mHead + 11), *((_DWORD *)mHead + 13) >> 28, &unmappedPages);
        v41 = 3298704i64;
      }
      RStackThreadSafe<StreamDefragCommand>::Push((RStackThreadSafe<StreamDefragCommand> *)((char *)this + v41), mHead);
      v2 = data;
    }
  }
}

/*
==============
StreamDefrag::FastForwardDefragSteps
==============
*/
void StreamDefrag::FastForwardDefragSteps(StreamDefrag *this, StreamDefragStep step, StreamDefragCommand *removedCmd, StreamDefragAllocNode *node, StreamerMemPageCounts *unmappedPages)
{
  int v9; 
  unsigned int v10; 
  const StreamKey *StreamKeyAtIndex; 
  Stream_Logger_Item *v12; 
  unsigned int unmappedPageCount; 
  __int64 v14; 
  StreamerMemPageCounts *v15; 
  __int64 v16; 
  unsigned int size; 
  const unsigned __int8 *v18; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 

  if ( !removedCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3467, ASSERT_TYPE_ASSERT, "(removedCmd)", (const char *)&queryFormat, "removedCmd") )
    __debugbreak();
  if ( (*((_DWORD *)removedCmd + 13) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3468, ASSERT_TYPE_ASSERT, "(removedCmd->next == 0)", (const char *)&queryFormat, "removedCmd->next == 0") )
    __debugbreak();
  if ( removedCmd->node != node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3469, ASSERT_TYPE_ASSERT, "(removedCmd->node == node)", (const char *)&queryFormat, "removedCmd->node == node") )
    __debugbreak();
  if ( (*(_DWORD *)node & 0x200000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3470, ASSERT_TYPE_ASSERT, "(node->moveable)", (const char *)&queryFormat, "node->moveable") )
    __debugbreak();
  if ( !NodeIsValid(node) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3471, ASSERT_TYPE_ASSERT, "(NodeIsValid( node ))", (const char *)&queryFormat, "NodeIsValid( node )") )
    __debugbreak();
  if ( (*((_DWORD *)node + 4) & 0xC00000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3472, ASSERT_TYPE_ASSERT, "(node->defragRefCount > 0)", (const char *)&queryFormat, "node->defragRefCount > 0") )
    __debugbreak();
  v9 = *(_DWORD *)node;
  v10 = (*(_DWORD *)node >> 19) & 1;
  *((_DWORD *)node + 2) = *((_DWORD *)node + 3);
  if ( (unsigned int)step <= DODGE )
    *(_DWORD *)node = v9 & 0xFFBFFFFF;
  if ( (*((_DWORD *)node + 4) & 0xC00000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3485, ASSERT_TYPE_ASSERT, "(node->defragRefCount > 0)", (const char *)&queryFormat, "node->defragRefCount > 0") )
    __debugbreak();
  *((_DWORD *)node + 4) ^= (*((_DWORD *)node + 4) ^ (((*((_DWORD *)node + 4) >> 22) - 1) << 22)) & 0xC00000;
  if ( step == COUNT && (*((_DWORD *)node + 1) & 3) == 2 )
  {
    StreamKeyAtIndex = DB_GetStreamKeyAtIndex((*((_DWORD *)node + 1) >> 2) & 0x3FFFF);
    StreamKey_UserUnmapOldAddressBackend(StreamKeyAtIndex);
  }
  StreamDefrag::TrackDecommitParts(this, removedCmd, *((unsigned int *)removedCmd + 11), *((_DWORD *)removedCmd + 13) >> 28);
  StreamDefragRegion<1>::OnUnmapOldAddress(&this->mAddressSpaces[(unsigned __int64)v10].mMoveableRegion, removedCmd, 1);
  if ( !this->mAddressSpaces[(unsigned __int64)v10].mMoveableRegion.mDefragInFlightNodeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2003, ASSERT_TYPE_ASSERT, "(mDefragInFlightNodeCount > 0)", (const char *)&queryFormat, "mDefragInFlightNodeCount > 0") )
    __debugbreak();
  --this->mAddressSpaces[(unsigned __int64)v10].mMoveableRegion.mDefragInFlightNodeCount;
  if ( (unsigned int)step <= DODGE )
  {
    if ( !this->mAddressSpaces[(unsigned __int64)v10].mMoveableRegion.mDefragInFlightCopyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2010, ASSERT_TYPE_ASSERT, "(mDefragInFlightCopyCount > 0)", (const char *)&queryFormat, "mDefragInFlightCopyCount > 0") )
      __debugbreak();
    --this->mAddressSpaces[(unsigned __int64)v10].mMoveableRegion.mDefragInFlightCopyCount;
  }
  v12 = Stream_Logger_MakeItem(&result, node);
  unmappedPageCount = 0;
  v14 = 2i64;
  v15 = unmappedPages;
  v16 = 0i64;
  item = *v12;
  if ( unmappedPages > &unmappedPages[1] )
    v14 = 0i64;
  if ( unmappedPages <= &unmappedPages[1] )
  {
    do
    {
      unmappedPageCount += v15->pages[0];
      v15 = (StreamerMemPageCounts *)((char *)v15 + 4);
      ++v16;
    }
    while ( v16 != v14 );
  }
  size = removedCmd->partSize[0] + removedCmd->partSize[1] + removedCmd->partSize[2] + removedCmd->partSize[3];
  v18 = StrmOffsetToAddress((StreamMemPool)v10, *((unsigned int *)removedCmd + 11));
  Stream_Logger_OnFreeHandleRemoveDefragStep("StreamDefrag::FastForwardDefragSteps", NULL, &item, step, v18, size, unmappedPageCount);
  StreamDefrag::DecommitParts(this, removedCmd, *((unsigned int *)removedCmd + 11), *((_DWORD *)removedCmd + 13) >> 28, unmappedPages);
  RStackThreadSafe<StreamDefragCommand>::Push(&this->mDefragPool, removedCmd);
}

/*
==============
StreamDefrag::FlagSkippedNonTailVAResizeMoves
==============
*/
void StreamDefrag::FlagSkippedNonTailVAResizeMoves(StreamDefrag *this, StreamMemPool pool, unsigned __int64 currentTailAddress, unsigned __int64 newTailAddress, unsigned int unmapFrame)
{
  StreamDefrag::AddressSpace *v6; 
  __int64 v7; 
  RSList<StreamDefragCommand> *mDefragSteps; 
  StreamDefragCommand *mHead; 
  unsigned __int64 *v10; 
  StreamDefragRegion<1> *v11; 
  StreamDefragRegion<1> *v12; 
  unsigned __int64 *v13; 
  int v14; 
  const StreamDefragAllocNode *node; 
  __int64 MaxVaSize; 
  __int64 VaSizeForParts; 
  unsigned __int8 *v18; 
  unsigned __int64 v19; 
  RSList<StreamDefragCommand> *v20; 
  __int64 v21; 
  __int64 v22; 
  StreamDefrag::AddressSpace *v23; 
  __m256i v24; 
  __int128 v25; 
  StreamDefragRegion<1> *v26[4]; 
  __int128 v27; 
  StreamMemPool v28; 
  unsigned __int64 v29; 
  unsigned __int64 v30; 

  v30 = newTailAddress;
  v29 = currentTailAddress;
  v28 = pool;
  if ( !unmapFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2562, ASSERT_TYPE_ASSERT, "(unmapFrame > 0)", (const char *)&queryFormat, "unmapFrame > 0") )
    __debugbreak();
  if ( v28 == DODGE )
  {
    v6 = &this->mAddressSpaces[1];
    v7 = 3i64;
    mDefragSteps = this->mDefragSteps;
    v20 = this->mDefragSteps;
    v22 = 1i64;
    v23 = &this->mAddressSpaces[1];
    v21 = 3i64;
    do
    {
      mHead = mDefragSteps->mHead;
      v24.m256i_i64[0] = (__int64)&v22;
      v24.m256i_i64[1] = (__int64)&unmapFrame;
      v24.m256i_i64[2] = (__int64)&v28;
      *(_QWORD *)&v25 = &v29;
      *((_QWORD *)&v25 + 1) = &v30;
      v24.m256i_i64[3] = (__int64)v6;
      v27 = v25;
      *(__m256i *)v26 = v24;
      if ( mHead )
      {
        v10 = (unsigned __int64 *)v27;
        v11 = v26[1];
        v12 = v26[0];
        v13 = (unsigned __int64 *)*((_QWORD *)&v27 + 1);
        do
        {
          if ( v12->mAllocations.mHead == (StreamDefragAllocNode *)((*(_DWORD *)mHead->node >> 19) & 1) )
          {
            v14 = *((_DWORD *)mHead + 13);
            if ( (v14 & 0x800000) != 0 && LODWORD(v11->mAllocations.mHead) == mHead->unmapFrame )
            {
              if ( (v14 & 0x400000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2580, ASSERT_TYPE_ASSERT, "(command->isForVaResize)", (const char *)&queryFormat, "command->isForVaResize") )
                __debugbreak();
              node = mHead->node;
              MaxVaSize = NodeGetMaxVaSize(mHead->node);
              VaSizeForParts = NodeGetVaSizeForParts(node, (*((_DWORD *)mHead + 13) >> 11) & 7);
              v18 = StrmOffsetToAddress((StreamMemPool)v26[2]->mAllocations.mHead, *((unsigned int *)mHead + 11));
              v19 = StreamDefragRegion<1>::CircularAddressDistance(v26[3], *v10, (unsigned __int64)&v18[MaxVaSize - VaSizeForParts]);
              if ( v19 <= StreamDefragRegion<1>::CircularAddressDistance(v26[3], *v10, *v13) )
                *((_DWORD *)mHead + 13) &= ~0x800000u;
            }
          }
          if ( !(*((_DWORD *)mHead + 13) << 21) )
            break;
          mHead += (__int64)(int)(*((_DWORD *)mHead + 13) << 21) >> 21;
        }
        while ( mHead );
        mDefragSteps = v20;
        v7 = v21;
        v6 = v23;
      }
      ++mDefragSteps;
      --v7;
      v20 = mDefragSteps;
      v21 = v7;
    }
    while ( v7 );
  }
}

/*
==============
StreamDefrag::FlushAsyncCPUMemCpy
==============
*/
void StreamDefrag::FlushAsyncCPUMemCpy(StreamDefrag *this, StreamDefrag::FlushAsyncType type, bool fastForward)
{
  StreamDefrag::FlushAsyncType v4; 
  StreamDefrag *v5; 
  unsigned __int64 v6; 
  RStackThreadSafe<StreamDefragCommand> *p_mAsyncCPUMemCopies; 
  signed __int64 mHead; 
  signed __int64 v9; 
  signed __int64 *p_mDefragPool; 
  signed __int64 v11; 
  __int64 v12; 
  int v13; 
  const char *v14; 
  __int64 data[11]; 
  unsigned __int64 v18; 

  data[1] = -2i64;
  v4 = type;
  v5 = this;
  Sys_ProfBeginNamedEvent(0xFF808080, "StreamDefrag::FlushAsyncCPUMemCpy");
  if ( v4 )
  {
    if ( v4 != FromWorker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4119, ASSERT_TYPE_ASSERT, "(type == FlushAsyncType::FromWorker)", (const char *)&queryFormat, "type == FlushAsyncType::FromWorker") )
      __debugbreak();
  }
  else
  {
    if ( fastForward && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4110, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4112, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
      __debugbreak();
    v5->mAsyncCPUMemCpyProcess = 0;
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_STREAM_DEFRAG_FLUSH_CPU_MEMCPY);
  }
  v6 = 0i64;
  p_mAsyncCPUMemCopies = &v5->mAsyncCPUMemCopies;
  while ( 1 )
  {
    mHead = (signed __int64)p_mAsyncCPUMemCopies->mHead;
    if ( !p_mAsyncCPUMemCopies->mHead )
      break;
    while ( 1 )
    {
      if ( *(_DWORD *)(mHead + 52) << 21 )
        v9 = mHead + 56 * ((__int64)(int)(*(_DWORD *)(mHead + 52) << 21) >> 21);
      else
        v9 = 0i64;
      if ( ((unsigned __int8)p_mAsyncCPUMemCopies & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 128, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int64 ) ) ) )", "( target ) = %p", p_mAsyncCPUMemCopies) )
        __debugbreak();
      if ( mHead == _InterlockedCompareExchange64((volatile signed __int64 *)p_mAsyncCPUMemCopies, v9, mHead) )
        break;
      mHead = (signed __int64)p_mAsyncCPUMemCopies->mHead;
      if ( !p_mAsyncCPUMemCopies->mHead )
        goto LABEL_38;
    }
    *(_DWORD *)(mHead + 52) &= 0xFFFFF800;
    v18 = Stream_Defrag_MemCpy(CPUMemCpy, NULL, (StreamDefragCommand *)mHead) + v6;
    p_mDefragPool = (signed __int64 *)&v5->mDefragPool;
    if ( (*(_DWORD *)(mHead + 52) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 719, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
      __debugbreak();
    do
    {
      v11 = *p_mDefragPool;
      if ( *p_mDefragPool )
      {
        v12 = (v11 - mHead) / 56;
        *(_DWORD *)(mHead + 52) ^= ((unsigned __int16)v12 ^ (unsigned __int16)*(_DWORD *)(mHead + 52)) & 0x7FF;
        v13 = *(_DWORD *)(mHead + 52) << 21;
        if ( (__int64)v13 >> 21 != v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 728, ASSERT_TYPE_ASSERT, "( node->next ) == ( curHead - node )", "%s == %s\n\t%lli, %lli", "node->next", "curHead - node", (__int64)v13 >> 21, (v11 - mHead) / 56) )
          __debugbreak();
      }
      else
      {
        *(_DWORD *)(mHead + 52) &= 0xFFFFF800;
      }
      if ( (((_BYTE)v5 - 112) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 128, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int64 ) ) ) )", "( target ) = %p", p_mDefragPool) )
        __debugbreak();
    }
    while ( v11 != _InterlockedCompareExchange64(p_mDefragPool, mHead, v11) );
    v5 = this;
    p_mAsyncCPUMemCopies = &this->mAsyncCPUMemCopies;
    v6 = v18;
    v4 = type;
    if ( type )
    {
      if ( v18 >= 0x400000 )
        break;
    }
  }
LABEL_38:
  v14 = j_va("bytes copied: %zu", v6);
  Sys_ProfSetMarker(0xFF44CCFF, v14);
  if ( v4 )
  {
    if ( v5->mAsyncCPUMemCpyProcess && p_mAsyncCPUMemCopies->mHead )
    {
      data[0] = (__int64)v5;
      Sys_AddWorkerCmd(WRKCMD_STREAM_DEFRAG_FLUSH_CPU_MEMCPY, data);
    }
  }
  else
  {
    v5->mAsyncCPUMemCpyProcess = 1;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
StreamDefrag::FlushAsyncVA
==============
*/
void StreamDefrag::FlushAsyncVA(StreamDefrag *this, StreamDefrag::FlushAsyncType type, StreamDefrag::FlushAsyncVAOp op, bool fastForward)
{
  StreamDefrag::FlushAsyncVAOp v5; 
  StreamDefrag *v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  RStackThreadSafe<StreamDefragCommand> *p_mAsyncVAMaps; 
  signed __int64 mHead; 
  signed __int64 v16; 
  const char *v17; 
  volatile signed __int64 *p_mAsyncVAUnmaps; 
  signed __int64 v19; 
  signed __int64 v20; 
  signed __int64 *p_mDefragPool; 
  signed __int64 v22; 
  __int64 v23; 
  int v24; 
  unsigned __int64 v25; 
  const char *v26; 
  unsigned int v27; 
  unsigned int v29; 
  unsigned __int64 v30; 
  __int64 data[2]; 
  StreamerMemPageCounts unmappedPages; 

  data[1] = -2i64;
  v5 = op;
  v7 = this;
  Sys_ProfBeginNamedEvent(0xFF808080, "StreamDefrag::FlushAsyncVA");
  if ( type )
  {
    if ( type != FromWorker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4015, ASSERT_TYPE_ASSERT, "(type == FlushAsyncType::FromWorker)", (const char *)&queryFormat, "type == FlushAsyncType::FromWorker") )
      __debugbreak();
  }
  else
  {
    if ( fastForward )
    {
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4002, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4003, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
        __debugbreak();
    }
    else
    {
      Stream_Defrag_CheckLocks(v9, v8);
    }
    v7->mAsyncVAProcess = 0;
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_STREAM_DEFRAG_FLUSH_VA);
  }
  v10 = 16;
  if ( type == Block )
    v10 = -1;
  v27 = v10;
  v11 = 0;
  v29 = 0;
  v12 = 0i64;
  v30 = 0i64;
  v13 = 0i64;
  if ( (v5 & 0xFFFFFFFD) == 0 )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "Maps");
    p_mAsyncVAMaps = &v7->mAsyncVAMaps;
    while ( 1 )
    {
      mHead = (signed __int64)p_mAsyncVAMaps->mHead;
      if ( !p_mAsyncVAMaps->mHead )
        break;
      while ( 1 )
      {
        if ( *(_DWORD *)(mHead + 52) << 21 )
          v16 = mHead + 56 * ((__int64)(int)(*(_DWORD *)(mHead + 52) << 21) >> 21);
        else
          v16 = 0i64;
        if ( ((unsigned __int8)p_mAsyncVAMaps & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 128, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int64 ) ) ) )", "( target ) = %p", p_mAsyncVAMaps) )
          __debugbreak();
        if ( mHead == _InterlockedCompareExchange64((volatile signed __int64 *)p_mAsyncVAMaps, v16, mHead) )
          break;
        mHead = (signed __int64)p_mAsyncVAMaps->mHead;
        if ( !p_mAsyncVAMaps->mHead )
          goto LABEL_27;
      }
      *(_DWORD *)(mHead + 52) &= 0xFFFFF800;
      v30 = StreamDefrag::Map(v7, (StreamDefragCommand *)mHead) + v12;
      p_mDefragPool = (signed __int64 *)&v7->mDefragPool;
      if ( (*(_DWORD *)(mHead + 52) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 719, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
        __debugbreak();
      do
      {
        v22 = *p_mDefragPool;
        if ( *p_mDefragPool )
        {
          v23 = (v22 - mHead) / 56;
          *(_DWORD *)(mHead + 52) ^= ((unsigned __int16)v23 ^ (unsigned __int16)*(_DWORD *)(mHead + 52)) & 0x7FF;
          v24 = *(_DWORD *)(mHead + 52) << 21;
          if ( (__int64)v24 >> 21 != v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 728, ASSERT_TYPE_ASSERT, "( node->next ) == ( curHead - node )", "%s == %s\n\t%lli, %lli", "node->next", "curHead - node", (__int64)v24 >> 21, (v22 - mHead) / 56) )
            __debugbreak();
        }
        else
        {
          *(_DWORD *)(mHead + 52) &= 0xFFFFF800;
        }
        if ( (((_BYTE)v7 - 112) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 128, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int64 ) ) ) )", "( target ) = %p", p_mDefragPool) )
          __debugbreak();
      }
      while ( v22 != _InterlockedCompareExchange64(p_mDefragPool, mHead, v22) );
      v7 = this;
      p_mAsyncVAMaps = &this->mAsyncVAMaps;
      v11 = v29;
      v12 = v30;
      if ( type )
      {
        if ( v30 >= 0x800000 )
          break;
      }
      v11 = v29 + 1;
      v29 = v11;
      v10 = v27;
      if ( v11 >= v27 )
        goto LABEL_28;
    }
LABEL_27:
    v10 = v27;
LABEL_28:
    v17 = j_va("bytes mapped: %zu", v12);
    Sys_ProfSetMarker(0xFF44CCFF, v17);
    Sys_ProfEndNamedEvent();
    v5 = op;
    v13 = 0i64;
  }
  if ( (unsigned int)(v5 - 1) <= 1 )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "Unmaps");
    unmappedPages = 0i64;
    if ( v11 < v10 )
    {
      p_mAsyncVAUnmaps = (volatile signed __int64 *)&v7->mAsyncVAUnmaps;
      do
      {
        v19 = *p_mAsyncVAUnmaps;
        if ( !*p_mAsyncVAUnmaps )
          break;
        while ( 1 )
        {
          if ( *(_DWORD *)(v19 + 52) << 21 )
            v20 = v19 + 56 * ((__int64)(int)(*(_DWORD *)(v19 + 52) << 21) >> 21);
          else
            v20 = 0i64;
          if ( (((_BYTE)v7 - 48) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 128, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int64 ) ) ) )", "( target ) = %p", &v7->mAsyncVAUnmaps) )
            __debugbreak();
          if ( v19 == _InterlockedCompareExchange64(p_mAsyncVAUnmaps, v20, v19) )
            break;
          v19 = *p_mAsyncVAUnmaps;
          if ( !*p_mAsyncVAUnmaps )
            goto LABEL_61;
        }
        *(_DWORD *)(v19 + 52) &= 0xFFFFF800;
        v25 = StreamDefrag::DecommitParts(v7, (const StreamDefragCommand *)v19, *(unsigned int *)(v19 + 44), *(_DWORD *)(v19 + 52) >> 28, &unmappedPages);
        RStackThreadSafe<StreamDefragCommand>::Push(&v7->mDefragPool, (StreamDefragCommand *)v19);
        v13 += v25;
        if ( type )
        {
          if ( v13 >= 0x800000 )
            break;
        }
        ++v11;
      }
      while ( v11 < v27 );
LABEL_61:
      v12 = v30;
    }
    StreamDefrag::AddPagesToDefragPageSurplus(v7, &unmappedPages);
    v26 = j_va("bytes unmapped: %zu", v13);
    Sys_ProfSetMarker(0xFF44CCFF, v26);
    Sys_ProfEndNamedEvent();
  }
  if ( v13 + v12 )
    Mem_Paged_BatchFlush();
  if ( type )
  {
    if ( v7->mAsyncVAProcess && (v7->mAsyncVAMaps.mHead || v7->mAsyncVAUnmaps.mHead) )
    {
      data[0] = (__int64)v7;
      Sys_AddWorkerCmd(WRKCMD_STREAM_DEFRAG_FLUSH_VA, data);
    }
  }
  else
  {
    v7->mAsyncVAProcess = 1;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
StreamDefrag::FreeHandle
==============
*/
void StreamDefrag::FreeHandle(StreamDefrag *this, streamer_handle_t *handle)
{
  streamer_handle_t *v2; 
  unsigned int *data; 
  unsigned int v6; 
  bool v7; 
  bool IsPrimingMesh; 
  bool v9; 
  StreamDefragCommand *v10; 
  StreamDefragCommand *mHead; 
  StreamDefragCommand *v12; 
  int v13; 
  unsigned int v14; 
  StreamDefragCommand *v15; 
  StreamDefragCommand *v16; 
  StreamDefragCommand *v17; 
  int v18; 
  unsigned int v19; 
  __int64 v20; 
  StreamDefragCommand *v21; 
  StreamDefragCommand *v22; 
  bool v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  Stream_Logger_Item *p_item; 
  unsigned int v28; 
  __int64 v29; 
  unsigned __int8 *v30; 
  __int64 v31; 
  signed int i; 
  const unsigned __int8 *v33; 
  __int64 v34; 
  const unsigned __int8 *v35; 
  __int64 v36; 
  StreamDefragRegion<1> *v37; 
  unsigned __int64 v38; 
  unsigned __int64 mVaSizeCommitted; 
  unsigned __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  unsigned int outPartOffset; 
  unsigned int outPartSize; 
  streamer_handle_t *v45; 
  __int64 v46; 
  ScopedCriticalSection v47; 
  Stream_Logger_Item result; 
  Stream_Logger_Item item; 

  v46 = -2i64;
  v2 = handle;
  v45 = handle;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3513, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3514, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3516, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  if ( Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3517, ASSERT_TYPE_ASSERT, "(!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v47, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  if ( Stream_IsEnabled() && !Stream_BackendQueue_IsInForcedFlush() && streamFrontendGlob->levelInit.state == 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3524, ASSERT_TYPE_ASSERT, "(IsIdle())", (const char *)&queryFormat, "IsIdle()") )
    __debugbreak();
  data = (unsigned int *)v2->data;
  if ( v2->data < (unsigned __int64)this || data >= (unsigned int *)this->mAddressSpaces )
    data = NULL;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3528, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !NodeIsValid((const StreamDefragAllocNode *)data) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3529, ASSERT_TYPE_ASSERT, "(NodeIsValid( node ))", (const char *)&queryFormat, "NodeIsValid( node )") )
    __debugbreak();
  v6 = data[1];
  if ( (v6 & 3) != 0 )
  {
    if ( (data[1] & 3) == 1 )
    {
      IsPrimingMesh = Stream_Primer_IsPrimingMesh((v6 >> 2) & 0x3FFFF);
    }
    else
    {
      if ( (data[1] & 3) != 2 )
      {
        v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 379, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code");
        goto LABEL_39;
      }
      IsPrimingMesh = Stream_Primer_IsPrimingGeneric((v6 >> 2) & 0x3FFFF);
    }
  }
  else
  {
    IsPrimingMesh = Stream_Primer_IsPrimingImageIndex((v6 >> 2) & 0x3FFFF);
  }
  if ( !IsPrimingMesh )
    goto LABEL_41;
  v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3531, ASSERT_TYPE_ASSERT, "(!Stream_Defrag_IsPriming( node ))", (const char *)&queryFormat, "!Stream_Defrag_IsPriming( node )");
LABEL_39:
  if ( v7 )
    __debugbreak();
LABEL_41:
  item = *Stream_Logger_MakeItem(&result, (const StreamDefragAllocNode *)data);
  Stream_Logger_OnFreeHandle("StreamDefrag::FreeHandle", NULL, &item);
  StreamDefrag::FlushAsyncVA(this, Block, MapsOnly, 1);
  StreamDefrag::FlushAsyncCPUMemCpy(this, Block, 1);
  StreamDefrag::FlushAsyncVA(this, Block, UnmapsOnly, 1);
  if ( (*data & 0x200000) == 0 )
  {
LABEL_115:
    v9 = (data[4] & 0xC00000) == 0;
    goto LABEL_116;
  }
  v9 = (data[4] & 0xC00000) == 0;
  if ( (data[4] & 0xC00000) != 0 )
  {
    item.m_image = NULL;
    v10 = RSList_StreamDefragCommand_::RemoveIf__lambda_71dc78e730b781b2248561fd54876aa7___((StreamDefrag::FreeHandle::__l64::<lambda_71dc78e730b781b2248561fd54876aa7>)this->mDefragSteps);
    if ( v10 )
    {
      mHead = this->mDefragSteps[0].mHead;
      v12 = NULL;
      if ( mHead )
      {
        while ( 1 )
        {
          v13 = (int)(*((_DWORD *)mHead + 13) << 21) >> 21;
          if ( (unsigned int *)mHead->node == data )
            break;
          if ( v13 )
          {
            v12 = mHead;
            mHead += v13;
            if ( mHead )
              continue;
          }
          goto LABEL_54;
        }
        RSList<StreamDefragCommand>::RemoveNode(this->mDefragSteps, mHead, v12);
        if ( (*((_DWORD *)mHead + 13) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 239, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3561, ASSERT_TYPE_ASSERT, "(DefragStepCommands( StreamDefragStep::COPY ).RemoveIf( isNodeToBeFreed ) == nullptr)", (const char *)&queryFormat, "DefragStepCommands( StreamDefragStep::COPY ).RemoveIf( isNodeToBeFreed ) == nullptr") )
          __debugbreak();
      }
LABEL_54:
      if ( (*((_DWORD *)v10 + 13) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3562, ASSERT_TYPE_ASSERT, "(removedCmd->next == 0)", (const char *)&queryFormat, "removedCmd->next == 0") )
        __debugbreak();
      if ( data[2] == data[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3566, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead != node->vAddrOffsetWrite)", (const char *)&queryFormat, "node->vAddrOffsetRead != node->vAddrOffsetWrite") )
        __debugbreak();
      if ( *((_DWORD *)v10 + 11) != data[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3567, ASSERT_TYPE_ASSERT, "(removedCmd->vAddrOffsetUnmap == node->vAddrOffsetRead)", (const char *)&queryFormat, "removedCmd->vAddrOffsetUnmap == node->vAddrOffsetRead") )
        __debugbreak();
      v14 = 32 - __lzcnt(*((_BYTE *)v10 + 55) & 0xF);
      if ( v14 > ((data[1] >> 20) & 7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3568, ASSERT_TYPE_ASSERT, "( GetHighestSetPartCount( removedCmd->copyParts ) ) <= ( node->vaReservedPartCount )", "%s <= %s\n\t%u, %u", "GetHighestSetPartCount( removedCmd->copyParts )", "node->vaReservedPartCount", v14, (data[1] >> 20) & 7) )
        __debugbreak();
      StreamDefrag::FastForwardDefragSteps(this, MOVEMENT, v10, (StreamDefragAllocNode *)data, (StreamerMemPageCounts *)&item);
    }
    v15 = RSList_StreamDefragCommand_::RemoveIf__lambda_71dc78e730b781b2248561fd54876aa7___((StreamDefrag::FreeHandle::__l64::<lambda_71dc78e730b781b2248561fd54876aa7>)&this->mDefragSteps[1]);
    if ( v15 )
    {
      v16 = this->mDefragSteps[1].mHead;
      v17 = NULL;
      if ( v16 )
      {
        while ( 1 )
        {
          v18 = (int)(*((_DWORD *)v16 + 13) << 21) >> 21;
          if ( (unsigned int *)v16->node == data )
            break;
          if ( v18 )
          {
            v17 = v16;
            v16 += v18;
            if ( v16 )
              continue;
          }
          goto LABEL_78;
        }
        RSList<StreamDefragCommand>::RemoveNode(&this->mDefragSteps[1], v16, v17);
        if ( (*((_DWORD *)v16 + 13) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 239, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3579, ASSERT_TYPE_ASSERT, "(DefragStepCommands( StreamDefragStep::PTR_FIXUP ).RemoveIf( isNodeToBeFreed ) == nullptr)", (const char *)&queryFormat, "DefragStepCommands( StreamDefragStep::PTR_FIXUP ).RemoveIf( isNodeToBeFreed ) == nullptr") )
          __debugbreak();
      }
LABEL_78:
      if ( (*((_DWORD *)v15 + 13) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3580, ASSERT_TYPE_ASSERT, "(removedCmd->next == 0)", (const char *)&queryFormat, "removedCmd->next == 0") )
        __debugbreak();
      if ( data[2] == data[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3586, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead != node->vAddrOffsetWrite)", (const char *)&queryFormat, "node->vAddrOffsetRead != node->vAddrOffsetWrite") )
        __debugbreak();
      if ( *((_DWORD *)v15 + 11) != data[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3587, ASSERT_TYPE_ASSERT, "(removedCmd->vAddrOffsetUnmap == node->vAddrOffsetRead)", (const char *)&queryFormat, "removedCmd->vAddrOffsetUnmap == node->vAddrOffsetRead") )
        __debugbreak();
      v19 = 32 - __lzcnt(*((_BYTE *)v15 + 55) & 0xF);
      if ( v19 > ((data[1] >> 20) & 7) )
      {
        LODWORD(v42) = (data[1] >> 20) & 7;
        LODWORD(v41) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3588, ASSERT_TYPE_ASSERT, "( GetHighestSetPartCount( removedCmd->copyParts ) ) <= ( node->vaReservedPartCount )", "%s <= %s\n\t%u, %u", "GetHighestSetPartCount( removedCmd->copyParts )", "node->vaReservedPartCount", v41, v42) )
          __debugbreak();
      }
      StreamDefrag::FastForwardDefragSteps(this, DODGE, v15, (StreamDefragAllocNode *)data, (StreamerMemPageCounts *)&item);
    }
    v20 = 2i64;
LABEL_92:
    v21 = this->mDefragSteps[2].mHead;
    v22 = NULL;
    v23 = v21 == NULL;
    while ( !v23 )
    {
      v24 = (int)(*((_DWORD *)v21 + 13) << 21) >> 21;
      if ( (unsigned int *)v21->node == data )
      {
        RSList<StreamDefragCommand>::RemoveNode(&this->mDefragSteps[2], v21, v22);
        if ( (*((_DWORD *)v21 + 13) & 0x7FF) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 239, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
            __debugbreak();
          if ( (*((_DWORD *)v21 + 13) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3604, ASSERT_TYPE_ASSERT, "(removedCmd->next == 0)", (const char *)&queryFormat, "removedCmd->next == 0") )
            __debugbreak();
        }
        if ( data[3] != data[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3605, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetWrite == node->vAddrOffsetRead)", (const char *)&queryFormat, "node->vAddrOffsetWrite == node->vAddrOffsetRead") )
          __debugbreak();
        if ( *((_DWORD *)v21 + 11) == data[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3606, ASSERT_TYPE_ASSERT, "(removedCmd->vAddrOffsetUnmap != node->vAddrOffsetWrite)", (const char *)&queryFormat, "removedCmd->vAddrOffsetUnmap != node->vAddrOffsetWrite") )
          __debugbreak();
        StreamDefrag::FastForwardDefragSteps(this, COUNT, v21, (StreamDefragAllocNode *)data, (StreamerMemPageCounts *)&item);
        goto LABEL_92;
      }
      if ( !v24 )
        break;
      v22 = v21;
      v25 = v24;
      v23 = &v21[v25] == NULL;
      v21 = (StreamDefragCommand *)((char *)v21 + v25 * 56);
    }
    v26 = 0;
    p_item = &item;
    v2 = v45;
    do
    {
      v26 += LODWORD(p_item->m_image);
      p_item = (Stream_Logger_Item *)((char *)p_item + 4);
      --v20;
    }
    while ( v20 );
    if ( v26 )
      Mem_Paged_BatchFlush();
    StreamDefrag::AddPagesToDefragPageSurplus(this, (const StreamerMemPageCounts *)&item);
    goto LABEL_115;
  }
LABEL_116:
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3623, ASSERT_TYPE_ASSERT, "(node->defragRefCount == 0)", (const char *)&queryFormat, "node->defragRefCount == 0") )
    __debugbreak();
  v28 = *data;
  v29 = (*data >> 19) & 1;
  if ( (*data & 0x7800000) != 0 )
  {
    v30 = StrmOffsetToAddress((StreamMemPool)v29, data[3]);
    v31 = 8i64;
    for ( i = 3; i >= 0; --i )
    {
      if ( ((unsigned __int8)v31 & (unsigned __int8)((unsigned __int64)*data >> 23) & 0xF) != 0 )
      {
        NodeGetPartSizeAndOffset((const StreamDefragAllocNode *)data, i, &outPartSize, &outPartOffset);
        v33 = &v30[outPartOffset];
        v34 = outPartSize;
        v35 = &v33[outPartSize];
        v36 = v29 << 8;
        if ( (*data & 0x200000) != 0 )
        {
          v37 = (StreamDefragRegion<1> *)((char *)&this->mAddressSpaces[0].mMoveableRegion + v36);
          StreamDefragRegion<1>::AssertValidAddressRange(v37, v33, v35);
        }
        else
        {
          v37 = (StreamDefragRegion<1> *)((char *)&this->mAddressSpaces[0].mFixedRegion + v36);
          StreamDefragRegion<0>::AssertValidAddressRange((StreamDefragRegion<0> *)v37, v33, v35);
        }
        v38 = truncate_cast<unsigned __int64,__int64>(v34);
        mVaSizeCommitted = v37->mVaSizeCommitted;
        if ( mVaSizeCommitted < v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2115, ASSERT_TYPE_ASSERT, "( mVaSizeCommitted ) >= ( size )", "%s >= %s\n\t%zu, %zu", "mVaSizeCommitted", "size", mVaSizeCommitted, v38) )
          __debugbreak();
        v37->mVaSizeCommitted -= v38;
        v40 = v37->mVaSizeCommitted;
        if ( v40 > v37->mVaSizeUsed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2117, ASSERT_TYPE_ASSERT, "( mVaSizeCommitted ) <= ( mVaSizeUsed )", "%s <= %s\n\t%zu, %zu", "mVaSizeCommitted", "mVaSizeUsed", v40, v37->mVaSizeUsed) )
          __debugbreak();
      }
      v31 = __ROR8__(v31, 1);
    }
    v28 = *data;
    v2 = v45;
  }
  if ( (v28 & 0x200000) != 0 )
  {
    StreamDefrag::UpdateNewTailAddressBeforeMove(this, (StreamDefragAllocNode *)data);
    StreamDefragRegion<1>::InvalidateNode(&this->mAddressSpaces[v29].mMoveableRegion, (StreamDefragAllocNode *)data);
  }
  else
  {
    StreamDefragRegion<0>::InvalidateNode(&this->mAddressSpaces[v29].mFixedRegion, (StreamDefragAllocNode *)data);
  }
  v2->data = 0i64;
  ScopedCriticalSection::~ScopedCriticalSection(&v47);
}

/*
==============
StreamDefrag::GPUFaultProtection
==============
*/
void StreamDefrag::GPUFaultProtection(StreamDefrag *this, const GfxBackEndData *data)
{
  const dvar_t *v4; 
  unsigned int v5; 
  int v6; 
  char v7; 
  StreamDefragCopyMode mCopyMode; 
  int v9; 
  unsigned __int64 mDMACopyFence; 
  bool v11; 
  __int64 v12; 

  if ( !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4366, ASSERT_TYPE_ASSERT, "(Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Stream_BackendQueue_IsInForcedFlush()") )
    __debugbreak();
  v4 = DCONST_DVARINT_stream_defragGPUFaultProtectionMS;
  if ( !DCONST_DVARINT_stream_defragGPUFaultProtectionMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragGPUFaultProtectionMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = 2 * v4->current.integer;
  if ( v5 && !StreamDefrag::IsAsyncCopyFinished(this, data) )
  {
    v6 = Sys_Milliseconds();
    v7 = 0;
    while ( 1 )
    {
      mCopyMode = this->mCopyMode;
      if ( mCopyMode == MOVEMENT )
        break;
      if ( mCopyMode == 5 )
      {
        v9 = R_DefragDMACommandListFencePending(&this->mDMACopyFence);
        mDMACopyFence = this->mDMACopyFence;
        v11 = v9 == 0;
      }
      else
      {
        mDMACopyFence = this->mGPUCopyFenceCounter;
        v11 = mDMACopyFence <= *this->mGPUCopyFenceAddr;
      }
      Stream_Logger_OnCopyFinishedFenceCheck("StreamDefrag::IsAsyncCopyFinished", data, mDMACopyFence);
      if ( v11 )
        break;
      if ( Sys_Milliseconds() > (int)(v6 + v5) )
      {
        v7 = 1;
        break;
      }
    }
    v12 = (unsigned int)(Sys_Milliseconds() - v6);
    if ( v7 )
      Com_PrintWarning(35, "Stream defrag GPUFaultProtection waited %d ms, which is more than the max wait time %d. Wait aborted!\n", v12, v5);
    else
      Com_PrintWarning(35, "Stream defrag GPUFaultProtection waited %d ms\n", v12);
  }
}

/*
==============
StreamDefrag::GetFrameDefragCommandCount
==============
*/
__int64 StreamDefrag::GetFrameDefragCommandCount(StreamDefrag *this, StreamMemPool pool)
{
  const dvar_t *v2; 
  __int64 v3; 
  float v5; 
  float v6; 
  const dvar_t *v7; 
  float v8; 
  float v9; 
  float v10; 
  StreamDefrag::AddressSpace *v11; 
  unsigned int v12; 
  const char *v13; 
  unsigned __int64 VASizeFragmentation; 
  unsigned int v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  float v18; 
  unsigned __int64 v19; 
  __int64 result; 
  __int64 v21; 
  __int64 v22; 
  int v23[4]; 
  float value; 
  int v25[3]; 

  v2 = DCONST_DVARVEC3_stream_defragStepUpBytes;
  v3 = (unsigned int)pool;
  if ( !DCONST_DVARVEC3_stream_defragStepUpBytes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragStepUpBytes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v5 = v2->current.vector.v[1];
  v23[0] = v2->current.integer;
  v6 = v2->current.vector.v[2];
  v7 = DCONST_DVARVEC4_stream_defragStepUpCmdCount;
  *(float *)&v23[1] = v5;
  *(float *)&v23[2] = v6;
  if ( !DCONST_DVARVEC4_stream_defragStepUpCmdCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragStepUpCmdCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.vector.v[1];
  v9 = v7->current.vector.v[2];
  v10 = v7->current.vector.v[3];
  value = v7->current.value;
  *(float *)v25 = v8;
  *(float *)&v25[1] = v9;
  v11 = &this->mAddressSpaces[v3];
  *(float *)&v25[2] = v10;
  v12 = (int)value;
  if ( StreamDefragRegion<1>::GetVASizeNotAllocated(&v11->mMoveableRegion) > 0xC800000 )
  {
    VASizeFragmentation = StreamDefragRegion<1>::GetVASizeFragmentation(&v11->mMoveableRegion);
    v15 = 0;
    v16 = VASizeFragmentation;
    v17 = 0i64;
    do
    {
      v18 = *(float *)&v23[v17];
      v19 = 0i64;
      if ( v18 >= 9.223372e18 )
      {
        v18 = v18 - 9.223372e18;
        if ( v18 < 9.223372e18 )
          v19 = 0x8000000000000000ui64;
      }
      if ( v16 > v19 + (unsigned int)(int)v18 )
      {
        if ( v15 + 1 >= 4 )
        {
          LODWORD(v22) = 4;
          LODWORD(v21) = v15 + 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        v12 = (int)*(float *)&v25[v17];
      }
      ++v15;
      ++v17;
    }
    while ( v15 < 3 );
  }
  else
  {
    v13 = "GPU";
    if ( !(_DWORD)v3 )
      v13 = "CPU";
    R_WarnOncePerFrame(R_WARN_STREAM_DEFRAG_CLOSE_TO_OVERWRITE, v13, 200i64);
    v12 = (int)v10;
  }
  result = 1024i64;
  if ( v12 < 0x400 )
    return v12;
  return result;
}

/*
==============
StreamDefrag::GetRegionStats
==============
*/
void StreamDefrag::GetRegionStats(StreamDefrag *this, StreamMemPool pool, StreamDefragRegionStats *outFixedRegionStats, StreamDefragRegionStats *outMoveableRegionStats)
{
  char *v5; 
  char v6; 

  v5 = (char *)this + 256 * (unsigned __int64)(unsigned int)pool;
  v6 = 0;
  lambda_4bffae980443db749cd7c9aa8d707210_::operator()_StreamDefragRegion_0___((const StreamDefragRegion<0> *)&v6, (StreamDefragRegionStats *)(v5 + 3297416));
  outMoveableRegionStats->baseAddress = *((_QWORD *)v5 + 412165);
  outMoveableRegionStats->endAddress = *((_QWORD *)v5 + 412166);
  outMoveableRegionStats->tailAddress = *((_QWORD *)v5 + 412167);
  outMoveableRegionStats->headAddress = *((_QWORD *)v5 + 412168);
  outMoveableRegionStats->reserved = *((_QWORD *)v5 + 412166) - *((_QWORD *)v5 + 412165);
  outMoveableRegionStats->allocated = StreamDefragRegion<1>::GetVASizeAllocated((StreamDefragRegion<1> *)(v5 + 3297288));
  if ( (v5[3297352] & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2145, ASSERT_TYPE_ASSERT, "(mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  outMoveableRegionStats->used = *((_QWORD *)v5 + 412169);
  if ( (v5[3297368] & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2161, ASSERT_TYPE_ASSERT, "(mVaSizeCommitted % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeCommitted % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  outMoveableRegionStats->committed = *((_QWORD *)v5 + 412171);
  if ( (v5[3297360] & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2167, ASSERT_TYPE_ASSERT, "(mVaSizeAlignWaste % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeAlignWaste % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  outMoveableRegionStats->alignWaste = *((_QWORD *)v5 + 412170);
  if ( (v5[3297376] & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2173, ASSERT_TYPE_ASSERT, "(mVaSizeFullyUnmapped % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeFullyUnmapped % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  outMoveableRegionStats->fullyUnmappedNotYetReleased = *((_QWORD *)v5 + 412172);
  outMoveableRegionStats->fragmentation = StreamDefragRegion<1>::GetVASizeFragmentation((StreamDefragRegion<1> *)(v5 + 3297288));
  outMoveableRegionStats->inFlightDefragMoveCount = *((_DWORD *)v5 + 824346);
  outMoveableRegionStats->inFlightDefragCopyCount = *((_DWORD *)v5 + 824347);
}

/*
==============
StreamDefragRegion<1>::GetVASizeAllocated
==============
*/
unsigned __int64 StreamDefragRegion<1>::GetVASizeAllocated(StreamDefragRegion<1> *this)
{
  unsigned __int64 mAddrTail; 
  unsigned __int64 v2; 

  mAddrTail = this->mAddrTail;
  v2 = this->mAddrHead - mAddrTail;
  if ( mAddrTail > this->mAddrHead )
    v2 += this->mAddrEnd - this->mAddrBase;
  if ( (v2 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2139, ASSERT_TYPE_ASSERT, "(vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  return v2;
}

/*
==============
StreamDefragRegion<0>::GetVASizeAllocated
==============
*/
unsigned __int64 StreamDefragRegion<0>::GetVASizeAllocated(StreamDefragRegion<0> *this)
{
  unsigned __int64 v2; 

  if ( this->mAddrTail > this->mAddrHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2136, ASSERT_TYPE_ASSERT, "(mAddrTail <= mAddrHead)", (const char *)&queryFormat, "mAddrTail <= mAddrHead") )
    __debugbreak();
  v2 = this->mAddrHead - this->mAddrTail;
  if ( (v2 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2139, ASSERT_TYPE_ASSERT, "(vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  return v2;
}

/*
==============
StreamDefragRegion<1>::GetVASizeFragmentation
==============
*/
unsigned __int64 StreamDefragRegion<1>::GetVASizeFragmentation(StreamDefragRegion<1> *this)
{
  unsigned __int64 VASizeAllocated; 
  unsigned __int64 mVaSizeCommitted; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  int v7; 
  int v8; 

  VASizeAllocated = StreamDefragRegion<1>::GetVASizeAllocated(this);
  if ( (this->mVaSizeCommitted & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2161, ASSERT_TYPE_ASSERT, "(mVaSizeCommitted % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeCommitted % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  mVaSizeCommitted = this->mVaSizeCommitted;
  if ( (this->mVaSizeAlignWaste & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2167, ASSERT_TYPE_ASSERT, "(mVaSizeAlignWaste % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeAlignWaste % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  v4 = mVaSizeCommitted + this->mVaSizeAlignWaste;
  if ( VASizeAllocated < v4 )
  {
    v8 = v4;
    v7 = VASizeAllocated;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2209, ASSERT_TYPE_ASSERT, "( allocatedAddressSpace ) >= ( unreclaimableAddressSpace )", "%s >= %s\n\t%u, %u", "allocatedAddressSpace", "unreclaimableAddressSpace", v7, v8) )
      __debugbreak();
  }
  v5 = VASizeAllocated - v4;
  if ( (v5 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2222, ASSERT_TYPE_ASSERT, "(fragmentation % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "fragmentation % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  return v5;
}

/*
==============
StreamDefragRegion<1>::GetVASizeNotAllocated
==============
*/
unsigned __int64 StreamDefragRegion<1>::GetVASizeNotAllocated(StreamDefragRegion<1> *this)
{
  unsigned __int64 VASizeAllocated; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 

  VASizeAllocated = StreamDefragRegion<1>::GetVASizeAllocated(this);
  v3 = VASizeAllocated;
  v4 = this->mAddrEnd - this->mAddrBase;
  if ( v4 < VASizeAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2153, ASSERT_TYPE_ASSERT, "( totalAddressSpace ) >= ( allocatedAddressSpace )", "%s >= %s\n\t%zu, %zu", "totalAddressSpace", "allocatedAddressSpace", v4, VASizeAllocated) )
    __debugbreak();
  v5 = v4 - v3;
  if ( (v5 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2155, ASSERT_TYPE_ASSERT, "(vaSizeNotAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeNotAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  return v5;
}

/*
==============
StreamDefrag::GivePages
==============
*/
void StreamDefrag::GivePages(StreamDefrag *this, StreamerMemPageCounts *pageAdjust)
{
  unsigned int v3; 
  StreamMemPool v4; 
  unsigned __int64 v5; 
  StreamMemPool v6; 
  unsigned int v7; 
  InternalStreamerMemLoan *p_mDefragPages; 
  unsigned int v9; 
  Mem_Pool MemPoolFromStreamMemPool; 
  Mem_Pool v11; 
  unsigned __int64 v12; 
  unsigned int v13; 
  StreamerMemPageCounts *v14; 
  __int64 v15; 
  unsigned int v16; 
  StreamerMemPageCounts *v17; 
  __int64 v18; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v21; 
  unsigned int v22; 
  unsigned int *v23; 
  Mem_Pool v24; 
  unsigned int FreePageCountForCommit; 
  Mem_Pool v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 

  Stream_Defrag_CheckLocks(this, pageAdjust);
  v3 = -1;
  v4 = COUNT;
  v5 = 0i64;
  v6 = COUNT;
  v7 = -1;
  p_mDefragPages = &this->mDefragPages;
  do
  {
    v9 = StreamerMemLoan::PagesForPool(p_mDefragPages, (StreamMemPool)v5);
    MemPoolFromStreamMemPool = Stream_Alloc_GetMemPoolFromStreamMemPool((StreamMemPool)v5);
    if ( v9 > Mem_Paged_GetFreePageCountForCommit(MemPoolFromStreamMemPool) )
    {
      v11 = Stream_Alloc_GetMemPoolFromStreamMemPool((StreamMemPool)v5);
      LODWORD(v30) = Mem_Paged_GetFreePageCountForCommit(v11);
      LODWORD(v29) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3358, ASSERT_TYPE_ASSERT, "( pageCount ) <= ( Mem_Paged_GetFreePageCountForCommit( Stream_Alloc_GetMemPoolFromStreamMemPool( pool ) ) )", "%s <= %s\n\t%u, %u", "pageCount", "Mem_Paged_GetFreePageCountForCommit( Stream_Alloc_GetMemPoolFromStreamMemPool( pool ) )", v29, v30) )
        __debugbreak();
    }
    if ( v9 < v3 )
    {
      v3 = v9;
      v4 = (int)v5;
    }
    if ( v9 < v7 )
    {
      v7 = v9;
      v6 = (int)v5;
    }
    ++v5;
  }
  while ( v5 < 2 );
  v12 = 0i64;
  if ( v4 == COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3371, ASSERT_TYPE_ASSERT, "(poolWithLeastPages != StreamMemPool::COUNT)", (const char *)&queryFormat, "poolWithLeastPages != StreamMemPool::COUNT") )
    __debugbreak();
  if ( v6 == COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3372, ASSERT_TYPE_ASSERT, "(poolWithMostPages != StreamMemPool::COUNT)", (const char *)&queryFormat, "poolWithMostPages != StreamMemPool::COUNT") )
    __debugbreak();
  v13 = 264 - StreamerMemLoan::TotalPages(p_mDefragPages);
  if ( (int)v13 > 0 )
  {
    v14 = pageAdjust;
    v15 = 2i64;
    v16 = 0;
    v17 = pageAdjust;
    v18 = 0i64;
    if ( pageAdjust > &pageAdjust[1] )
      v15 = 0i64;
    if ( pageAdjust <= &pageAdjust[1] )
    {
      do
      {
        v16 += v17->pages[0];
        v17 = (StreamerMemPageCounts *)((char *)v17 + 4);
        ++v18;
      }
      while ( v18 != v15 );
    }
    if ( v16 < v13 )
    {
      StreamerMemLoan::GivePages(p_mDefragPages, pageAdjust);
      *pageAdjust = 0i64;
    }
    else
    {
      if ( (unsigned int)v4 >= COUNT )
      {
        LODWORD(v28) = 2;
        LODWORD(v27) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", v27, v28) )
          __debugbreak();
      }
      v19 = pageAdjust->pages[v4];
      if ( v19 > v13 )
        v19 = v13;
      StreamerMemPageCounts::RemovePages(pageAdjust, v4, v19);
      StreamerMemLoan::GivePages(p_mDefragPages, v4, v19);
      if ( v13 < v19 )
      {
        LODWORD(v30) = v19;
        LODWORD(v29) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3391, ASSERT_TYPE_ASSERT, "( pagesToTake ) >= ( pagesToTakeFromPoolWithLeastPages )", "%s >= %s\n\t%u, %u", "pagesToTake", "pagesToTakeFromPoolWithLeastPages", v29, v30) )
          __debugbreak();
      }
      v20 = v13 - v19;
      if ( v20 )
      {
        v21 = 0i64;
        while ( 1 )
        {
          if ( (_DWORD)v21 != v4 )
          {
            v22 = v14->pages[(unsigned int)v21];
            v23 = (unsigned int *)v14 + (unsigned int)v21;
            if ( v22 > v20 )
              v22 = v20;
            if ( *v23 < v22 )
            {
              LODWORD(v30) = v22;
              LODWORD(v29) = *v23;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 63, ASSERT_TYPE_ASSERT, "( pages[static_cast<size_t>( pool )] ) >= ( pageCount )", "%s >= %s\n\t%u, %u", "pages[static_cast<size_t>( pool )]", "pageCount", v29, v30) )
                __debugbreak();
            }
            *v23 -= v22;
            StreamerMemLoan::GivePages(p_mDefragPages, v4, v22);
            if ( v20 < v22 )
            {
              LODWORD(v30) = v22;
              LODWORD(v29) = v20;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3405, ASSERT_TYPE_ASSERT, "( pagesToTake ) >= ( pagesToTakeFromPool )", "%s >= %s\n\t%u, %u", "pagesToTake", "pagesToTakeFromPool", v29, v30) )
                __debugbreak();
            }
            v20 -= v22;
            if ( !v20 )
              goto LABEL_47;
            v14 = pageAdjust;
          }
          if ( (unsigned __int64)++v21 >= 2 )
            goto LABEL_47;
        }
      }
    }
  }
  else
  {
    StreamerMemLoan::TakePages(p_mDefragPages, v6, -v13, pageAdjust);
  }
  do
  {
LABEL_47:
    v24 = Stream_Alloc_GetMemPoolFromStreamMemPool((StreamMemPool)v12);
    FreePageCountForCommit = Mem_Paged_GetFreePageCountForCommit(v24);
    if ( StreamerMemLoan::PagesForPool(p_mDefragPages, (StreamMemPool)v12) > FreePageCountForCommit )
    {
      v26 = Stream_Alloc_GetMemPoolFromStreamMemPool((StreamMemPool)v12);
      LODWORD(v30) = Mem_Paged_GetFreePageCountForCommit(v26);
      LODWORD(v29) = StreamerMemLoan::PagesForPool(p_mDefragPages, (StreamMemPool)v12);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3426, ASSERT_TYPE_ASSERT, "( mDefragPages.PagesForPool( pool ) ) <= ( Mem_Paged_GetFreePageCountForCommit( Stream_Alloc_GetMemPoolFromStreamMemPool( pool ) ) )", "%s <= %s\n\t%u, %u", "mDefragPages.PagesForPool( pool )", "Mem_Paged_GetFreePageCountForCommit( Stream_Alloc_GetMemPoolFromStreamMemPool( pool ) )", v29, v30) )
        __debugbreak();
    }
    ++v12;
  }
  while ( v12 < 2 );
}

/*
==============
StreamDefrag::HarvestRegions
==============
*/
void StreamDefrag::HarvestRegions(StreamDefrag *this, const GfxBackEndData *data)
{
  const GfxBackEndData *v2; 
  RList<StreamDefragAllocNode> *p_mInvalidNodes; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  StreamDefragAllocNode *mHead; 
  int v9; 
  StreamDefragAllocNode *mNodePool; 
  StreamDefrag::AddressSpace *i; 
  __int64 v12; 

  v2 = data;
  Stream_Defrag_CheckLocks(this, data);
  if ( Stream_IsEnabled() && !Stream_BackendQueue_IsInForcedFlush() && streamFrontendGlob->levelInit.state == 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3692, ASSERT_TYPE_ASSERT, "(IsIdle())", (const char *)&queryFormat, "IsIdle()", -2i64) )
    __debugbreak();
  p_mInvalidNodes = &this->mAddressSpaces[0].mMoveableRegion.mInvalidNodes;
  v5 = 2i64;
  v12 = 2i64;
  do
  {
    StreamDefragRegion_0_::DefragAndHarvestFixedRegion__lambda_09009fe84f0e635445bd8e32c594b83a___((const GfxBackEndData *)&p_mInvalidNodes[7], (StreamDefrag::HarvestRegions::__l2::<lambda_09009fe84f0e635445bd8e32c594b83a>)v2);
    Sys_ProfBeginNamedEvent(0xFF808080, "StreamDefragRegion<1>::HarvestInvalidNodes");
    Stream_Defrag_CheckLocks(v7, v6);
    mHead = p_mInvalidNodes->mHead;
    if ( p_mInvalidNodes->mHead )
    {
      do
      {
        v9 = (int)(*(_DWORD *)mHead << 13) >> 13;
        if ( NodeIsValid(mHead) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1321, ASSERT_TYPE_ASSERT, "(!NodeIsValid( node ))", (const char *)&queryFormat, "!NodeIsValid( node )") )
          __debugbreak();
        RList<StreamDefragAllocNode>::RemoveNode(p_mInvalidNodes, mHead, NULL);
        if ( (*(_DWORD *)mHead & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 491, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
          __debugbreak();
        if ( (*((_DWORD *)mHead + 4) & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 492, ASSERT_TYPE_ASSERT, "(node->prev == 0)", (const char *)&queryFormat, "node->prev == 0") )
          __debugbreak();
        StreamDefrag::HarvestUnusedNode(this, mHead);
        if ( !v9 )
          break;
        mHead += v9;
      }
      while ( mHead );
      v5 = v12;
      v2 = data;
    }
    StreamDefragRegion<1>::Validate((StreamDefragRegion<1> *)&p_mInvalidNodes[-1]);
    Sys_ProfEndNamedEvent();
    p_mInvalidNodes += 16;
    v12 = --v5;
  }
  while ( v5 );
  mNodePool = this->mFreePool.mNodePool;
  for ( i = this->mAddressSpaces; mNodePool != (StreamDefragAllocNode *)i; ++mNodePool )
  {
    if ( (*(_DWORD *)mNodePool & 0x200000) != 0 && !*((_DWORD *)mNodePool + 3) && (*((_BYTE *)mNodePool + 4) & 3) != 3 && (*(_DWORD *)mNodePool & 0x100000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3718, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Found invalid/freed moveable node @ 0x%p that had its VA reserve fully released, i.e. it's fully unmapped, but it didn't get harvested!", mNodePool) )
      __debugbreak();
  }
}

/*
==============
StreamDefrag::HarvestUnusedNode
==============
*/
void StreamDefrag::HarvestUnusedNode(StreamDefrag *this, StreamDefragAllocNode *node)
{
  bool v4; 
  StreamDefragAllocNode *mHead; 
  unsigned int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 
  __int128 v12; 
  int v13; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3675, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (*(_DWORD *)node & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3676, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
    __debugbreak();
  if ( (*((_DWORD *)node + 4) & 0x380000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3677, ASSERT_TYPE_ASSERT, "(node->defragLockCount == 0)", (const char *)&queryFormat, "node->defragLockCount == 0") )
    __debugbreak();
  if ( (*((_DWORD *)node + 4) & 0xC00000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3678, ASSERT_TYPE_ASSERT, "(node->defragRefCount == 0)", (const char *)&queryFormat, "node->defragRefCount == 0") )
    __debugbreak();
  if ( NodeIsValid(node) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3679, ASSERT_TYPE_ASSERT, "(!NodeIsValid( node ))", (const char *)&queryFormat, "!NodeIsValid( node )") )
    __debugbreak();
  item = *Stream_Logger_MakeItem(&result, node);
  Stream_Logger_OnNodeHarvested("StreamDefrag::HarvestUnusedNode", NULL, &item);
  v12 = 0ui64;
  *(_OWORD *)node = 0ui64;
  *((_DWORD *)node + 4) = 0;
  *((_DWORD *)node + 1) |= 3u;
  v4 = (*(_DWORD *)node & 0x7FFFF) == 0;
  v13 = 0;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 719, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
    __debugbreak();
  do
  {
    mHead = this->mFreePool.mHead;
    v6 = *(_DWORD *)node & 0xFFF80000;
    if ( this->mFreePool.mHead )
    {
      v7 = mHead - node;
      v8 = v6 | (((int)mHead - (int)node) / 20) & 0x7FFFF;
      *(_DWORD *)node = v8;
      v9 = v8 << 13;
      if ( (__int64)v9 >> 13 != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 728, ASSERT_TYPE_ASSERT, "( node->next ) == ( curHead - node )", "%s == %s\n\t%lli, %lli", "node->next", "curHead - node", (__int64)v9 >> 13, v7) )
        __debugbreak();
    }
    else
    {
      *(_DWORD *)node = v6;
    }
    if ( ((unsigned __int8)this & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 128, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int64 ) ) ) )", "( target ) = %p", this) )
      __debugbreak();
  }
  while ( mHead != (StreamDefragAllocNode *)_InterlockedCompareExchange64((volatile signed __int64 *)this, (signed __int64)node, (signed __int64)mHead) );
}

/*
==============
ImagePartInfo
==============
*/
void ImagePartInfo(StreamDefragCommand *command)
{
  int v2; 
  GfxImage *GfxImageAtIndex; 
  int v4; 
  const dvar_t *v5; 
  GfxImage *v6; 
  unsigned __int8 streamedPartCount; 
  __int64 v8; 
  GfxImageStreamLevelCountAndSize *p_levelCountAndSize; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  StreamFrontendGlob *v14; 
  unsigned int *mUse; 
  unsigned int v16; 
  __int64 v17; 
  char v18; 
  GfxImageStreamLevelCountAndSize *v19; 
  int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  StreamFrontendGlob *v24; 
  unsigned int *v25; 
  unsigned int v26; 
  StreamFrontendGlob *v27; 
  int v28; 
  unsigned int *v29; 
  unsigned int v30; 
  GfxImageStreamLevelCountAndSize *v31; 
  int v32; 
  unsigned int v33; 
  int v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  int v39; 

  v2 = (*((_DWORD *)command->node + 1) >> 2) & 0x3FFFF;
  GfxImageAtIndex = DB_GetGfxImageAtIndex(v2);
  *((_DWORD *)command + 13) &= 0xF0FFFFFF;
  v4 = 4 * v2;
  v5 = DCONST_DVARBOOL_stream_concurrentImagePartLoading;
  v6 = GfxImageAtIndex;
  v39 = v4;
  if ( !DCONST_DVARBOOL_stream_concurrentImagePartLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_concurrentImagePartLoading") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  streamedPartCount = v6->streamedPartCount;
  if ( v5->current.enabled )
  {
    v8 = 0i64;
    if ( streamedPartCount )
    {
      do
      {
        if ( (v6->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
          __debugbreak();
        if ( (unsigned int)v8 >= Image_GetStreamedPartCount(v6) )
        {
          LODWORD(v36) = Image_GetStreamedPartCount(v6);
          LODWORD(v35) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v35, v36) )
            __debugbreak();
        }
        p_levelCountAndSize = &v6->streams[v8].levelCountAndSize;
        if ( (_DWORD)v8 )
          v10 = ((unsigned int)*p_levelCountAndSize >> 4) - ((unsigned int)v6->streams[(unsigned int)(v8 - 1)].levelCountAndSize >> 4);
        else
          v10 = (unsigned int)*p_levelCountAndSize >> 4;
        command->partSize[v8] = v10;
        if ( (v6->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 212, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
          __debugbreak();
        v11 = Image_InclusivePartSize(v6, v8);
        if ( v6->totalSize < v11 )
        {
          LODWORD(v38) = v11;
          LODWORD(v37) = v6->totalSize;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 215, ASSERT_TYPE_ASSERT, "( image->totalSize ) >= ( size )", "%s >= %s\n\t%u, %u", "image->totalSize", "size", v37, v38) )
            __debugbreak();
        }
        v12 = v6->totalSize - v11;
        v13 = v8 + v4;
        command->partOffset[v8] = v12;
        v14 = streamFrontendGlob;
        if ( v13 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(v36) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(v35) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v35, v36) )
            __debugbreak();
        }
        mUse = v14->imageBits.mUse;
        if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v16 = mUse[(__int64)(int)v13 >> 5];
        if ( _bittest((const int *)&v16, v13 & 0x1F) )
          *((_DWORD *)command + 13) ^= (*((_DWORD *)command + 13) ^ ((HIBYTE(*((_DWORD *)command + 13)) & 0xF | (1 << v8)) << 24)) & 0xF000000;
        v4 = v39;
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < v6->streamedPartCount );
    }
  }
  else
  {
    v17 = 0i64;
    if ( streamedPartCount )
    {
      do
      {
        if ( (v6->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
          __debugbreak();
        if ( (unsigned int)v17 >= Image_GetStreamedPartCount(v6) )
        {
          LODWORD(v36) = Image_GetStreamedPartCount(v6);
          LODWORD(v35) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v35, v36) )
            __debugbreak();
        }
        v18 = v17;
        v19 = &v6->streams[v17].levelCountAndSize;
        if ( (_DWORD)v17 )
          v20 = ((unsigned int)*v19 >> 4) - ((unsigned int)v6->streams[(unsigned int)(v17 - 1)].levelCountAndSize >> 4);
        else
          v20 = (unsigned int)*v19 >> 4;
        command->partSize[v17] = v20;
        if ( (v6->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 212, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
          __debugbreak();
        v21 = Image_InclusivePartSize(v6, v17);
        if ( v6->totalSize < v21 )
        {
          LODWORD(v38) = v21;
          LODWORD(v37) = v6->totalSize;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 215, ASSERT_TYPE_ASSERT, "( image->totalSize ) >= ( size )", "%s >= %s\n\t%u, %u", "image->totalSize", "size", v37, v38) )
            __debugbreak();
        }
        v22 = v6->totalSize - v21;
        v23 = v17 + v4;
        command->partOffset[v17] = v22;
        v24 = streamFrontendGlob;
        if ( v23 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(v36) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(v35) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v35, v36) )
            __debugbreak();
        }
        v25 = v24->imageBits.mUse;
        if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v26 = v25[(__int64)(int)v23 >> 5];
        if ( !_bittest((const int *)&v26, v23 & 0x1F) )
          break;
        v4 = v39;
        v17 = (unsigned int)(v17 + 1);
        *((_DWORD *)command + 13) ^= (*((_DWORD *)command + 13) ^ ((HIBYTE(*((_DWORD *)command + 13)) & 0xF | (1 << v18)) << 24)) & 0xF000000;
      }
      while ( (unsigned int)v17 < v6->streamedPartCount );
      v4 = v39;
    }
    for ( ; (unsigned int)v17 < v6->streamedPartCount; v17 = (unsigned int)(v17 + 1) )
    {
      v27 = streamFrontendGlob;
      v28 = v17 + v4;
      if ( (unsigned int)(v17 + v4) >= streamFrontendGlob->imageBits.mBitCount )
      {
        LODWORD(v36) = streamFrontendGlob->imageBits.mBitCount;
        LODWORD(v35) = v17 + v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      v29 = v27->imageBits.mUse;
      if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v30 = v29[(__int64)v28 >> 5];
      if ( _bittest((const int *)&v30, v28 & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 716, ASSERT_TYPE_ASSERT, "(!streamFrontendGlob->imageBits.CheckInUse( imagePart0 + notUsedPartIndex ))", (const char *)&queryFormat, "!streamFrontendGlob->imageBits.CheckInUse( imagePart0 + notUsedPartIndex )") )
        __debugbreak();
      if ( (v6->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      if ( (unsigned int)v17 >= Image_GetStreamedPartCount(v6) )
      {
        LODWORD(v36) = Image_GetStreamedPartCount(v6);
        LODWORD(v35) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      v31 = &v6->streams[v17].levelCountAndSize;
      if ( (_DWORD)v17 )
        v32 = ((unsigned int)*v31 >> 4) - ((unsigned int)v6->streams[(unsigned int)(v17 - 1)].levelCountAndSize >> 4);
      else
        v32 = (unsigned int)*v31 >> 4;
      command->partSize[v17] = v32;
      if ( (v6->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 212, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      v33 = Image_InclusivePartSize(v6, v17);
      if ( v6->totalSize < v33 )
      {
        LODWORD(v38) = v33;
        LODWORD(v37) = v6->totalSize;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 215, ASSERT_TYPE_ASSERT, "( image->totalSize ) >= ( size )", "%s >= %s\n\t%u, %u", "image->totalSize", "size", v37, v38) )
          __debugbreak();
      }
      v4 = v39;
      command->partOffset[v17] = v6->totalSize - v33;
    }
  }
  v34 = __lzcnt(0x100ui64) ^ 0x3F;
  *((_DWORD *)command + 13) = (16 * *((_DWORD *)command + 13)) ^ (*((_DWORD *)command + 13) ^ (16 * *((_DWORD *)command + 13))) & 0xFFFFFFF;
  if ( (~(1i64 << v34) & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 570, ASSERT_TYPE_ASSERT, "( ( v & ~( uint64_t( 1 ) << ret ) ) == 0 )", "iLog2: %llu, 0x%llx is not power of 2", 256i64, 256i64) )
    __debugbreak();
  *((_DWORD *)command + 13) &= 0xFFC3FFFF;
  *((_DWORD *)command + 13) |= ((v34 - (unsigned int)compileTimeLog2(8ui64)) << 18) & 0x3C0000;
}

/*
==============
StreamDefrag::InsertCopyFenceWaitOnGfxDevice
==============
*/
void StreamDefrag::InsertCopyFenceWaitOnGfxDevice(StreamDefrag *this, GfxCmdBufContext *gfxContext)
{
  if ( this->mCopyMode != 5 && this->mGPUCopyFenceCounter >= 2 )
  {
    R_LockGfxImmediateContext();
    R_GPU_BeginTimer(GPU_TIMER_STREAMER_DEFRAG_WAIT);
    R_GPULabel_Wait(gfxContext->state, this->mGPUCopyFenceAddr, this->mGPUCopyFenceCounter - 2, GFX_LABEL_COMPARE_FUNC_GREATEREQUAL);
    R_GPU_EndTimer();
    R_UnlockGfxImmediateContext();
  }
}

/*
==============
StreamDefragRegion<1>::InvalidateNode
==============
*/
void StreamDefragRegion<1>::InvalidateNode(StreamDefragRegion<1> *this, StreamDefragAllocNode *node)
{
  int v4; 
  StreamDefragAllocNode *mHead; 
  int v6; 
  unsigned __int64 VaSizeForParts; 
  unsigned __int64 mVaSizeFullyUnmapped; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1961, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1962, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1963, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1965, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (*(_DWORD *)node & 0x100000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1966, ASSERT_TYPE_ASSERT, "(node->valid)", (const char *)&queryFormat, "node->valid") )
    __debugbreak();
  if ( (*((_DWORD *)node + 4) & 0xC00000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1967, ASSERT_TYPE_ASSERT, "(node->defragRefCount == 0)", (const char *)&queryFormat, "node->defragRefCount == 0") )
    __debugbreak();
  if ( *((_DWORD *)node + 2) != *((_DWORD *)node + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1968, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead == node->vAddrOffsetWrite)", (const char *)&queryFormat, "node->vAddrOffsetRead == node->vAddrOffsetWrite") )
    __debugbreak();
  v4 = *((_DWORD *)node + 1) & 0x700000;
  if ( *((_DWORD *)node + 3) )
  {
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1981, ASSERT_TYPE_ASSERT, "(node->vaReservedPartCount > 0)", (const char *)&queryFormat, "node->vaReservedPartCount > 0") )
      __debugbreak();
    if ( (*(_DWORD *)node & 0x7800000) == 0 )
    {
      VaSizeForParts = NodeGetVaSizeForParts(node, (*((_DWORD *)node + 1) >> 20) & 7);
      mVaSizeFullyUnmapped = this->mVaSizeFullyUnmapped;
      if ( mVaSizeFullyUnmapped < VaSizeForParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1987, ASSERT_TYPE_ASSERT, "( mVaSizeFullyUnmapped ) >= ( size )", "%s >= %s\n\t%zu, %zu", "mVaSizeFullyUnmapped", "size", mVaSizeFullyUnmapped, VaSizeForParts) )
        __debugbreak();
      this->mVaSizeFullyUnmapped -= VaSizeForParts;
    }
    StreamDefragRegion<1>::RemoveNode(this, node);
  }
  else
  {
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1972, ASSERT_TYPE_ASSERT, "(node->vaReservedPartCount == 0)", (const char *)&queryFormat, "node->vaReservedPartCount == 0") )
      __debugbreak();
    if ( *((_DWORD *)node + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1973, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead == 0)", (const char *)&queryFormat, "node->vAddrOffsetRead == 0") )
      __debugbreak();
    if ( (*((_DWORD *)node + 1) & 0x7800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1974, ASSERT_TYPE_ASSERT, "(node->vAddrEndAlignLog2 == 0)", (const char *)&queryFormat, "node->vAddrEndAlignLog2 == 0") )
      __debugbreak();
    if ( (*(_DWORD *)node & 0x7800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1975, ASSERT_TYPE_ASSERT, "(node->mappedParts == 0)", (const char *)&queryFormat, "node->mappedParts == 0") )
      __debugbreak();
    mHead = this->mAllocations.mHead;
    if ( this->mAllocations.mHead )
    {
      while ( 1 )
      {
        v6 = (int)(*(_DWORD *)mHead << 13) >> 13;
        if ( mHead == node )
          break;
        if ( v6 )
        {
          mHead += v6;
          if ( mHead )
            continue;
        }
        goto LABEL_51;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1977, ASSERT_TYPE_ASSERT, "(!mAllocations.Contains( node ))", (const char *)&queryFormat, "!mAllocations.Contains( node )") )
        __debugbreak();
    }
  }
LABEL_51:
  if ( (*(_DWORD *)node & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1994, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
    __debugbreak();
  RList<StreamDefragAllocNode>::PushFront(&this->mInvalidNodes, node);
  *(_DWORD *)node &= ~0x100000u;
}

/*
==============
StreamDefragRegion<0>::InvalidateNode
==============
*/
void StreamDefragRegion<0>::InvalidateNode(StreamDefragRegion<0> *this, StreamDefragAllocNode *node)
{
  int v4; 
  StreamDefragAllocNode *mHead; 
  int v6; 
  unsigned __int64 VaSizeForParts; 
  unsigned __int64 mVaSizeFullyUnmapped; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1961, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1962, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1963, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1965, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (*(_DWORD *)node & 0x100000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1966, ASSERT_TYPE_ASSERT, "(node->valid)", (const char *)&queryFormat, "node->valid") )
    __debugbreak();
  if ( (*((_DWORD *)node + 4) & 0xC00000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1967, ASSERT_TYPE_ASSERT, "(node->defragRefCount == 0)", (const char *)&queryFormat, "node->defragRefCount == 0") )
    __debugbreak();
  if ( *((_DWORD *)node + 2) != *((_DWORD *)node + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1968, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead == node->vAddrOffsetWrite)", (const char *)&queryFormat, "node->vAddrOffsetRead == node->vAddrOffsetWrite") )
    __debugbreak();
  v4 = *((_DWORD *)node + 1) & 0x700000;
  if ( *((_DWORD *)node + 3) )
  {
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1981, ASSERT_TYPE_ASSERT, "(node->vaReservedPartCount > 0)", (const char *)&queryFormat, "node->vaReservedPartCount > 0") )
      __debugbreak();
    if ( (*(_DWORD *)node & 0x7800000) == 0 )
    {
      VaSizeForParts = NodeGetVaSizeForParts(node, (*((_DWORD *)node + 1) >> 20) & 7);
      mVaSizeFullyUnmapped = this->mVaSizeFullyUnmapped;
      if ( mVaSizeFullyUnmapped < VaSizeForParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1987, ASSERT_TYPE_ASSERT, "( mVaSizeFullyUnmapped ) >= ( size )", "%s >= %s\n\t%zu, %zu", "mVaSizeFullyUnmapped", "size", mVaSizeFullyUnmapped, VaSizeForParts) )
        __debugbreak();
      this->mVaSizeFullyUnmapped -= VaSizeForParts;
    }
    StreamDefragRegion<0>::RemoveNode(this, node);
  }
  else
  {
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1972, ASSERT_TYPE_ASSERT, "(node->vaReservedPartCount == 0)", (const char *)&queryFormat, "node->vaReservedPartCount == 0") )
      __debugbreak();
    if ( *((_DWORD *)node + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1973, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead == 0)", (const char *)&queryFormat, "node->vAddrOffsetRead == 0") )
      __debugbreak();
    if ( (*((_DWORD *)node + 1) & 0x7800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1974, ASSERT_TYPE_ASSERT, "(node->vAddrEndAlignLog2 == 0)", (const char *)&queryFormat, "node->vAddrEndAlignLog2 == 0") )
      __debugbreak();
    if ( (*(_DWORD *)node & 0x7800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1975, ASSERT_TYPE_ASSERT, "(node->mappedParts == 0)", (const char *)&queryFormat, "node->mappedParts == 0") )
      __debugbreak();
    mHead = this->mAllocations.mHead;
    if ( this->mAllocations.mHead )
    {
      while ( 1 )
      {
        v6 = (int)(*(_DWORD *)mHead << 13) >> 13;
        if ( mHead == node )
          break;
        if ( v6 )
        {
          mHead += v6;
          if ( mHead )
            continue;
        }
        goto LABEL_51;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1977, ASSERT_TYPE_ASSERT, "(!mAllocations.Contains( node ))", (const char *)&queryFormat, "!mAllocations.Contains( node )") )
        __debugbreak();
    }
  }
LABEL_51:
  if ( (*(_DWORD *)node & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1994, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
    __debugbreak();
  RList<StreamDefragAllocNode>::PushFront(&this->mInvalidNodes, node);
  *(_DWORD *)node &= ~0x100000u;
}

/*
==============
StreamDefrag::IsAsyncCopyFinished
==============
*/
int StreamDefrag::IsAsyncCopyFinished(StreamDefrag *this, const GfxBackEndData *data)
{
  StreamDefragCopyMode mCopyMode; 
  unsigned __int64 *p_mDMACopyFence; 
  int v6; 
  unsigned __int64 mGPUCopyFenceCounter; 
  bool v8; 

  mCopyMode = this->mCopyMode;
  if ( mCopyMode == MOVEMENT )
    return 1;
  if ( mCopyMode == 5 )
  {
    p_mDMACopyFence = &this->mDMACopyFence;
    v6 = R_DefragDMACommandListFencePending(&this->mDMACopyFence);
    mGPUCopyFenceCounter = *p_mDMACopyFence;
    v8 = v6 == 0;
  }
  else
  {
    mGPUCopyFenceCounter = this->mGPUCopyFenceCounter;
    v8 = mGPUCopyFenceCounter <= *this->mGPUCopyFenceAddr;
  }
  Stream_Logger_OnCopyFinishedFenceCheck("StreamDefrag::IsAsyncCopyFinished", data, mGPUCopyFenceCounter);
  return v8;
}

/*
==============
StreamDefrag::IsIdle
==============
*/
bool StreamDefrag::IsIdle(StreamDefrag *this)
{
  return !Stream_IsEnabled() || Stream_BackendQueue_IsInForcedFlush() || streamFrontendGlob->levelInit.state != 4;
}

/*
==============
StreamDefrag::IssueCopies
==============
*/
void StreamDefrag::IssueCopies(StreamDefrag *this, GfxCmdBufContext *gfxContext)
{
  RList<StreamNextTailAddress> *mNextTailAddresses; 
  __int64 v5; 
  RList<StreamNextTailAddress> *v6; 
  StreamNextTailAddress *i; 
  __int16 v8; 
  unsigned __int64 *p_mAddrTail; 
  unsigned int v10; 
  __int64 v11; 
  StreamNextTailAddress *mTail; 
  unsigned __int64 vAddrNextTail; 
  StreamNextTailAddress *mHead; 
  __int16 v15; 
  StreamNextTailAddress *v16; 
  __int64 v17; 
  __int64 v18; 
  GfxCmdBufContext v19; 
  __int64 data; 

  StreamDefrag::FlushAsyncVA(this, Block, MapsOnly, 0);
  v19 = *gfxContext;
  StreamDefrag::DefragStep1_IssueCopies(this, &v19);
  if ( this->mAsyncVAProcess && (this->mAsyncVAMaps.mHead || this->mAsyncVAUnmaps.mHead) )
  {
    data = (__int64)this;
    Sys_AddWorkerCmd(WRKCMD_STREAM_DEFRAG_FLUSH_VA, &data);
  }
  StreamDefrag::ValidateRegions(this);
  mNextTailAddresses = this->mNextTailAddresses;
  data = 2i64;
  v5 = 2i64;
  v6 = this->mNextTailAddresses;
  do
  {
    for ( i = v6->mHead; i; i += v8 )
    {
      if ( i->unmapFrame <= this->mDefragFrameIndex )
      {
        LODWORD(v18) = this->mDefragFrameIndex;
        LODWORD(v17) = i->unmapFrame;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3182, ASSERT_TYPE_ASSERT, "( nextTailAddress->unmapFrame ) > ( mDefragFrameIndex )", "%s > %s\n\t%u, %u", "nextTailAddress->unmapFrame", "mDefragFrameIndex", v17, v18) )
          __debugbreak();
      }
      v8 = *((_WORD *)i + 8);
      if ( !v8 )
        break;
    }
    ++v6;
    --v5;
  }
  while ( v5 );
  ++this->mDefragFrameIndex;
  p_mAddrTail = &this->mAddressSpaces[0].mMoveableRegion.mAddrTail;
  v10 = this->mDefragFrameIndex + this->mDefragUnmapFrameDepth;
  v11 = data;
  do
  {
    mTail = mNextTailAddresses->mTail;
    if ( mTail )
    {
      if ( mTail->unmapFrame != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3204, ASSERT_TYPE_ASSERT, "(existingNextTailAddress == nullptr || existingNextTailAddress->unmapFrame == unmapFrame - 1)", (const char *)&queryFormat, "existingNextTailAddress == nullptr || existingNextTailAddress->unmapFrame == unmapFrame - 1") )
        __debugbreak();
      vAddrNextTail = mTail->vAddrNextTail;
    }
    else
    {
      vAddrNextTail = *p_mAddrTail;
    }
    mHead = this->mNextTailAddressPool.mHead;
    if ( mHead )
    {
      v15 = *((_WORD *)mHead + 8);
      if ( v15 )
        v16 = &mHead[v15];
      else
        v16 = NULL;
      this->mNextTailAddressPool.mHead = v16;
      *((_WORD *)mHead + 8) = 0;
    }
    else
    {
      mHead = NULL;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3210, ASSERT_TYPE_ASSERT, "(nextTailAddress)", (const char *)&queryFormat, "nextTailAddress") )
        __debugbreak();
    }
    mHead->vAddrCurTail = vAddrNextTail;
    mHead->vAddrNextTail = vAddrNextTail;
    mHead->unmapFrame = v10 + 1;
    RList<StreamNextTailAddress>::PushBack(mNextTailAddresses, mHead);
    p_mAddrTail += 32;
    ++mNextTailAddresses;
    --v11;
  }
  while ( v11 );
}

/*
==============
StreamDefrag::LockDefrag
==============
*/
char StreamDefrag::LockDefrag(StreamDefrag *this, streamer_handle_t handle)
{
  const dvar_t *v2; 
  FastCriticalSection *p_mDefragLockCriticalSection; 
  char v8; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 

  v2 = DCONST_DVARBOOL_stream_defragAssetLocking;
  if ( !DCONST_DVARBOOL_stream_defragAssetLocking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragAssetLocking") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
    return 0;
  if ( handle.data < (unsigned __int64)this || handle.data >= (unsigned __int64)this->mAddressSpaces )
    handle.data = 0i64;
  if ( !handle.data || !*(_DWORD *)(handle.data + 8) || (*(_DWORD *)(handle.data + 16) & 0xC00000) != 0 || (*(_DWORD *)handle.data & 0x200000) == 0 || StreamDefrag::NeedsVAResize(this, (const StreamDefragAllocNode *)handle.data) )
    return 0;
  p_mDefragLockCriticalSection = &this->mDefragLockCriticalSection;
  if ( this->mDefragLockCriticalSection.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 76, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock. Don't attempt to take a read lock if the calling thread already has the write lock.") )
    __debugbreak();
  if ( ((unsigned __int8)p_mDefragLockCriticalSection & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->mDefragLockCriticalSection) )
    __debugbreak();
  _InterlockedIncrement(&p_mDefragLockCriticalSection->readCount);
  if ( this->mDefragLockCriticalSection.writeCount )
  {
    if ( ((unsigned __int8)p_mDefragLockCriticalSection & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->mDefragLockCriticalSection) )
      __debugbreak();
    _InterlockedDecrement(&p_mDefragLockCriticalSection->readCount);
    return 0;
  }
  Sys_LockWrite(&this->mDefragLockCountCriticalSection);
  v8 = 0;
  if ( (*(_DWORD *)(handle.data + 16) & 0x380000u) < 0x380000 )
  {
    v8 = 1;
    *(_DWORD *)(handle.data + 16) ^= (*(_DWORD *)(handle.data + 16) ^ (*(_DWORD *)(handle.data + 16) + 0x80000)) & 0x380000;
    item = *Stream_Logger_MakeItem(&result, (const StreamDefragAllocNode *)handle.data);
    Stream_Logger_OnDefragLock("StreamDefrag::LockDefrag", NULL, &item);
  }
  Sys_UnlockWrite(&this->mDefragLockCountCriticalSection);
  if ( p_mDefragLockCriticalSection->readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", p_mDefragLockCriticalSection->readCount, 0i64) )
    __debugbreak();
  if ( ((unsigned __int8)p_mDefragLockCriticalSection & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->mDefragLockCriticalSection) )
    __debugbreak();
  _InterlockedDecrement(&p_mDefragLockCriticalSection->readCount);
  return v8;
}

/*
==============
StreamDefrag::LockDefragCount
==============
*/
void StreamDefrag::LockDefragCount(StreamDefrag *this)
{
  Sys_LockWrite(&this->mDefragLockCriticalSection);
  Sys_LockWrite(&this->mDefragLockCountCriticalSection);
}

/*
==============
StreamDefrag::Map
==============
*/
unsigned __int64 StreamDefrag::Map(StreamDefrag *this, StreamDefragCommand *command)
{
  StreamDefragAllocNode *node; 
  char v5; 
  _DWORD *v6; 
  unsigned __int64 v7; 
  unsigned int maxPages; 
  StreamerMemPageCounts reservedPages; 

  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4645, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  if ( !command->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4646, ASSERT_TYPE_ASSERT, "(command->node)", (const char *)&queryFormat, "command->node") )
    __debugbreak();
  maxPages = 0;
  Command_MaxPageCount(command, &maxPages);
  node = command->node;
  v5 = *((_BYTE *)command + 55);
  reservedPages = 0i64;
  v6 = (_DWORD *)&reservedPages + ((*(_DWORD *)node >> 19) & 1);
  *v6 += maxPages;
  v7 = StreamDefrag::CommitParts(this, command, *((unsigned int *)node + 3), v5 & 0xF, &reservedPages);
  StreamDefrag::AddPagesToDefragPageSurplus(this, &reservedPages);
  return v7;
}

/*
==============
StreamDefrag::MapAsync
==============
*/
char StreamDefrag::MapAsync(StreamDefrag *this, StreamDefragCommand *command)
{
  const dvar_t *v4; 
  StreamDefragCommand *v5; 

  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4595, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  if ( !command->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4596, ASSERT_TYPE_ASSERT, "(command->node)", (const char *)&queryFormat, "command->node") )
    __debugbreak();
  Stream_Defrag_CheckLocks(this, command);
  StreamDefrag::TrackCommitParts(this, command, *((unsigned int *)command->node + 3), *((_BYTE *)command + 55) & 0xF);
  v4 = DCONST_DVARBOOL_stream_defragAsyncMapping;
  if ( !DCONST_DVARBOOL_stream_defragAsyncMapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragAsyncMapping") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && Stream_IsEnabled() && !Stream_BackendQueue_IsInForcedFlush() && streamFrontendGlob->levelInit.state == 4 && (v5 = RStackThreadSafe<StreamDefragCommand>::Pop(&this->mDefragPool)) != NULL )
  {
    *(__m256i *)&v5->node = *(__m256i *)&command->node;
    *(_OWORD *)&v5->partOffset[2] = *(_OWORD *)&command->partOffset[2];
    *((double *)v5 + 6) = *((double *)command + 6);
    RStackThreadSafe<StreamDefragCommand>::Push(&this->mAsyncVAMaps, v5);
    return 0;
  }
  else
  {
    if ( this->mAsyncVAMaps.mHead || this->mAsyncVAUnmaps.mHead )
      StreamDefrag::FlushAsyncVA(this, Block, MapsAndUnmaps, 0);
    StreamDefrag::Map(this, command);
    return 1;
  }
}

/*
==============
StreamDefragRegion<1>::MoveTailAddressForward
==============
*/
void StreamDefragRegion<1>::MoveTailAddressForward(StreamDefragRegion<1> *this, unsigned __int64 newTailAddr)
{
  unsigned __int64 mAddrTail; 
  unsigned __int64 v3; 
  unsigned __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 mAddrHead; 
  __int64 v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned __int64 v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  unsigned __int64 v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned __int64 v29; 
  __int64 v30; 
  unsigned __int64 v31; 
  StreamDefragAllocNode *mTail; 
  bool v33; 
  __int64 MaxVaSize; 
  __int64 VaSizeForParts; 
  unsigned __int8 *v36; 
  unsigned __int64 v37; 
  unsigned __int8 *v38; 
  unsigned __int64 v39; 
  __int64 v40; 
  const StreamDefragAllocNode *v41; 
  __int64 v42; 
  __int64 v43; 
  const unsigned __int8 *v44; 
  unsigned __int64 v45; 
  unsigned __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  unsigned __int64 v49; 

  mAddrTail = this->mAddrTail;
  v3 = newTailAddr;
  if ( mAddrTail == newTailAddr )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2020, ASSERT_TYPE_ASSERT, "( mAddrTail ) != ( newTailAddr )", "%s != %s\n\t%u, %u", "mAddrTail", "newTailAddr", mAddrTail, newTailAddr) )
      __debugbreak();
    v3 = newTailAddr;
  }
  if ( v3 < this->mAddrBase )
  {
    LODWORD(v48) = this->mAddrBase;
    LODWORD(v47) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2021, ASSERT_TYPE_ASSERT, "( newTailAddr ) >= ( mAddrBase )", "%s >= %s\n\t%u, %u", "newTailAddr", "mAddrBase", v47, v48) )
      __debugbreak();
    v3 = newTailAddr;
  }
  if ( v3 > this->mAddrEnd )
  {
    LODWORD(v48) = this->mAddrEnd;
    LODWORD(v47) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2022, ASSERT_TYPE_ASSERT, "( newTailAddr ) <= ( mAddrEnd )", "%s <= %s\n\t%u, %u", "newTailAddr", "mAddrEnd", v47, v48) )
      __debugbreak();
    v3 = newTailAddr;
  }
  v5 = this->mAddrTail;
  if ( (v5 < this->mAddrBase || v5 > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1143, ASSERT_TYPE_ASSERT, "(a >= mAddrBase && a <= mAddrEnd)", (const char *)&queryFormat, "a >= mAddrBase && a <= mAddrEnd") )
    __debugbreak();
  if ( (v3 < this->mAddrBase || v3 > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1144, ASSERT_TYPE_ASSERT, "(b >= mAddrBase && b <= mAddrEnd)", (const char *)&queryFormat, "b >= mAddrBase && b <= mAddrEnd") )
    __debugbreak();
  v6 = truncate_cast<__int64,unsigned __int64>(v5 - this->mAddrBase);
  v7 = truncate_cast<__int64,unsigned __int64>(v3 - this->mAddrBase);
  v8 = this->mAddrEnd - this->mAddrBase;
  v9 = v7 - v6;
  if ( v9 < 0 )
    v9 += v8;
  v10 = truncate_cast<unsigned __int64,__int64>(v9 % v8);
  v11 = this->mAddrTail;
  v12 = v10;
  mAddrHead = this->mAddrHead;
  if ( (v11 < this->mAddrBase || v11 > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1143, ASSERT_TYPE_ASSERT, "(a >= mAddrBase && a <= mAddrEnd)", (const char *)&queryFormat, "a >= mAddrBase && a <= mAddrEnd") )
    __debugbreak();
  if ( (mAddrHead < this->mAddrBase || mAddrHead > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1144, ASSERT_TYPE_ASSERT, "(b >= mAddrBase && b <= mAddrEnd)", (const char *)&queryFormat, "b >= mAddrBase && b <= mAddrEnd") )
    __debugbreak();
  v14 = truncate_cast<__int64,unsigned __int64>(v11 - this->mAddrBase);
  v15 = truncate_cast<__int64,unsigned __int64>(mAddrHead - this->mAddrBase);
  v16 = this->mAddrEnd - this->mAddrBase;
  v17 = v15 - v14;
  if ( v17 < 0 )
    v17 += v16;
  if ( v12 > truncate_cast<unsigned __int64,__int64>(v17 % v16) )
  {
    v18 = this->mAddrTail;
    v19 = this->mAddrHead;
    if ( (v18 < this->mAddrBase || v18 > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1143, ASSERT_TYPE_ASSERT, "(a >= mAddrBase && a <= mAddrEnd)", (const char *)&queryFormat, "a >= mAddrBase && a <= mAddrEnd") )
      __debugbreak();
    if ( (v19 < this->mAddrBase || v19 > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1144, ASSERT_TYPE_ASSERT, "(b >= mAddrBase && b <= mAddrEnd)", (const char *)&queryFormat, "b >= mAddrBase && b <= mAddrEnd") )
      __debugbreak();
    v20 = truncate_cast<__int64,unsigned __int64>(v18 - this->mAddrBase);
    v21 = truncate_cast<__int64,unsigned __int64>(v19 - this->mAddrBase);
    v22 = this->mAddrEnd - this->mAddrBase;
    v23 = v21 - v20;
    if ( v23 < 0 )
      v23 += v22;
    v24 = truncate_cast<unsigned __int64,__int64>(v23 % v22);
    v25 = this->mAddrTail;
    v26 = v24;
    if ( (v25 < this->mAddrBase || v25 > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1143, ASSERT_TYPE_ASSERT, "(a >= mAddrBase && a <= mAddrEnd)", (const char *)&queryFormat, "a >= mAddrBase && a <= mAddrEnd") )
      __debugbreak();
    if ( (newTailAddr < this->mAddrBase || newTailAddr > this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1144, ASSERT_TYPE_ASSERT, "(b >= mAddrBase && b <= mAddrEnd)", (const char *)&queryFormat, "b >= mAddrBase && b <= mAddrEnd") )
      __debugbreak();
    v27 = truncate_cast<__int64,unsigned __int64>(v25 - this->mAddrBase);
    v28 = truncate_cast<__int64,unsigned __int64>(newTailAddr - this->mAddrBase);
    v29 = this->mAddrEnd - this->mAddrBase;
    v30 = v28 - v27;
    if ( v30 < 0 )
      v30 += v29;
    v31 = truncate_cast<unsigned __int64,__int64>(v30 % v29);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2023, ASSERT_TYPE_ASSERT, "( CircularAddressDistance( mAddrTail, newTailAddr ) ) <= ( CircularAddressDistance( mAddrTail, mAddrHead ) )", "%s <= %s\n\t%llx, %llx", "CircularAddressDistance( mAddrTail, newTailAddr )", "CircularAddressDistance( mAddrTail, mAddrHead )", v31, v26) )
      __debugbreak();
  }
  mTail = this->mAllocations.mTail;
  if ( !mTail )
  {
    if ( newTailAddr == this->mAddrHead )
      goto LABEL_70;
    v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2030, ASSERT_TYPE_ASSERT, "( newTailAddr ) == ( mAddrHead )", "%s == %s\n\t%llx, %llx", "newTailAddr", "mAddrHead", newTailAddr, this->mAddrHead);
    goto LABEL_68;
  }
  if ( (*((_DWORD *)mTail + 4) & 0x7FFFF) != 0 )
  {
    if ( newTailAddr != this->mAddrHead )
      goto LABEL_70;
    v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2053, ASSERT_TYPE_ASSERT, "( newTailAddr ) != ( mAddrHead )", "%s != %s\n\t%llx, %llx", "newTailAddr", "mAddrHead", newTailAddr, this->mAddrHead);
    goto LABEL_68;
  }
  MaxVaSize = NodeGetMaxVaSize(this->mAllocations.mTail);
  VaSizeForParts = NodeGetVaSizeForParts(mTail, (*((_DWORD *)mTail + 1) >> 20) & 7);
  v36 = StrmOffsetToAddress(this->mPool, *((unsigned int *)mTail + 3));
  v37 = newTailAddr;
  v38 = &v36[MaxVaSize - VaSizeForParts];
  if ( (unsigned __int8 *)newTailAddr != v38 )
  {
    if ( newTailAddr != this->mAddrHead )
    {
      Stream_Logger_Dump((const unsigned __int8 *)newTailAddr);
      v37 = newTailAddr;
    }
    if ( (unsigned __int8 *)v37 != v38 && v37 != this->mAddrHead )
    {
      v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2049, ASSERT_TYPE_ASSERT, "(newTailAddr == headNodeAddrBegin || newTailAddr == mAddrHead)", (const char *)&queryFormat, "newTailAddr == headNodeAddrBegin || newTailAddr == mAddrHead");
LABEL_68:
      if ( v33 )
        __debugbreak();
    }
  }
LABEL_70:
  v39 = 0i64;
  v49 = 0i64;
  do
  {
    v40 = *(__int64 *)((char *)&(*this->mDefragSteps)[0].mHead + v39);
    if ( v40 )
    {
      do
      {
        v41 = *(const StreamDefragAllocNode **)v40;
        if ( this->mPool == ((**(_DWORD **)v40 >> 19) & 1) )
        {
          v42 = NodeGetMaxVaSize(*(const StreamDefragAllocNode **)v40);
          v43 = NodeGetVaSizeForParts(v41, (*(_DWORD *)(v40 + 52) >> 11) & 7);
          v44 = &StrmOffsetToAddress(this->mPool, *(unsigned int *)(v40 + 44))[v42 - v43];
          v45 = StreamDefragRegion<1>::CircularAddressDistance(this, newTailAddr, (unsigned __int64)v44);
          v46 = StreamDefragRegion<1>::CircularAddressDistance(this, newTailAddr, this->mAddrHead);
          if ( v45 >= v46 )
          {
            Stream_Logger_Dump(v44);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2078, ASSERT_TYPE_ASSERT, "( distNewTailToUnmap ) < ( distNewTailToHead )", "%s < %s\n\t%llx, %llx", "distNewTailToUnmap", "distNewTailToHead", v45, v46) )
              __debugbreak();
          }
        }
        if ( !(*(_DWORD *)(v40 + 52) << 21) )
          break;
        v40 += 56 * ((__int64)(int)(*(_DWORD *)(v40 + 52) << 21) >> 21);
      }
      while ( v40 );
      v39 = v49;
    }
    v39 += 16i64;
    v49 = v39;
  }
  while ( v39 < 0x30 );
  this->mAddrTail = newTailAddr;
}

/*
==============
StreamDefrag::NeedsVAResize
==============
*/
char StreamDefrag::NeedsVAResize(StreamDefrag *this, const StreamDefragAllocNode *node)
{
  __m256i v4; 
  const dvar_t *v6; 
  bool v7; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  bool v11; 
  const dvar_t *v12; 
  int v15; 
  StreamDefragCommand command; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4245, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !NodeIsValid(node) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4246, ASSERT_TYPE_ASSERT, "(NodeIsValid( node ))", (const char *)&queryFormat, "NodeIsValid( node )") )
    __debugbreak();
  if ( (*(_DWORD *)node & 0x200000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4247, ASSERT_TYPE_ASSERT, "(node->moveable)", (const char *)&queryFormat, "node->moveable") )
    __debugbreak();
  if ( (*((_BYTE *)node + 4) & 3) != 0 )
    return 0;
  v6 = DCONST_DVARBOOL_stream_concurrentImagePartLoading;
  if ( !DCONST_DVARBOOL_stream_concurrentImagePartLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_concurrentImagePartLoading") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    v7 = ((*((_DWORD *)node + 1) >> 20) & 7u) < DB_GetGfxImageAtIndex((*((_DWORD *)node + 1) >> 2) & 0x3FFFF)->streamedPartCount;
  }
  else
  {
    v8 = (*(_DWORD *)node >> 23) & 0xF;
    v9 = 32 - __lzcnt(v8);
    v10 = __popcnt(v8);
    if ( v9 != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4276, ASSERT_TYPE_ASSERT, "( highestMappedPartCount ) == ( static_cast<uint>( CountBitsGeneric( node->mappedParts ) ) )", "%s == %s\n\t%u, %u", "highestMappedPartCount", "static_cast<uint>( CountBitsGeneric( node->mappedParts ) )", v9, v10) )
      __debugbreak();
    v7 = ((*((_DWORD *)node + 1) >> 20) & 7u) < v9;
  }
  v11 = v7;
  if ( !v7 )
  {
    v12 = DCONST_DVARBOOL_stream_defragAlwaysVAResizeImages;
    if ( !DCONST_DVARBOOL_stream_defragAlwaysVAResizeImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragAlwaysVAResizeImages") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled && (*(_DWORD *)node & 0x400000) == 0 )
    {
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vpxor   xmm1, xmm1, xmm1
      }
      command.node = (StreamDefragAllocNode *)node;
      *(__m256i *)command.partSize = v4;
      *(_OWORD *)&command.unmapFrame = _XMM1;
      CommandSetPartInfo(&command);
      v15 = HIBYTE(*((_DWORD *)&command + 13)) & 0xF;
      if ( v15 == ((*(_DWORD *)node >> 23) & 0xF) && v15 == ((*(_DWORD *)node >> 27) & 0xF) )
        return 1;
    }
  }
  return v11;
}

/*
==============
NodeGetMaxVaSize
==============
*/
__int64 NodeGetMaxVaSize(const StreamDefragAllocNode *node)
{
  unsigned int v2; 
  XModelSurfs *XModelSurfsAtIndex; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 829, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !NodeIsValid(node) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 830, ASSERT_TYPE_ASSERT, "(NodeIsValid( node ))", (const char *)&queryFormat, "NodeIsValid( node )") )
    __debugbreak();
  v2 = *((_DWORD *)node + 1);
  if ( (v2 & 3) == 0 )
    return DB_GetGfxImageAtIndex((v2 >> 2) & 0x3FFFF)->totalSize;
  if ( (*((_DWORD *)node + 1) & 3) == 1 )
  {
    XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex((v2 >> 2) & 0x3FFFF);
    if ( !XModelSurfsAtIndex->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 842, ASSERT_TYPE_ASSERT, "(mesh->shared)", (const char *)&queryFormat, "mesh->shared") )
      __debugbreak();
    return XModelSurfsAtIndex->shared->dataSize;
  }
  else if ( (*((_DWORD *)node + 1) & 3) == 2 )
  {
    return DB_GetStreamKeyAtIndex((v2 >> 2) & 0x3FFFF)->dataSize;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 851, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
NodeGetNextTailAddress
==============
*/
unsigned __int8 *NodeGetNextTailAddress(const StreamDefragAllocNode *node, StreamMemPool pool, unsigned __int64 nextTailAddr)
{
  __int64 MaxVaSize; 
  __int64 VaSizeForParts; 
  unsigned __int8 *v8; 
  int v9; 
  const StreamDefragAllocNode *v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned __int8 *v13; 
  bool v14; 
  __int64 v16; 
  unsigned __int64 v17; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 940, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !NodeIsValid(node) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 941, ASSERT_TYPE_ASSERT, "(NodeIsValid( node ))", (const char *)&queryFormat, "NodeIsValid( node )") )
    __debugbreak();
  if ( *((_DWORD *)node + 2) != *((_DWORD *)node + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 942, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead == node->vAddrOffsetWrite)", (const char *)&queryFormat, "node->vAddrOffsetRead == node->vAddrOffsetWrite") )
    __debugbreak();
  MaxVaSize = (unsigned int)NodeGetMaxVaSize(node);
  VaSizeForParts = NodeGetVaSizeForParts(node, (*((_DWORD *)node + 1) >> 20) & 7);
  v8 = &StrmOffsetToAddress(pool, *((unsigned int *)node + 2))[MaxVaSize - VaSizeForParts];
  v9 = *(_DWORD *)node << 13;
  if ( v9 )
  {
    v10 = &node[(__int64)v9 >> 13];
    if ( !NodeIsValid(v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 955, ASSERT_TYPE_ASSERT, "(NodeIsValid( nextNode ))", (const char *)&queryFormat, "NodeIsValid( nextNode )") )
      __debugbreak();
    if ( *((_DWORD *)v10 + 2) == *((_DWORD *)v10 + 3) )
    {
      v11 = NodeGetMaxVaSize(v10);
      v12 = NodeGetVaSizeForParts(v10, (*((_DWORD *)v10 + 1) >> 20) & 7);
      v13 = &StrmOffsetToAddress(pool, *((unsigned int *)v10 + 2))[v11 - v12];
      if ( nextTailAddr )
      {
        if ( v13 >= v8 )
        {
          if ( (unsigned __int64)v13 < nextTailAddr )
          {
            v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 972, ASSERT_TYPE_ASSERT, "( addrNextBegin ) >= ( nextTailAddr )", "%s >= %s\n\t%llx, %llx", "addrNextBegin", "nextTailAddr", v13, nextTailAddr);
LABEL_21:
            if ( v14 )
              __debugbreak();
          }
        }
        else if ( (unsigned __int64)v13 >= nextTailAddr )
        {
          v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 968, ASSERT_TYPE_ASSERT, "( addrNextBegin ) < ( nextTailAddr )", "%s < %s\n\t%llx, %llx", "addrNextBegin", "nextTailAddr", v13, nextTailAddr);
          goto LABEL_21;
        }
      }
      return v13;
    }
  }
  if ( (*((_DWORD *)node + 1) & 0x7800000) != 0 )
    v16 = BitDecodeAlignment((*((_DWORD *)node + 1) >> 23) & 0xF);
  else
    v16 = 16i64;
  v17 = AlignUp<unsigned __int64>((unsigned __int64)&v8[VaSizeForParts], v16);
  if ( v17 < nextTailAddr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 985, ASSERT_TYPE_ASSERT, "(addrEnd >= nextTailAddr)", (const char *)&queryFormat, "addrEnd >= nextTailAddr") )
    __debugbreak();
  return (unsigned __int8 *)v17;
}

/*
==============
NodeGetPartSizeAndOffset
==============
*/
void NodeGetPartSizeAndOffset(const StreamDefragAllocNode *node, unsigned int partIndex, unsigned int *outPartSize, unsigned int *outPartOffset)
{
  XModelSurfs *XModelSurfsAtIndex; 
  GfxImage *GfxImageAtIndex; 
  __int64 v10; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 860, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !NodeIsValid(node) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 861, ASSERT_TYPE_ASSERT, "(NodeIsValid( node ))", (const char *)&queryFormat, "NodeIsValid( node )") )
    __debugbreak();
  if ( (*((_DWORD *)node + 1) & 3) != 0 )
  {
    if ( (*((_DWORD *)node + 1) & 3) == 1 )
    {
      if ( partIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 875, ASSERT_TYPE_ASSERT, "( partIndex ) == ( 0 )", "%s == %s\n\t%u, %u", "partIndex", "0", partIndex, 0i64) )
        __debugbreak();
      XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex((*((_DWORD *)node + 1) >> 2) & 0x3FFFF);
      if ( !XModelSurfsAtIndex->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 877, ASSERT_TYPE_ASSERT, "(mesh->shared)", (const char *)&queryFormat, "mesh->shared") )
        __debugbreak();
      *outPartSize = XModelSurfsAtIndex->shared->dataSize;
      *outPartOffset = 0;
    }
    else if ( (*((_DWORD *)node + 1) & 3) == 2 )
    {
      if ( partIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 884, ASSERT_TYPE_ASSERT, "( partIndex ) == ( 0 )", "%s == %s\n\t%u, %u", "partIndex", "0", partIndex, 0i64) )
        __debugbreak();
      *outPartSize = DB_GetStreamKeyAtIndex((*((_DWORD *)node + 1) >> 2) & 0x3FFFF)->dataSize;
      *outPartOffset = 0;
    }
    else
    {
      *outPartSize = 0;
      *outPartOffset = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 893, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
        __debugbreak();
    }
  }
  else
  {
    GfxImageAtIndex = DB_GetGfxImageAtIndex((*((_DWORD *)node + 1) >> 2) & 0x3FFFF);
    if ( partIndex >= GfxImageAtIndex->streamedPartCount )
    {
      LODWORD(v10) = partIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 868, ASSERT_TYPE_ASSERT, "(unsigned)( partIndex ) < (unsigned)( image->streamedPartCount )", "partIndex doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v10, GfxImageAtIndex->streamedPartCount) )
        __debugbreak();
    }
    *outPartSize = Image_ExclusivePartSize(GfxImageAtIndex, partIndex);
    *outPartOffset = Image_PartOffset(GfxImageAtIndex, partIndex);
  }
}

/*
==============
NodeGetVaSizeForParts
==============
*/
unsigned int NodeGetVaSizeForParts(const StreamDefragAllocNode *node, unsigned int partCount)
{
  XModelSurfs *XModelSurfsAtIndex; 
  GfxImage *GfxImageAtIndex; 
  __int64 v7; 
  __int64 v8; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 900, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !NodeIsValid(node) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 901, ASSERT_TYPE_ASSERT, "(NodeIsValid( node ))", (const char *)&queryFormat, "NodeIsValid( node )") )
    __debugbreak();
  if ( partCount > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 902, ASSERT_TYPE_ASSERT, "( partCount ) <= ( MAX_PART_COUNT )", "%s <= %s\n\t%u, %u", "partCount", "MAX_PART_COUNT", partCount, 4) )
    __debugbreak();
  if ( !partCount )
    return 0;
  if ( (*((_DWORD *)node + 1) & 3) != 0 )
  {
    if ( (*((_DWORD *)node + 1) & 3) == 1 )
    {
      if ( partCount != 1 )
      {
        LODWORD(v8) = 1;
        LODWORD(v7) = partCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 919, ASSERT_TYPE_ASSERT, "( partCount ) == ( 1 )", "%s == %s\n\t%u, %u", "partCount", "1", v7, v8) )
          __debugbreak();
      }
      XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex((*((_DWORD *)node + 1) >> 2) & 0x3FFFF);
      if ( !XModelSurfsAtIndex->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 921, ASSERT_TYPE_ASSERT, "(mesh->shared)", (const char *)&queryFormat, "mesh->shared") )
        __debugbreak();
      return XModelSurfsAtIndex->shared->dataSize;
    }
    else
    {
      if ( (*((_DWORD *)node + 1) & 3) != 2 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 931, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
          __debugbreak();
        return 0;
      }
      if ( partCount != 1 )
      {
        LODWORD(v8) = 1;
        LODWORD(v7) = partCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 926, ASSERT_TYPE_ASSERT, "( partCount ) == ( 1 )", "%s == %s\n\t%u, %u", "partCount", "1", v7, v8) )
          __debugbreak();
      }
      return DB_GetStreamKeyAtIndex((*((_DWORD *)node + 1) >> 2) & 0x3FFFF)->dataSize;
    }
  }
  else
  {
    GfxImageAtIndex = DB_GetGfxImageAtIndex((*((_DWORD *)node + 1) >> 2) & 0x3FFFF);
    if ( partCount > GfxImageAtIndex->streamedPartCount )
    {
      LODWORD(v8) = GfxImageAtIndex->streamedPartCount;
      LODWORD(v7) = partCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 914, ASSERT_TYPE_ASSERT, "( partCount ) <= ( image->streamedPartCount )", "%s <= %s\n\t%u, %u", "partCount", "image->streamedPartCount", v7, v8) )
        __debugbreak();
    }
    return Image_InclusivePartSize(GfxImageAtIndex, partCount - 1);
  }
}

/*
==============
NodeIsValid
==============
*/
bool NodeIsValid(const StreamDefragAllocNode *node)
{
  unsigned int v2; 
  int v3; 
  int v4; 
  int v5; 
  XSurfaceShared *shared; 

  if ( (*(_DWORD *)node & 0x100000) == 0 )
    return 0;
  v2 = *((_DWORD *)node + 1);
  v3 = (v2 >> 2) & 0x3FFFF;
  v4 = v2 & 3;
  if ( !v4 )
    return DB_GetGfxImageAtIndex(v3)->pixels.streamedDataHandle.data == (_QWORD)node;
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 819, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
        __debugbreak();
      return 0;
    }
    return DB_GetStreamKeyAtIndex(v3)->data.dataHandle.data == (_QWORD)node;
  }
  else
  {
    shared = DB_GetXModelSurfsAtIndex(v3)->shared;
    if ( !shared )
      return 0;
    return shared->data.streamedDataHandle.data == (_QWORD)node;
  }
}

/*
==============
Node_PtrFixup
==============
*/
void Node_PtrFixup(const GfxBackEndData *data, StreamDefragAllocNode *node, bool newAlloc)
{
  unsigned int v6; 
  XModelSurfs *XModelSurfsAtIndex; 
  GfxImage *GfxImageAtIndex; 
  const GfxImage *v9; 
  unsigned int v10; 
  GfxImage *v11; 
  unsigned int i; 
  int v13; 
  Stream_Logger_Item item; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 463, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v6 = *((_DWORD *)node + 1);
  if ( (v6 & 3) != 0 )
  {
    if ( (*((_DWORD *)node + 1) & 3) == 1 )
    {
      XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex((v6 >> 2) & 0x3FFFF);
      XModelSurfsAtIndex->shared->data.streamedDataHandle.data = (unsigned __int64)node;
      XSurfaceShared_PtrFixup(XModelSurfsAtIndex->shared);
      item.m_type = STREAM_ITEM_MESH;
    }
    else
    {
      if ( (*((_DWORD *)node + 1) & 3) != 2 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 516, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
          __debugbreak();
        return;
      }
      XModelSurfsAtIndex = (XModelSurfs *)DB_GetStreamKeyAtIndex((v6 >> 2) & 0x3FFFF);
      *((_QWORD *)&XModelSurfsAtIndex->xpakEntry + 3) = node;
      if ( newAlloc )
        StreamKey_UserPtrFixupNewBackend((const StreamKey *)XModelSurfsAtIndex);
      else
        StreamKey_UserPtrFixupRelocateBackend((const StreamKey *)XModelSurfsAtIndex);
      item.m_type = STREAM_ITEM_GENERIC;
    }
    item.m_image = (const GfxImage *)XModelSurfsAtIndex;
    Stream_Logger_OnPatchDescriptor("Node_PtrFixup", data, &item, 0, -1);
    return;
  }
  GfxImageAtIndex = DB_GetGfxImageAtIndex((v6 >> 2) & 0x3FFFF);
  v9 = GfxImageAtIndex;
  GfxImageAtIndex->pixels.streamedDataHandle.data = (unsigned __int64)node;
  if ( !newAlloc && !RB_Texture_HasStreamedFallbackAssigned(data, GfxImageAtIndex->textureId) )
  {
    if ( (*(_DWORD *)node & 0x100000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 434, ASSERT_TYPE_ASSERT, "(node->valid)", (const char *)&queryFormat, "node->valid") )
      __debugbreak();
    if ( (*((_BYTE *)node + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 435, ASSERT_TYPE_ASSERT, "(node->assetType == STREAM_ITEM_IMAGE)", (const char *)&queryFormat, "node->assetType == STREAM_ITEM_IMAGE") )
      __debugbreak();
    if ( (*(_DWORD *)node & 0x78000000) != 0 )
    {
      v10 = 0;
      v11 = DB_GetGfxImageAtIndex((*((_DWORD *)node + 1) >> 2) & 0x3FFFF);
      for ( i = 0; i < v11->streamedPartCount; v10 = i++ )
      {
        if ( (((unsigned __int64)*(_DWORD *)node >> 27) & (unsigned __int8)(1i64 << i) & 0xF) == 0 )
          break;
      }
      v13 = v11->levelCount - (v11->streams[v10].levelCountAndSize & 0xF);
    }
    else
    {
      v13 = 0;
    }
    RB_Texture_FixupStreamedPixelsPtr(data, v9, v13);
    Stream_BackendQueue_QueueCopyTextureDesc(data, v9);
    item.m_type = STREAM_ITEM_IMAGE;
    item.m_image = v9;
    Stream_Logger_OnPatchDescriptor("Node_PtrFixup", data, &item, 0, v13);
  }
}

/*
==============
StreamDefrag::OnBackendQueueUpdate
==============
*/
void StreamDefrag::OnBackendQueueUpdate(StreamDefrag *this, __int64 a2)
{
  Stream_Defrag_CheckLocks(this, a2);
  if ( this->mFrameOpen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3262, ASSERT_TYPE_ASSERT, "(!mFrameOpen)", (const char *)&queryFormat, "!mFrameOpen") )
    __debugbreak();
  if ( this->mDefragSteps[1].mTail )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3263, ASSERT_TYPE_ASSERT, "(DefragStepCommands( StreamDefragStep::PTR_FIXUP ).Empty())", (const char *)&queryFormat, "DefragStepCommands( StreamDefragStep::PTR_FIXUP ).Empty()") )
      __debugbreak();
  }
}

/*
==============
StreamDefragRegion<1>::OnCommit
==============
*/
void StreamDefragRegion<1>::OnCommit(StreamDefragRegion<1> *this, const unsigned __int8 *start, const unsigned __int8 *end)
{
  unsigned __int64 mVaSizeCommitted; 

  StreamDefragRegion<1>::AssertValidAddressRange(this, start, end);
  this->mVaSizeCommitted += truncate_cast<unsigned __int64,__int64>(end - start);
  mVaSizeCommitted = this->mVaSizeCommitted;
  if ( mVaSizeCommitted > this->mVaSizeUsed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2108, ASSERT_TYPE_ASSERT, "( mVaSizeCommitted ) <= ( mVaSizeUsed )", "%s <= %s\n\t%zu, %zu", "mVaSizeCommitted", "mVaSizeUsed", mVaSizeCommitted, this->mVaSizeUsed) )
    __debugbreak();
}

/*
==============
StreamDefragRegion<1>::OnDecommit
==============
*/
void StreamDefragRegion<1>::OnDecommit(StreamDefragRegion<1> *this, const unsigned __int8 *start, const unsigned __int8 *end)
{
  unsigned __int64 v6; 
  unsigned __int64 mVaSizeCommitted; 
  unsigned __int64 v8; 

  StreamDefragRegion<1>::AssertValidAddressRange(this, start, end);
  v6 = truncate_cast<unsigned __int64,__int64>(end - start);
  mVaSizeCommitted = this->mVaSizeCommitted;
  if ( mVaSizeCommitted < v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2115, ASSERT_TYPE_ASSERT, "( mVaSizeCommitted ) >= ( size )", "%s >= %s\n\t%zu, %zu", "mVaSizeCommitted", "size", mVaSizeCommitted, v6) )
    __debugbreak();
  this->mVaSizeCommitted -= v6;
  v8 = this->mVaSizeCommitted;
  if ( v8 > this->mVaSizeUsed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2117, ASSERT_TYPE_ASSERT, "( mVaSizeCommitted ) <= ( mVaSizeUsed )", "%s <= %s\n\t%zu, %zu", "mVaSizeCommitted", "mVaSizeUsed", v8, this->mVaSizeUsed) )
    __debugbreak();
}

/*
==============
StreamDefragRegion<0>::OnDecommit
==============
*/
void StreamDefragRegion<0>::OnDecommit(StreamDefragRegion<0> *this, const unsigned __int8 *start, const unsigned __int8 *end)
{
  unsigned __int64 v6; 
  unsigned __int64 mVaSizeCommitted; 
  unsigned __int64 v8; 

  StreamDefragRegion<0>::AssertValidAddressRange(this, start, end);
  v6 = truncate_cast<unsigned __int64,__int64>(end - start);
  mVaSizeCommitted = this->mVaSizeCommitted;
  if ( mVaSizeCommitted < v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2115, ASSERT_TYPE_ASSERT, "( mVaSizeCommitted ) >= ( size )", "%s >= %s\n\t%zu, %zu", "mVaSizeCommitted", "size", mVaSizeCommitted, v6) )
    __debugbreak();
  this->mVaSizeCommitted -= v6;
  v8 = this->mVaSizeCommitted;
  if ( v8 > this->mVaSizeUsed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2117, ASSERT_TYPE_ASSERT, "( mVaSizeCommitted ) <= ( mVaSizeUsed )", "%s <= %s\n\t%zu, %zu", "mVaSizeCommitted", "mVaSizeUsed", v8, this->mVaSizeUsed) )
    __debugbreak();
}

/*
==============
StreamDefragRegion<1>::OnDefragCopyDone
==============
*/
void StreamDefragRegion<1>::OnDefragCopyDone(StreamDefragRegion<1> *this)
{
  if ( this->mDefragInFlightCopyCount )
  {
    --this->mDefragInFlightCopyCount;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2010, ASSERT_TYPE_ASSERT, "(mDefragInFlightCopyCount > 0)", (const char *)&queryFormat, "mDefragInFlightCopyCount > 0") )
      __debugbreak();
    --this->mDefragInFlightCopyCount;
  }
}

/*
==============
StreamDefragRegion<1>::OnDefragMoveDone
==============
*/
void StreamDefragRegion<1>::OnDefragMoveDone(StreamDefragRegion<1> *this)
{
  if ( this->mDefragInFlightNodeCount )
  {
    --this->mDefragInFlightNodeCount;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2003, ASSERT_TYPE_ASSERT, "(mDefragInFlightNodeCount > 0)", (const char *)&queryFormat, "mDefragInFlightNodeCount > 0") )
      __debugbreak();
    --this->mDefragInFlightNodeCount;
  }
}

/*
==============
StreamDefrag::OnLoadItem
==============
*/
void StreamDefrag::OnLoadItem(StreamDefrag *this, __int64 itemType, unsigned int itemPartIndex, streamer_handle_t handle)
{
  char v6; 
  bool v8; 
  char v9; 
  int v10; 
  unsigned int v11; 
  __int64 v12; 

  v6 = itemType;
  Stream_Defrag_CheckLocks(this, itemType);
  v8 = handle.data >= (unsigned __int64)this && handle.data < (unsigned __int64)this->mAddressSpaces;
  v9 = 0;
  if ( !v8 )
    handle.data = 0i64;
  if ( !handle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3272, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !NodeIsValid((const StreamDefragAllocNode *)handle.data) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3273, ASSERT_TYPE_ASSERT, "(NodeIsValid( node ))", (const char *)&queryFormat, "NodeIsValid( node )") )
    __debugbreak();
  if ( (*(_BYTE *)(handle.data + 4) & 3) != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3274, ASSERT_TYPE_ASSERT, "(node->assetType == itemType)", (const char *)&queryFormat, "node->assetType == itemType") )
    __debugbreak();
  v10 = (*(_DWORD *)(handle.data + 4) >> 2) & 0x3FFFF;
  if ( v6 )
  {
    if ( v10 != itemPartIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3289, ASSERT_TYPE_ASSERT, "(node->assetIndex == itemPartIndex)", (const char *)&queryFormat, "node->assetIndex == itemPartIndex") )
      __debugbreak();
    if ( ((*(_DWORD *)handle.data >> 27) & 0xF) != 0 )
    {
      LODWORD(v12) = (*(_DWORD *)handle.data >> 27) & 0xF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3290, ASSERT_TYPE_ASSERT, "( ( node->inuseParts == 0 ) )", "( node->inuseParts ) = %u", v12) )
        __debugbreak();
    }
    v11 = *(_DWORD *)handle.data & 0x87FFFFFF | 0x8000000;
  }
  else
  {
    if ( v10 != itemPartIndex >> 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3280, ASSERT_TYPE_ASSERT, "(node->assetIndex == itemPartIndex / IMAGE_STREAM_COUNT)", (const char *)&queryFormat, "node->assetIndex == itemPartIndex / IMAGE_STREAM_COUNT") )
      __debugbreak();
    v9 = itemPartIndex & 3;
    if ( ((unsigned __int8)(1i64 << (itemPartIndex & 3)) & ((unsigned __int64)*(unsigned int *)handle.data >> 27) & 0xF) != 0 )
    {
      LODWORD(v12) = (*(_DWORD *)handle.data >> 27) & 0xF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3284, ASSERT_TYPE_ASSERT, "( ( ( node->inuseParts & ( 1ull << partIndex ) ) == 0 ) )", "( node->inuseParts ) = %u", v12) )
        __debugbreak();
    }
    v11 = *(_DWORD *)handle.data ^ (*(_DWORD *)handle.data ^ (((*(_DWORD *)handle.data >> 27) & 0xF | (1 << v9)) << 27)) & 0x78000000;
  }
  *(_DWORD *)handle.data = v11;
  if ( ((unsigned __int8)(1i64 << v9) & (unsigned __int8)((unsigned __int64)v11 >> 23) & 0xF) == 0 )
  {
    LODWORD(v12) = (v11 >> 23) & 0xF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3294, ASSERT_TYPE_ASSERT, "( ( ( node->mappedParts & ( 1ull << partIndex ) ) != 0 ) )", "( node->mappedParts ) = %u", v12) )
      __debugbreak();
  }
}

/*
==============
StreamDefrag::OnUnloadItem
==============
*/
void StreamDefrag::OnUnloadItem(StreamDefrag *this, __int64 itemType, unsigned int itemPartIndex, streamer_handle_t handle)
{
  char v6; 
  bool v8; 
  char v9; 
  int v10; 
  unsigned int v11; 
  StreamDefragCommand *v12; 
  StreamDefragCommand *v13; 
  __int64 v14; 

  v6 = itemType;
  Stream_Defrag_CheckLocks(this, itemType);
  v8 = handle.data >= (unsigned __int64)this && handle.data < (unsigned __int64)this->mAddressSpaces;
  v9 = 0;
  if ( !v8 )
    handle.data = 0i64;
  if ( !handle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3303, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !NodeIsValid((const StreamDefragAllocNode *)handle.data) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3304, ASSERT_TYPE_ASSERT, "(NodeIsValid( node ))", (const char *)&queryFormat, "NodeIsValid( node )") )
    __debugbreak();
  if ( (*(_BYTE *)(handle.data + 4) & 3) != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3305, ASSERT_TYPE_ASSERT, "(node->assetType == itemType)", (const char *)&queryFormat, "node->assetType == itemType") )
    __debugbreak();
  v10 = (*(_DWORD *)(handle.data + 4) >> 2) & 0x3FFFF;
  if ( v6 )
  {
    if ( v10 != itemPartIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3320, ASSERT_TYPE_ASSERT, "(node->assetIndex == itemPartIndex)", (const char *)&queryFormat, "node->assetIndex == itemPartIndex") )
      __debugbreak();
    if ( ((*(_DWORD *)handle.data >> 27) & 0xF) != 1 )
    {
      LODWORD(v14) = (*(_DWORD *)handle.data >> 27) & 0xF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3321, ASSERT_TYPE_ASSERT, "( ( node->inuseParts == 1 ) )", "( node->inuseParts ) = %u", v14) )
        __debugbreak();
    }
    *(_DWORD *)handle.data &= 0x87FFFFFF;
    v11 = *(_DWORD *)handle.data;
  }
  else
  {
    if ( v10 != itemPartIndex >> 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3311, ASSERT_TYPE_ASSERT, "(node->assetIndex == itemPartIndex / IMAGE_STREAM_COUNT)", (const char *)&queryFormat, "node->assetIndex == itemPartIndex / IMAGE_STREAM_COUNT") )
      __debugbreak();
    v9 = itemPartIndex & 3;
    if ( ((unsigned __int8)(1i64 << (itemPartIndex & 3)) & ((unsigned __int64)*(unsigned int *)handle.data >> 27) & 0xF) == 0 )
    {
      LODWORD(v14) = (*(_DWORD *)handle.data >> 27) & 0xF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3315, ASSERT_TYPE_ASSERT, "( ( ( node->inuseParts & ( 1ull << partIndex ) ) != 0 ) )", "( node->inuseParts ) = %u", v14) )
        __debugbreak();
    }
    v11 = *(_DWORD *)handle.data ^ (*(_DWORD *)handle.data ^ (((*(_DWORD *)handle.data >> 27) & 0xF & ~(1 << v9)) << 27)) & 0x78000000;
    *(_DWORD *)handle.data = v11;
  }
  if ( ((unsigned __int8)(1i64 << v9) & (unsigned __int8)((unsigned __int64)v11 >> 23) & 0xF) == 0 )
  {
    LODWORD(v14) = (v11 >> 23) & 0xF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3325, ASSERT_TYPE_ASSERT, "( ( ( node->mappedParts & ( 1ull << partIndex ) ) != 0 ) )", "( node->mappedParts ) = %u", v14) )
      __debugbreak();
  }
  if ( (*(_DWORD *)handle.data & 0x200000) != 0 )
  {
    v12 = StreamDefrag::BackendFlushProtection(this, (const StreamDefragAllocNode *)handle.data);
    v13 = v12;
    if ( v12 )
    {
      if ( v12->node != (StreamDefragAllocNode *)handle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3333, ASSERT_TYPE_ASSERT, "(inFlightCopy->node == node)", (const char *)&queryFormat, "inFlightCopy->node == node") )
        __debugbreak();
      *((_DWORD *)v13 + 13) ^= (*((_DWORD *)v13 + 13) ^ ((HIBYTE(*((_DWORD *)v13 + 13)) & 0xF & ~(1 << v9)) << 24)) & 0xF000000;
    }
  }
}

/*
==============
StreamDefragRegion<1>::OnUnmapOldAddress
==============
*/
void StreamDefragRegion<1>::OnUnmapOldAddress(StreamDefragRegion<1> *this, const StreamDefragCommand *command, bool fastForward)
{
  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1920, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  if ( (*((_DWORD *)command + 13) & 0x3800) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1921, ASSERT_TYPE_ASSERT, "(command->vaReservedPartCountUnmap > 0)", (const char *)&queryFormat, "command->vaReservedPartCountUnmap > 0") )
    __debugbreak();
  if ( fastForward )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1925, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1926, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
      __debugbreak();
    if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1927, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
      __debugbreak();
  }
  else
  {
    Stream_Defrag_CheckLocks(this, command);
  }
  StreamDefragRegion<1>::DecreaseVASizeUsedForUnmapCommand(this, command);
}

/*
==============
StreamDefrag::PostLevelUnload
==============
*/
void StreamDefrag::PostLevelUnload(StreamDefrag *this, const GfxBackEndData *data)
{
  __int64 v4; 
  __int64 v5; 

  Sys_ProfBeginNamedEvent(0xFF808080, "StreamDefrag::PostLevelUnload");
  Stream_Defrag_CheckLocks(v5, v4);
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3455, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()", -2i64) )
    __debugbreak();
  if ( Stream_IsEnabled() && !Stream_BackendQueue_IsInForcedFlush() && streamFrontendGlob->levelInit.state == 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3456, ASSERT_TYPE_ASSERT, "(IsIdle())", (const char *)&queryFormat, "IsIdle()") )
    __debugbreak();
  if ( !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3457, ASSERT_TYPE_ASSERT, "(Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Stream_BackendQueue_IsInForcedFlush()") )
    __debugbreak();
  StreamDefrag::ValidateRegions(this);
  StreamDefrag::HarvestRegions(this, data);
  StreamDefrag::ValidateRegions(this);
  Sys_ProfEndNamedEvent();
}

/*
==============
StreamDefragRegion<1>::PushBack
==============
*/
void StreamDefragRegion<1>::PushBack(StreamDefragRegion<1> *this, StreamDefragAllocNode *node)
{
  unsigned __int8 *v4; 
  unsigned __int8 *v5; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2248, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( ((*(_DWORD *)node >> 19) & 1) != this->mPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2249, ASSERT_TYPE_ASSERT, "(static_cast<StreamMemPool>( node->memPool ) == mPool)", (const char *)&queryFormat, "static_cast<StreamMemPool>( node->memPool ) == mPool") )
    __debugbreak();
  v4 = StrmOffsetToAddress(this->mPool, *((unsigned int *)node + 3));
  v5 = v4;
  if ( ((unsigned __int64)v4 < this->mAddrBase || (unsigned __int64)v4 >= this->mAddrEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2252, ASSERT_TYPE_ASSERT, "(addrWrite >= mAddrBase && addrWrite < mAddrEnd)", (const char *)&queryFormat, "addrWrite >= mAddrBase && addrWrite < mAddrEnd") )
    __debugbreak();
  if ( (unsigned __int8 *)this->mAddrHead != &v5[(unsigned int)NodeGetMaxVaSize(node)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2253, ASSERT_TYPE_ASSERT, "(mAddrHead == addrWrite + NodeGetMaxVaSize( node ))", (const char *)&queryFormat, "mAddrHead == addrWrite + NodeGetMaxVaSize( node )") )
    __debugbreak();
  if ( *((_DWORD *)node + 2) != *((_DWORD *)node + 3) )
  {
    ++this->mDefragInFlightNodeCount;
    ++this->mDefragInFlightCopyCount;
  }
  RList<StreamDefragAllocNode>::PushBack(&this->mAllocations, node);
}

/*
==============
StreamDefrag::QueueFlushAsyncCPUMemCpy
==============
*/
void StreamDefrag::QueueFlushAsyncCPUMemCpy(StreamDefrag *this)
{
  StreamDefrag *data; 

  if ( this->mAsyncCPUMemCpyProcess )
  {
    if ( this->mAsyncCPUMemCopies.mHead )
    {
      data = this;
      Sys_AddWorkerCmd(WRKCMD_STREAM_DEFRAG_FLUSH_CPU_MEMCPY, &data);
    }
  }
}

/*
==============
StreamDefrag::QueueFlushAsyncVA
==============
*/
void StreamDefrag::QueueFlushAsyncVA(StreamDefrag *this)
{
  StreamDefrag *data; 

  if ( this->mAsyncVAProcess && (this->mAsyncVAMaps.mHead || this->mAsyncVAUnmaps.mHead) )
  {
    data = this;
    Sys_AddWorkerCmd(WRKCMD_STREAM_DEFRAG_FLUSH_VA, &data);
  }
}

/*
==============
StreamDefragRegion<1>::ReleaseVAReserve
==============
*/
void StreamDefragRegion<1>::ReleaseVAReserve(StreamDefragRegion<1> *this, StreamDefragAllocNode *node)
{
  unsigned __int64 v4; 
  unsigned __int64 VaSizeForParts; 
  unsigned __int64 mVaSizeFullyUnmapped; 

  Stream_Defrag_CheckLocks(this, node);
  v4 = *((unsigned int *)node + 1);
  if ( (v4 & 0x78000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1942, ASSERT_TYPE_ASSERT, "( node->vAddrOffsetWriteLockParts ) == ( 0 )", "%s == %s\n\t%llu, %llu", "node->vAddrOffsetWriteLockParts", "0", (v4 >> 27) & 0xF, 0i64) )
    __debugbreak();
  if ( this->mAllocations.mHead != node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1944, ASSERT_TYPE_ASSERT, "(mAllocations.PeekFront() == node)", (const char *)&queryFormat, "mAllocations.PeekFront() == node") )
    __debugbreak();
  if ( (*(_DWORD *)node & 0x7800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1945, ASSERT_TYPE_ASSERT, "(node->mappedParts == 0)", (const char *)&queryFormat, "node->mappedParts == 0") )
    __debugbreak();
  if ( (*((_DWORD *)node + 4) & 0xC00000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1946, ASSERT_TYPE_ASSERT, "(node->defragRefCount == 0)", (const char *)&queryFormat, "node->defragRefCount == 0") )
    __debugbreak();
  if ( *((_DWORD *)node + 2) != *((_DWORD *)node + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1947, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead == node->vAddrOffsetWrite)", (const char *)&queryFormat, "node->vAddrOffsetRead == node->vAddrOffsetWrite") )
    __debugbreak();
  VaSizeForParts = NodeGetVaSizeForParts(node, (*((_DWORD *)node + 1) >> 20) & 7);
  mVaSizeFullyUnmapped = this->mVaSizeFullyUnmapped;
  if ( mVaSizeFullyUnmapped < VaSizeForParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1952, ASSERT_TYPE_ASSERT, "( mVaSizeFullyUnmapped ) >= ( size )", "%s >= %s\n\t%zu, %zu", "mVaSizeFullyUnmapped", "size", mVaSizeFullyUnmapped, VaSizeForParts) )
    __debugbreak();
  this->mVaSizeFullyUnmapped -= VaSizeForParts;
  StreamDefragRegion<1>::RemoveNode(this, node);
  if ( (*(_DWORD *)node & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1956, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
    __debugbreak();
}

/*
==============
StreamDefragRegion<1>::RemoveNode
==============
*/
void StreamDefragRegion<1>::RemoveNode(StreamDefragRegion<1> *this, StreamDefragAllocNode *node)
{
  unsigned int v4; 
  StreamDefragAllocNode *v5; 
  __int64 v6; 
  unsigned __int8 *v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 mVaSizeAlignWaste; 
  unsigned __int64 v11; 
  unsigned __int64 mVaSizeUsed; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  StreamDefragAllocNode *mHead; 
  int v16; 
  int v17; 
  int v18; 

  StreamDefragRegion<1>::DecreaseVASizeUsedForNodeWriteOffset(this, node);
  v4 = *((_DWORD *)node + 1);
  if ( node == this->mAllocations.mTail )
  {
    if ( (v4 & 0x7800000) != 0 )
    {
      v17 = (v4 >> 23) & 0xF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1880, ASSERT_TYPE_ASSERT, "( node->vAddrEndAlignLog2 ) == ( 0 )", "%s == %s\n\t%u, %u", "node->vAddrEndAlignLog2", "0", v17, 0i64) )
        __debugbreak();
    }
    if ( *((_DWORD *)node + 4) << 13 )
    {
      v5 = &node[(__int64)(int)(*((_DWORD *)node + 4) << 13) >> 13];
      v6 = BitDecodeAlignment((*((_DWORD *)v5 + 1) >> 23) & 0xF);
      v7 = StrmOffsetToAddress(this->mPool, *((unsigned int *)v5 + 3));
      v8 = (unsigned __int64)&v7[(unsigned int)NodeGetMaxVaSize(v5)];
      v9 = AlignUp<unsigned __int64>(v8, v6);
      mVaSizeAlignWaste = this->mVaSizeAlignWaste;
      v11 = v9 - v8;
      if ( mVaSizeAlignWaste < v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1891, ASSERT_TYPE_ASSERT, "( mVaSizeAlignWaste ) >= ( alignWaste )", "%s >= %s\n\t%zu, %zu", "mVaSizeAlignWaste", "alignWaste", mVaSizeAlignWaste, v11) )
        __debugbreak();
      this->mVaSizeAlignWaste -= v11;
      mVaSizeUsed = this->mVaSizeUsed;
      if ( mVaSizeUsed < v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1893, ASSERT_TYPE_ASSERT, "( mVaSizeUsed ) >= ( alignWaste )", "%s >= %s\n\t%zu, %zu", "mVaSizeUsed", "alignWaste", mVaSizeUsed, v11) )
        __debugbreak();
      this->mVaSizeUsed -= v11;
      *((_DWORD *)v5 + 1) &= 0xF87FFFFF;
      this->mAddrHead = v8;
    }
    RList<StreamDefragAllocNode>::Remove(&this->mAllocations, node);
    if ( !this->mAllocations.mTail )
    {
      v13 = this->mVaSizeUsed;
      if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1904, ASSERT_TYPE_ASSERT, "( mVaSizeUsed ) == ( 0 )", "%s == %s\n\t%zu, %zu", "mVaSizeUsed", "0", v13, 0i64) )
        __debugbreak();
      v14 = this->mVaSizeAlignWaste;
      if ( v14 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1905, ASSERT_TYPE_ASSERT, "( mVaSizeAlignWaste ) == ( 0 )", "%s == %s\n\t%zu, %zu", "mVaSizeAlignWaste", "0", v14, 0i64) )
          __debugbreak();
      }
    }
  }
  else
  {
    if ( (v4 & 0x7800000) == 0 )
    {
      v18 = (v4 >> 23) & 0xF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1910, ASSERT_TYPE_ASSERT, "( node->vAddrEndAlignLog2 ) != ( 0 )", "%s != %s\n\t%u, %u", "node->vAddrEndAlignLog2", "0", v18, 0i64) )
        __debugbreak();
    }
    mHead = this->mAllocations.mHead;
    if ( this->mAllocations.mHead )
    {
      while ( 1 )
      {
        v16 = (int)(*(_DWORD *)mHead << 13) >> 13;
        if ( mHead == node )
          break;
        if ( v16 )
        {
          mHead += v16;
          if ( mHead )
            continue;
        }
        goto LABEL_28;
      }
    }
    else
    {
LABEL_28:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1911, ASSERT_TYPE_ASSERT, "(mAllocations.Contains( node ))", (const char *)&queryFormat, "mAllocations.Contains( node )") )
        __debugbreak();
    }
    RList<StreamDefragAllocNode>::Remove(&this->mAllocations, node);
  }
}

/*
==============
StreamDefragRegion<0>::RemoveNode
==============
*/
void StreamDefragRegion<0>::RemoveNode(StreamDefragRegion<0> *this, StreamDefragAllocNode *node)
{
  unsigned int VaSizeForParts; 
  unsigned int v5; 
  StreamDefragAllocNode *v6; 
  __int64 v7; 
  unsigned __int8 *v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 mVaSizeAlignWaste; 
  unsigned __int64 v12; 
  unsigned __int64 mVaSizeUsed; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  StreamDefragAllocNode *mHead; 
  int v17; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1851, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  VaSizeForParts = NodeGetVaSizeForParts(node, (*((_DWORD *)node + 1) >> 20) & 7);
  StreamDefragRegion<0>::DecreaseVASizeUsedInternal(this, node, *((_DWORD *)node + 3), VaSizeForParts, (*((_DWORD *)node + 1) >> 23) & 0xF);
  v5 = *((_DWORD *)node + 1);
  if ( node == this->mAllocations.mTail )
  {
    if ( (v5 & 0x7800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1880, ASSERT_TYPE_ASSERT, "( node->vAddrEndAlignLog2 ) == ( 0 )", "%s == %s\n\t%u, %u", "node->vAddrEndAlignLog2", "0", (v5 >> 23) & 0xF, 0i64) )
      __debugbreak();
    if ( *((_DWORD *)node + 4) << 13 )
    {
      v6 = &node[(__int64)(int)(*((_DWORD *)node + 4) << 13) >> 13];
      v7 = BitDecodeAlignment((*((_DWORD *)v6 + 1) >> 23) & 0xF);
      v8 = StrmOffsetToAddress(this->mPool, *((unsigned int *)v6 + 3));
      v9 = (unsigned __int64)&v8[(unsigned int)NodeGetMaxVaSize(v6)];
      v10 = AlignUp<unsigned __int64>(v9, v7);
      mVaSizeAlignWaste = this->mVaSizeAlignWaste;
      v12 = v10 - v9;
      if ( mVaSizeAlignWaste < v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1891, ASSERT_TYPE_ASSERT, "( mVaSizeAlignWaste ) >= ( alignWaste )", "%s >= %s\n\t%zu, %zu", "mVaSizeAlignWaste", "alignWaste", mVaSizeAlignWaste, v12) )
        __debugbreak();
      this->mVaSizeAlignWaste -= v12;
      mVaSizeUsed = this->mVaSizeUsed;
      if ( mVaSizeUsed < v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1893, ASSERT_TYPE_ASSERT, "( mVaSizeUsed ) >= ( alignWaste )", "%s >= %s\n\t%zu, %zu", "mVaSizeUsed", "alignWaste", mVaSizeUsed, v12) )
        __debugbreak();
      this->mVaSizeUsed -= v12;
      *((_DWORD *)v6 + 1) &= 0xF87FFFFF;
      this->mAddrHead = v9;
    }
    RList<StreamDefragAllocNode>::Remove(&this->mAllocations, node);
    if ( !this->mAllocations.mTail )
    {
      v14 = this->mVaSizeUsed;
      if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1904, ASSERT_TYPE_ASSERT, "( mVaSizeUsed ) == ( 0 )", "%s == %s\n\t%zu, %zu", "mVaSizeUsed", "0", v14, 0i64) )
        __debugbreak();
      v15 = this->mVaSizeAlignWaste;
      if ( v15 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1905, ASSERT_TYPE_ASSERT, "( mVaSizeAlignWaste ) == ( 0 )", "%s == %s\n\t%zu, %zu", "mVaSizeAlignWaste", "0", v15, 0i64) )
          __debugbreak();
      }
    }
  }
  else
  {
    if ( (v5 & 0x7800000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1910, ASSERT_TYPE_ASSERT, "( node->vAddrEndAlignLog2 ) != ( 0 )", "%s != %s\n\t%u, %u", "node->vAddrEndAlignLog2", "0", (v5 >> 23) & 0xF, 0i64) )
      __debugbreak();
    mHead = this->mAllocations.mHead;
    if ( this->mAllocations.mHead )
    {
      while ( 1 )
      {
        v17 = (int)(*(_DWORD *)mHead << 13) >> 13;
        if ( mHead == node )
          break;
        if ( v17 )
        {
          mHead += v17;
          if ( mHead )
            continue;
        }
        goto LABEL_31;
      }
    }
    else
    {
LABEL_31:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1911, ASSERT_TYPE_ASSERT, "(mAllocations.Contains( node ))", (const char *)&queryFormat, "mAllocations.Contains( node )") )
        __debugbreak();
    }
    RList<StreamDefragAllocNode>::Remove(&this->mAllocations, node);
  }
}

/*
==============
StreamDefrag::ReserveHandle
==============
*/
streamer_handle_t StreamDefrag::ReserveHandle(StreamDefrag *this, StreamDefragAllocNode **type, int assetIndex, unsigned int a4)
{
  StreamItemType v5; 
  StreamDefragAllocNode *mHead; 
  signed __int64 v9; 
  char ItemMemPool; 
  __int64 v12; 
  __int64 v13; 

  v5 = (char)assetIndex;
  if ( (unsigned __int8)assetIndex >= 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3434, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( MAX_ASSET_TYPE )", "type doesn't index MAX_ASSET_TYPE\n\t%i not in [0, %i)", (unsigned __int8)assetIndex, 3) )
    __debugbreak();
  if ( a4 >= 0x3FFFF )
  {
    LODWORD(v13) = 0x3FFFF;
    LODWORD(v12) = a4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3435, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( MAX_ASSET_INDEX )", "assetIndex doesn't index MAX_ASSET_INDEX\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  mHead = this->mFreePool.mHead;
  if ( this->mFreePool.mHead )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)mHead << 13 )
        v9 = (signed __int64)&mHead[(__int64)(int)(*(_DWORD *)mHead << 13) >> 13];
      else
        v9 = 0i64;
      if ( ((unsigned __int8)this & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 128, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int64 ) ) ) )", "( target ) = %p", this) )
        __debugbreak();
      if ( mHead == (StreamDefragAllocNode *)_InterlockedCompareExchange64((volatile signed __int64 *)this, v9, (signed __int64)mHead) )
        break;
      mHead = this->mFreePool.mHead;
      if ( !this->mFreePool.mHead )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    mHead = NULL;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3438, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
  }
  *(_OWORD *)mHead = 0ui64;
  *((_DWORD *)mHead + 4) = 0;
  *(_DWORD *)mHead |= 0x100000u;
  ItemMemPool = Stream_Alloc_GetItemMemPool(v5, a4);
  *(_DWORD *)mHead &= ~0x80000u;
  *((_DWORD *)mHead + 1) &= 0xFFF00000;
  *(_DWORD *)mHead |= (ItemMemPool & 1) << 19;
  *type = mHead;
  *((_DWORD *)mHead + 1) |= (4 * (a4 & 0x3FFFF)) | v5 & 3;
  return (streamer_handle_t)type;
}

/*
==============
StreamDefrag::ResolveMap
==============
*/
unsigned __int8 *StreamDefrag::ResolveMap(StreamDefrag *this, const GfxBackEndData *data, StreamMapCmdData *streamMap)
{
  StreamMapCmdData *v3; 
  StreamDefragAllocNode *v6; 
  unsigned int v8; 
  const GfxImage *m_image; 
  bool v10; 
  unsigned int v11; 
  unsigned int v12; 
  char *v13; 
  unsigned __int64 VaSizeForParts; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  GfxImage *GfxImageAtIndex; 
  __int64 partIndex; 
  GfxImage *v21; 
  GfxImageStreamLevelCountAndSize *p_levelCountAndSize; 
  int v23; 
  unsigned int v24; 
  unsigned int v25; 
  StreamDefrag::AddressSpace *v26; 
  StreamDefragCommand *v27; 
  StreamDefragCommand *v28; 
  signed int v29; 
  signed int v30; 
  unsigned __int64 v31; 
  int v32; 
  __int64 v33; 
  const GfxImage *v34; 
  __int64 v35; 
  const char *v36; 
  __int64 v37; 
  __int64 v38; 
  StreamDefragCommand *v39; 
  int v40; 
  __int64 v41; 
  unsigned int v42; 
  int v43; 
  bool updated; 
  int v45; 
  unsigned int MaxVaSize; 
  __int64 v47; 
  unsigned __int8 *v48; 
  __int64 v49; 
  unsigned __int64 v50; 
  StreamNextTailAddress *mTail; 
  unsigned __int64 v52; 
  const GfxImage *v53; 
  unsigned __int64 v54; 
  const GfxImage *v55; 
  unsigned __int64 v56; 
  StreamDefragAllocNode *mHead; 
  int v58; 
  StreamDefragAllocNode *v59; 
  Stream_Logger_Item *Item; 
  Stream_Logger_Item *v61; 
  unsigned __int64 v62; 
  const unsigned __int8 *v63; 
  int v64; 
  unsigned int v65; 
  unsigned __int8 streamedPartCount; 
  Stream_Logger_Item *v67; 
  unsigned __int64 v68; 
  const unsigned __int8 *v69; 
  unsigned int v70; 
  unsigned __int8 *v71; 
  unsigned __int8 *v72; 
  __int64 mapOffset; 
  __int64 mapSize; 
  const unsigned __int8 *v75; 
  char *v76; 
  const unsigned __int8 *v77; 
  unsigned __int64 v78; 
  unsigned __int64 v79; 
  unsigned int fmt; 
  __int64 v82; 
  __int64 v83; 
  __int64 v84; 
  __int64 v85; 
  bool v86; 
  int partBits; 
  StreamDefragRegion<1> *p_mMoveableRegion; 
  const unsigned __int8 *v89; 
  unsigned __int64 b[2]; 
  Stream_Logger_Item result; 
  GfxBackEndData *dataa; 
  __int64 v94; 
  __int64 v95; 
  __int64 v96; 
  __int64 v97; 
  __int128 v98; 
  __int64 v99; 
  Stream_Logger_Item unmappedPages; 

  v3 = streamMap;
  dataa = (GfxBackEndData *)data;
  Stream_Defrag_CheckLocks(this, data);
  v6 = (StreamDefragAllocNode *)v3->baseAddrHandle.data;
  if ( v3->baseAddrHandle.data < (unsigned __int64)this || v6 >= (StreamDefragAllocNode *)this->mAddressSpaces )
    v6 = NULL;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2659, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (*(_DWORD *)v6 & 0x100000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2660, ASSERT_TYPE_ASSERT, "(node->valid)", (const char *)&queryFormat, "node->valid") )
    __debugbreak();
  if ( ((unsigned __int8)(1i64 << v3->partIndex) & (unsigned __int8)((unsigned __int64)*(_DWORD *)v6 >> 23) & 0xF) != 0 )
  {
    LODWORD(v82) = (*(_DWORD *)v6 >> 23) & 0xF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2661, ASSERT_TYPE_ASSERT, "( ( ( node->mappedParts & ( 1ull << streamMap->partIndex ) ) == 0 ) )", "( node->mappedParts ) = %u", v82) )
      __debugbreak();
  }
  if ( ((unsigned __int8)(1i64 << v3->partIndex) & ((unsigned __int64)*(_DWORD *)v6 >> 27) & 0xF) != 0 )
  {
    LODWORD(v82) = (*(_DWORD *)v6 >> 27) & 0xF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2662, ASSERT_TYPE_ASSERT, "( ( ( node->inuseParts & ( 1ull << streamMap->partIndex ) ) == 0 ) )", "( node->inuseParts ) = %u", v82) )
      __debugbreak();
  }
  v8 = *(_DWORD *)v6;
  m_image = (const GfxImage *)((*(_DWORD *)v6 >> 19) & 1);
  v10 = *((_DWORD *)v6 + 3) == 0;
  unmappedPages.m_image = m_image;
  if ( v10 )
  {
    if ( (v8 & 0x7800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2872, ASSERT_TYPE_ASSERT, "(node->mappedParts == 0)", (const char *)&queryFormat, "node->mappedParts == 0") )
      __debugbreak();
    if ( (*(_DWORD *)v6 & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2873, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
      __debugbreak();
    *(_DWORD *)v6 ^= (*(_DWORD *)v6 ^ (((*(_DWORD *)v6 >> 23) & 0xF | (1 << v3->partIndex)) << 23)) & 0x7800000;
    v71 = StreamDefrag::ResolveNewAddr(this, data, v6);
  }
  else
  {
    partBits = (v8 >> 23) & 0xF;
    v11 = v8 ^ (v8 ^ ((partBits | (1 << v3->partIndex)) << 23)) & 0x7800000;
    *(_DWORD *)v6 = v11;
    if ( !partBits )
    {
      v12 = __popcnt((v11 >> 23) & 0xF);
      v13 = (char *)this + 256 * (unsigned __int64)(unsigned int)m_image;
      if ( (v11 & 0x200000) != 0 )
      {
        if ( v12 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2090, ASSERT_TYPE_ASSERT, "(CountBitsGeneric( node->mappedParts ) == 1)", (const char *)&queryFormat, "CountBitsGeneric( node->mappedParts ) == 1") )
          __debugbreak();
        VaSizeForParts = NodeGetVaSizeForParts(v6, (*((_DWORD *)v6 + 1) >> 20) & 7);
        v15 = *((_QWORD *)v13 + 412172);
        if ( v15 < VaSizeForParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2092, ASSERT_TYPE_ASSERT, "( mVaSizeFullyUnmapped ) >= ( size )", "%s >= %s\n\t%zu, %zu", "mVaSizeFullyUnmapped", "size", v15, VaSizeForParts) )
          __debugbreak();
        *((_QWORD *)v13 + 412172) -= VaSizeForParts;
      }
      else
      {
        if ( v12 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2090, ASSERT_TYPE_ASSERT, "(CountBitsGeneric( node->mappedParts ) == 1)", (const char *)&queryFormat, "CountBitsGeneric( node->mappedParts ) == 1") )
          __debugbreak();
        v16 = NodeGetVaSizeForParts(v6, (*((_DWORD *)v6 + 1) >> 20) & 7);
        v17 = *((_QWORD *)v13 + 412188);
        if ( v17 < v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2092, ASSERT_TYPE_ASSERT, "( mVaSizeFullyUnmapped ) >= ( size )", "%s >= %s\n\t%zu, %zu", "mVaSizeFullyUnmapped", "size", v17, v16) )
          __debugbreak();
        *((_QWORD *)v13 + 412188) -= v16;
      }
      v3 = streamMap;
    }
    if ( (*(_DWORD *)v6 & 0x200000) != 0 && StreamDefrag::NeedsVAResize(this, v6) )
    {
      if ( (*((_BYTE *)v6 + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2690, ASSERT_TYPE_ASSERT, "(node->assetType == STREAM_ITEM_IMAGE)", (const char *)&queryFormat, "node->assetType == STREAM_ITEM_IMAGE") )
        __debugbreak();
      if ( (int)__popcnt((*(_DWORD *)v6 >> 23) & 0xF) < 1 )
      {
        LODWORD(v82) = (*(_DWORD *)v6 >> 23) & 0xF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2691, ASSERT_TYPE_ASSERT, "( ( CountBitsGeneric( node->mappedParts ) >= 1 ) )", "( node->mappedParts ) = %u", v82) )
          __debugbreak();
      }
      if ( ((*((_DWORD *)v6 + 4) >> 19) & 7) != 0 )
      {
        LODWORD(v82) = (*((_DWORD *)v6 + 4) >> 19) & 7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2692, ASSERT_TYPE_ASSERT, "( ( node->defragLockCount == 0 ) )", "( node->defragLockCount ) = %u", v82) )
          __debugbreak();
      }
      v18 = *((unsigned int *)v6 + 1);
      if ( (v18 & 0x78000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2693, ASSERT_TYPE_ASSERT, "( node->vAddrOffsetWriteLockParts ) == ( 0 )", "%s == %s\n\t%llu, %llu", "node->vAddrOffsetWriteLockParts", "0", (v18 >> 27) & 0xF, 0i64) )
        __debugbreak();
      if ( (*(_DWORD *)v6 & 0x400000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2694, ASSERT_TYPE_ASSERT, "(node->isVaResizing == 0)", (const char *)&queryFormat, "node->isVaResizing == 0") )
        __debugbreak();
      GfxImageAtIndex = DB_GetGfxImageAtIndex((*((_DWORD *)v6 + 1) >> 2) & 0x3FFFF);
      partIndex = v3->partIndex;
      v21 = GfxImageAtIndex;
      if ( !GfxImageAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 200, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
        __debugbreak();
      if ( (v21->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      if ( (unsigned int)partIndex >= Image_GetStreamedPartCount(v21) )
      {
        LODWORD(v83) = Image_GetStreamedPartCount(v21);
        LODWORD(v82) = partIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v82, v83) )
          __debugbreak();
      }
      p_levelCountAndSize = &v21->streams[partIndex].levelCountAndSize;
      if ( (_DWORD)partIndex )
        v23 = ((unsigned int)*p_levelCountAndSize >> 4) - ((unsigned int)v21->streams[(unsigned int)(partIndex - 1)].levelCountAndSize >> 4);
      else
        v23 = (unsigned int)*p_levelCountAndSize >> 4;
      if ( v3->mapSize != v23 )
      {
        LODWORD(v85) = Image_ExclusivePartSize(v21, v3->partIndex);
        LODWORD(v84) = v3->mapSize;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2698, ASSERT_TYPE_ASSERT, "( streamMap->mapSize ) == ( Image_ExclusivePartSize( image, streamMap->partIndex ) )", "%s == %s\n\t%u, %u", "streamMap->mapSize", "Image_ExclusivePartSize( image, streamMap->partIndex )", v84, v85) )
          __debugbreak();
      }
      v24 = v3->partIndex;
      if ( (v21->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 212, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      v25 = Image_InclusivePartSize(v21, v24);
      if ( v21->totalSize < v25 )
      {
        LODWORD(v85) = v25;
        LODWORD(v84) = v21->totalSize;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 215, ASSERT_TYPE_ASSERT, "( image->totalSize ) >= ( size )", "%s >= %s\n\t%u, %u", "image->totalSize", "size", v84, v85) )
          __debugbreak();
      }
      if ( v3->mapOffset != v21->totalSize - v25 )
      {
        LODWORD(v85) = Image_PartOffset(v21, v3->partIndex);
        LODWORD(v84) = v3->mapOffset;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2699, ASSERT_TYPE_ASSERT, "( streamMap->mapOffset ) == ( Image_PartOffset( image, streamMap->partIndex ) )", "%s == %s\n\t%u, %u", "streamMap->mapOffset", "Image_PartOffset( image, streamMap->partIndex )", v84, v85) )
          __debugbreak();
      }
      v86 = 0;
      v26 = &this->mAddressSpaces[(_QWORD)m_image];
      p_mMoveableRegion = &v26->mMoveableRegion;
      v27 = StreamDefrag::BackendFlushProtection(this, v6);
      v28 = v27;
      if ( v27 )
      {
        if ( v27->node != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2708, ASSERT_TYPE_ASSERT, "(inFlightCopy->node == node)", (const char *)&queryFormat, "inFlightCopy->node == node") )
          __debugbreak();
        if ( *((_DWORD *)v6 + 2) == *((_DWORD *)v6 + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2709, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead != node->vAddrOffsetWrite)", (const char *)&queryFormat, "node->vAddrOffsetRead != node->vAddrOffsetWrite") )
          __debugbreak();
        if ( *((_DWORD *)v28 + 11) != *((_DWORD *)v6 + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2710, ASSERT_TYPE_ASSERT, "(inFlightCopy->vAddrOffsetUnmap == node->vAddrOffsetRead)", (const char *)&queryFormat, "inFlightCopy->vAddrOffsetUnmap == node->vAddrOffsetRead") )
          __debugbreak();
        if ( v28->unmapFrame != this->mDefragUnmapFrameDepth + this->mDefragFrameIndex + 1 )
        {
          LODWORD(v85) = this->mDefragUnmapFrameDepth + this->mDefragFrameIndex + 1;
          LODWORD(v84) = v28->unmapFrame;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2711, ASSERT_TYPE_ASSERT, "( inFlightCopy->unmapFrame ) == ( mDefragFrameIndex + mDefragUnmapFrameDepth + 1 )", "%s == %s\n\t%u, %u", "inFlightCopy->unmapFrame", "mDefragFrameIndex + mDefragUnmapFrameDepth + 1", v84, v85) )
            __debugbreak();
        }
        if ( *((_DWORD *)v28 + 13) < 0x10000000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2712, ASSERT_TYPE_ASSERT, "(inFlightCopy->unmapParts != 0)", (const char *)&queryFormat, "inFlightCopy->unmapParts != 0") )
          __debugbreak();
        if ( (*((_DWORD *)v28 + 13) & 0x400000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2713, ASSERT_TYPE_ASSERT, "(inFlightCopy->isForVaResize == 0)", (const char *)&queryFormat, "inFlightCopy->isForVaResize == 0") )
          __debugbreak();
        if ( (*((_DWORD *)v28 + 13) & 0x800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2714, ASSERT_TYPE_ASSERT, "(inFlightCopy->isForNonTailNodeVaResize == 0)", (const char *)&queryFormat, "inFlightCopy->isForNonTailNodeVaResize == 0") )
          __debugbreak();
        v29 = __popcnt(HIBYTE(*((_DWORD *)v28 + 13)) & 0xF);
        v30 = __popcnt(*((_DWORD *)v28 + 13) >> 28);
        if ( v29 > v30 )
        {
          LODWORD(v85) = v30;
          LODWORD(v84) = v29;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2723, ASSERT_TYPE_ASSERT, "( CountBitsGeneric( inFlightCopy->copyParts ) ) <= ( CountBitsGeneric( inFlightCopy->unmapParts ) )", "%s <= %s\n\t%u, %u", "CountBitsGeneric( inFlightCopy->copyParts )", "CountBitsGeneric( inFlightCopy->unmapParts )", v84, v85) )
            __debugbreak();
        }
        v31 = *((unsigned int *)v6 + 3);
        v32 = *((_BYTE *)v28 + 55) & 0xF;
        unmappedPages.m_image = NULL;
        StreamDefrag::TrackDecommitParts(this, v28, v31, v32);
        StreamDefrag::DecommitParts(this, v28, *((unsigned int *)v6 + 3), *((_BYTE *)v28 + 55) & 0xF, (StreamerMemPageCounts *)&unmappedPages);
        StreamDefrag::AddPagesToDefragPageSurplus(this, (const StreamerMemPageCounts *)&unmappedPages);
        if ( (*((_BYTE *)v28 + 55) & 0xF) != ((*(_DWORD *)v6 >> 27) & 0xF) )
        {
          LODWORD(v85) = (*(_DWORD *)v6 >> 27) & 0xF;
          LODWORD(v84) = *((_BYTE *)v28 + 55) & 0xF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2733, ASSERT_TYPE_ASSERT, "( inFlightCopy->copyParts ) == ( node->inuseParts )", "%s == %s\n\t%u, %u", "inFlightCopy->copyParts", "node->inuseParts", v84, v85) )
            __debugbreak();
        }
        v33 = (unsigned int)__lzcnt(0x100ui64) ^ 0x3F;
        result.m_image = (const GfxImage *)(~(1i64 << v33) & 0x100);
        if ( result.m_image && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 570, ASSERT_TYPE_ASSERT, "( ( v & ~( uint64_t( 1 ) << ret ) ) == 0 )", "iLog2: %llu, 0x%llx is not power of 2", 256i64, 256i64) )
          __debugbreak();
        v34 = (const GfxImage *)compileTimeLog2(8ui64);
        v38 = (*((_DWORD *)v28 + 13) >> 18) & 0xF;
        result.m_image = v34;
        if ( v38 != v33 - (_QWORD)v34 )
        {
          if ( v35 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 570, ASSERT_TYPE_ASSERT, "( ( v & ~( uint64_t( 1 ) << ret ) ) == 0 )", v36, v37, v37) )
            __debugbreak();
          LODWORD(v85) = v33 - LODWORD(result.m_image);
          LODWORD(v84) = (*((_DWORD *)v28 + 13) >> 18) & 0xF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2734, ASSERT_TYPE_ASSERT, "( inFlightCopy->alignLog2 ) == ( BitEncodeAlignment( R_IMAGE_ALIGNMENT ) )", "%s == %s\n\t%u, %u", "inFlightCopy->alignLog2", "BitEncodeAlignment( R_IMAGE_ALIGNMENT )", v84, v85) )
            __debugbreak();
        }
        v39 = v28;
        *((_DWORD *)v28 + 13) |= (partBits << 28) | 0x400000;
      }
      else
      {
        if ( *((_DWORD *)v6 + 2) != *((_DWORD *)v6 + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2742, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead == node->vAddrOffsetWrite)", (const char *)&queryFormat, "node->vAddrOffsetRead == node->vAddrOffsetWrite") )
          __debugbreak();
        v39 = RStackThreadSafe<StreamDefragCommand>::Pop(&this->mDefragPool);
        if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2745, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
          __debugbreak();
        v94 = 0i64;
        v95 = 0i64;
        v96 = 0i64;
        v97 = 0i64;
        *(__m256i *)&v39->node = (__m256i)0;
        v98 = 0ui64;
        *(_OWORD *)&v39->partOffset[2] = 0ui64;
        v99 = 0i64;
        *((double *)v39 + 6) = 0i64;
        v40 = __lzcnt(0x100ui64) ^ 0x3F;
        v39->node = v6;
        *((_DWORD *)v39 + 13) = (partBits << 28) | (*((_DWORD *)v39 + 13) ^ (*((_DWORD *)v39 + 13) ^ (*(_DWORD *)v6 >> 3)) & 0xF000000) & 0xFFFFFFF;
        if ( (~(1i64 << v40) & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 570, ASSERT_TYPE_ASSERT, "( ( v & ~( uint64_t( 1 ) << ret ) ) == 0 )", "iLog2: %llu, 0x%llx is not power of 2", 256i64, 256i64) )
          __debugbreak();
        v41 = 0i64;
        v42 = *((_DWORD *)v39 + 13) ^ (*((_DWORD *)v39 + 13) ^ ((v40 - (unsigned int)compileTimeLog2(8ui64)) << 18)) & 0x3C0000;
        *((_DWORD *)v39 + 13) = v42;
        v43 = ((unsigned __int16)v42 ^ (unsigned __int16)(*((_DWORD *)v6 + 1) >> 9)) & 0x3800 ^ v42;
        *((_DWORD *)v39 + 13) = v43;
        *((_DWORD *)v39 + 11) = *((_DWORD *)v6 + 2);
        *((_DWORD *)v39 + 13) = v43 ^ (v43 ^ (*((_DWORD *)v6 + 1) >> 9)) & 0x3C000;
        for ( v39->unmapFrame = this->mDefragUnmapFrameDepth + this->mDefragFrameIndex + 1; (unsigned int)v41 < v21->streamedPartCount; v41 = (unsigned int)(v41 + 1) )
        {
          v39->partSize[v41] = Image_ExclusivePartSize(v21, v41);
          v39->partOffset[v41] = Image_PartOffset(v21, v41);
        }
        Sys_LockWrite(&this->mDefragLockCriticalSection);
        v10 = (*((_DWORD *)v39 + 13) & 0xF000000) == 0;
        LODWORD(result.m_image) = *((_DWORD *)v39 + 13) & 0xF000000;
        v86 = !v10;
        updated = StreamDefrag::UpdateNewTailAddressBeforeMove(this, v6);
        v45 = 0;
        if ( !updated )
          v45 = 0x800000;
        *((_DWORD *)v39 + 13) = *((_DWORD *)v39 + 13) & 0xFF3FFFFF | 0x400000 | v45;
        if ( updated )
        {
          m_image = unmappedPages.m_image;
          v26 = (StreamDefrag::AddressSpace *)p_mMoveableRegion;
        }
        else
        {
          MaxVaSize = NodeGetMaxVaSize(v6);
          v47 = NodeGetVaSizeForParts(v6, (*((_DWORD *)v6 + 1) >> 20) & 7);
          v48 = StrmOffsetToAddress((StreamMemPool)unmappedPages.m_image, *((unsigned int *)v6 + 2));
          v49 = MaxVaSize - v47;
          v26 = (StreamDefrag::AddressSpace *)p_mMoveableRegion;
          v50 = (unsigned __int64)&v48[v49];
          b[0] = v50;
          if ( v50 == p_mMoveableRegion->mAddrTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2784, ASSERT_TYPE_ASSERT, "( vAddrRead ) != ( moveableRegion.GetTail() )", "%s != %s\n\t%llx, %llx", "vAddrRead", "moveableRegion.GetTail()", v50, p_mMoveableRegion->mAddrTail) )
            __debugbreak();
          m_image = unmappedPages.m_image;
          mTail = this->mNextTailAddresses[(__int64)unmappedPages.m_image].mTail;
          if ( mTail )
          {
            v52 = **((_QWORD **)&this->mFreePool.mHead + 2 * ((__int64)&unmappedPages.m_image[888].streams[2].xpakEntry.offset + 7));
            v53 = (const GfxImage *)StreamDefragRegion<1>::CircularAddressDistance(p_mMoveableRegion, v52, mTail->vAddrNextTail);
            v54 = v52;
            v26 = (StreamDefrag::AddressSpace *)p_mMoveableRegion;
            unmappedPages.m_image = v53;
            v55 = (const GfxImage *)StreamDefragRegion<1>::CircularAddressDistance(p_mMoveableRegion, v54, b[0]);
            if ( unmappedPages.m_image > v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2792, ASSERT_TYPE_ASSERT, "( nextTailBeginToEndDist ) <= ( nextTailBeginToReadDist )", "%s <= %s\n\t%llx, %llx", "nextTailBeginToEndDist", "nextTailBeginToReadDist", unmappedPages.m_image, v55) )
              __debugbreak();
          }
        }
        if ( !LODWORD(result.m_image) )
        {
          v56 = *((unsigned int *)v6 + 2);
          unmappedPages.m_image = NULL;
          StreamDefrag::TrackDecommitParts(this, v39, v56, partBits);
          StreamDefrag::DecommitParts(this, v39, *((unsigned int *)v6 + 2), partBits, (StreamerMemPageCounts *)&unmappedPages);
          StreamDefrag::AddPagesToDefragPageSurplus(this, (const StreamerMemPageCounts *)&unmappedPages);
        }
      }
      if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2810, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
        __debugbreak();
      if ( ((unsigned __int8)partBits & *((_BYTE *)v39 + 55)) != ((*(_DWORD *)v6 >> 27) & 0xF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2811, ASSERT_TYPE_ASSERT, "(( command->copyParts & prevMappedParts ) == node->inuseParts)", (const char *)&queryFormat, "( command->copyParts & prevMappedParts ) == node->inuseParts") )
        __debugbreak();
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2274, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( ((*(_DWORD *)v6 >> 19) & 1) != v26->mMoveableRegion.mPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2275, ASSERT_TYPE_ASSERT, "(static_cast<StreamMemPool>( node->memPool ) == mPool)", (const char *)&queryFormat, "static_cast<StreamMemPool>( node->memPool ) == mPool") )
        __debugbreak();
      if ( v28 )
      {
        if ( v28->node != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2282, ASSERT_TYPE_ASSERT, "(inFlightCopy->node == node)", (const char *)&queryFormat, "inFlightCopy->node == node") )
          __debugbreak();
        StreamDefragRegion<1>::DecreaseVASizeUsedForNodeWriteOffset(&v26->mMoveableRegion, v6);
      }
      mHead = v26->mMoveableRegion.mAllocations.mHead;
      b[0] = (unsigned __int64)v26->mMoveableRegion.mAllocations.mTail;
      if ( mHead )
      {
        while ( 1 )
        {
          v58 = (int)(*(_DWORD *)mHead << 13) >> 13;
          if ( mHead == v6 )
            break;
          if ( v58 )
          {
            mHead += v58;
            if ( mHead )
              continue;
          }
          goto LABEL_161;
        }
      }
      else
      {
LABEL_161:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2288, ASSERT_TYPE_ASSERT, "(mAllocations.Contains( node ))", (const char *)&queryFormat, "mAllocations.Contains( node )") )
          __debugbreak();
      }
      RList<StreamDefragAllocNode>::Remove(&v26->mMoveableRegion.mAllocations, v6);
      if ( (StreamDefragAllocNode *)b[0] == v6 )
      {
        v59 = v26->mMoveableRegion.mAllocations.mTail;
        if ( v59 )
        {
          if ( (*((_DWORD *)v59 + 1) & 0x7800000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2299, ASSERT_TYPE_ASSERT, "(newHeadNode->vAddrEndAlignLog2 != 0)", (const char *)&queryFormat, "newHeadNode->vAddrEndAlignLog2 != 0") )
            __debugbreak();
          *((_DWORD *)v59 + 1) &= 0xF87FFFFF;
        }
        v26 = (StreamDefrag::AddressSpace *)p_mMoveableRegion;
      }
      unmappedPages.m_image = (const GfxImage *)StreamDefragRegion<1>::Assign(&v26->mMoveableRegion, v6, v21->totalSize, 0x100ui64, NULL);
      v89 = StrmOffsetToAddress((StreamMemPool)m_image, (unsigned __int64)unmappedPages.m_image);
      Item = Stream_Logger_MakeItem(&result, v6);
      fmt = v21->totalSize;
      *(Stream_Logger_Item *)b = *Item;
      Stream_Logger_OnVirtualAddressReserved("StreamDefrag::ResolveMap", dataa, (const Stream_Logger_Item *)b, v89, fmt);
      StreamDefrag::TrackCommitParts(this, v39, (unsigned __int64)unmappedPages.m_image, partBits);
      StreamDefrag::CommitParts(this, v39, (unsigned __int64)unmappedPages.m_image, partBits, &streamMap->pagesReserved);
      v61 = Stream_Logger_MakeItem(&result, v6);
      v62 = *((unsigned int *)v6 + 3);
      *(Stream_Logger_Item *)b = *v61;
      v63 = StrmOffsetToAddress((StreamMemPool)m_image, v62);
      Stream_Logger_OnVAddrOffsetWriteChanged("StreamDefrag::ResolveMap", dataa, (const Stream_Logger_Item *)b, v63, v89);
      v64 = (int)unmappedPages.m_image;
      v65 = *((_DWORD *)v6 + 1) & 0xF80FFFFF;
      *((_DWORD *)v6 + 3) = unmappedPages.m_image;
      streamedPartCount = v21->streamedPartCount;
      *(_DWORD *)v6 |= 0x400000u;
      *((_DWORD *)v6 + 1) = v65 | ((streamedPartCount & 7) << 20);
      if ( v28 )
      {
        if ( *((_DWORD *)v6 + 2) == v64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2855, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead != node->vAddrOffsetWrite)", (const char *)&queryFormat, "node->vAddrOffsetRead != node->vAddrOffsetWrite") )
          __debugbreak();
        StreamDefragRegion<1>::OnDefragMoveDone(&v26->mMoveableRegion);
        StreamDefragRegion<1>::OnDefragCopyDone(&v26->mMoveableRegion);
      }
      else
      {
        if ( v86 )
        {
          StreamDefrag::InsertCommand<0>(this, v39);
        }
        else
        {
          StreamDefragRegion<1>::OnUnmapOldAddress(&v26->mMoveableRegion, v39, 0);
          v67 = Stream_Logger_MakeItem(&unmappedPages, v6);
          v68 = *((unsigned int *)v6 + 2);
          *(Stream_Logger_Item *)b = *v67;
          v69 = StrmOffsetToAddress((StreamMemPool)m_image, v68);
          Stream_Logger_OnVAddrOffsetReadChanged("StreamDefrag::ResolveMap", dataa, (const Stream_Logger_Item *)b, v69, v89);
          *((_DWORD *)v6 + 2) = *((_DWORD *)v6 + 3);
          RStackThreadSafe<StreamDefragCommand>::Push(&this->mDefragPool, v39);
          *(_DWORD *)v6 &= ~0x400000u;
        }
        Sys_UnlockWrite(&this->mDefragLockCriticalSection);
      }
      StreamDefragRegion<1>::PushBack(&v26->mMoveableRegion, v6);
    }
    v70 = 32 - __lzcnt((*(_DWORD *)v6 >> 23) & 0xF);
    if ( v70 > ((*((_DWORD *)v6 + 1) >> 20) & 7u) )
    {
      LODWORD(v85) = (*((_DWORD *)v6 + 1) >> 20) & 7;
      LODWORD(v84) = v70;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2864, ASSERT_TYPE_ASSERT, "( GetHighestSetPartCount( node->mappedParts ) ) <= ( node->vaReservedPartCount )", "%s <= %s\n\t%u, %u", "GetHighestSetPartCount( node->mappedParts )", "node->vaReservedPartCount", v84, v85) )
        __debugbreak();
    }
    v71 = StrmOffsetToAddress((StreamMemPool)m_image, *((unsigned int *)v6 + 3));
    v3 = streamMap;
  }
  v72 = v71;
  if ( !v71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2880, ASSERT_TYPE_ASSERT, "(addressWrite != nullptr)", (const char *)&queryFormat, "addressWrite != nullptr") )
    __debugbreak();
  mapOffset = v3->mapOffset;
  mapSize = v3->mapSize;
  v75 = &v72[mapOffset];
  v76 = (char *)this + 256 * (_QWORD)m_image;
  v77 = &v75[mapSize];
  if ( (*(_DWORD *)v6 & 0x200000) != 0 )
  {
    StreamDefragRegion<1>::OnCommit((StreamDefragRegion<1> *)(v76 + 3297288), v75, v77);
    StreamDefragRegion<1>::Validate((StreamDefragRegion<1> *)(v76 + 3297288));
  }
  else
  {
    StreamDefragRegion<0>::AssertValidAddressRange((StreamDefragRegion<0> *)(v76 + 3297416), v75, v77);
    v78 = truncate_cast<unsigned __int64,__int64>(mapSize) + *((_QWORD *)v76 + 412187);
    v79 = *((_QWORD *)v76 + 412185);
    *((_QWORD *)v76 + 412187) = v78;
    if ( v78 > v79 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2108, ASSERT_TYPE_ASSERT, "( mVaSizeCommitted ) <= ( mVaSizeUsed )", "%s <= %s\n\t%zu, %zu", "mVaSizeCommitted", "mVaSizeUsed", v78, v79) )
      __debugbreak();
    StreamDefragRegion<0>::Validate((StreamDefragRegion<0> *)(v76 + 3297416));
  }
  return v72;
}

/*
==============
StreamDefrag::ResolveNewAddr
==============
*/
unsigned __int8 *StreamDefrag::ResolveNewAddr(StreamDefrag *this, const GfxBackEndData *data, StreamDefragAllocNode *node)
{
  unsigned int v6; 
  unsigned int totalSize; 
  bool v8; 
  unsigned int v9; 
  StreamKey *StreamKeyAtIndex; 
  unsigned int v11; 
  GfxImage *GfxImageAtIndex; 
  StreamMemPool ItemMemPool; 
  __int64 v14; 
  __int64 v15; 
  StreamDefrag::AddressSpace *v16; 
  bool v17; 
  unsigned __int64 v18; 
  int v19; 
  int v20; 
  unsigned int v21; 
  const unsigned __int8 *v22; 
  unsigned __int64 v23; 
  const unsigned __int8 *v24; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 

  Stream_Defrag_CheckLocks(this, data);
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2976, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (*(_DWORD *)node & 0x100000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2977, ASSERT_TYPE_ASSERT, "(node->valid)", (const char *)&queryFormat, "node->valid") )
    __debugbreak();
  if ( __popcnt((*(_DWORD *)node >> 23) & 0xF) != 1 )
  {
    LODWORD(v26) = (*(_DWORD *)node >> 23) & 0xF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2978, ASSERT_TYPE_ASSERT, "( ( CountBitsGeneric( node->mappedParts ) == 1 ) )", "( node->mappedParts ) = %u", v26) )
      __debugbreak();
  }
  v6 = *((_DWORD *)node + 1);
  totalSize = 0;
  v8 = 0;
  v9 = 16;
  if ( (v6 & 3) == 0 )
  {
    GfxImageAtIndex = DB_GetGfxImageAtIndex((v6 >> 2) & 0x3FFFF);
    v9 = 256;
    totalSize = GfxImageAtIndex->totalSize;
    *((_DWORD *)node + 1) ^= (*((_DWORD *)node + 1) ^ (GfxImageAtIndex->streamedPartCount << 20)) & 0x700000;
    goto LABEL_23;
  }
  if ( (*((_DWORD *)node + 1) & 3) == 1 )
  {
    totalSize = DB_GetXModelSurfsAtIndex((v6 >> 2) & 0x3FFFF)->shared->dataSize;
    *((_DWORD *)node + 1) &= 0xFF9FFFFF;
    *((_DWORD *)node + 1) |= 0x100000u;
    goto LABEL_23;
  }
  if ( (*((_DWORD *)node + 1) & 3) == 2 )
  {
    StreamKeyAtIndex = DB_GetStreamKeyAtIndex((v6 >> 2) & 0x3FFFF);
    totalSize = StreamKeyAtIndex->dataSize;
    v11 = StreamKey_UserAlignment(StreamKeyAtIndex);
    *((_DWORD *)node + 1) &= 0xFF9FFFFF;
    *((_DWORD *)node + 1) |= 0x100000u;
    v9 = v11;
    v8 = StreamKey_UserForceFixedRegion(StreamKeyAtIndex);
    if ( v9 < 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3014, ASSERT_TYPE_ASSERT, "( alignment ) >= ( MIN_DEFRAG_ALIGNMENT )", "%s >= %s\n\t%u, %u", "alignment", "MIN_DEFRAG_ALIGNMENT", v9, 16) )
      __debugbreak();
    if ( v9 > 0x10000 )
    {
      LODWORD(v29) = 0x10000;
      LODWORD(v28) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3015, ASSERT_TYPE_ASSERT, "( alignment ) <= ( MAX_DEFRAG_ALIGNMENT )", "%s <= %s\n\t%u, %u", "alignment", "MAX_DEFRAG_ALIGNMENT", v28, v29) )
        goto LABEL_14;
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3012, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
  {
LABEL_14:
    __debugbreak();
  }
LABEL_23:
  ItemMemPool = Stream_Alloc_GetItemMemPool((StreamItemType)(*((_DWORD *)node + 1) & 3), (*((_DWORD *)node + 1) >> 2) & 0x3FFFF);
  v15 = (unsigned int)ItemMemPool;
  if ( (unsigned int)ItemMemPool >= COUNT )
  {
    LODWORD(v27) = 2;
    LODWORD(v26) = ItemMemPool;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3018, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( StreamMemPool::COUNT )", "pool doesn't index StreamMemPool::COUNT\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  v16 = &this->mAddressSpaces[v15];
  v17 = totalSize <= 0x1000000 && !v8;
  v18 = *(_DWORD *)node ^ (*(_DWORD *)node ^ ((_DWORD)v15 << 19)) & 0x80000u;
  *(_DWORD *)node = v18;
  if ( (((unsigned int)v18 >> 19) & 1) != (_DWORD)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3024, ASSERT_TYPE_ASSERT, "( node->memPool ) == ( static_cast<uint64_t>( pool ) )", "%s == %s\n\t%llu, %llu", "node->memPool", "static_cast<uint64_t>( pool )", (v18 >> 19) & 1, v15) )
    __debugbreak();
  *(_DWORD *)node &= ~0x200000u;
  *(_DWORD *)node |= v17 << 21;
  if ( v17 )
  {
    Stream_Defrag_CheckLocks(v18, v14);
    if ( (*((_DWORD *)node + 4) & 0x380000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1681, ASSERT_TYPE_ASSERT, "(node->defragLockCount == 0)", (const char *)&queryFormat, "node->defragLockCount == 0") )
      __debugbreak();
    if ( (*(_DWORD *)node & 0x400000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1683, ASSERT_TYPE_ASSERT, "(!node->isVaResizing)", (const char *)&queryFormat, "!node->isVaResizing") )
      __debugbreak();
    if ( (*((_DWORD *)node + 1) & 0x7800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1685, ASSERT_TYPE_ASSERT, "(node->vAddrEndAlignLog2 == 0)", (const char *)&queryFormat, "node->vAddrEndAlignLog2 == 0") )
      __debugbreak();
    v19 = StreamDefragRegion<1>::Assign(&v16->mMoveableRegion, node, totalSize, v9, NULL);
    v20 = (*(_DWORD *)node >> 19) & 1;
    *((_DWORD *)node + 3) = v19;
    *((_DWORD *)node + 2) = v19;
    if ( v20 != v16->mMoveableRegion.mPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1690, ASSERT_TYPE_ASSERT, "(pool == mPool)", (const char *)&queryFormat, "pool == mPool") )
      __debugbreak();
    item = *Stream_Logger_MakeItem(&result, node);
    v21 = truncate_cast<unsigned int,unsigned __int64>(totalSize);
    v22 = StrmOffsetToAddress((StreamMemPool)v20, *((unsigned int *)node + 2));
    Stream_Logger_OnAddressAssigned("StreamDefragRegion<1>::AssignAndFixup", data, &item, v22, v21);
    StreamDefragRegion<1>::PushBack(&v16->mMoveableRegion, node);
    Node_PtrFixup(data, node, 1);
    v23 = *((unsigned int *)node + 2);
  }
  else
  {
    v23 = StreamDefragRegion<0>::AssignAndFixup(&v16->mFixedRegion, data, node, totalSize, 0x10000ui64);
  }
  item = *Stream_Logger_MakeItem(&result, node);
  v24 = StrmOffsetToAddress((StreamMemPool)v15, v23);
  Stream_Logger_OnVirtualAddressReserved("StreamDefrag::ResolveNewAddr", data, &item, v24, totalSize);
  return StrmOffsetToAddress((StreamMemPool)v15, v23);
}

/*
==============
StreamDefrag::ResolveUnmap
==============
*/
unsigned __int8 *StreamDefrag::ResolveUnmap(StreamDefrag *this, const StreamUnmapCmdData *streamUnmap)
{
  unsigned int *data; 
  int v6; 
  unsigned __int64 v7; 
  unsigned __int8 *v8; 
  const unsigned __int8 *v9; 
  const unsigned __int8 *v10; 
  StreamDefragCommand *v11; 
  StreamDefragCommand *v12; 
  StreamDefragCommand *mHead; 
  int v14; 
  StreamDefragCommand *v15; 
  int v16; 
  StreamDefragCommand *v17; 
  int v18; 
  unsigned int v19; 
  char *v20; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  __int64 v24; 

  Stream_Defrag_CheckLocks(this, streamUnmap);
  data = (unsigned int *)streamUnmap->baseAddrHandle.data;
  if ( streamUnmap->baseAddrHandle.data < (unsigned __int64)this || data >= (unsigned int *)this->mAddressSpaces )
    data = NULL;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2904, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !data[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2905, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead)", (const char *)&queryFormat, "node->vAddrOffsetRead") )
    __debugbreak();
  if ( ((unsigned __int8)(1i64 << streamUnmap->partIndex) & ((unsigned __int64)data[1] >> 27) & 0xF) != 0 )
  {
    LODWORD(v24) = (data[1] >> 27) & 0xF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2906, ASSERT_TYPE_ASSERT, "( ( ( node->vAddrOffsetWriteLockParts & ( 1ull << streamUnmap->partIndex ) ) == 0 ) )", "( node->vAddrOffsetWriteLockParts ) = %u", v24) )
      __debugbreak();
  }
  v6 = (*data >> 19) & 1;
  if ( (*data & 0x7800000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2912, ASSERT_TYPE_ASSERT, "(node->mappedParts != 0)", (const char *)&queryFormat, "node->mappedParts != 0") )
    __debugbreak();
  v7 = data[3];
  *data &= (~(1 << streamUnmap->partIndex) << 23) | 0xF87FFFFF;
  v8 = StrmOffsetToAddress((StreamMemPool)v6, v7);
  v9 = &v8[streamUnmap->mapOffset];
  v10 = &v9[streamUnmap->mapSize];
  if ( (*data & 0x200000) != 0 )
  {
    if ( (*data & 0x100000) != 0 )
    {
      v11 = StreamDefrag::BackendFlushProtection(this, (const StreamDefragAllocNode *)data);
      v12 = v11;
      if ( v11 )
      {
        if ( (unsigned int *)v11->node != data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2927, ASSERT_TYPE_ASSERT, "(inFlightCopy->node == node)", (const char *)&queryFormat, "inFlightCopy->node == node") )
          __debugbreak();
        *((_DWORD *)v12 + 13) ^= (*((_DWORD *)v12 + 13) ^ ((HIBYTE(*((_DWORD *)v12 + 13)) & 0xF & ~(1 << streamUnmap->partIndex)) << 24)) & 0xF000000;
      }
    }
    else
    {
      mHead = this->mDefragSteps[0].mHead;
      if ( mHead )
      {
        while ( 1 )
        {
          v14 = (int)(*((_DWORD *)mHead + 13) << 21) >> 21;
          if ( (unsigned int *)mHead->node == data )
            break;
          if ( v14 )
          {
            mHead += v14;
            if ( mHead )
              continue;
          }
          goto LABEL_33;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2941, ASSERT_TYPE_ASSERT, "(DefragStepCommands( StreamDefragStep::COPY ).FindIf( isNodeToBeFreed ) == nullptr)", (const char *)&queryFormat, "DefragStepCommands( StreamDefragStep::COPY ).FindIf( isNodeToBeFreed ) == nullptr") )
          __debugbreak();
      }
LABEL_33:
      v15 = this->mDefragSteps[1].mHead;
      if ( v15 )
      {
        while ( 1 )
        {
          v16 = (int)(*((_DWORD *)v15 + 13) << 21) >> 21;
          if ( (unsigned int *)v15->node == data )
            break;
          if ( v16 )
          {
            v15 += v16;
            if ( v15 )
              continue;
          }
          goto LABEL_40;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2942, ASSERT_TYPE_ASSERT, "(DefragStepCommands( StreamDefragStep::PTR_FIXUP ).FindIf( isNodeToBeFreed ) == nullptr)", (const char *)&queryFormat, "DefragStepCommands( StreamDefragStep::PTR_FIXUP ).FindIf( isNodeToBeFreed ) == nullptr") )
          __debugbreak();
      }
LABEL_40:
      v17 = this->mDefragSteps[2].mHead;
      if ( v17 )
      {
        while ( 1 )
        {
          v18 = (int)(*((_DWORD *)v17 + 13) << 21) >> 21;
          if ( (unsigned int *)v17->node == data )
            break;
          if ( v18 )
          {
            v17 += v18;
            if ( v17 )
              continue;
          }
          goto LABEL_47;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2943, ASSERT_TYPE_ASSERT, "(DefragStepCommands( StreamDefragStep::UNMAP_OLD_ADDRESS ).FindIf( isNodeToBeFreed ) == nullptr)", (const char *)&queryFormat, "DefragStepCommands( StreamDefragStep::UNMAP_OLD_ADDRESS ).FindIf( isNodeToBeFreed ) == nullptr") )
          __debugbreak();
      }
    }
  }
LABEL_47:
  v19 = *data;
  if ( (*data & 0x100000) != 0 )
  {
    v20 = (char *)this + 256 * (unsigned __int64)((v19 >> 19) & 1);
    if ( (v19 & 0x200000) != 0 )
    {
      StreamDefragRegion<1>::OnDecommit((StreamDefragRegion<1> *)(v20 + 3297288), v9, v10);
      v21 = *data;
      if ( (v21 & 0x7800000) == 0 )
      {
        this->mAddressSpaces[(v21 >> 19) & 1].mMoveableRegion.mVaSizeFullyUnmapped += NodeGetVaSizeForParts((const StreamDefragAllocNode *)data, (data[1] >> 20) & 7);
        LODWORD(v21) = *data;
      }
      StreamDefragRegion<1>::Validate(&this->mAddressSpaces[(unsigned __int64)(((unsigned int)v21 >> 19) & 1)].mMoveableRegion);
    }
    else
    {
      StreamDefragRegion<0>::OnDecommit((StreamDefragRegion<0> *)(v20 + 3297416), v9, v10);
      v22 = *data;
      if ( (v22 & 0x7800000) == 0 )
      {
        this->mAddressSpaces[(v22 >> 19) & 1].mFixedRegion.mVaSizeFullyUnmapped += NodeGetVaSizeForParts((const StreamDefragAllocNode *)data, (data[1] >> 20) & 7);
        LODWORD(v22) = *data;
      }
      StreamDefragRegion<0>::Validate(&this->mAddressSpaces[(unsigned __int64)(((unsigned int)v22 >> 19) & 1)].mFixedRegion);
    }
  }
  return v8;
}

/*
==============
Stream_AddressSpace_FreeGenericHandle
==============
*/
void Stream_AddressSpace_FreeGenericHandle(StreamKey *streamKey)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5486, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5487, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5488, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
    __debugbreak();
  if ( (streamKey->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5489, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
    __debugbreak();
  DB_GetStreamKeyIndex(streamKey);
  if ( streamKey->data.dataHandle.data )
  {
    StreamDefrag::FreeHandle(s_streamDefrag, &streamKey->data.dataHandle);
    if ( streamKey->data.dataHandle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5411, ASSERT_TYPE_ASSERT, "(handle.data == 0)", (const char *)&queryFormat, "handle.data == 0") )
      __debugbreak();
    if ( streamKey->data.dataHandle.data )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5493, ASSERT_TYPE_ASSERT, "(streamKey->data.dataHandle.data == 0)", (const char *)&queryFormat, "streamKey->data.dataHandle.data == 0") )
        __debugbreak();
    }
  }
}

/*
==============
Stream_AddressSpace_FreeImageHandle
==============
*/
void Stream_AddressSpace_FreeImageHandle(GfxImage *image)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5459, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5460, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5461, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5462, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  DB_GetGfxImageIndex(image);
  if ( image->pixels.streamedDataHandle.data )
  {
    StreamDefrag::FreeHandle(s_streamDefrag, &image->pixels.streamedDataHandle);
    if ( image->pixels.streamedDataHandle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5411, ASSERT_TYPE_ASSERT, "(handle.data == 0)", (const char *)&queryFormat, "handle.data == 0") )
      __debugbreak();
    if ( image->pixels.streamedDataHandle.data )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5466, ASSERT_TYPE_ASSERT, "(image->pixels.streamedDataHandle.data == 0)", (const char *)&queryFormat, "image->pixels.streamedDataHandle.data == 0") )
        __debugbreak();
    }
  }
}

/*
==============
Stream_AddressSpace_FreeMeshHandle
==============
*/
void Stream_AddressSpace_FreeMeshHandle(XModelSurfs *mesh)
{
  XSurfaceShared *shared; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5472, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5473, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5474, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
    __debugbreak();
  if ( !mesh->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5475, ASSERT_TYPE_ASSERT, "(mesh->shared)", (const char *)&queryFormat, "mesh->shared") )
    __debugbreak();
  if ( (mesh->shared->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5476, ASSERT_TYPE_ASSERT, "(mesh->shared->IsStreamed())", (const char *)&queryFormat, "mesh->shared->IsStreamed()") )
    __debugbreak();
  DB_GetXModelSurfsIndex(mesh);
  shared = mesh->shared;
  if ( shared->data.streamedDataHandle.data )
  {
    StreamDefrag::FreeHandle(s_streamDefrag, &mesh->shared->data.streamedDataHandle);
    if ( shared->data.streamedDataHandle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5411, ASSERT_TYPE_ASSERT, "(handle.data == 0)", (const char *)&queryFormat, "handle.data == 0") )
      __debugbreak();
    if ( mesh->shared->data.streamedDataHandle.data )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5480, ASSERT_TYPE_ASSERT, "(mesh->shared->data.streamedDataHandle.data == 0)", (const char *)&queryFormat, "mesh->shared->data.streamedDataHandle.data == 0") )
        __debugbreak();
    }
  }
}

/*
==============
Stream_AddressSpace_GenericHandle
==============
*/
streamer_handle_t Stream_AddressSpace_GenericHandle(StreamKey *streamKey)
{
  int v2; 
  streamer_handle_t v3; 
  __int64 v4; 
  StreamItemType type; 

  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5445, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
    __debugbreak();
  if ( !streamKey->dataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5446, ASSERT_TYPE_ASSERT, "(streamKey->dataSize > 0)", (const char *)&queryFormat, "streamKey->dataSize > 0") )
    __debugbreak();
  if ( (streamKey->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5447, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
    __debugbreak();
  DB_GetStreamKeyIndex(streamKey);
  if ( !streamKey->data.dataHandle.data )
  {
    LOBYTE(v2) = 2;
    v3.data = StreamDefrag::ReserveHandle(s_streamDefrag, (StreamItemType)&type, v2).data;
    v4 = *(_QWORD *)v3.data;
    streamKey->data.dataHandle.data = *(_QWORD *)v3.data;
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5396, ASSERT_TYPE_ASSERT, "(handle.data != 0)", (const char *)&queryFormat, "handle.data != 0") )
      __debugbreak();
    if ( !streamKey->data.dataHandle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5452, ASSERT_TYPE_ASSERT, "(streamKey->data.dataHandle.data != 0)", (const char *)&queryFormat, "streamKey->data.dataHandle.data != 0") )
      __debugbreak();
  }
  return (streamer_handle_t)streamKey->data.dataHandle.data;
}

/*
==============
Stream_AddressSpace_ImageHandle
==============
*/
streamer_handle_t Stream_AddressSpace_ImageHandle(GfxImage *image)
{
  streamer_handle_t v2; 
  __int64 v3; 
  StreamItemType type; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5418, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5419, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  DB_GetGfxImageIndex(image);
  if ( !image->pixels.streamedDataHandle.data )
  {
    v2.data = StreamDefrag::ReserveHandle(s_streamDefrag, (StreamItemType)&type, 0).data;
    v3 = *(_QWORD *)v2.data;
    image->pixels.streamedDataHandle.data = *(_QWORD *)v2.data;
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5396, ASSERT_TYPE_ASSERT, "(handle.data != 0)", (const char *)&queryFormat, "handle.data != 0") )
      __debugbreak();
    if ( !image->pixels.streamedDataHandle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5424, ASSERT_TYPE_ASSERT, "(image->pixels.streamedDataHandle.data != 0)", (const char *)&queryFormat, "image->pixels.streamedDataHandle.data != 0") )
      __debugbreak();
  }
  return (streamer_handle_t)image->pixels.streamedDataHandle.data;
}

/*
==============
Stream_AddressSpace_Init
==============
*/
void Stream_AddressSpace_Init(void)
{
  StreamAddressManager *v0; 
  unsigned __int64 v1; 
  unsigned __int64 v2; 
  StreamDefrag *v3; 
  StreamDefrag *v4; 

  if ( s_streamAddressManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5360, ASSERT_TYPE_ASSERT, "(s_streamAddressManager == nullptr)", (const char *)&queryFormat, "s_streamAddressManager == nullptr") )
    __debugbreak();
  v0 = (StreamAddressManager *)PMem_Alloc(0x20ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "StreamAddressManager");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 87, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !Mem_Paged_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 88, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsInitialized())", (const char *)&queryFormat, "Mem_Paged_IsInitialized()") )
    __debugbreak();
  v1 = Mem_Paged_ReserveVirtualAddressRange(MEM_POOL_MAIN, 0x100000000ui64, "StreamerReserveCPU");
  v0->m_addressSpaces[0].base = v1;
  v0->m_addressSpaces[0].size = 0x100000000i64;
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 94, ASSERT_TYPE_ASSERT, "(addressSpaceCPU.base)", (const char *)&queryFormat, "addressSpaceCPU.base") )
    __debugbreak();
  v2 = Mem_Paged_ReserveVirtualAddressRange(MEM_POOL_GPU_PRIVATE, 0x800000000ui64, "StreamerReserveGPU");
  v0->m_addressSpaces[1].base = v2;
  v0->m_addressSpaces[1].size = 0x800000000i64;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 99, ASSERT_TYPE_ASSERT, "(addressSpaceGPU.base)", (const char *)&queryFormat, "addressSpaceGPU.base") )
    __debugbreak();
  s_streamAddressManager = v0;
  if ( s_streamDefrag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5365, ASSERT_TYPE_ASSERT, "(!s_streamDefrag)", (const char *)&queryFormat, "!s_streamDefrag") )
    __debugbreak();
  v3 = (StreamDefrag *)PMem_Alloc(0x333670ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "StreamDefrag");
  StreamDefrag::StreamDefrag(v3);
  s_streamDefrag = v4;
}

/*
==============
Stream_AddressSpace_LockFrontendAddr
==============
*/
unsigned __int8 *Stream_AddressSpace_LockFrontendAddr(streamer_handle_t handle, unsigned int part)
{
  bool v4; 
  _DWORD *data; 
  unsigned int v6; 
  bool v7; 
  unsigned __int64 v8; 
  unsigned int v9; 
  int v10; 
  const unsigned __int8 *v11; 
  bool v12; 
  const StreamDefragAllocNode *v13; 
  Stream_Logger_Item v14; 
  __int64 v16; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v18; 
  Stream_Logger_Item result; 

  if ( !handle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5557, ASSERT_TYPE_ASSERT, "(handle.data != 0)", (const char *)&queryFormat, "handle.data != 0") )
    __debugbreak();
  if ( part >= 4 )
  {
    LODWORD(v16) = part;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5560, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( MAX_PART_COUNT )", "part doesn't index MAX_PART_COUNT\n\t%i not in [0, %i)", v16, 4) )
      __debugbreak();
  }
  v4 = handle.data >= (unsigned __int64)s_streamDefrag && handle.data < (unsigned __int64)s_streamDefrag->mAddressSpaces;
  data = (_DWORD *)handle.data;
  if ( !v4 )
    data = NULL;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5563, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v18, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  v6 = data[1];
  if ( (v6 & 3) == 0 )
  {
    if ( ((unsigned __int8)(1i64 << part) & ((unsigned __int64)v6 >> 27) & 0xF) == 0 )
      goto LABEL_26;
    LODWORD(v16) = (v6 >> 27) & 0xF;
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5570, ASSERT_TYPE_ASSERT, "( ( ( node->vAddrOffsetWriteLockParts & ( 1ull << part ) ) == 0 ) )", "( node->vAddrOffsetWriteLockParts ) = %u", v16);
    goto LABEL_24;
  }
  if ( part && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5574, ASSERT_TYPE_ASSERT, "(part == 0)", (const char *)&queryFormat, "part == 0") )
    __debugbreak();
  v8 = (unsigned int)data[1];
  if ( (v8 & 0x78000000) != 0 )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5575, ASSERT_TYPE_ASSERT, "( node->vAddrOffsetWriteLockParts ) == ( 0 )", "%s == %s\n\t%llu, %llu", "node->vAddrOffsetWriteLockParts", "0", (v8 >> 27) & 0xF, 0i64);
LABEL_24:
    if ( v7 )
      __debugbreak();
  }
LABEL_26:
  v9 = data[1] ^ (data[1] ^ (((data[1] >> 27) & 0xF | (1 << part)) << 27)) & 0x78000000;
  data[1] = v9;
  v10 = (v9 >> 27) & 0xF;
  v11 = StrmOffsetToAddress((StreamMemPool)((*data >> 19) & 1), (unsigned int)data[3]);
  v12 = handle.data >= (unsigned __int64)s_streamDefrag && handle.data < (unsigned __int64)s_streamDefrag->mAddressSpaces;
  v13 = (const StreamDefragAllocNode *)handle.data;
  if ( !v12 )
    v13 = NULL;
  if ( v13 )
  {
    v14 = *Stream_Logger_MakeItem(&result, v13);
  }
  else
  {
    *(_QWORD *)&item.m_type = 3i64;
    item.m_image = (const GfxImage *)handle.data;
    v14 = item;
  }
  item = v14;
  Stream_Logger_OnVAddrOffsetWriteLocked("Stream_AddressSpace_LockFrontendAddr", NULL, &item, v11, v10);
  ScopedCriticalSection::~ScopedCriticalSection(&v18);
  return (unsigned __int8 *)v11;
}

/*
==============
Stream_AddressSpace_MeshHandle
==============
*/
streamer_handle_t Stream_AddressSpace_MeshHandle(XModelSurfs *mesh)
{
  int v2; 
  XSurfaceShared *shared; 
  streamer_handle_t v4; 
  __int64 v5; 
  StreamItemType type; 

  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5431, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
    __debugbreak();
  if ( !mesh->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5432, ASSERT_TYPE_ASSERT, "(mesh->shared)", (const char *)&queryFormat, "mesh->shared") )
    __debugbreak();
  if ( (mesh->shared->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5433, ASSERT_TYPE_ASSERT, "(mesh->shared->IsStreamed())", (const char *)&queryFormat, "mesh->shared->IsStreamed()") )
    __debugbreak();
  DB_GetXModelSurfsIndex(mesh);
  shared = mesh->shared;
  if ( !shared->data.streamedDataHandle.data )
  {
    LOBYTE(v2) = 1;
    v4.data = StreamDefrag::ReserveHandle(s_streamDefrag, (StreamItemType)&type, v2).data;
    v5 = *(_QWORD *)v4.data;
    shared->data.streamedDataHandle.data = *(_QWORD *)v4.data;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5396, ASSERT_TYPE_ASSERT, "(handle.data != 0)", (const char *)&queryFormat, "handle.data != 0") )
      __debugbreak();
    if ( !mesh->shared->data.streamedDataHandle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5438, ASSERT_TYPE_ASSERT, "(mesh->shared->data.streamedDataHandle.data != 0)", (const char *)&queryFormat, "mesh->shared->data.streamedDataHandle.data != 0") )
      __debugbreak();
  }
  return mesh->shared->data.streamedDataHandle;
}

/*
==============
Stream_AddressSpace_ResolveAddrMap
==============
*/
unsigned __int8 *Stream_AddressSpace_ResolveAddrMap(const GfxBackEndData *data, StreamMapCmdData *streamMap)
{
  return StreamDefrag::ResolveMap(s_streamDefrag, data, streamMap);
}

/*
==============
Stream_AddressSpace_ResolveAddrUnmap
==============
*/
unsigned __int8 *Stream_AddressSpace_ResolveAddrUnmap(const StreamUnmapCmdData *streamUnmap)
{
  return StreamDefrag::ResolveUnmap(s_streamDefrag, streamUnmap);
}

/*
==============
Stream_AddressSpace_ResolveFrontendAddr
==============
*/
unsigned __int8 *Stream_AddressSpace_ResolveFrontendAddr(streamer_handle_t handle)
{
  StreamDefrag::AddressSpace *data; 

  data = (StreamDefrag::AddressSpace *)handle.data;
  if ( !handle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5543, ASSERT_TYPE_ASSERT, "(handle.data != 0)", (const char *)&queryFormat, "handle.data != 0") )
    __debugbreak();
  if ( data < (StreamDefrag::AddressSpace *)s_streamDefrag || data >= s_streamDefrag->mAddressSpaces )
    data = NULL;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5546, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  return StrmOffsetToAddress((StreamMemPool)((LODWORD(data->mMoveableRegion.mAllocations.mHead) >> 19) & 1), HIDWORD(data->mMoveableRegion.mAllocations.mTail));
}

/*
==============
Stream_AddressSpace_ResolveHandle
==============
*/
unsigned __int8 *Stream_AddressSpace_ResolveHandle(const streamer_handle_t *handle)
{
  StreamDefrag::AddressSpace *data; 

  data = (StreamDefrag::AddressSpace *)handle->data;
  if ( handle->data )
  {
    if ( data < (StreamDefrag::AddressSpace *)s_streamDefrag || data >= s_streamDefrag->mAddressSpaces )
      data = NULL;
    if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5530, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( !LODWORD(data->mMoveableRegion.mAllocations.mTail) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5531, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead)", (const char *)&queryFormat, "node->vAddrOffsetRead") )
      __debugbreak();
    return StrmOffsetToAddress((StreamMemPool)((LODWORD(data->mMoveableRegion.mAllocations.mHead) >> 19) & 1), LODWORD(data->mMoveableRegion.mAllocations.mTail));
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5524, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "User code is accessing the streamer asset via handle %zu before it is ready!", 0i64) )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
Stream_AddressSpace_Shutdown
==============
*/
void Stream_AddressSpace_Shutdown(void)
{
  StreamDefrag *v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5374, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  v0 = s_streamDefrag;
  R_SyncRenderThread();
  StreamDefrag::FlushAsyncVA(v0, Block, MapsOnly, 0);
  StreamDefrag::FlushAsyncCPUMemCpy(v0, Block, 0);
  StreamDefrag::FlushAsyncVA(v0, Block, UnmapsOnly, 0);
  StreamerMemLoan::~StreamerMemLoan(&v0->mDefragPages);
  s_streamDefrag = NULL;
  s_streamAddressManager = NULL;
}

/*
==============
Stream_AddressSpace_UnlockFrontendAddr
==============
*/
void Stream_AddressSpace_UnlockFrontendAddr(streamer_handle_t handle, unsigned int part)
{
  bool v4; 
  _DWORD *data; 
  unsigned int v6; 
  bool v7; 
  unsigned int v8; 
  int v9; 
  bool v10; 
  const StreamDefragAllocNode *v11; 
  Stream_Logger_Item v12; 
  const unsigned __int8 *v13; 
  __int64 v14; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v16; 
  Stream_Logger_Item result; 

  if ( !handle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5596, ASSERT_TYPE_ASSERT, "(handle.data != 0)", (const char *)&queryFormat, "handle.data != 0") )
    __debugbreak();
  if ( part >= 4 )
  {
    LODWORD(v14) = part;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5599, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( MAX_PART_COUNT )", "part doesn't index MAX_PART_COUNT\n\t%i not in [0, %i)", v14, 4) )
      __debugbreak();
  }
  v4 = handle.data >= (unsigned __int64)s_streamDefrag && handle.data < (unsigned __int64)s_streamDefrag->mAddressSpaces;
  data = (_DWORD *)handle.data;
  if ( !v4 )
    data = NULL;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5602, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v16, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  v6 = data[1];
  if ( (v6 & 3) == 0 )
  {
    if ( ((unsigned __int8)(1i64 << part) & ((unsigned __int64)v6 >> 27) & 0xF) != 0 )
      goto LABEL_26;
    LODWORD(v14) = (v6 >> 27) & 0xF;
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5609, ASSERT_TYPE_ASSERT, "( ( ( node->vAddrOffsetWriteLockParts & ( 1ull << part ) ) != 0 ) )", "( node->vAddrOffsetWriteLockParts ) = %u", v14);
    goto LABEL_24;
  }
  if ( part && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5613, ASSERT_TYPE_ASSERT, "(part == 0)", (const char *)&queryFormat, "part == 0") )
    __debugbreak();
  if ( (data[1] & 0x78000000) != 0x8000000 )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5614, ASSERT_TYPE_ASSERT, "( node->vAddrOffsetWriteLockParts ) == ( 1 )", "%s == %s\n\t%llu, %llu", "node->vAddrOffsetWriteLockParts", "1", ((unsigned __int64)(unsigned int)data[1] >> 27) & 0xF, 1i64);
LABEL_24:
    if ( v7 )
      __debugbreak();
  }
LABEL_26:
  v8 = data[1] ^ (data[1] ^ (((data[1] >> 27) & 0xF & ~(1 << part)) << 27)) & 0x78000000;
  data[1] = v8;
  v9 = (v8 >> 27) & 0xF;
  v10 = handle.data >= (unsigned __int64)s_streamDefrag && handle.data < (unsigned __int64)s_streamDefrag->mAddressSpaces;
  v11 = (const StreamDefragAllocNode *)handle.data;
  if ( !v10 )
    v11 = NULL;
  if ( v11 )
  {
    v12 = *Stream_Logger_MakeItem(&result, v11);
  }
  else
  {
    *(_QWORD *)&item.m_type = 3i64;
    item.m_image = (const GfxImage *)handle.data;
    v12 = item;
  }
  item = v12;
  v13 = StrmOffsetToAddress((StreamMemPool)((*data >> 19) & 1), (unsigned int)data[3]);
  Stream_Logger_OnVAddrOffsetWriteUnlocked("Stream_AddressSpace_UnlockFrontendAddr", NULL, &item, v13, v9);
  ScopedCriticalSection::~ScopedCriticalSection(&v16);
}

/*
==============
Stream_Defrag_CheckLocks
==============
*/
bool Stream_Defrag_CheckLocks()
{
  bool result; 

  if ( !Sys_IsBackendOwnerThread() && !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 391, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush()") )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  result = Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE);
  if ( !result )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 393, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ) )", "Stream backend update lock not acquired in stream defrag!");
    if ( result )
      __debugbreak();
  }
  return result;
}

/*
==============
Stream_Defrag_DBPatchImage
==============
*/
void Stream_Defrag_DBPatchImage(GfxImage *image, unsigned int newAssetIndex)
{
  unsigned __int64 data; 
  __int64 v6; 
  unsigned int PoolSize; 

  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5638, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5639, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5640, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( newAssetIndex >= DB_GetPoolSize(ASSET_TYPE_IMAGE) )
  {
    PoolSize = DB_GetPoolSize(ASSET_TYPE_IMAGE);
    LODWORD(v6) = newAssetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5641, ASSERT_TYPE_ASSERT, "(unsigned)( newAssetIndex ) < (unsigned)( DB_GetPoolSize( ASSET_TYPE_IMAGE ) )", "newAssetIndex doesn't index DB_GetPoolSize( ASSET_TYPE_IMAGE )\n\t%i not in [0, %i)", v6, PoolSize) )
      __debugbreak();
  }
  data = image->pixels.streamedDataHandle.data;
  if ( data < (unsigned __int64)s_streamDefrag || data >= (unsigned __int64)s_streamDefrag->mAddressSpaces )
    data = 0i64;
  if ( data )
  {
    if ( (*(_BYTE *)(data + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5646, ASSERT_TYPE_ASSERT, "(node->assetType == STREAM_ITEM_IMAGE)", (const char *)&queryFormat, "node->assetType == STREAM_ITEM_IMAGE") )
      __debugbreak();
    if ( ((*(_DWORD *)(data + 4) >> 2) & 0x3FFFF) != DB_GetGfxImageIndex(image) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5647, ASSERT_TYPE_ASSERT, "(node->assetIndex == DB_GetGfxImageIndex( image ))", (const char *)&queryFormat, "node->assetIndex == DB_GetGfxImageIndex( image )") )
      __debugbreak();
    *(_DWORD *)(data + 4) &= 0xFFF00003;
    *(_DWORD *)(data + 4) |= 4 * (newAssetIndex & 0x3FFFF);
  }
}

/*
==============
Stream_Defrag_DBPatchMesh
==============
*/
void Stream_Defrag_DBPatchMesh(XModelSurfs *mesh, unsigned int newAssetIndex)
{
  unsigned __int64 data; 
  __int64 v6; 
  unsigned int PoolSize; 

  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5655, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5656, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
    __debugbreak();
  if ( !mesh->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5657, ASSERT_TYPE_ASSERT, "(mesh->shared)", (const char *)&queryFormat, "mesh->shared") )
    __debugbreak();
  if ( (mesh->shared->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5658, ASSERT_TYPE_ASSERT, "(mesh->shared->IsStreamed())", (const char *)&queryFormat, "mesh->shared->IsStreamed()") )
    __debugbreak();
  if ( newAssetIndex >= DB_GetPoolSize(ASSET_TYPE_XMODEL_SURFS) )
  {
    PoolSize = DB_GetPoolSize(ASSET_TYPE_XMODEL_SURFS);
    LODWORD(v6) = newAssetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5659, ASSERT_TYPE_ASSERT, "(unsigned)( newAssetIndex ) < (unsigned)( DB_GetPoolSize( ASSET_TYPE_XMODEL_SURFS ) )", "newAssetIndex doesn't index DB_GetPoolSize( ASSET_TYPE_XMODEL_SURFS )\n\t%i not in [0, %i)", v6, PoolSize) )
      __debugbreak();
  }
  data = mesh->shared->data.streamedDataHandle.data;
  if ( data < (unsigned __int64)s_streamDefrag || data >= (unsigned __int64)s_streamDefrag->mAddressSpaces )
    data = 0i64;
  if ( data )
  {
    if ( (*(_DWORD *)(data + 4) & 3) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5664, ASSERT_TYPE_ASSERT, "(node->assetType == STREAM_ITEM_MESH)", (const char *)&queryFormat, "node->assetType == STREAM_ITEM_MESH") )
      __debugbreak();
    if ( ((*(_DWORD *)(data + 4) >> 2) & 0x3FFFF) != DB_GetXModelSurfsIndex(mesh) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5665, ASSERT_TYPE_ASSERT, "(node->assetIndex == DB_GetXModelSurfsIndex( mesh ))", (const char *)&queryFormat, "node->assetIndex == DB_GetXModelSurfsIndex( mesh )") )
      __debugbreak();
    *(_DWORD *)(data + 4) &= 0xFFF00003;
    *(_DWORD *)(data + 4) |= 4 * (newAssetIndex & 0x3FFFF);
  }
}

/*
==============
Stream_Defrag_DBPatchStreamKey
==============
*/
void Stream_Defrag_DBPatchStreamKey(StreamKey *streamKey, unsigned int newAssetIndex)
{
  unsigned __int64 data; 
  __int64 v6; 
  unsigned int PoolSize; 

  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5673, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5674, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
    __debugbreak();
  if ( (streamKey->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5675, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
    __debugbreak();
  if ( newAssetIndex >= DB_GetPoolSize(ASSET_TYPE_STREAM_KEY) )
  {
    PoolSize = DB_GetPoolSize(ASSET_TYPE_STREAM_KEY);
    LODWORD(v6) = newAssetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5676, ASSERT_TYPE_ASSERT, "(unsigned)( newAssetIndex ) < (unsigned)( DB_GetPoolSize( ASSET_TYPE_STREAM_KEY ) )", "newAssetIndex doesn't index DB_GetPoolSize( ASSET_TYPE_STREAM_KEY )\n\t%i not in [0, %i)", v6, PoolSize) )
      __debugbreak();
  }
  data = streamKey->data.dataHandle.data;
  if ( data < (unsigned __int64)s_streamDefrag || data >= (unsigned __int64)s_streamDefrag->mAddressSpaces )
    data = 0i64;
  if ( data )
  {
    if ( (*(_DWORD *)(data + 4) & 3) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5681, ASSERT_TYPE_ASSERT, "(node->assetType == STREAM_ITEM_GENERIC)", (const char *)&queryFormat, "node->assetType == STREAM_ITEM_GENERIC") )
      __debugbreak();
    if ( ((*(_DWORD *)(data + 4) >> 2) & 0x3FFFF) != DB_GetStreamKeyIndex(streamKey) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5682, ASSERT_TYPE_ASSERT, "(node->assetIndex == DB_GetStreamKeyIndex( streamKey ))", (const char *)&queryFormat, "node->assetIndex == DB_GetStreamKeyIndex( streamKey )") )
      __debugbreak();
    *(_DWORD *)(data + 4) &= 0xFFF00003;
    *(_DWORD *)(data + 4) |= 4 * (newAssetIndex & 0x3FFFF);
  }
}

/*
==============
Stream_Defrag_FlushCPUMemCpy
==============
*/
void Stream_Defrag_FlushCPUMemCpy(const void *const data)
{
  StreamDefrag *v2; 

  if ( !s_streamDefrag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5793, ASSERT_TYPE_ASSERT, "(s_streamDefrag)", (const char *)&queryFormat, "s_streamDefrag") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5794, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v2 = *(StreamDefrag **)data;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5797, ASSERT_TYPE_ASSERT, "(streamDefrag)", (const char *)&queryFormat, "streamDefrag") )
    __debugbreak();
  if ( s_streamDefrag != v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5798, ASSERT_TYPE_ASSERT, "(s_streamDefrag == streamDefrag)", (const char *)&queryFormat, "s_streamDefrag == streamDefrag") )
    __debugbreak();
  StreamDefrag::FlushAsyncCPUMemCpy(v2, FromWorker, 0);
}

/*
==============
Stream_Defrag_FlushVA
==============
*/
void Stream_Defrag_FlushVA(const void *const data)
{
  StreamDefrag *v2; 

  if ( !s_streamDefrag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5780, ASSERT_TYPE_ASSERT, "(s_streamDefrag)", (const char *)&queryFormat, "s_streamDefrag") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5781, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v2 = *(StreamDefrag **)data;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5784, ASSERT_TYPE_ASSERT, "(streamDefrag)", (const char *)&queryFormat, "streamDefrag") )
    __debugbreak();
  if ( s_streamDefrag != v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 5785, ASSERT_TYPE_ASSERT, "(s_streamDefrag == streamDefrag)", (const char *)&queryFormat, "s_streamDefrag == streamDefrag") )
    __debugbreak();
  StreamDefrag::FlushAsyncVA(v2, FromWorker, MapsAndUnmaps, 0);
}

/*
==============
Stream_Defrag_FrameBegin
==============
*/
void Stream_Defrag_FrameBegin(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  GfxCmdBufContext v4; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Defrag_FrameBegin");
  v4 = *gfxContext;
  StreamDefrag::DefragFrameBegin(s_streamDefrag, &v4, data);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_Defrag_FrameEnd
==============
*/
void Stream_Defrag_FrameEnd(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  StreamDefrag *v3; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Defrag_FrameEnd");
  v3 = s_streamDefrag;
  Stream_Defrag_CheckLocks();
  Stream_Logger_OnDefragFrame("StreamDefrag::DefragFrameEnd", data, v3->mFrameOpen);
  StreamDefrag::ValidateRegions(v3);
  if ( v3->mFrameOpen )
  {
    v3->mFrameOpen = 0;
    StreamDefrag::DefragStep3_UnmapOldAddress(v3, data);
    StreamDefrag::ValidateRegions(v3);
    if ( Stream_BackendQueue_IsInForcedFlush() && !StreamDefrag::IsAsyncCopyFinished(v3, data) )
      Com_PrintWarning(35, "Stream defrag GPU copy incomplete before pointer fixup! Texture corruption likely!\n");
    StreamDefrag::DefragStep2_PtrFixup(v3, data);
    StreamDefrag::ValidateRegions(v3);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_Defrag_FrameFlush
==============
*/
void Stream_Defrag_FrameFlush(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  GfxCmdBufContext v4; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Defrag_FrameFlush");
  v4 = *gfxContext;
  StreamDefrag::DefragFrameFlush(s_streamDefrag, &v4, data);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_Defrag_GetRegionStats
==============
*/
void Stream_Defrag_GetRegionStats(StreamMemPool pool, StreamDefragRegionStats *outFixedRegionStats, StreamDefragRegionStats *outMoveableRegionStats)
{
  char *v4; 
  char v5; 

  v4 = (char *)s_streamDefrag + 256 * (unsigned __int64)(unsigned int)pool;
  v5 = 0;
  lambda_4bffae980443db749cd7c9aa8d707210_::operator()_StreamDefragRegion_0___((const StreamDefragRegion<0> *)&v5, (StreamDefragRegionStats *)(v4 + 3297416));
  outMoveableRegionStats->baseAddress = *((_QWORD *)v4 + 412165);
  outMoveableRegionStats->endAddress = *((_QWORD *)v4 + 412166);
  outMoveableRegionStats->tailAddress = *((_QWORD *)v4 + 412167);
  outMoveableRegionStats->headAddress = *((_QWORD *)v4 + 412168);
  outMoveableRegionStats->reserved = *((_QWORD *)v4 + 412166) - *((_QWORD *)v4 + 412165);
  outMoveableRegionStats->allocated = StreamDefragRegion<1>::GetVASizeAllocated((StreamDefragRegion<1> *)(v4 + 3297288));
  if ( (v4[3297352] & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2145, ASSERT_TYPE_ASSERT, "(mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  outMoveableRegionStats->used = *((_QWORD *)v4 + 412169);
  if ( (v4[3297368] & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2161, ASSERT_TYPE_ASSERT, "(mVaSizeCommitted % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeCommitted % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  outMoveableRegionStats->committed = *((_QWORD *)v4 + 412171);
  if ( (v4[3297360] & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2167, ASSERT_TYPE_ASSERT, "(mVaSizeAlignWaste % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeAlignWaste % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  outMoveableRegionStats->alignWaste = *((_QWORD *)v4 + 412170);
  if ( (v4[3297376] & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2173, ASSERT_TYPE_ASSERT, "(mVaSizeFullyUnmapped % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeFullyUnmapped % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  outMoveableRegionStats->fullyUnmappedNotYetReleased = *((_QWORD *)v4 + 412172);
  outMoveableRegionStats->fragmentation = StreamDefragRegion<1>::GetVASizeFragmentation((StreamDefragRegion<1> *)(v4 + 3297288));
  outMoveableRegionStats->inFlightDefragMoveCount = *((_DWORD *)v4 + 824346);
  outMoveableRegionStats->inFlightDefragCopyCount = *((_DWORD *)v4 + 824347);
}

/*
==============
Stream_Defrag_GivePages
==============
*/
void Stream_Defrag_GivePages(StreamerMemPageCounts *pageAdjust)
{
  StreamDefrag::GivePages(s_streamDefrag, pageAdjust);
}

/*
==============
Stream_Defrag_IsPriming
==============
*/
bool Stream_Defrag_IsPriming(const StreamDefragAllocNode *node)
{
  unsigned int v1; 

  v1 = *((_DWORD *)node + 1);
  switch ( v1 & 3 )
  {
    case 0u:
      return Stream_Primer_IsPrimingImageIndex((v1 >> 2) & 0x3FFFF);
    case 1u:
      return Stream_Primer_IsPrimingMesh((v1 >> 2) & 0x3FFFF);
    case 2u:
      return Stream_Primer_IsPrimingGeneric((v1 >> 2) & 0x3FFFF);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 379, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
    __debugbreak();
  return 0;
}

/*
==============
Stream_Defrag_IssueCopies
==============
*/
void Stream_Defrag_IssueCopies(GfxCmdBufContext *gfxContext)
{
  GfxCmdBufContext v2; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Defrag_IssueCopies");
  v2 = *gfxContext;
  StreamDefrag::IssueCopies(s_streamDefrag, &v2);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_Defrag_LockDefragCount
==============
*/
void Stream_Defrag_LockDefragCount(void)
{
  StreamDefrag *v0; 

  v0 = s_streamDefrag;
  Sys_LockWrite(&s_streamDefrag->mDefragLockCriticalSection);
  Sys_LockWrite(&v0->mDefragLockCountCriticalSection);
}

/*
==============
Stream_Defrag_LockHandle
==============
*/
bool Stream_Defrag_LockHandle(streamer_handle_t handle)
{
  return StreamDefrag::LockDefrag(s_streamDefrag, handle);
}

/*
==============
Stream_Defrag_MemCpy
==============
*/
size_t Stream_Defrag_MemCpy(MemCpyType memCpyType, ComputeCmdBufState *cmdBufState, StreamDefragCommand *command)
{
  ComputeCmdBufState *v4; 
  size_t v5; 
  int v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 
  const dvar_t *v9; 
  unsigned __int8 *v10; 
  unsigned int *partOffset; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  const unsigned __int8 *v15; 
  unsigned __int8 *v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  unsigned __int8 v20; 
  int v21; 
  unsigned int v22; 
  __int64 v23; 
  size_t size; 
  const unsigned __int8 *v25; 
  unsigned __int8 *dst; 
  Stream_Logger_Item *v27; 
  const GfxBackEndData *data; 
  Stream_Logger_Item *v29; 
  const GfxBackEndData *v30; 
  unsigned __int8 *v32; 
  Stream_Logger_Item item; 
  Stream_Logger_Item v34; 
  Stream_Logger_Item v35; 
  Stream_Logger_Item result; 
  Stream_Logger_Item v37; 
  Stream_Logger_Item v38; 
  __int64 v41; 
  unsigned __int8 *v42; 

  v4 = cmdBufState;
  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1002, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  if ( !command->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1003, ASSERT_TYPE_ASSERT, "(command->node)", (const char *)&queryFormat, "command->node") )
    __debugbreak();
  if ( *((_DWORD *)command + 12) != *((_DWORD *)command->node + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1004, ASSERT_TYPE_ASSERT, "( command->vAddrOffsetWrite ) == ( command->node->vAddrOffsetWrite )", "%s == %s\n\t%u, %u", "command->vAddrOffsetWrite", "command->node->vAddrOffsetWrite", *((_DWORD *)command + 12), *((_DWORD *)command->node + 3)) )
    __debugbreak();
  v5 = 0i64;
  v41 = 0i64;
  v6 = (*(_DWORD *)command->node >> 19) & 1;
  v7 = StrmOffsetToAddress((StreamMemPool)v6, *((unsigned int *)command->node + 2));
  v42 = v7;
  v8 = StrmOffsetToAddress((StreamMemPool)v6, *((unsigned int *)command->node + 3));
  v9 = DCONST_DVARINT_stream_defragValidationMode;
  v10 = v8;
  v32 = v8;
  if ( !DCONST_DVARINT_stream_defragValidationMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragValidationMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.integer == 2 )
  {
    partOffset = command->partOffset;
    v12 = 0;
    v13 = 1i64;
    do
    {
      if ( ((unsigned __int8)v13 & (unsigned __int8)HIBYTE(*((_DWORD *)command + 13)) & 0xF) != 0 )
      {
        v14 = *partOffset;
        v15 = &v42[v14];
        v16 = &v10[v14];
        v17 = *(partOffset - 4);
        Mem_Paged_CheckUnaliasedCommittedSubPageMemory(&v42[v14], &v42[v14 + v17]);
        Mem_Paged_CheckUnaliasedCommittedSubPageMemory(v16, &v16[v17]);
        ValidateDataHashAgainstXPakEntry(v15, (unsigned int)v17, v12, command->node);
        v10 = v32;
      }
      ++v12;
      v13 = __ROL8__(v13, 1);
      ++partOffset;
    }
    while ( v12 < 4 );
    v4 = cmdBufState;
    v5 = 0i64;
    v7 = v42;
  }
  v18 = 3;
  v19 = 3i64;
  do
  {
    v20 = *((_BYTE *)command + 55);
    if ( (v20 & (unsigned __int8)(1i64 << v18) & 0xF) != 0 )
    {
      v21 = v18 - 1;
      --v19;
      if ( v18 - 1 >= 0 )
      {
        do
        {
          if ( (v20 & (unsigned __int8)(1i64 << v21) & 0xF) == 0 )
            break;
          --v19;
          --v21;
        }
        while ( v21 >= 0 );
      }
      v22 = v18 - v21;
      v23 = command->partOffset[v18];
      size = (unsigned int)(command->partSize[v19 + 1] + command->partOffset[v19 + 1] - v23);
      v25 = &v7[v23];
      dst = &v32[v23];
      if ( memCpyType )
      {
        if ( memCpyType == CPUMemCpy )
        {
          v34 = *Stream_Logger_MakeItem(&v37, command->node);
          Stream_Logger_OnMemcpy("Stream_Defrag_MemCpy", NULL, &v34, v22, v25, dst, size);
          memcpy_0(dst, v25, size);
        }
        else if ( memCpyType == DMAMemCpyAsync )
        {
          if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1076, ASSERT_TYPE_ASSERT, "(cmdBufState != nullptr)", (const char *)&queryFormat, "cmdBufState != nullptr") )
            __debugbreak();
          v27 = Stream_Logger_MakeItem(&result, command->node);
          data = v4->data;
          item = *v27;
          Stream_Logger_OnMemcpy("Stream_Defrag_MemCpy", data, &item, v22, v25, dst, size);
          ((void (__fastcall *)(ID3D12XboxDmaCommandList *, unsigned __int8 *, const unsigned __int8 *, size_t, _DWORD))g_dx.defragDMACommandList->m_pFunction[7].AddRef)(g_dx.defragDMACommandList, dst, v25, size, 0);
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1084, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
        {
          __debugbreak();
        }
      }
      else
      {
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1065, ASSERT_TYPE_ASSERT, "(cmdBufState != nullptr)", (const char *)&queryFormat, "cmdBufState != nullptr") )
          __debugbreak();
        v29 = Stream_Logger_MakeItem(&v38, command->node);
        v30 = v4->data;
        v35 = *v29;
        Stream_Logger_OnMemcpy("Stream_Defrag_MemCpy", v30, &v35, v22, v25, dst, size);
        R_MemCpy(v4, dst, v25, size, 0);
      }
      v5 = size + v41;
      v41 += size;
      v18 = v21;
    }
    v7 = v42;
    --v19;
    --v18;
  }
  while ( v18 >= 0 );
  return v5;
}

/*
==============
Stream_Defrag_OnBackendQueueUpdate
==============
*/
void Stream_Defrag_OnBackendQueueUpdate(void)
{
  StreamDefrag *v0; 

  v0 = s_streamDefrag;
  Stream_Defrag_CheckLocks();
  if ( v0->mFrameOpen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3262, ASSERT_TYPE_ASSERT, "(!mFrameOpen)", (const char *)&queryFormat, "!mFrameOpen") )
    __debugbreak();
  if ( v0->mDefragSteps[1].mTail )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3263, ASSERT_TYPE_ASSERT, "(DefragStepCommands( StreamDefragStep::PTR_FIXUP ).Empty())", (const char *)&queryFormat, "DefragStepCommands( StreamDefragStep::PTR_FIXUP ).Empty()") )
      __debugbreak();
  }
}

/*
==============
Stream_Defrag_OnLoadItem
==============
*/
void Stream_Defrag_OnLoadItem(StreamItemType itemType, unsigned int itemPartIndex, streamer_handle_t handle)
{
  StreamDefrag::OnLoadItem(s_streamDefrag, itemType, itemPartIndex, handle);
}

/*
==============
Stream_Defrag_OnUnloadItem
==============
*/
void Stream_Defrag_OnUnloadItem(StreamItemType itemType, unsigned int itemPartIndex, streamer_handle_t handle)
{
  StreamDefrag::OnUnloadItem(s_streamDefrag, itemType, itemPartIndex, handle);
}

/*
==============
Stream_Defrag_PostLevelUnload
==============
*/
void Stream_Defrag_PostLevelUnload(const GfxBackEndData *data)
{
  StreamDefrag *v2; 

  v2 = s_streamDefrag;
  Sys_ProfBeginNamedEvent(0xFF808080, "StreamDefrag::PostLevelUnload");
  Stream_Defrag_CheckLocks();
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3455, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()", -2i64) )
    __debugbreak();
  if ( Stream_IsEnabled() && !Stream_BackendQueue_IsInForcedFlush() && streamFrontendGlob->levelInit.state == 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3456, ASSERT_TYPE_ASSERT, "(IsIdle())", (const char *)&queryFormat, "IsIdle()") )
    __debugbreak();
  if ( !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3457, ASSERT_TYPE_ASSERT, "(Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Stream_BackendQueue_IsInForcedFlush()") )
    __debugbreak();
  StreamDefrag::ValidateRegions(v2);
  StreamDefrag::HarvestRegions(v2, data);
  StreamDefrag::ValidateRegions(v2);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_Defrag_UnlockDefragCount
==============
*/
void Stream_Defrag_UnlockDefragCount(void)
{
  StreamDefrag *v0; 

  v0 = s_streamDefrag;
  Sys_UnlockWrite(&s_streamDefrag->mDefragLockCountCriticalSection);
  Sys_UnlockWrite(&v0->mDefragLockCriticalSection);
}

/*
==============
Stream_Defrag_UnlockHandle
==============
*/
void Stream_Defrag_UnlockHandle(streamer_handle_t handle)
{
  unsigned __int64 data; 
  FastCriticalSection *p_mDefragLockCountCriticalSection; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 

  data = handle.data;
  if ( handle.data < (unsigned __int64)s_streamDefrag || handle.data >= (unsigned __int64)s_streamDefrag->mAddressSpaces )
    data = 0i64;
  if ( data )
  {
    p_mDefragLockCountCriticalSection = &s_streamDefrag->mDefragLockCountCriticalSection;
    Sys_LockWrite(&s_streamDefrag->mDefragLockCountCriticalSection);
    if ( (*(_DWORD *)(data + 16) & 0x380000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4220, ASSERT_TYPE_ASSERT, "(node->defragLockCount > 0)", (const char *)&queryFormat, "node->defragLockCount > 0") )
      __debugbreak();
    *(_DWORD *)(data + 16) ^= (*(_DWORD *)(data + 16) ^ (((*(_DWORD *)(data + 16) >> 19) - 1) << 19)) & 0x380000;
    item = *Stream_Logger_MakeItem(&result, (const StreamDefragAllocNode *)data);
    Stream_Logger_OnDefragUnlock("StreamDefrag::UnlockDefrag", NULL, &item);
    Sys_UnlockWrite(p_mDefragLockCountCriticalSection);
  }
}

/*
==============
Stream_Defrag_Validate
==============
*/
void Stream_Defrag_Validate(void)
{
  StreamDefrag *v0; 

  v0 = s_streamDefrag;
  if ( Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3734, ASSERT_TYPE_ASSERT, "(!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  DB_EnumXAssets(ASSET_TYPE_IMAGE, lambda_e364da12fa9e73c6b1c3a10f662161d8_::_lambda_invoker_cdecl_, v0, 1);
  DB_EnumXAssets(ASSET_TYPE_XMODEL_SURFS, lambda_1d5daba300b73f8cd5a510f5b9676131_::_lambda_invoker_cdecl_, v0, 1);
  DB_EnumXAssets(ASSET_TYPE_STREAM_KEY, lambda_fd4d023bbdbab4a325f7c80c81497155_::_lambda_invoker_cdecl_, v0, 1);
}

/*
==============
Stream_Logger_MakeItem
==============
*/
Stream_Logger_Item *Stream_Logger_MakeItem(Stream_Logger_Item *result, const streamer_handle_t *handle)
{
  const GfxImage *data; 
  bool v4; 
  const StreamDefragAllocNode *v5; 
  Stream_Logger_Item *v6; 
  Stream_Logger_Item resulta; 

  data = (const GfxImage *)handle->data;
  v4 = handle->data >= (unsigned __int64)s_streamDefrag && data < (const GfxImage *)s_streamDefrag->mAddressSpaces;
  v5 = (const StreamDefragAllocNode *)handle->data;
  if ( !v4 )
    v5 = NULL;
  if ( v5 )
  {
    *result = *Stream_Logger_MakeItem(&resulta, v5);
    return result;
  }
  else
  {
    resulta.m_image = data;
    *(_QWORD *)&resulta.m_type = 3i64;
    v6 = result;
    *result = resulta;
  }
  return v6;
}

/*
==============
Stream_Logger_MakeItem
==============
*/
Stream_Logger_Item *Stream_Logger_MakeItem(Stream_Logger_Item *result, const StreamDefragAllocNode *node)
{
  StreamItemType v3; 
  unsigned int v5; 

  v3 = *((_BYTE *)node + 4) & 3;
  result->m_type = v3;
  if ( v3 == STREAM_ITEM_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 342, ASSERT_TYPE_ASSERT, "(item.m_type != STREAM_ITEM_INVALID)", (const char *)&queryFormat, "item.m_type != STREAM_ITEM_INVALID") )
    __debugbreak();
  v5 = *((_DWORD *)node + 1);
  if ( (v5 & 3) != 0 )
  {
    if ( (*((_DWORD *)node + 1) & 3) == 1 )
    {
      result->m_image = (const GfxImage *)DB_GetXModelSurfsAtIndex((v5 >> 2) & 0x3FFFF);
      return result;
    }
    if ( (*((_DWORD *)node + 1) & 3) == 2 )
    {
      result->m_image = (const GfxImage *)DB_GetStreamKeyAtIndex((v5 >> 2) & 0x3FFFF);
      return result;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 355, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
    {
      __debugbreak();
      return result;
    }
  }
  else
  {
    result->m_image = DB_GetGfxImageAtIndex((v5 >> 2) & 0x3FFFF);
  }
  return result;
}

/*
==============
StrmAddressToOffset
==============
*/
__int64 StrmAddressToOffset(StreamMemPool pool, unsigned __int64 address)
{
  __int64 v2; 
  unsigned __int64 v4; 
  StreamAddressSpace v6; 

  v2 = (unsigned int)pool;
  if ( !address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 399, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
    __debugbreak();
  if ( !s_streamAddressManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 400, ASSERT_TYPE_ASSERT, "(s_streamAddressManager)", (const char *)&queryFormat, "s_streamAddressManager") )
    __debugbreak();
  v4 = address - s_streamAddressManager->m_addressSpaces[v2].base;
  v6 = s_streamAddressManager->m_addressSpaces[v2];
  if ( (v4 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 404, ASSERT_TYPE_ASSERT, "(IsAligned( byteOffset, MEM_SUB_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( byteOffset, MEM_SUB_PAGE_SIZE )", v6.base) )
    __debugbreak();
  if ( v4 >= v6.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 405, ASSERT_TYPE_ASSERT, "(byteOffset < addressSpace.size)", (const char *)&queryFormat, "byteOffset < addressSpace.size") )
    __debugbreak();
  return (v4 >> 4) + 1;
}

/*
==============
StrmOffsetToAddress
==============
*/
unsigned __int8 *StrmOffsetToAddress(StreamMemPool pool, unsigned __int64 offset)
{
  __int64 v3; 
  unsigned __int64 v5; 

  v3 = (unsigned int)pool;
  if ( !s_streamAddressManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 415, ASSERT_TYPE_ASSERT, "(s_streamAddressManager)", (const char *)&queryFormat, "s_streamAddressManager") )
    __debugbreak();
  if ( !offset )
    return 0i64;
  v5 = 16 * offset - 16;
  _XMM0 = s_streamAddressManager->m_addressSpaces[v3];
  __asm { vpextrq rax, xmm0, 1 }
  if ( v5 >= _RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 426, ASSERT_TYPE_ASSERT, "(byteOffset < addressSpace.size)", (const char *)&queryFormat, "byteOffset < addressSpace.size") )
    __debugbreak();
  return (unsigned __int8 *)(v5 + _XMM0.base);
}

/*
==============
StreamDefrag::TrackCommitParts
==============
*/
void StreamDefrag::TrackCommitParts(StreamDefrag *this, const StreamDefragCommand *command, unsigned __int64 addressOffset, unsigned int partBits)
{
  __int64 v4; 
  StreamDefrag::AddressSpace *v8; 
  unsigned __int8 *v9; 
  unsigned int *v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int64 mVaSizeCommitted; 

  v4 = partBits;
  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4508, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  if ( !command->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4509, ASSERT_TYPE_ASSERT, "(command->node)", (const char *)&queryFormat, "command->node") )
    __debugbreak();
  if ( !addressOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4510, ASSERT_TYPE_ASSERT, "(addressOffset != 0)", (const char *)&queryFormat, "addressOffset != 0") )
    __debugbreak();
  v8 = &this->mAddressSpaces[(unsigned __int64)((*(_DWORD *)command->node >> 19) & 1)];
  v9 = StrmOffsetToAddress((StreamMemPool)((*(_DWORD *)command->node >> 19) & 1), addressOffset);
  v10 = &command->partSize[3];
  v11 = 3;
  v12 = 8i64;
  do
  {
    if ( (v4 & v12) != 0 )
    {
      v13 = *v10;
      StreamDefragRegion<1>::AssertValidAddressRange(&v8->mMoveableRegion, &v9[v10[4]], &v9[v10[4] + v13]);
      v8->mMoveableRegion.mVaSizeCommitted += truncate_cast<unsigned __int64,__int64>((unsigned int)v13);
      mVaSizeCommitted = v8->mMoveableRegion.mVaSizeCommitted;
      if ( mVaSizeCommitted > v8->mMoveableRegion.mVaSizeUsed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2108, ASSERT_TYPE_ASSERT, "( mVaSizeCommitted ) <= ( mVaSizeUsed )", "%s <= %s\n\t%zu, %zu", "mVaSizeCommitted", "mVaSizeUsed", mVaSizeCommitted, v8->mMoveableRegion.mVaSizeUsed) )
        __debugbreak();
    }
    v12 = __ROR8__(v12, 1);
    --v10;
    --v11;
  }
  while ( v11 >= 0 );
}

/*
==============
StreamDefrag::TrackDecommitParts
==============
*/
void StreamDefrag::TrackDecommitParts(StreamDefrag *this, const StreamDefragCommand *command, unsigned __int64 addressOffset, unsigned int partBits)
{
  __int64 v4; 
  StreamDefrag::AddressSpace *v8; 
  unsigned __int8 *v9; 
  unsigned int *v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 mVaSizeCommitted; 
  unsigned __int64 v16; 

  v4 = partBits;
  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4569, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  if ( !command->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4570, ASSERT_TYPE_ASSERT, "(command->node)", (const char *)&queryFormat, "command->node") )
    __debugbreak();
  if ( !addressOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4571, ASSERT_TYPE_ASSERT, "(addressOffset != 0)", (const char *)&queryFormat, "addressOffset != 0") )
    __debugbreak();
  v8 = &this->mAddressSpaces[(unsigned __int64)((*(_DWORD *)command->node >> 19) & 1)];
  v9 = StrmOffsetToAddress((StreamMemPool)((*(_DWORD *)command->node >> 19) & 1), addressOffset);
  v10 = &command->partSize[3];
  v11 = 3;
  v12 = 8i64;
  do
  {
    if ( (v4 & v12) != 0 )
    {
      v13 = *v10;
      StreamDefragRegion<1>::AssertValidAddressRange(&v8->mMoveableRegion, &v9[v10[4]], &v9[v10[4] + v13]);
      v14 = truncate_cast<unsigned __int64,__int64>((unsigned int)v13);
      mVaSizeCommitted = v8->mMoveableRegion.mVaSizeCommitted;
      if ( mVaSizeCommitted < v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2115, ASSERT_TYPE_ASSERT, "( mVaSizeCommitted ) >= ( size )", "%s >= %s\n\t%zu, %zu", "mVaSizeCommitted", "size", mVaSizeCommitted, v14) )
        __debugbreak();
      v8->mMoveableRegion.mVaSizeCommitted -= v14;
      v16 = v8->mMoveableRegion.mVaSizeCommitted;
      if ( v16 > v8->mMoveableRegion.mVaSizeUsed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2117, ASSERT_TYPE_ASSERT, "( mVaSizeCommitted ) <= ( mVaSizeUsed )", "%s <= %s\n\t%zu, %zu", "mVaSizeCommitted", "mVaSizeUsed", v16, v8->mMoveableRegion.mVaSizeUsed) )
        __debugbreak();
    }
    v12 = __ROR8__(v12, 1);
    --v10;
    --v11;
  }
  while ( v11 >= 0 );
}

/*
==============
StreamDefrag::UnlockDefrag
==============
*/
void StreamDefrag::UnlockDefrag(StreamDefrag *this, streamer_handle_t handle)
{
  unsigned __int64 data; 
  FastCriticalSection *p_mDefragLockCountCriticalSection; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 

  data = handle.data;
  if ( handle.data < (unsigned __int64)this || handle.data >= (unsigned __int64)this->mAddressSpaces )
    data = 0i64;
  if ( data )
  {
    p_mDefragLockCountCriticalSection = &this->mDefragLockCountCriticalSection;
    Sys_LockWrite(&this->mDefragLockCountCriticalSection);
    if ( (*(_DWORD *)(data + 16) & 0x380000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4220, ASSERT_TYPE_ASSERT, "(node->defragLockCount > 0)", (const char *)&queryFormat, "node->defragLockCount > 0") )
      __debugbreak();
    *(_DWORD *)(data + 16) ^= (*(_DWORD *)(data + 16) ^ (((*(_DWORD *)(data + 16) >> 19) - 1) << 19)) & 0x380000;
    item = *Stream_Logger_MakeItem(&result, (const StreamDefragAllocNode *)data);
    Stream_Logger_OnDefragUnlock("StreamDefrag::UnlockDefrag", NULL, &item);
    Sys_UnlockWrite(p_mDefragLockCountCriticalSection);
  }
}

/*
==============
StreamDefrag::UnlockDefragCount
==============
*/
void StreamDefrag::UnlockDefragCount(StreamDefrag *this)
{
  Sys_UnlockWrite(&this->mDefragLockCountCriticalSection);
  Sys_UnlockWrite(&this->mDefragLockCriticalSection);
}

/*
==============
StreamDefrag::Unmap
==============
*/
unsigned __int64 StreamDefrag::Unmap(StreamDefrag *this, StreamDefragCommand **command, StreamerMemPageCounts *unmappedPages)
{
  unsigned __int64 v5; 
  unsigned __int64 result; 

  v5 = StreamDefrag::DecommitParts(this, *command, *((unsigned int *)*command + 11), *((_DWORD *)*command + 13) >> 28, unmappedPages);
  RStackThreadSafe<StreamDefragCommand>::Push(&this->mDefragPool, *command);
  result = v5;
  *command = NULL;
  return result;
}

/*
==============
StreamDefrag::UnmapAsync
==============
*/
void StreamDefrag::UnmapAsync(StreamDefrag *this, StreamDefragCommand **command, StreamerMemPageCounts *unmappedPages)
{
  const dvar_t *v6; 
  __int64 v7; 

  if ( !*command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4626, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  if ( !(*command)->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 4627, ASSERT_TYPE_ASSERT, "(command->node)", (const char *)&queryFormat, "command->node") )
    __debugbreak();
  Stream_Defrag_CheckLocks();
  v6 = DCONST_DVARBOOL_stream_defragAsyncMapping;
  if ( !DCONST_DVARBOOL_stream_defragAsyncMapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragAsyncMapping") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && Stream_IsEnabled() && !Stream_BackendQueue_IsInForcedFlush() && streamFrontendGlob->levelInit.state == 4 )
  {
    v7 = 3356112i64;
  }
  else
  {
    StreamDefrag::DecommitParts(this, *command, *((unsigned int *)*command + 11), *((_DWORD *)*command + 13) >> 28, unmappedPages);
    v7 = 3298704i64;
  }
  RStackThreadSafe<StreamDefragCommand>::Push((RStackThreadSafe<StreamDefragCommand> *)((char *)this + v7), *command);
  *command = NULL;
}

/*
==============
StreamDefrag::UpdateNewTailAddressBeforeMove
==============
*/
bool StreamDefrag::UpdateNewTailAddressBeforeMove(StreamDefrag *this, StreamDefragAllocNode *node)
{
  int v4; 
  StreamNextTailAddress **p_mTail; 
  StreamNextTailAddress *v6; 
  unsigned int v7; 
  unsigned int unmapFrame; 
  bool v9; 
  unsigned int MaxVaSize; 
  __int64 VaSizeForParts; 
  unsigned __int8 *v12; 
  unsigned __int64 vAddrNextTail; 
  unsigned __int8 *NextTailAddress; 
  bool result; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2611, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (*(_DWORD *)node & 0x200000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2612, ASSERT_TYPE_ASSERT, "(node->moveable)", (const char *)&queryFormat, "node->moveable") )
    __debugbreak();
  if ( !NodeIsValid(node) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2613, ASSERT_TYPE_ASSERT, "(NodeIsValid( node ))", (const char *)&queryFormat, "NodeIsValid( node )") )
    __debugbreak();
  if ( *((_DWORD *)node + 2) != *((_DWORD *)node + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2614, ASSERT_TYPE_ASSERT, "(node->vAddrOffsetRead == node->vAddrOffsetWrite)", (const char *)&queryFormat, "node->vAddrOffsetRead == node->vAddrOffsetWrite") )
    __debugbreak();
  v4 = (*(_DWORD *)node >> 19) & 1;
  p_mTail = &this->mNextTailAddresses[v4].mTail;
  if ( !*p_mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2620, ASSERT_TYPE_ASSERT, "(!mNextTailAddresses[poolIndex].Empty())", (const char *)&queryFormat, "!mNextTailAddresses[poolIndex].Empty()") )
    __debugbreak();
  v6 = *p_mTail;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2622, ASSERT_TYPE_ASSERT, "(nextTailAddress)", (const char *)&queryFormat, "nextTailAddress") )
    __debugbreak();
  v7 = this->mDefragUnmapFrameDepth + this->mDefragFrameIndex + 1;
  unmapFrame = v6->unmapFrame;
  if ( this->mFrameOpen )
  {
    if ( unmapFrame == v7 )
      goto LABEL_26;
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2625, ASSERT_TYPE_ASSERT, "( nextTailAddress->unmapFrame ) == ( mDefragFrameIndex + mDefragUnmapFrameDepth + 1 )", "%s == %s\n\t%u, %u", "nextTailAddress->unmapFrame", "mDefragFrameIndex + mDefragUnmapFrameDepth + 1", v6->unmapFrame, this->mDefragUnmapFrameDepth + this->mDefragFrameIndex + 1);
  }
  else
  {
    if ( unmapFrame <= v7 )
      goto LABEL_26;
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2629, ASSERT_TYPE_ASSERT, "( nextTailAddress->unmapFrame ) <= ( mDefragFrameIndex + mDefragUnmapFrameDepth + 1 )", "%s <= %s\n\t%u, %u", "nextTailAddress->unmapFrame", "mDefragFrameIndex + mDefragUnmapFrameDepth + 1", v6->unmapFrame, this->mDefragUnmapFrameDepth + this->mDefragFrameIndex + 1);
  }
  if ( v9 )
    __debugbreak();
LABEL_26:
  MaxVaSize = NodeGetMaxVaSize(node);
  VaSizeForParts = NodeGetVaSizeForParts(node, (*((_DWORD *)node + 1) >> 20) & 7);
  v12 = StrmOffsetToAddress((StreamMemPool)v4, *((unsigned int *)node + 2));
  vAddrNextTail = v6->vAddrNextTail;
  if ( (unsigned __int8 *)vAddrNextTail != &v12[MaxVaSize - VaSizeForParts] )
    return 0;
  NextTailAddress = NodeGetNextTailAddress(node, (StreamMemPool)v4, vAddrNextTail);
  StreamDefrag::FlagSkippedNonTailVAResizeMoves(this, (StreamMemPool)v4, v6->vAddrNextTail, (unsigned __int64)NextTailAddress, v6->unmapFrame);
  result = 1;
  v6->vAddrNextTail = (unsigned __int64)NextTailAddress;
  return result;
}

/*
==============
StreamDefragRegion<1>::Validate
==============
*/
void StreamDefragRegion<1>::Validate(StreamDefragRegion<1> *this)
{
  unsigned __int64 mVaSizeCommitted; 
  unsigned __int64 mVaSizeAlignWaste; 
  unsigned __int64 mVaSizeFullyUnmapped; 
  unsigned __int64 mVaSizeUsed; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 mAddrTail; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 mAddrBase; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  unsigned __int64 VASizeAllocated; 
  unsigned __int64 v23; 
  unsigned __int64 v24; 
  unsigned __int64 v25; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  unsigned __int64 v29; 
  unsigned __int64 v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  unsigned __int64 v33; 
  const void *v34; 
  const void *v35; 
  unsigned __int8 *mAddrHead; 
  unsigned __int8 *v37; 
  StreamDefragAllocNode *mTail; 
  unsigned __int64 v39; 
  unsigned __int8 *v40; 
  unsigned __int8 *v41; 
  int MaxVaSize; 
  const dvar_t *v43; 
  unsigned __int64 mAddrEnd; 
  RSList<StreamDefragCommand> *mDefragSteps; 
  __int64 mPool; 
  StreamDefragAllocNode *mHead; 
  const RList<StreamNextTailAddress> *v48; 
  StreamDefragCommand *v49; 
  StreamDefragCommand *i; 
  unsigned __int64 vAddrCurTail; 
  __int64 v52; 
  __int64 v53; 
  unsigned __int8 *v54; 
  const void *v55; 
  size_t v56; 
  size_t v57; 
  size_t v58; 
  size_t v59; 
  StreamDefragRegion<1>::Validate::__l119::<lambda_ebbaa0612b2f899a5f9f25ea3ab4b595> v60; 
  unsigned __int64 v61; 
  unsigned __int64 v62; 
  unsigned __int64 v63; 
  unsigned __int64 v64; 
  __int64 v65; 
  __int64 v66; 
  __m256i v67; 
  __int128 v68; 
  __int64 *v69; 
  __m256i v70; 
  __m256i v71; 
  __m256i v72; 
  __m256i v73; 
  __int64 *v74; 
  StreamDefragRegion<1>::Validate::__l119::<lambda_0fba517b77b28b546883b3ce6830a70c> v75; 
  StreamDefragRegion<1>::Validate::__l2::<lambda_774ae07cf16581913133048ae4824bcb> v76; 
  char v77; 
  char v78; 
  int v79; 
  int v80; 

  Stream_Defrag_CheckLocks();
  if ( !this->mDefragSteps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1361, ASSERT_TYPE_ASSERT, "(mDefragSteps)", (const char *)&queryFormat, "mDefragSteps") )
    __debugbreak();
  if ( !this->mNextTailAddresses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1362, ASSERT_TYPE_ASSERT, "(mNextTailAddresses)", (const char *)&queryFormat, "mNextTailAddresses") )
    __debugbreak();
  if ( (this->mVaSizeCommitted & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2161, ASSERT_TYPE_ASSERT, "(mVaSizeCommitted % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeCommitted % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  mVaSizeCommitted = this->mVaSizeCommitted;
  if ( (this->mVaSizeAlignWaste & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2167, ASSERT_TYPE_ASSERT, "(mVaSizeAlignWaste % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeAlignWaste % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  mVaSizeAlignWaste = this->mVaSizeAlignWaste;
  if ( (this->mVaSizeFullyUnmapped & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2173, ASSERT_TYPE_ASSERT, "(mVaSizeFullyUnmapped % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeFullyUnmapped % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  mVaSizeFullyUnmapped = this->mVaSizeFullyUnmapped;
  if ( (this->mVaSizeUsed & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2145, ASSERT_TYPE_ASSERT, "(mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  mVaSizeUsed = this->mVaSizeUsed;
  if ( mVaSizeCommitted + mVaSizeFullyUnmapped + mVaSizeAlignWaste > mVaSizeUsed )
  {
    if ( (mVaSizeUsed & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2145, ASSERT_TYPE_ASSERT, "(mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    v6 = this->mVaSizeUsed;
    if ( (this->mVaSizeCommitted & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2161, ASSERT_TYPE_ASSERT, "(mVaSizeCommitted % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeCommitted % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    v7 = this->mVaSizeCommitted;
    if ( (this->mVaSizeAlignWaste & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2167, ASSERT_TYPE_ASSERT, "(mVaSizeAlignWaste % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeAlignWaste % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    v8 = this->mVaSizeAlignWaste;
    if ( (this->mVaSizeFullyUnmapped & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2173, ASSERT_TYPE_ASSERT, "(mVaSizeFullyUnmapped % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeFullyUnmapped % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1364, ASSERT_TYPE_ASSERT, "( GetVASizeCommitted() + GetVASizeAlignWaste() + GetVASizeFullyUnmappedNotYetReleased() ) <= ( GetVASizeUsed() )", "%s <= %s\n\t%zu, %zu", "GetVASizeCommitted() + GetVASizeAlignWaste() + GetVASizeFullyUnmappedNotYetReleased()", "GetVASizeUsed()", v7 + v8 + this->mVaSizeFullyUnmapped, v6) )
      __debugbreak();
  }
  if ( (this->mVaSizeUsed & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2145, ASSERT_TYPE_ASSERT, "(mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  mAddrTail = this->mAddrTail;
  v10 = this->mVaSizeUsed;
  v11 = this->mAddrHead - mAddrTail;
  if ( mAddrTail > this->mAddrHead )
    v11 += this->mAddrEnd - this->mAddrBase;
  if ( (v11 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2139, ASSERT_TYPE_ASSERT, "(vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  if ( v10 > v11 )
  {
    v12 = this->mAddrTail;
    v13 = this->mAddrHead - v12;
    if ( v12 > this->mAddrHead )
      v13 += this->mAddrEnd - this->mAddrBase;
    if ( (v13 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2139, ASSERT_TYPE_ASSERT, "(vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    if ( (this->mVaSizeUsed & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2145, ASSERT_TYPE_ASSERT, "(mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1365, ASSERT_TYPE_ASSERT, "( GetVASizeUsed() ) <= ( GetVASizeAllocated() )", "%s <= %s\n\t%zu, %zu", "GetVASizeUsed()", "GetVASizeAllocated()", this->mVaSizeUsed, v13) )
      __debugbreak();
  }
  v14 = this->mAddrTail;
  v15 = this->mAddrHead - v14;
  if ( v14 > this->mAddrHead )
    v15 += this->mAddrEnd - this->mAddrBase;
  if ( (v15 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2139, ASSERT_TYPE_ASSERT, "(vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  mAddrBase = this->mAddrBase;
  v17 = this->mAddrEnd - mAddrBase;
  if ( v15 > v17 )
  {
    v18 = this->mAddrTail;
    v19 = this->mAddrHead - v18 + this->mAddrEnd - mAddrBase;
    if ( v18 <= this->mAddrHead )
      v19 = this->mAddrHead - v18;
    if ( (v19 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2139, ASSERT_TYPE_ASSERT, "(vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1366, ASSERT_TYPE_ASSERT, "( GetVASizeAllocated() ) <= ( GetVASizeTotal() )", "%s <= %s\n\t%zu, %zu", "GetVASizeAllocated()", "GetVASizeTotal()", v19, v17) )
      __debugbreak();
  }
  v20 = this->mAddrTail;
  v21 = this->mAddrHead - v20;
  if ( v20 > this->mAddrHead )
    v21 += this->mAddrEnd - this->mAddrBase;
  if ( (v21 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2139, ASSERT_TYPE_ASSERT, "(vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  VASizeAllocated = StreamDefragRegion<1>::GetVASizeAllocated(this);
  v23 = this->mAddrEnd - this->mAddrBase;
  v24 = VASizeAllocated;
  if ( v23 < VASizeAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2153, ASSERT_TYPE_ASSERT, "( totalAddressSpace ) >= ( allocatedAddressSpace )", "%s >= %s\n\t%zu, %zu", "totalAddressSpace", "allocatedAddressSpace", v23, VASizeAllocated) )
    __debugbreak();
  v25 = v23 - v24;
  if ( (v25 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2155, ASSERT_TYPE_ASSERT, "(vaSizeNotAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeNotAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  v26 = this->mAddrBase;
  v27 = this->mAddrEnd - v26;
  if ( v25 + v21 != v27 )
  {
    v28 = this->mAddrTail;
    v29 = this->mAddrHead - v28 + this->mAddrEnd - v26;
    if ( v28 <= this->mAddrHead )
      v29 = this->mAddrHead - v28;
    if ( (v29 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2139, ASSERT_TYPE_ASSERT, "(vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    v30 = StreamDefragRegion<1>::GetVASizeAllocated(this);
    v31 = v30;
    v32 = this->mAddrEnd - this->mAddrBase;
    if ( v32 < v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2153, ASSERT_TYPE_ASSERT, "( totalAddressSpace ) >= ( allocatedAddressSpace )", "%s >= %s\n\t%zu, %zu", "totalAddressSpace", "allocatedAddressSpace", v32, v30) )
      __debugbreak();
    v33 = v32 - v31;
    if ( (v33 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2155, ASSERT_TYPE_ASSERT, "(vaSizeNotAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeNotAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1367, ASSERT_TYPE_ASSERT, "( GetVASizeAllocated() + GetVASizeNotAllocated() ) == ( GetVASizeTotal() )", "%s == %s\n\t%zu, %zu", "GetVASizeAllocated() + GetVASizeNotAllocated()", "GetVASizeTotal()", v33 + v29, v27) )
      __debugbreak();
  }
  if ( this->mDefragInFlightNodeCount < this->mDefragInFlightCopyCount )
  {
    LODWORD(v53) = this->mDefragInFlightCopyCount;
    LODWORD(v52) = this->mDefragInFlightNodeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1369, ASSERT_TYPE_ASSERT, "( mDefragInFlightNodeCount ) >= ( mDefragInFlightCopyCount )", "%s >= %s\n\t%u, %u", "mDefragInFlightNodeCount", "mDefragInFlightCopyCount", v52, v53) )
      __debugbreak();
  }
  if ( this->mAllocations.mTail )
  {
    if ( this->mAddrHead == this->mAddrTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1376, ASSERT_TYPE_ASSERT, "(mAddrHead != mAddrTail)", (const char *)&queryFormat, "mAddrHead != mAddrTail") )
      __debugbreak();
    v34 = (const void *)this->mAddrTail;
    v35 = (const void *)this->mAddrBase;
    v55 = v34;
    if ( v34 < v35 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1379, ASSERT_TYPE_ASSERT, "( addrTail ) >= ( reinterpret_cast<byte*>( mAddrBase ) )", "%s >= %s\n\t%p, %p", "addrTail", "reinterpret_cast<byte*>( mAddrBase )", v34, v35) )
        __debugbreak();
      v34 = v55;
    }
    if ( (unsigned __int64)v34 >= this->mAddrEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1380, ASSERT_TYPE_ASSERT, "( addrTail ) < ( reinterpret_cast<byte*>( mAddrEnd ) )", "%s < %s\n\t%p, %p", "addrTail", "reinterpret_cast<byte*>( mAddrEnd )", v34, (const void *)this->mAddrEnd) )
      __debugbreak();
    mAddrHead = (unsigned __int8 *)this->mAddrHead;
    v37 = (unsigned __int8 *)this->mAddrBase;
    v54 = mAddrHead;
    if ( mAddrHead < v37 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1383, ASSERT_TYPE_ASSERT, "( addrHead ) >= ( reinterpret_cast<byte*>( mAddrBase ) )", "%s >= %s\n\t%p, %p", "addrHead", "reinterpret_cast<byte*>( mAddrBase )", mAddrHead, v37) )
        __debugbreak();
      mAddrHead = v54;
    }
    if ( (unsigned __int64)mAddrHead > this->mAddrEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1384, ASSERT_TYPE_ASSERT, "( addrHead ) <= ( reinterpret_cast<byte*>( mAddrEnd ) )", "%s <= %s\n\t%p, %p", "addrHead", "reinterpret_cast<byte*>( mAddrEnd )", mAddrHead, (const void *)this->mAddrEnd) )
      __debugbreak();
    mTail = this->mAllocations.mTail;
    v39 = *((unsigned int *)mTail + 1);
    if ( (v39 & 0x7800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1387, ASSERT_TYPE_ASSERT, "( backNode->vAddrEndAlignLog2 ) == ( 0 )", "%s == %s\n\t%llu, %llu", "backNode->vAddrEndAlignLog2", "0", (v39 >> 23) & 0xF, 0i64) )
      __debugbreak();
    v40 = StrmOffsetToAddress(this->mPool, *((unsigned int *)mTail + 3));
    if ( v54 != &v40[(unsigned int)NodeGetMaxVaSize(mTail)] )
    {
      v41 = StrmOffsetToAddress(this->mPool, *((unsigned int *)mTail + 3));
      MaxVaSize = NodeGetMaxVaSize(mTail);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1388, ASSERT_TYPE_ASSERT, "( addrHead ) == ( StrmOffsetToAddress( mPool, backNode->vAddrOffsetWrite ) + NodeGetMaxVaSize( backNode ) )", "%s == %s\n\t%p, %p", "addrHead", "StrmOffsetToAddress( mPool, backNode->vAddrOffsetWrite ) + NodeGetMaxVaSize( backNode )", v54, &v41[MaxVaSize]) )
        __debugbreak();
    }
    v43 = DCONST_DVARBOOL_stream_defragValidateRegions;
    if ( !DCONST_DVARBOOL_stream_defragValidateRegions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragValidateRegions") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    if ( v43->current.enabled )
    {
      mAddrEnd = this->mAddrEnd;
      mDefragSteps = (RSList<StreamDefragCommand> *)this->mDefragSteps;
      mPool = (unsigned int)this->mPool;
      mHead = this->mAllocations.mHead;
      v62 = this->mAddrBase;
      v64 = v62;
      v70.m256i_i64[1] = (__int64)&v79;
      v70.m256i_i64[3] = (__int64)&v58;
      v71.m256i_i64[0] = (__int64)&v56;
      v71.m256i_i64[1] = (__int64)&v59;
      v71.m256i_i64[2] = (__int64)&v57;
      v71.m256i_i64[3] = (__int64)&v61;
      v72.m256i_i64[0] = (__int64)&v62;
      v72.m256i_i64[1] = (__int64)&v63;
      v72.m256i_i64[2] = (__int64)&v64;
      v72.m256i_i64[3] = (__int64)&v55;
      v73.m256i_i64[0] = (__int64)&v77;
      v73.m256i_i64[1] = (__int64)&v54;
      v73.m256i_i64[2] = (__int64)&v78;
      v73.m256i_i64[3] = (__int64)&v80;
      v48 = &(*this->mNextTailAddresses)[mPool];
      v70.m256i_i64[0] = (__int64)this;
      v70.m256i_i64[2] = (__int64)mDefragSteps;
      v74 = &v65;
      v56 = 0i64;
      v59 = 0i64;
      v57 = 0i64;
      v58 = 0i64;
      v65 = 0i64;
      v61 = mAddrEnd;
      v63 = mAddrEnd;
      v80 = 0;
      v79 = 0;
      v77 = 0;
      v78 = 0;
      *(__m256i *)&v76.__this = v70;
      *(__m256i *)&v76.vaSizeUsed = v71;
      *(__m256i *)&v76.highestAddrRead = v72;
      v76.prevAddrWriteBegin = (const unsigned __int8 **)&v65;
      for ( *(__m256i *)&v76.foundTailNode = v73; mHead; mHead += (__int64)(int)(*(_DWORD *)mHead << 13) >> 13 )
      {
        if ( !_lambda_774ae07cf16581913133048ae4824bcb_::operator()(&v76, mHead) )
          break;
        if ( !(*(_DWORD *)mHead << 13) )
          break;
      }
      v49 = mDefragSteps->mHead;
      v60.__this = this;
      for ( v60.vaSizeCommitted = &v57; v49; v49 += (__int64)(int)(*((_DWORD *)v49 + 13) << 21) >> 21 )
      {
        if ( (*(_DWORD *)v49->node & 0x200000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1577, ASSERT_TYPE_ASSERT, "(command->node->moveable)", (const char *)&queryFormat, "command->node->moveable") )
          __debugbreak();
        if ( ((*(_DWORD *)v49->node >> 19) & 1) == this->mPool )
          _lambda_ebbaa0612b2f899a5f9f25ea3ab4b595_::operator()(&v60, v49);
        if ( !(*((_DWORD *)v49 + 13) << 21) )
          break;
      }
      for ( i = mDefragSteps[1].mHead; i; i += (__int64)(int)(*((_DWORD *)i + 13) << 21) >> 21 )
      {
        if ( (*(_DWORD *)i->node & 0x200000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1588, ASSERT_TYPE_ASSERT, "(command->node->moveable)", (const char *)&queryFormat, "command->node->moveable") )
          __debugbreak();
        if ( ((*(_DWORD *)i->node >> 19) & 1) == this->mPool )
          _lambda_ebbaa0612b2f899a5f9f25ea3ab4b595_::operator()(&v60, i);
        if ( !(*((_DWORD *)i + 13) << 21) )
          break;
      }
      v67.m256i_i64[0] = (__int64)this;
      v67.m256i_i64[1] = (__int64)&v58;
      v66 = 0i64;
      v67.m256i_i64[2] = (__int64)&v56;
      v67.m256i_i64[3] = (__int64)&v60;
      *(_QWORD *)&v68 = &v55;
      *((_QWORD *)&v68 + 1) = &v77;
      v69 = &v66;
      *(__m256i *)&v75.__this = v67;
      v75.prevAddrUnmapBegin = (const unsigned __int8 **)&v66;
      *(_OWORD *)&v75.addrTail = v68;
      RSList<StreamDefragCommand>::IterateFrontToBack<_lambda_0fba517b77b28b546883b3ce6830a70c_>(mDefragSteps + 2, &v75);
      if ( v79 != this->mDefragInFlightNodeCount )
      {
        LODWORD(v53) = this->mDefragInFlightNodeCount;
        LODWORD(v52) = v79;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1649, ASSERT_TYPE_ASSERT, "( defragInFlightNodeCount ) == ( mDefragInFlightNodeCount )", "%s == %s\n\t%u, %u", "defragInFlightNodeCount", "mDefragInFlightNodeCount", v52, v53) )
          __debugbreak();
      }
      if ( !v78 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1650, ASSERT_TYPE_ASSERT, "(foundHeadNode)", (const char *)&queryFormat, "foundHeadNode") )
        __debugbreak();
      if ( !v77 )
      {
        if ( !v48->mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1658, ASSERT_TYPE_ASSERT, "(!nextTailAddresses.Empty())", (const char *)&queryFormat, "!nextTailAddresses.Empty()") )
          __debugbreak();
        vAddrCurTail = v48->mHead->vAddrCurTail;
        if ( vAddrCurTail != this->mAddrTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1659, ASSERT_TYPE_ASSERT, "( nextTailAddresses.PeekFront()->vAddrCurTail ) == ( mAddrTail )", "%s == %s\n\t%llx, %llx", "nextTailAddresses.PeekFront()->vAddrCurTail", "mAddrTail", vAddrCurTail, this->mAddrTail) )
          __debugbreak();
      }
      if ( v56 != this->mVaSizeUsed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1670, ASSERT_TYPE_ASSERT, "( vaSizeUsed ) == ( mVaSizeUsed )", "%s == %s\n\t%zu, %zu", "vaSizeUsed", "mVaSizeUsed", v56, this->mVaSizeUsed) )
        __debugbreak();
      if ( v57 != this->mVaSizeCommitted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1671, ASSERT_TYPE_ASSERT, "( vaSizeCommitted ) == ( mVaSizeCommitted )", "%s == %s\n\t%zu, %zu", "vaSizeCommitted", "mVaSizeCommitted", v57, this->mVaSizeCommitted) )
        __debugbreak();
      if ( v58 != this->mVaSizeAlignWaste && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1672, ASSERT_TYPE_ASSERT, "( vaSizeAlignWaste ) == ( mVaSizeAlignWaste )", "%s == %s\n\t%zu, %zu", "vaSizeAlignWaste", "mVaSizeAlignWaste", v58, this->mVaSizeAlignWaste) )
        __debugbreak();
      if ( v59 != this->mVaSizeFullyUnmapped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1673, ASSERT_TYPE_ASSERT, "( vaSizeFullyUnmapped ) == ( mVaSizeFullyUnmapped )", "%s == %s\n\t%zu, %zu", "vaSizeFullyUnmapped", "mVaSizeFullyUnmapped", v59, this->mVaSizeFullyUnmapped) )
        __debugbreak();
    }
  }
}

/*
==============
StreamDefragRegion<0>::Validate
==============
*/
void StreamDefragRegion<0>::Validate(StreamDefragRegion<0> *this)
{
  unsigned __int64 mVaSizeCommitted; 
  unsigned __int64 mVaSizeAlignWaste; 
  unsigned __int64 mVaSizeFullyUnmapped; 
  unsigned __int64 mVaSizeUsed; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 VASizeAllocated; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  unsigned __int64 v24; 
  unsigned __int64 v25; 
  unsigned __int8 *mAddrTail; 
  unsigned __int8 *mAddrBase; 
  unsigned __int8 *mAddrHead; 
  unsigned __int8 *v29; 
  StreamDefragAllocNode *mTail; 
  int v31; 
  unsigned __int64 v32; 
  unsigned __int8 *v33; 
  __int64 MaxVaSize; 
  unsigned __int8 *v35; 
  unsigned __int8 *v36; 
  const dvar_t *v37; 
  unsigned __int8 *mAddrEnd; 
  __int64 mPool; 
  StreamDefragAllocNode *mHead; 
  const RList<StreamNextTailAddress> *v41; 
  unsigned __int64 vAddrCurTail; 
  unsigned __int8 *v43; 
  unsigned __int8 *v44; 
  __int64 v45; 
  __int64 v46; 
  unsigned __int8 *v47; 
  unsigned __int8 *v48; 
  unsigned __int8 *v49; 
  unsigned __int8 *v50; 
  unsigned __int8 *v51; 
  unsigned __int8 *v52; 
  unsigned __int8 *v53; 
  size_t v54; 
  size_t v55; 
  size_t v56; 
  size_t v57; 
  __int64 v58; 
  __m256i v59; 
  __m256i v60; 
  __m256i v61; 
  __m256i v62; 
  __int64 *v63; 
  StreamDefragRegion<0>::Validate::__l2::<lambda_5c08103b09a3a3c72d5b0d17833e193f> v64; 
  char v65; 
  char v66; 
  int v67; 
  int v68; 

  Stream_Defrag_CheckLocks();
  if ( !this->mDefragSteps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1361, ASSERT_TYPE_ASSERT, "(mDefragSteps)", (const char *)&queryFormat, "mDefragSteps") )
    __debugbreak();
  if ( !this->mNextTailAddresses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1362, ASSERT_TYPE_ASSERT, "(mNextTailAddresses)", (const char *)&queryFormat, "mNextTailAddresses") )
    __debugbreak();
  if ( (this->mVaSizeCommitted & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2161, ASSERT_TYPE_ASSERT, "(mVaSizeCommitted % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeCommitted % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  mVaSizeCommitted = this->mVaSizeCommitted;
  if ( (this->mVaSizeAlignWaste & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2167, ASSERT_TYPE_ASSERT, "(mVaSizeAlignWaste % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeAlignWaste % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  mVaSizeAlignWaste = this->mVaSizeAlignWaste;
  if ( (this->mVaSizeFullyUnmapped & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2173, ASSERT_TYPE_ASSERT, "(mVaSizeFullyUnmapped % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeFullyUnmapped % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  mVaSizeFullyUnmapped = this->mVaSizeFullyUnmapped;
  if ( (this->mVaSizeUsed & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2145, ASSERT_TYPE_ASSERT, "(mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  mVaSizeUsed = this->mVaSizeUsed;
  if ( mVaSizeCommitted + mVaSizeFullyUnmapped + mVaSizeAlignWaste > mVaSizeUsed )
  {
    if ( (mVaSizeUsed & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2145, ASSERT_TYPE_ASSERT, "(mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    v6 = this->mVaSizeUsed;
    if ( (this->mVaSizeCommitted & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2161, ASSERT_TYPE_ASSERT, "(mVaSizeCommitted % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeCommitted % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    v7 = this->mVaSizeCommitted;
    if ( (this->mVaSizeAlignWaste & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2167, ASSERT_TYPE_ASSERT, "(mVaSizeAlignWaste % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeAlignWaste % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    v8 = this->mVaSizeAlignWaste;
    if ( (this->mVaSizeFullyUnmapped & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2173, ASSERT_TYPE_ASSERT, "(mVaSizeFullyUnmapped % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeFullyUnmapped % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1364, ASSERT_TYPE_ASSERT, "( GetVASizeCommitted() + GetVASizeAlignWaste() + GetVASizeFullyUnmappedNotYetReleased() ) <= ( GetVASizeUsed() )", "%s <= %s\n\t%zu, %zu", "GetVASizeCommitted() + GetVASizeAlignWaste() + GetVASizeFullyUnmappedNotYetReleased()", "GetVASizeUsed()", v7 + v8 + this->mVaSizeFullyUnmapped, v6) )
      __debugbreak();
  }
  if ( (this->mVaSizeUsed & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2145, ASSERT_TYPE_ASSERT, "(mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  v9 = this->mVaSizeUsed;
  if ( this->mAddrTail > this->mAddrHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2136, ASSERT_TYPE_ASSERT, "(mAddrTail <= mAddrHead)", (const char *)&queryFormat, "mAddrTail <= mAddrHead") )
    __debugbreak();
  v10 = this->mAddrHead - this->mAddrTail;
  if ( (v10 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2139, ASSERT_TYPE_ASSERT, "(vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  if ( v9 > v10 )
  {
    if ( this->mAddrTail > this->mAddrHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2136, ASSERT_TYPE_ASSERT, "(mAddrTail <= mAddrHead)", (const char *)&queryFormat, "mAddrTail <= mAddrHead") )
      __debugbreak();
    v11 = this->mAddrHead - this->mAddrTail;
    if ( (v11 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2139, ASSERT_TYPE_ASSERT, "(vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    if ( (this->mVaSizeUsed & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2145, ASSERT_TYPE_ASSERT, "(mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "mVaSizeUsed % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1365, ASSERT_TYPE_ASSERT, "( GetVASizeUsed() ) <= ( GetVASizeAllocated() )", "%s <= %s\n\t%zu, %zu", "GetVASizeUsed()", "GetVASizeAllocated()", this->mVaSizeUsed, v11) )
      __debugbreak();
  }
  if ( this->mAddrTail > this->mAddrHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2136, ASSERT_TYPE_ASSERT, "(mAddrTail <= mAddrHead)", (const char *)&queryFormat, "mAddrTail <= mAddrHead") )
    __debugbreak();
  v12 = this->mAddrHead - this->mAddrTail;
  if ( (v12 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2139, ASSERT_TYPE_ASSERT, "(vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  v13 = this->mAddrEnd - this->mAddrBase;
  if ( v12 > v13 )
  {
    if ( this->mAddrTail > this->mAddrHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2136, ASSERT_TYPE_ASSERT, "(mAddrTail <= mAddrHead)", (const char *)&queryFormat, "mAddrTail <= mAddrHead") )
      __debugbreak();
    v14 = this->mAddrHead - this->mAddrTail;
    if ( (v14 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2139, ASSERT_TYPE_ASSERT, "(vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1366, ASSERT_TYPE_ASSERT, "( GetVASizeAllocated() ) <= ( GetVASizeTotal() )", "%s <= %s\n\t%zu, %zu", "GetVASizeAllocated()", "GetVASizeTotal()", v14, v13) )
      __debugbreak();
  }
  if ( this->mAddrTail > this->mAddrHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2136, ASSERT_TYPE_ASSERT, "(mAddrTail <= mAddrHead)", (const char *)&queryFormat, "mAddrTail <= mAddrHead") )
    __debugbreak();
  v15 = this->mAddrHead - this->mAddrTail;
  if ( (v15 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2139, ASSERT_TYPE_ASSERT, "(vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  VASizeAllocated = StreamDefragRegion<0>::GetVASizeAllocated(this);
  v17 = this->mAddrEnd - this->mAddrBase;
  v18 = VASizeAllocated;
  if ( v17 < VASizeAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2153, ASSERT_TYPE_ASSERT, "( totalAddressSpace ) >= ( allocatedAddressSpace )", "%s >= %s\n\t%zu, %zu", "totalAddressSpace", "allocatedAddressSpace", v17, VASizeAllocated) )
    __debugbreak();
  v19 = v17 - v18;
  if ( (v19 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2155, ASSERT_TYPE_ASSERT, "(vaSizeNotAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeNotAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
    __debugbreak();
  v20 = this->mAddrEnd - this->mAddrBase;
  if ( v19 + v15 != v20 )
  {
    if ( this->mAddrTail > this->mAddrHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2136, ASSERT_TYPE_ASSERT, "(mAddrTail <= mAddrHead)", (const char *)&queryFormat, "mAddrTail <= mAddrHead") )
      __debugbreak();
    v21 = this->mAddrHead - this->mAddrTail;
    if ( (v21 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2139, ASSERT_TYPE_ASSERT, "(vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    v22 = StreamDefragRegion<0>::GetVASizeAllocated(this);
    v23 = v22;
    v24 = this->mAddrEnd - this->mAddrBase;
    if ( v24 < v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2153, ASSERT_TYPE_ASSERT, "( totalAddressSpace ) >= ( allocatedAddressSpace )", "%s >= %s\n\t%zu, %zu", "totalAddressSpace", "allocatedAddressSpace", v24, v22) )
      __debugbreak();
    v25 = v24 - v23;
    if ( (v25 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 2155, ASSERT_TYPE_ASSERT, "(vaSizeNotAllocated % MIN_DEFRAG_ALIGNMENT == 0)", (const char *)&queryFormat, "vaSizeNotAllocated % MIN_DEFRAG_ALIGNMENT == 0") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1367, ASSERT_TYPE_ASSERT, "( GetVASizeAllocated() + GetVASizeNotAllocated() ) == ( GetVASizeTotal() )", "%s == %s\n\t%zu, %zu", "GetVASizeAllocated() + GetVASizeNotAllocated()", "GetVASizeTotal()", v25 + v21, v20) )
      __debugbreak();
  }
  if ( this->mDefragInFlightNodeCount < this->mDefragInFlightCopyCount )
  {
    LODWORD(v46) = this->mDefragInFlightCopyCount;
    LODWORD(v45) = this->mDefragInFlightNodeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1369, ASSERT_TYPE_ASSERT, "( mDefragInFlightNodeCount ) >= ( mDefragInFlightCopyCount )", "%s >= %s\n\t%u, %u", "mDefragInFlightNodeCount", "mDefragInFlightCopyCount", v45, v46) )
      __debugbreak();
  }
  if ( this->mAllocations.mTail )
  {
    if ( this->mAddrHead == this->mAddrTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1376, ASSERT_TYPE_ASSERT, "(mAddrHead != mAddrTail)", (const char *)&queryFormat, "mAddrHead != mAddrTail") )
      __debugbreak();
    mAddrTail = (unsigned __int8 *)this->mAddrTail;
    mAddrBase = (unsigned __int8 *)this->mAddrBase;
    v49 = mAddrTail;
    if ( mAddrTail < mAddrBase )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1379, ASSERT_TYPE_ASSERT, "( addrTail ) >= ( reinterpret_cast<byte*>( mAddrBase ) )", "%s >= %s\n\t%p, %p", "addrTail", "reinterpret_cast<byte*>( mAddrBase )", mAddrTail, mAddrBase) )
        __debugbreak();
      mAddrTail = v49;
    }
    if ( (unsigned __int64)mAddrTail >= this->mAddrEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1380, ASSERT_TYPE_ASSERT, "( addrTail ) < ( reinterpret_cast<byte*>( mAddrEnd ) )", "%s < %s\n\t%p, %p", "addrTail", "reinterpret_cast<byte*>( mAddrEnd )", mAddrTail, (const void *)this->mAddrEnd) )
      __debugbreak();
    mAddrHead = (unsigned __int8 *)this->mAddrHead;
    v29 = (unsigned __int8 *)this->mAddrBase;
    v48 = mAddrHead;
    if ( mAddrHead < v29 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1383, ASSERT_TYPE_ASSERT, "( addrHead ) >= ( reinterpret_cast<byte*>( mAddrBase ) )", "%s >= %s\n\t%p, %p", "addrHead", "reinterpret_cast<byte*>( mAddrBase )", mAddrHead, v29) )
        __debugbreak();
      mAddrHead = v48;
    }
    if ( (unsigned __int64)mAddrHead > this->mAddrEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1384, ASSERT_TYPE_ASSERT, "( addrHead ) <= ( reinterpret_cast<byte*>( mAddrEnd ) )", "%s <= %s\n\t%p, %p", "addrHead", "reinterpret_cast<byte*>( mAddrEnd )", mAddrHead, (const void *)this->mAddrEnd) )
      __debugbreak();
    mTail = this->mAllocations.mTail;
    v31 = 0;
    v32 = *((unsigned int *)mTail + 1);
    if ( (v32 & 0x7800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1387, ASSERT_TYPE_ASSERT, "( backNode->vAddrEndAlignLog2 ) == ( 0 )", "%s == %s\n\t%llu, %llu", "backNode->vAddrEndAlignLog2", "0", (v32 >> 23) & 0xF, 0i64) )
      __debugbreak();
    v33 = StrmOffsetToAddress(this->mPool, *((unsigned int *)mTail + 3));
    MaxVaSize = (unsigned int)NodeGetMaxVaSize(mTail);
    v35 = v48;
    if ( v48 != &v33[MaxVaSize] )
    {
      v36 = StrmOffsetToAddress(this->mPool, *((unsigned int *)mTail + 3));
      v47 = &v36[(unsigned int)NodeGetMaxVaSize(mTail)];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1388, ASSERT_TYPE_ASSERT, "( addrHead ) == ( StrmOffsetToAddress( mPool, backNode->vAddrOffsetWrite ) + NodeGetMaxVaSize( backNode ) )", "%s == %s\n\t%p, %p", "addrHead", "StrmOffsetToAddress( mPool, backNode->vAddrOffsetWrite ) + NodeGetMaxVaSize( backNode )", v48, v47) )
        __debugbreak();
      v35 = v48;
    }
    if ( v49 > v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1392, ASSERT_TYPE_ASSERT, "( addrTail ) <= ( addrHead )", "%s <= %s\n\t%p, %p", "addrTail", "addrHead", v49, v35) )
      __debugbreak();
    v37 = DCONST_DVARBOOL_stream_defragValidateRegions;
    if ( !DCONST_DVARBOOL_stream_defragValidateRegions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragValidateRegions") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    if ( v37->current.enabled )
    {
      mAddrEnd = (unsigned __int8 *)this->mAddrEnd;
      mPool = (unsigned int)this->mPool;
      mHead = this->mAllocations.mHead;
      v53 = (unsigned __int8 *)this->mAddrBase;
      v52 = v53;
      v59.m256i_i64[1] = (__int64)&v67;
      v59.m256i_i64[2] = (__int64)this->mDefragSteps;
      v59.m256i_i64[3] = (__int64)&v56;
      v60.m256i_i64[0] = (__int64)&v54;
      v60.m256i_i64[1] = (__int64)&v57;
      v60.m256i_i64[2] = (__int64)&v55;
      v60.m256i_i64[3] = (__int64)&v50;
      v61.m256i_i64[0] = (__int64)&v53;
      v61.m256i_i64[1] = (__int64)&v51;
      v61.m256i_i64[2] = (__int64)&v52;
      v61.m256i_i64[3] = (__int64)&v49;
      v62.m256i_i64[0] = (__int64)&v66;
      v62.m256i_i64[1] = (__int64)&v48;
      v62.m256i_i64[2] = (__int64)&v65;
      v62.m256i_i64[3] = (__int64)&v68;
      v41 = &(*this->mNextTailAddresses)[mPool];
      v59.m256i_i64[0] = (__int64)this;
      v63 = &v58;
      v54 = 0i64;
      v57 = 0i64;
      v55 = 0i64;
      v56 = 0i64;
      v58 = 0i64;
      v50 = mAddrEnd;
      v51 = mAddrEnd;
      v68 = 0;
      v67 = 0;
      v66 = 0;
      v65 = 0;
      *(__m256i *)&v64.__this = v59;
      *(__m256i *)&v64.vaSizeUsed = v60;
      *(__m256i *)&v64.highestAddrRead = v61;
      v64.prevAddrWriteBegin = (const unsigned __int8 **)&v58;
      *(__m256i *)&v64.foundTailNode = v62;
      if ( mHead )
      {
        do
        {
          if ( !_lambda_5c08103b09a3a3c72d5b0d17833e193f_::operator()(&v64, mHead) )
            break;
          if ( !(*(_DWORD *)mHead << 13) )
            break;
          mHead += (__int64)(int)(*(_DWORD *)mHead << 13) >> 13;
        }
        while ( mHead );
        v31 = v67;
      }
      if ( v31 != this->mDefragInFlightNodeCount )
      {
        LODWORD(v46) = this->mDefragInFlightNodeCount;
        LODWORD(v45) = v31;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1649, ASSERT_TYPE_ASSERT, "( defragInFlightNodeCount ) == ( mDefragInFlightNodeCount )", "%s == %s\n\t%u, %u", "defragInFlightNodeCount", "mDefragInFlightNodeCount", v45, v46) )
          __debugbreak();
      }
      if ( !v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1650, ASSERT_TYPE_ASSERT, "(foundHeadNode)", (const char *)&queryFormat, "foundHeadNode") )
        __debugbreak();
      if ( !v66 )
      {
        if ( !v41->mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1658, ASSERT_TYPE_ASSERT, "(!nextTailAddresses.Empty())", (const char *)&queryFormat, "!nextTailAddresses.Empty()") )
          __debugbreak();
        vAddrCurTail = v41->mHead->vAddrCurTail;
        if ( vAddrCurTail != this->mAddrTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1659, ASSERT_TYPE_ASSERT, "( nextTailAddresses.PeekFront()->vAddrCurTail ) == ( mAddrTail )", "%s == %s\n\t%llx, %llx", "nextTailAddresses.PeekFront()->vAddrCurTail", "mAddrTail", vAddrCurTail, this->mAddrTail) )
          __debugbreak();
      }
      v43 = v49;
      if ( v50 != v49 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1664, ASSERT_TYPE_ASSERT, "( lowestAddrRead ) == ( addrTail )", "%s == %s\n\t%p, %p", "lowestAddrRead", "addrTail", v50, v49) )
          __debugbreak();
        v43 = v49;
      }
      if ( v51 != v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1665, ASSERT_TYPE_ASSERT, "( lowestAddrWrite ) == ( addrTail )", "%s == %s\n\t%p, %p", "lowestAddrWrite", "addrTail", v51, v43) )
        __debugbreak();
      v44 = v48;
      if ( v52 != v48 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1666, ASSERT_TYPE_ASSERT, "( highestAddrWrite ) == ( addrHead )", "%s == %s\n\t%p, %p", "highestAddrWrite", "addrHead", v52, v48) )
          __debugbreak();
        v44 = v48;
      }
      if ( v53 != v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1667, ASSERT_TYPE_ASSERT, "( highestAddrRead ) == ( addrHead )", "%s == %s\n\t%p, %p", "highestAddrRead", "addrHead", v53, v44) )
        __debugbreak();
      if ( v54 != this->mVaSizeUsed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1670, ASSERT_TYPE_ASSERT, "( vaSizeUsed ) == ( mVaSizeUsed )", "%s == %s\n\t%zu, %zu", "vaSizeUsed", "mVaSizeUsed", v54, this->mVaSizeUsed) )
        __debugbreak();
      if ( v55 != this->mVaSizeCommitted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1671, ASSERT_TYPE_ASSERT, "( vaSizeCommitted ) == ( mVaSizeCommitted )", "%s == %s\n\t%zu, %zu", "vaSizeCommitted", "mVaSizeCommitted", v55, this->mVaSizeCommitted) )
        __debugbreak();
      if ( v56 != this->mVaSizeAlignWaste && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1672, ASSERT_TYPE_ASSERT, "( vaSizeAlignWaste ) == ( mVaSizeAlignWaste )", "%s == %s\n\t%zu, %zu", "vaSizeAlignWaste", "mVaSizeAlignWaste", v56, this->mVaSizeAlignWaste) )
        __debugbreak();
      if ( v57 != this->mVaSizeFullyUnmapped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 1673, ASSERT_TYPE_ASSERT, "( vaSizeFullyUnmapped ) == ( mVaSizeFullyUnmapped )", "%s == %s\n\t%zu, %zu", "vaSizeFullyUnmapped", "mVaSizeFullyUnmapped", v57, this->mVaSizeFullyUnmapped) )
        __debugbreak();
    }
  }
}

/*
==============
ValidateDataHashAgainstXPakEntry
==============
*/
void ValidateDataHashAgainstXPakEntry(const unsigned __int8 *data, unsigned __int64 dataSize, unsigned int partIndex, const StreamDefragAllocNode *node)
{
  __int64 v4; 
  unsigned __int64 v8; 
  const char *v9; 
  char v10; 
  __int64 v11; 
  int v12; 
  const char *name; 
  unsigned __int16 *p_xpakEntry; 
  int v15; 
  int v16; 
  XModelSurfs *GfxImageAtIndex; 
  __int64 v18; 
  char *fmt; 
  __int64 v20; 

  v4 = partIndex;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 524, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !dataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 525, ASSERT_TYPE_ASSERT, "(dataSize > 0)", (const char *)&queryFormat, "dataSize > 0") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 526, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v8 = j_CoD_XXH64(data, dataSize, 0i64);
  v9 = NULL;
  v10 = *((_DWORD *)node + 1);
  v11 = v8 & 0x1FFFFFFFFFFFFFFFi64;
  v12 = (*((_DWORD *)node + 1) >> 2) & 0x3FFFF;
  name = NULL;
  p_xpakEntry = NULL;
  v15 = v10 & 3;
  if ( !v15 )
  {
    GfxImageAtIndex = (XModelSurfs *)DB_GetGfxImageAtIndex(v12);
    if ( (unsigned int)v4 >= BYTE1(GfxImageAtIndex->shared) )
    {
      LODWORD(v20) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 543, ASSERT_TYPE_ASSERT, "(unsigned)( partIndex ) < (unsigned)( image->streamedPartCount )", "partIndex doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v20, BYTE1(GfxImageAtIndex->shared)) )
        __debugbreak();
    }
    p_xpakEntry = &GfxImageAtIndex->numsurfs + 20 * v4;
    v9 = "image";
LABEL_27:
    name = GfxImageAtIndex->name;
    if ( p_xpakEntry )
      goto LABEL_30;
    goto LABEL_28;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 551, ASSERT_TYPE_ASSERT, "(partIndex == 0)", (const char *)&queryFormat, "partIndex == 0") )
      __debugbreak();
    GfxImageAtIndex = DB_GetXModelSurfsAtIndex(v12);
    v9 = "mesh";
    p_xpakEntry = (unsigned __int16 *)&GfxImageAtIndex->xpakEntry;
    goto LABEL_27;
  }
  if ( v16 == 1 )
  {
    if ( (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 560, ASSERT_TYPE_ASSERT, "(partIndex == 0)", (const char *)&queryFormat, "partIndex == 0") )
      __debugbreak();
    GfxImageAtIndex = (XModelSurfs *)DB_GetStreamKeyAtIndex(v12);
    v9 = "generic";
    p_xpakEntry = (unsigned __int16 *)&GfxImageAtIndex->surfs;
    goto LABEL_27;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 568, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
    __debugbreak();
LABEL_28:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 570, ASSERT_TYPE_ASSERT, "(xpakEntryAsset)", (const char *)&queryFormat, "xpakEntryAsset") )
    __debugbreak();
LABEL_30:
  v18 = *(_QWORD *)p_xpakEntry & 0x1FFFFFFFFFFFFFFFi64;
  if ( v11 != v18 )
  {
    LODWORD(fmt) = v4;
    Com_PrintError(35, "Hash mismatch between xpak key and defrag copy data (aka data corruption) for %s '%s' part %u!\n\t0x%zx (xpak) != 0x%zx (computed)\n", v9, name, fmt, v18, v11);
    Stream_Logger_Dump(data);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 581, ASSERT_TYPE_ASSERT, "( contentAsset ) == ( contentComputed )", "%s == %s\n\t%llu, %llu", "contentAsset", "contentComputed", v18, v11) )
      __debugbreak();
  }
}

/*
==============
StreamDefrag::ValidateDefragSteps
==============
*/
void StreamDefrag::ValidateDefragSteps(StreamDefrag *this)
{
  unsigned __int64 i; 
  unsigned int v3; 
  StreamDefragCommand *mHead; 
  __int64 v5; 
  __int64 v6; 
  __int128 v7; 
  StreamDefragCommand command; 
  unsigned int v9; 
  int v10; 

  for ( i = 0i64; i < 3; ++i )
  {
    v10 = i;
    *((_QWORD *)&v7 + 1) = &v9;
    v3 = 0;
    v9 = 0;
    *(_QWORD *)&v7 = this;
    *(_OWORD *)&command.node = v7;
    *(_QWORD *)&command.partSize[2] = &v10;
    mHead = this->mDefragSteps[(int)i].mHead;
    if ( mHead )
    {
      do
      {
        if ( !lambda_815a3987011062f2ed5bf243045eb139_::operator()(&command) )
          break;
        if ( !(*((_DWORD *)mHead + 13) << 21) )
          break;
        mHead += (__int64)(int)(*((_DWORD *)mHead + 13) << 21) >> 21;
      }
      while ( mHead );
      v3 = v9;
    }
    if ( v3 > this->mDefragUnmapFrameDepth + this->mDefragFrameIndex + 1 )
    {
      LODWORD(v6) = this->mDefragUnmapFrameDepth + this->mDefragFrameIndex + 1;
      LODWORD(v5) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3869, ASSERT_TYPE_ASSERT, "( prevUnmapFrame ) <= ( mDefragFrameIndex + mDefragUnmapFrameDepth + 1 )", "%s <= %s\n\t%u, %u", "prevUnmapFrame", "mDefragFrameIndex + mDefragUnmapFrameDepth + 1", v5, v6) )
        __debugbreak();
    }
  }
}

/*
==============
StreamDefrag::ValidateNextTailAddresses
==============
*/
void StreamDefrag::ValidateNextTailAddresses(StreamDefrag *this)
{
  StreamDefrag::ValidateNextTailAddresses::__l7::<lambda_7b0187d96472505d06c2a83b210df050> *mNextTailAddresses; 
  unsigned __int64 v2; 
  StreamDefrag::AddressSpace *mAddressSpaces; 
  const StreamDefragAllocNode *mHead; 
  unsigned int MaxVaSize; 
  __int64 VaSizeForParts; 
  unsigned __int8 *v7; 

  mNextTailAddresses = (StreamDefrag::ValidateNextTailAddresses::__l7::<lambda_7b0187d96472505d06c2a83b210df050> *)this->mNextTailAddresses;
  v2 = 0i64;
  mAddressSpaces = this->mAddressSpaces;
  do
  {
    if ( mNextTailAddresses->prev )
    {
      RList_StreamNextTailAddress_::IterateFrontToBack__lambda_7b0187d96472505d06c2a83b210df050___(mNextTailAddresses);
      mHead = mAddressSpaces->mMoveableRegion.mAllocations.mHead;
      if ( mAddressSpaces->mMoveableRegion.mAllocations.mHead )
      {
        if ( (*(_DWORD *)mHead & 0x100000) != 0 && *((_DWORD *)mHead + 2) == *((_DWORD *)mHead + 3) )
        {
          MaxVaSize = NodeGetMaxVaSize(mAddressSpaces->mMoveableRegion.mAllocations.mHead);
          VaSizeForParts = NodeGetVaSizeForParts(mHead, (*((_DWORD *)mHead + 1) >> 20) & 7);
          v7 = &StrmOffsetToAddress((StreamMemPool)v2, *((unsigned int *)mHead + 2))[MaxVaSize - VaSizeForParts];
          if ( (unsigned __int8 *)MEMORY[8] != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3913, ASSERT_TYPE_ASSERT, "( prev->vAddrNextTail ) == ( firstNonDefraggingReadAddr )", "%s == %s\n\t%llx, %llx", "prev->vAddrNextTail", "firstNonDefraggingReadAddr", MEMORY[8], v7) )
            __debugbreak();
        }
      }
    }
    ++v2;
    ++mAddressSpaces;
    mNextTailAddresses = (StreamDefrag::ValidateNextTailAddresses::__l7::<lambda_7b0187d96472505d06c2a83b210df050> *)((char *)mNextTailAddresses + 16);
  }
  while ( v2 < 2 );
}

/*
==============
StreamDefrag::ValidateNodes
==============
*/
void StreamDefrag::ValidateNodes(StreamDefrag *this)
{
  if ( Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3734, ASSERT_TYPE_ASSERT, "(!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  DB_EnumXAssets(ASSET_TYPE_IMAGE, lambda_e364da12fa9e73c6b1c3a10f662161d8_::_lambda_invoker_cdecl_, this, 1);
  DB_EnumXAssets(ASSET_TYPE_XMODEL_SURFS, lambda_1d5daba300b73f8cd5a510f5b9676131_::_lambda_invoker_cdecl_, this, 1);
  DB_EnumXAssets(ASSET_TYPE_STREAM_KEY, lambda_fd4d023bbdbab4a325f7c80c81497155_::_lambda_invoker_cdecl_, this, 1);
}

/*
==============
StreamDefrag::ValidateRegions
==============
*/
void StreamDefrag::ValidateRegions(StreamDefrag *this)
{
  unsigned __int64 i; 
  unsigned int v3; 
  StreamDefragCommand *mHead; 
  StreamDefrag::AddressSpace *mAddressSpaces; 
  RStackPool<StreamNextTailAddress,36> *p_mNextTailAddressPool; 
  StreamDefrag::AddressSpace *j; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  unsigned __int8 *mAddrBase; 
  unsigned __int8 *mAddrEnd; 
  unsigned __int8 *mAddrTail; 
  unsigned __int8 *mAddrHead; 
  unsigned __int8 *v14; 
  unsigned __int8 *v15; 
  __int64 v16; 
  __int64 v17; 
  __int128 v18; 
  StreamDefragCommand command; 
  unsigned int v20; 
  int v21; 

  for ( i = 0i64; i < 3; ++i )
  {
    v21 = i;
    *((_QWORD *)&v18 + 1) = &v20;
    v3 = 0;
    v20 = 0;
    *(_QWORD *)&v18 = this;
    *(_OWORD *)&command.node = v18;
    *(_QWORD *)&command.partSize[2] = &v21;
    mHead = this->mDefragSteps[(int)i].mHead;
    if ( mHead )
    {
      do
      {
        if ( !lambda_815a3987011062f2ed5bf243045eb139_::operator()(&command) )
          break;
        if ( !(*((_DWORD *)mHead + 13) << 21) )
          break;
        mHead += (__int64)(int)(*((_DWORD *)mHead + 13) << 21) >> 21;
      }
      while ( mHead );
      v3 = v20;
    }
    if ( v3 > this->mDefragUnmapFrameDepth + this->mDefragFrameIndex + 1 )
    {
      LODWORD(v17) = this->mDefragUnmapFrameDepth + this->mDefragFrameIndex + 1;
      LODWORD(v16) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_defrag.cpp", 3869, ASSERT_TYPE_ASSERT, "( prevUnmapFrame ) <= ( mDefragFrameIndex + mDefragUnmapFrameDepth + 1 )", "%s <= %s\n\t%u, %u", "prevUnmapFrame", "mDefragFrameIndex + mDefragUnmapFrameDepth + 1", v16, v17) )
        __debugbreak();
    }
  }
  mAddressSpaces = this->mAddressSpaces;
  p_mNextTailAddressPool = &this->mNextTailAddressPool;
  for ( j = this->mAddressSpaces; j != (StreamDefrag::AddressSpace *)p_mNextTailAddressPool; ++j )
  {
    StreamDefragRegion<0>::Validate(&j->mFixedRegion);
    StreamDefragRegion<1>::Validate(&j->mMoveableRegion);
  }
  StreamDefrag::ValidateNextTailAddresses(this);
  v8 = DCONST_DVARBOOL_stream_defragValidateRegionEmptyVAReserve;
  if ( !DCONST_DVARBOOL_stream_defragValidateRegionEmptyVAReserve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragValidateRegionEmptyVAReserve") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    StreamDefrag::FlushAsyncVA(this, Block, MapsAndUnmaps, 0);
    for ( ; mAddressSpaces != (StreamDefrag::AddressSpace *)p_mNextTailAddressPool; ++mAddressSpaces )
    {
      v9 = DCONST_DVARBOOL_stream_defragValidateRegionEmptyVAReserve;
      mAddrBase = (unsigned __int8 *)mAddressSpaces->mMoveableRegion.mAddrBase;
      mAddrEnd = (unsigned __int8 *)mAddressSpaces->mMoveableRegion.mAddrEnd;
      mAddrTail = (unsigned __int8 *)mAddressSpaces->mMoveableRegion.mAddrTail;
      mAddrHead = (unsigned __int8 *)mAddressSpaces->mMoveableRegion.mAddrHead;
      if ( !DCONST_DVARBOOL_stream_defragValidateRegionEmptyVAReserve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragValidateRegionEmptyVAReserve") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.enabled )
      {
        if ( mAddrHead == mAddrTail )
        {
          v14 = mAddrEnd;
          v15 = mAddrBase;
        }
        else
        {
          if ( mAddrHead <= mAddrTail )
          {
            v14 = mAddrTail;
          }
          else
          {
            if ( mAddrTail != mAddrBase )
              Mem_Paged_CheckUnaliasedDecommittedSubPageMemory(mAddrBase, mAddrTail);
            v14 = mAddrEnd;
          }
          v15 = mAddrHead;
        }
        Mem_Paged_CheckUnaliasedDecommittedSubPageMemory(v15, v14);
      }
    }
  }
}

/*
==============
StreamDefrag::ValidateRegionsEmptyVAReserve
==============
*/
void StreamDefrag::ValidateRegionsEmptyVAReserve(StreamDefrag *this)
{
  const dvar_t *v1; 
  RStackPool<StreamNextTailAddress,36> *p_mNextTailAddressPool; 
  unsigned __int64 *p_mAddrEnd; 
  const dvar_t *v5; 
  unsigned __int8 *v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *v11; 

  v1 = DCONST_DVARBOOL_stream_defragValidateRegionEmptyVAReserve;
  if ( !DCONST_DVARBOOL_stream_defragValidateRegionEmptyVAReserve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragValidateRegionEmptyVAReserve") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    StreamDefrag::FlushAsyncVA(this, Block, MapsAndUnmaps, 0);
    p_mNextTailAddressPool = &this->mNextTailAddressPool;
    if ( this->mAddressSpaces != (StreamDefrag::AddressSpace *)&this->mNextTailAddressPool )
    {
      p_mAddrEnd = &this->mAddressSpaces[0].mMoveableRegion.mAddrEnd;
      do
      {
        v5 = DCONST_DVARBOOL_stream_defragValidateRegionEmptyVAReserve;
        v6 = (unsigned __int8 *)*(p_mAddrEnd - 1);
        v7 = (unsigned __int8 *)*p_mAddrEnd;
        v8 = (unsigned __int8 *)p_mAddrEnd[1];
        v9 = (unsigned __int8 *)p_mAddrEnd[2];
        if ( !DCONST_DVARBOOL_stream_defragValidateRegionEmptyVAReserve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_defragValidateRegionEmptyVAReserve") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v5);
        if ( v5->current.enabled )
        {
          if ( v9 == v8 )
          {
            v10 = v7;
            v11 = v6;
          }
          else
          {
            if ( v9 <= v8 )
            {
              v10 = v8;
            }
            else
            {
              if ( v8 != v6 )
                Mem_Paged_CheckUnaliasedDecommittedSubPageMemory(v6, v8);
              v10 = v7;
            }
            v11 = v9;
          }
          Mem_Paged_CheckUnaliasedDecommittedSubPageMemory(v11, v10);
        }
        p_mAddrEnd += 32;
      }
      while ( p_mAddrEnd - 5 != (unsigned __int64 *)p_mNextTailAddressPool );
    }
  }
}

/*
==============
compileTimeLog2
==============
*/
unsigned __int64 compileTimeLog2(unsigned __int64 n)
{
  if ( n >= 2 )
    return compileTimeLog2(n >> 1) + 1;
  else
    return 0i64;
}

