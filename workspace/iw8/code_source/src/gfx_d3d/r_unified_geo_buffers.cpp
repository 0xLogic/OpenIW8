/*
==============
R_UGB_InitBuffers
==============
*/

void R_UGB_InitBuffers(void)
{
  ?R_UGB_InitBuffers@@YAXXZ();
}

/*
==============
R_UOB_GetBlendInfoVPageStart
==============
*/

unsigned int __fastcall R_UOB_GetBlendInfoVPageStart(unsigned __int16 ugbID)
{
  return ?R_UOB_GetBlendInfoVPageStart@@YAIG@Z(ugbID);
}

/*
==============
R_UGB_DirtySurfData
==============
*/

void R_UGB_DirtySurfData(void)
{
  ?R_UGB_DirtySurfData@@YAXXZ();
}

/*
==============
R_UOB_GetNormalTransformVPageStart
==============
*/

unsigned int __fastcall R_UOB_GetNormalTransformVPageStart(unsigned __int16 ugbID)
{
  return ?R_UOB_GetNormalTransformVPageStart@@YAIG@Z(ugbID);
}

/*
==============
R_UGB_MakeXSurfsResident_Dispatch
==============
*/

void __fastcall R_UGB_MakeXSurfsResident_Dispatch(const void *const cmd)
{
  ?R_UGB_MakeXSurfsResident_Dispatch@@YAXQEBX@Z(cmd);
}

/*
==============
RB_UOB_UploadPages
==============
*/

void __fastcall RB_UOB_UploadPages(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  ?RB_UOB_UploadPages@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@@Z(state, data);
}

/*
==============
UGBWCRing::WaitFence
==============
*/

void __fastcall UGBWCRing::WaitFence(UGBWCRing *this, ComputeCmdBufState *state)
{
  ?WaitFence@UGBWCRing@@QEAAXPEIAUComputeCmdBufState@@@Z(this, state);
}

/*
==============
UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::HandlePhysPageLimits
==============
*/

void __fastcall UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::HandlePhysPageLimits(UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData> *this)
{
  ?HandlePhysPageLimits@?$UGBVirtualBuffer@$0EA@$0EAAA@$0KAAAA@$0CAA@$0BA@UUGBPageArgsGPU@@UUGBPageData@@@@QEAAXXZ(this);
}

/*
==============
R_UGB_InitOrReset
==============
*/

void __fastcall R_UGB_InitOrReset(bool resetXSurfsDBState)
{
  ?R_UGB_InitOrReset@@YAX_N@Z(resetXSurfsDBState);
}

/*
==============
R_UVB_MakeXSurfsResident_Worker
==============
*/

void __fastcall R_UVB_MakeXSurfsResident_Worker(const void *const cmd)
{
  ?R_UVB_MakeXSurfsResident_Worker@@YAXQEBX@Z(cmd);
}

/*
==============
UGBWCRing::UpdateRingBufferContext
==============
*/

void __fastcall UGBWCRing::UpdateRingBufferContext(UGBWCRing *this, ComputeCmdBufState *state)
{
  ?UpdateRingBufferContext@UGBWCRing@@QEAAXPEIAUComputeCmdBufState@@@Z(this, state);
}

/*
==============
R_UGB_ClearXSurfResidencyBitsSafe
==============
*/

void __fastcall R_UGB_ClearXSurfResidencyBitsSafe(unsigned __int16 ugbID)
{
  ?R_UGB_ClearXSurfResidencyBitsSafe@@YAXG@Z(ugbID);
}

/*
==============
UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::MarkXSurfPagesResident
==============
*/

void __fastcall UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::MarkXSurfPagesResident(UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData> *this, unsigned int inUGBID)
{
  ?MarkXSurfPagesResident@?$UGBVirtualBuffer@$0EA@$0EAAA@$0KAAAA@$0CAA@$0BA@UUGBPageArgsGPU@@UUGBPageData@@@@QEAAXI@Z(this, inUGBID);
}

/*
==============
R_UIB_MakeXSurfsResident_Worker
==============
*/

void __fastcall R_UIB_MakeXSurfsResident_Worker(const void *const cmd)
{
  ?R_UIB_MakeXSurfsResident_Worker@@YAXQEBX@Z(cmd);
}

/*
==============
R_UGB_SetRingBufferOffsets<UGBStagingDataConsts>
==============
*/

void __fastcall R_UGB_SetRingBufferOffsets<UGBStagingDataConsts>(ComputeCmdBufState *state, const UGBStagingDataConsts *ringOffsetConsts)
{
  ??$R_UGB_SetRingBufferOffsets@UUGBStagingDataConsts@@@@YAXPEIAUComputeCmdBufState@@AEBUUGBStagingDataConsts@@@Z(state, ringOffsetConsts);
}

/*
==============
RB_UGB_FlushCaches
==============
*/

void __fastcall RB_UGB_FlushCaches(ComputeCmdBufState *state)
{
  ?RB_UGB_FlushCaches@@YAXPEIAUComputeCmdBufState@@@Z(state);
}

/*
==============
R_UGB_UpdateXSurfDataFromSModelSurf
==============
*/

bool __fastcall R_UGB_UpdateXSurfDataFromSModelSurf(const unsigned int smodelSurfIndex, const GfxStaticModelSurface *smodelSurf, unsigned int *localResidentBits)
{
  return ?R_UGB_UpdateXSurfDataFromSModelSurf@@YA_NIPEIBUGfxStaticModelSurface@@PEIAI@Z(smodelSurfIndex, smodelSurf, localResidentBits);
}

/*
==============
UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::MakeVirtualPagesResident
==============
*/

void __fastcall UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::MakeVirtualPagesResident(UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData> *this)
{
  ?MakeVirtualPagesResident@?$UGBVirtualBuffer@$0EA@$0MPAA@$0BEAAAA@$0CAA@$0BE@UUGBPageArgsGPU@@UUGBPageData@@@@QEAAXXZ(this);
}

/*
==============
R_UGB_UploadPagesCompute
==============
*/

void __fastcall R_UGB_UploadPagesCompute(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  ?R_UGB_UploadPagesCompute@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@@Z(state, data);
}

/*
==============
UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::HandlePhysPageLimits
==============
*/

void __fastcall UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::HandlePhysPageLimits(UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData> *this)
{
  ?HandlePhysPageLimits@?$UGBVirtualBuffer@$0EA@$0MAAA@$0BCIAAA@$0IAA@$05UUIBPageArgsGPU@@UUIBPageData@@@@QEAAXXZ(this);
}

/*
==============
R_UGB_InitFrame
==============
*/

void __fastcall R_UGB_InitFrame(const GfxBackEndData *data)
{
  ?R_UGB_InitFrame@@YAXPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_UOB_GetRecalcTangentFrameDataVPageStart
==============
*/

unsigned int __fastcall R_UOB_GetRecalcTangentFrameDataVPageStart(unsigned __int16 ugbID)
{
  return ?R_UOB_GetRecalcTangentFrameDataVPageStart@@YAIG@Z(ugbID);
}

/*
==============
UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::UploadPages
==============
*/

void __fastcall UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::UploadPages(UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData> *this, ComputeCmdBufState *state, const GfxBackEndData *data, const ComputeShader *pagingShader, const ComputeShader *clearShader, void (__fastcall *uploadFunc)(unsigned int, const UGBPageArgs *, unsigned int))
{
  ?UploadPages@?$UGBVirtualBuffer@$0EA@$0MAAA@$0BCIAAA@$0IAA@$05UUIBPageArgsGPU@@UUIBPageData@@@@QEAAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@PEIBUComputeShader@@2P6AXIAEBUUGBPageArgs@@I@Z@Z(this, state, data, pagingShader, clearShader, uploadFunc);
}

/*
==============
RB_UGB_UploadPages
==============
*/

void __fastcall RB_UGB_UploadPages(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  ?RB_UGB_UploadPages@@YAXUGfxCmdBufContext@@PEIBUGfxBackEndData@@@Z(gfxContext, data);
}

/*
==============
RB_UVB_UploadPages
==============
*/

void __fastcall RB_UVB_UploadPages(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  ?RB_UVB_UploadPages@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@@Z(state, data);
}

/*
==============
UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::UploadPages
==============
*/

void __fastcall UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::UploadPages(UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData> *this, ComputeCmdBufState *state, const GfxBackEndData *data, const ComputeShader *pagingShader, const ComputeShader *clearShader, void (__fastcall *uploadFunc)(unsigned int, const UGBPageArgs *, unsigned int))
{
  ?UploadPages@?$UGBVirtualBuffer@$0EA@$0MPAA@$0BEAAAA@$0CAA@$0BE@UUGBPageArgsGPU@@UUGBPageData@@@@QEAAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@PEIBUComputeShader@@2P6AXIAEBUUGBPageArgs@@I@Z@Z(this, state, data, pagingShader, clearShader, uploadFunc);
}

/*
==============
R_UGB_GetBuffersTotalMemSize
==============
*/

unsigned __int64 __fastcall R_UGB_GetBuffersTotalMemSize()
{
  return ?R_UGB_GetBuffersTotalMemSize@@YA_KXZ();
}

/*
==============
R_UGB_CollectStats
==============
*/

void R_UGB_CollectStats(void)
{
  ?R_UGB_CollectStats@@YAXXZ();
}

/*
==============
UGBXSurfHistory::AddXSurf
==============
*/

void __fastcall UGBXSurfHistory::AddXSurf(UGBXSurfHistory *this, const XSurface *const xsurf, const unsigned __int16 *inUGBID)
{
  ?AddXSurf@UGBXSurfHistory@@QEAAXQEBUXSurface@@AEBG@Z(this, xsurf, inUGBID);
}

/*
==============
RB_UVB_GetSurfVirtPageStart
==============
*/

unsigned int __fastcall RB_UVB_GetSurfVirtPageStart(unsigned __int16 ugbID, unsigned int smpFrame)
{
  return ?RB_UVB_GetSurfVirtPageStart@@YAIGI@Z(ugbID, smpFrame);
}

/*
==============
RB_UIB_UploadPages
==============
*/

void __fastcall RB_UIB_UploadPages(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  ?RB_UIB_UploadPages@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@@Z(state, data);
}

/*
==============
UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::UploadPages
==============
*/

void __fastcall UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::UploadPages(UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData> *this, ComputeCmdBufState *state, const GfxBackEndData *data, const ComputeShader *pagingShader, const ComputeShader *clearShader, void (__fastcall *uploadFunc)(unsigned int, const UGBPageArgs *, unsigned int))
{
  ?UploadPages@?$UGBVirtualBuffer@$0EA@$0EAAA@$0KAAAA@$0CAA@$0BA@UUGBPageArgsGPU@@UUGBPageData@@@@QEAAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@PEIBUComputeShader@@2P6AXIAEBUUGBPageArgs@@I@Z@Z(this, state, data, pagingShader, clearShader, uploadFunc);
}

/*
==============
XModelSurfsRingBuffer::DequeueAll
==============
*/

bool __fastcall XModelSurfsRingBuffer::DequeueAll(XModelSurfsRingBuffer *this, void (__fastcall *func)(const XModelSurfs *))
{
  return ?DequeueAll@XModelSurfsRingBuffer@@QEAA_NP6AXPEBUXModelSurfs@@@Z@Z(this, func);
}

/*
==============
UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::HandlePhysPageLimits
==============
*/

void __fastcall UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::HandlePhysPageLimits(UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData> *this)
{
  ?HandlePhysPageLimits@?$UGBVirtualBuffer@$0EA@$0MPAA@$0BEAAAA@$0CAA@$0BE@UUGBPageArgsGPU@@UUGBPageData@@@@QEAAXXZ(this);
}

/*
==============
R_UOB_GetColorDataPageStart
==============
*/

unsigned int __fastcall R_UOB_GetColorDataPageStart(unsigned __int16 ugbID)
{
  return ?R_UOB_GetColorDataPageStart@@YAIG@Z(ugbID);
}

/*
==============
R_UGB_RecheckSurfData
==============
*/

void R_UGB_RecheckSurfData(void)
{
  ?R_UGB_RecheckSurfData@@YAXXZ();
}

/*
==============
UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::MakeVirtualPagesResident
==============
*/

void __fastcall UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::MakeVirtualPagesResident(UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData> *this)
{
  ?MakeVirtualPagesResident@?$UGBVirtualBuffer@$0EA@$0MAAA@$0BCIAAA@$0IAA@$05UUIBPageArgsGPU@@UUIBPageData@@@@QEAAXXZ(this);
}

/*
==============
R_UGB_SetRingBufferOffsets<UGBPagingRingConsts>
==============
*/

void __fastcall R_UGB_SetRingBufferOffsets<UGBPagingRingConsts>(ComputeCmdBufState *state, const UGBPagingRingConsts *ringOffsetConsts)
{
  ??$R_UGB_SetRingBufferOffsets@UUGBPagingRingConsts@@@@YAXPEIAUComputeCmdBufState@@AEBUUGBPagingRingConsts@@@Z(state, ringOffsetConsts);
}

/*
==============
R_UGB_UpdateXSurfDataFromXSurf
==============
*/

bool __fastcall R_UGB_UpdateXSurfDataFromXSurf(const XSurface *const xsurf)
{
  return ?R_UGB_UpdateXSurfDataFromXSurf@@YA_NQEBUXSurface@@@Z(xsurf);
}

/*
==============
UGBXSurfHistory::FindXSurfByKey
==============
*/

bool __fastcall UGBXSurfHistory::FindXSurfByKey(UGBXSurfHistory *this, XSurfKey xsurfKey, unsigned __int16 *outUGBID)
{
  return ?FindXSurfByKey@UGBXSurfHistory@@QEAA_NTXSurfKey@@AEAG@Z(this, xsurfKey, outUGBID);
}

/*
==============
R_UGB_ShutDownStagingRingBuffer
==============
*/

void R_UGB_ShutDownStagingRingBuffer(void)
{
  ?R_UGB_ShutDownStagingRingBuffer@@YAXXZ();
}

/*
==============
R_UGB_GetPhysicalMemoryUsageRatio
==============
*/

double __fastcall R_UGB_GetPhysicalMemoryUsageRatio()
{
  double result; 

  *(float *)&result = ?R_UGB_GetPhysicalMemoryUsageRatio@@YAMXZ();
  return result;
}

/*
==============
UGBWCRing::Allocate
==============
*/

unsigned int __fastcall UGBWCRing::Allocate(UGBWCRing *this, ComputeCmdBufState *state, unsigned int byteSize)
{
  return ?Allocate@UGBWCRing@@QEAAIPEIAUComputeCmdBufState@@I@Z(this, state, byteSize);
}

/*
==============
R_UIB_GetSurfVirtPageStart
==============
*/

unsigned int __fastcall R_UIB_GetSurfVirtPageStart(unsigned __int16 ugbID)
{
  return ?R_UIB_GetSurfVirtPageStart@@YAIG@Z(ugbID);
}

/*
==============
R_UGB_ShutDownBuffers
==============
*/

void R_UGB_ShutDownBuffers(void)
{
  ?R_UGB_ShutDownBuffers@@YAXXZ();
}

/*
==============
UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::MarkXSurfPagesResident
==============
*/

void __fastcall UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::MarkXSurfPagesResident(UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData> *this, unsigned int inUGBID)
{
  ?MarkXSurfPagesResident@?$UGBVirtualBuffer@$0EA@$0MAAA@$0BCIAAA@$0IAA@$05UUIBPageArgsGPU@@UUIBPageData@@@@QEAAXI@Z(this, inUGBID);
}

/*
==============
R_UGB_InitStagingRingBuffer
==============
*/

void R_UGB_InitStagingRingBuffer(void)
{
  ?R_UGB_InitStagingRingBuffer@@YAXXZ();
}

/*
==============
UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::MarkXSurfPagesResident
==============
*/

void __fastcall UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::MarkXSurfPagesResident(UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData> *this, unsigned int inUGBID)
{
  ?MarkXSurfPagesResident@?$UGBVirtualBuffer@$0EA@$0MPAA@$0BEAAAA@$0CAA@$0BE@UUGBPageArgsGPU@@UUGBPageData@@@@QEAAXI@Z(this, inUGBID);
}

/*
==============
RB_UOB_GetSurfVirtPageStart
==============
*/

unsigned int __fastcall RB_UOB_GetSurfVirtPageStart(unsigned __int16 ugbID, unsigned int smpFrame)
{
  return ?RB_UOB_GetSurfVirtPageStart@@YAIGI@Z(ugbID, smpFrame);
}

/*
==============
R_UOB_MakeXSurfsResident_Worker
==============
*/

void __fastcall R_UOB_MakeXSurfsResident_Worker(const void *const cmd)
{
  ?R_UOB_MakeXSurfsResident_Worker@@YAXQEBX@Z(cmd);
}

/*
==============
R_UGB_MakeXSurfsResident
==============
*/

void __fastcall R_UGB_MakeXSurfsResident(const GfxBackEndData *data)
{
  ?R_UGB_MakeXSurfsResident@@YAXPEBUGfxBackEndData@@@Z(data);
}

/*
==============
UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::MakeVirtualPagesResident
==============
*/

void __fastcall UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::MakeVirtualPagesResident(UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData> *this)
{
  ?MakeVirtualPagesResident@?$UGBVirtualBuffer@$0EA@$0EAAA@$0KAAAA@$0CAA@$0BA@UUGBPageArgsGPU@@UUGBPageData@@@@QEAAXXZ(this);
}

/*
==============
R_UGB_EnqueueXModelSurfs
==============
*/

bool __fastcall R_UGB_EnqueueXModelSurfs(const XModelSurfs *inXModelSurfs)
{
  return ?R_UGB_EnqueueXModelSurfs@@YA_NPEBUXModelSurfs@@@Z(inXModelSurfs);
}

/*
==============
RB_UIB_GetSurfVirtPageStart
==============
*/

unsigned int __fastcall RB_UIB_GetSurfVirtPageStart(unsigned __int16 ugbID, unsigned int smpFrame)
{
  return ?RB_UIB_GetSurfVirtPageStart@@YAIGI@Z(ugbID, smpFrame);
}

/*
==============
UGBWCRing::IsAllocMemValidForCPUWrite
==============
*/

bool __fastcall UGBWCRing::IsAllocMemValidForCPUWrite(UGBWCRing *this, unsigned int allocEnd)
{
  return ?IsAllocMemValidForCPUWrite@UGBWCRing@@QEAA_NI@Z(this, allocEnd);
}

/*
==============
R_UOB_GetBlendShapesPerVertDataVPageStart
==============
*/

unsigned int __fastcall R_UOB_GetBlendShapesPerVertDataVPageStart(unsigned __int16 ugbID)
{
  return ?R_UOB_GetBlendShapesPerVertDataVPageStart@@YAIG@Z(ugbID);
}

/*
==============
R_UGB_InitFrameWorker
==============
*/

void __fastcall R_UGB_InitFrameWorker(const void *const ugbInitData)
{
  ?R_UGB_InitFrameWorker@@YAXQEBX@Z(ugbInitData);
}

/*
==============
R_UOB_GetSurfVirtPageStart
==============
*/

unsigned int __fastcall R_UOB_GetSurfVirtPageStart(unsigned __int16 ugbID)
{
  return ?R_UOB_GetSurfVirtPageStart@@YAIG@Z(ugbID);
}

/*
==============
R_UVB_GetSurfVirtPageStart
==============
*/

unsigned int __fastcall R_UVB_GetSurfVirtPageStart(unsigned __int16 ugbID)
{
  return ?R_UVB_GetSurfVirtPageStart@@YAIG@Z(ugbID);
}

/*
==============
R_UOB_GetLMapUVVPageStart
==============
*/

unsigned int __fastcall R_UOB_GetLMapUVVPageStart(unsigned __int16 ugbID)
{
  return ?R_UOB_GetLMapUVVPageStart@@YAIG@Z(ugbID);
}

/*
==============
R_UOB_GetSecondUVVPageStart
==============
*/

unsigned int __fastcall R_UOB_GetSecondUVVPageStart(unsigned __int16 ugbID)
{
  return ?R_UOB_GetSecondUVVPageStart@@YAIG@Z(ugbID);
}

/*
==============
R_UGB_InitBackend_Worker
==============
*/

void __fastcall R_UGB_InitBackend_Worker(const void *const cmd)
{
  ?R_UGB_InitBackend_Worker@@YAXQEBX@Z(cmd);
}

/*
==============
R_UGB_UpdateXSurfsResidency
==============
*/

void __fastcall R_UGB_UpdateXSurfsResidency(unsigned int *localResidentBits)
{
  ?R_UGB_UpdateXSurfsResidency@@YAXPEAI@Z(localResidentBits);
}

/*
==============
R_UGB_UpdateXSurfPointer
==============
*/

bool __fastcall R_UGB_UpdateXSurfPointer(const XSurface *const xsurf)
{
  return ?R_UGB_UpdateXSurfPointer@@YA_NQEBUXSurface@@@Z(xsurf);
}

/*
==============
R_UGB_SetRingBufferOffsets<UGBPagingRingConsts>
==============
*/
void R_UGB_SetRingBufferOffsets<UGBPagingRingConsts>(ComputeCmdBufState *state, const UGBPagingRingConsts *ringOffsetConsts)
{
  R_UploadAndSetComputeConstants(state, 0, ringOffsetConsts, 0x10u, NULL);
}

/*
==============
R_UGB_SetRingBufferOffsets<UGBStagingDataConsts>
==============
*/
void R_UGB_SetRingBufferOffsets<UGBStagingDataConsts>(ComputeCmdBufState *state, const UGBStagingDataConsts *ringOffsetConsts)
{
  R_UploadAndSetComputeConstants(state, 0, ringOffsetConsts, 0x10u, NULL);
}

/*
==============
UGBXSurfHistory::AddXSurf
==============
*/
void UGBXSurfHistory::AddXSurf(UGBXSurfHistory *this, const XSurface *const xsurf, const unsigned __int16 *inUGBID)
{
  __int64 v5; 
  unsigned __int16 headIndex; 
  __int64 numXSurfs; 
  __int64 v8; 
  unsigned __int16 v9; 
  __int64 v10; 
  XSurfKey v11; 

  v11.hash = xsurf->hash;
  *(_DWORD *)&v11.vertCount = *(_DWORD *)&xsurf->vertCount;
  if ( this->numXSurfs > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 231, ASSERT_TYPE_ASSERT, "(numXSurfs <= ( ( 65536 ) - 1 ))", (const char *)&queryFormat, "numXSurfs <= UGB_MAX_XSURFACES") )
    __debugbreak();
  if ( v11.hash == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 234, ASSERT_TYPE_ASSERT, "(xsurfKey.hash != UGB_INVALID_XSURF_HASH)", (const char *)&queryFormat, "xsurfKey.hash != UGB_INVALID_XSURF_HASH") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 195, ASSERT_TYPE_ASSERT, "(xsurfKey.hash != UGB_INVALID_XSURF_HASH)", (const char *)&queryFormat, "xsurfKey.hash != UGB_INVALID_XSURF_HASH") )
      __debugbreak();
  }
  if ( this->numXSurfs )
  {
    v5 = (unsigned __int16)(LOWORD(v11.packed) ^ ((v11.hash >> 17) | (HIWORD(v11.hash) << 15)));
    headIndex = this->xsurfHashTable[v5].headIndex;
    if ( headIndex != 0xFFFF )
    {
      while ( 1 )
      {
        if ( (unsigned __int16)(this->xsurfKeys[headIndex].hash ^ ((this->xsurfKeys[headIndex].hash >> 17) | (HIWORD(this->xsurfKeys[headIndex].hash) << 15))) != (_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 164, ASSERT_TYPE_ASSERT, "(GetHashTablePos( xsurfKeys[keyIndex].hash ) == hashPos)", (const char *)&queryFormat, "GetHashTablePos( xsurfKeys[keyIndex].hash ) == hashPos") )
          __debugbreak();
        if ( this->xsurfKeys[headIndex].packed == v11.packed )
          break;
        headIndex = this->linkTable[headIndex];
        if ( headIndex == 0xFFFF )
          goto LABEL_22;
      }
      if ( headIndex >= this->numXSurfs )
      {
        LODWORD(v10) = headIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 206, ASSERT_TYPE_ASSERT, "(unsigned)( xsurfIndex ) < (unsigned)( numXSurfs )", "xsurfIndex doesn't index numXSurfs\n\t%i not in [0, %i)", v10, this->numXSurfs) )
          __debugbreak();
      }
      truncate_cast<unsigned short,unsigned int>(headIndex);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 236, ASSERT_TYPE_ASSERT, "(!FindXSurfByKey( xsurfKey, dummy ))", (const char *)&queryFormat, "!FindXSurfByKey( xsurfKey, dummy )") )
        __debugbreak();
    }
  }
LABEL_22:
  numXSurfs = this->numXSurfs;
  v8 = (unsigned __int16)(LOWORD(v11.packed) ^ ((v11.hash >> 17) | (HIWORD(v11.hash) << 15)));
  if ( this->linkTable[numXSurfs] != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 181, ASSERT_TYPE_ASSERT, "(linkTable[index] == UGB_INVALID_LINK)", (const char *)&queryFormat, "linkTable[index] == UGB_INVALID_LINK") )
    __debugbreak();
  v9 = this->xsurfHashTable[v8].headIndex;
  this->xsurfHashTable[v8].headIndex = truncate_cast<unsigned short,unsigned int>(numXSurfs);
  this->linkTable[numXSurfs] = v9;
  this->xsurfKeys[this->numXSurfs] = v11;
  if ( *inUGBID != this->numXSurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 245, ASSERT_TYPE_ASSERT, "(inUGBID == numXSurfs)", (const char *)&queryFormat, "inUGBID == numXSurfs") )
    __debugbreak();
  ++this->numXSurfs;
}

/*
==============
UGBWCRing::Allocate
==============
*/
__int64 UGBWCRing::Allocate(UGBWCRing *this, ComputeCmdBufState *state, unsigned int byteSize)
{
  unsigned int nextCPUWritePos; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 bufSize; 
  __int64 pendingSize; 
  float v11; 
  float v12; 
  unsigned __int64 computeFenceCounter; 
  float v14; 
  ComputeContextType computeContextType; 
  ComputeContextType v16; 
  GfxDevice *device; 
  unsigned __int64 v18; 
  volatile unsigned __int64 *computeFenceAddr; 
  bool v20; 
  int v21; 
  __int64 result; 

  if ( byteSize >= this->bufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 893, ASSERT_TYPE_ASSERT, "(byteSize < bufSize)", (const char *)&queryFormat, "byteSize < bufSize") )
    __debugbreak();
  nextCPUWritePos = this->nextCPUWritePos;
  v7 = (byteSize + 63) & 0xFFFFFFC0;
  v8 = this->nextCPUWritePos + v7;
  if ( (this->nextCPUWritePos & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 900, ASSERT_TYPE_ASSERT, "(IsAligned( allocOffset, 64 ))", (const char *)&queryFormat, "IsAligned( allocOffset, UGB_WC_RING_ALIGNMENT )") )
    __debugbreak();
  if ( (v8 & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 901, ASSERT_TYPE_ASSERT, "(IsAligned( allocEnd, 64 ))", (const char *)&queryFormat, "IsAligned( allocEnd, UGB_WC_RING_ALIGNMENT )") )
    __debugbreak();
  bufSize = this->bufSize;
  if ( v8 <= (unsigned int)bufSize )
  {
    this->pendingSize += v7;
    pendingSize = this->pendingSize;
  }
  else
  {
    nextCPUWritePos = 0;
    pendingSize = 0xFFFFFFFFi64;
    this->pendingSize = -1;
    v8 = v7;
    this->nextCPUWritePos = 0;
  }
  v11 = (float)bufSize;
  v12 = v11 * 0.25;
  computeFenceCounter = 0i64;
  v14 = (float)pendingSize;
  if ( v14 >= v12 )
  {
    computeContextType = state->computeContextType;
    if ( computeContextType != COMPUTE_CONTEXT_TYPE_GFX && computeContextType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 765, ASSERT_TYPE_ASSERT, "(state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX || state->computeContextType == COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND)", (const char *)&queryFormat, "state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX || state->computeContextType == COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND") )
      __debugbreak();
    v16 = state->computeContextType;
    if ( v16 == COMPUTE_CONTEXT_TYPE_GFX )
    {
      computeFenceCounter = R_FlushImmediateContext();
      if ( state->device == g_dx.immediateContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 771, ASSERT_TYPE_ASSERT, "(state->device != g_dx.immediateContext)", (const char *)&queryFormat, "state->device != g_dx.immediateContext") )
        __debugbreak();
      state->device = g_dx.immediateContext;
    }
    else if ( v16 == COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND )
    {
      device = state->device;
      v18 = this->computeFenceCounter + 1;
      computeFenceAddr = this->computeFenceAddr;
      this->computeFenceCounter = v18;
      ((void (__fastcall *)(GfxDevice *, volatile unsigned __int64 *, unsigned __int64, _QWORD, _DWORD))device->m_pFunction[23].AddRef)(device, computeFenceAddr, v18, 0i64, 0);
      R_FlushCompute(state);
      computeFenceCounter = this->computeFenceCounter;
    }
    if ( this->pendingSize )
    {
      v20 = this->nextCPUWritePos == 0;
      this->pendingSize = 0;
      if ( v20 )
        ++this->cpuWriteLoopCount;
      this->pos[this->cpuWritePosIndex].fence = computeFenceCounter;
      this->pos[this->cpuWritePosIndex].bufferPos = this->nextCPUWritePos;
      v21 = ((unsigned __int8)this->cpuWritePosIndex + 1) & 0x7F;
      if ( v21 == this->gpuReadPosIndex )
        UGBWCRing::WaitFence(this, state);
      this->cpuWritePosIndex = v21;
    }
  }
  while ( !UGBWCRing::IsAllocMemValidForCPUWrite(this, v8) )
    UGBWCRing::WaitFence(this, state);
  result = nextCPUWritePos;
  this->nextCPUWritePos = v8;
  return result;
}

/*
==============
XModelSurfsRingBuffer::DequeueAll
==============
*/
__int64 XModelSurfsRingBuffer::DequeueAll(XModelSurfsRingBuffer *this, void (*func)(const XModelSurfs *))
{
  volatile int *p_dequeueLock; 
  unsigned __int8 v5; 
  volatile unsigned int start; 
  volatile unsigned int end; 
  unsigned int v8; 
  const XModelSurfs *v9; 

  p_dequeueLock = &this->dequeueLock;
  v5 = 0;
  Sys_WaitInterlockedCompareExchange(&this->dequeueLock, 1, 0);
  if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", this) )
    __debugbreak();
  start = this->start;
  if ( (((_BYTE)this + 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &this->end) )
    __debugbreak();
  end = this->end;
  if ( start < end )
  {
    v8 = end - start;
    if ( end - start > 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 369, ASSERT_TYPE_ASSERT, "(( currentEnd - currentStart ) <= BUFFER_SIZE)", (const char *)&queryFormat, "( currentEnd - currentStart ) <= BUFFER_SIZE") )
      __debugbreak();
    do
    {
      v9 = this->ringBufferArray[start & 0x1FFF];
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 376, ASSERT_TYPE_ASSERT, "(xmodelSurfs)", (const char *)&queryFormat, "xmodelSurfs") )
        __debugbreak();
      func(v9);
      ++start;
    }
    while ( start < end );
    p_dequeueLock = &this->dequeueLock;
    if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", this) )
      __debugbreak();
    _InterlockedExchangeAdd(&this->start, v8);
    v5 = 1;
  }
  if ( ((unsigned __int8)p_dequeueLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_dequeueLock) )
    __debugbreak();
  _InterlockedExchange(p_dequeueLock, 0);
  return v5;
}

/*
==============
UGBXSurfHistory::FindXSurfByKey
==============
*/
char UGBXSurfHistory::FindXSurfByKey(UGBXSurfHistory *this, XSurfKey xsurfKey, unsigned __int16 *outUGBID)
{
  __int64 v6; 
  unsigned __int16 headIndex; 
  __int64 v9; 
  unsigned int numXSurfs; 

  if ( xsurfKey.hash == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 195, ASSERT_TYPE_ASSERT, "(xsurfKey.hash != UGB_INVALID_XSURF_HASH)", (const char *)&queryFormat, "xsurfKey.hash != UGB_INVALID_XSURF_HASH") )
    __debugbreak();
  if ( !this->numXSurfs )
    return 0;
  v6 = (unsigned __int16)(LOWORD(xsurfKey.packed) ^ ((xsurfKey.hash >> 17) | (HIWORD(xsurfKey.hash) << 15)));
  headIndex = this->xsurfHashTable[v6].headIndex;
  if ( headIndex == 0xFFFF )
    return 0;
  while ( 1 )
  {
    if ( (unsigned __int16)(this->xsurfKeys[headIndex].hash ^ ((this->xsurfKeys[headIndex].hash >> 17) | (HIWORD(this->xsurfKeys[headIndex].hash) << 15))) != (_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 164, ASSERT_TYPE_ASSERT, "(GetHashTablePos( xsurfKeys[keyIndex].hash ) == hashPos)", (const char *)&queryFormat, "GetHashTablePos( xsurfKeys[keyIndex].hash ) == hashPos") )
      __debugbreak();
    if ( this->xsurfKeys[headIndex].packed == xsurfKey.packed )
      break;
    headIndex = this->linkTable[headIndex];
    if ( headIndex == 0xFFFF )
      return 0;
  }
  if ( headIndex >= this->numXSurfs )
  {
    numXSurfs = this->numXSurfs;
    LODWORD(v9) = headIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 206, ASSERT_TYPE_ASSERT, "(unsigned)( xsurfIndex ) < (unsigned)( numXSurfs )", "xsurfIndex doesn't index numXSurfs\n\t%i not in [0, %i)", v9, numXSurfs) )
      __debugbreak();
  }
  *outUGBID = truncate_cast<unsigned short,unsigned int>(headIndex);
  return 1;
}

/*
==============
UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::HandlePhysPageLimits
==============
*/
void UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::HandlePhysPageLimits(UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData> *this)
{
  unsigned int *physPageInUseBits; 
  int v3; 
  __int64 v4; 
  UGBPagingBackendData<16384> *curBackEnd; 
  unsigned int pageArgUploadCount; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  int v13; 
  volatile signed __int32 *v14; 
  unsigned int failedPhysPageAllocations; 
  unsigned int physPageWatermark; 

  physPageInUseBits = this->pageMan.physPageInUseBits;
  v3 = 0;
  v4 = 512i64;
  do
  {
    v3 += __popcnt(*physPageInUseBits++);
    --v4;
  }
  while ( v4 );
  curBackEnd = this->curBackEnd;
  pageArgUploadCount = curBackEnd->pageArgUploadCount;
  v7 = v3 + pageArgUploadCount;
  if ( !curBackEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1240, ASSERT_TYPE_ASSERT, "(curBackEnd)", (const char *)&queryFormat, "curBackEnd") )
    __debugbreak();
  if ( v7 > 0x4000 )
  {
    v8 = v7 - 0x4000;
    if ( v7 - 0x4000 > pageArgUploadCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1250, ASSERT_TYPE_ASSERT, "(extraPageCount <= virtPagesToPageInCount)", (const char *)&queryFormat, "extraPageCount <= virtPagesToPageInCount") )
      __debugbreak();
    v9 = pageArgUploadCount - v8;
    if ( v3 + (_DWORD)v9 != 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1254, ASSERT_TYPE_ASSERT, "(( pageDeleteStart + physPagesInUseCount ) == PHYS_PAGE_LIMIT)", (const char *)&queryFormat, "( pageDeleteStart + physPagesInUseCount ) == PHYS_PAGE_LIMIT") )
      __debugbreak();
    if ( (unsigned int)v9 < pageArgUploadCount )
    {
      v10 = v9;
      v11 = v8;
      do
      {
        v12 = (unsigned __int64)this->curBackEnd->pageArgsToUpload[v10].xsurfUGBID >> 5;
        v13 = ~(1 << (this->curBackEnd->pageArgsToUpload[v10].xsurfUGBID & 0x1F));
        v14 = (volatile signed __int32 *)&s_ugbGlob.xsurfResidentBits[v12];
        if ( ((unsigned __int8)v14 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_ugbGlob.xsurfResidentBits[v12]) )
          __debugbreak();
        _InterlockedAnd(v14, v13);
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    this->curBackEnd->pageArgUploadCount = v9;
    this->failedPhysPageAllocations += v8;
  }
  failedPhysPageAllocations = this->failedPhysPageAllocations;
  if ( failedPhysPageAllocations )
  {
    R_WarnOncePerFrame(R_WARN_UGB_PHYS_PAGE_LIMIT, g_unifiedBufferNames[this->type], 0x4000i64, failedPhysPageAllocations);
    failedPhysPageAllocations = this->failedPhysPageAllocations;
  }
  physPageWatermark = v3 + failedPhysPageAllocations + this->curBackEnd->pageArgUploadCount;
  if ( this->physPageWatermark > physPageWatermark )
    physPageWatermark = this->physPageWatermark;
  this->physPageWatermark = physPageWatermark;
}

/*
==============
UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::HandlePhysPageLimits
==============
*/
void UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::HandlePhysPageLimits(UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData> *this)
{
  unsigned int *physPageInUseBits; 
  int v3; 
  __int64 v4; 
  UGBPagingBackendData<49152> *curBackEnd; 
  unsigned int pageArgUploadCount; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  int v13; 
  volatile signed __int32 *v14; 
  unsigned int failedPhysPageAllocations; 
  unsigned int physPageWatermark; 

  physPageInUseBits = this->pageMan.physPageInUseBits;
  v3 = 0;
  v4 = 1536i64;
  do
  {
    v3 += __popcnt(*physPageInUseBits++);
    --v4;
  }
  while ( v4 );
  curBackEnd = this->curBackEnd;
  pageArgUploadCount = curBackEnd->pageArgUploadCount;
  v7 = v3 + pageArgUploadCount;
  if ( !curBackEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1240, ASSERT_TYPE_ASSERT, "(curBackEnd)", (const char *)&queryFormat, "curBackEnd") )
    __debugbreak();
  if ( v7 > 0xC000 )
  {
    v8 = v7 - 49152;
    if ( v7 - 49152 > pageArgUploadCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1250, ASSERT_TYPE_ASSERT, "(extraPageCount <= virtPagesToPageInCount)", (const char *)&queryFormat, "extraPageCount <= virtPagesToPageInCount") )
      __debugbreak();
    v9 = pageArgUploadCount - v8;
    if ( v3 + (_DWORD)v9 != 49152 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1254, ASSERT_TYPE_ASSERT, "(( pageDeleteStart + physPagesInUseCount ) == PHYS_PAGE_LIMIT)", (const char *)&queryFormat, "( pageDeleteStart + physPagesInUseCount ) == PHYS_PAGE_LIMIT") )
      __debugbreak();
    if ( (unsigned int)v9 < pageArgUploadCount )
    {
      v10 = v9;
      v11 = v8;
      do
      {
        v12 = (unsigned __int64)this->curBackEnd->pageArgsToUpload[v10].xsurfUGBID >> 5;
        v13 = ~(1 << (this->curBackEnd->pageArgsToUpload[v10].xsurfUGBID & 0x1F));
        v14 = (volatile signed __int32 *)&s_ugbGlob.xsurfResidentBits[v12];
        if ( ((unsigned __int8)v14 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_ugbGlob.xsurfResidentBits[v12]) )
          __debugbreak();
        _InterlockedAnd(v14, v13);
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    this->curBackEnd->pageArgUploadCount = v9;
    this->failedPhysPageAllocations += v8;
  }
  failedPhysPageAllocations = this->failedPhysPageAllocations;
  if ( failedPhysPageAllocations )
  {
    R_WarnOncePerFrame(R_WARN_UGB_PHYS_PAGE_LIMIT, g_unifiedBufferNames[this->type], 49152i64, failedPhysPageAllocations);
    failedPhysPageAllocations = this->failedPhysPageAllocations;
  }
  physPageWatermark = v3 + failedPhysPageAllocations + this->curBackEnd->pageArgUploadCount;
  if ( this->physPageWatermark > physPageWatermark )
    physPageWatermark = this->physPageWatermark;
  this->physPageWatermark = physPageWatermark;
}

/*
==============
UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::HandlePhysPageLimits
==============
*/
void UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::HandlePhysPageLimits(UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData> *this)
{
  unsigned int *physPageInUseBits; 
  int v3; 
  __int64 v4; 
  UGBPagingBackendData<52992> *curBackEnd; 
  unsigned int pageArgUploadCount; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  int v13; 
  volatile signed __int32 *v14; 
  unsigned int failedPhysPageAllocations; 
  unsigned int physPageWatermark; 

  physPageInUseBits = this->pageMan.physPageInUseBits;
  v3 = 0;
  v4 = 1656i64;
  do
  {
    v3 += __popcnt(*physPageInUseBits++);
    --v4;
  }
  while ( v4 );
  curBackEnd = this->curBackEnd;
  pageArgUploadCount = curBackEnd->pageArgUploadCount;
  v7 = v3 + pageArgUploadCount;
  if ( !curBackEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1240, ASSERT_TYPE_ASSERT, "(curBackEnd)", (const char *)&queryFormat, "curBackEnd") )
    __debugbreak();
  if ( v7 > 0xCF00 )
  {
    v8 = v7 - 52992;
    if ( v7 - 52992 > pageArgUploadCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1250, ASSERT_TYPE_ASSERT, "(extraPageCount <= virtPagesToPageInCount)", (const char *)&queryFormat, "extraPageCount <= virtPagesToPageInCount") )
      __debugbreak();
    v9 = pageArgUploadCount - v8;
    if ( v3 + (_DWORD)v9 != 52992 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1254, ASSERT_TYPE_ASSERT, "(( pageDeleteStart + physPagesInUseCount ) == PHYS_PAGE_LIMIT)", (const char *)&queryFormat, "( pageDeleteStart + physPagesInUseCount ) == PHYS_PAGE_LIMIT") )
      __debugbreak();
    if ( (unsigned int)v9 < pageArgUploadCount )
    {
      v10 = v9;
      v11 = v8;
      do
      {
        v12 = (unsigned __int64)this->curBackEnd->pageArgsToUpload[v10].xsurfUGBID >> 5;
        v13 = ~(1 << (this->curBackEnd->pageArgsToUpload[v10].xsurfUGBID & 0x1F));
        v14 = (volatile signed __int32 *)&s_ugbGlob.xsurfResidentBits[v12];
        if ( ((unsigned __int8)v14 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_ugbGlob.xsurfResidentBits[v12]) )
          __debugbreak();
        _InterlockedAnd(v14, v13);
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    this->curBackEnd->pageArgUploadCount = v9;
    this->failedPhysPageAllocations += v8;
  }
  failedPhysPageAllocations = this->failedPhysPageAllocations;
  if ( failedPhysPageAllocations )
  {
    R_WarnOncePerFrame(R_WARN_UGB_PHYS_PAGE_LIMIT, g_unifiedBufferNames[this->type], 52992i64, failedPhysPageAllocations);
    failedPhysPageAllocations = this->failedPhysPageAllocations;
  }
  physPageWatermark = v3 + failedPhysPageAllocations + this->curBackEnd->pageArgUploadCount;
  if ( this->physPageWatermark > physPageWatermark )
    physPageWatermark = this->physPageWatermark;
  this->physPageWatermark = physPageWatermark;
}

/*
==============
UGBWCRing::IsAllocMemValidForCPUWrite
==============
*/
bool UGBWCRing::IsAllocMemValidForCPUWrite(UGBWCRing *this, unsigned int allocEnd)
{
  unsigned int cpuWriteLoopCount; 
  unsigned int gpuReadLoopCount; 

  cpuWriteLoopCount = this->cpuWriteLoopCount;
  gpuReadLoopCount = this->gpuReadLoopCount;
  return cpuWriteLoopCount == gpuReadLoopCount || cpuWriteLoopCount == gpuReadLoopCount + 1 && allocEnd <= this->nextGPUReadPos;
}

/*
==============
UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::MakeVirtualPagesResident
==============
*/
void UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::MakeVirtualPagesResident(UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData> *this)
{
  UGBPagingBackendData<16384> *curBackEnd; 
  __int64 v2; 
  unsigned int *virtPageInUseBits; 
  __int64 v5; 
  __int64 virtPageID; 
  BufferPageManager<655360,16384,unsigned int,unsigned int>::VirtualPageEntry *v7; 
  unsigned int v8; 
  unsigned int PhysPage; 
  __int64 v10; 
  __int64 xsurfUGBID; 
  unsigned int vpageStart; 
  __int64 v13; 
  __int64 v14; 

  curBackEnd = this->curBackEnd;
  v2 = 0i64;
  if ( curBackEnd->pageArgUploadCount )
  {
    virtPageInUseBits = this->pageMan.virtPageInUseBits;
    do
    {
      v5 = v2;
      virtPageID = (int)curBackEnd->pageArgsToUpload[v2].virtPageID;
      v7 = &this->pageMan.virtualPages[curBackEnd->pageArgsToUpload[v2].virtPageID];
      if ( !virtPageInUseBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      if ( (unsigned int)virtPageID >= 0xA0000 )
      {
        LODWORD(v14) = 655360;
        LODWORD(v13) = virtPageID;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v8 = virtPageInUseBits[virtPageID >> 5];
      if ( _bittest((const int *)&v8, virtPageID & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffer_page_man.h", 257, ASSERT_TYPE_ASSERT, "(!Com_BitCheckAssert( virtPageInUseBits, vpageID, std::extent<decltype( virtPageInUseBits )>::value ? sizeof( decltype( virtPageInUseBits ) ) : 0 ))", (const char *)&queryFormat, "!Com_BitCheck( virtPageInUseBits, vpageID )") )
        __debugbreak();
      if ( v7->physPageID != 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffer_page_man.h", 258, ASSERT_TYPE_ASSERT, "(vpageEntry->physPageID == INVALID_PHYS_PAGE_ID)", (const char *)&queryFormat, "vpageEntry->physPageID == INVALID_PHYS_PAGE_ID") )
        __debugbreak();
      PhysPage = BufferPageManager<655360,16384,unsigned int,unsigned int>::AllocatePhysPage(&this->pageMan, virtPageID);
      v10 = PhysPage;
      v7->physPageID = PhysPage;
      this->curBackEnd->pageArgsToUpload[v5].physPageID = PhysPage;
      xsurfUGBID = this->curBackEnd->pageArgsToUpload[v5].xsurfUGBID;
      vpageStart = this->surfInfo[xsurfUGBID].vpageStart;
      if ( ((unsigned int)virtPageID < vpageStart || (unsigned int)virtPageID >= vpageStart + this->surfInfo[xsurfUGBID].vpageCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1224, ASSERT_TYPE_ASSERT, "(vpageID >= surfPageStart && vpageID < ( surfPageStart + surfPageCount))", (const char *)&queryFormat, "vpageID >= surfPageStart && vpageID < ( surfPageStart + surfPageCount)") )
        __debugbreak();
      if ( v7->physPageID != (_DWORD)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1226, ASSERT_TYPE_ASSERT, "(pageMan.virtualPages[vpageID].physPageID == physPageID)", (const char *)&queryFormat, "pageMan.virtualPages[vpageID].physPageID == physPageID") )
        __debugbreak();
      if ( this->pageMan.physPages[v10].virtPageID != (_DWORD)virtPageID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1227, ASSERT_TYPE_ASSERT, "(pageMan.physPages[physPageID].virtPageID == vpageID)", (const char *)&queryFormat, "pageMan.physPages[physPageID].virtPageID == vpageID") )
        __debugbreak();
      curBackEnd = this->curBackEnd;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < curBackEnd->pageArgUploadCount );
  }
}

/*
==============
UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::MakeVirtualPagesResident
==============
*/
void UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::MakeVirtualPagesResident(UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData> *this)
{
  UGBPagingBackendData<49152> *curBackEnd; 
  __int64 v2; 
  unsigned int *virtPageInUseBits; 
  __int64 v5; 
  __int64 virtPageID; 
  BufferPageManager<1212416,49152,unsigned int,unsigned int>::VirtualPageEntry *v7; 
  unsigned int v8; 
  unsigned int PhysPage; 
  __int64 v10; 
  __int64 xsurfUGBID; 
  unsigned int vpageStart; 
  __int64 v13; 
  __int64 v14; 

  curBackEnd = this->curBackEnd;
  v2 = 0i64;
  if ( curBackEnd->pageArgUploadCount )
  {
    virtPageInUseBits = this->pageMan.virtPageInUseBits;
    do
    {
      v5 = v2;
      virtPageID = (int)curBackEnd->pageArgsToUpload[v2].virtPageID;
      v7 = &this->pageMan.virtualPages[curBackEnd->pageArgsToUpload[v2].virtPageID];
      if ( !virtPageInUseBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      if ( (unsigned int)virtPageID >= 0x128000 )
      {
        LODWORD(v14) = 1212416;
        LODWORD(v13) = virtPageID;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v8 = virtPageInUseBits[virtPageID >> 5];
      if ( _bittest((const int *)&v8, virtPageID & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffer_page_man.h", 257, ASSERT_TYPE_ASSERT, "(!Com_BitCheckAssert( virtPageInUseBits, vpageID, std::extent<decltype( virtPageInUseBits )>::value ? sizeof( decltype( virtPageInUseBits ) ) : 0 ))", (const char *)&queryFormat, "!Com_BitCheck( virtPageInUseBits, vpageID )") )
        __debugbreak();
      if ( v7->physPageID != 49152 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffer_page_man.h", 258, ASSERT_TYPE_ASSERT, "(vpageEntry->physPageID == INVALID_PHYS_PAGE_ID)", (const char *)&queryFormat, "vpageEntry->physPageID == INVALID_PHYS_PAGE_ID") )
        __debugbreak();
      PhysPage = BufferPageManager<1212416,49152,unsigned int,unsigned int>::AllocatePhysPage(&this->pageMan, virtPageID);
      v10 = PhysPage;
      v7->physPageID = PhysPage;
      this->curBackEnd->pageArgsToUpload[v5].physPageID = PhysPage;
      xsurfUGBID = this->curBackEnd->pageArgsToUpload[v5].xsurfUGBID;
      vpageStart = this->surfInfo[xsurfUGBID].vpageStart;
      if ( ((unsigned int)virtPageID < vpageStart || (unsigned int)virtPageID >= vpageStart + this->surfInfo[xsurfUGBID].vpageCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1224, ASSERT_TYPE_ASSERT, "(vpageID >= surfPageStart && vpageID < ( surfPageStart + surfPageCount))", (const char *)&queryFormat, "vpageID >= surfPageStart && vpageID < ( surfPageStart + surfPageCount)") )
        __debugbreak();
      if ( v7->physPageID != (_DWORD)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1226, ASSERT_TYPE_ASSERT, "(pageMan.virtualPages[vpageID].physPageID == physPageID)", (const char *)&queryFormat, "pageMan.virtualPages[vpageID].physPageID == physPageID") )
        __debugbreak();
      if ( this->pageMan.physPages[v10].virtPageID != (_DWORD)virtPageID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1227, ASSERT_TYPE_ASSERT, "(pageMan.physPages[physPageID].virtPageID == vpageID)", (const char *)&queryFormat, "pageMan.physPages[physPageID].virtPageID == vpageID") )
        __debugbreak();
      curBackEnd = this->curBackEnd;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < curBackEnd->pageArgUploadCount );
  }
}

/*
==============
UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::MakeVirtualPagesResident
==============
*/
void UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::MakeVirtualPagesResident(UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData> *this)
{
  UGBPagingBackendData<52992> *curBackEnd; 
  __int64 v2; 
  unsigned int *virtPageInUseBits; 
  __int64 v5; 
  __int64 virtPageID; 
  BufferPageManager<1310720,52992,unsigned int,unsigned int>::VirtualPageEntry *v7; 
  unsigned int v8; 
  unsigned int PhysPage; 
  __int64 v10; 
  __int64 xsurfUGBID; 
  unsigned int vpageStart; 
  __int64 v13; 
  __int64 v14; 

  curBackEnd = this->curBackEnd;
  v2 = 0i64;
  if ( curBackEnd->pageArgUploadCount )
  {
    virtPageInUseBits = this->pageMan.virtPageInUseBits;
    do
    {
      v5 = v2;
      virtPageID = (int)curBackEnd->pageArgsToUpload[v2].virtPageID;
      v7 = &this->pageMan.virtualPages[curBackEnd->pageArgsToUpload[v2].virtPageID];
      if ( !virtPageInUseBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      if ( (unsigned int)virtPageID >= 0x140000 )
      {
        LODWORD(v14) = 1310720;
        LODWORD(v13) = virtPageID;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v8 = virtPageInUseBits[virtPageID >> 5];
      if ( _bittest((const int *)&v8, virtPageID & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffer_page_man.h", 257, ASSERT_TYPE_ASSERT, "(!Com_BitCheckAssert( virtPageInUseBits, vpageID, std::extent<decltype( virtPageInUseBits )>::value ? sizeof( decltype( virtPageInUseBits ) ) : 0 ))", (const char *)&queryFormat, "!Com_BitCheck( virtPageInUseBits, vpageID )") )
        __debugbreak();
      if ( v7->physPageID != 52992 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffer_page_man.h", 258, ASSERT_TYPE_ASSERT, "(vpageEntry->physPageID == INVALID_PHYS_PAGE_ID)", (const char *)&queryFormat, "vpageEntry->physPageID == INVALID_PHYS_PAGE_ID") )
        __debugbreak();
      PhysPage = BufferPageManager<1310720,52992,unsigned int,unsigned int>::AllocatePhysPage(&this->pageMan, virtPageID);
      v10 = PhysPage;
      v7->physPageID = PhysPage;
      this->curBackEnd->pageArgsToUpload[v5].physPageID = PhysPage;
      xsurfUGBID = this->curBackEnd->pageArgsToUpload[v5].xsurfUGBID;
      vpageStart = this->surfInfo[xsurfUGBID].vpageStart;
      if ( ((unsigned int)virtPageID < vpageStart || (unsigned int)virtPageID >= vpageStart + this->surfInfo[xsurfUGBID].vpageCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1224, ASSERT_TYPE_ASSERT, "(vpageID >= surfPageStart && vpageID < ( surfPageStart + surfPageCount))", (const char *)&queryFormat, "vpageID >= surfPageStart && vpageID < ( surfPageStart + surfPageCount)") )
        __debugbreak();
      if ( v7->physPageID != (_DWORD)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1226, ASSERT_TYPE_ASSERT, "(pageMan.virtualPages[vpageID].physPageID == physPageID)", (const char *)&queryFormat, "pageMan.virtualPages[vpageID].physPageID == physPageID") )
        __debugbreak();
      if ( this->pageMan.physPages[v10].virtPageID != (_DWORD)virtPageID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1227, ASSERT_TYPE_ASSERT, "(pageMan.physPages[physPageID].virtPageID == vpageID)", (const char *)&queryFormat, "pageMan.physPages[physPageID].virtPageID == vpageID") )
        __debugbreak();
      curBackEnd = this->curBackEnd;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < curBackEnd->pageArgUploadCount );
  }
}

/*
==============
UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::MarkXSurfPagesResident
==============
*/
void UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::MarkXSurfPagesResident(UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData> *this, unsigned int inUGBID)
{
  unsigned __int64 v3; 
  UGBSurfInfo *v4; 
  unsigned int *xsurfResidentBits; 
  unsigned int v6; 
  int vpageCount; 
  unsigned int i; 
  __int64 v9; 
  int *v10; 
  UGBPagingBackendData<16384> *curBackEnd; 
  __int64 pageArgUploadCount; 
  UGBPageArgs *v13; 
  unsigned int j; 
  __int64 v15; 
  int physPageID; 

  v3 = truncate_cast<unsigned short,unsigned int>(inUGBID);
  if ( (unsigned int)v3 >= s_ugbGlob.xsurfCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1166, ASSERT_TYPE_ASSERT, "(ugbID < s_ugbGlob.xsurfCount)", (const char *)&queryFormat, "ugbID < s_ugbGlob.xsurfCount") )
    __debugbreak();
  v4 = &this->surfInfo[(unsigned __int16)v3];
  if ( !s_ugbGlob.xsurfaces[(unsigned __int16)v3] )
    R_UGB_ClearXSurfResidencyBitsSafe(v3);
  xsurfResidentBits = s_ugbGlob.xsurfResidentBits;
  if ( !s_ugbGlob.xsurfResidentBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", LODWORD(s_ugbGlob.xsurfResidentBits) + 12, (AssertType)(LODWORD(s_ugbGlob.xsurfResidentBits) + 1), "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v6 = xsurfResidentBits[v3 >> 5];
  if ( _bittest((const int *)&v6, v3 & 0x1F) )
  {
    vpageCount = this->surfInfo[(unsigned __int16)v3].vpageCount;
    if ( vpageCount + this->curBackEnd->pageArgUploadCount > 0x4000 )
    {
      this->failedPhysPageAllocations += vpageCount;
      R_UGB_ClearXSurfResidencyBitsSafe(v3);
    }
    else
    {
      for ( i = 0; i < this->surfInfo[(unsigned __int16)v3].vpageCount; ++i )
      {
        v9 = i + v4->vpageStart;
        v10 = (int *)&this->pageMan.virtualPages[v9];
        if ( *v10 == 0x4000 )
        {
          curBackEnd = this->curBackEnd;
          pageArgUploadCount = curBackEnd->pageArgUploadCount;
          if ( (unsigned int)pageArgUploadCount < 0x4000 )
          {
            curBackEnd->pageArgUploadCount = pageArgUploadCount + 1;
            v13 = &curBackEnd->pageArgsToUpload[pageArgUploadCount];
          }
          else
          {
            v13 = NULL;
          }
          v13->xsurfUGBID = v3;
          v13->virtPageID = v9;
        }
        else
        {
          Com_BitSetAssert(this->pageMan.virtPageInUseBits, v9, 81920);
          Com_BitSetAssert(this->pageMan.physPageInUseBits, *v10, 2048);
          Com_BitSetAssert(this->pageMan.physPageLRUBits, *v10, 2048);
        }
      }
    }
  }
  else
  {
    for ( j = 0; j < this->surfInfo[(unsigned __int16)v3].vpageCount; ++j )
    {
      v15 = j + v4->vpageStart;
      Com_BitClearAssert(this->pageMan.virtPageInUseBits, j + v4->vpageStart, 81920);
      physPageID = this->pageMan.virtualPages[v15].physPageID;
      if ( physPageID != 0x4000 )
        Com_BitClearAssert(this->pageMan.physPageInUseBits, physPageID, 2048);
    }
  }
}

/*
==============
UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::MarkXSurfPagesResident
==============
*/
void UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::MarkXSurfPagesResident(UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData> *this, unsigned int inUGBID)
{
  unsigned __int64 v3; 
  UGBSurfInfo *v4; 
  unsigned int *xsurfResidentBits; 
  unsigned __int16 vpageCount; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  int *v10; 
  UGBPagingBackendData<49152> *curBackEnd; 
  __int64 pageArgUploadCount; 
  UGBPageArgs *v13; 
  unsigned int v14; 
  __int64 v15; 
  int physPageID; 

  v3 = truncate_cast<unsigned short,unsigned int>(inUGBID);
  if ( (unsigned int)v3 >= s_ugbGlob.xsurfCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1166, ASSERT_TYPE_ASSERT, "(ugbID < s_ugbGlob.xsurfCount)", (const char *)&queryFormat, "ugbID < s_ugbGlob.xsurfCount") )
    __debugbreak();
  v4 = &this->surfInfo[(unsigned __int16)v3];
  if ( !s_ugbGlob.xsurfaces[(unsigned __int16)v3] )
    R_UGB_ClearXSurfResidencyBitsSafe(v3);
  xsurfResidentBits = s_ugbGlob.xsurfResidentBits;
  if ( !s_ugbGlob.xsurfResidentBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", LODWORD(s_ugbGlob.xsurfResidentBits) + 12, (AssertType)(LODWORD(s_ugbGlob.xsurfResidentBits) + 1), "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  vpageCount = this->surfInfo[(unsigned __int16)v3].vpageCount;
  v7 = xsurfResidentBits[v3 >> 5];
  if ( _bittest((const int *)&v7, v3 & 0x1F) )
  {
    if ( vpageCount + this->curBackEnd->pageArgUploadCount > 0xC000 )
    {
      this->failedPhysPageAllocations += vpageCount;
      R_UGB_ClearXSurfResidencyBitsSafe(v3);
    }
    else
    {
      v8 = 0;
      if ( vpageCount )
      {
        do
        {
          v9 = v8 + v4->vpageStart;
          v10 = (int *)&this->pageMan.virtualPages[v9];
          if ( *v10 == 49152 )
          {
            curBackEnd = this->curBackEnd;
            pageArgUploadCount = curBackEnd->pageArgUploadCount;
            if ( (unsigned int)pageArgUploadCount < 0xC000 )
            {
              curBackEnd->pageArgUploadCount = pageArgUploadCount + 1;
              v13 = &curBackEnd->pageArgsToUpload[pageArgUploadCount];
            }
            else
            {
              v13 = NULL;
            }
            v13->xsurfUGBID = v3;
            v13->virtPageID = v9;
          }
          else
          {
            Com_BitSetAssert(this->pageMan.virtPageInUseBits, v9, 151552);
            Com_BitSetAssert(this->pageMan.physPageInUseBits, *v10, 6144);
            Com_BitSetAssert(this->pageMan.physPageLRUBits, *v10, 6144);
          }
          ++v8;
        }
        while ( v8 < this->surfInfo[(unsigned __int16)v3].vpageCount );
      }
    }
  }
  else
  {
    v14 = 0;
    if ( vpageCount )
    {
      do
      {
        v15 = v14 + v4->vpageStart;
        Com_BitClearAssert(this->pageMan.virtPageInUseBits, v14 + v4->vpageStart, 151552);
        physPageID = this->pageMan.virtualPages[v15].physPageID;
        if ( physPageID != 49152 )
          Com_BitClearAssert(this->pageMan.physPageInUseBits, physPageID, 6144);
        ++v14;
      }
      while ( v14 < this->surfInfo[(unsigned __int16)v3].vpageCount );
    }
  }
}

/*
==============
UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::MarkXSurfPagesResident
==============
*/
void UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::MarkXSurfPagesResident(UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData> *this, unsigned int inUGBID)
{
  unsigned __int64 v3; 
  UGBSurfInfo *v4; 
  unsigned int *xsurfResidentBits; 
  unsigned int v6; 
  int vpageCount; 
  unsigned int i; 
  __int64 v9; 
  int *v10; 
  UGBPagingBackendData<52992> *curBackEnd; 
  __int64 pageArgUploadCount; 
  UGBPageArgs *v13; 
  unsigned int j; 
  __int64 v15; 
  int physPageID; 

  v3 = truncate_cast<unsigned short,unsigned int>(inUGBID);
  if ( (unsigned int)v3 >= s_ugbGlob.xsurfCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1166, ASSERT_TYPE_ASSERT, "(ugbID < s_ugbGlob.xsurfCount)", (const char *)&queryFormat, "ugbID < s_ugbGlob.xsurfCount") )
    __debugbreak();
  v4 = &this->surfInfo[(unsigned __int16)v3];
  if ( !s_ugbGlob.xsurfaces[(unsigned __int16)v3] )
    R_UGB_ClearXSurfResidencyBitsSafe(v3);
  xsurfResidentBits = s_ugbGlob.xsurfResidentBits;
  if ( !s_ugbGlob.xsurfResidentBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", LODWORD(s_ugbGlob.xsurfResidentBits) + 12, (AssertType)(LODWORD(s_ugbGlob.xsurfResidentBits) + 1), "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v6 = xsurfResidentBits[v3 >> 5];
  if ( _bittest((const int *)&v6, v3 & 0x1F) )
  {
    vpageCount = this->surfInfo[(unsigned __int16)v3].vpageCount;
    if ( vpageCount + this->curBackEnd->pageArgUploadCount > 0xCF00 )
    {
      this->failedPhysPageAllocations += vpageCount;
      R_UGB_ClearXSurfResidencyBitsSafe(v3);
    }
    else
    {
      for ( i = 0; i < this->surfInfo[(unsigned __int16)v3].vpageCount; ++i )
      {
        v9 = i + v4->vpageStart;
        v10 = (int *)&this->pageMan.virtualPages[v9];
        if ( *v10 == 52992 )
        {
          curBackEnd = this->curBackEnd;
          pageArgUploadCount = curBackEnd->pageArgUploadCount;
          if ( (unsigned int)pageArgUploadCount < 0xCF00 )
          {
            curBackEnd->pageArgUploadCount = pageArgUploadCount + 1;
            v13 = &curBackEnd->pageArgsToUpload[pageArgUploadCount];
          }
          else
          {
            v13 = NULL;
          }
          v13->xsurfUGBID = v3;
          v13->virtPageID = v9;
        }
        else
        {
          Com_BitSetAssert(this->pageMan.virtPageInUseBits, v9, 163840);
          Com_BitSetAssert(this->pageMan.physPageInUseBits, *v10, 6624);
          Com_BitSetAssert(this->pageMan.physPageLRUBits, *v10, 6624);
        }
      }
    }
  }
  else
  {
    for ( j = 0; j < this->surfInfo[(unsigned __int16)v3].vpageCount; ++j )
    {
      v15 = j + v4->vpageStart;
      Com_BitClearAssert(this->pageMan.virtPageInUseBits, j + v4->vpageStart, 163840);
      physPageID = this->pageMan.virtualPages[v15].physPageID;
      if ( physPageID != 52992 )
        Com_BitClearAssert(this->pageMan.physPageInUseBits, physPageID, 6624);
    }
  }
}

/*
==============
RB_UGB_FixupSModelSurfUGBData
==============
*/
void RB_UGB_FixupSModelSurfUGBData(ComputeCmdBufState *state, unsigned int smpFrame)
{
  __int64 v2; 
  __int64 surfaceCount; 
  unsigned int v5; 
  __int64 v6; 
  char *v7; 
  char *v8; 
  __int64 v9; 
  unsigned __int16 *smodelSurfIndirection; 
  int v11; 
  ComputeContextType computeContextType; 
  const GfxShaderBufferView *data[2]; 

  v2 = smpFrame;
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2538, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  surfaceCount = rgp.world->smodels.surfaceCount;
  if ( (_DWORD)surfaceCount )
  {
    v5 = UGBWCRing::Allocate(&s_wcMemGlob.stagingRing, state, 4 * surfaceCount);
    v6 = v5;
    LODWORD(data[0]) = v5;
    HIDWORD(data[0]) = (unsigned int)(4 * surfaceCount) >> 2;
    R_UploadAndSetComputeConstants(state, 0, data, 0x10u, NULL);
    v7 = (char *)R_BeginWrappedBufferDataWrite(&s_wcMemGlob.stagingRingBuffer);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2403, ASSERT_TYPE_ASSERT, "(ringBufferPtr)", (const char *)&queryFormat, "ringBufferPtr") )
      __debugbreak();
    v8 = &v7[v6];
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2552, ASSERT_TYPE_ASSERT, "(smodelSurfIndirectionCPUPtr)", (const char *)&queryFormat, "smodelSurfIndirectionCPUPtr") )
      __debugbreak();
    if ( (unsigned int)surfaceCount >= 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2553, ASSERT_TYPE_ASSERT, "(smodelSurfCount < 65536)", (const char *)&queryFormat, "smodelSurfCount < MAX_STATICMODEL_SURFACES") )
      __debugbreak();
    v9 = surfaceCount;
    smodelSurfIndirection = s_ugbBackendGlob[v2].smodelSurfIndirection;
    do
    {
      v11 = *smodelSurfIndirection++;
      *(_DWORD *)v8 = v11;
      v8 += 4;
      --v9;
    }
    while ( v9 );
    R_EndWrappedBufferDataWrite(&s_wcMemGlob.stagingRingBuffer);
    data[0] = &s_wcMemGlob.stagingRingBuffer.view;
    R_SetComputeViews(state, 0, 1, data);
    data[0] = (const GfxShaderBufferView *)&rgp.world->smodels.smodelSurfUGBIndirectionBuffer.rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)data, NULL);
    R_SetComputeShader(state, rgp.ugbCopyStagingData);
    R_Dispatch(state, (((unsigned int)(4 * surfaceCount) >> 2) + 63) >> 6, 1u, 1u);
    computeContextType = state->computeContextType;
    if ( computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    {
      R_ComputeWaitForCompute(state, PIPE_FLUSH_FULL);
    }
    else if ( computeContextType == COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND )
    {
      ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))state->device->m_pFunction[22].AddRef)(state->device, 146800640i64, 0i64, 0xFFFFFFFF00i64);
    }
  }
}

/*
==============
RB_UGB_FixupXSurfUGBData
==============
*/
void RB_UGB_FixupXSurfUGBData(ComputeCmdBufState *state, unsigned int smpFrame)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 
  unsigned int xsurfCount; 
  unsigned int v7; 
  __int64 v8; 
  char *v9; 
  __int64 v10; 
  unsigned __int16 v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v15; 
  _WORD *v16; 
  unsigned int vpageStart; 
  unsigned __int16 v18; 
  char *v19; 
  __int16 v20; 
  GfxShaderBufferView *v21; 
  int resource; 
  __int64 v23; 
  __int64 v24; 
  GfxShaderBufferView *views; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned __int64 v28; 
  char *v29; 
  int data[4]; 

  v2 = smpFrame;
  views = (GfxShaderBufferView *)state;
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2470, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  v4 = 2097184 * v2;
  v5 = v2;
  v28 = 2097184 * v2;
  xsurfCount = s_ugbBackendGlob[v2].xsurfCount;
  v26 = xsurfCount;
  if ( xsurfCount )
  {
    v27 = (24 * xsurfCount) >> 2;
    v7 = UGBWCRing::Allocate(&s_wcMemGlob.stagingRing, state, 24 * xsurfCount);
    v8 = v7;
    data[0] = v7;
    data[1] = v27;
    R_UploadAndSetComputeConstants(state, 0, data, 0x10u, NULL);
    v9 = (char *)R_BeginWrappedBufferDataWrite(&s_wcMemGlob.stagingRingBuffer);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2403, ASSERT_TYPE_ASSERT, "(ringBufferPtr)", (const char *)&queryFormat, "ringBufferPtr") )
      __debugbreak();
    v10 = (__int64)&v9[v8];
    v29 = &v9[v8];
    if ( !&v9[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2484, ASSERT_TYPE_ASSERT, "(xsurfUGBDataCPUPtr)", (const char *)&queryFormat, "xsurfUGBDataCPUPtr") )
      __debugbreak();
    if ( xsurfCount > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2485, ASSERT_TYPE_ASSERT, "(xsurfCount <= ( ( 65536 ) - 1 ))", (const char *)&queryFormat, "xsurfCount <= UGB_MAX_XSURFACES") )
      __debugbreak();
    v11 = 0;
    v12 = 0;
    do
    {
      v13 = *(_DWORD *)((char *)&s_ugbBackendGlob[0].surfTriCount[0x10000] + v4);
      if ( v13 && v11 != 0xFFFF && v12 < v13 && s_ugbBackendGlob[v5].surfTriCount[v11] != 0 )
      {
        v16 = (unsigned __int16 *)((char *)&s_ugbBackendGlob[0].surfOptBufInfo[v11].vpageOffsets.secondUVOffset + v4);
        if ( v12 >= v13 )
        {
          LODWORD(v24) = *(_DWORD *)((char *)&s_ugbBackendGlob[0].surfTriCount[0x10000] + v4);
          LODWORD(v23) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1858, ASSERT_TYPE_ASSERT, "(unsigned)( ugbID ) < (unsigned)( s_ugbBackendGlob[smpFrame].xsurfCount )", "ugbID doesn't index s_ugbBackendGlob[smpFrame].xsurfCount\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        vpageStart = s_uobBuf.backend[v5].surfInfo[v11].vpageStart;
        v18 = s_ugbBackendGlob[v5].surfTriCount[v11];
        if ( v12 >= s_ugbBackendGlob[v28 / 0x200020].xsurfCount )
        {
          LODWORD(v24) = s_ugbBackendGlob[v28 / 0x200020].xsurfCount;
          LODWORD(v23) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1573, ASSERT_TYPE_ASSERT, "(unsigned)( ugbID ) < (unsigned)( s_ugbBackendGlob[smpFrame].xsurfCount )", "ugbID doesn't index s_ugbBackendGlob[smpFrame].xsurfCount\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        v19 = &v29[24 * v11];
        *(_DWORD *)v19 = s_uvbBuf.backend[v5].surfInfo[v11].vpageStart;
        if ( v12 >= s_ugbBackendGlob[v28 / 0x200020].xsurfCount )
        {
          LODWORD(v24) = s_ugbBackendGlob[v28 / 0x200020].xsurfCount;
          LODWORD(v23) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2046, ASSERT_TYPE_ASSERT, "(unsigned)( ugbID ) < (unsigned)( s_ugbBackendGlob[smpFrame].xsurfCount )", "ugbID doesn't index s_ugbBackendGlob[smpFrame].xsurfCount\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        *((_DWORD *)v19 + 1) = s_uibBuf.backend[v5].surfInfo[v11].vpageStart;
        *((_DWORD *)v19 + 2) = vpageStart;
        *((_WORD *)v19 + 6) = *v16;
        *((_WORD *)v19 + 7) = v16[1];
        *((_WORD *)v19 + 8) = v16[3];
        v20 = v16[4];
        v10 = (__int64)v29;
        *((_WORD *)v19 + 10) = v18;
        v4 = v28;
        *((_WORD *)v19 + 9) = v20;
        *((_WORD *)v19 + 11) = 0;
        xsurfCount = v26;
      }
      else
      {
        v15 = 3i64 * v11;
        *(_QWORD *)(v10 + 8 * v15) = 0i64;
        *(_QWORD *)(v10 + 8 * v15 + 8) = 0i64;
        *(_QWORD *)(v10 + 8 * v15 + 16) = 0i64;
      }
      v12 = ++v11;
    }
    while ( v11 < xsurfCount );
    v21 = views;
    R_EndWrappedBufferDataWrite(&s_wcMemGlob.stagingRingBuffer);
    views = &s_wcMemGlob.stagingRingBuffer.view;
    R_SetComputeViews((ComputeCmdBufState *)v21, 0, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferView *)&gfxBuf.xsurfUGBDataBuffer.rwView;
    R_SetComputeRWViewsWithCounters((ComputeCmdBufState *)v21, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    R_SetComputeShader((ComputeCmdBufState *)v21, rgp.ugbCopyStagingData);
    R_Dispatch((ComputeCmdBufState *)v21, (v27 + 63) >> 6, 1u, 1u);
    resource = (int)v21[157].resource;
    if ( resource == 3 )
    {
      R_ComputeWaitForCompute((ComputeCmdBufState *)v21, PIPE_FLUSH_FULL);
    }
    else if ( !resource )
    {
      ((void (__fastcall *)(ID3D12Resource *, __int64, _QWORD, __int64))v21[85].resource->m_pFunction[22].AddRef)(v21[85].resource, 146800640i64, 0i64, 0xFFFFFFFF00i64);
    }
  }
}

/*
==============
RB_UGB_FlushCaches
==============
*/
void RB_UGB_FlushCaches(ComputeCmdBufState *state)
{
  ComputeContextType computeContextType; 

  computeContextType = state->computeContextType;
  if ( computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
  {
    R_ComputeWaitForCompute(state, PIPE_FLUSH_FULL);
  }
  else if ( computeContextType == COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND )
  {
    ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))state->device->m_pFunction[22].AddRef)(state->device, 146800640i64, 0i64, 0xFFFFFFFF00i64);
  }
}

/*
==============
RB_UGB_UploadPages
==============
*/
void RB_UGB_UploadPages(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  ComputeCmdBufState state; 

  Sys_ProfBeginNamedEvent(0xFFFFA500, "RB_UGB_UploadPages");
  R_LockGfxImmediateContext();
  _XMM0 = *gfxContext;
  __asm { vpextrq rdx, xmm0, 1; refGfxState }
  R_InitGfxComputeCmdBufState(&state, _RDX);
  R_UGB_UploadPagesCompute(&state, data);
  R_ShutdownGfxComputeCmdBufState(&state);
  R_UnlockGfxImmediateContext();
  Sys_ProfEndNamedEvent();
}

/*
==============
RB_UIB_GetSurfVirtPageStart
==============
*/
__int64 RB_UIB_GetSurfVirtPageStart(unsigned __int16 ugbID, unsigned int smpFrame)
{
  __int64 v2; 
  unsigned int xsurfCount; 
  int v6; 
  unsigned int v7; 

  v2 = smpFrame;
  xsurfCount = s_ugbBackendGlob[smpFrame].xsurfCount;
  if ( ugbID >= xsurfCount )
  {
    v7 = xsurfCount;
    v6 = ugbID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2046, ASSERT_TYPE_ASSERT, "(unsigned)( ugbID ) < (unsigned)( s_ugbBackendGlob[smpFrame].xsurfCount )", "ugbID doesn't index s_ugbBackendGlob[smpFrame].xsurfCount\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return s_uibBuf.backend[v2].surfInfo[ugbID].vpageStart;
}

/*
==============
RB_UIB_UploadPageArg
==============
*/
void RB_UIB_UploadPageArg(unsigned int smpFrame, const UGBPageArgs *pageArg, unsigned int passArgIndex)
{
  __int64 v3; 
  __int64 xsurfUGBID; 
  UGBSurfInfo *v7; 
  signed int v8; 
  const XSurface *v9; 
  signed int v10; 
  int v11; 
  XSurfaceShared *shared; 
  unsigned int sharedIndexDataOffset; 
  unsigned __int8 *v14; 
  unsigned __int8 *data; 
  unsigned __int8 *v16; 
  __int64 v17; 
  unsigned int sharedTriClusterDataOffset; 
  unsigned __int8 *v19; 
  unsigned __int8 *v20; 
  UIBPageArgsGPU *pageArgsGPU; 
  double v22; 
  __int64 v23; 
  __int64 v24; 
  signed int v25; 

  v3 = smpFrame;
  xsurfUGBID = pageArg->xsurfUGBID;
  v7 = &s_uibBuf.backend[v3].surfInfo[xsurfUGBID];
  v8 = pageArg->virtPageID - v7->vpageStart;
  v25 = v8;
  v9 = s_ugbBackendGlob[v3].xsurfaces[xsurfUGBID];
  if ( (v8 < 0 || v8 >= v7->vpageCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1991, ASSERT_TYPE_ASSERT, "(localPageIndex >= 0 && localPageIndex < surfInfo.vpageCount)", (const char *)&queryFormat, "localPageIndex >= 0 && localPageIndex < surfInfo.vpageCount") )
    __debugbreak();
  if ( !s_uibBuf.pageArgsGPU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1992, ASSERT_TYPE_ASSERT, "(s_uibBuf.pageArgsGPU)", (const char *)&queryFormat, "s_uibBuf.pageArgsGPU") )
    __debugbreak();
  if ( !s_uibBuf.stagingBufferGPU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1993, ASSERT_TYPE_ASSERT, "(s_uibBuf.stagingBufferGPU)", (const char *)&queryFormat, "s_uibBuf.stagingBufferGPU") )
    __debugbreak();
  if ( v9->ugbID != pageArg->xsurfUGBID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1994, ASSERT_TYPE_ASSERT, "(xsurf->ugbID == pageArg.xsurfUGBID)", (const char *)&queryFormat, "xsurf->ugbID == pageArg.xsurfUGBID") )
    __debugbreak();
  v10 = v8 << 6;
  v11 = v9->triCount - (v8 << 6);
  if ( v11 > 64 )
    v11 = 64;
  if ( (unsigned int)(v11 - 1) > 0x3F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1999, ASSERT_TYPE_ASSERT, "(pageTriCount > 0 && pageTriCount <= ( 64 ))", (const char *)&queryFormat, "pageTriCount > 0 && pageTriCount <= UIB_PAGE_SIZE") )
    __debugbreak();
  shared = v9->shared;
  sharedIndexDataOffset = v9->sharedIndexDataOffset;
  v14 = &s_uibBuf.stagingBufferGPU[384 * passArgIndex];
  if ( sharedIndexDataOffset >= shared->dataSize )
  {
    LODWORD(v23) = v9->sharedIndexDataOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( surface->sharedIndexDataOffset ) < (unsigned)( surface->shared->dataSize )", "surface->sharedIndexDataOffset doesn't index surface->shared->dataSize\n\t%i not in [0, %i)", v23, shared->dataSize) )
      __debugbreak();
  }
  if ( (shared->flags & 1) != 0 )
    data = Stream_AddressSpace_ResolveHandle(&shared->data.streamedDataHandle);
  else
    data = (unsigned __int8 *)shared->data.streamedDataHandle.data;
  v16 = &data[sharedIndexDataOffset];
  if ( ((unsigned __int8)v16 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.h", 48, ASSERT_TYPE_ASSERT, "(IsAligned( indices, 16 ))", (const char *)&queryFormat, "IsAligned( indices, 16 )") )
  {
    __debugbreak();
    shared = v9->shared;
  }
  memcpy_0(v14, &v16[6 * v10], 6 * v11);
  if ( v11 < 64 )
    memset_0(&v14[6 * v11], 0, 6 * (64 - v11));
  v17 = passArgIndex;
  s_uibBuf.pageArgsGPU[v17].physPageID = pageArg->physPageID;
  s_uibBuf.pageArgsGPU[v17].virtPageID = pageArg->virtPageID;
  sharedTriClusterDataOffset = v9->sharedTriClusterDataOffset;
  if ( sharedTriClusterDataOffset >= shared->dataSize )
  {
    LODWORD(v24) = shared->dataSize;
    LODWORD(v23) = v9->sharedTriClusterDataOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.h", 168, ASSERT_TYPE_ASSERT, "(unsigned)( surface->sharedTriClusterDataOffset ) < (unsigned)( surface->shared->dataSize )", "surface->sharedTriClusterDataOffset doesn't index surface->shared->dataSize\n\t%i not in [0, %i)", v23, v24) )
    {
      __debugbreak();
      shared = v9->shared;
    }
  }
  if ( (shared->flags & 1) != 0 )
    v19 = Stream_AddressSpace_ResolveHandle(&shared->data.streamedDataHandle);
  else
    v19 = (unsigned __int8 *)shared->data.streamedDataHandle.data;
  v20 = &v19[sharedTriClusterDataOffset];
  pageArgsGPU = s_uibBuf.pageArgsGPU;
  v22 = *(double *)&v20[24 * v25 + 16];
  *(_OWORD *)s_uibBuf.pageArgsGPU[v17].triCluster.bounds.packed = *(_OWORD *)&v20[24 * v25];
  *(double *)&pageArgsGPU[v17].triCluster.t = v22;
}

/*
==============
RB_UIB_UploadPages
==============
*/
void RB_UIB_UploadPages(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  R_ProfBeginNamedEvent(state, "Begin UIB backend");
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_GPU_BeginTimer(GPU_TIMER_UIB_COPY_INDEX_PAGES);
  UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::UploadPages(&s_uibBuf, state, data, rgp.uibCopyIndexPages, rgp.uibClearIndexPages, RB_UIB_UploadPageArg);
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_GPU_EndTimer();
  R_ProfEndNamedEvent(state);
}

/*
==============
RB_UOB_CopyToStaging
==============
*/
void RB_UOB_CopyToStaging(int localPageIndex, unsigned int stagingByteOffset, unsigned int vpageOffset, unsigned int dataSize, const unsigned __int8 *data)
{
  __int64 v5; 
  unsigned int v6; 
  int v7; 
  unsigned __int8 *v8; 

  v5 = stagingByteOffset;
  v6 = (localPageIndex - vpageOffset) << 10;
  v7 = dataSize - v6;
  if ( (int)(dataSize - v6) > 1024 )
    v7 = 1024;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1726, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v8 = &s_uobBuf.stagingBufferGPU[v5];
  memcpy_0(v8, &data[v6], v7);
  if ( v7 < 1024 )
    memset_0(&v8[v7], 0, 1024 - v7);
}

/*
==============
RB_UOB_GetSurfVirtPageStart
==============
*/
__int64 RB_UOB_GetSurfVirtPageStart(unsigned __int16 ugbID, unsigned int smpFrame)
{
  __int64 v2; 
  unsigned int xsurfCount; 
  int v6; 
  unsigned int v7; 

  v2 = smpFrame;
  xsurfCount = s_ugbBackendGlob[smpFrame].xsurfCount;
  if ( ugbID >= xsurfCount )
  {
    v7 = xsurfCount;
    v6 = ugbID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1858, ASSERT_TYPE_ASSERT, "(unsigned)( ugbID ) < (unsigned)( s_ugbBackendGlob[smpFrame].xsurfCount )", "ugbID doesn't index s_ugbBackendGlob[smpFrame].xsurfCount\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return s_uobBuf.backend[v2].surfInfo[ugbID].vpageStart;
}

/*
==============
RB_UOB_UploadPageArg
==============
*/
void RB_UOB_UploadPageArg(unsigned int smpFrame, const UGBPageArgs *pageArg, unsigned int passArgIndex)
{
  __int64 v3; 
  __int64 v4; 
  UGBBackendGlob *v5; 
  __int64 xsurfUGBID; 
  unsigned int v8; 
  __int64 v9; 
  int v10; 
  const XSurface *v11; 
  unsigned __int16 *p_secondUVOffset; 
  int v13; 
  unsigned int sharedSecondUVDataOffset; 
  XSurfaceShared *shared; 
  unsigned int v16; 
  const unsigned __int8 *v17; 
  signed int v18; 
  unsigned int sharedNormalTransformDataOffset; 
  XSurfaceShared *v20; 
  unsigned int v21; 
  const unsigned __int8 *v22; 
  signed int v23; 
  unsigned int sharedColorDataOffset; 
  XSurfaceShared *v25; 
  unsigned int v26; 
  signed int v27; 
  __int64 v28; 
  unsigned int dataSize; 
  unsigned int v30; 
  unsigned int v31; 

  v3 = 90113i64 * smpFrame;
  v4 = passArgIndex;
  v5 = &s_ugbBackendGlob[smpFrame];
  xsurfUGBID = pageArg->xsurfUGBID;
  v8 = passArgIndex << 10;
  v9 = xsurfUGBID + v3;
  v10 = pageArg->virtPageID - s_uobBuf.backend[0].surfInfo[v9].vpageStart;
  v11 = v5->xsurfaces[xsurfUGBID];
  p_secondUVOffset = &v5->surfOptBufInfo[xsurfUGBID].vpageOffsets.secondUVOffset;
  if ( (v10 < 0 || v10 >= s_uobBuf.backend[0].surfInfo[v9].vpageCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1755, ASSERT_TYPE_ASSERT, "(localPageIndex >= 0 && localPageIndex < surfInfo.vpageCount)", (const char *)&queryFormat, "localPageIndex >= 0 && localPageIndex < surfInfo.vpageCount") )
    __debugbreak();
  if ( !s_uobBuf.pageArgsGPU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1756, ASSERT_TYPE_ASSERT, "(s_uobBuf.pageArgsGPU)", (const char *)&queryFormat, "s_uobBuf.pageArgsGPU") )
    __debugbreak();
  if ( !s_uobBuf.stagingBufferGPU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1757, ASSERT_TYPE_ASSERT, "(s_uobBuf.stagingBufferGPU)", (const char *)&queryFormat, "s_uobBuf.stagingBufferGPU") )
    __debugbreak();
  if ( v11->ugbID != pageArg->xsurfUGBID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1758, ASSERT_TYPE_ASSERT, "(xsurf->ugbID == pageArg.xsurfUGBID)", (const char *)&queryFormat, "xsurf->ugbID == pageArg.xsurfUGBID") )
    __debugbreak();
  v13 = p_secondUVOffset[1];
  if ( v10 < v13 )
  {
    sharedSecondUVDataOffset = v11->sharedSecondUVDataOffset;
    if ( sharedSecondUVDataOffset == -1 )
    {
      v17 = NULL;
    }
    else
    {
      shared = v11->shared;
      v16 = v11->sharedSecondUVDataOffset;
      if ( sharedSecondUVDataOffset >= shared->dataSize )
      {
        dataSize = shared->dataSize;
        LODWORD(v28) = v11->sharedSecondUVDataOffset;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.h", 88, ASSERT_TYPE_ASSERT, "(unsigned)( surface->sharedSecondUVDataOffset ) < (unsigned)( surface->shared->dataSize )", "surface->sharedSecondUVDataOffset doesn't index surface->shared->dataSize\n\t%i not in [0, %i)", v28, dataSize) )
          __debugbreak();
      }
      if ( (shared->flags & 1) != 0 )
        v17 = &Stream_AddressSpace_ResolveHandle(&shared->data.streamedDataHandle)[v16];
      else
        v17 = (const unsigned __int8 *)(shared->data.streamedDataHandle.data + v16);
    }
    RB_UOB_CopyToStaging(v10, v8, *p_secondUVOffset, 4 * v11->vertCount, v17);
    goto LABEL_54;
  }
  v18 = p_secondUVOffset[2];
  if ( v10 < v18 )
  {
    sharedNormalTransformDataOffset = v11->sharedNormalTransformDataOffset;
    if ( sharedNormalTransformDataOffset != -1 )
    {
      v20 = v11->shared;
      v21 = v11->sharedNormalTransformDataOffset;
      if ( sharedNormalTransformDataOffset >= v20->dataSize )
      {
        v30 = v20->dataSize;
        LODWORD(v28) = v11->sharedNormalTransformDataOffset;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.h", 107, ASSERT_TYPE_ASSERT, "(unsigned)( surface->sharedNormalTransformDataOffset ) < (unsigned)( surface->shared->dataSize )", "surface->sharedNormalTransformDataOffset doesn't index surface->shared->dataSize\n\t%i not in [0, %i)", v28, v30) )
          __debugbreak();
      }
      if ( (v20->flags & 1) != 0 )
        v22 = &Stream_AddressSpace_ResolveHandle(&v20->data.streamedDataHandle)[v21];
      else
        v22 = (const unsigned __int8 *)(v20->data.streamedDataHandle.data + v21);
      LOWORD(v13) = p_secondUVOffset[1];
      goto LABEL_47;
    }
LABEL_46:
    v22 = NULL;
LABEL_47:
    RB_UOB_CopyToStaging(v10, v8, (unsigned __int16)v13, 4 * v11->vertCount, v22);
    goto LABEL_54;
  }
  v23 = p_secondUVOffset[3];
  if ( v10 < v23 )
  {
    RB_UOB_CopyToStaging(v10, v8, v18, v11->blendVertSize, (const unsigned __int8 *)v11->blendVerts);
    goto LABEL_54;
  }
  v13 = p_secondUVOffset[4];
  if ( v10 < v13 )
  {
    RB_UOB_CopyToStaging(v10, v8, v23, 4 * v11->vertCount, (const unsigned __int8 *)v11->lmapCoords);
    goto LABEL_54;
  }
  if ( v10 < p_secondUVOffset[5] )
  {
    sharedColorDataOffset = v11->sharedColorDataOffset;
    if ( sharedColorDataOffset != -1 )
    {
      v25 = v11->shared;
      v26 = v11->sharedColorDataOffset;
      if ( sharedColorDataOffset >= v25->dataSize )
      {
        v31 = v25->dataSize;
        LODWORD(v28) = v11->sharedColorDataOffset;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.h", 69, ASSERT_TYPE_ASSERT, "(unsigned)( surface->sharedColorDataOffset ) < (unsigned)( surface->shared->dataSize )", "surface->sharedColorDataOffset doesn't index surface->shared->dataSize\n\t%i not in [0, %i)", v28, v31) )
          __debugbreak();
      }
      if ( (v25->flags & 1) != 0 )
        v22 = &Stream_AddressSpace_ResolveHandle(&v25->data.streamedDataHandle)[v26];
      else
        v22 = (const unsigned __int8 *)(v25->data.streamedDataHandle.data + v26);
      LOWORD(v13) = p_secondUVOffset[4];
      goto LABEL_47;
    }
    goto LABEL_46;
  }
  v27 = p_secondUVOffset[8];
  if ( v10 >= v27 )
  {
    if ( v10 >= p_secondUVOffset[9] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1825, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid page index for surf") )
        __debugbreak();
    }
    else
    {
      RB_UOB_CopyToStaging(v10, v8, v27, v11->blendShapesPerVert->perVertBlendShapeDataSize, (const unsigned __int8 *)v11->blendShapesPerVert->perVertBlendShapeData);
    }
  }
  else
  {
    RB_UOB_CopyToStaging(v10, v8, p_secondUVOffset[7], v11->blendShapesRecalcTangentFrameData->bufferSize, (const unsigned __int8 *)v11->blendShapesRecalcTangentFrameData->topologicalData);
  }
LABEL_54:
  s_uobBuf.pageArgsGPU[v4].physPageID = pageArg->physPageID;
  s_uobBuf.pageArgsGPU[v4].virtPageID = pageArg->virtPageID;
}

/*
==============
RB_UOB_UploadPages
==============
*/
void RB_UOB_UploadPages(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  R_ProfBeginNamedEvent(state, "Begin UOB backend");
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_GPU_BeginTimer(GPU_TIMER_UOB_COPY_VERT_PAGES);
  UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::UploadPages(&s_uobBuf, state, data, rgp.uobCopyPages, rgp.uobClearPages, RB_UOB_UploadPageArg);
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_GPU_EndTimer();
  R_ProfEndNamedEvent(state);
}

/*
==============
RB_UVB_GetSurfVirtPageStart
==============
*/
__int64 RB_UVB_GetSurfVirtPageStart(unsigned __int16 ugbID, unsigned int smpFrame)
{
  __int64 v2; 
  unsigned int xsurfCount; 
  int v6; 
  unsigned int v7; 

  v2 = smpFrame;
  xsurfCount = s_ugbBackendGlob[smpFrame].xsurfCount;
  if ( ugbID >= xsurfCount )
  {
    v7 = xsurfCount;
    v6 = ugbID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1573, ASSERT_TYPE_ASSERT, "(unsigned)( ugbID ) < (unsigned)( s_ugbBackendGlob[smpFrame].xsurfCount )", "ugbID doesn't index s_ugbBackendGlob[smpFrame].xsurfCount\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return s_uvbBuf.backend[v2].surfInfo[ugbID].vpageStart;
}

/*
==============
RB_UVB_UploadPageArg
==============
*/
void RB_UVB_UploadPageArg(unsigned int smpFrame, const UGBPageArgs *pageArg, unsigned int passArgIndex)
{
  __int64 v3; 
  __int64 xsurfUGBID; 
  unsigned int virtPageID; 
  UGBSurfInfo *v8; 
  int v9; 
  const XSurface *v10; 
  int v11; 
  int v12; 
  unsigned int v13; 
  XSurfaceShared *shared; 
  unsigned int sharedVertDataOffset; 
  unsigned __int8 *v16; 
  unsigned __int8 *data; 
  __int64 v18; 
  __int64 v19; 
  unsigned int dataSize; 

  v3 = smpFrame;
  xsurfUGBID = pageArg->xsurfUGBID;
  virtPageID = pageArg->virtPageID;
  v8 = &s_uvbBuf.backend[v3].surfInfo[xsurfUGBID];
  v9 = virtPageID - v8->vpageStart;
  v10 = s_ugbBackendGlob[v3].xsurfaces[xsurfUGBID];
  if ( (v9 < 0 || v9 >= v8->vpageCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1519, ASSERT_TYPE_ASSERT, "(localPageIndex >= 0 && localPageIndex < surfInfo.vpageCount)", (const char *)&queryFormat, "localPageIndex >= 0 && localPageIndex < surfInfo.vpageCount") )
    __debugbreak();
  if ( !s_uvbBuf.pageArgsGPU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1520, ASSERT_TYPE_ASSERT, "(s_uvbBuf.pageArgsGPU)", (const char *)&queryFormat, "s_uvbBuf.pageArgsGPU") )
    __debugbreak();
  if ( !s_uvbBuf.stagingBufferGPU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1521, ASSERT_TYPE_ASSERT, "(s_uvbBuf.stagingBufferGPU)", (const char *)&queryFormat, "s_uvbBuf.stagingBufferGPU") )
    __debugbreak();
  if ( v10->ugbID != pageArg->xsurfUGBID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1522, ASSERT_TYPE_ASSERT, "(xsurf->ugbID == pageArg.xsurfUGBID)", (const char *)&queryFormat, "xsurf->ugbID == pageArg.xsurfUGBID") )
    __debugbreak();
  v11 = v9 << 6;
  v12 = v10->vertCount - v11;
  if ( v12 > 64 )
    v12 = 64;
  if ( (unsigned int)(v12 - 1) > 0x3F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1527, ASSERT_TYPE_ASSERT, "(pageVertCount > 0 && pageVertCount <= ( 64 ))", (const char *)&queryFormat, "pageVertCount > 0 && pageVertCount <= UVB_PAGE_SIZE") )
    __debugbreak();
  v13 = 5 * passArgIndex;
  shared = v10->shared;
  sharedVertDataOffset = v10->sharedVertDataOffset;
  v16 = &s_uvbBuf.stagingBufferGPU[256 * v13];
  if ( sharedVertDataOffset >= shared->dataSize )
  {
    dataSize = shared->dataSize;
    LODWORD(v19) = v10->sharedVertDataOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.h", 33, ASSERT_TYPE_ASSERT, "(unsigned)( surface->sharedVertDataOffset ) < (unsigned)( surface->shared->dataSize )", "surface->sharedVertDataOffset doesn't index surface->shared->dataSize\n\t%i not in [0, %i)", v19, dataSize) )
      __debugbreak();
  }
  if ( (shared->flags & 1) != 0 )
    data = Stream_AddressSpace_ResolveHandle(&shared->data.streamedDataHandle);
  else
    data = (unsigned __int8 *)shared->data.streamedDataHandle.data;
  memcpy_0(v16, &data[20 * v11 + sharedVertDataOffset], 20i64 * v12);
  if ( v12 < 64 )
    memset_0(&v16[20 * v12], 0, 20i64 * (64 - v12));
  v18 = passArgIndex;
  s_uvbBuf.pageArgsGPU[v18].physPageID = pageArg->physPageID;
  s_uvbBuf.pageArgsGPU[v18].virtPageID = pageArg->virtPageID;
}

/*
==============
RB_UVB_UploadPages
==============
*/
void RB_UVB_UploadPages(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  R_ProfBeginNamedEvent(state, "Begin UVB backend");
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_GPU_BeginTimer(GPU_TIMER_UVB_COPY_VERT_PAGES);
  UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::UploadPages(&s_uvbBuf, state, data, rgp.uvbCopyVertPages, rgp.uvbClearVertPages, RB_UVB_UploadPageArg);
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_GPU_EndTimer();
  R_ProfEndNamedEvent(state);
}

/*
==============
R_UGB_AllocateUGBIndexForXSurf
==============
*/
bool R_UGB_AllocateUGBIndexForXSurf(XSurface *xsurf)
{
  unsigned int xsurfCount; 
  unsigned __int16 v3; 
  unsigned __int16 v4; 
  unsigned int v5; 
  unsigned int allocedVirtPageCount; 
  char v7; 
  unsigned __int16 v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  char v12; 
  unsigned __int16 v13; 
  bool result; 

  xsurfCount = s_ugbGlob.xsurfCount;
  if ( s_ugbGlob.xsurfCount >= 0xFFFF )
  {
    Sys_Error((const ObfuscateErrorText)&stru_143DB3200);
    xsurfCount = s_ugbGlob.xsurfCount;
  }
  v3 = truncate_cast<unsigned short,unsigned int>(xsurfCount);
  xsurf->ugbID = v3;
  ++s_ugbGlob.xsurfCount;
  v4 = v3;
  v5 = ((unsigned int)xsurf->vertCount + 63) >> 6;
  if ( v5 - 1 > 0x3FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1473, ASSERT_TYPE_ASSERT, "(numPagesToAlloc > 0 && numPagesToAlloc <= ( ( 65535 + ( 64 ) - 1 ) / ( 64 ) ))", (const char *)&queryFormat, "numPagesToAlloc > 0 && numPagesToAlloc <= UVB_XSURF_MAX_PAGES") )
    __debugbreak();
  allocedVirtPageCount = s_uvbBuf.allocedVirtPageCount;
  if ( s_uvbBuf.allocedVirtPageCount + v5 <= 0x140000 && v5 )
  {
    s_uvbBuf.allocedVirtPageCount += v5;
    v7 = 1;
    v8 = truncate_cast<unsigned short,unsigned int>(v5);
  }
  else
  {
    Sys_Error((const ObfuscateErrorText)&stru_143DB3D90, g_unifiedBufferNames[s_uvbBuf.type], 1310720i64, s_uvbBuf.allocedVirtPageCount + v5 - 1310720);
    v7 = 0;
    v8 = 0;
    allocedVirtPageCount = 0;
  }
  v9 = v4;
  s_uvbBuf.surfInfo[v4].vpageCount = v8;
  s_uvbBuf.surfInfo[v4].vpageStart = allocedVirtPageCount;
  if ( !v7 || !R_UOB_AllocateVirtualPages(xsurf, v4) )
    goto LABEL_21;
  v10 = ((unsigned int)xsurf->triCount + 63) >> 6;
  if ( v10 > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1945, ASSERT_TYPE_ASSERT, "(numPagesToAlloc <= ( ( 65536 + ( 64 ) - 1 ) / ( 64 ) ))", (const char *)&queryFormat, "numPagesToAlloc <= UIB_XSURF_MAX_PAGES") )
    __debugbreak();
  v11 = s_uibBuf.allocedVirtPageCount;
  if ( s_uibBuf.allocedVirtPageCount + v10 <= 0x128000 && v10 )
  {
    s_uibBuf.allocedVirtPageCount += v10;
    v12 = 1;
    v13 = truncate_cast<unsigned short,unsigned int>(v10);
  }
  else
  {
    Sys_Error((const ObfuscateErrorText)&stru_143DB3D90, g_unifiedBufferNames[s_uibBuf.type], 1212416i64, s_uibBuf.allocedVirtPageCount + v10 - 1212416);
    v12 = 0;
    v13 = 0;
    v11 = 0;
  }
  s_uibBuf.surfInfo[v9].vpageCount = v13;
  s_uibBuf.surfInfo[v9].vpageStart = v11;
  if ( v12 )
    result = 1;
  else
LABEL_21:
    result = 0;
  if ( result )
    s_ugbGlob.surfTriCount[v9] = xsurf->triCount;
  else
    s_ugbGlob.surfTriCount[v9] = 0;
  return result;
}

/*
==============
R_UGB_ClearXSurfResidencyBitsSafe
==============
*/
void R_UGB_ClearXSurfResidencyBitsSafe(unsigned __int16 ugbID)
{
  int v1; 
  unsigned __int64 v2; 
  int v3; 
  volatile signed __int32 *v4; 

  v1 = 1 << (ugbID & 0x1F);
  v2 = (unsigned __int64)ugbID >> 5;
  v3 = ~v1;
  v4 = (volatile signed __int32 *)&s_ugbGlob.xsurfResidentBits[v2];
  if ( ((unsigned __int8)v4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_ugbGlob.xsurfResidentBits[v2]) )
    __debugbreak();
  _InterlockedAnd(v4, v3);
}

/*
==============
R_UGB_CollectDeferredXSurfs_FastFile
==============
*/
void R_UGB_CollectDeferredXSurfs_FastFile(XAssetHeader header, void *data)
{
  __int64 i; 
  __int64 v5; 

  if ( !header.physicsLibrary )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2869, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2814, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
      __debugbreak();
  }
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2815, ASSERT_TYPE_ASSERT, "(deferredXSurfs)", (const char *)&queryFormat, "deferredXSurfs") )
    __debugbreak();
  if ( (unsigned int)*(unsigned __int16 *)&header.physicsLibrary[2].isMaterialList + *((_DWORD *)data + 163840) <= 0x14000 )
  {
    for ( i = 0i64; (unsigned int)i < *(unsigned __int16 *)&header.physicsLibrary[2].isMaterialList; *((_QWORD *)data + (unsigned int)(*((_DWORD *)data + 163840))++) = *(_QWORD *)&header.physicsLibrary->isMaterialList + v5 )
    {
      v5 = 192 * i;
      i = (unsigned int)(i + 1);
    }
    header.physicsLibrary[2].isMotionPropertiesList = 1;
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_UGB_DEFERRED_XSURF_LIMIT, 81920i64);
  }
}

/*
==============
R_UGB_CollectStats
==============
*/
void R_UGB_CollectStats(void)
{
  unsigned int *xsurfResidentBits; 
  int v1; 
  __int64 v2; 
  int v3; 
  __int64 v4; 
  unsigned int *xsurfDeltaResidencyBits; 
  int xsurfCount; 

  if ( rg.stats && r_gpShowStats->current.integer )
  {
    xsurfResidentBits = s_ugbGlob.xsurfResidentBits;
    v1 = 0;
    v2 = 2048i64;
    v3 = 0;
    v4 = 2048i64;
    do
    {
      v3 += __popcnt(*xsurfResidentBits++);
      --v4;
    }
    while ( v4 );
    xsurfDeltaResidencyBits = s_ugbGlob.xsurfDeltaResidencyBits;
    do
    {
      v1 += __popcnt(*xsurfDeltaResidencyBits++);
      --v2;
    }
    while ( v2 );
    xsurfCount = s_ugbGlob.xsurfCount;
    rg.stats->ugbXSurfResidentCount = v3;
    rg.stats->ugbXSurfDeltaResidencyCount = v1;
    rg.stats->ugbXSurfCount = xsurfCount;
  }
}

/*
==============
R_UGB_DirtySurfData
==============
*/
void R_UGB_DirtySurfData(void)
{
  if ( ((unsigned __int8)&s_ugbGlob.xsurfsDBState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_ugbGlob.xsurfsDBState) )
    __debugbreak();
  _InterlockedOr(&s_ugbGlob.xsurfsDBState, 2u);
}

/*
==============
R_UGB_EnqueueXModelSurfs
==============
*/
char R_UGB_EnqueueXModelSurfs(const XModelSurfs *inXModelSurfs)
{
  char v3; 
  volatile int start; 

  if ( inXModelSurfs->ugbState == XMODEL_SURFS_UGB_STATE_LOADED )
    return 0;
  v3 = 0;
  Sys_WaitInterlockedCompareExchange(&s_xmodelSurfsRingBuffer.enqueueLock, 1, 0);
  if ( ((unsigned __int8)&s_xmodelSurfsRingBuffer & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_xmodelSurfsRingBuffer) )
    __debugbreak();
  start = s_xmodelSurfsRingBuffer.start;
  if ( ((unsigned __int8)&s_xmodelSurfsRingBuffer.end & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_xmodelSurfsRingBuffer.end) )
    __debugbreak();
  if ( (unsigned int)(s_xmodelSurfsRingBuffer.end - start) < 0x2000 )
  {
    s_xmodelSurfsRingBuffer.ringBufferArray[s_xmodelSurfsRingBuffer.end & 0x1FFF] = inXModelSurfs;
    if ( ((unsigned __int64)&s_xmodelSurfsRingBuffer.end & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_xmodelSurfsRingBuffer.end) )
      __debugbreak();
    _InterlockedIncrement(&s_xmodelSurfsRingBuffer.end);
    v3 = 1;
  }
  if ( ((unsigned __int8)&s_xmodelSurfsRingBuffer.enqueueLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_xmodelSurfsRingBuffer.enqueueLock) )
    __debugbreak();
  _InterlockedExchange(&s_xmodelSurfsRingBuffer.enqueueLock, 0);
  if ( !v3 )
  {
    R_WarnOncePerFrame(R_WARN_UGB_XMODELSURF_RING_BUFFER_FULL);
    if ( ((unsigned __int8)&s_ugbGlob.xsurfsDBState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_ugbGlob.xsurfsDBState) )
      __debugbreak();
    _InterlockedOr(&s_ugbGlob.xsurfsDBState, 2u);
  }
  return v3;
}

/*
==============
R_UGB_FixupVirtualPageOffsets
==============
*/
void R_UGB_FixupVirtualPageOffsets(const UGBFixupInput *inputState, unsigned int smpFrame)
{
  __int64 v2; 
  UGB_XSURFS_DB_STATE dbState; 
  bool v5; 
  unsigned int v6; 
  UGBXSurfDirtyRange v7; 
  unsigned int prevXSurfCount; 
  unsigned int xsurfCount; 
  unsigned int v10; 
  unsigned int xsurfStart; 
  unsigned int v12; 
  unsigned int surfaceCount; 
  unsigned __int16 *smodelSurfIndirection; 
  __int64 v15; 
  GfxStaticModelSurface *v16; 
  GfxStaticModel *v17; 
  unsigned __int16 ugbID; 
  __int64 v19; 
  __int64 v20; 
  UGBXSurfDirtyRange v21; 
  UGBXSurfDirtyRange v22; 
  UGBXSurfDirtyRange v23; 

  v2 = smpFrame;
  Sys_ProfBeginNamedEvent(0xFF708090, "UGB Fixup Virtual Page Offsets");
  if ( inputState->dbState == UGB_XSURFS_DB_STATE_CLEAN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2949, ASSERT_TYPE_ASSERT, "(inputState.dbState)", (const char *)&queryFormat, "inputState.dbState") )
    __debugbreak();
  dbState = inputState->dbState;
  v5 = inputState->dbState == UGB_XSURFS_DB_STATE_RESET;
  if ( inputState->dbState == UGB_XSURFS_DB_STATE_RESET )
    R_UGB_InitOrReset(0);
  R_UGB_ProcessNewXModelSurfs(v5);
  if ( s_ugbGlob.xsurfHistory.numXSurfs != s_ugbGlob.xsurfCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2973, ASSERT_TYPE_ASSERT, "(s_ugbGlob.xsurfHistory.numXSurfs == s_ugbGlob.xsurfCount)", (const char *)&queryFormat, "s_ugbGlob.xsurfHistory.numXSurfs == s_ugbGlob.xsurfCount") )
    __debugbreak();
  v6 = 0;
  v7 = 0i64;
  if ( inputState->dbState == UGB_XSURFS_DB_STATE_CLEAN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2771, ASSERT_TYPE_ASSERT, "(inputState.dbState)", (const char *)&queryFormat, "inputState.dbState") )
    __debugbreak();
  if ( inputState->dbState == UGB_XSURFS_DB_STATE_RECHECK )
  {
    if ( s_ugbGlob.xsurfCount < inputState->prevXSurfCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2775, ASSERT_TYPE_ASSERT, "(s_ugbGlob.xsurfCount >= inputState.prevXSurfCount)", (const char *)&queryFormat, "s_ugbGlob.xsurfCount >= inputState.prevXSurfCount") )
      __debugbreak();
    prevXSurfCount = inputState->prevXSurfCount;
    xsurfCount = s_ugbGlob.xsurfCount - prevXSurfCount;
    v21.xsurfStart = prevXSurfCount;
    v21.xsurfCount = s_ugbGlob.xsurfCount - prevXSurfCount;
    v7 = v21;
  }
  else if ( inputState->dbState == UGB_XSURFS_DB_STATE_RESET )
  {
    xsurfCount = s_ugbGlob.xsurfCount;
    prevXSurfCount = 0;
    v7 = (UGBXSurfDirtyRange)__PAIR64__(s_ugbGlob.xsurfCount, 0);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2785, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tInvalid UGB XSurf DB State %d\n", "false", inputState->dbState) )
      __debugbreak();
    xsurfCount = 0;
    prevXSurfCount = 0;
  }
  if ( s_ugbBackendGlob[0].xsurfDirtyRange.xsurfCount )
  {
    v10 = xsurfCount + prevXSurfCount;
    xsurfStart = prevXSurfCount;
    if ( prevXSurfCount > s_ugbBackendGlob[0].xsurfDirtyRange.xsurfStart )
      xsurfStart = s_ugbBackendGlob[0].xsurfDirtyRange.xsurfStart;
    v22.xsurfStart = xsurfStart;
    if ( s_ugbBackendGlob[0].xsurfDirtyRange.xsurfStart + s_ugbBackendGlob[0].xsurfDirtyRange.xsurfCount > v10 )
      v10 = s_ugbBackendGlob[0].xsurfDirtyRange.xsurfStart + s_ugbBackendGlob[0].xsurfDirtyRange.xsurfCount;
    v22.xsurfCount = v10 - xsurfStart;
    s_ugbBackendGlob[0].xsurfDirtyRange = v22;
  }
  else
  {
    s_ugbBackendGlob[0].xsurfDirtyRange = v7;
  }
  if ( s_ugbBackendGlob[1].xsurfDirtyRange.xsurfCount )
  {
    v12 = xsurfCount + prevXSurfCount;
    if ( prevXSurfCount > s_ugbBackendGlob[1].xsurfDirtyRange.xsurfStart )
      prevXSurfCount = s_ugbBackendGlob[1].xsurfDirtyRange.xsurfStart;
    v23.xsurfStart = prevXSurfCount;
    if ( s_ugbBackendGlob[1].xsurfDirtyRange.xsurfStart + s_ugbBackendGlob[1].xsurfDirtyRange.xsurfCount > v12 )
      v12 = s_ugbBackendGlob[1].xsurfDirtyRange.xsurfStart + s_ugbBackendGlob[1].xsurfDirtyRange.xsurfCount;
    v23.xsurfCount = v12 - prevXSurfCount;
    s_ugbBackendGlob[1].xsurfDirtyRange = v23;
  }
  else
  {
    s_ugbBackendGlob[1].xsurfDirtyRange = v7;
  }
  s_ugbBackendGlob[v2].needUpdateXSurfUGBData = 1;
  if ( dbState == UGB_XSURFS_DB_STATE_RESET )
  {
    if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2611, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFF708090, "R_UGB_FixupSModelSurfUGBIndirection");
    surfaceCount = rgp.world->smodels.surfaceCount;
    if ( surfaceCount )
    {
      smodelSurfIndirection = s_ugbGlob.smodelSurfIndirection;
      v15 = 0i64;
      do
      {
        if ( v6 >= rgp.world->smodels.surfaceCount )
        {
          LODWORD(v20) = rgp.world->smodels.surfaceCount;
          LODWORD(v19) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2588, ASSERT_TYPE_ASSERT, "(unsigned)( smodelSurfIndex ) < (unsigned)( smodelSurfCount )", "smodelSurfIndex doesn't index smodelSurfCount\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        v16 = &rgp.world->smodels.surfaces[v15];
        if ( v16->smodelIndex >= rgp.world->smodels.modelCount )
        {
          LODWORD(v20) = rgp.world->smodels.modelCount;
          LODWORD(v19) = v16->smodelIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2593, ASSERT_TYPE_ASSERT, "(unsigned)( smodelSurf->smodelIndex ) < (unsigned)( rgp.world->smodels.modelCount )", "smodelSurf->smodelIndex doesn't index rgp.world->smodels.modelCount\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        v17 = &rgp.world->smodels.models[v16->smodelIndex];
        if ( XModelGetLodInfo(v17->model, v16->lodIndex)->surfs )
          ugbID = XModelGetSurface(v17->model, v16->lodIndex, v16->surfIndex)->ugbID;
        else
          ugbID = -1;
        *smodelSurfIndirection++ = ugbID;
        ++v6;
        ++v15;
      }
      while ( v6 < surfaceCount );
    }
    s_ugbGlob.needUpdateSModelSurfIndirection = 1;
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
R_UGB_FixupXModelSurfsVirtualPageOffsets
==============
*/
void R_UGB_FixupXModelSurfsVirtualPageOffsets(const XModelSurfs *inXModelSurfs)
{
  __int64 i; 
  XSurface *v3; 
  unsigned int hash; 
  unsigned __int16 v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int16 outUGBID; 
  XSurfKey xsurfKey; 

  if ( !inXModelSurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2699, ASSERT_TYPE_ASSERT, "(xmodelSurfs)", (const char *)&queryFormat, "xmodelSurfs") )
    __debugbreak();
  if ( inXModelSurfs->ugbState != XMODEL_SURFS_UGB_STATE_LOADED )
  {
    for ( i = 0i64; (unsigned int)i < inXModelSurfs->numsurfs; i = (unsigned int)(i + 1) )
    {
      outUGBID = -1;
      v3 = &inXModelSurfs->surfs[i];
      hash = v3->hash;
      *(_DWORD *)&xsurfKey.vertCount = *(_DWORD *)&v3->vertCount;
      xsurfKey.hash = hash;
      if ( hash == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 221, ASSERT_TYPE_ASSERT, "(xsurfKey.hash != UGB_INVALID_XSURF_HASH)", (const char *)&queryFormat, "xsurfKey.hash != UGB_INVALID_XSURF_HASH") )
        __debugbreak();
      if ( UGBXSurfHistory::FindXSurfByKey(&s_ugbGlob.xsurfHistory, xsurfKey, &outUGBID) )
      {
        v5 = outUGBID;
        if ( outUGBID == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2676, ASSERT_TYPE_ASSERT, "(ugbID != 0xFFFF)", (const char *)&queryFormat, "ugbID != 0xFFFF") )
          __debugbreak();
        if ( v5 >= s_ugbGlob.xsurfCount )
        {
          LODWORD(v7) = s_ugbGlob.xsurfCount;
          LODWORD(v6) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2677, ASSERT_TYPE_ASSERT, "(unsigned)( ugbID ) < (unsigned)( s_ugbGlob.xsurfCount )", "ugbID doesn't index s_ugbGlob.xsurfCount\n\t%i not in [0, %i)", v6, v7) )
            __debugbreak();
        }
        v3->ugbID = v5;
      }
      else
      {
        R_UGB_AllocateUGBIndexForXSurf(v3);
        UGBXSurfHistory::AddXSurf(&s_ugbGlob.xsurfHistory, v3, &v3->ugbID);
      }
    }
    inXModelSurfs->ugbState = XMODEL_SURFS_UGB_STATE_LOADED;
  }
}

/*
==============
R_UGB_GetBuffersTotalMemSize
==============
*/
unsigned __int64 R_UGB_GetBuffersTotalMemSize()
{
  return s_uvbBuf.virtPageTableBufferMemSize + s_uobBuf.physBufferMemSize + s_uobBuf.virtPageTableBufferMemSize + s_uibBuf.physBufferMemSize + s_uibBuf.virtPageTableBufferMemSize + s_uvbBuf.physBufferMemSize + 5242880;
}

/*
==============
R_UGB_GetPhysicalMemoryUsageRatio
==============
*/
float R_UGB_GetPhysicalMemoryUsageRatio()
{
  _XMM0 = LODWORD(s_uobBuf.usageRatio);
  __asm
  {
    vmaxss  xmm1, xmm0, cs:?s_uvbBuf@@3U?$UGBVirtualBuffer@$0EA@$0MPAA@$0BEAAAA@$0CAA@$0BE@UUGBPageArgsGPU@@UUGBPageData@@@@A.usageRatio; UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData> s_uvbBuf
    vmaxss  xmm0, xmm1, cs:?s_uibBuf@@3U?$UGBVirtualBuffer@$0EA@$0MAAA@$0BCIAAA@$0IAA@$05UUIBPageArgsGPU@@UUIBPageData@@@@A.usageRatio; UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData> s_uibBuf
  }
  return *(float *)&_XMM0;
}

/*
==============
R_UGB_InitBackendData
==============
*/
void R_UGB_InitBackendData(const GfxBackEndData *data)
{
  __int64 smpFrame; 
  __int64 v3; 
  unsigned int xsurfCount; 
  unsigned int v5; 
  unsigned int v6; 

  Sys_ProfBeginNamedEvent(0xFF708090, "R_UGB_InitBackendData");
  smpFrame = data->smpFrame;
  v3 = smpFrame;
  s_uvbBuf.curBackEnd = &s_uvbBuf.backend[smpFrame];
  s_uvbBuf.backend[smpFrame].pageArgUploadCount = 0;
  s_uvbBuf.curBackEnd->backendReady = 0;
  xsurfCount = s_ugbBackendGlob[smpFrame].xsurfDirtyRange.xsurfCount;
  if ( xsurfCount )
    memcpy_0(&s_uvbBuf.curBackEnd->surfInfo[s_ugbBackendGlob[v3].xsurfDirtyRange.xsurfStart], &s_uvbBuf.surfInfo[s_ugbBackendGlob[v3].xsurfDirtyRange.xsurfStart], 8i64 * xsurfCount);
  s_uobBuf.curBackEnd = &s_uobBuf.backend[smpFrame];
  s_uobBuf.backend[smpFrame].pageArgUploadCount = 0;
  s_uobBuf.curBackEnd->backendReady = 0;
  v5 = s_ugbBackendGlob[v3].xsurfDirtyRange.xsurfCount;
  if ( v5 )
    memcpy_0(&s_uobBuf.curBackEnd->surfInfo[s_ugbBackendGlob[v3].xsurfDirtyRange.xsurfStart], &s_uobBuf.surfInfo[s_ugbBackendGlob[v3].xsurfDirtyRange.xsurfStart], 8i64 * v5);
  s_uibBuf.curBackEnd = &s_uibBuf.backend[smpFrame];
  s_uibBuf.backend[smpFrame].pageArgUploadCount = 0;
  s_uibBuf.curBackEnd->backendReady = 0;
  v6 = s_ugbBackendGlob[v3].xsurfDirtyRange.xsurfCount;
  if ( v6 )
  {
    memcpy_0(&s_uibBuf.curBackEnd->surfInfo[s_ugbBackendGlob[v3].xsurfDirtyRange.xsurfStart], &s_uibBuf.surfInfo[s_ugbBackendGlob[v3].xsurfDirtyRange.xsurfStart], 8i64 * v6);
    if ( s_ugbBackendGlob[v3].xsurfDirtyRange.xsurfCount )
    {
      s_ugbBackendGlob[v3].xsurfCount = s_ugbGlob.xsurfCount;
      s_ugbBackendGlob[v3].xsurfDWordCount = s_ugbGlob.xsurfDWordCount;
      memcpy_0((char *)&s_ugbBackendGlob[0].surfOptBufInfo[s_ugbBackendGlob[v3].xsurfDirtyRange.xsurfStart] + v3 * 2097184, &s_ugbGlob.surfOptBufInfo[s_ugbBackendGlob[v3].xsurfDirtyRange.xsurfStart], 20i64 * s_ugbBackendGlob[v3].xsurfDirtyRange.xsurfCount);
      memcpy_0(&s_ugbBackendGlob[smpFrame].surfTriCount[s_ugbBackendGlob[v3].xsurfDirtyRange.xsurfStart], &s_ugbGlob.surfTriCount[s_ugbBackendGlob[v3].xsurfDirtyRange.xsurfStart], 2i64 * s_ugbBackendGlob[v3].xsurfDirtyRange.xsurfCount);
      s_ugbBackendGlob[v3].xsurfDirtyRange = 0i64;
    }
  }
  s_ugbBackendGlob[v3].backendReady = 0;
  Sys_ProfEndNamedEvent();
}

/*
==============
R_UGB_InitBackend_Worker
==============
*/
void R_UGB_InitBackend_Worker(const void *const cmd)
{
  __int64 v1; 
  __int64 v2; 
  const GfxWrappedBuffer *v3; 
  void *v4; 

  v1 = *(unsigned int *)(*(_QWORD *)cmd + 1088720i64);
  v2 = v1;
  memcpy_0(&s_ugbBackendGlob[v1], s_ugbGlob.xsurfaces, 8i64 * s_ugbGlob.xsurfCount);
  if ( s_ugbGlob.needUpdateSModelSurfIndirection )
  {
    memcpy_0(s_ugbBackendGlob[v2].smodelSurfIndirection, s_ugbGlob.smodelSurfIndirection, 2 * rgp.world->smodels.surfaceCount);
    s_ugbBackendGlob[v2].needUpdateSModelSurfIndirection = 1;
    s_ugbGlob.needUpdateSModelSurfIndirection = 0;
  }
  v3 = &gfxBuf.xsurfResidencyBitsBuffer[v1];
  v4 = R_BeginWrappedBufferDataWrite(v3);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 3218, ASSERT_TYPE_ASSERT, "(xsurfResidencyBitsGPUPtr)", (const char *)&queryFormat, "xsurfResidencyBitsGPUPtr") )
    __debugbreak();
  memcpy_0(v4, s_ugbGlob.xsurfResidentBits, 4i64 * s_ugbGlob.xsurfDWordCount);
  R_EndWrappedBufferDataWrite(v3);
  if ( s_ugbBackendGlob[v2].backendReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 3226, ASSERT_TYPE_ASSERT, "(!s_ugbBackendGlob[smpFrame].backendReady)", (const char *)&queryFormat, "!s_ugbBackendGlob[smpFrame].backendReady") )
    __debugbreak();
  s_ugbBackendGlob[v2].backendReady = 1;
}

/*
==============
R_UGB_InitBuffers
==============
*/
void R_UGB_InitBuffers(void)
{
  GfxWrappedBuffer *xsurfResidencyBitsBuffer; 
  __int64 v1; 

  *(_QWORD *)&s_wcMemGlob.stagingRing.bufSize = 5242880i64;
  *(_QWORD *)&s_wcMemGlob.stagingRing.nextCPUWritePos = 0i64;
  s_wcMemGlob.stagingRing.pendingSize = 0;
  *(_QWORD *)&s_wcMemGlob.stagingRing.gpuReadLoopCount = 0i64;
  s_wcMemGlob.stagingRing.gpuReadPosIndex = 0;
  memset_0(s_wcMemGlob.stagingRing.pos, 0, sizeof(s_wcMemGlob.stagingRing.pos));
  s_wcMemGlob.stagingRing.currentContextType = COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND;
  s_wcMemGlob.stagingRing.computeFenceAddr = NULL;
  s_wcMemGlob.stagingRing.computeFenceCounter = 0i64;
  s_wcMemGlob.stagingRing.computeFenceAddr = (volatile unsigned __int64 *)PMem_Alloc(8ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "UGB Compute Fence");
  *s_wcMemGlob.stagingRing.computeFenceAddr = 0i64;
  R_CreateGfxWrappedBuffer(&s_wcMemGlob.stagingRingBuffer, GfxWrappedBuffer_Raw, 1, 0x500000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "UGB Write Combine Ring Buffer");
  s_uvbBuf.virtPageTableBuffer = &gfxBuf.uvbVirtPageTableBuffer;
  s_uvbBuf.type = UNIFIED_VERTEX_BUFFER;
  s_uvbBuf.physBuffer = &gfxBuf.unifiedVertexBuffer;
  s_uvbBuf.physPageDataBuffer = NULL;
  R_CreateGfxWrappedBuffer(&gfxBuf.unifiedVertexBuffer, GfxWrappedBuffer_Raw, 1, s_uvbBuf.physBufferMemSize, GFX_DATA_FORMAT_R32_UINT, 0x109u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, s_unifiedPhysBufferNames[0]);
  R_CreateGfxWrappedBuffer(s_uvbBuf.virtPageTableBuffer, GfxWrappedBuffer_Raw, 1, s_uvbBuf.virtPageTableBufferMemSize, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, s_unifiedPageTableNames[s_uvbBuf.type]);
  if ( s_uvbBuf.physPageDataBuffer )
    R_CreateGfxWrappedBuffer(s_uvbBuf.physPageDataBuffer, GfxWrappedBuffer_Raw, 1, 0xCF00u, GFX_DATA_FORMAT_R32_UINT, 0x109u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, s_unifiedPhysBufferNames[s_uvbBuf.type]);
  s_uobBuf.virtPageTableBuffer = &gfxBuf.uobVirtPageTableBuffer;
  s_uvbBuf.pageArgsGPU = NULL;
  s_uvbBuf.stagingBufferGPU = NULL;
  s_uobBuf.type = UNIFIED_OPTIONAL_BUFFER;
  s_uobBuf.physBuffer = &gfxBuf.unifiedOptBuffer;
  s_uobBuf.physPageDataBuffer = NULL;
  R_CreateGfxWrappedBuffer(&gfxBuf.unifiedOptBuffer, GfxWrappedBuffer_Raw, 1, s_uobBuf.physBufferMemSize, GFX_DATA_FORMAT_R32_UINT, 0x109u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, s_unifiedPhysBufferNames[2]);
  R_CreateGfxWrappedBuffer(s_uobBuf.virtPageTableBuffer, GfxWrappedBuffer_Raw, 1, s_uobBuf.virtPageTableBufferMemSize, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, s_unifiedPageTableNames[s_uobBuf.type]);
  if ( s_uobBuf.physPageDataBuffer )
    R_CreateGfxWrappedBuffer(s_uobBuf.physPageDataBuffer, GfxWrappedBuffer_Raw, 1, 0x4000u, GFX_DATA_FORMAT_R32_UINT, 0x109u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, s_unifiedPhysBufferNames[s_uobBuf.type]);
  s_uibBuf.virtPageTableBuffer = &gfxBuf.uibVirtPageTableBuffer;
  s_uobBuf.pageArgsGPU = NULL;
  s_uibBuf.physPageDataBuffer = &gfxBuf.uibPageDataBuffer;
  s_uobBuf.stagingBufferGPU = NULL;
  s_uibBuf.type = UNIFIED_INDEX_BUFFER;
  s_uibBuf.physBuffer = &gfxBuf.unifiedIndexBuffer;
  R_CreateGfxWrappedBuffer(&gfxBuf.unifiedIndexBuffer, GfxWrappedBuffer_Raw, 1, s_uibBuf.physBufferMemSize, GFX_DATA_FORMAT_R32_UINT, 0x109u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, s_unifiedPhysBufferNames[1]);
  R_CreateGfxWrappedBuffer(s_uibBuf.virtPageTableBuffer, GfxWrappedBuffer_Raw, 1, s_uibBuf.virtPageTableBufferMemSize, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, s_unifiedPageTableNames[s_uibBuf.type]);
  if ( s_uibBuf.physPageDataBuffer )
    R_CreateGfxWrappedBuffer(s_uibBuf.physPageDataBuffer, GfxWrappedBuffer_Raw, 1, 0x120000u, GFX_DATA_FORMAT_R32_UINT, 0x109u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, s_unifiedPhysBufferNames[s_uibBuf.type]);
  s_uibBuf.pageArgsGPU = NULL;
  s_uibBuf.stagingBufferGPU = NULL;
  R_CreateGfxWrappedBuffer(&gfxBuf.xsurfUGBDataBuffer, GfxWrappedBuffer_Raw, 24, 0x10000u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, NULL, "UGB XSurf Data Buffer");
  xsurfResidencyBitsBuffer = gfxBuf.xsurfResidencyBitsBuffer;
  v1 = 2i64;
  do
  {
    R_CreateGfxWrappedBuffer(xsurfResidencyBitsBuffer++, GfxWrappedBuffer_Raw, 4, 0x800u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "UGB XSurf Residency Bit Buffer");
    --v1;
  }
  while ( v1 );
}

/*
==============
R_UGB_InitFrame
==============
*/
void R_UGB_InitFrame(const GfxBackEndData *data)
{
  volatile int start; 
  __int32 v3; 
  unsigned int smpFrame; 
  __int32 v5; 
  UGBFixupInput inputState; 

  Sys_ProfBeginNamedEvent(0xFF708090, "UGB Init Frame");
  if ( ((unsigned __int8)&s_xmodelSurfsRingBuffer & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_xmodelSurfsRingBuffer) )
    __debugbreak();
  start = s_xmodelSurfsRingBuffer.start;
  if ( ((unsigned __int8)&s_xmodelSurfsRingBuffer.end & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_xmodelSurfsRingBuffer.end) )
    __debugbreak();
  if ( start != s_xmodelSurfsRingBuffer.end )
  {
    if ( ((unsigned __int8)&s_ugbGlob.xsurfsDBState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_ugbGlob.xsurfsDBState) )
      __debugbreak();
    _InterlockedOr(&s_ugbGlob.xsurfsDBState, 1u);
  }
  if ( s_ugbGlob.xsurfsDBState )
  {
    if ( ((unsigned __int8)&s_ugbGlob.xsurfsDBState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_ugbGlob.xsurfsDBState) )
      __debugbreak();
    v3 = _InterlockedExchange(&s_ugbGlob.xsurfsDBState, 0);
    if ( (v3 & 2) != 0 )
    {
      inputState.dbState = UGB_XSURFS_DB_STATE_RESET;
    }
    else if ( (v3 & 1) != 0 )
    {
      inputState.dbState = UGB_XSURFS_DB_STATE_RECHECK;
    }
    else
    {
      v5 = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2761, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tInvalid UGB XSurf DB State %d\n", "false", v5) )
        __debugbreak();
    }
    smpFrame = data->smpFrame;
    inputState.prevXSurfCount = s_ugbGlob.xsurfCount;
    R_UGB_FixupVirtualPageOffsets(&inputState, smpFrame);
  }
  s_uvbBuf.failedPhysPageAllocations = 0;
  s_ugbGlob.xsurfDWordCount = ((unsigned __int64)s_ugbGlob.xsurfCount + 31) >> 5;
  s_uobBuf.failedPhysPageAllocations = 0;
  s_uvbBuf.virtPageDWordCount = ((unsigned __int64)s_uvbBuf.allocedVirtPageCount + 31) >> 5;
  s_uibBuf.failedPhysPageAllocations = 0;
  s_uobBuf.virtPageDWordCount = ((unsigned __int64)s_uobBuf.allocedVirtPageCount + 31) >> 5;
  s_uibBuf.virtPageDWordCount = ((unsigned __int64)s_uibBuf.allocedVirtPageCount + 31) >> 5;
  s_ugbGlob.historyIndex ^= 1u;
  s_ugbGlob.xsurfResidentBits = s_ugbGlob.xsurfHistoryResidentBits[(unsigned __int64)s_ugbGlob.historyIndex];
  memset_0(s_ugbGlob.xsurfResidentBits, 0, 0x2000ui64);
  memset_0(s_ugbGlob.xsurfDeltaResidencyBits, 0, 0x82000ui64);
  R_UGB_InitBackendData(data);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_UGB_InitFrameWorker
==============
*/
void R_UGB_InitFrameWorker(const void *const ugbInitData)
{
  R_UGB_InitFrame(*(const GfxBackEndData **)ugbInitData);
}

/*
==============
R_UGB_InitOrReset
==============
*/
void R_UGB_InitOrReset(bool resetXSurfsDBState)
{
  UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData> *v2; 
  __int64 v3; 
  unsigned int *freePhysPages; 
  unsigned int i; 
  unsigned int v6; 
  UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData> *v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int *v10; 
  int v11; 
  UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData> *v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int *v15; 
  int v16; 

  memset_0(s_uvbBuf.pageMan.virtPageInUseBits, 0, sizeof(s_uvbBuf.pageMan.virtPageInUseBits));
  memset_0(s_uvbBuf.pageMan.physPageInUseBits, 0, 0x33C0ui64);
  v2 = &s_uvbBuf;
  v3 = 1310720i64;
  freePhysPages = s_uvbBuf.pageMan.freePhysPages;
  while ( v3 )
  {
    v2->pageMan.virtualPages[0].physPageID = 52992;
    v2 = (UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData> *)((char *)v2 + 4);
    --v3;
  }
  for ( i = 0; i < 0xCF00; ++i )
  {
    *(freePhysPages - 97264) = 1310720;
    v6 = 52991 - i;
    *freePhysPages++ = v6;
  }
  *(_QWORD *)&s_uvbBuf.pageMan.numFreePhysPages = 52992i64;
  *(_QWORD *)&s_uvbBuf.allocedVirtPageCount = 0i64;
  s_uvbBuf.physPageWatermark = 0;
  memset_0(s_uvbBuf.surfInfo, 0, sizeof(s_uvbBuf.surfInfo));
  s_uvbBuf.curBackEnd = NULL;
  memset_0(s_uobBuf.pageMan.virtPageInUseBits, 0, sizeof(s_uobBuf.pageMan.virtPageInUseBits));
  memset_0(s_uobBuf.pageMan.physPageInUseBits, 0, 0x1000ui64);
  v7 = &s_uobBuf;
  v8 = 655360i64;
  v9 = 0;
  while ( v8 )
  {
    v7->pageMan.virtualPages[0].physPageID = 0x4000;
    v7 = (UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData> *)((char *)v7 + 4);
    --v8;
  }
  v10 = s_uobBuf.pageMan.freePhysPages;
  do
  {
    *(v10 - 37888) = 655360;
    v11 = 0x3FFF - v9++;
    *v10++ = v11;
  }
  while ( v9 < 0x4000 );
  *(_QWORD *)&s_uobBuf.pageMan.numFreePhysPages = 0x4000i64;
  *(_QWORD *)&s_uobBuf.allocedVirtPageCount = 0i64;
  s_uobBuf.physPageWatermark = 0;
  memset_0(s_uobBuf.surfInfo, 0, sizeof(s_uobBuf.surfInfo));
  s_uobBuf.curBackEnd = NULL;
  memset_0(s_uibBuf.pageMan.virtPageInUseBits, 0, sizeof(s_uibBuf.pageMan.virtPageInUseBits));
  memset_0(s_uibBuf.pageMan.physPageInUseBits, 0, 0x3000ui64);
  v12 = &s_uibBuf;
  v13 = 1212416i64;
  v14 = 0;
  while ( v13 )
  {
    v12->pageMan.virtualPages[0].physPageID = 49152;
    v12 = (UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData> *)((char *)v12 + 4);
    --v13;
  }
  v15 = s_uibBuf.pageMan.freePhysPages;
  do
  {
    *(v15 - 90112) = 1212416;
    v16 = 49151 - v14++;
    *v15++ = v16;
  }
  while ( v14 < 0xC000 );
  *(_QWORD *)&s_uibBuf.pageMan.numFreePhysPages = 49152i64;
  *(_QWORD *)&s_uibBuf.allocedVirtPageCount = 0i64;
  s_uibBuf.physPageWatermark = 0;
  memset_0(s_uibBuf.surfInfo, 0, sizeof(s_uibBuf.surfInfo));
  s_uibBuf.curBackEnd = NULL;
  memset_0(&s_ugbGlob, 0, sizeof(s_ugbGlob));
  if ( resetXSurfsDBState )
  {
    if ( ((unsigned __int8)&s_ugbGlob.xsurfsDBState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_ugbGlob.xsurfsDBState) )
      __debugbreak();
    _InterlockedExchange(&s_ugbGlob.xsurfsDBState, 2);
  }
  s_ugbGlob.xsurfHistory.numXSurfs = 0;
  memset_0(&s_ugbGlob.xsurfHistory, 255, 0x20000ui64);
  memset_0(s_ugbGlob.xsurfHistory.xsurfKeys, 255, sizeof(s_ugbGlob.xsurfHistory.xsurfKeys));
  memset_0(s_ugbGlob.xsurfHistory.linkTable, 255, 0x80000ui64);
  Sys_WaitInterlockedCompareExchange(&s_xmodelSurfsRingBuffer.enqueueLock, 1, 0);
  Sys_WaitInterlockedCompareExchange(&s_xmodelSurfsRingBuffer.dequeueLock, 1, 0);
  memset_0(s_xmodelSurfsRingBuffer.ringBufferArray, 0, sizeof(s_xmodelSurfsRingBuffer.ringBufferArray));
  if ( ((unsigned __int8)&s_xmodelSurfsRingBuffer & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 150, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_xmodelSurfsRingBuffer) )
    __debugbreak();
  _InterlockedExchange((volatile __int32 *)&s_xmodelSurfsRingBuffer, 0);
  if ( ((unsigned __int8)&s_xmodelSurfsRingBuffer.end & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 150, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_xmodelSurfsRingBuffer.end) )
    __debugbreak();
  _InterlockedExchange(&s_xmodelSurfsRingBuffer.end, 0);
  if ( ((unsigned __int8)&s_xmodelSurfsRingBuffer.dequeueLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_xmodelSurfsRingBuffer.dequeueLock) )
    __debugbreak();
  _InterlockedExchange(&s_xmodelSurfsRingBuffer.dequeueLock, 0);
  if ( ((unsigned __int8)&s_xmodelSurfsRingBuffer.enqueueLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_xmodelSurfsRingBuffer.enqueueLock) )
    __debugbreak();
  _InterlockedExchange(&s_xmodelSurfsRingBuffer.enqueueLock, 0);
  memset_0(s_ugbGlob.smodelSurfIndirection, 255, sizeof(s_ugbGlob.smodelSurfIndirection));
}

/*
==============
R_UGB_InitStagingRingBuffer
==============
*/
void R_UGB_InitStagingRingBuffer(void)
{
  *(_QWORD *)&s_wcMemGlob.stagingRing.bufSize = 5242880i64;
  *(_QWORD *)&s_wcMemGlob.stagingRing.nextCPUWritePos = 0i64;
  s_wcMemGlob.stagingRing.pendingSize = 0;
  *(_QWORD *)&s_wcMemGlob.stagingRing.gpuReadLoopCount = 0i64;
  s_wcMemGlob.stagingRing.gpuReadPosIndex = 0;
  memset_0(s_wcMemGlob.stagingRing.pos, 0, sizeof(s_wcMemGlob.stagingRing.pos));
  s_wcMemGlob.stagingRing.currentContextType = COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND;
  s_wcMemGlob.stagingRing.computeFenceAddr = NULL;
  s_wcMemGlob.stagingRing.computeFenceCounter = 0i64;
  s_wcMemGlob.stagingRing.computeFenceAddr = (volatile unsigned __int64 *)PMem_Alloc(8ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "UGB Compute Fence");
  *s_wcMemGlob.stagingRing.computeFenceAddr = 0i64;
  R_CreateGfxWrappedBuffer(&s_wcMemGlob.stagingRingBuffer, GfxWrappedBuffer_Raw, 1, 0x500000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "UGB Write Combine Ring Buffer");
}

/*
==============
R_UGB_MakeXSurfsResident
==============
*/
void R_UGB_MakeXSurfsResident(const GfxBackEndData *data)
{
  __int64 v1; 
  unsigned int *i; 
  unsigned int *xsurfResidentBits; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  unsigned int *xsurfDeltaResidencyBits; 
  int xsurfCount; 
  int dataa; 
  const GfxBackEndData *v10; 

  v10 = data;
  v1 = 0i64;
  for ( i = s_ugbGlob.xsurfHistoryResidentBits[s_ugbGlob.historyIndex ^ 1i64]; (unsigned int)v1 < s_ugbGlob.xsurfDWordCount; v1 = (unsigned int)(v1 + 4) )
    *(_OWORD *)&s_ugbGlob.xsurfDeltaResidencyBits[v1] = *(_OWORD *)&s_ugbGlob.xsurfResidentBits[v1] ^ *(_OWORD *)&i[v1];
  if ( rg.stats && r_gpShowStats->current.integer )
  {
    xsurfResidentBits = s_ugbGlob.xsurfResidentBits;
    v4 = 2048i64;
    v5 = 2048i64;
    v6 = 0;
    do
    {
      v6 += __popcnt(*xsurfResidentBits++);
      --v5;
    }
    while ( v5 );
    xsurfDeltaResidencyBits = s_ugbGlob.xsurfDeltaResidencyBits;
    do
    {
      LODWORD(v5) = __popcnt(*xsurfDeltaResidencyBits++) + v5;
      --v4;
    }
    while ( v4 );
    xsurfCount = s_ugbGlob.xsurfCount;
    rg.stats->ugbXSurfResidentCount = v6;
    rg.stats->ugbXSurfDeltaResidencyCount = v5;
    rg.stats->ugbXSurfCount = xsurfCount;
  }
  dataa = 0;
  Sys_AddWorkerCmd(WRKCMD_UVB_MAKE_XSURFS_RESIDENT, &dataa);
  Sys_AddWorkerCmd(WRKCMD_UIB_MAKE_XSURFS_RESIDENT, &dataa);
  Sys_AddWorkerCmd(WRKCMD_UOB_MAKE_XSURFS_RESIDENT, &dataa);
  Sys_AddWorkerCmd(WRKCMD_INIT_UGB_BACKEND, &v10);
}

/*
==============
R_UGB_MakeXSurfsResident_Dispatch
==============
*/
void R_UGB_MakeXSurfsResident_Dispatch(const void *const cmd)
{
  __int64 v1; 
  unsigned int *v2; 
  unsigned int *xsurfResidentBits; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  unsigned int *xsurfDeltaResidencyBits; 
  int xsurfCount; 
  int data; 
  __int64 i; 

  v1 = 0i64;
  v2 = s_ugbGlob.xsurfHistoryResidentBits[s_ugbGlob.historyIndex ^ 1i64];
  for ( i = *(_QWORD *)cmd; (unsigned int)v1 < s_ugbGlob.xsurfDWordCount; v1 = (unsigned int)(v1 + 4) )
    *(_OWORD *)&s_ugbGlob.xsurfDeltaResidencyBits[v1] = *(_OWORD *)&s_ugbGlob.xsurfResidentBits[v1] ^ *(_OWORD *)&v2[v1];
  if ( rg.stats && r_gpShowStats->current.integer )
  {
    xsurfResidentBits = s_ugbGlob.xsurfResidentBits;
    v4 = 2048i64;
    v5 = 2048i64;
    v6 = 0;
    do
    {
      v6 += __popcnt(*xsurfResidentBits++);
      --v5;
    }
    while ( v5 );
    xsurfDeltaResidencyBits = s_ugbGlob.xsurfDeltaResidencyBits;
    do
    {
      LODWORD(v5) = __popcnt(*xsurfDeltaResidencyBits++) + v5;
      --v4;
    }
    while ( v4 );
    xsurfCount = s_ugbGlob.xsurfCount;
    rg.stats->ugbXSurfResidentCount = v6;
    rg.stats->ugbXSurfDeltaResidencyCount = v5;
    rg.stats->ugbXSurfCount = xsurfCount;
  }
  data = 0;
  Sys_AddWorkerCmd(WRKCMD_UVB_MAKE_XSURFS_RESIDENT, &data);
  Sys_AddWorkerCmd(WRKCMD_UIB_MAKE_XSURFS_RESIDENT, &data);
  Sys_AddWorkerCmd(WRKCMD_UOB_MAKE_XSURFS_RESIDENT, &data);
  Sys_AddWorkerCmd(WRKCMD_INIT_UGB_BACKEND, &i);
}

/*
==============
R_UGB_ProcessNewXModelSurfs
==============
*/
void R_UGB_ProcessNewXModelSurfs(bool needReset)
{
  volatile int start; 
  const char *v2; 
  volatile int v3; 
  __int64 v4; 
  const char *v5; 
  unsigned int v6; 
  XSurface *v7; 
  unsigned int hash; 
  __int64 v9; 
  unsigned int ugbID; 
  XSurface *v11; 
  XSurface *inData[81920]; 
  __int64 _Ideal; 
  XSurfaceHashComparer v14; 

  if ( needReset )
  {
    v4 = 0i64;
    LODWORD(_Ideal) = 0;
    Sys_ProfBeginNamedEvent(0xFF708090, "UGB Fixup DB Enumeration");
    DB_EnumXAssets(ASSET_TYPE_XMODEL_SURFS, R_UGB_CollectDeferredXSurfs_FastFile, inData, 1);
    Sys_ProfEndNamedEvent();
    v5 = j_va("UGB Deferred Fixup Reset: %d xsurfs", (unsigned int)_Ideal);
    Sys_ProfBeginNamedEvent(0xFF708090, v5);
    if ( !(_DWORD)_Ideal )
      goto LABEL_32;
    std::_Sort_unchecked<XSurface * *,XSurfaceHashComparer>(inData, &inData[(unsigned int)_Ideal], (unsigned int)_Ideal, v14);
    v6 = _Ideal;
    if ( !(_DWORD)_Ideal )
      goto LABEL_32;
    while ( 1 )
    {
      v7 = inData[v4];
      if ( (_DWORD)v4 == v6 - 1 || (hash = v7->hash, v9 = (unsigned int)(v4 + 1), hash != inData[v9]->hash) )
      {
        R_UGB_AllocateUGBIndexForXSurf(inData[v4]);
        UGBXSurfHistory::AddXSurf(&s_ugbGlob.xsurfHistory, v7, &v7->ugbID);
      }
      else
      {
        R_UGB_AllocateUGBIndexForXSurf(inData[v4]);
        UGBXSurfHistory::AddXSurf(&s_ugbGlob.xsurfHistory, v7, &v7->ugbID);
        ugbID = inData[v4]->ugbID;
        if ( ugbID >= s_ugbGlob.xsurfCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2732, ASSERT_TYPE_ASSERT, "(currentUGBID < s_ugbGlob.xsurfCount)", (const char *)&queryFormat, "currentUGBID < s_ugbGlob.xsurfCount") )
          __debugbreak();
        if ( inData[v9]->hash == hash )
        {
          do
          {
            v11 = inData[v9];
            LODWORD(v4) = v4 + 1;
            v9 = (unsigned int)(v9 + 1);
            v11->ugbID = ugbID;
            v6 = _Ideal;
          }
          while ( (_DWORD)v4 != (_DWORD)_Ideal - 1 && inData[v9]->hash == hash );
          goto LABEL_31;
        }
      }
      v6 = _Ideal;
LABEL_31:
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v6 )
        goto LABEL_32;
    }
  }
  if ( ((unsigned __int8)&s_xmodelSurfsRingBuffer & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_xmodelSurfsRingBuffer) )
    __debugbreak();
  start = s_xmodelSurfsRingBuffer.start;
  if ( ((unsigned __int8)&s_xmodelSurfsRingBuffer.end & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_xmodelSurfsRingBuffer.end) )
    __debugbreak();
  v2 = j_va("UGB Deferred Fixup Recheck: %d xmodelsurfs", (unsigned int)(s_xmodelSurfsRingBuffer.end - start));
  Sys_ProfBeginNamedEvent(0xFF708090, v2);
  if ( ((unsigned __int64)&s_xmodelSurfsRingBuffer & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_xmodelSurfsRingBuffer) )
    __debugbreak();
  v3 = s_xmodelSurfsRingBuffer.start;
  if ( ((unsigned __int64)&s_xmodelSurfsRingBuffer.end & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_xmodelSurfsRingBuffer.end) )
    __debugbreak();
  if ( v3 == s_xmodelSurfsRingBuffer.end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2936, ASSERT_TYPE_ASSERT, "(!s_xmodelSurfsRingBuffer.IsEmpty())", (const char *)&queryFormat, "!s_xmodelSurfsRingBuffer.IsEmpty()") )
    __debugbreak();
  XModelSurfsRingBuffer::DequeueAll(&s_xmodelSurfsRingBuffer, R_UGB_FixupXModelSurfsVirtualPageOffsets);
LABEL_32:
  Sys_ProfEndNamedEvent();
}

/*
==============
R_UGB_RecheckSurfData
==============
*/
void R_UGB_RecheckSurfData(void)
{
  if ( ((unsigned __int8)&s_ugbGlob.xsurfsDBState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_ugbGlob.xsurfsDBState) )
    __debugbreak();
  _InterlockedOr(&s_ugbGlob.xsurfsDBState, 1u);
}

/*
==============
R_UGB_ShutDownBuffers
==============
*/
void R_UGB_ShutDownBuffers(void)
{
  GfxWrappedBuffer *xsurfResidencyBitsBuffer; 
  __int64 v1; 

  R_ShutdownGfxWrappedBuffer(&s_wcMemGlob.stagingRingBuffer);
  R_ShutdownGfxWrappedBuffer(s_uvbBuf.physBuffer);
  R_ShutdownGfxWrappedBuffer(s_uvbBuf.virtPageTableBuffer);
  if ( s_uvbBuf.physPageDataBuffer )
    R_ShutdownGfxWrappedBuffer(s_uvbBuf.physPageDataBuffer);
  R_ShutdownGfxWrappedBuffer(s_uobBuf.physBuffer);
  R_ShutdownGfxWrappedBuffer(s_uobBuf.virtPageTableBuffer);
  if ( s_uobBuf.physPageDataBuffer )
    R_ShutdownGfxWrappedBuffer(s_uobBuf.physPageDataBuffer);
  R_ShutdownGfxWrappedBuffer(s_uibBuf.physBuffer);
  R_ShutdownGfxWrappedBuffer(s_uibBuf.virtPageTableBuffer);
  if ( s_uibBuf.physPageDataBuffer )
    R_ShutdownGfxWrappedBuffer(s_uibBuf.physPageDataBuffer);
  R_ShutdownGfxWrappedBuffer(&gfxBuf.xsurfUGBDataBuffer);
  xsurfResidencyBitsBuffer = gfxBuf.xsurfResidencyBitsBuffer;
  v1 = 2i64;
  do
  {
    R_ShutdownGfxWrappedBuffer(xsurfResidencyBitsBuffer++);
    --v1;
  }
  while ( v1 );
}

/*
==============
R_UGB_ShutDownStagingRingBuffer
==============
*/
void R_UGB_ShutDownStagingRingBuffer(void)
{
  R_ShutdownGfxWrappedBuffer(&s_wcMemGlob.stagingRingBuffer);
}

/*
==============
R_UGB_UpdateXSurfDataFromSModelSurf
==============
*/
bool R_UGB_UpdateXSurfDataFromSModelSurf(const unsigned int smodelSurfIndex, const GfxStaticModelSurface *smodelSurf, unsigned int *localResidentBits)
{
  __int64 v3; 
  XSurface *Surface; 
  unsigned __int64 ugbID; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  bool result; 
  __int64 v11; 

  v3 = smodelSurfIndex;
  if ( !localResidentBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 3163, ASSERT_TYPE_ASSERT, "(localResidentBits)", (const char *)&queryFormat, "localResidentBits") )
    __debugbreak();
  Surface = XModelGetSurface(rgp.world->smodels.models[smodelSurf->smodelIndex].model, smodelSurf->lodIndex, smodelSurf->surfIndex);
  if ( !R_UGB_UpdateXSurfPointer(Surface) )
    return 0;
  ugbID = Surface->ugbID;
  if ( !localResidentBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  localResidentBits[ugbID >> 5] |= 1 << (ugbID & 0x1F);
  v8 = Surface->ugbID;
  if ( (unsigned int)v3 >= rgp.world->smodels.surfaceCount )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 3142, ASSERT_TYPE_ASSERT, "(unsigned)( smodelSurfIndex ) < (unsigned)( rgp.world->smodels.surfaceCount )", "smodelSurfIndex doesn't index rgp.world->smodels.surfaceCount\n\t%i not in [0, %i)", v11, rgp.world->smodels.surfaceCount) )
      __debugbreak();
  }
  if ( !s_ugbGlob.xsurfCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 3143, ASSERT_TYPE_ASSERT, "(s_ugbGlob.xsurfCount)", (const char *)&queryFormat, "s_ugbGlob.xsurfCount") )
    __debugbreak();
  v9 = s_ugbGlob.smodelSurfIndirection[v3];
  if ( v9 == 0xFFFF )
  {
    if ( v8 != 0xFFFF && v8 >= s_ugbGlob.xsurfCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2424, ASSERT_TYPE_ASSERT, "(ugbID == ( ( 65536 ) - 1 ) || ugbID < s_ugbGlob.xsurfCount)", (const char *)&queryFormat, "ugbID == UGB_INVALID_UGB_ID || ugbID < s_ugbGlob.xsurfCount") )
      __debugbreak();
    s_ugbGlob.smodelSurfIndirection[v3] = v8;
    result = 1;
    s_ugbGlob.needUpdateSModelSurfIndirection = 1;
  }
  else
  {
    if ( v9 != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 3156, ASSERT_TYPE_ASSERT, "(smodelUGBID == ugbID)", (const char *)&queryFormat, "smodelUGBID == ugbID") )
      __debugbreak();
    return 1;
  }
  return result;
}

/*
==============
R_UGB_UpdateXSurfDataFromXSurf
==============
*/
char R_UGB_UpdateXSurfDataFromXSurf(const XSurface *const xsurf)
{
  unsigned __int64 ugbID; 
  unsigned int *xsurfResidentBits; 
  unsigned int v4; 
  volatile signed __int32 *v5; 
  int v7; 
  unsigned int v8; 

  if ( !R_UGB_UpdateXSurfPointer(xsurf) )
    return 0;
  ugbID = xsurf->ugbID;
  xsurfResidentBits = s_ugbGlob.xsurfResidentBits;
  if ( (unsigned int)ugbID >= 32 * s_ugbGlob.xsurfDWordCount )
  {
    v8 = 32 * s_ugbGlob.xsurfDWordCount;
    v7 = ugbID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 553, ASSERT_TYPE_ASSERT, "(unsigned)( bitIndex ) < (unsigned)( dwordCount * 32 )", "bitIndex doesn't index dwordCount * 32\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v4 = 1 << (ugbID & 0x1F);
  v5 = (volatile signed __int32 *)&xsurfResidentBits[ugbID >> 5];
  if ( ((unsigned __int8)v5 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v5) )
    __debugbreak();
  _InterlockedOr(v5, v4);
  return 1;
}

/*
==============
R_UGB_UpdateXSurfPointer
==============
*/
bool R_UGB_UpdateXSurfPointer(const XSurface *const xsurf)
{
  unsigned __int16 ugbID; 
  XSurfKey v3; 
  bool v4; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  bool result; 
  __int64 v8; 

  if ( !xsurf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 3106, ASSERT_TYPE_ASSERT, "(xsurf)", (const char *)&queryFormat, "xsurf") )
    __debugbreak();
  ugbID = xsurf->ugbID;
  if ( (ugbID == 0xFFFF || ugbID >= s_ugbGlob.xsurfCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2453, ASSERT_TYPE_ASSERT, "(R_UGB_IsXSurfUgbIDValid( xsurf->ugbID ))", (const char *)&queryFormat, "R_UGB_IsXSurfUgbIDValid( xsurf->ugbID )") )
    __debugbreak();
  LODWORD(v8) = xsurf->hash;
  WORD2(v8) = xsurf->vertCount;
  v3.packed = (unsigned __int64)s_ugbGlob.xsurfHistory.xsurfKeys[xsurf->ugbID];
  HIWORD(v8) = xsurf->triCount;
  v4 = v3.packed == v8;
  if ( v3.packed != v8 )
    R_WarnOncePerFrame(R_WARN_UGB_XSURF_HASH_COLLISION);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 3107, ASSERT_TYPE_ASSERT, "(R_UGB_VerifyXSurfKey( xsurf ))", (const char *)&queryFormat, "R_UGB_VerifyXSurfKey( xsurf )") )
    __debugbreak();
  v5 = xsurf->ugbID;
  if ( v5 != 0xFFFF && v5 >= s_ugbGlob.xsurfCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 2424, ASSERT_TYPE_ASSERT, "(ugbID == ( ( 65536 ) - 1 ) || ugbID < s_ugbGlob.xsurfCount)", (const char *)&queryFormat, "ugbID == UGB_INVALID_UGB_ID || ugbID < s_ugbGlob.xsurfCount") )
    __debugbreak();
  v6 = xsurf->ugbID;
  if ( v6 == 0xFFFF || v6 >= s_ugbGlob.xsurfCount )
    return 0;
  result = 1;
  s_ugbGlob.xsurfaces[v6] = xsurf;
  return result;
}

/*
==============
R_UGB_UpdateXSurfsResidency
==============
*/
void R_UGB_UpdateXSurfsResidency(unsigned int *localResidentBits)
{
  unsigned int xsurfDWordCount; 
  __int64 i; 
  unsigned int v4; 
  volatile signed __int32 *v5; 

  xsurfDWordCount = s_ugbGlob.xsurfDWordCount;
  for ( i = 0i64; (unsigned int)i < xsurfDWordCount; ++localResidentBits )
  {
    v4 = *localResidentBits;
    if ( *localResidentBits )
    {
      v5 = (volatile signed __int32 *)&s_ugbGlob.xsurfResidentBits[i];
      if ( ((unsigned __int8)v5 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_ugbGlob.xsurfResidentBits[i]) )
        __debugbreak();
      _InterlockedOr(v5, v4);
    }
    i = (unsigned int)(i + 1);
  }
}

/*
==============
R_UGB_UploadPagesCompute
==============
*/
void R_UGB_UploadPagesCompute(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  __int64 smpFrame; 
  __int64 v5; 

  if ( !data->compute.smpEnabled && !data->computeReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 3355, ASSERT_TYPE_ASSERT, "(data->computeReady)", (const char *)&queryFormat, "data->computeReady") )
    __debugbreak();
  R_ComputeWaitForCompute(state, PIPE_FLUSH_FULL);
  smpFrame = data->smpFrame;
  v5 = smpFrame;
  if ( !s_ugbBackendGlob[smpFrame].backendReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 3373, ASSERT_TYPE_ASSERT, "(s_ugbBackendGlob[smpFrame].backendReady)", (const char *)&queryFormat, "s_ugbBackendGlob[smpFrame].backendReady") )
    __debugbreak();
  UGBWCRing::UpdateRingBufferContext(&s_wcMemGlob.stagingRing, state);
  if ( s_ugbBackendGlob[v5].needUpdateXSurfUGBData )
  {
    RB_UGB_FixupXSurfUGBData(state, smpFrame);
    s_ugbBackendGlob[v5].needUpdateXSurfUGBData = 0;
  }
  if ( s_ugbBackendGlob[v5].needUpdateSModelSurfIndirection )
  {
    RB_UGB_FixupSModelSurfUGBData(state, smpFrame);
    s_ugbBackendGlob[v5].needUpdateSModelSurfIndirection = 0;
  }
  R_ProfBeginNamedEvent(state, "Begin UVB backend");
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_GPU_BeginTimer(GPU_TIMER_UVB_COPY_VERT_PAGES);
  UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::UploadPages(&s_uvbBuf, state, data, rgp.uvbCopyVertPages, rgp.uvbClearVertPages, RB_UVB_UploadPageArg);
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_GPU_EndTimer();
  R_ProfEndNamedEvent(state);
  R_ProfBeginNamedEvent(state, "Begin UOB backend");
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_GPU_BeginTimer(GPU_TIMER_UOB_COPY_VERT_PAGES);
  UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::UploadPages(&s_uobBuf, state, data, rgp.uobCopyPages, rgp.uobClearPages, RB_UOB_UploadPageArg);
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_GPU_EndTimer();
  R_ProfEndNamedEvent(state);
  R_ProfBeginNamedEvent(state, "Begin UIB backend");
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_GPU_BeginTimer(GPU_TIMER_UIB_COPY_INDEX_PAGES);
  UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::UploadPages(&s_uibBuf, state, data, rgp.uibCopyIndexPages, rgp.uibClearIndexPages, RB_UIB_UploadPageArg);
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_GPU_EndTimer();
  R_ProfEndNamedEvent(state);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
}

/*
==============
R_UIB_GetSurfVirtPageStart
==============
*/
__int64 R_UIB_GetSurfVirtPageStart(unsigned __int16 ugbID)
{
  return s_uibBuf.surfInfo[ugbID].vpageStart;
}

/*
==============
R_UIB_MakeXSurfsResident
==============
*/
UGBPagingBackendData<49152> *R_UIB_MakeXSurfsResident()
{
  unsigned int xsurfDWordCount; 
  int v2; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int *physPageInUseBits; 
  __int64 v7; 
  unsigned int *virtPageInUseBits; 
  int v9; 
  __int64 v10; 
  unsigned int pageArgUploadCount; 
  int v12; 
  unsigned int *v13; 
  __int64 v14; 
  UGBPagingBackendData<49152> *result; 

  Sys_ProfBeginNamedEvent(0xFF708090, "UIB Mark Surfs resident");
  xsurfDWordCount = s_ugbGlob.xsurfDWordCount;
  _EDI = s_ugbGlob.xsurfDeltaResidencyBits[0];
  v2 = 0;
  LODWORD(v3) = 0;
  v4 = 0;
  while ( _EDI )
  {
LABEL_5:
    __asm { tzcnt   edx, edi }
    _EDI &= ~(1 << _EDX);
    R_UIB_MarkXSurfPagesResident(_EDX + 32 * v3, v4++);
  }
  while ( 1 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= xsurfDWordCount )
      break;
    _EDI = s_ugbGlob.xsurfDeltaResidencyBits[v3];
    if ( _EDI )
      goto LABEL_5;
  }
  Sys_ProfEndNamedEvent();
  UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::HandlePhysPageLimits(&s_uibBuf);
  Sys_ProfBeginNamedEvent(0xFF708090, "UIB Make Surfs resident");
  UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::MakeVirtualPagesResident(&s_uibBuf);
  Sys_ProfEndNamedEvent();
  physPageInUseBits = s_uibBuf.pageMan.physPageInUseBits;
  v7 = 1536i64;
  if ( rg.stats && r_gpShowStats->current.integer )
  {
    virtPageInUseBits = s_uibBuf.pageMan.virtPageInUseBits;
    v9 = 0;
    v10 = 37888i64;
    pageArgUploadCount = s_uibBuf.curBackEnd->pageArgUploadCount;
    do
    {
      v9 += __popcnt(*virtPageInUseBits++);
      --v10;
    }
    while ( v10 );
    v12 = 0;
    v13 = s_uibBuf.pageMan.physPageInUseBits;
    v14 = 1536i64;
    do
    {
      v12 += __popcnt(*v13++);
      --v14;
    }
    while ( v14 );
    rg.stats->ugbVirtPageAllocatedCount[s_uibBuf.type] = s_uibBuf.allocedVirtPageCount;
    rg.stats->ugbVirtPageToPageInCount[s_uibBuf.type] = pageArgUploadCount;
    rg.stats->ugbVirtPageInUseCount[s_uibBuf.type] = v9;
    rg.stats->ugbPhysPageInUseCount[s_uibBuf.type] = v12;
    rg.stats->ugbMemoryInUse[s_uibBuf.type] = 384 * v12;
    rg.stats->ugbPhysPageWatermark[s_uibBuf.type] = s_uibBuf.physPageWatermark;
    rg.stats->ugbMemWatermark[s_uibBuf.type] = 384 * s_uibBuf.physPageWatermark;
  }
  do
  {
    v2 += __popcnt(*physPageInUseBits++);
    --v7;
  }
  while ( v7 );
  result = s_uibBuf.curBackEnd;
  s_uibBuf.usageRatio = (float)v2 * 0.000020345053;
  s_uibBuf.curBackEnd->backendReady = 1;
  return result;
}

/*
==============
R_UIB_MakeXSurfsResident_Worker
==============
*/

void __fastcall R_UIB_MakeXSurfsResident_Worker(const void *const cmd)
{
  R_UIB_MakeXSurfsResident();
}

/*
==============
R_UIB_MarkXSurfPagesResident
==============
*/
void R_UIB_MarkXSurfPagesResident(unsigned int index, unsigned int runningIndex)
{
  UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::MarkXSurfPagesResident(&s_uibBuf, index);
}

/*
==============
R_UOB_AllocateVirtualPages
==============
*/
char R_UOB_AllocateVirtualPages(const XSurface *xsurf, unsigned __int16 ugbID)
{
  __int64 v2; 
  unsigned __int16 v3; 
  unsigned int v5; 
  unsigned __int64 v6; 
  unsigned __int16 flags; 
  unsigned int v8; 
  BlendShapesRecalcTangentFrameData *blendShapesRecalcTangentFrameData; 
  BlendShapesPerVert *blendShapesPerVert; 
  unsigned int allocedVirtPageCount; 
  char v12; 
  char result; 

  v2 = ugbID;
  v3 = 0;
  v5 = 0;
  v6 = 20i64 * ugbID;
  *(_QWORD *)&s_ugbGlob.surfOptBufInfo[v6 / 0x14].vpageOffsets.secondUVOffset = 0i64;
  *(_QWORD *)&s_ugbGlob.smodelSurfIndirection[v6 / 2 - 655356] = 0i64;
  *(_DWORD *)&s_ugbGlob.smodelSurfIndirection[v6 / 2 - 655352] = 0;
  flags = xsurf->flags;
  if ( (xsurf->flags & 0x80u) != 0 )
  {
    s_ugbGlob.surfOptBufInfo[v6 / 0x14].vpageOffsets.secondUVOffset = truncate_cast<unsigned short,unsigned int>(0);
    v8 = (4 * (unsigned int)xsurf->vertCount + 1023) >> 10;
    s_ugbGlob.smodelSurfIndirection[v6 / 2 - 655359] = truncate_cast<unsigned short,unsigned int>(v8);
    s_ugbGlob.smodelSurfIndirection[v6 / 2 - 655359] = truncate_cast<unsigned short,unsigned int>(v8);
    v5 = ((4 * (unsigned int)xsurf->vertCount + 1023) >> 10) + v8;
    s_ugbGlob.smodelSurfIndirection[v6 / 2 - 655358] = truncate_cast<unsigned short,unsigned int>(v5);
    flags = xsurf->flags;
  }
  if ( (flags & 2) != 0 )
  {
    if ( !xsurf->blendVerts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1606, ASSERT_TYPE_ASSERT, "(xsurf->blendVerts)", (const char *)&queryFormat, "xsurf->blendVerts") )
      __debugbreak();
    s_ugbGlob.smodelSurfIndirection[v6 / 2 - 655358] = truncate_cast<unsigned short,unsigned int>(v5);
    v5 += ((unsigned __int64)xsurf->blendVertSize + 1023) >> 10;
    s_ugbGlob.smodelSurfIndirection[v6 / 2 - 655357] = truncate_cast<unsigned short,unsigned int>(v5);
    flags = xsurf->flags;
  }
  if ( (flags & 8) != 0 )
  {
    if ( !xsurf->lmapCoords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1616, ASSERT_TYPE_ASSERT, "(xsurf->lmapCoords)", (const char *)&queryFormat, "xsurf->lmapCoords") )
      __debugbreak();
    s_ugbGlob.smodelSurfIndirection[v6 / 2 - 655357] = truncate_cast<unsigned short,unsigned int>(v5);
    v5 += (4 * (unsigned int)xsurf->vertCount + 1023) >> 10;
    s_ugbGlob.smodelSurfIndirection[v6 / 2 - 655356] = truncate_cast<unsigned short,unsigned int>(v5);
    flags = xsurf->flags;
  }
  if ( (flags & 1) != 0 )
  {
    s_ugbGlob.smodelSurfIndirection[v6 / 2 - 655356] = truncate_cast<unsigned short,unsigned int>(v5);
    v5 += (4 * (unsigned int)xsurf->vertCount + 1023) >> 10;
    s_ugbGlob.smodelSurfIndirection[v6 / 2 - 655355] = truncate_cast<unsigned short,unsigned int>(v5);
  }
  blendShapesRecalcTangentFrameData = xsurf->blendShapesRecalcTangentFrameData;
  if ( blendShapesRecalcTangentFrameData )
  {
    if ( !blendShapesRecalcTangentFrameData->topologicalData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1655, ASSERT_TYPE_ASSERT, "(recalcTangentFrameData->topologicalData)", (const char *)&queryFormat, "recalcTangentFrameData->topologicalData") )
      __debugbreak();
    s_ugbGlob.smodelSurfIndirection[v6 / 2 - 655353] = truncate_cast<unsigned short,unsigned int>(v5);
    v5 += ((unsigned __int64)blendShapesRecalcTangentFrameData->bufferSize + 1023) >> 10;
    s_ugbGlob.smodelSurfIndirection[v6 / 2 - 655352] = truncate_cast<unsigned short,unsigned int>(v5);
  }
  blendShapesPerVert = xsurf->blendShapesPerVert;
  if ( blendShapesPerVert )
  {
    if ( !blendShapesPerVert->perVertBlendShapeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1667, ASSERT_TYPE_ASSERT, "(blendShapesPerVert->perVertBlendShapeData)", (const char *)&queryFormat, "blendShapesPerVert->perVertBlendShapeData") )
      __debugbreak();
    s_ugbGlob.smodelSurfIndirection[v6 / 2 - 655352] = truncate_cast<unsigned short,unsigned int>(v5);
    v5 += ((unsigned __int64)blendShapesPerVert->perVertBlendShapeDataSize + 1023) >> 10;
    s_ugbGlob.smodelSurfIndirection[v6 / 2 - 655351] = truncate_cast<unsigned short,unsigned int>(v5);
  }
  if ( v5 > 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1675, ASSERT_TYPE_ASSERT, "(numPagesToAlloc <= 65536)", (const char *)&queryFormat, "numPagesToAlloc <= UOB_XSURF_MAX_PAGES") )
    __debugbreak();
  if ( !v5 )
    return 1;
  allocedVirtPageCount = s_uobBuf.allocedVirtPageCount;
  if ( s_uobBuf.allocedVirtPageCount + v5 > 0xA0000 )
  {
    Sys_Error((const ObfuscateErrorText)&stru_143DB3D90, g_unifiedBufferNames[s_uobBuf.type], 655360i64, s_uobBuf.allocedVirtPageCount + v5 - 655360);
    v12 = 0;
    allocedVirtPageCount = 0;
  }
  else
  {
    s_uobBuf.allocedVirtPageCount += v5;
    v12 = 1;
    v3 = truncate_cast<unsigned short,unsigned int>(v5);
  }
  s_uobBuf.surfInfo[v2].vpageCount = v3;
  result = v12;
  s_uobBuf.surfInfo[v2].vpageStart = allocedVirtPageCount;
  return result;
}

/*
==============
R_UOB_GetBlendInfoVPageStart
==============
*/
__int64 R_UOB_GetBlendInfoVPageStart(unsigned __int16 ugbID)
{
  return s_uobBuf.surfInfo[ugbID].vpageStart + s_ugbGlob.smodelSurfIndirection[10 * ugbID - 655358];
}

/*
==============
R_UOB_GetBlendShapesPerVertDataVPageStart
==============
*/
__int64 R_UOB_GetBlendShapesPerVertDataVPageStart(unsigned __int16 ugbID)
{
  return s_uobBuf.surfInfo[ugbID].vpageStart + s_ugbGlob.smodelSurfIndirection[10 * ugbID - 655352];
}

/*
==============
R_UOB_GetColorDataPageStart
==============
*/
__int64 R_UOB_GetColorDataPageStart(unsigned __int16 ugbID)
{
  return s_uobBuf.surfInfo[ugbID].vpageStart + s_ugbGlob.smodelSurfIndirection[10 * ugbID - 655356];
}

/*
==============
R_UOB_GetLMapUVVPageStart
==============
*/
__int64 R_UOB_GetLMapUVVPageStart(unsigned __int16 ugbID)
{
  return s_uobBuf.surfInfo[ugbID].vpageStart + s_ugbGlob.smodelSurfIndirection[10 * ugbID - 655357];
}

/*
==============
R_UOB_GetNormalTransformVPageStart
==============
*/
__int64 R_UOB_GetNormalTransformVPageStart(unsigned __int16 ugbID)
{
  return s_uobBuf.surfInfo[ugbID].vpageStart + s_ugbGlob.smodelSurfIndirection[10 * ugbID - 655359];
}

/*
==============
R_UOB_GetRecalcTangentFrameDataVPageStart
==============
*/
__int64 R_UOB_GetRecalcTangentFrameDataVPageStart(unsigned __int16 ugbID)
{
  return s_uobBuf.surfInfo[ugbID].vpageStart + s_ugbGlob.smodelSurfIndirection[10 * ugbID - 655353];
}

/*
==============
R_UOB_GetSecondUVVPageStart
==============
*/
__int64 R_UOB_GetSecondUVVPageStart(unsigned __int16 ugbID)
{
  return s_uobBuf.surfInfo[ugbID].vpageStart + s_ugbGlob.surfOptBufInfo[ugbID].vpageOffsets.secondUVOffset;
}

/*
==============
R_UOB_GetSurfVirtPageStart
==============
*/
__int64 R_UOB_GetSurfVirtPageStart(unsigned __int16 ugbID)
{
  return s_uobBuf.surfInfo[ugbID].vpageStart;
}

/*
==============
R_UOB_MakeXSurfsResident
==============
*/
UGBPagingBackendData<16384> *R_UOB_MakeXSurfsResident()
{
  unsigned int xsurfDWordCount; 
  int v2; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int *physPageInUseBits; 
  __int64 v7; 
  unsigned int *virtPageInUseBits; 
  int v9; 
  __int64 v10; 
  unsigned int pageArgUploadCount; 
  int v12; 
  unsigned int *v13; 
  __int64 v14; 
  UGBPagingBackendData<16384> *result; 

  if ( s_uobBuf.allocedVirtPageCount )
  {
    Sys_ProfBeginNamedEvent(0xFF708090, "UOB Mark Surfs resident");
    xsurfDWordCount = s_ugbGlob.xsurfDWordCount;
    _EDI = s_ugbGlob.xsurfDeltaResidencyBits[0];
    v2 = 0;
    LODWORD(v3) = 0;
    v4 = 0;
    while ( _EDI )
    {
LABEL_6:
      __asm { tzcnt   edx, edi }
      _EDI &= ~(1 << _EDX);
      R_UOB_MarkXSurfPagesResident(_EDX + 32 * v3, v4++);
    }
    while ( 1 )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= xsurfDWordCount )
        break;
      _EDI = s_ugbGlob.xsurfDeltaResidencyBits[v3];
      if ( _EDI )
        goto LABEL_6;
    }
    Sys_ProfEndNamedEvent();
    UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::HandlePhysPageLimits(&s_uobBuf);
    Sys_ProfBeginNamedEvent(0xFF708090, "UOB Make Surfs resident");
    UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::MakeVirtualPagesResident(&s_uobBuf);
    Sys_ProfEndNamedEvent();
    physPageInUseBits = s_uobBuf.pageMan.physPageInUseBits;
    v7 = 512i64;
    if ( rg.stats && r_gpShowStats->current.integer )
    {
      virtPageInUseBits = s_uobBuf.pageMan.virtPageInUseBits;
      v9 = 0;
      v10 = 20480i64;
      pageArgUploadCount = s_uobBuf.curBackEnd->pageArgUploadCount;
      do
      {
        v9 += __popcnt(*virtPageInUseBits++);
        --v10;
      }
      while ( v10 );
      v12 = 0;
      v13 = s_uobBuf.pageMan.physPageInUseBits;
      v14 = 512i64;
      do
      {
        v12 += __popcnt(*v13++);
        --v14;
      }
      while ( v14 );
      rg.stats->ugbVirtPageAllocatedCount[s_uobBuf.type] = s_uobBuf.allocedVirtPageCount;
      rg.stats->ugbVirtPageToPageInCount[s_uobBuf.type] = pageArgUploadCount;
      rg.stats->ugbVirtPageInUseCount[s_uobBuf.type] = v9;
      rg.stats->ugbPhysPageInUseCount[s_uobBuf.type] = v12;
      rg.stats->ugbMemoryInUse[s_uobBuf.type] = v12 << 10;
      rg.stats->ugbPhysPageWatermark[s_uobBuf.type] = s_uobBuf.physPageWatermark;
      rg.stats->ugbMemWatermark[s_uobBuf.type] = s_uobBuf.physPageWatermark << 10;
    }
    do
    {
      v2 += __popcnt(*physPageInUseBits++);
      --v7;
    }
    while ( v7 );
    result = s_uobBuf.curBackEnd;
    s_uobBuf.usageRatio = (float)v2 * 0.000061035156;
    s_uobBuf.curBackEnd->backendReady = 1;
  }
  return result;
}

/*
==============
R_UOB_MakeXSurfsResident_Worker
==============
*/

void __fastcall R_UOB_MakeXSurfsResident_Worker(const void *const cmd)
{
  R_UOB_MakeXSurfsResident();
}

/*
==============
R_UOB_MarkXSurfPagesResident
==============
*/
void R_UOB_MarkXSurfPagesResident(unsigned int ugbID, unsigned int runningIndex)
{
  if ( s_uobBuf.surfInfo[ugbID].vpageCount )
    UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::MarkXSurfPagesResident(&s_uobBuf, ugbID);
}

/*
==============
R_UVB_GetSurfVirtPageStart
==============
*/
__int64 R_UVB_GetSurfVirtPageStart(unsigned __int16 ugbID)
{
  return s_uvbBuf.surfInfo[ugbID].vpageStart;
}

/*
==============
R_UVB_MakeXSurfsResident
==============
*/
UGBPagingBackendData<52992> *R_UVB_MakeXSurfsResident()
{
  unsigned int xsurfDWordCount; 
  int v2; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int *physPageInUseBits; 
  __int64 v7; 
  unsigned int *virtPageInUseBits; 
  int v9; 
  __int64 v10; 
  unsigned int pageArgUploadCount; 
  int v12; 
  unsigned int *v13; 
  __int64 v14; 
  UGBPagingBackendData<52992> *result; 

  Sys_ProfBeginNamedEvent(0xFF708090, "UVB Mark Surfs resident");
  xsurfDWordCount = s_ugbGlob.xsurfDWordCount;
  _EDI = s_ugbGlob.xsurfDeltaResidencyBits[0];
  v2 = 0;
  LODWORD(v3) = 0;
  v4 = 0;
  while ( _EDI )
  {
LABEL_5:
    __asm { tzcnt   edx, edi }
    _EDI &= ~(1 << _EDX);
    R_UVB_MarkXSurfPagesResident(_EDX + 32 * v3, v4++);
  }
  while ( 1 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= xsurfDWordCount )
      break;
    _EDI = s_ugbGlob.xsurfDeltaResidencyBits[v3];
    if ( _EDI )
      goto LABEL_5;
  }
  Sys_ProfEndNamedEvent();
  UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::HandlePhysPageLimits(&s_uvbBuf);
  Sys_ProfBeginNamedEvent(0xFF708090, "UVB Make Surfs resident");
  UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::MakeVirtualPagesResident(&s_uvbBuf);
  Sys_ProfEndNamedEvent();
  physPageInUseBits = s_uvbBuf.pageMan.physPageInUseBits;
  v7 = 1656i64;
  if ( rg.stats && r_gpShowStats->current.integer )
  {
    virtPageInUseBits = s_uvbBuf.pageMan.virtPageInUseBits;
    v9 = 0;
    v10 = 40960i64;
    pageArgUploadCount = s_uvbBuf.curBackEnd->pageArgUploadCount;
    do
    {
      v9 += __popcnt(*virtPageInUseBits++);
      --v10;
    }
    while ( v10 );
    v12 = 0;
    v13 = s_uvbBuf.pageMan.physPageInUseBits;
    v14 = 1656i64;
    do
    {
      v12 += __popcnt(*v13++);
      --v14;
    }
    while ( v14 );
    rg.stats->ugbVirtPageAllocatedCount[s_uvbBuf.type] = s_uvbBuf.allocedVirtPageCount;
    rg.stats->ugbVirtPageToPageInCount[s_uvbBuf.type] = pageArgUploadCount;
    rg.stats->ugbVirtPageInUseCount[s_uvbBuf.type] = v9;
    rg.stats->ugbPhysPageInUseCount[s_uvbBuf.type] = v12;
    rg.stats->ugbMemoryInUse[s_uvbBuf.type] = 1280 * v12;
    rg.stats->ugbPhysPageWatermark[s_uvbBuf.type] = s_uvbBuf.physPageWatermark;
    rg.stats->ugbMemWatermark[s_uvbBuf.type] = 1280 * s_uvbBuf.physPageWatermark;
  }
  do
  {
    v2 += __popcnt(*physPageInUseBits++);
    --v7;
  }
  while ( v7 );
  result = s_uvbBuf.curBackEnd;
  s_uvbBuf.usageRatio = (float)v2 * 0.000018870773;
  s_uvbBuf.curBackEnd->backendReady = 1;
  return result;
}

/*
==============
R_UVB_MakeXSurfsResident_Worker
==============
*/

void __fastcall R_UVB_MakeXSurfsResident_Worker(const void *const cmd)
{
  R_UVB_MakeXSurfsResident();
}

/*
==============
R_UVB_MarkXSurfPagesResident
==============
*/
void R_UVB_MarkXSurfPagesResident(unsigned int ugbID, unsigned int runningIndex)
{
  UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::MarkXSurfPagesResident(&s_uvbBuf, ugbID);
}

/*
==============
UGBWCRing::UpdateRingBufferContext
==============
*/
void UGBWCRing::UpdateRingBufferContext(UGBWCRing *this, ComputeCmdBufState *state)
{
  unsigned int gpuReadPosIndex; 
  unsigned __int64 fence; 
  ComputeContextType currentContextType; 
  ComputeContextType v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 

  if ( state->computeContextType != this->currentContextType )
  {
    if ( this->gpuReadLoopCount > this->cpuWriteLoopCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 707, ASSERT_TYPE_ASSERT, "(gpuReadLoopCount <= cpuWriteLoopCount)", (const char *)&queryFormat, "gpuReadLoopCount <= cpuWriteLoopCount") )
      __debugbreak();
    gpuReadPosIndex = this->gpuReadPosIndex;
    while ( __PAIR64__(gpuReadPosIndex, this->cpuWriteLoopCount) != *(_QWORD *)&this->gpuReadLoopCount )
    {
      Com_Printf(8, "We are in UpdateRingBufferContextLoop");
      fence = this->pos[this->gpuReadPosIndex].fence;
      currentContextType = this->currentContextType;
      if ( currentContextType == COMPUTE_CONTEXT_TYPE_GFX )
        goto LABEL_28;
      if ( currentContextType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 853, ASSERT_TYPE_ASSERT, "(currentContextType == COMPUTE_CONTEXT_TYPE_GFX || currentContextType == COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND)", (const char *)&queryFormat, "currentContextType == COMPUTE_CONTEXT_TYPE_GFX || currentContextType == COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND") )
        __debugbreak();
      v6 = this->currentContextType;
      if ( v6 == COMPUTE_CONTEXT_TYPE_GFX )
      {
LABEL_28:
        for ( g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence); g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue < fence; g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence) )
        {
          if ( GetCurrentProcessorNumber() == 1 )
            Sys_PushUnblockDatabaseThread();
          R_WarnOncePerFrame(R_WARN_UGB_STAGING_FENCE);
          Com_Printf(8, "Waiting on UGB page in compute jobs\n");
          Sys_Sleep(1);
          if ( GetCurrentProcessorNumber() == 1 )
            Sys_PopUnblockDatabaseThread();
        }
      }
      else if ( v6 == COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND )
      {
        while ( 1 )
        {
          if ( !this->computeFenceAddr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 812, ASSERT_TYPE_ASSERT, "(computeFenceAddr)", (const char *)&queryFormat, "computeFenceAddr") )
            __debugbreak();
          if ( fence > this->computeFenceCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 813, ASSERT_TYPE_ASSERT, "(fence <= computeFenceCounter)", "%s\n\tcpu waiting for a gpu fence that was never queued on the gpu", "fence <= computeFenceCounter") )
            __debugbreak();
          if ( *this->computeFenceAddr >= fence )
            break;
          if ( GetCurrentProcessorNumber() == 1 )
            Sys_PushUnblockDatabaseThread();
          R_WarnOncePerFrame(R_WARN_UGB_STAGING_FENCE);
          Com_Printf(8, "Waiting on UGB page in compute jobs\n");
          Sys_Sleep(1);
          if ( GetCurrentProcessorNumber() == 1 )
            Sys_PopUnblockDatabaseThread();
        }
        if ( *this->computeFenceAddr > this->computeFenceCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 821, ASSERT_TYPE_ASSERT, "(*computeFenceAddr <= computeFenceCounter)", "%s\n\tcompute fence was incremented more times on gpu than expected by cpu", "*computeFenceAddr <= computeFenceCounter") )
          __debugbreak();
      }
      v7 = this->gpuReadPosIndex;
      v8 = 2 * (v7 + 2);
      gpuReadPosIndex = ((_BYTE)v7 + 1) & 0x7F;
      v9 = *(&this->nextCPUWritePos + 2 * v8);
      this->nextGPUReadPos = v9;
      this->gpuReadPosIndex = gpuReadPosIndex;
      if ( !v9 )
        ++this->gpuReadLoopCount;
    }
    this->currentContextType = state->computeContextType;
  }
}

/*
==============
UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::UploadPages
==============
*/
void UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData>::UploadPages(UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData> *this, ComputeCmdBufState *state, const GfxBackEndData *data, const ComputeShader *pagingShader, const ComputeShader *clearShader, void (*uploadFunc)(unsigned int, const UGBPageArgs *, unsigned int))
{
  ComputeCmdBufState *v7; 
  __int64 smpFrame; 
  UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData> *v9; 
  bool v10; 
  UGBPagingBackendData<16384> *v11; 
  __int64 pageArgUploadCount; 
  GfxShaderBufferView *physPageDataBuffer; 
  unsigned int v14; 
  unsigned __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  int v19; 
  int v20; 
  char *v21; 
  unsigned int v22; 
  void (__fastcall *v23)(unsigned int, const UGBPageArgs *, unsigned int); 
  ComputeCmdBufState *v24; 
  ComputeContextType computeContextType; 
  GfxShaderBufferView *views; 
  unsigned int v27; 
  void (__fastcall *v28)(unsigned int, const UGBPageArgs *, unsigned int); 
  UGBVirtualBuffer<64,16384,655360,512,16,UGBPageArgsGPU,UGBPageData> *v29; 
  ComputeCmdBufState *statea; 
  unsigned __int64 v31; 
  unsigned int dataa; 
  unsigned int v33; 

  v28 = uploadFunc;
  v7 = state;
  smpFrame = data->smpFrame;
  v9 = this;
  v10 = this->allocedVirtPageCount == 0;
  v11 = &this->backend[smpFrame];
  pageArgUploadCount = this->backend[smpFrame].pageArgUploadCount;
  statea = state;
  v29 = this;
  v27 = smpFrame;
  if ( !v10 && (_DWORD)pageArgUploadCount )
  {
    if ( !this->backend[smpFrame].backendReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1342, ASSERT_TYPE_ASSERT, "(curBackend.backendReady)", (const char *)&queryFormat, "curBackend.backendReady") )
      __debugbreak();
    views = &s_wcMemGlob.stagingRingBuffer.view;
    R_SetComputeViews(v7, 0, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferView *)&v9->physBuffer->rwView;
    R_SetComputeRWViewsWithCounters(v7, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    views = (GfxShaderBufferView *)&v9->virtPageTableBuffer->rwView;
    R_SetComputeRWViewsWithCounters(v7, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    physPageDataBuffer = (GfxShaderBufferView *)v9->physPageDataBuffer;
    if ( physPageDataBuffer )
    {
      views = physPageDataBuffer + 2;
      R_SetComputeRWViewsWithCounters(v7, 2, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    }
    R_SetComputeShader(v7, pagingShader);
    v14 = 0;
    v15 = (unsigned __int64)(pageArgUploadCount + 511) >> 9;
    v16 = 0;
    v31 = v15;
    if ( (_DWORD)v15 )
    {
      v17 = v15 - 1;
      LODWORD(views) = v17;
      do
      {
        v18 = 0;
        if ( v16 >= v17 )
          v19 = pageArgUploadCount - (v16 << 9);
        else
          v19 = 512;
        v20 = 8 * v19;
        dataa = UGBWCRing::Allocate(&s_wcMemGlob.stagingRing, v7, 1032 * v19);
        v33 = v20 + dataa;
        R_UploadAndSetComputeConstants(v7, 0, &dataa, 0x10u, NULL);
        v21 = (char *)R_BeginWrappedBufferDataWrite(&s_wcMemGlob.stagingRingBuffer);
        if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1290, ASSERT_TYPE_ASSERT, "(ringBufferPtr)", (const char *)&queryFormat, "ringBufferPtr") )
          __debugbreak();
        v22 = v27;
        v9->pageArgsGPU = (UGBPageArgsGPU *)&v21[dataa];
        v9->stagingBufferGPU = (unsigned __int8 *)&v21[v33];
        v23 = v28;
        do
        {
          if ( v14 >= (unsigned int)pageArgUploadCount )
            break;
          v23(v22, &v11->pageArgsToUpload[v14++], v18++);
        }
        while ( v18 < 0x200 );
        R_EndWrappedBufferDataWrite(&s_wcMemGlob.stagingRingBuffer);
        v9 = v29;
        v7 = statea;
        v24 = statea;
        v29->pageArgsGPU = NULL;
        v9->stagingBufferGPU = NULL;
        R_Dispatch(v24, v18, 1u, 1u);
        computeContextType = v7->computeContextType;
        if ( computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
        {
          R_ComputeWaitForCompute(v7, PIPE_FLUSH_FULL);
        }
        else if ( computeContextType == COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND )
        {
          ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))v7->device->m_pFunction[22].AddRef)(v7->device, 146800640i64, 0i64, 0xFFFFFFFF00i64);
        }
        v17 = (unsigned int)views;
        ++v16;
      }
      while ( v16 < (unsigned int)v31 );
    }
  }
}

/*
==============
UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::UploadPages
==============
*/
void UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData>::UploadPages(UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData> *this, ComputeCmdBufState *state, const GfxBackEndData *data, const ComputeShader *pagingShader, const ComputeShader *clearShader, void (*uploadFunc)(unsigned int, const UGBPageArgs *, unsigned int))
{
  ComputeCmdBufState *v7; 
  __int64 smpFrame; 
  UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData> *v9; 
  bool v10; 
  UGBPagingBackendData<49152> *v11; 
  __int64 pageArgUploadCount; 
  GfxShaderBufferView *physPageDataBuffer; 
  unsigned int v14; 
  unsigned __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  int v19; 
  int v20; 
  char *v21; 
  unsigned int v22; 
  void (__fastcall *v23)(unsigned int, const UGBPageArgs *, unsigned int); 
  ComputeCmdBufState *v24; 
  ComputeContextType computeContextType; 
  GfxShaderBufferView *views; 
  unsigned int v27; 
  void (__fastcall *v28)(unsigned int, const UGBPageArgs *, unsigned int); 
  UGBVirtualBuffer<64,49152,1212416,2048,6,UIBPageArgsGPU,UIBPageData> *v29; 
  ComputeCmdBufState *statea; 
  unsigned __int64 v31; 
  unsigned int dataa; 
  unsigned int v33; 

  v28 = uploadFunc;
  v7 = state;
  smpFrame = data->smpFrame;
  v9 = this;
  v10 = this->allocedVirtPageCount == 0;
  v11 = &this->backend[smpFrame];
  pageArgUploadCount = this->backend[smpFrame].pageArgUploadCount;
  statea = state;
  v29 = this;
  v27 = smpFrame;
  if ( !v10 && (_DWORD)pageArgUploadCount )
  {
    if ( !this->backend[smpFrame].backendReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1342, ASSERT_TYPE_ASSERT, "(curBackend.backendReady)", (const char *)&queryFormat, "curBackend.backendReady") )
      __debugbreak();
    views = &s_wcMemGlob.stagingRingBuffer.view;
    R_SetComputeViews(v7, 0, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferView *)&v9->physBuffer->rwView;
    R_SetComputeRWViewsWithCounters(v7, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    views = (GfxShaderBufferView *)&v9->virtPageTableBuffer->rwView;
    R_SetComputeRWViewsWithCounters(v7, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    physPageDataBuffer = (GfxShaderBufferView *)v9->physPageDataBuffer;
    if ( physPageDataBuffer )
    {
      views = physPageDataBuffer + 2;
      R_SetComputeRWViewsWithCounters(v7, 2, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    }
    R_SetComputeShader(v7, pagingShader);
    v14 = 0;
    v15 = (unsigned __int64)(pageArgUploadCount + 2047) >> 11;
    v16 = 0;
    v31 = v15;
    if ( (_DWORD)v15 )
    {
      v17 = v15 - 1;
      LODWORD(views) = v17;
      do
      {
        v18 = 0;
        if ( v16 >= v17 )
          v19 = pageArgUploadCount - (v16 << 11);
        else
          v19 = 2048;
        v20 = 32 * v19;
        dataa = UGBWCRing::Allocate(&s_wcMemGlob.stagingRing, v7, 416 * v19);
        v33 = v20 + dataa;
        R_UploadAndSetComputeConstants(v7, 0, &dataa, 0x10u, NULL);
        v21 = (char *)R_BeginWrappedBufferDataWrite(&s_wcMemGlob.stagingRingBuffer);
        if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1290, ASSERT_TYPE_ASSERT, "(ringBufferPtr)", (const char *)&queryFormat, "ringBufferPtr") )
          __debugbreak();
        v22 = v27;
        v9->pageArgsGPU = (UIBPageArgsGPU *)&v21[dataa];
        v9->stagingBufferGPU = (unsigned __int8 *)&v21[v33];
        v23 = v28;
        do
        {
          if ( v14 >= (unsigned int)pageArgUploadCount )
            break;
          v23(v22, &v11->pageArgsToUpload[v14++], v18++);
        }
        while ( v18 < 0x800 );
        R_EndWrappedBufferDataWrite(&s_wcMemGlob.stagingRingBuffer);
        v9 = v29;
        v7 = statea;
        v24 = statea;
        v29->pageArgsGPU = NULL;
        v9->stagingBufferGPU = NULL;
        R_Dispatch(v24, v18, 1u, 1u);
        computeContextType = v7->computeContextType;
        if ( computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
        {
          R_ComputeWaitForCompute(v7, PIPE_FLUSH_FULL);
        }
        else if ( computeContextType == COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND )
        {
          ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))v7->device->m_pFunction[22].AddRef)(v7->device, 146800640i64, 0i64, 0xFFFFFFFF00i64);
        }
        v17 = (unsigned int)views;
        ++v16;
      }
      while ( v16 < (unsigned int)v31 );
    }
  }
}

/*
==============
UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::UploadPages
==============
*/
void UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData>::UploadPages(UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData> *this, ComputeCmdBufState *state, const GfxBackEndData *data, const ComputeShader *pagingShader, const ComputeShader *clearShader, void (*uploadFunc)(unsigned int, const UGBPageArgs *, unsigned int))
{
  ComputeCmdBufState *v7; 
  __int64 smpFrame; 
  UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData> *v9; 
  bool v10; 
  UGBPagingBackendData<52992> *v11; 
  __int64 pageArgUploadCount; 
  GfxShaderBufferView *physPageDataBuffer; 
  unsigned int v14; 
  unsigned __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  int v19; 
  int v20; 
  char *v21; 
  unsigned int v22; 
  void (__fastcall *v23)(unsigned int, const UGBPageArgs *, unsigned int); 
  ComputeCmdBufState *v24; 
  ComputeContextType computeContextType; 
  GfxShaderBufferView *views; 
  unsigned int v27; 
  void (__fastcall *v28)(unsigned int, const UGBPageArgs *, unsigned int); 
  UGBVirtualBuffer<64,52992,1310720,512,20,UGBPageArgsGPU,UGBPageData> *v29; 
  ComputeCmdBufState *statea; 
  unsigned __int64 v31; 
  unsigned int dataa; 
  unsigned int v33; 

  v28 = uploadFunc;
  v7 = state;
  smpFrame = data->smpFrame;
  v9 = this;
  v10 = this->allocedVirtPageCount == 0;
  v11 = &this->backend[smpFrame];
  pageArgUploadCount = this->backend[smpFrame].pageArgUploadCount;
  statea = state;
  v29 = this;
  v27 = smpFrame;
  if ( !v10 && (_DWORD)pageArgUploadCount )
  {
    if ( !this->backend[smpFrame].backendReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1342, ASSERT_TYPE_ASSERT, "(curBackend.backendReady)", (const char *)&queryFormat, "curBackend.backendReady") )
      __debugbreak();
    views = &s_wcMemGlob.stagingRingBuffer.view;
    R_SetComputeViews(v7, 0, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferView *)&v9->physBuffer->rwView;
    R_SetComputeRWViewsWithCounters(v7, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    views = (GfxShaderBufferView *)&v9->virtPageTableBuffer->rwView;
    R_SetComputeRWViewsWithCounters(v7, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    physPageDataBuffer = (GfxShaderBufferView *)v9->physPageDataBuffer;
    if ( physPageDataBuffer )
    {
      views = physPageDataBuffer + 2;
      R_SetComputeRWViewsWithCounters(v7, 2, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    }
    R_SetComputeShader(v7, pagingShader);
    v14 = 0;
    v15 = (unsigned __int64)(pageArgUploadCount + 511) >> 9;
    v16 = 0;
    v31 = v15;
    if ( (_DWORD)v15 )
    {
      v17 = v15 - 1;
      LODWORD(views) = v17;
      do
      {
        v18 = 0;
        if ( v16 >= v17 )
          v19 = pageArgUploadCount - (v16 << 9);
        else
          v19 = 512;
        v20 = 8 * v19;
        dataa = UGBWCRing::Allocate(&s_wcMemGlob.stagingRing, v7, 1288 * v19);
        v33 = v20 + dataa;
        R_UploadAndSetComputeConstants(v7, 0, &dataa, 0x10u, NULL);
        v21 = (char *)R_BeginWrappedBufferDataWrite(&s_wcMemGlob.stagingRingBuffer);
        if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 1290, ASSERT_TYPE_ASSERT, "(ringBufferPtr)", (const char *)&queryFormat, "ringBufferPtr") )
          __debugbreak();
        v22 = v27;
        v9->pageArgsGPU = (UGBPageArgsGPU *)&v21[dataa];
        v9->stagingBufferGPU = (unsigned __int8 *)&v21[v33];
        v23 = v28;
        do
        {
          if ( v14 >= (unsigned int)pageArgUploadCount )
            break;
          v23(v22, &v11->pageArgsToUpload[v14++], v18++);
        }
        while ( v18 < 0x200 );
        R_EndWrappedBufferDataWrite(&s_wcMemGlob.stagingRingBuffer);
        v9 = v29;
        v7 = statea;
        v24 = statea;
        v29->pageArgsGPU = NULL;
        v9->stagingBufferGPU = NULL;
        R_Dispatch(v24, v18, 1u, 1u);
        computeContextType = v7->computeContextType;
        if ( computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
        {
          R_ComputeWaitForCompute(v7, PIPE_FLUSH_FULL);
        }
        else if ( computeContextType == COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND )
        {
          ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))v7->device->m_pFunction[22].AddRef)(v7->device, 146800640i64, 0i64, 0xFFFFFFFF00i64);
        }
        v17 = (unsigned int)views;
        ++v16;
      }
      while ( v16 < (unsigned int)v31 );
    }
  }
}

/*
==============
UGBWCRing::WaitFence
==============
*/
void UGBWCRing::WaitFence(UGBWCRing *this, ComputeCmdBufState *state)
{
  unsigned __int64 fence; 
  ComputeContextType currentContextType; 
  ComputeContextType v5; 
  __int64 gpuReadPosIndex; 
  unsigned int bufferPos; 

  fence = this->pos[this->gpuReadPosIndex].fence;
  currentContextType = this->currentContextType;
  if ( currentContextType != COMPUTE_CONTEXT_TYPE_GFX && currentContextType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 853, ASSERT_TYPE_ASSERT, "(currentContextType == COMPUTE_CONTEXT_TYPE_GFX || currentContextType == COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND)", (const char *)&queryFormat, "currentContextType == COMPUTE_CONTEXT_TYPE_GFX || currentContextType == COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND") )
    __debugbreak();
  v5 = this->currentContextType;
  if ( v5 == COMPUTE_CONTEXT_TYPE_GFX )
  {
    for ( g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence); g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue < fence; g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence) )
    {
      if ( GetCurrentProcessorNumber() == 1 )
        Sys_PushUnblockDatabaseThread();
      R_WarnOncePerFrame(R_WARN_UGB_STAGING_FENCE);
      Com_Printf(8, "Waiting on UGB page in compute jobs\n");
      Sys_Sleep(1);
      if ( GetCurrentProcessorNumber() == 1 )
        Sys_PopUnblockDatabaseThread();
    }
  }
  else if ( v5 == COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND )
  {
    while ( 1 )
    {
      if ( !this->computeFenceAddr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 812, ASSERT_TYPE_ASSERT, "(computeFenceAddr)", (const char *)&queryFormat, "computeFenceAddr") )
        __debugbreak();
      if ( fence > this->computeFenceCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 813, ASSERT_TYPE_ASSERT, "(fence <= computeFenceCounter)", "%s\n\tcpu waiting for a gpu fence that was never queued on the gpu", "fence <= computeFenceCounter") )
        __debugbreak();
      if ( *this->computeFenceAddr >= fence )
        break;
      if ( GetCurrentProcessorNumber() == 1 )
        Sys_PushUnblockDatabaseThread();
      R_WarnOncePerFrame(R_WARN_UGB_STAGING_FENCE);
      Com_Printf(8, "Waiting on UGB page in compute jobs\n");
      Sys_Sleep(1);
      if ( GetCurrentProcessorNumber() == 1 )
        Sys_PopUnblockDatabaseThread();
    }
    if ( *this->computeFenceAddr > this->computeFenceCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_unified_geo_buffers.cpp", 821, ASSERT_TYPE_ASSERT, "(*computeFenceAddr <= computeFenceCounter)", "%s\n\tcompute fence was incremented more times on gpu than expected by cpu", "*computeFenceAddr <= computeFenceCounter") )
      __debugbreak();
  }
  gpuReadPosIndex = this->gpuReadPosIndex;
  bufferPos = this->pos[gpuReadPosIndex].bufferPos;
  this->nextGPUReadPos = bufferPos;
  this->gpuReadPosIndex = ((_BYTE)gpuReadPosIndex + 1) & 0x7F;
  if ( !bufferPos )
    ++this->gpuReadLoopCount;
}

